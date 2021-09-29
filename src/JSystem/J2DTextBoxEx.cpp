

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void J2DTextBoxEx::J2DTextBoxEx()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800596A8
 * Size:	000330
 */
void J2DTextBoxEx::J2DTextBoxEx(J2DPane *, JSURandomInputStream *, unsigned long, J2DMaterial *)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stmw      r25, 0x64(r1)
  mr        r27, r3
  mr        r25, r4
  mr        r28, r5
  mr        r29, r6
  mr        r30, r7
  bl        -0x18758
  lis       r3, 0x804A
  li        r0, 0
  addi      r4, r3, 0x1300
  mr        r3, r28
  stw       r4, 0x0(r27)
  stw       r0, 0x144(r27)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  mr        r3, r28
  addi      r4, r1, 0x18
  li        r5, 0x8
  bl        -0x33334
  lwz       r0, 0x18(r1)
  mr        r3, r28
  stw       r0, 0x8(r27)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  mr        r26, r3
  mr        r3, r28
  addi      r4, r1, 0x10
  li        r5, 0x8
  bl        -0x330EC
  mr        r3, r27
  mr        r4, r25
  mr        r5, r28
  bl        -0x2064C
  lwz       r0, 0x14(r1)
  mr        r3, r28
  li        r5, 0
  add       r4, r26, r0
  bl        -0x33054
  mr        r3, r28
  addi      r4, r1, 0x20
  li        r5, 0x20
  bl        -0x33398
  lhz       r3, 0x22(r1)
  li        r0, 0
  sth       r3, 0x13C(r27)
  lhz       r3, 0x24(r1)
  sth       r3, 0x13E(r27)
  stw       r0, 0x138(r27)
  lhz       r0, 0x13E(r27)
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x148
  mulli     r0, r0, 0x88
  mr        r3, r27
  add       r0, r30, r0
  stw       r0, 0x138(r27)
  lhz       r0, 0x13E(r27)
  mulli     r0, r0, 0x88
  add       r4, r30, r0
  stw       r27, 0x4(r4)
  lwz       r12, 0x0(r27)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x138(r27)
  cmplwi    r3, 0
  beq-      .loc_0x148
  lwz       r3, 0x70(r3)
  cmplwi    r3, 0
  beq-      .loc_0x148
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x100(r27)

.loc_0x148:
  lha       r0, 0x26(r1)
  lis       r4, 0x4330
  stw       r4, 0x40(r1)
  mr        r3, r27
  xoris     r0, r0, 0x8000
  lfd       f2, -0x7A18(r2)
  stw       r0, 0x44(r1)
  lfd       f1, -0x7A10(r2)
  lfd       f0, 0x40(r1)
  stw       r4, 0x48(r1)
  fsubs     f0, f0, f2
  stw       r4, 0x50(r1)
  stfs      f0, 0x114(r27)
  lha       r0, 0x28(r1)
  stw       r4, 0x58(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0x4C(r1)
  lfd       f0, 0x48(r1)
  fsubs     f0, f0, f2
  stfs      f0, 0x118(r27)
  lhz       r0, 0x2A(r1)
  stw       r0, 0x54(r1)
  lfd       f0, 0x50(r1)
  fsubs     f0, f0, f1
  stfs      f0, 0x11C(r27)
  lhz       r0, 0x2C(r1)
  stw       r0, 0x5C(r1)
  lfd       f0, 0x58(r1)
  fsubs     f0, f0, f1
  stfs      f0, 0x120(r27)
  lbz       r4, 0x2E(r1)
  lbz       r0, 0x2F(r1)
  rlwinm    r4,r4,2,0,29
  or        r0, r4, r0
  stb       r0, 0x130(r27)
  lwz       r0, 0x30(r1)
  stw       r0, 0xC(r1)
  lbz       r4, 0xC(r1)
  lbz       r0, 0xD(r1)
  stb       r4, 0x104(r27)
  lbz       r4, 0xE(r1)
  stb       r0, 0x105(r27)
  lbz       r0, 0xF(r1)
  stb       r4, 0x106(r27)
  stb       r0, 0x107(r27)
  lwz       r0, 0x34(r1)
  stw       r0, 0x8(r1)
  lbz       r4, 0x8(r1)
  lbz       r0, 0x9(r1)
  stb       r4, 0x108(r27)
  lbz       r4, 0xA(r1)
  stb       r0, 0x109(r27)
  lbz       r0, 0xB(r1)
  stb       r4, 0x10A(r27)
  stb       r0, 0x10B(r27)
  lbz       r4, 0x38(r1)
  lwz       r12, 0x0(r27)
  neg       r0, r4
  or        r0, r0, r4
  lwz       r12, 0x28(r12)
  rlwinm    r4,r0,1,31,31
  mtctr     r12
  bctrl     
  rlwinm.   r0,r29,0,6,6
  li        r26, 0
  bne-      .loc_0x270
  lhz       r3, 0x3C(r1)
  extsh     r0, r3
  mr        r26, r3
  cmpwi     r0, -0x1
  bne-      .loc_0x270
  lhz       r3, 0x3E(r1)
  addi      r0, r3, 0x1
  rlwinm    r26,r0,0,16,31

.loc_0x270:
  li        r0, 0
  rlwinm.   r3,r26,0,16,31
  sth       r0, 0x132(r27)
  stw       r0, 0x124(r27)
  beq-      .loc_0x28C
  bl        -0x35980
  stw       r3, 0x124(r27)

.loc_0x28C:
  lwz       r0, 0x124(r27)
  cmplwi    r0, 0
  beq-      .loc_0x2D4
  sth       r26, 0x132(r27)
  rlwinm    r3,r26,0,16,31
  subi      r0, r3, 0x1
  lhz       r26, 0x3E(r1)
  cmpw      r0, r26
  bge-      .loc_0x2B4
  rlwinm    r26,r0,0,16,31

.loc_0x2B4:
  lwz       r4, 0x124(r27)
  mr        r3, r28
  rlwinm    r5,r26,0,16,31
  bl        -0x3331C
  lwz       r3, 0x124(r27)
  rlwinm    r0,r26,0,16,31
  li        r4, 0
  stbx      r4, r3, r0

.loc_0x2D4:
  mr        r3, r28
  lhz       r4, 0x3E(r1)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1C(r1)
  mr        r3, r28
  li        r5, 0
  add       r4, r31, r0
  bl        -0x3329C
  lfs       f0, -0x7A20(r2)
  li        r0, 0
  mr        r3, r27
  stfs      f0, 0x10C(r27)
  stfs      f0, 0x110(r27)
  stb       r0, 0x131(r27)
  stb       r0, 0x140(r27)
  lmw       r25, 0x64(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void J2DTextBoxEx::J2DTextBoxEx(const ResFONT *, const char *, short, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void J2DTextBoxEx::J2DTextBoxEx(const char *, const char *, short, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void J2DTextBoxEx::J2DTextBoxEx(unsigned long long, const JGeometry::TBox2<float> &, const ResFONT *, const char *, short, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void J2DTextBoxEx::J2DTextBoxEx(unsigned long long, const JGeometry::TBox2<float> &, const char *, const char *, short, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void J2DTextBoxEx::J2DTextBoxEx(unsigned long long, const JGeometry::TBox2<float> &, const ResFONT *, const char *, short, J2DTextBoxHBinding, J2DTextBoxVBinding, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void J2DTextBoxEx::J2DTextBoxEx(unsigned long long, const JGeometry::TBox2<float> &, const char *, const char *, short, J2DTextBoxHBinding, J2DTextBoxVBinding, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00018C
 */
void J2DTextBoxEx::initialize(unsigned long, const ResFONT *, const char *, short, J2DTextBoxHBinding, J2DTextBoxVBinding)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800599D8
 * Size:	000090
 */
void J2DTextBoxEx::~J2DTextBoxEx()
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
  beq-      .loc_0x74
  lis       r3, 0x804A
  addi      r0, r3, 0x1300
  stw       r0, 0x0(r30)
  lbz       r0, 0x140(r30)
  cmplwi    r0, 0
  beq-      .loc_0x58
  lwz       r3, 0x138(r30)
  cmplwi    r3, 0
  beq-      .loc_0x58
  lwz       r12, 0x0(r3)
  li        r4, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x58:
  mr        r3, r30
  li        r4, 0
  bl        -0x17F48
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x35994

.loc_0x74:
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
 * Address:	80059A68
 * Size:	000300
 */
void J2DTextBoxEx::drawSelf(float, float, float (*) [3][4])
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  stw       r0, 0x124(r1)
  stfd      f31, 0x110(r1)
  psq_st    f31,0x118(r1),0,0
  stfd      f30, 0x100(r1)
  psq_st    f30,0x108(r1),0,0
  stw       r31, 0xFC(r1)
  stw       r30, 0xF8(r1)
  mr        r30, r3
  fmr       f30, f1
  lwz       r3, 0x138(r3)
  fmr       f31, f2
  mr        r31, r4
  li        r4, 0
  cmplwi    r3, 0
  beq-      .loc_0x64
  lwz       r3, 0x70(r3)
  cmplwi    r3, 0
  beq-      .loc_0x64
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3

.loc_0x64:
  lwz       r5, 0x128(r30)
  lis       r0, 0x4330
  stw       r0, 0xB8(r1)
  addi      r3, r1, 0x50
  lfd       f2, -0x7A18(r2)
  addi      r6, r1, 0x18
  stw       r5, 0x10(r1)
  addi      r5, r1, 0x1C
  addi      r7, r1, 0x14
  addi      r8, r1, 0x10
  lwz       r9, 0x12C(r30)
  stw       r0, 0xC8(r1)
  stw       r9, 0x14(r1)
  lwz       r0, 0x108(r30)
  stw       r0, 0x18(r1)
  lwz       r0, 0x104(r30)
  stw       r0, 0x1C(r1)
  lfs       f1, 0x114(r30)
  lfs       f0, 0x118(r30)
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f1, 0xB0(r1)
  stfd      f0, 0xC0(r1)
  lwz       r9, 0xB4(r1)
  lwz       r0, 0xC4(r1)
  xoris     r9, r9, 0x8000
  xoris     r0, r0, 0x8000
  stw       r9, 0xBC(r1)
  stw       r0, 0xCC(r1)
  lfd       f1, 0xB8(r1)
  lfd       f0, 0xC8(r1)
  fsubs     f1, f1, f2
  fsubs     f2, f0, f2
  bl        -0x1C2D4
  lfs       f0, 0x11C(r30)
  lis       r0, 0x4330
  lfs       f2, 0x120(r30)
  fctiwz    f1, f0
  stw       r0, 0xE8(r1)
  fctiwz    f3, f2
  lfd       f2, -0x7A18(r2)
  stw       r0, 0xD8(r1)
  lfs       f0, -0x7A20(r2)
  stfd      f1, 0xE0(r1)
  lwz       r0, 0xE4(r1)
  stfd      f3, 0xD0(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0xEC(r1)
  lwz       r0, 0xD4(r1)
  lfd       f1, 0xE8(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0xDC(r1)
  fsubs     f3, f1, f2
  lfd       f1, 0xD8(r1)
  fcmpo     cr0, f3, f0
  fsubs     f1, f1, f2
  ble-      .loc_0x14C
  b         .loc_0x150

.loc_0x14C:
  fmr       f3, f0

.loc_0x150:
  lfs       f0, -0x7A20(r2)
  stfs      f3, 0xA0(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x164
  b         .loc_0x168

.loc_0x164:
  fmr       f1, f0

.loc_0x168:
  stfs      f1, 0xA4(r1)
  lwz       r3, 0x138(r30)
  cmplwi    r3, 0
  beq-      .loc_0x2CC
  bl        -0x7998
  mr        r3, r31
  addi      r4, r30, 0x80
  addi      r5, r1, 0x20
  bl        0x90710
  addi      r3, r1, 0x20
  li        r4, 0
  bl        0x8F97C
  bl        0x8AAD0
  li        r3, 0x9
  li        r4, 0x1
  bl        0x8A678
  li        r3, 0xB
  li        r4, 0x1
  bl        0x8A66C
  li        r3, 0xD
  li        r4, 0x1
  bl        0x8A660
  lfs       f1, 0x20(r30)
  addi      r3, r1, 0x50
  lfs       f0, 0x24(r30)
  fadds     f1, f30, f1
  fadds     f2, f31, f0
  bl        -0x1BF60
  lwz       r3, 0x138(r30)
  lbz       r0, 0xE(r3)
  cmplwi    r0, 0
  beq-      .loc_0x2CC
  lwz       r0, 0x124(r30)
  cmplwi    r0, 0
  beq-      .loc_0x2CC
  lhz       r0, 0x1C(r3)
  li        r31, 0xFF
  rlwinm    r0,r0,0,31,31
  cmplwi    r0, 0x1
  bne-      .loc_0x21C
  lbz       r0, 0xF(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x240
  lbz       r31, 0xB3(r30)
  b         .loc_0x240

.loc_0x21C:
  lbz       r0, 0xB4(r30)
  cmplwi    r0, 0
  beq-      .loc_0x240
  lbz       r0, 0xB3(r30)
  addi      r4, r1, 0xC
  li        r3, 0x2
  stw       r0, 0x8(r1)
  stw       r0, 0xC(r1)
  bl        0x8D0D0

.loc_0x240:
  lfs       f1, 0x28(r30)
  lis       r0, 0x4330
  lfs       f0, 0x20(r30)
  mr        r7, r31
  lbz       r4, 0x130(r30)
  addi      r3, r1, 0x50
  fsubs     f2, f1, f0
  lfs       f3, -0x7A08(r2)
  lfs       f1, 0x2C(r30)
  rlwinm    r5,r4,30,30,31
  lfs       f0, 0x24(r30)
  rlwinm    r6,r4,0,30,31
  fadds     f3, f3, f2
  stw       r0, 0xE0(r1)
  fsubs     f0, f1, f0
  lfd       f2, -0x7A18(r2)
  stw       r0, 0xD0(r1)
  fctiwz    f1, f3
  fctiwz    f0, f0
  lwz       r4, 0x124(r30)
  lfs       f3, 0x10C(r30)
  stfd      f1, 0xE8(r1)
  lfs       f4, 0x110(r30)
  stfd      f0, 0xD8(r1)
  lwz       r8, 0xEC(r1)
  lwz       r0, 0xDC(r1)
  xoris     r8, r8, 0x8000
  xoris     r0, r0, 0x8000
  stw       r8, 0xE4(r1)
  stw       r0, 0xD4(r1)
  lfd       f1, 0xE0(r1)
  lfd       f0, 0xD0(r1)
  fsubs     f1, f1, f2
  fsubs     f2, f0, f2
  bl        -0x1BD18

.loc_0x2CC:
  addi      r3, r1, 0x50
  li        r4, -0x1
  bl        -0x1C42C
  psq_l     f31,0x118(r1),0,0
  lfd       f31, 0x110(r1)
  psq_l     f30,0x108(r1),0,0
  lfd       f30, 0x100(r1)
  lwz       r31, 0xFC(r1)
  lwz       r0, 0x124(r1)
  lwz       r30, 0xF8(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr
*/
}

/*
 * --INFO--
 * Address:	80059D68
 * Size:	000240
 */
void J2DTextBoxEx::draw(float, float)
{
/*
.loc_0x0:
  stwu      r1, -0xD0(r1)
  mflr      r0
  stw       r0, 0xD4(r1)
  stfd      f31, 0xC0(r1)
  psq_st    f31,0xC8(r1),0,0
  stfd      f30, 0xB0(r1)
  psq_st    f30,0xB8(r1),0,0
  stw       r31, 0xAC(r1)
  mr        r31, r3
  fmr       f30, f1
  lbz       r0, 0xB0(r3)
  fmr       f31, f2
  cmplwi    r0, 0
  beq-      .loc_0x21C
  lwz       r3, 0x138(r31)
  li        r4, 0
  cmplwi    r3, 0
  beq-      .loc_0x68
  lwz       r3, 0x70(r3)
  cmplwi    r3, 0
  beq-      .loc_0x68
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3

.loc_0x68:
  lwz       r0, 0x128(r31)
  addi      r3, r1, 0x48
  addi      r5, r1, 0x14
  addi      r6, r1, 0x10
  stw       r0, 0x8(r1)
  addi      r7, r1, 0xC
  addi      r8, r1, 0x8
  lwz       r0, 0x12C(r31)
  stw       r0, 0xC(r1)
  lwz       r0, 0x108(r31)
  stw       r0, 0x10(r1)
  lwz       r0, 0x104(r31)
  stw       r0, 0x14(r1)
  lfs       f1, 0x114(r31)
  lfs       f2, 0x118(r31)
  bl        -0x1C590
  lfs       f1, 0x11C(r31)
  lfs       f0, -0x7A20(r2)
  lfs       f2, 0x120(r31)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xC0
  b         .loc_0xC4

.loc_0xC0:
  fmr       f1, f0

.loc_0xC4:
  lfs       f0, -0x7A20(r2)
  stfs      f1, 0x98(r1)
  fcmpo     cr0, f2, f0
  ble-      .loc_0xD8
  b         .loc_0xDC

.loc_0xD8:
  fmr       f2, f0

.loc_0xDC:
  stfs      f2, 0x9C(r1)
  lbz       r0, 0xB2(r31)
  stb       r0, 0xB3(r31)
  lwz       r3, 0x138(r31)
  cmplwi    r3, 0
  beq-      .loc_0x210
  bl        -0x7C14
  mr        r3, r31
  lfs       f3, -0x7A20(r2)
  lwz       r12, 0x0(r31)
  fmr       f1, f30
  fmr       f2, f31
  lwz       r12, 0x48(r12)
  fmr       f4, f3
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x50
  li        r4, 0
  bl        0x8F6EC
  li        r3, 0
  bl        0x8F784
  lwz       r3, 0x138(r31)
  lbz       r0, 0xE(r3)
  cmplwi    r0, 0
  bne-      .loc_0x150
  addi      r3, r1, 0x48
  li        r4, -0x1
  bl        -0x1C5A0
  b         .loc_0x21C

.loc_0x150:
  bl        0x8A818
  li        r3, 0x9
  li        r4, 0x1
  bl        0x8A3C0
  li        r3, 0xB
  li        r4, 0x1
  bl        0x8A3B4
  li        r3, 0xD
  li        r4, 0x1
  bl        0x8A3A8
  lwz       r6, 0x124(r31)
  cmplwi    r6, 0
  beq-      .loc_0x1B4
  lwz       r3, 0x138(r31)
  li        r4, 0xFF
  lbz       r0, 0xF(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x19C
  lbz       r4, 0xB3(r31)

.loc_0x19C:
  lfs       f1, -0x7A20(r2)
  addi      r3, r1, 0x48
  subi      r5, r2, 0x7A04
  fmr       f2, f1
  crset     6, 0x6
  bl        -0x1C10C

.loc_0x1B4:
  li        r31, 0

.loc_0x1B8:
  mr        r3, r31
  li        r4, 0
  li        r5, 0x1
  li        r6, 0x2
  li        r7, 0x3
  bl        0x8E998
  addi      r31, r31, 0x1
  cmpwi     r31, 0x4
  blt+      .loc_0x1B8
  li        r3, 0
  bl        0x8E40C
  li        r31, 0

.loc_0x1E8:
  mr        r3, r31
  bl        0x8E424
  addi      r31, r31, 0x1
  cmpwi     r31, 0x10
  blt+      .loc_0x1E8
  addi      r3, r1, 0x18
  bl        0x90338
  addi      r3, r1, 0x18
  li        r4, 0
  bl        0x8F604

.loc_0x210:
  addi      r3, r1, 0x48
  li        r4, -0x1
  bl        -0x1C670

.loc_0x21C:
  psq_l     f31,0xC8(r1),0,0
  lfd       f31, 0xC0(r1)
  psq_l     f30,0xB8(r1),0,0
  lfd       f30, 0xB0(r1)
  lwz       r0, 0xD4(r1)
  lwz       r31, 0xAC(r1)
  mtlr      r0
  addi      r1, r1, 0xD0
  blr
*/
}

/*
 * --INFO--
 * Address:	80059FA8
 * Size:	00026C
 */
void J2DTextBoxEx::draw(float, float, float, J2DTextBoxHBinding)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stfd      f30, 0xC0(r1)
  psq_st    f30,0xC8(r1),0,0
  stfd      f29, 0xB0(r1)
  psq_st    f29,0xB8(r1),0,0
  stw       r31, 0xAC(r1)
  stw       r30, 0xA8(r1)
  mr        r30, r3
  fmr       f29, f1
  lbz       r0, 0xB0(r3)
  fmr       f30, f2
  fmr       f31, f3
  mr        r31, r4
  cmplwi    r0, 0
  beq-      .loc_0x23C
  lwz       r3, 0x138(r30)
  li        r4, 0
  cmplwi    r3, 0
  beq-      .loc_0x7C
  lwz       r3, 0x70(r3)
  cmplwi    r3, 0
  beq-      .loc_0x7C
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3

.loc_0x7C:
  lwz       r0, 0x128(r30)
  addi      r3, r1, 0x48
  addi      r5, r1, 0x14
  addi      r6, r1, 0x10
  stw       r0, 0x8(r1)
  addi      r7, r1, 0xC
  addi      r8, r1, 0x8
  lwz       r0, 0x12C(r30)
  stw       r0, 0xC(r1)
  lwz       r0, 0x108(r30)
  stw       r0, 0x10(r1)
  lwz       r0, 0x104(r30)
  stw       r0, 0x14(r1)
  lfs       f1, 0x114(r30)
  lfs       f2, 0x118(r30)
  bl        -0x1C7E4
  lfs       f1, 0x11C(r30)
  lfs       f0, -0x7A20(r2)
  lfs       f2, 0x120(r30)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xD4
  b         .loc_0xD8

.loc_0xD4:
  fmr       f1, f0

.loc_0xD8:
  lfs       f0, -0x7A20(r2)
  stfs      f1, 0x98(r1)
  fcmpo     cr0, f2, f0
  ble-      .loc_0xEC
  b         .loc_0xF0

.loc_0xEC:
  fmr       f2, f0

.loc_0xF0:
  stfs      f2, 0x9C(r1)
  lbz       r0, 0xB2(r30)
  stb       r0, 0xB3(r30)
  lwz       r3, 0x138(r30)
  cmplwi    r3, 0
  beq-      .loc_0x230
  bl        -0x7E68
  mr        r3, r30
  lfs       f3, -0x7A20(r2)
  lwz       r12, 0x0(r30)
  fmr       f1, f29
  fmr       f2, f30
  lwz       r12, 0x48(r12)
  fmr       f4, f3
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x50
  li        r4, 0
  bl        0x8F498
  li        r3, 0
  bl        0x8F530
  lwz       r3, 0x138(r30)
  lbz       r0, 0xE(r3)
  cmplwi    r0, 0
  bne-      .loc_0x164
  addi      r3, r1, 0x48
  li        r4, -0x1
  bl        -0x1C7F4
  b         .loc_0x23C

.loc_0x164:
  bl        0x8A5C4
  li        r3, 0x9
  li        r4, 0x1
  bl        0x8A16C
  li        r3, 0xB
  li        r4, 0x1
  bl        0x8A160
  li        r3, 0xD
  li        r4, 0x1
  bl        0x8A154
  lwz       r4, 0x124(r30)
  cmplwi    r4, 0
  beq-      .loc_0x1D4
  lwz       r3, 0x138(r30)
  li        r7, 0xFF
  lbz       r0, 0xF(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x1B0
  lbz       r7, 0xB3(r30)

.loc_0x1B0:
  lfs       f2, -0x7A20(r2)
  fmr       f1, f31
  lfs       f0, 0x120(r30)
  mr        r5, r31
  fmr       f3, f2
  addi      r3, r1, 0x48
  fneg      f4, f0
  li        r6, 0x2
  bl        -0x1C160

.loc_0x1D4:
  li        r30, 0

.loc_0x1D8:
  mr        r3, r30
  li        r4, 0
  li        r5, 0x1
  li        r6, 0x2
  li        r7, 0x3
  bl        0x8E738
  addi      r30, r30, 0x1
  cmpwi     r30, 0x4
  blt+      .loc_0x1D8
  li        r3, 0
  bl        0x8E1AC
  li        r30, 0

.loc_0x208:
  mr        r3, r30
  bl        0x8E1C4
  addi      r30, r30, 0x1
  cmpwi     r30, 0x10
  blt+      .loc_0x208
  addi      r3, r1, 0x18
  bl        0x900D8
  addi      r3, r1, 0x18
  li        r4, 0
  bl        0x8F3A4

.loc_0x230:
  addi      r3, r1, 0x48
  li        r4, -0x1
  bl        -0x1C8D0

.loc_0x23C:
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  psq_l     f29,0xB8(r1),0,0
  lfd       f29, 0xB0(r1)
  lwz       r31, 0xAC(r1)
  lwz       r0, 0xE4(r1)
  lwz       r30, 0xA8(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	8005A214
 * Size:	000064
 */
void J2DTextBoxEx::setFont(JUTFont *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  beq-      .loc_0x4C
  lwz       r3, 0x138(r30)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  lwz       r3, 0x70(r3)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x94(r12)
  mtctr     r12
  bctrl     
  stw       r31, 0x100(r30)

.loc_0x4C:
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
 * Address:	8005A278
 * Size:	00004C
 */
void J2DTextBoxEx::getFont() const
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lwz       r3, 0x138(r3)
  stw       r0, 0x14(r1)
  cmplwi    r3, 0
  beq-      .loc_0x38
  lwz       r3, 0x70(r3)
  cmplwi    r3, 0
  beq-      .loc_0x38
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x3C

.loc_0x38:
  li        r3, 0

.loc_0x3C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void J2DTextBoxEx::setTevOrder(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8005A2C4
 * Size:	0000A4
 */
void J2DTextBoxEx::setTevStage(bool)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x138(r3)
  lwz       r3, 0x70(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r31,0,24,31
  mr        r4, r3
  bne-      .loc_0x54
  mr        r3, r30
  li        r5, 0
  bl        .loc_0xA4
  b         .loc_0x8C

.loc_0x54:
  mr        r3, r30
  li        r5, 0x1
  bl        .loc_0xA4
  lwz       r3, 0x138(r30)
  li        r4, 0x1
  lwz       r3, 0x70(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r30
  li        r5, 0x2
  bl        .loc_0xA4

.loc_0x8C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xA4:
*/
}

/*
 * --INFO--
 * Address:	8005A368
 * Size:	0002B0
 */
void J2DTextBoxEx::setStage(J2DTevStage *, J2DTextBoxEx::stage_enum)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  lis       r3, 0x8048
  stmw      r18, 0x48(r1)
  subi      r28, r3, 0x7938
  rlwinm    r27,r5,2,0,29
  addi      r6, r1, 0x34
  addi      r3, r1, 0x35
  addi      r19, r1, 0x36
  mulli     r26, r5, 0x5
  addi      r20, r1, 0x37
  addi      r25, r1, 0x18
  addi      r21, r1, 0x1C
  addi      r22, r1, 0x1B
  addi      r23, r1, 0x1A
  addi      r24, r1, 0x19
  lwz       r8, 0x0(r28)
  lwz       r7, 0x4(r28)
  lwz       r0, 0x8(r28)
  stw       r8, 0x34(r1)
  lwz       r29, 0xC(r28)
  stw       r7, 0x38(r1)
  lwz       r30, 0x10(r28)
  stw       r0, 0x3C(r1)
  lwz       r31, 0x14(r28)
  lbzx      r0, r6, r27
  lwz       r12, 0x18(r28)
  rlwinm    r5,r0,4,0,27
  lbzx      r0, r3, r27
  lwz       r11, 0x1C(r28)
  or        r18, r5, r0
  lwz       r10, 0x20(r28)
  lhz       r9, 0x24(r28)
  lbz       r8, 0x26(r28)
  lwz       r7, 0x28(r28)
  lwz       r6, 0x2C(r28)
  lwz       r5, 0x30(r28)
  lhz       r3, 0x34(r28)
  lbz       r0, 0x36(r28)
  lbzx      r19, r19, r27
  lbzx      r28, r20, r27
  rlwinm    r20,r19,4,0,27
  stb       r18, 0x2(r4)
  or        r28, r20, r28
  stb       r28, 0x3(r4)
  stw       r12, 0x18(r1)
  lbz       r28, 0x1(r4)
  stw       r11, 0x1C(r1)
  rlwinm    r12,r28,0,30,28
  stw       r10, 0x20(r1)
  sth       r9, 0x24(r1)
  stb       r8, 0x26(r1)
  lbzx      r11, r25, r26
  stw       r7, 0x8(r1)
  rlwinm    r8,r11,2,22,29
  cmplwi    r11, 0x1
  or        r10, r12, r8
  stw       r6, 0xC(r1)
  lbzx      r9, r21, r26
  stw       r29, 0x28(r1)
  lbzx      r8, r22, r26
  stw       r30, 0x2C(r1)
  lbzx      r7, r23, r26
  stw       r31, 0x30(r1)
  lbzx      r6, r24, r26
  stw       r5, 0x10(r1)
  sth       r3, 0x14(r1)
  stb       r0, 0x16(r1)
  stb       r10, 0x1(r4)
  bgt-      .loc_0x13C
  lbz       r3, 0x1(r4)
  rlwinm    r0,r7,4,20,27
  rlwinm    r3,r3,0,28,25
  or        r0, r3, r0
  stb       r0, 0x1(r4)
  lbz       r0, 0x1(r4)
  rlwinm    r0,r0,0,0,29
  or        r0, r0, r6
  stb       r0, 0x1(r4)
  b         .loc_0x158

.loc_0x13C:
  lbz       r0, 0x1(r4)
  rlwimi    r0,r11,3,26,27
  stb       r0, 0x1(r4)
  lbz       r0, 0x1(r4)
  rlwinm    r0,r0,0,0,29
  ori       r0, r0, 0x3
  stb       r0, 0x1(r4)

.loc_0x158:
  lbz       r0, 0x1(r4)
  addi      r3, r1, 0x28
  rlwinm    r7,r9,6,18,25
  addi      r5, r1, 0x29
  rlwinm    r6,r0,0,29,27
  rlwinm    r0,r8,3,21,28
  or        r6, r6, r0
  lbzx      r9, r5, r27
  lbzx      r0, r3, r27
  addi      r3, r1, 0x2A
  stb       r6, 0x1(r4)
  addi      r8, r1, 0x2B
  rlwinm    r6,r0,5,0,26
  lbzx      r11, r3, r27
  lbz       r0, 0x1(r4)
  addi      r5, r1, 0xC
  lbzx      r18, r8, r27
  rlwinm    r12,r9,2,22,29
  rlwimi    r7,r0,0,26,31
  rlwinm    r10,r11,7,17,24
  stb       r7, 0x1(r4)
  addi      r3, r1, 0x8
  lbzx      r0, r3, r26
  addi      r3, r1, 0xB
  lbz       r7, 0x6(r4)
  addi      r8, r1, 0xA
  rlwinm    r9,r18,4,20,27
  rlwinm    r11,r11,31,25,31
  rlwimi    r6,r7,0,27,31
  addi      r7, r1, 0x9
  stb       r6, 0x6(r4)
  rlwinm    r6,r0,2,22,29
  lbzx      r18, r8, r26
  cmplwi    r0, 0x1
  lbz       r27, 0x6(r4)
  lbzx      r5, r5, r26
  rlwinm    r27,r27,0,30,26
  lbzx      r3, r3, r26
  or        r12, r27, r12
  stb       r12, 0x6(r4)
  lbz       r12, 0x6(r4)
  rlwinm    r8,r12,0,0,29
  lbzx      r12, r7, r26
  or        r7, r8, r11
  stb       r7, 0x6(r4)
  lbz       r7, 0x7(r4)
  rlwimi    r10,r7,0,25,31
  stb       r10, 0x7(r4)
  lbz       r7, 0x7(r4)
  rlwinm    r7,r7,0,28,24
  or        r7, r7, r9
  stb       r7, 0x7(r4)
  lbz       r7, 0x5(r4)
  rlwinm    r7,r7,0,30,28
  or        r6, r7, r6
  stb       r6, 0x5(r4)
  bgt-      .loc_0x264
  lbz       r6, 0x5(r4)
  rlwinm    r0,r18,4,20,27
  rlwinm    r6,r6,0,0,29
  or        r6, r6, r12
  stb       r6, 0x5(r4)
  lbz       r6, 0x5(r4)
  rlwinm    r6,r6,0,28,25
  or        r0, r6, r0
  stb       r0, 0x5(r4)
  b         .loc_0x280

.loc_0x264:
  lbz       r6, 0x5(r4)
  rlwimi    r6,r0,3,26,27
  stb       r6, 0x5(r4)
  lbz       r0, 0x5(r4)
  rlwinm    r0,r0,0,0,29
  ori       r0, r0, 0x3
  stb       r0, 0x5(r4)

.loc_0x280:
  lbz       r6, 0x5(r4)
  rlwinm    r0,r5,6,18,25
  rlwinm    r3,r3,3,21,28
  rlwinm    r5,r6,0,29,27
  or        r3, r5, r3
  stb       r3, 0x5(r4)
  lbz       r3, 0x5(r4)
  rlwimi    r0,r3,0,26,31
  stb       r0, 0x5(r4)
  lmw       r18, 0x48(r1)
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	8005A618
 * Size:	000088
 */
void J2DTextBoxEx::setBlack(JUtility::TColor)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, -0x1
  addi      r5, r1, 0x10
  stw       r31, 0x1C(r1)
  mr        r31, r4
  addi      r4, r1, 0x14
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  bl        0x304
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x44
  li        r3, 0
  b         .loc_0x70

.loc_0x44:
  lwz       r5, 0x10(r1)
  mr        r3, r30
  lwz       r0, 0x0(r31)
  addi      r4, r1, 0xC
  stw       r5, 0x8(r1)
  addi      r5, r1, 0x8
  stw       r0, 0xC(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     

.loc_0x70:
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
 * Address:	8005A6A0
 * Size:	000088
 */
void J2DTextBoxEx::setWhite(JUtility::TColor)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, -0x1
  addi      r5, r1, 0x10
  stw       r31, 0x1C(r1)
  mr        r31, r4
  addi      r4, r1, 0x14
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  bl        0x27C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x44
  li        r3, 0
  b         .loc_0x70

.loc_0x44:
  lwz       r5, 0x0(r31)
  mr        r3, r30
  lwz       r0, 0x14(r1)
  addi      r4, r1, 0xC
  stw       r5, 0x8(r1)
  addi      r5, r1, 0x8
  stw       r0, 0xC(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     

.loc_0x70:
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
 * Address:	8005A728
 * Size:	000224
 */
void J2DTextBoxEx::setBlackWhite(JUtility::TColor, JUtility::TColor)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stmw      r27, 0x3C(r1)
  mr        r29, r4
  mr        r28, r3
  mr        r30, r5
  lwz       r4, 0x138(r3)
  cmplwi    r4, 0
  bne-      .loc_0x30
  li        r3, 0
  b         .loc_0x210

.loc_0x30:
  lwz       r0, 0x70(r4)
  cmplwi    r0, 0
  bne-      .loc_0x44
  li        r3, 0
  b         .loc_0x210

.loc_0x44:
  lwz       r6, 0x0(r30)
  addi      r4, r1, 0x18
  lwz       r0, 0x0(r29)
  addi      r5, r1, 0x14
  stw       r6, 0x14(r1)
  stw       r0, 0x18(r1)
  bl        0x35C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x70
  li        r3, 0
  b         .loc_0x210

.loc_0x70:
  lwz       r0, 0x0(r29)
  li        r31, 0
  cmplwi    r0, 0
  bne-      .loc_0x90
  lwz       r3, 0x0(r30)
  addis     r0, r3, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x94

.loc_0x90:
  li        r31, 0x1

.loc_0x94:
  lwz       r3, 0x138(r28)
  rlwinm    r4,r31,0,24,31
  neg       r0, r4
  lwz       r3, 0x70(r3)
  or        r0, r0, r4
  rlwinm    r4,r0,1,31,31
  lwz       r12, 0x0(r3)
  addi      r0, r4, 0x1
  rlwinm    r4,r0,0,24,31
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0xE4
  lis       r3, 0x1
  li        r4, 0x4
  subi      r0, r3, 0x1
  sth       r4, 0x8(r1)
  sth       r0, 0xA(r1)
  b         .loc_0xF8

.loc_0xE4:
  lis       r3, 0x1
  li        r4, 0xFF
  subi      r0, r3, 0xFC
  sth       r4, 0x8(r1)
  sth       r0, 0xA(r1)

.loc_0xF8:
  li        r27, 0
  b         .loc_0x16C

.loc_0x100:
  lwz       r3, 0x138(r28)
  lwz       r3, 0x70(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  rlwinm    r4,r27,0,24,31
  cmplw     r0, r4
  ble-      .loc_0x168
  rlwinm    r0,r27,1,23,30
  addi      r3, r1, 0x8
  lhzx      r3, r3, r0
  addi      r5, r1, 0x10
  srawi     r0, r3, 0x8
  stb       r3, 0xE(r1)
  stb       r0, 0xC(r1)
  stb       r0, 0xD(r1)
  lwz       r0, 0xC(r1)
  stw       r0, 0x10(r1)
  lwz       r3, 0x138(r28)
  lwz       r3, 0x70(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x168:
  addi      r27, r27, 0x1

.loc_0x16C:
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0x2
  blt+      .loc_0x100
  mr        r3, r28
  mr        r4, r31
  bl        -0x5E4
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x20C
  lbz       r3, 0x1(r29)
  addi      r5, r1, 0x24
  lbz       r6, 0x2(r29)
  li        r4, 0
  lbz       r7, 0x3(r29)
  lbz       r0, 0x0(r29)
  sth       r3, 0x26(r1)
  sth       r0, 0x24(r1)
  sth       r6, 0x28(r1)
  sth       r7, 0x2A(r1)
  lwz       r3, 0x138(r28)
  lwz       r3, 0x70(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  lbz       r3, 0x1(r30)
  addi      r5, r1, 0x1C
  lbz       r6, 0x2(r30)
  li        r4, 0x1
  lbz       r7, 0x3(r30)
  lbz       r0, 0x0(r30)
  sth       r3, 0x1E(r1)
  sth       r0, 0x1C(r1)
  sth       r6, 0x20(r1)
  sth       r7, 0x22(r1)
  lwz       r3, 0x138(r28)
  lwz       r3, 0x70(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     

.loc_0x20C:
  li        r3, 0x1

.loc_0x210:
  lmw       r27, 0x3C(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8005A94C
 * Size:	000194
 */
void J2DTextBoxEx::getBlackWhite(JUtility::TColor *, JUtility::TColor *) const
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r26, 0x18(r1)
  mr        r29, r3
  lwz       r3, 0x138(r3)
  mr        r30, r4
  mr        r31, r5
  cmplwi    r3, 0
  bne-      .loc_0x30
  li        r3, 0
  b         .loc_0x180

.loc_0x30:
  lwz       r3, 0x70(r3)
  cmplwi    r3, 0
  bne-      .loc_0x44
  li        r3, 0
  b         .loc_0x180

.loc_0x44:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  rlwinm    r3,r3,0,24,31
  stw       r0, 0x14(r1)
  li        r0, -0x1
  subfic    r5, r3, 0x1
  subi      r4, r3, 0x1
  lbz       r3, 0x14(r1)
  or        r4, r5, r4
  stw       r0, 0x10(r1)
  rlwinm.   r4,r4,1,31,31
  lbz       r0, 0x15(r1)
  stb       r3, 0x0(r30)
  lbz       r3, 0x16(r1)
  stb       r0, 0x1(r30)
  lbz       r0, 0x17(r1)
  stb       r3, 0x2(r30)
  lbz       r3, 0x10(r1)
  stb       r0, 0x3(r30)
  lbz       r0, 0x11(r1)
  stb       r3, 0x0(r31)
  lbz       r3, 0x12(r1)
  stb       r0, 0x1(r31)
  lbz       r0, 0x13(r1)
  stb       r3, 0x2(r31)
  stb       r0, 0x3(r31)
  beq-      .loc_0x17C
  lwz       r3, 0x138(r29)
  li        r4, 0
  lwz       r3, 0x70(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  lwz       r5, 0x138(r29)
  li        r4, 0x1
  lha       r29, 0x0(r3)
  lha       r28, 0x2(r3)
  lha       r27, 0x4(r3)
  lha       r26, 0x6(r3)
  lwz       r3, 0x70(r5)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  rlwinm    r4,r28,16,8,15
  lha       r0, 0x2(r3)
  rlwimi    r4,r29,24,0,7
  lha       r5, 0x0(r3)
  rlwimi    r4,r27,8,16,23
  rlwinm    r0,r0,16,8,15
  rlwimi    r4,r26,0,24,31
  lha       r6, 0x4(r3)
  stw       r4, 0xC(r1)
  rlwimi    r0,r5,24,0,7
  lha       r7, 0x6(r3)
  rlwimi    r0,r6,8,16,23
  lbz       r3, 0xC(r1)
  lbz       r5, 0xD(r1)
  rlwimi    r0,r7,0,24,31
  stb       r3, 0x0(r30)
  lbz       r4, 0xE(r1)
  stb       r5, 0x1(r30)
  lbz       r3, 0xF(r1)
  stw       r0, 0x8(r1)
  stb       r4, 0x2(r30)
  lbz       r0, 0x8(r1)
  stb       r3, 0x3(r30)
  lbz       r4, 0x9(r1)
  stb       r0, 0x0(r31)
  lbz       r3, 0xA(r1)
  stb       r4, 0x1(r31)
  lbz       r0, 0xB(r1)
  stb       r3, 0x2(r31)
  stb       r0, 0x3(r31)

.loc_0x17C:
  li        r3, 0x1

.loc_0x180:
  lmw       r26, 0x18(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8005AAE0
 * Size:	000094
 */
void J2DTextBoxEx::isSetBlackWhite(JUtility::TColor, JUtility::TColor) const
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x0(r4)
  stw       r31, 0xC(r1)
  mr        r31, r3
  cmplwi    r0, 0
  bne-      .loc_0x38
  lwz       r3, 0x0(r5)
  addis     r0, r3, 0x1
  cmplwi    r0, 0xFFFF
  bne-      .loc_0x38
  li        r3, 0x1
  b         .loc_0x80

.loc_0x38:
  lwz       r3, 0x138(r31)
  lwz       r3, 0x70(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x138(r31)
  lwz       r3, 0x70(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x1
  bne-      .loc_0x7C
  li        r3, 0
  b         .loc_0x80

.loc_0x7C:
  li        r3, 0x1

.loc_0x80:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8005AB74
 * Size:	000060
 */
void J2DTextBoxEx::getBlack() const
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, -0x1
  addi      r5, r1, 0x8
  stw       r31, 0x1C(r1)
  mr        r31, r3
  mr        r3, r4
  addi      r4, r1, 0xC
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        -0x254
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x44
  li        r0, 0
  stw       r0, 0x0(r31)
  b         .loc_0x4C

.loc_0x44:
  lwz       r0, 0xC(r1)
  stw       r0, 0x0(r31)

.loc_0x4C:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8005ABD4
 * Size:	000060
 */
void J2DTextBoxEx::getWhite() const
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, -0x1
  addi      r5, r1, 0x8
  stw       r31, 0x1C(r1)
  mr        r31, r3
  mr        r3, r4
  addi      r4, r1, 0xC
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        -0x2B4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x44
  li        r0, -0x1
  stw       r0, 0x0(r31)
  b         .loc_0x4C

.loc_0x44:
  lwz       r0, 0x8(r1)
  stw       r0, 0x0(r31)

.loc_0x4C:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8005AC34
 * Size:	000020
 */
void J2DTextBoxEx::setAlpha(unsigned char)
{
/*
.loc_0x0:
  stb       r4, 0xB2(r3)
  lwz       r3, 0x138(r3)
  cmplwi    r3, 0
  beqlr-    
  addic.    r3, r3, 0x10
  beqlr-    
  stb       r4, 0x3(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8005AC54
 * Size:	000034
 */
void J2DTextBoxEx::setCullBack(_GXCullMode)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stb       r4, 0xB1(r3)
  lwz       r5, 0x138(r3)
  cmplwi    r5, 0
  beq-      .loc_0x20
  stb       r4, 0x22(r5)

.loc_0x20:
  bl        -0x22030
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8005AC88
 * Size:	000018
 */
void J2DTextBoxEx::rewriteAlpha()
{
/*
.loc_0x0:
  lwz       r4, 0x138(r3)
  cmplwi    r4, 0
  beqlr-    
  lbz       r0, 0x13(r4)
  stb       r0, 0xB2(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8005ACA0
 * Size:	00008C
 */
void J2DTextBoxEx::isUsed(const ResFONT *)
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
  lwz       r12, 0xA0(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x68
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA0(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  cmplw     r3, r31
  bne-      .loc_0x68
  li        r3, 0x1
  b         .loc_0x74

.loc_0x68:
  mr        r3, r30
  mr        r4, r31
  bl        -0x22294

.loc_0x74:
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
 * Address:	8005AD2C
 * Size:	00002C
 */
void J2DTextBoxEx::setAnimation(J2DAnmColor *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x138(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1C
  bl        -0x85B4

.loc_0x1C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8005AD58
 * Size:	00002C
 */
void J2DTextBoxEx::setAnimation(J2DAnmTextureSRTKey *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x138(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1C
  bl        -0x849C

.loc_0x1C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8005AD84
 * Size:	00002C
 */
void J2DTextBoxEx::setAnimation(J2DAnmTexPattern *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x138(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1C
  bl        -0x8324

.loc_0x1C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8005ADB0
 * Size:	00002C
 */
void J2DTextBoxEx::setAnimation(J2DAnmTevRegKey *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x138(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1C
  bl        -0x81BC

.loc_0x1C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8005ADDC
 * Size:	000008
 */
void J2DTextBoxEx::setAnimation(J2DAnmVisibilityFull *)
{
/*
.loc_0x0:
  stw       r4, 0x144(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8005ADE4
 * Size:	000080
 */
void J2DTextBoxEx::animationPane(const J2DAnmTransform *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r3, 0x144(r3)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lhz       r4, 0x13C(r30)
  cmplwi    r4, 0xFFFF
  beq-      .loc_0x5C
  addi      r5, r1, 0x8
  bl        0x1D0C
  lbz       r0, 0x8(r1)
  cmplwi    r0, 0
  beq-      .loc_0x54
  li        r0, 0x1
  stb       r0, 0xB0(r30)
  b         .loc_0x5C

.loc_0x54:
  li        r0, 0
  stb       r0, 0xB0(r30)

.loc_0x5C:
  mr        r3, r30
  mr        r4, r31
  bl        -0x21590
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
 * Address:	8005AE64
 * Size:	000008
 */
void J2DTextBoxEx::getMaterial() const
{
/*
.loc_0x0:
  lwz       r3, 0x138(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8005AE6C
 * Size:	00003C
 */
void J2DTextBoxEx::setCullBack(bool)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm.   r0,r4,0,24,31
  li        r4, 0
  beq-      .loc_0x1C
  li        r4, 0x2

.loc_0x1C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
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
 * Address:	8005AEA8
 * Size:	000020
 */
void J2DTextBoxEx::isUsed(const ResTIMG *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x224C0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8005AEC8
 * Size:	000004
 */
void J2DTextBoxEx::setAnimation(J2DAnmVtxColor *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8005AECC
 * Size:	000020
 */
void J2DTextBoxEx::setAnimation(J2DAnmTransform *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x218E4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8005AEEC
 * Size:	000020
 */
void J2DTextBoxEx::setAnimation(J2DAnmBase *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x219EC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}