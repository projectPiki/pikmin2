#include "og/newScreen/Challenge.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8032CD30
 * Size:	000044
 */
ChallengeBase::ChallengeBase() { isCountingDown = false; }

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
ChallengeBase::~ChallengeBase() { }

/*
 * --INFO--
 * Address:	8032CD74
 * Size:	0000A4
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
