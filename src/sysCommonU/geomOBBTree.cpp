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
 * Address:	8041CEBC
 * Size:	000170
 */
void Sys::OBBTree::clone((Matrixf&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r30, r3
	  mr        r31, r4
	  li        r3, 0x130
	  bl        -0x3F9034
	  mr.       r28, r3
	  beq-      .loc_0x30
	  bl        0x1170
	  mr        r28, r3

	.loc_0x30:
	  lwz       r0, 0x1C(r30)
	  li        r3, 0x50
	  stw       r0, 0x1C(r28)
	  bl        -0x3F9054
	  mr.       r29, r3
	  beq-      .loc_0xB8
	  bl        -0xBB74
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r4, 0x804B
	  stw       r0, 0x0(r29)
	  addi      r0, r3, 0x2C
	  lis       r3, 0x804F
	  li        r6, 0
	  stw       r0, 0x0(r29)
	  subi      r5, r4, 0x1C
	  li        r4, 0x1
	  subi      r0, r3, 0x4A40
	  stb       r6, 0x18(r29)
	  lfs       f1, 0x2058(r2)
	  stw       r5, 0x0(r29)
	  lfs       f0, 0x205C(r2)
	  stb       r4, 0x18(r29)
	  stw       r6, 0x20(r29)
	  stw       r6, 0x1C(r29)
	  stw       r6, 0x24(r29)
	  stw       r0, 0x0(r29)
	  stfs      f1, 0x28(r29)
	  stfs      f1, 0x2C(r29)
	  stfs      f1, 0x30(r29)
	  stfs      f0, 0x34(r29)
	  stfs      f0, 0x38(r29)
	  stfs      f0, 0x3C(r29)

	.loc_0xB8:
	  stw       r29, 0x18(r28)
	  lwz       r3, 0x18(r28)
	  lwz       r4, 0x18(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x1C(r4)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r27, 0
	  li        r29, 0
	  b         .loc_0x124

	.loc_0xE4:
	  lwz       r0, 0x24(r3)
	  addi      r4, r1, 0x8
	  add       r3, r0, r29
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0x18(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0xC
	  addi      r27, r27, 0x1

	.loc_0x124:
	  lwz       r3, 0x18(r30)
	  lwz       r0, 0x1C(r3)
	  cmpw      r27, r0
	  blt+      .loc_0xE4
	  lwz       r3, 0x18(r28)
	  mr        r4, r31
	  bl        -0x3510
	  lwz       r4, 0x18(r28)
	  mr        r3, r28
	  lwz       r5, 0x1C(r28)
	  li        r6, 0x8
	  li        r7, 0x8
	  bl        0x17BC
	  mr        r3, r28
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
void Sys::OBB::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void calcPointDist__Q23Sys3OBBFR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void intersect__Q23Sys3OBBFR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Sys::OBB::intersect((Sys::Sphere&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002AC
 */
void Sys::OBB::intersect((Sys::VertexTable&, Sys::Triangle&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Sys::TriDivider::drawTriList((Graphics&, Sys::TriIndexList*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Sys::OBB::draw((Graphics&, Sys::VertexTable&, Sys::TriangleTable&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041D02C
 * Size:	000704
 */
void create2__Q23Sys3OBBFRQ23Sys11VertexTableRQ23Sys13TriangleTableR8Matrix3fR8Matrix3fR10Vector3<
    float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x150(r1)
	  mflr      r0
	  stw       r0, 0x154(r1)
	  stfd      f31, 0x140(r1)
	  psq_st    f31,0x148(r1),0,0
	  stfd      f30, 0x130(r1)
	  psq_st    f30,0x138(r1),0,0
	  stfd      f29, 0x120(r1)
	  psq_st    f29,0x128(r1),0,0
	  stfd      f28, 0x110(r1)
	  psq_st    f28,0x118(r1),0,0
	  stfd      f27, 0x100(r1)
	  psq_st    f27,0x108(r1),0,0
	  stfd      f26, 0xF0(r1)
	  psq_st    f26,0xF8(r1),0,0
	  stfd      f25, 0xE0(r1)
	  psq_st    f25,0xE8(r1),0,0
	  stfd      f24, 0xD0(r1)
	  psq_st    f24,0xD8(r1),0,0
	  stfd      f23, 0xC0(r1)
	  psq_st    f23,0xC8(r1),0,0
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  lfs       f0, 0x0(r8)
	  mr        r31, r3
	  mr        r29, r4
	  mr        r30, r5
	  stfs      f0, 0x78(r3)
	  addi      r3, r31, 0xD8
	  addi      r6, r1, 0xA0
	  addi      r9, r1, 0x8
	  lfs       f0, 0x4(r8)
	  stfs      f0, 0x7C(r31)
	  lfs       f0, 0x8(r8)
	  addi      r8, r1, 0xC
	  stfs      f0, 0x80(r31)
	  lfs       f0, 0x0(r7)
	  stfs      f0, 0xA0(r1)
	  lfs       f0, 0xC(r7)
	  stfs      f0, 0xA4(r1)
	  lfs       f0, 0x18(r7)
	  stfs      f0, 0xA8(r1)
	  lfs       f0, 0x4(r7)
	  stfs      f0, 0x94(r1)
	  lfs       f0, 0x10(r7)
	  stfs      f0, 0x98(r1)
	  lfs       f0, 0x1C(r7)
	  stfs      f0, 0x9C(r1)
	  lfs       f0, 0x8(r7)
	  stfs      f0, 0x88(r1)
	  lfs       f0, 0x14(r7)
	  stfs      f0, 0x8C(r1)
	  lfs       f0, 0x20(r7)
	  addi      r7, r31, 0x78
	  stfs      f0, 0x90(r1)
	  bl        -0x3B78
	  lfs       f0, 0xC(r1)
	  mr        r4, r29
	  mr        r5, r30
	  addi      r3, r31, 0xD8
	  stfs      f0, 0xA8(r31)
	  addi      r6, r1, 0x94
	  addi      r7, r31, 0x78
	  addi      r8, r1, 0xC
	  lfs       f0, 0x8(r1)
	  addi      r9, r1, 0x8
	  stfs      f0, 0xB4(r31)
	  bl        -0x3BA8
	  lfs       f0, 0xC(r1)
	  mr        r4, r29
	  mr        r5, r30
	  addi      r3, r31, 0xD8
	  stfs      f0, 0xAC(r31)
	  addi      r6, r1, 0x88
	  addi      r7, r31, 0x78
	  addi      r8, r1, 0xC
	  lfs       f0, 0x8(r1)
	  addi      r9, r1, 0x8
	  stfs      f0, 0xB8(r31)
	  bl        -0x3BD8
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x206C(r2)
	  stfs      f0, 0xB0(r31)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0xBC(r31)
	  lfs       f0, 0xA0(r1)
	  stfs      f0, 0x84(r31)
	  lfs       f0, 0xA4(r1)
	  stfs      f0, 0x88(r31)
	  lfs       f0, 0xA8(r1)
	  stfs      f0, 0x8C(r31)
	  lfs       f0, 0x94(r1)
	  stfs      f0, 0x90(r31)
	  lfs       f0, 0x98(r1)
	  stfs      f0, 0x94(r31)
	  lfs       f0, 0x9C(r1)
	  stfs      f0, 0x98(r31)
	  lfs       f0, 0x88(r1)
	  stfs      f0, 0x9C(r31)
	  lfs       f0, 0x8C(r1)
	  stfs      f0, 0xA0(r31)
	  lfs       f0, 0x90(r1)
	  stfs      f0, 0xA4(r31)
	  lfs       f5, 0xB4(r31)
	  lfs       f1, 0x84(r31)
	  lfs       f6, 0xA8(r31)
	  lfs       f0, 0x88(r31)
	  fmuls     f3, f1, f5
	  lfs       f12, 0x8C(r31)
	  fmuls     f1, f1, f6
	  lfs       f4, 0x78(r31)
	  fmuls     f10, f0, f5
	  lfs       f23, 0x7C(r31)
	  fmuls     f0, f0, f6
	  lfs       f9, 0xB8(r31)
	  lfs       f11, 0x90(r31)
	  fadds     f8, f4, f3
	  lfs       f29, 0xAC(r31)
	  fadds     f4, f4, f1
	  lfs       f13, 0x94(r31)
	  fmuls     f7, f11, f9
	  lfs       f25, 0x98(r31)
	  fmuls     f3, f11, f29
	  fmuls     f27, f12, f5
	  lfs       f24, 0x80(r31)
	  fmuls     f1, f12, f6
	  lfs       f11, 0xBC(r31)
	  fmuls     f30, f13, f9
	  lfs       f28, 0x9C(r31)
	  lfs       f12, 0xB0(r31)
	  fadds     f31, f23, f10
	  lfs       f26, 0xA0(r31)
	  fadds     f6, f23, f0
	  lfs       f0, 0xA4(r31)
	  fmuls     f5, f13, f29
	  fmuls     f13, f28, f11
	  fadds     f10, f8, f7
	  fadds     f8, f4, f3
	  fmuls     f7, f28, f12
	  fmuls     f28, f25, f9
	  fadds     f27, f24, f27
	  fadds     f4, f24, f1
	  fmuls     f3, f25, f29
	  fmuls     f29, f26, f11
	  fadds     f9, f31, f30
	  fadds     f6, f6, f5
	  fmuls     f5, f26, f12
	  fadds     f10, f10, f13
	  fadds     f31, f8, f7
	  fmuls     f8, f0, f11
	  fadds     f7, f27, f28
	  fadds     f1, f10, f31
	  fadds     f4, f4, f3
	  fmuls     f3, f0, f12
	  fmuls     f0, f1, f2
	  fadds     f9, f9, f29
	  fadds     f30, f6, f5
	  fadds     f5, f7, f8
	  stfs      f0, 0x100(r31)
	  fadds     f29, f4, f3
	  fadds     f1, f9, f30
	  fadds     f0, f5, f29
	  fmuls     f1, f1, f2
	  fmuls     f0, f0, f2
	  stfs      f1, 0x104(r31)
	  stfs      f0, 0x108(r31)
	  lfs       f0, 0x104(r31)
	  lfs       f1, 0x100(r31)
	  fsubs     f2, f9, f0
	  lfs       f0, 0x108(r31)
	  fsubs     f1, f10, f1
	  fsubs     f3, f5, f0
	  fmuls     f0, f2, f2
	  fmadds    f0, f1, f1, f0
	  fmadds    f1, f3, f3, f0
	  bl        -0xBAE8
	  lfs       f0, 0x104(r31)
	  fmr       f27, f1
	  lfs       f3, 0x100(r31)
	  fsubs     f0, f30, f0
	  lfs       f2, 0x108(r31)
	  fsubs     f1, f31, f3
	  fsubs     f2, f29, f2
	  fmuls     f0, f0, f0
	  fmr       f24, f27
	  fmadds    f0, f1, f1, f0
	  fmadds    f23, f2, f2, f0
	  fmr       f1, f23
	  bl        -0xBB1C
	  fcmpo     cr0, f27, f1
	  bge-      .loc_0x30C
	  fmr       f1, f23
	  bl        -0xBB2C
	  fmr       f24, f1

	.loc_0x30C:
	  stfs      f24, 0x10C(r31)
	  lfs       f2, 0x84(r31)
	  lfs       f0, 0x88(r31)
	  stfs      f2, 0x7C(r1)
	  lfs       f3, 0xB4(r31)
	  lfs       f1, 0x8C(r31)
	  stfs      f0, 0x80(r1)
	  fmuls     f0, f0, f3
	  lwz       r3, 0x7C(r1)
	  fmuls     f2, f2, f3
	  stfs      f1, 0x84(r1)
	  fmuls     f1, f1, f3
	  lwz       r0, 0x80(r1)
	  stw       r3, 0x70(r1)
	  lfs       f4, 0x78(r31)
	  stw       r0, 0x74(r1)
	  lfs       f3, 0x7C(r31)
	  fadds     f4, f4, f2
	  lfs       f2, 0x80(r31)
	  lwz       r0, 0x84(r1)
	  fadds     f3, f3, f0
	  lfs       f0, 0x70(r1)
	  fadds     f5, f2, f1
	  stw       r0, 0x78(r1)
	  lfs       f1, 0x74(r1)
	  stfs      f0, 0x18(r31)
	  lfs       f0, 0x78(r1)
	  stfs      f1, 0x1C(r31)
	  stfs      f0, 0x20(r31)
	  lfs       f0, 0x1C(r31)
	  lfs       f1, 0x18(r31)
	  fmuls     f0, f0, f3
	  lfs       f2, 0x20(r31)
	  fmadds    f0, f1, f4, f0
	  fmadds    f0, f2, f5, f0
	  stfs      f0, 0x24(r31)
	  lfs       f3, 0x90(r31)
	  lfs       f1, 0x94(r31)
	  lfs       f5, 0xB8(r31)
	  lfs       f4, 0x98(r31)
	  stfs      f3, 0x7C(r1)
	  fmuls     f0, f1, f5
	  lfs       f2, 0x7C(r31)
	  fmuls     f3, f3, f5
	  stfs      f1, 0x80(r1)
	  fmuls     f1, f4, f5
	  lwz       r3, 0x7C(r1)
	  stfs      f4, 0x84(r1)
	  fadds     f4, f2, f0
	  lwz       r0, 0x80(r1)
	  stw       r3, 0x64(r1)
	  lfs       f0, 0x78(r31)
	  stw       r0, 0x68(r1)
	  lfs       f2, 0x80(r31)
	  fadds     f3, f0, f3
	  lwz       r0, 0x84(r1)
	  lfs       f0, 0x64(r1)
	  fadds     f5, f2, f1
	  stw       r0, 0x6C(r1)
	  lfs       f1, 0x68(r1)
	  stfs      f0, 0x28(r31)
	  lfs       f0, 0x6C(r1)
	  stfs      f1, 0x2C(r31)
	  stfs      f0, 0x30(r31)
	  lfs       f0, 0x2C(r31)
	  lfs       f1, 0x28(r31)
	  fmuls     f0, f0, f4
	  lfs       f2, 0x30(r31)
	  fmadds    f0, f1, f3, f0
	  fmadds    f0, f2, f5, f0
	  stfs      f0, 0x34(r31)
	  lfs       f1, 0x9C(r31)
	  lfs       f0, 0xA0(r31)
	  lfs       f3, 0xBC(r31)
	  lfs       f5, 0xA4(r31)
	  stfs      f1, 0x7C(r1)
	  fmuls     f1, f1, f3
	  lfs       f4, 0x78(r31)
	  fmuls     f2, f0, f3
	  stfs      f0, 0x80(r1)
	  fmuls     f0, f5, f3
	  lfs       f3, 0x7C(r31)
	  stfs      f5, 0x84(r1)
	  fadds     f4, f4, f1
	  lfs       f1, 0x80(r31)
	  fadds     f2, f3, f2
	  lwz       r4, 0x7C(r1)
	  lwz       r3, 0x80(r1)
	  fadds     f3, f1, f0
	  lwz       r0, 0x84(r1)
	  stw       r4, 0x58(r1)
	  stw       r3, 0x5C(r1)
	  stw       r0, 0x60(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f1, 0x5C(r1)
	  stfs      f0, 0x38(r31)
	  lfs       f0, 0x60(r1)
	  stfs      f1, 0x3C(r31)
	  stfs      f0, 0x40(r31)
	  lfs       f0, 0x3C(r31)
	  lfs       f1, 0x38(r31)
	  fmuls     f0, f0, f2
	  lfs       f2, 0x40(r31)
	  fmadds    f0, f1, f4, f0
	  fmadds    f0, f2, f3, f0
	  stfs      f0, 0x44(r31)
	  lfs       f7, 0x84(r31)
	  lfs       f6, 0x88(r31)
	  fneg      f2, f7
	  lfs       f5, 0x8C(r31)
	  lfs       f8, 0xA8(r31)
	  fneg      f1, f6
	  fneg      f0, f5
	  lfs       f4, 0x78(r31)
	  stfs      f2, 0x40(r1)
	  fmuls     f3, f7, f8
	  lfs       f2, 0x7C(r31)
	  fmuls     f9, f6, f8
	  stfs      f1, 0x44(r1)
	  fmuls     f1, f5, f8
	  lwz       r3, 0x40(r1)
	  stfs      f0, 0x48(r1)
	  fadds     f2, f2, f9
	  lwz       r0, 0x44(r1)
	  fadds     f3, f4, f3
	  stw       r3, 0x4C(r1)
	  lfs       f0, 0x80(r31)
	  stw       r0, 0x50(r1)
	  lwz       r0, 0x48(r1)
	  fadds     f4, f0, f1
	  lfs       f0, 0x4C(r1)
	  stw       r0, 0x54(r1)
	  lfs       f1, 0x50(r1)
	  stfs      f0, 0x48(r31)
	  lfs       f0, 0x54(r1)
	  stfs      f1, 0x4C(r31)
	  stfs      f0, 0x50(r31)
	  lfs       f0, 0x4C(r31)
	  lfs       f1, 0x48(r31)
	  fmuls     f0, f0, f2
	  lfs       f2, 0x50(r31)
	  stfs      f7, 0x7C(r1)
	  fmadds    f0, f1, f3, f0
	  stfs      f6, 0x80(r1)
	  stfs      f5, 0x84(r1)
	  fmadds    f0, f2, f4, f0
	  stfs      f0, 0x54(r31)
	  lfs       f6, 0x90(r31)
	  lfs       f5, 0x94(r31)
	  lfs       f4, 0x98(r31)
	  fneg      f2, f6
	  fneg      f1, f5
	  lfs       f7, 0xAC(r31)
	  fneg      f0, f4
	  lfs       f3, 0x78(r31)
	  stfs      f2, 0x28(r1)
	  lfs       f2, 0x7C(r31)
	  stfs      f1, 0x2C(r1)
	  fmuls     f8, f5, f7
	  lwz       r3, 0x28(r1)
	  fmuls     f1, f6, f7
	  stfs      f0, 0x30(r1)
	  fmuls     f7, f4, f7
	  lwz       r0, 0x2C(r1)
	  stw       r3, 0x34(r1)
	  fadds     f2, f2, f8
	  lfs       f0, 0x80(r31)
	  fadds     f3, f3, f1
	  stw       r0, 0x38(r1)
	  lwz       r0, 0x30(r1)
	  fadds     f7, f0, f7
	  lfs       f0, 0x34(r1)
	  stw       r0, 0x3C(r1)
	  lfs       f1, 0x38(r1)
	  stfs      f0, 0x58(r31)
	  lfs       f0, 0x3C(r1)
	  stfs      f1, 0x5C(r31)
	  stfs      f0, 0x60(r31)
	  lfs       f0, 0x5C(r31)
	  lfs       f1, 0x58(r31)
	  fmuls     f0, f0, f2
	  lfs       f2, 0x60(r31)
	  stfs      f6, 0x7C(r1)
	  fmadds    f0, f1, f3, f0
	  stfs      f5, 0x80(r1)
	  stfs      f4, 0x84(r1)
	  fmadds    f0, f2, f7, f0
	  stfs      f0, 0x64(r31)
	  lfs       f6, 0x9C(r31)
	  lfs       f5, 0xA0(r31)
	  fneg      f2, f6
	  lfs       f4, 0xA4(r31)
	  lfs       f7, 0xB0(r31)
	  fneg      f1, f5
	  fneg      f0, f4
	  lfs       f3, 0x80(r31)
	  stfs      f2, 0x10(r1)
	  fmuls     f9, f4, f7
	  lfs       f2, 0x7C(r31)
	  fmuls     f8, f5, f7
	  stfs      f1, 0x14(r1)
	  fmuls     f1, f6, f7
	  lwz       r3, 0x10(r1)
	  stfs      f0, 0x18(r1)
	  fadds     f2, f2, f8
	  lwz       r0, 0x14(r1)
	  fadds     f7, f3, f9
	  stw       r3, 0x1C(r1)
	  lfs       f0, 0x78(r31)
	  stw       r0, 0x20(r1)
	  lwz       r0, 0x18(r1)
	  fadds     f3, f0, f1
	  lfs       f0, 0x1C(r1)
	  stw       r0, 0x24(r1)
	  lfs       f1, 0x20(r1)
	  stfs      f0, 0x68(r31)
	  lfs       f0, 0x24(r1)
	  stfs      f1, 0x6C(r31)
	  stfs      f0, 0x70(r31)
	  lfs       f0, 0x6C(r31)
	  lfs       f1, 0x68(r31)
	  fmuls     f0, f0, f2
	  lfs       f2, 0x70(r31)
	  stfs      f6, 0x7C(r1)
	  fmadds    f0, f1, f3, f0
	  stfs      f5, 0x80(r1)
	  stfs      f4, 0x84(r1)
	  fmadds    f0, f2, f7, f0
	  stfs      f0, 0x74(r31)
	  psq_l     f31,0x148(r1),0,0
	  lfd       f31, 0x140(r1)
	  psq_l     f30,0x138(r1),0,0
	  lfd       f30, 0x130(r1)
	  psq_l     f29,0x128(r1),0,0
	  lfd       f29, 0x120(r1)
	  psq_l     f28,0x118(r1),0,0
	  lfd       f28, 0x110(r1)
	  psq_l     f27,0x108(r1),0,0
	  lfd       f27, 0x100(r1)
	  psq_l     f26,0xF8(r1),0,0
	  lfd       f26, 0xF0(r1)
	  psq_l     f25,0xE8(r1),0,0
	  lfd       f25, 0xE0(r1)
	  psq_l     f24,0xD8(r1),0,0
	  lfd       f24, 0xD0(r1)
	  psq_l     f23,0xC8(r1),0,0
	  lfd       f23, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r0, 0x154(r1)
	  lwz       r29, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x150
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void Sys::OBB::constructOBB2((Sys::VertexTable&, Sys::TriangleTable&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041D730
 * Size:	0002D8
 */
void Sys::OBB::autoDivide((Sys::VertexTable&, Sys::TriangleTable&, int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r30, r6
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r31, r7
	  lwz       r0, 0xF4(r3)
	  cmpw      r0, r30
	  ble-      .loc_0x2C4
	  cmpwi     r31, 0
	  ble-      .loc_0x2C4
	  bl        0x46C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2C4
	  lwz       r26, 0xC0(r27)
	  cmplwi    r26, 0
	  beq-      .loc_0x184
	  lwz       r0, 0xF4(r26)
	  cmpw      r0, r30
	  ble-      .loc_0x184
	  subic.    r0, r31, 0x1
	  ble-      .loc_0x184
	  mr        r3, r26
	  mr        r4, r28
	  mr        r5, r29
	  bl        0x434
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x184
	  lwz       r25, 0xC0(r26)
	  cmplwi    r25, 0
	  beq-      .loc_0x100
	  addi      r3, r25, 0xD8
	  bl        .loc_0x2D8
	  cmpw      r3, r30
	  ble-      .loc_0x100
	  subic.    r0, r31, 0x2
	  ble-      .loc_0x100
	  addi      r3, r25, 0xD8
	  bl        .loc_0x2D8
	  mr        r3, r25
	  mr        r4, r28
	  mr        r5, r29
	  bl        0x3F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x100
	  lwz       r3, 0xC0(r25)
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  subi      r7, r31, 0x3
	  bl        .loc_0x0

	.loc_0xE0:
	  lwz       r3, 0xC4(r25)
	  cmplwi    r3, 0
	  beq-      .loc_0x100
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  subi      r7, r31, 0x3
	  bl        .loc_0x0

	.loc_0x100:
	  lwz       r25, 0xC4(r26)
	  cmplwi    r25, 0
	  beq-      .loc_0x184
	  addi      r3, r25, 0xD8
	  bl        .loc_0x2D8
	  cmpw      r3, r30
	  ble-      .loc_0x184
	  subic.    r0, r31, 0x2
	  ble-      .loc_0x184
	  addi      r3, r25, 0xD8
	  bl        .loc_0x2D8
	  mr        r3, r25
	  mr        r4, r28
	  mr        r5, r29
	  bl        0x36C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x184
	  lwz       r3, 0xC0(r25)
	  cmplwi    r3, 0
	  beq-      .loc_0x164
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  subi      r7, r31, 0x3
	  bl        .loc_0x0

	.loc_0x164:
	  lwz       r3, 0xC4(r25)
	  cmplwi    r3, 0
	  beq-      .loc_0x184
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  subi      r7, r31, 0x3
	  bl        .loc_0x0

	.loc_0x184:
	  lwz       r25, 0xC4(r27)
	  cmplwi    r25, 0
	  beq-      .loc_0x2C4
	  lwz       r0, 0xF4(r25)
	  cmpw      r0, r30
	  ble-      .loc_0x2C4
	  subic.    r0, r31, 0x1
	  ble-      .loc_0x2C4
	  mr        r3, r25
	  mr        r4, r28
	  mr        r5, r29
	  bl        0x2F4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2C4
	  lwz       r26, 0xC0(r25)
	  cmplwi    r26, 0
	  beq-      .loc_0x240
	  addi      r3, r26, 0xD8
	  bl        .loc_0x2D8
	  cmpw      r3, r30
	  ble-      .loc_0x240
	  subic.    r0, r31, 0x2
	  ble-      .loc_0x240
	  addi      r3, r26, 0xD8
	  bl        .loc_0x2D8
	  mr        r3, r26
	  mr        r4, r28
	  mr        r5, r29
	  bl        0x2B0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x240
	  lwz       r3, 0xC0(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x220
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  subi      r7, r31, 0x3
	  bl        .loc_0x0

	.loc_0x220:
	  lwz       r3, 0xC4(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x240
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  subi      r7, r31, 0x3
	  bl        .loc_0x0

	.loc_0x240:
	  lwz       r25, 0xC4(r25)
	  cmplwi    r25, 0
	  beq-      .loc_0x2C4
	  addi      r3, r25, 0xD8
	  bl        .loc_0x2D8
	  cmpw      r3, r30
	  ble-      .loc_0x2C4
	  subic.    r0, r31, 0x2
	  ble-      .loc_0x2C4
	  addi      r3, r25, 0xD8
	  bl        .loc_0x2D8
	  mr        r3, r25
	  mr        r4, r28
	  mr        r5, r29
	  bl        0x22C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2C4
	  lwz       r3, 0xC0(r25)
	  cmplwi    r3, 0
	  beq-      .loc_0x2A4
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  subi      r7, r31, 0x3
	  bl        .loc_0x0

	.loc_0x2A4:
	  lwz       r3, 0xC4(r25)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C4
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  subi      r7, r31, 0x3
	  bl        .loc_0x0

	.loc_0x2C4:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x2D8:
	*/
}

/*
 * --INFO--
 * Address:	8041DA08
 * Size:	000008
 */
void ArrayContainer<int>::getNum()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void Sys::OBB::countDivResult((Sys::VertexTable&, Sys::TriangleTable&, int,
                               int&, int&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041DA10
 * Size:	0001C4
 */
void Sys::OBB::determineDivPlane((Sys::VertexTable&, Sys::TriangleTable&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stmw      r21, 0x34(r1)
	  mr        r21, r3
	  lis       r3, 0x5F6
	  lfs       f31, 0x2060(r2)
	  mr        r22, r4
	  lfs       f30, 0x2064(r2)
	  mr        r23, r5
	  mr        r27, r21
	  subi      r25, r3, 0x1F00
	  li        r26, 0
	  li        r24, 0

	.loc_0x48:
	  stfs      f31, 0x8(r1)
	  li        r29, 0
	  mr        r30, r29
	  stfs      f30, 0xC(r1)
	  mr        r31, r29
	  mr        r28, r29
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0x14(r1)
	  lwz       r4, 0x84(r27)
	  lwz       r3, 0x88(r27)
	  lwz       r0, 0x8C(r27)
	  stw       r4, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  lfs       f4, 0x18(r1)
	  stw       r0, 0x20(r1)
	  lfs       f2, 0x1C(r1)
	  lfs       f3, 0x20(r1)
	  stfs      f4, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  lfs       f0, 0x7C(r21)
	  lfs       f1, 0x78(r21)
	  fmuls     f0, f2, f0
	  lfs       f2, 0x80(r21)
	  fmadds    f0, f4, f1, f0
	  fmadds    f0, f3, f2, f0
	  stfs      f0, 0x14(r1)
	  b         .loc_0x104

	.loc_0xB8:
	  lwz       r3, 0xFC(r21)
	  mr        r5, r22
	  lwz       r6, 0x24(r23)
	  addi      r4, r1, 0x8
	  lwzx      r0, r3, r28
	  mulli     r0, r0, 0x60
	  add       r3, r6, r0
	  bl        -0x6FA0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0xE8
	  addi      r29, r29, 0x1
	  b         .loc_0xFC

	.loc_0xE8:
	  bge-      .loc_0xF4
	  addi      r30, r30, 0x1
	  b         .loc_0xFC

	.loc_0xF4:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x1

	.loc_0xFC:
	  addi      r28, r28, 0x4
	  addi      r31, r31, 0x1

	.loc_0x104:
	  lwz       r0, 0xF4(r21)
	  cmpw      r31, r0
	  blt+      .loc_0xB8
	  cmpw      r29, r0
	  add       r3, r29, r30
	  bne-      .loc_0x120
	  add       r3, r3, r29

	.loc_0x120:
	  cmpw      r30, r0
	  bne-      .loc_0x12C
	  add       r3, r3, r30

	.loc_0x12C:
	  cmpw      r3, r25
	  bge-      .loc_0x13C
	  mr        r25, r3
	  mr        r26, r24

	.loc_0x13C:
	  addi      r24, r24, 0x1
	  addi      r27, r27, 0xC
	  cmpwi     r24, 0x3
	  blt+      .loc_0x48
	  mulli     r0, r26, 0xC
	  lfs       f0, 0x7C(r21)
	  lfs       f2, 0x80(r21)
	  lfs       f1, 0x78(r21)
	  add       r4, r21, r0
	  lwz       r0, 0x88(r4)
	  lwz       r3, 0x84(r4)
	  stw       r0, 0x28(r1)
	  lwz       r0, 0x8C(r4)
	  lfs       f4, 0x28(r1)
	  stw       r3, 0x24(r1)
	  fmuls     f0, f4, f0
	  lfs       f3, 0x24(r1)
	  stw       r0, 0x2C(r1)
	  fmadds    f0, f3, f1, f0
	  stfs      f3, 0xC8(r21)
	  lfs       f1, 0x2C(r1)
	  stfs      f4, 0xCC(r21)
	  fmadds    f0, f1, f2, f0
	  stfs      f1, 0xD0(r21)
	  stfs      f0, 0xD4(r21)
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  lmw       r21, 0x34(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041DBD4
 * Size:	000480
 */
void Sys::OBB::divide((Sys::VertexTable&, Sys::TriangleTable&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x140(r1)
	  mflr      r0
	  stw       r0, 0x144(r1)
	  stfd      f31, 0x130(r1)
	  psq_st    f31,0x138(r1),0,0
	  stmw      r23, 0x10C(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  bl        -0x1E8
	  lfs       f31, 0x2060(r2)
	  li        r31, 0x1
	  li        r23, 0x1
	  li        r30, 0
	  li        r29, 0
	  li        r25, 0
	  li        r24, 0
	  b         .loc_0x94

	.loc_0x48:
	  lwz       r3, 0xFC(r26)
	  mr        r5, r27
	  lwz       r6, 0x24(r28)
	  addi      r4, r26, 0xC8
	  lwzx      r0, r3, r24
	  mulli     r0, r0, 0x60
	  add       r3, r6, r0
	  bl        -0x70F4
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x78
	  addi      r30, r30, 0x1
	  b         .loc_0x8C

	.loc_0x78:
	  bge-      .loc_0x84
	  addi      r29, r29, 0x1
	  b         .loc_0x8C

	.loc_0x84:
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x1

	.loc_0x8C:
	  addi      r24, r24, 0x4
	  addi      r25, r25, 0x1

	.loc_0x94:
	  lwz       r0, 0xF4(r26)
	  cmpw      r25, r0
	  blt+      .loc_0x48
	  cmpwi     r30, 0
	  beq-      .loc_0xB0
	  cmpwi     r29, 0
	  bne-      .loc_0xB8

	.loc_0xB0:
	  li        r3, 0
	  b         .loc_0x464

	.loc_0xB8:
	  cmpw      r30, r0
	  bne-      .loc_0xC4
	  li        r31, 0

	.loc_0xC4:
	  cmpw      r29, r0
	  bne-      .loc_0xD0
	  li        r23, 0

	.loc_0xD0:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xE8
	  rlwinm.   r0,r23,0,24,31
	  bne-      .loc_0xE8
	  li        r3, 0
	  b         .loc_0x464

	.loc_0xE8:
	  li        r3, 0x110
	  bl        -0x3F9E1C
	  mr.       r31, r3
	  beq-      .loc_0x1CC
	  bl        -0xC93C
	  lis       r3, 0x804B
	  lis       r4, 0x8015
	  subi      r0, r3, 0x130
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r3, r31, 0x18
	  addi      r4, r4, 0x1C68
	  li        r6, 0x10
	  li        r7, 0x6
	  bl        -0x35C4B8
	  lis       r4, 0x8012
	  addi      r3, r31, 0x84
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0x3
	  bl        -0x35C4D4
	  lfs       f1, 0x2060(r2)
	  addi      r25, r31, 0xD8
	  lfs       f0, 0x2064(r2)
	  mr        r3, r25
	  stfs      f1, 0xC8(r31)
	  stfs      f0, 0xCC(r31)
	  stfs      f1, 0xD0(r31)
	  stfs      f1, 0xD4(r31)
	  bl        -0xC9A4
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r25)
	  subi      r0, r3, 0x120
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r25)
	  li        r7, 0
	  subi      r6, r5, 0xF4
	  li        r5, 0x1
	  stb       r7, 0x18(r25)
	  subi      r4, r4, 0xAC
	  subi      r3, r3, 0x64
	  addi      r0, r2, 0x2068
	  stw       r6, 0x0(r25)
	  stb       r5, 0x18(r25)
	  stw       r7, 0x20(r25)
	  stw       r7, 0x1C(r25)
	  stw       r7, 0x24(r25)
	  stw       r4, 0x0(r25)
	  stw       r3, 0x0(r25)
	  stw       r0, 0x14(r31)
	  stw       r7, 0xC4(r31)
	  stw       r7, 0xC0(r31)

	.loc_0x1CC:
	  stw       r31, 0xC0(r26)
	  mr        r3, r26
	  lwz       r4, 0xC0(r26)
	  bl        -0xC9A4
	  li        r3, 0x110
	  bl        -0x3F9F10
	  mr.       r31, r3
	  beq-      .loc_0x2C4
	  mr        r25, r31
	  bl        -0xCA34
	  lis       r3, 0x804B
	  lis       r4, 0x8015
	  subi      r0, r3, 0x130
	  li        r5, 0
	  stw       r0, 0x0(r25)
	  addi      r3, r25, 0x18
	  addi      r4, r4, 0x1C68
	  li        r6, 0x10
	  li        r7, 0x6
	  bl        -0x35C5B0
	  lis       r4, 0x8012
	  addi      r3, r25, 0x84
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0x3
	  bl        -0x35C5CC
	  lfs       f1, 0x2060(r2)
	  addi      r24, r25, 0xD8
	  lfs       f0, 0x2064(r2)
	  mr        r3, r24
	  stfs      f1, 0xC8(r25)
	  stfs      f0, 0xCC(r25)
	  stfs      f1, 0xD0(r25)
	  stfs      f1, 0xD4(r25)
	  bl        -0xCA9C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r24)
	  subi      r0, r3, 0x120
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r24)
	  li        r7, 0
	  subi      r6, r5, 0xF4
	  li        r5, 0x1
	  stb       r7, 0x18(r24)
	  subi      r4, r4, 0xAC
	  subi      r3, r3, 0x64
	  addi      r0, r2, 0x2068
	  stw       r6, 0x0(r24)
	  stb       r5, 0x18(r24)
	  stw       r7, 0x20(r24)
	  stw       r7, 0x1C(r24)
	  stw       r7, 0x24(r24)
	  stw       r4, 0x0(r24)
	  stw       r3, 0x0(r24)
	  stw       r0, 0x14(r25)
	  stw       r7, 0xC4(r25)
	  stw       r7, 0xC0(r25)

	.loc_0x2C4:
	  stw       r31, 0xC4(r26)
	  mr        r3, r26
	  lwz       r4, 0xC4(r26)
	  bl        -0xCA9C
	  lwz       r3, 0xC0(r26)
	  mr        r4, r30
	  lwzu      r12, 0xD8(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC4(r26)
	  mr        r4, r29
	  lwzu      r12, 0xD8(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r25, 0
	  lfs       f31, 0x2060(r2)
	  mr        r24, r25
	  b         .loc_0x3B4

	.loc_0x314:
	  lwz       r3, 0xFC(r26)
	  mr        r5, r27
	  addi      r4, r26, 0xC8
	  lwzx      r0, r3, r24
	  stw       r0, 0x8(r1)
	  mulli     r0, r0, 0x60
	  lwz       r3, 0x24(r28)
	  add       r3, r3, r0
	  bl        -0x73C4
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x35C
	  lwz       r3, 0xC0(r26)
	  addi      r4, r1, 0x8
	  lwzu      r12, 0xD8(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3AC

	.loc_0x35C:
	  bge-      .loc_0x37C
	  lwz       r3, 0xC4(r26)
	  addi      r4, r1, 0x8
	  lwzu      r12, 0xD8(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3AC

	.loc_0x37C:
	  lwz       r3, 0xC0(r26)
	  addi      r4, r1, 0x8
	  lwzu      r12, 0xD8(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC4(r26)
	  addi      r4, r1, 0x8
	  lwzu      r12, 0xD8(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3AC:
	  addi      r24, r24, 0x4
	  addi      r25, r25, 0x1

	.loc_0x3B4:
	  lwz       r0, 0xF4(r26)
	  cmpw      r25, r0
	  blt+      .loc_0x314
	  lwz       r24, 0xC0(r26)
	  mr        r4, r27
	  mr        r5, r28
	  addi      r6, r1, 0x90
	  addi      r3, r24, 0xD8
	  addi      r7, r1, 0x18
	  bl        -0x48C8
	  addi      r3, r1, 0xB4
	  bl        -0xC344
	  addi      r3, r1, 0x90
	  addi      r4, r1, 0xD8
	  addi      r5, r1, 0xB4
	  bl        -0xC324
	  mr        r3, r24
	  mr        r4, r27
	  mr        r5, r28
	  addi      r6, r1, 0xD8
	  addi      r7, r1, 0xB4
	  addi      r8, r1, 0x18
	  bl        -0xFB4
	  lwz       r24, 0xC4(r26)
	  mr        r4, r27
	  mr        r5, r28
	  addi      r6, r1, 0x24
	  addi      r3, r24, 0xD8
	  addi      r7, r1, 0xC
	  bl        -0x4918
	  addi      r3, r1, 0x48
	  bl        -0xC394
	  addi      r3, r1, 0x24
	  addi      r4, r1, 0x6C
	  addi      r5, r1, 0x48
	  bl        -0xC374
	  mr        r3, r24
	  mr        r4, r27
	  mr        r5, r28
	  addi      r6, r1, 0x6C
	  addi      r7, r1, 0x48
	  addi      r8, r1, 0xC
	  bl        -0x1004
	  li        r3, 0x1

	.loc_0x464:
	  psq_l     f31,0x138(r1),0,0
	  lfd       f31, 0x130(r1)
	  lmw       r23, 0x10C(r1)
	  lwz       r0, 0x144(r1)
	  mtlr      r0
	  addi      r1, r1, 0x140
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041E054
 * Size:	000144
 */
void Sys::OBBTree::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r0, r31
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r0
	  bl        -0xCCE8
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r4, 0x45F0
	  addi      r30, r31, 0x20
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x4620
	  mr        r3, r30
	  stw       r0, 0x0(r31)
	  bl        -0xCD0C
	  lis       r3, 0x804B
	  lis       r4, 0x8015
	  subi      r0, r3, 0x130
	  li        r5, 0
	  stw       r0, 0x0(r30)
	  addi      r3, r30, 0x18
	  addi      r4, r4, 0x1C68
	  li        r6, 0x10
	  li        r7, 0x6
	  bl        -0x35C888
	  lis       r4, 0x8012
	  addi      r3, r30, 0x84
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0x3
	  bl        -0x35C8A4
	  lfs       f1, 0x2060(r2)
	  addi      r29, r30, 0xD8
	  lfs       f0, 0x2064(r2)
	  mr        r3, r29
	  stfs      f1, 0xC8(r30)
	  stfs      f0, 0xCC(r30)
	  stfs      f1, 0xD0(r30)
	  stfs      f1, 0xD4(r30)
	  bl        -0xCD74
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r29)
	  subi      r0, r3, 0x120
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r29)
	  li        r8, 0
	  subi      r7, r5, 0xF4
	  li        r6, 0x1
	  stb       r8, 0x18(r29)
	  subi      r5, r4, 0xAC
	  subi      r4, r3, 0x64
	  addi      r0, r2, 0x2068
	  stw       r7, 0x0(r29)
	  mr        r3, r31
	  stb       r6, 0x18(r29)
	  stw       r8, 0x20(r29)
	  stw       r8, 0x1C(r29)
	  stw       r8, 0x24(r29)
	  stw       r5, 0x0(r29)
	  stw       r4, 0x0(r29)
	  stw       r0, 0x14(r30)
	  stw       r8, 0xC4(r30)
	  stw       r8, 0xC0(r30)
	  stw       r8, 0x18(r31)
	  stw       r8, 0x1C(r31)
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
 * Address:	8041E198
 * Size:	00002C
 */
void Sys::OBBTree::getCurrTri((Game::CurrTriInfo&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1C(r3)
	  addi      r3, r3, 0x20
	  stw       r0, 0x10(r4)
	  bl        .loc_0x2C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x2C:
	*/
}

/*
 * --INFO--
 * Address:	8041E1C4
 * Size:	000498
 */
void Sys::OBB::getCurrTri((Game::CurrTriInfo&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  lwz       r30, 0xC0(r3)
	  li        r3, 0
	  cmplwi    r30, 0
	  bne-      .loc_0x40
	  lwz       r0, 0xC4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  li        r3, 0x1

	.loc_0x40:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  mr        r3, r29
	  mr        r4, r31
	  bl        0x4A0
	  b         .loc_0x47C

	.loc_0x58:
	  lfs       f0, 0x2060(r2)
	  lfs       f1, 0xCC(r29)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x94
	  lfs       f0, 0x4(r31)
	  lfs       f2, 0x0(r31)
	  fmuls     f0, f0, f1
	  lfs       f1, 0xC8(r29)
	  lfs       f4, 0x8(r31)
	  lfs       f3, 0xD0(r29)
	  fmadds    f1, f2, f1, f0
	  lfs       f0, 0xD4(r29)
	  fmadds    f1, f4, f3, f1
	  fsubs     f1, f1, f0
	  b         .loc_0xC4

	.loc_0x94:
	  lfs       f6, 0xD4(r29)
	  lfs       f2, 0xC8(r29)
	  lfs       f3, 0x0(r31)
	  lfs       f4, 0xD0(r29)
	  fnmsubs   f0, f2, f3, f6
	  lfs       f5, 0x8(r31)
	  fnmsubs   f0, f4, f5, f0
	  fdivs     f0, f0, f1
	  fmuls     f0, f0, f1
	  fmadds    f0, f3, f2, f0
	  fmadds    f0, f5, f4, f0
	  fsubs     f1, f0, f6

	.loc_0xC4:
	  lfs       f0, 0x2070(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1BC
	  cmplwi    r30, 0
	  beq-      .loc_0x47C
	  mr        r3, r30
	  bl        0x3EC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF8
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x400
	  b         .loc_0x47C

	.loc_0xF8:
	  lfs       f1, 0x2060(r2)
	  lfs       f0, 0xCC(r30)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x118
	  mr        r4, r31
	  addi      r3, r30, 0xC8
	  bl        .loc_0x498
	  b         .loc_0x158

	.loc_0x118:
	  mr        r4, r31
	  addi      r3, r1, 0x2C
	  bl        -0x2E8DC4
	  lfs       f2, 0xC8(r30)
	  addi      r3, r30, 0xC8
	  lfs       f1, 0x0(r31)
	  addi      r4, r1, 0x2C
	  lfs       f0, 0xD4(r30)
	  lfs       f3, 0xD0(r30)
	  fnmsubs   f1, f2, f1, f0
	  lfs       f2, 0x8(r31)
	  lfs       f0, 0xCC(r30)
	  fnmsubs   f1, f3, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x30(r1)
	  bl        .loc_0x498

	.loc_0x158:
	  lfs       f0, 0x2070(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x17C
	  lwz       r3, 0xC0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x47C
	  mr        r4, r31
	  bl        .loc_0x0
	  b         .loc_0x47C

	.loc_0x17C:
	  lfs       f0, 0x2074(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1A0
	  lwz       r3, 0xC4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x47C
	  mr        r4, r31
	  bl        .loc_0x0
	  b         .loc_0x47C

	.loc_0x1A0:
	  lwz       r3, 0xC0(r30)
	  mr        r4, r31
	  bl        .loc_0x0
	  lwz       r3, 0xC4(r30)
	  mr        r4, r31
	  bl        .loc_0x0
	  b         .loc_0x47C

	.loc_0x1BC:
	  lfs       f0, 0x2074(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2B8
	  lwz       r30, 0xC4(r29)
	  cmplwi    r30, 0
	  beq-      .loc_0x47C
	  mr        r3, r30
	  bl        0x2F0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F4
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x304
	  b         .loc_0x47C

	.loc_0x1F4:
	  lfs       f1, 0x2060(r2)
	  lfs       f0, 0xCC(r30)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x214
	  mr        r4, r31
	  addi      r3, r30, 0xC8
	  bl        .loc_0x498
	  b         .loc_0x254

	.loc_0x214:
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  bl        -0x2E8EC0
	  lfs       f2, 0xC8(r30)
	  addi      r3, r30, 0xC8
	  lfs       f1, 0x0(r31)
	  addi      r4, r1, 0x20
	  lfs       f0, 0xD4(r30)
	  lfs       f3, 0xD0(r30)
	  fnmsubs   f1, f2, f1, f0
	  lfs       f2, 0x8(r31)
	  lfs       f0, 0xCC(r30)
	  fnmsubs   f1, f3, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x24(r1)
	  bl        .loc_0x498

	.loc_0x254:
	  lfs       f0, 0x2070(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x278
	  lwz       r3, 0xC0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x47C
	  mr        r4, r31
	  bl        .loc_0x0
	  b         .loc_0x47C

	.loc_0x278:
	  lfs       f0, 0x2074(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x29C
	  lwz       r3, 0xC4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x47C
	  mr        r4, r31
	  bl        .loc_0x0
	  b         .loc_0x47C

	.loc_0x29C:
	  lwz       r3, 0xC0(r30)
	  mr        r4, r31
	  bl        .loc_0x0
	  lwz       r3, 0xC4(r30)
	  mr        r4, r31
	  bl        .loc_0x0
	  b         .loc_0x47C

	.loc_0x2B8:
	  mr        r3, r30
	  bl        0x20C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2D8
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x220
	  b         .loc_0x398

	.loc_0x2D8:
	  lfs       f1, 0x2060(r2)
	  lfs       f0, 0xCC(r30)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x2F8
	  mr        r4, r31
	  addi      r3, r30, 0xC8
	  bl        .loc_0x498
	  b         .loc_0x338

	.loc_0x2F8:
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  bl        -0x2E8FA4
	  lfs       f2, 0xC8(r30)
	  addi      r3, r30, 0xC8
	  lfs       f1, 0x0(r31)
	  addi      r4, r1, 0x14
	  lfs       f0, 0xD4(r30)
	  lfs       f3, 0xD0(r30)
	  fnmsubs   f1, f2, f1, f0
	  lfs       f2, 0x8(r31)
	  lfs       f0, 0xCC(r30)
	  fnmsubs   f1, f3, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x18(r1)
	  bl        .loc_0x498

	.loc_0x338:
	  lfs       f0, 0x2070(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x35C
	  lwz       r3, 0xC0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x398
	  mr        r4, r31
	  bl        .loc_0x0
	  b         .loc_0x398

	.loc_0x35C:
	  lfs       f0, 0x2074(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x380
	  lwz       r3, 0xC4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x398
	  mr        r4, r31
	  bl        .loc_0x0
	  b         .loc_0x398

	.loc_0x380:
	  lwz       r3, 0xC0(r30)
	  mr        r4, r31
	  bl        .loc_0x0
	  lwz       r3, 0xC4(r30)
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x398:
	  lwz       r30, 0xC4(r29)
	  mr        r3, r30
	  bl        0x128
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3BC
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x13C
	  b         .loc_0x47C

	.loc_0x3BC:
	  lfs       f1, 0x2060(r2)
	  lfs       f0, 0xCC(r30)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x3DC
	  mr        r4, r31
	  addi      r3, r30, 0xC8
	  bl        .loc_0x498
	  b         .loc_0x41C

	.loc_0x3DC:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  bl        -0x2E9088
	  lfs       f2, 0xC8(r30)
	  addi      r3, r30, 0xC8
	  lfs       f1, 0x0(r31)
	  addi      r4, r1, 0x8
	  lfs       f0, 0xD4(r30)
	  lfs       f3, 0xD0(r30)
	  fnmsubs   f1, f2, f1, f0
	  lfs       f2, 0x8(r31)
	  lfs       f0, 0xCC(r30)
	  fnmsubs   f1, f3, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0xC(r1)
	  bl        .loc_0x498

	.loc_0x41C:
	  lfs       f0, 0x2070(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x440
	  lwz       r3, 0xC0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x47C
	  mr        r4, r31
	  bl        .loc_0x0
	  b         .loc_0x47C

	.loc_0x440:
	  lfs       f0, 0x2074(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x464
	  lwz       r3, 0xC4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x47C
	  mr        r4, r31
	  bl        .loc_0x0
	  b         .loc_0x47C

	.loc_0x464:
	  lwz       r3, 0xC0(r30)
	  mr        r4, r31
	  bl        .loc_0x0
	  lwz       r3, 0xC4(r30)
	  mr        r4, r31
	  bl        .loc_0x0

	.loc_0x47C:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0x498:
	*/
}

/*
 * --INFO--
 * Address:	8041E65C
 * Size:	000030
 */
void Plane::calcDist(const Vector3<float>&) const
{
	/*
	.loc_0x0:
	  lfs       f1, 0x4(r4)
	  lfs       f0, 0x4(r3)
	  lfs       f2, 0x0(r4)
	  fmuls     f0, f1, f0
	  lfs       f1, 0x0(r3)
	  lfs       f4, 0x8(r4)
	  lfs       f3, 0x8(r3)
	  fmadds    f1, f2, f1, f0
	  lfs       f0, 0xC(r3)
	  fmadds    f1, f4, f3, f1
	  fsubs     f1, f1, f0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041E68C
 * Size:	000028
 */
void Sys::OBB::isLeaf(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0xC0(r3)
	  li        r4, 0
	  cmplwi    r0, 0
	  bne-      .loc_0x20
	  lwz       r0, 0xC4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x20
	  li        r4, 0x1

	.loc_0x20:
	  mr        r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041E6B4
 * Size:	000118
 */
void Sys::OBB::getCurrTriTriList((Game::CurrTriInfo&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0xF8

	.loc_0x24:
	  lwz       r5, 0x10(r28)
	  addi      r4, r1, 0x8
	  lwz       r3, 0xFC(r27)
	  lwz       r5, 0x24(r5)
	  lwzx      r0, r3, r30
	  lfs       f0, 0x0(r28)
	  mulli     r0, r0, 0x60
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x4(r28)
	  add       r31, r5, r0
	  mr        r3, r31
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x8(r28)
	  stfs      f0, 0x10(r1)
	  bl        -0x6B88
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0
	  lfs       f0, 0x18(r28)
	  lfs       f1, 0xC(r1)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xAC
	  stfs      f1, 0x18(r28)
	  lbz       r0, 0xC(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  lfs       f0, 0xC(r31)
	  li        r0, 0x1
	  stfs      f0, 0x20(r28)
	  lfs       f0, 0x10(r31)
	  stfs      f0, 0x24(r28)
	  lfs       f0, 0x14(r31)
	  stfs      f0, 0x28(r28)
	  stw       r31, 0x14(r28)
	  stb       r0, 0xD(r28)

	.loc_0xAC:
	  lfs       f0, 0x1C(r28)
	  lfs       f1, 0xC(r1)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0xF0
	  stfs      f1, 0x1C(r28)
	  lbz       r0, 0xC(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  lfs       f0, 0xC(r31)
	  li        r0, 0x1
	  stfs      f0, 0x20(r28)
	  lfs       f0, 0x10(r31)
	  stfs      f0, 0x24(r28)
	  lfs       f0, 0x14(r31)
	  stfs      f0, 0x28(r28)
	  stw       r31, 0x14(r28)
	  stb       r0, 0xD(r28)

	.loc_0xF0:
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0xF8:
	  lwz       r0, 0xF4(r27)
	  cmpw      r29, r0
	  blt+      .loc_0x24
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041E7CC
 * Size:	0000B4
 */
void Sys::OBBTree::construct((Sys::VertexTable*, Sys::TriangleTable*, int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stmw      r26, 0x88(r1)
	  mr        r26, r3
	  mr        r27, r6
	  mr        r28, r7
	  stw       r4, 0x18(r3)
	  mr        r4, r5
	  stw       r5, 0x1C(r3)
	  addi      r3, r26, 0xF8
	  bl        -0x52EC
	  lwz       r29, 0x1C(r26)
	  addi      r31, r26, 0x20
	  lwz       r30, 0x18(r26)
	  addi      r3, r31, 0xD8
	  mr        r5, r29
	  addi      r6, r1, 0x14
	  mr        r4, r30
	  addi      r7, r1, 0x8
	  bl        -0x5138
	  addi      r3, r1, 0x38
	  bl        -0xCBB4
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x5C
	  addi      r5, r1, 0x38
	  bl        -0xCB94
	  mr        r3, r31
	  mr        r4, r30
	  mr        r5, r29
	  addi      r6, r1, 0x5C
	  addi      r7, r1, 0x38
	  addi      r8, r1, 0x8
	  bl        -0x1824
	  lwz       r4, 0x18(r26)
	  mr        r6, r27
	  lwz       r5, 0x1C(r26)
	  mr        r7, r28
	  mr        r3, r31
	  bl        -0x1138
	  lmw       r26, 0x88(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Sys::OBBTree::draw((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void Sys::OBBTree::write((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041E880
 * Size:	000118
 */
void Sys::OBBTree::read((Stream&))
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
	  li        r3, 0x50
	  bl        -0x3FAA00
	  mr.       r31, r3
	  beq-      .loc_0xA0
	  bl        -0xD520
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r4, 0x804B
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x2C
	  lis       r3, 0x804F
	  li        r6, 0
	  stw       r0, 0x0(r31)
	  subi      r5, r4, 0x1C
	  li        r4, 0x1
	  subi      r0, r3, 0x4A40
	  stb       r6, 0x18(r31)
	  lfs       f1, 0x2058(r2)
	  stw       r5, 0x0(r31)
	  lfs       f0, 0x205C(r2)
	  stb       r4, 0x18(r31)
	  stw       r6, 0x20(r31)
	  stw       r6, 0x1C(r31)
	  stw       r6, 0x24(r31)
	  stw       r0, 0x0(r31)
	  stfs      f1, 0x28(r31)
	  stfs      f1, 0x2C(r31)
	  stfs      f1, 0x30(r31)
	  stfs      f0, 0x34(r31)
	  stfs      f0, 0x38(r31)
	  stfs      f0, 0x3C(r31)

	.loc_0xA0:
	  stw       r31, 0x18(r29)
	  mr        r4, r30
	  lwz       r3, 0x18(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x28
	  bl        -0x3FAA9C
	  mr.       r0, r3
	  beq-      .loc_0xD4
	  bl        -0x4FD0
	  mr        r0, r3

	.loc_0xD4:
	  stw       r0, 0x1C(r29)
	  mr        r4, r30
	  lwz       r3, 0x1C(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r29, 0x20
	  bl        0x12E0
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
 * Address:	........
 * Size:	000030
 */
void Sys::OBBTree::writeVertsOnly((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void Sys::OBBTree::writeWithoutVerts((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041E998
 * Size:	000078
 */
void Sys::OBBTree::readWithoutVerts((Stream&, Sys::VertexTable&))
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
	  stw       r5, 0x18(r3)
	  li        r3, 0x28
	  bl        -0x3FAB18
	  mr.       r0, r3
	  beq-      .loc_0x38
	  bl        -0x504C
	  mr        r0, r3

	.loc_0x38:
	  stw       r0, 0x1C(r30)
	  mr        r4, r31
	  lwz       r3, 0x1C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r30, 0x20
	  bl        0x1264
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
 * Address:	8041EA10
 * Size:	000024
 */
void Sys::OBBTree::traceMove((Matrixf&, Matrixf&, Game::MoveInfo&, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x2060(r2)
	  stw       r0, 0x14(r1)
	  bl        0x1588
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041EA34
 * Size:	000024
 */
void Sys::OBBTree::traceMove_global((Game::MoveInfo&, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x2060(r2)
	  stw       r0, 0x14(r1)
	  bl        0x2210
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0003A4
 */
void Sys::OBBTree::traceMove_original((Matrixf&, Matrixf&, Game::MoveInfo&,
                                       float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041EA58
 * Size:	000214
 */
void Sys::OBBTree::findRayIntersection((Sys::RayIntersectInfo&, Matrixf&,
                                        Matrixf&))
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
	  stfd      f26, 0x60(r1)
	  psq_st    f26,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  stw       r28, 0x50(r1)
	  mr        r29, r4
	  mr        r30, r5
	  lfs       f0, 0x0(r4)
	  mr        r31, r6
	  mr        r28, r3
	  addi      r4, r1, 0x3C
	  stfs      f0, 0x3C(r1)
	  mr        r3, r31
	  addi      r5, r1, 0x14
	  lfs       f0, 0x4(r29)
	  stfs      f0, 0x40(r1)
	  lfs       f0, 0x8(r29)
	  stfs      f0, 0x44(r1)
	  lfs       f0, 0xC(r29)
	  stfs      f0, 0x30(r1)
	  lfs       f0, 0x10(r29)
	  stfs      f0, 0x34(r1)
	  lfs       f0, 0x14(r29)
	  stfs      f0, 0x38(r1)
	  bl        -0x333F18
	  lfs       f31, 0x14(r1)
	  mr        r3, r31
	  lfs       f30, 0x18(r1)
	  addi      r4, r1, 0x30
	  lfs       f29, 0x1C(r1)
	  addi      r5, r1, 0x8
	  bl        -0x333F34
	  lfs       f1, 0x4(r29)
	  lfs       f0, 0x10(r29)
	  lfs       f3, 0x0(r29)
	  fsubs     f4, f1, f0
	  lfs       f0, 0xC(r29)
	  lfs       f2, 0x8(r29)
	  fsubs     f3, f3, f0
	  lfs       f1, 0x14(r29)
	  fmuls     f0, f4, f4
	  fsubs     f1, f2, f1
	  lfs       f26, 0x8(r1)
	  lfs       f28, 0xC(r1)
	  fmadds    f0, f3, f3, f0
	  lfs       f27, 0x10(r1)
	  fmadds    f1, f1, f1, f0
	  bl        -0xD348
	  fadds     f3, f31, f26
	  lfs       f4, 0x206C(r2)
	  fadds     f2, f30, f28
	  stfs      f1, 0x2C(r1)
	  fadds     f0, f29, f27
	  addi      r3, r28, 0x120
	  fmuls     f3, f3, f4
	  addi      r4, r1, 0x20
	  fmuls     f1, f2, f4
	  fmuls     f0, f0, f4
	  stfs      f3, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0x8C70
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x140
	  li        r3, 0
	  b         .loc_0x1C4

	.loc_0x140:
	  lwz       r0, 0x1C(r28)
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  stw       r0, 0x30(r29)
	  addi      r3, r28, 0x20
	  stfs      f31, 0x0(r29)
	  stfs      f30, 0x4(r29)
	  stfs      f29, 0x8(r29)
	  stfs      f26, 0xC(r29)
	  stfs      f28, 0x10(r29)
	  stfs      f27, 0x14(r29)
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x20(r29)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x24(r29)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x28(r29)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x2C(r29)
	  bl        .loc_0x214
	  lfs       f0, 0x3C(r1)
	  stfs      f0, 0x0(r29)
	  lfs       f0, 0x40(r1)
	  stfs      f0, 0x4(r29)
	  lfs       f0, 0x44(r1)
	  stfs      f0, 0x8(r29)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0xC(r29)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x10(r29)
	  lfs       f0, 0x38(r1)
	  stfs      f0, 0x14(r29)

	.loc_0x1C4:
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
	  psq_l     f26,0x68(r1),0,0
	  lfd       f26, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r0, 0xC4(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr

	.loc_0x214:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void testIntersection__Q23Sys7OBBTreeFRQ23Sys6SphereR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000180
 */
void testIntersectionTriList__Q23Sys3OBBFRQ23Sys6SphereR10Vector3<float>
RQ23Sys11VertexTableRQ23Sys13TriangleTable(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void testIntersection__Q23Sys3OBBFRQ23Sys6SphereR10Vector3<float>
RQ23Sys11VertexTableRQ23Sys13TriangleTable(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000224
 */
void traceMoveTriList_original__Q23Sys3OBBFRQ24Game8MoveInfoRQ23Sys11VertexTableRQ23Sys13TriangleTableR7MatrixfR7MatrixfRiPPQ23Sys8TrianglePfP10Vector3<
    float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0007F0
 */
void traceMove_original__Q23Sys3OBBFRQ24Game8MoveInfoRQ23Sys11VertexTableRQ23Sys13TriangleTableR7MatrixfR7MatrixfRiPPQ23Sys8TrianglePfP10Vector3<
    float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041EC6C
 * Size:	0005C0
 */
void Sys::OBB::findRayIntersection((Sys::RayIntersectInfo&, Matrixf&, Matrixf&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r3
	  mr        r31, r4
	  mr        r30, r5
	  mr        r29, r6
	  lwz       r26, 0xC0(r3)
	  li        r3, 0
	  cmplwi    r26, 0
	  bne-      .loc_0x40
	  lwz       r0, 0xC4(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  li        r3, 0x1

	.loc_0x40:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  mr        r3, r27
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x5AC

	.loc_0x60:
	  lfs       f1, 0x24(r31)
	  lfs       f0, 0xCC(r27)
	  lfs       f2, 0x20(r31)
	  fmuls     f0, f1, f0
	  lfs       f1, 0xC8(r27)
	  lfs       f4, 0x28(r31)
	  lfs       f3, 0xD0(r27)
	  fmadds    f1, f2, f1, f0
	  lfs       f0, 0xD4(r27)
	  lfs       f2, 0x2C(r31)
	  fmadds    f1, f4, f3, f1
	  fsubs     f1, f1, f0
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x1DC
	  cmplwi    r26, 0
	  beq-      .loc_0x1C4
	  mr        r3, r26
	  addi      r27, r31, 0x20
	  bl        -0x688
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xCC
	  mr        r3, r26
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x5AC

	.loc_0xCC:
	  mr        r4, r27
	  addi      r3, r26, 0xC8
	  bl        -0x6E4
	  lfs       f0, 0xC(r27)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x11C
	  lwz       r3, 0xC0(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x104
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  b         .loc_0x5AC

	.loc_0x104:
	  mr        r3, r26
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x5AC

	.loc_0x11C:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x160
	  lwz       r3, 0xC4(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x148
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  b         .loc_0x5AC

	.loc_0x148:
	  mr        r3, r26
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x5AC

	.loc_0x160:
	  lwz       r3, 0xC0(r26)
	  li        r27, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x184
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  mr        r27, r3

	.loc_0x184:
	  lwz       r3, 0xC4(r26)
	  li        r4, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x1A8
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  mr        r4, r3

	.loc_0x1A8:
	  rlwinm.   r0,r27,0,24,31
	  li        r3, 0
	  bne-      .loc_0x1BC
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x5AC

	.loc_0x1BC:
	  li        r3, 0x1
	  b         .loc_0x5AC

	.loc_0x1C4:
	  mr        r3, r27
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x5AC

	.loc_0x1DC:
	  fneg      f0, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x330
	  lwz       r28, 0xC4(r27)
	  cmplwi    r28, 0
	  beq-      .loc_0x318
	  mr        r3, r28
	  addi      r26, r31, 0x20
	  bl        -0x7DC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x220
	  mr        r3, r28
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x5AC

	.loc_0x220:
	  mr        r4, r26
	  addi      r3, r28, 0xC8
	  bl        -0x838
	  lfs       f0, 0xC(r26)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x270
	  lwz       r3, 0xC0(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x258
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  b         .loc_0x5AC

	.loc_0x258:
	  mr        r3, r28
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x5AC

	.loc_0x270:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2B4
	  lwz       r3, 0xC4(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x29C
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  b         .loc_0x5AC

	.loc_0x29C:
	  mr        r3, r28
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x5AC

	.loc_0x2B4:
	  lwz       r3, 0xC0(r28)
	  li        r26, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x2D8
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  mr        r26, r3

	.loc_0x2D8:
	  lwz       r3, 0xC4(r28)
	  li        r4, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x2FC
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  mr        r4, r3

	.loc_0x2FC:
	  rlwinm.   r0,r26,0,24,31
	  li        r3, 0
	  bne-      .loc_0x310
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x5AC

	.loc_0x310:
	  li        r3, 0x1
	  b         .loc_0x5AC

	.loc_0x318:
	  mr        r3, r27
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x5AC

	.loc_0x330:
	  cmplwi    r26, 0
	  li        r28, 0
	  beq-      .loc_0x460
	  mr        r3, r26
	  addi      r28, r31, 0x20
	  bl        -0x924
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x368
	  mr        r3, r26
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x45C

	.loc_0x368:
	  mr        r4, r28
	  addi      r3, r26, 0xC8
	  bl        -0x980
	  lfs       f0, 0xC(r28)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3B8
	  lwz       r3, 0xC0(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x3A0
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  b         .loc_0x45C

	.loc_0x3A0:
	  mr        r3, r26
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x45C

	.loc_0x3B8:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3FC
	  lwz       r3, 0xC4(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x3E4
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  b         .loc_0x45C

	.loc_0x3E4:
	  mr        r3, r26
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x45C

	.loc_0x3FC:
	  lwz       r3, 0xC0(r26)
	  li        r28, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x420
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  mr        r28, r3

	.loc_0x420:
	  lwz       r3, 0xC4(r26)
	  li        r4, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x444
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  mr        r4, r3

	.loc_0x444:
	  rlwinm.   r0,r28,0,24,31
	  li        r3, 0
	  bne-      .loc_0x458
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x45C

	.loc_0x458:
	  li        r3, 0x1

	.loc_0x45C:
	  mr        r28, r3

	.loc_0x460:
	  lwz       r27, 0xC4(r27)
	  li        r3, 0
	  cmplwi    r27, 0
	  beq-      .loc_0x590
	  mr        r3, r27
	  addi      r26, r31, 0x20
	  bl        -0xA58
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x49C
	  mr        r3, r27
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x590

	.loc_0x49C:
	  mr        r4, r26
	  addi      r3, r27, 0xC8
	  bl        -0xAB4
	  lfs       f0, 0xC(r26)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x4EC
	  lwz       r3, 0xC0(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x4D4
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  b         .loc_0x590

	.loc_0x4D4:
	  mr        r3, r27
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x590

	.loc_0x4EC:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x530
	  lwz       r3, 0xC4(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x518
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  b         .loc_0x590

	.loc_0x518:
	  mr        r3, r27
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x5C0
	  b         .loc_0x590

	.loc_0x530:
	  lwz       r3, 0xC0(r27)
	  li        r26, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x554
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  mr        r26, r3

	.loc_0x554:
	  lwz       r3, 0xC4(r27)
	  li        r4, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x578
	  mr        r4, r31
	  mr        r5, r30
	  mr        r6, r29
	  bl        .loc_0x0
	  mr        r4, r3

	.loc_0x578:
	  rlwinm.   r0,r26,0,24,31
	  li        r3, 0
	  bne-      .loc_0x58C
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x590

	.loc_0x58C:
	  li        r3, 0x1

	.loc_0x590:
	  rlwinm.   r0,r28,0,24,31
	  li        r4, 0
	  bne-      .loc_0x5A4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5A8

	.loc_0x5A4:
	  li        r4, 0x1

	.loc_0x5A8:
	  mr        r3, r4

	.loc_0x5AC:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x5C0:
	*/
}

/*
 * --INFO--
 * Address:	8041F22C
 * Size:	000114
 */
void Sys::OBB::findRayIntersectionTriList((Sys::RayIntersectInfo&, Matrixf&,
                                           Matrixf&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r25, 0x24(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r27, r5
	  li        r29, 0
	  li        r28, 0
	  li        r30, 0
	  b         .loc_0xF0

	.loc_0x2C:
	  lwz       r4, 0xFC(r25)
	  mr        r3, r26
	  lwz       r5, 0x30(r26)
	  lwzx      r0, r4, r30
	  lwz       r4, 0x24(r5)
	  mulli     r0, r0, 0x60
	  add       r31, r4, r0
	  mr        r4, r31
	  bl        -0x713C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  lfs       f1, 0x18(r26)
	  mr        r3, r31
	  mr        r4, r26
	  addi      r5, r1, 0x14
	  bl        -0x864C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  lfs       f2, 0x18(r1)
	  li        r29, 0x1
	  lfs       f0, 0x4(r26)
	  lfs       f1, 0x14(r1)
	  fsubs     f4, f2, f0
	  lfs       f0, 0x0(r26)
	  lfs       f2, 0x1C(r1)
	  fsubs     f3, f1, f0
	  lfs       f0, 0x8(r26)
	  fmuls     f1, f4, f4
	  fsubs     f2, f2, f0
	  lfs       f0, 0x40(r26)
	  fmadds    f1, f3, f3, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xE8
	  stfs      f1, 0x40(r26)
	  mr        r3, r27
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x334718
	  lfs       f1, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x34(r26)
	  stfs      f1, 0x38(r26)
	  stfs      f2, 0x3C(r26)
	  lfs       f0, 0x10(r31)
	  stfs      f0, 0x48(r26)

	.loc_0xE8:
	  addi      r30, r30, 0x4
	  addi      r28, r28, 0x1

	.loc_0xF0:
	  lwz       r0, 0xF4(r25)
	  cmpw      r28, r0
	  blt+      .loc_0x2C
	  mr        r3, r29
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041F340
 * Size:	000178
 */
void Sys::OBB::findTriLists((Sys::Sphere&))
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
	  li        r4, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0xC0(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x44
	  lwz       r0, 0xC4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  li        r4, 0x1

	.loc_0x44:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x68
	  li        r0, 0
	  addi      r3, r29, 0xD8
	  stw       r0, 0xE8(r29)
	  stw       r0, 0xE4(r29)
	  stw       r0, 0xE0(r29)
	  stw       r0, 0xDC(r29)
	  b         .loc_0x15C

	.loc_0x68:
	  lfs       f1, 0x4(r30)
	  lfs       f0, 0xCC(r29)
	  lfs       f2, 0x0(r30)
	  fmuls     f0, f1, f0
	  lfs       f1, 0xC8(r29)
	  lfs       f4, 0x8(r30)
	  lfs       f3, 0xD0(r29)
	  fmadds    f1, f2, f1, f0
	  lfs       f0, 0xD4(r29)
	  lfs       f2, 0xC(r30)
	  fmadds    f1, f4, f3, f1
	  fsubs     f1, f1, f0
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0xC4
	  cmplwi    r3, 0
	  beq-      .loc_0x158
	  mr        r4, r30
	  bl        .loc_0x0
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  b         .loc_0x15C

	.loc_0xBC:
	  li        r3, 0
	  b         .loc_0x15C

	.loc_0xC4:
	  fneg      f0, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF8
	  lwz       r3, 0xC4(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x158
	  mr        r4, r30
	  bl        .loc_0x0
	  cmplwi    r3, 0
	  beq-      .loc_0xF0
	  b         .loc_0x15C

	.loc_0xF0:
	  li        r3, 0
	  b         .loc_0x15C

	.loc_0xF8:
	  cmplwi    r3, 0
	  beq-      .loc_0x114
	  mr        r4, r30
	  bl        .loc_0x0
	  cmplwi    r3, 0
	  beq-      .loc_0x114
	  mr        r31, r3

	.loc_0x114:
	  lwz       r3, 0xC4(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x150
	  mr        r4, r30
	  bl        .loc_0x0
	  mr.       r4, r3
	  beq-      .loc_0x150
	  cmplwi    r31, 0
	  beq-      .loc_0x144
	  mr        r3, r31
	  bl        -0xDFA4
	  b         .loc_0x148

	.loc_0x144:
	  mr        r31, r4

	.loc_0x148:
	  mr        r3, r31
	  b         .loc_0x15C

	.loc_0x150:
	  mr        r3, r31
	  b         .loc_0x15C

	.loc_0x158:
	  li        r3, 0

	.loc_0x15C:
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
 * Address:	8041F4B8
 * Size:	00002C
 */
void getMinY__Q23Sys7OBBTreeFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x2078(r2)
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x1C(r3)
	  addi      r3, r3, 0x20
	  bl        .loc_0x2C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x2C:
	*/
}

/*
 * --INFO--
 * Address:	8041F4E4
 * Size:	0006C0
 */
void getMinY__Q23Sys3OBBFR10Vector3<float> RQ23Sys13TriangleTablef(void)
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
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  mr        r28, r3
	  fmr       f31, f1
	  lwz       r29, 0xC0(r3)
	  mr        r30, r4
	  mr        r31, r5
	  li        r3, 0
	  cmplwi    r29, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0xC4(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  li        r3, 0x1

	.loc_0x5C:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  mr        r3, r28
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x6C0
	  b         .loc_0x690

	.loc_0x78:
	  lfs       f0, 0x2060(r2)
	  lfs       f1, 0xCC(r28)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0xB4
	  lfs       f0, 0x4(r30)
	  lfs       f2, 0x0(r30)
	  fmuls     f0, f0, f1
	  lfs       f1, 0xC8(r28)
	  lfs       f4, 0x8(r30)
	  lfs       f3, 0xD0(r28)
	  fmadds    f1, f2, f1, f0
	  lfs       f0, 0xD4(r28)
	  fmadds    f1, f4, f3, f1
	  fsubs     f1, f1, f0
	  b         .loc_0xE4

	.loc_0xB4:
	  lfs       f6, 0xD4(r28)
	  lfs       f2, 0xC8(r28)
	  lfs       f3, 0x0(r30)
	  lfs       f4, 0xD0(r28)
	  fnmsubs   f0, f2, f3, f6
	  lfs       f5, 0x8(r30)
	  fnmsubs   f0, f4, f5, f0
	  fdivs     f0, f0, f1
	  fmuls     f0, f0, f1
	  fmadds    f0, f3, f2, f0
	  fmadds    f0, f5, f4, f0
	  fsubs     f1, f0, f6

	.loc_0xE4:
	  lfs       f0, 0x2070(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x258
	  cmplwi    r29, 0
	  beq-      .loc_0x68C
	  fmr       f30, f31
	  mr        r3, r29
	  bl        -0xF58
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x120
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x6C0
	  b         .loc_0x244

	.loc_0x120:
	  lfs       f1, 0x2060(r2)
	  lfs       f0, 0xCC(r29)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x140
	  mr        r4, r30
	  addi      r3, r29, 0xC8
	  bl        -0xFC0
	  b         .loc_0x180

	.loc_0x140:
	  mr        r4, r30
	  addi      r3, r1, 0x2C
	  bl        -0x2EA10C
	  lfs       f2, 0xC8(r29)
	  addi      r3, r29, 0xC8
	  lfs       f1, 0x0(r30)
	  addi      r4, r1, 0x2C
	  lfs       f0, 0xD4(r29)
	  lfs       f3, 0xD0(r29)
	  fnmsubs   f1, f2, f1, f0
	  lfs       f2, 0x8(r30)
	  lfs       f0, 0xCC(r29)
	  fnmsubs   f1, f3, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x30(r1)
	  bl        -0x1004

	.loc_0x180:
	  lfs       f0, 0x2070(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1BC
	  lwz       r3, 0xC0(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x240
	  fmr       f1, f31
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x1B4
	  b         .loc_0x244

	.loc_0x1B4:
	  fmr       f1, f31
	  b         .loc_0x244

	.loc_0x1BC:
	  lfs       f0, 0x2074(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1F8
	  lwz       r3, 0xC4(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x240
	  fmr       f1, f31
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x1F0
	  b         .loc_0x244

	.loc_0x1F0:
	  fmr       f1, f31
	  b         .loc_0x244

	.loc_0x1F8:
	  fmr       f1, f31
	  lwz       r3, 0xC0(r29)
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x218
	  fmr       f30, f1

	.loc_0x218:
	  fmr       f1, f30
	  lwz       r3, 0xC4(r29)
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f30
	  ble-      .loc_0x238
	  fmr       f30, f1

	.loc_0x238:
	  fmr       f1, f30
	  b         .loc_0x244

	.loc_0x240:
	  fmr       f1, f31

	.loc_0x244:
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x250
	  b         .loc_0x690

	.loc_0x250:
	  fmr       f1, f31
	  b         .loc_0x690

	.loc_0x258:
	  lfs       f0, 0x2074(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3D0
	  lwz       r29, 0xC4(r28)
	  cmplwi    r29, 0
	  beq-      .loc_0x68C
	  fmr       f30, f31
	  mr        r3, r29
	  bl        -0x10D0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x298
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x6C0
	  b         .loc_0x3BC

	.loc_0x298:
	  lfs       f1, 0x2060(r2)
	  lfs       f0, 0xCC(r29)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x2B8
	  mr        r4, r30
	  addi      r3, r29, 0xC8
	  bl        -0x1138
	  b         .loc_0x2F8

	.loc_0x2B8:
	  mr        r4, r30
	  addi      r3, r1, 0x20
	  bl        -0x2EA284
	  lfs       f2, 0xC8(r29)
	  addi      r3, r29, 0xC8
	  lfs       f1, 0x0(r30)
	  addi      r4, r1, 0x20
	  lfs       f0, 0xD4(r29)
	  lfs       f3, 0xD0(r29)
	  fnmsubs   f1, f2, f1, f0
	  lfs       f2, 0x8(r30)
	  lfs       f0, 0xCC(r29)
	  fnmsubs   f1, f3, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x24(r1)
	  bl        -0x117C

	.loc_0x2F8:
	  lfs       f0, 0x2070(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x334
	  lwz       r3, 0xC0(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x3B8
	  fmr       f1, f31
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x32C
	  b         .loc_0x3BC

	.loc_0x32C:
	  fmr       f1, f31
	  b         .loc_0x3BC

	.loc_0x334:
	  lfs       f0, 0x2074(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x370
	  lwz       r3, 0xC4(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x3B8
	  fmr       f1, f31
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x368
	  b         .loc_0x3BC

	.loc_0x368:
	  fmr       f1, f31
	  b         .loc_0x3BC

	.loc_0x370:
	  fmr       f1, f31
	  lwz       r3, 0xC0(r29)
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x390
	  fmr       f30, f1

	.loc_0x390:
	  fmr       f1, f30
	  lwz       r3, 0xC4(r29)
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f30
	  ble-      .loc_0x3B0
	  fmr       f30, f1

	.loc_0x3B0:
	  fmr       f1, f30
	  b         .loc_0x3BC

	.loc_0x3B8:
	  fmr       f1, f31

	.loc_0x3BC:
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x3C8
	  b         .loc_0x690

	.loc_0x3C8:
	  fmr       f1, f31
	  b         .loc_0x690

	.loc_0x3D0:
	  fmr       f30, f31
	  mr        r3, r29
	  bl        -0x1230
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3F8
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x6C0
	  b         .loc_0x51C

	.loc_0x3F8:
	  lfs       f1, 0x2060(r2)
	  lfs       f0, 0xCC(r29)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x418
	  mr        r4, r30
	  addi      r3, r29, 0xC8
	  bl        -0x1298
	  b         .loc_0x458

	.loc_0x418:
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  bl        -0x2EA3E4
	  lfs       f2, 0xC8(r29)
	  addi      r3, r29, 0xC8
	  lfs       f1, 0x0(r30)
	  addi      r4, r1, 0x14
	  lfs       f0, 0xD4(r29)
	  lfs       f3, 0xD0(r29)
	  fnmsubs   f1, f2, f1, f0
	  lfs       f2, 0x8(r30)
	  lfs       f0, 0xCC(r29)
	  fnmsubs   f1, f3, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x18(r1)
	  bl        -0x12DC

	.loc_0x458:
	  lfs       f0, 0x2070(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x494
	  lwz       r3, 0xC0(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x518
	  fmr       f1, f31
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x48C
	  b         .loc_0x51C

	.loc_0x48C:
	  fmr       f1, f31
	  b         .loc_0x51C

	.loc_0x494:
	  lfs       f0, 0x2074(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x4D0
	  lwz       r3, 0xC4(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x518
	  fmr       f1, f31
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x4C8
	  b         .loc_0x51C

	.loc_0x4C8:
	  fmr       f1, f31
	  b         .loc_0x51C

	.loc_0x4D0:
	  fmr       f1, f31
	  lwz       r3, 0xC0(r29)
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x4F0
	  fmr       f30, f1

	.loc_0x4F0:
	  fmr       f1, f30
	  lwz       r3, 0xC4(r29)
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f30
	  ble-      .loc_0x510
	  fmr       f30, f1

	.loc_0x510:
	  fmr       f1, f30
	  b         .loc_0x51C

	.loc_0x518:
	  fmr       f1, f31

	.loc_0x51C:
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x528
	  fmr       f31, f1

	.loc_0x528:
	  lwz       r29, 0xC4(r28)
	  fmr       f30, f31
	  mr        r3, r29
	  bl        -0x138C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x554
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x6C0
	  b         .loc_0x678

	.loc_0x554:
	  lfs       f1, 0x2060(r2)
	  lfs       f0, 0xCC(r29)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x574
	  mr        r4, r30
	  addi      r3, r29, 0xC8
	  bl        -0x13F4
	  b         .loc_0x5B4

	.loc_0x574:
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  bl        -0x2EA540
	  lfs       f2, 0xC8(r29)
	  addi      r3, r29, 0xC8
	  lfs       f1, 0x0(r30)
	  addi      r4, r1, 0x8
	  lfs       f0, 0xD4(r29)
	  lfs       f3, 0xD0(r29)
	  fnmsubs   f1, f2, f1, f0
	  lfs       f2, 0x8(r30)
	  lfs       f0, 0xCC(r29)
	  fnmsubs   f1, f3, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0xC(r1)
	  bl        -0x1438

	.loc_0x5B4:
	  lfs       f0, 0x2070(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5F0
	  lwz       r3, 0xC0(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x674
	  fmr       f1, f31
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x5E8
	  b         .loc_0x678

	.loc_0x5E8:
	  fmr       f1, f31
	  b         .loc_0x678

	.loc_0x5F0:
	  lfs       f0, 0x2074(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x62C
	  lwz       r3, 0xC4(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x674
	  fmr       f1, f31
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x624
	  b         .loc_0x678

	.loc_0x624:
	  fmr       f1, f31
	  b         .loc_0x678

	.loc_0x62C:
	  fmr       f1, f31
	  lwz       r3, 0xC0(r29)
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x64C
	  fmr       f30, f1

	.loc_0x64C:
	  fmr       f1, f30
	  lwz       r3, 0xC4(r29)
	  mr        r4, r30
	  mr        r5, r31
	  bl        .loc_0x0
	  fcmpo     cr0, f1, f30
	  ble-      .loc_0x66C
	  fmr       f30, f1

	.loc_0x66C:
	  fmr       f1, f30
	  b         .loc_0x678

	.loc_0x674:
	  fmr       f1, f31

	.loc_0x678:
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x684
	  fmr       f31, f1

	.loc_0x684:
	  fmr       f1, f31
	  b         .loc_0x690

	.loc_0x68C:
	  fmr       f1, f31

	.loc_0x690:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr

	.loc_0x6C0:
	*/
}

/*
 * --INFO--
 * Address:	8041FBA4
 * Size:	0000B4
 */
void getMinYTriList__Q23Sys3OBBFR10Vector3<float> RQ23Sys13TriangleTable(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  lfs       f31, 0x2078(r2)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  li        r30, 0
	  li        r31, 0
	  b         .loc_0x88

	.loc_0x34:
	  lwz       r3, 0xFC(r27)
	  addi      r4, r1, 0x8
	  lwz       r5, 0x24(r29)
	  lwzx      r0, r3, r31
	  lfs       f0, 0x0(r28)
	  mulli     r0, r0, 0x60
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x4(r28)
	  add       r3, r5, r0
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x8(r28)
	  stfs      f0, 0x10(r1)
	  bl        -0x8080
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  lfs       f0, 0xC(r1)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x80
	  fmr       f31, f0

	.loc_0x80:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x88:
	  lwz       r0, 0xF4(r27)
	  cmpw      r30, r0
	  blt+      .loc_0x34
	  fmr       f1, f31
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000304
 */
void Sys::OBB::write((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041FC58
 * Size:	000320
 */
void Sys::OBB::read((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r3
	  mr        r29, r4
	  li        r30, 0
	  mr        r27, r28

	.loc_0x20:
	  mr        r4, r29
	  addi      r3, r27, 0x18
	  bl        -0xE1DC
	  addi      r30, r30, 0x1
	  addi      r27, r27, 0x10
	  cmpwi     r30, 0x6
	  blt+      .loc_0x20
	  mr        r4, r29
	  addi      r3, r28, 0x78
	  bl        -0xE30C
	  li        r30, 0
	  mr        r27, r28

	.loc_0x50:
	  mr        r4, r29
	  addi      r3, r27, 0x84
	  bl        -0xE320
	  addi      r30, r30, 0x1
	  addi      r27, r27, 0xC
	  cmpwi     r30, 0x3
	  blt+      .loc_0x50
	  li        r30, 0
	  mr        r27, r28

	.loc_0x74:
	  mr        r3, r29
	  bl        -0xAF24
	  stfs      f1, 0xA8(r27)
	  mr        r3, r29
	  bl        -0xAF30
	  addi      r30, r30, 0x1
	  stfs      f1, 0xB4(r27)
	  cmpwi     r30, 0x3
	  addi      r27, r27, 0x4
	  blt+      .loc_0x74
	  mr        r4, r29
	  addi      r3, r28, 0xC8
	  bl        -0xE258
	  mr        r4, r29
	  addi      r3, r28, 0x100
	  bl        -0xE378
	  mr        r3, r29
	  bl        -0xAF64
	  stfs      f1, 0x10C(r28)
	  mr        r3, r29
	  bl        -0xB880
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0xEC
	  addi      r3, r28, 0xD8
	  mr        r4, r29
	  lwz       r12, 0xD8(r28)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl

	.loc_0xEC:
	  mr        r3, r29
	  bl        -0xB8AC
	  rlwinm.   r0,r3,0,31,31
	  rlwinm    r30,r3,0,24,31
	  beq-      .loc_0x1F8
	  li        r3, 0x110
	  bl        -0x3FBEB8
	  mr.       r31, r3
	  beq-      .loc_0x1E4
	  bl        -0xE9D8
	  lis       r3, 0x804B
	  lis       r4, 0x8015
	  subi      r0, r3, 0x130
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r3, r31, 0x18
	  addi      r4, r4, 0x1C68
	  li        r6, 0x10
	  li        r7, 0x6
	  bl        -0x35E554
	  lis       r4, 0x8012
	  addi      r3, r31, 0x84
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0x3
	  bl        -0x35E570
	  lfs       f1, 0x2060(r2)
	  addi      r27, r31, 0xD8
	  lfs       f0, 0x2064(r2)
	  mr        r3, r27
	  stfs      f1, 0xC8(r31)
	  stfs      f0, 0xCC(r31)
	  stfs      f1, 0xD0(r31)
	  stfs      f1, 0xD4(r31)
	  bl        -0xEA40
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r27)
	  subi      r0, r3, 0x120
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r27)
	  li        r7, 0
	  subi      r6, r5, 0xF4
	  li        r5, 0x1
	  stb       r7, 0x18(r27)
	  subi      r4, r4, 0xAC
	  subi      r3, r3, 0x64
	  addi      r0, r2, 0x2068
	  stw       r6, 0x0(r27)
	  stb       r5, 0x18(r27)
	  stw       r7, 0x20(r27)
	  stw       r7, 0x1C(r27)
	  stw       r7, 0x24(r27)
	  stw       r4, 0x0(r27)
	  stw       r3, 0x0(r27)
	  stw       r0, 0x14(r31)
	  stw       r7, 0xC4(r31)
	  stw       r7, 0xC0(r31)

	.loc_0x1E4:
	  stw       r31, 0xC0(r28)
	  mr        r4, r29
	  lwz       r3, 0xC0(r28)
	  bl        .loc_0x0
	  b         .loc_0x200

	.loc_0x1F8:
	  li        r0, 0
	  stw       r0, 0xC0(r28)

	.loc_0x200:
	  rlwinm.   r0,r30,0,30,30
	  beq-      .loc_0x304
	  li        r3, 0x110
	  bl        -0x3FBFC0
	  mr.       r31, r3
	  beq-      .loc_0x2F0
	  mr        r27, r31
	  bl        -0xEAE4
	  lis       r3, 0x804B
	  lis       r4, 0x8015
	  subi      r0, r3, 0x130
	  li        r5, 0
	  stw       r0, 0x0(r27)
	  addi      r3, r27, 0x18
	  addi      r4, r4, 0x1C68
	  li        r6, 0x10
	  li        r7, 0x6
	  bl        -0x35E660
	  lis       r4, 0x8012
	  addi      r3, r27, 0x84
	  subi      r4, r4, 0xCB8
	  li        r5, 0
	  li        r6, 0xC
	  li        r7, 0x3
	  bl        -0x35E67C
	  lfs       f1, 0x2060(r2)
	  addi      r30, r27, 0xD8
	  lfs       f0, 0x2064(r2)
	  mr        r3, r30
	  stfs      f1, 0xC8(r27)
	  stfs      f0, 0xCC(r27)
	  stfs      f1, 0xD0(r27)
	  stfs      f1, 0xD4(r27)
	  bl        -0xEB4C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x120
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r30)
	  li        r7, 0
	  subi      r6, r5, 0xF4
	  li        r5, 0x1
	  stb       r7, 0x18(r30)
	  subi      r4, r4, 0xAC
	  subi      r3, r3, 0x64
	  addi      r0, r2, 0x2068
	  stw       r6, 0x0(r30)
	  stb       r5, 0x18(r30)
	  stw       r7, 0x20(r30)
	  stw       r7, 0x1C(r30)
	  stw       r7, 0x24(r30)
	  stw       r4, 0x0(r30)
	  stw       r3, 0x0(r30)
	  stw       r0, 0x14(r27)
	  stw       r7, 0xC4(r27)
	  stw       r7, 0xC0(r27)

	.loc_0x2F0:
	  stw       r31, 0xC4(r28)
	  mr        r4, r29
	  lwz       r3, 0xC4(r28)
	  bl        .loc_0x0
	  b         .loc_0x30C

	.loc_0x304:
	  li        r0, 0
	  stw       r0, 0xC4(r28)

	.loc_0x30C:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041FF78
 * Size:	000024
 */
void Sys::OBBTree::findTriLists((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x20
	  stw       r0, 0x14(r1)
	  bl        -0xC48
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041FF9C
 * Size:	000004
 */
void Sys::OBBTree::getBoundBox((BoundBox&)) { }

/*
 * --INFO--
 * Address:	8041FFA0
 * Size:	000008
 */
void Sys::TriDivider::do_clone((Matrixf&, Sys::VertexTable*,
                                Sys::TriangleTable*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}
