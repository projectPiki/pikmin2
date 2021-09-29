

/*
 * --INFO--
 * Address:	8002D144
 * Size:	00002C
 */
void JUTFont::JUTFont()
{
/*
.loc_0x0:
  lis       r5, 0x804A
  li        r4, -0x1
  addi      r5, r5, 0x458
  li        r0, 0
  stw       r5, 0x0(r3)
  stw       r4, 0xC(r3)
  stw       r4, 0x10(r3)
  stw       r4, 0x14(r3)
  stw       r4, 0x18(r3)
  stb       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8002D170
 * Size:	00004C
 */
void JUTFont::initialize_state()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, -0x1
  addi      r4, r1, 0xC
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r0, 0x8(r1)
  stw       r0, 0xC(r1)
  bl        .loc_0x4C
  li        r0, 0
  stb       r0, 0x5(r31)
  stw       r0, 0x8(r31)
  stb       r0, 0x4(r31)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x4C:
*/
}

/*
 * --INFO--
 * Address:	8002D1BC
 * Size:	000054
 */
void JUTFont::setCharColor(JUtility::TColor)
{
/*
.loc_0x0:
  lbz       r7, 0x0(r4)
  lbz       r6, 0x1(r4)
  stb       r7, 0xC(r3)
  lbz       r5, 0x2(r4)
  stb       r6, 0xD(r3)
  lbz       r0, 0x3(r4)
  stb       r5, 0xE(r3)
  stb       r0, 0xF(r3)
  stb       r7, 0x10(r3)
  stb       r6, 0x11(r3)
  stb       r5, 0x12(r3)
  stb       r0, 0x13(r3)
  stb       r7, 0x14(r3)
  stb       r6, 0x15(r3)
  stb       r5, 0x16(r3)
  stb       r0, 0x17(r3)
  stb       r7, 0x18(r3)
  stb       r6, 0x19(r3)
  stb       r5, 0x1A(r3)
  stb       r0, 0x1B(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8002D210
 * Size:	000064
 */
void JUTFont::setGradColor(JUtility::TColor, JUtility::TColor)
{
/*
.loc_0x0:
  lbz       r10, 0x0(r4)
  lbz       r0, 0x1(r4)
  stb       r10, 0xC(r3)
  lbz       r9, 0x2(r4)
  stb       r0, 0xD(r3)
  lbz       r8, 0x3(r4)
  stb       r9, 0xE(r3)
  lbz       r7, 0x0(r5)
  stb       r8, 0xF(r3)
  lbz       r6, 0x1(r5)
  stb       r10, 0x10(r3)
  lbz       r4, 0x2(r5)
  stb       r0, 0x11(r3)
  lbz       r0, 0x3(r5)
  stb       r9, 0x12(r3)
  stb       r8, 0x13(r3)
  stb       r7, 0x14(r3)
  stb       r6, 0x15(r3)
  stb       r4, 0x16(r3)
  stb       r0, 0x17(r3)
  stb       r7, 0x18(r3)
  stb       r6, 0x19(r3)
  stb       r4, 0x1A(r3)
  stb       r0, 0x1B(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8002D274
 * Size:	000118
 */
void JUTFont::drawString_size_scale(float, float, float, float, const char *, unsigned long, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stfd      f30, 0x50(r1)
  psq_st    f30,0x58(r1),0,0
  stfd      f29, 0x40(r1)
  psq_st    f29,0x48(r1),0,0
  stfd      f28, 0x30(r1)
  psq_st    f28,0x38(r1),0,0
  stfd      f27, 0x20(r1)
  psq_st    f27,0x28(r1),0,0
  stmw      r27, 0xC(r1)
  fmr       f27, f1
  mr        r27, r3
  fmr       f28, f2
  mr        r28, r4
  fmr       f29, f3
  mr        r29, r5
  fmr       f30, f4
  mr        r30, r6
  fmr       f31, f27
  b         .loc_0xD0

.loc_0x60:
  lwz       r12, 0x0(r27)
  mr        r3, r27
  lbz       r4, 0x0(r28)
  lwz       r12, 0x40(r12)
  mr        r31, r4
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x94
  lbzu      r0, 0x1(r28)
  rlwinm    r31,r31,8,0,23
  subi      r29, r29, 0x1
  or        r31, r31, r0

.loc_0x94:
  mr        r3, r27
  fmr       f1, f27
  lwz       r12, 0x0(r27)
  fmr       f2, f28
  fmr       f3, f29
  mr        r4, r31
  lwz       r12, 0x14(r12)
  fmr       f4, f30
  mr        r5, r30
  mtctr     r12
  bctrl     
  fadds     f27, f27, f1
  li        r30, 0x1
  subi      r29, r29, 0x1
  addi      r28, r28, 0x1

.loc_0xD0:
  cmplwi    r29, 0
  bne+      .loc_0x60
  fsubs     f1, f27, f31
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  psq_l     f29,0x48(r1),0,0
  lfd       f29, 0x40(r1)
  psq_l     f28,0x38(r1),0,0
  lfd       f28, 0x30(r1)
  psq_l     f27,0x28(r1),0,0
  lfd       f27, 0x20(r1)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	8002D38C
 * Size:	000048
 */
void JUTFont::~JUTFont()
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
  addi      r0, r5, 0x458
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x9304

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
 * Address:	8002D3D4
 * Size:	00002C
 */
void JUTFont::setGX(JUtility::TColor, JUtility::TColor)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
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
 * Address:	8002D400
 * Size:	00002C
 */
void JUTFont::getCellWidth() const
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
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
 * Address:	8002D42C
 * Size:	00002C
 */
void JUTFont::getCellHeight() const
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}