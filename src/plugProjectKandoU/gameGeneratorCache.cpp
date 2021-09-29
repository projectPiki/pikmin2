

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
 * Address:	801F1908
 * Size:	000088
 */
void __ct__Q24Game14GeneratorCacheFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, -0x1
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x1040
  addi      r3, r31, 0x3C
  li        r4, -0x1
  bl        0x1034
  addi      r3, r31, 0x8C
  bl        -0x47150
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x10(r31)
  stw       r0, 0xC(r31)
  stw       r0, 0x8(r31)
  stw       r0, 0x4(r31)
  stw       r0, 0x4C(r31)
  stw       r0, 0x48(r31)
  stw       r0, 0x44(r31)
  stw       r0, 0x40(r31)
  bl        0x2F4
  stw       r31, -0x6B40(r13)
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x78(r31)
  bl        0x114
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
 * Address:	801F1990
 * Size:	000060
 */
void __dt__Q24Game11CourseCacheFv(void)
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
  subi      r0, r5, 0x43F8
  stw       r0, 0x0(r30)
  bl        0x21FBC8
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x1CD91C

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

/*
 * --INFO--
 * Address:	801F19F0
 * Size:	000098
 */
void clearCache__Q24Game14GeneratorCacheFv(void)
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
  mr        r29, r3
  b         .loc_0x50

.loc_0x24:
  mr        r3, r29
  mr        r4, r29
  mr        r5, r31
  bl        0x2D0
  mr.       r30, r3
  beq-      .loc_0x4C
  bl        0x21FBA4
  mr        r4, r30
  addi      r3, r29, 0x3C
  bl        0x21F9D0

.loc_0x4C:
  addi      r31, r31, 0x1

.loc_0x50:
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  blt+      .loc_0x24
  mr        r3, r29
  bl        .loc_0x98
  li        r3, 0
  stw       r3, 0x84(r29)
  lwz       r0, 0x80(r29)
  stw       r0, 0x88(r29)
  stw       r3, 0x78(r29)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x98:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void __dt__Q24Game14GeneratorCacheFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F1A88
 * Size:	000018
 */
void clearGeneratorList__Q24Game14GeneratorCacheFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x9C(r3)
  stw       r0, 0x98(r3)
  stw       r0, 0x94(r3)
  stw       r0, 0x90(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801F1AA0
 * Size:	000078
 */
void addGenerator__Q24Game14GeneratorCacheFPQ24Game9Generator(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        .loc_0x78
  b         .loc_0x40

.loc_0x2C:
  lbz       r0, 0xAC(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r31, r31, 0x1

.loc_0x3C:
  lwz       r3, 0x4(r3)

.loc_0x40:
  cmplwi    r3, 0
  bne+      .loc_0x2C
  cmpwi     r31, 0x50
  bge-      .loc_0x5C
  mr        r4, r30
  addi      r3, r29, 0x8C
  bl        0x21F910

.loc_0x5C:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x78:
*/
}

/*
 * --INFO--
 * Address:	801F1B18
 * Size:	000008
 */
void getFirstGenerator__Q24Game14GeneratorCacheFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x9C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void findRamGenerator__Q24Game14GeneratorCacheFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F1B20
 * Size:	000024
 */
void getTotalMePikmins__Q24Game14GeneratorCacheFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x10(r3)
  li        r3, 0
  b         .loc_0x18

.loc_0xC:
  lwz       r0, 0x34(r4)
  lwz       r4, 0x4(r4)
  add       r3, r3, r0

.loc_0x18:
  cmplwi    r4, 0
  bne+      .loc_0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	801F1B44
 * Size:	000074
 */
void getColorMePikmins__Q24Game14GeneratorCacheFi(void)
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
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r30, 0x10(r3)
  b         .loc_0x48

.loc_0x30:
  lwz       r4, 0x7C(r28)
  mr        r3, r30
  mr        r5, r29
  bl        .loc_0x74
  add       r31, r31, r3
  lwz       r30, 0x4(r30)

.loc_0x48:
  cmplwi    r30, 0
  bne+      .loc_0x30
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x74:
*/
}

/*
 * --INFO--
 * Address:	801F1BB8
 * Size:	00009C
 */
void getColorMePikmins__Q24Game11CourseCacheFPUci(void)
{
/*
.loc_0x0:
  stwu      r1, -0x450(r1)
  mflr      r0
  mr        r6, r4
  stw       r0, 0x454(r1)
  stmw      r27, 0x43C(r1)
  mr        r27, r3
  mr        r28, r5
  li        r30, 0
  lwz       r5, 0x28(r3)
  lwz       r0, 0x1C(r3)
  addi      r3, r1, 0x14
  lwz       r4, 0x30(r27)
  add       r0, r0, r5
  lwz       r5, 0x38(r27)
  add       r4, r0, r4
  add       r4, r6, r4
  bl        0x223D00
  li        r29, 0
  b         .loc_0x78

.loc_0x4C:
  addi      r3, r1, 0x14
  bl        0x222894
  rlwinm    r31,r3,0,24,31
  addi      r3, r1, 0x8
  addi      r4, r1, 0x14
  bl        0x21FD78
  rlwinm    r0,r31,0,28,31
  cmpw      r0, r28
  bne-      .loc_0x74
  addi      r30, r30, 0x1

.loc_0x74:
  addi      r29, r29, 0x1

.loc_0x78:
  lwz       r0, 0x34(r27)
  cmpw      r29, r0
  blt+      .loc_0x4C
  mr        r3, r30
  lmw       r27, 0x43C(r1)
  lwz       r0, 0x454(r1)
  mtlr      r0
  addi      r1, r1, 0x450
  blr
*/
}

/*
 * --INFO--
 * Address:	801F1C54
 * Size:	00009C
 */
void createHeap__Q24Game14GeneratorCacheFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x1
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  subi      r3, r4, 0x6000
  bl        -0x1CDCC8
  lis       r4, 0x1
  stw       r3, 0x7C(r30)
  subi      r3, r4, 0x6000
  li        r0, 0
  stw       r3, 0x80(r30)
  li        r31, 0
  stw       r0, 0x84(r30)
  lwz       r0, 0x80(r30)
  stw       r0, 0x88(r30)
  b         .loc_0x74

.loc_0x4C:
  li        r3, 0x3C
  bl        -0x1CDE00
  mr.       r4, r3
  beq-      .loc_0x68
  mr        r4, r31
  bl        0xCAC
  mr        r4, r3

.loc_0x68:
  addi      r3, r30, 0x3C
  bl        0x21F748
  addi      r31, r31, 0x1

.loc_0x74:
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  blt+      .loc_0x4C
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
 * Size:	000004
 */
void destroyHeap__Q24Game14GeneratorCacheFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F1CF0
 * Size:	000038
 */
void findCache__Q24Game14GeneratorCacheFRQ24Game11CourseCachei(void)
{
/*
.loc_0x0:
  lwz       r3, 0x10(r4)
  b         .loc_0x28

.loc_0x8:
  cmplwi    r3, 0
  bne-      .loc_0x18
  li        r3, 0
  blr       

.loc_0x18:
  lwz       r0, 0x18(r3)
  cmpw      r0, r5
  beqlr-    
  lwz       r3, 0x4(r3)

.loc_0x28:
  cmplwi    r3, 0
  bne+      .loc_0x8
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801F1D28
 * Size:	000128
 */
void loadGenerators__Q24Game14GeneratorCacheFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x440(r1)
  mflr      r0
  stw       r0, 0x444(r1)
  stw       r31, 0x43C(r1)
  mr        r31, r3
  stw       r30, 0x438(r1)
  stw       r29, 0x434(r1)
  lwz       r3, 0x10(r3)
  b         .loc_0x48

.loc_0x24:
  cmplwi    r3, 0
  bne-      .loc_0x34
  li        r3, 0
  b         .loc_0x54

.loc_0x34:
  lwz       r0, 0x18(r3)
  cmpw      r0, r4
  bne-      .loc_0x44
  b         .loc_0x54

.loc_0x44:
  lwz       r3, 0x4(r3)

.loc_0x48:
  cmplwi    r3, 0
  bne+      .loc_0x24
  li        r3, 0

.loc_0x54:
  stw       r3, 0x78(r31)
  lwz       r5, 0x78(r31)
  cmplwi    r5, 0
  beq-      .loc_0x10C
  lwz       r4, 0x7C(r31)
  addi      r3, r1, 0x8
  lwz       r0, 0x1C(r5)
  lwz       r5, 0x20(r5)
  add       r4, r4, r0
  bl        0x223B58
  li        r29, 0
  b         .loc_0xFC

.loc_0x84:
  li        r3, 0xB4
  bl        -0x1CDF0C
  mr.       r30, r3
  beq-      .loc_0x9C
  bl        -0x475D8
  mr        r30, r3

.loc_0x9C:
  li        r0, 0x1
  mr        r3, r30
  stb       r0, -0x6C5C(r13)
  addi      r4, r1, 0x8
  bl        -0x470BC
  li        r4, 0
  stb       r4, -0x6C5C(r13)
  stw       r29, 0xB0(r30)
  stb       r4, 0xAC(r30)
  lwz       r3, 0x9C(r31)
  b         .loc_0xDC

.loc_0xC8:
  lbz       r0, 0xAC(r3)
  cmplwi    r0, 0
  bne-      .loc_0xD8
  addi      r4, r4, 0x1

.loc_0xD8:
  lwz       r3, 0x4(r3)

.loc_0xDC:
  cmplwi    r3, 0
  bne+      .loc_0xC8
  cmpwi     r4, 0x50
  bge-      .loc_0xF8
  mr        r4, r30
  addi      r3, r31, 0x8C
  bl        0x21F5EC

.loc_0xF8:
  addi      r29, r29, 0x1

.loc_0xFC:
  lwz       r3, 0x78(r31)
  lwz       r0, 0x24(r3)
  cmpw      r29, r0
  blt+      .loc_0x84

.loc_0x10C:
  lwz       r0, 0x444(r1)
  lwz       r31, 0x43C(r1)
  lwz       r30, 0x438(r1)
  lwz       r29, 0x434(r1)
  mtlr      r0
  addi      r1, r1, 0x440
  blr
*/
}

/*
 * --INFO--
 * Address:	801F1E50
 * Size:	0001B8
 */
void loadCreatures__Q24Game14GeneratorCacheFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x650(r1)
  mflr      r0
  stw       r0, 0x654(r1)
  stmw      r27, 0x63C(r1)
  mr        r31, r3
  lis       r3, 0x8048
  addi      r30, r3, 0x1480
  lwz       r5, 0x10(r31)
  b         .loc_0x48

.loc_0x24:
  cmplwi    r5, 0
  bne-      .loc_0x34
  li        r5, 0
  b         .loc_0x54

.loc_0x34:
  lwz       r0, 0x18(r5)
  cmpw      r0, r4
  bne-      .loc_0x44
  b         .loc_0x54

.loc_0x44:
  lwz       r5, 0x4(r5)

.loc_0x48:
  cmplwi    r5, 0
  bne+      .loc_0x24
  li        r5, 0

.loc_0x54:
  stw       r5, 0x78(r31)
  lwz       r5, 0x78(r31)
  cmplwi    r5, 0
  beq-      .loc_0x1A4
  lwz       r4, 0x28(r5)
  addi      r3, r1, 0x214
  lwz       r0, 0x1C(r5)
  lwz       r6, 0x7C(r31)
  add       r4, r0, r4
  lwz       r5, 0x30(r5)
  add       r4, r6, r4
  bl        0x223A28
  li        r28, 0
  b         .loc_0x184

.loc_0x8C:
  addi      r3, r1, 0x214
  bl        0x222BB0
  lwz       r29, 0x9C(r31)
  mr        r27, r3
  b         .loc_0xC0

.loc_0xA0:
  lbz       r0, 0xAC(r29)
  cmplwi    r0, 0
  bne-      .loc_0xBC
  lwz       r0, 0xB0(r29)
  cmpw      r0, r27
  bne-      .loc_0xBC
  b         .loc_0xCC

.loc_0xBC:
  lwz       r29, 0x4(r29)

.loc_0xC0:
  cmplwi    r29, 0
  bne+      .loc_0xA0
  li        r29, 0

.loc_0xCC:
  cmplwi    r29, 0
  bne-      .loc_0xF0
  mr        r6, r28
  mr        r7, r27
  addi      r3, r30, 0x10
  addi      r5, r30, 0x28
  li        r4, 0x1AE
  crclr     6, 0x6
  bl        -0x1C78FC

.loc_0xF0:
  mr        r3, r29
  addi      r4, r1, 0x214
  bl        -0x47590
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x180
  lwz       r0, 0x18(r29)
  cmplwi    r0, 0
  beq-      .loc_0x168
  addi      r3, r1, 0x14
  subi      r4, r2, 0x47A0
  crclr     6, 0x6
  bl        -0x12AB34
  lwz       r3, 0x18(r29)
  addi      r4, r1, 0x14
  lwz       r12, 0xC(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x18(r29)
  addi      r3, r1, 0x8
  lwz       r4, 0x10(r4)
  bl        0x221314
  mr        r7, r27
  addi      r3, r30, 0x10
  addi      r5, r30, 0x40
  addi      r6, r1, 0x8
  addi      r8, r1, 0x14
  li        r4, 0x1C0
  crclr     6, 0x6
  bl        -0x1C7974

.loc_0x168:
  mr        r6, r27
  addi      r3, r30, 0x10
  addi      r5, r30, 0x54
  li        r4, 0x1C2
  crclr     6, 0x6
  bl        -0x1C798C

.loc_0x180:
  addi      r28, r28, 0x1

.loc_0x184:
  lwz       r3, 0x78(r31)
  lwz       r0, 0x2C(r3)
  cmpw      r28, r0
  blt+      .loc_0x8C
  mr        r3, r31
  bl        .loc_0x1B8
  mr        r3, r31
  bl        0x12C

.loc_0x1A4:
  lmw       r27, 0x63C(r1)
  lwz       r0, 0x654(r1)
  mtlr      r0
  addi      r1, r1, 0x650
  blr       

.loc_0x1B8:
*/
}

/*
 * --INFO--
 * Address:	801F2008
 * Size:	000114
 */
void loadPikiheads__Q24Game14GeneratorCacheFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x480(r1)
  mflr      r0
  stw       r0, 0x484(r1)
  stfd      f31, 0x470(r1)
  psq_st    f31,0x478(r1),0,0
  stmw      r25, 0x454(r1)
  mr        r31, r3
  addi      r3, r1, 0x28
  lwz       r5, 0x78(r31)
  lwz       r6, 0x7C(r31)
  lwz       r4, 0x28(r5)
  lwz       r0, 0x1C(r5)
  lwz       r7, 0x30(r5)
  add       r0, r0, r4
  lwz       r5, 0x38(r5)
  add       r4, r0, r7
  add       r4, r6, r4
  bl        0x2238AC
  lis       r6, 0x8051
  lis       r5, 0x804B
  lis       r4, 0x804B
  lis       r3, 0x804B
  lfs       f31, -0x4798(r2)
  addi      r27, r6, 0x41E4
  subi      r28, r5, 0x5D0C
  addi      r29, r4, 0x2C7C
  addi      r30, r3, 0x2C70
  li        r26, 0
  b         .loc_0xE8

.loc_0x74:
  lwz       r3, -0x6B90(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  stw       r28, 0x8(r1)
  li        r5, 0
  lfs       f2, 0x0(r27)
  li        r6, -0x1
  stw       r29, 0x8(r1)
  li        r0, 0x1
  lfs       f1, 0x4(r27)
  mr        r25, r3
  stb       r5, 0x1C(r1)
  addi      r4, r1, 0x8
  lfs       f0, 0x8(r27)
  stw       r30, 0x8(r1)
  stw       r6, 0xC(r1)
  stfs      f2, 0x10(r1)
  stfs      f1, 0x14(r1)
  stfs      f0, 0x18(r1)
  stw       r5, 0x20(r1)
  stfs      f31, 0x24(r1)
  stb       r0, 0x1C(r1)
  bl        -0xB7114
  mr        r3, r25
  addi      r4, r1, 0x28
  bl        -0x18290
  addi      r26, r26, 0x1

.loc_0xE8:
  lwz       r3, 0x78(r31)
  lwz       r0, 0x34(r3)
  cmpw      r26, r0
  blt+      .loc_0x74
  psq_l     f31,0x478(r1),0,0
  lfd       f31, 0x470(r1)
  lmw       r25, 0x454(r1)
  lwz       r0, 0x484(r1)
  mtlr      r0
  addi      r1, r1, 0x480
  blr
*/
}

/*
 * --INFO--
 * Address:	801F211C
 * Size:	0000C0
 */
void slideCache__Q24Game14GeneratorCacheFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  lwz       r3, 0x78(r3)
  lwz       r30, 0x20(r3)
  mr        r5, r3
  b         .loc_0x70

.loc_0x28:
  lwz       r3, 0x7C(r31)
  li        r6, 0
  lwz       r0, 0x1C(r5)
  add       r0, r3, r0
  sub       r3, r0, r30
  mr        r4, r0
  b         .loc_0x58

.loc_0x44:
  lbz       r0, 0x0(r4)
  addi      r6, r6, 0x1
  addi      r4, r4, 0x1
  stb       r0, 0x0(r3)
  addi      r3, r3, 0x1

.loc_0x58:
  lwz       r0, 0x20(r5)
  cmpw      r6, r0
  blt+      .loc_0x44
  lwz       r0, 0x1C(r5)
  sub       r0, r0, r30
  stw       r0, 0x1C(r5)

.loc_0x70:
  lwz       r5, 0x4(r5)
  cmplwi    r5, 0
  bne+      .loc_0x28
  lwz       r3, 0x78(r31)
  bl        0x21F434
  lwz       r4, 0x78(r31)
  addi      r3, r31, 0x3C
  bl        0x21F260
  lwz       r0, 0x84(r31)
  sub       r0, r0, r30
  stw       r0, 0x84(r31)
  lwz       r0, 0x88(r31)
  add       r0, r0, r30
  stw       r0, 0x88(r31)
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
 * Address:	801F21DC
 * Size:	00004C
 */
void updateUseList__Q24Game14GeneratorCacheFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r31, 0x9C(r3)
  b         .loc_0x30

.loc_0x18:
  lbz       r0, 0xAC(r31)
  cmplwi    r0, 0
  bne-      .loc_0x2C
  mr        r3, r31
  bl        -0x478DC

.loc_0x2C:
  lwz       r31, 0x4(r31)

.loc_0x30:
  cmplwi    r31, 0
  bne+      .loc_0x18
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F2228
 * Size:	000078
 */
void createNumberGenerators__Q24Game14GeneratorCacheFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0x1
  stw       r29, 0x14(r1)
  lwz       r29, 0x9C(r3)
  b         .loc_0x54

.loc_0x28:
  lbz       r0, 0xAC(r29)
  cmplwi    r0, 0
  bne-      .loc_0x50
  lhz       r0, 0x5C(r29)
  rlwinm.   r0,r0,0,29,29
  beq-      .loc_0x50
  stb       r30, -0x6C5C(r13)
  mr        r3, r29
  bl        -0x476B4
  stb       r31, -0x6C5C(r13)

.loc_0x50:
  lwz       r29, 0x4(r29)

.loc_0x54:
  cmplwi    r29, 0
  bne+      .loc_0x28
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
 * Address:	801F22A0
 * Size:	0000F8
 */
void beginSave__Q24Game14GeneratorCacheFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x8048
  lwz       r6, 0x4C(r31)
  addi      r5, r3, 0x1480
  b         .loc_0x48

.loc_0x24:
  cmplwi    r6, 0
  bne-      .loc_0x34
  li        r6, 0
  b         .loc_0x54

.loc_0x34:
  lwz       r0, 0x18(r6)
  cmpw      r0, r4
  bne-      .loc_0x44
  b         .loc_0x54

.loc_0x44:
  lwz       r6, 0x4(r6)

.loc_0x48:
  cmplwi    r6, 0
  bne+      .loc_0x24
  li        r6, 0

.loc_0x54:
  stw       r6, 0x78(r31)
  lwz       r0, 0x78(r31)
  cmplwi    r0, 0
  bne-      .loc_0xD8
  lwz       r3, 0x10(r31)
  b         .loc_0x90

.loc_0x6C:
  cmplwi    r3, 0
  bne-      .loc_0x7C
  li        r3, 0
  b         .loc_0x9C

.loc_0x7C:
  lwz       r0, 0x18(r3)
  cmpw      r0, r4
  bne-      .loc_0x8C
  b         .loc_0x9C

.loc_0x8C:
  lwz       r3, 0x4(r3)

.loc_0x90:
  cmplwi    r3, 0
  bne+      .loc_0x6C
  li        r3, 0

.loc_0x9C:
  cmplwi    r3, 0
  beq-      .loc_0xC0
  mr        r6, r4
  addi      r3, r5, 0x10
  addi      r5, r5, 0x64
  li        r4, 0x220
  crclr     6, 0x6
  bl        -0x1C7D18
  b         .loc_0xD8

.loc_0xC0:
  mr        r6, r4
  addi      r3, r5, 0x10
  addi      r5, r5, 0x88
  li        r4, 0x222
  crclr     6, 0x6
  bl        -0x1C7D34

.loc_0xD8:
  lwz       r3, 0x78(r31)
  lwz       r4, 0x84(r31)
  bl        0x650
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F2398
 * Size:	0000C8
 */
void endSave__Q24Game14GeneratorCacheFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x78(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1490
  li        r4, 0x22A
  addi      r5, r5, 0x152C
  crclr     6, 0x6
  bl        -0x1C7D90

.loc_0x3C:
  lwz       r3, 0x78(r31)
  lwz       r4, 0x4C(r31)
  lwz       r3, 0x18(r3)
  b         .loc_0x70

.loc_0x4C:
  cmplwi    r4, 0
  bne-      .loc_0x5C
  li        r4, 0
  b         .loc_0x7C

.loc_0x5C:
  lwz       r0, 0x18(r4)
  cmpw      r0, r3
  bne-      .loc_0x6C
  b         .loc_0x7C

.loc_0x6C:
  lwz       r4, 0x4(r4)

.loc_0x70:
  cmplwi    r4, 0
  bne+      .loc_0x4C
  li        r4, 0

.loc_0x7C:
  cmplwi    r4, 0
  bne-      .loc_0xA0
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1490
  li        r4, 0x22B
  addi      r5, r5, 0x152C
  crclr     6, 0x6
  bl        -0x1C7DF4

.loc_0xA0:
  lwz       r3, 0x78(r31)
  bl        0x21F194
  lwz       r4, 0x78(r31)
  mr        r3, r31
  bl        0x21EFC0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F2460
 * Size:	0000F0
 */
void saveGenerator__Q24Game14GeneratorCacheFPQ24Game9Generator(void)
{
/*
.loc_0x0:
  stwu      r1, -0x430(r1)
  mflr      r0
  stw       r0, 0x434(r1)
  stw       r31, 0x42C(r1)
  mr        r31, r3
  stw       r30, 0x428(r1)
  mr        r30, r4
  lwz       r4, 0x84(r4)
  cmpwi     r4, -0x1
  beq-      .loc_0x3C
  lwz       r3, -0x6C18(r13)
  lwz       r3, 0x40(r3)
  lwz       r0, 0x218(r3)
  cmplw     r0, r4
  bge-      .loc_0xD8

.loc_0x3C:
  mr        r3, r30
  bl        -0x47A28
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD8
  lwz       r4, 0x7C(r31)
  addi      r3, r1, 0x8
  lwz       r0, 0x84(r31)
  lwz       r5, 0x88(r31)
  add       r4, r4, r0
  bl        0x223438
  lwz       r5, 0x78(r31)
  li        r0, 0x1
  mr        r3, r30
  addi      r4, r1, 0x8
  lwz       r5, 0x24(r5)
  stw       r5, 0xB0(r30)
  stb       r0, -0x6C5C(r13)
  bl        -0x47424
  li        r0, 0
  lwz       r5, 0x10(r1)
  stb       r0, -0x6C5C(r13)
  lwz       r0, 0x84(r31)
  add       r0, r0, r5
  stw       r0, 0x84(r31)
  lwz       r0, 0x88(r31)
  sub       r0, r0, r5
  stw       r0, 0x88(r31)
  lwz       r4, 0x78(r31)
  lwz       r3, 0x24(r4)
  addi      r0, r3, 0x1
  stw       r0, 0x24(r4)
  lwz       r3, 0x78(r31)
  lwz       r0, 0x20(r3)
  add       r0, r0, r5
  stw       r0, 0x20(r3)
  lwz       r3, 0x78(r31)
  lwz       r0, 0x28(r3)
  add       r0, r0, r5
  stw       r0, 0x28(r3)

.loc_0xD8:
  lwz       r0, 0x434(r1)
  lwz       r31, 0x42C(r1)
  lwz       r30, 0x428(r1)
  mtlr      r0
  addi      r1, r1, 0x430
  blr
*/
}

/*
 * --INFO--
 * Address:	801F2550
 * Size:	000140
 */
void saveCreature__Q24Game14GeneratorCacheFPQ24Game9Generator(void)
{
/*
.loc_0x0:
  stwu      r1, -0x430(r1)
  mflr      r0
  stw       r0, 0x434(r1)
  stw       r31, 0x42C(r1)
  mr        r31, r3
  stw       r30, 0x428(r1)
  mr        r30, r4
  lwz       r0, 0x6C(r4)
  cmplwi    r0, 0
  beq-      .loc_0x128
  lwz       r4, 0x84(r30)
  cmpwi     r4, -0x1
  beq-      .loc_0x4C
  lwz       r3, -0x6C18(r13)
  lwz       r3, 0x40(r3)
  lwz       r0, 0x218(r3)
  cmplw     r0, r4
  blt-      .loc_0x4C
  b         .loc_0x128

.loc_0x4C:
  lwz       r4, 0x7C(r31)
  addi      r3, r1, 0x8
  lwz       r0, 0x84(r31)
  lwz       r5, 0x88(r31)
  add       r4, r4, r0
  bl        0x223348
  li        r0, 0x1
  mr        r3, r30
  stb       r0, -0x6C5C(r13)
  bl        -0x47B48
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC8
  lwz       r4, 0xB0(r30)
  addi      r3, r1, 0x8
  bl        0x2231EC
  mr        r3, r30
  addi      r4, r1, 0x8
  bl        -0x47AEC
  lwz       r3, 0x78(r31)
  lwz       r6, 0xB0(r30)
  lwz       r7, 0x24(r3)
  cmpw      r6, r7
  blt-      .loc_0xD4
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0x1538
  addi      r3, r3, 0x1490
  li        r4, 0x2A0
  crclr     6, 0x6
  bl        -0x1C7FD0
  b         .loc_0xD4

.loc_0xC8:
  li        r0, 0
  stb       r0, -0x6C5C(r13)
  b         .loc_0x128

.loc_0xD4:
  li        r0, 0
  lwz       r5, 0x10(r1)
  stb       r0, -0x6C5C(r13)
  lwz       r0, 0x84(r31)
  add       r0, r0, r5
  stw       r0, 0x84(r31)
  lwz       r0, 0x88(r31)
  sub       r0, r0, r5
  stw       r0, 0x88(r31)
  lwz       r4, 0x78(r31)
  lwz       r3, 0x2C(r4)
  addi      r0, r3, 0x1
  stw       r0, 0x2C(r4)
  lwz       r3, 0x78(r31)
  lwz       r0, 0x20(r3)
  add       r0, r0, r5
  stw       r0, 0x20(r3)
  lwz       r3, 0x78(r31)
  lwz       r0, 0x30(r3)
  add       r0, r0, r5
  stw       r0, 0x30(r3)

.loc_0x128:
  lwz       r0, 0x434(r1)
  lwz       r31, 0x42C(r1)
  lwz       r30, 0x428(r1)
  mtlr      r0
  addi      r1, r1, 0x430
  blr
*/
}

/*
 * --INFO--
 * Address:	801F2690
 * Size:	0002D0
 */
void savePikiheads__Q24Game14GeneratorCacheFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x450(r1)
  mflr      r0
  stw       r0, 0x454(r1)
  stw       r31, 0x44C(r1)
  mr        r31, r3
  addi      r3, r1, 0x18
  stw       r30, 0x448(r1)
  stw       r29, 0x444(r1)
  lwz       r4, 0x7C(r31)
  lwz       r0, 0x84(r31)
  lwz       r5, 0x88(r31)
  add       r4, r4, r0
  bl        0x223238
  lwz       r3, -0x6B90(r13)
  cmplwi    r3, 0
  beq-      .loc_0x44
  addi      r3, r3, 0x30

.loc_0x44:
  li        r0, 0
  lis       r4, 0x804B
  addi      r4, r4, 0x5A4
  stw       r0, 0x14(r1)
  cmplwi    r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r3, 0x10(r1)
  bne-      .loc_0x80
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x294

.loc_0x80:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0xEC

.loc_0x98:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x294
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0xEC:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x98
  b         .loc_0x294

.loc_0x10C:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r30, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1B0
  mr        r3, r30
  bl        -0x18A00
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1B0
  lwz       r29, 0x20(r1)
  mr        r3, r30
  addi      r4, r1, 0x18
  bl        -0x189EC
  lwz       r3, 0x20(r1)
  lwz       r0, 0x84(r31)
  sub       r5, r3, r29
  add       r0, r0, r5
  stw       r0, 0x84(r31)
  lwz       r0, 0x88(r31)
  sub       r0, r0, r5
  stw       r0, 0x88(r31)
  lwz       r4, 0x78(r31)
  lwz       r3, 0x34(r4)
  addi      r0, r3, 0x1
  stw       r0, 0x34(r4)
  lwz       r3, 0x78(r31)
  lwz       r0, 0x20(r3)
  add       r0, r0, r5
  stw       r0, 0x20(r3)
  lwz       r3, 0x78(r31)
  lwz       r0, 0x38(r3)
  add       r0, r0, r5
  stw       r0, 0x38(r3)
  b         .loc_0x1D8

.loc_0x1B0:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1D8
  mr        r3, r30
  li        r4, 0
  bl        -0xB7774

.loc_0x1D8:
  lwz       r0, 0x14(r1)
  cmplwi    r0, 0
  bne-      .loc_0x204
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x294

.loc_0x204:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)
  b         .loc_0x278

.loc_0x224:
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x294
  lwz       r3, 0x10(r1)
  lwz       r4, 0xC(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xC(r1)

.loc_0x278:
  lwz       r12, 0x8(r1)
  addi      r3, r1, 0x8
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x224

.loc_0x294:
  lwz       r3, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xC(r1)
  cmplw     r4, r3
  bne+      .loc_0x10C
  lwz       r0, 0x454(r1)
  lwz       r31, 0x44C(r1)
  lwz       r30, 0x448(r1)
  lwz       r29, 0x444(r1)
  mtlr      r0
  addi      r1, r1, 0x450
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void checkOverflow__Q24Game14GeneratorCacheFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F2960
 * Size:	000070
 */
void __ct__Q24Game11CourseCacheFi(void)
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
  bl        0x21EA14
  lis       r3, 0x804C
  li        r0, 0
  subi      r4, r3, 0x43F8
  mr        r3, r30
  stw       r4, 0x0(r30)
  stw       r31, 0x18(r30)
  stw       r0, 0x20(r30)
  stw       r0, 0x1C(r30)
  stw       r0, 0x24(r30)
  stw       r0, 0x28(r30)
  stw       r0, 0x2C(r30)
  stw       r0, 0x30(r30)
  stw       r0, 0x34(r30)
  stw       r0, 0x38(r30)
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
 * Address:	801F29D0
 * Size:	000028
 */
void beginSave__Q24Game11CourseCacheFi(void)
{
/*
.loc_0x0:
  stw       r4, 0x1C(r3)
  li        r0, 0
  stw       r0, 0x20(r3)
  stw       r0, 0x24(r3)
  stw       r0, 0x28(r3)
  stw       r0, 0x2C(r3)
  stw       r0, 0x30(r3)
  stw       r0, 0x34(r3)
  stw       r0, 0x38(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801F29F8
 * Size:	000234
 */
void write__Q24Game14GeneratorCacheFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r30, r3
  mr        r31, r4
  li        r28, 0
  addi      r29, r5, 0x1480
  b         .loc_0x12C

.loc_0x28:
  lwz       r3, 0x10(r30)
  b         .loc_0x54

.loc_0x30:
  cmplwi    r3, 0
  bne-      .loc_0x40
  li        r3, 0
  b         .loc_0x60

.loc_0x40:
  lwz       r0, 0x18(r3)
  cmpw      r0, r28
  bne-      .loc_0x50
  b         .loc_0x60

.loc_0x50:
  lwz       r3, 0x4(r3)

.loc_0x54:
  cmplwi    r3, 0
  bne+      .loc_0x30
  li        r3, 0

.loc_0x60:
  cmplwi    r3, 0
  mr        r27, r3
  beq-      .loc_0x98
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x2219C8
  mr        r3, r31
  li        r4, 0
  bl        0x222BF8
  mr        r3, r31
  addi      r4, r29, 0xD4
  crclr     6, 0x6
  bl        0x221754
  b         .loc_0x11C

.loc_0x98:
  lwz       r3, 0x4C(r30)
  b         .loc_0xC4

.loc_0xA0:
  cmplwi    r3, 0
  bne-      .loc_0xB0
  li        r3, 0
  b         .loc_0xD0

.loc_0xB0:
  lwz       r0, 0x18(r3)
  cmpw      r0, r28
  bne-      .loc_0xC0
  b         .loc_0xD0

.loc_0xC0:
  lwz       r3, 0x4(r3)

.loc_0xC4:
  cmplwi    r3, 0
  bne+      .loc_0xA0
  li        r3, 0

.loc_0xD0:
  cmplwi    r3, 0
  mr        r27, r3
  bne-      .loc_0xF4
  mr        r6, r28
  addi      r3, r29, 0x10
  addi      r5, r29, 0xE0
  li        r4, 0x3B1
  crclr     6, 0x6
  bl        -0x1C84A8

.loc_0xF4:
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x221940
  mr        r3, r31
  li        r4, 0xFF
  bl        0x222B70
  mr        r3, r31
  addi      r4, r29, 0xF0
  crclr     6, 0x6
  bl        0x2216CC

.loc_0x11C:
  mr        r3, r27
  mr        r4, r31
  bl        0x3C0
  addi      r28, r28, 0x1

.loc_0x12C:
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r28, r0
  blt+      .loc_0x28
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x2218F8
  lwz       r4, 0x80(r30)
  mr        r3, r31
  bl        0x222C78
  mr        r3, r31
  addi      r4, r29, 0xFC
  crclr     6, 0x6
  bl        0x221684
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x2218D0
  lwz       r4, 0x84(r30)
  mr        r3, r31
  bl        0x222C50
  mr        r3, r31
  addi      r4, r29, 0x10C
  crclr     6, 0x6
  bl        0x22165C
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x2218A8
  lwz       r4, 0x88(r30)
  mr        r3, r31
  bl        0x222C28
  mr        r3, r31
  addi      r4, r29, 0x11C
  crclr     6, 0x6
  bl        0x221634
  lwz       r27, 0x80(r30)
  li        r28, 0
  b         .loc_0x218

.loc_0x1C0:
  cmpwi     r27, 0x40
  li        r29, 0x40
  bge-      .loc_0x1D0
  mr        r29, r27

.loc_0x1D0:
  lwz       r4, 0x414(r31)
  mr        r3, r31
  bl        0x221864
  li        r26, 0
  b         .loc_0x1FC

.loc_0x1E4:
  lwz       r4, 0x7C(r30)
  mr        r3, r31
  lbzx      r4, r4, r28
  addi      r28, r28, 0x1
  bl        0x222A84
  addi      r26, r26, 0x1

.loc_0x1FC:
  cmpw      r26, r29
  blt+      .loc_0x1E4
  mr        r3, r31
  subi      r4, r2, 0x4794
  crclr     6, 0x6
  bl        0x2215D4
  sub       r27, r27, r29

.loc_0x218:
  cmpwi     r27, 0
  bgt+      .loc_0x1C0
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801F2C2C
 * Size:	0002B0
 */
void read__Q24Game14GeneratorCacheFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x64(r1)
  stmw      r26, 0x48(r1)
  mr        r30, r3
  mr        r31, r4
  li        r28, 0
  addi      r29, r5, 0x1480
  b         .loc_0x80

.loc_0x28:
  lwz       r27, 0x10(r30)
  b         .loc_0x54

.loc_0x30:
  cmplwi    r27, 0
  bne-      .loc_0x40
  li        r27, 0
  b         .loc_0x60

.loc_0x40:
  lwz       r0, 0x18(r27)
  cmpw      r0, r28
  bne-      .loc_0x50
  b         .loc_0x60

.loc_0x50:
  lwz       r27, 0x4(r27)

.loc_0x54:
  cmplwi    r27, 0
  bne+      .loc_0x30
  li        r27, 0

.loc_0x60:
  cmplwi    r27, 0
  beq-      .loc_0x7C
  mr        r3, r27
  bl        0x21E938
  mr        r4, r27
  addi      r3, r30, 0x3C
  bl        0x21E764

.loc_0x7C:
  addi      r28, r28, 0x1

.loc_0x80:
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r28, r0
  blt+      .loc_0x28
  li        r4, 0
  addi      r3, r1, 0x8
  stw       r4, 0x9C(r30)
  stw       r4, 0x98(r30)
  stw       r4, 0x94(r30)
  stw       r4, 0x90(r30)
  stw       r4, 0x84(r30)
  lwz       r0, 0x80(r30)
  stw       r0, 0x88(r30)
  stw       r4, 0x78(r30)
  bl        0x21E6AC
  lis       r3, 0x804C
  li        r0, 0
  subi      r4, r3, 0x43F8
  li        r3, -0x1
  stw       r4, 0x8(r1)
  li        r26, 0
  stw       r3, 0x20(r1)
  stw       r0, 0x28(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x2C(r1)
  stw       r0, 0x30(r1)
  stw       r0, 0x34(r1)
  stw       r0, 0x38(r1)
  stw       r0, 0x3C(r1)
  stw       r0, 0x40(r1)
  b         .loc_0x1C8

.loc_0xFC:
  mr        r3, r31
  bl        0x221770
  lwz       r28, 0x4C(r30)
  rlwinm    r27,r3,0,24,31
  b         .loc_0x134

.loc_0x110:
  cmplwi    r28, 0
  bne-      .loc_0x120
  li        r28, 0
  b         .loc_0x140

.loc_0x120:
  lwz       r0, 0x18(r28)
  cmpw      r0, r26
  bne-      .loc_0x130
  b         .loc_0x140

.loc_0x130:
  lwz       r28, 0x4(r28)

.loc_0x134:
  cmplwi    r28, 0
  bne+      .loc_0x110
  li        r28, 0

.loc_0x140:
  cmplwi    r28, 0
  bne-      .loc_0x160
  mr        r6, r26
  addi      r3, r29, 0x10
  addi      r5, r29, 0x12C
  li        r4, 0x3F1
  crclr     6, 0x6
  bl        -0x1C8748

.loc_0x160:
  mr        r3, r28
  mr        r4, r31
  bl        0x31C
  cmplwi    r27, 0
  bne-      .loc_0x18C
  mr        r3, r28
  bl        0x21E82C
  mr        r4, r28
  addi      r3, r1, 0x8
  bl        0x21E658
  b         .loc_0x1C4

.loc_0x18C:
  cmplwi    r27, 0xFF
  bne-      .loc_0x1AC
  mr        r3, r28
  bl        0x21E80C
  mr        r4, r28
  addi      r3, r30, 0x3C
  bl        0x21E638
  b         .loc_0x1C4

.loc_0x1AC:
  mr        r6, r27
  addi      r3, r29, 0x10
  addi      r5, r29, 0x14C
  li        r4, 0x3FB
  crclr     6, 0x6
  bl        -0x1C87AC

.loc_0x1C4:
  addi      r26, r26, 0x1

.loc_0x1C8:
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r26, r0
  blt+      .loc_0xFC
  lwz       r0, 0x18(r1)
  b         .loc_0x230

.loc_0x1E0:
  lwz       r4, 0x18(r1)
  li        r3, -0x1
  li        r26, 0
  b         .loc_0x208

.loc_0x1F0:
  lwz       r0, 0x1C(r4)
  cmplw     r3, r0
  ble-      .loc_0x204
  mr        r3, r0
  mr        r26, r4

.loc_0x204:
  lwz       r4, 0x4(r4)

.loc_0x208:
  cmplwi    r4, 0
  bne+      .loc_0x1F0
  cmplwi    r26, 0
  beq-      .loc_0x22C
  mr        r3, r26
  bl        0x21E788
  mr        r3, r30
  mr        r4, r26
  bl        0x21E5B4

.loc_0x22C:
  lwz       r0, 0x18(r1)

.loc_0x230:
  cmplwi    r0, 0
  bne+      .loc_0x1E0
  mr        r3, r31
  bl        0x221C28
  stw       r3, 0x80(r30)
  mr        r3, r31
  bl        0x221C1C
  stw       r3, 0x84(r30)
  mr        r3, r31
  bl        0x221C10
  stw       r3, 0x88(r30)
  li        r26, 0
  b         .loc_0x278

.loc_0x264:
  mr        r3, r31
  bl        0x221608
  lwz       r4, 0x7C(r30)
  stbx      r3, r4, r26
  addi      r26, r26, 0x1

.loc_0x278:
  lwz       r0, 0x80(r30)
  cmpw      r26, r0
  blt+      .loc_0x264
  lis       r4, 0x804C
  addi      r3, r1, 0x8
  subi      r0, r4, 0x43F8
  li        r4, 0
  stw       r0, 0x8(r1)
  bl        0x21E6C4
  lmw       r26, 0x48(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	801F2EDC
 * Size:	0001D4
 */
void write__Q24Game11CourseCacheFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  stw       r0, 0x124(r1)
  stw       r31, 0x11C(r1)
  stw       r30, 0x118(r1)
  mr        r30, r4
  stw       r29, 0x114(r1)
  mr        r29, r3
  lis       r3, 0x8048
  addi      r31, r3, 0x1480
  lwz       r5, 0x18(r29)
  addi      r3, r1, 0x8
  addi      r4, r31, 0x164
  crclr     6, 0x6
  bl        -0x12BADC
  mr        r3, r30
  addi      r4, r1, 0x8
  bl        0x2210FC
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x221508
  lwz       r4, 0x18(r29)
  mr        r3, r30
  bl        0x222888
  mr        r3, r30
  addi      r4, r31, 0x174
  crclr     6, 0x6
  bl        0x221294
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x2214E0
  lwz       r4, 0x1C(r29)
  mr        r3, r30
  bl        0x222860
  mr        r3, r30
  addi      r4, r31, 0x184
  crclr     6, 0x6
  bl        0x22126C
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x2214B8
  lwz       r4, 0x20(r29)
  mr        r3, r30
  bl        0x222838
  mr        r3, r30
  addi      r4, r31, 0x190
  crclr     6, 0x6
  bl        0x221244
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x221490
  lwz       r4, 0x24(r29)
  mr        r3, r30
  bl        0x222810
  mr        r3, r30
  addi      r4, r31, 0x19C
  crclr     6, 0x6
  bl        0x22121C
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x221468
  lwz       r4, 0x28(r29)
  mr        r3, r30
  bl        0x2227E8
  mr        r3, r30
  addi      r4, r31, 0x1B0
  crclr     6, 0x6
  bl        0x2211F4
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x221440
  lwz       r4, 0x2C(r29)
  mr        r3, r30
  bl        0x2227C0
  mr        r3, r30
  addi      r4, r31, 0x1C4
  crclr     6, 0x6
  bl        0x2211CC
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x221418
  lwz       r4, 0x30(r29)
  mr        r3, r30
  bl        0x222798
  mr        r3, r30
  addi      r4, r31, 0x1D8
  crclr     6, 0x6
  bl        0x2211A4
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x2213F0
  lwz       r4, 0x34(r29)
  mr        r3, r30
  bl        0x222770
  mr        r3, r30
  addi      r4, r31, 0x1EC
  crclr     6, 0x6
  bl        0x22117C
  lwz       r4, 0x414(r30)
  mr        r3, r30
  bl        0x2213C8
  lwz       r4, 0x38(r29)
  mr        r3, r30
  bl        0x222748
  mr        r3, r30
  addi      r4, r31, 0x200
  crclr     6, 0x6
  bl        0x221154
  mr        r3, r30
  bl        0x221010
  lwz       r0, 0x124(r1)
  lwz       r31, 0x11C(r1)
  lwz       r30, 0x118(r1)
  lwz       r29, 0x114(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr
*/
}

/*
 * --INFO--
 * Address:	801F30B0
 * Size:	0000BC
 */
void read__Q24Game11CourseCacheFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x110(r1)
  mflr      r0
  stw       r0, 0x114(r1)
  stw       r31, 0x10C(r1)
  mr        r31, r4
  stw       r30, 0x108(r1)
  mr        r30, r3
  lis       r3, 0x8048
  addi      r0, r3, 0x15E4
  lwz       r5, 0x18(r30)
  addi      r3, r1, 0x8
  mr        r4, r0
  crclr     6, 0x6
  bl        -0x12BCAC
  mr        r3, r31
  bl        0x2219A4
  stw       r3, 0x18(r30)
  mr        r3, r31
  bl        0x221998
  stw       r3, 0x1C(r30)
  mr        r3, r31
  bl        0x22198C
  stw       r3, 0x20(r30)
  mr        r3, r31
  bl        0x221980
  stw       r3, 0x24(r30)
  mr        r3, r31
  bl        0x221974
  stw       r3, 0x28(r30)
  mr        r3, r31
  bl        0x221968
  stw       r3, 0x2C(r30)
  mr        r3, r31
  bl        0x22195C
  stw       r3, 0x30(r30)
  mr        r3, r31
  bl        0x221950
  stw       r3, 0x34(r30)
  mr        r3, r31
  bl        0x221944
  stw       r3, 0x38(r30)
  lwz       r0, 0x114(r1)
  lwz       r31, 0x10C(r1)
  lwz       r30, 0x108(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}