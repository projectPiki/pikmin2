

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
 * Address:	8044CBB8
 * Size:	000054
 */
void Demo::Section::__ct( (JKRHeap *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2E7FDC
  lis       r4, 0x804F
  addi      r3, r31, 0x48
  subi      r0, r4, 0x2C90
  stw       r0, 0x0(r31)
  bl        -0x283C8
  lfs       f0, 0x2750(r2)
  addi      r3, r31, 0xC0
  stfs      f0, 0xBC(r31)
  bl        0x3200
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
 * Address:	8044CC0C
 * Size:	000088
 */
void Demo::Section::__dt(void)
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
  beq-      .loc_0x6C
  lis       r4, 0x804F
  addi      r3, r30, 0xC0
  subi      r0, r4, 0x2C90
  li        r4, -0x1
  stw       r0, 0x0(r30)
  bl        0x32C8
  addic.    r0, r30, 0x48
  beq-      .loc_0x50
  addic.    r3, r30, 0xA4
  beq-      .loc_0x50
  li        r4, 0
  bl        -0x426488

.loc_0x50:
  mr        r3, r30
  li        r4, 0
  bl        -0x2E7FB4
  extsh.    r0, r31
  ble-      .loc_0x6C
  mr        r3, r30
  bl        -0x428BC0

.loc_0x6C:
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
 * Address:	8044CC94
 * Size:	0001A0
 */
void Demo::Section::init(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x804A
  li        r5, 0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  subi      r31, r4, 0x4C40
  addi      r4, r31, 0x10
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r29, r3
  lwz       r3, -0x6514(r13)
  bl        -0x29968
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x24
  li        r5, 0
  bl        -0x29978
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x24
  bl        -0x2997C
  li        r3, 0x1C
  bl        -0x428E44
  mr.       r30, r3
  beq-      .loc_0x7C
  mr        r4, r29
  bl        -0x2E7D20
  lis       r3, 0x804F
  addi      r0, r31, 0x34
  subi      r3, r3, 0x2CA0
  stw       r3, 0x0(r30)
  stw       r0, 0x14(r30)

.loc_0x7C:
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x44
  li        r5, 0
  bl        -0x299D8
  lwz       r4, 0x1C(r29)
  li        r3, 0
  li        r5, 0x2
  li        r6, 0
  bl        -0x3C3220
  mr        r4, r3
  mr        r3, r29
  li        r5, 0x1
  bl        -0x2E7F84
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x44
  bl        -0x29A00
  li        r3, 0xB0
  bl        -0x428EC8
  mr.       r0, r3
  beq-      .loc_0xF0
  li        r4, 0
  bl        -0x27F28
  mr        r0, r3

.loc_0xF0:
  stw       r0, 0xB8(r29)
  li        r4, 0x2
  lwz       r3, -0x6514(r13)
  bl        -0x29864
  lwz       r4, 0x1C(r29)
  addi      r3, r29, 0xC0
  bl        0x3628
  mr        r3, r29
  addi      r4, r29, 0xD8
  bl        -0x2E7DF8
  lfs       f0, 0x2754(r2)
  li        r0, 0
  stfs      f0, 0x30(r29)
  lwz       r3, -0x7708(r13)
  stb       r0, 0x10C(r3)
  lwz       r3, -0x7708(r13)
  stb       r0, 0x130(r3)
  lbz       r0, -0x7958(r13)
  extsb     r0, r0
  cmpwi     r0, -0x1
  bne-      .loc_0x184
  bl        -0x383838
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f3, 0x2760(r2)
  stw       r0, 0x8(r1)
  lfs       f1, 0x2758(r2)
  lfd       f2, 0x8(r1)
  lfs       f0, 0x275C(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  stb       r0, -0x7958(r13)

.loc_0x184:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8044CE34
 * Size:	0000E8
 */
void Demo::Section::doDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x190(r1)
  mflr      r0
  stw       r0, 0x194(r1)
  stw       r31, 0x18C(r1)
  mr        r31, r4
  stw       r30, 0x188(r1)
  mr        r30, r3
  addi      r3, r30, 0xC0
  lwz       r12, 0xC0(r30)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x1AC(r30)
  addi      r3, r1, 0x8
  bl        -0x412970
  lbz       r4, -0x7958(r13)
  lis       r0, 0x4330
  lis       r3, 0x804F
  stw       r0, 0x170(r1)
  extsb     r4, r4
  lfd       f2, 0x2768(r2)
  rlwinm    r4,r4,2,0,29
  subi      r3, r3, 0x2CD8
  add       r4, r3, r4
  stw       r0, 0x178(r1)
  lhz       r5, 0x0(r4)
  addi      r3, r1, 0x8
  lhz       r0, 0x2(r4)
  li        r4, 0
  stw       r5, 0x174(r1)
  li        r5, 0
  lfs       f5, 0x30(r1)
  li        r6, 0
  stw       r0, 0x17C(r1)
  lfd       f1, 0x170(r1)
  lfd       f0, 0x178(r1)
  lfs       f3, 0x28(r1)
  fsubs     f1, f1, f2
  lfs       f4, 0x34(r1)
  fsubs     f2, f0, f2
  lfs       f0, 0x2C(r1)
  fsubs     f3, f5, f3
  fsubs     f4, f4, f0
  bl        -0x411340
  addi      r3, r1, 0x8
  li        r4, -0x1
  bl        -0x412020
  lwz       r0, 0x194(r1)
  lwz       r31, 0x18C(r1)
  lwz       r30, 0x188(r1)
  mtlr      r0
  addi      r1, r1, 0x190
  blr
*/
}

/*
 * --INFO--
 * Address:	8044CF1C
 * Size:	0000AC
 */
void Demo::Section::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, -0x6514(r13)
  lfs       f1, 0xBC(r3)
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0xBC(r3)
  bl        -0x2E7F9C
  addi      r3, r31, 0xC0
  bl        0x3948
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x44
  li        r0, 0
  stb       r0, 0x34(r31)

.loc_0x44:
  lwz       r3, 0xB8(r31)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,0,31
  beq-      .loc_0x78
  lbz       r0, 0x34(r31)
  cmplwi    r0, 0
  beq-      .loc_0x78
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1801
  li        r5, 0
  bl        -0x114958
  li        r0, 0
  stb       r0, 0x34(r31)

.loc_0x78:
  addi      r3, r31, 0xC0
  bl        0x34EC
  addi      r3, r31, 0xC0
  lwz       r12, 0xC0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lbz       r3, 0x34(r31)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8044CFC8
 * Size:	0000B0
 */
void Demo::Section::doExit(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x40
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x4BF0
  li        r4, 0x1D3
  subi      r5, r5, 0x4BE4
  crclr     6, 0x6
  bl        -0x4229C4

.loc_0x40:
  lwz       r31, -0x6780(r13)
  cmplwi    r31, 0
  bne-      .loc_0x68
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x4BF0
  li        r4, 0x1DC
  subi      r5, r5, 0x4BE4
  crclr     6, 0x6
  bl        -0x4229EC

.loc_0x68:
  mr        r3, r31
  bl        -0x10AE54
  lbz       r3, -0x7958(r13)
  addi      r3, r3, 0x1
  extsb     r0, r3
  stb       r3, -0x7958(r13)
  cmplwi    r0, 0x8
  blt-      .loc_0x90
  li        r0, 0
  stb       r0, -0x7958(r13)

.loc_0x90:
  addi      r3, r30, 0xC0
  bl        0x3500
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
 * Address:	8044D078
 * Size:	0000A4
 */
void Demo::Section::doLoadingStart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  subi      r4, r13, 0x7960
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  addi      r3, r31, 0xC0
  lbz       r0, -0x7958(r13)
  extsb     r0, r0
  lbzx      r4, r4, r0
  bl        0x2F00
  li        r3, 0x14
  bl        -0x429204
  mr.       r5, r3
  beq-      .loc_0x84
  lis       r3, 0x804F
  lis       r4, 0x804B
  subi      r8, r3, 0x2CB8
  lis       r3, 0x804F
  lwz       r7, 0x0(r8)
  addi      r4, r4, 0xF00
  lwz       r6, 0x4(r8)
  subi      r0, r3, 0x2CAC
  lwz       r3, 0x8(r8)
  stw       r7, 0x8(r1)
  stw       r4, 0x0(r5)
  stw       r0, 0x0(r5)
  stw       r31, 0x4(r5)
  stw       r7, 0x8(r5)
  stw       r6, 0xC(r5)
  stw       r6, 0xC(r1)
  stw       r3, 0x10(r1)
  stw       r3, 0x10(r5)

.loc_0x84:
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x48
  bl        -0x2A1CC
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8044D11C
 * Size:	000038
 */
void Demo::Section::doLoading(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x48
  lwz       r3, -0x6514(r13)
  bl        -0x29B60
  rlwinm    r0,r3,0,24,31
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8044D154
 * Size:	0000C8
 */
void Demo::Section::loadResource(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804A
  li        r5, 0
  stw       r0, 0x24(r1)
  li        r6, 0x1
  stw       r31, 0x1C(r1)
  subi      r31, r4, 0x4C40
  li        r4, 0x1
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  addi      r3, r31, 0x68
  bl        -0x432058
  cmplwi    r3, 0
  bne-      .loc_0x54
  addi      r3, r31, 0
  addi      r5, r31, 0x5C
  li        r4, 0x1AC
  crclr     6, 0x6
  bl        -0x422B64

.loc_0x54:
  addi      r3, r31, 0x94
  bl        -0x42A1E0
  mr.       r30, r3
  bne-      .loc_0x78
  addi      r3, r31, 0
  addi      r5, r31, 0x5C
  li        r4, 0x1B1
  crclr     6, 0x6
  bl        -0x422B88

.loc_0x78:
  li        r3, 0x40
  bl        -0x42932C
  mr.       r31, r3
  beq-      .loc_0xA8
  li        r0, 0
  mr        r4, r30
  stw       r0, 0x28(r31)
  li        r5, 0
  bl        -0x41A168
  lbz       r0, 0x3B(r31)
  rlwinm    r0,r0,0,30,30
  stb       r0, 0x3B(r31)

.loc_0xA8:
  stw       r31, 0x1AC(r29)
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
 * Address:	8044D21C
 * Size:	000070
 */
void Demo::HIORootNode::__dt(void)
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
  lis       r4, 0x804F
  subi      r0, r4, 0x2CA0
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  addi      r0, r5, 0x19FC
  stw       r0, 0x0(r30)
  bl        -0x3BCD4

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x4291B8

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
 * Address:	8044D28C
 * Size:	000008
 */
void Demo::Section::forceReset(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8044D294
 * Size:	000030
 */
void Delegate<Demo::Section>::invoke()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  addi      r12, r4, 0x8
  lwz       r3, 0x4(r3)
  bl        -0x38B788
  nop       
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
