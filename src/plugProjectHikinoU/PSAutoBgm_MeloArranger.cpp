#include "JSystem/JAudio/JALCalc.h"
#include "P2Macros.h"
#include "PSAutoBgm/MeloArr.h"

namespace PSAutoBgm {

/**
 * @note Address: 0x8033EE9C
 * @note Size: 0x3C
 */
bool MeloArr_RandomAvoid::avoidChk(MeloArrArg& meloArg)
{
	f32 randDec = JALCalc::getRandom_0_1();
	u8 out      = (randDec < mChance);
	return out;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
inline void MeloArrArg::assertCheck() const
{
	P2ASSERTLINE(89, mTrackIndex < 16);
	P2ASSERTLINE(90, mCycleNum != 0xFF);
}

/**
 * @note Address: 0x8033EED8
 * @note Size: 0x138
 */
bool MeloArrMgr::isToAvoid(MeloArrArg& meloArg)
{
	MeloArrBase* currLink;

	meloArg.assertCheck();

	if (!mIsActive) {
		return false;
	}

	bool isMelodyToAvoid = false;
	if ((mTrackMaskIds >> meloArg.mTrackIndex) & 1) {
		currLink = static_cast<MeloArrBase*>(mList.mHead);

		for (currLink; currLink; currLink = static_cast<MeloArrBase*>(currLink->mNext)) {
			MeloArrBase* avoidanceLink = static_cast<MeloArrBase*>(currLink->mValue);
			avoidanceLink->pre(meloArg);

			if (!isMelodyToAvoid) {
				avoidanceLink = static_cast<MeloArrBase*>(currLink->mValue);

				bool interCheck;
				if (avoidanceLink->mIsEnabled == true) {
					interCheck = avoidanceLink->avoidChk(meloArg);
				} else {
					interCheck = false;
				}

				isMelodyToAvoid = interCheck;
			}

			avoidanceLink = static_cast<MeloArrBase*>(currLink->mValue);
			avoidanceLink->post(meloArg);
		}
	}

	return isMelodyToAvoid;
}

/**
 * Fake function, required to fix weak function ordering, probably due to an inlined
 * method for a struct that doesn't get used elsewhere :c
 */
static void fakeFunc(MeloArr_RandomAvoid* randAvoid, MeloArrBase* base)
{
	randAvoid->~MeloArr_RandomAvoid();
	base->~MeloArrBase();
	base->directOff(nullptr);
	base->directOn(nullptr);
}

} // namespace PSAutoBgm
