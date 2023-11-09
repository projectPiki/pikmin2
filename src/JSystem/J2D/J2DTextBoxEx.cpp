#include "JSystem/J2D/J2DPane.h"
#include "JSystem/J2D/J2DPrint.h"
#include "types.h"

/*
 * --INFO--
 * Address:	800596A8
 * Size:	000330
 */
J2DTextBoxEx::J2DTextBoxEx(J2DPane* parent, JSURandomInputStream* input, u32 flags, J2DMaterial* materials)
{
	J2DTextBoxBlock info;

	mAnmVisibility = nullptr;

	int startPos = input->getPosition();

	J2DScrnBlockHeader header;
	input->read(&header, sizeof(J2DScrnBlockHeader));
	mBloBlockType = header.mBloBlockType;

	int panHeaderPos = input->getPosition();
	J2DScrnBlockHeader panHeader;
	input->peek(&panHeader, sizeof(J2DScrnBlockHeader));
	makePaneExStream(parent, input);
	input->seek(panHeaderPos + panHeader.mBlockLength, SEEK_SET);

	input->read(&info, sizeof(J2DTextBoxBlock));
	_13C      = info._02;
	_13E      = info.mMaterialNum;
	mMaterial = nullptr;

	if (_13E != 0xFFFF) {
		mMaterial             = &materials[_13E];
		materials[_13E].mPane = this;
		rewriteAlpha();

		if (mMaterial != NULL) {
			if (mMaterial->getTevBlock() != NULL) {
				mFont = static_cast<JUTResFont*>(mMaterial->getTevBlock()->getFont());
			}
		}
	}

	mCharSpacing   = info.mCharSpacing;
	mLineSpacing   = info.mLineSpacing;
	mFontSize.x    = info.mFontSizeX;
	mFontSize.y    = info.mFontSizeY;
	mFlags         = (info.mHBind << 2) | info.mVBind;
	mCharColor     = JUtility::TColor(info.mCharColor);
	mGradientColor = JUtility::TColor(info.mGradientColor);
	setConnectParent(info.mDoConnectParent);

	u16 strLength = 0;
	if (!(flags & 0x2000000)) {
		strLength = info._1C;
		if ((s16)info._1C == -1) {
			strLength = info._1E + 1;
		}
	}

	mStringLength = 0;
	mStringPtr    = nullptr;

	if (strLength != 0) {
		mStringPtr = new char[strLength];
	}

	if (mStringPtr) {
		mStringLength = strLength;
		int temp_r0   = (u16)strLength - 1;
		u16 var_r26_2 = info._1E;

		if (temp_r0 < var_r26_2) {
			var_r26_2 = (u16)temp_r0;
		}

		input->peek(mStringPtr, var_r26_2);
		mStringPtr[var_r26_2] = 0;
	}

	input->skip(info._1E);
	input->seek(startPos + header.mBlockLength, SEEK_SET);

	_10C             = 0.0f;
	_110             = 0.0f;
	mIsTextFontOwned = false;
	_140             = 0;
}

/*
 * --INFO--
 * Address:	800599D8
 * Size:	000090
 */
J2DTextBoxEx::~J2DTextBoxEx()
{
	if (_140) {
		delete mMaterial;
	}
}

/*
 * --INFO--
 * Address:	80059A68
 * Size:	000300
 */
void J2DTextBoxEx::drawSelf(f32 x, f32 y, Mtx* mtx)
{
	Mtx newMtx;

	JUTFont* font = nullptr;
	if (mMaterial && mMaterial->getTevBlock()) {
		font = mMaterial->getTevBlock()->getFont();
	}

	J2DPrint print(font, (int)mCharSpacing, (int)mLineSpacing, mCharColor, mGradientColor, mBlack, mWhite);
	print.setFontSize((int)mFontSize.x, (int)mFontSize.y);

	if (mMaterial) {
		mMaterial->setGX();
		PSMTXConcat(*mtx, mGlobalMtx, newMtx);

		GXLoadPosMtxImm(newMtx, GX_PNMTX0);
		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);

		print.locate(x + mBounds.i.x, y + mBounds.i.y);

		if (mMaterial->isVisible() && mStringPtr) {
			u8 alpha = 255;

			if (mMaterial->getColorBlock()->getColorChan(1)->getMatSrc() == 1) {
				if (mMaterial->getMaterialAlphaCalc() == 1) {
					alpha = mColorAlpha;
				}
			} else if (mIsInfluencedAlpha) {
				GXSetChanMatColor(GX_ALPHA0, JUtility::TColor(mColorAlpha));
			}

			print.printReturn(mStringPtr, (int)(mBounds.getWidth() + 0.0001f), (int)mBounds.getHeight(), getHBinding(), getVBinding(), _10C,
			                  _110, alpha);
		}
	}
}

/*
 * --INFO--
 * Address:	80059D68
 * Size:	000240
 */
void J2DTextBoxEx::draw(f32 x, f32 y)
{
	Mtx newMtx;

	if (isVisible()) {
		JUTFont* font = nullptr;
		if (mMaterial && mMaterial->getTevBlock()) {
			font = mMaterial->getTevBlock()->getFont();
		}

		J2DPrint print(font, mCharSpacing, mLineSpacing, mCharColor, mGradientColor, mBlack, mWhite);
		print.setFontSize(mFontSize.x, mFontSize.y);
		mColorAlpha = mAlpha;

		if (mMaterial) {
			mMaterial->setGX();
			makeMatrix(x, y, 0.0f, 0.0f);

			GXLoadPosMtxImm(mPositionMtx, GX_PNMTX0);
			GXSetCurrentMtx(GX_PNMTX0);

			if (!mMaterial->isVisible()) {
				return;
			}

			GXClearVtxDesc();
			GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
			GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
			GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);

			if (mStringPtr) {
				u8 alpha = 255;
				if (mMaterial->getMaterialAlphaCalc() == 1) {
					alpha = mColorAlpha;
				}

				print.print(0.0f, 0.0f, alpha, "%s", mStringPtr);
			}

			for (int i = 0; i < GX_MAX_TEVSWAP; i++) {
				GXSetTevSwapModeTable((GXTevSwapSel)i, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
			}

			GXSetNumIndStages(0);

			for (int i = 0; i < GX_MAXTEVSTAGE; i++) {
				GXSetTevDirect((GXTevStageID)i);
			}

			PSMTXIdentity(newMtx);
			GXLoadPosMtxImm(newMtx, GX_PNMTX0);
		}
	}
}

/*
 * --INFO--
 * Address:	80059FA8
 * Size:	00026C
 */
void J2DTextBoxEx::draw(f32 x, f32 y, f32 p3, J2DTextBoxHBinding hb)
{
	Mtx newMtx;

	if (isVisible()) {
		JUTFont* font = nullptr;
		if (mMaterial && mMaterial->getTevBlock()) {
			font = mMaterial->getTevBlock()->getFont();
		}

		J2DPrint print(font, mCharSpacing, mLineSpacing, mCharColor, mGradientColor, mBlack, mWhite);
		print.setFontSize(mFontSize.x, mFontSize.y);
		mColorAlpha = mAlpha;

		if (mMaterial) {
			mMaterial->setGX();
			makeMatrix(x, y, 0.0f, 0.0f);

			GXLoadPosMtxImm(mPositionMtx, GX_PNMTX0);
			GXSetCurrentMtx(GX_PNMTX0);

			if (!mMaterial->isVisible()) {
				return;
			}

			GXClearVtxDesc();
			GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
			GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
			GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);

			if (mStringPtr) {
				u8 alpha = 255;
				if (mMaterial->getMaterialAlphaCalc() == 1) {
					alpha = mColorAlpha;
				}

				print.printReturn(mStringPtr, p3, 0.0f, hb, J2DVBIND_Top, 0.0f, -mFontSize.y, alpha);
			}

			for (int i = 0; i < GX_MAX_TEVSWAP; i++) {
				GXSetTevSwapModeTable((GXTevSwapSel)i, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
			}

			GXSetNumIndStages(0);

			for (int i = 0; i < GX_MAXTEVSTAGE; i++) {
				GXSetTevDirect((GXTevStageID)i);
			}

			PSMTXIdentity(newMtx);
			GXLoadPosMtxImm(newMtx, GX_PNMTX0);
		}
	}
}

/*
 * --INFO--
 * Address:	8005A214
 * Size:	000064
 */
void J2DTextBoxEx::setFont(JUTFont* font)
{
	if (font && mMaterial && mMaterial->getTevBlock()) {
		mMaterial->getTevBlock()->setFont(font);
		mFont = static_cast<JUTResFont*>(font);
	}
}

/*
 * --INFO--
 * Address:	8005A278
 * Size:	00004C
 */
JUTResFont* J2DTextBoxEx::getFont() const
{
	if (mMaterial && mMaterial->getTevBlock()) {
		return static_cast<JUTResFont*>(mMaterial->getTevBlock()->getFont());
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	8005A2C4
 * Size:	0000A4
 */
void J2DTextBoxEx::setTevStage(bool doBeyondStage0)
{
	J2DTevStage* stage = mMaterial->getTevBlock()->getTevStage(GX_TEVSTAGE0);
	if (!doBeyondStage0) {
		setStage(stage, STAGE_0);
	} else {
		setStage(stage, STAGE_1);
		setStage(mMaterial->getTevBlock()->getTevStage(GX_TEVSTAGE1), STAGE_2);
	}
}

/*
 * --INFO--
 * Address:	8005A368
 * Size:	0002B0
 */
void J2DTextBoxEx::setStage(J2DTevStage* stage, J2DTextBoxEx::stage_enum stageNum)
{
	/*
	stwu     r1, -0x80(r1)
	lis      r3, lbl_804786C8@ha
	stmw     r18, 0x48(r1)
	addi     r28, r3, lbl_804786C8@l
	slwi     r27, r5, 2
	addi     r6, r1, 0x34
	addi     r3, r1, 0x35
	addi     r19, r1, 0x36
	mulli    r26, r5, 5
	addi     r20, r1, 0x37
	addi     r25, r1, 0x18
	addi     r21, r1, 0x1c
	addi     r22, r1, 0x1b
	addi     r23, r1, 0x1a
	addi     r24, r1, 0x19
	lwz      r8, 0(r28)
	lwz      r7, 4(r28)
	lwz      r0, 8(r28)
	stw      r8, 0x34(r1)
	lwz      r29, 0xc(r28)
	stw      r7, 0x38(r1)
	lwz      r30, 0x10(r28)
	stw      r0, 0x3c(r1)
	lwz      r31, 0x14(r28)
	lbzx     r0, r6, r27
	lwz      r12, 0x18(r28)
	slwi     r5, r0, 4
	lbzx     r0, r3, r27
	lwz      r11, 0x1c(r28)
	or       r18, r5, r0
	lwz      r10, 0x20(r28)
	lhz      r9, 0x24(r28)
	lbz      r8, 0x26(r28)
	lwz      r7, 0x28(r28)
	lwz      r6, 0x2c(r28)
	lwz      r5, 0x30(r28)
	lhz      r3, 0x34(r28)
	lbz      r0, 0x36(r28)
	lbzx     r19, r19, r27
	lbzx     r28, r20, r27
	slwi     r20, r19, 4
	stb      r18, 2(r4)
	or       r28, r20, r28
	stb      r28, 3(r4)
	stw      r12, 0x18(r1)
	lbz      r28, 1(r4)
	stw      r11, 0x1c(r1)
	rlwinm   r12, r28, 0, 0x1e, 0x1c
	stw      r10, 0x20(r1)
	sth      r9, 0x24(r1)
	stb      r8, 0x26(r1)
	lbzx     r11, r25, r26
	stw      r7, 8(r1)
	rlwinm   r8, r11, 2, 0x16, 0x1d
	cmplwi   r11, 1
	or       r10, r12, r8
	stw      r6, 0xc(r1)
	lbzx     r9, r21, r26
	stw      r29, 0x28(r1)
	lbzx     r8, r22, r26
	stw      r30, 0x2c(r1)
	lbzx     r7, r23, r26
	stw      r31, 0x30(r1)
	lbzx     r6, r24, r26
	stw      r5, 0x10(r1)
	sth      r3, 0x14(r1)
	stb      r0, 0x16(r1)
	stb      r10, 1(r4)
	bgt      lbl_8005A4A4
	lbz      r3, 1(r4)
	rlwinm   r0, r7, 4, 0x14, 0x1b
	rlwinm   r3, r3, 0, 0x1c, 0x19
	or       r0, r3, r0
	stb      r0, 1(r4)
	lbz      r0, 1(r4)
	rlwinm   r0, r0, 0, 0, 0x1d
	or       r0, r0, r6
	stb      r0, 1(r4)
	b        lbl_8005A4C0

lbl_8005A4A4:
	lbz      r0, 1(r4)
	rlwimi   r0, r11, 3, 0x1a, 0x1b
	stb      r0, 1(r4)
	lbz      r0, 1(r4)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 3
	stb      r0, 1(r4)

lbl_8005A4C0:
	lbz      r0, 1(r4)
	addi     r3, r1, 0x28
	rlwinm   r7, r9, 6, 0x12, 0x19
	addi     r5, r1, 0x29
	rlwinm   r6, r0, 0, 0x1d, 0x1b
	rlwinm   r0, r8, 3, 0x15, 0x1c
	or       r6, r6, r0
	lbzx     r9, r5, r27
	lbzx     r0, r3, r27
	addi     r3, r1, 0x2a
	stb      r6, 1(r4)
	addi     r8, r1, 0x2b
	slwi     r6, r0, 5
	lbzx     r11, r3, r27
	lbz      r0, 1(r4)
	addi     r5, r1, 0xc
	lbzx     r18, r8, r27
	rlwinm   r12, r9, 2, 0x16, 0x1d
	rlwimi   r7, r0, 0, 0x1a, 0x1f
	rlwinm   r10, r11, 7, 0x11, 0x18
	stb      r7, 1(r4)
	addi     r3, r1, 8
	lbzx     r0, r3, r26
	addi     r3, r1, 0xb
	lbz      r7, 6(r4)
	addi     r8, r1, 0xa
	rlwinm   r9, r18, 4, 0x14, 0x1b
	rlwinm   r11, r11, 0x1f, 0x19, 0x1f
	rlwimi   r6, r7, 0, 0x1b, 0x1f
	addi     r7, r1, 9
	stb      r6, 6(r4)
	rlwinm   r6, r0, 2, 0x16, 0x1d
	lbzx     r18, r8, r26
	cmplwi   r0, 1
	lbz      r27, 6(r4)
	lbzx     r5, r5, r26
	rlwinm   r27, r27, 0, 0x1e, 0x1a
	lbzx     r3, r3, r26
	or       r12, r27, r12
	stb      r12, 6(r4)
	lbz      r12, 6(r4)
	rlwinm   r8, r12, 0, 0, 0x1d
	lbzx     r12, r7, r26
	or       r7, r8, r11
	stb      r7, 6(r4)
	lbz      r7, 7(r4)
	rlwimi   r10, r7, 0, 0x19, 0x1f
	stb      r10, 7(r4)
	lbz      r7, 7(r4)
	rlwinm   r7, r7, 0, 0x1c, 0x18
	or       r7, r7, r9
	stb      r7, 7(r4)
	lbz      r7, 5(r4)
	rlwinm   r7, r7, 0, 0x1e, 0x1c
	or       r6, r7, r6
	stb      r6, 5(r4)
	bgt      lbl_8005A5CC
	lbz      r6, 5(r4)
	rlwinm   r0, r18, 4, 0x14, 0x1b
	rlwinm   r6, r6, 0, 0, 0x1d
	or       r6, r6, r12
	stb      r6, 5(r4)
	lbz      r6, 5(r4)
	rlwinm   r6, r6, 0, 0x1c, 0x19
	or       r0, r6, r0
	stb      r0, 5(r4)
	b        lbl_8005A5E8

lbl_8005A5CC:
	lbz      r6, 5(r4)
	rlwimi   r6, r0, 3, 0x1a, 0x1b
	stb      r6, 5(r4)
	lbz      r0, 5(r4)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 3
	stb      r0, 5(r4)

lbl_8005A5E8:
	lbz      r6, 5(r4)
	rlwinm   r0, r5, 6, 0x12, 0x19
	rlwinm   r3, r3, 3, 0x15, 0x1c
	rlwinm   r5, r6, 0, 0x1d, 0x1b
	or       r3, r5, r3
	stb      r3, 5(r4)
	lbz      r3, 5(r4)
	rlwimi   r0, r3, 0, 0x1a, 0x1f
	stb      r0, 5(r4)
	lmw      r18, 0x48(r1)
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005A618
 * Size:	000088
 */
bool J2DTextBoxEx::setBlack(JUtility::TColor black)
{
	JUtility::TColor currBlack;
	JUtility::TColor currWhite;

	if (!getBlackWhite(&currBlack, &currWhite)) {
		return false;
	}

	setBlackWhite(black, currWhite);
}

/*
 * --INFO--
 * Address:	8005A6A0
 * Size:	000088
 */
bool J2DTextBoxEx::setWhite(JUtility::TColor white)
{
	JUtility::TColor currBlack;
	JUtility::TColor currWhite;

	if (!getBlackWhite(&currBlack, &currWhite)) {
		return false;
	}

	setBlackWhite(currBlack, white);
}

/*
 * --INFO--
 * Address:	8005A728
 * Size:	000224
 */
bool J2DTextBoxEx::setBlackWhite(JUtility::TColor black, JUtility::TColor white)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r29, r4
	mr       r28, r3
	mr       r30, r5
	lwz      r4, 0x138(r3)
	cmplwi   r4, 0
	bne      lbl_8005A758
	li       r3, 0
	b        lbl_8005A938

lbl_8005A758:
	lwz      r0, 0x70(r4)
	cmplwi   r0, 0
	bne      lbl_8005A76C
	li       r3, 0
	b        lbl_8005A938

lbl_8005A76C:
	lwz      r6, 0(r30)
	addi     r4, r1, 0x18
	lwz      r0, 0(r29)
	addi     r5, r1, 0x14
	stw      r6, 0x14(r1)
	stw      r0, 0x18(r1)
	bl isSetBlackWhite__12J2DTextBoxExCFQ28JUtility6TColorQ28JUtility6TColor
	clrlwi.  r0, r3, 0x18
	bne      lbl_8005A798
	li       r3, 0
	b        lbl_8005A938

lbl_8005A798:
	lwz      r0, 0(r29)
	li       r31, 0
	cmplwi   r0, 0
	bne      lbl_8005A7B8
	lwz      r3, 0(r30)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_8005A7BC

lbl_8005A7B8:
	li       r31, 1

lbl_8005A7BC:
	lwz      r3, 0x138(r28)
	clrlwi   r4, r31, 0x18
	neg      r0, r4
	lwz      r3, 0x70(r3)
	or       r0, r0, r4
	srwi     r4, r0, 0x1f
	lwz      r12, 0(r3)
	addi     r0, r4, 1
	clrlwi   r4, r0, 0x18
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r31, 0x18
	bne      lbl_8005A80C
	lis      r3, 0x0000FFFF@ha
	li       r4, 4
	addi     r0, r3, 0x0000FFFF@l
	sth      r4, 8(r1)
	sth      r0, 0xa(r1)
	b        lbl_8005A820

lbl_8005A80C:
	lis      r3, 0x0000FF04@ha
	li       r4, 0xff
	addi     r0, r3, 0x0000FF04@l
	sth      r4, 8(r1)
	sth      r0, 0xa(r1)

lbl_8005A820:
	li       r27, 0
	b        lbl_8005A894

lbl_8005A828:
	lwz      r3, 0x138(r28)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	clrlwi   r4, r27, 0x18
	cmplw    r0, r4
	ble      lbl_8005A890
	rlwinm   r0, r27, 1, 0x17, 0x1e
	addi     r3, r1, 8
	lhzx     r3, r3, r0
	addi     r5, r1, 0x10
	srawi    r0, r3, 8
	stb      r3, 0xe(r1)
	stb      r0, 0xc(r1)
	stb      r0, 0xd(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 0x10(r1)
	lwz      r3, 0x138(r28)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8005A890:
	addi     r27, r27, 1

lbl_8005A894:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 2
	blt      lbl_8005A828
	mr       r3, r28
	mr       r4, r31
	bl       setTevStage__12J2DTextBoxExFb
	clrlwi.  r0, r31, 0x18
	beq      lbl_8005A934
	lbz      r3, 1(r29)
	addi     r5, r1, 0x24
	lbz      r6, 2(r29)
	li       r4, 0
	lbz      r7, 3(r29)
	lbz      r0, 0(r29)
	sth      r3, 0x26(r1)
	sth      r0, 0x24(r1)
	sth      r6, 0x28(r1)
	sth      r7, 0x2a(r1)
	lwz      r3, 0x138(r28)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lbz      r3, 1(r30)
	addi     r5, r1, 0x1c
	lbz      r6, 2(r30)
	li       r4, 1
	lbz      r7, 3(r30)
	lbz      r0, 0(r30)
	sth      r3, 0x1e(r1)
	sth      r0, 0x1c(r1)
	sth      r6, 0x20(r1)
	sth      r7, 0x22(r1)
	lwz      r3, 0x138(r28)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_8005A934:
	li       r3, 1

lbl_8005A938:
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005A94C
 * Size:	000194
 */
bool J2DTextBoxEx::getBlackWhite(JUtility::TColor*, JUtility::TColor*) const
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r29, r3
	lwz      r3, 0x138(r3)
	mr       r30, r4
	mr       r31, r5
	cmplwi   r3, 0
	bne      lbl_8005A97C
	li       r3, 0
	b        lbl_8005AACC

lbl_8005A97C:
	lwz      r3, 0x70(r3)
	cmplwi   r3, 0
	bne      lbl_8005A990
	li       r3, 0
	b        lbl_8005AACC

lbl_8005A990:
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	clrlwi   r3, r3, 0x18
	stw      r0, 0x14(r1)
	li       r0, -1
	subfic   r5, r3, 1
	addi     r4, r3, -1
	lbz      r3, 0x14(r1)
	or       r4, r5, r4
	stw      r0, 0x10(r1)
	rlwinm.  r4, r4, 1, 0x1f, 0x1f
	lbz      r0, 0x15(r1)
	stb      r3, 0(r30)
	lbz      r3, 0x16(r1)
	stb      r0, 1(r30)
	lbz      r0, 0x17(r1)
	stb      r3, 2(r30)
	lbz      r3, 0x10(r1)
	stb      r0, 3(r30)
	lbz      r0, 0x11(r1)
	stb      r3, 0(r31)
	lbz      r3, 0x12(r1)
	stb      r0, 1(r31)
	lbz      r0, 0x13(r1)
	stb      r3, 2(r31)
	stb      r0, 3(r31)
	beq      lbl_8005AAC8
	lwz      r3, 0x138(r29)
	li       r4, 0
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x138(r29)
	li       r4, 1
	lha      r29, 0(r3)
	lha      r28, 2(r3)
	lha      r27, 4(r3)
	lha      r26, 6(r3)
	lwz      r3, 0x70(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	rlwinm   r4, r28, 0x10, 8, 0xf
	lha      r0, 2(r3)
	rlwimi   r4, r29, 0x18, 0, 7
	lha      r5, 0(r3)
	rlwimi   r4, r27, 8, 0x10, 0x17
	rlwinm   r0, r0, 0x10, 8, 0xf
	rlwimi   r4, r26, 0, 0x18, 0x1f
	lha      r6, 4(r3)
	stw      r4, 0xc(r1)
	rlwimi   r0, r5, 0x18, 0, 7
	lha      r7, 6(r3)
	rlwimi   r0, r6, 8, 0x10, 0x17
	lbz      r3, 0xc(r1)
	lbz      r5, 0xd(r1)
	rlwimi   r0, r7, 0, 0x18, 0x1f
	stb      r3, 0(r30)
	lbz      r4, 0xe(r1)
	stb      r5, 1(r30)
	lbz      r3, 0xf(r1)
	stw      r0, 8(r1)
	stb      r4, 2(r30)
	lbz      r0, 8(r1)
	stb      r3, 3(r30)
	lbz      r4, 9(r1)
	stb      r0, 0(r31)
	lbz      r3, 0xa(r1)
	stb      r4, 1(r31)
	lbz      r0, 0xb(r1)
	stb      r3, 2(r31)
	stb      r0, 3(r31)

lbl_8005AAC8:
	li       r3, 1

lbl_8005AACC:
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005AAE0
 * Size:	000094
 */
void J2DTextBoxEx::isSetBlackWhite(JUtility::TColor, JUtility::TColor) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0(r4)
	stw      r31, 0xc(r1)
	mr       r31, r3
	cmplwi   r0, 0
	bne      lbl_8005AB18
	lwz      r3, 0(r5)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8005AB18
	li       r3, 1
	b        lbl_8005AB60

lbl_8005AB18:
	lwz      r3, 0x138(r31)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x138(r31)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_8005AB5C
	li       r3, 0
	b        lbl_8005AB60

lbl_8005AB5C:
	li       r3, 1

lbl_8005AB60:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005AB74
 * Size:	000060
 */
JUtility::TColor J2DTextBoxEx::getBlack() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  addi      r5, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r3, r4
	  addi      r4, r1, 0xC
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x254
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r0, 0
	  stw       r0, 0x0(r31)
	  b         .loc_0x4C
	.loc_0x44:
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x0(r31)
	.loc_0x4C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005ABD4
 * Size:	000060
 */
JUtility::TColor J2DTextBoxEx::getWhite() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  addi      r5, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r3, r4
	  addi      r4, r1, 0xC
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x2B4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r0, -0x1
	  stw       r0, 0x0(r31)
	  b         .loc_0x4C
	.loc_0x44:
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x0(r31)
	.loc_0x4C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005AC34
 * Size:	000020
 */
void J2DTextBoxEx::setAlpha(u8)
{
	/*
	.loc_0x0:
	  stb       r4, 0xB2(r3)
	  lwz       r3, 0x138(r3)
	  cmplwi    r3, 0
	  beqlr-
	  addic.    r3, r3, 0x10
	  beqlr-
	  stb       r4, 0x3(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005AC54
 * Size:	000034
 */
void J2DTextBoxEx::setCullBack(_GXCullMode)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stb       r4, 0xB1(r3)
	  lwz       r5, 0x138(r3)
	  cmplwi    r5, 0
	  beq-      .loc_0x20
	  stb       r4, 0x22(r5)
	.loc_0x20:
	  bl        -0x22030
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005AC88
 * Size:	000018
 */
void J2DTextBoxEx::rewriteAlpha()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x138(r3)
	  cmplwi    r4, 0
	  beqlr-
	  lbz       r0, 0x13(r4)
	  stb       r0, 0xB2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005ACA0
 * Size:	00008C
 */
bool J2DTextBoxEx::isUsed(const ResFONT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  cmplw     r3, r31
	  bne-      .loc_0x68
	  li        r3, 0x1
	  b         .loc_0x74
	.loc_0x68:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x22294
	.loc_0x74:
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
 * Address:	8005AD2C
 * Size:	00002C
 */
void J2DTextBoxEx::setAnimation(J2DAnmColor*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x138(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C
	  bl        -0x85B4
	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005AD58
 * Size:	00002C
 */
void J2DTextBoxEx::setAnimation(J2DAnmTextureSRTKey*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x138(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C
	  bl        -0x849C
	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005AD84
 * Size:	00002C
 */
void J2DTextBoxEx::setAnimation(J2DAnmTexPattern*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x138(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C
	  bl        -0x8324
	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005ADB0
 * Size:	00002C
 */
void J2DTextBoxEx::setAnimation(J2DAnmTevRegKey*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x138(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C
	  bl        -0x81BC
	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005ADDC
 * Size:	000008
 */
void J2DTextBoxEx::setAnimation(J2DAnmVisibilityFull*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x144(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005ADE4
 * Size:	000080
 */
const J2DAnmTransform* J2DTextBoxEx::animationPane(const J2DAnmTransform*)
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
	  lwz       r3, 0x144(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lhz       r4, 0x13C(r30)
	  cmplwi    r4, 0xFFFF
	  beq-      .loc_0x5C
	  addi      r5, r1, 0x8
	  bl        0x1D0C
	  lbz       r0, 0x8(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  li        r0, 0x1
	  stb       r0, 0xB0(r30)
	  b         .loc_0x5C
	.loc_0x54:
	  li        r0, 0
	  stb       r0, 0xB0(r30)
	.loc_0x5C:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x21590
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
 * Address:	8005AE64
 * Size:	000008
 */
J2DMaterial* J2DTextBoxEx::getMaterial() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x138(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005AE6C
 * Size:	00003C
 */
void J2DTextBoxEx::setCullBack(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  li        r4, 0
	  beq-      .loc_0x1C
	  li        r4, 0x2
	.loc_0x1C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	8005AEA8
 * Size:	000020
 */
bool J2DTextBoxEx::isUsed(const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x224C0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005AEC8
 * Size:	000004
 */
void J2DTextBoxEx::setAnimation(J2DAnmVtxColor*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005AECC
 * Size:	000020
 */
void J2DTextBoxEx::setAnimation(J2DAnmTransform*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x218E4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8005AEEC
 * Size:	000020
 */
void J2DTextBoxEx::setAnimation(J2DAnmBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x219EC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
