

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
 * Address:	8039982C
 * Size:	000314
 */
void draw__Q28Morimura16TVsSelectIndPaneFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x160(r1)
  mflr      r0
  lfs       f1, 0xE10(r2)
  stw       r0, 0x164(r1)
  fmr       f2, f1
  lfs       f3, 0xE14(r2)
  stw       r31, 0x15C(r1)
  mr        r31, r3
  lfs       f4, 0xE18(r2)
  addi      r3, r1, 0x80
  lfs       f5, 0xE1C(r2)
  lfs       f6, 0xE20(r2)
  bl        -0x364284
  addi      r3, r1, 0x80
  bl        -0x3641A8
  lwz       r0, 0x18(r31)
  cmplwi    r0, 0
  bne-      .loc_0x64
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x4B24
  li        r4, 0x31
  addi      r5, r5, 0x4B34
  crclr     6, 0x6
  bl        -0x36F24C

.loc_0x64:
  lwz       r0, 0x1C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x8C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x4B24
  li        r4, 0x32
  addi      r5, r5, 0x4B34
  crclr     6, 0x6
  bl        -0x36F274

.loc_0x8C:
  lwz       r3, 0x18(r31)
  li        r4, 0
  bl        -0x366290
  lwz       r3, 0x1C(r31)
  li        r4, 0x1
  bl        -0x36629C
  li        r3, 0x1
  bl        -0x2B0D1C
  li        r3, 0x1
  bl        -0x2B1588
  li        r3, 0
  bl        -0x2B2A80
  li        r3, 0x1
  bl        -0x2B4950
  li        r3, 0x1
  li        r4, 0x6
  li        r5, 0x7
  li        r6, 0
  bl        -0x2B0828
  li        r3, 0
  li        r4, 0x1
  li        r5, 0x4
  li        r6, 0x1E
  li        r7, 0
  li        r8, 0x7D
  bl        -0x2B4C00
  li        r3, 0
  li        r4, 0
  li        r5, 0x1
  bl        -0x2B16C4
  li        r3, 0
  li        r4, 0
  li        r5, 0
  bl        -0x2B1818
  lbz       r0, 0x44(r31)
  cmplwi    r0, 0
  beq-      .loc_0x148
  lfs       f0, 0x34(r31)
  lfs       f1, 0xE10(r2)
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f1, 0x10(r1)
  stfs      f1, 0x14(r1)
  lfs       f0, 0x38(r31)
  stfs      f0, 0x18(r1)
  stfs      f1, 0x1C(r1)
  b         .loc_0x1A0

.loc_0x148:
  lfs       f1, 0xE24(r2)
  addi      r3, r1, 0x50
  lfs       f0, 0x40(r31)
  li        r4, 0x7A
  fmuls     f1, f1, f0
  bl        -0x2AF474
  lfs       f5, 0xE28(r2)
  lfs       f1, 0x50(r1)
  lfs       f0, 0x54(r1)
  lfs       f2, 0xE10(r2)
  fmuls     f4, f5, f1
  lfs       f1, 0x60(r1)
  fmuls     f3, f5, f0
  lfs       f0, 0x64(r1)
  fmuls     f1, f5, f1
  stfs      f4, 0x8(r1)
  fmuls     f0, f5, f0
  stfs      f3, 0xC(r1)
  stfs      f2, 0x10(r1)
  stfs      f1, 0x14(r1)
  stfs      f0, 0x18(r1)
  stfs      f2, 0x1C(r1)

.loc_0x1A0:
  lha       r0, 0x3C(r31)
  addi      r4, r1, 0x8
  li        r3, 0x1
  extsb     r5, r0
  bl        -0x2B1A30
  li        r3, 0
  li        r4, 0
  li        r5, 0x1
  li        r6, 0
  li        r7, 0x1
  bl        -0x2B1634
  li        r3, 0
  li        r4, 0
  li        r5, 0
  li        r6, 0xFF
  bl        -0x2B0FEC
  li        r3, 0
  li        r4, 0x3
  bl        -0x2B1598
  bl        -0x2B5348
  li        r3, 0x9
  li        r4, 0x1
  bl        -0x2B57A0
  li        r3, 0xD
  li        r4, 0x1
  bl        -0x2B57AC
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x2B5340
  li        r3, 0
  li        r4, 0xD
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x2B5358
  addi      r3, r1, 0x20
  bl        -0x2AF7C8
  addi      r3, r1, 0x20
  li        r4, 0
  bl        -0x2B04FC
  addi      r3, r1, 0x20
  li        r4, 0x1E
  li        r5, 0x1
  bl        -0x2B0438
  li        r3, 0x80
  li        r4, 0
  li        r5, 0x4
  bl        -0x2B410C
  lfs       f3, 0x28(r31)
  lis       r4, 0x804A
  lfs       f0, 0x24(r31)
  lis       r5, 0xCC01
  lis       r3, 0x804A
  lfs       f2, 0xE10(r2)
  stfs      f0, -0x8000(r5)
  addi      r4, r4, 0x600
  lfs       f1, 0xE20(r2)
  addi      r0, r3, 0x650
  stfs      f3, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  lfs       f3, 0x28(r31)
  lfs       f0, 0x2C(r31)
  stfs      f0, -0x8000(r5)
  stfs      f3, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  lfs       f3, 0x30(r31)
  lfs       f0, 0x2C(r31)
  stfs      f0, -0x8000(r5)
  stfs      f3, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  lfs       f3, 0x30(r31)
  lfs       f0, 0x24(r31)
  stfs      f0, -0x8000(r5)
  stfs      f3, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f2, -0x8000(r5)
  stfs      f1, -0x8000(r5)
  stw       r4, 0x80(r1)
  stw       r0, 0x80(r1)
  lwz       r31, 0x15C(r1)
  lwz       r0, 0x164(r1)
  mtlr      r0
  addi      r1, r1, 0x160
  blr
*/
}

/*
 * --INFO--
 * Address:	80399B40
 * Size:	00003C
 */
void create__Q28Morimura26TVsSelectExplanationWindowFPCcUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x787C
  lfs       f1, 0xE10(r2)
  lfs       f0, 0xE2C(r2)
  stfs      f1, 0x1C(r31)
  stfs      f0, 0x20(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80399B7C
 * Size:	000004
 */
void screenScaleUp__Q28Morimura26TVsSelectExplanationWindowFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void __ct__Q28Morimura7TVsPikiFP7J2DPaneP7J2DPaneP7J2DPane(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80399B80
 * Size:	000004
 */
void __ct__Q38Morimura7TVsPiki7posInfoFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void init__Q28Morimura7TVsPikiFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80399B84
 * Size:	0002C8
 */
void update__Q28Morimura7TVsPikiFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stfd      f31, 0x90(r1)
  psq_st    f31,0x98(r1),0,0
  stfd      f30, 0x80(r1)
  psq_st    f30,0x88(r1),0,0
  stw       r31, 0x7C(r1)
  stw       r30, 0x78(r1)
  mr        r30, r3
  mr        r31, r4
  lwz       r3, 0x0(r3)
  li        r4, 0x2
  bl        -0x360EFC
  lwz       r3, 0x4(r30)
  li        r4, 0
  bl        -0x360F08
  lwz       r3, 0x8(r30)
  li        r4, 0x4
  bl        -0x360F14
  lwz       r4, 0x4(r30)
  addi      r3, r1, 0x38
  li        r5, 0x1
  bl        -0x360C48
  lfs       f31, 0x3C(r1)
  addi      r3, r1, 0x44
  lwz       r4, 0x0(r30)
  li        r5, 0
  bl        -0x360C5C
  lfs       f0, 0x48(r1)
  addi      r3, r1, 0x50
  lwz       r4, 0x4(r30)
  li        r5, 0x1
  fsubs     f30, f0, f31
  bl        -0x360C74
  lfs       f31, 0x50(r1)
  addi      r3, r1, 0x5C
  lwz       r4, 0x0(r30)
  li        r5, 0
  bl        -0x360C88
  lfs       f0, 0x5C(r1)
  addi      r3, r1, 0x8
  li        r5, 0
  fsubs     f0, f0, f31
  stfs      f0, 0xAC(r30)
  stfs      f30, 0xB0(r30)
  lwz       r4, 0x8(r30)
  bl        -0x360CA8
  lfs       f31, 0xC(r1)
  addi      r3, r1, 0x14
  lwz       r4, 0x0(r30)
  li        r5, 0
  bl        -0x360CBC
  lfs       f0, 0x18(r1)
  addi      r3, r1, 0x20
  lwz       r4, 0x8(r30)
  li        r5, 0
  fsubs     f30, f0, f31
  bl        -0x360CD4
  lfs       f31, 0x20(r1)
  addi      r3, r1, 0x2C
  lwz       r4, 0x0(r30)
  li        r5, 0
  bl        -0x360CE8
  lfs       f0, 0x2C(r1)
  li        r0, 0xA
  mr        r4, r30
  li        r5, 0
  fsubs     f0, f0, f31
  stfs      f0, 0xB4(r30)
  stfs      f30, 0xB8(r30)
  mtctr     r0

.loc_0x120:
  cmpw      r5, r31
  bge-      .loc_0x140
  lwz       r0, 0xC(r4)
  cmpwi     r0, 0x3
  bne-      .loc_0x154
  li        r0, 0x1
  stw       r0, 0xC(r4)
  b         .loc_0x154

.loc_0x140:
  lwz       r0, 0xC(r4)
  cmpwi     r0, 0
  bne-      .loc_0x154
  li        r0, 0x2
  stw       r0, 0xC(r4)

.loc_0x154:
  lwz       r0, 0xC(r4)
  cmpwi     r0, 0x2
  beq-      .loc_0x25C
  bge-      .loc_0x174
  cmpwi     r0, 0
  beq-      .loc_0x17C
  bge-      .loc_0x188
  b         .loc_0x294

.loc_0x174:
  cmpwi     r0, 0x4
  bge-      .loc_0x294

.loc_0x17C:
  lfs       f0, 0xE10(r2)
  stfs      f0, 0x10(r4)
  b         .loc_0x294

.loc_0x188:
  lfs       f2, 0x18(r4)
  lfs       f1, 0xE10(r2)
  fcmpo     cr0, f2, f1
  ble-      .loc_0x1BC
  lfs       f0, 0xE40(r2)
  fsubs     f0, f2, f0
  stfs      f0, 0x18(r4)
  lfs       f0, 0x18(r4)
  fcmpo     cr0, f0, f1
  cror      2, 0, 0x2
  bne-      .loc_0x294
  stfs      f1, 0x18(r4)
  b         .loc_0x294

.loc_0x1BC:
  lfs       f2, 0x10(r4)
  lfs       f1, 0xE44(r2)
  lfs       f0, 0xE48(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x10(r4)
  lfs       f1, 0x10(r4)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1EC
  stfs      f0, 0x10(r4)
  li        r0, 0
  stw       r0, 0xC(r4)

.loc_0x1EC:
  lfs       f2, 0x10(r4)
  lfs       f0, 0xE10(r2)
  lfs       f1, 0xE4C(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x22C
  lfs       f0, 0xE50(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x68(r1)
  lwz       r0, 0x6C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x250

.loc_0x22C:
  lfs       f0, 0xE54(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x70(r1)
  lwz       r0, 0x74(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x250:
  fmuls     f0, f1, f0
  stfs      f0, 0x18(r4)
  b         .loc_0x294

.loc_0x25C:
  lfs       f2, 0x18(r4)
  lfs       f1, 0xE30(r2)
  fcmpo     cr0, f2, f1
  bge-      .loc_0x294
  lfs       f0, 0xE40(r2)
  fadds     f0, f2, f0
  stfs      f0, 0x18(r4)
  lfs       f0, 0x18(r4)
  fcmpo     cr0, f0, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x294
  stfs      f1, 0x18(r4)
  li        r0, 0x3
  stw       r0, 0xC(r4)

.loc_0x294:
  addi      r4, r4, 0x10
  addi      r5, r5, 0x1
  bdnz+     .loc_0x120
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  lwz       r31, 0x7C(r1)
  lwz       r0, 0xA4(r1)
  lwz       r30, 0x78(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	80399E4C
 * Size:	000280
 */
void draw__Q28Morimura7TVsPikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stfd      f30, 0x60(r1)
  psq_st    f30,0x68(r1),0,0
  stfd      f29, 0x50(r1)
  psq_st    f29,0x58(r1),0,0
  stmw      r27, 0x3C(r1)
  lwz       r4, 0x0(r3)
  mr        r27, r3
  addi      r3, r1, 0x2C
  li        r5, 0x2
  bl        -0x360EEC
  lfs       f29, 0x2C(r1)
  addi      r3, r1, 0x20
  lfs       f31, -0x6648(r13)
  li        r5, 0x2
  lfs       f30, 0x30(r1)
  lfs       f0, 0xE58(r2)
  fsubs     f29, f29, f31
  lwz       r4, 0x0(r27)
  fsubs     f30, f30, f0
  bl        -0x360F14
  lfs       f0, 0x24(r1)
  fsubs     f1, f0, f30
  bl        -0x2D836C
  lfs       f0, 0xE5C(r2)
  mr        r29, r3
  fmadds    f0, f0, f31, f29
  fsubs     f1, f0, f29
  bl        -0x2D8380
  fmr       f1, f30
  mr        r30, r3
  bl        -0x2D838C
  fmr       f1, f29
  mr        r31, r3
  bl        -0x2D8398
  mr        r4, r31
  mr        r5, r30
  mr        r6, r29
  bl        -0x2B071C
  mr        r29, r27
  li        r28, 0
  subi      r30, r13, 0x6648

.loc_0xB8:
  lwz       r31, 0x0(r27)
  addi      r3, r1, 0x8
  lfs       f29, -0x79BC(r13)
  li        r5, 0
  mr        r4, r31
  bl        -0x360F80
  lfs       f1, 0xC(r1)
  mr        r4, r31
  lfs       f0, 0x18(r29)
  addi      r3, r1, 0x14
  li        r5, 0
  fmadds    f30, f0, f29, f1
  bl        -0x360F9C
  lfs       f1, 0x14(r1)
  mr        r3, r31
  lfs       f0, 0x14(r29)
  fmr       f2, f30
  lwz       r12, 0x0(r31)
  li        r4, 0
  fmadds    f31, f0, f29, f1
  lfs       f4, 0x28(r31)
  lfs       f3, 0x20(r31)
  lfs       f1, 0x2C(r31)
  li        r5, 0
  lfs       f0, 0x24(r31)
  fsubs     f3, f4, f3
  lwz       r12, 0xEC(r12)
  fsubs     f0, f1, f0
  li        r6, 0
  fmr       f1, f31
  fmuls     f3, f29, f3
  fmuls     f4, f29, f0
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x4(r27)
  li        r4, 0
  lfs       f1, 0xAC(r27)
  li        r5, 0
  lfs       f2, 0x28(r31)
  mr        r3, r31
  lfs       f0, 0x20(r31)
  fsubs     f1, f31, f1
  lwz       r12, 0x0(r31)
  li        r6, 0
  fsubs     f3, f2, f0
  lfs       f2, 0x2C(r31)
  lfs       f0, 0x24(r31)
  lfs       f4, 0xB0(r27)
  fneg      f3, f3
  lwz       r12, 0xEC(r12)
  fsubs     f0, f2, f0
  fsubs     f2, f30, f4
  fmuls     f3, f29, f3
  fmuls     f4, f29, f0
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x8(r27)
  li        r4, 0
  lfs       f2, 0xB4(r27)
  li        r5, 0
  lfs       f1, 0x28(r31)
  mr        r3, r31
  lfs       f0, 0x20(r31)
  fadds     f5, f31, f2
  lwz       r12, 0x0(r31)
  li        r6, 0
  fsubs     f4, f1, f0
  lfs       f0, 0x4(r30)
  lfs       f2, 0xB8(r27)
  lfs       f3, 0x2C(r31)
  fadds     f1, f0, f5
  lfs       f0, 0x24(r31)
  lwz       r12, 0xEC(r12)
  fsubs     f2, f30, f2
  fsubs     f0, f3, f0
  fmuls     f3, f29, f4
  fmuls     f4, f29, f0
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r29, r29, 0x10
  cmpwi     r28, 0xA
  blt+      .loc_0xB8
  li        r3, 0
  li        r4, 0
  li        r5, 0x280
  li        r6, 0x1E0
  bl        -0x2B08C4
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  lmw       r27, 0x3C(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void setAlpha__Q28Morimura7TVsPikiFUc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
void reset__Q28Morimura14TVsSelectOnyonFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8039A0CC
 * Size:	000308
 */
void posUpdate__Q28Morimura14TVsSelectOnyonFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stw       r31, 0x2C(r1)
  mr        r31, r3
  fmr       f31, f1
  lwz       r3, 0x38(r3)
  addi      r0, r3, 0x1
  stw       r0, 0x38(r31)
  lwz       r0, 0x38(r31)
  cmpwi     r0, 0
  ble-      .loc_0x8C
  lfs       f2, 0xE20(r2)
  fcmpu     cr0, f2, f31
  bne-      .loc_0x68
  lfs       f1, 0x34(r31)
  lfs       f0, -0x79C8(r13)
  fadds     f0, f1, f0
  stfs      f0, 0x34(r31)
  lfs       f0, 0x34(r31)
  fcmpo     cr0, f0, f2
  ble-      .loc_0x8C
  stfs      f2, 0x34(r31)
  b         .loc_0x8C

.loc_0x68:
  lfs       f2, 0x34(r31)
  lfs       f1, -0x79C8(r13)
  lfs       f0, 0xE10(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x34(r31)
  lfs       f1, 0x34(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x8C
  stfs      f0, 0x34(r31)

.loc_0x8C:
  mr        r3, r31
  bl        .loc_0x308
  lfs       f0, 0x34(r31)
  lfs       f2, 0xE68(r2)
  fmuls     f1, f0, f1
  fabs      f0, f1
  frsp      f0, f0
  fcmpo     cr0, f0, f2
  ble-      .loc_0xC8
  lfs       f0, 0xE10(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xC4
  fmr       f1, f2
  b         .loc_0xC8

.loc_0xC4:
  fneg      f1, f2

.loc_0xC8:
  lfs       f0, 0x2C(r31)
  fadds     f1, f0, f1
  bl        0x77A34
  stfs      f1, 0x2C(r31)
  lfs       f0, 0xE10(r2)
  lfs       f1, -0x79DC(r13)
  lfs       f2, 0x2C(r31)
  fmuls     f3, f1, f31
  fcmpo     cr0, f2, f0
  bge-      .loc_0x11C
  lfs       f0, 0xE50(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x140

.loc_0x11C:
  lfs       f0, 0xE54(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x140:
  fmuls     f1, f3, f0
  lfs       f0, 0xE10(r2)
  stfs      f1, 0x24(r31)
  lfs       f2, 0x2C(r31)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x15C
  fneg      f2, f2

.loc_0x15C:
  lfs       f1, 0xE54(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  lfs       f0, 0xE6C(r2)
  fmuls     f1, f2, f1
  fctiwz    f1, f1
  stfd      f1, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r3, r0
  lfs       f1, 0x4(r3)
  fneg      f1, f1
  fmuls     f1, f3, f1
  stfs      f1, 0x28(r31)
  lfs       f1, 0x34(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1A4
  fmr       f1, f0

.loc_0x1A4:
  lfs       f0, 0xE70(r2)
  fdivs     f31, f0, f1
  fcmpo     cr0, f31, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1D0
  lfs       f0, 0xE10(r2)
  stfs      f0, 0x24(r31)
  stfs      f0, 0x28(r31)
  stfs      f0, 0x1C(r31)
  stfs      f0, 0x20(r31)
  b         .loc_0x208

.loc_0x1D0:
  lfs       f1, 0xE68(r2)
  lfs       f0, 0x2C(r31)
  fsubs     f1, f1, f0
  bl        0x77928
  lfs       f0, 0xE74(r2)
  lwz       r3, 0x8(r31)
  fmuls     f1, f0, f1
  lfs       f0, 0xE68(r2)
  fdivs     f0, f1, f0
  stfs      f0, 0xC0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x208:
  lfs       f0, 0x24(r31)
  lfs       f6, 0x1C(r31)
  lfs       f1, 0x28(r31)
  lfs       f5, 0x20(r31)
  fsubs     f2, f0, f6
  lfs       f0, 0xE78(r2)
  fsubs     f4, f1, f5
  lfs       f1, 0xE80(r2)
  fmuls     f2, f2, f0
  lfs       f3, 0xE7C(r2)
  fmuls     f0, f4, f0
  fadds     f2, f6, f2
  fadds     f0, f5, f0
  stfs      f2, 0x1C(r31)
  stfs      f0, 0x20(r31)
  lfs       f2, 0xC(r31)
  lfs       f0, 0x1C(r31)
  fadds     f0, f2, f0
  stfs      f0, 0xC(r31)
  lfs       f2, 0x10(r31)
  lfs       f0, 0x20(r31)
  fadds     f0, f2, f0
  stfs      f0, 0x10(r31)
  lfs       f0, 0xC(r31)
  lfs       f2, 0x10(r31)
  fadds     f0, f1, f0
  lwz       r3, 0x8(r31)
  fadds     f1, f3, f2
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xE84(r2)
  fcmpo     cr0, f31, f0
  ble-      .loc_0x2A0
  fmr       f31, f0

.loc_0x2A0:
  lfs       f0, 0xE70(r2)
  fcmpo     cr0, f31, f0
  cror      2, 0, 0x2
  bne-      .loc_0x2C4
  lwz       r3, 0x8(r31)
  li        r0, 0
  fmr       f31, f0
  stb       r0, 0xB0(r3)
  b         .loc_0x2D0

.loc_0x2C4:
  lwz       r3, 0x8(r31)
  li        r0, 0x1
  stb       r0, 0xB0(r3)

.loc_0x2D0:
  lwz       r3, 0x8(r31)
  stfs      f31, 0xCC(r3)
  stfs      f31, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  psq_l     f31,0x38(r1),0,0
  lwz       r0, 0x44(r1)
  lfd       f31, 0x30(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x308:
*/
}

/*
 * --INFO--
 * Address:	8039A3D4
 * Size:	00007C
 */
void getAngDist__Q28Morimura14TVsSelectOnyonFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, 0xE10(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lfs       f2, 0x14(r3)
  lfs       f1, 0xC(r3)
  fsubs     f1, f2, f1
  fcmpu     cr0, f0, f1
  bne-      .loc_0x30
  lfs       f1, 0xE78(r2)

.loc_0x30:
  lfs       f3, 0x18(r31)
  lfs       f2, 0x10(r31)
  lfs       f0, 0xE10(r2)
  fsubs     f2, f3, f2
  fcmpu     cr0, f0, f2
  bne-      .loc_0x4C
  lfs       f2, 0xE78(r2)

.loc_0x4C:
  fneg      f2, f2
  lis       r3, 0x8051
  subi      r3, r3, 0x2E20
  bl        -0x365324
  bl        0x777A0
  lfs       f2, 0x2C(r31)
  bl        0x777C4
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
 * Size:	000198
 */
void draw__Q28Morimura14TVsSelectOnyonFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8039A450
 * Size:	0002B0
 */
void create__Q28Morimura15TVsSelectScreenFPCcUl(void)
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
  li        r3, 0x148
  stw       r29, 0x34(r1)
  mr        r29, r5
  bl        -0x3765D4
  mr.       r0, r3
  beq-      .loc_0x3C
  bl        0x9A928
  mr        r0, r3

.loc_0x3C:
  stw       r0, 0x8(r30)
  mr        r4, r31
  mr        r5, r29
  lwz       r3, 0x8(r30)
  lwz       r6, 0xC(r30)
  bl        -0x35AE7C
  lwz       r3, 0x8(r30)
  lis       r5, 0x6E75
  lis       r4, 0x5462
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3131
  addi      r5, r4, 0x6D65
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r31, r3
  bne-      .loc_0x9C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x4B24
  li        r4, 0x1E9
  addi      r5, r5, 0x4B34
  crclr     6, 0x6
  bl        -0x36FEA8

.loc_0x9C:
  li        r3, 0x2C
  bl        -0x37664C
  mr.       r29, r3
  beq-      .loc_0xF0
  bl        0x76E94
  lis       r3, 0x804D
  lis       r4, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r3, 0x804E
  stw       r0, 0x0(r29)
  li        r5, 0
  addi      r4, r4, 0x7F2C
  addi      r0, r3, 0x58A4
  stw       r5, 0x18(r29)
  lfs       f0, 0xE10(r2)
  stw       r4, 0x0(r29)
  stw       r0, 0x0(r29)
  stfs      f0, 0x1C(r29)
  stfs      f0, 0x20(r29)
  stfs      f0, 0x24(r29)
  stfs      f0, 0x28(r29)

.loc_0xF0:
  lfs       f1, 0xE10(r2)
  lis       r3, 0x626C
  stw       r29, 0x18(r30)
  addi      r6, r3, 0x6F31
  lfs       f0, 0xE14(r2)
  li        r5, 0x50
  stfs      f1, 0x18(r1)
  lwz       r4, 0x18(r30)
  stfs      f1, 0x1C(r1)
  lwz       r0, 0x18(r1)
  stfs      f0, 0x20(r1)
  lfs       f0, 0xE18(r2)
  stw       r0, 0x1C(r4)
  lwz       r0, 0x1C(r1)
  stfs      f0, 0x24(r1)
  lwz       r3, 0x20(r1)
  stw       r0, 0x20(r4)
  lwz       r0, 0x24(r1)
  stw       r3, 0x24(r4)
  stw       r0, 0x28(r4)
  lwz       r3, 0x8(r30)
  lwz       r7, 0x18(r30)
  bl        0x9A58C
  li        r3, 0x48
  bl        -0x3766FC
  mr.       r7, r3
  beq-      .loc_0x164
  bl        -0x90F98
  mr        r7, r3

.loc_0x164:
  lis       r5, 0x6E75
  lis       r4, 0x5462
  addi      r6, r5, 0x3131
  lwz       r3, 0x8(r30)
  addi      r5, r4, 0x6D65
  bl        0x9A55C
  li        r3, 0x2C
  bl        -0x37672C
  mr.       r29, r3
  beq-      .loc_0x1D0
  bl        0x76DB4
  lis       r3, 0x804D
  lis       r4, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r3, 0x804E
  stw       r0, 0x0(r29)
  li        r5, 0
  addi      r4, r4, 0x7F2C
  addi      r0, r3, 0x58A4
  stw       r5, 0x18(r29)
  lfs       f0, 0xE10(r2)
  stw       r4, 0x0(r29)
  stw       r0, 0x0(r29)
  stfs      f0, 0x1C(r29)
  stfs      f0, 0x20(r29)
  stfs      f0, 0x24(r29)
  stfs      f0, 0x28(r29)

.loc_0x1D0:
  lfs       f2, 0xE10(r2)
  lis       r4, 0x6E75
  lfs       f1, 0xE14(r2)
  lis       r3, 0x5462
  stfs      f2, 0x8(r1)
  mr        r7, r29
  lfs       f0, 0xE18(r2)
  addi      r6, r4, 0x3131
  stfs      f2, 0xC(r1)
  addi      r5, r3, 0x6D65
  lwz       r3, 0x8(r1)
  stfs      f1, 0x10(r1)
  lwz       r0, 0xC(r1)
  stw       r3, 0x1C(r29)
  lwz       r3, 0x10(r1)
  stfs      f0, 0x14(r1)
  stw       r0, 0x20(r29)
  lwz       r0, 0x14(r1)
  stw       r3, 0x24(r29)
  stw       r0, 0x28(r29)
  lwz       r3, 0x8(r30)
  bl        0x9A4B0
  mr        r3, r31
  bl        -0x36159C
  cmplwi    r3, 0
  beq-      .loc_0x248
  mr        r3, r31
  bl        -0x3615AC
  mr        r4, r31
  bl        -0x362E60

.loc_0x248:
  lwz       r3, 0x8(r30)
  bl        -0x9089C
  lwz       r3, 0x8(r30)
  lis       r5, 0x7572
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x7365
  addi      r5, r4, 0x636F
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  bl        -0x363004
  lwz       r0, 0x10(r30)
  rlwinm    r3,r0,2,0,29
  bl        -0x376728
  stw       r3, 0x4(r30)
  lwz       r3, 0x8(r30)
  bl        -0x973CC
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
 * Address:	........
 * Size:	000064
 */
void __ct__Q28Morimura17TVsSelectCBWinNumFPPcUsP10JKRArchive(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8039A700
 * Size:	000058
 */
void update__Q28Morimura17TVsSelectCBWinNumFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x8E298
  mr        r3, r31
  bl        -0x8D32C
  lwz       r3, 0xB0(r31)
  bl        -0x717A0
  lwz       r3, 0xA8(r31)
  stfs      f1, 0xCC(r3)
  stfs      f1, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
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
 * Address:	8039A758
 * Size:	000068
 */
void setValue__Q28Morimura17TVsSelectCBWinNumFbb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0xAC(r3)
  cmplwi    r0, 0
  beq-      .loc_0x50
  li        r4, 0x1
  li        r5, 0
  bl        -0x8E6FC
  lwz       r3, 0xB0(r31)
  lfs       f1, 0xE28(r2)
  lfs       f2, 0xE94(r2)
  lfs       f3, 0xE98(r2)
  lfs       f4, 0xE10(r2)
  bl        -0x718C0
  li        r0, 0
  stb       r0, 0xAC(r31)
  b         .loc_0x54

.loc_0x50:
  bl        -0x8E724

.loc_0x54:
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
 * Size:	00004C
 */
void getIndexInfo__Q28Morimura18TVsSelectSlotIndexFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8039A7C0
 * Size:	0003A0
 */
void __ct__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x4B40
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x84DC
  lis       r4, 0x804E
  li        r9, 0
  addi      r4, r4, 0x5500
  li        r8, 0x1
  stw       r4, 0x0(r31)
  addi      r0, r4, 0x10
  lis       r3, 0x8038
  lfs       f3, 0xE10(r2)
  stw       r0, 0x18(r31)
  subi      r4, r3, 0x2F48
  lfs       f2, 0xE20(r2)
  li        r0, -0x1
  stw       r9, 0xB4(r31)
  addi      r3, r31, 0x2A8
  lfs       f1, 0xE9C(r2)
  li        r5, 0
  stw       r9, 0xB8(r31)
  li        r6, 0x8
  lfs       f0, 0xEA0(r2)
  li        r7, 0x5
  stw       r9, 0xBC(r31)
  stw       r9, 0xC0(r31)
  stw       r9, 0xC4(r31)
  stw       r9, 0xC8(r31)
  stw       r9, 0xCC(r31)
  stw       r9, 0xD0(r31)
  stw       r9, 0xD4(r31)
  stw       r9, 0xD8(r31)
  stw       r9, 0xDC(r31)
  stw       r9, 0xE0(r31)
  stw       r9, 0xE4(r31)
  stw       r9, 0xE8(r31)
  stw       r9, 0xEC(r31)
  stw       r9, 0xF0(r31)
  stw       r9, 0x110(r31)
  stw       r9, 0x1E4(r31)
  stw       r9, 0x1FC(r31)
  stw       r9, 0x200(r31)
  stw       r9, 0x204(r31)
  stw       r9, 0x208(r31)
  stw       r9, 0x20C(r31)
  stb       r8, 0x228(r31)
  stb       r9, 0x22A(r31)
  stb       r8, 0x22B(r31)
  stb       r9, 0x22C(r31)
  stb       r9, 0x22D(r31)
  stb       r8, 0x22E(r31)
  stfs      f3, 0x230(r31)
  stfs      f2, 0x234(r31)
  stfs      f2, 0x238(r31)
  stb       r9, 0x23C(r31)
  stb       r9, 0x23D(r31)
  stw       r9, 0x240(r31)
  stw       r9, 0x244(r31)
  stw       r0, 0x24C(r31)
  stfs      f3, 0x250(r31)
  stfs      f2, 0x258(r31)
  stfs      f3, 0x25C(r31)
  stfs      f3, 0x260(r31)
  stfs      f1, 0x264(r31)
  stfs      f3, 0x268(r31)
  stfs      f0, 0x270(r31)
  stb       r9, 0x28E(r31)
  bl        -0x2D90A0
  lis       r4, 0x8038
  addi      r3, r31, 0x2D0
  subi      r4, r4, 0x2F48
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x5
  bl        -0x2D90BC
  lis       r4, 0x8038
  addi      r3, r31, 0x2F8
  subi      r4, r4, 0x2F48
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x2
  bl        -0x2D90D8
  lis       r4, 0x8038
  addi      r3, r31, 0x308
  subi      r4, r4, 0x2F48
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x2
  bl        -0x2D90F4
  li        r0, 0x5
  li        r6, 0
  sth       r0, 0x8E(r31)
  mr        r5, r6
  mr        r3, r6
  li        r7, 0
  b         .loc_0x1A8

.loc_0x190:
  addi      r4, r6, 0x140
  addi      r0, r6, 0x12C
  stwx      r5, r31, r4
  addi      r6, r6, 0x4
  addi      r7, r7, 0x1
  stwx      r3, r31, r0

.loc_0x1A8:
  lha       r0, 0x8E(r31)
  cmpw      r7, r0
  blt+      .loc_0x190
  li        r3, 0x3
  li        r0, 0
  stw       r3, 0x274(r31)
  lfs       f1, 0xE10(r2)
  stw       r0, 0x1E8(r31)
  lfs       f0, 0xE20(r2)
  stw       r0, 0x1F0(r31)
  stw       r0, 0x210(r31)
  stw       r0, 0x108(r31)
  stw       r0, 0x284(r31)
  stb       r0, 0x28C(r31)
  stw       r0, 0x100(r31)
  stfs      f1, 0x308(r31)
  stfs      f1, 0x30C(r31)
  stw       r3, 0x278(r31)
  stw       r0, 0x1EC(r31)
  stw       r0, 0x1F4(r31)
  stw       r0, 0x214(r31)
  stw       r0, 0x10C(r31)
  stw       r0, 0x288(r31)
  stb       r0, 0x28D(r31)
  stw       r0, 0x104(r31)
  stfs      f1, 0x310(r31)
  stfs      f1, 0x314(r31)
  stw       r0, 0xF4(r31)
  stw       r0, 0xF8(r31)
  stw       r0, 0xFC(r31)
  stfs      f0, 0x2A8(r31)
  stfs      f0, 0x2AC(r31)
  stfs      f0, 0x2D0(r31)
  stfs      f0, 0x2D4(r31)
  stfs      f0, 0x2B0(r31)
  stfs      f0, 0x2B4(r31)
  stfs      f0, 0x2D8(r31)
  stfs      f0, 0x2DC(r31)
  stfs      f0, 0x2B8(r31)
  stfs      f0, 0x2BC(r31)
  stfs      f0, 0x2E0(r31)
  stfs      f0, 0x2E4(r31)
  stfs      f0, 0x2C0(r31)
  stfs      f0, 0x2C4(r31)
  stfs      f0, 0x2E8(r31)
  stfs      f0, 0x2EC(r31)
  stfs      f0, 0x2C8(r31)
  stfs      f0, 0x2CC(r31)
  stfs      f0, 0x2F0(r31)
  stfs      f0, 0x2F4(r31)
  stfs      f1, 0x320(r31)
  stfs      f1, 0x324(r31)
  stw       r0, 0x1B4(r31)
  stw       r0, 0x1CC(r31)
  stw       r0, 0x114(r31)
  stw       r0, 0x154(r31)
  stw       r0, 0x16C(r31)
  stw       r0, 0x1B8(r31)
  stw       r0, 0x1D0(r31)
  stw       r0, 0x118(r31)
  stw       r0, 0x158(r31)
  stw       r0, 0x170(r31)
  stw       r0, 0x1BC(r31)
  stw       r0, 0x1D4(r31)
  stw       r0, 0x11C(r31)
  stw       r0, 0x15C(r31)
  stw       r0, 0x174(r31)
  stw       r0, 0x1C0(r31)
  stw       r0, 0x1D8(r31)
  stw       r0, 0x120(r31)
  stw       r0, 0x160(r31)
  stw       r0, 0x178(r31)
  stw       r0, 0x1C4(r31)
  stw       r0, 0x1DC(r31)
  stw       r0, 0x124(r31)
  stw       r0, 0x164(r31)
  stw       r0, 0x17C(r31)
  stw       r0, 0x1C8(r31)
  stw       r0, 0x1E0(r31)
  stw       r0, 0x128(r31)
  stw       r0, 0x168(r31)
  stw       r0, 0x180(r31)
  stw       r0, 0x184(r31)
  stw       r0, 0x188(r31)
  stw       r0, 0x18C(r31)
  stw       r0, 0x190(r31)
  stw       r0, 0x194(r31)
  stw       r0, 0x198(r31)
  stw       r0, 0x19C(r31)
  stw       r0, 0x1A0(r31)
  stw       r0, 0x1A4(r31)
  stw       r0, 0x1A8(r31)
  stw       r0, 0x1AC(r31)
  stw       r0, 0x1B0(r31)
  stfs      f0, -0x79BC(r13)
  lis       r3, 0x8051
  lfs       f0, 0xEA4(r2)
  addi      r4, r3, 0x4044
  stfs      f1, 0x26C(r31)
  mr        r3, r31
  lfs       f1, 0xEA8(r2)
  stfs      f0, 0x290(r31)
  lfs       f0, 0xEAC(r2)
  stfs      f1, 0x294(r31)
  lfs       f1, 0xEB0(r2)
  stfs      f0, 0x298(r31)
  lfs       f0, 0xEB4(r2)
  stfs      f1, 0x29C(r31)
  lfs       f4, 0xE30(r2)
  stfs      f0, 0x2A0(r31)
  lfs       f3, 0xEB8(r2)
  stfs      f0, 0x2A4(r31)
  lfs       f2, 0xEBC(r2)
  lfs       f1, 0xE84(r2)
  lfs       f0, 0xEC0(r2)
  stfs      f4, 0x0(r4)
  stfs      f3, 0x4(r4)
  stfs      f2, 0x8(r4)
  stfs      f1, 0xC(r4)
  stfs      f0, 0x10(r4)
  stb       r0, -0x663E(r13)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8039AB60
 * Size:	00010C
 */
void __dt__Q28Morimura9TVsSelectFv(void)
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
  beq-      .loc_0xF0
  lis       r3, 0x804E
  addi      r3, r3, 0x5500
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x10
  stw       r0, 0x18(r30)
  lwz       r0, -0x664C(r13)
  cmplwi    r0, 0
  beq-      .loc_0x54
  lwz       r3, 0x1F8(r30)
  lwz       r3, 0xC(r3)
  bl        -0x377478
  lwz       r3, -0x664C(r13)
  bl        -0x3775FC

.loc_0x54:
  li        r0, 0
  cmplwi    r30, 0
  stw       r0, -0x664C(r13)
  beq-      .loc_0xE0
  lis       r3, 0x804E
  addi      r3, r3, 0x58C0
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xE0
  lis       r3, 0x804E
  subi      r3, r3, 0x4708
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xE0
  lis       r3, 0x804F
  subi      r3, r3, 0x28A8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0xE0
  lis       r4, 0x804E
  mr        r3, r30
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0x769AC
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x37DBFC
  mr        r3, r30
  li        r4, 0
  bl        0x7694C

.loc_0xE0:
  extsh.    r0, r31
  ble-      .loc_0xF0
  mr        r3, r30
  bl        -0x376B98

.loc_0xF0:
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
 * Size:	000044
 */
void setDebugHeapParent__Q28Morimura9TVsSelectFP7JKRHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8039AC6C
 * Size:	002554
 */
void doCreate__Q28Morimura9TVsSelectFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x280(r1)
  mflr      r0
  stw       r0, 0x284(r1)
  stfd      f31, 0x270(r1)
  psq_st    f31,0x278(r1),0,0
  stfd      f30, 0x260(r1)
  psq_st    f30,0x268(r1),0,0
  stmw      r21, 0x234(r1)
  lis       r6, 0x804E
  lis       r5, 0x8049
  mr        r31, r3
  mr        r28, r4
  addi      r29, r6, 0x5328
  addi      r30, r5, 0x4B18
  li        r3, 0xB0
  bl        -0x376E04
  mr.       r0, r3
  beq-      .loc_0x54
  li        r4, 0x1
  bl        0x8A19C
  mr        r0, r3

.loc_0x54:
  stw       r0, 0xB8(r31)
  lwz       r0, 0xB8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x78
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x30F
  crclr     6, 0x6
  bl        -0x3706A0

.loc_0x78:
  stw       r28, 0x78(r31)
  mr        r3, r31
  bl        0xB92BC
  lis       r4, 0x4D52
  lis       r6, 0x4C45
  lis       r5, 0x5653
  mr        r21, r3
  addi      r4, r4, 0x4D52
  addi      r6, r6, 0x4354
  addi      r5, r5, 0x5345
  li        r27, 0
  bl        -0x8B9F4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC0
  stw       r21, 0x1F8(r31)
  lwz       r3, 0x1F8(r31)
  lwz       r27, 0x18(r3)
  b         .loc_0xC8

.loc_0xC0:
  li        r0, 0x1
  stb       r0, -0x6760(r13)

.loc_0xC8:
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  beq-      .loc_0x338
  lwz       r4, -0x6650(r13)
  cmplwi    r4, 0
  beq-      .loc_0x324
  lis       r3, 0x20
  li        r5, 0x1
  bl        -0x37AE8C
  cmplwi    r3, 0
  stw       r3, -0x664C(r13)
  bne-      .loc_0x10C
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x320
  crclr     6, 0x6
  bl        -0x370734

.loc_0x10C:
  lwz       r4, -0x664C(r13)
  li        r3, 0x38
  li        r5, 0
  bl        -0x376E44
  cmplwi    r3, 0
  beq-      .loc_0x17C
  lis       r5, 0x804B
  lis       r4, 0x804C
  addi      r0, r5, 0x1148
  li        r6, 0
  stw       r0, 0x0(r3)
  addi      r5, r4, 0xE10
  li        r4, -0x1
  li        r0, 0x3
  stw       r6, 0x4(r3)
  stw       r5, 0x0(r3)
  stw       r6, 0x8(r3)
  stw       r6, 0xC(r3)
  stw       r6, 0x10(r3)
  stw       r4, 0x14(r3)
  stw       r6, 0x18(r3)
  stw       r0, 0x1C(r3)
  stw       r0, 0x20(r3)
  stw       r6, 0x24(r3)
  stw       r6, 0x28(r3)
  stw       r4, 0x2C(r3)
  stw       r6, 0x30(r3)
  stw       r6, 0x34(r3)

.loc_0x17C:
  stw       r3, 0x1F8(r31)
  li        r3, 0x28
  lwz       r0, -0x664C(r13)
  lwz       r4, 0x1F8(r31)
  stw       r0, 0xC(r4)
  bl        -0x376F58
  cmplwi    r3, 0
  beq-      .loc_0x1F4
  lis       r4, 0x804B
  lis       r7, 0x804E
  addi      r0, r4, 0x1148
  lis       r6, 0x305F
  stw       r0, 0x0(r3)
  li        r8, 0
  lis       r5, 0x34
  lis       r4, 0x315F
  stw       r8, 0x4(r3)
  subi      r0, r7, 0x61F8
  addi      r6, r6, 0x3030
  addi      r5, r5, 0x3731
  stw       r0, 0x0(r3)
  addi      r4, r4, 0x3030
  li        r0, 0xB4
  stw       r8, 0x8(r3)
  stw       r6, 0x14(r3)
  stw       r5, 0x10(r3)
  stw       r4, 0x1C(r3)
  stw       r5, 0x18(r3)
  stb       r0, 0x20(r3)
  stb       r8, 0x21(r3)

.loc_0x1F4:
  lwz       r4, 0x1F8(r31)
  stw       r3, 0x10(r4)
  bl        -0x2D18C8
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x204(r1)
  lfd       f3, 0xE38(r2)
  stw       r0, 0x200(r1)
  lfs       f1, 0xE64(r2)
  lfd       f2, 0x200(r1)
  lfs       f0, 0xED0(r2)
  fsubs     f2, f2, f3
  lwz       r3, 0x1F8(r31)
  fdivs     f1, f2, f1
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x208(r1)
  lwz       r0, 0x20C(r1)
  stw       r0, 0x24(r3)
  bl        -0x2D190C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x214(r1)
  li        r5, 0x2
  lfd       f3, 0xE38(r2)
  li        r4, 0
  stw       r0, 0x210(r1)
  li        r0, 0xA
  lfs       f1, 0xE64(r2)
  lfd       f2, 0x210(r1)
  lfs       f0, 0xED0(r2)
  fsubs     f2, f2, f3
  lwz       r3, 0x1F8(r31)
  fdivs     f1, f2, f1
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x218(r1)
  lwz       r6, 0x21C(r1)
  stw       r6, 0x28(r3)
  lwz       r3, 0x1F8(r31)
  stw       r5, 0x24(r3)
  lwz       r3, 0x1F8(r31)
  stw       r4, 0x28(r3)
  lwz       r3, 0x1F8(r31)
  stw       r0, 0x30(r3)
  bl        -0x2D1974
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x224(r1)
  lfd       f3, 0xE38(r2)
  stw       r0, 0x220(r1)
  lfs       f1, 0xE64(r2)
  lfd       f2, 0x220(r1)
  lfs       f0, 0xE28(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x2EC
  lwz       r3, 0x1F8(r31)
  li        r0, 0
  stw       r0, 0x2C(r3)
  b         .loc_0x2F8

.loc_0x2EC:
  lwz       r3, 0x1F8(r31)
  li        r0, 0x1
  stw       r0, 0x2C(r3)

.loc_0x2F8:
  lwz       r4, 0x1F8(r31)
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x2C(r4)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x1F8(r31)
  bl        0xB7138
  b         .loc_0x338

.loc_0x324:
  addi      r3, r30, 0xC
  addi      r5, r30, 0x338
  li        r4, 0x334
  crclr     6, 0x6
  bl        -0x370960

.loc_0x338:
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3B4
  li        r3, 0x28
  bl        -0x377110
  cmplwi    r3, 0
  beq-      .loc_0x3AC
  lis       r4, 0x804B
  lis       r7, 0x804E
  addi      r0, r4, 0x1148
  lis       r6, 0x305F
  stw       r0, 0x0(r3)
  li        r8, 0
  lis       r5, 0x34
  lis       r4, 0x315F
  stw       r8, 0x4(r3)
  subi      r0, r7, 0x61F8
  addi      r6, r6, 0x3030
  addi      r5, r5, 0x3731
  stw       r0, 0x0(r3)
  addi      r4, r4, 0x3030
  li        r0, 0xB4
  stw       r8, 0x8(r3)
  stw       r6, 0x14(r3)
  stw       r5, 0x10(r3)
  stw       r4, 0x1C(r3)
  stw       r5, 0x18(r3)
  stb       r0, 0x20(r3)
  stb       r8, 0x21(r3)

.loc_0x3AC:
  lwz       r4, 0x1F8(r31)
  stw       r3, 0x10(r4)

.loc_0x3B4:
  mr        r3, r31
  bl        0xB901C
  stw       r3, 0x80(r31)
  li        r3, 0x18
  lwz       r4, 0x1F8(r31)
  lwz       r0, 0x1C(r4)
  stw       r0, 0x274(r31)
  lwz       r4, 0x1F8(r31)
  lwz       r0, 0x20(r4)
  stw       r0, 0x278(r31)
  lfd       f0, 0xEC8(r2)
  stfd      f0, 0x20(r1)
  bl        -0x3771AC
  mr.       r0, r3
  beq-      .loc_0x410
  lis       r6, 0x305F
  lis       r5, 0x34
  addi      r4, r1, 0x20
  li        r7, 0x1
  addi      r6, r6, 0x3030
  addi      r5, r5, 0x3737
  bl        0x6070
  mr        r0, r3

.loc_0x410:
  stw       r0, 0x1FC(r31)
  li        r3, 0x18
  bl        -0x3771E0
  mr.       r0, r3
  beq-      .loc_0x434
  mr        r4, r28
  li        r5, 0x2
  bl        0x6310
  mr        r0, r3

.loc_0x434:
  stw       r0, 0xC4(r31)
  addi      r4, r30, 0x360
  lis       r5, 0x2
  lwz       r3, 0xC4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC4(r31)
  addi      r4, r30, 0x36C
  bl        0x6398
  lwz       r3, 0xC4(r31)
  addi      r4, r30, 0x378
  bl        0x638C
  li        r3, 0x18
  bl        -0x377238
  mr.       r0, r3
  beq-      .loc_0x48C
  mr        r4, r28
  li        r5, 0x2
  bl        0x62B8
  mr        r0, r3

.loc_0x48C:
  stw       r0, 0xC8(r31)
  addi      r4, r30, 0x384
  lis       r5, 0x2
  lwz       r3, 0xC8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC8(r31)
  addi      r4, r30, 0x394
  bl        0x6340
  lwz       r3, 0xC8(r31)
  addi      r4, r30, 0x3A4
  bl        0x6334
  lwz       r3, 0x1F8(r31)
  lwz       r0, 0x30(r3)
  stw       r0, 0x248(r31)
  lwz       r0, 0x248(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x377198
  stw       r3, 0x328(r31)
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  beq-      .loc_0x53C
  bl        -0x2D1BB8
  lis       r4, 0x4330
  xoris     r0, r3, 0x8000
  stw       r0, 0x224(r1)
  lwz       r0, 0x248(r31)
  stw       r4, 0x220(r1)
  lfd       f2, 0xE38(r2)
  xoris     r0, r0, 0x8000
  lfd       f1, 0x220(r1)
  lfs       f0, 0xE64(r2)
  fsubs     f1, f1, f2
  stw       r0, 0x21C(r1)
  stw       r4, 0x218(r1)
  fdivs     f1, f1, f0
  lfd       f0, 0x218(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x210(r1)
  lwz       r27, 0x214(r1)

.loc_0x53C:
  lwz       r3, 0x1F8(r31)
  lwz       r26, -0x77D4(r13)
  lwz       r3, 0xC(r3)
  bl        -0x377C10
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x3B4
  li        r5, 0
  bl        0x88198
  li        r0, 0
  addi      r4, r30, 0x3C4
  stw       r0, 0xB4(r31)
  addi      r3, r1, 0xC8
  bl        -0x8328C
  addi      r3, r1, 0xC8
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        -0x3800BC
  stw       r3, 0xB4(r31)
  lwz       r0, 0xB4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x5AC
  addi      r3, r30, 0xC
  addi      r5, r30, 0x3DC
  addi      r6, r1, 0xC8
  li        r4, 0x37D
  crclr     6, 0x6
  bl        -0x370BD4

.loc_0x5AC:
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x3B4
  bl        0x88144
  lwz       r11, 0xF0(r30)
  addi      r23, r1, 0xA0
  lwz       r10, 0xF4(r30)
  li        r22, 0
  lwz       r9, 0xF8(r30)
  li        r24, 0
  lwz       r8, 0xFC(r30)
  lwz       r7, 0x100(r30)
  lwz       r6, 0x104(r30)
  lwz       r5, 0x108(r30)
  lwz       r4, 0x10C(r30)
  lwz       r3, 0x110(r30)
  lwz       r0, 0x114(r30)
  stw       r11, 0xA0(r1)
  stw       r10, 0xA4(r1)
  stw       r9, 0xA8(r1)
  stw       r8, 0xAC(r1)
  stw       r7, 0xB0(r1)
  stw       r6, 0xB4(r1)
  stw       r5, 0xB8(r1)
  stw       r4, 0xBC(r1)
  stw       r3, 0xC0(r1)
  stw       r0, 0xC4(r1)
  b         .loc_0x674

.loc_0x618:
  lwz       r3, 0xB4(r31)
  lwz       r4, 0x0(r23)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x328(r31)
  stwx      r3, r4, r24
  lwz       r3, 0x328(r31)
  lwzx      r0, r3, r24
  cmplwi    r0, 0
  bne-      .loc_0x668
  lwz       r3, 0x78(r31)
  addi      r4, r30, 0x3EC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x328(r31)
  stwx      r3, r4, r24

.loc_0x668:
  addi      r23, r23, 0x4
  addi      r24, r24, 0x4
  addi      r22, r22, 0x1

.loc_0x674:
  lwz       r0, 0x248(r31)
  cmpw      r22, r0
  blt+      .loc_0x618
  lwz       r11, 0x17C(r30)
  addi      r23, r1, 0x64
  lwz       r10, 0x180(r30)
  addi      r24, r29, 0x10
  lwz       r9, 0x184(r30)
  addi      r25, r1, 0x50
  lwz       r8, 0x188(r30)
  addi      r22, r29, 0x24
  lwz       r7, 0x18C(r30)
  li        r21, 0
  lwz       r6, 0x1E0(r30)
  lwz       r5, 0x1E4(r30)
  lwz       r4, 0x1E8(r30)
  lwz       r3, 0x1EC(r30)
  lwz       r0, 0x1F0(r30)
  stw       r11, 0x64(r1)
  stw       r10, 0x68(r1)
  stw       r9, 0x6C(r1)
  stw       r8, 0x70(r1)
  stw       r7, 0x74(r1)
  stw       r6, 0x50(r1)
  stw       r5, 0x54(r1)
  stw       r4, 0x58(r1)
  stw       r3, 0x5C(r1)
  stw       r0, 0x60(r1)

.loc_0x6E4:
  lwz       r3, 0xB4(r31)
  lwz       r4, 0x0(r23)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x0(r24)
  lwz       r0, 0x0(r24)
  cmplwi    r0, 0
  bne-      .loc_0x720
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x39E
  crclr     6, 0x6
  bl        -0x370D48

.loc_0x720:
  lwz       r3, 0xB4(r31)
  lwz       r4, 0x0(r25)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x0(r22)
  lwz       r0, 0x0(r22)
  cmplwi    r0, 0
  bne-      .loc_0x75C
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x3A2
  crclr     6, 0x6
  bl        -0x370D84

.loc_0x75C:
  addi      r21, r21, 0x1
  addi      r24, r24, 0x4
  cmpwi     r21, 0x5
  addi      r25, r25, 0x4
  addi      r22, r22, 0x4
  addi      r23, r23, 0x4
  blt+      .loc_0x6E4
  li        r3, 0x18
  bl        -0x377544
  mr.       r0, r3
  beq-      .loc_0x798
  lwz       r4, 0xB4(r31)
  li        r5, 0
  bl        0x5FAC
  mr        r0, r3

.loc_0x798:
  stw       r0, 0xCC(r31)
  addi      r4, r30, 0x400
  lis       r5, 0x2
  lwz       r3, 0xCC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0xC
  addi      r5, r1, 0x19C
  addi      r4, r30, 0x1F4
  mtctr     r0

.loc_0x7C8:
  lwz       r3, 0x4(r4)
  lwzu      r0, 0x8(r4)
  stw       r3, 0x4(r5)
  stwu      r0, 0x8(r5)
  bdnz+     .loc_0x7C8
  li        r21, 0
  addi      r22, r1, 0x1A0

.loc_0x7E4:
  li        r0, 0xC
  addi      r4, r29, 0x38
  li        r3, 0
  mtctr     r0

.loc_0x7F4:
  lwz       r0, 0x0(r4)
  cmpw      r21, r0
  bne-      .loc_0x810
  rlwinm    r0,r3,4,0,27
  addi      r4, r29, 0x38
  add       r4, r4, r0
  b         .loc_0x820

.loc_0x810:
  addi      r4, r4, 0x10
  addi      r3, r3, 0x1
  bdnz+     .loc_0x7F4
  addi      r4, r29, 0x38

.loc_0x820:
  lfd       f0, 0x0(r4)
  lwz       r3, 0xCC(r31)
  stfd      f0, 0x28(r1)
  lwz       r3, 0x8(r3)
  lwz       r0, 0x2C(r1)
  lwz       r12, 0x0(r3)
  rlwinm    r0,r0,3,0,28
  lfd       f0, 0x8(r4)
  add       r6, r22, r0
  lwz       r12, 0x3C(r12)
  lwz       r5, 0x0(r6)
  stfd      f0, 0x30(r1)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  lwz       r0, 0x28(r1)
  rlwinm    r4,r0,2,0,29
  addi      r0, r4, 0x184
  stwx      r3, r31, r0
  lwzx      r0, r31, r0
  cmplwi    r0, 0
  bne-      .loc_0x88C
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x3B5
  crclr     6, 0x6
  bl        -0x370EB4

.loc_0x88C:
  addi      r21, r21, 0x1
  cmpwi     r21, 0xC
  blt+      .loc_0x7E4
  li        r3, 0x10
  bl        -0x377664
  cmplwi    r3, 0
  beq-      .loc_0x8C8
  lfs       f1, 0xE10(r2)
  lfs       f0, 0xE78(r2)
  stfs      f1, 0x0(r3)
  lfs       f1, 0xED4(r2)
  stfs      f0, 0x4(r3)
  lfs       f0, 0xED8(r2)
  stfs      f1, 0x8(r3)
  stfs      f0, 0xC(r3)

.loc_0x8C8:
  stw       r3, 0x20C(r31)
  li        r3, 0x48
  bl        -0x377698
  mr.       r21, r3
  beq-      .loc_0x8F8
  lfs       f1, 0xEDC(r2)
  addi      r4, r30, 0x414
  lfs       f2, 0xEE0(r2)
  bl        0x607C
  lis       r3, 0x804E
  addi      r0, r3, 0x56D8
  stw       r0, 0x0(r21)

.loc_0x8F8:
  stw       r21, 0xD8(r31)
  addi      r4, r30, 0x420
  lwz       r3, 0xD8(r31)
  bl        0x6184
  lwz       r3, 0xD8(r31)
  li        r0, 0x1
  li        r4, 0x5
  lwz       r3, 0x1C(r3)
  stb       r0, 0x30(r3)
  lwz       r3, 0xD8(r31)
  lwz       r3, 0x1C(r3)
  stb       r0, 0x31(r3)
  lwz       r3, 0xD8(r31)
  bl        0x6200
  lwz       r3, 0xD8(r31)
  lwz       r3, 0x20(r3)
  lwz       r21, 0x20(r3)
  cmplwi    r21, 0
  bne-      .loc_0x958
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x3C2
  crclr     6, 0x6
  bl        -0x370F80

.loc_0x958:
  li        r0, 0x2
  stb       r0, 0x1(r21)
  lwz       r3, 0xD8(r31)
  lwz       r3, 0x18(r3)
  lwz       r21, 0x20(r3)
  cmplwi    r21, 0
  bne-      .loc_0x988
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x3C6
  crclr     6, 0x6
  bl        -0x370FB0

.loc_0x988:
  li        r0, 0x2
  stb       r0, 0x1(r21)
  lwz       r3, 0xD8(r31)
  lwz       r3, 0x1C(r3)
  lwz       r21, 0x20(r3)
  cmplwi    r21, 0
  bne-      .loc_0x9B8
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x3CA
  crclr     6, 0x6
  bl        -0x370FE0

.loc_0x9B8:
  li        r0, 0x2
  li        r3, 0x1A8
  stb       r0, 0x1(r21)
  bl        -0x37778C
  mr.       r0, r3
  beq-      .loc_0x9E8
  lwz       r4, 0xD8(r31)
  lis       r5, 0x2
  lwz       r4, 0x18(r4)
  lwz       r4, 0x20(r4)
  bl        -0x346B14
  mr        r0, r3

.loc_0x9E8:
  stw       r0, 0x1E4(r31)
  li        r3, 0x1C
  bl        -0x3777B8
  mr.       r21, r3
  beq-      .loc_0xA1C
  mr        r4, r28
  li        r5, 0x2
  bl        0x5D38
  lis       r3, 0x804E
  li        r0, 0
  addi      r3, r3, 0x5658
  stw       r3, 0x0(r21)
  stw       r0, 0x18(r21)

.loc_0xA1C:
  stw       r21, 0x7C(r31)
  addi      r4, r30, 0x434
  lis       r5, 0x102
  lwz       r3, 0x7C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x7C(r31)
  addi      r4, r30, 0x448
  bl        0x5DB0
  lwz       r3, 0x7C(r31)
  addi      r4, r30, 0x45C
  bl        0x5DA4
  lwz       r5, 0x7C(r31)
  lis       r4, 0x6F64
  lis       r3, 0x506F
  lwz       r29, 0x8(r5)
  addi      r5, r3, 0x7262
  addi      r6, r4, 0x7930
  lwz       r12, 0x0(r29)
  mr        r3, r29
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x154(r31)
  mr        r3, r29
  lis       r5, 0x6F64
  lis       r4, 0x506F
  lwz       r12, 0x0(r29)
  addi      r6, r5, 0x7931
  addi      r5, r4, 0x7262
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x158(r31)
  mr        r3, r29
  lis       r5, 0x6F64
  lis       r4, 0x506F
  lwz       r12, 0x0(r29)
  addi      r6, r5, 0x7932
  addi      r5, r4, 0x7262
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x15C(r31)
  mr        r3, r29
  lis       r4, 0x685F
  li        r5, 0x50
  lwz       r12, 0x0(r29)
  addi      r6, r4, 0x6F72
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x160(r31)
  mr        r3, r29
  lis       r4, 0x626F
  li        r5, 0x50
  lwz       r12, 0x0(r29)
  addi      r6, r4, 0x7230
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x164(r31)
  mr        r3, r29
  lis       r4, 0x626F
  li        r5, 0x50
  lwz       r12, 0x0(r29)
  addi      r6, r4, 0x7231
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x168(r31)
  mr        r3, r29
  lis       r5, 0x6F64
  lis       r4, 0x506C
  lwz       r12, 0x0(r29)
  addi      r6, r5, 0x7930
  addi      r5, r4, 0x6F62
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x16C(r31)
  mr        r3, r29
  lis       r5, 0x6F64
  lis       r4, 0x506C
  lwz       r12, 0x0(r29)
  addi      r6, r5, 0x7931
  addi      r5, r4, 0x6F62
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x170(r31)
  mr        r3, r29
  lis       r5, 0x6F64
  lis       r4, 0x506C
  lwz       r12, 0x0(r29)
  addi      r6, r5, 0x7932
  addi      r5, r4, 0x6F62
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x174(r31)
  mr        r3, r29
  lis       r4, 0x685F
  li        r5, 0x50
  lwz       r12, 0x0(r29)
  addi      r6, r4, 0x6C6F
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x178(r31)
  mr        r3, r29
  lis       r4, 0x626C
  li        r5, 0x50
  lwz       r12, 0x0(r29)
  addi      r6, r4, 0x6F30
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x17C(r31)
  mr        r3, r29
  lis       r4, 0x626C
  li        r5, 0x50
  lwz       r12, 0x0(r29)
  addi      r6, r4, 0x6F31
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x180(r31)
  mr        r21, r31
  li        r22, 0

.loc_0xC2C:
  lwz       r0, 0x154(r21)
  cmplwi    r0, 0
  bne-      .loc_0xC4C
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x3EC
  crclr     6, 0x6
  bl        -0x371274

.loc_0xC4C:
  lwz       r3, 0x154(r21)
  li        r4, 0x4
  bl        -0x362C04
  lwz       r0, 0x16C(r21)
  cmplwi    r0, 0
  bne-      .loc_0xC78
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x3EE
  crclr     6, 0x6
  bl        -0x3712A0

.loc_0xC78:
  lwz       r3, 0x16C(r21)
  li        r4, 0x4
  bl        -0x362C30
  addi      r22, r22, 0x1
  addi      r21, r21, 0x4
  cmpwi     r22, 0x6
  blt+      .loc_0xC2C
  lis       r6, 0x6133
  lwz       r3, 0x78(r31)
  mr        r4, r29
  li        r5, 0x6F74
  addi      r6, r6, 0x646C
  bl        -0x6E6C4
  stw       r3, 0x204(r31)
  mr        r3, r29
  lis       r4, 0x6133
  li        r5, 0x6F74
  lwz       r12, 0x0(r29)
  addi      r6, r4, 0x646C
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xDC(r31)
  lwz       r0, 0xDC(r31)
  cmplwi    r0, 0
  bne-      .loc_0xCF4
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x3FA
  crclr     6, 0x6
  bl        -0x37131C

.loc_0xCF4:
  lwz       r0, 0x204(r31)
  cmplwi    r0, 0
  bne-      .loc_0xD14
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x3FB
  crclr     6, 0x6
  bl        -0x37133C

.loc_0xD14:
  lwz       r3, 0x204(r31)
  lfs       f1, 0xE8C(r2)
  lwz       r3, 0x34(r3)
  bl        -0x962E4
  lwz       r3, 0x204(r31)
  lwz       r3, 0x34(r3)
  bl        -0x960E0
  li        r3, 0x8
  bl        -0x377AFC
  mr.       r0, r3
  beq-      .loc_0xD4C
  lwz       r4, 0x204(r31)
  bl        -0x6E644
  mr        r0, r3

.loc_0xD4C:
  stw       r0, 0x208(r31)
  lwz       r0, 0x208(r31)
  cmplwi    r0, 0
  bne-      .loc_0xD70
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x400
  crclr     6, 0x6
  bl        -0x371398

.loc_0xD70:
  mr        r3, r29
  lis       r4, 0x7269
  lwz       r12, 0x0(r29)
  addi      r6, r4, 0x6D61
  li        r5, 0x4E6F
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x100(r31)
  lwz       r0, 0x100(r31)
  cmplwi    r0, 0
  bne-      .loc_0xDB4
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x403
  crclr     6, 0x6
  bl        -0x3713DC

.loc_0xDB4:
  lwz       r6, 0x100(r31)
  lis       r4, 0x6C75
  mr        r3, r29
  li        r5, 0x4E
  lfs       f0, 0xD4(r6)
  addi      r6, r4, 0x6965
  stfs      f0, 0x2F8(r31)
  lwz       r4, 0x100(r31)
  lfs       f0, 0xD8(r4)
  stfs      f0, 0x2FC(r31)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x104(r31)
  lwz       r0, 0x104(r31)
  cmplwi    r0, 0
  bne-      .loc_0xE10
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x408
  crclr     6, 0x6
  bl        -0x371438

.loc_0xE10:
  lwz       r6, 0x104(r31)
  lis       r5, 0x6967
  lis       r4, 0x506C
  mr        r3, r29
  lfs       f0, 0xD4(r6)
  addi      r6, r5, 0x6832
  addi      r5, r4, 0x6F6C
  stfs      f0, 0x300(r31)
  lwz       r4, 0x104(r31)
  lfs       f0, 0xD8(r4)
  stfs      f0, 0x304(r31)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r22, r3
  bne-      .loc_0xE68
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x40F
  crclr     6, 0x6
  bl        -0x371490

.loc_0xE68:
  lfd       f2, 0x258(r30)
  mr        r23, r31
  lfd       f1, 0x260(r30)
  addi      r21, r1, 0x38
  lfd       f0, 0x268(r30)
  li        r24, 0
  stfd      f2, 0x38(r1)
  stfd      f1, 0x40(r1)
  stfd      f0, 0x48(r1)

.loc_0xE8C:
  mr        r3, r29
  lwz       r5, 0x0(r21)
  lwz       r12, 0x0(r29)
  lwz       r6, 0x4(r21)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xF4(r23)
  lwz       r0, 0xF4(r23)
  cmplwi    r0, 0
  bne-      .loc_0xED0
  mr        r6, r24
  addi      r3, r30, 0xC
  addi      r5, r30, 0x474
  li        r4, 0x416
  crclr     6, 0x6
  bl        -0x3714F8

.loc_0xED0:
  lwz       r3, 0xF4(r23)
  li        r4, 0
  li        r5, 0
  bl        -0x362D9C
  addi      r24, r24, 0x1
  addi      r23, r23, 0x4
  cmpwi     r24, 0x3
  addi      r21, r21, 0x8
  blt+      .loc_0xE8C
  li        r3, 0x40
  bl        -0x377CC0
  mr.       r21, r3
  beq-      .loc_0xF40
  lwz       r3, 0xC4(r31)
  lis       r5, 0x6E79
  lis       r4, 0x4E
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x6F6E
  addi      r5, r4, 0x796F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r22, 0x4(r21)
  li        r4, 0x4
  stw       r3, 0x8(r21)
  lwz       r3, 0x8(r21)
  bl        -0x362EEC

.loc_0xF40:
  stw       r21, 0x1E8(r31)
  lfs       f1, 0xE60(r2)
  lwz       r25, 0x1E8(r31)
  lfs       f0, 0xE10(r2)
  stfs      f1, 0xC(r25)
  stfs      f0, 0x10(r25)
  bl        -0x2D2624
  xoris     r0, r3, 0x8000
  lis       r4, 0x4330
  stw       r0, 0x224(r1)
  li        r3, 0x1
  lfs       f0, -0x79CC(r13)
  li        r0, 0
  stw       r4, 0x220(r1)
  lfd       f3, 0xE38(r2)
  fctiwz    f0, f0
  lfd       f1, 0x220(r1)
  lfs       f2, 0xE64(r2)
  fsubs     f3, f1, f3
  stfd      f0, 0x218(r1)
  lfs       f1, 0xE30(r2)
  lwz       r5, 0x21C(r1)
  fdivs     f2, f3, f2
  lfs       f0, 0xE10(r2)
  fmuls     f1, f1, f2
  fctiwz    f1, f1
  stfd      f1, 0x210(r1)
  lwz       r4, 0x214(r1)
  add       r4, r5, r4
  neg       r4, r4
  stw       r4, 0x38(r25)
  stfs      f0, 0x30(r25)
  stb       r3, 0x3C(r25)
  lwz       r3, 0x8(r25)
  stb       r0, 0xB0(r3)
  stfs      f0, 0x2C(r25)
  bl        -0x2D269C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x20C(r1)
  lfd       f3, 0xE38(r2)
  stw       r0, 0x208(r1)
  lfs       f1, 0xE64(r2)
  lfd       f2, 0x208(r1)
  lfs       f0, 0xE28(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x100C
  lfs       f0, 0xE48(r2)
  stfs      f0, 0x2C(r25)

.loc_0x100C:
  lfs       f0, 0xE10(r2)
  lis       r4, 0x6C69
  lis       r3, 0x50
  stfs      f0, 0x1C(r25)
  addi      r6, r4, 0x6768
  addi      r5, r3, 0x6C6F
  stfs      f0, 0x20(r25)
  stfs      f0, 0x24(r25)
  stfs      f0, 0x28(r25)
  lfs       f0, -0x79E0(r13)
  stfs      f0, 0x34(r25)
  lwz       r3, 0x7C(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r22, r3
  bne-      .loc_0x106C
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x420
  crclr     6, 0x6
  bl        -0x371694

.loc_0x106C:
  li        r3, 0x40
  bl        -0x377E38
  mr.       r21, r3
  beq-      .loc_0x10B8
  lwz       r3, 0xC8(r31)
  lis       r5, 0x6E79
  lis       r4, 0x4E
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x6F6E
  addi      r5, r4, 0x796F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r22, 0x4(r21)
  li        r4, 0x4
  stw       r3, 0x8(r21)
  lwz       r3, 0x8(r21)
  bl        -0x363064

.loc_0x10B8:
  stw       r21, 0x1EC(r31)
  lfs       f1, 0xE60(r2)
  lwz       r25, 0x1EC(r31)
  lfs       f0, 0xE10(r2)
  stfs      f1, 0xC(r25)
  stfs      f0, 0x10(r25)
  bl        -0x2D279C
  xoris     r0, r3, 0x8000
  lis       r4, 0x4330
  stw       r0, 0x224(r1)
  li        r3, 0x1
  lfs       f0, -0x79CC(r13)
  li        r0, 0
  stw       r4, 0x220(r1)
  lfd       f3, 0xE38(r2)
  fctiwz    f0, f0
  lfd       f1, 0x220(r1)
  lfs       f2, 0xE64(r2)
  fsubs     f3, f1, f3
  stfd      f0, 0x218(r1)
  lfs       f1, 0xE30(r2)
  lwz       r5, 0x21C(r1)
  fdivs     f2, f3, f2
  lfs       f0, 0xE10(r2)
  fmuls     f1, f1, f2
  fctiwz    f1, f1
  stfd      f1, 0x210(r1)
  lwz       r4, 0x214(r1)
  add       r4, r5, r4
  neg       r4, r4
  stw       r4, 0x38(r25)
  stfs      f0, 0x30(r25)
  stb       r3, 0x3C(r25)
  lwz       r3, 0x8(r25)
  stb       r0, 0xB0(r3)
  stfs      f0, 0x2C(r25)
  bl        -0x2D2814
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x20C(r1)
  lfd       f3, 0xE38(r2)
  stw       r0, 0x208(r1)
  lfs       f1, 0xE64(r2)
  lfd       f2, 0x208(r1)
  lfs       f0, 0xE28(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1184
  lfs       f0, 0xE48(r2)
  stfs      f0, 0x2C(r25)

.loc_0x1184:
  lfs       f0, 0xE10(r2)
  li        r3, 0xBC
  stfs      f0, 0x1C(r25)
  stfs      f0, 0x20(r25)
  stfs      f0, 0x24(r25)
  stfs      f0, 0x28(r25)
  lfs       f0, -0x79E0(r13)
  stfs      f0, 0x34(r25)
  bl        -0x377F6C
  mr.       r25, r3
  beq-      .loc_0x12C8
  mr        r3, r29
  lis       r5, 0x665F
  lwz       r12, 0x0(r29)
  lis       r4, 0x5072
  addi      r6, r5, 0x3030
  lwz       r12, 0x3C(r12)
  addi      r5, r4, 0x705F
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r29)
  lis       r5, 0x725F
  mr        r23, r3
  lis       r4, 0x5072
  lwz       r12, 0x3C(r12)
  addi      r6, r5, 0x3030
  mr        r3, r29
  addi      r5, r4, 0x705F
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r29)
  lis       r5, 0x6C5F
  mr        r24, r3
  lis       r4, 0x5072
  lwz       r12, 0x3C(r12)
  addi      r6, r5, 0x3030
  mr        r3, r29
  addi      r5, r4, 0x705F
  mtctr     r12
  bctrl     
  lis       r4, 0x803A
  mr        r21, r3
  subi      r4, r4, 0x6480
  addi      r3, r25, 0xC
  li        r5, 0
  li        r6, 0x10
  li        r7, 0xA
  bl        -0x2DA670
  lis       r4, 0x8038
  addi      r3, r25, 0xAC
  subi      r4, r4, 0x2F48
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x2
  bl        -0x2DA68C
  stw       r21, 0x0(r25)
  mr        r3, r21
  li        r4, 0x2
  bl        -0x36321C
  stw       r24, 0x4(r25)
  mr        r3, r24
  li        r4, 0
  bl        -0x36322C
  stw       r23, 0x8(r25)
  mr        r3, r23
  li        r4, 0x4
  bl        -0x36323C
  li        r21, 0
  mr        r22, r25

.loc_0x1298:
  lwz       r0, 0x0(r22)
  cmplwi    r0, 0
  bne-      .loc_0x12B8
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0xB0
  crclr     6, 0x6
  bl        -0x3718E0

.loc_0x12B8:
  addi      r21, r21, 0x1
  addi      r22, r22, 0x4
  cmpwi     r21, 0x3
  blt+      .loc_0x1298

.loc_0x12C8:
  li        r0, 0xA
  stw       r25, 0x1F0(r31)
  addi      r5, r1, 0x14C
  addi      r4, r30, 0x26C
  mtctr     r0

.loc_0x12DC:
  lwz       r3, 0x4(r4)
  lwzu      r0, 0x8(r4)
  stw       r3, 0x4(r5)
  stwu      r0, 0x8(r5)
  bdnz+     .loc_0x12DC
  addi      r22, r1, 0x150
  li        r23, 0
  li        r21, 0

.loc_0x12FC:
  mr        r3, r29
  lwz       r5, 0x0(r22)
  lwz       r12, 0x0(r29)
  lwz       r6, 0x4(r22)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x1324
  stb       r21, 0xB0(r3)

.loc_0x1324:
  addi      r23, r23, 0x1
  addi      r22, r22, 0x8
  cmpwi     r23, 0xA
  blt+      .loc_0x12FC
  li        r3, 0xBC
  bl        -0x378100
  mr.       r23, r3
  beq-      .loc_0x145C
  mr        r3, r29
  lis       r5, 0x665F
  lwz       r12, 0x0(r29)
  lis       r4, 0x5062
  addi      r6, r5, 0x3030
  lwz       r12, 0x3C(r12)
  addi      r5, r4, 0x705F
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r29)
  lis       r5, 0x725F
  mr        r25, r3
  lis       r4, 0x5062
  lwz       r12, 0x3C(r12)
  addi      r6, r5, 0x3030
  mr        r3, r29
  addi      r5, r4, 0x705F
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r29)
  lis       r5, 0x6C5F
  mr        r24, r3
  lis       r4, 0x5062
  lwz       r12, 0x3C(r12)
  addi      r6, r5, 0x3030
  mr        r3, r29
  addi      r5, r4, 0x705F
  mtctr     r12
  bctrl     
  lis       r4, 0x803A
  mr        r21, r3
  subi      r4, r4, 0x6480
  addi      r3, r23, 0xC
  li        r5, 0
  li        r6, 0x10
  li        r7, 0xA
  bl        -0x2DA804
  lis       r4, 0x8038
  addi      r3, r23, 0xAC
  subi      r4, r4, 0x2F48
  li        r5, 0
  li        r6, 0x8
  li        r7, 0x2
  bl        -0x2DA820
  stw       r21, 0x0(r23)
  mr        r3, r21
  li        r4, 0x2
  bl        -0x3633B0
  stw       r24, 0x4(r23)
  mr        r3, r24
  li        r4, 0
  bl        -0x3633C0
  stw       r25, 0x8(r23)
  mr        r3, r25
  li        r4, 0x4
  bl        -0x3633D0
  li        r21, 0
  mr        r22, r23

.loc_0x142C:
  lwz       r0, 0x0(r22)
  cmplwi    r0, 0
  bne-      .loc_0x144C
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0xB0
  crclr     6, 0x6
  bl        -0x371A74

.loc_0x144C:
  addi      r21, r21, 0x1
  addi      r22, r22, 0x4
  cmpwi     r21, 0x3
  blt+      .loc_0x142C

.loc_0x145C:
  li        r0, 0xA
  stw       r23, 0x1F4(r31)
  addi      r5, r1, 0xFC
  addi      r4, r30, 0x2BC
  mtctr     r0

.loc_0x1470:
  lwz       r3, 0x4(r4)
  lwzu      r0, 0x8(r4)
  stw       r3, 0x4(r5)
  stwu      r0, 0x8(r5)
  bdnz+     .loc_0x1470
  addi      r22, r1, 0x100
  li        r23, 0
  li        r21, 0

.loc_0x1490:
  mr        r3, r29
  lwz       r5, 0x0(r22)
  lwz       r12, 0x0(r29)
  lwz       r6, 0x4(r22)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x14B8
  stb       r21, 0xB0(r3)

.loc_0x14B8:
  addi      r23, r23, 0x1
  addi      r22, r22, 0x8
  cmpwi     r23, 0xA
  blt+      .loc_0x1490
  lfd       f3, 0xE38(r2)
  mr        r9, r31
  lfs       f1, 0xE10(r2)
  li        r10, 0
  lfs       f0, 0xE30(r2)
  lis       r5, 0x4330

.loc_0x14E0:
  li        r6, 0
  li        r0, 0x5
  mr        r4, r6
  lwz       r7, 0x274(r9)
  lwz       r8, 0x1F0(r9)
  li        r3, 0x3
  mtctr     r0

.loc_0x14FC:
  xoris     r0, r6, 0x8000
  stw       r5, 0x220(r1)
  lfs       f4, -0x6648(r13)
  cmpw      r6, r7
  stw       r0, 0x224(r1)
  lfd       f2, 0x220(r1)
  fsubs     f2, f2, f3
  fmuls     f2, f4, f2
  stfs      f2, 0x14(r8)
  stfs      f1, 0x10(r8)
  bge-      .loc_0x1534
  stw       r4, 0xC(r8)
  stfs      f1, 0x18(r8)
  b         .loc_0x153C

.loc_0x1534:
  stw       r3, 0xC(r8)
  stfs      f0, 0x18(r8)

.loc_0x153C:
  addi      r6, r6, 0x1
  stw       r5, 0x220(r1)
  xoris     r0, r6, 0x8000
  lfs       f4, -0x6648(r13)
  stw       r0, 0x224(r1)
  cmpw      r6, r7
  lfd       f2, 0x220(r1)
  fsubs     f2, f2, f3
  fmuls     f2, f4, f2
  stfs      f2, 0x24(r8)
  stfs      f1, 0x20(r8)
  bge-      .loc_0x1578
  stw       r4, 0x1C(r8)
  stfs      f1, 0x28(r8)
  b         .loc_0x1580

.loc_0x1578:
  stw       r3, 0x1C(r8)
  stfs      f0, 0x28(r8)

.loc_0x1580:
  addi      r8, r8, 0x20
  addi      r6, r6, 0x1
  bdnz+     .loc_0x14FC
  lwz       r0, 0x274(r9)
  addi      r10, r10, 0x1
  cmpwi     r10, 0x2
  mulli     r0, r0, 0x5
  stw       r0, 0x27C(r9)
  addi      r9, r9, 0x4
  blt+      .loc_0x14E0
  addi      r0, r31, 0x27C
  lis       r4, 0x5F66
  stw       r0, 0x8(r1)
  li        r0, 0x2
  lis       r3, 0x50
  addi      r8, r4, 0x5F6C
  stw       r0, 0xC(r1)
  addi      r5, r3, 0x7270
  li        r3, 0
  li        r0, 0x1
  stw       r3, 0x10(r1)
  mr        r3, r29
  mr        r7, r5
  mr        r10, r8
  stw       r0, 0x14(r1)
  mr        r9, r5
  addi      r6, r4, 0x5F72
  lwz       r0, 0x78(r31)
  stw       r0, 0x18(r1)
  bl        -0x8FD30
  addi      r0, r31, 0x280
  lis       r4, 0x665F
  stw       r0, 0x8(r1)
  li        r0, 0x2
  lis       r3, 0x5072
  addi      r8, r4, 0x6C31
  stw       r0, 0xC(r1)
  addi      r5, r3, 0x705F
  li        r3, 0
  li        r0, 0x1
  stw       r3, 0x10(r1)
  mr        r3, r29
  mr        r7, r5
  mr        r10, r8
  stw       r0, 0x14(r1)
  mr        r9, r5
  addi      r6, r4, 0x7231
  lwz       r0, 0x78(r31)
  stw       r0, 0x18(r1)
  bl        -0x8FD80
  li        r3, 0xB4
  bl        -0x378414
  mr.       r0, r3
  beq-      .loc_0x16A8
  lis       r4, 0x804D
  lwz       r6, 0x78(r31)
  addi      r4, r4, 0x7E18
  mr        r21, r0
  li        r5, 0x4
  bl        -0x8F020
  lis       r3, 0x804E
  li        r0, 0
  addi      r4, r3, 0x55F0
  li        r3, 0x1C
  stw       r4, 0x0(r21)
  stb       r0, 0xAC(r21)
  stw       r0, 0xB0(r21)
  bl        -0x378454
  mr.       r0, r3
  beq-      .loc_0x16A0
  bl        -0x73500
  mr        r0, r3

.loc_0x16A0:
  stw       r0, 0xB0(r21)
  mr        r0, r21

.loc_0x16A8:
  stw       r0, 0x210(r31)
  lis       r3, 0x7269
  addi      r4, r31, 0x284
  li        r0, 0x1
  stw       r4, 0x8(r1)
  mr        r4, r29
  addi      r6, r3, 0x5F72
  addi      r8, r3, 0x5F6C
  stw       r0, 0xC(r1)
  addi      r10, r3, 0x5F63
  li        r5, 0x506F
  li        r7, 0x506F
  lwz       r3, 0x210(r31)
  li        r9, 0x506F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x210(r31)
  li        r4, 0x1
  bl        -0x90B8C
  lis       r4, 0x7269
  lwz       r7, 0x210(r31)
  mr        r3, r29
  li        r5, 0x506F
  addi      r6, r4, 0x5F72
  bl        0x987A8
  li        r3, 0xB4
  bl        -0x3784E0
  mr.       r0, r3
  beq-      .loc_0x1774
  lis       r4, 0x804D
  lwz       r6, 0x78(r31)
  addi      r4, r4, 0x7E18
  mr        r21, r0
  li        r5, 0x4
  bl        -0x8F0EC
  lis       r3, 0x804E
  li        r0, 0
  addi      r4, r3, 0x55F0
  li        r3, 0x1C
  stw       r4, 0x0(r21)
  stb       r0, 0xAC(r21)
  stw       r0, 0xB0(r21)
  bl        -0x378520
  mr.       r0, r3
  beq-      .loc_0x176C
  bl        -0x735CC
  mr        r0, r3

.loc_0x176C:
  stw       r0, 0xB0(r21)
  mr        r0, r21

.loc_0x1774:
  stw       r0, 0x214(r31)
  lis       r3, 0x7569
  addi      r4, r31, 0x288
  li        r0, 0x1
  stw       r4, 0x8(r1)
  mr        r4, r29
  addi      r6, r3, 0x5F72
  addi      r8, r3, 0x5F6C
  stw       r0, 0xC(r1)
  addi      r10, r3, 0x5F63
  li        r5, 0x506C
  li        r7, 0x506C
  lwz       r3, 0x214(r31)
  li        r9, 0x506C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x214(r31)
  li        r4, 0x1
  bl        -0x90C58
  lis       r4, 0x7569
  lwz       r7, 0x214(r31)
  mr        r3, r29
  li        r5, 0x506C
  addi      r6, r4, 0x5F72
  bl        0x986DC
  li        r3, 0x18
  bl        -0x3785AC
  cmplwi    r3, 0
  beq-      .loc_0x185C
  lis       r5, 0x804C
  lis       r4, 0x804C
  addi      r0, r5, 0x14F0
  lis       r6, 0x804A
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x14D8
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  li        r9, 0
  addi      r7, r5, 0x7420
  addi      r4, r4, 0x7610
  stb       r9, 0x4(r3)
  subi      r8, r6, 0x1D84
  addi      r6, r7, 0x18
  li        r5, 0x8
  stb       r9, 0x5(r3)
  addi      r0, r4, 0x18
  lfs       f0, 0xE20(r2)
  stw       r8, 0x8(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0x8(r3)
  sth       r5, 0xC(r3)
  stw       r9, 0x10(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x8(r3)
  stfs      f0, 0x14(r3)

.loc_0x185C:
  stw       r3, 0x200(r31)
  li        r3, 0x18
  bl        -0x37862C
  mr.       r21, r3
  beq-      .loc_0x1894
  mr        r4, r28
  li        r5, 0
  bl        0x4EC4
  lis       r4, 0x804E
  lis       r3, 0x804E
  addi      r0, r4, 0x596C
  stw       r0, 0x0(r21)
  addi      r0, r3, 0x5488
  stw       r0, 0x0(r21)

.loc_0x1894:
  stw       r21, 0xBC(r31)
  addi      r4, r30, 0x48C
  lis       r5, 0x2
  lwz       r3, 0xBC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x7C(r31)
  lis       r3, 0x6C69
  addi      r6, r3, 0x7374
  li        r5, 0x4E
  lwz       r3, 0x8(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xE4(r31)
  lwz       r0, 0xE4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x18FC
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x456
  crclr     6, 0x6
  bl        -0x371F24

.loc_0x18FC:
  li        r3, 0x18
  bl        -0x3786C8
  mr.       r0, r3
  beq-      .loc_0x191C
  mr        r4, r28
  li        r5, 0x1
  bl        0x4E28
  mr        r0, r3

.loc_0x191C:
  stw       r0, 0xC0(r31)
  addi      r4, r30, 0x4A0
  lis       r5, 0x102
  lwz       r3, 0xC0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC0(r31)
  addi      r4, r30, 0x4B4
  bl        0x4EB0
  li        r3, 0x18
  bl        -0x378714
  mr.       r0, r3
  beq-      .loc_0x1968
  mr        r4, r28
  li        r5, 0x2
  bl        0x4DDC
  mr        r0, r3

.loc_0x1968:
  stw       r0, 0xD0(r31)
  addi      r4, r30, 0x4C8
  lis       r5, 0x102
  lwz       r3, 0xD0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xD0(r31)
  addi      r4, r30, 0x4DC
  bl        0x4E64
  lwz       r3, 0xD0(r31)
  addi      r4, r30, 0x4F0
  bl        0x4E58
  li        r3, 0x30
  bl        -0x37876C
  mr.       r21, r3
  beq-      .loc_0x19C8
  mr        r4, r28
  li        r5, 0xC
  bl        0x71E8
  lis       r3, 0x804E
  addi      r0, r3, 0x56C0
  stw       r0, 0x0(r21)

.loc_0x19C8:
  stw       r21, 0xD4(r31)
  addi      r4, r30, 0x508
  lis       r5, 0x102
  lwz       r3, 0xD4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x520
  bl        0x4E04
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x538
  bl        0x4DF8
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x554
  bl        0x4DEC
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x570
  bl        0x4DE0
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x58C
  bl        0x4DD4
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x5A8
  bl        0x4DC8
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x5C4
  bl        0x4DBC
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x5E0
  bl        0x4DB0
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x5FC
  bl        0x4DA4
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x618
  bl        0x4D98
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x634
  bl        0x4D8C
  lwz       r3, 0xD4(r31)
  addi      r4, r30, 0x650
  bl        0x4D80
  lwz       r4, 0xD4(r31)
  lis       r3, 0x4E6D
  addi      r6, r3, 0x6730
  li        r5, 0
  lwz       r3, 0x8(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x110(r31)
  lwz       r0, 0x110(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1AC0
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x476
  crclr     6, 0x6
  bl        -0x3720E8

.loc_0x1AC0:
  lwz       r5, 0x110(r31)
  lis       r4, 0x6A69
  lis       r3, 0x4E
  lfs       f1, 0xD8(r5)
  addi      r6, r4, 0x3030
  lfs       f0, 0xD4(r5)
  addi      r5, r3, 0x7961
  stfs      f0, 0x318(r31)
  stfs      f1, 0x31C(r31)
  lwz       r3, 0xD4(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x108(r31)
  lwz       r0, 0x108(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1B20
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x47A
  crclr     6, 0x6
  bl        -0x372148

.loc_0x1B20:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6A69
  lis       r4, 0x4E
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x7961
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x10C(r31)
  lwz       r0, 0x10C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1B6C
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x47D
  crclr     6, 0x6
  bl        -0x372194

.loc_0x1B6C:
  lwz       r4, 0xD4(r31)
  lis       r3, 0x6D67
  addi      r6, r3, 0x3030
  li        r5, 0x5430
  lwz       r3, 0x8(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1B4(r31)
  lwz       r0, 0x1B4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1BB4
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x480
  crclr     6, 0x6
  bl        -0x3721DC

.loc_0x1BB4:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6773
  lis       r4, 0x54
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x306D
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1CC(r31)
  lwz       r0, 0x1CC(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1C00
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x482
  crclr     6, 0x6
  bl        -0x372228

.loc_0x1C00:
  lwz       r4, 0xD4(r31)
  lis       r3, 0x6D67
  addi      r6, r3, 0x3031
  li        r5, 0x5430
  lwz       r3, 0x8(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1B8(r31)
  lwz       r0, 0x1B8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1C48
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x485
  crclr     6, 0x6
  bl        -0x372270

.loc_0x1C48:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6773
  lis       r4, 0x54
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x306D
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1D0(r31)
  lwz       r0, 0x1D0(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1C94
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x487
  crclr     6, 0x6
  bl        -0x3722BC

.loc_0x1C94:
  lwz       r4, 0xD4(r31)
  lis       r3, 0x6D67
  addi      r6, r3, 0x3032
  li        r5, 0x5430
  lwz       r3, 0x8(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1BC(r31)
  lwz       r0, 0x1BC(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1CDC
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x48A
  crclr     6, 0x6
  bl        -0x372304

.loc_0x1CDC:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6773
  lis       r4, 0x54
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3032
  addi      r5, r4, 0x306D
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1D4(r31)
  lwz       r0, 0x1D4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1D28
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x48C
  crclr     6, 0x6
  bl        -0x372350

.loc_0x1D28:
  lwz       r4, 0xD4(r31)
  lis       r3, 0x6D67
  addi      r6, r3, 0x3033
  li        r5, 0x5430
  lwz       r3, 0x8(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C0(r31)
  lwz       r0, 0x1C0(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1D70
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x48F
  crclr     6, 0x6
  bl        -0x372398

.loc_0x1D70:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6773
  lis       r4, 0x54
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3033
  addi      r5, r4, 0x306D
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1D8(r31)
  lwz       r0, 0x1D8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1DBC
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x491
  crclr     6, 0x6
  bl        -0x3723E4

.loc_0x1DBC:
  lwz       r4, 0xD4(r31)
  lis       r3, 0x6D67
  addi      r6, r3, 0x3034
  li        r5, 0x5430
  lwz       r3, 0x8(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C4(r31)
  lwz       r0, 0x1C4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1E04
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x494
  crclr     6, 0x6
  bl        -0x37242C

.loc_0x1E04:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6773
  lis       r4, 0x54
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3034
  addi      r5, r4, 0x306D
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1DC(r31)
  lwz       r0, 0x1DC(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1E50
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x496
  crclr     6, 0x6
  bl        -0x372478

.loc_0x1E50:
  lwz       r4, 0xD4(r31)
  lis       r3, 0x6D67
  addi      r6, r3, 0x3035
  li        r5, 0x5430
  lwz       r3, 0x8(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1C8(r31)
  lwz       r0, 0x1C8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1E98
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x499
  crclr     6, 0x6
  bl        -0x3724C0

.loc_0x1E98:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6773
  lis       r4, 0x54
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3035
  addi      r5, r4, 0x306D
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1EE4
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x49B
  crclr     6, 0x6
  bl        -0x37250C

.loc_0x1EE4:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6F6E
  lis       r4, 0x5030
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x6963
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x114(r31)
  lwz       r0, 0x114(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1F30
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x49E
  crclr     6, 0x6
  bl        -0x372558

.loc_0x1F30:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6F6E
  lis       r4, 0x5030
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x6963
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x118(r31)
  lwz       r0, 0x118(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1F7C
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x4A1
  crclr     6, 0x6
  bl        -0x3725A4

.loc_0x1F7C:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6F6E
  lis       r4, 0x5030
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3032
  addi      r5, r4, 0x6963
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x11C(r31)
  lwz       r0, 0x11C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x1FC8
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x4A4
  crclr     6, 0x6
  bl        -0x3725F0

.loc_0x1FC8:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6F6E
  lis       r4, 0x5030
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3033
  addi      r5, r4, 0x6963
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x120(r31)
  lwz       r0, 0x120(r31)
  cmplwi    r0, 0
  bne-      .loc_0x2014
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x4A7
  crclr     6, 0x6
  bl        -0x37263C

.loc_0x2014:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6F6E
  lis       r4, 0x5030
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3034
  addi      r5, r4, 0x6963
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x124(r31)
  lwz       r0, 0x124(r31)
  cmplwi    r0, 0
  bne-      .loc_0x2060
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x4AA
  crclr     6, 0x6
  bl        -0x372688

.loc_0x2060:
  lwz       r3, 0xD4(r31)
  lis       r5, 0x6F6E
  lis       r4, 0x5030
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3035
  addi      r5, r4, 0x6963
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x128(r31)
  lwz       r0, 0x128(r31)
  cmplwi    r0, 0
  bne-      .loc_0x20AC
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x4AD
  crclr     6, 0x6
  bl        -0x3726D4

.loc_0x20AC:
  lwz       r5, 0x114(r31)
  li        r0, 0
  lis       r4, 0x655F
  lis       r3, 0x5472
  stb       r0, 0xB0(r5)
  addi      r6, r4, 0x3131
  addi      r5, r3, 0x756C
  lwz       r3, 0x118(r31)
  stb       r0, 0xB0(r3)
  lwz       r3, 0x11C(r31)
  stb       r0, 0xB0(r3)
  lwz       r3, 0x120(r31)
  stb       r0, 0xB0(r3)
  lwz       r3, 0x124(r31)
  stb       r0, 0xB0(r3)
  lwz       r3, 0x128(r31)
  stb       r0, 0xB0(r3)
  lwz       r3, 0xD4(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r21, r3
  bne-      .loc_0x2124
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x4B4
  crclr     6, 0x6
  bl        -0x37274C

.loc_0x2124:
  lis       r4, 0x335F
  lis       r3, 0x32
  addi      r0, r4, 0x3030
  lis       r4, 0x655F
  stw       r0, 0x1C(r21)
  addi      r0, r3, 0x3031
  lis       r3, 0x5472
  addi      r6, r4, 0x6D36
  stw       r0, 0x18(r21)
  addi      r5, r3, 0x756C
  lwz       r3, 0xD4(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r21, r3
  bne-      .loc_0x2180
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x4B8
  crclr     6, 0x6
  bl        -0x3727A8

.loc_0x2180:
  lis       r3, 0x335F
  lis       r4, 0x32
  addi      r0, r3, 0x3030
  mr        r3, r31
  stw       r0, 0x1C(r21)
  addi      r0, r4, 0x3031
  stw       r0, 0x18(r21)
  bl        0x3E78
  lwz       r5, 0xBC(r31)
  li        r3, 0
  li        r4, 0x2
  addi      r0, r1, 0x78
  lwz       r23, 0x8(r5)
  stw       r3, 0x90(r31)
  mr        r3, r23
  stw       r4, 0x94(r31)
  lha       r4, 0x8E(r31)
  subi      r4, r4, 0x1
  stw       r4, 0x98(r31)
  lfd       f4, 0x310(r30)
  lfd       f3, 0x318(r30)
  lfd       f2, 0x320(r30)
  lfd       f1, 0x328(r30)
  lfd       f0, 0x330(r30)
  stfd      f4, 0x78(r1)
  stfd      f3, 0x80(r1)
  stfd      f2, 0x88(r1)
  stfd      f1, 0x90(r1)
  stfd      f0, 0x98(r1)
  lwz       r4, 0x90(r31)
  lwz       r12, 0x0(r23)
  rlwinm    r4,r4,3,0,28
  add       r6, r0, r4
  lwz       r12, 0x3C(r12)
  lwz       r5, 0x0(r6)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  mr.       r21, r3
  bne-      .loc_0x2234
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x4CB
  crclr     6, 0x6
  bl        -0x37285C

.loc_0x2234:
  lfs       f0, 0xD8(r21)
  mr        r3, r23
  addi      r0, r1, 0x78
  stfs      f0, 0xA0(r31)
  lwz       r4, 0x98(r31)
  lwz       r12, 0x0(r23)
  rlwinm    r4,r4,3,0,28
  add       r6, r0, r4
  lwz       r12, 0x3C(r12)
  lwz       r5, 0x0(r6)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  mr.       r21, r3
  bne-      .loc_0x2284
  addi      r3, r30, 0xC
  addi      r5, r30, 0x1C
  li        r4, 0x4CF
  crclr     6, 0x6
  bl        -0x3728AC

.loc_0x2284:
  lfs       f0, 0xD8(r21)
  stfs      f0, 0xA4(r31)
  lha       r0, 0x8E(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x378F54
  lis       r5, 0x305F
  lis       r4, 0x30
  stw       r3, 0x88(r31)
  addi      r22, r1, 0x78
  addi      r28, r5, 0x3031
  addi      r25, r4, 0x3030
  li        r21, 0
  li        r24, 0
  b         .loc_0x2368

.loc_0x22BC:
  li        r3, 0x28
  bl        -0x379088
  mr.       r29, r3
  beq-      .loc_0x231C
  mr        r3, r23
  lwz       r5, 0x0(r22)
  lwz       r12, 0x0(r23)
  lwz       r6, 0x4(r22)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lfs       f0, 0xE10(r2)
  stw       r0, 0x0(r29)
  stw       r3, 0x4(r29)
  stw       r0, 0x8(r29)
  stw       r0, 0xC(r29)
  stw       r0, 0x10(r29)
  stfs      f0, 0x18(r29)
  stw       r0, 0x20(r29)
  stw       r0, 0x24(r29)
  lwz       r3, 0x4(r29)
  lfs       f0, 0xD8(r3)
  stfs      f0, 0x1C(r29)

.loc_0x231C:
  lwz       r3, 0x88(r31)
  mr        r4, r21
  stwx      r29, r3, r24
  lwz       r3, 0x88(r31)
  lwzx      r3, r3, r24
  lwz       r3, 0x4(r3)
  stw       r28, 0x1C(r3)
  stw       r25, 0x18(r3)
  lwz       r3, 0x88(r31)
  lwzx      r3, r3, r24
  bl        0x5428
  lwz       r3, 0x88(r31)
  li        r0, 0x1
  addi      r22, r22, 0x8
  addi      r21, r21, 0x1
  lwzx      r3, r3, r24
  addi      r24, r24, 0x4
  lwz       r3, 0x4(r3)
  stb       r0, 0xB0(r3)

.loc_0x2368:
  lha       r0, 0x8E(r31)
  cmpw      r21, r0
  blt+      .loc_0x22BC
  lwz       r4, 0x88(r31)
  li        r3, 0x30
  lwz       r5, 0x0(r4)
  lwz       r4, 0x4(r4)
  lwz       r5, 0x4(r5)
  lwz       r4, 0x4(r4)
  lfs       f0, 0xD8(r5)
  lfs       f1, 0xD8(r4)
  fsubs     f30, f1, f0
  bl        -0x379160
  mr.       r0, r3
  beq-      .loc_0x23AC
  bl        0x5144
  mr        r0, r3

.loc_0x23AC:
  stw       r0, 0x84(r31)
  lis       r3, 0x8051
  addi      r4, r3, 0x4044
  mr        r3, r31
  lwz       r5, 0x84(r31)
  stfs      f30, 0x18(r5)
  lwz       r5, 0x84(r31)
  lfs       f0, 0x0(r4)
  stfs      f0, 0x0(r5)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x4(r5)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x8(r5)
  lfs       f0, 0xC(r4)
  stfs      f0, 0xC(r5)
  lfs       f0, 0x10(r4)
  stfs      f0, 0x10(r5)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x80(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x84(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x1F8(r31)
  lwz       r0, 0x2C(r3)
  lwz       r3, 0x24(r3)
  cmpwi     r0, 0
  bne-      .loc_0x242C
  subi      r3, r3, 0x1

.loc_0x242C:
  cmpwi     r3, 0
  bge-      .loc_0x2438
  li        r3, 0

.loc_0x2438:
  stw       r3, 0x284(r31)
  lwz       r3, 0x1F8(r31)
  lwz       r0, 0x2C(r3)
  lwz       r3, 0x28(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x2454
  subi      r3, r3, 0x1

.loc_0x2454:
  cmpwi     r3, 0
  bge-      .loc_0x2460
  li        r3, 0

.loc_0x2460:
  stw       r3, 0x288(r31)
  li        r23, 0
  lfs       f31, 0xE10(r2)
  lwz       r0, 0x248(r31)
  sub       r3, r0, r27
  addi      r21, r3, 0x2
  b         .loc_0x2518

.loc_0x247C:
  li        r24, 0
  li        r22, 0
  b         .loc_0x24CC

.loc_0x2488:
  lwz       r3, 0x88(r31)
  lwzx      r4, r3, r22
  lfs       f0, 0x1C(r4)
  lwz       r3, 0x4(r4)
  fadds     f0, f0, f30
  stfs      f0, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x88(r31)
  addi      r24, r24, 0x1
  lwzx      r4, r3, r22
  addi      r22, r22, 0x4
  lwz       r3, 0x4(r4)
  lfs       f0, 0xD8(r3)
  stfs      f0, 0x1C(r4)

.loc_0x24CC:
  lha       r0, 0x8E(r31)
  cmpw      r24, r0
  blt+      .loc_0x2488
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x84(r31)
  li        r0, 0
  mr        r3, r31
  stfs      f31, 0x14(r4)
  stw       r0, 0x20(r4)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x84(r12)
  mtctr     r12
  bctrl     
  addi      r23, r23, 0x1

.loc_0x2518:
  cmpw      r23, r21
  blt+      .loc_0x247C
  mr        r3, r31
  bl        0x37C4
  mr        r3, r26
  bl        -0x379BF4
  psq_l     f31,0x278(r1),0,0
  lfd       f31, 0x270(r1)
  psq_l     f30,0x268(r1),0,0
  lfd       f30, 0x260(r1)
  lmw       r21, 0x234(r1)
  lwz       r0, 0x284(r1)
  mtlr      r0
  addi      r1, r1, 0x280
  blr
*/
}

/*
 * --INFO--
 * Address:	8039D1C0
 * Size:	000020
 */
void create__Q28Morimura19TVsSelectListScreenFPCcUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x4204
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8039D1E0
 * Size:	001244
 */
void doUpdate__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x100(r1)
  mflr      r0
  stw       r0, 0x104(r1)
  stfd      f31, 0xF0(r1)
  psq_st    f31,0xF8(r1),0,0
  stfd      f30, 0xE0(r1)
  psq_st    f30,0xE8(r1),0,0
  stmw      r27, 0xCC(r1)
  lbz       r0, -0x6760(r13)
  mr        r30, r3
  cmplwi    r0, 0
  beq-      .loc_0x50
  lbz       r0, 0x28E(r30)
  cmplwi    r0, 0
  beq-      .loc_0x50
  lbz       r0, 0x28C(r30)
  stw       r0, 0x284(r30)
  lbz       r0, 0x28D(r30)
  stw       r0, 0x288(r30)
  bl        0x3728

.loc_0x50:
  mr        r3, r30
  bl        0x35E0
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  beq-      .loc_0x80
  lbz       r0, -0x6640(r13)
  cmplwi    r0, 0
  beq-      .loc_0x80
  li        r0, 0
  mr        r3, r30
  stb       r0, -0x6640(r13)
  bl        0x31D4

.loc_0x80:
  lwz       r3, 0xD4(r30)
  li        r31, 0
  lwz       r0, 0x18(r3)
  cmpwi     r0, 0
  bne-      .loc_0x98
  li        r31, 0x1

.loc_0x98:
  lbz       r0, 0x45(r30)
  cmplwi    r0, 0
  beq-      .loc_0x56C
  lwz       r3, 0x1F8(r30)
  lwz       r0, 0x34(r3)
  cmpwi     r0, 0
  bne-      .loc_0x56C
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x224(r3)
  lbz       r0, 0xD4(r3)
  cmplwi    r0, 0
  bne-      .loc_0x56C
  lwz       r0, 0x240(r30)
  cmpwi     r0, 0
  bne-      .loc_0x454
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x200
  lwz       r3, 0x80(r30)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x130
  lwz       r3, 0x274(r30)
  addi      r0, r3, 0x1
  stw       r0, 0x274(r30)
  lwz       r0, 0x274(r30)
  cmplwi    r0, 0xA
  ble-      .loc_0x120
  li        r0, 0xA
  stw       r0, 0x274(r30)
  b         .loc_0x130

.loc_0x120:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1828
  li        r5, 0
  bl        -0x64CDC

.loc_0x130:
  lwz       r3, 0x80(r30)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,25,25
  beq-      .loc_0x174
  lwz       r3, 0x274(r30)
  subi      r0, r3, 0x1
  stw       r0, 0x274(r30)
  lwz       r0, 0x274(r30)
  cmplwi    r0, 0x1
  bge-      .loc_0x164
  li        r0, 0x1
  stw       r0, 0x274(r30)
  b         .loc_0x174

.loc_0x164:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x182A
  li        r5, 0
  bl        -0x64D20

.loc_0x174:
  lwz       r3, 0xB8(r30)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x1B8
  lwz       r3, 0x278(r30)
  addi      r0, r3, 0x1
  stw       r0, 0x278(r30)
  lwz       r0, 0x278(r30)
  cmplwi    r0, 0xA
  ble-      .loc_0x1A8
  li        r0, 0xA
  stw       r0, 0x278(r30)
  b         .loc_0x1B8

.loc_0x1A8:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1828
  li        r5, 0
  bl        -0x64D64

.loc_0x1B8:
  lwz       r3, 0xB8(r30)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,25,25
  beq-      .loc_0x28C
  lwz       r3, 0x278(r30)
  subi      r0, r3, 0x1
  stw       r0, 0x278(r30)
  lwz       r0, 0x278(r30)
  cmplwi    r0, 0x1
  bge-      .loc_0x1EC
  li        r0, 0x1
  stw       r0, 0x278(r30)
  b         .loc_0x28C

.loc_0x1EC:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x182A
  li        r5, 0
  bl        -0x64DA8
  b         .loc_0x28C

.loc_0x200:
  lwz       r4, 0x80(r30)
  lis       r3, 0x202
  addi      r0, r3, 0x22
  lwz       r4, 0x1C(r4)
  and.      r0, r4, r0
  beq-      .loc_0x24C
  lbz       r0, 0x22C(r30)
  cmplwi    r0, 0
  bne-      .loc_0x28C
  lbz       r0, 0x22D(r30)
  cmplwi    r0, 0
  bne-      .loc_0x28C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0x64DEC
  li        r0, 0x1
  stb       r0, 0x22D(r30)
  b         .loc_0x28C

.loc_0x24C:
  lis       r3, 0x101
  addi      r0, r3, 0x41
  and.      r0, r4, r0
  beq-      .loc_0x28C
  lbz       r0, 0x22C(r30)
  cmplwi    r0, 0
  beq-      .loc_0x28C
  lbz       r0, 0x22D(r30)
  cmplwi    r0, 0
  bne-      .loc_0x28C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0x64E30
  li        r0, 0x1
  stb       r0, 0x22D(r30)

.loc_0x28C:
  lwz       r4, 0x80(r30)
  lwz       r3, 0x1C(r4)
  rlwinm.   r0,r3,0,22,22
  beq-      .loc_0x2F8
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x2DC
  li        r0, 0
  mr        r3, r30
  stb       r0, 0x23C(r30)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x224(r3)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x56C

.loc_0x2DC:
  lwz       r3, 0xD4(r30)
  bl        0x6594
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0x64EA0
  b         .loc_0x56C

.loc_0x2F8:
  rlwinm.   r0,r3,0,27,27
  beq-      .loc_0x348
  lwz       r3, 0xD4(r30)
  lfs       f0, 0xE10(r2)
  lfs       f1, 0x24(r3)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x330
  bl        0x6548
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0x64ED8
  b         .loc_0x56C

.loc_0x330:
  bl        0x6544
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0x64EF0
  b         .loc_0x56C

.loc_0x348:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x56C
  andi.     r0, r3, 0x1100
  beq-      .loc_0x390
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  bne-      .loc_0x374
  li        r0, 0x1
  mr        r3, r30
  stb       r0, 0x228(r30)
  bl        0x2EE0

.loc_0x374:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1800
  li        r5, 0
  bl        -0x64F30
  lwz       r3, 0xD4(r30)
  bl        0x64EC
  b         .loc_0x56C

.loc_0x390:
  lwz       r3, 0x18(r4)
  rlwinm.   r0,r3,0,4,4
  bne-      .loc_0x3A4
  rlwinm.   r0,r3,0,28,28
  beq-      .loc_0x3F4

.loc_0x3A4:
  lwz       r0, 0x244(r30)
  cmpwi     r0, 0x1
  beq-      .loc_0x3BC
  lwz       r3, 0x84(r30)
  bl        0x4C0C
  b         .loc_0x56C

.loc_0x3BC:
  lwz       r3, 0x84(r30)
  lwz       r0, 0x20(r3)
  cmpwi     r0, 0
  bne-      .loc_0x56C
  lbz       r0, 0x23D(r30)
  cmplwi    r0, 0
  bne-      .loc_0x56C
  li        r0, 0x1
  li        r4, 0x1807
  stb       r0, 0x23D(r30)
  li        r5, 0
  lwz       r3, -0x67A8(r13)
  bl        -0x64F9C
  b         .loc_0x56C

.loc_0x3F4:
  rlwinm.   r0,r3,0,5,5
  bne-      .loc_0x404
  rlwinm.   r0,r3,0,29,29
  beq-      .loc_0x56C

.loc_0x404:
  lwz       r0, 0x244(r30)
  cmpwi     r0, 0x2
  beq-      .loc_0x41C
  lwz       r3, 0x84(r30)
  bl        0x4C18
  b         .loc_0x56C

.loc_0x41C:
  lwz       r3, 0x84(r30)
  lwz       r0, 0x20(r3)
  cmpwi     r0, 0
  bne-      .loc_0x56C
  lbz       r0, 0x23D(r30)
  cmplwi    r0, 0
  bne-      .loc_0x56C
  li        r0, 0x1
  li        r4, 0x1807
  stb       r0, 0x23D(r30)
  li        r5, 0
  lwz       r3, -0x67A8(r13)
  bl        -0x64FFC
  b         .loc_0x56C

.loc_0x454:
  lbz       r0, -0x663E(r13)
  cmplwi    r0, 0
  beq-      .loc_0x56C
  lwz       r3, 0x80(r30)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0x56C
  li        r0, 0
  stb       r0, -0x663E(r13)
  lwz       r0, 0x240(r30)
  cmpwi     r0, 0x1
  beq-      .loc_0x48C
  lfs       f0, -0x79D0(r13)
  stfs      f0, 0x250(r30)

.loc_0x48C:
  li        r0, 0x2
  li        r4, 0x1801
  stw       r0, 0x240(r30)
  li        r5, 0
  lwz       r3, -0x67A8(r13)
  bl        -0x65050
  lis       r3, 0x8050
  li        r0, 0x2
  mr        r5, r30
  lfs       f3, 0xEE4(r2)
  addi      r4, r3, 0x71A0
  lfs       f2, 0xE10(r2)
  lfs       f1, 0xE54(r2)
  mtctr     r0

.loc_0x4C4:
  lwz       r6, 0x1E8(r5)
  lfs       f4, 0x2C(r6)
  lfs       f5, 0xC(r6)
  fcmpo     cr0, f4, f2
  lfs       f6, 0x10(r6)
  bge-      .loc_0x508
  lfs       f0, 0xE50(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0xA8(r1)
  lwz       r0, 0xAC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x52C

.loc_0x508:
  lfs       f0, 0xE54(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0xB0(r1)
  lwz       r0, 0xB4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x52C:
  fcmpo     cr0, f4, f2
  fmadds    f5, f3, f0, f5
  bge-      .loc_0x53C
  fneg      f4, f4

.loc_0x53C:
  fmuls     f0, f4, f1
  addi      r5, r5, 0x4
  fctiwz    f0, f0
  stfd      f0, 0xB8(r1)
  lwz       r0, 0xBC(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fmadds    f6, f3, f0, f6
  stfs      f5, 0x14(r6)
  stfs      f6, 0x18(r6)
  bdnz+     .loc_0x4C4

.loc_0x56C:
  lwz       r0, 0x274(r30)
  mulli     r0, r0, 0x5
  stw       r0, 0x27C(r30)
  lwz       r0, 0x278(r30)
  mulli     r0, r0, 0x5
  stw       r0, 0x280(r30)
  lbz       r3, 0x23D(r30)
  cmplwi    r3, 0
  beq-      .loc_0x5AC
  addi      r0, r3, 0x1
  stb       r0, 0x23D(r30)
  lbz       r0, 0x23D(r30)
  cmplwi    r0, 0xF
  ble-      .loc_0x5AC
  li        r0, 0
  stb       r0, 0x23D(r30)

.loc_0x5AC:
  lwz       r3, 0x1F8(r30)
  lwz       r0, 0x34(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x608
  lwz       r3, 0x10(r3)
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x608
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  bne-      .loc_0x608
  li        r3, 0
  li        r0, 0x1
  stb       r3, 0x228(r30)
  mr        r3, r30
  lwz       r4, 0x1F8(r30)
  stw       r0, 0x34(r4)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  bl        0xB47AC

.loc_0x608:
  lwz       r3, 0xC0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xBC(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x7C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xD4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC8(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xD0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  bl        0x59D4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C8
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x84(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1802
  li        r5, 0
  bl        -0x65274

.loc_0x6C8:
  lwz       r0, 0x240(r30)
  cmpwi     r0, 0x3
  beq-      .loc_0x6F8
  bge-      .loc_0x70C
  cmpwi     r0, 0x1
  bge-      .loc_0x6E4
  b         .loc_0x70C

.loc_0x6E4:
  mr        r3, r30
  bl        0x21F8
  mr        r3, r30
  bl        0x23E4
  b         .loc_0x9C8

.loc_0x6F8:
  mr        r3, r30
  bl        0x23D8
  mr        r3, r30
  bl        0x243C
  b         .loc_0x9C8

.loc_0x70C:
  lfs       f1, 0x250(r30)
  lfs       f0, 0xE20(r2)
  fadds     f0, f1, f0
  stfs      f0, 0x250(r30)
  lbz       r0, 0x22B(r30)
  cmplwi    r0, 0
  beq-      .loc_0x9A4
  lfs       f1, 0xEE8(r2)
  lfs       f0, 0x250(r30)
  fcmpu     cr0, f1, f0
  bne-      .loc_0x9A4
  li        r0, 0
  stb       r0, 0x22B(r30)
  lwz       r3, 0x1F8(r30)
  lwz       r0, 0x2C(r3)
  cmpwi     r0, 0
  bne-      .loc_0x874
  lwz       r3, 0x24(r3)
  li        r0, 0x1
  lfs       f0, 0xEBC(r2)
  stw       r3, 0x284(r30)
  lwz       r3, 0x210(r30)
  stb       r0, 0xAC(r3)
  lwz       r3, 0x1F8(r30)
  lwz       r0, 0x24(r3)
  cmpwi     r0, 0x64
  blt-      .loc_0x780
  lfs       f0, 0xEC0(r2)
  b         .loc_0x78C

.loc_0x780:
  cmpwi     r0, 0xA
  blt-      .loc_0x78C
  lfs       f0, 0xE8C(r2)

.loc_0x78C:
  lwz       r4, 0x200(r30)
  lis       r3, 0x7269
  addi      r6, r3, 0x5F63
  li        r5, 0x506F
  stfs      f0, 0x14(r4)
  lwz       r3, 0x7C(r30)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r4, 0x4
  mr        r28, r3
  bl        -0x364CE4
  mr        r4, r28
  addi      r3, r1, 0x74
  li        r5, 0
  bl        -0x364A18
  lfs       f1, 0x28(r28)
  mr        r4, r28
  lfs       f0, 0x20(r28)
  addi      r3, r1, 0x68
  lfs       f2, 0x74(r1)
  li        r5, 0
  fsubs     f0, f1, f0
  lfs       f1, 0xE28(r2)
  fmadds    f0, f1, f0, f2
  stfs      f0, 0x18(r1)
  bl        -0x364A44
  lfs       f1, 0x2C(r28)
  lis       r3, 0x804C
  lfs       f0, 0x24(r28)
  addi      r0, r3, 0x1514
  lwz       r3, 0x18(r1)
  addi      r4, r1, 0x9C
  fsubs     f0, f1, f0
  lfs       f2, 0x6C(r1)
  lfs       f1, 0xE28(r2)
  stw       r3, 0x10(r1)
  fmadds    f1, f1, f0, f2
  lfs       f0, 0x10(r1)
  stw       r0, 0xA4(r1)
  stfs      f1, 0x1C(r1)
  lwz       r0, 0x1C(r1)
  stfs      f0, 0x9C(r1)
  stw       r0, 0x14(r1)
  lfs       f0, 0x14(r1)
  stfs      f0, 0xA0(r1)
  lwz       r3, 0x200(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1873
  li        r5, 0
  bl        -0x6541C
  b         .loc_0x99C

.loc_0x874:
  cmpwi     r0, 0x1
  bne-      .loc_0x99C
  lwz       r3, 0x28(r3)
  li        r0, 0x1
  lfs       f0, 0xEBC(r2)
  stw       r3, 0x288(r30)
  lwz       r3, 0x214(r30)
  stb       r0, 0xAC(r3)
  lwz       r3, 0x1F8(r30)
  lwz       r0, 0x28(r3)
  cmpwi     r0, 0x64
  blt-      .loc_0x8AC
  lfs       f0, 0xEC0(r2)
  b         .loc_0x8B8

.loc_0x8AC:
  cmpwi     r0, 0xA
  blt-      .loc_0x8B8
  lfs       f0, 0xE8C(r2)

.loc_0x8B8:
  lwz       r4, 0x200(r30)
  lis       r3, 0x7569
  addi      r6, r3, 0x5F63
  li        r5, 0x506C
  stfs      f0, 0x14(r4)
  lwz       r3, 0x7C(r30)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r4, 0x4
  mr        r28, r3
  bl        -0x364E10
  mr        r4, r28
  addi      r3, r1, 0x5C
  li        r5, 0
  bl        -0x364B44
  lfs       f1, 0x28(r28)
  mr        r4, r28
  lfs       f0, 0x20(r28)
  addi      r3, r1, 0x50
  lfs       f2, 0x5C(r1)
  li        r5, 0
  fsubs     f0, f1, f0
  lfs       f1, 0xE28(r2)
  fmadds    f0, f1, f0, f2
  stfs      f0, 0x18(r1)
  bl        -0x364B70
  lfs       f1, 0x2C(r28)
  lis       r3, 0x804C
  lfs       f0, 0x24(r28)
  addi      r0, r3, 0x1514
  lwz       r3, 0x18(r1)
  addi      r4, r1, 0x90
  fsubs     f0, f1, f0
  lfs       f2, 0x54(r1)
  lfs       f1, 0xE28(r2)
  stw       r3, 0x8(r1)
  fmadds    f1, f1, f0, f2
  lfs       f0, 0x8(r1)
  stw       r0, 0x98(r1)
  stfs      f1, 0x1C(r1)
  lwz       r0, 0x1C(r1)
  stfs      f0, 0x90(r1)
  stw       r0, 0xC(r1)
  lfs       f0, 0xC(r1)
  stfs      f0, 0x94(r1)
  lwz       r3, 0x200(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1873
  li        r5, 0
  bl        -0x65548

.loc_0x99C:
  mr        r3, r30
  bl        0x2DD4

.loc_0x9A4:
  lfs       f1, 0x250(r30)
  lfs       f0, 0xEEC(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x9C8
  lwz       r3, 0x200(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x9C8:
  lfs       f0, 0x26C(r30)
  lfs       f5, 0x243C(r2)
  lwz       r3, 0xC0(r30)
  fadds     f3, f0, f5
  lfs       f1, 0xE10(r2)
  lfs       f0, 0x2440(r2)
  lwz       r3, 0x8(r3)
  fadds     f2, f1, f0
  lfs       f4, 0x2434(r2)
  stfs      f3, 0x140(r3)
  lfs       f3, 0x2438(r2)
  stfs      f2, 0x144(r3)
  lfs       f0, 0xE20(r2)
  lfs       f1, 0x26C(r30)
  lwz       r3, 0x7C(r30)
  fadds     f1, f1, f5
  lwz       r3, 0x8(r3)
  stfs      f1, 0x140(r3)
  stfs      f2, 0x144(r3)
  lfs       f1, 0x26C(r30)
  lwz       r3, 0xBC(r30)
  fadds     f1, f1, f5
  lwz       r3, 0x8(r3)
  stfs      f1, 0x140(r3)
  stfs      f2, 0x144(r3)
  lfs       f1, 0x26C(r30)
  lwz       r3, 0xD0(r30)
  fadds     f1, f1, f5
  lwz       r3, 0x8(r3)
  stfs      f1, 0x140(r3)
  stfs      f2, 0x144(r3)
  lfs       f1, -0x79BC(r13)
  lwz       r3, 0xC0(r30)
  fmuls     f2, f1, f4
  lwz       r3, 0x8(r3)
  fmuls     f1, f1, f3
  stfs      f2, 0x138(r3)
  stfs      f1, 0x13C(r3)
  lfs       f1, -0x79BC(r13)
  lwz       r3, 0x7C(r30)
  fmuls     f2, f1, f4
  lwz       r3, 0x8(r3)
  fmuls     f1, f1, f3
  stfs      f2, 0x138(r3)
  stfs      f1, 0x13C(r3)
  lfs       f1, -0x79BC(r13)
  lwz       r3, 0xBC(r30)
  fmuls     f2, f1, f4
  lwz       r3, 0x8(r3)
  fmuls     f1, f1, f3
  stfs      f2, 0x138(r3)
  stfs      f1, 0x13C(r3)
  lfs       f1, -0x79BC(r13)
  lwz       r3, 0xD0(r30)
  fmuls     f2, f1, f4
  lwz       r3, 0x8(r3)
  fmuls     f1, f1, f3
  stfs      f2, 0x138(r3)
  stfs      f1, 0x13C(r3)
  lfs       f2, -0x79BC(r13)
  lfs       f1, 0x26C(r30)
  fdivs     f3, f0, f2
  lwz       r3, 0xE0(r30)
  fneg      f0, f1
  stfs      f3, 0xCC(r3)
  stfs      f3, 0xD0(r3)
  fdivs     f30, f0, f2
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f4, 0xE20(r2)
  lfs       f0, -0x79BC(r13)
  lfs       f1, 0xEFC(r2)
  fdivs     f3, f4, f0
  lfs       f0, 0xEF8(r2)
  lfs       f5, 0xEF4(r2)
  lfs       f2, 0xEF0(r2)
  lwz       r3, 0xE0(r30)
  fmadds    f0, f1, f30, f0
  fsubs     f3, f4, f3
  stfs      f0, 0xD4(r3)
  fnmsubs   f1, f5, f3, f2
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x84(r30)
  lfs       f4, 0xE10(r2)
  lwz       r3, 0x20(r3)
  subfic    r0, r3, 0x1
  cntlzw    r0, r0
  rlwinm.   r0,r0,27,24,31
  beq-      .loc_0xB48
  lfs       f4, 0xE94(r2)

.loc_0xB48:
  cmpwi     r3, 0x2
  bne-      .loc_0xB54
  lfs       f4, 0xE88(r2)

.loc_0xB54:
  lfs       f2, 0x230(r30)
  lfs       f3, 0xED8(r2)
  fsubs     f1, f4, f2
  lfs       f0, 0xE78(r2)
  fmadds    f1, f3, f1, f2
  stfs      f1, 0x230(r30)
  lfs       f1, 0x230(r30)
  fsubs     f1, f1, f4
  fabs      f1, f1
  frsp      f1, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xB88
  stfs      f4, 0x230(r30)

.loc_0xB88:
  lfs       f2, 0xF00(r2)
  lfs       f1, 0x230(r30)
  lwz       r3, 0xF0(r30)
  lfs       f0, 0xE10(r2)
  fadds     f1, f2, f1
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x2F8(r30)
  lfs       f0, 0x308(r30)
  lfs       f3, 0x2FC(r30)
  lfs       f2, 0x30C(r30)
  fadds     f0, f1, f0
  lwz       r3, 0x100(r30)
  fadds     f1, f3, f2
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x300(r30)
  lfs       f0, 0x310(r30)
  lfs       f3, 0x304(r30)
  lfs       f2, 0x314(r30)
  fadds     f0, f1, f0
  lwz       r3, 0x104(r30)
  fadds     f1, f3, f2
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x22D(r30)
  cmplwi    r0, 0
  beq-      .loc_0xDC4
  lfs       f2, 0x260(r30)
  lfs       f1, 0x264(r30)
  lfs       f0, 0xE48(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x260(r30)
  lfs       f1, 0x260(r30)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xC60
  lfs       f0, 0xE10(r2)
  li        r3, 0
  li        r0, 0x1
  stfs      f0, 0x260(r30)
  stb       r3, 0x22D(r30)
  stb       r0, 0x22E(r30)

.loc_0xC60:
  lbz       r0, 0x22C(r30)
  cmplwi    r0, 0
  beq-      .loc_0xD0C
  lfs       f2, 0x260(r30)
  lfs       f0, 0xE10(r2)
  lfs       f1, 0xF04(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0xCAC
  lfs       f0, 0xE50(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0xB8(r1)
  lwz       r0, 0xBC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0xCD0

.loc_0xCAC:
  lfs       f0, 0xE54(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0xB0(r1)
  lwz       r0, 0xB4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0xCD0:
  fmuls     f0, f1, f0
  stfs      f0, 0x25C(r30)
  lbz       r0, 0x22E(r30)
  cmplwi    r0, 0
  beq-      .loc_0xDAC
  lfs       f1, 0x260(r30)
  lfs       f0, 0xF08(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xDAC
  li        r0, 0
  mr        r3, r30
  stb       r0, 0x22C(r30)
  stb       r0, 0x22E(r30)
  bl        0x2D9C
  b         .loc_0xDAC

.loc_0xD0C:
  lfs       f2, 0x260(r30)
  lfs       f0, 0xE10(r2)
  lfs       f1, 0xF0C(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0xD4C
  lfs       f0, 0xE50(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0xB8(r1)
  lwz       r0, 0xBC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0xD70

.loc_0xD4C:
  lfs       f0, 0xE54(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0xB0(r1)
  lwz       r0, 0xB4(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0xD70:
  fmuls     f0, f1, f0
  stfs      f0, 0x25C(r30)
  lbz       r0, 0x22E(r30)
  cmplwi    r0, 0
  beq-      .loc_0xDAC
  lfs       f1, 0x260(r30)
  lfs       f0, 0xF08(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xDAC
  li        r3, 0
  li        r0, 0x1
  stb       r3, 0x22E(r30)
  mr        r3, r30
  stb       r0, 0x22C(r30)
  bl        0x2CF8

.loc_0xDAC:
  lwz       r3, 0x108(r30)
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0x10C(r30)
  stb       r0, 0xB0(r3)
  b         .loc_0xE4C

.loc_0xDC4:
  lwz       r3, 0x20C(r30)
  bl        -0x9C0E8
  lfs       f0, 0xF10(r2)
  mr        r31, r30
  li        r28, 0
  fmuls     f0, f0, f1
  fctiwz    f31, f0

.loc_0xDE0:
  lwz       r3, 0x108(r31)
  stfd      f31, 0xB8(r1)
  lwz       r12, 0x0(r3)
  lwz       r4, 0xBC(r1)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r31, r31, 0x4
  cmpwi     r28, 0x2
  blt+      .loc_0xDE0
  lbz       r0, 0x22C(r30)
  cmplwi    r0, 0
  bne-      .loc_0xE34
  lwz       r3, 0x108(r30)
  li        r4, 0
  li        r0, 0x1
  stb       r4, 0xB0(r3)
  lwz       r3, 0x10C(r30)
  stb       r0, 0xB0(r3)
  b         .loc_0xE4C

.loc_0xE34:
  lwz       r3, 0x108(r30)
  li        r4, 0x1
  li        r0, 0
  stb       r4, 0xB0(r3)
  lwz       r3, 0x10C(r30)
  stb       r0, 0xB0(r3)

.loc_0xE4C:
  lfs       f1, 0x318(r30)
  lfs       f0, 0x25C(r30)
  lwz       r3, 0x110(r30)
  fadds     f0, f1, f0
  lfs       f1, 0x31C(r30)
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xE8(r30)
  addi      r3, r1, 0x44
  li        r5, 0
  bl        -0x3650CC
  lfs       f31, 0x44(r1)
  addi      r3, r1, 0x38
  lfs       f30, 0x48(r1)
  li        r5, 0x3
  lwz       r4, 0xE8(r30)
  bl        -0x3650E4
  lwz       r4, 0x7C(r30)
  addi      r3, r1, 0x2C
  stfs      f31, 0x80(r1)
  li        r5, 0
  lfs       f1, 0x3C(r1)
  stfs      f30, 0x84(r1)
  lfs       f0, 0x38(r1)
  lwz       r6, 0x18(r4)
  lwz       r4, 0x80(r1)
  stfs      f0, 0x88(r1)
  lwz       r0, 0x84(r1)
  stw       r4, 0x1C(r6)
  lwz       r4, 0x88(r1)
  stw       r0, 0x20(r6)
  stfs      f1, 0x8C(r1)
  lwz       r0, 0x8C(r1)
  stw       r4, 0x24(r6)
  stw       r0, 0x28(r6)
  lwz       r4, 0xE4(r30)
  bl        -0x365134
  lfs       f30, 0x2C(r1)
  addi      r3, r1, 0x20
  lfs       f31, 0x30(r1)
  li        r5, 0x3
  lwz       r4, 0xE4(r30)
  bl        -0x36514C
  lfs       f0, 0x20(r1)
  mr        r31, r30
  lfs       f1, 0x24(r1)
  li        r28, 0
  stfs      f30, 0x218(r30)
  stfs      f31, 0x21C(r30)
  stfs      f0, 0x220(r30)
  stfs      f1, 0x224(r30)

.loc_0xF28:
  lwz       r3, 0x1F0(r31)
  lwz       r4, 0x274(r31)
  bl        -0x458C
  lwz       r3, 0x210(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r31, r31, 0x4
  cmpwi     r28, 0x2
  blt+      .loc_0xF28
  lfs       f1, 0xF10(r2)
  lfs       f0, -0x79B4(r13)
  lwz       r3, 0xD0(r30)
  fmuls     f0, f1, f0
  lwz       r3, 0x8(r3)
  fctiwz    f0, f0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  stfd      f0, 0xB8(r1)
  lwz       r4, 0xBC(r1)
  mtctr     r12
  bctrl     
  li        r28, 0
  mr        r31, r30

.loc_0xF90:
  lwz       r3, 0xF4(r31)
  li        r4, 0xFF
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r31, r31, 0x4
  cmpwi     r28, 0x3
  blt+      .loc_0xF90
  li        r27, 0
  mr        r28, r30

.loc_0xFC0:
  li        r31, 0
  lwz       r29, 0x1F0(r28)

.loc_0xFC8:
  lwz       r3, 0x0(r29)
  li        r4, 0xFF
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1
  addi      r29, r29, 0x4
  cmpwi     r31, 0x3
  blt+      .loc_0xFC8
  addi      r27, r27, 0x1
  addi      r28, r28, 0x4
  cmpwi     r27, 0x2
  blt+      .loc_0xFC0
  lwz       r0, 0x240(r30)
  cmpwi     r0, 0x1
  bge-      .loc_0x1038
  lfs       f2, 0xE20(r2)
  lfs       f0, 0xF14(r2)
  stfs      f2, 0x238(r30)
  lfs       f1, 0x258(r30)
  fadds     f0, f1, f0
  stfs      f0, 0x258(r30)
  lfs       f0, 0x258(r30)
  fcmpo     cr0, f0, f2
  ble-      .loc_0x106C
  stfs      f2, 0x258(r30)
  b         .loc_0x106C

.loc_0x1038:
  lfs       f2, 0x238(r30)
  lfs       f0, 0xF18(r2)
  lfs       f1, 0xE78(r2)
  fmuls     f2, f2, f0
  lfs       f0, 0xE10(r2)
  stfs      f2, 0x238(r30)
  lfs       f2, 0x258(r30)
  fsubs     f1, f2, f1
  stfs      f1, 0x258(r30)
  lfs       f1, 0x258(r30)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x106C
  stfs      f0, 0x258(r30)

.loc_0x106C:
  lfs       f1, 0xF10(r2)
  lfs       f0, 0x238(r30)
  lwz       r3, 0xEC(r30)
  fmuls     f0, f1, f0
  lwz       r12, 0x0(r3)
  fctiwz    f0, f0
  lwz       r12, 0x24(r12)
  stfd      f0, 0xB8(r1)
  lwz       r4, 0xBC(r1)
  mtctr     r12
  bctrl     
  mr        r28, r30
  li        r27, 0
  li        r29, 0
  b         .loc_0x1184

.loc_0x10A8:
  lwz       r3, 0x140(r28)
  lfs       f0, -0x79C4(r13)
  stfs      f0, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x140(r28)
  li        r4, 0x4
  bl        -0x3655F4
  lwz       r3, 0x12C(r28)
  lfs       f0, -0x79C4(r13)
  stfs      f0, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x12C(r28)
  li        r4, 0x4
  bl        -0x365620
  lwz       r0, 0x94(r30)
  cmpw      r27, r0
  beq-      .loc_0x1144
  lwz       r3, 0x88(r30)
  lfs       f1, 0xF10(r2)
  lfs       f0, 0x258(r30)
  lwzx      r3, r3, r29
  fmuls     f0, f1, f0
  lwz       r3, 0x4(r3)
  fctiwz    f0, f0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  stfd      f0, 0xB8(r1)
  lwz       r4, 0xBC(r1)
  mtctr     r12
  bctrl     
  b         .loc_0x1178

.loc_0x1144:
  lwz       r3, 0x88(r30)
  li        r4, 0xFF
  lwzx      r3, r3, r29
  lwz       r3, 0x4(r3)
  lbz       r5, 0xB2(r3)
  cmplwi    r5, 0xC8
  bge-      .loc_0x1168
  addi      r0, r5, 0x32
  rlwinm    r4,r0,0,24,31

.loc_0x1168:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x1178:
  addi      r28, r28, 0x4
  addi      r29, r29, 0x4
  addi      r27, r27, 0x1

.loc_0x1184:
  lha       r0, 0x8E(r30)
  cmpw      r27, r0
  blt+      .loc_0x10A8
  lwz       r3, 0x84(r30)
  lwz       r0, 0x20(r3)
  cmpwi     r0, 0
  bne-      .loc_0x11C8
  lfs       f2, 0x234(r30)
  lfs       f1, 0xE6C(r2)
  lfs       f0, 0xE20(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x234(r30)
  lfs       f1, 0x234(r30)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x11D8
  stfs      f0, 0x234(r30)
  b         .loc_0x11D8

.loc_0x11C8:
  lfs       f1, 0x234(r30)
  lfs       f0, 0xE98(r2)
  fmuls     f0, f1, f0
  stfs      f0, 0x234(r30)

.loc_0x11D8:
  lbz       r0, -0x6634(r13)
  cmplwi    r0, 0
  beq-      .loc_0x121C
  li        r0, 0
  lis       r3, 0x8051
  stb       r0, -0x6634(r13)
  lfsu      f0, 0x4044(r3)
  lwz       r4, 0x84(r30)
  stfs      f0, 0x0(r4)
  lfs       f0, 0x4(r3)
  stfs      f0, 0x4(r4)
  lfs       f0, 0x8(r3)
  stfs      f0, 0x8(r4)
  lfs       f0, 0xC(r3)
  stfs      f0, 0xC(r4)
  lfs       f0, 0x10(r3)
  stfs      f0, 0x10(r4)

.loc_0x121C:
  li        r3, 0
  psq_l     f31,0xF8(r1),0,0
  lfd       f31, 0xF0(r1)
  psq_l     f30,0xE8(r1),0,0
  lfd       f30, 0xE0(r1)
  lmw       r27, 0xCC(r1)
  lwz       r0, 0x104(r1)
  mtlr      r0
  addi      r1, r1, 0x100
  blr
*/
}

/*
 * --INFO--
 * Address:	8039E424
 * Size:	000030
 */
void update__Q28Morimura19TVsSelectListScreenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
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
 * Address:	8039E454
 * Size:	000AF0
 */
void doDraw__Q28Morimura9TVsSelectFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x6E0(r1)
  mflr      r0
  stw       r0, 0x6E4(r1)
  stfd      f31, 0x6D0(r1)
  psq_st    f31,0x6D8(r1),0,0
  stfd      f30, 0x6C0(r1)
  psq_st    f30,0x6C8(r1),0,0
  stfd      f29, 0x6B0(r1)
  psq_st    f29,0x6B8(r1),0,0
  stfd      f28, 0x6A0(r1)
  psq_st    f28,0x6A8(r1),0,0
  stmw      r26, 0x688(r1)
  lis       r5, 0x8051
  mr        r27, r3
  subi      r3, r5, 0xDD0
  mr        r28, r4
  bl        -0x340888
  lwz       r0, 0x240(r27)
  cmpwi     r0, 0
  ble-      .loc_0x46C
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  beq-      .loc_0x68
  li        r3, 0x1
  li        r4, 0
  bl        -0x2B52CC

.loc_0x68:
  addi      r3, r28, 0xBC
  lwz       r12, 0xBC(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  bl        -0x2B537C
  li        r3, 0x1
  bl        -0x2B53B0
  lwz       r3, 0x1E4(r27)
  li        r4, 0
  lfs       f1, 0xE10(r2)
  li        r5, 0
  lwz       r12, 0x0(r3)
  li        r6, 0
  fmr       f2, f1
  lfs       f3, 0xEDC(r2)
  lwz       r12, 0xEC(r12)
  lfs       f4, 0xEE0(r2)
  mtctr     r12
  bctrl     
  bl        0x899F0
  bl        0x8998C
  li        r3, 0
  bl        -0x2B53F0
  li        r3, 0x1
  li        r4, 0
  bl        -0x2B523C
  li        r3, 0x1
  li        r4, 0x1
  li        r5, 0
  li        r6, 0
  bl        -0x2B5464
  li        r3, 0
  bl        -0x2B95A8
  li        r3, 0
  bl        -0x2B61F8
  li        r3, 0x1
  bl        -0x2B76F0
  li        r5, 0
  li        r0, 0xFF
  stb       r5, 0x30(r1)
  addi      r4, r1, 0x34
  li        r3, 0x4
  stb       r5, 0x31(r1)
  stb       r5, 0x32(r1)
  stb       r0, 0x33(r1)
  lwz       r0, 0x30(r1)
  stw       r0, 0x34(r1)
  bl        -0x2B780C
  li        r3, 0x4
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  li        r8, 0
  li        r9, 0x2
  bl        -0x2B7700
  li        r3, 0
  bl        -0x2B8A00
  li        r3, 0x1
  bl        -0x2B59F8
  li        r3, 0
  li        r4, 0xFF
  li        r5, 0xFF
  li        r6, 0x4
  bl        -0x2B5BA8
  li        r3, 0
  li        r4, 0x4
  bl        -0x2B6154
  addi      r3, r1, 0xA8
  bl        -0x2B4338
  addi      r3, r1, 0xA8
  li        r4, 0
  bl        -0x2B506C
  addi      r3, r1, 0xA8
  li        r4, 0x1E
  li        r5, 0x1
  bl        -0x2B4FA8
  li        r3, 0
  bl        -0x2B4FE4
  bl        -0x2B9F30
  li        r3, 0x9
  li        r4, 0x1
  bl        -0x2BA388
  li        r3, 0
  li        r4, 0x9
  li        r5, 0x1
  li        r6, 0x4
  li        r7, 0
  bl        -0x2B9F1C
  li        r3, 0x80
  li        r4, 0
  li        r5, 0x4
  bl        -0x2B8CAC
  lfs       f2, 0xE10(r2)
  lis       r4, 0xCC01
  lfs       f1, 0xF1C(r2)
  addi      r3, r1, 0x3A8
  stfs      f2, -0x8000(r4)
  lfs       f0, 0xF20(r2)
  stfs      f2, -0x8000(r4)
  stfs      f2, -0x8000(r4)
  stfs      f1, -0x8000(r4)
  stfs      f2, -0x8000(r4)
  stfs      f2, -0x8000(r4)
  stfs      f1, -0x8000(r4)
  stfs      f0, -0x8000(r4)
  stfs      f2, -0x8000(r4)
  stfs      f2, -0x8000(r4)
  stfs      f0, -0x8000(r4)
  stfs      f2, -0x8000(r4)
  bl        -0x364BA0
  addi      r30, r1, 0x510
  mr        r3, r30
  bl        -0x364BAC
  lis       r4, 0x8049
  addi      r3, r1, 0x240
  addi      r4, r4, 0x5184
  bl        -0x3642D4
  addi      r3, r1, 0x3A8
  addi      r4, r1, 0x240
  bl        .loc_0xAF0
  addi      r3, r1, 0x240
  li        r4, -0x1
  bl        -0x3637D0
  lis       r4, 0x8049
  addi      r3, r1, 0xD8
  addi      r4, r4, 0x5184
  bl        -0x3642FC
  mr        r3, r30
  addi      r4, r1, 0xD8
  bl        .loc_0xAF0
  addi      r3, r1, 0xD8
  li        r4, -0x1
  bl        -0x3637F8
  li        r3, 0x1
  li        r4, 0xFF
  bl        -0x2B53F8
  lfs       f31, 0xE10(r2)
  mr        r26, r27
  addi      r29, r1, 0x3A8
  li        r31, 0

.loc_0x2A4:
  lwz       r3, 0x1E8(r26)
  lfs       f0, 0x30(r3)
  fcmpo     cr0, f0, f31
  ble-      .loc_0x354
  li        r0, 0x1
  lfs       f6, 0xF24(r2)
  stb       r0, 0x22A(r27)
  mr        r3, r29
  lfs       f3, 0xEE0(r2)
  li        r4, 0x4
  lwz       r5, 0x1E8(r26)
  lfs       f5, 0x294(r27)
  lfs       f1, 0x10(r5)
  lfs       f0, 0x29C(r27)
  fsubs     f1, f1, f5
  lfs       f2, 0x2A4(r27)
  lfs       f4, 0xC(r5)
  fsubs     f0, f0, f5
  lfs       f8, 0x290(r27)
  fadds     f1, f2, f1
  lfs       f2, 0x298(r27)
  fsubs     f4, f4, f8
  lfs       f5, 0x2A0(r27)
  fdivs     f0, f1, f0
  lfs       f7, 0x30(r5)
  fadds     f4, f5, f4
  fsubs     f1, f2, f8
  fmuls     f29, f6, f7
  fmuls     f30, f3, f0
  fdivs     f28, f4, f1
  bl        -0x365AB4
  lfs       f1, 0xE28(r2)
  fmr       f3, f29
  lfs       f0, 0xEDC(r2)
  fmr       f4, f29
  fmuls     f1, f1, f29
  mr        r3, r29
  fmuls     f0, f0, f28
  li        r4, 0
  li        r5, 0
  fsubs     f2, f30, f1
  fsubs     f1, f0, f1
  li        r6, 0
  bl        -0x362BF0

.loc_0x354:
  addi      r31, r31, 0x1
  addi      r29, r29, 0x168
  cmpwi     r31, 0x2
  addi      r26, r26, 0x4
  blt+      .loc_0x2A4
  li        r3, 0x1
  li        r4, 0xFF
  bl        -0x2B54D8
  lwz       r3, 0xD8(r27)
  lwz       r3, 0x20(r3)
  bl        -0x36B3DC
  li        r3, 0
  li        r4, 0
  bl        -0x2B54F0
  li        r3, 0
  bl        -0x2B568C
  li        r3, 0x1
  bl        -0x2B56C0
  lwz       r3, 0xD8(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  li        r3, 0
  li        r4, 0xFF
  bl        -0x2B5520
  li        r3, 0x1
  bl        -0x2B56BC
  li        r3, 0
  bl        -0x2B56F0
  addi      r3, r28, 0xBC
  lwz       r12, 0xBC(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x1E4(r27)
  li        r4, 0
  lfs       f1, 0xE10(r2)
  li        r5, 0
  lwz       r12, 0x0(r3)
  li        r6, 0
  fmr       f2, f1
  lfs       f3, 0xEDC(r2)
  lwz       r12, 0xEC(r12)
  lfs       f4, 0xEE0(r2)
  mtctr     r12
  bctrl     
  bl        -0x2B6F04
  lwz       r3, 0xD8(r27)
  li        r4, 0
  li        r5, 0
  li        r7, 0
  lwz       r3, 0x20(r3)
  li        r8, 0
  lwz       r6, 0x20(r3)
  lbz       r6, 0x0(r6)
  bl        -0x36B208
  li        r3, 0x1
  bl        -0x2B5764
  addi      r3, r28, 0x190
  lwz       r12, 0x190(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  li        r4, -0x1
  bl        -0x3639D0
  addi      r3, r1, 0x3A8
  li        r4, -0x1
  bl        -0x3639DC

.loc_0x46C:
  addi      r31, r28, 0x190
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC0(r27)
  mr        r4, r28
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x21C(r27)
  lwz       r0, 0x224(r27)
  stw       r3, 0x80(r1)
  lwz       r3, 0x218(r27)
  stw       r0, 0x88(r1)
  lwz       r0, 0x220(r27)
  stw       r3, 0x7C(r1)
  lfs       f31, 0x80(r1)
  lfs       f0, 0x88(r1)
  stw       r0, 0x84(r1)
  fsubs     f1, f0, f31
  lfs       f30, 0x7C(r1)
  bl        -0x2DCDD8
  lfs       f0, 0x84(r1)
  mr        r30, r3
  fsubs     f1, f0, f30
  bl        -0x2DCDE8
  fmr       f1, f31
  mr        r29, r3
  bl        -0x2DCDF4
  fmr       f1, f30
  mr        r26, r3
  bl        -0x2DCE00
  mr        r4, r26
  mr        r5, r29
  mr        r6, r30
  bl        -0x2B5184
  lwz       r3, 0xBC(r27)
  mr        r4, r28
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  li        r3, 0
  li        r4, 0
  li        r5, 0x280
  li        r6, 0x1E0
  bl        -0x2B51B4
  lwz       r3, 0x7C(r27)
  mr        r4, r28
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x240(r27)
  cmpwi     r0, 0
  beq-      .loc_0x59C
  lwz       r3, 0xC4(r27)
  mr        r4, r28
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC8(r27)
  mr        r4, r28
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x59C:
  addi      r3, r28, 0xBC
  lwz       r12, 0xBC(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r29, 0
  mr        r26, r27

.loc_0x5B8:
  lwz       r3, 0x1F0(r26)
  bl        -0x4BC4
  addi      r29, r29, 0x1
  addi      r26, r26, 0x4
  cmpwi     r29, 0x2
  blt+      .loc_0x5B8
  lwz       r0, 0x240(r27)
  cmpwi     r0, 0x3
  blt-      .loc_0x768
  lfs       f31, 0xE70(r2)
  mr        r30, r27
  li        r29, 0

.loc_0x5E8:
  lwz       r26, 0x1E8(r30)
  lwz       r3, 0x8(r26)
  lfs       f0, 0xCC(r3)
  fcmpu     cr0, f31, f0
  bne-      .loc_0x758
  lwz       r3, 0x4(r26)
  li        r4, 0x4
  bl        -0x365D9C
  lwz       r3, 0x4(r26)
  li        r4, 0
  lfs       f1, 0xC(r26)
  li        r5, 0
  lwz       r12, 0x0(r3)
  li        r6, 0
  lfs       f2, 0xE88(r2)
  lfs       f0, 0x10(r26)
  lwz       r12, 0xE4(r12)
  fadds     f1, f1, f2
  fadds     f2, f0, f2
  mtctr     r12
  bctrl     
  lwz       r3, 0x4(r26)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x30(r26)
  li        r0, 0
  lfs       f1, 0xE6C(r2)
  lfs       f0, 0xE8C(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x30(r26)
  lwz       r3, 0x8(r26)
  stb       r0, 0xB0(r3)
  lfs       f1, 0x30(r26)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x680
  stfs      f0, 0x30(r26)

.loc_0x680:
  lbz       r0, 0x3C(r26)
  cmplwi    r0, 0
  beq-      .loc_0x758
  li        r0, 0
  li        r4, 0x1839
  stb       r0, 0x3C(r26)
  li        r5, 0
  lwz       r3, -0x67A8(r13)
  bl        -0x664C4
  lfs       f1, 0xC(r26)
  lis       r3, 0x804C
  lfs       f2, 0xE90(r2)
  lis       r5, 0x804C
  lfs       f0, 0x10(r26)
  li        r9, 0
  fsubs     f1, f1, f2
  addi      r0, r3, 0x14F0
  fsubs     f0, f0, f2
  lis       r4, 0x804E
  lis       r6, 0x804C
  lis       r3, 0x804E
  stfs      f1, 0x40(r1)
  addi      r11, r6, 0x1514
  addi      r10, r5, 0x14D8
  li        r7, 0x2
  stfs      f0, 0x44(r1)
  li        r6, 0x3
  lwz       r26, 0x40(r1)
  addi      r8, r4, 0x7458
  stw       r0, 0x8C(r1)
  li        r5, 0x4
  lwz       r12, 0x44(r1)
  addi      r0, r3, 0x566C
  stw       r26, 0x48(r1)
  addi      r3, r1, 0x8C
  addi      r4, r1, 0x70
  stw       r12, 0x4C(r1)
  lfs       f1, 0x48(r1)
  stw       r10, 0x8C(r1)
  lfs       f0, 0x4C(r1)
  stw       r8, 0x8C(r1)
  stw       r11, 0x78(r1)
  stfs      f1, 0x70(r1)
  stfs      f0, 0x74(r1)
  stb       r9, 0x90(r1)
  stb       r9, 0x91(r1)
  sth       r7, 0x94(r1)
  sth       r6, 0x96(r1)
  sth       r5, 0x98(r1)
  stw       r9, 0x9C(r1)
  stw       r9, 0xA0(r1)
  stw       r9, 0xA4(r1)
  stw       r0, 0x8C(r1)
  bl        0x1ADD0

.loc_0x758:
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0x2
  blt+      .loc_0x5E8

.loc_0x768:
  addi      r3, r28, 0x190
  lwz       r12, 0x190(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xD4(r27)
  mr        r4, r28
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xD0(r27)
  mr        r4, r28
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r3, r27
  li        r26, 0
  lwz       r12, 0x0(r27)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x224(r3)
  lbz       r0, 0xD4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x848
  mr        r3, r27
  li        r26, 0x1
  lwz       r12, 0x0(r27)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x224(r3)
  lbz       r0, 0xD5(r3)
  cmplwi    r0, 0
  beq-      .loc_0x828
  lbz       r3, 0x23C(r27)
  addi      r0, r3, 0x14
  stb       r0, 0x23C(r27)
  lbz       r0, 0x23C(r27)
  cmplwi    r0, 0xC8
  ble-      .loc_0x848
  li        r0, 0xC8
  stb       r0, 0x23C(r27)
  b         .loc_0x848

.loc_0x828:
  lbz       r3, 0x23C(r27)
  cmplwi    r3, 0x14
  ble-      .loc_0x840
  subi      r0, r3, 0x14
  stb       r0, 0x23C(r27)
  b         .loc_0x848

.loc_0x840:
  li        r0, 0
  stb       r0, 0x23C(r27)

.loc_0x848:
  rlwinm.   r0,r26,0,24,31
  beq-      .loc_0x914
  li        r0, -0x1
  li        r8, 0
  stw       r0, 0x3C(r1)
  mr        r3, r31
  lbz       r0, 0x23C(r27)
  addi      r4, r1, 0x20
  stb       r8, 0x3F(r1)
  addi      r5, r1, 0x24
  addi      r6, r1, 0x28
  addi      r7, r1, 0x2C
  stb       r8, 0x3C(r1)
  stb       r8, 0x3D(r1)
  stb       r8, 0x3E(r1)
  stb       r0, 0x3F(r1)
  lwz       r0, 0x3C(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x2C(r1)
  stw       r0, 0x28(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x20(r1)
  bl        -0x368668
  li        r3, 0
  bl        -0x2B5BA4
  bl        0x84524
  lhz       r26, 0x6(r3)
  bl        0x8451C
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f3, 0xE10(r2)
  mr        r3, r31
  stw       r4, 0x67C(r1)
  addi      r4, r1, 0x60
  lfd       f2, 0xF28(r2)
  stw       r0, 0x678(r1)
  lfd       f0, 0x678(r1)
  stw       r26, 0x684(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x680(r1)
  lfd       f0, 0x680(r1)
  fadds     f1, f3, f1
  stfs      f3, 0x60(r1)
  fsubs     f0, f0, f2
  stfs      f3, 0x64(r1)
  fadds     f0, f3, f0
  stfs      f1, 0x68(r1)
  stfs      f0, 0x6C(r1)
  bl        -0x368588
  li        r3, 0x1
  bl        -0x2B5C0C

.loc_0x914:
  lwz       r3, 0xD4(r27)
  lwz       r0, 0x18(r3)
  cmpwi     r0, 0
  beq-      .loc_0x9F8
  addi      r3, r28, 0xBC
  lwz       r12, 0xBC(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f31, 0xE28(r2)
  mr        r26, r27
  li        r30, 0

.loc_0x944:
  lbz       r0, 0x22C(r27)
  li        r3, 0
  cmplwi    r0, 0
  bne-      .loc_0x958
  li        r3, 0x6

.loc_0x958:
  add       r0, r30, r3
  lwz       r5, 0x114(r26)
  rlwinm    r3,r0,2,0,29
  lfs       f6, 0x320(r27)
  addi      r29, r3, 0x184
  lfs       f5, 0x8C(r5)
  lwzx      r3, r27, r29
  li        r4, 0
  lfs       f0, 0x9C(r5)
  li        r5, 0
  lfs       f3, 0x28(r3)
  li        r6, 0
  lfs       f1, 0x20(r3)
  lfs       f2, 0x2C(r3)
  fsubs     f3, f3, f1
  lfs       f1, 0x24(r3)
  lwz       r12, 0x0(r3)
  fsubs     f4, f2, f1
  lfs       f2, 0x324(r27)
  fnmsubs   f1, f31, f3, f5
  lwz       r12, 0xEC(r12)
  fnmsubs   f0, f31, f4, f0
  fadds     f1, f6, f1
  fadds     f2, f2, f0
  mtctr     r12
  bctrl     
  lwzx      r3, r27, r29
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  addi      r26, r26, 0x4
  cmpwi     r30, 0x6
  blt+      .loc_0x944
  addi      r3, r28, 0x190
  lwz       r12, 0x190(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x9F8:
  lbz       r3, 0x44(r27)
  li        r0, -0x1
  stw       r0, 0x38(r1)
  li        r0, 0
  subfic    r8, r3, 0xFF
  mr        r3, r31
  stb       r0, 0x38(r1)
  addi      r4, r1, 0x10
  addi      r5, r1, 0x14
  addi      r6, r1, 0x18
  stb       r0, 0x39(r1)
  addi      r7, r1, 0x1C
  stb       r0, 0x3A(r1)
  stb       r8, 0x3B(r1)
  lwz       r0, 0x38(r1)
  stw       r0, 0x8(r1)
  stw       r0, 0x1C(r1)
  stw       r0, 0x18(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  bl        -0x368810
  li        r3, 0
  bl        -0x2B5D4C
  bl        0x8437C
  lhz       r26, 0x6(r3)
  bl        0x84374
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f3, 0xE10(r2)
  mr        r3, r31
  stw       r4, 0x684(r1)
  addi      r4, r1, 0x50
  lfd       f2, 0xF28(r2)
  stw       r0, 0x680(r1)
  lfd       f0, 0x680(r1)
  stw       r26, 0x67C(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x678(r1)
  lfd       f0, 0x678(r1)
  fadds     f1, f3, f1
  stfs      f3, 0x50(r1)
  fsubs     f0, f0, f2
  stfs      f3, 0x54(r1)
  fadds     f0, f3, f0
  stfs      f1, 0x58(r1)
  stfs      f0, 0x5C(r1)
  bl        -0x368730
  li        r3, 0x1
  bl        -0x2B5DB4
  psq_l     f31,0x6D8(r1),0,0
  lfd       f31, 0x6D0(r1)
  psq_l     f30,0x6C8(r1),0,0
  lfd       f30, 0x6C0(r1)
  psq_l     f29,0x6B8(r1),0,0
  lfd       f29, 0x6B0(r1)
  psq_l     f28,0x6A8(r1),0,0
  lfd       f28, 0x6A0(r1)
  lmw       r26, 0x688(r1)
  lwz       r0, 0x6E4(r1)
  mtlr      r0
  addi      r1, r1, 0x6E0
  blr       

.loc_0xAF0:
*/
}

/*
 * --INFO--
 * Address:	8039EF44
 * Size:	0001D4
 */
void J2DPicture::operator= (const J2DPicture &)
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
  bl        .loc_0x1D4
  lwz       r3, 0x100(r31)
  lwz       r0, 0x104(r31)
  stw       r3, 0x100(r30)
  lwz       r3, 0x108(r31)
  stw       r0, 0x104(r30)
  lwz       r0, 0x10C(r31)
  stw       r3, 0x108(r30)
  lbz       r3, 0x110(r31)
  stw       r0, 0x10C(r30)
  lbz       r0, 0x111(r31)
  stb       r3, 0x110(r30)
  lwz       r3, 0x112(r31)
  stb       r0, 0x111(r30)
  lwz       r0, 0x116(r31)
  stw       r3, 0x112(r30)
  lwz       r3, 0x11A(r31)
  stw       r0, 0x116(r30)
  lwz       r0, 0x11E(r31)
  stw       r3, 0x11A(r30)
  lwz       r3, 0x124(r31)
  stw       r0, 0x11E(r30)
  lwz       r0, 0x128(r31)
  stw       r3, 0x124(r30)
  lwz       r3, 0x12C(r31)
  stw       r0, 0x128(r30)
  lwz       r0, 0x130(r31)
  stw       r3, 0x12C(r30)
  lwz       r3, 0x134(r31)
  stw       r0, 0x130(r30)
  lwz       r0, 0x138(r31)
  stw       r3, 0x134(r30)
  lwz       r3, 0x13C(r31)
  stw       r0, 0x138(r30)
  lwz       r0, 0x140(r31)
  stw       r3, 0x13C(r30)
  lwz       r3, 0x144(r31)
  stw       r0, 0x140(r30)
  lbz       r0, 0x148(r31)
  stw       r3, 0x144(r30)
  lbz       r3, 0x149(r31)
  stb       r0, 0x148(r30)
  lbz       r0, 0x14A(r31)
  stb       r3, 0x149(r30)
  lbz       r3, 0x14B(r31)
  stb       r0, 0x14A(r30)
  lbz       r0, 0x14C(r31)
  stb       r3, 0x14B(r30)
  lbz       r3, 0x14D(r31)
  stb       r0, 0x14C(r30)
  lbz       r0, 0x14E(r31)
  stb       r3, 0x14D(r30)
  lbz       r3, 0x14F(r31)
  stb       r0, 0x14E(r30)
  lbz       r0, 0x150(r31)
  stb       r3, 0x14F(r30)
  lbz       r3, 0x151(r31)
  stb       r0, 0x150(r30)
  lbz       r0, 0x152(r31)
  stb       r3, 0x151(r30)
  lbz       r3, 0x153(r31)
  stb       r0, 0x152(r30)
  lbz       r0, 0x154(r31)
  stb       r3, 0x153(r30)
  lbz       r3, 0x155(r31)
  stb       r0, 0x154(r30)
  lbz       r0, 0x156(r31)
  stb       r3, 0x155(r30)
  lbz       r3, 0x157(r31)
  stb       r0, 0x156(r30)
  lbz       r0, 0x158(r31)
  stb       r3, 0x157(r30)
  lbz       r3, 0x159(r31)
  stb       r0, 0x158(r30)
  lbz       r0, 0x15A(r31)
  stb       r3, 0x159(r30)
  lbz       r3, 0x15B(r31)
  stb       r0, 0x15A(r30)
  lbz       r0, 0x15C(r31)
  stb       r3, 0x15B(r30)
  lbz       r3, 0x15D(r31)
  stb       r0, 0x15C(r30)
  lbz       r0, 0x15E(r31)
  stb       r3, 0x15D(r30)
  lbz       r3, 0x15F(r31)
  stb       r0, 0x15E(r30)
  lbz       r0, 0x160(r31)
  stb       r3, 0x15F(r30)
  lbz       r3, 0x161(r31)
  stb       r0, 0x160(r30)
  lbz       r0, 0x162(r31)
  stb       r3, 0x161(r30)
  lbz       r3, 0x163(r31)
  stb       r0, 0x162(r30)
  lbz       r0, 0x164(r31)
  stb       r3, 0x163(r30)
  lbz       r3, 0x165(r31)
  stb       r0, 0x164(r30)
  lbz       r0, 0x166(r31)
  stb       r3, 0x165(r30)
  stb       r0, 0x166(r30)
  lbz       r0, 0x167(r31)
  mr        r3, r30
  stb       r0, 0x167(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x1D4:
*/
}

/*
 * --INFO--
 * Address:	8039F118
 * Size:	00021C
 */
void J2DPane::operator= (const J2DPane &)
{
/*
.loc_0x0:
  lhz       r5, 0x4(r4)
  lwz       r0, 0x8(r4)
  sth       r5, 0x4(r3)
  lwz       r5, 0x14(r4)
  stw       r0, 0x8(r3)
  lwz       r0, 0x10(r4)
  stw       r5, 0x14(r3)
  lwz       r5, 0x1C(r4)
  stw       r0, 0x10(r3)
  lwz       r0, 0x18(r4)
  stw       r5, 0x1C(r3)
  lwz       r5, 0x20(r4)
  stw       r0, 0x18(r3)
  lwz       r0, 0x24(r4)
  stw       r5, 0x20(r3)
  lwz       r5, 0x28(r4)
  stw       r0, 0x24(r3)
  lwz       r0, 0x2C(r4)
  stw       r5, 0x28(r3)
  lwz       r5, 0x30(r4)
  stw       r0, 0x2C(r3)
  lwz       r0, 0x34(r4)
  stw       r5, 0x30(r3)
  lwz       r5, 0x38(r4)
  stw       r0, 0x34(r3)
  lwz       r0, 0x3C(r4)
  stw       r5, 0x38(r3)
  lwz       r5, 0x40(r4)
  stw       r0, 0x3C(r3)
  lwz       r0, 0x44(r4)
  stw       r5, 0x40(r3)
  lwz       r5, 0x48(r4)
  stw       r0, 0x44(r3)
  lwz       r0, 0x4C(r4)
  stw       r5, 0x48(r3)
  lwz       r5, 0x50(r4)
  stw       r0, 0x4C(r3)
  lwz       r0, 0x54(r4)
  stw       r5, 0x50(r3)
  lwz       r5, 0x58(r4)
  stw       r0, 0x54(r3)
  lwz       r0, 0x5C(r4)
  stw       r5, 0x58(r3)
  lwz       r5, 0x60(r4)
  stw       r0, 0x5C(r3)
  lwz       r0, 0x64(r4)
  stw       r5, 0x60(r3)
  lwz       r5, 0x68(r4)
  stw       r0, 0x64(r3)
  lwz       r0, 0x6C(r4)
  stw       r5, 0x68(r3)
  lwz       r5, 0x70(r4)
  stw       r0, 0x6C(r3)
  lwz       r0, 0x74(r4)
  stw       r5, 0x70(r3)
  lwz       r5, 0x78(r4)
  stw       r0, 0x74(r3)
  lwz       r0, 0x7C(r4)
  stw       r5, 0x78(r3)
  lwz       r5, 0x80(r4)
  stw       r0, 0x7C(r3)
  lwz       r0, 0x84(r4)
  stw       r5, 0x80(r3)
  lwz       r5, 0x88(r4)
  stw       r0, 0x84(r3)
  lwz       r0, 0x8C(r4)
  stw       r5, 0x88(r3)
  lwz       r5, 0x90(r4)
  stw       r0, 0x8C(r3)
  lwz       r0, 0x94(r4)
  stw       r5, 0x90(r3)
  lwz       r5, 0x98(r4)
  stw       r0, 0x94(r3)
  lwz       r0, 0x9C(r4)
  stw       r5, 0x98(r3)
  lwz       r5, 0xA0(r4)
  stw       r0, 0x9C(r3)
  lwz       r0, 0xA4(r4)
  stw       r5, 0xA0(r3)
  lwz       r5, 0xA8(r4)
  stw       r0, 0xA4(r3)
  lwz       r0, 0xAC(r4)
  stw       r5, 0xA8(r3)
  lbz       r5, 0xB0(r4)
  stw       r0, 0xAC(r3)
  lbz       r0, 0xB1(r4)
  stb       r5, 0xB0(r3)
  lbz       r5, 0xB2(r4)
  stb       r0, 0xB1(r3)
  lbz       r0, 0xB3(r4)
  stb       r5, 0xB2(r3)
  lbz       r5, 0xB4(r4)
  stb       r0, 0xB3(r3)
  lbz       r0, 0xB5(r4)
  stb       r5, 0xB4(r3)
  lbz       r5, 0xB6(r4)
  stb       r0, 0xB5(r3)
  lbz       r0, 0xB7(r4)
  stb       r5, 0xB6(r3)
  lfs       f0, 0xB8(r4)
  stb       r0, 0xB7(r3)
  stfs      f0, 0xB8(r3)
  lfs       f1, 0xBC(r4)
  lfs       f0, 0xC0(r4)
  stfs      f1, 0xBC(r3)
  lfs       f1, 0xC4(r4)
  stfs      f0, 0xC0(r3)
  lfs       f0, 0xC8(r4)
  stfs      f1, 0xC4(r3)
  lfs       f1, 0xCC(r4)
  stfs      f0, 0xC8(r3)
  lfs       f0, 0xD0(r4)
  stfs      f1, 0xCC(r3)
  lfs       f1, 0xD4(r4)
  stfs      f0, 0xD0(r3)
  lfs       f0, 0xD8(r4)
  stfs      f1, 0xD4(r3)
  lwz       r5, 0xDC(r4)
  stfs      f0, 0xD8(r3)
  lwz       r0, 0xE0(r4)
  stw       r5, 0xDC(r3)
  lwz       r5, 0xE4(r4)
  stw       r0, 0xE0(r3)
  lwz       r0, 0xE8(r4)
  stw       r5, 0xE4(r3)
  lwz       r5, 0xEC(r4)
  stw       r0, 0xE8(r3)
  lwz       r0, 0xF0(r4)
  stw       r5, 0xEC(r3)
  lwz       r5, 0xF4(r4)
  stw       r0, 0xF0(r3)
  lwz       r0, 0xF8(r4)
  stw       r5, 0xF4(r3)
  stw       r0, 0xF8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8039F334
 * Size:	00000C
 */
void doUpdateFadeinFinish__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, 0x45(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8039F340
 * Size:	0000AC
 */
void doUpdateFadeoutFinish__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x1F8(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x4B24
  li        r4, 0x830
  addi      r5, r5, 0x4B34
  crclr     6, 0x6
  bl        -0x374D38

.loc_0x3C:
  lwz       r0, 0x274(r31)
  lwz       r3, 0x1F8(r31)
  stw       r0, 0x1C(r3)
  lwz       r0, 0x278(r31)
  lwz       r3, 0x1F8(r31)
  stw       r0, 0x20(r3)
  lwz       r0, 0x94(r31)
  lwz       r3, 0x88(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  bl        0x3218
  lwz       r4, 0x1F8(r31)
  stw       r3, 0x14(r4)
  lbz       r0, 0x228(r31)
  cmplwi    r0, 0
  beq-      .loc_0x8C
  lwz       r3, 0x1F8(r31)
  li        r0, 0x3
  stw       r0, 0x34(r3)
  b         .loc_0x98

.loc_0x8C:
  lwz       r3, 0x1F8(r31)
  li        r0, 0x2
  stw       r0, 0x34(r3)

.loc_0x98:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8039F3EC
 * Size:	0003CC
 */
void paneInit__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x8049
  lis       r5, 0x5F30
  stw       r0, 0x24(r1)
  lis       r4, 0x5049
  stw       r31, 0x1C(r1)
  addi      r31, r6, 0x4B18
  addi      r6, r5, 0x3735
  addi      r5, r4, 0x4354
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lwz       r3, 0x7C(r3)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xE8(r30)
  lwz       r0, 0xE8(r30)
  cmplwi    r0, 0
  bne-      .loc_0x74
  addi      r3, r31, 0xC
  addi      r5, r31, 0x1C
  li        r4, 0x847
  crclr     6, 0x6
  bl        -0x374E1C

.loc_0x74:
  lwz       r3, 0x7C(r30)
  lis       r5, 0x6E75
  lis       r4, 0x5462
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x3131
  addi      r5, r4, 0x6D65
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xF0(r30)
  lwz       r0, 0xF0(r30)
  cmplwi    r0, 0
  bne-      .loc_0xC0
  addi      r3, r31, 0xC
  addi      r5, r31, 0x1C
  li        r4, 0x84A
  crclr     6, 0x6
  bl        -0x374E68

.loc_0xC0:
  lwz       r3, 0xBC(r30)
  lis       r5, 0x7469
  lis       r4, 0x506C
  lwz       r3, 0x8(r3)
  addi      r6, r5, 0x6D30
  addi      r5, r4, 0x6973
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x140(r30)
  lis       r4, 0x7469
  lis       r3, 0x506C
  lwz       r7, 0xBC(r30)
  addi      r6, r4, 0x6D31
  addi      r5, r3, 0x6973
  lwz       r3, 0x8(r7)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x144(r30)
  lis       r4, 0x7469
  lis       r3, 0x506C
  lwz       r7, 0xBC(r30)
  addi      r6, r4, 0x6D32
  addi      r5, r3, 0x6973
  lwz       r3, 0x8(r7)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x148(r30)
  lis       r4, 0x7469
  lis       r3, 0x506C
  lwz       r7, 0xBC(r30)
  addi      r6, r4, 0x6D33
  addi      r5, r3, 0x6973
  lwz       r3, 0x8(r7)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x14C(r30)
  lis       r4, 0x7469
  lis       r3, 0x506C
  lwz       r7, 0xBC(r30)
  addi      r6, r4, 0x6D34
  addi      r5, r3, 0x6973
  lwz       r3, 0x8(r7)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x150(r30)
  lis       r4, 0x7769
  lis       r3, 0x506C
  lwz       r7, 0xBC(r30)
  addi      r6, r4, 0x6E30
  addi      r5, r3, 0x6973
  lwz       r3, 0x8(r7)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x12C(r30)
  lis       r4, 0x7769
  lis       r3, 0x506C
  lwz       r7, 0xBC(r30)
  addi      r6, r4, 0x6E31
  addi      r5, r3, 0x6973
  lwz       r3, 0x8(r7)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x130(r30)
  lis       r4, 0x7769
  lis       r3, 0x506C
  lwz       r7, 0xBC(r30)
  addi      r6, r4, 0x6E32
  addi      r5, r3, 0x6973
  lwz       r3, 0x8(r7)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x134(r30)
  lis       r4, 0x7769
  lis       r3, 0x506C
  lwz       r7, 0xBC(r30)
  addi      r6, r4, 0x6E33
  addi      r5, r3, 0x6973
  lwz       r3, 0x8(r7)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x138(r30)
  lis       r4, 0x7769
  lis       r3, 0x506C
  lwz       r7, 0xBC(r30)
  addi      r6, r4, 0x6E34
  addi      r5, r3, 0x6973
  lwz       r3, 0x8(r7)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x13C(r30)
  mr        r29, r30
  li        r28, 0
  b         .loc_0x2D4

.loc_0x284:
  lwz       r0, 0x140(r29)
  cmplwi    r0, 0
  bne-      .loc_0x2A8
  mr        r6, r28
  addi      r3, r31, 0xC
  addi      r5, r31, 0x678
  li        r4, 0x85B
  crclr     6, 0x6
  bl        -0x375050

.loc_0x2A8:
  lwz       r0, 0x12C(r29)
  cmplwi    r0, 0
  bne-      .loc_0x2CC
  mr        r6, r28
  addi      r3, r31, 0xC
  addi      r5, r31, 0x694
  li        r4, 0x85C
  crclr     6, 0x6
  bl        -0x375074

.loc_0x2CC:
  addi      r29, r29, 0x4
  addi      r28, r28, 0x1

.loc_0x2D4:
  lha       r0, 0x8E(r30)
  cmpw      r28, r0
  blt+      .loc_0x284
  lwz       r4, 0x7C(r30)
  lis       r3, 0x706F
  addi      r6, r3, 0x7430
  li        r5, 0x5073
  lwz       r3, 0x8(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xE0(r30)
  lwz       r0, 0xE0(r30)
  cmplwi    r0, 0
  bne-      .loc_0x328
  addi      r3, r31, 0xC
  addi      r5, r31, 0x1C
  li        r4, 0x861
  crclr     6, 0x6
  bl        -0x3750D0

.loc_0x328:
  lwz       r0, 0x94(r30)
  lis       r4, 0x7270
  lwz       r5, 0x88(r30)
  lis       r3, 0x4E73
  rlwinm    r0,r0,2,0,29
  lfs       f1, 0xF30(r2)
  lwzx      r7, r5, r0
  addi      r6, r4, 0x696B
  lfs       f0, 0xE30(r2)
  addi      r5, r3, 0x7461
  lfs       f2, 0x1C(r7)
  fsubs     f1, f2, f1
  stfs      f1, 0xA8(r30)
  lfs       f1, 0xA8(r30)
  fadds     f0, f1, f0
  stfs      f0, 0xAC(r30)
  lwz       r3, 0x7C(r30)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0xEC(r30)
  lwz       r0, 0xEC(r30)
  cmplwi    r0, 0
  bne-      .loc_0x3A4
  addi      r3, r31, 0xC
  addi      r5, r31, 0x1C
  li        r4, 0x86A
  crclr     6, 0x6
  bl        -0x37514C

.loc_0x3A4:
  mr        r3, r30
  bl        0xE5C
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
 * Address:	8039F7B8
 * Size:	000240
 */
void changePaneInfo__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r30, r3
  lwz       r0, 0x94(r3)
  lwz       r3, 0x88(r3)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  bl        0x2DC4
  lwz       r12, 0x0(r30)
  mr        r0, r3
  mr        r3, r30
  lwz       r29, 0xF0(r30)
  lwz       r12, 0x8C(r12)
  mr        r4, r0
  mtctr     r12
  bctrl     
  stw       r4, 0x1C(r29)
  lfs       f0, 0xE1C(r2)
  stw       r3, 0x18(r29)
  lfs       f1, 0x230(r30)
  fmuls     f0, f1, f0
  stfs      f0, 0x230(r30)
  lbz       r0, -0x663F(r13)
  cmplwi    r0, 0
  bne-      .loc_0x210
  li        r0, 0
  stw       r0, 0x244(r30)
  lwz       r3, 0x208(r30)
  bl        -0x72314
  lwz       r0, 0x94(r30)
  lwz       r3, 0x88(r30)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  bl        0x2D5C
  lwz       r0, 0x94(r30)
  mr.       r31, r3
  lwz       r3, 0x88(r30)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  lfs       f30, 0x1C(r3)
  bne-      .loc_0xD8
  li        r0, 0x1
  stw       r0, 0x244(r30)
  lwz       r3, 0x208(r30)
  bl        -0x7243C

.loc_0xD8:
  lwz       r3, 0x248(r30)
  subi      r0, r3, 0x1
  cmpw      r31, r0
  bne-      .loc_0xF8
  li        r0, 0x2
  stw       r0, 0x244(r30)
  lwz       r3, 0x208(r30)
  bl        -0x72530

.loc_0xF8:
  lwz       r0, 0x244(r30)
  cmpwi     r0, 0
  bne-      .loc_0x110
  li        r0, 0
  stb       r0, 0x23D(r30)
  b         .loc_0x16C

.loc_0x110:
  li        r0, 0x1
  lfs       f31, 0xE10(r2)
  stb       r0, 0x23D(r30)
  li        r28, 0
  li        r29, 0
  lwz       r3, 0x84(r30)
  stfs      f31, 0x14(r3)
  b         .loc_0x160

.loc_0x130:
  lwz       r3, 0x88(r30)
  lwzx      r4, r3, r29
  lfs       f0, 0x1C(r4)
  lwz       r3, 0x4(r4)
  fadds     f0, f0, f31
  stfs      f0, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x4
  addi      r28, r28, 0x1

.loc_0x160:
  lha       r0, 0x8E(r30)
  cmpw      r28, r0
  blt+      .loc_0x130

.loc_0x16C:
  li        r28, 0
  li        r29, 0
  b         .loc_0x204

.loc_0x178:
  lwz       r3, 0x88(r30)
  li        r0, 0x1
  lwzx      r3, r3, r29
  lwz       r3, 0x4(r3)
  stb       r0, 0xB0(r3)
  lwz       r3, 0x88(r30)
  lwzx      r3, r3, r29
  bl        0x2C70
  cmpw      r3, r31
  beq-      .loc_0x1FC
  lwz       r3, 0x88(r30)
  lwzx      r3, r3, r29
  lfs       f31, 0x1C(r3)
  bl        0x2C58
  lwz       r3, 0x88(r30)
  lwzx      r3, r3, r29
  bl        0x2C4C
  cmpw      r3, r31
  ble-      .loc_0x1CC
  fcmpo     cr0, f30, f31
  bgt-      .loc_0x1E8

.loc_0x1CC:
  lwz       r3, 0x88(r30)
  lwzx      r3, r3, r29
  bl        0x2C30
  cmpw      r3, r31
  bge-      .loc_0x1FC
  fcmpo     cr0, f30, f31
  bge-      .loc_0x1FC

.loc_0x1E8:
  lwz       r3, 0x88(r30)
  li        r0, 0
  lwzx      r3, r3, r29
  lwz       r3, 0x4(r3)
  stb       r0, 0xB0(r3)

.loc_0x1FC:
  addi      r29, r29, 0x4
  addi      r28, r28, 0x1

.loc_0x204:
  lha       r0, 0x8E(r30)
  cmpw      r28, r0
  blt+      .loc_0x178

.loc_0x210:
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x44(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8039F9F8
 * Size:	000084
 */
void getNameID__Q28Morimura9TVsSelectFi(void)
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
  lwz       r12, 0x0(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  cmpw      r31, r3
  ble-      .loc_0x50
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x4B24
  li        r4, 0x8B2
  addi      r5, r5, 0x4B34
  crclr     6, 0x6
  bl        -0x375404

.loc_0x50:
  mr        r3, r30
  mr        r4, r31
  bl        0x34
  mr        r4, r3
  lwz       r3, 0x1FC(r30)
  subi      r4, r4, 0x1
  bl        0x17AC
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
 * Address:	8039FA7C
 * Size:	000008
 */
void getIdMax__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x248(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8039FA84
 * Size:	00003C
 */
void getCourseID__Q28Morimura9TVsSelectFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  bne-      .loc_0x28
  lwz       r3, 0x1F8(r3)
  lwz       r3, 0x8(r3)
  bl        -0x16A884
  lwz       r4, 0x0(r3)

.loc_0x28:
  lwz       r0, 0x14(r1)
  mr        r3, r4
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000194
 */
void reset__Q28Morimura9TVsSelectFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8039FAC0
 * Size:	0001F4
 */
void doZoom__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r0, 0x240(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x50
  lfs       f1, 0x250(r31)
  lfs       f0, -0x79D0(r13)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x40
  stfs      f0, 0x250(r31)
  b         .loc_0xF0

.loc_0x40:
  lfs       f0, 0xE20(r2)
  fadds     f0, f1, f0
  stfs      f0, 0x250(r31)
  b         .loc_0xF0

.loc_0x50:
  cmpwi     r0, 0x2
  bne-      .loc_0xF0
  lfs       f2, 0x250(r31)
  lfs       f1, 0xE20(r2)
  lfs       f0, 0xE10(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x250(r31)
  lfs       f1, 0x250(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0xF0
  stfs      f0, 0x250(r31)
  li        r0, 0x1
  lfs       f2, 0xEE0(r2)
  lwz       r3, 0x1E8(r31)
  lfs       f3, 0xF34(r2)
  lfs       f1, 0x10(r3)
  lfs       f4, 0xC(r3)
  fsubs     f1, f1, f2
  lfs       f0, 0xF38(r2)
  fsubs     f4, f4, f3
  fmuls     f1, f1, f1
  fmadds    f1, f4, f4, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xB8
  li        r0, 0

.loc_0xB8:
  lwz       r3, 0x1EC(r31)
  lfs       f1, 0x10(r3)
  lfs       f4, 0xC(r3)
  fsubs     f1, f1, f2
  fsubs     f4, f4, f3
  fmuls     f1, f1, f1
  fmadds    f1, f4, f4, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xE0
  li        r0, 0

.loc_0xE0:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0xF0
  li        r0, 0
  stw       r0, 0x240(r31)

.loc_0xF0:
  lfs       f2, 0xF08(r2)
  lfs       f0, 0x250(r31)
  lfs       f1, -0x79D0(r13)
  fmuls     f2, f2, f0
  lfs       f0, 0xE10(r2)
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x13C
  lfs       f0, 0xE50(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f4, f0
  b         .loc_0x160

.loc_0x13C:
  lfs       f0, 0xE54(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f4, r3, r0

.loc_0x160:
  lfs       f0, 0xE9C(r2)
  lfs       f31, 0xE10(r2)
  fcmpo     cr0, f4, f0
  blt-      .loc_0x1B8
  fsubs     f2, f4, f0
  lfs       f3, 0xF3C(r2)
  lfs       f0, 0xE20(r2)
  lfs       f1, 0xF40(r2)
  fmuls     f2, f3, f2
  fcmpu     cr0, f0, f4
  fdivs     f31, f2, f1
  bne-      .loc_0x1B8
  lbz       r0, 0x229(r31)
  fmr       f31, f0
  cmplwi    r0, 0
  beq-      .loc_0x1B8
  li        r0, 0x3
  mr        r3, r31
  stw       r0, 0x240(r31)
  bl        0xA20
  li        r0, 0
  stb       r0, -0x663E(r13)

.loc_0x1B8:
  lfs       f0, -0x79B8(r13)
  lfs       f1, 0xE20(r2)
  fmuls     f0, f0, f31
  stfs      f0, 0x26C(r31)
  lfs       f0, -0x79C0(r13)
  fsubs     f0, f0, f1
  fmadds    f0, f0, f31, f1
  stfs      f0, -0x79BC(r13)
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8039FCB4
 * Size:	00006C
 */
void doMoveOnyon__Q28Morimura9TVsSelectFv(void)
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
  mr        r29, r3
  mr        r31, r29

.loc_0x24:
  lwz       r0, 0x240(r29)
  lfs       f1, 0xE20(r2)
  cmpwi     r0, 0x2
  bne-      .loc_0x38
  lfs       f1, 0xE8C(r2)

.loc_0x38:
  lwz       r3, 0x1E8(r31)
  bl        -0x5C24
  addi      r30, r30, 0x1
  addi      r31, r31, 0x4
  cmpwi     r30, 0x2
  blt+      .loc_0x24
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
 * Address:	8039FD20
 * Size:	000214
 */
void doScreenEffect__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lfs       f0, 0xE68(r2)
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lfs       f1, -0x79D4(r13)
  lfs       f2, 0x250(r3)
  fadds     f1, f2, f1
  stfs      f1, 0x250(r3)
  lfs       f1, 0x250(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x3C
  fsubs     f0, f1, f0
  stfs      f0, 0x250(r31)

.loc_0x3C:
  lfs       f3, 0x250(r31)
  lfs       f0, 0xE10(r2)
  fmr       f1, f3
  lfs       f4, -0x79D8(r13)
  fcmpo     cr0, f3, f0
  bge-      .loc_0x58
  fneg      f1, f3

.loc_0x58:
  lfs       f2, 0xE54(r2)
  lis       r3, 0x8050
  lfs       f0, 0xE10(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f1, f2
  fcmpo     cr0, f3, f0
  fctiwz    f0, f1
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fmuls     f1, f4, f0
  bge-      .loc_0xB4
  lfs       f0, 0xE50(r2)
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f0, f0
  b         .loc_0xCC

.loc_0xB4:
  fmuls     f0, f3, f2
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0

.loc_0xCC:
  fmuls     f0, f4, f0
  lwz       r3, 0xD8(r31)
  stfs      f0, 0x34(r3)
  stfs      f1, 0x38(r3)
  lbz       r0, 0x229(r31)
  cmplwi    r0, 0
  beq-      .loc_0x200
  lwz       r3, 0x1E8(r31)
  li        r0, 0x1
  lfs       f1, 0xE8C(r2)
  lfs       f0, 0x30(r3)
  fcmpu     cr0, f1, f0
  beq-      .loc_0x104
  li        r0, 0

.loc_0x104:
  lwz       r3, 0x1EC(r31)
  lfs       f0, 0x30(r3)
  fcmpu     cr0, f1, f0
  beq-      .loc_0x118
  li        r0, 0

.loc_0x118:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x1F8
  lfs       f2, 0x254(r31)
  lfs       f1, 0xE20(r2)
  lfs       f0, 0xF44(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x254(r31)
  lfs       f1, 0x254(r31)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x200
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  bne-      .loc_0x200
  li        r3, 0
  li        r0, 0x1
  stw       r3, 0x240(r31)
  mr        r3, r31
  lwz       r4, 0x1F8(r31)
  stw       r0, 0x34(r4)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  bne-      .loc_0x198
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x4B24
  li        r4, 0x946
  addi      r5, r5, 0x4B34
  crclr     6, 0x6
  bl        -0x375874

.loc_0x198:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  bl        0xB20C0
  li        r5, 0
  li        r6, 0
  mr        r4, r5
  b         .loc_0x1E8

.loc_0x1C4:
  lwz       r0, 0x94(r31)
  cmpw      r6, r0
  beq-      .loc_0x1E0
  lwz       r3, 0x88(r31)
  lwzx      r3, r3, r5
  lwz       r3, 0x4(r3)
  stb       r4, 0xB0(r3)

.loc_0x1E0:
  addi      r5, r5, 0x4
  addi      r6, r6, 0x1

.loc_0x1E8:
  lha       r0, 0x8E(r31)
  cmpw      r6, r0
  blt+      .loc_0x1C4
  b         .loc_0x200

.loc_0x1F8:
  lfs       f0, 0xE10(r2)
  stfs      f0, 0x254(r31)

.loc_0x200:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8039FF34
 * Size:	0004FC
 */
void onyonDemoInit__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x130(r1)
  mflr      r0
  stw       r0, 0x134(r1)
  stfd      f31, 0x120(r1)
  psq_st    f31,0x128(r1),0,0
  stfd      f30, 0x110(r1)
  psq_st    f30,0x118(r1),0,0
  stfd      f29, 0x100(r1)
  psq_st    f29,0x108(r1),0,0
  stfd      f28, 0xF0(r1)
  psq_st    f28,0xF8(r1),0,0
  stfd      f27, 0xE0(r1)
  psq_st    f27,0xE8(r1),0,0
  stfd      f26, 0xD0(r1)
  psq_st    f26,0xD8(r1),0,0
  stfd      f25, 0xC0(r1)
  psq_st    f25,0xC8(r1),0,0
  stfd      f24, 0xB0(r1)
  psq_st    f24,0xB8(r1),0,0
  stfd      f23, 0xA0(r1)
  psq_st    f23,0xA8(r1),0,0
  stfd      f22, 0x90(r1)
  psq_st    f22,0x98(r1),0,0
  stfd      f21, 0x80(r1)
  psq_st    f21,0x88(r1),0,0
  stfd      f20, 0x70(r1)
  psq_st    f20,0x78(r1),0,0
  stfd      f19, 0x60(r1)
  psq_st    f19,0x68(r1),0,0
  stmw      r27, 0x4C(r1)
  mr        r28, r3
  bl        -0x2D6A10
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f3, 0xE38(r2)
  stw       r0, 0x8(r1)
  lfs       f1, 0xE64(r2)
  lfd       f2, 0x8(r1)
  lfs       f0, 0xE28(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xB8
  lfs       f20, 0xE20(r2)
  b         .loc_0xBC

.loc_0xB8:
  lfs       f20, 0xE1C(r2)

.loc_0xBC:
  lfs       f23, 0xE28(r2)
  mr        r30, r28
  lfs       f24, 0xE60(r2)
  li        r29, 0
  lfs       f25, 0xE10(r2)
  lis       r31, 0x4330
  lfd       f26, 0xE38(r2)
  lfs       f27, 0xE64(r2)
  lfs       f28, 0xE30(r2)
  lfs       f29, 0xE68(r2)
  lfs       f30, 0xF24(r2)
  lfs       f31, 0xF30(r2)
  lfs       f19, 0xE1C(r2)

.loc_0xF0:
  lfs       f3, 0x290(r28)
  lfs       f2, 0x298(r28)
  lfs       f1, 0x294(r28)
  lfs       f0, 0x29C(r28)
  fadds     f2, f3, f2
  lwz       r27, 0x1E8(r30)
  fadds     f0, f1, f0
  stfs      f24, 0xC(r27)
  fmuls     f22, f23, f2
  fmuls     f21, f23, f0
  stfs      f25, 0x10(r27)
  bl        -0x2D6AB0
  xoris     r0, r3, 0x8000
  lfs       f0, -0x79CC(r13)
  stw       r0, 0xC(r1)
  li        r3, 0x1
  fctiwz    f0, f0
  li        r0, 0
  stw       r31, 0x8(r1)
  lfd       f1, 0x8(r1)
  stfd      f0, 0x10(r1)
  fsubs     f0, f1, f26
  lwz       r5, 0x14(r1)
  fdivs     f0, f0, f27
  fmuls     f0, f28, f0
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r4, 0x1C(r1)
  add       r4, r5, r4
  neg       r4, r4
  stw       r4, 0x38(r27)
  stfs      f25, 0x30(r27)
  stb       r3, 0x3C(r27)
  lwz       r3, 0x8(r27)
  stb       r0, 0xB0(r3)
  stfs      f25, 0x2C(r27)
  bl        -0x2D6B14
  xoris     r0, r3, 0x8000
  stw       r31, 0x20(r1)
  stw       r0, 0x24(r1)
  lfd       f0, 0x20(r1)
  fsubs     f0, f0, f26
  fdivs     f0, f0, f27
  fcmpo     cr0, f0, f23
  ble-      .loc_0x1AC
  lfs       f0, 0xE48(r2)
  stfs      f0, 0x2C(r27)

.loc_0x1AC:
  stfs      f25, 0x1C(r27)
  li        r4, 0x182C
  li        r5, 0
  stfs      f25, 0x20(r27)
  stfs      f25, 0x24(r27)
  stfs      f25, 0x28(r27)
  lfs       f0, -0x79E0(r13)
  stfs      f0, 0x34(r27)
  lwz       r3, -0x67A8(r13)
  bl        -0x67AD4
  bl        -0x2D6B68
  xoris     r0, r3, 0x8000
  stw       r31, 0x20(r1)
  stw       r0, 0x24(r1)
  lfd       f0, 0x20(r1)
  fsubs     f0, f0, f26
  fdivs     f0, f0, f27
  fmuls     f1, f29, f0
  fcmpo     cr0, f1, f25
  bge-      .loc_0x228
  lfs       f0, 0xE50(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x24C

.loc_0x228:
  lfs       f0, 0xE54(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x24C:
  fmadds    f0, f30, f0, f28
  fmadds    f22, f20, f0, f22
  bl        -0x2D6BE8
  xoris     r0, r3, 0x8000
  stw       r31, 0x8(r1)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f26
  fdivs     f0, f0, f27
  fmuls     f1, f29, f0
  fcmpo     cr0, f1, f25
  bge-      .loc_0x2A8
  lfs       f0, 0xE50(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x2CC

.loc_0x2A8:
  lfs       f0, 0xE54(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x2CC:
  fmadds    f0, f31, f0, f31
  lwz       r3, 0x1E8(r30)
  stfs      f22, 0x14(r3)
  fmadds    f21, f20, f0, f21
  stfs      f21, 0x18(r3)
  bl        -0x2D6C74
  xoris     r0, r3, 0x8000
  stw       r31, 0x38(r1)
  stw       r0, 0x3C(r1)
  lfd       f0, 0x38(r1)
  fsubs     f0, f0, f26
  fdivs     f0, f0, f27
  fcmpo     cr0, f0, f23
  bge-      .loc_0x3AC
  lfs       f0, 0xE10(r2)
  fcmpo     cr0, f20, f0
  ble-      .loc_0x348
  bl        -0x2D6CA4
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x3C(r1)
  lfd       f3, 0xE38(r2)
  stw       r0, 0x38(r1)
  lfs       f2, 0xE64(r2)
  lfd       f0, 0x38(r1)
  lfs       f1, 0xE58(r2)
  fsubs     f3, f0, f3
  lfs       f0, 0xE14(r2)
  fdivs     f2, f3, f2
  fmadds    f21, f1, f2, f0
  b         .loc_0x378

.loc_0x348:
  bl        -0x2D6CDC
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x3C(r1)
  lfd       f3, 0xE38(r2)
  stw       r0, 0x38(r1)
  lfs       f1, 0xE64(r2)
  lfd       f2, 0x38(r1)
  lfs       f0, 0xF48(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fmuls     f21, f0, f1

.loc_0x378:
  bl        -0x2D6D0C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x3C(r1)
  lfd       f3, 0xE38(r2)
  stw       r0, 0x38(r1)
  lfs       f1, 0xE64(r2)
  lfd       f2, 0x38(r1)
  lfs       f0, 0xE18(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fmuls     f22, f0, f1
  b         .loc_0x450

.loc_0x3AC:
  lfs       f0, 0xE10(r2)
  fcmpo     cr0, f20, f0
  ble-      .loc_0x3F0
  bl        -0x2D6D4C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x3C(r1)
  lfd       f3, 0xE38(r2)
  stw       r0, 0x38(r1)
  lfs       f2, 0xE64(r2)
  lfd       f0, 0x38(r1)
  lfs       f1, 0xE58(r2)
  fsubs     f3, f0, f3
  lfs       f0, 0xE18(r2)
  fdivs     f2, f3, f2
  fmadds    f22, f1, f2, f0
  b         .loc_0x420

.loc_0x3F0:
  bl        -0x2D6D84
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x3C(r1)
  lfd       f3, 0xE38(r2)
  stw       r0, 0x38(r1)
  lfs       f1, 0xE64(r2)
  lfd       f2, 0x38(r1)
  lfs       f0, 0xF48(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fmuls     f22, f0, f1

.loc_0x420:
  bl        -0x2D6DB4
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x3C(r1)
  lfd       f3, 0xE38(r2)
  stw       r0, 0x38(r1)
  lfs       f1, 0xE64(r2)
  lfd       f2, 0x38(r1)
  lfs       f0, 0xE14(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fmuls     f21, f0, f1

.loc_0x450:
  lwz       r3, 0x1E8(r30)
  addi      r29, r29, 0x1
  cmpwi     r29, 0x2
  stfs      f21, 0xC(r3)
  stfs      f22, 0x10(r3)
  lwz       r3, 0x1E8(r30)
  addi      r30, r30, 0x4
  stfs      f20, 0x0(r3)
  fmuls     f20, f20, f19
  blt+      .loc_0xF0
  lfs       f0, 0xE10(r2)
  stfs      f0, 0x250(r28)
  psq_l     f31,0x128(r1),0,0
  lfd       f31, 0x120(r1)
  psq_l     f30,0x118(r1),0,0
  lfd       f30, 0x110(r1)
  psq_l     f29,0x108(r1),0,0
  lfd       f29, 0x100(r1)
  psq_l     f28,0xF8(r1),0,0
  lfd       f28, 0xF0(r1)
  psq_l     f27,0xE8(r1),0,0
  lfd       f27, 0xE0(r1)
  psq_l     f26,0xD8(r1),0,0
  lfd       f26, 0xD0(r1)
  psq_l     f25,0xC8(r1),0,0
  lfd       f25, 0xC0(r1)
  psq_l     f24,0xB8(r1),0,0
  lfd       f24, 0xB0(r1)
  psq_l     f23,0xA8(r1),0,0
  lfd       f23, 0xA0(r1)
  psq_l     f22,0x98(r1),0,0
  lfd       f22, 0x90(r1)
  psq_l     f21,0x88(r1),0,0
  lfd       f21, 0x80(r1)
  psq_l     f20,0x78(r1),0,0
  lfd       f20, 0x70(r1)
  psq_l     f19,0x68(r1),0,0
  lfd       f19, 0x60(r1)
  lmw       r27, 0x4C(r1)
  lwz       r0, 0x134(r1)
  mtlr      r0
  addi      r1, r1, 0x130
  blr
*/
}

/*
 * --INFO--
 * Address:	803A0430
 * Size:	0001C0
 */
void demoStart__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stfd      f31, 0x90(r1)
  psq_st    f31,0x98(r1),0,0
  stfd      f30, 0x80(r1)
  psq_st    f30,0x88(r1),0,0
  stfd      f29, 0x70(r1)
  psq_st    f29,0x78(r1),0,0
  stfd      f28, 0x60(r1)
  psq_st    f28,0x68(r1),0,0
  stfd      f27, 0x50(r1)
  psq_st    f27,0x58(r1),0,0
  stfd      f26, 0x40(r1)
  psq_st    f26,0x48(r1),0,0
  stmw      r27, 0x2C(r1)
  lfs       f0, 0xE20(r2)
  mr        r31, r3
  lfs       f26, 0xE10(r2)
  li        r29, 0
  stfs      f0, -0x79BC(r13)
  mr        r27, r31
  lfs       f27, 0xE60(r2)
  lis       r30, 0x4330
  stfs      f26, 0x26C(r3)
  lfd       f28, 0xE38(r2)
  stw       r29, 0x240(r3)
  lfs       f29, 0xE64(r2)
  stfs      f26, 0x250(r3)
  lfs       f30, 0xE30(r2)
  lfs       f31, 0xE28(r2)

.loc_0x7C:
  lwz       r28, 0x1E8(r27)
  stfs      f27, 0xC(r28)
  stfs      f26, 0x10(r28)
  bl        -0x2D6F18
  xoris     r0, r3, 0x8000
  lfs       f0, -0x79CC(r13)
  stw       r0, 0xC(r1)
  li        r3, 0x1
  fctiwz    f0, f0
  li        r0, 0
  stw       r30, 0x8(r1)
  lfd       f1, 0x8(r1)
  stfd      f0, 0x10(r1)
  fsubs     f0, f1, f28
  lwz       r5, 0x14(r1)
  fdivs     f0, f0, f29
  fmuls     f0, f30, f0
  fctiwz    f0, f0
  stfd      f0, 0x18(r1)
  lwz       r4, 0x1C(r1)
  add       r4, r5, r4
  neg       r4, r4
  stw       r4, 0x38(r28)
  stfs      f26, 0x30(r28)
  stb       r3, 0x3C(r28)
  lwz       r3, 0x8(r28)
  stb       r0, 0xB0(r3)
  stfs      f26, 0x2C(r28)
  bl        -0x2D6F7C
  xoris     r0, r3, 0x8000
  stw       r30, 0x20(r1)
  stw       r0, 0x24(r1)
  lfd       f0, 0x20(r1)
  fsubs     f0, f0, f28
  fdivs     f0, f0, f29
  fcmpo     cr0, f0, f31
  ble-      .loc_0x118
  lfs       f0, 0xE48(r2)
  stfs      f0, 0x2C(r28)

.loc_0x118:
  stfs      f26, 0x1C(r28)
  addi      r29, r29, 0x1
  cmpwi     r29, 0x2
  addi      r27, r27, 0x4
  stfs      f26, 0x20(r28)
  stfs      f26, 0x24(r28)
  stfs      f26, 0x28(r28)
  lfs       f0, -0x79E0(r13)
  stfs      f0, 0x34(r28)
  blt+      .loc_0x7C
  li        r3, 0
  li        r0, 0x1
  stb       r3, 0x229(r31)
  stb       r3, 0x22A(r31)
  stw       r0, 0x240(r31)
  stb       r0, -0x663E(r13)
  lwz       r3, 0x200(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  mr        r3, r31
  stb       r0, 0x229(r31)
  bl        -0x674
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  psq_l     f29,0x78(r1),0,0
  lfd       f29, 0x70(r1)
  psq_l     f28,0x68(r1),0,0
  lfd       f28, 0x60(r1)
  psq_l     f27,0x58(r1),0,0
  lfd       f27, 0x50(r1)
  psq_l     f26,0x48(r1),0,0
  lfd       f26, 0x40(r1)
  lmw       r27, 0x2C(r1)
  lwz       r0, 0xA4(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	803A05F0
 * Size:	00009C
 */
void changeCourseTexture__Q28Morimura9TVsSelectFv(void)
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
  mr        r29, r3
  mr        r31, r29
  b         .loc_0x74

.loc_0x28:
  lbz       r0, -0x6760(r13)
  mr        r4, r30
  cmplwi    r0, 0
  bne-      .loc_0x48
  lwz       r3, 0x1F8(r29)
  lwz       r3, 0x8(r3)
  bl        -0x16B410
  lwz       r4, 0x0(r3)

.loc_0x48:
  lwz       r3, 0x140(r31)
  rlwinm    r0,r4,2,0,29
  lwz       r4, 0x328(r29)
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwzx      r4, r4, r0
  lwz       r12, 0x110(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x74:
  lha       r0, 0x8E(r29)
  cmpw      r30, r0
  blt+      .loc_0x28
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
 * Address:	803A068C
 * Size:	0000D0
 */
void changeIndirectTexture__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r0, 0x94(r3)
  lwz       r3, 0x88(r3)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  bl        0x1F08
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  bne-      .loc_0x4C
  lwz       r5, 0x1F8(r30)
  mr        r4, r3
  lwz       r3, 0x8(r5)
  bl        -0x16B4B0
  lwz       r3, 0x0(r3)

.loc_0x4C:
  lwz       r6, 0xD8(r30)
  rlwinm    r31,r3,2,0,29
  lwz       r4, 0x328(r30)
  li        r5, 0
  lwz       r3, 0x18(r6)
  lwzx      r4, r4, r31
  bl        -0x36D66C
  lwz       r3, 0x1E4(r30)
  li        r5, 0
  lwz       r4, 0x328(r30)
  lwz       r12, 0x0(r3)
  lwzx      r4, r4, r31
  lwz       r12, 0x110(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x94(r30)
  li        r5, 0
  lwz       r3, 0xD8(r30)
  rlwinm    r0,r0,2,0,29
  add       r6, r30, r0
  lwz       r4, 0x20(r3)
  lwz       r3, 0x140(r6)
  lwz       r4, 0x20(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x110(r12)
  mtctr     r12
  bctrl     
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
 * Address:	803A075C
 * Size:	0000B8
 */
void setShortenIndex__Q28Morimura9TVsSelectFiib(void)
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
  lha       r0, 0x8E(r3)
  cmpw      r30, r0
  blt-      .loc_0x4C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x4B24
  li        r4, 0x9C7
  addi      r5, r5, 0x4B34
  crclr     6, 0x6
  bl        -0x376164

.loc_0x4C:
  lbz       r0, -0x6760(r13)
  mr        r5, r31
  cmplwi    r0, 0
  bne-      .loc_0x70
  lwz       r3, 0x1F8(r29)
  mr        r4, r31
  lwz       r3, 0x8(r3)
  bl        -0x16B5A4
  lwz       r5, 0x0(r3)

.loc_0x70:
  rlwinm    r0,r30,2,0,29
  lwz       r4, 0x328(r29)
  add       r3, r29, r0
  rlwinm    r0,r5,2,0,29
  lwz       r3, 0x140(r3)
  li        r5, 0
  lwzx      r4, r4, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x110(r12)
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
 * Address:	803A0814
 * Size:	000140
 */
void updateFacePicture__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r26, r3
  li        r27, 0
  mr        r31, r26
  lwz       r28, 0x24C(r3)
  subfic    r0, r28, 0x4
  rlwinm    r3,r28,3,0,28
  rlwinm    r0,r0,3,0,28
  add       r30, r26, r3
  add       r29, r26, r0

.loc_0x34:
  cmpwi     r28, 0
  blt-      .loc_0x60
  lwz       r3, 0x154(r31)
  lfs       f1, 0x2AC(r30)
  lfs       f0, 0x2A8(r30)
  stfs      f0, 0xCC(r3)
  stfs      f1, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x60:
  lwz       r3, 0x154(r31)
  lfs       f0, 0x268(r26)
  stfs      f0, 0xBC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r28, 0
  blt-      .loc_0xA8
  lwz       r3, 0x16C(r31)
  lfs       f1, 0x2D4(r29)
  lfs       f0, 0x2D0(r29)
  stfs      f0, 0xCC(r3)
  stfs      f1, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0xA8:
  lwz       r3, 0x16C(r31)
  lfs       f0, 0x268(r26)
  stfs      f0, 0xBC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r27, r27, 0x1
  addi      r31, r31, 0x4
  cmpwi     r27, 0x6
  blt+      .loc_0x34
  lfs       f2, 0x268(r26)
  lfs       f0, 0xE20(r2)
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x12C
  lfs       f1, 0x270(r26)
  lfs       f0, 0xF4C(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x268(r26)
  lfs       f1, 0x268(r26)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x110
  mr        r3, r26
  bl        .loc_0x140

.loc_0x110:
  lfs       f1, 0x268(r26)
  lfs       f0, 0xE74(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x12C
  lfs       f0, 0xE10(r2)
  stfs      f0, 0x268(r26)

.loc_0x12C:
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x140:
*/
}

/*
 * --INFO--
 * Address:	803A0954
 * Size:	0001F4
 */
void changeFaceTexture__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x288(r3)
  lwz       r0, 0x284(r31)
  sub       r0, r0, r3
  cmpwi     r0, -0x3
  bgt-      .loc_0x7C
  lwz       r0, 0x24C(r31)
  cmpwi     r0, -0x1
  beq-      .loc_0x44
  lfs       f1, 0x268(r31)
  lfs       f0, 0xF4C(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x68

.loc_0x44:
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x24C(r31)
  li        r4, 0
  bl        .loc_0x1F4
  mr        r3, r31
  li        r4, 0x4
  bl        0x230
  b         .loc_0x1E0

.loc_0x68:
  cmpwi     r0, 0
  beq-      .loc_0x1E0
  lfs       f0, 0xE20(r2)
  stfs      f0, 0x268(r31)
  b         .loc_0x1E0

.loc_0x7C:
  cmpwi     r0, -0x1
  bgt-      .loc_0xD8
  lwz       r0, 0x24C(r31)
  cmpwi     r0, -0x1
  beq-      .loc_0xA0
  lfs       f1, 0x268(r31)
  lfs       f0, 0xF4C(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xC4

.loc_0xA0:
  li        r0, 0x1
  mr        r3, r31
  stw       r0, 0x24C(r31)
  li        r4, 0x1
  bl        .loc_0x1F4
  mr        r3, r31
  li        r4, 0x3
  bl        0x1D4
  b         .loc_0x1E0

.loc_0xC4:
  cmpwi     r0, 0x1
  beq-      .loc_0x1E0
  lfs       f0, 0xE20(r2)
  stfs      f0, 0x268(r31)
  b         .loc_0x1E0

.loc_0xD8:
  cmpwi     r0, 0x1
  bge-      .loc_0x134
  lwz       r0, 0x24C(r31)
  cmpwi     r0, -0x1
  beq-      .loc_0xFC
  lfs       f1, 0x268(r31)
  lfs       f0, 0xF4C(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x120

.loc_0xFC:
  li        r0, 0x2
  mr        r3, r31
  stw       r0, 0x24C(r31)
  li        r4, 0x2
  bl        .loc_0x1F4
  mr        r3, r31
  li        r4, 0x2
  bl        0x178
  b         .loc_0x1E0

.loc_0x120:
  cmpwi     r0, 0x2
  beq-      .loc_0x1E0
  lfs       f0, 0xE20(r2)
  stfs      f0, 0x268(r31)
  b         .loc_0x1E0

.loc_0x134:
  cmpwi     r0, 0x3
  bge-      .loc_0x190
  lwz       r0, 0x24C(r31)
  cmpwi     r0, -0x1
  beq-      .loc_0x158
  lfs       f1, 0x268(r31)
  lfs       f0, 0xF4C(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x17C

.loc_0x158:
  li        r0, 0x3
  mr        r3, r31
  stw       r0, 0x24C(r31)
  li        r4, 0x3
  bl        .loc_0x1F4
  mr        r3, r31
  li        r4, 0x1
  bl        0x11C
  b         .loc_0x1E0

.loc_0x17C:
  cmpwi     r0, 0x3
  beq-      .loc_0x1E0
  lfs       f0, 0xE20(r2)
  stfs      f0, 0x268(r31)
  b         .loc_0x1E0

.loc_0x190:
  lwz       r0, 0x24C(r31)
  cmpwi     r0, -0x1
  beq-      .loc_0x1AC
  lfs       f1, 0x268(r31)
  lfs       f0, 0xF4C(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1D0

.loc_0x1AC:
  li        r0, 0x4
  mr        r3, r31
  stw       r0, 0x24C(r31)
  li        r4, 0x4
  bl        .loc_0x1F4
  mr        r3, r31
  li        r4, 0
  bl        0xC8
  b         .loc_0x1E0

.loc_0x1D0:
  cmpwi     r0, 0x4
  beq-      .loc_0x1E0
  lfs       f0, 0xE20(r2)
  stfs      f0, 0x268(r31)

.loc_0x1E0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x1F4:
*/
}

/*
 * --INFO--
 * Address:	803A0B48
 * Size:	00009C
 */
void changeOrimaTexture__Q28Morimura9TVsSelectFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804E
  stw       r0, 0x24(r1)
  rlwinm    r0,r4,2,0,29
  addi      r4, r5, 0x5338
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  lwzx      r30, r4, r0
  cmplwi    r30, 0
  bne-      .loc_0x50
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x4B24
  li        r4, 0xA25
  addi      r5, r5, 0x4B34
  crclr     6, 0x6
  bl        -0x376554

.loc_0x50:
  li        r29, 0

.loc_0x54:
  lwz       r3, 0x154(r31)
  mr        r4, r30
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x110(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x1
  addi      r31, r31, 0x4
  cmpwi     r29, 0x6
  blt+      .loc_0x54
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
 * Address:	803A0BE4
 * Size:	00009C
 */
void changeLouieTexture__Q28Morimura9TVsSelectFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804E
  stw       r0, 0x24(r1)
  rlwinm    r0,r4,2,0,29
  addi      r4, r5, 0x534C
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  lwzx      r30, r4, r0
  cmplwi    r30, 0
  bne-      .loc_0x50
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x4B24
  li        r4, 0xA33
  addi      r5, r5, 0x4B34
  crclr     6, 0x6
  bl        -0x3765F0

.loc_0x50:
  li        r29, 0

.loc_0x54:
  lwz       r3, 0x16C(r31)
  mr        r4, r30
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x110(r12)
  mtctr     r12
  bctrl     
  addi      r29, r29, 0x1
  addi      r31, r31, 0x4
  cmpwi     r29, 0x6
  blt+      .loc_0x54
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
 * Address:	803A0C80
 * Size:	000118
 */
void changeSlotPage__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  lbz       r0, 0x22C(r3)
  cmplwi    r0, 0
  beq-      .loc_0x90
  lis       r4, 0x804E
  li        r7, 0
  addi      r6, r4, 0x5360

.loc_0x18:
  li        r0, 0xC
  mr        r4, r6
  li        r5, 0
  mtctr     r0

.loc_0x28:
  lwz       r0, 0x0(r4)
  cmpw      r7, r0
  bne-      .loc_0x48
  lis       r4, 0x804E
  rlwinm    r5,r5,4,0,27
  addi      r0, r4, 0x5360
  add       r4, r0, r5
  b         .loc_0x5C

.loc_0x48:
  addi      r4, r4, 0x10
  addi      r5, r5, 0x1
  bdnz+     .loc_0x28
  lis       r4, 0x804E
  addi      r4, r4, 0x5360

.loc_0x5C:
  lwz       r0, 0x8(r4)
  addi      r7, r7, 0x1
  lwz       r5, 0xC(r4)
  cmpwi     r7, 0x6
  lwz       r4, 0x1B4(r3)
  stw       r5, 0x1C(r4)
  stw       r0, 0x18(r4)
  lwz       r4, 0x1CC(r3)
  addi      r3, r3, 0x4
  stw       r5, 0x1C(r4)
  stw       r0, 0x18(r4)
  blt+      .loc_0x18
  blr       

.loc_0x90:
  lis       r4, 0x804E
  li        r8, 0
  addi      r6, r4, 0x5360

.loc_0x9C:
  li        r0, 0xC
  mr        r7, r6
  addi      r4, r8, 0x6
  li        r5, 0
  mtctr     r0

.loc_0xB0:
  lwz       r0, 0x0(r7)
  cmpw      r4, r0
  bne-      .loc_0xD0
  lis       r4, 0x804E
  rlwinm    r5,r5,4,0,27
  addi      r0, r4, 0x5360
  add       r4, r0, r5
  b         .loc_0xE4

.loc_0xD0:
  addi      r7, r7, 0x10
  addi      r5, r5, 0x1
  bdnz+     .loc_0xB0
  lis       r4, 0x804E
  addi      r4, r4, 0x5360

.loc_0xE4:
  lwz       r0, 0x8(r4)
  addi      r8, r8, 0x1
  lwz       r5, 0xC(r4)
  cmpwi     r8, 0x6
  lwz       r4, 0x1B4(r3)
  stw       r5, 0x1C(r4)
  stw       r0, 0x18(r4)
  lwz       r4, 0x1CC(r3)
  addi      r3, r3, 0x4
  stw       r5, 0x1C(r4)
  stw       r0, 0x18(r4)
  blt+      .loc_0x9C
  blr
*/
}

/*
 * --INFO--
 * Address:	803A0D98
 * Size:	00009C
 */
void doCreateObj__Q28Morimura14TVsSelectSceneFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r3, 0x32C
  bl        -0x37CF18
  mr.       r31, r3
  beq-      .loc_0x38
  bl        -0x6608
  mr        r31, r3

.loc_0x38:
  mr        r3, r29
  mr        r4, r31
  mr        r5, r30
  bl        0xB0F98
  stw       r31, 0x220(r29)
  li        r3, 0xD8
  bl        -0x37CF44
  mr.       r0, r3
  beq-      .loc_0x6C
  lis       r4, 0x8049
  addi      r4, r4, 0x51C8
  bl        0x2848
  mr        r0, r3

.loc_0x6C:
  stw       r0, 0x224(r29)
  mr        r3, r29
  mr        r5, r30
  lwz       r4, 0x224(r29)
  bl        0xB0F60
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
 * Address:	803A0E34
 * Size:	000034
 */
void doStart__Q28Morimura14TVsSelectSceneFPQ26Screen13StartSceneArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x220(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803A0E68
 * Size:	00000C
 */
void getResName__Q28Morimura14TVsSelectSceneCFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8049
  addi      r3, r3, 0x51D4
  blr
*/
}

/*
 * --INFO--
 * Address:	803A0E74
 * Size:	000008
 */
void getSceneType__Q28Morimura14TVsSelectSceneFv(void)
{
/*
.loc_0x0:
  li        r3, 0x2739
  blr
*/
}

/*
 * --INFO--
 * Address:	803A0E7C
 * Size:	00000C
 */
void getOwnerID__Q28Morimura14TVsSelectSceneFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x4D52
  addi      r3, r3, 0x4D52
  blr
*/
}

/*
 * --INFO--
 * Address:	803A0E88
 * Size:	000014
 */
void getMemberID__Q28Morimura14TVsSelectSceneFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x4C45
  lis       r3, 0x5653
  addi      r4, r4, 0x4354
  addi      r3, r3, 0x5345
  blr
*/
}

/*
 * --INFO--
 * Address:	803A0E9C
 * Size:	000034
 */
void getDispMemberBase__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, -0x6760(r13)
  cmplwi    r0, 0
  beq-      .loc_0x20
  lwz       r3, 0x1F8(r3)
  b         .loc_0x24

.loc_0x20:
  bl        0xB30EC

.loc_0x24:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803A0ED0
 * Size:	0000A0
 */
void __dt__Q28Morimura17TVsSelectCBWinNumFv(void)
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
  beq-      .loc_0x84
  lis       r4, 0x804E
  addi      r0, r4, 0x55F0
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804E
  subi      r0, r4, 0x7E08
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804E
  subi      r0, r4, 0x7E38
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r4, 0x804D
  addi      r0, r4, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x74
  lis       r5, 0x804D
  li        r4, 0
  addi      r0, r5, 0x7B0C
  stw       r0, 0x0(r30)
  bl        0x70648

.loc_0x74:
  extsh.    r0, r31
  ble-      .loc_0x84
  mr        r3, r30
  bl        -0x37CE9C

.loc_0x84:
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
 * Address:	803A0F70
 * Size:	000070
 */
void __dt__Q28Morimura16TVsSelectIndPaneFv(void)
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
  beq-      .loc_0x54
  lis       r4, 0x804E
  addi      r0, r4, 0x56D8
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804E
  li        r4, 0
  addi      r0, r5, 0x586C
  stw       r0, 0x0(r30)
  bl        0x705D8

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x37CF0C

.loc_0x54:
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
 * Address:	803A0FE0
 * Size:	000044
 */
void __sinit_vsSelect2D_cpp(void)
{
/*
.loc_0x0:
  lfs       f4, 0xF58(r2)
  lis       r3, 0x8051
  lfs       f6, 0xF50(r2)
  subi      r4, r13, 0x6648
  lfs       f5, 0xF54(r2)
  lfs       f3, 0xF18(r2)
  stfsu     f4, 0x4044(r3)
  lfs       f2, 0xEFC(r2)
  lfs       f1, 0xEBC(r2)
  lfs       f0, 0xE8C(r2)
  stfs      f6, -0x6648(r13)
  stfs      f5, 0x4(r4)
  stfs      f3, 0x4(r3)
  stfs      f2, 0x8(r3)
  stfs      f1, 0xC(r3)
  stfs      f0, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803A1024
 * Size:	000008
 */
void @24@__dt__Q28Morimura9TVsSelectFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x64C8
*/
}