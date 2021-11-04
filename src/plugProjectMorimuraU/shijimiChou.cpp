#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80389634
 * Size:	0000A4
 */
void Game::ShijimiChou::Obj::setParameters(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x286A80
	  lwz       r3, 0xC0(r31)
	  lfs       f31, 0x960(r3)
	  lfs       f30, 0x964(r3)
	  bl        -0x2C00C8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  fsubs     f0, f31, f30
	  lfd       f3, 0xBA0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, 0xB98(r2)
	  lfd       f2, 0x8(r1)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmadds    f1, f0, f1, f30
	  stfs      f1, 0x1F8(r31)
	  stfs      f1, 0x168(r31)
	  stfs      f1, 0x16C(r31)
	  stfs      f1, 0x170(r31)
	  lwz       r3, 0x114(r31)
	  lwz       r3, 0x0(r3)
	  bl        -0x2518A4
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803896D8
 * Size:	000020
 */
void birth__Q34Game11ShijimiChou3ObjFR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x286CE4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803896F8
 * Size:	00024C
 */
void Game::ShijimiChou::Obj::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x44(r1)
	  stmw      r21, 0x14(r1)
	  mr        r30, r3
	  addi      r31, r5, 0x3F80
	  bl        -0x287CBC
	  lwz       r0, 0x1E0(r30)
	  addi      r3, r30, 0x2DC
	  rlwinm    r0,r0,0,25,23
	  stw       r0, 0x1E0(r30)
	  lwz       r0, 0x1E0(r30)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0x1E0(r30)
	  lwz       r0, 0x1E0(r30)
	  rlwinm    r0,r0,0,24,22
	  stw       r0, 0x1E0(r30)
	  lwz       r0, 0x1E0(r30)
	  rlwinm    r0,r0,0,20,18
	  stw       r0, 0x1E0(r30)
	  lwz       r4, 0x180(r30)
	  lwz       r4, 0x44(r4)
	  bl        -0x1F3070
	  bl        -0x2C01B8
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0xC(r1)
	  li        r0, 0
	  lfd       f3, 0xBA0(r2)
	  stw       r3, 0x8(r1)
	  lfs       f0, 0xB98(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f1, 0xBA8(r2)
	  fsubs     f2, f2, f3
	  fdivs     f0, f2, f0
	  stfs      f0, 0x2F0(r30)
	  stfs      f1, 0x2F4(r30)
	  stw       r0, 0x2C4(r30)
	  lfs       f0, 0x18C(r30)
	  stfs      f0, 0x304(r30)
	  lfs       f0, 0x190(r30)
	  stfs      f0, 0x308(r30)
	  lfs       f0, 0x194(r30)
	  stfs      f0, 0x30C(r30)
	  stfs      f1, 0x2F8(r30)
	  lfs       f0, 0x1FC(r30)
	  stfs      f0, 0x2FC(r30)
	  stfs      f1, 0x300(r30)
	  stb       r0, 0x320(r30)
	  stfs      f1, 0x324(r30)
	  lfs       f0, 0x190(r30)
	  stfs      f0, 0x330(r30)
	  lfs       f0, 0x18C(r30)
	  stfs      f0, 0x198(r30)
	  lfs       f0, 0x190(r30)
	  stfs      f0, 0x19C(r30)
	  lfs       f0, 0x194(r30)
	  stfs      f0, 0x1A0(r30)
	  stw       r0, 0x2C8(r30)
	  stw       r0, 0x2C0(r30)
	  lwz       r3, 0x2E8(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x110
	  cmplw     r3, r30
	  beq-      .loc_0x110
	  lwz       r0, 0x2C0(r3)
	  stw       r0, 0x2C0(r30)

	.loc_0x110:
	  lwz       r3, 0x1E0(r30)
	  li        r0, 0
	  mr        r4, r30
	  li        r5, 0x1
	  rlwinm    r3,r3,0,26,24
	  stw       r3, 0x1E0(r30)
	  stb       r0, 0x1F3(r30)
	  lwz       r3, -0x6980(r13)
	  bl        -0x147728
	  li        r21, 0xFF
	  subi      r22, r13, 0x66B0
	  li        r23, 0xAF
	  li        r27, 0x5A
	  li        r11, 0x55
	  li        r7, 0x50
	  li        r5, 0x5
	  subi      r6, r13, 0x6694
	  li        r8, 0xA
	  subi      r9, r13, 0x6698
	  li        r10, 0x2D
	  subi      r3, r13, 0x6690
	  li        r0, 0x11
	  li        r24, 0x78
	  subi      r25, r13, 0x66A8
	  li        r26, 0xB4
	  li        r28, 0x1E
	  subi      r29, r13, 0x66A0
	  li        r12, 0xD2
	  sth       r21, -0x66B0(r13)
	  addi      r4, r31, 0xC
	  sth       r21, 0x2(r22)
	  sth       r23, 0x4(r22)
	  sth       r21, -0x66A8(r13)
	  sth       r24, 0x2(r25)
	  sth       r26, 0x4(r25)
	  sth       r27, -0x66A0(r13)
	  sth       r28, 0x2(r29)
	  sth       r12, 0x4(r29)
	  stb       r11, -0x6698(r13)
	  stb       r10, 0x1(r9)
	  stb       r8, 0x2(r9)
	  stb       r7, -0x6694(r13)
	  stb       r8, 0x1(r6)
	  stb       r5, 0x2(r6)
	  stb       r5, -0x6690(r13)
	  stb       r0, 0x1(r3)
	  stb       r5, 0x2(r3)
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r21, 0x4(r3)
	  lwz       r3, 0x64(r21)
	  bl        -0x35AB50
	  lwz       r4, 0x60(r21)
	  rlwinm    r0,r3,2,14,29
	  lwzx      r0, r4, r0
	  stw       r0, 0x2EC(r30)
	  lwz       r0, 0x2EC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x210
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x30
	  li        r4, 0x6B
	  crclr     6, 0x6
	  bl        -0x35F2C4

	.loc_0x210:
	  lwz       r3, 0x2D8(r30)
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x321(r30)
	  lmw       r21, 0x14(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80389944
 * Size:	000250
 */
void Game::ShijimiChou::Obj::__ct(void)
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
	  addi      r0, r31, 0x33C
	  lis       r3, 0x804B
	  stw       r0, 0x17C(r31)
	  subi      r3, r3, 0x5988
	  li        r0, 0
	  stw       r3, 0x33C(r31)
	  stw       r0, 0x340(r31)
	  stw       r0, 0x344(r31)

	.loc_0x40:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x2885EC
	  lis       r3, 0x804E
	  addi      r4, r31, 0x33C
	  addi      r3, r3, 0x4D00
	  li        r0, 0
	  stw       r3, 0x0(r31)
	  addi      r5, r3, 0x1B0
	  addi      r6, r3, 0x2FC
	  addi      r3, r31, 0x2DC
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r4, r4, r5
	  stw       r4, 0xC(r5)
	  stw       r0, 0x2BC(r31)
	  stw       r0, 0x2C0(r31)
	  stw       r0, 0x2C8(r31)
	  stw       r0, 0x2D8(r31)
	  bl        -0x1F3368
	  li        r0, 0
	  li        r3, 0x2C
	  stw       r0, 0x2E8(r31)
	  stw       r0, 0x2EC(r31)
	  stb       r0, 0x320(r31)
	  stw       r0, 0x328(r31)
	  stw       r0, 0x32C(r31)
	  stw       r0, 0x334(r31)
	  stw       r0, 0x338(r31)
	  bl        -0x365B5C
	  mr.       r30, r3
	  beq-      .loc_0x108
	  bl        -0x262098
	  lis       r3, 0x804E
	  lis       r4, 0x804B
	  addi      r0, r3, 0x4BC8
	  lis       r3, 0x804F
	  stw       r0, 0x0(r30)
	  subi      r4, r4, 0x4678
	  subi      r3, r3, 0x4200
	  li        r0, 0
	  stw       r4, 0x10(r30)
	  stw       r3, 0x10(r30)
	  stb       r0, 0x28(r30)
	  stw       r0, 0x1C(r30)
	  stw       r0, 0x14(r30)
	  stb       r0, 0x28(r30)
	  stw       r0, 0x20(r30)

	.loc_0x108:
	  stw       r30, 0x184(r31)
	  li        r3, 0x1C
	  bl        -0x365BB0
	  mr.       r4, r3
	  beq-      .loc_0x13C
	  lis       r5, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r5, 0x680
	  li        r5, -0x1
	  stw       r0, 0x0(r4)
	  addi      r0, r3, 0x4BA4
	  stw       r5, 0x18(r4)
	  stw       r0, 0x0(r4)

	.loc_0x13C:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x14
	  bl        -0x365BF4
	  cmplwi    r3, 0
	  beq-      .loc_0x1D4
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
	  addi      r4, r4, 0x6FF4
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
	  sth       r8, 0xC(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x1D4:
	  stw       r3, 0x334(r31)
	  lwz       r0, 0x334(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x200
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FA0
	  li        r4, 0x8C
	  addi      r5, r5, 0x3FB0
	  crclr     6, 0x6
	  bl        -0x35F500

	.loc_0x200:
	  mr        r3, r31
	  bl        0xE46C8
	  stw       r3, 0x338(r31)
	  lwz       r0, 0x338(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x234
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FA0
	  li        r4, 0x8F
	  addi      r5, r5, 0x3FB0
	  crclr     6, 0x6
	  bl        -0x35F534

	.loc_0x234:
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
 * Address:	80389B94
 * Size:	00004C
 */
void Game::ShijimiChou::Obj::setFSM((Game::ShijimiChou::FSM*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r4, 0x2D8(r3)
	  mr        r4, r31
	  lwz       r3, 0x2D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x2B4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80389BE0
 * Size:	0000AC
 */
void Game::ShijimiChou::Obj::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r3, 0x2D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xBAC(r2)
	  lfs       f1, 0x2F0(r31)
	  lfs       f0, 0xBA8(r2)
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x70
	  lfs       f0, 0xBB0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x94

	.loc_0x70:
	  lfs       f0, 0xBB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x94:
	  stfs      f0, 0x2F4(r31)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80389C8C
 * Size:	000004
 */
void Game::ShijimiChou::Obj::doDirectDraw((Graphics&)) { }

/*
 * --INFO--
 * Address:	80389C90
 * Size:	000020
 */
void Game::ShijimiChou::Obj::doDebugDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x283E30
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80389CB0
 * Size:	000020
 */
void Game::ShijimiChou::Obj::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x286D28
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80389CD0
 * Size:	00004C
 */
void Game::ShijimiChou::Obj::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x2E8(r3)
	  cmplw     r0, r3
	  bne-      .loc_0x38
	  lwz       r4, -0x6C18(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x3C
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x3C
	  bl        -0x2866B4
	  b         .loc_0x3C

	.loc_0x38:
	  bl        -0x2866BC

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80389D1C
 * Size:	0001A0
 */
void Game::ShijimiChou::Obj::doAnimationCullingOff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  li        r0, 0
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  stw       r30, 0x48(r1)
	  lwz       r4, 0x188(r3)
	  stb       r0, 0x24(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x17C(r31)
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  addi      r4, r31, 0x138
	  bl        -0x223FC4
	  lfs       f1, 0x168(r31)
	  addi      r3, r1, 0x14
	  lfs       f2, 0x16C(r31)
	  lfs       f3, 0x170(r31)
	  bl        -0x29F5A4
	  addi      r3, r31, 0x138
	  addi      r4, r1, 0x14
	  mr        r5, r3
	  bl        -0x29FA88
	  lfs       f0, 0x144(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x154(r31)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x164(r31)
	  stfs      f0, 0x10(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xCC

	.loc_0xBC:
	  addi      r3, r31, 0x138
	  addi      r4, r31, 0x18C
	  addi      r5, r31, 0x1A4
	  bl        0x9EAA4

	.loc_0xCC:
	  mr        r3, r31
	  bl        -0x286744
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x15C
	  lwz       r4, 0x174(r31)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x29FB3C
	  lwz       r3, 0xC0(r31)
	  lbz       r0, 0x949(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x140
	  mr        r3, r31
	  bl        -0x282AD8
	  cmpwi     r3, 0x2
	  bne-      .loc_0x140
	  mr        r3, r31
	  bl        -0x282A3C
	  cmpwi     r3, 0x5
	  beq-      .loc_0x140
	  lwz       r4, 0x174(r31)
	  mr        r3, r31
	  lwz       r30, 0x8(r4)
	  bl        -0x284BDC
	  lwz       r3, 0x180(r31)
	  mr        r4, r30
	  bl        -0x1268
	  b         .loc_0x178

	.loc_0x140:
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x178

	.loc_0x15C:
	  lwz       r3, 0x174(r31)
	  li        r0, 0
	  lwz       r3, 0x8(r3)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x28(r3)
	  lwz       r3, 0x0(r3)
	  stw       r0, 0x54(r3)

	.loc_0x178:
	  lwz       r3, 0x114(r31)
	  bl        -0x2543FC
	  mr        r3, r31
	  bl        0x22A4
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
 * Address:	80389EBC
 * Size:	0000B8
 */
void Game::ShijimiChou::Obj::doAnimationCullingOn(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x2274
	  mr        r3, r31
	  bl        -0x286BC0
	  lwz       r3, 0x2E8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  cmplw     r3, r31
	  beq-      .loc_0xA4
	  bl        -0x282AFC
	  cmpwi     r3, 0x4
	  bne-      .loc_0x50
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x24EE14
	  b         .loc_0xA4

	.loc_0x50:
	  lfs       f1, 0x18C(r31)
	  lfs       f0, 0x198(r31)
	  lwz       r3, 0xC0(r31)
	  fsubs     f2, f1, f0
	  lfs       f1, 0xBB8(r2)
	  lfs       f0, 0x35C(r3)
	  fabs      f3, f2
	  fmuls     f2, f1, f0
	  frsp      f0, f3
	  fcmpo     cr0, f0, f2
	  bgt-      .loc_0x98
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x1A0(r31)
	  fsubs     f0, f1, f0
	  fabs      f0, f0
	  frsp      f0, f0
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0xA4

	.loc_0x98:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x24EE6C

	.loc_0xA4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80389F74
 * Size:	000084
 */
void Game::ShijimiChou::Obj::onKill((Game::CreatureKillArg*))
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
	  lwz       r4, 0x2E8(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x3C
	  cmplw     r4, r30
	  beq-      .loc_0x3C
	  lwz       r3, 0x328(r4)
	  subi      r0, r3, 0x1
	  stw       r0, 0x328(r4)

	.loc_0x3C:
	  li        r0, 0
	  stw       r0, 0x2C8(r30)
	  lwz       r3, 0x334(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r30, 0x2DC
	  bl        -0x1F38B0
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x2880F4
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
 * Address:	80389FF8
 * Size:	000438
 */
void Game::ShijimiChou::Obj::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  lfs       f0, 0xBA8(r2)
	  mr        r31, r3
	  fmr       f31, f1
	  stfs      f0, 0x11C(r3)
	  stfs      f0, 0x120(r3)
	  stfs      f0, 0x124(r3)
	  lwz       r0, 0xF0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3A4
	  lbz       r0, 0x320(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x3A4
	  bl        -0x282C50
	  cmpwi     r3, 0x3
	  beq-      .loc_0x3A4
	  lwz       r0, 0x2E8(r31)
	  cmplw     r0, r31
	  bne-      .loc_0x80
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FA0
	  li        r4, 0x176
	  addi      r5, r5, 0x3FB0
	  crclr     6, 0x6
	  bl        -0x35FA34

	.loc_0x80:
	  lis       r5, 0x804B
	  lis       r3, 0x8051
	  addi      r4, r3, 0x41E4
	  lis       r3, 0x804E
	  subi      r5, r5, 0x5814
	  lfs       f2, 0x0(r4)
	  lfs       f1, 0x4(r4)
	  li        r0, 0
	  lfs       f0, 0x8(r4)
	  addi      r3, r3, 0x4CF4
	  stw       r5, 0x50(r1)
	  stfs      f2, 0x54(r1)
	  stfs      f1, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  stw       r3, 0x50(r1)
	  stw       r0, 0x60(r1)
	  lwz       r0, 0x2BC(r31)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xD8
	  li        r0, 0x1
	  stw       r0, 0x60(r1)
	  b         .loc_0xE8

	.loc_0xD8:
	  cmpwi     r0, 0x2
	  bne-      .loc_0xE8
	  li        r0, 0x2
	  stw       r0, 0x60(r1)

	.loc_0xE8:
	  lwz       r3, 0x334(r31)
	  addi      r4, r1, 0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x28(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804B
	  li        r7, 0x18
	  stw       r0, 0x28(r1)
	  addi      r5, r4, 0x4CE0
	  subi      r0, r3, 0x5814
	  li        r6, 0
	  sth       r7, 0x2C(r1)
	  addi      r3, r1, 0x28
	  addi      r4, r1, 0x18
	  stw       r6, 0x30(r1)
	  stw       r5, 0x28(r1)
	  stw       r0, 0x18(r1)
	  lfs       f0, 0x18C(r31)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x190(r31)
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x194(r31)
	  stfs      f0, 0x24(r1)
	  bl        0x24E2C
	  li        r0, 0x1
	  mr        r4, r31
	  stb       r0, 0x320(r31)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r3, 0x2D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x34
	  bl        -0x1EA530
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x34
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x1D8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x378

	.loc_0x1D8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x244

	.loc_0x1F0:
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
	  bne-      .loc_0x378
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x244:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1F0
	  b         .loc_0x378

	.loc_0x264:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2BC
	  lfs       f1, 0x104(r30)
	  lfs       f0, 0xBBC(r2)
	  lfs       f2, 0x108(r30)
	  lfs       f3, 0x10C(r30)
	  fmuls     f1, f1, f0
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0
	  stfs      f1, 0x104(r30)
	  stfs      f2, 0x108(r30)
	  stfs      f3, 0x10C(r30)

	.loc_0x2BC:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2E8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x378

	.loc_0x2E8:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x35C

	.loc_0x308:
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
	  bne-      .loc_0x378
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x35C:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x308

	.loc_0x378:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x264
	  addi      r3, r1, 0x34
	  li        r4, -0x1
	  bl        -0x1EA634

	.loc_0x3A4:
	  fmr       f1, f31
	  mr        r3, r31
	  bl        -0x28594C
	  lwz       r0, 0x1E0(r31)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x418
	  lfs       f1, 0xBC0(r2)
	  lfs       f0, 0x300(r31)
	  lfs       f2, 0x190(r31)
	  fadds     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x3E0
	  lwz       r0, 0xC8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x418

	.loc_0x3E0:
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x404
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x404
	  lfs       f0, 0x330(r31)
	  stfs      f0, 0x308(r31)
	  b         .loc_0x418

	.loc_0x404:
	  mr        r3, r31
	  bl        0x57C
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x24F31C

	.loc_0x418:
	  psq_l     f31,0x78(r1),0,0
	  lwz       r0, 0x84(r1)
	  lfd       f31, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038A430
 * Size:	00026C
 */
void Game::ShijimiChou::Obj::changeMaterial(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  lwz       r0, 0x2BC(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xB8
	  subi      r7, r13, 0x66B0
	  lha       r8, -0x66B0(r13)
	  lha       r6, 0x2(r7)
	  addi      r5, r1, 0x24
	  lha       r3, 0x4(r7)
	  li        r4, 0
	  lha       r0, 0x6(r7)
	  sth       r8, 0x24(r1)
	  sth       r6, 0x26(r1)
	  sth       r3, 0x28(r1)
	  sth       r0, 0x2A(r1)
	  lwz       r3, 0x2EC(r31)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  subi      r7, r13, 0x6698
	  lbz       r8, -0x6698(r13)
	  lbz       r6, 0x1(r7)
	  addi      r5, r1, 0x10
	  lbz       r3, 0x2(r7)
	  li        r4, 0
	  lbz       r0, 0x3(r7)
	  stb       r8, 0x10(r1)
	  stb       r6, 0x11(r1)
	  stb       r3, 0x12(r1)
	  stb       r0, 0x13(r1)
	  lwz       r3, 0x2EC(r31)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D4

	.loc_0xB8:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x14C
	  subi      r7, r13, 0x66A8
	  lha       r8, -0x66A8(r13)
	  lha       r6, 0x2(r7)
	  addi      r5, r1, 0x1C
	  lha       r3, 0x4(r7)
	  li        r4, 0
	  lha       r0, 0x6(r7)
	  sth       r8, 0x1C(r1)
	  sth       r6, 0x1E(r1)
	  sth       r3, 0x20(r1)
	  sth       r0, 0x22(r1)
	  lwz       r3, 0x2EC(r31)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  subi      r7, r13, 0x6694
	  lbz       r8, -0x6694(r13)
	  lbz       r6, 0x1(r7)
	  addi      r5, r1, 0xC
	  lbz       r3, 0x2(r7)
	  li        r4, 0
	  lbz       r0, 0x3(r7)
	  stb       r8, 0xC(r1)
	  stb       r6, 0xD(r1)
	  stb       r3, 0xE(r1)
	  stb       r0, 0xF(r1)
	  lwz       r3, 0x2EC(r31)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D4

	.loc_0x14C:
	  subi      r7, r13, 0x66A0
	  lha       r8, -0x66A0(r13)
	  lha       r6, 0x2(r7)
	  addi      r5, r1, 0x14
	  lha       r3, 0x4(r7)
	  li        r4, 0
	  lha       r0, 0x6(r7)
	  sth       r8, 0x14(r1)
	  sth       r6, 0x16(r1)
	  sth       r3, 0x18(r1)
	  sth       r0, 0x1A(r1)
	  lwz       r3, 0x2EC(r31)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  subi      r7, r13, 0x6690
	  lbz       r8, -0x6690(r13)
	  lbz       r6, 0x1(r7)
	  addi      r5, r1, 0x8
	  lbz       r3, 0x2(r7)
	  li        r4, 0
	  lbz       r0, 0x3(r7)
	  stb       r8, 0x8(r1)
	  stb       r6, 0x9(r1)
	  stb       r3, 0xA(r1)
	  stb       r0, 0xB(r1)
	  lwz       r3, 0x2EC(r31)
	  lwz       r3, 0x2C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D4:
	  lwz       r3, 0x174(r31)
	  lwz       r29, 0x8(r3)
	  mr        r3, r29
	  lwz       r30, 0x4(r29)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8051
	  li        r28, 0
	  subi      r31, r3, 0xDD0
	  b         .loc_0x23C

	.loc_0x204:
	  lwz       r4, 0xC0(r29)
	  rlwinm    r3,r28,6,10,25
	  rlwinm    r0,r28,2,14,29
	  add       r4, r4, r3
	  stw       r4, 0x3C(r31)
	  lwz       r3, 0x60(r30)
	  lwz       r4, 0x2C(r4)
	  lwzx      r3, r3, r0
	  lwz       r4, 0x34(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1

	.loc_0x23C:
	  lhz       r0, 0x5C(r30)
	  rlwinm    r3,r28,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x204
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038A69C
 * Size:	000030
 */
void Game::ShijimiChou::Obj::doStartMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x334(r3)
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
 * Address:	8038A6CC
 * Size:	000030
 */
void Game::ShijimiChou::Obj::doEndMovie(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x334(r3)
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
 * Address:	8038A6FC
 * Size:	000034
 */
void Game::ShijimiChou::Obj::doStartStoneState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x28781C
	  mr        r3, r31
	  bl        -0x282F84
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038A730
 * Size:	000008
 */
u32 Game::ShijimiChou::Obj::damageCallBack((Game::Creature*, float, CollPart*))
{
	return 0x0;
}

/*
 * --INFO--
 * Address:	8038A738
 * Size:	000094
 */
void Game::ShijimiChou::Obj::wallCallback((Game::MoveInfo const&))
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
	  lwz       r5, -0x6C18(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x34
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x7C

	.loc_0x34:
	  mr        r3, r30
	  bl        -0x28337C
	  cmpwi     r3, 0x2
	  bne-      .loc_0x50
	  li        r0, 0x1
	  stb       r0, 0x321(r30)
	  b         .loc_0x7C

	.loc_0x50:
	  lfs       f2, 0x18C(r30)
	  lfs       f1, 0xBC4(r2)
	  lfs       f0, 0x5C(r31)
	  lfs       f3, 0x190(r30)
	  fmadds    f2, f1, f0, f2
	  lfs       f4, 0x194(r30)
	  lfs       f0, 0x64(r31)
	  stfs      f2, 0x304(r30)
	  fmadds    f4, f1, f0, f4
	  stfs      f3, 0x308(r30)
	  stfs      f4, 0x30C(r30)

	.loc_0x7C:
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
 * Address:	8038A7CC
 * Size:	000064
 */
void Game::ShijimiChou::Obj::collisionCallback((Game::CollEvent&))
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
	  lwz       r3, 0x0(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x284204

	.loc_0x4C:
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
 * Address:	8038A830
 * Size:	000028
 */
void Game::ShijimiChou::Obj::startCarcassMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  bl        -0x285840
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038A858
 * Size:	000124
 */
void Game::ShijimiChou::Obj::getShadowParam((Game::ShadowParam&))
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
	  lfs       f0, 0x18C(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x190(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x194(r3)
	  stfs      f0, 0x8(r4)
	  lwz       r3, 0xC0(r3)
	  lbz       r0, 0x949(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  addi      r3, r30, 0x2DC
	  bl        -0x1F4218
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x60
	  lwz       r0, 0x2E8(r30)
	  cmplw     r0, r30
	  bne-      .loc_0xA4

	.loc_0x60:
	  lwz       r0, -0x6CF8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x88
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FA0
	  li        r4, 0x259
	  addi      r5, r5, 0x3FB0
	  crclr     6, 0x6
	  bl        -0x36029C

	.loc_0x88:
	  lwz       r3, -0x6CF8(r13)
	  mr        r4, r31
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x300(r30)

	.loc_0xA4:
	  lfs       f1, 0xBC0(r2)
	  lfs       f0, 0x300(r30)
	  lfs       f3, 0xBA8(r2)
	  fadds     f1, f1, f0
	  lfs       f2, 0xBC8(r2)
	  lfs       f0, 0xBCC(r2)
	  stfs      f1, 0x4(r31)
	  stfs      f3, 0xC(r31)
	  stfs      f2, 0x10(r31)
	  stfs      f3, 0x14(r31)
	  stfs      f0, 0x18(r31)
	  lfs       f1, 0x190(r30)
	  lfs       f0, 0x19C(r30)
	  fsubs     f1, f1, f0
	  fcmpo     cr0, f1, f3
	  ble-      .loc_0xF0
	  lfs       f0, 0xBC4(r2)
	  fdivs     f0, f1, f0
	  fsubs     f2, f2, f0

	.loc_0xF0:
	  lfs       f0, 0xBA8(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x100
	  fmr       f2, f0

	.loc_0x100:
	  lfs       f0, 0xBD0(r2)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x1C(r31)
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
 * Address:	8038A97C
 * Size:	00023C
 */
void Game::ShijimiChou::Obj::genItem(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  stw       r30, 0x48(r1)
	  lwz       r4, -0x6C18(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x30
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x224

	.loc_0x30:
	  li        r0, 0x1
	  stb       r0, 0x1F3(r31)
	  lwz       r0, 0x2C0(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x7C
	  lwz       r30, 0xC0(r31)
	  bl        -0x2C1424
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, 0xBA0(r2)
	  stw       r0, 0x20(r1)
	  lfs       f1, 0xB98(r2)
	  lfd       f2, 0x20(r1)
	  lfs       f0, 0x86C(r30)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x224

	.loc_0x7C:
	  lwz       r0, 0x2BC(r31)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xA8
	  lwz       r3, -0x6B70(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  li        r4, 0x1D
	  bl        -0x1A3634
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xCC
	  b         .loc_0x224

	.loc_0xA8:
	  cmpwi     r0, 0x2
	  bne-      .loc_0xCC
	  lwz       r3, -0x6B70(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  li        r4, 0x1E
	  bl        -0x1A365C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x224

	.loc_0xCC:
	  lfs       f4, 0x1FC(r31)
	  lfs       f0, 0xBA8(r2)
	  lfs       f2, 0xBD4(r2)
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x10C
	  lfs       f0, 0xBB0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x130

	.loc_0x10C:
	  lfs       f0, 0xBB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x130:
	  lfs       f0, 0xBA8(r2)
	  fmuls     f3, f2, f1
	  lfs       f1, 0xBD4(r2)
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x170
	  lfs       f0, 0xBB0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x194

	.loc_0x170:
	  lfs       f0, 0xBB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x194:
	  fmuls     f2, f1, f0
	  lfs       f1, 0xBD8(r2)
	  stfs      f3, 0x1C(r1)
	  lfs       f0, 0xBC0(r2)
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6BB0(r13)
	  stfs      f1, 0x18(r1)
	  lfs       f1, 0x18C(r31)
	  stfs      f1, 0x8(r1)
	  lfs       f1, 0x190(r31)
	  stfs      f1, 0xC(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x194(r31)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r0, r3
	  beq-      .loc_0x224
	  mr        r30, r0
	  li        r4, 0
	  bl        -0x24FBA4
	  lwz       r0, 0x2BC(r31)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  li        r5, 0
	  stb       r0, 0x1E0(r30)
	  bl        -0x24F9DC
	  mr        r3, r30
	  addi      r4, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x224:
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
 * Address:	8038ABB8
 * Size:	000080
 */
void Game::ShijimiChou::Obj::checkFlyStart(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, -0x6C18(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x38
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x38
	  lwz       r0, 0x2C0(r3)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x38
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x38:
	  lwz       r0, 0x2E8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  cmplw     r0, r3
	  bne-      .loc_0x54
	  li        r3, 0x1
	  b         .loc_0x70

	.loc_0x54:
	  mr        r3, r0
	  bl        -0x28381C
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0x1

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038AC38
 * Size:	0003BC
 */
void Game::ShijimiChou::Obj::fly(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stfd      f27, 0x50(r1)
	  psq_st    f27,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r0, 0x2E8(r3)
	  cmplw     r0, r31
	  beq-      .loc_0x6C
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x6C

	.loc_0x60:
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r31)

	.loc_0x6C:
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0x2F0(r31)
	  lfs       f1, 0x8BC(r3)
	  lfs       f0, 0xBC8(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2F0(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f3, 0x2F4(r31)
	  lfs       f2, 0x8E4(r3)
	  lfs       f1, 0x190(r31)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x190(r31)
	  lfs       f1, 0x2F0(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xB0
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2F0(r31)

	.loc_0xB0:
	  lfs       f1, 0xBA8(r2)
	  lfs       f0, 0xBDC(r2)
	  stfs      f1, 0x1CC(r31)
	  lfs       f2, 0x194(r31)
	  lfs       f1, 0x30C(r31)
	  lfs       f3, 0x18C(r31)
	  fsubs     f2, f2, f1
	  lfs       f1, 0x304(r31)
	  fsubs     f3, f3, f1
	  fmuls     f1, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF0
	  mr        r3, r31
	  bl        0xEC8
	  b         .loc_0x380

	.loc_0xF0:
	  lwz       r3, 0xC0(r31)
	  lbz       r0, 0x94A(r3)
	  lfs       f30, 0x2E4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x120
	  fmr       f1, f30
	  lfs       f2, 0x30C(r3)
	  lfs       f3, 0x334(r3)
	  mr        r3, r31
	  addi      r4, r31, 0x304
	  bl        -0x275774
	  b         .loc_0x368

	.loc_0x120:
	  lfs       f1, 0x2F8(r31)
	  lfs       f0, 0x95C(r3)
	  lfs       f31, 0x30C(r3)
	  fadds     f1, f1, f0
	  lfs       f29, 0x334(r3)
	  lfs       f0, 0xBE0(r2)
	  stfs      f1, 0x2F8(r31)
	  lfs       f1, 0x2F8(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x150
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2F8(r31)

	.loc_0x150:
	  lfs       f1, 0x2F8(r31)
	  bl        -0x2BB570
	  lwz       r3, 0xC0(r31)
	  frsp      f3, f1
	  lfs       f0, 0x2FC(r31)
	  mr        r4, r31
	  lfs       f1, 0x958(r3)
	  addi      r3, r1, 0x14
	  lfs       f2, 0xBE8(r2)
	  fmuls     f1, f1, f3
	  stfs      f0, 0x1FC(r31)
	  lfs       f3, 0xBE4(r2)
	  lwz       r12, 0x0(r31)
	  fmuls     f0, f2, f1
	  lwz       r12, 0x8(r12)
	  fmuls     f28, f3, f0
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x304(r31)
	  lfs       f0, 0x30C(r31)
	  lfs       f4, 0x18(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x8(r1)
	  stfs      f4, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  bl        -0x355CF8
	  bl        0x86DCC
	  lwz       r12, 0x0(r31)
	  fmr       f27, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f27
	  bl        0x86DD4
	  fmuls     f27, f1, f31
	  lfs       f0, 0xBE8(r2)
	  lfs       f1, 0xBE4(r2)
	  fmuls     f0, f0, f29
	  fabs      f2, f27
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x230
	  lfs       f0, 0xBA8(r2)
	  fcmpo     cr0, f27, f0
	  ble-      .loc_0x22C
	  fmr       f27, f1
	  b         .loc_0x230

	.loc_0x22C:
	  fneg      f27, f1

	.loc_0x230:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f27, f1
	  bl        0x86D50
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0xBA8(r2)
	  lfs       f1, 0x1FC(r31)
	  stfs      f1, 0x1A8(r31)
	  lfs       f4, 0x1FC(r31)
	  fadds     f3, f4, f28
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x298
	  lfs       f0, 0xBB0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f2, f0
	  b         .loc_0x2BC

	.loc_0x298:
	  lfs       f0, 0xBB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r3, r0

	.loc_0x2BC:
	  lfs       f0, 0xBA8(r2)
	  fmuls     f31, f30, f2
	  lfs       f1, 0x1D4(r31)
	  lfs       f27, 0x1D8(r31)
	  fcmpo     cr0, f3, f0
	  lfs       f0, 0x1DC(r31)
	  stfs      f1, 0x20(r1)
	  stfs      f27, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bge-      .loc_0x2E8
	  fneg      f3, f3

	.loc_0x2E8:
	  lfs       f0, 0xBB4(r2)
	  lis       r3, 0x8050
	  fabs      f2, f28
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f3, f0
	  frsp      f0, f2
	  fctiwz    f1, f1
	  fcmpo     cr0, f0, f29
	  stfd      f1, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f30, f30, f0
	  stfs      f4, 0x2FC(r31)
	  ble-      .loc_0x340
	  lfs       f0, 0xBA8(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x33C
	  fmr       f28, f29
	  b         .loc_0x340

	.loc_0x33C:
	  fneg      f28, f29

	.loc_0x340:
	  fmr       f1, f28
	  bl        0x86C54
	  lfs       f0, 0x1FC(r31)
	  fadds     f0, f0, f1
	  stfs      f0, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  stfs      f31, 0x1D4(r31)
	  stfs      f27, 0x1D8(r31)
	  stfs      f30, 0x1DC(r31)

	.loc_0x368:
	  lfs       f0, 0x308(r31)
	  lfs       f1, 0x190(r31)
	  lfs       f2, 0xBEC(r2)
	  fsubs     f0, f0, f1
	  fmadds    f0, f2, f0, f1
	  stfs      f0, 0x190(r31)

	.loc_0x380:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  psq_l     f27,0x58(r1),0,0
	  lfd       f27, 0x50(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038AFF4
 * Size:	000108
 */
void Game::ShijimiChou::Obj::restFly(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f2, 0xBF0(r2)
	  stw       r0, 0x14(r1)
	  lfs       f0, 0xBAC(r2)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f1, 0x1A4(r3)
	  fmadds    f1, f2, f1, f1
	  stfs      f1, 0x1A4(r3)
	  lfs       f1, 0x1A4(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3C
	  lfs       f0, 0xBA8(r2)
	  stfs      f0, 0x1A4(r31)

	.loc_0x3C:
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0x2F0(r31)
	  lfs       f1, 0x8BC(r3)
	  lfs       f0, 0xBC8(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2F0(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f3, 0x2F4(r31)
	  lfs       f2, 0x8E4(r3)
	  lfs       f1, 0x190(r31)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x190(r31)
	  lfs       f1, 0x2F0(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x80
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2F0(r31)

	.loc_0x80:
	  lfs       f1, 0xBA8(r2)
	  lfs       f0, 0xBDC(r2)
	  stfs      f1, 0x1CC(r31)
	  lfs       f2, 0x194(r31)
	  lfs       f1, 0x30C(r31)
	  lfs       f3, 0x18C(r31)
	  fsubs     f2, f2, f1
	  lfs       f1, 0x304(r31)
	  fsubs     f3, f3, f1
	  fmuls     f1, f2, f2
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC0
	  mr        r3, r31
	  bl        0xB3C
	  b         .loc_0xDC

	.loc_0xC0:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r31, 0x304
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x275AF0

	.loc_0xDC:
	  lfs       f0, 0x308(r31)
	  lfs       f1, 0x190(r31)
	  lfs       f2, 0xBF4(r2)
	  fsubs     f0, f0, f1
	  fmadds    f0, f2, f0, f1
	  stfs      f0, 0x190(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038B0FC
 * Size:	0000B4
 */
void Game::ShijimiChou::Obj::restCheck(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  bl        -0x283D28
	  cmpwi     r3, 0
	  beq-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x283D38
	  cmpwi     r3, 0x3
	  beq-      .loc_0xA0
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x286140
	  lwz       r3, 0x2D8(r31)
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xBA8(r2)
	  mr        r3, r31
	  stfs      f0, 0x1A4(r31)
	  bl        -0x2839E0
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0xA0
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r31)

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038B1B0
 * Size:	000370
 */
void Game::ShijimiChou::Obj::checkRestOn(void)
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
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lwz       r0, 0x2C8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FA0
	  li        r4, 0x33B
	  addi      r5, r5, 0x3FB0
	  crclr     6, 0x6
	  bl        -0x360BB8

	.loc_0x4C:
	  lwz       r3, 0x2C8(r31)
	  addi      r4, r1, 0x20
	  lwz       r3, 0x114(r3)
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x10(r3)
	  bl        -0x253014
	  lfs       f1, 0x190(r31)
	  lfs       f0, 0x24(r1)
	  lfs       f30, 0x2C(r1)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x18C(r31)
	  lfs       f4, 0x20(r1)
	  lfs       f2, 0x194(r31)
	  lfs       f0, 0x28(r1)
	  fsubs     f5, f1, f4
	  fmuls     f1, f3, f3
	  lfs       f3, 0xBF8(r2)
	  stfs      f4, 0x310(r31)
	  fsubs     f4, f2, f0
	  fmuls     f3, f3, f30
	  lfs       f0, 0x24(r1)
	  fmadds    f2, f5, f5, f1
	  stfs      f0, 0x314(r31)
	  fmuls     f0, f3, f3
	  lfs       f1, 0x28(r1)
	  fmadds    f31, f4, f4, f2
	  stfs      f1, 0x318(r31)
	  fcmpo     cr0, f31, f0
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x31C(r31)
	  bge-      .loc_0x348
	  lfs       f0, 0x1D4(r31)
	  mr        r3, r31
	  lfs       f1, 0xBA8(r2)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1D4(r31)
	  lfs       f0, 0x1D8(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1DC(r31)
	  lfs       f0, 0x1C8(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1C8(r31)
	  lfs       f0, 0x1CC(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1CC(r31)
	  lfs       f0, 0x1D0(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1D0(r31)
	  bl        -0x283B4C
	  fmuls     f0, f30, f30
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x200
	  lfs       f2, 0x20(r1)
	  lfs       f1, 0x18C(r31)
	  lfs       f5, 0x24(r1)
	  fsubs     f6, f2, f1
	  lfs       f4, 0x28(r1)
	  lfs       f2, 0xBA8(r2)
	  stfs      f6, 0x20(r1)
	  fmuls     f1, f6, f6
	  lfs       f3, 0x190(r31)
	  fsubs     f3, f5, f3
	  stfs      f3, 0x24(r1)
	  fmuls     f5, f3, f3
	  lfs       f3, 0x194(r31)
	  fadds     f1, f1, f5
	  fsubs     f3, f4, f3
	  fmuls     f4, f3, f3
	  stfs      f3, 0x28(r1)
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x194
	  fmadds    f1, f6, f6, f5
	  fadds     f4, f4, f1
	  fcmpo     cr0, f4, f2
	  ble-      .loc_0x198
	  fsqrte    f1, f4
	  fmuls     f4, f1, f4
	  b         .loc_0x198

	.loc_0x194:
	  fmr       f4, f2

	.loc_0x198:
	  lfs       f1, 0xBA8(r2)
	  fcmpo     cr0, f4, f1
	  ble-      .loc_0x1D0
	  lfs       f1, 0xBC8(r2)
	  lfs       f3, 0x20(r1)
	  fdivs     f4, f1, f4
	  lfs       f2, 0x24(r1)
	  lfs       f1, 0x28(r1)
	  fmuls     f3, f3, f4
	  fmuls     f2, f2, f4
	  fmuls     f1, f1, f4
	  stfs      f3, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)

	.loc_0x1D0:
	  lfs       f2, 0x18C(r31)
	  lfs       f1, 0x20(r1)
	  fadds     f1, f2, f1
	  stfs      f1, 0x18C(r31)
	  lfs       f2, 0x190(r31)
	  lfs       f1, 0x24(r1)
	  fadds     f1, f2, f1
	  stfs      f1, 0x190(r31)
	  lfs       f2, 0x194(r31)
	  lfs       f1, 0x28(r1)
	  fadds     f1, f2, f1
	  stfs      f1, 0x194(r31)

	.loc_0x200:
	  lfs       f4, 0x2C(r1)
	  lfs       f7, 0x24(r1)
	  lfs       f6, 0x190(r31)
	  fneg      f1, f4
	  fadds     f5, f7, f4
	  lfs       f2, 0xBC0(r2)
	  lfs       f3, 0xBE4(r2)
	  fmuls     f1, f2, f1
	  fsubs     f2, f5, f6
	  fcmpo     cr0, f5, f6
	  fmuls     f2, f3, f2
	  fdivs     f3, f2, f1
	  bge-      .loc_0x238
	  lfs       f3, 0xBA8(r2)

	.loc_0x238:
	  fsubs     f1, f7, f4
	  fcmpo     cr0, f1, f6
	  ble-      .loc_0x248
	  lfs       f3, 0xBE4(r2)

	.loc_0x248:
	  lfs       f1, 0x1A4(r31)
	  fcmpo     cr0, f31, f0
	  lfs       f2, 0xBFC(r2)
	  fsubs     f0, f3, f1
	  fmadds    f0, f2, f0, f1
	  stfs      f0, 0x1A4(r31)
	  bge-      .loc_0x2B8
	  lfs       f2, 0x1A4(r31)
	  lfs       f0, 0xBEC(r2)
	  fsubs     f1, f3, f2
	  fabs      f1, f1
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2B8
	  lfs       f0, 0xBAC(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x294
	  fsubs     f0, f2, f0
	  stfs      f0, 0x1A4(r31)

	.loc_0x294:
	  lfs       f1, 0x1A4(r31)
	  lfs       f0, 0xBA8(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2B0
	  lfs       f0, 0xBAC(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1A4(r31)

	.loc_0x2B0:
	  li        r3, 0x1
	  b         .loc_0x34C

	.loc_0x2B8:
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x20(r1)
	  lfs       f0, 0x28(r1)
	  lfs       f4, 0x18(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x8(r1)
	  stfs      f4, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  bl        -0x3563A8
	  bl        0x8671C
	  lwz       r12, 0x0(r31)
	  fmr       f30, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f30
	  bl        0x86724
	  lfs       f2, 0xBFC(r2)
	  lfs       f0, 0x1FC(r31)
	  fmadds    f1, f1, f2, f0
	  bl        0x866E8
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)

	.loc_0x348:
	  li        r3, 0

	.loc_0x34C:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038B520
 * Size:	0002AC
 */
void Game::ShijimiChou::Obj::checkRestOff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r0, 0x2C8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FA0
	  li        r4, 0x36B
	  addi      r5, r5, 0x3FB0
	  crclr     6, 0x6
	  bl        -0x360F18

	.loc_0x3C:
	  lwz       r4, 0x2C8(r31)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C8(r31)
	  addi      r4, r1, 0x14
	  lwz       r3, 0x114(r3)
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x10(r3)
	  bl        -0x25338C
	  lfs       f7, 0x190(r31)
	  lfs       f3, 0x18(r1)
	  lfs       f0, 0x20(r1)
	  fsubs     f2, f7, f3
	  lfs       f10, 0x18C(r31)
	  lfs       f4, 0x14(r1)
	  fmuls     f0, f0, f0
	  lfs       f1, 0xBC0(r2)
	  fsubs     f9, f10, f4
	  fmuls     f2, f2, f2
	  lfs       f6, 0x194(r31)
	  lfs       f5, 0x1C(r1)
	  fmuls     f0, f1, f0
	  fsubs     f8, f6, f5
	  fmadds    f1, f9, f9, f2
	  fmadds    f1, f8, f8, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1B0
	  lfs       f8, 0xBA8(r2)
	  stfs      f8, 0x2F0(r31)
	  lfs       f2, 0x18C(r31)
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x190(r31)
	  fsubs     f7, f1, f2
	  lfs       f1, 0x194(r31)
	  lfs       f6, 0x18(r1)
	  lfs       f5, 0x1C(r1)
	  stfs      f7, 0x14(r1)
	  fmuls     f3, f7, f7
	  lfs       f4, 0x190(r31)
	  fsubs     f4, f6, f4
	  stfs      f4, 0x18(r1)
	  fmuls     f6, f4, f4
	  lfs       f4, 0x194(r31)
	  fadds     f3, f3, f6
	  fsubs     f4, f5, f4
	  fmuls     f5, f4, f4
	  stfs      f4, 0x1C(r1)
	  fadds     f3, f5, f3
	  fcmpo     cr0, f3, f8
	  ble-      .loc_0x12C
	  fmadds    f3, f7, f7, f6
	  fadds     f4, f5, f3
	  fcmpo     cr0, f4, f8
	  ble-      .loc_0x130
	  fsqrte    f3, f4
	  fmuls     f4, f3, f4
	  b         .loc_0x130

	.loc_0x12C:
	  fmr       f4, f8

	.loc_0x130:
	  lfs       f3, 0xBA8(r2)
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x168
	  lfs       f3, 0xBC8(r2)
	  lfs       f5, 0x14(r1)
	  fdivs     f6, f3, f4
	  lfs       f4, 0x18(r1)
	  lfs       f3, 0x1C(r1)
	  fmuls     f5, f5, f6
	  fmuls     f4, f4, f6
	  fmuls     f3, f3, f6
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)

	.loc_0x168:
	  lfs       f3, 0x14(r1)
	  li        r3, 0x1
	  lfs       f6, 0xBC4(r2)
	  lfs       f4, 0x18(r1)
	  fmuls     f5, f3, f6
	  lfs       f3, 0x1C(r1)
	  fmuls     f4, f4, f6
	  fmuls     f3, f3, f6
	  fsubs     f2, f2, f5
	  stfs      f5, 0x14(r1)
	  fsubs     f0, f0, f4
	  stfs      f4, 0x18(r1)
	  fsubs     f1, f1, f3
	  stfs      f3, 0x1C(r1)
	  stfs      f2, 0x304(r31)
	  stfs      f0, 0x308(r31)
	  stfs      f1, 0x30C(r31)
	  b         .loc_0x298

	.loc_0x1B0:
	  fsubs     f4, f4, f10
	  lfs       f1, 0xBA8(r2)
	  fsubs     f3, f3, f7
	  fsubs     f2, f5, f6
	  fmuls     f0, f4, f4
	  stfs      f4, 0x14(r1)
	  fmuls     f5, f3, f3
	  fmuls     f6, f2, f2
	  stfs      f3, 0x18(r1)
	  fadds     f0, f0, f5
	  stfs      f2, 0x1C(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x204
	  fmadds    f0, f4, f4, f5
	  fadds     f3, f6, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x208
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x208

	.loc_0x204:
	  fmr       f3, f1

	.loc_0x208:
	  lfs       f0, 0xBA8(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x240
	  lfs       f0, 0xBC8(r2)
	  lfs       f2, 0x14(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)

	.loc_0x240:
	  lfs       f2, 0x14(r1)
	  li        r3, 0
	  lfs       f3, 0xBC0(r2)
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x18C(r31)
	  fsubs     f0, f0, f2
	  stfs      f0, 0x18C(r31)
	  lfs       f1, 0x190(r31)
	  lfs       f0, 0x18(r1)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x190(r31)
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x1C(r1)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x194(r31)

	.loc_0x298:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038B7CC
 * Size:	0000FC
 */
void Game::ShijimiChou::Obj::resetRestPos(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stfd      f29, 0x20(r1)
	  psq_st    f29,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r0, 0x2C8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FA0
	  li        r4, 0x38E
	  addi      r5, r5, 0x3FB0
	  crclr     6, 0x6
	  bl        -0x3611DC

	.loc_0x54:
	  lwz       r3, 0x2C8(r31)
	  addi      r4, r1, 0x8
	  lfs       f31, 0x310(r31)
	  lwz       r3, 0x114(r3)
	  lfs       f30, 0x314(r31)
	  lwz       r3, 0x0(r3)
	  lfs       f29, 0x318(r31)
	  lwz       r3, 0x10(r3)
	  bl        -0x253644
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fsubs     f31, f31, f2
	  fsubs     f30, f30, f1
	  stfs      f2, 0x310(r31)
	  fsubs     f29, f29, f0
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x314(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x318(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x31C(r31)
	  lfs       f0, 0x18C(r31)
	  fsubs     f0, f0, f31
	  stfs      f0, 0x18C(r31)
	  lfs       f0, 0x190(r31)
	  fsubs     f0, f0, f30
	  stfs      f0, 0x190(r31)
	  lfs       f0, 0x194(r31)
	  fsubs     f0, f0, f29
	  stfs      f0, 0x194(r31)
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038B8C8
 * Size:	000174
 */
void Game::ShijimiChou::Obj::leave(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x2E8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xF0
	  cmplw     r3, r31
	  beq-      .loc_0xF0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0
	  lfs       f1, 0x194(r31)
	  lfs       f0, 0x30C(r31)
	  lfs       f2, 0x18C(r31)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x304(r31)
	  lfs       f0, 0xBDC(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x74
	  mr        r3, r31
	  bl        0x4C0

	.loc_0x74:
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r31, 0x304
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x276378
	  lfs       f0, 0x308(r31)
	  lfs       f2, 0x190(r31)
	  lfs       f3, 0xC00(r2)
	  fsubs     f1, f0, f2
	  lfs       f0, 0xBC8(r2)
	  fmadds    f1, f3, f1, f2
	  stfs      f1, 0x190(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0x2F0(r31)
	  lfs       f1, 0x8BC(r3)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2F0(r31)
	  lwz       r3, 0xC0(r31)
	  lfs       f3, 0x2F4(r31)
	  lfs       f2, 0x8E4(r3)
	  lfs       f1, 0x190(r31)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x190(r31)
	  lfs       f1, 0x2F0(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x160
	  fsubs     f0, f1, f0
	  stfs      f0, 0x2F0(r31)
	  b         .loc_0x160

	.loc_0xF0:
	  mr        r3, r31
	  bl        -0x288314
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160
	  lfs       f1, 0x2F0(r31)
	  lfs       f0, 0xBC8(r2)
	  lfs       f2, 0xBB8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x11C
	  lfs       f0, 0xBA8(r2)
	  stfs      f0, 0x2F0(r31)

	.loc_0x11C:
	  lfs       f3, 0x2F4(r31)
	  lfs       f0, 0xBA8(r2)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x144
	  lfs       f1, 0x2F0(r31)
	  lfs       f0, 0xBF4(r2)
	  lfs       f2, 0xC04(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2F0(r31)
	  b         .loc_0x154

	.loc_0x144:
	  lfs       f1, 0x2F0(r31)
	  lfs       f0, 0xBEC(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2F0(r31)

	.loc_0x154:
	  lfs       f0, 0x190(r31)
	  fmadds    f0, f2, f3, f0
	  stfs      f0, 0x190(r31)

	.loc_0x160:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038BA3C
 * Size:	0001AC
 */
void Game::ShijimiChou::Obj::leaveInit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  stw       r30, 0x48(r1)
	  lwz       r0, 0x2E8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x18C
	  cmplw     r0, r31
	  bne-      .loc_0x18C
	  lwz       r3, -0x6D20(r13)
	  bl        -0x230E4C
	  mr.       r30, r3
	  beq-      .loc_0x194
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r30
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xBA8(r2)
	  lfs       f4, 0xC08(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xBC
	  lfs       f0, 0xBB0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f3, f0
	  b         .loc_0xE0

	.loc_0xBC:
	  lfs       f0, 0xBB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f3, r3, r0

	.loc_0xE0:
	  lfs       f2, 0x20(r1)
	  lfs       f0, 0xBA8(r2)
	  fnmsubs   f2, f4, f3, f2
	  fcmpo     cr0, f1, f0
	  stfs      f2, 0x20(r1)
	  bge-      .loc_0xFC
	  fneg      f1, f1

	.loc_0xFC:
	  lfs       f0, 0xBB4(r2)
	  lis       r3, 0x8050
	  addi      r5, r3, 0x71A0
	  lfs       f4, 0xC08(r2)
	  fmuls     f1, f1, f0
	  lfs       f0, 0x28(r1)
	  lfs       f2, 0xBC8(r2)
	  mr        r3, r31
	  lfs       f3, 0xC0C(r2)
	  addi      r4, r1, 0x20
	  fctiwz    f1, f1
	  stfd      f1, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r5, r5, r0
	  lfs       f1, 0x4(r5)
	  fnmsubs   f0, f4, f1, f0
	  stfs      f0, 0x28(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x954(r5)
	  lfs       f0, 0x2E4(r5)
	  fmuls     f1, f1, f0
	  bl        -0x2765B4
	  lfs       f1, 0x1D8(r31)
	  mr        r3, r31
	  lfs       f2, 0x1DC(r31)
	  addi      r4, r1, 0x14
	  lfs       f0, 0x1D4(r31)
	  stfs      f0, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x194

	.loc_0x18C:
	  mr        r3, r31
	  bl        0x22C

	.loc_0x194:
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
 * Address:	8038BBE8
 * Size:	000210
 */
void Game::ShijimiChou::Obj::setNextGoal(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r31, r3
	  bl        -0x284814
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x5E0
	  cmpwi     r3, 0x1
	  bne-      .loc_0x98
	  cmpwi     r30, 0x1
	  bne-      .loc_0x98
	  lwz       r0, 0x2E8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x98
	  cmplw     r0, r31
	  beq-      .loc_0x98
	  lwz       r4, 0x2C4(r31)
	  lis       r0, 0x4330
	  lwz       r3, 0xC0(r31)
	  xoris     r4, r4, 0x8000
	  stw       r0, 0x8(r1)
	  lfd       f3, 0xBA0(r2)
	  stw       r4, 0xC(r1)
	  lfs       f1, 0xC10(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, 0x81C(r3)
	  fsubs     f2, f2, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x98
	  mr        r3, r31
	  bl        .loc_0x210
	  b         .loc_0x1F0

	.loc_0x98:
	  lwz       r0, 0x2C0(r31)
	  lwz       r3, 0xC0(r31)
	  cmpwi     r0, 0x2
	  lfs       f31, 0x35C(r3)
	  beq-      .loc_0xB4
	  cmpwi     r0, 0x3
	  bne-      .loc_0xB8

	.loc_0xB4:
	  lfs       f31, 0xBC4(r2)

	.loc_0xB8:
	  bl        -0x2C2700
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfs       f0, 0x198(r31)
	  stw       r0, 0x8(r1)
	  lfd       f3, 0xBA0(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f2, 0xB98(r2)
	  fsubs     f3, f1, f3
	  stfs      f0, 0x304(r31)
	  lfs       f1, 0xC10(r2)
	  lfs       f0, 0x19C(r31)
	  fdivs     f2, f3, f2
	  stfs      f0, 0x308(r31)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x30C(r31)
	  fmadds    f0, f1, f2, f1
	  fmuls     f31, f31, f0
	  bl        -0x2C274C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f3, 0xBA0(r2)
	  stw       r0, 0x10(r1)
	  lfs       f2, 0xB98(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f1, 0xBAC(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0xBA8(r2)
	  fdivs     f2, f3, f2
	  fmuls     f4, f1, f2
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0x16C
	  lfs       f0, 0xBB0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f3, f0
	  b         .loc_0x190

	.loc_0x16C:
	  lfs       f0, 0xBB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f3, r3, r0

	.loc_0x190:
	  lfs       f1, 0x304(r31)
	  lfs       f0, 0xBA8(r2)
	  fmadds    f2, f31, f3, f1
	  lfs       f1, 0xBD4(r2)
	  fcmpo     cr0, f4, f0
	  stfs      f2, 0x304(r31)
	  lfs       f0, 0x308(r31)
	  fmadds    f0, f1, f3, f0
	  stfs      f0, 0x308(r31)
	  bge-      .loc_0x1BC
	  fneg      f4, f4

	.loc_0x1BC:
	  lfs       f1, 0xBB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f0, 0x30C(r31)
	  fmuls     f1, f4, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f1, 0x4(r3)
	  fmadds    f0, f31, f1, f0
	  stfs      f0, 0x30C(r31)

	.loc_0x1F0:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0x210:
	*/
}

/*
 * --INFO--
 * Address:	8038BDF8
 * Size:	000100
 */
void Game::ShijimiChou::Obj::setTraceGoal(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r4, 0x2E8(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0xE4
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0xC(r1)
	  lfs       f0, 0x190(r31)
	  lfs       f3, 0x10(r1)
	  lfs       f1, 0x950(r3)
	  fsubs     f31, f0, f2
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x304(r31)
	  fmuls     f31, f31, f1
	  stfs      f2, 0x308(r31)
	  stfs      f3, 0x30C(r31)
	  lwz       r3, 0x2E8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x2C28D4
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfs       f0, 0xBA8(r2)
	  stw       r0, 0x18(r1)
	  lfd       f2, 0xBA0(r2)
	  fcmpo     cr0, f31, f0
	  lfd       f1, 0x18(r1)
	  lfs       f0, 0xB98(r2)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  fmr       f3, f0
	  ble-      .loc_0xB8
	  fneg      f3, f0

	.loc_0xB8:
	  fmuls     f2, f3, f31
	  lfs       f0, 0x304(r31)
	  lfs       f1, 0xC14(r2)
	  fadds     f0, f0, f2
	  stfs      f0, 0x304(r31)
	  lfs       f0, 0x308(r31)
	  fmadds    f0, f1, f3, f0
	  stfs      f0, 0x308(r31)
	  lfs       f0, 0x30C(r31)
	  fadds     f0, f0, f2
	  stfs      f0, 0x30C(r31)

	.loc_0xE4:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038BEF8
 * Size:	000060
 */
void Game::ShijimiChou::Obj::isFallEnd(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0xC14(r2)
	  stw       r0, 0x14(r1)
	  lfs       f0, 0x300(r3)
	  lfs       f2, 0x190(r3)
	  fadds     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x30
	  lwz       r0, 0xC8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C

	.loc_0x30:
	  lwz       r3, 0x334(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x50

	.loc_0x4C:
	  li        r3, 0

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038BF58
 * Size:	000028
 */
void Game::ShijimiChou::Obj::deadEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0xC18(r2)
	  addi      r4, r3, 0x18C
	  stw       r0, 0x14(r1)
	  bl        -0x28841C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038BF80
 * Size:	0001C4
 */
void Game::ShijimiChou::Obj::fallBehavior(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lbz       r0, 0x321(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x144
	  lwz       r3, 0xC0(r31)
	  lfs       f2, 0x324(r31)
	  lfs       f1, 0x968(r3)
	  lfs       f0, 0xBAC(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x324(r31)
	  lfs       f1, 0x324(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x4C
	  fsubs     f0, f1, f0
	  stfs      f0, 0x324(r31)

	.loc_0x4C:
	  lfs       f1, 0x324(r31)
	  lfs       f0, 0xBA8(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x88
	  lfs       f0, 0xBB0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f3, f0
	  b         .loc_0xAC

	.loc_0x88:
	  lfs       f0, 0xBB4(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f3, r3, r0

	.loc_0xAC:
	  lwz       r5, 0xC0(r31)
	  mr        r4, r31
	  lfs       f1, 0x2CC(r31)
	  addi      r3, r1, 0x14
	  lfs       f4, 0x970(r5)
	  lfs       f0, 0xC10(r2)
	  fmadds    f2, f4, f3, f1
	  fmuls     f1, f0, f4
	  stfs      f2, 0x18C(r31)
	  lfs       f0, 0x2D4(r31)
	  fmadds    f0, f1, f3, f0
	  stfs      f0, 0x194(r31)
	  lfs       f0, 0x190(r31)
	  fadds     f0, f0, f3
	  stfs      f0, 0x190(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x96C(r3)
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x128
	  stfs      f0, 0x30(r1)

	.loc_0x128:
	  mr        r3, r31
	  addi      r4, r1, 0x2C
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1B0

	.loc_0x144:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x96C(r3)
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x18C
	  stfs      f0, 0x24(r1)

	.loc_0x18C:
	  lfs       f0, 0xBA8(r2)
	  mr        r3, r31
	  addi      r4, r1, 0x20
	  stfs      f0, 0x20(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1B0:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038C144
 * Size:	0000B0
 */
void Game::ShijimiChou::Obj::updateCluster(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0x2E8(r3)
	  cmplw     r0, r30
	  bne-      .loc_0x98
	  lwz       r31, 0x328(r30)
	  cmpwi     r31, 0x28
	  ble-      .loc_0x34
	  li        r31, 0x28

	.loc_0x34:
	  cmpwi     r31, 0x1
	  bgt-      .loc_0x64
	  mr        r3, r30
	  bl        -0x284D90
	  cmpwi     r3, 0
	  beq-      .loc_0x64
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x2510A8
	  li        r0, 0
	  stw       r0, 0x2E8(r30)
	  b         .loc_0x98

	.loc_0x64:
	  lwz       r0, 0x338(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FA0
	  li        r4, 0x492
	  addi      r5, r5, 0x3FB0
	  crclr     6, 0x6
	  bl        -0x361B8C

	.loc_0x8C:
	  lwz       r3, 0x338(r30)
	  rlwinm    r4,r31,0,24,31
	  bl        0xD6FB4

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
 * Address:	8038C1F4
 * Size:	000020
 */
void Game::ShijimiChou::Obj::getFlyType(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC0(r3)
	  lbz       r0, 0x94D(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x18
	  lbz       r3, 0x948(r4)
	  blr

	.loc_0x18:
	  lwz       r3, 0x32C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038C214
 * Size:	00006C
 */
void Game::ShijimiChou::Obj::leaderInit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x4C
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)

	.loc_0x4C:
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x14A3D0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038C280
 * Size:	0000A8
 */
void Game::ShijimiChou::Obj::createAppearEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x2E8(r3)
	  cmplw     r0, r3
	  beq-      .loc_0x98
	  lis       r6, 0x804B
	  lis       r4, 0x8051
	  addi      r5, r4, 0x41E4
	  lis       r4, 0x804E
	  subi      r6, r6, 0x5814
	  lfs       f2, 0x0(r5)
	  lfs       f1, 0x4(r5)
	  li        r0, 0
	  lfs       f0, 0x8(r5)
	  addi      r4, r4, 0x4CF4
	  stw       r6, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0x18(r1)
	  lwz       r0, 0x2BC(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x70
	  li        r0, 0x1
	  stw       r0, 0x18(r1)
	  b         .loc_0x80

	.loc_0x70:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x80
	  li        r0, 0x2
	  stw       r0, 0x18(r1)

	.loc_0x80:
	  lwz       r3, 0x334(r3)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x98:
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038C328
 * Size:	000030
 */
void Game::ShijimiChou::Obj::fadeAppearEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x334(r3)
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
 * Address:	8038C358
 * Size:	000008
 */
void efx::ArgChou::getName(void)
{
	/*
	.loc_0x0:
	  addi      r3, r2, 0xC1C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038C360
 * Size:	000004
 */
void Game::ShijimiChou::Obj::setInitialSetting((Game::EnemyInitialParamBase*))
{
}

/*
 * --INFO--
 * Address:	8038C364
 * Size:	000088
 */
void Game::ShijimiChou::Obj::ignoreAtari((Game::Creature*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  bl        -0x284F84
	  cmpwi     r3, 0x5
	  bne-      .loc_0x28
	  li        r3, 0
	  b         .loc_0x74

	.loc_0x28:
	  cmplwi    r31, 0
	  beq-      .loc_0x4C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x68

	.loc_0x4C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70

	.loc_0x68:
	  li        r3, 0x1
	  b         .loc_0x74

	.loc_0x70:
	  li        r3, 0

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038C3EC
 * Size:	000008
 */
u32 Game::ShijimiChou::Obj::pressCallBack((Game::Creature*, float, CollPart*))
{
	return 0x0;
}

/*
 * --INFO--
 * Address:	8038C3F4
 * Size:	000008
 */
void Game::ShijimiChou::Obj::hipdropCallBack((Game::Creature*, float,
                                              CollPart*))
{
	return 0x0;
}

/*
 * --INFO--
 * Address:	8038C3FC
 * Size:	000008
 */
u32 Game::ShijimiChou::Obj::earthquakeCallBack((Game::Creature*, float))
{
	return 0x0;
}

/*
 * --INFO--
 * Address:	8038C404
 * Size:	000008
 */
u32 Game::ShijimiChou::Obj::getEnemyTypeID(void) { return 0x4D; }

/*
 * --INFO--
 * Address:	8038C40C
 * Size:	000004
 */
void __sinit_shijimiChou_cpp(void) { }

/*
 * --INFO--
 * Address:	8038C410
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::viewOnPelletKilled(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x33C
	  b         -0x285B04
	*/
}

/*
 * --INFO--
 * Address:	8038C424
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::viewStartCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x33C
	  b         -0x285D8C
	*/
}

/*
 * --INFO--
 * Address:	8038C438
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::viewStartPreCarryMotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x33C
	  b         -0x285D80
	*/
}

/*
 * --INFO--
 * Address:	8038C44C
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::view_finish_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x33C
	  b         -0x2859E4
	*/
}

/*
 * --INFO--
 * Address:	8038C460
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::view_start_carrymotion(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x33C
	  b         -0x285A24
	*/
}

/*
 * --INFO--
 * Address:	8038C474
 * Size:	000014
 */
void @828 @12 @Game::EnemyBase::viewGetShape(void)
{
	/*
	.loc_0x0:
	  li        r11, 0xC
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x33C
	  b         -0x285DE4
	*/
}
