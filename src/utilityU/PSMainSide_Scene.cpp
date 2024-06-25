#include "JSystem/JAudio/JALCalc.h"
#include "P2Macros.h"
#include "PSGame/CameraMgr.h"
#include "PSGame/PikScene.h"
#include "PSGame/SceneInfo.h"
#include "PSM/BossBgmFader.h"
#include "PSM/BossSeq.h"
#include "PSM/ObjCalc.h"
#include "PSM/ObjMgr.h"
#include "PSM/PikiHumming.h"
#include "PSM/Navi.h"
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
#include "PSSystem/Seq.h"
#include "PSSystem/PSCommon.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "Game/Navi.h"
#include "Game/PikiMgr.h"
#include "Game/CameraMgr.h"
#include "nans.h"
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
f32 SceneBase::getSceneFx() { return 0.08f; }

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
void SceneBase::pauseOn_2D(u8 p1, u8 p2) { mSeqMgr.pauseOnAllSeq(PSSystem::SeqBase::PauseMode(p1)); }

/**
 * @note Address: 0x80467790
 * @note Size: 0x24
 */
void SceneBase::pauseOff_2D() { mSeqMgr.pauseOffAllSeq(); }

/**
 * @note Address: 0x804677B4
 * @note Size: 0x4
 */
void SceneBase::pauseOn_Demo() { }

/**
 * @note Address: 0x804677B8
 * @note Size: 0x4
 */
void SceneBase::pauseOff_Demo() { }

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
f32 Scene_Global::getCamDistVol(u8) { return 0.0f; }

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
f32 Scene_Demo::getCamDistVol(u8) { return PSGame::CameraMgr::sDefaultVol; }

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

	if ((1 - (u8)info->getFlag(PSGame::SceneInfo::SFBS_1))) {
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
bool Scene_Objects::getSeSceneGate(PSM::ObjBase*, u32) { return _30; }

/**
 * @note Address: 0x80467EF4
 * @note Size: 0x24
 */
f32 Scene_Objects::getCamDistVol(u8 p1) { return mCameraMgr->getCurrentCamDistVol(p1); }

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
			Camera* cam = Game::cameraMgr->mCameraObjList[i];
			if (cam) {
				Vector3f soundpos = *cam->getSoundPositionPtr();
				Vector3f pos      = cam->getLookAtPosition();
				f32 dist          = pos.distance(soundpos);
				mCameraMgr->update(i, dist);
				mCameraMgr->mIsSpecial[i] = cam->isSpecialCamera();
			}
		}
	}
	PSSystem::Scene::exec();
	if (mObjMgr) {
		mObjMgr->frameEnd_onPlaySe();
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	mr       r30, r3
	stw      r29, 0x74(r1)
	lwz      r3, 0x34(r3)
	addis    r0, r3, 0x1000
	cmplwi   r0, 0
	beq      lbl_80467F4C
	addi     r0, r3, 1
	stw      r0, 0x34(r30)

lbl_80467F4C:
	lwz      r0, cameraMgr__4Game@sda21(r13)
	li       r3, 0
	stb      r3, sDopedPikminNum__Q23PSM4Piki@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_804680F4
	li       r31, 0
	b        lbl_804680E0

lbl_80467F68:
	lwz      r3, cameraMgr__4Game@sda21(r13)
	rlwinm   r0, r31, 2, 0x16, 0x1d
	lwz      r3, 0x24(r3)
	lwzx     r29, r3, r0
	cmplwi   r29, 0
	beq      lbl_804680DC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	mr       r4, r29
	lfs      f1, 4(r3)
	lfs      f0, 8(r3)
	addi     r3, r1, 0x50
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	lwz      r6, 0x2c(r1)
	stfs     f0, 0x34(r1)
	lwz      r5, 0x30(r1)
	lwz      r0, 0x34(r1)
	stw      r6, 0x44(r1)
	stw      r5, 0x48(r1)
	stw      r0, 0x4c(r1)
	bl       getLookAtPosition__6CameraFv
	lfs      f0, 0x50(r1)
	lfs      f1, 0x54(r1)
	stfs     f0, 0x38(r1)
	lfs      f0, 0x58(r1)
	stfs     f1, 0x3c(r1)
	lwz      r0, 0x38(r1)
	lwz      r3, 0x3c(r1)
	stfs     f0, 0x40(r1)
	lfs      f0, 0x44(r1)
	stw      r0, 0x5c(r1)
	lwz      r0, 0x40(r1)
	stw      r3, 0x60(r1)
	lfs      f1, 0x5c(r1)
	stw      r0, 0x64(r1)
	fsubs    f3, f1, f0
	lfs      f2, 0x60(r1)
	lfs      f0, 0x48(r1)
	lfs      f1, 0x64(r1)
	fsubs    f2, f2, f0
	lfs      f0, 0x4c(r1)
	stfs     f3, 0x20(r1)
	fsubs    f1, f1, f0
	lfs      f0, lbl_80520C9C@sda21(r2)
	stfs     f2, 0x24(r1)
	lwz      r0, 0x20(r1)
	lwz      r3, 0x24(r1)
	stfs     f1, 0x28(r1)
	stw      r0, 8(r1)
	lwz      r0, 0x28(r1)
	stw      r3, 0xc(r1)
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	stw      r0, 0x10(r1)
	fmuls    f3, f2, f2
	fmuls    f2, f1, f1
	lfs      f1, 0x10(r1)
	stfs     f3, 8(r1)
	fmuls    f1, f1, f1
	stfs     f2, 0xc(r1)
	lwz      r0, 8(r1)
	lwz      r3, 0xc(r1)
	stfs     f1, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r0, 0x10(r1)
	stw      r3, 0x18(r1)
	lfs      f2, 0x14(r1)
	lfs      f1, 0x18(r1)
	stw      r0, 0x1c(r1)
	fadds    f1, f2, f1
	lfs      f2, 0x1c(r1)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_804680AC
	frsqrte  f0, f1
	fmuls    f1, f0, f1

lbl_804680AC:
	lwz      r3, 0x28(r30)
	mr       r4, r31
	bl       update__Q26PSGame9CameraMgrFUcf
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	clrlwi   r4, r31, 0x18
	lwz      r5, 0x28(r30)
	addi     r0, r4, 0x4c
	stbx     r3, r5, r0

lbl_804680DC:
	addi     r31, r31, 1

lbl_804680E0:
	lwz      r3, 0x24(r30)
	clrlwi   r4, r31, 0x18
	lbz      r0, 7(r3)
	cmplw    r4, r0
	blt      lbl_80467F68

lbl_804680F4:
	mr       r3, r30
	bl       exec__Q28PSSystem5SceneFv
	lwz      r3, 0x2c(r30)
	cmplwi   r3, 0
	beq      lbl_8046810C
	bl       frameEnd_onPlaySe__Q23PSM6ObjMgrFv

lbl_8046810C:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
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
void Scene_Game::attachBossFaderMgr() { mBossFaderMgr = BossBgmFader::Mgr::getInstance(); }

/**
 * @note Address: 0x804684AC
 * @note Size: 0x1DC
 */
void Scene_Game::bossKilled(PSM::EnemyBoss* obj)
{
	PSM::MiddleBossSeq* seq = PSMGetMiddleBossSeq();

	PSM::BossBgmFader::Mgr* mgr = PSSystem::SingletonBase<PSM::BossBgmFader::Mgr>::getInstance();
	if (!mgr->checkBossActive() && seq) {
		seq = PSMGetMiddleBossSeq();
		if (seq && (seq->mJumpPort._70 == 2 || seq->mJumpPort._70 == 8)) {
			obj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
		}
	}

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, lbl_8049D908@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	addi     r29, r3, lbl_8049D908@l
	stw      r28, 0x10(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_804684F4
	addi     r3, r29, 0x3c
	addi     r5, r29, 0x24
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804684F4:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80468514
	addi     r3, r29, 0x3c
	addi     r5, r29, 0x24
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80468514:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80468534
	addi     r3, r29, 0x48
	addi     r5, r29, 0x24
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80468534:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046854C
	li       r30, 0
	b        lbl_80468554

lbl_8046854C:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv
	mr       r30, r3

lbl_80468554:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13) li
r28, 1 cmplwi   r0, 0 bne      lbl_80468578 addi     r3, r29, 0x30 addi     r5,
r29, 0x24 li       r4, 0x89 crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_80468578:
	lwz      r3,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13) lwz
r4, 4(r3) b        lbl_8046859C

lbl_80468584:
	lwz      r3, 0(r4)
	lbz      r0, 0xfe(r3)
	cmplwi   r0, 0
	beq      lbl_80468598
	li       r28, 0

lbl_80468598:
	lwz      r4, 0xc(r4)

lbl_8046859C:
	cmplwi   r4, 0
	bne      lbl_80468584
	clrlwi.  r0, r28, 0x18
	bne      lbl_80468668
	cmplwi   r30, 0
	beq      lbl_80468668
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_804685D4
	addi     r3, r29, 0x3c
	addi     r5, r29, 0x24
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804685D4:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_804685F4
	addi     r3, r29, 0x3c
	addi     r5, r29, 0x24
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804685F4:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80468614
	addi     r3, r29, 0x48
	addi     r5, r29, 0x24
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80468614:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046862C
	li       r3, 0
	b        lbl_80468630

lbl_8046862C:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv

lbl_80468630:
	cmplwi   r3, 0
	beq      lbl_80468668
	lhz      r0, 0x130(r3)
	cmplwi   r0, 2
	beq      lbl_80468650
	clrlwi   r0, r0, 0x10
	cmplwi   r0, 8
	bne      lbl_80468668

lbl_80468650:
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0x28(r31)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl

lbl_80468668:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80468688
 * @note Size: 0x100
 */
void Scene_Game::startMainSeq()
{
	if (mBossFaderMgr) {
		u8 i = 0;
		FOREACH_NODE(JSULink<PSSystem::SeqBase>, mSeqMgr.getFirst(), seq)
		{
			seq->getObject()->startSeq();
			if (i) {
				JAISound* se = *seq->getObject()->getHandleP();
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x50(r3)
	cmplwi   r0, 0
	beq      lbl_8046873C
	lwz      r31, 0x10(r29)
	li       r30, 0
	b        lbl_8046871C

lbl_804686BC:
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r30, 0x18
	beq      lbl_80468714
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80468714
	lwz      r12, 0x10(r3)
	li       r4, 0
	lfs      f1, lbl_80520C9C@sda21(r2)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80468714:
	lwz      r31, 0xc(r31)
	addi     r30, r30, 1

lbl_8046871C:
	cmplwi   r31, 0
	bne      lbl_804686BC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	b        lbl_80468754

lbl_8046873C:
	bl       startMainSeq__Q28PSSystem5SceneFv
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl

lbl_80468754:
	lwz      r3, 0x44(r29)
	cmplwi   r3, 0
	beq      lbl_80468764
	bl       on__Q28PSSystem8EnvSeMgrFv

lbl_80468764:
	li       r0, 0
	stw      r0, 0x4c(r29)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80468788
 * @note Size: 0x8C
 */
void Scene_Game::stopMainSeq(u32 time)
{
	if (mBossFaderMgr) {
		FOREACH_NODE(JSULink<PSSystem::SeqBase>, mSeqMgr.getFirst(), seq) { seq->getObject()->stopSeq(time); }
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
		boss->getObject()->dyingFrameWork();
		boss = boss->getNext();
	}

	ObjCalcBase* calc = PSSystem::SingletonBase<ObjCalcBase>::getInstance();
	if (calc->is1PGame()) {
		u8 mode = calc->mMode;
		P2ASSERTLINE(508, bool(mode != -1));
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

	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	mr       r29, r3
	lis      r4, lbl_8049D908@ha
	lwz      r3, 0x54(r3)
	addi     r31, r4, lbl_8049D908@l
	cmplwi   r3, 0
	beq      lbl_804688A4
	bl       exec__Q23PSM14PikiHummingMgrFv

lbl_804688A4:
	lwz      r3, 0x50(r29)
	cmplwi   r3, 0
	beq      lbl_804688B4
	bl       exec__Q33PSM12BossBgmFader3MgrFv

lbl_804688B4:
	lwz      r3, 0x58(r29)
	cmplwi   r3, 0
	beq      lbl_804688C4
	bl       exec__Q23PSM14PersEnvManagerFv

lbl_804688C4:
	lwz      r3, 0x44(r29)
	cmplwi   r3, 0
	beq      lbl_804688D4
	bl       exec__Q28PSSystem8EnvSeMgrFv

lbl_804688D4:
	lwz      r3, 0x34(r29)
	addis    r0, r3, 0x1000
	cmplwi   r0, 0
	beq      lbl_804688EC
	addi     r0, r3, 1
	stw      r0, 0x34(r29)

lbl_804688EC:
	lwz      r0, cameraMgr__4Game@sda21(r13)
	li       r30, 0
	stb      r30, sDopedPikminNum__Q23PSM4Piki@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80468A90
	b        lbl_80468A7C

lbl_80468904:
	lwz      r3, cameraMgr__4Game@sda21(r13)
	rlwinm   r0, r30, 2, 0x16, 0x1d
	lwz      r3, 0x24(r3)
	lwzx     r28, r3, r0
	cmplwi   r28, 0
	beq      lbl_80468A78
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	mr       r4, r28
	lfs      f1, 4(r3)
	lfs      f0, 8(r3)
	addi     r3, r1, 0x50
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	lwz      r6, 0x2c(r1)
	stfs     f0, 0x34(r1)
	lwz      r5, 0x30(r1)
	lwz      r0, 0x34(r1)
	stw      r6, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r0, 0x64(r1)
	bl       getLookAtPosition__6CameraFv
	lfs      f0, 0x50(r1)
	lfs      f1, 0x54(r1)
	stfs     f0, 0x38(r1)
	lfs      f0, 0x58(r1)
	stfs     f1, 0x3c(r1)
	lwz      r0, 0x38(r1)
	lwz      r3, 0x3c(r1)
	stfs     f0, 0x40(r1)
	lfs      f0, 0x5c(r1)
	stw      r0, 0x44(r1)
	lwz      r0, 0x40(r1)
	stw      r3, 0x48(r1)
	lfs      f1, 0x44(r1)
	stw      r0, 0x4c(r1)
	fsubs    f3, f1, f0
	lfs      f2, 0x48(r1)
	lfs      f0, 0x60(r1)
	lfs      f1, 0x4c(r1)
	fsubs    f2, f2, f0
	lfs      f0, 0x64(r1)
	stfs     f3, 0x20(r1)
	fsubs    f1, f1, f0
	lfs      f0, lbl_80520C9C@sda21(r2)
	stfs     f2, 0x24(r1)
	lwz      r0, 0x20(r1)
	lwz      r3, 0x24(r1)
	stfs     f1, 0x28(r1)
	stw      r0, 8(r1)
	lwz      r0, 0x28(r1)
	stw      r3, 0xc(r1)
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	stw      r0, 0x10(r1)
	fmuls    f3, f2, f2
	fmuls    f2, f1, f1
	lfs      f1, 0x10(r1)
	stfs     f3, 8(r1)
	fmuls    f1, f1, f1
	stfs     f2, 0xc(r1)
	lwz      r0, 8(r1)
	lwz      r3, 0xc(r1)
	stfs     f1, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r0, 0x10(r1)
	stw      r3, 0x18(r1)
	lfs      f2, 0x14(r1)
	lfs      f1, 0x18(r1)
	stw      r0, 0x1c(r1)
	fadds    f1, f2, f1
	lfs      f2, 0x1c(r1)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80468A48
	frsqrte  f0, f1
	fmuls    f1, f0, f1

lbl_80468A48:
	lwz      r3, 0x28(r29)
	mr       r4, r30
	bl       update__Q26PSGame9CameraMgrFUcf
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	clrlwi   r4, r30, 0x18
	lwz      r5, 0x28(r29)
	addi     r0, r4, 0x4c
	stbx     r3, r5, r0

lbl_80468A78:
	addi     r30, r30, 1

lbl_80468A7C:
	lwz      r3, 0x24(r29)
	clrlwi   r4, r30, 0x18
	lbz      r0, 7(r3)
	cmplw    r4, r0
	blt      lbl_80468904

lbl_80468A90:
	mr       r3, r29
	bl       exec__Q28PSSystem5SceneFv
	lwz      r3, 0x2c(r29)
	cmplwi   r3, 0
	beq      lbl_80468AA8
	bl       frameEnd_onPlaySe__Q23PSM6ObjMgrFv

lbl_80468AA8:
	lwz      r3, 0x4c(r29)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_80468AC0
	addi     r0, r3, 1
	stw      r0, 0x4c(r29)

lbl_80468AC0:
	lwz      r28, 0x38(r29)
	b        lbl_80468AD8

lbl_80468AC8:
	mr       r3, r28
	lwz      r28, 0xc(r28)
	lwz      r3, 0(r3)
	bl       dyingFrameWork__Q23PSM9EnemyBossFv

lbl_80468AD8:
	cmplwi   r28, 0
	bne      lbl_80468AC8
	lwz      r0,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) cmplwi
r0, 0 bne      lbl_80468B00 addi     r3, r31, 0x30 addi     r5, r31, 0x24 li r4,
0x89 crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_80468B00:
	lwz      r28,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) mr r3,
r28 lwz      r12, 0(r28) lwz      r12, 0x18(r12) mtctr    r12 bctrl clrlwi.  r0,
r3, 0x18 beq      lbl_80468C00 lbz      r28, 8(r28) li       r4, 1 subfic   r0,
r28, 1 orc      r3, r4, r28 srwi     r0, r0, 1 subf     r0, r0, r3 rlwinm.  r0,
r0, 1, 0x1f, 0x1f bne      lbl_80468B44 li       r4, 0

lbl_80468B44:
	clrlwi.  r0, r4, 0x18
	bne      lbl_80468B60
	addi     r3, r31, 0xc
	addi     r5, r31, 0x24
	li       r4, 0x1fc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80468B60:
	lwz      r3, 0x28(r29)
	mr       r4, r28
	bl       getBgmCamVol__Q26PSGame9CameraMgrFUc
	fmr      f31, f1
	lfs      f0, lbl_80520C9C@sda21(r2)
	li       r0, 0
	fcmpo    cr0, f31, f0
	ble      lbl_80468B94
	lfs      f0, lbl_80520CA0@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_80468B94
	li       r0, 1

lbl_80468B94:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80468BB0
	addi     r3, r31, 0xc
	addi     r5, r31, 0x24
	li       r4, 0x1fe
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80468BB0:
	lwz      r28, 0x10(r29)
	b        lbl_80468BF8

lbl_80468BB8:
	lwz      r3, 0(r28)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80468BF4
	lwz      r12, 0x10(r3)
	fmr      f1, f31
	li       r4, 5
	li       r5, 5
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80468BF4:
	lwz      r28, 0xc(r28)

lbl_80468BF8:
	cmplwi   r28, 0
	bne      lbl_80468BB8

lbl_80468C00:
	psq_l    f31, 136(r1), 0, qr0
	lwz      r0, 0x94(r1)
	lfd      f31, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/**
 * @note Address: 0x80468C28
 * @note Size: 0x8
 */
PSSystem::EnvSeMgr* Scene_Game::getEnvSe() { return mEnvSeMgr; }

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

	FOREACH_NODE(JSULink<Navi>, mObjMgr->mHead, link)
	{
		Navi* navi = link->getObject();
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

	FOREACH_NODE(JSULink<Navi>, mObjMgr->mHead, link)
	{
		Navi* navi = link->getObject();
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
void Scene_Game::pauseOff_Demo() { }

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

	if (result && getMiddleBossBgm() && getMiddleBossBgm()->mJumpPort._70 != 0) {
		result = false;
	}
	return result;
}

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
void Scene_Ground::setPollutUp() { mPollutUpTimer = 0; }

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
		FOREACH_NODE(JSULink<PSSystem::EnvSeBase>, mEnvSeMgr->mEnvList.getFirst(), link)
		{
			PSSystem::EnvSeBase* se = link->getObject();
			u32 id                  = se->mSoundID;
			if (id == PSSE_MP_BIRD_SP_HIBARI || id == PSSE_MP_BIRD_SP_UGUISU || id == PSSE_MP_BIRD_FA_KAMO
			    || id == PSSE_MP_BIRD_FA_TSUGUMI) {
				se->mSoundID = PSSE_MP_BIRD_NIGHT01_MIX;
			} else if (id == PSSE_MP_BIRD_SP_SUZUME || id == PSSE_MP_BIRD_FA_MOZU) {
				se->mSoundID = PSSE_MP_BIRD_NIGHT02_MIX;
			} else if (id == PSSE_MP_SEMI_KUMA01 || id == PSSE_MP_SEMI_MINMIN01 || id == PSSE_MP_SEMI_NIINII01) {
				se->mSoundID = PSSE_MP_SEMI_HIGURASHI01;
			} else if (id == PSSE_MP_SEMI_KUMA02 || id == PSSE_MP_SEMI_MINMIN02 || id == PSSE_MP_SEMI_NIINII02) {
				se->mSoundID = PSSE_MP_SEMI_HIGURASHI02;
			}
		}
		mEnvSeMgr->setVolumeRequest(0.0f, 0, 2);
	}

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, 0x10(r3)
	lwz      r30, 0(r3)
	cmplwi   r30, 0
	bne      lbl_80469D0C
	lis      r3, lbl_8049D914@ha
	lis      r5, lbl_8049D92C@ha
	addi     r3, r3, lbl_8049D914@l
	li       r4, 0x34e
	addi     r5, r5, lbl_8049D92C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80469D0C:
	mr       r3, r30
	lwz      r12, 0x10(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	beq      lbl_80469D48
	lis      r3, lbl_8049D914@ha
	lis      r5, lbl_8049D92C@ha
	addi     r3, r3, lbl_8049D914@l
	li       r4, 0x34f
	addi     r5, r5, lbl_8049D92C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80469D48:
	mr       r3, r30
	clrlwi   r4, r29, 0x18
	lwz      r12, 0x10(r30)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x44(r31)
	cmplwi   r3, 0
	beq      lbl_80469E28
	lwz      r3, 0(r3)
	b        lbl_80469E0C

lbl_80469D74:
	lwz      r4, 0(r3)
	lwz      r0, 0x24(r4)
	cmplwi   r0, 0x4039
	beq      lbl_80469D9C
	cmplwi   r0, 0x4038
	beq      lbl_80469D9C
	cmplwi   r0, 0x403a
	beq      lbl_80469D9C
	cmplwi   r0, 0x403c
	bne      lbl_80469DA8

lbl_80469D9C:
	li       r0, 0x4014
	stw      r0, 0x24(r4)
	b        lbl_80469E08

lbl_80469DA8:
	cmplwi   r0, 0x4037
	beq      lbl_80469DB8
	cmplwi   r0, 0x403b
	bne      lbl_80469DC4

lbl_80469DB8:
	li       r0, 0x4015
	stw      r0, 0x24(r4)
	b        lbl_80469E08

lbl_80469DC4:
	cmplwi   r0, 0x402f
	beq      lbl_80469DDC
	cmplwi   r0, 0x4033
	beq      lbl_80469DDC
	cmplwi   r0, 0x4035
	bne      lbl_80469DE8

lbl_80469DDC:
	li       r0, 0x4031
	stw      r0, 0x24(r4)
	b        lbl_80469E08

lbl_80469DE8:
	cmplwi   r0, 0x4030
	beq      lbl_80469E00
	cmplwi   r0, 0x4034
	beq      lbl_80469E00
	cmplwi   r0, 0x4036
	bne      lbl_80469E08

lbl_80469E00:
	li       r0, 0x4032
	stw      r0, 0x24(r4)

lbl_80469E08:
	lwz      r3, 0xc(r3)

lbl_80469E0C:
	cmplwi   r3, 0
	bne      lbl_80469D74
	lwz      r3, 0x44(r31)
	li       r4, 0
	lfs      f1, lbl_80520C9C@sda21(r2)
	li       r5, 2
	bl       setVolumeRequest__Q28PSSystem8EnvSeMgrFfUlUc

lbl_80469E28:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	FOREACH_NODE(JSULink<PSSystem::EnvSeBase>, mEnvSeMgr->mEnvList.getFirst(), link)
	{
		PSSystem::EnvSeBase* se = link->getObject();
		u32 id                  = se->mSoundID;
		if (id == PSSE_MP_SEMI_KUMA01) {
			se->mSoundID = PSSE_MP_SEMI_MINMIN01;
		} else if (id == PSSE_MP_SEMI_NIINII01) {
			se->mSoundID = PSSE_MP_SEMI_MINMIN02;
		}
	}
	/*
	lwz      r3, 0x44(r3)
	cmplwi   r3, 0
	beqlr
	lwz      r5, 0(r3)
	li       r3, 0x4033
	li       r0, 0x4034
	b        lbl_80469E88

	lbl_80469E60:
	lwz      r6, 0(r5)
	lwz      r4, 0x24(r6)
	cmplwi   r4, 0x402f
	bne      lbl_80469E78
	stw      r3, 0x24(r6)
	b        lbl_80469E84

	lbl_80469E78:
	cmplwi   r4, 0x4035
	bne      lbl_80469E84
	stw      r0, 0x24(r6)

	lbl_80469E84:
	lwz      r5, 0xc(r5)

	lbl_80469E88:
	cmplwi   r5, 0
	bne      lbl_80469E60
	blr
	*/
}

/**
 * @note Address: 0x80469E94
 * @note Size: 0x1E4
 */
Scene_Cave::Scene_Cave(u8 p1, PSGame::SceneInfo* info)
    : Scene_Game(p1, info)
    , mPollutUpTimer(-1)
    , _5C(false)
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, lbl_8049D908@ha
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r3
	mr       r0, r27
	mr       r30, r5
	mr       r28, r0
	addi     r31, r6, lbl_8049D908@l
	mr       r29, r0
	mr       r26, r0
	bl       __ct__Q26PSGame8PikSceneFUc
	lis      r3, __vt__Q23PSM9SceneBase@ha
	cmplwi   r30, 0
	addi     r0, r3, __vt__Q23PSM9SceneBase@l
	stw      r0, 0(r26)
	stw      r30, 0x24(r26)
	bne      lbl_80469EF4
	addi     r3, r31, 0xc
	addi     r5, r31, 0x24
	li       r4, 0x24
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80469EF4:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q23PSM13Scene_Objects@ha
	li       r4, 0
	addi     r3, r3, __vt__Q23PSM13Scene_Objects@l
	lis      r0, 0xf000
	stw      r3, 0(r29)
	li       r3, 0x50
	stw      r4, 0x28(r29)
	stw      r4, 0x2c(r29)
	stb      r4, 0x30(r29)
	stw      r0, 0x34(r29)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80469F44
	bl       __ct__Q26PSGame9CameraMgrFv
	mr       r0, r3

lbl_80469F44:
	stw      r0, 0x28(r29)
	mr       r3, r30
	li       r4, 1
	bl       getFlag__Q26PSGame9SceneInfoCFQ36PSGame9SceneInfo12FlagBitShift
	clrlwi   r0, r3, 0x18
	subfic   r0, r0, 1
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_80469F70
	bl       newInstance_SingleGame__Q23PSM18ObjCalc_SingleGameFv
	b        lbl_80469F74

lbl_80469F70:
	bl       newInstance_2PGame__Q23PSM14ObjCalc_2PGameFv

lbl_80469F74:
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	beq      lbl_80469FA8
	bne      lbl_80469F98
	addi     r3, r31, 0x30
	addi     r5, r31, 0x24
	li       r4, 0x89
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80469F98:
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) stw      r0,
0x2c(r29) lwz      r3, 0x2c(r29) stw      r29, 0x2c(r3)

lbl_80469FA8:
	lis      r4, __vt__Q23PSM10Scene_Game@ha
	addi     r3, r28, 0x38
	addi     r0, r4, __vt__Q23PSM10Scene_Game@l
	stw      r0, 0(r28)
	bl       initiate__10JSUPtrListFv
	li       r4, 0
	li       r0, -1
	stw      r4, 0x44(r28)
	li       r3, 0x14
	stw      r4, 0x48(r28)
	stw      r0, 0x4c(r28)
	stw      r4, 0x50(r28)
	stw      r4, 0x58(r28)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80469FF0
	bl       __ct__Q23PSM14PikiHummingMgrFv
	mr       r0, r3

lbl_80469FF0:
	lis      r3, __vt__Q23PSM10Scene_Cave@ha
	stw      r0, 0x54(r28)
	addi     r0, r3, __vt__Q23PSM10Scene_Cave@l
	li       r3, 0
	stw      r0, 0(r27)
	li       r0, -1
	stb      r3, 0x5c(r27)
	stw      r0, 0x64(r27)
	lwz      r0, 0x38(r30)
	cmpwi    r0, 4
	bge      lbl_8046A028
	cmpwi    r0, 0
	bge      lbl_8046A034
	b        lbl_8046A04C

lbl_8046A028:
	cmpwi    r0, 6
	bge      lbl_8046A04C
	b        lbl_8046A040

lbl_8046A034:
	lfs      f0, cSeFxMix_cave__Q23PSM11CreaturePrm@sda21(r2)
	stfs     f0, 0x60(r27)
	b        lbl_8046A060

lbl_8046A040:
	lfs      f0, lbl_80520C9C@sda21(r2)
	stfs     f0, 0x60(r27)
	b        lbl_8046A060

lbl_8046A04C:
	addi     r3, r31, 0xc
	addi     r5, r31, 0x24
	li       r4, 0x3b9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046A060:
	mr       r3, r27
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8046A078
 * @note Size: 0x8
 */
f32 Scene_Cave::getSceneFx() { return mSceneFx; }

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
		FOREACH_NODE(JSULink<PSSystem::EnvSeBase>, mEnvSeMgr->mEnvList.getFirst(), link)
		{
			PSSystem::EnvSeBase* se = link->getObject();
			u32 id                  = se->mSoundID;
			if (id == PSSE_EV_POLUTION_MIX01 || id == PSSE_EV_POLUTION_MIX02) {
				se->mIsOn = false;
			}
		}
	}
	mPollutUpTimer = 0;
	/*
	lwz      r4, 0x44(r3)
	cmplwi   r4, 0
	beq      lbl_8046A134
	lwz      r5, 0(r4)
	li       r0, 0
	b        lbl_8046A12C

lbl_8046A10C:
	lwz      r6, 0(r5)
	lwz      r4, 0x24(r6)
	cmplwi   r4, 0x3079
	beq      lbl_8046A124
	cmplwi   r4, 0x307a
	bne      lbl_8046A128

lbl_8046A124:
	stb      r0, 0x39(r6)

lbl_8046A128:
	lwz      r5, 0xc(r5)

lbl_8046A12C:
	cmplwi   r5, 0
	bne      lbl_8046A10C

lbl_8046A134:
	li       r0, 0
	stw      r0, 0x64(r3)
	blr
	*/
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
			se2->setPan(1.0f, 80, SOUNDPARAM_Unk0);
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
		if (_5C) {
			return;
		}
		MiddleBossSeq* seq = PSMGetMiddleBossSeq();
		if (seq) {
			seq->startSeq(flag);
			seq->setAvoidJumpTimer_Checked(180);
		}
		_5C = 1;
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
		bool check         = PSSystem::SingletonBase<BossBgmFader::Mgr>::getInstance()->checkBossActive();
		MiddleBossSeq* seq = PSMGetMiddleBossSeq();
		if (seq) {
			if (!check) {
				seq->stopSeq(40);
			} else if (seq->mJumpPort._70 == 2 || seq->mJumpPort._70 == 8) {
				obj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
			}
		}
	} else {
		MiddleBossSeq* seq = PSMGetMiddleBossSeq();
		bool check         = PSSystem::SingletonBase<BossBgmFader::Mgr>::getInstance()->checkBossActive();
		if (!check && seq) {
			seq = PSMGetMiddleBossSeq();
			if (seq && (seq->mJumpPort._70 == 2 || seq->mJumpPort._70 == 8)) {
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
void Scene_Challenge::init() { Scene_Cave::init(); }

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
f32 Scene_Zukan::getCamDistVol(u8) { return 0.8f; }

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
f32 Scene_NoObjects::getCamDistVol(u8) { return PSGame::CameraMgr::sDefaultVol; }

} // namespace PSM

/**
 * @note Address: 0x8046B5B8
 * @note Size: 0x1B8
 */
void* PSChangeBgm_ChallengeGame()
{
	PSSystem::Scene* scene = PSMGetGameScene();
	if (scene) {
		PSSystem::SeqMgr* seqmgr = &scene->mSeqMgr;

		PSSystem::SeqBase* seq = seqmgr->getSeq(0);
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, lbl_8049D908@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r3, lbl_8049D908@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046B5F8
	addi     r3, r31, 0x3c
	addi     r5, r31, 0x24
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046B5F8:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8046B618
	addi     r3, r31, 0x3c
	addi     r5, r31, 0x24
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046B618:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8046B638
	addi     r3, r31, 0x48
	addi     r5, r31, 0x24
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046B638:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_8046B65C
	addi     r3, r31, 0x48
	addi     r5, r31, 0x64
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046B65C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046B67C
	b        lbl_8046B680

lbl_8046B67C:
	li       r30, 0

lbl_8046B680:
	cmplwi   r30, 0
	beq      lbl_8046B754
	addi     r29, r30, 0x10
	li       r4, 0
	mr       r3, r29
	bl       getSeq__Q28PSSystem6SeqMgrFUl
	or.      r30, r3, r3
	bne      lbl_8046B6B4
	addi     r3, r31, 0xc
	addi     r5, r31, 0x24
	li       r4, 0x49d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046B6B4:
	mr       r3, r30
	lwz      r12, 0x10(r30)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_8046B6F0
	lwz      r12, 0x10(r3)
	li       r4, 0
	lfs      f1, lbl_80520C9C@sda21(r2)
	li       r5, 1
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046B6F0:
	mr       r3, r29
	li       r4, 2
	bl       getSeq__Q28PSSystem6SeqMgrFUl
	or.      r29, r3, r3
	bne      lbl_8046B718
	addi     r3, r31, 0xc
	addi     r5, r31, 0x24
	li       r4, 0x4a6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046B718:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_8046B754
	lwz      r12, 0x10(r3)
	li       r4, 0x1e
	lfs      f1, lbl_80520CA0@sda21(r2)
	li       r5, 2
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046B754:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
u8 PSStop2DStream()
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
void PSPause_StartMenuOff() { PSPauseOff(); }

/**
 * @note Address: 0x8046BB68
 * @note Size: 0xEC
 */
void PSPauseOn(u8 a1, u8 a2) { static_cast<PSM::Scene_Game*>(PSMGetChildScene())->pauseOn_2D(a1, a2); }

/**
 * @note Address: 0x8046BC54
 * @note Size: 0xCC
 */
void PSPauseOff() { static_cast<PSM::Scene_Game*>(PSMGetChildScene())->pauseOff_2D(); }

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
