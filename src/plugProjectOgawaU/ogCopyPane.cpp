#include "og/Screen/ogScreen.h"
#include "JSystem/JUtility/JUTTexture.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x8030E958
 * @note Size: 0x2F8
 */
J2DPictureEx* CopyPicture(J2DPictureEx* pic, u64 tag)
{
	ResTIMG* timg          = pic->getTIMG(0);
	JUtility::TColor white = pic->getWhite();
	JUtility::TColor black = pic->getBlack();
	u8 alpha               = pic->getAlpha();

	JGeometry::TVec2f offset;
	offset.x = pic->mBounds.getWidth();
	offset.y = pic->mBounds.getHeight();

	JGeometry::TBox2f box(0.0f, 0.0f, offset);
	J2DPicture::TCornerColor cols;
	pic->getCornerColor(cols);

	J2DPictureEx* copy = new J2DPictureEx(tag, box, timg, 0x1100000);

	if (copy) {
		copy->setBasePosition(J2DPOS_TopLeft);
		copy->place(box);
		copy->setWhite(white);
		copy->setBlack(black);

		copy->setCornerColor(cols);

		copy->setAlpha(alpha);

		JGeometry::TVec2<s16> pos[4];
		JGeometry::TVec2<s16>* p = pos;
		for (int i = 0; i < 4; i++) {
			p[i] = *pic->getTexCoord(i);
		}

		copy->setTexCoord(pos);
	}

	return copy;
}

/**
 * @note Address: 0x8030EC50
 * @note Size: 0x338
 */
J2DPictureEx* CopyPictureToPane(J2DPictureEx* pic, J2DPane* pane, f32 x, f32 y, u64 tag)
{
	ResTIMG* timg          = pic->getTIMG(0);
	JUtility::TColor white = pic->getWhite();
	JUtility::TColor black = pic->getBlack();
	u8 alpha               = pic->getAlpha();

	JGeometry::TVec2f offset(pic->mBounds.getHeight(), pic->mBounds.getWidth());

	JGeometry::TVec2f origin;
	origin.x = x - (offset.y / 2.0f);
	origin.y = y - (offset.x / 2.0f);

	JGeometry::TBox2f box(origin.x, origin.y, origin.x + offset.y, origin.y + offset.x);
	J2DPicture::TCornerColor cols;
	pic->getCornerColor(cols);

	J2DPictureEx* copy = new J2DPictureEx(tag, box, timg, 0x1100000);

	if (copy) {
		pane->appendChild(copy);
		copy->setBasePosition(J2DPOS_Center);
		copy->place(box);
		copy->setWhite(white);
		copy->setBlack(black);

		copy->setCornerColor(cols);

		copy->setAlpha(alpha);

		JGeometry::TVec2<s16> pos[4];
		JGeometry::TVec2<s16>* p = pos;
		for (int i = 0; i < 4; i++) {
			p[i] = *pic->getTexCoord(i);
		}

		copy->setTexCoord(pos);
	}

	return copy;
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stmw      r19, 0x7C(r1)
	  lwz       r12, 0x0(r3)
	  mr        r26, r4
	  fmr       f30, f1
	  mr        r25, r3
	  lwz       r12, 0x120(r12)
	  fmr       f31, f2
	  mr        r28, r5
	  mr        r27, r6
	  li        r4, 0
	  mtctr     r12
	  bctrl
	  mr        r4, r25
	  lwz       r31, 0x20(r3)
	  lwz       r12, 0x0(r25)
	  addi      r3, r1, 0x24
	  lwz       r12, 0x138(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r25
	  lwz       r0, 0x24(r1)
	  lwz       r12, 0x0(r25)
	  addi      r3, r1, 0x20
	  stw       r0, 0x2C(r1)
	  lwz       r12, 0x134(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x28(r25)
	  li        r0, -0x1
	  lfs       f0, 0x20(r25)
	  li        r3, 0x1A8
	  lfs       f2, 0x2C(r25)
	  lfs       f1, 0x24(r25)
	  fsubs     f3, f3, f0
	  lfs       f0, -0xC24(r2)
	  fsubs     f2, f2, f1
	  lwz       r19, 0x20(r1)
	  fnmsubs   f4, f3, f0, f30
	  lbz       r30, 0xB2(r25)
	  stw       r0, 0x50(r1)
	  fnmsubs   f5, f2, f0, f31
	  fadds     f1, f4, f3
	  stfs      f4, 0x60(r1)
	  fadds     f0, f5, f2
	  stfs      f5, 0x64(r1)
	  stfs      f1, 0x68(r1)
	  stfs      f0, 0x6C(r1)
	  lbz       r20, 0x150(r25)
	  lbz       r21, 0x151(r25)
	  lbz       r22, 0x152(r25)
	  lbz       r23, 0x153(r25)
	  stw       r0, 0x54(r1)
	  lbz       r24, 0x154(r25)
	  lbz       r29, 0x155(r25)
	  lbz       r12, 0x156(r25)
	  lbz       r11, 0x157(r25)
	  stw       r0, 0x58(r1)
	  lbz       r10, 0x158(r25)
	  lbz       r9, 0x159(r25)
	  lbz       r8, 0x15A(r25)
	  lbz       r7, 0x15B(r25)
	  stw       r0, 0x5C(r1)
	  lbz       r6, 0x15C(r25)
	  lbz       r5, 0x15D(r25)
	  lbz       r4, 0x15E(r25)
	  lbz       r0, 0x15F(r25)
	  stw       r19, 0x28(r1)
	  stb       r20, 0x50(r1)
	  stb       r21, 0x51(r1)
	  stb       r22, 0x52(r1)
	  stb       r23, 0x53(r1)
	  stb       r24, 0x54(r1)
	  stb       r29, 0x55(r1)
	  stb       r12, 0x56(r1)
	  stb       r11, 0x57(r1)
	  stb       r10, 0x58(r1)
	  stb       r9, 0x59(r1)
	  stb       r8, 0x5A(r1)
	  stb       r7, 0x5B(r1)
	  stb       r6, 0x5C(r1)
	  stb       r5, 0x5D(r1)
	  stb       r4, 0x5E(r1)
	  stb       r0, 0x5F(r1)
	  bl        -0x2EAF14
	  mr.       r29, r3
	  beq-      .loc_0x190
	  mr        r6, r27
	  mr        r5, r28
	  mr        r8, r31
	  addi      r7, r1, 0x60
	  lis       r9, 0x110
	  bl        -0x2B9DAC
	  mr        r29, r3

	.loc_0x190:
	  cmplwi    r29, 0
	  beq-      .loc_0x310
	  mr        r3, r26
	  mr        r4, r29
	  bl        -0x2D772C
	  mr        r3, r29
	  li        r4, 0x4
	  bl        -0x2D6140
	  mr        r3, r29
	  addi      r4, r1, 0x60
	  bl        -0x2D6ED0
	  lwz       r0, 0x2C(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x1C
	  stw       r0, 0x1C(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x12C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x28(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x18
	  stw       r0, 0x18(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  lwz       r10, 0x50(r1)
	  mr        r3, r29
	  lwz       r9, 0x54(r1)
	  mr        r4, r30
	  stw       r10, 0x8(r1)
	  lwz       r8, 0x58(r1)
	  lbz       r5, 0x8(r1)
	  stw       r9, 0xC(r1)
	  lbz       r0, 0x9(r1)
	  stb       r5, 0x150(r29)
	  lbz       r5, 0xA(r1)
	  stb       r0, 0x151(r29)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0x152(r29)
	  lbz       r5, 0xC(r1)
	  stb       r0, 0x153(r29)
	  lbz       r0, 0xD(r1)
	  stb       r5, 0x154(r29)
	  lbz       r5, 0xE(r1)
	  stb       r0, 0x155(r29)
	  lbz       r0, 0xF(r1)
	  stw       r8, 0x10(r1)
	  lwz       r7, 0x5C(r1)
	  stb       r5, 0x156(r29)
	  lbz       r5, 0x10(r1)
	  stb       r0, 0x157(r29)
	  lbz       r0, 0x11(r1)
	  stb       r5, 0x158(r29)
	  lbz       r6, 0x12(r1)
	  stw       r7, 0x14(r1)
	  lbz       r5, 0x13(r1)
	  stb       r0, 0x159(r29)
	  lbz       r0, 0x14(r1)
	  stb       r6, 0x15A(r29)
	  lbz       r6, 0x15(r1)
	  stb       r5, 0x15B(r29)
	  lbz       r5, 0x16(r1)
	  stb       r0, 0x15C(r29)
	  lbz       r0, 0x17(r1)
	  stb       r6, 0x15D(r29)
	  stb       r5, 0x15E(r29)
	  stb       r0, 0x15F(r29)
	  lwz       r12, 0x0(r29)
	  stw       r10, 0x30(r1)
	  lwz       r12, 0x24(r12)
	  stw       r9, 0x34(r1)
	  stw       r8, 0x38(r1)
	  stw       r7, 0x3C(r1)
	  mtctr     r12
	  bctrl
	  lha       r0, 0x112(r25)
	  addi      r4, r1, 0x40
	  mr        r3, r29
	  sth       r0, 0x40(r1)
	  lha       r0, 0x114(r25)
	  sth       r0, 0x42(r1)
	  lha       r0, 0x116(r25)
	  sth       r0, 0x44(r1)
	  lha       r0, 0x118(r25)
	  sth       r0, 0x46(r1)
	  lha       r0, 0x11A(r25)
	  sth       r0, 0x48(r1)
	  lha       r0, 0x11C(r25)
	  sth       r0, 0x4A(r1)
	  lha       r0, 0x11E(r25)
	  sth       r0, 0x4C(r1)
	  lha       r0, 0x120(r25)
	  sth       r0, 0x4E(r1)
	  bl        -0x2D2138

	.loc_0x310:
	  mr        r3, r29
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  lmw       r19, 0x7C(r1)
	  lwz       r0, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

} // namespace Screen
} // namespace og
