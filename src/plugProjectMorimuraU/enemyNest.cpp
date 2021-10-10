

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
 * Address:	8036CA94
 * Size:	000034
 */
void birth__Q34Game4Nest3ObjFR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x26A0A8
	  li        r0, 0x1
	  stb       r0, 0x2EC(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CAC8
 * Size:	00011C
 */
void Game::Nest::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x26B084
	  li        r3, 0xFF
	  li        r0, 0
	  sth       r3, 0x2EE(r31)
	  mr        r3, r31
	  stw       r0, 0x2F0(r31)
	  lfs       f0, 0x18C(r31)
	  stfs      f0, 0x198(r31)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x19C(r31)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x1A0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,20,18
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x26B140
	  lwz       r3, -0x6980(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  mr        r4, r31
	  bl        -0x12AEF4

	.loc_0x98:
	  lwz       r3, 0x138(r31)
	  lwz       r0, 0x13C(r31)
	  lfs       f0, 0x690(r2)
	  stw       r3, 0x2BC(r31)
	  stw       r0, 0x2C0(r31)
	  lwz       r3, 0x140(r31)
	  lwz       r0, 0x144(r31)
	  stw       r3, 0x2C4(r31)
	  stw       r0, 0x2C8(r31)
	  lwz       r3, 0x148(r31)
	  lwz       r0, 0x14C(r31)
	  stw       r3, 0x2CC(r31)
	  stw       r0, 0x2D0(r31)
	  lwz       r3, 0x150(r31)
	  lwz       r0, 0x154(r31)
	  stw       r3, 0x2D4(r31)
	  stw       r0, 0x2D8(r31)
	  lwz       r3, 0x158(r31)
	  lwz       r0, 0x15C(r31)
	  stw       r3, 0x2DC(r31)
	  stw       r0, 0x2E0(r31)
	  lwz       r3, 0x160(r31)
	  lwz       r0, 0x164(r31)
	  stw       r3, 0x2E4(r31)
	  stw       r0, 0x2E8(r31)
	  lfs       f1, 0x190(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2D8(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CBE4
 * Size:	000098
 */
void Game::Nest::Obj::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x3C
	  addi      r0, r31, 0x2F4
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2F4(r31)
	  stw       r0, 0x2F8(r31)
	  stw       r0, 0x2FC(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x26B888
	  lis       r3, 0x804E
	  addi      r4, r31, 0x2F4
	  addi      r3, r3, 0x3068
	  li        r0, 0x1
	  stw       r3, 0x0(r31)
	  addi      r5, r3, 0x1B0
	  addi      r6, r3, 0x2F8
	  mr        r3, r31
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r4, r4, r5
	  stw       r4, 0xC(r5)
	  stb       r0, 0x2EC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CC7C
 * Size:	000020
 */
void Game::Nest::Obj::setHouseType((int))
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x3F
	  bne-      .loc_0x14
	  li        r0, 0
	  stb       r0, 0x2EC(r3)
	  blr

	.loc_0x14:
	  li        r0, 0x1
	  stb       r0, 0x2EC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CC9C
 * Size:	000004
 */
void Game::Nest::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCA0
 * Size:	000004
 */
void Game::Nest::Obj::update(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCA4
 * Size:	000004
 */
void Game::Nest::Obj::doUpdate(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCA8
 * Size:	000004
 */
void Game::Nest::Obj::doSimulation((float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCAC
 * Size:	000004
 */
void Game::Nest::Obj::doAnimationCullingOn(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCB0
 * Size:	000004
 */
void Game::Nest::Obj::doAnimationCullingOff(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCB4
 * Size:	000004
 */
void Game::Nest::Obj::doUpdateCommon(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCB8
 * Size:	000004
 */
void Game::Nest::Obj::doEntry(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCBC
 * Size:	000004
 */
void Game::Nest::Obj::doViewCalc(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCC0
 * Size:	000008
 */
void Game::Nest::Obj::isLivingThing(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCC8
 * Size:	000008
 */
void Game::Nest::Obj::ignoreAtari((Game::Creature*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCD0
 * Size:	000008
 */
void Game::Nest::Obj::needShadow(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCD8
 * Size:	000008
 */
void Game::Nest::Obj::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x53
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCE0
 * Size:	000008
 */
void Game::Nest::Obj::getSound_CurrAnimFrame(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x698(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8036CCE8
 * Size:	000008
 */
void Game::Nest::Obj::getSound_CurrAnimSpeed(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x694(r2)
	  blr
	*/
}
