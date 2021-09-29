

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E36A0
 * Size:	0000F8
 */
void __ct__Q26PikiAI12ActBreakRockFPQ24Game4Piki(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  beq-      .loc_0x38
  addi      r0, r30, 0x30
  lis       r3, 0x804B
  stw       r0, 0xC(r30)
  subi      r0, r3, 0x5994
  stw       r0, 0x30(r30)

.loc_0x38:
  mr        r3, r30
  mr        r4, r31
  bl        -0x4CCC8
  lis       r3, 0x804C
  addi      r0, r30, 0x30
  subi      r4, r3, 0x5D40
  li        r3, 0x2C
  stw       r4, 0x0(r30)
  addi      r5, r4, 0x40
  lwz       r4, 0xC(r30)
  stw       r5, 0x0(r4)
  lwz       r4, 0xC(r30)
  sub       r0, r0, r4
  stw       r0, 0x4(r4)
  bl        -0x1BF86C
  mr.       r0, r3
  beq-      .loc_0x8C
  mr        r5, r31
  li        r4, 0x1
  bl        -0x47A6C
  mr        r0, r3

.loc_0x8C:
  stw       r0, 0x18(r30)
  li        r3, 0x1C
  bl        -0x1BF890
  mr.       r0, r3
  beq-      .loc_0xAC
  mr        r4, r31
  bl        -0x4C468
  mr        r0, r3

.loc_0xAC:
  stw       r0, 0x1C(r30)
  li        r3, 0x10
  bl        -0x1BF8B0
  mr.       r0, r3
  beq-      .loc_0xCC
  mr        r4, r31
  bl        -0x46B50
  mr        r0, r3

.loc_0xCC:
  lis       r3, 0x8048
  stw       r0, 0x20(r30)
  addi      r0, r3, 0xCB0
  mr        r3, r30
  stw       r0, 0x8(r30)
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
 * Address:	801E3798
 * Size:	0000C0
 */
void init__Q26PikiAI12ActBreakRockFPQ26PikiAI9ActionArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr.       r29, r4
  lis       r4, 0x8048
  stw       r28, 0x10(r1)
  mr        r28, r3
  addi      r31, r4, 0xCA0
  beq-      .loc_0x64
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x1C
  bl        -0x119128
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  beq-      .loc_0x64
  li        r30, 0x1

.loc_0x64:
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x80
  addi      r3, r31, 0x2C
  addi      r5, r31, 0x3C
  li        r4, 0x50
  crclr     6, 0x6
  bl        -0x1B91D4

.loc_0x80:
  lis       r3, 0x8051
  lwz       r4, 0x4(r28)
  addi      r3, r3, 0x250C
  bl        -0x124BC
  lwz       r0, 0x4(r29)
  mr        r3, r28
  stw       r0, 0x10(r28)
  bl        .loc_0xC0
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xC0:
*/
}

/*
 * --INFO--
 * Address:	801E3858
 * Size:	000068
 */
void initFollow__Q26PikiAI12ActBreakRockFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  addi      r4, r1, 0x8
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lis       r3, 0x804B
  lwz       r5, 0x10(r31)
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  addi      r0, r3, 0x7908
  stw       r0, 0x8(r1)
  stw       r5, 0xC(r1)
  lwz       r3, 0x20(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  sth       r0, 0x14(r31)
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void initGoto__Q26PikiAI12ActBreakRockFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void initStickAttack__Q26PikiAI12ActBreakRockFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void calcAttackPos__Q26PikiAI12ActBreakRockFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E38C0
 * Size:	00032C
 */
void exec__Q26PikiAI12ActBreakRockFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  stw       r30, 0x48(r1)
  lwz       r3, 0x10(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3C
  li        r3, 0
  b         .loc_0x314

.loc_0x3C:
  lhz       r0, 0x14(r31)
  cmpwi     r0, 0x1
  beq-      .loc_0x16C
  bge-      .loc_0x58
  cmpwi     r0, 0
  bge-      .loc_0x240
  b         .loc_0x310

.loc_0x58:
  cmpwi     r0, 0x3
  bge-      .loc_0x310
  lwz       r3, 0x20(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x18(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x10(r31)
  mr        r30, r3
  lhz       r0, 0x128(r4)
  cmplwi    r0, 0x40E
  bne-      .loc_0xAC
  lwz       r3, 0x4(r31)
  li        r5, 0x284F
  li        r6, 0x1
  bl        -0x9AFA4

.loc_0xAC:
  cmpwi     r30, 0x1
  beq-      .loc_0x310
  lwz       r3, 0x10(r31)
  li        r30, -0x1
  lhz       r0, 0x128(r3)
  cmplwi    r0, 0x40E
  bne-      .loc_0xCC
  li        r30, 0x3A

.loc_0xCC:
  lwz       r3, 0x4(r31)
  bl        -0x9A4A4
  lwz       r4, 0x10(r31)
  lis       r3, 0x804B
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x30(r1)
  addi      r3, r3, 0x4EA4
  li        r0, 0
  stw       r3, 0x30(r1)
  stfs      f1, 0x34(r1)
  stw       r4, 0x38(r1)
  stw       r30, 0x3C(r1)
  stb       r0, 0x40(r1)
  lhz       r0, 0x128(r4)
  cmplwi    r0, 0x410
  beq-      .loc_0x118
  cmplwi    r0, 0x40C
  bne-      .loc_0x124

.loc_0x118:
  li        r0, 0x5
  stb       r0, 0x40(r1)
  b         .loc_0x148

.loc_0x124:
  cmplwi    r0, 0x40E
  bne-      .loc_0x138
  li        r0, 0x6
  stb       r0, 0x40(r1)
  b         .loc_0x148

.loc_0x138:
  cmplwi    r0, 0x409
  bne-      .loc_0x148
  li        r0, 0x7
  stb       r0, 0x40(r1)

.loc_0x148:
  lwz       r3, 0x18(r31)
  addi      r4, r1, 0x30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x2
  sth       r0, 0x14(r31)
  b         .loc_0x310

.loc_0x16C:
  lwz       r3, 0x20(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  bne-      .loc_0x310
  lwz       r3, 0x10(r31)
  li        r30, -0x1
  lhz       r0, 0x128(r3)
  cmplwi    r0, 0x40E
  bne-      .loc_0x1A0
  li        r30, 0x3A

.loc_0x1A0:
  lwz       r3, 0x4(r31)
  bl        -0x9A578
  lwz       r4, 0x10(r31)
  lis       r3, 0x804B
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x1C(r1)
  addi      r3, r3, 0x4EA4
  li        r0, 0
  stw       r3, 0x1C(r1)
  stfs      f1, 0x20(r1)
  stw       r4, 0x24(r1)
  stw       r30, 0x28(r1)
  stb       r0, 0x2C(r1)
  lhz       r0, 0x128(r4)
  cmplwi    r0, 0x410
  beq-      .loc_0x1EC
  cmplwi    r0, 0x40C
  bne-      .loc_0x1F8

.loc_0x1EC:
  li        r0, 0x5
  stb       r0, 0x2C(r1)
  b         .loc_0x21C

.loc_0x1F8:
  cmplwi    r0, 0x40E
  bne-      .loc_0x20C
  li        r0, 0x6
  stb       r0, 0x2C(r1)
  b         .loc_0x21C

.loc_0x20C:
  cmplwi    r0, 0x409
  bne-      .loc_0x21C
  li        r0, 0x7
  stb       r0, 0x2C(r1)

.loc_0x21C:
  lwz       r3, 0x18(r31)
  addi      r4, r1, 0x1C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x2
  sth       r0, 0x14(r31)
  b         .loc_0x310

.loc_0x240:
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  bne-      .loc_0x310
  lwz       r3, 0x10(r31)
  li        r30, -0x1
  lhz       r0, 0x128(r3)
  cmplwi    r0, 0x40E
  bne-      .loc_0x274
  li        r30, 0x3A

.loc_0x274:
  lwz       r3, 0x4(r31)
  bl        -0x9A64C
  lwz       r4, 0x10(r31)
  lis       r3, 0x804B
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  addi      r3, r3, 0x4EA4
  li        r0, 0
  stw       r3, 0x8(r1)
  stfs      f1, 0xC(r1)
  stw       r4, 0x10(r1)
  stw       r30, 0x14(r1)
  stb       r0, 0x18(r1)
  lhz       r0, 0x128(r4)
  cmplwi    r0, 0x410
  beq-      .loc_0x2C0
  cmplwi    r0, 0x40C
  bne-      .loc_0x2CC

.loc_0x2C0:
  li        r0, 0x5
  stb       r0, 0x18(r1)
  b         .loc_0x2F0

.loc_0x2CC:
  cmplwi    r0, 0x40E
  bne-      .loc_0x2E0
  li        r0, 0x6
  stb       r0, 0x18(r1)
  b         .loc_0x2F0

.loc_0x2E0:
  cmplwi    r0, 0x409
  bne-      .loc_0x2F0
  li        r0, 0x7
  stb       r0, 0x18(r1)

.loc_0x2F0:
  lwz       r3, 0x18(r31)
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x2
  sth       r0, 0x14(r31)

.loc_0x310:
  li        r3, 0x1

.loc_0x314:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	801E3BEC
 * Size:	00005C
 */
void cleanup__Q26PikiAI12ActBreakRockFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x8051
  lwz       r4, 0x4(r31)
  addi      r3, r3, 0x250C
  bl        -0x127F8
  lhz       r0, 0x14(r31)
  cmpwi     r0, 0x2
  beq-      .loc_0x34
  b         .loc_0x48

.loc_0x34:
  lwz       r3, 0x18(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x48:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E3C48
 * Size:	0000F0
 */
void platCallback__Q26PikiAI12ActBreakRockFPQ24Game4PikiRQ24Game9PlatEvent(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r3
  lhz       r0, 0x14(r3)
  cmplwi    r0, 0x1
  bne-      .loc_0xD8
  lwz       r3, 0x10(r30)
  li        r31, -0x1
  lhz       r0, 0x128(r3)
  cmplwi    r0, 0x40E
  bne-      .loc_0x3C
  li        r31, 0x3A

.loc_0x3C:
  lwz       r3, 0x4(r30)
  bl        -0x9A79C
  lwz       r4, 0x10(r30)
  lis       r3, 0x804B
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  addi      r3, r3, 0x4EA4
  li        r0, 0
  stw       r3, 0x8(r1)
  stfs      f1, 0xC(r1)
  stw       r4, 0x10(r1)
  stw       r31, 0x14(r1)
  stb       r0, 0x18(r1)
  lhz       r0, 0x128(r4)
  cmplwi    r0, 0x410
  beq-      .loc_0x88
  cmplwi    r0, 0x40C
  bne-      .loc_0x94

.loc_0x88:
  li        r0, 0x5
  stb       r0, 0x18(r1)
  b         .loc_0xB8

.loc_0x94:
  cmplwi    r0, 0x40E
  bne-      .loc_0xA8
  li        r0, 0x6
  stb       r0, 0x18(r1)
  b         .loc_0xB8

.loc_0xA8:
  cmplwi    r0, 0x409
  bne-      .loc_0xB8
  li        r0, 0x7
  stb       r0, 0x18(r1)

.loc_0xB8:
  lwz       r3, 0x18(r30)
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x2
  sth       r0, 0x14(r30)

.loc_0xD8:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801E3D38
 * Size:	0000FC
 */
void collisionCallback__Q26PikiAI12ActBreakRockFPQ24Game4PikiRQ24Game9CollEvent(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r3
  lwz       r0, 0x0(r5)
  lwz       r3, 0x10(r3)
  cmplw     r0, r3
  bne-      .loc_0xE4
  lhz       r0, 0x14(r30)
  cmplwi    r0, 0x1
  bne-      .loc_0xE4
  lhz       r0, 0x128(r3)
  li        r31, -0x1
  cmplwi    r0, 0x40E
  bne-      .loc_0x48
  li        r31, 0x3A

.loc_0x48:
  lwz       r3, 0x4(r30)
  bl        -0x9A898
  lwz       r4, 0x10(r30)
  lis       r3, 0x804B
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  addi      r3, r3, 0x4EA4
  li        r0, 0
  stw       r3, 0x8(r1)
  stfs      f1, 0xC(r1)
  stw       r4, 0x10(r1)
  stw       r31, 0x14(r1)
  stb       r0, 0x18(r1)
  lhz       r0, 0x128(r4)
  cmplwi    r0, 0x410
  beq-      .loc_0x94
  cmplwi    r0, 0x40C
  bne-      .loc_0xA0

.loc_0x94:
  li        r0, 0x5
  stb       r0, 0x18(r1)
  b         .loc_0xC4

.loc_0xA0:
  cmplwi    r0, 0x40E
  bne-      .loc_0xB4
  li        r0, 0x6
  stb       r0, 0x18(r1)
  b         .loc_0xC4

.loc_0xB4:
  cmplwi    r0, 0x409
  bne-      .loc_0xC4
  li        r0, 0x7
  stb       r0, 0x18(r1)

.loc_0xC4:
  lwz       r3, 0x18(r30)
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x2
  sth       r0, 0x14(r30)

.loc_0xE4:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801E3E34
 * Size:	000004
 */
void bounceCallback__Q26PikiAI12ActBreakRockFPQ24Game4PikiPQ23Sys8Triangle(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801E3E38
 * Size:	000004
 */
void onKeyEvent__Q26PikiAI12ActBreakRockFRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801E3E3C
 * Size:	000014
 */
void @48@4@onKeyEvent__Q26PikiAI12ActBreakRockFRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  li        r11, 0x4
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x30
  b         -0x14
*/
}