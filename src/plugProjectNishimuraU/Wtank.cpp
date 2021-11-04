#include "types.h"

/*
 * --INFO--
 * Address:	8027C80C
 * Size:	0000A4
 */
void Game::Wtank::Obj::Obj()
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
	  addi      r0, r31, 0x30C
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x30C(r31)
	  stw       r0, 0x310(r31)
	  stw       r0, 0x314(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x6AC4
	  lis       r3, 0x804D
	  addi      r0, r31, 0x30C
	  subi      r5, r3, 0x7F6C
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x328
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	8027C8B0
 * Size:	0001A4
 */
void Game::Wtank::Obj::changeMaterial()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lwz       r3, 0x180(r3)
	  lwz       r4, 0x174(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r29, 0x8(r4)
	  lwz       r12, 0xE0(r12)
	  lwz       r30, 0x4(r29)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x174(r27)
	  lis       r3, 0x8051
	  lbz       r0, 0x0(r31)
	  subi      r27, r3, 0xDD0
	  lwz       r3, 0x8(r4)
	  li        r28, 0
	  lwz       r3, 0x4(r3)
	  lwz       r4, 0x6C(r3)
	  lwz       r3, 0x4(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r31)
	  stb       r0, 0x1(r3)
	  lhz       r0, 0x2(r31)
	  sth       r0, 0x2(r3)
	  lhz       r0, 0x4(r31)
	  sth       r0, 0x4(r3)
	  lbz       r0, 0x6(r31)
	  stb       r0, 0x6(r3)
	  lbz       r0, 0x7(r31)
	  stb       r0, 0x7(r3)
	  lbz       r0, 0x8(r31)
	  stb       r0, 0x8(r3)
	  lbz       r0, 0x9(r31)
	  stb       r0, 0x9(r3)
	  lhz       r0, 0xA(r31)
	  sth       r0, 0xA(r3)
	  lwz       r0, 0xC(r31)
	  stw       r0, 0xC(r3)
	  lbz       r0, 0x10(r31)
	  stb       r0, 0x10(r3)
	  lbz       r0, 0x11(r31)
	  stb       r0, 0x11(r3)
	  lbz       r0, 0x12(r31)
	  stb       r0, 0x12(r3)
	  lbz       r0, 0x13(r31)
	  stb       r0, 0x13(r3)
	  lbz       r0, 0x14(r31)
	  stb       r0, 0x14(r3)
	  lbz       r0, 0x15(r31)
	  stb       r0, 0x15(r3)
	  lbz       r0, 0x16(r31)
	  stb       r0, 0x16(r3)
	  lbz       r0, 0x17(r31)
	  stb       r0, 0x17(r3)
	  lbz       r0, 0x18(r31)
	  stb       r0, 0x18(r3)
	  lbz       r0, 0x19(r31)
	  stb       r0, 0x19(r3)
	  lha       r0, 0x1A(r31)
	  sth       r0, 0x1A(r3)
	  lwz       r0, 0x1C(r31)
	  stw       r0, 0x1C(r3)
	  lwz       r3, 0x4(r4)
	  lwz       r0, 0x1C(r3)
	  add       r0, r31, r0
	  sub       r0, r0, r3
	  stw       r0, 0x1C(r3)
	  lwz       r3, 0x4(r4)
	  lwz       r0, 0xC(r3)
	  add       r0, r31, r0
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  b         .loc_0x180

	.loc_0x148:
	  lwz       r4, 0xC0(r29)
	  rlwinm    r3,r28,6,10,25
	  rlwinm    r0,r28,2,14,29
	  add       r4, r4, r3
	  stw       r4, 0x3C(r27)
	  lwz       r3, 0x60(r30)
	  lwz       r4, 0x2C(r4)
	  lwzx      r3, r3, r0
	  lwz       r4, 0x34(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1

	.loc_0x180:
	  lhz       r0, 0x5C(r30)
	  rlwinm    r3,r28,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x148
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027CA54
 * Size:	00019C
 */
void Game::Wtank::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  li        r3, 0x90
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  bl        -0x258BD4
	  mr.       r31, r3
	  beq-      .loc_0x178
	  li        r4, 0
	  li        r5, 0x1B6
	  li        r6, 0x1B7
	  li        r7, 0x1B8
	  li        r8, 0x1B9
	  bl        0x133BC4
	  lis       r3, 0x804E
	  lis       r6, 0x804B
	  addi      r0, r3, 0x6C4C
	  lis       r4, 0x804A
	  stw       r0, 0x0(r31)
	  addi      r0, r4, 0x3358
	  lis       r3, 0x804E
	  lfs       f0, -0x2E40(r2)
	  stw       r0, 0x54(r31)
	  addi      r0, r3, 0x6CE4
	  lis       r3, 0x804E
	  li        r8, 0
	  stw       r0, 0x54(r31)
	  addi      r5, r3, 0x6A8C
	  subi      r7, r6, 0x5808
	  lis       r4, 0x804A
	  stfs      f0, 0x58(r31)
	  subi      r6, r4, 0x1D84
	  addi      r4, r5, 0x14
	  li        r3, 0x1BA
	  stw       r8, 0x5C(r31)
	  li        r0, 0xA
	  addi      r29, r31, 0x60
	  stw       r7, 0x60(r31)
	  stw       r6, 0x64(r31)
	  stw       r5, 0x60(r31)
	  stw       r4, 0x64(r31)
	  stw       r8, 0x68(r31)
	  sth       r3, 0x6C(r31)
	  stw       r8, 0x74(r31)
	  stw       r0, 0x78(r31)
	  lwz       r28, 0x78(r31)
	  mulli     r3, r28, 0xC
	  addi      r3, r3, 0x10
	  bl        -0x258B78
	  lis       r4, 0x8012
	  mr        r7, r28
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  bl        -0x1BB14C
	  lis       r4, 0x804D
	  stw       r3, 0x10(r29)
	  subi      r3, r4, 0x7FAC
	  lis       r4, 0x804B
	  stw       r3, 0x0(r29)
	  addi      r0, r3, 0x14
	  lis       r5, 0x804A
	  lis       r3, 0x804E
	  stw       r0, 0x4(r29)
	  subi      r0, r4, 0x5808
	  addi      r4, r3, 0x698C
	  lis       r3, 0x804E
	  stw       r0, 0x7C(r31)
	  subi      r0, r5, 0x1D84
	  addi      r6, r3, 0x68A8
	  lis       r3, 0x804D
	  stw       r0, 0x80(r31)
	  subi      r3, r3, 0x7FF8
	  addi      r0, r4, 0x14
	  li        r8, 0
	  stw       r4, 0x7C(r31)
	  li        r7, 0x2B2
	  addi      r5, r6, 0x14
	  li        r4, 0x1BB
	  stw       r0, 0x80(r31)
	  addi      r0, r3, 0x14
	  stw       r8, 0x84(r31)
	  sth       r7, 0x88(r31)
	  stb       r8, 0x8A(r31)
	  stw       r6, 0x7C(r31)
	  stw       r5, 0x80(r31)
	  stw       r8, 0x8C(r31)
	  sth       r4, 0x88(r31)
	  stw       r3, 0x7C(r31)
	  stw       r0, 0x80(r31)

	.loc_0x178:
	  stw       r31, 0x308(r30)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027CBF0
 * Size:	00009C
 */
void efx::TTankWatYodare::~TTankWatYodare()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0x7FF8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
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
	  bl        -0x1ECFC0

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x258BB8

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
 * Address:	8027CC8C
 * Size:	000084
 */
void efx::TTankWatHit::~TTankWatHit()
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
	  lis       r3, 0x804D
	  subi      r3, r3, 0x7FAC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x58
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x6A8C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0x1ED044

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x258C3C

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
 * Address:	8027CD10
 * Size:	00006C
 */
void efx::TOneEmitterSimple::~TOneEmitterSimple()
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
	  beq-      .loc_0x50
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x6A8C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0x1ED0B0
	  extsh.    r0, r31
	  ble-      .loc_0x50
	  mr        r3, r30
	  bl        -0x258CA8

	.loc_0x50:
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
 * Address:	8027CD7C
 * Size:	000060
 */
void efx::TParticleCallBack_TankFire::~TParticleCallBack_TankFire()
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
	  lis       r5, 0x804E
	  li        r4, 0
	  addi      r0, r5, 0x6CE4
	  stw       r0, 0x0(r30)
	  bl        -0x1E8D84
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x258D08

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
 * Address:	8027CDDC
 * Size:	000050
 */
void Game::Wtank::Obj::setupEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x2C0(r3)
	  bl        0x1ACAA8
	  lwz       r31, 0x308(r30)
	  mr        r30, r3
	  mr        r4, r30
	  mr        r3, r31
	  bl        0x1338FC
	  stw       r30, 0x8C(r31)
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
 * Address:	8027CE2C
 * Size:	000034
 */
void Game::Wtank::Obj::startEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x308(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
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
 * Address:	8027CE60
 * Size:	000054
 */
void Game::Wtank::Obj::startYodare()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x308(r3)
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x7C
	  li        r4, 0
	  lwz       r12, 0x7C(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027CEB4
 * Size:	000048
 */
void efx::TTankWat::fade()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x13447C
	  lwz       r3, 0x5C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027CEFC
 * Size:	000044
 */
void efx::TOneEmitterSimple::fade()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x8(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x30
	  lwz       r3, -0x65E8(r13)
	  bl        0x13EB8C
	  li        r0, 0
	  stw       r0, 0x8(r31)

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027CF40
 * Size:	000050
 */
void Game::Wtank::Obj::finishEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x308(r3)
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x7C
	  lwz       r12, 0x7C(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027CF90
 * Size:	000050
 */
void Game::Wtank::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x308(r3)
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x7C
	  lwz       r12, 0x7C(r31)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027CFE0
 * Size:	000040
 */
void efx::TTankWat::endDemoDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x134458
	  addi      r3, r31, 0x60
	  lwz       r12, 0x60(r31)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027D020
 * Size:	00001C
 */
void efx::TOneEmitterSimple::endDemoDrawOn()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beqlr-
	  lwz       r0, 0xF4(r3)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0xF4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027D03C
 * Size:	000050
 */
void Game::Wtank::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x308(r3)
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x7C
	  lwz       r12, 0x7C(r31)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027D08C
 * Size:	000040
 */
void efx::TTankWat::startDemoDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x134354
	  addi      r3, r31, 0x60
	  lwz       r12, 0x60(r31)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027D0CC
 * Size:	00001C
 */
void efx::TOneEmitterSimple::startDemoDrawOff()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beqlr-
	  lwz       r0, 0xF4(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0xF4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027D0E8
 * Size:	000060
 */
void Game::Wtank::Obj::interactCreature(Game::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804B
	  mr        r8, r4
	  stw       r0, 0x24(r1)
	  lis       r5, 0x804B
	  subi      r6, r6, 0x5D00
	  addi      r4, r1, 0x8
	  lwz       r7, 0xC0(r3)
	  addi      r0, r5, 0x4830
	  lfs       f0, 0x604(r7)
	  stw       r6, 0x8(r1)
	  stw       r3, 0xC(r1)
	  mr        r3, r8
	  stw       r0, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r12, 0x0(r8)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027D148
 * Size:	00000C
 */
void Game::Wtank::Obj::stopEffectRadius(float)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x308(r3)
	  stfs      f1, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027D154
 * Size:	000044
 */
void Game::Wtank::Obj::createChargeSE()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5963
	  li        r5, 0
	  lwz       r12, 0xC(r12)
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
 * Address:	8027D198
 * Size:	000044
 */
void Game::Wtank::Obj::createDisChargeSE()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x50AA
	  li        r5, 0
	  lwz       r12, 0xC(r12)
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
 * Address:	8027D1DC
 * Size:	000044
 */
void efx::TOneEmitterSimple::forceKill()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x8(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x30
	  lwz       r3, -0x65E8(r13)
	  bl        0x13E880
	  li        r0, 0
	  stw       r0, 0x8(r31)

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027D220
 * Size:	000008
 */
u32 Game::Wtank::Obj::getEnemyTypeID() { return 0x19; }

/*
 * --INFO--
 * Address:	8027D228
 * Size:	000014
 */
void Game::EnemyBase::@780 @12 @viewOnPelletKilled()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x30C
	  b         -0x17691C
	*/
}

/*
 * --INFO--
 * Address:	8027D23C
 * Size:	000014
 */
void Game::EnemyBase::@780 @12 @viewStartCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x30C
	  b         -0x176BA4
	*/
}

/*
 * --INFO--
 * Address:	8027D250
 * Size:	000014
 */
void Game::EnemyBase::@780 @12 @viewStartPreCarryMotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x30C
	  b         -0x176B98
	*/
}

/*
 * --INFO--
 * Address:	8027D264
 * Size:	000014
 */
void Game::EnemyBase::@780 @12 @view_finish_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x30C
	  b         -0x1767FC
	*/
}

/*
 * --INFO--
 * Address:	8027D278
 * Size:	000014
 */
void Game::EnemyBase::@780 @12 @view_start_carrymotion()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x30C
	  b         -0x17683C
	*/
}

/*
 * --INFO--
 * Address:	8027D28C
 * Size:	000014
 */
void Game::EnemyBase::@780 @12 @viewGetShape()
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x30C
	  b         -0x176BFC
	*/
}

/*
 * --INFO--
 * Address:	8027D2A0
 * Size:	000008
 */
void efx::TOneEmitterSimple::@4 @executeAfter(JPABaseEmitter*)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         0x131BD4
	*/
}

/*
 * --INFO--
 * Address:	8027D2A8
 * Size:	000008
 */
void efx::TTankWatHit::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x620
	*/
}

/*
 * --INFO--
 * Address:	8027D2B0
 * Size:	000008
 */
void efx::TTankWatYodare::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x6C4
	*/
}
