#include "types.h"

/*
 * --INFO--
 * Address:	801E3E50
 * Size:	0000D4
 */
void PikiAI::ActCrop::ActCrop(Game::Piki*)
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
	  mr        r30, r5
	  beq-      .loc_0x38
	  addi      r0, r31, 0x40
	  lis       r3, 0x804B
	  stw       r0, 0xC(r31)
	  subi      r0, r3, 0x5994
	  stw       r0, 0x40(r31)

	.loc_0x38:
	  mr        r3, r31
	  mr        r4, r30
	  bl        -0x4D478
	  lis       r3, 0x804C
	  addi      r0, r31, 0x40
	  subi      r4, r3, 0x5CF0
	  li        r3, 0x2C
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x40
	  lwz       r4, 0xC(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0xC(r31)
	  sub       r0, r0, r4
	  stw       r0, 0x4(r4)
	  bl        -0x1C001C
	  mr.       r0, r3
	  beq-      .loc_0x8C
	  mr        r5, r30
	  li        r4, 0x1
	  bl        -0x4821C
	  mr        r0, r3

	.loc_0x8C:
	  stw       r0, 0x2C(r31)
	  li        r3, 0x1C
	  bl        -0x1C0040
	  mr.       r0, r3
	  beq-      .loc_0xAC
	  mr        r4, r30
	  bl        -0x4CC18
	  mr        r0, r3

	.loc_0xAC:
	  stw       r0, 0x30(r31)
	  subi      r0, r2, 0x4A20
	  mr        r3, r31
	  stw       r0, 0x8(r31)
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
 * Address:	801E3F24
 * Size:	000108
 */
void PikiAI::ActCrop::init(PikiAI::ActionArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr.       r29, r4
	  lis       r4, 0x8048
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  addi      r31, r4, 0xD40
	  beq-      .loc_0x64
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x10
	  bl        -0x1198B4
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  beq-      .loc_0x64
	  li        r30, 0x1

	.loc_0x64:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x80
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x28
	  li        r4, 0x45
	  crclr     6, 0x6
	  bl        -0x1B9960

	.loc_0x80:
	  lis       r3, 0x8051
	  lwz       r4, 0x4(r28)
	  addi      r3, r3, 0x250C
	  bl        -0x12C48
	  lwz       r3, 0x4(r29)
	  li        r0, 0
	  stw       r3, 0x10(r28)
	  stw       r0, 0x14(r28)
	  lwz       r3, 0x4(r28)
	  bl        -0x44A54
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE0
	  lwz       r6, 0x4(r28)
	  lis       r3, 0x746F
	  addi      r4, r3, 0x7073
	  li        r5, 0x2A
	  lwz       r3, 0xF8(r6)
	  addi      r3, r3, 0x30
	  bl        0x22F310
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE0
	  mr        r3, r28
	  bl        0x390
	  b         .loc_0xE8

	.loc_0xE0:
	  mr        r3, r28
	  bl        0x2EC

	.loc_0xE8:
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
 * Address:	801E402C
 * Size:	0002C8
 */
void PikiAI::ActCrop::execClimb()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lfs       f2, -0x4A10(r2)
	  lfs       f0, 0x18(r3)
	  lfs       f1, 0x1C(r3)
	  fmuls     f0, f0, f2
	  lfs       f3, 0x20(r3)
	  lwz       r3, 0x4(r3)
	  fmuls     f1, f1, f2
	  fmuls     f2, f3, f2
	  stfs      f0, 0x200(r3)
	  stfs      f1, 0x204(r3)
	  stfs      f2, 0x208(r3)
	  lwz       r3, 0x4(r31)
	  lwz       r4, -0x6514(r13)
	  lwz       r12, 0x0(r3)
	  lfs       f1, 0x54(r4)
	  lwz       r12, 0x1D0(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, -0x4A0C(r2)
	  lfs       f0, 0x24(r31)
	  lwz       r3, 0x4(r31)
	  fmuls     f1, f1, f0
	  lfs       f0, -0x4A14(r2)
	  lfs       f2, 0x108(r3)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x194
	  lwz       r3, 0x14(r31)
	  lwz       r3, 0x10(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x188
	  lbz       r0, 0x58(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x188
	  stw       r3, 0x14(r31)
	  li        r4, 0x14
	  li        r5, 0x14
	  li        r6, 0
	  lwz       r3, 0x4(r31)
	  li        r7, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r31)
	  bl        -0x44CD8
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x10(r31)
	  lwz       r5, 0x14(r31)
	  bl        -0x45218
	  lwz       r3, 0x14(r31)
	  addi      r4, r1, 0x28
	  bl        -0xABEA0
	  addi      r3, r1, 0x28
	  addi      r4, r31, 0x18
	  bl        0x231980
	  lfs       f1, 0x2C(r1)
	  lfs       f0, 0x38(r1)
	  lfs       f3, 0x28(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x34(r1)
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x3C(r1)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x4A18(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f31, f2, f1
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x14C
	  ble-      .loc_0x150
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x150

	.loc_0x14C:
	  fmr       f31, f0

	.loc_0x150:
	  lfs       f0, -0x4A18(r2)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0x178
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0xD5C
	  li        r4, 0x66
	  addi      r5, r5, 0xD68
	  crclr     6, 0x6
	  bl        -0x1B9B60

	.loc_0x178:
	  lfs       f0, -0x4A14(r2)
	  fdivs     f0, f0, f31
	  stfs      f0, 0x24(r31)
	  b         .loc_0x2A8

	.loc_0x188:
	  mr        r3, r31
	  bl        0x1D4
	  b         .loc_0x2A8

	.loc_0x194:
	  fneg      f0, f1
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x2A8
	  lwz       r3, 0x14(r31)
	  lwz       r3, 0xC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2A0
	  lbz       r0, 0x58(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x2A0
	  stw       r3, 0x14(r31)
	  li        r4, 0x14
	  li        r5, 0x14
	  li        r6, 0
	  lwz       r3, 0x4(r31)
	  li        r7, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r31)
	  bl        -0x44DF0
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x10(r31)
	  lwz       r5, 0x14(r31)
	  bl        -0x45330
	  lwz       r3, 0x14(r31)
	  addi      r4, r1, 0x8
	  bl        -0xABFB8
	  addi      r3, r1, 0x8
	  addi      r4, r31, 0x18
	  bl        0x231868
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x18(r1)
	  lfs       f3, 0x8(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x14(r1)
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x1C(r1)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x4A18(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f31, f2, f1
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x264
	  ble-      .loc_0x268
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x268

	.loc_0x264:
	  fmr       f31, f0

	.loc_0x268:
	  lfs       f0, -0x4A18(r2)
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0x290
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0xD5C
	  li        r4, 0x66
	  addi      r5, r5, 0xD68
	  crclr     6, 0x6
	  bl        -0x1B9C78

	.loc_0x290:
	  lfs       f0, -0x4A14(r2)
	  fdivs     f0, f0, f31
	  stfs      f0, 0x24(r31)
	  b         .loc_0x2A8

	.loc_0x2A0:
	  li        r3, 0x2
	  b         .loc_0x2AC

	.loc_0x2A8:
	  li        r3, 0x1

	.loc_0x2AC:
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E42F4
 * Size:	000098
 */
void PikiAI::ActCrop::initGoto()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  lwz       r4, 0x10(r31)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  lfs       f3, 0x8(r1)
	  addi      r4, r3, 0x530
	  lfs       f2, 0xC(r1)
	  lfs       f1, 0x10(r1)
	  lis       r3, 0x804B
	  lfs       f0, -0x4A08(r2)
	  addi      r0, r3, 0x4FB0
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x14
	  stw       r0, 0x14(r1)
	  stfs      f3, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  sth       r0, 0x28(r31)
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E438C
 * Size:	0000FC
 */
void PikiAI::ActCrop::initAttack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lis       r3, 0x746F
	  lwz       r5, 0x10(r30)
	  addi      r4, r3, 0x7073
	  lwz       r3, 0x114(r5)
	  bl        -0xAE570
	  mr.       r31, r3
	  beq-      .loc_0x80
	  lwz       r3, 0x4(r30)
	  bl        -0x44FA0
	  bl        -0x11AE28
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  mr        r5, r31
	  lfd       f3, -0x49F8(r2)
	  stw       r0, 0x20(r1)
	  lfs       f1, -0x4A04(r2)
	  lfd       f2, 0x20(r1)
	  lfs       f0, -0x4A00(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x38(r30)
	  lwz       r3, 0x4(r30)
	  lwz       r4, 0x10(r30)
	  bl        -0x45514

	.loc_0x80:
	  lwz       r3, 0x4(r30)
	  bl        -0x9AF24
	  lwz       r5, 0x10(r30)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r4, r3, 0x4EA4
	  li        r3, -0x1
	  li        r0, 0
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stfs      f1, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r3, 0x14(r1)
	  stb       r0, 0x18(r1)
	  lwz       r3, 0x2C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x2
	  li        r0, 0x1
	  sth       r3, 0x28(r30)
	  stb       r0, 0x3C(r30)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E4488
 * Size:	0006AC
 */
void PikiAI::ActCrop::exec()
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
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  mr        r31, r3
	  lhz       r0, 0x28(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x470
	  bge-      .loc_0x5C
	  cmpwi     r0, 0
	  bge-      .loc_0x554
	  b         .loc_0x668

	.loc_0x5C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x668
	  lwz       r3, 0x10(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x224(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x160
	  bl        -0x11AF68
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x64(r1)
	  lfd       f3, -0x49F8(r2)
	  stw       r0, 0x60(r1)
	  lfs       f2, -0x4A04(r2)
	  lfd       f0, 0x60(r1)
	  lfs       f1, -0x4A00(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x4A18(r2)
	  fdivs     f2, f3, f2
	  fmuls     f4, f1, f2
	  fmr       f1, f4
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0xC4
	  fneg      f1, f4

	.loc_0xC4:
	  lfs       f2, -0x49EC(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x4A18(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  lfs       f3, -0x49F0(r2)
	  fcmpo     cr0, f4, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f3, f3, f0
	  bge-      .loc_0x124
	  lfs       f0, -0x49E8(r2)
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x13C

	.loc_0x124:
	  fmuls     f0, f4, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x78(r1)
	  lwz       r0, 0x7C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x13C:
	  lfs       f0, -0x49F0(r2)
	  li        r3, 0x2
	  lwz       r4, 0x4(r31)
	  fmuls     f1, f0, f1
	  lfs       f0, -0x49E4(r2)
	  stfs      f1, 0x200(r4)
	  stfs      f0, 0x204(r4)
	  stfs      f3, 0x208(r4)
	  b         .loc_0x66C

	.loc_0x160:
	  lfs       f3, 0x38(r31)
	  lfs       f0, -0x4A18(r2)
	  fmr       f1, f3
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x178
	  fneg      f1, f3

	.loc_0x178:
	  lfs       f2, -0x49EC(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x4A18(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f3, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x78(r1)
	  lwz       r0, 0x7C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f31, 0x4(r3)
	  bge-      .loc_0x1D0
	  lfs       f0, -0x49E8(r2)
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f30, f0
	  b         .loc_0x1E8

	.loc_0x1D0:
	  fmuls     f0, f3, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f30, r4, r0

	.loc_0x1E8:
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x746F
	  addi      r4, r3, 0x7073
	  lwz       r3, 0x114(r5)
	  bl        -0xAE83C
	  lwz       r4, 0x4(r31)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x50(r30)
	  lfs       f2, 0x10(r1)
	  fsubs     f4, f1, f0
	  lfs       f0, 0x54(r30)
	  lfs       f1, 0x8(r1)
	  fsubs     f5, f2, f0
	  lfs       f0, 0x4C(r30)
	  fmuls     f2, f4, f4
	  fsubs     f3, f1, f0
	  lfs       f0, -0x4A18(r2)
	  fmuls     f6, f5, f5
	  fmadds    f1, f3, f3, f2
	  fadds     f1, f6, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x268
	  ble-      .loc_0x26C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x26C

	.loc_0x268:
	  fmr       f1, f0

	.loc_0x26C:
	  lfs       f0, -0x4A18(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x28C
	  lfs       f0, -0x4A14(r2)
	  fdivs     f0, f0, f1
	  fmuls     f3, f3, f0
	  fmuls     f4, f4, f0
	  fmuls     f5, f5, f0

	.loc_0x28C:
	  lfs       f0, -0x4A14(r2)
	  lfs       f2, -0x4A18(r2)
	  fmuls     f0, f0, f4
	  lwz       r3, 0x4(r31)
	  fmuls     f1, f2, f4
	  fmadds    f0, f2, f3, f0
	  fmadds    f1, f30, f3, f1
	  fmadds    f28, f2, f5, f0
	  fmadds    f29, f31, f5, f1
	  fneg      f27, f28
	  bl        -0x45318
	  lbz       r0, 0x3C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x2DC
	  lfs       f0, -0x49E0(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x2F4
	  li        r0, 0
	  stb       r0, 0x3C(r31)
	  b         .loc_0x2F4

	.loc_0x2DC:
	  lfs       f0, -0x49DC(r2)
	  fcmpo     cr0, f28, f0
	  bge-      .loc_0x2F0
	  li        r0, 0x1
	  stb       r0, 0x3C(r31)

	.loc_0x2F0:
	  fneg      f29, f29

	.loc_0x2F4:
	  lfs       f2, -0x4A18(r2)
	  fmuls     f4, f30, f27
	  lfs       f1, -0x4A14(r2)
	  fmuls     f0, f31, f27
	  fmuls     f5, f2, f29
	  lwz       r3, 0x4(r31)
	  fmuls     f3, f2, f27
	  fmuls     f1, f1, f29
	  lfs       f2, -0x49D8(r2)
	  fadds     f4, f4, f5
	  fadds     f0, f0, f5
	  fadds     f1, f3, f1
	  stfs      f4, 0x200(r3)
	  stfs      f1, 0x204(r3)
	  stfs      f0, 0x208(r3)
	  lwz       r3, 0x4(r31)
	  lfs       f0, 0x200(r3)
	  lfs       f1, 0x204(r3)
	  fmuls     f0, f0, f2
	  lfs       f3, 0x208(r3)
	  fmuls     f1, f1, f2
	  fmuls     f2, f3, f2
	  stfs      f0, 0x200(r3)
	  stfs      f1, 0x204(r3)
	  stfs      f2, 0x208(r3)
	  lwz       r3, 0x4(r31)
	  lwz       r4, -0x6514(r13)
	  lwz       r12, 0x0(r3)
	  lfs       f1, 0x54(r4)
	  lwz       r12, 0x1D0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r31)
	  mr        r5, r30
	  lwz       r4, 0x10(r31)
	  bl        -0x45914
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x668
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x746F
	  addi      r4, r3, 0x7073
	  lwz       r3, 0x114(r5)
	  bl        -0xAE9F4
	  mr.       r30, r3
	  beq-      .loc_0x408
	  lwz       r3, 0x4(r31)
	  bl        -0x45424
	  bl        -0x11B2AC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x7C(r1)
	  mr        r5, r30
	  lfd       f3, -0x49F8(r2)
	  stw       r0, 0x78(r1)
	  lfs       f1, -0x4A04(r2)
	  lfd       f2, 0x78(r1)
	  lfs       f0, -0x4A00(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x38(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x10(r31)
	  bl        -0x45998

	.loc_0x408:
	  lwz       r3, 0x4(r31)
	  bl        -0x9B3A8
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  lis       r3, 0x804B
	  stw       r0, 0x48(r1)
	  addi      r4, r3, 0x4EA4
	  li        r3, -0x1
	  li        r0, 0
	  stw       r4, 0x48(r1)
	  addi      r4, r1, 0x48
	  stfs      f1, 0x4C(r1)
	  stw       r5, 0x50(r1)
	  stw       r3, 0x54(r1)
	  stb       r0, 0x58(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x2
	  li        r0, 0x1
	  sth       r3, 0x28(r31)
	  stb       r0, 0x3C(r31)
	  b         .loc_0x668

	.loc_0x470:
	  bl        -0x8CC
	  cmpwi     r3, 0
	  bne-      .loc_0x66C
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x746F
	  addi      r4, r3, 0x7073
	  lwz       r3, 0x114(r5)
	  bl        -0xAEAD0
	  mr.       r30, r3
	  beq-      .loc_0x4E4
	  lwz       r3, 0x4(r31)
	  bl        -0x45500
	  bl        -0x11B388
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x7C(r1)
	  mr        r5, r30
	  lfd       f3, -0x49F8(r2)
	  stw       r0, 0x78(r1)
	  lfs       f1, -0x4A04(r2)
	  lfd       f2, 0x78(r1)
	  lfs       f0, -0x4A00(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0x38(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x10(r31)
	  bl        -0x45A74

	.loc_0x4E4:
	  lwz       r3, 0x4(r31)
	  bl        -0x9B484
	  lwz       r5, 0x10(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  lis       r3, 0x804B
	  stw       r0, 0x34(r1)
	  addi      r4, r3, 0x4EA4
	  li        r3, -0x1
	  li        r0, 0
	  stw       r4, 0x34(r1)
	  addi      r4, r1, 0x34
	  stfs      f1, 0x38(r1)
	  stw       r5, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  stb       r0, 0x44(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x2
	  li        r0, 0x1
	  sth       r3, 0x28(r31)
	  li        r3, 0x1
	  stb       r0, 0x3C(r31)
	  b         .loc_0x66C
	  b         .loc_0x66C

	.loc_0x554:
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  bne-      .loc_0x668
	  li        r0, 0x1
	  li        r4, 0x14
	  sth       r0, 0x28(r31)
	  li        r5, 0x14
	  li        r6, 0
	  li        r7, 0
	  lwz       r3, 0x10(r31)
	  lwz       r3, 0x114(r3)
	  lwz       r3, 0x0(r3)
	  lwz       r0, 0x10(r3)
	  stw       r0, 0x14(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r31)
	  bl        -0x45618
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x10(r31)
	  lwz       r5, 0x14(r31)
	  bl        -0x45B58
	  lwz       r3, 0x14(r31)
	  addi      r4, r1, 0x14
	  bl        -0xAC7E0
	  addi      r3, r1, 0x14
	  addi      r4, r31, 0x18
	  bl        0x231040
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x24(r1)
	  lfs       f3, 0x14(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x20(r1)
	  lfs       f1, 0x1C(r1)
	  lfs       f0, 0x28(r1)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x4A18(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f30, f2, f1
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x630
	  ble-      .loc_0x634
	  fsqrte    f0, f30
	  fmuls     f30, f0, f30
	  b         .loc_0x634

	.loc_0x630:
	  fmr       f30, f0

	.loc_0x634:
	  lfs       f0, -0x4A18(r2)
	  fcmpo     cr0, f30, f0
	  bgt-      .loc_0x65C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0xD5C
	  li        r4, 0x66
	  addi      r5, r5, 0xD68
	  crclr     6, 0x6
	  bl        -0x1BA4A0

	.loc_0x65C:
	  lfs       f0, -0x4A14(r2)
	  fdivs     f0, f0, f30
	  stfs      f0, 0x24(r31)

	.loc_0x668:
	  li        r3, 0x1

	.loc_0x66C:
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
	  lwz       r31, 0x8C(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r30, 0x88(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E4B34
 * Size:	000040
 */
void PikiAI::ActCrop::cleanup()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8051
	  lwz       r4, 0x4(r31)
	  addi      r3, r3, 0x250C
	  bl        -0x13740
	  lwz       r3, 0x4(r31)
	  bl        -0x45738
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E4B74
 * Size:	000004
 */
void PikiAI::ActCrop::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	801E4B78
 * Size:	000004
 */
void PikiAI::ActCrop::onKeyEvent(const SysShape::KeyEvent&) { }

/*
 * --INFO--
 * Address:	801E4B7C
 * Size:	000008
 */
void PikiAI::ActCrop::getNextAIType()
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E4B84
 * Size:	000014
 */
void PikiAI::ActCrop::@64 @4 @onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	.loc_0x0:
	  li        r11, 0x4
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x40
	  b         -0x1C
	*/
}
