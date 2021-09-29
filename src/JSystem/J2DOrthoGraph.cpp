

/*
 * --INFO--
 * Address:	80035530
 * Size:	000060
 */
void J2DOrthoGraph::J2DOrthoGraph()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0x7BE0(r2)
  stw       r0, 0x14(r1)
  fmr       f2, f1
  stw       r31, 0xC(r1)
  fmr       f3, f1
  fmr       f4, f1
  mr        r31, r3
  bl        0xB20
  lis       r4, 0x804A
  mr        r3, r31
  addi      r0, r4, 0x600
  stw       r0, 0x0(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
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
 * Address:	80035590
 * Size:	000048
 */
void J2DGrafContext::~J2DGrafContext()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  addi      r0, r5, 0x650
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x11508

.loc_0x30:
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
 * Address:	........
 * Size:	0000E0
 */
void J2DOrthoGraph::J2DOrthoGraph(const JGeometry::TBox2<float> &, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800355D8
 * Size:	0000E4
 */
void J2DOrthoGraph::J2DOrthoGraph(float, float, float, float, float, float)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stfd      f28, 0x20(r1)
  psq_st    f28,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  fmr       f28, f3
  mr        r31, r3
  fmr       f29, f4
  fmr       f30, f5
  fmr       f31, f6
  bl        0xA58
  lfs       f2, -0x7BE0(r2)
  lis       r3, 0x804A
  addi      r0, r3, 0x600
  stfs      f28, 0x10(r1)
  fneg      f1, f31
  mr        r3, r31
  stfs      f2, 0x8(r1)
  fneg      f0, f30
  lwz       r4, 0x10(r1)
  stfs      f2, 0xC(r1)
  lwz       r5, 0x8(r1)
  stw       r0, 0x0(r31)
  lwz       r0, 0xC(r1)
  stw       r5, 0xBC(r31)
  stfs      f29, 0x14(r1)
  stw       r0, 0xC0(r31)
  lwz       r0, 0x14(r1)
  stw       r4, 0xC4(r31)
  stw       r0, 0xC8(r31)
  stfs      f1, 0xCC(r31)
  stfs      f0, 0xD0(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  psq_l     f28,0x28(r1),0,0
  lfd       f28, 0x20(r1)
  lwz       r0, 0x64(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	800356BC
 * Size:	000058
 */
void J2DOrthoGraph::setPort()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0xA50
  lfs       f1, 0xC0(r31)
  addi      r3, r31, 0x40
  lfs       f2, 0xC8(r31)
  lfs       f3, 0xBC(r31)
  lfs       f4, 0xC4(r31)
  lfs       f5, 0xCC(r31)
  lfs       f6, 0xD0(r31)
  bl        0xB56E8
  addi      r3, r31, 0x40
  li        r4, 0x1
  bl        0xB3D4C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80035714
 * Size:	000034
 */
void J2DOrthoGraph::setOrtho(const JGeometry::TBox2<float> &, float, float)
{
/*
.loc_0x0:
  lwz       r5, 0x0(r4)
  fneg      f2, f2
  lwz       r0, 0x4(r4)
  fneg      f0, f1
  stw       r5, 0xBC(r3)
  lwz       r5, 0x8(r4)
  stw       r0, 0xC0(r3)
  lwz       r0, 0xC(r4)
  stw       r5, 0xC4(r3)
  stw       r0, 0xC8(r3)
  stfs      f2, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void J2DOrthoGraph::setOrigin(float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80035748
 * Size:	00003C
 */
void J2DOrthoGraph::setLookat()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x80
  bl        0xB4B40
  addi      r3, r31, 0x80
  li        r4, 0
  bl        0xB3E0C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80035784
 * Size:	00010C
 */
void J2DOrthoGraph::scissorBounds(JGeometry::TBox2<float> *, const JGeometry::TBox2<float> *)
{
/*
.loc_0x0:
  lfs       f0, 0xC(r3)
  lfs       f6, 0x4(r3)
  lfs       f1, 0xC4(r3)
  lfs       f8, 0xBC(r3)
  fsubs     f4, f0, f6
  lfs       f0, 0x10(r3)
  lfs       f7, 0x8(r3)
  fsubs     f3, f1, f8
  lfs       f1, 0xC8(r3)
  lfs       f9, 0xC0(r3)
  fsubs     f2, f0, f7
  fdivs     f4, f4, f3
  lfs       f0, -0x7BE0(r2)
  fsubs     f1, f1, f9
  fcmpo     cr0, f6, f0
  fdivs     f5, f2, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0x4C
  b         .loc_0x50

.loc_0x4C:
  fmr       f6, f0

.loc_0x50:
  lfs       f0, -0x7BE0(r2)
  fcmpo     cr0, f7, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x64
  b         .loc_0x68

.loc_0x64:
  fmr       f7, f0

.loc_0x68:
  lfs       f0, 0x0(r5)
  lfs       f1, 0x4(r5)
  fsubs     f0, f0, f8
  lfs       f3, 0x8(r5)
  fsubs     f2, f1, f9
  lfs       f1, 0xC(r5)
  fsubs     f3, f3, f8
  fmadds    f0, f4, f0, f6
  fsubs     f1, f1, f9
  fmadds    f2, f5, f2, f7
  stfs      f0, 0x0(r4)
  fmadds    f0, f4, f3, f6
  fmadds    f1, f5, f1, f7
  stfs      f2, 0x4(r4)
  stfs      f0, 0x8(r4)
  stfs      f1, 0xC(r4)
  lfs       f0, 0x0(r4)
  lfs       f1, 0x14(r3)
  fcmpo     cr0, f0, f1
  cror      2, 0, 0x2
  bne-      .loc_0xC0
  stfs      f1, 0x0(r4)

.loc_0xC0:
  lfs       f0, 0x4(r4)
  lfs       f1, 0x18(r3)
  fcmpo     cr0, f0, f1
  cror      2, 0, 0x2
  bne-      .loc_0xD8
  stfs      f1, 0x4(r4)

.loc_0xD8:
  lfs       f0, 0x8(r4)
  lfs       f1, 0x1C(r3)
  fcmpo     cr0, f0, f1
  cror      2, 0x1, 0x2
  bne-      .loc_0xF0
  stfs      f1, 0x8(r4)

.loc_0xF0:
  lfs       f0, 0xC(r4)
  lfs       f1, 0x20(r3)
  fcmpo     cr0, f0, f1
  cror      2, 0x1, 0x2
  bnelr-    
  stfs      f1, 0xC(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80035890
 * Size:	000168
 */
void J2DDrawLine(float, float, float, float, JUtility::TColor, int)
{
/*
.loc_0x0:
  stwu      r1, -0x160(r1)
  mflr      r0
  stw       r0, 0x164(r1)
  stfd      f31, 0x150(r1)
  psq_st    f31,0x158(r1),0,0
  stfd      f30, 0x140(r1)
  psq_st    f30,0x148(r1),0,0
  stfd      f29, 0x130(r1)
  psq_st    f29,0x138(r1),0,0
  stfd      f28, 0x120(r1)
  psq_st    f28,0x128(r1),0,0
  stw       r31, 0x11C(r1)
  stw       r30, 0x118(r1)
  stw       r29, 0x114(r1)
  fmr       f28, f1
  lfs       f1, -0x7BE0(r2)
  fmr       f29, f2
  addi      r29, r1, 0x3C
  fmr       f30, f3
  mr        r30, r3
  fmr       f31, f4
  mr        r31, r4
  fmr       f2, f1
  mr        r3, r29
  fmr       f3, f1
  fmr       f4, f1
  bl        0x77C
  lis       r4, 0x804A
  mr        r3, r29
  addi      r0, r4, 0x600
  stw       r0, 0x3C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  rlwinm    r4,r31,0,24,31
  bl        0xE84
  lwz       r0, 0x0(r30)
  mr        r3, r29
  addi      r4, r1, 0x8
  addi      r5, r1, 0xC
  stw       r0, 0x18(r1)
  addi      r6, r1, 0x10
  addi      r7, r1, 0x14
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        0xD38
  stfs      f28, 0x34(r1)
  mr        r3, r29
  addi      r4, r1, 0x1C
  stfs      f29, 0x38(r1)
  lwz       r5, 0x34(r1)
  lwz       r0, 0x38(r1)
  stw       r5, 0x2C(r1)
  stw       r0, 0x30(r1)
  lfs       f1, 0x2C(r1)
  stfs      f30, 0x24(r1)
  lfs       f0, 0x30(r1)
  stfs      f31, 0x28(r1)
  lwz       r5, 0x24(r1)
  lwz       r0, 0x28(r1)
  stfs      f1, 0x74(r1)
  stfs      f0, 0x78(r1)
  stw       r5, 0x1C(r1)
  stw       r0, 0x20(r1)
  bl        0x1040
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x600
  stw       r0, 0x3C(r1)
  addi      r0, r3, 0x650
  stw       r0, 0x3C(r1)
  psq_l     f31,0x158(r1),0,0
  lfd       f31, 0x150(r1)
  psq_l     f30,0x148(r1),0,0
  lfd       f30, 0x140(r1)
  psq_l     f29,0x138(r1),0,0
  lfd       f29, 0x130(r1)
  psq_l     f28,0x128(r1),0,0
  lfd       f28, 0x120(r1)
  lwz       r31, 0x11C(r1)
  lwz       r30, 0x118(r1)
  lwz       r0, 0x164(r1)
  lwz       r29, 0x114(r1)
  mtlr      r0
  addi      r1, r1, 0x160
  blr
*/
}

/*
 * --INFO--
 * Address:	800359F8
 * Size:	000048
 */
void J2DFillBox(float, float, float, float, JUtility::TColor)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  fadds     f3, f1, f3
  stw       r0, 0x24(r1)
  fadds     f0, f2, f4
  lwz       r0, 0x0(r3)
  addi      r3, r1, 0xC
  stfs      f1, 0xC(r1)
  addi      r4, r1, 0x8
  stw       r0, 0x8(r1)
  stfs      f2, 0x10(r1)
  stfs      f3, 0x14(r1)
  stfs      f0, 0x18(r1)
  bl        .loc_0x48
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x48:
*/
}

/*
 * --INFO--
 * Address:	80035A40
 * Size:	0000CC
 */
void J2DFillBox(const JGeometry::TBox2<float> &, JUtility::TColor)
{
/*
.loc_0x0:
  stwu      r1, -0x100(r1)
  mflr      r0
  lfs       f1, -0x7BE0(r2)
  stw       r0, 0x104(r1)
  fmr       f2, f1
  stw       r31, 0xFC(r1)
  fmr       f3, f1
  fmr       f4, f1
  mr        r31, r4
  stw       r30, 0xF8(r1)
  mr        r30, r3
  stw       r29, 0xF4(r1)
  addi      r29, r1, 0x1C
  mr        r3, r29
  bl        0x5FC
  lis       r4, 0x804A
  mr        r3, r29
  addi      r0, r4, 0x600
  stw       r0, 0x1C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x0(r31)
  mr        r3, r29
  addi      r4, r1, 0x8
  addi      r5, r1, 0xC
  stw       r0, 0x18(r1)
  addi      r6, r1, 0x10
  addi      r7, r1, 0x14
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        0xBC4
  mr        r4, r30
  mr        r3, r29
  bl        0xD00
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x600
  stw       r0, 0x1C(r1)
  addi      r0, r3, 0x650
  stw       r0, 0x1C(r1)
  lwz       r31, 0xFC(r1)
  lwz       r30, 0xF8(r1)
  lwz       r29, 0xF4(r1)
  lwz       r0, 0x104(r1)
  mtlr      r0
  addi      r1, r1, 0x100
  blr
*/
}

/*
 * --INFO--
 * Address:	80035B0C
 * Size:	00006C
 */
void J2DFillBox(float, float, float, float, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  fadds     f3, f1, f3
  lwz       r9, 0x0(r5)
  stw       r0, 0x34(r1)
  fadds     f0, f2, f4
  lwz       r8, 0x0(r4)
  addi      r4, r1, 0x14
  lwz       r0, 0x0(r3)
  addi      r3, r1, 0x18
  lwz       r6, 0x0(r6)
  addi      r5, r1, 0x10
  stw       r9, 0xC(r1)
  addi      r7, r1, 0x8
  stw       r6, 0x8(r1)
  addi      r6, r1, 0xC
  stw       r8, 0x10(r1)
  stw       r0, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f2, 0x1C(r1)
  stfs      f3, 0x20(r1)
  stfs      f0, 0x24(r1)
  bl        .loc_0x6C
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x6C:
*/
}

/*
 * --INFO--
 * Address:	80035B78
 * Size:	0000D0
 */
void J2DFillBox(const JGeometry::TBox2<float> &, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor)
{
/*
.loc_0x0:
  stwu      r1, -0x110(r1)
  mflr      r0
  lfs       f1, -0x7BE0(r2)
  stw       r0, 0x114(r1)
  fmr       f2, f1
  stmw      r26, 0xF8(r1)
  fmr       f3, f1
  fmr       f4, f1
  addi      r26, r1, 0x18
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  mr        r30, r6
  mr        r31, r7
  mr        r3, r26
  bl        0x4C0
  lis       r4, 0x804A
  mr        r3, r26
  addi      r0, r4, 0x600
  stw       r0, 0x18(r1)
  lwz       r12, 0x0(r26)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x0(r31)
  mr        r3, r26
  lwz       r9, 0x0(r30)
  addi      r4, r1, 0x14
  lwz       r8, 0x0(r29)
  addi      r5, r1, 0x10
  lwz       r0, 0x0(r28)
  addi      r6, r1, 0xC
  stw       r7, 0x8(r1)
  addi      r7, r1, 0x8
  stw       r9, 0xC(r1)
  stw       r8, 0x10(r1)
  stw       r0, 0x14(r1)
  bl        0xA80
  mr        r4, r27
  mr        r3, r26
  bl        0xBBC
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x600
  stw       r0, 0x18(r1)
  addi      r0, r3, 0x650
  stw       r0, 0x18(r1)
  lmw       r26, 0xF8(r1)
  lwz       r0, 0x114(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}

/*
 * --INFO--
 * Address:	80035C48
 * Size:	00004C
 */
void J2DDrawFrame(float, float, float, float, JUtility::TColor, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  fadds     f3, f1, f3
  mr        r5, r4
  stw       r0, 0x24(r1)
  fadds     f0, f2, f4
  lwz       r0, 0x0(r3)
  addi      r3, r1, 0xC
  stw       r0, 0x8(r1)
  addi      r4, r1, 0x8
  stfs      f1, 0xC(r1)
  stfs      f2, 0x10(r1)
  stfs      f3, 0x14(r1)
  stfs      f0, 0x18(r1)
  bl        .loc_0x4C
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x4C:
*/
}

/*
 * --INFO--
 * Address:	80035C94
 * Size:	0000E4
 */
void J2DDrawFrame(const JGeometry::TBox2<float> &, JUtility::TColor, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x100(r1)
  mflr      r0
  lfs       f1, -0x7BE0(r2)
  stw       r0, 0x104(r1)
  fmr       f2, f1
  stw       r31, 0xFC(r1)
  fmr       f3, f1
  fmr       f4, f1
  mr        r31, r5
  stw       r30, 0xF8(r1)
  mr        r30, r4
  stw       r29, 0xF4(r1)
  mr        r29, r3
  stw       r28, 0xF0(r1)
  addi      r28, r1, 0x1C
  mr        r3, r28
  bl        0x3A0
  lis       r4, 0x804A
  mr        r3, r28
  addi      r0, r4, 0x600
  stw       r0, 0x1C(r1)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x0(r30)
  mr        r3, r28
  addi      r4, r1, 0x8
  addi      r5, r1, 0xC
  stw       r0, 0x18(r1)
  addi      r6, r1, 0x10
  addi      r7, r1, 0x14
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        0x968
  mr        r4, r31
  mr        r3, r28
  bl        0xA78
  mr        r4, r29
  mr        r3, r28
  bl        0xB94
  lis       r4, 0x804A
  lis       r3, 0x804A
  addi      r0, r4, 0x600
  stw       r0, 0x1C(r1)
  addi      r0, r3, 0x650
  stw       r0, 0x1C(r1)
  lwz       r31, 0xFC(r1)
  lwz       r30, 0xF8(r1)
  lwz       r29, 0xF4(r1)
  lwz       r28, 0xF0(r1)
  lwz       r0, 0x104(r1)
  mtlr      r0
  addi      r1, r1, 0x100
  blr
*/
}

/*
 * --INFO--
 * Address:	80035D78
 * Size:	000008
 */
void J2DOrthoGraph::getGrafType() const
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80035D80
 * Size:	000048
 */
void J2DGrafContext::place(float, float, float, float)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  fadds     f3, f1, f3
  stw       r0, 0x24(r1)
  fadds     f0, f2, f4
  addi      r4, r1, 0x8
  stfs      f1, 0x8(r1)
  stfs      f2, 0xC(r1)
  stfs      f3, 0x10(r1)
  stfs      f0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}