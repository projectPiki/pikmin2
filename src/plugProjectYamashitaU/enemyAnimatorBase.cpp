#include "Game/EnemyAnimatorBase.h"

namespace Game {
const f32 EnemyAnimatorBase::defaultAnimSpeed = 30.0f;

/*
 * --INFO--
 * Address:	80127974
 * Size:	000044
 */
EnemyAnimatorBase::EnemyAnimatorBase()
    : mSpeed(30.0f)
    , mNormalizedTime(1.0f)
{
	reset();
}

/*
 * --INFO--
 * Address:	801279B8
 * Size:	000124
 */
void EnemyAnimatorBase::animate(f32 speed)
{
	if (!(mFlags.isSet(EANIM_FLAG_STOPPED))) {
		if (mFlags.isSet(EANIM_FLAG_FINISHED)) {
			mNormalizedTime *= 0.9f;
			if (mNormalizedTime < 0.1f) {
				mNormalizedTime = 0.0f;

				mFlags.unset(EANIM_FLAG_PLAYING);
				mFlags.set(EANIM_FLAG_STOPPED);
			}
		} else if (mFlags.isSet(EANIM_FLAG_PLAYING)) {
			mNormalizedTime *= 1.1f;
			if (mNormalizedTime > 1.0f) {
				mNormalizedTime = 1.0f;

				mFlags.unset(EANIM_FLAG_FINISHED | EANIM_FLAG_STOPPED);
				mNormalizedTime = 1.0f;
			}
		}

		getAnimator().animate(speed * mNormalizedTime);
	} else {
		getAnimator().animate(0.0f);
	}
}

/*
 * --INFO--
 * Address:	80127ADC
 * Size:	000124
 */
void EnemyAnimatorBase::animate(int animatorNum, f32 speed)
{
	if (!(mFlags.isSet(EANIM_FLAG_STOPPED))) {
		if (mFlags.isSet(EANIM_FLAG_FINISHED)) {
			mNormalizedTime *= 0.9f;
			if (mNormalizedTime < 0.1f) {
				mNormalizedTime = 0.0f;

				mFlags.unset(EANIM_FLAG_PLAYING);
				mFlags.set(EANIM_FLAG_STOPPED);
			}
		} else if (mFlags.isSet(EANIM_FLAG_PLAYING)) {
			mNormalizedTime *= 1.1f;
			if (mNormalizedTime > 1.0f) {
				mNormalizedTime = 1.0f;

				mFlags.unset(EANIM_FLAG_FINISHED | EANIM_FLAG_STOPPED);
				mNormalizedTime = 1.0f;
			}
		}

		getAnimator(animatorNum).animate(speed * mNormalizedTime);
	} else {
		getAnimator().animate(0.0f);
	}
}
} // namespace Game
