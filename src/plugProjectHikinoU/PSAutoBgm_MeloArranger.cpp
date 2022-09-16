#include "types.h"
#include "PSAutoBgm/MeloArr.h"
#include "JSystem/JAL/JALCalc.h"
#include "JSystem/JUT/JUTException.h"

namespace PSAutoBgm {

/*
 * --INFO--
 * Address:	8033EE9C
 * Size:	00003C
 */
bool MeloArr_RandomAvoid::avoidChk(MeloArrArg& meloArg)
{
	float randDec = JALCalc::getRandom_0_1();
	u8 out        = (randDec < _1C);
	return out;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
inline void MeloArrArg::assertCheck() const
{
	P2ASSERTLINE(89, _00 < 0x10);
	P2ASSERTLINE(90, _01 != 0xFF);
}

/*
 * --INFO--
 * Address:	8033EED8
 * Size:	000138
 */
bool MeloArrMgr::isToAvoid(MeloArrArg& meloArg)
{
	MeloArrBase* currLink;
	meloArg.assertCheck();
	if (!_12) {
		return false;
	}
	bool check = false;
	if ((_10 >> meloArg._00) & 1) {
		currLink = static_cast<MeloArrBase*>(m_list.m_head);
		for (currLink; currLink; currLink = static_cast<MeloArrBase*>(currLink->m_next)) {
			MeloArrBase* randAvoid = static_cast<MeloArrBase*>(currLink->m_value);
			randAvoid->pre(meloArg);
			if (check == false) {
				randAvoid = static_cast<MeloArrBase*>(currLink->m_value);
				bool interCheck;
				if (randAvoid->_19 == true) {
					interCheck = randAvoid->avoidChk(meloArg);
				} else {
					interCheck = false;
				}
				check = interCheck;
			}

			randAvoid = static_cast<MeloArrBase*>(currLink->m_value);
			randAvoid->post(meloArg);
		}
	}
	return check;
}

/*
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
