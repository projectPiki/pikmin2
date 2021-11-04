#include "types.h"

/*
 * --INFO--
 * Address:	80031180
 * Size:	00004C
 */
JUTResFont::JUTResFont()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x4050
	  lis       r4, 0x804A
	  mr        r3, r31
	  addi      r0, r4, 0x4F0
	  stw       r0, 0x0(r31)
	  bl        0x148
	  mr        r3, r31
	  bl        -0x4040
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
 * Address:	800311CC
 * Size:	000074
 */
JUTResFont::JUTResFont(const ResFONT*, JKRHeap*)
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
	  bl        -0x40AC
	  lis       r4, 0x804A
	  mr        r3, r29
	  addi      r0, r4, 0x4F0
	  stw       r0, 0x0(r29)
	  bl        0xEC
	  mr        r3, r29
	  bl        -0x409C
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        0x100
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Address:	80031240
 * Size:	00008C
 */
JUTResFont::~JUTResFont()
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
	  beq-      .loc_0x70
	  lis       r4, 0x804A
	  addi      r0, r4, 0x4F0
	  stw       r0, 0x0(r30)
	  lbz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  bl        .loc_0x8C
	  mr        r3, r30
	  bl        0x70
	  mr        r3, r30
	  bl        -0x4118

	.loc_0x4C:
	  cmplwi    r30, 0
	  beq-      .loc_0x60
	  lis       r3, 0x804A
	  addi      r0, r3, 0x458
	  stw       r0, 0x0(r30)

	.loc_0x60:
	  extsh.    r0, r31
	  ble-      .loc_0x70
	  mr        r3, r30
	  bl        -0xD1F8

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x8C:
	*/
}

/*
 * --INFO--
 * Address:	800312CC
 * Size:	000024
 */
void JUTResFont::deleteMemBlocks_ResFont()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x50(r3)
	  bl        -0xD204
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800312F0
 * Size:	00002C
 */
void JUTResFont::initialize_state()
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, -0x1
	  stw       r4, 0x48(r3)
	  stw       r4, 0x50(r3)
	  stw       r4, 0x54(r3)
	  stw       r4, 0x58(r3)
	  stw       r4, 0x5C(r3)
	  stw       r4, 0x1C(r3)
	  stw       r4, 0x20(r3)
	  stw       r0, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003131C
 * Size:	000080
 */
void JUTResFont::initiate(const ResFONT*, JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x80
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x68
	  lwz       r3, 0x50(r31)
	  bl        -0xD268
	  li        r4, 0
	  li        r0, -0x1
	  stw       r4, 0x48(r31)
	  mr        r3, r31
	  stw       r4, 0x50(r31)
	  stw       r4, 0x54(r31)
	  stw       r4, 0x58(r31)
	  stw       r4, 0x5C(r31)
	  stw       r4, 0x1C(r31)
	  stw       r4, 0x20(r31)
	  stw       r0, 0x44(r31)
	  bl        -0x4200
	  li        r0, 0
	  li        r3, 0
	  stb       r0, 0x4(r31)
	  b         .loc_0x6C

	.loc_0x68:
	  li        r3, 0x1

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x80:
	*/
}

/*
 * --INFO--
 * Address:	8003139C
 * Size:	000138
 */
void JUTResFont::protected_initiate(const ResFONT*, JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  lwz       r3, 0x50(r3)
	  bl        -0xD2EC
	  li        r4, 0
	  li        r0, -0x1
	  stw       r4, 0x48(r31)
	  mr        r3, r31
	  stw       r4, 0x50(r31)
	  stw       r4, 0x54(r31)
	  stw       r4, 0x58(r31)
	  stw       r4, 0x5C(r31)
	  stw       r4, 0x1C(r31)
	  stw       r4, 0x20(r31)
	  stw       r0, 0x44(r31)
	  bl        -0x4284
	  cmplwi    r29, 0
	  bne-      .loc_0x6C
	  li        r3, 0
	  b         .loc_0x11C

	.loc_0x6C:
	  stw       r29, 0x48(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x4(r31)
	  bl        .loc_0x138
	  lhz       r6, 0x64(r31)
	  mr        r4, r30
	  lhz       r0, 0x62(r31)
	  li        r5, 0
	  lhz       r3, 0x60(r31)
	  add       r0, r0, r6
	  add       r0, r3, r0
	  rlwinm    r3,r0,2,0,29
	  bl        -0xD3F4
	  stw       r3, 0x50(r31)
	  lwz       r3, 0x50(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0xBC
	  li        r3, 0
	  b         .loc_0x11C

	.loc_0xBC:
	  lhz       r0, 0x60(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xD8
	  stw       r3, 0x54(r31)
	  lhz       r0, 0x60(r31)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r3, r0

	.loc_0xD8:
	  lhz       r0, 0x62(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xF4
	  stw       r3, 0x58(r31)
	  lhz       r0, 0x62(r31)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r3, r0

	.loc_0xF4:
	  lhz       r0, 0x64(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x104
	  stw       r3, 0x5C(r31)

	.loc_0x104:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1

	.loc_0x11C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x138:
	*/
}

/*
 * --INFO--
 * Address:	800314D4
 * Size:	00010C
 */
void JUTResFont::countBlock()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  sth       r0, 0x60(r3)
	  lis       r3, 0x4D41
	  addi      r31, r3, 0x5031
	  sth       r0, 0x62(r28)
	  sth       r0, 0x64(r28)
	  lwz       r3, 0x48(r28)
	  addi      r30, r3, 0x20
	  b         .loc_0xDC

	.loc_0x48:
	  lwz       r4, 0x0(r30)
	  cmpw      r4, r31
	  beq-      .loc_0xB4
	  bge-      .loc_0x80
	  lis       r3, 0x494E
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0xD0
	  bge-      .loc_0xC4
	  lis       r3, 0x474C
	  addi      r0, r3, 0x5931
	  cmpw      r4, r0
	  beq-      .loc_0xA4
	  b         .loc_0xC4

	.loc_0x80:
	  lis       r3, 0x5749
	  addi      r0, r3, 0x4431
	  cmpw      r4, r0
	  beq-      .loc_0x94
	  b         .loc_0xC4

	.loc_0x94:
	  lhz       r3, 0x60(r28)
	  addi      r0, r3, 0x1
	  sth       r0, 0x60(r28)
	  b         .loc_0xD0

	.loc_0xA4:
	  lhz       r3, 0x62(r28)
	  addi      r0, r3, 0x1
	  sth       r0, 0x62(r28)
	  b         .loc_0xD0

	.loc_0xB4:
	  lhz       r3, 0x64(r28)
	  addi      r0, r3, 0x1
	  sth       r0, 0x64(r28)
	  b         .loc_0xD0

	.loc_0xC4:
	  lis       r3, 0x8047
	  addi      r3, r3, 0x418C
	  bl        -0x8200

	.loc_0xD0:
	  lwz       r0, 0x4(r30)
	  addi      r29, r29, 0x1
	  add       r30, r30, r0

	.loc_0xDC:
	  lwz       r3, 0x48(r28)
	  lwz       r0, 0xC(r3)
	  cmplw     r29, r0
	  blt+      .loc_0x48
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800315E0
 * Size:	00013C
 */
void JUTResFont::setBlock()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x1
	  stw       r0, 0x34(r1)
	  subi      r0, r4, 0x1
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  li        r30, 0
	  lis       r3, 0x4D41
	  addi      r31, r3, 0x5031
	  li        r26, 0
	  mr        r29, r30
	  mr        r28, r30
	  sth       r0, 0x68(r25)
	  lwz       r3, 0x48(r25)
	  addi      r27, r3, 0x20
	  b         .loc_0x118

	.loc_0x44:
	  lwz       r4, 0x0(r27)
	  cmpw      r4, r31
	  beq-      .loc_0xD4
	  bge-      .loc_0x7C
	  lis       r3, 0x494E
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0x90
	  bge-      .loc_0x100
	  lis       r3, 0x474C
	  addi      r0, r3, 0x5931
	  cmpw      r4, r0
	  beq-      .loc_0xC4
	  b         .loc_0x100

	.loc_0x7C:
	  lis       r3, 0x5749
	  addi      r0, r3, 0x4431
	  cmpw      r4, r0
	  beq-      .loc_0xB4
	  b         .loc_0x100

	.loc_0x90:
	  stw       r27, 0x4C(r25)
	  lis       r3, 0x8047
	  addi      r0, r3, 0x4180
	  lwz       r3, 0x4C(r25)
	  lhz       r3, 0x8(r3)
	  rlwinm    r3,r3,2,0,29
	  add       r0, r0, r3
	  stw       r0, 0x6C(r25)
	  b         .loc_0x10C

	.loc_0xB4:
	  lwz       r3, 0x54(r25)
	  stwx      r27, r3, r30
	  addi      r30, r30, 0x4
	  b         .loc_0x10C

	.loc_0xC4:
	  lwz       r3, 0x58(r25)
	  stwx      r27, r3, r29
	  addi      r29, r29, 0x4
	  b         .loc_0x10C

	.loc_0xD4:
	  lwz       r3, 0x5C(r25)
	  stwx      r27, r3, r28
	  lwz       r3, 0x5C(r25)
	  lhz       r0, 0x68(r25)
	  lwzx      r3, r3, r28
	  lhz       r3, 0xA(r3)
	  cmplw     r0, r3
	  ble-      .loc_0xF8
	  sth       r3, 0x68(r25)

	.loc_0xF8:
	  addi      r28, r28, 0x4
	  b         .loc_0x10C

	.loc_0x100:
	  lis       r3, 0x8047
	  addi      r3, r3, 0x41AC
	  bl        -0x8348

	.loc_0x10C:
	  lwz       r0, 0x4(r27)
	  addi      r26, r26, 0x1
	  add       r27, r27, r0

	.loc_0x118:
	  lwz       r3, 0x48(r25)
	  lwz       r0, 0xC(r3)
	  cmplw     r26, r0
	  blt+      .loc_0x44
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003171C
 * Size:	0000F8
 */
void JUTResFont::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x1
	  stw       r0, 0x14(r1)
	  bl        0xB5738
	  li        r3, 0x1
	  bl        0xB7484
	  li        r3, 0x1
	  bl        0xB3860
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  bl        0xB72CC
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0xB5730
	  li        r3, 0
	  li        r4, 0
	  bl        0xB6D00
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x5
	  li        r6, 0xF
	  bl        0xB7948
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  bl        0xB2F60
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        0xB2F48
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  bl        0xB2F30
	  bl        0xB2EF4
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0xB2A9C
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0xB2A90
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0xB2A84
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80031814
 * Size:	000240
 */
void JUTResFont::setGX(JUtility::TColor, JUtility::TColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x0(r4)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  cmplwi    r0, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  bne-      .loc_0x4C
	  lwz       r4, 0x0(r31)
	  addis     r0, r4, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x228

	.loc_0x4C:
	  li        r3, 0x1
	  bl        0xB5600
	  li        r3, 0x2
	  bl        0xB734C
	  li        r3, 0x1
	  bl        0xB3728
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0xFF
	  bl        0xB7194
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0xB55F8
	  lwz       r0, 0x0(r30)
	  addi      r4, r1, 0xC
	  li        r3, 0x1
	  stw       r0, 0xC(r1)
	  bl        0xB6DA4
	  lwz       r0, 0x0(r31)
	  addi      r4, r1, 0x8
	  li        r3, 0x2
	  stw       r0, 0x8(r1)
	  bl        0xB6D90
	  li        r3, 0
	  li        r4, 0x2
	  li        r5, 0x4
	  li        r6, 0x8
	  li        r7, 0xF
	  bl        0xB6C20
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x2
	  li        r6, 0x4
	  li        r7, 0x7
	  bl        0xB6C4C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xB6C74
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xB6CC0
	  li        r3, 0x1
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0xB70D0
	  li        r3, 0x1
	  li        r4, 0xF
	  li        r5, 0
	  li        r6, 0xA
	  li        r7, 0xF
	  bl        0xB6BA4
	  li        r3, 0x1
	  li        r4, 0x7
	  li        r5, 0
	  li        r6, 0x5
	  li        r7, 0x7
	  bl        0xB6BD0
	  li        r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xB6BF8
	  li        r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0xB6C44
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x5
	  li        r6, 0xF
	  bl        0xB7710
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  bl        0xB2D28
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        0xB2D10
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  bl        0xB2CF8
	  bl        0xB2CBC
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0xB2864
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0xB2858
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0xB284C

	.loc_0x228:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80031A54
 * Size:	000404
 */
void JUTResFont::drawChar_scale(float, float, float, float, int, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stfd      f28, 0x70(r1)
	  psq_st    f28,0x78(r1),0,0
	  stfd      f27, 0x60(r1)
	  psq_st    f27,0x68(r1),0,0
	  stfd      f26, 0x50(r1)
	  psq_st    f26,0x58(r1),0,0
	  stmw      r27, 0x3C(r1)
	  fmr       f26, f1
	  mr        r27, r5
	  fmr       f27, f2
	  mr        r31, r3
	  fmr       f30, f3
	  addi      r6, r1, 0x8
	  fmr       f28, f4
	  li        r5, 0
	  bl        0x418
	  lbz       r0, 0x5(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x78
	  rlwinm.   r0,r27,0,24,31
	  bne-      .loc_0x80

	.loc_0x78:
	  fmr       f31, f26
	  b         .loc_0xD0

	.loc_0x80:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r1)
	  stw       r4, 0x10(r1)
	  lfd       f1, -0x7C78(r2)
	  lfd       f0, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f0, f0, f1
	  lfd       f1, -0x7C70(r2)
	  stw       r4, 0x18(r1)
	  fdivs     f2, f30, f0
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  fnmsubs   f31, f0, f2, f26

	.loc_0xD0:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x1C(r1)
	  lwz       r0, 0x8(r31)
	  stw       r4, 0x18(r1)
	  lfd       f2, -0x7C78(r2)
	  xoris     r3, r0, 0x8000
	  lfd       f0, 0x18(r1)
	  lbz       r0, 0x5(r31)
	  fsubs     f0, f0, f2
	  stw       r3, 0x14(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x10(r1)
	  fdivs     f1, f30, f0
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fmuls     f29, f0, f1
	  bne-      .loc_0x1E0
	  rlwinm.   r0,r27,0,24,31
	  bne-      .loc_0x190
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x1C(r1)
	  lfd       f2, -0x7C78(r2)
	  stw       r4, 0x18(r1)
	  lbz       r3, 0x9(r1)
	  lfd       f0, 0x18(r1)
	  lbz       r0, 0x8(r1)
	  fsubs     f0, f0, f2
	  stw       r4, 0x10(r1)
	  add       r0, r3, r0
	  xoris     r0, r0, 0x8000
	  fdivs     f1, f30, f0
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fmuls     f29, f0, f1
	  b         .loc_0x1E0

	.loc_0x190:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x1C(r1)
	  lbz       r0, 0x9(r1)
	  stw       r4, 0x18(r1)
	  lfd       f1, -0x7C78(r2)
	  lfd       f0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f0, f0, f1
	  lfd       f1, -0x7C70(r2)
	  stw       r4, 0x10(r1)
	  fdivs     f2, f30, f0
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fmuls     f29, f0, f2

	.loc_0x1E0:
	  mr        r3, r31
	  fadds     f30, f31, f30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  stw       r0, 0x18(r1)
	  lfd       f1, -0x7C78(r2)
	  lfd       f0, 0x18(r1)
	  lwz       r12, 0x1C(r12)
	  fsubs     f0, f0, f1
	  fdivs     f26, f28, f0
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  stw       r0, 0x10(r1)
	  lfd       f1, -0x7C78(r2)
	  lfd       f0, 0x10(r1)
	  lwz       r12, 0x24(r12)
	  fsubs     f0, f0, f1
	  fnmsubs   f26, f0, f26, f27
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  stw       r0, 0x20(r1)
	  lfd       f1, -0x7C78(r2)
	  lfd       f0, 0x20(r1)
	  lwz       r12, 0x20(r12)
	  fsubs     f0, f0, f1
	  fdivs     f28, f28, f0
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x66(r31)
	  xoris     r10, r3, 0x8000
	  lwz       r3, 0x58(r31)
	  lis       r7, 0x4330
	  rlwinm    r0,r0,2,0,29
	  lwz       r11, 0x1C(r31)
	  lwzx      r8, r3, r0
	  li        r3, 0
	  lwz       r12, 0x20(r31)
	  rlwinm    r6,r11,15,0,16
	  lhz       r5, 0xC(r8)
	  li        r4, 0x9
	  lhz       r0, 0xE(r8)
	  rlwinm    r9,r12,15,0,16
	  add       r5, r11, r5
	  lhz       r11, 0x1A(r8)
	  add       r0, r12, r0
	  lhz       r12, 0x1C(r8)
	  rlwinm    r8,r5,15,0,16
	  stw       r10, 0x2C(r1)
	  rlwinm    r0,r0,15,0,16
	  lfd       f1, -0x7C78(r2)
	  divw      r30, r6, r11
	  stw       r7, 0x28(r1)
	  li        r5, 0x1
	  lfd       f0, 0x28(r1)
	  li        r6, 0x4
	  li        r7, 0
	  fsubs     f0, f0, f1
	  divw      r29, r9, r12
	  fmadds    f27, f0, f28, f27
	  divw      r28, r8, r11
	  divw      r27, r0, r12
	  bl        0xB299C
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0xB3C0C
	  lis       r8, 0xCC01
	  lfs       f0, -0x7C80(r2)
	  stfs      f31, -0x8000(r8)
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  stfs      f26, -0x8000(r8)
	  li        r6, 0x3
	  li        r7, 0
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0xC(r31)
	  stw       r0, -0x8000(r8)
	  sth       r30, -0x8000(r8)
	  sth       r29, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f26, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x10(r31)
	  stw       r0, -0x8000(r8)
	  sth       r28, -0x8000(r8)
	  sth       r29, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f27, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x18(r31)
	  stw       r0, -0x8000(r8)
	  sth       r28, -0x8000(r8)
	  sth       r27, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f27, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  lwz       r0, 0x14(r31)
	  stw       r0, -0x8000(r8)
	  sth       r30, -0x8000(r8)
	  sth       r27, -0x8000(r8)
	  bl        0xB28FC
	  fmr       f1, f29
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  psq_l     f28,0x78(r1),0,0
	  lfd       f28, 0x70(r1)
	  psq_l     f27,0x68(r1),0,0
	  lfd       f27, 0x60(r1)
	  psq_l     f26,0x58(r1),0,0
	  lfd       f26, 0x50(r1)
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80031E58
 * Size:	00000C
 */
void JUTResFont::getDescent() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4C(r3)
	  lhz       r3, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80031E64
 * Size:	00005C
 */
void JUTResFont::getHeight() const
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
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  add       r3, r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80031EC0
 * Size:	00000C
 */
void JUTResFont::getAscent() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4C(r3)
	  lhz       r3, 0xA(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80031ECC
 * Size:	000088
 */
void JUTResFont::loadFont(int, _GXTexMapID, JUTFont::TWidth*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r6, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  mr        r5, r6
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x1D4
	  lwz       r12, 0x0(r29)
	  mr        r0, r3
	  mr        r3, r29
	  mr        r5, r31
	  lwz       r12, 0x44(r12)
	  mr        r4, r0
	  mtctr     r12
	  bctrl
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
 * Address:	80031F54
 * Size:	0000C0
 */
void JUTResFont::getWidthEntry(int, JUTFont::TWidth*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x178
	  li        r0, 0
	  lwz       r7, 0x54(r30)
	  stb       r0, 0x0(r31)
	  li        r8, 0
	  lwz       r5, 0x4C(r30)
	  mr        r4, r7
	  lhz       r6, 0x60(r30)
	  lhz       r0, 0xE(r5)
	  stb       r0, 0x1(r31)
	  mtctr     r6
	  cmpwi     r6, 0
	  ble-      .loc_0xA8

	.loc_0x50:
	  lwz       r5, 0x0(r4)
	  lhz       r0, 0x8(r5)
	  cmpw      r0, r3
	  bgt-      .loc_0x9C
	  lhz       r0, 0xA(r5)
	  cmpw      r3, r0
	  bgt-      .loc_0x9C
	  rlwinm    r0,r8,2,0,29
	  lwzx      r4, r7, r0
	  lhz       r0, 0x8(r4)
	  sub       r0, r3, r0
	  rlwinm    r3,r0,1,0,30
	  addi      r3, r3, 0xC
	  add       r3, r4, r3
	  lbz       r0, 0x0(r3)
	  stb       r0, 0x0(r31)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x1(r31)
	  b         .loc_0xA8

	.loc_0x9C:
	  addi      r4, r4, 0x4
	  addi      r8, r8, 0x1
	  bdnz+     .loc_0x50

	.loc_0xA8:
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
 * Address:	80032014
 * Size:	00004C
 */
void JUTResFont::getCellWidth() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r4, 0x58(r3)
	  stw       r0, 0x14(r1)
	  cmplwi    r4, 0
	  beq-      .loc_0x2C
	  lwz       r4, 0x0(r4)
	  cmplwi    r4, 0
	  beq-      .loc_0x2C
	  lhz       r3, 0xC(r4)
	  b         .loc_0x3C

	.loc_0x2C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032060
 * Size:	00000C
 */
void JUTResFont::getWidth() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4C(r3)
	  lhz       r3, 0xE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003206C
 * Size:	00004C
 */
void JUTResFont::getCellHeight() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r4, 0x58(r3)
	  stw       r0, 0x14(r1)
	  cmplwi    r4, 0
	  beq-      .loc_0x2C
	  lwz       r4, 0x0(r4)
	  cmplwi    r4, 0
	  beq-      .loc_0x2C
	  lhz       r3, 0xE(r4)
	  b         .loc_0x3C

	.loc_0x2C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800320B8
 * Size:	000030
 */
void JUTResFont::isLeadByte(int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r5, 0x6C(r3)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r5)
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
 * Address:	800320E8
 * Size:	0001AC
 */
void JUTResFont::getFontCode(int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lwz       r5, 0x4C(r3)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r12, 0x0(r3)
	  lhz       r31, 0x12(r5)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x2
	  bne-      .loc_0x70
	  lhz       r0, 0x68(r29)
	  cmplwi    r0, 0x8000
	  blt-      .loc_0x70
	  cmpwi     r30, 0x20
	  blt-      .loc_0x70
	  cmplwi    r30, 0x7F
	  bge-      .loc_0x70
	  lis       r3, 0x8047
	  rlwinm    r0,r30,1,0,30
	  addi      r3, r3, 0x41C0
	  add       r3, r3, r0
	  lhz       r30, -0x40(r3)

	.loc_0x70:
	  lwz       r5, 0x5C(r29)
	  li        r6, 0
	  lhz       r0, 0x64(r29)
	  mr        r3, r5
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x18C

	.loc_0x8C:
	  lwz       r4, 0x0(r3)
	  lhz       r0, 0xA(r4)
	  cmpw      r0, r30
	  bgt-      .loc_0x180
	  lhz       r0, 0xC(r4)
	  cmpw      r30, r0
	  bgt-      .loc_0x180
	  rlwinm    r0,r6,2,0,29
	  lwzx      r4, r5, r0
	  lhz       r0, 0x8(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0xC8
	  lhz       r0, 0xA(r4)
	  sub       r31, r30, r0
	  b         .loc_0x18C

	.loc_0xC8:
	  cmplwi    r0, 0x2
	  bne-      .loc_0xE8
	  lhz       r0, 0xA(r4)
	  sub       r0, r30, r0
	  rlwinm    r0,r0,1,0,30
	  add       r3, r4, r0
	  lhz       r31, 0x10(r3)
	  b         .loc_0x18C

	.loc_0xE8:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x150
	  lhz       r3, 0xE(r4)
	  addi      r4, r4, 0x10
	  li        r5, 0
	  subi      r6, r3, 0x1
	  b         .loc_0x144

	.loc_0x104:
	  add       r3, r6, r5
	  rlwinm    r0,r3,1,31,31
	  add       r0, r0, r3
	  srawi     r7, r0, 0x1
	  rlwinm    r3,r7,2,0,29
	  lhzx      r0, r4, r3
	  cmpw      r30, r0
	  bge-      .loc_0x12C
	  subi      r6, r7, 0x1
	  b         .loc_0x144

	.loc_0x12C:
	  ble-      .loc_0x138
	  addi      r5, r7, 0x1
	  b         .loc_0x144

	.loc_0x138:
	  add       r3, r4, r3
	  lhz       r31, 0x2(r3)
	  b         .loc_0x18C

	.loc_0x144:
	  cmpw      r6, r5
	  bge+      .loc_0x104
	  b         .loc_0x18C

	.loc_0x150:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x18C
	  lhz       r0, 0xE(r4)
	  li        r5, 0
	  cmplwi    r0, 0x1
	  bne-      .loc_0x16C
	  addi      r5, r4, 0x10

	.loc_0x16C:
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x1C4
	  mr        r31, r3
	  b         .loc_0x18C

	.loc_0x180:
	  addi      r3, r3, 0x4
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x8C

	.loc_0x18C:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	80032294
 * Size:	00000C
 */
void JUTResFont::getFontType() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4C(r3)
	  lhz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800322A0
 * Size:	000180
 */
void JUTResFont::loadImage(int, _GXTexMapID)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lhz       r7, 0x62(r3)
	  li        r3, 0
	  mtctr     r7
	  cmpwi     r7, 0
	  ble-      .loc_0x7C

	.loc_0x3C:
	  lwz       r6, 0x58(r28)
	  lwzx      r5, r6, r3
	  lhz       r0, 0x8(r5)
	  cmpw      r0, r4
	  bgt-      .loc_0x70
	  lhz       r0, 0xA(r5)
	  cmpw      r4, r0
	  bgt-      .loc_0x70
	  rlwinm    r0,r31,2,0,29
	  lwzx      r3, r6, r0
	  lhz       r0, 0x8(r3)
	  sub       r4, r4, r0
	  b         .loc_0x7C

	.loc_0x70:
	  addi      r3, r3, 0x4
	  addi      r31, r31, 0x1
	  bdnz+     .loc_0x3C

	.loc_0x7C:
	  cmpw      r31, r7
	  beq-      .loc_0x160
	  lwz       r3, 0x58(r28)
	  rlwinm    r7,r31,2,0,29
	  lwzx      r5, r3, r7
	  lhz       r6, 0x16(r5)
	  lhz       r3, 0x18(r5)
	  lhz       r0, 0xC(r5)
	  mullw     r3, r6, r3
	  divw      r30, r4, r3
	  mullw     r3, r30, r3
	  sub       r4, r4, r3
	  divw      r5, r4, r6
	  mullw     r3, r5, r6
	  sub       r3, r4, r3
	  mullw     r0, r3, r0
	  stw       r0, 0x1C(r28)
	  lwz       r3, 0x58(r28)
	  lwzx      r3, r3, r7
	  lhz       r0, 0xE(r3)
	  mullw     r0, r5, r0
	  stw       r0, 0x20(r28)
	  lwz       r0, 0x44(r28)
	  cmpw      r30, r0
	  bne-      .loc_0xEC
	  lhz       r0, 0x66(r28)
	  cmpw      r31, r0
	  beq-      .loc_0x154

	.loc_0xEC:
	  lwz       r4, 0x58(r28)
	  addi      r3, r28, 0x24
	  li        r8, 0
	  li        r9, 0
	  lwzx      r11, r4, r7
	  li        r10, 0
	  lwz       r0, 0x10(r11)
	  lhz       r5, 0x1A(r11)
	  mullw     r4, r30, r0
	  lhz       r6, 0x1C(r11)
	  lhz       r7, 0x14(r11)
	  addi      r4, r4, 0x20
	  add       r4, r11, r4
	  bl        0xB4DBC
	  lfs       f1, -0x7C80(r2)
	  addi      r3, r28, 0x24
	  li        r4, 0x1
	  li        r5, 0x1
	  fmr       f2, f1
	  li        r6, 0
	  fmr       f3, f1
	  li        r7, 0
	  li        r8, 0
	  bl        0xB5028
	  stw       r30, 0x44(r28)
	  sth       r31, 0x66(r28)

	.loc_0x154:
	  mr        r4, r29
	  addi      r3, r28, 0x24
	  bl        0xB5314

	.loc_0x160:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032420
 * Size:	000044
 */
void JUTResFont::convertSjis(int, unsigned short*) const
{
	/*
	.loc_0x0:
	  rlwinm    r3,r4,0,24,31
	  rlwinm    r4,r4,24,24,31
	  subi      r6, r3, 0x40
	  cmpwi     r6, 0x40
	  blt-      .loc_0x18
	  subi      r6, r6, 0x1

	.loc_0x18:
	  cmplwi    r5, 0
	  li        r3, 0x31C
	  beq-      .loc_0x28
	  lhz       r3, 0x0(r5)

	.loc_0x28:
	  subi      r0, r4, 0x88
	  rlwinm    r4,r3,0,16,31
	  mulli     r3, r0, 0xBC
	  subi      r0, r3, 0x5E
	  add       r3, r0, r4
	  add       r3, r6, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032464
 * Size:	000008
 */
void JUTResFont::getResFont() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x48(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8003246C
 * Size:	00000C
 */
void JUTResFont::getLeading() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4C(r3)
	  lhz       r3, 0x10(r3)
	  blr
	*/
}
