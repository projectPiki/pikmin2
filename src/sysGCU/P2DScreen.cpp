

/*
 * --INFO--
 * Address:	80434AC0
 * Size:	000064
 */
void P2DScreen::Mgr::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  bl        -0x3F5664
  lis       r3, 0x804F
  addi      r30, r31, 0x118
  subi      r0, r3, 0x3A60
  stw       r0, 0x0(r31)
  mr        r3, r30
  bl        -0x23760
  lis       r3, 0x804D
  li        r0, 0
  addi      r4, r3, 0x7B0C
  mr        r3, r31
  stw       r4, 0x0(r30)
  stw       r0, 0x18(r30)
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
 * Address:	80434B24
 * Size:	000138
 */
void P2DScreen::Mgr::addCallBack( (unsigned long long, P2DScreen::Node *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr.       r30, r7
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r5, 0x8(r1)
  stw       r6, 0xC(r1)
  bne-      .loc_0x48
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5940
  li        r4, 0x49
  subi      r5, r5, 0x5930
  crclr     6, 0x6
  bl        -0x40A528

.loc_0x48:
  mr        r3, r29
  lwz       r5, 0x8(r1)
  lwz       r12, 0x0(r29)
  lwz       r6, 0xC(r1)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r31, r3
  beq-      .loc_0x94
  stw       r31, 0x18(r30)
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  mr        r4, r30
  addi      r3, r29, 0x118
  bl        -0x237A8
  b         .loc_0x118

.loc_0x94:
  lbz       r3, 0x8(r1)
  li        r0, 0x3F
  extsb.    r3, r3
  bne-      .loc_0xA8
  stb       r0, 0x8(r1)

.loc_0xA8:
  lbz       r3, 0x9(r1)
  extsb.    r3, r3
  bne-      .loc_0xB8
  stb       r0, 0x9(r1)

.loc_0xB8:
  lbz       r3, 0xA(r1)
  extsb.    r3, r3
  bne-      .loc_0xC8
  stb       r0, 0xA(r1)

.loc_0xC8:
  lbz       r3, 0xB(r1)
  extsb.    r3, r3
  bne-      .loc_0xD8
  stb       r0, 0xB(r1)

.loc_0xD8:
  lbz       r3, 0xC(r1)
  extsb.    r3, r3
  bne-      .loc_0xE8
  stb       r0, 0xC(r1)

.loc_0xE8:
  lbz       r3, 0xD(r1)
  extsb.    r3, r3
  bne-      .loc_0xF8
  stb       r0, 0xD(r1)

.loc_0xF8:
  lbz       r3, 0xE(r1)
  extsb.    r3, r3
  bne-      .loc_0x108
  stb       r0, 0xE(r1)

.loc_0x108:
  lbz       r3, 0xF(r1)
  extsb.    r3, r3
  bne-      .loc_0x118
  stb       r0, 0xF(r1)

.loc_0x118:
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
 * Address:	80434C5C
 * Size:	000084
 */
void P2DScreen::Mgr::addCallBackPane( (J2DPane *, P2DScreen::Node *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr.       r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  bne-      .loc_0x44
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5940
  li        r4, 0x61
  subi      r5, r5, 0x5930
  crclr     6, 0x6
  bl        -0x40A65C

.loc_0x44:
  stw       r30, 0x18(r31)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  addi      r3, r29, 0x118
  bl        -0x238B8
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
 * Address:	80434CE0
 * Size:	00004C
 */
void P2DScreen::Mgr::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r31, 0x128(r3)
  b         .loc_0x30

.loc_0x18:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
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
 * Address:	80434D2C
 * Size:	000080
 */
void P2DScreen::Mgr::draw( (Graphics &, J2DGrafContext &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f1, 0x2430(r2)
  stw       r0, 0x24(r1)
  fmr       f2, f1
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  mr        r4, r30
  bl        -0x3F4AB0
  lwz       r31, 0x128(r31)
  b         .loc_0x5C

.loc_0x3C:
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  mr        r5, r30
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x4(r31)

.loc_0x5C:
  cmplwi    r31, 0
  bne+      .loc_0x3C
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
 * Address:	80434DAC
 * Size:	000088
 */
void P2DScreen::Mgr_tuning::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  bl        -0x3F5950
  lis       r3, 0x804F
  addi      r30, r31, 0x118
  subi      r0, r3, 0x3A60
  stw       r0, 0x0(r31)
  mr        r3, r30
  bl        -0x23A4C
  lis       r4, 0x804D
  lis       r3, 0x804F
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x0(r30)
  subi      r0, r3, 0x3B00
  lfs       f1, 0x2444(r2)
  mr        r3, r31
  stw       r4, 0x18(r30)
  lfs       f0, 0x2448(r2)
  stw       r0, 0x0(r31)
  stfs      f1, 0x138(r31)
  stfs      f1, 0x13C(r31)
  stfs      f0, 0x140(r31)
  stfs      f0, 0x144(r31)
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
 * Address:	80434E34
 * Size:	000128
 */
void P2DScreen::Mgr_tuning::draw( (Graphics &, J2DGrafContext &))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r5
  stw       r29, 0x24(r1)
  mr        r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  bl        -0x11C38
  lhz       r31, 0x4(r3)
  bl        -0x11C40
  lhz       r5, 0x6(r3)
  lis       r0, 0x4330
  stw       r31, 0xC(r1)
  mr        r3, r28
  lfd       f2, 0x2450(r2)
  li        r4, 0x7A
  stw       r0, 0x8(r1)
  lfs       f4, 0x244C(r2)
  lfd       f0, 0x8(r1)
  stw       r5, 0x14(r1)
  fsubs     f1, f0, f2
  lfs       f3, 0x2430(r2)
  stw       r0, 0x10(r1)
  lfd       f0, 0x10(r1)
  fmuls     f1, f4, f1
  fsubs     f0, f0, f2
  fmuls     f2, f4, f0
  bl        -0x3FCAAC
  lfs       f1, 0x13C(r28)
  mr        r3, r28
  lfs       f0, 0x138(r28)
  stfs      f0, 0xCC(r28)
  stfs      f1, 0xD0(r28)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x144(r28)
  mr        r3, r28
  lfs       f0, 0x140(r28)
  stfs      f0, 0xD4(r28)
  stfs      f1, 0xD8(r28)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x2430(r2)
  mr        r3, r28
  mr        r4, r30
  fmr       f2, f1
  bl        -0x3F4C5C
  lwz       r31, 0x128(r28)
  b         .loc_0x100

.loc_0xE0:
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  mr        r5, r30
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x4(r31)

.loc_0x100:
  cmplwi    r31, 0
  bne+      .loc_0xE0
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}
