#include "types.h"

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	80309614
	 * Size:	000098
	 */
	CallBack_Message::CallBack_Message(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  bl        0x107D68
		  lis       r3, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r3, 0x804E
		  stw       r0, 0x0(r31)
		  li        r5, 0
		  addi      r4, r4, 0x7F2C
		  subi      r0, r3, 0x7E78
		  stw       r5, 0x18(r31)
		  mr        r3, r31
		  lfs       f1, -0xCF0(r2)
		  stw       r4, 0x0(r31)
		  lfs       f0, -0xCEC(r2)
		  stw       r0, 0x0(r31)
		  lwz       r4, -0x6840(r13)
		  lwz       r0, 0x18(r4)
		  stw       r0, 0x1C(r31)
		  stw       r5, 0x24(r31)
		  stw       r5, 0x20(r31)
		  stw       r5, 0x28(r31)
		  stw       r5, 0x2C(r31)
		  stfs      f1, 0x30(r31)
		  stfs      f1, 0x34(r31)
		  stfs      f0, 0x44(r31)
		  stfs      f0, 0x40(r31)
		  stfs      f0, 0x3C(r31)
		  stfs      f0, 0x38(r31)
		  lwz       r31, 0xC(r1)
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000134
	 */
	void CallBack_Message::drawInfo(J2DGrafContext&)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	803096AC
	 * Size:	0001B4
	 */
	void CallBack_Message::draw(Graphics&, J2DGrafContext&)
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
		  stw       r29, 0x44(r1)
		  mr        r29, r5
		  lwz       r3, 0x18(r3)
		  bl        0x20C
		  rlwinm.   r0,r3,0,24,31
		  beq-      .loc_0x198
		  lwz       r3, 0x18(r30)
		  lwz       r0, 0x20(r30)
		  lwz       r4, 0x18(r3)
		  lwz       r5, 0x1C(r3)
		  lwz       r3, 0x24(r30)
		  xor       r0, r4, r0
		  xor       r3, r5, r3
		  or.       r0, r3, r0
		  beq-      .loc_0x74
		  stw       r5, 0x24(r30)
		  addi      r5, r30, 0x28
		  addi      r6, r30, 0x2C
		  stw       r4, 0x20(r30)
		  lwz       r3, 0x20(r30)
		  lwz       r4, 0x24(r30)
		  bl        0x133C10

		.loc_0x74:
		  lwz       r4, 0x18(r30)
		  addi      r3, r29, 0x80
		  addi      r5, r1, 0x8
		  addi      r4, r4, 0x80
		  bl        -0x21F430
		  addi      r3, r1, 0x8
		  li        r4, 0
		  bl        -0x2201C4
		  lwz       r5, 0x18(r30)
		  lis       r3, 0x5555
		  lfs       f5, -0xCF0(r2)
		  addi      r0, r3, 0x5556
		  lbz       r4, 0xB7(r5)
		  lfs       f3, 0x28(r5)
		  fmr       f4, f5
		  mulhw     r3, r0, r4
		  lfs       f2, 0x20(r5)
		  lfs       f1, 0x2C(r5)
		  lfs       f0, 0x24(r5)
		  fsubs     f2, f3, f2
		  fsubs     f1, f1, f0
		  rlwinm    r0,r3,1,31,31
		  add       r0, r3, r0
		  mulli     r0, r0, 0x3
		  sub       r0, r4, r0
		  cmpwi     r0, 0x1
		  bne-      .loc_0xEC
		  lfs       f0, -0xCE8(r2)
		  fmuls     f5, f2, f0
		  b         .loc_0xF8

		.loc_0xEC:
		  cmpwi     r0, 0x2
		  bne-      .loc_0xF8
		  fmr       f5, f2

		.loc_0xF8:
		  lis       r3, 0x5555
		  addi      r0, r3, 0x5556
		  mulhw     r3, r0, r4
		  rlwinm    r0,r3,1,31,31
		  add       r0, r3, r0
		  cmpwi     r0, 0x1
		  bne-      .loc_0x120
		  lfs       f0, -0xCE8(r2)
		  fmuls     f4, f1, f0
		  b         .loc_0x12C

		.loc_0x120:
		  cmpwi     r0, 0x2
		  bne-      .loc_0x12C
		  fmr       f4, f1

		.loc_0x12C:
		  stfs      f5, 0x30(r30)
		  stfs      f4, 0x34(r30)
		  lfs       f0, 0x30(r30)
		  lwz       r3, 0x1C(r30)
		  fneg      f0, f0
		  lwz       r3, 0x0(r3)
		  stfs      f0, 0x54(r3)
		  lfs       f0, 0x34(r30)
		  fneg      f0, f0
		  stfs      f0, 0x58(r3)
		  lwz       r4, 0x18(r30)
		  bl        0x133668
		  lwz       r3, 0x1C(r30)
		  mr        r4, r31
		  lfs       f3, 0x44(r30)
		  lfs       f2, 0x40(r30)
		  lfs       f1, 0x3C(r30)
		  lwz       r3, 0x0(r3)
		  lfs       f0, 0x38(r30)
		  stfs      f0, 0x7C(r3)
		  stfs      f1, 0x80(r3)
		  stfs      f2, 0x84(r3)
		  stfs      f3, 0x88(r3)
		  lwz       r3, 0x1C(r30)
		  lwz       r5, 0x28(r30)
		  lwz       r6, 0x2C(r30)
		  bl        0x13441C

		.loc_0x198:
		  lwz       r0, 0x54(r1)
		  lwz       r31, 0x4C(r1)
		  lwz       r30, 0x48(r1)
		  lwz       r29, 0x44(r1)
		  mtlr      r0
		  addi      r1, r1, 0x50
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0000E4
	 */
	CallBack_MessageAndShadow::CallBack_MessageAndShadow(float, float, J2DPane*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80309860
	 * Size:	000080
	 */
	CallBack_Message::~CallBack_Message(void)
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
		  lis       r4, 0x804E
		  subi      r0, r4, 0x7E78
		  stw       r0, 0x0(r30)
		  beq-      .loc_0x54
		  lis       r4, 0x804D
		  addi      r0, r4, 0x7F2C
		  stw       r0, 0x0(r30)
		  beq-      .loc_0x54
		  lis       r5, 0x804D
		  li        r4, 0
		  addi      r0, r5, 0x7B0C
		  stw       r0, 0x0(r30)
		  bl        0x107CD8

		.loc_0x54:
		  extsh.    r0, r31
		  ble-      .loc_0x64
		  mr        r3, r30
		  bl        -0x2E580C

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
	 * Address:	........
	 * Size:	0001DC
	 */
	void CallBack_MessageAndShadow::draw(Graphics&, J2DGrafContext&)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0003C4
	 */
	void MessageSetInfoShadow(J2DPane*, P2JME::TRenderingProcessor*, J2DPane*)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	803098E0
	 * Size:	000194
	 */
	void checkVisibleGlb(J2DPane*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  lbz       r0, 0xB0(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x17C
		  bl        -0x2D081C
		  cmplwi    r3, 0
		  beq-      .loc_0x174
		  lbz       r0, 0xB0(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x16C
		  bl        -0x2D0834
		  cmplwi    r3, 0
		  beq-      .loc_0x164
		  lbz       r0, 0xB0(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x15C
		  bl        -0x2D084C
		  cmplwi    r3, 0
		  beq-      .loc_0x154
		  lbz       r0, 0xB0(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x14C
		  bl        -0x2D0864
		  cmplwi    r3, 0
		  beq-      .loc_0x144
		  lbz       r0, 0xB0(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x13C
		  bl        -0x2D087C
		  cmplwi    r3, 0
		  beq-      .loc_0x134
		  lbz       r0, 0xB0(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x12C
		  bl        -0x2D0894
		  cmplwi    r3, 0
		  beq-      .loc_0x124
		  lbz       r0, 0xB0(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x11C
		  bl        -0x2D08AC
		  cmplwi    r3, 0
		  beq-      .loc_0x114
		  lbz       r0, 0xB0(r3)
		  cmplwi    r0, 0
		  beq-      .loc_0x10C
		  bl        -0x2D08C4
		  mr.       r31, r3
		  beq-      .loc_0x104
		  bl        .loc_0x194
		  rlwinm.   r0,r3,0,24,31
		  beq-      .loc_0xFC
		  mr        r3, r31
		  bl        -0x2D08E0
		  cmplwi    r3, 0
		  beq-      .loc_0xF4
		  bl        .loc_0x0
		  b         .loc_0x180

		.loc_0xF4:
		  li        r3, 0x1
		  b         .loc_0x180

		.loc_0xFC:
		  li        r3, 0
		  b         .loc_0x180

		.loc_0x104:
		  li        r3, 0x1
		  b         .loc_0x180

		.loc_0x10C:
		  li        r3, 0
		  b         .loc_0x180

		.loc_0x114:
		  li        r3, 0x1
		  b         .loc_0x180

		.loc_0x11C:
		  li        r3, 0
		  b         .loc_0x180

		.loc_0x124:
		  li        r3, 0x1
		  b         .loc_0x180

		.loc_0x12C:
		  li        r3, 0
		  b         .loc_0x180

		.loc_0x134:
		  li        r3, 0x1
		  b         .loc_0x180

		.loc_0x13C:
		  li        r3, 0
		  b         .loc_0x180

		.loc_0x144:
		  li        r3, 0x1
		  b         .loc_0x180

		.loc_0x14C:
		  li        r3, 0
		  b         .loc_0x180

		.loc_0x154:
		  li        r3, 0x1
		  b         .loc_0x180

		.loc_0x15C:
		  li        r3, 0
		  b         .loc_0x180

		.loc_0x164:
		  li        r3, 0x1
		  b         .loc_0x180

		.loc_0x16C:
		  li        r3, 0
		  b         .loc_0x180

		.loc_0x174:
		  li        r3, 0x1
		  b         .loc_0x180

		.loc_0x17C:
		  li        r3, 0

		.loc_0x180:
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr

		.loc_0x194:
		*/
	}

} // namespace Screen

} // namespace og

/*
 * --INFO--
 * Address:	80309A74
 * Size:	000008
 */
void J2DPane::isVisible() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0xB0(r3)
	  blr
	*/
}

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	80309A7C
	 * Size:	00031C
	 */
	void setCallBackMessageSub(P2DScreen::Mgr*, J2DPane*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x30(r1)
		  mflr      r0
		  stw       r0, 0x34(r1)
		  stmw      r25, 0x14(r1)
		  mr        r28, r4
		  mr        r31, r3
		  mr        r3, r28
		  lwz       r12, 0x0(r28)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  rlwinm    r0,r3,0,16,31
		  cmplwi    r0, 0x13
		  bne-      .loc_0xFC
		  lwz       r0, 0x18(r28)
		  li        r3, 0
		  lwz       r4, 0x1C(r28)
		  xor       r0, r0, r3
		  xor       r3, r4, r3
		  or.       r0, r3, r0
		  beq-      .loc_0xFC
		  lwz       r26, 0x10(r28)
		  li        r3, 0x48
		  lwz       r27, 0x14(r28)
		  bl        -0x2E5C38
		  mr.       r29, r3
		  beq-      .loc_0xD8
		  bl        0x1078A8
		  lis       r3, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r3, 0x804E
		  stw       r0, 0x0(r29)
		  li        r5, 0
		  addi      r4, r4, 0x7F2C
		  subi      r0, r3, 0x7E78
		  stw       r5, 0x18(r29)
		  lfs       f1, -0xCF0(r2)
		  stw       r4, 0x0(r29)
		  lfs       f0, -0xCEC(r2)
		  stw       r0, 0x0(r29)
		  lwz       r3, -0x6840(r13)
		  lwz       r0, 0x18(r3)
		  stw       r0, 0x1C(r29)
		  stw       r5, 0x24(r29)
		  stw       r5, 0x20(r29)
		  stw       r5, 0x28(r29)
		  stw       r5, 0x2C(r29)
		  stfs      f1, 0x30(r29)
		  stfs      f1, 0x34(r29)
		  stfs      f0, 0x44(r29)
		  stfs      f0, 0x40(r29)
		  stfs      f0, 0x3C(r29)
		  stfs      f0, 0x38(r29)

		.loc_0xD8:
		  mr        r3, r31
		  mr        r6, r27
		  mr        r5, r26
		  mr        r7, r29
		  bl        0x12AFC0
		  mr        r3, r28
		  subi      r4, r2, 0xCE4
		  crclr     6, 0x6
		  bl        -0x2C7C00

		.loc_0xFC:
		  lwz       r30, 0xDC(r28)
		  cmplwi    r30, 0
		  beq-      .loc_0x300
		  subi      r30, r30, 0xC
		  b         .loc_0x300

		.loc_0x110:
		  lwz       r26, 0xC(r30)
		  mr        r3, r26
		  lwz       r12, 0x0(r26)
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  rlwinm    r0,r3,0,16,31
		  cmplwi    r0, 0x13
		  bne-      .loc_0x1DC
		  lwz       r0, 0x18(r26)
		  li        r3, 0
		  lwz       r4, 0x1C(r26)
		  xor       r0, r0, r3
		  xor       r3, r4, r3
		  or.       r0, r3, r0
		  beq-      .loc_0x1DC
		  lwz       r27, 0x10(r26)
		  li        r3, 0x48
		  lwz       r29, 0x14(r26)
		  bl        -0x2E5D34
		  mr.       r28, r3
		  beq-      .loc_0x1B8
		  bl        0x1CC
		  lis       r3, 0x804E
		  subi      r0, r3, 0x7E78
		  stw       r0, 0x0(r28)
		  lwz       r3, -0x6840(r13)
		  bl        0x1B0
		  stw       r3, 0x1C(r28)
		  li        r0, 0
		  lfs       f1, -0xCF0(r2)
		  stw       r0, 0x24(r28)
		  lfs       f0, -0xCEC(r2)
		  stw       r0, 0x20(r28)
		  stw       r0, 0x28(r28)
		  stw       r0, 0x2C(r28)
		  stfs      f1, 0x30(r28)
		  stfs      f1, 0x34(r28)
		  stfs      f0, 0x44(r28)
		  stfs      f0, 0x40(r28)
		  stfs      f0, 0x3C(r28)
		  stfs      f0, 0x38(r28)

		.loc_0x1B8:
		  mr        r3, r31
		  mr        r6, r29
		  mr        r5, r27
		  mr        r7, r28
		  bl        0x12AEE0
		  mr        r3, r26
		  subi      r4, r2, 0xCE4
		  crclr     6, 0x6
		  bl        -0x2C7CE0

		.loc_0x1DC:
		  addi      r29, r26, 0xDC
		  mr        r3, r29
		  bl        -0x2D1338
		  mr        r28, r3
		  b         .loc_0x2E0

		.loc_0x1F0:
		  mr        r3, r28
		  bl        -0x2D1334
		  lwz       r12, 0x0(r3)
		  mr        r25, r3
		  lwz       r12, 0xC(r12)
		  mtctr     r12
		  bctrl
		  rlwinm    r0,r3,0,16,31
		  cmplwi    r0, 0x13
		  bne-      .loc_0x27C
		  mr        r3, r25
		  bl        .loc_0x31C
		  li        r0, 0
		  xor       r4, r4, r0
		  xor       r0, r3, r0
		  or.       r0, r4, r0
		  beq-      .loc_0x27C
		  mr        r3, r25
		  bl        -0x67B8
		  mr        r27, r3
		  mr        r26, r4
		  li        r3, 0x48
		  bl        -0x2E5E20
		  mr.       r7, r3
		  beq-      .loc_0x25C
		  bl        -0x6BC
		  mr        r7, r3

		.loc_0x25C:
		  mr        r3, r31
		  mr        r6, r26
		  mr        r5, r27
		  bl        0x12AE40
		  mr        r3, r25
		  subi      r4, r2, 0xCE4
		  crclr     6, 0x6
		  bl        -0x2C7D80

		.loc_0x27C:
		  mr        r3, r25
		  bl        -0x6808
		  mr        r27, r3
		  bl        -0x2D13DC
		  mr        r4, r3
		  addi      r3, r1, 0x8
		  bl        -0x2D13FC
		  b         .loc_0x2B8

		.loc_0x29C:
		  addi      r3, r1, 0x8
		  bl        -0x6834
		  mr        r4, r3
		  mr        r3, r31
		  bl        .loc_0x0
		  addi      r3, r1, 0x8
		  bl        -0x2D1438

		.loc_0x2B8:
		  mr        r3, r27
		  bl        -0x2D1448
		  mr        r4, r3
		  addi      r3, r1, 0x8
		  bl        -0x2D146C
		  rlwinm.   r0,r3,0,24,31
		  bne+      .loc_0x29C
		  mr        r3, r28
		  bl        -0x2D1490
		  mr        r28, r3

		.loc_0x2E0:
		  mr        r3, r29
		  bl        -0x2D1470
		  cmplw     r28, r3
		  bne+      .loc_0x1F0
		  lwz       r30, 0x18(r30)
		  cmplwi    r30, 0
		  beq-      .loc_0x300
		  subi      r30, r30, 0xC

		.loc_0x300:
		  cmplwi    r30, 0
		  bne+      .loc_0x110
		  lmw       r25, 0x14(r1)
		  lwz       r0, 0x34(r1)
		  mtlr      r0
		  addi      r1, r1, 0x30
		  blr

		.loc_0x31C:
		*/
	}

} // namespace Screen

} // namespace og

/*
 * --INFO--
 * Address:	80309D98
 * Size:	000010
 */
void J2DPane::getUserInfo() const
{
	/*
	.loc_0x0:
	  mr        r4, r3
	  lwz       r3, 0x18(r3)
	  lwz       r4, 0x1C(r4)
	  blr
	*/
}

namespace og {

/*
 * --INFO--
 * Address:	80309DA8
 * Size:	000008
 */
void Lib2D::getMsgPtr(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80309DB0
 * Size:	000050
 */
P2DScreen::CallBackNode::CallBackNode(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x1075CC
	  lis       r4, 0x804D
	  lis       r3, 0x804D
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x7F2C
	  mr        r3, r31
	  stw       r4, 0x18(r31)
	  stw       r0, 0x0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Screen {

	/*
	 * --INFO--
	 * Address:	80309E00
	 * Size:	000024
	 */
	void setCallBackMessage(P2DScreen::Mgr*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  mr        r4, r3
		  stw       r0, 0x14(r1)
		  bl        -0x394
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0003DC
	 */
	void setCallBackMessageAndShadowSub(P2DScreen::Mgr*, J2DPane*, float, float,
	                                    J2DPane*, unsigned long long,
	                                    unsigned long long)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000038
	 */
	void setCallBackMessageAndShadow(P2DScreen::Mgr*, float, float, J2DPane*,
	                                 unsigned long long, unsigned long long)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000090
	 */
	CallBack_MessageAndShadow::~CallBack_MessageAndShadow(void)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	80309E24
	 * Size:	000004
	 */
	void CallBack_Message::update(void) { }
} // namespace Screen
} // namespace og
