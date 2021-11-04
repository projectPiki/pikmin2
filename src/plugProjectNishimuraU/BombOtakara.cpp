#include "types.h"
#include "Game/enemyInfo.h"

namespace Game {

/*
 * --INFO--
 * Address:	802F9624
 * Size:	000090
 */
BombOtakara::Obj::Obj()
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
	  addi      r0, r31, 0x2F4
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2F4(r31)
	  stw       r0, 0x2F8(r31)
	  stw       r0, 0x2FC(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x4341C
	  lis       r3, 0x804D
	  addi      r0, r31, 0x2F4
	  addi      r5, r3, 0x5B08
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x324
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
 * Address:	802F96B4
 * Size:	0001A4
 */
void BombOtakara::Obj::changeMaterial()
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
 * Address:	802F9858
 * Size:	0000B4
 */
void BombOtakara::Obj::damageCallBack(Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r5
	  stw       r30, 0x10(r1)
	  mr        r30, r4
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  lwz       r3, 0x230(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  lwz       r0, 0x1E0(r29)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x80
	  lwz       r3, 0x230(r29)
	  fmr       f1, f31
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x278(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x88

	.loc_0x80:
	  lwz       r3, 0x230(r29)
	  bl        0x517F4

	.loc_0x88:
	  li        r3, 0x1
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F990C
 * Size:	00002C
 */
void BombOtakara::Obj::hipdropCallBack(Creature*, float, CollPart*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x278(r12)
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
 * Address:	802F9938
 * Size:	00007C
 */
void BombOtakara::Obj::earthquakeCallBack(Creature*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  mr        r31, r4
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  lwz       r3, 0x230(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  lwz       r3, 0x230(r30)
	  bl        0x5174C

	.loc_0x50:
	  fmr       f1, f31
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x1F35D0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F99B4
 * Size:	000030
 */
void BombOtakara::Obj::bombCallBack(Creature*, Vector3<float>&,
                                          float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x278(r12)
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
 * Address:	802F99E4
 * Size:	00007C
 */
void BombOtakara::Obj::startEscapeSE()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x1070(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f1, 0x2CC(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x58F0
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x106C(r2)
	  stfs      f0, 0x2CC(r31)
	  b         .loc_0x68

	.loc_0x58:
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2CC(r31)

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F9A60
 * Size:	000008
 */
int BombOtakara::Obj::getEnemyTypeID() { return BombOtakara; }

/*
 * --INFO--
 * Address:	802F9A68
 * Size:	000004
 */
void BombOtakara::Obj::interactCreature(Creature*) { }

/*
 * --INFO--
 * Address:	802F9A6C
 * Size:	000004
 */
void BombOtakara::Obj::createEffect() { }

/*
 * --INFO--
 * Address:	802F9A70
 * Size:	000004
 */
void BombOtakara::Obj::setupEffect() { }

/*
 * --INFO--
 * Address:	802F9A74
 * Size:	000004
 */
void BombOtakara::Obj::startChargeEffect() { }

/*
 * --INFO--
 * Address:	802F9A78
 * Size:	000004
 */
void BombOtakara::Obj::finishChargeEffect() { }

/*
 * --INFO--
 * Address:	802F9A7C
 * Size:	000004
 */
void BombOtakara::Obj::createDisChargeEffect() { }

/*
 * --INFO--
 * Address:	802F9A80
 * Size:	000004
 */
void BombOtakara::Obj::effectDrawOn() { }
/*
 * --INFO--
 * Address:	802F9A84
 * Size:	000004
 */
void BombOtakara::Obj::effectDrawOff() { }

/*
 * --INFO--
 * Address:	802F9A88
 * Size:	000004
 */
void BombOtakara::Obj::startDisChargeSE() { }
} // namespace Game
