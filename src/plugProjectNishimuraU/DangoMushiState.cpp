

/*
 * --INFO--
 * Address:	802F9A8C
 * Size:	000320
 */
void Game::DangoMushi::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x9
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1C9240
	  li        r3, 0x10
	  bl        -0x2D5C08
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x5FB0
	  subi      r5, r2, 0x1068
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x5F8C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x1C91EC
	  li        r3, 0x10
	  bl        -0x2D5C58
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x5FB0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1060
	  addi      r0, r3, 0x5F68
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x1C9240
	  li        r3, 0x10
	  bl        -0x2D5CAC
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x5FB0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1058
	  addi      r0, r3, 0x5F44
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x1C9294
	  li        r3, 0x10
	  bl        -0x2D5D00
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x5FB0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1050
	  addi      r0, r3, 0x5F20
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x1C92E8
	  li        r3, 0x10
	  bl        -0x2D5D54
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x5FB0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1048
	  addi      r0, r3, 0x5EFC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x1C933C
	  li        r3, 0x10
	  bl        -0x2D5DA8
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x5FB0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1040
	  addi      r0, r3, 0x5ED8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x1C9390
	  li        r3, 0x10
	  bl        -0x2D5DFC
	  mr.       r4, r3
	  beq-      .loc_0x25C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0x5FB0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1038
	  addi      r0, r3, 0x5EB4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x25C:
	  mr        r3, r31
	  bl        -0x1C93E4
	  li        r3, 0x10
	  bl        -0x2D5E50
	  mr.       r4, r3
	  beq-      .loc_0x2B0
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  addi      r6, r5, 0x5FB0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1030
	  addi      r0, r3, 0x5E90
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B0:
	  mr        r3, r31
	  bl        -0x1C9438
	  li        r3, 0x10
	  bl        -0x2D5EA4
	  mr.       r4, r3
	  beq-      .loc_0x304
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x5FB0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x1028
	  addi      r0, r3, 0x5E6C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x304:
	  mr        r3, r31
	  bl        -0x1C948C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F9DAC
 * Size:	000088
 */
void Game::DangoMushi::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r5
	  stb       r0, 0x2C2(r4)
	  bl        -0x1F46B4
	  lfs       f0, -0x1020(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1F8470
	  cmplwi    r30, 0
	  beq-      .loc_0x60
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0x1
	  bl        0x4844
	  b         .loc_0x70

	.loc_0x60:
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  bl        0x4830

	.loc_0x70:
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
 * Address:	802F9E34
 * Size:	00013C
 */
void Game::DangoMushi::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1F4BE0
	  lfs       f0, -0x101C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x6C
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r5, r1, 0x2C
	  lfs       f1, 0x18(r1)
	  li        r4, 0x6
	  lfs       f0, 0x1C(r1)
	  li        r6, 0x2
	  stfs      f2, 0x2C(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        -0xA7C60

	.loc_0x6C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0x94
	  mr        r3, r31
	  bl        0x48A4
	  b         .loc_0x128

	.loc_0x94:
	  cmplwi    r0, 0x2
	  bne-      .loc_0xA8
	  mr        r3, r31
	  bl        0x4FC8
	  b         .loc_0x128

	.loc_0xA8:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x114
	  mr        r3, r31
	  bl        0x5030
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x20
	  lfs       f1, 0xC(r1)
	  li        r4, 0x1A
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x20(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0xA7CF0
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x20
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0xA67C0
	  b         .loc_0x128

	.loc_0x114:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x128
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1BEE68

	.loc_0x128:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F9F70
 * Size:	000004
 */
void Game::DangoMushi::StateDead::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F9F74
 * Size:	000094
 */
void Game::DangoMushi::StateStay::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1020(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2CC(r4)
	  li        r0, 0
	  stfs      f0, 0x2C4(r4)
	  stb       r0, 0x2C2(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  bl        -0x1F2840
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x1020(r2)
	  li        r4, 0
	  oris      r0, r0, 0x4000
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x4660
	  mr        r3, r31
	  bl        -0x1F2D10
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FA008
 * Size:	000144
 */
void Game::DangoMushi::StateStay::exec(Game::EnemyBase*)
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
	  lfs       f0, -0x1020(r2)
	  mr        r31, r4
	  lfs       f1, 0x2C8(r4)
	  mr        r30, r3
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x68
	  mr        r3, r31
	  bl        0x2E3C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x124
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x124

	.loc_0x68:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  lfs       f31, 0x3AC(r5)
	  fmr       f1, f31
	  bl        -0x1E55C4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  li        r0, 0x1
	  b         .loc_0xB4

	.loc_0x90:
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1E5970
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB0
	  li        r0, 0x1
	  b         .loc_0xB4

	.loc_0xB0:
	  li        r0, 0

	.loc_0xB4:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x124
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0xB8420
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x597D
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x2D7C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x124
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x124:
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
 * Address:	802FA14C
 * Size:	000004
 */
void Game::DangoMushi::StateStay::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FA150
 * Size:	00008C
 */
void Game::DangoMushi::StateAppear::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1020(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2CC(r4)
	  li        r0, 0
	  stfs      f0, 0x2C4(r4)
	  stb       r0, 0x2C2(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  bl        -0x1F2A1C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x1020(r2)
	  li        r4, 0
	  rlwinm    r0,r0,0,2,0
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x4484
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FA1DC
 * Size:	000400
 */
void Game::DangoMushi::StateAppear::exec(Game::EnemyBase*)
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
	  stfd      f29, 0xF0(r1)
	  psq_st    f29,0xF8(r1),0,0
	  stfd      f28, 0xE0(r1)
	  psq_st    f28,0xE8(r1),0,0
	  stfd      f27, 0xD0(r1)
	  psq_st    f27,0xD8(r1),0,0
	  stfd      f26, 0xC0(r1)
	  psq_st    f26,0xC8(r1),0,0
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  stw       r28, 0xB0(r1)
	  mr        r28, r3
	  lwz       r3, 0x188(r4)
	  mr        r30, r4
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0x7C
	  mr        r3, r30
	  bl        0x4514
	  b         .loc_0x3B0

	.loc_0x7C:
	  cmplwi    r0, 0x2
	  bne-      .loc_0xE8
	  mr        r3, r30
	  bl        0x5244
	  mr        r4, r30
	  addi      r3, r1, 0x8C
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8C(r1)
	  addi      r5, r1, 0xA4
	  lfs       f1, 0x90(r1)
	  li        r4, 0x1B
	  lfs       f0, 0x94(r1)
	  li        r6, 0x2
	  stfs      f2, 0xA4(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0xA8(r1)
	  stfs      f0, 0xAC(r1)
	  bl        -0xA806C
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0xA4
	  li        r4, 0xF
	  li        r6, 0x2
	  bl        -0xA6B3C
	  b         .loc_0x3B0

	.loc_0xE8:
	  cmplwi    r0, 0x3
	  bne-      .loc_0xFC
	  mr        r3, r30
	  bl        0x493C
	  b         .loc_0x3B0

	.loc_0xFC:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x15C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x80
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x80(r1)
	  addi      r5, r1, 0x98
	  lfs       f1, 0x84(r1)
	  li        r4, 0xF
	  lfs       f0, 0x88(r1)
	  li        r6, 0x2
	  stfs      f2, 0x98(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x9C(r1)
	  stfs      f0, 0xA0(r1)
	  bl        -0xA80E0
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x98
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0xA6BB0
	  b         .loc_0x3B0

	.loc_0x15C:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x3B0
	  mr        r3, r30
	  bl        0x2D54
	  mr.       r29, r3
	  beq-      .loc_0x390
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x390
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x390
	  mr        r4, r29
	  lwz       r5, 0xC0(r30)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x68
	  lfs       f30, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f2, 0x68(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x74
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f4, 0x78(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x5C(r1)
	  stfs      f4, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  bl        -0x2C52E4
	  bl        0x1177E0
	  lwz       r12, 0x0(r30)
	  fmr       f26, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x1177E8
	  mr        r4, r30
	  fmr       f28, f1
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x14
	  li        r31, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f31, f31
	  fsubs     f2, f2, f29
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x338
	  lfs       f0, -0x1014(r2)
	  fabs      f2, f28
	  lfs       f1, -0x1018(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x338
	  li        r31, 0x1

	.loc_0x338:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x364
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B0

	.loc_0x364:
	  mr        r3, r30
	  bl        0x2988
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B0

	.loc_0x390:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3B0:
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  psq_l     f29,0xF8(r1),0,0
	  lfd       f29, 0xF0(r1)
	  psq_l     f28,0xE8(r1),0,0
	  lfd       f28, 0xE0(r1)
	  psq_l     f27,0xD8(r1),0,0
	  lfd       f27, 0xD0(r1)
	  psq_l     f26,0xC8(r1),0,0
	  lfd       f26, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r29, 0xB4(r1)
	  lwz       r0, 0x124(r1)
	  lwz       r28, 0xB0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FA5DC
 * Size:	000030
 */
void Game::DangoMushi::StateAppear::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r4)
	  bl        -0x1F2E64
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FA60C
 * Size:	00009C
 */
void Game::DangoMushi::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1020(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r5
	  stw       r0, 0x2CC(r4)
	  stfs      f0, 0x2C4(r4)
	  bl        0x2890
	  li        r0, 0
	  lfs       f0, -0x1020(r2)
	  stb       r0, 0x2C2(r31)
	  cmplwi    r30, 0
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  beq-      .loc_0x74
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        0x3FD0
	  b         .loc_0x84

	.loc_0x74:
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x3FBC

	.loc_0x84:
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
 * Address:	802FA6A8
 * Size:	000364
 */
void Game::DangoMushi::StateWait::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stfd      f28, 0xB0(r1)
	  psq_st    f28,0xB8(r1),0,0
	  stfd      f27, 0xA0(r1)
	  psq_st    f27,0xA8(r1),0,0
	  stfd      f26, 0x90(r1)
	  psq_st    f26,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  lfs       f0, -0x1020(r2)
	  mr        r31, r4
	  lfs       f1, 0x200(r4)
	  mr        r30, r3
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x8C
	  li        r0, 0
	  li        r5, 0
	  stw       r0, 0x2CC(r31)
	  subi      r6, r2, 0x1010
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x314

	.loc_0x8C:
	  mr        r3, r31
	  bl        0x2960
	  mr.       r28, r3
	  beq-      .loc_0x290
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x290
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x290
	  mr        r4, r28
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r28)
	  addi      r3, r1, 0x68
	  lfs       f30, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x68(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x74
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f4, 0x78(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x5C(r1)
	  stfs      f4, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  bl        -0x2C56D8
	  bl        0x1173EC
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x1173F4
	  mr        r4, r31
	  fmr       f28, f1
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  li        r29, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f31, f31
	  fsubs     f2, f2, f29
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x260
	  lfs       f0, -0x1014(r2)
	  fabs      f2, f28
	  lfs       f1, -0x1018(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x260
	  li        r29, 0x1

	.loc_0x260:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x27C
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1F567C
	  b         .loc_0x2B0

	.loc_0x27C:
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1F5690
	  b         .loc_0x2B0

	.loc_0x290:
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x1008(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x2B0
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1F56B4

	.loc_0x2B0:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x314
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0x2EC
	  mr        r3, r31
	  bl        0x3DD8
	  b         .loc_0x314

	.loc_0x2EC:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x314
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2CC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x314:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  psq_l     f27,0xA8(r1),0,0
	  lfd       f27, 0xA0(r1)
	  psq_l     f26,0x98(r1),0,0
	  lfd       f26, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FAA0C
 * Size:	000004
 */
void Game::DangoMushi::StateWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FAA10
 * Size:	00005C
 */
void Game::DangoMushi::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1020(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r5, -0x1
	  li        r0, 0
	  stfs      f0, 0x2C4(r4)
	  li        r4, 0x2
	  stw       r5, 0x2CC(r3)
	  li        r5, 0
	  stb       r0, 0x2C2(r3)
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        0x3BF0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FAA6C
 * Size:	0007A8
 */
void Game::DangoMushi::StateMove::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x180(r1)
	  mflr      r0
	  stw       r0, 0x184(r1)
	  stfd      f31, 0x170(r1)
	  psq_st    f31,0x178(r1),0,0
	  stfd      f30, 0x160(r1)
	  psq_st    f30,0x168(r1),0,0
	  stfd      f29, 0x150(r1)
	  psq_st    f29,0x158(r1),0,0
	  stfd      f28, 0x140(r1)
	  psq_st    f28,0x148(r1),0,0
	  stfd      f27, 0x130(r1)
	  psq_st    f27,0x138(r1),0,0
	  stfd      f26, 0x120(r1)
	  psq_st    f26,0x128(r1),0,0
	  stw       r31, 0x11C(r1)
	  stw       r30, 0x118(r1)
	  stw       r29, 0x114(r1)
	  stw       r28, 0x110(r1)
	  lfs       f0, -0x1020(r2)
	  mr        r31, r4
	  lfs       f1, 0x200(r4)
	  mr        r30, r3
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x8C
	  li        r0, 0
	  li        r5, 0
	  stw       r0, 0x2CC(r31)
	  subi      r6, r2, 0x1010
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x758

	.loc_0x8C:
	  mr        r3, r31
	  bl        0x259C
	  mr.       r28, r3
	  beq-      .loc_0x43C
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x43C
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x43C
	  mr        r4, r28
	  addi      r3, r1, 0xE0
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0xE0(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0xEC
	  lfs       f1, 0xE4(r1)
	  lfs       f0, 0xE8(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0xC8(r1)
	  stfs      f1, 0xCC(r1)
	  stfs      f0, 0xD0(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0xEC(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0xF4(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0xC8(r1)
	  lfs       f0, 0xD0(r1)
	  lfs       f4, 0xF0(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0xD4(r1)
	  stfs      f4, 0xD8(r1)
	  stfs      f3, 0xDC(r1)
	  bl        -0x2C5A90
	  bl        0x117034
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x11703C
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  addi      r3, r1, 0x5C
	  lfs       f28, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  li        r29, 0
	  lfs       f29, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x5C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x50(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x74
	  fsubs     f26, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x78(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x6C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x8C
	  fsubs     f27, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x94(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x88(r1)
	  fmuls     f0, f29, f29
	  fsubs     f2, f2, f30
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x260
	  lfs       f0, -0x1014(r2)
	  fabs      f2, f31
	  lfs       f1, -0x1018(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x260
	  li        r29, 0x1

	.loc_0x260:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x27C
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1F5A40
	  b         .loc_0x670

	.loc_0x27C:
	  mr        r4, r28
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r28)
	  addi      r3, r1, 0x38
	  lfs       f29, 0x334(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x38(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x40(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x44(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x4C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x20(r1)
	  lfs       f0, 0x28(r1)
	  lfs       f4, 0x48(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x2C(r1)
	  stfs      f4, 0x30(r1)
	  stfs      f3, 0x34(r1)
	  bl        -0x2C5C64
	  bl        0x116E60
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x116E68
	  fmuls     f26, f1, f28
	  lfs       f0, -0x1014(r2)
	  lfs       f1, -0x1018(r2)
	  fmuls     f0, f0, f29
	  fabs      f2, f26
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x368
	  lfs       f0, -0x1020(r2)
	  fcmpo     cr0, f26, f0
	  ble-      .loc_0x364
	  fmr       f26, f1
	  b         .loc_0x368

	.loc_0x364:
	  fneg      f26, f1

	.loc_0x368:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f26, f1
	  bl        0x116DE4
	  stfs      f1, 0x1FC(r31)
	  fabs      f2, f31
	  lfs       f0, -0x1014(r2)
	  lfs       f3, 0x1FC(r31)
	  lfs       f1, -0x1018(r2)
	  frsp      f2, f2
	  stfs      f3, 0x1A8(r31)
	  lwz       r4, 0xC0(r31)
	  lfs       f3, 0x58C(r4)
	  fmuls     f0, f0, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x428
	  mr        r3, r31
	  lfs       f28, 0x2E4(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x22B624
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f26, f1
	  lfs       f31, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0xBC(r1)
	  stfs      f31, 0xC0(r1)
	  stfs      f0, 0xC4(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x22BBC0
	  fmuls     f0, f28, f26
	  frsp      f1, f1
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f28, f1
	  stfs      f31, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x670

	.loc_0x428:
	  lfs       f0, -0x1020(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x670

	.loc_0x43C:
	  mr        r3, r31
	  bl        0x21B8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x460
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1F5C24
	  b         .loc_0x670

	.loc_0x460:
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x1004(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x484
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1F5C48
	  b         .loc_0x670

	.loc_0x484:
	  mr        r4, r31
	  addi      r3, r1, 0xB0
	  lwz       r12, 0x0(r31)
	  lfs       f27, 0x2D0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x2D8(r31)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0xB0(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0xB8(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0xB4(r1)
	  fsubs     f1, f27, f4
	  fsubs     f2, f30, f0
	  stfs      f4, 0xA4(r1)
	  stfs      f3, 0xA8(r1)
	  stfs      f0, 0xAC(r1)
	  bl        -0x2C5E30
	  bl        0x116C94
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x116C9C
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  addi      r3, r1, 0x14
	  lfs       f29, 0x334(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f27, f4
	  fsubs     f2, f30, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x2C5EAC
	  bl        0x116C18
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x116C20
	  fmuls     f26, f1, f28
	  lfs       f0, -0x1014(r2)
	  lfs       f1, -0x1018(r2)
	  fmuls     f0, f0, f29
	  fabs      f2, f26
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x5B0
	  lfs       f0, -0x1020(r2)
	  fcmpo     cr0, f26, f0
	  ble-      .loc_0x5AC
	  fmr       f26, f1
	  b         .loc_0x5B0

	.loc_0x5AC:
	  fneg      f26, f1

	.loc_0x5B0:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f26, f1
	  bl        0x116B9C
	  fabs      f3, f31
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, -0x1000(r2)
	  lfs       f2, 0x1FC(r31)
	  frsp      f1, f3
	  stfs      f2, 0x1A8(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x660
	  mr        r3, r31
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x2E4(r4)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x22B85C
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f26, f1
	  lfs       f31, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x98(r1)
	  stfs      f31, 0x9C(r1)
	  stfs      f0, 0xA0(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x22BDF8
	  fmuls     f0, f28, f26
	  frsp      f1, f1
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f28, f1
	  stfs      f31, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x670

	.loc_0x660:
	  lfs       f0, -0x1020(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x670:
	  mr        r3, r31
	  bl        -0x1F3DE0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x690
	  lfs       f0, -0x1020(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x690:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x758
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0x6CC
	  mr        r3, r31
	  bl        0x3634
	  b         .loc_0x758

	.loc_0x6CC:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x730
	  mr        r4, r31
	  addi      r3, r1, 0xF8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xF8(r1)
	  addi      r5, r1, 0x104
	  lfs       f1, 0xFC(r1)
	  li        r4, 0x3
	  lfs       f0, 0x100(r1)
	  li        r6, 0x2
	  stfs      f2, 0x104(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x108(r1)
	  stfs      f0, 0x10C(r1)
	  bl        -0xA8F44
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x104
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0xA7A14
	  b         .loc_0x758

	.loc_0x730:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x758
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2CC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x758:
	  psq_l     f31,0x178(r1),0,0
	  lfd       f31, 0x170(r1)
	  psq_l     f30,0x168(r1),0,0
	  lfd       f30, 0x160(r1)
	  psq_l     f29,0x158(r1),0,0
	  lfd       f29, 0x150(r1)
	  psq_l     f28,0x148(r1),0,0
	  lfd       f28, 0x140(r1)
	  psq_l     f27,0x138(r1),0,0
	  lfd       f27, 0x130(r1)
	  psq_l     f26,0x128(r1),0,0
	  lfd       f26, 0x120(r1)
	  lwz       r31, 0x11C(r1)
	  lwz       r30, 0x118(r1)
	  lwz       r29, 0x114(r1)
	  lwz       r0, 0x184(r1)
	  lwz       r28, 0x110(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FB214
 * Size:	000004
 */
void Game::DangoMushi::StateMove::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FB218
 * Size:	000088
 */
void Game::DangoMushi::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1020(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2CC(r4)
	  li        r4, 0
	  li        r0, 0x1
	  stfs      f0, 0x2C4(r31)
	  stb       r4, 0x2C0(r31)
	  stb       r0, 0x2C2(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x1F989C
	  lfs       f0, -0x1020(r2)
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x33C0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FB2A0
 * Size:	000288
 */
void Game::DangoMushi::StateAttack::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lfs       f0, -0xFFC(r2)
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  lfs       f1, 0x2C4(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3C
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1F6038

	.loc_0x3C:
	  lbz       r0, 0x2C0(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC4
	  mr        r3, r31
	  bl        0x1DE4
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  addi      r5, r1, 0x44
	  lfs       f1, 0x24(r1)
	  li        r4, 0x19
	  lfs       f0, 0x28(r1)
	  li        r6, 0x2
	  stfs      f2, 0x44(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  bl        -0xA90F4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5180
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD4

	.loc_0xC4:
	  lfs       f0, -0x1020(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0xD4:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x270
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0xFC
	  mr        r3, r31
	  bl        0x33D0
	  b         .loc_0x270

	.loc_0xFC:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x110
	  mr        r3, r31
	  bl        0x3ECC
	  b         .loc_0x270

	.loc_0x110:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x184
	  mr        r3, r31
	  bl        0x3508
	  mr        r3, r31
	  bl        0x3EB0
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r5, r1, 0x38
	  lfs       f1, 0x18(r1)
	  li        r4, 0xF
	  lfs       f0, 0x1C(r1)
	  li        r6, 0x2
	  stfs      f2, 0x38(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bl        -0xA91CC
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0xA7C9C
	  b         .loc_0x270

	.loc_0x184:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x1AC
	  lbz       r0, 0x2C0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x270
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x2C0(r31)
	  bl        0x3DCC
	  b         .loc_0x270

	.loc_0x1AC:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1DC
	  mr        r3, r31
	  bl        -0x1F4158
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x270
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2C0(r31)
	  stb       r0, 0x2C2(r31)
	  bl        0x3DD0
	  b         .loc_0x270

	.loc_0x1DC:
	  cmplwi    r0, 0x5
	  bne-      .loc_0x248
	  mr        r3, r31
	  bl        0x3DEC
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x2C
	  lfs       f1, 0xC(r1)
	  li        r4, 0x19
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x2C(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        -0xA9290
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x2C
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0xA7D60
	  b         .loc_0x270

	.loc_0x248:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x270
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2CC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x270:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FB528
 * Size:	000058
 */
void Game::DangoMushi::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r4)
	  bl        -0x1F9BD0
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2C0(r31)
	  stb       r0, 0x2C2(r31)
	  bl        0x3CE4
	  mr        r3, r31
	  bl        0x3424
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FB580
 * Size:	0000D4
 */
void Game::DangoMushi::StateTurn::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x1020(r2)
	  li        r5, 0
	  stw       r0, 0x34(r1)
	  li        r0, -0x1
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2CC(r4)
	  li        r0, 0
	  li        r4, 0x5
	  stfs      f0, 0x2C4(r31)
	  stb       r0, 0x2C2(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x306C
	  mr        r3, r31
	  bl        0x1DA8
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0x1B
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0xA93EC
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xF
	  li        r6, 0x2
	  bl        -0xA7EBC
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FB654
 * Size:	000270
 */
void Game::DangoMushi::StateTurn::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lfs       f0, -0x1020(r2)
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x44
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1F63F0
	  b         .loc_0x68

	.loc_0x44:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x894(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x68
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1F6418

	.loc_0x68:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x258
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0xA4
	  mr        r3, r31
	  bl        0x3074
	  b         .loc_0x258

	.loc_0xA4:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x110
	  mr        r3, r31
	  bl        0x3B70
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  addi      r5, r1, 0x44
	  lfs       f1, 0x24(r1)
	  li        r4, 0x15
	  lfs       f0, 0x28(r1)
	  li        r6, 0x2
	  stfs      f2, 0x44(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  bl        -0xA950C
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x44
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0xA7FDC
	  b         .loc_0x258

	.loc_0x110:
	  cmplwi    r0, 0
	  bne-      .loc_0x148
	  lwz       r3, 0x1E0(r31)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x258
	  rlwinm    r0,r3,0,11,9
	  mr        r3, r31
	  stw       r0, 0x1E0(r31)
	  li        r4, 0
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1E0(r31)
	  bl        0x2308
	  b         .loc_0x258

	.loc_0x148:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x1C4
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  li        r4, 0x1
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)
	  bl        0x22E4
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r5, r1, 0x38
	  lfs       f1, 0x18(r1)
	  li        r4, 0xF
	  lfs       f0, 0x1C(r1)
	  li        r6, 0x2
	  stfs      f2, 0x38(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bl        -0xA95C0
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x38
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0xA8090
	  b         .loc_0x258

	.loc_0x1C4:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x230
	  mr        r3, r31
	  bl        0x377C
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x2C
	  lfs       f1, 0xC(r1)
	  li        r4, 0x19
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x2C(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        -0xA962C
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x2C
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0xA80FC
	  b         .loc_0x258

	.loc_0x230:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x258
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2CC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x258:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FB8C4
 * Size:	000068
 */
void Game::DangoMushi::StateTurn::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0xFF8(r2)
	  stw       r0, 0x14(r1)
	  lfs       f2, -0x1004(r2)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lfs       f3, -0x1020(r2)
	  mr        r3, r31
	  lfs       f4, -0xFF4(r2)
	  li        r4, 0
	  bl        -0x1E87D4
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  li        r4, 0x1
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  bl        0x2188
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FB92C
 * Size:	000050
 */
void Game::DangoMushi::StateRecover::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1020(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2CC(r4)
	  li        r0, 0
	  li        r4, 0x6
	  stfs      f0, 0x2C4(r3)
	  stb       r0, 0x2C2(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        0x2CE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FB97C
 * Size:	0000FC
 */
void Game::DangoMushi::StateRecover::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0x3C
	  mr        r3, r31
	  bl        0x2DB4
	  b         .loc_0xE8

	.loc_0x3C:
	  cmplwi    r0, 0x2
	  bne-      .loc_0xB0
	  mr        r3, r31
	  bl        0x38B0
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0xF
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0xA97CC
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0xA829C
	  mr        r3, r31
	  bl        0x2DD8
	  b         .loc_0xE8

	.loc_0xB0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xE8
	  lfs       f1, 0x1FC(r31)
	  li        r5, 0x8
	  lfs       f0, -0x1018(r2)
	  li        r6, 0
	  fadds     f0, f1, f0
	  stfs      f0, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE8:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FBA78
 * Size:	000004
 */
void Game::DangoMushi::StateRecover::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FBA7C
 * Size:	00006C
 */
void Game::DangoMushi::StateFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1020(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2CC(r4)
	  li        r0, 0
	  stfs      f0, 0x2C4(r4)
	  stb       r0, 0x2C1(r4)
	  stb       r0, 0x2C2(r4)
	  bl        -0x1FA0E4
	  lfs       f0, -0x1020(r2)
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x2B78
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FBAE8
 * Size:	0001E0
 */
void Game::DangoMushi::StateFlick::exec(Game::EnemyBase*)
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
	  mr        r3, r31
	  bl        0x2794
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC
	  mr        r3, r31
	  bl        0x3528
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5982
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r5, r1, 0x2C
	  lfs       f1, 0x18(r1)
	  li        r4, 0x19
	  lfs       f0, 0x1C(r1)
	  li        r6, 0x2
	  stfs      f2, 0x2C(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        -0xA994C
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x2C
	  li        r4, 0xE
	  li        r6, 0x2
	  bl        -0xA841C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  subi      r6, r2, 0x1010
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C8

	.loc_0xDC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x7D0
	  bne-      .loc_0x104
	  mr        r3, r31
	  bl        0x2B80
	  b         .loc_0x1C8

	.loc_0x104:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x134
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x2C1(r31)
	  bl        -0x1F6994
	  lfs       f0, -0xFF0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1C8
	  mr        r3, r31
	  bl        0x3480
	  b         .loc_0x1C8

	.loc_0x134:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x1A0
	  li        r0, 0
	  mr        r4, r31
	  stb       r0, 0x2C1(r31)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x20
	  lfs       f1, 0xC(r1)
	  li        r4, 0xF
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x20(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0xA9A30
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x20
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0xA8500
	  b         .loc_0x1C8

	.loc_0x1A0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1C8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1C8:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FBCC8
 * Size:	00002C
 */
void Game::DangoMushi::StateFlick::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0x2C1(r4)
	  bl        -0x1FA364
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802FBCF4
 * Size:	000028
 */
void __sinit_DangoMushiState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x6878(r13)
	  stfsu     f0, 0x5E60(r3)
	  stfs      f0, -0x6874(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
