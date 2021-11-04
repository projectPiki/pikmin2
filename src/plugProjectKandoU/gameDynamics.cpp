#include "types.h"

/*
 * --INFO--
 * Address:	80139C60
 * Size:	000334
 */
DynamicsParms::DynamicsParms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8048
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x39B8
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x1C0
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r3, 0
	  addi      r0, r31, 0
	  stw       r3, 0x4(r30)
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  bl        -0x11CCD8
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  addi      r3, r3, 0x68
	  mr        r4, r30
	  stw       r3, 0x1BC(r30)
	  addi      r0, r3, 0x8
	  addi      r3, r30, 0x24
	  addi      r5, r5, 0x3039
	  stw       r0, 0xC(r30)
	  addi      r6, r31, 0xC
	  bl        0x2D9988
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  addi      r0, r3, 0x80
	  li        r7, 0x1
	  stw       r0, 0x24(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x40
	  stb       r7, 0x3C(r30)
	  addi      r5, r5, 0x3131
	  addi      r6, r31, 0x1C
	  stb       r0, 0x3E(r30)
	  stb       r7, 0x3F(r30)
	  bl        0x2D9950
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6128(r2)
	  stw       r0, 0x40(r30)
	  mr        r4, r30
	  lfs       f1, -0x6124(r2)
	  addi      r3, r30, 0x68
	  stfs      f0, 0x58(r30)
	  addi      r5, r5, 0x3130
	  lfs       f0, -0x6120(r2)
	  subi      r6, r2, 0x611C
	  stfs      f1, 0x60(r30)
	  stfs      f0, 0x64(r30)
	  bl        0x2D9914
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6114(r2)
	  stw       r0, 0x68(r30)
	  mr        r4, r30
	  lfs       f1, -0x6124(r2)
	  addi      r3, r30, 0x90
	  stfs      f0, 0x80(r30)
	  addi      r5, r5, 0x3030
	  lfs       f0, -0x6120(r2)
	  addi      r6, r31, 0x28
	  stfs      f1, 0x88(r30)
	  stfs      f0, 0x8C(r30)
	  bl        0x2D98D8
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x6110(r2)
	  stw       r0, 0x90(r30)
	  mr        r4, r30
	  lfs       f1, -0x6124(r2)
	  addi      r3, r30, 0xB8
	  stfs      f0, 0xA8(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x6114(r2)
	  addi      r6, r31, 0x38
	  stfs      f1, 0xB0(r30)
	  stfs      f0, 0xB4(r30)
	  bl        0x2D989C
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  addi      r0, r3, 0x80
	  li        r7, 0
	  stw       r0, 0xB8(r30)
	  li        r0, 0x1
	  mr        r4, r30
	  addi      r3, r30, 0xD4
	  stb       r7, 0xD0(r30)
	  addi      r5, r5, 0x3032
	  addi      r6, r31, 0x48
	  stb       r7, 0xD2(r30)
	  stb       r0, 0xD3(r30)
	  bl        0x2D9864
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x610C(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x6124(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x6108(r2)
	  subi      r6, r2, 0x6104
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x2D9828
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  addi      r0, r3, 0x80
	  li        r7, 0x1
	  stw       r0, 0xFC(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x118
	  stb       r7, 0x114(r30)
	  addi      r5, r5, 0x3034
	  addi      r6, r31, 0x54
	  stb       r0, 0x116(r30)
	  stb       r7, 0x117(r30)
	  bl        0x2D97F0
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  addi      r0, r3, 0x80
	  li        r7, 0x1
	  stw       r0, 0x118(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x134
	  stb       r7, 0x130(r30)
	  addi      r5, r5, 0x3035
	  addi      r6, r31, 0x60
	  stb       r0, 0x132(r30)
	  stb       r7, 0x133(r30)
	  bl        0x2D97B8
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  addi      r0, r3, 0x80
	  li        r7, 0x1
	  stw       r0, 0x134(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x150
	  stb       r7, 0x14C(r30)
	  addi      r5, r5, 0x3036
	  addi      r6, r31, 0x6C
	  stb       r0, 0x14E(r30)
	  stb       r7, 0x14F(r30)
	  bl        0x2D9780
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x60FC(r2)
	  stw       r0, 0x150(r30)
	  mr        r4, r30
	  lfs       f1, -0x6124(r2)
	  addi      r3, r30, 0x178
	  stfs      f0, 0x168(r30)
	  addi      r5, r5, 0x3037
	  lfs       f0, -0x60F8(r2)
	  addi      r6, r31, 0x78
	  stfs      f1, 0x170(r30)
	  stfs      f0, 0x174(r30)
	  bl        0x2D9744
	  lis       r3, 0x804B
	  lis       r5, 0x6430
	  addi      r0, r3, 0x80
	  li        r7, 0x1
	  stw       r0, 0x178(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x194
	  stb       r7, 0x190(r30)
	  addi      r5, r5, 0x3038
	  addi      r6, r31, 0x8C
	  stb       r0, 0x192(r30)
	  stb       r7, 0x193(r30)
	  bl        0x2D970C
	  lis       r3, 0x804B
	  lfs       f2, -0x60F4(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x6124(r2)
	  stw       r0, 0x194(r30)
	  mr        r3, r30
	  lfs       f0, -0x6108(r2)
	  stfs      f2, 0x1AC(r30)
	  stfs      f1, 0x1B4(r30)
	  stfs      f0, 0x1B8(r30)
	  stw       r30, -0x6D98(r13)
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
 * Address:	80139F94
 * Size:	000074
 */
DynamicsParms::~DynamicsParms()
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
	  beq-      .loc_0x58
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x68
	  addi      r3, r30, 0xC
	  stw       r4, 0x1BC(r30)
	  addi      r5, r4, 0x8
	  li        r4, 0
	  stw       r5, 0xC(r30)
	  stw       r0, -0x6D98(r13)
	  bl        -0x11CFA4
	  extsh.    r0, r31
	  ble-      .loc_0x58
	  mr        r3, r30
	  bl        -0x115F34

	.loc_0x58:
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
 * Address:	8013A008
 * Size:	000048
 */
void DynamicsParms::globalInstance()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x6D98(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x38
	  li        r3, 0x1C4
	  bl        -0x116180
	  mr.       r0, r3
	  beq-      .loc_0x34
	  li        r4, 0x1
	  bl        -0x3D4
	  mr        r0, r3

	.loc_0x34:
	  stw       r0, -0x6D98(r13)

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8013A050
 * Size:	000054
 */
Rigid::Rigid()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8014
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  subi      r4, r4, 0x5F5C
	  li        r6, 0x88
	  li        r7, 0x2
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x34
	  bl        -0x78840
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x175(r31)
	  stb       r0, 0x175(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013A0A4
 * Size:	000034
 */
RigidConfig::RigidConfig()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x48
	  bl        0x2D830C
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
 * Address:	8013A0D8
 * Size:	00008C
 */
void Rigid::initPosition(Vector3f&, Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  li        r5, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  mr        r6, r31
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        .loc_0x8C
	  mr        r3, r29
	  mr        r4, r30
	  mr        r6, r31
	  li        r5, 0x1
	  bl        .loc_0x8C
	  addi      r3, r29, 0x8C
	  bl        -0x4FE80
	  addi      r3, r29, 0x114
	  bl        -0x4FE88
	  addi      r3, r29, 0x144
	  bl        -0x4FE90
	  lfs       f0, -0x6108(r2)
	  mr        r3, r29
	  li        r4, 0
	  stfs      f0, 0x0(r29)
	  bl        0xAC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x8C:
	*/
}

/*
 * --INFO--
 * Address:	8013A164
 * Size:	00008C
 */
void Rigid::initPositionIndex(Vector3f&, int, Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mulli     r5, r5, 0x88
	  lfs       f0, -0x6124(r2)
	  stw       r0, 0x14(r1)
	  addi      r5, r5, 0x34
	  lfs       f1, 0x0(r4)
	  add       r5, r3, r5
	  stfs      f1, 0x0(r5)
	  addi      r3, r5, 0x48
	  lfs       f1, 0x4(r4)
	  stfs      f1, 0x4(r5)
	  lfs       f1, 0x8(r4)
	  mr        r4, r6
	  stfs      f1, 0x8(r5)
	  stfs      f0, 0x18(r5)
	  stfs      f0, 0x1C(r5)
	  stfs      f0, 0x20(r5)
	  stfs      f0, 0xC(r5)
	  stfs      f0, 0x10(r5)
	  stfs      f0, 0x14(r5)
	  stfs      f0, 0x24(r5)
	  stfs      f0, 0x28(r5)
	  stfs      f0, 0x2C(r5)
	  stfs      f0, 0x30(r5)
	  stfs      f0, 0x34(r5)
	  stfs      f0, 0x38(r5)
	  stfs      f0, 0x3C(r5)
	  stfs      f0, 0x40(r5)
	  stfs      f0, 0x44(r5)
	  bl        0x2D8320
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013A1F0
 * Size:	000038
 */
void Rigid::updateMatrix(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mulli     r4, r4, 0x88
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r5, 0x4
	  addi      r4, r4, 0x34
	  add       r4, r5, r4
	  addi      r5, r4, 0x48
	  bl        0x2EE8A4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013A228
 * Size:	00006C
 */
void Rigid::computeForces(int)
{
	/*
	.loc_0x0:
	  mulli     r4, r4, 0x88
	  lfs       f0, -0x6124(r2)
	  addi      r4, r4, 0x34
	  add       r4, r3, r4
	  stfs      f0, 0x18(r4)
	  stfs      f0, 0x1C(r4)
	  stfs      f0, 0x20(r4)
	  stfs      f0, 0x3C(r4)
	  stfs      f0, 0x40(r4)
	  stfs      f0, 0x44(r4)
	  lwz       r3, -0x6D98(r13)
	  lfs       f3, 0x1AC(r3)
	  fcmpo     cr0, f3, f0
	  blelr-
	  lfs       f2, 0x30(r4)
	  lfs       f5, 0x34(r4)
	  fmuls     f0, f2, f3
	  lfs       f4, 0x38(r4)
	  fmuls     f1, f5, f3
	  fmuls     f3, f4, f3
	  fsubs     f2, f2, f0
	  fsubs     f1, f5, f1
	  fsubs     f0, f4, f3
	  stfs      f2, 0x30(r4)
	  stfs      f1, 0x34(r4)
	  stfs      f0, 0x38(r4)
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8013A294
 * Size:	000268
 */
void getYDegree(Quat&, Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  lfs       f1, -0x6124(r2)
	  stw       r0, 0xC4(r1)
	  lfs       f0, -0x6108(r2)
	  stw       r31, 0xBC(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x70
	  stfs      f1, 0xAC(r1)
	  stfs      f0, 0xB0(r1)
	  lwz       r6, 0xAC(r1)
	  stw       r30, 0xB8(r1)
	  mr        r30, r3
	  lwz       r5, 0xB0(r1)
	  addi      r3, r1, 0x9C
	  stfs      f1, 0xB4(r1)
	  lwz       r0, 0xB4(r1)
	  stw       r6, 0x70(r1)
	  stw       r5, 0x74(r1)
	  stw       r0, 0x78(r1)
	  bl        0x2D80FC
	  addi      r3, r1, 0x8C
	  bl        0x2D80DC
	  addi      r3, r1, 0x7C
	  bl        0x2D80D4
	  mr        r4, r30
	  addi      r3, r1, 0x60
	  bl        0x2D8498
	  lfs       f3, 0x60(r1)
	  addi      r3, r1, 0x24
	  lfs       f2, 0x64(r1)
	  lfs       f1, 0x68(r1)
	  lfs       f0, 0x6C(r1)
	  stfs      f3, 0x7C(r1)
	  stfs      f2, 0x80(r1)
	  stfs      f1, 0x84(r1)
	  stfs      f0, 0x88(r1)
	  bl        0x2D80A0
	  lfs       f9, 0xC(r30)
	  addi      r3, r1, 0x50
	  lfs       f13, 0xA4(r1)
	  addi      r4, r1, 0x34
	  lfs       f7, 0x8(r30)
	  lfs       f3, 0xA0(r1)
	  fmuls     f1, f9, f13
	  lfs       f12, 0xA8(r1)
	  fmuls     f2, f7, f13
	  lfs       f8, 0x4(r30)
	  fmuls     f0, f7, f3
	  fmsubs    f6, f7, f12, f1
	  fmuls     f1, f8, f12
	  lfs       f10, 0x0(r30)
	  fmadds    f2, f8, f3, f2
	  lfs       f11, 0x9C(r1)
	  fmuls     f5, f3, f10
	  fmsubs    f4, f9, f3, f1
	  fmadds    f1, f9, f12, f2
	  fmsubs    f2, f8, f13, f0
	  fmuls     f0, f12, f10
	  fmuls     f3, f13, f10
	  fmuls     f9, f9, f11
	  fadds     f0, f2, f0
	  fadds     f2, f4, f3
	  fmuls     f7, f7, f11
	  fadds     f0, f0, f9
	  fmuls     f4, f8, f11
	  fadds     f2, f2, f7
	  stfs      f0, 0x30(r1)
	  fadds     f3, f6, f5
	  fmsubs    f1, f10, f11, f1
	  stfs      f2, 0x2C(r1)
	  fadds     f0, f3, f4
	  lwz       r0, 0x30(r1)
	  lwz       r5, 0x2C(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r6, 0x28(r1)
	  stw       r5, 0x38(r1)
	  stw       r6, 0x34(r1)
	  stw       r0, 0x3C(r1)
	  bl        0x2D800C
	  lfs       f3, 0x50(r1)
	  addi      r3, r1, 0x8
	  lfs       f2, 0x54(r1)
	  lfs       f1, 0x58(r1)
	  lfs       f0, 0x5C(r1)
	  stfs      f3, 0x8C(r1)
	  stfs      f2, 0x90(r1)
	  stfs      f1, 0x94(r1)
	  stfs      f0, 0x98(r1)
	  bl        0x2D7FCC
	  lfs       f8, 0x98(r1)
	  addi      r3, r1, 0x40
	  lfs       f13, 0x84(r1)
	  addi      r4, r1, 0x18
	  lfs       f9, 0x94(r1)
	  lfs       f3, 0x80(r1)
	  fmuls     f1, f8, f13
	  lfs       f12, 0x88(r1)
	  fmuls     f2, f9, f13
	  lfs       f10, 0x90(r1)
	  fmuls     f0, f9, f3
	  fmsubs    f6, f9, f12, f1
	  fmuls     f1, f10, f12
	  lfs       f11, 0x8C(r1)
	  fmadds    f2, f10, f3, f2
	  lfs       f7, 0x7C(r1)
	  fmuls     f5, f3, f11
	  fmsubs    f4, f8, f3, f1
	  fmadds    f1, f8, f12, f2
	  fmuls     f3, f13, f11
	  fmsubs    f2, f10, f13, f0
	  fmuls     f0, f12, f11
	  fadds     f6, f6, f5
	  fmuls     f5, f10, f7
	  fadds     f4, f4, f3
	  fmuls     f3, f9, f7
	  fadds     f2, f2, f0
	  fmuls     f0, f8, f7
	  fadds     f5, f6, f5
	  fadds     f3, f4, f3
	  fadds     f0, f2, f0
	  stfs      f5, 0xC(r1)
	  fmsubs    f1, f11, f7, f1
	  stfs      f3, 0x10(r1)
	  lwz       r6, 0xC(r1)
	  stfs      f0, 0x14(r1)
	  lwz       r5, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stfs      f1, 0x8(r1)
	  stw       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  bl        0x2D7F38
	  lfs       f3, 0x40(r1)
	  lfs       f2, 0x44(r1)
	  lfs       f1, 0x48(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f3, 0x8C(r1)
	  stfs      f2, 0x90(r1)
	  stfs      f1, 0x94(r1)
	  stfs      f0, 0x98(r1)
	  stfs      f2, 0x0(r31)
	  lfs       f0, 0x94(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x98(r1)
	  stfs      f0, 0x8(r31)
	  lfs       f1, 0x94(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8013A4FC
 * Size:	000678
 */
void Rigid::integrate(float, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x240(r1)
	  mflr      r0
	  stw       r0, 0x244(r1)
	  stfd      f31, 0x230(r1)
	  psq_st    f31,0x238(r1),0,0
	  stfd      f30, 0x220(r1)
	  psq_st    f30,0x228(r1),0,0
	  stfd      f29, 0x210(r1)
	  psq_st    f29,0x218(r1),0,0
	  stw       r31, 0x20C(r1)
	  stw       r30, 0x208(r1)
	  mulli     r5, r4, 0x88
	  subfic    r0, r4, 0x1
	  mr        r30, r3
	  fmr       f31, f1
	  addi      r3, r1, 0x1D0
	  mulli     r4, r0, 0x88
	  addi      r31, r5, 0x34
	  add       r31, r30, r31
	  addi      r5, r4, 0x34
	  lfs       f0, 0x0(r31)
	  add       r5, r30, r5
	  addi      r4, r31, 0x48
	  stfs      f0, 0x0(r5)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x8(r5)
	  lfs       f0, 0x48(r31)
	  stfs      f0, 0x48(r5)
	  lfs       f0, 0x4C(r31)
	  stfs      f0, 0x4C(r5)
	  lfs       f0, 0x50(r31)
	  stfs      f0, 0x50(r5)
	  lfs       f0, 0x54(r31)
	  stfs      f0, 0x54(r5)
	  bl        0x2EE5FC
	  addi      r3, r1, 0x1D0
	  addi      r4, r1, 0x170
	  bl        -0x501CC
	  addi      r3, r1, 0x1D0
	  addi      r4, r30, 0x144
	  addi      r5, r1, 0x1A0
	  bl        -0x502A8
	  addi      r3, r1, 0x1A0
	  addi      r4, r1, 0x170
	  addi      r5, r31, 0x58
	  bl        -0x502B8
	  lfs       f0, 0xC(r31)
	  addi      r3, r31, 0x58
	  lfs       f2, 0x10(r31)
	  addi      r4, r31, 0x30
	  fmuls     f0, f0, f31
	  lfs       f1, 0x0(r31)
	  lfs       f4, 0x14(r31)
	  fmuls     f2, f2, f31
	  lfs       f3, 0x4(r31)
	  addi      r5, r1, 0x90
	  fadds     f0, f1, f0
	  lfs       f5, 0x8(r31)
	  fmuls     f1, f4, f31
	  fadds     f2, f3, f2
	  stfs      f0, 0x0(r31)
	  fadds     f0, f5, f1
	  stfs      f2, 0x4(r31)
	  stfs      f0, 0x8(r31)
	  lfs       f0, 0x3C(r31)
	  lfs       f2, 0x40(r31)
	  fmuls     f0, f0, f31
	  lfs       f1, 0x30(r31)
	  lfs       f4, 0x44(r31)
	  fmuls     f2, f2, f31
	  lfs       f3, 0x34(r31)
	  fadds     f0, f1, f0
	  lfs       f5, 0x38(r31)
	  fmuls     f1, f4, f31
	  fadds     f2, f3, f2
	  stfs      f0, 0x30(r31)
	  fadds     f0, f5, f1
	  stfs      f2, 0x34(r31)
	  stfs      f0, 0x38(r31)
	  lfs       f1, 0x0(r30)
	  lfs       f0, 0x18(r31)
	  fmuls     f6, f31, f1
	  lfs       f2, 0x1C(r31)
	  lfs       f4, 0x20(r31)
	  lfs       f1, 0xC(r31)
	  fmuls     f0, f0, f6
	  lfs       f3, 0x10(r31)
	  fmuls     f2, f2, f6
	  lfs       f5, 0x14(r31)
	  fmuls     f4, f4, f6
	  fadds     f0, f1, f0
	  fadds     f1, f3, f2
	  fadds     f2, f5, f4
	  stfs      f0, 0xC(r31)
	  stfs      f1, 0x10(r31)
	  stfs      f2, 0x14(r31)
	  bl        -0x4FAAC
	  lfs       f1, 0x94(r1)
	  addi      r3, r1, 0x160
	  lfs       f2, 0x98(r1)
	  lfs       f0, 0x90(r1)
	  stfs      f0, 0x24(r31)
	  stfs      f1, 0x28(r31)
	  stfs      f2, 0x2C(r31)
	  bl        0x2D7D24
	  lwz       r5, 0x24(r31)
	  addi      r3, r1, 0x150
	  lwz       r0, 0x28(r31)
	  addi      r4, r1, 0xFC
	  lfs       f1, -0x6124(r2)
	  stw       r5, 0xFC(r1)
	  stw       r0, 0x100(r1)
	  lwz       r0, 0x2C(r31)
	  stw       r0, 0x104(r1)
	  bl        0x2D7D14
	  addi      r3, r1, 0x74
	  bl        0x2D7CF4
	  lfs       f5, 0x50(r31)
	  addi      r3, r1, 0xEC
	  lfs       f12, 0x158(r1)
	  addi      r4, r1, 0x84
	  lfs       f11, 0x15C(r1)
	  lfs       f6, 0x4C(r31)
	  fmuls     f2, f12, f5
	  lfs       f13, 0x154(r1)
	  fmuls     f3, f11, f5
	  lfs       f7, 0x54(r31)
	  fmuls     f0, f12, f6
	  lfs       f29, 0x150(r1)
	  fmuls     f1, f13, f7
	  lfs       f8, 0x48(r31)
	  fmadds    f4, f13, f6, f2
	  fmuls     f10, f7, f29
	  fmsubs    f2, f11, f6, f1
	  fmadds    f1, f11, f7, f4
	  fmsubs    f0, f13, f5, f0
	  fmuls     f9, f5, f29
	  fmuls     f4, f6, f29
	  fmsubs    f3, f12, f7, f3
	  fmuls     f5, f13, f8
	  fmsubs    f1, f29, f8, f1
	  fadds     f6, f3, f4
	  fadds     f4, f2, f9
	  fmuls     f3, f12, f8
	  stfs      f1, 0x74(r1)
	  fadds     f2, f0, f10
	  fmuls     f0, f11, f8
	  fadds     f5, f6, f5
	  fadds     f3, f4, f3
	  fadds     f0, f2, f0
	  stfs      f5, 0x78(r1)
	  stfs      f3, 0x7C(r1)
	  lwz       r6, 0x78(r1)
	  stfs      f0, 0x80(r1)
	  lwz       r5, 0x7C(r1)
	  lwz       r0, 0x80(r1)
	  stw       r6, 0x84(r1)
	  stw       r5, 0x88(r1)
	  stw       r0, 0x8C(r1)
	  bl        0x2D7C60
	  lfs       f3, 0xEC(r1)
	  lfs       f2, 0xF0(r1)
	  lfs       f1, 0xF4(r1)
	  lfs       f0, 0xF8(r1)
	  stfs      f3, 0x160(r1)
	  stfs      f2, 0x164(r1)
	  stfs      f1, 0x168(r1)
	  stfs      f0, 0x16C(r1)
	  lbz       r0, 0x175(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x53C
	  addi      r3, r1, 0x140
	  bl        0x2D7C14
	  lfs       f0, -0x60F0(r2)
	  addi      r3, r1, 0xDC
	  lfs       f3, 0x164(r1)
	  addi      r4, r1, 0x5C
	  fmuls     f5, f0, f31
	  lfs       f2, 0x168(r1)
	  lfs       f1, 0x16C(r1)
	  lfs       f0, 0x160(r1)
	  fmuls     f4, f3, f5
	  fmuls     f3, f2, f5
	  fmuls     f2, f1, f5
	  stfs      f4, 0x68(r1)
	  fmuls     f1, f5, f0
	  stfs      f3, 0x6C(r1)
	  lwz       r6, 0x68(r1)
	  stfs      f2, 0x70(r1)
	  lwz       r5, 0x6C(r1)
	  lwz       r0, 0x70(r1)
	  stw       r6, 0x5C(r1)
	  stw       r5, 0x60(r1)
	  stw       r0, 0x64(r1)
	  bl        0x2D7BD4
	  lfs       f3, 0xDC(r1)
	  addi      r3, r1, 0x130
	  lfs       f2, 0xE0(r1)
	  lfs       f1, 0xE4(r1)
	  lfs       f0, 0xE8(r1)
	  stfs      f3, 0x140(r1)
	  stfs      f2, 0x144(r1)
	  stfs      f1, 0x148(r1)
	  stfs      f0, 0x14C(r1)
	  bl        0x2D7B94
	  addi      r3, r1, 0x4C
	  bl        0x2D7B8C
	  lfs       f1, 0x48(r31)
	  addi      r3, r1, 0xCC
	  lfs       f0, 0x140(r1)
	  addi      r4, r1, 0x4C
	  lfs       f4, 0x14C(r1)
	  fadds     f1, f1, f0
	  lfs       f2, 0x148(r1)
	  lfs       f0, 0x144(r1)
	  stfs      f1, 0x4C(r1)
	  lfs       f5, 0x54(r31)
	  lfs       f3, 0x50(r31)
	  lfs       f1, 0x4C(r31)
	  fadds     f4, f5, f4
	  fadds     f2, f3, f2
	  fadds     f0, f1, f0
	  stfs      f4, 0x58(r1)
	  stfs      f0, 0x50(r1)
	  stfs      f2, 0x54(r1)
	  bl        0x2D7ED8
	  lfs       f3, 0xCC(r1)
	  addi      r3, r31, 0x48
	  lfs       f2, 0xD0(r1)
	  addi      r4, r1, 0x124
	  lfs       f1, 0xD4(r1)
	  lfs       f0, 0xD8(r1)
	  stfs      f3, 0x130(r1)
	  stfs      f2, 0x134(r1)
	  stfs      f1, 0x138(r1)
	  stfs      f0, 0x13C(r1)
	  bl        -0x620
	  fmr       f30, f1
	  addi      r3, r1, 0x130
	  addi      r4, r1, 0x118
	  bl        -0x630
	  lis       r3, 0x8050
	  fmr       f31, f1
	  addi      r3, r3, 0x71A0
	  lfs       f0, 0xAA8(r3)
	  lfs       f29, 0x800(r3)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x4C4
	  fcmpo     cr0, f31, f30
	  bge-      .loc_0x4A0
	  lfs       f0, 0x128(r1)
	  addi      r3, r31, 0x58
	  lfs       f1, -0x6124(r2)
	  addi      r4, r31, 0x30
	  lfs       f8, 0x124(r1)
	  addi      r5, r1, 0x40
	  fmuls     f5, f0, f1
	  lfs       f2, -0x6108(r2)
	  lfs       f3, 0x12C(r1)
	  fmuls     f0, f8, f1
	  lfs       f4, -0x60EC(r2)
	  fnmsubs   f6, f3, f2, f5
	  fmsubs    f7, f3, f1, f0
	  lfs       f1, 0x30(r31)
	  fmsubs    f5, f8, f2, f5
	  lfs       f3, 0x34(r31)
	  fmuls     f0, f6, f4
	  fmuls     f2, f7, f4
	  fmuls     f4, f5, f4
	  lfs       f5, 0x38(r31)
	  fadds     f0, f1, f0
	  fadds     f1, f3, f2
	  fadds     f2, f5, f4
	  stfs      f0, 0x30(r31)
	  stfs      f1, 0x34(r31)
	  stfs      f2, 0x38(r31)
	  bl        -0x4FD7C
	  lfs       f1, 0x44(r1)
	  fcmpo     cr0, f31, f29
	  lfs       f2, 0x48(r1)
	  lfs       f0, 0x40(r1)
	  stfs      f0, 0x24(r31)
	  stfs      f1, 0x28(r31)
	  stfs      f2, 0x2C(r31)
	  blt-      .loc_0x630
	  lfs       f0, 0x130(r1)
	  stfs      f0, 0x48(r31)
	  lfs       f0, 0x134(r1)
	  stfs      f0, 0x4C(r31)
	  lfs       f0, 0x138(r1)
	  stfs      f0, 0x50(r31)
	  lfs       f0, 0x13C(r1)
	  stfs      f0, 0x54(r31)
	  b         .loc_0x630

	.loc_0x4A0:
	  lfs       f0, 0x130(r1)
	  stfs      f0, 0x48(r31)
	  lfs       f0, 0x134(r1)
	  stfs      f0, 0x4C(r31)
	  lfs       f0, 0x138(r1)
	  stfs      f0, 0x50(r31)
	  lfs       f0, 0x13C(r1)
	  stfs      f0, 0x54(r31)
	  b         .loc_0x630

	.loc_0x4C4:
	  addi      r3, r1, 0x30
	  bl        0x2D7A04
	  lfs       f1, 0x48(r31)
	  addi      r3, r1, 0xBC
	  lfs       f0, 0x140(r1)
	  addi      r4, r1, 0x30
	  lfs       f4, 0x14C(r1)
	  fadds     f1, f1, f0
	  lfs       f2, 0x148(r1)
	  lfs       f0, 0x144(r1)
	  stfs      f1, 0x30(r1)
	  lfs       f5, 0x54(r31)
	  lfs       f3, 0x50(r31)
	  lfs       f1, 0x4C(r31)
	  fadds     f4, f5, f4
	  fadds     f2, f3, f2
	  fadds     f0, f1, f0
	  stfs      f4, 0x3C(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f2, 0x38(r1)
	  bl        0x2D7D50
	  lfs       f0, 0xBC(r1)
	  stfs      f0, 0x48(r31)
	  lfs       f0, 0xC0(r1)
	  stfs      f0, 0x4C(r31)
	  lfs       f0, 0xC4(r1)
	  stfs      f0, 0x50(r31)
	  lfs       f0, 0xC8(r1)
	  stfs      f0, 0x54(r31)
	  b         .loc_0x630

	.loc_0x53C:
	  addi      r3, r1, 0x108
	  bl        0x2D798C
	  lfs       f0, -0x60F0(r2)
	  addi      r3, r1, 0xAC
	  lfs       f3, 0x164(r1)
	  addi      r4, r1, 0x18
	  fmuls     f5, f0, f31
	  lfs       f2, 0x168(r1)
	  lfs       f1, 0x16C(r1)
	  lfs       f0, 0x160(r1)
	  fmuls     f4, f3, f5
	  fmuls     f3, f2, f5
	  fmuls     f2, f1, f5
	  stfs      f4, 0x24(r1)
	  fmuls     f1, f5, f0
	  stfs      f3, 0x28(r1)
	  lwz       r6, 0x24(r1)
	  stfs      f2, 0x2C(r1)
	  lwz       r5, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  stw       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  bl        0x2D794C
	  lfs       f3, 0xAC(r1)
	  addi      r3, r1, 0x8
	  lfs       f2, 0xB0(r1)
	  lfs       f1, 0xB4(r1)
	  lfs       f0, 0xB8(r1)
	  stfs      f3, 0x108(r1)
	  stfs      f2, 0x10C(r1)
	  stfs      f1, 0x110(r1)
	  stfs      f0, 0x114(r1)
	  bl        0x2D790C
	  lfs       f1, 0x48(r31)
	  addi      r3, r1, 0x9C
	  lfs       f0, 0x108(r1)
	  addi      r4, r1, 0x8
	  lfs       f4, 0x114(r1)
	  fadds     f1, f1, f0
	  lfs       f2, 0x110(r1)
	  lfs       f0, 0x10C(r1)
	  stfs      f1, 0x8(r1)
	  lfs       f5, 0x54(r31)
	  lfs       f3, 0x50(r31)
	  lfs       f1, 0x4C(r31)
	  fadds     f4, f5, f4
	  fadds     f2, f3, f2
	  fadds     f0, f1, f0
	  stfs      f4, 0x14(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  bl        0x2D7C58
	  lfs       f0, 0x9C(r1)
	  stfs      f0, 0x48(r31)
	  lfs       f0, 0xA0(r1)
	  stfs      f0, 0x4C(r31)
	  lfs       f0, 0xA4(r1)
	  stfs      f0, 0x50(r31)
	  lfs       f0, 0xA8(r1)
	  stfs      f0, 0x54(r31)

	.loc_0x630:
	  addi      r3, r31, 0x48
	  bl        0x2D7D1C
	  mr        r4, r31
	  addi      r3, r30, 0x4
	  addi      r5, r31, 0x48
	  bl        0x2EDF78
	  psq_l     f31,0x238(r1),0,0
	  lfd       f31, 0x230(r1)
	  psq_l     f30,0x228(r1),0,0
	  lfd       f30, 0x220(r1)
	  psq_l     f29,0x218(r1),0,0
	  lfd       f29, 0x210(r1)
	  lwz       r31, 0x20C(r1)
	  lwz       r0, 0x244(r1)
	  lwz       r30, 0x208(r1)
	  mtlr      r0
	  addi      r1, r1, 0x240
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8013AB74
 * Size:	000300
 */
void Rigid::resolveCollision(int, Vector3f&, Vector3f&, float)
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
	  stfd      f28, 0x50(r1)
	  psq_st    f28,0x58(r1),0,0
	  stfd      f27, 0x40(r1)
	  psq_st    f27,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  lwz       r7, -0x6D98(r13)
	  mr        r29, r3
	  lfs       f3, -0x60E8(r2)
	  mr        r30, r6
	  lfs       f2, 0xA8(r7)
	  lfs       f0, -0x6124(r2)
	  fmuls     f2, f3, f2
	  fcmpo     cr0, f2, f0
	  mulli     r3, r4, 0x88
	  lfs       f2, -0x6124(r2)
	  lfs       f8, 0x8(r5)
	  lfs       f6, 0x4(r5)
	  fneg      f0, f2
	  addi      r31, r3, 0x34
	  add       r31, r29, r31
	  lfs       f4, 0x0(r5)
	  lfs       f7, 0x8(r31)
	  lfs       f5, 0x4(r31)
	  lfs       f3, 0x0(r31)
	  fsubs     f29, f8, f7
	  lfs       f7, 0x24(r31)
	  fsubs     f30, f6, f5
	  fsubs     f31, f4, f3
	  stfs      f7, 0x20(r1)
	  fmuls     f4, f7, f29
	  lfs       f6, 0x28(r31)
	  stfs      f6, 0x24(r1)
	  fmuls     f3, f6, f31
	  lfs       f5, 0x2C(r31)
	  fmsubs    f8, f7, f30, f3
	  fmuls     f3, f5, f30
	  stfs      f5, 0x28(r1)
	  fmsubs    f4, f5, f31, f4
	  stfs      f8, 0x28(r1)
	  fmsubs    f6, f6, f29, f3
	  stfs      f4, 0x24(r1)
	  stfs      f6, 0x20(r1)
	  lfs       f3, 0x10(r31)
	  lfs       f5, 0xC(r31)
	  fadds     f4, f3, f4
	  lfs       f7, 0x14(r31)
	  fadds     f6, f5, f6
	  lfs       f3, 0x4(r30)
	  fadds     f8, f7, f8
	  lfs       f5, 0x0(r30)
	  fneg      f4, f4
	  lfs       f7, 0x8(r30)
	  fneg      f6, f6
	  fneg      f8, f8
	  fmuls     f3, f4, f3
	  fmadds    f3, f6, f5, f3
	  fmadds    f3, f8, f7, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x120
	  li        r3, 0
	  b         .loc_0x2BC

	.loc_0x120:
	  fabs      f0, f3
	  frsp      f0, f0
	  fcmpo     cr0, f0, f2
	  cror      2, 0, 0x2
	  bne-      .loc_0x13C
	  lfs       f1, -0x6108(r2)
	  fmr       f3, f2

	.loc_0x13C:
	  lfs       f27, 0x0(r29)
	  addi      r3, r31, 0x58
	  lfs       f0, -0x6108(r2)
	  addi      r4, r1, 0x20
	  stfs      f31, 0x20(r1)
	  addi      r5, r1, 0x14
	  fadds     f0, f0, f1
	  stfs      f30, 0x24(r1)
	  stfs      f29, 0x28(r1)
	  fneg      f0, f0
	  lfs       f4, 0x0(r30)
	  lfs       f5, 0x8(r30)
	  fmuls     f28, f0, f3
	  lfs       f3, 0x4(r30)
	  fmuls     f1, f30, f4
	  fmuls     f2, f31, f5
	  fmuls     f0, f29, f3
	  fmsubs    f3, f31, f3, f1
	  fmsubs    f1, f29, f4, f2
	  fmsubs    f0, f30, f5, f0
	  stfs      f3, 0x28(r1)
	  stfs      f0, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  bl        -0x50134
	  lfs       f5, 0x14(r1)
	  addi      r3, r31, 0x58
	  lfs       f4, 0x18(r1)
	  addi      r4, r31, 0x30
	  lfs       f3, 0x1C(r1)
	  fmuls     f2, f5, f29
	  fmuls     f1, f4, f31
	  stfs      f5, 0x20(r1)
	  fmuls     f0, f3, f30
	  addi      r5, r1, 0x8
	  fmsubs    f6, f3, f31, f2
	  stfs      f4, 0x24(r1)
	  fmsubs    f2, f4, f29, f0
	  fmsubs    f4, f5, f30, f1
	  stfs      f3, 0x28(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f6, 0x24(r1)
	  stfs      f4, 0x28(r1)
	  lfs       f9, 0x4(r30)
	  lfs       f8, 0x0(r30)
	  fmuls     f0, f9, f6
	  lfs       f6, 0x8(r30)
	  lfs       f3, 0x0(r29)
	  lfs       f1, 0xC(r31)
	  fmadds    f0, f8, f2, f0
	  lfs       f5, 0x10(r31)
	  lfs       f7, 0x14(r31)
	  fmadds    f0, f6, f4, f0
	  fadds     f27, f27, f0
	  fdivs     f0, f28, f27
	  fneg      f0, f0
	  fmuls     f8, f8, f0
	  fmuls     f9, f9, f0
	  fmuls     f10, f6, f0
	  fmuls     f0, f8, f3
	  fmuls     f4, f9, f3
	  fmuls     f6, f10, f3
	  fadds     f3, f1, f0
	  fmuls     f2, f31, f10
	  fmuls     f1, f30, f8
	  fmuls     f0, f29, f9
	  stfs      f3, 0xC(r31)
	  fadds     f3, f5, f4
	  fadds     f4, f7, f6
	  fmsubs    f5, f29, f8, f2
	  stfs      f3, 0x10(r31)
	  fmsubs    f6, f31, f9, f1
	  fmsubs    f3, f30, f10, f0
	  stfs      f4, 0x14(r31)
	  stfs      f31, 0x20(r1)
	  stfs      f30, 0x24(r1)
	  stfs      f29, 0x28(r1)
	  stfs      f3, 0x20(r1)
	  stfs      f5, 0x24(r1)
	  stfs      f6, 0x28(r1)
	  lfs       f0, 0x30(r31)
	  lfs       f1, 0x34(r31)
	  lfs       f2, 0x38(r31)
	  fadds     f0, f0, f3
	  fadds     f1, f1, f5
	  fadds     f2, f2, f6
	  stfs      f0, 0x30(r31)
	  stfs      f1, 0x34(r31)
	  stfs      f2, 0x38(r31)
	  bl        -0x50238
	  lfs       f1, 0xC(r1)
	  li        r3, 0x1
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x24(r31)
	  stfs      f1, 0x28(r31)
	  stfs      f2, 0x2C(r31)

	.loc_0x2BC:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  psq_l     f27,0x48(r1),0,0
	  lfd       f27, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8013AE74
 * Size:	000008
 */
u32 Parm<bool>::size() { return 0x1; }

/*
 * --INFO--
 * Address:	8013AE7C
 * Size:	000008
 */
void DynamicsParms::@12 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0xC
	  b         -0xEEC
	*/
}
