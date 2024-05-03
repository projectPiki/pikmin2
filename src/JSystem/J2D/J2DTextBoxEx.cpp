#include "JSystem/J2D/J2DTextBox.h"
#include "JSystem/J2D/J2DPrint.h"

/**
 * @note Address: 0x800596A8
 * @note Size: 0x330
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
	mAnimVisibilityIndex = info.mAnimPaneIndex;
	mMaterialID          = info.mMaterialNum;
	mMaterial            = nullptr;

	if (mMaterialID != 0xFFFF) {
		mMaterial                    = &materials[mMaterialID];
		materials[mMaterialID].mPane = this;
		rewriteAlpha();

		if (mMaterial) {
			if (mMaterial->getTevBlock() != nullptr) {
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
		strLength = info.mTextBoxLength;
		if ((s16)info.mTextBoxLength == -1) {
			strLength = info.mMaxReadLength + 1;
		}
	}

	mStringLength = 0;
	mStringPtr    = nullptr;

	if (strLength != 0) {
		mStringPtr = new char[strLength];
	}

	if (mStringPtr) {
		mStringLength       = strLength;
		int trueStrLength   = (u16)strLength - 1;
		u16 bufferMaxLength = info.mMaxReadLength;

		if (trueStrLength < bufferMaxLength) {
			bufferMaxLength = (u16)trueStrLength;
		}

		input->peek(mStringPtr, bufferMaxLength);
		mStringPtr[bufferMaxLength] = 0;
	}

	input->skip(info.mMaxReadLength);
	input->seek(startPos + header.mBlockLength, SEEK_SET);

	mOffsetX         = 0.0f;
	mOffsetY         = 0.0f;
	mIsTextFontOwned = false;
	_140             = 0;
}

/**
 * @note Address: 0x800599D8
 * @note Size: 0x90
 */
J2DTextBoxEx::~J2DTextBoxEx()
{
	if (_140) {
		delete mMaterial;
	}
}

/**
 * @note Address: 0x80059A68
 * @note Size: 0x300
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

			print.printReturn(mStringPtr, (int)(mBounds.getWidth() + 0.0001f), (int)mBounds.getHeight(), getHBinding(), getVBinding(),
			                  mOffsetX, mOffsetY, alpha);
		}
	}
}

/**
 * @note Address: 0x80059D68
 * @note Size: 0x240
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

/**
 * @note Address: 0x80059FA8
 * @note Size: 0x26C
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

/**
 * @note Address: 0x8005A214
 * @note Size: 0x64
 */
void J2DTextBoxEx::setFont(JUTFont* font)
{
	if (font && mMaterial && mMaterial->getTevBlock()) {
		mMaterial->getTevBlock()->setFont(font);
		mFont = static_cast<JUTResFont*>(font);
	}
}

/**
 * @note Address: 0x8005A278
 * @note Size: 0x4C
 */
JUTResFont* J2DTextBoxEx::getFont() const
{
	if (mMaterial && mMaterial->getTevBlock()) {
		return static_cast<JUTResFont*>(mMaterial->getTevBlock()->getFont());
	}

	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void J2DTextBoxEx::setTevOrder(bool doBeyondStage0)
{
	u16 tevInfo[2];
	if (!doBeyondStage0) {
		tevInfo[0] = 4;
		tevInfo[1] = 0xffff;
	} else {
		tevInfo[0] = 0xff;
		tevInfo[1] = 0xff04;
	}
	for (u8 i = 0; i < 2; i++) {
		if ((u8)mMaterial->getTevBlock()->getMaxStage() > i) {
			J2DTevOrderInfo info;
			info.mTexCoord       = (tevInfo[i]) >> 8;
			info.mTexMap         = (tevInfo[i]) >> 8;
			info.mColor          = tevInfo[i] & 0xff;
			J2DTevOrder tevOrder = info;
			mMaterial->getTevBlock()->setTevOrder(i, tevOrder);
		}
	}
}

/**
 * @note Address: 0x8005A2C4
 * @note Size: 0xA4
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

/**
 * @note Address: 0x8005A368
 * @note Size: 0x2B0
 */
void J2DTextBoxEx::setStage(J2DTevStage* stage, J2DTextBoxEx::stage_enum stageNum)
{
	const u8 tevColors[3][4] = {
		{ 0x0F, 0x08, 0x0A, 0x0F },
		{ 0x02, 0x04, 0x08, 0x0F },
		{ 0x0F, 0x0A, 0x00, 0x0F },
	};
	const u8 tevAlpha[3][4] = {
		{ 0x07, 0x04, 0x05, 0x07 },
		{ 0x01, 0x02, 0x04, 0x07 },
		{ 0x07, 0x05, 0x00, 0x07 },
	};

	const u8 tevColorOps[3][5] = {
		{ 0x00, 0x00, 0x00, 0x01, 0x00 },
		{ 0x00, 0x00, 0x00, 0x01, 0x00 },
		{ 0x00, 0x00, 0x00, 0x01, 0x00 },
	};

	const u8 tevAlphaOps[3][5] = {
		{ 0x00, 0x00, 0x00, 0x01, 0x00 },
		{ 0x00, 0x00, 0x00, 0x01, 0x00 },
		{ 0x00, 0x00, 0x00, 0x01, 0x00 },
	};

	stage->setTevColorAB(tevColors[stageNum][0], tevColors[stageNum][1]);
	stage->setTevColorCD(tevColors[stageNum][2], tevColors[stageNum][3]);
	stage->setTevColorOp(tevColorOps[stageNum][0], tevColorOps[stageNum][1], tevColorOps[stageNum][2], tevColorOps[stageNum][3],
	                     tevColorOps[stageNum][4]);
	stage->setAlphaABCD(tevAlpha[stageNum][0], tevAlpha[stageNum][1], tevAlpha[stageNum][2], tevAlpha[stageNum][3]);
	stage->setTevAlphaOp(tevAlphaOps[stageNum][0], tevAlphaOps[stageNum][1], tevAlphaOps[stageNum][2], tevAlphaOps[stageNum][3],
	                     tevAlphaOps[stageNum][4]);
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

/**
 * @note Address: 0x8005A618
 * @note Size: 0x88
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

/**
 * @note Address: 0x8005A6A0
 * @note Size: 0x88
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

/**
 * @note Address: 0x8005A728
 * @note Size: 0x224
 */
bool J2DTextBoxEx::setBlackWhite(JUtility::TColor black, JUtility::TColor white)
{
	if (mMaterial == nullptr) {
		return false;
	}

	if (mMaterial->getTevBlock() == nullptr) {
		return false;
	}

	if (!isSetBlackWhite(black, white)) {
		return false;
	}

	bool isNotDefault = false;
	if (black != 0 || white != -1) {
		isNotDefault = true;
	}

	mMaterial->getTevBlock()->setTevStageNum(isNotDefault ? 2 : 1);
	setTevOrder(isNotDefault);
	setTevStage(isNotDefault);

	if (isNotDefault) {
		J2DGXColorS10 color;
		color.r = black.r;
		color.g = black.g;
		color.b = black.b;
		color.a = black.a;
		mMaterial->getTevBlock()->setTevColor(0, color);

		color.r = white.r;
		color.g = white.g;
		color.b = white.b;
		color.a = white.a;
		mMaterial->getTevBlock()->setTevColor(1, color);
	}

	return true;
}

/**
 * @note Address: 0x8005A94C
 * @note Size: 0x194
 */
bool J2DTextBoxEx::getBlackWhite(JUtility::TColor* outBlack, JUtility::TColor* outWhite) const
{
	if (mMaterial == nullptr) {
		return false;
	}
	if (mMaterial->mTevBlock == nullptr) {
		return false;
	}
	bool tevStageNum = mMaterial->getTevBlock()->getTevStageNum() != 1;
	*outBlack        = TCOLOR_BLACK_U32;
	*outWhite        = TCOLOR_WHITE_U32;
	if (tevStageNum > 0) {
		J2DGXColorS10 tevBlack, tevWhite;
		tevBlack  = *mMaterial->getTevBlock()->getTevColor(0);
		tevWhite  = *mMaterial->getTevBlock()->getTevColor(1);
		*outBlack = JUtility::TColor(((u8)tevBlack.r << 0x18) | ((u8)tevBlack.g << 0x10) | ((u8)tevBlack.b << 8) | (u8)tevBlack.a);
		*outWhite = JUtility::TColor(((u8)tevWhite.r << 0x18) | ((u8)tevWhite.g << 0x10) | ((u8)tevWhite.b << 8) | (u8)tevWhite.a);
	}
	return true;
}

/**
 * @note Address: 0x8005AAE0
 * @note Size: 0x94
 */
bool J2DTextBoxEx::isSetBlackWhite(JUtility::TColor black, JUtility::TColor white) const
{
	if (black == 0 && white == 0xFFFFFFFF) {
		return true;
	}

	mMaterial->getTevBlock()->getTevStageNum();
	if ((u8)mMaterial->getTevBlock()->getMaxStage() == 1) {
		return false;
	}
	return true;
}

/**
 * @note Address: 0x8005AB74
 * @note Size: 0x60
 */
JUtility::TColor J2DTextBoxEx::getBlack() const
{
	JUtility::TColor black, white;
	if (!getBlackWhite(&black, &white)) {
		return TCOLOR_BLACK_U32;
	}
	return black;
}

/**
 * @note Address: 0x8005ABD4
 * @note Size: 0x60
 */
JUtility::TColor J2DTextBoxEx::getWhite() const
{
	JUtility::TColor black, white;
	if (!getBlackWhite(&black, &white)) {
		return TCOLOR_WHITE_U32;
	}
	return white;
}

/**
 * @note Address: 0x8005AC34
 * @note Size: 0x20
 */
void J2DTextBoxEx::setAlpha(u8 alpha)
{
	mAlpha = alpha;
	if (!mMaterial) {
		return;
	}
	J2DColorBlock* color = &mMaterial->mColorBlock;
	if (!color) {
		return;
	}
	color->mColors[0].a = alpha;
}

/**
 * @note Address: 0x8005AC54
 * @note Size: 0x34
 */
void J2DTextBoxEx::setCullBack(_GXCullMode cull)
{
	mCullMode = cull;
	if (mMaterial) {
		mMaterial->mColorBlock.mCullMode = cull;
	}
	J2DPane::setCullBack(cull);
}

/**
 * @note Address: 0x8005AC88
 * @note Size: 0x18
 */
void J2DTextBoxEx::rewriteAlpha()
{
	if (!mMaterial) {
		return;
	}
	mAlpha = mMaterial->mColorBlock.mColors[0].a;
}

/**
 * @note Address: 0x8005ACA0
 * @note Size: 0x8C
 */
bool J2DTextBoxEx::isUsed(const ResFONT* font)
{
	if (getFont() && getFont()->getResFont() == font) {
		return true;
	}
	return J2DPane::isUsed(font);
}

/**
 * @note Address: 0x8005AD2C
 * @note Size: 0x2C
 */
void J2DTextBoxEx::setAnimation(J2DAnmColor* anim)
{
	if (mMaterial) {
		mMaterial->setAnimation(anim);
	}
}

/**
 * @note Address: 0x8005AD58
 * @note Size: 0x2C
 */
void J2DTextBoxEx::setAnimation(J2DAnmTextureSRTKey* anim)
{
	if (mMaterial) {
		mMaterial->setAnimation(anim);
	}
}

/**
 * @note Address: 0x8005AD84
 * @note Size: 0x2C
 */
void J2DTextBoxEx::setAnimation(J2DAnmTexPattern* anim)
{
	if (mMaterial) {
		mMaterial->setAnimation(anim);
	}
}

/**
 * @note Address: 0x8005ADB0
 * @note Size: 0x2C
 */
void J2DTextBoxEx::setAnimation(J2DAnmTevRegKey* anim)
{
	if (mMaterial) {
		mMaterial->setAnimation(anim);
	}
}

/**
 * @note Address: 0x8005ADDC
 * @note Size: 0x8
 */
void J2DTextBoxEx::setAnimation(J2DAnmVisibilityFull* anim) { mAnmVisibility = anim; }

/**
 * @note Address: 0x8005ADE4
 * @note Size: 0x80
 */
const J2DAnmTransform* J2DTextBoxEx::animationPane(const J2DAnmTransform* anm)
{
	if (mAnmVisibility && mAnimVisibilityIndex != 0xFFFF) {
		u8 data[16];
		mAnmVisibility->getVisibility(mAnimVisibilityIndex, data);
		if (data[0]) {
			show();
		} else {
			hide();
		}
	}
	J2DPane::animationPane(anm);
}
