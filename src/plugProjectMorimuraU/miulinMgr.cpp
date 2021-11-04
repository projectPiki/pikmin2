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
 * Address:	80363F58
 * Size:	000050
 */
void Game::Miulin::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2352D8
	  lis       r3, 0x804E
	  lis       r4, 0x8049
	  addi      r5, r3, 0x24D8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0x16BC
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
 * Address:	80363FA8
 * Size:	000048
 */
void Game::Miulin::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x920
	  bl        -0x34011C
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x23473C
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
 * Address:	80363FF0
 * Size:	000208
 */
void Game::Miulin::Parms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x16B0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x25A874
	  lis       r3, 0x804E
	  lis       r5, 0x6970
	  addi      r0, r3, 0x25B8
	  addi      r4, r30, 0x91C
	  stw       r0, 0xD8(r30)
	  li        r7, 0
	  addi      r0, r31, 0x20
	  addi      r3, r30, 0x804
	  stw       r4, 0x7F8(r30)
	  addi      r4, r30, 0x7F8
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x30
	  stw       r7, 0x7FC(r30)
	  stw       r0, 0x800(r30)
	  bl        0xAF60C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5370
	  li        r4, 0x64
	  stw       r0, 0x804(r30)
	  li        r7, 0
	  li        r0, 0x3E8
	  addi      r3, r30, 0x82C
	  stw       r4, 0x81C(r30)
	  addi      r4, r30, 0x7F8
	  addi      r5, r5, 0x3033
	  addi      r6, r31, 0x44
	  stw       r7, 0x824(r30)
	  stw       r0, 0x828(r30)
	  bl        0xAF5D0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x490(r2)
	  stw       r0, 0x82C(r30)
	  addi      r3, r30, 0x854
	  lfs       f1, 0x494(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x844(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, 0x498(r2)
	  addi      r6, r31, 0x54
	  stfs      f1, 0x84C(r30)
	  stfs      f0, 0x850(r30)
	  bl        0xAF594
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x49C(r2)
	  stw       r0, 0x854(r30)
	  addi      r3, r30, 0x87C
	  lfs       f1, 0x494(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x86C(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, 0x4A0(r2)
	  addi      r6, r31, 0x68
	  stfs      f1, 0x874(r30)
	  stfs      f0, 0x878(r30)
	  bl        0xAF558
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x49C(r2)
	  stw       r0, 0x87C(r30)
	  addi      r3, r30, 0x8A4
	  lfs       f1, 0x494(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x894(r30)
	  addi      r5, r5, 0x3036
	  lfs       f0, 0x4A0(r2)
	  addi      r6, r31, 0x7C
	  stfs      f1, 0x89C(r30)
	  stfs      f0, 0x8A0(r30)
	  bl        0xAF51C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x4A0(r2)
	  stw       r0, 0x8A4(r30)
	  addi      r3, r30, 0x8CC
	  lfs       f1, 0x494(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x8BC(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, 0x498(r2)
	  addi      r6, r31, 0x8C
	  stfs      f1, 0x8C4(r30)
	  stfs      f0, 0x8C8(r30)
	  bl        0xAF4E0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, 0x4A4(r2)
	  stw       r0, 0x8CC(r30)
	  addi      r3, r30, 0x8F4
	  lfs       f1, 0x494(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x8E4(r30)
	  addi      r5, r5, 0x3038
	  lfs       f0, 0x498(r2)
	  addi      r6, r31, 0xA0
	  stfs      f1, 0x8EC(r30)
	  stfs      f0, 0x8F0(r30)
	  bl        0xAF4A4
	  lis       r3, 0x804B
	  lfs       f2, 0x4A8(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, 0x494(r2)
	  stw       r0, 0x8F4(r30)
	  mr        r3, r30
	  lfs       f0, 0x4AC(r2)
	  stfs      f2, 0x90C(r30)
	  stfs      f1, 0x914(r30)
	  stfs      f0, 0x918(r30)
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
 * Address:	803641F8
 * Size:	000020
 */
void Game::Miulin::Mgr::birth((Game::EnemyBirthArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x234E3C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80364218
 * Size:	0000B0
 */
void Game::Miulin::Mgr::__dt(void)
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
	  addi      r3, r3, 0x24D8
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
	  bl        0xAD2F0

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x3401F4

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
 * Address:	803642C8
 * Size:	000008
 */
u32 Game::Miulin::Mgr::getEnemyTypeID(void) { return 0x36; }

/*
 * --INFO--
 * Address:	803642D0
 * Size:	000060
 */
void Game::Miulin::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x308
	  addi      r3, r3, 0x10
	  bl        -0x340348
	  lis       r4, 0x8036
	  lis       r5, 0x8036
	  addi      r4, r4, 0x45D8
	  mr        r7, r31
	  addi      r5, r5, 0x4330
	  li        r6, 0x308
	  bl        -0x2A2920
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
 * Address:	80364330
 * Size:	0000BC
 */
void Game::Miulin::Obj::__dt(void)
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
	  addi      r0, r31, 0x2F8
	  addi      r4, r3, 0x25DC
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
	  bl        0xAD1CC

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x340318

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
 * Address:	803643EC
 * Size:	000010
 */
void Game::Miulin::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x308
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803643FC
 * Size:	000050
 */
void Game::Miulin::Parms::read((Stream&))
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
	  bl        0xAF3DC
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0xAF3D0
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0xAF3C4
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
 * Address:	8036444C
 * Size:	000008
 */
void @4 @Game::Miulin::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x238
	*/
}
