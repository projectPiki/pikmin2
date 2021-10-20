

/*
 * --INFO--
 * Address:	8013070C
 * Size:	000030
 */
void Game::EnemyFSMState::transit(Game::EnemyBase*, int, Game::StateArg*)
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
 * Address:	8013073C
 * Size:	00005C
 */
void Game::EnemyStateMachine::doDirectDraw(Game::EnemyBase*, Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x20(r12)
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
 * Address:	80130798
 * Size:	000080
 */
void Game::EnemyStateMachine::start(Game::EnemyBase*, int, Game::StateArg*)
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
	  li        r5, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  mr        r5, r30
	  mr        r6, r31
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80130818
 * Size:	00004C
 */
void Game::EnemyStateMachine::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
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
 * Address:	80130864
 * Size:	0000A4
 */
void Game::EnemyStateMachine::create(int)
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
	  bl        -0x10C8E0
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x10C8F0
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x10C900
	  li        r6, 0
	  stw       r3, 0x14(r31)
	  mr        r5, r6
	  li        r7, 0
	  li        r4, -0x1
	  b         .loc_0x84

	.loc_0x64:
	  lwz       r3, 0x4(r31)
	  addi      r7, r7, 0x1
	  stwx      r5, r3, r6
	  lwz       r3, 0x10(r31)
	  stwx      r4, r3, r6
	  lwz       r3, 0x14(r31)
	  stwx      r4, r3, r6
	  addi      r6, r6, 0x4

	.loc_0x84:
	  lwz       r0, 0xC(r31)
	  cmpw      r7, r0
	  blt+      .loc_0x64
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80130908
 * Size:	000084
 */
void Game::EnemyStateMachine::registerState(Game::EnemyFSMState*)
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
 * Address:	8013098C
 * Size:	000070
 */
void Game::EnemyStateMachine::getCurrID(Game::EnemyBase*)
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
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r3)
	  b         .loc_0x58

	.loc_0x54:
	  li        r3, -0x1

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
 * Address:	801309FC
 * Size:	000070
 */
void Game::EnemyStateMachine::getCurrName(Game::EnemyBase*)
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
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r3)
	  b         .loc_0x58

	.loc_0x54:
	  subi      r3, r2, 0x6218

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
 * Address:	80130A6C
 * Size:	00011C
 */
void Game::EnemyStateMachine::transit(Game::EnemyBase*, int, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r12, 0x0(r3)
	  lwz       r7, 0x14(r3)
	  lwz       r12, 0x1C(r12)
	  lwzx      r31, r7, r0
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x18(r28)

	.loc_0x98:
	  lwz       r0, 0xC(r28)
	  cmpw      r31, r0
	  blt-      .loc_0xA8

	.loc_0xA4:
	  b         .loc_0xA4

	.loc_0xA8:
	  mr        r3, r28
	  lwz       r5, 0x4(r28)
	  lwz       r12, 0x0(r28)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r29
	  lwzx      r5, r5, r0
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  mr        r5, r30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80130B88
 * Size:	000008
 */
void Game::EnemyStateMachine::setCurrState(Game::EnemyBase*,
                                           Game::EnemyFSMState*)
{
	/*
	.loc_0x0:
	  stw       r5, 0x2B4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80130B90
 * Size:	000008
 */
void Game::EnemyStateMachine::getCurrState(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2B4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80130B98
 * Size:	000004
 */
void Game::EnemyStateMachine::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}
