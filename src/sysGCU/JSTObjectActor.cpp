#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void P2JST::_Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042E960
 * Size:	0000D0
 */
P2JST::ObjectActor::ObjectActor(char const*, Game::MoviePlayer*)
{
	/*
	.loc_0x0:
	  lis       r6, 0x804A
	  lis       r8, 0x804A
	  addi      r0, r6, 0x3680
	  lis       r7, 0x804F
	  stw       r0, 0x0(r3)
	  addi      r0, r8, 0x36C0
	  lis       r6, 0x804F
	  li        r11, 0
	  stw       r0, 0x0(r3)
	  subi      r9, r6, 0x3FDC
	  subi      r0, r7, 0x3F10
	  lis       r6, 0x804F
	  stw       r0, 0x4(r3)
	  subi      r7, r6, 0x3FE8
	  li        r10, -0x1
	  addi      r8, r9, 0x8C
	  stw       r5, 0x8(r3)
	  lwz       r6, 0x0(r7)
	  stw       r4, 0xC(r3)
	  lwz       r5, 0x4(r7)
	  stw       r11, 0x10(r3)
	  lwz       r4, 0x8(r7)
	  stw       r10, 0x14(r3)
	  lwz       r0, -0x64A8(r13)
	  stw       r11, 0x18(r3)
	  lfs       f0, -0x64A4(r13)
	  stw       r11, 0x1C(r3)
	  stw       r9, 0x0(r3)
	  stw       r8, 0x4(r3)
	  stw       r11, 0x20(r3)
	  stw       r11, 0x24(r3)
	  stw       r11, 0x28(r3)
	  stw       r11, 0x2C(r3)
	  stw       r11, 0x30(r3)
	  stw       r6, 0x34(r3)
	  stw       r5, 0x38(r3)
	  stw       r4, 0x3C(r3)
	  stw       r6, 0x40(r3)
	  stw       r5, 0x44(r3)
	  stw       r4, 0x48(r3)
	  stw       r6, 0x4C(r3)
	  stw       r5, 0x50(r3)
	  stw       r4, 0x54(r3)
	  stw       r0, 0x58(r3)
	  stw       r0, 0x5C(r3)
	  stfs      f0, 0x60(r3)
	  stfs      f0, 0x64(r3)
	  stw       r0, 0x68(r3)
	  stw       r0, 0x6C(r3)
	  lwz       r0, -0x64B0(r13)
	  stw       r0, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042EA30
 * Size:	000068
 */
P2JST::ObjectActor::~ObjectActor(void)
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
	  beq-      .loc_0x4C
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r5, r5, 0x3FDC
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x8C
	  stw       r0, 0x4(r30)
	  bl        -0x3960D8
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        -0x40A9C4

	.loc_0x4C:
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
 * Address:	8042EA98
 * Size:	000070
 */
void P2JST::ObjectActor::reset(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804F
	  lfsu      f5, -0x3FE8(r4)
	  lwz       r0, -0x64A8(r13)
	  lfs       f4, 0x4(r4)
	  stfs      f5, 0x34(r3)
	  lfs       f3, 0x8(r4)
	  stfs      f4, 0x38(r3)
	  lfs       f2, -0x64A4(r13)
	  stfs      f3, 0x3C(r3)
	  lfs       f1, 0x2318(r2)
	  stfs      f5, 0x40(r3)
	  lfs       f0, 0x231C(r2)
	  stfs      f4, 0x44(r3)
	  stfs      f3, 0x48(r3)
	  stfs      f5, 0x4C(r3)
	  stfs      f4, 0x50(r3)
	  stfs      f3, 0x54(r3)
	  stw       r0, 0x58(r3)
	  stw       r0, 0x5C(r3)
	  stfs      f2, 0x60(r3)
	  stfs      f2, 0x64(r3)
	  stw       r0, 0x68(r3)
	  stw       r0, 0x6C(r3)
	  stfs      f1, 0x54(r3)
	  stfs      f1, 0x50(r3)
	  stfs      f1, 0x4C(r3)
	  stfs      f0, 0x60(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042EB08
 * Size:	000390
 */
void P2JST::ObjectActor::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stfd      f31, 0x110(r1)
	  psq_st    f31,0x118(r1),0,0
	  stfd      f30, 0x100(r1)
	  psq_st    f30,0x108(r1),0,0
	  stw       r31, 0xFC(r1)
	  stw       r30, 0xF8(r1)
	  mr        r31, r3
	  lwz       r4, 0x58(r3)
	  lwz       r0, 0x68(r3)
	  cmplw     r4, r0
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r3, 0x5C(r31)
	  lwz       r0, 0x6C(r31)
	  cmplw     r3, r0
	  beq-      .loc_0x6C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x6C:
	  addi      r3, r1, 0x98
	  bl        -0x3448D8
	  lfs       f2, 0x38(r31)
	  lfs       f3, 0x3C(r31)
	  lfs       f0, 0x34(r31)
	  lfs       f1, 0x2320(r2)
	  stfs      f0, 0xA4(r1)
	  stfs      f2, 0xB4(r1)
	  stfs      f3, 0xC4(r1)
	  lfs       f0, 0x48(r31)
	  fmuls     f31, f1, f0
	  fmr       f1, f31
	  bl        -0x35F388
	  frsp      f30, f1
	  fmr       f1, f31
	  bl        -0x35F8FC
	  frsp      f3, f1
	  lfs       f0, 0x231C(r2)
	  fneg      f2, f30
	  lfs       f1, 0x2318(r2)
	  stfs      f30, 0xD8(r1)
	  addi      r3, r1, 0x98
	  stfs      f3, 0xC8(r1)
	  addi      r4, r1, 0xC8
	  addi      r5, r1, 0x68
	  stfs      f2, 0xCC(r1)
	  stfs      f3, 0xDC(r1)
	  stfs      f1, 0xF0(r1)
	  stfs      f0, 0xEC(r1)
	  stfs      f0, 0xE0(r1)
	  stfs      f0, 0xE8(r1)
	  stfs      f0, 0xD0(r1)
	  stfs      f0, 0xD4(r1)
	  stfs      f0, 0xE4(r1)
	  stfs      f0, 0xF4(r1)
	  bl        -0x344900
	  lfs       f1, 0x2320(r2)
	  lfs       f0, 0x44(r31)
	  fmuls     f31, f1, f0
	  fmr       f1, f31
	  bl        -0x35F3F8
	  frsp      f30, f1
	  fmr       f1, f31
	  bl        -0x35F96C
	  frsp      f3, f1
	  lfs       f0, 0x231C(r2)
	  fneg      f1, f30
	  lfs       f2, 0x2318(r2)
	  stfs      f30, 0xD0(r1)
	  addi      r3, r1, 0x68
	  stfs      f2, 0xDC(r1)
	  addi      r4, r1, 0xC8
	  addi      r5, r1, 0x98
	  stfs      f3, 0xC8(r1)
	  stfs      f1, 0xE8(r1)
	  stfs      f3, 0xF0(r1)
	  stfs      f0, 0xEC(r1)
	  stfs      f0, 0xE0(r1)
	  stfs      f0, 0xD8(r1)
	  stfs      f0, 0xCC(r1)
	  stfs      f0, 0xD4(r1)
	  stfs      f0, 0xE4(r1)
	  stfs      f0, 0xF4(r1)
	  bl        -0x344970
	  lfs       f1, 0x2320(r2)
	  lfs       f0, 0x40(r31)
	  fmuls     f31, f1, f0
	  fmr       f1, f31
	  bl        -0x35F468
	  frsp      f30, f1
	  fmr       f1, f31
	  bl        -0x35F9DC
	  frsp      f3, f1
	  lfs       f0, 0x231C(r2)
	  fneg      f1, f30
	  lfs       f2, 0x2318(r2)
	  stfs      f30, 0xEC(r1)
	  addi      r3, r1, 0x98
	  stfs      f2, 0xC8(r1)
	  addi      r4, r1, 0xC8
	  addi      r5, r1, 0x68
	  stfs      f3, 0xDC(r1)
	  stfs      f1, 0xE0(r1)
	  stfs      f3, 0xF0(r1)
	  stfs      f0, 0xE8(r1)
	  stfs      f0, 0xD0(r1)
	  stfs      f0, 0xD8(r1)
	  stfs      f0, 0xCC(r1)
	  stfs      f0, 0xD4(r1)
	  stfs      f0, 0xE4(r1)
	  stfs      f0, 0xF4(r1)
	  bl        -0x3449E0
	  lwz       r4, 0x24(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x368
	  addi      r3, r1, 0x68
	  addi      r4, r4, 0x24
	  bl        -0x344A2C
	  lwz       r3, 0x24(r31)
	  lfs       f0, 0x4C(r31)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x50(r31)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x54(r31)
	  stfs      f0, 0x20(r3)
	  lwz       r0, 0x28(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x24C
	  lfs       f1, 0x60(r31)
	  lfs       f0, 0x2318(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x60(r31)
	  lfs       f0, 0x60(r31)
	  lfs       f1, 0x64(r31)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x240
	  stfs      f1, 0x60(r31)

	.loc_0x240:
	  lfs       f0, 0x60(r31)
	  lwz       r3, 0x28(r31)
	  stfs      f0, 0x8(r3)

	.loc_0x24C:
	  bl        0x102F8
	  lwz       r3, -0x64AC(r13)
	  lwz       r30, 0x198(r3)
	  cmplwi    r30, 0
	  beq-      .loc_0x27C
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x9858
	  mr        r3, r30
	  bl        -0x9934
	  mr        r3, r30
	  bl        -0x9BE0

	.loc_0x27C:
	  lfs       f0, 0x34(r31)
	  addi      r3, r1, 0x38
	  lfs       f1, 0x2328(r2)
	  addi      r4, r1, 0x2C
	  stfs      f0, 0x2C(r1)
	  addi      r5, r1, 0x20
	  lfs       f2, 0x2324(r2)
	  lfs       f0, 0x38(r31)
	  stfs      f0, 0x30(r1)
	  lfs       f0, 0x3C(r31)
	  stfs      f0, 0x34(r1)
	  lfs       f0, 0x40(r31)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x44(r31)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0x48(r31)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x28(r1)
	  bl        -0x6558
	  lwz       r4, 0x24(r31)
	  addi      r3, r1, 0x38
	  addi      r4, r4, 0x24
	  bl        -0x344B24
	  lfs       f0, 0x2318(r2)
	  lwz       r4, 0x24(r31)
	  stfs      f0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  lwz       r0, 0x8(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0xC(r1)
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x10(r1)
	  stw       r3, 0x18(r1)
	  lfs       f0, 0x14(r1)
	  stw       r0, 0x1C(r1)
	  lfs       f1, 0x18(r1)
	  stfs      f0, 0x18(r4)
	  lfs       f0, 0x1C(r1)
	  stfs      f1, 0x1C(r4)
	  stfs      f0, 0x20(r4)
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x24(r31)
	  li        r0, 0
	  lwz       r3, 0x84(r3)
	  stw       r0, 0x30(r3)
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x368:
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  lwz       r31, 0xFC(r1)
	  lwz       r0, 0x124(r1)
	  lwz       r30, 0xF8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042EE98
 * Size:	000068
 */
void P2JST::ObjectActor::entry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0x2
	  lwz       r3, 0x58(r3)
	  bl        -0x2DDA68
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  li        r4, 0
	  lwz       r3, 0x58(r3)
	  bl        -0x2DDA8C

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042EF00
 * Size:	0001A4
 */
void P2JST::ObjectActor::setShape(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  subi      r30, r4, 0x5EA8
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r5, -0x64AC(r13)
	  lwz       r0, 0x1F0(r5)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x184
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x1B0(r5)
	  bl        -0xBAF8
	  lwz       r4, 0x58(r31)
	  lwz       r0, -0x64A8(r13)
	  cmplw     r4, r0
	  bne-      .loc_0x64
	  lwz       r3, -0x6514(r13)
	  bl        -0xBAA0
	  li        r3, 0
	  b         .loc_0x184

	.loc_0x64:
	  lwz       r0, 0x68(r31)
	  cmplw     r4, r0
	  bne-      .loc_0x80
	  lwz       r3, -0x6514(r13)
	  bl        -0xBABC
	  li        r3, 0x1
	  b         .loc_0x184

	.loc_0x80:
	  lwz       r3, 0x30(r31)
	  bl        -0x41388C
	  mr.       r28, r3
	  bne-      .loc_0xA0
	  lwz       r3, -0x6514(r13)
	  bl        -0xBADC
	  li        r3, 0
	  b         .loc_0x184

	.loc_0xA0:
	  lwz       r3, 0xC(r31)
	  lis       r29, 0x24
	  addi      r4, r2, 0x232C
	  bl        -0x3648EC
	  cmpwi     r3, 0
	  oris      r4, r29, 0x1000
	  beq-      .loc_0xC0
	  oris      r4, r29, 0x2000

	.loc_0xC0:
	  mr        r3, r28
	  bl        -0x3BF730
	  stw       r3, 0x20(r31)
	  lwz       r0, 0x20(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xEC
	  addi      r3, r30, 0x1C
	  addi      r5, r30, 0x30
	  li        r4, 0x119
	  crclr     6, 0x6
	  bl        -0x4049A8

	.loc_0xEC:
	  lwz       r0, 0x20(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x108
	  lwz       r3, -0x6514(r13)
	  bl        -0xBB44
	  li        r3, 0
	  b         .loc_0x184

	.loc_0x108:
	  li        r3, 0xDC
	  bl        -0x40B168
	  mr.       r29, r3
	  beq-      .loc_0x14C
	  lis       r3, 0x804A
	  lwz       r28, 0x20(r31)
	  addi      r0, r3, 0x19F0
	  stw       r0, 0x0(r29)
	  addi      r3, r29, 0x88
	  bl        -0x3D03E4
	  mr        r3, r29
	  bl        -0x3C8D38
	  mr        r3, r29
	  mr        r4, r28
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x3C8CC8

	.loc_0x14C:
	  stw       r29, 0x24(r31)
	  lwz       r0, 0x24(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x170
	  addi      r3, r30, 0x1C
	  addi      r5, r30, 0x40
	  li        r4, 0x122
	  crclr     6, 0x6
	  bl        -0x404A2C

	.loc_0x170:
	  lwz       r0, 0x58(r31)
	  stw       r0, 0x68(r31)
	  lwz       r3, -0x6514(r13)
	  bl        -0xBBC4
	  li        r3, 0x1

	.loc_0x184:
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
 * Address:	8042F0A4
 * Size:	000128
 */
void P2JST::ObjectActor::setAnim(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r4, -0x64AC(r13)
	  lwz       r0, 0x1F0(r4)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x114
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x1B0(r4)
	  bl        -0xBC88
	  lwz       r4, 0x5C(r31)
	  lwz       r0, -0x64A8(r13)
	  cmplw     r4, r0
	  bne-      .loc_0x50
	  lwz       r3, -0x6514(r13)
	  bl        -0xBC30
	  li        r3, 0
	  b         .loc_0x114

	.loc_0x50:
	  lwz       r0, 0x6C(r31)
	  cmplw     r4, r0
	  bne-      .loc_0x6C
	  lwz       r3, -0x6514(r13)
	  bl        -0xBC4C
	  li        r3, 0x1
	  b         .loc_0x114

	.loc_0x6C:
	  lwz       r3, 0x30(r31)
	  bl        -0x413A1C
	  cmplwi    r3, 0
	  bne-      .loc_0x8C
	  lwz       r3, -0x6514(r13)
	  bl        -0xBC6C
	  li        r3, 0
	  b         .loc_0x114

	.loc_0x8C:
	  bl        -0x3BCB90
	  stw       r3, 0x28(r31)
	  lwz       r4, 0x28(r31)
	  cmplwi    r4, 0
	  bne-      .loc_0xB0
	  lwz       r3, -0x6514(r13)
	  bl        -0xBC90
	  li        r3, 0
	  b         .loc_0x114

	.loc_0xB0:
	  lwz       r3, 0x20(r31)
	  lwz       r0, 0x18(r3)
	  rlwinm    r3,r0,0,28,31
	  bl        -0x3C3A38
	  stw       r3, 0x2C(r31)
	  lis       r0, 0x4330
	  lfd       f1, 0x2330(r2)
	  lwz       r3, 0x20(r31)
	  lwz       r4, 0x2C(r31)
	  lwz       r3, 0x28(r3)
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x0(r3)
	  stw       r4, 0x54(r3)
	  lwz       r3, 0x28(r31)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x64(r31)
	  lwz       r0, 0x5C(r31)
	  stw       r0, 0x6C(r31)
	  lwz       r3, -0x6514(r13)
	  bl        -0xBCF8
	  li        r3, 0x1

	.loc_0x114:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F1CC
 * Size:	000038
 */
void P2JST::ObjectActor::mountArchive(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  stw       r0, 0x14(r1)
	  subi      r3, r3, 0x5E8C
	  li        r4, 0x167
	  subi      r5, r5, 0x5E58
	  crclr     6, 0x6
	  bl        -0x404BB0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F204
 * Size:	000260
 */
void P2JST::ObjectActor::parseUserData_(unsigned long, void const*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  lis       r3, 0x804A
	  stw       r0, 0xB4(r1)
	  stw       r31, 0xAC(r1)
	  subi      r31, r3, 0x5EA8
	  addi      r3, r31, 0x64
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  mr        r29, r5
	  crclr     6, 0x6
	  bl        -0x341B44
	  stw       r29, 0x20(r1)
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x8C
	  bl        -0x426840
	  lbz       r0, 0x8C(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x244
	  lwz       r4, 0x98(r1)
	  li        r3, 0
	  cmplwi    r4, 0
	  beq-      .loc_0x74
	  cmplwi    r0, 0x22
	  bne-      .loc_0x74
	  lwz       r0, 0x9C(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  li        r3, 0x1

	.loc_0x74:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x244
	  stw       r4, 0x60(r1)
	  b         .loc_0xD4

	.loc_0x84:
	  lwz       r8, 0x60(r1)
	  addi      r3, r31, 0x7C
	  lwz       r4, 0x60(r1)
	  sub       r7, r8, r9
	  stw       r9, 0x58(r1)
	  rlwinm    r0,r7,0,0,30
	  lha       r5, 0x0(r4)
	  lhax      r6, r9, r0
	  rlwinm    r4,r7,31,1,31
	  stw       r8, 0x48(r1)
	  stw       r9, 0x44(r1)
	  stw       r9, 0x1C(r1)
	  stw       r8, 0x18(r1)
	  stw       r9, 0x40(r1)
	  stw       r9, 0x3C(r1)
	  crclr     6, 0x6
	  bl        -0x341BDC
	  lwz       r3, 0x60(r1)
	  addi      r0, r3, 0x2
	  stw       r0, 0x60(r1)

	.loc_0xD4:
	  lwz       r0, 0x94(r1)
	  lwz       r9, 0x98(r1)
	  rlwinm    r3,r0,1,0,30
	  lwz       r0, 0x60(r1)
	  add       r3, r9, r3
	  cmplw     r0, r3
	  stw       r3, 0x54(r1)
	  stw       r3, 0x38(r1)
	  stw       r0, 0x34(r1)
	  bne+      .loc_0x84
	  lwz       r0, 0x60(r1)
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x78
	  stw       r0, 0x14(r1)
	  bl        -0x426910
	  lbz       r0, 0x78(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x244
	  lwz       r4, 0x84(r1)
	  li        r3, 0
	  cmplwi    r4, 0
	  beq-      .loc_0x144
	  cmplwi    r0, 0x51
	  bne-      .loc_0x144
	  lwz       r0, 0x88(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x144
	  li        r3, 0x1

	.loc_0x144:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x244
	  stw       r4, 0x5C(r1)
	  b         .loc_0x19C

	.loc_0x154:
	  lwz       r7, 0x5C(r1)
	  addi      r3, r31, 0x8C
	  lwz       r5, 0x5C(r1)
	  sub       r4, r7, r8
	  stw       r8, 0x50(r1)
	  lbz       r5, 0x0(r5)
	  lbzx      r0, r8, r4
	  stw       r8, 0x10(r1)
	  extsb     r5, r5
	  extsb     r6, r0
	  stw       r7, 0xC(r1)
	  stw       r8, 0x30(r1)
	  stw       r8, 0x2C(r1)
	  crclr     6, 0x6
	  bl        -0x341CA4
	  lwz       r3, 0x5C(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x5C(r1)

	.loc_0x19C:
	  lwz       r8, 0x84(r1)
	  lwz       r3, 0x80(r1)
	  lwz       r0, 0x5C(r1)
	  add       r3, r8, r3
	  cmplw     r0, r3
	  stw       r3, 0x4C(r1)
	  stw       r3, 0x28(r1)
	  stw       r0, 0x24(r1)
	  bne+      .loc_0x154
	  lwz       r0, 0x5C(r1)
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x64
	  stw       r0, 0x8(r1)
	  bl        -0x4269D4
	  lbz       r3, 0x64(r1)
	  cmplwi    r3, 0
	  beq-      .loc_0x244
	  lwz       r4, 0x70(r1)
	  li        r0, 0
	  cmplwi    r4, 0
	  beq-      .loc_0x1FC
	  cmplwi    r3, 0x60
	  bne-      .loc_0x1FC
	  li        r0, 0x1

	.loc_0x1FC:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x244
	  mr        r30, r4
	  li        r29, 0
	  b         .loc_0x238

	.loc_0x210:
	  mr        r4, r29
	  mr        r5, r30
	  addi      r3, r31, 0x9C
	  crclr     6, 0x6
	  bl        -0x341D38
	  mr        r3, r30
	  li        r4, 0
	  addi      r29, r29, 0x1
	  bl        -0x364DE4
	  addi      r30, r3, 0x1

	.loc_0x238:
	  lwz       r0, 0x6C(r1)
	  cmplw     r29, r0
	  blt+      .loc_0x210

	.loc_0x244:
	  lwz       r0, 0xB4(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F464
 * Size:	00006C
 */
void P2JST::ObjectActor::JSGFindNodeID(const(char const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x20(r3)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  cmplwi    r0, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x44
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5E8C
	  li        r4, 0x1AC
	  subi      r5, r5, 0x5DFC
	  crclr     6, 0x6
	  bl        -0x404E64

	.loc_0x44:
	  lwz       r3, 0x20(r30)
	  mr        r4, r31
	  lwz       r3, 0x54(r3)
	  bl        -0x400730
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
 * Address:	8042F4D0
 * Size:	00008C
 */
void P2JST::ObjectActor::JSGGetNodeTransformation(const(unsigned long,
                                                        float (*)[4]))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x24(r3)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  cmplwi    r0, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x4C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5E8C
	  li        r4, 0x1B2
	  subi      r5, r5, 0x5DFC
	  crclr     6, 0x6
	  bl        -0x404ED8

	.loc_0x4C:
	  lwz       r3, 0x24(r29)
	  rlwinm    r0,r30,0,16,31
	  mulli     r0, r0, 0x30
	  mr        r4, r31
	  lwz       r3, 0x84(r3)
	  lwz       r3, 0xC(r3)
	  add       r3, r3, r0
	  bl        -0x34526C
	  lwz       r0, 0x24(r1)
	  li        r3, 0x1
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
 * Address:	8042F55C
 * Size:	000008
 */
void P2JST::ObjectActor::JSGGetName() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F564
 * Size:	000008
 */
void P2JST::ObjectActor::JSGSetFlag(unsigned long a1)
{
	// Generated from stw r4, 0x10(r3)
	_10 = a1;
}

/*
 * --INFO--
 * Address:	8042F56C
 * Size:	000008
 */
void P2JST::ObjectActor::JSGGetFlag() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F574
 * Size:	000038
 */
void P2JST::ObjectActor::JSGSetData(unsigned long, void const*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x14(r3)
	  stw       r5, 0x18(r3)
	  stw       r6, 0x1C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC8(r12)
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
 * Address:	8042F5AC
 * Size:	00001C
 */
void P2JST::ObjectActor::JSGSetTranslation(Vec const&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  lfs       f1, 0x4(r4)
	  stfs      f0, 0x34(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f1, 0x38(r3)
	  stfs      f0, 0x3C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F5C8
 * Size:	00001C
 */
void P2JST::ObjectActor::JSGGetTranslation(const(Vec*))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x34(r3)
	  lfs       f1, 0x38(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x3C(r3)
	  stfs      f1, 0x4(r4)
	  stfs      f0, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F5E4
 * Size:	00001C
 */
void P2JST::ObjectActor::JSGSetRotation(Vec const&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  lfs       f1, 0x4(r4)
	  stfs      f0, 0x40(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f1, 0x44(r3)
	  stfs      f0, 0x48(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F600
 * Size:	00001C
 */
void P2JST::ObjectActor::JSGGetRotation(const(Vec*))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x40(r3)
	  lfs       f1, 0x44(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x48(r3)
	  stfs      f1, 0x4(r4)
	  stfs      f0, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F61C
 * Size:	00001C
 */
void P2JST::ObjectActor::JSGSetScaling(Vec const&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  lfs       f1, 0x4(r4)
	  stfs      f0, 0x4C(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f1, 0x50(r3)
	  stfs      f0, 0x54(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F638
 * Size:	00001C
 */
void P2JST::ObjectActor::JSGGetScaling(const(Vec*))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x4C(r3)
	  lfs       f1, 0x50(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x54(r3)
	  stfs      f1, 0x4(r4)
	  stfs      f0, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F654
 * Size:	000008
 */
void P2JST::ObjectActor::JSGSetShape(unsigned long a1)
{
	// Generated from stw r4, 0x58(r3)
	_58 = a1;
}

/*
 * --INFO--
 * Address:	8042F65C
 * Size:	000008
 */
void P2JST::ObjectActor::JSGGetShape() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F664
 * Size:	000008
 */
void P2JST::ObjectActor::JSGSetAnimation(unsigned long a1)
{
	// Generated from stw r4, 0x5C(r3)
	_5C = a1;
}

/*
 * --INFO--
 * Address:	8042F66C
 * Size:	000008
 */
void P2JST::ObjectActor::JSGGetAnimation() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x5C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F674
 * Size:	000008
 */
void P2JST::ObjectActor::JSGGetAnimationFrameMax() const
{
	/*
	.loc_0x0:
	  lfs       f1, 0x64(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F67C
 * Size:	000004
 */
void P2JST::ObjectActor::JSGSetAnimationFrame(float) { }

/*
 * --INFO--
 * Address:	8042F680
 * Size:	000008
 */
void P2JST::ObjectActor::JSGGetAnimationFrame() const
{
	/*
	.loc_0x0:
	  lfs       f1, 0x60(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F688
 * Size:	000004
 */
void P2JST::ObjectActor::stop(void) { }

/*
 * --INFO--
 * Address:	8042F68C
 * Size:	000004
 */
void P2JST::ObjectActor::start(void) { }

/*
 * --INFO--
 * Address:	8042F690
 * Size:	000004
 */
void P2JST::ObjectBase::parseUserData_(unsigned long, void const*) { }

} // namespace Game

/*
 * --INFO--
 * Address:	8042F694
 * Size:	000028
 */
void __sinit_JSTObjectActor_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x64A8(r13)
	  stfsu     f0, -0x3FE8(r3)
	  stfs      f0, -0x64A4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042F6BC
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectActor::parseUserData_(unsigned long, void const*)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x4BC
	*/
}

/*
 * --INFO--
 * Address:	8042F6C4
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectActor::stop(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x40
	*/
}

/*
 * --INFO--
 * Address:	8042F6CC
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectActor::start(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x44
	*/
}

/*
 * --INFO--
 * Address:	8042F6D4
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectActor::update(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xBD0
	*/
}

/*
 * --INFO--
 * Address:	8042F6DC
 * Size:	000008
 */
void @4 @Game::P2JST::ObjectActor::reset(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xC48
	*/
}
