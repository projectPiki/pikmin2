

/*
 * --INFO--
 * Address:	80281F10
 * Size:	000050
 */
void Game::Mar::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x153290
	  lis       r3, 0x804D
	  lis       r4, 0x8048
	  subi      r5, r3, 0x7360
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0x747C
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
 * Address:	80281F60
 * Size:	000048
 */
void Game::Mar::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x948
	  bl        -0x25E0D4
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x1526F4
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
 * Address:	80281FA8
 * Size:	000048
 */
void Game::Mar::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x178820
	  lis       r4, 0x804D
	  addi      r3, r31, 0x7F8
	  subi      r0, r4, 0x7280
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
 * Address:	80281FF0
 * Size:	00023C
 */
void Game::Mar::Parms::ProperParms::ProperParms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x7428
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x14C
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6670
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x70
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x80
	  bl        0x191614
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2D48(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x2D44(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x2D40(r2)
	  addi      r6, r31, 0x90
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x1915D8
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2D3C(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x2D44(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x2D38(r2)
	  addi      r6, r31, 0x9C
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x19159C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2D34(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x2D44(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x2D38(r2)
	  addi      r6, r31, 0xB0
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x191560
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2D34(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x2D44(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x2D38(r2)
	  addi      r6, r31, 0xC4
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x191524
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2D34(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x2D44(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x2D38(r2)
	  addi      r6, r31, 0xD4
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x1914E8
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
	  addi      r6, r31, 0xE4
	  stw       r7, 0xF4(r30)
	  stw       r0, 0xF8(r30)
	  bl        0x1914AC
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x2D30(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x2D44(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, -0x2D38(r2)
	  addi      r6, r31, 0xF4
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x191470
	  lis       r3, 0x804B
	  lfs       f2, -0x2D2C(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x2D44(r2)
	  stw       r0, 0x124(r30)
	  mr        r3, r30
	  lfs       f0, -0x2D38(r2)
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
 * Address:	8028222C
 * Size:	000060
 */
void Game::Mar::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x334
	  addi      r3, r3, 0x10
	  bl        -0x25E2A4
	  lis       r4, 0x8028
	  lis       r5, 0x8028
	  subi      r4, r4, 0xAF4
	  mr        r7, r31
	  addi      r5, r5, 0x1D4C
	  li        r6, 0x334
	  bl        -0x1C087C
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
 * Address:	8028228C
 * Size:	000010
 */
void Game::Mar::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x334
	  lwz       r3, 0x4C(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028229C
 * Size:	00012C
 */
void Game::Mar::Mgr::loadTexData()
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
	  bl        0x1BBFE0
	  lwz       r4, -0x7B68(r13)
	  addi      r3, r1, 0x38
	  li        r31, 0
	  bl        0x1CA30C
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x38
	  bl        0x1CA4C8
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r31, 0x30(r3)

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne-      .loc_0x70
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x77E4
	  li        r4, 0x58
	  addi      r5, r5, 0x77F0
	  crclr     6, 0x6
	  bl        -0x257CC8

	.loc_0x70:
	  li        r3, 0x10
	  bl        -0x25E46C
	  mr.       r0, r3
	  beq-      .loc_0x88
	  bl        0x1B1E18
	  mr        r0, r3

	.loc_0x88:
	  stw       r0, 0x44(r30)
	  mr        r4, r31
	  lwz       r3, 0x44(r30)
	  lwz       r5, 0x1C(r30)
	  bl        0x1B1CEC
	  lwz       r4, -0x7B64(r13)
	  addi      r3, r1, 0x8
	  li        r31, 0
	  bl        0x1CA294
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x1CA450
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lwz       r31, 0x30(r3)

	.loc_0xC4:
	  cmplwi    r31, 0
	  bne-      .loc_0xE8
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x77E4
	  li        r4, 0x60
	  addi      r5, r5, 0x77F0
	  crclr     6, 0x6
	  bl        -0x257D40

	.loc_0xE8:
	  li        r3, 0x14
	  bl        -0x25E4E4
	  mr.       r0, r3
	  beq-      .loc_0x100
	  bl        0x1B1EAC
	  mr        r0, r3

	.loc_0x100:
	  stw       r0, 0x48(r30)
	  mr        r4, r31
	  lwz       r3, 0x48(r30)
	  lwz       r5, 0x1C(r30)
	  bl        0x1B1C74
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
 * Address:	802823C8
 * Size:	00013C
 */
void Game::Mar::Mgr::createModel()
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
	  bl        -0x25E548
	  mr.       r30, r3
	  beq-      .loc_0x44
	  lwz       r4, 0x1C(r28)
	  lis       r5, 0x8
	  lbz       r6, 0x24(r28)
	  bl        0x1BBDD4
	  mr        r30, r3

	.loc_0x44:
	  cmplwi    r30, 0
	  bne-      .loc_0x68
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x77E4
	  li        r4, 0x79
	  addi      r5, r5, 0x77F0
	  crclr     6, 0x6
	  bl        -0x257DEC

	.loc_0x68:
	  li        r29, 0
	  lis       r31, 0x100
	  b         .loc_0xB0

	.loc_0x74:
	  lwz       r3, 0x64(r4)
	  mr        r4, r29
	  bl        -0x253628
	  subi      r4, r2, 0x2D28
	  bl        -0x1B7D8C
	  cmpwi     r3, 0
	  bne-      .loc_0xAC
	  lwz       r4, 0x8(r30)
	  rlwinm    r3,r29,6,10,25
	  addi      r0, r3, 0x2C
	  lwz       r3, 0xC0(r4)
	  addi      r4, r31, 0x200
	  lwzx      r3, r3, r0
	  bl        -0x222198

	.loc_0xAC:
	  addi      r29, r29, 0x1

	.loc_0xB0:
	  lwz       r4, 0x1C(r28)
	  rlwinm    r0,r29,0,16,31
	  lhz       r3, 0x5C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x74
	  addi      r3, r1, 0x8
	  bl        -0x1981F0
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  bl        -0x1981D4
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
	  bl        -0x21BBB0
	  mr        r3, r31
	  bl        -0x21BCE8
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
 * Address:	80282504
 * Size:	0000B0
 */
void Game::Mar::Mgr::~Mgr()
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
	  subi      r3, r3, 0x7360
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
	  bl        0x18F004

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x25E4E0

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
 * Address:	802825B4
 * Size:	000008
 */
void Game::Mar::Mgr::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0x1D
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802825BC
 * Size:	000050
 */
void Game::Mar::Parms::read(Stream&)
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
	  bl        0x19121C
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x191210
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x191204
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
 * Address:	8028260C
 * Size:	000008
 */
void Game::Mar::Mgr::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x10C
	*/
}
