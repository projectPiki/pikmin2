#include "PSM/BossBgmFader.h"
#include "PSM/Scene.h"
#include "PSGame/Global.h"
#include "PSM/BossSeq.h"
#include "JSystem/JAudio/JALCalc.h"
#include "utilityU.h"

namespace PSM {
namespace BossBgmFader {

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
TypedProc::TypedProc(f32 maxDist, f32 fadeRange)
{
	mMaxDist       = maxDist;
	mFadeDist      = (maxDist - fadeRange);
	mFadeRange     = fadeRange;
	mDirectDist    = mFadeDist / 2.0f;
	mCurrProcState = PROC_None;
	mPrevProcState = PROC_None;
	mNearestBoss   = nullptr;
	mBossDistance  = 1000000000.0f;
	P2ASSERTLINE(47, mFadeRange > 0.0f);
}

/**
 * @note Address: 0x8046C6B8
 * @note Size: 0x1D8
 */
void TypedProc::update()
{
	f32 nearestBossDist = 1000000000.0f;
	f32 currBossDist    = mBossDistance;
	mNearestBoss        = nullptr;

	// find closest visible ('appear'ed) boss
	for (JSULinkIterator<EnemyBoss> iter(getFirst()); iter != nullptr; iter++) {
		if (iter.getObject()->mAppearFlag) {
			f32 dist = iter.getObject()->mNaviDistance;
			if (dist < nearestBossDist) {
				nearestBossDist = dist;
				mNearestBoss    = iter.getObject();
			}
		}
	}

	// closest boss is way too far away, don't update distance
	if (nearestBossDist > 9000000.0f) {
		nearestBossDist = currBossDist;
	}

	f32 disappearingDist       = 100000000.0f;
	EnemyBoss* disappearingObj = nullptr;
	// find closest disappearing boss
	FOREACH_NODE(JSULink<EnemyBoss>, getFirst(), link)
	{
		link->getObject()->updateDisappearing();
		if (link->getObject()->isOnDisappearing()) {
			f32 dist = link->getObject()->mNaviDistance;
			if (dist <= disappearingDist) {
				disappearingDist = dist;
				disappearingObj  = link->getObject();
			}
		}
	}

	// if we have a visible boss, set what "range" we're in
	if (mNearestBoss) {
		if (nearestBossDist < mDirectDist) {
			// VERY CLOSE - set both
			mCurrProcState = PROC_None;
			mCurrProcState |= PROC_Directed;

		} else if (nearestBossDist < mFadeDist) {
			// not as close - set 2
			mCurrProcState = PROC_None;
			mCurrProcState |= PROC_MainLoop;

		} else if (nearestBossDist < mMaxDist) {
			// pretty far - set 1
			mCurrProcState = PROC_None;
			mCurrProcState |= PROC_Fade;

		} else {
			// way too far, no procs
			mCurrProcState = PROC_None;
		}
	} else {
		// no boss, no procs
		mCurrProcState = PROC_None;
	}

	// if there's a disappearing boss within earshot and we aren't doing anything else, fade all audio to mute
	if (disappearingObj && disappearingDist < mMaxDist && mCurrProcState == PROC_None) {
		mCurrProcState = PROC_None;
		mCurrProcState |= PROC_Disappear;
		mNearestBoss    = disappearingObj;
		nearestBossDist = disappearingDist;
	}

	mBossDistance = nearestBossDist;
}

/**
 * @note Address: N/A
 * @note Size: 0x100
 */
f32 TypedProc::getBossFadeVolume()
{
	// calling this at all assumes mMaxDist > mBossDistance >= mFadeDist
	// (and mFadeRange = mMaxDist - mFadeDist)

	f32 fadeProp = mBossDistance - mFadeDist;
	P2ASSERTBOUNDSINCLUSIVELINE2(167, 0.0f, fadeProp, mFadeRange);

	// map fade distance to volume value between 1 (fadeProp = 0) and 0 (fadeProp = mFadeRange)
	f32 bossVolume = JALCalc::linearTransform(fadeProp, 0.0f, mFadeRange, 1.0f, 0.0f, false);
	P2ASSERTBOUNDSINCLUSIVELINE2(172, 0.0f, bossVolume, 1.0f);

	return bossVolume;
}

/**
 * @note Address: 0x8046C890
 * @note Size: 0x3C
 */
void TypedProc_MidBoss::update()
{
	TypedProc::update();
	if (mDirectorUpdator) {
		mDirectorUpdator->frameEndWork();
	}
}

/**
 * @note Address: 0x8046C8CC
 * @note Size: 0xEC
 */
Mgr::Mgr()
    : mTypedProc(1000.0f, 400.0f) // boss music "radius" is 1000 units, with a fade range of 400 units
{
	mTypedProc.mNeedJump = false;
}

/**
 * @note Address: 0x8046C9B8
 * @note Size: 0x24
 */
void Mgr::appendTarget(JSULink<EnemyBoss>* obj) { mTypedProc.append(obj); }

/**
 * @note Address: 0x8046C9DC
 * @note Size: 0x768
 */
void Mgr::exec()
{
	mTypedProc.update();

	JAISound* mainSound = PSGetDirectedMainBgmA()->getHandle();

	PSM::MiddleBossSeq* bossSeq = PSMGetMiddleBossSeq();
	JAISound* bossSound         = (bossSeq) ? bossSeq->getHandle() : nullptr;

	JAISound* chalSound = nullptr;
	Scene_Game* scene   = PSMGetGameScene();
	if (scene && scene->getSceneInfoA()->getSceneType() == PSGame::SceneInfo::CHALLENGE_MODE) {
		chalSound = PSSystemChildSceneData(2);
	}

	if (mTypedProc.mCurrProcState == TypedProc::PROC_Directed) {
		if (mTypedProc.mPrevProcState != TypedProc::PROC_Directed) {
			// we're now super close to the boss - start directing battle music
			PSSystem::DirectorBase* director = PSMGetBattleDirector(1);
			if (director) {
				director->directOn();
			}
		}
	} else if (mTypedProc.mPrevProcState == TypedProc::PROC_Directed) {
		// we're no longer super close to the boss, stop directing battle music
		PSSystem::DirectorBase* director = PSMGetBattleDirector(1);
		if (director) {
			director->directOff();
		}
	}

	if (!mTypedProc.mNeedJump) {
		if (mTypedProc.mCurrProcState == TypedProc::PROC_None && mTypedProc.mPrevProcState != TypedProc::PROC_None) {
			// we're out of range of a boss, stop the loop
			MiddleBossSeq* seq = PSMGetMiddleBossSeq();
			if (seq->mJumpPort._70) {
				seq->requestJumpBgmOnBeat(PSM::EnemyMidBoss::BossBgm_InactiveLoop);
			}
		} else if ((mTypedProc.mCurrProcState == TypedProc::PROC_Directed || mTypedProc.mCurrProcState == TypedProc::PROC_MainLoop)
		           && (mTypedProc.mPrevProcState == TypedProc::PROC_Fade || mTypedProc.mPrevProcState == TypedProc::PROC_None)) {

			// we weren't in loop range before (fadeout or out of range completely), but now we are. start the loop.
			MiddleBossSeq* seq = PSMGetMiddleBossSeq();
			if (!seq->mJumpPort._70) {
				seq->requestJumpBgmOnBeat(PSM::EnemyMidBoss::BossBgm_MainLoop);
			}
		}
	}

	switch (mTypedProc.mCurrProcState) {
	case TypedProc::PROC_MainLoop:
	case TypedProc::PROC_Directed: // only boss sound
		if (mainSound) {
			mainSound->setVolume(0.0f, 40, SOUNDPARAM_Unk0);
		}
		if (chalSound) {
			chalSound->setVolume(0.0f, 40, SOUNDPARAM_Unk0);
		}
		if (bossSound) {
			bossSound->setVolume(1.0f, 40, SOUNDPARAM_Unk0);
		}

		break;

	case TypedProc::PROC_Fade:
		// fade out boss sound + fade back in other sound
		f32 bossVolume  = mTypedProc.getBossFadeVolume();
		f32 otherVolume = 1.0f - bossVolume;
		if (mainSound) {
			mainSound->setVolume(otherVolume, 40, SOUNDPARAM_Unk0);
		}
		if (chalSound) {
			chalSound->setVolume(otherVolume, 40, SOUNDPARAM_Unk0);
		}
		if (bossSound) {
			bossSound->setVolume(bossVolume, 40, SOUNDPARAM_Unk0);
		}

		break;

	case TypedProc::PROC_None: // no boss sound
		if (mainSound) {
			mainSound->setVolume(1.0f, 40, SOUNDPARAM_Unk0);
		}
		if (chalSound) {
			chalSound->setVolume(1.0f, 40, SOUNDPARAM_Unk0);
		}
		if (bossSound) {
			bossSound->setVolume(0.0f, 40, SOUNDPARAM_Unk0);
		}
		break;

	case TypedProc::PROC_Disappear: // atmospheric beat of silence when boss disappears
		if (mainSound) {
			mainSound->setVolume(0.0f, 40, SOUNDPARAM_Unk0);
		}
		if (chalSound) {
			chalSound->setVolume(0.0f, 40, SOUNDPARAM_Unk0);
		}
		if (bossSound) {
			bossSound->setVolume(0.0f, 40, SOUNDPARAM_Unk0);
		}
		break;
	}

	mTypedProc.mPrevProcState = mTypedProc.mCurrProcState;
	mTypedProc.mNeedJump      = false;
}

} // namespace BossBgmFader
} // namespace PSM
