

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
 * Address:	8012A950
 * Size:	00015C
 */
void Game::ChappyBase::Obj::__ct(void)
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
	  addi      r0, r31, 0x2E4
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2E4(r31)
	  stw       r0, 0x2E8(r31)
	  stw       r0, 0x2EC(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x295F8
	  lis       r3, 0x804B
	  addi      r4, r31, 0x2E4
	  subi      r3, r3, 0x20B4
	  li        r0, 0
	  stw       r3, 0x0(r31)
	  addi      r5, r3, 0x1B0
	  addi      r6, r3, 0x334
	  addi      r3, r31, 0x2C0
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r4, r4, r5
	  stw       r4, 0xC(r5)
	  stw       r0, 0x2BC(r31)
	  bl        0xDB70
	  addi      r3, r31, 0x2D0
	  bl        -0x68C
	  li        r3, 0x2C
	  bl        -0x106B44
	  mr.       r30, r3
	  beq-      .loc_0xE4
	  bl        -0x3080
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r3, 0x3E18
	  lis       r3, 0x804F
	  stw       r0, 0x0(r30)
	  subi      r4, r4, 0x4678
	  subi      r3, r3, 0x4200
	  li        r0, 0
	  stw       r4, 0x10(r30)
	  stw       r3, 0x10(r30)
	  stb       r0, 0x28(r30)
	  stw       r0, 0x1C(r30)
	  stw       r0, 0x14(r30)
	  stb       r0, 0x28(r30)
	  stw       r0, 0x20(r30)

	.loc_0xE4:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x106B98
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r5, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x3E3C
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x31C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8012AAAC
 * Size:	000044
 */
void birth__Q34Game10ChappyBase3ObjFR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x280C0
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0x6308
	  bl        0x314518
	  stw       r3, 0x2C8(r31)
	  lfs       f0, -0x6304(r2)
	  stfs      f0, 0x2CC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012AAF0
 * Size:	000004
 */
void Game::ChappyBase::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012AAF4
 * Size:	000080
 */
void Game::ChappyBase::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x290B0
	  lfs       f1, -0x6300(r2)
	  li        r4, 0
	  lfs       f0, -0x62FC(r2)
	  li        r0, 0x1
	  stfs      f1, 0x264(r31)
	  mr        r3, r31
	  stfs      f0, 0x268(r31)
	  stb       r4, 0x26C(r31)
	  stb       r0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x320(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2BC(r31)
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  li        r5, 0x7
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012AB74
 * Size:	000034
 */
void Game::ChappyBase::Obj::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2BC(r3)
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
 * Address:	8012ABA8
 * Size:	000004
 */
void Game::ChappyBase::Obj::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012ABAC
 * Size:	000020
 */
void Game::ChappyBase::Obj::doDebugDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x24D4C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012ABCC
 * Size:	0000C8
 */
void Game::ChappyBase::Obj::getShadowParam((Game::ShadowParam&))
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
	  lwz       r3, 0x2C8(r3)
	  bl        0x2FECB4
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lfs       f4, 0x2C(r3)
	  lfs       f3, 0x1C(r3)
	  lfs       f1, 0xC(r3)
	  lfs       f0, -0x62F8(r2)
	  stfs      f1, 0x0(r31)
	  lfs       f2, -0x62F4(r2)
	  stfs      f3, 0x4(r31)
	  stfs      f4, 0x8(r31)
	  lfs       f1, 0x4(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r31)
	  lfs       f1, 0x190(r30)
	  lfs       f0, 0x4(r31)
	  fadds     f1, f2, f1
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x8C
	  stfs      f1, 0x4(r31)
	  b         .loc_0x8C

	.loc_0x74:
	  lfs       f0, 0x18C(r30)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x190(r30)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x194(r30)
	  stfs      f0, 0x8(r31)

	.loc_0x8C:
	  lfs       f2, -0x6304(r2)
	  lfs       f0, -0x62F0(r2)
	  stfs      f2, 0xC(r31)
	  lfs       f1, -0x62EC(r2)
	  stfs      f0, 0x10(r31)
	  lfs       f0, -0x62E8(r2)
	  stfs      f2, 0x14(r31)
	  stfs      f1, 0x18(r31)
	  stfs      f0, 0x1C(r31)
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
 * Address:	8012AC94
 * Size:	000040
 */
void Game::ChappyBase::Obj::damageCallBack((Game::Creature*, float, CollPart*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x1C
	  lfs       f2, -0x62F0(r2)
	  b         .loc_0x28

	.loc_0x1C:
	  lfs       f0, -0x62E4(r2)
	  lfs       f2, -0x6300(r2)
	  fmuls     f1, f1, f0

	.loc_0x28:
	  bl        -0x24C90
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012ACD4
 * Size:	000150
 */
void Game::ChappyBase::Obj::collisionCallback((Game::CollEvent&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  mr        r27, r3
	  li        r30, 0
	  lwz       r29, 0x0(r4)
	  cmplwi    r29, 0
	  beq-      .loc_0x128
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE4
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1F0(r29)
	  mr        r31, r3
	  cmplwi    r0, 0x2
	  beq-      .loc_0xDC
	  cmpwi     r31, 0x26
	  beq-      .loc_0xDC
	  cmpwi     r31, 0x28
	  beq-      .loc_0xDC
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x128
	  cmpwi     r31, 0x1
	  beq-      .loc_0x128
	  cmpwi     r31, 0x2
	  beq-      .loc_0x128
	  cmpwi     r31, 0x2D
	  beq-      .loc_0x128
	  cmpwi     r31, 0x2B
	  beq-      .loc_0x128
	  cmpwi     r31, 0x2C
	  beq-      .loc_0x128
	  cmpwi     r31, 0x2A
	  beq-      .loc_0x128
	  cmpwi     r31, 0
	  beq-      .loc_0x128
	  cmpwi     r31, 0x25
	  beq-      .loc_0x128
	  cmpwi     r31, 0x4D
	  beq-      .loc_0x128

	.loc_0xDC:
	  li        r30, 0x1
	  b         .loc_0x128

	.loc_0xE4:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x124
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x204(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x128
	  li        r30, 0x1
	  b         .loc_0x128

	.loc_0x124:
	  li        r30, 0x1

	.loc_0x128:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x13C
	  mr        r3, r27
	  mr        r4, r28
	  bl        -0x247FC

	.loc_0x13C:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012AE24
 * Size:	000050
 */
void Game::ChappyBase::Obj::doStartStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x27F44
	  mr        r3, r31
	  bl        -0x23A4C
	  cmpwi     r3, 0x7
	  bne-      .loc_0x3C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x328(r12)
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
 * Address:	8012AE74
 * Size:	000004
 */
void Game::ChappyBase::Obj::doFinishStoneState(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012AE78
 * Size:	000064
 */
void Game::ChappyBase::Obj::getOffsetForMapCollision(void)
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
	  lwz       r3, 0x2C8(r4)
	  bl        0x2FEA08
	  lfs       f2, 0xC(r3)
	  lfs       f0, 0x18C(r31)
	  lfs       f3, 0x2C(r3)
	  lfs       f1, 0x194(r31)
	  fsubs     f2, f2, f0
	  lfs       f0, -0x6304(r2)
	  fsubs     f3, f3, f1
	  stfs      f2, 0x0(r30)
	  stfs      f0, 0x4(r30)
	  stfs      f3, 0x8(r30)
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
 * Address:	8012AEDC
 * Size:	000028
 */
void Game::ChappyBase::Obj::startCarcassMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x5
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x25EEC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012AF04
 * Size:	0000DC
 */
void Game::ChappyBase::Obj::initMouthSlots(void)
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
	  li        r4, 0x5
	  addi      r3, r30, 0x2C0
	  bl        0xD62C
	  lwz       r5, 0x174(r30)
	  addi      r3, r30, 0x2C0
	  li        r4, 0
	  subi      r6, r2, 0x62E0
	  bl        0xD750
	  lwz       r5, 0x174(r30)
	  addi      r3, r30, 0x2C0
	  li        r4, 0x1
	  subi      r6, r2, 0x62D8
	  bl        0xD73C
	  lwz       r5, 0x174(r30)
	  addi      r3, r30, 0x2C0
	  li        r4, 0x2
	  subi      r6, r2, 0x62D0
	  bl        0xD728
	  lwz       r5, 0x174(r30)
	  addi      r3, r30, 0x2C0
	  li        r4, 0x3
	  subi      r6, r2, 0x62C8
	  bl        0xD714
	  lwz       r5, 0x174(r30)
	  addi      r3, r30, 0x2C0
	  li        r4, 0x4
	  subi      r6, r2, 0x62C0
	  bl        0xD700
	  lfs       f31, -0x62B8(r2)
	  li        r31, 0
	  b         .loc_0xB0

	.loc_0x9C:
	  mr        r4, r31
	  addi      r3, r30, 0x2C0
	  bl        0xD7D0
	  stfs      f31, 0x1C(r3)
	  addi      r31, r31, 0x1

	.loc_0xB0:
	  lwz       r0, 0x2C0(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x9C
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
 * Address:	8012AFE0
 * Size:	000064
 */
void Game::ChappyBase::Obj::initWalkSmokeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x2
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x2D0
	  bl        -0xC98
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2D0
	  lfs       f1, -0x62AC(r2)
	  li        r4, 0
	  subi      r6, r2, 0x62B4
	  bl        -0xA34
	  lwz       r5, 0x174(r31)
	  addi      r3, r31, 0x2D0
	  lfs       f1, -0x62AC(r2)
	  li        r4, 0x1
	  subi      r6, r2, 0x62A8
	  bl        -0xA4C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012B044
 * Size:	000008
 */
void Game::ChappyBase::Obj::getWalkSmokeEffectMgr(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012B04C
 * Size:	000200
 */
void Game::ChappyBase::Obj::isWakeup(void)
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
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  li        r31, 0
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x2A
	  beq-      .loc_0x54
	  b         .loc_0x1B0

	.loc_0x54:
	  lwz       r5, 0xC0(r29)
	  addi      r3, r1, 0x48
	  lfs       f0, 0x18C(r29)
	  addi      r4, r1, 0x38
	  lfs       f1, 0x870(r5)
	  stfs      f0, 0x38(r1)
	  lfs       f0, 0x190(r29)
	  stfs      f0, 0x3C(r1)
	  lfs       f0, 0x194(r29)
	  stfs      f0, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  bl        0x1032D4
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x48
	  bl        0x103308
	  addi      r3, r1, 0x68
	  bl        0x10337C
	  b         .loc_0x19C

	.loc_0x9C:
	  addi      r3, r1, 0x68
	  bl        0x103458
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x194
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
	  beq-      .loc_0x194

	.loc_0xF8:
	  mr        r4, r30
	  lwz       r5, 0xC0(r29)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x14
	  lfs       f29, 0x870(r5)
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
	  bge-      .loc_0x194
	  li        r31, 0x1
	  b         .loc_0x1C8

	.loc_0x194:
	  addi      r3, r1, 0x68
	  bl        0x10331C

	.loc_0x19C:
	  addi      r3, r1, 0x68
	  bl        0x103348
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x9C
	  b         .loc_0x1C8

	.loc_0x1B0:
	  lwz       r3, 0x1E0(r29)
	  rlwinm.   r0,r3,0,30,30
	  bne-      .loc_0x1C4
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x1C8

	.loc_0x1C4:
	  li        r31, 0x1

	.loc_0x1C8:
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
 * Address:	8012B24C
 * Size:	0000B0
 */
void Game::ChappyBase::Obj::setCollEvent((Game::CollEvent&))
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
	  lwz       r3, 0x0(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x44
	  lwz       r31, 0x0(r30)

	.loc_0x44:
	  cmplwi    r31, 0
	  beq-      .loc_0x88
	  beq-      .loc_0x94
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x204(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94

	.loc_0x88:
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x24C78

	.loc_0x94:
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
 * Address:	8012B2FC
 * Size:	0000C8
 */
void Game::ChappyBase::Obj::flickStatePikmin(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r31, 0xC0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x53C(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x18224
	  mr        r3, r30
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x514(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x17EA0
	  mr        r3, r30
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x514(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x17C18
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
 * Address:	8012B3C4
 * Size:	0001A4
 */
void Game::ChappyBase::Obj::flickAttackBomb(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  lfs       f3, 0x18C(r3)
	  stfs      f3, 0x34(r1)
	  lfs       f2, 0x190(r3)
	  stfs      f2, 0x38(r1)
	  lfs       f1, 0x194(r3)
	  stfs      f1, 0x3C(r1)
	  lfs       f0, 0x240(r3)
	  fadds     f3, f3, f0
	  stfs      f3, 0x34(r1)
	  lfs       f0, 0x244(r3)
	  fadds     f2, f2, f0
	  stfs      f2, 0x38(r1)
	  lfs       f0, 0x248(r3)
	  fadds     f1, f1, f0
	  stfs      f1, 0x3C(r1)
	  lwz       r3, 0x280(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x118
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x0(r3)
	  li        r5, 0
	  lwz       r8, 0x34(r1)
	  lis       r3, 0x804B
	  stfs      f0, 0x38(r1)
	  subi      r0, r3, 0x5808
	  lwz       r6, 0x3C(r1)
	  lis       r4, 0x804B
	  lwz       r7, 0x38(r1)
	  lis       r3, 0x804E
	  stw       r8, 0x8(r1)
	  subi      r11, r4, 0x5814
	  lfs       f0, -0x62F0(r2)
	  lis       r4, 0x804B
	  stw       r7, 0xC(r1)
	  addi      r9, r3, 0x6A50
	  lfs       f3, 0x8(r1)
	  lis       r3, 0x804F
	  stw       r6, 0x10(r1)
	  li        r8, 0x54
	  lfs       f2, 0xC(r1)
	  li        r7, 0x55
	  stw       r0, 0x40(r1)
	  li        r6, 0x56
	  lfs       f1, 0x10(r1)
	  subi      r10, r4, 0x5D24
	  stw       r11, 0x58(r1)
	  subi      r0, r3, 0x7A04
	  addi      r3, r1, 0x40
	  addi      r4, r1, 0x58
	  stw       r9, 0x40(r1)
	  stfs      f3, 0x5C(r1)
	  stfs      f2, 0x60(r1)
	  stfs      f1, 0x64(r1)
	  stw       r10, 0x58(r1)
	  stfs      f0, 0x68(r1)
	  sth       r8, 0x44(r1)
	  sth       r7, 0x46(r1)
	  sth       r6, 0x48(r1)
	  stw       r5, 0x4C(r1)
	  stw       r5, 0x50(r1)
	  stw       r5, 0x54(r1)
	  stw       r0, 0x40(r1)
	  bl        0x29D2F8
	  b         .loc_0x180

	.loc_0x118:
	  lis       r3, 0x804B
	  lfs       f0, -0x62F0(r2)
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x6A78
	  lis       r4, 0x804B
	  lis       r3, 0x804F
	  stw       r0, 0x14(r1)
	  subi      r4, r4, 0x5814
	  subi      r0, r3, 0x79F0
	  li        r6, 0x53
	  li        r5, 0
	  stfs      f0, 0x20(r1)
	  lfs       f0, -0x62A0(r2)
	  addi      r3, r1, 0x14
	  stw       r4, 0x24(r1)
	  addi      r4, r1, 0x24
	  stfs      f3, 0x28(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  sth       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x20(r1)
	  bl        0x29D224

	.loc_0x180:
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x34
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        0x12822C
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012B568
 * Size:	000060
 */
void Game::ChappyBase::Obj::flickAttackFail(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r31, 0xC0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x53C(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x18490
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
 * Address:	8012B5C8
 * Size:	000024
 */
void Game::ChappyBase::Obj::eatAttackPikmin(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  bl        -0x17AA4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012B5EC
 * Size:	0000B0
 */
void Game::ChappyBase::Obj::createEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  bl        -0x107760
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804B
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x2100
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x8B
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r3)
	  sth       r8, 0xC(r3)
	  stb       r9, 0xE(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x4(r3)
	  stw       r9, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x98:
	  stw       r3, 0x2D8(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012B69C
 * Size:	000084
 */
void efx::TChaseMtx::__dt(void)
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
	  addi      r3, r3, 0x68A8
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
	  bl        -0x9BA54

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x10764C

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
 * Address:	8012B720
 * Size:	000050
 */
void Game::ChappyBase::Obj::setupEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r4, r2, 0x629C
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x174(r3)
	  bl        0x3138A8
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  bl        0x2FE158
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  lwz       r4, 0x2D8(r31)
	  stw       r3, 0x10(r4)

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
 * Address:	8012B770
 * Size:	000034
 */
void Game::ChappyBase::Obj::startSleepEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2D8(r3)
	  lwz       r12, 0x0(r3)
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
 * Address:	8012B7A4
 * Size:	000030
 */
void Game::ChappyBase::Obj::finishSleepEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2D8(r3)
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
 * Address:	8012B7D4
 * Size:	00009C
 */
void efx::THanachoN::__dt(void)
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
	  lis       r3, 0x804B
	  subi      r3, r3, 0x2100
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
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
	  bl        -0x9BBA4

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x10779C

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
 * Address:	8012B870
 * Size:	000004
 */
void efx::TSync::doExecuteAfter((JPABaseEmitter*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012B874
 * Size:	000010
 */
void efx::TSync::startDemoDrawOff(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0xE(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0xE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012B884
 * Size:	000010
 */
void efx::TSync::endDemoDrawOn(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0xE(r3)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0xE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012B894
 * Size:	000008
 */
void @4 @efx::TSync::executeAfter((JPABaseEmitter*))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         0x283F9C
	*/
}

/*
 * --INFO--
 * Address:	8012B89C
 * Size:	000008
 */
void @4 @efx::TSync::execute((JPABaseEmitter*))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         0x283F28
	*/
}

/*
 * --INFO--
 * Address:	8012B8A4
 * Size:	000008
 */
void @4 @efx::THanachoN::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xD4
	*/
}
