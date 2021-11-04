#include "types.h"

/*
 * --INFO--
 * Address:	8002D458
 * Size:	0000D4
 */
JUTGamePad::JUTGamePad(JUTGamePad::EPadPort)
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
	  bl        -0x104A8
	  lis       r4, 0x804A
	  addi      r3, r30, 0x18
	  addi      r0, r4, 0x4C0
	  stw       r0, 0x0(r30)
	  bl        0x98C
	  addi      r3, r30, 0x48
	  bl        0xB50
	  addi      r3, r30, 0x58
	  bl        0xB48
	  mr        r4, r30
	  addi      r3, r30, 0x68
	  bl        0xEC4
	  mr        r4, r30
	  addi      r3, r30, 0x80
	  bl        -0x6CF8
	  li        r0, 0
	  mr        r3, r30
	  stb       r0, 0x98(r30)
	  sth       r31, 0x7C(r30)
	  lha       r0, 0x7C(r30)
	  cmpwi     r0, 0
	  blt-      .loc_0x88
	  subi      r5, r13, 0x774C
	  lbzx      r4, r5, r31
	  addi      r0, r4, 0x1
	  stbx      r0, r5, r31

	.loc_0x88:
	  bl        0xF8
	  lis       r3, 0x8050
	  addi      r4, r30, 0x80
	  addi      r3, r3, 0x6E80
	  bl        -0x6C0C
	  mr        r3, r30
	  bl        0x544
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x90(r30)
	  stw       r0, 0x94(r30)
	  bl        0x140
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
 * Address:	........
 * Size:	000054
 */
void JSULink<JUTGamePad>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
JUTGamePad::JUTGamePad()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D52C
 * Size:	0000AC
 */
JUTGamePad::~JUTGamePad()
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
	  beq-      .loc_0x90
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4C0
	  stw       r0, 0x0(r30)
	  lha       r5, 0x7C(r30)
	  extsh.    r0, r5
	  blt-      .loc_0x50
	  subi      r4, r13, 0x774C
	  li        r0, -0x1
	  lbzx      r3, r4, r5
	  subi      r3, r3, 0x1
	  stbx      r3, r4, r5
	  sth       r0, 0x7C(r30)

	.loc_0x50:
	  lis       r3, 0x8050
	  addi      r4, r30, 0x80
	  addi      r3, r3, 0x6E80
	  bl        -0x6964
	  addic.    r0, r30, 0x80
	  beq-      .loc_0x74
	  addi      r3, r30, 0x80
	  li        r4, 0
	  bl        -0x6DCC

	.loc_0x74:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x10574
	  extsh.    r0, r31
	  ble-      .loc_0x90
	  mr        r3, r30
	  bl        -0x9504

	.loc_0x90:
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
 * Address:	8002D5D8
 * Size:	00003C
 */
void JUTGamePad::initList()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, -0x7750(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x2C
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6E80
	  bl        -0x6D28
	  li        r0, 0x1
	  stb       r0, -0x7750(r13)

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002D614
 * Size:	000038
 */
void JUTGamePad::init()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x5
	  stw       r0, 0x14(r1)
	  bl        0xC6EC0
	  li        r0, 0x3
	  li        r3, 0x3
	  stw       r0, -0x7744(r13)
	  bl        0xC7668
	  bl        0xC69A4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002D64C
 * Size:	000014
 */
void JUTGamePad::clear()
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, 0x1
	  stb       r4, 0x98(r3)
	  stb       r0, 0xA8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002D660
 * Size:	0002C8
 */
void JUTGamePad::read()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  stw       r0, 0x44(r1)
	  addi      r3, r3, 0x7008
	  stmw      r24, 0x20(r1)
	  bl        0xC6AB4
	  lwz       r0, -0x7FC4(r13)
	  stw       r3, -0x7740(r13)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x4C
	  bge-      .loc_0x58
	  cmpwi     r0, 0x1
	  bge-      .loc_0x3C
	  b         .loc_0x58

	.loc_0x3C:
	  lis       r3, 0x8050
	  addi      r3, r3, 0x7008
	  bl        0xC5C7C
	  b         .loc_0x58

	.loc_0x4C:
	  lis       r3, 0x8050
	  addi      r3, r3, 0x7008
	  bl        0xC5D80

	.loc_0x58:
	  lis       r6, 0x8050
	  lis       r5, 0x8050
	  lis       r4, 0x8050
	  lis       r3, 0x8050
	  addi      r29, r6, 0x7008
	  addi      r28, r5, 0x7038
	  addi      r27, r4, 0x70F8
	  addi      r26, r3, 0x7138
	  li        r31, 0
	  li        r24, 0
	  lis       r30, 0x8000

	.loc_0x84:
	  lbz       r3, 0xA(r29)
	  srw       r25, r30, r24
	  extsb.    r0, r3
	  bne-      .loc_0xEC
	  lbz       r4, 0x2(r29)
	  mr        r3, r27
	  lbz       r5, 0x3(r29)
	  li        r7, 0
	  lwz       r6, -0x7FC8(r13)
	  lwz       r8, 0x0(r28)
	  bl        0x8F0
	  lbz       r4, 0x4(r29)
	  rlwinm    r25,r3,24,0,7
	  lbz       r5, 0x5(r29)
	  mr        r3, r26
	  lwz       r6, -0x7FC8(r13)
	  li        r7, 0x1
	  lwz       r8, 0x0(r28)
	  bl        0x8D0
	  rlwinm    r0,r3,16,0,15
	  mr        r3, r28
	  or        r25, r25, r0
	  mr        r4, r29
	  mr        r5, r25
	  bl        0x70C
	  b         .loc_0x164

	.loc_0xEC:
	  extsb     r0, r3
	  cmpwi     r0, -0x1
	  bne-      .loc_0x154
	  lwz       r6, -0x7FC8(r13)
	  mr        r3, r27
	  li        r4, 0
	  li        r5, 0
	  li        r7, 0
	  li        r8, 0
	  bl        0x88C
	  lwz       r6, -0x7FC8(r13)
	  mr        r3, r26
	  li        r4, 0
	  li        r5, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0x870
	  mr        r3, r28
	  li        r4, 0
	  li        r5, 0
	  bl        0x6B4
	  lwz       r0, -0x7748(r13)
	  and.      r0, r0, r25
	  bne-      .loc_0x164
	  or        r31, r31, r25
	  b         .loc_0x164

	.loc_0x154:
	  li        r0, 0
	  stw       r0, 0x4(r28)
	  stw       r0, 0x8(r28)
	  stw       r0, 0x18(r28)

	.loc_0x164:
	  addi      r24, r24, 0x1
	  addi      r28, r28, 0x30
	  cmpwi     r24, 0x4
	  addi      r27, r27, 0x10
	  addi      r26, r26, 0x10
	  addi      r29, r29, 0xC
	  blt+      .loc_0x84
	  lis       r3, 0x8050
	  lwz       r30, 0x6E80(r3)
	  b         .loc_0x294

	.loc_0x18C:
	  lwz       r4, 0x0(r30)
	  lwz       r3, 0x94(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x220
	  lbz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x220
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x8
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r8, 0x0(r30)
	  li        r7, 0
	  lbz       r4, 0xA(r1)
	  lbz       r5, 0xB(r1)
	  addi      r3, r8, 0x48
	  lwz       r6, -0x7FC8(r13)
	  lwz       r8, 0x18(r8)
	  bl        0x7C4
	  lwz       r8, 0x0(r30)
	  rlwinm    r24,r3,24,0,7
	  lbz       r4, 0xC(r1)
	  li        r7, 0x1
	  lbz       r5, 0xD(r1)
	  addi      r3, r8, 0x58
	  lwz       r6, -0x7FC8(r13)
	  lwz       r8, 0x18(r8)
	  bl        0x7A0
	  rlwinm    r0,r3,16,0,15
	  lwz       r3, 0x0(r30)
	  or        r24, r24, r0
	  addi      r4, r1, 0x8
	  mr        r5, r24
	  addi      r3, r3, 0x18
	  bl        0x5D8
	  b         .loc_0x23C

	.loc_0x220:
	  lha       r0, 0x7C(r4)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x234
	  mr        r3, r4
	  bl        .loc_0x2C8

	.loc_0x234:
	  lwz       r3, 0x0(r30)
	  bl        0x1A4

	.loc_0x23C:
	  lwz       r4, 0x0(r30)
	  lwz       r3, 0x90(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x290
	  lbz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x290
	  lha       r4, 0x7C(r4)
	  extsh.    r0, r4
	  blt-      .loc_0x290
	  mulli     r5, r4, 0xC
	  lis       r4, 0x8050
	  addi      r0, r4, 0x7008
	  add       r4, r0, r5
	  lbz       r0, 0xA(r4)
	  extsb.    r0, r0
	  bne-      .loc_0x290
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x290:
	  lwz       r30, 0xC(r30)

	.loc_0x294:
	  cmplwi    r30, 0
	  bne+      .loc_0x18C
	  cmplwi    r31, 0
	  beq-      .loc_0x2AC
	  mr        r3, r31
	  bl        0xC64B0

	.loc_0x2AC:
	  bl        0x45C
	  lmw       r24, 0x20(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r3, -0x7740(r13)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x2C8:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JUTGamePad::setStatus(unsigned long, char, char, char, char, unsigned char,
                           unsigned char, unsigned char, unsigned char,
                           unsigned long, PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void JUTGamePad::setStatus_PADStatus(const PADStatus*, unsigned long,
                                     PADStatus*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void JUTGamePad::setStatus_data(const void*, unsigned long, PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void JUTGamePad::setStatus_sticks_subroutine(PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D928
 * Size:	0000A8
 */
void JUTGamePad::assign()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8050
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0x4
	  addi      r4, r4, 0x7008
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  subi      r3, r13, 0x774C
	  mtctr     r0

	.loc_0x2C:
	  lbz       r0, 0xA(r4)
	  extsb.    r0, r0
	  bne-      .loc_0x84
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  sth       r5, 0x7C(r31)
	  li        r0, 0x1
	  subi      r4, r13, 0x774C
	  lis       r3, 0x8050
	  stbx      r0, r4, r5
	  mulli     r6, r5, 0x30
	  addi      r0, r3, 0x7038
	  lwz       r4, 0x3C(r31)
	  add       r3, r0, r6
	  lwz       r5, 0x40(r31)
	  lwz       r6, 0x44(r31)
	  bl        0xE34
	  mr        r4, r31
	  addi      r3, r31, 0x68
	  bl        0x9C4
	  b         .loc_0x94

	.loc_0x84:
	  addi      r4, r4, 0xC
	  addi      r3, r3, 0x1
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x2C

	.loc_0x94:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002D9D0
 * Size:	00006C
 */
void JUTGamePad::checkResetCallback(long long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  xoris     r5, r5, 0x8000
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x7728(r13)
	  lwz       r7, -0x7724(r13)
	  xoris     r4, r0, 0x8000
	  subc      r0, r6, r7
	  subfe     r4, r4, r5
	  subfe     r4, r5, r5
	  neg.      r4, r4
	  bne-      .loc_0x5C
	  li        r0, 0x1
	  lwz       r12, -0x7734(r13)
	  stb       r0, -0x771F(r13)
	  cmplwi    r12, 0
	  lha       r0, 0x7C(r3)
	  stw       r0, -0x771C(r13)
	  beq-      .loc_0x5C
	  lha       r3, 0x7C(r3)
	  lwz       r4, -0x7730(r13)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002DA3C
 * Size:	00032C
 */
void JUTGamePad::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lha       r3, 0x7C(r3)
	  cmpwi     r3, -0x1
	  beq-      .loc_0x30C
	  extsh.    r0, r3
	  blt-      .loc_0x168
	  cmpwi     r3, 0x4
	  bge-      .loc_0x168
	  mulli     r4, r3, 0x30
	  lis       r3, 0x8050
	  lis       r5, 0x8050
	  addi      r0, r3, 0x7038
	  add       r7, r0, r4
	  lis       r4, 0x8050
	  lwz       r6, 0x0(r7)
	  lis       r3, 0x8050
	  addi      r5, r5, 0x70F8
	  addi      r0, r4, 0x7138
	  stw       r6, 0x18(r30)
	  addi      r3, r3, 0x7008
	  lwz       r4, 0x4(r7)
	  stw       r4, 0x1C(r30)
	  lwz       r4, 0x8(r7)
	  stw       r4, 0x20(r30)
	  lbz       r4, 0xC(r7)
	  stb       r4, 0x24(r30)
	  lbz       r4, 0xD(r7)
	  stb       r4, 0x25(r30)
	  lbz       r4, 0xE(r7)
	  stb       r4, 0x26(r30)
	  lbz       r4, 0xF(r7)
	  stb       r4, 0x27(r30)
	  lfs       f0, 0x10(r7)
	  stfs      f0, 0x28(r30)
	  lfs       f0, 0x14(r7)
	  stfs      f0, 0x2C(r30)
	  lwz       r4, 0x18(r7)
	  stw       r4, 0x30(r30)
	  lwz       r4, 0x1C(r7)
	  stw       r4, 0x34(r30)
	  lwz       r4, 0x20(r7)
	  stw       r4, 0x38(r30)
	  lwz       r4, 0x24(r7)
	  stw       r4, 0x3C(r30)
	  lwz       r4, 0x28(r7)
	  stw       r4, 0x40(r30)
	  lwz       r4, 0x2C(r7)
	  stw       r4, 0x44(r30)
	  lha       r4, 0x7C(r30)
	  rlwinm    r4,r4,4,0,27
	  add       r5, r5, r4
	  lfs       f0, 0x0(r5)
	  stfs      f0, 0x48(r30)
	  lfs       f0, 0x4(r5)
	  stfs      f0, 0x4C(r30)
	  lfs       f0, 0x8(r5)
	  stfs      f0, 0x50(r30)
	  lha       r4, 0xC(r5)
	  sth       r4, 0x54(r30)
	  lbz       r4, 0xE(r5)
	  stb       r4, 0x56(r30)
	  lbz       r4, 0xF(r5)
	  stb       r4, 0x57(r30)
	  lha       r4, 0x7C(r30)
	  rlwinm    r4,r4,4,0,27
	  add       r4, r0, r4
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x58(r30)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x5C(r30)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x60(r30)
	  lha       r0, 0xC(r4)
	  sth       r0, 0x64(r30)
	  lbz       r0, 0xE(r4)
	  stb       r0, 0x66(r30)
	  lbz       r0, 0xF(r4)
	  stb       r0, 0x67(r30)
	  lha       r0, 0x7C(r30)
	  mulli     r0, r0, 0xC
	  add       r3, r3, r0
	  lbz       r0, 0xA(r3)
	  stb       r0, 0x7E(r30)

	.loc_0x168:
	  lbz       r0, 0xA8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x18C
	  lwz       r3, 0x18(r30)
	  lwz       r0, -0x7FB4(r13)
	  lwz       r4, -0x7FB8(r13)
	  and       r0, r3, r0
	  cmplw     r4, r0
	  beq-      .loc_0x198

	.loc_0x18C:
	  li        r0, 0
	  stb       r0, 0x98(r30)
	  b         .loc_0x22C

	.loc_0x198:
	  lbz       r0, -0x771F(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x22C
	  lbz       r0, 0x98(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x218
	  bl        0xC4FA4
	  lwz       r0, 0xA4(r30)
	  lwz       r5, 0xA0(r30)
	  subc      r6, r4, r0
	  lwz       r0, -0x7728(r13)
	  subfe     r3, r5, r3
	  lwz       r5, -0x7724(r13)
	  xoris     r4, r3, 0x8000
	  xoris     r3, r0, 0x8000
	  subc      r0, r6, r5
	  subfe     r3, r3, r4
	  subfe     r3, r4, r4
	  neg.      r3, r3
	  bne-      .loc_0x22C
	  li        r0, 0x1
	  lwz       r12, -0x7734(r13)
	  stb       r0, -0x771F(r13)
	  cmplwi    r12, 0
	  lha       r0, 0x7C(r30)
	  stw       r0, -0x771C(r13)
	  beq-      .loc_0x22C
	  lha       r3, 0x7C(r30)
	  lwz       r4, -0x7730(r13)
	  mtctr     r12
	  bctrl
	  b         .loc_0x22C

	.loc_0x218:
	  li        r0, 0x1
	  stb       r0, 0x98(r30)
	  bl        0xC4F34
	  stw       r4, 0xA4(r30)
	  stw       r3, 0xA0(r30)

	.loc_0x22C:
	  lis       r3, 0x8050
	  lwz       r31, 0x7178(r3)
	  b         .loc_0x2E8

	.loc_0x238:
	  lwz       r28, 0x0(r31)
	  lbz       r0, 0x10(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x2E4
	  lha       r29, 0x7C(r30)
	  extsh.    r0, r29
	  blt-      .loc_0x2E4
	  cmpwi     r29, 0x4
	  bge-      .loc_0x2E4
	  lwz       r4, 0x18(r30)
	  lwz       r3, 0x18(r28)
	  lwz       r0, 0x14(r28)
	  and       r3, r4, r3
	  cmplw     r3, r0
	  bne-      .loc_0x2D8
	  addi      r3, r29, 0x20
	  lbzx      r0, r28, r3
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2AC
	  bl        0xC4ED0
	  rlwinm    r5,r29,3,0,28
	  lwz       r3, 0x0(r31)
	  addi      r0, r5, 0x28
	  add       r5, r28, r0
	  lwz       r5, 0x4(r5)
	  subc      r5, r4, r5
	  lha       r4, 0x7C(r30)
	  bl        0xBE0
	  b         .loc_0x2E4

	.loc_0x2AC:
	  li        r0, 0x1
	  stbx      r0, r28, r3
	  lwz       r29, 0x0(r31)
	  bl        0xC4E9C
	  lha       r0, 0x7C(r30)
	  rlwinm    r5,r0,3,0,28
	  addi      r0, r5, 0x28
	  add       r5, r29, r0
	  stw       r4, 0x4(r5)
	  stw       r3, 0x0(r5)
	  b         .loc_0x2E4

	.loc_0x2D8:
	  addi      r0, r29, 0x20
	  li        r3, 0
	  stbx      r3, r28, r0

	.loc_0x2E4:
	  lwz       r31, 0xC(r31)

	.loc_0x2E8:
	  cmplwi    r31, 0
	  bne+      .loc_0x238
	  lha       r4, 0x7C(r30)
	  extsh.    r0, r4
	  blt-      .loc_0x30C
	  cmpwi     r4, 0x4
	  bge-      .loc_0x30C
	  addi      r3, r30, 0x68
	  bl        0x708

	.loc_0x30C:
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
 * Address:	8002DD68
 * Size:	000080
 */
void JUTGamePad::checkResetSwitch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, -0x771F(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  bl        0xC2CDC
	  cmpwi     r3, 0
	  beq-      .loc_0x30
	  li        r0, 0x1
	  stb       r0, -0x7720(r13)
	  b         .loc_0x70

	.loc_0x30:
	  lbz       r0, -0x7720(r13)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x68
	  lwz       r12, -0x7734(r13)
	  li        r3, 0x1
	  li        r0, -0x1
	  stb       r3, -0x771F(r13)
	  cmplwi    r12, 0
	  stw       r0, -0x771C(r13)
	  beq-      .loc_0x68
	  lwz       r4, -0x7730(r13)
	  li        r3, -0x1
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  li        r0, 0
	  stb       r0, -0x7720(r13)

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002DDE8
 * Size:	00002C
 */
void JUTGamePad::clearForReset()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0
	  stw       r0, 0x14(r1)
	  bl        0x8B0
	  lis       r3, 0xF000
	  bl        0xA34
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002DE14
 * Size:	00003C
 */
void JUTGamePad::CButton::clear(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0x18(r3)
	  stb       r0, 0xC(r3)
	  stb       r0, 0xD(r3)
	  stb       r0, 0xE(r3)
	  stb       r0, 0xF(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002DE50
 * Size:	000190
 */
void JUTGamePad::CButton::update(PADStatus const*, unsigned long)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  stwu      r1, -0x20(r1)
	  beq-      .loc_0x14
	  lhz       r0, 0x0(r4)
	  b         .loc_0x18

	.loc_0x14:
	  li        r0, 0

	.loc_0x18:
	  li        r6, 0
	  or        r7, r5, r0
	  stw       r6, 0x18(r3)
	  lwz       r0, 0x28(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  lwz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  and.      r8, r7, r0
	  stw       r6, 0x18(r3)
	  bne-      .loc_0x54
	  stw       r6, 0x20(r3)
	  stw       r6, 0x1C(r3)
	  b         .loc_0xB8

	.loc_0x54:
	  lwz       r5, 0x20(r3)
	  cmplw     r5, r8
	  bne-      .loc_0xA0
	  lwz       r5, 0x1C(r3)
	  addi      r0, r5, 0x1
	  stw       r0, 0x1C(r3)
	  lwz       r6, 0x1C(r3)
	  lwz       r0, 0x28(r3)
	  cmplw     r6, r0
	  beq-      .loc_0x98
	  ble-      .loc_0xB8
	  lwz       r5, 0x2C(r3)
	  sub       r6, r6, r0
	  divwu     r0, r6, r5
	  mullw     r0, r0, r5
	  sub.      r0, r6, r0
	  bne-      .loc_0xB8

	.loc_0x98:
	  stw       r8, 0x18(r3)
	  b         .loc_0xB8

	.loc_0xA0:
	  li        r0, -0x1
	  xor       r0, r5, r0
	  and       r0, r8, r0
	  stw       r0, 0x18(r3)
	  stw       r8, 0x20(r3)
	  stw       r6, 0x1C(r3)

	.loc_0xB8:
	  lwz       r0, 0x0(r3)
	  li        r5, -0x1
	  cmplwi    r4, 0
	  xor       r0, r7, r0
	  and       r0, r7, r0
	  stw       r0, 0x4(r3)
	  lwz       r6, 0x0(r3)
	  xor       r0, r7, r6
	  and       r0, r6, r0
	  stw       r0, 0x8(r3)
	  stw       r7, 0x0(r3)
	  lwz       r6, 0x24(r3)
	  lwz       r0, 0x4(r3)
	  xor       r5, r6, r5
	  lwz       r6, 0x18(r3)
	  and       r0, r5, r0
	  or        r0, r6, r0
	  stw       r0, 0x18(r3)
	  beq-      .loc_0x128
	  lbz       r0, 0x8(r4)
	  stb       r0, 0xC(r3)
	  lbz       r0, 0x9(r4)
	  stb       r0, 0xD(r3)
	  lbz       r0, 0x6(r4)
	  stb       r0, 0xE(r3)
	  lbz       r0, 0x7(r4)
	  stb       r0, 0xF(r3)
	  b         .loc_0x13C

	.loc_0x128:
	  li        r0, 0
	  stb       r0, 0xC(r3)
	  stb       r0, 0xD(r3)
	  stb       r0, 0xE(r3)
	  stb       r0, 0xF(r3)

	.loc_0x13C:
	  lbz       r4, 0xE(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f2, -0x7CF8(r2)
	  stw       r4, 0xC(r1)
	  lfs       f1, -0x7D00(r2)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f0, f1
	  stfs      f0, 0x10(r3)
	  lbz       r0, 0xF(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f0, f1
	  stfs      f0, 0x14(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002DFE0
 * Size:	00001C
 */
void JUTGamePad::CStick::clear(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x7CF0(r2)
	  li        r0, 0
	  stfs      f0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  sth       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002DFFC
 * Size:	0002B8
 */
void JUTGamePad::CStick::update(signed char, signed char,
                                JUTGamePad::EStickMode, JUTGamePad::EWhichStick,
                                unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r8
	  stw       r30, 0x38(r1)
	  mr        r30, r7
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  lwz       r0, -0x7FC4(r13)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x54
	  bge-      .loc_0x68
	  cmpwi     r0, 0x1
	  bge-      .loc_0x40
	  b         .loc_0x68

	.loc_0x40:
	  cmpwi     r30, 0
	  li        r0, 0x2A
	  bne-      .loc_0x78
	  li        r0, 0x36
	  b         .loc_0x78

	.loc_0x54:
	  cmpwi     r30, 0
	  li        r0, 0x1D
	  bne-      .loc_0x78
	  li        r0, 0x26
	  b         .loc_0x78

	.loc_0x68:
	  cmpwi     r30, 0
	  li        r0, 0x39
	  bne-      .loc_0x78
	  li        r0, 0x45

	.loc_0x78:
	  extsb     r8, r4
	  lis       r7, 0x4330
	  xoris     r3, r0, 0x8000
	  extsb     r0, r5
	  xoris     r8, r8, 0x8000
	  stw       r7, 0x10(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f4, -0x7CF8(r2)
	  stw       r8, 0x14(r1)
	  lfs       f0, -0x7CF0(r2)
	  lfd       f1, 0x10(r1)
	  stw       r3, 0x1C(r1)
	  fsubs     f3, f1, f4
	  stw       r7, 0x18(r1)
	  lfd       f1, 0x18(r1)
	  stw       r0, 0x24(r1)
	  fsubs     f1, f1, f4
	  stw       r7, 0x20(r1)
	  lfd       f2, 0x20(r1)
	  fdivs     f3, f3, f1
	  stw       r3, 0x2C(r1)
	  stw       r7, 0x28(r1)
	  lfd       f1, 0x28(r1)
	  stb       r4, 0xE(r29)
	  stb       r5, 0xF(r29)
	  fsubs     f2, f2, f4
	  stfs      f3, 0x0(r29)
	  fsubs     f1, f1, f4
	  fdivs     f1, f2, f1
	  stfs      f1, 0x4(r29)
	  lfs       f2, 0x0(r29)
	  lfs       f1, 0x4(r29)
	  fmuls     f2, f2, f2
	  fmuls     f1, f1, f1
	  fadds     f4, f2, f1
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x154
	  fsqrte    f1, f4
	  lfd       f3, -0x7CE8(r2)
	  lfd       f2, -0x7CE0(r2)
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f4, f0, f2
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f4, f0, f2
	  fmul      f1, f1, f0
	  fmul      f0, f1, f1
	  fmul      f1, f3, f1
	  fnmsub    f0, f4, f0, f2
	  fmul      f0, f1, f0
	  fmul      f4, f4, f0
	  frsp      f4, f4
	  b         .loc_0x1D8

	.loc_0x154:
	  lfd       f0, -0x7CD8(r2)
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x16C
	  lis       r3, 0x8051
	  lfs       f4, 0x48B0(r3)
	  b         .loc_0x1D8

	.loc_0x16C:
	  stfs      f4, 0x8(r1)
	  lis       r0, 0x7F80
	  lwz       r4, 0x8(r1)
	  rlwinm    r3,r4,0,1,8
	  cmpw      r3, r0
	  beq-      .loc_0x194
	  bge-      .loc_0x1C4
	  cmpwi     r3, 0
	  beq-      .loc_0x1AC
	  b         .loc_0x1C4

	.loc_0x194:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x1A4
	  li        r0, 0x1
	  b         .loc_0x1C8

	.loc_0x1A4:
	  li        r0, 0x2
	  b         .loc_0x1C8

	.loc_0x1AC:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x1BC
	  li        r0, 0x5
	  b         .loc_0x1C8

	.loc_0x1BC:
	  li        r0, 0x3
	  b         .loc_0x1C8

	.loc_0x1C4:
	  li        r0, 0x4

	.loc_0x1C8:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1D8
	  lis       r3, 0x8051
	  lfs       f4, 0x48B0(r3)

	.loc_0x1D8:
	  stfs      f4, 0x8(r29)
	  lfs       f0, -0x7CD0(r2)
	  lfs       f1, 0x8(r29)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x218
	  cmpwi     r6, 0x1
	  bne-      .loc_0x210
	  lfs       f0, 0x0(r29)
	  fdivs     f0, f0, f1
	  stfs      f0, 0x0(r29)
	  lfs       f1, 0x4(r29)
	  lfs       f0, 0x8(r29)
	  fdivs     f0, f1, f0
	  stfs      f0, 0x4(r29)

	.loc_0x210:
	  lfs       f0, -0x7CD0(r2)
	  stfs      f0, 0x8(r29)

	.loc_0x218:
	  lfs       f0, 0x8(r29)
	  lfs       f1, -0x7CF0(r2)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x280
	  lfs       f0, 0x4(r29)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x258
	  lfs       f0, 0x0(r29)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x24C
	  li        r0, 0x4000
	  sth       r0, 0xC(r29)
	  b         .loc_0x280

	.loc_0x24C:
	  li        r0, -0x4000
	  sth       r0, 0xC(r29)
	  b         .loc_0x280

	.loc_0x258:
	  fneg      f2, f0
	  lfs       f1, 0x0(r29)
	  bl        0xA1730
	  frsp      f1, f1
	  lfs       f0, -0x7CCC(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  sth       r0, 0xC(r29)

	.loc_0x280:
	  cmpwi     r30, 0
	  mr        r3, r29
	  li        r0, 0x10
	  bne-      .loc_0x294
	  li        r0, 0x18

	.loc_0x294:
	  srw       r4, r31, r0
	  bl        .loc_0x2B8
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x2B8:
	*/
}

/*
 * --INFO--
 * Address:	8002E2B4
 * Size:	0000B4
 */
void JUTGamePad::CStick::getButton(unsigned long)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x7FBC(r13)
	  rlwinm    r0,r4,0,28,31
	  lfs       f2, 0x0(r3)
	  fneg      f4, f1
	  fcmpo     cr0, f4, f2
	  bge-      .loc_0x28
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x28
	  rlwinm    r0,r0,0,0,29
	  b         .loc_0x5C

	.loc_0x28:
	  lfs       f3, -0x7FC0(r13)
	  fneg      f0, f3
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x48
	  rlwinm    r0,r0,0,31,29
	  ori       r0, r0, 0x1
	  b         .loc_0x5C

	.loc_0x48:
	  fcmpo     cr0, f2, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x5C
	  rlwinm    r0,r0,0,0,30
	  ori       r0, r0, 0x2

	.loc_0x5C:
	  lfs       f2, 0x4(r3)
	  fcmpo     cr0, f4, f2
	  bge-      .loc_0x78
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x78
	  rlwinm    r0,r0,0,30,27
	  b         .loc_0xAC

	.loc_0x78:
	  lfs       f1, -0x7FC0(r13)
	  fneg      f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x98
	  rlwinm    r0,r0,0,29,27
	  ori       r0, r0, 0x4
	  b         .loc_0xAC

	.loc_0x98:
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xAC
	  rlwinm    r0,r0,0,30,28
	  ori       r0, r0, 0x8

	.loc_0xAC:
	  mr        r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JUTGamePad::CRumble::clear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002E368
 * Size:	000074
 */
void JUTGamePad::CRumble::clear(JUTGamePad*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lha       r5, 0x7C(r4)
	  extsh.    r0, r5
	  blt-      .loc_0x40
	  cmpwi     r5, 0x4
	  bge-      .loc_0x40
	  li        r0, 0
	  subi      r3, r13, 0x773C
	  stbx      r0, r3, r5
	  lha       r3, 0x7C(r4)
	  li        r4, 0x1
	  bl        .loc_0x74

	.loc_0x40:
	  li        r3, 0
	  lis       r0, 0xF000
	  stw       r3, 0x0(r31)
	  stw       r3, 0x4(r31)
	  stw       r3, 0x8(r31)
	  stw       r3, 0xC(r31)
	  stw       r3, 0x10(r31)
	  stw       r0, -0x7738(r13)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x74:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JUTGamePad::CRumble::startMotor(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002E3DC
 * Size:	000070
 */
void JUTGamePad::CRumble::stopMotor(int, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r3,2,0,29
	  addi      r5, r5, 0x4A0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r6, -0x7738(r13)
	  lwzx      r0, r5, r0
	  and.      r0, r6, r0
	  beq-      .loc_0x5C
	  rlwinm    r5,r4,0,24,31
	  li        r0, 0x2
	  neg       r4, r5
	  or        r4, r4, r5
	  srawi     r4, r4, 0x1F
	  and       r0, r0, r4
	  rlwinm    r4,r0,0,24,31
	  bl        0xC6004
	  li        r0, 0
	  subi      r3, r13, 0x773C
	  stbx      r0, r3, r31

	.loc_0x5C:
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
 * Size:	00002C
 */
void getNumBit(unsigned char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002E44C
 * Size:	00025C
 */
void JUTGamePad::CRumble::update(short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r5, r5, 0x4A0
	  stw       r31, 0xC(r1)
	  extsh     r31, r4
	  rlwinm    r0,r31,2,0,29
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r6, -0x7738(r13)
	  lwzx      r3, r5, r0
	  and       r6, r6, r3
	  neg       r3, r6
	  or        r3, r3, r6
	  rlwinm.   r3,r3,1,31,31
	  bne-      .loc_0x5C
	  li        r3, 0
	  stw       r3, 0x0(r30)
	  stw       r3, 0x4(r30)
	  stw       r3, 0x8(r30)
	  stw       r3, 0xC(r30)
	  stw       r3, 0x10(r30)

	.loc_0x5C:
	  lwz       r3, 0x4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x244
	  lwz       r10, 0x0(r30)
	  cmplw     r10, r3
	  blt-      .loc_0xA8
	  lwz       r3, -0x7738(r13)
	  lwzx      r0, r5, r0
	  and.      r0, r3, r0
	  beq-      .loc_0x9C
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0xC5F54
	  li        r0, 0
	  subi      r3, r13, 0x773C
	  stbx      r0, r3, r31

	.loc_0x9C:
	  li        r0, 0
	  stw       r0, 0x4(r30)
	  b         .loc_0x238

	.loc_0xA8:
	  lwz       r9, 0xC(r30)
	  cmplwi    r9, 0
	  bne-      .loc_0xF4
	  extsh     r4, r4
	  subi      r3, r13, 0x773C
	  lbzx      r3, r3, r4
	  cmplwi    r3, 0
	  bne-      .loc_0x244
	  lwz       r3, -0x7738(r13)
	  lwzx      r0, r5, r0
	  and.      r0, r3, r0
	  beq-      .loc_0x244
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0xC5F00
	  li        r0, 0x1
	  subi      r3, r13, 0x773C
	  stbx      r0, r3, r31
	  b         .loc_0x244

	.loc_0xF4:
	  divwu     r6, r10, r9
	  extsh     r4, r4
	  subi      r3, r13, 0x773C
	  lwz       r7, 0x8(r30)
	  lbzx      r4, r3, r4
	  li        r8, 0x80
	  mullw     r9, r6, r9
	  neg       r3, r4
	  or        r3, r3, r4
	  rlwinm    r6,r3,1,31,31
	  sub       r9, r10, r9
	  rlwinm    r3,r9,0,29,31
	  sraw      r4, r8, r3
	  srawi     r3, r9, 0x3
	  lbzx      r3, r7, r3
	  and       r3, r4, r3
	  rlwinm    r4,r3,0,24,31
	  neg       r3, r4
	  or        r3, r3, r4
	  rlwinm.   r3,r3,1,31,31
	  beq-      .loc_0x17C
	  cmplwi    r6, 0
	  bne-      .loc_0x17C
	  lwz       r3, -0x7738(r13)
	  lwzx      r0, r5, r0
	  and.      r0, r3, r0
	  beq-      .loc_0x238
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0xC5E78
	  li        r0, 0x1
	  subi      r3, r13, 0x773C
	  stbx      r0, r3, r31
	  b         .loc_0x238

	.loc_0x17C:
	  cmplwi    r3, 0
	  bne-      .loc_0x238
	  lwz       r7, 0x10(r30)
	  li        r4, 0
	  cmplwi    r7, 0
	  beq-      .loc_0x1BC
	  rlwinm    r3,r9,0,29,31
	  li        r4, 0x80
	  sraw      r4, r4, r3
	  srawi     r3, r9, 0x3
	  lbzx      r3, r7, r3
	  and       r3, r4, r3
	  rlwinm    r4,r3,0,24,31
	  neg       r3, r4
	  or        r3, r3, r4
	  rlwinm    r4,r3,1,31,31

	.loc_0x1BC:
	  cmplwi    r6, 0
	  beq-      .loc_0x208
	  lwz       r3, -0x7738(r13)
	  lwzx      r0, r5, r0
	  and.      r0, r3, r0
	  beq-      .loc_0x238
	  rlwinm    r5,r4,0,24,31
	  li        r0, 0x2
	  neg       r4, r5
	  mr        r3, r31
	  or        r4, r4, r5
	  srawi     r4, r4, 0x1F
	  and       r0, r0, r4
	  rlwinm    r4,r0,0,24,31
	  bl        0xC5DEC
	  li        r0, 0
	  subi      r3, r13, 0x773C
	  stbx      r0, r3, r31
	  b         .loc_0x238

	.loc_0x208:
	  rlwinm.   r3,r4,0,24,31
	  beq-      .loc_0x238
	  lwz       r3, -0x7738(r13)
	  lwzx      r0, r5, r0
	  and.      r0, r3, r0
	  beq-      .loc_0x238
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0xC5DB8
	  li        r0, 0
	  subi      r3, r13, 0x773C
	  stbx      r0, r3, r31

	.loc_0x238:
	  lwz       r3, 0x0(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r30)

	.loc_0x244:
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
 * Address:	........
 * Size:	000028
 */
void JUTGamePad::CRumble::triggerPatternedRumble(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JUTGamePad::CRumble::setPatternedRumble(short, unsigned short, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JUTGamePad::CRumble::startPatternedRumble(void*,
                                               JUTGamePad::CRumble::ERumble,
                                               unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JUTGamePad::CRumble::stopPatternedRumble(short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JUTGamePad::CRumble::stopPatternedRumbleAtThePeriod(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTGamePad::getGamePad(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002E6A8
 * Size:	000124
 */
void JUTGamePad::CRumble::setEnabled(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  addi      r31, r5, 0x4B0
	  mr        r26, r3
	  addi      r29, r4, 0x4A0
	  li        r27, 0
	  subi      r30, r13, 0x773C

	.loc_0x2C:
	  lwz       r3, -0x7738(r13)
	  lwz       r0, 0x0(r31)
	  and.      r0, r3, r0
	  bne-      .loc_0xF0
	  lbz       r0, 0x0(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  lwz       r0, 0x0(r29)
	  and.      r0, r3, r0
	  beq-      .loc_0x68
	  mr        r3, r27
	  li        r4, 0
	  bl        0xC5D28
	  li        r0, 0
	  stb       r0, 0x0(r30)

	.loc_0x68:
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6E80
	  lwz       r3, 0x0(r3)
	  b         .loc_0x90

	.loc_0x78:
	  lwz       r4, 0x0(r3)
	  lha       r0, 0x7C(r4)
	  cmpw      r27, r0
	  bne-      .loc_0x8C
	  b         .loc_0x9C

	.loc_0x8C:
	  lwz       r3, 0xC(r3)

	.loc_0x90:
	  cmplwi    r3, 0
	  bne+      .loc_0x78
	  li        r4, 0

	.loc_0x9C:
	  cmplwi    r4, 0
	  beq-      .loc_0xF0
	  lha       r28, 0x7C(r4)
	  li        r0, 0
	  lis       r3, 0x804A
	  stw       r0, 0x6C(r4)
	  rlwinm    r0,r28,2,0,29
	  addi      r3, r3, 0x4A0
	  lwz       r4, -0x7738(r13)
	  lwzx      r0, r3, r0
	  and       r3, r4, r0
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm.   r0,r0,1,31,31
	  beq-      .loc_0xF0
	  mr        r3, r28
	  li        r4, 0x2
	  bl        0xC5CA4
	  li        r0, 0
	  subi      r3, r13, 0x773C
	  stbx      r0, r3, r28

	.loc_0xF0:
	  addi      r27, r27, 0x1
	  addi      r30, r30, 0x1
	  cmpwi     r27, 0x4
	  addi      r29, r29, 0x4
	  addi      r31, r31, 0x4
	  blt+      .loc_0x2C
	  rlwinm    r0,r26,0,0,3
	  stw       r0, -0x7738(r13)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002E7CC
 * Size:	00001C
 */
void JUTGamePad::CButton::setRepeat(unsigned long, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x20(r3)
	  stw       r0, 0x1C(r3)
	  stw       r4, 0x24(r3)
	  stw       r5, 0x28(r3)
	  stw       r6, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002E7E8
 * Size:	00004C
 */
void JUTGamePad::setButtonRepeat(unsigned long, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  li        r8, 0
	  stw       r8, 0x38(r3)
	  stw       r8, 0x34(r3)
	  stw       r4, 0x3C(r3)
	  stw       r5, 0x40(r3)
	  stw       r6, 0x44(r3)
	  lha       r3, 0x7C(r3)
	  extsh.    r0, r3
	  bltlr-
	  mulli     r7, r3, 0x30
	  lis       r3, 0x8050
	  addi      r0, r3, 0x7038
	  add       r3, r0, r7
	  stw       r8, 0x20(r3)
	  stw       r8, 0x1C(r3)
	  stw       r4, 0x24(r3)
	  stw       r5, 0x28(r3)
	  stw       r6, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JUTGamePad::resetButtonRepeat()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JUTGamePad::addButtonRepeat(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JUTGamePad::removeButtonRepeat(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JUTGamePad::clearButtonRepeat(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002E834
 * Size:	00008C
 */
void JUTGamePad::recalibrate(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r5, r4, 0x4B0
	  li        r0, -0x1
	  lwz       r6, -0x7748(r13)
	  lwz       r7, 0x0(r5)
	  and.      r4, r6, r7
	  beq-      .loc_0x30
	  xor       r4, r7, r0
	  and       r3, r3, r4

	.loc_0x30:
	  lwzu      r7, 0x4(r5)
	  and.      r4, r6, r7
	  beq-      .loc_0x44
	  xor       r4, r7, r0
	  and       r3, r3, r4

	.loc_0x44:
	  lwzu      r7, 0x4(r5)
	  and.      r4, r6, r7
	  beq-      .loc_0x58
	  xor       r4, r7, r0
	  and       r3, r3, r4

	.loc_0x58:
	  lwz       r7, 0x4(r5)
	  and.      r4, r6, r7
	  beq-      .loc_0x6C
	  xor       r4, r7, r0
	  and       r3, r3, r4

	.loc_0x6C:
	  bl        0xC5628
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
JUTGamePadLongPress::JUTGamePadLongPress()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JUTGamePadLongPress>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void JUTGamePadLongPress::add(unsigned long, unsigned long, unsigned long,
                              void (*)(int, JUTGamePadLongPress*, void*), void*,
                              JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void JUTGamePadLongPress::remove(JUTGamePadLongPress*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002E8C0
 * Size:	000064
 */
void JUTGamePadLongPress::checkCallback(int, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  blt-      .loc_0x54
	  lwz       r0, 0x1C(r6)
	  cmplw     r5, r0
	  blt-      .loc_0x54
	  li        r0, 0x1
	  add       r3, r6, r4
	  stb       r0, 0x11(r6)
	  stb       r0, 0x48(r3)
	  lwz       r12, 0x4C(r6)
	  cmplwi    r12, 0
	  beq-      .loc_0x54
	  mr        r3, r4
	  mr        r4, r6
	  lwz       r5, 0x50(r6)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
JUTGamePadRecordBase::JUTGamePadRecordBase()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
JUTGamePadRecordBase::~JUTGamePadRecordBase()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
JUTGamePadRecordFixed::JUTGamePadRecordFixed()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JUTGamePadRecordFixed::setBuffer(void*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTGamePadRecordFixed::setDataEnd(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JUTGamePadRecordFixed::setDataSize(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JUTGamePadRecord::setPart(unsigned int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTGamePadRecordFixed::clear()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void JUTGamePadRecordFixed::seek(int, JUTGamePadRecordFixed::EOrigin)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void JUTGamePadRecordFixed::do_read(PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JUTGamePadRecordFixed::do_write(const PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
JUTGamePadRecord::JUTGamePadRecord()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
JUTGamePadRecordFixed::~JUTGamePadRecordFixed()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JUTGamePadRecord::calculateDataSizePerFrame(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JUTGamePadRecord::do_readFixed(const void*, PADStatus*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void JUTGamePadRecord::do_writeFixed(const PADStatus*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
JUTGamePadRecord::~JUTGamePadRecord()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002E924
 * Size:	000110
 */
void __sinit_JUTGamePad_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x6E80
	  bl        -0x810C
	  lis       r3, 0x8050
	  lis       r4, 0x8003
	  lis       r5, 0x804F
	  addi      r3, r3, 0x6E80
	  subi      r4, r4, 0x1520
	  addi      r5, r5, 0x3F0
	  bl        0x92DA8
	  lis       r3, 0x8050
	  lis       r4, 0x8003
	  addi      r3, r3, 0x7038
	  li        r5, 0
	  subi      r4, r4, 0x155C
	  li        r6, 0x30
	  li        r7, 0x4
	  bl        0x92EC4
	  lis       r3, 0x8050
	  lis       r4, 0x8003
	  addi      r3, r3, 0x70F8
	  li        r5, 0
	  subi      r4, r4, 0x1578
	  li        r6, 0x10
	  li        r7, 0x4
	  bl        0x92EA4
	  lis       r3, 0x8050
	  lis       r4, 0x8003
	  addi      r3, r3, 0x7138
	  li        r5, 0
	  subi      r4, r4, 0x1578
	  li        r6, 0x10
	  li        r7, 0x4
	  bl        0x92E84
	  lis       r3, 0x8000
	  lis       r4, 0x8889
	  lwz       r0, 0xF8(r3)
	  subi      r5, r4, 0x7777
	  lis       r3, 0x8050
	  rlwinm    r4,r0,30,2,31
	  li        r0, 0x1E
	  mulhwu    r6, r5, r4
	  li        r5, 0
	  addi      r3, r3, 0x7178
	  li        r4, 0
	  mullw     r5, r5, r0
	  rlwinm    r6,r6,27,5,31
	  mulhwu    r0, r6, r0
	  mulli     r6, r6, 0x1E
	  add       r0, r0, r5
	  stw       r0, -0x7728(r13)
	  stw       r6, -0x7724(r13)
	  bl        -0x81D4
	  lis       r3, 0x8050
	  lis       r4, 0x8003
	  lis       r5, 0x804F
	  addi      r3, r3, 0x7178
	  subi      r4, r4, 0x15CC
	  addi      r5, r5, 0x3FC
	  bl        0x92CE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002EA34
 * Size:	000054
 */
void JSUList<JUTGamePadLongPress>::~JSUList()
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
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        -0x81F0
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0xA9B4

	.loc_0x38:
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
 * Address:	8002EA88
 * Size:	00001C
 */
JUTGamePad::CStick::CStick(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x7CF0(r2)
	  li        r0, 0
	  stfs      f0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  sth       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002EAA4
 * Size:	00003C
 */
JUTGamePad::CButton::CButton(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0x18(r3)
	  stb       r0, 0xC(r3)
	  stb       r0, 0xD(r3)
	  stb       r0, 0xE(r3)
	  stb       r0, 0xF(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002EAE0
 * Size:	000054
 */
void JSUList<JUTGamePad>::~JSUList()
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
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        -0x829C
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0xAA60

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
