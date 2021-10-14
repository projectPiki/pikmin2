

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B9064
 * Size:	000084
 */
void TParticle2dMgr::~TParticle2dMgr()
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
	  beq-      .loc_0x68
	  lis       r3, 0x804E
	  li        r0, 0
	  addi      r4, r3, 0x7374
	  addi      r3, r30, 0x18
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x10
	  li        r4, 0
	  stw       r5, 0x18(r30)
	  stw       r0, -0x65F4(r13)
	  stw       r0, -0x65F8(r13)
	  bl        -0x39C078
	  mr        r3, r30
	  li        r4, 0
	  bl        0x584D0
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x395014

	.loc_0x68:
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
 * Address:	803B90E8
 * Size:	000024
 */
void TParticle2dMgr::globalInstance()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        .loc_0x24
	  stw       r3, -0x65F8(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x24:
	*/
}

/*
 * --INFO--
 * Address:	803B910C
 * Size:	000048
 */
void TParticle2dMgr::Instance()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x65F4(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x34
	  li        r3, 0x44
	  bl        -0x395284
	  mr.       r0, r3
	  beq-      .loc_0x30
	  bl        0x70
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, -0x65F4(r13)

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r3, -0x65F4(r13)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B9154
 * Size:	000050
 */
void TParticle2dMgr::deleteInstance()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x65F4(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  beq-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  li        r0, 0
	  stw       r0, -0x65F4(r13)

	.loc_0x38:
	  li        r0, 0
	  stw       r0, -0x65F8(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B91A4
 * Size:	000088
 */
void TParticle2dMgr::TParticle2dMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x4AD8
	  li        r4, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8049
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x5A8C
	  addi      r3, r31, 0x18
	  stw       r4, 0x10(r31)
	  stw       r4, 0xC(r31)
	  stw       r4, 0x8(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x14(r31)
	  bl        -0x39C21C
	  lis       r3, 0x804E
	  li        r0, 0
	  addi      r4, r3, 0x7374
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x10
	  stw       r4, 0x18(r31)
	  stw       r0, 0x38(r31)
	  stw       r0, 0x30(r31)
	  stw       r0, 0x34(r31)
	  stw       r0, 0x3C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B922C
 * Size:	000094
 */
void TParticle2dMgr::createHeap(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r5, 0x5A70
	  li        r5, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  addi      r4, r31, 0x2C
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x6A0FC
	  lwz       r0, 0x38(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  addi      r3, r31, 0x48
	  addi      r5, r31, 0x5C
	  li        r4, 0x49
	  crclr     6, 0x6
	  bl        -0x38EC40

	.loc_0x58:
	  lwz       r4, -0x77D4(r13)
	  mr        r3, r30
	  li        r5, 0x1
	  bl        -0x394520
	  stw       r3, 0x38(r29)
	  addi      r4, r31, 0x2C
	  lwz       r3, -0x6514(r13)
	  bl        0x6A0C4
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
 * Address:	803B92C0
 * Size:	000154
 */
void TParticle2dMgr::createMgr(char*, unsigned long, unsigned long,
                               unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r31, r3
	  lis       r3, 0x8049
	  mr        r25, r4
	  mr        r26, r5
	  mr        r27, r6
	  addi      r30, r3, 0x5A70
	  lwz       r0, 0x38(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x48
	  addi      r3, r30, 0x48
	  addi      r5, r30, 0x68
	  li        r4, 0x53
	  crclr     6, 0x6
	  bl        -0x38ECC4

	.loc_0x48:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x88
	  li        r5, 0
	  bl        0x6A048
	  lwz       r29, -0x77D4(r13)
	  lwz       r3, 0x38(r31)
	  bl        -0x395D7C
	  li        r0, 0
	  mr        r3, r25
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x1
	  li        r9, 0
	  li        r10, 0
	  bl        -0x39A1C4
	  mr.       r28, r3
	  bne-      .loc_0xB0
	  mr        r6, r25
	  addi      r3, r30, 0x48
	  addi      r5, r30, 0xA4
	  li        r4, 0x5E
	  crclr     6, 0x6
	  bl        -0x38ED2C

	.loc_0xB0:
	  mr        r3, r29
	  bl        -0x395DD0
	  lwz       r4, 0x38(r31)
	  li        r3, 0x14
	  li        r5, 0
	  bl        -0x395444
	  mr.       r0, r3
	  beq-      .loc_0xE0
	  lwz       r5, 0x38(r31)
	  mr        r4, r28
	  bl        -0x320EC8
	  mr        r0, r3

	.loc_0xE0:
	  stw       r0, 0x34(r31)
	  li        r3, 0x30
	  li        r5, 0
	  lwz       r4, 0x38(r31)
	  bl        -0x395470
	  mr.       r0, r3
	  beq-      .loc_0x118
	  lwz       r6, 0x38(r31)
	  mr        r4, r26
	  mr        r5, r27
	  li        r7, 0x8
	  li        r8, 0x2
	  bl        -0x328E98
	  mr        r0, r3

	.loc_0x118:
	  stw       r0, 0x30(r31)
	  li        r5, 0
	  lwz       r3, 0x30(r31)
	  lwz       r4, 0x34(r31)
	  bl        -0x32867C
	  lwz       r3, 0x38(r31)
	  bl        -0x3944A8
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x88
	  bl        0x69F68
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TParticle2dMgr::exitMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TParticle2dMgr::destroyHeap()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B9414
 * Size:	0000AC
 */
void TParticle2dMgr::setSceneEmitterAndResourceManager(JPAEmitterManager*,
                                                       JPAResourceManager*)
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
	  lwz       r0, 0x3C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x5AB8
	  li        r4, 0x84
	  addi      r5, r5, 0x5ACC
	  crclr     6, 0x6
	  bl        -0x38EE1C

	.loc_0x4C:
	  lwz       r0, 0x30(r29)
	  li        r4, 0
	  stw       r0, 0x3C(r29)
	  stw       r30, 0x30(r29)
	  lwz       r3, 0x30(r29)
	  bl        -0x3286F8
	  lwz       r3, 0x30(r29)
	  li        r5, 0
	  lwz       r4, 0x34(r29)
	  bl        -0x328718
	  lwz       r3, 0x30(r29)
	  li        r4, 0x1
	  bl        -0x328714
	  lwz       r3, 0x30(r29)
	  mr        r4, r31
	  li        r5, 0x1
	  bl        -0x328734
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
 * Address:	803B94C0
 * Size:	000078
 */
void TParticle2dMgr::clearSceneEmitterAndResourceManager()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x30(r3)
	  bl        -0x328760
	  lwz       r3, 0x30(r31)
	  li        r4, 0
	  bl        -0x32876C
	  lwz       r0, 0x3C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x5AB8
	  li        r4, 0x95
	  addi      r5, r5, 0x5ACC
	  crclr     6, 0x6
	  bl        -0x38EED0

	.loc_0x54:
	  lwz       r3, 0x3C(r31)
	  li        r0, 0
	  stw       r3, 0x30(r31)
	  stw       r0, 0x3C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B9538
 * Size:	000050
 */
void TParticle2dMgr::setSceneResourceManager(JPAResourceManager*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x1
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x30(r3)
	  bl        -0x3287E0
	  lwz       r3, 0x30(r30)
	  mr        r4, r31
	  li        r5, 0x1
	  bl        -0x328800
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
 * Address:	803B9588
 * Size:	000028
 */
void TParticle2dMgr::clearSceneResourceManager()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x30(r3)
	  bl        -0x328820
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B95B0
 * Size:	000024
 */
void TParticle2dMgr::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x30(r3)
	  bl        -0x328C28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B95D4
 * Size:	000148
 */
void TParticle2dMgr::draw(unsigned char, unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stfd      f31, 0x120(r1)
	  psq_st    f31,0x128(r1),0,0
	  stmw      r27, 0x10C(r1)
	  rlwinm    r0,r5,0,16,31
	  mr        r27, r3
	  cmplwi    r0, 0x1
	  mr        r28, r4
	  bne-      .loc_0xAC
	  addi      r3, r1, 0x8
	  bl        -0x2CF364
	  bl        0x69C1C
	  lhz       r31, 0x4(r3)
	  bl        0x69C14
	  lhz       r30, 0x6(r3)
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x98
	  bl        -0x2CF354
	  lis       r0, 0x4330
	  lfs       f5, 0x1364(r2)
	  stw       r30, 0xFC(r1)
	  addi      r3, r1, 0xC8
	  lfs       f1, 0x1360(r2)
	  fmr       f6, f5
	  stw       r0, 0xF8(r1)
	  fmr       f7, f5
	  lfd       f4, 0x1370(r2)
	  fmr       f3, f1
	  lfd       f0, 0xF8(r1)
	  stw       r31, 0x104(r1)
	  fmr       f8, f5
	  fsubs     f2, f0, f4
	  stw       r0, 0x100(r1)
	  lfd       f0, 0x100(r1)
	  fsubs     f4, f0, f4
	  bl        -0x2CEB18
	  lwz       r3, 0x30(r27)
	  addi      r4, r1, 0x98
	  rlwinm    r5,r28,0,24,31
	  bl        -0x328C30
	  b         .loc_0x12C

	.loc_0xAC:
	  lwz       r3, -0x6514(r13)
	  lwz       r31, 0x24(r3)
	  bl        0x69B9C
	  lhz       r30, 0x6(r3)
	  bl        0x69B94
	  lhz       r29, 0x4(r3)
	  addi      r3, r31, 0x210
	  lfs       f31, 0x24C(r31)
	  addi      r4, r1, 0x38
	  bl        -0x2CF3D8
	  lis       r0, 0x4330
	  lfs       f3, 0x1364(r2)
	  stw       r29, 0x104(r1)
	  fmr       f1, f31
	  lfd       f7, 0x1370(r2)
	  fmr       f5, f3
	  stw       r0, 0x100(r1)
	  fmr       f6, f3
	  lfs       f4, 0x1368(r2)
	  lfd       f0, 0x100(r1)
	  addi      r3, r1, 0x68
	  stw       r30, 0xFC(r1)
	  fsubs     f2, f0, f7
	  stw       r0, 0xF8(r1)
	  lfd       f0, 0xF8(r1)
	  fsubs     f0, f0, f7
	  fdivs     f2, f2, f0
	  bl        -0x2CEC68
	  lwz       r3, 0x30(r27)
	  addi      r4, r1, 0x38
	  rlwinm    r5,r28,0,24,31
	  bl        -0x328CB4

	.loc_0x12C:
	  psq_l     f31,0x128(r1),0,0
	  lfd       f31, 0x120(r1)
	  lmw       r27, 0x10C(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TParticle2dMgr::setXfb(const ResTIMG*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B971C
 * Size:	00004C
 */
void TParticle2dMgr::create(unsigned short, Vector2<float>&, unsigned char,
                            unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, 0x1360(r2)
	  li        r8, 0
	  stw       r0, 0x24(r1)
	  li        r9, 0
	  lfs       f2, 0x4(r5)
	  lfs       f1, 0x0(r5)
	  mr        r5, r4
	  addi      r4, r1, 0x8
	  stfs      f1, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0x30(r3)
	  bl        -0x328E98
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B9768
 * Size:	00002C
 */
void TParticle2dMgr::kill(JPABaseEmitter*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x1C
	  lwz       r3, 0x30(r3)
	  bl        -0x328A80

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B9794
 * Size:	000020
 */
void TParticle2dMgr::fade(JPABaseEmitter*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r3, 0xF4(r4)
	  li        r0, 0x1
	  ori       r3, r3, 0x1
	  stw       r3, 0xF4(r4)
	  stw       r0, 0x24(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B97B4
 * Size:	000024
 */
void TParticle2dMgr::killAll()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x30(r3)
	  bl        -0x328B7C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B97D8
 * Size:	000028
 */
void TParticle2dMgr::killGroup(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r4,r4,0,24,31
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x30(r3)
	  bl        -0x328B4C
	  lwz       r0, 0x14(r1)
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
void TParticle2dMgr::showInfo(long, long, long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B9800
 * Size:	000028
 */
void __sinit_particle2dMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804E
	  stw       r0, -0x6600(r13)
	  stfsu     f0, 0x7368(r3)
	  stfs      f0, -0x65FC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803B9828
 * Size:	000008
 */
void TParticle2dMgr::@24 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x7C8
	*/
}
