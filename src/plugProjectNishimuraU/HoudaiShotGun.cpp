#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802C394C
 * Size:	00003C
 */
void Houdai::levelRotationCallBack(J3DJoint*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x28
	  lwz       r3, -0x68E0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  bl        0x17C4

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C3988
 * Size:	00003C
 */
void Houdai::verticalRotationCallBack(J3DJoint*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x28
	  lwz       r3, -0x68E0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  bl        0x17F0

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C39C4
 * Size:	000B10
 */
void Houdai::HoudaiShotGunNode::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x380(r1)
	  mflr      r0
	  stw       r0, 0x384(r1)
	  stfd      f31, 0x370(r1)
	  psq_st    f31,0x378(r1),0,0
	  stfd      f30, 0x360(r1)
	  psq_st    f30,0x368(r1),0,0
	  stfd      f29, 0x350(r1)
	  psq_st    f29,0x358(r1),0,0
	  stfd      f28, 0x340(r1)
	  psq_st    f28,0x348(r1),0,0
	  stfd      f27, 0x330(r1)
	  psq_st    f27,0x338(r1),0,0
	  stfd      f26, 0x320(r1)
	  psq_st    f26,0x328(r1),0,0
	  stfd      f25, 0x310(r1)
	  psq_st    f25,0x318(r1),0,0
	  stfd      f24, 0x300(r1)
	  psq_st    f24,0x308(r1),0,0
	  stfd      f23, 0x2F0(r1)
	  psq_st    f23,0x2F8(r1),0,0
	  stfd      f22, 0x2E0(r1)
	  psq_st    f22,0x2E8(r1),0,0
	  stfd      f21, 0x2D0(r1)
	  psq_st    f21,0x2D8(r1),0,0
	  stfd      f20, 0x2C0(r1)
	  psq_st    f20,0x2C8(r1),0,0
	  stfd      f19, 0x2B0(r1)
	  psq_st    f19,0x2B8(r1),0,0
	  stfd      f18, 0x2A0(r1)
	  psq_st    f18,0x2A8(r1),0,0
	  stfd      f17, 0x290(r1)
	  psq_st    f17,0x298(r1),0,0
	  stfd      f16, 0x280(r1)
	  psq_st    f16,0x288(r1),0,0
	  stfd      f15, 0x270(r1)
	  psq_st    f15,0x278(r1),0,0
	  stfd      f14, 0x260(r1)
	  psq_st    f14,0x268(r1),0,0
	  stw       r31, 0x25C(r1)
	  stw       r30, 0x258(r1)
	  stw       r29, 0x254(r1)
	  stw       r28, 0x250(r1)
	  lis       r4, 0x8050
	  mr        r28, r3
	  addi      r3, r4, 0x71A0
	  lfs       f16, 0x20(r28)
	  lfs       f24, 0x24(r28)
	  addi      r8, r1, 0x78
	  lfs       f15, 0x28(r28)
	  li        r6, 0
	  lfs       f2, -0x1DD8(r2)
	  addi      r7, r28, 0x2C
	  lfs       f3, -0x1DD0(r2)
	  li        r0, -0x1
	  lfs       f1, 0x800(r3)
	  addi      r29, r1, 0x240
	  lfs       f0, -0x1DCC(r2)
	  addi      r4, r1, 0x1B0
	  stfs      f16, 0x78(r1)
	  li        r30, 0
	  lwz       r3, -0x6CF8(r13)
	  stfs      f24, 0x7C(r1)
	  lwz       r5, -0x6514(r13)
	  stfs      f15, 0x80(r1)
	  stfs      f3, 0x84(r1)
	  stw       r8, 0x1B0(r1)
	  stw       r7, 0x1B4(r1)
	  stfs      f2, 0x1B8(r1)
	  stfs      f2, 0x1BC(r1)
	  stw       r6, 0x1C0(r1)
	  stw       r6, 0x1F4(r1)
	  stb       r6, 0x224(r1)
	  stb       r6, 0x1C9(r1)
	  stb       r6, 0x1C8(r1)
	  stw       r6, 0x1F8(r1)
	  stw       r6, 0x1C4(r1)
	  stb       r6, 0x240(r1)
	  stw       r6, 0x244(r1)
	  stfs      f1, 0x1DC(r1)
	  stfs      f0, 0x1E0(r1)
	  stw       r0, 0x248(r1)
	  stw       r6, 0x1FC(r1)
	  stb       r6, 0x1CA(r1)
	  lwz       r0, 0x18(r28)
	  stw       r0, 0x1C4(r1)
	  lwz       r12, 0x4(r3)
	  lfs       f1, 0x54(r5)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x78(r1)
	  stfs      f0, 0x20(r28)
	  lfs       f0, 0x7C(r1)
	  stfs      f0, 0x24(r28)
	  lfs       f0, 0x80(r1)
	  stfs      f0, 0x28(r28)
	  lwz       r0, 0x1F4(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x19C
	  lwz       r0, 0x1F8(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x50C

	.loc_0x19C:
	  lfs       f0, 0x20(r28)
	  addi      r4, r1, 0x6C
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x6C(r1)
	  lfs       f0, 0x24(r28)
	  stfs      f0, 0x70(r1)
	  lfs       f0, 0x28(r28)
	  stfs      f0, 0x74(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x70(r1)
	  frsp      f2, f1
	  lfs       f0, -0x1DC8(r2)
	  lfs       f1, 0x24(r28)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1F4
	  lfs       f0, -0x1DD0(r2)
	  fadds     f0, f0, f2
	  stfs      f0, 0x24(r28)

	.loc_0x1F4:
	  lfs       f1, 0x20(r28)
	  addi      r4, r1, 0x78
	  lfs       f0, -0x1DD0(r2)
	  stfs      f1, 0x60(r1)
	  lwz       r3, -0x6CF8(r13)
	  lfs       f1, 0x24(r28)
	  stfs      f1, 0x64(r1)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x28(r28)
	  stfs      f1, 0x68(r1)
	  stfs      f0, 0x64(r1)
	  bl        -0x1602BC
	  mr.       r31, r3
	  beq-      .loc_0x2CC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x0(r3)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5808
	  li        r5, 0
	  lis       r3, 0x804E
	  stw       r0, 0x128(r1)
	  addi      r0, r3, 0x6A3C
	  lfs       f1, 0x60(r1)
	  lfs       f0, 0x68(r1)
	  lis       r4, 0x804B
	  lis       r3, 0x804D
	  li        r9, 0x97
	  subi      r10, r4, 0x5814
	  li        r8, 0x98
	  li        r7, 0x99
	  li        r6, 0x9A
	  stw       r0, 0x128(r1)
	  addi      r0, r3, 0x1528
	  addi      r3, r1, 0x128
	  addi      r4, r1, 0x50
	  stfs      f2, 0x64(r1)
	  stw       r10, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f2, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  sth       r9, 0x12C(r1)
	  sth       r8, 0x12E(r1)
	  sth       r7, 0x130(r1)
	  sth       r6, 0x132(r1)
	  stw       r5, 0x134(r1)
	  stw       r5, 0x138(r1)
	  stw       r5, 0x13C(r1)
	  stw       r5, 0x140(r1)
	  stw       r0, 0x128(r1)
	  bl        0xEB4DC
	  b         .loc_0x4B8

	.loc_0x2CC:
	  lwz       r0, 0x1F4(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x40C
	  mr        r3, r29
	  bl        0x158794
	  cmpwi     r3, 0x6
	  bne-      .loc_0x374
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x10C(r1)
	  addi      r0, r3, 0x6A3C
	  lfs       f2, 0x60(r1)
	  lis       r4, 0x804B
	  lfs       f1, 0x64(r1)
	  lis       r3, 0x804D
	  lfs       f0, 0x68(r1)
	  subi      r10, r4, 0x5814
	  li        r9, 0x94
	  li        r8, 0x95
	  li        r7, 0x96
	  li        r6, 0x9C
	  stw       r0, 0x10C(r1)
	  addi      r0, r3, 0x1514
	  addi      r3, r1, 0x10C
	  addi      r4, r1, 0x40
	  stw       r10, 0x40(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  sth       r9, 0x110(r1)
	  sth       r8, 0x112(r1)
	  sth       r7, 0x114(r1)
	  sth       r6, 0x116(r1)
	  stw       r5, 0x118(r1)
	  stw       r5, 0x11C(r1)
	  stw       r5, 0x120(r1)
	  stw       r5, 0x124(r1)
	  stw       r0, 0x10C(r1)
	  bl        0xEB434
	  b         .loc_0x4B8

	.loc_0x374:
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x144(r1)
	  addi      r0, r3, 0x6A28
	  lfs       f2, 0x60(r1)
	  lis       r4, 0x804B
	  lfs       f1, 0x64(r1)
	  lis       r3, 0x804D
	  lfs       f0, 0x68(r1)
	  subi      r4, r4, 0x5814
	  li        r10, 0x8D
	  li        r9, 0x8E
	  li        r8, 0x8F
	  li        r7, 0x90
	  li        r6, 0x9C
	  stw       r0, 0x144(r1)
	  addi      r0, r3, 0x1500
	  addi      r3, r1, 0x144
	  stw       r4, 0x30(r1)
	  addi      r4, r1, 0x30
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  sth       r10, 0x148(r1)
	  sth       r9, 0x14A(r1)
	  sth       r8, 0x14C(r1)
	  sth       r7, 0x14E(r1)
	  sth       r6, 0x150(r1)
	  stw       r5, 0x154(r1)
	  stw       r5, 0x158(r1)
	  stw       r5, 0x15C(r1)
	  stw       r5, 0x160(r1)
	  stw       r5, 0x164(r1)
	  stw       r0, 0x144(r1)
	  bl        0xEB444
	  b         .loc_0x4B8

	.loc_0x40C:
	  lwz       r0, 0x1F8(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x4B8
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  stw       r0, 0xD8(r1)
	  subi      r0, r4, 0x5814
	  lfs       f5, 0x60(r1)
	  addi      r4, r3, 0x6A50
	  lfs       f4, 0x64(r1)
	  lfs       f3, 0x68(r1)
	  lis       r9, 0x804D
	  lfs       f2, 0x20C(r1)
	  lis       r3, 0x804F
	  lfs       f1, 0x210(r1)
	  li        r8, 0x91
	  lfs       f0, 0x214(r1)
	  li        r7, 0x92
	  li        r6, 0x93
	  stw       r0, 0xF0(r1)
	  addi      r9, r9, 0x153C
	  subi      r0, r3, 0x600C
	  stw       r4, 0xD8(r1)
	  addi      r3, r1, 0xD8
	  addi      r4, r1, 0xF0
	  stfs      f5, 0xF4(r1)
	  stfs      f4, 0xF8(r1)
	  stfs      f3, 0xFC(r1)
	  stw       r9, 0xF0(r1)
	  stfs      f2, 0x100(r1)
	  stfs      f1, 0x104(r1)
	  stfs      f0, 0x108(r1)
	  sth       r8, 0xDC(r1)
	  sth       r7, 0xDE(r1)
	  sth       r6, 0xE0(r1)
	  stw       r5, 0xE4(r1)
	  stw       r5, 0xE8(r1)
	  stw       r5, 0xEC(r1)
	  stw       r0, 0xD8(r1)
	  bl        0x128730

	.loc_0x4B8:
	  lwz       r3, 0x1C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r31, 0
	  li        r30, 0x1
	  beq-      .loc_0x4E8
	  addi      r4, r28, 0x20
	  li        r3, 0x5805
	  bl        0x1AA210
	  b         .loc_0x4F4

	.loc_0x4E8:
	  addi      r4, r28, 0x20
	  li        r3, 0x5935
	  bl        0x1AA200

	.loc_0x4F4:
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x60
	  li        r4, 0xB
	  li        r6, 0x2
	  bl        -0x70748
	  b         .loc_0x5C0

	.loc_0x50C:
	  lwz       r4, 0x18(r28)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  lfs       f1, 0x20(r28)
	  lfs       f0, -0x1DD8(r2)
	  fsubs     f1, f2, f1
	  lfs       f2, 0x18(r1)
	  lfs       f3, 0x1C(r1)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x548
	  b         .loc_0x54C

	.loc_0x548:
	  fneg      f1, f1

	.loc_0x54C:
	  lfs       f0, -0x1DC4(r2)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x5A8
	  lfs       f1, 0x24(r28)
	  lfs       f0, -0x1DD8(r2)
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x570
	  b         .loc_0x574

	.loc_0x570:
	  fneg      f1, f1

	.loc_0x574:
	  lfs       f0, -0x1DC0(r2)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x5A8
	  lfs       f1, 0x28(r28)
	  lfs       f0, -0x1DD8(r2)
	  fsubs     f1, f3, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x598
	  b         .loc_0x59C

	.loc_0x598:
	  fneg      f1, f1

	.loc_0x59C:
	  lfs       f0, -0x1DC4(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5C0

	.loc_0x5A8:
	  lwz       r3, 0x1C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r30, 0x1

	.loc_0x5C0:
	  lfs       f0, -0x1DD0(r2)
	  lfs       f8, 0x24(r28)
	  fsubs     f24, f24, f0
	  lfs       f7, 0x20(r28)
	  fsubs     f8, f8, f0
	  lfs       f9, 0x28(r28)
	  fsubs     f3, f16, f7
	  lfs       f0, -0x1DD8(r2)
	  fsubs     f2, f24, f8
	  fsubs     f1, f15, f9
	  fmuls     f2, f2, f2
	  fmuls     f4, f1, f1
	  fmadds    f1, f3, f3, f2
	  fadds     f6, f4, f1
	  fcmpo     cr0, f6, f0
	  ble-      .loc_0x610
	  ble-      .loc_0x614
	  fsqrte    f0, f6
	  fmuls     f6, f0, f6
	  b         .loc_0x614

	.loc_0x610:
	  fmr       f6, f0

	.loc_0x614:
	  lwz       r3, 0x18(r28)
	  lfs       f5, -0x1DD8(r2)
	  lwz       r3, 0xC0(r3)
	  fcmpo     cr0, f6, f5
	  lfs       f31, 0x5B4(r3)
	  ble-      .loc_0xA5C
	  fsubs     f28, f8, f24
	  lfs       f4, -0x1DBC(r2)
	  fadds     f1, f24, f8
	  fsubs     f30, f9, f15
	  fsubs     f29, f7, f16
	  fmuls     f0, f28, f28
	  fadds     f2, f15, f9
	  fmuls     f8, f30, f30
	  fmadds    f0, f29, f29, f0
	  fadds     f3, f16, f7
	  fmuls     f2, f4, f2
	  fadds     f7, f8, f0
	  fmuls     f1, f4, f1
	  fmuls     f0, f4, f3
	  fcmpo     cr0, f7, f5
	  fadds     f14, f6, f31
	  ble-      .loc_0x680
	  ble-      .loc_0x684
	  fsqrte    f3, f7
	  fmuls     f7, f3, f7
	  b         .loc_0x684

	.loc_0x680:
	  fmr       f7, f5

	.loc_0x684:
	  lfs       f3, -0x1DD8(r2)
	  fcmpo     cr0, f7, f3
	  ble-      .loc_0x6A4
	  lfs       f3, -0x1DD4(r2)
	  fdivs     f3, f3, f7
	  fmuls     f29, f29, f3
	  fmuls     f28, f28, f3
	  fmuls     f30, f30, f3

	.loc_0x6A4:
	  lfs       f4, -0x1DD8(r2)
	  lfs       f5, -0x1DD4(r2)
	  fmuls     f3, f4, f30
	  fmuls     f6, f4, f28
	  fmsubs    f26, f4, f29, f3
	  fnmsubs   f25, f5, f29, f6
	  fmsubs    f27, f5, f30, f6
	  fmuls     f3, f26, f26
	  fmuls     f5, f25, f25
	  fmadds    f3, f27, f27, f3
	  fadds     f5, f5, f3
	  fcmpo     cr0, f5, f4
	  ble-      .loc_0x6E8
	  ble-      .loc_0x6EC
	  fsqrte    f3, f5
	  fmuls     f5, f3, f5
	  b         .loc_0x6EC

	.loc_0x6E8:
	  fmr       f5, f4

	.loc_0x6EC:
	  lfs       f3, -0x1DD8(r2)
	  fcmpo     cr0, f5, f3
	  ble-      .loc_0x70C
	  lfs       f3, -0x1DD4(r2)
	  fdivs     f3, f3, f5
	  fmuls     f27, f27, f3
	  fmuls     f26, f26, f3
	  fmuls     f25, f25, f3

	.loc_0x70C:
	  fmuls     f5, f29, f25
	  lfs       f3, -0x1DD8(r2)
	  fmuls     f6, f30, f26
	  fmuls     f4, f28, f27
	  fmsubs    f22, f30, f27, f5
	  fmsubs    f23, f28, f25, f6
	  fmsubs    f21, f29, f26, f4
	  fmuls     f4, f22, f22
	  fmuls     f5, f21, f21
	  fmadds    f4, f23, f23, f4
	  fadds     f4, f5, f4
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x750
	  ble-      .loc_0x754
	  fsqrte    f3, f4
	  fmuls     f4, f3, f4
	  b         .loc_0x754

	.loc_0x750:
	  fmr       f4, f3

	.loc_0x754:
	  lfs       f3, -0x1DD8(r2)
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x774
	  lfs       f3, -0x1DD4(r2)
	  fdivs     f3, f3, f4
	  fmuls     f23, f23, f3
	  fmuls     f22, f22, f3
	  fmuls     f21, f21, f3

	.loc_0x774:
	  stfs      f0, 0x20(r1)
	  addi      r3, r1, 0xB8
	  addi      r4, r1, 0x20
	  stfs      f1, 0x24(r1)
	  stfs      f2, 0x28(r1)
	  stfs      f14, 0x2C(r1)
	  bl        -0x95DB0
	  li        r0, 0x1
	  addi      r3, r1, 0x168
	  stb       r0, 0xD4(r1)
	  addi      r4, r1, 0xB8
	  bl        -0x95D84
	  addi      r3, r1, 0x168
	  bl        -0x95D10
	  fneg      f20, f31
	  lis       r3, 0x8051
	  addi      r31, r3, 0x41E4
	  b         .loc_0xA4C

	.loc_0x7BC:
	  addi      r3, r1, 0x168
	  bl        -0x95C40
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA44
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x8(r1)
	  fsubs     f3, f1, f24
	  lfs       f1, 0x10(r1)
	  fsubs     f2, f0, f16
	  lfs       f0, -0x1DD8(r2)
	  fsubs     f4, f1, f15
	  fmuls     f1, f26, f3
	  fmadds    f1, f27, f2, f1
	  fmadds    f19, f25, f4, f1
	  fcmpo     cr0, f19, f0
	  ble-      .loc_0x830
	  fmr       f0, f19
	  b         .loc_0x834

	.loc_0x830:
	  fneg      f0, f19

	.loc_0x834:
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0xA44
	  fmuls     f1, f22, f3
	  lfs       f0, -0x1DD8(r2)
	  fmadds    f1, f23, f2, f1
	  fmadds    f1, f21, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x858
	  b         .loc_0x85C

	.loc_0x858:
	  fneg      f1, f1

	.loc_0x85C:
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xA44
	  fmuls     f0, f28, f3
	  fmadds    f0, f29, f2, f0
	  fmadds    f0, f30, f4, f0
	  fcmpo     cr0, f0, f20
	  ble-      .loc_0xA44
	  fcmpo     cr0, f0, f14
	  bge-      .loc_0xA44
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x8D4
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9B8
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9B8

	.loc_0x8D4:
	  fmuls     f17, f19, f25
	  lfs       f18, -0x1DD8(r2)
	  fmuls     f19, f19, f27
	  fmuls     f1, f17, f17
	  fmadds    f0, f19, f19, f18
	  fadds     f1, f1, f0
	  fcmpo     cr0, f1, f18
	  ble-      .loc_0x904
	  ble-      .loc_0x908
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x908

	.loc_0x904:
	  fmr       f1, f18

	.loc_0x908:
	  lfs       f0, -0x1DD8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x928
	  lfs       f0, -0x1DD4(r2)
	  fdivs     f0, f0, f1
	  fmuls     f19, f19, f0
	  fmuls     f18, f18, f0
	  fmuls     f17, f17, f0

	.loc_0x928:
	  mr        r3, r29
	  lfs       f0, -0x1DB8(r2)
	  lwz       r12, 0x0(r29)
	  fmuls     f19, f19, f0
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x950
	  lfs       f18, -0x1DB8(r2)

	.loc_0x950:
	  lwz       r8, 0x18(r28)
	  lis       r5, 0x804B
	  lfs       f0, -0x1DB8(r2)
	  lis       r4, 0x804B
	  lwz       r7, 0xC0(r8)
	  lis       r3, 0x804B
	  subi      r6, r5, 0x5D00
	  fmuls     f17, f17, f0
	  lfs       f0, 0x604(r7)
	  addi      r5, r4, 0x4974
	  addi      r0, r3, 0x492C
	  mr        r3, r29
	  stw       r6, 0xA0(r1)
	  addi      r4, r1, 0xA0
	  stw       r5, 0xA0(r1)
	  stw       r8, 0xA4(r1)
	  stfs      f0, 0xA8(r1)
	  stfs      f19, 0xAC(r1)
	  stfs      f18, 0xB0(r1)
	  stfs      f17, 0xB4(r1)
	  stw       r0, 0xA0(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xA44

	.loc_0x9B8:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA44
	  lwz       r5, 0x18(r28)
	  cmplw     r29, r5
	  beq-      .loc_0xA44
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r3, 0x5D00
	  lfs       f3, -0x1DB4(r2)
	  stw       r0, 0x88(r1)
	  lis       r3, 0x8051
	  addi      r4, r4, 0x4974
	  lfs       f2, 0x41E4(r3)
	  lis       r3, 0x804B
	  lfs       f1, 0x4(r31)
	  stw       r4, 0x88(r1)
	  addi      r0, r3, 0x492C
	  lfs       f0, 0x8(r31)
	  mr        r3, r29
	  stw       r5, 0x8C(r1)
	  addi      r4, r1, 0x88
	  stfs      f3, 0x90(r1)
	  stfs      f2, 0x94(r1)
	  stfs      f1, 0x98(r1)
	  stfs      f0, 0x9C(r1)
	  stw       r0, 0x88(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA44:
	  addi      r3, r1, 0x168
	  bl        -0x95F0C

	.loc_0xA4C:
	  addi      r3, r1, 0x168
	  bl        -0x95EE0
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x7BC

	.loc_0xA5C:
	  mr        r3, r30
	  psq_l     f31,0x378(r1),0,0
	  lfd       f31, 0x370(r1)
	  psq_l     f30,0x368(r1),0,0
	  lfd       f30, 0x360(r1)
	  psq_l     f29,0x358(r1),0,0
	  lfd       f29, 0x350(r1)
	  psq_l     f28,0x348(r1),0,0
	  lfd       f28, 0x340(r1)
	  psq_l     f27,0x338(r1),0,0
	  lfd       f27, 0x330(r1)
	  psq_l     f26,0x328(r1),0,0
	  lfd       f26, 0x320(r1)
	  psq_l     f25,0x318(r1),0,0
	  lfd       f25, 0x310(r1)
	  psq_l     f24,0x308(r1),0,0
	  lfd       f24, 0x300(r1)
	  psq_l     f23,0x2F8(r1),0,0
	  lfd       f23, 0x2F0(r1)
	  psq_l     f22,0x2E8(r1),0,0
	  lfd       f22, 0x2E0(r1)
	  psq_l     f21,0x2D8(r1),0,0
	  lfd       f21, 0x2D0(r1)
	  psq_l     f20,0x2C8(r1),0,0
	  lfd       f20, 0x2C0(r1)
	  psq_l     f19,0x2B8(r1),0,0
	  lfd       f19, 0x2B0(r1)
	  psq_l     f18,0x2A8(r1),0,0
	  lfd       f18, 0x2A0(r1)
	  psq_l     f17,0x298(r1),0,0
	  lfd       f17, 0x290(r1)
	  psq_l     f16,0x288(r1),0,0
	  lfd       f16, 0x280(r1)
	  psq_l     f15,0x278(r1),0,0
	  lfd       f15, 0x270(r1)
	  psq_l     f14,0x268(r1),0,0
	  lfd       f14, 0x260(r1)
	  lwz       r31, 0x25C(r1)
	  lwz       r30, 0x258(r1)
	  lwz       r29, 0x254(r1)
	  lwz       r0, 0x384(r1)
	  lwz       r28, 0x250(r1)
	  mtlr      r0
	  addi      r1, r1, 0x380
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C44D4
 * Size:	000240
 */
Houdai::HoudaiShotGunMgr::HoudaiShotGunMgr(Game::Houdai::Obj*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x1DD8(r2)
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  stmw      r24, 0x10(r1)
	  mr        r25, r3
	  stw       r4, 0x0(r3)
	  li        r3, 0x38
	  stb       r0, 0x4(r25)
	  stb       r0, 0x5(r25)
	  stb       r0, 0x6(r25)
	  stfs      f0, 0xC(r25)
	  stfs      f0, 0x8(r25)
	  bl        -0x2A0668
	  mr.       r26, r3
	  beq-      .loc_0x5C
	  lwz       r27, 0x0(r25)
	  bl        0x14CE74
	  lis       r3, 0x804D
	  addi      r0, r3, 0x1548
	  stw       r0, 0x0(r26)
	  stw       r27, 0x18(r26)

	.loc_0x5C:
	  stw       r26, 0x34(r25)
	  li        r3, 0x38
	  bl        -0x2A0694
	  mr.       r26, r3
	  beq-      .loc_0x88
	  lwz       r27, 0x0(r25)
	  bl        0x14CE48
	  lis       r3, 0x804D
	  addi      r0, r3, 0x1548
	  stw       r0, 0x0(r26)
	  stw       r27, 0x18(r26)

	.loc_0x88:
	  lis       r6, 0x804E
	  lis       r5, 0x804E
	  lis       r4, 0x804F
	  lis       r3, 0x8051
	  addi      r6, r6, 0x698C
	  addi      r5, r5, 0x6940
	  subi      r4, r4, 0x5FF8
	  stw       r26, 0x38(r25)
	  addi      r27, r6, 0x14
	  addi      r29, r5, 0x14
	  addi      r28, r4, 0x14
	  addi      r31, r3, 0x41E4
	  li        r26, 0

	.loc_0xBC:
	  li        r3, 0x38
	  bl        -0x2A06F0
	  mr.       r30, r3
	  beq-      .loc_0xE4
	  lwz       r24, 0x0(r25)
	  bl        0x14CDEC
	  lis       r3, 0x804D
	  addi      r0, r3, 0x1548
	  stw       r0, 0x0(r30)
	  stw       r24, 0x18(r30)

	.loc_0xE4:
	  li        r3, 0x14
	  bl        -0x2A0718
	  cmplwi    r3, 0
	  beq-      .loc_0x15C
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804E
	  lis       r4, 0x804F
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  li        r8, 0
	  li        r7, 0x2B2
	  stw       r0, 0x0(r3)
	  addi      r6, r5, 0x6940
	  li        r5, 0x9B
	  subi      r0, r4, 0x5FF8
	  stw       r27, 0x4(r3)
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r29, 0x4(r3)
	  stw       r8, 0x10(r3)
	  sth       r5, 0xC(r3)
	  stw       r0, 0x0(r3)
	  stw       r28, 0x4(r3)

	.loc_0x15C:
	  stw       r3, 0x1C(r30)
	  mr        r4, r30
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x20(r30)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x24(r30)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x28(r30)
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x2C(r30)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x30(r30)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x34(r30)
	  lwz       r3, 0x38(r25)
	  bl        0x14CD9C
	  addi      r26, r26, 0x1
	  cmpwi     r26, 0xA
	  blt+      .loc_0xBC
	  li        r3, 0x10
	  bl        -0x2A07DC
	  cmplwi    r3, 0
	  beq-      .loc_0x21C
	  lis       r5, 0x804B
	  lis       r4, 0x804A
	  subi      r0, r5, 0x5808
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x1D84
	  lis       r5, 0x804B
	  lis       r4, 0x804D
	  stw       r0, 0x4(r3)
	  addi      r0, r6, 0x698C
	  addi      r6, r5, 0x2C24
	  addi      r4, r4, 0x14B4
	  stw       r0, 0x0(r3)
	  li        r8, 0
	  li        r7, 0x9F
	  addi      r5, r6, 0x14
	  stw       r27, 0x4(r3)
	  addi      r0, r4, 0x14
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x4(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x21C:
	  stw       r3, 0x30(r25)
	  li        r0, 0
	  mr        r3, r25
	  stw       r0, -0x68E0(r13)
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C4714
 * Size:	0000B4
 */
void Houdai::HoudaiShotGunMgr::setupShotGun()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x1DD8(r2)
	  subi      r4, r2, 0x1DB0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  stb       r0, 0x4(r3)
	  stb       r0, 0x5(r3)
	  stb       r0, 0x6(r3)
	  stfs      f0, 0xC(r3)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x174(r3)
	  bl        0x17A88C
	  lwz       r5, 0x0(r29)
	  mr        r31, r3
	  subi      r4, r2, 0x1DA8
	  lwz       r3, 0x174(r5)
	  bl        0x17A878
	  lis       r5, 0x802C
	  lwz       r4, 0x18(r31)
	  addi      r0, r5, 0x394C
	  mr        r30, r3
	  stw       r0, 0x4(r4)
	  lis       r5, 0x802C
	  addi      r0, r5, 0x3988
	  mr        r3, r31
	  lwz       r4, 0x18(r30)
	  stw       r0, 0x4(r4)
	  bl        0x165108
	  stw       r3, 0x10(r29)
	  mr        r3, r30
	  bl        0x1650FC
	  stw       r3, 0x14(r29)
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
 * Address:	802C47C8
 * Size:	00000C
 */
void Houdai::HoudaiShotGunMgr::resetCallBack()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, -0x68E0(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C47D4
 * Size:	000008
 */
void Houdai::HoudaiShotGunMgr::setCallBack()
{
	/*
	.loc_0x0:
	  stw       r3, -0x68E0(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C47DC
 * Size:	000024
 */
void Houdai::HoudaiShotGunMgr::startRotation()
{
	/*
	.loc_0x0:
	  li        r4, 0x1
	  li        r0, 0
	  stb       r4, 0x4(r3)
	  lfs       f0, -0x1DD8(r2)
	  stb       r0, 0x5(r3)
	  stb       r0, 0x6(r3)
	  stfs      f0, 0xC(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C4800
 * Size:	000014
 */
void Houdai::HoudaiShotGunMgr::finishRotation()
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, 0x1
	  stb       r4, 0x5(r3)
	  stb       r0, 0x6(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C4814
 * Size:	000008
 */
void Houdai::HoudaiShotGunMgr::isShotGunRotation()
{
	/*
	.loc_0x0:
	  lbz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C481C
 * Size:	000008
 */
void Houdai::HoudaiShotGunMgr::isShotGunLockOn()
{
	/*
	.loc_0x0:
	  lbz       r3, 0x5(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C4824
 * Size:	000008
 */
void Houdai::HoudaiShotGunMgr::isFinishShotGun()
{
	/*
	.loc_0x0:
	  lbz       r3, 0x6(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C482C
 * Size:	00001C
 */
void Houdai::HoudaiShotGunMgr::setShotGunTarget(Vector3f&)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C4848
 * Size:	0003C0
 */
void Houdai::HoudaiShotGunMgr::emitShotGun()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stfd      f27, 0x90(r1)
	  psq_st    f27,0x98(r1),0,0
	  stfd      f26, 0x80(r1)
	  psq_st    f26,0x88(r1),0,0
	  stfd      f25, 0x70(r1)
	  psq_st    f25,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r31, r3
	  lwz       r3, 0x38(r3)
	  lwz       r29, 0x10(r3)
	  cmplwi    r29, 0
	  beq-      .loc_0x36C
	  lwz       r3, 0x14(r31)
	  lfs       f0, -0x1DD8(r2)
	  lfs       f30, 0x10(r3)
	  lfs       f29, 0x20(r3)
	  fmuls     f1, f30, f30
	  lfs       f31, 0x0(r3)
	  fmuls     f2, f29, f29
	  lfs       f28, 0xC(r3)
	  lfs       f27, 0x1C(r3)
	  fmadds    f1, f31, f31, f1
	  lfs       f26, 0x2C(r3)
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xAC
	  ble-      .loc_0xB0
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xB0

	.loc_0xAC:
	  fmr       f1, f0

	.loc_0xB0:
	  lfs       f0, -0x1DD8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xD0
	  lfs       f0, -0x1DD4(r2)
	  fdivs     f0, f0, f1
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0

	.loc_0xD0:
	  lwz       r3, 0x0(r31)
	  lfs       f1, -0x1DA4(r2)
	  lwz       r30, 0xC0(r3)
	  lfs       f0, 0x5DC(r30)
	  fmuls     f25, f1, f0
	  bl        -0x1FB38C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x44(r1)
	  lwz       r3, 0x0(r31)
	  stw       r0, 0x40(r1)
	  lfd       f2, -0x1D90(r2)
	  lfd       f0, 0x40(r1)
	  lfs       f1, -0x1DA0(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, 0x5DC(r30)
	  lwz       r30, 0xC0(r3)
	  fmuls     f2, f25, f2
	  fdivs     f1, f2, f1
	  fsubs     f0, f1, f0
	  fadds     f31, f31, f0
	  bl        -0x1FB3CC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x4C(r1)
	  lwz       r3, 0x0(r31)
	  stw       r0, 0x48(r1)
	  lfd       f2, -0x1D90(r2)
	  lfd       f0, 0x48(r1)
	  lfs       f1, -0x1DA0(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, 0x5DC(r30)
	  lwz       r30, 0xC0(r3)
	  fmuls     f2, f25, f2
	  fdivs     f1, f2, f1
	  fsubs     f0, f1, f0
	  fadds     f30, f30, f0
	  bl        -0x1FB40C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x54(r1)
	  fmuls     f0, f30, f30
	  lfd       f4, -0x1D90(r2)
	  stw       r0, 0x50(r1)
	  lfs       f3, -0x1DA0(r2)
	  fmadds    f1, f31, f31, f0
	  lfd       f0, 0x50(r1)
	  lfs       f2, 0x5DC(r30)
	  fsubs     f4, f0, f4
	  lfs       f0, -0x1DD8(r2)
	  fmuls     f4, f25, f4
	  fdivs     f3, f4, f3
	  fsubs     f2, f3, f2
	  fadds     f29, f29, f2
	  fmuls     f2, f29, f29
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1C8
	  ble-      .loc_0x1CC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1CC

	.loc_0x1C8:
	  fmr       f1, f0

	.loc_0x1CC:
	  lfs       f0, -0x1DD8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1EC
	  lfs       f0, -0x1DD4(r2)
	  fdivs     f0, f0, f1
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0

	.loc_0x1EC:
	  lfs       f2, -0x1D9C(r2)
	  lfs       f1, -0x1D98(r2)
	  fmuls     f3, f31, f2
	  lfs       f0, -0x1DD8(r2)
	  fmuls     f4, f30, f2
	  fmuls     f2, f29, f2
	  fadds     f28, f28, f3
	  fadds     f27, f27, f4
	  fadds     f26, f26, f2
	  stfs      f28, 0x20(r29)
	  fmuls     f31, f31, f1
	  fmuls     f30, f30, f1
	  stfs      f27, 0x24(r29)
	  fmuls     f29, f29, f1
	  stfs      f26, 0x28(r29)
	  stfs      f31, 0x2C(r29)
	  stfs      f30, 0x30(r29)
	  stfs      f29, 0x34(r29)
	  lfs       f3, 0x30(r29)
	  lfs       f4, 0x34(r29)
	  fmuls     f1, f3, f3
	  lfs       f2, 0x2C(r29)
	  fmuls     f5, f4, f4
	  fmadds    f1, f2, f2, f1
	  fadds     f1, f5, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x268
	  ble-      .loc_0x26C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x26C

	.loc_0x268:
	  fmr       f1, f0

	.loc_0x26C:
	  lfs       f0, -0x1DD8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x28C
	  lfs       f0, -0x1DD4(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0

	.loc_0x28C:
	  lis       r4, 0x804B
	  lis       r3, 0x804D
	  subi      r4, r4, 0x5814
	  addi      r0, r29, 0x20
	  stw       r4, 0x8(r1)
	  addi      r3, r3, 0x153C
	  addi      r4, r1, 0x8
	  lfs       f0, 0x20(r29)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x24(r29)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x28(r29)
	  stfs      f0, 0x14(r1)
	  stw       r3, 0x8(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  stfs      f4, 0x20(r1)
	  lwz       r3, 0x1C(r29)
	  stw       r0, 0x10(r3)
	  lwz       r3, 0x1C(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  bl        0x14CA98
	  lwz       r3, 0x34(r31)
	  mr        r4, r29
	  bl        0x14C8C4
	  lwz       r8, 0x14(r31)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5808
	  li        r5, 0
	  lis       r3, 0x804E
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x6A50
	  lis       r3, 0x804E
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x69EC
	  lis       r3, 0x804D
	  li        r4, 0x9D
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x14A0
	  li        r7, 0x9E
	  li        r6, 0x247
	  sth       r4, 0x28(r1)
	  addi      r3, r1, 0x24
	  li        r4, 0
	  sth       r7, 0x2A(r1)
	  sth       r6, 0x2C(r1)
	  stw       r5, 0x30(r1)
	  stw       r5, 0x34(r1)
	  stw       r5, 0x38(r1)
	  stw       r8, 0x3C(r1)
	  stw       r0, 0x24(r1)
	  bl        0xEA904

	.loc_0x36C:
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  psq_l     f27,0x98(r1),0,0
	  lfd       f27, 0x90(r1)
	  psq_l     f26,0x88(r1),0,0
	  lfd       f26, 0x80(r1)
	  psq_l     f25,0x78(r1),0,0
	  lfd       f25, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C4C08
 * Size:	000084
 */
void Houdai::HoudaiShotGunMgr::doUpdate()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lbz       r0, 0x6(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  bl        0x388
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x48
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x4(r31)
	  stb       r0, 0x5(r31)

	.loc_0x48:
	  mr        r3, r31
	  bl        0x7A0
	  b         .loc_0x70

	.loc_0x54:
	  bl        0x12C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  li        r0, 0x1
	  stb       r0, 0x5(r31)

	.loc_0x68:
	  mr        r3, r31
	  bl        0x7B0

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C4C8C
 * Size:	000078
 */
void Houdai::HoudaiShotGunMgr::doUpdateCommon()
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
	  lwz       r3, 0x34(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x54

	.loc_0x28:
	  lwz       r31, 0x4(r30)
	  mr        r3, r30
	  bl        -0x12F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  mr        r3, r30
	  bl        0x14C904
	  lwz       r3, 0x38(r29)
	  mr        r4, r30
	  bl        0x14C730

	.loc_0x50:
	  mr        r30, r31

	.loc_0x54:
	  cmplwi    r30, 0
	  bne+      .loc_0x28
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
 * Address:	802C4D04
 * Size:	000084
 */
void Houdai::HoudaiShotGunMgr::forceFinishShotGun()
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
	  lwz       r3, 0x34(r3)
	  lwz       r30, 0x10(r3)
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x1C(r30)
	  lwz       r31, 0x4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        0x14C888
	  lwz       r3, 0x38(r29)
	  mr        r4, r30
	  bl        0x14C6B4
	  mr        r30, r31

	.loc_0x58:
	  cmplwi    r30, 0
	  bne+      .loc_0x28
	  mr        r3, r29
	  bl        0x68C
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
 * Address:	802C4D88
 * Size:	000234
 */
void Houdai::HoudaiShotGunMgr::searchShotGunRotation()
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
	  stfd      f28, 0x10(r1)
	  psq_st    f28,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8051
	  lwz       r5, 0x14(r31)
	  subi      r3, r3, 0x2E20
	  lfs       f2, 0x20(r31)
	  lfs       f0, 0x2C(r5)
	  lfs       f3, 0x1C(r31)
	  fsubs     f29, f2, f0
	  lfs       f1, 0x1C(r5)
	  lfs       f2, 0x18(r31)
	  lfs       f0, 0xC(r5)
	  fsubs     f30, f3, f1
	  lwz       r4, 0x10(r31)
	  fsubs     f31, f2, f0
	  lfs       f1, 0x4(r4)
	  lfs       f2, 0x24(r4)
	  bl        -0x28FCF0
	  fmr       f28, f1
	  lis       r3, 0x8051
	  fneg      f1, f31
	  subi      r3, r3, 0x2E20
	  fneg      f2, f29
	  bl        -0x28FD08
	  fmr       f2, f1
	  fmr       f1, f28
	  bl        0x14CDE0
	  lfs       f0, -0x1DD8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xAC
	  fmr       f0, f1
	  b         .loc_0xB0

	.loc_0xAC:
	  fneg      f0, f1

	.loc_0xB0:
	  lfs       f2, -0x1D88(r2)
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0xD0
	  fdivs     f1, f1, f0
	  lfs       f0, 0x8(r31)
	  fnmsubs   f0, f2, f1, f0
	  stfs      f0, 0x8(r31)
	  b         .loc_0xDC

	.loc_0xD0:
	  lfs       f0, 0x8(r31)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x8(r31)

	.loc_0xDC:
	  lfs       f1, 0x8(r31)
	  lfs       f0, -0x1DD8(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF8
	  lfs       f0, -0x1D84(r2)
	  fadds     f1, f0, f1
	  b         .loc_0x10C

	.loc_0xF8:
	  lfs       f0, -0x1D84(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x10C
	  fsubs     f1, f1, f0

	.loc_0x10C:
	  fmuls     f2, f29, f29
	  lfs       f0, -0x1DD8(r2)
	  stfs      f1, 0x8(r31)
	  fmadds    f1, f31, f31, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x134
	  ble-      .loc_0x138
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x138

	.loc_0x134:
	  fmr       f1, f0

	.loc_0x138:
	  fmr       f2, f30
	  lis       r3, 0x8051
	  subi      r3, r3, 0x2E20
	  bl        -0x28FDC4
	  lfs       f2, -0x1D80(r2)
	  lfs       f0, -0x1DD8(r2)
	  fadds     f2, f2, f1
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x168
	  lfs       f0, -0x1D84(r2)
	  fadds     f2, f0, f2
	  b         .loc_0x17C

	.loc_0x168:
	  lfs       f0, -0x1D84(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x17C
	  fsubs     f2, f2, f0

	.loc_0x17C:
	  lfs       f1, 0xC(r31)
	  bl        0x14CCF4
	  lfs       f0, -0x1DD8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x198
	  fmr       f0, f1
	  b         .loc_0x19C

	.loc_0x198:
	  fneg      f0, f1

	.loc_0x19C:
	  lfs       f2, -0x1D88(r2)
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x1BC
	  fdivs     f1, f1, f0
	  lfs       f0, 0xC(r31)
	  fnmsubs   f0, f2, f1, f0
	  stfs      f0, 0xC(r31)
	  b         .loc_0x1C8

	.loc_0x1BC:
	  lfs       f0, 0xC(r31)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xC(r31)

	.loc_0x1C8:
	  lfs       f1, 0xC(r31)
	  lfs       f0, -0x1DD8(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1E4
	  lfs       f0, -0x1D84(r2)
	  fadds     f1, f0, f1
	  b         .loc_0x1F8

	.loc_0x1E4:
	  lfs       f0, -0x1D84(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1F8
	  fsubs     f1, f1, f0

	.loc_0x1F8:
	  stfs      f1, 0xC(r31)
	  li        r3, 0x1
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  psq_l     f28,0x18(r1),0,0
	  lfd       f28, 0x10(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C4FBC
 * Size:	000178
 */
void Houdai::HoudaiShotGunMgr::returnShotGunRotation()
{
	/*
	.loc_0x0:
	  lfs       f3, -0x1DD8(r2)
	  lfs       f4, 0x8(r3)
	  fcmpo     cr0, f3, f4
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x30
	  fsubs     f2, f3, f4
	  lfs       f1, -0x1D84(r2)
	  fsubs     f0, f1, f2
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x48
	  fsubs     f3, f3, f1
	  b         .loc_0x48

	.loc_0x30:
	  fsubs     f2, f4, f3
	  lfs       f1, -0x1D84(r2)
	  fsubs     f0, f1, f2
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x48
	  fadds     f3, f3, f1

	.loc_0x48:
	  fsubs     f1, f4, f3
	  lfs       f0, -0x1DD8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5C
	  b         .loc_0x60

	.loc_0x5C:
	  fneg      f1, f1

	.loc_0x60:
	  lfs       f0, -0x1D7C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x74
	  fmr       f0, f3
	  b         .loc_0x88

	.loc_0x74:
	  fcmpo     cr0, f4, f3
	  bge-      .loc_0x84
	  fadds     f0, f4, f0
	  b         .loc_0x88

	.loc_0x84:
	  fsubs     f0, f4, f0

	.loc_0x88:
	  stfs      f0, 0x8(r3)
	  lfs       f4, -0x1DD8(r2)
	  lfs       f5, 0xC(r3)
	  fcmpo     cr0, f4, f5
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xBC
	  fsubs     f2, f4, f5
	  lfs       f1, -0x1D84(r2)
	  fsubs     f0, f1, f2
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0xD4
	  fsubs     f4, f4, f1
	  b         .loc_0xD4

	.loc_0xBC:
	  fsubs     f2, f5, f4
	  lfs       f1, -0x1D84(r2)
	  fsubs     f0, f1, f2
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0xD4
	  fadds     f4, f4, f1

	.loc_0xD4:
	  fsubs     f1, f5, f4
	  lfs       f0, -0x1DD8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xE8
	  b         .loc_0xEC

	.loc_0xE8:
	  fneg      f1, f1

	.loc_0xEC:
	  lfs       f0, -0x1D7C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x100
	  fmr       f0, f4
	  b         .loc_0x114

	.loc_0x100:
	  fcmpo     cr0, f5, f4
	  bge-      .loc_0x110
	  fadds     f0, f5, f0
	  b         .loc_0x114

	.loc_0x110:
	  fsubs     f0, f5, f0

	.loc_0x114:
	  stfs      f0, 0xC(r3)
	  lfs       f0, -0x1DD8(r2)
	  lfs       f1, 0x8(r3)
	  fsubs     f1, f1, f3
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x130
	  b         .loc_0x134

	.loc_0x130:
	  fneg      f1, f1

	.loc_0x134:
	  lfs       f0, -0x1D78(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x170
	  lfs       f1, 0xC(r3)
	  lfs       f0, -0x1DD8(r2)
	  fsubs     f1, f1, f4
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x158
	  b         .loc_0x15C

	.loc_0x158:
	  fneg      f1, f1

	.loc_0x15C:
	  lfs       f0, -0x1D78(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x170
	  li        r3, 0x1
	  blr

	.loc_0x170:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C5134
 * Size:	000068
 */
void Houdai::HoudaiShotGunMgr::rotateLevel(J3DJoint*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lbz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lfs       f0, 0x8(r31)
	  addi      r3, r1, 0x8
	  li        r4, 0x58
	  fneg      f1, f0
	  bl        -0x1DAC50
	  lwz       r3, 0x10(r31)
	  addi      r4, r1, 0x8
	  mr        r5, r3
	  bl        -0x1DAE74
	  lis       r4, 0x8051
	  lwz       r3, 0x10(r31)
	  subi      r4, r4, 0xC2C
	  bl        -0x1DAEB8

	.loc_0x54:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C519C
 * Size:	000258
 */
void Houdai::HoudaiShotGunMgr::rotateVertical(J3DJoint*)
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
	  lbz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x22C
	  lwz       r5, 0x14(r31)
	  lfs       f9, -0x1DD8(r2)
	  lfs       f1, 0x10(r5)
	  lfs       f2, 0x20(r5)
	  fmuls     f5, f1, f1
	  lfs       f0, 0x0(r5)
	  fmuls     f8, f2, f2
	  lfs       f3, 0x4(r5)
	  lfs       f4, 0x14(r5)
	  fmadds    f7, f0, f0, f5
	  lfs       f5, 0x24(r5)
	  lfs       f6, 0x8(r5)
	  fadds     f31, f8, f7
	  lfs       f7, 0x18(r5)
	  lfs       f8, 0x28(r5)
	  fcmpo     cr0, f31, f9
	  ble-      .loc_0x8C
	  ble-      .loc_0x90
	  fsqrte    f9, f31
	  fmuls     f31, f9, f31
	  b         .loc_0x90

	.loc_0x8C:
	  fmr       f31, f9

	.loc_0x90:
	  lfs       f9, -0x1DD8(r2)
	  fcmpo     cr0, f31, f9
	  ble-      .loc_0xB4
	  lfs       f9, -0x1DD4(r2)
	  fdivs     f9, f9, f31
	  fmuls     f0, f0, f9
	  fmuls     f1, f1, f9
	  fmuls     f2, f2, f9
	  b         .loc_0xB8

	.loc_0xB4:
	  fmr       f31, f9

	.loc_0xB8:
	  fmuls     f10, f4, f4
	  lfs       f9, -0x1DD8(r2)
	  fmuls     f11, f5, f5
	  fmadds    f10, f3, f3, f10
	  fadds     f30, f11, f10
	  fcmpo     cr0, f30, f9
	  ble-      .loc_0xE4
	  ble-      .loc_0xE8
	  fsqrte    f9, f30
	  fmuls     f30, f9, f30
	  b         .loc_0xE8

	.loc_0xE4:
	  fmr       f30, f9

	.loc_0xE8:
	  lfs       f9, -0x1DD8(r2)
	  fcmpo     cr0, f30, f9
	  ble-      .loc_0x10C
	  lfs       f9, -0x1DD4(r2)
	  fdivs     f9, f9, f30
	  fmuls     f3, f3, f9
	  fmuls     f4, f4, f9
	  fmuls     f5, f5, f9
	  b         .loc_0x110

	.loc_0x10C:
	  fmr       f30, f9

	.loc_0x110:
	  fmuls     f10, f7, f7
	  lfs       f9, -0x1DD8(r2)
	  fmuls     f11, f8, f8
	  fmadds    f10, f6, f6, f10
	  fadds     f29, f11, f10
	  fcmpo     cr0, f29, f9
	  ble-      .loc_0x13C
	  ble-      .loc_0x140
	  fsqrte    f9, f29
	  fmuls     f29, f9, f29
	  b         .loc_0x140

	.loc_0x13C:
	  fmr       f29, f9

	.loc_0x140:
	  lfs       f9, -0x1DD8(r2)
	  fcmpo     cr0, f29, f9
	  ble-      .loc_0x164
	  lfs       f9, -0x1DD4(r2)
	  fdivs     f9, f9, f29
	  fmuls     f6, f6, f9
	  fmuls     f7, f7, f9
	  fmuls     f8, f8, f9
	  b         .loc_0x168

	.loc_0x164:
	  fmr       f29, f9

	.loc_0x168:
	  stfs      f0, 0x0(r5)
	  addi      r3, r1, 0x8
	  li        r4, 0x5A
	  stfs      f1, 0x10(r5)
	  stfs      f2, 0x20(r5)
	  stfs      f3, 0x4(r5)
	  stfs      f4, 0x14(r5)
	  stfs      f5, 0x24(r5)
	  stfs      f6, 0x8(r5)
	  stfs      f7, 0x18(r5)
	  stfs      f8, 0x28(r5)
	  lfs       f1, 0xC(r31)
	  bl        -0x1DAE20
	  lwz       r3, 0x14(r31)
	  addi      r4, r1, 0x8
	  mr        r5, r3
	  bl        -0x1DB044
	  lwz       r5, 0x14(r31)
	  lis       r3, 0x8051
	  subi      r4, r3, 0xC2C
	  lfs       f0, 0x0(r5)
	  lfs       f1, 0x10(r5)
	  fmuls     f0, f0, f31
	  lfs       f2, 0x20(r5)
	  lfs       f3, 0x4(r5)
	  fmuls     f1, f1, f31
	  lfs       f4, 0x14(r5)
	  fmuls     f2, f2, f31
	  lfs       f5, 0x24(r5)
	  fmuls     f3, f3, f30
	  lfs       f6, 0x8(r5)
	  fmuls     f4, f4, f30
	  lfs       f7, 0x18(r5)
	  fmuls     f5, f5, f30
	  lfs       f8, 0x28(r5)
	  fmuls     f6, f6, f29
	  stfs      f0, 0x0(r5)
	  fmuls     f7, f7, f29
	  fmuls     f8, f8, f29
	  stfs      f1, 0x10(r5)
	  stfs      f2, 0x20(r5)
	  stfs      f3, 0x4(r5)
	  stfs      f4, 0x14(r5)
	  stfs      f5, 0x24(r5)
	  stfs      f6, 0x8(r5)
	  stfs      f7, 0x18(r5)
	  stfs      f8, 0x28(r5)
	  lwz       r3, 0x14(r31)
	  bl        -0x1DB0F8

	.loc_0x22C:
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
 * Address:	802C53F4
 * Size:	000030
 */
void Houdai::HoudaiShotGunMgr::finishLockOnEffect()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x30(r3)
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
 * Address:	802C5424
 * Size:	000250
 */
void Houdai::HoudaiShotGunMgr::setShotGunLockOnPosition()
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
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  lfs       f0, -0x1DD8(r2)
	  lwz       r3, 0x14(r3)
	  li        r31, 0
	  lfs       f30, 0x10(r3)
	  lfs       f29, 0x20(r3)
	  fmuls     f1, f30, f30
	  lfs       f31, 0x0(r3)
	  fmuls     f5, f29, f29
	  lfs       f2, 0xC(r3)
	  lfs       f3, 0x1C(r3)
	  fmadds    f1, f31, f31, f1
	  lfs       f4, 0x2C(r3)
	  fadds     f1, f5, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x80
	  ble-      .loc_0x84
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x84

	.loc_0x80:
	  fmr       f1, f0

	.loc_0x84:
	  lfs       f0, -0x1DD8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA4
	  lfs       f0, -0x1DD4(r2)
	  fdivs     f0, f0, f1
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0

	.loc_0xA4:
	  stfs      f31, 0x24(r29)
	  li        r30, 0
	  lfs       f0, -0x1DD0(r2)
	  stfs      f30, 0x28(r29)
	  lfs       f1, -0x1D74(r2)
	  fmuls     f31, f31, f0
	  stfs      f29, 0x2C(r29)
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0
	  lfs       f0, 0x24(r29)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x24(r29)
	  lfs       f0, 0x28(r29)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x28(r29)
	  lfs       f0, 0x2C(r29)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2C(r29)
	  lfs       f0, 0x24(r29)
	  fadds     f0, f0, f2
	  stfs      f0, 0x24(r29)
	  lfs       f0, 0x28(r29)
	  fadds     f0, f0, f3
	  stfs      f0, 0x28(r29)
	  lfs       f0, 0x2C(r29)
	  fadds     f0, f0, f4
	  stfs      f0, 0x2C(r29)

	.loc_0x110:
	  lfs       f0, 0x24(r29)
	  addi      r4, r29, 0x24
	  fadds     f0, f0, f31
	  stfs      f0, 0x24(r29)
	  lfs       f0, 0x28(r29)
	  fadds     f0, f0, f30
	  stfs      f0, 0x28(r29)
	  lfs       f0, 0x2C(r29)
	  fadds     f0, f0, f29
	  stfs      f0, 0x2C(r29)
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x28(r29)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x164
	  stfs      f1, 0x28(r29)
	  li        r31, 0x1
	  b         .loc_0x170

	.loc_0x164:
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x3C
	  blt+      .loc_0x110

	.loc_0x170:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x1FC
	  lis       r3, 0x804B
	  addi      r4, r1, 0x8
	  subi      r0, r3, 0x5814
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x24(r29)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x28(r29)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x2C(r29)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x30(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x14(r29)
	  addi      r4, r29, 0x24
	  addi      r5, r1, 0x18
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x18(r1)
	  fneg      f2, f0
	  lfs       f0, 0x10(r3)
	  stfs      f0, 0x1C(r1)
	  fneg      f1, f0
	  lfs       f3, 0x20(r3)
	  fneg      f0, f3
	  stfs      f3, 0x20(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  lwz       r3, 0x30(r29)
	  bl        0x126DB8
	  b         .loc_0x210

	.loc_0x1FC:
	  lwz       r3, 0x30(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x210:
	  addi      r4, r29, 0x24
	  li        r3, 0x3055
	  bl        0x1A8A78
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C5674
 * Size:	00009C
 */
void Houdai::HoudaiShotGunMgr::effectDrawOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x34(r3)
	  lwz       r31, 0x10(r3)
	  b         .loc_0x3C

	.loc_0x24:
	  lwz       r3, 0x1C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x3C:
	  cmplwi    r31, 0
	  bne+      .loc_0x24
	  lwz       r3, 0x38(r30)
	  lwz       r31, 0x10(r3)
	  b         .loc_0x68

	.loc_0x50:
	  lwz       r3, 0x1C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x68:
	  cmplwi    r31, 0
	  bne+      .loc_0x50
	  lwz       r3, 0x30(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
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
 * Address:	802C5710
 * Size:	00009C
 */
void Houdai::HoudaiShotGunMgr::effectDrawOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x34(r3)
	  lwz       r31, 0x10(r3)
	  b         .loc_0x3C

	.loc_0x24:
	  lwz       r3, 0x1C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x3C:
	  cmplwi    r31, 0
	  bne+      .loc_0x24
	  lwz       r3, 0x38(r30)
	  lwz       r31, 0x10(r3)
	  b         .loc_0x68

	.loc_0x50:
	  lwz       r3, 0x1C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x4(r31)

	.loc_0x68:
	  cmplwi    r31, 0
	  bne+      .loc_0x50
	  lwz       r3, 0x30(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
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
 * Address:	802C57AC
 * Size:	000030
 */
void Houdai::HoudaiShotGunMgr::startStoneStateEffectOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x30(r3)
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
 * Address:	802C57DC
 * Size:	000030
 */
void Houdai::HoudaiShotGunMgr::finishStoneStateEffectOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x30(r3)
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

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	802C580C
 * Size:	00009C
 */
THdamaSight::~THdamaSight()
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
	  beq-      .loc_0x80
	  lis       r3, 0x804D
	  addi      r3, r3, 0x14B4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  addi      r3, r3, 0x2C24
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0x235BDC

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x2A17D4

	.loc_0x80:
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
 * Address:	802C58A8
 * Size:	000008
 */
void ArgDir::getName()
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x1D70
	  blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	802C58B0
 * Size:	000060
 */
Houdai::HoudaiShotGunNode::~HoudaiShotGunNode()
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
	  beq-      .loc_0x44
	  lis       r5, 0x804D
	  li        r4, 0
	  addi      r0, r5, 0x1548
	  stw       r0, 0x0(r30)
	  bl        0x14BCA8
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x2A183C

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace efx {

	/*
	 * --INFO--
	 * Address:	802C5910
	 * Size:	000008
	 */
	THdamaSight::@4 @~THdamaSight()
	{
		/*
		.loc_0x0:
		  subi      r3, r3, 0x4
		  b         -0x108
		*/
	}
} // namespace efx

} // namespace efx
