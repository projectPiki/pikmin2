#include "JSystem/JAudio/JALCalc.h"
#include "P2Macros.h"
#include "PSGame/CameraMgr.h"
#include "PSGame/PikScene.h"
#include "PSM/BossBgmFader.h"
#include "PSM/BossSeq.h"
#include "PSM/ObjCalc.h"
#include "PSM/ObjMgr.h"
#include "PSM/PikiHumming.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PSM/Scene.h"
#include "PSM/CreaturePrm.h"
#include "PSM/WorldMapRocket.h"
#include "PSSystem/EnvSeBase.h"
#include "PSSystem/PSSeq.h"
#include "PSSystem/PSSystemIF.h"
#include "PSSystem/PSCommon.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSScene.h"
#include "PSSystem/Reservator.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "Game/Navi.h"
#include "Game/PikiMgr.h"
#include "Game/CameraMgr.h"
#include "nans.h"
#include "PSMath.h"
#include "utilityU.h"

static const u32 padding[] = { 0, 0, 0 };

namespace PSM {

/**
 * @note Address: 0x80467630
 * @note Size: 0x84
 */
SceneBase::SceneBase(u8 p1, PSGame::SceneInfo* info)
    : PSGame::PikScene(p1)
    , mSceneInfoA(info)
{
	P2ASSERTLINE(36, info);
	becomeSceneCamera();
}

/**
 * @note Address: 0x804676B4
 * @note Size: 0x8
 */
f32 SceneBase::getSceneFx()
{
	return 0.08f;
}

/**
 * @note Address: 0x804676BC
 * @note Size: 0x58
 */
void SceneBase::becomeSceneCamera()
{
	P2ASSERTLINE(49, mSceneInfoA);
	mSceneInfoA->setStageCamera();
}

/**
 * @note Address: 0x80467714
 * @note Size: 0x54
 */
PSGame::SceneInfo* SceneBase::getSceneInfoA()
{
	P2ASSERTLINE(56, mSceneInfoA);
	return mSceneInfoA;
}

/**
 * @note Address: 0x80467768
 * @note Size: 0x28
 */
void SceneBase::pauseOn_2D(u8 p1, u8 p2)
{
	mSeqMgr.pauseOnAllSeq(PSSystem::SeqBase::PauseMode(p1));
}

/**
 * @note Address: 0x80467790
 * @note Size: 0x24
 */
void SceneBase::pauseOff_2D()
{
	mSeqMgr.pauseOffAllSeq();
}

/**
 * @note Address: 0x804677B4
 * @note Size: 0x4
 */
void SceneBase::pauseOn_Demo()
{
}

/**
 * @note Address: 0x804677B8
 * @note Size: 0x4
 */
void SceneBase::pauseOff_Demo()
{
}

/**
 * @note Address: 0x804677BC
 * @note Size: 0x90
 */
Scene_Global::Scene_Global(u8 p1, PSGame::SceneInfo* info)
    : SceneBase(p1, info)
{
}

/**
 * @note Address: 0x8046784C
 * @note Size: 0xC8
 */
Scene_Global::~Scene_Global()
{
	delete PSSystem::SingletonBase<PSSystem::StreamDataList>::sInstance;
	PSSystem::SingletonBase<PSSystem::StreamDataList>::sInstance = nullptr;
	delete PSSystem::SingletonBase<PSSystem::SeqDataList>::sInstance;
	PSSystem::SingletonBase<PSSystem::SeqDataList>::sInstance = nullptr;
}

/**
 * @note Address: 0x80467914
 * @note Size: 0x8
 */
f32 Scene_Global::getCamDistVol(u8)
{
	return 0.0f;
}

/**
 * @note Address: 0x8046791C
 * @note Size: 0x94
 */
PSSystem::StreamBgm* Scene_Global::getGlobalStream()
{
	PSSystem::SeqBase* seq = mSeqMgr.getSeq(1);
	P2ASSERTLINE(114, seq);
	P2ASSERTLINE(115, seq->getCastType() == PSSystem::SeqBase::TYPE_StreamBgm);
	return static_cast<PSSystem::StreamBgm*>(seq);
}

/**
 * @note Address: 0x804679B0
 * @note Size: 0xBC
 */
void Scene_Global::startGlobalStream(u32 bgmID)
{
	PSSystem::StreamBgm* stream = getGlobalStream();
	stream->setId(bgmID);
	stream->startSeq();
}

// this is here for now, since putting it in a header causes the sym on ordering to go weird and wrong
inline Scene_Demo::~Scene_Demo()
{
}

/**
 * @note Address: 0x80467A6C
 * @note Size: 0x98
 */
Scene_Demo::Scene_Demo(u8 p1, PSGame::SceneInfo* info)
    : SceneBase(p1, info)
    , mGate(0)
{
}

/**
 * @note Address: 0x80467B04
 * @note Size: 0x84
 */
bool Scene_Demo::getSeSceneGate(PSM::ObjBase* obj, u32 p2)
{
	PSM::Creature* gameobj = static_cast<PSM::Creature*>(obj);
	bool hasGate           = false;

	if (obj) {
		hasGate                  = false;
		Game::Creature* creature = gameobj->mGameObj;
		if (creature->isMovieActor() || creature->isMovieExtra()) {
			hasGate = true;
		}
		return hasGate;
	} else {
		return mGate;
	}
}

/**
 * @note Address: 0x80467B88
 * @note Size: 0x8
 */
f32 Scene_Demo::getCamDistVol(u8)
{
	return PSGame::CameraMgr::sDefaultVol;
}

/**
 * @note Address: 0x80467B90
 * @note Size: 0x114
 */
Scene_Objects::Scene_Objects(u8 p1, PSGame::SceneInfo* info)
    : SceneBase(p1, info)
    , mCameraMgr(nullptr)
    , mObjMgr(nullptr)
    , _30(0)
    , mTimer(0xF0000000)
{
	mCameraMgr = new PSGame::CameraMgr();

	bool is2PGame = (u8)info->getFlag(PSGame::SceneInfo::SFBS_1) == TRUE;
	if (!is2PGame) {
		ObjCalc_SingleGame::newInstance_SingleGame();
	} else {
		ObjCalc_2PGame::newInstance_2PGame();
	}

	if (PSSystem::SingletonBase<ObjMgr>::sInstance) {
		adaptObjMgr();
	}
}

/**
 * @note Address: 0x80467CA4
 * @note Size: 0xF8
 */
Scene_Objects::~Scene_Objects()
{
	delete PSSystem::SingletonBase<PSM::ObjMgr>::sInstance;
	PSSystem::SingletonBase<PSM::ObjMgr>::sInstance = nullptr;
	delete PSSystem::SingletonBase<PSM::ObjCalcBase>::sInstance;
	PSSystem::SingletonBase<PSM::ObjCalcBase>::sInstance = nullptr;
	detachObjMgr();
	delete PSSystem::SingletonBase<PSM::ObjMgr>::sInstance;
	PSSystem::SingletonBase<PSM::ObjMgr>::sInstance = nullptr;
}

/**
 * @note Address: 0x80467E00
 * @note Size: 0x60
 */
void Scene_Objects::adaptObjMgr()
{
	mObjMgr          = PSM::ObjMgr::getInstance();
	mObjMgr->mScenes = this;
}

/**
 * @note Address: 0x80467E60
 * @note Size: 0x1C
 */
void Scene_Objects::detachObjMgr()
{
	if (mObjMgr == nullptr) {
		return;
	}
	mObjMgr->mScenes = nullptr;
	mObjMgr          = nullptr;
}

/**
 * @note Address: 0x80467E7C
 * @note Size: 0x40
 */
void Scene_Objects::startMainSeq()
{
	PSSystem::Scene::startMainSeq();
	onStartMainSeq();
}

/**
 * @note Address: 0x80467EBC
 * @note Size: 0x24
 */
void Scene_Objects::onStartMainSeq()
{
	if (mTimer != 0xF0000000) {
		return;
	}
	_30    = 1;
	mTimer = 0;
}

/**
 * @note Address: 0x80467EE0
 * @note Size: 0x14
 */
bool Scene_Objects::getSeSceneGate(PSM::ObjBase*, u32)
{
	return _30;
}

/**
 * @note Address: 0x80467EF4
 * @note Size: 0x24
 */
f32 Scene_Objects::getCamDistVol(u8 p1)
{
	return mCameraMgr->getCurrentCamDistVol(p1);
}

/**
 * @note Address: 0x80467F18
 * @note Size: 0x210
 */
void Scene_Objects::exec()
{
	if (mTimer != -0x10000000) {
		mTimer++;
	}
	PSM::Piki::sDopedPikminNum = 0;

	if (Game::cameraMgr) {
		for (u8 i = 0; i < mSceneInfoA->mCameras; i++) {
			Camera* cam = Game::cameraMgr->mCameraObjList[(int)i];
			if (cam) {
				f32 dist = PSMath::calcDistance(PSMath::toVec(cam->getLookAtPosition()), PSMath::toVec(*cam->getSoundPositionPtr()));
				mCameraMgr->update(i, dist);
				mCameraMgr->mIsSpecial[i] = cam->isSpecialCamera();
			}
		}
	}
	PSSystem::Scene::exec();
	if (mObjMgr) {
		mObjMgr->frameEnd_onPlaySe();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
Scene_Game::Scene_Game(u8 p1, PSGame::SceneInfo* info)
    : Scene_Objects(p1, info)
    , mEnemyBossList()
    , mEnvSeMgr(nullptr)
    , _48(0)
    , _4C(-1)
    , mBossFaderMgr(nullptr)
    , mPersEnvMgr(nullptr)
{
	mHummingMgr = new PikiHummingMgr();
}

/**
 * @note Address: 0x80468128
 * @note Size: 0x114
 */
void Scene_Game::init()
{
	static_cast<SceneMgr*>(PSMGetSceneMgrCheck())->initEnvironmentSe(this);

	if (needBossBgm()) {
		attachBossFaderMgr();
	}
}

/**
 * @note Address: 0x8046823C
 * @note Size: 0x168
 */
Scene_Game::~Scene_Game()
{
	delete PSSystem::SingletonBase<PSM::BossBgmFader::Mgr>::sInstance;
	PSSystem::SingletonBase<PSM::BossBgmFader::Mgr>::sInstance = nullptr;
	if (mEnvSeMgr) {
		mEnvSeMgr->setAllPauseFlag(1);
	}
}

/**
 * @note Address: 0x80468454
 * @note Size: 0x58
 */
void Scene_Game::attachBossFaderMgr()
{
	mBossFaderMgr = BossBgmFader::Mgr::getInstance();
}

/**
 * @note Address: 0x804684AC
 * @note Size: 0x1DC
 */
void Scene_Game::bossKilled(PSM::EnemyBoss* obj)
{
	PSM::MiddleBossSeq* seq = PSMGetMiddleBossSeq();

	bool isNoBossActive = true;
	FOREACH_NODE(JSULink<EnemyBoss>, PSSystem::SingletonBase<BossBgmFader::Mgr>::getInstance()->mTypedProc.getFirst(), link)
	{
		EnemyBoss* boss = link->getObject();
		if (boss->_FE) {
			isNoBossActive = false;
		}
	}
	if (!isNoBossActive && seq) {
		seq = PSMGetMiddleBossSeq();
		if (seq
		    && (seq->mJumpPort.getCurrentTrack() == EnemyMidBoss::BossBgm_AttackPrep
		        || seq->mJumpPort.getCurrentTrack() == EnemyMidBoss::BossBgm_AttackLong)) {
			obj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
		}
	}
}

/**
 * @note Address: 0x80468688
 * @note Size: 0x100
 */
void Scene_Game::startMainSeq()
{
	if (mBossFaderMgr) {
		u8 i = 0;
		for (JSUListIterator<PSSystem::SeqBase> it(&mSeqMgr); it != mSeqMgr.getEnd(); ++it) {
			it->startSeq();
			if (i) {
				JAISound* se = *it->getHandleP();
				if (se) {
					se->setVolume(0.0f, 0, SOUNDPARAM_Unk0);
				}
			}
			i++;
		}
		onStartMainSeq();
	} else {
		PSSystem::Scene::startMainSeq();
		onStartMainSeq();
	}

	if (mEnvSeMgr) {
		mEnvSeMgr->on();
	}
	_4C = 0;
}

/**
 * @note Address: 0x80468788
 * @note Size: 0x8C
 */
void Scene_Game::stopMainSeq(u32 time)
{
	if (mBossFaderMgr) {
		FOREACH_NODE(JSULink<PSSystem::SeqBase>, mSeqMgr.getFirst(), seq)
		{
			seq->getObject()->stopSeq(time);
		}
	} else {
		PSSystem::Scene::stopMainSeq(time);
	}

	if (mEnvSeMgr) {
		mEnvSeMgr->off();
	}
}

/**
 * @note Address: 0x80468814
 * @note Size: 0x50
 */
void Scene_Game::stopAllSound(u32 p1)
{
	if (mEnvSeMgr) {
		mEnvSeMgr->off();
	}
	PSSystem::Scene::stopAllSound(p1);
}

/**
 * @note Address: 0x80468864
 * @note Size: 0x3C4
 */
void Scene_Game::exec()
{
	if (mHummingMgr) {
		mHummingMgr->exec();
	}
	if (mBossFaderMgr) {
		mBossFaderMgr->exec();
	}
	if (mPersEnvMgr) {
		mPersEnvMgr->exec();
	}
	if (mEnvSeMgr) {
		mEnvSeMgr->exec();
	}
	Scene_Objects::exec();
	if (_4C != 0xffffffff) {
		_4C++;
	}

	JSULink<EnemyBoss>* boss = mEnemyBossList.getFirst();
	while (boss) {
		JSULink<EnemyBoss>* link = boss;
		boss                     = boss->getNext();
		link->getObject()->dyingFrameWork();
	}

	ObjCalcBase* calc = PSSystem::SingletonBase<ObjCalcBase>::getInstance();
	if (calc->is1PGame()) {
		u8 mode    = static_cast<ObjCalc_SingleGame*>(calc)->mPlayerNum;
		bool check = (mode == 0 || mode == 1);
		P2ASSERTLINE(508, check);
		f32 vol = mCameraMgr->getBgmCamVol(mode);
		P2ASSERTBOUNDSLINE2(510, 0.0f, vol, 1.0f);
		FOREACH_NODE(JSULink<PSSystem::SeqBase>, mSeqMgr.getFirst(), seq)
		{
			JAISound* se = *seq->getObject()->getHandleP();
			if (se) {
				se->setVolume(vol, 5, SOUNDPARAM_Unk5);
			}
		}
	}
}

/**
 * @note Address: 0x80468C28
 * @note Size: 0x8
 */
PSSystem::EnvSeMgr* Scene_Game::getEnvSe()
{
	return mEnvSeMgr;
}

/**
 * @note Address: 0x80468C30
 * @note Size: 0x58
 */
void Scene_Game::adaptEnvSe(PSSystem::EnvSeMgr* mgr)
{
	P2ASSERTLINE(589, mgr);
	mEnvSeMgr = mgr;
}

/**
 * @note Address: 0x80468C88
 * @note Size: 0x100
 */
void Scene_Game::bossAppear(PSM::EnemyBoss* obj, u16 time)
{
	if (PSMGetMiddleBossSeq() && (!mBossFaderMgr || mBossFaderMgr->mTypedProc.mCurrProcState == BossBgmFader::TypedProc::PROC_None)) {
		obj->jumpRequest(time);
		if (mBossFaderMgr) {
			mBossFaderMgr->mTypedProc.mNeedJump = true;
		}
	}
}

/**
 * @note Address: 0x80468D88
 * @note Size: 0x578
 */
void Scene_Game::pauseOn_2D(u8 a1, u8 a2)
{
	mSeqMgr.pauseOnAllSeq(PSSystem::SeqBase::PauseMode(a1));
	if (mEnvSeMgr) {
		mEnvSeMgr->setAllPauseFlag(a2);
		mEnvSeMgr->mReservator.mState = 0;
	}

	Iterator<Game::Navi> iterator(Game::naviMgr);
	CI_LOOP(iterator)
	{
		Game::Navi* navi = *iterator;
		navi->mSoundObj->stopWaitVoice();
	}

	P2ASSERTLINE(657, mObjMgr);

	for (JSUListIterator<ObjBase> it(mObjMgr); it != mObjMgr->getEnd(); ++it) {
		Navi* navi = static_cast<Navi*>(it.getObject());
		if (navi->getCastType() == CCT_Navi) {
			navi->stopSound(PSSE_PK_HAPPA_THROW_WAIT, 0);
			navi->stopSound(PSSE_PK_VC_THROW_WAIT, 0);
		}
	}

	Iterator<Game::Piki> iterator2(Game::pikiMgr);
	CI_LOOP(iterator2)
	{
		Game::Piki* piki = *iterator2;
		piki->mSoundObj->stopSound(PSSE_PK_SHOUT01, 0);
		piki->mSoundObj->stopSound(PSSE_PK_SHOUT02, 0);
		piki->mSoundObj->stopSound(PSSE_PK_SHOUT03, 0);
		piki->mSoundObj->stopSound(PSSE_PK_SHOUT04, 0);
		piki->mSoundObj->stopSound(PSSE_PK_HUMING01, 0);
		piki->mSoundObj->stopSound(PSSE_PK_HUMING02, 0);
		piki->mSoundObj->stopSound(PSSE_PK_HUMING03, 0);
		piki->mSoundObj->stopSound(PSSE_PK_AINOUTA_RU, 0);
		piki->mSoundObj->stopSound(PSSE_PK_AINOUTA_RA, 0);
	}
}

/**
 * @note Address: 0x80469300
 * @note Size: 0x40
 */
void Scene_Game::pauseOff_2D()
{
	mSeqMgr.pauseOffAllSeq();
	if (mEnvSeMgr) {
		mEnvSeMgr->reservePauseOff();
	}
}

/**
 * @note Address: 0x80469340
 * @note Size: 0x548
 */
void Scene_Game::pauseOn_Demo()
{
	P2ASSERTLINE(706, mObjMgr);

	for (JSUListIterator<ObjBase> it(mObjMgr); it != mObjMgr->getEnd(); ++it) {
		Navi* navi = static_cast<Navi*>(it.getObject());
		if (navi->getCastType() == CCT_Navi) {
			navi->stopSound(PSSE_PK_HAPPA_THROW_WAIT, 0);
			navi->stopSound(PSSE_PK_VC_THROW_WAIT, 0);
		}
	}

	Iterator<Game::Navi> iterator(Game::naviMgr);
	CI_LOOP(iterator)
	{
		Game::Navi* navi = *iterator;
		navi->mSoundObj->stopWaitVoice();
	}

	Iterator<Game::Piki> iterator2(Game::pikiMgr);
	CI_LOOP(iterator2)
	{
		Game::Piki* piki = *iterator2;
		piki->mSoundObj->stopSound(PSSE_PK_SHOUT01, 0);
		piki->mSoundObj->stopSound(PSSE_PK_SHOUT02, 0);
		piki->mSoundObj->stopSound(PSSE_PK_SHOUT03, 0);
		piki->mSoundObj->stopSound(PSSE_PK_SHOUT04, 0);
		piki->mSoundObj->stopSound(PSSE_PK_HUMING01, 0);
		piki->mSoundObj->stopSound(PSSE_PK_HUMING02, 0);
		piki->mSoundObj->stopSound(PSSE_PK_HUMING03, 0);
		piki->mSoundObj->stopSound(PSSE_PK_AINOUTA_RU, 0);
		piki->mSoundObj->stopSound(PSSE_PK_AINOUTA_RA, 0);
	}
}

/**
 * @note Address: 0x80469888
 * @note Size: 0x4
 */
void Scene_Game::pauseOff_Demo()
{
}

/**
 * @note Address: 0x8046988C
 * @note Size: 0xB4
 */
bool Scene_Game::akubiOK()
{
	bool result = false;
	if (((JALCalc::getRandom_0_1() < 0.3f) && !(PSMGetBattleD() && PSMGetBattleD()->isUnderDirection())
	     && !((PSMGetKehaiD()) && PSMGetKehaiD()->isUnderDirection()))) {
		result = true;
	}

	if (result && getMiddleBossBgm() && getMiddleBossBgm()->mJumpPort.mCurrentTrackId != 0) {
		result = false;
	}
	return result;
}

const int Scene_Ground::cEvenning_fadeOuTime = 150;
const int Scene_Ground::cEvenning_fadeInTime = 150;

/**
 * @note Address: 0x80469940
 * @note Size: 0x184
 */
Scene_Ground::Scene_Ground(u8 p1, PSGame::SceneInfo* info)
    : Scene_Game(p1, info)
    , mPollutUpTimer(-1)
{
}

/**
 * @note Address: 0x80469AC4
 * @note Size: 0x44
 */
void Scene_Ground::exec()
{
	Scene_Game::exec();
	if (mPollutUpTimer != 0xffffffff) {
		mPollutUpTimer++;
	}
}

/**
 * @note Address: 0x80469B08
 * @note Size: 0xC
 */
void Scene_Ground::setPollutUp()
{
	mPollutUpTimer = 0;
}

/**
 * @note Address: 0x80469B14
 * @note Size: 0x1AC
 */
void Scene_Ground::fadeMainBgm(f32 p1, u32 p2, PSM::Scene_Ground::Time time)
{
	PSSystem::SeqBase* seq = mSeqMgr.getFirst()->getObject();
	P2ASSERTLINE(813, seq);
	switch (time) {
	case GroundTime_On:
		if (p1 == 0.0f) {
			if (*seq->getHandleP()) {
				(*seq->getHandleP())->setVolume(p1, p2, SOUNDPARAM_Demo);
			}
			if (mEnvSeMgr) {
				mEnvSeMgr->setVolumeRequest(p1, p2, SOUNDPARAM_Demo);
			}
		} else {
			if (*seq->getHandleP()) {
				(*seq->getHandleP())->setVolume(p1, p2 * 3, SOUNDPARAM_Demo);
			}
			if (mEnvSeMgr) {
				mEnvSeMgr->setVolumeRequest(p1, p2, SOUNDPARAM_Demo);
			}
		}
		break;
	case GroundTime_Off:
		stopAllSound(60);
		break;
	}
}

/**
 * @note Address: 0x80469CC0
 * @note Size: 0x184
 */
void Scene_Ground::jumpMainBgm(u8 time)
{
	MiddleBossSeq* seq = static_cast<MiddleBossSeq*>(mSeqMgr.getFirst()->getObject());
	P2ASSERTLINE(846, seq);
	P2ASSERTLINE(847, seq->getCastType() == PSSystem::SeqBase::TYPE_JumpBgmSeq);
	seq->requestJumpBgmOnBeat(time);

	if (mEnvSeMgr) {
		for (JSUListIterator<PSSystem::EnvSeBase> it(&mEnvSeMgr->mEnvList); it != mEnvSeMgr->mEnvList.getEnd(); ++it) {
			if (it->getSoundID() == PSSE_MP_BIRD_SP_HIBARI || it->getSoundID() == PSSE_MP_BIRD_SP_UGUISU
			    || it->getSoundID() == PSSE_MP_BIRD_FA_KAMO || it->getSoundID() == PSSE_MP_BIRD_FA_TSUGUMI) {
				it->mSoundID = PSSE_MP_BIRD_NIGHT01_MIX;
			} else if (it->getSoundID() == PSSE_MP_BIRD_SP_SUZUME || it->getSoundID() == PSSE_MP_BIRD_FA_MOZU) {
				it->mSoundID = PSSE_MP_BIRD_NIGHT02_MIX;
			} else if (it->getSoundID() == PSSE_MP_SEMI_KUMA01 || it->getSoundID() == PSSE_MP_SEMI_MINMIN01
			           || it->getSoundID() == PSSE_MP_SEMI_NIINII01) {
				it->mSoundID = PSSE_MP_SEMI_HIGURASHI01;
			} else if (it->getSoundID() == PSSE_MP_SEMI_KUMA02 || it->getSoundID() == PSSE_MP_SEMI_MINMIN02
			           || it->getSoundID() == PSSE_MP_SEMI_NIINII02) {
				it->mSoundID = PSSE_MP_SEMI_HIGURASHI02;
			}
		}
		mEnvSeMgr->setVolumeRequest(0.0f, 0, 2);
	}
}

/**
 * @note Address: 0x80469E44
 * @note Size: 0x50
 */
void Scene_Ground::changeEnvSE_Noon()
{
	if (mEnvSeMgr == nullptr) {
		return;
	}
	for (JSUListIterator<PSSystem::EnvSeBase> it(&mEnvSeMgr->mEnvList); it != mEnvSeMgr->mEnvList.getEnd(); ++it) {
		if (it->getSoundID() == PSSE_MP_SEMI_KUMA01) {
			it->mSoundID = PSSE_MP_SEMI_MINMIN01;
		} else if (it->getSoundID() == PSSE_MP_SEMI_NIINII01) {
			it->mSoundID = PSSE_MP_SEMI_MINMIN02;
		}
	}
}

/**
 * @note Address: 0x80469E94
 * @note Size: 0x1E4
 */
Scene_Cave::Scene_Cave(u8 p1, PSGame::SceneInfo* info)
    : Scene_Game(p1, info)
    , mPollutUpTimer(-1)
    , mHasStartedBossBgm(false)
{
	PSGame::CaveFloorInfo* floorInfo = static_cast<PSGame::CaveFloorInfo*>(info);
	switch (floorInfo->mAlphaType) {
	case PSGame::CaveFloorInfo::AlphaType_Soil:
	case PSGame::CaveFloorInfo::AlphaType_Metal:
	case PSGame::CaveFloorInfo::AlphaType_Concrete:
	case PSGame::CaveFloorInfo::AlphaType_Tile:
		mSceneFx = CreaturePrm::cSeFxMix_cave;
		break;
	case PSGame::CaveFloorInfo::AlphaType_Garden:
	case PSGame::CaveFloorInfo::AlphaType_Toy:
		mSceneFx = 0.0f;
		break;
	default:
		P2ASSERTLINE(953, false);
	}
}

/**
 * @note Address: 0x8046A078
 * @note Size: 0x8
 */
f32 Scene_Cave::getSceneFx()
{
	return mSceneFx;
}

/**
 * @note Address: 0x8046A080
 * @note Size: 0x30
 */
bool Scene_Cave::isBossFloor()
{
	PSGame::CaveFloorInfo* floorInfo = static_cast<PSGame::CaveFloorInfo*>(mSceneInfoA);
	return floorInfo->isBossFloor();
}

/**
 * @note Address: 0x8046A0B0
 * @note Size: 0x44
 */
void Scene_Cave::exec()
{
	Scene_Game::exec();
	if (mPollutUpTimer != 0xffffffff) {
		mPollutUpTimer++;
	}
}

/**
 * @note Address: 0x8046A0F4
 * @note Size: 0x4C
 */
void Scene_Cave::stopPollutionSe()
{
	if (mEnvSeMgr) {
		for (JSUListIterator<PSSystem::EnvSeBase> it(&mEnvSeMgr->mEnvList); it != mEnvSeMgr->mEnvList.getEnd(); ++it) {
			if (it->getSoundID() == PSSE_EV_POLUTION_MIX01 || it->getSoundID() == PSSE_EV_POLUTION_MIX02) {
				it->mIsOn = false;
			}
		}
	}
	mPollutUpTimer = 0;
}

/**
 * @note Address: 0x8046A140
 * @note Size: 0xF8
 */
void Scene_Cave::startPollutUpSe()
{
	if (u32(mTimer & 0xfffffff) > 10) {
		JAISe* se1 = PSSystem::spSysIF->playSystemSe(PSSE_EV_POLUTIONMIX_DOWN01, 0);
		JAISe* se2 = PSSystem::spSysIF->playSystemSe(PSSE_EV_POLUTIONMIX_DOWN02, 0);
		if (se1) {
			se1->setPan(1.0f, 80, SOUNDPARAM_Unk0);
			se1->setDolby(1.0f, 80, SOUNDPARAM_Unk0);
		}
		if (se2) {
			se2->setPan(0.0f, 80, SOUNDPARAM_Unk0);
			se2->setDolby(1.0f, 80, SOUNDPARAM_Unk0);
		}
	}
}

/**
 * @note Address: 0x8046A238
 * @note Size: 0x144
 */
void Scene_Cave::startMainSeq()
{
	if (isBossFloor()) {
		if (mEnvSeMgr) {
			mEnvSeMgr->on();
		}
		onStartMainSeq();
		return;
	}

	Scene_Game::startMainSeq();
}

/**
 * @note Address: 0x8046A37C
 * @note Size: 0x24C
 */
void Scene_Cave::init()
{
	if (isBossFloor()) {
		static_cast<SceneMgr*>(PSMGetSceneMgrCheck())->initEnvironmentSe(this);

		if (needBossBgm()) {
			mBossFaderMgr = PSSystem::SingletonBase<BossBgmFader::Mgr>::getInstance();
		}
		mBossFaderMgr = nullptr; // so much for what we just did?
		return;
	}

	Scene_Game::init();
}

/**
 * @note Address: 0x8046A5C8
 * @note Size: 0x1D0
 */
void Scene_Cave::bossAppear(PSM::EnemyBoss* obj, u16 flag)
{
	if (isBossFloor()) {
		if (mHasStartedBossBgm) {
			return;
		}
		MiddleBossSeq* seq = PSMGetMiddleBossSeq();
		if (seq) {
			seq->startSeq(flag);
			seq->setAvoidJumpTimer_Checked(180);
		}
		mHasStartedBossBgm = true;
	} else {
		Scene_Game::bossAppear(obj, flag);
	}
}

/**
 * @note Address: 0x8046A798
 * @note Size: 0x318
 */
void Scene_Cave::bossKilled(PSM::EnemyBoss* obj)
{
	if (isBossFloor()) {
		bool isBossActive  = BossBgmFader::Mgr::checkBossActive();
		MiddleBossSeq* seq = PSMGetMiddleBossSeq();
		if (seq) {
			if (!isBossActive) {
				seq->stopSeq(40);
			} else if (seq->mJumpPort.getCurrentTrack() == EnemyMidBoss::BossBgm_AttackPrep
			           || seq->mJumpPort.getCurrentTrack() == EnemyMidBoss::BossBgm_AttackLong) {
				obj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
			}
		}
	} else {
		MiddleBossSeq* seq  = PSMGetMiddleBossSeq();
		bool isNoBossActive = BossBgmFader::Mgr::checkAllBossInactive();
		if (!isNoBossActive && seq) {
			seq = PSMGetMiddleBossSeq();
			if (seq
			    && (seq->mJumpPort.mCurrentTrackId == EnemyMidBoss::BossBgm_AttackPrep
			        || seq->mJumpPort.mCurrentTrackId == EnemyMidBoss::BossBgm_AttackLong)) {
				obj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
			}
		}
	}
}

/**
 * @note Address: 0x8046AAB0
 * @note Size: 0xD4
 */
bool Scene_Cave::akubiOK()
{
	if (isBossFloor()) {
		return false;
	}
	return Scene_Game::akubiOK();
}

/**
 * @note Address: 0x8046AB84
 * @note Size: 0x1EC
 */
Scene_Challenge::Scene_Challenge(u8 p1, PSGame::SceneInfo* info)
    : Scene_Cave(p1, info)
{
}

/**
 * @note Address: 0x8046AEE8
 * @note Size: 0x24C
 */
void Scene_Challenge::init()
{
	Scene_Cave::init();
}

/**
 * @note Address: 0x8046B134
 * @note Size: 0x1FC
 */
void Scene_Challenge::startMainSeq()
{
	Scene_Cave::startMainSeq();
	if (mSceneInfoA->mSceneType == PSGame::SceneInfo::CHALLENGE_MODE) {
		JSUPtrLink* link = mSeqMgr.getNthLink(2);
		P2ASSERTLINE(1162, link);
		PSSystem::SeqBase* seq = static_cast<PSSystem::SeqBase*>(link->getObjectPtr());
		P2ASSERTLINE(1165, seq);
		seq->startSeq();
		JAISound* se = *seq->getHandleP();
		if (se) {
			se->setVolume(0.0f, 0, SOUNDPARAM_Demo);
		}
	}
}

/**
 * @note Address: 0x8046B330
 * @note Size: 0x78
 */
bool Scene_Challenge::akubiOK()
{
	bool result = false;
	if (((JALCalc::getRandom_0_1() < 0.3f) && !(PSMGetBattleD() && PSMGetBattleD()->isUnderDirection())
	     && !((PSMGetKehaiD()) && PSMGetKehaiD()->isUnderDirection()))) {
		result = true;
	}
	return result;
}

/**
 * @note Address: 0x8046B3A8
 * @note Size: 0x8
 */
f32 Scene_Zukan::getCamDistVol(u8)
{
	return 0.8f;
}

/**
 * @note Address: 0x8046B3B0
 * @note Size: 0xBC
 */
bool Scene_Zukan::getSeSceneGate(PSM::ObjBase*, u32 id)
{
	u32 result = isValidSeType(id);

	if (result == 1 || result == 5 || result == 3) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8046B46C
 * @note Size: 0xD4
 */
Scene_WorldMap::Scene_WorldMap(u8 p1, PSGame::SceneInfo* info)
    : Scene_NoObjects(p1, info)
{
	mRocket = new WorldMapRocket;
}

/**
 * @note Address: 0x8046B5B0
 * @note Size: 0x8
 */
f32 Scene_NoObjects::getCamDistVol(u8)
{
	return PSGame::CameraMgr::sDefaultVol;
}

} // namespace PSM

/**
 * @note Address: 0x8046B5B8
 * @note Size: 0x1B8
 */
void PSChangeBgm_ChallengeGame()
{
	PSSystem::Scene* scene = PSMGetGameScene();
	if (scene) {
		PSSystem::SeqBase* seq;
		PSSystem::SeqMgr* seqmgr = &scene->mSeqMgr;

		seq = seqmgr->getSeq(0);
		P2ASSERTLINE(1181, seq);
		JAISound* sound = *seq->getHandleP();
		if (sound) {
			sound->setVolume(0.0f, 0, SOUNDPARAM_Dopplar);
		}

		PSSystem::SeqBase* seq2 = seqmgr->getSeq(2);
		P2ASSERTLINE(1190, seq2);
		JAISound* sound2 = *seq2->getHandleP();
		if (sound2) {
			sound2->setVolume(1.0f, 30, SOUNDPARAM_Demo);
		}
	}
}

/**
 * @note Address: 0x8046B770
 * @note Size: 0x100
 */
void PSStart2DStream(u32 id)
{
	PSSystem::StreamBgm* seq = static_cast<PSM::Scene_Global*>(PSMGetSceneMgrCheck()->mScenes)->getGlobalStream();
	seq->setId(id);
	seq->startSeq();
}

/**
 * @note Address: 0x8046B870
 * @note Size: 0xEC
 */
void PSStop2DStream()
{
	PSSystem::StreamBgm* seq = static_cast<PSM::Scene_Global*>(PSMGetSceneMgrCheck()->mScenes)->getGlobalStream();
	seq->stopSeq(30);
}

/**
 * @note Address: 0x8046B95C
 * @note Size: 0x1EC
 */
void PSPause_StartMenuOn()
{
	PSPauseOn(2, 2);

	Iterator<Game::Navi> iterator(Game::naviMgr);
	CI_LOOP(iterator)
	{
		Game::Navi* navi = *iterator;
		navi->mSoundObj->stopWaitVoice();
	}
}

/**
 * @note Address: 0x8046BB48
 * @note Size: 0x20
 */
void PSPause_StartMenuOff()
{
	PSPauseOff();
}

/**
 * @note Address: 0x8046BB68
 * @note Size: 0xEC
 */
void PSPauseOn(u8 a1, u8 a2)
{
	static_cast<PSM::Scene_Game*>(PSMGetChildScene())->pauseOn_2D(a1, a2);
}

/**
 * @note Address: 0x8046BC54
 * @note Size: 0xCC
 */
void PSPauseOff()
{
	static_cast<PSM::Scene_Game*>(PSMGetChildScene())->pauseOff_2D();
}

/**
 * @note Address: 0x8046BD20
 * @note Size: 0x1C8
 */
void PSStartChallengeTimeUpStream()
{
	PSStart2DStream(P2_STREAM_SOUND_ID(PSSTR_CHALLENGE_TIMEUP));

	PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(PSMGetChildScene());
	PSSystem::checkGameScene(scene);
	scene->stopAllSound(2);
	PSMuteSE_on2D();
}

/**
 * @note Address: 0x8046BEE8
 * @note Size: 0xB4
 */
void PSMuteSE_on2D()
{
	PSSystem::SeqBase* seq = PSMGetSceneMgrCheck()->mScenes->mSeqMgr.getSeq(0);
	JAISound* se           = *seq->getHandleP();
	se->setVolume(0.0f, 0, SOUNDPARAM_Unk0);
}

/**
 * @note Address: 0x8046BF9C
 * @note Size: 0xB4
 */
void PSMuteOffSE_on2D()
{
	PSSystem::SeqBase* seq = PSMGetSceneMgrCheck()->mScenes->mSeqMgr.getSeq(0);
	JAISound* se           = *seq->getHandleP();
	se->setVolume(1.0f, 0, SOUNDPARAM_Unk0);
}
