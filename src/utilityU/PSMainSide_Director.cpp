#include "PSSystem/SeqTrack.h"
#include "PSMath.h"
#include "PSM/ObjCalc.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PSGame/Global.h"
#include "PSAutoBgm/PSAutoBgm.h"
#include "JSystem/JAudio/JALCalc.h"
#include "PSM/CreaturePrm.h"
#include "Game/Navi.h"
#include "utilityU.h"
#include "PSM/BossSeq.h"
#include "Game/Entities/ItemOnyon.h"

namespace PSM {

/**
 * @note Address: 0x80456AF8
 * @note Size: 0x80
 */
DamageDirector::DamageDirector()
    : mPitchMod1(0.1f)
    , mPitchMod2(5.0f)
    , mDuration(225)
{
}

/**
 * @note Address: 0x80456BF8
 * @note Size: 0x34
 */
void DamageDirector::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackRoot&>(seqTrack).pitchModulation(mPitchMod1, mPitchMod2, mDuration, this);
}

/**
 * @note Address: 0x80456C2C
 * @note Size: 0x3C
 */
void DamageDirector::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
TempoChangeDirectorBase::TempoChangeDirectorBase(const char* name, f32 tempo, s32 duration)
    : SwitcherDirector(1, name)
    , mTempoValue(tempo)
    , mTimeBase(duration)
    , mActor(nullptr)
{
}

/**
 * @note Address: 0x80456CE8
 * @note Size: 0x30
 */
void TempoChangeDirectorBase::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackRoot&>(seqTrack).tempoChange(mTempoValue, mTimeBase, this);
}

/**
 * @note Address: 0x80456D18
 * @note Size: 0x30
 */
void TempoChangeDirectorBase::directOffTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackRoot&>(seqTrack).tempoChange(1.0f, mTimeBase, this);
}

/**
 * @note Address: 0x80456D48
 * @note Size: 0x84
 */
ActorDirector_TempoChange::ActorDirector_TempoChange()
    : TempoChangeDirectorBase("lifeD    ", 0.7f, 100)
{
}

/**
 * @note Address: 0x80456E5C
 * @note Size: 0x3C
 */
void ActorDirector_TempoChange::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/**
 * @note Address: 0x80456E98
 * @note Size: 0x78
 */
PikminNumberDirector::PikminNumberDirector(int numTracks, u8 mask, PSSystem::DirectedBgm& bgm)
    : SwitcherDirector(numTracks, "pikminD  ")
    , mMaskId(mask)
{
}

/**
 * @note Address: 0x80456F10
 * @note Size: 0x4C
 */
void PikminNumberDirector::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	seqTrack.getTaskEntryList();
	static_cast<PSSystem::SeqTrackChild&>(seqTrack).setIdMask(mMaskId, this);
}

/**
 * @note Address: 0x80456F5C
 * @note Size: 0x2C
 */
void PikminNumberDirector::directOffTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackChild&>(seqTrack).setIdMask(0, this);
}

/**
 * @note Address: 0x80456F88
 * @note Size: 0x3C
 */
void PikminNumberDirector::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/**
 * @note Address: 0x80456FC4
 * @note Size: 0x94
 */
PikminNumberDirector_AutoBgm::PikminNumberDirector_AutoBgm(int numTracks, u8 mask, PSSystem::DirectedBgm& bgm)
    : PikminNumberDirector(numTracks, mask, bgm)
    , mDirectedBgm(&bgm)
{
}

/**
 * @note Address: 0x804570E8
 * @note Size: 0x88
 */
void PikminNumberDirector_AutoBgm::directOnTrack(PSSystem::SeqTrackBase& track)
{
	JSULink<PSAutoBgm::MeloArrBase>* link;
	PSAutoBgm::Track* subtrack = getTrack(track);
	PSAutoBgm::AutoBgm* bgm    = static_cast<PSAutoBgm::AutoBgm*>(mDirectedBgm);
	bgm->mMeloArr.mIsActive    = true;

	for (link = bgm->mMeloArr.mList.getFirst(); link; link = link->getNext()) {
		PSAutoBgm::MeloArrBase* melo = link->getObject();
		bool valid                   = (bool)melo->mDoDirectSubTracks == 1;
		if (valid) {
			melo->directOn(subtrack);
		}
	}
}

/**
 * @note Address: 0x80457170
 * @note Size: 0x88
 */
void PikminNumberDirector_AutoBgm::directOffTrack(PSSystem::SeqTrackBase& track)
{
	JSULink<PSAutoBgm::MeloArrBase>* link;
	PSAutoBgm::Track* subtrack = getTrack(track);
	PSAutoBgm::AutoBgm* bgm    = static_cast<PSAutoBgm::AutoBgm*>(mDirectedBgm);
	bgm->mMeloArr.mIsActive    = false;

	for (link = bgm->mMeloArr.mList.getFirst(); link; link = link->getNext()) {
		PSAutoBgm::MeloArrBase* melo = link->getObject();
		bool valid                   = (bool)melo->mDoDirectSubTracks == 1;
		if (valid) {
			melo->directOff(subtrack);
		}
	}
}

/**
 * @note Address: 0x804571F8
 * @note Size: 0xB8
 */
PSAutoBgm::Track* PikminNumberDirector_AutoBgm::getTrack(PSSystem::SeqTrackBase& parent)
{
	PSSystem::TaskEntryMgr* mgr = parent.getTaskEntryList();
	u8 trackNum                 = (u8)(mgr->mTrack->_348 & 0xf);
	P2ASSERTLINE(194, trackNum < static_cast<PSAutoBgm::AutoBgm*>(mDirectedBgm)->mConductorMgr.mPrmSetRc->getChildNum());
	PSAutoBgm::Track* track = static_cast<PSAutoBgm::AutoBgm*>(mDirectedBgm)->mConductorMgr.mPrmSetRc->getChild(trackNum);
	P2ASSERTLINE(196, track);
	return track;
}

/**
 * @note Address: 0x804572B0
 * @note Size: 0x7C
 */
TrackOnDirectorBase::TrackOnDirectorBase(int numTracks, const char* name, s32 fadeIn, s32 fadeOut)
    : SwitcherDirector(numTracks, name)
    , mFadeInValue(fadeIn)
    , mFadeOutValue(fadeOut)
    , mEnableType(0)
{
}

/**
 * @note Address: 0x8045732C
 * @note Size: 0x34
 */
void TrackOnDirectorBase::onPlayInit(JASTrack* track)
{
	track->mPauseStatus |= 0x60;
	track->muteTrack(true);
}

/**
 * @note Address: 0x80457360
 * @note Size: 0x50
 */
void TrackOnDirectorBase::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	if (mEnableType) {
		static_cast<PSSystem::SeqTrackChild&>(seqTrack).muteOffAndFadeIn(0.0f, 0, this);
	} else {
		static_cast<PSSystem::SeqTrackChild&>(seqTrack).muteOffAndFadeIn(1.0f, mFadeInValue, this);
	}
}

/**
 * @note Address: 0x804573B0
 * @note Size: 0x2C
 */
void TrackOnDirectorBase::directOffTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackChild&>(seqTrack).fadeoutAndMute(mFadeOutValue, this);
}

/**
 * @note Address: 0x804573DC
 * @note Size: 0x90
 */
void TrackOnDirector_Voting::execInner()
{
	if (mVoteState == 0 && isUnderDirection()) {
		directOff();
	} else if (mVoteState != 0 && !isUnderDirection()) {
		directOn();
	}
	mVoteState = 0;
}

TrackOnDirector_Scaled::TrackOnDirector_Scaled(const char* name, int trackCount, f32 endDistance, f32 startDistance, s32 fadeIn,
                                               s32 fadeOut, u32 fadeDuration)
    : TrackOnDirectorBase(trackCount, name, fadeIn, fadeOut)
    , mEndDistance(endDistance)
    , mStartDistance(startDistance)
    , mCurrDistance(100000.0f)
    , mFadeDuration(fadeDuration)
{
	mEnableType = 1;
	mActor      = nullptr;
}

/**
 * @note Address: 0x804574FC
 * @note Size: 0xFC
 */
void TrackOnDirector_Scaled::underDirection()
{
	f32 rate = 1.0f;
	if (!PSSystem::DirectorBase::sToolMode) {
		rate          = getNearestDistance();
		mCurrDistance = rate;
		rate          = JALCalc::linearTransform(mCurrDistance, mStartDistance, mEndDistance, 0.0f, 1.0f, false);
	}

	fadeAllTracks(rate, &mFadeDuration);
}

/**
 * @note Address: 0x804575F8
 * @note Size: 0x8C
 */
void ListDirectorActor::onUpdateFromMasterD()
{
	if (!mHead && mDirectorChild->isUnderDirection()) {
		mDirectorChild->directOff();
	} else if (mHead && !mDirectorChild->isUnderDirection()) {
		mDirectorChild->directOn();
	}
}

/**
 * @note Address: 0x80457684
 * @note Size: 0x98
 */
ActorDirector_TrackOn::ActorDirector_TrackOn(const char* name, int numTracks, s32 fadeIn, s32 fadeOut)
    : TrackOnDirectorBase(numTracks, name, fadeIn, fadeOut)
{
}

/**
 * @note Address: 0x8045771C
 * @note Size: 0x3C
 */
void ActorDirector_TrackOn::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/**
 * @note Address: 0x80457758
 * @note Size: 0xF4
 */
ActorDirector_Scaled::ActorDirector_Scaled(const char* name, int trackCount, f32 endDistance, f32 startDistance, s32 fadeIn, s32 fadeOut,
                                           u32 fadeDuration)
    : TrackOnDirector_Scaled(name, trackCount, endDistance, startDistance, fadeIn, fadeOut, fadeDuration)
{
}

/**
 * @note Address: 0x804578EC
 * @note Size: 0x3C
 */
void ActorDirector_Scaled::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/**
 * @note Address: 0x80457928
 * @note Size: 0x614
 */
f32 ActorDirector_Scaled::getNearestDistance()
{
	bool is1P   = PSSystem::SingletonBase<PSM::ObjCalcBase>::getInstance()->is1PGame();
	f32 minDist = 1000000.0f;
	JSULink<Game::Creature>* link;
	if (!is1P) {
		Game::Navi* olimar = Game::naviMgr->getAt(NAVIID_Olimar);
		Game::Navi* louie  = Game::naviMgr->getAt(NAVIID_Louie);
		P2ASSERTBOOLLINE(394, olimar && louie);

		Vector3f oPos = olimar->getPosition();
		Vector3f lPos = louie->getPosition();

		JSUList<Game::Creature>* actors = mActor;
		for (link = actors->getFirst(); link; link = link->getNext()) {
			Vector3f objpos = link->getObject()->getPosition();
			f32 p1Dist      = PSMath::calcDistance(PSMath::toVec(objpos), PSMath::toVec(oPos));
			f32 p2Dist      = PSMath::calcDistance(PSMath::toVec(objpos), PSMath::toVec(lPos));
			if (p1Dist <= p2Dist) {
				if (p1Dist < minDist) {
					minDist = p1Dist;
					onSetMinDistObj(link->getObject());
				}
			} else if (p2Dist < minDist) {
				minDist = p2Dist;
				onSetMinDistObj(link->getObject());
			}
		}

	} else {
		Game::Navi* navi = Game::naviMgr->getActiveNavi();
		Vector3f naviPos;
		if (!navi) {
			u8 id                = PSSystem::SingletonBase<PSM::ObjCalcBase>::sInstance->getPlayerNo(nullptr);
			JAInter::Camera* cam = &JAIBasic::msBasic->mCameras[id];
			naviPos              = (*cam->mVec1);
		} else {
			naviPos = navi->getPosition();
		}

		for (link = mActor->getFirst(); link; link = link->getNext()) {
			const Vector3f objpos = link->getObject()->getPosition();
			f32 dist              = PSMath::calcDistance(PSMath::toVec(objpos), PSMath::toVec(naviPos));
			if (dist < minDist) {
				minDist = dist;
				onSetMinDistObj(link->getObject());
			}
		}
	}
	return minDist;
}

/**
 * @note Address: 0x80457F3C
 * @note Size: 0xE4
 */
ActorDirector_Enemy::ActorDirector_Enemy(const char* name, int trackCount, s32 fadeIn, s32 fadeOut, u32 fadeDuration)
    : ActorDirector_Scaled(name, trackCount, 1.0f, 0.0f, fadeIn, fadeOut, fadeDuration)
    , mGameObject(nullptr)
{
}

/**
 * @note Address: 0x804580D0
 * @note Size: 0x8
 */
void ActorDirector_Enemy::onSetMinDistObj(Game::Creature* obj)
{
	mGameObject = static_cast<Game::EnemyBase*>(obj);
}

/**
 * @note Address: 0x804580D8
 * @note Size: 0x1D0
 */
void ActorDirector_Enemy::underDirection()
{
	mGameObject = nullptr;
	f32 rate    = 1.0f;
	if (!PSSystem::DirectorBase::sToolMode) {
		if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::PIKLOPEDIA) {
			rate = 1.0f;
		} else {
			rate          = getNearestDistance();
			mCurrDistance = rate;
			f32 zeroDist  = getVolZeroDist(mGameObject);
			f32 maxDist   = getVolMaxDist(mGameObject);
			rate          = JALCalc::linearTransform(mCurrDistance, zeroDist, maxDist, 0.0f, 1.0f, false);
		}
	}

	fadeAllTracks(rate, &mFadeDuration);
}

/**
 * @note Address: 0x804582A8
 * @note Size: 0x44
 */
f32 ActorDirector_Battle::getVolZeroDist(Game::EnemyBase* enemy)
{
	int id = enemy->mSoundObj->getCastType() - 2;
	return CreaturePrm::cVolZeroDist_Battle[id];
}

/**
 * @note Address: 0x804582EC
 * @note Size: 0x44
 */
f32 ActorDirector_Battle::getVolMaxDist(Game::EnemyBase* enemy)
{
	int id = enemy->mSoundObj->getCastType() - 2;
	return CreaturePrm::cVolMaxDist_Battle[id];
}

/**
 * @note Address: 0x80458330
 * @note Size: 0x44
 */
f32 ActorDirector_Kehai::getVolZeroDist(Game::EnemyBase* enemy)
{
	int id = enemy->mSoundObj->getCastType() - 2;
	return CreaturePrm::cVolZeroDist_Kehai[id];
}

/**
 * @note Address: 0x80458374
 * @note Size: 0x44
 */
f32 ActorDirector_Kehai::getVolMaxDist(Game::EnemyBase* enemy)
{
	int id = enemy->mSoundObj->getCastType() - 2;
	return CreaturePrm::cVolMaxDist_Kehai[id];
}

/**
 * @note Address: N/A
 * @note Size: 0xF4
 */
ActorDirector_IchouNBeedama::ActorDirector_IchouNBeedama(const char* name, int trackCount, f32 endDistance, f32 startDistance, s32 fadeIn,
                                                         s32 fadeOut, u32 fadeDuration)
    : TrackOnDirector_Scaled(name, trackCount, endDistance, startDistance, fadeIn, fadeOut, fadeDuration)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void ActorDirector_IchouNBeedama::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xF8
 * @note This is me coding out of my ass that this is what it should be - very much a guess.
 */
Otakara* ActorDirector_IchouNBeedama::getPSOtakara(Game::Creature* obj)
{
	if (!obj) {
		return nullptr;
	}

	Otakara* ota = static_cast<Otakara*>(obj->getPSCreature());
	P2ASSERTLINE(__LINE__, ota);

	P2ASSERTLINE(__LINE__, ota->isTreasure());

	return ota;
}

/**
 * @note Address: N/A
 * @note Size: 0x37C
 * @note Again, coding out of my ass - this seems pretty reasonable though.
 */
f32 ActorDirector_IchouNBeedama::getNearestDistance()
{
	f32 minDist = 1000000.0f;
	for (JSULink<Game::Creature>* link = mActor->getFirst(); link; link = link->getNext()) {
		Otakara* ota = getPSOtakara(link->getObject());
		otakaraCheckEvent(ota);
		if (ota->is2PBattle()) {
			Game::Creature* onyon = ota->mOnyon;
			if (onyon) {
				Vector3f objPos  = link->getObject()->getPosition();
				Vector3f goalPos = onyon->getPosition();
				f32 dist         = PSMath::calcDistance(PSMath::toVec(objPos), PSMath::toVec(goalPos));
				if (dist < minDist) {
					minDist = dist;
				}
			}
		}
	}
	return minDist;
}

/**
 * @note Address: 0x804583B8
 * @note Size: 0x7C
 */
PikAttackDirector::PikAttackDirector(int numTracks)
    : TrackOnDirectorBase(numTracks, "pikatkD  ", 100, 100)
{
}

// this is here for now, since putting it in a header causes the sym on ordering to go weird and wrong
inline ExiteDirector::~ExiteDirector()
{
}

/**
 * @note Address: 0x80458434
 * @note Size: 0x7C
 */
ExiteDirector::ExiteDirector(int numTracks)
    : TrackOnDirectorBase(numTracks, "tentionD ", 100, 100)
{
}

/**
 * @note Address: 0x804584B0
 * @note Size: 0x68
 */
DirectorUpdator::DirectorUpdator(PSSystem::DirectorBase* director, u8 number, PSM::DirectorUpdator::Type type)
    : mUpdateNum(number)
    , mType(type)
    , _08(0)
    , _09(0)
    , mDirector(director)
{
	P2ASSERTLINE(698, number != 0);
}

/**
 * @note Address: 0x80458518
 * @note Size: 0x34
 */
void DirectorUpdator::directOn(u8 id)
{
	if (_09 & (1 << id)) {
		return;
	}
	_08 |= 1 << id;
	_09 |= 1 << id;
}

/**
 * @note Address: 0x8045854C
 * @note Size: 0x34
 */
void DirectorUpdator::directOff(u8 id)
{
	if (_09 & (1 << id)) {
		return;
	}
	_08 &= ~(1 << id);
	_09 |= 1 << id;
}

/**
 * @note Address: 0x80458580
 * @note Size: 0x12C
 */
void DirectorUpdator::frameEndWork()
{
	if (mDirector) {
		bool end = false;
		switch (mType) {
		case PSM::DirectorUpdator::TYPE_0:
			for (u8 i = 0; i < mUpdateNum; i++) {
				if (_08 & 1 << i) {
					end = true;
					break;
				}
			}
			break;
		case PSM::DirectorUpdator::TYPE_1:
			end = true;
			for (u8 i = 0; i < mUpdateNum; i++) {
				if (!(_08 & 1 << i)) {
					end = false;
					break;
				}
			}
			break;
		}

		if (end) {
			if (!mDirector->isUnderDirection()) {
				mDirector->directOn();
			}
		} else {
			if (mDirector->isUnderDirection()) {
				mDirector->directOff();
			}
		}
		_08 = 0;
		_09 = 0;
	}
}

} // namespace PSM

/**
 * @note Address: 0x804586AC
 * @note Size: 0x148
 */
PSSystem::DirectorBase* PSMGetBattleDirector(u8 directorID)
{
	PSM::MiddleBossSeq* seq = PSMGetMiddleBossSeq(PSMGetSceneMgrCheck());
	if (!seq) {
		return nullptr;
	}
	bool isDirected = seq->getCastType() == PSSystem::SeqBase::TYPE_DirectedBgm || seq->getCastType() == PSSystem::SeqBase::TYPE_JumpBgmSeq;
	P2ASSERTLINE(810, isDirected);
	return seq->getDirectorP(directorID);
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
bool PSIs2PBattleStage()
{
	return PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE;
}

/**
 * @note Address: 0x804587F4
 * @note Size: 0x108
 */
PSM::ActorDirector_Kehai* PSMGetKehaiD()
{
	// kehai = air/presence/hint = enemy near

	// 2P BATTLE
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Kehai*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_EnemyNear));
		}
		return nullptr;
	}

	// everything else
	PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
	if (bgm) {
		return static_cast<PSM::ActorDirector_Kehai*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_EnemyNear));
	}
	return nullptr;
}

/**
 * @note Address: 0x804588FC
 * @note Size: 0x108
 */
PSM::ActorDirector_Battle* PSMGetBattleD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Battle*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_Battle));
		}
		return nullptr;
	} else {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Battle*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Battle));
		}
		return nullptr;
	}
}

/**
 * @note Address: 0x80458A04
 * @note Size: 0x108
 */
PSM::ActorDirector_Scaled* PSMGetEventD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Battle*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_Working));
		}
		return nullptr;
	} else {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Battle*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Working));
		}
		return nullptr;
	}
}

/**
 * @note Address: 0x80458B0C
 * @note Size: 0xF0
 */
PSM::ActorDirector_TrackOn* PSMGetOtakaraEventD()
{
	if (PSGameGetSceneInfo()->mSceneType != PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TrackOn*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Treasure));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80458BFC
 * @note Size: 0x194
 */
PSM::ActorDirector_Scaled* PSMGetGroundD()
{
	if (PSGameGetSceneInfo()->mSceneType != PSGame::SceneInfo::TWO_PLAYER_BATTLE && !PSGameGetSceneInfo()->isCaveFloor()) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Scaled*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Ground));
		}
		return nullptr;
	}

	return nullptr;
}

/**
 * @note Address: 0x80458D90
 * @note Size: 0xF0
 */
PSM::PikminNumberDirector* PSMGetPikminNumD()
{
	if (PSGameGetSceneInfo()->mSceneType != PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::PikminNumberDirector*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Pikmin));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80458E80
 * @note Size: 0xF0
 */
PSM::DamageDirector* PSMGetDamageD()
{
	if (PSGameGetSceneInfo()->mSceneType != PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::DamageDirector*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Damage));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80458F70
 * @note Size: 0xF0
 */
PSM::ActorDirector_TempoChange* PSMGetLifeD()
{
	if (PSGameGetSceneInfo()->mSceneType != PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TempoChange*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Tempo));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80459060
 * @note Size: 0xF0
 */
PSM::ActorDirector_TrackOn* PSMGetBeedamaForOrimerD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TrackOn*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_OlimarMarble));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80459150
 * @note Size: 0xF0
 */
PSM::ActorDirector_TrackOn* PSMGetBeedamaForLugieD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TrackOn*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_LouieMarble));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80459240
 * @note Size: 0xF0
 */
PSM::ActorDirector_TrackOn* PSMGetIchouForOrimerD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TrackOn*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_OlimarIchou));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80459330
 * @note Size: 0xF0
 */
PSM::ActorDirector_TrackOn* PSMGetIchouForLugieD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TrackOn*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_LouieIchou));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80459420
 * @note Size: 0xF0
 */
PSM::TrackOnDirector_Voting* PSMGetPikiBattleD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::TrackOnDirector_Voting*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_PikBattle));
		}
		return nullptr;
	}
	return nullptr;
}
