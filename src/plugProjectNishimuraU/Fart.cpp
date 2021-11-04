#include "types.h"

/*
 * --INFO--
 * Address:	80285448
 * Size:	000098
 */
void Game::Fart::Obj::Obj()
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
	  addi      r0, r31, 0x2F0
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x2F0(r31)
	  stw       r0, 0x2F4(r31)
	  stw       r0, 0x2F8(r31)

	.loc_0x3C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x27800
	  lis       r3, 0x804D
	  addi      r0, r31, 0x2F0
	  subi      r5, r3, 0x6B00
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r4, r5, 0x1B0
	  addi      r5, r5, 0x320
	  stw       r4, 0x178(r31)
	  lwz       r4, 0x17C(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x17C(r31)
	  sub       r0, r0, r4
	  stw       r0, 0xC(r4)
	  bl        0x5B0
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
 * Address:	802854E0
 * Size:	000070
 */
void Game::Fart::Obj::doUpdateCommon()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1825E0
	  mr        r3, r31
	  bl        0x264
	  mr        r3, r31
	  bl        -0x17E110
	  cmpwi     r3, 0x2
	  blt-      .loc_0x5C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5162
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80285550
 * Size:	0001F0
 */
void Game::Fart::Obj::changeMaterial()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
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
	  lwz       r3, 0x64(r30)
	  subi      r4, r2, 0x2C58
	  bl        -0x25680C
	  lwz       r5, 0x60(r30)
	  rlwinm    r4,r3,2,14,29
	  li        r3, 0xF
	  li        r0, 0xFF
	  lwzx      r6, r5, r4
	  addi      r5, r1, 0x8
	  li        r4, 0
	  stb       r3, 0x8(r1)
	  stb       r3, 0x9(r1)
	  stb       r3, 0xA(r1)
	  stb       r0, 0xB(r1)
	  lwz       r3, 0x2C(r6)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
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
	  b         .loc_0x1CC

	.loc_0x194:
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

	.loc_0x1CC:
	  lhz       r0, 0x5C(r30)
	  rlwinm    r3,r28,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x194
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80285740
 * Size:	000020
 */
void Game::Fart::Obj::doDebugDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x17F8E0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80285760
 * Size:	0001F4
 */
void Game::Fart::Obj::interactFartGasAttack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stfd      f29, 0xA0(r1)
	  psq_st    f29,0xA8(r1),0,0
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  mr        r30, r3
	  lfs       f0, -0x2C50(r2)
	  lfs       f1, 0x2DC(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1C4
	  lwz       r5, -0x6514(r13)
	  addi      r3, r1, 0x30
	  addi      r4, r1, 0x20
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2DC(r30)
	  lwz       r5, 0xC0(r30)
	  lfs       f2, 0x2E4(r30)
	  lfs       f1, 0x5B4(r5)
	  lfs       f0, 0x2E0(r30)
	  fadds     f31, f2, f1
	  stfs      f0, 0x20(r1)
	  fsubs     f30, f2, f1
	  fmuls     f29, f1, f1
	  lfs       f0, 0x2E4(r30)
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0x2E8(r30)
	  stfs      f0, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  bl        -0x5744C
	  li        r0, 0x1
	  addi      r3, r1, 0x50
	  stb       r0, 0x4C(r1)
	  addi      r4, r1, 0x30
	  bl        -0x57420
	  addi      r3, r1, 0x50
	  bl        -0x573AC
	  b         .loc_0x1A8

	.loc_0xB0:
	  addi      r3, r1, 0x50
	  bl        -0x572D0
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x10C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A0

	.loc_0x10C:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  fcmpo     cr0, f0, f31
	  lfs       f3, 0x10(r1)
	  bge-      .loc_0x1A0
	  fcmpo     cr0, f0, f30
	  ble-      .loc_0x1A0
	  lfs       f0, 0x2E8(r30)
	  lfs       f1, 0x2E0(r30)
	  fsubs     f0, f0, f3
	  fsubs     f1, f1, f2
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f29
	  bge-      .loc_0x1A0
	  lwz       r6, 0xC0(r30)
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  mr        r3, r31
	  lfs       f0, 0x604(r6)
	  subi      r5, r5, 0x5D00
	  addi      r0, r4, 0x480C
	  addi      r4, r1, 0x14
	  stw       r5, 0x14(r1)
	  stw       r30, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1A0:
	  addi      r3, r1, 0x50
	  bl        -0x57404

	.loc_0x1A8:
	  addi      r3, r1, 0x50
	  bl        -0x573D8
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xB0
	  addi      r4, r30, 0x2E0
	  li        r3, 0x5164
	  bl        0x1E8794

	.loc_0x1C4:
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  psq_l     f29,0xA8(r1),0,0
	  lfd       f29, 0xA0(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r30, 0x98(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80285954
 * Size:	000120
 */
void Game::Fart::Obj::createItem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x2701C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x108
	  lwz       r0, 0x2C0(r30)
	  li        r31, 0x1
	  li        r4, 0
	  li        r5, 0
	  cmpwi     r0, 0x1
	  beq-      .loc_0x68
	  bge-      .loc_0x4C
	  cmpwi     r0, 0
	  bge-      .loc_0x58
	  b         .loc_0xDC

	.loc_0x4C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xDC
	  b         .loc_0xA0

	.loc_0x58:
	  li        r31, 0
	  li        r4, 0
	  li        r5, 0x3
	  b         .loc_0xDC

	.loc_0x68:
	  lwz       r3, -0x6B70(r13)
	  li        r31, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  li        r4, 0x1E
	  bl        -0x9E5F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  li        r4, 0x2
	  li        r5, 0x1
	  b         .loc_0xDC

	.loc_0x94:
	  li        r4, 0
	  li        r5, 0x3
	  b         .loc_0xDC

	.loc_0xA0:
	  lwz       r3, -0x6B70(r13)
	  li        r31, 0
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  li        r4, 0x1E
	  bl        -0x9E628
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xCC
	  li        r4, 0x2
	  li        r5, 0x1
	  b         .loc_0xD4

	.loc_0xCC:
	  li        r4, 0
	  li        r5, 0x3

	.loc_0xD4:
	  lfs       f0, -0x2C4C(r2)
	  stfs      f0, 0x2C4(r30)

	.loc_0xDC:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0xF0
	  mr        r3, r30
	  bl        -0x26F58
	  b         .loc_0xFC

	.loc_0xF0:
	  mr        r3, r30
	  rlwinm    r4,r4,0,24,31
	  bl        -0x26CD4

	.loc_0xFC:
	  lwz       r3, 0x2C0(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x2C0(r30)

	.loc_0x108:
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
 * Address:	80285A74
 * Size:	0000B8
 */
void Game::Fart::Obj::createEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x14
	  bl        -0x261BE8
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r3)
	  addi      r7, r4, 0x6940
	  lis       r4, 0x804E
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x6D38
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r3)
	  addi      r6, r7, 0x14
	  addi      r5, r31, 0x18C
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r3)
	  sth       r8, 0xC(r3)
	  stb       r9, 0xE(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x4(r3)
	  stw       r5, 0x10(r3)
	  sth       r9, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x98:
	  stw       r3, 0x2EC(r31)
	  lfs       f0, -0x2C50(r2)
	  stfs      f0, 0x2DC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80285B2C
 * Size:	000024
 */
void Game::Fart::Obj::resetFartTimer()
{
	/*
	.loc_0x0:
	  lfs       f0, -0x2C50(r2)
	  stfs      f0, 0x2DC(r3)
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0x2E0(r3)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x2E4(r3)
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x2E8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80285B50
 * Size:	0000A8
 */
void Game::Fart::Obj::startBodyEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x34(r1)
	  subi      r5, r4, 0x5814
	  addi      r4, r1, 0x14
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r8, 0xC0(r3)
	  lis       r3, 0x804B
	  lwz       r7, 0x18C(r31)
	  subi      r0, r3, 0x5D24
	  lwz       r6, 0x190(r31)
	  lwz       r3, 0x194(r31)
	  lfs       f3, 0x934(r8)
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r3, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  stw       r0, 0x14(r1)
	  stfs      f3, 0x24(r1)
	  lwz       r3, 0x2EC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80285BF8
 * Size:	000030
 */
void Game::Fart::Obj::finishBodyEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2EC(r3)
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
 * Address:	80285C28
 * Size:	000204
 */
void Game::Fart::Obj::createFartEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  lis       r4, 0x804B
	  li        r5, 0
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x6A64
	  lis       r4, 0x804E
	  li        r6, 0x1
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x6D24
	  li        r4, 0x2
	  mr        r31, r3
	  sth       r6, 0x18(r1)
	  sth       r4, 0x1A(r1)
	  stw       r5, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lfs       f30, 0x18C(r3)
	  lwz       r12, 0x64(r12)
	  lfs       f31, 0x190(r3)
	  lfs       f29, 0x194(r3)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5814
	  stfs      f30, 0x28(r1)
	  addi      r0, r3, 0x6960
	  addi      r3, r1, 0x14
	  stw       r4, 0x24(r1)
	  addi      r4, r1, 0x24
	  stfs      f31, 0x2C(r1)
	  stfs      f29, 0x30(r1)
	  stw       r0, 0x24(r1)
	  stfs      f1, 0x34(r1)
	  bl        0x12E374
	  lfs       f2, -0x2C48(r2)
	  stfs      f2, 0x2DC(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f4, 0x1FC(r31)
	  lfs       f1, 0x934(r3)
	  lfs       f0, 0x564(r3)
	  fmr       f3, f4
	  fcmpo     cr0, f4, f2
	  fmuls     f29, f1, f0
	  bge-      .loc_0xE8
	  fneg      f3, f4

	.loc_0xE8:
	  lfs       f2, -0x2C44(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x2C48(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f3, f2
	  fcmpo     cr0, f4, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f31, f29, f0
	  bge-      .loc_0x144
	  lfs       f0, -0x2C40(r2)
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f30, f0
	  b         .loc_0x15C

	.loc_0x144:
	  fmuls     f0, f4, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f30, r4, r0

	.loc_0x15C:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  bl        -0x278E4
	  lfs       f2, 0x8(r1)
	  fmuls     f1, f29, f30
	  lfs       f0, -0x2C48(r2)
	  mr        r3, r31
	  stfs      f2, 0x2E0(r31)
	  lfs       f2, 0xC(r1)
	  stfs      f2, 0x2E4(r31)
	  lfs       f2, 0x10(r1)
	  stfs      f2, 0x2E8(r31)
	  lfs       f2, 0x2E0(r31)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x2E0(r31)
	  lfs       f1, 0x2E4(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2E4(r31)
	  lfs       f0, 0x2E8(r31)
	  fsubs     f0, f0, f31
	  stfs      f0, 0x2E8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5960
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80285E2C
 * Size:	000030
 */
void Game::Fart::Obj::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2EC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
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
 * Address:	80285E5C
 * Size:	000030
 */
void Game::Fart::Obj::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x2EC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
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
 * Address:	80285E8C
 * Size:	000044
 */
void Game::Fart::Obj::createPressSESpecial()
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
	  li        r4, 0x5961
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
 * Address:	80285ED0
 * Size:	000008
 */
u32 Game::Fart::Obj::getEnemyTypeID() { return 0xB; }
