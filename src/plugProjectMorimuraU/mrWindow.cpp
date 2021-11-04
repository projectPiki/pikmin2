#include "types.h"

/*
 * --INFO--
 * Address:	803A3644
 * Size:	000050
 */
Morimura::TConfirmEndWindow::TConfirmEndWindow(char const*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x78318
	  lis       r3, 0x804E
	  li        r0, 0
	  addi      r4, r3, 0x5998
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x10
	  stw       r4, 0x18(r31)
	  stb       r0, 0xD4(r31)
	  stb       r0, 0xD5(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A3694
 * Size:	000040
 */
void Morimura::TConfirmEndWindow::doStart(Screen::StartSceneArg const*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, 0xFF8(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stfs      f0, 0x44(r3)
	  stb       r5, 0xD4(r3)
	  stb       r0, 0xD5(r3)
	  lwz       r5, 0xCC(r3)
	  stb       r0, 0x21(r5)
	  bl        -0x77F38
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A36D4
 * Size:	000054
 */
void Morimura::TConfirmEndWindow::doUpdateFadeinFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0xFFC(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0xB8(r3)
	  bl        -0x9A29C
	  lwz       r3, 0xBC(r31)
	  lfs       f1, 0x1000(r2)
	  bl        -0x9A2A8
	  lwz       r4, 0xAC(r31)
	  mr        r3, r31
	  bl        -0x7A100
	  mr        r3, r31
	  bl        -0x79BEC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A3728
 * Size:	000020
 */
void Morimura::TConfirmEndWindow::doUpdateFadein(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x77F20
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A3748
 * Size:	000040
 */
void Morimura::TConfirmEndWindow::doUpdateFadeoutFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stb       r0, 0xD4(r3)
	  lwz       r3, 0xB8(r3)
	  bl        -0x9A32C
	  lwz       r3, 0xBC(r31)
	  bl        -0x9A334
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A3788
 * Size:	000028
 */
void Morimura::TConfirmEndWindow::doUpdateFadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0xD5(r3)
	  bl        -0x79BE8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A37B0
 * Size:	000038
 */
void Morimura::TConfirmEndWindow::doDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0xD4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x20
	  bl        -0x79D9C
	  b         .loc_0x28

	.loc_0x20:
	  li        r0, 0x1
	  stb       r0, 0xD4(r3)

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A37E8
 * Size:	000024
 */
void Morimura::TConfirmEndWindow::setRetireMsg(unsigned long long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0xBC(r3)
	  bl        -0x9A3D8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A380C
 * Size:	000074
 */
Morimura::TSelectExplanationWindow::TSelectExplanationWindow(JKRArchive*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x2478
	  lis       r3, 0x804E
	  li        r0, 0
	  addi      r3, r3, 0x5980
	  lfs       f0, 0xFF8(r2)
	  stw       r3, 0x0(r31)
	  li        r3, 0x1C
	  stw       r0, 0x18(r31)
	  stfs      f0, 0x24(r31)
	  stfs      f0, 0x28(r31)
	  stfs      f0, 0x1C(r31)
	  stfs      f0, 0x20(r31)
	  bl        -0x37F9AC
	  mr.       r0, r3
	  beq-      .loc_0x58
	  bl        -0x7AA58
	  mr        r0, r3

	.loc_0x58:
	  stw       r0, 0x2C(r31)
	  mr        r3, r31
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A3880
 * Size:	000194
 */
void Morimura::TSelectExplanationWindow::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x34
	  lfs       f0, 0xFF8(r2)
	  stfs      f0, 0x24(r29)
	  b         .loc_0x11C

	.loc_0x34:
	  lwz       r3, 0x8(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  li        r30, 0
	  li        r31, 0
	  b         .loc_0x68

	.loc_0x54:
	  lwz       r3, 0x4(r29)
	  lwzx      r3, r3, r31
	  bl        -0x9EACC
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x68:
	  lwz       r0, 0x10(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x54
	  lwz       r0, 0x18(r29)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x114
	  bge-      .loc_0x90
	  cmpwi     r0, 0x1
	  bge-      .loc_0x9C
	  b         .loc_0x114

	.loc_0x90:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x114
	  b         .loc_0xE4

	.loc_0x9C:
	  lfs       f2, 0x28(r29)
	  lfs       f1, 0x24(r29)
	  lfs       f0, 0x1004(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x28(r29)
	  lfs       f1, 0x28(r29)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x114
	  stfs      f0, 0x28(r29)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x2
	  stw       r0, 0x18(r29)
	  b         .loc_0x114

	.loc_0xE4:
	  lfs       f2, 0x28(r29)
	  lfs       f1, 0x24(r29)
	  lfs       f0, 0xFF8(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x28(r29)
	  lfs       f1, 0x28(r29)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x114
	  stfs      f0, 0x28(r29)
	  li        r0, 0
	  stfs      f0, 0x24(r29)
	  stw       r0, 0x18(r29)

	.loc_0x114:
	  lwz       r3, 0x8(r29)
	  bl        -0x362E6C

	.loc_0x11C:
	  lfs       f1, 0x1004(r2)
	  lfs       f0, 0x28(r29)
	  lfs       f2, 0x1C(r29)
	  fsubs     f4, f1, f0
	  lfs       f3, 0x20(r29)
	  lfs       f1, 0x243C(r2)
	  lfs       f0, 0x2440(r2)
	  fmuls     f2, f4, f2
	  lwz       r3, 0x8(r29)
	  fmuls     f3, f4, f3
	  fadds     f1, f2, f1
	  fadds     f0, f3, f0
	  stfs      f1, 0x140(r3)
	  stfs      f0, 0x144(r3)
	  lwz       r3, 0x2C(r29)
	  bl        -0x7AA54
	  lfs       f2, 0x2434(r2)
	  lfs       f0, 0x2438(r2)
	  fmuls     f2, f1, f2
	  lwz       r3, 0x8(r29)
	  fmuls     f0, f1, f0
	  stfs      f2, 0x138(r3)
	  stfs      f0, 0x13C(r3)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A3A14
 * Size:	00002C
 */
void Morimura::TSelectExplanationWindow::draw(Graphics&, J2DPerspGraph*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x1C
	  bl        -0x2494

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A3A40
 * Size:	000014
 */
void Morimura::TSelectExplanationWindow::openWindow(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x1008(r2)
	  li        r0, 0x1
	  stfs      f0, 0x24(r3)
	  stw       r0, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A3A54
 * Size:	000014
 */
void Morimura::TSelectExplanationWindow::closeWindow(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x100C(r2)
	  li        r0, 0x3
	  stfs      f0, 0x24(r3)
	  stw       r0, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A3A68
 * Size:	000080
 */
Morimura::TConfirmEndWindow::~TConfirmEndWindow(void)
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
	  addi      r4, r4, 0x5998
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x54
	  lis       r5, 0x804E
	  li        r4, 0
	  subi      r5, r5, 0x62B0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x10
	  stw       r0, 0x18(r30)
	  bl        -0x7A8A8

	.loc_0x54:
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x37FA14

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
 * Address:	803A3AE8
 * Size:	000008
 */
@24 @Morimura::TConfirmEndWindow::~TConfirmEndWindow(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x84
	*/
}
