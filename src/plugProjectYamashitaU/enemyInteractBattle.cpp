

/*
 * --INFO--
 * Address:	8010BA00
 * Size:	00007C
 */
void Game::InteractHipdrop::actEnemy(Game::EnemyBase*)
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
	  lwz       r4, 0x4(r30)
	  lwz       r12, 0x27C(r12)
	  lfs       f1, 0x8(r30)
	  lwz       r5, 0xC(r30)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x64
	  mr        r3, r31
	  lwz       r4, 0x4(r30)
	  lwz       r12, 0x0(r31)
	  lfs       f1, 0x8(r30)
	  lwz       r12, 0x284(r12)
	  lwz       r5, 0xC(r30)
	  mtctr     r12
	  bctrl

	.loc_0x64:
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
 * Address:	8010BA7C
 * Size:	000074
 */
void Game::InteractEarthquake::actEnemy(Game::EnemyBase*)
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
	  bl        -0x5750
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54
	  mr        r3, r30
	  lwz       r4, 0x4(r29)
	  lwz       r12, 0x0(r30)
	  lfs       f1, 0x8(r29)
	  lwz       r12, 0x28C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3

	.loc_0x54:
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
 * Address:	8010BAF0
 * Size:	000040
 */
void Game::InteractPress::actEnemy(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x4(r5)
	  lwz       r12, 0x27C(r12)
	  lfs       f1, 0x8(r5)
	  lwz       r5, 0xC(r5)
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
 * Address:	8010BB30
 * Size:	000040
 */
void Game::InteractFlyCollision::actEnemy(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x4(r5)
	  lwz       r12, 0x280(r12)
	  lfs       f1, 0x8(r5)
	  lwz       r5, 0xC(r5)
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
 * Address:	8010BB70
 * Size:	00011C
 */
void Game::InteractAttack::actEnemy(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r0, 0x1E0(r4)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0xF8
	  lwz       r3, 0x4(r28)
	  li        r30, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  lwz       r3, 0x4(r28)
	  lhz       r0, 0x2DC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  lwz       r3, 0x1E0(r29)
	  rlwinm.   r0,r3,0,15,15
	  bne-      .loc_0xA0
	  oris      r0, r3, 0x1
	  li        r30, 0x1
	  stw       r0, 0x1E0(r29)
	  b         .loc_0xA0

	.loc_0x80:
	  lwz       r3, 0x1E0(r29)
	  rlwinm.   r0,r3,0,14,14
	  bne-      .loc_0xA0
	  oris      r0, r3, 0x2
	  li        r30, 0x1
	  stw       r0, 0x1E0(r29)
	  b         .loc_0xA0

	.loc_0x9C:
	  li        r30, 0x1

	.loc_0xA0:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0xF8
	  lwz       r0, 0x1E0(r29)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0xD4
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x2AC(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r28)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x8(r28)

	.loc_0xD4:
	  mr        r3, r29
	  lwz       r4, 0x4(r28)
	  lwz       r12, 0x0(r29)
	  lfs       f1, 0x8(r28)
	  lwz       r12, 0x278(r12)
	  lwz       r5, 0xC(r28)
	  mtctr     r12
	  bctrl
	  mr        r31, r3

	.loc_0xF8:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	8010BC8C
 * Size:	000038
 */
void Game::InteractDrop::actEnemy(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x4(r5)
	  lwz       r12, 0x288(r12)
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
 * Address:	8010BCC4
 * Size:	000078
 */
void Game::InteractBomb::actEnemy(Game::EnemyBase*)
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
	  bl        -0x59D8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  mr        r3, r30
	  addi      r5, r29, 0xC
	  lwz       r12, 0x0(r30)
	  lwz       r4, 0x4(r29)
	  lwz       r12, 0x294(r12)
	  lfs       f1, 0x8(r29)
	  mtctr     r12
	  bctrl
	  mr        r31, r3

	.loc_0x58:
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
