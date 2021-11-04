#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802BF47C
 * Size:	00027C
 */
Houdai::HoudaiShadowMgr::HoudaiShadowMgr(Game::Houdai::Obj*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r4
	  mr        r28, r3
	  stw       r27, 0x4(r3)
	  li        r3, 0x20
	  bl        -0x29B5F8
	  mr.       r0, r3
	  beq-      .loc_0x38
	  mr        r4, r27
	  bl        -0x7E230
	  mr        r0, r3

	.loc_0x38:
	  stw       r0, 0x48(r28)
	  li        r3, 0x24
	  bl        -0x29B618
	  mr.       r27, r3
	  beq-      .loc_0x60
	  li        r4, 0x2
	  bl        -0x7E1F0
	  lis       r3, 0x804D
	  subi      r0, r3, 0x2128
	  stw       r0, 0x0(r27)

	.loc_0x60:
	  stw       r27, 0x8C(r28)
	  lwz       r3, 0x48(r28)
	  lwz       r4, 0x8C(r28)
	  bl        0x151F20
	  li        r3, 0x24
	  bl        -0x29B64C
	  mr.       r27, r3
	  beq-      .loc_0x94
	  li        r4, 0x2
	  bl        -0x7E224
	  lis       r3, 0x804D
	  subi      r0, r3, 0x2128
	  stw       r0, 0x0(r27)

	.loc_0x94:
	  stw       r27, 0xC0(r28)
	  lwz       r3, 0x48(r28)
	  lwz       r4, 0xC0(r28)
	  bl        0x151EEC
	  mr        r31, r28
	  mr        r30, r28
	  li        r29, 0

	.loc_0xB0:
	  li        r3, 0x28
	  bl        -0x29B68C
	  mr.       r27, r3
	  beq-      .loc_0xDC
	  li        r4, 0x2
	  bl        -0x7E264
	  lis       r3, 0x804D
	  li        r0, 0
	  subi      r3, r3, 0x2148
	  stw       r3, 0x0(r27)
	  stw       r0, 0x24(r27)

	.loc_0xDC:
	  stw       r27, 0x4C(r31)
	  li        r3, 0x28
	  bl        -0x29B6BC
	  mr.       r27, r3
	  beq-      .loc_0x10C
	  li        r4, 0x2
	  bl        -0x7E294
	  lis       r3, 0x804D
	  li        r0, 0
	  subi      r3, r3, 0x2148
	  stw       r3, 0x0(r27)
	  stw       r0, 0x24(r27)

	.loc_0x10C:
	  stw       r27, 0x5C(r31)
	  li        r3, 0x28
	  bl        -0x29B6EC
	  mr.       r27, r3
	  beq-      .loc_0x13C
	  li        r4, 0x2
	  bl        -0x7E2C4
	  lis       r3, 0x804D
	  li        r0, 0
	  subi      r3, r3, 0x2148
	  stw       r3, 0x0(r27)
	  stw       r0, 0x24(r27)

	.loc_0x13C:
	  stw       r27, 0x6C(r31)
	  li        r3, 0x28
	  bl        -0x29B71C
	  mr.       r27, r3
	  beq-      .loc_0x16C
	  li        r4, 0x2
	  bl        -0x7E2F4
	  lis       r3, 0x804D
	  li        r0, 0
	  subi      r3, r3, 0x2148
	  stw       r3, 0x0(r27)
	  stw       r0, 0x24(r27)

	.loc_0x16C:
	  stw       r27, 0x7C(r31)
	  li        r3, 0x24
	  bl        -0x29B74C
	  mr.       r27, r3
	  beq-      .loc_0x194
	  li        r4, 0x2
	  bl        -0x7E324
	  lis       r3, 0x804D
	  subi      r0, r3, 0x2128
	  stw       r0, 0x0(r27)

	.loc_0x194:
	  stw       r27, 0x90(r31)
	  li        r3, 0x24
	  bl        -0x29B774
	  mr.       r27, r3
	  beq-      .loc_0x1BC
	  li        r4, 0x2
	  bl        -0x7E34C
	  lis       r3, 0x804D
	  subi      r0, r3, 0x2128
	  stw       r0, 0x0(r27)

	.loc_0x1BC:
	  stw       r27, 0xA0(r31)
	  li        r3, 0x24
	  bl        -0x29B79C
	  mr.       r27, r3
	  beq-      .loc_0x1E4
	  li        r4, 0x2
	  bl        -0x7E374
	  lis       r3, 0x804D
	  subi      r0, r3, 0x2128
	  stw       r0, 0x0(r27)

	.loc_0x1E4:
	  stw       r27, 0xB0(r31)
	  lwz       r3, 0x48(r28)
	  lwz       r4, 0x4C(r31)
	  bl        0x151D9C
	  lwz       r3, 0x48(r28)
	  lwz       r4, 0x5C(r31)
	  bl        0x151D90
	  lwz       r3, 0x48(r28)
	  lwz       r4, 0x6C(r31)
	  bl        0x151D84
	  lwz       r3, 0x48(r28)
	  lwz       r4, 0x7C(r31)
	  bl        0x151D78
	  lwz       r3, 0x48(r28)
	  lwz       r4, 0x90(r31)
	  bl        0x151D6C
	  lwz       r3, 0x48(r28)
	  lwz       r4, 0xA0(r31)
	  bl        0x151D60
	  lwz       r3, 0x48(r28)
	  lwz       r4, 0xB0(r31)
	  bl        0x151D54
	  li        r0, 0
	  addi      r29, r29, 0x1
	  stw       r0, 0x8(r30)
	  cmpwi     r29, 0x4
	  addi      r31, r31, 0x4
	  stw       r0, 0xC(r30)
	  stw       r0, 0x10(r30)
	  stw       r0, 0x14(r30)
	  addi      r30, r30, 0x10
	  blt+      .loc_0xB0
	  mr        r3, r28
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BF6F8
 * Size:	0001B0
 */
void Houdai::HoudaiShadowMgr::init()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0x4FD0
	  subi      r4, r2, 0x1EB0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x4(r3)
	  lwz       r30, 0x174(r3)
	  mr        r3, r30
	  bl        0x17F8B8
	  bl        0x16A170
	  stw       r3, 0x0(r29)
	  mr        r3, r30
	  addi      r4, r31, 0x14
	  bl        0x17F8A4
	  lwz       r5, 0x4C(r29)
	  addi      r4, r31, 0x14
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F890
	  lwz       r5, 0x4C(r29)
	  addi      r4, r31, 0x14
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F87C
	  lwz       r5, 0x5C(r29)
	  addi      r4, r31, 0x20
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F868
	  lwz       r5, 0x6C(r29)
	  addi      r4, r31, 0x2C
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F854
	  lwz       r5, 0x7C(r29)
	  addi      r4, r31, 0x38
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F840
	  lwz       r5, 0x50(r29)
	  addi      r4, r31, 0x38
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F82C
	  lwz       r5, 0x60(r29)
	  addi      r4, r31, 0x44
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F818
	  lwz       r5, 0x70(r29)
	  addi      r4, r31, 0x50
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F804
	  lwz       r5, 0x80(r29)
	  addi      r4, r31, 0x5C
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F7F0
	  lwz       r5, 0x54(r29)
	  addi      r4, r31, 0x5C
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F7DC
	  lwz       r5, 0x64(r29)
	  addi      r4, r31, 0x68
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F7C8
	  lwz       r5, 0x74(r29)
	  addi      r4, r31, 0x74
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F7B4
	  lwz       r5, 0x84(r29)
	  addi      r4, r31, 0x80
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F7A0
	  lwz       r5, 0x58(r29)
	  addi      r4, r31, 0x80
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F78C
	  lwz       r5, 0x68(r29)
	  addi      r4, r31, 0x8C
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F778
	  lwz       r5, 0x78(r29)
	  addi      r4, r31, 0x98
	  stw       r3, 0x24(r5)
	  mr        r3, r30
	  bl        0x17F764
	  lwz       r4, 0x88(r29)
	  stw       r3, 0x24(r4)
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
 * Address:	802BF8A8
 * Size:	000018
 */
void Houdai::HoudaiShadowMgr::setJointPosPtr(int, int, Vector3f*)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,4,0,27
	  rlwinm    r0,r5,2,0,29
	  add       r3, r3, r4
	  add       r3, r3, r0
	  stw       r6, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BF8C0
 * Size:	0003F0
 */
void Houdai::HoudaiShadowMgr::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x100(r1)
	  mflr      r0
	  stw       r0, 0x104(r1)
	  stfd      f31, 0xF0(r1)
	  psq_st    f31,0xF8(r1),0,0
	  stfd      f30, 0xE0(r1)
	  psq_st    f30,0xE8(r1),0,0
	  stfd      f29, 0xD0(r1)
	  psq_st    f29,0xD8(r1),0,0
	  stfd      f28, 0xC0(r1)
	  psq_st    f28,0xC8(r1),0,0
	  stfd      f27, 0xB0(r1)
	  psq_st    f27,0xB8(r1),0,0
	  stfd      f26, 0xA0(r1)
	  psq_st    f26,0xA8(r1),0,0
	  stmw      r25, 0x84(r1)
	  mr        r25, r3
	  addi      r3, r1, 0x8
	  lwz       r4, 0x4(r25)
	  bl        0x1630
	  lfs       f3, -0x1EA8(r2)
	  lfs       f2, -0x1EA4(r2)
	  fmuls     f8, f3, f3
	  lfs       f6, 0x8(r1)
	  fmuls     f7, f2, f2
	  lfs       f5, 0xC(r1)
	  lfs       f4, 0x10(r1)
	  lfs       f1, -0x1EA0(r2)
	  fadds     f0, f8, f7
	  stfs      f6, 0x50(r1)
	  stfs      f5, 0x54(r1)
	  fadds     f0, f8, f0
	  stfs      f4, 0x58(r1)
	  fcmpo     cr0, f0, f1
	  stfs      f3, 0x5C(r1)
	  stfs      f2, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  ble-      .loc_0xB4
	  fmadds    f0, f3, f3, f7
	  fadds     f3, f8, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0xB8
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0xB8

	.loc_0xB4:
	  fmr       f3, f1

	.loc_0xB8:
	  lfs       f0, -0x1EA0(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0xF0
	  lfs       f0, -0x1E9C(r2)
	  lfs       f2, 0x5C(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0x60(r1)
	  lfs       f0, 0x64(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x5C(r1)
	  stfs      f1, 0x60(r1)
	  stfs      f0, 0x64(r1)

	.loc_0xF0:
	  lwz       r3, 0x0(r25)
	  addi      r4, r1, 0x50
	  lfs       f0, -0x1E98(r2)
	  addi      r5, r1, 0x14
	  lfs       f1, 0x1C(r3)
	  lfs       f5, 0x2C(r3)
	  lfs       f4, 0xC(r3)
	  fadds     f3, f1, f0
	  lfs       f2, -0x1EA0(r2)
	  stfs      f1, 0x18(r1)
	  lfs       f1, -0x1E94(r2)
	  lfs       f0, -0x1E90(r2)
	  stfs      f4, 0x14(r1)
	  stfs      f5, 0x1C(r1)
	  stfs      f3, 0x18(r1)
	  stfs      f2, 0x68(r1)
	  stfs      f2, 0x6C(r1)
	  stfs      f1, 0x70(r1)
	  stfs      f0, 0x74(r1)
	  lwz       r3, 0x8C(r25)
	  bl        0x32CDC
	  lfs       f26, -0x1EA0(r2)
	  mr        r31, r25
	  lfs       f27, -0x1E8C(r2)
	  mr        r30, r25
	  lfs       f28, -0x1E88(r2)
	  addi      r29, r1, 0x2C
	  lfs       f29, -0x1E84(r2)
	  addi      r28, r1, 0x38
	  lfs       f30, -0x1E80(r2)
	  addi      r27, r1, 0x44
	  lfs       f31, -0x1E7C(r2)
	  li        r26, 0

	.loc_0x174:
	  stfs      f26, 0x68(r1)
	  addi      r4, r1, 0x50
	  addi      r5, r1, 0x14
	  addi      r6, r1, 0x20
	  stfs      f26, 0x6C(r1)
	  stfs      f27, 0x70(r1)
	  stfs      f28, 0x74(r1)
	  lwz       r3, 0x4C(r31)
	  bl        0x32864
	  stfs      f29, 0x68(r1)
	  mr        r6, r29
	  addi      r4, r1, 0x50
	  addi      r5, r1, 0x20
	  stfs      f30, 0x6C(r1)
	  stfs      f27, 0x70(r1)
	  stfs      f28, 0x74(r1)
	  lwz       r3, 0x5C(r31)
	  bl        0x32840
	  stfs      f31, 0x68(r1)
	  mr        r5, r29
	  mr        r6, r28
	  addi      r4, r1, 0x50
	  stfs      f31, 0x6C(r1)
	  stfs      f27, 0x70(r1)
	  stfs      f28, 0x74(r1)
	  lwz       r3, 0x6C(r31)
	  bl        0x3281C
	  stfs      f26, 0x68(r1)
	  mr        r5, r28
	  mr        r6, r27
	  addi      r4, r1, 0x50
	  stfs      f26, 0x6C(r1)
	  stfs      f27, 0x70(r1)
	  stfs      f28, 0x74(r1)
	  lwz       r3, 0x7C(r31)
	  bl        0x327F8
	  cmpwi     r26, 0
	  bne-      .loc_0x28C
	  lfs       f2, -0x1EA0(r2)
	  addi      r4, r1, 0x50
	  lfs       f1, -0x1E78(r2)
	  addi      r5, r1, 0x20
	  lfs       f0, -0x1E7C(r2)
	  stfs      f2, 0x68(r1)
	  stfs      f2, 0x6C(r1)
	  stfs      f1, 0x70(r1)
	  stfs      f0, 0x74(r1)
	  lwz       r3, 0x90(r31)
	  bl        0x32BE8
	  lfs       f0, -0x1E7C(r2)
	  mr        r5, r29
	  addi      r4, r1, 0x50
	  stfs      f0, 0x74(r1)
	  lwz       r3, 0xA0(r31)
	  bl        0x32BD0
	  lfs       f0, -0x1E7C(r2)
	  mr        r5, r28
	  addi      r4, r1, 0x50
	  stfs      f0, 0x74(r1)
	  lwz       r3, 0xB0(r31)
	  bl        0x32BB8
	  lfs       f1, -0x1E74(r2)
	  mr        r5, r27
	  lfs       f0, -0x1E70(r2)
	  addi      r4, r1, 0x50
	  stfs      f1, 0x70(r1)
	  stfs      f0, 0x74(r1)
	  lwz       r3, 0xC0(r25)
	  bl        0x32B98
	  b         .loc_0x2E8

	.loc_0x28C:
	  lfs       f2, -0x1EA0(r2)
	  addi      r4, r1, 0x50
	  lfs       f1, -0x1E6C(r2)
	  addi      r5, r1, 0x20
	  lfs       f0, -0x1E7C(r2)
	  stfs      f2, 0x68(r1)
	  stfs      f2, 0x6C(r1)
	  stfs      f1, 0x70(r1)
	  stfs      f0, 0x74(r1)
	  lwz       r3, 0x90(r31)
	  bl        0x32B68
	  lfs       f0, -0x1E7C(r2)
	  mr        r5, r29
	  addi      r4, r1, 0x50
	  stfs      f0, 0x74(r1)
	  lwz       r3, 0xA0(r31)
	  bl        0x32B50
	  lfs       f0, -0x1E7C(r2)
	  mr        r5, r28
	  addi      r4, r1, 0x50
	  stfs      f0, 0x74(r1)
	  lwz       r3, 0xB0(r31)
	  bl        0x32B38

	.loc_0x2E8:
	  lwz       r3, 0x8(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x314
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x24(r1)
	  lwz       r3, 0x8(r30)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x28(r1)
	  lwz       r3, 0x8(r30)
	  stfs      f0, 0x8(r3)

	.loc_0x314:
	  lwz       r3, 0xC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x340
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x30(r1)
	  lwz       r3, 0xC(r30)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x34(r1)
	  lwz       r3, 0xC(r30)
	  stfs      f0, 0x8(r3)

	.loc_0x340:
	  lwz       r3, 0x10(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x36C
	  lfs       f0, 0x38(r1)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x3C(r1)
	  lwz       r3, 0x10(r30)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x40(r1)
	  lwz       r3, 0x10(r30)
	  stfs      f0, 0x8(r3)

	.loc_0x36C:
	  lwz       r3, 0x14(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x398
	  lfs       f0, 0x44(r1)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x48(r1)
	  lwz       r3, 0x14(r30)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x4C(r1)
	  lwz       r3, 0x14(r30)
	  stfs      f0, 0x8(r3)

	.loc_0x398:
	  addi      r26, r26, 0x1
	  addi      r30, r30, 0x10
	  cmpwi     r26, 0x4
	  addi      r31, r31, 0x4
	  blt+      .loc_0x174
	  psq_l     f31,0xF8(r1),0,0
	  lfd       f31, 0xF0(r1)
	  psq_l     f30,0xE8(r1),0,0
	  lfd       f30, 0xE0(r1)
	  psq_l     f29,0xD8(r1),0,0
	  lfd       f29, 0xD0(r1)
	  psq_l     f28,0xC8(r1),0,0
	  lfd       f28, 0xC0(r1)
	  psq_l     f27,0xB8(r1),0,0
	  lfd       f27, 0xB0(r1)
	  psq_l     f26,0xA8(r1),0,0
	  lfd       f26, 0xA0(r1)
	  lmw       r25, 0x84(r1)
	  lwz       r0, 0x104(r1)
	  mtlr      r0
	  addi      r1, r1, 0x100
	  blr
	*/
}
} // namespace Game
