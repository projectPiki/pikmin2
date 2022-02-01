#include "Vector3.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D170
    lbl_8051D170:
        .float 0.5
    .global lbl_8051D174
    lbl_8051D174:
        .4byte 0x00000000
    .global lbl_8051D178
    lbl_8051D178:
        .float 1.0
    .global lbl_8051D17C
    lbl_8051D17C:
        .4byte 0x42C80000
*/

/*
 * --INFO--
 * Address:	802F2040
 * Size:	000278
 */
void Game::TubeShadowTransNode::makeShadowSRT(Game::JointShadowParm&, Vector3f&, Vector3f&)
{
	// void makeShadowSRT__Q24Game19TubeShadowTransNodeFRQ24Game15JointShadowParmR10Vector3<float> R10Vector3f(void)
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stfd      f27, 0x30(r1)
	  psq_st    f27,0x38(r1),0,0
	  stfd      f26, 0x20(r1)
	  psq_st    f26,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r29, r4
	  lwz       r3, 0x24(r3)
	  mr        r30, r5
	  mr        r31, r6
	  bl        0x137800
	  lfs       f3, 0x0(r3)
	  lfs       f5, 0x10(r3)
	  lfs       f6, 0x20(r3)
	  lfs       f2, 0x4(r3)
	  lfs       f7, 0x14(r3)
	  lfs       f8, 0x24(r3)
	  lfs       f0, 0xC(r3)
	  lfs       f4, -0x11F0(r2)
	  stfs      f0, 0x0(r30)
	  lfs       f29, -0x11EC(r2)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x4(r30)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x8(r30)
	  lfs       f0, 0x1C(r29)
	  lfs       f1, 0x18(r29)
	  fmuls     f0, f2, f0
	  lfs       f2, 0x0(r30)
	  fmadds    f0, f3, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x1C(r29)
	  lfs       f1, 0x18(r29)
	  fmuls     f0, f7, f0
	  lfs       f2, 0x4(r30)
	  fmadds    f0, f5, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x1C(r29)
	  lfs       f1, 0x18(r29)
	  fmuls     f0, f8, f0
	  lfs       f2, 0x8(r30)
	  fmadds    f0, f6, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x8(r31)
	  lfs       f10, 0x0(r31)
	  lfs       f9, 0x0(r30)
	  lfs       f12, 0x4(r31)
	  fsubs     f0, f10, f9
	  lfs       f11, 0x4(r30)
	  lfs       f31, 0x8(r31)
	  lfs       f13, 0x8(r30)
	  fsubs     f1, f12, f11
	  fmuls     f0, f4, f0
	  fsubs     f2, f31, f13
	  lfs       f8, 0x14(r29)
	  fmuls     f1, f4, f1
	  lfs       f6, 0xC(r29)
	  fmuls     f3, f0, f8
	  fmuls     f2, f4, f2
	  lfs       f7, 0x10(r29)
	  fmuls     f5, f1, f6
	  fmsubs    f4, f2, f6, f3
	  fmuls     f3, f2, f7
	  fmsubs    f5, f0, f7, f5
	  fmuls     f28, f4, f4
	  fmsubs    f3, f1, f8, f3
	  fmuls     f27, f5, f5
	  fmadds    f30, f3, f3, f28
	  fadds     f30, f27, f30
	  fcmpo     cr0, f30, f29
	  ble-      .loc_0x16C
	  ble-      .loc_0x170
	  fsqrte    f29, f30
	  fmuls     f30, f29, f30
	  b         .loc_0x170

	.loc_0x16C:
	  fmr       f30, f29

	.loc_0x170:
	  lfs       f29, -0x11EC(r2)
	  fcmpo     cr0, f30, f29
	  ble-      .loc_0x190
	  lfs       f29, -0x11E8(r2)
	  fdivs     f29, f29, f30
	  fmuls     f3, f3, f29
	  fmuls     f4, f4, f29
	  fmuls     f5, f5, f29

	.loc_0x190:
	  lfs       f26, 0x24(r29)
	  fadds     f11, f12, f11
	  lfs       f27, 0x20(r29)
	  fadds     f30, f10, f9
	  fmuls     f10, f7, f26
	  lfs       f29, -0x11F0(r2)
	  fmuls     f12, f6, f26
	  lfs       f9, 0x4(r29)
	  fmuls     f3, f3, f27
	  fmadds    f28, f29, f11, f10
	  lwz       r3, 0x1C(r28)
	  fmuls     f4, f4, f27
	  lfs       f11, -0x11E4(r2)
	  fmuls     f5, f5, f27
	  fsubs     f10, f28, f9
	  stfs      f0, 0x0(r3)
	  fmadds    f12, f29, f30, f12
	  fadds     f9, f31, f13
	  fadds     f10, f11, f10
	  stfs      f1, 0x10(r3)
	  fmuls     f0, f8, f26
	  stfs      f2, 0x20(r3)
	  fmuls     f6, f6, f10
	  lwz       r3, 0x1C(r28)
	  fmuls     f2, f7, f10
	  fmuls     f1, f8, f10
	  stfs      f6, 0x4(r3)
	  fmadds    f0, f29, f9, f0
	  stfs      f2, 0x14(r3)
	  stfs      f1, 0x24(r3)
	  lwz       r3, 0x1C(r28)
	  stfs      f3, 0x8(r3)
	  stfs      f4, 0x18(r3)
	  stfs      f5, 0x28(r3)
	  lwz       r3, 0x1C(r28)
	  stfs      f12, 0xC(r3)
	  stfs      f28, 0x1C(r3)
	  stfs      f0, 0x2C(r3)
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  psq_l     f27,0x38(r1),0,0
	  lfd       f27, 0x30(r1)
	  psq_l     f26,0x28(r1),0,0
	  lfd       f26, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F22B8
 * Size:	000278
 */
void Game::TubeShadowSetNode::makeShadowSRT(Game::JointShadowParm&, Vector3f&, Vector3f&)
{
	// void makeShadowSRT__Q24Game17TubeShadowSetNodeFRQ24Game15JointShadowParmR10Vector3<float> R10Vector3f(void)
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stfd      f27, 0x30(r1)
	  psq_st    f27,0x38(r1),0,0
	  stfd      f26, 0x20(r1)
	  psq_st    f26,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r29, r4
	  lwz       r3, 0x24(r3)
	  mr        r30, r5
	  mr        r31, r6
	  bl        0x137588
	  lfs       f3, 0x0(r3)
	  lfs       f5, 0x10(r3)
	  lfs       f6, 0x20(r3)
	  lfs       f2, 0x4(r3)
	  lfs       f7, 0x14(r3)
	  lfs       f8, 0x24(r3)
	  lfs       f0, 0xC(r3)
	  lfs       f4, -0x11F0(r2)
	  stfs      f0, 0x0(r31)
	  lfs       f29, -0x11EC(r2)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x8(r31)
	  lfs       f0, 0x1C(r29)
	  lfs       f1, 0x18(r29)
	  fmuls     f0, f2, f0
	  lfs       f2, 0x0(r31)
	  fmadds    f0, f3, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x1C(r29)
	  lfs       f1, 0x18(r29)
	  fmuls     f0, f7, f0
	  lfs       f2, 0x4(r31)
	  fmadds    f0, f5, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x1C(r29)
	  lfs       f1, 0x18(r29)
	  fmuls     f0, f8, f0
	  lfs       f2, 0x8(r31)
	  fmadds    f0, f6, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x8(r31)
	  lfs       f10, 0x0(r31)
	  lfs       f9, 0x0(r30)
	  lfs       f12, 0x4(r31)
	  fsubs     f0, f10, f9
	  lfs       f11, 0x4(r30)
	  lfs       f31, 0x8(r31)
	  lfs       f13, 0x8(r30)
	  fsubs     f1, f12, f11
	  fmuls     f0, f4, f0
	  fsubs     f2, f31, f13
	  lfs       f8, 0x14(r29)
	  fmuls     f1, f4, f1
	  lfs       f6, 0xC(r29)
	  fmuls     f3, f0, f8
	  fmuls     f2, f4, f2
	  lfs       f7, 0x10(r29)
	  fmuls     f5, f1, f6
	  fmsubs    f4, f2, f6, f3
	  fmuls     f3, f2, f7
	  fmsubs    f5, f0, f7, f5
	  fmuls     f28, f4, f4
	  fmsubs    f3, f1, f8, f3
	  fmuls     f27, f5, f5
	  fmadds    f30, f3, f3, f28
	  fadds     f30, f27, f30
	  fcmpo     cr0, f30, f29
	  ble-      .loc_0x16C
	  ble-      .loc_0x170
	  fsqrte    f29, f30
	  fmuls     f30, f29, f30
	  b         .loc_0x170

	.loc_0x16C:
	  fmr       f30, f29

	.loc_0x170:
	  lfs       f29, -0x11EC(r2)
	  fcmpo     cr0, f30, f29
	  ble-      .loc_0x190
	  lfs       f29, -0x11E8(r2)
	  fdivs     f29, f29, f30
	  fmuls     f3, f3, f29
	  fmuls     f4, f4, f29
	  fmuls     f5, f5, f29

	.loc_0x190:
	  lfs       f26, 0x24(r29)
	  fadds     f11, f12, f11
	  lfs       f27, 0x20(r29)
	  fadds     f30, f10, f9
	  fmuls     f10, f7, f26
	  lfs       f29, -0x11F0(r2)
	  fmuls     f12, f6, f26
	  lfs       f9, 0x4(r29)
	  fmuls     f3, f3, f27
	  fmadds    f28, f29, f11, f10
	  lwz       r3, 0x1C(r28)
	  fmuls     f4, f4, f27
	  lfs       f11, -0x11E4(r2)
	  fmuls     f5, f5, f27
	  fsubs     f10, f28, f9
	  stfs      f0, 0x0(r3)
	  fmadds    f12, f29, f30, f12
	  fadds     f9, f31, f13
	  fadds     f10, f11, f10
	  stfs      f1, 0x10(r3)
	  fmuls     f0, f8, f26
	  stfs      f2, 0x20(r3)
	  fmuls     f6, f6, f10
	  lwz       r3, 0x1C(r28)
	  fmuls     f2, f7, f10
	  fmuls     f1, f8, f10
	  stfs      f6, 0x4(r3)
	  fmadds    f0, f29, f9, f0
	  stfs      f2, 0x14(r3)
	  stfs      f1, 0x24(r3)
	  lwz       r3, 0x1C(r28)
	  stfs      f3, 0x8(r3)
	  stfs      f4, 0x18(r3)
	  stfs      f5, 0x28(r3)
	  lwz       r3, 0x1C(r28)
	  stfs      f12, 0xC(r3)
	  stfs      f28, 0x1C(r3)
	  stfs      f0, 0x2C(r3)
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  psq_l     f27,0x38(r1),0,0
	  lfd       f27, 0x30(r1)
	  psq_l     f26,0x28(r1),0,0
	  lfd       f26, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F2530
 * Size:	0001AC
 */
void Game::TubeShadowPosNode::makeShadowSRT(Game::JointShadowParm&, Vector3f&, Vector3f&)
{
	// void makeShadowSRT__Q24Game17TubeShadowPosNodeFRQ24Game15JointShadowParmR10Vector3<float> R10Vector3f(void)
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stfd      f28, 0x30(r1)
	  psq_st    f28,0x38(r1),0,0
	  stfd      f27, 0x20(r1)
	  psq_st    f27,0x28(r1),0,0
	  stfd      f26, 0x10(r1)
	  psq_st    f26,0x18(r1),0,0
	  lfs       f10, 0x0(r6)
	  lfs       f9, 0x0(r5)
	  lfs       f3, -0x11F0(r2)
	  fsubs     f0, f10, f9
	  lfs       f12, 0x4(r6)
	  lfs       f11, 0x4(r5)
	  lfs       f31, 0x8(r6)
	  lfs       f13, 0x8(r5)
	  fsubs     f1, f12, f11
	  fmuls     f0, f3, f0
	  lfs       f8, 0x14(r4)
	  fsubs     f2, f31, f13
	  lfs       f7, 0x10(r4)
	  fmuls     f1, f3, f1
	  lfs       f6, 0xC(r4)
	  fmuls     f2, f3, f2
	  lfs       f29, -0x11EC(r2)
	  fmuls     f4, f0, f8
	  fmuls     f5, f1, f6
	  fmuls     f3, f2, f7
	  fmsubs    f4, f2, f6, f4
	  fmsubs    f5, f0, f7, f5
	  fmsubs    f3, f1, f8, f3
	  fmuls     f28, f4, f4
	  fmuls     f27, f5, f5
	  fmadds    f30, f3, f3, f28
	  fadds     f30, f27, f30
	  fcmpo     cr0, f30, f29
	  ble-      .loc_0xB8
	  ble-      .loc_0xBC
	  fsqrte    f29, f30
	  fmuls     f30, f29, f30
	  b         .loc_0xBC

	.loc_0xB8:
	  fmr       f30, f29

	.loc_0xBC:
	  lfs       f29, -0x11EC(r2)
	  fcmpo     cr0, f30, f29
	  ble-      .loc_0xDC
	  lfs       f29, -0x11E8(r2)
	  fdivs     f29, f29, f30
	  fmuls     f3, f3, f29
	  fmuls     f4, f4, f29
	  fmuls     f5, f5, f29

	.loc_0xDC:
	  lfs       f26, 0x24(r4)
	  fadds     f11, f12, f11
	  lfs       f27, 0x20(r4)
	  fadds     f30, f10, f9
	  fmuls     f10, f7, f26
	  lfs       f29, -0x11F0(r2)
	  fmuls     f12, f6, f26
	  lfs       f9, 0x4(r4)
	  fmuls     f3, f3, f27
	  fmadds    f28, f29, f11, f10
	  lwz       r4, 0x1C(r3)
	  fmuls     f4, f4, f27
	  lfs       f11, -0x11E4(r2)
	  fmuls     f5, f5, f27
	  fsubs     f10, f28, f9
	  stfs      f0, 0x0(r4)
	  fmadds    f12, f29, f30, f12
	  fadds     f9, f31, f13
	  fadds     f10, f11, f10
	  stfs      f1, 0x10(r4)
	  fmuls     f0, f8, f26
	  stfs      f2, 0x20(r4)
	  fmuls     f6, f6, f10
	  lwz       r4, 0x1C(r3)
	  fmuls     f2, f7, f10
	  fmuls     f1, f8, f10
	  stfs      f6, 0x4(r4)
	  fmadds    f0, f29, f9, f0
	  stfs      f2, 0x14(r4)
	  stfs      f1, 0x24(r4)
	  lwz       r4, 0x1C(r3)
	  stfs      f3, 0x8(r4)
	  stfs      f4, 0x18(r4)
	  stfs      f5, 0x28(r4)
	  lwz       r3, 0x1C(r3)
	  stfs      f12, 0xC(r3)
	  stfs      f28, 0x1C(r3)
	  stfs      f0, 0x2C(r3)
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  psq_l     f28,0x38(r1),0,0
	  lfd       f28, 0x30(r1)
	  psq_l     f27,0x28(r1),0,0
	  lfd       f27, 0x20(r1)
	  psq_l     f26,0x18(r1),0,0
	  lfd       f26, 0x10(r1)
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802F26DC
 * Size:	000100
 */
void Game::SphereShadowNode::makeShadowSRT(Game::JointShadowParm&, Vector3f&)
{
	// void makeShadowSRT__Q24Game16SphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<float>(void)
	/*
	.loc_0x0:
	  lfs       f1, -0x11EC(r2)
	  lfs       f11, 0xC(r4)
	  lfs       f9, 0x10(r4)
	  fmuls     f2, f1, f11
	  lfs       f8, 0x20(r4)
	  lfs       f10, 0x14(r4)
	  fmuls     f0, f1, f9
	  fnmsubs   f4, f8, f10, f2
	  fmsubs    f5, f8, f9, f2
	  fmsubs    f3, f1, f10, f0
	  fmuls     f0, f4, f4
	  fmuls     f2, f5, f5
	  fmadds    f0, f3, f3, f0
	  fadds     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x50
	  ble-      .loc_0x54
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x54

	.loc_0x50:
	  fmr       f2, f1

	.loc_0x54:
	  lfs       f0, -0x11EC(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x74
	  lfs       f0, -0x11E8(r2)
	  fdivs     f0, f0, f2
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fmuls     f5, f5, f0

	.loc_0x74:
	  lfs       f7, 0x4(r5)
	  fmuls     f3, f3, f8
	  lfs       f0, 0x4(r4)
	  fmuls     f4, f4, f8
	  lfs       f12, 0x24(r4)
	  fmuls     f5, f5, f8
	  lfs       f1, 0x0(r5)
	  lfs       f2, 0x8(r5)
	  fsubs     f0, f7, f0
	  lwz       r4, 0x1C(r3)
	  fmadds    f6, f11, f12, f1
	  lfs       f1, -0x11E4(r2)
	  fmadds    f7, f9, f12, f7
	  stfs      f8, 0x0(r4)
	  fadds     f13, f1, f0
	  lfs       f0, -0x11EC(r2)
	  fmadds    f8, f10, f12, f2
	  stfs      f0, 0x10(r4)
	  fmuls     f2, f11, f13
	  stfs      f0, 0x20(r4)
	  fmuls     f1, f9, f13
	  fmuls     f0, f10, f13
	  lwz       r4, 0x1C(r3)
	  stfs      f2, 0x4(r4)
	  stfs      f1, 0x14(r4)
	  stfs      f0, 0x24(r4)
	  lwz       r4, 0x1C(r3)
	  stfs      f3, 0x8(r4)
	  stfs      f4, 0x18(r4)
	  stfs      f5, 0x28(r4)
	  lwz       r3, 0x1C(r3)
	  stfs      f6, 0xC(r3)
	  stfs      f7, 0x1C(r3)
	  stfs      f8, 0x2C(r3)
	  blr
	*/
}
