#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8013F6D4
 * Size:	000050
 */
void Navi::getShadowParam(Game::ShadowParam&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x20C(r3)
	  lfs       f4, -0x6018(r2)
	  stfs      f0, 0x0(r4)
	  lfs       f3, -0x6014(r2)
	  lfs       f0, 0x210(r3)
	  lfs       f2, -0x6010(r2)
	  stfs      f0, 0x4(r4)
	  lfs       f1, -0x600C(r2)
	  lfs       f5, 0x214(r3)
	  lfs       f0, -0x6008(r2)
	  stfs      f5, 0x8(r4)
	  lfs       f5, 0x4(r4)
	  fadds     f4, f5, f4
	  stfs      f4, 0x4(r4)
	  stfs      f3, 0x18(r4)
	  stfs      f2, 0x1C(r4)
	  stfs      f1, 0xC(r4)
	  stfs      f0, 0x10(r4)
	  stfs      f1, 0x14(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013F724
 * Size:	000024
 */
void Navi::getLODSphere(Sys::Sphere&)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x6004(r2)
	  stfs      f0, 0xC(r4)
	  lfs       f0, 0x218(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x21C(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x220(r3)
	  stfs      f0, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013F748
 * Size:	000208
 */
Navi::Navi()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  beq-      .loc_0x40
	  addi      r0, r31, 0x310
	  lis       r3, 0x804B
	  stw       r0, 0x250(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x310(r31)
	  stw       r0, 0x314(r31)
	  stw       r0, 0x318(r31)

	.loc_0x40:
	  mr        r3, r31
	  bl        -0x2B24
	  lis       r3, 0x804B
	  addi      r5, r31, 0x310
	  addi      r6, r3, 0x5BC
	  li        r4, 0
	  stw       r6, 0x0(r31)
	  addi      r3, r6, 0x1B0
	  addi      r7, r6, 0x230
	  li        r0, 0x1
	  stw       r3, 0x178(r31)
	  li        r3, 0x3C8
	  lwz       r6, 0x250(r31)
	  stw       r7, 0x0(r6)
	  lwz       r6, 0x250(r31)
	  sub       r5, r5, r6
	  stw       r5, 0xC(r6)
	  stb       r4, 0x288(r31)
	  stb       r4, 0x289(r31)
	  stw       r4, 0x278(r31)
	  stw       r4, 0x27C(r31)
	  stw       r4, 0x280(r31)
	  stw       r4, 0x284(r31)
	  stw       r4, 0x28C(r31)
	  sth       r0, 0x128(r31)
	  bl        -0x11B948
	  mr.       r0, r3
	  beq-      .loc_0xB8
	  bl        .loc_0x208
	  mr        r0, r3

	.loc_0xB8:
	  stw       r0, 0x2D0(r31)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  lwz       r3, 0x2D0(r31)
	  li        r7, 0
	  bl        0x2785D4
	  lwz       r4, 0x2D0(r31)
	  addi      r0, r31, 0x20C
	  li        r3, 0x20
	  stw       r0, 0x8(r4)
	  bl        -0x11B988
	  cmplwi    r3, 0
	  beq-      .loc_0x110
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r5, 0x974
	  li        r5, -0x1
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x376C
	  stw       r5, 0x18(r3)
	  stw       r0, 0x0(r3)

	.loc_0x110:
	  stw       r3, 0x270(r31)
	  mr        r4, r31
	  lwz       r3, 0x270(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x114
	  bl        -0x11B9D4
	  mr.       r0, r3
	  beq-      .loc_0x148
	  li        r4, 0x64
	  bl        0x557D8
	  mr        r0, r3

	.loc_0x148:
	  stw       r0, 0x254(r31)
	  li        r3, 0x20
	  lfs       f0, -0x6008(r2)
	  stfs      f0, 0x118(r31)
	  bl        -0x11B9FC
	  mr.       r0, r3
	  beq-      .loc_0x16C
	  bl        0x74F04
	  mr        r0, r3

	.loc_0x16C:
	  stw       r0, 0x2D8(r31)
	  li        r4, 0x10
	  lwz       r3, 0x2D8(r31)
	  bl        0x74F0C
	  li        r0, 0x1
	  li        r3, 0x10
	  stb       r0, 0x135(r31)
	  bl        -0x11BA2C
	  mr.       r30, r3
	  beq-      .loc_0x1A4
	  bl        0x2F4A78
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B88
	  stw       r0, 0x0(r30)

	.loc_0x1A4:
	  stw       r30, 0x298(r31)
	  li        r3, 0xC
	  bl        -0x11BA50
	  mr.       r30, r3
	  beq-      .loc_0x1C8
	  bl        0x2F4A54
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B74
	  stw       r0, 0x0(r30)

	.loc_0x1C8:
	  stw       r30, 0x29C(r31)
	  li        r3, 0x94
	  bl        -0x11BA74
	  mr.       r0, r3
	  beq-      .loc_0x1E8
	  mr        r4, r31
	  bl        0x323198
	  mr        r0, r3

	.loc_0x1E8:
	  stw       r0, 0x26C(r31)
	  mr        r3, r31
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x208:
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	8013F950
 * Size:	0002B0
 */
TNaviEffect::TNaviEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r4, 0x8014
	  lis       r5, 0x8014
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  addi      r4, r4, 0x5C
	  subi      r5, r5, 0x4
	  stmw      r21, 0x14(r1)
	  mr        r31, r3
	  li        r6, 0x1C
	  li        r7, 0x1
	  stb       r0, 0x0(r3)
	  addi      r3, r31, 0x28
	  stb       r0, 0x1(r31)
	  stb       r0, 0x2(r31)
	  stb       r0, 0x3(r31)
	  stb       r0, 0x4(r31)
	  stb       r0, 0x5(r31)
	  stb       r0, 0x6(r31)
	  stb       r0, 0x7(r31)
	  stw       r0, 0x8(r31)
	  stw       r0, 0xC(r31)
	  stw       r0, 0x10(r31)
	  stw       r0, 0x14(r31)
	  stw       r0, 0x18(r31)
	  bl        -0x7E17C
	  lis       r3, 0x8014
	  lis       r5, 0x8014
	  addi      r4, r3, 0x5C
	  li        r6, 0x1C
	  addi      r3, r31, 0x44
	  subi      r5, r5, 0x4
	  li        r7, 0x1
	  bl        -0x7E19C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5808
	  lis       r6, 0x804A
	  stw       r4, 0x60(r31)
	  addi      r0, r3, 0x960
	  lis       r3, 0x804E
	  lis       r5, 0x804E
	  stw       r0, 0x60(r31)
	  addi      r25, r5, 0x698C
	  lis       r8, 0x804A
	  addi      r7, r3, 0x7264
	  stw       r4, 0x64(r31)
	  subi      r0, r8, 0x1D84
	  lis       r3, 0x804E
	  lis       r5, 0x804B
	  stw       r0, 0x68(r31)
	  addi      r27, r3, 0x7218
	  addi      r6, r6, 0x3358
	  addi      r28, r5, 0x914
	  stw       r6, 0x6C(r31)
	  lis       r3, 0x804B
	  addi      r10, r3, 0x8C8
	  lis       r5, 0x804E
	  stw       r7, 0x64(r31)
	  addi      r6, r7, 0x14
	  addi      r8, r5, 0x72B8
	  addi      r29, r31, 0xAC
	  stw       r6, 0x68(r31)
	  addi      r6, r7, 0x30
	  lis       r3, 0x804E
	  li        r24, 0
	  stw       r6, 0x6C(r31)
	  addi      r7, r3, 0x6B0C
	  addi      r30, r29, 0x14
	  addi      r23, r25, 0x14
	  stw       r24, 0x78(r31)
	  li        r26, 0x67
	  addi      r22, r27, 0x14
	  addi      r12, r28, 0x14
	  stw       r4, 0x7C(r31)
	  li        r11, 0x68
	  addi      r9, r10, 0x14
	  addi      r6, r7, 0x14
	  stw       r0, 0x80(r31)
	  li        r5, 0x19
	  mr        r3, r30
	  stw       r25, 0x7C(r31)
	  stw       r23, 0x80(r31)
	  stw       r24, 0x84(r31)
	  sth       r26, 0x88(r31)
	  stb       r24, 0x8A(r31)
	  stw       r27, 0x7C(r31)
	  stw       r22, 0x80(r31)
	  stw       r28, 0x7C(r31)
	  stw       r12, 0x80(r31)
	  stw       r4, 0x94(r31)
	  stw       r0, 0x98(r31)
	  stw       r25, 0x94(r31)
	  stw       r23, 0x98(r31)
	  stw       r24, 0x9C(r31)
	  sth       r11, 0xA0(r31)
	  stb       r24, 0xA2(r31)
	  stw       r27, 0x94(r31)
	  stw       r22, 0x98(r31)
	  stw       r10, 0x94(r31)
	  stw       r9, 0x98(r31)
	  stw       r4, 0xAC(r31)
	  stw       r8, 0xAC(r31)
	  stw       r4, 0xB0(r31)
	  stw       r0, 0xB4(r31)
	  stw       r7, 0xB0(r31)
	  stw       r6, 0xB4(r31)
	  stw       r24, 0xB8(r31)
	  sth       r5, 0xBC(r31)
	  bl        0x2D1888
	  lis       r3, 0x804B
	  lis       r4, 0x8014
	  addi      r0, r3, 0x8B8
	  li        r6, 0x24
	  stw       r0, 0x0(r30)
	  li        r0, 0
	  lis       r3, 0x8014
	  subi      r4, r4, 0x37C
	  stw       r0, 0x10(r30)
	  subi      r5, r3, 0x2A0
	  addi      r3, r29, 0x3C
	  li        r7, 0x10
	  stw       r0, 0xC(r30)
	  stw       r0, 0x8(r30)
	  stw       r0, 0x4(r30)
	  stw       r0, 0x24(r29)
	  stw       r0, 0x20(r29)
	  stw       r0, 0x1C(r29)
	  stw       r0, 0x18(r29)
	  bl        -0x7E31C
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0x10
	  bl        0x276ED8
	  addi      r21, r31, 0x33C
	  li        r4, 0
	  mr        r3, r21
	  li        r5, 0x123
	  li        r6, 0x123
	  bl        0x27091C
	  lis       r3, 0x804E
	  addi      r22, r31, 0x36C
	  addi      r3, r3, 0x72E8
	  li        r0, 0
	  stw       r3, 0x0(r21)
	  mr        r3, r22
	  li        r4, 0
	  li        r5, 0x124
	  stw       r0, 0x2C(r21)
	  li        r6, 0x125
	  bl        0x2708F0
	  lis       r3, 0x804E
	  addi      r21, r31, 0x39C
	  addi      r3, r3, 0x72CC
	  li        r0, 0
	  stw       r3, 0x0(r22)
	  mr        r3, r21
	  li        r4, 0
	  li        r5, 0x121
	  stw       r0, 0x2C(r22)
	  li        r6, 0x122
	  bl        0x270C24
	  lis       r4, 0x804B
	  mr        r3, r31
	  addi      r0, r4, 0x89C
	  stw       r0, 0x0(r21)
	  lmw       r21, 0x14(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013FC00
 * Size:	000084
 */
TChaseMtxT::~TChaseMtxT()
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
	  beq-      .loc_0x68
	  lis       r3, 0x804E
	  addi      r3, r3, 0x685C
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x58
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xAFFB8

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x11BBB0

	.loc_0x68:
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
 * Address:	8013FC84
 * Size:	000050
 */
Context::Context()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2D16F8
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x8B8
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  stw       r0, 0x10(r31)
	  stw       r0, 0xC(r31)
	  stw       r0, 0x8(r31)
	  stw       r0, 0x4(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013FCD4
 * Size:	00008C
 */
TOneEmitter::~TOneEmitter()
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
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x10
	  addi      r3, r3, 0x6B0C
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r3, r30, 0x10
	  addi      r0, r4, 0x8B8
	  li        r4, 0
	  stw       r0, 0x10(r30)
	  bl        0x2D1864

	.loc_0x54:
	  addi      r3, r30, 0x4
	  li        r4, 0
	  bl        -0xB0094
	  extsh.    r0, r31
	  ble-      .loc_0x70
	  mr        r3, r30
	  bl        -0x11BC8C

	.loc_0x70:
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
 * Address:	8013FD60
 * Size:	000060
 */
Context::~Context()
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0x8B8
	  stw       r0, 0x0(r30)
	  bl        0x2D17F8
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x11BCEC

	.loc_0x44:
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
 * Address:	8013FDC0
 * Size:	00009C
 */
TFueactBiri2::~TFueactBiri2()
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
	  beq-      .loc_0x80
	  lis       r3, 0x804B
	  addi      r3, r3, 0x8C8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x7218
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xB0190

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x11BD88

	.loc_0x80:
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
 * Address:	8013FE5C
 * Size:	00009C
 */
TFueactBiri1::~TFueactBiri1()
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
	  beq-      .loc_0x80
	  lis       r3, 0x804B
	  addi      r3, r3, 0x914
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x7218
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xB022C

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x11BE24

	.loc_0x80:
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
 * Address:	8013FEF8
 * Size:	000084
 */
TFueactBiriBase::~TFueactBiriBase()
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
	  beq-      .loc_0x68
	  lis       r3, 0x804E
	  addi      r3, r3, 0x7218
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x58
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xB02B0

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x11BEA8

	.loc_0x68:
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
 * Address:	8013FF7C
 * Size:	000080
 */
TFueactCircle::~TFueactCircle()
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
	  beq-      .loc_0x64
	  lis       r4, 0x804E
	  addi      r3, r30, 0x8
	  addi      r6, r4, 0x7264
	  li        r4, 0
	  stw       r6, 0x0(r30)
	  addi      r5, r6, 0x14
	  addi      r0, r6, 0x30
	  stw       r5, 0x4(r30)
	  stw       r0, 0x8(r30)
	  bl        -0xABF98
	  addi      r3, r30, 0x4
	  li        r4, 0
	  bl        -0xB0330
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x11BF28

	.loc_0x64:
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
 * Address:	8013FFFC
 * Size:	000060
 */
ContextChasePos::~ContextChasePos()
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0x81C
	  stw       r0, 0x0(r30)
	  bl        0x2D155C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x11BF88

	.loc_0x44:
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
 * Address:	8014005C
 * Size:	000054
 */
ContextChasePos::ContextChasePos()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2D1320
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x81C
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  stw       r0, 0x10(r31)
	  stw       r0, 0xC(r31)
	  stw       r0, 0x8(r31)
	  stw       r0, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	801400B0
 * Size:	000290
 */
void Navi::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x3878
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stb       r0, 0x259(r3)
	  stb       r0, 0x258(r3)
	  bl        0x4A68
	  mr        r3, r30
	  bl        0x4AC4
	  li        r0, 0
	  lfs       f0, -0x600C(r2)
	  stb       r0, 0x2A4(r30)
	  mr        r3, r30
	  stfs      f0, 0x2F8(r30)
	  stw       r0, 0x260(r30)
	  stw       r0, 0x25C(r30)
	  bl        -0x3370
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r30
	  bl        0x1A924
	  lwz       r4, 0x174(r30)
	  li        r0, 0
	  mr        r3, r30
	  lwz       r4, 0x8(r4)
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwz       r4, 0x0(r4)
	  stw       r0, 0x54(r4)
	  lwz       r4, 0x174(r30)
	  lwz       r4, 0x8(r4)
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwz       r4, 0x4(r4)
	  stw       r0, 0x54(r4)
	  stb       r0, 0x288(r30)
	  stb       r0, 0x289(r30)
	  lhz       r0, 0x288(r30)
	  rlwinm    r0,r0,0,16,30
	  sth       r0, 0x288(r30)
	  bl        -0x32EC
	  li        r0, 0
	  lfs       f0, -0x600C(r2)
	  stb       r0, 0x268(r30)
	  li        r3, 0x3C
	  stfs      f0, 0x308(r30)
	  bl        -0x11C2D4
	  mr.       r0, r3
	  beq-      .loc_0xE0
	  mr        r4, r30
	  bl        0x24F00
	  mr        r0, r3

	.loc_0xE0:
	  stw       r0, 0x28C(r30)
	  li        r0, 0
	  lfs       f0, -0x600C(r2)
	  li        r6, 0
	  stb       r0, 0x2DE(r30)
	  stw       r0, 0x2A8(r30)
	  stfs      f0, 0x2B0(r30)
	  stb       r0, 0x2AC(r30)
	  lwz       r5, -0x6D20(r13)
	  lwz       r3, 0x114(r30)
	  lwz       r4, 0x174(r30)
	  lwz       r5, 0xCC(r5)
	  bl        -0xC154
	  lwz       r3, 0x114(r30)
	  lis       r0, 0x8000
	  lwz       r3, 0x0(r3)
	  cmplw     r3, r0
	  bge-      .loc_0x13C
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x18
	  li        r4, 0x346
	  crclr     6, 0x6
	  bl        -0x115BA8

	.loc_0x13C:
	  lwz       r3, 0x114(r30)
	  lwz       r4, 0x174(r30)
	  bl        -0xA72C
	  lwz       r3, 0x270(r30)
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1AC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r30)
	  addi      r4, r31, 0x34
	  bl        0x2FEDB0
	  stw       r3, 0x2C0(r30)
	  lwz       r3, 0x2C0(r30)
	  bl        0x2E9660
	  lwz       r5, 0x2D0(r30)
	  subi      r4, r2, 0x6000
	  stw       r3, 0x10(r5)
	  lwz       r5, 0x28C(r30)
	  lwz       r3, 0x2D0(r30)
	  addi      r0, r5, 0xC
	  stw       r0, 0xC(r3)
	  lwz       r3, 0x174(r30)
	  bl        0x2FED80
	  bl        0x2E9638
	  lwz       r4, 0x2D0(r30)
	  stw       r3, 0x14(r4)
	  lhz       r4, 0x2DC(r30)
	  lwz       r3, 0x2D0(r30)
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r4,r0,1,31,31
	  bl        0x277B9C
	  lwz       r3, 0x2D0(r30)
	  lwz       r0, 0x0(r3)
	  ori       r0, r0, 0x2
	  stw       r0, 0x0(r3)
	  lwz       r4, 0x10(r3)
	  bl        0x277E5C
	  mr        r3, r30
	  bl        0x1D40
	  li        r0, 0
	  lfs       f0, -0x5FF8(r2)
	  stb       r0, 0x26A(r30)
	  fmr       f1, f0
	  stb       r0, 0x269(r30)
	  lhz       r0, 0x2DC(r30)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x224
	  lfs       f0, -0x5FF4(r2)
	  fmr       f1, f0

	.loc_0x224:
	  stfs      f0, 0x168(r30)
	  stfs      f0, 0x16C(r30)
	  stfs      f1, 0x170(r30)
	  lwz       r3, 0x298(r30)
	  lhz       r0, 0x2DC(r30)
	  lwz       r12, 0x0(r3)
	  mulli     r31, r0, 0x14
	  lwz       r0, -0x6D20(r13)
	  lwz       r12, 0x8(r12)
	  addi      r4, r31, 0x60
	  add       r4, r0, r4
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x29C(r30)
	  addi      r4, r31, 0x88
	  lwz       r0, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r4
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80140340
 * Size:	000008
 */
void Navi::getCreatureID()
{
	/*
	.loc_0x0:
	  lhz       r3, 0x2DC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140348
 * Size:	000034
 */
void StateMachine<Game::Navi>::start(Game::Navi*, int, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x274(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014037C
 * Size:	000088
 */
void Navi::onSetPosition(Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x20C(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x210(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x214(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x218(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x2DC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  mr        r3, r31
	  li        r4, 0xE
	  li        r5, 0
	  bl        0xDE1B4
	  b         .loc_0x6C

	.loc_0x5C:
	  mr        r3, r31
	  li        r4, 0xD
	  li        r5, 0
	  bl        0xDE1A0

	.loc_0x6C:
	  lwz       r3, 0x28C(r31)
	  bl        0x24CD0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140404
 * Size:	000040
 */
void Navi::onKill(Game::CreatureKillArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x35CC
	  lwz       r3, 0x2D0(r31)
	  lwz       r0, 0x0(r3)
	  rlwinm    r0,r0,0,31,29
	  stw       r0, 0x0(r3)
	  bl        0x277D48
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140444
 * Size:	0000D4
 */
void Navi::onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x274(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  mr        r5, r30
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  lwz       r3, 0x248(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  addi      r3, r3, 0x5C
	  bl        0x2DBF9C
	  mr        r0, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  mr        r31, r0
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  li        r31, 0x4

	.loc_0x80:
	  lwz       r0, 0x1C(r30)
	  cmplwi    r0, 0xC8
	  bne-      .loc_0xA0
	  lwz       r3, 0x26C(r29)
	  mr        r5, r31
	  li        r4, 0x840
	  bl        0x322A28
	  b         .loc_0xB8

	.loc_0xA0:
	  cmplwi    r0, 0xC9
	  bne-      .loc_0xB8
	  lwz       r3, 0x26C(r29)
	  mr        r5, r31
	  li        r4, 0x820
	  bl        0x322A0C

	.loc_0xB8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140518
 * Size:	000004
 */
void NaviState::onKeyEvent(Game::Navi*, const SysShape::KeyEvent&) { }

/*
 * --INFO--
 * Address:	8014051C
 * Size:	000080
 */
void Navi::getPosition()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r5, -0x64AC(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x54
	  lwz       r0, 0x1F0(r5)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x54
	  lwz       r3, 0x174(r4)
	  lwz       r3, 0x10(r3)
	  bl        0x2E9350
	  lfs       f1, 0x1C(r3)
	  lfs       f2, 0x2C(r3)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  b         .loc_0x6C

	.loc_0x54:
	  lfs       f0, 0x20C(r4)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x210(r4)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x214(r4)
	  stfs      f0, 0x8(r31)

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014059C
 * Size:	000050
 */
void Navi::onStickStart(Game::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3C
	  lbz       r3, 0x259(r31)
	  addi      r0, r3, 0x1
	  stb       r0, 0x259(r31)

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801405EC
 * Size:	000058
 */
void Navi::onStickEnd(Game::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x44
	  lbz       r3, 0x259(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  subi      r0, r3, 0x1
	  stb       r0, 0x259(r31)

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140644
 * Size:	000654
 */
void Navi::procActionButton()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stmw      r27, 0x8C(r1)
	  mr        r31, r3
	  lbz       r0, 0x26A(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  lwz       r3, -0x6D20(r13)
	  lwz       r3, 0xC8(r3)
	  lfs       f28, 0x2C8(r3)
	  b         .loc_0x5C

	.loc_0x50:
	  lwz       r3, -0x6D20(r13)
	  lwz       r3, 0xC8(r3)
	  lfs       f28, 0x2A0(r3)

	.loc_0x5C:
	  lwz       r3, -0x6B90(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  addi      r3, r3, 0x30

	.loc_0x6C:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x5A4
	  fmuls     f28, f28, f28
	  cmplwi    r0, 0
	  stw       r4, 0x38(r1)
	  li        r30, 0
	  stw       r0, 0x44(r1)
	  stw       r0, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  bne-      .loc_0xB0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x2C8

	.loc_0xB0:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x11C

	.loc_0xC8:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C8
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x11C:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xC8
	  b         .loc_0x2C8

	.loc_0x13C:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r1, 0x2C
	  mr        r4, r0
	  lwz       r12, 0x0(r4)
	  mr        r28, r4
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x2C(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x30(r1)
	  lfs       f29, 0x34(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x24(r1)
	  mr        r3, r28
	  lfs       f0, 0x28(r1)
	  fsubs     f3, f30, f1
	  lfs       f1, 0x20(r1)
	  fsubs     f0, f29, f0
	  fsubs     f2, f31, f1
	  fabs      f1, f3
	  fmuls     f0, f0, f0
	  frsp      f31, f1
	  fmadds    f29, f2, f2, f0
	  bl        0x99C8C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x20C
	  fcmpo     cr0, f29, f28
	  bge-      .loc_0x20C
	  lfs       f0, -0x5FF0(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x20C
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x204
	  lhz       r0, 0x2DC(r31)
	  lhz       r3, 0x1F4(r28)
	  subfic    r0, r0, 0x1
	  cmpw      r3, r0
	  bne-      .loc_0x20C

	.loc_0x204:
	  fmr       f28, f29
	  mr        r30, r28

	.loc_0x20C:
	  lwz       r0, 0x44(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x238
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x2C8

	.loc_0x238:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x2AC

	.loc_0x258:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2C8
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x2AC:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x258

	.loc_0x2C8:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x3C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x13C
	  cmplwi    r30, 0
	  beq-      .loc_0x61C
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x7C(r1)
	  mr        r4, r30
	  addi      r5, r1, 0x64
	  bl        0x3AC
	  lwz       r3, 0x270(r31)
	  mr        r4, r31
	  addi      r6, r1, 0x64
	  li        r5, 0x9
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6D20(r13)
	  lhz       r0, 0x2DC(r31)
	  lwz       r12, 0x0(r3)
	  subfic    r4, r0, 0x1
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  beq-      .loc_0x614
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x614
	  mr        r3, r29
	  bl        0xA98
	  cmpwi     r3, 0x1
	  bne-      .loc_0x614
	  lwz       r3, -0x6D20(r13)
	  li        r28, 0
	  lwz       r0, 0x44(r1)
	  lwz       r3, 0xC8(r3)
	  cmplwi    r0, 0
	  lfs       f0, 0x2C8(r3)
	  fmuls     f28, f0, f0
	  bne-      .loc_0x3B0
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x5AC

	.loc_0x3B0:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x420

	.loc_0x3CC:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5AC
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x420:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x3CC
	  b         .loc_0x5AC

	.loc_0x440:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  cmplw     r27, r30
	  beq-      .loc_0x4F0
	  mr        r4, r3
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lfs       f29, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x18(r1)
	  lfs       f31, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  mr        r3, r27
	  lfs       f0, 0x10(r1)
	  fsubs     f3, f30, f1
	  lfs       f1, 0x8(r1)
	  fsubs     f0, f31, f0
	  fsubs     f2, f29, f1
	  fabs      f1, f3
	  fmuls     f0, f0, f0
	  frsp      f31, f1
	  fmadds    f29, f2, f2, f0
	  bl        0x99984
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4F0
	  fcmpo     cr0, f29, f28
	  bge-      .loc_0x4F0
	  lfs       f0, -0x5FF0(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x4F0
	  fmr       f28, f29
	  mr        r28, r27

	.loc_0x4F0:
	  lwz       r0, 0x44(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x51C
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x5AC

	.loc_0x51C:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x590

	.loc_0x53C:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5AC
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x590:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x53C

	.loc_0x5AC:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x3C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x440
	  cmplwi    r28, 0
	  beq-      .loc_0x614
	  li        r0, 0
	  mr        r3, r29
	  stb       r0, 0x60(r1)
	  mr        r4, r28
	  addi      r5, r1, 0x48
	  bl        0xC8
	  li        r0, 0x1
	  mr        r4, r29
	  stb       r0, 0x60(r1)
	  addi      r6, r1, 0x48
	  li        r5, 0x9
	  lwz       r3, 0x270(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x614:
	  li        r3, 0x1
	  b         .loc_0x620

	.loc_0x61C:
	  li        r3, 0

	.loc_0x620:
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  lmw       r27, 0x8C(r1)
	  lwz       r0, 0xE4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	80140C98
 * Size:	000010
 */
void MonoObjectMgr<Game::Navi>::getAt(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x320
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140CA8
 * Size:	00004C
 */
void Iterator<Game::ItemPikihead::Item>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80140CF4
 * Size:	000138
 */
void Navi::setupNukuAdjustArg(Game::ItemPikihead::Item*,
                              Game::NaviNukuAdjustStateArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  mr        r30, r4
	  mr        r4, r29
	  mr        r31, r5
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x1C(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x8(r1)
	  fsubs     f30, f3, f2
	  lfs       f3, 0x18(r1)
	  fsubs     f29, f1, f0
	  lfs       f0, 0xC(r1)
	  fmr       f2, f30
	  fsubs     f31, f3, f0
	  fmr       f1, f29
	  bl        0x2D0A50
	  bl        0x2D0E40
	  lfs       f2, 0x1FC(r29)
	  bl        0x2D0E64
	  lfs       f2, -0x6014(r2)
	  fmuls     f0, f31, f31
	  fdivs     f1, f1, f2
	  fmadds    f0, f29, f29, f0
	  stfs      f1, 0x0(r31)
	  fmadds    f1, f30, f30, f0
	  bl        0x2D0A50
	  lfs       f2, -0x6008(r2)
	  li        r0, 0x2
	  lfs       f0, -0x5FE8(r2)
	  fdivs     f2, f2, f1
	  lfs       f3, -0x5FEC(r2)
	  fsubs     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f2, f3, f0
	  fmuls     f1, f29, f2
	  fmuls     f0, f31, f2
	  fmuls     f2, f30, f2
	  stfs      f1, 0x4(r31)
	  stfs      f0, 0x8(r31)
	  stfs      f2, 0xC(r31)
	  stw       r0, 0x10(r31)
	  stw       r30, 0x14(r31)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140E2C
 * Size:	000050
 */
void Navi::hasDope(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6C18(r13)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x38
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x25C(r3)
	  neg       r0, r3
	  andc      r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  b         .loc_0x40

	.loc_0x38:
	  lwz       r3, -0x6B70(r13)
	  bl        0xA76EC

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140E7C
 * Size:	000044
 */
void Navi::getDopeCount(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6C18(r13)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2C
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x25C(r3)
	  b         .loc_0x34

	.loc_0x2C:
	  lwz       r3, -0x6B70(r13)
	  bl        0xA752C

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140EC0
 * Size:	00004C
 */
void Navi::useDope(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6C18(r13)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x34
	  rlwinm    r0,r4,2,0,29
	  add       r4, r3, r0
	  lwz       r3, 0x25C(r4)
	  subi      r0, r3, 0x1
	  stw       r0, 0x25C(r4)
	  b         .loc_0x3C

	.loc_0x34:
	  lwz       r3, -0x6B70(r13)
	  bl        0xA780C

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140F0C
 * Size:	0000A0
 */
void Navi::incDopeCount(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r6, -0x6C18(r13)
	  lwz       r0, 0x44(r6)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x80
	  lhz       r5, 0x2DC(r30)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x590
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x61BC
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stw       r31, 0x10(r1)
	  lwz       r3, 0x58(r6)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r31,2,0,29
	  add       r4, r30, r0
	  lwz       r3, 0x25C(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x25C(r4)
	  b         .loc_0x88

	.loc_0x80:
	  lwz       r3, -0x6B70(r13)
	  bl        0xA7544

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
} // namespace Game
