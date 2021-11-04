#include "types.h"

/*
 * --INFO--
 * Address:	801ACA08
 * Size:	0000B8
 */
void makeObjectNavi()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r3, 0x50
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x828
	  stw       r30, 0x8(r1)
	  bl        -0x188B84
	  mr.       r30, r3
	  beq-      .loc_0x9C
	  addi      r0, r30, 0x4C
	  lis       r4, 0x6E61
	  stw       r0, 0x0(r30)
	  addi      r5, r4, 0x7669
	  addi      r6, r31, 0
	  addi      r7, r31, 0xC
	  li        r4, 0
	  bl        -0x236C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x563C
	  lis       r5, 0x7030
	  stw       r0, 0xC(r30)
	  addi      r0, r3, 0x56F8
	  mr        r4, r30
	  addi      r3, r30, 0x24
	  stw       r0, 0xC(r30)
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0x1C
	  bl        0x266BD8
	  lis       r3, 0x804B
	  lfs       f1, -0x50B8(r2)
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x50B4(r2)
	  stw       r0, 0x24(r30)
	  stfs      f1, 0x3C(r30)
	  stfs      f1, 0x44(r30)
	  stfs      f0, 0x48(r30)

	.loc_0x9C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801ACAC0
 * Size:	00008C
 */
void GenObjectNavi::initialise(void)
{
	/*
	.loc_0x0:
	  lwz       r8, -0x6C60(r13)
	  lwz       r5, 0x0(r8)
	  lwz       r0, 0x4(r8)
	  cmpw      r5, r0
	  bgelr-
	  lis       r4, 0x6E61
	  lwz       r3, 0x8(r8)
	  addi      r4, r4, 0x7669
	  rlwinm    r0,r5,4,0,27
	  stwx      r4, r3, r0
	  lis       r5, 0x801B
	  lis       r4, 0x8048
	  lis       r3, 0x3030
	  lwz       r0, 0x0(r8)
	  subi      r7, r5, 0x35F8
	  lwz       r6, 0x8(r8)
	  subi      r5, r4, 0x7FC
	  rlwinm    r0,r0,4,0,27
	  addi      r4, r3, 0x3030
	  add       r3, r6, r0
	  stw       r7, 0x4(r3)
	  lwz       r0, 0x0(r8)
	  lwz       r3, 0x8(r8)
	  rlwinm    r0,r0,4,0,27
	  add       r3, r3, r0
	  stw       r5, 0x8(r3)
	  lwz       r0, 0x0(r8)
	  lwz       r3, 0x8(r8)
	  rlwinm    r0,r0,4,0,27
	  add       r3, r3, r0
	  stw       r4, 0xC(r3)
	  lwz       r3, 0x0(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ACB4C
 * Size:	000004
 */
void GenObjectNavi::ramSaveParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801ACB50
 * Size:	000004
 */
void GenObjectNavi::ramLoadParameters(Stream&) { }

/*
 * --INFO--
 * Address:	801ACB54
 * Size:	000078
 */
void GenObjectNavi::generate(Game::Generator*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804B
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  subi      r6, r6, 0x5D0C
	  subi      r0, r5, 0x242C
	  lfs       f1, 0x9C(r4)
	  lfs       f0, 0xA8(r4)
	  lfs       f3, 0x98(r4)
	  fadds     f4, f1, f0
	  lfs       f2, 0xA4(r4)
	  lfs       f1, 0x94(r4)
	  lfs       f0, 0xA0(r4)
	  fadds     f2, f3, f2
	  addi      r4, r1, 0x8
	  fadds     f0, f1, f0
	  stw       r6, 0x8(r1)
	  stw       r0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  stfs      f4, 0x14(r1)
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void print_calcs(SysShape::Model*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void clear_calcs(SysShape::Model*, SysShape::Animator&)
{
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	801ACBCC
 * Size:	000138
 */
void GenObjectNavi::birth(Game::GenArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  beq-      .loc_0x114
	  li        r4, 0
	  bl        -0x71C58
	  addi      r3, r30, 0x1AC
	  lwz       r12, 0x1AC(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r30, 0x1C8
	  lwz       r12, 0x1C8(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x174(r30)
	  lwz       r0, 0xC(r31)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x98

	.loc_0x94:
	  bdnz-     .loc_0x94

	.loc_0x98:
	  addi      r3, r30, 0x1C8
	  lwz       r12, 0x1C8(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwz       r4, 0x0(r4)
	  stw       r3, 0x54(r4)
	  lwz       r3, 0x174(r30)
	  lwz       r0, 0xC(r3)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0xD8

	.loc_0xD4:
	  bdnz-     .loc_0xD4

	.loc_0xD8:
	  lwz       r0, 0xC(r3)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0xEC

	.loc_0xE8:
	  bdnz-     .loc_0xE8

	.loc_0xEC:
	  mr        r3, r30
	  addi      r4, r29, 0x4
	  li        r5, 0
	  bl        -0x71B1C
	  lfs       f1, -0x50AC(r2)
	  lfs       f0, 0x3C(r28)
	  lfs       f2, -0x50B0(r2)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x1FC(r30)

	.loc_0x114:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

} // namespace Game

namespace SysShape {

/*
 * --INFO--
 * Address:	801ACD04
 * Size:	00001C
 */
void Animator::getCalc(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x14
	  lwz       r3, 0x1C(r3)
	  blr

	.loc_0x14:
	  li        r3, 0
	  blr
	*/
}
} // namespace SysShape
