#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	80269448
 * Size:	000050
 */
Tobi::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x13A7C8
	  lis       r3, 0x804C
	  lis       r4, 0x8048
	  addi      r5, r3, 0x4DF4
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0x5B5C
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
 * Address:	80269498
 * Size:	000048
 */
void Tobi::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x8D0
	  bl        -0x24560C
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x139C2C
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
 * Address:	802694E0
 * Size:	000190
 */
Tobi::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x5B50
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x15FD64
	  lis       r3, 0x804C
	  lis       r5, 0x6670
	  addi      r0, r3, 0x4DE8
	  addi      r4, r30, 0x8CC
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
	  bl        0x1AA11C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3420(r2)
	  stw       r0, 0x804(r30)
	  addi      r3, r30, 0x82C
	  lfs       f1, -0x341C(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x81C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x3418(r2)
	  addi      r6, r31, 0x3C
	  stfs      f1, 0x824(r30)
	  stfs      f0, 0x828(r30)
	  bl        0x1AA0E0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3414(r2)
	  stw       r0, 0x82C(r30)
	  addi      r3, r30, 0x854
	  lfs       f1, -0x341C(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x844(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x3418(r2)
	  addi      r6, r31, 0x48
	  stfs      f1, 0x84C(r30)
	  stfs      f0, 0x850(r30)
	  bl        0x1AA0A4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3410(r2)
	  stw       r0, 0x854(r30)
	  addi      r3, r30, 0x87C
	  lfs       f1, -0x341C(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x86C(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x340C(r2)
	  addi      r6, r31, 0x58
	  stfs      f1, 0x874(r30)
	  stfs      f0, 0x878(r30)
	  bl        0x1AA068
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x340C(r2)
	  stw       r0, 0x87C(r30)
	  addi      r3, r30, 0x8A4
	  lfs       f1, -0x341C(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x894(r30)
	  addi      r5, r5, 0x3132
	  lfs       f0, -0x3408(r2)
	  addi      r6, r31, 0x64
	  stfs      f1, 0x89C(r30)
	  stfs      f0, 0x8A0(r30)
	  bl        0x1AA02C
	  lis       r3, 0x804B
	  lfs       f2, -0x3404(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x341C(r2)
	  stw       r0, 0x8A4(r30)
	  mr        r3, r30
	  lfs       f0, -0x3400(r2)
	  stfs      f2, 0x8BC(r30)
	  stfs      f1, 0x8C4(r30)
	  stfs      f0, 0x8C8(r30)
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
 * Address:	80269670
 * Size:	000060
 */
void Tobi::Mgr::createObj(int)
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
	  bl        -0x2456E8
	  lis       r4, 0x8027
	  lis       r5, 0x8027
	  subi      r4, r4, 0x6754
	  mr        r7, r31
	  subi      r5, r5, 0x6930
	  li        r6, 0x2F8
	  bl        -0x1A7CC0
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
 * Address:	802696D0
 * Size:	0000BC
 */
Tobi::Obj::~Obj()
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
	  lis       r3, 0x804C
	  addi      r0, r31, 0x2E8
	  addi      r4, r3, 0x4ED8
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
	  bl        0x1A7E2C

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x2456B8

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
 * Address:	8026978C
 * Size:	000010
 */
void Tobi::Mgr::getEnemy(int)
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
 * Address:	8026979C
 * Size:	000050
 */
void Tobi::Parms::read(Stream&)
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
	  bl        0x1AA03C
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x1AA030
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x1AA024
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
 * Address:	802697EC
 * Size:	0000B0
 */
Tobi::Mgr::~Mgr()
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
	  lis       r3, 0x804C
	  addi      r3, r3, 0x4DF4
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
	  bl        0x1A7D1C

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x2457C8

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
 * Address:	8026989C
 * Size:	000008
 */
u32 Tobi::Mgr::getEnemyTypeID() { return 0xE; }

/*
 * --INFO--
 * Address:	802698A4
 * Size:	000008
 */
Tobi::Mgr::@4 @~Mgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xBC
	*/
}
} // namespace Game
