#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
IllustratedBook::DebugParms::DebugParms(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
IllustratedBook::EnemyTexMgr::EnemyTexMgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void IllustratedBook::EnemyTexMgr::create(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80221028
 * Size:	000284
 */
IllustratedBook::Camera::Camera(Controller*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        0x1FA450
	  lis       r3, 0x804C
	  lis       r5, 0x8051
	  addi      r0, r3, 0xC3C
	  lfs       f3, -0x4238(r2)
	  stw       r0, 0x0(r29)
	  addi      r31, r5, 0x41E4
	  lis       r3, 0x8012
	  li        r0, 0
	  stw       r30, 0x198(r29)
	  subi      r4, r3, 0xCB8
	  lfs       f2, -0x4234(r2)
	  addi      r3, r29, 0x1FC
	  stw       r0, 0x19C(r29)
	  li        r5, 0
	  lfs       f1, -0x4230(r2)
	  li        r6, 0xC
	  lfs       f0, 0x0(r31)
	  li        r7, 0xA
	  stfs      f0, 0x1A0(r29)
	  lfs       f0, -0x422C(r2)
	  lfs       f4, 0x4(r31)
	  stfs      f4, 0x1A4(r29)
	  lfs       f4, 0x8(r31)
	  stfs      f4, 0x1A8(r29)
	  lfs       f4, 0x0(r31)
	  stfs      f4, 0x1AC(r29)
	  lfs       f4, 0x4(r31)
	  stfs      f4, 0x1B0(r29)
	  lfs       f4, 0x8(r31)
	  stfs      f4, 0x1B4(r29)
	  lfs       f4, 0x0(r31)
	  stfs      f4, 0x1B8(r29)
	  lfs       f4, 0x4(r31)
	  stfs      f4, 0x1BC(r29)
	  lfs       f4, 0x8(r31)
	  stfs      f4, 0x1C0(r29)
	  stfs      f3, 0x1C4(r29)
	  stfs      f2, 0x1C8(r29)
	  stfs      f1, 0x1CC(r29)
	  stfs      f3, 0x1D0(r29)
	  stfs      f0, 0x1D4(r29)
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x1D8(r29)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x1DC(r29)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x1E0(r29)
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x1E4(r29)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x1E8(r29)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x1EC(r29)
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x1F0(r29)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x1F4(r29)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x1F8(r29)
	  bl        -0x15F8FC
	  li        r0, 0
	  lis       r3, 0x8051
	  stw       r0, 0x274(r29)
	  addi      r4, r3, 0x41E4
	  lfs       f5, -0x4238(r2)
	  lis       r3, 0x8048
	  addi      r0, r3, 0x2F0C
	  lfs       f4, -0x4228(r2)
	  stfs      f5, 0x278(r29)
	  mr        r3, r29
	  lfs       f3, -0x4224(r2)
	  stfs      f5, 0x27C(r29)
	  lfs       f2, -0x4220(r2)
	  stfs      f5, 0x280(r29)
	  lfs       f1, -0x421C(r2)
	  stfs      f5, 0x284(r29)
	  lfs       f0, -0x4244(r2)
	  stfs      f4, 0x288(r29)
	  stfs      f3, 0x28C(r29)
	  stfs      f2, 0x290(r29)
	  stfs      f5, 0x294(r29)
	  stfs      f5, 0x298(r29)
	  stfs      f1, 0x29C(r29)
	  lfs       f1, 0x0(r4)
	  stfs      f1, 0x2A0(r29)
	  lfs       f1, 0x4(r31)
	  stfs      f1, 0x2A4(r29)
	  lfs       f1, 0x8(r31)
	  stfs      f1, 0x2A8(r29)
	  lfs       f1, 0x0(r4)
	  stfs      f1, 0x2AC(r29)
	  lfs       f1, 0x4(r31)
	  stfs      f1, 0x2B0(r29)
	  lfs       f1, 0x8(r31)
	  stfs      f1, 0x2B4(r29)
	  lfs       f1, 0x0(r4)
	  stfs      f1, 0x2B8(r29)
	  lfs       f1, 0x4(r31)
	  stfs      f1, 0x2BC(r29)
	  lfs       f1, 0x8(r31)
	  stfs      f1, 0x2C0(r29)
	  lfs       f1, 0x0(r4)
	  stfs      f1, 0x2C4(r29)
	  lfs       f1, 0x4(r31)
	  stfs      f1, 0x2C8(r29)
	  lfs       f1, 0x8(r31)
	  stfs      f1, 0x2CC(r29)
	  stfs      f0, 0x2D0(r29)
	  stfs      f5, 0x2D4(r29)
	  stfs      f5, 0x2D8(r29)
	  stw       r0, 0x14(r29)
	  bl        0x27C
	  lfs       f3, -0x4218(r2)
	  mr        r3, r29
	  lfs       f0, -0x4250(r2)
	  stfs      f3, 0x2DC(r29)
	  lfs       f2, -0x4214(r2)
	  stfs      f3, 0x2E0(r29)
	  lfs       f1, -0x4210(r2)
	  stfs      f0, 0x2E4(r29)
	  lfs       f0, -0x420C(r2)
	  stfs      f2, 0x2E8(r29)
	  lfs       f2, -0x4208(r2)
	  stfs      f1, 0x2EC(r29)
	  lfs       f1, -0x4224(r2)
	  stfs      f0, 0x2F0(r29)
	  lfs       f0, -0x4204(r2)
	  stfs      f2, 0x2F4(r29)
	  lfs       f2, -0x4200(r2)
	  stfs      f1, 0x2F8(r29)
	  lfs       f1, -0x421C(r2)
	  stfs      f0, 0x2FC(r29)
	  lfs       f0, -0x41FC(r2)
	  stfs      f2, 0x300(r29)
	  lfs       f2, -0x41F8(r2)
	  stfs      f1, 0x304(r29)
	  lfs       f1, -0x41F4(r2)
	  stfs      f0, 0x308(r29)
	  lfs       f0, -0x41F0(r2)
	  stfs      f2, 0x30C(r29)
	  stfs      f2, 0x310(r29)
	  stfs      f1, 0x314(r29)
	  stfs      f3, 0x318(r29)
	  stfs      f0, 0x31C(r29)
	  stfs      f3, 0x320(r29)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802212AC
 * Size:	0001D8
 */
void IllustratedBook::Camera::startVibration(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  xoris     r4, r4, 0x8000
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  mr        r31, r3
	  lfd       f2, -0x41D8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x41EC(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f29, f1, f0
	  bl        -0x157D5C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0x10(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0x10(r1)
	  lfs       f0, -0x4218(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fsubs     f30, f1, f0
	  bl        -0x157D8C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0x18(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0x18(r1)
	  lfs       f0, -0x4218(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xBC
	  lfs       f31, -0x41E4(r2)
	  b         .loc_0xC0

	.loc_0xBC:
	  lfs       f31, -0x4244(r2)

	.loc_0xC0:
	  bl        -0x157DCC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0x20(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0x20(r1)
	  lfs       f0, -0x4244(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fadds     f0, f0, f1
	  fmuls     f31, f0, f31
	  bl        -0x157E00
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  fmuls     f4, f31, f31
	  lfd       f3, -0x41D8(r2)
	  fmuls     f5, f30, f30
	  stw       r0, 0x28(r1)
	  lfs       f2, -0x41E8(r2)
	  lfd       f0, 0x28(r1)
	  lfs       f1, -0x4218(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x4238(r2)
	  fdivs     f2, f3, f2
	  fsubs     f2, f2, f1
	  fmadds    f1, f2, f2, f4
	  fadds     f1, f5, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x150
	  ble-      .loc_0x154
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x154

	.loc_0x150:
	  fmr       f1, f0

	.loc_0x154:
	  lfs       f0, -0x4238(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x174
	  lfs       f0, -0x4244(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0

	.loc_0x174:
	  lfs       f1, -0x41E0(r2)
	  lfs       f0, 0x2D0(r31)
	  fmuls     f1, f1, f29
	  fmuls     f2, f2, f1
	  fmuls     f31, f31, f1
	  fmuls     f30, f30, f1
	  fadds     f0, f0, f2
	  stfs      f0, 0x2D0(r31)
	  lfs       f0, 0x2D4(r31)
	  fadds     f0, f0, f31
	  stfs      f0, 0x2D4(r31)
	  lfs       f0, 0x2D8(r31)
	  fadds     f0, f0, f30
	  stfs      f0, 0x2D8(r31)
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
void IllustratedBook::Camera::debugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	80221484
 * Size:	000088
 */
void move__Q34Game15IllustratedBook6CameraFRC10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, 0x0(r4)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lfs       f1, 0x4(r4)
	  stw       r0, 0x19C(r3)
	  stfs      f0, 0x1D8(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f1, 0x1DC(r3)
	  stfs      f0, 0x1E0(r3)
	  lfs       f0, 0x1D8(r3)
	  stfs      f0, 0x1B8(r3)
	  lfs       f0, 0x1DC(r3)
	  stfs      f0, 0x1BC(r3)
	  lfs       f0, 0x1E0(r3)
	  stfs      f0, 0x1C0(r3)
	  lfs       f0, 0x1B8(r3)
	  stfs      f0, 0x1AC(r3)
	  lfs       f0, 0x1BC(r3)
	  stfs      f0, 0x1B0(r3)
	  lfs       f0, 0x1C0(r3)
	  stfs      f0, 0x1B4(r3)
	  lfs       f0, 0x1AC(r3)
	  stfs      f0, 0x180(r3)
	  lfs       f0, 0x1B0(r3)
	  stfs      f0, 0x184(r3)
	  lfs       f0, 0x1B4(r3)
	  stfs      f0, 0x188(r3)
	  bl        0x13C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8022150C
 * Size:	000128
 */
void IllustratedBook::Camera::setTarget(Game::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  beq-      .loc_0xA4
	  stw       r4, 0x19C(r31)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x19C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  mr        r3, r31
	  stfs      f0, 0x1D8(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x1DC(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x1E0(r31)
	  lfs       f0, 0x1D8(r31)
	  stfs      f0, 0x1B8(r31)
	  lfs       f0, 0x1DC(r31)
	  stfs      f0, 0x1BC(r31)
	  lfs       f0, 0x1E0(r31)
	  stfs      f0, 0x1C0(r31)
	  lfs       f0, 0x1B8(r31)
	  stfs      f0, 0x1AC(r31)
	  lfs       f0, 0x1BC(r31)
	  stfs      f0, 0x1B0(r31)
	  lfs       f0, 0x1C0(r31)
	  stfs      f0, 0x1B4(r31)
	  lfs       f0, 0x1AC(r31)
	  stfs      f0, 0x180(r31)
	  lfs       f0, 0x1B0(r31)
	  stfs      f0, 0x184(r31)
	  lfs       f0, 0x1B4(r31)
	  stfs      f0, 0x188(r31)
	  bl        .loc_0x128
	  b         .loc_0x114

	.loc_0xA4:
	  li        r0, 0
	  lis       r4, 0x8051
	  stw       r0, 0x19C(r31)
	  lfsu      f0, 0x41E4(r4)
	  stfs      f0, 0x1D8(r31)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x1DC(r31)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x1E0(r31)
	  lfs       f0, 0x1D8(r31)
	  stfs      f0, 0x1B8(r31)
	  lfs       f0, 0x1DC(r31)
	  stfs      f0, 0x1BC(r31)
	  lfs       f0, 0x1E0(r31)
	  stfs      f0, 0x1C0(r31)
	  lfs       f0, 0x1B8(r31)
	  stfs      f0, 0x1AC(r31)
	  lfs       f0, 0x1BC(r31)
	  stfs      f0, 0x1B0(r31)
	  lfs       f0, 0x1C0(r31)
	  stfs      f0, 0x1B4(r31)
	  lfs       f0, 0x1AC(r31)
	  stfs      f0, 0x180(r31)
	  lfs       f0, 0x1B0(r31)
	  stfs      f0, 0x184(r31)
	  lfs       f0, 0x1B4(r31)
	  stfs      f0, 0x188(r31)
	  bl        .loc_0x128

	.loc_0x114:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x128:
	*/
}

/*
 * --INFO--
 * Address:	80221634
 * Size:	000274
 */
void IllustratedBook::Camera::resetControl(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  lfs       f0, -0x4238(r2)
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  addi      r3, r4, 0x41E4
	  lfs       f1, 0x0(r3)
	  stfs      f1, 0x1F0(r31)
	  lfs       f1, 0x4(r3)
	  stfs      f1, 0x1F4(r31)
	  lfs       f1, 0x8(r3)
	  stfs      f1, 0x1F8(r31)
	  lfs       f1, 0x180(r31)
	  stfs      f1, 0x1FC(r31)
	  lfs       f1, 0x184(r31)
	  stfs      f1, 0x200(r31)
	  lfs       f1, 0x188(r31)
	  stfs      f1, 0x204(r31)
	  lfs       f1, 0x180(r31)
	  stfs      f1, 0x208(r31)
	  lfs       f1, 0x184(r31)
	  stfs      f1, 0x20C(r31)
	  lfs       f1, 0x188(r31)
	  stfs      f1, 0x210(r31)
	  lfs       f1, 0x180(r31)
	  stfs      f1, 0x214(r31)
	  lfs       f1, 0x184(r31)
	  stfs      f1, 0x218(r31)
	  lfs       f1, 0x188(r31)
	  stfs      f1, 0x21C(r31)
	  lfs       f1, 0x180(r31)
	  stfs      f1, 0x220(r31)
	  lfs       f1, 0x184(r31)
	  stfs      f1, 0x224(r31)
	  lfs       f1, 0x188(r31)
	  stfs      f1, 0x228(r31)
	  lfs       f1, 0x180(r31)
	  stfs      f1, 0x22C(r31)
	  lfs       f1, 0x184(r31)
	  stfs      f1, 0x230(r31)
	  lfs       f1, 0x188(r31)
	  stfs      f1, 0x234(r31)
	  lfs       f1, 0x180(r31)
	  stfs      f1, 0x238(r31)
	  lfs       f1, 0x184(r31)
	  stfs      f1, 0x23C(r31)
	  lfs       f1, 0x188(r31)
	  stfs      f1, 0x240(r31)
	  lfs       f1, 0x180(r31)
	  stfs      f1, 0x244(r31)
	  lfs       f1, 0x184(r31)
	  stfs      f1, 0x248(r31)
	  lfs       f1, 0x188(r31)
	  stfs      f1, 0x24C(r31)
	  lfs       f1, 0x180(r31)
	  stfs      f1, 0x250(r31)
	  lfs       f1, 0x184(r31)
	  stfs      f1, 0x254(r31)
	  lfs       f1, 0x188(r31)
	  stfs      f1, 0x258(r31)
	  lfs       f1, 0x180(r31)
	  stfs      f1, 0x25C(r31)
	  lfs       f1, 0x184(r31)
	  stfs      f1, 0x260(r31)
	  lfs       f1, 0x188(r31)
	  stfs      f1, 0x264(r31)
	  lfs       f1, 0x180(r31)
	  stfs      f1, 0x268(r31)
	  lfs       f1, 0x184(r31)
	  stfs      f1, 0x26C(r31)
	  lfs       f1, 0x188(r31)
	  stfs      f1, 0x270(r31)
	  stw       r0, 0x274(r31)
	  stfs      f0, 0x27C(r31)
	  stfs      f0, 0x278(r31)
	  stfs      f0, 0x284(r31)
	  stfs      f0, 0x280(r31)
	  lfs       f5, 0x1C4(r31)
	  fmr       f1, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x154
	  fneg      f1, f5

	.loc_0x154:
	  lfs       f3, -0x41CC(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x4238(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f1, f3
	  lfs       f6, 0x1C8(r31)
	  fcmpo     cr0, f5, f0
	  lfs       f1, 0x1C0(r31)
	  lfs       f4, 0x1BC(r31)
	  fctiwz    f0, f2
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f2, f6, f0, f1
	  bge-      .loc_0x1BC
	  lfs       f0, -0x41C8(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x1D4

	.loc_0x1BC:
	  fmuls     f0, f5, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x1D4:
	  lfs       f0, 0x1B8(r31)
	  fmadds    f0, f6, f1, f0
	  stfs      f0, 0x1A0(r31)
	  stfs      f4, 0x1A4(r31)
	  stfs      f2, 0x1A8(r31)
	  lwz       r3, -0x6CF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x214
	  lwz       r12, 0x4(r3)
	  addi      r4, r31, 0x1A0
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x1CC(r31)
	  fadds     f0, f0, f1
	  stfs      f0, 0x1A4(r31)

	.loc_0x214:
	  lfs       f1, 0x1A0(r31)
	  lfs       f0, 0x2C4(r31)
	  lfs       f3, 0x1A4(r31)
	  lfs       f2, 0x2C8(r31)
	  fadds     f1, f1, f0
	  lfs       f5, 0x1A8(r31)
	  lfs       f4, 0x2CC(r31)
	  fadds     f2, f3, f2
	  lfs       f0, -0x4238(r2)
	  stfs      f1, 0x174(r31)
	  fadds     f1, f5, f4
	  stfs      f2, 0x178(r31)
	  stfs      f1, 0x17C(r31)
	  stfs      f0, 0x2D0(r31)
	  stfs      f0, 0x2D4(r31)
	  stfs      f0, 0x2D8(r31)
	  stfs      f0, 0x2C4(r31)
	  stfs      f0, 0x2C8(r31)
	  stfs      f0, 0x2CC(r31)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void setAtOffset__Q34Game15IllustratedBook6CameraFRC10Vector3f(void)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	802218A8
 * Size:	000904
 */
void IllustratedBook::Camera::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stfd      f31, 0x110(r1)
	  psq_st    f31,0x118(r1),0,0
	  stfd      f30, 0x100(r1)
	  psq_st    f30,0x108(r1),0,0
	  stfd      f29, 0xF0(r1)
	  psq_st    f29,0xF8(r1),0,0
	  stw       r31, 0xEC(r1)
	  stw       r30, 0xE8(r1)
	  mr        r30, r3
	  lis       r4, 0x8051
	  lwz       r3, 0x19C(r3)
	  addi      r31, r4, 0x41E4
	  lfs       f31, 0x0(r31)
	  cmplwi    r3, 0
	  lfs       f30, 0x4(r31)
	  lfs       f29, 0x8(r31)
	  beq-      .loc_0x90
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x24
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x24
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x28(r1)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0xA8
	  stfs      f1, 0x28(r1)
	  b         .loc_0xA8

	.loc_0x90:
	  lfs       f0, 0x1B8(r30)
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0x1BC(r30)
	  stfs      f0, 0x28(r1)
	  lfs       f0, 0x1C0(r30)
	  stfs      f0, 0x2C(r1)

	.loc_0xA8:
	  lfs       f1, 0x1D8(r30)
	  lfs       f0, 0x1F0(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1D8(r30)
	  lfs       f1, 0x1DC(r30)
	  lfs       f0, 0x1F4(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1DC(r30)
	  lfs       f1, 0x1E0(r30)
	  lfs       f0, 0x1F8(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1E0(r30)
	  lwz       r0, 0x274(r30)
	  lfs       f0, 0x24(r1)
	  mulli     r3, r0, 0xC
	  addi      r3, r3, 0x1FC
	  add       r3, r30, r3
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x274(r30)
	  addi      r0, r3, 0x1
	  cmpwi     r0, 0xA
	  stw       r0, 0x274(r30)
	  blt-      .loc_0x11C
	  li        r0, 0
	  stw       r0, 0x274(r30)

	.loc_0x11C:
	  lfs       f0, 0x1FC(r30)
	  lfs       f1, 0x200(r30)
	  fadds     f31, f31, f0
	  lfs       f0, 0x208(r30)
	  fadds     f30, f30, f1
	  lfs       f1, 0x20C(r30)
	  lfs       f2, 0x204(r30)
	  fadds     f31, f31, f0
	  lfs       f0, 0x214(r30)
	  fadds     f30, f30, f1
	  lfs       f1, 0x218(r30)
	  fadds     f29, f29, f2
	  fadds     f31, f31, f0
	  lfs       f0, 0x220(r30)
	  fadds     f30, f30, f1
	  lfs       f1, 0x224(r30)
	  fadds     f31, f31, f0
	  lfs       f0, 0x22C(r30)
	  lfs       f2, 0x210(r30)
	  fadds     f30, f30, f1
	  lfs       f1, 0x230(r30)
	  fadds     f31, f31, f0
	  lfs       f0, 0x238(r30)
	  fadds     f29, f29, f2
	  lfs       f2, 0x21C(r30)
	  fadds     f30, f30, f1
	  fadds     f31, f31, f0
	  lfs       f0, 0x244(r30)
	  fadds     f29, f29, f2
	  lfs       f1, 0x23C(r30)
	  fadds     f31, f31, f0
	  lfs       f0, 0x250(r30)
	  lfs       f6, 0x228(r30)
	  fadds     f30, f30, f1
	  lfs       f1, 0x248(r30)
	  fadds     f31, f31, f0
	  lfs       f0, 0x25C(r30)
	  fadds     f29, f29, f6
	  lfs       f5, 0x234(r30)
	  fadds     f30, f30, f1
	  fadds     f31, f31, f0
	  lfs       f0, 0x268(r30)
	  fadds     f29, f29, f5
	  lfs       f1, 0x254(r30)
	  lfs       f2, 0x240(r30)
	  fadds     f31, f31, f0
	  lfs       f4, -0x4224(r2)
	  fadds     f30, f30, f1
	  lfs       f1, 0x260(r30)
	  fadds     f29, f29, f2
	  lfs       f2, 0x24C(r30)
	  fmuls     f31, f31, f4
	  lfs       f0, 0x1D8(r30)
	  fadds     f30, f30, f1
	  lfs       f1, 0x26C(r30)
	  fadds     f29, f29, f2
	  lfs       f2, 0x258(r30)
	  fsubs     f7, f31, f0
	  lfs       f6, 0x264(r30)
	  fadds     f30, f30, f1
	  lfs       f0, 0x1F0(r30)
	  fadds     f29, f29, f2
	  lfs       f3, 0x1DC(r30)
	  fmuls     f7, f7, f4
	  lfs       f5, 0x270(r30)
	  fmuls     f30, f30, f4
	  lfs       f2, 0x1E0(r30)
	  fadds     f29, f29, f6
	  lfs       f1, -0x41C4(r2)
	  fadds     f0, f0, f7
	  fsubs     f3, f30, f3
	  fadds     f29, f29, f5
	  stfs      f0, 0x1F0(r30)
	  fmuls     f3, f3, f4
	  fmuls     f29, f29, f4
	  lfs       f0, 0x1F4(r30)
	  fadds     f0, f0, f3
	  fsubs     f2, f29, f2
	  stfs      f0, 0x1F4(r30)
	  fmuls     f2, f2, f4
	  lfs       f0, 0x1F8(r30)
	  fadds     f0, f0, f2
	  stfs      f0, 0x1F8(r30)
	  lfs       f0, 0x1F0(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1F0(r30)
	  lfs       f0, 0x1F4(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1F4(r30)
	  lfs       f0, 0x1F8(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1F8(r30)
	  lwz       r3, -0x6560(r13)
	  bl        0x1DE094
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x610
	  lwz       r4, 0x198(r30)
	  lis       r0, 0x4330
	  stw       r0, 0xD0(r1)
	  mr        r3, r30
	  lwz       r0, 0x18(r4)
	  lfd       f1, -0x41D8(r2)
	  rlwinm    r4,r0,29,31,31
	  rlwinm    r0,r0,30,31,31
	  sub       r0, r0, r4
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xD4(r1)
	  lfd       f0, 0xD0(r1)
	  fsubs     f1, f0, f1
	  bl        0x920
	  lfs       f2, 0x28C(r30)
	  lfs       f1, 0x28(r30)
	  lfs       f0, 0x290(r30)
	  fsubs     f4, f1, f2
	  lwz       r3, 0x198(r30)
	  fsubs     f3, f0, f2
	  lfs       f2, 0x2FC(r30)
	  lfs       f1, 0x5C(r3)
	  lfs       f0, 0x1CC(r30)
	  fdivs     f29, f4, f3
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x1CC(r30)
	  lfs       f0, 0x1CC(r30)
	  lfs       f1, 0x1D0(r30)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x318
	  stfs      f1, 0x1CC(r30)

	.loc_0x318:
	  lfs       f0, 0x1CC(r30)
	  lfs       f1, 0x1D4(r30)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x32C
	  stfs      f1, 0x1CC(r30)

	.loc_0x32C:
	  lwz       r3, 0x198(r30)
	  lfs       f3, 0x2F8(r30)
	  lfs       f2, 0x58(r3)
	  lfs       f1, 0x1C4(r30)
	  lfs       f0, -0x41C0(r2)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x1C4(r30)
	  lfs       f1, 0x1C4(r30)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x35C
	  fsubs     f0, f1, f0
	  stfs      f0, 0x1C4(r30)

	.loc_0x35C:
	  lfs       f1, 0x1C4(r30)
	  lfs       f0, -0x4238(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x378
	  lfs       f0, -0x41C0(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1C4(r30)

	.loc_0x378:
	  lwz       r3, -0x6560(r13)
	  bl        0x1DDDE0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3B0
	  lwz       r3, 0x198(r30)
	  lfs       f1, -0x423C(r2)
	  lfs       f0, 0x48(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x27C(r30)
	  lwz       r3, 0x198(r30)
	  lfs       f0, 0x4C(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x284(r30)
	  b         .loc_0x3BC

	.loc_0x3B0:
	  lfs       f0, -0x4238(r2)
	  stfs      f0, 0x27C(r30)
	  stfs      f0, 0x284(r30)

	.loc_0x3BC:
	  lfs       f4, 0x310(r30)
	  lfs       f0, 0x30C(r30)
	  lfs       f1, 0x27C(r30)
	  fsubs     f3, f0, f4
	  lfs       f2, 0x278(r30)
	  lfs       f0, -0x4238(r2)
	  fsubs     f1, f1, f2
	  fmadds    f3, f29, f3, f4
	  fmadds    f1, f3, f1, f2
	  stfs      f1, 0x278(r30)
	  lfs       f1, 0x284(r30)
	  lfs       f2, 0x280(r30)
	  fsubs     f1, f1, f2
	  fmadds    f1, f3, f1, f2
	  stfs      f1, 0x280(r30)
	  lfs       f5, 0x1C4(r30)
	  fmr       f1, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x40C
	  fneg      f1, f5

	.loc_0x40C:
	  lfs       f3, -0x41CC(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x4238(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f1, f3
	  lfs       f6, 0x1C8(r30)
	  fcmpo     cr0, f5, f0
	  lfs       f1, 0x1C0(r30)
	  lfs       f4, 0x1BC(r30)
	  fctiwz    f0, f2
	  stfd      f0, 0xD0(r1)
	  lwz       r0, 0xD4(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f2, f6, f0, f1
	  bge-      .loc_0x474
	  lfs       f0, -0x41C8(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xD8(r1)
	  lwz       r0, 0xDC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x48C

	.loc_0x474:
	  fmuls     f0, f5, f3
	  fctiwz    f0, f0
	  stfd      f0, 0xE0(r1)
	  lwz       r0, 0xE4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x48C:
	  lfs       f0, 0x1B8(r30)
	  addi      r4, r1, 0x18
	  lwz       r3, -0x6CF8(r13)
	  fmadds    f0, f6, f1, f0
	  stfs      f4, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f0, 0x18(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x1CC(r30)
	  lis       r3, 0x8050
	  lis       r4, 0x8051
	  lfs       f6, 0x18(r1)
	  fadds     f7, f0, f1
	  lfs       f5, 0x20(r1)
	  addi      r3, r3, 0x71A0
	  lfs       f3, -0x41E0(r2)
	  lfs       f2, -0x4238(r2)
	  addi      r8, r1, 0x8
	  stfs      f7, 0x1C(r1)
	  addi      r7, r4, 0x41E4
	  lfs       f0, -0x41C4(r2)
	  li        r6, 0
	  lfs       f4, 0x1A0(r30)
	  li        r0, -0x1
	  lfs       f1, 0x1A4(r30)
	  addi      r4, r1, 0x34
	  fsubs     f8, f6, f4
	  lfs       f6, 0x300(r30)
	  fsubs     f7, f7, f1
	  lfs       f4, 0x1A8(r30)
	  lfs       f1, 0x1A0(r30)
	  fmuls     f8, f8, f6
	  fsubs     f4, f5, f4
	  fmuls     f7, f7, f6
	  fadds     f1, f1, f8
	  fmuls     f4, f4, f6
	  stfs      f1, 0x1A0(r30)
	  lfs       f1, 0x1A4(r30)
	  fadds     f1, f1, f7
	  stfs      f1, 0x1A4(r30)
	  lfs       f1, 0x1A8(r30)
	  fadds     f1, f1, f4
	  stfs      f1, 0x1A8(r30)
	  lfs       f4, 0x1A0(r30)
	  lfs       f1, 0x800(r3)
	  stfs      f4, 0x8(r1)
	  lwz       r3, -0x6CF8(r13)
	  lfs       f4, 0x1A4(r30)
	  lwz       r5, -0x6514(r13)
	  stfs      f4, 0xC(r1)
	  lfs       f4, 0x1A8(r30)
	  stfs      f4, 0x10(r1)
	  stfs      f3, 0x14(r1)
	  stw       r8, 0x34(r1)
	  stw       r7, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f2, 0x40(r1)
	  stw       r6, 0x44(r1)
	  stw       r6, 0x78(r1)
	  stb       r6, 0xA8(r1)
	  stb       r6, 0x4D(r1)
	  stb       r6, 0x4C(r1)
	  stw       r6, 0x7C(r1)
	  stw       r6, 0x48(r1)
	  stb       r6, 0xC4(r1)
	  stw       r6, 0xC8(r1)
	  stfs      f1, 0x60(r1)
	  stfs      f0, 0x64(r1)
	  stw       r0, 0xCC(r1)
	  stw       r6, 0x80(r1)
	  stb       r6, 0x4E(r1)
	  lwz       r12, 0x4(r3)
	  lfs       f1, 0x54(r5)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, -0x41E0(r2)
	  lfs       f0, 0xC(r1)
	  fadds     f1, f2, f1
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x5F8
	  stfs      f1, 0xC(r1)

	.loc_0x5F8:
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x1A0(r30)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x1A4(r30)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x1A8(r30)

	.loc_0x610:
	  lfs       f1, 0x1DC(r30)
	  lfs       f0, 0x178(r30)
	  lfs       f2, 0x1E0(r30)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x17C(r30)
	  lfs       f9, 0x1D8(r30)
	  lfs       f0, 0x174(r30)
	  fsubs     f4, f2, f1
	  fmuls     f1, f3, f3
	  fsubs     f2, f9, f0
	  lfs       f0, -0x4238(r2)
	  fmuls     f5, f4, f4
	  fmadds    f1, f2, f2, f1
	  fadds     f1, f5, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x660
	  ble-      .loc_0x664
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x664

	.loc_0x660:
	  fmr       f1, f0

	.loc_0x664:
	  lfs       f0, -0x41BC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x688
	  lfs       f0, -0x4244(r2)
	  fdivs     f0, f0, f1
	  fmuls     f10, f2, f0
	  fmuls     f1, f3, f0
	  fmuls     f11, f4, f0
	  b         .loc_0x694

	.loc_0x688:
	  lfs       f10, -0x4238(r2)
	  lfs       f11, -0x41E4(r2)
	  fmr       f1, f10

	.loc_0x694:
	  lfs       f7, -0x4238(r2)
	  mr        r3, r30
	  lfs       f0, 0x1E4(r30)
	  fmuls     f6, f10, f7
	  lfs       f8, -0x4244(r2)
	  fmuls     f12, f1, f7
	  lfs       f5, 0x2A0(r30)
	  lfs       f4, 0x278(r30)
	  fadds     f1, f9, f0
	  fnmsubs   f9, f11, f8, f12
	  lfs       f3, 0x2A4(r30)
	  lfs       f2, 0x280(r30)
	  fmsubs    f6, f11, f7, f6
	  fadds     f13, f5, f4
	  lfs       f0, 0x2A8(r30)
	  fadds     f29, f3, f2
	  fmuls     f3, f6, f7
	  fmsubs    f5, f10, f8, f12
	  fmuls     f11, f7, f29
	  fmadds    f2, f9, f13, f1
	  fnmsubs   f10, f5, f8, f3
	  fmuls     f1, f9, f7
	  fadds     f2, f11, f2
	  fmsubs    f3, f9, f8, f3
	  fmsubs    f4, f5, f7, f1
	  fmadds    f1, f10, f0, f2
	  stfs      f1, 0x1AC(r30)
	  lfs       f2, 0x1DC(r30)
	  lfs       f1, 0x1E8(r30)
	  fadds     f1, f2, f1
	  fmadds    f1, f6, f13, f1
	  fmadds    f1, f8, f29, f1
	  fmadds    f1, f4, f0, f1
	  stfs      f1, 0x1B0(r30)
	  lfs       f2, 0x1E0(r30)
	  lfs       f1, 0x1EC(r30)
	  fadds     f1, f2, f1
	  fmadds    f1, f5, f13, f1
	  fadds     f1, f11, f1
	  fmadds    f0, f3, f0, f1
	  stfs      f0, 0x1B4(r30)
	  bl        .loc_0x904
	  mr        r3, r30
	  bl        0x3C8
	  lfs       f3, -0x41B8(r2)
	  lis       r3, 0x8051
	  lfs       f0, 0x314(r30)
	  lfs       f1, 0x2D0(r30)
	  fmuls     f0, f3, f0
	  lfs       f6, 0x41E4(r3)
	  lfs       f7, 0x4(r31)
	  lfs       f8, 0x8(r31)
	  fmuls     f0, f1, f0
	  lfs       f1, -0x4238(r2)
	  stfs      f0, 0x2D0(r30)
	  lfs       f2, 0x2D4(r30)
	  lfs       f0, 0x314(r30)
	  fmuls     f0, f2, f0
	  stfs      f0, 0x2D4(r30)
	  lfs       f0, 0x314(r30)
	  lfs       f2, 0x2D8(r30)
	  fmuls     f0, f3, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x2D8(r30)
	  lfs       f2, 0x2C4(r30)
	  lfs       f0, 0x2D0(r30)
	  fadds     f0, f2, f0
	  stfs      f0, 0x2C4(r30)
	  lfs       f2, 0x2C8(r30)
	  lfs       f0, 0x2D4(r30)
	  fadds     f0, f2, f0
	  stfs      f0, 0x2C8(r30)
	  lfs       f2, 0x2CC(r30)
	  lfs       f0, 0x2D8(r30)
	  fadds     f0, f2, f0
	  stfs      f0, 0x2CC(r30)
	  lfs       f0, 0x2C4(r30)
	  lfs       f5, 0x2CC(r30)
	  fsubs     f2, f0, f6
	  lfs       f4, 0x2C8(r30)
	  lfs       f3, 0x318(r30)
	  fsubs     f5, f5, f8
	  lfs       f0, 0x2D0(r30)
	  fsubs     f4, f4, f7
	  fnmsubs   f0, f3, f2, f0
	  stfs      f0, 0x2D0(r30)
	  lfs       f2, 0x31C(r30)
	  lfs       f0, 0x2D4(r30)
	  fnmsubs   f0, f2, f4, f0
	  stfs      f0, 0x2D4(r30)
	  lfs       f2, 0x320(r30)
	  lfs       f0, 0x2D8(r30)
	  fnmsubs   f0, f2, f5, f0
	  stfs      f0, 0x2D8(r30)
	  lfs       f3, 0x2D0(r30)
	  lfs       f2, 0x2D4(r30)
	  lfs       f4, 0x2D8(r30)
	  fmuls     f0, f3, f3
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x850
	  fmadds    f0, f3, f3, f2
	  fadds     f3, f4, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x854
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x854

	.loc_0x850:
	  fmr       f3, f1

	.loc_0x854:
	  lfs       f1, -0x4250(r2)
	  lfs       f0, 0x294(r30)
	  lfs       f2, -0x41E0(r2)
	  fmadds    f0, f1, f3, f0
	  stfs      f0, 0x294(r30)
	  lfs       f1, 0x1A0(r30)
	  lfs       f0, 0x2C4(r30)
	  lfs       f4, 0x1A4(r30)
	  lfs       f3, 0x2C8(r30)
	  fadds     f0, f1, f0
	  lfs       f5, 0x1A8(r30)
	  lfs       f1, 0x2CC(r30)
	  fadds     f3, f4, f3
	  stfs      f0, 0x174(r30)
	  fadds     f0, f5, f1
	  stfs      f3, 0x178(r30)
	  stfs      f0, 0x17C(r30)
	  lfs       f3, 0x2C4(r30)
	  lfs       f4, 0x2C8(r30)
	  lfs       f5, 0x2CC(r30)
	  fmuls     f3, f3, f2
	  lfs       f0, 0x1AC(r30)
	  fmuls     f4, f4, f2
	  lfs       f1, 0x1B0(r30)
	  fmuls     f5, f5, f2
	  lfs       f2, 0x1B4(r30)
	  fadds     f0, f0, f3
	  fadds     f1, f1, f4
	  fadds     f2, f2, f5
	  stfs      f0, 0x180(r30)
	  stfs      f1, 0x184(r30)
	  stfs      f2, 0x188(r30)
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  psq_l     f29,0xF8(r1),0,0
	  lfd       f29, 0xF0(r1)
	  lwz       r31, 0xEC(r1)
	  lwz       r0, 0x124(r1)
	  lwz       r30, 0xE8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr

	.loc_0x904:
	*/
}

/*
 * --INFO--
 * Address:	802221AC
 * Size:	000204
 */
void IllustratedBook::Camera::updateCameraShake(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  bl        -0x158C28
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, 0x2DC(r31)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x138
	  lfs       f31, 0x2E0(r31)
	  bl        -0x158C60
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x41E8(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, 0x2E4(r31)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x294(r31)
	  fdivs     f2, f3, f2
	  fmadds    f0, f1, f2, f0
	  stfs      f0, 0x294(r31)
	  bl        -0x158C98
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0x10(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0x10(r1)
	  lfs       f0, 0x2E8(r31)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC8
	  lfs       f0, 0x2EC(r31)
	  fadds     f31, f31, f0

	.loc_0xC8:
	  bl        -0x158CD4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0x18(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0x18(r1)
	  lfs       f0, -0x4218(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fsubs     f0, f1, f0
	  fmuls     f0, f31, f0
	  stfs      f0, 0x2AC(r31)
	  bl        -0x158D0C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0x20(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0x20(r1)
	  lfs       f0, -0x4218(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fsubs     f0, f1, f0
	  fmuls     f0, f31, f0
	  stfs      f0, 0x2B0(r31)

	.loc_0x138:
	  lfs       f1, 0x2AC(r31)
	  lfs       f0, 0x2A0(r31)
	  lfs       f4, 0x2F0(r31)
	  fsubs     f5, f1, f0
	  lfs       f0, 0x2B8(r31)
	  lfs       f3, 0x2B0(r31)
	  lfs       f1, 0x2A4(r31)
	  fmuls     f5, f5, f4
	  lfs       f2, 0x2B4(r31)
	  fsubs     f3, f3, f1
	  lfs       f1, 0x2A8(r31)
	  fadds     f0, f0, f5
	  fsubs     f1, f2, f1
	  fmuls     f3, f3, f4
	  stfs      f0, 0x2B8(r31)
	  fmuls     f1, f1, f4
	  lfs       f0, 0x2BC(r31)
	  fadds     f0, f0, f3
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x2C0(r31)
	  fadds     f0, f0, f1
	  stfs      f0, 0x2C0(r31)
	  lfs       f1, 0x2F4(r31)
	  lfs       f0, 0x2B8(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2B8(r31)
	  lfs       f0, 0x2BC(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2BC(r31)
	  lfs       f0, 0x2C0(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2C0(r31)
	  lfs       f1, 0x2A0(r31)
	  lfs       f0, 0x2B8(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2A0(r31)
	  lfs       f1, 0x2A4(r31)
	  lfs       f0, 0x2BC(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2A4(r31)
	  lfs       f1, 0x2A8(r31)
	  lfs       f0, 0x2C0(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2A8(r31)
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802223B0
 * Size:	0000E8
 */
void IllustratedBook::Camera::updateFocus(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x288(r3)
	  lfs       f0, 0x28(r3)
	  lfs       f3, 0x27C(r3)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x278(r3)
	  lfs       f1, 0x284(r3)
	  lfs       f0, 0x280(r3)
	  fsubs     f3, f3, f2
	  fabs      f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x4244(r2)
	  fabs      f3, f3
	  frsp      f1, f4
	  fabs      f4, f2
	  frsp      f2, f3
	  fcmpo     cr0, f1, f0
	  frsp      f1, f4
	  bgt-      .loc_0x5C
	  lfs       f0, -0x41D0(r2)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x5C
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x6C

	.loc_0x5C:
	  lfs       f1, 0x294(r3)
	  lfs       f0, -0x4250(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x294(r3)

	.loc_0x6C:
	  lfs       f1, -0x41B0(r2)
	  lfs       f0, 0x294(r3)
	  lfs       f3, -0x41B4(r2)
	  fsubs     f2, f1, f0
	  lfs       f1, 0x298(r3)
	  lfs       f0, -0x4218(r2)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x298(r3)
	  lfs       f1, 0x298(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x9C
	  stfs      f0, 0x298(r3)

	.loc_0x9C:
	  lfs       f1, 0x298(r3)
	  lfs       f0, -0x41AC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB0
	  stfs      f0, 0x298(r3)

	.loc_0xB0:
	  lfs       f2, 0x298(r3)
	  lfs       f1, 0x29C(r3)
	  lfs       f0, -0x4244(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x298(r3)
	  lfs       f2, 0x294(r3)
	  lfs       f1, 0x298(r3)
	  fadds     f1, f2, f1
	  stfs      f1, 0x294(r3)
	  lfs       f1, 0x294(r3)
	  fcmpo     cr0, f1, f0
	  blelr-
	  stfs      f0, 0x294(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void IllustratedBook::Camera::getFocus(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80222498
 * Size:	000054
 */
void IllustratedBook::Camera::addFovy(float)
{
	/*
	.loc_0x0:
	  lfs       f2, 0x304(r3)
	  lfs       f0, 0x288(r3)
	  fmadds    f0, f1, f2, f0
	  stfs      f0, 0x288(r3)
	  lfs       f0, 0x288(r3)
	  lfs       f1, 0x28C(r3)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x24
	  stfs      f1, 0x288(r3)

	.loc_0x24:
	  lfs       f0, 0x288(r3)
	  lfs       f1, 0x290(r3)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x38
	  stfs      f1, 0x288(r3)

	.loc_0x38:
	  lfs       f0, 0x288(r3)
	  lfs       f1, 0x28(r3)
	  lfs       f2, 0x308(r3)
	  fsubs     f0, f0, f1
	  fmadds    f0, f2, f0, f1
	  stfs      f0, 0x28(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802224EC
 * Size:	0000EC
 */
SingleGame::ZukanState::ZukanState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1318
	  lis       r4, 0x804B
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r4, r4, 0x12D0
	  stw       r0, 0x0(r3)
	  li        r0, 0xA
	  lis       r3, 0x804C
	  stw       r0, 0x4(r31)
	  addi      r0, r3, 0xB8C
	  addi      r3, r31, 0x1C
	  stw       r5, 0x8(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)
	  bl        0x2022E0
	  li        r3, 0x8
	  li        r0, 0
	  stw       r3, 0x9C(r31)
	  li        r3, 0xB0
	  stw       r0, 0x104(r31)
	  stw       r0, 0x10C(r31)
	  bl        -0x1FE6B0
	  mr.       r0, r3
	  beq-      .loc_0x80
	  li        r4, 0
	  bl        0x2028F0
	  mr        r0, r3

	.loc_0x80:
	  stw       r0, 0x90(r31)
	  li        r5, 0
	  lfs       f1, -0x4238(r2)
	  li        r0, -0x1
	  stw       r5, 0xD4(r31)
	  mr        r3, r31
	  lfs       f0, -0x4244(r2)
	  li        r4, 0x8
	  stw       r5, 0xD8(r31)
	  stw       r5, 0xDC(r31)
	  stw       r5, 0xCC(r31)
	  stw       r5, 0xB0(r31)
	  stw       r5, 0xE4(r31)
	  stw       r5, 0xF0(r31)
	  stfs      f1, 0x108(r31)
	  stfs      f1, 0xF4(r31)
	  stfs      f0, 0xF8(r31)
	  stw       r5, 0xFC(r31)
	  stw       r0, 0x110(r31)
	  stw       r0, 0x114(r31)
	  bl        0x388
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802225D8
 * Size:	00036C
 */
void SingleGame::ZukanState::init(Game::SingleGameSection*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  stw       r0, 0x54(r1)
	  stmw      r26, 0x38(r1)
	  mr        r28, r3
	  lis       r3, 0x804C
	  mr        r29, r4
	  mr        r30, r5
	  addi      r27, r6, 0x2E60
	  addi      r31, r3, 0xA40
	  li        r4, 0
	  subi      r5, r2, 0x41A4
	  li        r6, 0x3
	  lwz       r0, -0x77D4(r13)
	  stw       r0, 0xE0(r28)
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  ori       r0, r0, 0x20
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6C18(r13)
	  bl        -0x6D698
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  subi      r5, r2, 0x41A4
	  bl        -0x6D6B8
	  lwz       r3, 0xE0(r28)
	  bl        -0x1FEE90
	  stw       r3, -0x6A30(r13)
	  lwz       r26, 0xE0(r28)
	  mr        r3, r26
	  bl        -0x1FEEA0
	  mr        r4, r26
	  li        r5, 0x1
	  bl        -0x202798
	  stw       r3, 0xD4(r28)
	  lwz       r3, 0xD4(r28)
	  bl        -0x1FF0C8
	  cmplwi    r30, 0
	  bne-      .loc_0xB4
	  addi      r3, r27, 0x7C
	  addi      r5, r27, 0x90
	  li        r4, 0x401
	  crclr     6, 0x6
	  bl        -0x1F8048

	.loc_0xB4:
	  lis       r3, 0x9
	  lwz       r4, -0x77D4(r13)
	  addi      r3, r3, 0x6000
	  li        r5, 0x1
	  bl        -0x2027D4
	  stw       r3, 0xF0(r28)
	  lwz       r0, 0xF0(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0xEC
	  addi      r3, r27, 0x7C
	  addi      r5, r27, 0xF8
	  li        r4, 0x407
	  crclr     6, 0x6
	  bl        -0x1F8080

	.loc_0xEC:
	  li        r3, 0x38
	  bl        -0x1FE824
	  cmplwi    r3, 0
	  beq-      .loc_0x18C
	  lis       r5, 0x804F
	  lis       r4, 0x804C
	  subi      r0, r5, 0x4AD8
	  li        r8, 0
	  stw       r0, 0x0(r3)
	  addi      r7, r27, 0x34
	  addi      r6, r4, 0xDA4
	  li        r5, 0x20
	  stw       r8, 0x10(r3)
	  li        r4, 0xA
	  li        r0, 0xFF
	  lfs       f5, -0x4250(r2)
	  stw       r8, 0xC(r3)
	  lfs       f4, -0x424C(r2)
	  stw       r8, 0x8(r3)
	  lfs       f3, -0x4248(r2)
	  stw       r8, 0x4(r3)
	  lfs       f2, -0x4244(r2)
	  stw       r7, 0x14(r3)
	  lfs       f1, -0x4240(r2)
	  stw       r6, 0x0(r3)
	  lfs       f0, -0x423C(r2)
	  stb       r8, 0x34(r3)
	  stb       r8, 0x35(r3)
	  stb       r8, 0x34(r3)
	  stb       r8, 0x35(r3)
	  stb       r5, 0x18(r3)
	  stb       r5, 0x19(r3)
	  stb       r4, 0x1A(r3)
	  stb       r0, 0x1B(r3)
	  stfs      f5, 0x1C(r3)
	  stfs      f4, 0x20(r3)
	  stfs      f3, 0x24(r3)
	  stfs      f2, 0x28(r3)
	  stfs      f1, 0x2C(r3)
	  stfs      f0, 0x30(r3)

	.loc_0x18C:
	  stw       r3, 0x104(r28)
	  mr        r3, r29
	  lwz       r4, 0x104(r28)
	  bl        -0xBD7C0
	  li        r3, 0x14
	  bl        -0x1FE8D4
	  cmplwi    r3, 0
	  beq-      .loc_0x1EC
	  lwz       r8, 0x2C(r31)
	  lis       r4, 0x804B
	  lwz       r7, 0x30(r31)
	  addi      r5, r4, 0xF00
	  lwz       r6, 0x34(r31)
	  lis       r4, 0x804C
	  addi      r0, r4, 0xB74
	  stw       r8, 0x20(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r28, 0x4(r3)
	  stw       r8, 0x8(r3)
	  stw       r7, 0xC(r3)
	  stw       r7, 0x24(r1)
	  stw       r6, 0x28(r1)
	  stw       r6, 0x10(r3)

	.loc_0x1EC:
	  stw       r3, 0x10(r28)
	  li        r3, 0x14
	  bl        -0x1FE928
	  cmplwi    r3, 0
	  beq-      .loc_0x240
	  lwz       r8, 0x38(r31)
	  lis       r4, 0x804B
	  lwz       r7, 0x3C(r31)
	  addi      r5, r4, 0xF00
	  lwz       r6, 0x40(r31)
	  lis       r4, 0x804C
	  addi      r0, r4, 0xB74
	  stw       r8, 0x14(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r28, 0x4(r3)
	  stw       r8, 0x8(r3)
	  stw       r7, 0xC(r3)
	  stw       r7, 0x18(r1)
	  stw       r6, 0x1C(r1)
	  stw       r6, 0x10(r3)

	.loc_0x240:
	  stw       r3, 0x14(r28)
	  li        r3, 0x14
	  bl        -0x1FE97C
	  cmplwi    r3, 0
	  beq-      .loc_0x294
	  lwz       r8, 0x44(r31)
	  lis       r4, 0x804B
	  lwz       r7, 0x48(r31)
	  addi      r5, r4, 0xF00
	  lwz       r6, 0x4C(r31)
	  lis       r4, 0x804C
	  addi      r0, r4, 0xB74
	  stw       r8, 0x8(r1)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)
	  stw       r28, 0x4(r3)
	  stw       r8, 0x8(r3)
	  stw       r7, 0xC(r3)
	  stw       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r6, 0x10(r3)

	.loc_0x294:
	  stw       r3, 0x18(r28)
	  lfs       f1, -0x4244(r2)
	  lwz       r0, 0xD4(r29)
	  stw       r0, 0x18(r29)
	  lwz       r3, 0xD4(r29)
	  bl        0x2094E8
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  stw       r29, 0x94(r28)
	  li        r5, 0
	  li        r3, -0x1
	  li        r0, 0x4
	  stb       r5, 0x88(r28)
	  addi      r4, r28, 0x1C
	  stw       r5, -0x6980(r13)
	  stw       r3, 0xA0(r28)
	  stw       r5, 0xA4(r28)
	  stw       r3, 0xA8(r28)
	  stw       r5, 0xAC(r28)
	  lwz       r3, -0x6C18(r13)
	  stw       r0, 0x44(r3)
	  lwz       r3, -0x6514(r13)
	  lwz       r5, 0x10(r28)
	  bl        0x200664
	  lwz       r3, -0x6560(r13)
	  lwz       r4, 0x90(r28)
	  bl        0x1D9798
	  lbz       r0, 0x0(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x328
	  mr        r3, r28
	  li        r4, 0
	  bl        .loc_0x36C
	  b         .loc_0x334

	.loc_0x328:
	  mr        r3, r28
	  li        r4, 0x1
	  bl        .loc_0x36C

	.loc_0x334:
	  lwz       r3, 0x4(r30)
	  li        r0, 0
	  stw       r3, 0x10C(r28)
	  stw       r0, -0x6E20(r13)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x240(r3)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x240(r3)
	  lmw       r26, 0x38(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0x36C:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void SingleGame::ZukanState::startTekiMode(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void SingleGame::ZukanState::startPelletMode(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80222944
 * Size:	000014
 */
void SingleGame::ZukanState::setMode(Game::SingleGame::ZukanState::CMode)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x9C(r3)
	  cmpw      r0, r4
	  beqlr-
	  stw       r4, 0x9C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80222958
 * Size:	00072C
 */
void SingleGame::ZukanState::exec(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  addi      r31, r6, 0x2E60
	  stw       r30, 0x98(r1)
	  mr        r30, r4
	  stw       r29, 0x94(r1)
	  mr        r29, r3
	  stw       r28, 0x90(r1)
	  lwz       r5, -0x6C18(r13)
	  lwz       r3, 0x40(r5)
	  bl        -0xFB5DC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  lwz       r3, -0x6C18(r13)
	  lfs       f0, -0x4184(r2)
	  lwz       r3, 0x40(r3)
	  stfs      f0, 0x21C(r3)
	  b         .loc_0x64

	.loc_0x54:
	  lwz       r3, -0x6C18(r13)
	  lfs       f0, -0x4180(r2)
	  lwz       r3, 0x40(r3)
	  stfs      f0, 0x21C(r3)

	.loc_0x64:
	  lwz       r3, 0x104(r29)
	  lhz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x134
	  lwz       r0, 0x9C(r29)
	  cmpwi     r0, 0x3
	  bne-      .loc_0xCC
	  lwz       r0, 0xA0(r29)
	  cmpwi     r0, 0
	  blt-      .loc_0xC0
	  cmpwi     r0, 0x66
	  bge-      .loc_0xC0
	  lbz       r0, 0x88(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  lwz       r3, -0x6560(r13)
	  bl        0x1DCD70
	  lwz       r0, 0xA0(r29)
	  cmpw      r0, r3
	  bne-      .loc_0xC0
	  lwz       r3, -0x6560(r13)
	  bl        0x1DCF38
	  b         .loc_0x13C

	.loc_0xC0:
	  lwz       r3, -0x6560(r13)
	  bl        0x1DCE70
	  b         .loc_0x13C

	.loc_0xCC:
	  cmpwi     r0, 0x6
	  bne-      .loc_0x128
	  lwz       r0, 0xA8(r29)
	  cmpwi     r0, 0
	  blt-      .loc_0x11C
	  bl        0x1030
	  lwz       r0, 0xA8(r29)
	  cmplw     r0, r3
	  bge-      .loc_0x11C
	  lbz       r0, 0x88(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x11C
	  lwz       r3, -0x6560(r13)
	  bl        0x1DCDA4
	  lwz       r0, 0xA8(r29)
	  cmpw      r0, r3
	  bne-      .loc_0x11C
	  lwz       r3, -0x6560(r13)
	  bl        0x1DCEDC
	  b         .loc_0x13C

	.loc_0x11C:
	  lwz       r3, -0x6560(r13)
	  bl        0x1DCE14
	  b         .loc_0x13C

	.loc_0x128:
	  lwz       r3, -0x6560(r13)
	  bl        0x1DCE08
	  b         .loc_0x13C

	.loc_0x134:
	  lwz       r3, -0x6560(r13)
	  bl        0x1DCEB8

	.loc_0x13C:
	  lwz       r3, -0x6560(r13)
	  bl        0x1DD134
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x374
	  lwz       r3, -0x6560(r13)
	  bl        0x1DCF5C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x374
	  lwz       r3, -0x6560(r13)
	  bl        0x1DD030
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x374
	  lwz       r3, 0x90(r29)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,25,26
	  beq-      .loc_0x374
	  lwz       r0, 0x9C(r29)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x364
	  bge-      .loc_0x198
	  cmpwi     r0, 0x3
	  bge-      .loc_0x1A4
	  b         .loc_0x364

	.loc_0x198:
	  cmpwi     r0, 0x8
	  bge-      .loc_0x364
	  b         .loc_0x284

	.loc_0x1A4:
	  lwz       r3, -0x6560(r13)
	  li        r28, 0
	  bl        0x1DCB00
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x254
	  lwz       r0, 0x9C(r29)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x1CC
	  li        r0, 0x5
	  stw       r0, 0x9C(r29)

	.loc_0x1CC:
	  lis       r3, 0x804B
	  li        r6, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0x6C(r1)
	  addi      r4, r3, 0xB44
	  lis       r3, 0x804C
	  addi      r0, r29, 0x114
	  stw       r4, 0x6C(r1)
	  addi      r5, r3, 0xB14
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x6C
	  stw       r6, 0x70(r1)
	  stw       r6, 0x74(r1)
	  stw       r6, 0x78(r1)
	  stw       r6, 0x7C(r1)
	  stw       r6, 0x80(r1)
	  stw       r6, 0x84(r1)
	  stw       r6, 0x88(r1)
	  stw       r5, 0x6C(r1)
	  lwz       r5, 0xF0(r29)
	  stw       r5, 0x74(r1)
	  lwz       r5, 0xCC(r29)
	  stw       r5, 0x78(r1)
	  lwz       r5, 0xEC(r29)
	  stw       r5, 0x80(r1)
	  lwz       r5, 0xE8(r29)
	  stw       r5, 0x7C(r1)
	  stw       r0, 0x88(r1)
	  bl        0x1DC9D0
	  lfs       f1, -0x4238(r2)
	  mr        r3, r29
	  bl        0xCD0
	  li        r28, 0x1

	.loc_0x254:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x270
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x181F
	  li        r5, 0
	  bl        0x115A70
	  b         .loc_0x374

	.loc_0x270:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1807
	  li        r5, 0
	  bl        0x115A5C
	  b         .loc_0x374

	.loc_0x284:
	  lwz       r3, -0x6560(r13)
	  li        r28, 0
	  bl        0x1DCA50
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x334
	  lwz       r0, 0x9C(r29)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x2AC
	  li        r0, 0x2
	  stw       r0, 0x9C(r29)

	.loc_0x2AC:
	  lis       r3, 0x804B
	  li        r6, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0x4C(r1)
	  addi      r4, r3, 0xB44
	  lis       r3, 0x804C
	  addi      r0, r29, 0x110
	  stw       r4, 0x4C(r1)
	  addi      r5, r3, 0xB2C
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x4C
	  stw       r6, 0x50(r1)
	  stw       r6, 0x54(r1)
	  stw       r6, 0x58(r1)
	  stw       r6, 0x5C(r1)
	  stw       r6, 0x60(r1)
	  stw       r6, 0x64(r1)
	  stw       r6, 0x68(r1)
	  stw       r5, 0x4C(r1)
	  lwz       r5, 0xF0(r29)
	  stw       r5, 0x54(r1)
	  lwz       r5, 0xCC(r29)
	  stw       r5, 0x58(r1)
	  lwz       r5, 0xEC(r29)
	  stw       r5, 0x60(r1)
	  lwz       r5, 0xE8(r29)
	  stw       r5, 0x5C(r1)
	  stw       r0, 0x68(r1)
	  bl        0x1DC854
	  lfs       f1, -0x4238(r2)
	  mr        r3, r29
	  bl        0xBF0
	  li        r28, 0x1

	.loc_0x334:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x350
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x181F
	  li        r5, 0
	  bl        0x115990
	  b         .loc_0x374

	.loc_0x350:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1807
	  li        r5, 0
	  bl        0x11597C
	  b         .loc_0x374

	.loc_0x364:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1807
	  li        r5, 0
	  bl        0x115968

	.loc_0x374:
	  lbz       r0, 0x88(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x5AC
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x240(r3)
	  ori       r0, r0, 0x1
	  stw       r0, 0x240(r3)
	  lwz       r3, -0x6560(r13)
	  bl        0x1D933C
	  lwz       r3, 0x9C(r29)
	  cmpwi     r3, 0
	  beq-      .loc_0x3B0
	  cmpwi     r3, 0x1
	  bne-      .loc_0x4F4

	.loc_0x3B0:
	  lwz       r0, 0x34(r29)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x70C
	  cmpwi     r3, 0
	  bne-      .loc_0x45C
	  cmpwi     r3, 0x2
	  beq-      .loc_0x3D4
	  li        r0, 0x2
	  stw       r0, 0x9C(r29)

	.loc_0x3D4:
	  lis       r3, 0x804B
	  li        r6, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0x2C(r1)
	  addi      r4, r3, 0xB44
	  lis       r3, 0x804C
	  addi      r0, r29, 0x110
	  stw       r4, 0x2C(r1)
	  addi      r5, r3, 0xB2C
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x2C
	  stw       r6, 0x30(r1)
	  stw       r6, 0x34(r1)
	  stw       r6, 0x38(r1)
	  stw       r6, 0x3C(r1)
	  stw       r6, 0x40(r1)
	  stw       r6, 0x44(r1)
	  stw       r6, 0x48(r1)
	  stw       r5, 0x2C(r1)
	  lwz       r5, 0xF0(r29)
	  stw       r5, 0x34(r1)
	  lwz       r5, 0xCC(r29)
	  stw       r5, 0x38(r1)
	  lwz       r5, 0xEC(r29)
	  stw       r5, 0x40(r1)
	  lwz       r5, 0xE8(r29)
	  stw       r5, 0x3C(r1)
	  stw       r0, 0x48(r1)
	  bl        0x1DC72C
	  lfs       f1, -0x4238(r2)
	  mr        r3, r29
	  bl        0xAC8
	  b         .loc_0x70C

	.loc_0x45C:
	  cmpwi     r3, 0x5
	  beq-      .loc_0x46C
	  li        r0, 0x5
	  stw       r0, 0x9C(r29)

	.loc_0x46C:
	  lis       r3, 0x804B
	  li        r6, 0
	  addi      r0, r3, 0x1148
	  lis       r3, 0x804C
	  stw       r0, 0xC(r1)
	  addi      r4, r3, 0xB44
	  lis       r3, 0x804C
	  addi      r0, r29, 0x114
	  stw       r4, 0xC(r1)
	  addi      r5, r3, 0xB14
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0xC
	  stw       r6, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r6, 0x18(r1)
	  stw       r6, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stw       r6, 0x24(r1)
	  stw       r6, 0x28(r1)
	  stw       r5, 0xC(r1)
	  lwz       r5, 0xF0(r29)
	  stw       r5, 0x14(r1)
	  lwz       r5, 0xCC(r29)
	  stw       r5, 0x18(r1)
	  lwz       r5, 0xEC(r29)
	  stw       r5, 0x20(r1)
	  lwz       r5, 0xE8(r29)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x28(r1)
	  bl        0x1DC730
	  lfs       f1, -0x4238(r2)
	  mr        r3, r29
	  bl        0xA30
	  b         .loc_0x70C

	.loc_0x4F4:
	  lwz       r0, 0x34(r29)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x70C
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x520
	  addi      r3, r31, 0x190
	  addi      r5, r31, 0x90
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1F8834

	.loc_0x520:
	  lwz       r28, -0x6780(r13)
	  cmplwi    r28, 0
	  bne-      .loc_0x540
	  addi      r3, r31, 0x190
	  addi      r5, r31, 0x90
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x1F8854

	.loc_0x540:
	  lwz       r0, 0x4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x560
	  addi      r3, r31, 0x19C
	  addi      r5, r31, 0x90
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x1F8874

	.loc_0x560:
	  lwz       r3, 0x4(r28)
	  lwz       r28, 0x4(r3)
	  cmplwi    r28, 0
	  bne-      .loc_0x584
	  addi      r3, r31, 0x19C
	  addi      r5, r31, 0x1A8
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x1F8898

	.loc_0x584:
	  mr        r3, r28
	  bl        0x244F20
	  li        r0, 0x1
	  stb       r0, 0x88(r29)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  lwz       r0, 0x240(r3)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x240(r3)
	  b         .loc_0x70C

	.loc_0x5AC:
	  lwz       r6, 0x9C(r29)
	  cmpwi     r6, 0x5
	  beq-      .loc_0x5F8
	  bge-      .loc_0x5D4
	  cmpwi     r6, 0x3
	  beq-      .loc_0x60C
	  bge-      .loc_0x6CC
	  cmpwi     r6, 0x2
	  bge-      .loc_0x5E4
	  b         .loc_0x6EC

	.loc_0x5D4:
	  cmpwi     r6, 0x7
	  beq-      .loc_0x6DC
	  bge-      .loc_0x6EC
	  b         .loc_0x66C

	.loc_0x5E4:
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x3
	  bl        .loc_0x72C
	  b         .loc_0x700

	.loc_0x5F8:
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x6
	  bl        .loc_0x72C
	  b         .loc_0x700

	.loc_0x60C:
	  lwz       r3, -0x6514(r13)
	  bl        0x2006CC
	  cmpwi     r3, 0
	  bne-      .loc_0x65C
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  bl        0x1DC76C
	  cmpwi     r3, 0x3
	  bne-      .loc_0x65C
	  mr        r3, r29
	  bl        0x3DC4
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x700

	.loc_0x65C:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x314
	  b         .loc_0x700

	.loc_0x66C:
	  lwz       r3, -0x6514(r13)
	  bl        0x20066C
	  cmpwi     r3, 0
	  bne-      .loc_0x6BC
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  bl        0x1DC688
	  cmpwi     r3, 0x3
	  bne-      .loc_0x6BC
	  mr        r3, r29
	  bl        0x3D64
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x700

	.loc_0x6BC:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x998
	  b         .loc_0x700

	.loc_0x6CC:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x1C4
	  b         .loc_0x700

	.loc_0x6DC:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x88C
	  b         .loc_0x700

	.loc_0x6EC:
	  addi      r3, r31, 0x7C
	  addi      r5, r31, 0x1CC
	  li        r4, 0x579
	  crclr     6, 0x6
	  bl        -0x1F8A14

	.loc_0x700:
	  lwz       r3, 0x100(r29)
	  addi      r3, r3, 0x18
	  bl        -0xF2258

	.loc_0x70C:
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  lwz       r28, 0x90(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr

	.loc_0x72C:
	*/
}

/*
 * --INFO--
 * Address:	80223084
 * Size:	00016C
 */
void SingleGame::ZukanState::execModeChange(
    (Game::SingleGameSection*, Game::SingleGame::ZukanState::CMode))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0xFC(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x7C
	  bge-      .loc_0x40
	  cmpwi     r0, 0
	  bge-      .loc_0x4C
	  b         .loc_0x128

	.loc_0x40:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x128
	  b         .loc_0xF0

	.loc_0x4C:
	  lfs       f1, 0xF4(r29)
	  lfs       f0, 0xF8(r29)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x128
	  lwz       r3, -0x6514(r13)
	  bl        0x20054C
	  cmpwi     r3, 0
	  bne-      .loc_0x128
	  li        r0, 0x1
	  stw       r0, 0xFC(r29)
	  b         .loc_0x128

	.loc_0x7C:
	  cmpwi     r31, 0x6
	  beq-      .loc_0xA8
	  bge-      .loc_0xBC
	  cmpwi     r31, 0x3
	  beq-      .loc_0x94
	  b         .loc_0xBC

	.loc_0x94:
	  li        r0, -0x1
	  stw       r0, 0xA0(r29)
	  lwz       r4, 0xA0(r29)
	  bl        0x23BC
	  b         .loc_0xDC

	.loc_0xA8:
	  li        r0, -0x1
	  stw       r0, 0xA8(r29)
	  lwz       r4, 0xA8(r29)
	  bl        0x248C
	  b         .loc_0xDC

	.loc_0xBC:
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  addi      r5, r4, 0x3040
	  mr        r6, r31
	  addi      r3, r3, 0x2EDC
	  li        r4, 0x5B3
	  crclr     6, 0x6
	  bl        -0x1F8B1C

	.loc_0xDC:
	  lfs       f0, -0x4238(r2)
	  li        r0, 0x2
	  stfs      f0, 0xF4(r29)
	  stw       r0, 0xFC(r29)
	  b         .loc_0x128

	.loc_0xF0:
	  lfs       f0, 0xF4(r29)
	  lfs       f1, 0xF8(r29)
	  fcmpo     cr0, f0, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x128
	  stfs      f1, 0xF4(r29)
	  lwz       r3, -0x6514(r13)
	  bl        0x2004A4
	  cmpwi     r3, 0
	  bne-      .loc_0x128
	  lwz       r0, 0x9C(r29)
	  cmpw      r0, r31
	  beq-      .loc_0x128
	  stw       r31, 0x9C(r29)

	.loc_0x128:
	  lbz       r0, 0x88(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x150
	  lwz       r4, -0x6514(r13)
	  mr        r3, r30
	  lfs       f1, 0xF4(r29)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0xF4(r29)
	  bl        -0xD7954

	.loc_0x150:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802231F0
 * Size:	0000E0
 */
void SingleGame::ZukanState::execChangeTeki(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0xFC(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x58
	  bge-      .loc_0x38
	  cmpwi     r0, 0
	  bge-      .loc_0x44
	  b         .loc_0xA0

	.loc_0x38:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xA0
	  b         .loc_0x74

	.loc_0x44:
	  lfs       f0, -0x4238(r2)
	  li        r0, 0x1
	  stfs      f0, 0xF4(r30)
	  stw       r0, 0xFC(r30)
	  b         .loc_0xA0

	.loc_0x58:
	  lwz       r4, 0xA0(r30)
	  bl        0x2294
	  lfs       f0, -0x4238(r2)
	  li        r0, 0x2
	  stfs      f0, 0xF4(r30)
	  stw       r0, 0xFC(r30)
	  b         .loc_0xA0

	.loc_0x74:
	  lfs       f1, 0xF4(r30)
	  lfs       f0, 0xF8(r30)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA0
	  lwz       r0, 0x9C(r30)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x98
	  li        r0, 0x3
	  stw       r0, 0x9C(r30)

	.loc_0x98:
	  lfs       f0, 0xF8(r30)
	  stfs      f0, 0xF4(r30)

	.loc_0xA0:
	  lbz       r0, 0x88(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  lwz       r4, -0x6514(r13)
	  mr        r3, r31
	  lfs       f1, 0xF4(r30)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0xF4(r30)
	  bl        -0xD7A38

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802232D0
 * Size:	0005A4
 */
void SingleGame::ZukanState::execTeki(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stfd      f31, 0x120(r1)
	  psq_st    f31,0x128(r1),0,0
	  stfd      f30, 0x110(r1)
	  psq_st    f30,0x118(r1),0,0
	  stfd      f29, 0x100(r1)
	  psq_st    f29,0x108(r1),0,0
	  stfd      f28, 0xF0(r1)
	  psq_st    f28,0xF8(r1),0,0
	  stfd      f27, 0xE0(r1)
	  psq_st    f27,0xE8(r1),0,0
	  stfd      f26, 0xD0(r1)
	  psq_st    f26,0xD8(r1),0,0
	  stfd      f25, 0xC0(r1)
	  psq_st    f25,0xC8(r1),0,0
	  stmw      r26, 0xA8(r1)
	  mr        r29, r3
	  lwz       r3, 0x90(r3)
	  mr        r30, r4
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x454
	  lwz       r3, -0x6560(r13)
	  bl        0x1DC438
	  cmpwi     r3, -0x1
	  beq-      .loc_0x454
	  lwz       r3, -0x6560(r13)
	  bl        0x1DC888
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x454
	  lwz       r3, -0x6D0C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x454
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r5, 0x5D0C
	  li        r5, 0x20
	  stw       r0, 0x64(r1)
	  addi      r6, r4, 0x10F4
	  li        r0, 0
	  addi      r4, r1, 0x64
	  stw       r6, 0x64(r1)
	  stw       r5, 0x68(r1)
	  stw       r0, 0x6C(r1)
	  bl        -0xE83D0
	  mr        r3, r31
	  li        r4, 0x6
	  bl        -0xD8DE4
	  lwz       r4, 0x98(r29)
	  addi      r3, r1, 0x24
	  bl        0x1F76E8
	  lwz       r4, 0x98(r29)
	  addi      r3, r1, 0x18
	  lfs       f31, 0x24(r1)
	  lwz       r12, 0x0(r4)
	  lfs       f30, 0x28(r1)
	  lwz       r12, 0x4C(r12)
	  lfs       f29, 0x2C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f28, 0x18(r1)
	  addi      r3, r1, 0xC
	  lfs       f27, 0x1C(r1)
	  lfs       f26, 0x20(r1)
	  lwz       r4, 0x98(r29)
	  bl        0x1F6EE8
	  lfs       f0, 0x10(r1)
	  lfs       f2, 0x14(r1)
	  fmuls     f3, f0, f0
	  lfs       f1, 0xC(r1)
	  fmuls     f2, f2, f2
	  lfs       f0, -0x4238(r2)
	  fmadds    f1, f1, f1, f3
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bl        -0x159E74
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x74(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0x70(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0x70(r1)
	  lfs       f0, -0x41C0(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f25, f0, f1
	  bl        -0x159EA4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x7C(r1)
	  fmr       f3, f25
	  lfs       f0, -0x4238(r2)
	  stw       r0, 0x78(r1)
	  lfd       f2, -0x41D8(r2)
	  fcmpo     cr0, f25, f0
	  lfd       f0, 0x78(r1)
	  lfs       f1, -0x41E8(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, -0x423C(r2)
	  fdivs     f1, f2, f1
	  fmuls     f4, f0, f1
	  bge-      .loc_0x1B8
	  fneg      f3, f25

	.loc_0x1B8:
	  lfs       f2, -0x41CC(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x4238(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f3, f2
	  fcmpo     cr0, f25, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x80(r1)
	  lwz       r0, 0x84(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f3, f4, f0
	  bge-      .loc_0x214
	  lfs       f0, -0x41C8(r2)
	  fmuls     f0, f25, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x88(r1)
	  lwz       r0, 0x8C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x22C

	.loc_0x214:
	  fmuls     f0, f25, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x90(r1)
	  lwz       r0, 0x94(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x22C:
	  fmuls     f2, f4, f0
	  lfs       f1, -0x4238(r2)
	  fadds     f0, f29, f3
	  stfs      f28, 0x58(r1)
	  fadds     f1, f30, f1
	  fadds     f2, f31, f2
	  fsubs     f0, f0, f26
	  stfs      f27, 0x5C(r1)
	  fsubs     f1, f1, f27
	  fsubs     f2, f2, f28
	  stfs      f26, 0x60(r1)
	  stfs      f1, 0x50(r1)
	  stfs      f2, 0x4C(r1)
	  stfs      f0, 0x54(r1)
	  lwz       r3, 0x104(r29)
	  lfs       f3, 0x28(r3)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x4C(r1)
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  bl        -0x159FB4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x9C(r1)
	  mr        r3, r31
	  lwz       r5, 0x104(r29)
	  addi      r4, r1, 0x4C
	  stw       r0, 0x98(r1)
	  lfd       f1, -0x41D8(r2)
	  lfd       f0, 0x98(r1)
	  lfs       f3, -0x41E8(r2)
	  fsubs     f4, f0, f1
	  lfs       f1, 0x30(r5)
	  lfs       f0, 0x2C(r5)
	  lfs       f2, 0x50(r1)
	  fdivs     f3, f4, f3
	  fmadds    f0, f1, f3, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x50(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x4C(r1)
	  lfs       f1, 0x50(r1)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x54(r1)
	  fmuls     f4, f1, f1
	  lfs       f1, -0x4238(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x328
	  fmadds    f0, f2, f2, f4
	  fadds     f3, f3, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x32C
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x32C

	.loc_0x328:
	  fmr       f3, f1

	.loc_0x32C:
	  lfs       f0, -0x4238(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x364
	  lfs       f0, -0x4244(r2)
	  lfs       f2, 0x4C(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x54(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x4C(r1)
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x54(r1)

	.loc_0x364:
	  lfs       f0, 0x50(r1)
	  addi      r4, r1, 0x58
	  lfs       f1, -0x4238(r2)
	  lfs       f7, 0x4C(r1)
	  fmuls     f6, f0, f1
	  lfs       f2, -0x4244(r2)
	  lfs       f5, 0x54(r1)
	  fmuls     f0, f7, f1
	  lwz       r5, 0x104(r29)
	  fnmsubs   f4, f5, f2, f6
	  lfs       f3, 0x20(r5)
	  fmsubs    f0, f5, f1, f0
	  fmsubs    f6, f7, f2, f6
	  lfs       f2, 0x58(r1)
	  fmuls     f4, f4, f3
	  fmuls     f5, f0, f3
	  lfs       f1, 0x5C(r1)
	  fmuls     f6, f6, f3
	  lfs       f0, 0x60(r1)
	  fadds     f2, f2, f4
	  fadds     f1, f1, f5
	  fadds     f0, f0, f6
	  lwz       r3, -0x6CF8(r13)
	  stfs      f2, 0x58(r1)
	  stfs      f1, 0x5C(r1)
	  stfs      f0, 0x60(r1)
	  lfs       f0, 0x24(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x5C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, -0x41E0(r2)
	  lfs       f0, 0x5C(r1)
	  fadds     f1, f2, f1
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x400
	  stfs      f1, 0x5C(r1)

	.loc_0x400:
	  mr        r3, r31
	  addi      r4, r1, 0x58
	  li        r5, 0
	  bl        -0xE8534
	  bl        -0x15A140
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x9C(r1)
	  li        r4, 0x3858
	  lfd       f3, -0x41D8(r2)
	  li        r5, 0
	  stw       r0, 0x98(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0x98(r1)
	  lfs       f0, -0x41C0(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1FC(r31)
	  lwz       r3, -0x67A8(r13)
	  bl        0x114F10

	.loc_0x454:
	  lwz       r3, -0x6560(r13)
	  bl        0x1DC4A4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x50C
	  lwz       r3, 0x90(r29)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x50C
	  lwz       r3, -0x6E20(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x50C
	  beq-      .loc_0x488
	  addi      r3, r3, 0x4

	.loc_0x488:
	  li        r0, 0
	  stw       r3, 0x44(r1)
	  addi      r3, r1, 0x3C
	  stw       r0, 0x48(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x40(r1)
	  bl        -0x1152E0
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r26, r4, 0x5D00
	  li        r31, 0x1
	  addi      r28, r3, 0x4998
	  li        r27, 0
	  b         .loc_0x500

	.loc_0x4C0:
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x40(r1)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  stw       r26, 0x30(r1)
	  addi      r4, r1, 0x30
	  stw       r27, 0x34(r1)
	  stw       r28, 0x30(r1)
	  stw       r31, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x3C
	  bl        -0x1158DC

	.loc_0x500:
	  lwz       r3, 0x3C(r1)
	  cmplwi    r3, 0
	  bne+      .loc_0x4C0

	.loc_0x50C:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  bl        0x1DBF04
	  cmpwi     r3, 0x1
	  beq-      .loc_0x528
	  bge-      .loc_0x550
	  b         .loc_0x550

	.loc_0x528:
	  lwz       r4, 0x8(r1)
	  lwz       r0, 0xA0(r29)
	  cmpw      r4, r0
	  beq-      .loc_0x550
	  lwz       r3, 0x104(r29)
	  lhz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x550
	  mr        r3, r29
	  bl        0x70

	.loc_0x550:
	  mr        r3, r30
	  bl        -0xD7FA8
	  psq_l     f31,0x128(r1),0,0
	  lfd       f31, 0x120(r1)
	  psq_l     f30,0x118(r1),0,0
	  lfd       f30, 0x110(r1)
	  psq_l     f29,0x108(r1),0,0
	  lfd       f29, 0x100(r1)
	  psq_l     f28,0xF8(r1),0,0
	  lfd       f28, 0xF0(r1)
	  psq_l     f27,0xE8(r1),0,0
	  lfd       f27, 0xE0(r1)
	  psq_l     f26,0xD8(r1),0,0
	  lfd       f26, 0xD0(r1)
	  psq_l     f25,0xC8(r1),0,0
	  lfd       f25, 0xC0(r1)
	  lmw       r26, 0xA8(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80223874
 * Size:	000018
 */
void SingleGame::ZukanState::startWipe(float)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f0, -0x4238(r2)
	  stw       r0, 0xFC(r3)
	  stfs      f0, 0xF4(r3)
	  stfs      f1, 0xF8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022388C
 * Size:	00003C
 */
void SingleGame::ZukanState::createEnemy(int)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x9C(r3)
	  cmpwi     r0, 0x3
	  bnelr-
	  stw       r4, 0xA0(r3)
	  lwz       r0, 0x9C(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x24
	  li        r0, 0x4
	  stw       r0, 0x9C(r3)

	.loc_0x24:
	  li        r0, 0
	  lfs       f0, -0x4238(r2)
	  stw       r0, 0xFC(r3)
	  stfs      f0, 0xF4(r3)
	  stfs      f0, 0xF8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void SingleGame::ZukanState::createItem(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802238C8
 * Size:	0000EC
 */
void SingleGame::ZukanState::execChangePellet(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0xFC(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x64
	  bge-      .loc_0x38
	  cmpwi     r0, 0
	  bge-      .loc_0x44
	  b         .loc_0xAC

	.loc_0x38:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xAC
	  b         .loc_0x80

	.loc_0x44:
	  lfs       f0, 0xF4(r30)
	  lfs       f1, 0xF8(r30)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xAC
	  stfs      f1, 0xF4(r30)
	  li        r0, 0x1
	  stw       r0, 0xFC(r30)
	  b         .loc_0xAC

	.loc_0x64:
	  lwz       r4, 0xA8(r30)
	  bl        0x1C94
	  lfs       f0, -0x4238(r2)
	  li        r0, 0x2
	  stfs      f0, 0xF4(r30)
	  stw       r0, 0xFC(r30)
	  b         .loc_0xAC

	.loc_0x80:
	  lfs       f1, 0xF4(r30)
	  lfs       f0, 0xF8(r30)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xAC
	  lwz       r0, 0x9C(r30)
	  cmpwi     r0, 0x6
	  beq-      .loc_0xA4
	  li        r0, 0x6
	  stw       r0, 0x9C(r30)

	.loc_0xA4:
	  lfs       f0, 0xF8(r30)
	  stfs      f0, 0xF4(r30)

	.loc_0xAC:
	  lbz       r0, 0x88(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xD4
	  lwz       r4, -0x6514(r13)
	  mr        r3, r31
	  lfs       f1, 0xF4(r30)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0xF4(r30)
	  bl        -0xD811C

	.loc_0xD4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802239B4
 * Size:	0000B4
 */
void SingleGame::ZukanState::execPellet(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  bl        .loc_0xB4
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  bl        0x1DBC88
	  cmpwi     r3, 0x1
	  beq-      .loc_0x3C
	  bge-      .loc_0x94
	  b         .loc_0x94

	.loc_0x3C:
	  lwz       r4, 0x8(r1)
	  lwz       r0, 0xA8(r30)
	  cmpw      r4, r0
	  beq-      .loc_0x94
	  lwz       r3, 0x104(r30)
	  lhz       r0, 0x34(r3)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x94
	  lwz       r0, 0x9C(r30)
	  cmpwi     r0, 0x6
	  bne-      .loc_0x94
	  stw       r4, 0xA8(r30)
	  lwz       r0, 0x9C(r30)
	  cmpwi     r0, 0x7
	  beq-      .loc_0x80
	  li        r0, 0x7
	  stw       r0, 0x9C(r30)

	.loc_0x80:
	  li        r0, 0
	  lfs       f0, -0x4238(r2)
	  stw       r0, 0xFC(r30)
	  stfs      f0, 0xF4(r30)
	  stfs      f0, 0xF8(r30)

	.loc_0x94:
	  mr        r3, r31
	  bl        -0xD81D0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xB4:
	*/
}

/*
 * --INFO--
 * Address:	80223A68
 * Size:	00003C
 */
void SingleGame::ZukanState::getMaxPelletID(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x3
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bl        0x4350
	  mr        r31, r3
	  li        r3, 0x4
	  bl        0x4344
	  lwz       r0, 0x14(r1)
	  add       r3, r31, r3
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80223AA4
 * Size:	00007C
 */
void SingleGame::ZukanState::getCurrentPelletConfig(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  li        r3, 0x3
	  bl        0x429C
	  mr        r0, r3
	  li        r3, 0x4
	  mr        r31, r0
	  bl        0x428C
	  mr        r4, r30
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  bl        .loc_0x7C
	  cmpwi     r3, 0x3
	  bne-      .loc_0x58
	  lwz       r4, 0x8(r1)
	  mr        r3, r31
	  bl        -0x6F64C
	  b         .loc_0x64

	.loc_0x58:
	  lwz       r4, 0x8(r1)
	  mr        r3, r30
	  bl        -0x6F65C

	.loc_0x64:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x7C:
	*/
}

/*
 * --INFO--
 * Address:	80223B20
 * Size:	000080
 */
void SingleGame::ZukanState::convertPelletID(int&, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x3
	  bl        0x4218
	  li        r3, 0x4
	  bl        0x4210
	  li        r3, 0x3
	  bl        0x4278
	  mr        r31, r3
	  li        r3, 0x4
	  bl        0x426C
	  cmpw      r30, r31
	  bge-      .loc_0x58
	  stw       r30, 0x0(r29)
	  li        r3, 0x3
	  b         .loc_0x64

	.loc_0x58:
	  sub       r0, r30, r31
	  li        r3, 0x4
	  stw       r0, 0x0(r29)

	.loc_0x64:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80223BA0
 * Size:	000274
 */
void SingleGame::ZukanState::draw(Game::SingleGameSection*, Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r5
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  stw       r29, 0x54(r1)
	  mr        r29, r3
	  lbz       r0, 0x88(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C4
	  lwz       r3, 0x98(r29)
	  bl        0x1F71E0
	  mr        r3, r31
	  bl        0x20388C
	  addi      r3, r31, 0xBC
	  lwz       r12, 0xBC(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r7, 0x100(r29)
	  li        r10, -0x1
	  lfs       f1, -0x4238(r2)
	  addi      r3, r1, 0x3C
	  stw       r10, 0x8(r1)
	  addi      r4, r1, 0x34
	  lbz       r11, 0x73(r7)
	  fmr       f2, f1
	  lbz       r9, 0x72(r7)
	  addi      r5, r1, 0x2C
	  lbz       r8, 0x71(r7)
	  addi      r6, r1, 0x24
	  lbz       r0, 0x70(r7)
	  stb       r8, 0x9(r1)
	  stb       r0, 0x8(r1)
	  stb       r9, 0xA(r1)
	  stb       r11, 0xB(r1)
	  lwz       r9, 0x8(r1)
	  stw       r10, 0xC(r1)
	  stw       r9, 0x24(r1)
	  lwz       r7, 0x100(r29)
	  stw       r10, 0x10(r1)
	  lbz       r12, 0x73(r7)
	  lbz       r11, 0x72(r7)
	  lbz       r8, 0x71(r7)
	  lbz       r0, 0x70(r7)
	  stb       r8, 0xD(r1)
	  stb       r0, 0xC(r1)
	  stb       r11, 0xE(r1)
	  stb       r12, 0xF(r1)
	  lwz       r8, 0xC(r1)
	  stw       r10, 0x14(r1)
	  stw       r8, 0x2C(r1)
	  lwz       r7, 0x100(r29)
	  stw       r9, 0x20(r1)
	  lbz       r11, 0x6F(r7)
	  lbz       r10, 0x6E(r7)
	  lbz       r9, 0x6D(r7)
	  lbz       r0, 0x6C(r7)
	  stb       r9, 0x11(r1)
	  stb       r0, 0x10(r1)
	  stb       r10, 0x12(r1)
	  stb       r11, 0x13(r1)
	  lwz       r0, 0x10(r1)
	  stw       r8, 0x28(r1)
	  stw       r0, 0x34(r1)
	  lwz       r7, 0x100(r29)
	  stw       r0, 0x30(r1)
	  lbz       r10, 0x6F(r7)
	  lbz       r9, 0x6E(r7)
	  lbz       r8, 0x6D(r7)
	  lbz       r0, 0x6C(r7)
	  stb       r8, 0x15(r1)
	  stb       r0, 0x14(r1)
	  stb       r9, 0x16(r1)
	  stb       r10, 0x17(r1)
	  lwz       r0, 0x14(r1)
	  stw       r0, 0x3C(r1)
	  lfs       f5, 0xBC(r29)
	  lfs       f3, 0xB4(r29)
	  lfs       f4, 0xC0(r29)
	  lfs       f0, 0xB8(r29)
	  fsubs     f3, f5, f3
	  stw       r0, 0x38(r1)
	  fsubs     f4, f4, f0
	  bl        -0x1EE1EC
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0xD4DC0
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        0x678
	  lwz       r3, 0xCC(r29)
	  li        r4, 0
	  li        r5, 0
	  li        r7, 0
	  lwz       r6, 0x20(r3)
	  li        r8, 0
	  lbz       r6, 0x0(r6)
	  bl        -0x1F06B4
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x274
	  lwz       r3, 0xCC(r29)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0
	  li        r8, 0
	  bl        -0x1F06E0

	.loc_0x1C4:
	  addi      r3, r31, 0xBC
	  lwz       r12, 0xBC(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  li        r0, 0xFF
	  stb       r3, 0x18(r1)
	  stb       r3, 0x19(r1)
	  stb       r3, 0x1A(r1)
	  stb       r0, 0x1B(r1)
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  bl        0x1FF48C
	  lhz       r29, 0x6(r3)
	  bl        0x1FF484
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f1, -0x4238(r2)
	  addi      r3, r1, 0x1C
	  stw       r4, 0x44(r1)
	  lfd       f4, -0x4178(r2)
	  fmr       f2, f1
	  stw       r0, 0x40(r1)
	  lfd       f0, 0x40(r1)
	  stw       r29, 0x4C(r1)
	  fsubs     f3, f0, f4
	  stw       r0, 0x48(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f4, f0, f4
	  bl        -0x1EE3E4
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  bl        -0x1C61DC
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0xD4C18
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x274:
	*/
}

/*
 * --INFO--
 * Address:	80223E14
 * Size:	000578
 */
void SingleGame::ZukanState::drawGradationEffect(Game::SingleGameSection*,
                                                 Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x390(r1)
	  mflr      r0
	  stw       r0, 0x394(r1)
	  stfd      f31, 0x380(r1)
	  psq_st    f31,0x388(r1),0,0
	  stfd      f30, 0x370(r1)
	  psq_st    f30,0x378(r1),0,0
	  stmw      r18, 0x338(r1)
	  mr        r28, r3
	  lwz       r3, 0x98(r3)
	  lfs       f0, -0x41A8(r2)
	  mr        r29, r5
	  lfs       f1, 0x294(r3)
	  fabs      f1, f1
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x48
	  fmr       f1, f0

	.loc_0x48:
	  lfs       f0, -0x4244(r2)
	  fmr       f31, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5C
	  fmr       f31, f0

	.loc_0x5C:
	  lwz       r31, 0xB0(r28)
	  mr        r3, r31
	  bl        -0x1F0A84
	  bl        -0x13C51C
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0818
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0834
	  lfs       f0, -0x4184(r2)
	  li        r30, 0
	  fneg      f30, f0

	.loc_0xB0:
	  mr        r4, r31
	  addi      r3, r1, 0x1C8
	  bl        -0x1E99BC
	  li        r4, 0xFF
	  li        r0, 0x7F
	  stb       r4, 0x58(r1)
	  li        r3, 0
	  stb       r4, 0x59(r1)
	  stb       r4, 0x5A(r1)
	  stb       r0, 0x5B(r1)
	  lwz       r24, 0x58(r1)
	  stw       r24, 0x54(r1)
	  stw       r24, 0x50(r1)
	  lbz       r6, 0x54(r1)
	  stw       r24, 0x4C(r1)
	  lbz       r10, 0x50(r1)
	  stw       r24, 0x48(r1)
	  lbz       r19, 0x4C(r1)
	  lbz       r23, 0x48(r1)
	  lbz       r22, 0x49(r1)
	  lbz       r21, 0x4A(r1)
	  lbz       r20, 0x4B(r1)
	  lbz       r18, 0x4D(r1)
	  lbz       r12, 0x4E(r1)
	  lbz       r11, 0x4F(r1)
	  lbz       r9, 0x51(r1)
	  lbz       r8, 0x52(r1)
	  lbz       r7, 0x53(r1)
	  lbz       r5, 0x55(r1)
	  lbz       r4, 0x56(r1)
	  lbz       r0, 0x57(r1)
	  stw       r24, 0x14(r1)
	  stb       r23, 0x318(r1)
	  stb       r22, 0x319(r1)
	  stb       r21, 0x31A(r1)
	  stb       r20, 0x31B(r1)
	  stb       r19, 0x31C(r1)
	  stb       r18, 0x31D(r1)
	  stb       r12, 0x31E(r1)
	  stb       r11, 0x31F(r1)
	  stb       r10, 0x320(r1)
	  stb       r9, 0x321(r1)
	  stb       r8, 0x322(r1)
	  stb       r7, 0x323(r1)
	  stb       r6, 0x324(r1)
	  stb       r5, 0x325(r1)
	  stb       r4, 0x326(r1)
	  stb       r0, 0x327(r1)
	  bl        -0x13AE2C
	  lfs       f1, -0x4184(r2)
	  addi      r3, r1, 0x1C8
	  lfs       f5, 0xBC(r28)
	  li        r4, 0
	  lfs       f3, 0xB4(r28)
	  fmr       f2, f1
	  lfs       f4, 0xC0(r28)
	  li        r5, 0
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  li        r6, 0
	  fsubs     f4, f4, f0
	  bl        -0x1E8404
	  lbz       r4, 0x5B(r1)
	  fmr       f1, f30
	  lfs       f2, -0x4184(r2)
	  addi      r3, r1, 0x1C8
	  subi      r0, r4, 0x10
	  li        r4, 0
	  stb       r0, 0x5B(r1)
	  li        r5, 0
	  li        r6, 0
	  lwz       r27, 0x58(r1)
	  stw       r27, 0x44(r1)
	  stw       r27, 0x40(r1)
	  lbz       r9, 0x44(r1)
	  stw       r27, 0x3C(r1)
	  lbz       r18, 0x40(r1)
	  stw       r27, 0x38(r1)
	  lbz       r22, 0x3C(r1)
	  lbz       r26, 0x38(r1)
	  lbz       r25, 0x39(r1)
	  lbz       r24, 0x3A(r1)
	  lbz       r23, 0x3B(r1)
	  lbz       r21, 0x3D(r1)
	  lbz       r20, 0x3E(r1)
	  lbz       r19, 0x3F(r1)
	  lbz       r12, 0x41(r1)
	  lbz       r11, 0x42(r1)
	  lbz       r10, 0x43(r1)
	  lbz       r8, 0x45(r1)
	  lbz       r7, 0x46(r1)
	  lbz       r0, 0x47(r1)
	  stb       r26, 0x318(r1)
	  stb       r25, 0x319(r1)
	  stb       r24, 0x31A(r1)
	  stb       r23, 0x31B(r1)
	  stb       r22, 0x31C(r1)
	  stb       r21, 0x31D(r1)
	  stb       r20, 0x31E(r1)
	  stb       r19, 0x31F(r1)
	  stb       r18, 0x320(r1)
	  stb       r12, 0x321(r1)
	  stb       r11, 0x322(r1)
	  stb       r10, 0x323(r1)
	  stb       r9, 0x324(r1)
	  stb       r8, 0x325(r1)
	  stb       r7, 0x326(r1)
	  stb       r0, 0x327(r1)
	  lfs       f5, 0xBC(r28)
	  lfs       f3, 0xB4(r28)
	  lfs       f4, 0xC0(r28)
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  stw       r27, 0x10(r1)
	  fsubs     f4, f4, f0
	  bl        -0x1E84DC
	  lbz       r4, 0x5B(r1)
	  fmr       f2, f30
	  lfs       f1, -0x4184(r2)
	  addi      r3, r1, 0x1C8
	  subi      r0, r4, 0x10
	  li        r4, 0
	  stb       r0, 0x5B(r1)
	  li        r5, 0
	  li        r6, 0
	  lwz       r27, 0x58(r1)
	  stw       r27, 0x34(r1)
	  stw       r27, 0x30(r1)
	  lbz       r9, 0x34(r1)
	  stw       r27, 0x2C(r1)
	  lbz       r18, 0x30(r1)
	  stw       r27, 0x28(r1)
	  lbz       r22, 0x2C(r1)
	  lbz       r26, 0x28(r1)
	  lbz       r25, 0x29(r1)
	  lbz       r24, 0x2A(r1)
	  lbz       r23, 0x2B(r1)
	  lbz       r21, 0x2D(r1)
	  lbz       r20, 0x2E(r1)
	  lbz       r19, 0x2F(r1)
	  lbz       r12, 0x31(r1)
	  lbz       r11, 0x32(r1)
	  lbz       r10, 0x33(r1)
	  lbz       r8, 0x35(r1)
	  lbz       r7, 0x36(r1)
	  lbz       r0, 0x37(r1)
	  stb       r26, 0x318(r1)
	  stb       r25, 0x319(r1)
	  stb       r24, 0x31A(r1)
	  stb       r23, 0x31B(r1)
	  stb       r22, 0x31C(r1)
	  stb       r21, 0x31D(r1)
	  stb       r20, 0x31E(r1)
	  stb       r19, 0x31F(r1)
	  stb       r18, 0x320(r1)
	  stb       r12, 0x321(r1)
	  stb       r11, 0x322(r1)
	  stb       r10, 0x323(r1)
	  stb       r9, 0x324(r1)
	  stb       r8, 0x325(r1)
	  stb       r7, 0x326(r1)
	  stb       r0, 0x327(r1)
	  lfs       f5, 0xBC(r28)
	  lfs       f3, 0xB4(r28)
	  lfs       f4, 0xC0(r28)
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  stw       r27, 0xC(r1)
	  fsubs     f4, f4, f0
	  bl        -0x1E85B4
	  lbz       r4, 0x5B(r1)
	  fmr       f1, f30
	  fmr       f2, f30
	  addi      r3, r1, 0x1C8
	  subi      r0, r4, 0x10
	  li        r4, 0
	  stb       r0, 0x5B(r1)
	  li        r5, 0
	  lwz       r18, 0x58(r1)
	  li        r6, 0
	  stw       r18, 0x24(r1)
	  stw       r18, 0x20(r1)
	  lbz       r9, 0x24(r1)
	  stw       r18, 0x1C(r1)
	  lbz       r27, 0x20(r1)
	  stw       r18, 0x18(r1)
	  lbz       r23, 0x1C(r1)
	  lbz       r19, 0x18(r1)
	  lbz       r20, 0x19(r1)
	  lbz       r21, 0x1A(r1)
	  lbz       r22, 0x1B(r1)
	  lbz       r24, 0x1D(r1)
	  lbz       r25, 0x1E(r1)
	  lbz       r26, 0x1F(r1)
	  lbz       r12, 0x21(r1)
	  lbz       r11, 0x22(r1)
	  lbz       r10, 0x23(r1)
	  lbz       r8, 0x25(r1)
	  lbz       r7, 0x26(r1)
	  lbz       r0, 0x27(r1)
	  stb       r19, 0x318(r1)
	  stb       r20, 0x319(r1)
	  stb       r21, 0x31A(r1)
	  stb       r22, 0x31B(r1)
	  stb       r23, 0x31C(r1)
	  stb       r24, 0x31D(r1)
	  stb       r25, 0x31E(r1)
	  stb       r26, 0x31F(r1)
	  stb       r27, 0x320(r1)
	  stb       r12, 0x321(r1)
	  stb       r11, 0x322(r1)
	  stb       r10, 0x323(r1)
	  stb       r9, 0x324(r1)
	  stb       r8, 0x325(r1)
	  stb       r7, 0x326(r1)
	  stb       r0, 0x327(r1)
	  lfs       f5, 0xBC(r28)
	  lfs       f3, 0xB4(r28)
	  lfs       f4, 0xC0(r28)
	  lfs       f0, 0xB8(r28)
	  fsubs     f3, f5, f3
	  stw       r18, 0x8(r1)
	  fsubs     f4, f4, f0
	  bl        -0x1E868C
	  bl        -0x13C8E4
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0BE0
	  addi      r3, r1, 0x1C8
	  li        r4, -0x1
	  bl        -0x1E938C
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x4
	  blt+      .loc_0xB0
	  mr        r3, r29
	  bl        0x2031E8
	  addi      r3, r29, 0xBC
	  lwz       r12, 0xBC(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xCC(r28)
	  addi      r3, r1, 0x60
	  bl        -0x1E9D90
	  lwz       r12, 0x60(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x60
	  lbz       r5, 0x170(r1)
	  lwz       r12, 0xD4(r12)
	  lfs       f1, -0x4244(r2)
	  mtctr     r12
	  bctrl
	  lfs       f3, -0x4244(r2)
	  fmr       f2, f31
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  fsubs     f30, f3, f31
	  lwz       r12, 0x108(r12)
	  fmr       f4, f3
	  fmr       f5, f3
	  fmr       f1, f30
	  fmr       f6, f3
	  fmr       f7, f3
	  fmr       f8, f3
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x60(r1)
	  fmr       f1, f30
	  lfs       f3, -0x4244(r2)
	  fmr       f2, f31
	  lwz       r12, 0x10C(r12)
	  addi      r3, r1, 0x60
	  fmr       f4, f3
	  fmr       f5, f3
	  fmr       f6, f3
	  fmr       f7, f3
	  fmr       f8, f3
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x60(r1)
	  addi      r3, r1, 0x60
	  lfs       f1, -0x4238(r2)
	  li        r4, 0
	  lwz       r12, 0xE8(r12)
	  li        r5, 0
	  fmr       f2, f1
	  li        r6, 0
	  li        r7, 0
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x60
	  li        r4, -0x1
	  bl        -0x1E9484
	  psq_l     f31,0x388(r1),0,0
	  lfd       f31, 0x380(r1)
	  psq_l     f30,0x378(r1),0,0
	  lfd       f30, 0x370(r1)
	  lmw       r18, 0x338(r1)
	  lwz       r0, 0x394(r1)
	  mtlr      r0
	  addi      r1, r1, 0x390
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022438C
 * Size:	0007C0
 */
void SingleGame::ZukanState::drawLightEffect(Game::SingleGameSection*,
                                             Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stfd      f28, 0xB0(r1)
	  psq_st    f28,0xB8(r1),0,0
	  stfd      f27, 0xA0(r1)
	  psq_st    f27,0xA8(r1),0,0
	  stfd      f26, 0x90(r1)
	  psq_st    f26,0x98(r1),0,0
	  stfd      f25, 0x80(r1)
	  psq_st    f25,0x88(r1),0,0
	  stfd      f24, 0x70(r1)
	  psq_st    f24,0x78(r1),0,0
	  stfd      f23, 0x60(r1)
	  psq_st    f23,0x68(r1),0,0
	  stfd      f22, 0x50(r1)
	  psq_st    f22,0x58(r1),0,0
	  stmw      r25, 0x34(r1)
	  mr        r25, r3
	  mr        r26, r5
	  bl        -0x13CA94
	  lwz       r3, 0xB0(r25)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x1F0D90
	  mr        r3, r26
	  bl        0x203050
	  addi      r3, r26, 0xBC
	  lwz       r12, 0xBC(r26)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x98(r25)
	  lfs       f0, -0x4238(r2)
	  lfs       f2, 0x184(r3)
	  lfs       f1, 0x178(r3)
	  lfs       f4, 0x188(r3)
	  fsubs     f5, f2, f1
	  lfs       f3, 0x17C(r3)
	  lfs       f2, 0x180(r3)
	  lfs       f1, 0x174(r3)
	  fsubs     f3, f4, f3
	  fmuls     f4, f5, f5
	  fsubs     f1, f2, f1
	  fmuls     f2, f3, f3
	  fmadds    f1, f1, f1, f4
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF8
	  ble-      .loc_0xFC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xFC

	.loc_0xF8:
	  fmr       f1, f0

	.loc_0xFC:
	  lfs       f0, -0x4238(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x114
	  lfs       f0, -0x4244(r2)
	  fdivs     f0, f0, f1
	  fmuls     f5, f5, f0

	.loc_0x114:
	  lwz       r0, 0x9C(r25)
	  cmpwi     r0, 0x6
	  bne-      .loc_0x158
	  lis       r4, 0x8050
	  lwz       r3, 0x100(r25)
	  addi      r4, r4, 0x71A0
	  lfs       f0, -0x4224(r2)
	  lfs       f2, 0x388(r4)
	  lfs       f1, 0x1C0(r4)
	  fadds     f5, f5, f2
	  lbz       r30, 0x74(r3)
	  lbz       r29, 0x75(r3)
	  lbz       r28, 0x76(r3)
	  fdivs     f5, f5, f1
	  lbz       r27, 0x77(r3)
	  fadds     f5, f5, f0
	  b         .loc_0x184

	.loc_0x158:
	  lis       r4, 0x8050
	  lwz       r3, 0x100(r25)
	  addi      r4, r4, 0x71A0
	  lfs       f1, 0x2A8(r4)
	  lfs       f0, 0x1C0(r4)
	  fadds     f5, f5, f1
	  lbz       r30, 0x74(r3)
	  lbz       r29, 0x75(r3)
	  lbz       r28, 0x76(r3)
	  fdivs     f5, f5, f0
	  lbz       r27, 0x77(r3)

	.loc_0x184:
	  lfs       f0, -0x4238(r2)
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x198
	  fmr       f5, f0
	  b         .loc_0x1A8

	.loc_0x198:
	  lfs       f0, -0x4244(r2)
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x1A8
	  fmr       f5, f0

	.loc_0x1A8:
	  lfs       f2, 0x108(r25)
	  lwz       r3, 0x104(r25)
	  fsubs     f1, f5, f2
	  lfs       f0, -0x4238(r2)
	  lfs       f3, 0x1C(r3)
	  fmadds    f1, f3, f1, f2
	  stfs      f1, 0x108(r25)
	  lfs       f1, 0x108(r25)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x75C
	  lfs       f3, 0xBC(r25)
	  li        r4, 0
	  lfs       f2, 0xB4(r25)
	  lfs       f1, 0xC0(r25)
	  lfs       f0, 0xB8(r25)
	  fsubs     f27, f3, f2
	  lwz       r3, 0xB0(r25)
	  fsubs     f26, f1, f0
	  bl        -0x1F0F4C
	  li        r3, 0x1
	  bl        -0x13D720
	  li        r3, 0x1
	  bl        -0x13B9D4
	  li        r3, 0
	  li        r4, 0xF
	  li        r5, 0x2
	  li        r6, 0x8
	  li        r7, 0xF
	  bl        -0x13C09C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x3
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x13C030
	  li        r3, 0
	  li        r4, 0x7
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0x7
	  bl        -0x13C08C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x13BFFC
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  bl        -0x13BBEC
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        -0x13D788
	  bl        -0x13FF5C
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x1403B4
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x1403C0
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        -0x1403CC
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x13FF60
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x13FF78
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x13FF90
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x1
	  li        r6, 0xF
	  bl        -0x13B5D4
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x13B538
	  li        r3, 0
	  bl        -0x13B0AC
	  li        r3, 0x1
	  bl        -0x13F730
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0xC
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        -0x13F9CC
	  lfd       f28, -0x41D8(r2)
	  li        r26, 0
	  lfs       f29, -0x4170(r2)
	  lis       r31, 0x4330
	  lfs       f30, -0x4244(r2)
	  lfs       f31, -0x4238(r2)

	.loc_0x378:
	  xoris     r3, r26, 0x8000
	  addi      r0, r26, 0x1
	  stw       r3, 0x14(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f2, 0x108(r25)
	  stw       r31, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f1, f0, f28
	  stw       r31, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  fmuls     f1, f1, f29
	  fsubs     f0, f0, f28
	  fsubs     f1, f2, f1
	  fmuls     f0, f0, f29
	  fdivs     f2, f1, f0
	  fcmpo     cr0, f2, f30
	  ble-      .loc_0x3C4
	  fmr       f2, f30

	.loc_0x3C4:
	  fcmpo     cr0, f2, f31
	  ble-      .loc_0x750
	  rlwinm    r3,r27,0,24,31
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f1, -0x4178(r2)
	  stw       r0, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  fmuls     f1, f2, f0
	  fcmpo     cr0, f1, f31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x404
	  lfs       f0, -0x4218(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x40C

	.loc_0x404:
	  lfs       f0, -0x4218(r2)
	  fsubs     f0, f1, f0

	.loc_0x40C:
	  fctiwz    f0, f0
	  stb       r30, 0x8(r1)
	  addi      r4, r1, 0xC
	  li        r3, 0x1
	  stb       r29, 0x9(r1)
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stb       r28, 0xA(r1)
	  rlwinm    r27,r0,0,24,31
	  stb       r0, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        -0x13C168
	  addi      r3, r26, 0x1
	  lis       r0, 0x4330
	  xoris     r4, r3, 0x8000
	  stw       r0, 0x20(r1)
	  lfd       f1, -0x41D8(r2)
	  li        r3, 0x98
	  stw       r4, 0x24(r1)
	  li        r4, 0
	  lfs       f2, -0x416C(r2)
	  li        r5, 0x4
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  fmuls     f22, f2, f0
	  fneg      f24, f22
	  bl        -0x13EE7C
	  lfs       f3, -0x4238(r2)
	  lis       r6, 0xCC01
	  lfs       f1, -0x4244(r2)
	  li        r0, 0xFF
	  stfs      f3, -0x8000(r6)
	  fadds     f2, f27, f3
	  fadds     f25, f1, f22
	  li        r3, 0x98
	  stfs      f3, -0x8000(r6)
	  fadds     f0, f26, f3
	  fadds     f1, f1, f24
	  stfs      f3, -0x8000(r6)
	  li        r4, 0
	  li        r5, 0x4
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f3, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  bl        -0x13EF3C
	  lfs       f2, -0x4238(r2)
	  lis       r6, 0xCC01
	  lfs       f0, -0x4244(r2)
	  li        r0, 0xFF
	  stfs      f2, -0x8000(r6)
	  fadds     f1, f27, f2
	  fadds     f23, f0, f24
	  li        r3, 0x98
	  stfs      f2, -0x8000(r6)
	  fadds     f0, f26, f2
	  li        r4, 0
	  stfs      f2, -0x8000(r6)
	  li        r5, 0x4
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f24, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  stfs      f23, -0x8000(r6)
	  bl        -0x13EFF8
	  lfs       f2, -0x4238(r2)
	  lis       r6, 0xCC01
	  li        r0, 0xFF
	  li        r3, 0x98
	  stfs      f2, -0x8000(r6)
	  fadds     f1, f27, f2
	  fadds     f0, f26, f2
	  li        r4, 0
	  stfs      f2, -0x8000(r6)
	  li        r5, 0x4
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f22, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  stfs      f25, -0x8000(r6)
	  bl        -0x13F0AC
	  lfs       f2, -0x4238(r2)
	  lis       r3, 0xCC01
	  li        r0, 0xFF
	  stfs      f2, -0x8000(r3)
	  fadds     f1, f27, f2
	  fadds     f0, f26, f2
	  stfs      f2, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f24, -0x8000(r3)
	  stfs      f22, -0x8000(r3)
	  stfs      f1, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f23, -0x8000(r3)
	  stfs      f22, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stfs      f0, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f24, -0x8000(r3)
	  stfs      f25, -0x8000(r3)
	  stfs      f1, -0x8000(r3)
	  stfs      f0, -0x8000(r3)
	  stfs      f2, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stfs      f23, -0x8000(r3)
	  stfs      f25, -0x8000(r3)

	.loc_0x750:
	  addi      r26, r26, 0x1
	  cmpwi     r26, 0x4
	  blt+      .loc_0x378

	.loc_0x75C:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  psq_l     f27,0xA8(r1),0,0
	  lfd       f27, 0xA0(r1)
	  psq_l     f26,0x98(r1),0,0
	  lfd       f26, 0x90(r1)
	  psq_l     f25,0x88(r1),0,0
	  lfd       f25, 0x80(r1)
	  psq_l     f24,0x78(r1),0,0
	  lfd       f24, 0x70(r1)
	  psq_l     f23,0x68(r1),0,0
	  lfd       f23, 0x60(r1)
	  psq_l     f22,0x58(r1),0,0
	  lfd       f22, 0x50(r1)
	  lmw       r25, 0x34(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000404
 */
void SingleGame::ZukanState::debugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80224B4C
 * Size:	000994
 */
void SingleGame::ZukanState::dvdloadA(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x700(r1)
	  mflr      r0
	  stw       r0, 0x704(r1)
	  stmw      r25, 0x6E4(r1)
	  mr        r31, r3
	  lis       r3, 0x8048
	  addi      r30, r3, 0x2E60
	  lwz       r25, 0xD4(r31)
	  mr        r3, r25
	  bl        -0x2013BC
	  mr        r4, r25
	  li        r5, 0x1
	  bl        -0x204CB4
	  stw       r3, 0xD8(r31)
	  lwz       r3, 0xD8(r31)
	  bl        -0x2015E4
	  lwz       r0, 0x10C(r31)
	  lis       r4, 0x804C
	  addi      r4, r4, 0xA5C
	  subi      r5, r2, 0x4168
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r1, 0x160
	  lwzx      r6, r4, r0
	  addi      r4, r30, 0x240
	  crclr     6, 0x6
	  bl        -0x15D778
	  addi      r3, r1, 0x160
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x2
	  bl        -0x209A94
	  mr.       r29, r3
	  bne-      .loc_0x98
	  addi      r3, r30, 0x7C
	  addi      r5, r30, 0x90
	  li        r4, 0x999
	  crclr     6, 0x6
	  bl        -0x1FA5A0

	.loc_0x98:
	  lis       r3, 0x1
	  addi      r3, r3, 0x280
	  bl        -0x200D48
	  mr.       r0, r3
	  beq-      .loc_0xB4
	  bl        -0xF2A7C
	  mr        r0, r3

	.loc_0xB4:
	  stw       r0, 0x100(r31)
	  mr        r4, r29
	  lwz       r3, 0x100(r31)
	  bl        -0xF25AC
	  lwz       r3, 0x94(r31)
	  lwz       r4, 0x100(r31)
	  bl        -0xBFC68
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  addi      r3, r30, 0x264
	  addi      r5, r30, 0x90
	  li        r4, 0x76
	  crclr     6, 0x6
	  bl        -0x1FA5F8

	.loc_0xF0:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x164
	  li        r3, 0x30
	  bl        -0x200DA8
	  mr.       r5, r3
	  beq-      .loc_0x160
	  mr        r25, r5
	  bl        -0x1FE38C
	  lis       r3, 0x804B
	  addic.    r4, r25, 0xC
	  addi      r0, r3, 0xCE0
	  stw       r0, 0xC(r25)
	  beq-      .loc_0x12C
	  subi      r4, r4, 0xC

	.loc_0x12C:
	  stw       r4, -0x6E44(r13)
	  addi      r3, r25, 0x10
	  bl        -0x207CB4
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0xDF4
	  mr        r5, r25
	  stw       r3, 0x28(r25)
	  addi      r4, r3, 0x8
	  addi      r3, r3, 0x14
	  stw       r4, 0xC(r25)
	  stw       r3, 0x10(r25)
	  stw       r0, 0x2C(r25)

	.loc_0x160:
	  stw       r5, -0x6E44(r13)

	.loc_0x164:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x184
	  addi      r3, r30, 0x264
	  addi      r5, r30, 0x90
	  li        r4, 0x79
	  crclr     6, 0x6
	  bl        -0x1FA68C

	.loc_0x184:
	  bl        0x1FE554
	  lhz       r25, 0x4(r3)
	  bl        0x1FE54C
	  lis       r0, 0x4330
	  lhz       r4, 0x4(r3)
	  stw       r25, 0x69C(r1)
	  li        r3, 0x40
	  lfs       f6, -0x4238(r2)
	  stw       r0, 0x698(r1)
	  lfd       f4, -0x4178(r2)
	  lfd       f0, 0x698(r1)
	  stw       r4, 0x684(r1)
	  fsubs     f0, f0, f4
	  lfs       f1, -0x41C4(r2)
	  stw       r0, 0x680(r1)
	  lfs       f5, -0x41B8(r2)
	  lfd       f2, 0x680(r1)
	  fmuls     f0, f1, f0
	  lfs       f3, -0x4170(r2)
	  fsubs     f4, f2, f4
	  lfs       f1, -0x4218(r2)
	  fmuls     f0, f5, f0
	  stfs      f6, 0xB4(r31)
	  lfd       f2, -0x41D8(r2)
	  fmuls     f4, f5, f4
	  fmadds    f0, f0, f3, f1
	  stw       r0, 0x690(r1)
	  fmadds    f1, f4, f3, f1
	  stw       r0, 0x6A8(r1)
	  fctiwz    f0, f0
	  stfs      f6, 0xB8(r31)
	  fctiwz    f1, f1
	  stfd      f0, 0x6A0(r1)
	  stfd      f1, 0x688(r1)
	  lwz       r0, 0x6A4(r1)
	  lwz       r4, 0x68C(r1)
	  rlwinm    r0,r0,2,0,29
	  rlwinm    r4,r4,2,0,29
	  xoris     r4, r4, 0x8000
	  xoris     r0, r0, 0x8000
	  stw       r4, 0x694(r1)
	  stw       r0, 0x6AC(r1)
	  lfd       f1, 0x690(r1)
	  lfd       f0, 0x6A8(r1)
	  fsubs     f1, f1, f2
	  fsubs     f0, f0, f2
	  stfs      f1, 0xBC(r31)
	  stfs      f0, 0xC0(r31)
	  stfs      f6, 0xC4(r31)
	  stfs      f6, 0xC8(r31)
	  bl        -0x200EF4
	  mr.       r0, r3
	  beq-      .loc_0x294
	  lfs       f3, 0xBC(r31)
	  li        r6, 0x4
	  lfs       f2, 0xB4(r31)
	  lfs       f1, 0xC0(r31)
	  lfs       f0, 0xB8(r31)
	  fsubs     f2, f3, f2
	  fsubs     f0, f1, f0
	  fctiwz    f1, f2
	  fctiwz    f0, f0
	  stfd      f1, 0x6B0(r1)
	  stfd      f0, 0x6B8(r1)
	  lwz       r4, 0x6B4(r1)
	  lwz       r5, 0x6BC(r1)
	  bl        -0x1F1EBC
	  mr        r0, r3

	.loc_0x294:
	  stw       r0, 0xCC(r31)
	  li        r0, 0
	  li        r3, 0x40
	  lwz       r4, 0xCC(r31)
	  stb       r0, 0x32(r4)
	  lwz       r4, 0xCC(r31)
	  stb       r0, 0x33(r4)
	  bl        -0x200F58
	  mr.       r0, r3
	  beq-      .loc_0x310
	  lfs       f3, 0xBC(r31)
	  li        r6, 0x4
	  lfs       f2, 0xB4(r31)
	  lfs       f1, 0xC0(r31)
	  lfs       f0, 0xB8(r31)
	  fsubs     f2, f3, f2
	  fsubs     f0, f1, f0
	  fctiwz    f1, f2
	  fctiwz    f0, f0
	  stfd      f1, 0x6C0(r1)
	  stfd      f0, 0x6C8(r1)
	  lwz       r4, 0x6C4(r1)
	  lwz       r5, 0x6CC(r1)
	  rlwinm    r0,r4,1,31,31
	  add       r4, r0, r4
	  rlwinm    r0,r5,1,31,31
	  srawi     r4, r4, 0x1
	  add       r0, r0, r5
	  srawi     r5, r0, 0x1
	  bl        -0x1F1F38
	  mr        r0, r3

	.loc_0x310:
	  stw       r0, 0xB0(r31)
	  li        r0, 0
	  lwz       r3, 0xB0(r31)
	  stb       r0, 0x32(r3)
	  lwz       r3, 0xB0(r31)
	  stb       r0, 0x33(r3)
	  lwz       r3, 0x94(r31)
	  lwz       r4, 0xB0(r31)
	  bl        -0xD9D80
	  lfs       f0, 0xC4(r31)
	  li        r3, 0x324
	  lfs       f1, 0xC8(r31)
	  fctiwz    f0, f0
	  lwz       r4, 0x94(r31)
	  fctiwz    f1, f1
	  stfd      f0, 0x6D8(r1)
	  stfd      f1, 0x6D0(r1)
	  lwz       r0, 0x6DC(r1)
	  lwz       r5, 0x6D4(r1)
	  stw       r0, 0x15C(r4)
	  stw       r5, 0x160(r4)
	  lwz       r4, -0x6514(r13)
	  lwz       r25, 0x24(r4)
	  bl        -0x201014
	  mr.       r0, r3
	  beq-      .loc_0x384
	  lwz       r4, 0x90(r31)
	  bl        -0x3EA0
	  mr        r0, r3

	.loc_0x384:
	  stw       r0, 0x98(r31)
	  lwz       r3, 0x104(r31)
	  lwz       r4, 0x98(r31)
	  bl        0x1EC52C
	  li        r3, 0x3C
	  bl        -0x201040
	  mr.       r0, r3
	  beq-      .loc_0x3AC
	  bl        0x2BA98
	  mr        r0, r3

	.loc_0x3AC:
	  stw       r0, -0x6960(r13)
	  mr        r3, r0
	  bl        0x2BAD0
	  lwz       r3, -0x6960(r13)
	  lwz       r4, 0x98(r31)
	  bl        0x2D904
	  lwz       r3, 0x94(r31)
	  lwz       r4, -0x6960(r13)
	  bl        -0xBFF68
	  li        r3, 0x18
	  bl        -0x20107C
	  mr.       r0, r3
	  beq-      .loc_0x3EC
	  mr        r4, r25
	  bl        0x1FFF60
	  mr        r0, r3

	.loc_0x3EC:
	  mr        r3, r0
	  lfs       f1, -0x4244(r2)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r25
	  li        r4, 0
	  bl        0x200698
	  mr        r0, r3
	  mr        r3, r25
	  mr        r26, r0
	  li        r4, 0x1
	  bl        0x200684
	  lwz       r0, 0x98(r31)
	  mr        r27, r3
	  mr        r3, r26
	  stw       r0, 0x44(r26)
	  bl        0x200310
	  lwz       r0, 0x98(r31)
	  mr        r3, r27
	  stw       r0, 0x44(r27)
	  bl        0x200300
	  lfs       f1, 0xC4(r31)
	  mr        r3, r26
	  lfs       f0, -0x4244(r2)
	  addi      r4, r31, 0xB4
	  stfs      f1, 0x48(r26)
	  lfs       f1, 0xC8(r31)
	  stfs      f1, 0x4C(r26)
	  stfs      f0, 0x50(r26)
	  stfs      f0, 0x54(r26)
	  bl        0x2003C8
	  lwz       r3, -0x65E8(r13)
	  mr        r4, r25
	  bl        0x196B64
	  lwz       r3, -0x65E8(r13)
	  bl        0x19674C
	  li        r3, 0x50
	  bl        -0x201130
	  mr.       r0, r3
	  beq-      .loc_0x4A0
	  li        r4, 0x2
	  bl        0x1C3E0
	  mr        r0, r3

	.loc_0x4A0:
	  stw       r0, -0x6980(r13)
	  li        r4, 0
	  lwz       r3, -0x6514(r13)
	  lwz       r25, 0x24(r3)
	  mr        r3, r25
	  bl        0x2005F0
	  mr        r0, r3
	  mr        r3, r25
	  mr        r25, r0
	  li        r4, 0x1
	  bl        0x2005DC
	  mr        r0, r3
	  lwz       r3, -0x6980(r13)
	  mr        r26, r0
	  mr        r4, r25
	  li        r5, 0
	  bl        0x1C62C
	  lwz       r3, -0x6980(r13)
	  mr        r4, r26
	  li        r5, 0x1
	  bl        0x1C61C
	  lwz       r3, 0x94(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x108(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6958(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x560
	  li        r3, 0x34
	  bl        -0x2011C0
	  mr.       r0, r3
	  beq-      .loc_0x52C
	  bl        0x2E294
	  mr        r0, r3

	.loc_0x52C:
	  stw       r0, -0x6958(r13)
	  mr        r3, r0
	  bl        0x2E2CC
	  lwz       r3, -0x6958(r13)
	  bl        0x2E41C
	  lwz       r5, 0x98(r31)
	  lwz       r3, -0x6958(r13)
	  lwz       r4, 0x90(r31)
	  addi      r5, r5, 0x174
	  bl        0x2EAD8
	  lwz       r3, 0x94(r31)
	  lwz       r4, -0x6958(r13)
	  bl        -0xC00F8

	.loc_0x560:
	  addi      r3, r1, 0x28
	  bl        0x110400
	  li        r0, 0x1
	  stb       r0, 0x2F(r1)
	  lwz       r3, 0x98(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  lwz       r3, 0x98(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)
	  lwz       r3, 0x98(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, -0x4164(r2)
	  li        r4, 0
	  lfs       f0, -0x4160(r2)
	  li        r5, 0x1
	  stw       r3, 0x40(r1)
	  addi      r3, r1, 0x28
	  stfs      f1, 0x48(r1)
	  stfs      f1, 0x4C(r1)
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  bl        0x1103B8
	  lwz       r0, -0x6780(r13)
	  li        r3, 0xD
	  stb       r3, 0x2E(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x610
	  addi      r3, r30, 0x190
	  addi      r5, r30, 0x90
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1FAB18

	.loc_0x610:
	  lwz       r3, -0x6780(r13)
	  addi      r4, r1, 0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x648
	  addi      r3, r30, 0x190
	  addi      r5, r30, 0x90
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1FAB50

	.loc_0x648:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x66C
	  addi      r3, r30, 0x19C
	  addi      r5, r30, 0x90
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1FAB74

	.loc_0x66C:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x6A4
	  addi      r3, r30, 0x190
	  addi      r5, r30, 0x90
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1FABAC

	.loc_0x6A4:
	  lwz       r25, -0x6780(r13)
	  lwz       r0, 0x4(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C8
	  addi      r3, r30, 0x19C
	  addi      r5, r30, 0x90
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x1FABD0

	.loc_0x6C8:
	  lwz       r3, 0x4(r25)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  addi      r4, r30, 0x270
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r25, r3
	  bne-      .loc_0x714
	  addi      r3, r30, 0x7C
	  addi      r5, r30, 0x90
	  li        r4, 0xA2B
	  crclr     6, 0x6
	  bl        -0x1FAC1C

	.loc_0x714:
	  mr        r4, r25
	  addi      r3, r1, 0x260
	  li        r5, -0x1
	  bl        0x1F068C
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x26C(r1)
	  bne-      .loc_0x73C
	  li        r0, 0
	  stw       r0, 0x674(r1)

	.loc_0x73C:
	  li        r3, 0x100
	  bl        -0x2013E8
	  mr.       r0, r3
	  beq-      .loc_0x754
	  bl        -0x77E60
	  mr        r0, r3

	.loc_0x754:
	  stw       r0, 0x8C(r31)
	  addi      r4, r1, 0x260
	  lwz       r3, 0x8C(r31)
	  bl        -0x77D1C
	  lwz       r3, 0x8C(r31)
	  bl        -0x77D28
	  lwz       r3, 0x8C(r31)
	  li        r4, 0
	  bl        -0x772A0
	  li        r3, 0x48
	  bl        -0x201424
	  mr.       r5, r3
	  beq-      .loc_0x790
	  bl        -0xCD018
	  mr        r5, r3

	.loc_0x790:
	  lfs       f1, -0x415C(r2)
	  li        r0, 0
	  lfs       f0, -0x4158(r2)
	  addi      r4, r1, 0x18
	  stw       r5, -0x6D38(r13)
	  lwz       r3, -0x6CF8(r13)
	  stw       r0, -0x6D34(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x77D4(r13)
	  bl        -0x201B68
	  lwz       r3, -0x6D38(r13)
	  addi      r4, r1, 0x18
	  lfs       f1, -0x4154(r2)
	  bl        -0xCC920
	  lwz       r4, -0x6CF8(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x7F4
	  lwz       r4, 0x0(r4)

	.loc_0x7F4:
	  lwz       r3, -0x6C18(r13)
	  bl        -0x6F3FC
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0x2
	  bl        -0xD361C
	  li        r4, 0
	  li        r6, -0x1
	  stw       r4, 0x10(r1)
	  li        r3, 0x40
	  lwz       r0, -0x77D4(r13)
	  stw       r4, 0xC(r1)
	  lwz       r5, -0x6AE0(r13)
	  stw       r4, 0x8(r1)
	  lwz       r4, -0x6AD8(r13)
	  stb       r6, 0x14(r1)
	  stw       r0, 0x10(r1)
	  lwz       r0, 0x8(r5)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x8(r4)
	  stw       r0, 0xC(r1)
	  bl        -0x2014EC
	  mr.       r0, r3
	  beq-      .loc_0x858
	  bl        0x207C
	  mr        r0, r3

	.loc_0x858:
	  stw       r0, 0xE8(r31)
	  addi      r4, r1, 0x8
	  lwz       r3, 0xE8(r31)
	  bl        0x2118
	  li        r3, 0x40
	  bl        -0x201514
	  mr.       r28, r3
	  beq-      .loc_0x894
	  mr        r25, r28
	  bl        0xE244
	  lis       r4, 0x804C
	  addi      r3, r25, 0x20
	  addi      r0, r4, 0xD98
	  stw       r0, 0x0(r25)
	  bl        0xE0A8

	.loc_0x894:
	  stw       r28, 0xEC(r31)
	  li        r4, 0x66
	  lwz       r25, 0xEC(r31)
	  mr        r3, r25
	  bl        0xE2F0
	  addi      r3, r25, 0x20
	  addi      r4, r30, 0x44
	  bl        0xE15C
	  addi      r3, r25, 0x20
	  addi      r4, r30, 0x68
	  bl        0xE1D4
	  mr.       r26, r3
	  bne-      .loc_0x8DC
	  addi      r3, r30, 0x7C
	  addi      r5, r30, 0x90
	  li        r4, 0x1D2
	  crclr     6, 0x6
	  bl        -0x1FADE4

	.loc_0x8DC:
	  li        r27, 0
	  lis       r28, 0x1

	.loc_0x8E4:
	  mr        r3, r27
	  subi      r4, r28, 0x1
	  bl        -0x10215C
	  cmplwi    r3, 0
	  beq-      .loc_0x944
	  mr        r5, r3
	  addi      r3, r1, 0x60
	  addi      r4, r30, 0x9C
	  crclr     6, 0x6
	  bl        -0x15E01C
	  addi      r3, r25, 0x20
	  addi      r4, r1, 0x60
	  bl        0xE17C
	  mr.       r5, r3
	  beq-      .loc_0x930
	  mr        r3, r25
	  mr        r4, r27
	  bl        0xE2F0
	  b         .loc_0x954

	.loc_0x930:
	  mr        r3, r25
	  mr        r4, r27
	  mr        r5, r26
	  bl        0xE2DC
	  b         .loc_0x954

	.loc_0x944:
	  mr        r3, r25
	  mr        r4, r27
	  mr        r5, r26
	  bl        0xE2C8

	.loc_0x954:
	  addi      r27, r27, 0x1
	  cmpwi     r27, 0x66
	  blt+      .loc_0x8E4
	  lwz       r0, 0x98(r31)
	  mr        r3, r29
	  stw       r0, -0x6DAC(r13)
	  stw       r31, -0x6DB0(r13)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lmw       r25, 0x6E4(r1)
	  lwz       r0, 0x704(r1)
	  mtlr      r0
	  addi      r1, r1, 0x700
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802254E0
 * Size:	0000E4
 */
void SingleGame::ZukanState::createTeki(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x2E60
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  addi      r3, r31, 0x190
	  addi      r5, r31, 0x90
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1FAEE0

	.loc_0x44:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x64
	  addi      r3, r31, 0x190
	  addi      r5, r31, 0x90
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x1FAF00

	.loc_0x64:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  addi      r3, r31, 0x19C
	  addi      r5, r31, 0x90
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x1FAF20

	.loc_0x84:
	  lwz       r3, 0x4(r30)
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  bne-      .loc_0xA8
	  addi      r3, r31, 0x19C
	  addi      r5, r31, 0x1A8
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x1FAF44

	.loc_0xA8:
	  mr        r3, r30
	  bl        0x2428D4
	  lwz       r3, -0x6514(r13)
	  addi      r4, r29, 0x1C
	  lwz       r5, 0x14(r29)
	  bl        0x1FD99C
	  li        r0, 0
	  stb       r0, 0x88(r29)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802255C4
 * Size:	000040
 */
void SingleGame::ZukanState::createPellet(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r4, r31, 0x1C
	  lwz       r3, -0x6514(r13)
	  lwz       r5, 0x18(r31)
	  bl        0x1FD954
	  li        r0, 0
	  stb       r0, 0x88(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void SingleGame::ZukanState::dvdloadB_common(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80225604
 * Size:	000CDC
 */
void SingleGame::ZukanState::dvdloadB_teki(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x180(r1)
	  mflr      r0
	  stw       r0, 0x184(r1)
	  stfd      f31, 0x170(r1)
	  psq_st    f31,0x178(r1),0,0
	  stfd      f30, 0x160(r1)
	  psq_st    f30,0x168(r1),0,0
	  stfd      f29, 0x150(r1)
	  psq_st    f29,0x158(r1),0,0
	  stfd      f28, 0x140(r1)
	  psq_st    f28,0x148(r1),0,0
	  stfd      f27, 0x130(r1)
	  psq_st    f27,0x138(r1),0,0
	  stfd      f26, 0x120(r1)
	  psq_st    f26,0x128(r1),0,0
	  stmw      r20, 0xF0(r1)
	  mr        r31, r3
	  lis       r4, 0x8048
	  lwz       r0, 0xDC(r3)
	  addi      r30, r4, 0x2E60
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  lwz       r0, -0x6E20(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  bl        0x11B8
	  b         .loc_0x8C

	.loc_0x6C:
	  lwz       r0, 0xAC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  bl        0x1560
	  b         .loc_0x8C

	.loc_0x80:
	  bl        0x110C
	  lwz       r3, 0xD8(r31)
	  bl        -0x2020E8

	.loc_0x8C:
	  lwz       r3, 0xD8(r31)
	  bl        -0x201EE0
	  stw       r3, 0xE4(r31)
	  subi      r3, r2, 0x4150
	  crclr     6, 0x6
	  bl        -0x137FB8
	  lwz       r4, 0xE4(r31)
	  addi      r3, r30, 0x27C
	  crclr     6, 0x6
	  bl        -0x137FC8
	  lwz       r21, 0xD8(r31)
	  mr        r3, r21
	  bl        -0x201F0C
	  mr        r4, r21
	  li        r5, 0x1
	  bl        -0x205804
	  stw       r3, 0xDC(r31)
	  lwz       r3, 0xDC(r31)
	  bl        -0x202134
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0x64
	  bl        -0xD3824
	  lwz       r4, 0x94(r31)
	  lwz       r3, -0x65E8(r13)
	  lwz       r0, 0x128(r4)
	  stw       r0, 0x18(r3)
	  lwz       r3, -0x65E8(r13)
	  bl        0x19601C
	  lwz       r0, 0xA0(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x14C
	  lwz       r3, -0x77D4(r13)
	  bl        -0x201F5C
	  mr        r4, r3
	  addi      r3, r30, 0x28C
	  crclr     6, 0x6
	  bl        -0x138034
	  lwz       r3, -0x6B08(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x77D4(r13)
	  bl        -0x201F88
	  mr        r4, r3
	  addi      r3, r30, 0x2C0
	  crclr     6, 0x6
	  bl        -0x138060

	.loc_0x14C:
	  lwz       r0, -0x6E20(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  addi      r3, r30, 0x7C
	  addi      r5, r30, 0x90
	  li        r4, 0xABB
	  crclr     6, 0x6
	  bl        -0x1FB12C

	.loc_0x16C:
	  li        r3, 0x90
	  bl        -0x2018D0
	  mr.       r4, r3
	  beq-      .loc_0x184
	  bl        -0x118A98
	  mr        r4, r3

	.loc_0x184:
	  stw       r4, -0x6E20(r13)
	  lwz       r3, -0x6C18(r13)
	  bl        -0x6F848
	  lwz       r3, 0xA0(r31)
	  cmpwi     r3, -0x1
	  beq-      .loc_0xBEC
	  cmpwi     r3, 0
	  li        r0, 0
	  blt-      .loc_0x1B4
	  cmpwi     r3, 0x66
	  bge-      .loc_0x1B4
	  li        r0, 0x1

	.loc_0x1B4:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x1D0
	  addi      r3, r30, 0x7C
	  addi      r5, r30, 0x90
	  li        r4, 0xAC1
	  crclr     6, 0x6
	  bl        -0x1FB190

	.loc_0x1D0:
	  lwz       r0, 0xA0(r31)
	  li        r5, 0
	  lwz       r4, 0x100(r31)
	  mulli     r3, r0, 0x274
	  addi      r26, r3, 0x828
	  add       r26, r4, r26
	  lbz       r0, 0xA0(r26)
	  cmplwi    r0, 0xA
	  bge-      .loc_0x1FC
	  mr        r5, r0
	  b         .loc_0x204

	.loc_0x1FC:
	  li        r0, 0
	  stb       r0, 0xA0(r26)

	.loc_0x204:
	  mulli     r3, r5, 0xC0
	  lwz       r0, 0x8C(r26)
	  lwz       r4, 0x100(r31)
	  lfs       f31, 0x64(r26)
	  rlwinm    r25,r0,0,24,31
	  addi      r5, r3, 0x90
	  add       r5, r4, r5
	  lwz       r3, -0x77D4(r13)
	  lfs       f28, 0x8C(r5)
	  lfs       f29, 0x64(r5)
	  lfs       f30, 0x3C(r5)
	  bl        -0x202080
	  mr        r5, r3
	  mr        r4, r25
	  addi      r3, r30, 0x2D4
	  crclr     6, 0x6
	  bl        -0x13815C
	  lwz       r3, -0x6B70(r13)
	  li        r24, 0
	  lwz       r4, 0xA0(r31)
	  addi      r3, r3, 0x40
	  bl        0xE268
	  cmplwi    r3, 0
	  beq-      .loc_0x274
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0x10
	  ble-      .loc_0x274
	  li        r24, 0x1

	.loc_0x274:
	  rlwinm.   r0,r24,0,24,31
	  beq-      .loc_0x2B0
	  lwz       r0, 0xA0(r31)
	  cmpwi     r0, 0x2A
	  bge-      .loc_0x294
	  cmpwi     r0, 0x2
	  beq-      .loc_0x29C
	  b         .loc_0x2B0

	.loc_0x294:
	  cmpwi     r0, 0x2C
	  bge-      .loc_0x2B0

	.loc_0x29C:
	  lwz       r3, -0x6E20(r13)
	  li        r4, 0x4D
	  li        r5, 0x5
	  li        r6, 0
	  bl        -0x11805C

	.loc_0x2B0:
	  lwz       r3, -0x6E20(r13)
	  mr        r5, r25
	  lwz       r4, 0xA0(r31)
	  li        r6, 0
	  bl        -0x118070
	  lis       r4, 0x10
	  lwz       r3, -0x6E20(r13)
	  subi      r5, r4, 0x6000
	  li        r4, 0x1
	  bl        -0x1182E0
	  lwz       r3, -0x6E20(r13)
	  bl        -0x11892C
	  lfs       f1, 0x3C(r26)
	  lfs       f0, -0x4238(r2)
	  lfs       f27, -0x414C(r2)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x2F8
	  fmr       f27, f1

	.loc_0x2F8:
	  mulli     r3, r25, 0xC
	  addi      r3, r3, 0x10
	  bl        -0x201958
	  lis       r4, 0x8012
	  mr        r7, r25
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  bl        -0x163F2C
	  mulli     r4, r25, 0xC
	  mr        r29, r3
	  addi      r3, r4, 0x10
	  bl        -0x201980
	  lis       r4, 0x8012
	  mr        r7, r25
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  bl        -0x163F54
	  mr        r27, r29
	  mr        r28, r3
	  li        r23, 0
	  b         .loc_0x470

	.loc_0x354:
	  cmpwi     r23, 0
	  bne-      .loc_0x370
	  lfs       f0, -0x4238(r2)
	  stfs      f0, 0x0(r27)
	  stfs      f0, 0x4(r27)
	  stfs      f0, 0x8(r27)
	  b         .loc_0x468

	.loc_0x370:
	  bl        -0x15C3D4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xBC(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0xB8(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0xB8(r1)
	  lfs       f0, -0x41C0(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f26, f0, f1
	  bl        -0x15C404
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC4(r1)
	  fmr       f3, f26
	  lfs       f0, -0x4238(r2)
	  stw       r0, 0xC0(r1)
	  lfd       f2, -0x41D8(r2)
	  fcmpo     cr0, f26, f0
	  lfd       f1, 0xC0(r1)
	  lfs       f0, -0x41E8(r2)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  fmuls     f4, f31, f0
	  bge-      .loc_0x3E0
	  fneg      f3, f26

	.loc_0x3E0:
	  lfs       f2, -0x41CC(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x4238(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f3, f2
	  fcmpo     cr0, f26, f0
	  fctiwz    f0, f1
	  stfd      f0, 0xC8(r1)
	  lwz       r0, 0xCC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f3, f4, f0
	  bge-      .loc_0x43C
	  lfs       f0, -0x41C8(r2)
	  fmuls     f0, f26, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xD0(r1)
	  lwz       r0, 0xD4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x454

	.loc_0x43C:
	  fmuls     f0, f26, f2
	  fctiwz    f0, f0
	  stfd      f0, 0xD8(r1)
	  lwz       r0, 0xDC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x454:
	  fmuls     f1, f4, f0
	  lfs       f0, -0x4238(r2)
	  stfs      f1, 0x0(r27)
	  stfs      f0, 0x4(r27)
	  stfs      f3, 0x8(r27)

	.loc_0x468:
	  addi      r27, r27, 0xC
	  addi      r23, r23, 0x1

	.loc_0x470:
	  cmpw      r23, r25
	  blt+      .loc_0x354
	  lfs       f31, -0x4238(r2)
	  subi      r27, r25, 0x8
	  li        r23, 0

	.loc_0x484:
	  cmpwi     r25, 0
	  li        r4, 0
	  ble-      .loc_0x554
	  cmpwi     r25, 0x8
	  ble-      .loc_0x520
	  addi      r0, r27, 0x7
	  mr        r3, r28
	  rlwinm    r0,r0,29,3,31
	  lfs       f0, -0x4238(r2)
	  mtctr     r0
	  cmpwi     r27, 0
	  ble-      .loc_0x520

	.loc_0x4B4:
	  stfs      f0, 0x8(r3)
	  addi      r4, r4, 0x8
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x0(r3)
	  stfs      f0, 0x14(r3)
	  stfs      f0, 0x10(r3)
	  stfs      f0, 0xC(r3)
	  stfs      f0, 0x20(r3)
	  stfs      f0, 0x1C(r3)
	  stfs      f0, 0x18(r3)
	  stfs      f0, 0x2C(r3)
	  stfs      f0, 0x28(r3)
	  stfs      f0, 0x24(r3)
	  stfs      f0, 0x38(r3)
	  stfs      f0, 0x34(r3)
	  stfs      f0, 0x30(r3)
	  stfs      f0, 0x44(r3)
	  stfs      f0, 0x40(r3)
	  stfs      f0, 0x3C(r3)
	  stfs      f0, 0x50(r3)
	  stfs      f0, 0x4C(r3)
	  stfs      f0, 0x48(r3)
	  stfs      f0, 0x5C(r3)
	  stfs      f0, 0x58(r3)
	  stfs      f0, 0x54(r3)
	  addi      r3, r3, 0x60
	  bdnz+     .loc_0x4B4

	.loc_0x520:
	  mulli     r3, r4, 0xC
	  sub       r0, r25, r4
	  lfs       f0, -0x4238(r2)
	  add       r3, r28, r3
	  mtctr     r0
	  cmpw      r4, r25
	  bge-      .loc_0x554

	.loc_0x53C:
	  stfs      f0, 0x8(r3)
	  addi      r4, r4, 0x1
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x0(r3)
	  addi      r3, r3, 0xC
	  bdnz+     .loc_0x53C

	.loc_0x554:
	  mr        r5, r29
	  mr        r6, r28
	  li        r7, 0
	  b         .loc_0x6AC

	.loc_0x564:
	  addi      r8, r7, 0x1
	  mulli     r4, r8, 0xC
	  sub       r0, r25, r8
	  add       r3, r29, r4
	  add       r4, r28, r4
	  mtctr     r0
	  cmpw      r8, r25
	  bge-      .loc_0x6A0

	.loc_0x584:
	  lfs       f1, 0x4(r5)
	  lfs       f0, 0x4(r3)
	  lfs       f2, 0x8(r5)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x8(r3)
	  lfs       f3, 0x0(r5)
	  fsubs     f1, f2, f1
	  lfs       f2, 0x0(r3)
	  fmuls     f5, f0, f0
	  fsubs     f6, f3, f2
	  fmuls     f7, f1, f1
	  fmadds    f2, f6, f6, f5
	  fadds     f8, f7, f2
	  fcmpo     cr0, f8, f31
	  ble-      .loc_0x5D8
	  ble-      .loc_0x5D0
	  fsqrte    f2, f8
	  fmuls     f4, f2, f8
	  b         .loc_0x5DC

	.loc_0x5D0:
	  fmr       f4, f8
	  b         .loc_0x5DC

	.loc_0x5D8:
	  fmr       f4, f31

	.loc_0x5DC:
	  fcmpo     cr0, f4, f27
	  bge-      .loc_0x690
	  lfs       f3, -0x4238(r2)
	  fcmpo     cr0, f8, f3
	  ble-      .loc_0x60C
	  fmadds    f2, f6, f6, f5
	  fadds     f5, f7, f2
	  fcmpo     cr0, f5, f3
	  ble-      .loc_0x610
	  fsqrte    f2, f5
	  fmuls     f5, f2, f5
	  b         .loc_0x610

	.loc_0x60C:
	  fmr       f5, f3

	.loc_0x610:
	  lfs       f2, -0x4238(r2)
	  fcmpo     cr0, f5, f2
	  ble-      .loc_0x630
	  lfs       f2, -0x4244(r2)
	  fdivs     f2, f2, f5
	  fmuls     f6, f6, f2
	  fmuls     f0, f0, f2
	  fmuls     f1, f1, f2

	.loc_0x630:
	  fsubs     f3, f27, f4
	  lfs       f4, -0x4218(r2)
	  lfs       f2, 0x0(r6)
	  fmuls     f3, f4, f3
	  fmuls     f6, f6, f3
	  fmuls     f0, f0, f3
	  fmuls     f1, f1, f3
	  fadds     f2, f2, f6
	  stfs      f2, 0x0(r6)
	  lfs       f2, 0x4(r6)
	  fadds     f2, f2, f0
	  stfs      f2, 0x4(r6)
	  lfs       f2, 0x8(r6)
	  fadds     f2, f2, f1
	  stfs      f2, 0x8(r6)
	  lfs       f2, 0x0(r4)
	  fsubs     f2, f2, f6
	  stfs      f2, 0x0(r4)
	  lfs       f2, 0x4(r4)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x8(r4)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x8(r4)

	.loc_0x690:
	  addi      r3, r3, 0xC
	  addi      r4, r4, 0xC
	  addi      r8, r8, 0x1
	  bdnz+     .loc_0x584

	.loc_0x6A0:
	  addi      r5, r5, 0xC
	  addi      r6, r6, 0xC
	  addi      r7, r7, 0x1

	.loc_0x6AC:
	  cmpw      r7, r25
	  blt+      .loc_0x564
	  mr        r22, r28
	  mr        r21, r29
	  li        r20, 0
	  b         .loc_0x71C

	.loc_0x6C4:
	  lfs       f1, 0x0(r21)
	  mr        r4, r21
	  lfs       f0, 0x0(r22)
	  fadds     f0, f1, f0
	  stfs      f0, 0x0(r21)
	  lfs       f1, 0x4(r21)
	  lfs       f0, 0x4(r22)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r21)
	  lfs       f1, 0x8(r21)
	  lfs       f0, 0x8(r22)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r21)
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x4(r21)
	  addi      r22, r22, 0xC
	  addi      r21, r21, 0xC
	  addi      r20, r20, 0x1

	.loc_0x71C:
	  cmpw      r20, r25
	  blt+      .loc_0x6C4
	  addi      r23, r23, 0x1
	  cmpwi     r23, 0x5
	  blt+      .loc_0x484
	  mr        r21, r29
	  li        r20, 0
	  b         .loc_0x828

	.loc_0x73C:
	  addi      r3, r1, 0x84
	  bl        -0xF7120
	  cmpwi     r20, 0
	  bne-      .loc_0x758
	  lfs       f0, -0x4238(r2)
	  stfs      f0, 0x90(r1)
	  b         .loc_0x78C

	.loc_0x758:
	  bl        -0x15C7BC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xDC(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0xD8(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0xD8(r1)
	  lfs       f0, -0x41C0(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x90(r1)

	.loc_0x78C:
	  lfs       f0, 0x0(r21)
	  addi      r4, r1, 0x84
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x84(r1)
	  fadds     f2, f0, f30
	  lfs       f0, 0x4(r21)
	  stfs      f0, 0x88(r1)
	  fadds     f1, f0, f29
	  lfs       f3, 0x8(r21)
	  fadds     f0, f3, f28
	  stfs      f3, 0x8C(r1)
	  stfs      f2, 0x84(r1)
	  stfs      f1, 0x88(r1)
	  stfs      f0, 0x8C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x88(r1)
	  addi      r5, r1, 0x84
	  lwz       r3, -0x6E20(r13)
	  lwz       r4, 0xA0(r31)
	  bl        -0x118928
	  mr.       r23, r3
	  bne-      .loc_0x80C
	  lwz       r6, 0xA0(r31)
	  addi      r3, r30, 0x7C
	  addi      r5, r30, 0x2F4
	  li        r4, 0xB3F
	  crclr     6, 0x6
	  bl        -0x1FB7C8
	  b         .loc_0x820

	.loc_0x80C:
	  li        r4, 0
	  bl        -0xEAE4C
	  cmpwi     r20, 0
	  bne-      .loc_0x820
	  stw       r23, 0xA4(r31)

	.loc_0x820:
	  addi      r21, r21, 0xC
	  addi      r20, r20, 0x1

	.loc_0x828:
	  cmpw      r20, r25
	  blt+      .loc_0x73C
	  mr        r3, r29
	  bl        -0x201D84
	  mr        r3, r28
	  bl        -0x201D8C
	  rlwinm.   r0,r24,0,24,31
	  beq-      .loc_0x90C
	  lwz       r0, 0xA0(r31)
	  cmpwi     r0, 0x2A
	  bge-      .loc_0x860
	  cmpwi     r0, 0x2
	  beq-      .loc_0x868
	  b         .loc_0x90C

	.loc_0x860:
	  cmpwi     r0, 0x2C
	  bge-      .loc_0x90C

	.loc_0x868:
	  lwz       r3, -0x6E20(r13)
	  li        r4, 0x4D
	  bl        -0x1181D0
	  mr.       r20, r3
	  beq-      .loc_0x90C
	  addi      r3, r1, 0x50
	  bl        -0xF7260
	  lwz       r4, 0xA4(r31)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x24(r1)
	  lfs       f0, -0x4228(r2)
	  lfs       f3, 0x20(r1)
	  lfs       f1, 0x28(r1)
	  fadds     f0, f2, f0
	  stfs      f2, 0x54(r1)
	  stfs      f3, 0x50(r1)
	  stfs      f1, 0x58(r1)
	  stfs      f0, 0x54(r1)
	  bl        -0x15C924
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xDC(r1)
	  mr        r3, r20
	  lfd       f3, -0x41D8(r2)
	  addi      r4, r1, 0x50
	  stw       r0, 0xD8(r1)
	  li        r6, 0x5
	  lfs       f1, -0x41E8(r2)
	  li        r7, 0
	  lfd       f2, 0xD8(r1)
	  lfs       f0, -0x41C0(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x5C(r1)
	  lwz       r5, 0xA4(r31)
	  bl        0x163364

	.loc_0x90C:
	  lwz       r3, 0x98(r31)
	  lwz       r4, 0xA4(r31)
	  bl        -0x4A0C
	  lfs       f4, 0x1B8(r26)
	  li        r23, 0
	  lfs       f3, 0x190(r26)
	  lwz       r3, 0x98(r31)
	  lfs       f0, 0x168(r26)
	  lfs       f1, -0x4144(r2)
	  stfs      f0, 0x1E4(r3)
	  lfs       f2, -0x4148(r2)
	  stfs      f3, 0x1E8(r3)
	  stfs      f4, 0x1EC(r3)
	  lfs       f0, 0xC8(r26)
	  lwz       r3, 0x98(r31)
	  stfs      f0, 0x1C8(r3)
	  lfs       f0, 0xF0(r26)
	  lwz       r3, 0x98(r31)
	  stfs      f0, 0x1CC(r3)
	  lfs       f3, 0x140(r26)
	  lwz       r3, 0x98(r31)
	  lfs       f0, 0x118(r26)
	  stfs      f0, 0x1D0(r3)
	  stfs      f3, 0x1D4(r3)
	  lfs       f4, 0x230(r26)
	  lfs       f3, 0x208(r26)
	  lfs       f0, 0x1E0(r26)
	  lwz       r3, 0x98(r31)
	  stfs      f0, 0x28(r3)
	  stfs      f0, 0x288(r3)
	  stfs      f3, 0x28C(r3)
	  stfs      f4, 0x290(r3)
	  lfs       f0, 0x258(r26)
	  lwz       r3, 0x98(r31)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x1C4(r3)
	  lwz       r0, 0xA0(r31)
	  cmpwi     r0, 0x22
	  beq-      .loc_0x9D0
	  bge-      .loc_0x9C4
	  cmpwi     r0, 0xF
	  bge-      .loc_0x9D4
	  cmpwi     r0, 0xC
	  bge-      .loc_0x9D0
	  b         .loc_0x9D4

	.loc_0x9C4:
	  cmpwi     r0, 0x46
	  beq-      .loc_0x9D0
	  b         .loc_0x9D4

	.loc_0x9D0:
	  li        r23, 0xA

	.loc_0x9D4:
	  cmpwi     r23, 0
	  ble-      .loc_0xC98
	  li        r24, 0
	  b         .loc_0xBE0

	.loc_0x9E4:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r25, r3
	  beq-      .loc_0xBDC
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r5, 0x5D0C
	  li        r5, 0x20
	  stw       r0, 0x44(r1)
	  addi      r6, r4, 0x10F4
	  li        r0, 0
	  addi      r4, r1, 0x44
	  stw       r6, 0x44(r1)
	  stw       r5, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  bl        -0xEB068
	  mr        r3, r25
	  li        r4, 0x6
	  bl        -0xDBA7C
	  lwz       r4, 0x98(r31)
	  addi      r3, r1, 0x14
	  bl        0x1F4A50
	  lfs       f28, 0x14(r1)
	  addi      r3, r1, 0x8
	  lfs       f29, 0x18(r1)
	  lfs       f30, 0x1C(r1)
	  lwz       r4, 0x98(r31)
	  bl        0x1F4274
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  fmuls     f3, f0, f0
	  lfs       f1, 0x8(r1)
	  fmuls     f2, f2, f2
	  lfs       f0, -0x4238(r2)
	  fmadds    f1, f1, f1, f3
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bl        -0x15CAE8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xDC(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0xD8(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0xD8(r1)
	  lfs       f0, -0x41C0(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f26, f0, f1
	  bl        -0x15CB18
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xD4(r1)
	  fmr       f3, f26
	  lfs       f0, -0x4238(r2)
	  stw       r0, 0xD0(r1)
	  lfd       f2, -0x41D8(r2)
	  fcmpo     cr0, f26, f0
	  lfd       f0, 0xD0(r1)
	  lfs       f1, -0x41E8(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, -0x423C(r2)
	  fdivs     f1, f2, f1
	  fmuls     f4, f0, f1
	  bge-      .loc_0xAF8
	  fneg      f3, f26

	.loc_0xAF8:
	  lfs       f2, -0x41CC(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x4238(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f3, f2
	  fcmpo     cr0, f26, f0
	  fctiwz    f0, f1
	  stfd      f0, 0xC8(r1)
	  lwz       r0, 0xCC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f1, f4, f0
	  bge-      .loc_0xB54
	  lfs       f0, -0x41C8(r2)
	  fmuls     f0, f26, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xC0(r1)
	  lwz       r0, 0xC4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0xB6C

	.loc_0xB54:
	  fmuls     f0, f26, f2
	  fctiwz    f0, f0
	  stfd      f0, 0xB8(r1)
	  lwz       r0, 0xBC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0xB6C:
	  lfs       f2, -0x4238(r2)
	  fmuls     f3, f4, f0
	  fadds     f1, f30, f1
	  lfs       f0, -0x4140(r2)
	  fadds     f2, f29, f2
	  mr        r3, r25
	  fadds     f3, f28, f3
	  stfs      f1, 0x40(r1)
	  fadds     f0, f2, f0
	  addi      r4, r1, 0x38
	  stfs      f2, 0x3C(r1)
	  li        r5, 0
	  stfs      f3, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  bl        -0xEB000
	  bl        -0x15CC0C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xE4(r1)
	  lfd       f3, -0x41D8(r2)
	  stw       r0, 0xE0(r1)
	  lfs       f1, -0x41E8(r2)
	  lfd       f2, 0xE0(r1)
	  lfs       f0, -0x41C0(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1FC(r25)

	.loc_0xBDC:
	  addi      r24, r24, 0x1

	.loc_0xBE0:
	  cmpw      r24, r23
	  blt+      .loc_0x9E4
	  b         .loc_0xC98

	.loc_0xBEC:
	  lwz       r21, 0x100(r31)
	  addi      r4, r1, 0x2C
	  lfs       f2, 0x11C(r21)
	  lfs       f1, 0xF4(r21)
	  lfs       f0, 0xCC(r21)
	  stfs      f0, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f2, 0x34(r1)
	  lwz       r3, 0x98(r31)
	  bl        -0x4D90
	  lfs       f4, 0x9E0(r21)
	  lfs       f3, 0x9B8(r21)
	  lwz       r3, 0x98(r31)
	  lfs       f0, 0x990(r21)
	  lfs       f1, -0x4144(r2)
	  stfs      f0, 0x1E4(r3)
	  lfs       f2, -0x4148(r2)
	  stfs      f3, 0x1E8(r3)
	  stfs      f4, 0x1EC(r3)
	  lfs       f0, 0x8F0(r21)
	  lwz       r3, 0x98(r31)
	  stfs      f0, 0x1C8(r3)
	  lfs       f0, 0x918(r21)
	  lwz       r3, 0x98(r31)
	  stfs      f0, 0x1CC(r3)
	  lfs       f3, 0x968(r21)
	  lwz       r3, 0x98(r31)
	  lfs       f0, 0x940(r21)
	  stfs      f0, 0x1D0(r3)
	  stfs      f3, 0x1D4(r3)
	  lfs       f4, 0xA58(r21)
	  lfs       f3, 0xA30(r21)
	  lfs       f0, 0xA08(r21)
	  lwz       r3, 0x98(r31)
	  stfs      f0, 0x28(r3)
	  stfs      f0, 0x288(r3)
	  stfs      f3, 0x28C(r3)
	  stfs      f4, 0x290(r3)
	  lfs       f0, 0xA80(r21)
	  lwz       r3, 0x98(r31)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x1C4(r3)

	.loc_0xC98:
	  psq_l     f31,0x178(r1),0,0
	  lfd       f31, 0x170(r1)
	  psq_l     f30,0x168(r1),0,0
	  lfd       f30, 0x160(r1)
	  psq_l     f29,0x158(r1),0,0
	  lfd       f29, 0x150(r1)
	  psq_l     f28,0x148(r1),0,0
	  lfd       f28, 0x140(r1)
	  psq_l     f27,0x138(r1),0,0
	  lfd       f27, 0x130(r1)
	  psq_l     f26,0x128(r1),0,0
	  lfd       f26, 0x120(r1)
	  lmw       r20, 0xF0(r1)
	  lwz       r0, 0x184(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802262E0
 * Size:	0004B0
 */
void SingleGame::ZukanState::dvdloadB_pellet(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stmw      r25, 0x54(r1)
	  mr        r29, r3
	  lwz       r0, 0xDC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  lwz       r0, -0x6E20(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  bl        0x50C
	  b         .loc_0x5C

	.loc_0x3C:
	  lwz       r0, 0xAC(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  bl        0x8B4
	  b         .loc_0x5C

	.loc_0x50:
	  bl        .loc_0x4B0
	  lwz       r3, 0xD8(r29)
	  bl        -0x202D94

	.loc_0x5C:
	  lwz       r3, 0xD8(r29)
	  bl        -0x202B8C
	  stw       r3, 0xE4(r29)
	  subi      r3, r2, 0x4150
	  crclr     6, 0x6
	  bl        -0x138C64
	  lis       r3, 0x8048
	  lwz       r4, 0xE4(r29)
	  addi      r3, r3, 0x30DC
	  crclr     6, 0x6
	  bl        -0x138C78
	  lwz       r25, 0xD8(r29)
	  mr        r3, r25
	  bl        -0x202BBC
	  mr        r4, r25
	  li        r5, 0x1
	  bl        -0x2064B4
	  stw       r3, 0xDC(r29)
	  lwz       r3, 0xDC(r29)
	  bl        -0x202DE4
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0x64
	  bl        -0xD44D4
	  lwz       r4, 0x94(r29)
	  lwz       r3, -0x65E8(r13)
	  lwz       r0, 0x128(r4)
	  stw       r0, 0x18(r3)
	  lwz       r3, -0x65E8(r13)
	  bl        0x19536C
	  lwz       r0, 0xA8(r29)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x3C0
	  lwz       r3, 0x100(r29)
	  mulli     r0, r0, 0x278
	  li        r4, 0
	  addis     r3, r3, 0x1
	  lwz       r3, 0x278(r3)
	  add       r31, r3, r0
	  lbz       r0, 0xA0(r31)
	  cmplwi    r0, 0xA
	  bge-      .loc_0x108
	  mr        r4, r0
	  b         .loc_0x110

	.loc_0x108:
	  li        r0, 0
	  stb       r0, 0xA0(r31)

	.loc_0x110:
	  lis       r3, 0x804B
	  lwz       r8, 0x100(r29)
	  subi      r0, r3, 0x5D0C
	  li        r6, 0
	  lis       r3, 0x804B
	  stw       r0, 0x20(r1)
	  li        r0, -0x1
	  li        r5, 0xFF
	  mulli     r7, r4, 0xC0
	  subi      r3, r3, 0x5D48
	  li        r4, 0x1
	  stw       r3, 0x20(r1)
	  li        r3, 0x3
	  addi      r30, r7, 0x90
	  stb       r6, 0x3C(r1)
	  add       r30, r8, r30
	  sth       r6, 0x34(r1)
	  stb       r5, 0x36(r1)
	  stw       r6, 0x38(r1)
	  stb       r6, 0x37(r1)
	  stb       r4, 0x24(r1)
	  stb       r6, 0x3D(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x40(r1)
	  stb       r6, 0x3E(r1)
	  stb       r6, 0x3F(r1)
	  lwz       r25, 0xA8(r29)
	  bl        0x1900
	  mr        r26, r3
	  li        r3, 0x4
	  bl        0x18F4
	  mr        r28, r3
	  li        r3, 0x3
	  bl        0x18E8
	  li        r3, 0x4
	  bl        0x18E0
	  li        r3, 0x3
	  bl        0x1948
	  mr        r27, r3
	  li        r3, 0x4
	  bl        0x193C
	  cmpw      r25, r27
	  bge-      .loc_0x1C4
	  li        r0, 0x3
	  b         .loc_0x1CC

	.loc_0x1C4:
	  sub       r25, r25, r27
	  li        r0, 0x4

	.loc_0x1CC:
	  cmpwi     r0, 0x3
	  bne-      .loc_0x1E8
	  mr        r3, r26
	  mr        r4, r25
	  bl        -0x72014
	  mr        r27, r3
	  b         .loc_0x1F8

	.loc_0x1E8:
	  mr        r3, r28
	  mr        r4, r25
	  bl        -0x72028
	  mr        r27, r3

	.loc_0x1F8:
	  lwz       r25, 0xA8(r29)
	  li        r3, 0x3
	  bl        0x187C
	  li        r3, 0x4
	  bl        0x1874
	  li        r3, 0x3
	  bl        0x18DC
	  mr        r28, r3
	  li        r3, 0x4
	  bl        0x18D0
	  cmpw      r25, r28
	  bge-      .loc_0x234
	  mr        r7, r25
	  li        r0, 0x3
	  b         .loc_0x23C

	.loc_0x234:
	  sub       r7, r25, r28
	  li        r0, 0x4

	.loc_0x23C:
	  stb       r0, 0x36(r1)
	  li        r5, 0
	  li        r0, 0x3
	  lwz       r3, -0x6CE0(r13)
	  lwz       r6, 0x40(r27)
	  addi      r4, r1, 0x20
	  stw       r6, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r7, 0x30(r1)
	  sth       r0, 0x34(r1)
	  bl        -0xB8E68
	  lbz       r0, 0x36(r1)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x28C
	  lwz       r3, -0x6AE0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2A0

	.loc_0x28C:
	  lwz       r3, -0x6AD8(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2A0:
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x20
	  bl        -0xB90C8
	  stw       r3, 0xAC(r29)
	  lwz       r0, 0xAC(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x410
	  lfs       f3, 0x8C(r30)
	  addi      r4, r1, 0x14
	  lfs       f2, 0x8C(r31)
	  lfs       f1, 0x3C(r30)
	  lfs       f0, 0x3C(r31)
	  fadds     f3, f3, f2
	  lfs       f2, 0x64(r30)
	  fadds     f0, f1, f0
	  lwz       r3, -0x6CF8(r13)
	  stfs      f2, 0x18(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f3, 0x1C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  fmr       f31, f1
	  lwz       r3, 0xAC(r29)
	  bl        -0xBFC10
	  lfs       f2, -0x4218(r2)
	  addi      r4, r1, 0x14
	  lfs       f0, 0x64(r31)
	  li        r5, 0
	  fmadds    f1, f2, f1, f31
	  fadds     f0, f0, f1
	  stfs      f0, 0x18(r1)
	  lwz       r3, 0xAC(r29)
	  bl        -0xEB460
	  lwz       r3, 0x98(r29)
	  lwz       r4, 0xAC(r29)
	  bl        -0x5108
	  lfs       f4, 0x1B8(r31)
	  lfs       f3, 0x190(r31)
	  lwz       r3, 0x98(r29)
	  lfs       f0, 0x168(r31)
	  lfs       f1, -0x4144(r2)
	  stfs      f0, 0x1E4(r3)
	  lfs       f2, -0x4148(r2)
	  stfs      f3, 0x1E8(r3)
	  stfs      f4, 0x1EC(r3)
	  lfs       f0, 0xC8(r31)
	  lwz       r3, 0x98(r29)
	  stfs      f0, 0x1C8(r3)
	  lfs       f0, 0xF0(r31)
	  lwz       r3, 0x98(r29)
	  stfs      f0, 0x1CC(r3)
	  lfs       f3, 0x140(r31)
	  lwz       r3, 0x98(r29)
	  lfs       f0, 0x118(r31)
	  stfs      f0, 0x1D0(r3)
	  stfs      f3, 0x1D4(r3)
	  lfs       f4, 0x230(r31)
	  lfs       f3, 0x208(r31)
	  lfs       f0, 0x1E0(r31)
	  lwz       r3, 0x98(r29)
	  stfs      f0, 0x28(r3)
	  stfs      f0, 0x288(r3)
	  stfs      f3, 0x28C(r3)
	  stfs      f4, 0x290(r3)
	  lfs       f0, 0x258(r31)
	  lwz       r3, 0x98(r29)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x1C4(r3)
	  b         .loc_0x410

	.loc_0x3C0:
	  lwz       r5, 0x100(r29)
	  li        r0, 0
	  addi      r4, r1, 0x8
	  addis     r3, r5, 0x1
	  lwz       r31, 0x278(r3)
	  stw       r0, 0xAC(r29)
	  lfs       f1, 0x11C(r5)
	  lfs       f0, 0x8C(r31)
	  lfs       f3, 0xF4(r5)
	  lfs       f2, 0x64(r31)
	  fadds     f4, f1, f0
	  lfs       f1, 0xCC(r5)
	  lfs       f0, 0x3C(r31)
	  fadds     f2, f3, f2
	  fadds     f0, f1, f0
	  stfs      f4, 0x10(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  lwz       r3, 0x98(r29)
	  bl        -0x5268

	.loc_0x410:
	  lfs       f4, 0x1B8(r31)
	  lfs       f3, 0x190(r31)
	  lwz       r3, 0x98(r29)
	  lfs       f0, 0x168(r31)
	  lfs       f1, -0x4144(r2)
	  stfs      f0, 0x1E4(r3)
	  lfs       f2, -0x4148(r2)
	  stfs      f3, 0x1E8(r3)
	  stfs      f4, 0x1EC(r3)
	  lfs       f0, 0xC8(r31)
	  lwz       r3, 0x98(r29)
	  stfs      f0, 0x1C8(r3)
	  lfs       f0, 0xF0(r31)
	  lwz       r3, 0x98(r29)
	  stfs      f0, 0x1CC(r3)
	  lfs       f3, 0x140(r31)
	  lwz       r3, 0x98(r29)
	  lfs       f0, 0x118(r31)
	  stfs      f0, 0x1D0(r3)
	  stfs      f3, 0x1D4(r3)
	  lfs       f4, 0x230(r31)
	  lfs       f3, 0x208(r31)
	  lfs       f0, 0x1E0(r31)
	  lwz       r3, 0x98(r29)
	  stfs      f0, 0x28(r3)
	  stfs      f0, 0x288(r3)
	  stfs      f3, 0x28C(r3)
	  stfs      f4, 0x290(r3)
	  lfs       f0, 0x258(r31)
	  lwz       r3, 0x98(r29)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x1C4(r3)
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  lmw       r25, 0x54(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr

	.loc_0x4B0:
	*/
}

/*
 * --INFO--
 * Address:	80226790
 * Size:	000090
 */
void SingleGame::ZukanState::clearHeapB_common(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, -0x6E28(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  mr        r3, r0
	  bl        -0x102130

	.loc_0x28:
	  lwz       r3, -0x6CE0(r13)
	  bl        -0xB9584
	  lwz       r3, -0x6D38(r13)
	  bl        -0xCEFE8
	  lwz       r3, -0x6D38(r13)
	  bl        -0xCE4D4
	  lwz       r3, -0x65E8(r13)
	  bl        0x194FC0
	  lwz       r3, -0x65E8(r13)
	  bl        0x194F60
	  lwz       r3, -0x6980(r13)
	  bl        0x1B42C
	  lwz       r3, -0x6958(r13)
	  li        r4, 0x2
	  bl        0x2D280
	  lwz       r3, 0xDC(r31)
	  bl        -0x2030C8
	  lwz       r3, 0xDC(r31)
	  bl        -0x20324C
	  li        r0, 0
	  stw       r0, 0xDC(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80226820
 * Size:	0003BC
 */
void SingleGame::ZukanState::clearHeapB_teki(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x690(r1)
	  mflr      r0
	  stw       r0, 0x694(r1)
	  stmw      r26, 0x678(r1)
	  mr        r30, r3
	  lwz       r0, 0xDC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3A0
	  addi      r3, r1, 0x20
	  li        r26, 0
	  li        r29, 0
	  bl        -0xB9EE4
	  addi      r3, r1, 0x20
	  bl        -0xB9ED4
	  lis       r4, 0x8048
	  lis       r3, 0x8048
	  addi      r27, r1, 0x350
	  addi      r31, r4, 0x2EDC
	  addi      r28, r3, 0x3170
	  b         .loc_0x8C

	.loc_0x50:
	  addi      r3, r1, 0x20
	  bl        -0xB9EA8
	  cmpwi     r26, 0xC8
	  bge-      .loc_0x70
	  stwx      r3, r27, r29
	  addi      r26, r26, 0x1
	  addi      r29, r29, 0x4
	  b         .loc_0x84

	.loc_0x70:
	  mr        r3, r31
	  mr        r5, r28
	  li        r4, 0xC5C
	  crclr     6, 0x6
	  bl        -0x1FC260

	.loc_0x84:
	  addi      r3, r1, 0x20
	  bl        -0xB9E74

	.loc_0x8C:
	  addi      r3, r1, 0x20
	  bl        -0xB9DBC
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x50
	  addi      r27, r1, 0x350
	  li        r28, 0
	  b         .loc_0xBC

	.loc_0xA8:
	  lwz       r3, 0x0(r27)
	  li        r4, 0
	  bl        -0xEB7E0
	  addi      r27, r27, 0x4
	  addi      r28, r28, 0x1

	.loc_0xBC:
	  cmpw      r28, r26
	  blt+      .loc_0xA8
	  lwz       r3, -0x6CE0(r13)
	  bl        -0xB96B0
	  lwz       r3, -0x6C70(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x1C(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x10(r1)
	  li        r31, 0
	  li        r29, 0
	  stw       r0, 0x14(r1)
	  stw       r3, 0x18(r1)
	  bne-      .loc_0x128
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x1B0

	.loc_0x128:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x194

	.loc_0x140:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B0
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x194:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x140

	.loc_0x1B0:
	  addi      r28, r1, 0x30
	  b         .loc_0x294

	.loc_0x1B8:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1C(r1)
	  addi      r31, r31, 0x1
	  stwx      r3, r28, r29
	  addi      r29, r29, 0x4
	  cmplwi    r0, 0
	  bne-      .loc_0x204
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x294

	.loc_0x204:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x278

	.loc_0x224:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x294
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)

	.loc_0x278:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x224

	.loc_0x294:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1B8
	  lis       r3, 0x804B
	  lis       r4, 0x1
	  subi      r0, r3, 0x5D30
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r4, r4, 0x1
	  addi      r0, r3, 0x1160
	  addi      r27, r1, 0x30
	  stw       r4, 0xC(r1)
	  li        r26, 0
	  stw       r0, 0x8(r1)
	  b         .loc_0x2F8

	.loc_0x2E4:
	  lwz       r3, 0x0(r27)
	  addi      r4, r1, 0x8
	  bl        -0xEBA1C
	  addi      r27, r27, 0x4
	  addi      r26, r26, 0x1

	.loc_0x2F8:
	  cmpw      r26, r31
	  blt+      .loc_0x2E4
	  lwz       r3, -0x6D0C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6E20(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x33C
	  bl        -0x119C34
	  lwz       r3, -0x6C18(r13)
	  lwz       r4, -0x6E20(r13)
	  bl        -0x70B98
	  li        r0, 0
	  stw       r0, -0x6E20(r13)
	  stw       r0, 0xA4(r30)

	.loc_0x33C:
	  lwz       r3, -0x6E28(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x34C
	  bl        -0x1024E4

	.loc_0x34C:
	  lwz       r3, -0x6CE0(r13)
	  bl        -0xB9938
	  lwz       r3, -0x6D38(r13)
	  bl        -0xCF39C
	  lwz       r3, -0x6D38(r13)
	  bl        -0xCE888
	  lwz       r3, -0x65E8(r13)
	  bl        0x194C0C
	  lwz       r3, -0x65E8(r13)
	  bl        0x194BAC
	  lwz       r3, -0x6980(r13)
	  bl        0x1B078
	  lwz       r3, -0x6958(r13)
	  li        r4, 0x2
	  bl        0x2CECC
	  lwz       r3, 0xDC(r30)
	  bl        -0x20347C
	  lwz       r3, 0xDC(r30)
	  bl        -0x203600
	  li        r0, 0
	  stw       r0, 0xDC(r30)

	.loc_0x3A0:
	  lwz       r3, 0xD8(r30)
	  bl        -0x203620
	  lmw       r26, 0x678(r1)
	  lwz       r0, 0x694(r1)
	  mtlr      r0
	  addi      r1, r1, 0x690
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80226BDC
 * Size:	000174
 */
void SingleGame::ZukanState::clearHeapB_pellet(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x350(r1)
	  mflr      r0
	  stw       r0, 0x354(r1)
	  stmw      r26, 0x338(r1)
	  mr        r26, r3
	  lwz       r0, 0xDC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x158
	  lwz       r0, 0xAC(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0xF4
	  addi      r3, r1, 0x8
	  li        r27, 0
	  li        r31, 0
	  bl        -0xBA2AC
	  addi      r3, r1, 0x8
	  bl        -0xBA29C
	  lis       r4, 0x8048
	  lis       r3, 0x8048
	  addi      r28, r1, 0x18
	  addi      r29, r4, 0x2EDC
	  addi      r30, r3, 0x3170
	  b         .loc_0x98

	.loc_0x5C:
	  addi      r3, r1, 0x8
	  bl        -0xBA270
	  cmpwi     r27, 0xC8
	  bge-      .loc_0x7C
	  stwx      r3, r28, r31
	  addi      r27, r27, 0x1
	  addi      r31, r31, 0x4
	  b         .loc_0x90

	.loc_0x7C:
	  mr        r3, r29
	  mr        r5, r30
	  li        r4, 0xC95
	  crclr     6, 0x6
	  bl        -0x1FC628

	.loc_0x90:
	  addi      r3, r1, 0x8
	  bl        -0xBA23C

	.loc_0x98:
	  addi      r3, r1, 0x8
	  bl        -0xBA184
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x5C
	  addi      r28, r1, 0x18
	  li        r29, 0
	  b         .loc_0xC8

	.loc_0xB4:
	  lwz       r3, 0x0(r28)
	  li        r4, 0
	  bl        -0xEBBA8
	  addi      r28, r28, 0x4
	  addi      r29, r29, 0x1

	.loc_0xC8:
	  cmpw      r29, r27
	  blt+      .loc_0xB4
	  lwz       r3, -0x6CE0(r13)
	  bl        -0xB9A78
	  lwz       r3, -0x6C70(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0xAC(r26)

	.loc_0xF4:
	  lwz       r3, -0x6E28(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x104
	  bl        -0x102658

	.loc_0x104:
	  lwz       r3, -0x6CE0(r13)
	  bl        -0xB9AAC
	  lwz       r3, -0x6D38(r13)
	  bl        -0xCF510
	  lwz       r3, -0x6D38(r13)
	  bl        -0xCE9FC
	  lwz       r3, -0x65E8(r13)
	  bl        0x194A98
	  lwz       r3, -0x65E8(r13)
	  bl        0x194A38
	  lwz       r3, -0x6980(r13)
	  bl        0x1AF04
	  lwz       r3, -0x6958(r13)
	  li        r4, 0x2
	  bl        0x2CD58
	  lwz       r3, 0xDC(r26)
	  bl        -0x2035F0
	  lwz       r3, 0xDC(r26)
	  bl        -0x203774
	  li        r0, 0
	  stw       r0, 0xDC(r26)

	.loc_0x158:
	  lwz       r3, 0xD8(r26)
	  bl        -0x203794
	  lmw       r26, 0x338(r1)
	  lwz       r0, 0x354(r1)
	  mtlr      r0
	  addi      r1, r1, 0x350
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80226D50
 * Size:	0003AC
 */
void SingleGame::ZukanState::clearHeaps(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x350(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x354(r1)
	  stmw      r27, 0x33C(r1)
	  mr        r31, r3
	  addi      r28, r4, 0x2E60
	  lwz       r3, -0x6D0C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xA4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  mr        r3, r31
	  bl        -0x570
	  b         .loc_0x1F4

	.loc_0x48:
	  lwz       r3, 0xAC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x190
	  lwz       r0, 0xDC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x184
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  li        r27, 0
	  addi      r3, r1, 0x8
	  mr        r30, r27
	  bl        -0xBA45C
	  addi      r3, r1, 0x8
	  bl        -0xBA44C
	  addi      r29, r1, 0x18
	  b         .loc_0xC4

	.loc_0x88:
	  addi      r3, r1, 0x8
	  bl        -0xBA410
	  cmpwi     r27, 0xC8
	  bge-      .loc_0xA8
	  stwx      r3, r29, r30
	  addi      r27, r27, 0x1
	  addi      r30, r30, 0x4
	  b         .loc_0xBC

	.loc_0xA8:
	  addi      r3, r28, 0x7C
	  addi      r5, r28, 0x310
	  li        r4, 0xC95
	  crclr     6, 0x6
	  bl        -0x1FC7C8

	.loc_0xBC:
	  addi      r3, r1, 0x8
	  bl        -0xBA3DC

	.loc_0xC4:
	  addi      r3, r1, 0x8
	  bl        -0xBA324
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x88
	  addi      r30, r1, 0x18
	  li        r29, 0
	  b         .loc_0xF4

	.loc_0xE0:
	  lwz       r3, 0x0(r30)
	  li        r4, 0
	  bl        -0xEBD48
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0xF4:
	  cmpw      r29, r27
	  blt+      .loc_0xE0
	  lwz       r3, -0x6CE0(r13)
	  bl        -0xB9C18
	  lwz       r3, -0x6C70(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0xAC(r31)

	.loc_0x120:
	  lwz       r3, -0x6E28(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x130
	  bl        -0x1027F8

	.loc_0x130:
	  lwz       r3, -0x6CE0(r13)
	  bl        -0xB9C4C
	  lwz       r3, -0x6D38(r13)
	  bl        -0xCF6B0
	  lwz       r3, -0x6D38(r13)
	  bl        -0xCEB9C
	  lwz       r3, -0x65E8(r13)
	  bl        0x1948F8
	  lwz       r3, -0x65E8(r13)
	  bl        0x194898
	  lwz       r3, -0x6980(r13)
	  bl        0x1AD64
	  lwz       r3, -0x6958(r13)
	  li        r4, 0x2
	  bl        0x2CBB8
	  lwz       r3, 0xDC(r31)
	  bl        -0x203790
	  lwz       r3, 0xDC(r31)
	  bl        -0x203914
	  li        r0, 0
	  stw       r0, 0xDC(r31)

	.loc_0x184:
	  lwz       r3, 0xD8(r31)
	  bl        -0x203934
	  b         .loc_0x1F4

	.loc_0x190:
	  lwz       r3, -0x6E28(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x1A0
	  bl        -0x102868

	.loc_0x1A0:
	  lwz       r3, -0x6CE0(r13)
	  bl        -0xB9CBC
	  lwz       r3, -0x6D38(r13)
	  bl        -0xCF720
	  lwz       r3, -0x6D38(r13)
	  bl        -0xCEC0C
	  lwz       r3, -0x65E8(r13)
	  bl        0x194888
	  lwz       r3, -0x65E8(r13)
	  bl        0x194828
	  lwz       r3, -0x6980(r13)
	  bl        0x1ACF4
	  lwz       r3, -0x6958(r13)
	  li        r4, 0x2
	  bl        0x2CB48
	  lwz       r3, 0xDC(r31)
	  bl        -0x203800
	  lwz       r3, 0xDC(r31)
	  bl        -0x203984
	  li        r0, 0
	  stw       r0, 0xDC(r31)

	.loc_0x1F4:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x214
	  addi      r3, r28, 0x190
	  addi      r5, r28, 0x90
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1FC920

	.loc_0x214:
	  lwz       r27, -0x6780(r13)
	  cmplwi    r27, 0
	  bne-      .loc_0x234
	  addi      r3, r28, 0x190
	  addi      r5, r28, 0x90
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x1FC940

	.loc_0x234:
	  mr        r3, r27
	  bl        0x11B258
	  lwz       r3, -0x6E44(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x25C
	  lwz       r12, 0x28(r3)
	  li        r4, 0x1
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x25C:
	  li        r0, 0
	  stw       r0, -0x6E44(r13)
	  lwz       r0, 0xD8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x34C
	  lwz       r3, 0x94(r31)
	  bl        -0xDBE54
	  lwz       r4, -0x6E20(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x294
	  lwz       r3, -0x6C18(r13)
	  bl        -0x71024
	  li        r0, 0
	  stw       r0, -0x6E20(r13)

	.loc_0x294:
	  lwz       r4, -0x6CF8(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x2A4
	  lwz       r4, 0x0(r4)

	.loc_0x2A4:
	  lwz       r3, -0x6C18(r13)
	  bl        -0x71044
	  lwz       r3, 0x94(r31)
	  lwz       r3, 0x128(r3)
	  bl        0x1EA5CC
	  lwz       r3, 0x94(r31)
	  li        r0, 0
	  stw       r0, 0x128(r3)
	  stw       r0, -0x6CF8(r13)
	  lwz       r3, 0x98(r31)
	  bl        0x1EA5B4
	  li        r0, 0
	  stw       r0, 0x98(r31)
	  lwz       r3, -0x6960(r13)
	  bl        0x1EA5A4
	  li        r0, 0
	  lwz       r3, -0x6980(r13)
	  stw       r0, -0x6960(r13)
	  bl        0x1EA594
	  li        r0, 0
	  lwz       r3, -0x6958(r13)
	  stw       r0, -0x6980(r13)
	  bl        0x1EA584
	  li        r0, 0
	  stw       r0, -0x6958(r13)
	  stw       r0, 0x94(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x24(r3)
	  bl        0x1FE548
	  li        r0, 0
	  lwz       r3, -0x6D20(r13)
	  stw       r0, -0x6D38(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x100(r31)
	  bl        0x1EA548
	  lwz       r3, 0x104(r31)
	  bl        0x1EA540
	  lwz       r3, 0xD8(r31)
	  bl        -0x203AE4

	.loc_0x34C:
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xD4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x388
	  lwz       r3, 0xF0(r31)
	  bl        -0x203B10
	  li        r0, 0
	  stw       r0, 0xF0(r31)
	  lwz       r3, 0xD4(r31)
	  bl        -0x203B20

	.loc_0x388:
	  li        r0, 0
	  stw       r0, 0xDC(r31)
	  stw       r0, 0xD8(r31)
	  stw       r0, 0xD4(r31)
	  lmw       r27, 0x33C(r1)
	  lwz       r0, 0x354(r1)
	  mtlr      r0
	  addi      r1, r1, 0x350
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802270FC
 * Size:	0000A8
 */
void SingleGame::ZukanState::cleanup(Game::SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, -0x6560(r13)
	  lwz       r3, 0x18(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x65F8(r13)
	  bl        0x192678
	  lwz       r3, -0x6C18(r13)
	  li        r0, 0
	  lfs       f0, -0x4244(r2)
	  stw       r0, 0x44(r3)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  stfs      f0, 0x21C(r3)
	  lwz       r3, 0xE0(r31)
	  bl        -0x203BBC
	  lwz       r3, 0xE0(r31)
	  bl        -0x2039B4
	  lwz       r0, -0x6A30(r13)
	  cmpw      r0, r3
	  beq-      .loc_0x94
	  lis       r3, 0x8048
	  li        r4, 0xD12
	  addi      r3, r3, 0x2EDC
	  subi      r5, r2, 0x413C
	  crclr     6, 0x6
	  bl        -0x1FCB4C

	.loc_0x94:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	802271A4
 * Size:	000008
 */
u32 Morimura::DispMemberZukanItem::getSize(void) { return 0x20; }

/*
 * --INFO--
 * Address:	802271AC
 * Size:	00000C
 */
void Morimura::DispMemberZukanItem::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802271B8
 * Size:	000010
 */
void Morimura::DispMemberZukanItem::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4954
	  li        r3, 0x44
	  addi      r4, r4, 0x454D
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802271C8
 * Size:	000008
 */
u32 Morimura::DispMemberZukanEnemy::getSize(void) { return 0x20; }

/*
 * --INFO--
 * Address:	802271D0
 * Size:	00000C
 */
void Morimura::DispMemberZukanEnemy::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802271DC
 * Size:	000010
 */
void Morimura::DispMemberZukanEnemy::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4E45
	  li        r3, 0x4445
	  addi      r4, r4, 0x4D59
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802271EC
 * Size:	0000D0
 */
IllustratedBook::Camera::~Camera(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xB4
	  lis       r4, 0x804C
	  addi      r0, r4, 0xC3C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4860
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804F
	  subi      r0, r4, 0x47E0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4764
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE94
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE4C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE20
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xA4
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r31)
	  bl        0x1EA2FC

	.loc_0xA4:
	  extsh.    r0, r30
	  ble-      .loc_0xB4
	  mr        r3, r31
	  bl        -0x2031E8

	.loc_0xB4:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	802272BC
 * Size:	00001C
 */
void LookAtCamera::getLookAtPosition_()
{
	/*
	.loc_0x0:
	  lfs       f0, 0x180(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x184(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x188(r4)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802272D8
 * Size:	000008
 */
void LookAtCamera::on_getPositionPtr()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x174
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802272E0
 * Size:	000008
 */
void Camera::getTargetDistance()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x4238(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802272E8
 * Size:	000008
 */
u32 Camera::isSpecialCamera() { return 0x0; }

namespace Game {

/*
 * --INFO--
 * Address:	802272F0
 * Size:	000070
 */
IllustratedBook::EnemyTexMgr::~EnemyTexMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x54
	  lis       r4, 0x804C
	  addi      r3, r30, 0x20
	  addi      r0, r4, 0xD98
	  li        r4, -0x1
	  stw       r0, 0x0(r30)
	  bl        0xC1A8
	  mr        r3, r30
	  li        r4, 0
	  bl        0xC324
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x20328C

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80227360
 * Size:	000060
 */
IllustratedBook::DebugParms::~DebugParms(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x44
	  lis       r5, 0x804C
	  li        r4, 0
	  addi      r0, r5, 0xDA4
	  stw       r0, 0x0(r30)
	  bl        0x1EA1F8
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x2032EC

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	802273C0
 * Size:	000030
 */
void Delegate<Game::SingleGame::ZukanState>::invoke()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r4, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x1658B4
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802273F0
 * Size:	000028
 */
void __sinit_singleGS_Zukan_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6A38(r13)
	  stfsu     f0, 0xA40(r3)
	  stfs      f0, -0x6A34(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
