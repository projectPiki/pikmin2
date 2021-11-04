#include "types.h"

namespace P2JME {

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
Caption::TRenderingProcessor::TRenderingProcessor(JMessage::TReference*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80450FC0
 * Size:	00000C
 */
void Caption::TRenderingProcessor::doGetDrawInfo(P2JME::Window::DrawInfo*)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x27D4(r2)
	  stfs      f0, 0x20(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80450FCC
 * Size:	0001EC
 */
void Caption::TRenderingProcessor::doDrawCommon(float, float, Matrixf*,
                                                Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  stw       r28, 0x60(r1)
	  mr        r28, r3
	  mr        r29, r4
	  lfs       f3, 0x27D8(r2)
	  fmr       f29, f1
	  lfs       f0, 0x144(r3)
	  fmr       f30, f2
	  lwz       r4, 0x40(r3)
	  mr        r30, r5
	  fmuls     f31, f3, f0
	  addi      r3, r28, 0x110
	  bl        -0x11DF0
	  mr.       r31, r3
	  bne-      .loc_0x94
	  lwz       r4, 0x40(r28)
	  addi      r3, r28, 0x110
	  bl        -0x11DD4
	  mr        r0, r3
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  mr        r31, r0
	  mr        r4, r31
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  cmplwi    r31, 0
	  beq-      .loc_0xCC
	  lfs       f0, 0x27DC(r2)
	  addi      r3, r1, 0x20
	  stfs      f29, 0x14(r1)
	  addi      r4, r1, 0x14
	  stfs      f30, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x28840
	  lfs       f1, 0x1C(r31)
	  lfs       f0, 0x20(r31)
	  fdivs     f0, f1, f0
	  fmuls     f31, f31, f0
	  b         .loc_0xE8

	.loc_0xCC:
	  lfs       f0, 0x27DC(r2)
	  addi      r3, r1, 0x20
	  stfs      f29, 0x8(r1)
	  addi      r4, r1, 0x8
	  stfs      f30, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x28870

	.loc_0xE8:
	  cmplwi    r30, 0
	  beq-      .loc_0x13C
	  mr        r4, r30
	  addi      r3, r1, 0x20
	  bl        -0x366DF8
	  lfs       f2, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, 0x27E0(r2)
	  mr        r5, r30
	  lfs       f3, 0x1C(r30)
	  lfs       f0, 0x27E4(r2)
	  fadds     f2, f2, f1
	  fadds     f3, f3, f0
	  stfs      f2, 0xC(r30)
	  stfs      f3, 0x1C(r30)
	  lwz       r3, 0x44(r28)
	  bl        -0x366DF4
	  lwz       r3, 0x48(r28)
	  mr        r4, r30
	  mr        r5, r30
	  bl        -0x366E04

	.loc_0x13C:
	  addi      r4, r1, 0x20
	  lwz       r3, 0x44(r28)
	  mr        r5, r4
	  bl        -0x366E14
	  addi      r4, r1, 0x20
	  lwz       r3, 0x48(r28)
	  mr        r5, r4
	  bl        -0x366E24
	  cmplwi    r29, 0
	  beq-      .loc_0x174
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  bl        -0x366E6C
	  b         .loc_0x180

	.loc_0x174:
	  addi      r3, r1, 0x20
	  li        r4, 0
	  bl        -0x367BD0

	.loc_0x180:
	  lfs       f0, 0x27DC(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x19C
	  lfs       f0, 0x27E8(r2)
	  fadds     f0, f0, f31
	  b         .loc_0x1A4

	.loc_0x19C:
	  lfs       f0, 0x27E8(r2)
	  fsubs     f0, f31, f0

	.loc_0x1A4:
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r3,r0,0,24,31
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804511B8
 * Size:	000054
 */
Caption::TControl::TControl(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x110E0
	  lis       r3, 0x804F
	  li        r4, 0
	  subi      r3, r3, 0x2AD0
	  li        r0, 0x6
	  stw       r3, 0x0(r31)
	  mr        r3, r31
	  stw       r4, 0x5C(r31)
	  stw       r4, 0x60(r31)
	  stw       r4, 0x64(r31)
	  stw       r0, 0x68(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045120C
 * Size:	0000E8
 */
void Caption::TControl::onInit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r4, -0x6428(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x38
	  lwz       r4, 0x18(r4)
	  bl        -0x18764
	  lwz       r4, -0x6428(r13)
	  mr        r3, r31
	  lwz       r4, 0x18(r4)
	  bl        -0x18708

	.loc_0x38:
	  mr        r3, r31
	  li        r4, 0x100
	  bl        -0x11110
	  lfs       f0, 0x27EC(r2)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  stfs      f0, 0x50(r31)
	  bl        -0x182E8
	  bl        -0x2E044
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  li        r0, 0
	  lfd       f2, 0x27F8(r2)
	  li        r3, 0x1
	  stw       r4, 0xC(r1)
	  lwz       r4, 0x40(r31)
	  lfd       f1, 0x8(r1)
	  lfs       f0, 0x27F0(r2)
	  fsubs     f1, f1, f2
	  stfs      f1, 0x38(r4)
	  lwz       r4, 0x40(r31)
	  stfs      f0, 0x3C(r4)
	  lwz       r5, 0x40(r31)
	  lwz       r4, 0x8C(r5)
	  rlwinm    r4,r4,0,28,24
	  stw       r4, 0x8C(r5)
	  lwz       r4, 0x8C(r5)
	  ori       r4, r4, 0x20
	  stw       r4, 0x8C(r5)
	  lwz       r5, 0x40(r31)
	  lwz       r4, 0x8C(r5)
	  rlwinm    r4,r4,0,24,20
	  stw       r4, 0x8C(r5)
	  lwz       r4, 0x8C(r5)
	  ori       r4, r4, 0x200
	  stw       r4, 0x8C(r5)
	  stw       r0, 0x5C(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804512F4
 * Size:	000034
 */
void Caption::TControl::reset(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x10F44
	  li        r0, 0
	  stw       r0, 0x5C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80451328
 * Size:	000128
 */
void Caption::TControl::updateSetFrame(long)
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
	  lwz       r0, 0x5C(r3)
	  li        r3, 0
	  cmpwi     r0, 0
	  bne-      .loc_0x54
	  lwz       r0, 0x60(r30)
	  cmpw      r31, r0
	  blt-      .loc_0x54
	  lwz       r4, 0x64(r30)
	  lwz       r0, 0x68(r30)
	  add       r0, r4, r0
	  cmpw      r31, r0
	  bgt-      .loc_0x54
	  li        r0, 0x1
	  stw       r0, 0x5C(r30)

	.loc_0x54:
	  lwz       r0, 0x5C(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0x110
	  lwz       r0, 0x60(r30)
	  cmpw      r31, r0
	  blt-      .loc_0x80
	  lwz       r4, 0x64(r30)
	  lwz       r0, 0x68(r30)
	  add       r0, r4, r0
	  cmpw      r31, r0
	  ble-      .loc_0x8C

	.loc_0x80:
	  li        r0, 0
	  stw       r0, 0x5C(r30)
	  b         .loc_0x110

	.loc_0x8C:
	  mr        r3, r30
	  bl        -0x1856C
	  lwz       r0, 0x64(r30)
	  cmpw      r31, r0
	  ble-      .loc_0xFC
	  li        r0, 0x2
	  lis       r5, 0x4330
	  stw       r0, 0x5C(r30)
	  lfd       f2, 0x2800(r2)
	  lwz       r4, 0x64(r30)
	  lwz       r0, 0x68(r30)
	  sub       r4, r31, r4
	  stw       r5, 0x8(r1)
	  xoris     r4, r4, 0x8000
	  xoris     r0, r0, 0x8000
	  stw       r4, 0xC(r1)
	  lfs       f3, 0x27D0(r2)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f1, f0, f2
	  lwz       r4, 0x40(r30)
	  stw       r5, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f1, f0
	  fsubs     f0, f3, f0
	  stfs      f0, 0x144(r4)
	  b         .loc_0x110

	.loc_0xFC:
	  lfs       f0, 0x27D0(r2)
	  li        r0, 0x1
	  lwz       r4, 0x40(r30)
	  stfs      f0, 0x144(r4)
	  stw       r0, 0x5C(r30)

	.loc_0x110:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80451450
 * Size:	000084
 */
void Caption::TControl::draw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  lwz       r0, 0x5C(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x6C
	  lfs       f1, 0x27DC(r2)
	  addi      r3, r1, 0x14
	  lfs       f0, 0x2808(r2)
	  addi      r4, r1, 0x8
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  bl        -0x28C54
	  addi      r3, r31, 0x190
	  lwz       r12, 0x190(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  addi      r4, r1, 0x14
	  addi      r5, r31, 0x210
	  bl        -0x185BC

	.loc_0x6C:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804514D4
 * Size:	000058
 */
void Caption::TControl::start(char*, long, long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  stw       r30, 0x60(r29)
	  stw       r31, 0x64(r29)
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
 * Address:	8045152C
 * Size:	000088
 */
void Caption::TControl::createSequenceProcessor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x70
	  bl        -0x42D6A4
	  mr.       r31, r3
	  beq-      .loc_0x6C
	  lwz       r0, 0x38(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4780
	  li        r4, 0x79
	  subi      r5, r5, 0x4770
	  crclr     6, 0x6
	  bl        -0x426F38

	.loc_0x50:
	  lwz       r4, 0x38(r30)
	  mr        r3, r31
	  mr        r5, r30
	  bl        -0x122C0
	  lis       r3, 0x804F
	  subi      r0, r3, 0x2A88
	  stw       r0, 0x0(r31)

	.loc_0x6C:
	  stw       r31, 0x3C(r30)
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
 * Address:	804515B4
 * Size:	00008C
 */
void Caption::TControl::createRenderingProcessor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x148
	  bl        -0x42D72C
	  mr.       r31, r3
	  beq-      .loc_0x70
	  lwz       r0, 0x38(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4780
	  li        r4, 0x79
	  subi      r5, r5, 0x4770
	  crclr     6, 0x6
	  bl        -0x426FC0

	.loc_0x50:
	  lwz       r4, 0x38(r30)
	  mr        r3, r31
	  bl        -0x12110
	  lis       r3, 0x804F
	  lfs       f0, 0x27D0(r2)
	  subi      r0, r3, 0x2A10
	  stw       r0, 0x0(r31)
	  stfs      f0, 0x144(r31)

	.loc_0x70:
	  stw       r31, 0x40(r30)
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
 * Address:	80451640
 * Size:	000080
 */
Caption::TSequenceProcessor::~TSequenceProcessor(void)
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
	  lis       r4, 0x804F
	  subi      r0, r4, 0x2A88
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804F
	  subi      r0, r4, 0x32CC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x3708
	  stw       r0, 0x0(r30)
	  bl        -0x449E68

	.loc_0x54:
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x42D5EC

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
 * Address:	804516C0
 * Size:	000008
 */
u32 Caption::TSequenceProcessor::do_isReady(void) { return 0x1; }

/*
 * --INFO--
 * Address:	804516C8
 * Size:	000004
 */
void Caption::TSequenceProcessor::doResetAbtnWaitSE(void) { }

/*
 * --INFO--
 * Address:	804516CC
 * Size:	000004
 */
void Caption::TSequenceProcessor::doCharacterSE(int) { }

/*
 * --INFO--
 * Address:	804516D0
 * Size:	000004
 */
void Caption::TSequenceProcessor::doCharacterSEStart(void) { }

/*
 * --INFO--
 * Address:	804516D4
 * Size:	000004
 */
void Caption::TSequenceProcessor::doCharacterSEEnd(void) { }

/*
 * --INFO--
 * Address:	804516D8
 * Size:	0000B8
 */
Caption::TRenderingProcessor::~TRenderingProcessor(void)
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
	  beq-      .loc_0x9C
	  lis       r3, 0x804F
	  subi      r0, r3, 0x2A10
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x8C
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x110
	  subi      r0, r3, 0x335C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  addi      r3, r30, 0x128
	  li        r4, -0x1
	  bl        -0x4019C
	  addi      r3, r30, 0x110
	  li        r4, -0x1
	  bl        -0x401A8

	.loc_0x5C:
	  cmplwi    r30, 0
	  beq-      .loc_0x8C
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3550
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x8C
	  lis       r4, 0x804F
	  mr        r3, r30
	  subi      r0, r4, 0x34CC
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        -0x449664

	.loc_0x8C:
	  extsh.    r0, r31
	  ble-      .loc_0x9C
	  mr        r3, r30
	  bl        -0x42D6BC

	.loc_0x9C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
} // namespace P2JME
