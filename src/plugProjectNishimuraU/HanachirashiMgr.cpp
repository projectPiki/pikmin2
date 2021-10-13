

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
 * Address:	802A1328
 * Size:	000050
 */
void Game::Hanachirashi::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1726A8
	  lis       r3, 0x804D
	  lis       r4, 0x8049
	  subi      r5, r3, 0x2E88
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x6ED4
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
 * Address:	802A1378
 * Size:	000048
 */
void Game::Hanachirashi::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x948
	  bl        -0x27D4EC
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x171B0C
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
 * Address:	802A13C0
 * Size:	000048
 */
void Game::Hanachirashi::Parms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x197C38
	  lis       r4, 0x804D
	  addi      r3, r31, 0x7F8
	  subi      r0, r4, 0x2DA8
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
 * Address:	802A1408
 * Size:	00023C
 */
void Game::Hanachirashi::Parms::ProperParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x6F48
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x14C
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6670
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x94
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0xA4
	  bl        0x1721FC
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x25D0(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x25CC(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x25C8(r2)
	  addi      r6, r31, 0xB4
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x1721C0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x25C4(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x25CC(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x25C0(r2)
	  addi      r6, r31, 0xC0
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x172184
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x25BC(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x25CC(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x25C0(r2)
	  addi      r6, r31, 0xD4
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x172148
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x25BC(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x25CC(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x25C0(r2)
	  addi      r6, r31, 0xE8
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x17210C
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x25BC(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x25CC(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x25C0(r2)
	  addi      r6, r31, 0xF8
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x1720D0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5370
	  li        r3, 0xA
	  stw       r0, 0xD4(r30)
	  li        r7, 0x1
	  li        r0, 0x32
	  mr        r4, r30
	  stw       r3, 0xEC(r30)
	  addi      r3, r30, 0xFC
	  addi      r5, r5, 0x3035
	  addi      r6, r31, 0x108
	  stw       r7, 0xF4(r30)
	  stw       r0, 0xF8(r30)
	  bl        0x172094
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x25B8(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x25CC(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, -0x25C0(r2)
	  addi      r6, r31, 0x118
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x172058
	  lis       r3, 0x804B
	  lfs       f2, -0x25B4(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x25CC(r2)
	  stw       r0, 0x124(r30)
	  mr        r3, r30
	  lfs       f0, -0x25C0(r2)
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
 * Address:	802A1644
 * Size:	000060
 */
void Game::Hanachirashi::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x33C
	  addi      r3, r3, 0x10
	  bl        -0x27D6BC
	  lis       r4, 0x802A
	  lis       r5, 0x802A
	  addi      r4, r4, 0x1AE8
	  mr        r7, r31
	  addi      r5, r5, 0x16A4
	  li        r6, 0x33C
	  bl        -0x1DFC94
	  stw       r3, 0x4C(r30)
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
 * Address:	802A16A4
 * Size:	0000BC
 */
void Game::Hanachirashi::Obj::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xA0
	  lis       r3, 0x804D
	  addi      r0, r31, 0x32C
	  subi      r4, r3, 0x2D60
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x2FC
	  stw       r3, 0x178(r31)
	  lwz       r3, 0x17C(r31)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r31)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r31, 0x290
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x16FE58

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x27D68C

	.loc_0xA0:
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
 * Address:	802A1760
 * Size:	000010
 */
void Game::Hanachirashi::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x33C
	  lwz       r3, 0x4C(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A1770
 * Size:	00012C
 */
void Game::Hanachirashi::Mgr::loadTexData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  mr        r30, r3
	  lwz       r3, 0x1C(r3)
	  bl        0x19CB0C
	  lwz       r4, -0x7B30(r13)
	  addi      r3, r1, 0x38
	  li        r31, 0
	  bl        0x1AAE38
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x38
	  bl        0x1AAFF4
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r31, 0x30(r3)

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne-      .loc_0x70
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x6B68
	  li        r4, 0x58
	  subi      r5, r5, 0x6B54
	  crclr     6, 0x6
	  bl        -0x27719C

	.loc_0x70:
	  li        r3, 0x10
	  bl        -0x27D940
	  mr.       r0, r3
	  beq-      .loc_0x88
	  bl        0x192944
	  mr        r0, r3

	.loc_0x88:
	  stw       r0, 0x44(r30)
	  mr        r4, r31
	  lwz       r3, 0x44(r30)
	  lwz       r5, 0x1C(r30)
	  bl        0x192818
	  lwz       r4, -0x7B2C(r13)
	  addi      r3, r1, 0x8
	  li        r31, 0
	  bl        0x1AADC0
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x1AAF7C
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lwz       r31, 0x30(r3)

	.loc_0xC4:
	  cmplwi    r31, 0
	  bne-      .loc_0xE8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x6B68
	  li        r4, 0x60
	  subi      r5, r5, 0x6B54
	  crclr     6, 0x6
	  bl        -0x277214

	.loc_0xE8:
	  li        r3, 0x14
	  bl        -0x27D9B8
	  mr.       r0, r3
	  beq-      .loc_0x100
	  bl        0x1929D8
	  mr        r0, r3

	.loc_0x100:
	  stw       r0, 0x48(r30)
	  mr        r4, r31
	  lwz       r3, 0x48(r30)
	  lwz       r5, 0x1C(r30)
	  bl        0x1927A0
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A189C
 * Size:	00013C
 */
void Game::Hanachirashi::Mgr::createModel(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  mr        r28, r3
	  li        r3, 0x14
	  bl        -0x27DA1C
	  mr.       r30, r3
	  beq-      .loc_0x44
	  lwz       r4, 0x1C(r28)
	  lis       r5, 0x8
	  lbz       r6, 0x24(r28)
	  bl        0x19C900
	  mr        r30, r3

	.loc_0x44:
	  cmplwi    r30, 0
	  bne-      .loc_0x68
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x6B68
	  li        r4, 0x79
	  subi      r5, r5, 0x6B54
	  crclr     6, 0x6
	  bl        -0x2772C0

	.loc_0x68:
	  li        r29, 0
	  lis       r31, 0x100
	  b         .loc_0xB0

	.loc_0x74:
	  lwz       r3, 0x64(r4)
	  mr        r4, r29
	  bl        -0x272AFC
	  subi      r4, r2, 0x25B0
	  bl        -0x1D7260
	  cmpwi     r3, 0
	  bne-      .loc_0xAC
	  lwz       r4, 0x8(r30)
	  rlwinm    r3,r29,6,10,25
	  addi      r0, r3, 0x2C
	  lwz       r3, 0xC0(r4)
	  addi      r4, r31, 0x200
	  lwzx      r3, r3, r0
	  bl        -0x24166C

	.loc_0xAC:
	  addi      r29, r29, 0x1

	.loc_0xB0:
	  lwz       r4, 0x1C(r28)
	  rlwinm    r0,r29,0,16,31
	  lhz       r3, 0x5C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x74
	  addi      r3, r1, 0x8
	  bl        -0x1B76C4
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  bl        -0x1B76A8
	  lwz       r31, 0x8(r30)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x23B084
	  mr        r3, r31
	  bl        -0x23B1BC
	  lwz       r0, 0x54(r1)
	  mr        r3, r30
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A19D8
 * Size:	0000B0
 */
void Game::Hanachirashi::Mgr::__dt(void)
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
	  subi      r3, r3, 0x2E88
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
	  bl        0x16FB30

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x27D9B4

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
 * Address:	802A1A88
 * Size:	000008
 */
void Game::Hanachirashi::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x37
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A1A90
 * Size:	000050
 */
void Game::Hanachirashi::Parms::read((Stream&))
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
	  bl        0x171D48
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x171D3C
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x171D30
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
 * Address:	802A1AE0
 * Size:	000008
 */
void @4 @Game::Hanachirashi::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x10C
	*/
}
