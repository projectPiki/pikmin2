#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80349DD8
 * Size:	000050
 */
Bomb::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x21B158
	  lis       r3, 0x804E
	  lis       r4, 0x8049
	  subi      r5, r3, 0x4588
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0x4E8
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
 * Address:	80349E28
 * Size:	000048
 */
void Bomb::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x8A8
	  bl        -0x325F9C
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x21A5BC
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
 * Address:	80349E70
 * Size:	000150
 */
Bomb::Parms::Parms(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x4E8
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x2406F4
	  lis       r3, 0x804E
	  lis       r5, 0x6670
	  subi      r0, r3, 0x44A8
	  addi      r4, r30, 0x8A4
	  stw       r0, 0xD8(r30)
	  li        r7, 0
	  addi      r0, r31, 0x10
	  addi      r3, r30, 0x804
	  stw       r4, 0x7F8(r30)
	  addi      r4, r30, 0x7F8
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x20
	  stw       r7, 0x7FC(r30)
	  stw       r0, 0x800(r30)
	  bl        0xC978C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x40(r2)
	  stw       r0, 0x804(r30)
	  addi      r3, r30, 0x82C
	  lfs       f1, -0x3C(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x81C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x38(r2)
	  addi      r6, r31, 0x30
	  stfs      f1, 0x824(r30)
	  stfs      f0, 0x828(r30)
	  bl        0xC9750
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x34(r2)
	  stw       r0, 0x82C(r30)
	  addi      r3, r30, 0x854
	  lfs       f0, -0x3C(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f1, 0x844(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x40
	  stfs      f0, 0x84C(r30)
	  stfs      f1, 0x850(r30)
	  bl        0xC9718
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5370
	  li        r4, 0x2
	  stw       r0, 0x854(r30)
	  li        r7, 0x1
	  li        r0, 0xA
	  addi      r3, r30, 0x87C
	  stw       r4, 0x86C(r30)
	  addi      r4, r30, 0x7F8
	  addi      r5, r5, 0x3032
	  addi      r6, r31, 0x54
	  stw       r7, 0x874(r30)
	  stw       r0, 0x878(r30)
	  bl        0xC96DC
	  lis       r3, 0x804B
	  li        r5, 0x32
	  subi      r0, r3, 0x5370
	  li        r4, 0
	  stw       r0, 0x87C(r30)
	  li        r0, 0x64
	  mr        r3, r30
	  stw       r5, 0x894(r30)
	  stw       r4, 0x89C(r30)
	  stw       r0, 0x8A0(r30)
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
 * Address:	80349FC0
 * Size:	000020
 */
void Bomb::Mgr::birth(Game::EnemyBirthArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x21AC04
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80349FE0
 * Size:	0000B0
 */
Bomb::Mgr::~Mgr(void)
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
	  subi      r3, r3, 0x4588
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
	  bl        0xC7528

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x325FBC

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
 * Address:	8034A090
 * Size:	000008
 */
u32 Bomb::Mgr::getEnemyTypeID(void) { return 0x24; }

/*
 * --INFO--
 * Address:	8034A098
 * Size:	000060
 */
void Bomb::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x2E8
	  addi      r3, r3, 0x10
	  bl        -0x326110
	  lis       r4, 0x8035
	  lis       r5, 0x8035
	  subi      r4, r4, 0x5B08
	  mr        r7, r31
	  subi      r5, r5, 0x5F08
	  li        r6, 0x2E8
	  bl        -0x2886E8
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
 * Address:	8034A0F8
 * Size:	0000BC
 */
Bomb::Obj::~Obj(void)
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
	  addi      r0, r31, 0x2D8
	  subi      r4, r3, 0x444C
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
	  bl        0xC7404

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x3260E0

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
 * Address:	8034A1B4
 * Size:	000010
 */
void Bomb::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2E8
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034A1C4
 * Size:	000050
 */
void Bomb::Parms::read(Stream&)
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
	  bl        0xC9614
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0xC9608
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0xC95FC
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
 * Address:	8034A214
 * Size:	000008
 */
@4 @Game::Bomb::Mgr::~Mgr(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x238
	*/
}
} // namespace Game
