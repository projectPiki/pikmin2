#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void CullPlane::CullPlane(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void CullPlane::isPointVisible(Vector3<float>&, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041A190
 * Size:	000070
 */
void CullPlane::isVisible(Sys::Sphere&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0xC(r4)
	  li        r6, 0
	  lwz       r0, 0x1C(r3)
	  fneg      f6, f0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x68

	.loc_0x1C:
	  lwz       r0, 0x24(r3)
	  lfs       f1, 0x4(r4)
	  add       r5, r0, r6
	  lfs       f3, 0x0(r4)
	  lfs       f0, 0x4(r5)
	  lfs       f2, 0x0(r5)
	  fmuls     f1, f1, f0
	  lfs       f5, 0x8(r4)
	  lfs       f4, 0x8(r5)
	  lfs       f0, 0xC(r5)
	  fmadds    f1, f3, f2, f1
	  fmadds    f1, f5, f4, f1
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f6
	  bge-      .loc_0x60
	  li        r3, 0
	  blr

	.loc_0x60:
	  addi      r6, r6, 0x10
	  bdnz+     .loc_0x1C

	.loc_0x68:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041A200
 * Size:	000088
 */
void CullPlane::isCylinderVisible(Sys::Cylinder&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x58

	.loc_0x30:
	  lwz       r0, 0x24(r28)
	  mr        r3, r29
	  add       r4, r0, r31
	  bl        0x7528
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  li        r3, 0
	  b         .loc_0x68

	.loc_0x50:
	  addi      r31, r31, 0x10
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x1C(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x30
	  li        r3, 0x1

	.loc_0x68:
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
 * Address:	........
 * Size:	0000F8
 */
void CullFrustum::CullFrustum(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041A288
 * Size:	000020
 */
void CullFrustum::getUpVector()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x30(r4)
	  lfs       f1, 0x14(r4)
	  lfs       f2, 0x18(r4)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x0(r3)
	  stfs      f1, 0x4(r3)
	  stfs      f2, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041A2A8
 * Size:	00002C
 */
void CullFrustum::getSideVector()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x30(r4)
	  lfs       f0, 0x0(r4)
	  lfs       f2, 0x4(r4)
	  fneg      f0, f0
	  lfs       f1, 0x8(r4)
	  fneg      f2, f2
	  fneg      f1, f1
	  stfs      f0, 0x0(r3)
	  stfs      f2, 0x4(r3)
	  stfs      f1, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041A2D4
 * Size:	00002C
 */
void CullFrustum::getViewVector()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x30(r4)
	  lfs       f0, 0x20(r4)
	  lfs       f2, 0x24(r4)
	  fneg      f0, f0
	  lfs       f1, 0x28(r4)
	  fneg      f2, f2
	  fneg      f1, f1
	  stfs      f0, 0x0(r3)
	  stfs      f2, 0x4(r3)
	  stfs      f1, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041A300
 * Size:	000074
 */
void CullFrustum::getPosition()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x30(r4)
	  lfs       f0, 0x1C(r4)
	  lfs       f1, 0xC(r4)
	  fneg      f6, f0
	  lfs       f0, 0x10(r4)
	  lfs       f2, 0x14(r4)
	  fneg      f7, f1
	  lfs       f3, 0x2C(r4)
	  fmuls     f0, f6, f0
	  lfs       f1, 0x0(r4)
	  fmuls     f4, f6, f2
	  lfs       f2, 0x18(r4)
	  fneg      f8, f3
	  lfs       f5, 0x4(r4)
	  fmadds    f0, f7, f1, f0
	  lfs       f1, 0x20(r4)
	  fmuls     f2, f6, f2
	  lfs       f3, 0x8(r4)
	  fmadds    f5, f7, f5, f4
	  lfs       f6, 0x24(r4)
	  fmadds    f0, f8, f1, f0
	  lfs       f4, 0x28(r4)
	  fmadds    f1, f7, f3, f2
	  fmadds    f2, f8, f6, f5
	  stfs      f0, 0x0(r3)
	  fmadds    f0, f8, f4, f1
	  stfs      f2, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041A374
 * Size:	0002D4
 */
void CullFrustum::updatePlanes()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stfd      f28, 0xB0(r1)
	  psq_st    f28,0xB8(r1),0,0
	  stfd      f27, 0xA0(r1)
	  psq_st    f27,0xA8(r1),0,0
	  stw       r31, 0x9C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x38
	  lwz       r5, 0x30(r31)
	  mr        r4, r31
	  lfs       f2, 0x0(r5)
	  lfs       f1, 0x4(r5)
	  lfs       f0, 0x8(r5)
	  fneg      f2, f2
	  fneg      f1, f1
	  fneg      f0, f0
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  lfs       f0, 0x10(r5)
	  lfs       f1, 0x14(r5)
	  lfs       f2, 0x18(r5)
	  stfs      f0, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f2, 0x4C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0x2014(r2)
	  lfs       f2, 0x2010(r2)
	  fdivs     f0, f1, f0
	  lfs       f30, 0x38(r1)
	  lfs       f29, 0x3C(r1)
	  lfs       f28, 0x40(r1)
	  fmuls     f27, f2, f0
	  fmr       f1, f27
	  bl        -0x34AB38
	  frsp      f1, f1
	  lfs       f0, 0x2C(r31)
	  fmuls     f1, f0, f1
	  bl        -0x34B50C
	  lfs       f0, 0x2010(r2)
	  frsp      f31, f1
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x50
	  fsubs     f1, f0, f27
	  bl        -0x32FD70
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x44
	  addi      r5, r1, 0x5C
	  bl        -0x32F88C
	  lwz       r0, 0x5C(r1)
	  fmr       f1, f27
	  lwz       r5, 0x60(r1)
	  addi      r3, r1, 0x68
	  stw       r0, 0x2C(r1)
	  addi      r4, r1, 0x50
	  lwz       r0, 0x64(r1)
	  stw       r5, 0x30(r1)
	  lwz       r5, 0x24(r31)
	  lfs       f0, 0x2C(r1)
	  stw       r0, 0x34(r1)
	  lfs       f2, 0x30(r1)
	  stfs      f0, 0x0(r5)
	  lfs       f0, 0x34(r1)
	  stfs      f2, 0x4(r5)
	  stfs      f0, 0x8(r5)
	  lfs       f0, 0x4(r5)
	  lfs       f2, 0x0(r5)
	  fmuls     f0, f0, f29
	  lfs       f3, 0x8(r5)
	  fmadds    f0, f2, f30, f0
	  fmadds    f0, f3, f28, f0
	  stfs      f0, 0xC(r5)
	  bl        -0x32FDE0
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x44
	  addi      r5, r1, 0x5C
	  bl        -0x32F8FC
	  lwz       r0, 0x5C(r1)
	  fneg      f1, f31
	  lwz       r5, 0x60(r1)
	  addi      r3, r1, 0x68
	  stw       r0, 0x20(r1)
	  addi      r4, r1, 0x44
	  lwz       r0, 0x64(r1)
	  stw       r5, 0x24(r1)
	  lwz       r5, 0x24(r31)
	  lfs       f0, 0x20(r1)
	  stw       r0, 0x28(r1)
	  lfs       f2, 0x24(r1)
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x28(r1)
	  stfs      f2, 0x14(r5)
	  stfs      f0, 0x18(r5)
	  lfs       f0, 0x14(r5)
	  lfs       f2, 0x10(r5)
	  fmuls     f0, f0, f29
	  lfs       f3, 0x18(r5)
	  fmadds    f0, f2, f30, f0
	  fmadds    f0, f3, f28, f0
	  stfs      f0, 0x1C(r5)
	  bl        -0x32FE50
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x50
	  addi      r5, r1, 0x5C
	  bl        -0x32F96C
	  lwz       r0, 0x5C(r1)
	  addi      r3, r1, 0x68
	  lwz       r5, 0x60(r1)
	  addi      r4, r1, 0x44
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x64(r1)
	  stw       r5, 0x18(r1)
	  lwz       r5, 0x24(r31)
	  lfs       f1, 0x14(r1)
	  stw       r0, 0x1C(r1)
	  lfs       f0, 0x18(r1)
	  stfs      f1, 0x20(r5)
	  lfs       f1, 0x1C(r1)
	  stfs      f0, 0x24(r5)
	  lfs       f0, 0x2010(r2)
	  stfs      f1, 0x28(r5)
	  fadds     f1, f0, f31
	  lfs       f0, 0x24(r5)
	  lfs       f2, 0x20(r5)
	  fmuls     f0, f0, f29
	  lfs       f3, 0x28(r5)
	  fmadds    f0, f2, f30, f0
	  fmadds    f0, f3, f28, f0
	  stfs      f0, 0x2C(r5)
	  bl        -0x32FEC4
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x50
	  addi      r5, r1, 0x5C
	  bl        -0x32F9E0
	  lwz       r0, 0x5C(r1)
	  lwz       r3, 0x60(r1)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x64(r1)
	  stw       r3, 0xC(r1)
	  lwz       r3, 0x24(r31)
	  lfs       f0, 0x8(r1)
	  stw       r0, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stfs      f0, 0x30(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f1, 0x34(r3)
	  stfs      f0, 0x38(r3)
	  lfs       f0, 0x34(r3)
	  lfs       f1, 0x30(r3)
	  fmuls     f0, f0, f29
	  lfs       f2, 0x38(r3)
	  fmadds    f0, f1, f30, f0
	  fmadds    f0, f2, f28, f0
	  stfs      f0, 0x3C(r3)
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  psq_l     f27,0xA8(r1),0,0
	  lfd       f27, 0xA0(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r31, 0x9C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041A648
 * Size:	000158
 */
void Camera::Camera()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r30
	  mr        r31, r29
	  bl        -0x92DC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r4, 0x804B
	  stw       r0, 0x0(r29)
	  addi      r0, r3, 0xE20
	  lis       r3, 0x804B
	  li        r7, 0
	  stw       r0, 0x0(r29)
	  addi      r6, r4, 0xE4C
	  li        r5, 0x1
	  addi      r0, r3, 0xE94
	  stb       r7, 0x18(r29)
	  mr        r3, r29
	  li        r4, 0x6
	  stw       r6, 0x0(r29)
	  stb       r5, 0x18(r29)
	  stw       r7, 0x20(r29)
	  stw       r7, 0x1C(r29)
	  stw       r7, 0x24(r29)
	  stw       r0, 0x0(r29)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x6
	  lis       r3, 0x804F
	  stw       r0, 0x1C(r29)
	  subi      r0, r3, 0x4764
	  lfs       f0, 0x2000(r2)
	  stw       r0, 0x0(r31)
	  stfs      f0, 0x28(r31)
	  bl        0x8B34
	  lhz       r29, 0x6(r3)
	  bl        0x8B2C
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lis       r3, 0x804F
	  stw       r0, 0x8(r1)
	  divw      r5, r4, r29
	  lfd       f4, 0x2008(r2)
	  subi      r4, r3, 0x47E0
	  lfs       f2, 0x1FFC(r2)
	  li        r0, 0
	  lfs       f1, 0x2018(r2)
	  xoris     r3, r5, 0x8000
	  lfs       f0, 0x1FF8(r2)
	  stw       r3, 0xC(r1)
	  addi      r3, r30, 0x34
	  lfd       f3, 0x8(r1)
	  fsubs     f3, f3, f4
	  stfs      f3, 0x2C(r31)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x140(r30)
	  stfs      f2, 0x70(r30)
	  stfs      f1, 0x74(r30)
	  stfs      f2, 0x134(r30)
	  stfs      f2, 0x138(r30)
	  stfs      f2, 0x13C(r30)
	  stfs      f0, 0x78(r30)
	  stfs      f0, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        -0x3304C8
	  li        r0, 0
	  lfs       f0, 0x1FF8(r2)
	  stb       r0, 0x6C(r30)
	  mr        r3, r30
	  stfs      f0, 0x68(r30)
	  stfs      f0, 0x64(r30)
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
 * Address:	8041A7A0
 * Size:	0000A0
 */
void CullFrustum::~CullFrustum()
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
	  beq-      .loc_0x84
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4764
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE94
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE4C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE20
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        -0x9288

	.loc_0x74:
	  extsh.    r0, r31
	  ble-      .loc_0x84
	  mr        r3, r30
	  bl        -0x3F676C

	.loc_0x84:
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
 * Address:	8041A840
 * Size:	000018
 */
void Camera::setFixNearFar(bool, float, float)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,24,31
	  stb       r4, 0x6C(r3)
	  beqlr-
	  stfs      f1, 0x64(r3)
	  stfs      f2, 0x68(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041A858
 * Size:	0000A8
 */
void Camera::copyFrom(Camera*)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x70(r4)
	  li        r8, 0
	  li        r7, 0
	  stfs      f0, 0x70(r3)
	  lfs       f0, 0x74(r4)
	  stfs      f0, 0x74(r3)
	  lfs       f0, 0x134(r4)
	  stfs      f0, 0x134(r3)
	  lfs       f0, 0x138(r4)
	  stfs      f0, 0x138(r3)
	  lfs       f0, 0x13C(r4)
	  stfs      f0, 0x13C(r3)
	  lwz       r0, 0x140(r4)
	  stw       r0, 0x140(r3)
	  lwz       r0, 0x30(r4)
	  stw       r0, 0x30(r3)
	  lfs       f0, 0x28(r4)
	  stfs      f0, 0x28(r3)
	  lfs       f0, 0x2C(r4)
	  stfs      f0, 0x2C(r3)
	  b         .loc_0x98

	.loc_0x54:
	  lwz       r6, 0x24(r4)
	  addi      r0, r7, 0xC
	  lwz       r5, 0x24(r3)
	  addi      r8, r8, 0x1
	  add       r6, r6, r7
	  lfs       f0, 0x0(r6)
	  add       r5, r5, r7
	  addi      r7, r7, 0x10
	  stfs      f0, 0x0(r5)
	  lfs       f0, 0x4(r6)
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x8(r6)
	  stfs      f0, 0x8(r5)
	  lwz       r6, 0x24(r4)
	  lwz       r5, 0x24(r3)
	  lfsx      f0, r6, r0
	  stfsx     f0, r5, r0

	.loc_0x98:
	  lwz       r0, 0x1C(r3)
	  cmpw      r8, r0
	  blt+      .loc_0x54
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041A900
 * Size:	000198
 */
void Camera::updatePlanes()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  bl        -0x5B8
	  lwz       r5, 0x30(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x20
	  lfs       f2, 0x20(r5)
	  lfs       f1, 0x24(r5)
	  lfs       f0, 0x28(r5)
	  fneg      f31, f2
	  lwz       r12, 0x4C(r12)
	  fneg      f30, f1
	  fneg      f29, f0
	  mtctr     r12
	  bctrl
	  fneg      f0, f31
	  lfs       f5, 0x74(r31)
	  fneg      f6, f30
	  lfs       f1, 0x20(r1)
	  fneg      f4, f29
	  lfs       f7, 0x24(r1)
	  stfs      f0, 0x2C(r1)
	  fmuls     f2, f30, f5
	  fmuls     f3, f31, f5
	  lfs       f0, 0x28(r1)
	  lwz       r5, 0x2C(r1)
	  fmuls     f5, f29, f5
	  stfs      f6, 0x30(r1)
	  lwz       r4, 0x24(r31)
	  lwz       r3, 0x30(r1)
	  fadds     f2, f2, f7
	  stfs      f4, 0x34(r1)
	  fadds     f4, f3, f1
	  fadds     f5, f5, f0
	  lwz       r0, 0x34(r1)
	  stw       r5, 0x14(r1)
	  stw       r3, 0x18(r1)
	  lfs       f3, 0x14(r1)
	  stw       r0, 0x1C(r1)
	  lfs       f6, 0x18(r1)
	  stfs      f3, 0x40(r4)
	  lfs       f3, 0x1C(r1)
	  stfs      f6, 0x44(r4)
	  stfs      f3, 0x48(r4)
	  lfs       f3, 0x44(r4)
	  stfs      f31, 0x2C(r1)
	  fmuls     f2, f3, f2
	  lfs       f3, 0x40(r4)
	  stfs      f30, 0x30(r1)
	  lwz       r0, 0x2C(r1)
	  stfs      f29, 0x34(r1)
	  fmadds    f2, f3, f4, f2
	  lfs       f3, 0x48(r4)
	  stw       r0, 0x8(r1)
	  fmadds    f2, f3, f5, f2
	  lwz       r3, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  stw       r3, 0xC(r1)
	  lfs       f4, 0x8(r1)
	  stfs      f2, 0x4C(r4)
	  lfs       f6, 0xC(r1)
	  lfs       f5, 0x70(r31)
	  lwz       r3, 0x24(r31)
	  stw       r0, 0x10(r1)
	  fmuls     f2, f30, f5
	  fmuls     f3, f31, f5
	  stfs      f4, 0x50(r3)
	  fmuls     f4, f29, f5
	  lfs       f5, 0x10(r1)
	  fadds     f2, f2, f7
	  stfs      f6, 0x54(r3)
	  fadds     f1, f3, f1
	  stfs      f5, 0x58(r3)
	  fadds     f4, f4, f0
	  lfs       f0, 0x54(r3)
	  lfs       f3, 0x50(r3)
	  fmuls     f0, f0, f2
	  lfs       f2, 0x58(r3)
	  fmadds    f0, f3, f1, f0
	  fmadds    f0, f2, f4, f0
	  stfs      f0, 0x5C(r3)
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041AA98
 * Size:	0000B0
 */
void Camera::getLookAtPosition()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x140(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  li        r31, 0x1

	.loc_0x4C:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x7C
	  lwz       r3, 0x140(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lfs       f0, 0x9C(r3)
	  stfs      f0, 0x0(r29)
	  lfs       f0, 0xA0(r3)
	  stfs      f0, 0x4(r29)
	  lfs       f0, 0xA4(r3)
	  stfs      f0, 0x8(r29)
	  b         .loc_0x94

	.loc_0x7C:
	  mr        r4, r30
	  mr        r3, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
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
 * Address:	8041AB48
 * Size:	000020
 */
void Camera::getLookAtPosition_()
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  lfsu      f0, 0x41E4(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041AB68
 * Size:	000008
 */
void Game::P2JST::ObjectCamera::isRunning(void)
{
	/*
	.loc_0x0:
	  lbz       r3, 0xC4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041AB70
 * Size:	000108
 */
void Camera::getPosition()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x140(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  li        r31, 0x1

	.loc_0x4C:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x7C
	  lwz       r3, 0x140(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lfs       f0, 0x90(r3)
	  stfs      f0, 0x0(r29)
	  lfs       f0, 0x94(r3)
	  stfs      f0, 0x4(r29)
	  lfs       f0, 0x98(r3)
	  stfs      f0, 0x8(r29)
	  b         .loc_0xEC

	.loc_0x7C:
	  lwz       r3, 0x30(r30)
	  lfs       f0, 0x1C(r3)
	  lfs       f1, 0xC(r3)
	  fneg      f6, f0
	  lfs       f0, 0x10(r3)
	  lfs       f2, 0x14(r3)
	  fneg      f7, f1
	  lfs       f3, 0x2C(r3)
	  fmuls     f0, f6, f0
	  lfs       f1, 0x0(r3)
	  fmuls     f4, f6, f2
	  lfs       f2, 0x18(r3)
	  fneg      f8, f3
	  lfs       f5, 0x4(r3)
	  fmadds    f0, f7, f1, f0
	  lfs       f1, 0x20(r3)
	  fmuls     f2, f6, f2
	  lfs       f3, 0x8(r3)
	  fmadds    f5, f7, f5, f4
	  lfs       f6, 0x24(r3)
	  fmadds    f0, f8, f1, f0
	  lfs       f4, 0x28(r3)
	  fmadds    f1, f7, f3, f2
	  fmadds    f2, f8, f6, f5
	  stfs      f0, 0x0(r29)
	  fmadds    f0, f8, f4, f1
	  stfs      f2, 0x4(r29)
	  stfs      f0, 0x8(r29)

	.loc_0xEC:
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
 * Address:	8041AC78
 * Size:	00008C
 */
void Camera::getPositionPtr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x140(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x44
	  li        r31, 0x1

	.loc_0x44:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x60
	  lwz       r3, 0x140(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  addi      r3, r3, 0x90
	  b         .loc_0x74

	.loc_0x60:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl

	.loc_0x74:
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
 * Address:	8041AD04
 * Size:	000008
 */
u32 Camera::on_getPositionPtr() { return 0x0; }

/*
 * --INFO--
 * Address:	8041AD0C
 * Size:	00001C
 */
void Camera::getNear()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x6C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  lfs       f1, 0x64(r3)
	  blr

	.loc_0x14:
	  lfs       f1, 0x70(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041AD28
 * Size:	00001C
 */
void Camera::getFar()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x6C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  lfs       f1, 0x68(r3)
	  blr

	.loc_0x14:
	  lfs       f1, 0x74(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041AD44
 * Size:	000070
 */
void Camera::setProjection()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x6C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  lfs       f4, 0x68(r31)
	  b         .loc_0x2C

	.loc_0x28:
	  lfs       f4, 0x74(r31)

	.loc_0x2C:
	  cmplwi    r0, 0
	  lfs       f1, 0x28(r31)
	  lfs       f2, 0x2C(r31)
	  addi      r3, r31, 0xB4
	  beq-      .loc_0x48
	  lfs       f3, 0x64(r31)
	  b         .loc_0x4C

	.loc_0x48:
	  lfs       f3, 0x70(r31)

	.loc_0x4C:
	  bl        -0x330088
	  addi      r3, r31, 0xB4
	  li        r4, 0
	  bl        -0x331954
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041ADB4
 * Size:	000128
 */
void Camera::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0xB4
	  addi      r4, r30, 0xF4
	  bl        -0x32FF64
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r30, 0x34
	  bl        -0x330B28
	  lwz       r3, 0x140(r30)
	  li        r31, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  li        r31, 0x1

	.loc_0x70:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0xAC
	  lwz       r3, 0x140(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB0(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x2010(r2)
	  mr        r3, r30
	  lfs       f0, -0x7910(r13)
	  lfs       f2, 0x201C(r2)
	  fmuls     f0, f1, f0
	  fmuls     f1, f2, f0
	  bl        0x358
	  b         .loc_0xE8

	.loc_0xAC:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x2010(r2)
	  mr        r3, r30
	  lfs       f0, -0x7910(r13)
	  fmuls     f1, f1, f0
	  bl        0x318

	.loc_0xE8:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x50(r12)
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
 * Address:	8041AEDC
 * Size:	000004
 */
void Camera::updateMatrix() { }

/*
 * --INFO--
 * Address:	8041AEE0
 * Size:	000018
 */
void Camera::getViewMatrix(bool)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x10
	  addi      r3, r3, 0x34
	  blr

	.loc_0x10:
	  lwz       r3, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041AEF8
 * Size:	000120
 */
void Camera::calcProperDistance(float, float)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x2024(r2)
	  stwu      r1, -0x20(r1)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x14
	  lfs       f2, 0x2020(r2)

	.loc_0x14:
	  lfs       f4, 0x2028(r2)
	  lfs       f0, 0x28(r3)
	  lfs       f3, 0x202C(r2)
	  fmuls     f4, f4, f0
	  lfs       f5, 0x2010(r2)
	  lfs       f0, 0x1FF8(r2)
	  fdivs     f3, f4, f3
	  fmuls     f5, f5, f3
	  fmr       f3, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x44
	  fneg      f3, f5

	.loc_0x44:
	  lfs       f4, 0x2030(r2)
	  lis       r4, 0x8050
	  lfs       f0, 0x1FF8(r2)
	  addi      r5, r4, 0x71A0
	  fmuls     f3, f3, f4
	  fcmpo     cr0, f5, f0
	  fctiwz    f0, f3
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r4, r5, r0
	  lfs       f3, 0x4(r4)
	  bge-      .loc_0x9C
	  lfs       f0, 0x2034(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0
	  fneg      f0, f0
	  b         .loc_0xB4

	.loc_0x9C:
	  fmuls     f0, f5, f4
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0

	.loc_0xB4:
	  lfs       f7, 0x70(r3)
	  fdivs     f3, f3, f0
	  lfs       f8, 0x74(r3)
	  lfs       f5, 0x2038(r2)
	  lfs       f4, 0x2020(r2)
	  lfs       f0, 0x2C(r3)
	  fsubs     f6, f8, f7
	  fmuls     f5, f5, f8
	  fdivs     f8, f1, f4
	  fneg      f6, f6
	  fmuls     f4, f5, f7
	  fmuls     f1, f3, f2
	  fmuls     f0, f0, f8
	  fdivs     f2, f6, f4
	  fmuls     f2, f2, f1
	  fdivs     f1, f2, f0
	  fdivs     f0, f2, f8
	  fabs      f1, f1
	  fabs      f0, f0
	  frsp      f1, f1
	  frsp      f0, f0
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x114
	  b         .loc_0x118

	.loc_0x114:
	  fmr       f1, f0

	.loc_0x118:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041B018
 * Size:	0000E0
 */
void Camera::updateScreenConstants()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lfs       f2, 0x2028(r2)
	  lfs       f0, 0x28(r3)
	  lfs       f1, 0x202C(r2)
	  fmuls     f2, f2, f0
	  lfs       f3, 0x2010(r2)
	  lfs       f0, 0x1FF8(r2)
	  fdivs     f1, f2, f1
	  fmuls     f1, f3, f1
	  stfs      f1, 0x134(r3)
	  lfs       f3, 0x134(r3)
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x3C
	  fneg      f1, f3

	.loc_0x3C:
	  lfs       f2, 0x2030(r2)
	  lis       r4, 0x8050
	  lfs       f0, 0x1FF8(r2)
	  addi      r5, r4, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r4, r5, r0
	  lfs       f1, 0x4(r4)
	  bge-      .loc_0x94
	  lfs       f0, 0x2034(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0
	  fneg      f0, f0
	  b         .loc_0xAC

	.loc_0x94:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0

	.loc_0xAC:
	  fdivs     f1, f1, f0
	  lfs       f0, 0x2038(r2)
	  stfs      f1, 0x138(r3)
	  lfs       f1, 0x74(r3)
	  lfs       f2, 0x70(r3)
	  fmuls     f0, f0, f1
	  fsubs     f1, f1, f2
	  fmuls     f0, f0, f2
	  fneg      f1, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x13C(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041B0F8
 * Size:	0000B8
 */
void Camera::calcScreenSize(Sys::Sphere&)
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
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x30(r30)
	  lfs       f2, 0x4(r31)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x24(r3)
	  fsubs     f1, f2, f1
	  lfs       f4, 0x20(r3)
	  fneg      f0, f0
	  lfs       f3, 0x0(r31)
	  lfs       f2, 0x8(r1)
	  fneg      f7, f4
	  lfs       f4, 0x28(r3)
	  fsubs     f2, f3, f2
	  fmuls     f0, f1, f0
	  lfs       f6, 0x138(r30)
	  lfs       f5, 0xC(r31)
	  fneg      f1, f4
	  lfs       f4, 0x8(r31)
	  lfs       f3, 0x10(r1)
	  fmuls     f5, f6, f5
	  lfs       f6, 0x13C(r30)
	  fsubs     f3, f4, f3
	  fmadds    f0, f2, f7, f0
	  fmuls     f2, f6, f5
	  fmadds    f0, f3, f1, f0
	  fdivs     f0, f2, f0
	  fabs      f0, f0
	  frsp      f1, f0
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
 * Address:	........
 * Size:	0000E0
 */
void Camera::calcScreenSize(Sys::Sphere&, float&, float&, Vector3<float>&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041B1B0
 * Size:	0002E8
 */
void Camera::updateSoundCamera(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stfd      f28, 0x70(r1)
	  psq_st    f28,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  fmr       f2, f1
	  lfs       f0, 0x1FF8(r2)
	  mr        r30, r3
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x4C
	  fneg      f2, f2

	.loc_0x4C:
	  lfs       f3, 0x2030(r2)
	  lis       r3, 0x8050
	  lfs       f0, 0x1FF8(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  fcmpo     cr0, f1, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f2, 0x4(r3)
	  bge-      .loc_0xA4
	  lfs       f0, 0x2034(r2)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0xBC

	.loc_0xA4:
	  fmuls     f0, f1, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0xBC:
	  fdivs     f28, f2, f0
	  lwz       r3, 0x140(r30)
	  li        r31, 0
	  cmplwi    r3, 0
	  beq-      .loc_0xEC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xEC
	  li        r31, 0x1

	.loc_0xEC:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x11C
	  lwz       r3, 0x140(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x11C
	  lfs       f0, 0x9C(r3)
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0xA0(r3)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0xA4(r3)
	  stfs      f0, 0x1C(r1)
	  b         .loc_0x134

	.loc_0x11C:
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl

	.loc_0x134:
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x4C(r12)
	  lfs       f30, 0x18(r1)
	  lfs       f29, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lwz       r3, 0x30(r30)
	  fsubs     f2, f30, f0
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x20(r3)
	  fsubs     f1, f31, f1
	  fsubs     f0, f29, f0
	  fmuls     f5, f2, f2
	  lfs       f3, 0x24(r3)
	  lfs       f2, 0x28(r3)
	  fneg      f4, f4
	  fmuls     f6, f0, f0
	  fmadds    f1, f1, f1, f5
	  lfs       f0, 0x1FF8(r2)
	  fneg      f3, f3
	  fneg      f5, f2
	  fadds     f1, f6, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1B8
	  ble-      .loc_0x1BC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1BC

	.loc_0x1B8:
	  fmr       f1, f0

	.loc_0x1BC:
	  fmuls     f1, f28, f1
	  lfs       f0, 0x138(r30)
	  addi      r3, r1, 0x20
	  addi      r4, r30, 0x84
	  fdivs     f0, f1, f0
	  fnmsubs   f2, f4, f0, f31
	  fnmsubs   f1, f3, f0, f30
	  fnmsubs   f0, f5, f0, f29
	  stfs      f2, 0x78(r30)
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  lwz       r6, 0x30(r30)
	  lfs       f4, 0x78(r30)
	  lfs       f5, 0x7C(r30)
	  lfs       f6, 0x80(r30)
	  lwz       r5, 0x0(r6)
	  lwz       r0, 0x4(r6)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x24(r1)
	  lfs       f1, 0x20(r1)
	  lwz       r5, 0x8(r6)
	  lwz       r0, 0xC(r6)
	  lfs       f0, 0x24(r1)
	  stw       r5, 0x28(r1)
	  fmuls     f0, f5, f0
	  stw       r0, 0x2C(r1)
	  lfs       f2, 0x28(r1)
	  lwz       r5, 0x10(r6)
	  fmadds    f0, f4, f1, f0
	  lwz       r0, 0x14(r6)
	  stw       r5, 0x30(r1)
	  fnmadds   f3, f6, f2, f0
	  stw       r0, 0x34(r1)
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x34(r1)
	  lwz       r5, 0x18(r6)
	  lwz       r0, 0x1C(r6)
	  fmuls     f0, f5, f0
	  stw       r5, 0x38(r1)
	  fmadds    f0, f4, f1, f0
	  stw       r0, 0x3C(r1)
	  lfs       f1, 0x38(r1)
	  lwz       r5, 0x20(r6)
	  lwz       r0, 0x24(r6)
	  fnmadds   f2, f6, f1, f0
	  stw       r0, 0x44(r1)
	  stw       r5, 0x40(r1)
	  lfs       f0, 0x44(r1)
	  lwz       r5, 0x28(r6)
	  lwz       r0, 0x2C(r6)
	  fmuls     f0, f5, f0
	  lfs       f1, 0x40(r1)
	  stw       r5, 0x48(r1)
	  fmadds    f0, f4, f1, f0
	  lfs       f1, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  fnmadds   f0, f6, f1, f0
	  stfs      f3, 0x2C(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f0, 0x4C(r1)
	  bl        -0x331190
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  psq_l     f28,0x78(r1),0,0
	  lfd       f28, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r0, 0xB4(r1)
	  lwz       r30, 0x68(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041B498
 * Size:	0001AC
 */
void LookAtCamera::LookAtCamera()
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
	  stw       r28, 0x10(r1)
	  mr        r28, r29
	  mr        r30, r28
	  mr        r31, r28
	  bl        -0xA134
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r4, 0x804B
	  stw       r0, 0x0(r28)
	  addi      r0, r3, 0xE20
	  lis       r3, 0x804B
	  li        r7, 0
	  stw       r0, 0x0(r28)
	  addi      r6, r4, 0xE4C
	  li        r5, 0x1
	  addi      r0, r3, 0xE94
	  stb       r7, 0x18(r28)
	  mr        r3, r28
	  li        r4, 0x6
	  stw       r6, 0x0(r28)
	  stb       r5, 0x18(r28)
	  stw       r7, 0x20(r28)
	  stw       r7, 0x1C(r28)
	  stw       r7, 0x24(r28)
	  stw       r0, 0x0(r28)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x6
	  lis       r3, 0x804F
	  stw       r0, 0x1C(r28)
	  subi      r0, r3, 0x4764
	  lfs       f0, 0x2000(r2)
	  stw       r0, 0x0(r31)
	  stfs      f0, 0x28(r31)
	  bl        0x7CDC
	  lhz       r28, 0x6(r3)
	  bl        0x7CD4
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lis       r3, 0x804F
	  stw       r0, 0x8(r1)
	  divw      r5, r4, r28
	  lfd       f4, 0x2008(r2)
	  subi      r4, r3, 0x47E0
	  lfs       f2, 0x1FFC(r2)
	  li        r0, 0
	  lfs       f1, 0x2018(r2)
	  xoris     r3, r5, 0x8000
	  lfs       f0, 0x1FF8(r2)
	  stw       r3, 0xC(r1)
	  addi      r3, r30, 0x34
	  lfd       f3, 0x8(r1)
	  fsubs     f3, f3, f4
	  stfs      f3, 0x2C(r31)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x140(r30)
	  stfs      f2, 0x70(r30)
	  stfs      f1, 0x74(r30)
	  stfs      f2, 0x134(r30)
	  stfs      f2, 0x138(r30)
	  stfs      f2, 0x13C(r30)
	  stfs      f0, 0x78(r30)
	  stfs      f0, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        -0x331320
	  li        r0, 0
	  lis       r3, 0x804F
	  stb       r0, 0x6C(r30)
	  subi      r0, r3, 0x4860
	  lfs       f2, 0x1FF8(r2)
	  addi      r3, r29, 0x144
	  lfs       f1, 0x203C(r2)
	  stfs      f2, 0x68(r30)
	  lfs       f0, 0x1FFC(r2)
	  stfs      f2, 0x64(r30)
	  stw       r0, 0x0(r29)
	  stfs      f2, 0x174(r29)
	  stfs      f2, 0x178(r29)
	  stfs      f1, 0x17C(r29)
	  stfs      f2, 0x180(r29)
	  stfs      f2, 0x184(r29)
	  stfs      f2, 0x188(r29)
	  stfs      f2, 0x18C(r29)
	  stfs      f0, 0x190(r29)
	  stfs      f2, 0x194(r29)
	  bl        -0x331374
	  addi      r0, r29, 0x144
	  mr        r3, r29
	  stw       r0, 0x30(r29)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041B644
 * Size:	0000B0
 */
void Camera::~Camera()
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
	  beq-      .loc_0x94
	  lis       r4, 0x804F
	  subi      r0, r4, 0x47E0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4764
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE94
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE4C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE20
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x84
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        -0xA13C

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x3F7620

	.loc_0x94:
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
 * Address:	8041B6F4
 * Size:	000034
 */
void LookAtCamera::updateMatrix()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r6, 0x144
	  addi      r4, r6, 0x174
	  addi      r5, r6, 0x18C
	  addi      r6, r6, 0x180
	  bl        -0x330E1C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041B728
 * Size:	000180
 */
void BlendCamera::BlendCamera(int, Camera**)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  mr        r26, r3
	  mr        r30, r4
	  mr        r31, r5
	  mr        r27, r26
	  mr        r28, r26
	  mr        r29, r26
	  bl        -0xA3C0
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r4, 0x804B
	  stw       r0, 0x0(r26)
	  addi      r0, r3, 0xE20
	  lis       r3, 0x804B
	  li        r7, 0
	  stw       r0, 0x0(r26)
	  addi      r6, r4, 0xE4C
	  li        r5, 0x1
	  addi      r0, r3, 0xE94
	  stb       r7, 0x18(r26)
	  mr        r3, r29
	  li        r4, 0x6
	  stw       r6, 0x0(r26)
	  stb       r5, 0x18(r26)
	  stw       r7, 0x20(r26)
	  stw       r7, 0x1C(r26)
	  stw       r7, 0x24(r26)
	  stw       r0, 0x0(r29)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x6
	  lis       r3, 0x804F
	  stw       r0, 0x1C(r29)
	  subi      r0, r3, 0x4764
	  lfs       f0, 0x2000(r2)
	  stw       r0, 0x0(r28)
	  stfs      f0, 0x28(r28)
	  bl        0x7A50
	  lhz       r29, 0x6(r3)
	  bl        0x7A48
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lis       r3, 0x804F
	  stw       r0, 0x8(r1)
	  divw      r5, r4, r29
	  lfd       f4, 0x2008(r2)
	  subi      r4, r3, 0x47E0
	  lfs       f2, 0x1FFC(r2)
	  li        r0, 0
	  lfs       f1, 0x2018(r2)
	  xoris     r3, r5, 0x8000
	  lfs       f0, 0x1FF8(r2)
	  stw       r3, 0xC(r1)
	  addi      r3, r27, 0x34
	  lfd       f3, 0x8(r1)
	  fsubs     f3, f3, f4
	  stfs      f3, 0x2C(r28)
	  stw       r4, 0x0(r27)
	  stw       r0, 0x140(r27)
	  stfs      f2, 0x70(r27)
	  stfs      f1, 0x74(r27)
	  stfs      f2, 0x134(r27)
	  stfs      f2, 0x138(r27)
	  stfs      f2, 0x13C(r27)
	  stfs      f0, 0x78(r27)
	  stfs      f0, 0x7C(r27)
	  stfs      f0, 0x80(r27)
	  bl        -0x3315AC
	  li        r0, 0
	  lis       r3, 0x804F
	  stb       r0, 0x6C(r27)
	  subi      r0, r3, 0x48DC
	  lfs       f0, 0x1FF8(r2)
	  stfs      f0, 0x68(r27)
	  stfs      f0, 0x64(r27)
	  stw       r0, 0x0(r26)
	  stw       r30, 0x144(r26)
	  lwz       r0, 0x144(r26)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3F78D0
	  stw       r3, 0x148(r26)
	  mr        r3, r26
	  mr        r4, r31
	  bl        .loc_0x180
	  mr        r3, r26
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x180:
	*/
}

/*
 * --INFO--
 * Address:	8041B8A8
 * Size:	00008C
 */
void BlendCamera::setCameras(Camera**)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r7, r4
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  b         .loc_0x3C

	.loc_0x24:
	  lwz       r0, 0x0(r4)
	  addi      r4, r4, 0x4
	  lwz       r3, 0x148(r31)
	  addi      r6, r6, 0x1
	  stwx      r0, r3, r5
	  addi      r5, r5, 0x4

	.loc_0x3C:
	  lwz       r0, 0x144(r31)
	  cmpw      r6, r0
	  blt+      .loc_0x24
	  lfs       f0, 0x1FF8(r2)
	  li        r4, 0
	  stfs      f0, 0x14C(r31)
	  lwz       r3, 0x0(r7)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r31, 0x150
	  bl        -0x331648
	  addi      r0, r31, 0x150
	  stw       r0, 0x30(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041B934
 * Size:	000060
 */
void BlendCamera::setBlendFactor(float)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x1FF8(r2)
	  stwu      r1, -0x10(r1)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x18
	  fmr       f1, f0
	  b         .loc_0x54

	.loc_0x18:
	  lwz       r4, 0x144(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  subi      r4, r4, 0x1
	  lfd       f2, 0x2008(r2)
	  xoris     r4, r4, 0x8000
	  stw       r4, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x54
	  stw       r4, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f2

	.loc_0x54:
	  stfs      f1, 0x14C(r3)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041B994
 * Size:	0002A8
 */
void BlendCamera::doUpdate()
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
	  stfd      f29, 0xF0(r1)
	  psq_st    f29,0xF8(r1),0,0
	  stfd      f28, 0xE0(r1)
	  psq_st    f28,0xE8(r1),0,0
	  stw       r31, 0xDC(r1)
	  stw       r30, 0xD8(r1)
	  stw       r29, 0xD4(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x4C
	  bl        -0x960C
	  addi      r3, r1, 0x3C
	  bl        -0x9614
	  addi      r3, r1, 0x2C
	  bl        -0x961C
	  lfs       f2, 0x14C(r31)
	  lwz       r3, 0x144(r31)
	  fctiwz    f0, f2
	  subi      r0, r3, 0x1
	  stfd      f0, 0xC0(r1)
	  lwz       r4, 0xC4(r1)
	  cmpw      r4, r0
	  addi      r29, r4, 0x1
	  blt-      .loc_0x80
	  subi      r4, r4, 0x1
	  subi      r29, r29, 0x1

	.loc_0x80:
	  xoris     r3, r4, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC4(r1)
	  rlwinm    r30,r4,2,0,29
	  lwz       r3, 0x148(r31)
	  li        r4, 0
	  stw       r0, 0xC0(r1)
	  lwzx      r3, r3, r30
	  lfd       f1, 0x2008(r2)
	  lfd       f0, 0xC0(r1)
	  lwz       r12, 0x0(r3)
	  fsubs     f0, f0, f1
	  lwz       r12, 0x48(r12)
	  fsubs     f31, f2, f0
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x4C
	  bl        -0x8E24
	  lwz       r3, 0x148(r31)
	  rlwinm    r29,r29,2,0,29
	  li        r4, 0
	  lwzx      r3, r3, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x3C
	  bl        -0x8E50
	  addi      r3, r1, 0x4C
	  bl        -0x9244
	  addi      r3, r1, 0x3C
	  bl        -0x924C
	  lwz       r4, 0x148(r31)
	  addi      r3, r1, 0x14
	  lwzx      r4, r4, r30
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x148(r31)
	  addi      r3, r1, 0x8
	  lfs       f30, 0x14(r1)
	  lwzx      r4, r4, r29
	  lfs       f29, 0x18(r1)
	  lwz       r12, 0x0(r4)
	  lfs       f28, 0x1C(r1)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r6, 0x148(r31)
	  fmr       f1, f31
	  lfs       f0, 0x1FFC(r2)
	  addi      r3, r1, 0x4C
	  lwzx      r5, r6, r29
	  addi      r4, r1, 0x3C
	  fsubs     f9, f0, f31
	  lfs       f0, 0x28(r5)
	  addi      r5, r1, 0x2C
	  lfs       f2, 0x8(r1)
	  lfs       f6, 0xC(r1)
	  fmuls     f5, f31, f0
	  lfs       f8, 0x10(r1)
	  fmuls     f4, f30, f9
	  lwzx      r6, r6, r30
	  fmuls     f3, f2, f31
	  fmuls     f2, f29, f9
	  fmuls     f0, f6, f31
	  lfs       f7, 0x28(r6)
	  fadds     f6, f4, f3
	  fmadds    f3, f9, f7, f5
	  fadds     f5, f2, f0
	  fmuls     f4, f28, f9
	  stfs      f3, 0x28(r31)
	  fmuls     f0, f8, f31
	  fneg      f3, f6
	  stfs      f6, 0x20(r1)
	  fneg      f2, f5
	  fadds     f4, f4, f0
	  stfs      f5, 0x24(r1)
	  fneg      f0, f4
	  stfs      f4, 0x28(r1)
	  stfs      f3, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0x927C
	  addi      r3, r1, 0x2C
	  bl        -0x9328
	  addi      r3, r1, 0x8C
	  addi      r4, r1, 0x2C
	  bl        0xD008
	  addi      r3, r1, 0x8C
	  addi      r4, r1, 0x5C
	  bl        -0x3317C0
	  lfs       f3, 0x24(r1)
	  addi      r3, r31, 0x150
	  lfs       f2, 0x6C(r1)
	  addi      r4, r1, 0x20
	  lfs       f1, 0x74(r1)
	  addi      r5, r1, 0x2C
	  lfs       f0, 0x70(r1)
	  fmuls     f4, f3, f2
	  fmuls     f2, f3, f1
	  lfs       f6, 0x20(r1)
	  lfs       f5, 0x5C(r1)
	  fmuls     f0, f3, f0
	  lfs       f3, 0x64(r1)
	  lfs       f1, 0x60(r1)
	  fmadds    f4, f6, f5, f4
	  lfs       f7, 0x28(r1)
	  lfs       f5, 0x7C(r1)
	  fmadds    f2, f6, f3, f2
	  lfs       f3, 0x84(r1)
	  fmadds    f0, f6, f1, f0
	  lfs       f1, 0x80(r1)
	  fmadds    f4, f7, f5, f4
	  fmadds    f2, f7, f3, f2
	  fmadds    f0, f7, f1, f0
	  stfs      f4, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  bl        0xCEBC
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  psq_l     f29,0xF8(r1),0,0
	  lfd       f29, 0xF0(r1)
	  psq_l     f28,0xE8(r1),0,0
	  lfd       f28, 0xE0(r1)
	  lwz       r31, 0xDC(r1)
	  lwz       r30, 0xD8(r1)
	  lwz       r0, 0x124(r1)
	  lwz       r29, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
void EditorCamera::EditorCamera()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void EditorCamera::init(Controller*, Vector3<float>&, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001CC
 */
void EditorCamera::makeLookAt()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000474
 */
void EditorCamera::doUpdate()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void EditorCamera::~EditorCamera()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041BC3C
 * Size:	0000C0
 */
void BlendCamera::~BlendCamera()
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
	  beq-      .loc_0xA4
	  lis       r4, 0x804F
	  subi      r0, r4, 0x48DC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r4, 0x804F
	  subi      r0, r4, 0x47E0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r4, 0x804F
	  subi      r0, r4, 0x4764
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE94
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE4C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r4, 0x804B
	  addi      r0, r4, 0xE20
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x94
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        -0xA744

	.loc_0x94:
	  extsh.    r0, r31
	  ble-      .loc_0xA4
	  mr        r3, r30
	  bl        -0x3F7C28

	.loc_0xA4:
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
 * Address:	8041BCFC
 * Size:	000008
 */
void CullFrustum::getViewMatrix(bool)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041BD04
 * Size:	000028
 */
void __sinit_camera_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x6528(r13)
	  stfsu     f0, -0x48E8(r3)
	  stfs      f0, -0x6524(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
