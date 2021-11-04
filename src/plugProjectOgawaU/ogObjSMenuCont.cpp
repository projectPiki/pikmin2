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
 * Address:	80330658
 * Size:	000064
 */
void og::newScreen::ObjSMenuCont::__ct((char const*))
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
	  bl        -0x1A464
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r4, r3, 0x5C28
	  mr        r3, r30
	  stw       r4, 0x0(r30)
	  addi      r4, r4, 0x10
	  stw       r4, 0x18(r30)
	  stw       r0, 0xA8(r30)
	  stw       r0, 0xAC(r30)
	  stw       r0, 0xB0(r30)
	  stw       r31, 0x14(r30)
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
 * Address:	803306BC
 * Size:	0000C4
 */
void og::newScreen::ObjSMenuCont::__dt(void)
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
	  beq-      .loc_0xA8
	  lis       r4, 0x804E
	  subi      r4, r4, 0x5C28
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x98
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7650
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x98
	  lis       r4, 0x804F
	  subi      r4, r4, 0x28A8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x98
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7DC0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        0xE0E98
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x313710
	  mr        r3, r30
	  li        r4, 0
	  bl        0xE0E38

	.loc_0x98:
	  extsh.    r0, r31
	  ble-      .loc_0xA8
	  mr        r3, r30
	  bl        -0x30C6AC

	.loc_0xA8:
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
 * Address:	80330780
 * Size:	00014C
 */
void og::newScreen::ObjSMenuCont::doCreate((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x830
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        0x123800
	  lis       r4, 0x4F
	  lis       r6, 0x434F
	  lis       r5, 0x53
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4E54
	  addi      r5, r5, 0x4D5F
	  bl        -0x21304
	  stw       r3, 0xA8(r29)
	  lwz       r0, 0xA8(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x94
	  li        r3, 0xC4
	  bl        -0x30C938
	  mr.       r0, r3
	  beq-      .loc_0x70
	  bl        -0x11B4F0
	  mr        r0, r3

	.loc_0x70:
	  lis       r4, 0x4F
	  lis       r6, 0x434F
	  lis       r5, 0x53
	  mr        r3, r0
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4E54
	  addi      r5, r5, 0x4D5F
	  bl        -0x2134C
	  stw       r3, 0xA8(r29)

	.loc_0x94:
	  li        r3, 0x148
	  bl        -0x30C974
	  mr.       r0, r3
	  beq-      .loc_0xAC
	  bl        0x104588
	  mr        r0, r3

	.loc_0xAC:
	  stw       r0, 0xAC(r29)
	  mr        r6, r30
	  addi      r4, r31, 0x14
	  lis       r5, 0x104
	  lwz       r3, 0xAC(r29)
	  bl        -0x2F121C
	  li        r3, 0x1C
	  bl        -0x30C9A4
	  mr.       r0, r3
	  beq-      .loc_0xE0
	  li        r4, 0x2
	  bl        -0x2B400
	  mr        r0, r3

	.loc_0xE0:
	  stw       r0, 0xB0(r29)
	  lis       r3, 0x8051
	  addi      r7, r3, 0x3CF4
	  mr        r4, r30
	  lwz       r3, 0xB0(r29)
	  addi      r6, r31, 0x2C
	  lwz       r5, 0xAC(r29)
	  lfs       f1, 0x0(r7)
	  bl        -0x2AEE8
	  lis       r4, 0x8051
	  lwz       r3, 0xB0(r29)
	  lfs       f1, 0x3CF4(r4)
	  mr        r4, r30
	  lwz       r5, 0xAC(r29)
	  addi      r6, r31, 0x44
	  bl        -0x2AF04
	  lwz       r5, 0xAC(r29)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x1A534
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
 * Address:	803308CC
 * Size:	0000CC
 */
void og::newScreen::ObjSMenuCont::doUpdateLAction(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  bl        0x1236C8
	  lbz       r0, 0xA5(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  mr        r3, r31
	  bl        0x1236B4
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r5, 0x7B98
	  li        r6, 0x271B
	  stw       r0, 0x18(r1)
	  subi      r7, r4, 0x7BA8
	  li        r5, 0
	  li        r0, 0x1
	  stw       r3, 0x24(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x18
	  stw       r7, 0x18(r1)
	  stw       r6, 0x1C(r1)
	  stb       r5, 0x20(r1)
	  stb       r0, 0x21(r1)
	  bl        -0x1A13C
	  b         .loc_0xB8

	.loc_0x70:
	  mr        r3, r31
	  bl        0x123668
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r5, 0x7B98
	  li        r6, 0x271A
	  stw       r0, 0x8(r1)
	  subi      r7, r4, 0x7BA8
	  li        r5, 0
	  li        r0, 0x1
	  stw       r3, 0x14(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  bl        -0x1A188

	.loc_0xB8:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80330998
 * Size:	00006C
 */
void og::newScreen::ObjSMenuCont::doUpdateRAction(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        0x1235FC
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r5, 0x7B98
	  li        r6, 0x271C
	  stw       r0, 0x8(r1)
	  subi      r7, r4, 0x7BA8
	  li        r5, 0
	  li        r0, 0x1
	  stw       r3, 0x14(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  bl        -0x1A110
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80330A04
 * Size:	000080
 */
void og::newScreen::ObjSMenuCont::commonUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1A4DC
	  subi      r3, r13, 0x67C0
	  lfs       f1, -0x67C0(r13)
	  lfs       f2, 0x4(r3)
	  mr        r3, r31
	  bl        -0x1A6F4
	  lwz       r3, 0xB0(r31)
	  bl        -0x2B54C
	  lfs       f3, 0x40(r31)
	  lfs       f2, 0x243C(r2)
	  lfs       f1, -0x2D0(r2)
	  lfs       f0, 0x2440(r2)
	  fadds     f2, f3, f2
	  lwz       r3, 0xAC(r31)
	  fadds     f0, f1, f0
	  stfs      f2, 0x140(r3)
	  stfs      f0, 0x144(r3)
	  lwz       r3, 0xAC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80330A84
 * Size:	000054
 */
void og::newScreen::ObjSMenuCont::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x1A550
	  mr        r0, r3
	  lwz       r3, 0xAC(r31)
	  mr        r31, r0
	  bl        -0x2EFF90
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
 * Address:	80330AD8
 * Size:	000084
 */
void og::newScreen::ObjSMenuCont::doDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  addi      r31, r30, 0x190
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xAC(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x19CB0
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
 * Address:	80330B5C
 * Size:	000014
 */
void og::newScreen::ObjSMenuCont::in_L(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f0, -0x2CC(r2)
	  stw       r0, 0x38(r3)
	  stfs      f0, 0x4C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80330B70
 * Size:	000014
 */
void og::newScreen::ObjSMenuCont::in_R(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  lfs       f0, -0x2CC(r2)
	  stw       r0, 0x38(r3)
	  stfs      f0, 0x4C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80330B84
 * Size:	00000C
 */
void og::newScreen::ObjSMenuCont::wait(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x4
	  stw       r0, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80330B90
 * Size:	00002C
 */
void og::newScreen::ObjSMenuCont::out_L(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x2
	  stw       r0, 0x38(r3)
	  lwz       r3, -0x6858(r13)
	  bl        -0x23F60
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80330BBC
 * Size:	00002C
 */
void og::newScreen::ObjSMenuCont::out_R(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x3
	  stw       r0, 0x38(r3)
	  lwz       r3, -0x6858(r13)
	  bl        -0x23F8C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80330BE8
 * Size:	0000A4
 */
void og::newScreen::ObjSMenuCont::doStart((Screen::StartSceneArg const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x2D0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0xB0(r3)
	  bl        -0x2B4AC
	  lwz       r3, 0xB0(r30)
	  li        r4, 0x1
	  bl        -0x2B514
	  lwz       r3, 0xB0(r30)
	  lfs       f1, -0x2C8(r2)
	  bl        -0x2B57C
	  lwz       r3, 0xB0(r30)
	  bl        -0x2B374
	  lis       r3, 0x36
	  lis       r6, 0x325F
	  addi      r5, r3, 0x3035
	  lis       r8, 0x305F
	  lis       r4, 0x315F
	  mr        r3, r30
	  mr        r7, r5
	  mr        r9, r5
	  addi      r6, r6, 0x3030
	  addi      r8, r8, 0x3030
	  addi      r10, r4, 0x3030
	  bl        -0x1A14C
	  mr        r3, r30
	  bl        -0x1A0E8
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x1A2B0
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
 * Address:	80330C8C
 * Size:	000008
 */
u32 og::newScreen::ObjSMenuCont::doEnd((Screen::EndSceneArg const*))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	80330C94
 * Size:	000020
 */
void og::newScreen::ObjSMenuCont::doUpdateFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1A618
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80330CB4
 * Size:	00004C
 */
void og::newScreen::ObjSMenuCont::doUpdateFadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80330D00
 * Size:	000004
 */
void og::newScreen::ObjSMenuCont::doUpdateCancelAction(void) { }

/*
 * --INFO--
 * Address:	80330D04
 * Size:	000014
 */
void __sinit_ogObjSMenuCont_cpp(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x2C8(r2)
	  subi      r3, r13, 0x67C0
	  stfs      f0, -0x67C0(r13)
	  stfs      f0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80330D18
 * Size:	000008
 */
void @24 @og::newScreen::ObjSMenuCont::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x660
	*/
}
