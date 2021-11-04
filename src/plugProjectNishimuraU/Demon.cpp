#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8028E394
 * Size:	000090
 */
Demon::Obj::Obj()
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
	  addi      r0, r31, 0x2DC
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2DC(r31)
	  stw       r0, 0x2E0(r31)
	  stw       r0, 0x2E4(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1B814
	  lis       r3, 0x804D
	  addi      r0, r31, 0x2DC
	  subi      r5, r3, 0x5638
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x30C
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
 * Address:	8028E424
 * Size:	0003F0
 */
void Demon::Obj::getAttackableTarget()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stfd      f28, 0x80(r1)
	  psq_st    f28,0x88(r1),0,0
	  stfd      f27, 0x70(r1)
	  psq_st    f27,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  lwz       r4, -0x6514(r13)
	  mr        r31, r3
	  lfs       f2, 0x2D8(r3)
	  lfs       f1, 0x54(r4)
	  lfs       f0, -0x2A30(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2D8(r3)
	  lfs       f1, 0x2D8(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3AC
	  mr        r4, r31
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x4C(r1)
	  lfs       f0, 0x1A0(r31)
	  lwz       r4, 0xC0(r31)
	  fsubs     f2, f31, f0
	  lfs       f30, 0x44(r1)
	  lfs       f1, 0x198(r31)
	  lfs       f0, 0x35C(r4)
	  fsubs     f3, f30, f1
	  fmuls     f1, f2, f2
	  fmuls     f0, f0, f0
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3AC
	  lfs       f2, -0x2A28(r2)
	  lis       r3, 0x804B
	  lfs       f1, 0x424(r4)
	  li        r0, 0
	  lfs       f0, 0x3D4(r4)
	  subi      r4, r3, 0x434C
	  fmuls     f1, f2, f1
	  lfs       f2, -0x2A2C(r2)
	  lwz       r3, -0x6D20(r13)
	  cmplwi    r0, 0
	  fmuls     f28, f0, f0
	  stw       r4, 0x50(r1)
	  fmuls     f29, f2, f1
	  stw       r0, 0x5C(r1)
	  stw       r0, 0x54(r1)
	  stw       r3, 0x58(r1)
	  bne-      .loc_0x10C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x38C

	.loc_0x10C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x178

	.loc_0x124:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x38C
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x178:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x124
	  b         .loc_0x38C

	.loc_0x198:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2D0
	  mr        r3, r30
	  bl        -0xEF068
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2D0
	  mr        r4, r30
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0x25956C
	  bl        0x183558
	  lwz       r12, 0x0(r31)
	  fmr       f27, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f27
	  bl        0x183560
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f29
	  cror      2, 0, 0x2
	  bne-      .loc_0x2D0
	  mr        r4, r30
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x40(r1)
	  lfs       f1, 0x38(r1)
	  fsubs     f0, f31, f0
	  fsubs     f1, f30, f1
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f28
	  bge-      .loc_0x2D0
	  mr        r3, r30
	  b         .loc_0x3B0

	.loc_0x2D0:
	  lwz       r0, 0x5C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2FC
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x38C

	.loc_0x2FC:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x370

	.loc_0x31C:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x38C
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x370:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x31C

	.loc_0x38C:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x54(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x198

	.loc_0x3AC:
	  li        r3, 0

	.loc_0x3B0:
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  psq_l     f28,0x88(r1),0,0
	  lfd       f28, 0x80(r1)
	  psq_l     f27,0x78(r1),0,0
	  lfd       f27, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r0, 0xC4(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028E814
 * Size:	00033C
 */
void Demon::Obj::catchTarget()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  li        r4, 0
	  lis       r5, 0x804B
	  stw       r0, 0x64(r1)
	  subi      r5, r5, 0x434C
	  cmplwi    r4, 0
	  stmw      r27, 0x4C(r1)
	  mr        r30, r3
	  li        r31, 0
	  lwz       r0, -0x6D20(r13)
	  stw       r4, 0x2C(r1)
	  stw       r5, 0x20(r1)
	  stw       r4, 0x24(r1)
	  stw       r0, 0x28(r1)
	  bne-      .loc_0x5C
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x304

	.loc_0x5C:
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0xCC

	.loc_0x78:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x304
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0xCC:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x78
	  b         .loc_0x304

	.loc_0xEC:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x248
	  mr        r3, r28
	  bl        -0xEF3AC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x248
	  li        r27, 0
	  b         .loc_0x23C

	.loc_0x134:
	  mr        r4, r27
	  addi      r3, r30, 0x2C4
	  bl        -0x1561D8
	  mr        r29, r3
	  lwz       r0, 0x64(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x238
	  addi      r4, r1, 0x14
	  bl        -0x1564A0
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0xC(r1)
	  lfs       f3, 0x14(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0x1C(r1)
	  lfs       f0, 0x10(r1)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x2A24(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1C0
	  ble-      .loc_0x1C4
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1C4

	.loc_0x1C0:
	  fmr       f1, f0

	.loc_0x1C4:
	  lfs       f0, 0x1C(r29)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x238
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5D00
	  lis       r4, 0x804B
	  stw       r0, 0x30(r1)
	  addi      r0, r3, 0x4DE0
	  lfs       f0, -0x2A20(r2)
	  lis       r3, 0x804C
	  stw       r0, 0x30(r1)
	  addi      r4, r4, 0x4DBC
	  li        r5, 0
	  subi      r0, r3, 0x79BC
	  stw       r4, 0x30(r1)
	  mr        r3, r28
	  addi      r4, r1, 0x30
	  stw       r30, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  stw       r29, 0x3C(r1)
	  stw       r5, 0x40(r1)
	  stw       r0, 0x30(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1
	  b         .loc_0x248

	.loc_0x238:
	  addi      r27, r27, 0x1

	.loc_0x23C:
	  lwz       r0, 0x2C4(r30)
	  cmpw      r27, r0
	  blt+      .loc_0x134

	.loc_0x248:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x274
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x304

	.loc_0x274:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x2E8

	.loc_0x294:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x304
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x2E8:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x294

	.loc_0x304:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xEC
	  mr        r3, r31
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028EB50
 * Size:	000008
 */
u32 Demon::Obj::getEnemyTypeID() { return 0x20; }

/*
 * --INFO--
 * Address:	8028EB58
 * Size:	000008
 */
void Demon::Obj::getStickPikminNum()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1F4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8028EB60
 * Size:	000008
 */
void Demon::Obj::resetAttackableTimer(float)
{
	/*
	.loc_0x0:
	  stfs      f1, 0x2D8(r3)
	  blr
	*/
}
} // namespace Game
