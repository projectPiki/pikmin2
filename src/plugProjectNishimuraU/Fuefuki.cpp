

/*
 * --INFO--
 * Address:	8029C1C4
 * Size:	000058
 */
void Game::InteractFuefukiTimerReset::actEnemy(Game::EnemyBase*)
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
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x29
	  bne-      .loc_0x40
	  lfs       f0, -0x26C8(r2)
	  li        r3, 0x1
	  stfs      f0, 0x2D4(r31)
	  b         .loc_0x44

	.loc_0x40:
	  li        r3, 0

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
 * Address:	8029C21C
 * Size:	000140
 */
void Game::Fuefuki::Obj::Obj()
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
	  addi      r0, r31, 0x2F4
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2F4(r31)
	  stw       r0, 0x2F8(r31)
	  stw       r0, 0x2FC(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x19AEC4
	  lis       r3, 0x804D
	  addi      r0, r31, 0x2F4
	  subi      r5, r3, 0x3D28
	  li        r3, 0x2C
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x2FC
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        -0x2783F8
	  mr.       r30, r3
	  beq-      .loc_0xCC
	  bl        -0x174934
	  lis       r3, 0x804D
	  lis       r4, 0x804B
	  subi      r0, r3, 0x3E98
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

	.loc_0xCC:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x27844C
	  mr.       r4, r3
	  beq-      .loc_0x100
	  lis       r5, 0x804B
	  lis       r3, 0x804D
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  subi      r0, r3, 0x3EC0
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x100:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xFAC
	  mr        r3, r31
	  bl        0x10B0
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
 * Address:	8029C35C
 * Size:	000004
 */
void Game::Fuefuki::Obj::setInitialSetting(Game::EnemyInitialParamBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C360
 * Size:	000030
 */
void Game::Fuefuki::Obj::birth(Vector3<float>&, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x19996C
	  lwz       r3, -0x6A50(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  bl        -0x7DE30

	.loc_0x20:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C390
 * Size:	000088
 */
void Game::Fuefuki::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x19A94C
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x2B0(r31)
	  stb       r0, 0x2C0(r31)
	  bl        0x5B0
	  lfs       f0, -0x26C4(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  stfs      f0, 0x2C8(r31)
	  bl        0x614
	  lfs       f0, -0x26C4(r2)
	  li        r0, -0x1
	  mr        r4, r31
	  li        r5, 0x2
	  stfs      f0, 0x2D4(r31)
	  li        r6, 0
	  stfs      f0, 0x2D0(r31)
	  stw       r0, 0x2D8(r31)
	  lwz       r3, 0x2BC(r31)
	  lwz       r12, 0x0(r3)
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
 * Address:	8029C418
 * Size:	000054
 */
void Game::Fuefuki::Obj::onKill(Game::CreatureKillArg*)
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
	  bl        0x1268
	  lwz       r3, -0x6A50(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  bl        -0x7DEE8

	.loc_0x30:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x19A568
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
 * Address:	8029C46C
 * Size:	000078
 */
void Game::Fuefuki::Obj::doUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, 0x2BC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x2C4(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x26C4(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C4(r31)
	  lfs       f1, 0x2D4(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5C
	  lfs       f0, -0x26C0(r2)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2D4(r31)

	.loc_0x5C:
	  mr        r3, r31
	  bl        0xE64
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C4E4
 * Size:	000004
 */
void Game::Fuefuki::Obj::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C4E8
 * Size:	000020
 */
void Game::Fuefuki::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x196688
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C508
 * Size:	00004C
 */
void Game::Fuefuki::Obj::setFSM(Game::Fuefuki::FSM*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x2BC(r3)
	  mr        r4, r31
	  lwz       r3, 0x2BC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x2B4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C554
 * Size:	0000A4
 */
void Game::Fuefuki::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  lfs       f3, -0x26C8(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f1, -0x26C4(r2)
	  lfs       f2, 0x190(r30)
	  lfs       f0, -0x26C0(r2)
	  fadds     f2, f3, f2
	  stfs      f2, 0x4(r31)
	  lfs       f2, 0x10(r1)
	  stfs      f2, 0x8(r31)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r0, 0x1E4(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x7C
	  lfs       f0, -0x26BC(r2)
	  stfs      f0, 0x18(r31)
	  b         .loc_0x84

	.loc_0x7C:
	  lfs       f0, -0x26B8(r2)
	  stfs      f0, 0x18(r31)

	.loc_0x84:
	  lfs       f0, -0x26B4(r2)
	  stfs      f0, 0x1C(r31)
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
 * Address:	8029C5F8
 * Size:	000068
 */
void Game::Fuefuki::Obj::pressCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x54
	  lbz       r0, 0x2C0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lwz       r0, 0x1E0(r4)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x54
	  lwz       r3, 0x2BC(r4)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x54:
	  li        r3, 0x1

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C660
 * Size:	000068
 */
void Game::Fuefuki::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x54
	  lbz       r0, 0x2C0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lwz       r0, 0x1E0(r4)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x54
	  lwz       r3, 0x2BC(r4)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x54:
	  li        r3, 0x1

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C6C8
 * Size:	000044
 */
void Game::Fuefuki::Obj::doStartStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1997E8
	  lfs       f1, 0x2D0(r31)
	  lfs       f0, -0x26C4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x30
	  mr        r3, r31
	  bl        0xFA8

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C70C
 * Size:	000044
 */
void Game::Fuefuki::Obj::doFinishStoneState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x199818
	  lfs       f1, 0x2D0(r31)
	  lfs       f0, -0x26C4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x30
	  mr        r3, r31
	  bl        0x34C

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C750
 * Size:	000044
 */
void Game::Fuefuki::Obj::doStartEarthquakeFitState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x194E00
	  lfs       f1, 0x2D0(r31)
	  lfs       f0, -0x26C4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x30
	  mr        r3, r31
	  bl        0xF20

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C794
 * Size:	000044
 */
void Game::Fuefuki::Obj::doFinishEarthquakeFitState()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x194E40
	  lfs       f1, 0x2D0(r31)
	  lfs       f0, -0x26C4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x30
	  mr        r3, r31
	  bl        0x2C4

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C7D8
 * Size:	000034
 */
void Game::Fuefuki::Obj::doStartWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  blr
	  li        r3, 0x11
	  blr
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6948(r13)
	  stfsu     f0, 0x2450(r3)
	  stfs      f0, -0x6944(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C80C
 * Size:	000034
 */
void Game::Fuefuki::Obj::doFinishWaitingBirthTypeDrop()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x194E58
	  mr        r3, r31
	  bl        0xFB0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C840
 * Size:	000028
 */
void Game::Fuefuki::Obj::startCarcassMotion()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x9
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x197850
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C868
 * Size:	000020
 */
void Game::Fuefuki::Obj::doStartMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xFD0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C888
 * Size:	000020
 */
void Game::Fuefuki::Obj::doEndMovie()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xF44
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C8A8
 * Size:	0000C0
 */
void Game::Fuefuki::Obj::getOffsetForMapCollision()
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
	  mr        r3, r31
	  bl        -0x1954D4
	  cmpwi     r3, 0
	  beq-      .loc_0x34
	  cmpwi     r3, 0x8
	  bne-      .loc_0x8C

	.loc_0x34:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0x18C(r31)
	  lfs       f0, -0x26C4(r2)
	  fsubs     f2, f2, f1
	  lfs       f1, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f2, 0x8(r1)
	  lfs       f0, 0x194(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r1)
	  stfs      f2, 0x0(r30)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r30)
	  b         .loc_0xA8

	.loc_0x8C:
	  lis       r3, 0x8051
	  lfsu      f0, 0x41E4(r3)
	  stfs      f0, 0x0(r30)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x8(r30)

	.loc_0xA8:
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
 * Address:	8029C968
 * Size:	000078
 */
void Game::Fuefuki::Obj::resetAppearTimer()
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
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x81C(r3)
	  lfs       f0, 0x844(r3)
	  fsubs     f31, f1, f0
	  bl        -0x1D33F4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x26A8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x26B0(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fmuls     f1, f31, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
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
 * Address:	8029C9E0
 * Size:	00002C
 */
void Game::Fuefuki::Obj::resetWhisleTimer(bool)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x20
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x8BC(r4)
	  lfs       f0, 0x894(r4)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2CC(r3)
	  blr

	.loc_0x20:
	  lfs       f0, -0x26C4(r2)
	  stfs      f0, 0x2CC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029CA0C
 * Size:	000078
 */
void Game::Fuefuki::Obj::isWhisleTimeMax()
{
	/*
	.loc_0x0:
	  lfs       f1, 0x2D4(r3)
	  lfs       f0, -0x26C4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x54
	  lwz       r0, 0x1F4(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x38
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2CC(r3)
	  lfs       f0, 0x8BC(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x70
	  li        r3, 0x1
	  blr

	.loc_0x38:
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2CC(r3)
	  lfs       f0, 0x8E4(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x70
	  li        r3, 0x1
	  blr

	.loc_0x54:
	  lwz       r4, 0xC0(r3)
	  lfs       f1, 0x2CC(r3)
	  lfs       f0, 0x8BC(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x70
	  li        r3, 0x1
	  blr

	.loc_0x70:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029CA84
 * Size:	000038
 */
void Game::Fuefuki::Obj::startWhisle()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x26C4(r2)
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r3)
	  stfs      f0, 0x2CC(r3)
	  stfs      f0, 0x2D0(r3)
	  bl        0xAE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029CABC
 * Size:	000324
 */
void Game::Fuefuki::Obj::updateWhisle()
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
	  lwz       r4, -0x6514(r13)
	  mr        r31, r3
	  lfs       f2, 0x2D0(r3)
	  lfs       f1, 0x54(r4)
	  lfs       f0, -0x26C0(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2D0(r3)
	  lfs       f1, 0x2D0(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x48
	  stfs      f0, 0x2D0(r31)

	.loc_0x48:
	  lwz       r4, 0xC0(r31)
	  mr        r3, r31
	  lfs       f1, 0x2D0(r31)
	  lfs       f0, 0x5B4(r4)
	  fmuls     f31, f1, f0
	  fmr       f1, f31
	  bl        0xB08
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  fmuls     f31, f31, f31
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x1C(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x20(r1)
	  stw       r3, 0x24(r1)
	  bne-      .loc_0xA8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)
	  b         .loc_0x2D4

	.loc_0xA8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)
	  b         .loc_0x114

	.loc_0xC0:
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2D4
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)

	.loc_0x114:
	  lwz       r12, 0x1C(r1)
	  addi      r3, r1, 0x1C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xC0
	  b         .loc_0x2D4

	.loc_0x134:
	  lwz       r3, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x218
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x218
	  mr        r3, r30
	  bl        -0xFD6B8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x218
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x152A4C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x218
	  mr        r4, r30
	  addi      r3, r1, 0x10
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x18(r1)
	  lfs       f2, 0x18C(r31)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x10(r1)
	  fsubs     f2, f2, f0
	  fmuls     f0, f1, f1
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x218
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5D00
	  stw       r31, 0xC(r1)
	  addi      r0, r3, 0x49E0
	  mr        r3, r30
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x218:
	  lwz       r0, 0x28(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x244
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)
	  b         .loc_0x2D4

	.loc_0x244:
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)
	  b         .loc_0x2B8

	.loc_0x264:
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2D4
	  lwz       r3, 0x24(r1)
	  lwz       r4, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x20(r1)

	.loc_0x2B8:
	  lwz       r12, 0x1C(r1)
	  addi      r3, r1, 0x1C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x264

	.loc_0x2D4:
	  lwz       r3, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x20(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x134
	  lwz       r3, -0x6A50(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x304
	  bl        -0x7E848

	.loc_0x304:
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
 * Address:	8029CDE0
 * Size:	000038
 */
void Game::Fuefuki::Obj::finishWhisle()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x26C4(r2)
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r3)
	  stfs      f0, 0x2CC(r3)
	  stfs      f0, 0x2D0(r3)
	  bl        0x898
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029CE18
 * Size:	0002A0
 */
void Game::Fuefuki::Obj::setTargetPosition(bool)
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
	  stw       r30, 0x28(r1)
	  rlwinm.   r0,r4,0,24,31
	  mr        r31, r4
	  mr        r30, r3
	  beq-      .loc_0x108
	  bl        -0x1D38AC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lwz       r3, -0x6C18(r13)
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x26A8(r2)
	  cmplwi    r3, 0
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x26A0(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, -0x26B0(r2)
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  fmr       f30, f0
	  beq-      .loc_0xBC
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  bl        -0x1D38F8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x26A8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x269C(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x26B0(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x26B8(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fadds     f31, f0, f1
	  b         .loc_0x1B0

	.loc_0xBC:
	  lwz       r3, 0xC0(r30)
	  lfs       f1, 0x35C(r3)
	  lfs       f0, 0x384(r3)
	  fsubs     f31, f1, f0
	  bl        -0x1D3944
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lwz       r3, 0xC0(r30)
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x26A8(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x26B0(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, 0x384(r3)
	  fmuls     f2, f31, f2
	  fdivs     f1, f2, f1
	  fadds     f31, f0, f1
	  b         .loc_0x1B0

	.loc_0x108:
	  lwz       r3, 0xC0(r30)
	  lfs       f1, 0x35C(r3)
	  lfs       f0, 0x384(r3)
	  fsubs     f30, f1, f0
	  bl        -0x1D3990
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lwz       r3, 0xC0(r30)
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x26A8(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x26B0(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, 0x384(r3)
	  fmuls     f2, f30, f2
	  fdivs     f1, f2, f1
	  fadds     f31, f0, f1
	  bl        -0x1D39C8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lis       r3, 0x8051
	  lfd       f2, -0x26A8(r2)
	  subi      r3, r3, 0x2E20
	  stw       r0, 0x10(r1)
	  lfs       f0, -0x2698(r2)
	  lfd       f1, 0x10(r1)
	  lfs       f4, -0x26B0(r2)
	  fsubs     f5, f1, f2
	  lfs       f3, 0x18C(r30)
	  lfs       f1, 0x198(r30)
	  lfs       f2, 0x194(r30)
	  fmuls     f5, f0, f5
	  lfs       f0, 0x1A0(r30)
	  fsubs     f1, f3, f1
	  fsubs     f2, f2, f0
	  fdivs     f30, f5, f4
	  bl        -0x267EB0
	  fadds     f0, f1, f30
	  lfs       f1, -0x2694(r2)
	  fadds     f30, f1, f0

	.loc_0x1B0:
	  lfs       f0, -0x26C4(r2)
	  fmr       f1, f30
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x1C4
	  fneg      f1, f30

	.loc_0x1C4:
	  lfs       f3, -0x2690(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x26C4(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f1, f3
	  lfs       f1, 0x1A0(r30)
	  fcmpo     cr0, f30, f0
	  lfs       f4, 0x19C(r30)
	  fctiwz    f0, f2
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f2, f31, f0, f1
	  bge-      .loc_0x228
	  lfs       f0, -0x268C(r2)
	  fmuls     f0, f30, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x240

	.loc_0x228:
	  fmuls     f0, f30, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x240:
	  lfs       f0, 0x198(r30)
	  rlwinm.   r0,r31,0,24,31
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0x2DC(r30)
	  stfs      f4, 0x2E0(r30)
	  stfs      f2, 0x2E4(r30)
	  beq-      .loc_0x278
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r30, 0x2DC
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x2E0(r30)

	.loc_0x278:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D0B8
 * Size:	0001E0
 */
void Game::Fuefuki::Obj::isJumpAway()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  stw       r29, 0x94(r1)
	  mr        r29, r3
	  lwz       r3, 0xC0(r3)
	  lfs       f1, 0x2C4(r29)
	  lfs       f0, 0x81C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x40
	  li        r3, 0x1
	  b         .loc_0x1BC

	.loc_0x40:
	  lfs       f1, 0x2D4(r29)
	  lfs       f0, -0x26C4(r2)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x1B8
	  lfs       f1, 0x3AC(r3)
	  addi      r3, r1, 0x24
	  lfs       f0, 0x18C(r29)
	  addi      r4, r1, 0x14
	  fmuls     f31, f1, f1
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x190(r29)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x194(r29)
	  stfs      f0, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  bl        -0x6ED94
	  li        r0, 0x1
	  addi      r3, r1, 0x44
	  stb       r0, 0x40(r1)
	  addi      r4, r1, 0x24
	  bl        -0x6ED68
	  addi      r3, r1, 0x44
	  bl        -0x6ECF4
	  b         .loc_0x1A8

	.loc_0xA0:
	  addi      r3, r1, 0x44
	  bl        -0x6EC18
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  mr        r30, r3
	  bne-      .loc_0x144
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  mr        r3, r31
	  bl        -0xFDC50
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x144
	  mr        r3, r31
	  mr        r4, r29
	  bl        -0x152FE4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x144
	  li        r30, 0x1

	.loc_0x144:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x1A0
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x194(r29)
	  lfs       f0, 0x10(r1)
	  lfs       f2, 0x18C(r29)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x8(r1)
	  fsubs     f2, f2, f0
	  fmuls     f0, f1, f1
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x1A0
	  lwz       r4, 0xC0(r29)
	  li        r3, 0x1
	  lfs       f0, 0x81C(r4)
	  stfs      f0, 0x2C4(r29)
	  b         .loc_0x1BC

	.loc_0x1A0:
	  addi      r3, r1, 0x44
	  bl        -0x6ED5C

	.loc_0x1A8:
	  addi      r3, r1, 0x44
	  bl        -0x6ED30
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xA0

	.loc_0x1B8:
	  li        r3, 0

	.loc_0x1BC:
	  psq_l     f31,0xA8(r1),0,0
	  lwz       r0, 0xB4(r1)
	  lfd       f31, 0xA0(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D298
 * Size:	000048
 */
void Game::Fuefuki::Obj::isArriveTarget()
{
	/*
	.loc_0x0:
	  lwz       r0, 0x288(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x38
	  lfs       f1, 0x194(r3)
	  lfs       f0, 0x2E4(r3)
	  lfs       f2, 0x18C(r3)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x2DC(r3)
	  lfs       f0, -0x2688(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x40

	.loc_0x38:
	  li        r3, 0x1
	  blr

	.loc_0x40:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D2E0
 * Size:	000050
 */
void Game::Fuefuki::Obj::createFootmarks()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x20
	  bl        -0x279454
	  mr.       r0, r3
	  beq-      .loc_0x2C
	  bl        -0xE8B54
	  mr        r0, r3

	.loc_0x2C:
	  stw       r0, 0x2E8(r31)
	  li        r4, 0xA
	  lwz       r3, 0x2E8(r31)
	  bl        -0xE8B4C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D330
 * Size:	0000BC
 */
void Game::Fuefuki::Obj::updateFootmarks()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfd       f2, -0x26A8(r2)
	  stw       r0, 0x44(r1)
	  lis       r0, 0x4330
	  lfs       f0, -0x26C4(r2)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lwz       r4, -0x6C18(r13)
	  lwz       r3, 0x2E8(r3)
	  lwz       r4, 0x50(r4)
	  lwz       r3, 0x10(r3)
	  stw       r0, 0x28(r1)
	  sub       r0, r3, r4
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x2C(r1)
	  lfd       f1, 0x28(r1)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x54
	  b         .loc_0x58

	.loc_0x54:
	  fneg      f1, f1

	.loc_0x58:
	  lfs       f0, -0x2684(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA8
	  addi      r3, r1, 0x14
	  bl        -0xE8C04
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r4, r1, 0x14
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r3, 0x2E8(r31)
	  bl        -0xE8B9C

	.loc_0xA8:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D3EC
 * Size:	00019C
 */
void Game::Fuefuki::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  li        r3, 0x290
	  stw       r29, 0x14(r1)
	  bl        -0x279568
	  mr.       r31, r3
	  beq-      .loc_0xE4
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r5, r4, 0x5808
	  addi      r29, r31, 0x14
	  stw       r5, 0x0(r31)
	  addi      r0, r3, 0x72B8
	  lis       r3, 0x804E
	  lis       r4, 0x804A
	  stw       r0, 0x0(r31)
	  addi      r6, r3, 0x6B0C
	  subi      r3, r4, 0x1D84
	  li        r4, 0
	  stw       r5, 0x4(r31)
	  addi      r5, r6, 0x14
	  li        r0, 0x19
	  stw       r3, 0x8(r31)
	  mr        r3, r29
	  stw       r6, 0x4(r31)
	  stw       r5, 0x8(r31)
	  stw       r4, 0xC(r31)
	  sth       r0, 0x10(r31)
	  bl        0x173F24
	  lis       r3, 0x804B
	  lis       r4, 0x8014
	  addi      r0, r3, 0x8B8
	  li        r6, 0x24
	  stw       r0, 0x0(r29)
	  li        r0, 0
	  lis       r3, 0x8014
	  subi      r4, r4, 0x37C
	  stw       r0, 0x10(r29)
	  subi      r5, r3, 0x2A0
	  addi      r3, r31, 0x3C
	  li        r7, 0x10
	  stw       r0, 0xC(r29)
	  stw       r0, 0x8(r29)
	  stw       r0, 0x4(r29)
	  stw       r0, 0x24(r31)
	  stw       r0, 0x20(r31)
	  stw       r0, 0x1C(r31)
	  stw       r0, 0x18(r31)
	  bl        -0x1DBC80
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0x10
	  bl        0x119574

	.loc_0xE4:
	  stw       r31, 0x2EC(r30)
	  li        r4, 0x3
	  li        r5, 0xA
	  lwz       r3, 0x2EC(r30)
	  bl        0x119560
	  li        r3, 0x14
	  bl        -0x279644
	  cmplwi    r3, 0
	  beq-      .loc_0x17C
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x6940
	  lis       r4, 0x804D
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x3D74
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  li        r5, 0x6B
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

	.loc_0x17C:
	  stw       r3, 0x2F0(r30)
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
 * Address:	8029D588
 * Size:	00009C
 */
void Game::Fuefuki::Obj::startWhisleEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  lis       r4, 0x804D
	  stw       r0, 0x34(r1)
	  subi      r0, r5, 0x5814
	  lfs       f0, -0x26C4(r2)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  subi      r0, r4, 0x3D80
	  addi      r4, r1, 0x8
	  lfs       f1, 0x18C(r3)
	  stfs      f1, 0xC(r1)
	  lfs       f1, 0x190(r3)
	  stfs      f1, 0x10(r1)
	  lfs       f1, 0x194(r3)
	  stfs      f1, 0x14(r1)
	  stw       r0, 0x8(r1)
	  stfs      f0, 0x18(r1)
	  lwz       r3, 0x2EC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  addi      r0, r31, 0x18C
	  li        r4, 0
	  stw       r0, 0x10(r3)
	  lwz       r3, 0x2F0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	8029D624
 * Size:	000078
 */
void Game::Fuefuki::Obj::updateWhisleEffect(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  lis       r4, 0x804D
	  stw       r0, 0x34(r1)
	  subi      r0, r5, 0x5814
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  subi      r0, r4, 0x3D80
	  addi      r4, r1, 0x8
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x14(r1)
	  stw       r0, 0x8(r1)
	  stfs      f1, 0x18(r1)
	  lwz       r3, 0x2EC(r3)
	  bl        0x119598
	  lwz       r4, 0xC0(r31)
	  lwz       r3, 0x2EC(r31)
	  lfs       f0, 0x5DC(r4)
	  stfs      f0, 0x28C(r3)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D69C
 * Size:	000050
 */
void Game::Fuefuki::Obj::finishWhisleEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2EC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  lwz       r12, 0x0(r3)
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
 * Address:	8029D6EC
 * Size:	00002C
 */
void efx::TCursor::fade()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4(r3)
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
 * Address:	8029D718
 * Size:	000078
 */
void Game::Fuefuki::Obj::createDownEffect(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  fmr       f31, f1
	  mr        r31, r3
	  addi      r4, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x190(r31)
	  fmr       f1, f31
	  lfs       f2, 0x14(r1)
	  mr        r3, r31
	  lfs       f0, 0x1C(r1)
	  addi      r4, r1, 0x8
	  stfs      f2, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x199C20
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
 * Address:	8029D790
 * Size:	000048
 */
void Game::Fuefuki::Obj::createEfxHamon()
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
	  bne-      .loc_0x34
	  mr        r3, r31
	  bl        -0x19BEBC

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D7D8
 * Size:	000050
 */
void Game::Fuefuki::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2EC(r3)
	  lwzu      r12, 0x4(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
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
 * Address:	8029D828
 * Size:	00001C
 */
void efx::TOneEmitter::endDemoDrawOn()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beqlr-
	  lwz       r0, 0xF4(r3)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0xF4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D844
 * Size:	000050
 */
void Game::Fuefuki::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2EC(r3)
	  lwzu      r12, 0x4(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2F0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
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
 * Address:	8029D894
 * Size:	00001C
 */
void efx::TOneEmitter::startDemoDrawOff()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beqlr-
	  lwz       r0, 0xF4(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0xF4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D8B0
 * Size:	00000C
 */
void efx::ArgCursor::getName()
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  subi      r3, r3, 0x7058
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D8BC
 * Size:	00009C
 */
void efx::TFuebugOnpa::~TFuebugOnpa()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0x3D74
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
	  bl        -0x20DC8C

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x279884

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
 * Address:	8029D958
 * Size:	000004
 */
void Game::Fuefuki::Obj::inWaterCallback(Game::WaterBox*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D95C
 * Size:	000004
 */
void Game::Fuefuki::Obj::outWaterCallback()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D960
 * Size:	000008
 */
void Game::Fuefuki::Obj::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0x29
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D968
 * Size:	000008
 */
void Game::Fuefuki::Obj::getFootmarks()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x2E8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029D970
 * Size:	000014
 */
void Game::EnemyBase::@756 @12 @viewOnPelletKilled()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F4
	  b         -0x197064
	*/
}

/*
 * --INFO--
 * Address:	8029D984
 * Size:	000014
 */
void Game::EnemyBase::@756 @12 @viewStartCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F4
	  b         -0x1972EC
	*/
}

/*
 * --INFO--
 * Address:	8029D998
 * Size:	000014
 */
void Game::EnemyBase::@756 @12 @viewStartPreCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F4
	  b         -0x1972E0
	*/
}

/*
 * --INFO--
 * Address:	8029D9AC
 * Size:	000014
 */
void Game::EnemyBase::@756 @12 @view_finish_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F4
	  b         -0x196F44
	*/
}

/*
 * --INFO--
 * Address:	8029D9C0
 * Size:	000014
 */
void Game::EnemyBase::@756 @12 @view_start_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F4
	  b         -0x196F84
	*/
}

/*
 * --INFO--
 * Address:	8029D9D4
 * Size:	000014
 */
void Game::EnemyBase::@756 @12 @viewGetShape()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x2F4
	  b         -0x197344
	*/
}

/*
 * --INFO--
 * Address:	8029D9E8
 * Size:	000008
 */
void efx::TFuebugOnpa::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x130
	*/
}
