#include "types.h"

/*
 * --INFO--
 * Address:	804391F0
 * Size:	00003C
 */
void P2JME::TRenderingProcessorBase::__ct((JMessage::TReference const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x431144
	  lis       r4, 0x804F
	  mr        r3, r31
	  subi      r0, r4, 0x34CC
	  stw       r0, 0x0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043922C
 * Size:	000174
 */
void P2JME::TRenderingProcessorBase::do_tag((unsigned long, void const*,
                                             unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r7,r4,16,24,31
	  rlwinm    r4,r4,0,16,31
	  stw       r0, 0x14(r1)
	  cmplwi    r7, 0xC0
	  li        r0, 0
	  bge-      .loc_0xB0
	  cmpwi     r7, 0x2
	  beq-      .loc_0x78
	  bge-      .loc_0x3C
	  cmpwi     r7, 0
	  beq-      .loc_0x48
	  bge-      .loc_0x60
	  b         .loc_0xA8

	.loc_0x3C:
	  cmpwi     r7, 0x4
	  bge-      .loc_0xA8
	  b         .loc_0x90

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  b         .loc_0x160

	.loc_0x60:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  b         .loc_0x160

	.loc_0x78:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  b         .loc_0x160

	.loc_0x90:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  b         .loc_0x160

	.loc_0xA8:
	  li        r0, 0x1
	  b         .loc_0x160

	.loc_0xB0:
	  cmplwi    r7, 0xFF
	  bne-      .loc_0x160
	  cmpwi     r4, 0x2
	  beq-      .loc_0x124
	  bge-      .loc_0xD4
	  cmpwi     r4, 0
	  beq-      .loc_0xE4
	  bge-      .loc_0x104
	  b         .loc_0x160

	.loc_0xD4:
	  cmpwi     r4, 0x4
	  beq-      .loc_0x160
	  bge-      .loc_0x160
	  b         .loc_0x144

	.loc_0xE4:
	  lwz       r12, 0x0(r3)
	  mr        r4, r5
	  mr        r5, r6
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  b         .loc_0x160

	.loc_0x104:
	  lwz       r12, 0x0(r3)
	  mr        r4, r5
	  mr        r5, r6
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  b         .loc_0x160

	.loc_0x124:
	  lwz       r12, 0x0(r3)
	  mr        r4, r5
	  mr        r5, r6
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  b         .loc_0x160

	.loc_0x144:
	  lwz       r12, 0x0(r3)
	  mr        r4, r5
	  mr        r5, r6
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3

	.loc_0x160:
	  mr        r3, r0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804393A0
 * Size:	000008
 */
u32 P2JME::TRenderingProcessorBase::tagFont((void const*, unsigned long))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	804393A8
 * Size:	000008
 */
u32 P2JME::TRenderingProcessorBase::tagRuby((void const*, unsigned long))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	804393B0
 * Size:	000008
 */
u32 P2JME::TRenderingProcessorBase::tagSize((void const*, unsigned long))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	804393B8
 * Size:	000008
 */
u32 P2JME::TRenderingProcessorBase::tagColor((void const*, unsigned long))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	804393C0
 * Size:	000008
 */
void P2JME::TRenderingProcessorBase::tagPosition((unsigned short, void const*,
                                                  unsigned long))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	804393C8
 * Size:	000008
 */
void P2JME::TRenderingProcessorBase::tagControl((unsigned short, void const*,
                                                 unsigned long))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	804393D0
 * Size:	000008
 */
void P2JME::TRenderingProcessorBase::tagColorEX((unsigned short, void const*,
                                                 unsigned long))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	804393D8
 * Size:	000008
 */
void P2JME::TRenderingProcessorBase::tagImage((unsigned short, void const*,
                                               unsigned long))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	804393E0
 * Size:	000218
 */
void P2JME::TRenderingProcessor::__ct((JMessage::TReference const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r0, r31
	  stw       r30, 0x8(r1)
	  mr        r30, r0
	  bl        -0x431340
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r4, 0x34CC
	  lfs       f0, 0x255C(r2)
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x3550
	  li        r4, 0
	  lfs       f3, 0x2560(r2)
	  stw       r0, 0x0(r31)
	  li        r3, -0x1
	  li        r0, 0xFF
	  lfs       f2, 0x2564(r2)
	  stfs      f0, 0x38(r31)
	  stfs      f0, 0x3C(r31)
	  stw       r4, 0x44(r31)
	  stw       r4, 0x48(r31)
	  stw       r4, 0x4C(r31)
	  stw       r4, 0x50(r31)
	  stfs      f3, 0x54(r31)
	  stfs      f3, 0x58(r31)
	  stw       r4, 0x5C(r31)
	  stw       r3, 0x60(r31)
	  stb       r0, 0x64(r31)
	  stb       r0, 0x65(r31)
	  stb       r0, 0x66(r31)
	  stb       r0, 0x67(r31)
	  stb       r0, 0x68(r31)
	  stb       r0, 0x69(r31)
	  stb       r0, 0x6A(r31)
	  stb       r0, 0x6B(r31)
	  stb       r0, 0x6C(r31)
	  stb       r0, 0x6D(r31)
	  stb       r0, 0x6E(r31)
	  stb       r0, 0x6F(r31)
	  stb       r0, 0x70(r31)
	  stb       r0, 0x71(r31)
	  stb       r0, 0x72(r31)
	  stb       r0, 0x73(r31)
	  stb       r0, 0x74(r31)
	  stb       r0, 0x75(r31)
	  stb       r0, 0x76(r31)
	  stb       r0, 0x77(r31)
	  stfs      f2, 0x78(r31)
	  stfs      f2, 0x7C(r31)
	  stfs      f2, 0x80(r31)
	  stfs      f2, 0x84(r31)
	  stfs      f2, 0x88(r31)
	  stb       r4, 0x8C(r31)
	  stb       r4, 0x8D(r31)
	  stb       r4, 0x8E(r31)
	  stb       r4, 0x8F(r31)
	  stfs      f3, 0x90(r31)
	  stfs      f3, 0x94(r31)
	  stfs      f3, 0x98(r31)
	  stfs      f3, 0x9C(r31)
	  stb       r4, 0xA4(r31)
	  stb       r4, 0xA5(r31)
	  stb       r4, 0xA6(r31)
	  stfs      f3, 0xBC(r31)
	  li        r3, 0x100
	  lfs       f1, 0x2568(r2)
	  lfs       f0, 0x256C(r2)
	  stfs      f1, 0xC0(r31)
	  stfs      f3, 0xC4(r31)
	  stfs      f1, 0xC8(r31)
	  stb       r4, 0xCC(r31)
	  stb       r4, 0xCD(r31)
	  stb       r4, 0xCE(r31)
	  stb       r4, 0xCF(r31)
	  stb       r0, 0xD0(r31)
	  stb       r0, 0xD1(r31)
	  stb       r0, 0xD2(r31)
	  stb       r0, 0xD3(r31)
	  stb       r0, 0xD4(r31)
	  stb       r0, 0xD5(r31)
	  stb       r0, 0xD6(r31)
	  stb       r0, 0xD7(r31)
	  stb       r0, 0xD8(r31)
	  stb       r0, 0xD9(r31)
	  stb       r0, 0xDA(r31)
	  stb       r0, 0xDB(r31)
	  stfs      f2, 0xE0(r31)
	  stfs      f2, 0xE4(r31)
	  stfs      f2, 0xE8(r31)
	  stfs      f2, 0xEC(r31)
	  stb       r4, 0xF2(r31)
	  stfs      f0, 0x10C(r31)
	  stb       r4, 0x8C(r31)
	  stb       r4, 0x8D(r31)
	  stb       r4, 0x8E(r31)
	  stb       r4, 0x8F(r31)
	  lwz       r0, 0x8C(r31)
	  rlwinm    r0,r0,0,28,24
	  stw       r0, 0x8C(r31)
	  lwz       r0, 0x8C(r31)
	  ori       r0, r0, 0x10
	  stw       r0, 0x8C(r31)
	  lwz       r0, 0x8C(r31)
	  rlwinm    r0,r0,0,24,20
	  stw       r0, 0x8C(r31)
	  lwz       r0, 0x8C(r31)
	  ori       r0, r0, 0x100
	  stw       r0, 0x8C(r31)
	  bl        -0x4155F4
	  stw       r3, 0xA8(r31)
	  mr        r3, r31
	  bl        0x2EB4
	  li        r3, 0x40
	  bl        -0x415608
	  stw       r3, 0xAC(r31)
	  mr        r3, r31
	  bl        0x2FB8
	  lis       r4, 0x804F
	  li        r3, 0x14
	  addi      r0, r4, 0x7C48
	  stw       r0, 0x100(r31)
	  bl        -0x415628
	  stw       r3, 0xB0(r31)
	  mr        r3, r31
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
 * Address:	804395F8
 * Size:	000060
 */
void P2JME::TRenderingProcessorBase::__dt(void)
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
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x34CC
	  stw       r0, 0x0(r30)
	  bl        -0x43152C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x415584

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

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void P2JME::TRenderingProcessor::setDrawLocateX(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000338
 */
void P2JME::TRenderingProcessor::setDrawLocateY(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80439658
 * Size:	0000E8
 */
void P2JME::TRenderingProcessor::do_begin((void const*, char const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lfs       f0, 0xE8(r3)
	  stfs      f0, 0xE0(r3)
	  lfs       f0, 0xEC(r3)
	  stfs      f0, 0xE4(r3)
	  stb       r0, 0xF0(r3)
	  stb       r0, 0xF1(r3)
	  stw       r0, 0xB8(r3)
	  stw       r0, 0x40(r3)
	  bl        0x1540
	  lbz       r3, 0x4(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  li        r0, 0
	  extsb     r3, r3
	  lfd       f1, 0x2570(r2)
	  xoris     r4, r3, 0x8000
	  mr        r3, r30
	  stw       r4, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xBC(r30)
	  stfs      f0, 0xC4(r30)
	  lfs       f0, 0xC0(r30)
	  stfs      f0, 0xC8(r30)
	  lwz       r4, 0x8C(r30)
	  rlwinm    r4,r4,0,4,2
	  stw       r4, 0x8C(r30)
	  stb       r0, 0xA6(r30)
	  stb       r0, 0xA4(r30)
	  stb       r0, 0xA5(r30)
	  bl        .loc_0xE8
	  li        r0, 0
	  addi      r4, r1, 0xC
	  stb       r0, 0xDC(r30)
	  addi      r5, r1, 0x8
	  lwz       r0, 0xD0(r30)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0xCC(r30)
	  stw       r0, 0xC(r1)
	  lwz       r3, 0x4C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xE8:
	*/
}

/*
 * --INFO--
 * Address:	80439740
 * Size:	0003B0
 */
void P2JME::TRenderingProcessor::setDrawLocate(void)
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
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r31, r3
	  lwz       r3, 0x8C(r3)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x44
	  lfs       f0, 0x98(r31)
	  stfs      f0, 0x90(r31)
	  b         .loc_0xA4

	.loc_0x44:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x74
	  lbz       r0, 0xA4(r31)
	  lwz       r3, 0xA8(r31)
	  rlwinm    r0,r0,2,0,29
	  lfs       f1, 0x38(r31)
	  lfsx      f0, r3, r0
	  lfs       f2, 0x256C(r2)
	  fsubs     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x90(r31)
	  b         .loc_0xA4

	.loc_0x74:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x9C
	  lbz       r0, 0xA4(r31)
	  lwz       r3, 0xA8(r31)
	  rlwinm    r0,r0,2,0,29
	  lfs       f1, 0x38(r31)
	  lfsx      f0, r3, r0
	  fsubs     f0, f1, f0
	  stfs      f0, 0x90(r31)
	  b         .loc_0xA4

	.loc_0x9C:
	  lfs       f0, 0x98(r31)
	  stfs      f0, 0x90(r31)

	.loc_0xA4:
	  lwz       r3, 0x8C(r31)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x130
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xC(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x8(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x10(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x1C(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x18(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x384

	.loc_0x130:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x260
	  lbz       r29, 0xA6(r31)
	  lwz       r3, 0xB0(r31)
	  rlwinm    r0,r29,1,23,30
	  lfs       f2, 0x2560(r2)
	  add       r3, r3, r0
	  lbz       r5, 0x1(r3)
	  fmr       f1, f2
	  lbz       r3, 0x0(r3)
	  addi      r0, r5, 0x1
	  sub       r0, r0, r3
	  rlwinm    r4,r3,2,0,29
	  mtctr     r0
	  cmpw      r3, r5
	  bgt-      .loc_0x190

	.loc_0x170:
	  lwz       r3, 0xA8(r31)
	  lfsx      f0, r3, r4
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x188
	  lfs       f0, 0xC8(r31)
	  fadds     f2, f2, f0

	.loc_0x188:
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x170

	.loc_0x190:
	  lfs       f0, 0x3C(r31)
	  lwz       r3, 0x4C(r31)
	  fsubs     f0, f0, f2
	  lfs       f1, 0x256C(r2)
	  lwz       r12, 0x0(r3)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x1C(r12)
	  fmuls     f31, f1, f0
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lwz       r3, 0x4C(r31)
	  stw       r0, 0x18(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  fsubs     f2, f0, f1
	  lfs       f1, 0xEC(r31)
	  lfs       f0, 0x9C(r31)
	  lwz       r12, 0x24(r12)
	  fmadds    f30, f1, f2, f0
	  mtctr     r12
	  bctrl
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r3, 0x14(r1)
	  lfd       f2, 0x2570(r2)
	  stw       r0, 0x10(r1)
	  lfs       f0, 0xEC(r31)
	  lfd       f1, 0x10(r1)
	  lfs       f5, 0xC8(r31)
	  fsubs     f2, f1, f2
	  stw       r29, 0xC(r1)
	  lfs       f1, 0x256C(r2)
	  stw       r0, 0x8(r1)
	  fnmsubs   f3, f0, f2, f5
	  lfd       f2, 0x2578(r2)
	  lfd       f0, 0x8(r1)
	  stw       r30, 0x24(r1)
	  fmadds    f4, f1, f3, f30
	  lfs       f3, 0x3C(r31)
	  stw       r0, 0x20(r1)
	  fsubs     f1, f0, f2
	  lfd       f0, 0x20(r1)
	  fmadds    f1, f3, f1, f4
	  fsubs     f0, f0, f2
	  fmadds    f0, f5, f0, f31
	  fadds     f0, f0, f1
	  stfs      f0, 0x94(r31)
	  b         .loc_0x384

	.loc_0x260:
	  rlwinm.   r0,r3,0,21,21
	  beq-      .loc_0x308
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xA6(r31)
	  lis       r5, 0x4330
	  neg       r4, r3
	  lbz       r3, 0xA5(r31)
	  stw       r0, 0x1C(r1)
	  xoris     r6, r4, 0x8000
	  lfd       f1, 0x2578(r2)
	  addi      r4, r3, 0x1
	  stw       r5, 0x18(r1)
	  lwz       r3, 0xAC(r31)
	  lfd       f0, 0x18(r1)
	  lbz       r0, 0xA4(r31)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x2564(r2)
	  lbzx      r0, r3, r0
	  stw       r6, 0x24(r1)
	  sub       r0, r0, r4
	  fadds     f0, f1, f0
	  stw       r5, 0x20(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0x3C(r31)
	  lfd       f5, 0x2570(r2)
	  lfd       f3, 0x20(r1)
	  fmuls     f2, f1, f0
	  stw       r0, 0x14(r1)
	  fsubs     f4, f3, f5
	  lfs       f3, 0xEC(r31)
	  stw       r5, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f3, f4, f2
	  fsubs     f0, f0, f5
	  fnmsubs   f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x384

	.loc_0x308:
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x24(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x18(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x14(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)

	.loc_0x384:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void P2JME::TRenderingProcessor::addDrawLines(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80439AF0
 * Size:	0000DC
 */
void P2JME::TRenderingProcessor::newParagraph(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x5418
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x292C
	  lbz       r3, 0xA4(r30)
	  addi      r0, r3, 0x1
	  stb       r0, 0xA4(r30)
	  lbz       r0, 0xA4(r30)
	  cmplwi    r0, 0x40
	  blt-      .loc_0x50
	  addi      r3, r31, 0
	  addi      r5, r31, 0x18
	  li        r4, 0x1FD
	  crclr     6, 0x6
	  bl        -0x40F4FC

	.loc_0x50:
	  lbz       r3, 0xA5(r30)
	  addi      r0, r3, 0x1
	  stb       r0, 0xA5(r30)
	  lwz       r0, 0x8C(r30)
	  rlwinm.   r0,r0,0,3,3
	  beq-      .loc_0xBC
	  mr        r3, r30
	  bl        0x2AF4
	  mr        r3, r30
	  bl        0x29D4
	  li        r3, 0
	  lwz       r0, 0x2558(r2)
	  stb       r3, 0xA5(r30)
	  lbz       r3, 0xA6(r30)
	  addi      r3, r3, 0x1
	  stb       r3, 0xA6(r30)
	  lbz       r3, 0xA6(r30)
	  cmplw     r3, r0
	  blt-      .loc_0xB0
	  addi      r3, r31, 0x24
	  addi      r5, r31, 0x18
	  li        r4, 0x1EA
	  crclr     6, 0x6
	  bl        -0x40F55C

	.loc_0xB0:
	  lwz       r0, 0x8C(r30)
	  rlwinm    r0,r0,0,4,2
	  stw       r0, 0x8C(r30)

	.loc_0xBC:
	  mr        r3, r30
	  bl        -0x470
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
 * Address:	80439BCC
 * Size:	00031C
 */
void P2JME::TRenderingProcessor::do_character((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r31, r4
	  mr        r30, r3
	  cmpwi     r31, 0xA
	  bne-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2D4

	.loc_0x40:
	  lbz       r4, 0xF0(r30)
	  cmplwi    r4, 0
	  bne-      .loc_0x70
	  lbz       r0, 0xD4(r30)
	  stb       r0, 0x64(r30)
	  lbz       r0, 0xD5(r30)
	  stb       r0, 0x65(r30)
	  lbz       r0, 0xD6(r30)
	  stb       r0, 0x66(r30)
	  lbz       r0, 0xD7(r30)
	  stb       r0, 0x67(r30)
	  b         .loc_0xD4

	.loc_0x70:
	  lwz       r3, 0x4(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0x84
	  li        r3, 0
	  b         .loc_0x88

	.loc_0x84:
	  lwz       r3, 0x4(r3)

	.loc_0x88:
	  lwz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  addi      r3, r3, 0x18
	  b         .loc_0xA0

	.loc_0x9C:
	  li        r3, 0

	.loc_0xA0:
	  lwz       r3, 0x4(r3)
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r0, 0xC(r3)
	  stw       r0, 0xC(r1)
	  lbz       r3, 0xC(r1)
	  lbz       r0, 0xD(r1)
	  stb       r3, 0x64(r30)
	  lbz       r3, 0xE(r1)
	  stb       r0, 0x65(r30)
	  lbz       r0, 0xF(r1)
	  stb       r3, 0x66(r30)
	  stb       r0, 0x67(r30)

	.loc_0xD4:
	  lbz       r3, 0x67(r30)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  lfd       f2, 0x2578(r2)
	  stw       r3, 0x14(r1)
	  lfs       f0, 0x78(r30)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  stb       r0, 0x67(r30)
	  lbz       r4, 0xF1(r30)
	  cmplwi    r4, 0
	  bne-      .loc_0x138
	  lbz       r0, 0xD8(r30)
	  stb       r0, 0x68(r30)
	  lbz       r0, 0xD9(r30)
	  stb       r0, 0x69(r30)
	  lbz       r0, 0xDA(r30)
	  stb       r0, 0x6A(r30)
	  lbz       r0, 0xDB(r30)
	  stb       r0, 0x6B(r30)
	  b         .loc_0x19C

	.loc_0x138:
	  lwz       r3, 0x4(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0x14C
	  li        r3, 0
	  b         .loc_0x150

	.loc_0x14C:
	  lwz       r3, 0x4(r3)

	.loc_0x150:
	  lwz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x164
	  addi      r3, r3, 0x18
	  b         .loc_0x168

	.loc_0x164:
	  li        r3, 0

	.loc_0x168:
	  lwz       r3, 0x4(r3)
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r0, 0xC(r3)
	  stw       r0, 0x8(r1)
	  lbz       r3, 0x8(r1)
	  lbz       r0, 0x9(r1)
	  stb       r3, 0x68(r30)
	  lbz       r3, 0xA(r1)
	  stb       r0, 0x69(r30)
	  lbz       r0, 0xB(r1)
	  stb       r3, 0x6A(r30)
	  stb       r0, 0x6B(r30)

	.loc_0x19C:
	  lbz       r3, 0x6B(r30)
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  lfd       f2, 0x2578(r2)
	  stw       r3, 0x1C(r1)
	  lfs       f0, 0x78(r30)
	  lfd       f1, 0x18(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stb       r0, 0x6B(r30)
	  lwz       r3, 0x4C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x8C(r30)
	  stw       r3, 0x20(r1)
	  lfd       f2, 0x2570(r2)
	  rlwinm.   r0,r0,0,31,31
	  lfd       f1, 0x20(r1)
	  lfs       f0, 0xE0(r30)
	  fsubs     f1, f1, f2
	  fmuls     f31, f0, f1
	  beq-      .loc_0x23C
	  fmr       f1, f31
	  lwz       r4, 0x4C(r30)
	  mr        r3, r30
	  mr        r5, r31
	  li        r6, 0x1
	  bl        0x2520
	  lfs       f0, 0x90(r30)
	  fadds     f0, f0, f1
	  stfs      f0, 0x90(r30)
	  b         .loc_0x2B8

	.loc_0x23C:
	  lwz       r3, 0x4C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  fmr       f3, f31
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  stw       r0, 0x20(r1)
	  mr        r4, r31
	  lfd       f2, 0x2570(r2)
	  lfd       f1, 0x20(r1)
	  li        r5, 0x1
	  lfs       f0, 0xE4(r30)
	  fsubs     f4, f1, f2
	  lfs       f5, 0x90(r30)
	  lfs       f1, 0x54(r30)
	  lfs       f2, 0x94(r30)
	  fmuls     f4, f0, f4
	  lfs       f0, 0x58(r30)
	  lwz       r12, 0x7C(r12)
	  fadds     f1, f5, f1
	  fadds     f2, f2, f0
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x90(r30)
	  fadds     f0, f0, f1
	  stfs      f0, 0x90(r30)

	.loc_0x2B8:
	  lfs       f1, 0x90(r30)
	  lfs       f0, 0xC4(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x90(r30)
	  lwz       r3, 0x40(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x40(r30)

	.loc_0x2D4:
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x60(r3)
	  lbz       r0, 0x3C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2F0
	  mr        r3, r30
	  bl        0xD3C

	.loc_0x2F0:
	  lwz       r3, 0xB8(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0xB8(r30)
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void P2JME::TRenderingProcessor::mf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80439EE8
 * Size:	0000B8
 */
void P2JME::TRenderingProcessor::do_select_begin((unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r0, 0xA0(r3)
	  lwz       r3, 0x4C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mulli     r3, r3, 0x3
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f2, 0x2570(r2)
	  xoris     r0, r3, 0x8000
	  lfs       f0, 0x98(r31)
	  stw       r0, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fadds     f0, f0, f1
	  stfs      f0, 0x90(r31)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xA0(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  addi      r0, r4, 0x3
	  lfd       f2, 0x2570(r2)
	  mullw     r0, r0, r3
	  lfs       f0, 0x9C(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f2
	  fadds     f0, f0, f1
	  stfs      f0, 0x94(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80439FA0
 * Size:	00006C
 */
void P2JME::TRenderingProcessor::do_select_end(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lfs       f0, 0x98(r3)
	  stfs      f0, 0x90(r3)
	  lwz       r3, 0x4C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, 0x2570(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x9C(r31)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fadds     f0, f0, f1
	  stfs      f0, 0x94(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043A00C
 * Size:	0000BC
 */
void P2JME::TRenderingProcessor::do_select_separate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0xA0(r3)
	  addi      r0, r3, 0x1
	  stw       r0, 0xA0(r31)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mulli     r3, r3, 0x3
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f2, 0x2570(r2)
	  xoris     r0, r3, 0x8000
	  lfs       f0, 0x98(r31)
	  stw       r0, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fadds     f0, f0, f1
	  stfs      f0, 0x90(r31)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xA0(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  addi      r0, r4, 0x3
	  lfd       f2, 0x2570(r2)
	  mullw     r0, r0, r3
	  lfs       f0, 0x9C(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f2
	  fadds     f0, f0, f1
	  stfs      f0, 0x94(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043A0C8
 * Size:	000174
 */
void P2JME::TRenderingProcessor::do_tag((unsigned long, void const*,
                                         unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r7, 0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,16,24,31
	  cmplwi    r0, 0xC0
	  rlwinm    r4,r4,0,16,31
	  bge-      .loc_0xB0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x78
	  bge-      .loc_0x3C
	  cmpwi     r0, 0
	  beq-      .loc_0x48
	  bge-      .loc_0x60
	  b         .loc_0xA8

	.loc_0x3C:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xA8
	  b         .loc_0x90

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  b         .loc_0x160

	.loc_0x60:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  b         .loc_0x160

	.loc_0x78:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  b         .loc_0x160

	.loc_0x90:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  b         .loc_0x160

	.loc_0xA8:
	  li        r7, 0x1
	  b         .loc_0x160

	.loc_0xB0:
	  cmplwi    r0, 0xFF
	  bne-      .loc_0x160
	  cmpwi     r4, 0x2
	  beq-      .loc_0x124
	  bge-      .loc_0xD4
	  cmpwi     r4, 0
	  beq-      .loc_0xE4
	  bge-      .loc_0x104
	  b         .loc_0x160

	.loc_0xD4:
	  cmpwi     r4, 0x4
	  beq-      .loc_0x160
	  bge-      .loc_0x160
	  b         .loc_0x144

	.loc_0xE4:
	  lwz       r12, 0x0(r3)
	  mr        r4, r5
	  mr        r5, r6
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  b         .loc_0x160

	.loc_0x104:
	  lwz       r12, 0x0(r3)
	  mr        r4, r5
	  mr        r5, r6
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  b         .loc_0x160

	.loc_0x124:
	  lwz       r12, 0x0(r3)
	  mr        r4, r5
	  mr        r5, r6
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  b         .loc_0x160

	.loc_0x144:
	  lwz       r12, 0x0(r3)
	  mr        r4, r5
	  mr        r5, r6
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3

	.loc_0x160:
	  lwz       r0, 0x14(r1)
	  mr        r3, r7
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043A23C
 * Size:	000008
 */
void P2JME::TRenderingProcessor::do_systemTagCode((unsigned short, void const*,
                                                   unsigned long))
{
	return 0x0;
}

/*
 * --INFO--
 * Address:	8043A244
 * Size:	00002C
 */
void P2JME::TRenderingProcessor::tagColor((void const*, unsigned long))
{
	/*
	.loc_0x0:
	  lbz       r4, 0x0(r4)
	  cmplwi    r4, 0
	  bne-      .loc_0x18
	  stb       r4, 0xF0(r3)
	  stb       r4, 0xF1(r3)
	  b         .loc_0x24

	.loc_0x18:
	  stb       r4, 0xF0(r3)
	  addi      r0, r4, 0x1
	  stb       r0, 0xF1(r3)

	.loc_0x24:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043A270
 * Size:	00003C
 */
void P2JME::TRenderingProcessor::tagSize((void const*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r0, 0x4330
	  lhz       r4, 0x0(r4)
	  stw       r0, 0x8(r1)
	  lfd       f2, 0x2578(r2)
	  stw       r4, 0xC(r1)
	  lfs       f0, 0x255C(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0xE0(r3)
	  stfs      f0, 0xE4(r3)
	  li        r3, 0x1
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043A2AC
 * Size:	000164
 */
void P2JME::TRenderingProcessor::tagRuby((void const*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  mr        r30, r5
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x60(r6)
	  lbz       r0, 0x3C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x144
	  lwz       r0, 0x8C(r31)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x144
	  cmplwi    r30, 0x21
	  blt-      .loc_0x68
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5418
	  li        r4, 0x347
	  subi      r5, r5, 0x5400
	  crclr     6, 0x6
	  bl        -0x40FCD0

	.loc_0x68:
	  lwz       r3, 0x100(r31)
	  addi      r4, r29, 0x1
	  subi      r5, r30, 0x1
	  bl        -0x36FB0C
	  lwz       r0, 0x100(r31)
	  li        r6, 0
	  li        r4, 0x1
	  lbz       r3, 0x0(r29)
	  add       r5, r0, r30
	  subi      r0, r30, 0x1
	  stb       r6, -0x1(r5)
	  stb       r4, 0xF2(r31)
	  lwz       r4, 0xB8(r31)
	  subi      r4, r4, 0x1
	  stw       r4, 0xF4(r31)
	  stb       r3, 0xF8(r31)
	  stw       r0, 0xFC(r31)
	  lfs       f0, 0x90(r31)
	  stfs      f0, 0x104(r31)
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, 0x2570(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, 0xE4(r31)
	  lfd       f2, 0x8(r1)
	  lfs       f0, 0x2560(r2)
	  fsubs     f3, f2, f3
	  lfs       f2, 0x94(r31)
	  fmuls     f1, f1, f3
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x10C
	  lfs       f0, 0x256C(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x114

	.loc_0x10C:
	  lfs       f0, 0x256C(r2)
	  fsubs     f0, f1, f0

	.loc_0x114:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  lfd       f1, 0x2570(r2)
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  fsubs     f0, f2, f0
	  stfs      f0, 0x108(r31)

	.loc_0x144:
	  lwz       r0, 0x34(r1)
	  li        r3, 0x1
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043A410
 * Size:	000008
 */
u32 P2JME::TRenderingProcessor::tagFont((void const*, unsigned long))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	8043A418
 * Size:	000024
 */
void P2JME::TRenderingProcessor::tagColorEX((unsigned short, void const*,
                                             unsigned long))
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r4,0,16,31
	  beq-      .loc_0xC
	  b         .loc_0x1C

	.loc_0xC:
	  lbz       r4, 0x0(r5)
	  lbz       r0, 0x1(r5)
	  stb       r4, 0xF0(r3)
	  stb       r0, 0xF1(r3)

	.loc_0x1C:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043A43C
 * Size:	00006C
 */
void P2JME::TRenderingProcessor::tagControl((unsigned short, void const*,
                                             unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,0,16,31
	  cmpwi     r0, 0x1
	  li        r4, 0x1
	  beq-      .loc_0x58
	  bge-      .loc_0x2C
	  cmpwi     r0, 0
	  bge-      .loc_0x38
	  b         .loc_0x58

	.loc_0x2C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x58
	  b         .loc_0x50

	.loc_0x38:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  b         .loc_0x58

	.loc_0x50:
	  lbz       r0, 0x0(r5)
	  stb       r0, 0xDC(r3)

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  mr        r3, r4
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043A4A8
 * Size:	000014
 */
void P2JME::TRenderingProcessor::doTagControlAbtnWait(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x8C(r3)
	  oris      r0, r0, 0x1000
	  stw       r0, 0x8C(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043A4BC
 * Size:	00071C
 */
void P2JME::TRenderingProcessor::tagPosition((unsigned short, void const*,
                                              unsigned long))
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
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  rlwinm    r0,r4,0,16,31
	  mr        r31, r3
	  cmplwi    r0, 0x7
	  bgt-      .loc_0x6EC
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x3570
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f0, 0xBC(r31)
	  stfs      f0, 0xC4(r31)
	  b         .loc_0x6EC
	  lbz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  extsb     r0, r3
	  lfd       f1, 0x2570(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xC4(r31)
	  b         .loc_0x6EC
	  lfs       f0, 0xC0(r31)
	  stfs      f0, 0xC8(r31)
	  lwz       r3, 0x8C(r31)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x11C
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xC(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x8(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x10(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x1C(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x18(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x11C:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x24C
	  lbz       r29, 0xA6(r31)
	  lwz       r3, 0xB0(r31)
	  rlwinm    r0,r29,1,23,30
	  lfs       f2, 0x2560(r2)
	  add       r3, r3, r0
	  lbz       r5, 0x1(r3)
	  fmr       f1, f2
	  lbz       r3, 0x0(r3)
	  addi      r0, r5, 0x1
	  sub       r0, r0, r3
	  rlwinm    r4,r3,2,0,29
	  mtctr     r0
	  cmpw      r3, r5
	  bgt-      .loc_0x17C

	.loc_0x15C:
	  lwz       r3, 0xA8(r31)
	  lfsx      f0, r3, r4
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x174
	  lfs       f0, 0xC8(r31)
	  fadds     f2, f2, f0

	.loc_0x174:
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x15C

	.loc_0x17C:
	  lfs       f0, 0x3C(r31)
	  lwz       r3, 0x4C(r31)
	  fsubs     f0, f0, f2
	  lfs       f1, 0x256C(r2)
	  lwz       r12, 0x0(r3)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x1C(r12)
	  fmuls     f31, f1, f0
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lwz       r3, 0x4C(r31)
	  stw       r0, 0x18(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  fsubs     f2, f0, f1
	  lfs       f1, 0xEC(r31)
	  lfs       f0, 0x9C(r31)
	  lwz       r12, 0x24(r12)
	  fmadds    f30, f1, f2, f0
	  mtctr     r12
	  bctrl
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r3, 0x14(r1)
	  lfd       f2, 0x2570(r2)
	  stw       r0, 0x10(r1)
	  lfs       f0, 0xEC(r31)
	  lfd       f1, 0x10(r1)
	  lfs       f5, 0xC8(r31)
	  fsubs     f2, f1, f2
	  stw       r29, 0xC(r1)
	  lfs       f1, 0x256C(r2)
	  stw       r0, 0x8(r1)
	  fnmsubs   f3, f0, f2, f5
	  lfd       f2, 0x2578(r2)
	  lfd       f0, 0x8(r1)
	  stw       r30, 0x24(r1)
	  fmadds    f4, f1, f3, f30
	  lfs       f3, 0x3C(r31)
	  stw       r0, 0x20(r1)
	  fsubs     f1, f0, f2
	  lfd       f0, 0x20(r1)
	  fmadds    f1, f3, f1, f4
	  fsubs     f0, f0, f2
	  fmadds    f0, f5, f0, f31
	  fadds     f0, f0, f1
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x24C:
	  rlwinm.   r0,r3,0,21,21
	  beq-      .loc_0x2F4
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xA6(r31)
	  lis       r5, 0x4330
	  neg       r4, r3
	  lbz       r3, 0xA5(r31)
	  stw       r0, 0x1C(r1)
	  xoris     r6, r4, 0x8000
	  lfd       f1, 0x2578(r2)
	  addi      r4, r3, 0x1
	  stw       r5, 0x18(r1)
	  lwz       r3, 0xAC(r31)
	  lfd       f0, 0x18(r1)
	  lbz       r0, 0xA4(r31)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x2564(r2)
	  lbzx      r0, r3, r0
	  stw       r6, 0x24(r1)
	  sub       r0, r0, r4
	  fadds     f0, f1, f0
	  stw       r5, 0x20(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0x3C(r31)
	  lfd       f5, 0x2570(r2)
	  lfd       f3, 0x20(r1)
	  fmuls     f2, f1, f0
	  stw       r0, 0x14(r1)
	  fsubs     f4, f3, f5
	  lfs       f3, 0xEC(r31)
	  stw       r5, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f3, f4, f2
	  fsubs     f0, f0, f5
	  fnmsubs   f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x2F4:
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x24(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x18(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x14(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC
	  lbz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  extsb     r0, r3
	  lfd       f1, 0x2570(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x24(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xC8(r31)
	  lwz       r3, 0x8C(r31)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x428
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x24(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x18(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x14(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x428:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x558
	  lbz       r29, 0xA6(r31)
	  lwz       r3, 0xB0(r31)
	  rlwinm    r0,r29,1,23,30
	  lfs       f2, 0x2560(r2)
	  add       r3, r3, r0
	  lbz       r5, 0x1(r3)
	  fmr       f1, f2
	  lbz       r3, 0x0(r3)
	  addi      r0, r5, 0x1
	  sub       r0, r0, r3
	  rlwinm    r4,r3,2,0,29
	  mtctr     r0
	  cmpw      r3, r5
	  bgt-      .loc_0x488

	.loc_0x468:
	  lwz       r3, 0xA8(r31)
	  lfsx      f0, r3, r4
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x480
	  lfs       f0, 0xC8(r31)
	  fadds     f2, f2, f0

	.loc_0x480:
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x468

	.loc_0x488:
	  lfs       f0, 0x3C(r31)
	  lwz       r3, 0x4C(r31)
	  fsubs     f0, f0, f2
	  lfs       f1, 0x256C(r2)
	  lwz       r12, 0x0(r3)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x1C(r12)
	  fmuls     f31, f1, f0
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lwz       r3, 0x4C(r31)
	  stw       r0, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  fsubs     f2, f0, f1
	  lfs       f1, 0xEC(r31)
	  lfs       f0, 0x9C(r31)
	  lwz       r12, 0x24(r12)
	  fmadds    f30, f1, f2, f0
	  mtctr     r12
	  bctrl
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r3, 0x1C(r1)
	  lfd       f2, 0x2570(r2)
	  stw       r0, 0x18(r1)
	  lfs       f0, 0xEC(r31)
	  lfd       f1, 0x18(r1)
	  lfs       f5, 0xC8(r31)
	  fsubs     f2, f1, f2
	  stw       r29, 0x14(r1)
	  lfs       f1, 0x256C(r2)
	  stw       r0, 0x10(r1)
	  fnmsubs   f3, f0, f2, f5
	  lfd       f2, 0x2578(r2)
	  lfd       f0, 0x10(r1)
	  stw       r30, 0xC(r1)
	  fmadds    f4, f1, f3, f30
	  lfs       f3, 0x3C(r31)
	  stw       r0, 0x8(r1)
	  fsubs     f1, f0, f2
	  lfd       f0, 0x8(r1)
	  fmadds    f1, f3, f1, f4
	  fsubs     f0, f0, f2
	  fmadds    f0, f5, f0, f31
	  fadds     f0, f0, f1
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x558:
	  rlwinm.   r0,r3,0,21,21
	  beq-      .loc_0x600
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xA6(r31)
	  lis       r5, 0x4330
	  neg       r4, r3
	  lbz       r3, 0xA5(r31)
	  stw       r0, 0x1C(r1)
	  xoris     r6, r4, 0x8000
	  lfd       f1, 0x2578(r2)
	  addi      r4, r3, 0x1
	  stw       r5, 0x18(r1)
	  lwz       r3, 0xAC(r31)
	  lfd       f0, 0x18(r1)
	  lbz       r0, 0xA4(r31)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x2564(r2)
	  lbzx      r0, r3, r0
	  stw       r6, 0x24(r1)
	  sub       r0, r0, r4
	  fadds     f0, f1, f0
	  stw       r5, 0x20(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0x3C(r31)
	  lfd       f5, 0x2570(r2)
	  lfd       f3, 0x20(r1)
	  fmuls     f2, f1, f0
	  stw       r0, 0x14(r1)
	  fsubs     f4, f3, f5
	  lfs       f3, 0xEC(r31)
	  stw       r5, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f3, f4, f2
	  fsubs     f0, f0, f5
	  fnmsubs   f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x600:
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x24(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x18(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x14(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC
	  lfs       f0, 0xEC(r31)
	  stfs      f0, 0xE4(r31)
	  b         .loc_0x6EC
	  lhz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  lfd       f2, 0x2578(r2)
	  stw       r3, 0x24(r1)
	  lfs       f0, 0x255C(r2)
	  lfd       f1, 0x20(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0xE4(r31)
	  b         .loc_0x6EC
	  lfs       f0, 0xE8(r31)
	  stfs      f0, 0xE0(r31)
	  b         .loc_0x6EC
	  lhz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  lfd       f2, 0x2578(r2)
	  stw       r3, 0x24(r1)
	  lfs       f0, 0x255C(r2)
	  lfd       f1, 0x20(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0xE0(r31)

	.loc_0x6EC:
	  li        r3, 0x1
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043ABD8
 * Size:	00001C
 */
void P2JME::TRenderingProcessor::initRuby(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0xF2(r3)
	  stw       r0, 0xF4(r3)
	  stb       r0, 0xF8(r3)
	  lwz       r3, 0x100(r3)
	  stb       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043ABF4
 * Size:	000360
 */
void P2JME::TRenderingProcessor::drawRuby(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stmw      r26, 0xA8(r1)
	  mr        r27, r3
	  lbz       r0, 0xF2(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x324
	  lwz       r0, 0x8C(r27)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x60
	  li        r0, 0
	  stb       r0, 0xF2(r27)
	  b         .loc_0x324

	.loc_0x60:
	  lwz       r3, 0x4C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x94(r1)
	  lfd       f3, 0x2570(r2)
	  stw       r0, 0x90(r1)
	  lfs       f1, 0xE4(r27)
	  lfd       f2, 0x90(r1)
	  lfs       f0, 0x2560(r2)
	  fsubs     f2, f2, f3
	  lfs       f3, 0x94(r27)
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xB8
	  lfs       f0, 0x256C(r2)
	  fadds     f0, f0, f1
	  b         .loc_0xC0

	.loc_0xB8:
	  lfs       f0, 0x256C(r2)
	  fsubs     f0, f1, f0

	.loc_0xC0:
	  fctiwz    f0, f0
	  lis       r0, 0x4330
	  stw       r0, 0xA0(r1)
	  lfd       f2, 0x2570(r2)
	  stfd      f0, 0x98(r1)
	  lfs       f0, 0x108(r27)
	  lwz       r0, 0x9C(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xA4(r1)
	  lfd       f1, 0xA0(r1)
	  fsubs     f1, f1, f2
	  fsubs     f1, f3, f1
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xFC
	  stfs      f1, 0x108(r27)

	.loc_0xFC:
	  lwz       r3, 0xF4(r27)
	  lbz       r0, 0xF8(r27)
	  lwz       r4, 0xB8(r27)
	  add       r0, r3, r0
	  cmpw      r4, r0
	  bne-      .loc_0x324
	  lwz       r3, 0x50(r27)
	  lfs       f31, 0x10C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xA4(r1)
	  addi      r30, r1, 0x8
	  lfd       f3, 0x2570(r2)
	  mr        r31, r30
	  stw       r0, 0xA0(r1)
	  li        r28, 0
	  lfs       f2, 0x90(r27)
	  li        r29, 0
	  lfd       f0, 0xA0(r1)
	  lfs       f1, 0xC4(r27)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x104(r27)
	  fsubs     f1, f2, f1
	  lfs       f28, 0x2560(r2)
	  fmuls     f30, f31, f3
	  fsubs     f27, f1, f0
	  b         .loc_0x210

	.loc_0x178:
	  lwz       r3, 0x50(r27)
	  lwz       r4, 0x100(r27)
	  lwz       r12, 0x0(r3)
	  lbzx      r4, r4, r29
	  lwz       r12, 0x40(r12)
	  mr        r26, r4
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C0
	  lwz       r3, 0x100(r27)
	  addi      r0, r29, 0x1
	  rlwinm    r4,r26,8,16,23
	  addi      r29, r29, 0x1
	  lbzx      r0, r3, r0
	  mr        r26, r4
	  rlwimi    r26,r0,0,24,31
	  b         .loc_0x1E4

	.loc_0x1C0:
	  cmpwi     r26, 0xFF
	  bgt-      .loc_0x1E4
	  lis       r3, 0x804A
	  rlwinm    r0,r26,0,24,31
	  addi      r3, r3, 0x6BF0
	  lbzx      r0, r3, r0
	  andi.     r0, r0, 0xDC
	  bne-      .loc_0x1E4
	  li        r26, 0x3F

	.loc_0x1E4:
	  fmr       f1, f30
	  lwz       r4, 0x50(r27)
	  mr        r3, r27
	  mr        r5, r26
	  li        r6, 0x1
	  bl        0x1528
	  fadds     f28, f28, f1
	  stw       r26, 0x0(r31)
	  addi      r31, r31, 0x4
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x1

	.loc_0x210:
	  lwz       r0, 0xFC(r27)
	  cmplw     r29, r0
	  blt+      .loc_0x178
	  addi      r3, r28, 0x1
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  lfs       f0, 0xC4(r27)
	  stw       r3, 0xA4(r1)
	  fsubs     f1, f27, f28
	  lfd       f2, 0x2570(r2)
	  fmuls     f3, f0, f31
	  stw       r0, 0xA0(r1)
	  lfd       f0, 0xA0(r1)
	  fsubs     f0, f0, f2
	  fdivs     f29, f1, f0
	  fcmpo     cr0, f29, f3
	  bge-      .loc_0x258
	  fmr       f29, f3

	.loc_0x258:
	  fmadds    f1, f29, f0, f28
	  lfs       f2, 0x256C(r2)
	  lfs       f0, 0x104(r27)
	  li        r31, 0
	  lfd       f28, 0x2570(r2)
	  lis       r29, 0x4330
	  fsubs     f1, f27, f1
	  fmadds    f0, f2, f1, f0
	  fadds     f0, f29, f0
	  stfs      f0, 0x104(r27)
	  b         .loc_0x314

	.loc_0x284:
	  lwz       r3, 0x50(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r0, r3, 0x8000
	  lwz       r12, 0x0(r27)
	  stw       r0, 0xA4(r1)
	  fmr       f3, f30
	  lfs       f4, 0x104(r27)
	  mr        r3, r27
	  stw       r29, 0xA0(r1)
	  li        r5, 0x1
	  lfs       f1, 0x54(r27)
	  lfd       f0, 0xA0(r1)
	  lfs       f2, 0x108(r27)
	  fadds     f1, f4, f1
	  fsubs     f5, f0, f28
	  lfs       f0, 0x58(r27)
	  lwz       r12, 0x78(r12)
	  fadds     f2, f2, f0
	  lwz       r4, 0x0(r30)
	  fmuls     f4, f31, f5
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x104(r27)
	  addi      r30, r30, 0x4
	  addi      r31, r31, 0x1
	  fadds     f0, f0, f1
	  stfs      f0, 0x104(r27)
	  lfs       f0, 0x104(r27)
	  fadds     f0, f0, f29
	  stfs      f0, 0x104(r27)
	  lwz       r3, 0x40(r27)
	  addi      r0, r3, 0x1
	  stw       r0, 0x40(r27)

	.loc_0x314:
	  cmpw      r31, r28
	  blt+      .loc_0x284
	  li        r0, 0
	  stb       r0, 0xF2(r27)

	.loc_0x324:
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  lmw       r26, 0xA8(r1)
	  lwz       r0, 0x114(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043AF54
 * Size:	000438
 */
void P2JME::TRenderingProcessor::tagImage((unsigned short, void const*,
                                           unsigned long))
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
	  cmplwi    r6, 0x1
	  mr        r30, r3
	  mr        r28, r4
	  mr        r29, r5
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5418
	  li        r4, 0x45A
	  subi      r5, r5, 0x5400
	  crclr     6, 0x6
	  bl        -0x41096C

	.loc_0x5C:
	  rlwinm.   r0,r28,0,16,31
	  lbz       r29, 0x0(r29)
	  beq-      .loc_0x6C
	  b         .loc_0x88

	.loc_0x6C:
	  lfs       f2, 0x2580(r2)
	  li        r31, 0
	  lfs       f1, 0xE0(r30)
	  lfs       f0, 0xE4(r30)
	  fmuls     f31, f2, f1
	  fmuls     f30, f2, f0
	  b         .loc_0xA4

	.loc_0x88:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5418
	  li        r4, 0x46E
	  subi      r5, r5, 0x5400
	  crclr     6, 0x6
	  bl        -0x4109B4

	.loc_0xA4:
	  lwz       r3, -0x6428(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C0
	  mr        r5, r29
	  li        r4, 0
	  bl        -0x289C
	  mr.       r4, r3
	  beq-      .loc_0x3C0
	  lwz       r0, 0x8C(r30)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x3C0
	  lwz       r3, 0x60(r30)
	  cmpwi     r31, 0
	  lwz       r0, 0x5C(r30)
	  stw       r3, 0x1C(r1)
	  stw       r0, 0x18(r1)
	  beq-      .loc_0xEC
	  b         .loc_0x1B8

	.loc_0xEC:
	  lis       r3, 0x804F
	  cmplwi    r29, 0x8
	  rlwinm    r5,r29,3,21,28
	  subi      r0, r3, 0x35C8
	  add       r9, r0, r5
	  addi      r10, r9, 0x4
	  bge-      .loc_0x174
	  lbz       r8, 0x3(r9)
	  li        r3, 0xFF
	  lbz       r7, 0x2(r9)
	  li        r0, 0xCD
	  lbz       r6, 0x1(r9)
	  lbz       r5, 0x0(r9)
	  stb       r5, 0x60(r30)
	  stb       r6, 0x61(r30)
	  stb       r7, 0x62(r30)
	  stb       r8, 0x63(r30)
	  lbz       r8, 0x3(r10)
	  lbz       r7, 0x2(r10)
	  lbz       r6, 0x1(r10)
	  lbz       r5, 0x0(r10)
	  stb       r5, 0x5C(r30)
	  stb       r6, 0x5D(r30)
	  stb       r7, 0x5E(r30)
	  stb       r8, 0x5F(r30)
	  stb       r3, 0x70(r30)
	  stb       r3, 0x71(r30)
	  stb       r3, 0x72(r30)
	  stb       r3, 0x73(r30)
	  stb       r0, 0x74(r30)
	  stb       r0, 0x75(r30)
	  stb       r0, 0x76(r30)
	  stb       r3, 0x77(r30)
	  b         .loc_0x2E0

	.loc_0x174:
	  lbz       r6, 0x3(r9)
	  lbz       r5, 0x2(r9)
	  lbz       r3, 0x1(r9)
	  lbz       r0, 0x0(r9)
	  stb       r0, 0x70(r30)
	  stb       r3, 0x71(r30)
	  stb       r5, 0x72(r30)
	  stb       r6, 0x73(r30)
	  lbz       r6, 0x3(r10)
	  lbz       r5, 0x2(r10)
	  lbz       r3, 0x1(r10)
	  lbz       r0, 0x0(r10)
	  stb       r0, 0x74(r30)
	  stb       r3, 0x75(r30)
	  stb       r5, 0x76(r30)
	  stb       r6, 0x77(r30)
	  b         .loc_0x2E0

	.loc_0x1B8:
	  lbz       r5, 0xF0(r30)
	  cmplwi    r5, 0
	  bne-      .loc_0x1E8
	  lbz       r0, 0xD4(r30)
	  stb       r0, 0x70(r30)
	  lbz       r0, 0xD5(r30)
	  stb       r0, 0x71(r30)
	  lbz       r0, 0xD6(r30)
	  stb       r0, 0x72(r30)
	  lbz       r0, 0xD7(r30)
	  stb       r0, 0x73(r30)
	  b         .loc_0x24C

	.loc_0x1E8:
	  lwz       r3, 0x4(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0x1FC
	  li        r3, 0
	  b         .loc_0x200

	.loc_0x1FC:
	  lwz       r3, 0x4(r3)

	.loc_0x200:
	  lwz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x214
	  addi      r3, r3, 0x18
	  b         .loc_0x218

	.loc_0x214:
	  li        r3, 0

	.loc_0x218:
	  lwz       r3, 0x4(r3)
	  rlwinm    r0,r5,2,0,29
	  add       r3, r3, r0
	  lwz       r0, 0xC(r3)
	  stw       r0, 0x14(r1)
	  lbz       r3, 0x14(r1)
	  lbz       r0, 0x15(r1)
	  stb       r3, 0x70(r30)
	  lbz       r3, 0x16(r1)
	  stb       r0, 0x71(r30)
	  lbz       r0, 0x17(r1)
	  stb       r3, 0x72(r30)
	  stb       r0, 0x73(r30)

	.loc_0x24C:
	  lbz       r5, 0xF1(r30)
	  cmplwi    r5, 0
	  bne-      .loc_0x27C
	  lbz       r0, 0xD8(r30)
	  stb       r0, 0x74(r30)
	  lbz       r0, 0xD9(r30)
	  stb       r0, 0x75(r30)
	  lbz       r0, 0xDA(r30)
	  stb       r0, 0x76(r30)
	  lbz       r0, 0xDB(r30)
	  stb       r0, 0x77(r30)
	  b         .loc_0x2E0

	.loc_0x27C:
	  lwz       r3, 0x4(r30)
	  cmplwi    r3, 0
	  bne-      .loc_0x290
	  li        r3, 0
	  b         .loc_0x294

	.loc_0x290:
	  lwz       r3, 0x4(r3)

	.loc_0x294:
	  lwz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2A8
	  addi      r3, r3, 0x18
	  b         .loc_0x2AC

	.loc_0x2A8:
	  li        r3, 0

	.loc_0x2AC:
	  lwz       r3, 0x4(r3)
	  rlwinm    r0,r5,2,0,29
	  add       r3, r3, r0
	  lwz       r0, 0xC(r3)
	  stw       r0, 0x10(r1)
	  lbz       r3, 0x10(r1)
	  lbz       r0, 0x11(r1)
	  stb       r3, 0x74(r30)
	  lbz       r3, 0x12(r1)
	  stb       r0, 0x75(r30)
	  lbz       r0, 0x13(r1)
	  stb       r3, 0x76(r30)
	  stb       r0, 0x77(r30)

	.loc_0x2E0:
	  lbz       r5, 0x73(r30)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  fmr       f3, f31
	  lfd       f2, 0x2578(r2)
	  fmr       f4, f30
	  stw       r5, 0x24(r1)
	  mr        r3, r30
	  lfs       f0, 0x78(r30)
	  lfd       f1, 0x20(r1)
	  stw       r0, 0x30(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  stb       r0, 0x73(r30)
	  lbz       r0, 0x77(r30)
	  lfs       f0, 0x78(r30)
	  stw       r0, 0x34(r1)
	  lfd       f1, 0x30(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  stb       r0, 0x77(r30)
	  lwz       r12, 0x0(r30)
	  lfs       f5, 0x90(r30)
	  lfs       f1, 0x54(r30)
	  lfs       f2, 0x94(r30)
	  lfs       f0, 0x58(r30)
	  fadds     f1, f5, f1
	  lwz       r12, 0x74(r12)
	  fadds     f2, f2, f0
	  mtctr     r12
	  bctrl
	  cmpwi     r31, 0
	  beq-      .loc_0x380
	  b         .loc_0x3C0

	.loc_0x380:
	  lbz       r3, 0x1C(r1)
	  lbz       r0, 0x1D(r1)
	  stb       r3, 0x60(r30)
	  lbz       r3, 0x1E(r1)
	  stb       r0, 0x61(r30)
	  lbz       r0, 0x1F(r1)
	  stb       r3, 0x62(r30)
	  lbz       r3, 0x18(r1)
	  stb       r0, 0x63(r30)
	  lbz       r0, 0x19(r1)
	  stb       r3, 0x5C(r30)
	  lbz       r3, 0x1A(r1)
	  stb       r0, 0x5D(r30)
	  lbz       r0, 0x1B(r1)
	  stb       r3, 0x5E(r30)
	  stb       r0, 0x5F(r30)

	.loc_0x3C0:
	  lfs       f0, 0x90(r30)
	  addi      r4, r1, 0xC
	  addi      r5, r1, 0x8
	  fadds     f0, f0, f31
	  stfs      f0, 0x90(r30)
	  lwz       r3, 0x40(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x40(r30)
	  lwz       r0, 0xD0(r30)
	  stw       r0, 0x8(r1)
	  lwz       r0, 0xCC(r30)
	  stw       r0, 0xC(r1)
	  lwz       r3, 0x4C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
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
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B8
 */
void P2JME::TRenderingProcessor::calcColorCoe((JUtility::TColor const&,
                                               JUtility::TColor*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043B38C
 * Size:	000440
 */
void P2JME::TRenderingProcessor::doDrawLetter((float, float, float, float, int,
                                               bool))
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
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  mr        r29, r3
	  li        r6, -0x1
	  lbz       r3, 0x64(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  fmr       f28, f1
	  lfd       f5, 0x2578(r2)
	  fmr       f29, f2
	  stw       r3, 0x1C(r1)
	  fmr       f30, f3
	  lfs       f0, 0x7C(r29)
	  lfd       f2, 0x18(r1)
	  fmr       f31, f4
	  lfs       f1, 0x2584(r2)
	  mr        r30, r4
	  fsubs     f2, f2, f5
	  stw       r6, 0x14(r1)
	  mr        r31, r5
	  stw       r6, 0x10(r1)
	  fmuls     f0, f2, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x94
	  fmr       f0, f1

	.loc_0x94:
	  lbz       r3, 0x65(r29)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x24(r1)
	  lfs       f2, 0x80(r29)
	  lfd       f3, 0x20(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f6, f3, f2
	  fcmpo     cr0, f6, f1
	  ble-      .loc_0xC8
	  fmr       f6, f1

	.loc_0xC8:
	  lbz       r3, 0x66(r29)
	  lis       r0, 0x4330
	  stw       r0, 0x28(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x2C(r1)
	  lfs       f2, 0x84(r29)
	  lfd       f3, 0x28(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f5, f3, f2
	  fcmpo     cr0, f5, f1
	  ble-      .loc_0xFC
	  fmr       f5, f1

	.loc_0xFC:
	  lbz       r3, 0x67(r29)
	  lis       r0, 0x4330
	  stw       r0, 0x30(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x34(r1)
	  lfs       f2, 0x88(r29)
	  lfd       f3, 0x30(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f2, f3, f2
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x130
	  fmr       f2, f1

	.loc_0x130:
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x14C
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x154

	.loc_0x14C:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f2, f1

	.loc_0x154:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f5, f1
	  stfd      f2, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r6,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x180
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f5
	  b         .loc_0x188

	.loc_0x180:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f5, f1

	.loc_0x188:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f6, f1
	  stfd      f2, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r5,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1B4
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f6
	  b         .loc_0x1BC

	.loc_0x1B4:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f6, f1

	.loc_0x1BC:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f0, f1
	  stfd      f2, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r4,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1E8
	  lfs       f1, 0x256C(r2)
	  fadds     f0, f1, f0
	  b         .loc_0x1F0

	.loc_0x1E8:
	  lfs       f1, 0x256C(r2)
	  fsubs     f0, f0, f1

	.loc_0x1F0:
	  lbz       r3, 0x68(r29)
	  fctiwz    f3, f0
	  lis       r0, 0x4330
	  lfd       f2, 0x2578(r2)
	  stw       r0, 0x58(r1)
	  lfs       f0, 0x7C(r29)
	  stw       r3, 0x5C(r1)
	  lfd       f1, 0x58(r1)
	  stfd      f3, 0x50(r1)
	  fsubs     f2, f1, f2
	  lfs       f1, 0x2584(r2)
	  lwz       r0, 0x54(r1)
	  stb       r4, 0x15(r1)
	  fmuls     f0, f2, f0
	  stb       r0, 0x14(r1)
	  fcmpo     cr0, f0, f1
	  stb       r5, 0x16(r1)
	  stb       r6, 0x17(r1)
	  ble-      .loc_0x240
	  fmr       f0, f1

	.loc_0x240:
	  lbz       r3, 0x69(r29)
	  lis       r0, 0x4330
	  stw       r0, 0x60(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x64(r1)
	  lfs       f2, 0x80(r29)
	  lfd       f3, 0x60(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f6, f3, f2
	  fcmpo     cr0, f6, f1
	  ble-      .loc_0x274
	  fmr       f6, f1

	.loc_0x274:
	  lbz       r3, 0x6A(r29)
	  lis       r0, 0x4330
	  stw       r0, 0x68(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x6C(r1)
	  lfs       f2, 0x84(r29)
	  lfd       f3, 0x68(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f5, f3, f2
	  fcmpo     cr0, f5, f1
	  ble-      .loc_0x2A8
	  fmr       f5, f1

	.loc_0x2A8:
	  lbz       r3, 0x6B(r29)
	  lis       r0, 0x4330
	  stw       r0, 0x70(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x74(r1)
	  lfs       f2, 0x88(r29)
	  lfd       f3, 0x70(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f2, f3, f2
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x2DC
	  fmr       f2, f1

	.loc_0x2DC:
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2F8
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x300

	.loc_0x2F8:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f2, f1

	.loc_0x300:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f5, f1
	  stfd      f2, 0x78(r1)
	  lwz       r0, 0x7C(r1)
	  rlwinm    r7,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x32C
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f5
	  b         .loc_0x334

	.loc_0x32C:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f5, f1

	.loc_0x334:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f6, f1
	  stfd      f2, 0x80(r1)
	  lwz       r0, 0x84(r1)
	  rlwinm    r6,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x360
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f6
	  b         .loc_0x368

	.loc_0x360:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f6, f1

	.loc_0x368:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f0, f1
	  stfd      f2, 0x88(r1)
	  lwz       r0, 0x8C(r1)
	  rlwinm    r3,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x394
	  lfs       f1, 0x256C(r2)
	  fadds     f0, f1, f0
	  b         .loc_0x39C

	.loc_0x394:
	  lfs       f1, 0x256C(r2)
	  fsubs     f0, f0, f1

	.loc_0x39C:
	  fctiwz    f0, f0
	  lwz       r0, 0x14(r1)
	  stb       r3, 0x11(r1)
	  addi      r4, r1, 0xC
	  addi      r5, r1, 0x8
	  stfd      f0, 0x90(r1)
	  lwz       r3, 0x94(r1)
	  stb       r6, 0x12(r1)
	  stb       r3, 0x10(r1)
	  stb       r7, 0x13(r1)
	  lwz       r3, 0x10(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x8(r1)
	  lwz       r3, 0x4C(r29)
	  bl        -0x40E550
	  lwz       r3, 0x4C(r29)
	  fmr       f1, f28
	  fmr       f2, f29
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  fmr       f3, f30
	  fmr       f4, f31
	  lwz       r12, 0x14(r12)
	  mr        r5, r31
	  mtctr     r12
	  bctrl
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r29, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043B7CC
 * Size:	00029C
 */
void P2JME::TRenderingProcessor::doDrawRuby((float, float, float, float, int,
                                             bool))
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
	  stw       r29, 0x64(r1)
	  mr        r29, r3
	  lis       r0, 0x4330
	  lfs       f5, 0x2584(r2)
	  li        r3, -0x1
	  lfs       f0, 0x78(r29)
	  fmr       f28, f1
	  stw       r0, 0x18(r1)
	  fmr       f29, f2
	  fmuls     f0, f5, f0
	  lfd       f2, 0x2578(r2)
	  fmr       f30, f3
	  fmr       f31, f4
	  stw       r3, 0xC(r1)
	  fctiwz    f0, f0
	  mr        r30, r4
	  mr        r31, r5
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stb       r0, 0x6F(r29)
	  lbz       r0, 0x6C(r29)
	  lfs       f0, 0x7C(r29)
	  stw       r0, 0x1C(r1)
	  lfd       f1, 0x18(r1)
	  fsubs     f1, f1, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f0, f5
	  ble-      .loc_0xA8
	  fmr       f0, f5

	.loc_0xA8:
	  lbz       r3, 0x6D(r29)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x24(r1)
	  lfs       f2, 0x80(r29)
	  lfd       f3, 0x20(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f6, f3, f2
	  fcmpo     cr0, f6, f1
	  ble-      .loc_0xDC
	  fmr       f6, f1

	.loc_0xDC:
	  lbz       r3, 0x6E(r29)
	  lis       r0, 0x4330
	  stw       r0, 0x28(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x2C(r1)
	  lfs       f2, 0x84(r29)
	  lfd       f3, 0x28(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f5, f3, f2
	  fcmpo     cr0, f5, f1
	  ble-      .loc_0x110
	  fmr       f5, f1

	.loc_0x110:
	  lbz       r3, 0x6F(r29)
	  lis       r0, 0x4330
	  stw       r0, 0x30(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x34(r1)
	  lfs       f2, 0x88(r29)
	  lfd       f3, 0x30(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f2, f3, f2
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x144
	  fmr       f2, f1

	.loc_0x144:
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x160
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x168

	.loc_0x160:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f2, f1

	.loc_0x168:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f5, f1
	  stfd      f2, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r5,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x194
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f5
	  b         .loc_0x19C

	.loc_0x194:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f5, f1

	.loc_0x19C:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f6, f1
	  stfd      f2, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r3,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1C8
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f6
	  b         .loc_0x1D0

	.loc_0x1C8:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f6, f1

	.loc_0x1D0:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f0, f1
	  stfd      f2, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1FC
	  lfs       f1, 0x256C(r2)
	  fadds     f0, f1, f0
	  b         .loc_0x204

	.loc_0x1FC:
	  lfs       f1, 0x256C(r2)
	  fsubs     f0, f0, f1

	.loc_0x204:
	  fctiwz    f0, f0
	  stb       r0, 0xD(r1)
	  addi      r4, r1, 0x8
	  stb       r3, 0xE(r1)
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  stb       r5, 0xF(r1)
	  stb       r0, 0xC(r1)
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x50(r29)
	  bl        -0x40E840
	  lwz       r3, 0x50(r29)
	  fmr       f1, f28
	  fmr       f2, f29
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  fmr       f3, f30
	  fmr       f4, f31
	  lwz       r12, 0x14(r12)
	  mr        r5, r31
	  mtctr     r12
	  bctrl
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  psq_l     f28,0x78(r1),0,0
	  lfd       f28, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r0, 0xB4(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043BA68
 * Size:	000074
 */
void P2JME::TRenderingProcessor::doDrawImage((JUTTexture*, float, float, float,
                                              float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  addi      r11, r1, 0x30
	  bl        -0x379E98
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  fmr       f28, f1
	  mr        r30, r3
	  fmr       f29, f2
	  mr        r31, r4
	  fmr       f30, f3
	  fmr       f31, f4
	  bl        .loc_0x74
	  fmr       f1, f28
	  mr        r3, r30
	  fmr       f2, f29
	  mr        r4, r31
	  fmr       f3, f30
	  fmr       f4, f31
	  bl        0x358
	  addi      r11, r1, 0x30
	  bl        -0x379E94
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x74:
	*/
}

/*
 * --INFO--
 * Address:	8043BADC
 * Size:	000334
 */
void P2JME::TRenderingProcessor::setImageGX(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r0, 0x5C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x144
	  lwz       r3, 0x60(r31)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x144
	  li        r3, 0x1
	  bl        -0x354CAC
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0x1
	  li        r7, 0x1
	  li        r8, 0x2
	  li        r9, 0x2
	  bl        -0x354C90
	  bl        -0x357464
	  li        r3, 0x1
	  bl        -0x352F84
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  bl        -0x353134
	  li        r3, 0
	  li        r4, 0
	  bl        -0x3536E0
	  li        r3, 0x1
	  bl        -0x356BC8
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x4
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        -0x356E64
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x357908
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x357914
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        -0x357920
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x3574B4
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x3574CC
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x1
	  li        r7, 0x4
	  bl        -0x3574E4
	  li        r3, 0x2
	  bl        -0x35604C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  bl        -0x352A80
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x5
	  li        r6, 0
	  bl        -0x352B40
	  b         .loc_0x320

	.loc_0x144:
	  li        r3, 0x1
	  bl        -0x354DC0
	  li        r3, 0x2
	  bl        -0x353074
	  li        r3, 0x1
	  bl        -0x356C98
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0xFF
	  bl        -0x35322C
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        -0x354DC8
	  lwz       r0, 0x5C(r31)
	  addi      r4, r1, 0xC
	  li        r3, 0x1
	  stw       r0, 0xC(r1)
	  bl        -0x35361C
	  lwz       r0, 0x60(r31)
	  addi      r4, r1, 0x8
	  li        r3, 0x2
	  stw       r0, 0x8(r1)
	  bl        -0x353630
	  li        r3, 0
	  li        r4, 0x2
	  li        r5, 0x4
	  li        r6, 0x8
	  li        r7, 0xF
	  bl        -0x3537A0
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x2
	  li        r6, 0x4
	  li        r7, 0x7
	  bl        -0x353774
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x35374C
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x353700
	  li        r3, 0x1
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        -0x3532F0
	  li        r3, 0x1
	  li        r4, 0xF
	  li        r5, 0
	  li        r6, 0xA
	  li        r7, 0xF
	  bl        -0x35381C
	  li        r3, 0x1
	  li        r4, 0x7
	  li        r5, 0
	  li        r6, 0x5
	  li        r7, 0x7
	  bl        -0x3537F0
	  li        r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x3537C8
	  li        r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        -0x35377C
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x5
	  li        r6, 0xF
	  bl        -0x352CB0
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x357698
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x3576B0
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x1
	  li        r7, 0x4
	  bl        -0x3576C8
	  bl        -0x357704
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x357B5C
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x357B68
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        -0x357B74

	.loc_0x320:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043BE10
 * Size:	0004F4
 */
void P2JME::TRenderingProcessor::drawImage((JUTTexture*, float, float, float,
                                            float))
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
	  stw       r31, 0x9C(r1)
	  fmr       f28, f1
	  mr        r31, r3
	  fmr       f29, f2
	  mr        r3, r4
	  fmr       f31, f3
	  li        r4, 0
	  fmr       f30, f4
	  bl        -0x40882C
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x70(r31)
	  lis       r4, 0x4330
	  xoris     r5, r3, 0x8000
	  li        r3, -0x1
	  stw       r5, 0x14(r1)
	  fadds     f31, f28, f31
	  lfd       f1, 0x2570(r2)
	  stw       r4, 0x10(r1)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x10(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f4, f0, f1
	  lfs       f1, 0xE4(r31)
	  stw       r4, 0x18(r1)
	  lfs       f0, 0x7C(r31)
	  lfd       f2, 0x18(r1)
	  fmadds    f29, f1, f4, f29
	  lfs       f1, 0x2584(r2)
	  fsubs     f2, f2, f3
	  stw       r3, 0xC(r1)
	  fsubs     f30, f29, f30
	  stw       r3, 0x8(r1)
	  fmuls     f0, f2, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xCC
	  fmr       f0, f1

	.loc_0xCC:
	  lbz       r3, 0x71(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x24(r1)
	  lfs       f2, 0x80(r31)
	  lfd       f3, 0x20(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f6, f3, f2
	  fcmpo     cr0, f6, f1
	  ble-      .loc_0x100
	  fmr       f6, f1

	.loc_0x100:
	  lbz       r3, 0x72(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x28(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x2C(r1)
	  lfs       f2, 0x84(r31)
	  lfd       f3, 0x28(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f5, f3, f2
	  fcmpo     cr0, f5, f1
	  ble-      .loc_0x134
	  fmr       f5, f1

	.loc_0x134:
	  lbz       r3, 0x73(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x30(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x34(r1)
	  lfs       f2, 0x88(r31)
	  lfd       f3, 0x30(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f2, f3, f2
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x168
	  fmr       f2, f1

	.loc_0x168:
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x184
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x18C

	.loc_0x184:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f2, f1

	.loc_0x18C:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f5, f1
	  stfd      f2, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r6,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1B8
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f5
	  b         .loc_0x1C0

	.loc_0x1B8:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f5, f1

	.loc_0x1C0:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f6, f1
	  stfd      f2, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r5,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1EC
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f6
	  b         .loc_0x1F4

	.loc_0x1EC:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f6, f1

	.loc_0x1F4:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f0, f1
	  stfd      f2, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r4,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x220
	  lfs       f1, 0x256C(r2)
	  fadds     f0, f1, f0
	  b         .loc_0x228

	.loc_0x220:
	  lfs       f1, 0x256C(r2)
	  fsubs     f0, f0, f1

	.loc_0x228:
	  lbz       r3, 0x74(r31)
	  fctiwz    f3, f0
	  lis       r0, 0x4330
	  lfd       f2, 0x2578(r2)
	  stw       r0, 0x58(r1)
	  lfs       f0, 0x7C(r31)
	  stw       r3, 0x5C(r1)
	  lfd       f1, 0x58(r1)
	  stfd      f3, 0x50(r1)
	  fsubs     f2, f1, f2
	  lfs       f1, 0x2584(r2)
	  lwz       r0, 0x54(r1)
	  stb       r4, 0xD(r1)
	  fmuls     f0, f2, f0
	  stb       r0, 0xC(r1)
	  fcmpo     cr0, f0, f1
	  stb       r5, 0xE(r1)
	  stb       r6, 0xF(r1)
	  ble-      .loc_0x278
	  fmr       f0, f1

	.loc_0x278:
	  lbz       r3, 0x75(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x60(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x64(r1)
	  lfs       f2, 0x80(r31)
	  lfd       f3, 0x60(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f6, f3, f2
	  fcmpo     cr0, f6, f1
	  ble-      .loc_0x2AC
	  fmr       f6, f1

	.loc_0x2AC:
	  lbz       r3, 0x76(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x68(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x6C(r1)
	  lfs       f2, 0x84(r31)
	  lfd       f3, 0x68(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f5, f3, f2
	  fcmpo     cr0, f5, f1
	  ble-      .loc_0x2E0
	  fmr       f5, f1

	.loc_0x2E0:
	  lbz       r3, 0x77(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x70(r1)
	  lfd       f4, 0x2578(r2)
	  stw       r3, 0x74(r1)
	  lfs       f2, 0x88(r31)
	  lfd       f3, 0x70(r1)
	  lfs       f1, 0x2584(r2)
	  fsubs     f3, f3, f4
	  fmuls     f2, f3, f2
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x314
	  fmr       f2, f1

	.loc_0x314:
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x330
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f2
	  b         .loc_0x338

	.loc_0x330:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f2, f1

	.loc_0x338:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f5, f1
	  stfd      f2, 0x78(r1)
	  lwz       r0, 0x7C(r1)
	  rlwinm    r6,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x364
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f5
	  b         .loc_0x36C

	.loc_0x364:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f5, f1

	.loc_0x36C:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f6, f1
	  stfd      f2, 0x80(r1)
	  lwz       r0, 0x84(r1)
	  rlwinm    r5,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x398
	  lfs       f1, 0x256C(r2)
	  fadds     f1, f1, f6
	  b         .loc_0x3A0

	.loc_0x398:
	  lfs       f1, 0x256C(r2)
	  fsubs     f1, f6, f1

	.loc_0x3A0:
	  fctiwz    f2, f1
	  lfs       f1, 0x2560(r2)
	  fcmpo     cr0, f0, f1
	  stfd      f2, 0x88(r1)
	  lwz       r0, 0x8C(r1)
	  rlwinm    r0,r0,0,24,31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x3CC
	  lfs       f1, 0x256C(r2)
	  fadds     f0, f1, f0
	  b         .loc_0x3D4

	.loc_0x3CC:
	  lfs       f1, 0x256C(r2)
	  fsubs     f0, f0, f1

	.loc_0x3D4:
	  fctiwz    f0, f0
	  stb       r5, 0xA(r1)
	  li        r3, 0x80
	  li        r4, 0
	  stb       r0, 0x9(r1)
	  li        r5, 0x4
	  stfd      f0, 0x90(r1)
	  lwz       r0, 0x94(r1)
	  stb       r6, 0xB(r1)
	  stb       r0, 0x8(r1)
	  bl        -0x356884
	  lis       r12, 0xCC01
	  lfs       f0, 0x2560(r2)
	  stfs      f28, -0x8000(r12)
	  li        r7, 0
	  lbz       r11, 0x8(r1)
	  li        r6, 0x10
	  stfs      f29, -0x8000(r12)
	  lbz       r10, 0x9(r1)
	  stfs      f0, -0x8000(r12)
	  lbz       r9, 0xA(r1)
	  stb       r11, -0x8000(r12)
	  lbz       r8, 0xB(r1)
	  stb       r10, -0x8000(r12)
	  lbz       r5, 0xC(r1)
	  stb       r9, -0x8000(r12)
	  lbz       r4, 0xD(r1)
	  stb       r8, -0x8000(r12)
	  lbz       r3, 0xE(r1)
	  stb       r7, -0x8000(r12)
	  lbz       r0, 0xF(r1)
	  stb       r6, -0x8000(r12)
	  stfs      f28, -0x8000(r12)
	  stfs      f30, -0x8000(r12)
	  stfs      f0, -0x8000(r12)
	  stb       r5, -0x8000(r12)
	  stb       r4, -0x8000(r12)
	  stb       r3, -0x8000(r12)
	  stb       r0, -0x8000(r12)
	  stb       r7, -0x8000(r12)
	  stb       r7, -0x8000(r12)
	  stfs      f31, -0x8000(r12)
	  stfs      f30, -0x8000(r12)
	  stfs      f0, -0x8000(r12)
	  stb       r5, -0x8000(r12)
	  stb       r4, -0x8000(r12)
	  stb       r3, -0x8000(r12)
	  stb       r0, -0x8000(r12)
	  stb       r6, -0x8000(r12)
	  stb       r7, -0x8000(r12)
	  stfs      f31, -0x8000(r12)
	  stfs      f29, -0x8000(r12)
	  stfs      f0, -0x8000(r12)
	  stb       r11, -0x8000(r12)
	  stb       r10, -0x8000(r12)
	  stb       r9, -0x8000(r12)
	  stb       r8, -0x8000(r12)
	  stb       r6, -0x8000(r12)
	  stb       r6, -0x8000(r12)
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r31, 0x9C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043C304
 * Size:	000010
 */
void P2JME::TRenderingProcessor::reset(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x2560(r2)
	  stfs      f0, 0x54(r3)
	  stfs      f0, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043C314
 * Size:	000128
 */
void P2JME::TRenderingProcessor::calcWidth((JUTFont*, int, float, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  fmr       f31, f1
	  mr        r3, r29
	  mr        r30, r5
	  lwz       r12, 0x0(r29)
	  mr        r31, r6
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x5(r29)
	  stw       r3, 0x10(r1)
	  lfd       f1, 0x2570(r2)
	  cmplwi    r0, 0
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fdivs     f31, f31, f0
	  beq-      .loc_0x90
	  lwz       r0, 0x8(r29)
	  stw       r3, 0x10(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fmuls     f1, f31, f0
	  b         .loc_0x104

	.loc_0x90:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  addi      r5, r1, 0x8
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xE4
	  lbz       r4, 0x9(r1)
	  lis       r0, 0x4330
	  lbz       r3, 0x8(r1)
	  stw       r0, 0x10(r1)
	  add       r0, r4, r3
	  lfd       f1, 0x2570(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fmuls     f1, f31, f0
	  b         .loc_0x104

	.loc_0xE4:
	  lbz       r3, 0x9(r1)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  lfd       f1, 0x2578(r2)
	  stw       r3, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fmuls     f1, f0, f31

	.loc_0x104:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043C43C
 * Size:	000024
 */
void P2JME::TRenderingProcessor::setLineWidth(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x8C(r3)
	  rlwinm.   r0,r0,0,31,31
	  beqlr-
	  lbz       r0, 0xA4(r3)
	  lfs       f0, 0x90(r3)
	  lwz       r3, 0xA8(r3)
	  rlwinm    r0,r0,2,0,29
	  stfsx     f0, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043C460
 * Size:	0000D8
 */
void P2JME::TRenderingProcessor::resetLineWidth(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x4
	  lfs       f0, 0x2560(r2)
	  li        r11, 0
	  mtctr     r0

	.loc_0x10:
	  lwz       r4, 0xA8(r3)
	  addi      r10, r11, 0x4
	  addi      r9, r11, 0x8
	  addi      r8, r11, 0xC
	  stfsx     f0, r4, r11
	  addi      r7, r11, 0x10
	  addi      r6, r11, 0x14
	  addi      r5, r11, 0x18
	  lwz       r4, 0xA8(r3)
	  addi      r0, r11, 0x1C
	  stfsx     f0, r4, r10
	  addi      r10, r11, 0x24
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r9
	  addi      r9, r11, 0x28
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r8
	  addi      r8, r11, 0x2C
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r7
	  addi      r7, r11, 0x30
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r6
	  addi      r6, r11, 0x34
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r5
	  addi      r5, r11, 0x38
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r0
	  addi      r0, r11, 0x3C
	  addi      r11, r11, 0x20
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r11
	  addi      r11, r11, 0x20
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r10
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r9
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r8
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r7
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r6
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r5
	  lwz       r4, 0xA8(r3)
	  stfsx     f0, r4, r0
	  bdnz+     .loc_0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043C538
 * Size:	000040
 */
void P2JME::TRenderingProcessor::setOnePageLine(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x8C(r3)
	  rlwinm.   r0,r0,0,31,31
	  beqlr-
	  li        r5, 0
	  b         .loc_0x30

	.loc_0x14:
	  lwz       r4, 0xAC(r3)
	  lbzx      r0, r4, r5
	  cmplwi    r0, 0
	  bne-      .loc_0x2C
	  lbz       r0, 0xA5(r3)
	  stbx      r0, r4, r5

	.loc_0x2C:
	  addi      r5, r5, 0x1

	.loc_0x30:
	  lbz       r0, 0xA4(r3)
	  cmpw      r5, r0
	  blt+      .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043C578
 * Size:	0000D8
 */
void P2JME::TRenderingProcessor::resetOnePageLine(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x4
	  li        r12, 0
	  mtctr     r0

	.loc_0xC:
	  lwz       r4, 0xAC(r3)
	  li        r11, 0
	  addi      r10, r12, 0x1
	  addi      r9, r12, 0x2
	  stbx      r11, r4, r12
	  addi      r8, r12, 0x3
	  addi      r7, r12, 0x4
	  addi      r6, r12, 0x5
	  lwz       r4, 0xAC(r3)
	  addi      r5, r12, 0x6
	  addi      r0, r12, 0x7
	  stbx      r11, r4, r10
	  addi      r10, r12, 0x9
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r9
	  addi      r9, r12, 0xA
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r8
	  addi      r8, r12, 0xB
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r7
	  addi      r7, r12, 0xC
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r6
	  addi      r6, r12, 0xD
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r5
	  addi      r5, r12, 0xE
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r0
	  addi      r0, r12, 0xF
	  addi      r12, r12, 0x8
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r12
	  addi      r12, r12, 0x8
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r10
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r9
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r8
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r7
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r6
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r5
	  lwz       r4, 0xAC(r3)
	  stbx      r11, r4, r0
	  bdnz+     .loc_0xC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void P2JME::TRenderingProcessor::resetPageInfo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043C650
 * Size:	00008C
 */
void P2JME::TRenderingProcessor::setPageInfo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0xA6(r3)
	  cmplwi    r0, 0xA
	  blt-      .loc_0x3C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5418
	  li        r4, 0x625
	  subi      r5, r5, 0x5400
	  crclr     6, 0x6
	  bl        -0x412048

	.loc_0x3C:
	  lbz       r0, 0xA6(r31)
	  lbz       r4, 0xA4(r31)
	  lwz       r3, 0xB0(r31)
	  rlwinm    r0,r0,1,0,30
	  subi      r4, r4, 0x1
	  add       r3, r3, r0
	  stb       r4, 0x1(r3)
	  lbz       r0, 0xA6(r31)
	  cmplwi    r0, 0x9
	  bge-      .loc_0x78
	  lwz       r3, 0xB0(r31)
	  rlwinm    r0,r0,1,23,30
	  lbz       r4, 0xA4(r31)
	  add       r3, r3, r0
	  stb       r4, 0x2(r3)

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043C6DC
 * Size:	000020
 */
void P2JME::TRenderingProcessor::preProcCode((unsigned int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x34
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043C6FC
 * Size:	000020
 */
void P2JME::TRenderingProcessor::preProcID((unsigned int, unsigned int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x3B0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000260
 */
void P2JME::TRenderingProcessor::preProcCenteringPre(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void P2JME::TRenderingProcessor::preProcCenteringPost(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043C71C
 * Size:	00039C
 */
void P2JME::TRenderingProcessor::preProcCenteringCode((unsigned int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r10, 0
	  lfs       f0, 0x2560(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0x4
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x8C(r3)
	  ori       r3, r3, 0x1
	  stw       r3, 0x8C(r30)
	  stb       r10, 0xA4(r30)
	  mtctr     r0

	.loc_0x3C:
	  lwz       r3, 0xA8(r30)
	  addi      r9, r10, 0x4
	  addi      r8, r10, 0x8
	  addi      r7, r10, 0xC
	  stfsx     f0, r3, r10
	  addi      r6, r10, 0x10
	  addi      r5, r10, 0x14
	  addi      r4, r10, 0x18
	  lwz       r3, 0xA8(r30)
	  addi      r0, r10, 0x1C
	  stfsx     f0, r3, r9
	  addi      r9, r10, 0x24
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r8
	  addi      r8, r10, 0x28
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r7
	  addi      r7, r10, 0x2C
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r6
	  addi      r6, r10, 0x30
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r5
	  addi      r5, r10, 0x34
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r4
	  addi      r4, r10, 0x38
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r0
	  addi      r0, r10, 0x3C
	  addi      r10, r10, 0x20
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r10
	  addi      r10, r10, 0x20
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r9
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r8
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r7
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r6
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r5
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r4
	  lwz       r3, 0xA8(r30)
	  stfsx     f0, r3, r0
	  bdnz+     .loc_0x3C
	  li        r11, 0
	  li        r0, 0x4
	  stb       r11, 0xA5(r30)
	  mtctr     r0

	.loc_0x110:
	  lwz       r4, 0xAC(r30)
	  li        r3, 0
	  addi      r10, r11, 0x1
	  addi      r9, r11, 0x2
	  stbx      r3, r4, r11
	  addi      r8, r11, 0x3
	  addi      r7, r11, 0x4
	  addi      r6, r11, 0x5
	  lwz       r4, 0xAC(r30)
	  addi      r5, r11, 0x6
	  addi      r0, r11, 0x7
	  stbx      r3, r4, r10
	  addi      r10, r11, 0x9
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r9
	  addi      r9, r11, 0xA
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r8
	  addi      r8, r11, 0xB
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r7
	  addi      r7, r11, 0xC
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r6
	  addi      r6, r11, 0xD
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r5
	  addi      r5, r11, 0xE
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r0
	  addi      r0, r11, 0xF
	  addi      r11, r11, 0x8
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r11
	  addi      r11, r11, 0x8
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r10
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r9
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r8
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r7
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r6
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r5
	  lwz       r4, 0xAC(r30)
	  stbx      r3, r4, r0
	  bdnz+     .loc_0x110
	  li        r0, 0x2
	  mtctr     r0

	.loc_0x1E0:
	  lwz       r4, 0xB0(r30)
	  li        r12, 0
	  addi      r0, r3, 0x1
	  addi      r10, r3, 0x2
	  stbx      r12, r4, r3
	  addi      r9, r3, 0x3
	  addi      r8, r3, 0x4
	  addi      r7, r3, 0x5
	  lwz       r11, 0xB0(r30)
	  addi      r6, r3, 0x6
	  addi      r5, r3, 0x7
	  addi      r4, r3, 0x8
	  stbx      r12, r11, r0
	  addi      r0, r3, 0x9
	  addi      r3, r3, 0xA
	  lwz       r11, 0xB0(r30)
	  stbx      r12, r11, r10
	  lwz       r10, 0xB0(r30)
	  stbx      r12, r10, r9
	  lwz       r9, 0xB0(r30)
	  stbx      r12, r9, r8
	  lwz       r8, 0xB0(r30)
	  stbx      r12, r8, r7
	  lwz       r7, 0xB0(r30)
	  stbx      r12, r7, r6
	  lwz       r6, 0xB0(r30)
	  stbx      r12, r6, r5
	  lwz       r5, 0xB0(r30)
	  stbx      r12, r5, r4
	  lwz       r4, 0xB0(r30)
	  stbx      r12, r4, r0
	  bdnz+     .loc_0x1E0
	  lfs       f0, 0x2560(r2)
	  mr        r3, r30
	  li        r4, 0
	  stfs      f0, 0xB4(r30)
	  bl        -0x435834
	  rlwinm    r4,r31,16,16,31
	  mr        r3, r30
	  rlwinm    r5,r31,0,16,31
	  bl        -0x435BF8
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x434850
	  lwz       r0, 0x8C(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x2B0
	  lbz       r0, 0xA4(r30)
	  lfs       f0, 0x90(r30)
	  lwz       r3, 0xA8(r30)
	  rlwinm    r0,r0,2,0,29
	  stfsx     f0, r3, r0

	.loc_0x2B0:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x8C(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x300
	  li        r4, 0
	  b         .loc_0x2F4

	.loc_0x2D8:
	  lwz       r3, 0xAC(r30)
	  lbzx      r0, r3, r4
	  cmplwi    r0, 0
	  bne-      .loc_0x2F0
	  lbz       r0, 0xA5(r30)
	  stbx      r0, r3, r4

	.loc_0x2F0:
	  addi      r4, r4, 0x1

	.loc_0x2F4:
	  lbz       r0, 0xA4(r30)
	  cmpw      r4, r0
	  blt+      .loc_0x2D8

	.loc_0x300:
	  lwz       r0, 0x8C(r30)
	  rlwinm.   r0,r0,0,3,3
	  bne-      .loc_0x370
	  lbz       r0, 0xA6(r30)
	  cmplwi    r0, 0xA
	  blt-      .loc_0x334
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5418
	  li        r4, 0x625
	  subi      r5, r5, 0x5400
	  crclr     6, 0x6
	  bl        -0x41240C

	.loc_0x334:
	  lbz       r0, 0xA6(r30)
	  lbz       r4, 0xA4(r30)
	  lwz       r3, 0xB0(r30)
	  rlwinm    r0,r0,1,0,30
	  subi      r4, r4, 0x1
	  add       r3, r3, r0
	  stb       r4, 0x1(r3)
	  lbz       r0, 0xA6(r30)
	  cmplwi    r0, 0x9
	  bge-      .loc_0x370
	  lwz       r3, 0xB0(r30)
	  rlwinm    r0,r0,1,23,30
	  lbz       r4, 0xA4(r30)
	  add       r3, r3, r0
	  stb       r4, 0x2(r3)

	.loc_0x370:
	  lwz       r0, 0x8C(r30)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x8C(r30)
	  lfs       f0, 0x94(r30)
	  stfs      f0, 0xB4(r30)
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
 * Address:	8043CAB8
 * Size:	0003AC
 */
void P2JME::TRenderingProcessor::preProcCenteringID((unsigned int,
                                                     unsigned int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r10, 0
	  lfs       f0, 0x2560(r2)
	  stw       r0, 0x24(r1)
	  li        r0, 0x4
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x8C(r3)
	  ori       r3, r3, 0x1
	  stw       r3, 0x8C(r29)
	  stb       r10, 0xA4(r29)
	  mtctr     r0

	.loc_0x44:
	  lwz       r3, 0xA8(r29)
	  addi      r9, r10, 0x4
	  addi      r8, r10, 0x8
	  addi      r7, r10, 0xC
	  stfsx     f0, r3, r10
	  addi      r6, r10, 0x10
	  addi      r5, r10, 0x14
	  addi      r4, r10, 0x18
	  lwz       r3, 0xA8(r29)
	  addi      r0, r10, 0x1C
	  stfsx     f0, r3, r9
	  addi      r9, r10, 0x24
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r8
	  addi      r8, r10, 0x28
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r7
	  addi      r7, r10, 0x2C
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r6
	  addi      r6, r10, 0x30
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r5
	  addi      r5, r10, 0x34
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r4
	  addi      r4, r10, 0x38
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r0
	  addi      r0, r10, 0x3C
	  addi      r10, r10, 0x20
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r10
	  addi      r10, r10, 0x20
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r9
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r8
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r7
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r6
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r5
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r4
	  lwz       r3, 0xA8(r29)
	  stfsx     f0, r3, r0
	  bdnz+     .loc_0x44
	  li        r11, 0
	  li        r0, 0x4
	  stb       r11, 0xA5(r29)
	  mtctr     r0

	.loc_0x118:
	  lwz       r4, 0xAC(r29)
	  li        r3, 0
	  addi      r10, r11, 0x1
	  addi      r9, r11, 0x2
	  stbx      r3, r4, r11
	  addi      r8, r11, 0x3
	  addi      r7, r11, 0x4
	  addi      r6, r11, 0x5
	  lwz       r4, 0xAC(r29)
	  addi      r5, r11, 0x6
	  addi      r0, r11, 0x7
	  stbx      r3, r4, r10
	  addi      r10, r11, 0x9
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r9
	  addi      r9, r11, 0xA
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r8
	  addi      r8, r11, 0xB
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r7
	  addi      r7, r11, 0xC
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r6
	  addi      r6, r11, 0xD
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r5
	  addi      r5, r11, 0xE
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r0
	  addi      r0, r11, 0xF
	  addi      r11, r11, 0x8
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r11
	  addi      r11, r11, 0x8
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r10
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r9
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r8
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r7
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r6
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r5
	  lwz       r4, 0xAC(r29)
	  stbx      r3, r4, r0
	  bdnz+     .loc_0x118
	  li        r0, 0x2
	  mtctr     r0

	.loc_0x1E8:
	  lwz       r4, 0xB0(r29)
	  li        r12, 0
	  addi      r0, r3, 0x1
	  addi      r10, r3, 0x2
	  stbx      r12, r4, r3
	  addi      r9, r3, 0x3
	  addi      r8, r3, 0x4
	  addi      r7, r3, 0x5
	  lwz       r11, 0xB0(r29)
	  addi      r6, r3, 0x6
	  addi      r5, r3, 0x7
	  addi      r4, r3, 0x8
	  stbx      r12, r11, r0
	  addi      r0, r3, 0x9
	  addi      r3, r3, 0xA
	  lwz       r11, 0xB0(r29)
	  stbx      r12, r11, r10
	  lwz       r10, 0xB0(r29)
	  stbx      r12, r10, r9
	  lwz       r9, 0xB0(r29)
	  stbx      r12, r9, r8
	  lwz       r8, 0xB0(r29)
	  stbx      r12, r8, r7
	  lwz       r7, 0xB0(r29)
	  stbx      r12, r7, r6
	  lwz       r6, 0xB0(r29)
	  stbx      r12, r6, r5
	  lwz       r5, 0xB0(r29)
	  stbx      r12, r5, r4
	  lwz       r4, 0xB0(r29)
	  stbx      r12, r4, r0
	  bdnz+     .loc_0x1E8
	  lfs       f0, 0x2560(r2)
	  mr        r3, r29
	  li        r4, 0
	  stfs      f0, 0xB4(r29)
	  bl        -0x435BD8
	  mr        r3, r29
	  mr        r4, r30
	  mr        r5, r31
	  li        r6, 0
	  bl        -0x435EE4
	  mr        r3, r29
	  li        r4, 0
	  bl        -0x434BF8
	  lwz       r0, 0x8C(r29)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x2BC
	  lbz       r0, 0xA4(r29)
	  lfs       f0, 0x90(r29)
	  lwz       r3, 0xA8(r29)
	  rlwinm    r0,r0,2,0,29
	  stfsx     f0, r3, r0

	.loc_0x2BC:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x8C(r29)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x30C
	  li        r4, 0
	  b         .loc_0x300

	.loc_0x2E4:
	  lwz       r3, 0xAC(r29)
	  lbzx      r0, r3, r4
	  cmplwi    r0, 0
	  bne-      .loc_0x2FC
	  lbz       r0, 0xA5(r29)
	  stbx      r0, r3, r4

	.loc_0x2FC:
	  addi      r4, r4, 0x1

	.loc_0x300:
	  lbz       r0, 0xA4(r29)
	  cmpw      r4, r0
	  blt+      .loc_0x2E4

	.loc_0x30C:
	  lwz       r0, 0x8C(r29)
	  rlwinm.   r0,r0,0,3,3
	  bne-      .loc_0x37C
	  lbz       r0, 0xA6(r29)
	  cmplwi    r0, 0xA
	  blt-      .loc_0x340
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5418
	  li        r4, 0x625
	  subi      r5, r5, 0x5400
	  crclr     6, 0x6
	  bl        -0x4127B4

	.loc_0x340:
	  lbz       r0, 0xA6(r29)
	  lbz       r4, 0xA4(r29)
	  lwz       r3, 0xB0(r29)
	  rlwinm    r0,r0,1,0,30
	  subi      r4, r4, 0x1
	  add       r3, r3, r0
	  stb       r4, 0x1(r3)
	  lbz       r0, 0xA6(r29)
	  cmplwi    r0, 0x9
	  bge-      .loc_0x37C
	  lwz       r3, 0xB0(r29)
	  rlwinm    r0,r0,1,23,30
	  lbz       r4, 0xA4(r29)
	  add       r3, r3, r0
	  stb       r4, 0x2(r3)

	.loc_0x37C:
	  lwz       r0, 0x8C(r29)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x8C(r29)
	  lfs       f0, 0x94(r29)
	  stfs      f0, 0xB4(r29)
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
 * Address:	8043CE64
 * Size:	000008
 */
void P2JME::TRenderingProcessor::setFont((JUTFont*))
{
	/*
	.loc_0x0:
	  stw       r4, 0x4C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043CE6C
 * Size:	00044C
 */
void P2JME::TRenderingProcessor::setTextBoxInfo((J2DPane*))
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
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  stw       r28, 0x60(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0x13
	  beq-      .loc_0x70
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x5418
	  li        r4, 0x697
	  subi      r5, r5, 0x5400
	  crclr     6, 0x6
	  bl        -0x412898

	.loc_0x70:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0x13
	  bne-      .loc_0x41C
	  mr        r4, r31
	  li        r28, -0x1
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x34
	  stw       r28, 0x40(r1)
	  lbz       r11, 0x104(r31)
	  lbz       r10, 0x105(r31)
	  lbz       r9, 0x106(r31)
	  lbz       r8, 0x107(r31)
	  stw       r28, 0x44(r1)
	  lbz       r7, 0x108(r31)
	  lbz       r6, 0x109(r31)
	  lbz       r5, 0x10A(r31)
	  lbz       r0, 0x10B(r31)
	  lwz       r12, 0xB0(r12)
	  stb       r11, 0x40(r1)
	  stb       r10, 0x41(r1)
	  stb       r9, 0x42(r1)
	  stb       r8, 0x43(r1)
	  stb       r7, 0x44(r1)
	  stb       r6, 0x45(r1)
	  stb       r5, 0x46(r1)
	  stb       r0, 0x47(r1)
	  stw       r28, 0x3C(r1)
	  stw       r28, 0x38(r1)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lbz       r7, 0x34(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x30
	  lbz       r6, 0x35(r1)
	  lbz       r5, 0x36(r1)
	  lbz       r0, 0x37(r1)
	  lwz       r12, 0xB4(r12)
	  stb       r7, 0x38(r1)
	  stb       r6, 0x39(r1)
	  stb       r5, 0x3A(r1)
	  stb       r0, 0x3B(r1)
	  mtctr     r12
	  bctrl
	  lbz       r3, 0xB3(r31)
	  lis       r0, 0x4330
	  lwz       r28, 0x38(r1)
	  stw       r3, 0x4C(r1)
	  lwz       r29, 0x40(r1)
	  stw       r0, 0x48(r1)
	  lfd       f2, 0x2578(r2)
	  lfd       f1, 0x48(r1)
	  lfs       f0, 0x2584(r2)
	  fsubs     f1, f1, f2
	  stw       r28, 0x18(r1)
	  lwz       r12, 0x44(r1)
	  stw       r29, 0x14(r1)
	  fdivs     f0, f1, f0
	  lbz       r5, 0x30(r1)
	  stw       r12, 0x10(r1)
	  lbz       r4, 0x31(r1)
	  stw       r28, 0xC(r1)
	  lbz       r3, 0x32(r1)
	  lbz       r0, 0x33(r1)
	  stb       r5, 0x3C(r1)
	  lbz       r5, 0x18(r1)
	  stb       r4, 0x3D(r1)
	  lbz       r4, 0x19(r1)
	  stb       r3, 0x3E(r1)
	  lbz       r3, 0x1A(r1)
	  stb       r0, 0x3F(r1)
	  lbz       r10, 0x1B(r1)
	  lwz       r0, 0x3C(r1)
	  stfs      f0, 0x78(r30)
	  lbz       r9, 0x14(r1)
	  stw       r0, 0x1C(r1)
	  lbz       r8, 0x15(r1)
	  lbz       r7, 0x1C(r1)
	  lbz       r6, 0x1D(r1)
	  stb       r7, 0x60(r30)
	  lbz       r7, 0x1E(r1)
	  stb       r6, 0x61(r30)
	  lbz       r6, 0x1F(r1)
	  stb       r7, 0x62(r30)
	  lbz       r7, 0x16(r1)
	  stb       r6, 0x63(r30)
	  lbz       r6, 0x17(r1)
	  stb       r5, 0x5C(r30)
	  lbz       r5, 0x10(r1)
	  stb       r4, 0x5D(r30)
	  lbz       r4, 0x11(r1)
	  stb       r3, 0x5E(r30)
	  lbz       r3, 0x12(r1)
	  stb       r10, 0x5F(r30)
	  lbz       r11, 0x13(r1)
	  stb       r9, 0xD4(r30)
	  lbz       r10, 0xC(r1)
	  stb       r8, 0xD5(r30)
	  lbz       r9, 0xD(r1)
	  stw       r0, 0x8(r1)
	  lbz       r8, 0xE(r1)
	  stb       r7, 0xD6(r30)
	  lbz       r7, 0xF(r1)
	  stb       r6, 0xD7(r30)
	  lbz       r6, 0x8(r1)
	  stb       r5, 0xD8(r30)
	  lbz       r5, 0x9(r1)
	  stb       r4, 0xD9(r30)
	  lbz       r4, 0xA(r1)
	  stb       r3, 0xDA(r30)
	  lbz       r3, 0xB(r1)
	  stb       r11, 0xDB(r30)
	  stb       r10, 0xCC(r30)
	  stb       r9, 0xCD(r30)
	  stb       r8, 0xCE(r30)
	  stb       r7, 0xCF(r30)
	  stb       r6, 0xD0(r30)
	  stb       r5, 0xD1(r30)
	  stb       r4, 0xD2(r30)
	  stb       r3, 0xD3(r30)
	  lfs       f0, 0x114(r31)
	  stw       r29, 0x2C(r1)
	  stfs      f0, 0xBC(r30)
	  stfs      f0, 0xC4(r30)
	  lfs       f0, 0x118(r31)
	  stw       r12, 0x28(r1)
	  stfs      f0, 0xC0(r30)
	  stfs      f0, 0xC8(r30)
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0x20(r31)
	  stw       r28, 0x24(r1)
	  fsubs     f0, f1, f0
	  stw       r0, 0x20(r1)
	  stfs      f0, 0x38(r30)
	  lfs       f1, 0x2C(r31)
	  lfs       f0, 0x24(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x3C(r30)
	  lwz       r3, 0x4C(r30)
	  lfs       f31, 0x11C(r31)
	  lwz       r12, 0x0(r3)
	  lfs       f30, 0x120(r31)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x54(r1)
	  lfd       f1, 0x2570(r2)
	  stw       r0, 0x50(r1)
	  lfd       f0, 0x50(r1)
	  fsubs     f0, f0, f1
	  fdivs     f0, f31, f0
	  stfs      f0, 0xE8(r30)
	  lwz       r3, 0x4C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x5C(r1)
	  lfd       f1, 0x2570(r2)
	  stw       r0, 0x58(r1)
	  lfd       f0, 0x58(r1)
	  fsubs     f0, f0, f1
	  fdivs     f0, f30, f0
	  stfs      f0, 0xEC(r30)
	  lbz       r0, 0x130(r31)
	  rlwinm    r0,r0,30,30,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x388
	  bge-      .loc_0x344
	  cmpwi     r0, 0
	  bge-      .loc_0x350
	  b         .loc_0x3A0

	.loc_0x344:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x3A0
	  b         .loc_0x36C

	.loc_0x350:
	  lwz       r0, 0x8C(r30)
	  rlwinm    r0,r0,0,28,24
	  stw       r0, 0x8C(r30)
	  lwz       r0, 0x8C(r30)
	  ori       r0, r0, 0x20
	  stw       r0, 0x8C(r30)
	  b         .loc_0x3A0

	.loc_0x36C:
	  lwz       r0, 0x8C(r30)
	  rlwinm    r0,r0,0,28,24
	  stw       r0, 0x8C(r30)
	  lwz       r0, 0x8C(r30)
	  ori       r0, r0, 0x10
	  stw       r0, 0x8C(r30)
	  b         .loc_0x3A0

	.loc_0x388:
	  lwz       r0, 0x8C(r30)
	  rlwinm    r0,r0,0,28,24
	  stw       r0, 0x8C(r30)
	  lwz       r0, 0x8C(r30)
	  ori       r0, r0, 0x40
	  stw       r0, 0x8C(r30)

	.loc_0x3A0:
	  lbz       r0, 0x130(r31)
	  rlwinm    r0,r0,0,30,31
	  cmpwi     r0, 0x1
	  beq-      .loc_0x3E8
	  bge-      .loc_0x3C0
	  cmpwi     r0, 0
	  bge-      .loc_0x3CC
	  b         .loc_0x41C

	.loc_0x3C0:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x41C
	  b         .loc_0x404

	.loc_0x3CC:
	  lwz       r0, 0x8C(r30)
	  rlwinm    r0,r0,0,24,20
	  stw       r0, 0x8C(r30)
	  lwz       r0, 0x8C(r30)
	  ori       r0, r0, 0x200
	  stw       r0, 0x8C(r30)
	  b         .loc_0x41C

	.loc_0x3E8:
	  lwz       r0, 0x8C(r30)
	  rlwinm    r0,r0,0,24,20
	  stw       r0, 0x8C(r30)
	  lwz       r0, 0x8C(r30)
	  ori       r0, r0, 0x400
	  stw       r0, 0x8C(r30)
	  b         .loc_0x41C

	.loc_0x404:
	  lwz       r0, 0x8C(r30)
	  rlwinm    r0,r0,0,24,20
	  stw       r0, 0x8C(r30)
	  lwz       r0, 0x8C(r30)
	  ori       r0, r0, 0x100
	  stw       r0, 0x8C(r30)

	.loc_0x41C:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043D2B8
 * Size:	000070
 */
void P2JME::TRenderingProcessor::__dt(void)
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
	  beq-      .loc_0x54
	  lis       r4, 0x804F
	  subi      r0, r4, 0x3550
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x34CC
	  stw       r0, 0x0(r30)
	  bl        -0x4351FC

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x419254

	.loc_0x54:
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
 * Address:	8043D328
 * Size:	000004
 */
void P2JME::TRenderingProcessorBase::do_character((int)) { }
