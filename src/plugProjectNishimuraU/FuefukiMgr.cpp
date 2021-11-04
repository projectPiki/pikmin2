

/*
 * --INFO--
 * Address:	8029BC38
 * Size:	000050
 */
void Game::Fuefuki::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x16CFB8
	  lis       r3, 0x804D
	  lis       r4, 0x8049
	  subi      r5, r3, 0x3E64
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x73D0
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
 * Address:	8029BC88
 * Size:	000048
 */
void Game::Fuefuki::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x970
	  bl        -0x277DFC
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x16C41C
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
 * Address:	8029BCD0
 * Size:	000048
 */
void Game::Fuefuki::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x192548
	  lis       r4, 0x804D
	  addi      r3, r31, 0x7F8
	  subi      r0, r4, 0x3E70
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
 * Address:	8029BD18
 * Size:	000270
 */
void Game::Fuefuki::Parms::ProperParms::ProperParms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x73E0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x174
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6670
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x28
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x38
	  bl        0x1778EC
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x26F0(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x26EC(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x26E8(r2)
	  addi      r6, r31, 0x48
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x1778B0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x26E4(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x26EC(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x26E8(r2)
	  addi      r6, r31, 0x58
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x177874
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x26E0(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x26EC(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x26E8(r2)
	  addi      r6, r31, 0x64
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x177838
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x26EC(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f0, -0x26DC(r2)
	  addi      r3, r30, 0xAC
	  stfs      f1, 0x9C(r30)
	  addi      r5, r5, 0x3132
	  addi      r6, r31, 0x70
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x177800
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x26DC(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, -0x26EC(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, -0x26D8(r2)
	  addi      r6, r31, 0x88
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0x1777C4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x26D8(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x26EC(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3231
	  lfs       f0, -0x26E4(r2)
	  addi      r6, r31, 0xA0
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x177788
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x26E0(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x26EC(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3232
	  lfs       f0, -0x26D8(r2)
	  addi      r6, r31, 0xAC
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x17774C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x26EC(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f0, -0x26DC(r2)
	  addi      r3, r30, 0x14C
	  stfs      f1, 0x13C(r30)
	  addi      r5, r5, 0x3331
	  addi      r6, r31, 0xC0
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x177714
	  lis       r3, 0x804B
	  lfs       f2, -0x26D4(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x26EC(r2)
	  stw       r0, 0x14C(r30)
	  mr        r3, r30
	  lfs       f0, -0x26D0(r2)
	  stfs      f2, 0x164(r30)
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
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
 * Address:	8029BF88
 * Size:	000060
 */
void Game::Fuefuki::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x304
	  addi      r3, r3, 0x10
	  bl        -0x278000
	  lis       r4, 0x802A
	  lis       r5, 0x802A
	  subi      r4, r4, 0x3DE4
	  mr        r7, r31
	  subi      r5, r5, 0x4018
	  li        r6, 0x304
	  bl        -0x1DA5D8
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
 * Address:	8029BFE8
 * Size:	0000BC
 */
void Game::Fuefuki::Obj::~Obj()
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
	  addi      r0, r31, 0x2F4
	  subi      r4, r3, 0x3D28
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
	  bl        0x175514

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x277FD0

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
 * Address:	8029C0A4
 * Size:	000010
 */
void Game::Fuefuki::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x304
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C0B4
 * Size:	000050
 */
void Game::Fuefuki::Parms::read(Stream&)
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
	  bl        0x177724
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x177718
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x17770C
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
 * Address:	8029C104
 * Size:	0000B0
 */
void Game::Fuefuki::Mgr::~Mgr()
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
	  subi      r3, r3, 0x3E64
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
	  bl        0x175404

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x2780E0

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
 * Address:	8029C1B4
 * Size:	000008
 */
void Game::Fuefuki::Mgr::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0x29
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8029C1BC
 * Size:	000008
 */
void Game::Fuefuki::Mgr::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xBC
	*/
}
