

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
 * Address:	802D3998
 * Size:	000050
 */
void Game::OniKurage::Mgr::__ct( (int, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1A4D18
  lis       r3, 0x804D
  lis       r4, 0x8049
  addi      r5, r3, 0x29E8
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  subi      r0, r4, 0x429C
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
 * Address:	802D39E8
 * Size:	000048
 */
void Game::OniKurage::Mgr::doAlloc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x948
  bl        -0x2AFB5C
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        .loc_0x48
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        -0x1A417C
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
 * Address:	802D3A30
 * Size:	000048
 */
void Game::OniKurage::Parms::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1CA2A8
  lis       r4, 0x804D
  addi      r3, r31, 0x7F8
  addi      r0, r4, 0x2AC8
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
 * Address:	802D3A78
 * Size:	00023C
 */
void Game::OniKurage::Parms::ProperParms::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  lis       r4, 0x8049
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x42B0
  stw       r30, 0x8(r1)
  mr        r30, r3
  beq-      .loc_0x30
  addi      r0, r30, 0x14C
  stw       r0, 0x0(r30)

.loc_0x30:
  li        r0, 0
  lis       r5, 0x6670
  stw       r0, 0x4(r30)
  addi      r0, r31, 0x2C
  mr        r4, r30
  addi      r3, r30, 0xC
  stw       r0, 0x8(r30)
  addi      r5, r5, 0x3031
  addi      r6, r31, 0x3C
  bl        0x13FB8C
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x19F0(r2)
  stw       r0, 0xC(r30)
  mr        r4, r30
  lfs       f1, -0x19EC(r2)
  addi      r3, r30, 0x34
  stfs      f0, 0x24(r30)
  addi      r5, r5, 0x3032
  lfs       f0, -0x19E8(r2)
  addi      r6, r31, 0x48
  stfs      f1, 0x2C(r30)
  stfs      f0, 0x30(r30)
  bl        0x13FB50
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x19E4(r2)
  stw       r0, 0x34(r30)
  mr        r4, r30
  lfs       f1, -0x19EC(r2)
  addi      r3, r30, 0x5C
  stfs      f0, 0x4C(r30)
  addi      r5, r5, 0x3130
  lfs       f0, -0x19E0(r2)
  addi      r6, r31, 0x54
  stfs      f1, 0x54(r30)
  stfs      f0, 0x58(r30)
  bl        0x13FB14
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x19DC(r2)
  stw       r0, 0x5C(r30)
  mr        r4, r30
  lfs       f1, -0x19EC(r2)
  addi      r3, r30, 0x84
  stfs      f0, 0x74(r30)
  addi      r5, r5, 0x3131
  lfs       f0, -0x19E0(r2)
  addi      r6, r31, 0x68
  stfs      f1, 0x7C(r30)
  stfs      f0, 0x80(r30)
  bl        0x13FAD8
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x19D8(r2)
  stw       r0, 0x84(r30)
  mr        r4, r30
  lfs       f1, -0x19EC(r2)
  addi      r3, r30, 0xAC
  stfs      f0, 0x9C(r30)
  addi      r5, r5, 0x3132
  lfs       f0, -0x19E0(r2)
  addi      r6, r31, 0x78
  stfs      f1, 0xA4(r30)
  stfs      f0, 0xA8(r30)
  bl        0x13FA9C
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x19D4(r2)
  stw       r0, 0xAC(r30)
  mr        r4, r30
  lfs       f1, -0x19EC(r2)
  addi      r3, r30, 0xD4
  stfs      f0, 0xC4(r30)
  addi      r5, r5, 0x3034
  lfs       f0, -0x19E4(r2)
  addi      r6, r31, 0x88
  stfs      f1, 0xCC(r30)
  stfs      f0, 0xD0(r30)
  bl        0x13FA60
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5344
  lfs       f0, -0x19DC(r2)
  stw       r0, 0xD4(r30)
  mr        r4, r30
  lfs       f1, -0x19EC(r2)
  addi      r3, r30, 0xFC
  stfs      f0, 0xEC(r30)
  addi      r5, r5, 0x3031
  lfs       f0, -0x19E0(r2)
  addi      r6, r31, 0x98
  stfs      f1, 0xF4(r30)
  stfs      f0, 0xF8(r30)
  bl        0x13FA24
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5370
  li        r3, 0xA
  stw       r0, 0xFC(r30)
  li        r7, 0x1
  li        r0, 0x32
  mr        r4, r30
  stw       r3, 0x114(r30)
  addi      r3, r30, 0x124
  addi      r5, r5, 0x3131
  addi      r6, r31, 0xA8
  stw       r7, 0x11C(r30)
  stw       r0, 0x120(r30)
  bl        0x13F9E8
  lis       r3, 0x804B
  li        r5, 0xA
  subi      r0, r3, 0x5370
  li        r4, 0x1
  stw       r0, 0x124(r30)
  li        r0, 0x64
  mr        r3, r30
  stw       r5, 0x13C(r30)
  stw       r4, 0x144(r30)
  stw       r0, 0x148(r30)
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
 * Address:	802D3CB4
 * Size:	000060
 */
void Game::OniKurage::Mgr::createObj( (int))
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
  mulli     r3, r31, 0x320
  addi      r3, r3, 0x10
  bl        -0x2AFD2C
  lis       r4, 0x802D
  lis       r5, 0x802D
  addi      r4, r4, 0x3F84
  mr        r7, r31
  addi      r5, r5, 0x3D14
  li        r6, 0x320
  bl        -0x212304
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
 * Address:	802D3D14
 * Size:	0000BC
 */
void Game::OniKurage::Obj::__dt(void)
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
  addi      r0, r31, 0x310
  addi      r4, r3, 0x2C60
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
  bl        0x13D7E8

.loc_0x90:
  extsh.    r0, r30
  ble-      .loc_0xA0
  mr        r3, r31
  bl        -0x2AFCFC

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
 * Address:	802D3DD0
 * Size:	000010
 */
void Game::OniKurage::Mgr::getEnemy( (int))
{
/*
.loc_0x0:
  mulli     r0, r4, 0x320
  lwz       r3, 0x44(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	802D3DE0
 * Size:	000068
 */
void Game::OniKurage::Mgr::loadModelData(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1A3CE8
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
 * Address:	802D3E48
 * Size:	0000B0
 */
void Game::OniKurage::Mgr::__dt(void)
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
  addi      r3, r3, 0x29E8
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
  bl        0x13D6C0

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x2AFE24

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
 * Address:	802D3EF8
 * Size:	000008
 */
void Game::OniKurage::Mgr::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x48
  blr
*/
}

/*
 * --INFO--
 * Address:	802D3F00
 * Size:	00002C
 */
void Game::OniKurage::Mgr::doLoadBmd( (void *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x2024
  mr        r3, r4
  stw       r0, 0x14(r1)
  addi      r4, r5, 0x30
  bl        -0x264684
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D3F2C
 * Size:	000050
 */
void Game::OniKurage::Parms::read( (Stream &))
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
  bl        0x13F8AC
  mr        r4, r31
  addi      r3, r30, 0xE0
  bl        0x13F8A0
  mr        r4, r31
  addi      r3, r30, 0x7F8
  bl        0x13F894
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
 * Address:	802D3F7C
 * Size:	000008
 */
void @4@Game::OniKurage::Mgr::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x138
*/
}
