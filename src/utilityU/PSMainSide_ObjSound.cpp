#include "Game/pelletMgr.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Navi.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PSM/BossSeq.h"
#include "PSM/BossBgmFader.h"
#include "PSM/ObjCalc.h"
#include "PSM/CreaturePrm.h"
#include "PSMath.h"
#include "PSGame/SeMgr.h"
#include "utilityU.h"

namespace PSM {

EnemyBigBoss* EnemyBigBoss::sBigBoss;
u8 Piki::sDopedPikminNum = 0;

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
ObjBase::ObjBase()
    : JSULink<ObjBase>(this)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8045CE64
 * @note Size: 0x80
 */
ObjBase::~ObjBase()
{
}

/**
 * @note Address: 0x8045CEE4
 * @note Size: 0x4C
 */
void ObjMgr::frameEnd_onPlaySe()
{
	FOREACH_NODE(JSULink<ObjBase>, mHead, link)
	{
		link->getObject()->frameEnd_onPlaySe();
	}
}

/**
 * @note Address: 0x8045CF30
 * @note Size: 0x104
 */
ObjMgr::~ObjMgr()
{
	if (mScenes) {
		mScenes->detachObjMgr();
	}

	while (mHead) {
		JSULink<ObjBase>* link = (JSULink<ObjBase>*)mHead;
		ObjBase* obj           = link->getObject();
		remove(obj);
		delete obj;
	}
	sInstance = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
Creature::Creature(Game::Creature* gameObj)
    : mGameObj(gameObj)
{
	P2ASSERTLINE(97, gameObj);
	P2ASSERTLINE(98, PSSystem::SingletonBase<ObjMgr>::sInstance);
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
bool Creature::isVisible()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8045D034
 * @note Size: 0x58
 */
void Creature::exec()
{
	if (!mGameObj->sound_culling()) {
		onCalcOn();
	}
}

/**
 * @note Address: 0x8045D08C
 * @note Size: 0x128
 */
bool Creature::judgeNearWithPlayer(const Vec& pos1, const Vec& pos2, f32 near, f32 far)
{
	return PSMath::calcDistanceInRange(pos1, pos2, near, far);
}

/**
 * @note Address: 0x8045D1B4
 * @note Size: 0xA0
 */
bool Creature::isNear(Game::Creature* obj, f32 near)
{
	Vec* pos = (Vec*)mGameObj->getSound_PosPtr();

	return judgeNearWithPlayer(*pos, *(Vec*)obj->getSound_PosPtr(), near, near / 2);
}

/**
 * @note Address: 0x8045D254
 * @note Size: 0x70
 */
u8 Creature::getPlayingHandleNum()
{
	JAInter::Object* jai = getJAIObject();
	u8 num               = 0;
	for (u8 i = 0; i < jai->mHandleCount; i++) {
		if (jai->mSounds[i]) {
			num++;
		}
	}
	return num;
}

/**
 * @note Address: 0x8045D2C4
 * @note Size: 0x15C
 */
void Creature::loopCalc(FrameCalcArg& arg)
{
	JAInter::Object* jai = arg.mObj->getJAIObject();
	Vec& pos             = jai->_28;
	f32& dist            = *arg.mDist;
	P2ASSERTLINE(170, jai->_24);

	u8 players = PSMGetPlayerNo(this);
	PSMTXMultVec(*JAIBasic::msBasic->mCameras[players].mMtx, jai->_24, &pos);
	dist = PSMath::calcMagnitude(pos);

	JAISound* se;
	JAISound_0x34* data;
	for (u8 i = 0; i < jai->mHandleCount; i++) {
		se = jai->mSounds[i];
		if (se) {
			data                                  = se->mSoundObj;
			data->mPosition                       = pos;
			data->mDistance                       = dist;
			static_cast<SeSound*>(se)->mPlayerNum = players;
		}
	}

	f32& pan = *arg.mPan;
	pan      = SeSound::calcPan(pos, dist);

	f32& dolby = *arg.mDolby;
	dolby      = SeSound::calcDolby(pos, dist);
}

/**
 * @note Address: 0x8045D420
 * @note Size: 0x380
 */
JAISound* Creature::startSoundInner(PSM::StartSoundArg& arg)
{
	if (mGameObj->sound_culling()) {
		return nullptr;
	}

	if (!static_cast<SceneBase*>(PSMGetSceneMgrCheck()->getEndScene())->getSeSceneGate(this, arg.mSoundID)) {
		return nullptr;
	}

	u32 sound            = arg.mSoundID;
	u32 unk              = arg._08;
	Creature* obj        = arg.mObj;
	JAInter::Object* jai = obj->getJAIObject();
	JAISound** temp      = nullptr;
	if (!(sound & 0x800)) {
		temp = jai->getUseSoundHandlePointer(sound);
	}
	if (!temp) {
		temp = jai->getFreeSoundHandlePointer();
	}

	if (temp) {
		JAInter::Actor actor(obj, jai->_24);
		JAIBasic::msBasic->startSoundActorT(sound, temp, &actor, unk, PSMGetPlayerNo(this));
		onPlayingSe(sound, *temp);
		if (*temp) {
			(*temp)->mIsPlayingWithActor = true;
		}
		return *temp;
	} else {
		u8 prio = 255;
		u8 id   = 255;
		for (u8 i = 0; i < jai->mHandleCount; i++) {
			if (!((1 << i) & jai->mUseHandleFlag) && jai->mSounds[i]->mSoundInfo->mPriority <= prio) {
				prio = jai->mSounds[i]->mSoundInfo->mPriority;
				id   = i;
			}
		}

		if (id != 255 && JAInter::SoundTable::getInfoPointer(sound)->mPriority >= prio) {
			jai->handleStop(id, 0);

			JAInter::Actor actor(obj, jai->_24);
			JAIBasic::msBasic->startSoundActorT(sound, getHandleArea(id), &actor, unk, PSMGetPlayerNo(this));
			onPlayingSe(sound, *getHandleArea(id));
			JAISound* se = jai->mSounds[id];
			if (se) {
				se->mIsPlayingWithActor = true;
			}
			return se;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8045D7A0
 * @note Size: 0x4
 */
void Creature::onPlayingSe(u32, JAISound*)
{
}

/**
 * @note Address: 0x8045D7A4
 * @note Size: 0x10C
 */
CreatureObj::CreatureObj(Game::Creature* gameObj, u8 p2)
    : Creature(gameObj)
    , JAInter::Object(reinterpret_cast<Vec*>(gameObj->getSound_PosPtr()), JKRGetCurrentHeap(), p2)
{
}

/**
 * @note Address: 0x8045D948
 * @note Size: 0x3C
 */
JAISound* CreatureObj::startSound(u32 soundID, u32 a2)
{
	StartSoundArg arg(this, soundID, a2);
	return startSoundInner(arg);
}

/**
 * @note Address: 0x8045D984
 * @note Size: 0x8C
 */
void CreatureObj::startSound(u8 id, u32 soundID, u32 a3)
{
	u8 players = PSMGetPlayerNo(this);
	JAIBasic::msBasic->startSoundVecT(soundID, &mSounds[id], _24, a3, 0, players);
}

/**
 * @note Address: 0x8045DA10
 * @note Size: 0xA8
 */
void CreatureObj::startSound(JAISound** se, u32 soundID, u32 a3)
{
	JUT_PANICLINE(395, "使用禁止再生関数"); // "Disabled playback functions"

	JAIBasic::msBasic->startSoundVecT(soundID, se, _24, a3, 0, PSMGetPlayerNo(this));
}

/**
 * @note Address: 0x8045DAB8
 * @note Size: 0x4C
 */
void CreatureObj::frameEnd_onPlaySe()
{
	FrameCalcArg arg(this, &mDistance, &mPan, &mDolby);
	loopCalc(arg);
}

/**
 * @note Address: N/A
 * @note Size: 0x118
 */
CreatureAnime::CreatureAnime(Game::Creature* gameObj, u8 p2)
    : Creature(gameObj)
    , JAIAnimeSound(reinterpret_cast<Vec*>(gameObj->getSound_PosPtr()), JKRGetCurrentHeap(), p2)
    , _AC(0.0f)
    , _B0(0.0f)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8045DB04
 * @note Size: 0x148
 */
void CreatureAnime::startAnimSound(u32 soundID, JAISound** se, JAInter::Actor* actor, u8)
{
	if (mGameObj->sound_culling()) {
		return;
	}

	if (static_cast<SceneBase*>(PSMGetSceneMgrCheck()->getEndScene())->getSeSceneGate(this, soundID)) {
		actor->mObj = this;

		u8 players = PSMGetPlayerNo(this);
		JAIAnimeSound::startAnimSound(soundID, se, actor, players);
		P2ASSERTLINE(441, se);
		onPlayingSe(soundID, *se);
	}
}

/**
 * @note Address: 0x8045DC4C
 * @note Size: 0x3C
 */
JAISound* CreatureAnime::startSound(u32 soundID, u32 a2)
{
	StartSoundArg arg(this, soundID, a2);
	return startSoundInner(arg);
}

/**
 * @note Address: 0x8045DC88
 * @note Size: 0xB0
 */
void CreatureAnime::startSound(u8 id, u32 soundID, u32 a3)
{
	JUT_PANICLINE(466, "使用禁止再生関数"); // "Disabled playback functions"

	JAIBasic::msBasic->startSoundVecT(soundID, &mSounds[id], _24, a3, 0, PSMGetPlayerNo(this));
}

/**
 * @note Address: 0x8045DD38
 * @note Size: 0xA8
 */
void CreatureAnime::startSound(JAISound** se, u32 soundID, u32 a3)
{
	JUT_PANICLINE(482, "使用禁止再生関数"); // "Disabled playback functions"

	JAIBasic::msBasic->startSoundVecT(soundID, se, _24, a3, 0, PSMGetPlayerNo(this));
}

/**
 * @note Address: 0x8045DDE0
 * @note Size: 0x40
 */
void CreatureAnime::setAnime(JAIAnimeSoundData* data, u32 flag, f32 loopStartFrame, f32 loopEndFrame)
{
	if (data != mSoundData) {

		if ((int)data == 0xffffffff) {
			data = nullptr;
		}
		initActorAnimSound(data, flag, loopStartFrame, loopEndFrame);
	}
}

/**
 * @note Address: 0x8045DE20
 * @note Size: 0x304
 */
void CreatureAnime::playActorAnimSound(JAInter::Actor* actor, f32 pitchmod, u8 a2)
{
	JAIAnimeFrameSoundData* data;
	u8 i = 0;
	JUT_ASSERTLINE(549, mAnimID < mSoundData->mEntryNum, "JAIAnimeSound::playActorAnimSound  dataCounterが異常です。\n");
	data   = &mSoundData->mSndEntries[mAnimID];
	u8 max = mHandleCount;
	while (i < max) {
		u8* handle = mSoundStatus;
		if (handle[i]) {
			JAISound* se = mSounds[i];
			if (!se) {
				break;
			}
			if (data->mSoundID != se->mSoundID) {
				i++;
				continue;
			}
			if (!(data->mSoundID & 0xc00)) {
				mAnimID += mSoundFlags;
				return;
			}
			break;
		}
		if (mUseHandleFlag & 1 << i) {
			i++;
			continue;
		}
		JAISound** se = mSounds;
		if (!se[i]) {
			break;
		}
		if (i == mHandleCount - 1) {
			u32 maxTime = 0;
			u8 useId    = 0;
			for (u8 j = 0; j < max; j++) {
				if (!handle[j] && maxTime < se[j]->mActiveTimer) {
					maxTime = se[j]->mActiveTimer;
					useId   = j;
				}
			}
			i = useId;
			break;
		}
		i++;
	}
	if (i != max && (!(data->mPlayFlags & 8) || mFrameTimer == data->mActivationFrame)
	    && ((mSoundFlags == 1 && !(data->mPlayFlags & 2)) || (mSoundFlags == -1 && !(data->mPlayFlags & 1)))) {
		JAISound** sound = &mSounds[i];
		if (*sound) {
			handleStop(i, 0);
		}
		startAnimSound(data->mSoundID, sound, actor, a2);
		if (*sound) {
			mBasEntries[i]  = data;
			mSoundStatus[i] = true;
			(*sound)->setVolume((f32)data->mVolume / 127.0f, 0, SOUNDPARAM_Unk5);
			(*sound)->setPitch((f32)data->mPitchScale * (pitchmod - 1.0f) / 32.0f + data->mPitch, 0, SOUNDPARAM_Unk5);
		}
	}
	mAnimID += mSoundFlags;
}

/**
 * @note Address: 0x8045E124
 * @note Size: 0xB4
 */
void CreatureAnime::exec()
{
	bool prev = mActive;
	mActive   = mGameObj->sound_culling() == 0;
	if (mActive) {
		if (prev == 0) {
			onCalcTurnOn();
		}
		onCalcOn();
	} else if (prev == 1) {
		onCalcTurnOff();
	}
}

/**
 * @note Address: 0x8045E1D8
 * @note Size: 0xC8
 */
void CreatureAnime::onCalcOn()
{
	JAInter::Actor actor(this, _24);
	ObjCalcBase* objCalc = PSSystem::SingletonBase<ObjCalcBase>::sInstance;

	setAnimSoundActor(&actor, mGameObj->getSound_CurrAnimFrame(), mGameObj->getSound_CurrAnimSpeed(), objCalc->getPlayerNo(this));
}

/**
 * @note Address: 0x8045E2A0
 * @note Size: 0x24
 */
void CreatureAnime::onCalcTurnOn()
{
	static_cast<Game::EnemyBase*>(mGameObj)->setPSEnemyBaseAnime();
}

/**
 * @note Address: 0x8045E2C4
 * @note Size: 0x4
 */
void CreatureAnime::onCalcTurnOff()
{
}

/**
 * @note Address: 0x8045E2C8
 * @note Size: 0x4C
 */
void CreatureAnime::frameEnd_onPlaySe()
{
	FrameCalcArg arg(this, &mDistance, &mPan, &mDolby);
	loopCalc(arg);
}

/**
 * @note Address: 0x8045E314
 * @note Size: 0x4C
 */
void BattleLink::battleOn()
{
	ActorDirector_Battle* dir = PSMGetBattleD();
	if (dir && dir->mActor) {
		dir->mActor->append(this);
	}
}

/**
 * @note Address: 0x8045E360
 * @note Size: 0x4C
 */
void BattleLink::battleOff()
{
	ActorDirector_Battle* dir = PSMGetBattleD();
	if (dir && dir->mActor) {
		dir->mActor->remove(this);
	}
}

/**
 * @note Address: 0x8045E3AC
 * @note Size: 0x4C
 */
void KehaiLink::kehaiOn()
{
	ActorDirector_Kehai* dir = PSMGetKehaiD();
	if (dir && dir->mActor) {
		dir->mActor->append(this);
	}
}

/**
 * @note Address: 0x8045E3F8
 * @note Size: 0x4C
 */
void KehaiLink::kehaiOff()
{
	ActorDirector_Kehai* dir = PSMGetKehaiD();
	if (dir && dir->mActor) {
		dir->mActor->remove(this);
	}
}

/**
 * @note Address: 0x8045E444
 * @note Size: 0x180
 */
EnemyBase::EnemyBase(Game::EnemyBase* gameObj, u8 p2)
    : CreatureAnime(gameObj, p2)
    , BattleLink(gameObj)
    , KehaiLink(gameObj)
{
}

/**
 * @note Address: 0x8045E6A0
 * @note Size: 0x174
 */
void EnemyBase::startAnimSound(u32 soundID, JAISound** se, JAInter::Actor* actor, u8 a1)
{
	u32 id = soundID;
	if (!static_cast<Game::EnemyBase*>(mGameObj)->isEvent(0, Game::EB_Bittered)
	    || (id == PSSE_EN_DOPING_GAS_FREEZE || id == PSSE_EN_DOPING_ROCK_FLICK || id == PSSE_EN_DOPING_FLICK_LAST
	        || id == PSSE_EN_DOPING_ROCK_BREAK)
	    || ((id >> 12) & 0xf) == 2) {
		CreatureAnime::startAnimSound(soundID, se, actor, a1);
	}
}

/**
 * @note Address: 0x8045E814
 * @note Size: 0x5C
 */
JAISound* EnemyBase::startSoundInner(PSM::StartSoundArg& arg)
{
	if (!(!static_cast<Game::EnemyBase*>(mGameObj)->isEvent(0, Game::EB_Bittered)
	      || (arg.mSoundID == PSSE_EN_DOPING_GAS_FREEZE || arg.mSoundID == PSSE_EN_DOPING_ROCK_FLICK
	          || arg.mSoundID == PSSE_EN_DOPING_FLICK_LAST || arg.mSoundID == PSSE_EN_DOPING_ROCK_BREAK)
	      || ((arg.mSoundID >> 12) & 0xf) == 2)) {
		return nullptr;
	}

	return Creature::startSoundInner(arg);
}

/**
 * @note Address: 0x8045E870
 * @note Size: 0x44
 */
void EnemyBase::onCalcTurnOn()
{
	static_cast<Game::EnemyBase*>(mGameObj)->setPSEnemyBaseAnime();
	updateKehai();
}

/**
 * @note Address: 0x8045E8B4
 * @note Size: 0x4C
 */
void EnemyBase::onCalcTurnOff()
{
	battleOff();
	kehaiOff();
}

/**
 * @note Address: 0x8045E900
 * @note Size: 0xF0
 */
void EnemyBase::onCalcOn()
{
	CreatureAnime::onCalcOn();
	updateBattle();
	updateKehai();
}

/**
 * @note Address: 0x8045E9F0
 * @note Size: 0x60
 */
void EnemyBase::battleOff()
{
	BattleLink::battleOff();
	updateKehai();
}

/**
 * @note Address: 0x8045EA50
 * @note Size: 0x88
 */
void EnemyBase::updateKehai()
{
	bool state = calcKehai();
	bool list  = KehaiLink::getList();
	if (state && !list) {
		kehaiOn();
	} else if (!state && list) {
		kehaiOff();
	}
}

/**
 * @note Address: 0x8045EAD8
 * @note Size: 0xC8
 */
void EnemyBase::updateBattle()
{
	if (mGameObj->isAlive()) {
		Game::EnemyBase* obj = static_cast<Game::EnemyBase*>(mGameObj);
		if (obj->mSfxEmotion == 2 && !BattleLink::mList) {
			battleOn();
		} else if (static_cast<const Game::EnemyBase*>(obj)->mSfxEmotion != 2 && BattleLink::mList) {
			battleOff();
		}
	} else {
		if (BattleLink::mList) {
			battleOff();
		}
	}
}

/**
 * @note Address: 0x8045EBA0
 * @note Size: 0x338
 */
bool EnemyBase::calcKehai()
{
	Game::EnemyBase* enemy = static_cast<Game::EnemyBase*>(mGameObj);
	if (!enemy->isAlive() || enemy->isUnderground()) {
		return false;
	}

	Vec& enemypos = *(Vec*)enemy->getSound_PosPtr();
	Iterator<Game::Navi> iterator(Game::naviMgr);
	CI_LOOP(iterator)
	{
		Game::Navi* navi = *iterator;
		if (navi->mController1) {
			const Vector3f& position = navi->getPosition();
			JGeometry::TVec3f pos;
			pos.x            = position.x;
			pos.y            = position.y;
			pos.z            = position.z;
			Vec naviPosition = pos;
			if (judgeNearWithPlayer(enemypos, naviPosition, CreaturePrm::cVolZeroDist_Kehai[getCastType() - 2],
			                        CreaturePrm::cVolZeroDist_InnerSize_Kehai[getCastType() - 2])) {
				return true;
			}
		}
	}
	return false;
}

/**
 * @note Address: 0x8045EED8
 * @note Size: 0x94
 */
bool EnemyBase::judgeNearWithPlayer(const Vec& enemyPosition, const Vec& naviPosition, f32 distanceX, f32 distanceY)
{
	if (PSMath::abs(enemyPosition.x - naviPosition.x) < distanceX) {
		if (PSMath::abs(enemyPosition.y - naviPosition.y) < distanceX) {
			if (PSMath::abs(enemyPosition.z - naviPosition.z) < distanceX) {
				return true;
			}
		}
	}

	return false;
}

/**
 * @note Address: 0x8045EF6C
 * @note Size: 0x1AC
 */
EnemyNotAggressive::EnemyNotAggressive(Game::EnemyBase* gameObj, u8 p2)
    : EnemyBase(gameObj, p2)
{
}

/**
 * @note Address: 0x8045F118
 * @note Size: 0x160
 */
Tsuyukusa::Tsuyukusa(Game::Creature* gameObj)
    : CreatureObj(gameObj, 2)
    , mIsEnabled(FALSE)
    , mLink(gameObj)
{
	P2ASSERTLINE(1078, gameObj);
}

/**
 * @note Address: 0x8045F278
 * @note Size: 0xB8
 */
void Tsuyukusa::noukouFrameWork(bool enable)
{
	PSM::ListDirectorActor* actor = PSMGetGroundD()->mActor;
	P2ASSERTLINE(1086, actor);
	if (enable == true && mIsEnabled == 0) {
		actor->append(&mLink);
	} else if (!enable && mIsEnabled == true) {
		actor->remove(&mLink);
	}
	mIsEnabled = enable;
}

/**
 * @note Address: 0x8045F330
 * @note Size: 0x128
 */
bool EnemyBig::judgeNearWithPlayer(const Vec& pos1, const Vec& pos2, f32 min, f32 max)
{
	return Creature::judgeNearWithPlayer(pos1, pos2, min, max);
}

/**
 * @note Address: N/A
 * @note Size: 0x1F0
 */
EnemyBoss::EnemyBoss(Game::EnemyBase* gameObj)
    : EnemyBase(gameObj, 4)
    , mNaviDistance(10000000.0f)
    , mDisappearTimer(-1)
    , _E8(-1)
    , mLink(this)
    , mAppearFlag(false)
    , mIsFirstAppear(0)
    , _FE(1)
    , mHasReset(0)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8045F458
 * @note Size: 0x74
 */
void EnemyBoss::onPlayingSe(u32, JAISound* sound)
{
	if (sound) {
		PSGame::SoundTable::SePerspInfo info;
		info.set(1.0f, sBoss_ViewDist, sBoss_ViewDistVol, sBoss_DistMax, 0.0f);
		static_cast<SeSound*>(sound)->specializePerspCalc(info);
	}
}

/**
 * @note Address: 0x8045F4CC
 * @note Size: 0x14
 */
bool EnemyBoss::judgeNearWithPlayer(const Vec&, const Vec&, f32 min, f32)
{
	return mNaviDistance < min;
}

/**
 * @note Address: 0x8045F4E0
 * @note Size: 0xB4
 */
void EnemyBoss::exec()
{
	EnemyBase::exec();
}

/**
 * @note Address: 0x8045F594
 * @note Size: 0xF8
 */
void EnemyBoss::onCalcOn()
{
	calcDistance();
	EnemyBase::onCalcOn();
}

/**
 * @note Address: 0x8045F68C
 * @note Size: 0x364
 */
void EnemyBoss::calcDistance()
{
	f32 dist = 10000000.0f;
	Iterator<Game::Navi> iterator(Game::naviMgr);
	CI_LOOP(iterator)
	{
		Game::Navi* navi = *iterator;
		if (navi->mController1) {
			f32 cdist = PSMath::calcDistance(PSMath::toVec(navi->getPosition()), PSMath::toVec(mGameObj->getPosition()));
			if (cdist < dist) {
				dist = cdist;
			}
		}
	}
	mNaviDistance = dist;
}

/**
 * @note Address: 0x8045F9F0
 * @note Size: 0x140
 */
void EnemyBoss::setAppearFlag(bool flag)
{
	mAppearFlag             = flag;
	PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
	mgr->checkScene();
	SceneBase* scene = static_cast<SceneBase*>(mgr->mScenes->mChild);
	if (scene && scene->getSeSceneGate(this, 0)) {
		if (flag == true) {
			if (!mIsFirstAppear) {
				mIsFirstAppear = true;
				onAppear1st();
			}
			onAppear();
		} else {
			onDisappear();
		}
	}
}

/**
 * @note Address: 0x8045FB30
 * @note Size: 0x5C
 */
void EnemyBoss::dyingFrameWork()
{
	if (_E8 != 0xffffffff) {
		_E8++;
	}
	if (_E8 & 0x10000000 && (_E8 & 0xfffffff) >= 180) {
		setKilled();
	}
}

/**
 * @note Address: 0x8045FB8C
 * @note Size: 0x234
 */
void EnemyBoss::onDeathMotionTop()
{
	_E8               = 0;
	Scene_Game* scene = PSMGetGameScene();
	if (scene) {
		scene->mEnemyBossList.append(&mLink);
	}

	if (PSMGetGameScene()) {
		bool canJump = true;
		FOREACH_NODE(JSULink<EnemyBoss>, PSSystem::SingletonBase<BossBgmFader::Mgr>::getInstance()->mTypedProc.getFirst(), link)
		{
			EnemyBoss* obj = link->getObject();
			if (obj->_FE && obj->_E8 == -1) {
				canJump = false;
			}
		}
		if (canJump) {
			jumpRequest(PSM::EnemyMidBoss::BossBgm_Defeated);
		}
	}
}

/**
 * @note Address: 0x8045FDC0
 * @note Size: 0x15C
 */
void EnemyBoss::setKilled()
{
	if (_E8 < 180) {
		_E8 |= 0x10000000;
		return;
	}

	Scene_Game* scene = PSMGetGameScene();
	if (scene) {
		scene->mEnemyBossList.remove(&mLink);
	}

	if (_FE) {
		_E8         = -1;
		mAppearFlag = false;
		_FE         = false;
		if (scene) {
			scene->bossKilled(this);
		}
		mDisappearTimer = 0;
	}
}

/**
 * @note Address: 0x8045FF1C
 * @note Size: 0x24
 */
bool EnemyBoss::isOnDisappearing()
{
	return mDisappearTimer != 0xffff;
}

/**
 * @note Address: 0x8045FF40
 * @note Size: 0x30
 */
void EnemyBoss::updateDisappearing()
{
	if (mDisappearTimer == 0xffff) {
		return;
	}
	mDisappearTimer++;
	if (mDisappearTimer > 120) {
		mDisappearTimer = 0xffff;
	}
}

/**
 * @note Address: 0x8045FF70
 * @note Size: 0x260
 */
EnemyMidBoss::EnemyMidBoss(Game::EnemyBase* gameObj)
    : EnemyBoss(gameObj)
    , mNumLinks(0xFFFF)
    , _104(500.0f)
    , mLink(this)
    , _118(0)
{
	BossBgmFader::Mgr* mgr = BossBgmFader::Mgr::sInstance;
	if (mgr) {
		mNumLinks = mgr->mTypedProc.getNumLinks();
		mgr->appendTarget(&mLink);
	}
}

/**
 * @note Address: 0x80460378
 * @note Size: 0x21C
 */
void EnemyMidBoss::onCalcOn()
{
	EnemyBoss::onCalcOn();
	if (_118 && !mAppearFlag) {
		Scene_Game* scene = PSMGetGameScene();
		if (scene && scene->getSeSceneGate(this, 0) && mNaviDistance < _104) {
			mAppearFlag             = true;
			PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
			mgr->checkScene();
			SceneBase* scene = static_cast<SceneBase*>(mgr->mScenes->mChild);
			if (scene && scene->getSeSceneGate(this, 0)) {
				if (!mIsFirstAppear) {
					mIsFirstAppear = true;
					onAppear1st();
				}
				onAppear();
			}
			_118 = false;
		}
	}
}

/**
 * @note Address: 0x80460594
 * @note Size: 0xEC
 */
void EnemyMidBoss::jumpRequest(u16 state)
{
	MiddleBossSeq* seq = PSMGetMiddleBossSeq();
	if (seq && seq) {
		seq->mCurrBossObj = this;
		seq->requestJumpBgmOnBeat(state);
	}
}

/**
 * @note Address: 0x80460680
 * @note Size: 0x10C
 */
void EnemyMidBoss::onAppear1st()
{
	Scene_Game* scene = PSMGetGameScene();
	if (scene) {
		scene->bossAppear(this, PSM::EnemyMidBoss::BossBgm_Appear);
	}
}

/**
 * @note Address: 0x8046078C
 * @note Size: 0x60
 */
void EnemyMidBoss::postPikiAttack(bool flag)
{
	if (PSSystem::SingletonBase<BossBgmFader::Mgr>::sInstance) {
		DirectorUpdator* dir = PSSystem::SingletonBase<BossBgmFader::Mgr>::sInstance->mTypedProc.mDirectorUpdator;
		if (dir) {
			if (flag) {
				dir->directOn(mNumLinks);
			} else {
				dir->directOff(mNumLinks);
			}
		}
	}
}

/**
 * @note Address: 0x804607EC
 * @note Size: 0x68
 */
EnemyBigBoss::EnemyBigBoss(Game::EnemyBase* gameObj)
    : EnemyMidBoss(gameObj)
    , mCurrBgmState(1)
{
	sBigBoss = this;
}

/**
 * @note Address: 0x80460A44
 * @note Size: 0x88
 */
EnemyBigBoss::~EnemyBigBoss()
{
	sBigBoss = nullptr;
}

/**
 * @note Address: 0x80460ACC
 * @note Size: 0xE8
 */
void EnemyBigBoss::jumpRequest(u16 state)
{
	MiddleBossSeq* seq = PSMGetMiddleBossSeq();
	if (seq) {
		seq->mCurrBossObj = this;
		seq->requestJumpBgmOnBeat(state);
	}
}

/**
 * @note Address: 0x80460BB4
 * @note Size: 0x38
 */
void EnemyBigBoss::onDeathMotionTop()
{
	_E8 = 0;
	jumpRequest(BigBossBgm_Defeated);
}

/**
 * @note Address: 0x80460BEC
 * @note Size: 0x10C
 */
void EnemyBigBoss::onAppear1st()
{
	Scene_Game* scene = PSMGetGameScene();
	if (scene) {
		scene->bossAppear(this, mCurrBgmState);
	}
}

/**
 * @note Address: 0x80460CF8
 * @note Size: 0xBC
 * Adjusts pitch for chappy sounds
 */
void Enemy_SpecialChappy::onPlayingSe(u32 soundID, JAISound* sound)
{
	if (!sound) {
		return;
	}

	if (soundID >= PSSE_EN_CHAPPY_WALK && PSSE_EN_CHAPPY_EAT >= soundID && soundID != PSSE_EN_CHAPPY_DEAD
	    && soundID != PSSE_EN_CHAPPY_BITE2) {
		sound->setPitch(0.8f, 0, SOUNDPARAM_Unk0);
	} else if (soundID == PSSE_EN_CHAPPY_DEAD) {
		sound->setPitch(0.65f, 0, SOUNDPARAM_Unk0);
	} else if (soundID == PSSE_EN_CHAPPY_BITE2) {
		sound->setPitch(0.8f, 20, SOUNDPARAM_Unk0);
	}
}

/**
 * @note Address: 0x80460DB4
 * @note Size: 0x2C
 */
void DirectorLink::eventStart()
{
	eventRestart();
}

/**
 * @note Address: 0x80460DE0
 * @note Size: 0x4C
 */
void DirectorLink::eventRestart()
{
	ListDirectorActor* actor = getListDirectorActor();
	if (actor) {
		actor->append(this);
	}
}

/**
 * @note Address: 0x80460E2C
 * @note Size: 0x4C
 */
void DirectorLink::eventStop()
{
	ListDirectorActor* actor = getListDirectorActor();
	if (actor) {
		actor->remove(this);
	}
}

/**
 * @note Address: 0x80460E78
 * @note Size: 0x2C
 */
void DirectorLink::eventFinish()
{
	eventStop();
}

/**
 * @note Address: 0x80460EA4
 * @note Size: 0x34
 */
ListDirectorActor* EventLink::getListDirectorActor()
{
	ActorDirector_Scaled* actor = PSMGetEventD();
	if (actor) {
		return actor->mActor;
	}
	return nullptr;
}

/**
 * @note Address: 0x80460ED8
 * @note Size: 0x34
 */
ListDirectorActor* OtakaraEventLink::getListDirectorActor()
{
	ActorDirector_TrackOn* actor = PSMGetOtakaraEventD();
	if (actor) {
		return (ListDirectorActor*)actor->mActor;
	}
	return nullptr;
}

/**
 * @note Address: 0x80460F0C
 * @note Size: 0x4
 */
void OtakaraEventLink::eventFinish()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x114
 */
Otakara* OtakaraEventLink_2PBattle::getPSOtakara()
{
	P2ASSERTLINE(1699, getObject());

	Otakara* obj = static_cast<Otakara*>(getObject()->getPSCreature());
	P2ASSERTLINE(1701, obj);

	P2ASSERTLINE(1706, obj->isTreasure());

	return obj;
}

/**
 * @note Address: N/A
 * @note Size: 0x164
 */
bool OtakaraEventLink_2PBattle::isAvoidCase()
{
	return getPSOtakara()->canFinish();
}

/**
 * @note Address: 0x80460F10
 * @note Size: 0x250
 */
ActorDirector_TrackOn* OtakaraEventLink_2PBattle::getTargetDirector()
{
	Otakara* obj = getPSOtakara();

	Game::Onyon* onyon           = obj->mOnyon;
	ActorDirector_TrackOn* actor = nullptr;
	switch (obj->mBedamaType) {
	case Otakara::PSMBedama_None:
		actor = nullptr;
		break;
	case Otakara::PSMBedama_Cherry:
		if (onyon) {
			if (onyon->mOnyonType == ONYON_TYPE_BLUE) {
				actor = PSMGetIchouForLugieD();
			} else if (onyon->mOnyonType == ONYON_TYPE_RED) {
				actor = PSMGetIchouForOrimerD();
			} else {
				JUT_PANICLINE(1780, "P2Assert");
			}
		}
		break;
	case Otakara::PSMBedama_Yellow:
		P2ASSERTLINE(1787, onyon);
		if (onyon->mOnyonType == ONYON_TYPE_BLUE) {
			actor = PSMGetBeedamaForLugieD();
		} else if (onyon->mOnyonType == ONYON_TYPE_RED) {
			actor = PSMGetBeedamaForOrimerD();
		} else {
			JUT_PANICLINE(1794, "P2Assert");
		}
		break;
	case Otakara::PSMBedama_Red:
		actor = PSMGetBeedamaForLugieD();
		break;
	case Otakara::PSMBedama_Blue:
		actor = PSMGetBeedamaForOrimerD();
		break;
	}

	P2ASSERTLINE(1818, actor);
	return actor;
}

/**
 * @note Address: 0x80461160
 * @note Size: 0x194
 */
void OtakaraEventLink_2PBattle::eventStart()
{
	if (!isAvoidCase()) {
		ActorDirector_TrackOn* director = getTargetDirector();
		if (director->mActor) {
			static_cast<ListDirectorActor*>(director->mActor)->append(this);
		}
	}
}

/**
 * @note Address: 0x804612F4
 * @note Size: 0x2C
 */
void OtakaraEventLink_2PBattle::eventRestart()
{
	eventStart();
}

/**
 * @note Address: 0x80461320
 * @note Size: 0x194
 */
void OtakaraEventLink_2PBattle::eventStop()
{
	if (!isAvoidCase()) {
		ActorDirector_TrackOn* director = getTargetDirector();
		if (director->mActor) {
			static_cast<ListDirectorActor*>(director->mActor)->remove(this);
		}
	}
}

/**
 * @note Address: 0x804614B4
 * @note Size: 0x2C
 */
void OtakaraEventLink_2PBattle::eventFinish()
{
	eventStop();
}

/**
 * @note Address: 0x804614E0
 * @note Size: 0x140
 */
ListDirectorActor* OtakaraEventLink_2PBattle::getListDirectorActor()
{
	Otakara* obj = getPSOtakara();

	P2ASSERTLINE(1891, (int)obj->mBedamaType == Otakara::PSMBedama_None);

	return (ListDirectorActor*)PSMGetOtakaraEventD()->mActor;
}

/**
 * @note Address: 0x80461620
 * @note Size: 0x170
 */
WorkItem::WorkItem(Game::BaseItem* gameObj)
    : EventBase(gameObj, 2)
    , mLink(gameObj)
{
}

/**
 * @note Address: 0x80461790
 * @note Size: 0x30
 */
void WorkItem::eventStart()
{
	mLink.eventStart();
}

/**
 * @note Address: 0x804617C0
 * @note Size: 0x30
 */
void WorkItem::eventRestart()
{
	mLink.eventRestart();
}

/**
 * @note Address: 0x804617F0
 * @note Size: 0x30
 */
void WorkItem::eventStop()
{
	mLink.eventStop();
}

/**
 * @note Address: 0x80461820
 * @note Size: 0x30
 */
void WorkItem::eventFinish()
{
	mLink.eventFinish();
}

/**
 * @note Address: N/A
 * @note Size: 0x184
 */
Otakara::Otakara(Game::Creature* gameObj)
    : EventBase(gameObj, 2)
    , mBedamaType(PSMBedama_None)
    , mOnyon(nullptr)
    , mEventLink(gameObj)
    , mOtaEvent(nullptr)
{
}

/**
 * @note Address: 0x80461850
 * @note Size: 0x1A0
 */
void Otakara::setGoalOnyon(Game::Creature* onyon)
{
	if ((int)mBedamaType == PSMBedama_Blue || (int)mBedamaType == PSMBedama_Red || (int)mBedamaType == PSMBedama_Yellow) {
		return;
	}

	Game::Creature* old = mOnyon;
	mOnyon              = static_cast<Game::Onyon*>(onyon);
	otakaraCheckEvent(this);
	if (mOtaEvent->is2PBattle()) {

		if (!mOnyon) {
			if ((int)mBedamaType == PSMBedama_Blue || (int)mBedamaType == PSMBedama_Red) {
				P2ASSERTLINE(2014, mOtaEvent);
				ListDirectorActor* actor
				    = static_cast<ListDirectorActor*>(static_cast<OtakaraEventLink_2PBattle*>(mOtaEvent)->getTargetDirector()->mActor);
				actor->remove(mOtaEvent);
			}
		} else if (old && old != mOnyon && (int)mBedamaType == PSMBedama_Yellow) {
			mOnyon = static_cast<Game::Onyon*>(old);
			P2ASSERTLINE(2030, mOtaEvent);
			ListDirectorActor* actor
			    = static_cast<ListDirectorActor*>(static_cast<OtakaraEventLink_2PBattle*>(mOtaEvent)->getTargetDirector()->mActor);
			actor->remove(mOtaEvent);
			mOnyon = static_cast<Game::Onyon*>(onyon);

			P2ASSERTLINE(2041, mOtaEvent);
			actor = static_cast<ListDirectorActor*>(static_cast<OtakaraEventLink_2PBattle*>(mOtaEvent)->getTargetDirector()->mActor);
			actor->append(mOtaEvent);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
bool Otakara::avoidNormalDirection()
{
	P2ASSERTLINE(2058, mOtaEvent);
	return is2PBattle();
}

/**
 * @note Address: 0x804619F0
 * @note Size: 0xDC
 */
void Otakara::otakaraEventStart()
{
	if (!avoidNormalDirection()) {
		mEventLink.eventStart();
	}
	P2ASSERTLINE(2074, mOtaEvent);
	mOtaEvent->eventStart();
}

/**
 * @note Address: 0x80461ACC
 * @note Size: 0xDC
 */
void Otakara::otakaraEventRestart()
{
	P2ASSERTLINE(2082, mOtaEvent);
	if (!avoidNormalDirection()) {
		mEventLink.eventRestart();
	}
	mOtaEvent->eventRestart();
}

/**
 * @note Address: 0x80461BA8
 * @note Size: 0xDC
 */
void Otakara::otakaraEventStop()
{
	P2ASSERTLINE(2094, mOtaEvent);
	if (!avoidNormalDirection()) {
		mEventLink.eventStop();
	}
	mOtaEvent->eventStop();
}

/**
 * @note Address: 0x80461C84
 * @note Size: 0xDC
 */
void Otakara::otakaraEventFinish()
{
	P2ASSERTLINE(2106, mOtaEvent);
	if (!avoidNormalDirection()) {
		mEventLink.eventFinish();
	}
	mOtaEvent->eventFinish();
}

/**
 * @note Address: 0x80461D60
 * @note Size: 0x224
 */
PelletOtakara::PelletOtakara(Game::PelletOtakara::Object* gameObj, bool is2PBattle)
    : Otakara(gameObj)
{
	if (!is2PBattle) {
		mOtaEvent = new OtakaraEventLink(gameObj);
	} else {
		mOtaEvent = new OtakaraEventLink_2PBattle(gameObj);
	}
}

/**
 * @note Address: 0x804620CC
 * @note Size: 0x1D4
 */
PelletItem::PelletItem(Game::PelletItem::Object* gameObj)
    : Otakara(gameObj)
{
	mOtaEvent = new OtakaraEventLink(gameObj);
}

/**
 * @note Address: 0x804622A0
 * @note Size: 0x148
 */
Piki::Piki(Game::Piki* p)
    : CreatureObj(p, 2)
    , mFreeCounter(-1)
    , mHummingCounter(-1)
{
}

/**
 * @note Address: 0x804623E8
 * @note Size: 0x180
 */
void Piki::onCalcOn()
{
	if (mFreeCounter != -1) {
		mFreeCounter++;
	}

	u32 a = mHummingCounter;
	if (static_cast<Game::Piki*>(mGameObj)->isWalking()) {
		if (a == -1) {
			mHummingCounter = 0;
		} else {
			mHummingCounter++;
		}
		Scene_Game* scene = PSMGetGameScene();
		if (scene) {
			PikiHummingMgr* mgr = scene->mHummingMgr;
			P2ASSERTLINE(2180, mgr);
			mgr->play(this);
		}
	} else {
		mHummingCounter = -1;
	}
}

/**
 * @note Address: 0x80462568
 * @note Size: 0xC
 */
void Piki::becomeFree()
{
	mFreeCounter = 0;
}

/**
 * @note Address: 0x80462574
 * @note Size: 0xC
 */
void Piki::becomeNotFree()
{
	mFreeCounter = -1;
}

/**
 * @note Address: 0x80462580
 * @note Size: 0x144
 */
JAISound* Piki::startFreePikiSound(u32 soundID, u32 time, u32 flag)
{
	if (PSMCheckSceneIsDemo() && soundID == PSSE_PK_VC_AKUBI) {
		return nullptr;
	}
	soundID = checkHappaChappySE(soundID);
	if (soundID == 0xffffffff) {
		return nullptr;
	}
	if (mFreeCounter == -1) {
		return startSound(soundID, flag);
	}
	if (mFreeCounter >= (int)time) {
		return startSound(soundID, flag);
	}
	return nullptr;
}

/**
 * @note Address: 0x804626C4
 * @note Size: 0x70
 */
JAISound* Piki::startPikiSound(JAInter::Object* obj, u32 soundID, u32 flag)
{
	soundID = checkHappaChappySE(soundID);
	if (soundID == 0xffffffff) {
		return nullptr;
	}
	return obj->startSound(soundID, flag);
}

/**
 * @note Address: 0x80462734
 * @note Size: 0xB4
 */
JAISound* Piki::startPikiSetSound(JAInter::Object* obj, u32 soundID, PSGame::SeMgr::SetSeId set, u32 flag)
{
	soundID = checkHappaChappySE(soundID);
	if (soundID == 0xffffffff) {
		return nullptr;
	}
	return PSSystem::getSeMgrInstance()->mSetSeList[(u8)set]->startSound(obj, soundID, flag);
}

/**
 * @note Address: 0x804627E8
 * @note Size: 0x1D4
 */
JAISound* Piki::startFreePikiSetSound(u32 soundID, PSGame::SeMgr::SetSeId set, u32 time, u32 flag)
{
	if (PSMCheckSceneIsDemo() && soundID == PSSE_PK_VC_AKUBI) {
		return nullptr;
	}
	if (mFreeCounter == -1) {
		return startPikiSetSound(this, soundID, set, flag);
	}
	if (mFreeCounter >= (int)time) {
		return startPikiSetSound(this, soundID, set, flag);
	}
	return nullptr;
}

/**
 * @note Address: 0x804629BC
 * @note Size: 0x104
 */
u32 Piki::checkHappaChappySE(u32 id)
{
	if (static_cast<Game::Piki*>(mGameObj)->getKind() != Game::Bulbmin) {
		return id;
	}

	u32 soundID;
	switch (id) {
	case PSSE_PK_VC_BREAKUP:
		soundID = PSSE_PK_HAPPA_BREAKUP;
		break;
	case PSSE_PK_VC_CALLED:
		soundID = PSSE_PK_HAPPA_CALLED;
		break;
	case PSSE_PK_VC_THROW_WAIT:
		soundID = PSSE_PK_HAPPA_THROW_WAIT;
		break;
	case PSSE_PK_VC_THROWN:
		soundID = PSSE_PK_HAPPA_THROWN;
		break;
	case PSSE_PK_VC_EATEN:
		soundID = PSSE_PK_HAPPA_EATEN;
		break;
	case PSSE_PK_VC_GHOST:
		soundID = PSSE_PK_HAPPA_GHOST;
		break;
	case PSSE_PK_VC_JUMP_INTO_HOLE:
		soundID = PSSE_PK_HAPPA_JUMP_HOLE;
		break;
	case PSSE_PK_VC_FALL:
	case PSSE_PK_VC_BLOWN_DEAD:
		soundID = PSSE_PK_HAPPA_FALL;
		break;
	case PSSE_PK_VC_PRESSED:
		soundID = PSSE_PK_HAPPA_PRESSED;
		break;
	case PSSE_PK_FLOWER_VOICE:
		soundID = PSSE_PK_HAPPA_FLOWER;
		break;
	case PSSE_PK_FLOWER_FALL_VOICE:
		soundID = PSSE_PK_HAPPA_FLOWER_FALL;
		break;
	case PSSE_PL_PULLOUT_PIKI:
		soundID = PSSE_PK_HAPPA_PULLOUT;
		break;
	case PSSE_PK_VC_LIFT_TRY:
		soundID = PSSE_PK_HAPPA_LIFT_TRY;
		break;
	case PSSE_PK_VC_LIFT_SUCCESS:
		soundID = PSSE_PK_HAPPA_LIFT_SUCCESS;
		break;
	case PSSE_PK_VC_LIFT_MOVE:
		soundID = PSSE_PK_HAPPA_LIFT_MOVE;
		break;
	case PSSE_PK_VC_ATTACK:
		soundID = PSSE_PK_HAPPA_ATTACK;
		break;
	case PSSE_PK_VC_DOPING:
		soundID = PSSE_PK_HAPPA_DOPING;
		break;
	case PSSE_PK_VC_DOPE_ATTACK:
		soundID = PSSE_PK_HAPPA_DOPE_ATTACK;
		break;
	case PSSE_PK_VC_DOPE_END:
		soundID = PSSE_PK_HAPPA_DOPE_END;
		break;
	case PSSE_PK_VC_SCATTERED:
		soundID = PSSE_PK_HAPPA_SCATTERED;
		break;
	case PSSE_PK_VC_DIGGING:
		soundID = PSSE_PK_HAPPA_DIGGING;
		break;
	case PSSE_PK_VC_SAVED:
		soundID = PSSE_PK_HAPPA_SAVED;
		break;
	case PSSE_PK_VC_PANIC:
		soundID = PSSE_PK_HAPPA_PANIC;
		break;
	case PSSE_PK_SE_ATTACH:
	case PSSE_PK_SE_KARABURI:
	case PSSE_PK_SE_ATTACKHIT:
	case PSSE_PK_SE_WATER_IN:
	case PSSE_PK_SE_HIT_FOUNTAIN:
	case PSSE_PK_SE_HIT_HARDWALL:
	case PSSE_PK_SE_HIT_SOFTWALL:
	case PSSE_PK_SE_HIT_CONCRETEWALL:
	case PSSE_PK_SE_HIT_BRIDGE:
	case PSSE_PK_SE_HIT_STONE:
	case PSSE_PK_SE_PULL_GRASS:
	case PSSE_EN_KURAGE_GET_PIKI:
	case PSSE_PK_SE_STABBED:
	case PSSE_PK_VC_DRINK:
	case PSSE_PK_SE_HIT_ELEC_GATE:
		soundID = id;
		break;
	default:
		soundID = -1;
	}
	return soundID;
}

/**
 * @note Address: 0x80462AC0
 * @note Size: 0x138
 */
Navi::Navi(Game::Navi* gameObj)
    : CreatureObj(gameObj, 2)
    , mCurrSound(nullptr)
{
}

/**
 * @note Address: 0x80462BF8
 * @note Size: 0x24
 */
void Navi::init(u16 rappa)
{
	mRappa.init(rappa);
}

/**
 * @note Address: 0x80462C1C
 * @note Size: 0x28
 */
void Navi::setShacho()
{
	mRappa.setId(137);
}

/**
 * @note Address: 0x80462C44
 * @note Size: 0x50
 */
void Navi::stopWaitVoice()
{
	if (mCurrSound) {
		mCurrSound->stop(0);
		mCurrSound = nullptr;
	}
}

/**
 * @note Address: 0x80462C94
 * @note Size: 0x108
 */
JAISound* Navi::startSound(u32 soundID, u32 flag)
{
	switch (soundID) {
	case PSSE_PL_PUNCH_ORIMA:
	case PSSE_PL_PUNCH_LUI:
	case PSSE_PL_PUNCH_SHACHO:
	case PSSE_PL_DAMAGE_ORIMA:
	case PSSE_PL_DAMAGE_LUI:
	case PSSE_PL_DAMAGE_SHACHO:
	case PSSE_PL_SLEEP_ORIMA:
	case PSSE_PL_SLEEP_LUGI:
	case PSSE_PL_SLEEP_SHACHO:
		stopWaitVoice();
		break;
	case PSSE_PL_ORIMA_DAMAGE:
		return startSound(getManType() + PSSE_PL_DAMAGE_ORIMA, 0);
	}

	PSM::StartSoundArg arg(this, soundID, flag);
	JAISound* se = startSoundInner(arg);
	if (soundID >= PSSE_PL_WAIT_JUMP_ORIMA && soundID <= PSSE_PL_WAIT_CHAT_SHACHO) {
		mCurrSound = se;
	}
	return se;
}

/**
 * @note Address: 0x80462D9C
 * @note Size: 0x28
 */
Navi::ManType Navi::getManType()
{
	if (mRappa.mId == 13) {
		return ManType_Olimar;
	}

	if (mRappa.mId == 14) {
		return ManType_Louie;
	}
	return ManType_President;
}

/**
 * @note Address: 0x80462DC4
 * @note Size: 0xA0
 */
JAISound* Navi::playShugoSE()
{
	u32 sound;
	if (getManType() == ManType_Olimar) {
		sound = PSSE_PL_SHUGO;
	} else {
		// written like this to match
		sound = PSSE_PL_SYUGO_SHACHO + ((getManType() == ManType_Louie) ? -1 : 0);
	}
	return startSound(sound, 0);
}

/**
 * @note Address: 0x80462E64
 * @note Size: 0xA0
 */
JAISound* Navi::playKaisanSE()
{
	u32 sound;
	if (getManType() == ManType_Olimar) {
		sound = PSSE_PL_KAISAN;
	} else {
		sound = PSSE_PL_KAISAN_SHACHO + ((getManType() == ManType_Louie) ? -1 : 0);
	}
	return startSound(sound, 0);
}

/**
 * @note Address: 0x80462F04
 * @note Size: 0x130
 */
void Navi::playWalkSound(PSM::Navi::FootType type, int id)
{
	id                     = type + (id * 2);
	PSGame::RandId& randid = PSSystem::getSeMgrInstance()->mRandid;

	if (static_cast<Game::Navi*>(mGameObj)->isWalking()) {
		stopWaitVoice();
	}

	randid.mId   = 0.7f;
	JAISe* sound = randid.startSound(this, id, 2, 0);
	randid.mId   = PSGame::RandId::cNotUsingMasterIdRatio;

	if (sound) {
		sound->setPortData(10, getManType());
	}
}

/**
 * @note Address: 0x80463034
 * @note Size: 0x158
 */
Cluster::Cluster(Game::Creature* gameObj, PSSystem::ClusterSe::Factory& factory)
    : CreatureObj(gameObj, 2)
{
	mClusterSeMgr = new PSSystem::ClusterSe::Mgr;
	mClusterSeMgr->constructParts(factory);
}

/**
 * @note Address: 0x8046318C
 * @note Size: 0x60
 */
void Cluster::startClusterSound(u8 count)
{
	exec();
	mClusterSeMgr->play(count, this);
}

} // namespace PSM

/**
 * @note Address: 0x804631EC
 * @note Size: 0x58
 */
void PSSetCurCameraNo(u8 cams)
{
	static_cast<PSM::ObjCalc_SingleGame*>(PSSystem::SingletonBase<PSM::ObjCalcBase>::getInstance())->mPlayerNum = cams;
}

/**
 * @note Address: 0x80463244
 * @note Size: 0x8
 */
f32 PSMGetNoukouDist()
{
	return PSM::CreaturePrm::cNoukouDistance;
}

/**
 * @note Address: 0x8046324C
 * @note Size: 0x70
 */
void PSSetLastBeedamaDirection(bool isOlimar, bool isOn)
{
	PSM::ActorDirector_TrackOn* director;
	if (isOlimar) {
		director = PSMGetBeedamaForOrimerD();
	} else {
		director = PSMGetBeedamaForLugieD();
	}

	if (director) {
		if (isOn) {
			director->directOn();
		} else {
			director->directOff();
		}
	}
}
