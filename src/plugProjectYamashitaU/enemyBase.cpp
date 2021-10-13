

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void Game::_Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800FF26C
 * Size:	0000F8
 */
void Game::EnemyBaseFSM::State::animation((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r0, 0x1E0(r4)
	  rlwinm.   r0,r0,0,3,3
	  beq-      .loc_0xE0
	  lwz       r4, -0x6E18(r13)
	  mr        r3, r30
	  addi      r0, r4, 0x1
	  stw       r0, -0x6E18(r13)
	  bl        0x4408
	  mr        r31, r3
	  mr        r3, r30
	  bl        0x3CABC
	  mr        r3, r30
	  addi      r4, r30, 0x264
	  bl        0xD8584
	  mr        r3, r30
	  bl        0x43E8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xAC
	  lwz       r0, 0x1E0(r30)
	  rlwinm.   r0,r0,0,16,16
	  beq-      .loc_0x84
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x98

	.loc_0x84:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1E0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x98:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xE0
	  mr        r3, r30
	  bl        0x24BC
	  b         .loc_0xE0

	.loc_0xAC:
	  lwz       r4, -0x6E1C(r13)
	  mr        r3, r30
	  addi      r0, r4, 0x1
	  stw       r0, -0x6E1C(r13)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1E0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0xE0
	  mr        r3, r30
	  bl        0x24E0

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
 * Address:	800FF364
 * Size:	0001E0
 */
void Game::EnemyBaseFSM::BirthTypeDropState::isFinishableWaitingBirthTypeDrop(
    (Game::EnemyBase*))
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
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  mr        r29, r4
	  addi      r3, r1, 0x48
	  lwz       r5, 0xC0(r4)
	  addi      r4, r1, 0x38
	  lfs       f0, 0x18C(r29)
	  li        r31, 0
	  lfs       f1, 0x3AC(r5)
	  stfs      f0, 0x38(r1)
	  lfs       f0, 0x190(r29)
	  stfs      f0, 0x3C(r1)
	  lfs       f0, 0x194(r29)
	  stfs      f0, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  bl        0x12EFD8
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x48
	  bl        0x12F00C
	  addi      r3, r1, 0x68
	  bl        0x12F080
	  b         .loc_0x198

	.loc_0x80:
	  addi      r3, r1, 0x68
	  bl        0x12F15C
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190

	.loc_0xF8:
	  mr        r4, r30
	  lwz       r5, 0xC0(r29)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x14
	  lfs       f29, 0x3AC(r5)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f30, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x34(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x28(r1)
	  fmuls     f0, f29, f29
	  fsubs     f1, f1, f31
	  fmuls     f1, f1, f1
	  fmadds    f1, f30, f30, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x190
	  li        r31, 0x1

	.loc_0x190:
	  addi      r3, r1, 0x68
	  bl        0x12F008

	.loc_0x198:
	  addi      r3, r1, 0x68
	  bl        0x12F034
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x80
	  mr        r3, r31
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r29, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FF544
 * Size:	00000C
 */
void Game::Creature::isAlive(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r3,r0,31,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FF550
 * Size:	0001A8
 */
void Game::EnemyBaseFSM::BirthTypeDropState::init((Game::EnemyBase*,
                                                   Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  lwz       r3, -0x6CF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x168
	  lwz       r12, 0x4(r3)
	  addi      r4, r31, 0x18C
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x6BC8(r2)
	  mr        r3, r31
	  fadds     f0, f0, f1
	  stfs      f0, 0x190(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x3
	  beq-      .loc_0x168
	  cmpwi     r3, 0x4
	  beq-      .loc_0x168
	  cmpwi     r3, 0x5
	  beq-      .loc_0x168
	  cmpwi     r3, 0x6
	  beq-      .loc_0x168
	  cmpwi     r3, 0x7
	  beq-      .loc_0x168
	  cmpwi     r3, 0x8
	  beq-      .loc_0x168
	  bl        -0x36034
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x6BA8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x6BC4(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x6BC0(r2)
	  fsubs     f4, f0, f3
	  lfs       f0, -0x6BB0(r2)
	  lfs       f3, -0x6BBC(r2)
	  fdivs     f2, f4, f2
	  fmuls     f4, f1, f2
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0xF0
	  lfs       f0, -0x6BB8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x114

	.loc_0xF0:
	  lfs       f0, -0x6BB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x114:
	  lfs       f1, 0x18C(r31)
	  lfs       f0, -0x6BB0(r2)
	  fmadds    f1, f3, f2, f1
	  fcmpo     cr0, f4, f0
	  stfs      f1, 0x18C(r31)
	  bge-      .loc_0x130
	  fneg      f4, f4

	.loc_0x130:
	  lfs       f0, -0x6BB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f2, -0x6BBC(r2)
	  fmuls     f1, f4, f0
	  lfs       f0, 0x194(r31)
	  fctiwz    f1, f1
	  stfd      f1, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x194(r31)

	.loc_0x168:
	  mr        r3, r31
	  addi      r4, r31, 0x18C
	  li        r5, 0
	  bl        0x3BAE4
	  mr        r3, r31
	  bl        0x3C69C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2D4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FF6F8
 * Size:	00006C
 */
void Game::EnemyBaseFSM::BirthTypeDropState::update((Game::EnemyBase*))
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
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
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
 * Address:	800FF764
 * Size:	000030
 */
void Game::EnemyBaseFSM::BirthTypeDropState::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x2D8(r12)
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
 * Address:	800FF794
 * Size:	0001C4
 */
void Game::EnemyBaseFSM::BirthTypeDropPikminState::
    isFinishableWaitingBirthTypeDrop((Game::EnemyBase*))
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
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  mr        r29, r4
	  addi      r3, r1, 0x48
	  lwz       r5, 0xC0(r4)
	  addi      r4, r1, 0x38
	  lfs       f0, 0x18C(r29)
	  li        r31, 0
	  lfs       f1, 0x3AC(r5)
	  stfs      f0, 0x38(r1)
	  lfs       f0, 0x190(r29)
	  stfs      f0, 0x3C(r1)
	  lfs       f0, 0x194(r29)
	  stfs      f0, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  bl        0x12EBA8
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x48
	  bl        0x12EBDC
	  addi      r3, r1, 0x68
	  bl        0x12EC50
	  b         .loc_0x17C

	.loc_0x80:
	  addi      r3, r1, 0x68
	  bl        0x12ED2C
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x174
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x174
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x174
	  mr        r4, r30
	  lwz       r5, 0xC0(r29)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x14
	  lfs       f29, 0x3AC(r5)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f30, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x34(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x28(r1)
	  fmuls     f0, f29, f29
	  fsubs     f1, f1, f31
	  fmuls     f1, f1, f1
	  fmadds    f1, f30, f30, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x174
	  li        r31, 0x1

	.loc_0x174:
	  addi      r3, r1, 0x68
	  bl        0x12EBF4

	.loc_0x17C:
	  addi      r3, r1, 0x68
	  bl        0x12EC20
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x80
	  mr        r3, r31
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r29, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FF958
 * Size:	0001A8
 */
void Game::EnemyBaseFSM::BirthTypeDropOlimarState::
    isFinishableWaitingBirthTypeDrop((Game::EnemyBase*))
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
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  mr        r29, r4
	  addi      r3, r1, 0x48
	  lwz       r5, 0xC0(r4)
	  addi      r4, r1, 0x38
	  lfs       f0, 0x18C(r29)
	  li        r31, 0
	  lfs       f1, 0x3AC(r5)
	  stfs      f0, 0x38(r1)
	  lfs       f0, 0x190(r29)
	  stfs      f0, 0x3C(r1)
	  lfs       f0, 0x194(r29)
	  stfs      f0, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  bl        0x12E9E4
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x48
	  bl        0x12EA18
	  addi      r3, r1, 0x68
	  bl        0x12EA8C
	  b         .loc_0x160

	.loc_0x80:
	  addi      r3, r1, 0x68
	  bl        0x12EB68
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x158
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x158
	  mr        r4, r30
	  lwz       r5, 0xC0(r29)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x14
	  lfs       f29, 0x3AC(r5)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f30, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x34(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x28(r1)
	  fmuls     f0, f29, f29
	  fsubs     f1, f1, f31
	  fmuls     f1, f1, f1
	  fmadds    f1, f30, f30, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x158
	  li        r31, 0x1

	.loc_0x158:
	  addi      r3, r1, 0x68
	  bl        0x12EA4C

	.loc_0x160:
	  addi      r3, r1, 0x68
	  bl        0x12EA78
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x80
	  mr        r3, r31
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r29, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FFB00
 * Size:	00018C
 */
void Game::EnemyBaseFSM::BirthTypeDropTreasureState::
    isFinishableWaitingBirthTypeDrop((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r29, r4
	  addi      r3, r1, 0x44
	  li        r31, 0
	  bl        0x6CE2C
	  addi      r3, r1, 0x44
	  bl        0x6CE3C
	  b         .loc_0x144

	.loc_0x4C:
	  addi      r3, r1, 0x44
	  bl        0x6CE7C
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x13C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x204(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x13C
	  mr        r4, r30
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lwz       r5, 0xC0(r29)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x14
	  lfs       f29, 0x3AC(r5)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f30, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x34(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x28(r1)
	  fmuls     f0, f29, f29
	  fsubs     f1, f1, f31
	  fmuls     f1, f1, f1
	  fmadds    f1, f30, f30, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x13C
	  li        r31, 0x1

	.loc_0x13C:
	  addi      r3, r1, 0x44
	  bl        0x6CDF4

	.loc_0x144:
	  addi      r3, r1, 0x44
	  bl        0x6CEAC
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x4C
	  mr        r3, r31
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FFC8C
 * Size:	00001C
 */
void Game::Pellet::getPosition(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x3AC(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x3B0(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x3B4(r4)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FFCA8
 * Size:	000008
 */
void Game::EnemyBaseFSM::BirthTypeDropEarthquakeState::
    isFinishableWaitingBirthTypeDrop((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FFCB0
 * Size:	000024
 */
void Game::EnemyBaseFSM::AppearState::entry((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x3850
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FFCD4
 * Size:	0000FC
 */
void Game::EnemyBaseFSM::AppearState::init((Game::EnemyBase*, Game::StateArg*))
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
	  lis       r5, 0x804B
	  lis       r3, 0x804F
	  subi      r0, r5, 0x5808
	  mr        r30, r4
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x7A68
	  mr        r3, r30
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  lfs       f31, 0x1F8(r4)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r31, r3
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0xC
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0x10(r1)
	  subi      r5, r3, 0x5814
	  lwz       r6, 0x14(r1)
	  lis       r3, 0x804B
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x5820
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x24
	  stw       r7, 0x1C(r1)
	  lfs       f2, 0x18(r1)
	  stw       r6, 0x20(r1)
	  lfs       f1, 0x1C(r1)
	  stw       r5, 0x24(r1)
	  lfs       f0, 0x20(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x34(r1)
	  stfs      f31, 0x38(r1)
	  bl        0x2C9420
	  lfs       f0, -0x6BB0(r2)
	  stfs      f0, 0x168(r30)
	  stfs      f0, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  stfs      f0, 0x214(r30)
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
 * Address:	800FFDD0
 * Size:	00001C
 */
void Game::EnemyBase::getPosition(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x190(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x194(r4)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FFDEC
 * Size:	000130
 */
void Game::EnemyBaseFSM::AppearState::update((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f3, -0x6BA0(r2)
	  stw       r0, 0x24(r1)
	  lfs       f1, -0x6B9C(r2)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  lwz       r5, -0x6514(r13)
	  lfs       f0, 0x214(r4)
	  lfs       f2, 0x54(r5)
	  fmadds    f0, f3, f2, f0
	  stfs      f0, 0x214(r4)
	  lfs       f0, 0x214(r4)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x11C

	.loc_0x58:
	  fmuls     f0, f3, f0
	  stfs      f0, 0x168(r31)
	  lfs       f0, 0x168(r31)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x70
	  stfs      f1, 0x168(r31)

	.loc_0x70:
	  lfs       f2, -0x6BC0(r2)
	  lfs       f1, 0x214(r31)
	  lfs       f0, -0x6BB0(r2)
	  fmuls     f1, f2, f1
	  lfs       f2, -0x6B98(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB8
	  lfs       f0, -0x6BB8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0xDC

	.loc_0xB8:
	  lfs       f0, -0x6BB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0xDC:
	  lfs       f0, 0x168(r31)
	  mr        r3, r31
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x168(r31)
	  lfs       f0, 0x168(r31)
	  stfs      f0, 0x170(r31)
	  stfs      f0, 0x16C(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1CC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x11C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FFF1C
 * Size:	00001C
 */
void Game::EnemyBaseFSM::AppearState::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  lfs       f1, -0x6B9C(r2)
	  lfs       f0, -0x6BB0(r2)
	  stfs      f1, 0x168(r4)
	  stfs      f1, 0x16C(r4)
	  stfs      f1, 0x170(r4)
	  stfs      f0, 0x214(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800FFF38
 * Size:	00010C
 */
void Game::EnemyBaseFSM::LivingState::simulation((Game::EnemyBase*, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r4
	  lwz       r0, 0x1E0(r4)
	  rlwinm.   r4,r0,0,13,13
	  bne-      .loc_0x5C
	  rlwinm.   r0,r0,0,21,21
	  li        r3, 0
	  bne-      .loc_0x3C
	  cmplwi    r4, 0
	  beq-      .loc_0x40

	.loc_0x3C:
	  li        r3, 0x1

	.loc_0x40:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  lwz       r3, 0x1E4(r31)
	  rlwinm.   r0,r3,0,31,31
	  bne-      .loc_0x7C
	  rlwinm.   r0,r3,0,27,27
	  bne-      .loc_0x7C

	.loc_0x5C:
	  mr        r3, r31
	  bl        0x3710
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA0
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x4AE0
	  b         .loc_0xA0

	.loc_0x7C:
	  mr        r3, r31
	  bl        0x36F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA0
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x4374
	  mr        r3, r31
	  bl        0x6BCC

	.loc_0xA0:
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x8(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stb       r0, 0x8(r1)
	  bl        0x3BC34
	  cmpwi     r3, 0x2
	  bne-      .loc_0xF4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x4B3C

	.loc_0xF4:
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80100044
 * Size:	000008
 */
void Game::EnemyBase::getCreatureID(void)
{
	/*
	.loc_0x0:
	  lbz       r3, 0x1F1(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010004C
 * Size:	000038
 */
void Game::EnemyBase::getCreatureName(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x1
	  subi      r4, r4, 0x1
	  bl        0x2326C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80100084
 * Size:	000040
 */
void Game::EnemyBaseFSM::LivingState::entry((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x17C(r4)
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  mr        r3, r4
	  bl        0x3364
	  b         .loc_0x30

	.loc_0x28:
	  mr        r3, r4
	  bl        0x3460

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801000C4
 * Size:	000030
 */
void Game::EnemyBaseFSM::LivingState::updateCullingOff((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x1CC(r12)
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
 * Address:	801000F4
 * Size:	000030
 */
void Game::EnemyBaseFSM::LivingState::updateAlways((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  rlwinm.   r0,r0,0,11,11
	  beq-      .loc_0x20
	  mr        r3, r4
	  bl        0x2D54

	.loc_0x20:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80100124
 * Size:	0001BC
 */
void Game::EnemyBaseFSM::LivingState::update((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  subi      r4, r5, 0x5AC8
	  li        r5, 0x1
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x28(r6)
	  bl        0x32A9A4
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,16,14
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,15,13
	  stw       r0, 0x1E0(r31)
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x17C(r31)
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x190

	.loc_0x88:
	  mr        r3, r31
	  bl        0x34F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D0(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x6BB0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x134
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x134
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2C0(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x23C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x134:
	  lfs       f1, 0x2AC(r31)
	  lfs       f0, -0x6BB0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x190
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2A8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2A8(r31)
	  lfs       f1, 0x2A8(r31)
	  lfs       f0, 0x2AC(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x190
	  lfs       f1, 0x204(r31)
	  mr        r3, r31
	  lfs       f2, -0x6B9C(r2)
	  bl        0x5D94
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r31)

	.loc_0x190:
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x5AC8
	  lwz       r3, 0x28(r5)
	  bl        0x32A838
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
 * Address:	801002E0
 * Size:	000048
 */
void Game::EnemyBaseFSM::FitState::updateCullingOff((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x6BB0(r2)
	  stw       r0, 0x14(r1)
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x38
	  lwz       r12, 0x0(r3)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80100328
 * Size:	000150
 */
void Game::EnemyBaseFSM::FitState::init((Game::EnemyBase*, Game::StateArg*))
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
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1CC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  stw       r0, 0x1E8(r31)
	  lwz       r0, 0x1E4(r31)
	  stw       r0, 0x1EC(r31)
	  lwz       r0, 0x1E4(r31)
	  ori       r0, r0, 0x2
	  stw       r0, 0x1E4(r31)
	  bl        0x6F60
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x6BB0(r2)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stfs      f0, 0x1C8(r31)
	  stfs      f0, 0x1CC(r31)
	  stfs      f0, 0x1D0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2B8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x1F8(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x18C(r31)
	  lis       r5, 0x804B
	  lwz       r7, 0x190(r31)
	  lis       r4, 0x804B
	  lwz       r6, 0x194(r31)
	  subi      r5, r5, 0x5814
	  stw       r0, 0x8(r1)
	  subi      r0, r4, 0x5820
	  addi      r4, r1, 0x14
	  stw       r7, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r6, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f0, 0x10(r1)
	  stw       r3, 0x24(r1)
	  addi      r3, r30, 0x10
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  stw       r0, 0x14(r1)
	  stfs      f31, 0x28(r1)
	  lwz       r12, 0x10(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80100478
 * Size:	000080
 */
void Game::EnemyBaseFSM::FitState::cleanup((Game::EnemyBase*))
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
	  lwz       r0, 0x1E8(r4)
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1EC(r4)
	  stw       r0, 0x1E4(r4)
	  lwz       r0, 0x1E4(r4)
	  rlwinm    r0,r0,0,31,29
	  stw       r0, 0x1E4(r4)
	  bl        0x6D50
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2BC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r30, 0x10
	  lwz       r12, 0x10(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	801004F8
 * Size:	000204
 */
void Game::EnemyBaseFSM::FitState::updateAlways((Game::EnemyBase*))
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
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x214(r4)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x214(r4)
	  lwz       r3, 0xC0(r4)
	  lfs       f4, 0x214(r4)
	  lfs       f3, 0x6CC(r3)
	  fcmpo     cr0, f4, f3
	  bgt-      .loc_0x64
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,11,11
	  bne-      .loc_0x64
	  lfs       f0, 0x200(r31)
	  lfs       f2, -0x6BB0(r2)
	  fcmpo     cr0, f0, f2
	  cror      2, 0, 0x2
	  bne-      .loc_0x90

	.loc_0x64:
	  lfs       f0, -0x6BB0(r2)
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x6
	  stfs      f0, 0x214(r31)
	  li        r6, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D4

	.loc_0x90:
	  lfs       f0, -0x6B94(r2)
	  lfs       f1, -0x6B90(r2)
	  fmuls     f0, f0, f4
	  fdivs     f3, f0, f3
	  fcmpo     cr0, f3, f2
	  bge-      .loc_0xD4
	  lfs       f0, -0x6BB8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0xF8

	.loc_0xD4:
	  lfs       f0, -0x6BB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0xF8:
	  fmuls     f5, f1, f0
	  lfs       f0, -0x6B9C(r2)
	  fcmpo     cr0, f5, f0
	  ble-      .loc_0x10C
	  fmr       f5, f0

	.loc_0x10C:
	  lfs       f0, -0x6BC0(r2)
	  lfs       f2, -0x6B8C(r2)
	  fmuls     f3, f0, f4
	  lfs       f0, -0x6BB0(r2)
	  lfs       f1, -0x6B88(r2)
	  fdivs     f2, f3, f2
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x158
	  lfs       f0, -0x6BB8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x17C

	.loc_0x158:
	  lfs       f0, -0x6BB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x17C:
	  fmuls     f1, f1, f0
	  lfs       f0, -0x6BB0(r2)
	  fcmpo     cr0, f2, f0
	  fmuls     f1, f5, f1
	  stfs      f1, 0x1BC(r31)
	  stfs      f0, 0x1C0(r31)
	  bge-      .loc_0x19C
	  fneg      f2, f2

	.loc_0x19C:
	  lfs       f0, -0x6BB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f1, -0x6B88(r2)
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f1, f0
	  fmuls     f0, f5, f0
	  stfs      f0, 0x1C4(r31)

	.loc_0x1D4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r30)
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
 * Address:	801006FC
 * Size:	000088
 */
void Game::EnemyBaseFSM::EarthquakeState::init((Game::EnemyBase*,
                                                Game::StateArg*))
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
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1CC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E4(r30)
	  mr        r3, r30
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E4(r30)
	  bl        0x6B9C
	  mr        r3, r30
	  lfs       f1, 0x0(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2B0(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x10(r29)
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
 * Address:	80100784
 * Size:	000050
 */
void Game::EnemyBaseFSM::EarthquakeState::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E4(r4)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1E4(r4)
	  bl        0x6A5C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2B4(r12)
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
 * Address:	801007D4
 * Size:	000158
 */
void Game::EnemyBaseFSM::EarthquakeState::updateCullingOff((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x6BB0(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x58
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x140

	.loc_0x58:
	  lwz       r3, 0x10(r30)
	  addi      r0, r3, 0x1
	  cmpwi     r0, 0x3
	  stw       r0, 0x10(r30)
	  ble-      .loc_0x118
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  bl        -0x372AC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x6BA8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x6BC4(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, 0x214(r31)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x6BB0(r2)
	  fcmpo     cr0, f1, f0
	  fdivs     f1, f3, f2
	  bgt-      .loc_0xD4
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x6A4(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF8
	  lwz       r3, 0x1E0(r31)
	  rlwinm.   r0,r3,0,11,11
	  bne-      .loc_0xF8
	  rlwinm.   r0,r3,0,10,10
	  bne-      .loc_0xF8

	.loc_0xD4:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x118

	.loc_0xF8:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x118:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x140
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r31)

	.loc_0x140:
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
 * Address:	8010092C
 * Size:	00000C
 */
void Game::EnemyBase::isFlying(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r3,r0,30,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80100938
 * Size:	000064
 */
void Game::EnemyBaseFSM::StoneState::bounceProcedure((Game::EnemyBase*,
                                                      Sys::Triangle*))
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
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2EC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r31, 0x18C
	  bl        0x31DC
	  lfs       f1, -0x6BB0(r2)
	  mr        r3, r31
	  lfs       f2, -0x6B9C(r2)
	  bl        0x56A8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010099C
 * Size:	000100
 */
void Game::EnemyBaseFSM::StoneState::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r3, 0x1E0(r4)
	  rlwinm.   r0,r3,0,11,11
	  beq-      .loc_0x2C
	  rlwinm    r0,r3,0,12,10
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x40

	.loc_0x2C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1CC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  stw       r0, 0x1E8(r31)
	  lwz       r0, 0x1E4(r31)
	  stw       r0, 0x1EC(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x200
	  stw       r0, 0x1E0(r31)
	  bl        0x29B8
	  lfs       f0, -0x6BB0(r2)
	  mr        r3, r31
	  stfs      f0, 0x21C(r31)
	  bl        0x68D4
	  lfs       f0, -0x6BB0(r2)
	  stfs      f0, 0x1C8(r31)
	  stfs      f0, 0x1CC(r31)
	  stfs      f0, 0x1D0(r31)
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xA0
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r31)
	  b         .loc_0xAC

	.loc_0xA0:
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r31)

	.loc_0xAC:
	  lbz       r0, 0x1F0(r31)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xD8
	  bl        0x237254
	  cmplwi    r3, 0
	  beq-      .loc_0xD8
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2A4(r12)
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
 * Address:	80100A9C
 * Size:	0000CC
 */
void Game::EnemyBaseFSM::StoneState::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r0, 0x1E0(r4)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x3C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x5ABC
	  li        r4, 0x400
	  subi      r5, r5, 0x5AAC
	  crclr     6, 0x6
	  bl        -0xD6494

	.loc_0x3C:
	  lwz       r0, 0x1E8(r31)
	  mr        r3, r31
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1EC(r31)
	  stw       r0, 0x1E4(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,12,10
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,23,21
	  stw       r0, 0x1E0(r31)
	  bl        0x2834
	  mr        r3, r31
	  bl        0x66F8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2A8(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1F0(r31)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xB8
	  bl        0x237178
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lwz       r3, 0x28C(r31)
	  addi      r3, r3, 0xB8
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80100B68
 * Size:	000118
 */
void Game::EnemyBaseFSM::StoneState::updateAlways((Game::EnemyBase*))
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
	  lwz       r3, 0x24C(r4)
	  bl        0x29234
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x21C(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x21C(r31)
	  lwz       r3, 0x24C(r31)
	  lbz       r0, 0x50(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x100
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  mr        r3, r31
	  bl        0x6BAC
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r31)

	.loc_0x68:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x21C(r31)
	  lfs       f0, 0x654(r3)
	  fcmpo     cr0, f1, f0
	  mfcr      r3
	  lis       r0, 0x4330
	  rlwinm    r3,r3,2,31,31
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x6B80(r2)
	  stw       r3, 0xC(r1)
	  lfs       f0, -0x6BB0(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x100
	  lwz       r3, 0x24C(r31)
	  lbz       r4, 0x50(r3)
	  rlwinm.   r0,r4,0,28,28
	  beq-      .loc_0xFC
	  rlwinm.   r0,r4,0,27,27
	  beq-      .loc_0x100
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x100
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x100

	.loc_0xFC:
	  bl        0x29078

	.loc_0x100:
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
 * Address:	80100C80
 * Size:	000074
 */
void Game::EnemyBaseFSM::StoneState::updateCullingOff((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  mr        r3, r31
	  bl        0x6684
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x6BB0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x60
	  mr        r3, r31
	  li        r4, 0
	  bl        0x3A414

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80100CF4
 * Size:	000484
 */
void Game::EnemyBaseFSM::StateMachine::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x5AE0
	  li        r4, 0xA
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x2FB4C
	  li        r3, 0x10
	  bl        -0xDCE7C
	  mr.       r4, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r6, 0
	  subi      r5, r5, 0x5690
	  subi      r3, r3, 0x56CC
	  stw       r6, 0x4(r4)
	  addi      r0, r31, 0x40
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0x70:
	  mr        r3, r30
	  bl        0x2FBA0
	  li        r3, 0x10
	  bl        -0xDCECC
	  mr.       r4, r3
	  beq-      .loc_0xD8
	  lis       r3, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r3, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r4)
	  li        r7, 0x1
	  lis       r3, 0x804B
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x5690
	  subi      r6, r5, 0x56CC
	  addi      r5, r31, 0x40
	  stw       r0, 0x8(r4)
	  subi      r3, r3, 0x5708
	  addi      r0, r31, 0x50
	  stw       r7, 0x0(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0xD8:
	  mr        r3, r30
	  bl        0x2FB38
	  li        r3, 0x10
	  bl        -0xDCF34
	  mr.       r4, r3
	  beq-      .loc_0x140
	  lis       r3, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r3, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r4)
	  li        r7, 0x2
	  lis       r3, 0x804B
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x5690
	  subi      r6, r5, 0x56CC
	  addi      r5, r31, 0x40
	  stw       r0, 0x8(r4)
	  subi      r3, r3, 0x5744
	  addi      r0, r31, 0x64
	  stw       r7, 0x0(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0x140:
	  mr        r3, r30
	  bl        0x2FAD0
	  li        r3, 0x10
	  bl        -0xDCF9C
	  mr.       r4, r3
	  beq-      .loc_0x1A8
	  lis       r3, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r3, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r4)
	  li        r7, 0x3
	  lis       r3, 0x804B
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x5690
	  subi      r6, r5, 0x56CC
	  addi      r5, r31, 0x40
	  stw       r0, 0x8(r4)
	  subi      r3, r3, 0x5780
	  addi      r0, r31, 0x78
	  stw       r7, 0x0(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0x1A8:
	  mr        r3, r30
	  bl        0x2FA68
	  li        r3, 0x10
	  bl        -0xDD004
	  mr.       r4, r3
	  beq-      .loc_0x210
	  lis       r3, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r3, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r4)
	  li        r7, 0x4
	  lis       r3, 0x804B
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x5690
	  subi      r6, r5, 0x56CC
	  addi      r5, r31, 0x40
	  stw       r0, 0x8(r4)
	  subi      r3, r3, 0x57BC
	  addi      r0, r31, 0x90
	  stw       r7, 0x0(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0x210:
	  mr        r3, r30
	  bl        0x2FA00
	  li        r3, 0x10
	  bl        -0xDD06C
	  mr.       r4, r3
	  beq-      .loc_0x264
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r6, 0
	  subi      r5, r5, 0x5690
	  stw       r0, 0x4(r4)
	  subi      r3, r3, 0x57F4
	  subi      r0, r2, 0x6B78
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0x264:
	  mr        r3, r30
	  bl        0x2F9AC
	  li        r3, 0x10
	  bl        -0xDD0C0
	  mr.       r4, r3
	  beq-      .loc_0x2B8
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r6, 0
	  subi      r5, r5, 0x5690
	  stw       r0, 0x4(r4)
	  subi      r3, r3, 0x5860
	  subi      r0, r2, 0x6B70
	  stw       r6, 0x8(r4)
	  stw       r5, 0x0(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0x2B8:
	  mr        r3, r30
	  bl        0x2F958
	  li        r3, 0x10
	  bl        -0xDD114
	  mr.       r4, r3
	  beq-      .loc_0x320
	  lis       r3, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r3, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r4)
	  li        r7, 0x7
	  lis       r3, 0x804B
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x5690
	  subi      r6, r5, 0x5860
	  subi      r5, r2, 0x6B70
	  stw       r0, 0x8(r4)
	  subi      r3, r3, 0x5920
	  subi      r0, r2, 0x6B68
	  stw       r7, 0x0(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0x320:
	  mr        r3, r30
	  bl        0x2F8F0
	  li        r3, 0x14
	  bl        -0xDD17C
	  mr.       r4, r3
	  beq-      .loc_0x38C
	  lis       r3, 0x804B
	  lis       r6, 0x804B
	  subi      r0, r3, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  lis       r3, 0x804B
	  li        r8, 0
	  stw       r0, 0x4(r4)
	  subi      r7, r6, 0x5690
	  subi      r6, r5, 0x5860
	  subi      r5, r2, 0x6B70
	  stw       r8, 0x8(r4)
	  subi      r3, r3, 0x58E0
	  addi      r0, r31, 0xA8
	  stw       r7, 0x0(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r3, 0x0(r4)
	  stw       r8, 0x10(r4)
	  stw       r0, 0xC(r4)

	.loc_0x38C:
	  mr        r3, r30
	  bl        0x2F884
	  li        r3, 0x24
	  bl        -0xDD1E8
	  mr.       r4, r3
	  beq-      .loc_0x464
	  lis       r3, 0x804B
	  lis       r8, 0x804B
	  subi      r0, r3, 0x65C
	  lis       r5, 0x804B
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  lis       r9, 0x804B
	  lis       r7, 0x804B
	  stw       r0, 0x4(r4)
	  li        r31, 0
	  lis       r6, 0x804A
	  lis       r3, 0x804E
	  stw       r31, 0x8(r4)
	  subi      r0, r8, 0x5690
	  addi      r11, r3, 0x698C
	  lis       r3, 0x804E
	  stw       r0, 0x0(r4)
	  subi      r0, r5, 0x5860
	  addi      r8, r3, 0x6940
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  subi      r0, r2, 0x6B70
	  subi      r5, r3, 0x7900
	  subi      r3, r9, 0x58A0
	  stw       r0, 0xC(r4)
	  subi      r0, r7, 0x5808
	  subi      r12, r6, 0x1D84
	  addi      r10, r11, 0x14
	  stw       r3, 0x0(r4)
	  li        r9, 0x2B2
	  addi      r7, r8, 0x14
	  li        r6, 0x291
	  stw       r0, 0x10(r4)
	  addi      r3, r5, 0x14
	  subi      r0, r2, 0x6B60
	  stw       r12, 0x14(r4)
	  stw       r11, 0x10(r4)
	  stw       r10, 0x14(r4)
	  stw       r31, 0x18(r4)
	  sth       r9, 0x1C(r4)
	  stb       r31, 0x1E(r4)
	  stw       r8, 0x10(r4)
	  stw       r7, 0x14(r4)
	  stw       r31, 0x20(r4)
	  sth       r6, 0x1C(r4)
	  stw       r5, 0x10(r4)
	  stw       r3, 0x14(r4)
	  stw       r0, 0xC(r4)

	.loc_0x464:
	  mr        r3, r30
	  bl        0x2F7AC
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
 * Address:	80101178
 * Size:	00009C
 */
void efx::TEnemyPiyo::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804F
	  subi      r3, r3, 0x7900
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6940
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0x71548

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0xDD140

	.loc_0x80:
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
 * Address:	80101214
 * Size:	000084
 */
void efx::TChasePos::__dt(void)
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
	  addi      r3, r3, 0x6940
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x58
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0x715CC

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0xDD1C4

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
 * Address:	80101298
 * Size:	00006C
 */
void efx::TSync::__dt(void)
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
	  beq-      .loc_0x50
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0x71638
	  extsh.    r0, r31
	  ble-      .loc_0x50
	  mr        r3, r30
	  bl        -0xDD230

	.loc_0x50:
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
 * Address:	80101304
 * Size:	000030
 */
void Game::EnemyBaseFSM::StateMachine::update((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1C(r3)
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

/*
 * --INFO--
 * Address:	80101334
 * Size:	000004
 */
void Game::EnemyBaseFSM::State::update((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80101338
 * Size:	000030
 */
void Game::EnemyBaseFSM::StateMachine::entry((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1C(r3)
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
 * Address:	80101368
 * Size:	000004
 */
void Game::EnemyBaseFSM::State::entry((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010136C
 * Size:	000030
 */
void Game::EnemyBaseFSM::StateMachine::simulation((Game::EnemyBase*, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
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
 * Address:	8010139C
 * Size:	000004
 */
void Game::EnemyBaseFSM::State::simulation((Game::EnemyBase*, float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801013A0
 * Size:	000370
 */
void Game::EnemyBase::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  beq-      .loc_0x40
	  addi      r0, r31, 0x2BC
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2BC(r31)
	  stw       r0, 0x2C0(r31)
	  stw       r0, 0x2C4(r31)

	.loc_0x40:
	  mr        r3, r31
	  bl        0x39AA0
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r3, 0x5994
	  lfs       f0, -0x6BB0(r2)
	  stw       r0, 0x178(r31)
	  subi      r5, r4, 0x5CDC
	  lis       r3, 0x8010
	  addi      r0, r31, 0x2BC
	  stw       r5, 0x0(r31)
	  addi      r4, r3, 0x1770
	  addi      r3, r5, 0x1B0
	  addi      r9, r5, 0x2F8
	  stw       r3, 0x178(r31)
	  addi      r3, r31, 0x1E0
	  li        r5, 0
	  li        r6, 0x4
	  lwz       r8, 0x17C(r31)
	  li        r7, 0x2
	  stw       r9, 0x0(r8)
	  lwz       r8, 0x17C(r31)
	  sub       r0, r0, r8
	  stw       r0, 0xC(r8)
	  stfs      f0, 0x18C(r31)
	  stfs      f0, 0x190(r31)
	  stfs      f0, 0x194(r31)
	  stfs      f0, 0x1A4(r31)
	  stfs      f0, 0x1A8(r31)
	  stfs      f0, 0x1AC(r31)
	  stfs      f0, 0x1B0(r31)
	  stfs      f0, 0x1B4(r31)
	  stfs      f0, 0x1B8(r31)
	  stfs      f0, 0x1BC(r31)
	  stfs      f0, 0x1C0(r31)
	  stfs      f0, 0x1C4(r31)
	  bl        -0x3FC34
	  li        r0, 0
	  lis       r3, 0x8010
	  stb       r0, 0x1E0(r31)
	  addi      r4, r3, 0x1770
	  addi      r3, r31, 0x1E8
	  li        r5, 0
	  stb       r0, 0x1E1(r31)
	  li        r6, 0x4
	  li        r7, 0x2
	  stb       r0, 0x1E2(r31)
	  stb       r0, 0x1E3(r31)
	  stb       r0, 0x1E4(r31)
	  stb       r0, 0x1E5(r31)
	  stb       r0, 0x1E6(r31)
	  stb       r0, 0x1E7(r31)
	  bl        -0x3FC74
	  li        r5, 0
	  li        r4, 0x1
	  stb       r5, 0x1E8(r31)
	  li        r0, 0xFF
	  lfs       f0, -0x6BB0(r2)
	  addi      r3, r31, 0x258
	  stb       r5, 0x1E9(r31)
	  stb       r5, 0x1EA(r31)
	  stb       r5, 0x1EB(r31)
	  stb       r5, 0x1EC(r31)
	  stb       r5, 0x1ED(r31)
	  stb       r5, 0x1EE(r31)
	  stb       r5, 0x1EF(r31)
	  stb       r4, 0x1F0(r31)
	  stb       r0, 0x1F1(r31)
	  stb       r0, 0x1F2(r31)
	  stw       r5, 0x1F4(r31)
	  stfs      f0, 0x214(r31)
	  stfs      f0, 0x218(r31)
	  stfs      f0, 0x21C(r31)
	  stw       r5, 0x234(r31)
	  stw       r5, 0x238(r31)
	  stw       r5, 0x23C(r31)
	  stfs      f0, 0x240(r31)
	  stfs      f0, 0x244(r31)
	  stfs      f0, 0x248(r31)
	  stw       r5, 0x24C(r31)
	  sth       r5, 0x250(r31)
	  stw       r5, 0x254(r31)
	  bl        0x2CE24
	  addi      r3, r31, 0x264
	  bl        0xD62D8
	  li        r0, 0
	  addi      r3, r31, 0x290
	  stw       r0, 0x280(r31)
	  stw       r0, 0x288(r31)
	  stw       r0, 0x28C(r31)
	  bl        0x30FE48
	  lfs       f1, -0x6BB0(r2)
	  li        r6, 0
	  li        r0, 0x2
	  lfs       f0, -0x6B9C(r2)
	  stfs      f1, 0x2A8(r31)
	  mr        r4, r31
	  addi      r3, r31, 0xA8
	  li        r5, 0x8
	  stfs      f1, 0x2AC(r31)
	  stb       r6, 0x2B0(r31)
	  stw       r6, 0x2B4(r31)
	  stw       r6, 0x2B8(r31)
	  stb       r6, 0xBC(r31)
	  stb       r6, 0xBD(r31)
	  stb       r6, 0xBE(r31)
	  stb       r6, 0xBF(r31)
	  sth       r0, 0x128(r31)
	  stfs      f0, 0x1F8(r31)
	  bl        0x5589C
	  li        r0, 0
	  li        r3, 0x28
	  stw       r0, 0x184(r31)
	  bl        -0xDD700
	  mr.       r30, r3
	  beq-      .loc_0x244
	  bl        0x30FDE0
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x59A4
	  li        r5, 0
	  stw       r0, 0x0(r30)
	  li        r4, -0x1
	  subi      r0, r3, 0x59B4
	  stw       r5, 0x18(r30)
	  stw       r5, 0x1C(r30)
	  sth       r4, 0x20(r30)
	  stw       r0, 0x0(r30)
	  stb       r5, 0x24(r30)

	.loc_0x244:
	  stw       r30, 0x188(r31)
	  li        r0, 0
	  lfs       f0, -0x6BB0(r2)
	  li        r3, 0x20
	  stfs      f0, 0x210(r31)
	  stw       r0, 0x230(r31)
	  stw       r0, 0xC8(r31)
	  bl        -0xDD75C
	  cmplwi    r3, 0
	  beq-      .loc_0x28C
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x5958
	  stw       r5, 0x18(r3)
	  stw       r0, 0x0(r3)

	.loc_0x28C:
	  stw       r3, 0x2B8(r31)
	  mr        r4, r31
	  lwz       r3, 0x2B8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x9D848
	  lwz       r3, 0x188(r31)
	  li        r4, 0
	  lfs       f0, -0x6BB0(r2)
	  stb       r4, 0x24(r3)
	  stfs      f0, 0x208(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,31,29
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x20C(r31)
	  stfs      f0, 0x21C(r31)
	  stb       r4, 0x1E0(r31)
	  stb       r4, 0x1E1(r31)
	  stb       r4, 0x1E2(r31)
	  stb       r4, 0x1E3(r31)
	  stb       r4, 0x1E4(r31)
	  stb       r4, 0x1E5(r31)
	  stb       r4, 0x1E6(r31)
	  stb       r4, 0x1E7(r31)
	  stb       r4, 0x1E8(r31)
	  stb       r4, 0x1E9(r31)
	  stb       r4, 0x1EA(r31)
	  stb       r4, 0x1EB(r31)
	  stb       r4, 0x1EC(r31)
	  stb       r4, 0x1ED(r31)
	  stb       r4, 0x1EE(r31)
	  stb       r4, 0x1EF(r31)
	  lwz       r3, -0x6980(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x32C
	  mr        r4, r31
	  bl        0x140458

	.loc_0x32C:
	  lwz       r3, -0x6DF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x340
	  mr        r4, r31
	  bl        0x19268

	.loc_0x340:
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2A0(r31)
	  stw       r0, 0x29C(r31)
	  stw       r0, 0x298(r31)
	  stw       r0, 0x294(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80101710
 * Size:	000060
 */
void SysShape::KeyEvent::__dt(void)
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x59A4
	  stw       r0, 0x0(r30)
	  bl        0x30FE48
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0xDD69C

	.loc_0x44:
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
 * Address:	80101770
 * Size:	000018
 */
void BitFlag<unsigned long>::BitFlag()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x0(r3)
	  stb       r0, 0x1(r3)
	  stb       r0, 0x2(r3)
	  stb       r0, 0x3(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80101788
 * Size:	000044
 */
void Game::EnemyBase::constructor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x5554
	  stw       r3, 0x28C(r31)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x248(r12)
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
 * Address:	........
 * Size:	000024
 */
void Game::EnemyBase::addEffects((Game::EnemyEffectNodeBase*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801017CC
 * Size:	00005C
 */
void Game::EnemyBase::createEffects(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x2A0(r3)
	  b         .loc_0x3C

	.loc_0x20:
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  lwz       r31, 0x4(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31

	.loc_0x3C:
	  cmplwi    r3, 0
	  bne+      .loc_0x20
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
 * Address:	80101828
 * Size:	00005C
 */
void Game::EnemyBase::fadeEffects(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x2A0(r3)
	  b         .loc_0x3C

	.loc_0x20:
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  lwz       r31, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31

	.loc_0x3C:
	  cmplwi    r3, 0
	  bne+      .loc_0x20
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
 * Address:	........
 * Size:	00005C
 */
void Game::EnemyBase::forceKillEffects(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80101884
 * Size:	000050
 */
void Game::EnemyBase::createInstanceEfxHamon(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x64
	  bl        -0xDD9F8
	  mr.       r0, r3
	  beq-      .loc_0x2C
	  bl        0x2CC68
	  mr        r0, r3

	.loc_0x2C:
	  stw       r0, 0x284(r31)
	  addi      r3, r31, 0x290
	  lwz       r4, 0x284(r31)
	  bl        0x30FB4C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801018D4
 * Size:	000030
 */
void Game::EnemyBase::updateEfxHamon(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x284(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  bl        0x2D188

	.loc_0x20:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80101904
 * Size:	00003C
 */
void Game::EnemyBase::createEfxHamon(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x284(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80101940
 * Size:	00003C
 */
void Game::EnemyBase::fadeEfxHamon(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x284(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010197C
 * Size:	000050
 */
void Game::EnemyBase::setEmotionCaution(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stb       r0, 0x1F0(r3)
	  bl        0x236310
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	801019CC
 * Size:	00003C
 */
void Game::EnemyBase::setEmotionExcitement(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x2
	  stb       r0, 0x1F0(r3)
	  lwz       r3, 0x28C(r3)
	  addi      r3, r3, 0xB8
	  lwz       r12, 0x10(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	80101A08
 * Size:	000050
 */
void Game::EnemyBase::setEmotionNone(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stb       r0, 0x1F0(r3)
	  bl        0x236284
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	80101A58
 * Size:	000104
 */
void Game::EnemyBase::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x9D428
	  lwz       r3, 0x188(r31)
	  li        r4, 0
	  lfs       f0, -0x6BB0(r2)
	  stb       r4, 0x24(r3)
	  stfs      f0, 0x208(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,31,29
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x20C(r31)
	  stfs      f0, 0x21C(r31)
	  stb       r4, 0x1E0(r31)
	  stb       r4, 0x1E1(r31)
	  stb       r4, 0x1E2(r31)
	  stb       r4, 0x1E3(r31)
	  stb       r4, 0x1E4(r31)
	  stb       r4, 0x1E5(r31)
	  stb       r4, 0x1E6(r31)
	  stb       r4, 0x1E7(r31)
	  stb       r4, 0x1E8(r31)
	  stb       r4, 0x1E9(r31)
	  stb       r4, 0x1EA(r31)
	  stb       r4, 0x1EB(r31)
	  stb       r4, 0x1EC(r31)
	  stb       r4, 0x1ED(r31)
	  stb       r4, 0x1EE(r31)
	  stb       r4, 0x1EF(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x1000
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x8
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x80
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x100
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x800
	  stw       r0, 0x1E0(r31)
	  stw       r4, 0x280(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x1000
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x8000
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
 * Address:	80101B5C
 * Size:	000218
 */
void Game::EnemyBase::onInitPost((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lbz       r6, 0x2B0(r3)
	  extsb.    r6, r6
	  beq-      .loc_0x30
	  blt-      .loc_0x184
	  cmpwi     r6, 0x6
	  bge-      .loc_0x184
	  b         .loc_0x54

	.loc_0x30:
	  lwz       r3, 0x2B8(r31)
	  mr        r4, r31
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0x54:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,13,13
	  beq-      .loc_0x84
	  lwz       r3, 0x2B8(r31)
	  mr        r4, r31
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0x84:
	  cmpwi     r6, 0x3
	  beq-      .loc_0xF8
	  bge-      .loc_0xA0
	  cmpwi     r6, 0x1
	  beq-      .loc_0xB0
	  bge-      .loc_0xD4
	  b         .loc_0x164

	.loc_0xA0:
	  cmpwi     r6, 0x5
	  beq-      .loc_0x140
	  bge-      .loc_0x164
	  b         .loc_0x11C

	.loc_0xB0:
	  lwz       r3, 0x2B8(r31)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0xD4:
	  lwz       r3, 0x2B8(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0xF8:
	  lwz       r3, 0x2B8(r31)
	  mr        r4, r31
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0x11C:
	  lwz       r3, 0x2B8(r31)
	  mr        r4, r31
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0x140:
	  lwz       r3, 0x2B8(r31)
	  mr        r4, r31
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A0

	.loc_0x164:
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  subi      r5, r4, 0x5A2C
	  subi      r3, r3, 0x5ABC
	  li        r4, 0x5CB
	  crclr     6, 0x6
	  bl        -0xD7698
	  b         .loc_0x1A0

	.loc_0x184:
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  subi      r5, r4, 0x5A2C
	  subi      r3, r3, 0x5ABC
	  li        r4, 0x5D2
	  crclr     6, 0x6
	  bl        -0xD76B8

	.loc_0x1A0:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x204
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        0x4E38
	  lwz       r3, -0x6CF8(r13)
	  li        r0, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x1EC
	  addi      r4, r1, 0x8
	  bl        0x61BE8
	  mr        r0, r3

	.loc_0x1EC:
	  cmplwi    r0, 0
	  beq-      .loc_0x1FC
	  stw       r0, 0x280(r31)
	  b         .loc_0x204

	.loc_0x1FC:
	  li        r0, 0
	  stw       r0, 0x280(r31)

	.loc_0x204:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80101D74
 * Size:	0000A0
 */
void Game::EnemyBase::setOtakaraCode((Game::PelletMgr::OtakaraItemCode&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x250
	  lha       r0, 0x0(r4)
	  sth       r0, 0x250(r31)
	  bl        0x6BAF4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x8C
	  lha       r0, 0x250(r31)
	  srawi     r3, r0, 0x8
	  rlwinm    r4,r3,0,24,31
	  cmplwi    r4, 0x4
	  bne-      .loc_0x54
	  mr        r3, r31
	  li        r4, 0x12
	  li        r5, 0
	  bl        0x11C7C4
	  b         .loc_0x8C

	.loc_0x54:
	  lwz       r3, -0x6B70(r13)
	  rlwinm    r5,r0,0,24,31
	  bl        0xE5DC8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  mr        r3, r31
	  li        r4, 0x10
	  li        r5, 0
	  bl        0x11C79C
	  b         .loc_0x8C

	.loc_0x7C:
	  mr        r3, r31
	  li        r4, 0x11
	  li        r5, 0
	  bl        0x11C788

	.loc_0x8C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void Game::EnemyBase::commonDeadProc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80101E14
 * Size:	000004
 */
void PSM::EnemyBase::setKilled(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80101E18
 * Size:	0000C4
 */
void Game::EnemyBase::setCarcassArg((Game::PelletViewArg&))
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
	  mr        r30, r3
	  mr        r31, r4
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lfs       f31, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  lfs       f30, 0xC(r1)
	  lwz       r12, 0x258(r12)
	  lfs       f29, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x1
	  subi      r4, r4, 0x1
	  bl        0x21450
	  stw       r3, 0x0(r31)
	  addi      r0, r30, 0x138
	  stfs      f31, 0x4(r31)
	  stfs      f30, 0x8(r31)
	  stfs      f29, 0xC(r31)
	  stw       r0, 0x10(r31)
	  stw       r30, 0x14(r31)
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void Game::EnemyBase::permitFindingOtakaraDemo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000234
 */
void Game::EnemyBase::becomeCarcass(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80101EDC
 * Size:	000008
 */
void Game::EnemyBase::doBecomeCarcass(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80101EE4
 * Size:	000004
 */
void Game::EnemyBase::doUpdateCarcass(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80101EE8
 * Size:	0009EC
 */
void Game::EnemyBase::onKill((Game::CreatureKillArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x150(r1)
	  mflr      r0
	  stw       r0, 0x154(r1)
	  stfd      f31, 0x140(r1)
	  psq_st    f31,0x148(r1),0,0
	  stfd      f30, 0x130(r1)
	  psq_st    f30,0x138(r1),0,0
	  stfd      f29, 0x120(r1)
	  psq_st    f29,0x128(r1),0,0
	  stfd      f28, 0x110(r1)
	  psq_st    f28,0x118(r1),0,0
	  stmw      r25, 0xF4(r1)
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  mr        r25, r4
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r25, 0
	  li        r28, 0
	  beq-      .loc_0x94
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8048
	  subi      r4, r4, 0x5A14
	  bl        -0x378AC
	  cmpwi     r3, 0
	  bne-      .loc_0x94
	  mr        r28, r25

	.loc_0x94:
	  mr        r3, r31
	  bl        0x9D4A4
	  cmplwi    r28, 0
	  beq-      .loc_0xB0
	  lwz       r0, 0x4(r28)
	  rlwinm.   r0,r0,0,3,3
	  bne-      .loc_0x188

	.loc_0xB0:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x188
	  mr        r3, r31
	  addi      r4, r1, 0x80
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x204(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f28, 0x1F8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  lwz       r7, 0x80(r1)
	  lis       r4, 0x804B
	  lwz       r6, 0x84(r1)
	  subi      r0, r4, 0x5808
	  lwz       r5, 0x88(r1)
	  lis       r4, 0x804B
	  stw       r7, 0x4C(r1)
	  lis       r7, 0x804E
	  subi      r9, r4, 0x5814
	  lis       r8, 0x804B
	  stw       r6, 0x50(r1)
	  lis       r4, 0x804F
	  lfs       f2, 0x4C(r1)
	  li        r6, 0x52
	  stw       r5, 0x54(r1)
	  li        r5, 0
	  lfs       f1, 0x50(r1)
	  addi      r7, r7, 0x6A78
	  stw       r0, 0x74(r1)
	  subi      r8, r8, 0x5820
	  lfs       f0, 0x54(r1)
	  subi      r0, r4, 0x79A0
	  stw       r9, 0x8C(r1)
	  addi      r4, r1, 0x8C
	  stw       r7, 0x74(r1)
	  stw       r3, 0x9C(r1)
	  addi      r3, r1, 0x74
	  stfs      f2, 0x90(r1)
	  stfs      f1, 0x94(r1)
	  stfs      f0, 0x98(r1)
	  stw       r8, 0x8C(r1)
	  stfs      f28, 0xA0(r1)
	  sth       r6, 0x78(r1)
	  stw       r5, 0x7C(r1)
	  stw       r0, 0x74(r1)
	  bl        0x2C604C
	  lfs       f1, -0x6BB0(r2)
	  mr        r3, r31
	  bl        0x36C210

	.loc_0x188:
	  cmplwi    r28, 0
	  beq-      .loc_0x19C
	  lwz       r0, 0x4(r28)
	  rlwinm.   r0,r0,0,1,1
	  bne-      .loc_0x8A4

	.loc_0x19C:
	  lwz       r3, 0x1E0(r31)
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x574
	  lwz       r3, 0x24C(r31)
	  bl        0x28058
	  mr        r3, r31
	  bl        0x3684
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,23,21
	  stw       r0, 0x1E0(r31)
	  bl        0x56BC
	  lwz       r0, -0x6BB0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x470
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x1
	  subi      r4, r4, 0x1
	  bl        0x2119C
	  lbz       r0, 0x30(r3)
	  extsb     r0, r0
	  cmpwi     r0, 0x3
	  beq-      .loc_0x24C
	  bge-      .loc_0x21C
	  cmpwi     r0, 0
	  beq-      .loc_0x234
	  bge-      .loc_0x240
	  b         .loc_0x270

	.loc_0x21C:
	  cmpwi     r0, 0x8
	  beq-      .loc_0x264
	  bge-      .loc_0x270
	  cmpwi     r0, 0x6
	  bge-      .loc_0x258
	  b         .loc_0x270

	.loc_0x234:
	  lfs       f28, -0x6B58(r2)
	  li        r27, 0x1
	  b         .loc_0x278

	.loc_0x240:
	  lfs       f28, -0x6B54(r2)
	  li        r27, 0x1
	  b         .loc_0x278

	.loc_0x24C:
	  lfs       f28, -0x6B54(r2)
	  li        r27, 0x3
	  b         .loc_0x278

	.loc_0x258:
	  lfs       f28, -0x6B50(r2)
	  li        r27, 0x5
	  b         .loc_0x278

	.loc_0x264:
	  lfs       f28, -0x6BB0(r2)
	  li        r27, 0xA
	  b         .loc_0x278

	.loc_0x270:
	  lfs       f28, -0x6B9C(r2)
	  li        r27, 0

	.loc_0x278:
	  lfs       f0, -0x6B9C(r2)
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  lfs       f1, -0x6B4C(r2)
	  fsubs     f0, f0, f28
	  lfd       f30, -0x6BA8(r2)
	  lfs       f31, -0x6BC4(r2)
	  subi      r29, r4, 0x5D0C
	  subi      r30, r3, 0x5D18
	  li        r26, 0
	  fmadds    f29, f1, f0, f28
	  lis       r28, 0x4330
	  b         .loc_0x468

	.loc_0x2AC:
	  bl        -0x38BF4
	  xoris     r0, r3, 0x8000
	  stw       r28, 0xC8(r1)
	  stw       r0, 0xCC(r1)
	  lfd       f0, 0xC8(r1)
	  fsubs     f0, f0, f30
	  fdivs     f0, f0, f31
	  fcmpo     cr0, f0, f28
	  bge-      .loc_0x2D8
	  li        r25, 0
	  b         .loc_0x2EC

	.loc_0x2D8:
	  fcmpo     cr0, f0, f29
	  bge-      .loc_0x2E8
	  li        r25, 0x1
	  b         .loc_0x2EC

	.loc_0x2E8:
	  li        r25, 0x2

	.loc_0x2EC:
	  mr        r3, r31
	  addi      r4, r1, 0x64
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  stw       r29, 0x8(r1)
	  li        r0, 0
	  lwz       r3, -0x6BB0(r13)
	  stw       r30, 0x8(r1)
	  stb       r25, 0xC(r1)
	  stb       r0, 0xD(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r25, r3
	  beq-      .loc_0x464
	  addi      r4, r1, 0x8
	  bl        0x38DA8
	  mr        r3, r25
	  addi      r4, r1, 0x64
	  li        r5, 0
	  bl        0x38F78
	  bl        -0x38C94
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xCC(r1)
	  xoris     r0, r27, 0x8000
	  lfd       f5, -0x6BA8(r2)
	  stw       r4, 0xC8(r1)
	  lfs       f0, -0x6BC4(r2)
	  lfd       f1, 0xC8(r1)
	  stw       r0, 0xD4(r1)
	  fsubs     f3, f1, f5
	  lfs       f1, -0x6B48(r2)
	  stw       r4, 0xD0(r1)
	  lfs       f4, -0x6BC0(r2)
	  lfd       f2, 0xD0(r1)
	  fdivs     f6, f3, f0
	  lfs       f3, -0x6B9C(r2)
	  lfs       f0, -0x6BB0(r2)
	  fmuls     f6, f4, f6
	  fsubs     f2, f2, f5
	  fmr       f4, f6
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f6, f0
	  fadds     f5, f3, f1
	  bge-      .loc_0x3B4
	  fneg      f4, f6

	.loc_0x3B4:
	  lfs       f2, -0x6BB4(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x6BB0(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f4, f2
	  lfs       f3, -0x6BBC(r2)
	  fcmpo     cr0, f6, f0
	  fctiwz    f0, f1
	  stfd      f0, 0xD8(r1)
	  lwz       r0, 0xDC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f0, f3, f0
	  fmuls     f4, f5, f0
	  bge-      .loc_0x418
	  lfs       f0, -0x6BB8(r2)
	  fmuls     f0, f6, f0
	  fctiwz    f0, f0
	  stfd      f0, 0xE0(r1)
	  lwz       r0, 0xE4(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x430

	.loc_0x418:
	  fmuls     f0, f6, f2
	  fctiwz    f0, f0
	  stfd      f0, 0xE8(r1)
	  lwz       r0, 0xEC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x430:
	  fmuls     f1, f3, f0
	  lfs       f0, -0x6B44(r2)
	  stfs      f4, 0x60(r1)
	  mr        r3, r25
	  fmuls     f0, f0, f5
	  addi      r4, r1, 0x58
	  fmuls     f1, f5, f1
	  stfs      f0, 0x5C(r1)
	  stfs      f1, 0x58(r1)
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x464:
	  addi      r26, r26, 0x1

	.loc_0x468:
	  cmpw      r26, r27
	  blt+      .loc_0x2AC

	.loc_0x470:
	  lwz       r3, 0x254(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x4BC
	  lis       r4, 0x804B
	  lfs       f0, -0x6B5C(r2)
	  subi      r0, r4, 0x5D00
	  stw       r31, 0x44(r1)
	  lis       r4, 0x804B
	  stw       r0, 0x40(r1)
	  addi      r0, r4, 0x22C0
	  addi      r4, r1, 0x40
	  stw       r0, 0x40(r1)
	  stfs      f0, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x254(r31)

	.loc_0x4BC:
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6DF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x4E4
	  mr        r4, r31
	  bl        0x187B0

	.loc_0x4E4:
	  lwz       r3, -0x6980(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x4F8
	  mr        r4, r31
	  bl        0x13F914

	.loc_0x4F8:
	  lwz       r3, 0x2A0(r31)
	  b         .loc_0x51C

	.loc_0x500:
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r25, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r25

	.loc_0x51C:
	  cmplwi    r3, 0
	  bne+      .loc_0x500
	  li        r0, 0
	  stb       r0, 0x1F0(r31)
	  bl        0x235894
	  cmplwi    r3, 0
	  beq-      .loc_0x54C
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54C:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x35B998
	  lwz       r3, 0x180(r31)
	  mr        r4, r31
	  bl        0x2D100
	  b         .loc_0x894

	.loc_0x574:
	  lfs       f1, -0x6BB0(r2)
	  lfs       f0, 0x2AC(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x794
	  rlwinm.   r0,r3,0,24,24
	  beq-      .loc_0x794
	  cmplwi    r28, 0
	  beq-      .loc_0x5A0
	  lwz       r0, 0x4(r28)
	  rlwinm.   r0,r0,0,2,2
	  bne-      .loc_0x794

	.loc_0x5A0:
	  lwz       r3, 0x17C(r31)
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x730
	  addi      r3, r1, 0xA4
	  bl        0x636B0
	  mr        r3, r31
	  addi      r4, r1, 0xA4
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2C8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x17C(r31)
	  addi      r4, r1, 0xA4
	  bl        0x636C0
	  cmplwi    r3, 0
	  bne-      .loc_0x6E8
	  lwz       r3, 0x254(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x630
	  lis       r4, 0x804B
	  lfs       f0, -0x6B5C(r2)
	  subi      r0, r4, 0x5D00
	  stw       r31, 0x14(r1)
	  lis       r4, 0x804B
	  stw       r0, 0x10(r1)
	  addi      r0, r4, 0x22C0
	  addi      r4, r1, 0x10
	  stw       r0, 0x10(r1)
	  stfs      f0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x254(r31)

	.loc_0x630:
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6DF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x658
	  mr        r4, r31
	  bl        0x1863C

	.loc_0x658:
	  lwz       r3, -0x6980(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x66C
	  mr        r4, r31
	  bl        0x13F7A0

	.loc_0x66C:
	  lwz       r3, 0x2A0(r31)
	  b         .loc_0x690

	.loc_0x674:
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r25, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r25

	.loc_0x690:
	  cmplwi    r3, 0
	  bne+      .loc_0x674
	  li        r0, 0
	  stb       r0, 0x1F0(r31)
	  bl        0x235720
	  cmplwi    r3, 0
	  beq-      .loc_0x6C0
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6C0:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x35B824
	  lwz       r3, 0x180(r31)
	  mr        r4, r31
	  bl        0x2CF8C
	  b         .loc_0x730

	.loc_0x6E8:
	  lwz       r3, -0x6DF8(r13)
	  mr        r4, r31
	  bl        0x185A0
	  li        r0, 0
	  stb       r0, 0x1F0(r31)
	  bl        0x2356C4
	  cmplwi    r3, 0
	  beq-      .loc_0x71C
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x71C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2D0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x730:
	  lwz       r3, 0x254(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x77C
	  lis       r4, 0x804B
	  lfs       f0, -0x6B5C(r2)
	  subi      r0, r4, 0x5D00
	  stw       r31, 0x38(r1)
	  lis       r4, 0x804B
	  stw       r0, 0x34(r1)
	  addi      r0, r4, 0x22C0
	  addi      r4, r1, 0x34
	  stw       r0, 0x34(r1)
	  stfs      f0, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x254(r31)

	.loc_0x77C:
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x894

	.loc_0x794:
	  lwz       r3, 0x254(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x7E0
	  lis       r4, 0x804B
	  lfs       f0, -0x6B5C(r2)
	  subi      r0, r4, 0x5D00
	  stw       r31, 0x2C(r1)
	  lis       r4, 0x804B
	  stw       r0, 0x28(r1)
	  addi      r0, r4, 0x22C0
	  addi      r4, r1, 0x28
	  stw       r0, 0x28(r1)
	  stfs      f0, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x254(r31)

	.loc_0x7E0:
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6DF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x808
	  mr        r4, r31
	  bl        0x1848C

	.loc_0x808:
	  lwz       r3, -0x6980(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x81C
	  mr        r4, r31
	  bl        0x13F5F0

	.loc_0x81C:
	  lwz       r3, 0x2A0(r31)
	  b         .loc_0x840

	.loc_0x824:
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r25, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r25

	.loc_0x840:
	  cmplwi    r3, 0
	  bne+      .loc_0x824
	  li        r0, 0
	  stb       r0, 0x1F0(r31)
	  bl        0x235570
	  cmplwi    r3, 0
	  beq-      .loc_0x870
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x870:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x35B674
	  lwz       r3, 0x180(r31)
	  mr        r4, r31
	  bl        0x2CDDC

	.loc_0x894:
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x19C
	  b         .loc_0x9B8

	.loc_0x8A4:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x8B8
	  lwz       r3, 0x24C(r31)
	  bl        0x27950

	.loc_0x8B8:
	  lwz       r3, 0x254(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x904
	  lis       r4, 0x804B
	  lfs       f0, -0x6B5C(r2)
	  subi      r0, r4, 0x5D00
	  stw       r31, 0x20(r1)
	  lis       r4, 0x804B
	  stw       r0, 0x1C(r1)
	  addi      r0, r4, 0x22C0
	  addi      r4, r1, 0x1C
	  stw       r0, 0x1C(r1)
	  stfs      f0, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x254(r31)

	.loc_0x904:
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6DF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x92C
	  mr        r4, r31
	  bl        0x18368

	.loc_0x92C:
	  lwz       r3, -0x6980(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x940
	  mr        r4, r31
	  bl        0x13F4CC

	.loc_0x940:
	  lwz       r3, 0x2A0(r31)
	  b         .loc_0x964

	.loc_0x948:
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r25, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r25

	.loc_0x964:
	  cmplwi    r3, 0
	  bne+      .loc_0x948
	  li        r0, 0
	  stb       r0, 0x1F0(r31)
	  bl        0x23544C
	  cmplwi    r3, 0
	  beq-      .loc_0x994
	  lwz       r3, 0x28C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x994:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x35B550
	  lwz       r3, 0x180(r31)
	  mr        r4, r31
	  bl        0x2CCB8

	.loc_0x9B8:
	  psq_l     f31,0x148(r1),0,0
	  lfd       f31, 0x140(r1)
	  psq_l     f30,0x138(r1),0,0
	  lfd       f30, 0x130(r1)
	  psq_l     f29,0x128(r1),0,0
	  lfd       f29, 0x120(r1)
	  psq_l     f28,0x118(r1),0,0
	  lfd       f28, 0x110(r1)
	  lmw       r25, 0xF4(r1)
	  lwz       r0, 0x154(r1)
	  mtlr      r0
	  addi      r1, r1, 0x150
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801028D4
 * Size:	00001C
 */
void setVelocity__Q24Game8BaseItemFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x190(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x194(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x198(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801028F0
 * Size:	000024
 */
void Game::EnemyBase::getBoundingSphere((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x220(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x224(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x228(r3)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x22C(r3)
	  stfs      f0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80102914
 * Size:	00000C
 */
void Game::CreatureKillArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x5A04
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80102920
 * Size:	0000E0
 */
void Game::EnemyBase::setZukanVisible((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lbz       r0, 0x1F3(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  lwz       r4, -0x6C18(r13)
	  lbz       r0, 0x3C(r4)
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0xC8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x1
	  subi      r4, r4, 0x1
	  bl        0x20908
	  lhz       r0, 0x8(r3)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0xC8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, -0x6B70(r13)
	  mr        r4, r3
	  addi      r3, r5, 0x40
	  bl        0x131124
	  mr.       r31, r3
	  bne-      .loc_0xA8
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x5ABC
	  li        r4, 0x743
	  subi      r5, r5, 0x5AAC
	  crclr     6, 0x6
	  bl        -0xD8384

	.loc_0xA8:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0xBC
	  mr        r3, r31
	  bl        0x130E48
	  b         .loc_0xC8

	.loc_0xBC:
	  lbz       r0, 0x8(r31)
	  ori       r0, r0, 0x1
	  stb       r0, 0x8(r31)

	.loc_0xC8:
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
 * Address:	80102A00
 * Size:	000160
 */
void birth__Q24Game9EnemyBaseFR10Vector3<float> f(void)
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
	  lwz       r6, 0x1E0(r3)
	  li        r0, 0x1
	  mr        r31, r4
	  li        r5, 0
	  oris      r6, r6, 0x1000
	  stw       r6, 0x1E0(r3)
	  stb       r0, 0x1F3(r3)
	  bl        0x38768
	  lfs       f1, 0x0(r31)
	  li        r0, 0
	  lfs       f0, -0x6BB0(r2)
	  stfs      f1, 0x198(r30)
	  lfs       f1, 0x4(r31)
	  stfs      f1, 0x19C(r30)
	  lfs       f1, 0x8(r31)
	  stfs      f1, 0x1A0(r30)
	  stfs      f0, 0x1A4(r30)
	  stfs      f0, 0x1A8(r30)
	  stfs      f0, 0x1AC(r30)
	  stfs      f0, 0x1C8(r30)
	  stfs      f0, 0x1CC(r30)
	  stfs      f0, 0x1D0(r30)
	  stfs      f0, 0x1D4(r30)
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  stw       r0, 0x230(r30)
	  stfs      f31, 0x1FC(r30)
	  lfs       f0, 0x1FC(r30)
	  stfs      f0, 0x1A8(r30)
	  stw       r0, 0xC8(r30)
	  stw       r0, 0x1F4(r30)
	  stw       r0, 0x254(r30)
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r30)
	  bl        0x32FDC
	  mr        r3, r30
	  bl        0xE08
	  mr        r3, r30
	  bl        0x3BBC
	  li        r0, 0xFF
	  mr        r3, r30
	  stb       r0, 0x1F2(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x228(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6980(r13)
	  mr        r4, r30
	  bl        0x13F1B4
	  lwz       r3, -0x6DF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x114
	  lfs       f1, -0x6B9C(r2)
	  mr        r4, r30
	  bl        0x17F84

	.loc_0x114:
	  lwz       r3, 0x174(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lfs       f0, -0x6BB0(r2)
	  stb       r0, 0x1F0(r30)
	  stfs      f0, 0x2AC(r30)
	  stfs      f0, 0x2A8(r30)
	  stfs      f0, 0x214(r30)
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
 * Address:	80102B60
 * Size:	000078
 */
void Game::EnemyBase::updateTrMatrix(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x24(r1)
	  addi      r5, r1, 0x8
	  addi      r4, r6, 0x18C
	  lfs       f3, 0x1AC(r3)
	  addi      r3, r6, 0x138
	  lfs       f2, 0x1B8(r6)
	  lfs       f1, 0x1A8(r6)
	  fadds     f5, f3, f2
	  lfs       f0, 0x1B4(r6)
	  lfs       f3, 0x1C4(r6)
	  fadds     f4, f1, f0
	  lfs       f2, 0x1A4(r6)
	  lfs       f1, 0x1B0(r6)
	  fadds     f5, f5, f3
	  lfs       f3, 0x1C0(r6)
	  fadds     f1, f2, f1
	  lfs       f0, 0x1BC(r6)
	  fadds     f2, f4, f3
	  fadds     f0, f1, f0
	  stfs      f5, 0x10(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  bl        0x325CC4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80102BD8
 * Size:	000078
 */
void Game::EnemyBase::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0xC0(r3)
	  lfs       f0, 0x104(r3)
	  stfs      f0, 0x200(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x104(r3)
	  stfs      f0, 0x204(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x2BC(r3)
	  stfs      f0, 0x118(r31)
	  lfs       f0, 0x118(r31)
	  stfs      f0, 0x218(r31)
	  lwz       r3, 0x114(r31)
	  lwz       r3, 0x0(r3)
	  bl        0x355D8
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x22C(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x21C(r3)
	  stfs      f0, 0x27C(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80102C50
 * Size:	000034
 */
void Game::EnemyBase::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2B8(r3)
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

/*
 * --INFO--
 * Address:	80102C84
 * Size:	0001E0
 */
void Game::EnemyBase::isFinishableWaitingBirthTypeDrop(void)
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
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  mr        r29, r3
	  addi      r3, r1, 0x48
	  lwz       r5, 0xC0(r29)
	  addi      r4, r1, 0x38
	  lfs       f0, 0x18C(r29)
	  li        r31, 0
	  lfs       f1, 0x3AC(r5)
	  stfs      f0, 0x38(r1)
	  lfs       f0, 0x190(r29)
	  stfs      f0, 0x3C(r1)
	  lfs       f0, 0x194(r29)
	  stfs      f0, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  bl        0x12B6B8
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x48
	  bl        0x12B6EC
	  addi      r3, r1, 0x68
	  bl        0x12B760
	  b         .loc_0x198

	.loc_0x80:
	  addi      r3, r1, 0x68
	  bl        0x12B83C
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190

	.loc_0xF8:
	  mr        r4, r30
	  lwz       r5, 0xC0(r29)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x14
	  lfs       f29, 0x3AC(r5)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f30, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x34(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x28(r1)
	  fmuls     f0, f29, f29
	  fsubs     f1, f1, f31
	  fmuls     f1, f1, f1
	  fmadds    f1, f30, f30, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x190
	  li        r31, 0x1

	.loc_0x190:
	  addi      r3, r1, 0x68
	  bl        0x12B6E8

	.loc_0x198:
	  addi      r3, r1, 0x68
	  bl        0x12B714
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x80
	  mr        r3, r31
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r29, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80102E64
 * Size:	000090
 */
void Game::EnemyBase::startStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1E0(r3)
	  rlwinm.   r0,r3,0,9,9
	  bne-      .loc_0x7C
	  rlwinm.   r0,r3,0,22,22
	  bne-      .loc_0x7C
	  rlwinm.   r0,r3,0,10,10
	  beq-      .loc_0x3C
	  oris      r0, r3, 0x10
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x7C

	.loc_0x3C:
	  lwz       r3, 0x24C(r31)
	  bl        0x26D34
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  lwz       r3, 0x2B8(r31)
	  mr        r4, r31
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x7C

	.loc_0x70:
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x10
	  stw       r0, 0x1E0(r31)

	.loc_0x7C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80102EF4
 * Size:	000014
 */
void Game::EnemyBase::doStartStoneState(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x6BB0(r2)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80102F08
 * Size:	000004
 */
void Game::EnemyBase::doFinishStoneState(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Game::EnemyBase::updateEffects(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80102F0C
 * Size:	000008
 */
void Game::EnemyBase::getWalkSmokeEffectMgr(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80102F14
 * Size:	000080
 */
void Game::EnemyBase::doUpdateCommon(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2498
	  mr        r3, r31
	  bl        0x375C
	  lbz       r0, 0xD8(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x6C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x234(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  mr        r4, r31
	  bl        0x2749C

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80102F94
 * Size:	000034
 */
void Game::EnemyBase::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2B8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
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
 * Address:	80102FC8
 * Size:	000030
 */
void Game::EnemyBaseFSM::StateMachine::animation((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
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
 * Address:	80102FF8
 * Size:	000088
 */
void Game::EnemyBase::doAnimationUpdateAnimator(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x184(r3)
	  lwz       r4, -0x6514(r13)
	  lwz       r12, 0x0(r3)
	  lfs       f0, 0x54(r4)
	  lfs       f1, 0x4(r3)
	  lwz       r12, 0x18(r12)
	  fmuls     f1, f1, f0
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x184(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r31, 0x174(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwz       r4, 0x0(r4)
	  stw       r3, 0x54(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103080
 * Size:	0001E0
 */
void Game::EnemyBase::doAnimationCullingOff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  li        r0, 0
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  lwz       r4, 0x188(r3)
	  stb       r0, 0x24(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x17C(r31)
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  addi      r4, r31, 0x138
	  bl        0x62CDC
	  lfs       f1, 0x168(r31)
	  addi      r3, r1, 0x20
	  lfs       f2, 0x16C(r31)
	  lfs       f3, 0x170(r31)
	  bl        -0x18904
	  addi      r3, r31, 0x138
	  addi      r4, r1, 0x20
	  mr        r5, r3
	  bl        -0x18DE8
	  lfs       f0, 0x144(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x154(r31)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x164(r31)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x13C

	.loc_0xB8:
	  mr        r3, r31
	  bl        0x9C438
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x13C

	.loc_0xE0:
	  lfs       f3, 0x1AC(r31)
	  addi      r3, r31, 0x138
	  lfs       f2, 0x1B8(r31)
	  addi      r4, r31, 0x168
	  lfs       f1, 0x1A8(r31)
	  addi      r5, r1, 0x8
	  lfs       f0, 0x1B4(r31)
	  fadds     f6, f3, f2
	  lfs       f5, 0x1C4(r31)
	  addi      r6, r31, 0x18C
	  lfs       f2, 0x1A4(r31)
	  fadds     f4, f1, f0
	  lfs       f1, 0x1B0(r31)
	  lfs       f3, 0x1C0(r31)
	  fadds     f5, f6, f5
	  lfs       f0, 0x1BC(r31)
	  fadds     f1, f2, f1
	  fadds     f2, f4, f3
	  stfs      f5, 0x10(r1)
	  fadds     f0, f1, f0
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  bl        0x325120

	.loc_0x13C:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x6B40
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x32792C
	  lwz       r4, 0x174(r31)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x18F14
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x6B40
	  lwz       r3, 0x28(r3)
	  bl        0x3278F4
	  lwz       r3, 0x114(r31)
	  bl        0x3288C
	  lwz       r3, 0x184(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x18(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1CC
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x35AB98

	.loc_0x1CC:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103260
 * Size:	000020
 */
void onSetPositionPost__Q24Game9EnemyBaseFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x664
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103280
 * Size:	00001C
 */
void onSetPosition__Q24Game9EnemyBaseFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x18C(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x190(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x194(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010329C
 * Size:	00007C
 */
void Game::EnemyBase::doAnimationStick(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r7, r3
	  stw       r0, 0x24(r1)
	  addi      r5, r1, 0x8
	  addi      r4, r7, 0x168
	  addi      r6, r7, 0x18C
	  lfs       f3, 0x1AC(r3)
	  addi      r3, r7, 0x138
	  lfs       f2, 0x1B8(r7)
	  lfs       f1, 0x1A8(r7)
	  fadds     f5, f3, f2
	  lfs       f0, 0x1B4(r7)
	  lfs       f3, 0x1C4(r7)
	  fadds     f4, f1, f0
	  lfs       f2, 0x1A4(r7)
	  lfs       f1, 0x1B0(r7)
	  fadds     f5, f5, f3
	  lfs       f3, 0x1C0(r7)
	  fadds     f1, f2, f1
	  lfs       f0, 0x1BC(r7)
	  fadds     f2, f4, f3
	  fadds     f0, f1, f0
	  stfs      f5, 0x10(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  bl        0x324FD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103318
 * Size:	000020
 */
void Game::EnemyBase::doAnimationCullingOn(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x174(r3)
	  li        r0, 0
	  lwz       r3, 0x8(r3)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r3, 0x0(r3)
	  stw       r0, 0x54(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103338
 * Size:	00007C
 */
void Game::EnemyBase::show(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x58
	  lwz       r4, 0x24C(r3)
	  lbz       r0, 0x50(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x40
	  lwz       r3, 0x174(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x6C

	.loc_0x40:
	  lwz       r3, 0x174(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x6C

	.loc_0x58:
	  lwz       r3, 0x174(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801033B4
 * Size:	000054
 */
void Game::EnemyBase::hide(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x30
	  lwz       r3, 0x174(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x44

	.loc_0x30:
	  lwz       r3, 0x174(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103408
 * Size:	000108
 */
void Game::EnemyBase::doEntryCarcass(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0xD8(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x98
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x6C
	  lwz       r3, 0x24C(r31)
	  lbz       r0, 0x50(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x54
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x80

	.loc_0x54:
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x80

	.loc_0x6C:
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x80:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x200(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD0

	.loc_0x98:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0xBC
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD0

	.loc_0xBC:
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD0:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,1,1
	  bne-      .loc_0xF4
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103510
 * Size:	00013C
 */
void Game::EnemyBase::doEntryLiving(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0xD8(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x98
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x6C
	  lwz       r3, 0x24C(r31)
	  lbz       r0, 0x50(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x54
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x80

	.loc_0x54:
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x80

	.loc_0x6C:
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x80:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x200(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x104

	.loc_0x98:
	  lbz       r0, -0x7B98(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xC0
	  cmpwi     r0, 0x3
	  bne-      .loc_0xC4

	.loc_0xC0:
	  li        r3, 0x1

	.loc_0xC4:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x128

	.loc_0xCC:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0xF0
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x104

	.loc_0xF0:
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x104:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,1,1
	  bne-      .loc_0x128
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x128:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010364C
 * Size:	000034
 */
void Game::EnemyBase::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2B8(r3)
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
 * Address:	80103680
 * Size:	000028
 */
void Game::EnemyBase::doSetView((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r4,r4,0,16,31
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x174(r3)
	  bl        0x33BA2C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801036A8
 * Size:	000054
 */
void Game::EnemyBase::isCullingOff(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x17C(r3)
	  lwz       r0, 0x4(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x18
	  li        r3, 0x1
	  blr

	.loc_0x18:
	  lwz       r0, 0x1E0(r3)
	  li        r5, 0
	  rlwinm.   r0,r0,0,25,25
	  beq-      .loc_0x48
	  lbz       r4, 0xD8(r3)
	  rlwinm.   r0,r4,0,29,29
	  bne-      .loc_0x48
	  rlwinm.   r0,r4,0,28,28
	  bne-      .loc_0x48
	  lwz       r0, 0x1E4(r3)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x4C

	.loc_0x48:
	  li        r5, 0x1

	.loc_0x4C:
	  mr        r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801036FC
 * Size:	000078
 */
void Game::EnemyBase::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x17C(r3)
	  lwz       r0, 0x4(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x24
	  li        r5, 0x1
	  b         .loc_0x58

	.loc_0x24:
	  lwz       r0, 0x1E0(r3)
	  li        r5, 0
	  rlwinm.   r0,r0,0,25,25
	  beq-      .loc_0x54
	  lbz       r4, 0xD8(r3)
	  rlwinm.   r0,r4,0,29,29
	  bne-      .loc_0x54
	  rlwinm.   r0,r4,0,28,28
	  bne-      .loc_0x54
	  lwz       r0, 0x1E4(r3)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x58

	.loc_0x54:
	  li        r5, 0x1

	.loc_0x58:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x68
	  lwz       r3, 0x174(r3)
	  bl        0x33B8F8

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103774
 * Size:	0000AC
 */
void Game::EnemyBase::doSimulationGround((float))
{
	/*
	.loc_0x0:
	  lwz       r5, 0xC0(r3)
	  li        r4, 0
	  lfs       f6, 0x1CC(r3)
	  lfs       f0, 0x9C(r5)
	  lfs       f2, 0x1D4(r3)
	  fsubs     f4, f6, f6
	  fdivs     f5, f1, f0
	  lfs       f8, 0x1C8(r3)
	  lfs       f0, 0x1DC(r3)
	  lfs       f7, 0x1D0(r3)
	  fsubs     f3, f2, f8
	  fsubs     f0, f0, f7
	  fmuls     f2, f4, f5
	  fmuls     f3, f3, f5
	  fmuls     f0, f0, f5
	  fadds     f2, f6, f2
	  fadds     f3, f8, f3
	  fadds     f0, f7, f0
	  stfs      f3, 0x1C8(r3)
	  stfs      f2, 0x1CC(r3)
	  stfs      f0, 0x1D0(r3)
	  lwz       r5, 0x1E4(r3)
	  rlwinm.   r0,r5,0,31,31
	  bne-      .loc_0x68
	  rlwinm.   r0,r5,0,27,27
	  beq-      .loc_0x6C

	.loc_0x68:
	  li        r4, 0x1

	.loc_0x6C:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x94
	  lwz       r4, -0x6C10(r13)
	  lfs       f3, -0x6B38(r2)
	  lfs       f2, 0x28(r4)
	  lfs       f0, 0x1CC(r3)
	  fmuls     f1, f1, f2
	  fnmsubs   f0, f3, f1, f0
	  stfs      f0, 0x1CC(r3)
	  blr

	.loc_0x94:
	  lwz       r4, -0x6C10(r13)
	  lfs       f0, 0x1CC(r3)
	  lfs       f2, 0x28(r4)
	  fnmsubs   f0, f1, f2, f0
	  stfs      f0, 0x1CC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103820
 * Size:	000058
 */
void Game::EnemyBase::doSimulationFlying((float))
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC0(r3)
	  lfs       f2, 0x1D4(r3)
	  lfs       f0, 0x9C(r4)
	  lfs       f7, 0x1C8(r3)
	  fdivs     f4, f1, f0
	  lfs       f0, 0x1D8(r3)
	  lfs       f6, 0x1CC(r3)
	  lfs       f1, 0x1DC(r3)
	  lfs       f5, 0x1D0(r3)
	  fsubs     f2, f2, f7
	  fsubs     f0, f0, f6
	  fsubs     f3, f1, f5
	  fmuls     f2, f2, f4
	  fmuls     f1, f0, f4
	  fmuls     f0, f3, f4
	  fadds     f2, f7, f2
	  fadds     f1, f6, f1
	  fadds     f0, f5, f0
	  stfs      f2, 0x1C8(r3)
	  stfs      f1, 0x1CC(r3)
	  stfs      f0, 0x1D0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103878
 * Size:	000058
 */
void Game::EnemyBase::doSimulationStick((float))
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC0(r3)
	  lfs       f2, 0x1D4(r3)
	  lfs       f0, 0x9C(r4)
	  lfs       f7, 0x1C8(r3)
	  fdivs     f4, f1, f0
	  lfs       f0, 0x1D8(r3)
	  lfs       f6, 0x1CC(r3)
	  lfs       f1, 0x1DC(r3)
	  lfs       f5, 0x1D0(r3)
	  fsubs     f2, f2, f7
	  fsubs     f0, f0, f6
	  fsubs     f3, f1, f5
	  fmuls     f2, f2, f4
	  fmuls     f1, f0, f4
	  fmuls     f0, f3, f4
	  fadds     f2, f7, f2
	  fadds     f1, f6, f1
	  fadds     f0, f5, f0
	  stfs      f2, 0x1C8(r3)
	  stfs      f1, 0x1CC(r3)
	  stfs      f0, 0x1D0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801038D0
 * Size:	000070
 */
void Game::EnemyBase::updateSpheres(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x114(r3)
	  lwz       r3, 0x0(r3)
	  bl        0x3490C
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x220(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x224(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x228(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x22C(r31)
	  lfs       f0, 0x220(r31)
	  stfs      f0, 0x270(r31)
	  lfs       f0, 0x224(r31)
	  stfs      f0, 0x274(r31)
	  lfs       f0, 0x228(r31)
	  stfs      f0, 0x278(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103940
 * Size:	0000B8
 */
void createDropEffect__Q24Game9EnemyBaseFRC10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  lis       r5, 0x804B
	  lfs       f0, -0x6B9C(r2)
	  subi      r0, r5, 0x5808
	  lis       r5, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r5, 0x6A78
	  fmr       f31, f1
	  lfs       f2, 0x0(r4)
	  stfs      f0, 0x14(r1)
	  lis       r6, 0x804B
	  lfs       f1, 0x4(r4)
	  lis       r5, 0x804F
	  lfs       f0, 0x8(r4)
	  subi      r4, r6, 0x5814
	  li        r7, 0x53
	  li        r6, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  subi      r0, r5, 0x79F0
	  addi      r3, r1, 0x8
	  stw       r4, 0x18(r1)
	  addi      r4, r1, 0x18
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  sth       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r0, 0x8(r1)
	  stfs      f31, 0x14(r1)
	  bl        0x2C4D98
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x36ACB8
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801039F8
 * Size:	000158
 */
void createSplashDownEffect__Q24Game9EnemyBaseFRC10Vector3<float> f(void)
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
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr        r31, r3
	  fmr       f30, f1
	  lwz       r3, 0x280(r3)
	  mr        r30, r4
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  lwz       r12, 0x0(r3)
	  lfs       f31, 0x8(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x0(r3)
	  lfs       f0, 0x0(r30)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f31, 0x1C(r1)
	  b         .loc_0x80

	.loc_0x68:
	  lfs       f2, 0x0(r30)
	  lfs       f1, 0x4(r30)
	  lfs       f0, 0x8(r30)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)

	.loc_0x80:
	  lwz       r4, 0x14(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0x18(r1)
	  subi      r0, r3, 0x5808
	  lwz       r6, 0x1C(r1)
	  lis       r3, 0x804B
	  stw       r4, 0x8(r1)
	  lis       r4, 0x804E
	  subi      r11, r3, 0x5814
	  lis       r10, 0x804B
	  li        r5, 0
	  stw       r7, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  lis       r3, 0x804F
	  stw       r6, 0x10(r1)
	  li        r8, 0x54
	  lfs       f1, 0xC(r1)
	  li        r7, 0x55
	  lfs       f0, 0x10(r1)
	  li        r6, 0x56
	  stw       r0, 0x20(r1)
	  addi      r9, r4, 0x6A50
	  subi      r10, r10, 0x5D24
	  subi      r0, r3, 0x7A04
	  stw       r11, 0x38(r1)
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x38
	  stw       r9, 0x20(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stw       r10, 0x38(r1)
	  stfs      f30, 0x48(r1)
	  sth       r8, 0x24(r1)
	  sth       r7, 0x26(r1)
	  sth       r6, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r5, 0x30(r1)
	  stw       r5, 0x34(r1)
	  stw       r0, 0x20(r1)
	  bl        0x2C4CB4
	  fmr       f1, f30
	  mr        r3, r31
	  bl        0x36AD1C
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103B50
 * Size:	0001DC
 */
void createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  mr        r31, r3
	  fmr       f30, f1
	  lwz       r3, 0x280(r3)
	  mr        r30, r4
	  cmplwi    r3, 0
	  beq-      .loc_0x138
	  beq-      .loc_0x6C
	  lwz       r12, 0x0(r3)
	  lfs       f31, 0x8(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x0(r3)
	  lfs       f0, 0x0(r30)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f31, 0x30(r1)
	  b         .loc_0x84

	.loc_0x6C:
	  lfs       f2, 0x0(r30)
	  lfs       f1, 0x4(r30)
	  lfs       f0, 0x8(r30)
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)

	.loc_0x84:
	  lwz       r4, 0x28(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0x2C(r1)
	  subi      r0, r3, 0x5808
	  lwz       r6, 0x30(r1)
	  lis       r3, 0x804B
	  stw       r4, 0x34(r1)
	  lis       r4, 0x804E
	  subi      r11, r3, 0x5814
	  lis       r10, 0x804B
	  li        r5, 0
	  stw       r7, 0x38(r1)
	  lfs       f2, 0x34(r1)
	  lis       r3, 0x804F
	  stw       r6, 0x3C(r1)
	  li        r8, 0x54
	  lfs       f1, 0x38(r1)
	  li        r7, 0x55
	  lfs       f0, 0x3C(r1)
	  li        r6, 0x56
	  stw       r0, 0x54(r1)
	  addi      r9, r4, 0x6A50
	  subi      r10, r10, 0x5D24
	  subi      r0, r3, 0x7A04
	  stw       r11, 0x40(r1)
	  addi      r3, r1, 0x54
	  addi      r4, r1, 0x40
	  stw       r9, 0x54(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  stw       r10, 0x40(r1)
	  stfs      f30, 0x50(r1)
	  sth       r8, 0x58(r1)
	  sth       r7, 0x5A(r1)
	  sth       r6, 0x5C(r1)
	  stw       r5, 0x60(r1)
	  stw       r5, 0x64(r1)
	  stw       r5, 0x68(r1)
	  stw       r0, 0x54(r1)
	  bl        0x2C4B58
	  fmr       f1, f30
	  mr        r3, r31
	  bl        0x36ABC0
	  b         .loc_0x1B4

	.loc_0x138:
	  lis       r3, 0x804B
	  lfs       f0, -0x6B9C(r2)
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x18(r1)
	  addi      r0, r3, 0x6A78
	  lfs       f2, 0x0(r30)
	  lis       r4, 0x804B
	  stfs      f0, 0x24(r1)
	  lis       r3, 0x804F
	  lfs       f1, 0x4(r30)
	  subi      r4, r4, 0x5814
	  lfs       f0, 0x8(r30)
	  li        r6, 0x53
	  li        r5, 0
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x79F0
	  addi      r3, r1, 0x18
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  sth       r6, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x18(r1)
	  stfs      f30, 0x24(r1)
	  bl        0x2C4A70
	  fmr       f1, f30
	  mr        r3, r31
	  bl        0x36A990

	.loc_0x1B4:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r30, 0x78(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103D2C
 * Size:	000168
 */
void Game::EnemyBase::outWaterCallback(void)
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
	  stw       r31, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0x2EC(r12)
	  mtctr     r12
	  bctrl
	  fmr       f30, f1
	  lfs       f0, -0x6BB0(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x144
	  lwz       r3, 0x280(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lwz       r12, 0x0(r3)
	  lfs       f31, 0x194(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x0(r3)
	  lfs       f0, 0x18C(r31)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f31, 0x10(r1)
	  b         .loc_0x94

	.loc_0x7C:
	  lfs       f2, 0x18C(r31)
	  lfs       f1, 0x190(r31)
	  lfs       f0, 0x194(r31)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x94:
	  lwz       r4, 0x8(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0xC(r1)
	  subi      r0, r3, 0x5808
	  lwz       r6, 0x10(r1)
	  lis       r3, 0x804B
	  stw       r4, 0x14(r1)
	  lis       r4, 0x804E
	  subi      r11, r3, 0x5814
	  lis       r10, 0x804B
	  li        r5, 0
	  stw       r7, 0x18(r1)
	  lfs       f2, 0x14(r1)
	  lis       r3, 0x804F
	  stw       r6, 0x1C(r1)
	  li        r8, 0x54
	  lfs       f1, 0x18(r1)
	  li        r7, 0x55
	  lfs       f0, 0x1C(r1)
	  li        r6, 0x56
	  stw       r0, 0x34(r1)
	  addi      r9, r4, 0x6A50
	  subi      r10, r10, 0x5D24
	  subi      r0, r3, 0x7A04
	  stw       r11, 0x20(r1)
	  addi      r3, r1, 0x34
	  addi      r4, r1, 0x20
	  stw       r9, 0x34(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r10, 0x20(r1)
	  stfs      f30, 0x30(r1)
	  sth       r8, 0x38(r1)
	  sth       r7, 0x3A(r1)
	  sth       r6, 0x3C(r1)
	  stw       r5, 0x40(r1)
	  stw       r5, 0x44(r1)
	  stw       r5, 0x48(r1)
	  stw       r0, 0x34(r1)
	  bl        0x2C496C
	  fmr       f1, f30
	  mr        r3, r31
	  bl        0x36A9D4

	.loc_0x144:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103E94
 * Size:	000168
 */
void Game::EnemyBase::inWaterCallback((Game::WaterBox*))
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
	  stw       r31, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0x2EC(r12)
	  mtctr     r12
	  bctrl
	  fmr       f30, f1
	  lfs       f0, -0x6BB0(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x144
	  lwz       r3, 0x280(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lwz       r12, 0x0(r3)
	  lfs       f31, 0x194(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x0(r3)
	  lfs       f0, 0x18C(r31)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f31, 0x10(r1)
	  b         .loc_0x94

	.loc_0x7C:
	  lfs       f2, 0x18C(r31)
	  lfs       f1, 0x190(r31)
	  lfs       f0, 0x194(r31)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x94:
	  lwz       r4, 0x8(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0xC(r1)
	  subi      r0, r3, 0x5808
	  lwz       r6, 0x10(r1)
	  lis       r3, 0x804B
	  stw       r4, 0x14(r1)
	  lis       r4, 0x804E
	  subi      r11, r3, 0x5814
	  lis       r10, 0x804B
	  li        r5, 0
	  stw       r7, 0x18(r1)
	  lfs       f2, 0x14(r1)
	  lis       r3, 0x804F
	  stw       r6, 0x1C(r1)
	  li        r8, 0x54
	  lfs       f1, 0x18(r1)
	  li        r7, 0x55
	  lfs       f0, 0x1C(r1)
	  li        r6, 0x56
	  stw       r0, 0x34(r1)
	  addi      r9, r4, 0x6A50
	  subi      r10, r10, 0x5D24
	  subi      r0, r3, 0x7A04
	  stw       r11, 0x20(r1)
	  addi      r3, r1, 0x34
	  addi      r4, r1, 0x20
	  stw       r9, 0x34(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r10, 0x20(r1)
	  stfs      f30, 0x30(r1)
	  sth       r8, 0x38(r1)
	  sth       r7, 0x3A(r1)
	  sth       r6, 0x3C(r1)
	  stw       r5, 0x40(r1)
	  stw       r5, 0x44(r1)
	  stw       r5, 0x48(r1)
	  stw       r0, 0x34(r1)
	  bl        0x2C4804
	  fmr       f1, f30
	  mr        r3, r31
	  bl        0x36A86C

	.loc_0x144:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80103FFC
 * Size:	00028C
 */
void Game::EnemyBase::finishDropping((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  lwz       r0, 0x1E4(r3)
	  mr        r31, r3
	  mr        r30, r4
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x264
	  lfs       f1, -0x6BB0(r2)
	  lfs       f2, -0x6B9C(r2)
	  bl        0x1FF0
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x4C
	  oris      r0, r0, 0x8
	  stw       r0, 0x1E0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x4C(r1)
	  rlwinm.   r0,r30,0,24,31
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x54(r1)
	  stfs      f2, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  beq-      .loc_0xAC
	  lwz       r3, -0x6CF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xAC
	  lwz       r12, 0x4(r3)
	  addi      r4, r1, 0x40
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x44(r1)

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2EC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x280(r31)
	  fmr       f31, f1
	  cmplwi    r3, 0
	  beq-      .loc_0x1CC
	  beq-      .loc_0x100
	  lwz       r12, 0x0(r3)
	  lfs       f30, 0x48(r1)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x0(r3)
	  lfs       f0, 0x40(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f30, 0x30(r1)
	  b         .loc_0x118

	.loc_0x100:
	  lfs       f2, 0x40(r1)
	  lfs       f1, 0x44(r1)
	  lfs       f0, 0x48(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)

	.loc_0x118:
	  lwz       r4, 0x28(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0x2C(r1)
	  subi      r0, r3, 0x5808
	  lwz       r6, 0x30(r1)
	  lis       r3, 0x804B
	  stw       r4, 0x34(r1)
	  lis       r4, 0x804E
	  subi      r11, r3, 0x5814
	  lis       r10, 0x804B
	  li        r5, 0
	  stw       r7, 0x38(r1)
	  lfs       f2, 0x34(r1)
	  lis       r3, 0x804F
	  stw       r6, 0x3C(r1)
	  li        r8, 0x54
	  lfs       f1, 0x38(r1)
	  li        r7, 0x55
	  lfs       f0, 0x3C(r1)
	  li        r6, 0x56
	  stw       r0, 0x70(r1)
	  addi      r9, r4, 0x6A50
	  subi      r10, r10, 0x5D24
	  subi      r0, r3, 0x7A04
	  stw       r11, 0x5C(r1)
	  addi      r3, r1, 0x70
	  addi      r4, r1, 0x5C
	  stw       r9, 0x70(r1)
	  stfs      f2, 0x60(r1)
	  stfs      f1, 0x64(r1)
	  stfs      f0, 0x68(r1)
	  stw       r10, 0x5C(r1)
	  stfs      f31, 0x6C(r1)
	  sth       r8, 0x74(r1)
	  sth       r7, 0x76(r1)
	  sth       r6, 0x78(r1)
	  stw       r5, 0x7C(r1)
	  stw       r5, 0x80(r1)
	  stw       r5, 0x84(r1)
	  stw       r0, 0x70(r1)
	  bl        0x2C4618
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x36A680
	  b         .loc_0x248

	.loc_0x1CC:
	  lis       r3, 0x804B
	  lfs       f0, -0x6B9C(r2)
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x18(r1)
	  addi      r0, r3, 0x6A78
	  lfs       f2, 0x40(r1)
	  lis       r4, 0x804B
	  stfs      f0, 0x24(r1)
	  lis       r3, 0x804F
	  lfs       f1, 0x44(r1)
	  subi      r4, r4, 0x5814
	  lfs       f0, 0x48(r1)
	  li        r6, 0x53
	  li        r5, 0
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x79F0
	  addi      r3, r1, 0x18
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  sth       r6, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x18(r1)
	  stfs      f31, 0x24(r1)
	  bl        0x2C4530
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x36A450

	.loc_0x248:
	  lwz       r0, 0x1E4(r31)
	  lfs       f0, -0x6BB0(r2)
	  rlwinm    r0,r0,0,28,26
	  stw       r0, 0x1E4(r31)
	  stfs      f0, 0x1C8(r31)
	  stfs      f0, 0x1CC(r31)
	  stfs      f0, 0x1D0(r31)

	.loc_0x264:
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r0, 0xB4(r1)
	  lwz       r30, 0x88(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104288
 * Size:	000080
 */
void Game::EnemyBase::bounceProcedure((Sys::Triangle*))
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
	  lwz       r12, 0xE8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E0(r30)
	  mr        r3, r30
	  li        r4, 0x1
	  rlwinm    r0,r0,0,3,1
	  stw       r0, 0x1E0(r30)
	  bl        -0x2CC
	  mr        r3, r30
	  bl        0x37B8
	  lwz       r3, 0x2B8(r30)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80104308
 * Size:	000030
 */
void Game::EnemyBaseFSM::StateMachine::bounceProcedure((Game::EnemyBase*,
                                                        Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
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
 * Address:	80104338
 * Size:	000004
 */
void Game::EnemyBaseFSM::State::bounceProcedure((Game::EnemyBase*,
                                                 Sys::Triangle*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010433C
 * Size:	000004
 */
void Game::Creature::bounceCallback((Sys::Triangle*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104340
 * Size:	0006D4
 */
void Game::EnemyBase::collisionMapAndPlat((float))
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
	  stw       r31, 0x12C(r1)
	  mr        r31, r3
	  fmr       f30, f1
	  bl        0x9B1F4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54C
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x74
	  mr        r3, r31
	  fmr       f1, f30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x98

	.loc_0x74:
	  mr        r3, r31
	  fmr       f1, f30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,3,1
	  stw       r0, 0x1E0(r31)

	.loc_0x98:
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x34
	  lfs       f31, 0x1A4(r5)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x28
	  lwz       r12, 0x0(r31)
	  lfs       f29, 0x34(r1)
	  lwz       r12, 0x224(r12)
	  lfs       f28, 0x38(r1)
	  lfs       f27, 0x3C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x28(r1)
	  li        r3, 0
	  stfs      f0, 0x240(r31)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x244(r31)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x248(r31)
	  lfs       f0, 0x244(r31)
	  lfs       f1, 0x240(r31)
	  fadds     f28, f28, f0
	  lfs       f0, 0x248(r31)
	  fadds     f29, f29, f1
	  fadds     f27, f27, f0
	  stfs      f31, 0x64(r1)
	  fadds     f28, f28, f31
	  stfs      f29, 0x58(r1)
	  stfs      f28, 0x5C(r1)
	  stfs      f27, 0x60(r1)
	  lwz       r4, 0x1E4(r31)
	  rlwinm.   r0,r4,0,31,31
	  bne-      .loc_0x138
	  rlwinm.   r0,r4,0,27,27
	  beq-      .loc_0x13C

	.loc_0x138:
	  li        r3, 0x1

	.loc_0x13C:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x14C
	  lfs       f8, -0x6BB0(r2)
	  b         .loc_0x154

	.loc_0x14C:
	  lwz       r3, 0xC0(r31)
	  lfs       f8, 0x4C(r3)

	.loc_0x154:
	  lfs       f6, -0x6BB0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  li        r5, 0
	  stfs      f6, 0x120(r31)
	  addi      r7, r1, 0x58
	  lfs       f0, -0x6B34(r2)
	  addi      r6, r1, 0x4C
	  lfs       f4, 0x1D0(r31)
	  li        r0, -0x1
	  lfs       f3, 0x124(r31)
	  fmr       f1, f30
	  lfs       f5, 0x1CC(r31)
	  addi      r4, r1, 0x68
	  lfs       f2, 0x120(r31)
	  fadds     f7, f4, f3
	  lfs       f4, 0x1C8(r31)
	  lfs       f3, 0x11C(r31)
	  fadds     f5, f5, f2
	  lfs       f2, 0x800(r3)
	  fadds     f3, f4, f3
	  stw       r5, 0x7C(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f5, 0x50(r1)
	  stfs      f3, 0x4C(r1)
	  stfs      f7, 0x54(r1)
	  stw       r7, 0x68(r1)
	  stw       r6, 0x6C(r1)
	  stfs      f8, 0x70(r1)
	  stfs      f6, 0x74(r1)
	  stw       r5, 0x78(r1)
	  stw       r5, 0xAC(r1)
	  stb       r5, 0xDC(r1)
	  stb       r5, 0x81(r1)
	  stb       r5, 0x80(r1)
	  stw       r5, 0xB0(r1)
	  stb       r5, 0xF8(r1)
	  stw       r5, 0xFC(r1)
	  stfs      f2, 0x94(r1)
	  stfs      f0, 0x98(r1)
	  stw       r0, 0x100(r1)
	  stw       r5, 0xB4(r1)
	  stb       r5, 0x82(r1)
	  stw       r31, 0x7C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x4C(r1)
	  lfs       f1, -0x6BB0(r2)
	  stfs      f0, 0x1C8(r31)
	  lfs       f0, 0x50(r1)
	  stfs      f0, 0x1CC(r31)
	  lfs       f0, 0x54(r1)
	  stfs      f0, 0x1D0(r31)
	  lfs       f3, 0x1C8(r31)
	  lfs       f2, 0x1CC(r31)
	  fmuls     f0, f3, f3
	  lfs       f4, 0x1D0(r31)
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x274
	  fmadds    f0, f3, f3, f2
	  fadds     f4, f4, f0
	  fcmpo     cr0, f4, f1
	  ble-      .loc_0x278
	  fsqrte    f0, f4
	  fmuls     f4, f0, f4
	  b         .loc_0x278

	.loc_0x274:
	  fmr       f4, f1

	.loc_0x278:
	  lfs       f0, -0x6BB0(r2)
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x2B4
	  lfs       f1, -0x6B9C(r2)
	  lfs       f0, 0x1C8(r31)
	  fdivs     f1, f1, f4
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1C8(r31)
	  lfs       f0, 0x1CC(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1CC(r31)
	  lfs       f0, 0x1D0(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1D0(r31)
	  b         .loc_0x2B8

	.loc_0x2B4:
	  fmr       f4, f0

	.loc_0x2B8:
	  lfs       f2, 0x11C(r31)
	  lfs       f1, 0x120(r31)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x124(r31)
	  fmuls     f5, f1, f1
	  lfs       f1, -0x6BB0(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f5
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x300
	  fmadds    f0, f2, f2, f5
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x304
	  fsqrte    f1, f0
	  fmuls     f0, f1, f0
	  b         .loc_0x304

	.loc_0x300:
	  fmr       f0, f1

	.loc_0x304:
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0x348
	  fsubs     f4, f4, f0
	  lfs       f0, 0x1C8(r31)
	  lfs       f2, 0x1CC(r31)
	  lfs       f3, 0x1D0(r31)
	  fmuls     f1, f0, f4
	  lfs       f0, -0x6BB0(r2)
	  fmuls     f2, f2, f4
	  fmuls     f3, f3, f4
	  stfs      f1, 0x1C8(r31)
	  stfs      f2, 0x1CC(r31)
	  stfs      f3, 0x1D0(r31)
	  stfs      f0, 0x11C(r31)
	  stfs      f0, 0x120(r31)
	  stfs      f0, 0x124(r31)
	  b         .loc_0x37C

	.loc_0x348:
	  lfs       f0, 0x1C8(r31)
	  lfs       f2, 0x1CC(r31)
	  fmuls     f1, f0, f4
	  lfs       f3, 0x1D0(r31)
	  fmuls     f2, f2, f4
	  lfs       f0, -0x6BB0(r2)
	  fmuls     f3, f3, f4
	  stfs      f1, 0x1C8(r31)
	  stfs      f2, 0x1CC(r31)
	  stfs      f3, 0x1D0(r31)
	  stfs      f0, 0x11C(r31)
	  stfs      f0, 0x120(r31)
	  stfs      f0, 0x124(r31)

	.loc_0x37C:
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x39C
	  lwz       r4, 0xAC(r1)
	  cmplwi    r4, 0
	  beq-      .loc_0x39C
	  mr        r3, r31
	  bl        -0x450

	.loc_0x39C:
	  lwz       r0, 0xAC(r1)
	  stw       r0, 0xC8(r31)
	  lfs       f0, 0xB8(r1)
	  stfs      f0, 0xCC(r31)
	  lfs       f0, 0xBC(r1)
	  stfs      f0, 0xD0(r31)
	  lfs       f0, 0xC0(r1)
	  stfs      f0, 0xD4(r31)
	  lwz       r0, 0x288(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x3EC
	  lwz       r0, 0xB0(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x3EC
	  mr        r3, r31
	  addi      r4, r1, 0x68
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2E8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3EC:
	  lwz       r0, 0xB0(r1)
	  stw       r0, 0x288(r31)
	  lwz       r3, -0x6BE0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x498
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,19,19
	  beq-      .loc_0x498
	  addi      r0, r31, 0x1C8
	  fmr       f1, f30
	  stw       r0, 0x6C(r1)
	  addi      r4, r1, 0x68
	  bl        0xC145C
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x460
	  lwz       r4, 0xAC(r1)
	  cmplwi    r4, 0
	  beq-      .loc_0x440
	  mr        r3, r31
	  bl        -0x4F4

	.loc_0x440:
	  lwz       r0, 0xAC(r1)
	  stw       r0, 0xC8(r31)
	  lfs       f0, 0xB8(r1)
	  stfs      f0, 0xCC(r31)
	  lfs       f0, 0xBC(r1)
	  stfs      f0, 0xD0(r31)
	  lfs       f0, 0xC0(r1)
	  stfs      f0, 0xD4(r31)

	.loc_0x460:
	  lwz       r0, 0x288(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x490
	  lwz       r0, 0xB0(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x490
	  mr        r3, r31
	  addi      r4, r1, 0x68
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2E8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x490:
	  lwz       r0, 0xB0(r1)
	  stw       r0, 0x288(r31)

	.loc_0x498:
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4CC
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x58
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4CC:
	  lfs       f1, 0x58(r1)
	  addi      r4, r1, 0x18
	  lfs       f0, 0x240(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x18C(r31)
	  lfs       f1, 0x5C(r1)
	  lfs       f0, 0x244(r31)
	  fsubs     f0, f1, f0
	  fsubs     f0, f0, f31
	  stfs      f0, 0x190(r31)
	  lfs       f1, 0x60(r1)
	  lfs       f0, 0x248(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x194(r31)
	  lwz       r3, 0x114(r31)
	  lwz       r3, 0x0(r3)
	  bl        0x339B0
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x220(r31)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x224(r31)
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x228(r31)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x22C(r31)
	  lfs       f0, 0x220(r31)
	  stfs      f0, 0x270(r31)
	  lfs       f0, 0x224(r31)
	  stfs      f0, 0x274(r31)
	  lfs       f0, 0x228(r31)
	  stfs      f0, 0x278(r31)
	  b         .loc_0x698

	.loc_0x54C:
	  lfs       f0, -0x6BB0(r2)
	  mr        r3, r31
	  fmr       f1, f30
	  stfs      f0, 0x11C(r31)
	  stfs      f0, 0x120(r31)
	  stfs      f0, 0x124(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1FC(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x18C(r31)
	  lfs       f1, 0x1C8(r31)
	  lfs       f0, -0x6BB0(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x18C(r31)
	  lfs       f2, 0x190(r31)
	  lfs       f1, 0x1CC(r31)
	  fadds     f1, f2, f1
	  stfs      f1, 0x190(r31)
	  lfs       f2, 0x194(r31)
	  lfs       f1, 0x1D0(r31)
	  fadds     f1, f2, f1
	  stfs      f1, 0x194(r31)
	  lfs       f4, 0x1FC(r31)
	  fmr       f1, f4
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x5BC
	  fneg      f1, f4

	.loc_0x5BC:
	  lfs       f2, -0x6BB4(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x6BB0(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f4, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x108(r1)
	  lwz       r0, 0x10C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f3, 0x4(r3)
	  bge-      .loc_0x614
	  lfs       f0, -0x6BB8(r2)
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x110(r1)
	  lwz       r0, 0x114(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x62C

	.loc_0x614:
	  fmuls     f0, f4, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x118(r1)
	  lwz       r0, 0x11C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x62C:
	  lfs       f0, -0x6BB0(r2)
	  mr        r3, r31
	  stfs      f1, 0x40(r1)
	  addi      r4, r1, 0x40
	  stfs      f0, 0x44(r1)
	  stfs      f3, 0x48(r1)
	  bl        0x9AC64
	  lwz       r3, 0x114(r31)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x0(r3)
	  bl        0x33868
	  lfs       f0, 0x8(r1)
	  mr        r3, r31
	  stfs      f0, 0x220(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x224(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x228(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x22C(r31)
	  lfs       f0, 0x220(r31)
	  stfs      f0, 0x270(r31)
	  lfs       f0, 0x224(r31)
	  stfs      f0, 0x274(r31)
	  lfs       f0, 0x228(r31)
	  stfs      f0, 0x278(r31)
	  bl        0x37394

	.loc_0x698:
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
	  lwz       r0, 0x184(r1)
	  lwz       r31, 0x12C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104A14
 * Size:	000004
 */
void Game::MapMgr::constraintBoundBox((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104A18
 * Size:	000008
 */
void Game::MapMgr::hasHiddenCollision(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104A20
 * Size:	000004
 */
void Game::EnemyBase::wallCallback((Game::MoveInfo const&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104A24
 * Size:	000014
 */
void Game::EnemyBase::getOffsetForMapCollision(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x6BB0(r2)
	  stfs      f0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104A38
 * Size:	000020
 */
void Game::EnemyBase::doSimulationCarcass((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x215C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104A58
 * Size:	000034
 */
void Game::EnemyBase::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2B8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
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
 * Address:	80104A8C
 * Size:	0000D8
 */
void Game::EnemyBase::doSimulationConstraint((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x1E0(r3)
	  rlwinm.   r0,r3,0,13,13
	  bne-      .loc_0x74
	  lfs       f2, -0x6BB0(r2)
	  lfs       f0, 0x11C(r31)
	  fcmpu     cr0, f2, f0
	  bne-      .loc_0x3C
	  lfs       f0, 0x124(r31)
	  fcmpu     cr0, f2, f0
	  beq-      .loc_0x4C

	.loc_0x3C:
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x2000
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x60

	.loc_0x4C:
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  rlwinm    r0,r3,0,3,1
	  stw       r0, 0x1E0(r31)

	.loc_0x60:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,2,2
	  beq-      .loc_0x74
	  mr        r3, r31
	  bl        -0x7BC

	.loc_0x74:
	  lwz       r3, 0x114(r31)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x0(r3)
	  bl        0x336F0
	  lfs       f0, 0x8(r1)
	  mr        r3, r31
	  stfs      f0, 0x220(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x224(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x228(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x22C(r31)
	  lfs       f0, 0x220(r31)
	  stfs      f0, 0x270(r31)
	  lfs       f0, 0x224(r31)
	  stfs      f0, 0x274(r31)
	  lfs       f0, 0x228(r31)
	  stfs      f0, 0x278(r31)
	  bl        0x2054
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104B64
 * Size:	000070
 */
void Game::EnemyBase::gotoHell(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,3,3
	  beq-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x264(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5D30
	  lis       r5, 0x7000
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x5D3C
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        0x36534

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104BD4
 * Size:	000030
 */
void Game::EnemyBase::setAnimMgr((SysShape::AnimMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x184(r3)
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
 * Address:	80104C04
 * Size:	0001B4
 */
void Game::EnemyBase::setPSEnemyBaseAnime(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  lwz       r4, 0x1E0(r3)
	  rlwinm.   r0,r4,0,7,7
	  beq-      .loc_0x134
	  bl        0x2718
	  mr        r30, r3
	  lwz       r3, 0x184(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x10(r3)
	  lwz       r29, 0x2C(r3)
	  b         .loc_0x6C

	.loc_0x58:
	  lha       r0, 0x20(r29)
	  cmpw      r30, r0
	  bne-      .loc_0x68
	  b         .loc_0x78

	.loc_0x68:
	  lwz       r29, 0x4(r29)

	.loc_0x6C:
	  cmplwi    r29, 0
	  bne+      .loc_0x58
	  li        r29, 0

	.loc_0x78:
	  lwz       r28, 0x24(r29)
	  cmplwi    r28, 0
	  beq-      .loc_0x118
	  mr        r3, r29
	  li        r4, 0
	  bl        0x324CC4
	  mr        r30, r3
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x324CB4
	  cmplwi    r30, 0
	  beq-      .loc_0xFC
	  cmplwi    r3, 0
	  beq-      .loc_0xFC
	  lwz       r5, 0x18(r30)
	  lis       r6, 0x4330
	  lwz       r0, 0x18(r3)
	  mr        r4, r28
	  xoris     r3, r5, 0x8000
	  stw       r6, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f2, -0x6BA8(r2)
	  stw       r3, 0xC(r1)
	  li        r5, 0x1
	  lwz       r3, 0x28C(r31)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r6, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f2, f0, f2
	  bl        0x3590E8
	  b         .loc_0x194

	.loc_0xFC:
	  lfs       f1, -0x6BB0(r2)
	  mr        r4, r28
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x3590CC
	  b         .loc_0x194

	.loc_0x118:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x3590B0
	  b         .loc_0x194

	.loc_0x134:
	  rlwinm.   r0,r4,0,6,6
	  beq-      .loc_0x158
	  lfs       f1, -0x6BB0(r2)
	  li        r4, -0x1
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x35908C
	  b         .loc_0x194

	.loc_0x158:
	  rlwinm.   r0,r4,0,5,5
	  beq-      .loc_0x17C
	  lfs       f1, -0x6BB0(r2)
	  li        r4, -0x1
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x359068
	  b         .loc_0x194

	.loc_0x17C:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x35904C

	.loc_0x194:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104DB8
 * Size:	0001F0
 */
void Game::EnemyBase::startBlend((int, int, SysShape::BlendFunction*, float,
                                  SysShape::MotionListener*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  cmplwi    r7, 0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  bne-      .loc_0x38
	  cmplwi    r31, 0
	  mr        r7, r31
	  beq-      .loc_0x38
	  addi      r7, r7, 0x178

	.loc_0x38:
	  lwz       r3, 0x184(r31)
	  bl        0x29378
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,8,3
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x400
	  stw       r0, 0x1E0(r31)
	  lwz       r3, 0x1E0(r31)
	  rlwinm.   r0,r3,0,7,7
	  beq-      .loc_0x170
	  mr        r3, r31
	  bl        0x2528
	  mr        r30, r3
	  lwz       r3, 0x184(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x10(r3)
	  lwz       r29, 0x2C(r3)
	  b         .loc_0xA8

	.loc_0x94:
	  lha       r0, 0x20(r29)
	  cmpw      r30, r0
	  bne-      .loc_0xA4
	  b         .loc_0xB4

	.loc_0xA4:
	  lwz       r29, 0x4(r29)

	.loc_0xA8:
	  cmplwi    r29, 0
	  bne+      .loc_0x94
	  li        r29, 0

	.loc_0xB4:
	  lwz       r28, 0x24(r29)
	  cmplwi    r28, 0
	  beq-      .loc_0x154
	  mr        r3, r29
	  li        r4, 0
	  bl        0x324AD4
	  mr        r30, r3
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x324AC4
	  cmplwi    r30, 0
	  beq-      .loc_0x138
	  cmplwi    r3, 0
	  beq-      .loc_0x138
	  lwz       r5, 0x18(r30)
	  lis       r6, 0x4330
	  lwz       r0, 0x18(r3)
	  mr        r4, r28
	  xoris     r3, r5, 0x8000
	  stw       r6, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f2, -0x6BA8(r2)
	  stw       r3, 0xC(r1)
	  li        r5, 0x1
	  lwz       r3, 0x28C(r31)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r6, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f2, f0, f2
	  bl        0x358EF8
	  b         .loc_0x1D0

	.loc_0x138:
	  lfs       f1, -0x6BB0(r2)
	  mr        r4, r28
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x358EDC
	  b         .loc_0x1D0

	.loc_0x154:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x358EC0
	  b         .loc_0x1D0

	.loc_0x170:
	  rlwinm.   r0,r3,0,6,6
	  beq-      .loc_0x194
	  lfs       f1, -0x6BB0(r2)
	  li        r4, -0x1
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x358E9C
	  b         .loc_0x1D0

	.loc_0x194:
	  rlwinm.   r0,r3,0,5,5
	  beq-      .loc_0x1B8
	  lfs       f1, -0x6BB0(r2)
	  li        r4, -0x1
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x358E78
	  b         .loc_0x1D0

	.loc_0x1B8:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x358E5C

	.loc_0x1D0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80104FA8
 * Size:	000050
 */
void Game::EnemyBase::endBlend(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  subis     r0, r3, 0x626C
	  cmplwi    r0, 0x6E64
	  bne-      .loc_0x3C
	  lwz       r3, 0x184(r31)
	  bl        0x29228

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
 * Address:	80104FF8
 * Size:	00000C
 */
void Game::EnemyAnimatorBase::getTypeID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x6261
	  addi      r3, r3, 0x7365
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105004
 * Size:	000224
 */
void Game::EnemyBase::startMotion((int, SysShape::MotionListener*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  stw       r28, 0x20(r1)
	  mr.       r28, r5
	  bne-      .loc_0x3C
	  cmplwi    r31, 0
	  beq-      .loc_0x38
	  addi      r3, r3, 0x178

	.loc_0x38:
	  mr        r28, r3

	.loc_0x3C:
	  lwz       r3, 0x184(r31)
	  li        r4, 0
	  lfs       f0, -0x6B9C(r2)
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,0,29
	  stw       r0, 0xC(r3)
	  stfs      f0, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  mr        r5, r28
	  bl        0x323C14
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,8,3
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x100
	  stw       r0, 0x1E0(r31)
	  lwz       r3, 0x1E0(r31)
	  rlwinm.   r0,r3,0,7,7
	  beq-      .loc_0x1A4
	  mr        r3, r31
	  bl        0x22A8
	  mr        r30, r3
	  lwz       r3, 0x184(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x10(r3)
	  lwz       r29, 0x2C(r3)
	  b         .loc_0xDC

	.loc_0xC8:
	  lha       r0, 0x20(r29)
	  cmpw      r30, r0
	  bne-      .loc_0xD8
	  b         .loc_0xE8

	.loc_0xD8:
	  lwz       r29, 0x4(r29)

	.loc_0xDC:
	  cmplwi    r29, 0
	  bne+      .loc_0xC8
	  li        r29, 0

	.loc_0xE8:
	  lwz       r28, 0x24(r29)
	  cmplwi    r28, 0
	  beq-      .loc_0x188
	  mr        r3, r29
	  li        r4, 0
	  bl        0x324854
	  mr        r30, r3
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x324844
	  cmplwi    r30, 0
	  beq-      .loc_0x16C
	  cmplwi    r3, 0
	  beq-      .loc_0x16C
	  lwz       r5, 0x18(r30)
	  lis       r6, 0x4330
	  lwz       r0, 0x18(r3)
	  mr        r4, r28
	  xoris     r3, r5, 0x8000
	  stw       r6, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f2, -0x6BA8(r2)
	  stw       r3, 0xC(r1)
	  li        r5, 0x1
	  lwz       r3, 0x28C(r31)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r6, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f2, f0, f2
	  bl        0x358C78
	  b         .loc_0x204

	.loc_0x16C:
	  lfs       f1, -0x6BB0(r2)
	  mr        r4, r28
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x358C5C
	  b         .loc_0x204

	.loc_0x188:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x358C40
	  b         .loc_0x204

	.loc_0x1A4:
	  rlwinm.   r0,r3,0,6,6
	  beq-      .loc_0x1C8
	  lfs       f1, -0x6BB0(r2)
	  li        r4, -0x1
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x358C1C
	  b         .loc_0x204

	.loc_0x1C8:
	  rlwinm.   r0,r3,0,5,5
	  beq-      .loc_0x1EC
	  lfs       f1, -0x6BB0(r2)
	  li        r4, -0x1
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x358BF8
	  b         .loc_0x204

	.loc_0x1EC:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x358BDC

	.loc_0x204:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000220
 */
void Game::EnemyBase::startMotion((int, int, SysShape::MotionListener*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80105228
 * Size:	000044
 */
void Game::EnemyBase::setMotionFrame((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stfd      f31, 0x8(r1)
	  fmr       f31, f1
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  fmr       f1, f31
	  bl        0x323B6C
	  lwz       r0, 0x14(r1)
	  lfd       f31, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void Game::EnemyBase::setMotionFrame((int, float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8010526C
 * Size:	000034
 */
void Game::EnemyBase::getMotionFrame(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lfs       f1, 0x8(r3)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void Game::EnemyBase::getMotionFrame((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801052A0
 * Size:	000040
 */
void Game::EnemyBase::finishMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x18(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x18(r3)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void Game::EnemyBase::finishMotion((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801052E0
 * Size:	000020
 */
void Game::EnemyBase::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  lwz       r6, 0x188(r3)
	  li        r0, 0x1
	  lwz       r5, 0x18(r4)
	  lwz       r3, 0x1C(r4)
	  stw       r5, 0x18(r6)
	  stw       r3, 0x1C(r6)
	  stb       r0, 0x24(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105300
 * Size:	000080
 */
void Game::EnemyBase::stimulate((Game::Interaction&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  mr        r4, r29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3

	.loc_0x60:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	80105380
 * Size:	000008
 */
void Game::Interaction::actEnemy((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105388
 * Size:	000008
 */
void Game::Interaction::actCommon((Game::Creature*))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105390
 * Size:	000030
 */
void Game::EnemyBase::lifeRecover(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC0(r3)
	  lfs       f2, 0x204(r3)
	  lfs       f1, 0x154(r4)
	  lfs       f0, 0x200(r3)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x200(r3)
	  lfs       f0, 0x200(r3)
	  lfs       f1, 0x204(r3)
	  fcmpo     cr0, f0, f1
	  blelr-
	  stfs      f1, 0x200(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801053C0
 * Size:	00033C
 */
void Game::EnemyBase::scaleDamageAnim(void)
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
	  stw       r31, 0x2C(r1)
	  lwz       r4, 0x1E0(r3)
	  mr        r31, r3
	  rlwinm.   r0,r4,0,28,28
	  bne-      .loc_0x40
	  lfs       f1, -0x6BB0(r2)
	  lfs       f0, 0x210(r31)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x318

	.loc_0x40:
	  lfs       f0, -0x6BB0(r2)
	  lfs       f1, 0x210(r31)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x6C
	  rlwinm.   r0,r4,0,30,30
	  beq-      .loc_0x318
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x210(r31)
	  b         .loc_0x318

	.loc_0x6C:
	  lwz       r3, 0xC0(r31)
	  rlwinm.   r0,r4,0,12,12
	  fmr       f31, f0
	  lfs       f3, 0x294(r3)
	  beq-      .loc_0x88
	  lfs       f30, -0x6B5C(r2)
	  b         .loc_0x8C

	.loc_0x88:
	  lfs       f30, -0x6B9C(r2)

	.loc_0x8C:
	  rlwinm.   r0,r4,0,17,17
	  beq-      .loc_0xB0
	  lwz       r3, -0x6514(r13)
	  lfs       f2, -0x6B4C(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f0, 0x210(r31)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x210(r31)
	  b         .loc_0xC4

	.loc_0xB0:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x210(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x210(r31)

	.loc_0xC4:
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x204
	  lfs       f0, 0x210(r31)
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0xE8
	  mr        r3, r31
	  bl        .loc_0x33C
	  b         .loc_0xF4

	.loc_0xE8:
	  fdivs     f0, f0, f3
	  lfs       f1, -0x6B9C(r2)
	  fsubs     f31, f1, f0

	.loc_0xF4:
	  lfs       f1, -0x6BC0(r2)
	  lfs       f0, -0x6BB0(r2)
	  fmuls     f1, f1, f31
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x134
	  lfs       f0, -0x6BB8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f4, f0
	  b         .loc_0x158

	.loc_0x134:
	  lfs       f0, -0x6BB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f4, r3, r0

	.loc_0x158:
	  lfs       f1, -0x6B30(r2)
	  lfs       f0, -0x6BA0(r2)
	  fmuls     f3, f1, f30
	  lfs       f1, -0x6BC0(r2)
	  fmuls     f0, f0, f31
	  lfs       f2, -0x6BB0(r2)
	  fmuls     f3, f3, f4
	  fmuls     f1, f1, f0
	  fmuls     f0, f31, f3
	  fcmpo     cr0, f1, f2
	  stfs      f0, 0x1B0(r31)
	  stfs      f2, 0x1B4(r31)
	  bge-      .loc_0x1B8
	  lfs       f0, -0x6BB8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x1DC

	.loc_0x1B8:
	  lfs       f0, -0x6BB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x1DC:
	  lfs       f0, -0x6B2C(r2)
	  fmuls     f0, f0, f30
	  fmuls     f0, f0, f1
	  fmuls     f0, f31, f0
	  stfs      f0, 0x1B8(r31)
	  lfs       f0, 0x1F8(r31)
	  stfs      f0, 0x170(r31)
	  stfs      f0, 0x16C(r31)
	  stfs      f0, 0x168(r31)
	  b         .loc_0x318

	.loc_0x204:
	  lfs       f0, 0x210(r31)
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x21C
	  mr        r3, r31
	  bl        .loc_0x33C
	  b         .loc_0x290

	.loc_0x21C:
	  fdivs     f2, f0, f3
	  lfs       f1, -0x6BC0(r2)
	  lfs       f0, -0x6BB0(r2)
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x260
	  lfs       f0, -0x6BB8(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x284

	.loc_0x260:
	  lfs       f0, -0x6BB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x284:
	  lfs       f0, -0x6B9C(r2)
	  fsubs     f0, f0, f2
	  fmuls     f31, f0, f1

	.loc_0x290:
	  lwz       r4, 0x1E0(r31)
	  rlwinm.   r0,r4,0,17,17
	  beq-      .loc_0x2A4
	  lfs       f0, -0x6BA0(r2)
	  fmuls     f31, f31, f0

	.loc_0x2A4:
	  lwz       r3, 0xC0(r31)
	  rlwinm.   r0,r4,0,12,12
	  lfs       f0, 0x244(r3)
	  fmuls     f0, f30, f0
	  fmuls     f2, f31, f0
	  beq-      .loc_0x2EC
	  lfs       f0, 0x1F8(r31)
	  fadds     f0, f0, f2
	  stfs      f0, 0x168(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x1F8(r31)
	  lfs       f1, 0x26C(r3)
	  fnmsubs   f0, f31, f1, f0
	  stfs      f0, 0x16C(r31)
	  lfs       f0, 0x1F8(r31)
	  fadds     f0, f0, f2
	  stfs      f0, 0x170(r31)
	  b         .loc_0x318

	.loc_0x2EC:
	  lfs       f0, 0x1F8(r31)
	  fsubs     f0, f0, f2
	  stfs      f0, 0x168(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x1F8(r31)
	  lfs       f1, 0x26C(r3)
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0x16C(r31)
	  lfs       f0, 0x1F8(r31)
	  fsubs     f0, f0, f2
	  stfs      f0, 0x170(r31)

	.loc_0x318:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0x33C:
	*/
}

/*
 * --INFO--
 * Address:	801056FC
 * Size:	000024
 */
void Game::EnemyBase::finishScaleDamageAnim(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x6BB0(r2)
	  stfs      f0, 0x210(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,18,16
	  stw       r0, 0x1E0(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,13,11
	  stw       r0, 0x1E0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105720
 * Size:	0000F8
 */
void Game::EnemyBase::deathProcedure(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x58
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x264(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x6C

	.loc_0x58:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x270(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6C:
	  mr        r3, r31
	  bl        0x1A74
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x94
	  mr        r3, r31
	  bl        0xD0
	  lfs       f1, -0x6BB0(r2)
	  mr        r3, r31
	  bl        0x368C64

	.loc_0x94:
	  lwz       r31, 0x28C(r31)
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x6
	  beq-      .loc_0xD0
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x7
	  bne-      .loc_0xE4

	.loc_0xD0:
	  mr        r3, r31
	  lwz       r12, 0x28(r31)
	  lwz       r12, 0xE0(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105818
 * Size:	000008
 */
void PSM::EnemyBase::getCastType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x2
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105820
 * Size:	00002C
 */
void Game::EnemyBase::throwupItemInDeathProcedure(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x264(r12)
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
 * Address:	8010584C
 * Size:	000028
 */
void Game::Creature::setAlive((bool))
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x18
	  lwz       r0, 0xBC(r3)
	  ori       r0, r0, 0x2
	  stw       r0, 0xBC(r3)
	  blr

	.loc_0x18:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r0,r0,0,31,29
	  stw       r0, 0xBC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105874
 * Size:	0000D8
 */
void Game::EnemyBase::createDeadBombEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  addi      r4, r1, 0x18
	  lwz       r12, 0x204(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lfs       f31, 0x1F8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  lwz       r6, 0x18(r1)
	  lis       r5, 0x804B
	  lwz       r0, 0x1C(r1)
	  lis       r4, 0x804B
	  lwz       r8, 0x20(r1)
	  subi      r7, r5, 0x5814
	  stw       r6, 0xC(r1)
	  subi      r5, r4, 0x5808
	  lis       r6, 0x804B
	  lis       r4, 0x804F
	  stw       r0, 0x10(r1)
	  subi      r6, r6, 0x5820
	  lfs       f2, 0xC(r1)
	  subi      r0, r4, 0x7A2C
	  stw       r8, 0x14(r1)
	  addi      r4, r1, 0x24
	  lfs       f1, 0x10(r1)
	  stw       r7, 0x24(r1)
	  lfs       f0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r3, 0x34(r1)
	  addi      r3, r1, 0x8
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stw       r6, 0x24(r1)
	  stfs      f31, 0x38(r1)
	  stw       r0, 0x8(r1)
	  bl        0x2C3458
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010594C
 * Size:	000054
 */
void getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801059A0
 * Size:	000018
 */
void getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x6BB0(r2)
	  lfs       f0, -0x6B28(r2)
	  stfs      f1, 0x0(r4)
	  stfs      f0, 0x4(r4)
	  stfs      f1, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801059B8
 * Size:	0004B0
 */
void Game::EnemyBase::throwupItem(void)
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
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  addi      r4, r1, 0x2C
	  lwz       r12, 0x268(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  li        r8, 0
	  subi      r4, r3, 0x5D0C
	  li        r0, -0x1
	  lis       r3, 0x804B
	  stw       r4, 0x60(r1)
	  subi      r3, r3, 0x5D48
	  li        r7, 0xFF
	  li        r6, 0x1
	  stw       r3, 0x60(r1)
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x60
	  stb       r8, 0x7C(r1)
	  addi      r5, r31, 0x250
	  sth       r8, 0x74(r1)
	  stb       r7, 0x76(r1)
	  stw       r8, 0x78(r1)
	  stb       r8, 0x77(r1)
	  stb       r6, 0x64(r1)
	  stb       r8, 0x7D(r1)
	  stw       r0, 0x84(r1)
	  stw       r0, 0x80(r1)
	  stb       r8, 0x7E(r1)
	  stb       r8, 0x7F(r1)
	  bl        0x68134
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x250
	  li        r0, 0x2
	  mr        r3, r31
	  sth       r0, 0x74(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x1E
	  beq-      .loc_0x128
	  cmpwi     r3, 0x22
	  beq-      .loc_0x128
	  cmpwi     r3, 0x35
	  beq-      .loc_0x128
	  cmpwi     r3, 0x38
	  beq-      .loc_0x128
	  cmpwi     r3, 0x28
	  beq-      .loc_0x128
	  cmpwi     r3, 0x42
	  beq-      .loc_0x128
	  cmpwi     r3, 0x65
	  beq-      .loc_0x128
	  cmpwi     r3, 0x63
	  beq-      .loc_0x128
	  cmpwi     r3, 0x5E
	  beq-      .loc_0x128
	  subi      r0, r3, 0x45
	  cmplwi    r0, 0x2
	  ble-      .loc_0x128
	  cmpwi     r3, 0x49
	  bne-      .loc_0x16C

	.loc_0x128:
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x16C
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x16C
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  lwz       r3, -0x6978(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x16C
	  bl        0x13F384
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x16C
	  li        r0, 0x1
	  stb       r0, 0x7D(r1)

	.loc_0x16C:
	  lbz       r0, -0x7BE0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x180
	  li        r0, 0x1
	  stb       r0, 0x7F(r1)

	.loc_0x180:
	  lwz       r3, -0x6CE0(r13)
	  addi      r4, r1, 0x60
	  bl        0x67980
	  stw       r3, 0x254(r31)
	  lwz       r3, 0x254(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x250
	  lis       r4, 0x804B
	  lfs       f0, -0x6B24(r2)
	  subi      r0, r4, 0x5D00
	  stw       r31, 0x24(r1)
	  lis       r4, 0x804B
	  stw       r0, 0x20(r1)
	  addi      r0, r4, 0x22C0
	  addi      r4, r1, 0x20
	  stw       r0, 0x20(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x26C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x254(r31)
	  addi      r4, r1, 0x2C
	  li        r5, 0
	  bl        0x355F8
	  lwz       r3, 0x254(r31)
	  addi      r4, r1, 0x14
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x254(r31)
	  addi      r4, r1, 0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1FC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x118A0C
	  lwz       r3, 0x28C(r31)
	  li        r4, 0x5810
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0x250:
	  bl        -0x3C668
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x8C(r1)
	  lfd       f3, -0x6BA8(r2)
	  stw       r0, 0x88(r1)
	  lfs       f1, -0x6BC4(r2)
	  lfd       f2, 0x88(r1)
	  lfs       f0, 0x25C(r31)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x480
	  bl        -0x3C69C
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x8C(r1)
	  lfd       f3, -0x6BA8(r2)
	  stw       r4, 0x88(r1)
	  lfs       f1, -0x6BC4(r2)
	  lfd       f0, 0x88(r1)
	  lbz       r5, 0x25A(r31)
	  fsubs     f2, f0, f3
	  lbz       r0, 0x25B(r31)
	  stw       r4, 0x90(r1)
	  sub       r0, r0, r5
	  lfs       f0, -0x6BB0(r2)
	  fdivs     f2, f2, f1
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x94(r1)
	  lfd       f1, 0x90(r1)
	  fsubs     f1, f1, f3
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2EC
	  lfs       f0, -0x6B4C(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x2F4

	.loc_0x2EC:
	  lfs       f0, -0x6B4C(r2)
	  fsubs     f0, f1, f0

	.loc_0x2F4:
	  fctiwz    f0, f0
	  lbz       r0, 0x259(r31)
	  lfs       f31, -0x6BB0(r2)
	  cmplwi    r0, 0x14
	  stfd      f0, 0x98(r1)
	  lwz       r3, 0x9C(r1)
	  add       r30, r5, r3
	  bgt-      .loc_0x348
	  lis       r3, 0x804B
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x5EA4
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f31, -0x6B20(r2)
	  b         .loc_0x348
	  lfs       f31, -0x6B28(r2)
	  b         .loc_0x348
	  lfs       f31, -0x6B44(r2)
	  b         .loc_0x348
	  lfs       f31, -0x6B44(r2)

	.loc_0x348:
	  li        r29, 0
	  b         .loc_0x478

	.loc_0x350:
	  lbz       r0, 0x258(r31)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x398
	  bl        -0x3C774
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x9C(r1)
	  lfd       f3, -0x6BA8(r2)
	  stw       r0, 0x98(r1)
	  lfs       f1, -0x6BC4(r2)
	  lfd       f2, 0x98(r1)
	  lfs       f0, -0x6B38(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x90(r1)
	  lwz       r0, 0x94(r1)

	.loc_0x398:
	  lbz       r4, 0x259(r31)
	  addi      r3, r1, 0x38
	  rlwinm    r5,r0,0,24,31
	  bl        0x60E18
	  li        r0, 0x2
	  lwz       r3, -0x6CE0(r13)
	  sth       r0, 0x4C(r1)
	  addi      r4, r1, 0x38
	  bl        0x67750
	  mr.       r28, r3
	  beq-      .loc_0x474
	  bl        -0x3C7DC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x9C(r1)
	  lfd       f2, -0x6BA8(r2)
	  stw       r0, 0x98(r1)
	  lfs       f0, -0x6BC4(r2)
	  lfd       f1, 0x98(r1)
	  fsubs     f1, f1, f2
	  fdivs     f30, f1, f0
	  bl        -0x3C804
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x94(r1)
	  mr        r3, r28
	  lfs       f1, -0x6B4C(r2)
	  addi      r4, r1, 0x2C
	  stw       r0, 0x90(r1)
	  li        r5, 0
	  lfd       f4, -0x6BA8(r2)
	  fsubs     f0, f30, f1
	  lfd       f3, 0x90(r1)
	  lfs       f2, -0x6BC4(r2)
	  fsubs     f3, f3, f4
	  stfs      f31, 0xC(r1)
	  fmuls     f0, f31, f0
	  fdivs     f2, f3, f2
	  stfs      f0, 0x10(r1)
	  fsubs     f0, f2, f1
	  fmuls     f0, f31, f0
	  stfs      f0, 0x8(r1)
	  bl        0x353B0
	  mr        r3, r28
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  addi      r4, r1, 0x2C
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1FC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x474:
	  addi      r29, r29, 0x1

	.loc_0x478:
	  cmpw      r29, r30
	  blt+      .loc_0x350

	.loc_0x480:
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105E68
 * Size:	000004
 */
void createKiraEffect__Q24Game6PelletFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105E6C
 * Size:	000004
 */
void Game::EnemyBase::doDebugDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105E70
 * Size:	000080
 */
void Game::EnemyBase::getLifeGaugeParam((Game::LifeGaugeParam&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x64AC(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x30
	  lwz       r0, 0x1F0(r5)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x30
	  li        r0, 0
	  stb       r0, 0x14(r4)
	  b         .loc_0x54

	.loc_0x30:
	  lwz       r0, 0x1E0(r3)
	  li        r5, 0
	  rlwinm.   r0,r0,0,20,20
	  beq-      .loc_0x50
	  lbz       r0, 0xD8(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x50
	  li        r5, 0x1

	.loc_0x50:
	  stb       r5, 0x14(r4)

	.loc_0x54:
	  lbz       r0, 0x14(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x260(r12)
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
 * Address:	80105EF0
 * Size:	000040
 */
void Game::EnemyBase::doGetLifeGaugeParam((Game::LifeGaugeParam&))
{
	/*
	.loc_0x0:
	  lwz       r5, 0xC0(r3)
	  lfs       f2, 0x190(r3)
	  lfs       f0, 0x12C(r5)
	  lfs       f3, 0x194(r3)
	  lfs       f1, 0x18C(r3)
	  fadds     f2, f2, f0
	  lfs       f0, -0x6B48(r2)
	  stfs      f1, 0x0(r4)
	  stfs      f2, 0x4(r4)
	  stfs      f3, 0x8(r4)
	  lfs       f2, 0x200(r3)
	  lfs       f1, 0x204(r3)
	  fdivs     f1, f2, f1
	  stfs      f1, 0xC(r4)
	  stfs      f0, 0x10(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80105F30
 * Size:	000050
 */
void Game::EnemyBase::onStickStart((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C
	  lwz       r3, 0x1F4(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x1F4(r31)

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
 * Address:	80105F80
 * Size:	000050
 */
void Game::EnemyBase::onStickEnd((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C
	  lwz       r3, 0x1F4(r31)
	  subi      r0, r3, 0x1
	  stw       r0, 0x1F4(r31)

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
 * Address:	80105FD0
 * Size:	00005C
 */
void Game::EnemyBase::injure(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x1E0(r3)
	  rlwinm.   r0,r4,0,30,30
	  beq-      .loc_0x54
	  rlwinm.   r0,r4,0,31,31
	  bne-      .loc_0x38
	  lfs       f2, 0x200(r3)
	  lfs       f1, 0x208(r3)
	  lfs       f0, -0x6BB0(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x200(r3)
	  lfs       f1, 0x200(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x38
	  stfs      f0, 0x200(r3)

	.loc_0x38:
	  lfs       f0, -0x6BB0(r2)
	  stfs      f0, 0x208(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,31,29
	  stw       r0, 0x1E0(r3)
	  li        r3, 0x1
	  blr

	.loc_0x54:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010602C
 * Size:	000040
 */
void Game::EnemyBase::addDamage((float, float))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,31,31
	  bnelr-
	  lfs       f0, 0x208(r3)
	  fadds     f0, f0, f1
	  stfs      f0, 0x208(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x30
	  lfs       f0, 0x20C(r3)
	  fadds     f0, f0, f2
	  stfs      f0, 0x20C(r3)

	.loc_0x30:
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x2
	  stw       r0, 0x1E0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010606C
 * Size:	000048
 */
void Game::EnemyBase::damageCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x40
	  lfs       f0, 0x208(r3)
	  fadds     f0, f0, f1
	  stfs      f0, 0x208(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x34
	  lfs       f1, 0x20C(r3)
	  lfs       f0, -0x6B9C(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x20C(r3)

	.loc_0x34:
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x2
	  stw       r0, 0x1E0(r3)

	.loc_0x40:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801060B4
 * Size:	000008
 */
void Game::EnemyBase::pressCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801060BC
 * Size:	000008
 */
void Game::EnemyBase::flyCollisionCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801060C4
 * Size:	000248
 */
void Game::EnemyBase::hipdropCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stw       r31, 0x7C(r1)
	  lwz       r0, 0x1E0(r3)
	  mr        r31, r3
	  lwz       r3, 0xC0(r3)
	  rlwinm.   r0,r0,0,31,31
	  lfs       f1, 0x67C(r3)
	  bne-      .loc_0x6C
	  lfs       f0, 0x208(r31)
	  fadds     f0, f0, f1
	  stfs      f0, 0x208(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x60
	  lfs       f1, 0x20C(r31)
	  lfs       f0, -0x6B9C(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x20C(r31)

	.loc_0x60:
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x2
	  stw       r0, 0x1E0(r31)

	.loc_0x6C:
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x8
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x220
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2EC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x280(r31)
	  fmr       f31, f1
	  cmplwi    r3, 0
	  beq-      .loc_0x1A4
	  beq-      .loc_0xD8
	  lwz       r12, 0x0(r3)
	  lfs       f30, 0x194(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x0(r3)
	  lfs       f0, 0x18C(r31)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f30, 0x30(r1)
	  b         .loc_0xF0

	.loc_0xD8:
	  lfs       f2, 0x18C(r31)
	  lfs       f1, 0x190(r31)
	  lfs       f0, 0x194(r31)
	  stfs      f2, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)

	.loc_0xF0:
	  lwz       r4, 0x28(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0x2C(r1)
	  subi      r0, r3, 0x5808
	  lwz       r6, 0x30(r1)
	  lis       r3, 0x804B
	  stw       r4, 0x34(r1)
	  lis       r4, 0x804E
	  subi      r11, r3, 0x5814
	  lis       r10, 0x804B
	  li        r5, 0
	  stw       r7, 0x38(r1)
	  lfs       f2, 0x34(r1)
	  lis       r3, 0x804F
	  stw       r6, 0x3C(r1)
	  li        r8, 0x54
	  lfs       f1, 0x38(r1)
	  li        r7, 0x55
	  lfs       f0, 0x3C(r1)
	  li        r6, 0x56
	  stw       r0, 0x54(r1)
	  addi      r9, r4, 0x6A50
	  subi      r10, r10, 0x5D24
	  subi      r0, r3, 0x7A04
	  stw       r11, 0x40(r1)
	  addi      r3, r1, 0x54
	  addi      r4, r1, 0x40
	  stw       r9, 0x54(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  stw       r10, 0x40(r1)
	  stfs      f31, 0x50(r1)
	  sth       r8, 0x58(r1)
	  sth       r7, 0x5A(r1)
	  sth       r6, 0x5C(r1)
	  stw       r5, 0x60(r1)
	  stw       r5, 0x64(r1)
	  stw       r5, 0x68(r1)
	  stw       r0, 0x54(r1)
	  bl        0x2C2578
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x3685E0
	  b         .loc_0x220

	.loc_0x1A4:
	  lis       r3, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r3, 0x5814
	  lis       r4, 0x804E
	  stw       r0, 0x8(r1)
	  lis       r3, 0x804F
	  subi      r8, r5, 0x5808
	  lfs       f0, -0x6B9C(r2)
	  lfs       f1, 0x18C(r31)
	  addi      r7, r4, 0x6A78
	  subi      r0, r3, 0x79F0
	  li        r6, 0x53
	  stfs      f1, 0xC(r1)
	  li        r5, 0
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x8
	  lfs       f1, 0x190(r31)
	  stfs      f1, 0x10(r1)
	  lfs       f1, 0x194(r31)
	  stw       r8, 0x18(r1)
	  stw       r7, 0x18(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f1, 0x14(r1)
	  sth       r6, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x18(r1)
	  stfs      f31, 0x24(r1)
	  bl        0x2C2490
	  fmr       f1, f31
	  mr        r3, r31
	  bl        0x3683B0

	.loc_0x220:
	  li        r3, 0
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x7C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010630C
 * Size:	000008
 */
void Game::EnemyBase::dropCallBack((Game::Creature*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80106314
 * Size:	000040
 */
void Game::EnemyBase::isBeforeAppearState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2B8(r3)
	  bl        0x2A664
	  li        r4, 0x5
	  xor       r0, r4, r3
	  srawi     r3, r0, 0x1
	  and       r0, r0, r4
	  sub       r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80106354
 * Size:	000070
 */
void Game::EnemyBase::checkBirthTypeDropEarthquake(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r4, r30
	  lwz       r3, 0x2B8(r3)
	  bl        0x2A614
	  cmpwi     r3, 0x4
	  bne-      .loc_0x54
	  lwz       r3, 0x2B8(r30)
	  mr        r4, r30
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r31, 0x1

	.loc_0x54:
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
 * Address:	801063C4
 * Size:	0000EC
 */
void Game::EnemyBase::earthquakeCallBack((Game::Creature*, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  fmr       f31, f1
	  lwz       r0, 0xC8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x6BB0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0xCC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xCC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xCC
	  lwz       r4, 0x1E0(r31)
	  rlwinm.   r0,r4,0,13,13
	  bne-      .loc_0xCC
	  rlwinm.   r0,r4,0,22,22
	  bne-      .loc_0xCC
	  rlwinm.   r0,r4,0,10,10
	  li        r3, 0
	  bne-      .loc_0x9C
	  rlwinm.   r0,r4,0,9,9
	  beq-      .loc_0xA0

	.loc_0x9C:
	  li        r3, 0x1

	.loc_0xA0:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xCC
	  stfs      f31, 0x8(r1)
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  li        r5, 0x8
	  lwz       r3, 0x2B8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0xCC:
	  li        r3, 0
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801064B0
 * Size:	000108
 */
void Game::EnemyBase::dopeCallBack((Game::Creature*, int))
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
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  lfs       f1, 0x200(r29)
	  lfs       f0, -0x6BB0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0xE8
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  mr        r5, r31
	  lwz       r12, 0x2A0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  cmpwi     r31, 0x1
	  beq-      .loc_0x80
	  b         .loc_0xE8

	.loc_0x80:
	  lwz       r3, 0x1E0(r29)
	  rlwinm.   r0,r3,0,9,9
	  bne-      .loc_0xE8
	  rlwinm.   r0,r3,0,22,22
	  bne-      .loc_0xE8
	  rlwinm.   r0,r3,0,10,10
	  beq-      .loc_0xA8
	  oris      r0, r3, 0x10
	  stw       r0, 0x1E0(r29)
	  b         .loc_0xE8

	.loc_0xA8:
	  lwz       r3, 0x24C(r29)
	  bl        0x2367C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC
	  lwz       r3, 0x2B8(r29)
	  mr        r4, r29
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE8

	.loc_0xDC:
	  lwz       r0, 0x1E0(r29)
	  oris      r0, r0, 0x10
	  stw       r0, 0x1E0(r29)

	.loc_0xE8:
	  lwz       r0, 0x24(r1)
	  li        r3, 0
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
 * Address:	801065B8
 * Size:	000008
 */
void Game::EnemyBase::doDopeCallBack((Game::Creature*, int))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801065C0
 * Size:	000008
 */
void Game::EnemyBase::farmCallBack((Game::Creature*, float))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801065C8
 * Size:	000048
 */
void bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x40
	  lfs       f0, 0x208(r3)
	  fadds     f0, f0, f1
	  stfs      f0, 0x208(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x34
	  lfs       f1, 0x20C(r3)
	  lfs       f0, -0x6B9C(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x20C(r3)

	.loc_0x34:
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x2
	  stw       r0, 0x1E0(r3)

	.loc_0x40:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80106610
 * Size:	000054
 */
void Game::EnemyBase::collisionCallback((Game::CollEvent&))
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
	  bl        -0x2634
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x240(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80106664
 * Size:	000028
 */
void Game::EnemyBase::setCollEvent((Game::CollEvent&))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x234(r3)
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x238(r3)
	  lwz       r0, 0x8(r4)
	  stw       r0, 0x23C(r3)
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x10
	  stw       r0, 0x1E0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010668C
 * Size:	000010
 */
void Game::EnemyBase::resetCollEvent(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,28,26
	  stw       r0, 0x1E0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010669C
 * Size:	000004
 */
void Game::EnemyBase::changeMaterial(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801066A0
 * Size:	000008
 */
void Game::EnemyBase::viewGetShape(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x174(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801066A8
 * Size:	000020
 */
void Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xB50
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801066C8
 * Size:	000040
 */
void Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C4(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xBF0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80106708
 * Size:	000214
 */
void Game::EnemyBase::startCarcassMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr.       r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r31
	  stw       r28, 0x20(r1)
	  beq-      .loc_0x2C
	  addi      r29, r29, 0x178

	.loc_0x2C:
	  lwz       r3, 0x184(r31)
	  li        r4, 0
	  lfs       f0, -0x6B9C(r2)
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,0,29
	  stw       r0, 0xC(r3)
	  stfs      f0, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r29
	  li        r4, 0
	  bl        0x322520
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,8,3
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x100
	  stw       r0, 0x1E0(r31)
	  lwz       r3, 0x1E0(r31)
	  rlwinm.   r0,r3,0,7,7
	  beq-      .loc_0x194
	  mr        r3, r31
	  bl        0xBB4
	  mr        r30, r3
	  lwz       r3, 0x184(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x10(r3)
	  lwz       r29, 0x2C(r3)
	  b         .loc_0xCC

	.loc_0xB8:
	  lha       r0, 0x20(r29)
	  cmpw      r30, r0
	  bne-      .loc_0xC8
	  b         .loc_0xD8

	.loc_0xC8:
	  lwz       r29, 0x4(r29)

	.loc_0xCC:
	  cmplwi    r29, 0
	  bne+      .loc_0xB8
	  li        r29, 0

	.loc_0xD8:
	  lwz       r28, 0x24(r29)
	  cmplwi    r28, 0
	  beq-      .loc_0x178
	  mr        r3, r29
	  li        r4, 0
	  bl        0x323160
	  mr        r30, r3
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x323150
	  cmplwi    r30, 0
	  beq-      .loc_0x15C
	  cmplwi    r3, 0
	  beq-      .loc_0x15C
	  lwz       r5, 0x18(r30)
	  lis       r6, 0x4330
	  lwz       r0, 0x18(r3)
	  mr        r4, r28
	  xoris     r3, r5, 0x8000
	  stw       r6, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f2, -0x6BA8(r2)
	  stw       r3, 0xC(r1)
	  li        r5, 0x1
	  lwz       r3, 0x28C(r31)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r6, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f2, f0, f2
	  bl        0x357584
	  b         .loc_0x1F4

	.loc_0x15C:
	  lfs       f1, -0x6BB0(r2)
	  mr        r4, r28
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x357568
	  b         .loc_0x1F4

	.loc_0x178:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x35754C
	  b         .loc_0x1F4

	.loc_0x194:
	  rlwinm.   r0,r3,0,6,6
	  beq-      .loc_0x1B8
	  lfs       f1, -0x6BB0(r2)
	  li        r4, -0x1
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x357528
	  b         .loc_0x1F4

	.loc_0x1B8:
	  rlwinm.   r0,r3,0,5,5
	  beq-      .loc_0x1DC
	  lfs       f1, -0x6BB0(r2)
	  li        r4, -0x1
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x357504
	  b         .loc_0x1F4

	.loc_0x1DC:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r31)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x3574E8

	.loc_0x1F4:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010691C
 * Size:	000130
 */
void Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r3, 0x254(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  lis       r4, 0x804B
	  lfs       f0, -0x6B5C(r2)
	  subi      r0, r4, 0x5D00
	  stw       r30, 0xC(r1)
	  lis       r4, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x22C0
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x254(r30)

	.loc_0x64:
	  lwz       r3, 0x28C(r30)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6DF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  mr        r4, r30
	  bl        0x141D4

	.loc_0x8C:
	  lwz       r3, -0x6980(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  mr        r4, r30
	  bl        0x13B338

	.loc_0xA0:
	  lwz       r3, 0x2A0(r30)
	  b         .loc_0xC4

	.loc_0xA8:
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  lwz       r31, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31

	.loc_0xC4:
	  cmplwi    r3, 0
	  bne+      .loc_0xA8
	  li        r0, 0
	  stb       r0, 0x1F0(r30)
	  bl        0x2312B8
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  lwz       r3, 0x28C(r30)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF4:
	  lfs       f1, -0x6BB0(r2)
	  li        r4, 0
	  lwz       r3, 0x28C(r30)
	  li        r5, 0x1
	  fmr       f2, f1
	  bl        0x3573BC
	  lwz       r3, 0x180(r30)
	  mr        r4, r30
	  bl        0x28B24
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
 * Address:	80106A4C
 * Size:	00002C
 */
void Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C4(r12)
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
 * Address:	80106A78
 * Size:	000040
 */
void Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x18(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x18(r3)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80106AB8
 * Size:	0000A8
 */
void getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<float>(void)
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
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r31)
	  lfs       f1, 0x0(r31)
	  lfs       f0, 0x240(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x0(r31)
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x244(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r31)
	  lfs       f1, 0x8(r31)
	  lfs       f0, 0x248(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r31)
	  lwz       r3, 0xC0(r30)
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x1A4(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80106B60
 * Size:	000040
 */
void Game::EnemyBase::getWaterSphere((Sys::Sphere*))
{
	/*
	.loc_0x0:
	  lfs       f1, 0x18C(r3)
	  lfs       f0, 0x240(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x0(r4)
	  lfs       f1, 0x190(r3)
	  lfs       f0, 0x244(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r4)
	  lfs       f1, 0x194(r3)
	  lfs       f0, 0x248(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r4)
	  lwz       r3, 0xC0(r3)
	  lfs       f0, 0x1A4(r3)
	  stfs      f0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80106BA0
 * Size:	000148
 */
void Game::EnemyBase::updateWaterBox(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lfs       f1, 0x18C(r3)
	  lfs       f0, 0x240(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r1)
	  lfs       f1, 0x190(r3)
	  lfs       f0, 0x244(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0xC(r1)
	  lfs       f1, 0x194(r3)
	  lfs       f0, 0x248(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0xC0(r3)
	  lfs       f0, 0x1A4(r3)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x280(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xE4
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xCC
	  lwz       r3, -0x6CF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  addi      r4, r1, 0x8
	  bl        0x5CD00
	  stw       r3, 0x280(r31)

	.loc_0x90:
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xCC
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x280(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x254(r12)
	  mtctr     r12
	  bctrl

	.loc_0xCC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x24C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x134

	.loc_0xE4:
	  lwz       r3, -0x6CF8(r13)
	  li        r4, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x100
	  addi      r4, r1, 0x8
	  bl        0x5CC90
	  mr        r4, r3

	.loc_0x100:
	  cmplwi    r4, 0
	  beq-      .loc_0x134
	  stw       r4, 0x280(r31)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x250(r12)
	  mtctr     r12
	  bctrl

	.loc_0x134:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80106CE8
 * Size:	000008
 */
void Game::WaterBox::inWater((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80106CF0
 * Size:	00027C
 */
void Game::EnemyBase::createPSEnemyBase(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  li        r30, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x23
	  beq-      .loc_0x50
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x21
	  bne-      .loc_0xCC

	.loc_0x50:
	  li        r3, 0xE0
	  bl        -0xE2EA0
	  mr.       r30, r3
	  beq-      .loc_0xC4
	  mr        r4, r31
	  li        r5, 0x4
	  bl        0x3576EC
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0x1290
	  stw       r4, 0x28(r30)
	  subi      r6, r3, 0x1634
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  addi      r8, r4, 0xA4
	  addi      r7, r4, 0xB4
	  addi      r5, r6, 0x8
	  stw       r0, 0x30(r30)
	  addi      r4, r6, 0x40
	  addi      r3, r6, 0xA4
	  addi      r0, r6, 0xB4
	  stw       r8, 0xC8(r30)
	  stw       r7, 0xDC(r30)
	  stw       r6, 0x28(r30)
	  stw       r5, 0x10(r30)
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)

	.loc_0xC4:
	  mr        r3, r30
	  b         .loc_0x264

	.loc_0xCC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x1
	  subi      r4, r4, 0x1
	  bl        0x1C4A0
	  lbz       r0, 0x30(r3)
	  extsb     r0, r0
	  cmplwi    r0, 0x8
	  bgt-      .loc_0x260
	  lis       r3, 0x804B
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x5E50
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r3, 0xE0
	  bl        -0xE2F64
	  mr.       r30, r3
	  beq-      .loc_0x260
	  mr        r4, r31
	  li        r5, 0x2
	  bl        0x357628
	  lis       r3, 0x804B
	  subi      r5, r3, 0x5E1C
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  b         .loc_0x260
	  li        r3, 0xE0
	  bl        -0xE2FB0
	  mr.       r0, r3
	  beq-      .loc_0x180
	  mr        r4, r31
	  li        r5, 0x3
	  bl        0x3575DC
	  mr        r0, r3

	.loc_0x180:
	  mr        r30, r0
	  b         .loc_0x260
	  li        r3, 0xE0
	  bl        -0xE2FD8
	  mr.       r30, r3
	  beq-      .loc_0x260
	  mr        r4, r31
	  li        r5, 0x4
	  bl        0x3575B4
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
	  b         .loc_0x260
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x5ABC
	  li        r4, 0x1128
	  subi      r5, r5, 0x59F4
	  crclr     6, 0x6
	  bl        -0xDC89C
	  b         .loc_0x260
	  li        r3, 0x11C
	  bl        -0xE3044
	  mr.       r0, r3
	  beq-      .loc_0x210
	  mr        r4, r31
	  bl        0x359078
	  mr        r0, r3

	.loc_0x210:
	  mr        r30, r0
	  b         .loc_0x260
	  li        r3, 0x120
	  bl        -0xE3068
	  mr.       r0, r3
	  beq-      .loc_0x234
	  mr        r4, r31
	  bl        0x3598D0
	  mr        r0, r3

	.loc_0x234:
	  mr        r30, r0
	  b         .loc_0x260
	  li        r3, 0xE0
	  bl        -0xE308C
	  mr.       r0, r3
	  beq-      .loc_0x25C
	  mr        r4, r31
	  li        r5, 0x2
	  bl        0x358028
	  mr        r0, r3

	.loc_0x25C:
	  mr        r30, r0

	.loc_0x260:
	  mr        r3, r30

	.loc_0x264:
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
 * Address:	80106F6C
 * Size:	000164
 */
void PSM::EnemyBig::__dt(void)
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
	  beq-      .loc_0x148
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
	  beq-      .loc_0x138
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
	  bl        -0xE083C

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
	  bl        -0xE0864

	.loc_0xCC:
	  cmplwi    r30, 0
	  beq-      .loc_0x138
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
	  bl        -0x4D498

	.loc_0x110:
	  cmplwi    r30, 0
	  beq-      .loc_0x138
	  lis       r4, 0x804F
	  mr        r3, r30
	  subi      r5, r4, 0xE34
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        0x355DC4

	.loc_0x138:
	  extsh.    r0, r31
	  ble-      .loc_0x148
	  mr        r3, r30
	  bl        -0xE2FFC

	.loc_0x148:
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
 * Address:	801070D0
 * Size:	000134
 */
void PSM::EnemyBase::__dt(void)
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
	  beq-      .loc_0x118
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
	  beq-      .loc_0x74
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xCC
	  subi      r0, r3, 0xF80
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0x74
	  addi      r3, r30, 0xCC
	  li        r4, 0
	  bl        -0xE0970

	.loc_0x74:
	  addic.    r0, r30, 0xB8
	  beq-      .loc_0x9C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0xB8
	  subi      r0, r3, 0xF70
	  stw       r0, 0xC8(r30)
	  beq-      .loc_0x9C
	  addi      r3, r30, 0xB8
	  li        r4, 0
	  bl        -0xE0998

	.loc_0x9C:
	  cmplwi    r30, 0
	  beq-      .loc_0x108
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x30
	  subi      r4, r3, 0xF60
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xE0
	  lis       r4, 0x804A
	  addi      r3, r30, 0x30
	  addi      r0, r4, 0x6200
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        -0x4D5CC

	.loc_0xE0:
	  cmplwi    r30, 0
	  beq-      .loc_0x108
	  lis       r4, 0x804F
	  mr        r3, r30
	  subi      r5, r4, 0xE34
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        0x355C90

	.loc_0x108:
	  extsh.    r0, r31
	  ble-      .loc_0x118
	  mr        r3, r30
	  bl        -0xE3130

	.loc_0x118:
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
 * Address:	80107204
 * Size:	00001C
 */
void Game::EnemyBase::startMotion(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x184(r3)
	  lfs       f0, -0x6B9C(r2)
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,0,29
	  stw       r0, 0xC(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void Game::EnemyBase::slowStartMotion(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80107220
 * Size:	000058
 */
void Game::EnemyBase::getMotionFrameMax(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x18(r3)
	  lfd       f1, -0x6BA8(r2)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f1
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void Game::EnemyBase::getMotionFrameMax((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80107278
 * Size:	000068
 */
void Game::EnemyBase::getFirstKeyFrame(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r3)
	  lwz       r3, 0x38(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r3, 0x18(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, -0x6BA8(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f1
	  b         .loc_0x58

	.loc_0x54:
	  lfs       f1, -0x6BB0(r2)

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void Game::EnemyBase::getFirstKeyFrame((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801072E0
 * Size:	000020
 */
void Game::EnemyBase::stopMotion(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x184(r3)
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0xC(r3)
	  lwz       r0, 0xC(r3)
	  ori       r0, r0, 0x1
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void Game::EnemyBase::slowStopMotion(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80107300
 * Size:	000038
 */
void Game::EnemyBase::isFinishMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x18(r3)
	  rlwinm    r3,r0,31,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void Game::EnemyBase::isFinishMotion((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80107338
 * Size:	000010
 */
void Game::EnemyBase::isStopMotion(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x184(r3)
	  lwz       r0, 0xC(r3)
	  rlwinm    r3,r0,0,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107348
 * Size:	000048
 */
void Game::EnemyBase::getCurrAnimIndex(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lha       r3, 0x20(r3)
	  b         .loc_0x38

	.loc_0x34:
	  li        r3, -0x1

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107390
 * Size:	00000C
 */
void Game::EnemyBase::setAnimSpeed((float))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x184(r3)
	  stfs      f1, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010739C
 * Size:	000030
 */
void Game::EnemyBase::resetAnimSpeed(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x184(r3)
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
 * Address:	801073CC
 * Size:	00000C
 */
void Game::EnemyAnimatorBase::resetAnimSpeed(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x63C8(r2)
	  stfs      f0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Game::EnemyBase::getAnimSpeed(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801073D8
 * Size:	000014
 */
void Game::EnemyBase::getJAIObject(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x28C(r3)
	  cmplwi    r3, 0
	  beqlr-
	  addi      r3, r3, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801073EC
 * Size:	000008
 */
void Game::EnemyBase::getPSCreature(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x28C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801073F4
 * Size:	00001C
 */
void Game::EnemyBase::getStateID(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2B4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x14
	  lwz       r3, 0x4(r3)
	  blr

	.loc_0x14:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107410
 * Size:	0000AC
 */
void Game::EnemyBase::needShadow(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, -0x64AC(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x74
	  lwz       r0, 0x1F0(r4)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x74
	  lwz       r12, 0x0(r3)
	  li        r31, 0
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x68
	  lwz       r3, 0x180(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C

	.loc_0x68:
	  li        r31, 0x1

	.loc_0x6C:
	  mr        r3, r31
	  b         .loc_0x94

	.loc_0x74:
	  lbz       r0, 0xD8(r30)
	  li        r3, 0
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x94
	  lwz       r0, 0x1E0(r30)
	  rlwinm.   r0,r0,0,1,1
	  bne-      .loc_0x94
	  li        r3, 0x1

	.loc_0x94:
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
 * Address:	801074BC
 * Size:	000008
 */
void Game::EnemyMgrBase::isAlwaysMovieActor(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801074C4
 * Size:	00000C
 */
void Game::Creature::isMovieActor(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r3,r0,28,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801074D0
 * Size:	000234
 */
void Game::EnemyBase::eatWhitePikminCallBack((Game::Creature*, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stmw      r27, 0x9C(r1)
	  mr        r29, r3
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x54
	  lfs       f0, 0x208(r29)
	  fadds     f0, f0, f1
	  stfs      f0, 0x208(r29)
	  lwz       r0, 0x1E0(r29)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x48
	  lfs       f1, 0x20C(r29)
	  lfs       f0, -0x6BB0(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x20C(r29)

	.loc_0x48:
	  lwz       r0, 0x1E0(r29)
	  ori       r0, r0, 0x2
	  stw       r0, 0x1E0(r29)

	.loc_0x54:
	  lwz       r3, 0x1E0(r29)
	  rlwinm.   r0,r3,0,17,17
	  bne-      .loc_0x21C
	  ori       r0, r3, 0x4000
	  lis       r3, 0x804B
	  stw       r0, 0x1E0(r29)
	  subi      r28, r3, 0x5E2C
	  li        r30, 0
	  li        r31, 0
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  stfs      f0, 0x210(r29)
	  b         .loc_0x1EC

	.loc_0x88:
	  addi      r3, r1, 0x50
	  li        r4, 0
	  bl        0x21F20
	  lwz       r4, 0x24C(r29)
	  lwz       r3, 0x174(r29)
	  lwz       r4, 0x18(r4)
	  lwz       r0, 0x4(r4)
	  add       r27, r0, r31
	  lwz       r4, 0x0(r27)
	  bl        0x337A68
	  bl        0x322320
	  stw       r3, 0x94(r1)
	  addi      r3, r1, 0x50
	  addi      r4, r1, 0x30
	  addi      r5, r1, 0x8
	  stw       r27, 0x90(r1)
	  bl        0x22134
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1D4
	  lwz       r7, 0x30(r1)
	  lis       r4, 0x804B
	  lwz       r6, 0x34(r1)
	  lis       r3, 0x804B
	  lwz       r5, 0x38(r1)
	  subi      r4, r4, 0x5814
	  lfs       f0, 0x1F8(r29)
	  subi      r0, r3, 0x5D24
	  lfs       f1, 0x8(r1)
	  stw       r7, 0xC(r1)
	  fmuls     f3, f1, f0
	  lwz       r3, 0x90(r1)
	  stw       r6, 0x10(r1)
	  lfs       f2, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f1, 0x10(r1)
	  stw       r4, 0x3C(r1)
	  lfs       f0, 0x14(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stw       r0, 0x3C(r1)
	  stfs      f3, 0x4C(r1)
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x194
	  bge-      .loc_0x1D4
	  cmpwi     r0, 0
	  bge-      .loc_0x150
	  b         .loc_0x1D4

	.loc_0x150:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x22E
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r3, 0x7914
	  addi      r3, r1, 0x24
	  addi      r4, r1, 0x3C
	  sth       r6, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  bl        0x2C044C
	  b         .loc_0x1D4

	.loc_0x194:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x22F
	  li        r5, 0
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x7928
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x3C
	  sth       r6, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x18(r1)
	  bl        0x2C04E4

	.loc_0x1D4:
	  stw       r28, 0x50(r1)
	  addi      r3, r1, 0x50
	  li        r4, 0
	  bl        0x309ED8
	  addi      r31, r31, 0x38
	  addi      r30, r30, 0x1

	.loc_0x1EC:
	  lwz       r3, 0x24C(r29)
	  lwz       r3, 0x18(r3)
	  lbz       r0, 0x0(r3)
	  cmpw      r30, r0
	  blt+      .loc_0x88
	  lwz       r3, 0x28C(r29)
	  li        r4, 0x5807
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0x21C:
	  lmw       r27, 0x9C(r1)
	  li        r3, 0x1
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107704
 * Size:	000060
 */
void Game::EnemyStone::DrawInfo::__dt(void)
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5E2C
	  stw       r0, 0x0(r30)
	  bl        0x309E54
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0xE3690

	.loc_0x44:
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
 * Address:	80107764
 * Size:	000008
 */
void Game::EnemyBase::getDownSmokeScale(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x6BB0(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010776C
 * Size:	000010
 */
void Game::EnemyBase::constraintOff(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,22,20
	  stw       r0, 0x1E0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010777C
 * Size:	000018
 */
void Game::EnemyBase::hardConstraintOn(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  lfs       f0, -0x6BB0(r2)
	  oris      r0, r0, 0x4
	  stw       r0, 0x1E0(r3)
	  stfs      f0, 0x118(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107794
 * Size:	000028
 */
void Game::EnemyBase::hardConstraintOff(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  lfs       f0, -0x6BB0(r2)
	  rlwinm    r0,r0,0,14,12
	  stw       r0, 0x1E0(r3)
	  lfs       f1, 0x218(r3)
	  stfs      f1, 0x118(r3)
	  stfs      f0, 0x11C(r3)
	  stfs      f0, 0x120(r3)
	  stfs      f0, 0x124(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801077BC
 * Size:	000084
 */
void Game::EnemyBase::startMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r4, r30
	  lwz       r3, 0x2B8(r3)
	  bl        0x291B0
	  cmpwi     r3, 0x5
	  blt-      .loc_0x6C
	  lwz       r3, 0x2A0(r30)
	  b         .loc_0x50

	.loc_0x34:
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  lwz       r31, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31

	.loc_0x50:
	  cmplwi    r3, 0
	  bne+      .loc_0x34
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2F0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6C:
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
 * Address:	80107840
 * Size:	000004
 */
void Game::EnemyBase::doStartMovie(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107844
 * Size:	000084
 */
void Game::EnemyBase::endMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r4, r30
	  lwz       r3, 0x2B8(r3)
	  bl        0x29128
	  cmpwi     r3, 0x5
	  blt-      .loc_0x6C
	  lwz       r3, 0x2A0(r30)
	  b         .loc_0x50

	.loc_0x34:
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  lwz       r31, 0x4(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31

	.loc_0x50:
	  cmplwi    r3, 0
	  bne+      .loc_0x34
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2F4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6C:
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
 * Address:	801078C8
 * Size:	000004
 */
void Game::EnemyBase::doEndMovie(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801078CC
 * Size:	000094
 */
void Game::EnemyBase::doStartEarthquakeState((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  lfs       f0, -0x6BB0(r2)
	  mr        r31, r3
	  fmr       f31, f1
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  stfs      f0, 0x1C8(r3)
	  stfs      f0, 0x1CC(r3)
	  stfs      f0, 0x1D0(r3)
	  bl        -0x3E368
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x6BA8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x6BC4(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0x6B1C(r2)
	  fsubs     f3, f1, f3
	  lfs       f1, -0x6B28(r2)
	  fdivs     f2, f3, f2
	  fmuls     f0, f0, f2
	  fmadds    f0, f1, f31, f0
	  stfs      f0, 0x1CC(r31)
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107960
 * Size:	000004
 */
void Game::EnemyBase::doFinishEarthquakeState(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107964
 * Size:	000004
 */
void Game::EnemyBase::doStartEarthquakeFitState(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107968
 * Size:	000004
 */
void Game::EnemyBase::doFinishEarthquakeFitState(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010796C
 * Size:	00002C
 */
void Game::EnemyBase::startWaitingBirthTypeDrop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2E0(r12)
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
 * Address:	80107998
 * Size:	000004
 */
void Game::EnemyBase::doStartWaitingBirthTypeDrop(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010799C
 * Size:	00002C
 */
void Game::EnemyBase::finishWaitingBirthTypeDrop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2E4(r12)
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
 * Address:	801079C8
 * Size:	000064
 */
void Game::EnemyBase::doFinishWaitingBirthTypeDrop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x50
	  lwz       r0, 0x1E4(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x10
	  stw       r0, 0x1E4(r31)
	  bl        0x6C
	  lfs       f0, -0x6B9C(r2)
	  stfs      f0, 0x168(r31)
	  stfs      f0, 0x16C(r31)
	  stfs      f0, 0x170(r31)

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107A2C
 * Size:	00003C
 */
void Game::EnemyBase::isBirthTypeDropGroup(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x2B0(r3)
	  li        r3, 0
	  extsb     r0, r0
	  cmpwi     r0, 0x1
	  beq-      .loc_0x34
	  cmpwi     r0, 0x2
	  beq-      .loc_0x34
	  cmpwi     r0, 0x3
	  beq-      .loc_0x34
	  cmpwi     r0, 0x4
	  beq-      .loc_0x34
	  cmpwi     r0, 0x5
	  bnelr-

	.loc_0x34:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107A68
 * Size:	000008
 */
void Game::EnemyBase::getFitEffectPos(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x220
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107A70
 * Size:	000018
 */
void Game::EnemyBase::setDroppingMassZero(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E4(r3)
	  lfs       f0, -0x6BB0(r2)
	  ori       r0, r0, 0x20
	  stw       r0, 0x1E4(r3)
	  stfs      f0, 0x118(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107A88
 * Size:	000018
 */
void Game::EnemyBase::resetDroppingMassZero(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E4(r3)
	  rlwinm    r0,r0,0,27,25
	  stw       r0, 0x1E4(r3)
	  lfs       f0, 0x218(r3)
	  stfs      f0, 0x118(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107AA0
 * Size:	000164
 */
void PSM::EnemyHekoi::__dt(void)
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
	  beq-      .loc_0x148
	  lis       r3, 0x804B
	  subi      r5, r3, 0x5E1C
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  addi      r4, r5, 0x40
	  addi      r3, r5, 0xA4
	  stw       r0, 0x10(r30)
	  addi      r0, r5, 0xB4
	  stw       r4, 0x30(r30)
	  stw       r3, 0xC8(r30)
	  stw       r0, 0xDC(r30)
	  beq-      .loc_0x138
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
	  bl        -0xE1370

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
	  bl        -0xE1398

	.loc_0xCC:
	  cmplwi    r30, 0
	  beq-      .loc_0x138
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
	  bl        -0x4DFCC

	.loc_0x110:
	  cmplwi    r30, 0
	  beq-      .loc_0x138
	  lis       r4, 0x804F
	  mr        r3, r30
	  subi      r5, r4, 0xE34
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        0x355290

	.loc_0x138:
	  extsh.    r0, r31
	  ble-      .loc_0x148
	  mr        r3, r30
	  bl        -0xE3B30

	.loc_0x148:
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
 * Address:	80107C04
 * Size:	000008
 */
void PSM::EnemyHekoi::getCastType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C0C
 * Size:	000010
 */
void PSM::CreatureAnime::getJAIObject(void)
{
	/*
	.loc_0x0:
	  cmplwi    r3, 0
	  beqlr-
	  addi      r3, r3, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C1C
 * Size:	000010
 */
void PSM::CreatureAnime::getHandleArea((unsigned char))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4C(r3)
	  rlwinm    r0,r4,2,22,29
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C2C
 * Size:	00000C
 */
void Game::PelletInitArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x59E4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C38
 * Size:	00000C
 */
void Game::EnemyKillArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x5A14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C44
 * Size:	00000C
 */
void efx::ArgScale::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x59D4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C50
 * Size:	00000C
 */
void Game::ItemHoney::InitArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x59C8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C5C
 * Size:	000008
 */
void Game::Interaction::actPiki((Game::Piki*))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C64
 * Size:	000008
 */
void Game::Interaction::actNavi((Game::Navi*))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C6C
 * Size:	000008
 */
void Game::Interaction::actPellet((Game::Pellet*))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C74
 * Size:	000008
 */
void Game::Interaction::actOnyon((Game::Onyon*))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C7C
 * Size:	000008
 */
void Game::Interaction::actItem((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107C84
 * Size:	000088
 */
void Game::EnemyBase::__dt(void)
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
	  lis       r3, 0x804B
	  addi      r0, r30, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r30, 0x290
	  stw       r4, 0x0(r30)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r30)
	  lwz       r5, 0x17C(r30)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r30)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x3098AC
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0xE3C38

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
 * Address:	80107D0C
 * Size:	000004
 */
void Game::EnemyBase::doSimpleDraw((Viewport*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107D10
 * Size:	00000C
 */
void Game::EnemyBase::getCellRadius(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x1CC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107D1C
 * Size:	00000C
 */
void Game::EnemyBase::getBodyRadius(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x1F4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107D28
 * Size:	000008
 */
void Game::EnemyBase::getFaceDir(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x1FC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107D30
 * Size:	00001C
 */
void setVelocity__Q24Game9EnemyBaseFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x1C8(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x1CC(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x1D0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107D4C
 * Size:	00001C
 */
void Game::EnemyBase::getVelocity(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x1C8(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x1CC(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x1D0(r4)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107D68
 * Size:	000034
 */
void getVelocityAt__Q24Game9EnemyBaseFR10Vector3<float> R10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x1C8(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x1CC(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x1D0(r3)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x1C8(r3)
	  stfs      f0, 0x0(r5)
	  lfs       f0, 0x1CC(r3)
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x1D0(r3)
	  stfs      f0, 0x8(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107D9C
 * Size:	000008
 */
void Game::EnemyBase::isTeki(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107DA4
 * Size:	000008
 */
void Game::EnemyBase::getSound_PosPtr(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x18C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107DAC
 * Size:	000004
 */
void Game::EnemyBase::initMouthSlots(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107DB0
 * Size:	000004
 */
void Game::EnemyBase::initWalkSmokeEffect(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107DB4
 * Size:	000014
 */
void Game::EnemyBase::inWater(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x280(r3)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107DC8
 * Size:	00001C
 */
void getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107DE4
 * Size:	000008
 */
void Game::EnemyBase::getMouthSlots(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107DEC
 * Size:	000024
 */
void Game::EnemyBase::setLODSphere((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x270(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x274(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x278(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0x27C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107E10
 * Size:	000024
 */
void Game::EnemyBase::getLODSphere((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x270(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x274(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x278(r3)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x27C(r3)
	  stfs      f0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107E34
 * Size:	000008
 */
void Game::EnemyBase::getDamageCoeStoneState(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x6B18(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107E3C
 * Size:	000034
 */
void Game::EnemyBase::getSound_CurrAnimFrame(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x184(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lfs       f1, 0x8(r3)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107E70
 * Size:	00000C
 */
void Game::EnemyBase::getSound_CurrAnimSpeed(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x184(r3)
	  lfs       f1, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107E7C
 * Size:	000030
 */
void Game::EnemyBase::sound_culling(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  li        r4, 0
	  rlwinm.   r0,r0,0,18,18
	  beq-      .loc_0x28
	  lbz       r3, 0xD8(r3)
	  rlwinm.   r0,r3,0,29,29
	  bne-      .loc_0x28
	  rlwinm.   r0,r3,0,28,28
	  bne-      .loc_0x28
	  li        r4, 0x1

	.loc_0x28:
	  mr        r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107EAC
 * Size:	000008
 */
void Game::EnemyBase::getCarcassArgHeight(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x22C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107EB4
 * Size:	000008
 */
void Game::PelletView::viewGetBaseScale(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x6B9C(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107EBC
 * Size:	000008
 */
void Game::PelletView::viewGetCollTreeJointIndex(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107EC4
 * Size:	000020
 */
void Game::PelletView::viewGetCollTreeOffset(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  lfsu      f0, 0x41E4(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107EE4
 * Size:	000004
 */
void viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107EE8
 * Size:	000004
 */
void Game::Creature::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107EEC
 * Size:	000004
 */
void onInitPosition__Q24Game8CreatureFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107EF0
 * Size:	000008
 */
void Game::Creature::getFlockMgr(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107EF8
 * Size:	000004
 */
void Game::Creature::onStartCapture(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107EFC
 * Size:	000004
 */
void Game::Creature::onUpdateCapture((Matrixf&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107F00
 * Size:	000004
 */
void Game::Creature::onEndCapture(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107F04
 * Size:	00000C
 */
void Game::Creature::isAtari(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r3,r0,0,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107F10
 * Size:	000028
 */
void Game::Creature::setAtari((bool))
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x18
	  lwz       r0, 0xBC(r3)
	  ori       r0, r0, 0x1
	  stw       r0, 0xBC(r3)
	  blr

	.loc_0x18:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0xBC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107F38
 * Size:	00000C
 */
void Game::Creature::isCollisionFlick(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r3,r0,30,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107F44
 * Size:	000028
 */
void Game::Creature::setCollisionFlick((bool))
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x18
	  lwz       r0, 0xBC(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0xBC(r3)
	  blr

	.loc_0x18:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0xBC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107F6C
 * Size:	00000C
 */
void Game::Creature::isMovieExtra(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r3,r0,26,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107F78
 * Size:	00000C
 */
void Game::Creature::isMovieMotion(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r3,r0,27,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107F84
 * Size:	000028
 */
void Game::Creature::setMovieMotion((bool))
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x18
	  lwz       r0, 0xBC(r3)
	  ori       r0, r0, 0x20
	  stw       r0, 0xBC(r3)
	  blr

	.loc_0x18:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r0,r0,0,27,25
	  stw       r0, 0xBC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107FAC
 * Size:	000008
 */
void Game::Creature::isBuried(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107FB4
 * Size:	000008
 */
void Game::Creature::isUnderground(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107FBC
 * Size:	000008
 */
void Game::Creature::isLivingThing(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107FC4
 * Size:	00000C
 */
void Game::Creature::isDebugCollision(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107FD0
 * Size:	000028
 */
void Game::Creature::setDebugCollision((bool))
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x18
	  lwz       r0, 0xBC(r3)
	  oris      r0, r0, 0x8000
	  stw       r0, 0xBC(r3)
	  blr

	.loc_0x18:
	  lwz       r0, 0xBC(r3)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, 0xBC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107FF8
 * Size:	000004
 */
void Game::Creature::doSave((Stream&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80107FFC
 * Size:	000004
 */
void Game::Creature::doLoad((Stream&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108000
 * Size:	000004
 */
void Game::Creature::platCallback((Game::PlatEvent&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108004
 * Size:	000008
 */
void Game::Creature::getSound_AILOD(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0xD8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010800C
 * Size:	000004
 */
void Game::Creature::on_movie_begin((bool))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108010
 * Size:	000004
 */
void Game::Creature::on_movie_end((bool))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108014
 * Size:	000004
 */
void Game::Creature::movieStartAnimation((unsigned long))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108018
 * Size:	000004
 */
void Game::Creature::movieStartDemoAnimation((SysShape::AnimInfo*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010801C
 * Size:	000004
 */
void Game::Creature::movieSetAnimationLastFrame(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108020
 * Size:	000004
 */
void movieSetTranslation__Q24Game8CreatureFR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108024
 * Size:	000004
 */
void Game::Creature::movieSetFaceDir((float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108028
 * Size:	000008
 */
void movieGotoPosition__Q24Game8CreatureFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108030
 * Size:	000004
 */
void Game::Creature::movieUserCommand((unsigned long, Game::MoviePlayer*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108034
 * Size:	000004
 */
void Game::Creature::getLODCylinder((Sys::Cylinder&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108038
 * Size:	000004
 */
void Game::Creature::startPick(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010803C
 * Size:	000004
 */
void Game::Creature::endPick((bool))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108040
 * Size:	000008
 */
void Game::Creature::getMabiki(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108048
 * Size:	000008
 */
void Game::Creature::getFootmarks(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108050
 * Size:	000004
 */
void Game::Creature::onStickStartSelf((Game::Creature*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108054
 * Size:	000004
 */
void Game::Creature::onStickEndSelf((Game::Creature*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108058
 * Size:	000008
 */
void Game::Creature::isSlotFree((short))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108060
 * Size:	000008
 */
void Game::Creature::getFreeStickSlot(void)
{
	/*
	.loc_0x0:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108068
 * Size:	000008
 */
void getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108070
 * Size:	000008
 */
void Game::Creature::getRandomFreeStickSlot(void)
{
	/*
	.loc_0x0:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108078
 * Size:	000004
 */
void Game::Creature::onSlotStickStart((Game::Creature*, short))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010807C
 * Size:	000004
 */
void Game::Creature::onSlotStickEnd((Game::Creature*, short))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108080
 * Size:	000004
 */
void calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108084
 * Size:	000008
 */
void getAngularEffect__Q24Game8CreatureFR10Vector3<float>
R10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x6BB0(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010808C
 * Size:	000008
 */
void Game::Creature::ignoreAtari((Game::Creature*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108094
 * Size:	000038
 */
void Game::Creature::getSuckPos(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
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
 * Address:	801080CC
 * Size:	000038
 */
void Game::Creature::getGoalPos(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
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
 * Address:	80108104
 * Size:	000008
 */
void Game::Creature::isSuckReady(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010810C
 * Size:	000008
 */
void Game::Creature::isSuckArriveWait(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108114
 * Size:	000008
 */
void Game::Creature::getObjType(void)
{
	/*
	.loc_0x0:
	  lhz       r3, 0x128(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010811C
 * Size:	000024
 */
void Game::Creature::collisionUpdatable(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x12C
	  stw       r0, 0x14(r1)
	  bl        0x8E55C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108140
 * Size:	000008
 */
void Game::CellObject::deferPikiCollision(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108148
 * Size:	000070
 */
void Game::EnemyAnimKeyEvent::__dt(void)
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
	  lis       r4, 0x804B
	  subi      r0, r4, 0x59B4
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x59A4
	  stw       r0, 0x0(r30)
	  bl        0x309400

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0xE40E4

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
 * Address:	801081B8
 * Size:	000004
 */
void Game::PelletView::view_start_carrymotion(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081BC
 * Size:	000004
 */
void Game::PelletView::view_finish_carrymotion(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081C0
 * Size:	000004
 */
void Game::PelletView::viewStartPreCarryMotion(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081C4
 * Size:	000004
 */
void Game::PelletView::viewStartCarryMotion(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081C8
 * Size:	000004
 */
void Game::PelletView::viewOnPelletKilled(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081CC
 * Size:	000008
 */
void Game::EnemyBaseFSM::StateMachine::getCurrState((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081D4
 * Size:	000008
 */
void Game::EnemyBaseFSM::StateMachine::setCurrState((Game::EnemyBase*,
                                                     Game::EnemyFSMState*))
{
	/*
	.loc_0x0:
	  stw       r5, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081DC
 * Size:	000004
 */
void Game::EnemyFSMState::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081E0
 * Size:	000004
 */
void Game::EnemyFSMState::resume((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081E4
 * Size:	000004
 */
void Game::EnemyFSMState::restart((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081E8
 * Size:	000004
 */
void Game::EnemyFSMState::doDirectDraw((Game::EnemyBase*, Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081EC
 * Size:	000004
 */
void Game::EnemyFSMState::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081F0
 * Size:	000004
 */
void Game::EnemyFSMState::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801081F4
 * Size:	00000C
 */
void efx::ArgEnemyType::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x59B4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108200
 * Size:	000008
 */
void efx::Arg::getName(void)
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x6B14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108208
 * Size:	000004
 */
void Game::EnemyBaseFSM::AppearState::simulation((Game::EnemyBase*, float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8010820C
 * Size:	000004
 */
void Game::EnemyBaseFSM::BirthTypeDropState::entry((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108210
 * Size:	000004
 */
void Game::EnemyBaseFSM::BirthTypeDropState::simulation((Game::EnemyBase*,
                                                         float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108214
 * Size:	000004
 */
void Game::EnemyBaseFSM::BirthTypeDropState::animation((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108218
 * Size:	000028
 */
void __sinit_enemyBase_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6E60(r13)
	  stfsu     f0, -0x5EB0(r3)
	  stfs      f0, -0x6E5C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80108240
 * Size:	000008
 */
void @376 @Game::EnemyBase::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x2F64
	*/
}

/*
 * --INFO--
 * Address:	80108248
 * Size:	000014
 */
void @700 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2BC
	  b         -0x193C
	*/
}

/*
 * --INFO--
 * Address:	8010825C
 * Size:	000014
 */
void @700 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2BC
	  b         -0x1BC4
	*/
}

/*
 * --INFO--
 * Address:	80108270
 * Size:	000014
 */
void @700 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2BC
	  b         -0x1BB8
	*/
}

/*
 * --INFO--
 * Address:	80108284
 * Size:	000014
 */
void @700 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2BC
	  b         -0x181C
	*/
}

/*
 * --INFO--
 * Address:	80108298
 * Size:	000014
 */
void @700 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2BC
	  b         -0x185C
	*/
}

/*
 * --INFO--
 * Address:	801082AC
 * Size:	000014
 */
void @700 @12 @Game::EnemyBase::viewGetShape(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2BC
	  b         -0x1C1C
	*/
}

/*
 * --INFO--
 * Address:	801082C0
 * Size:	000008
 */
void @16 @PSM::EnemyHekoi::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x824
	*/
}

/*
 * --INFO--
 * Address:	801082C8
 * Size:	000008
 */
void @48 @PSM::CreatureAnime::startSound((unsigned char, unsigned long,
                                          unsigned long))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         0x3559BC
	*/
}

/*
 * --INFO--
 * Address:	801082D0
 * Size:	000008
 */
void @48
    @PSM::CreatureAnime::startSound((JAISound**, unsigned long, unsigned long))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         0x355A64
	*/
}

/*
 * --INFO--
 * Address:	801082D8
 * Size:	000008
 */
void @48 @PSM::CreatureAnime::startSound((unsigned long, unsigned long))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         0x355970
	*/
}

/*
 * --INFO--
 * Address:	801082E0
 * Size:	000008
 */
void @48 @PSM::EnemyHekoi::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x844
	*/
}

/*
 * --INFO--
 * Address:	801082E8
 * Size:	000008
 */
void @48 @PSM::EnemyBase::startAnimSound((unsigned long, JAISound**,
                                          JAInter::Actor*, unsigned char))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         0x3563B4
	*/
}

/*
 * --INFO--
 * Address:	801082F0
 * Size:	000008
 */
void @48 @PSM::CreatureAnime::playActorAnimSound((JAInter::Actor*, float,
                                                  unsigned char))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         0x355B2C
	*/
}

/*
 * --INFO--
 * Address:	801082F8
 * Size:	000008
 */
void @184 @PSM::EnemyBase::battleOff(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0xB8
	  b         0x3566F4
	*/
}
