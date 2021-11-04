#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	801F4CDC
 * Size:	0001E4
 */
void ItemDownFloor::FSM::init(Game::ItemDownFloor::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x5
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x293C
	  li        r3, 0x10
	  bl        -0x1D0E58
	  mr.       r4, r3
	  beq-      .loc_0x68
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x3394
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  lis       r3, 0x804C
	  subi      r6, r6, 0x33C8
	  stw       r7, 0x4(r4)
	  subi      r5, r5, 0x3400
	  subi      r0, r3, 0x3AC0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x68:
	  mr        r3, r31
	  bl        0x29E8
	  li        r3, 0x14
	  bl        -0x1D0EAC
	  mr.       r4, r3
	  beq-      .loc_0xC0
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x3394
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x33C8
	  subi      r5, r5, 0x3400
	  subi      r0, r3, 0x3AF8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC0:
	  mr        r3, r31
	  bl        0x2990
	  li        r3, 0x10
	  bl        -0x1D0F04
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x3394
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x33C8
	  subi      r5, r5, 0x3400
	  subi      r0, r3, 0x3B30
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  mr        r3, r31
	  bl        0x2938
	  li        r3, 0x10
	  bl        -0x1D0F5C
	  mr.       r4, r3
	  beq-      .loc_0x170
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x3394
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x33C8
	  subi      r5, r5, 0x3400
	  subi      r0, r3, 0x3B68
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x170:
	  mr        r3, r31
	  bl        0x28E0
	  li        r3, 0x10
	  bl        -0x1D0FB4
	  mr.       r4, r3
	  beq-      .loc_0x1C8
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  subi      r0, r3, 0x3394
	  lis       r5, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  subi      r6, r6, 0x33C8
	  subi      r5, r5, 0x3400
	  subi      r0, r3, 0x3438
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1C8:
	  mr        r3, r31
	  bl        0x2888
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
ItemDownFloor::Item::Item(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F4EC0
 * Size:	000048
 */
void ItemDownFloor::Item::constructor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x84
	  bl        -0x1D1034
	  mr.       r0, r3
	  beq-      .loc_0x30
	  mr        r4, r31
	  bl        0x26C738
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, 0x17C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F4F08
 * Size:	0000FC
 */
void ItemDownFloor::Item::onInit(Game::CreatureInitArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r4, r30
	  stw       r0, 0x1F8(r3)
	  lwz       r3, -0x6B20(r13)
	  bl        0x1554
	  lwz       r0, 0x174(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x181C
	  li        r4, 0xDB
	  addi      r5, r5, 0x1830
	  crclr     6, 0x6
	  bl        -0x1CA91C

	.loc_0x58:
	  lwz       r3, 0x1D8(r30)
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r31, 0
	  beq-      .loc_0xA4
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x200(r30)
	  b         .loc_0xD8

	.loc_0xA4:
	  bl        -0x12BA0C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x4718(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x4724(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x4720(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x200(r30)

	.loc_0xD8:
	  li        r0, 0
	  stw       r0, 0x1EC(r30)
	  stw       r0, 0x1F0(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F5004
 * Size:	000034
 */
void start__Q24Game41StateMachine<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x1DC(r4)
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
 * Address:	801F5038
 * Size:	0002B4
 */
void ItemDownFloor::Item::initDependency(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  lbz       r0, 0x228(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x29C
	  li        r0, 0
	  stw       r0, 0x218(r31)
	  lwz       r3, -0x6B20(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C
	  addi      r3, r3, 0x30

	.loc_0x3C:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x14(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x78
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x200

	.loc_0x78:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xE4

	.loc_0x90:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x200
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xE4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x90
	  b         .loc_0x200

	.loc_0x104:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  cmplw     r30, r31
	  beq-      .loc_0x144
	  lwz       r4, 0x224(r31)
	  addi      r3, r30, 0x21C
	  li        r5, 0x2A
	  bl        0x21E194
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  stw       r30, 0x218(r31)
	  b         .loc_0x220

	.loc_0x144:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x170
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x200

	.loc_0x170:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1E4

	.loc_0x190:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x200
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1E4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x190

	.loc_0x200:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x104

	.loc_0x220:
	  lwz       r3, 0x218(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x27C
	  lbz       r0, 0x228(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x248
	  li        r0, 0x1
	  stb       r0, 0x228(r31)
	  stb       r0, 0x1FC(r31)
	  b         .loc_0x258

	.loc_0x248:
	  li        r3, 0
	  li        r0, 0x2
	  stb       r3, 0x1FC(r31)
	  stb       r0, 0x228(r31)

	.loc_0x258:
	  lwz       r3, 0x1D8(r31)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x29C

	.loc_0x27C:
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  addi      r5, r4, 0x183C
	  addi      r6, r31, 0x21C
	  addi      r3, r3, 0x181C
	  li        r4, 0x118
	  crclr     6, 0x6
	  bl        -0x1CAC90

	.loc_0x29C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F52EC
 * Size:	000138
 */
void ItemDownFloor::Item::onSetPosition(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f0, -0x4710(r2)
	  stw       r0, 0x44(r1)
	  addi      r5, r1, 0x8
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  addi      r4, r31, 0x19C
	  lfs       f1, 0x200(r3)
	  addi      r3, r31, 0x138
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        0x233568
	  lwz       r4, 0x174(r31)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x10B068
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6B20(r13)
	  mr        r4, r31
	  bl        0x1220
	  lbz       r0, 0x228(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lbz       r0, 0x229(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x124

	.loc_0x88:
	  lfs       f0, 0x19C(r31)
	  li        r0, 0
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x14(r1)
	  lfs       f0, -0x470C(r2)
	  cmplwi    r3, 0
	  lfs       f1, 0x1A0(r31)
	  stfs      f1, 0x18(r1)
	  lfs       f1, 0x1A4(r31)
	  stfs      f1, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  stb       r0, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  beq-      .loc_0x11C
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x11C
	  addi      r4, r1, 0x14
	  bl        -0x823F8
	  stw       r3, 0x214(r31)
	  li        r4, 0
	  lwz       r3, 0x214(r31)
	  bl        -0x82B58
	  lwz       r3, 0x214(r31)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x4C(r3)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x50(r3)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x54(r3)
	  lbz       r0, 0x228(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  lwz       r3, 0x214(r31)
	  lbz       r4, 0x1FC(r31)
	  bl        -0x82B8C
	  b         .loc_0x124

	.loc_0x11C:
	  li        r0, 0
	  stw       r0, 0x214(r31)

	.loc_0x124:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F5424
 * Size:	00001C
 */
void ItemDownFloor::Item::updateBoundSphere(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x19C(r3)
	  stfs      f0, 0x1C4(r3)
	  lfs       f0, 0x1A0(r3)
	  stfs      f0, 0x1C8(r3)
	  lfs       f0, 0x1A4(r3)
	  stfs      f0, 0x1CC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F5440
 * Size:	000044
 */
void ItemDownFloor::Item::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F5484
 * Size:	000004
 */
void ItemDownFloor::State::onKeyEvent(Game::ItemDownFloor::Item*,
                                      SysShape::KeyEvent const&)
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void ItemDownFloor::Item::initMotion(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F5488
 * Size:	000338
 */
void ItemDownFloor::Item::startDamageMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  mr.       r31, r3
	  mr        r5, r31
	  beq-      .loc_0x20
	  addi      r5, r5, 0x178

	.loc_0x20:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x1
	  bl        0x2337D8
	  lhz       r0, 0x204(r31)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x58
	  lwz       r3, 0x17C(r31)
	  li        r4, 0x3859
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x74

	.loc_0x58:
	  lwz       r3, 0x17C(r31)
	  li        r4, 0x3846
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x74:
	  lfs       f1, -0x4708(r2)
	  addi      r4, r1, 0x58
	  lfs       f0, -0x4704(r2)
	  stfs      f1, 0x1D4(r31)
	  lfs       f1, 0x1C4(r31)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x58(r1)
	  lfs       f1, 0x1C8(r31)
	  stfs      f1, 0x5C(r1)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x1CC(r31)
	  stfs      f1, 0x60(r1)
	  lfs       f1, 0x1D0(r31)
	  stfs      f1, 0x64(r1)
	  stfs      f0, 0x5C(r1)
	  bl        -0x91C10
	  cmplwi    r3, 0
	  beq-      .loc_0x1EC
	  lhz       r0, 0x204(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x13C
	  bge-      .loc_0xD8
	  cmpwi     r0, 0
	  bge-      .loc_0xE4
	  b         .loc_0x324

	.loc_0xD8:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x324
	  b         .loc_0x194

	.loc_0xE4:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x48(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x48(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x39
	  li        r6, 0
	  stw       r0, 0x48(r1)
	  subi      r0, r3, 0x38D4
	  addi      r3, r1, 0x48
	  li        r4, 0
	  sth       r7, 0x4C(r1)
	  stw       r6, 0x50(r1)
	  stw       r5, 0x54(r1)
	  stw       r0, 0x48(r1)
	  bl        0x1B9CF8
	  b         .loc_0x324

	.loc_0x13C:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x38(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x38(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x3D
	  li        r6, 0
	  stw       r0, 0x38(r1)
	  subi      r0, r3, 0x38E8
	  addi      r3, r1, 0x38
	  li        r4, 0
	  sth       r7, 0x3C(r1)
	  stw       r6, 0x40(r1)
	  stw       r5, 0x44(r1)
	  stw       r0, 0x38(r1)
	  bl        0x1B9CA0
	  b         .loc_0x324

	.loc_0x194:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x28(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x28(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x41
	  li        r6, 0
	  stw       r0, 0x28(r1)
	  subi      r0, r3, 0x38FC
	  addi      r3, r1, 0x28
	  li        r4, 0
	  sth       r7, 0x2C(r1)
	  stw       r6, 0x30(r1)
	  stw       r5, 0x34(r1)
	  stw       r0, 0x28(r1)
	  bl        0x1B9C48
	  b         .loc_0x324

	.loc_0x1EC:
	  lhz       r0, 0x204(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x26C
	  bge-      .loc_0x208
	  cmpwi     r0, 0
	  bge-      .loc_0x214
	  b         .loc_0x324

	.loc_0x208:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x324
	  b         .loc_0x2C4

	.loc_0x214:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x18(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x37
	  li        r6, 0
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x3910
	  addi      r3, r1, 0x18
	  li        r4, 0
	  sth       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stw       r0, 0x18(r1)
	  bl        0x1B9BC8
	  b         .loc_0x324

	.loc_0x26C:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x3B
	  li        r6, 0
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x3924
	  addi      r3, r1, 0x8
	  li        r4, 0
	  sth       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x8(r1)
	  bl        0x1B9B70
	  b         .loc_0x324

	.loc_0x2C4:
	  lis       r3, 0x804B
	  li        r6, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x68(r1)
	  addi      r0, r3, 0x6A64
	  lis       r4, 0x804E
	  lis       r3, 0x804C
	  stw       r0, 0x68(r1)
	  addi      r0, r4, 0x6A00
	  addi      r5, r31, 0x138
	  li        r4, 0x28C
	  stw       r0, 0x68(r1)
	  subi      r0, r3, 0x3938
	  li        r7, 0x28D
	  addi      r3, r1, 0x68
	  sth       r4, 0x6C(r1)
	  li        r4, 0
	  sth       r7, 0x6E(r1)
	  stw       r6, 0x70(r1)
	  stw       r6, 0x74(r1)
	  stw       r5, 0x78(r1)
	  stw       r0, 0x68(r1)
	  bl        0x1B9BF0

	.loc_0x324:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F57C0
 * Size:	00033C
 */
void ItemDownFloor::Item::startDownMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  mr.       r31, r3
	  mr        r5, r31
	  beq-      .loc_0x20
	  addi      r5, r5, 0x178

	.loc_0x20:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x2
	  bl        0x2334A0
	  lfs       f0, -0x4708(r2)
	  stfs      f0, 0x1D4(r31)
	  lhz       r0, 0x204(r31)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x5C
	  mr        r3, r31
	  li        r4, 0x385A
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x74

	.loc_0x5C:
	  mr        r3, r31
	  li        r4, 0x3803
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x74:
	  lfs       f1, 0x1C4(r31)
	  addi      r4, r1, 0x58
	  lfs       f0, -0x4704(r2)
	  stfs      f1, 0x58(r1)
	  lwz       r3, -0x6CF8(r13)
	  lfs       f1, 0x1C8(r31)
	  stfs      f1, 0x5C(r1)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x1CC(r31)
	  stfs      f1, 0x60(r1)
	  lfs       f1, 0x1D0(r31)
	  stfs      f1, 0x64(r1)
	  stfs      f0, 0x5C(r1)
	  bl        -0x91F40
	  cmplwi    r3, 0
	  beq-      .loc_0x1E4
	  lhz       r0, 0x204(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x134
	  bge-      .loc_0xD0
	  cmpwi     r0, 0
	  bge-      .loc_0xDC
	  b         .loc_0x328

	.loc_0xD0:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x328
	  b         .loc_0x18C

	.loc_0xDC:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x48(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x48(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x3A
	  li        r6, 0
	  stw       r0, 0x48(r1)
	  subi      r0, r3, 0x394C
	  addi      r3, r1, 0x48
	  li        r4, 0
	  sth       r7, 0x4C(r1)
	  stw       r6, 0x50(r1)
	  stw       r5, 0x54(r1)
	  stw       r0, 0x48(r1)
	  bl        0x1B99C8
	  b         .loc_0x328

	.loc_0x134:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x38(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x38(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x3E
	  li        r6, 0
	  stw       r0, 0x38(r1)
	  subi      r0, r3, 0x3960
	  addi      r3, r1, 0x38
	  li        r4, 0
	  sth       r7, 0x3C(r1)
	  stw       r6, 0x40(r1)
	  stw       r5, 0x44(r1)
	  stw       r0, 0x38(r1)
	  bl        0x1B9970
	  b         .loc_0x328

	.loc_0x18C:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x28(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x28(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x42
	  li        r6, 0
	  stw       r0, 0x28(r1)
	  subi      r0, r3, 0x3974
	  addi      r3, r1, 0x28
	  li        r4, 0
	  sth       r7, 0x2C(r1)
	  stw       r6, 0x30(r1)
	  stw       r5, 0x34(r1)
	  stw       r0, 0x28(r1)
	  bl        0x1B9918
	  b         .loc_0x328

	.loc_0x1E4:
	  lhz       r0, 0x204(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x264
	  bge-      .loc_0x200
	  cmpwi     r0, 0
	  bge-      .loc_0x20C
	  b         .loc_0x328

	.loc_0x200:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x328
	  b         .loc_0x2BC

	.loc_0x20C:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x18(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x38
	  li        r6, 0
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x3988
	  addi      r3, r1, 0x18
	  li        r4, 0
	  sth       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stw       r0, 0x18(r1)
	  bl        0x1B9898
	  b         .loc_0x328

	.loc_0x264:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x3C
	  li        r6, 0
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x399C
	  addi      r3, r1, 0x8
	  li        r4, 0
	  sth       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x8(r1)
	  bl        0x1B9840
	  b         .loc_0x328

	.loc_0x2BC:
	  lis       r3, 0x804B
	  li        r6, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x68(r1)
	  addi      r0, r3, 0x6A50
	  lis       r4, 0x804E
	  lis       r3, 0x804C
	  stw       r0, 0x68(r1)
	  addi      r0, r4, 0x69EC
	  addi      r5, r31, 0x138
	  li        r4, 0x289
	  stw       r0, 0x68(r1)
	  subi      r0, r3, 0x39B0
	  li        r8, 0x28A
	  li        r7, 0x28B
	  sth       r4, 0x6C(r1)
	  addi      r3, r1, 0x68
	  li        r4, 0
	  sth       r8, 0x6E(r1)
	  sth       r7, 0x70(r1)
	  stw       r6, 0x74(r1)
	  stw       r6, 0x78(r1)
	  stw       r6, 0x7C(r1)
	  stw       r5, 0x80(r1)
	  stw       r0, 0x68(r1)
	  bl        0x1B99D0

	.loc_0x328:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F5AFC
 * Size:	0002E4
 */
void ItemDownFloor::Item::startUpMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  mr.       r31, r3
	  mr        r5, r31
	  beq-      .loc_0x20
	  addi      r5, r5, 0x178

	.loc_0x20:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x3
	  bl        0x233164
	  lfs       f1, -0x4708(r2)
	  addi      r4, r1, 0x68
	  lfs       f0, -0x4704(r2)
	  stfs      f1, 0x1D4(r31)
	  lfs       f1, 0x1C4(r31)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x68(r1)
	  lfs       f1, 0x1C8(r31)
	  stfs      f1, 0x6C(r1)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x1CC(r31)
	  stfs      f1, 0x70(r1)
	  lfs       f1, 0x1D0(r31)
	  stfs      f1, 0x74(r1)
	  stfs      f0, 0x6C(r1)
	  bl        -0x9223C
	  cmplwi    r3, 0
	  beq-      .loc_0x1A4
	  lhz       r0, 0x204(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xF4
	  bge-      .loc_0x90
	  cmpwi     r0, 0
	  bge-      .loc_0x9C
	  b         .loc_0x2D0

	.loc_0x90:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x2D0
	  b         .loc_0x14C

	.loc_0x9C:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x58(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x58(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x3A
	  li        r6, 0
	  stw       r0, 0x58(r1)
	  subi      r0, r3, 0x394C
	  addi      r3, r1, 0x58
	  li        r4, 0
	  sth       r7, 0x5C(r1)
	  stw       r6, 0x60(r1)
	  stw       r5, 0x64(r1)
	  stw       r0, 0x58(r1)
	  bl        0x1B96CC
	  b         .loc_0x2D0

	.loc_0xF4:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x48(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x48(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x3E
	  li        r6, 0
	  stw       r0, 0x48(r1)
	  subi      r0, r3, 0x3960
	  addi      r3, r1, 0x48
	  li        r4, 0
	  sth       r7, 0x4C(r1)
	  stw       r6, 0x50(r1)
	  stw       r5, 0x54(r1)
	  stw       r0, 0x48(r1)
	  bl        0x1B9674
	  b         .loc_0x2D0

	.loc_0x14C:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x38(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x38(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x42
	  li        r6, 0
	  stw       r0, 0x38(r1)
	  subi      r0, r3, 0x3974
	  addi      r3, r1, 0x38
	  li        r4, 0
	  sth       r7, 0x3C(r1)
	  stw       r6, 0x40(r1)
	  stw       r5, 0x44(r1)
	  stw       r0, 0x38(r1)
	  bl        0x1B961C
	  b         .loc_0x2D0

	.loc_0x1A4:
	  lhz       r0, 0x204(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x224
	  bge-      .loc_0x1C0
	  cmpwi     r0, 0
	  bge-      .loc_0x1CC
	  b         .loc_0x2D0

	.loc_0x1C0:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x2D0
	  b         .loc_0x27C

	.loc_0x1CC:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x28(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x28(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x38
	  li        r6, 0
	  stw       r0, 0x28(r1)
	  subi      r0, r3, 0x3988
	  addi      r3, r1, 0x28
	  li        r4, 0
	  sth       r7, 0x2C(r1)
	  stw       r6, 0x30(r1)
	  stw       r5, 0x34(r1)
	  stw       r0, 0x28(r1)
	  bl        0x1B959C
	  b         .loc_0x2D0

	.loc_0x224:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x18(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x3C
	  li        r6, 0
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x399C
	  addi      r3, r1, 0x18
	  li        r4, 0
	  sth       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stw       r0, 0x18(r1)
	  bl        0x1B9544
	  b         .loc_0x2D0

	.loc_0x27C:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804C
	  addi      r5, r31, 0x138
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x40
	  li        r6, 0
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x39C4
	  addi      r3, r1, 0x8
	  li        r4, 0
	  sth       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x8(r1)
	  bl        0x1B94EC

	.loc_0x2D0:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F5DE0
 * Size:	000004
 */
void ItemDownFloor::Item::changeMaterial(void) { }

/*
 * --INFO--
 * Address:	801F5DE4
 * Size:	000038
 */
void ItemDownFloor::Item::doSave(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x228(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x28
	  lbz       r0, 0x1FC(r3)
	  mr        r3, r4
	  mr        r4, r0
	  bl        0x21F868

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F5E1C
 * Size:	0000F8
 */
void ItemDownFloor::Item::doLoad(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lbz       r0, 0x228(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xE0
	  mr        r3, r4
	  bl        0x21E658
	  rlwinm    r31,r3,0,24,31
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  li        r4, 0x1
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r31, 0
	  beq-      .loc_0xE0
	  addi      r3, r30, 0x1A8
	  li        r4, 0x2
	  li        r5, 0
	  bl        0x232E10
	  lfs       f0, -0x4710(r2)
	  addi      r3, r30, 0x1A8
	  stfs      f0, 0x1D4(r30)
	  bl        0x233078
	  lwz       r3, 0x1E4(r30)
	  li        r4, 0
	  bl        -0x312C0
	  li        r0, 0x1
	  mr        r4, r30
	  stb       r0, 0x1FC(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r3, 0x1D8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F8(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xC0
	  addi      r3, r3, 0x48
	  bl        -0xDAF00
	  li        r0, 0
	  stw       r0, 0x1F8(r30)

	.loc_0xC0:
	  lwz       r3, -0x6BE0(r13)
	  lwz       r4, 0x1E4(r30)
	  bl        -0x3034C
	  lwz       r3, 0x214(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  li        r4, 0x1
	  bl        -0x83684

	.loc_0xE0:
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
 * Address:	801F5F14
 * Size:	0000F8
 */
void ItemDownFloor::Item::doAI(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x228(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  addi      r3, r31, 0x208
	  bl        0x38D08
	  cmpwi     r3, 0x2
	  beq-      .loc_0x34
	  b         .loc_0x80

	.loc_0x34:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0x6C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x181C
	  li        r4, 0x25F
	  addi      r5, r5, 0x1874
	  crclr     6, 0x6
	  bl        -0x1CB93C

	.loc_0x6C:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl

	.loc_0x80:
	  lwz       r3, 0x1F8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  lwz       r0, 0x1EC(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xA8
	  addi      r3, r3, 0x48
	  bl        -0xDAFE0
	  li        r0, 0
	  stw       r0, 0x1F8(r31)

	.loc_0xA8:
	  lwz       r3, 0x1DC(r31)
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xC0
	  lwz       r0, 0x1EC(r31)
	  stw       r0, 0x1F0(r31)

	.loc_0xC0:
	  li        r0, 0
	  mr        r4, r31
	  stw       r0, 0x1EC(r31)
	  stw       r0, 0x1F4(r31)
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
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
 * Address:	801F600C
 * Size:	00023C
 */
void ItemDownFloor::Item::platCallback(Game::PlatEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  lbz       r0, 0x228(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x38
	  lbz       r0, 0x1FC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x220

	.loc_0x38:
	  lwz       r30, 0x10(r29)
	  lwz       r0, 0x1F4(r31)
	  cmplw     r30, r0
	  beq-      .loc_0xD4
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1BC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1EC(r31)
	  add       r0, r0, r3
	  stw       r0, 0x1EC(r31)
	  lwz       r0, 0x10(r29)
	  stw       r0, 0x1F4(r31)
	  b         .loc_0xD4

	.loc_0x90:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD4
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1BC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1EC(r31)
	  add       r0, r0, r3
	  stw       r0, 0x1EC(r31)
	  lwz       r0, 0x10(r29)
	  stw       r0, 0x1F4(r31)

	.loc_0xD4:
	  lbz       r0, 0x228(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1B4
	  lwz       r0, 0x1EC(r31)
	  cmpwi     r0, 0
	  ble-      .loc_0x1B4
	  addi      r3, r31, 0x208
	  bl        0x38AEC
	  cmpwi     r3, 0x2
	  beq-      .loc_0x1B4
	  bge-      .loc_0x10C
	  cmpwi     r3, 0x1
	  bge-      .loc_0x118
	  b         .loc_0x1B4

	.loc_0x10C:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x1B4
	  b         .loc_0x168

	.loc_0x118:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0x150
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x181C
	  li        r4, 0x2DB
	  addi      r5, r5, 0x1874
	  crclr     6, 0x6
	  bl        -0x1CBB18

	.loc_0x150:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1B4

	.loc_0x168:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0x1A0
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x181C
	  li        r4, 0x2E2
	  addi      r5, r5, 0x1874
	  crclr     6, 0x6
	  bl        -0x1CBB68

	.loc_0x1A0:
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B4:
	  lwz       r0, 0x1F8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1DC
	  cmplwi    r31, 0
	  mr        r4, r31
	  beq-      .loc_0x1D0
	  addi      r4, r31, 0x1E0

	.loc_0x1D0:
	  lwz       r3, -0x6DE8(r13)
	  bl        -0xDA008
	  stw       r3, 0x1F8(r31)

	.loc_0x1DC:
	  lwz       r3, 0x1DC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x220
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x220
	  lwz       r3, 0x1EC(r31)
	  lwz       r0, 0x1F0(r31)
	  cmpw      r3, r0
	  ble-      .loc_0x220
	  stw       r3, 0x1F0(r31)
	  mr        r4, r31
	  lwz       r3, 0x1DC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0x220:
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
 * Address:	801F6248
 * Size:	000004
 */
void ItemDownFloor::State::onPlat(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F624C
 * Size:	00005C
 */
void ItemDownFloor::Item::getCarryInfoParam(CarryInfoParam&)
{
	/*
	.loc_0x0:
	  li        r6, 0
	  lfs       f1, -0x4700(r2)
	  stw       r6, 0x0(r4)
	  li        r5, 0x1
	  li        r0, 0x6
	  lfs       f0, 0x19C(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x1A0(r3)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x1A4(r3)
	  stfs      f0, 0xC(r4)
	  lfs       f0, 0x8(r4)
	  fadds     f0, f0, f1
	  stfs      f0, 0x8(r4)
	  stfs      f1, 0x10(r4)
	  stb       r5, 0x14(r4)
	  lwz       r5, 0x1F0(r3)
	  sth       r5, 0x16(r4)
	  lwz       r3, 0x1E8(r3)
	  sth       r3, 0x18(r4)
	  stb       r0, 0x15(r4)
	  stw       r6, 0x1C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F62A8
 * Size:	0001E0
 */
ItemDownFloor::Mgr::Mgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stmw      r27, 0x1C(r1)
	  mr        r31, r3
	  addi      r30, r4, 0x1800
	  beq-      .loc_0x2C
	  addi      r0, r31, 0x8C
	  stw       r0, 0x4(r31)

	.loc_0x2C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x28EBC
	  lis       r3, 0x804C
	  addi      r0, r30, 0x80
	  subi      r3, r3, 0x3A88
	  addi      r4, r30, 0x8C
	  stw       r3, 0x0(r31)
	  addi      r3, r3, 0x74
	  li        r5, 0
	  stw       r3, 0x30(r31)
	  stw       r0, 0x8(r31)
	  lwz       r3, -0x6514(r13)
	  bl        0x22D054
	  addi      r0, r30, 0x9C
	  mr        r3, r31
	  stw       r0, 0x28(r31)
	  li        r4, 0x3
	  bl        -0x29550
	  mr        r3, r31
	  addi      r4, r30, 0xBC
	  bl        -0x2915C
	  mr        r0, r3
	  mr        r3, r31
	  mr        r28, r0
	  subi      r4, r2, 0x46FC
	  bl        -0x29468
	  mr        r3, r31
	  addi      r4, r30, 0xC8
	  li        r5, 0
	  lis       r6, 0x2
	  bl        -0x29400
	  mr        r3, r31
	  addi      r4, r30, 0xDC
	  li        r5, 0x1
	  lis       r6, 0x2
	  bl        -0x29414
	  mr        r3, r31
	  addi      r4, r30, 0xF0
	  li        r5, 0x2
	  lis       r6, 0x2002
	  bl        -0x29428
	  mr        r3, r31
	  mr        r4, r28
	  addi      r5, r30, 0x104
	  bl        -0x2938C
	  li        r3, 0xC
	  bl        -0x1D23E4
	  stw       r3, 0x88(r31)
	  mr        r3, r31
	  mr        r4, r28
	  addi      r5, r30, 0x110
	  bl        -0x29104
	  lwz       r6, 0x88(r31)
	  mr        r4, r28
	  addi      r5, r30, 0x120
	  stw       r3, 0x0(r6)
	  mr        r3, r31
	  bl        -0x2911C
	  lwz       r6, 0x88(r31)
	  mr        r4, r28
	  addi      r5, r30, 0x130
	  stw       r3, 0x4(r6)
	  mr        r3, r31
	  bl        -0x29134
	  lwz       r7, 0x88(r31)
	  li        r4, 0x3
	  li        r5, 0
	  li        r6, 0x1
	  stw       r3, 0x8(r7)
	  addi      r3, r1, 0x8
	  bl        0x226068
	  lwz       r3, 0x88(r31)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x0(r3)
	  bl        -0xC2D0C
	  lwz       r3, 0x88(r31)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0xC2D1C
	  lwz       r3, 0x88(r31)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x8(r3)
	  bl        -0xC2D2C
	  li        r27, 0
	  li        r29, 0

	.loc_0x184:
	  lwz       r3, 0x1C(r31)
	  lis       r4, 0x4
	  lwzx      r3, r3, r29
	  bl        -0x172B60
	  lwz       r3, 0x1C(r31)
	  lwzx      r3, r3, r29
	  bl        -0x172A14
	  addi      r27, r27, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r27, 0x3
	  blt+      .loc_0x184
	  mr        r3, r31
	  mr        r4, r28
	  bl        -0x29210
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x8C
	  bl        0x22CEF8
	  mr        r3, r31
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F6488
 * Size:	0000F0
 */
void ItemDownFloor::Mgr::setupDownFloor(Game::ItemDownFloor::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x1940
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x22CEA4
	  li        r3, 0x14
	  bl        -0x1D261C
	  mr.       r0, r3
	  beq-      .loc_0x64
	  lhz       r0, 0x204(r31)
	  lis       r5, 0x2
	  lwz       r4, 0x1C(r30)
	  li        r6, 0x2
	  rlwinm    r0,r0,2,0,29
	  lwzx      r4, r4, r0
	  bl        0x247CF4
	  mr        r0, r3

	.loc_0x64:
	  stw       r0, 0x174(r31)
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0x18FC04
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0x18FD40
	  lis       r4, 0x8048
	  lwz       r3, -0x6514(r13)
	  addi      r4, r4, 0x1940
	  bl        0x22CE20
	  lwz       r0, 0x20(r30)
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x1B8(r31)
	  bl        0x23272C
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
 * Address:	801F6578
 * Size:	000108
 */
void ItemDownFloor::Mgr::setupPlatform(Game::ItemDownFloor::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x54(r1)
	  addi      r0, r5, 0x194C
	  li        r5, 0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r4
	  mr        r4, r0
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x22CDB0
	  lis       r4, 0x8048
	  lwz       r3, -0x6514(r13)
	  addi      r4, r4, 0x1958
	  li        r5, 0
	  bl        0x22CD9C
	  lwz       r3, 0x174(r30)
	  subi      r4, r2, 0x46F4
	  bl        0x248A18
	  bl        0x2332D0
	  mr.       r31, r3
	  bne-      .loc_0x70
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x10(r3)
	  bl        0x2332BC

	.loc_0x70:
	  lis       r4, 0x646F
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x776E
	  bl        0x21CCB4
	  addi      r3, r1, 0x14
	  bl        -0x30D3C
	  stw       r30, 0x14(r1)
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x8
	  li        r5, 0x5
	  bl        -0x134EF8
	  lwz       r0, 0x10(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x6BE0(r13)
	  stw       r0, 0x20(r1)
	  lhz       r0, 0x204(r30)
	  lwz       r5, 0x88(r29)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r5, r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x28(r1)
	  bl        -0x30D18
	  stw       r3, 0x1E4(r30)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x1958
	  lwz       r3, -0x6514(r13)
	  bl        0x22CD14
	  lis       r4, 0x8048
	  lwz       r3, -0x6514(r13)
	  addi      r4, r4, 0x194C
	  bl        0x22CD04
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F6680
 * Size:	000004
 */
void ItemDownFloor::Mgr::onLoadResources(void) { }

/*
 * --INFO--
 * Address:	801F6684
 * Size:	00017C
 */
void ItemDownFloor::Mgr::birth(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x188C
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x22CCB0
	  li        r3, 0x22C
	  bl        -0x1D2810
	  mr.       r31, r3
	  beq-      .loc_0x144
	  li        r4, 0x40F
	  bl        -0x2A6DC
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x365C
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1D2848
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0x3674
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0x368C
	  subi      r0, r4, 0x3374
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0xA0:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  lis       r4, 0x804C
	  subi      r0, r3, 0x3C28
	  addi      r3, r31, 0x208
	  stw       r0, 0x1E0(r31)
	  subi      r5, r4, 0x38C0
	  addi      r4, r5, 0x1B0
	  stw       r5, 0x0(r31)
	  addi      r0, r5, 0x224
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1E0(r31)
	  bl        0x38460
	  addi      r3, r31, 0x21C
	  bl        0x21CAFC
	  li        r3, 0x8
	  bl        -0x1D28D8
	  mr.       r0, r3
	  beq-      .loc_0x10C
	  bl        -0xC272C
	  mr        r0, r3

	.loc_0x10C:
	  stw       r0, 0x114(r31)
	  lis       r4, 0x6E6F
	  lfs       f0, -0x4728(r2)
	  li        r0, 0
	  addi      r3, r31, 0x21C
	  addi      r4, r4, 0x6E65
	  stfs      f0, 0x1D0(r31)
	  stb       r0, 0x1FC(r31)
	  stb       r0, 0x228(r31)
	  stw       r0, 0x218(r31)
	  bl        0x21CB20
	  li        r0, 0
	  stw       r0, 0x214(r31)
	  stb       r0, 0x229(r31)

	.loc_0x144:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x28FA8
	  lis       r4, 0x8048
	  lwz       r3, -0x6514(r13)
	  addi      r4, r4, 0x188C
	  bl        0x22CB84
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
 * Address:	801F6800
 * Size:	00003C
 */
void ItemDownFloor::Mgr::getCaveName(int)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0
	  lis       r3, 0x8048
	  addi      r5, r3, 0x1800
	  bne-      .loc_0x18
	  addi      r3, r5, 0x80
	  blr

	.loc_0x18:
	  cmpwi     r4, 0x1
	  bne-      .loc_0x28
	  addi      r3, r5, 0x168
	  blr

	.loc_0x28:
	  cmpwi     r4, 0x2
	  li        r3, 0
	  bnelr-
	  addi      r3, r5, 0x174
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F683C
 * Size:	0000B0
 */
void ItemDownFloor::Mgr::getCaveID(char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x1800
	  addi      r3, r31, 0x80
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  bl        -0x12BF50
	  mr        r5, r3
	  mr        r4, r30
	  addi      r3, r31, 0x80
	  bl        -0x12C1F0
	  cmpwi     r3, 0
	  bne-      .loc_0x48
	  li        r3, 0
	  b         .loc_0x98

	.loc_0x48:
	  addi      r3, r31, 0x168
	  bl        -0x12BF78
	  mr        r5, r3
	  mr        r4, r30
	  addi      r3, r31, 0x168
	  bl        -0x12C218
	  cmpwi     r3, 0
	  bne-      .loc_0x70
	  li        r3, 0x1
	  b         .loc_0x98

	.loc_0x70:
	  addi      r3, r31, 0x174
	  bl        -0x12BFA0
	  mr        r5, r3
	  mr        r4, r30
	  addi      r3, r31, 0x174
	  bl        -0x12C240
	  cmpwi     r3, 0
	  li        r3, 0x2
	  beq-      .loc_0x98
	  li        r3, -0x1

	.loc_0x98:
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
 * Address:	801F68EC
 * Size:	000068
 */
void ItemDownFloor::WaitState::init(Game::ItemDownFloor::Item*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lbz       r0, 0x1FC(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x34
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  bl        0x232370
	  b         .loc_0x4C

	.loc_0x34:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x2
	  li        r5, 0
	  bl        0x23235C
	  addi      r3, r31, 0x1A8
	  bl        0x2325CC

	.loc_0x4C:
	  lfs       f0, -0x4710(r2)
	  stfs      f0, 0x1D4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F6954
 * Size:	000060
 */
void ItemDownFloor::WaitState::exec(Game::ItemDownFloor::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x228(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  lbz       r0, 0x1FC(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r5, 0x218(r4)
	  lwz       r6, 0x1F0(r4)
	  lwz       r0, 0x1F0(r5)
	  cmpw      r6, r0
	  ble-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F69B4
 * Size:	000030
 */
void transit__Q24Game37FSMState<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
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
 * Address:	801F69E4
 * Size:	000004
 */
void ItemDownFloor::WaitState::cleanup(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F69E8
 * Size:	000004
 */
void ItemDownFloor::WaitState::onKeyEvent(Game::ItemDownFloor::Item*,
                                          SysShape::KeyEvent const&)
{
}

/*
 * --INFO--
 * Address:	801F69EC
 * Size:	000040
 */
void ItemDownFloor::WaitState::onPlat(Game::ItemDownFloor::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x1FC(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F6A2C
 * Size:	000038
 */
void ItemDownFloor::DamagedState::init(Game::ItemDownFloor::Item*,
                                       Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r3, r4
	  bl        -0x15BC
	  li        r0, 0
	  stb       r0, 0x10(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F6A64
 * Size:	0000C4
 */
void ItemDownFloor::DamagedState::exec(Game::ItemDownFloor::Item*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  lbz       r0, 0x228(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r5, 0x218(r4)
	  lwz       r6, 0x1F0(r4)
	  lwz       r0, 0x1F0(r5)
	  cmpw      r6, r0
	  ble-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB4

	.loc_0x54:
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB4

	.loc_0x70:
	  lwz       r5, 0x1F0(r4)
	  lwz       r0, 0x1E8(r4)
	  cmpw      r5, r0
	  blt-      .loc_0x9C
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB4

	.loc_0x9C:
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB4:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F6B28
 * Size:	000004
 */
void ItemDownFloor::DamagedState::cleanup(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F6B2C
 * Size:	00000C
 */
void ItemDownFloor::DamagedState::onKeyEvent(Game::ItemDownFloor::Item*,
                                             SysShape::KeyEvent const&)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F6B38
 * Size:	000004
 */
void ItemDownFloor::DamagedState::onPlat(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F6B3C
 * Size:	00009C
 */
void ItemDownFloor::DownState::init(Game::ItemDownFloor::Item*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1394
	  lwz       r4, 0x218(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x88
	  lwz       r3, 0x1D8(r4)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x229(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x64
	  lwz       r3, 0x214(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  li        r4, 0x1
	  bl        -0x84328

	.loc_0x64:
	  lwz       r3, 0x218(r31)
	  lbz       r0, 0x229(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lwz       r3, 0x214(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  li        r4, 0
	  bl        -0x8434C

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F6BD8
 * Size:	000004
 */
void ItemDownFloor::DownState::exec(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F6BDC
 * Size:	000004
 */
void ItemDownFloor::DownState::cleanup(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F6BE0
 * Size:	000220
 */
void ItemDownFloor::DownState::onKeyEvent(Game::ItemDownFloor::Item*,
                                          SysShape::KeyEvent const&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x54(r1)
	  li        r0, 0x1
	  stw       r31, 0x4C(r1)
	  addi      r31, r5, 0x1800
	  stw       r30, 0x48(r1)
	  mr        r30, r4
	  stb       r0, 0x1FC(r4)
	  lbz       r0, 0x228(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x1F0
	  addi      r3, r30, 0x208
	  bl        0x38018
	  lwz       r3, 0x17C(r30)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0xA
	  beq-      .loc_0x6C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x74
	  li        r4, 0x44C
	  crclr     6, 0x6
	  bl        -0x1CC608

	.loc_0x6C:
	  lwz       r3, 0x17C(r30)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1E4(r30)
	  li        r4, 0
	  bl        -0x32094
	  lwz       r3, 0x1F8(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  addi      r3, r3, 0x48
	  bl        -0xDBCAC
	  li        r0, 0
	  stw       r0, 0x1F8(r30)

	.loc_0xA8:
	  lwz       r3, -0x6BE0(r13)
	  lwz       r4, 0x1E4(r30)
	  bl        -0x310F8
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x181C
	  li        r5, 0
	  bl        0x141990
	  lwz       r3, 0x214(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xD8
	  li        r4, 0x1
	  bl        -0x84440

	.loc_0xD8:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x30
	  bl        -0xF8E0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF8
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x30
	  bl        -0xF930

	.loc_0xF8:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x27
	  bl        -0xF900
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x208
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x4710(r2)
	  li        r0, 0
	  addi      r4, r31, 0x180
	  mr        r31, r3
	  stw       r4, 0x14(r1)
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  stw       r0, 0x18(r1)
	  stw       r0, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x40(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x44(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r31
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, -0x64AC(r13)
	  stw       r31, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x235C30
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x27
	  bl        -0xFA08
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x7
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x208

	.loc_0x1F0:
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x208:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F6E00
 * Size:	000004
 */
void ItemDownFloor::DownState::onPlat(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F6E04
 * Size:	000024
 */
void ItemDownFloor::UpState::init(Game::ItemDownFloor::Item*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1318
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F6E28
 * Size:	000004
 */
void ItemDownFloor::UpState::exec(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F6E2C
 * Size:	000004
 */
void ItemDownFloor::UpState::cleanup(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F6E30
 * Size:	00003C
 */
void ItemDownFloor::UpState::onKeyEvent(Game::ItemDownFloor::Item*,
                                        SysShape::KeyEvent const&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0x1FC(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	801F6E6C
 * Size:	000004
 */
void ItemDownFloor::UpState::onPlat(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F6E70
 * Size:	00007C
 */
void ItemDownFloor::Mgr::generatorNewItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x18
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x1D2FE0
	  mr.       r31, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r4, 0x804C
	  addi      r0, r3, 0x2624
	  addi      r3, r31, 0xC
	  stw       r0, 0x0(r31)
	  subi      r0, r4, 0x3B74
	  stw       r0, 0x0(r31)
	  bl        0x21C3C4
	  li        r0, 0xA
	  lis       r4, 0x6E6F
	  sth       r0, 0x4(r31)
	  li        r0, 0
	  addi      r3, r31, 0xC
	  addi      r4, r4, 0x6E65
	  sth       r0, 0x6(r31)
	  sth       r0, 0x8(r31)
	  bl        0x21C408

	.loc_0x64:
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
 * Address:	801F6EEC
 * Size:	000104
 */
void ItemDownFloor::Mgr::generatorWrite(Stream&, Game::GenItemParm*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0x1800
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bne-      .loc_0x40
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x74
	  li        r4, 0x4DE
	  crclr     6, 0x6
	  bl        -0x1CC8E8

	.loc_0x40:
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x21D500
	  lha       r4, 0x4(r30)
	  mr        r3, r29
	  bl        0x21E7F0
	  mr        r3, r29
	  addi      r4, r31, 0x18C
	  crclr     6, 0x6
	  bl        0x21D28C
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x21D4D8
	  lhz       r0, 0x6(r30)
	  mr        r3, r29
	  extsh     r4, r0
	  bl        0x21E7C4
	  mr        r3, r29
	  addi      r4, r31, 0x19C
	  crclr     6, 0x6
	  bl        0x21D260
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x21D4AC
	  lha       r0, 0x8(r30)
	  mr        r3, r29
	  rlwinm    r4,r0,0,24,31
	  bl        0x21E6D8
	  mr        r3, r29
	  addi      r4, r31, 0x1A8
	  crclr     6, 0x6
	  bl        0x21D234
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        0x21D480
	  mr        r4, r29
	  addi      r3, r30, 0xC
	  bl        0x21C4A0
	  mr        r3, r29
	  subi      r4, r2, 0x46EC
	  crclr     6, 0x6
	  bl        0x21D20C
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
 * Address:	801F6FF0
 * Size:	0000CC
 */
void ItemDownFloor::Mgr::generatorRead(Stream&, Game::GenItemParm*,
                                       unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bne-      .loc_0x44
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x181C
	  li        r4, 0x4F4
	  addi      r5, r5, 0x1874
	  crclr     6, 0x6
	  bl        -0x1CC9F0

	.loc_0x44:
	  mr        r3, r29
	  bl        0x21D72C
	  lis       r4, 0x3030
	  sth       r3, 0x4(r30)
	  addi      r0, r4, 0x3031
	  cmplw     r31, r0
	  blt-      .loc_0x70
	  mr        r3, r29
	  bl        0x21D710
	  sth       r3, 0x6(r30)
	  b         .loc_0x78

	.loc_0x70:
	  li        r0, 0
	  sth       r0, 0x6(r30)

	.loc_0x78:
	  lis       r3, 0x3030
	  addi      r0, r3, 0x3032
	  cmplw     r31, r0
	  blt-      .loc_0xA8
	  mr        r3, r29
	  bl        0x21D420
	  rlwinm    r0,r3,0,24,31
	  mr        r4, r29
	  sth       r0, 0x8(r30)
	  addi      r3, r30, 0xC
	  bl        0x21C460
	  b         .loc_0xB0

	.loc_0xA8:
	  li        r0, 0
	  sth       r0, 0x8(r30)

	.loc_0xB0:
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
 * Address:	801F70BC
 * Size:	0001E4
 */
void generatorBirth__Q34Game13ItemDownFloor3MgrFR10Vector3f R10Vector3f
PQ24Game11GenItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr.       r29, r6
	  lis       r6, 0x8048
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  addi      r31, r6, 0x1800
	  bne-      .loc_0x40
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x74
	  li        r4, 0x506
	  crclr     6, 0x6
	  bl        -0x1CCAB8

	.loc_0x40:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x8C
	  li        r5, 0
	  bl        0x22C254
	  li        r3, 0x22C
	  bl        -0x1D326C
	  mr.       r30, r3
	  beq-      .loc_0x168
	  li        r4, 0x40F
	  bl        -0x2B138
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x365C
	  li        r3, 0x1C
	  stw       r4, 0x0(r30)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r30)
	  stw       r0, 0x1D8(r30)
	  stw       r0, 0x1DC(r30)
	  bl        -0x1D32A4
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0x3674
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0x368C
	  subi      r0, r4, 0x3374
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0xC4:
	  stw       r3, 0x1D8(r30)
	  mr        r4, r30
	  lwz       r3, 0x1D8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  lis       r4, 0x804C
	  subi      r0, r3, 0x3C28
	  addi      r3, r30, 0x208
	  stw       r0, 0x1E0(r30)
	  subi      r5, r4, 0x38C0
	  addi      r4, r5, 0x1B0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x224
	  stw       r4, 0x178(r30)
	  stw       r0, 0x1E0(r30)
	  bl        0x37A04
	  addi      r3, r30, 0x21C
	  bl        0x21C0A0
	  li        r3, 0x8
	  bl        -0x1D3334
	  mr.       r0, r3
	  beq-      .loc_0x130
	  bl        -0xC3188
	  mr        r0, r3

	.loc_0x130:
	  stw       r0, 0x114(r30)
	  lis       r4, 0x6E6F
	  lfs       f0, -0x4728(r2)
	  li        r0, 0
	  addi      r3, r30, 0x21C
	  addi      r4, r4, 0x6E65
	  stfs      f0, 0x1D0(r30)
	  stb       r0, 0x1FC(r30)
	  stb       r0, 0x228(r30)
	  stw       r0, 0x218(r30)
	  bl        0x21C0C4
	  li        r0, 0
	  stw       r0, 0x214(r30)
	  stb       r0, 0x229(r30)

	.loc_0x168:
	  mr        r3, r26
	  mr        r4, r30
	  bl        -0x29A04
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x8C
	  bl        0x22C12C
	  lha       r0, 0x4(r29)
	  addi      r3, r30, 0x21C
	  stw       r0, 0x1E8(r30)
	  lhz       r0, 0x6(r29)
	  sth       r0, 0x204(r30)
	  lha       r0, 0x8(r29)
	  stb       r0, 0x228(r30)
	  lwz       r4, 0x14(r29)
	  bl        0x21C07C
	  mr        r3, r30
	  li        r4, 0
	  bl        -0xBC2A0
	  lfs       f1, 0x4(r28)
	  bl        0x21A960
	  stfs      f1, 0x200(r30)
	  mr        r3, r30
	  mr        r4, r27
	  li        r5, 0
	  bl        -0xBC0DC
	  mr        r3, r30
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F72A0
 * Size:	000134
 */
ItemDownFloor::Mgr::~Mgr(void)
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
	  beq-      .loc_0x118
	  lis       r3, 0x804C
	  subi      r3, r3, 0x3A88
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x7180
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addic.    r3, r30, 0x6C
	  addi      r4, r4, 0x724C
	  stw       r4, 0x4C(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r0, r4, 0x723C
	  stw       r0, 0x6C(r30)
	  li        r4, 0
	  bl        0x21A268

	.loc_0x84:
	  addic.    r0, r30, 0x4C
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x72CC
	  stw       r3, 0x4C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xD4
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r0, r3, 0x7348
	  stw       r0, 0x4C(r30)
	  beq-      .loc_0xD4
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4C(r30)
	  bl        0x21A218

	.loc_0xD4:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0x108
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x30
	  addi      r0, r3, 0x7348
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x108
	  lis       r4, 0x804B
	  addi      r3, r30, 0x30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        0x21A1E4

	.loc_0x108:
	  extsh.    r0, r31
	  ble-      .loc_0x118
	  mr        r3, r30
	  bl        -0x1D3300

	.loc_0x118:
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
 * Address:	801F73D4
 * Size:	000140
 */
void ItemDownFloor::Mgr::doNew(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x22C
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x1D3544
	  mr.       r31, r3
	  beq-      .loc_0x128
	  li        r4, 0x40F
	  bl        -0x2B410
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x365C
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1D357C
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0x3674
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0x368C
	  subi      r0, r4, 0x3374
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0x84:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  lis       r4, 0x804C
	  subi      r0, r3, 0x3C28
	  addi      r3, r31, 0x208
	  stw       r0, 0x1E0(r31)
	  subi      r5, r4, 0x38C0
	  addi      r4, r5, 0x1B0
	  stw       r5, 0x0(r31)
	  addi      r0, r5, 0x224
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1E0(r31)
	  bl        0x3772C
	  addi      r3, r31, 0x21C
	  bl        0x21BDC8
	  li        r3, 0x8
	  bl        -0x1D360C
	  mr.       r0, r3
	  beq-      .loc_0xF0
	  bl        -0xC3460
	  mr        r0, r3

	.loc_0xF0:
	  stw       r0, 0x114(r31)
	  lis       r4, 0x6E6F
	  lfs       f0, -0x4728(r2)
	  li        r0, 0
	  addi      r3, r31, 0x21C
	  addi      r4, r4, 0x6E65
	  stfs      f0, 0x1D0(r31)
	  stb       r0, 0x1FC(r31)
	  stb       r0, 0x228(r31)
	  stw       r0, 0x218(r31)
	  bl        0x21BDEC
	  li        r0, 0
	  stw       r0, 0x214(r31)
	  stb       r0, 0x229(r31)

	.loc_0x128:
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
 * Address:	801F7514
 * Size:	00000C
 */
void ItemDownFloor::Mgr::generatorGetID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x6477
	  addi      r3, r3, 0x666C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F7520
 * Size:	00000C
 */
void ItemDownFloor::Mgr::generatorLocalVersion(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x3030
	  addi      r3, r3, 0x3032
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F752C
 * Size:	000004
 */
void ItemDownFloor::Item::makeTrMatrix(void) { }

/*
 * --INFO--
 * Address:	801F7530
 * Size:	000008
 */
void ItemDownFloor::Item::getFaceDir(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x200(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F7538
 * Size:	00000C
 */
void ItemDownFloor::Item::getCreatureName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r3, r3, 0x19B8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F7544
 * Size:	000034
 */
void doAI__Q24Game92FSMItem<Game::ItemDownFloor::Item, Game::ItemDownFloor::FSM,
                            Game::ItemDownFloor::State>
Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	801F7578
 * Size:	000004
 */
void ItemDownFloor::DeadState::init(Game::ItemDownFloor::Item*, Game::StateArg*)
{
}

/*
 * --INFO--
 * Address:	801F757C
 * Size:	000004
 */
void ItemDownFloor::DeadState::exec(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F7580
 * Size:	000004
 */
void ItemDownFloor::DeadState::cleanup(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F7584
 * Size:	000004
 */
void ItemDownFloor::DeadState::onPlat(Game::ItemDownFloor::Item*) { }

/*
 * --INFO--
 * Address:	801F7588
 * Size:	000044
 */
void onKeyEvent__Q24Game92FSMItem<Game::ItemDownFloor::Item,
                                  Game::ItemDownFloor::FSM,
                                  Game::ItemDownFloor::State>
FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F75CC
 * Size:	000004
 */
void onDamage__Q24Game38ItemState<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4Itemf(void)
{
}

/*
 * --INFO--
 * Address:	801F75D0
 * Size:	000004
 */
void onKeyEvent__Q24Game38ItemState<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent(void)
{
}

/*
 * --INFO--
 * Address:	801F75D4
 * Size:	000004
 */
void onBounce__Q24Game38ItemState<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle(void)
{
}

/*
 * --INFO--
 * Address:	801F75D8
 * Size:	000004
 */
void onPlatCollision__Q24Game38ItemState<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent(void)
{
}

/*
 * --INFO--
 * Address:	801F75DC
 * Size:	000004
 */
void onCollision__Q24Game38ItemState<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent(void)
{
}

/*
 * --INFO--
 * Address:	801F75E0
 * Size:	000004
 */
void init__Q24Game37FSMState<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg(void)
{
}

/*
 * --INFO--
 * Address:	801F75E4
 * Size:	000004
 */
void exec__Q24Game37FSMState<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4Item(void)
{
}

/*
 * --INFO--
 * Address:	801F75E8
 * Size:	000004
 */
void cleanup__Q24Game37FSMState<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4Item(void)
{
}

/*
 * --INFO--
 * Address:	801F75EC
 * Size:	000004
 */
void resume__Q24Game37FSMState<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4Item(void)
{
}

/*
 * --INFO--
 * Address:	801F75F0
 * Size:	000004
 */
void restart__Q24Game37FSMState<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4Item(void)
{
}

/*
 * --INFO--
 * Address:	801F75F4
 * Size:	000004
 */
void init__Q24Game41StateMachine<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4Item(void)
{
}

/*
 * --INFO--
 * Address:	801F75F8
 * Size:	000038
 */
void exec__Q24Game41StateMachine<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4Item(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801F7630
 * Size:	000064
 */
void create__Q24Game41StateMachine<Game::ItemDownFloor::Item> Fi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0xC(r3)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1D36AC
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1D36BC
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1D36CC
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F7694
 * Size:	00009C
 */
void transit__Q24Game41StateMachine<Game::ItemDownFloor::Item>
FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x1DC(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x1DC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F7730
 * Size:	000084
 */
void registerState__Q24Game41StateMachine<Game::ItemDownFloor::Item>
FPQ24Game37FSMState<Game::ItemDownFloor::Item>(void)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F77B4
 * Size:	000044
 */
void platCallback__Q24Game92FSMItem<Game::ItemDownFloor::Item,
                                    Game::ItemDownFloor::FSM,
                                    Game::ItemDownFloor::State>
FRQ24Game9PlatEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F77F8
 * Size:	000044
 */
void collisionCallback__Q24Game92FSMItem<Game::ItemDownFloor::Item,
                                         Game::ItemDownFloor::FSM,
                                         Game::ItemDownFloor::State>
FRQ24Game9CollEvent(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F783C
 * Size:	000044
 */
void bounceCallback__Q24Game92FSMItem<Game::ItemDownFloor::Item,
                                      Game::ItemDownFloor::FSM,
                                      Game::ItemDownFloor::State>
FPQ23Sys8Triangle(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F7880
 * Size:	000028
 */
void __sinit_itemDownFloor_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6B28(r13)
	  stfsu     f0, -0x3B80(r3)
	  stfs      f0, -0x6B24(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801F78A8
 * Size:	000008
 */
void @376 @onKeyEvent__Q24Game92FSMItem<Game::ItemDownFloor::Item,
                                        Game::ItemDownFloor::FSM,
                                        Game::ItemDownFloor::State>
FRCQ28SysShape8KeyEvent(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x324
	*/
}

/*
 * --INFO--
 * Address:	801F78B0
 * Size:	000008
 */
void @376 @Game::ItemDownFloor::Item::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x2474
	*/
}

/*
 * --INFO--
 * Address:	801F78B8
 * Size:	000008
 */
void @480 @Game::ItemDownFloor::Item::getCarryInfoParam(CarryInfoParam&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1E0
	  b         -0x1670
	*/
}

/*
 * --INFO--
 * Address:	801F78C0
 * Size:	000008
 */
@48 @Game::ItemDownFloor::Mgr::~Mgr(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x624
	*/
}
