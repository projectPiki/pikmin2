#include "types.h"

/*
 * --INFO--
 * Address:	800494E4
 * Size:	00000C
 */
void J2DTevBlock::getTexNo(unsigned long) const
{
	/*
	.loc_0x0:
	  lis       r3, 0x1
	  subi      r3, r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800494F0
 * Size:	000004
 */
void J2DTevBlock::setTexNo(unsigned long, unsigned short) { }

/*
 * --INFO--
 * Address:	800494F4
 * Size:	000008
 */
u32 J2DTevBlock::getTevSwapModeTable(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	800494FC
 * Size:	000008
 */
u32 J2DTevBlock::getTevOrder(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	80049504
 * Size:	00000C
 */
void J2DTevBlock::getFontNo() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x1
	  subi      r3, r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80049510
 * Size:	000008
 */
u32 J2DIndBlock::getIndTexStageNum() const { return 0x0; }

/*
 * --INFO--
 * Address:	80049518
 * Size:	000050
 */
void J2DBloSaver::CTextureNameConnect::~CTextureNameConnect()
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
	  beq-      .loc_0x34
	  bl        .loc_0x50
	  extsh.    r0, r31
	  ble-      .loc_0x34
	  mr        r3, r30
	  bl        -0x25494

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x50:
	*/
}

/*
 * --INFO--
 * Address:	80049568
 * Size:	000070
 */
void J2DBloSaver::CTextureNameConnect::clear()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r31, 0x0(r3)
	  b         .loc_0x44

	.loc_0x24:
	  cmplwi    r31, 0
	  lwz       r30, 0x8(r31)
	  beq-      .loc_0x40
	  lwz       r3, 0x4(r31)
	  bl        -0x254C4
	  mr        r3, r31
	  bl        -0x254F0

	.loc_0x40:
	  mr        r31, r30

	.loc_0x44:
	  cmplwi    r31, 0
	  bne+      .loc_0x24
	  li        r0, 0
	  stw       r0, 0x0(r29)
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
 * Address:	800495D8
 * Size:	000068
 */
void J2DTevStage::J2DTevStage()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  subi      r4, r4, 0x7958
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x68
	  subi      r3, r2, 0x7A38
	  lbz       r4, 0x7(r31)
	  lbz       r0, 0x1(r3)
	  mr        r3, r31
	  rlwinm    r4,r4,0,30,27
	  rlwinm    r0,r0,2,0,29
	  or        r0, r4, r0
	  stb       r0, 0x7(r31)
	  lbz       r4, 0x7(r31)
	  lbz       r0, -0x7A38(r2)
	  rlwinm    r4,r4,0,0,29
	  or        r0, r4, r0
	  stb       r0, 0x7(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x68:
	*/
}

/*
 * --INFO--
 * Address:	80049640
 * Size:	0001E0
 */
void J2DTevStage::setTevStageInfo(const J2DTevStageInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lbz       r5, 0x1(r4)
	  stw       r31, 0xC(r1)
	  lbz       r0, 0x2(r4)
	  rlwinm    r5,r5,4,0,27
	  stw       r30, 0x8(r1)
	  or        r5, r5, r0
	  lbz       r6, 0x3(r4)
	  lbz       r7, 0x4(r4)
	  rlwinm    r0,r6,4,20,27
	  stb       r5, 0x2(r3)
	  or        r0, r0, r7
	  lbz       r6, 0x5(r4)
	  stb       r0, 0x3(r3)
	  rlwinm    r0,r6,2,22,29
	  cmplwi    r6, 0x1
	  lbz       r5, 0x1(r3)
	  lbz       r10, 0x9(r4)
	  rlwinm    r5,r5,0,30,28
	  lbz       r9, 0x8(r4)
	  or        r0, r5, r0
	  lbz       r8, 0x7(r4)
	  stb       r0, 0x1(r3)
	  lbz       r7, 0x6(r4)
	  bgt-      .loc_0x8C
	  lbz       r5, 0x1(r3)
	  rlwinm    r0,r8,4,20,27
	  rlwinm    r5,r5,0,28,25
	  or        r0, r5, r0
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x1(r3)
	  rlwinm    r0,r0,0,0,29
	  or        r0, r0, r7
	  stb       r0, 0x1(r3)
	  b         .loc_0xA8

	.loc_0x8C:
	  lbz       r0, 0x1(r3)
	  rlwimi    r0,r6,3,26,27
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x1(r3)
	  rlwinm    r0,r0,0,0,29
	  ori       r0, r0, 0x3
	  stb       r0, 0x1(r3)

	.loc_0xA8:
	  lbz       r0, 0x1(r3)
	  rlwinm    r5,r9,3,21,28
	  lbz       r8, 0xC(r4)
	  rlwinm    r6,r10,6,18,25
	  rlwinm    r7,r0,0,29,27
	  lbz       r0, 0xE(r4)
	  or        r7, r7, r5
	  lbz       r5, 0xA(r4)
	  stb       r7, 0x1(r3)
	  rlwinm    r9,r8,7,17,24
	  rlwinm    r12,r5,5,0,26
	  lbz       r7, 0xB(r4)
	  lbz       r5, 0x1(r3)
	  rlwinm    r10,r8,31,25,31
	  lbz       r31, 0xD(r4)
	  rlwinm    r11,r7,2,22,29
	  rlwimi    r6,r5,0,26,31
	  lbz       r30, 0x10(r4)
	  stb       r6, 0x1(r3)
	  rlwinm    r8,r31,4,20,27
	  lbz       r6, 0x12(r4)
	  rlwinm    r7,r0,2,22,29
	  lbz       r5, 0x6(r3)
	  cmplwi    r0, 0x1
	  lbz       r31, 0xF(r4)
	  rlwimi    r12,r5,0,27,31
	  lbz       r5, 0x11(r4)
	  stb       r12, 0x6(r3)
	  lbz       r12, 0x6(r3)
	  rlwinm    r4,r12,0,30,26
	  or        r4, r4, r11
	  stb       r4, 0x6(r3)
	  lbz       r4, 0x6(r3)
	  rlwinm    r4,r4,0,0,29
	  or        r4, r4, r10
	  stb       r4, 0x6(r3)
	  lbz       r4, 0x7(r3)
	  rlwimi    r9,r4,0,25,31
	  stb       r9, 0x7(r3)
	  lbz       r4, 0x7(r3)
	  rlwinm    r4,r4,0,28,24
	  or        r4, r4, r8
	  stb       r4, 0x7(r3)
	  lbz       r4, 0x5(r3)
	  rlwinm    r4,r4,0,30,28
	  or        r4, r4, r7
	  stb       r4, 0x5(r3)
	  bgt-      .loc_0x190
	  lbz       r4, 0x5(r3)
	  rlwinm    r0,r30,4,20,27
	  rlwinm    r4,r4,0,0,29
	  or        r4, r4, r31
	  stb       r4, 0x5(r3)
	  lbz       r4, 0x5(r3)
	  rlwinm    r4,r4,0,28,25
	  or        r0, r4, r0
	  stb       r0, 0x5(r3)
	  b         .loc_0x1AC

	.loc_0x190:
	  lbz       r4, 0x5(r3)
	  rlwimi    r4,r0,3,26,27
	  stb       r4, 0x5(r3)
	  lbz       r0, 0x5(r3)
	  rlwinm    r0,r0,0,0,29
	  ori       r0, r0, 0x3
	  stb       r0, 0x5(r3)

	.loc_0x1AC:
	  lbz       r7, 0x5(r3)
	  rlwinm    r4,r5,3,21,28
	  rlwinm    r0,r6,6,18,25
	  rlwinm    r5,r7,0,29,27
	  or        r4, r5, r4
	  stb       r4, 0x5(r3)
	  lbz       r4, 0x5(r3)
	  rlwimi    r0,r4,0,26,31
	  stb       r0, 0x5(r3)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80049820
 * Size:	00003C
 */
void __sinit_J2DBloSaver_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8005
	  lis       r5, 0x804F
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  subi      r4, r3, 0x6AE8
	  subi      r3, r13, 0x76A8
	  stw       r0, -0x76A8(r13)
	  addi      r5, r5, 0x408
	  bl        0x77EB8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
