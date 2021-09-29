

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
 * Address:	8013CC68
 * Size:	00012C
 */
void __ct__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1DF8
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r4, r4, 0x5994
  li        r0, 0
  stw       r4, 0x178(r31)
  addi      r5, r3, 0x2BC
  addi      r4, r5, 0x1B0
  addi      r3, r31, 0x1AC
  stw       r5, 0x0(r31)
  stw       r4, 0x178(r31)
  stb       r0, 0x17C(r31)
  stb       r0, 0x17D(r31)
  stb       r0, 0x17E(r31)
  stb       r0, 0x17F(r31)
  bl        -0x966C
  li        r0, 0
  stw       r0, 0x188(r31)
  lwz       r3, -0x6980(r13)
  cmplwi    r3, 0
  beq-      .loc_0x70
  mr        r4, r31
  bl        0x104E4C

.loc_0x70:
  li        r0, 0
  lfs       f0, -0x60B0(r2)
  stw       r0, 0x174(r31)
  li        r0, -0x1
  lfs       f1, -0x60AC(r2)
  li        r3, 0x8
  stfs      f0, 0x224(r31)
  lfs       f0, -0x60A8(r2)
  stfs      f1, 0x1FC(r31)
  stfs      f1, 0x20C(r31)
  stfs      f1, 0x210(r31)
  stfs      f1, 0x214(r31)
  stfs      f1, 0x200(r31)
  stfs      f1, 0x204(r31)
  stfs      f1, 0x208(r31)
  stfs      f1, 0x1E4(r31)
  stfs      f1, 0x1E8(r31)
  stfs      f1, 0x1EC(r31)
  stfs      f1, 0x1F0(r31)
  stfs      f1, 0x1F4(r31)
  stfs      f1, 0x1F8(r31)
  stw       r0, 0x228(r31)
  stfs      f0, 0x234(r31)
  bl        -0x118E90
  mr.       r0, r3
  beq-      .loc_0xE0
  bl        -0x8CE4
  mr        r0, r3

.loc_0xE0:
  stw       r0, 0x114(r31)
  li        r0, 0
  mr        r4, r31
  addi      r3, r31, 0xA8
  stw       r0, 0x190(r31)
  li        r5, 0x8
  bl        0x1A0D0
  li        r0, 0
  lfs       f0, -0x60AC(r2)
  stw       r0, 0x1A0(r31)
  mr        r3, r31
  stw       r0, 0x1A8(r31)
  stfs      f0, 0x19C(r31)
  stfs      f0, 0x198(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8013CD94
 * Size:	0000B8
 */
void initFakePiki__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x60AC(r2)
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r0, 0x188(r3)
  stw       r0, 0x190(r3)
  stfs      f0, 0x1FC(r3)
  stfs      f0, 0x20C(r3)
  stfs      f0, 0x210(r3)
  stfs      f0, 0x214(r3)
  stfs      f0, 0x1E4(r3)
  stfs      f0, 0x1E8(r3)
  stfs      f0, 0x1EC(r3)
  stfs      f0, 0x1F0(r3)
  stfs      f0, 0x1F4(r3)
  stfs      f0, 0x1F8(r3)
  stfs      f0, 0x200(r3)
  stfs      f0, 0x204(r3)
  stfs      f0, 0x208(r3)
  stw       r0, 0x248(r3)
  lwz       r3, -0x6980(r13)
  cmplwi    r3, 0
  beq-      .loc_0x70
  mr        r4, r31
  bl        0x104EAC

.loc_0x70:
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x17C(r31)
  stb       r0, 0x17D(r31)
  stb       r0, 0x17E(r31)
  stb       r0, 0x17F(r31)
  bl        0x253C
  lfs       f0, -0x60AC(r2)
  li        r3, -0x1
  li        r0, 0
  stfs      f0, 0x180(r31)
  sth       r3, 0x18C(r31)
  stw       r0, 0x184(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8013CE4C
 * Size:	000028
 */
void killFakePiki__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, -0x6980(r13)
  bl        0x104E90
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8013CE74
 * Size:	0000B8
 */
void initAnimator__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x1AC
  lwz       r4, -0x6D1C(r13)
  bl        -0x97F4
  mr        r3, r31
  li        r4, 0x1F
  lwz       r12, 0x0(r31)
  li        r5, 0x1F
  li        r6, 0
  li        r7, 0
  lwz       r12, 0x208(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x174(r31)
  addi      r3, r31, 0x1AC
  bl        0x2EBEF8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x74
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x38E0
  li        r4, 0x1CA
  subi      r5, r5, 0x38D0
  crclr     6, 0x6
  bl        -0x1128A4

.loc_0x74:
  lwz       r4, 0x174(r31)
  addi      r3, r31, 0x1C8
  bl        0x2EBEC8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xA4
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x38E0
  li        r4, 0x1CB
  subi      r5, r5, 0x38D0
  crclr     6, 0x6
  bl        -0x1128D4

.loc_0xA4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8013CF2C
 * Size:	000028
 */
void assertMotion__Q24Game8FakePikiFi(void)
{
/*
.loc_0x0:
  lwz       r3, 0x1B8(r3)
  cmplwi    r3, 0
  beq-      .loc_0x14
  lha       r0, 0x20(r3)
  b         .loc_0x18

.loc_0x14:
  li        r0, -0x1

.loc_0x18:
  sub       r0, r4, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8013CF54
 * Size:	00006C
 */
void enableMotionBlend__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x1D4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x28
  lha       r0, 0x20(r3)
  b         .loc_0x2C

.loc_0x28:
  li        r0, -0x1

.loc_0x2C:
  cmplwi    r31, 0
  stw       r0, 0x228(r31)
  mr        r5, r31
  beq-      .loc_0x40
  addi      r5, r31, 0x178

.loc_0x40:
  addi      r3, r31, 0x1C8
  li        r4, 0x1C
  bl        0x2EBCEC
  lfs       f1, -0x60A4(r2)
  addi      r3, r31, 0x1C8
  bl        0x2EBE18
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8013CFC0
 * Size:	000100
 */
void startMotion__Q24Game8FakePikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r7
  stw       r30, 0x18(r1)
  mr        r30, r5
  mr        r5, r6
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  addi      r3, r28, 0x1AC
  bl        0x2EBC94
  mr        r4, r30
  mr        r5, r31
  addi      r3, r28, 0x1C8
  bl        0x2EBC84
  lwz       r4, 0x174(r28)
  addi      r3, r28, 0x1AC
  bl        0x2EBDA8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x78
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x38E0
  li        r4, 0x1E1
  subi      r5, r5, 0x38D0
  crclr     6, 0x6
  bl        -0x1129F4

.loc_0x78:
  lwz       r4, 0x174(r28)
  addi      r3, r28, 0x1C8
  bl        0x2EBD78
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xA8
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x38E0
  li        r4, 0x1E2
  subi      r5, r5, 0x38D0
  crclr     6, 0x6
  bl        -0x112A24

.loc_0xA8:
  li        r0, -0x1
  cmpwi     r29, 0x20
  stw       r0, 0x228(r28)
  bge-      .loc_0xD0
  cmpwi     r29, 0x15
  beq-      .loc_0xE0
  blt-      .loc_0xD8
  cmpwi     r29, 0x1C
  bge-      .loc_0xE0
  b         .loc_0xD8

.loc_0xD0:
  cmpwi     r29, 0x38
  beq-      .loc_0xE0

.loc_0xD8:
  mr        r3, r28
  bl        0x788

.loc_0xE0:
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
 * Address:	8013D0C0
 * Size:	00001C
 */
void finishMotion__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lbz       r0, 0x1C4(r3)
  ori       r0, r0, 0x2
  stb       r0, 0x1C4(r3)
  lbz       r0, 0x1E0(r3)
  ori       r0, r0, 0x2
  stb       r0, 0x1E0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013D0DC
 * Size:	000008
 */
void movieSetFaceDir__Q24Game8FakePikiFf(void)
{
/*
.loc_0x0:
  stfs      f1, 0x1FC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013D0E4
 * Size:	000008
 */
void setDoAnimCallback__Q24Game8FakePikiFP9IDelegate(void)
{
/*
.loc_0x0:
  stw       r4, 0x188(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013D0EC
 * Size:	00000C
 */
void clearDoAnimCallback__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x188(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013D0F8
 * Size:	0003BC
 */
void updateWalkAnimation__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stfd      f30, 0x30(r1)
  psq_st    f30,0x38(r1),0,0
  stfd      f29, 0x20(r1)
  psq_st    f29,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r31, r3
  lwz       r3, -0x6514(r13)
  lfs       f3, 0x214(r31)
  lfs       f1, 0x240(r31)
  lfs       f2, 0x20C(r31)
  lfs       f0, 0x238(r31)
  fsubs     f3, f3, f1
  lfs       f1, -0x60AC(r2)
  fsubs     f0, f2, f0
  lfs       f2, 0x54(r3)
  fmuls     f3, f3, f3
  fmadds    f0, f0, f0, f1
  fadds     f0, f3, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x80
  ble-      .loc_0x84
  fsqrte    f1, f0
  fmuls     f0, f1, f0
  b         .loc_0x84

.loc_0x80:
  fmr       f0, f1

.loc_0x84:
  fdivs     f29, f0, f2
  lwz       r3, 0x1D4(r31)
  cmplwi    r3, 0
  beq-      .loc_0x9C
  lha       r30, 0x20(r3)
  b         .loc_0xA0

.loc_0x9C:
  li        r30, -0x1

.loc_0xA0:
  lwz       r3, 0x1B8(r31)
  li        r4, 0
  cmplwi    r3, 0
  beq-      .loc_0xB8
  lha       r0, 0x20(r3)
  b         .loc_0xBC

.loc_0xB8:
  li        r0, -0x1

.loc_0xBC:
  cmpwi     r0, 0x17
  bne-      .loc_0xC8
  li        r4, 0x1

.loc_0xC8:
  cmpwi     r30, 0x1F
  beq-      .loc_0xFC
  cmpwi     r30, 0x1E
  beq-      .loc_0xFC
  cmpwi     r30, 0x1
  beq-      .loc_0xFC
  cmpwi     r30, 0x1D
  beq-      .loc_0xFC
  cmpwi     r30, 0x1C
  beq-      .loc_0xFC
  lfs       f0, -0x60A8(r2)
  stfs      f0, 0x234(r31)
  b         .loc_0x384

.loc_0xFC:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x120
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x38E0
  li        r4, 0x252
  subi      r5, r5, 0x38C4
  crclr     6, 0x6
  bl        -0x112BD4

.loc_0x120:
  lfs       f1, 0x1FC(r31)
  li        r28, 0
  lfs       f0, 0x244(r31)
  lwz       r3, 0xC0(r31)
  fsubs     f1, f1, f0
  lfs       f0, 0x100(r3)
  fabs      f1, f1
  fcmpo     cr0, f29, f0
  frsp      f1, f1
  bge-      .loc_0x168
  lfs       f0, -0x60A0(r2)
  li        r29, 0x1F
  lfs       f29, -0x60A8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1F4
  lfs       f29, -0x609C(r2)
  li        r29, 0x1
  b         .loc_0x1F4

.loc_0x168:
  lfs       f1, 0x128(r3)
  fcmpo     cr0, f29, f1
  bge-      .loc_0x180
  lfs       f29, -0x60A8(r2)
  li        r29, 0x1
  b         .loc_0x1F4

.loc_0x180:
  lfs       f2, 0x150(r3)
  fcmpo     cr0, f29, f2
  bge-      .loc_0x1B4
  fsubs     f3, f29, f1
  lfs       f0, 0x1C8(r3)
  fsubs     f2, f2, f1
  lfs       f1, 0x1A0(r3)
  mr        r28, r31
  li        r29, 0x1E
  fdivs     f2, f3, f2
  fsubs     f0, f0, f1
  fmadds    f29, f2, f0, f1
  b         .loc_0x1F4

.loc_0x1B4:
  lfs       f1, 0x178(r3)
  fcmpo     cr0, f29, f1
  bge-      .loc_0x1E8
  fsubs     f3, f29, f2
  lfs       f0, 0x218(r3)
  fsubs     f2, f1, f2
  lfs       f1, 0x1F0(r3)
  mr        r28, r31
  li        r29, 0x1D
  fdivs     f2, f3, f2
  fsubs     f0, f0, f1
  fmadds    f29, f2, f0, f1
  b         .loc_0x1F4

.loc_0x1E8:
  lfs       f29, 0x240(r3)
  mr        r28, r31
  li        r29, 0x1C

.loc_0x1F4:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  cmpw      r29, r30
  beq-      .loc_0x274
  cmpwi     r30, 0x1F
  bne-      .loc_0x228
  cmpwi     r29, 0x1
  beq-      .loc_0x228
  li        r0, 0x4
  stw       r0, 0x230(r31)

.loc_0x228:
  cmpwi     r30, 0x1
  beq-      .loc_0x240
  cmpwi     r29, 0x1F
  bne-      .loc_0x240
  li        r0, 0x4
  stw       r0, 0x230(r31)

.loc_0x240:
  lwz       r0, 0x22C(r31)
  cmpw      r29, r0
  beq-      .loc_0x25C
  li        r0, 0
  stw       r0, 0x230(r31)
  stw       r29, 0x22C(r31)
  b         .loc_0x268

.loc_0x25C:
  lwz       r3, 0x230(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x230(r31)

.loc_0x268:
  lwz       r0, 0x230(r31)
  cmpwi     r0, 0x4
  blt-      .loc_0x384

.loc_0x274:
  cmpw      r30, r29
  beq-      .loc_0x380
  cmpwi     r30, 0x1F
  beq-      .loc_0x29C
  cmpwi     r30, 0x1
  beq-      .loc_0x29C
  cmpwi     r29, 0x1F
  beq-      .loc_0x29C
  cmpwi     r29, 0x1
  bne-      .loc_0x2F8

.loc_0x29C:
  lwz       r0, 0x228(r31)
  cmpwi     r0, -0x1
  bne-      .loc_0x2D8
  mr        r4, r29
  addi      r3, r31, 0x1AC
  li        r5, 0
  bl        0x2EB8DC
  cmplwi    r28, 0
  mr        r5, r28
  beq-      .loc_0x2C8
  addi      r5, r28, 0x178

.loc_0x2C8:
  mr        r4, r29
  addi      r3, r31, 0x1C8
  bl        0x2EB8C0
  b         .loc_0x380

.loc_0x2D8:
  cmplwi    r28, 0
  mr        r5, r28
  beq-      .loc_0x2E8
  addi      r5, r28, 0x178

.loc_0x2E8:
  mr        r4, r29
  addi      r3, r31, 0x1C8
  bl        0x2EB8A0
  b         .loc_0x380

.loc_0x2F8:
  lwz       r0, 0x228(r31)
  cmpwi     r0, -0x1
  bne-      .loc_0x354
  cmplwi    r28, 0
  lfs       f31, 0x1D0(r31)
  lfs       f30, 0x1B4(r31)
  mr        r5, r28
  beq-      .loc_0x31C
  addi      r5, r28, 0x178

.loc_0x31C:
  mr        r4, r29
  addi      r3, r31, 0x1C8
  bl        0x2EB86C
  fmr       f1, f31
  addi      r3, r31, 0x1C8
  bl        0x2EB998
  mr        r4, r29
  addi      r3, r31, 0x1AC
  li        r5, 0
  bl        0x2EB850
  fmr       f1, f30
  addi      r3, r31, 0x1AC
  bl        0x2EB97C
  b         .loc_0x380

.loc_0x354:
  cmplwi    r28, 0
  lfs       f30, 0x1D0(r31)
  mr        r5, r28
  beq-      .loc_0x368
  addi      r5, r28, 0x178

.loc_0x368:
  mr        r4, r29
  addi      r3, r31, 0x1C8
  bl        0x2EB820
  fmr       f1, f30
  addi      r3, r31, 0x1C8
  bl        0x2EB94C

.loc_0x380:
  stfs      f29, 0x234(r31)

.loc_0x384:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x54(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8013D4B4
 * Size:	00023C
 */
void sNeckCallback__Q24Game8FakePikiFP8J3DJointi(void)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  cmpwi     r4, 0
  stw       r0, 0xA4(r1)
  stw       r31, 0x9C(r1)
  bne-      .loc_0x224
  lwz       r4, -0x6C14(r13)
  lbz       r0, 0x3C(r4)
  cmplwi    r0, 0
  beq-      .loc_0x224
  lfs       f2, -0x6D74(r13)
  lhz       r0, 0x14(r3)
  fneg      f1, f2
  lwz       r3, -0x7678(r13)
  lfs       f0, -0x60AC(r2)
  mulli     r0, r0, 0x30
  lwz       r3, 0xC(r3)
  fcmpo     cr0, f1, f0
  lfs       f3, -0x6D78(r13)
  add       r31, r3, r0
  bge-      .loc_0x80
  lfs       f0, -0x6098(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x68(r1)
  lwz       r0, 0x6C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f6, f0
  b         .loc_0xA4

.loc_0x80:
  lfs       f0, -0x6094(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x70(r1)
  lwz       r0, 0x74(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f6, r3, r0

.loc_0xA4:
  fneg      f1, f2
  lfs       f0, -0x60AC(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xB8
  fneg      f1, f1

.loc_0xB8:
  lfs       f2, -0x6094(r2)
  lis       r3, 0x8050
  lfs       f0, -0x60AC(r2)
  addi      r3, r3, 0x71A0
  fmuls     f1, f1, f2
  addi      r6, r3, 0x4
  fcmpo     cr0, f3, f0
  fctiwz    f0, f1
  stfd      f0, 0x78(r1)
  lwz       r0, 0x7C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f7, r6, r0
  bge-      .loc_0x110
  lfs       f0, -0x6098(r2)
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x80(r1)
  lwz       r0, 0x84(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f8, f0
  b         .loc_0x128

.loc_0x110:
  fmuls     f0, f3, f2
  fctiwz    f0, f0
  stfd      f0, 0x88(r1)
  lwz       r0, 0x8C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f8, r3, r0

.loc_0x128:
  lfs       f0, -0x60AC(r2)
  fmr       f1, f3
  fcmpo     cr0, f3, f0
  bge-      .loc_0x13C
  fneg      f1, f3

.loc_0x13C:
  lfs       f0, -0x6094(r2)
  fneg      f4, f6
  lfs       f3, -0x60AC(r2)
  fneg      f2, f8
  fmuls     f5, f1, f0
  stfs      f7, 0x38(r1)
  fmuls     f1, f8, f6
  stfs      f4, 0x3C(r1)
  fmuls     f0, f8, f7
  fctiwz    f4, f5
  stfs      f2, 0x50(r1)
  mr        r5, r31
  addi      r3, r1, 0x8
  addi      r4, r1, 0x38
  stfd      f4, 0x90(r1)
  lwz       r0, 0x94(r1)
  stfs      f1, 0x58(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f4, r6, r0
  stfs      f3, 0x40(r1)
  fmuls     f2, f4, f6
  fmuls     f1, f4, f7
  stfs      f0, 0x5C(r1)
  stfs      f2, 0x48(r1)
  stfs      f1, 0x4C(r1)
  stfs      f4, 0x60(r1)
  stfs      f3, 0x44(r1)
  stfs      f3, 0x54(r1)
  stfs      f3, 0x64(r1)
  lwz       r6, 0x0(r31)
  lwz       r0, 0x4(r31)
  stw       r6, 0x8(r1)
  stw       r0, 0xC(r1)
  lwz       r6, 0x8(r31)
  lwz       r0, 0xC(r31)
  stw       r6, 0x10(r1)
  stw       r0, 0x14(r1)
  lwz       r6, 0x10(r31)
  lwz       r0, 0x14(r31)
  stw       r6, 0x18(r1)
  stw       r0, 0x1C(r1)
  lwz       r6, 0x18(r31)
  lwz       r0, 0x1C(r31)
  stw       r6, 0x20(r1)
  stw       r0, 0x24(r1)
  lwz       r6, 0x20(r31)
  lwz       r0, 0x24(r31)
  stw       r6, 0x28(r1)
  stw       r0, 0x2C(r1)
  lwz       r6, 0x28(r31)
  lwz       r0, 0x2C(r31)
  stw       r6, 0x30(r1)
  stw       r0, 0x34(r1)
  bl        -0x533C4
  lis       r4, 0x8051
  mr        r3, r31
  subi      r4, r4, 0xC2C
  bl        -0x53408

.loc_0x224:
  lwz       r0, 0xA4(r1)
  li        r3, 0
  lwz       r31, 0x9C(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	8013D6F0
 * Size:	0000C0
 */
void startLookCreature__Q24Game8FakePikiFPQ24Game8Creature(void)
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
  lwz       r3, 0x1B8(r3)
  cmplwi    r3, 0
  beq-      .loc_0x30
  lha       r0, 0x20(r3)
  b         .loc_0x34

.loc_0x30:
  li        r0, -0x1

.loc_0x34:
  cmpwi     r0, 0x20
  bge-      .loc_0x54
  cmpwi     r0, 0x15
  beq-      .loc_0x68
  blt-      .loc_0x5C
  cmpwi     r0, 0x1C
  bge-      .loc_0x68
  b         .loc_0x5C

.loc_0x54:
  cmpwi     r0, 0x38
  beq-      .loc_0x68

.loc_0x5C:
  mr        r3, r30
  bl        0xD4
  b         .loc_0xA8

.loc_0x68:
  lwz       r3, 0x114(r31)
  cmplwi    r3, 0
  beq-      .loc_0x98
  bl        -0x6C48
  cmplwi    r3, 0
  beq-      .loc_0x98
  stw       r31, 0x1A8(r30)
  addi      r3, r3, 0x4C
  li        r0, 0
  stw       r3, 0x1A0(r30)
  stb       r0, 0x1A4(r30)
  b         .loc_0xA8

.loc_0x98:
  li        r0, 0
  mr        r3, r30
  stw       r0, 0x1A8(r30)
  bl        0x90

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
 * Address:	8013D7B0
 * Size:	000070
 */
void updateLookCreature__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x1A8(r3)
  cmplwi    r3, 0
  beq-      .loc_0x48
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x48
  li        r0, 0
  mr        r3, r31
  stw       r0, 0x1A8(r31)
  bl        0x30

.loc_0x48:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x214(r12)
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
 * Address:	8013D820
 * Size:	000004
 */
void do_updateLookCreature__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8013D824
 * Size:	000018
 */
void finishLook__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, 0xA
  stw       r4, 0x1A0(r3)
  stb       r0, 0x1A4(r3)
  stw       r4, 0x1A8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013D83C
 * Size:	000398
 */
void updateLook__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stfd      f30, 0x30(r1)
  psq_st    f30,0x38(r1),0,0
  stfd      f29, 0x20(r1)
  psq_st    f29,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r0, 0x1A0(r3)
  cmplwi    r0, 0
  beq-      .loc_0xD0
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x1A0(r31)
  lis       r3, 0x8051
  lfs       f2, 0x10(r1)
  subi      r3, r3, 0x2E20
  lfs       f3, 0x8(r4)
  lfs       f1, 0x0(r4)
  fsubs     f29, f3, f2
  lfs       f0, 0x8(r1)
  lfs       f3, 0x4(r4)
  fsubs     f31, f1, f0
  lfs       f0, 0xC(r1)
  fmr       f2, f29
  fsubs     f30, f3, f0
  fmr       f1, f31
  bl        -0x1087BC
  fmuls     f2, f29, f29
  lfs       f0, -0x60AC(r2)
  fmr       f29, f1
  fmadds    f2, f31, f31, f2
  fcmpo     cr0, f2, f0
  ble-      .loc_0xB4
  ble-      .loc_0xB8
  fsqrte    f0, f2
  fmuls     f2, f0, f2
  b         .loc_0xB8

.loc_0xB4:
  fmr       f2, f0

.loc_0xB8:
  fmr       f1, f30
  lis       r3, 0x8051
  subi      r3, r3, 0x2E20
  bl        -0x1087F8
  fmr       f31, f1
  b         .loc_0x158

.loc_0xD0:
  lfs       f1, -0x60AC(r2)
  lfs       f2, 0x198(r31)
  bl        0x2D42E8
  lfs       f2, -0x6090(r2)
  lfs       f0, 0x198(r31)
  fmadds    f1, f1, f2, f0
  bl        0x2D42AC
  stfs      f1, 0x198(r31)
  lfs       f1, -0x60AC(r2)
  lfs       f2, 0x19C(r31)
  bl        0x2D42C8
  lfs       f2, -0x6090(r2)
  lfs       f0, 0x19C(r31)
  fmadds    f1, f1, f2, f0
  bl        0x2D428C
  stfs      f1, 0x19C(r31)
  lfs       f1, -0x608C(r2)
  lfs       f0, 0x198(r31)
  fabs      f0, f0
  frsp      f0, f0
  fcmpo     cr0, f0, f1
  bge-      .loc_0x36C
  lfs       f0, 0x19C(r31)
  fabs      f0, f0
  frsp      f0, f0
  fcmpo     cr0, f0, f1
  bge-      .loc_0x36C
  li        r0, 0
  lfs       f0, -0x60AC(r2)
  stw       r0, 0x1A0(r31)
  stfs      f0, 0x19C(r31)
  stfs      f0, 0x198(r31)
  stb       r0, 0x1A4(r31)
  b         .loc_0x36C

.loc_0x158:
  lfs       f1, 0x198(r31)
  lfs       f0, 0x1FC(r31)
  fadds     f1, f1, f0
  bl        0x2D4230
  fmr       f2, f1
  lfs       f0, 0x1FC(r31)
  fsubs     f1, f29, f0
  fmr       f30, f2
  bl        0x2D421C
  lfs       f0, -0x6088(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1B4
  lfs       f2, 0x198(r31)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x1A4
  fsubs     f0, f2, f1
  lfs       f1, -0x6084(r2)
  fsubs     f1, f1, f0
  b         .loc_0x1E8

.loc_0x1A4:
  fmr       f1, f29
  fmr       f2, f30
  bl        0x2D4214
  b         .loc_0x1E8

.loc_0x1B4:
  lfs       f2, 0x198(r31)
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1DC
  fsubs     f1, f2, f1
  lfs       f2, -0x6084(r2)
  lfs       f0, -0x6080(r2)
  fsubs     f1, f2, f1
  fmuls     f1, f1, f0
  b         .loc_0x1E8

.loc_0x1DC:
  fmr       f1, f29
  fmr       f2, f30
  bl        0x2D41DC

.loc_0x1E8:
  fabs      f2, f1
  lfs       f0, -0x607C(r2)
  frsp      f2, f2
  fcmpo     cr0, f2, f0
  bge-      .loc_0x200
  lfs       f1, -0x60AC(r2)

.loc_0x200:
  lfs       f0, -0x6078(r2)
  lfs       f2, -0x6074(r2)
  fmuls     f1, f1, f0
  fabs      f0, f1
  frsp      f0, f0
  fcmpo     cr0, f0, f2
  ble-      .loc_0x234
  lfs       f0, -0x60AC(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x230
  fmr       f1, f2
  b         .loc_0x234

.loc_0x230:
  lfs       f1, -0x6070(r2)

.loc_0x234:
  lfs       f0, 0x198(r31)
  fadds     f1, f0, f1
  bl        0x2D4158
  stfs      f1, 0x198(r31)
  lfs       f1, -0x606C(r2)
  lfs       f2, 0x198(r31)
  fcmpo     cr0, f2, f1
  ble-      .loc_0x268
  lfs       f0, -0x6088(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x268
  stfs      f1, 0x198(r31)
  b         .loc_0x288

.loc_0x268:
  lfs       f1, -0x6068(r2)
  fcmpo     cr0, f2, f1
  bge-      .loc_0x288
  lfs       f0, -0x6088(r2)
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x288
  stfs      f1, 0x198(r31)

.loc_0x288:
  fmr       f1, f31
  lfs       f2, 0x19C(r31)
  bl        0x2D4130
  fabs      f2, f1
  lfs       f0, -0x607C(r2)
  frsp      f2, f2
  fcmpo     cr0, f2, f0
  bge-      .loc_0x2AC
  lfs       f1, -0x60AC(r2)

.loc_0x2AC:
  lfs       f0, -0x6078(r2)
  lfs       f2, -0x6074(r2)
  fmuls     f1, f1, f0
  fabs      f0, f1
  frsp      f0, f0
  fcmpo     cr0, f0, f2
  ble-      .loc_0x2E0
  lfs       f0, -0x60AC(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x2DC
  fmr       f1, f2
  b         .loc_0x2E0

.loc_0x2DC:
  lfs       f1, -0x6070(r2)

.loc_0x2E0:
  lfs       f0, 0x19C(r31)
  fadds     f1, f0, f1
  bl        0x2D40AC
  stfs      f1, 0x19C(r31)
  lfs       f1, -0x6064(r2)
  lfs       f2, 0x19C(r31)
  fcmpo     cr0, f2, f1
  ble-      .loc_0x314
  lfs       f0, -0x6088(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x314
  stfs      f1, 0x19C(r31)
  b         .loc_0x334

.loc_0x314:
  lfs       f1, -0x6060(r2)
  fcmpo     cr0, f2, f1
  bge-      .loc_0x334
  lfs       f0, -0x6088(r2)
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x334
  stfs      f1, 0x19C(r31)

.loc_0x334:
  lbz       r3, 0x1A4(r31)
  cmplwi    r3, 0
  beq-      .loc_0x36C
  subi      r0, r3, 0x1
  stb       r0, 0x1A4(r31)
  lbz       r0, 0x1A4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x36C
  li        r0, 0
  lfs       f0, -0x60AC(r2)
  stw       r0, 0x1A0(r31)
  stfs      f0, 0x19C(r31)
  stfs      f0, 0x198(r31)
  stb       r0, 0x1A4(r31)

.loc_0x36C:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  lwz       r0, 0x54(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8013DBD4
 * Size:	000060
 */
void turnTo__Q24Game8FakePikiFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lfs       f1, 0x8(r4)
  lfs       f0, 0x214(r3)
  lfs       f3, 0x0(r4)
  fsubs     f2, f1, f0
  lfs       f1, 0x20C(r3)
  lfs       f0, -0x60AC(r2)
  fsubs     f1, f3, f1
  fcmpu     cr0, f0, f2
  beq-      .loc_0x4C
  lis       r3, 0x8051
  subi      r3, r3, 0x2E20
  bl        -0x108B0C
  bl        0x2D3FB8
  stfs      f1, 0x1FC(r31)

.loc_0x4C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8013DC34
 * Size:	0003B4
 */
void moveVelocity__Q24Game8FakePikiFv(void)
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
  stfd      f28, 0x40(r1)
  psq_st    f28,0x48(r1),0,0
  stfd      f27, 0x30(r1)
  psq_st    f27,0x38(r1),0,0
  stfd      f26, 0x20(r1)
  psq_st    f26,0x28(r1),0,0
  stfd      f25, 0x10(r1)
  psq_st    f25,0x18(r1),0,0
  stw       r31, 0xC(r1)
  mr        r31, r3
  lfs       f30, -0x60AC(r2)
  lwz       r3, 0xC8(r3)
  fmr       f29, f30
  lfs       f27, 0x1E4(r31)
  fmr       f28, f30
  cmplwi    r3, 0
  lfs       f26, 0x1E8(r31)
  lfs       f25, 0x1EC(r31)
  beq-      .loc_0x2C8
  fmuls     f0, f26, f26
  fmuls     f1, f25, f25
  fmadds    f0, f27, f27, f0
  fadds     f31, f1, f0
  fcmpo     cr0, f31, f30
  ble-      .loc_0x98
  ble-      .loc_0x9C
  fsqrte    f0, f31
  fmuls     f31, f0, f31
  b         .loc_0x9C

.loc_0x98:
  fmr       f31, f30

.loc_0x9C:
  lfs       f2, 0xD0(r31)
  lfs       f3, 0xCC(r31)
  fmuls     f1, f26, f2
  lfs       f4, 0xD4(r31)
  lfs       f0, -0x60AC(r2)
  fmadds    f1, f27, f3, f1
  fmadds    f1, f25, f4, f1
  fmuls     f2, f2, f1
  fmuls     f3, f3, f1
  fmuls     f1, f4, f1
  fsubs     f4, f26, f2
  fsubs     f2, f27, f3
  fsubs     f3, f25, f1
  fmuls     f1, f4, f4
  fmuls     f5, f3, f3
  fmadds    f1, f2, f2, f1
  fadds     f1, f5, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xF8
  ble-      .loc_0xFC
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0xFC

.loc_0xF8:
  fmr       f1, f0

.loc_0xFC:
  lfs       f0, -0x60AC(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x11C
  lfs       f0, -0x605C(r2)
  fdivs     f0, f0, f1
  fmuls     f2, f2, f0
  fmuls     f4, f4, f0
  fmuls     f3, f3, f0

.loc_0x11C:
  fmuls     f27, f2, f31
  addi      r3, r3, 0x5C
  fmuls     f26, f4, f31
  fmuls     f25, f3, f31
  bl        0x2DE6E0
  cmpwi     r3, 0
  bne-      .loc_0x1B0
  lfs       f0, -0x608C(r2)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x2C8
  lwz       r4, -0x6C10(r13)
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x28(r4)
  lfs       f0, 0x54(r3)
  lfs       f7, 0xD0(r31)
  fmuls     f0, f1, f0
  lfs       f4, -0x60AC(r2)
  lfs       f1, 0xCC(r31)
  lfs       f6, 0xD4(r31)
  fneg      f5, f0
  lfs       f2, -0x605C(r2)
  fmuls     f0, f5, f7
  fmadds    f0, f4, f1, f0
  fmadds    f0, f4, f6, f0
  fmuls     f3, f1, f0
  fmuls     f1, f7, f0
  fmuls     f0, f6, f0
  fsubs     f3, f4, f3
  fsubs     f1, f5, f1
  fsubs     f0, f4, f0
  fneg      f3, f3
  fneg      f1, f1
  fneg      f0, f0
  fmuls     f30, f3, f2
  fmuls     f29, f1, f2
  fmuls     f28, f0, f2
  b         .loc_0x2C8

.loc_0x1B0:
  lwz       r5, -0x6C10(r13)
  lwz       r4, -0x6514(r13)
  lfs       f1, 0x28(r5)
  lfs       f0, 0x54(r4)
  lfs       f2, 0xD0(r31)
  fmuls     f0, f1, f0
  lfs       f3, -0x60AC(r2)
  lfs       f6, 0xCC(r31)
  lfs       f5, 0xD4(r31)
  fneg      f4, f0
  fmuls     f0, f4, f2
  fmadds    f0, f3, f6, f0
  fmadds    f0, f3, f5, f0
  fmuls     f1, f2, f0
  fmuls     f2, f6, f0
  fmuls     f0, f5, f0
  fsubs     f28, f4, f1
  fsubs     f30, f3, f2
  fsubs     f29, f3, f0
  fmuls     f0, f28, f28
  fmuls     f1, f29, f29
  fmadds    f0, f30, f30, f0
  fadds     f1, f1, f0
  fcmpo     cr0, f1, f3
  ble-      .loc_0x224
  ble-      .loc_0x228
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x228

.loc_0x224:
  fmr       f1, f3

.loc_0x228:
  lfs       f0, -0x60AC(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x248
  lfs       f0, -0x605C(r2)
  fdivs     f0, f0, f1
  fmuls     f30, f30, f0
  fmuls     f28, f28, f0
  fmuls     f29, f29, f0

.loc_0x248:
  cmpwi     r3, 0x2
  bne-      .loc_0x290
  mr        r3, r31
  lfs       f31, -0x6058(r2)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x294
  mr        r3, r31
  bl        0x35FC
  li        r4, 0x7
  bl        0xA8120
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x294
  lfs       f31, -0x6054(r2)
  b         .loc_0x294

.loc_0x290:
  lfs       f31, -0x605C(r2)

.loc_0x294:
  lwz       r3, -0x6C10(r13)
  lwz       r4, -0x6514(r13)
  lfs       f0, 0x28(r3)
  lfs       f3, 0x54(r4)
  fmuls     f2, f30, f0
  fmuls     f1, f28, f0
  fmuls     f0, f29, f0
  fmuls     f2, f2, f3
  fmuls     f1, f1, f3
  fmuls     f0, f0, f3
  fmuls     f30, f2, f31
  fmuls     f29, f1, f31
  fmuls     f28, f0, f31

.loc_0x2C8:
  lfs       f0, 0x1F4(r31)
  lfs       f2, 0x1F8(r31)
  fadds     f1, f26, f0
  lfs       f8, 0x204(r31)
  lfs       f0, 0x1F0(r31)
  fadds     f2, f25, f2
  lfs       f7, 0x208(r31)
  fsubs     f3, f1, f8
  fadds     f1, f27, f0
  lfs       f9, 0x200(r31)
  fsubs     f4, f2, f7
  lfs       f0, -0x60AC(r2)
  fmuls     f5, f3, f3
  fsubs     f2, f1, f9
  fmuls     f6, f4, f4
  fmadds    f1, f2, f2, f5
  fadds     f1, f6, f1
  fcmpo     cr0, f1, f0
  lwz       r3, -0x6514(r13)
  lfs       f0, -0x608C(r2)
  lfs       f1, 0x54(r3)
  fdivs     f0, f1, f0
  fmuls     f2, f2, f0
  fmuls     f1, f3, f0
  fmuls     f0, f4, f0
  fadds     f2, f9, f2
  fadds     f1, f8, f1
  fadds     f0, f7, f0
  stfs      f2, 0x200(r31)
  stfs      f1, 0x204(r31)
  stfs      f0, 0x208(r31)
  lfs       f0, 0x200(r31)
  lfs       f1, 0x204(r31)
  fadds     f0, f0, f30
  lfs       f2, 0x208(r31)
  fadds     f1, f1, f29
  fadds     f2, f2, f28
  stfs      f0, 0x200(r31)
  stfs      f1, 0x204(r31)
  stfs      f2, 0x208(r31)
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  psq_l     f28,0x48(r1),0,0
  lfd       f28, 0x40(r1)
  psq_l     f27,0x38(r1),0,0
  lfd       f27, 0x30(r1)
  psq_l     f26,0x28(r1),0,0
  lfd       f26, 0x20(r1)
  psq_l     f25,0x18(r1),0,0
  lfd       f25, 0x10(r1)
  lwz       r0, 0x84(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	8013DFE8
 * Size:	0000B4
 */
void moveRotation__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x10(r1)
  psq_st    f31,0x18(r1),0,0
  stw       r31, 0xC(r1)
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0x1D4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x98
  lfs       f1, 0x1E4(r31)
  lfs       f2, 0x1EC(r31)
  fmuls     f4, f1, f1
  lwz       r3, -0x6514(r13)
  fmuls     f3, f2, f2
  lfs       f0, -0x605C(r2)
  lfs       f31, 0x54(r3)
  fadds     f3, f4, f3
  fcmpo     cr0, f3, f0
  ble-      .loc_0x98
  lis       r3, 0x8051
  subi      r3, r3, 0x2E20
  bl        -0x108F44
  lfs       f2, 0x1FC(r31)
  bl        0x2D3BA8
  lfs       f0, -0x6050(r2)
  lfs       f2, -0x60A4(r2)
  fmuls     f1, f0, f1
  lfs       f0, 0x1FC(r31)
  fmuls     f1, f31, f1
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x1FC(r31)
  lfs       f1, 0x1FC(r31)
  bl        0x2D3B58
  stfs      f1, 0x1FC(r31)

.loc_0x98:
  psq_l     f31,0x18(r1),0,0
  lwz       r0, 0x24(r1)
  lfd       f31, 0x10(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8013E09C
 * Size:	000014
 */
void useMoveRotation__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x17C(r3)
  rlwinm    r0,r0,0,31,31
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8013E0B0
 * Size:	0006A4
 */
void move__Q24Game8FakePikiFf(void)
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
  stw       r31, 0xEC(r1)
  stw       r30, 0xE8(r1)
  stw       r29, 0xE4(r1)
  stw       r28, 0xE0(r1)
  lwz       r12, 0x0(r3)
  fmr       f28, f1
  mr        r31, r3
  lwz       r12, 0x200(r12)
  mtctr     r12
  bctrl     
  fmr       f31, f1
  lwz       r0, 0x17C(r31)
  lfs       f1, 0x210(r31)
  rlwinm.   r0,r0,0,27,27
  lfs       f0, 0x20C(r31)
  fadds     f1, f1, f31
  lfs       f2, 0x214(r31)
  beq-      .loc_0xA0
  lwz       r3, 0x174(r31)
  cmplwi    r3, 0
  beq-      .loc_0xA0
  lwz       r3, 0x10(r3)
  addi      r3, r3, 0x3C
  bl        0x2EB768
  lfs       f30, 0xC(r3)
  lfs       f29, 0x2C(r3)
  fmr       f0, f30
  lfs       f1, 0x1C(r3)
  fmr       f2, f29

.loc_0xA0:
  stfs      f0, 0x24(r1)
  lis       r3, 0x8050
  lfs       f5, -0x60AC(r2)
  addi      r4, r3, 0x71A0
  stfs      f1, 0x28(r1)
  li        r5, 0
  lfs       f0, -0x604C(r2)
  addi      r7, r1, 0x24
  stfs      f2, 0x2C(r1)
  addi      r6, r1, 0x18
  li        r0, -0x1
  mr        r3, r31
  stfs      f31, 0x30(r1)
  lfs       f7, 0x180(r31)
  stfs      f5, 0x120(r31)
  lfs       f3, 0x208(r31)
  lfs       f2, 0x124(r31)
  lfs       f4, 0x204(r31)
  lfs       f1, 0x120(r31)
  fadds     f6, f3, f2
  lfs       f3, 0x200(r31)
  lfs       f2, 0x11C(r31)
  fadds     f4, f4, f1
  lfs       f1, 0x800(r4)
  fadds     f2, f3, f2
  stw       r5, 0x48(r1)
  stfs      f4, 0x1C(r1)
  stfs      f2, 0x18(r1)
  stfs      f6, 0x20(r1)
  stw       r7, 0x34(r1)
  stw       r6, 0x38(r1)
  stfs      f7, 0x3C(r1)
  stfs      f5, 0x40(r1)
  stw       r5, 0x44(r1)
  stw       r5, 0x78(r1)
  stb       r5, 0xA8(r1)
  stb       r5, 0x4D(r1)
  stb       r5, 0x4C(r1)
  stw       r5, 0x7C(r1)
  stb       r5, 0xC4(r1)
  stw       r5, 0xC8(r1)
  stfs      f1, 0x60(r1)
  stfs      f0, 0x64(r1)
  stw       r0, 0xCC(r1)
  stw       r5, 0x80(r1)
  stb       r5, 0x4E(r1)
  stw       r31, 0x48(r1)
  stw       r5, 0x248(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1EC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x25C
  lwz       r3, -0x6CF8(r13)
  fmr       f1, f28
  addi      r4, r1, 0x34
  lwz       r12, 0x4(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x24C(r31)
  addi      r0, r31, 0x200
  lfs       f0, 0x18(r1)
  stfs      f0, 0x200(r31)
  lfs       f0, 0x1C(r1)
  stfs      f0, 0x204(r31)
  lfs       f0, 0x20(r1)
  stfs      f0, 0x208(r31)
  lwz       r4, 0xCC(r1)
  stw       r0, 0x38(r1)
  cmpwi     r4, -0x1
  beq-      .loc_0x2A4
  lwz       r3, -0x6CF8(r13)
  lwz       r0, 0x8(r3)
  cmplwi    r0, 0
  beq-      .loc_0x2A4
  sth       r4, 0x18C(r31)
  lwz       r0, 0xCC(r1)
  lwz       r3, -0x6CF8(r13)
  extsh     r4, r0
  bl        0x79AF4
  mr        r30, r3
  lbz       r0, 0xBC(r3)
  cmplwi    r0, 0
  bne-      .loc_0x214
  lwz       r3, -0x6CF8(r13)
  lwz       r0, 0xCC(r1)
  lwz       r3, 0x8(r3)
  extsh     r4, r0
  bl        0x35AB0
  li        r0, 0x1
  stb       r0, 0xBC(r30)

.loc_0x214:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2A4
  lwz       r3, -0x6C18(r13)
  li        r0, 0
  lwz       r3, 0x44(r3)
  cmpwi     r3, 0x1
  beq-      .loc_0x24C
  cmpwi     r3, 0x3
  bne-      .loc_0x250

.loc_0x24C:
  li        r0, 0x1

.loc_0x250:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x2A4
  b         .loc_0x2A4

.loc_0x25C:
  lfs       f0, 0x200(r31)
  li        r0, 0
  lwz       r3, 0x34(r1)
  lfs       f2, 0x204(r31)
  fmuls     f0, f0, f28
  lfs       f1, 0x0(r3)
  lfs       f4, 0x208(r31)
  fmuls     f2, f2, f28
  lfs       f3, 0x4(r3)
  fadds     f0, f1, f0
  lfs       f5, 0x8(r3)
  fmuls     f1, f4, f28
  fadds     f2, f3, f2
  stfs      f0, 0x0(r3)
  fadds     f0, f5, f1
  stfs      f2, 0x4(r3)
  stfs      f0, 0x8(r3)
  stw       r0, 0x78(r1)

.loc_0x2A4:
  lwz       r0, 0xC8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x2D0
  lwz       r4, 0x78(r1)
  cmplwi    r4, 0
  beq-      .loc_0x2D0
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0xE8(r12)
  mtctr     r12
  bctrl     

.loc_0x2D0:
  lwz       r0, 0x78(r1)
  stw       r0, 0xC8(r31)
  lfs       f0, 0x84(r1)
  stfs      f0, 0xCC(r31)
  lfs       f0, 0x88(r1)
  stfs      f0, 0xD0(r31)
  lfs       f0, 0x8C(r1)
  stfs      f0, 0xD4(r31)
  lwz       r0, 0x184(r31)
  cmplwi    r0, 0
  bne-      .loc_0x320
  lwz       r0, 0x7C(r1)
  cmplwi    r0, 0
  beq-      .loc_0x320
  mr        r3, r31
  addi      r4, r1, 0x90
  lwz       r12, 0x0(r31)
  lwz       r12, 0x204(r12)
  mtctr     r12
  bctrl     

.loc_0x320:
  lwz       r3, -0x6BE0(r13)
  cmplwi    r3, 0
  beq-      .loc_0x338
  fmr       f1, f28
  addi      r4, r1, 0x34
  bl        0x877D4

.loc_0x338:
  lwz       r0, 0xC8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x384
  lwz       r4, 0x78(r1)
  cmplwi    r4, 0
  beq-      .loc_0x384
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0xE8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x78(r1)
  stw       r0, 0xC8(r31)
  lfs       f0, 0x84(r1)
  stfs      f0, 0xCC(r31)
  lfs       f0, 0x88(r1)
  stfs      f0, 0xD0(r31)
  lfs       f0, 0x8C(r1)
  stfs      f0, 0xD4(r31)

.loc_0x384:
  lwz       r0, 0x184(r31)
  cmplwi    r0, 0
  bne-      .loc_0x3B4
  lwz       r0, 0x7C(r1)
  cmplwi    r0, 0
  beq-      .loc_0x3B4
  mr        r3, r31
  addi      r4, r1, 0x90
  lwz       r12, 0x0(r31)
  lwz       r12, 0x204(r12)
  mtctr     r12
  bctrl     

.loc_0x3B4:
  lwz       r3, 0xC8(r31)
  cmplwi    r3, 0
  beq-      .loc_0x3D4
  lfs       f1, 0x10(r3)
  lfs       f0, -0x604C(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x3D4
  stw       r3, 0x248(r31)

.loc_0x3D4:
  lwz       r0, 0x17C(r31)
  rlwinm.   r0,r0,0,27,27
  beq-      .loc_0x434
  lfs       f0, 0x24(r1)
  lfs       f3, 0x2C(r1)
  fsubs     f1, f0, f30
  lfs       f2, 0x20C(r31)
  lfs       f0, -0x60AC(r2)
  fsubs     f3, f3, f29
  fadds     f1, f2, f1
  stfs      f1, 0x20C(r31)
  lfs       f1, 0x210(r31)
  fadds     f0, f1, f0
  stfs      f0, 0x210(r31)
  lfs       f0, 0x214(r31)
  fadds     f0, f0, f3
  stfs      f0, 0x214(r31)
  lfs       f0, 0x20C(r31)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x210(r31)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x214(r31)
  stfs      f0, 0x2C(r1)
  b         .loc_0x458

.loc_0x434:
  lfs       f0, 0x24(r1)
  stfs      f0, 0x20C(r31)
  lfs       f0, 0x28(r1)
  stfs      f0, 0x210(r31)
  lfs       f0, 0x2C(r1)
  stfs      f0, 0x214(r31)
  lfs       f0, 0x210(r31)
  fsubs     f0, f0, f31
  stfs      f0, 0x210(r31)

.loc_0x458:
  lwz       r3, -0x6CF8(r13)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4D8
  lfs       f0, 0x20C(r31)
  addi      r4, r1, 0x8
  lwz       r3, -0x6CF8(r13)
  stfs      f0, 0x8(r1)
  lfs       f0, 0x210(r31)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x214(r31)
  stfs      f0, 0x10(r1)
  stfs      f31, 0x14(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x8(r1)
  stfs      f0, 0x20C(r31)
  lfs       f0, 0xC(r1)
  stfs      f0, 0x210(r31)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x214(r31)
  lfs       f0, 0x20C(r31)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x210(r31)
  stfs      f0, 0x28(r1)
  lfs       f0, 0x214(r31)
  stfs      f0, 0x2C(r1)

.loc_0x4D8:
  lfs       f0, 0x24(r1)
  stfs      f0, 0x218(r31)
  lfs       f0, 0x28(r1)
  stfs      f0, 0x21C(r31)
  lfs       f0, 0x2C(r1)
  stfs      f0, 0x220(r31)
  lfs       f0, 0x30(r1)
  stfs      f0, 0x224(r31)
  lwz       r0, 0xC8(r31)
  cmplwi    r0, 0
  beq-      .loc_0x664
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x664
  lfs       f1, 0x23C(r31)
  lfs       f0, 0x210(r31)
  lfs       f3, 0x238(r31)
  fsubs     f4, f1, f0
  lfs       f2, 0x20C(r31)
  lfs       f1, 0x240(r31)
  lfs       f0, 0x214(r31)
  fsubs     f3, f3, f2
  fmuls     f4, f4, f4
  fsubs     f2, f1, f0
  lfs       f0, -0x60AC(r2)
  fmadds    f1, f3, f3, f4
  fmuls     f2, f2, f2
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x570
  ble-      .loc_0x574
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x574

.loc_0x570:
  fmr       f1, f0

.loc_0x574:
  lfs       f0, -0x605C(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x664
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5A4
  lfs       f28, -0x6048(r2)
  b         .loc_0x60C

.loc_0x5A4:
  lis       r3, 0x8051
  li        r29, 0
  addi      r28, r3, 0x22EC
  mr        r30, r29

.loc_0x5B4:
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1
  add       r29, r29, r3
  cmpwi     r30, 0x7
  addi      r28, r28, 0x20
  blt+      .loc_0x5B4
  xoris     r3, r29, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xD4(r1)
  lfd       f2, -0x6038(r2)
  stw       r0, 0xD0(r1)
  lfs       f1, -0x6040(r2)
  lfd       f0, 0xD0(r1)
  lfs       f3, -0x6044(r2)
  fsubs     f2, f0, f2
  lfs       f0, -0x6048(r2)
  fdivs     f1, f2, f1
  fmadds    f28, f3, f1, f0

.loc_0x60C:
  bl        -0x7511C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xD4(r1)
  lfd       f2, -0x6038(r2)
  stw       r0, 0xD0(r1)
  lfs       f0, -0x603C(r2)
  lfd       f1, 0xD0(r1)
  fsubs     f1, f1, f2
  fdivs     f0, f1, f0
  fcmpo     cr0, f0, f28
  cror      2, 0, 0x2
  bne-      .loc_0x664
  lwz       r3, 0xC8(r31)
  lbz       r0, 0x5C(r3)
  cmplwi    r0, 0x8
  bne-      .loc_0x65C
  addi      r3, r31, 0x20C
  bl        0x27968C
  b         .loc_0x664

.loc_0x65C:
  addi      r3, r31, 0x20C
  bl        0x279460

.loc_0x664:
  psq_l     f31,0x128(r1),0,0
  lfd       f31, 0x120(r1)
  psq_l     f30,0x118(r1),0,0
  lfd       f30, 0x110(r1)
  psq_l     f29,0x108(r1),0,0
  lfd       f29, 0x100(r1)
  psq_l     f28,0xF8(r1),0,0
  lfd       f28, 0xF0(r1)
  lwz       r31, 0xEC(r1)
  lwz       r30, 0xE8(r1)
  lwz       r29, 0xE4(r1)
  lwz       r0, 0x134(r1)
  lwz       r28, 0xE0(r1)
  mtlr      r0
  addi      r1, r1, 0x130
  blr
*/
}

/*
 * --INFO--
 * Address:	8013E754
 * Size:	00003C
 */
void __opi__Q34Game8GameStat11PikiCounterFv(void)
{
/*
.loc_0x0:
  lwz       r5, 0x4(r3)
  lwz       r4, 0x8(r3)
  lwz       r0, 0xC(r3)
  add       r5, r5, r4
  lwz       r4, 0x10(r3)
  add       r5, r5, r0
  lwz       r0, 0x14(r3)
  add       r5, r5, r4
  lwz       r4, 0x18(r3)
  add       r5, r5, r0
  lwz       r0, 0x1C(r3)
  add       r5, r5, r4
  add       r5, r5, r0
  mr        r3, r5
  blr
*/
}

/*
 * --INFO--
 * Address:	8013E790
 * Size:	000014
 */
void inWater__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x190(r3)
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8013E7A4
 * Size:	000004
 */
void wallCallback__Q24Game8FakePikiFR10Vector3<float>(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8013E7A8
 * Size:	000014
 */
void useMapCollision__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x17C(r3)
  rlwinm    r0,r0,0,28,28
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8013E7BC
 * Size:	000008
 */
void getMapCollisionRadius__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x60B0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013E7C4
 * Size:	0000BC
 */
void doEntry__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C4(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0xD8(r31)
  rlwinm.   r0,r0,0,29,29
  beq-      .loc_0x48
  lwz       r3, 0x174(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x90

.loc_0x48:
  lbz       r0, -0x7B98(r13)
  cmplwi    r0, 0
  beq-      .loc_0x7C
  lwz       r4, -0x6C18(r13)
  li        r3, 0
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0x1
  beq-      .loc_0x70
  cmpwi     r0, 0x3
  bne-      .loc_0x74

.loc_0x70:
  li        r3, 0x1

.loc_0x74:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8

.loc_0x7C:
  lwz       r3, 0x174(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x90:
  lwz       r3, 0x174(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xA8:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8013E880
 * Size:	000004
 */
void doColorChange__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8013E884
 * Size:	000494
 */
void doAnimation__Q24Game8FakePikiFv(void)
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
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  stw       r29, 0x34(r1)
  lwz       r5, -0x6514(r13)
  mr        r30, r3
  lis       r6, 0x8048
  subi      r4, r2, 0x6030
  lwz       r3, 0x28(r5)
  subi      r31, r6, 0x38F8
  li        r5, 0x1
  bl        0x2EC230
  addi      r3, r1, 0x18
  bl        0x98F38
  lfs       f1, -0x60A0(r2)
  mr        r3, r30
  lfs       f0, -0x6028(r2)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  bl        -0x2B80
  mr        r3, r30
  addi      r4, r1, 0x18
  bl        0x98F48
  lwz       r3, -0x6514(r13)
  subi      r4, r2, 0x6030
  lwz       r3, 0x28(r3)
  bl        0x2EC1F8
  mr        r3, r30
  lwz       r4, -0x6514(r13)
  lwz       r12, 0x0(r30)
  lfs       f31, 0x54(r4)
  lwz       r12, 0xC0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB0
  lfs       f0, -0x60A8(r2)
  stfs      f0, 0x234(r30)

.loc_0xB0:
  mr        r3, r30
  lfs       f0, 0x234(r30)
  lwz       r12, 0x0(r30)
  fmuls     f30, f0, f31
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xEC
  mr        r3, r30
  bl        0xB684
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xEC
  lfs       f0, -0x6024(r2)
  fmuls     f30, f30, f0

.loc_0xEC:
  lwz       r3, -0x6C18(r13)
  lbz       r0, 0x4A(r3)
  cmplwi    r0, 0
  bne-      .loc_0x134
  addi      r3, r30, 0x1AC
  fmr       f1, f30
  lwz       r12, 0x1AC(r30)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  addi      r3, r30, 0x1C8
  stb       r0, -0x64D8(r13)
  fmr       f1, f30
  lwz       r12, 0x1C8(r30)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x134:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1CC
  lbz       r0, 0xD8(r30)
  rlwinm    r0,r0,0,30,31
  cmpwi     r0, 0x1
  blt-      .loc_0x1CC
  lwz       r0, 0x174(r30)
  cmplwi    r0, 0
  bne-      .loc_0x194
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1AC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x18
  addi      r5, r31, 0x40
  li        r4, 0x69E
  crclr     6, 0x6
  bl        -0x1143D4

.loc_0x194:
  lwz       r3, 0x174(r30)
  li        r0, 0
  lwz       r3, 0x8(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x28(r3)
  lwz       r3, 0x0(r3)
  stw       r0, 0x54(r3)
  lwz       r3, 0x174(r30)
  lwz       r3, 0x8(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x28(r3)
  lwz       r3, 0x10(r3)
  stw       r0, 0x54(r3)
  b         .loc_0x224

.loc_0x1CC:
  addi      r3, r30, 0x1C8
  lwz       r29, 0x174(r30)
  lwz       r12, 0x1C8(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x8(r29)
  lwz       r4, 0x4(r4)
  lwz       r4, 0x28(r4)
  lwz       r4, 0x0(r4)
  stw       r3, 0x54(r4)
  addi      r3, r30, 0x1AC
  lwz       r12, 0x1AC(r30)
  lwz       r29, 0x174(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x8(r29)
  lwz       r4, 0x4(r4)
  lwz       r4, 0x28(r4)
  lwz       r4, 0x10(r4)
  stw       r3, 0x54(r4)

.loc_0x224:
  li        r0, 0
  mr        r3, r30
  stb       r0, -0x64D8(r13)
  lfs       f0, 0x20C(r30)
  stfs      f0, 0x238(r30)
  lfs       f0, 0x210(r30)
  stfs      f0, 0x23C(r30)
  lfs       f0, 0x214(r30)
  stfs      f0, 0x240(r30)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xBC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x27C
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0xB8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x338

.loc_0x27C:
  lwz       r0, 0x248(r30)
  cmplwi    r0, 0
  beq-      .loc_0x338
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1E4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2B0
  lwz       r0, 0xC8(r30)
  cmplwi    r0, 0
  bne-      .loc_0x2B8

.loc_0x2B0:
  mr        r3, r30
  bl        -0xF04

.loc_0x2B8:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1D4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x338
  lfs       f1, 0x1E4(r30)
  lfs       f2, 0x1EC(r30)
  fmuls     f4, f1, f1
  lwz       r3, -0x6514(r13)
  fmuls     f3, f2, f2
  lfs       f0, -0x605C(r2)
  lfs       f30, 0x54(r3)
  fadds     f3, f4, f3
  fcmpo     cr0, f3, f0
  ble-      .loc_0x338
  lis       r3, 0x8051
  subi      r3, r3, 0x2E20
  bl        -0x109A80
  lfs       f2, 0x1FC(r30)
  bl        0x2D306C
  lfs       f0, -0x6050(r2)
  lfs       f2, -0x60A4(r2)
  fmuls     f1, f0, f1
  lfs       f0, 0x1FC(r30)
  fmuls     f1, f30, f1
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x1FC(r30)
  lfs       f1, 0x1FC(r30)
  bl        0x2D301C
  stfs      f1, 0x1FC(r30)

.loc_0x338:
  mr        r3, r30
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r30)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x190(r30)
  mr        r3, r30
  addi      r5, r1, 0x8
  bl        -0x30A4
  stw       r3, 0x190(r30)
  lwz       r0, -0x6CF8(r13)
  cmplwi    r0, 0
  beq-      .loc_0x384
  lwz       r3, -0x6C10(r13)
  lfs       f0, 0x204(r30)
  lfs       f1, 0x28(r3)
  fnmsubs   f0, f31, f1, f0
  stfs      f0, 0x204(r30)

.loc_0x384:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x3E4
  lwz       r3, 0x250(r30)
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x3E4
  addi      r4, r30, 0x138
  bl        0x27154
  lfs       f1, 0x154(r30)
  lfs       f2, 0x164(r30)
  lfs       f0, 0x144(r30)
  stfs      f0, 0x20C(r30)
  stfs      f1, 0x210(r30)
  stfs      f2, 0x214(r30)

.loc_0x3E4:
  lwz       r4, 0x174(r30)
  addi      r3, r30, 0x138
  lwz       r4, 0x8(r4)
  addi      r4, r4, 0x24
  bl        -0x549AC
  lfs       f0, 0x198(r30)
  addi      r4, r31, 0x50
  lwz       r3, -0x6514(r13)
  li        r5, 0x1
  stfs      f0, -0x6D78(r13)
  lfs       f0, 0x19C(r30)
  stfs      f0, -0x6D74(r13)
  lwz       r3, 0x28(r3)
  bl        0x2EBE5C
  lwz       r3, 0x174(r30)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x114(r30)
  bl        -0x9220
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x50
  lwz       r3, 0x28(r3)
  bl        0x2EBE30
  lwz       r3, 0x188(r30)
  cmplwi    r3, 0
  beq-      .loc_0x468
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x468:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r0, 0x64(r1)
  lwz       r29, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8013ED18
 * Size:	000024
 */
void getBoundingSphere__Q24Game8FakePikiFRQ23Sys6Sphere(void)
{
/*
.loc_0x0:
  lfs       f0, 0x218(r3)
  stfs      f0, 0x0(r4)
  lfs       f0, 0x21C(r3)
  stfs      f0, 0x4(r4)
  lfs       f0, 0x220(r3)
  stfs      f0, 0x8(r4)
  lfs       f0, 0x224(r3)
  stfs      f0, 0xC(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013ED3C
 * Size:	000014
 */
void useMoveVelocity__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x17C(r3)
  rlwinm    r0,r0,0,29,29
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8013ED50
 * Size:	000078
 */
void updateTrMatrix__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1DC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x64
  mr        r3, r31
  bl        0x607F4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x64
  lfs       f1, 0x1FC(r31)
  addi      r3, r31, 0x138
  lfs       f0, -0x60AC(r2)
  addi      r4, r31, 0x168
  stfs      f1, 0xC(r1)
  addi      r5, r1, 0x8
  addi      r6, r31, 0x20C
  stfs      f0, 0x8(r1)
  stfs      f0, 0x10(r1)
  bl        0x2E9528

.loc_0x64:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8013EDC8
 * Size:	000014
 */
void useUpdateTrMatrix__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x17C(r3)
  rlwinm    r0,r0,0,30,30
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8013EDDC
 * Size:	000560
 */
void doSimulation__Q24Game8FakePikiFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  lwz       r12, 0x0(r3)
  fmr       f31, f1
  mr        r31, r3
  lwz       r12, 0xBC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x13C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA0
  lwz       r3, -0x6D0C(r13)
  lbz       r0, 0x39(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x104
  lfs       f0, -0x60AC(r2)
  stfs      f0, 0x200(r31)
  stfs      f0, 0x204(r31)
  stfs      f0, 0x208(r31)
  stfs      f0, 0x11C(r31)
  stfs      f0, 0x120(r31)
  stfs      f0, 0x124(r31)
  lfs       f0, 0x20C(r31)
  stfs      f0, 0x218(r31)
  lfs       f0, 0x210(r31)
  stfs      f0, 0x21C(r31)
  lfs       f0, 0x214(r31)
  stfs      f0, 0x220(r31)
  b         .loc_0x540

.loc_0xA0:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x104
  lwz       r3, -0x6D20(r13)
  lbz       r0, 0x5C(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x104
  lfs       f0, -0x60AC(r2)
  stfs      f0, 0x200(r31)
  stfs      f0, 0x204(r31)
  stfs      f0, 0x208(r31)
  stfs      f0, 0x11C(r31)
  stfs      f0, 0x120(r31)
  stfs      f0, 0x124(r31)
  lfs       f0, 0x20C(r31)
  stfs      f0, 0x218(r31)
  lfs       f0, 0x210(r31)
  stfs      f0, 0x21C(r31)
  lfs       f0, 0x214(r31)
  stfs      f0, 0x220(r31)
  b         .loc_0x540

.loc_0x104:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xB8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  lfs       f0, -0x60AC(r2)
  stfs      f0, 0x200(r31)
  stfs      f0, 0x204(r31)
  stfs      f0, 0x208(r31)
  stfs      f0, 0x11C(r31)
  stfs      f0, 0x120(r31)
  stfs      f0, 0x124(r31)

.loc_0x13C:
  lwz       r0, 0x194(r31)
  cmplwi    r0, 0
  beq-      .loc_0x1B0
  lfs       f0, 0x200(r31)
  mr        r3, r31
  lfs       f2, 0x204(r31)
  fmuls     f0, f0, f31
  lfs       f1, 0x20C(r31)
  lfs       f4, 0x208(r31)
  fmuls     f2, f2, f31
  lfs       f3, 0x210(r31)
  fadds     f0, f1, f0
  lfs       f5, 0x214(r31)
  fmuls     f1, f4, f31
  fadds     f2, f3, f2
  stfs      f0, 0x20C(r31)
  fadds     f0, f5, f1
  stfs      f2, 0x210(r31)
  stfs      f0, 0x214(r31)
  bl        0x414
  mr        r3, r31
  bl        -0x3204
  lfs       f0, 0x20C(r31)
  stfs      f0, 0x218(r31)
  lfs       f0, 0x210(r31)
  stfs      f0, 0x21C(r31)
  lfs       f0, 0x214(r31)
  stfs      f0, 0x220(r31)
  b         .loc_0x540

.loc_0x1B0:
  mr        r3, r31
  bl        0x605E4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x278
  lfs       f4, 0x1FC(r31)
  lfs       f0, -0x60AC(r2)
  fmr       f1, f4
  fcmpo     cr0, f4, f0
  bge-      .loc_0x1D8
  fneg      f1, f4

.loc_0x1D8:
  lfs       f2, -0x6094(r2)
  lis       r3, 0x8050
  lfs       f0, -0x60AC(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f1, f2
  fcmpo     cr0, f4, f0
  fctiwz    f0, f1
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f3, 0x4(r3)
  bge-      .loc_0x230
  lfs       f0, -0x6098(r2)
  fmuls     f0, f4, f0
  fctiwz    f0, f0
  stfd      f0, 0x38(r1)
  lwz       r0, 0x3C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f1, f0
  b         .loc_0x248

.loc_0x230:
  fmuls     f0, f4, f2
  fctiwz    f0, f0
  stfd      f0, 0x40(r1)
  lwz       r0, 0x44(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r4, r0

.loc_0x248:
  lfs       f0, -0x60AC(r2)
  mr        r3, r31
  stfs      f1, 0x24(r1)
  addi      r4, r1, 0x24
  stfs      f0, 0x28(r1)
  stfs      f3, 0x2C(r1)
  bl        0x605AC
  mr        r3, r31
  bl        -0x32DC
  lfs       f0, -0x60A8(r2)
  stfs      f0, 0x234(r31)
  b         .loc_0x2D0

.loc_0x278:
  mr        r3, r31
  fmr       f1, f31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1D0(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xBC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2C8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xB8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2D0

.loc_0x2C8:
  mr        r3, r31
  bl        -0x1FB0

.loc_0x2D0:
  lfs       f2, 0x200(r31)
  lfs       f1, 0x204(r31)
  fmuls     f0, f2, f2
  lfs       f3, 0x208(r31)
  fmuls     f4, f1, f1
  lfs       f1, -0x60AC(r2)
  fmuls     f3, f3, f3
  fadds     f0, f0, f4
  fadds     f0, f3, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x318
  fmadds    f0, f2, f2, f4
  fadds     f4, f3, f0
  fcmpo     cr0, f4, f1
  ble-      .loc_0x31C
  fsqrte    f0, f4
  fmuls     f4, f0, f4
  b         .loc_0x31C

.loc_0x318:
  fmr       f4, f1

.loc_0x31C:
  lfs       f0, -0x60AC(r2)
  fcmpo     cr0, f4, f0
  ble-      .loc_0x358
  lfs       f1, -0x605C(r2)
  lfs       f0, 0x200(r31)
  fdivs     f1, f1, f4
  fmuls     f0, f0, f1
  stfs      f0, 0x200(r31)
  lfs       f0, 0x204(r31)
  fmuls     f0, f0, f1
  stfs      f0, 0x204(r31)
  lfs       f0, 0x208(r31)
  fmuls     f0, f0, f1
  stfs      f0, 0x208(r31)
  b         .loc_0x35C

.loc_0x358:
  fmr       f4, f0

.loc_0x35C:
  lfs       f2, 0x11C(r31)
  lfs       f1, 0x120(r31)
  fmuls     f0, f2, f2
  lfs       f3, 0x124(r31)
  fmuls     f5, f1, f1
  lfs       f1, -0x60AC(r2)
  fmuls     f3, f3, f3
  fadds     f0, f0, f5
  fadds     f0, f3, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x3A4
  fmadds    f0, f2, f2, f5
  fadds     f0, f3, f0
  fcmpo     cr0, f0, f1
  ble-      .loc_0x3A8
  fsqrte    f1, f0
  fmuls     f0, f1, f0
  b         .loc_0x3A8

.loc_0x3A4:
  fmr       f0, f1

.loc_0x3A8:
  fcmpo     cr0, f4, f0
  ble-      .loc_0x3EC
  fsubs     f4, f4, f0
  lfs       f0, 0x200(r31)
  lfs       f2, 0x204(r31)
  lfs       f3, 0x208(r31)
  fmuls     f1, f0, f4
  lfs       f0, -0x60AC(r2)
  fmuls     f2, f2, f4
  fmuls     f3, f3, f4
  stfs      f1, 0x200(r31)
  stfs      f2, 0x204(r31)
  stfs      f3, 0x208(r31)
  stfs      f0, 0x11C(r31)
  stfs      f0, 0x120(r31)
  stfs      f0, 0x124(r31)
  b         .loc_0x420

.loc_0x3EC:
  lfs       f0, 0x200(r31)
  lfs       f2, 0x204(r31)
  fmuls     f1, f0, f4
  lfs       f3, 0x208(r31)
  fmuls     f2, f2, f4
  lfs       f0, -0x60AC(r2)
  fmuls     f3, f3, f4
  stfs      f1, 0x200(r31)
  stfs      f2, 0x204(r31)
  stfs      f3, 0x208(r31)
  stfs      f0, 0x11C(r31)
  stfs      f0, 0x120(r31)
  stfs      f0, 0x124(r31)

.loc_0x420:
  lfs       f0, 0x20C(r31)
  li        r0, 0x1
  mr        r3, r31
  addi      r4, r1, 0x8
  stfs      f0, 0x218(r31)
  lfs       f0, 0x210(r31)
  stfs      f0, 0x21C(r31)
  lfs       f0, 0x214(r31)
  stfs      f0, 0x220(r31)
  stb       r0, 0x8(r1)
  bl        -0x3600
  cmpwi     r3, 0x1
  bne-      .loc_0x540
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x484
  mr        r3, r31
  li        r4, 0x2837
  li        r5, 0x1
  bl        0x9674
  b         .loc_0x540

.loc_0x484:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x540
  lwz       r3, -0x6CD0(r13)
  lwz       r0, 0xB0(r3)
  cmplwi    r0, 0
  mr        r30, r0
  bne-      .loc_0x4B8
  lwz       r30, 0xAC(r3)

.loc_0x4B8:
  cmplwi    r30, 0
  bne-      .loc_0x4D0
  lhz       r0, 0x2DC(r31)
  subfic    r4, r0, 0x1
  bl        0x3C7F8
  mr        r30, r3

.loc_0x4D0:
  cmplwi    r30, 0
  bne-      .loc_0x4F4
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x38E0
  li        r4, 0x789
  subi      r5, r5, 0x389C
  crclr     6, 0x6
  bl        -0x114C8C

.loc_0x4F4:
  mr        r4, r30
  addi      r3, r1, 0xC
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x10(r1)
  mr        r3, r31
  lfs       f0, -0x6020(r2)
  addi      r4, r1, 0x18
  lfs       f3, 0xC(r1)
  li        r5, 0
  lfs       f1, 0x14(r1)
  fadds     f0, f2, f0
  stfs      f2, 0x1C(r1)
  stfs      f3, 0x18(r1)
  stfs      f1, 0x20(r1)
  stfs      f0, 0x1C(r1)
  bl        -0x4170

.loc_0x540:
  psq_l     f31,0x58(r1),0,0
  lwz       r0, 0x64(r1)
  lfd       f31, 0x50(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F33C
 * Size:	00001C
 */
void getPosition__Q24Game8BaseItemFv(void)
{
/*
.loc_0x0:
  lfs       f0, 0x19C(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x1A0(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x1A4(r4)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F358
 * Size:	00000C
 */
void initCaptureStomach__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x194(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F364
 * Size:	000008
 */
void startCaptureStomach__Q24Game8FakePikiFP8CollPart(void)
{
/*
.loc_0x0:
  stw       r4, 0x194(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F36C
 * Size:	00000C
 */
void endCaptureStomach__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x194(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F378
 * Size:	000158
 */
void updateStomach__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x194(r3)
  cmplwi    r4, 0
  beqlr-    
  lfs       f1, 0x210(r3)
  lfs       f0, 0x50(r4)
  lfs       f2, 0x214(r3)
  fsubs     f0, f1, f0
  lfs       f1, 0x54(r4)
  lfs       f3, 0x20C(r3)
  fsubs     f1, f2, f1
  lfs       f2, 0x4C(r4)
  fmuls     f4, f0, f0
  fsubs     f9, f3, f2
  lfs       f2, -0x60AC(r2)
  fmuls     f5, f1, f1
  fmadds    f3, f9, f9, f4
  fadds     f4, f5, f3
  fcmpo     cr0, f4, f2
  ble-      .loc_0x5C
  ble-      .loc_0x60
  fsqrte    f2, f4
  fmuls     f4, f2, f4
  b         .loc_0x60

.loc_0x5C:
  fmr       f4, f2

.loc_0x60:
  lfs       f2, -0x60AC(r2)
  fcmpo     cr0, f4, f2
  ble-      .loc_0x84
  lfs       f2, -0x605C(r2)
  fdivs     f2, f2, f4
  fmuls     f9, f9, f2
  fmuls     f0, f0, f2
  fmuls     f1, f1, f2
  b         .loc_0x88

.loc_0x84:
  fmr       f4, f2

.loc_0x88:
  lfs       f3, 0x1C(r4)
  lfs       f2, -0x60B0(r2)
  fsubs     f7, f3, f2
  fcmpo     cr0, f4, f7
  blelr-    
  fmuls     f2, f9, f7
  lfs       f3, 0x4C(r4)
  fmuls     f5, f0, f7
  lfs       f6, 0x50(r4)
  fmuls     f7, f1, f7
  lfs       f8, 0x54(r4)
  fadds     f3, f3, f2
  lfs       f4, -0x601C(r2)
  fadds     f5, f6, f5
  lfs       f2, -0x60AC(r2)
  fadds     f6, f8, f7
  stfs      f3, 0x20C(r3)
  stfs      f5, 0x210(r3)
  stfs      f6, 0x214(r3)
  lfs       f7, 0x204(r3)
  lfs       f8, 0x200(r3)
  fmuls     f3, f7, f0
  lfs       f6, 0x208(r3)
  fmadds    f3, f8, f9, f3
  fmadds    f3, f6, f1, f3
  fmuls     f5, f4, f3
  fmuls     f4, f9, f5
  fmuls     f3, f0, f5
  fmuls     f0, f1, f5
  fsubs     f4, f8, f4
  fsubs     f1, f7, f3
  fsubs     f0, f6, f0
  stfs      f4, 0x200(r3)
  stfs      f1, 0x204(r3)
  stfs      f0, 0x208(r3)
  lwz       r4, 0x194(r3)
  lfs       f1, 0x210(r3)
  lfs       f0, 0x50(r4)
  lfs       f4, 0x20C(r3)
  fsubs     f5, f1, f0
  lfs       f3, 0x4C(r4)
  lfs       f1, 0x214(r3)
  lfs       f0, 0x54(r4)
  fsubs     f3, f4, f3
  fmuls     f4, f5, f5
  fsubs     f1, f1, f0
  fmadds    f0, f3, f3, f4
  fmuls     f1, f1, f1
  fadds     f0, f1, f0
  fcmpo     cr0, f0, f2
  blelr-    
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F4D0
 * Size:	000008
 */
void debugShapeDL__Q24Game8FakePikiFPc(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F4D8
 * Size:	000008
 */
void getDownfloorMass__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F4E0
 * Size:	000008
 */
void isPikmin__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F4E8
 * Size:	000004
 */
void doDebugDL__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F4EC
 * Size:	000004
 */
void update__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F4F0
 * Size:	000028
 */
void setMoveRotation__Q24Game8FakePikiFb(void)
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x18
  lwz       r0, 0x17C(r3)
  ori       r0, r0, 0x1
  stw       r0, 0x17C(r3)
  blr       

.loc_0x18:
  lwz       r0, 0x17C(r3)
  rlwinm    r0,r0,0,0,30
  stw       r0, 0x17C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F518
 * Size:	000028
 */
void setUpdateTrMatrix__Q24Game8FakePikiFb(void)
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x18
  lwz       r0, 0x17C(r3)
  ori       r0, r0, 0x2
  stw       r0, 0x17C(r3)
  blr       

.loc_0x18:
  lwz       r0, 0x17C(r3)
  rlwinm    r0,r0,0,31,29
  stw       r0, 0x17C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F540
 * Size:	000028
 */
void setMoveVelocity__Q24Game8FakePikiFb(void)
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x18
  lwz       r0, 0x17C(r3)
  ori       r0, r0, 0x4
  stw       r0, 0x17C(r3)
  blr       

.loc_0x18:
  lwz       r0, 0x17C(r3)
  rlwinm    r0,r0,0,30,28
  stw       r0, 0x17C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F568
 * Size:	000028
 */
void setMapCollision__Q24Game8FakePikiFb(void)
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x18
  lwz       r0, 0x17C(r3)
  ori       r0, r0, 0x8
  stw       r0, 0x17C(r3)
  blr       

.loc_0x18:
  lwz       r0, 0x17C(r3)
  rlwinm    r0,r0,0,29,27
  stw       r0, 0x17C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F590
 * Size:	00000C
 */
void isZikatu__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x17C(r3)
  rlwinm    r3,r0,27,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F59C
 * Size:	00003C
 */
void setZikatu__Q24Game8FakePikiFb(void)
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x18
  lwz       r0, 0x17C(r3)
  ori       r0, r0, 0x20
  stw       r0, 0x17C(r3)
  b         .loc_0x24

.loc_0x18:
  lwz       r0, 0x17C(r3)
  rlwinm    r0,r0,0,27,25
  stw       r0, 0x17C(r3)

.loc_0x24:
  rlwinm.   r0,r4,0,24,31
  beqlr-    
  lwz       r0, 0x17C(r3)
  ori       r0, r0, 0x80
  stw       r0, 0x17C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F5D8
 * Size:	00000C
 */
void wasZikatu__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x17C(r3)
  rlwinm    r3,r0,25,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F5E4
 * Size:	000004
 */
void inWaterCallback__Q24Game8FakePikiFPQ24Game8WaterBox(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F5E8
 * Size:	000004
 */
void outWaterCallback__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F5EC
 * Size:	000004
 */
void onSetPosition__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F5F0
 * Size:	000044
 */
void onSetPosition__Q24Game8FakePikiFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lfs       f0, 0x0(r4)
  stfs      f0, 0x20C(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x210(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x214(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x218(r12)
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
 * Address:	8013F634
 * Size:	000008
 */
void getFaceDir__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1FC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F63C
 * Size:	00001C
 */
void getVelocity__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  lfs       f0, 0x200(r4)
  stfs      f0, 0x0(r3)
  lfs       f0, 0x204(r4)
  stfs      f0, 0x4(r3)
  lfs       f0, 0x208(r4)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F658
 * Size:	00001C
 */
void setVelocity__Q24Game8FakePikiFR10Vector3<float>(void)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfs      f0, 0x200(r3)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x204(r3)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x208(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F674
 * Size:	00001C
 */
void getVelocityAt__Q24Game8FakePikiFR10Vector3<float>R10Vector3<float>(void)
{
/*
.loc_0x0:
  lfs       f0, 0x200(r3)
  stfs      f0, 0x0(r5)
  lfs       f0, 0x204(r3)
  stfs      f0, 0x4(r5)
  lfs       f0, 0x208(r3)
  stfs      f0, 0x8(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F690
 * Size:	000008
 */
void getSound_PosPtr__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x20C
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F698
 * Size:	000008
 */
void isWalking__Q24Game8FakePikiFv(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F6A0
 * Size:	000004
 */
void onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F6A4
 * Size:	000028
 */
void __sinit_fakePiki_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804B
  stw       r0, -0x6D80(r13)
  stfsu     f0, 0x2B0(r3)
  stfs      f0, -0x6D7C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013F6CC
 * Size:	000008
 */
void @376@onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x178
  b         -0x30
*/
}