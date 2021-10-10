

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
 * Address:	80284470
 * Size:	000050
 */
void Game::Wealthy::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x26BEC
	  lis       r3, 0x804D
	  lis       r4, 0x8048
	  subi      r5, r3, 0x706C
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0x786C
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
 * Address:	802844C0
 * Size:	000048
 */
void Game::Wealthy::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x948
	  bl        -0x260634
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x154C54
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	80284508
 * Size:	000048
 */
void Game::Kogane::Parms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x17AD80
	  lis       r4, 0x804D
	  addi      r3, r31, 0x7F8
	  subi      r0, r4, 0x7078
	  li        r4, 0x1
	  stw       r0, 0xD8(r31)
	  bl        .loc_0x48
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	80284550
 * Size:	00023C
 */
void Game::Kogane::Parms::ProperParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x7838
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x14C
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6670
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x4C
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x5C
	  bl        0x18F0B4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2CA0(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x2C9C(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x2C98(r2)
	  addi      r6, r31, 0x6C
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x18F078
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2C94(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x2C9C(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x2C98(r2)
	  addi      r6, r31, 0x7C
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x18F03C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2C90(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x2C9C(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x2C8C(r2)
	  addi      r6, r31, 0x8C
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x18F000
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2C88(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x2C9C(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3230
	  lfs       f0, -0x2C8C(r2)
	  addi      r6, r31, 0x9C
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x18EFC4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2C90(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x2C9C(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3231
	  lfs       f0, -0x2C8C(r2)
	  addi      r6, r31, 0xAC
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x18EF88
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2C88(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x2C9C(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3330
	  lfs       f0, -0x2C8C(r2)
	  addi      r6, r31, 0xBC
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x18EF4C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2C84(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x2C9C(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3430
	  lfs       f0, -0x2C80(r2)
	  addi      r6, r31, 0xCC
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x18EF10
	  lis       r3, 0x804B
	  lfs       f2, -0x2C7C(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x2C9C(r2)
	  stw       r0, 0x124(r30)
	  mr        r3, r30
	  lfs       f0, -0x2C78(r2)
	  stfs      f2, 0x13C(r30)
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
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
 * Address:	8028478C
 * Size:	000060
 */
void Game::Wealthy::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2F0
	  addi      r3, r3, 0x10
	  bl        -0x260804
	  lis       r4, 0x8028
	  lis       r5, 0x8028
	  addi      r4, r4, 0x4A9C
	  mr        r7, r31
	  addi      r5, r5, 0x47EC
	  li        r6, 0x2F0
	  bl        -0x1C2DDC
	  stw       r3, 0x48(r30)
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
 * Address:	802847EC
 * Size:	0000F0
 */
void Game::Wealthy::Obj::__dt(void)
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
	  addi      r0, r30, 0x2E0
	  subi      r4, r3, 0x6F3C
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x320
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC4
	  lis       r3, 0x804C
	  addi      r0, r30, 0x2DC
	  addi      r4, r3, 0x30A8
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x320
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
	  bl        0x18CCDC

	.loc_0xC4:
	  extsh.    r0, r31
	  ble-      .loc_0xD4
	  mr        r3, r30
	  bl        -0x260808

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
 * Address:	802848DC
 * Size:	000010
 */
void Game::Wealthy::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2F0
	  lwz       r3, 0x48(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802848EC
 * Size:	000080
 */
void Game::Wealthy::Mgr::loadTexData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r0, 0x44(r3)
	  addi      r3, r1, 0x8
	  lwz       r4, -0x7B60(r13)
	  bl        0x1C7CC8
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x1C7E84
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r0, 0x30(r3)
	  stw       r0, 0x44(r31)

	.loc_0x44:
	  lwz       r0, 0x44(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x7BC8
	  li        r4, 0x53
	  addi      r5, r5, 0x7BD8
	  crclr     6, 0x6
	  bl        -0x25A314

	.loc_0x6C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028496C
 * Size:	000050
 */
void Game::Kogane::Parms::read((Stream&))
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
	  bl        0x18EE6C
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x18EE60
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x18EE54
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
 * Address:	802849BC
 * Size:	0000C8
 */
void Game::Wealthy::Mgr::__dt(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804D
	  subi      r3, r3, 0x706C
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x2FC0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x18CB34

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x2609B0

	.loc_0xAC:
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
 * Address:	80284A84
 * Size:	000008
 */
void Game::Wealthy::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0xA
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80284A8C
 * Size:	000008
 */
void Game::Wealthy::Mgr::getChangeTexture(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80284A94
 * Size:	000008
 */
void @4 @Game::Wealthy::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xDC
	*/
}
