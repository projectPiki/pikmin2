

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
 * Address:	801EC188
 * Size:	00018C
 */
void Game::ItemBigFountain::FSM::init((Game::ItemBigFountain::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1B28
	  li        r3, 0x10
	  bl        -0x1C8304
	  mr.       r4, r3
	  beq-      .loc_0x68
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x4CCC
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  lis       r3, 0x804C
	  subi      r6, r6, 0x4D00
	  stw       r7, 0x4(r4)
	  subi      r5, r5, 0x4D38
	  subi      r0, r3, 0x4DE0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x68:
	  mr        r3, r31
	  bl        0x1BD4
	  li        r3, 0x10
	  bl        -0x1C8358
	  mr.       r4, r3
	  beq-      .loc_0xC0
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x4CCC
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x4D00
	  subi      r5, r5, 0x4D38
	  subi      r0, r3, 0x4E18
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC0:
	  mr        r3, r31
	  bl        0x1B7C
	  li        r3, 0x14
	  bl        -0x1C83B0
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x4CCC
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x4D00
	  subi      r5, r5, 0x4D38
	  subi      r0, r3, 0x4D70
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  mr        r3, r31
	  bl        0x1B24
	  li        r3, 0x10
	  bl        -0x1C8408
	  mr.       r4, r3
	  beq-      .loc_0x170
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x4CCC
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x4D00
	  subi      r5, r5, 0x4D38
	  subi      r0, r3, 0x4DA8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x170:
	  mr        r3, r31
	  bl        0x1ACC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EC314
 * Size:	000048
 */
void Game::ItemBigFountain::AppearState::init((Game::ItemBigFountain::Item*,
                                               Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  lfs       f1, -0x48C8(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0x1
	  lfs       f0, -0x48C4(r2)
	  stfs      f1, 0x1F0(r5)
	  stfs      f0, 0x10(r3)
	  mr        r3, r5
	  lwz       r12, 0x0(r5)
	  lwz       r12, 0xAC(r12)
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
 * Address:	801EC35C
 * Size:	0000CC
 */
void Game::ItemBigFountain::AppearState::exec((Game::ItemBigFountain::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  lwz       r5, -0x6514(r13)
	  mr        r30, r3
	  lfs       f1, 0x10(r3)
	  mr        r31, r4
	  lfs       f0, 0x54(r5)
	  lfs       f3, -0x48BC(r2)
	  fadds     f2, f1, f0
	  lfs       f1, -0x48C0(r2)
	  lfs       f0, -0x48C4(r2)
	  stfs      f2, 0x10(r3)
	  lfs       f2, 0x10(r3)
	  fnmsubs   f31, f3, f2, f1
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA0
	  lwz       r12, 0x0(r4)
	  fmr       f31, f0
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x181C
	  li        r5, 0
	  bl        0x14C238

	.loc_0xA0:
	  lfs       f0, -0x48C8(r2)
	  fmuls     f0, f0, f31
	  stfs      f0, 0x1F0(r31)
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EC428
 * Size:	000030
 */
void transit__Q24Game39FSMState<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
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
 * Address:	801EC458
 * Size:	000004
 */
void Game::ItemBigFountain::AppearState::cleanup((Game::ItemBigFountain::Item*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EC45C
 * Size:	00003C
 */
void Game::ItemBigFountain::CloseState::init((Game::ItemBigFountain::Item*,
                                              Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x48C8(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0
	  stfs      f0, 0x1F0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xAC(r12)
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
 * Address:	801EC498
 * Size:	000014
 */
void Game::ItemBigFountain::CloseState::exec((Game::ItemBigFountain::Item*))
{
	/*
	.loc_0x0:
	  lbz       r3, 0xD8(r4)
	  li        r0, -0x35
	  and       r0, r3, r0
	  stb       r0, 0xD8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EC4AC
 * Size:	000004
 */
void Game::ItemBigFountain::CloseState::cleanup((Game::ItemBigFountain::Item*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EC4B0
 * Size:	000044
 */
void Game::ItemBigFountain::WaitState::init((Game::ItemBigFountain::Item*,
                                             Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  addi      r3, r31, 0x1A8
	  bl        0x23C7B8
	  lfs       f0, -0x48C4(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1F0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EC4F4
 * Size:	000034
 */
void Game::ItemBigFountain::WaitState::exec((Game::ItemBigFountain::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x3048
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C0(r12)
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
 * Address:	801EC528
 * Size:	000004
 */
void Game::ItemBigFountain::WaitState::cleanup((Game::ItemBigFountain::Item*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EC52C
 * Size:	000094
 */
void Game::ItemBigFountain::WaitState::onDamage((Game::ItemBigFountain::Item*,
                                                 float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x48C4(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lfs       f2, 0x200(r4)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x200(r4)
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  lfs       f1, 0x1D4(r31)
	  lfs       f0, -0x48B8(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x80
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x6C
	  addi      r5, r31, 0x178

	.loc_0x6C:
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  bl        0x23C6E8
	  lfs       f0, -0x48B8(r2)
	  stfs      f0, 0x1D4(r31)

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
 * Address:	801EC5C0
 * Size:	00000C
 */
void Game::ItemBigFountain::WaitState::onKeyEvent((Game::ItemBigFountain::Item*,
                                                   SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  lfs       f0, -0x48C4(r2)
	  stfs      f0, 0x1D4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EC5CC
 * Size:	00011C
 */
void Game::ItemBigFountain::OutState::init((Game::ItemBigFountain::Item*,
                                            Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  li        r4, 0x1
	  addi      r3, r31, 0x1A8
	  bl        0x23C69C
	  lfs       f0, -0x48B8(r2)
	  mr        r3, r31
	  li        r4, 0
	  stfs      f0, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  addi      r4, r1, 0x8
	  subi      r0, r3, 0x5814
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x1F4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x108
	  addi      r3, r31, 0x1E0
	  bl        0x425BC
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0xE4
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x10BC
	  li        r4, 0xF8
	  addi      r5, r5, 0x10D0
	  crclr     6, 0x6
	  bl        -0x1C206C

	.loc_0xE4:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x181C
	  li        r5, 0
	  bl        0x14BF60

	.loc_0x108:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EC6E8
 * Size:	000034
 */
void Game::ItemBigFountain::OutState::exec((Game::ItemBigFountain::Item*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x303C
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C0(r12)
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
 * Address:	801EC71C
 * Size:	000004
 */
void Game::ItemBigFountain::OutState::cleanup((Game::ItemBigFountain::Item*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EC720
 * Size:	000204
 */
void Game::ItemBigFountain::Item::movieUserCommand((unsigned long,
                                                    Game::MoviePlayer*))
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
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  cmpwi     r4, 0x64
	  mr        r29, r3
	  mr        r30, r5
	  beq-      .loc_0x3C
	  b         .loc_0x1D8

	.loc_0x3C:
	  addi      r3, r1, 0x2C
	  bl        -0x7FDF8
	  addi      r3, r1, 0x2C
	  bl        -0x7FDE8
	  b         .loc_0x158

	.loc_0x50:
	  addi      r3, r1, 0x2C
	  bl        -0x7FDA8
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0x1E4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x150
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x150
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r4, r29
	  lfs       f1, 0x18(r1)
	  addi      r3, r1, 0x8
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x10(r1)
	  mr        r3, r31
	  lfs       f2, 0x28(r1)
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x20(r1)
	  fsubs     f30, f3, f2
	  fsubs     f31, f1, f0
	  bl        -0x85E58
	  fmuls     f2, f30, f30
	  lfs       f0, -0x48C4(r2)
	  fmadds    f2, f31, f31, f2
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x11C
	  ble-      .loc_0x120
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x120

	.loc_0x11C:
	  fmr       f2, f0

	.loc_0x120:
	  fsubs     f1, f2, f1
	  lfs       f0, -0x48B4(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x150
	  lfs       f1, 0x24(r1)
	  mr        r3, r31
	  lfs       f0, -0x48B0(r2)
	  addi      r4, r1, 0x20
	  li        r5, 0
	  fadds     f0, f1, f0
	  stfs      f0, 0x24(r1)
	  bl        -0xB16C4

	.loc_0x150:
	  addi      r3, r1, 0x2C
	  bl        -0x7FE40

	.loc_0x158:
	  addi      r3, r1, 0x2C
	  bl        -0x7FD88
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x50
	  lwz       r0, 0x1F0(r30)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x198
	  lwz       r3, 0x1D8(r29)
	  mr        r4, r29
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D8

	.loc_0x198:
	  lfs       f1, -0x48C4(r2)
	  lfs       f0, 0x1F0(r29)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x1B8
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x181C
	  li        r5, 0
	  bl        0x14BD5C

	.loc_0x1B8:
	  lwz       r3, 0x1D8(r29)
	  mr        r4, r29
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D8:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EC924
 * Size:	000108
 */
void Game::ItemBigFountain::Item::interactGotKey((Game::InteractGotKey&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  bl        0x1514
	  cmpwi     r3, 0x3
	  bne-      .loc_0xF0
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0xF0
	  lfs       f0, -0x48C4(r2)
	  lis       r3, 0x8048
	  li        r0, 0
	  mr        r4, r31
	  addi      r5, r3, 0x10DC
	  stw       r0, 0x18(r1)
	  addi      r3, r1, 0x8
	  stw       r5, 0x14(r1)
	  stw       r0, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x14
	  lwz       r5, -0x6C18(r13)
	  lwz       r3, -0x64AC(r13)
	  lwz       r5, 0x58(r5)
	  lwz       r0, 0xCC(r5)
	  stw       r0, 0x24(r1)
	  lwz       r0, 0xC8(r5)
	  stw       r0, 0x20(r1)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x23FFC8
	  li        r3, 0x1
	  b         .loc_0xF4

	.loc_0xF0:
	  li        r3, 0

	.loc_0xF4:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void Game::ItemBigFountain::Item::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801ECA2C
 * Size:	000048
 */
void Game::ItemBigFountain::Item::constructor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x84
	  bl        -0x1C8BA0
	  mr.       r0, r3
	  beq-      .loc_0x30
	  mr        r4, r31
	  bl        0x274BCC
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, 0x17C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ECA74
 * Size:	000284
 */
void Game::ItemBigFountain::Item::onInit((Game::CreatureInitArg*))
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
	  li        r3, 0x14
	  stw       r29, 0x24(r1)
	  bl        -0x1C8BF4
	  mr.       r29, r3
	  beq-      .loc_0x54
	  lwz       r3, -0x6B50(r13)
	  li        r4, 0
	  bl        -0x1F95C
	  mr        r4, r3
	  mr        r3, r29
	  lis       r5, 0x2
	  li        r6, 0x2
	  bl        0x251718
	  mr        r29, r3

	.loc_0x54:
	  stw       r29, 0x174(r30)
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  bl        -0x1861E0
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  bl        -0x18631C
	  lfs       f0, -0x48AC(r2)
	  addi      r6, r30, 0x1C4
	  li        r5, 0
	  li        r7, 0
	  stfs      f0, 0x1D0(r30)
	  lwz       r3, 0x114(r30)
	  lwz       r4, 0x174(r30)
	  bl        -0xB8A80
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x48C4(r2)
	  stfs      f0, 0x1D4(r30)
	  lwz       r3, -0x6B50(r13)
	  lwz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x10C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x10BC
	  li        r4, 0x16C
	  addi      r5, r5, 0x10F0
	  crclr     6, 0x6
	  bl        -0x1C253C

	.loc_0x10C:
	  lwz       r3, -0x6B50(r13)
	  cmplwi    r30, 0
	  mr        r5, r30
	  lwz       r0, 0x20(r3)
	  stw       r0, 0x1B8(r30)
	  beq-      .loc_0x128
	  addi      r5, r30, 0x178

	.loc_0x128:
	  addi      r3, r30, 0x1A8
	  li        r4, 0
	  bl        0x23C0E4
	  lwz       r4, -0x6B50(r13)
	  li        r3, 0x34
	  lwz       r4, 0x8C(r4)
	  lfs       f0, 0x100(r4)
	  stfs      f0, 0x200(r30)
	  bl        -0x1C8D18
	  mr.       r29, r3
	  beq-      .loc_0x170
	  li        r4, 0x7F
	  li        r5, 0x80
	  li        r6, 0x81
	  bl        0x1C352C
	  lis       r3, 0x804C
	  subi      r0, r3, 0x54D0
	  stw       r0, 0x0(r29)

	.loc_0x170:
	  stw       r29, 0x1F4(r30)
	  li        r3, 0x24
	  bl        -0x1C8D48
	  mr.       r29, r3
	  beq-      .loc_0x19C
	  li        r4, 0x82
	  li        r5, 0x83
	  bl        0x1C3410
	  lis       r3, 0x804C
	  subi      r0, r3, 0x54EC
	  stw       r0, 0x0(r29)

	.loc_0x19C:
	  cmplwi    r31, 0
	  stw       r29, 0x1F8(r30)
	  beq-      .loc_0x1CC
	  lwz       r3, 0x1D8(r30)
	  mr        r4, r30
	  lwz       r5, 0x4(r31)
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x238

	.loc_0x1CC:
	  lfs       f1, 0x200(r30)
	  lfs       f0, -0x48C4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x218
	  lwz       r3, 0x1D8(r30)
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x238

	.loc_0x218:
	  lwz       r3, 0x1D8(r30)
	  mr        r4, r30
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x238:
	  lwz       r3, 0x174(r30)
	  lfs       f1, -0x48C0(r2)
	  lwz       r3, 0x8(r3)
	  lfs       f0, -0x48C4(r2)
	  stfs      f1, 0x18(r3)
	  stfs      f1, 0x1C(r3)
	  stfs      f1, 0x20(r3)
	  stfs      f0, 0x118(r30)
	  stfs      f1, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x1EC(r30)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ECCF8
 * Size:	000034
 */
void start__Q24Game43StateMachine<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x1DC(r4)
	  lwz       r12, 0x0(r3)
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
 * Address:	........
 * Size:	000080
 */
void efx::TForever3::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801ECD2C
 * Size:	000054
 */
void Game::ItemBigFountain::Item::initDependency(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x44
	  lfs       f0, -0x48C4(r2)
	  mr        r4, r3
	  li        r5, 0x1
	  li        r6, 0
	  stfs      f0, 0x200(r3)
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
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
 * Address:	801ECD80
 * Size:	0000C0
 */
void Game::ItemBigFountain::Item::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x210(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0xB1068
	  lwz       r0, 0xDC(r31)
	  cmpwi     r0, 0
	  blt-      .loc_0x68
	  cmpwi     r0, 0xA
	  ble-      .loc_0x98

	.loc_0x68:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x10BC
	  li        r4, 0x1A8
	  addi      r5, r5, 0x1110
	  crclr     6, 0x6
	  bl        -0x1C27D4

	.loc_0x98:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D4(r12)
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
 * Address:	801ECE40
 * Size:	000060
 */
void Game::ItemBigFountain::Item::killAllEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1F8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r3, 0x1F4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	801ECEA0
 * Size:	000068
 */
void Game::ItemBigFountain::Item::makeTrMatrix(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x48C4(r2)
	  mr        r6, r3
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  addi      r5, r1, 0x14
	  lfs       f1, 0x1EC(r3)
	  addi      r3, r6, 0x138
	  stfs      f0, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x19C(r6)
	  stfs      f0, 0x8(r1)
	  lfs       f1, 0x1A0(r6)
	  stfs      f1, 0xC(r1)
	  lfs       f0, 0x1A4(r6)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x1F0(r6)
	  fsubs     f0, f1, f0
	  stfs      f0, 0xC(r1)
	  bl        0x23B994
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ECF08
 * Size:	000118
 */
void Game::ItemBigFountain::Item::onSetPosition(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lwz       r0, -0x6CF8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  mr        r3, r0
	  addi      r4, r30, 0x19C
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x1A0(r30)

	.loc_0x40:
	  mr        r3, r30
	  li        r4, 0xA
	  li        r5, 0
	  bl        0x31630
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x174(r30)
	  addi      r3, r30, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x102CB0
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x10(r3)
	  bl        0x23C900
	  lis       r4, 0x666F
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x756E
	  bl        0x2262F4
	  addi      r3, r1, 0x14
	  bl        -0x276FC
	  stw       r30, 0x14(r1)
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x8
	  li        r5, 0x5
	  bl        -0x12B8B8
	  lwz       r0, 0x10(r1)
	  addi      r4, r1, 0x14
	  lwz       r5, -0x6B50(r13)
	  stw       r0, 0x20(r1)
	  lwz       r3, -0x6BE0(r13)
	  lwz       r0, 0x88(r5)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x28(r1)
	  bl        -0x276D0
	  stw       r3, 0x1FC(r30)
	  li        r4, 0x1
	  lwz       r3, 0x1FC(r30)
	  bl        -0x28430
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
 * Address:	801ED020
 * Size:	0000A0
 */
void Game::ItemBigFountain::Item::doAI(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x1E0
	  bl        0x41BF0
	  cmpwi     r3, 0x2
	  beq-      .loc_0x40
	  b         .loc_0x8C

	.loc_0x40:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0x78
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x10BC
	  li        r4, 0x1EC
	  addi      r5, r5, 0x10D0
	  crclr     6, 0x6
	  bl        -0x1C2A54

	.loc_0x78:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl

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
 * Address:	801ED0C0
 * Size:	00016C
 */
void Game::ItemBigFountain::Item::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x238738
	  li        r6, 0xC8
	  li        r5, 0xFA
	  stb       r6, 0x84(r31)
	  li        r0, 0xFF
	  mr        r3, r31
	  addi      r4, r30, 0x1C4
	  stb       r5, 0x85(r31)
	  stb       r6, 0x86(r31)
	  stb       r0, 0x87(r31)
	  lfs       f1, 0x1D0(r30)
	  bl        0x23899C
	  lwz       r3, -0x7628(r13)
	  li        r6, 0
	  li        r0, 0xFF
	  li        r5, 0x66
	  lfs       f0, -0x48C0(r2)
	  li        r4, 0x99
	  stw       r3, 0x14(r1)
	  mr        r3, r31
	  stw       r6, 0x18(r1)
	  stw       r6, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stb       r5, 0x28(r1)
	  stb       r4, 0x29(r1)
	  stb       r0, 0x2A(r1)
	  stb       r0, 0x2B(r1)
	  stb       r6, 0x2C(r1)
	  stb       r5, 0x2D(r1)
	  stb       r0, 0x2E(r1)
	  stb       r0, 0x2F(r1)
	  lwz       r4, 0x25C(r31)
	  bl        0x23A740
	  lfs       f1, -0x48A8(r2)
	  li        r5, 0xC8
	  li        r4, 0
	  li        r0, 0xFF
	  stb       r5, 0x28(r1)
	  mr        r3, r30
	  lfs       f0, -0x48B0(r2)
	  stb       r4, 0x29(r1)
	  stb       r4, 0x2A(r1)
	  stb       r0, 0x2B(r1)
	  stb       r5, 0x2C(r1)
	  stb       r5, 0x2D(r1)
	  stb       r5, 0x2E(r1)
	  stb       r0, 0x2F(r1)
	  stfs      f1, 0x24(r1)
	  lfs       f1, 0x19C(r30)
	  stfs      f1, 0x8(r1)
	  lfs       f1, 0x1A0(r30)
	  stfs      f1, 0xC(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x1A4(r30)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  subi      r8, r2, 0x48A0
	  beq-      .loc_0x128
	  subi      r8, r2, 0x48A4

	.loc_0x128:
	  lbz       r0, 0xD8(r30)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  rlwinm.   r0,r0,0,29,29
	  subi      r6, r2, 0x489C
	  subi      r7, r2, 0x4890
	  beq-      .loc_0x14C
	  subi      r7, r2, 0x4894

	.loc_0x14C:
	  crclr     6, 0x6
	  bl        0x23A8CC
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
 * Address:	801ED22C
 * Size:	000038
 */
void Game::ItemBigFountain::Item::updateBoundSphere(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lfs       f0, 0x19C(r3)
	  stfs      f0, 0x1C4(r3)
	  lfs       f0, 0x1A0(r3)
	  stfs      f0, 0x1C8(r3)
	  lfs       f0, 0x1A4(r3)
	  stfs      f0, 0x1CC(r3)
	  bl        -0x20C44
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ED264
 * Size:	000004
 */
void Game::ItemBigFountain::Item::doSimulation((float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ED268
 * Size:	000030
 */
void Game::ItemBigFountain::Item::canRide(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
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
 * Address:	801ED298
 * Size:	000008
 */
void Game::ItemBigFountain::State::canRide(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ED2A0
 * Size:	00011C
 */
void Game::ItemBigFountain::Item::interactAttack((Game::InteractAttack&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x104
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lfs       f1, 0x8(r5)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x1E0
	  bl        0x41908
	  cmpwi     r3, 0x2
	  beq-      .loc_0x104
	  bge-      .loc_0x5C
	  cmpwi     r3, 0x1
	  bge-      .loc_0x68
	  b         .loc_0x104

	.loc_0x5C:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x104
	  b         .loc_0xB8

	.loc_0x68:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0xA0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x10BC
	  li        r4, 0x22F
	  addi      r5, r5, 0x10D0
	  crclr     6, 0x6
	  bl        -0x1C2CFC

	.loc_0xA0:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x104

	.loc_0xB8:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0xF0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x10BC
	  li        r4, 0x236
	  addi      r5, r5, 0x10D0
	  crclr     6, 0x6
	  bl        -0x1C2D4C

	.loc_0xF0:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x104:
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ED3BC
 * Size:	000004
 */
void Game::ItemBigFountain::State::onDamage((Game::ItemBigFountain::Item*,
                                             float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ED3C0
 * Size:	0000C8
 */
void getVectorField__Q34Game15ItemBigFountain4ItemFRQ23Sys6SphereR10Vector3<
    float>(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x1A0(r3)
	  lfs       f0, 0x4(r4)
	  lfs       f2, 0x1A4(r3)
	  fsubs     f3, f1, f0
	  lfs       f0, 0x8(r4)
	  lfs       f1, 0x19C(r3)
	  fsubs     f4, f2, f0
	  lfs       f0, 0x0(r4)
	  fmuls     f5, f3, f3
	  fsubs     f2, f1, f0
	  lfs       f0, -0x48C4(r2)
	  fmuls     f6, f4, f4
	  fmadds    f1, f2, f2, f5
	  fadds     f1, f6, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x50
	  ble-      .loc_0x54
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x54

	.loc_0x50:
	  fmr       f1, f0

	.loc_0x54:
	  lfs       f0, -0x48C4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x78
	  lfs       f0, -0x48C0(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  b         .loc_0x7C

	.loc_0x78:
	  fmr       f1, f0

	.loc_0x7C:
	  lfs       f0, -0x488C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x98
	  stfs      f2, 0x0(r5)
	  stfs      f3, 0x4(r5)
	  stfs      f4, 0x8(r5)
	  b         .loc_0xC0

	.loc_0x98:
	  lfs       f0, -0x48C4(r2)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xB4
	  stfs      f2, 0x0(r5)
	  stfs      f3, 0x4(r5)
	  stfs      f4, 0x8(r5)
	  b         .loc_0xC0

	.loc_0xB4:
	  stfs      f0, 0x0(r5)
	  stfs      f0, 0x4(r5)
	  stfs      f0, 0x8(r5)

	.loc_0xC0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ED488
 * Size:	000060
 */
void Game::ItemBigFountain::Item::getWorkDistance((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  lfs       f1, 0x1A0(r3)
	  lfs       f0, 0x4(r4)
	  lfs       f3, 0x1A4(r3)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x8(r4)
	  lfs       f1, 0x19C(r3)
	  lfs       f0, 0x0(r4)
	  fsubs     f2, f3, f2
	  fmuls     f3, f4, f4
	  fsubs     f1, f1, f0
	  lfs       f0, -0x48C4(r2)
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x50
	  ble-      .loc_0x54
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x54

	.loc_0x50:
	  fmr       f1, f0

	.loc_0x54:
	  lfs       f0, -0x488C(r2)
	  fsubs     f1, f1, f0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ED4E8
 * Size:	00003C
 */
void Game::ItemBigFountain::Item::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  mr        r4, r6
	  lwz       r3, 0x1DC(r3)
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
 * Address:	801ED524
 * Size:	000004
 */
void onKeyEvent__Q24Game40ItemState<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4ItemRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ED528
 * Size:	000120
 */
void Game::ItemBigFountain::Mgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  stw       r0, 0x444(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0x43C(r1)
	  addi      r31, r4, 0x10A0
	  stw       r30, 0x438(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x90
	  stw       r0, 0x4(r30)

	.loc_0x30:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x20140
	  lis       r4, 0x804C
	  mr        r3, r30
	  subi      r5, r4, 0x55EC
	  li        r4, 0x1
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x74
	  stw       r0, 0x30(r30)
	  bl        -0x207B4
	  addi      r3, r31, 0x8C
	  addi      r0, r31, 0xAC
	  stw       r3, 0x28(r30)
	  li        r3, 0x114
	  stw       r0, 0x8(r30)
	  bl        -0x1C96F4
	  mr.       r0, r3
	  beq-      .loc_0x84
	  bl        0xC8
	  mr        r0, r3

	.loc_0x84:
	  stw       r0, 0x8C(r30)
	  li        r0, 0
	  addi      r3, r31, 0xB8
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x1CE450
	  mr.       r31, r3
	  beq-      .loc_0x104
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        0x228308
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0xE4
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0xE4:
	  lwz       r3, 0x8C(r30)
	  addi      r4, r1, 0x10
	  lwz       r12, 0xD8(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x1C9550

	.loc_0x104:
	  lwz       r0, 0x444(r1)
	  mr        r3, r30
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ED648
 * Size:	000024
 */
void Game::ItemBigFountain::FountainParms::read((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0xDC
	  stw       r0, 0x14(r1)
	  bl        0x22619C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ED66C
 * Size:	0001EC
 */
void Game::ItemBigFountain::FountainParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x7330
	  lis       r4, 0x804B
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x5350
	  addi      r5, r5, 0x3030
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lis       r3, 0x8048
	  stw       r0, 0xD8(r30)
	  addi      r31, r3, 0x10A0
	  addi      r0, r30, 0xD4
	  li        r3, 0
	  stw       r0, 0x0(r30)
	  addi      r0, r31, 0xD8
	  mr        r4, r30
	  addi      r6, r31, 0xEC
	  stw       r3, 0x4(r30)
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  bl        0x225F94
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4888(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x48C4(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x48C0(r2)
	  addi      r6, r31, 0x100
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x225F58
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4888(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x48C4(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x48C0(r2)
	  addi      r6, r31, 0x110
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x225F1C
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4884(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x48C4(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x48C0(r2)
	  subi      r6, r2, 0x4880
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x225EE0
	  lis       r3, 0x804B
	  lis       r5, 0x7330
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x4878(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x4874(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x4870(r2)
	  addi      r6, r31, 0x120
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x225EA4
	  lis       r4, 0x804B
	  lis       r3, 0x804C
	  subi      r0, r4, 0x5344
	  lis       r5, 0x7030
	  stw       r0, 0xAC(r30)
	  subi      r9, r3, 0x5530
	  lfs       f0, -0x486C(r2)
	  addi      r8, r30, 0x110
	  lfs       f1, -0x4874(r2)
	  li        r7, 0
	  stfs      f0, 0xC4(r30)
	  addi      r0, r31, 0x130
	  lfs       f0, -0x4870(r2)
	  addi      r3, r30, 0xE8
	  stfs      f1, 0xCC(r30)
	  addi      r4, r30, 0xDC
	  addi      r5, r5, 0x3030
	  subi      r6, r2, 0x4868
	  stfs      f0, 0xD0(r30)
	  stw       r9, 0xD8(r30)
	  stw       r8, 0xDC(r30)
	  stw       r7, 0xE0(r30)
	  stw       r0, 0xE4(r30)
	  bl        0x225E44
	  lis       r3, 0x804B
	  lfs       f2, -0x4860(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x48C0(r2)
	  stw       r0, 0xE8(r30)
	  mr        r3, r30
	  lfs       f0, -0x485C(r2)
	  stfs      f2, 0x100(r30)
	  stfs      f1, 0x108(r30)
	  stfs      f0, 0x10C(r30)
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
 * Address:	801ED858
 * Size:	0000DC
 */
void Game::ItemBigFountain::Mgr::onLoadResources(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x10A0
	  subi      r4, r2, 0x4858
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x209AC
	  mr        r3, r29
	  addi      r4, r31, 0x140
	  li        r5, 0
	  lis       r6, 0x2002
	  bl        -0x20944
	  lwz       r3, 0x1C(r29)
	  lis       r4, 0x4
	  lwz       r3, 0x0(r3)
	  bl        -0x169FCC
	  lwz       r3, 0x1C(r29)
	  lwz       r3, 0x0(r3)
	  bl        -0x169E80
	  mr        r3, r29
	  addi      r4, r31, 0x150
	  bl        -0x206F0
	  mr        r0, r3
	  mr        r3, r29
	  mr        r30, r0
	  addi      r5, r31, 0x15C
	  mr        r4, r30
	  bl        -0x208D8
	  mr        r3, r29
	  mr        r4, r30
	  addi      r5, r31, 0x168
	  bl        -0x20644
	  stw       r3, 0x88(r29)
	  addi      r3, r1, 0x8
	  li        r4, 0x1
	  li        r5, 0x2
	  li        r6, 0x1
	  bl        0x22EB5C
	  lwz       r3, 0x88(r29)
	  addi      r4, r1, 0x8
	  bl        -0xBA214
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x206C4
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
 * Address:	801ED934
 * Size:	000020
 */
void Game::ItemBigFountain::Mgr::birth(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x201B4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ED954
 * Size:	000058
 */
void generatorBirth__Q34Game15ItemBigFountain3MgrFR10Vector3<float>
    R10Vector3<float> PQ24Game11GenItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  bl        -0x201E0
	  mr        r0, r3
	  li        r4, 0
	  mr        r31, r0
	  bl        -0xB29B4
	  mr        r3, r31
	  mr        r4, r30
	  li        r5, 0
	  bl        -0xB27E4
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
 * Address:	801ED9AC
 * Size:	000134
 */
void Game::ItemBigFountain::Mgr::__dt(void)
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
	  lis       r3, 0x804C
	  subi      r3, r3, 0x55EC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x7180
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addic.    r3, r30, 0x6C
	  addi      r4, r4, 0x724C
	  stw       r4, 0x4C(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r0, r4, 0x723C
	  stw       r0, 0x6C(r30)
	  li        r4, 0
	  bl        0x223B5C

	.loc_0x84:
	  addic.    r0, r30, 0x4C
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x72CC
	  stw       r3, 0x4C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r0, r3, 0x7348
	  stw       r0, 0x4C(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4C(r30)
	  bl        0x223B0C

	.loc_0xD4:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x30
	  addi      r0, r3, 0x7348
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r4, 0x804B
	  addi      r3, r30, 0x30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        0x223AD8

	.loc_0x108:
	  extsh.    r0, r31
	  ble-      .loc_0x118
	  mr        r3, r30
	  bl        -0x1C9A0C

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
 * Address:	801EDAE0
 * Size:	0000E8
 */
void Game::ItemBigFountain::Mgr::doNew(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x204
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x1C9C50
	  mr.       r31, r3
	  beq-      .loc_0xD0
	  li        r4, 0x40C
	  bl        -0x21B1C
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x503C
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1C9C88
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0x5054
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0x506C
	  subi      r0, r4, 0x4CAC
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0x84:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804C
	  addi      r3, r31, 0x1E0
	  subi      r4, r4, 0x5290
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r31)
	  bl        0x41034
	  lis       r3, 0x804C
	  subi      r3, r3, 0x54B4
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x1B0
	  stw       r0, 0x178(r31)

	.loc_0xD0:
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
 * Address:	801EDBC8
 * Size:	00000C
 */
void Game::ItemBigFountain::Mgr::generatorGetID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x7761
	  addi      r3, r3, 0x7270
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDBD4
 * Size:	000008
 */
void Game::ItemBigFountain::Item::sound_culling(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDBDC
 * Size:	00000C
 */
void Game::ItemBigFountain::Item::getCreatureName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r3, r3, 0x1218
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDBE8
 * Size:	000034
 */
void doAI__Q24Game98FSMItem<Game::ItemBigFountain::Item,
                            Game::ItemBigFountain::FSM,
                            Game::ItemBigFountain::State>
Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
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
 * Address:	801EDC1C
 * Size:	000008
 */
void Game::ItemBigFountain::OutState::canRide(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC24
 * Size:	000044
 */
void onKeyEvent__Q24Game98FSMItem<Game::ItemBigFountain::Item,
                                  Game::ItemBigFountain::FSM,
                                  Game::ItemBigFountain::State>
FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC68
 * Size:	000004
 */
void onDamage__Q24Game40ItemState<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4Itemf(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC6C
 * Size:	000004
 */
void onBounce__Q24Game40ItemState<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4ItemPQ23Sys8Triangle(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC70
 * Size:	000004
 */
void onPlatCollision__Q24Game40ItemState<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4ItemRQ24Game9PlatEvent(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC74
 * Size:	000004
 */
void onCollision__Q24Game40ItemState<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4ItemRQ24Game9CollEvent(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC78
 * Size:	000004
 */
void init__Q24Game39FSMState<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4ItemPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC7C
 * Size:	000004
 */
void exec__Q24Game39FSMState<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4Item(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC80
 * Size:	000004
 */
void cleanup__Q24Game39FSMState<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4Item(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC84
 * Size:	000004
 */
void resume__Q24Game39FSMState<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4Item(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC88
 * Size:	000004
 */
void restart__Q24Game39FSMState<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4Item(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC8C
 * Size:	000004
 */
void init__Q24Game43StateMachine<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4Item(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDC90
 * Size:	000038
 */
void exec__Q24Game43StateMachine<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4Item(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDCC8
 * Size:	000064
 */
void create__Q24Game43StateMachine<Game::ItemBigFountain::Item> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xC(r3)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1C9D44
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1C9D54
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1C9D64
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDD2C
 * Size:	00009C
 */
void transit__Q24Game43StateMachine<Game::ItemBigFountain::Item>
FPQ34Game15ItemBigFountain4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x1DC(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x1DC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDDC8
 * Size:	000084
 */
void registerState__Q24Game43StateMachine<Game::ItemBigFountain::Item>
FPQ24Game39FSMState<Game::ItemBigFountain::Item>(void)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDE4C
 * Size:	00001C
 */
void getStateID__Q24Game98FSMItem<Game::ItemBigFountain::Item,
                                  Game::ItemBigFountain::FSM,
                                  Game::ItemBigFountain::State>
Fv(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1DC(r3)
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
 * Address:	801EDE68
 * Size:	000044
 */
void platCallback__Q24Game98FSMItem<Game::ItemBigFountain::Item,
                                    Game::ItemBigFountain::FSM,
                                    Game::ItemBigFountain::State>
FRQ24Game9PlatEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDEAC
 * Size:	000044
 */
void collisionCallback__Q24Game98FSMItem<Game::ItemBigFountain::Item,
                                         Game::ItemBigFountain::FSM,
                                         Game::ItemBigFountain::State>
FRQ24Game9CollEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDEF0
 * Size:	000044
 */
void bounceCallback__Q24Game98FSMItem<Game::ItemBigFountain::Item,
                                      Game::ItemBigFountain::FSM,
                                      Game::ItemBigFountain::State>
FPQ23Sys8Triangle(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDF34
 * Size:	000028
 */
void __sinit_itemBigFountain_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6B58(r13)
	  stfsu     f0, -0x55F8(r3)
	  stfs      f0, -0x6B54(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801EDF5C
 * Size:	000008
 */
void @376 @onKeyEvent__Q24Game98FSMItem<Game::ItemBigFountain::Item,
                                        Game::ItemBigFountain::FSM,
                                        Game::ItemBigFountain::State>
FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x33C
	*/
}

/*
 * --INFO--
 * Address:	801EDF64
 * Size:	000008
 */
void @376 @Game::ItemBigFountain::Item::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0xA80
	*/
}

/*
 * --INFO--
 * Address:	801EDF6C
 * Size:	000008
 */
void @48 @Game::ItemBigFountain::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x5C4
	*/
}
