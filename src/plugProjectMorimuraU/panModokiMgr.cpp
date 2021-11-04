#include "types.h"

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
 * Address:	8034E9C0
 * Size:	000050
 */
void Game::PanModoki::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x21FD40
	  lis       r3, 0x804E
	  lis       r4, 0x8049
	  subi      r5, r3, 0x3978
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0xB58
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
 * Address:	8034EA10
 * Size:	000048
 */
void Game::PanModoki::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x9A0
	  bl        -0x32AB84
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x21F1A4
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
 * Address:	8034EA58
 * Size:	000064
 */
void Game::PanModokiBase::Parms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2452D0
	  lis       r4, 0x804E
	  addi      r3, r31, 0x7F8
	  subi      r0, r4, 0x3558
	  li        r4, 0x1
	  stw       r0, 0xD8(r31)
	  bl        .loc_0x64
	  li        r4, 0
	  li        r0, 0x1
	  stb       r4, 0x998(r31)
	  mr        r3, r31
	  lfs       f0, 0xF8(r2)
	  stb       r4, 0x999(r31)
	  stb       r0, 0x99A(r31)
	  stfs      f0, 0x99C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x64:
	*/
}

/*
 * --INFO--
 * Address:	8034EABC
 * Size:	0002B4
 */
void Game::PanModokiBase::Parms::ProperParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0xB48
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x19C
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6670
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x28
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3030
	  addi      r6, r31, 0x38
	  bl        0xC4B48
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0xFC(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, 0x100(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3136
	  lfs       f0, 0x104(r2)
	  addi      r6, r31, 0x44
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0xC4B0C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0xFC(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, 0x100(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, 0x104(r2)
	  addi      r6, r31, 0x5C
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0xC4AD0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x108(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, 0x100(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, 0xFC(r2)
	  addi      r6, r31, 0x6C
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0xC4A94
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0xFC(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, 0x100(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, 0x10C(r2)
	  addi      r6, r31, 0x7C
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0xC4A58
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x110(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f1, 0x100(r2)
	  addi      r3, r30, 0xD4
	  stfs      f0, 0xC4(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, 0x114(r2)
	  addi      r6, r31, 0x88
	  stfs      f1, 0xCC(r30)
	  stfs      f0, 0xD0(r30)
	  bl        0xC4A1C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x110(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, 0x100(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, 0x118(r2)
	  addi      r6, r31, 0x9C
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0xC49E0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x110(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, 0x100(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3134
	  lfs       f0, 0x118(r2)
	  addi      r6, r31, 0xAC
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0xC49A4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0xF8(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, 0x100(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3135
	  lfs       f0, 0x11C(r2)
	  addi      r6, r31, 0xB8
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0xC4968
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x120(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, 0x100(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, 0x124(r2)
	  addi      r6, r31, 0xC4
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0xC492C
	  lis       r3, 0x804B
	  li        r5, 0x5
	  subi      r0, r3, 0x5370
	  li        r4, 0x1
	  stw       r0, 0x174(r30)
	  li        r0, 0x14
	  mr        r3, r30
	  stw       r5, 0x18C(r30)
	  stw       r4, 0x194(r30)
	  stw       r0, 0x198(r30)
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
 * Address:	8034ED70
 * Size:	000020
 */
void Game::PanModoki::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x21F9B4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034ED90
 * Size:	000050
 */
void Game::OoPanModoki::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x220110
	  lis       r3, 0x804E
	  lis       r4, 0x8049
	  subi      r5, r3, 0x3A58
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0xEE0
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
 * Address:	8034EDE0
 * Size:	000048
 */
void Game::OoPanModoki::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x9A0
	  bl        -0x32AF54
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        -0x3AC
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x21F574
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034EE28
 * Size:	000020
 */
void Game::OoPanModoki::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x21FA6C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034EE48
 * Size:	00002C
 */
void Game::OoPanModoki::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x24
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x30
	  bl        -0x2DF5CC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034EE74
 * Size:	000068
 */
void Game::OoPanModoki::Mgr::loadModelData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x21ED7C
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
 * Address:	8034EEDC
 * Size:	0000B0
 */
void Game::OoPanModoki::Mgr::__dt(void)
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
	  lis       r3, 0x804E
	  subi      r3, r3, 0x3A58
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
	  bl        0xC262C

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x32AEB8

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
 * Address:	8034EF8C
 * Size:	000008
 */
u32 Game::OoPanModoki::Mgr::getEnemyTypeID(void) { return 0x28; }

/*
 * --INFO--
 * Address:	8034EF94
 * Size:	000060
 */
void Game::OoPanModoki::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x3D8
	  addi      r3, r3, 0x10
	  bl        -0x32B00C
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  addi      r4, r4, 0x3B48
	  mr        r7, r31
	  subi      r5, r5, 0x100C
	  li        r6, 0x3D8
	  bl        -0x28D5E4
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
 * Address:	8034EFF4
 * Size:	0000EC
 */
void Game::OoPanModoki::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x3C8
	  subi      r4, r3, 0x353C
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x310
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  subi      r4, r3, 0x31F0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x310
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
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
	  bl        0xC24D8

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x32B00C

	.loc_0xD0:
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
 * Address:	8034F0E0
 * Size:	000010
 */
void Game::OoPanModoki::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x3D8
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F0F0
 * Size:	0000B0
 */
void Game::PanModoki::Mgr::__dt(void)
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
	  lis       r3, 0x804E
	  subi      r3, r3, 0x3978
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
	  bl        0xC2418

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x32B0CC

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
 * Address:	8034F1A0
 * Size:	000008
 */
u32 Game::PanModoki::Mgr::getEnemyTypeID(void) { return 0x26; }

/*
 * --INFO--
 * Address:	8034F1A8
 * Size:	000060
 */
void Game::PanModoki::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x3D8
	  addi      r3, r3, 0x10
	  bl        -0x32B220
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  subi      r4, r4, 0xD0C
	  mr        r7, r31
	  subi      r5, r5, 0xDF8
	  li        r6, 0x3D8
	  bl        -0x28D7F8
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
 * Address:	8034F208
 * Size:	0000EC
 */
void Game::PanModoki::Obj::__dt(void)
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
	  beq-      .loc_0xD0
	  lis       r3, 0x804E
	  addi      r5, r30, 0x3C8
	  subi      r4, r3, 0x3898
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x310
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
	  lis       r3, 0x804E
	  subi      r4, r3, 0x31F0
	  stw       r4, 0x0(r30)
	  addi      r3, r4, 0x1B0
	  addi      r0, r4, 0x310
	  stw       r3, 0x178(r30)
	  lwz       r3, 0x17C(r30)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x17C(r30)
	  sub       r0, r5, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0xC0
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
	  bl        0xC22C4

	.loc_0xC0:
	  extsh.    r0, r31
	  ble-      .loc_0xD0
	  mr        r3, r30
	  bl        -0x32B220

	.loc_0xD0:
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
 * Address:	8034F2F4
 * Size:	000090
 */
void Game::PanModoki::Obj::__ct(void)
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
	  addi      r0, r31, 0x3C8
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x3C8(r31)
	  stw       r0, 0x3CC(r31)
	  stw       r0, 0x3D0(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x67C
	  lis       r3, 0x804E
	  addi      r0, r31, 0x3C8
	  subi      r5, r3, 0x3898
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x310
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F384
 * Size:	0000BC
 */
void Game::PanModokiBase::Obj::__dt(void)
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
	  lis       r3, 0x804E
	  addi      r0, r31, 0x3C8
	  subi      r4, r3, 0x31F0
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x310
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
	  bl        0xC2178

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x32B36C

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
 * Address:	8034F440
 * Size:	000010
 */
void Game::PanModoki::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x3D8
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F450
 * Size:	000018
 */
void Game::PanModoki::Obj::canTarget((int, int))
{
	/*
	.loc_0x0:
	  xor       r0, r5, r4
	  srawi     r3, r0, 0x1
	  and       r0, r0, r5
	  sub       r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F468
 * Size:	000008
 */
void Game::PanModoki::Obj::getDownSmokeScale(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x128(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F470
 * Size:	000008
 */
u32 Game::PanModoki::Obj::getEnemyTypeID(void) { return 0x26; }

/*
 * --INFO--
 * Address:	8034F478
 * Size:	000004
 */
void Game::PanModokiBase::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
}

/*
 * --INFO--
 * Address:	8034F47C
 * Size:	000004
 */
void applyImpulse__Q34Game13PanModokiBase3ObjFR10Vector3<float>
R10Vector3<float>(void)
{
}

/*
 * --INFO--
 * Address:	8034F480
 * Size:	00000C
 */
void Game::PanModokiBase::Obj::isLivingThing(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r3,r0,23,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F48C
 * Size:	000014
 */
void Game::PanModokiBase::Obj::isUnderground(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,22,22
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F4A0
 * Size:	000014
 */
void Game::PanModokiBase::Obj::ignoreAtari((Game::Creature*))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x230(r3)
	  sub       r0, r0, r4
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F4B4
 * Size:	000008
 */
void Game::PanModokiBase::Obj::getMouthSlots(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x2CC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034F4BC
 * Size:	00004C
 */
void Game::PanModokiBase::Obj::setFSM((Game::PanModokiBase::FSM*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x380(r3)
	  mr        r4, r31
	  lwz       r3, 0x380(r3)
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
 * Address:	8034F508
 * Size:	000050
 */
void Game::PanModokiBase::Parms::read((Stream&))
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
	  bl        0xC42D0
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0xC42C4
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0xC42B8
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
 * Address:	8034F558
 * Size:	000014
 */
void @968 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3C8
	  b         -0x248C4C
	*/
}

/*
 * --INFO--
 * Address:	8034F56C
 * Size:	000014
 */
void @968 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3C8
	  b         -0x248ED4
	*/
}

/*
 * --INFO--
 * Address:	8034F580
 * Size:	000014
 */
void @968 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3C8
	  b         -0x248EC8
	*/
}

/*
 * --INFO--
 * Address:	8034F594
 * Size:	000014
 */
void @968 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3C8
	  b         -0x248B2C
	*/
}

/*
 * --INFO--
 * Address:	8034F5A8
 * Size:	000014
 */
void @968 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3C8
	  b         -0x248B6C
	*/
}

/*
 * --INFO--
 * Address:	8034F5BC
 * Size:	000014
 */
void @968 @12 @Game::EnemyBase::viewGetShape(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x3C8
	  b         -0x248F2C
	*/
}

/*
 * --INFO--
 * Address:	8034F5D0
 * Size:	000008
 */
void @4 @Game::PanModoki::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x4E4
	*/
}

/*
 * --INFO--
 * Address:	8034F5D8
 * Size:	000008
 */
void @4 @Game::OoPanModoki::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x700
	*/
}
