#include "types.h"

/*
 * --INFO--
 * Address:	80051EA4
 * Size:	000120
 */
void J2DMaterial::J2DMaterial()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x1198
	  lis       r4, 0x8004
	  li        r6, 0x4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804A
	  subi      r4, r4, 0x646C
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x11A4
	  addi      r3, r31, 0x10
	  li        r7, 0x2
	  stw       r0, 0x24(r31)
	  bl        0x6F954
	  lis       r4, 0x8005
	  addi      r3, r31, 0x1A
	  addi      r4, r4, 0x202C
	  li        r5, 0
	  li        r6, 0x2
	  li        r7, 0x4
	  bl        0x6F938
	  addi      r3, r31, 0x10
	  bl        -0x83EC
	  lis       r3, 0x804A
	  lis       r4, 0x8005
	  addi      r0, r3, 0x1150
	  li        r5, 0
	  stw       r0, 0x6C(r31)
	  addi      r3, r31, 0x2C
	  addi      r4, r4, 0x1FC4
	  li        r6, 0x4
	  li        r7, 0x8
	  bl        0x6F908
	  addi      r3, r31, 0x28
	  bl        -0x827C
	  lhz       r5, -0x7A22(r2)
	  li        r0, 0
	  subi      r4, r2, 0x7A30
	  addi      r3, r31, 0x78
	  sth       r5, 0x78(r31)
	  stb       r0, 0x7A(r31)
	  stb       r0, 0x7B(r31)
	  lbz       r0, -0x7A30(r2)
	  stb       r0, 0x7C(r31)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x7D(r31)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x7E(r31)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x7F(r31)
	  bl        -0x118C
	  li        r5, 0
	  lis       r3, 0x1
	  stw       r5, 0x4(r31)
	  subi      r4, r3, 0x1
	  li        r0, 0x1
	  mr        r3, r31
	  sth       r4, 0xC(r31)
	  stw       r5, 0x70(r31)
	  stw       r5, 0x74(r31)
	  stw       r5, 0x84(r31)
	  stw       r0, 0x8(r31)
	  stb       r0, 0xE(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051FC4
 * Size:	000020
 */
void J2DTexCoord::J2DTexCoord()
{
	/*
	.loc_0x0:
	  lis       r4, 0x8048
	  lbzu      r0, -0x79B8(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80051FE4
 * Size:	000048
 */
void J2DColorBlock::~J2DColorBlock()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x11A4
	  stw       r0, 0x14(r31)
	  ble-      .loc_0x30
	  bl        -0x2DF5C

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005202C
 * Size:	000010
 */
void J2DColorChan::J2DColorChan()
{
	/*
	.loc_0x0:
	  subi      r4, r2, 0x7A28
	  lbz       r0, 0x1(r4)
	  sth       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005203C
 * Size:	00014C
 */
void J2DMaterial::J2DMaterial(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  li        r6, 0x4
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x1198
	  li        r5, 0
	  li        r7, 0x2
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lis       r3, 0x804A
	  stw       r0, 0x0(r30)
	  addi      r0, r3, 0x11A4
	  lis       r3, 0x8004
	  stw       r0, 0x24(r30)
	  subi      r4, r3, 0x646C
	  addi      r3, r30, 0x10
	  bl        0x6F7B4
	  lis       r4, 0x8005
	  addi      r3, r30, 0x1A
	  addi      r4, r4, 0x202C
	  li        r5, 0
	  li        r6, 0x2
	  li        r7, 0x4
	  bl        0x6F798
	  addi      r3, r30, 0x10
	  bl        -0x858C
	  lis       r3, 0x804A
	  lis       r4, 0x8005
	  addi      r0, r3, 0x1150
	  li        r5, 0
	  stw       r0, 0x6C(r30)
	  addi      r3, r30, 0x2C
	  addi      r4, r4, 0x1FC4
	  li        r6, 0x4
	  li        r7, 0x8
	  bl        0x6F768
	  addi      r3, r30, 0x28
	  bl        -0x841C
	  lhz       r5, -0x7A22(r2)
	  li        r0, 0
	  subi      r4, r2, 0x7A30
	  addi      r3, r30, 0x78
	  sth       r5, 0x78(r30)
	  stb       r0, 0x7A(r30)
	  stb       r0, 0x7B(r30)
	  lbz       r0, -0x7A30(r2)
	  stb       r0, 0x7C(r30)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x7D(r30)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x7E(r30)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x7F(r30)
	  bl        -0x132C
	  li        r0, 0
	  lis       r3, 0x1
	  stw       r0, 0x4(r30)
	  subi      r0, r3, 0x1
	  rlwinm    r3,r31,16,27,31
	  li        r4, 0x1
	  sth       r0, 0xC(r30)
	  bl        0x190
	  stw       r3, 0x70(r30)
	  rlwinm    r3,r31,8,31,31
	  li        r4, 0x1
	  bl        0x334
	  stw       r3, 0x74(r30)
	  li        r4, 0
	  li        r0, 0x1
	  mr        r3, r30
	  stw       r4, 0x84(r30)
	  stw       r0, 0x8(r30)
	  stb       r0, 0xE(r30)
	  stb       r0, 0xF(r30)
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
 * Address:	80052188
 * Size:	0000C0
 */
void J2DMaterial::~J2DMaterial()
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
	  beq-      .loc_0xA4
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1198
	  stw       r0, 0x0(r30)
	  lwz       r3, 0x70(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  lwz       r3, 0x74(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6C:
	  lwz       r3, 0x84(r30)
	  bl        -0x2E144
	  addi      r3, r30, 0x28
	  li        r4, -0x1
	  bl        -0x83A0
	  addic.    r0, r30, 0x10
	  beq-      .loc_0x94
	  lis       r3, 0x804A
	  addi      r0, r3, 0x11A4
	  stw       r0, 0x24(r30)

	.loc_0x94:
	  extsh.    r0, r31
	  ble-      .loc_0xA4
	  mr        r3, r30
	  bl        -0x2E174

	.loc_0xA4:
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
 * Address:	80052248
 * Size:	000084
 */
void J2DMaterial::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0xE(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  addi      r3, r31, 0x10
	  bl        -0x86A0
	  addi      r3, r31, 0x28
	  bl        -0x84C4
	  lwz       r3, 0x70(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  lwz       r3, 0x74(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  addi      r3, r31, 0x78
	  bl        -0x1480

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800522CC
 * Size:	0001B4
 */
void J2DMaterial::createTevBlock(int, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0xD4
	  cmpwi     r3, 0x1
	  bgt-      .loc_0x3C
	  li        r3, 0x60
	  bl        -0x2E448
	  mr.       r0, r3
	  beq-      .loc_0x34
	  bl        -0x81E4
	  mr        r0, r3

	.loc_0x34:
	  mr        r3, r0
	  b         .loc_0x1A4

	.loc_0x3C:
	  cmpwi     r3, 0x2
	  bne-      .loc_0x64
	  li        r3, 0x7C
	  bl        -0x2E470
	  mr.       r0, r3
	  beq-      .loc_0x5C
	  bl        -0x72E4
	  mr        r0, r3

	.loc_0x5C:
	  mr        r3, r0
	  b         .loc_0x1A4

	.loc_0x64:
	  cmpwi     r3, 0x4
	  bgt-      .loc_0x8C
	  li        r3, 0xB4
	  bl        -0x2E498
	  mr.       r0, r3
	  beq-      .loc_0x84
	  bl        -0x5F64
	  mr        r0, r3

	.loc_0x84:
	  mr        r3, r0
	  b         .loc_0x1A4

	.loc_0x8C:
	  cmpwi     r3, 0x8
	  bgt-      .loc_0xB4
	  li        r3, 0x124
	  bl        -0x2E4C0
	  mr.       r0, r3
	  beq-      .loc_0xAC
	  bl        -0x4864
	  mr        r0, r3

	.loc_0xAC:
	  mr        r3, r0
	  b         .loc_0x1A4

	.loc_0xB4:
	  li        r3, 0x1B4
	  bl        -0x2E4E0
	  mr.       r0, r3
	  beq-      .loc_0xCC
	  bl        -0x3074
	  mr        r0, r3

	.loc_0xCC:
	  mr        r3, r0
	  b         .loc_0x1A4

	.loc_0xD4:
	  cmpwi     r3, 0x1
	  bgt-      .loc_0x100
	  li        r3, 0x60
	  li        r4, -0x4
	  bl        -0x2E4C0
	  mr.       r0, r3
	  beq-      .loc_0xF8
	  bl        -0x82A8
	  mr        r0, r3

	.loc_0xF8:
	  mr        r3, r0
	  b         .loc_0x1A4

	.loc_0x100:
	  cmpwi     r3, 0x2
	  bne-      .loc_0x12C
	  li        r3, 0x7C
	  li        r4, -0x4
	  bl        -0x2E4EC
	  mr.       r0, r3
	  beq-      .loc_0x124
	  bl        -0x73AC
	  mr        r0, r3

	.loc_0x124:
	  mr        r3, r0
	  b         .loc_0x1A4

	.loc_0x12C:
	  cmpwi     r3, 0x4
	  bgt-      .loc_0x158
	  li        r3, 0xB4
	  li        r4, -0x4
	  bl        -0x2E518
	  mr.       r0, r3
	  beq-      .loc_0x150
	  bl        -0x6030
	  mr        r0, r3

	.loc_0x150:
	  mr        r3, r0
	  b         .loc_0x1A4

	.loc_0x158:
	  cmpwi     r3, 0x8
	  bgt-      .loc_0x184
	  li        r3, 0x124
	  li        r4, -0x4
	  bl        -0x2E544
	  mr.       r0, r3
	  beq-      .loc_0x17C
	  bl        -0x4934
	  mr        r0, r3

	.loc_0x17C:
	  mr        r3, r0
	  b         .loc_0x1A4

	.loc_0x184:
	  li        r3, 0x1B4
	  li        r4, -0x4
	  bl        -0x2E568
	  mr.       r0, r3
	  beq-      .loc_0x1A0
	  bl        -0x3148
	  mr        r0, r3

	.loc_0x1A0:
	  mr        r3, r0

	.loc_0x1A4:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80052480
 * Size:	0001D8
 */
void J2DMaterial::createIndBlock(int, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  stw       r31, 0xC(r1)
	  beq-      .loc_0xEC
	  cmpwi     r3, 0
	  beq-      .loc_0xC0
	  li        r3, 0x6C
	  bl        -0x2E600
	  mr.       r31, r3
	  beq-      .loc_0xB8
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0xCB0
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0xC78
	  lis       r4, 0x8005
	  addi      r3, r31, 0x5
	  stw       r0, 0x0(r31)
	  addi      r4, r4, 0x26B0
	  li        r6, 0x2
	  li        r7, 0x4
	  bl        0x6F35C
	  lis       r3, 0x8005
	  lis       r5, 0x8005
	  addi      r4, r3, 0x2670
	  li        r6, 0x1C
	  addi      r3, r31, 0x10
	  addi      r5, r5, 0x1004
	  li        r7, 0x3
	  bl        0x6F33C
	  lis       r3, 0x8005
	  lis       r5, 0x8005
	  addi      r4, r3, 0x2658
	  li        r6, 0x2
	  addi      r3, r31, 0x64
	  addi      r5, r5, 0x1040
	  li        r7, 0x4
	  bl        0x6F31C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB8:
	  mr        r3, r31
	  b         .loc_0x1C4

	.loc_0xC0:
	  li        r3, 0x4
	  bl        -0x2E6A0
	  cmplwi    r3, 0
	  beq-      .loc_0x1C4
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0xCB0
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1160
	  stw       r0, 0x0(r3)
	  b         .loc_0x1C4

	.loc_0xEC:
	  cmpwi     r3, 0
	  beq-      .loc_0x198
	  li        r3, 0x6C
	  li        r4, -0x4
	  bl        -0x2E68C
	  mr.       r31, r3
	  beq-      .loc_0x190
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0xCB0
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0xC78
	  lis       r4, 0x8005
	  addi      r3, r31, 0x5
	  stw       r0, 0x0(r31)
	  addi      r4, r4, 0x26B0
	  li        r6, 0x2
	  li        r7, 0x4
	  bl        0x6F284
	  lis       r3, 0x8005
	  lis       r5, 0x8005
	  addi      r4, r3, 0x2670
	  li        r6, 0x1C
	  addi      r3, r31, 0x10
	  addi      r5, r5, 0x1004
	  li        r7, 0x3
	  bl        0x6F264
	  lis       r3, 0x8005
	  lis       r5, 0x8005
	  addi      r4, r3, 0x2658
	  li        r6, 0x2
	  addi      r3, r31, 0x64
	  addi      r5, r5, 0x1040
	  li        r7, 0x4
	  bl        0x6F244
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x190:
	  mr        r3, r31
	  b         .loc_0x1C4

	.loc_0x198:
	  li        r3, 0x4
	  li        r4, -0x4
	  bl        -0x2E730
	  cmplwi    r3, 0
	  beq-      .loc_0x1C4
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0xCB0
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1160
	  stw       r0, 0x0(r3)

	.loc_0x1C4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80052658
 * Size:	000018
 */
void J2DIndTexCoordScale::J2DIndTexCoordScale()
{
	/*
	.loc_0x0:
	  lbz       r0, -0x7A40(r2)
	  subi      r4, r2, 0x7A40
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80052670
 * Size:	000040
 */
void J2DIndTexMtx::J2DIndTexMtx()
{
	/*
	.loc_0x0:
	  lis       r4, 0x8048
	  lfsu      f0, -0x7974(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0x14(r3)
	  lbz       r0, 0x18(r4)
	  stb       r0, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800526B0
 * Size:	000018
 */
void J2DIndTexOrder::J2DIndTexOrder()
{
	/*
	.loc_0x0:
	  lbz       r0, -0x7A4C(r2)
	  subi      r4, r2, 0x7A4C
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800526C8
 * Size:	0000C8
 */
void J2DMaterial::makeAnmPointer()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x84(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xB4
	  li        r3, 0x44
	  bl        -0x2E848
	  cmplwi    r3, 0
	  beq-      .loc_0xB0
	  li        r5, 0
	  lis       r4, 0x1
	  stw       r5, 0x0(r3)
	  subi      r0, r4, 0x1
	  sth       r0, 0x10(r3)
	  stw       r5, 0x4(r3)
	  sth       r0, 0x12(r3)
	  sth       r0, 0x14(r3)
	  sth       r0, 0x16(r3)
	  sth       r0, 0x18(r3)
	  sth       r0, 0x1A(r3)
	  sth       r0, 0x1C(r3)
	  sth       r0, 0x1E(r3)
	  sth       r0, 0x20(r3)
	  stw       r5, 0x8(r3)
	  sth       r0, 0x22(r3)
	  sth       r0, 0x24(r3)
	  sth       r0, 0x26(r3)
	  sth       r0, 0x28(r3)
	  sth       r0, 0x2A(r3)
	  sth       r0, 0x2C(r3)
	  sth       r0, 0x2E(r3)
	  sth       r0, 0x30(r3)
	  stw       r5, 0xC(r3)
	  sth       r0, 0x32(r3)
	  sth       r0, 0x34(r3)
	  sth       r0, 0x36(r3)
	  sth       r0, 0x38(r3)
	  sth       r0, 0x3A(r3)
	  sth       r0, 0x3C(r3)
	  sth       r0, 0x3E(r3)
	  sth       r0, 0x40(r3)

	.loc_0xB0:
	  stw       r3, 0x84(r31)

	.loc_0xB4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80052790
 * Size:	000144
 */
void J2DMaterial::setAnimation(J2DAnmColor*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x2C
	  lwz       r0, 0x84(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x12C

	.loc_0x2C:
	  lwz       r0, 0x84(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xCC
	  li        r3, 0x44
	  bl        -0x2E928
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  li        r5, 0
	  lis       r4, 0x1
	  stw       r5, 0x0(r3)
	  subi      r0, r4, 0x1
	  sth       r0, 0x10(r3)
	  stw       r5, 0x4(r3)
	  sth       r0, 0x12(r3)
	  sth       r0, 0x14(r3)
	  sth       r0, 0x16(r3)
	  sth       r0, 0x18(r3)
	  sth       r0, 0x1A(r3)
	  sth       r0, 0x1C(r3)
	  sth       r0, 0x1E(r3)
	  sth       r0, 0x20(r3)
	  stw       r5, 0x8(r3)
	  sth       r0, 0x22(r3)
	  sth       r0, 0x24(r3)
	  sth       r0, 0x26(r3)
	  sth       r0, 0x28(r3)
	  sth       r0, 0x2A(r3)
	  sth       r0, 0x2C(r3)
	  sth       r0, 0x2E(r3)
	  sth       r0, 0x30(r3)
	  stw       r5, 0xC(r3)
	  sth       r0, 0x32(r3)
	  sth       r0, 0x34(r3)
	  sth       r0, 0x36(r3)
	  sth       r0, 0x38(r3)
	  sth       r0, 0x3A(r3)
	  sth       r0, 0x3C(r3)
	  sth       r0, 0x3E(r3)
	  sth       r0, 0x40(r3)

	.loc_0xC8:
	  stw       r3, 0x84(r30)

	.loc_0xCC:
	  lwz       r4, 0x84(r30)
	  lis       r3, 0x1
	  cmplwi    r31, 0
	  stw       r31, 0x0(r4)
	  subi      r0, r3, 0x1
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x10(r3)
	  beq-      .loc_0x12C
	  lhz       r4, 0x18(r31)
	  li        r6, 0
	  lhz       r5, 0xC(r30)
	  b         .loc_0x120

	.loc_0xFC:
	  lwz       r3, 0x1C(r31)
	  rlwinm    r0,r6,1,15,30
	  lhzx      r0, r3, r0
	  cmplw     r5, r0
	  bne-      .loc_0x11C
	  lwz       r3, 0x84(r30)
	  sth       r6, 0x10(r3)
	  b         .loc_0x12C

	.loc_0x11C:
	  addi      r6, r6, 0x1

	.loc_0x120:
	  rlwinm    r0,r6,0,16,31
	  cmplw     r0, r4
	  blt+      .loc_0xFC

	.loc_0x12C:
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
 * Address:	800528D4
 * Size:	0001A4
 */
void J2DMaterial::setAnimation(J2DAnmTextureSRTKey*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x2C
	  lwz       r0, 0x84(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x18C

	.loc_0x2C:
	  lwz       r0, 0x84(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xCC
	  li        r3, 0x44
	  bl        -0x2EA6C
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  li        r5, 0
	  lis       r4, 0x1
	  stw       r5, 0x0(r3)
	  subi      r0, r4, 0x1
	  sth       r0, 0x10(r3)
	  stw       r5, 0x4(r3)
	  sth       r0, 0x12(r3)
	  sth       r0, 0x14(r3)
	  sth       r0, 0x16(r3)
	  sth       r0, 0x18(r3)
	  sth       r0, 0x1A(r3)
	  sth       r0, 0x1C(r3)
	  sth       r0, 0x1E(r3)
	  sth       r0, 0x20(r3)
	  stw       r5, 0x8(r3)
	  sth       r0, 0x22(r3)
	  sth       r0, 0x24(r3)
	  sth       r0, 0x26(r3)
	  sth       r0, 0x28(r3)
	  sth       r0, 0x2A(r3)
	  sth       r0, 0x2C(r3)
	  sth       r0, 0x2E(r3)
	  sth       r0, 0x30(r3)
	  stw       r5, 0xC(r3)
	  sth       r0, 0x32(r3)
	  sth       r0, 0x34(r3)
	  sth       r0, 0x36(r3)
	  sth       r0, 0x38(r3)
	  sth       r0, 0x3A(r3)
	  sth       r0, 0x3C(r3)
	  sth       r0, 0x3E(r3)
	  sth       r0, 0x40(r3)

	.loc_0xC8:
	  stw       r3, 0x84(r30)

	.loc_0xCC:
	  lwz       r4, 0x84(r30)
	  lis       r3, 0x1
	  subi      r0, r3, 0x1
	  cmplwi    r31, 0
	  stw       r31, 0x4(r4)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x12(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x14(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x16(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x18(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x1A(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x1C(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x1E(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x20(r3)
	  beq-      .loc_0x18C
	  lis       r3, 0x5555
	  lhz       r0, 0x14(r31)
	  addi      r3, r3, 0x5556
	  lhz       r6, 0xC(r30)
	  mulhw     r3, r3, r0
	  li        r8, 0
	  rlwinm    r0,r3,1,31,31
	  add       r0, r3, r0
	  rlwinm    r5,r0,0,16,31
	  b         .loc_0x180

	.loc_0x14C:
	  lwz       r3, 0x34(r31)
	  rlwinm    r0,r8,1,15,30
	  rlwinm    r7,r8,0,16,31
	  lhzx      r0, r3, r0
	  cmplw     r6, r0
	  bne-      .loc_0x17C
	  lwz       r3, 0x30(r31)
	  lwz       r4, 0x84(r30)
	  lbzx      r0, r3, r7
	  rlwinm    r3,r0,1,0,30
	  addi      r0, r3, 0x12
	  sthx      r8, r4, r0

	.loc_0x17C:
	  addi      r8, r8, 0x1

	.loc_0x180:
	  rlwinm    r0,r8,0,16,31
	  cmplw     r0, r5
	  blt+      .loc_0x14C

	.loc_0x18C:
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
 * Address:	80052A78
 * Size:	000194
 */
void J2DMaterial::setAnimation(J2DAnmTexPattern*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x2C
	  lwz       r0, 0x84(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x17C

	.loc_0x2C:
	  lwz       r0, 0x84(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xCC
	  li        r3, 0x44
	  bl        -0x2EC10
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  li        r5, 0
	  lis       r4, 0x1
	  stw       r5, 0x0(r3)
	  subi      r0, r4, 0x1
	  sth       r0, 0x10(r3)
	  stw       r5, 0x4(r3)
	  sth       r0, 0x12(r3)
	  sth       r0, 0x14(r3)
	  sth       r0, 0x16(r3)
	  sth       r0, 0x18(r3)
	  sth       r0, 0x1A(r3)
	  sth       r0, 0x1C(r3)
	  sth       r0, 0x1E(r3)
	  sth       r0, 0x20(r3)
	  stw       r5, 0x8(r3)
	  sth       r0, 0x22(r3)
	  sth       r0, 0x24(r3)
	  sth       r0, 0x26(r3)
	  sth       r0, 0x28(r3)
	  sth       r0, 0x2A(r3)
	  sth       r0, 0x2C(r3)
	  sth       r0, 0x2E(r3)
	  sth       r0, 0x30(r3)
	  stw       r5, 0xC(r3)
	  sth       r0, 0x32(r3)
	  sth       r0, 0x34(r3)
	  sth       r0, 0x36(r3)
	  sth       r0, 0x38(r3)
	  sth       r0, 0x3A(r3)
	  sth       r0, 0x3C(r3)
	  sth       r0, 0x3E(r3)
	  sth       r0, 0x40(r3)

	.loc_0xC8:
	  stw       r3, 0x84(r30)

	.loc_0xCC:
	  lwz       r4, 0x84(r30)
	  lis       r3, 0x1
	  subi      r0, r3, 0x1
	  cmplwi    r31, 0
	  stw       r31, 0x8(r4)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x22(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x24(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x26(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x28(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x2A(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x2C(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x2E(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x30(r3)
	  beq-      .loc_0x17C
	  lhz       r5, 0x1A(r31)
	  li        r8, 0
	  lhz       r6, 0xC(r30)
	  lwz       r7, 0x14(r31)
	  b         .loc_0x170

	.loc_0x138:
	  lwz       r3, 0x1C(r31)
	  rlwinm    r0,r8,1,15,30
	  rlwinm    r4,r8,0,16,31
	  lhzx      r0, r3, r0
	  cmplw     r6, r0
	  bne-      .loc_0x16C
	  rlwinm    r3,r4,3,0,28
	  lwz       r4, 0x84(r30)
	  addi      r0, r3, 0x4
	  lbzx      r0, r7, r0
	  rlwinm    r3,r0,1,0,30
	  addi      r0, r3, 0x22
	  sthx      r8, r4, r0

	.loc_0x16C:
	  addi      r8, r8, 0x1

	.loc_0x170:
	  rlwinm    r0,r8,0,16,31
	  cmplw     r0, r5
	  blt+      .loc_0x138

	.loc_0x17C:
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
 * Address:	80052C0C
 * Size:	0001FC
 */
void J2DMaterial::setAnimation(J2DAnmTevRegKey*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x2C
	  lwz       r0, 0x84(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E4

	.loc_0x2C:
	  lwz       r0, 0x84(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xCC
	  li        r3, 0x44
	  bl        -0x2EDA4
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  li        r5, 0
	  lis       r4, 0x1
	  stw       r5, 0x0(r3)
	  subi      r0, r4, 0x1
	  sth       r0, 0x10(r3)
	  stw       r5, 0x4(r3)
	  sth       r0, 0x12(r3)
	  sth       r0, 0x14(r3)
	  sth       r0, 0x16(r3)
	  sth       r0, 0x18(r3)
	  sth       r0, 0x1A(r3)
	  sth       r0, 0x1C(r3)
	  sth       r0, 0x1E(r3)
	  sth       r0, 0x20(r3)
	  stw       r5, 0x8(r3)
	  sth       r0, 0x22(r3)
	  sth       r0, 0x24(r3)
	  sth       r0, 0x26(r3)
	  sth       r0, 0x28(r3)
	  sth       r0, 0x2A(r3)
	  sth       r0, 0x2C(r3)
	  sth       r0, 0x2E(r3)
	  sth       r0, 0x30(r3)
	  stw       r5, 0xC(r3)
	  sth       r0, 0x32(r3)
	  sth       r0, 0x34(r3)
	  sth       r0, 0x36(r3)
	  sth       r0, 0x38(r3)
	  sth       r0, 0x3A(r3)
	  sth       r0, 0x3C(r3)
	  sth       r0, 0x3E(r3)
	  sth       r0, 0x40(r3)

	.loc_0xC8:
	  stw       r3, 0x84(r30)

	.loc_0xCC:
	  lwz       r4, 0x84(r30)
	  lis       r3, 0x1
	  subi      r0, r3, 0x1
	  cmplwi    r31, 0
	  stw       r31, 0xC(r4)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x32(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x34(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x36(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x38(r3)
	  beq-      .loc_0x15C
	  lhz       r6, 0x10(r31)
	  li        r8, 0
	  lhz       r7, 0xC(r30)
	  b         .loc_0x150

	.loc_0x114:
	  lwz       r3, 0x24(r31)
	  rlwinm    r0,r8,1,15,30
	  rlwinm    r4,r8,0,16,31
	  lhzx      r0, r3, r0
	  cmplw     r7, r0
	  bne-      .loc_0x14C
	  mulli     r3, r4, 0x1C
	  lwz       r4, 0x4C(r31)
	  lwz       r5, 0x84(r30)
	  addi      r0, r3, 0x18
	  lbzx      r0, r4, r0
	  rlwinm    r3,r0,1,0,30
	  addi      r0, r3, 0x32
	  sthx      r8, r5, r0

	.loc_0x14C:
	  addi      r8, r8, 0x1

	.loc_0x150:
	  rlwinm    r0,r8,0,16,31
	  cmplw     r0, r6
	  blt+      .loc_0x114

	.loc_0x15C:
	  lis       r4, 0x1
	  lwz       r3, 0x84(r30)
	  subi      r0, r4, 0x1
	  cmplwi    r31, 0
	  sth       r0, 0x3A(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x3C(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x3E(r3)
	  lwz       r3, 0x84(r30)
	  sth       r0, 0x40(r3)
	  beq-      .loc_0x1E4
	  lhz       r6, 0x12(r31)
	  li        r8, 0
	  lhz       r7, 0xC(r30)
	  b         .loc_0x1D8

	.loc_0x19C:
	  lwz       r3, 0x38(r31)
	  rlwinm    r0,r8,1,15,30
	  rlwinm    r4,r8,0,16,31
	  lhzx      r0, r3, r0
	  cmplw     r7, r0
	  bne-      .loc_0x1D4
	  mulli     r3, r4, 0x1C
	  lwz       r4, 0x50(r31)
	  lwz       r5, 0x84(r30)
	  addi      r0, r3, 0x18
	  lbzx      r0, r4, r0
	  rlwinm    r3,r0,1,0,30
	  addi      r0, r3, 0x3A
	  sthx      r8, r5, r0

	.loc_0x1D4:
	  addi      r8, r8, 0x1

	.loc_0x1D8:
	  rlwinm    r0,r8,0,16,31
	  cmplw     r0, r6
	  blt+      .loc_0x19C

	.loc_0x1E4:
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
 * Address:	80052E08
 * Size:	000470
 */
void J2DMaterial::animation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stmw      r26, 0xA8(r1)
	  mr        r28, r3
	  lwz       r4, 0x84(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x434
	  lwz       r3, 0x0(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lhz       r4, 0x10(r4)
	  cmplwi    r4, 0xFFFF
	  beq-      .loc_0xC4
	  lwz       r12, 0x0(r3)
	  addi      r5, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x20(r1)
	  stw       r0, 0xC(r1)
	  lbz       r5, 0xC(r1)
	  lbz       r4, 0xD(r1)
	  lbz       r3, 0xE(r1)
	  lbz       r0, 0xF(r1)
	  stb       r5, 0x14(r1)
	  stb       r4, 0x15(r1)
	  stb       r3, 0x16(r1)
	  stb       r0, 0x17(r1)
	  lwz       r0, 0x14(r1)
	  stw       r0, 0x18(r1)
	  lbz       r3, 0x18(r1)
	  lbz       r0, 0x19(r1)
	  stb       r3, 0x10(r28)
	  lbz       r3, 0x1A(r1)
	  stb       r0, 0x11(r28)
	  lbz       r0, 0x1B(r1)
	  stb       r3, 0x12(r28)
	  stb       r0, 0x13(r28)

	.loc_0xC4:
	  lwz       r3, 0x84(r28)
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x204
	  lis       r3, 0x8048
	  li        r30, 0
	  subi      r31, r3, 0x7998
	  li        r29, 0
	  b         .loc_0x1F8

	.loc_0xE8:
	  rlwinm    r3,r30,1,23,30
	  lwz       r5, 0x84(r28)
	  addi      r0, r3, 0x12
	  rlwinm    r27,r30,0,24,31
	  lhzx      r4, r5, r0
	  cmplwi    r4, 0xFFFF
	  beq-      .loc_0x1F0
	  lwz       r3, 0x4(r5)
	  addi      r5, r1, 0x34
	  lfs       f1, 0x8(r3)
	  bl        0x9464
	  lha       r4, 0x3C(r1)
	  lis       r0, 0x4330
	  lis       r3, 0x8048
	  lfs       f7, 0x4(r31)
	  rlwinm    r4,r4,0,16,31
	  lfs       f6, 0x8(r31)
	  stw       r4, 0xA4(r1)
	  subi      r6, r3, 0x7998
	  lfs       f5, 0xC(r31)
	  mr        r4, r27
	  stw       r0, 0xA0(r1)
	  addi      r3, r28, 0x28
	  lfd       f1, -0x7A90(r2)
	  addi      r5, r1, 0x48
	  lfd       f0, 0xA0(r1)
	  lfs       f2, -0x7A98(r2)
	  fsubs     f1, f0, f1
	  lbz       r6, 0x0(r6)
	  lbz       r0, 0x1(r31)
	  lfs       f0, -0x7A94(r2)
	  fmuls     f1, f2, f1
	  lfs       f4, 0x10(r31)
	  lfs       f3, 0x14(r31)
	  lfs       f2, 0x18(r31)
	  fdivs     f29, f1, f0
	  lfs       f1, 0x1C(r31)
	  lfs       f0, 0x20(r31)
	  stfs      f7, 0x4C(r1)
	  lfs       f31, 0x34(r1)
	  stfs      f6, 0x50(r1)
	  stfs      f5, 0x54(r1)
	  lfs       f30, 0x38(r1)
	  stb       r6, 0x48(r1)
	  lfs       f28, 0x40(r1)
	  stb       r0, 0x49(r1)
	  lfs       f27, 0x44(r1)
	  stfs      f4, 0x58(r1)
	  stfs      f3, 0x5C(r1)
	  stfs      f2, 0x60(r1)
	  stfs      f1, 0x64(r1)
	  stfs      f0, 0x68(r1)
	  bl        -0x8F74
	  stfs      f31, 0x58(r1)
	  mr        r4, r27
	  addi      r3, r28, 0x28
	  addi      r5, r1, 0x48
	  stfs      f30, 0x5C(r1)
	  stfs      f29, 0x60(r1)
	  stfs      f28, 0x64(r1)
	  stfs      f27, 0x68(r1)
	  bl        -0x90F0
	  rlwinm    r0,r27,2,0,29
	  addi      r4, r29, 0x1E
	  add       r3, r28, r0
	  stb       r4, 0x2E(r3)

	.loc_0x1F0:
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x3

	.loc_0x1F8:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0xE8

	.loc_0x204:
	  lwz       r0, 0x70(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x32C
	  lwz       r3, 0x84(r28)
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x32C
	  li        r30, 0
	  b         .loc_0x320

	.loc_0x228:
	  rlwinm    r29,r30,1,23,30
	  lwz       r3, 0x84(r28)
	  addi      r0, r29, 0x22
	  rlwinm    r27,r30,0,24,31
	  lhzx      r0, r3, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x31C
	  lwz       r3, 0x70(r28)
	  mr        r4, r27
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x31C
	  lwz       r3, 0x84(r28)
	  addi      r0, r29, 0x22
	  addi      r5, r1, 0x8
	  lhzx      r26, r3, r0
	  lwz       r3, 0x8(r3)
	  mr        r4, r26
	  bl        0x9864
	  lwz       r3, 0x70(r28)
	  mr        r4, r27
	  lhz       r5, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x84(r28)
	  mr        r4, r26
	  lwz       r3, 0x8(r3)
	  bl        0x98EC
	  lwz       r0, 0x20(r31)
	  mr        r29, r3
	  cmplw     r0, r29
	  beq-      .loc_0x31C
	  lbz       r0, 0x8(r29)
	  li        r5, 0
	  li        r6, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x310
	  lwz       r3, 0x84(r28)
	  mr        r4, r26
	  lwz       r3, 0x8(r3)
	  bl        0x997C
	  lhz       r0, 0x14(r3)
	  mr        r5, r3
	  cmplwi    r0, 0x100
	  ble-      .loc_0x30C
	  rlwinm    r0,r30,30,0,1
	  rlwinm    r3,r27,1,31,31
	  sub       r0, r0, r3
	  rlwinm    r0,r0,2,0,31
	  add       r3, r0, r3
	  addi      r6, r3, 0x10
	  b         .loc_0x310

	.loc_0x30C:
	  mr        r6, r27

	.loc_0x310:
	  mr        r3, r31
	  mr        r4, r29
	  bl        -0x1FEBC

	.loc_0x31C:
	  addi      r30, r30, 0x1

	.loc_0x320:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x228

	.loc_0x32C:
	  lwz       r0, 0x70(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x434
	  lwz       r3, 0x84(r28)
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x434
	  li        r26, 0
	  b         .loc_0x3B8

	.loc_0x350:
	  rlwinm    r3,r26,1,23,30
	  lwz       r5, 0x84(r28)
	  addi      r0, r3, 0x32
	  rlwinm    r27,r26,0,24,31
	  lhzx      r4, r5, r0
	  cmplwi    r4, 0xFFFF
	  beq-      .loc_0x3B4
	  lwz       r3, 0xC(r5)
	  addi      r5, r1, 0x2C
	  bl        0x9A54
	  lha       r7, 0x2C(r1)
	  mr        r4, r27
	  lha       r6, 0x2E(r1)
	  addi      r5, r1, 0x24
	  lha       r3, 0x30(r1)
	  lha       r0, 0x32(r1)
	  sth       r7, 0x24(r1)
	  sth       r6, 0x26(r1)
	  sth       r3, 0x28(r1)
	  sth       r0, 0x2A(r1)
	  lwz       r3, 0x70(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3B4:
	  addi      r26, r26, 0x1

	.loc_0x3B8:
	  rlwinm    r0,r26,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x350
	  li        r26, 0
	  b         .loc_0x428

	.loc_0x3CC:
	  rlwinm    r3,r26,1,23,30
	  lwz       r4, 0x84(r28)
	  addi      r0, r3, 0x3A
	  rlwinm    r27,r26,0,24,31
	  lhzx      r4, r4, r0
	  cmplwi    r4, 0xFFFF
	  beq-      .loc_0x424
	  li        r0, -0x1
	  addi      r5, r1, 0x1C
	  stw       r0, 0x1C(r1)
	  lwz       r3, 0x84(r28)
	  lwz       r3, 0xC(r3)
	  bl        0x9C98
	  lwz       r0, 0x1C(r1)
	  mr        r4, r27
	  addi      r5, r1, 0x10
	  stw       r0, 0x10(r1)
	  lwz       r3, 0x70(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x424:
	  addi      r26, r26, 0x1

	.loc_0x428:
	  rlwinm    r0,r26,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x3CC

	.loc_0x434:
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  lmw       r26, 0xA8(r1)
	  lwz       r0, 0x114(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80053278
 * Size:	000004
 */
void J2DAnmColor::getColor(unsigned short, _GXColor*) const { }

/*
 * --INFO--
 * Address:	8005327C
 * Size:	000004
 */
void J2DIndBlockNull::setGX() { }

/*
 * --INFO--
 * Address:	80053280
 * Size:	00000C
 */
void J2DIndBlockNull::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x4942
	  addi      r3, r3, 0x4C4E
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005328C
 * Size:	00005C
 */
void J2DIndBlockNull::~J2DIndBlockNull()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1160
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0xCB0
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x2F218

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
