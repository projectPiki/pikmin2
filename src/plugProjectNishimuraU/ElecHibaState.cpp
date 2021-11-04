

/*
 * --INFO--
 * Address:	8026DFD8
 * Size:	00017C
 */
void Game::ElecHiba::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x13D78C
	  li        r3, 0x10
	  bl        -0x24A154
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x5D98
	  subi      r5, r2, 0x32C8
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x5D74
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x13D738
	  li        r3, 0x10
	  bl        -0x24A1A4
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x5D98
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x32C0
	  addi      r0, r3, 0x5D50
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x13D78C
	  li        r3, 0x10
	  bl        -0x24A1F8
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x5D98
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x32B8
	  addi      r0, r3, 0x5D2C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x13D7E0
	  li        r3, 0x10
	  bl        -0x24A24C
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x5D98
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x32B0
	  addi      r0, r3, 0x5D08
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x13D834
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026E154
 * Size:	0002CC
 */
void Game::ElecHiba::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  mr        r31, r4
	  lwz       r4, 0x1E0(r4)
	  li        r0, 0
	  ori       r4, r4, 0x4
	  mr        r3, r31
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  rlwinm    r4,r4,0,21,19
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  ori       r4, r4, 0x1
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  rlwinm    r4,r4,0,29,27
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C0(r31)
	  bl        0x245C
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1691B8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x580C
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, -0x32A8(r2)
	  mr        r3, r31
	  bl        0x200220
	  mr        r4, r31
	  addi      r3, r1, 0x34
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f2, 0x34(r1)
	  lwz       r12, 0x0(r31)
	  lfs       f1, 0x38(r1)
	  lfs       f0, 0x3C(r1)
	  lwz       r12, 0x258(r12)
	  stfs      f2, 0x4C(r1)
	  lfs       f31, 0x1F8(r31)
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  mtctr     r12
	  bctrl
	  lwz       r6, 0x4C(r1)
	  lis       r5, 0x804B
	  lwz       r0, 0x50(r1)
	  lis       r4, 0x804B
	  lwz       r8, 0x54(r1)
	  subi      r7, r5, 0x5814
	  stw       r6, 0x28(r1)
	  subi      r5, r4, 0x5808
	  lis       r6, 0x804B
	  lis       r4, 0x804F
	  stw       r0, 0x2C(r1)
	  subi      r6, r6, 0x5820
	  lfs       f2, 0x28(r1)
	  subi      r0, r4, 0x7A2C
	  stw       r8, 0x30(r1)
	  addi      r4, r1, 0x70
	  lfs       f1, 0x2C(r1)
	  stw       r7, 0x70(r1)
	  lfs       f0, 0x30(r1)
	  stw       r5, 0xC(r1)
	  stw       r3, 0x80(r1)
	  addi      r3, r1, 0xC
	  stfs      f2, 0x74(r1)
	  stfs      f1, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  stw       r6, 0x70(r1)
	  stfs      f31, 0x84(r1)
	  stw       r0, 0xC(r1)
	  bl        0x15AAD4
	  mr        r3, r31
	  bl        0x1680
	  mr.       r31, r3
	  beq-      .loc_0x2B0
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0
	  ori       r4, r4, 0x4
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  rlwinm    r4,r4,0,21,19
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  ori       r4, r4, 0x1
	  stw       r4, 0x1E0(r31)
	  lwz       r4, 0x1E0(r31)
	  rlwinm    r4,r4,0,29,27
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C0(r31)
	  bl        0x230C
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x169308
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x580C
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, -0x32A8(r2)
	  mr        r3, r31
	  bl        0x2000D0
	  mr        r4, r31
	  addi      r3, r1, 0x1C
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f2, 0x1C(r1)
	  lwz       r12, 0x0(r31)
	  lfs       f1, 0x20(r1)
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x258(r12)
	  stfs      f2, 0x40(r1)
	  lfs       f31, 0x1F8(r31)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  mtctr     r12
	  bctrl
	  lwz       r6, 0x40(r1)
	  lis       r5, 0x804B
	  lwz       r0, 0x44(r1)
	  lis       r4, 0x804B
	  lwz       r8, 0x48(r1)
	  subi      r7, r5, 0x5814
	  stw       r6, 0x10(r1)
	  subi      r5, r4, 0x5808
	  lis       r6, 0x804B
	  lis       r4, 0x804F
	  stw       r0, 0x14(r1)
	  subi      r6, r6, 0x5820
	  lfs       f2, 0x10(r1)
	  subi      r0, r4, 0x7A2C
	  stw       r8, 0x18(r1)
	  addi      r4, r1, 0x58
	  lfs       f1, 0x14(r1)
	  stw       r7, 0x58(r1)
	  lfs       f0, 0x18(r1)
	  stw       r5, 0x8(r1)
	  stw       r3, 0x68(r1)
	  addi      r3, r1, 0x8
	  stfs      f2, 0x5C(r1)
	  stfs      f1, 0x60(r1)
	  stfs      f0, 0x64(r1)
	  stw       r6, 0x58(r1)
	  stfs      f31, 0x6C(r1)
	  stw       r0, 0x8(r1)
	  bl        0x15A984

	.loc_0x2B0:
	  psq_l     f31,0x98(r1),0,0
	  lwz       r0, 0xA4(r1)
	  lfd       f31, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026E420
 * Size:	000008
 */
void Game::ElecHiba::Obj::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0x16
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026E428
 * Size:	000004
 */
void Game::ElecHiba::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026E42C
 * Size:	000004
 */
void Game::ElecHiba::StateDead::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026E430
 * Size:	000070
 */
void Game::ElecHiba::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  beq-      .loc_0x28
	  lfs       f0, 0x0(r5)
	  stfs      f0, 0x2C4(r31)
	  b         .loc_0x30

	.loc_0x28:
	  lfs       f0, -0x32A8(r2)
	  stfs      f0, 0x2C4(r31)

	.loc_0x30:
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x169468
	  mr        r3, r31
	  bl        0x14C4
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  li        r4, 0
	  li        r5, 0
	  bl        -0x169484

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
 * Address:	8026E4A0
 * Size:	0000E4
 */
void Game::ElecHiba::StateWait::exec(Game::EnemyBase*)
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
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x2C4(r4)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r4)
	  lbz       r0, 0x2F4(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  mr        r3, r31
	  bl        0x2284
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xCC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xCC

	.loc_0x70:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x32A8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA0
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xCC

	.loc_0xA0:
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x81C(r5)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xCC
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xCC:
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
 * Address:	8026E584
 * Size:	000004
 */
void Game::ElecHiba::StateWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026E588
 * Size:	000088
 */
void Game::ElecHiba::StateSign::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x32A8(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r3, r31
	  stfs      f0, 0x2C4(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  bl        -0x1695BC
	  mr        r3, r31
	  bl        0x1370
	  mr.       r30, r3
	  beq-      .loc_0x70
	  lwz       r0, 0x1E0(r30)
	  li        r4, 0
	  li        r5, 0
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r30)
	  bl        -0x1695E4
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x1E24

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
 * Address:	8026E610
 * Size:	0000F8
 */
void Game::ElecHiba::StateSign::exec(Game::EnemyBase*)
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
	  mr        r3, r31
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x2C4(r4)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x50AC
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x32A8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xAC
	  mr        r3, r31
	  bl        0x12B4
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  mr        r3, r31
	  bl        0x1E94

	.loc_0x88:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE0

	.loc_0xAC:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xE0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE0:
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
 * Address:	8026E708
 * Size:	000044
 */
void Game::ElecHiba::StateSign::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  bl        0x1214
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r3)

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026E74C
 * Size:	000084
 */
void Game::ElecHiba::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x32A8(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stfs      f0, 0x2C4(r31)
	  mr        r3, r31
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  bl        -0x16977C
	  mr        r3, r31
	  bl        0x1F30
	  mr        r3, r31
	  bl        0x11A8
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x1E0(r3)
	  li        r4, 0
	  li        r5, 0
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r3)
	  bl        -0x1697AC
	  mr        r3, r31
	  bl        0x1DA8

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
 * Address:	8026E7D0
 * Size:	000164
 */
void Game::ElecHiba::StateAttack::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x2C4(r4)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r4)
	  lbz       r0, 0x2F4(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  mr        r3, r31
	  bl        0x1F94
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xCC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xCC

	.loc_0x70:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x32A8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA0
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xCC

	.loc_0xA0:
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x86C(r5)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xCC
	  lwz       r12, 0x0(r3)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xCC:
	  mr        r3, r31
	  bl        0x1098
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x14
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        0x11E0
	  mr        r3, r31
	  bl        0x183C

	.loc_0x120:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x50AD
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026E934
 * Size:	000060
 */
void Game::ElecHiba::StateAttack::cleanup(Game::EnemyBase*)
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
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  bl        0xFE0
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r3)
	  mr        r3, r31
	  bl        0x1C5C

	.loc_0x44:
	  mr        r3, r31
	  bl        0x1D68
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
