#include "types.h"

/*
 * --INFO--
 * Address:	8004791C
 * Size:	00079C
 */
void J2DAnmLoaderDataBase::load(const void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr.       r31, r3
	  stw       r30, 0x58(r1)
	  bne-      .loc_0x24
	  li        r3, 0
	  b         .loc_0x784

	.loc_0x24:
	  lwz       r3, 0x0(r31)
	  subis     r0, r3, 0x4A33
	  cmplwi    r0, 0x4431
	  bne-      .loc_0x780
	  lis       r3, 0x6272
	  lwz       r5, 0x4(r31)
	  addi      r0, r3, 0x6B31
	  cmpw      r5, r0
	  beq-      .loc_0x328
	  bge-      .loc_0xB8
	  lis       r4, 0x626C
	  addi      r0, r4, 0x6B31
	  cmpw      r5, r0
	  beq-      .loc_0x254
	  bge-      .loc_0x94
	  lis       r3, 0x6263
	  addi      r0, r3, 0x6B31
	  cmpw      r5, r0
	  beq-      .loc_0x114
	  bge-      .loc_0x84
	  addi      r0, r3, 0x6131
	  cmpw      r5, r0
	  beq-      .loc_0x490
	  b         .loc_0x778

	.loc_0x84:
	  addi      r0, r4, 0x6131
	  cmpw      r5, r0
	  beq-      .loc_0x6DC
	  b         .loc_0x778

	.loc_0x94:
	  lis       r3, 0x6270
	  addi      r0, r3, 0x6B31
	  cmpw      r5, r0
	  beq-      .loc_0x1A0
	  bge-      .loc_0x778
	  addi      r0, r3, 0x6131
	  cmpw      r5, r0
	  beq-      .loc_0x518
	  b         .loc_0x778

	.loc_0xB8:
	  lis       r3, 0x6276
	  addi      r0, r3, 0x6131
	  cmpw      r5, r0
	  beq-      .loc_0x65C
	  bge-      .loc_0xF0
	  lis       r3, 0x6274
	  addi      r0, r3, 0x7031
	  cmpw      r5, r0
	  beq-      .loc_0x5CC
	  bge-      .loc_0x778
	  addi      r0, r3, 0x6B31
	  cmpw      r5, r0
	  beq-      .loc_0x25C
	  b         .loc_0x778

	.loc_0xF0:
	  lis       r3, 0x6278
	  addi      r0, r3, 0x6B31
	  cmpw      r5, r0
	  beq-      .loc_0x3FC
	  bge-      .loc_0x778
	  addi      r0, r3, 0x6131
	  cmpw      r5, r0
	  beq-      .loc_0x6E4
	  b         .loc_0x778

	.loc_0x114:
	  addi      r3, r1, 0x50
	  bl        0x7F8
	  li        r3, 0x2C
	  bl        -0x23B98
	  cmplwi    r3, 0
	  beq-      .loc_0x178
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  addi      r0, r4, 0xC64
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  li        r6, 0
	  lfs       f0, -0x7AA0(r2)
	  addi      r5, r5, 0xC50
	  addi      r0, r4, 0x1454
	  stfs      f0, 0x8(r3)
	  sth       r6, 0x6(r3)
	  stw       r5, 0x0(r3)
	  stw       r6, 0x10(r3)
	  stw       r6, 0x14(r3)
	  stw       r6, 0x18(r3)
	  stw       r6, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r6, 0x24(r3)
	  stw       r6, 0x28(r3)

	.loc_0x178:
	  stw       r3, 0x54(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x50
	  bl        0x84C
	  mr        r31, r3
	  addi      r3, r1, 0x50
	  li        r4, -0x1
	  bl        0x7E0
	  mr        r3, r31
	  b         .loc_0x784

	.loc_0x1A0:
	  addi      r3, r1, 0x48
	  bl        0x76C
	  li        r3, 0x44
	  bl        -0x23C24
	  mr.       r30, r3
	  beq-      .loc_0x22C
	  lis       r3, 0x804A
	  lfs       f0, -0x7AA0(r2)
	  addi      r0, r3, 0xC64
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1440
	  stfs      f0, 0x8(r30)
	  addi      r3, r30, 0x20
	  sth       r4, 0x6(r30)
	  stw       r0, 0x0(r30)
	  bl        -0x18E34
	  li        r5, 0
	  lis       r3, 0x804A
	  sth       r5, 0x16(r30)
	  li        r4, 0x1
	  addi      r0, r3, 0x1418
	  sth       r5, 0x14(r30)
	  sth       r5, 0x12(r30)
	  sth       r5, 0x10(r30)
	  sth       r5, 0x18(r30)
	  stw       r5, 0x1C(r30)
	  stw       r4, 0xC(r30)
	  stw       r0, 0x0(r30)
	  stw       r5, 0x30(r30)
	  stw       r5, 0x34(r30)
	  stw       r5, 0x38(r30)
	  stw       r5, 0x3C(r30)
	  stw       r5, 0x40(r30)

	.loc_0x22C:
	  stw       r30, 0x4C(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x48
	  bl        0x798
	  mr        r31, r3
	  addi      r3, r1, 0x48
	  li        r4, -0x1
	  bl        0x72C
	  mr        r3, r31
	  b         .loc_0x784

	.loc_0x254:
	  li        r3, 0
	  b         .loc_0x784

	.loc_0x25C:
	  addi      r3, r1, 0x40
	  bl        0x6B0
	  li        r3, 0x88
	  bl        -0x23CE0
	  mr.       r30, r3
	  beq-      .loc_0x300
	  lis       r3, 0x804A
	  lfs       f0, -0x7AA0(r2)
	  addi      r0, r3, 0xC64
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  lis       r3, 0x804A
	  addi      r0, r3, 0x13E0
	  stfs      f0, 0x8(r30)
	  addi      r3, r30, 0x38
	  sth       r4, 0x6(r30)
	  stw       r0, 0x0(r30)
	  bl        -0x18EF0
	  addi      r3, r30, 0x70
	  bl        -0x18EF8
	  li        r3, 0
	  li        r0, 0x4
	  stw       r3, 0x10(r30)
	  sth       r3, 0x20(r30)
	  sth       r3, 0x1E(r30)
	  sth       r3, 0x1C(r30)
	  sth       r3, 0x14(r30)
	  stw       r3, 0x18(r30)
	  stw       r3, 0x2C(r30)
	  stw       r3, 0x24(r30)
	  stw       r3, 0x28(r30)
	  sth       r3, 0x50(r30)
	  sth       r3, 0x4E(r30)
	  sth       r3, 0x4C(r30)
	  sth       r3, 0x60(r30)
	  stw       r3, 0x64(r30)
	  stw       r3, 0x5C(r30)
	  stw       r3, 0x54(r30)
	  stw       r3, 0x58(r30)
	  stw       r3, 0x84(r30)
	  stw       r0, 0xC(r30)

	.loc_0x300:
	  stw       r30, 0x44(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x40
	  bl        0x6C4
	  mr        r31, r3
	  addi      r3, r1, 0x40
	  li        r4, -0x1
	  bl        0x658
	  mr        r3, r31
	  b         .loc_0x784

	.loc_0x328:
	  addi      r3, r1, 0x38
	  bl        0x5E4
	  li        r3, 0x74
	  bl        -0x23DAC
	  mr.       r30, r3
	  beq-      .loc_0x3D4
	  lis       r3, 0x804A
	  lfs       f0, -0x7AA0(r2)
	  addi      r0, r3, 0xC64
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  lis       r3, 0x804A
	  addi      r0, r3, 0x13C0
	  stfs      f0, 0x8(r30)
	  addi      r3, r30, 0x28
	  sth       r4, 0x6(r30)
	  stw       r0, 0x0(r30)
	  bl        -0x18FBC
	  addi      r3, r30, 0x3C
	  bl        -0x18FC4
	  li        r3, 0
	  li        r0, 0x5
	  sth       r3, 0x12(r30)
	  sth       r3, 0x10(r30)
	  sth       r3, 0x1A(r30)
	  sth       r3, 0x18(r30)
	  sth       r3, 0x16(r30)
	  sth       r3, 0x14(r30)
	  sth       r3, 0x22(r30)
	  sth       r3, 0x20(r30)
	  sth       r3, 0x1E(r30)
	  sth       r3, 0x1C(r30)
	  stw       r3, 0x38(r30)
	  stw       r3, 0x24(r30)
	  stw       r3, 0x60(r30)
	  stw       r3, 0x5C(r30)
	  stw       r3, 0x58(r30)
	  stw       r3, 0x54(r30)
	  stw       r3, 0x70(r30)
	  stw       r3, 0x6C(r30)
	  stw       r3, 0x68(r30)
	  stw       r3, 0x64(r30)
	  stw       r0, 0xC(r30)

	.loc_0x3D4:
	  stw       r30, 0x3C(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x38
	  bl        0x5F0
	  mr        r31, r3
	  addi      r3, r1, 0x38
	  li        r4, -0x1
	  bl        0x584
	  mr        r3, r31
	  b         .loc_0x784

	.loc_0x3FC:
	  addi      r3, r1, 0x30
	  bl        0x510
	  li        r3, 0x3C
	  bl        -0x23E80
	  cmplwi    r3, 0
	  beq-      .loc_0x468
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  addi      r0, r4, 0xC64
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  lfs       f0, -0x7AA0(r2)
	  addi      r6, r5, 0xC3C
	  li        r5, 0x7
	  addi      r0, r4, 0x13F0
	  stfs      f0, 0x8(r3)
	  sth       r7, 0x6(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0xC(r3)
	  sth       r7, 0x10(r3)
	  sth       r7, 0x12(r3)
	  stw       r7, 0x14(r3)
	  stw       r7, 0x18(r3)
	  stw       r0, 0x0(r3)
	  stw       r7, 0x24(r3)
	  stw       r7, 0x28(r3)

	.loc_0x468:
	  stw       r3, 0x34(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x30
	  bl        0x55C
	  mr        r31, r3
	  addi      r3, r1, 0x30
	  li        r4, -0x1
	  bl        0x4F0
	  mr        r3, r31
	  b         .loc_0x784

	.loc_0x490:
	  addi      r3, r1, 0x28
	  bl        0xEFC
	  li        r3, 0x28
	  bl        -0x23F14
	  cmplwi    r3, 0
	  beq-      .loc_0x4F0
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  addi      r0, r4, 0xC64
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  li        r6, 0
	  lfs       f0, -0x7AA0(r2)
	  addi      r5, r5, 0xC50
	  addi      r0, r4, 0x146C
	  stfs      f0, 0x8(r3)
	  sth       r6, 0x6(r3)
	  stw       r5, 0x0(r3)
	  stw       r6, 0x10(r3)
	  stw       r6, 0x14(r3)
	  stw       r6, 0x18(r3)
	  stw       r6, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r6, 0x24(r3)

	.loc_0x4F0:
	  stw       r3, 0x2C(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x28
	  bl        0xC3C
	  mr        r31, r3
	  addi      r3, r1, 0x28
	  li        r4, -0x1
	  bl        0xEA0
	  mr        r3, r31
	  b         .loc_0x784

	.loc_0x518:
	  addi      r3, r1, 0x20
	  bl        0xE74
	  li        r3, 0x44
	  bl        -0x23F9C
	  mr.       r30, r3
	  beq-      .loc_0x5A4
	  lis       r3, 0x804A
	  lfs       f0, -0x7AA0(r2)
	  addi      r0, r3, 0xC64
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1440
	  stfs      f0, 0x8(r30)
	  addi      r3, r30, 0x20
	  sth       r4, 0x6(r30)
	  stw       r0, 0x0(r30)
	  bl        -0x191AC
	  li        r5, 0
	  lis       r3, 0x804A
	  sth       r5, 0x16(r30)
	  li        r4, 0x1
	  addi      r0, r3, 0x142C
	  sth       r5, 0x14(r30)
	  sth       r5, 0x12(r30)
	  sth       r5, 0x10(r30)
	  sth       r5, 0x18(r30)
	  stw       r5, 0x1C(r30)
	  stw       r4, 0xC(r30)
	  stw       r0, 0x0(r30)
	  stw       r5, 0x30(r30)
	  stw       r5, 0x34(r30)
	  stw       r5, 0x38(r30)
	  stw       r5, 0x3C(r30)
	  stw       r5, 0x40(r30)

	.loc_0x5A4:
	  stw       r30, 0x24(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  bl        0xB88
	  mr        r31, r3
	  addi      r3, r1, 0x20
	  li        r4, -0x1
	  bl        0xDEC
	  mr        r3, r31
	  b         .loc_0x784

	.loc_0x5CC:
	  addi      r3, r1, 0x18
	  bl        0xDC0
	  li        r3, 0x34
	  bl        -0x24050
	  mr.       r30, r3
	  beq-      .loc_0x634
	  lis       r3, 0x804A
	  lfs       f0, -0x7AA0(r2)
	  addi      r0, r3, 0xC64
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  lis       r3, 0x804A
	  addi      r0, r3, 0x13D0
	  stfs      f0, 0x8(r30)
	  addi      r3, r30, 0x20
	  sth       r4, 0x6(r30)
	  stw       r0, 0x0(r30)
	  bl        -0x19260
	  li        r3, 0
	  li        r0, 0x2
	  stw       r3, 0x10(r30)
	  stw       r3, 0x14(r30)
	  stw       r0, 0xC(r30)
	  sth       r3, 0x1A(r30)
	  stw       r3, 0x1C(r30)
	  stw       r3, 0x30(r30)

	.loc_0x634:
	  stw       r30, 0x1C(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x18
	  bl        0xAF8
	  mr        r31, r3
	  addi      r3, r1, 0x18
	  li        r4, -0x1
	  bl        0xD5C
	  mr        r3, r31
	  b         .loc_0x784

	.loc_0x65C:
	  addi      r3, r1, 0x10
	  bl        0xD30
	  li        r3, 0x1C
	  bl        -0x240E0
	  cmplwi    r3, 0
	  beq-      .loc_0x6B4
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0xC64
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x0(r3)
	  li        r5, 0
	  addi      r4, r4, 0xC2C
	  li        r0, 0x6
	  stfs      f0, 0x8(r3)
	  sth       r5, 0x6(r3)
	  stw       r4, 0x0(r3)
	  sth       r5, 0x10(r3)
	  stw       r5, 0x14(r3)
	  sth       r5, 0x12(r3)
	  stw       r5, 0x18(r3)
	  stw       r0, 0xC(r3)

	.loc_0x6B4:
	  stw       r3, 0x14(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  bl        0xA78
	  mr        r31, r3
	  addi      r3, r1, 0x10
	  li        r4, -0x1
	  bl        0xCDC
	  mr        r3, r31
	  b         .loc_0x784

	.loc_0x6DC:
	  li        r3, 0
	  b         .loc_0x784

	.loc_0x6E4:
	  addi      r3, r1, 0x8
	  bl        0xCA8
	  li        r3, 0x3C
	  bl        -0x24168
	  cmplwi    r3, 0
	  beq-      .loc_0x750
	  lis       r4, 0x804A
	  lis       r5, 0x804A
	  addi      r0, r4, 0xC64
	  lis       r4, 0x804A
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  lfs       f0, -0x7AA0(r2)
	  addi      r6, r5, 0xC3C
	  li        r5, 0x7
	  addi      r0, r4, 0x1404
	  stfs      f0, 0x8(r3)
	  sth       r7, 0x6(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0xC(r3)
	  sth       r7, 0x10(r3)
	  sth       r7, 0x12(r3)
	  stw       r7, 0x14(r3)
	  stw       r7, 0x18(r3)
	  stw       r0, 0x0(r3)
	  stw       r7, 0x24(r3)
	  stw       r7, 0x28(r3)

	.loc_0x750:
	  stw       r3, 0xC(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  bl        0x9DC
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  li        r4, -0x1
	  bl        0xC40
	  mr        r3, r31
	  b         .loc_0x784

	.loc_0x778:
	  li        r3, 0
	  b         .loc_0x784

	.loc_0x780:
	  li        r3, 0

	.loc_0x784:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800480B8
 * Size:	00005C
 */
void J2DAnmVtxColor::~J2DAnmVtxColor()
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
	  addi      r0, r3, 0xC3C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x24044

	.loc_0x44:
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
 * Address:	80048114
 * Size:	000074
 */
void J2DAnmColor::~J2DAnmColor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addic.    r0, r31, 0x20
	  addi      r0, r3, 0x1440
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x38
	  lis       r3, 0x804A
	  addi      r0, r3, 0x4E0
	  stw       r0, 0x20(r31)

	.loc_0x38:
	  cmplwi    r31, 0
	  beq-      .loc_0x4C
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x4C:
	  extsh.    r0, r4
	  ble-      .loc_0x5C
	  mr        r3, r31
	  bl        -0x240B8

	.loc_0x5C:
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
 * Address:	80048188
 * Size:	00005C
 */
void J2DAnmTransform::~J2DAnmTransform()
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
	  addi      r0, r3, 0xC50
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x24114

	.loc_0x44:
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
 * Address:	800481E4
 * Size:	000048
 */
void J2DAnmBase::~J2DAnmBase()
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
	  addi      r0, r5, 0xC64
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x2415C

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
 * Address:	8004822C
 * Size:	00001C
 */
void J2DAnmKeyLoader_v15::J2DAnmKeyLoader_v15()
{
	/*
	.loc_0x0:
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r5, r5, 0xC18
	  stw       r5, 0x0(r3)
	  addi      r0, r4, 0xC04
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80048248
 * Size:	000048
 */
void J2DAnmLoader::~J2DAnmLoader()
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
	  addi      r0, r5, 0xC18
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x241C0

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
 * Address:	80048290
 * Size:	00005C
 */
void J2DAnmKeyLoader_v15::~J2DAnmKeyLoader_v15()
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
	  addi      r0, r3, 0xC04
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC18
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x2421C

	.loc_0x44:
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
 * Address:	800482EC
 * Size:	000104
 */
void J2DAnmKeyLoader_v15::load(const void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x5452
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lwz       r31, 0xC(r4)
	  addi      r29, r4, 0x20
	  addi      r30, r5, 0x4B31
	  li        r28, 0
	  b         .loc_0xE4

	.loc_0x2C:
	  lwz       r4, 0x0(r29)
	  cmpw      r4, r30
	  beq-      .loc_0xCC
	  bge-      .loc_0x64
	  lis       r3, 0x5041
	  addi      r0, r3, 0x4B31
	  cmpw      r4, r0
	  beq-      .loc_0x9C
	  bge-      .loc_0xD8
	  lis       r3, 0x414E
	  addi      r0, r3, 0x4B31
	  cmpw      r4, r0
	  beq-      .loc_0x8C
	  b         .loc_0xD8

	.loc_0x64:
	  lis       r3, 0x5643
	  addi      r0, r3, 0x4B31
	  cmpw      r4, r0
	  beq-      .loc_0xBC
	  bge-      .loc_0xD8
	  lis       r3, 0x5454
	  addi      r0, r3, 0x4B31
	  cmpw      r4, r0
	  beq-      .loc_0xAC
	  b         .loc_0xD8

	.loc_0x8C:
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x1C4
	  b         .loc_0xD8

	.loc_0x9C:
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x48C
	  b         .loc_0xD8

	.loc_0xAC:
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x268
	  b         .loc_0xD8

	.loc_0xBC:
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x580
	  b         .loc_0xD8

	.loc_0xCC:
	  mr        r3, r27
	  mr        r4, r29
	  bl        0xBE0

	.loc_0xD8:
	  lwz       r0, 0x4(r29)
	  addi      r28, r28, 0x1
	  add       r29, r29, r0

	.loc_0xE4:
	  cmplw     r28, r31
	  blt+      .loc_0x2C
	  lwz       r3, 0x4(r27)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800483F0
 * Size:	000154
 */
void J2DAnmKeyLoader_v15::setResource(J2DAnmBase*, const void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x5452
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r3
	  lwz       r26, 0xC(r5)
	  mr        r28, r4
	  addi      r30, r5, 0x20
	  addi      r31, r6, 0x4B31
	  li        r29, 0
	  b         .loc_0x138

	.loc_0x30:
	  lwz       r4, 0x0(r30)
	  cmpw      r4, r31
	  beq-      .loc_0xF0
	  bge-      .loc_0x68
	  lis       r3, 0x5041
	  addi      r0, r3, 0x4B31
	  cmpw      r4, r0
	  beq-      .loc_0xB0
	  bge-      .loc_0x12C
	  lis       r3, 0x414E
	  addi      r0, r3, 0x4B31
	  cmpw      r4, r0
	  beq-      .loc_0x90
	  b         .loc_0x12C

	.loc_0x68:
	  lis       r3, 0x5643
	  addi      r0, r3, 0x4B31
	  cmpw      r4, r0
	  beq-      .loc_0x110
	  bge-      .loc_0x12C
	  lis       r3, 0x5454
	  addi      r0, r3, 0x4B31
	  cmpw      r4, r0
	  beq-      .loc_0xD0
	  b         .loc_0x12C

	.loc_0x90:
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0
	  bne-      .loc_0x12C
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r30
	  bl        0xD4
	  b         .loc_0x12C

	.loc_0xB0:
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x12C
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r30
	  bl        0x38C
	  b         .loc_0x12C

	.loc_0xD0:
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x12C
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r30
	  bl        0x158
	  b         .loc_0x12C

	.loc_0xF0:
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x12C
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r30
	  bl        0xAD0
	  b         .loc_0x12C

	.loc_0x110:
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0x7
	  bne-      .loc_0x12C
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r30
	  bl        0x440

	.loc_0x12C:
	  lwz       r0, 0x4(r30)
	  addi      r29, r29, 0x1
	  add       r30, r30, r0

	.loc_0x138:
	  cmplw     r29, r26
	  blt+      .loc_0x30
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80048544
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmTransform(const J3DAnmTransformKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  bl        .loc_0x28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	8004856C
 * Size:	00009C
 */
void J2DAnmKeyLoader_v15::setAnmTransform(J2DAnmTransformKey*,
                                          const J3DAnmTransformKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lha       r0, 0xA(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lhz       r4, 0xC(r5)
	  sth       r4, 0x22(r30)
	  lbz       r4, 0x8(r5)
	  sth       r0, 0x6(r30)
	  lbz       r0, 0x9(r5)
	  stb       r4, 0x4(r30)
	  lwz       r4, 0x14(r5)
	  stw       r0, 0x24(r30)
	  stfs      f0, 0x8(r30)
	  bl        0xF14
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        0xEEC
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0xEC4
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0xECC
	  stw       r3, 0x18(r30)
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
 * Address:	80048608
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmTextureSRT(const J3DAnmTextureSRTKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  bl        .loc_0x28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	80048630
 * Size:	0001EC
 */
void J2DAnmKeyLoader_v15::setAnmTextureSRT(J2DAnmTextureSRTKey*,
                                           const J3DAnmTextureSRTKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lhz       r6, 0xC(r5)
	  stw       r0, 0x14(r1)
	  lha       r0, 0xA(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lfs       f0, -0x7AA0(r2)
	  stw       r30, 0x8(r1)
	  mr        r30, r5
	  mr        r3, r30
	  sth       r6, 0x14(r4)
	  lbz       r4, 0x8(r5)
	  sth       r0, 0x6(r31)
	  lbz       r0, 0x9(r5)
	  stb       r4, 0x4(r31)
	  lhz       r4, 0xE(r5)
	  stw       r0, 0x10(r31)
	  lhz       r5, 0x10(r5)
	  stfs      f0, 0x8(r31)
	  lhz       r0, 0x12(r30)
	  sth       r6, 0x14(r31)
	  sth       r4, 0x1C(r31)
	  lwz       r4, 0x14(r30)
	  sth       r5, 0x1E(r31)
	  sth       r0, 0x20(r31)
	  bl        0xE34
	  stw       r3, 0x18(r31)
	  mr        r3, r30
	  lwz       r4, 0x18(r30)
	  bl        0xDDC
	  stw       r3, 0x34(r31)
	  mr        r3, r30
	  lwz       r4, 0x1C(r30)
	  bl        0xDB4
	  mr        r4, r3
	  addi      r3, r31, 0x38
	  bl        -0x1997C
	  lwz       r4, 0x20(r30)
	  mr        r3, r30
	  bl        0xD84
	  stw       r3, 0x30(r31)
	  mr        r3, r30
	  lwz       r4, 0x24(r30)
	  bl        0xD5C
	  stw       r3, 0x48(r31)
	  mr        r3, r30
	  lwz       r4, 0x28(r30)
	  bl        0xDC4
	  stw       r3, 0x24(r31)
	  mr        r3, r30
	  lwz       r4, 0x2C(r30)
	  bl        0xD9C
	  stw       r3, 0x28(r31)
	  mr        r3, r30
	  lwz       r4, 0x30(r30)
	  bl        0xDA4
	  lwz       r4, 0x44(r30)
	  stw       r3, 0x2C(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x108
	  mr        r3, r30
	  bl        0xD44
	  mr        r4, r3
	  addi      r3, r31, 0x70
	  bl        -0x199EC

	.loc_0x108:
	  lhz       r4, 0x34(r30)
	  mr        r3, r30
	  lhz       r0, 0x36(r30)
	  sth       r4, 0x60(r31)
	  lhz       r4, 0x38(r30)
	  sth       r0, 0x4C(r31)
	  lhz       r0, 0x3A(r30)
	  sth       r4, 0x4E(r31)
	  lwz       r4, 0x3C(r30)
	  sth       r0, 0x50(r31)
	  bl        0xD6C
	  stw       r3, 0x64(r31)
	  mr        r3, r30
	  lwz       r4, 0x40(r30)
	  bl        0xD14
	  stw       r3, 0x6C(r31)
	  mr        r3, r30
	  lwz       r4, 0x48(r30)
	  bl        0xCD4
	  stw       r3, 0x68(r31)
	  mr        r3, r30
	  lwz       r4, 0x4C(r30)
	  bl        0xCAC
	  stw       r3, 0x80(r31)
	  mr        r3, r30
	  lwz       r4, 0x50(r30)
	  bl        0xD14
	  stw       r3, 0x54(r31)
	  mr        r3, r30
	  lwz       r4, 0x54(r30)
	  bl        0xCEC
	  stw       r3, 0x58(r31)
	  mr        r3, r30
	  lwz       r4, 0x58(r30)
	  bl        0xCF4
	  lwz       r0, 0x5C(r30)
	  stw       r3, 0x5C(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1C0
	  bge-      .loc_0x1CC
	  cmpwi     r0, 0
	  bge-      .loc_0x1B4
	  b         .loc_0x1CC

	.loc_0x1B4:
	  li        r0, 0
	  stw       r0, 0x84(r31)
	  b         .loc_0x1D4

	.loc_0x1C0:
	  li        r0, 0x1
	  stw       r0, 0x84(r31)
	  b         .loc_0x1D4

	.loc_0x1CC:
	  li        r0, 0
	  stw       r0, 0x84(r31)

	.loc_0x1D4:
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
 * Address:	8004881C
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmColor(const J3DAnmColorKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  bl        .loc_0x28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	80048844
 * Size:	0000EC
 */
void J2DAnmKeyLoader_v15::setAnmColor(J2DAnmColorKey*,
                                      const J3DAnmColorKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xC(r5)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0x10(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r0, 0x18(r30)
	  lhz       r0, 0x12(r5)
	  sth       r4, 0x10(r30)
	  lhz       r4, 0x14(r5)
	  sth       r0, 0x12(r30)
	  lhz       r0, 0x16(r5)
	  sth       r4, 0x14(r30)
	  lwz       r4, 0x18(r5)
	  sth       r0, 0x16(r30)
	  bl        0xB7C
	  stw       r3, 0x40(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        0xBE4
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0xBD4
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        0xBC4
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        0xBB4
	  stw       r3, 0x3C(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0xB8C
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0xB64
	  mr        r4, r3
	  addi      r3, r30, 0x20
	  bl        -0x19BCC
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
 * Address:	80048930
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmVtxColor(const J3DAnmVtxColorKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  bl        .loc_0x28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	80048958
 * Size:	0000FC
 */
void J2DAnmKeyLoader_v15::setAnmVtxColor(J2DAnmVtxColorKey*,
                                         const J3DAnmVtxColorKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0xC(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r4, 0x10(r30)
	  lwz       r4, 0x18(r5)
	  sth       r0, 0x12(r30)
	  bl        0xA80
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0xA70
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0xA48
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        0xA38
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0xAA0
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        0xA90
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        0xA98
	  stw       r3, 0x2C(r30)
	  mr        r3, r31
	  lwz       r4, 0x34(r31)
	  bl        0xA88
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x38(r31)
	  bl        0xA78
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x3C(r31)
	  bl        0xA68
	  stw       r3, 0x38(r30)
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
 * Address:	80048A54
 * Size:	000104
 */
void J2DAnmFullLoader_v15::load(const void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x5450
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lwz       r31, 0xC(r4)
	  addi      r29, r4, 0x20
	  addi      r30, r5, 0x5431
	  li        r28, 0
	  b         .loc_0xE4

	.loc_0x2C:
	  lwz       r4, 0x0(r29)
	  cmpw      r4, r30
	  beq-      .loc_0xAC
	  bge-      .loc_0x64
	  lis       r3, 0x5041
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0x9C
	  bge-      .loc_0xD8
	  lis       r3, 0x414E
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0x8C
	  b         .loc_0xD8

	.loc_0x64:
	  lis       r3, 0x5643
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0xCC
	  bge-      .loc_0xD8
	  lis       r3, 0x5641
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0xBC
	  b         .loc_0xD8

	.loc_0x8C:
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x23C
	  b         .loc_0xD8

	.loc_0x9C:
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x2E8
	  b         .loc_0xD8

	.loc_0xAC:
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x3CC
	  b         .loc_0xD8

	.loc_0xBC:
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x63C
	  b         .loc_0xD8

	.loc_0xCC:
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x6D0

	.loc_0xD8:
	  lwz       r0, 0x4(r29)
	  addi      r28, r28, 0x1
	  add       r29, r29, r0

	.loc_0xE4:
	  cmplw     r28, r31
	  blt+      .loc_0x2C
	  lwz       r3, 0x4(r27)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80048B58
 * Size:	000154
 */
void J2DAnmFullLoader_v15::setResource(J2DAnmBase*, const void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x5450
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r3
	  lwz       r26, 0xC(r5)
	  mr        r28, r4
	  addi      r30, r5, 0x20
	  addi      r31, r6, 0x5431
	  li        r29, 0
	  b         .loc_0x138

	.loc_0x30:
	  lwz       r4, 0x0(r30)
	  cmpw      r4, r31
	  beq-      .loc_0xD0
	  bge-      .loc_0x68
	  lis       r3, 0x5041
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0xB0
	  bge-      .loc_0x12C
	  lis       r3, 0x414E
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0x90
	  b         .loc_0x12C

	.loc_0x68:
	  lis       r3, 0x5643
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0x110
	  bge-      .loc_0x12C
	  lis       r3, 0x5641
	  addi      r0, r3, 0x4631
	  cmpw      r4, r0
	  beq-      .loc_0xF0
	  b         .loc_0x12C

	.loc_0x90:
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0
	  bne-      .loc_0x12C
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r30
	  bl        0x14C
	  b         .loc_0x12C

	.loc_0xB0:
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x12C
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r30
	  bl        0x1E8
	  b         .loc_0x12C

	.loc_0xD0:
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x12C
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r30
	  bl        0x2BC
	  b         .loc_0x12C

	.loc_0xF0:
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0x6
	  bne-      .loc_0x12C
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r30
	  bl        0x51C
	  b         .loc_0x12C

	.loc_0x110:
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0x7
	  bne-      .loc_0x12C
	  mr        r3, r27
	  mr        r4, r28
	  mr        r5, r30
	  bl        0x5A0

	.loc_0x12C:
	  lwz       r0, 0x4(r30)
	  addi      r29, r29, 0x1
	  add       r30, r30, r0

	.loc_0x138:
	  cmplw     r29, r26
	  blt+      .loc_0x30
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80048CAC
 * Size:	00001C
 */
void J2DAnmFullLoader_v15::J2DAnmFullLoader_v15()
{
	/*
	.loc_0x0:
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r5, r5, 0xC18
	  stw       r5, 0x0(r3)
	  addi      r0, r4, 0xBF0
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80048CC8
 * Size:	00005C
 */
void J2DAnmFullLoader_v15::~J2DAnmFullLoader_v15()
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
	  addi      r0, r3, 0xBF0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC18
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x24C54

	.loc_0x44:
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
 * Address:	80048D24
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmTransform(const J3DAnmTransformFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  bl        .loc_0x28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	80048D4C
 * Size:	000094
 */
void J2DAnmFullLoader_v15::setAnmTransform(J2DAnmTransformFull*,
                                           const J3DAnmTransformFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lhz       r0, 0xC(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r0, 0x22(r30)
	  lbz       r0, 0x8(r5)
	  sth       r4, 0x6(r30)
	  lwz       r4, 0x14(r5)
	  stb       r0, 0x4(r30)
	  stfs      f0, 0x8(r30)
	  bl        0x664
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        0x714
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0x6EC
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0x6F4
	  stw       r3, 0x18(r30)
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
 * Address:	80048DE0
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmColor(const J3DAnmColorFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  bl        .loc_0x28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	80048E08
 * Size:	0000CC
 */
void J2DAnmFullLoader_v15::setAnmColor(J2DAnmColorFull*,
                                       const J3DAnmColorFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xC(r5)
	  sth       r4, 0x6(r30)
	  lwz       r4, 0x18(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r0, 0x18(r30)
	  bl        0x590
	  stw       r3, 0x40(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        0x5F8
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0x5E8
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        0x5D8
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        0x5C8
	  stw       r3, 0x3C(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0x5E8
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0x5C0
	  mr        r4, r3
	  addi      r3, r30, 0x20
	  bl        -0x1A170
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
 * Address:	80048ED4
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmTexPattern(const J3DAnmTexPatternFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  bl        .loc_0x28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	80048EFC
 * Size:	0000A4
 */
void J2DAnmFullLoader_v15::setAnmTexPattern(J2DAnmTexPattern*,
                                            const J3DAnmTexPatternFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0xC(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r4, 0x1A(r30)
	  lwz       r4, 0x10(r5)
	  sth       r0, 0x18(r30)
	  bl        0x47C
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x14(r31)
	  bl        0x52C
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        0x51C
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0x4F4
	  mr        r4, r3
	  addi      r3, r30, 0x20
	  bl        -0x1A23C
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
 * Address:	80048FA0
 * Size:	000028
 */
void J2DAnmKeyLoader_v15::readAnmTevReg(const J3DAnmTevRegKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  bl        .loc_0x28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	80048FC8
 * Size:	00018C
 */
void J2DAnmKeyLoader_v15::setAnmTevReg(J2DAnmTevRegKey*,
                                       const J3DAnmTevRegKeyData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lwz       r4, 0x20(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xC(r5)
	  stfs      f0, 0x8(r30)
	  sth       r0, 0x10(r30)
	  bl        0x3A0
	  stw       r3, 0x4C(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0x468
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        0x440
	  mr        r4, r3
	  addi      r3, r30, 0x28
	  bl        -0x1A2F0
	  lhz       r0, 0xE(r31)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  sth       r0, 0x12(r30)
	  bl        0x348
	  stw       r3, 0x50(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        0x428
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  lwz       r4, 0x34(r31)
	  bl        0x400
	  mr        r4, r3
	  addi      r3, r30, 0x3C
	  bl        -0x1A330
	  lhz       r4, 0x10(r31)
	  mr        r3, r31
	  lhz       r0, 0x12(r31)
	  sth       r4, 0x14(r30)
	  lhz       r4, 0x14(r31)
	  sth       r0, 0x16(r30)
	  lhz       r0, 0x16(r31)
	  sth       r4, 0x18(r30)
	  lwz       r4, 0x38(r31)
	  sth       r0, 0x1A(r30)
	  bl        0x3F8
	  stw       r3, 0x54(r30)
	  mr        r3, r31
	  lwz       r4, 0x3C(r31)
	  bl        0x3E8
	  stw       r3, 0x58(r30)
	  mr        r3, r31
	  lwz       r4, 0x40(r31)
	  bl        0x3D8
	  stw       r3, 0x5C(r30)
	  mr        r3, r31
	  lwz       r4, 0x44(r31)
	  bl        0x3C8
	  stw       r3, 0x60(r30)
	  mr        r3, r31
	  lhz       r4, 0x18(r31)
	  lhz       r0, 0x1A(r31)
	  sth       r4, 0x1C(r30)
	  lhz       r4, 0x1C(r31)
	  sth       r0, 0x1E(r30)
	  lhz       r0, 0x1E(r31)
	  sth       r4, 0x20(r30)
	  lwz       r4, 0x48(r31)
	  sth       r0, 0x22(r30)
	  bl        0x398
	  stw       r3, 0x64(r30)
	  mr        r3, r31
	  lwz       r4, 0x4C(r31)
	  bl        0x388
	  stw       r3, 0x68(r30)
	  mr        r3, r31
	  lwz       r4, 0x50(r31)
	  bl        0x378
	  stw       r3, 0x6C(r30)
	  mr        r3, r31
	  lwz       r4, 0x54(r31)
	  bl        0x368
	  stw       r3, 0x70(r30)
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
 * Address:	80049154
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmVisibility(const J3DAnmVisibilityFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  bl        .loc_0x28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	8004917C
 * Size:	00007C
 */
void J2DAnmFullLoader_v15::setAnmVisibility(J2DAnmVisibilityFull*,
                                            const J3DAnmVisibilityFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0xC(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r4, 0x10(r30)
	  lwz       r4, 0x10(r5)
	  sth       r0, 0x12(r30)
	  bl        0x1B4
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x14(r31)
	  bl        0x27C
	  stw       r3, 0x18(r30)
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
 * Address:	800491F8
 * Size:	000028
 */
void J2DAnmFullLoader_v15::readAnmVtxColor(const J3DAnmVtxColorFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  bl        .loc_0x28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x28:
	*/
}

/*
 * --INFO--
 * Address:	80049220
 * Size:	0000FC
 */
void J2DAnmFullLoader_v15::setAnmVtxColor(J2DAnmVtxColorFull*,
                                          const J3DAnmVtxColorFullData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x7AA0(r2)
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x8(r5)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lha       r4, 0xA(r5)
	  sth       r4, 0x6(r30)
	  lhz       r4, 0xC(r5)
	  stb       r0, 0x4(r30)
	  lhz       r0, 0xE(r5)
	  stfs      f0, 0x8(r30)
	  sth       r4, 0x10(r30)
	  lwz       r4, 0x18(r5)
	  sth       r0, 0x12(r30)
	  bl        0x170
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x1C(r31)
	  bl        0x160
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        0x180
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        0x170
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0x1D8
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        0x1C8
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        0x188
	  stw       r3, 0x2C(r30)
	  mr        r3, r31
	  lwz       r4, 0x34(r31)
	  bl        0x178
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x38(r31)
	  bl        0x168
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x3C(r31)
	  bl        0x158
	  stw       r3, 0x38(r30)
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
 * Address:	8004931C
 * Size:	00005C
 */
void J2DAnmVisibilityFull::~J2DAnmVisibilityFull()
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
	  addi      r0, r3, 0xC2C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0xC64
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x252A8

	.loc_0x44:
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
 * Address:	80049378
 * Size:	000004
 */
void J2DAnmBase::searchUpdateMaterialID(J2DScreen*) { }

/*
 * --INFO--
 * Address:	8004937C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmVisibilityFullTable>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80049394
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmKRegKeyTable>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800493AC
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmCRegKeyTable>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800493C4
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmTexPatternFullTable>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800493DC
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmColorFullTable>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800493F4
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmTransformFullTable>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004940C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80049424
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004943C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<Vec>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80049454
 * Size:	000018
 */
void JSUConvertOffsetToPtr<unsigned char>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004946C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<ResNTAB>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80049484
 * Size:	000018
 */
void JSUConvertOffsetToPtr<unsigned short>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004949C
 * Size:	000018
 */
void JSUConvertOffsetToPtr<short>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800494B4
 * Size:	000018
 */
void JSUConvertOffsetToPtr<float>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800494CC
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}
