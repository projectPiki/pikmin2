#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802BEDE0
 * Size:	000050
 */
Houdai::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x190160
	  lis       r3, 0x804D
	  lis       r4, 0x8049
	  addi      r5, r3, 0xDA8
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x5350
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
 * Address:	802BEE30
 * Size:	000048
 */
void Houdai::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x9C0
	  bl        -0x29AFA4
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x18F5C4
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
 * Address:	802BEE78
 * Size:	000048
 */
Houdai::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1B56F0
	  lis       r4, 0x804D
	  addi      r3, r31, 0x7F8
	  addi      r0, r4, 0xE88
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
 * Address:	802BEEC0
 * Size:	0002EC
 */
Houdai::Parms::ProperParms::ProperParms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x53A8
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x1C4
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6670
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x6C
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x7C
	  bl        0x154744
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1EE8(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1EE4(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x1EE0(r2)
	  addi      r6, r31, 0x88
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x154708
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1EDC(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x1ED8(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x1EE8(r2)
	  addi      r6, r31, 0x98
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x1546CC
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1ED4(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1ED8(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x1EE8(r2)
	  addi      r6, r31, 0xA8
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x154690
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1ED0(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x1ECC(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, -0x1EE0(r2)
	  addi      r6, r31, 0xB8
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x154654
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x1EE0(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f0, -0x1ECC(r2)
	  addi      r3, r30, 0xD4
	  stfs      f1, 0xC4(r30)
	  addi      r5, r5, 0x3036
	  addi      r6, r31, 0xC8
	  stfs      f0, 0xCC(r30)
	  stfs      f1, 0xD0(r30)
	  bl        0x15461C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1EC8(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x1EE4(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x1EC4(r2)
	  addi      r6, r31, 0xD8
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x1545E0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1EC0(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1EE4(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x1EE0(r2)
	  addi      r6, r31, 0xE4
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x1545A4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1EBC(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, -0x1EE4(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3132
	  lfs       f0, -0x1EE0(r2)
	  addi      r6, r31, 0xF0
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x154568
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1EBC(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1EE4(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, -0x1EE0(r2)
	  addi      r6, r31, 0xFC
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x15452C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1ED4(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, -0x1EE4(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x3230
	  lfs       f0, -0x1EE0(r2)
	  addi      r6, r31, 0x108
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x1544F0
	  lis       r3, 0x804B
	  lfs       f2, -0x1EB8(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x1EE4(r2)
	  stw       r0, 0x19C(r30)
	  mr        r3, r30
	  lfs       f0, -0x1EB4(r2)
	  stfs      f2, 0x1B4(r30)
	  stfs      f1, 0x1BC(r30)
	  stfs      f0, 0x1C0(r30)
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
 * Address:	802BF1AC
 * Size:	000060
 */
void Houdai::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x430
	  addi      r3, r3, 0x10
	  bl        -0x29B224
	  lis       r4, 0x802C
	  lis       r5, 0x802C
	  subi      r4, r4, 0x308
	  mr        r7, r31
	  subi      r5, r5, 0xDF4
	  li        r6, 0x430
	  bl        -0x1FD7FC
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
 * Address:	802BF20C
 * Size:	0000BC
 */
Houdai::Obj::~Obj()
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
	  addi      r0, r31, 0x420
	  addi      r4, r3, 0x1160
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
	  bl        0x1522F0

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x29B1F4

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
 * Address:	802BF2C8
 * Size:	000010
 */
void Houdai::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x430
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BF2D8
 * Size:	000068
 */
void Houdai::Mgr::loadModelData()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x18F1E0
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
 * Address:	802BF340
 * Size:	0000B0
 */
Houdai::Mgr::~Mgr()
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
	  addi      r3, r3, 0xDA8
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
	  bl        0x1521C8

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x29B31C

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
 * Address:	802BF3F0
 * Size:	000008
 */
u32 Houdai::Mgr::getEnemyTypeID() { return 0x42; }

/*
 * --INFO--
 * Address:	802BF3F8
 * Size:	00002C
 */
void Houdai::Mgr::doLoadBmd(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2124
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x30
	  bl        -0x24FB7C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BF424
 * Size:	000050
 */
void Houdai::Parms::read(Stream&)
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
	  bl        0x1543B4
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x1543A8
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x15439C
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
 * Address:	802BF474
 * Size:	000008
 */
Houdai::Mgr::@4 @~Mgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x138
	*/
}
} // namespace Game
