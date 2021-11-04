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
 * Address:	80329190
 * Size:	000080
 */
void og::newScreen::ObjSMenuPauseVS::__ct((char const*))
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
	  bl        -0x12F9C
	  lis       r3, 0x804E
	  li        r0, 0
	  subi      r3, r3, 0x6418
	  lfs       f0, -0x4D0(r2)
	  stw       r3, 0x0(r30)
	  addi      r4, r3, 0x10
	  mr        r3, r30
	  stw       r4, 0x18(r30)
	  stw       r0, 0xA8(r30)
	  stw       r31, 0x14(r30)
	  stw       r0, 0xAC(r30)
	  stw       r0, 0xB0(r30)
	  stw       r0, 0xB4(r30)
	  stw       r0, 0xB8(r30)
	  stw       r0, 0xBC(r30)
	  stb       r0, 0xC0(r30)
	  stfs      f0, 0xC4(r30)
	  stb       r0, 0xC8(r30)
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
 * Address:	80329210
 * Size:	0000C4
 */
void og::newScreen::ObjSMenuPauseVS::__dt(void)
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
	  subi      r4, r4, 0x6418
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
	  bl        0xE8344
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x30C264
	  mr        r3, r30
	  li        r4, 0
	  bl        0xE82E4

	.loc_0x98:
	  extsh.    r0, r31
	  ble-      .loc_0xA8
	  mr        r3, r30
	  bl        -0x305200

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
 * Address:	803292D4
 * Size:	000334
 */
void og::newScreen::ObjSMenuPauseVS::doCreate((JKRArchive*))
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
	  bl        0x12ACB4
	  lis       r4, 0x4F
	  lis       r6, 0x535F
	  lis       r5, 0x534D
	  mr        r29, r3
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x5653
	  addi      r5, r5, 0x5F50
	  bl        -0x19E54
	  stw       r3, 0xA8(r30)
	  lwz       r0, 0xA8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  li        r3, 0xC
	  bl        -0x305488
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lis       r5, 0x804B
	  lis       r4, 0x804C
	  addi      r0, r5, 0x1148
	  li        r5, 0
	  stw       r0, 0x0(r3)
	  addi      r4, r4, 0x514
	  li        r0, 0x1
	  stw       r5, 0x4(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x8(r3)

	.loc_0x8C:
	  lis       r4, 0x4F
	  lis       r6, 0x535F
	  lis       r5, 0x534D
	  mr        r29, r3
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x5653
	  addi      r5, r5, 0x5F50
	  bl        -0x19EBC
	  stw       r3, 0xA8(r30)

	.loc_0xB0:
	  lis       r4, 0x4F
	  lis       r6, 0x5F41
	  mr        r3, r29
	  li        r5, 0x534D
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4C4C
	  bl        -0x1A080
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  lwz       r0, 0xBC(r29)
	  cmpwi     r0, 0x2
	  bne-      .loc_0xE8
	  li        r0, 0x1
	  stb       r0, 0xC8(r30)

	.loc_0xE8:
	  li        r3, 0x148
	  bl        -0x30551C
	  mr.       r0, r3
	  beq-      .loc_0x100
	  bl        0x10B9E0
	  mr        r0, r3

	.loc_0x100:
	  stw       r0, 0xB0(r30)
	  lis       r3, 0x8049
	  subi      r4, r3, 0xAF0
	  mr        r6, r31
	  lwz       r3, 0xB0(r30)
	  lis       r5, 0x110
	  bl        -0x2E9DC8
	  lis       r5, 0x6E75
	  lis       r4, 0x4E
	  lwz       r3, 0xB0(r30)
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x6D65
	  bl        -0x26558
	  li        r0, 0
	  lis       r5, 0x6E75
	  stb       r0, 0xB0(r3)
	  lis       r4, 0x4E
	  addi      r6, r5, 0x3032
	  lwz       r3, 0xB0(r30)
	  addi      r5, r4, 0x6D65
	  bl        -0x26578
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0xB0(r30)
	  bl        0x100C
	  li        r3, 0x78
	  bl        -0x305598
	  mr.       r0, r3
	  beq-      .loc_0x17C
	  bl        -0x1F620
	  mr        r0, r3

	.loc_0x17C:
	  lis       r10, 0x795F
	  stw       r0, 0xB4(r30)
	  addi      r0, r10, 0x6972
	  lis       r4, 0x6D30
	  lis       r3, 0x506D
	  stw       r0, 0xC(r1)
	  addi      r9, r3, 0x3031
	  addi      r6, r4, 0x3179
	  stw       r9, 0x8(r1)
	  addi      r7, r4, 0x316E
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
	  bl        -0x1F2C0
	  li        r0, 0
	  lis       r3, 0x6D30
	  stw       r0, 0xAC(r30)
	  addi      r6, r3, 0x3179
	  li        r5, 0x54
	  lwz       r3, 0xB0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x305F
	  lis       r4, 0x36
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3038
	  stw       r0, 0x18(r3)
	  lbz       r0, 0xC8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x27C
	  lwz       r3, 0xB0(r30)
	  lis       r4, 0x6D30
	  addi      r6, r4, 0x316E
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x325F
	  lis       r4, 0x36
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3038
	  stw       r0, 0x18(r3)
	  b         .loc_0x2B4

	.loc_0x27C:
	  lwz       r3, 0xB0(r30)
	  lis       r4, 0x6D30
	  addi      r6, r4, 0x316E
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x315F
	  lis       r4, 0x36
	  addi      r0, r5, 0x3030
	  stw       r0, 0x1C(r3)
	  addi      r0, r4, 0x3038
	  stw       r0, 0x18(r3)

	.loc_0x2B4:
	  lwz       r3, 0xB0(r30)
	  bl        -0x1F78C
	  lis       r6, 0x6D30
	  lwz       r4, 0xB0(r30)
	  mr        r3, r31
	  li        r5, 0x54
	  addi      r6, r6, 0x3179
	  bl        -0x20CB8
	  stw       r3, 0xB8(r30)
	  lis       r6, 0x6D30
	  mr        r3, r31
	  li        r5, 0x54
	  lwz       r4, 0xB0(r30)
	  addi      r6, r6, 0x316E
	  bl        -0x20CD4
	  stw       r3, 0xBC(r30)
	  lfs       f1, -0x4CC(r2)
	  lwz       r3, 0xB8(r30)
	  bl        -0x2017C
	  lwz       r3, 0xBC(r30)
	  lfs       f1, -0x4C8(r2)
	  bl        -0x20188
	  lwz       r4, 0xAC(r30)
	  mr        r3, r30
	  bl        .loc_0x334
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x334:
	*/
}

/*
 * --INFO--
 * Address:	80329608
 * Size:	000074
 */
void og::newScreen::ObjSMenuPauseVS::blink_Menu((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x4D0(r2)
	  cmpwi     r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stfs      f0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  blt-      .loc_0x40
	  cmpwi     r4, 0x1
	  bgt-      .loc_0x40
	  lfs       f0, -0x4C8(r2)
	  rlwinm    r0,r4,2,0,29
	  addi      r3, r1, 0x8
	  stfsx     f0, r3, r0

	.loc_0x40:
	  lwz       r3, 0xB8(r31)
	  lfs       f1, 0x8(r1)
	  lfs       f2, -0x4D0(r2)
	  bl        -0x2017C
	  lwz       r3, 0xBC(r31)
	  lfs       f1, 0xC(r1)
	  lfs       f2, -0x4D0(r2)
	  bl        -0x2018C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8032967C
 * Size:	000068
 */
void og::newScreen::ObjSMenuPauseVS::commonUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0xB4(r3)
	  bl        -0x1EA88
	  lfs       f3, 0x40(r31)
	  lfs       f2, 0x243C(r2)
	  lfs       f1, -0x4D0(r2)
	  lfs       f0, 0x2440(r2)
	  fadds     f2, f3, f2
	  lwz       r3, 0xB0(r31)
	  fadds     f0, f1, f0
	  stfs      f2, 0x140(r3)
	  stfs      f0, 0x144(r3)
	  lwz       r3, 0xB0(r31)
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
 * Address:	803296E4
 * Size:	000060
 */
void og::newScreen::ObjSMenuPauseVS::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x38(r30)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x44
	  mr        r3, r30
	  bl        .loc_0x60
	  mr        r31, r3

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	80329744
 * Size:	000230
 */
void og::newScreen::ObjSMenuPauseVS::menu(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lbz       r0, 0xC0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0xC4(r30)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x4C4(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0xC4(r30)
	  lfs       f1, 0xC4(r30)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x58
	  li        r0, 0x1
	  stb       r0, 0xC0(r30)

	.loc_0x58:
	  mr        r3, r30
	  bl        0x12A8A0
	  lis       r4, 0x800
	  lwz       r5, 0x1C(r3)
	  addi      r0, r4, 0x8
	  and.      r0, r5, r0
	  beq-      .loc_0xEC
	  lwz       r3, 0xAC(r30)
	  cmpwi     r3, 0
	  ble-      .loc_0x214
	  subi      r0, r3, 0x1
	  stw       r0, 0xAC(r30)
	  lwz       r0, 0xAC(r30)
	  lwz       r3, 0xB4(r30)
	  rlwinm    r4,r0,0,16,31
	  bl        -0x1EC78
	  lwz       r0, 0xAC(r30)
	  lfs       f0, -0x4D0(r2)
	  cmpwi     r0, 0
	  stfs      f0, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  blt-      .loc_0xC8
	  cmpwi     r0, 0x1
	  bgt-      .loc_0xC8
	  lfs       f0, -0x4C8(r2)
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r1, 0x10
	  stfsx     f0, r3, r0

	.loc_0xC8:
	  lwz       r3, 0xB8(r30)
	  lfs       f1, 0x10(r1)
	  lfs       f2, -0x4D0(r2)
	  bl        -0x20340
	  lwz       r3, 0xBC(r30)
	  lfs       f1, 0x14(r1)
	  lfs       f2, -0x4D0(r2)
	  bl        -0x20350
	  b         .loc_0x214

	.loc_0xEC:
	  lis       r3, 0x400
	  addi      r0, r3, 0x4
	  and.      r0, r5, r0
	  beq-      .loc_0x174
	  lwz       r3, 0xAC(r30)
	  cmpwi     r3, 0x1
	  bge-      .loc_0x214
	  addi      r0, r3, 0x1
	  stw       r0, 0xAC(r30)
	  lwz       r0, 0xAC(r30)
	  lwz       r3, 0xB4(r30)
	  rlwinm    r4,r0,0,16,31
	  bl        -0x1ED00
	  lwz       r0, 0xAC(r30)
	  lfs       f0, -0x4D0(r2)
	  cmpwi     r0, 0
	  stfs      f0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  blt-      .loc_0x150
	  cmpwi     r0, 0x1
	  bgt-      .loc_0x150
	  lfs       f0, -0x4C8(r2)
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r1, 0x8
	  stfsx     f0, r3, r0

	.loc_0x150:
	  lwz       r3, 0xB8(r30)
	  lfs       f1, 0x8(r1)
	  lfs       f2, -0x4D0(r2)
	  bl        -0x203C8
	  lwz       r3, 0xBC(r30)
	  lfs       f1, 0xC(r1)
	  lfs       f2, -0x4D0(r2)
	  bl        -0x203D8
	  b         .loc_0x214

	.loc_0x174:
	  lbz       r0, 0xC0(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1EC
	  rlwinm.   r0,r5,0,23,23
	  beq-      .loc_0x1EC
	  lwz       r0, 0xAC(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x1B8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6858(r13)
	  li        r31, 0x1
	  bl        -0x1CDD0
	  b         .loc_0x1E0

	.loc_0x1B8:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1E0
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xB0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6858(r13)
	  li        r31, 0x1
	  bl        -0x1CDFC

	.loc_0x1E0:
	  lwz       r3, 0xB4(r30)
	  bl        -0x1F794
	  b         .loc_0x214

	.loc_0x1EC:
	  andi.     r0, r5, 0x1200
	  beq-      .loc_0x214
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6858(r13)
	  li        r31, 0x1
	  bl        -0x1CD80

	.loc_0x214:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80329974
 * Size:	000038
 */
void og::newScreen::ObjSMenuPauseVS::out_cancel(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x2
	  lwz       r4, 0xA8(r3)
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
 * Address:	803299AC
 * Size:	000038
 */
void og::newScreen::ObjSMenuPauseVS::out_menu_0(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x2
	  lwz       r4, 0xA8(r3)
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
 * Address:	803299E4
 * Size:	000038
 */
void og::newScreen::ObjSMenuPauseVS::out_menu_1(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x7
	  lwz       r4, 0xA8(r3)
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
 * Address:	80329A1C
 * Size:	000010
 */
void og::newScreen::ObjSMenuPauseVS::doUpdateCancelAction(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xA8(r3)
	  li        r0, 0x2
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80329A2C
 * Size:	000060
 */
void og::newScreen::ObjSMenuPauseVS::doDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0xB0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  addi      r31, r4, 0x190
	  mr        r5, r31
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xB4(r30)
	  mr        r4, r31
	  bl        -0x1E8E4

	.loc_0x48:
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
 * Address:	80329A8C
 * Size:	000044
 */
void og::newScreen::ObjSMenuPauseVS::doStart((Screen::StartSceneArg const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x130E4
	  li        r0, 0
	  lfs       f0, -0x4D0(r2)
	  stb       r0, 0xC0(r31)
	  li        r3, 0x1
	  stfs      f0, 0xC4(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80329AD0
 * Size:	000008
 */
u32 og::newScreen::ObjSMenuPauseVS::doEnd((Screen::EndSceneArg const*))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	80329AD8
 * Size:	00004C
 */
void og::newScreen::ObjSMenuPauseVS::doUpdateFadein(void)
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
	  lwz       r12, 0x9C(r12)
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
 * Address:	80329B24
 * Size:	000048
 */
void og::newScreen::ObjSMenuPauseVS::doUpdateFadeinFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x4D0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0xB4(r3)
	  bl        -0x1FA40
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x80(r12)
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
 * Address:	80329B6C
 * Size:	000048
 */
void og::newScreen::ObjSMenuPauseVS::doUpdateFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x4D0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stfs      f0, 0x44(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xB4(r31)
	  bl        -0x1FA08
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80329BB4
 * Size:	00004C
 */
void og::newScreen::ObjSMenuPauseVS::doUpdateFadeout(void)
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
 * Address:	80329C00
 * Size:	0000AC
 */
void og::newScreen::ObjSMenuPauseVS::doUpdateFadeoutFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  mr        r31, r0
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  beq-      .loc_0x68
	  bge-      .loc_0x74
	  cmpwi     r3, 0x2
	  beq-      .loc_0x5C
	  b         .loc_0x74

	.loc_0x5C:
	  mr        r3, r30
	  bl        -0x13508
	  b         .loc_0x74

	.loc_0x68:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x128320

	.loc_0x74:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r30
	  bl        -0x13994
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
 * Address:	80329CAC
 * Size:	00000C
 */
void og::newScreen::ObjSMenuPauseVS::getResult(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xA8(r3)
	  lwz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80329CB8
 * Size:	000014
 */
void og::newScreen::ObjSMenuPauseVS::in_L(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f0, -0x4C0(r2)
	  stw       r0, 0x38(r3)
	  stfs      f0, 0x4C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80329CCC
 * Size:	00000C
 */
void og::newScreen::ObjSMenuPauseVS::wait(void)
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
 * Address:	80329CD8
 * Size:	00000C
 */
void og::newScreen::ObjSMenuPauseVS::out_L(void)
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
 * Address:	80329CE4
 * Size:	000004
 */
void og::newScreen::ObjSMenuPauseVS::doUpdateRAction(void) { }

/*
 * --INFO--
 * Address:	80329CE8
 * Size:	000004
 */
void og::newScreen::ObjSMenuPauseVS::doUpdateLAction(void) { }

/*
 * --INFO--
 * Address:	80329CEC
 * Size:	000004
 */
void og::newScreen::ObjSMenuPauseVS::in_R(void) { }

/*
 * --INFO--
 * Address:	80329CF0
 * Size:	000004
 */
void og::newScreen::ObjSMenuPauseVS::out_R(void) { }

/*
 * --INFO--
 * Address:	80329CF4
 * Size:	000008
 */
void @24 @og::newScreen::ObjSMenuPauseVS::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0xAE8
	*/
}
