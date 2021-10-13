#include "SysShape/Animator.h"
#include "types.h"

struct PikiAnimator {
	SysShape::Animator _00;
	u32 _04;
	u32 _08;
	u32 _0C;
	u32 _10;
	u32 _14;
	u8 _18;
	SysShape::Animator _1C;
	u32 _20;
	u32 _24;
	u32 _28;
	u32 _2C;
	u32 _30;
	u8 _34;

	PikiAnimator();
};

/*
 * --INFO--
 * Address:	8013364C
 * Size:	000050
 */
PikiAnimator::PikiAnimator()
    : _18(0)
    , _04(0)
{
	_18 = 0;
	_04 = 0;
	_0C = 0;
	_34 = 0;
	_28 = 0;
	_20 = 0;
	_34 = 0;
	_2C = 0;
}

/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r4, 0x804F
  subi      r5, r5, 0x4678
  li        r0, 0
  stw       r5, 0x0(r3)
  subi      r4, r4, 0x4200
  stw       r4, 0x0(r3)
  stb       r0, 0x18(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x4(r3)
  stb       r0, 0x18(r3)
  stw       r0, 0x10(r3)
  stw       r5, 0x1C(r3)
  stw       r4, 0x1C(r3)
  stb       r0, 0x34(r3)
  stw       r0, 0x28(r3)
  stw       r0, 0x20(r3)
  stb       r0, 0x34(r3)
  stw       r0, 0x2C(r3)
  blr
*/

/*
 * --INFO--
 * Address:	8013369C
 * Size:	00000C
 */
// void PikiAnimator::setAnimMgr(SysShape::AnimMgr*)
// {
//     /*
//     .loc_0x0:
//       stw       r4, 0x10(r3)
//       stw       r4, 0x2C(r3)
//       blr
//     */
// }
