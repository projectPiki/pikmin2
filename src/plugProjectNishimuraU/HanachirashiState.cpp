

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
 * Address:	8029F228
 * Size:	000480
 */
void Game::Hanachirashi::FSM::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  subi      r30, r4, 0x6F88
	  li        r4, 0xD
	  bl        -0x16E9E8
	  li        r3, 0x10
	  bl        -0x27B3B0
	  mr.       r4, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  subi      r5, r2, 0x2658
	  stw       r7, 0x4(r4)
	  subi      r0, r3, 0x2F20
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x70:
	  mr        r3, r31
	  bl        -0x16E994
	  li        r3, 0x10
	  bl        -0x27B400
	  mr.       r4, r3
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2650
	  subi      r0, r3, 0x2F44
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC4:
	  mr        r3, r31
	  bl        -0x16E9E8
	  li        r3, 0x10
	  bl        -0x27B454
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2648
	  subi      r0, r3, 0x2F68
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  mr        r3, r31
	  bl        -0x16EA3C
	  li        r3, 0x10
	  bl        -0x27B4A8
	  mr.       r4, r3
	  beq-      .loc_0x16C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2640
	  subi      r0, r3, 0x2F8C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x16C:
	  mr        r3, r31
	  bl        -0x16EA90
	  li        r3, 0x10
	  bl        -0x27B4FC
	  mr.       r4, r3
	  beq-      .loc_0x1C0
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x18
	  subi      r0, r3, 0x2FB0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1C0:
	  mr        r3, r31
	  bl        -0x16EAE4
	  li        r3, 0x10
	  bl        -0x27B550
	  mr.       r4, r3
	  beq-      .loc_0x214
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2638
	  subi      r0, r3, 0x2FD4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x214:
	  mr        r3, r31
	  bl        -0x16EB38
	  li        r3, 0x10
	  bl        -0x27B5A4
	  mr.       r4, r3
	  beq-      .loc_0x268
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2630
	  subi      r0, r3, 0x2FF8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x268:
	  mr        r3, r31
	  bl        -0x16EB8C
	  li        r3, 0x10
	  bl        -0x27B5F8
	  mr.       r4, r3
	  beq-      .loc_0x2BC
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2628
	  subi      r0, r3, 0x301C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2BC:
	  mr        r3, r31
	  bl        -0x16EBE0
	  li        r3, 0x10
	  bl        -0x27B64C
	  mr.       r4, r3
	  beq-      .loc_0x310
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2620
	  subi      r0, r3, 0x3040
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x310:
	  mr        r3, r31
	  bl        -0x16EC34
	  li        r3, 0x10
	  bl        -0x27B6A0
	  mr.       r4, r3
	  beq-      .loc_0x364
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2618
	  subi      r0, r3, 0x3064
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x364:
	  mr        r3, r31
	  bl        -0x16EC88
	  li        r3, 0x10
	  bl        -0x27B6F4
	  mr.       r4, r3
	  beq-      .loc_0x3B8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x24
	  subi      r0, r3, 0x3088
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B8:
	  mr        r3, r31
	  bl        -0x16ECDC
	  li        r3, 0x10
	  bl        -0x27B748
	  mr.       r4, r3
	  beq-      .loc_0x40C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xB
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x30
	  subi      r0, r3, 0x30AC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x40C:
	  mr        r3, r31
	  bl        -0x16ED30
	  li        r3, 0x10
	  bl        -0x27B79C
	  mr.       r4, r3
	  beq-      .loc_0x460
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0xC
	  li        r7, 0
	  subi      r6, r5, 0x2EFC
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2610
	  subi      r0, r3, 0x30D0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x460:
	  mr        r3, r31
	  bl        -0x16ED84
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
 * Address:	8029F6A8
 * Size:	0000AC
 */
void Game::Hanachirashi::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x199FC8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x19A710
	  b         .loc_0x84

	.loc_0x74:
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x19A724

	.loc_0x84:
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  bl        0x4910
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029F754
 * Size:	0000B8
 */
void Game::Hanachirashi::StateDead::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x198424
	  cmpwi     r3, 0
	  bne-      .loc_0x44
	  mr        r3, r31
	  bl        -0x19A510
	  lfs       f0, -0x2604(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x60
	  mr        r3, r31
	  bl        0x2EF8
	  b         .loc_0x60

	.loc_0x44:
	  mr        r3, r31
	  bl        -0x19A530
	  lfs       f0, -0x2600(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x60
	  mr        r3, r31
	  bl        0x2ED8

	.loc_0x60:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xA4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x264(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x49A4
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x164704

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
 * Address:	8029F80C
 * Size:	000004
 */
void Game::Hanachirashi::StateDead::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029F810
 * Size:	000054
 */
void Game::Hanachirashi::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  li        r5, 0
	  stfs      f0, 0x2C4(r4)
	  li        r4, 0x5
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  stw       r0, 0x230(r3)
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r3)
	  bl        -0x19A84C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029F864
 * Size:	000138
 */
void Game::Hanachirashi::StateWait::exec((Game::EnemyBase*))
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
	  bl        0x2A9C
	  mr        r3, r31
	  bl        0x2F34
	  cmplwi    r3, 0
	  bne-      .loc_0x3C
	  mr        r3, r31
	  bl        0x35E8

	.loc_0x3C:
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  stw       r3, 0x230(r31)
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x3
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xA0

	.loc_0x6C:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x86C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA0:
	  lwz       r4, -0x6514(r13)
	  mr        r3, r31
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  bl        0x2DC8
	  mr.       r5, r3
	  blt-      .loc_0xE4
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x120

	.loc_0xE4:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x120
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x120
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x120:
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
 * Address:	8029F99C
 * Size:	000004
 */
void Game::Hanachirashi::StateWait::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029F9A0
 * Size:	00004C
 */
void Game::Hanachirashi::StateMove::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x2A84
	  lfs       f0, -0x2608(r2)
	  li        r0, 0
	  stfs      f0, 0x2C4(r31)
	  stw       r0, 0x230(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029F9EC
 * Size:	0001A0
 */
void Game::Hanachirashi::StateMove::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x290C
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x10(r1)
	  mr        r3, r31
	  lfs       f5, 0x2E0(r31)
	  lfs       f1, 0x2D8(r31)
	  fsubs     f2, f0, f5
	  lfs       f0, 0x8(r1)
	  lfs       f4, 0x2DC(r31)
	  fsubs     f3, f0, f1
	  fmuls     f0, f2, f2
	  stfs      f1, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  fmadds    f31, f3, f3, f0
	  stfs      f5, 0x1C(r1)
	  bl        0x2D5C
	  cmplwi    r3, 0
	  beq-      .loc_0xAC
	  stw       r3, 0x230(r31)
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x3
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x100

	.loc_0xAC:
	  lfs       f0, -0x25FC(r2)
	  fcmpo     cr0, f31, f0
	  blt-      .loc_0xC8
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x25F8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xE4

	.loc_0xC8:
	  lfs       f0, -0x2608(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x19A828
	  b         .loc_0x100

	.loc_0xE4:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x18A50C

	.loc_0x100:
	  lwz       r4, -0x6514(r13)
	  mr        r3, r31
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  bl        0x2BE0
	  mr.       r5, r3
	  blt-      .loc_0x144
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x180

	.loc_0x144:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x180
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x180
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x180:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029FB8C
 * Size:	000004
 */
void Game::Hanachirashi::StateMove::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029FB90
 * Size:	000030
 */
void Game::Hanachirashi::StateChase::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  bl        -0x19E1E0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029FBC0
 * Size:	000530
 */
void Game::Hanachirashi::StateChase::exec((Game::EnemyBase*))
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
	  stfd      f27, 0xE0(r1)
	  psq_st    f27,0xE8(r1),0,0
	  stfd      f26, 0xD0(r1)
	  psq_st    f26,0xD8(r1),0,0
	  stfd      f25, 0xC0(r1)
	  psq_st    f25,0xC8(r1),0,0
	  stfd      f24, 0xB0(r1)
	  psq_st    f24,0xB8(r1),0,0
	  stfd      f23, 0xA0(r1)
	  psq_st    f23,0xA8(r1),0,0
	  stfd      f22, 0x90(r1)
	  psq_st    f22,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x26EC
	  mr        r3, r31
	  bl        -0x19893C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x428
	  lwz       r29, 0x230(r31)
	  cmplwi    r29, 0
	  beq-      .loc_0x3FC
	  mr        r4, r31
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x198(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x1A0(r31)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r29)
	  lfs       f26, 0x50(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x44(r1)
	  lfs       f6, 0x4C(r1)
	  fsubs     f3, f26, f5
	  lfs       f1, -0x2608(r2)
	  fsubs     f4, f25, f6
	  fmadds    f0, f3, f3, f1
	  fmuls     f2, f4, f4
	  fadds     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x10C
	  ble-      .loc_0x110
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x110

	.loc_0x10C:
	  fmr       f2, f1

	.loc_0x110:
	  lfs       f0, -0x2608(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x12C
	  lfs       f0, -0x25F4(r2)
	  fdivs     f0, f0, f2
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0

	.loc_0x12C:
	  lwz       r4, 0xC0(r31)
	  lis       r3, 0x8051
	  subi      r3, r3, 0x2E20
	  lfs       f0, 0x564(r4)
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fadds     f24, f5, f3
	  fadds     f23, f6, f4
	  fsubs     f1, f24, f26
	  fsubs     f2, f23, f25
	  bl        -0x26AC0C
	  lwz       r12, 0x0(r29)
	  fmr       f29, f1
	  lwz       r5, 0xC0(r31)
	  mr        r4, r29
	  lwz       r12, 0x8(r12)
	  addi      r3, r1, 0x20
	  lfs       f30, 0x334(r5)
	  lfs       f31, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0x26AC98
	  bl        0x171E2C
	  lwz       r12, 0x0(r31)
	  fmr       f22, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f22
	  bl        0x171E34
	  fmuls     f31, f1, f31
	  lfs       f0, -0x25EC(r2)
	  lfs       f1, -0x25F0(r2)
	  fmuls     f0, f0, f30
	  fabs      f2, f31
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x248
	  lfs       f0, -0x2608(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x244
	  fmr       f31, f1
	  b         .loc_0x248

	.loc_0x244:
	  fneg      f31, f1

	.loc_0x248:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f31, f1
	  bl        0x171DB0
	  fsubs     f3, f25, f23
	  stfs      f1, 0x1FC(r31)
	  fsubs     f4, f26, f24
	  lfs       f0, -0x25E8(r2)
	  lfs       f2, 0x1FC(r31)
	  fmuls     f1, f3, f3
	  stfs      f2, 0x1A8(r31)
	  fmadds    f1, f4, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x35C
	  lfs       f0, -0x2608(r2)
	  lwz       r4, 0xC0(r31)
	  fcmpo     cr0, f29, f0
	  lfs       f3, 0x2E4(r4)
	  bge-      .loc_0x2CC
	  lfs       f0, -0x25E4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f29, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x2F0

	.loc_0x2CC:
	  lfs       f0, -0x25E0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f29, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x2F0:
	  lfs       f0, -0x2608(r2)
	  fmuls     f3, f3, f2
	  lfs       f1, 0x1D4(r31)
	  lfs       f2, 0x1D8(r31)
	  fcmpo     cr0, f29, f0
	  lfs       f0, 0x1DC(r31)
	  stfs      f1, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bge-      .loc_0x31C
	  fneg      f29, f29

	.loc_0x31C:
	  lfs       f0, -0x25E0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f1, 0x2E4(r4)
	  fmuls     f0, f29, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f0, 0x4(r3)
	  stfs      f3, 0x1D4(r31)
	  fmuls     f0, f1, f0
	  stfs      f2, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x36C

	.loc_0x35C:
	  lfs       f0, -0x2608(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x36C:
	  fsubs     f1, f25, f27
	  lwz       r3, 0xC0(r31)
	  fsubs     f2, f26, f28
	  lfs       f0, 0x35C(r3)
	  fmuls     f1, f1, f1
	  fmuls     f0, f0, f0
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3B4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3FC

	.loc_0x3B4:
	  mr        r3, r31
	  bl        0x2C1C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3FC
	  mr        r3, r31
	  bl        0x2838
	  cmplwi    r3, 0
	  beq-      .loc_0x3DC
	  stw       r3, 0x230(r31)
	  b         .loc_0x3FC

	.loc_0x3DC:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3FC:
	  mr        r3, r31
	  bl        0x2EC4
	  cmplwi    r3, 0
	  beq-      .loc_0x428
	  stw       r3, 0x230(r31)
	  mr        r3, r31
	  lfs       f0, -0x2608(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x19AD44

	.loc_0x428:
	  mr        r3, r31
	  bl        0x26F8
	  mr.       r5, r3
	  blt-      .loc_0x458
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4C4

	.loc_0x458:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x4C4
	  lwz       r0, 0x230(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x4A4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4C4

	.loc_0x4A4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C4:
	  psq_l     f31,0x128(r1),0,0
	  lfd       f31, 0x120(r1)
	  psq_l     f30,0x118(r1),0,0
	  lfd       f30, 0x110(r1)
	  psq_l     f29,0x108(r1),0,0
	  lfd       f29, 0x100(r1)
	  psq_l     f28,0xF8(r1),0,0
	  lfd       f28, 0xF0(r1)
	  psq_l     f27,0xE8(r1),0,0
	  lfd       f27, 0xE0(r1)
	  psq_l     f26,0xD8(r1),0,0
	  lfd       f26, 0xD0(r1)
	  psq_l     f25,0xC8(r1),0,0
	  lfd       f25, 0xC0(r1)
	  psq_l     f24,0xB8(r1),0,0
	  lfd       f24, 0xB0(r1)
	  psq_l     f23,0xA8(r1),0,0
	  lfd       f23, 0xA0(r1)
	  psq_l     f22,0x98(r1),0,0
	  lfd       f22, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r0, 0x134(r1)
	  lwz       r29, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A00F0
 * Size:	000024
 */
void Game::Hanachirashi::StateChase::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x19E784
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0114
 * Size:	000124
 */
void Game::Hanachirashi::StateChaseInside::init((Game::EnemyBase*,
                                                 Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  lwz       r4, 0x230(r4)
	  lfs       f31, 0x198(r31)
	  cmplwi    r4, 0
	  lfs       f0, 0x19C(r31)
	  lfs       f30, 0x1A0(r31)
	  beq-      .loc_0xE0
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f6, 0x8(r1)
	  lfs       f7, 0x10(r1)
	  fsubs     f3, f31, f6
	  lfs       f4, -0x2608(r2)
	  fsubs     f5, f30, f7
	  lfs       f2, 0xC(r1)
	  fmadds    f0, f3, f3, f4
	  fmuls     f1, f5, f5
	  fadds     f1, f1, f0
	  fcmpo     cr0, f1, f4
	  ble-      .loc_0x8C
	  ble-      .loc_0x90
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x90

	.loc_0x8C:
	  fmr       f1, f4

	.loc_0x90:
	  lfs       f0, -0x2608(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xB0
	  lfs       f0, -0x25F4(r2)
	  fdivs     f0, f0, f1
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fmuls     f5, f5, f0

	.loc_0xB0:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x3D4(r3)
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fmuls     f5, f5, f0
	  fadds     f0, f6, f3
	  fadds     f2, f2, f4
	  fadds     f1, f7, f5
	  stfs      f0, 0x2D8(r31)
	  stfs      f2, 0x2DC(r31)
	  stfs      f1, 0x2E0(r31)
	  b         .loc_0xEC

	.loc_0xE0:
	  stfs      f31, 0x2D8(r31)
	  stfs      f0, 0x2DC(r31)
	  stfs      f30, 0x2E0(r31)

	.loc_0xEC:
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  bl        -0x19E844
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0238
 * Size:	00037C
 */
void Game::Hanachirashi::StateChaseInside::exec((Game::EnemyBase*))
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
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stfd      f27, 0x90(r1)
	  psq_st    f27,0x98(r1),0,0
	  stfd      f26, 0x80(r1)
	  psq_st    f26,0x88(r1),0,0
	  stfd      f25, 0x70(r1)
	  psq_st    f25,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x2090
	  mr        r4, r31
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x4C(r1)
	  lfs       f29, 0x2E0(r31)
	  lfs       f28, 0x44(r1)
	  fsubs     f1, f31, f29
	  lfs       f30, 0x2D8(r31)
	  lfs       f0, -0x25FC(r2)
	  fsubs     f2, f28, f30
	  fmuls     f1, f1, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2C0

	.loc_0xC4:
	  lwz       r4, 0x230(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x1E0
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x20
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f26, 0x334(r5)
	  lfs       f27, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0x26B280
	  bl        0x171844
	  lwz       r12, 0x0(r31)
	  fmr       f25, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f25
	  bl        0x17184C
	  fmuls     f27, f1, f27
	  lfs       f0, -0x25EC(r2)
	  lfs       f1, -0x25F0(r2)
	  fmuls     f0, f0, f26
	  fabs      f2, f27
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1B8
	  lfs       f0, -0x2608(r2)
	  fcmpo     cr0, f27, f0
	  ble-      .loc_0x1B4
	  fmr       f27, f1
	  b         .loc_0x1B8

	.loc_0x1B4:
	  fneg      f27, f1

	.loc_0x1B8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f27, f1
	  bl        0x1717C8
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)

	.loc_0x1E0:
	  fsubs     f1, f30, f28
	  lis       r3, 0x8051
	  fsubs     f2, f29, f31
	  subi      r3, r3, 0x2E20
	  bl        -0x26B320
	  lfs       f0, -0x2608(r2)
	  lwz       r4, 0xC0(r31)
	  fcmpo     cr0, f1, f0
	  lfs       f4, 0x2E4(r4)
	  bge-      .loc_0x234
	  lfs       f0, -0x25E4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f3, f0
	  b         .loc_0x258

	.loc_0x234:
	  lfs       f0, -0x25E0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f3, r3, r0

	.loc_0x258:
	  lfs       f0, -0x2608(r2)
	  fmuls     f4, f4, f3
	  lfs       f2, 0x1D4(r31)
	  lfs       f3, 0x1D8(r31)
	  fcmpo     cr0, f1, f0
	  lfs       f0, 0x1DC(r31)
	  stfs      f2, 0x38(r1)
	  stfs      f3, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  bge-      .loc_0x284
	  fneg      f1, f1

	.loc_0x284:
	  lfs       f0, -0x25E0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f2, 0x2E4(r4)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f0, 0x4(r3)
	  stfs      f4, 0x1D4(r31)
	  fmuls     f0, f2, f0
	  stfs      f3, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x2C0:
	  mr        r3, r31
	  bl        0x21E8
	  mr.       r5, r3
	  blt-      .loc_0x2F0
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x32C

	.loc_0x2F0:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x32C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x32C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x32C:
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  psq_l     f27,0x98(r1),0,0
	  lfd       f27, 0x90(r1)
	  psq_l     f26,0x88(r1),0,0
	  lfd       f26, 0x80(r1)
	  psq_l     f25,0x78(r1),0,0
	  lfd       f25, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A05B4
 * Size:	000024
 */
void Game::Hanachirashi::StateChaseInside::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x19EC48
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A05D8
 * Size:	000090
 */
void Game::Hanachirashi::StateAttack::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0x1E0(r4)
	  rlwinm    r4,r4,0,26,24
	  stw       r4, 0x1E0(r31)
	  stw       r0, 0x230(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x19EC54
	  mr        r3, r31
	  li        r4, 0x9
	  li        r5, 0
	  bl        -0x19B62C
	  li        r3, -0x1
	  li        r0, 0
	  stw       r3, 0x2C0(r31)
	  mr        r3, r31
	  lfs       f0, -0x2608(r2)
	  stb       r0, 0x310(r31)
	  stfs      f0, 0x30C(r31)
	  bl        0x3A78
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0668
 * Size:	00011C
 */
void Game::Hanachirashi::StateAttack::exec((Game::EnemyBase*))
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
	  bl        0x1C98
	  lbz       r0, 0x310(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  mr        r3, r31
	  bl        0x2F08
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x48
	  li        r0, 0xC
	  stw       r0, 0x2C0(r31)

	.loc_0x48:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2608(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x80
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x104

	.loc_0x80:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x104
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xB0
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x310(r31)
	  bl        0x39EC
	  b         .loc_0x104

	.loc_0xB0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x104
	  lwz       r5, 0x2C0(r31)
	  cmpwi     r5, 0
	  blt-      .loc_0xE4
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x104

	.loc_0xE4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x104:
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
 * Address:	802A0784
 * Size:	000054
 */
void Game::Hanachirashi::StateAttack::cleanup((Game::EnemyBase*))
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
	  bl        -0x19EE2C
	  li        r0, 0
	  lfs       f0, -0x2608(r2)
	  stb       r0, 0x310(r31)
	  mr        r3, r31
	  stfs      f0, 0x30C(r31)
	  bl        0x39CC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A07D8
 * Size:	000068
 */
void Game::Hanachirashi::StateFall::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x19EE4C
	  mr        r3, r31
	  li        r4, 0x8
	  li        r5, 0
	  bl        -0x19B824
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0840
 * Size:	0001A4
 */
void Game::Hanachirashi::StateFall::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r31, r4
	  mr        r30, r3
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  mr        r3, r31
	  bl        0x1A9C
	  b         .loc_0xE0

	.loc_0x4C:
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r4, r31
	  lfs       f1, 0x18(r1)
	  addi      r3, r1, 0x8
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x20
	  lfs       f31, 0xC(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x24(r1)
	  lfs       f0, -0x25DC(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0xD0
	  lfs       f0, -0x2608(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xD8

	.loc_0xD0:
	  mr        r3, r31
	  bl        -0x19B674

	.loc_0xD8:
	  mr        r3, r31
	  bl        0x1D10

	.loc_0xE0:
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x25D8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xFC
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r31)

	.loc_0xFC:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2C4(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x2608(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C4(r31)
	  lfs       f1, 0x200(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x148
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x184

	.loc_0x148:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x184
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x184
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x184:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A09E4
 * Size:	000038
 */
void Game::Hanachirashi::StateFall::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x1C24
	  mr        r3, r31
	  bl        -0x19F088
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0A1C
 * Size:	000070
 */
void Game::Hanachirashi::StateLand::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x19F090
	  mr        r3, r31
	  li        r4, 0x6
	  li        r5, 0
	  bl        -0x19BA68
	  mr        r3, r31
	  bl        0x3790
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0A8C
 * Size:	000080
 */
void Game::Hanachirashi::StateLand::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  stw       r0, 0x14(r1)
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x70

	.loc_0x3C:
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x70
	  lwz       r12, 0x0(r3)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0B0C
 * Size:	000024
 */
void Game::Hanachirashi::StateLand::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x19F1A0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0B30
 * Size:	000068
 */
void Game::Hanachirashi::StateGround::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x19F1A4
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x19BB7C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0B98
 * Size:	000114
 */
void Game::Hanachirashi::StateGround::exec((Game::EnemyBase*))
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
	  lwz       r0, 0x1F4(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x3C
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x894(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x44

	.loc_0x3C:
	  mr        r3, r31
	  bl        -0x19B938

	.loc_0x44:
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2C4(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x2608(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C4(r31)
	  lfs       f1, 0x200(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x90
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xFC

	.loc_0x90:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xFC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xFC
	  lwz       r0, 0x1F4(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xB
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xFC

	.loc_0xDC:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xFC:
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
 * Address:	802A0CAC
 * Size:	000024
 */
void Game::Hanachirashi::StateGround::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x19F340
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0CD0
 * Size:	000064
 */
void Game::Hanachirashi::StateTakeOff::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x19F340
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  bl        -0x19BD18
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0D34
 * Size:	0000EC
 */
void Game::Hanachirashi::StateTakeOff::exec((Game::EnemyBase*))
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
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x48
	  mr        r3, r31
	  bl        0x15B0
	  mr        r3, r31
	  bl        0x18DC

	.loc_0x48:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2608(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x80
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD4

	.loc_0x80:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xD4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xAC
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r31)
	  b         .loc_0xD4

	.loc_0xAC:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xD4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD4:
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
 * Address:	802A0E20
 * Size:	000038
 */
void Game::Hanachirashi::StateTakeOff::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x17DC
	  mr        r3, r31
	  bl        -0x19F4C4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0E58
 * Size:	000064
 */
void Game::Hanachirashi::StateFlyFlick::init((Game::EnemyBase*,
                                              Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x19F4C8
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x19BEA0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0EBC
 * Size:	0000E4
 */
void Game::Hanachirashi::StateFlyFlick::exec((Game::EnemyBase*))
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
	  bl        0x1444
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2608(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x5C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xCC

	.loc_0x5C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xA4
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x25D4(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x18DE34
	  lfs       f0, -0x2608(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0xCC

	.loc_0xA4:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xCC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
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
 * Address:	802A0FA0
 * Size:	000024
 */
void Game::Hanachirashi::StateFlyFlick::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x19F634
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A0FC4
 * Size:	000064
 */
void Game::Hanachirashi::StateGroundFlick::init((Game::EnemyBase*,
                                                 Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x19F634
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x19C00C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A1028
 * Size:	000100
 */
void Game::Hanachirashi::StateGroundFlick::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xEC

	.loc_0x44:
	  lwz       r5, 0x188(r31)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xEC
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xCC
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x25D4(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x18D914
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x25D4(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x18DBF0
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x25D4(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x18DFC8
	  lfs       f0, -0x2608(r2)
	  stfs      f0, 0x20C(r31)
	  b         .loc_0xEC

	.loc_0xCC:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xEC
	  lwz       r12, 0x0(r3)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xEC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A1128
 * Size:	000024
 */
void Game::Hanachirashi::StateGroundFlick::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x19F7BC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A114C
 * Size:	000068
 */
void Game::Hanachirashi::StateLaugh::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2608(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  stw       r0, 0x230(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  bl        -0x19F7C0
	  mr        r3, r31
	  li        r4, 0xA
	  li        r5, 0
	  bl        -0x19C198
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A11B4
 * Size:	0000DC
 */
void Game::Hanachirashi::StateLaugh::exec((Game::EnemyBase*))
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
	  bl        0x114C
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xC4
	  mr        r3, r31
	  bl        0x14EC
	  mr.       r5, r3
	  blt-      .loc_0x70
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC4

	.loc_0x70:
	  mr        r3, r31
	  bl        0x1C5C
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC4

	.loc_0xA4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC4:
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
 * Address:	802A1290
 * Size:	000024
 */
void Game::Hanachirashi::StateLaugh::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x19F924
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
