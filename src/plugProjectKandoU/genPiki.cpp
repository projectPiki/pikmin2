#include "types.h"

/*
 * --INFO--
 * Address:	801AC3C0
 * Size:	000128
 */
void makeObjectPiki()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r3, 0xA0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x878
	  stw       r30, 0x8(r1)
	  bl        -0x18853C
	  mr.       r30, r3
	  beq-      .loc_0x10C
	  addi      r0, r30, 0x9C
	  lis       r4, 0x7069
	  stw       r0, 0x0(r30)
	  addi      r5, r4, 0x6B69
	  addi      r6, r31, 0
	  addi      r7, r31, 0xC
	  li        r4, 0
	  bl        -0x1D24
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x563C
	  lis       r5, 0x7030
	  stw       r0, 0xC(r30)
	  addi      r0, r3, 0x56B4
	  mr        r4, r30
	  addi      r3, r30, 0x24
	  stw       r0, 0xC(r30)
	  addi      r5, r5, 0x3030
	  subi      r6, r2, 0x50E8
	  bl        0x267220
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5370
	  li        r7, 0
	  stw       r0, 0x24(r30)
	  li        r0, 0x7
	  mr        r4, r30
	  addi      r3, r30, 0x4C
	  stw       r7, 0x3C(r30)
	  addi      r5, r5, 0x3031
	  subi      r6, r2, 0x50E4
	  stw       r7, 0x44(r30)
	  stw       r0, 0x48(r30)
	  bl        0x2671E8
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  subi      r0, r3, 0x5370
	  li        r7, 0x1
	  stw       r0, 0x4C(r30)
	  li        r0, 0x64
	  mr        r4, r30
	  addi      r3, r30, 0x74
	  stw       r7, 0x64(r30)
	  addi      r5, r5, 0x3032
	  addi      r6, r31, 0x1C
	  stw       r7, 0x6C(r30)
	  stw       r0, 0x70(r30)
	  bl        0x2671B0
	  lis       r4, 0x804B
	  li        r3, 0
	  subi      r4, r4, 0x5370
	  li        r0, 0x1
	  stw       r4, 0x74(r30)
	  stw       r3, 0x8C(r30)
	  stw       r3, 0x94(r30)
	  stw       r0, 0x98(r30)

	.loc_0x10C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801AC4E8
 * Size:	00008C
 */
void GenObjectPiki::initialise(void)
{
	/*
	.loc_0x0:
	  lwz       r8, -0x6C60(r13)
	  lwz       r5, 0x0(r8)
	  lwz       r0, 0x4(r8)
	  cmpw      r5, r0
	  bgelr-
	  lis       r4, 0x7069
	  lwz       r3, 0x8(r8)
	  addi      r4, r4, 0x6B69
	  rlwinm    r0,r5,4,0,27
	  stwx      r4, r3, r0
	  lis       r5, 0x801B
	  lis       r4, 0x8048
	  lis       r3, 0x3030
	  lwz       r0, 0x0(r8)
	  subi      r7, r5, 0x3C40
	  lwz       r6, 0x8(r8)
	  subi      r5, r4, 0x850
	  rlwinm    r0,r0,4,0,27
	  addi      r4, r3, 0x3031
	  add       r3, r6, r0
	  stw       r7, 0x4(r3)
	  lwz       r0, 0x0(r8)
	  lwz       r3, 0x8(r8)
	  rlwinm    r0,r0,4,0,27
	  add       r3, r3, r0
	  stw       r5, 0x8(r3)
	  lwz       r0, 0x0(r8)
	  lwz       r3, 0x8(r8)
	  rlwinm    r0,r0,4,0,27
	  add       r3, r3, r0
	  stw       r4, 0xC(r3)
	  lwz       r3, 0x0(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AC574
 * Size:	00002C
 */
void GenObjectPiki::ramSaveParameters(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x3C(r3)
	  mr        r3, r4
	  rlwinm    r4,r0,0,24,31
	  bl        0x2690E4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AC5A0
 * Size:	000038
 */
void GenObjectPiki::ramLoadParameters(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r3, r4
	  bl        0x267EE4
	  rlwinm    r0,r3,0,24,31
	  stw       r0, 0x3C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AC5D8
 * Size:	000258
 */
void GenObjectPiki::generate(Game::Generator*)
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
	  stfd      f26, 0x90(r1)
	  psq_st    f26,0x98(r1),0,0
	  stfd      f25, 0x80(r1)
	  psq_st    f25,0x88(r1),0,0
	  stfd      f24, 0x70(r1)
	  psq_st    f24,0x78(r1),0,0
	  stfd      f23, 0x60(r1)
	  psq_st    f23,0x68(r1),0,0
	  stfd      f22, 0x50(r1)
	  psq_st    f22,0x58(r1),0,0
	  stmw      r26, 0x38(r1)
	  lfs       f1, 0x98(r4)
	  lis       r7, 0x8050
	  lfs       f0, 0xA4(r4)
	  lis       r6, 0x804B
	  lis       r5, 0x804B
	  lfs       f4, 0x94(r4)
	  lfs       f3, 0xA0(r4)
	  fadds     f0, f1, f0
	  lfs       f26, -0x50E0(r2)
	  mr        r28, r3
	  lfs       f2, 0x9C(r4)
	  fadds     f25, f4, f3
	  lfs       f1, 0xA8(r4)
	  fadds     f23, f26, f0
	  lfd       f27, -0x50C8(r2)
	  fadds     f24, f2, f1
	  lfs       f28, -0x50DC(r2)
	  lfs       f29, -0x50D8(r2)
	  addi      r31, r7, 0x71A0
	  lfs       f30, -0x50D4(r2)
	  subi      r26, r6, 0x5D0C
	  lfs       f31, -0x50D0(r2)
	  subi      r27, r5, 0x242C
	  li        r29, 0
	  lis       r30, 0x4330
	  b         .loc_0x1E4

	.loc_0xC8:
	  bl        -0xE3100
	  xoris     r0, r3, 0x8000
	  stw       r30, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f27
	  fdivs     f0, f0, f28
	  fmuls     f22, f29, f0
	  bl        -0xE3120
	  xoris     r3, r3, 0x8000
	  lwz       r0, 0x3C(r28)
	  stw       r3, 0x24(r1)
	  cmpwi     r0, 0x2
	  stw       r30, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f27
	  fdivs     f0, f0, f28
	  fmuls     f1, f30, f0
	  bne-      .loc_0x124
	  lwz       r0, 0x8C(r28)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x124
	  lfs       f1, -0x50E0(r2)

	.loc_0x124:
	  fmr       f0, f22
	  fcmpo     cr0, f22, f26
	  bge-      .loc_0x134
	  fneg      f0, f22

	.loc_0x134:
	  fmuls     f0, f0, f31
	  fcmpo     cr0, f22, f26
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r31, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f2, f1, f0
	  bge-      .loc_0x188
	  lfs       f0, -0x50CC(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f22, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x1A8

	.loc_0x188:
	  fmuls     f0, f22, f31
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x1A8:
	  fmuls     f1, f1, f0
	  stw       r26, 0x8(r1)
	  fadds     f0, f2, f24
	  mr        r3, r28
	  stw       r27, 0x8(r1)
	  addi      r4, r1, 0x8
	  fadds     f1, f1, f25
	  stfs      f23, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f1, 0xC(r1)
	  lwz       r12, 0xC(r28)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1

	.loc_0x1E4:
	  lwz       r0, 0x64(r28)
	  cmpw      r29, r0
	  blt+      .loc_0xC8
	  li        r3, 0
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
	  psq_l     f26,0x98(r1),0,0
	  lfd       f26, 0x90(r1)
	  psq_l     f25,0x88(r1),0,0
	  lfd       f25, 0x80(r1)
	  psq_l     f24,0x78(r1),0,0
	  lfd       f24, 0x70(r1)
	  psq_l     f23,0x68(r1),0,0
	  lfd       f23, 0x60(r1)
	  psq_l     f22,0x58(r1),0,0
	  lfd       f22, 0x50(r1)
	  lmw       r26, 0x38(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AC830
 * Size:	0001B0
 */
void GenObjectPiki::birth(Game::GenArg*)
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
	  mr        r29, r4
	  lwz       r0, 0x8C(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xE4
	  lwz       r31, 0x3C(r30)
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r31
	  bl        0x3A870
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0x194

	.loc_0x4C:
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r31
	  bl        0x3A824
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  li        r3, 0
	  b         .loc_0x194

	.loc_0x68:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  beq-      .loc_0xDC
	  li        r4, 0
	  bl        -0x718F0
	  mr        r3, r30
	  addi      r4, r29, 0x4
	  li        r5, 0
	  bl        -0x71720
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x62314
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x62170
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1F8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8051
	  mr        r4, r31
	  addi      r3, r3, 0x262C
	  bl        0x24894

	.loc_0xDC:
	  mr        r3, r30
	  b         .loc_0x194

	.loc_0xE4:
	  lwz       r4, -0x6B70(r13)
	  lbz       r0, 0x18(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0xFC
	  li        r3, 0
	  b         .loc_0x194

	.loc_0xFC:
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6D0C(r13)
	  lwz       r30, 0x3C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x190
	  li        r4, 0
	  bl        -0x71998
	  mr        r3, r31
	  addi      r4, r29, 0x4
	  li        r5, 0
	  bl        -0x717C8
	  mr        r3, r31
	  mr        r4, r30
	  bl        -0x623BC
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x62218
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190
	  lis       r3, 0x8048
	  li        r4, 0xB8
	  subi      r3, r3, 0x834
	  subi      r5, r2, 0x50C0
	  crclr     6, 0x6
	  bl        -0x18237C

	.loc_0x190:
	  mr        r3, r31

	.loc_0x194:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801AC9E0
 * Size:	000028
 */
void __sinit_genPiki_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6C40(r13)
	  stfsu     f0, 0x56A8(r3)
	  stfs      f0, -0x6C3C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
