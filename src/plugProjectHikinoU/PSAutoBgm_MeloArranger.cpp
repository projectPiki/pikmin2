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
	u8 out      = (randDec < _1C);
	return out;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
inline void MeloArrArg::assertCheck() const
{
	P2ASSERTLINE(89, _00 < 0x10);
	P2ASSERTLINE(90, _01 != 0xFF);
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
	bool check = false;
	if ((_10 >> meloArg._00) & 1) {
		currLink = static_cast<MeloArrBase*>(mList.mHead);
		for (currLink; currLink; currLink = static_cast<MeloArrBase*>(currLink->mNext)) {
			MeloArrBase* randAvoid = static_cast<MeloArrBase*>(currLink->mValue);
			randAvoid->pre(meloArg);
			if (check == false) {
				randAvoid = static_cast<MeloArrBase*>(currLink->mValue);
				bool interCheck;
				if (randAvoid->_19 == true) {
					interCheck = randAvoid->avoidChk(meloArg);
				} else {
					interCheck = false;
				}
				check = interCheck;
			}

			randAvoid = static_cast<MeloArrBase*>(currLink->mValue);
			randAvoid->post(meloArg);
		}
	}
	return check;
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
