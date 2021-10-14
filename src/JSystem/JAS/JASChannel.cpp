

/*
 * --INFO--
 * Address:	800A3204
 * Size:	000160
 */
void JASChannel::JASChannel(void (*)(unsigned long, JASChannel*,
                                     JASDsp::TChannel*, void*),
                            void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  mr        r4, r31
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  bl        -0x7CA74
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r3, 0x4430
	  li        r6, 0x20
	  stw       r0, 0x10(r31)
	  addi      r5, r4, 0x4418
	  lis       r3, 0x800A
	  li        r0, 0
	  stw       r5, 0x14(r31)
	  addi      r5, r5, 0x8
	  addi      r4, r3, 0x3364
	  addi      r3, r31, 0x30
	  stw       r5, 0x10(r31)
	  li        r5, 0
	  li        r7, 0x4
	  stw       r0, 0x18(r31)
	  stw       r0, 0x20(r31)
	  stw       r30, 0x24(r31)
	  stw       r29, 0x28(r31)
	  stw       r0, 0x2C(r31)
	  bl        0x1E5BC
	  lfs       f2, -0x7550(r2)
	  li        r30, 0
	  lfs       f1, -0x754C(r2)
	  li        r8, 0x150
	  stfs      f2, 0xC0(r31)
	  li        r7, 0x210
	  lfs       f0, -0x7548(r2)
	  li        r6, 0x352
	  stw       r30, 0xC4(r31)
	  li        r5, 0x412
	  li        r4, 0x13F
	  li        r3, 0x1A
	  stw       r30, 0xC8(r31)
	  li        r0, 0x1
	  li        r29, 0
	  stfs      f2, 0xF8(r31)
	  stfs      f2, 0xFC(r31)
	  stw       r30, 0xE8(r31)
	  stb       r30, 0xE4(r31)
	  stw       r30, 0xEC(r31)
	  stfs      f1, 0xCC(r31)
	  stfs      f0, 0xD4(r31)
	  stfs      f0, 0xDC(r31)
	  stfs      f1, 0xD0(r31)
	  stfs      f0, 0xD8(r31)
	  stfs      f0, 0xE0(r31)
	  sth       r8, 0xB0(r31)
	  sth       r7, 0xB2(r31)
	  sth       r6, 0xB4(r31)
	  sth       r5, 0xB6(r31)
	  sth       r30, 0xB8(r31)
	  sth       r30, 0xBA(r31)
	  sth       r4, 0xBC(r31)
	  stb       r3, 0x108(r31)
	  stb       r0, 0x109(r31)
	  stb       r0, 0x10A(r31)

	.loc_0x110:
	  addi      r3, r30, 0x30
	  add       r3, r31, r3
	  bl        -0x7A4
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x20
	  cmplwi    r29, 0x4
	  blt+      .loc_0x110
	  lfs       f0, -0x7550(r2)
	  li        r0, 0
	  mr        r3, r31
	  stfs      f0, 0x100(r31)
	  stfs      f0, 0x104(r31)
	  stb       r0, 0x1C(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A3364
 * Size:	000030
 */
void JASOscillator::JASOscillator()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x800
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
 * Address:	800A3394
 * Size:	0000A4
 */
void
    JASPoolAllocObject<JASChannel, JASCreationPolicy::NewFromRootHeap,
                       JASThreadingModel::SingleThreaded>::~JASPoolAllocObject()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r3
	  beq-      .loc_0x88
	  lis       r3, 0x804A
	  extsh.    r0, r4
	  addi      r0, r3, 0x4430
	  stw       r0, 0x0(r30)
	  ble-      .loc_0x88
	  lwz       r0, -0x75DC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x78
	  bl        0x4B868
	  lwz       r0, -0x75DC(r13)
	  stw       r3, 0x8(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  lwz       r4, -0x7548(r13)
	  li        r3, 0xC
	  li        r5, 0
	  bl        -0x7F4B0
	  mr.       r31, r3
	  beq-      .loc_0x6C
	  bl        0x3D88

	.loc_0x6C:
	  stw       r31, -0x75DC(r13)

	.loc_0x70:
	  lwz       r3, 0x8(r1)
	  bl        0x4B858

	.loc_0x78:
	  lwz       r3, -0x75DC(r13)
	  mr        r4, r30
	  li        r5, 0x4
	  bl        0x3E58

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JASChannel>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A3438
 * Size:	00010C
 */
void JASChannel::~JASChannel()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr.       r30, r3
	  beq-      .loc_0xF0
	  lis       r3, 0x804A
	  addi      r3, r3, 0x4418
	  stw       r3, 0x14(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  lwz       r3, 0x20(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  bl        0x171C

	.loc_0x44:
	  lwz       r12, 0x24(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x68
	  mr        r4, r30
	  lwz       r6, 0x28(r30)
	  li        r3, 0x2
	  li        r5, 0
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  addic.    r0, r30, 0x10
	  beq-      .loc_0x7C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4430
	  stw       r0, 0x10(r30)

	.loc_0x7C:
	  cmplwi    r30, 0
	  beq-      .loc_0x90
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x7CCF4

	.loc_0x90:
	  extsh.    r0, r31
	  ble-      .loc_0xF0
	  lwz       r0, -0x75DC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xE0
	  bl        0x4B75C
	  lwz       r0, -0x75DC(r13)
	  stw       r3, 0x8(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xD8
	  lwz       r4, -0x7548(r13)
	  li        r3, 0xC
	  li        r5, 0
	  bl        -0x7F5BC
	  mr.       r31, r3
	  beq-      .loc_0xD4
	  bl        0x3C7C

	.loc_0xD4:
	  stw       r31, -0x75DC(r13)

	.loc_0xD8:
	  lwz       r3, 0x8(r1)
	  bl        0x4B74C

	.loc_0xE0:
	  lwz       r3, -0x75DC(r13)
	  mr        r4, r30
	  li        r5, 0x118
	  bl        0x3D4C

	.loc_0xF0:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A3544
 * Size:	000034
 */
void JASChannel::setOscInit(int, const JASOscillator::Data*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r4,r4,5,0,26
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  addi      r3, r4, 0x30
	  mr        r4, r5
	  add       r3, r0, r3
	  bl        -0x9B8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A3578
 * Size:	000010
 */
void JASChannel::setMixConfig(int, unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  sth       r5, 0xB0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A3588
 * Size:	000008
 */
void JASChannel::directReleaseOsc(unsigned short)
{
	/*
	.loc_0x0:
	  sth       r4, 0x4A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void JASChannel::effectOsc(int, JASChannel::EffectOscParam*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A3590
 * Size:	000048
 */
void JASChannel::copyOsc(int, JASOscillator::Data*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,5,0,26
	  add       r3, r3, r0
	  lwz       r3, 0x30(r3)
	  cmplwi    r3, 0
	  beqlr-
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x0(r5)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x4(r5)
	  lwz       r0, 0x8(r3)
	  stw       r0, 0x8(r5)
	  lwz       r0, 0xC(r3)
	  stw       r0, 0xC(r5)
	  lfs       f0, 0x10(r3)
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x14(r3)
	  stfs      f0, 0x14(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A35D8
 * Size:	000034
 */
void JASChannel::overwriteOsc(int, JASOscillator::Data*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r4,r4,5,0,26
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  addi      r3, r4, 0x30
	  mr        r4, r5
	  add       r3, r0, r3
	  bl        -0xA4C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A360C
 * Size:	000088
 */
void JASChannel::setKeySweepTarget(unsigned char, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r0, 0xE4(r3)
	  cmplwi    r0, 0x2
	  beq-      .loc_0x34
	  lwz       r5, 0xE8(r30)
	  cmplwi    r5, 0
	  bne-      .loc_0x3C

	.loc_0x34:
	  rlwinm    r3,r4,0,24,31
	  b         .loc_0x4C

	.loc_0x3C:
	  rlwinm    r3,r4,0,24,31
	  lbz       r4, 0x1(r5)
	  addi      r0, r3, 0x3C
	  sub       r3, r0, r4

	.loc_0x4C:
	  bl        0x1180
	  lfs       f0, 0xF0(r30)
	  cmplwi    r31, 0
	  fmuls     f0, f1, f0
	  bne-      .loc_0x68
	  stfs      f0, 0xF8(r30)
	  b         .loc_0x6C

	.loc_0x68:
	  stfs      f0, 0xC0(r30)

	.loc_0x6C:
	  stw       r31, 0xC4(r30)
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
 * Address:	800A3694
 * Size:	000008
 */
void JASChannel::setPauseFlag(bool)
{
	/*
	.loc_0x0:
	  stb       r4, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A369C
 * Size:	000024
 */
void JASChannel::setPanPower(float, float, float)
{
	/*
	.loc_0x0:
	  fadds     f0, f1, f2
	  fadds     f4, f3, f0
	  fdivs     f0, f1, f4
	  fdivs     f1, f2, f4
	  stfs      f0, 0x10C(r3)
	  fdivs     f0, f3, f4
	  stfs      f1, 0x110(r3)
	  stfs      f0, 0x114(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A36C0
 * Size:	000084
 */
void JASChannel::play()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x800A
	  lhz       r0, 0xBC(r31)
	  addi      r4, r3, 0x3ABC
	  mr        r5, r31
	  rlwinm    r3,r0,0,24,31
	  bl        0x15B8
	  cmplwi    r3, 0
	  bne-      .loc_0x5C
	  cmplwi    r31, 0
	  beq-      .loc_0x54
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x14(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x5C:
	  stw       r3, 0x20(r31)
	  bl        0x1464
	  li        r0, 0x1
	  li        r3, 0x1
	  stw       r0, 0x18(r31)

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A3744
 * Size:	000084
 */
void JASChannel::playForce()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x800A
	  lhz       r0, 0xBC(r31)
	  addi      r4, r3, 0x3ABC
	  mr        r5, r31
	  rlwinm    r3,r0,0,24,31
	  bl        0x1610
	  cmplwi    r3, 0
	  bne-      .loc_0x5C
	  cmplwi    r31, 0
	  beq-      .loc_0x54
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x14(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x5C:
	  stw       r3, 0x20(r31)
	  bl        0x13E0
	  li        r0, 0x1
	  li        r3, 0x1
	  stw       r0, 0x18(r31)

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A37C8
 * Size:	000098
 */
void JASChannel::release(unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x7C
	  rlwinm.   r0,r4,0,16,31
	  beq-      .loc_0x34
	  sth       r4, 0x4A(r29)

	.loc_0x34:
	  li        r30, 0
	  mr        r31, r29

	.loc_0x3C:
	  lwz       r0, 0x30(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  addi      r3, r31, 0x30
	  bl        -0xAEC

	.loc_0x50:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x20
	  cmplwi    r30, 0x4
	  blt+      .loc_0x3C
	  lhz       r0, 0xBC(r29)
	  lwz       r3, 0x20(r29)
	  srawi     r0, r0, 0x8
	  rlwinm    r4,r0,0,24,31
	  bl        0x1628
	  li        r0, 0x2
	  stw       r0, 0x18(r29)

	.loc_0x7C:
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
 * Address:	800A3860
 * Size:	00025C
 */
void JASChannel::updateEffectorParam(JASDsp::TChannel*, unsigned short*,
                                     const JASChannel::EffectOscParam&)
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
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  mr        r28, r3
	  mr        r31, r6
	  lfs       f0, 0xCC(r3)
	  mr        r29, r4
	  lfs       f2, 0x8(r6)
	  mr        r30, r5
	  stfs      f0, 0x20(r1)
	  lfs       f1, 0xC(r6)
	  lfs       f3, 0xD0(r3)
	  lfs       f0, 0x10(r6)
	  stfs      f3, 0x28(r1)
	  lfs       f29, -0x7548(r2)
	  stfs      f2, 0x24(r1)
	  lfs       f2, 0xD4(r3)
	  stfs      f2, 0x14(r1)
	  lfs       f2, 0xD8(r3)
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x18(r1)
	  lfs       f1, 0xDC(r3)
	  stfs      f1, 0x8(r1)
	  lfs       f1, 0xE0(r3)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  bl        0x1050
	  cmpwi     r3, 0x1
	  beq-      .loc_0xD8
	  bge-      .loc_0xAC
	  cmpwi     r3, 0
	  bge-      .loc_0xB8
	  b         .loc_0x164

	.loc_0xAC:
	  cmpwi     r3, 0x3
	  bge-      .loc_0x164
	  b         .loc_0x118

	.loc_0xB8:
	  lfs       f31, -0x754C(r2)
	  addi      r3, r1, 0x14
	  lfs       f29, -0x7548(r2)
	  addi      r4, r28, 0x10C
	  lbz       r5, 0x109(r28)
	  bl        0x790
	  fmr       f30, f1
	  b         .loc_0x164

	.loc_0xD8:
	  lbz       r5, 0x108(r28)
	  cmplwi    r5, 0
	  bne-      .loc_0xEC
	  lfs       f1, -0x754C(r2)
	  b         .loc_0xF8

	.loc_0xEC:
	  addi      r3, r1, 0x20
	  addi      r4, r28, 0x10C
	  bl        0x828

	.loc_0xF8:
	  fmr       f31, f1
	  lbz       r5, 0x109(r28)
	  addi      r3, r1, 0x14
	  addi      r4, r28, 0x10C
	  bl        0x754
	  fmr       f30, f1
	  lfs       f29, -0x7548(r2)
	  b         .loc_0x164

	.loc_0x118:
	  lbz       r5, 0x108(r28)
	  cmplwi    r5, 0
	  bne-      .loc_0x12C
	  lfs       f1, -0x754C(r2)
	  b         .loc_0x138

	.loc_0x12C:
	  addi      r3, r1, 0x20
	  addi      r4, r28, 0x10C
	  bl        0x7E8

	.loc_0x138:
	  fmr       f31, f1
	  lbz       r5, 0x109(r28)
	  addi      r3, r1, 0x14
	  addi      r4, r28, 0x10C
	  bl        0x714
	  fmr       f30, f1
	  lbz       r5, 0x10A(r28)
	  addi      r3, r1, 0x8
	  addi      r4, r28, 0x10C
	  bl        0x700
	  fmr       f29, f1

	.loc_0x164:
	  lfs       f1, 0xFC(r28)
	  lfs       f0, 0x0(r31)
	  lfs       f2, -0x7548(r2)
	  fmuls     f0, f1, f0
	  lfs       f1, 0x100(r28)
	  fcmpo     cr0, f31, f2
	  fmuls     f1, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x18C
	  b         .loc_0x1A4

	.loc_0x18C:
	  lfs       f2, -0x7550(r2)
	  fcmpo     cr0, f31, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1A0
	  b         .loc_0x1A4

	.loc_0x1A0:
	  fmr       f2, f31

	.loc_0x1A4:
	  lfs       f3, -0x7548(r2)
	  fcmpo     cr0, f30, f3
	  cror      2, 0, 0x2
	  bne-      .loc_0x1B8
	  b         .loc_0x1D0

	.loc_0x1B8:
	  lfs       f3, -0x7550(r2)
	  fcmpo     cr0, f30, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1CC
	  b         .loc_0x1D0

	.loc_0x1CC:
	  fmr       f3, f30

	.loc_0x1D0:
	  lfs       f4, -0x7548(r2)
	  fcmpo     cr0, f29, f4
	  cror      2, 0, 0x2
	  bne-      .loc_0x1E4
	  b         .loc_0x1FC

	.loc_0x1E4:
	  lfs       f4, -0x7550(r2)
	  fcmpo     cr0, f29, f4
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1F8
	  b         .loc_0x1FC

	.loc_0x1F8:
	  fmr       f4, f29

	.loc_0x1FC:
	  lhz       r0, 0xB0(r28)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x218
	  mr        r3, r28
	  mr        r4, r30
	  bl        0x928
	  b         .loc_0x224

	.loc_0x218:
	  mr        r3, r28
	  mr        r4, r29
	  bl        0x7F8

	.loc_0x224:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A3ABC
 * Size:	0000A0
 */
void JASChannel::dspUpdateCallback(unsigned long, JASDsp::TChannel*, void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  beq-      .loc_0x44
	  bge-      .loc_0x2C
	  cmpwi     r3, 0
	  bge-      .loc_0x38
	  b         .loc_0x88

	.loc_0x2C:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x88
	  b         .loc_0x50

	.loc_0x38:
	  mr        r3, r31
	  bl        0x308
	  b         .loc_0x8C

	.loc_0x44:
	  mr        r3, r31
	  bl        .loc_0xA0
	  b         .loc_0x88

	.loc_0x50:
	  lwz       r3, 0x20(r31)
	  bl        0x1064
	  li        r0, 0
	  cmplwi    r31, 0
	  stw       r0, 0x20(r31)
	  beq-      .loc_0x80
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x14(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x80:
	  li        r3, -0x1
	  b         .loc_0x8C

	.loc_0x88:
	  li        r3, 0

	.loc_0x8C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xA0:
	*/
}

/*
 * --INFO--
 * Address:	800A3B5C
 * Size:	0002A4
 */
void JASChannel::initialUpdateDSPChannel(JASDsp::TChannel*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  lwz       r12, 0x24(r3)
	  cmplwi    r12, 0
	  beq-      .loc_0x48
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r6, 0x28(r30)
	  li        r3, 0x1
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lbz       r0, 0xE4(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x94
	  bge-      .loc_0x64
	  cmpwi     r0, 0
	  bge-      .loc_0x70
	  b         .loc_0x94

	.loc_0x64:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x94
	  b         .loc_0x88

	.loc_0x70:
	  lwz       r4, 0xE8(r30)
	  mr        r3, r31
	  lwz       r5, 0xEC(r30)
	  lwz       r6, 0xC8(r30)
	  bl        0x1B74
	  b         .loc_0x94

	.loc_0x88:
	  lwz       r4, 0xEC(r30)
	  mr        r3, r31
	  bl        0x1CB4

	.loc_0x94:
	  li        r29, 0
	  b         .loc_0x11C

	.loc_0x9C:
	  rlwinm    r3,r29,1,23,30
	  addi      r0, r3, 0xB0
	  lhzx      r0, r30, r0
	  sth       r0, 0x8(r1)
	  bl        0xD38
	  cmplwi    r3, 0
	  bne-      .loc_0xEC
	  lbz       r0, 0x8(r1)
	  cmpwi     r0, 0x9
	  beq-      .loc_0xE0
	  bge-      .loc_0x108
	  cmpwi     r0, 0x8
	  bge-      .loc_0xD4
	  b         .loc_0x108

	.loc_0xD4:
	  li        r0, 0xB
	  stb       r0, 0x8(r1)
	  b         .loc_0x108

	.loc_0xE0:
	  li        r0, 0x2
	  stb       r0, 0x8(r1)
	  b         .loc_0x108

	.loc_0xEC:
	  cmplwi    r3, 0x1
	  bne-      .loc_0x108
	  lbz       r0, 0x8(r1)
	  cmplwi    r0, 0x8
	  bne-      .loc_0x108
	  li        r0, 0xB
	  stb       r0, 0x8(r1)

	.loc_0x108:
	  lbz       r5, 0x8(r1)
	  mr        r3, r31
	  mr        r4, r29
	  bl        0x1E68
	  addi      r29, r29, 0x1

	.loc_0x11C:
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x6
	  blt+      .loc_0x9C
	  lfs       f2, -0x7550(r2)
	  mr        r29, r30
	  lfs       f0, -0x7548(r2)
	  li        r28, 0
	  lfs       f1, -0x754C(r2)
	  stfs      f2, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x28(r1)

	.loc_0x150:
	  lwz       r0, 0x30(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x1F0
	  addi      r3, r29, 0x30
	  bl        -0xFC0
	  lwz       r3, 0x30(r29)
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1B8
	  bge-      .loc_0x188
	  cmpwi     r0, 0
	  beq-      .loc_0x1A8
	  bge-      .loc_0x198
	  b         .loc_0x1F0

	.loc_0x188:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x1E4
	  bge-      .loc_0x1F0
	  b         .loc_0x1D4

	.loc_0x198:
	  lfs       f0, 0x1C(r1)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1C(r1)
	  b         .loc_0x1F0

	.loc_0x1A8:
	  lfs       f0, 0x18(r1)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x18(r1)
	  b         .loc_0x1F0

	.loc_0x1B8:
	  lfd       f2, -0x7540(r2)
	  lfs       f0, 0x20(r1)
	  fsub      f1, f1, f2
	  frsp      f1, f1
	  fadds     f0, f0, f1
	  stfs      f0, 0x20(r1)
	  b         .loc_0x1F0

	.loc_0x1D4:
	  lfs       f0, 0x24(r1)
	  fadds     f0, f0, f1
	  stfs      f0, 0x24(r1)
	  b         .loc_0x1F0

	.loc_0x1E4:
	  lfs       f0, 0x28(r1)
	  fadds     f0, f0, f1
	  stfs      f0, 0x28(r1)

	.loc_0x1F0:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x20
	  cmpwi     r28, 0x4
	  blt+      .loc_0x150
	  mr        r3, r30
	  mr        r4, r31
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x18
	  bl        -0x50C
	  addi      r29, r1, 0xC
	  li        r28, 0
	  b         .loc_0x23C

	.loc_0x220:
	  rlwinm    r0,r28,1,23,30
	  mr        r3, r31
	  lhzx      r0, r29, r0
	  mr        r4, r28
	  extsh     r5, r0
	  bl        0x1BA4
	  addi      r28, r28, 0x1

	.loc_0x23C:
	  rlwinm    r0,r28,0,24,31
	  cmplwi    r0, 0x6
	  blt+      .loc_0x220
	  lfs       f1, 0xF8(r30)
	  mr        r3, r31
	  lfs       f0, 0x1C(r1)
	  lfs       f2, 0x104(r30)
	  fmuls     f0, f1, f0
	  lfs       f1, -0x7538(r2)
	  fmuls     f0, f2, f0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r4, 0x34(r1)
	  bl        0x1B40
	  lbz       r4, 0x1C(r30)
	  mr        r3, r31
	  bl        0x1BDC
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A3E00
 * Size:	0002BC
 */
void JASChannel::updateDSPChannel(JASDsp::TChannel*)
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
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  lwz       r3, 0xE8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r3, 0x24(r3)
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x78
	  lwz       r3, 0x20(r30)
	  bl        0xD30
	  li        r0, 0
	  cmplwi    r30, 0
	  stw       r0, 0x20(r30)
	  beq-      .loc_0x70
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x14(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  li        r3, -0x1
	  b         .loc_0x29C

	.loc_0x78:
	  lwz       r12, 0x24(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x9C
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r6, 0x28(r30)
	  li        r3, 0
	  mtctr     r12
	  bctrl

	.loc_0x9C:
	  lwz       r3, 0x2C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  subi      r0, r3, 0x1
	  stw       r0, 0x2C(r30)
	  lwz       r0, 0x2C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xE0
	  lwz       r12, 0x24(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0xE0
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r6, 0x28(r30)
	  li        r3, 0x3
	  mtctr     r12
	  bctrl

	.loc_0xE0:
	  lfs       f2, -0x7550(r2)
	  mr        r29, r30
	  lfs       f0, -0x7548(r2)
	  li        r28, 0
	  lfs       f1, -0x754C(r2)
	  stfs      f2, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  stfs      f0, 0x24(r1)

	.loc_0x108:
	  lwz       r0, 0x30(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x1FC
	  addi      r3, r29, 0x30
	  bl        -0x12E4
	  addi      r3, r29, 0x30
	  bl        -0x1224
	  lwz       r3, 0x30(r29)
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x178
	  bge-      .loc_0x148
	  cmpwi     r0, 0
	  beq-      .loc_0x168
	  bge-      .loc_0x158
	  b         .loc_0x1B0

	.loc_0x148:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x1A4
	  bge-      .loc_0x1B0
	  b         .loc_0x194

	.loc_0x158:
	  lfs       f0, 0x18(r1)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x18(r1)
	  b         .loc_0x1B0

	.loc_0x168:
	  lfs       f0, 0x14(r1)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x14(r1)
	  b         .loc_0x1B0

	.loc_0x178:
	  lfd       f2, -0x7540(r2)
	  lfs       f0, 0x1C(r1)
	  fsub      f1, f1, f2
	  frsp      f1, f1
	  fadds     f0, f0, f1
	  stfs      f0, 0x1C(r1)
	  b         .loc_0x1B0

	.loc_0x194:
	  lfs       f0, 0x20(r1)
	  fadds     f0, f0, f1
	  stfs      f0, 0x20(r1)
	  b         .loc_0x1B0

	.loc_0x1A4:
	  lfs       f0, 0x24(r1)
	  fadds     f0, f0, f1
	  stfs      f0, 0x24(r1)

	.loc_0x1B0:
	  cmpwi     r28, 0
	  bne-      .loc_0x1FC
	  lbz       r0, 0x4C(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x1FC
	  lwz       r3, 0x20(r30)
	  bl        0xBAC
	  li        r0, 0
	  cmplwi    r30, 0
	  stw       r0, 0x20(r30)
	  beq-      .loc_0x1F4
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x14(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1F4:
	  li        r3, -0x1
	  b         .loc_0x29C

	.loc_0x1FC:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x20
	  cmpwi     r28, 0x4
	  blt+      .loc_0x108
	  mr        r3, r30
	  mr        r4, r31
	  addi      r5, r1, 0x8
	  addi      r6, r1, 0x14
	  bl        -0x7BC
	  mr        r3, r30
	  bl        0x748
	  addi      r29, r1, 0x8
	  li        r28, 0
	  b         .loc_0x250

	.loc_0x234:
	  rlwinm    r0,r28,1,23,30
	  mr        r3, r31
	  lhzx      r0, r29, r0
	  mr        r4, r28
	  extsh     r5, r0
	  bl        0x1944
	  addi      r28, r28, 0x1

	.loc_0x250:
	  rlwinm    r0,r28,0,24,31
	  cmplwi    r0, 0x6
	  blt+      .loc_0x234
	  lfs       f1, 0xF8(r30)
	  mr        r3, r31
	  lfs       f0, 0x18(r1)
	  lfs       f2, 0x104(r30)
	  fmuls     f0, f1, f0
	  lfs       f1, -0x7538(r2)
	  fmuls     f0, f2, f0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r4, 0x2C(r1)
	  bl        0x1888
	  lbz       r4, 0x1C(r30)
	  mr        r3, r31
	  bl        0x1924
	  li        r3, 0

	.loc_0x29C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A40BC
 * Size:	0000C0
 */
void JASChannel::calcEffect(const JASChannel::PanVector*,
                            const JASChannel::PanVector*, unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r5,0,24,31
	  lis       r5, 0x8048
	  mulli     r6, r0, 0x3
	  lfs       f1, -0x7548(r2)
	  subi      r0, r5, 0x71E8
	  add       r5, r0, r6
	  lbz       r0, 0x0(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x38
	  bge-      .loc_0x2C
	  b         .loc_0x50

	.loc_0x2C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x50
	  b         .loc_0x44

	.loc_0x38:
	  lfs       f0, 0x0(r3)
	  fadds     f1, f1, f0
	  b         .loc_0x50

	.loc_0x44:
	  lfs       f2, 0x0(r3)
	  lfs       f0, 0x0(r4)
	  fmadds    f1, f2, f0, f1

	.loc_0x50:
	  lbz       r0, 0x1(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x70
	  bge-      .loc_0x64
	  b         .loc_0x88

	.loc_0x64:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x88
	  b         .loc_0x7C

	.loc_0x70:
	  lfs       f0, 0x4(r3)
	  fadds     f1, f1, f0
	  b         .loc_0x88

	.loc_0x7C:
	  lfs       f2, 0x4(r3)
	  lfs       f0, 0x4(r4)
	  fmadds    f1, f2, f0, f1

	.loc_0x88:
	  lbz       r0, 0x2(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xA4
	  bltlr-
	  cmpwi     r0, 0x3
	  bgelr-
	  b         .loc_0xB0

	.loc_0xA4:
	  lfs       f0, 0x8(r3)
	  fadds     f1, f1, f0
	  blr

	.loc_0xB0:
	  lfs       f2, 0x8(r3)
	  lfs       f0, 0x8(r4)
	  fmadds    f1, f2, f0, f1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A417C
 * Size:	0000FC
 */
void JASChannel::calcPan(const JASChannel::PanVector*,
                         const JASChannel::PanVector*, unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r5,0,24,31
	  lis       r5, 0x8048
	  mulli     r6, r0, 0x3
	  lfs       f1, -0x7548(r2)
	  subi      r0, r5, 0x71E8
	  add       r5, r0, r6
	  lbz       r0, 0x0(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x38
	  bge-      .loc_0x2C
	  b         .loc_0x60

	.loc_0x2C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x60
	  b         .loc_0x4C

	.loc_0x38:
	  lfs       f2, 0x0(r3)
	  lfs       f0, -0x754C(r2)
	  fsubs     f0, f2, f0
	  fadds     f1, f1, f0
	  b         .loc_0x60

	.loc_0x4C:
	  lfs       f3, 0x0(r3)
	  lfs       f2, -0x754C(r2)
	  lfs       f0, 0x0(r4)
	  fsubs     f2, f3, f2
	  fmadds    f1, f2, f0, f1

	.loc_0x60:
	  lbz       r0, 0x1(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x80
	  bge-      .loc_0x74
	  b         .loc_0xA8

	.loc_0x74:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xA8
	  b         .loc_0x94

	.loc_0x80:
	  lfs       f2, 0x4(r3)
	  lfs       f0, -0x754C(r2)
	  fsubs     f0, f2, f0
	  fadds     f1, f1, f0
	  b         .loc_0xA8

	.loc_0x94:
	  lfs       f3, 0x4(r3)
	  lfs       f2, -0x754C(r2)
	  lfs       f0, 0x4(r4)
	  fsubs     f2, f3, f2
	  fmadds    f1, f2, f0, f1

	.loc_0xA8:
	  lbz       r0, 0x2(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xC8
	  bge-      .loc_0xBC
	  b         .loc_0xF0

	.loc_0xBC:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xF0
	  b         .loc_0xDC

	.loc_0xC8:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x754C(r2)
	  fsubs     f0, f2, f0
	  fadds     f1, f1, f0
	  b         .loc_0xF0

	.loc_0xDC:
	  lfs       f3, 0x8(r3)
	  lfs       f2, -0x754C(r2)
	  lfs       f0, 0x8(r4)
	  fsubs     f2, f3, f2
	  fmadds    f1, f2, f0, f1

	.loc_0xF0:
	  lfs       f0, -0x754C(r2)
	  fadds     f1, f1, f0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4278
 * Size:	000120
 */
void JASChannel::updateAutoMixer(JASDsp::TChannel*, float, float, float, float)
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
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  lfs       f31, -0x7548(r2)
	  fmr       f28, f2
	  fmr       f29, f3
	  mr        r30, r3
	  fcmpo     cr0, f1, f31
	  mr        r31, r4
	  fmr       f30, f4
	  cror      2, 0, 0x2
	  bne-      .loc_0x5C
	  b         .loc_0x74

	.loc_0x5C:
	  lfs       f31, -0x7550(r2)
	  fcmpo     cr0, f1, f31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x70
	  b         .loc_0x74

	.loc_0x70:
	  fmr       f31, f1

	.loc_0x74:
	  bl        0x5F4
	  rlwinm    r3,r3,0,16,31
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r31
	  lfs       f0, -0x7534(r2)
	  stw       r0, 0x8(r1)
	  lfd       f4, -0x7530(r2)
	  fmuls     f2, f0, f28
	  lfd       f3, 0x8(r1)
	  fmuls     f1, f0, f30
	  fmuls     f0, f0, f29
	  lhz       r0, 0xB2(r30)
	  fsubs     f3, f3, f4
	  fctiwz    f2, f2
	  rlwinm    r8,r0,0,24,31
	  fctiwz    f1, f1
	  fmuls     f3, f31, f3
	  stfd      f2, 0x18(r1)
	  fctiwz    f0, f0
	  fctiwz    f2, f3
	  stfd      f1, 0x20(r1)
	  lwz       r5, 0x1C(r1)
	  stfd      f0, 0x28(r1)
	  lwz       r6, 0x24(r1)
	  stfd      f2, 0x10(r1)
	  lwz       r7, 0x2C(r1)
	  lwz       r4, 0x14(r1)
	  bl        0x1588
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4398
 * Size:	0003D4
 */
void JASChannel::updateMixer(float, float, float, float, unsigned short*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stfd      f28, 0x80(r1)
	  psq_st    f28,0x88(r1),0,0
	  stfd      f27, 0x70(r1)
	  psq_st    f27,0x78(r1),0,0
	  stfd      f26, 0x60(r1)
	  psq_st    f26,0x68(r1),0,0
	  stfd      f25, 0x50(r1)
	  psq_st    f25,0x58(r1),0,0
	  stfd      f24, 0x40(r1)
	  psq_st    f24,0x48(r1),0,0
	  stfd      f23, 0x30(r1)
	  psq_st    f23,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  fmr       f25, f2
	  lfs       f0, -0x7550(r2)
	  fmr       f26, f3
	  mr        r31, r3
	  fmr       f27, f4
	  mr        r30, r4
	  fmr       f24, f1
	  li        r29, 0
	  fsubs     f31, f0, f25
	  fsubs     f30, f0, f26
	  fsubs     f29, f0, f27

	.loc_0x8C:
	  lhz       r0, 0xB0(r31)
	  fmr       f0, f24
	  sth       r0, 0x8(r1)
	  lbz       r0, 0x8(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  li        r0, 0
	  sth       r0, 0x0(r30)
	  b         .loc_0x35C

	.loc_0xB0:
	  lbz       r0, 0x9(r1)
	  rlwinm.   r4,r0,28,28,31
	  beq-      .loc_0x190
	  cmplwi    r4, 0x7
	  bgt-      .loc_0x108
	  lis       r3, 0x804A
	  rlwinm    r0,r4,2,0,29
	  addi      r3, r3, 0x43F8
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  fmr       f28, f25
	  b         .loc_0x108
	  fmr       f28, f26
	  b         .loc_0x108
	  fmr       f28, f27
	  b         .loc_0x108
	  fmr       f28, f31
	  b         .loc_0x108
	  fmr       f28, f30
	  b         .loc_0x108
	  fmr       f28, f29

	.loc_0x108:
	  cmpwi     r4, 0x6
	  beq-      .loc_0x120
	  bge-      .loc_0x128
	  cmpwi     r4, 0x2
	  beq-      .loc_0x120
	  b         .loc_0x128

	.loc_0x120:
	  fmuls     f0, f0, f28
	  b         .loc_0x190

	.loc_0x128:
	  lfs       f2, -0x7520(r2)
	  lfs       f1, -0x7548(r2)
	  fmuls     f2, f2, f28
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x168
	  lfs       f1, -0x7528(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0
	  fneg      f1, f1
	  b         .loc_0x18C

	.loc_0x168:
	  lfs       f1, -0x7524(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x18C:
	  fmuls     f0, f0, f1

	.loc_0x190:
	  lbz       r0, 0x9(r1)
	  rlwinm.   r4,r0,0,28,31
	  beq-      .loc_0x2FC
	  cmplwi    r4, 0x7
	  bgt-      .loc_0x1E8
	  lis       r3, 0x804A
	  rlwinm    r0,r4,2,0,29
	  addi      r3, r3, 0x43D8
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  fmr       f28, f25
	  b         .loc_0x1E8
	  fmr       f28, f26
	  b         .loc_0x1E8
	  fmr       f28, f27
	  b         .loc_0x1E8
	  fmr       f28, f31
	  b         .loc_0x1E8
	  fmr       f28, f30
	  b         .loc_0x1E8
	  fmr       f28, f29

	.loc_0x1E8:
	  cmpwi     r4, 0x6
	  beq-      .loc_0x28C
	  bge-      .loc_0x20C
	  cmpwi     r4, 0x3
	  beq-      .loc_0x214
	  bge-      .loc_0x294
	  cmpwi     r4, 0x2
	  bge-      .loc_0x28C
	  b         .loc_0x294

	.loc_0x20C:
	  cmpwi     r4, 0x8
	  bge-      .loc_0x294

	.loc_0x214:
	  lfs       f2, -0x7518(r2)
	  lfs       f1, -0x751C(r2)
	  lfs       f3, -0x7520(r2)
	  fmadds    f2, f2, f28, f1
	  lfs       f1, -0x7548(r2)
	  fmuls     f2, f3, f2
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x260
	  lfs       f1, -0x7528(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0
	  fneg      f1, f1
	  b         .loc_0x284

	.loc_0x260:
	  lfs       f1, -0x7524(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x284:
	  fmuls     f0, f0, f1
	  b         .loc_0x2FC

	.loc_0x28C:
	  fmuls     f0, f0, f28
	  b         .loc_0x2FC

	.loc_0x294:
	  lfs       f2, -0x7520(r2)
	  lfs       f1, -0x7548(r2)
	  fmuls     f2, f2, f28
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x2D4
	  lfs       f1, -0x7528(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0
	  fneg      f1, f1
	  b         .loc_0x2F8

	.loc_0x2D4:
	  lfs       f1, -0x7524(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x2F8:
	  fmuls     f0, f0, f1

	.loc_0x2FC:
	  lfs       f23, -0x7548(r2)
	  fcmpo     cr0, f0, f23
	  cror      2, 0, 0x2
	  bne-      .loc_0x310
	  b         .loc_0x328

	.loc_0x310:
	  lfs       f23, -0x7550(r2)
	  fcmpo     cr0, f0, f23
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x324
	  b         .loc_0x328

	.loc_0x324:
	  fmr       f23, f0

	.loc_0x328:
	  bl        0x218
	  rlwinm    r3,r3,0,16,31
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f1, -0x7530(r2)
	  stw       r0, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  fmuls     f0, f23, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  sth       r0, 0x0(r30)

	.loc_0x35C:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x2
	  cmplwi    r29, 0x6
	  addi      r31, r31, 0x2
	  blt+      .loc_0x8C
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  psq_l     f28,0x88(r1),0,0
	  lfd       f28, 0x80(r1)
	  psq_l     f27,0x78(r1),0,0
	  lfd       f27, 0x70(r1)
	  psq_l     f26,0x68(r1),0,0
	  lfd       f26, 0x60(r1)
	  psq_l     f25,0x58(r1),0,0
	  lfd       f25, 0x50(r1)
	  psq_l     f24,0x48(r1),0,0
	  lfd       f24, 0x40(r1)
	  psq_l     f23,0x38(r1),0,0
	  lfd       f23, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0xC4(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A476C
 * Size:	000054
 */
void JASChannel::sweepProc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lwz       r4, 0xC4(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x4C
	  lis       r0, 0x4330
	  stw       r4, 0xC(r1)
	  lfs       f3, 0xC0(r3)
	  stw       r0, 0x8(r1)
	  lfs       f2, 0xF8(r3)
	  lfd       f1, -0x7530(r2)
	  lfd       f0, 0x8(r1)
	  fsubs     f3, f3, f2
	  fsubs     f0, f0, f1
	  fdivs     f3, f3, f0
	  fadds     f0, f2, f3
	  stfs      f0, 0xF8(r3)
	  lwz       r4, 0xC4(r3)
	  subi      r0, r4, 0x1
	  stw       r0, 0xC4(r3)

	.loc_0x4C:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A47C0
 * Size:	000010
 */
void JASChannel::free()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x24(r3)
	  stw       r0, 0x28(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A47D0
 * Size:	000008
 */
void JASChannel::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x139C
	*/
}
