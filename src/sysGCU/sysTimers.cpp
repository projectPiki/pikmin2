#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042A7FC
 * Size:	0000E0
 */
void SysTimers::SysTimers()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  bl        -0x19488
	  lis       r3, 0x804F
	  li        r4, -0x1
	  subi      r0, r3, 0x41B4
	  li        r3, 0
	  stw       r0, 0x0(r31)
	  li        r0, 0x40
	  stw       r4, 0x18(r31)
	  stb       r3, -0x64D0(r13)
	  stw       r0, 0x1C(r31)
	  lwz       r30, 0x1C(r31)
	  mulli     r3, r30, 0x3C
	  addi      r3, r3, 0x10
	  bl        -0x4068A0
	  lis       r4, 0x8043
	  lis       r5, 0x8043
	  subi      r4, r4, 0x5724
	  mr        r7, r30
	  subi      r5, r5, 0x55D4
	  li        r6, 0x3C
	  bl        -0x368E78
	  stw       r3, 0x20(r31)
	  li        r29, 0
	  addi      r30, r2, 0x2228
	  b         .loc_0xA0

	.loc_0x80:
	  mr        r3, r31
	  mr        r4, r29
	  bl        0x12C
	  lbz       r0, 0x38(r3)
	  addi      r29, r29, 0x1
	  ori       r0, r0, 0x1
	  stb       r0, 0x38(r3)
	  stw       r30, 0x18(r3)

	.loc_0xA0:
	  lwz       r0, 0x1C(r31)
	  cmpw      r29, r0
	  blt+      .loc_0x80
	  lfs       f0, 0x2230(r2)
	  lis       r3, 0x804A
	  subi      r0, r3, 0x61F0
	  mr        r3, r31
	  stfs      f0, 0x24(r31)
	  stw       r0, 0x14(r31)
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
 * Address:	8042A8DC
 * Size:	00006C
 */
void TimerInf::__defctor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x40D924
	  lis       r3, 0x804F
	  li        r5, 0
	  subi      r0, r3, 0x41C0
	  addi      r4, r2, 0x2228
	  stw       r0, 0x0(r31)
	  li        r0, -0x1
	  lfs       f0, 0x2230(r2)
	  mr        r3, r31
	  stb       r5, 0x38(r31)
	  stw       r4, 0x18(r31)
	  stfs      f0, 0x20(r31)
	  stfs      f0, 0x24(r31)
	  stfs      f0, 0x28(r31)
	  stfs      f0, 0x2C(r31)
	  stw       r5, 0x30(r31)
	  stw       r0, 0x34(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042A948
 * Size:	000068
 */
void SysTimers::~SysTimers()
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
	  beq-      .loc_0x4C
	  lis       r4, 0x804F
	  subi      r0, r4, 0x41B4
	  stw       r0, 0x0(r30)
	  bl        0x12C
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x193F8
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        -0x4068DC

	.loc_0x4C:
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
 * Address:	8042A9B0
 * Size:	00007C
 */
void SysTimers::get(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0
	  blt-      .loc_0x34
	  lwz       r0, 0x1C(r30)
	  cmpw      r31, r0
	  bge-      .loc_0x34
	  li        r3, 0x1

	.loc_0x34:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x61E4
	  li        r4, 0x77
	  subi      r5, r5, 0x61D4
	  crclr     6, 0x6
	  bl        -0x4003C4

	.loc_0x58:
	  mulli     r0, r31, 0x3C
	  lwz       r3, 0x20(r30)
	  add       r3, r3, r0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042AA2C
 * Size:	000074
 */
void TimerInf::~TimerInf()
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
	  beq-      .loc_0x58
	  lis       r3, 0x804F
	  mr        r4, r30
	  subi      r0, r3, 0x41C0
	  stw       r0, 0x0(r30)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x28(r3)
	  bl        0x84
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x40DA3C
	  extsh.    r0, r31
	  ble-      .loc_0x58
	  mr        r3, r30
	  bl        -0x4069CC

	.loc_0x58:
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
 * Address:	8042AAA0
 * Size:	000038
 */
void SysTimers::reset()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  stw       r0, 0x14(r1)
	  subi      r3, r3, 0x61E4
	  li        r4, 0x88
	  subi      r5, r5, 0x61C8
	  crclr     6, 0x6
	  bl        -0x400484
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042AAD8
 * Size:	000010
 */
void SysTimers::newFrame()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x18(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042AAE8
 * Size:	000010
 */
void SysTimers::remove(TimerInf*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x38(r4)
	  ori       r0, r0, 0x1
	  stb       r0, 0x38(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042AAF8
 * Size:	000004
 */
void SysTimers::_start(char*, bool) { }

/*
 * --INFO--
 * Address:	8042AAFC
 * Size:	000004
 */
void SysTimers::_stop(char*) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void SysTimers::showTimes()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void SysTimers::draw(J2DGrafContext&)
{
	// UNUSED FUNCTION
}
