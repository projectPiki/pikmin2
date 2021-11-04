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
 * Address:	8032BC48
 * Size:	000080
 */
void og::newScreen::ObjWorldMapInfoWindow1::__ct((char const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x14(r1)
	  subi      r0, r5, 0x9B8
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x2AE0
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r4, r3, 0x6180
	  mr        r3, r30
	  stw       r4, 0x0(r30)
	  addi      r4, r4, 0x10
	  stw       r4, 0x18(r30)
	  stw       r0, 0xCC(r30)
	  stw       r31, 0x14(r30)
	  stw       r0, 0xAC(r30)
	  stw       r0, 0xB0(r30)
	  stw       r0, 0xB4(r30)
	  stw       r0, 0xD0(r30)
	  stw       r0, 0xB8(r30)
	  stw       r0, 0xBC(r30)
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
 * Address:	8032BCC8
 * Size:	000300
 */
void og::newScreen::ObjWorldMapInfoWindow1::doCreate((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  stw       r29, 0x34(r1)
	  bl        0x1282C0
	  lis       r4, 0x4F
	  lis       r6, 0x5769
	  lis       r5, 0x574D
	  mr        r29, r3
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x6E31
	  addi      r5, r5, 0x6170
	  bl        -0x1C9EC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  stw       r29, 0xCC(r30)

	.loc_0x50:
	  lwz       r0, 0xCC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x9C
	  li        r3, 0x10
	  bl        -0x307E84
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  addi      r0, r5, 0x1148
	  li        r5, 0
	  stw       r0, 0x0(r3)
	  subi      r4, r4, 0x60C8
	  li        r0, 0xB4
	  stw       r5, 0x4(r3)
	  stw       r4, 0x0(r3)
	  stw       r5, 0x8(r3)
	  stb       r0, 0xC(r3)

	.loc_0x98:
	  stw       r3, 0xCC(r30)

	.loc_0x9C:
	  li        r3, 0x148
	  bl        -0x307EC4
	  mr.       r0, r3
	  beq-      .loc_0xB4
	  bl        0x109038
	  mr        r0, r3

	.loc_0xB4:
	  stw       r0, 0xB0(r30)
	  lis       r3, 0x8049
	  subi      r4, r3, 0x9A4
	  mr        r6, r31
	  lwz       r3, 0xB0(r30)
	  lis       r5, 0x110
	  bl        -0x2EC770
	  lis       r5, 0x6E75
	  lis       r4, 0x4E
	  lwz       r3, 0xB0(r30)
	  addi      r6, r5, 0x3031
	  addi      r5, r4, 0x6D65
	  bl        -0x28F00
	  li        r0, 0
	  lis       r5, 0x6E75
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x3032
	  lwz       r3, 0xB0(r30)
	  addi      r5, r4, 0x6D65
	  bl        -0x28F20
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0xB0(r30)
	  bl        -0x199C
	  li        r3, 0x78
	  bl        -0x307F40
	  mr.       r0, r3
	  beq-      .loc_0x130
	  bl        -0x21FC8
	  mr        r0, r3

	.loc_0x130:
	  lis       r10, 0x795F
	  stw       r0, 0xB4(r30)
	  addi      r0, r10, 0x6972
	  lis       r4, 0x6D30
	  lis       r3, 0x506D
	  stw       r0, 0xC(r1)
	  addi      r9, r3, 0x3030
	  addi      r6, r4, 0x3079
	  stw       r9, 0x8(r1)
	  addi      r7, r4, 0x306E
	  lis       r3, 0x6E5F
	  li        r5, 0x4E
	  stw       r7, 0x14(r1)
	  li        r11, 0x54
	  addi      r4, r3, 0x696C
	  addi      r0, r3, 0x6972
	  stw       r5, 0x10(r1)
	  mr        r8, r6
	  addi      r10, r10, 0x696C
	  li        r5, 0x4E
	  stw       r7, 0x1C(r1)
	  li        r7, 0x54
	  stw       r11, 0x18(r1)
	  stw       r4, 0x24(r1)
	  stw       r9, 0x20(r1)
	  stw       r0, 0x2C(r1)
	  stw       r9, 0x28(r1)
	  lwz       r3, 0xB4(r30)
	  lwz       r4, 0xB0(r30)
	  bl        -0x21A4C
	  li        r0, 0
	  lis       r3, 0x6D30
	  stw       r0, 0xAC(r30)
	  addi      r6, r3, 0x3071
	  li        r5, 0x54
	  lwz       r3, 0xB0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x325F
	  lis       r5, 0x34
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3731
	  addi      r6, r4, 0x3079
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0xB0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x335F
	  lis       r5, 0x34
	  addi      r0, r4, 0x3030
	  lis       r4, 0x6D30
	  stw       r0, 0x1C(r3)
	  addi      r0, r5, 0x3731
	  addi      r6, r4, 0x306E
	  li        r5, 0x54
	  stw       r0, 0x18(r3)
	  lwz       r3, 0xB0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x345F
	  lis       r4, 0x34
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3731
	  stw       r0, 0x18(r3)
	  lwz       r3, 0xB0(r30)
	  bl        -0x22124
	  lis       r6, 0x6D30
	  lwz       r4, 0xB0(r30)
	  mr        r3, r31
	  li        r5, 0x54
	  addi      r6, r6, 0x3071
	  bl        -0x23514
	  stw       r3, 0xD0(r30)
	  lis       r6, 0x6D30
	  mr        r3, r31
	  li        r5, 0x54
	  lwz       r4, 0xB0(r30)
	  addi      r6, r6, 0x3079
	  bl        -0x2366C
	  stw       r3, 0xB8(r30)
	  lis       r6, 0x6D30
	  mr        r3, r31
	  li        r5, 0x54
	  lwz       r4, 0xB0(r30)
	  addi      r6, r6, 0x306E
	  bl        -0x23688
	  stw       r3, 0xBC(r30)
	  lfs       f1, -0x448(r2)
	  lwz       r3, 0xD0(r30)
	  bl        -0x22B30
	  lwz       r3, 0xB8(r30)
	  lfs       f1, -0x444(r2)
	  bl        -0x22B3C
	  lwz       r3, 0xBC(r30)
	  lfs       f1, -0x440(r2)
	  bl        -0x22B48
	  lwz       r4, 0xAC(r30)
	  mr        r3, r30
	  bl        -0x29A0
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032BFC8
 * Size:	00005C
 */
void og::newScreen::ObjWorldMapInfoWindow1::doStart(
    (Screen::StartSceneArg const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x6858(r13)
	  bl        -0x1F264
	  lis       r5, 0x6B6F
	  lis       r4, 0x6675
	  lwz       r3, 0xB0(r31)
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x7269
	  bl        -0x1948
	  bl        -0x20E4
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x15648
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032C024
 * Size:	000020
 */
void og::newScreen::ObjWorldMapInfoWindow1::commonUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x29B4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032C044
 * Size:	000038
 */
void og::newScreen::ObjWorldMapInfoWindow1::out_cancel(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  lwz       r4, 0xCC(r3)
	  stw       r0, 0x8(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032C07C
 * Size:	000038
 */
void og::newScreen::ObjWorldMapInfoWindow1::out_menu_0(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lwz       r4, 0xCC(r3)
	  stw       r0, 0x8(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032C0B4
 * Size:	000038
 */
void og::newScreen::ObjWorldMapInfoWindow1::out_menu_1(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  lwz       r4, 0xCC(r3)
	  stw       r0, 0x8(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032C0EC
 * Size:	00000C
 */
void og::newScreen::ObjWorldMapInfoWindow1::out_L(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x2
	  stw       r0, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032C0F8
 * Size:	00006C
 */
void og::newScreen::ObjWorldMapInfoWindow1::doUpdateFadeoutFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r31
	  bl        -0x15E28
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x126138
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032C164
 * Size:	00000C
 */
void og::newScreen::ObjWorldMapInfoWindow1::getResult(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xCC(r3)
	  lwz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032C170
 * Size:	000068
 */
void og::newScreen::ObjWorldMapInfoWindow1::__dt(void)
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
	  lis       r5, 0x804E
	  li        r4, 0
	  subi      r5, r5, 0x6180
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x10
	  stw       r0, 0x18(r30)
	  bl        -0x2F98
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        -0x308104

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
 * Address:	8032C1D8
 * Size:	000008
 */
u32 og::Screen::DispMemberWorldMapInfoWin1::getSize(void) { return 0x10; }

/*
 * --INFO--
 * Address:	8032C1E0
 * Size:	00000C
 */
void og::Screen::DispMemberWorldMapInfoWin1::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4F
	  addi      r3, r3, 0x4741
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032C1EC
 * Size:	000014
 */
void og::Screen::DispMemberWorldMapInfoWin1::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5769
	  lis       r3, 0x574D
	  addi      r4, r4, 0x6E31
	  addi      r3, r3, 0x6170
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032C200
 * Size:	000008
 */
void @24 @og::newScreen::ObjWorldMapInfoWindow1::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x94
	*/
}
