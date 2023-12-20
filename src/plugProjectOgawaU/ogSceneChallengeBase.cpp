#include "og/newScreen/Challenge.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x8032CD30
 * @note Size: 0x44
 */
ChallengeBase::ChallengeBase() { isCountingDown = false; }

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
ChallengeBase::~ChallengeBase() { }

/**
 * @note Address: 0x8032CD74
 * @note Size: 0xA4
 */
void ChallengeBase::updateCountDown(f32 value, Screen::DispMemberDayEndCount* count)
{
	f32 temp    = ObjChallengeBase::msBaseVal.mTimerLimitLow + 1;
	f32 temp_f1 = (ObjChallengeBase::msBaseVal.mTimerLimitLow + 1 - value) / temp;
	if (temp_f1 >= 0.0f) {
		count->mCurrSunRatio = temp_f1;
		count->mDuration     = 0.0f;
		if (!isCountingDown) {
			isCountingDown = true;
			startCountDown();
		}
	} else {
		isCountingDown = false;
	}
};
} // namespace newScreen
} // namespace og
