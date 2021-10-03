

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802F2DEC
 * Size:	000050
 */
void Game::Hana::Mgr::__ct( (int, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1C416C
  lis       r3, 0x804D
  lis       r4, 0x8049
  addi      r5, r3, 0x52C8
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  subi      r0, r4, 0x2E28
  stw       r5, 0x4(r31)
  stw       r0, 0x18(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F2E3C
 * Size:	000048
 */
void Game::Hana::Mgr::doAlloc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x884
  bl        -0x2CEFB0
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        -0x1D9528
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        -0x1C35D0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F2E84
 * Size:	000060
 */
void Game::Hana::Mgr::createObj( (int))
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
  mulli     r3, r31, 0x2F8
  addi      r3, r3, 0x10
  bl        -0x2CEEFC
  lis       r4, 0x802F
  lis       r5, 0x802F
  addi      r4, r4, 0x3138
  mr        r7, r31
  addi      r5, r5, 0x2EE4
  li        r6, 0x2F8
  bl        -0x2314D4
  stw       r3, 0x44(r30)
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
 * Address:	802F2EE4
 * Size:	0000F0
 */
void Game::Hana::Obj::__dt(void)
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
  beq-      .loc_0xD4
  lis       r3, 0x804D
  addi      r0, r30, 0x2E8
  addi      r4, r3, 0x53D4
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r4, r4, 0x334
  stw       r3, 0x178(r30)
  lwz       r3, 0x17C(r30)
  stw       r4, 0x0(r3)
  lwz       r3, 0x17C(r30)
  sub       r0, r0, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0xC4
  lis       r3, 0x804B
  addi      r0, r30, 0x2E4
  subi      r4, r3, 0x20B4
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r4, r4, 0x334
  stw       r3, 0x178(r30)
  lwz       r3, 0x17C(r30)
  stw       r4, 0x0(r3)
  lwz       r3, 0x17C(r30)
  sub       r0, r0, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0xC4
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
  bl        0x11E5E4

.loc_0xC4:
  extsh.    r0, r31
  ble-      .loc_0xD4
  mr        r3, r30
  bl        -0x2CEF00

.loc_0xD4:
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
 * Address:	802F2FD4
 * Size:	000010
 */
void Game::Hana::Mgr::getEnemy( (int))
{
/*
.loc_0x0:
  mulli     r0, r4, 0x2F8
  lwz       r3, 0x44(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	802F2FE4
 * Size:	000068
 */
void Game::Hana::Mgr::loadModelData(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1C2EEC
  li        r5, 0
  b         .loc_0x40

.loc_0x20:
  lwz       r3, 0x80(r4)
  rlwinm    r0,r5,2,14,29
  addi      r5, r5, 0x1
  lwzx      r3, r3, r0
  lwz       r0, 0xC(r3)
  rlwinm    r0,r0,0,20,15
  ori       r0, r0, 0x2000
  stw       r0, 0xC(r3)

.loc_0x40:
  lwz       r4, 0x1C(r31)
  rlwinm    r0,r5,0,16,31
  lhz       r3, 0x7C(r4)
  cmplw     r0, r3
  blt+      .loc_0x20
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F304C
 * Size:	0000B0
 */
void Game::Hana::Mgr::__dt(void)
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
  beq-      .loc_0x94
  lis       r3, 0x804D
  addi      r3, r3, 0x52C8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r3, 0x804B
  subi      r3, r3, 0x760
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r3, 0x804B
  addic.    r0, r30, 0x4
  subi      r3, r3, 0x5304
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r4, 0x804B
  addi      r3, r30, 0x4
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4(r30)
  bl        0x11E4BC

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x2CF028

.loc_0x94:
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
 * Address:	802F30FC
 * Size:	000008
 */
void Game::Hana::Mgr::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x54
  blr
*/
}

/*
 * --INFO--
 * Address:	802F3104
 * Size:	00002C
 */
void Game::Hana::Mgr::doLoadBmd( (void *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x2124
  mr        r3, r4
  stw       r0, 0x14(r1)
  addi      r4, r5, 0x30
  bl        -0x283888
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F3130
 * Size:	000008
 */
void @4@Game::Hana::Mgr::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xE8
*/
}
