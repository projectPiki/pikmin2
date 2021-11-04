

/*
 * --INFO--
 * Address:	8045CE64
 * Size:	000080
 */
void PSM::ObjBase::~ObjBase()
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
	  beq-      .loc_0x64
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x43FE6C
	  cmplwi    r30, 0
	  beq-      .loc_0x54
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x4366E4

	.loc_0x54:
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x438E10

	.loc_0x64:
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
 * Address:	8045CEE4
 * Size:	00004C
 */
void PSM::ObjMgr::frameEnd_onPlaySe()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x0(r3)
	  b         .loc_0x30

	.loc_0x18:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0xC(r31)

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
 * Address:	8045CF30
 * Size:	000104
 */
void PSM::ObjMgr::~ObjMgr()
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
	  mr.       r29, r3
	  beq-      .loc_0xE4
	  lis       r3, 0x804F
	  subi      r4, r3, 0xDF4
	  stw       r4, 0x28(r29)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x14
	  stw       r3, 0xC(r29)
	  stw       r0, 0x10(r29)
	  lwz       r3, 0x2C(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  bl        0xAEE4
	  b         .loc_0x84

	.loc_0x54:
	  lwz       r31, 0x0(r3)
	  mr        r3, r29
	  mr        r4, r31
	  bl        -0x43636C
	  cmplwi    r31, 0
	  beq-      .loc_0x84
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x84:
	  lwz       r3, 0x0(r29)
	  cmplwi    r3, 0
	  bne+      .loc_0x54
	  li        r0, 0
	  addi      r3, r29, 0x10
	  stw       r0, -0x6E44(r13)
	  li        r4, 0
	  bl        -0x43FF9C
	  addic.    r0, r29, 0xC
	  beq-      .loc_0xC0
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r3, r3, 0xCE0
	  stw       r3, 0xC(r29)
	  stw       r0, -0x6E44(r13)

	.loc_0xC0:
	  cmplwi    r29, 0
	  beq-      .loc_0xD4
	  mr        r3, r29
	  li        r4, 0
	  bl        -0x436798

	.loc_0xD4:
	  extsh.    r0, r30
	  ble-      .loc_0xE4
	  mr        r3, r29
	  bl        -0x438F5C

	.loc_0xE4:
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Address:	8045D034
 * Size:	000058
 */
void PSM::Creature::exec()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x104(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045D08C
 * Size:	000128
 */
void PSM::Creature::judgeNearWithPlayer(const Vec&, const Vec&, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stfd      f30, 0x10(r1)
	  psq_st    f30,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  fmr       f30, f1
	  mr        r30, r4
	  fmr       f31, f2
	  mr        r31, r5
	  fcmpo     cr0, f30, f31
	  bgt-      .loc_0x58
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x303C
	  li        r4, 0x2D
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x432AA0

	.loc_0x58:
	  lfs       f2, 0x0(r30)
	  lfs       f1, 0x0(r31)
	  lfs       f0, 0x28F0(r2)
	  fsubs     f3, f2, f1
	  fcmpo     cr0, f3, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x78
	  b         .loc_0x7C

	.loc_0x78:
	  fneg      f3, f3

	.loc_0x7C:
	  lfs       f2, 0x4(r30)
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x28F0(r2)
	  fsubs     f4, f2, f1
	  fcmpo     cr0, f4, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x9C
	  b         .loc_0xA0

	.loc_0x9C:
	  fneg      f4, f4

	.loc_0xA0:
	  lfs       f2, 0x8(r30)
	  lfs       f1, 0x8(r31)
	  lfs       f0, 0x28F0(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xC0
	  b         .loc_0xC4

	.loc_0xC0:
	  fneg      f1, f1

	.loc_0xC4:
	  fcmpo     cr0, f3, f30
	  bge-      .loc_0xFC
	  fcmpo     cr0, f4, f30
	  bge-      .loc_0xFC
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0xFC
	  fcmpo     cr0, f3, f31
	  ble-      .loc_0xF4
	  fcmpo     cr0, f4, f31
	  ble-      .loc_0xF4
	  fcmpo     cr0, f1, f31
	  bgt-      .loc_0xFC

	.loc_0xF4:
	  li        r3, 0x1
	  b         .loc_0x100

	.loc_0xFC:
	  li        r3, 0

	.loc_0x100:
	  psq_l     f31,0x28(r1),0,0
	  lfd       f31, 0x20(r1)
	  psq_l     f30,0x18(r1),0,0
	  lfd       f30, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045D1B4
 * Size:	0000A0
 */
void PSM::Creature::isNear(Game::Creature*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  fmr       f31, f1
	  lwz       r3, 0x2C(r3)
	  mr        r31, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  mr        r31, r0
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x28(r30)
	  mr        r5, r3
	  lfs       f0, 0x28F4(r2)
	  fmr       f1, f31
	  lwz       r12, 0x34(r12)
	  mr        r3, r30
	  fmuls     f2, f31, f0
	  mr        r4, r31
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045D254
 * Size:	000070
 */
void PSM::Creature::getPlayingHandleNum()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lbz       r5, 0x19(r3)
	  li        r6, 0
	  li        r7, 0
	  b         .loc_0x50

	.loc_0x2C:
	  lwz       r4, 0x1C(r3)
	  rlwinm    r0,r7,2,22,29
	  lwzx      r0, r4, r0
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  rlwinm    r4,r6,0,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r0,0,24,31

	.loc_0x4C:
	  addi      r7, r7, 0x1

	.loc_0x50:
	  rlwinm    r0,r7,0,24,31
	  cmplw     r0, r5
	  blt+      .loc_0x2C
	  lwz       r0, 0x14(r1)
	  mr        r3, r6
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045D2C4
 * Size:	00015C
 */
void PSM::Creature::loopCalc(PSM::FrameCalcArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  lwz       r3, 0x0(r4)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  lwz       r29, 0x4(r28)
	  lwz       r0, 0x24(r3)
	  addi      r30, r31, 0x28
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0xAA
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x432CE0

	.loc_0x60:
	  lwz       r3, -0x6E4C(r13)
	  mr        r4, r27
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  lwz       r3, -0x7498(r13)
	  rlwinm    r0,r27,0,24,31
	  lwz       r4, 0x24(r31)
	  mulli     r0, r0, 0xC
	  lwz       r3, 0x4(r3)
	  mr        r5, r30
	  add       r3, r3, r0
	  lwz       r3, 0x8(r3)
	  bl        -0x372788
	  lfs       f1, 0x0(r30)
	  lfs       f0, 0x4(r30)
	  fmuls     f1, f1, f1
	  lfs       f2, 0x8(r30)
	  fmuls     f0, f0, f0
	  fmuls     f2, f2, f2
	  fadds     f0, f1, f0
	  fadds     f1, f2, f0
	  bl        -0x4BB80
	  stfs      f1, 0x0(r29)
	  li        r5, 0
	  b         .loc_0x110

	.loc_0xD0:
	  lwz       r3, 0x1C(r31)
	  rlwinm    r0,r5,2,22,29
	  lwzx      r3, r3, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x10C
	  lwz       r4, 0x34(r3)
	  lfs       f0, 0x0(r30)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x0(r29)
	  stfs      f0, 0x18(r4)
	  stb       r27, 0x49C(r3)

	.loc_0x10C:
	  addi      r5, r5, 0x1

	.loc_0x110:
	  lbz       r0, 0x19(r31)
	  rlwinm    r3,r5,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0xD0
	  lwz       r27, 0x8(r28)
	  mr        r3, r30
	  lfs       f1, 0x0(r29)
	  bl        0x1425C
	  stfs      f1, 0x0(r27)
	  mr        r3, r30
	  lwz       r27, 0xC(r28)
	  lfs       f1, 0x0(r29)
	  bl        0x14398
	  stfs      f1, 0x0(r27)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045D420
 * Size:	000380
 */
void PSM::Creature::startSoundInner(PSM::StartSoundArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x54(r1)
	  stmw      r25, 0x34(r1)
	  mr        r25, r3
	  mr        r28, r4
	  subi      r26, r5, 0x3060
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x104(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x36C

	.loc_0x44:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  addi      r3, r26, 0x30
	  addi      r5, r26, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x432E40

	.loc_0x64:
	  lwz       r27, -0x6780(r13)
	  cmplwi    r27, 0
	  bne-      .loc_0x84
	  addi      r3, r26, 0x30
	  addi      r5, r26, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x432E60

	.loc_0x84:
	  lwz       r0, 0x8(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  addi      r3, r26, 0x3C
	  addi      r5, r26, 0x18
	  li        r4, 0xA1
	  crclr     6, 0x6
	  bl        -0x432E80

	.loc_0xA4:
	  lwz       r3, 0x8(r27)
	  mr        r4, r25
	  lwz       r5, 0x4(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  li        r3, 0
	  b         .loc_0x36C

	.loc_0xD0:
	  lwz       r29, 0x0(r28)
	  lwz       r31, 0x4(r28)
	  mr        r3, r29
	  lwz       r30, 0x8(r28)
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r31,0,20,20
	  li        r26, 0
	  mr        r28, r3
	  bne-      .loc_0x118
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  mr        r26, r3

	.loc_0x118:
	  cmplwi    r26, 0
	  bne-      .loc_0x138
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r26, r3

	.loc_0x138:
	  cmplwi    r26, 0
	  beq-      .loc_0x1E4
	  cmplwi    r29, 0
	  lwz       r7, 0x24(r28)
	  bne-      .loc_0x154
	  mr        r3, r7
	  b         .loc_0x158

	.loc_0x154:
	  mr        r3, r29

	.loc_0x158:
	  li        r6, -0x1
	  li        r5, 0
	  li        r0, 0x1
	  stw       r3, 0x1C(r1)
	  lwz       r3, -0x6E4C(r13)
	  mr        r4, r25
	  stw       r7, 0x20(r1)
	  stw       r6, 0x24(r1)
	  stw       r5, 0x28(r1)
	  stb       r0, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r8, r3
	  lwz       r3, -0x7498(r13)
	  mr        r4, r31
	  mr        r5, r26
	  mr        r7, r30
	  addi      r6, r1, 0x1C
	  bl        -0x447CFC
	  mr        r3, r25
	  mr        r4, r31
	  lwz       r12, 0x28(r25)
	  lwz       r5, 0x0(r26)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x0(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x1DC
	  li        r0, 0x1
	  stb       r0, 0x1A(r3)

	.loc_0x1DC:
	  lwz       r3, 0x0(r26)
	  b         .loc_0x36C

	.loc_0x1E4:
	  lbz       r6, 0x19(r28)
	  li        r27, 0xFF
	  li        r26, 0xFF
	  li        r7, 0
	  li        r5, 0x1
	  b         .loc_0x23C

	.loc_0x1FC:
	  rlwinm    r3,r7,0,24,31
	  lwz       r0, 0x20(r28)
	  slw       r3, r5, r3
	  and.      r0, r3, r0
	  bne-      .loc_0x238
	  lwz       r4, 0x1C(r28)
	  rlwinm    r3,r7,2,22,29
	  rlwinm    r0,r27,0,24,31
	  lwzx      r3, r4, r3
	  lwz       r3, 0x44(r3)
	  lbz       r3, 0x4(r3)
	  cmplw     r3, r0
	  bgt-      .loc_0x238
	  mr        r27, r3
	  mr        r26, r7

	.loc_0x238:
	  addi      r7, r7, 0x1

	.loc_0x23C:
	  rlwinm    r0,r7,0,24,31
	  cmplw     r0, r6
	  blt+      .loc_0x1FC
	  rlwinm    r0,r26,0,24,31
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x368
	  mr        r3, r31
	  bl        -0x3A6160
	  lbz       r3, 0x4(r3)
	  rlwinm    r0,r27,0,24,31
	  cmplw     r3, r0
	  blt-      .loc_0x368
	  mr        r3, r28
	  mr        r4, r26
	  lwz       r12, 0x0(r28)
	  li        r5, 0
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r29, 0
	  lwz       r7, 0x24(r28)
	  bne-      .loc_0x29C
	  mr        r3, r7
	  b         .loc_0x2A0

	.loc_0x29C:
	  mr        r3, r29

	.loc_0x2A0:
	  li        r6, -0x1
	  li        r5, 0
	  li        r0, 0x1
	  stw       r3, 0x8(r1)
	  lwz       r3, -0x6E4C(r13)
	  mr        r4, r25
	  stw       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stb       r0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x28(r25)
	  mr        r27, r3
	  mr        r3, r25
	  mr        r4, r26
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  lwz       r3, -0x7498(r13)
	  mr        r4, r31
	  mr        r7, r30
	  mr        r8, r27
	  addi      r6, r1, 0x8
	  bl        -0x447E60
	  mr        r3, r25
	  mr        r4, r26
	  lwz       r12, 0x28(r25)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  mr        r3, r25
	  lwz       r12, 0x28(r25)
	  mr        r4, r31
	  lwz       r5, 0x0(r5)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1C(r28)
	  rlwinm    r0,r26,2,22,29
	  lwzx      r3, r3, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x36C
	  li        r0, 0x1
	  stb       r0, 0x1A(r3)
	  b         .loc_0x36C

	.loc_0x368:
	  li        r3, 0

	.loc_0x36C:
	  lmw       r25, 0x34(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045D7A0
 * Size:	000004
 */
void PSM::Creature::onPlayingSe(unsigned long, JAISound*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045D7A4
 * Size:	00010C
 */
void PSM::CreatureObj::CreatureObj(Game::Creature*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r29, r3
	  mr        r30, r4
	  mr        r31, r5
	  mr        r4, r29
	  mr        r27, r4
	  mr        r28, r4
	  bl        -0x437014
	  addi      r3, r28, 0x10
	  bl        -0x440808
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xDD0
	  cmplwi    r30, 0
	  stw       r4, 0x28(r28)
	  addi      r0, r4, 0x8
	  subi      r3, r3, 0xE34
	  stw       r0, 0x10(r28)
	  addi      r0, r3, 0x8
	  stw       r3, 0x28(r27)
	  stw       r0, 0x10(r27)
	  stw       r30, 0x2C(r27)
	  bne-      .loc_0x84
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x61
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4331E4

	.loc_0x84:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x62
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x43320C

	.loc_0xAC:
	  mr        r3, r30
	  lwz       r30, -0x77D4(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r5, r30
	  mr        r6, r31
	  addi      r3, r29, 0x30
	  bl        -0x3A3D8C
	  lis       r4, 0x804F
	  mr        r3, r29
	  subi      r5, r4, 0xEBC
	  stw       r5, 0x28(r29)
	  addi      r4, r5, 0x8
	  addi      r0, r5, 0x40
	  stw       r4, 0x10(r29)
	  stw       r0, 0x30(r29)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045D8B0
 * Size:	000098
 */
void PSM::Creature::~Creature()
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
	  beq-      .loc_0x7C
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0x6C
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x4408D0
	  cmplwi    r30, 0
	  beq-      .loc_0x6C
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x437148

	.loc_0x6C:
	  extsh.    r0, r31
	  ble-      .loc_0x7C
	  mr        r3, r30
	  bl        -0x439874

	.loc_0x7C:
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
 * Address:	8045D948
 * Size:	00003C
 */
void PSM::CreatureObj::startSound(unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r4, 0xC(r1)
	  addi      r4, r1, 0x8
	  stw       r3, 0x8(r1)
	  stw       r5, 0x10(r1)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045D984
 * Size:	00008C
 */
void PSM::CreatureObj::startSound(unsigned char, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r4, r28
	  lwz       r3, -0x6E4C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x4C(r28)
	  mr        r9, r3
	  rlwinm    r0,r29,2,22,29
	  lwz       r3, -0x7498(r13)
	  lwz       r6, 0x54(r28)
	  mr        r4, r30
	  mr        r7, r31
	  add       r5, r5, r0
	  li        r8, 0
	  bl        -0x448180
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
 * Address:	8045DA10
 * Size:	0000A8
 */
void PSM::CreatureObj::startSound(JAISound**, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r8, 0x804A
	  lis       r7, 0x804A
	  stw       r0, 0x24(r1)
	  subi      r8, r8, 0x3060
	  subi      r0, r7, 0x3018
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  mr        r5, r0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  li        r4, 0x18B
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r8
	  crclr     6, 0x6
	  bl        -0x43341C
	  lwz       r3, -0x6E4C(r13)
	  mr        r4, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r9, r3
	  lwz       r3, -0x7498(r13)
	  lwz       r6, 0x54(r28)
	  mr        r4, r30
	  mr        r5, r29
	  mr        r7, r31
	  li        r8, 0
	  bl        -0x448228
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
 * Address:	8045DAB8
 * Size:	00004C
 */
void PSM::CreatureObj::frameEnd_onPlaySe()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  addi      r6, r3, 0x64
	  addi      r5, r3, 0x68
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x6C
	  addi      r4, r1, 0x8
	  stw       r3, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045DB04
 * Size:	000148
 */
void PSM::CreatureAnime::startAnimSound(unsigned long, JAISound**,
                                        JAInter::Actor*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  subi      r31, r7, 0x3060
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x104(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x134
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x433524

	.loc_0x64:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x84
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x433544

	.loc_0x84:
	  lwz       r0, 0x8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x18
	  li        r4, 0xA1
	  crclr     6, 0x6
	  bl        -0x433564

	.loc_0xA4:
	  lwz       r3, 0x8(r30)
	  mr        r4, r26
	  mr        r5, r27
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x134
	  stw       r26, 0x0(r29)
	  mr        r4, r26
	  lwz       r3, -0x6E4C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  mr        r4, r27
	  mr        r5, r28
	  mr        r6, r29
	  addi      r3, r26, 0x30
	  bl        -0x3B1FAC
	  cmplwi    r28, 0
	  bne-      .loc_0x118
	  addi      r3, r31, 0
	  addi      r5, r31, 0x18
	  li        r4, 0x1B9
	  crclr     6, 0x6
	  bl        -0x4335D8

	.loc_0x118:
	  mr        r3, r26
	  mr        r4, r27
	  lwz       r12, 0x28(r26)
	  lwz       r5, 0x0(r28)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl

	.loc_0x134:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045DC4C
 * Size:	00003C
 */
void PSM::CreatureAnime::startSound(unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r4, 0xC(r1)
	  addi      r4, r1, 0x8
	  stw       r3, 0x8(r1)
	  stw       r5, 0x10(r1)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045DC88
 * Size:	0000B0
 */
void PSM::CreatureAnime::startSound(unsigned char, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r8, 0x804A
	  lis       r7, 0x804A
	  stw       r0, 0x24(r1)
	  subi      r8, r8, 0x3060
	  subi      r0, r7, 0x3018
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  mr        r5, r0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  li        r4, 0x1D2
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r8
	  crclr     6, 0x6
	  bl        -0x433694
	  lwz       r3, -0x6E4C(r13)
	  mr        r4, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x4C(r28)
	  mr        r9, r3
	  rlwinm    r0,r29,2,22,29
	  lwz       r3, -0x7498(r13)
	  lwz       r6, 0x54(r28)
	  mr        r4, r30
	  mr        r7, r31
	  add       r5, r5, r0
	  li        r8, 0
	  bl        -0x4484A8
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
 * Address:	8045DD38
 * Size:	0000A8
 */
void PSM::CreatureAnime::startSound(JAISound**, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r8, 0x804A
	  lis       r7, 0x804A
	  stw       r0, 0x24(r1)
	  subi      r8, r8, 0x3060
	  subi      r0, r7, 0x3018
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  mr        r5, r0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  li        r4, 0x1E2
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r8
	  crclr     6, 0x6
	  bl        -0x433744
	  lwz       r3, -0x6E4C(r13)
	  mr        r4, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r9, r3
	  lwz       r3, -0x7498(r13)
	  lwz       r6, 0x54(r28)
	  mr        r4, r30
	  mr        r5, r29
	  mr        r7, r31
	  li        r8, 0
	  bl        -0x448550
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
 * Address:	8045DDE0
 * Size:	000040
 */
void PSM::CreatureAnime::setAnime(JAIAnimeSoundData*, unsigned long, float,
                                  float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xA8(r3)
	  cmplw     r4, r0
	  beq-      .loc_0x30
	  addis     r0, r4, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x28
	  li        r4, 0

	.loc_0x28:
	  addi      r3, r3, 0x30
	  bl        -0x3B2B5C

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045DE20
 * Size:	000304
 */
void PSM::CreatureAnime::playActorAnimSound(JAInter::Actor*, float,
                                            unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stmw      r24, 0x20(r1)
	  mr        r26, r3
	  fmr       f31, f1
	  lwz       r3, 0xA8(r3)
	  mr        r27, r4
	  lwz       r4, 0x98(r26)
	  mr        r28, r5
	  lhz       r0, 0x0(r3)
	  li        r30, 0
	  cmplw     r4, r0
	  blt-      .loc_0x5C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x225
	  subi      r5, r5, 0x3004
	  crclr     6, 0x6
	  bl        -0x433838

	.loc_0x5C:
	  lwz       r0, 0x98(r26)
	  lwz       r5, 0xA8(r26)
	  rlwinm    r4,r0,5,0,26
	  lbz       r3, 0x49(r26)
	  addi      r31, r4, 0x8
	  add       r31, r5, r31
	  b         .loc_0x168

	.loc_0x78:
	  lwz       r6, 0x70(r26)
	  rlwinm    r5,r30,0,24,31
	  lbzx      r0, r6, r5
	  cmplwi    r0, 0
	  beq-      .loc_0xD4
	  lwz       r4, 0x4C(r26)
	  rlwinm    r0,r5,2,0,29
	  lwzx      r5, r4, r0
	  cmplwi    r5, 0
	  beq-      .loc_0x174
	  lwz       r4, 0x0(r31)
	  lwz       r0, 0x20(r5)
	  cmplw     r4, r0
	  beq-      .loc_0xB8
	  addi      r30, r30, 0x1
	  b         .loc_0x168

	.loc_0xB8:
	  rlwinm.   r0,r4,0,20,21
	  bne-      .loc_0x174
	  lwz       r3, 0x98(r26)
	  lwz       r0, 0x8C(r26)
	  add       r0, r3, r0
	  stw       r0, 0x98(r26)
	  b         .loc_0x2E8

	.loc_0xD4:
	  li        r0, 0x1
	  lwz       r4, 0x50(r26)
	  slw       r0, r0, r5
	  and.      r0, r4, r0
	  beq-      .loc_0xF0
	  addi      r30, r30, 0x1
	  b         .loc_0x168

	.loc_0xF0:
	  lwz       r7, 0x4C(r26)
	  rlwinm    r0,r5,2,0,29
	  lwzx      r0, r7, r0
	  cmplwi    r0, 0
	  beq-      .loc_0x174
	  subi      r0, r3, 0x1
	  cmpw      r5, r0
	  bne-      .loc_0x164
	  li        r5, 0
	  li        r8, 0
	  li        r9, 0
	  b         .loc_0x150

	.loc_0x120:
	  rlwinm    r4,r9,0,24,31
	  lbzx      r0, r6, r4
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  rlwinm    r0,r4,2,0,29
	  lwzx      r4, r7, r0
	  lwz       r0, 0x2C(r4)
	  cmplw     r5, r0
	  bge-      .loc_0x14C
	  mr        r5, r0
	  mr        r8, r9

	.loc_0x14C:
	  addi      r9, r9, 0x1

	.loc_0x150:
	  rlwinm    r0,r9,0,24,31
	  cmplw     r0, r3
	  blt+      .loc_0x120
	  mr        r30, r8
	  b         .loc_0x174

	.loc_0x164:
	  addi      r30, r30, 0x1

	.loc_0x168:
	  rlwinm    r0,r30,0,24,31
	  cmplw     r0, r3
	  blt+      .loc_0x78

	.loc_0x174:
	  rlwinm    r0,r30,0,24,31
	  cmplw     r0, r3
	  beq-      .loc_0x2D8
	  lwz       r4, 0x10(r31)
	  rlwinm.   r0,r4,0,28,28
	  beq-      .loc_0x19C
	  lwz       r3, 0x9C(r26)
	  lbz       r0, 0x16(r31)
	  cmplw     r3, r0
	  bne-      .loc_0x2D8

	.loc_0x19C:
	  lwz       r3, 0x8C(r26)
	  cmplwi    r3, 0x1
	  bne-      .loc_0x1B0
	  rlwinm.   r0,r4,0,30,30
	  beq-      .loc_0x1C4

	.loc_0x1B0:
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x2D8
	  rlwinm.   r0,r4,0,31,31
	  bne-      .loc_0x2D8

	.loc_0x1C4:
	  lwz       r0, 0x4C(r26)
	  rlwinm    r25,r30,2,22,29
	  rlwinm    r24,r30,0,24,31
	  add       r29, r0, r25
	  lwz       r0, 0x0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x1FC
	  addi      r3, r26, 0x30
	  mr        r4, r30
	  lwz       r12, 0x30(r26)
	  li        r5, 0
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1FC:
	  mr        r3, r26
	  mr        r5, r29
	  lwz       r12, 0x28(r26)
	  mr        r6, r27
	  mr        r7, r28
	  lwz       r4, 0x0(r31)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x2D8
	  lwz       r3, 0x74(r26)
	  lis       r0, 0x4330
	  li        r6, 0x1
	  stw       r0, 0x8(r1)
	  lfd       f2, 0x2908(r2)
	  li        r4, 0
	  stwx      r31, r3, r25
	  li        r5, 0x5
	  lfs       f0, 0x28F8(r2)
	  lwz       r3, 0x70(r26)
	  stbx      r6, r3, r24
	  lbz       r0, 0x14(r31)
	  lwz       r3, 0x0(r29)
	  stw       r0, 0xC(r1)
	  lwz       r12, 0x10(r3)
	  lfd       f1, 0x8(r1)
	  lwz       r12, 0x1C(r12)
	  fsubs     f1, f1, f2
	  fdivs     f1, f1, f0
	  mtctr     r12
	  bctrl
	  lbz       r3, 0x15(r31)
	  lis       r0, 0x4330
	  lfs       f0, 0x28FC(r2)
	  li        r4, 0
	  extsb     r5, r3
	  lwz       r3, 0x0(r29)
	  xoris     r5, r5, 0x8000
	  stw       r0, 0x10(r1)
	  lwz       r12, 0x10(r3)
	  fsubs     f2, f31, f0
	  stw       r5, 0x14(r1)
	  li        r5, 0x5
	  lfd       f3, 0x2910(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f1, 0x2900(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0xC(r31)
	  lwz       r12, 0x2C(r12)
	  fmuls     f2, f3, f2
	  fmadds    f1, f2, f1, f0
	  mtctr     r12
	  bctrl

	.loc_0x2D8:
	  lwz       r3, 0x98(r26)
	  lwz       r0, 0x8C(r26)
	  add       r0, r3, r0
	  stw       r0, 0x98(r26)

	.loc_0x2E8:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  lmw       r24, 0x20(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E124
 * Size:	0000B4
 */
void PSM::CreatureAnime::exec()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x2C(r3)
	  lbz       r31, 0xB4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x104(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cntlzw    r0, r0
	  rlwinm    r0,r0,27,5,31
	  stb       r0, 0xB4(r30)
	  lbz       r0, 0xB4(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  cmplwi    r31, 0
	  bne-      .loc_0x68
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x9C

	.loc_0x80:
	  cmplwi    r31, 0x1
	  bne-      .loc_0x9C
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
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
 * Address:	8045E1D8
 * Size:	0000C8
 */
void PSM::CreatureAnime::onCalcOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  mr.       r30, r3
	  lwz       r7, 0x54(r3)
	  bne-      .loc_0x2C
	  mr        r4, r7
	  b         .loc_0x30

	.loc_0x2C:
	  mr        r4, r30

	.loc_0x30:
	  li        r6, -0x1
	  li        r5, 0
	  li        r0, 0x1
	  stw       r4, 0x8(r1)
	  lwz       r3, -0x6E4C(r13)
	  mr        r4, r30
	  stw       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stb       r0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  lwz       r3, 0x2C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r30)
	  fmr       f31, f1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x108(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f31
	  mr        r5, r31
	  addi      r3, r30, 0x30
	  addi      r4, r1, 0x8
	  bl        -0x3B2DB4
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x28(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E2A0
 * Size:	000024
 */
void PSM::CreatureAnime::onCalcTurnOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2C(r3)
	  bl        -0x3596AC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E2C4
 * Size:	000004
 */
void PSM::CreatureAnime::onCalcTurnOff()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E2C8
 * Size:	00004C
 */
void PSM::CreatureAnime::frameEnd_onPlaySe()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  addi      r6, r3, 0x64
	  addi      r5, r3, 0x68
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x6C
	  addi      r4, r1, 0x8
	  stw       r3, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E314
 * Size:	00004C
 */
void PSM::BattleLink::battleOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x5A2C
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r3, 0x64(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  mr        r4, r31
	  addi      r3, r3, 0xC
	  bl        -0x437A64

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E360
 * Size:	00004C
 */
void PSM::BattleLink::battleOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x5A78
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r3, 0x64(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  mr        r4, r31
	  addi      r3, r3, 0xC
	  bl        -0x437770

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E3AC
 * Size:	00004C
 */
void PSM::KehaiLink::kehaiOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x5BCC
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r3, 0x64(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  mr        r4, r31
	  addi      r3, r3, 0xC
	  bl        -0x437AFC

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E3F8
 * Size:	00004C
 */
void PSM::KehaiLink::kehaiOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x5C18
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r3, 0x64(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  mr        r4, r31
	  addi      r3, r3, 0xC
	  bl        -0x437808

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E444
 * Size:	000180
 */
void PSM::EnemyBase::EnemyBase(Game::EnemyBase*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r28, r3
	  mr        r30, r4
	  mr        r31, r5
	  mr        r4, r28
	  mr        r29, r4
	  mr        r26, r4
	  mr        r27, r4
	  bl        -0x437CB8
	  addi      r3, r27, 0x10
	  bl        -0x4414AC
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xDD0
	  cmplwi    r30, 0
	  stw       r4, 0x28(r27)
	  addi      r0, r4, 0x8
	  subi      r3, r3, 0xE34
	  stw       r0, 0x10(r27)
	  addi      r0, r3, 0x8
	  stw       r3, 0x28(r26)
	  stw       r0, 0x10(r26)
	  stw       r30, 0x2C(r26)
	  bne-      .loc_0x88
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x61
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x433E88

	.loc_0x88:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x62
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x433EB0

	.loc_0xB0:
	  mr        r3, r30
	  lwz       r27, -0x77D4(r13)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r5, r27
	  mr        r6, r31
	  addi      r3, r29, 0x30
	  bl        -0x3B33F4
	  lis       r3, 0x804F
	  addi      r26, r28, 0xB8
	  subi      r3, r3, 0xF60
	  lfs       f0, 0x28F0(r2)
	  stw       r3, 0x28(r29)
	  addi      r4, r3, 0x8
	  addi      r0, r3, 0x40
	  mr        r3, r26
	  stw       r4, 0x10(r29)
	  mr        r4, r30
	  stw       r0, 0x30(r29)
	  stfs      f0, 0xAC(r29)
	  stfs      f0, 0xB0(r29)
	  bl        -0x437D9C
	  lis       r3, 0x804F
	  addi      r27, r28, 0xCC
	  subi      r0, r3, 0xF70
	  mr        r4, r30
	  stw       r0, 0x10(r26)
	  mr        r3, r27
	  bl        -0x437DB8
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  subi      r0, r3, 0xF80
	  mr        r3, r28
	  stw       r0, 0x10(r27)
	  subi      r7, r4, 0x1054
	  addi      r6, r7, 0x8
	  stw       r7, 0x28(r28)
	  addi      r5, r7, 0x40
	  addi      r4, r7, 0xA4
	  addi      r0, r7, 0xB4
	  stw       r6, 0x10(r28)
	  stw       r5, 0x30(r28)
	  stw       r4, 0xC8(r28)
	  stw       r0, 0xDC(r28)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E5C4
 * Size:	0000DC
 */
void PSM::CreatureAnime::~CreatureAnime()
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
	  beq-      .loc_0xC0
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x30
	  subi      r4, r3, 0xF60
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804A
	  addi      r3, r30, 0x30
	  addi      r0, r4, 0x6200
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        -0x3A4A3C

	.loc_0x5C:
	  cmplwi    r30, 0
	  beq-      .loc_0xB0
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0xB0
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x441628
	  cmplwi    r30, 0
	  beq-      .loc_0xB0
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x437EA0

	.loc_0xB0:
	  extsh.    r0, r31
	  ble-      .loc_0xC0
	  mr        r3, r30
	  bl        -0x43A5CC

	.loc_0xC0:
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
 * Address:	8045E6A0
 * Size:	000174
 */
void PSM::EnemyBase::startAnimSound(unsigned long, JAISound**, JAInter::Actor*,
                                    unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  subi      r31, r7, 0x3060
	  lwz       r3, 0x2C(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x58
	  cmplwi    r27, 0x50B0
	  beq-      .loc_0x58
	  subi      r0, r27, 0x58B1
	  cmplwi    r0, 0x2
	  ble-      .loc_0x58
	  rlwinm    r0,r27,20,28,31
	  cmplwi    r0, 0x2
	  bne-      .loc_0x160

	.loc_0x58:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x104(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x160
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x4340EC

	.loc_0x90:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0xB0
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x43410C

	.loc_0xB0:
	  lwz       r0, 0x8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x18
	  li        r4, 0xA1
	  crclr     6, 0x6
	  bl        -0x43412C

	.loc_0xD0:
	  lwz       r3, 0x8(r30)
	  mr        r4, r26
	  mr        r5, r27
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160
	  stw       r26, 0x0(r29)
	  mr        r4, r26
	  lwz       r3, -0x6E4C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  mr        r4, r27
	  mr        r5, r28
	  mr        r6, r29
	  addi      r3, r26, 0x30
	  bl        -0x3B2B74
	  cmplwi    r28, 0
	  bne-      .loc_0x144
	  addi      r3, r31, 0
	  addi      r5, r31, 0x18
	  li        r4, 0x1B9
	  crclr     6, 0x6
	  bl        -0x4341A0

	.loc_0x144:
	  mr        r3, r26
	  mr        r4, r27
	  lwz       r12, 0x28(r26)
	  lwz       r5, 0x0(r28)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E814
 * Size:	00005C
 */
void PSM::EnemyBase::startSoundInner(PSM::StartSoundArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x2C(r3)
	  lwz       r0, 0x1E0(r5)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x48
	  lwz       r5, 0x4(r4)
	  cmplwi    r5, 0x50B0
	  beq-      .loc_0x48
	  subi      r0, r5, 0x58B1
	  cmplwi    r0, 0x2
	  ble-      .loc_0x48
	  rlwinm    r0,r5,20,28,31
	  cmplwi    r0, 0x2
	  beq-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x4C

	.loc_0x48:
	  bl        -0x143C

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E870
 * Size:	000044
 */
void PSM::EnemyBase::onCalcTurnOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2C(r3)
	  bl        -0x359C84
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0xCC(r12)
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
 * Address:	8045E8B4
 * Size:	00004C
 */
void PSM::EnemyBase::onCalcTurnOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0xCC
	  lwz       r12, 0xDC(r31)
	  lwz       r12, 0xC(r12)
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
 * Address:	8045E900
 * Size:	0000F0
 */
void PSM::EnemyBase::onCalcOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  mr.       r30, r3
	  lwz       r7, 0x54(r3)
	  bne-      .loc_0x2C
	  mr        r4, r7
	  b         .loc_0x30

	.loc_0x2C:
	  mr        r4, r30

	.loc_0x30:
	  li        r6, -0x1
	  li        r5, 0
	  li        r0, 0x1
	  stw       r4, 0x8(r1)
	  lwz       r3, -0x6E4C(r13)
	  mr        r4, r30
	  stw       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stb       r0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  lwz       r3, 0x2C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r30)
	  fmr       f31, f1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x108(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f31
	  mr        r5, r31
	  addi      r3, r30, 0x30
	  addi      r4, r1, 0x8
	  bl        -0x3B34DC
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD0(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x28(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045E9F0
 * Size:	000060
 */
void PSM::EnemyBase::battleOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x6108
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lwz       r3, 0x64(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  addi      r3, r3, 0xC
	  addi      r4, r31, 0xB8
	  bl        -0x437E00

	.loc_0x38:
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0xCC(r12)
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
 * Address:	8045EA50
 * Size:	000088
 */
void PSM::EnemyBase::updateKehai()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x13C
	  lwz       r4, 0xD0(r31)
	  rlwinm.   r0,r3,0,24,31
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r4,r0,1,31,31
	  beq-      .loc_0x50
	  cmplwi    r4, 0
	  bne-      .loc_0x50
	  addi      r3, r31, 0xCC
	  lwz       r12, 0xDC(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x74

	.loc_0x50:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x74
	  cmplwi    r4, 0
	  beq-      .loc_0x74
	  addi      r3, r31, 0xCC
	  lwz       r12, 0xDC(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045EAD8
 * Size:	0000C8
 */
void PSM::EnemyBase::updateBattle()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  lwz       r3, 0x2C(r31)
	  lbz       r0, 0x1F0(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x64
	  lwz       r0, 0xBC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  addi      r3, r31, 0xB8
	  lwz       r12, 0xC8(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB4

	.loc_0x64:
	  lbz       r0, 0x1F0(r3)
	  cmplwi    r0, 0x2
	  beq-      .loc_0xB4
	  lwz       r0, 0xBC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB4

	.loc_0x94:
	  lwz       r0, 0xBC(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045EBA0
 * Size:	000338
 */
void PSM::EnemyBase::calcKehai()
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
	  mr        r30, r3
	  lwz       r31, 0x2C(r3)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xD0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64

	.loc_0x5C:
	  li        r3, 0
	  b         .loc_0x318

	.loc_0x64:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  lwz       r0, -0x6D20(r13)
	  lis       r5, 0x804B
	  stw       r4, 0x38(r1)
	  subi      r5, r5, 0x434C
	  cmplwi    r4, 0
	  stw       r5, 0x2C(r1)
	  mr        r31, r3
	  stw       r4, 0x30(r1)
	  stw       r0, 0x34(r1)
	  bne-      .loc_0xC0
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x2F4

	.loc_0xC0:
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x130

	.loc_0xDC:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2F4
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)

	.loc_0x130:
	  lwz       r12, 0x2C(r1)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xDC
	  b         .loc_0x2F4

	.loc_0x150:
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x278(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x238
	  mr        r4, r3
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r3, r30
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  lwz       r5, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r0, 0x10(r1)
	  stw       r5, 0x20(r1)
	  stw       r4, 0x24(r1)
	  stw       r0, 0x28(r1)
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r5,r3,2,0,29
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lis       r4, 0x804A
	  subi      r0, r4, 0x1E54
	  lwz       r12, 0x1C(r12)
	  add       r4, r0, r5
	  lfs       f31, -0x8(r4)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x28(r30)
	  lis       r4, 0x804A
	  rlwinm    r5,r3,2,0,29
	  fmr       f2, f31
	  subi      r0, r4, 0x1E8C
	  lwz       r12, 0x34(r12)
	  add       r5, r0, r5
	  mr        r3, r30
	  lfs       f1, -0x8(r5)
	  mr        r4, r31
	  addi      r5, r1, 0x20
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x238
	  li        r3, 0x1
	  b         .loc_0x318

	.loc_0x238:
	  lwz       r0, 0x38(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x264
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x2F4

	.loc_0x264:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)
	  b         .loc_0x2D8

	.loc_0x284:
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2F4
	  lwz       r3, 0x34(r1)
	  lwz       r4, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r1)

	.loc_0x2D8:
	  lwz       r12, 0x2C(r1)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x284

	.loc_0x2F4:
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x30(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x150
	  li        r3, 0

	.loc_0x318:
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
 * Address:	8045EED8
 * Size:	000094
 */
void PSM::EnemyBase::judgeNearWithPlayer(const Vec&, const Vec&, float, float)
{
	/*
	.loc_0x0:
	  lfs       f3, 0x0(r4)
	  lfs       f2, 0x0(r5)
	  lfs       f0, 0x28F0(r2)
	  fsubs     f2, f3, f2
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x20
	  b         .loc_0x24

	.loc_0x20:
	  fneg      f2, f2

	.loc_0x24:
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x8C
	  lfs       f3, 0x4(r4)
	  lfs       f2, 0x4(r5)
	  lfs       f0, 0x28F0(r2)
	  fsubs     f2, f3, f2
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x4C
	  b         .loc_0x50

	.loc_0x4C:
	  fneg      f2, f2

	.loc_0x50:
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x8C
	  lfs       f3, 0x8(r4)
	  lfs       f2, 0x8(r5)
	  lfs       f0, 0x28F0(r2)
	  fsubs     f2, f3, f2
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x78
	  b         .loc_0x7C

	.loc_0x78:
	  fneg      f2, f2

	.loc_0x7C:
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x8C
	  li        r3, 0x1
	  blr

	.loc_0x8C:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045EF6C
 * Size:	0001AC
 */
void PSM::EnemyNotAggressive::EnemyNotAggressive(Game::EnemyBase*,
                                                 unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r28, r3
	  mr        r30, r4
	  mr        r31, r5
	  mr        r29, r28
	  mr        r26, r28
	  mr        r27, r28
	  mr        r4, r28
	  bl        -0x4387E0
	  addi      r3, r27, 0x10
	  bl        -0x441FD4
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xDD0
	  cmplwi    r30, 0
	  stw       r4, 0x28(r27)
	  addi      r0, r4, 0x8
	  subi      r3, r3, 0xE34
	  stw       r0, 0x10(r27)
	  addi      r0, r3, 0x8
	  stw       r3, 0x28(r26)
	  stw       r0, 0x10(r26)
	  stw       r30, 0x2C(r26)
	  bne-      .loc_0x88
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x61
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4349B0

	.loc_0x88:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x62
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4349D8

	.loc_0xB0:
	  mr        r3, r30
	  lwz       r27, -0x77D4(r13)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r5, r27
	  mr        r6, r31
	  addi      r3, r29, 0x30
	  bl        -0x3B3F1C
	  lis       r3, 0x804F
	  addi      r26, r28, 0xB8
	  subi      r3, r3, 0xF60
	  lfs       f0, 0x28F0(r2)
	  stw       r3, 0x28(r29)
	  addi      r4, r3, 0x8
	  addi      r0, r3, 0x40
	  mr        r3, r26
	  stw       r4, 0x10(r29)
	  mr        r4, r30
	  stw       r0, 0x30(r29)
	  stfs      f0, 0xAC(r29)
	  stfs      f0, 0xB0(r29)
	  bl        -0x4388C4
	  lis       r3, 0x804F
	  addi      r27, r28, 0xCC
	  subi      r0, r3, 0xF70
	  mr        r4, r30
	  stw       r0, 0x10(r26)
	  mr        r3, r27
	  bl        -0x4388E0
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  subi      r0, r3, 0xF80
	  lis       r3, 0x804F
	  stw       r0, 0x10(r27)
	  subi      r5, r4, 0x1054
	  subi      r7, r3, 0x1134
	  mr        r3, r28
	  stw       r5, 0x28(r28)
	  addi      r4, r5, 0x8
	  addi      r0, r5, 0x40
	  addi      r9, r5, 0xA4
	  stw       r4, 0x10(r28)
	  addi      r8, r5, 0xB4
	  addi      r6, r7, 0x8
	  addi      r5, r7, 0x40
	  stw       r0, 0x30(r28)
	  addi      r4, r7, 0xA4
	  addi      r0, r7, 0xB4
	  stw       r9, 0xC8(r28)
	  stw       r8, 0xDC(r28)
	  stw       r7, 0x28(r28)
	  stw       r6, 0x10(r28)
	  stw       r5, 0x30(r28)
	  stw       r4, 0xC8(r28)
	  stw       r0, 0xDC(r28)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045F118
 * Size:	000160
 */
void PSM::Tsuyukusa::Tsuyukusa(Game::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r29, r3
	  mr        r31, r4
	  mr        r4, r29
	  mr        r30, r4
	  mr        r27, r4
	  mr        r28, r4
	  bl        -0x438988
	  addi      r3, r28, 0x10
	  bl        -0x44217C
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xDD0
	  cmplwi    r31, 0
	  stw       r4, 0x28(r28)
	  addi      r0, r4, 0x8
	  subi      r3, r3, 0xE34
	  stw       r0, 0x10(r28)
	  addi      r0, r3, 0x8
	  stw       r3, 0x28(r27)
	  stw       r0, 0x10(r27)
	  stw       r31, 0x2C(r27)
	  bne-      .loc_0x84
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x61
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x434B58

	.loc_0x84:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x62
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x434B80

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r28, -0x77D4(r13)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r5, r28
	  addi      r3, r30, 0x30
	  li        r6, 0x2
	  bl        -0x3A5700
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r5, r4, 0xEBC
	  li        r0, 0
	  stw       r5, 0x28(r30)
	  subi      r7, r3, 0x11BC
	  addi      r4, r5, 0x8
	  addi      r3, r5, 0x40
	  stw       r4, 0x10(r30)
	  addi      r6, r7, 0x8
	  addi      r5, r7, 0x40
	  mr        r4, r31
	  stw       r3, 0x30(r30)
	  addi      r3, r29, 0x74
	  stw       r7, 0x28(r29)
	  stw       r6, 0x10(r29)
	  stw       r5, 0x30(r29)
	  stw       r0, 0x70(r29)
	  bl        -0x438A80
	  cmplwi    r31, 0
	  bne-      .loc_0x148
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x436
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x434C1C

	.loc_0x148:
	  mr        r3, r29
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045F278
 * Size:	0000B8
 */
void PSM::Tsuyukusa::noukouFrameWork(bool)
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
	  bl        -0x669C
	  lwz       r31, 0x64(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x4C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x43E
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x434C80

	.loc_0x4C:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x74
	  lwz       r0, 0x70(r29)
	  cmpwi     r0, 0
	  bne-      .loc_0x74
	  addi      r3, r31, 0xC
	  addi      r4, r29, 0x74
	  bl        -0x438A00
	  b         .loc_0x94

	.loc_0x74:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x94
	  lwz       r0, 0x70(r29)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x94
	  addi      r3, r31, 0xC
	  addi      r4, r29, 0x74
	  bl        -0x4386E4

	.loc_0x94:
	  rlwinm    r0,r30,0,24,31
	  stw       r0, 0x70(r29)
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
 * Address:	8045F330
 * Size:	000128
 */
void PSM::EnemyBig::judgeNearWithPlayer(const Vec&, const Vec&, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stfd      f30, 0x10(r1)
	  psq_st    f30,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  fmr       f30, f1
	  mr        r30, r4
	  fmr       f31, f2
	  mr        r31, r5
	  fcmpo     cr0, f30, f31
	  bgt-      .loc_0x58
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x303C
	  li        r4, 0x2D
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x434D44

	.loc_0x58:
	  lfs       f2, 0x0(r30)
	  lfs       f1, 0x0(r31)
	  lfs       f0, 0x28F0(r2)
	  fsubs     f3, f2, f1
	  fcmpo     cr0, f3, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x78
	  b         .loc_0x7C

	.loc_0x78:
	  fneg      f3, f3

	.loc_0x7C:
	  lfs       f2, 0x4(r30)
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x28F0(r2)
	  fsubs     f4, f2, f1
	  fcmpo     cr0, f4, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x9C
	  b         .loc_0xA0

	.loc_0x9C:
	  fneg      f4, f4

	.loc_0xA0:
	  lfs       f2, 0x8(r30)
	  lfs       f1, 0x8(r31)
	  lfs       f0, 0x28F0(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xC0
	  b         .loc_0xC4

	.loc_0xC0:
	  fneg      f1, f1

	.loc_0xC4:
	  fcmpo     cr0, f3, f30
	  bge-      .loc_0xFC
	  fcmpo     cr0, f4, f30
	  bge-      .loc_0xFC
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0xFC
	  fcmpo     cr0, f3, f31
	  ble-      .loc_0xF4
	  fcmpo     cr0, f4, f31
	  ble-      .loc_0xF4
	  fcmpo     cr0, f1, f31
	  bgt-      .loc_0xFC

	.loc_0xF4:
	  li        r3, 0x1
	  b         .loc_0x100

	.loc_0xFC:
	  li        r3, 0

	.loc_0x100:
	  psq_l     f31,0x28(r1),0,0
	  lfd       f31, 0x20(r1)
	  psq_l     f30,0x18(r1),0,0
	  lfd       f30, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045F458
 * Size:	000074
 */
void PSM::EnemyBoss::onPlayingSe(unsigned long, JAISound*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr.       r31, r5
	  beq-      .loc_0x60
	  lfs       f5, 0x28F0(r2)
	  li        r0, 0
	  lfs       f1, 0x28FC(r2)
	  addi      r3, r1, 0x8
	  stfs      f5, 0xC(r1)
	  lfs       f2, -0x790C(r13)
	  stfs      f1, 0x8(r1)
	  lfs       f3, -0x7908(r13)
	  stfs      f5, 0x10(r1)
	  lfs       f4, -0x7904(r13)
	  stfs      f5, 0x14(r1)
	  stfs      f5, 0x18(r1)
	  stb       r0, 0x1C(r1)
	  stb       r0, 0x1D(r1)
	  bl        -0x12A95C
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        0x11FA4

	.loc_0x60:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045F4CC
 * Size:	000014
 */
void PSM::EnemyBoss::judgeNearWithPlayer(const Vec&, const Vec&, float, float)
{
	/*
	.loc_0x0:
	  lfs       f0, 0xE0(r3)
	  fcmpo     cr0, f0, f1
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045F4E0
 * Size:	0000B4
 */
void PSM::EnemyBoss::exec()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x2C(r3)
	  lbz       r31, 0xB4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x104(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cntlzw    r0, r0
	  rlwinm    r0,r0,27,5,31
	  stb       r0, 0xB4(r30)
	  lbz       r0, 0xB4(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  cmplwi    r31, 0
	  bne-      .loc_0x68
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x9C

	.loc_0x80:
	  cmplwi    r31, 0x1
	  bne-      .loc_0x9C
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
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
 * Address:	8045F594
 * Size:	0000F8
 */
void PSM::EnemyBoss::onCalcOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  mr        r30, r3
	  bl        .loc_0xF8
	  cmplwi    r30, 0
	  lwz       r7, 0x54(r30)
	  bne-      .loc_0x34
	  mr        r4, r7
	  b         .loc_0x38

	.loc_0x34:
	  mr        r4, r30

	.loc_0x38:
	  li        r6, -0x1
	  li        r5, 0
	  li        r0, 0x1
	  stw       r4, 0x8(r1)
	  lwz       r3, -0x6E4C(r13)
	  mr        r4, r30
	  stw       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stb       r0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  lwz       r3, 0x2C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r30)
	  fmr       f31, f1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x108(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f31
	  mr        r5, r31
	  addi      r3, r30, 0x30
	  addi      r4, r1, 0x8
	  bl        -0x3B4178
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xD0(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x28(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0xF8:
	*/
}

/*
 * --INFO--
 * Address:	8045F68C
 * Size:	000364
 */
void PSM::EnemyBoss::calcDistance()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  li        r4, 0
	  lwz       r0, -0x6D20(r13)
	  lis       r5, 0x804B
	  stw       r4, 0x80(r1)
	  subi      r5, r5, 0x434C
	  cmplwi    r4, 0
	  stw       r5, 0x74(r1)
	  mr        r31, r3
	  lfs       f31, 0x2918(r2)
	  stw       r4, 0x78(r1)
	  stw       r0, 0x7C(r1)
	  bne-      .loc_0x68
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)
	  b         .loc_0x320

	.loc_0x68:
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)
	  b         .loc_0xD8

	.loc_0x84:
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x80(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x320
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)

	.loc_0xD8:
	  lwz       r12, 0x74(r1)
	  addi      r3, r1, 0x74
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x84
	  b         .loc_0x320

	.loc_0xF8:
	  lwz       r3, 0x7C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x278(r3)
	  mr        r30, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x264
	  lwz       r4, 0x2C(r31)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x44(r1)
	  mr        r4, r30
	  lfs       f1, 0x48(r1)
	  addi      r3, r1, 0x5C
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0x2C(r1)
	  lwz       r12, 0x0(r30)
	  stfs      f1, 0x30(r1)
	  lwz       r6, 0x2C(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r5, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  lwz       r12, 0x8(r12)
	  stw       r6, 0x50(r1)
	  stw       r5, 0x54(r1)
	  stw       r0, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x5C(r1)
	  lfs       f1, 0x60(r1)
	  stfs      f0, 0x38(r1)
	  lfs       f0, 0x64(r1)
	  stfs      f1, 0x3C(r1)
	  lwz       r0, 0x38(r1)
	  lwz       r3, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  lfs       f0, 0x50(r1)
	  stw       r0, 0x68(r1)
	  lwz       r0, 0x40(r1)
	  stw       r3, 0x6C(r1)
	  lfs       f1, 0x68(r1)
	  stw       r0, 0x70(r1)
	  fsubs     f3, f1, f0
	  lfs       f2, 0x6C(r1)
	  lfs       f0, 0x54(r1)
	  lfs       f1, 0x70(r1)
	  fsubs     f2, f2, f0
	  lfs       f0, 0x58(r1)
	  stfs      f3, 0x20(r1)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x28F0(r2)
	  stfs      f2, 0x24(r1)
	  lwz       r0, 0x20(r1)
	  lwz       r3, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x28(r1)
	  stw       r3, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  stw       r0, 0x10(r1)
	  fmuls     f3, f2, f2
	  fmuls     f2, f1, f1
	  lfs       f1, 0x10(r1)
	  stfs      f3, 0x8(r1)
	  fmuls     f1, f1, f1
	  stfs      f2, 0xC(r1)
	  lwz       r0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x10(r1)
	  stw       r3, 0x18(r1)
	  lfs       f2, 0x14(r1)
	  lfs       f1, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  fadds     f1, f2, f1
	  lfs       f2, 0x1C(r1)
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x258
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1

	.loc_0x258:
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0x264
	  fmr       f31, f1

	.loc_0x264:
	  lwz       r0, 0x80(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x290
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)
	  b         .loc_0x320

	.loc_0x290:
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)
	  b         .loc_0x304

	.loc_0x2B0:
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x80(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x320
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)

	.loc_0x304:
	  lwz       r12, 0x74(r1)
	  addi      r3, r1, 0x74
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2B0

	.loc_0x320:
	  lwz       r3, 0x7C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x78(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xF8
	  stfs      f31, 0xE0(r31)
	  psq_l     f31,0x98(r1),0,0
	  lwz       r0, 0xA4(r1)
	  lfd       f31, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045F9F0
 * Size:	000140
 */
void PSM::EnemyBoss::setAppearFlag(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  stb       r29, 0xFC(r3)
	  lis       r3, 0x804A
	  subi      r31, r3, 0x3060
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x4353FC

	.loc_0x50:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x70
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x43541C

	.loc_0x70:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x18
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x43543C

	.loc_0x90:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  lwz       r12, 0x0(r3)
	  mr        r4, r28
	  li        r5, 0
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x120
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x10C
	  lbz       r0, 0xFD(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0xF4
	  li        r0, 0x1
	  mr        r3, r28
	  stb       r0, 0xFD(r28)
	  lwz       r12, 0x28(r28)
	  lwz       r12, 0xE8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF4:
	  mr        r3, r28
	  lwz       r12, 0x28(r28)
	  lwz       r12, 0xE4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x120

	.loc_0x10C:
	  mr        r3, r28
	  lwz       r12, 0x28(r28)
	  lwz       r12, 0xEC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x120:
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
 * Address:	8045FB30
 * Size:	00005C
 */
void PSM::EnemyBoss::dyingFrameWork()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0xE8(r3)
	  addis     r0, r4, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x24
	  addi      r0, r4, 0x1
	  stw       r0, 0xE8(r3)

	.loc_0x24:
	  lwz       r4, 0xE8(r3)
	  rlwinm.   r0,r4,0,3,3
	  beq-      .loc_0x4C
	  rlwinm    r0,r4,0,4,31
	  cmplwi    r0, 0xB4
	  blt-      .loc_0x4C
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045FB8C
 * Size:	000234
 */
void PSM::EnemyBoss::onDeathMotionTop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r0, 0xE8(r3)
	  lis       r3, 0x804A
	  subi      r30, r3, 0x3060
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r3, r30, 0x30
	  addi      r5, r30, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x435594

	.loc_0x4C:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x6C
	  addi      r3, r30, 0x30
	  addi      r5, r30, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4355B4

	.loc_0x6C:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  addi      r3, r30, 0x3C
	  addi      r5, r30, 0x18
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x4355D4

	.loc_0x8C:
	  lwz       r3, 0x4(r29)
	  lwz       r29, 0x4(r3)
	  cmplwi    r29, 0
	  bne-      .loc_0xB0
	  addi      r3, r30, 0x3C
	  addi      r5, r30, 0x98
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x4355F8

	.loc_0xB0:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD0
	  b         .loc_0xD4

	.loc_0xD0:
	  li        r29, 0

	.loc_0xD4:
	  cmplwi    r29, 0
	  beq-      .loc_0xE8
	  addi      r3, r29, 0x38
	  addi      r4, r31, 0xEC
	  bl        -0x43938C

	.loc_0xE8:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x108
	  addi      r3, r30, 0x30
	  addi      r5, r30, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x435650

	.loc_0x108:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x128
	  addi      r3, r30, 0x30
	  addi      r5, r30, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x435670

	.loc_0x128:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x148
	  addi      r3, r30, 0x3C
	  addi      r5, r30, 0x18
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x435690

	.loc_0x148:
	  lwz       r3, 0x4(r29)
	  lwz       r29, 0x4(r3)
	  cmplwi    r29, 0
	  bne-      .loc_0x16C
	  addi      r3, r30, 0x3C
	  addi      r5, r30, 0x98
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x4356B4

	.loc_0x16C:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x18C
	  b         .loc_0x190

	.loc_0x18C:
	  li        r29, 0

	.loc_0x190:
	  cmplwi    r29, 0
	  beq-      .loc_0x218
	  lwz       r0, -0x6E50(r13)
	  li        r29, 0x1
	  cmplwi    r0, 0
	  bne-      .loc_0x1BC
	  addi      r3, r30, 0xBC
	  addi      r5, r30, 0x18
	  li        r4, 0x89
	  crclr     6, 0x6
	  bl        -0x435704

	.loc_0x1BC:
	  lwz       r3, -0x6E50(r13)
	  lwz       r4, 0x4(r3)
	  b         .loc_0x1F0

	.loc_0x1C8:
	  lwz       r3, 0x0(r4)
	  lbz       r0, 0xFE(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1EC
	  lwz       r3, 0xE8(r3)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x1EC
	  li        r29, 0

	.loc_0x1EC:
	  lwz       r4, 0xC(r4)

	.loc_0x1F0:
	  cmplwi    r4, 0
	  bne+      .loc_0x1C8
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x218
	  mr        r3, r31
	  li        r4, 0xA
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x218:
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
 * Address:	8045FDC0
 * Size:	00015C
 */
void PSM::EnemyBoss::setKilled()
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
	  lis       r3, 0x804A
	  lwz       r0, 0xE8(r29)
	  subi      r31, r3, 0x3060
	  cmplwi    r0, 0xB4
	  bge-      .loc_0x3C
	  oris      r0, r0, 0x1000
	  stw       r0, 0xE8(r29)
	  b         .loc_0x140

	.loc_0x3C:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x4357D8

	.loc_0x5C:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x7C
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4357F8

	.loc_0x7C:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x9C
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x18
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x435818

	.loc_0x9C:
	  lwz       r3, 0x4(r30)
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  bne-      .loc_0xC0
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x98
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x43583C

	.loc_0xC0:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE0
	  b         .loc_0xE4

	.loc_0xE0:
	  li        r30, 0

	.loc_0xE4:
	  cmplwi    r30, 0
	  beq-      .loc_0xF8
	  addi      r3, r30, 0x38
	  addi      r4, r29, 0xEC
	  bl        -0x439290

	.loc_0xF8:
	  lbz       r0, 0xFE(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x140
	  li        r3, -0x1
	  li        r0, 0
	  stw       r3, 0xE8(r29)
	  cmplwi    r30, 0
	  stb       r0, 0xFC(r29)
	  stb       r0, 0xFE(r29)
	  beq-      .loc_0x138
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl

	.loc_0x138:
	  li        r0, 0
	  sth       r0, 0xE4(r29)

	.loc_0x140:
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
 * Address:	8045FF1C
 * Size:	000024
 */
void PSM::EnemyBoss::isOnDisappearing()
{
	/*
	.loc_0x0:
	  lis       r4, 0x1
	  lhz       r5, 0xE4(r3)
	  subi      r0, r4, 0x1
	  rlwinm    r0,r0,0,16,31
	  sub       r3, r0, r5
	  sub       r0, r5, r0
	  or        r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045FF40
 * Size:	000030
 */
void PSM::EnemyBoss::updateDisappearing()
{
	/*
	.loc_0x0:
	  lhz       r4, 0xE4(r3)
	  cmplwi    r4, 0xFFFF
	  beqlr-
	  addi      r0, r4, 0x1
	  sth       r0, 0xE4(r3)
	  lhz       r0, 0xE4(r3)
	  cmplwi    r0, 0x78
	  blelr-
	  lis       r4, 0x1
	  subi      r0, r4, 0x1
	  sth       r0, 0xE4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045FF70
 * Size:	000260
 */
void PSM::EnemyMidBoss::EnemyMidBoss(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r27, r3
	  mr        r31, r4
	  mr        r4, r27
	  mr        r28, r4
	  mr        r29, r4
	  mr        r30, r4
	  mr        r25, r4
	  mr        r26, r28
	  bl        -0x4397E8
	  addi      r3, r26, 0x10
	  bl        -0x442FDC
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xDD0
	  cmplwi    r31, 0
	  stw       r4, 0x28(r26)
	  addi      r0, r4, 0x8
	  subi      r3, r3, 0xE34
	  stw       r0, 0x10(r26)
	  addi      r0, r3, 0x8
	  stw       r3, 0x28(r25)
	  stw       r0, 0x10(r25)
	  stw       r31, 0x2C(r25)
	  bne-      .loc_0x8C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x61
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4359B8

	.loc_0x8C:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xB4
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x62
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4359E0

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r26, -0x77D4(r13)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r5, r26
	  addi      r3, r30, 0x30
	  li        r6, 0x4
	  bl        -0x3B4F24
	  lis       r3, 0x804F
	  addi      r25, r29, 0xB8
	  subi      r3, r3, 0xF60
	  lfs       f0, 0x28F0(r2)
	  stw       r3, 0x28(r30)
	  addi      r4, r3, 0x8
	  addi      r0, r3, 0x40
	  mr        r3, r25
	  stw       r4, 0x10(r30)
	  mr        r4, r31
	  stw       r0, 0x30(r30)
	  stfs      f0, 0xAC(r30)
	  stfs      f0, 0xB0(r30)
	  bl        -0x4398CC
	  lis       r3, 0x804F
	  addi      r26, r29, 0xCC
	  subi      r0, r3, 0xF70
	  mr        r4, r31
	  stw       r0, 0x10(r25)
	  mr        r3, r26
	  bl        -0x4398E8
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  subi      r0, r3, 0xF80
	  lis       r3, 0x804F
	  stw       r0, 0x10(r26)
	  subi      r6, r4, 0x1054
	  subi      r10, r3, 0x1380
	  lis       r3, 0x1
	  stw       r6, 0x28(r29)
	  addi      r5, r6, 0x8
	  addi      r4, r6, 0x40
	  addi      r0, r6, 0xA4
	  stw       r5, 0x10(r29)
	  addi      r11, r6, 0xB4
	  addi      r9, r10, 0x8
	  addi      r8, r10, 0x40
	  stw       r4, 0x30(r29)
	  addi      r7, r10, 0xA4
	  addi      r6, r10, 0xB4
	  lfs       f0, 0x2918(r2)
	  stw       r0, 0xC8(r29)
	  subi      r5, r3, 0x1
	  li        r0, -0x1
	  mr        r4, r28
	  stw       r11, 0xDC(r29)
	  addi      r3, r28, 0xEC
	  stw       r10, 0x28(r28)
	  stw       r9, 0x10(r28)
	  stw       r8, 0x30(r28)
	  stw       r7, 0xC8(r28)
	  stw       r6, 0xDC(r28)
	  stfs      f0, 0xE0(r28)
	  sth       r5, 0xE4(r28)
	  stw       r0, 0xE8(r28)
	  bl        -0x439974
	  li        r4, 0
	  lis       r3, 0x804F
	  stb       r4, 0xFC(r28)
	  subi      r9, r3, 0x1470
	  lis       r3, 0x1
	  li        r0, 0x1
	  stb       r4, 0xFD(r28)
	  addi      r8, r9, 0x8
	  addi      r7, r9, 0x40
	  addi      r6, r9, 0xA4
	  stb       r0, 0xFE(r28)
	  addi      r5, r9, 0xB4
	  subi      r0, r3, 0x1
	  lfs       f0, 0x291C(r2)
	  stb       r4, 0xFF(r28)
	  mr        r4, r27
	  addi      r3, r27, 0x108
	  stw       r9, 0x28(r27)
	  stw       r8, 0x10(r27)
	  stw       r7, 0x30(r27)
	  stw       r6, 0xC8(r27)
	  stw       r5, 0xDC(r27)
	  stw       r0, 0x100(r27)
	  stfs      f0, 0x104(r27)
	  bl        -0x4399D8
	  li        r0, 0
	  stb       r0, 0x118(r27)
	  lwz       r3, -0x6E50(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x248
	  lwz       r0, 0xC(r3)
	  addi      r4, r27, 0x108
	  stw       r0, 0x100(r27)
	  bl        0xC804

	.loc_0x248:
	  mr        r3, r27
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804601D0
 * Size:	0001A8
 */
void PSM::EnemyBoss::~EnemyBoss()
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
	  beq-      .loc_0x18C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xEC
	  subi      r5, r3, 0x1380
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0x60
	  addi      r3, r30, 0xEC
	  li        r4, 0
	  bl        -0x439A5C

	.loc_0x60:
	  cmplwi    r30, 0
	  beq-      .loc_0x17C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xCC
	  subi      r5, r3, 0x1054
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0xBC
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xCC
	  subi      r0, r3, 0xF80
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0xBC
	  addi      r3, r30, 0xCC
	  li        r4, 0
	  bl        -0x439AB8

	.loc_0xBC:
	  addic.    r0, r30, 0xB8
	  beq-      .loc_0xE4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xB8
	  subi      r0, r3, 0xF70
	  stw       r0, 0xC8(r30)
	  beq-      .loc_0xE4
	  addi      r3, r30, 0xB8
	  li        r4, 0
	  bl        -0x439AE0

	.loc_0xE4:
	  cmplwi    r30, 0
	  beq-      .loc_0x17C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x30
	  subi      r4, r3, 0xF60
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x128
	  lis       r4, 0x804A
	  addi      r3, r30, 0x30
	  addi      r0, r4, 0x6200
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        -0x3A6714

	.loc_0x128:
	  cmplwi    r30, 0
	  beq-      .loc_0x17C
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0x17C
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x443300
	  cmplwi    r30, 0
	  beq-      .loc_0x17C
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x439B78

	.loc_0x17C:
	  extsh.    r0, r31
	  ble-      .loc_0x18C
	  mr        r3, r30
	  bl        -0x43C2A4

	.loc_0x18C:
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
 * Address:	80460378
 * Size:	00021C
 */
void PSM::EnemyMidBoss::onCalcOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  subi      r30, r4, 0x3060
	  stw       r29, 0x14(r1)
	  bl        -0xE08
	  lbz       r0, 0x118(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x200
	  lbz       r0, 0xFC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x200
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  addi      r3, r30, 0x30
	  addi      r5, r30, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x435D94

	.loc_0x60:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x80
	  addi      r3, r30, 0x30
	  addi      r5, r30, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x435DB4

	.loc_0x80:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xA0
	  addi      r3, r30, 0x3C
	  addi      r5, r30, 0x18
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x435DD4

	.loc_0xA0:
	  lwz       r3, 0x4(r29)
	  lwz       r29, 0x4(r3)
	  cmplwi    r29, 0
	  bne-      .loc_0xC4
	  addi      r3, r30, 0x3C
	  addi      r5, r30, 0x98
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x435DF8

	.loc_0xC4:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE4
	  b         .loc_0xE8

	.loc_0xE4:
	  li        r29, 0

	.loc_0xE8:
	  cmplwi    r29, 0
	  beq-      .loc_0x200
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x200
	  lfs       f1, 0xE0(r31)
	  lfs       f0, 0x104(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x200
	  li        r0, 0x1
	  stb       r0, 0xFC(r31)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  addi      r3, r30, 0x30
	  addi      r5, r30, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x435E80

	.loc_0x14C:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x16C
	  addi      r3, r30, 0x30
	  addi      r5, r30, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x435EA0

	.loc_0x16C:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x18C
	  addi      r3, r30, 0x3C
	  addi      r5, r30, 0x18
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x435EC0

	.loc_0x18C:
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1F8
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  li        r5, 0
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F8
	  lbz       r0, 0xFD(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E4
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0xFD(r31)
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0xE8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1E4:
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0xE4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1F8:
	  li        r0, 0
	  stb       r0, 0x118(r31)

	.loc_0x200:
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
 * Address:	80460594
 * Size:	0000EC
 */
void PSM::EnemyMidBoss::jumpRequest(unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x3060
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x435F9C

	.loc_0x4C:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x6C
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x435FBC

	.loc_0x6C:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x18
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x435FDC

	.loc_0x8C:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0xA4
	  li        r3, 0
	  b         .loc_0xA8

	.loc_0xA4:
	  bl        -0x12AFB8

	.loc_0xA8:
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  beq-      .loc_0xCC
	  stw       r28, 0x134(r3)
	  mr        r4, r29
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl

	.loc_0xCC:
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
 * Address:	80460680
 * Size:	00010C
 */
void PSM::EnemyMidBoss::onAppear1st()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0x3060
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x436080

	.loc_0x44:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x64
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4360A0

	.loc_0x64:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x18
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x4360C0

	.loc_0x84:
	  lwz       r3, 0x4(r30)
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  bne-      .loc_0xA8
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x98
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x4360E4

	.loc_0xA8:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8
	  b         .loc_0xCC

	.loc_0xC8:
	  li        r30, 0

	.loc_0xCC:
	  cmplwi    r30, 0
	  beq-      .loc_0xF0
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF0:
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
 * Address:	8046078C
 * Size:	000060
 */
void PSM::EnemyMidBoss::postPikiAttack(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6E50(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x50
	  lwz       r5, 0x34(r5)
	  cmplwi    r5, 0
	  beq-      .loc_0x50
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x40
	  lwz       r0, 0x100(r3)
	  mr        r3, r5
	  rlwinm    r4,r0,0,24,31
	  bl        -0x82AC
	  b         .loc_0x50

	.loc_0x40:
	  lwz       r0, 0x100(r3)
	  mr        r3, r5
	  rlwinm    r4,r0,0,24,31
	  bl        -0x828C

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804607EC
 * Size:	000068
 */
void PSM::EnemyBigBoss::EnemyBigBoss(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x890
	  lis       r3, 0x804F
	  li        r0, 0x1
	  subi      r7, r3, 0x1560
	  mr        r3, r31
	  stw       r7, 0x28(r31)
	  addi      r4, r7, 0x8
	  addi      r6, r7, 0x40
	  addi      r5, r7, 0xA4
	  stw       r4, 0x10(r31)
	  addi      r4, r7, 0xB4
	  stw       r6, 0x30(r31)
	  stw       r5, 0xC8(r31)
	  stw       r4, 0xDC(r31)
	  sth       r0, 0x11C(r31)
	  stw       r31, -0x6370(r13)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80460854
 * Size:	0001F0
 */
void PSM::EnemyMidBoss::~EnemyMidBoss()
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
	  beq-      .loc_0x1D4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x108
	  subi      r5, r3, 0x1470
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0x60
	  addi      r3, r30, 0x108
	  li        r4, 0
	  bl        -0x43A0E0

	.loc_0x60:
	  cmplwi    r30, 0
	  beq-      .loc_0x1C4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xEC
	  subi      r5, r3, 0x1380
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0xA8
	  addi      r3, r30, 0xEC
	  li        r4, 0
	  bl        -0x43A128

	.loc_0xA8:
	  cmplwi    r30, 0
	  beq-      .loc_0x1C4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xCC
	  subi      r5, r3, 0x1054
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0x104
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xCC
	  subi      r0, r3, 0xF80
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0x104
	  addi      r3, r30, 0xCC
	  li        r4, 0
	  bl        -0x43A184

	.loc_0x104:
	  addic.    r0, r30, 0xB8
	  beq-      .loc_0x12C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xB8
	  subi      r0, r3, 0xF70
	  stw       r0, 0xC8(r30)
	  beq-      .loc_0x12C
	  addi      r3, r30, 0xB8
	  li        r4, 0
	  bl        -0x43A1AC

	.loc_0x12C:
	  cmplwi    r30, 0
	  beq-      .loc_0x1C4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x30
	  subi      r4, r3, 0xF60
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x170
	  lis       r4, 0x804A
	  addi      r3, r30, 0x30
	  addi      r0, r4, 0x6200
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        -0x3A6DE0

	.loc_0x170:
	  cmplwi    r30, 0
	  beq-      .loc_0x1C4
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0x1C4
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x4439CC
	  cmplwi    r30, 0
	  beq-      .loc_0x1C4
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x43A244

	.loc_0x1C4:
	  extsh.    r0, r31
	  ble-      .loc_0x1D4
	  mr        r3, r30
	  bl        -0x43C970

	.loc_0x1D4:
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
 * Address:	80460A44
 * Size:	000088
 */
void PSM::EnemyBigBoss::~EnemyBigBoss()
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
	  li        r0, 0
	  subi      r8, r4, 0x1560
	  li        r4, 0
	  stw       r8, 0x28(r30)
	  addi      r5, r8, 0x8
	  addi      r7, r8, 0x40
	  addi      r6, r8, 0xA4
	  stw       r5, 0x10(r30)
	  addi      r5, r8, 0xB4
	  stw       r7, 0x30(r30)
	  stw       r6, 0xC8(r30)
	  stw       r5, 0xDC(r30)
	  stw       r0, -0x6370(r13)
	  bl        -0x248
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x43C9F8

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
 * Address:	80460ACC
 * Size:	0000E8
 */
void PSM::EnemyBigBoss::jumpRequest(unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x3060
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x4364D4

	.loc_0x4C:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x6C
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x4364F4

	.loc_0x6C:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x18
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x436514

	.loc_0x8C:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0xA4
	  li        r3, 0
	  b         .loc_0xA8

	.loc_0xA4:
	  bl        -0x12B4F0

	.loc_0xA8:
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  stw       r28, 0x134(r3)
	  mr        r4, r29
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
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
 * Address:	80460BB4
 * Size:	000038
 */
void PSM::EnemyBigBoss::onDeathMotionTop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xD
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0xE8(r3)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xD4(r12)
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
 * Address:	80460BEC
 * Size:	00010C
 */
void PSM::EnemyBigBoss::onAppear1st()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0x3060
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x4365EC

	.loc_0x44:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x64
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x43660C

	.loc_0x64:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x18
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x43662C

	.loc_0x84:
	  lwz       r3, 0x4(r30)
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  bne-      .loc_0xA8
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x98
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x436650

	.loc_0xA8:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8
	  b         .loc_0xCC

	.loc_0xC8:
	  li        r30, 0

	.loc_0xCC:
	  cmplwi    r30, 0
	  beq-      .loc_0xF0
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lhz       r5, 0x11C(r29)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF0:
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
 * Address:	80460CF8
 * Size:	0000BC
 */
void PSM::Enemy_SpecialChappy::onPlayingSe(unsigned long, JAISound*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  beq-      .loc_0xAC
	  cmplwi    r4, 0x5811
	  blt-      .loc_0x58
	  cmplwi    r4, 0x5819
	  bgt-      .loc_0x58
	  cmplwi    r4, 0x5818
	  beq-      .loc_0x58
	  cmplwi    r4, 0x5816
	  beq-      .loc_0x58
	  mr        r3, r5
	  lfs       f1, 0x2920(r2)
	  lwz       r12, 0x10(r5)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xAC

	.loc_0x58:
	  cmplwi    r4, 0x5818
	  bne-      .loc_0x84
	  mr        r3, r5
	  lfs       f1, 0x2924(r2)
	  lwz       r12, 0x10(r5)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xAC

	.loc_0x84:
	  cmplwi    r4, 0x5816
	  bne-      .loc_0xAC
	  mr        r3, r5
	  lfs       f1, 0x2920(r2)
	  lwz       r12, 0x10(r5)
	  li        r4, 0x14
	  li        r5, 0
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80460DB4
 * Size:	00002C
 */
void PSM::DirectorLink::eventStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	80460DE0
 * Size:	00004C
 */
void PSM::DirectorLink::eventRestart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  mr        r4, r31
	  addi      r3, r3, 0xC
	  bl        -0x43A530

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80460E2C
 * Size:	00004C
 */
void PSM::DirectorLink::eventStop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  mr        r4, r31
	  addi      r3, r3, 0xC
	  bl        -0x43A23C

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80460E78
 * Size:	00002C
 */
void PSM::DirectorLink::eventFinish()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	80460EA4
 * Size:	000034
 */
void PSM::EventLink::getListDirectorActor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x84AC
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  lwz       r3, 0x64(r3)
	  b         .loc_0x24

	.loc_0x20:
	  li        r3, 0

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80460ED8
 * Size:	000034
 */
void PSM::OtakaraEventLink::getListDirectorActor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x83D8
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  lwz       r3, 0x54(r3)
	  b         .loc_0x24

	.loc_0x20:
	  li        r3, 0

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80460F0C
 * Size:	000004
 */
void PSM::OtakaraEventLink::eventFinish()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80460F10
 * Size:	000250
 */
void PSM::OtakaraEventLink_2PBattle::getTargetDirector()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6A3
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x43690C

	.loc_0x40:
	  lwz       r3, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF8(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  bne-      .loc_0x78
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6A5
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436944

	.loc_0x78:
	  mr        r3, r30
	  li        r31, 0
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xC
	  beq-      .loc_0xD0
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xD
	  beq-      .loc_0xD0
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xB
	  bne-      .loc_0xD4

	.loc_0xD0:
	  li        r31, 0x1

	.loc_0xD4:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xF8
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6AA
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4369C4

	.loc_0xF8:
	  lwz       r0, 0x70(r30)
	  li        r31, 0
	  lwz       r30, 0x74(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1FC
	  bge-      .loc_0x120
	  cmpwi     r0, 0
	  beq-      .loc_0x130
	  bge-      .loc_0x138
	  b         .loc_0x210

	.loc_0x120:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x18C
	  bge-      .loc_0x210
	  b         .loc_0x208

	.loc_0x130:
	  li        r31, 0
	  b         .loc_0x210

	.loc_0x138:
	  cmplwi    r30, 0
	  beq-      .loc_0x210
	  lhz       r0, 0x22E(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x158
	  bl        -0x7D2C
	  mr        r31, r3
	  b         .loc_0x210

	.loc_0x158:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x16C
	  bl        -0x7E30
	  mr        r31, r3
	  b         .loc_0x210

	.loc_0x16C:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6F4
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436A54
	  b         .loc_0x210

	.loc_0x18C:
	  cmplwi    r30, 0
	  bne-      .loc_0x1B0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6FB
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436A7C

	.loc_0x1B0:
	  lhz       r0, 0x22E(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C8
	  bl        -0x7F7C
	  mr        r31, r3
	  b         .loc_0x210

	.loc_0x1C8:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1DC
	  bl        -0x8080
	  mr        r31, r3
	  b         .loc_0x210

	.loc_0x1DC:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x702
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436AC4
	  b         .loc_0x210

	.loc_0x1FC:
	  bl        -0x7FBC
	  mr        r31, r3
	  b         .loc_0x210

	.loc_0x208:
	  bl        -0x80B8
	  mr        r31, r3

	.loc_0x210:
	  cmplwi    r31, 0
	  bne-      .loc_0x234
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x71A
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436B00

	.loc_0x234:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80461160
 * Size:	000194
 */
void PSM::OtakaraEventLink_2PBattle::eventStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6A3
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436B60

	.loc_0x44:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF8(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0x7C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6A5
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436B98

	.loc_0x7C:
	  mr        r3, r29
	  li        r30, 0
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xC
	  beq-      .loc_0xD4
	  mr        r3, r29
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xD
	  beq-      .loc_0xD4
	  mr        r3, r29
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xB
	  bne-      .loc_0xD8

	.loc_0xD4:
	  li        r30, 0x1

	.loc_0xD8:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0xFC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6AA
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436C18

	.loc_0xFC:
	  lwz       r3, 0x70(r29)
	  subi      r0, r3, 0x2
	  cmplwi    r0, 0x1
	  ble-      .loc_0x114
	  cmpwi     r3, 0x4
	  bne-      .loc_0x11C

	.loc_0x114:
	  li        r0, 0x1
	  b         .loc_0x150

	.loc_0x11C:
	  subi      r0, r3, 0x1
	  cmplwi    r0, 0x2
	  ble-      .loc_0x130
	  cmpwi     r3, 0x4
	  bne-      .loc_0x14C

	.loc_0x130:
	  lwz       r0, 0x74(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x144
	  li        r0, 0x1
	  b         .loc_0x150

	.loc_0x144:
	  li        r0, 0
	  b         .loc_0x150

	.loc_0x14C:
	  li        r0, 0

	.loc_0x150:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x178
	  mr        r3, r31
	  bl        -0x3AC
	  lwz       r3, 0x54(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x178
	  mr        r4, r31
	  addi      r3, r3, 0xC
	  bl        -0x43A9F0

	.loc_0x178:
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
 * Address:	804612F4
 * Size:	00002C
 */
void PSM::OtakaraEventLink_2PBattle::eventRestart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
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
 * Address:	80461320
 * Size:	000194
 */
void PSM::OtakaraEventLink_2PBattle::eventStop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6A3
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436D20

	.loc_0x44:
	  lwz       r3, 0x0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF8(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0x7C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6A5
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436D58

	.loc_0x7C:
	  mr        r3, r29
	  li        r30, 0
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xC
	  beq-      .loc_0xD4
	  mr        r3, r29
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xD
	  beq-      .loc_0xD4
	  mr        r3, r29
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xB
	  bne-      .loc_0xD8

	.loc_0xD4:
	  li        r30, 0x1

	.loc_0xD8:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0xFC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6AA
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436DD8

	.loc_0xFC:
	  lwz       r3, 0x70(r29)
	  subi      r0, r3, 0x2
	  cmplwi    r0, 0x1
	  ble-      .loc_0x114
	  cmpwi     r3, 0x4
	  bne-      .loc_0x11C

	.loc_0x114:
	  li        r0, 0x1
	  b         .loc_0x150

	.loc_0x11C:
	  subi      r0, r3, 0x1
	  cmplwi    r0, 0x2
	  ble-      .loc_0x130
	  cmpwi     r3, 0x4
	  bne-      .loc_0x14C

	.loc_0x130:
	  lwz       r0, 0x74(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x144
	  li        r0, 0x1
	  b         .loc_0x150

	.loc_0x144:
	  li        r0, 0
	  b         .loc_0x150

	.loc_0x14C:
	  li        r0, 0

	.loc_0x150:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x178
	  mr        r3, r31
	  bl        -0x56C
	  lwz       r3, 0x54(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x178
	  mr        r4, r31
	  addi      r3, r3, 0xC
	  bl        -0x43A870

	.loc_0x178:
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
 * Address:	804614B4
 * Size:	00002C
 */
void PSM::OtakaraEventLink_2PBattle::eventFinish()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	804614E0
 * Size:	000140
 */
void PSM::OtakaraEventLink_2PBattle::getListDirectorActor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6A3
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436EDC

	.loc_0x40:
	  lwz       r3, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF8(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  bne-      .loc_0x78
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6A5
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436F14

	.loc_0x78:
	  mr        r3, r30
	  li        r31, 0
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xC
	  beq-      .loc_0xD0
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xD
	  beq-      .loc_0xD0
	  mr        r3, r30
	  lwz       r12, 0x28(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xB
	  bne-      .loc_0xD4

	.loc_0xD0:
	  li        r31, 0x1

	.loc_0xD4:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xF8
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x6AA
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436F94

	.loc_0xF8:
	  lwz       r0, 0x70(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0x120
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x763
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x436FBC

	.loc_0x120:
	  bl        -0x8AF4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r3, 0x54(r3)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80461620
 * Size:	000170
 */
void PSM::WorkItem::WorkItem(Game::BaseItem*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r28, r3
	  mr        r31, r4
	  mr        r4, r28
	  mr        r29, r4
	  mr        r30, r4
	  mr        r26, r4
	  mr        r27, r4
	  bl        -0x43AE94
	  addi      r3, r27, 0x10
	  bl        -0x444688
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xDD0
	  cmplwi    r31, 0
	  stw       r4, 0x28(r27)
	  addi      r0, r4, 0x8
	  subi      r3, r3, 0xE34
	  stw       r0, 0x10(r27)
	  addi      r0, r3, 0x8
	  stw       r3, 0x28(r26)
	  stw       r0, 0x10(r26)
	  stw       r31, 0x2C(r26)
	  bne-      .loc_0x88
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x61
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x437064

	.loc_0x88:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x62
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x43708C

	.loc_0xB0:
	  mr        r3, r31
	  lwz       r27, -0x77D4(r13)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r5, r27
	  addi      r3, r30, 0x30
	  li        r6, 0x2
	  bl        -0x3A7C0C
	  lis       r3, 0x804F
	  lis       r4, 0x804B
	  subi      r5, r3, 0xEBC
	  lis       r3, 0x804F
	  stw       r5, 0x28(r30)
	  addi      r4, r4, 0x21A4
	  addi      r0, r5, 0x8
	  subi      r6, r3, 0x1744
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0x40
	  addi      r26, r28, 0x70
	  addi      r8, r4, 0x8
	  stw       r0, 0x30(r30)
	  addi      r7, r4, 0x40
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r4, 0x28(r29)
	  mr        r3, r26
	  mr        r4, r31
	  stw       r8, 0x10(r29)
	  stw       r7, 0x30(r29)
	  stw       r6, 0x28(r28)
	  stw       r5, 0x10(r28)
	  stw       r0, 0x30(r28)
	  bl        -0x43AFA4
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  subi      r0, r3, 0x1650
	  mr        r3, r28
	  stw       r0, 0x10(r26)
	  subi      r0, r4, 0x166C
	  stw       r0, 0x10(r26)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80461790
 * Size:	000030
 */
void PSM::WorkItem::eventStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x70
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
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
 * Address:	804617C0
 * Size:	000030
 */
void PSM::WorkItem::eventRestart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x70
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	804617F0
 * Size:	000030
 */
void PSM::WorkItem::eventStop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x70
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	80461820
 * Size:	000030
 */
void PSM::WorkItem::eventFinish()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x70
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	80461850
 * Size:	0001A0
 */
void PSM::Otakara::setGoalOnyon(Game::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lis       r3, 0x804A
	  lwz       r0, 0x70(r28)
	  subi      r31, r3, 0x3060
	  cmpwi     r0, 0x3
	  beq-      .loc_0x180
	  cmpwi     r0, 0x2
	  beq-      .loc_0x180
	  cmpwi     r0, 0x4
	  bne-      .loc_0x4C
	  b         .loc_0x180

	.loc_0x4C:
	  lwz       r30, 0x74(r28)
	  stw       r29, 0x74(r28)
	  lwz       r0, 0x8C(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x74
	  addi      r3, r31, 0xC8
	  addi      r5, r31, 0x18
	  li        r4, 0x374
	  crclr     6, 0x6
	  bl        -0x437280

	.loc_0x74:
	  lwz       r3, 0x8C(r28)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x180
	  lwz       r0, 0x74(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0xEC
	  lwz       r0, 0x70(r28)
	  cmpwi     r0, 0x3
	  beq-      .loc_0xB0
	  cmpwi     r0, 0x2
	  bne-      .loc_0x180

	.loc_0xB0:
	  lwz       r0, 0x8C(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  addi      r3, r31, 0
	  addi      r5, r31, 0x18
	  li        r4, 0x7DE
	  crclr     6, 0x6
	  bl        -0x4372DC

	.loc_0xD0:
	  lwz       r3, 0x8C(r28)
	  bl        -0xA14
	  lwz       r3, 0x54(r3)
	  lwz       r4, 0x8C(r28)
	  addi      r3, r3, 0xC
	  bl        -0x43AD10
	  b         .loc_0x180

	.loc_0xEC:
	  cmplwi    r30, 0
	  beq-      .loc_0x180
	  cmplw     r30, r0
	  beq-      .loc_0x180
	  lwz       r0, 0x70(r28)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x180
	  stw       r30, 0x74(r28)
	  lwz       r0, 0x8C(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x12C
	  addi      r3, r31, 0
	  addi      r5, r31, 0x18
	  li        r4, 0x7EE
	  crclr     6, 0x6
	  bl        -0x437338

	.loc_0x12C:
	  lwz       r3, 0x8C(r28)
	  bl        -0xA70
	  lwz       r3, 0x54(r3)
	  lwz       r4, 0x8C(r28)
	  addi      r3, r3, 0xC
	  bl        -0x43AD6C
	  stw       r29, 0x74(r28)
	  lwz       r0, 0x8C(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x168
	  addi      r3, r31, 0
	  addi      r5, r31, 0x18
	  li        r4, 0x7F9
	  crclr     6, 0x6
	  bl        -0x437374

	.loc_0x168:
	  lwz       r3, 0x8C(r28)
	  bl        -0xAAC
	  lwz       r3, 0x54(r3)
	  lwz       r4, 0x8C(r28)
	  addi      r3, r3, 0xC
	  bl        -0x43B0E8

	.loc_0x180:
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
 * Address:	804619F0
 * Size:	0000DC
 */
void PSM::Otakara::otakaraEventStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x8C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x80A
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4373E8

	.loc_0x3C:
	  lwz       r3, 0x8C(r31)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  lwz       r0, 0x70(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x6C
	  li        r0, 0x1
	  b         .loc_0x70

	.loc_0x6C:
	  li        r0, 0

	.loc_0x70:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x8C
	  addi      r3, r31, 0x78
	  lwz       r12, 0x88(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8C:
	  lwz       r0, 0x8C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xB4
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x81A
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x437460

	.loc_0xB4:
	  lwz       r3, 0x8C(r31)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0xC(r12)
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
 * Address:	80461ACC
 * Size:	0000DC
 */
void PSM::Otakara::otakaraEventRestart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x8C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x822
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4374C4

	.loc_0x3C:
	  lwz       r0, 0x8C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x80A
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4374EC

	.loc_0x64:
	  lwz       r3, 0x8C(r31)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  lwz       r0, 0x70(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x94
	  li        r0, 0x1
	  b         .loc_0x98

	.loc_0x94:
	  li        r0, 0

	.loc_0x98:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xB4
	  addi      r3, r31, 0x78
	  lwz       r12, 0x88(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB4:
	  lwz       r3, 0x8C(r31)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	80461BA8
 * Size:	0000DC
 */
void PSM::Otakara::otakaraEventStop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x8C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x82E
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4375A0

	.loc_0x3C:
	  lwz       r0, 0x8C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x80A
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4375C8

	.loc_0x64:
	  lwz       r3, 0x8C(r31)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  lwz       r0, 0x70(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x94
	  li        r0, 0x1
	  b         .loc_0x98

	.loc_0x94:
	  li        r0, 0

	.loc_0x98:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xB4
	  addi      r3, r31, 0x78
	  lwz       r12, 0x88(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB4:
	  lwz       r3, 0x8C(r31)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	80461C84
 * Size:	0000DC
 */
void PSM::Otakara::otakaraEventFinish()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x8C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x83A
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x43767C

	.loc_0x3C:
	  lwz       r0, 0x8C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x80A
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4376A4

	.loc_0x64:
	  lwz       r3, 0x8C(r31)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  lwz       r0, 0x70(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x94
	  li        r0, 0x1
	  b         .loc_0x98

	.loc_0x94:
	  li        r0, 0

	.loc_0x98:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xB4
	  addi      r3, r31, 0x78
	  lwz       r12, 0x88(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB4:
	  lwz       r3, 0x8C(r31)
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	80461D60
 * Size:	000224
 */
void PSM::PelletOtakara::PelletOtakara(Game::PelletOtakara::Object*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r3
	  mr        r31, r26
	  mr        r29, r4
	  mr        r30, r5
	  mr        r28, r31
	  mr        r25, r31
	  mr        r27, r31
	  mr        r4, r31
	  bl        -0x43B5D8
	  addi      r3, r27, 0x10
	  bl        -0x444DCC
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xDD0
	  cmplwi    r29, 0
	  stw       r4, 0x28(r27)
	  addi      r0, r4, 0x8
	  subi      r3, r3, 0xE34
	  stw       r0, 0x10(r27)
	  addi      r0, r3, 0x8
	  stw       r3, 0x28(r25)
	  stw       r0, 0x10(r25)
	  stw       r29, 0x2C(r25)
	  bne-      .loc_0x8C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x61
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4377A8

	.loc_0x8C:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xB4
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x62
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x4377D0

	.loc_0xB4:
	  mr        r3, r29
	  lwz       r27, -0x77D4(r13)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r5, r27
	  addi      r3, r31, 0x30
	  li        r6, 0x2
	  bl        -0x3A8350
	  lis       r3, 0x804F
	  lis       r4, 0x804B
	  subi      r5, r3, 0xEBC
	  lis       r3, 0x804F
	  stw       r5, 0x28(r31)
	  addi      r4, r4, 0x21A4
	  addi      r0, r5, 0x8
	  subi      r7, r3, 0x17DC
	  stw       r0, 0x10(r31)
	  addi      r0, r5, 0x40
	  addi      r27, r28, 0x78
	  addi      r9, r4, 0x8
	  stw       r0, 0x30(r31)
	  addi      r8, r4, 0x40
	  addi      r6, r7, 0x8
	  addi      r5, r7, 0x40
	  stw       r4, 0x28(r31)
	  li        r0, 0
	  mr        r3, r27
	  mr        r4, r29
	  stw       r9, 0x10(r31)
	  stw       r8, 0x30(r31)
	  stw       r7, 0x28(r28)
	  stw       r6, 0x10(r28)
	  stw       r5, 0x30(r28)
	  stw       r0, 0x70(r28)
	  stw       r0, 0x74(r28)
	  bl        -0x43B6F4
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x1650
	  lis       r3, 0x804F
	  stw       r0, 0x10(r27)
	  subi      r4, r3, 0x1874
	  rlwinm.   r0,r30,0,24,31
	  subi      r3, r5, 0x166C
	  li        r5, 0
	  stw       r3, 0x10(r27)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r5, 0x8C(r28)
	  stw       r4, 0x28(r26)
	  stw       r3, 0x10(r26)
	  stw       r0, 0x30(r26)
	  bne-      .loc_0x1CC
	  li        r3, 0x14
	  bl        -0x43E054
	  mr.       r27, r3
	  beq-      .loc_0x1C4
	  mr        r4, r29
	  bl        -0x43B750
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r4, 0x1650
	  stw       r0, 0x10(r27)
	  subi      r0, r3, 0x168C
	  stw       r0, 0x10(r27)

	.loc_0x1C4:
	  stw       r27, 0x8C(r26)
	  b         .loc_0x20C

	.loc_0x1CC:
	  li        r3, 0x14
	  bl        -0x43E08C
	  mr.       r27, r3
	  beq-      .loc_0x208
	  mr        r4, r29
	  bl        -0x43B788
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  subi      r0, r3, 0x1650
	  lis       r3, 0x804F
	  stw       r0, 0x10(r27)
	  subi      r4, r4, 0x168C
	  subi      r0, r3, 0x16AC
	  stw       r4, 0x10(r27)
	  stw       r0, 0x10(r27)

	.loc_0x208:
	  stw       r27, 0x8C(r26)

	.loc_0x20C:
	  mr        r3, r26
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80461F84
 * Size:	000148
 */
void PSM::Otakara::~Otakara()
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
	  beq-      .loc_0x12C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x78
	  subi      r4, r3, 0x17DC
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x78
	  subi      r0, r3, 0x166C
	  stw       r0, 0x88(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x78
	  subi      r0, r3, 0x1650
	  stw       r0, 0x88(r30)
	  beq-      .loc_0x78
	  addi      r3, r30, 0x78
	  li        r4, 0
	  bl        -0x43B828

	.loc_0x78:
	  cmplwi    r30, 0
	  beq-      .loc_0x11C
	  lis       r3, 0x804B
	  addi      r4, r3, 0x21A4
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x11C
	  lis       r4, 0x804F
	  addi      r3, r30, 0x30
	  subi      r6, r4, 0xEBC
	  li        r4, 0
	  stw       r6, 0x28(r30)
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r5, 0x10(r30)
	  stw       r0, 0x30(r30)
	  bl        -0x3A8468
	  cmplwi    r30, 0
	  beq-      .loc_0x11C
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0x11C
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x445054
	  cmplwi    r30, 0
	  beq-      .loc_0x11C
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x43B8CC

	.loc_0x11C:
	  extsh.    r0, r31
	  ble-      .loc_0x12C
	  mr        r3, r30
	  bl        -0x43DFF8

	.loc_0x12C:
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
 * Address:	804620CC
 * Size:	0001D4
 */
void PSM::PelletItem::PelletItem(Game::PelletItem::Object*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r3
	  mr        r31, r27
	  mr        r30, r4
	  mr        r29, r31
	  mr        r26, r31
	  mr        r28, r31
	  mr        r4, r31
	  bl        -0x43B940
	  addi      r3, r28, 0x10
	  bl        -0x445134
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xDD0
	  cmplwi    r30, 0
	  stw       r4, 0x28(r28)
	  addi      r0, r4, 0x8
	  subi      r3, r3, 0xE34
	  stw       r0, 0x10(r28)
	  addi      r0, r3, 0x8
	  stw       r3, 0x28(r26)
	  stw       r0, 0x10(r26)
	  stw       r30, 0x2C(r26)
	  bne-      .loc_0x88
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x61
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x437B10

	.loc_0x88:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x62
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x437B38

	.loc_0xB0:
	  mr        r3, r30
	  lwz       r28, -0x77D4(r13)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r5, r28
	  addi      r3, r31, 0x30
	  li        r6, 0x2
	  bl        -0x3A86B8
	  lis       r3, 0x804F
	  lis       r4, 0x804B
	  subi      r5, r3, 0xEBC
	  lis       r3, 0x804F
	  stw       r5, 0x28(r31)
	  addi      r4, r4, 0x21A4
	  addi      r0, r5, 0x8
	  subi      r7, r3, 0x17DC
	  stw       r0, 0x10(r31)
	  addi      r0, r5, 0x40
	  addi      r28, r29, 0x78
	  addi      r9, r4, 0x8
	  stw       r0, 0x30(r31)
	  addi      r8, r4, 0x40
	  addi      r6, r7, 0x8
	  addi      r5, r7, 0x40
	  stw       r4, 0x28(r31)
	  li        r0, 0
	  mr        r3, r28
	  mr        r4, r30
	  stw       r9, 0x10(r31)
	  stw       r8, 0x30(r31)
	  stw       r7, 0x28(r29)
	  stw       r6, 0x10(r29)
	  stw       r5, 0x30(r29)
	  stw       r0, 0x70(r29)
	  stw       r0, 0x74(r29)
	  bl        -0x43BA5C
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  subi      r0, r3, 0x1650
	  lis       r3, 0x804F
	  stw       r0, 0x10(r28)
	  subi      r5, r3, 0x190C
	  subi      r0, r4, 0x166C
	  li        r6, 0
	  stw       r0, 0x10(r28)
	  addi      r4, r5, 0x8
	  addi      r0, r5, 0x40
	  li        r3, 0x14
	  stw       r6, 0x8C(r29)
	  stw       r5, 0x28(r27)
	  stw       r4, 0x10(r27)
	  stw       r0, 0x30(r27)
	  bl        -0x43E3B4
	  mr.       r28, r3
	  beq-      .loc_0x1B8
	  mr        r4, r30
	  bl        -0x43BAB0
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r4, 0x1650
	  stw       r0, 0x10(r28)
	  subi      r0, r3, 0x168C
	  stw       r0, 0x10(r28)

	.loc_0x1B8:
	  stw       r28, 0x8C(r27)
	  mr        r3, r27
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804622A0
 * Size:	000148
 */
void PSM::Piki::Piki(Game::Piki*)
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
	  mr        r29, r31
	  stw       r28, 0x10(r1)
	  mr        r28, r31
	  bl        -0x43BB18
	  addi      r3, r29, 0x10
	  bl        -0x44530C
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xDD0
	  cmplwi    r30, 0
	  stw       r4, 0x28(r29)
	  addi      r0, r4, 0x8
	  subi      r3, r3, 0xE34
	  stw       r0, 0x10(r29)
	  addi      r0, r3, 0x8
	  stw       r3, 0x28(r28)
	  stw       r0, 0x10(r28)
	  stw       r30, 0x2C(r28)
	  bne-      .loc_0x8C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x61
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x437CE8

	.loc_0x8C:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xB4
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x62
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x437D10

	.loc_0xB4:
	  mr        r3, r30
	  lwz       r30, -0x77D4(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r5, r30
	  addi      r3, r31, 0x30
	  li        r6, 0x2
	  bl        -0x3A8890
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xEBC
	  li        r0, -0x1
	  stw       r4, 0x28(r31)
	  subi      r6, r3, 0x1994
	  addi      r3, r4, 0x8
	  addi      r7, r4, 0x40
	  stw       r3, 0x10(r31)
	  addi      r5, r6, 0x8
	  addi      r4, r6, 0x40
	  mr        r3, r31
	  stw       r7, 0x30(r31)
	  stw       r6, 0x28(r31)
	  stw       r5, 0x10(r31)
	  stw       r4, 0x30(r31)
	  stw       r0, 0x70(r31)
	  stw       r0, 0x74(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804623E8
 * Size:	000180
 */
void PSM::Piki::onCalcOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  subi      r30, r4, 0x3060
	  stw       r29, 0x14(r1)
	  lwz       r3, 0x70(r3)
	  cmpwi     r3, -0x1
	  beq-      .loc_0x38
	  addi      r0, r3, 0x1
	  stw       r0, 0x70(r31)

	.loc_0x38:
	  lwz       r3, 0x2C(r31)
	  lwz       r29, 0x74(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x21C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x15C
	  addis     r0, r29, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x70
	  li        r0, 0
	  stw       r0, 0x74(r31)
	  b         .loc_0x7C

	.loc_0x70:
	  lwz       r3, 0x74(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x74(r31)

	.loc_0x7C:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x9C
	  addi      r3, r30, 0x30
	  addi      r5, r30, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x437E40

	.loc_0x9C:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0xBC
	  addi      r3, r30, 0x30
	  addi      r5, r30, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x437E60

	.loc_0xBC:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xDC
	  addi      r3, r30, 0x3C
	  addi      r5, r30, 0x18
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x437E80

	.loc_0xDC:
	  lwz       r3, 0x4(r29)
	  lwz       r29, 0x4(r3)
	  cmplwi    r29, 0
	  bne-      .loc_0x100
	  addi      r3, r30, 0x3C
	  addi      r5, r30, 0x98
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x437EA4

	.loc_0x100:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x120
	  b         .loc_0x124

	.loc_0x120:
	  li        r29, 0

	.loc_0x124:
	  cmplwi    r29, 0
	  beq-      .loc_0x164
	  lwz       r29, 0x54(r29)
	  cmplwi    r29, 0
	  bne-      .loc_0x14C
	  addi      r3, r30, 0
	  addi      r5, r30, 0x18
	  li        r4, 0x884
	  crclr     6, 0x6
	  bl        -0x437EF0

	.loc_0x14C:
	  mr        r3, r29
	  mr        r4, r31
	  bl        0xBAB4
	  b         .loc_0x164

	.loc_0x15C:
	  li        r0, -0x1
	  stw       r0, 0x74(r31)

	.loc_0x164:
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
 * Address:	80462568
 * Size:	00000C
 */
void PSM::Piki::becomeFree()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x70(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80462574
 * Size:	00000C
 */
void PSM::Piki::becomeNotFree()
{
	/*
	.loc_0x0:
	  li        r0, -0x1
	  stw       r0, 0x70(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80462580
 * Size:	000144
 */
void PSM::Piki::startFreePikiSound(unsigned long, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  subi      r31, r7, 0x3060
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x48
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x437F84

	.loc_0x48:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x68
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x437FA4

	.loc_0x68:
	  lwz       r0, 0x8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x88
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x18
	  li        r4, 0xA1
	  crclr     6, 0x6
	  bl        -0x437FC4

	.loc_0x88:
	  lwz       r3, 0x8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  cmplwi    r27, 0x2834
	  bne-      .loc_0xB4
	  li        r3, 0
	  b         .loc_0x130

	.loc_0xB4:
	  mr        r3, r26
	  mr        r4, r27
	  bl        0x380
	  mr        r27, r3
	  addis     r0, r27, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0xD8
	  li        r3, 0
	  b         .loc_0x130

	.loc_0xD8:
	  lwz       r0, 0x70(r26)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x104
	  mr        r3, r26
	  mr        r4, r27
	  lwz       r12, 0x28(r26)
	  mr        r5, r29
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x130

	.loc_0x104:
	  cmpw      r0, r28
	  blt-      .loc_0x12C
	  mr        r3, r26
	  mr        r4, r27
	  lwz       r12, 0x28(r26)
	  mr        r5, r29
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x130

	.loc_0x12C:
	  li        r3, 0

	.loc_0x130:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804626C4
 * Size:	000070
 */
void PSM::Piki::startPikiSound(JAInter::Object*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r6
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  mr        r4, r5
	  bl        0x2D8
	  mr        r5, r3
	  addis     r0, r5, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x3C
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x3C:
	  mr        r3, r30
	  mr        r4, r5
	  lwz       r12, 0x0(r30)
	  mr        r5, r31
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58:
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
 * Address:	80462734
 * Size:	0000B4
 */
void PSM::Piki::startPikiSetSound(JAInter::Object*, unsigned long,
                                  PSGame::SeMgr::SetSeId, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r7
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  mr        r4, r29
	  bl        0x258
	  mr        r29, r3
	  addis     r0, r29, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0x94

	.loc_0x4C:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x74
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3030
	  li        r4, 0x237
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x438164

	.loc_0x74:
	  lwz       r3, -0x6E38(r13)
	  rlwinm    r0,r30,2,22,29
	  mr        r4, r28
	  mr        r5, r29
	  add       r3, r3, r0
	  mr        r6, r31
	  lwz       r3, 0x4(r3)
	  bl        -0x122F0C

	.loc_0x94:
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
 * Address:	804627E8
 * Size:	0001D4
 */
void PSM::Piki::startFreePikiSetSound(unsigned long, PSGame::SeMgr::SetSeId,
                                      unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r8, 0x804A
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r30, r5
	  mr        r28, r6
	  mr        r31, r7
	  subi      r29, r8, 0x3060
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r3, r29, 0x30
	  addi      r5, r29, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x4381F0

	.loc_0x4C:
	  lwz       r27, -0x6780(r13)
	  cmplwi    r27, 0
	  bne-      .loc_0x6C
	  addi      r3, r29, 0x30
	  addi      r5, r29, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x438210

	.loc_0x6C:
	  lwz       r0, 0x8(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  addi      r3, r29, 0x3C
	  addi      r5, r29, 0x18
	  li        r4, 0xA1
	  crclr     6, 0x6
	  bl        -0x438230

	.loc_0x8C:
	  lwz       r3, 0x8(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB8
	  cmplwi    r26, 0x2834
	  bne-      .loc_0xB8
	  li        r3, 0
	  b         .loc_0x1C0

	.loc_0xB8:
	  lwz       r0, 0x70(r25)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x13C
	  cmplwi    r25, 0
	  mr        r28, r25
	  beq-      .loc_0xD4
	  addi      r28, r25, 0x30

	.loc_0xD4:
	  mr        r3, r25
	  mr        r4, r26
	  bl        .loc_0x1D4
	  mr        r27, r3
	  addis     r0, r27, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0xF8
	  li        r3, 0
	  b         .loc_0x1C0

	.loc_0xF8:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x118
	  addi      r3, r29, 0x30
	  addi      r5, r29, 0x18
	  li        r4, 0x237
	  crclr     6, 0x6
	  bl        -0x4382BC

	.loc_0x118:
	  lwz       r3, -0x6E38(r13)
	  rlwinm    r0,r30,2,22,29
	  mr        r4, r28
	  mr        r5, r27
	  add       r3, r3, r0
	  mr        r6, r31
	  lwz       r3, 0x4(r3)
	  bl        -0x123064
	  b         .loc_0x1C0

	.loc_0x13C:
	  cmpw      r0, r28
	  blt-      .loc_0x1BC
	  cmplwi    r25, 0
	  mr        r27, r25
	  beq-      .loc_0x154
	  addi      r27, r25, 0x30

	.loc_0x154:
	  mr        r3, r25
	  mr        r4, r26
	  bl        .loc_0x1D4
	  mr        r28, r3
	  addis     r0, r28, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x178
	  li        r3, 0
	  b         .loc_0x1C0

	.loc_0x178:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x198
	  addi      r3, r29, 0x30
	  addi      r5, r29, 0x18
	  li        r4, 0x237
	  crclr     6, 0x6
	  bl        -0x43833C

	.loc_0x198:
	  lwz       r3, -0x6E38(r13)
	  rlwinm    r0,r30,2,22,29
	  mr        r4, r27
	  mr        r5, r28
	  add       r3, r3, r0
	  mr        r6, r31
	  lwz       r3, 0x4(r3)
	  bl        -0x1230E4
	  b         .loc_0x1C0

	.loc_0x1BC:
	  li        r3, 0

	.loc_0x1C0:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x1D4:
	*/
}

/*
 * --INFO--
 * Address:	804629BC
 * Size:	000104
 */
void PSM::Piki::checkHappaChappySE(unsigned long)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2C(r3)
	  lbz       r0, 0x2B8(r3)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x18
	  mr        r3, r4
	  blr

	.loc_0x18:
	  subi      r0, r4, 0x2800
	  cmplwi    r0, 0x7A
	  bgt-      .loc_0xF8
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x1C90
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r4, 0x2864
	  b         .loc_0xFC
	  li        r4, 0x2865
	  b         .loc_0xFC
	  li        r4, 0x286B
	  b         .loc_0xFC
	  li        r4, 0x2866
	  b         .loc_0xFC
	  li        r4, 0x2867
	  b         .loc_0xFC
	  li        r4, 0x286A
	  b         .loc_0xFC
	  li        r4, 0x286C
	  b         .loc_0xFC
	  li        r4, 0x286D
	  b         .loc_0xFC
	  li        r4, 0x286E
	  b         .loc_0xFC
	  li        r4, 0x2868
	  b         .loc_0xFC
	  li        r4, 0x2869
	  b         .loc_0xFC
	  li        r4, 0x286F
	  b         .loc_0xFC
	  li        r4, 0x2870
	  b         .loc_0xFC
	  li        r4, 0x2871
	  b         .loc_0xFC
	  li        r4, 0x2872
	  b         .loc_0xFC
	  li        r4, 0x2873
	  b         .loc_0xFC
	  li        r4, 0x2874
	  b         .loc_0xFC
	  li        r4, 0x2875
	  b         .loc_0xFC
	  li        r4, 0x2876
	  b         .loc_0xFC
	  li        r4, 0x2877
	  b         .loc_0xFC
	  li        r4, 0x2878
	  b         .loc_0xFC
	  li        r4, 0x2879
	  b         .loc_0xFC
	  li        r4, 0x287B
	  b         .loc_0xFC
	  b         .loc_0xFC

	.loc_0xF8:
	  li        r4, -0x1

	.loc_0xFC:
	  mr        r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80462AC0
 * Size:	000138
 */
void PSM::Navi::Navi(Game::Navi*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r29, r3
	  mr        r31, r4
	  mr        r4, r29
	  mr        r30, r4
	  mr        r27, r4
	  mr        r28, r4
	  bl        -0x43C330
	  addi      r3, r28, 0x10
	  bl        -0x445B24
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xDD0
	  cmplwi    r31, 0
	  stw       r4, 0x28(r28)
	  addi      r0, r4, 0x8
	  subi      r3, r3, 0xE34
	  stw       r0, 0x10(r28)
	  addi      r0, r3, 0x8
	  stw       r3, 0x28(r27)
	  stw       r0, 0x10(r27)
	  stw       r31, 0x2C(r27)
	  bne-      .loc_0x84
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x61
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x438500

	.loc_0x84:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x62
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x438528

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r31, -0x77D4(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r5, r31
	  addi      r3, r30, 0x30
	  li        r6, 0x2
	  bl        -0x3A90A8
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  subi      r6, r3, 0xEBC
	  addi      r3, r29, 0x70
	  stw       r6, 0x28(r30)
	  subi      r5, r4, 0x1A1C
	  addi      r0, r6, 0x8
	  addi      r6, r6, 0x40
	  stw       r0, 0x10(r30)
	  addi      r4, r5, 0x8
	  addi      r0, r5, 0x40
	  stw       r6, 0x30(r30)
	  stw       r5, 0x28(r29)
	  stw       r4, 0x10(r29)
	  stw       r0, 0x30(r29)
	  bl        -0x123710
	  li        r0, 0
	  mr        r3, r29
	  stw       r0, 0x90(r29)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80462BF8
 * Size:	000024
 */
void PSM::Navi::init(unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x70
	  stw       r0, 0x14(r1)
	  bl        -0x1236F4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80462C1C
 * Size:	000028
 */
void PSM::Navi::setShacho()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x89
	  addi      r3, r3, 0x70
	  stw       r0, 0x14(r1)
	  bl        -0x12367C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80462C44
 * Size:	000050
 */
void PSM::Navi::stopWaitVoice()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x90(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x90(r31)

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80462C94
 * Size:	000108
 */
void PSM::Navi::startSound(unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r5
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  cmpwi     r30, 0x897
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  bge-      .loc_0x4C
	  cmpwi     r30, 0x88D
	  bge-      .loc_0x40
	  cmpwi     r30, 0x80F
	  beq-      .loc_0x8C
	  b         .loc_0xB4

	.loc_0x40:
	  cmpwi     r30, 0x893
	  bge-      .loc_0xB4
	  b         .loc_0x60

	.loc_0x4C:
	  cmpwi     r30, 0x89D
	  beq-      .loc_0x60
	  bge-      .loc_0xB4
	  cmpwi     r30, 0x899
	  bge-      .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x90(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xB4
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x90(r29)
	  b         .loc_0xB4

	.loc_0x8C:
	  bl        .loc_0x108
	  mr        r4, r3
	  mr        r3, r29
	  lwz       r12, 0x28(r29)
	  addi      r4, r4, 0x890
	  li        r5, 0
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xEC

	.loc_0xB4:
	  stw       r29, 0x8(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  stw       r30, 0xC(r1)
	  stw       r31, 0x10(r1)
	  lwz       r12, 0x28(r29)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r30, 0x874
	  blt-      .loc_0xEC
	  cmplwi    r30, 0x888
	  bgt-      .loc_0xEC
	  stw       r3, 0x90(r29)

	.loc_0xEC:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x108:
	*/
}

/*
 * --INFO--
 * Address:	80462D9C
 * Size:	000028
 */
void PSM::Navi::getManType()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x88(r3)
	  cmplwi    r0, 0xD
	  bne-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  cmplwi    r0, 0xE
	  li        r3, 0x2
	  bnelr-
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80462DC4
 * Size:	0000A0
 */
void PSM::Navi::playShugoSE()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x88(r3)
	  cmplwi    r4, 0xD
	  bne-      .loc_0x20
	  li        r0, 0
	  b         .loc_0x34

	.loc_0x20:
	  cmplwi    r4, 0xE
	  bne-      .loc_0x30
	  li        r0, 0x1
	  b         .loc_0x34

	.loc_0x30:
	  li        r0, 0x2

	.loc_0x34:
	  cmpwi     r0, 0
	  bne-      .loc_0x44
	  li        r4, 0x7
	  b         .loc_0x7C

	.loc_0x44:
	  cmplwi    r4, 0xD
	  bne-      .loc_0x54
	  li        r5, 0
	  b         .loc_0x68

	.loc_0x54:
	  cmplwi    r4, 0xE
	  bne-      .loc_0x64
	  li        r5, 0x1
	  b         .loc_0x68

	.loc_0x64:
	  li        r5, 0x2

	.loc_0x68:
	  subi      r4, r5, 0x1
	  subfic    r0, r5, 0x1
	  nor       r0, r4, r0
	  srawi     r4, r0, 0x1F
	  addi      r4, r4, 0xA0

	.loc_0x7C:
	  lwz       r12, 0x28(r3)
	  li        r5, 0
	  lwz       r12, 0x7C(r12)
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
 * Address:	80462E64
 * Size:	0000A0
 */
void PSM::Navi::playKaisanSE()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x88(r3)
	  cmplwi    r4, 0xD
	  bne-      .loc_0x20
	  li        r0, 0
	  b         .loc_0x34

	.loc_0x20:
	  cmplwi    r4, 0xE
	  bne-      .loc_0x30
	  li        r0, 0x1
	  b         .loc_0x34

	.loc_0x30:
	  li        r0, 0x2

	.loc_0x34:
	  cmpwi     r0, 0
	  bne-      .loc_0x44
	  li        r4, 0x808
	  b         .loc_0x7C

	.loc_0x44:
	  cmplwi    r4, 0xD
	  bne-      .loc_0x54
	  li        r5, 0
	  b         .loc_0x68

	.loc_0x54:
	  cmplwi    r4, 0xE
	  bne-      .loc_0x64
	  li        r5, 0x1
	  b         .loc_0x68

	.loc_0x64:
	  li        r5, 0x2

	.loc_0x68:
	  subi      r4, r5, 0x1
	  subfic    r0, r5, 0x1
	  nor       r0, r4, r0
	  srawi     r4, r0, 0x1F
	  addi      r4, r4, 0x8A2

	.loc_0x7C:
	  lwz       r12, 0x28(r3)
	  li        r5, 0
	  lwz       r12, 0x7C(r12)
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
 * Address:	80462F04
 * Size:	000130
 */
void PSM::Navi::playWalkSound(PSM::Navi::FootType, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  rlwinm    r5,r5,1,0,30
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  add       r30, r4, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3030
	  li        r4, 0x237
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x43890C

	.loc_0x4C:
	  lwz       r3, 0x2C(r29)
	  lwz       r4, -0x6E38(r13)
	  lwz       r12, 0x0(r3)
	  addi      r31, r4, 0x24
	  lwz       r12, 0x21C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x98
	  lwz       r3, 0x90(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x90(r29)

	.loc_0x98:
	  lfs       f0, 0x2928(r2)
	  cmplwi    r29, 0
	  mr        r4, r29
	  stfs      f0, 0x0(r31)
	  beq-      .loc_0xB0
	  addi      r4, r29, 0x30

	.loc_0xB0:
	  mr        r3, r31
	  mr        r5, r30
	  li        r6, 0x2
	  li        r7, 0
	  bl        -0x123524
	  lfs       f0, -0x7AB8(r13)
	  cmplwi    r3, 0
	  stfs      f0, 0x0(r31)
	  beq-      .loc_0x114
	  lwz       r0, 0x88(r29)
	  cmplwi    r0, 0xD
	  bne-      .loc_0xE8
	  li        r0, 0
	  b         .loc_0xFC

	.loc_0xE8:
	  cmplwi    r0, 0xE
	  bne-      .loc_0xF8
	  li        r0, 0x1
	  b         .loc_0xFC

	.loc_0xF8:
	  li        r0, 0x2

	.loc_0xFC:
	  lwz       r12, 0x10(r3)
	  rlwinm    r5,r0,0,16,31
	  li        r4, 0xA
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x114:
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
 * Address:	80463034
 * Size:	000158
 */
void PSM::Cluster::Cluster(Game::Creature*, PSSystem::ClusterSe::Factory&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r28, r3
	  mr        r30, r4
	  mr        r31, r5
	  mr        r4, r28
	  mr        r29, r4
	  mr        r26, r4
	  mr        r27, r4
	  bl        -0x43C8A8
	  addi      r3, r27, 0x10
	  bl        -0x44609C
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0xDD0
	  cmplwi    r30, 0
	  stw       r4, 0x28(r27)
	  addi      r0, r4, 0x8
	  subi      r3, r3, 0xE34
	  stw       r0, 0x10(r27)
	  addi      r0, r3, 0x8
	  stw       r3, 0x28(r26)
	  stw       r0, 0x10(r26)
	  stw       r30, 0x2C(r26)
	  bne-      .loc_0x88
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x61
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x438A78

	.loc_0x88:
	  lwz       r0, -0x6E44(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x3060
	  li        r4, 0x62
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x438AA0

	.loc_0xB0:
	  mr        r3, r30
	  lwz       r30, -0x77D4(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r5, r30
	  addi      r3, r29, 0x30
	  li        r6, 0x2
	  bl        -0x3A9620
	  lis       r3, 0x804F
	  lis       r4, 0x804F
	  subi      r6, r3, 0xEBC
	  li        r3, 0x8
	  stw       r6, 0x28(r29)
	  subi      r5, r4, 0x1AA4
	  addi      r0, r6, 0x8
	  addi      r6, r6, 0x40
	  stw       r0, 0x10(r29)
	  addi      r4, r5, 0x8
	  addi      r0, r5, 0x40
	  stw       r6, 0x30(r29)
	  stw       r5, 0x28(r28)
	  stw       r4, 0x10(r28)
	  stw       r0, 0x30(r28)
	  bl        -0x43F2A8
	  cmplwi    r3, 0
	  beq-      .loc_0x130
	  li        r0, 0
	  stb       r0, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x130:
	  stw       r3, 0x70(r28)
	  mr        r4, r31
	  lwz       r3, 0x70(r28)
	  bl        -0x12214C
	  mr        r3, r28
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046318C
 * Size:	000060
 */
void PSM::Cluster::startClusterSound(unsigned char)
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
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r30, 0
	  mr        r5, r30
	  beq-      .loc_0x3C
	  addi      r5, r30, 0x30

	.loc_0x3C:
	  lwz       r3, 0x70(r30)
	  mr        r4, r31
	  bl        -0x121EF8
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
 * Address:	804631EC
 * Size:	000058
 */
void PSSetCurCameraNo(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, -0x6E4C(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x2FA4
	  li        r4, 0x89
	  subi      r5, r5, 0x3048
	  crclr     6, 0x6
	  bl        -0x438BE4

	.loc_0x3C:
	  lwz       r3, -0x6E4C(r13)
	  stb       r31, 0x8(r3)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463244
 * Size:	000008
 */
void PSMGetNoukouDist()
{
	/*
	.loc_0x0:
	  lfs       f1, 0x2AB8(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8046324C
 * Size:	000070
 */
void PSSetLastBeedamaDirection(bool, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r3,0,24,31
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  beq-      .loc_0x24
	  bl        -0xA208
	  b         .loc_0x28

	.loc_0x24:
	  bl        -0xA120

	.loc_0x28:
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5C

	.loc_0x4C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804632BC
 * Size:	0000E8
 */
void PSM::Cluster::~Cluster()
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
	  beq-      .loc_0xCC
	  lis       r3, 0x804F
	  subi      r4, r3, 0x1AA4
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804F
	  addi      r3, r30, 0x30
	  subi      r6, r4, 0xEBC
	  li        r4, 0
	  stw       r6, 0x28(r30)
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r5, 0x10(r30)
	  stw       r0, 0x30(r30)
	  bl        -0x3A9740
	  cmplwi    r30, 0
	  beq-      .loc_0xBC
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x44632C
	  cmplwi    r30, 0
	  beq-      .loc_0xBC
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x43CBA4

	.loc_0xBC:
	  extsh.    r0, r31
	  ble-      .loc_0xCC
	  mr        r3, r30
	  bl        -0x43F2D0

	.loc_0xCC:
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
 * Address:	804633A4
 * Size:	000008
 */
void PSM::SceneBase::getSeSceneGate(PSM::ObjBase*, unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804633AC
 * Size:	000008
 */
void PSM::SceneBase::isDemoScene()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804633B4
 * Size:	000004
 */
void PSM::EnemyBoss::onDisappear()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804633B8
 * Size:	000004
 */
void PSM::EnemyBoss::onAppear()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804633BC
 * Size:	000004
 */
void PSM::EnemyBoss::onAppear1st()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804633C0
 * Size:	000008
 */
void PSM::Navi::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0xF
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804633C8
 * Size:	0000E8
 */
void PSM::Piki::~Piki()
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
	  beq-      .loc_0xCC
	  lis       r3, 0x804F
	  subi      r4, r3, 0x1994
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804F
	  addi      r3, r30, 0x30
	  subi      r6, r4, 0xEBC
	  li        r4, 0
	  stw       r6, 0x28(r30)
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r5, 0x10(r30)
	  stw       r0, 0x30(r30)
	  bl        -0x3A984C
	  cmplwi    r30, 0
	  beq-      .loc_0xBC
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x446438
	  cmplwi    r30, 0
	  beq-      .loc_0xBC
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x43CCB0

	.loc_0xBC:
	  extsh.    r0, r31
	  ble-      .loc_0xCC
	  mr        r3, r30
	  bl        -0x43F3DC

	.loc_0xCC:
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
 * Address:	804634B0
 * Size:	000008
 */
void PSM::Piki::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0xE
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804634B8
 * Size:	000168
 */
void PSM::PelletItem::~PelletItem()
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
	  beq-      .loc_0x14C
	  lis       r3, 0x804F
	  subi      r4, r3, 0x190C
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x13C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x78
	  subi      r4, r3, 0x17DC
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x78
	  subi      r0, r3, 0x166C
	  stw       r0, 0x88(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x78
	  subi      r0, r3, 0x1650
	  stw       r0, 0x88(r30)
	  beq-      .loc_0x98
	  addi      r3, r30, 0x78
	  li        r4, 0
	  bl        -0x43CD7C

	.loc_0x98:
	  cmplwi    r30, 0
	  beq-      .loc_0x13C
	  lis       r3, 0x804B
	  addi      r4, r3, 0x21A4
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x13C
	  lis       r4, 0x804F
	  addi      r3, r30, 0x30
	  subi      r6, r4, 0xEBC
	  li        r4, 0
	  stw       r6, 0x28(r30)
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r5, 0x10(r30)
	  stw       r0, 0x30(r30)
	  bl        -0x3A99BC
	  cmplwi    r30, 0
	  beq-      .loc_0x13C
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0x13C
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x4465A8
	  cmplwi    r30, 0
	  beq-      .loc_0x13C
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x43CE20

	.loc_0x13C:
	  extsh.    r0, r31
	  ble-      .loc_0x14C
	  mr        r3, r30
	  bl        -0x43F54C

	.loc_0x14C:
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
 * Address:	80463620
 * Size:	000008
 */
void PSM::PelletItem::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0xD
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463628
 * Size:	000168
 */
void PSM::PelletOtakara::~PelletOtakara()
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
	  beq-      .loc_0x14C
	  lis       r3, 0x804F
	  subi      r4, r3, 0x1874
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x13C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x78
	  subi      r4, r3, 0x17DC
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x78
	  subi      r0, r3, 0x166C
	  stw       r0, 0x88(r30)
	  beq-      .loc_0x98
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x78
	  subi      r0, r3, 0x1650
	  stw       r0, 0x88(r30)
	  beq-      .loc_0x98
	  addi      r3, r30, 0x78
	  li        r4, 0
	  bl        -0x43CEEC

	.loc_0x98:
	  cmplwi    r30, 0
	  beq-      .loc_0x13C
	  lis       r3, 0x804B
	  addi      r4, r3, 0x21A4
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x13C
	  lis       r4, 0x804F
	  addi      r3, r30, 0x30
	  subi      r6, r4, 0xEBC
	  li        r4, 0
	  stw       r6, 0x28(r30)
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r5, 0x10(r30)
	  stw       r0, 0x30(r30)
	  bl        -0x3A9B2C
	  cmplwi    r30, 0
	  beq-      .loc_0x13C
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0x13C
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x446718
	  cmplwi    r30, 0
	  beq-      .loc_0x13C
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x43CF90

	.loc_0x13C:
	  extsh.    r0, r31
	  ble-      .loc_0x14C
	  mr        r3, r30
	  bl        -0x43F6BC

	.loc_0x14C:
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
 * Address:	80463790
 * Size:	000008
 */
void PSM::PelletOtakara::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0xC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463798
 * Size:	000008
 */
void PSM::Otakara::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0xB
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804637A0
 * Size:	000148
 */
void PSM::WorkItem::~WorkItem()
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
	  beq-      .loc_0x12C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x70
	  subi      r4, r3, 0x1744
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x70
	  subi      r0, r3, 0x166C
	  stw       r0, 0x80(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x70
	  subi      r0, r3, 0x1650
	  stw       r0, 0x80(r30)
	  beq-      .loc_0x78
	  addi      r3, r30, 0x70
	  li        r4, 0
	  bl        -0x43D044

	.loc_0x78:
	  cmplwi    r30, 0
	  beq-      .loc_0x11C
	  lis       r3, 0x804B
	  addi      r4, r3, 0x21A4
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x11C
	  lis       r4, 0x804F
	  addi      r3, r30, 0x30
	  subi      r6, r4, 0xEBC
	  li        r4, 0
	  stw       r6, 0x28(r30)
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r5, 0x10(r30)
	  stw       r0, 0x30(r30)
	  bl        -0x3A9C84
	  cmplwi    r30, 0
	  beq-      .loc_0x11C
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0x11C
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x446870
	  cmplwi    r30, 0
	  beq-      .loc_0x11C
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x43D0E8

	.loc_0x11C:
	  extsh.    r0, r31
	  ble-      .loc_0x12C
	  mr        r3, r30
	  bl        -0x43F814

	.loc_0x12C:
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
 * Address:	804638E8
 * Size:	000008
 */
void PSM::WorkItem::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0xA
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804638F0
 * Size:	000008
 */
void PSM::OtakaraEventLink_2PBattle::is2PBattle()
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804638F8
 * Size:	0001C0
 */
void PSM::Enemy_SpecialChappy::~Enemy_SpecialChappy()
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
	  beq-      .loc_0x1A4
	  lis       r3, 0x804F
	  subi      r5, r3, 0x1634
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0x194
	  lis       r3, 0x804F
	  subi      r5, r3, 0x1290
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0x194
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xCC
	  subi      r5, r3, 0x1054
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0xD4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xCC
	  subi      r0, r3, 0xF80
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0xD4
	  addi      r3, r30, 0xCC
	  li        r4, 0
	  bl        -0x43D1F8

	.loc_0xD4:
	  addic.    r0, r30, 0xB8
	  beq-      .loc_0xFC
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xB8
	  subi      r0, r3, 0xF70
	  stw       r0, 0xC8(r30)
	  beq-      .loc_0xFC
	  addi      r3, r30, 0xB8
	  li        r4, 0
	  bl        -0x43D220

	.loc_0xFC:
	  cmplwi    r30, 0
	  beq-      .loc_0x194
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x30
	  subi      r4, r3, 0xF60
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x140
	  lis       r4, 0x804A
	  addi      r3, r30, 0x30
	  addi      r0, r4, 0x6200
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        -0x3A9E54

	.loc_0x140:
	  cmplwi    r30, 0
	  beq-      .loc_0x194
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0x194
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x446A40
	  cmplwi    r30, 0
	  beq-      .loc_0x194
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x43D2B8

	.loc_0x194:
	  extsh.    r0, r31
	  ble-      .loc_0x1A4
	  mr        r3, r30
	  bl        -0x43F9E4

	.loc_0x1A4:
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
 * Address:	80463AB8
 * Size:	000008
 */
void PSM::EnemyBig::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0x8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463AC0
 * Size:	000008
 */
void PSM::EnemyBigBoss::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0x7
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463AC8
 * Size:	000008
 */
void PSM::EnemyMidBoss::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0x6
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463AD0
 * Size:	000008
 */
void PSM::EnemyBoss::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0x4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463AD8
 * Size:	000100
 */
void PSM::Tsuyukusa::~Tsuyukusa()
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
	  beq-      .loc_0xE4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x74
	  subi      r4, r3, 0x11BC
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x50
	  addi      r3, r30, 0x74
	  li        r4, 0
	  bl        -0x43D354

	.loc_0x50:
	  cmplwi    r30, 0
	  beq-      .loc_0xD4
	  lis       r4, 0x804F
	  addi      r3, r30, 0x30
	  subi      r6, r4, 0xEBC
	  li        r4, 0
	  stw       r6, 0x28(r30)
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r5, 0x10(r30)
	  stw       r0, 0x30(r30)
	  bl        -0x3A9F74
	  cmplwi    r30, 0
	  beq-      .loc_0xD4
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x446B60
	  cmplwi    r30, 0
	  beq-      .loc_0xD4
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x43D3D8

	.loc_0xD4:
	  extsh.    r0, r31
	  ble-      .loc_0xE4
	  mr        r3, r30
	  bl        -0x43FB04

	.loc_0xE4:
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
 * Address:	80463BD8
 * Size:	000190
 */
void PSM::EnemyNotAggressive::~EnemyNotAggressive()
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
	  beq-      .loc_0x174
	  lis       r3, 0x804F
	  subi      r5, r3, 0x1134
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0x164
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xCC
	  subi      r5, r3, 0x1054
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0xA4
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xCC
	  subi      r0, r3, 0xF80
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0xA4
	  addi      r3, r30, 0xCC
	  li        r4, 0
	  bl        -0x43D4A8

	.loc_0xA4:
	  addic.    r0, r30, 0xB8
	  beq-      .loc_0xCC
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xB8
	  subi      r0, r3, 0xF70
	  stw       r0, 0xC8(r30)
	  beq-      .loc_0xCC
	  addi      r3, r30, 0xB8
	  li        r4, 0
	  bl        -0x43D4D0

	.loc_0xCC:
	  cmplwi    r30, 0
	  beq-      .loc_0x164
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x30
	  subi      r4, r3, 0xF60
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x110
	  lis       r4, 0x804A
	  addi      r3, r30, 0x30
	  addi      r0, r4, 0x6200
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        -0x3AA104

	.loc_0x110:
	  cmplwi    r30, 0
	  beq-      .loc_0x164
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0x164
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x446CF0
	  cmplwi    r30, 0
	  beq-      .loc_0x164
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x43D568

	.loc_0x164:
	  extsh.    r0, r31
	  ble-      .loc_0x174
	  mr        r3, r30
	  bl        -0x43FC94

	.loc_0x174:
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
 * Address:	80463D68
 * Size:	000008
 */
void PSM::EnemyNotAggressive::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0x9
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463D70
 * Size:	000004
 */
void PSM::EnemyNotAggressive::updateKehai()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463D74
 * Size:	000004
 */
void PSM::EnemyNotAggressive::updateBattle()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463D78
 * Size:	000004
 */
void PSM::EnemyNotAggressive::battleOff()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463D7C
 * Size:	000004
 */
void PSM::EnemyNotAggressive::battleOn()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463D80
 * Size:	000004
 */
void PSM::EnemyNotAggressive::kehaiOff()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463D84
 * Size:	000004
 */
void PSM::EnemyNotAggressive::kehaiOn()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463D88
 * Size:	000008
 */
void PSM::CreatureAnime::getCastType()
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80463D90
 * Size:	0000F8
 */
void PSM::Navi::~Navi()
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
	  beq-      .loc_0xDC
	  lis       r4, 0x804F
	  addi      r3, r30, 0x70
	  subi      r6, r4, 0x1A1C
	  li        r4, -0x1
	  stw       r6, 0x28(r30)
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r5, 0x10(r30)
	  stw       r0, 0x30(r30)
	  bl        -0x124818
	  cmplwi    r30, 0
	  beq-      .loc_0xCC
	  lis       r4, 0x804F
	  addi      r3, r30, 0x30
	  subi      r6, r4, 0xEBC
	  li        r4, 0
	  stw       r6, 0x28(r30)
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r5, 0x10(r30)
	  stw       r0, 0x30(r30)
	  bl        -0x3AA224
	  cmplwi    r30, 0
	  beq-      .loc_0xCC
	  lis       r3, 0x804F
	  subi      r3, r3, 0xE34
	  stw       r3, 0x28(r30)
	  addi      r0, r3, 0x8
	  stw       r0, 0x10(r30)
	  beq-      .loc_0xCC
	  lis       r4, 0x804F
	  addi      r3, r30, 0x10
	  subi      r5, r4, 0xDD0
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        -0x446E10
	  cmplwi    r30, 0
	  beq-      .loc_0xCC
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x43D688

	.loc_0xCC:
	  extsh.    r0, r31
	  ble-      .loc_0xDC
	  mr        r3, r30
	  bl        -0x43FDB4

	.loc_0xDC:
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
 * Address:	80463E88
 * Size:	000008
 */
void PSM::ObjBase::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x7028
	*/
}

/*
 * --INFO--
 * Address:	80463E90
 * Size:	000008
 */
void PSM::ObjMgr::@12 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0xC
	  b         -0x6F64
	*/
}

/*
 * --INFO--
 * Address:	80463E98
 * Size:	000008
 */
void PSM::ObjMgr::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x6F6C
	*/
}

/*
 * --INFO--
 * Address:	80463EA0
 * Size:	000008
 */
void PSM::Creature::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x65F4
	*/
}

/*
 * --INFO--
 * Address:	80463EA8
 * Size:	000008
 */
void PSM::CreatureObj::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x2FD610
	*/
}

/*
 * --INFO--
 * Address:	80463EB0
 * Size:	000008
 */
void PSM::CreatureObj::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x2FD618
	*/
}

/*
 * --INFO--
 * Address:	80463EB8
 * Size:	000008
 */
void PSM::CreatureAnime::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x58F8
	*/
}

/*
 * --INFO--
 * Address:	80463EC0
 * Size:	000008
 */
void PSM::CreatureAnime::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x5900
	*/
}

/*
 * --INFO--
 * Address:	80463EC8
 * Size:	000008
 */
void PSM::CreatureAnime::@48
    @startAnimSound(unsigned long, JAISound**, JAInter::Actor*, unsigned char)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x63C8
	*/
}

/*
 * --INFO--
 * Address:	80463ED0
 * Size:	000008
 */
void PSM::EnemyBase::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x35CE04
	*/
}

/*
 * --INFO--
 * Address:	80463ED8
 * Size:	000008
 */
void PSM::EnemyBase::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x35CE0C
	*/
}

/*
 * --INFO--
 * Address:	80463EE0
 * Size:	000008
 */
void PSM::EnemyNotAggressive::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x30C
	*/
}

/*
 * --INFO--
 * Address:	80463EE8
 * Size:	000008
 */
void PSM::EnemyNotAggressive::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x314
	*/
}

/*
 * --INFO--
 * Address:	80463EF0
 * Size:	000008
 */
void PSM::EnemyNotAggressive::@184 @battleOff()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0xB8
	  b         -0x17C
	*/
}

/*
 * --INFO--
 * Address:	80463EF8
 * Size:	000008
 */
void PSM::EnemyNotAggressive::@184 @battleOn()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0xB8
	  b         -0x180
	*/
}

/*
 * --INFO--
 * Address:	80463F00
 * Size:	000008
 */
void PSM::EnemyNotAggressive::@204 @kehaiOff()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0xCC
	  b         -0x184
	*/
}

/*
 * --INFO--
 * Address:	80463F08
 * Size:	000008
 */
void PSM::EnemyNotAggressive::@204 @kehaiOn()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0xCC
	  b         -0x188
	*/
}

/*
 * --INFO--
 * Address:	80463F10
 * Size:	000008
 */
void PSM::Tsuyukusa::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x43C
	*/
}

/*
 * --INFO--
 * Address:	80463F18
 * Size:	000008
 */
void PSM::Tsuyukusa::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x444
	*/
}

/*
 * --INFO--
 * Address:	80463F20
 * Size:	000008
 */
void PSM::EnemyBig::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x35CFB8
	*/
}

/*
 * --INFO--
 * Address:	80463F28
 * Size:	000008
 */
void PSM::EnemyBig::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x35CFC0
	*/
}

/*
 * --INFO--
 * Address:	80463F30
 * Size:	000008
 */
void PSM::EnemyBoss::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x3D64
	*/
}

/*
 * --INFO--
 * Address:	80463F38
 * Size:	000008
 */
void PSM::EnemyBoss::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x3D6C
	*/
}

/*
 * --INFO--
 * Address:	80463F40
 * Size:	000008
 */
void PSM::EnemyMidBoss::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x36F0
	*/
}

/*
 * --INFO--
 * Address:	80463F48
 * Size:	000008
 */
void PSM::EnemyMidBoss::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x36F8
	*/
}

/*
 * --INFO--
 * Address:	80463F50
 * Size:	000008
 */
void PSM::EnemyBigBoss::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x3510
	*/
}

/*
 * --INFO--
 * Address:	80463F58
 * Size:	000008
 */
void PSM::EnemyBigBoss::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x3518
	*/
}

/*
 * --INFO--
 * Address:	80463F60
 * Size:	000008
 */
void PSM::Enemy_SpecialChappy::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x66C
	*/
}

/*
 * --INFO--
 * Address:	80463F68
 * Size:	000008
 */
void PSM::Enemy_SpecialChappy::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x674
	*/
}

/*
 * --INFO--
 * Address:	80463F70
 * Size:	000008
 */
void PSM::WorkItem::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x7D4
	*/
}

/*
 * --INFO--
 * Address:	80463F78
 * Size:	000008
 */
void PSM::WorkItem::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x7DC
	*/
}

/*
 * --INFO--
 * Address:	80463F80
 * Size:	000008
 */
void PSM::Otakara::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x2000
	*/
}

/*
 * --INFO--
 * Address:	80463F88
 * Size:	000008
 */
void PSM::Otakara::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x2008
	*/
}

/*
 * --INFO--
 * Address:	80463F90
 * Size:	000008
 */
void PSM::PelletOtakara::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x96C
	*/
}

/*
 * --INFO--
 * Address:	80463F98
 * Size:	000008
 */
void PSM::PelletOtakara::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x974
	*/
}

/*
 * --INFO--
 * Address:	80463FA0
 * Size:	000008
 */
void PSM::PelletItem::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0xAEC
	*/
}

/*
 * --INFO--
 * Address:	80463FA8
 * Size:	000008
 */
void PSM::PelletItem::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0xAF4
	*/
}

/*
 * --INFO--
 * Address:	80463FB0
 * Size:	000008
 */
void PSM::Piki::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0xBEC
	*/
}

/*
 * --INFO--
 * Address:	80463FB8
 * Size:	000008
 */
void PSM::Piki::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0xBF4
	*/
}

/*
 * --INFO--
 * Address:	80463FC0
 * Size:	000008
 */
void PSM::Navi::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x234
	*/
}

/*
 * --INFO--
 * Address:	80463FC8
 * Size:	000008
 */
void PSM::Navi::@48 @startSound(unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x1338
	*/
}

/*
 * --INFO--
 * Address:	80463FD0
 * Size:	000008
 */
void PSM::Navi::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x244
	*/
}

/*
 * --INFO--
 * Address:	80463FD8
 * Size:	000008
 */
void PSM::Cluster::@16 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0xD20
	*/
}

/*
 * --INFO--
 * Address:	80463FE0
 * Size:	000008
 */
void PSM::Cluster::@48 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0xD28
	*/
}
