#include "Dolphin/gx.h"
#include "JSystem/J2D/J2DColorBlock.h"
#include "JSystem/J2D/J2DGXColorS10.h"
#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/J2D/J2DPEBlock.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTexGenBlock.h"
#include "JSystem/J2D/J2DTexMtx.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JUtility/JUTFont.h"
#include "JSystem/JUtility/JUTPalette.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "JSystem/JUtility/TColor.h"
#include "types.h"

/**
 * @note Address: 0x80049B20
 * @note Size: 0xAC
 */
void J2DColorBlock::initialize()
{
	for (int i = 0; i < 2; i++) {
		mColors[i] = j2dDefaultColInfo;
	}
	mChannelCount = 2;
	for (int i = 0; i < 4; i++) {
		mChannels[i].setColorChanInfo(j2dDefaultColorChanInfo);
	}
	mCullMode = GX_CULL_NONE;
}

/**
 * @note Address: 0x80049BCC
 * @note Size: 0xF4
 */
void J2DColorBlock::setGX()
{
	for (int i = 0; i < 2; i++) {
		GXSetChanMatColor(GXChannelID(GX_COLOR0A0 + i), mColors[i]);
	}
	GXSetNumChans(mChannelCount);
	const GXChannelID mapping[4] = { GX_COLOR0, GX_ALPHA0, GX_COLOR1, GX_ALPHA1 };
	for (int i = 0; i < mChannelCount << 1; i++) {
		GXSetChanCtrl(mapping[i], GX_DISABLE, GX_SRC_REG, (GXColorSrc)mChannels[i].getMatSrc(), GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	}
	GXSetCullMode((GXCullMode)mCullMode);
}

/**
 * @note Address: 0x80049CC0
 * @note Size: 0xF0
 * initialize__14J2DTexGenBlockFv
 */
void J2DTexGenBlock::initialize()
{
	mTexGenNum = 0;
	for (int i = 0; i < 8; i++) {
		mTexCoords[i].setTexCoordInfo(j2dDefaultTexCoordInfo[0]);
	}
	for (int i = 0; i < 8; i++) {
		mTexMtxes[i] = nullptr;
	}
}

/**
 * @note Address: 0x80049DB0
 * @note Size: 0xB4
 */
void J2DTexGenBlock::setGX()
{
	GXSetNumTexGens(mTexGenNum);
	for (int i = 0; i < mTexGenNum; i++) {
		GXSetTexCoordGen2((GXTexCoordID)i, (GXTexGenType)mTexCoords[i].mTexCoordInfo.mTexGenType,
		                  (GXTexGenSrc)mTexCoords[i].mTexCoordInfo.mTexGenSrc, mTexCoords[i].mTexCoordInfo.mTexGenMtx, GX_FALSE, 0x7D);
	}
	for (u8 i = 0; i < 8; i++) {
		if (mTexMtxes[i] != nullptr) {
			mTexMtxes[i]->load(i);
		}
	}
}

/**
 * @note Address: 0x80049E64
 * @note Size: 0x90
 * __dt__14J2DTexGenBlockFv
 */
J2DTexGenBlock::~J2DTexGenBlock()
{
	for (int i = 0; i < 8; i++) {
		delete mTexMtxes[i];
	}
}

/**
 * @note Address: 0x80049EF4
 * @note Size: 0x158
 */
void J2DTexGenBlock::setTexMtx(u32 index, J2DTexMtx& mtx)
{
	if (mTexMtxes[index] == nullptr) {
		mTexMtxes[index] = new J2DTexMtx(mtx.getTexMtxInfo());
		if (mTexMtxes[index] == nullptr) {
			return;
		}
	} else {
		mTexMtxes[index]->setTexMtxInfo(mtx.getTexMtxInfo());
	}
	mTexMtxes[index]->calc();
}

/**
 * @note Address: 0x8004A04C
 * @note Size: 0xB8
 */
void J2DTexGenBlock::getTexMtx(u32 id, J2DTexMtx& texMtx)
{
	if (mTexMtxes[id]) {
		texMtx.setTexMtxInfo(mTexMtxes[id]->getTexMtxInfo());
	}
}

/**
 * @note Address: 0x8004A104
 * @note Size: 0x8
 */
JUTTexture* J2DTevBlock::getTexture(u32 index)
{
	return nullptr;
}

/**
 * @note Address: 0x8004A10C
 * @note Size: 0x8
 */
JUTPalette* J2DTevBlock::getPalette(u32 index)
{
	return nullptr;
}

/**
 * @note Address: 0x8004A114
 * @note Size: 0x10C
 * __ct__12J2DTevBlock1Fv
 */
J2DTevBlock1::J2DTevBlock1()
    : J2DTevBlock()
    , mOrders()
    , mColors()
    , mStages()
    , mKColors()
    , mSwapModeTables()
    , mIndStages()
{
	mTextures[0]  = nullptr;
	mUndeleteFlag = 0;
	initialize();
}

/**
 * @note Address: 0x8004A32C
 * @note Size: 0xB8
 * __dt__12J2DTevBlock1Fv
 */
J2DTevBlock1::~J2DTevBlock1()
{
	if ((mUndeleteFlag & 0x01) != 0) {
		delete mTextures[0];
	}
	delete mPalettes[0];
	if ((mUndeleteFlag & 0x80) != 0) {
		delete mFont;
	}
}

/**
 * @note Address: 0x8004A3E4
 * @note Size: 0x278
 * initialize__12J2DTevBlock1Fv
 */
void J2DTevBlock1::initialize()
{
	mTexIndices[0] = -1;
	mFontNo        = -1;
	mOrders[0].setTevOrderInfo(j2dDefaultTevOrderInfoNull);

	J2DGXColorS10 color(j2dDefaultTevColor);
	for (int i = 0; i < 4; i++) {
		mColors[i] = color;
	}

	mStages[0].setStageNo(0);

	for (int i = 0; i < 4; i++) {
		mKColors[i] = j2dDefaultTevKColor;
	}

	for (int i = 0; i < 1; i++) {
		mKColorSels[i] = 255;
		mKAlphaSels[i] = 255;
	}

	for (int i = 0; i < 4; i++) {
		mSwapModeTables[i].setTevSwapModeTableInfo(j2dDefaultTevSwapModeTable);
	}

	for (int i = 0; i < 1; i++) {
		mIndStages[i].setIndTevStageInfo(j2dDefaultIndTevStageInfo);
	}
	for (int i = 0; i < 1; i++) {
		mPalettes[i] = nullptr;
	}
	mFont = nullptr;
	/*
	stwu     r1, -0x30(r1)
	addi     r6, r2, j2dDefaultTevColor@sda21
	lis      r4, 0x0000FFFF@ha
	addi     r12, r2, j2dDefaultTevOrderInfoNull@sda21
	stw      r31, 0x2c(r1)
	addi     r0, r4, 0x0000FFFF@l
	lha      r10, j2dDefaultTevColor@sda21(r2)
	li       r5, 0xc0
	sth      r0, 4(r3)
	li       r4, 0xc1
	lha      r9, 2(r6)
	mr       r31, r3
	sth      r0, 6(r3)
	li       r0, 2
	lha      r8, 4(r6)
	lbz      r7, j2dDefaultTevOrderInfoNull@sda21(r2)
	lha      r6, 6(r6)
	stb      r7, 8(r3)
	lwz      r7, j2dDefaultTevKColor@sda21(r2)
	lbz      r11, 1(r12)
	stb      r11, 9(r3)
	lbz      r11, 2(r12)
	stb      r11, 0xa(r3)
	sth      r10, 0xc(r3)
	sth      r9, 0xe(r3)
	sth      r8, 0x10(r3)
	sth      r6, 0x12(r3)
	sth      r10, 0x14(r3)
	sth      r9, 0x16(r3)
	sth      r8, 0x18(r3)
	sth      r6, 0x1a(r3)
	sth      r10, 0x1c(r3)
	sth      r9, 0x1e(r3)
	sth      r8, 0x20(r3)
	sth      r6, 0x22(r3)
	sth      r10, 0x24(r3)
	sth      r9, 0x26(r3)
	sth      r8, 0x28(r3)
	sth      r6, 0x2a(r3)
	stb      r5, 0x2c(r3)
	stb      r4, 0x30(r3)
	mtctr    r0

lbl_8004A48C:
	stw      r7, 8(r1)
	lbz      r6, 8(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x34(r31)
	lbz      r4, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r5, 0x35(r31)
	stb      r4, 0x36(r31)
	stw      r7, 8(r1)
	stb      r6, 0xc(r1)
	lbz      r6, 8(r1)
	stb      r0, 0x37(r31)
	stb      r5, 0xd(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x38(r31)
	stb      r4, 0xe(r1)
	lbz      r4, 0xa(r1)
	stb      r5, 0x39(r31)
	stb      r0, 0xf(r1)
	lbz      r0, 0xb(r1)
	stb      r4, 0x3a(r31)
	stb      r0, 0x3b(r31)
	addi     r31, r31, 8
	stb      r6, 0xc(r1)
	stb      r5, 0xd(r1)
	stb      r4, 0xe(r1)
	stb      r0, 0xf(r1)
	bdnz     lbl_8004A48C
	li       r7, 0xff
	lis      r5, j2dDefaultIndTevStageInfo@ha
	stb      r7, 0x44(r3)
	addi     r4, r2, j2dDefaultTevSwapModeTable@sda21
	addi     r6, r5, j2dDefaultIndTevStageInfo@l
	li       r0, 0
	stb      r7, 0x45(r3)
	lbz      r5, 1(r4)
	lbz      r8, 2(r4)
	lbz      r7, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r5, r5, 4, 0x14, 0x1b
	slwi     r8, r8, 2
	lbz      r9, 3(r4)
	add      r5, r5, r8
	slwi     r7, r7, 6
	add      r5, r5, r9
	add      r5, r7, r5
	stb      r5, 0x46(r3)
	lbz      r5, 1(r4)
	lbz      r8, 2(r4)
	lbz      r7, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r5, r5, 4, 0x14, 0x1b
	slwi     r8, r8, 2
	lbz      r9, 3(r4)
	add      r5, r5, r8
	slwi     r7, r7, 6
	add      r5, r5, r9
	add      r5, r7, r5
	stb      r5, 0x47(r3)
	lbz      r5, 1(r4)
	lbz      r8, 2(r4)
	lbz      r7, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r5, r5, 4, 0x14, 0x1b
	slwi     r8, r8, 2
	lbz      r9, 3(r4)
	add      r5, r5, r8
	slwi     r7, r7, 6
	add      r5, r5, r9
	add      r5, r7, r5
	stb      r5, 0x48(r3)
	lbz      r8, 2(r4)
	lbz      r5, 1(r4)
	lbz      r7, j2dDefaultTevSwapModeTable@sda21(r2)
	slwi     r8, r8, 2
	slwi     r5, r5, 4
	lbz      r9, 3(r4)
	add      r4, r5, r8
	slwi     r5, r7, 6
	add      r4, r4, r9
	add      r4, r5, r4
	stb      r4, 0x49(r3)
	lwz      r5, 4(r6)
	lwz      r4, 8(r6)
	stw      r5, 0x14(r1)
	lwz      r5, 0(r6)
	stw      r4, 0x18(r1)
	lbz      r4, 0x17(r1)
	stw      r5, 0x10(r1)
	lbz      r5, 0x18(r1)
	slwi     r4, r4, 0x15
	lbz      r6, 0x16(r1)
	slwi     r5, r5, 0x16
	lbz      r7, 0x13(r1)
	or       r4, r5, r4
	slwi     r6, r6, 0x14
	lbz      r8, 0x15(r1)
	or       r4, r6, r4
	slwi     r5, r7, 0x10
	lbz      r9, 0x14(r1)
	lbz      r10, 0x12(r1)
	or       r4, r5, r4
	slwi     r6, r8, 0xb
	lbz      r11, 0x11(r1)
	or       r4, r6, r4
	slwi     r7, r9, 8
	or       r4, r7, r4
	slwi     r5, r10, 4
	slwi     r6, r11, 2
	lbz      r7, 0x10(r1)
	or       r4, r5, r4
	or       r4, r6, r4
	or       r4, r7, r4
	stw      r4, 0x4c(r3)
	stw      r0, 0x54(r3)
	stw      r0, 0x58(r3)
	lwz      r31, 0x2c(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8004A65C
 * @note Size: 0xBC
 */
bool J2DTevBlock1::prepareTexture(u8 count)
{
	if (count == 0) {
		return true;
	}
	if (mTextures[0] == nullptr) {
		mTextures[0] = new JUTTexture();
		if (mTextures[0] == nullptr) {
			return false;
		}
		mUndeleteFlag = mUndeleteFlag & 0x80 | 1;
	}
	return count <= 1;
}

/**
 * @note Address: 0x8004A718
 * @note Size: 0x134
 * insertTexture__12J2DTevBlock1FUlPC7ResTIMGP10JUTPalette
 */
bool J2DTevBlock1::insertTexture(u32 id, const ResTIMG* timg, JUTPalette* tlut)
{
	if (id != 0 || timg == nullptr) {
		return false;
	}

	if (mTextures[0] && mTextures[0]->getTexInfo()) {
		return false;
	}

	if (mTextures[0] == nullptr) {
		mTextures[0] = new JUTTexture(timg, 0);

		if (mTextures[0] == nullptr) {
			return false;
		}

		if (tlut) {
			mTextures[0]->storeTIMG(timg, tlut);
		}
	} else if (tlut == nullptr) {
		mTextures[0]->storeTIMG(timg, (u8)0);
	} else {
		mTextures[0]->storeTIMG(timg, tlut);
	}

	mUndeleteFlag  = (mUndeleteFlag & 0x80) | 1;
	mPalettes[0]   = nullptr;
	mTexIndices[0] = -1;
	return true;
}

/**
 * @note Address: 0x8004A84C
 * @note Size: 0xA8
 * insertTexture__12J2DTevBlock1FUlP10JUTTexture
 */
bool J2DTevBlock1::insertTexture(u32 id, JUTTexture* tex)
{
	if (mTextures[0] && mTextures[0]->getTexInfo()) {
		return false;
	}

	if (id != 0 || tex == nullptr) {
		return false;
	}

	if (mUndeleteFlag & 1) {
		delete mTextures[0];
	}

	mTextures[0] = tex;
	mUndeleteFlag &= 0x80;
	mPalettes[0]   = nullptr;
	mTexIndices[0] = -1;
	return true;
}

/**
 * @note Address: 0x8004A8F4
 * @note Size: 0x198
 * setTexture__12J2DTevBlock1FUlPC7ResTIMG
 */
bool J2DTevBlock1::setTexture(u32 id, const ResTIMG* timg)
{
	if (id != 0) {
		return false;
	}

	if (mTextures[0] == nullptr) {
		if (timg) {
			mTextures[0] = new JUTTexture(timg, 0);

			if (mTextures[0] == nullptr) {
				return false;
			}

			mUndeleteFlag = (mUndeleteFlag & 0x80) | 1;
		} else {
			mUndeleteFlag &= 0x80;
		}
	} else if (mUndeleteFlag & 1) {
		if (timg) {
			mTextures[0]->storeTIMG(timg, (u8)0);
		} else {
			delete mTextures[0];
			mTextures[0] = nullptr;
			mUndeleteFlag &= 0x80;
		}
	} else {
		mTextures[0] = nullptr;

		if (timg) {
			mTextures[0] = new JUTTexture(timg, 0);

			if (mTextures[0] == nullptr) {
				return false;
			}

			mUndeleteFlag = (mUndeleteFlag & 0x80) | 1;
		}
	}

	delete mPalettes[0];
	mPalettes[0]   = nullptr;
	mTexIndices[0] = -1;
	return true;
}

/**
 * @note Address: 0x8004AA8C
 * @note Size: 0x8C
 * setTexture__12J2DTevBlock1FUlP10JUTTexture
 */
bool J2DTevBlock1::setTexture(u32 index, JUTTexture* texture)
{
	if (index != 0) {
		return false;
	}
	if ((mUndeleteFlag & 1) != 0) {
		delete mTextures[0];
	}
	mTextures[0] = texture;
	mUndeleteFlag &= 0x80;
	delete mPalettes[0];
	mPalettes[0]   = nullptr;
	mTexIndices[0] = 0xFFFF;
	return true;
}

/**
 * @note Address: 0x8004AB18
 * @note Size: 0x7C
 * removeTexture__12J2DTevBlock1FUl
 */
bool J2DTevBlock1::removeTexture(u32 id)
{
	if (id >= 1) {
		return false;
	}

	if (mUndeleteFlag & 1) {
		delete mTextures[0];
	}

	mTextures[0] = nullptr;
	mUndeleteFlag &= 0x80;
	delete mPalettes[0];
	mTexIndices[0] = -1;
	return true;
}

/**
 * @note Address: 0x8004AB94
 * @note Size: 0xBC
 * setFont__12J2DTevBlock1FP7ResFONT
 */
bool J2DTevBlock1::setFont(ResFONT* font)
{
	if (font == nullptr) {
		return false;
	}
	JUTResFont* jutFont = new JUTResFont(font, nullptr);
	if (jutFont == nullptr) {
		return false;
	}
	if ((mUndeleteFlag & 0x80) != 0) {
		delete mFont;
	}
	mFont         = jutFont;
	mUndeleteFlag = mUndeleteFlag & 0x7F | 0x80;
	return true;
}

/**
 * @note Address: 0x8004AC50
 * @note Size: 0x80
 * setFont__12J2DTevBlock1FP7JUTFont
 */
bool J2DTevBlock1::setFont(JUTFont* font)
{
	if (font == nullptr) {
		return false;
	}
	if ((mUndeleteFlag & 0x80) != 0) {
		delete mFont;
	}
	mFont = static_cast<JUTResFont*>(font);
	mUndeleteFlag &= 0x7F;
	return true;
}

/**
 * @note Address: 0x8004ACD0
 * @note Size: 0xC8
 * setPalette__12J2DTevBlock1FUlPC7ResTLUT
 */
bool J2DTevBlock1::setPalette(u32 index, const ResTLUT* lut)
{
	if (index != 0) {
		return false;
	}
	if (lut != nullptr) {
		if (mPalettes[0] == nullptr) {
			mPalettes[0] = new JUTPalette(0, const_cast<ResTLUT*>(lut));
			if (mPalettes[0] == nullptr) {
				return false;
			}
		} else {
			mPalettes[0]->storeTLUT(GX_TLUT0, const_cast<ResTLUT*>(lut));
		}
		if (mTextures[0] != nullptr) {
			mTextures[0]->attachPalette(mPalettes[0]);
		}
	} else {
		delete mPalettes[0];
		mPalettes[0] = nullptr;
	}
	return true;
}

/**
 * @note Address: 0x8004AD98
 * @note Size: 0x10
 * shiftDeleteFlag__12J2DTevBlock1FUcb
 */
void J2DTevBlock1::shiftDeleteFlag(u8 flag, bool direction)
{
	mUndeleteFlag = mUndeleteFlag & 0x80;
}

/**
 * @note Address: 0x8004ADA8
 * @note Size: 0x24C
 * setGX__12J2DTevBlock1Fv
 */
void J2DTevBlock1::setGX()
{
	loadTexture(GX_TEXMAP0, 0);
	GXSetTevOrder(GX_TEVSTAGE0, mOrders[0].getTexCoord(), mOrders[0].getTexMap(), mOrders[0].getColor());

	for (int i = 0; i < 4; i++) {
		GXSetTevColorS10(i != 3 ? GXTevRegID(i + 1) : GX_TEVPREV, mColors[i]);
	}

	GXSetNumTevStages(1);
	GXSetTevColorIn(GX_TEVSTAGE0, GXTevColorArg(mStages[0].getColorA()), GXTevColorArg(mStages[0].getColorB()),
	                GXTevColorArg(mStages[0].getColorC()), GXTevColorArg(mStages[0].getColorD()));
	GXSetTevAlphaIn(GX_TEVSTAGE0, GXTevAlphaArg(mStages[0].getAlphaA()), GXTevAlphaArg(mStages[0].getAlphaB()),
	                GXTevAlphaArg(mStages[0].getAlphaC()), GXTevAlphaArg(mStages[0].getAlphaD()));
	GXSetTevColorOp(GX_TEVSTAGE0, GXTevOp(mStages[0].getCOp()), GXTevBias(mStages[0].getCBias()), GXTevScale(mStages[0].getCScale()),
	                mStages[0].getCClamp(), GXTevRegID(mStages[0].getCReg()));
	GXSetTevAlphaOp(GX_TEVSTAGE0, (GXTevOp)mStages[0].getAOp(), GXTevBias(mStages[0].getABias()), GXTevScale(mStages[0].getAScale()),
	                mStages[0].getAClamp(), GXTevRegID(mStages[0].getAReg()));
	GXSetTevKColorSel(GX_TEVSTAGE0, mKColorSels[0] != 0xff ? GXTevKColorSel(mKColorSels[0]) : GX_TEV_KCSEL_1);
	GXSetTevKAlphaSel(GX_TEVSTAGE0, mKAlphaSels[0] != 0xff ? GXTevKAlphaSel(mKAlphaSels[0]) : GX_TEV_KASEL_1);
	for (int i = 0; i < 4; i++) {
		GXSetTevKColor(GXTevKColorID(i), mKColors[i]);
	}
	GXSetTevSwapMode(GX_TEVSTAGE0, GXTevSwapSel(mStages[0].getRasSel()), GXTevSwapSel(mStages[0].getTexSel()));
	for (int i = 0; i < 4; i++) {
		GXSetTevSwapModeTable(GXTevSwapSel(i), GXTevColorChan(mSwapModeTables[i].getR()), GXTevColorChan(mSwapModeTables[i].getG()),
		                      GXTevColorChan(mSwapModeTables[i].getB()), GXTevColorChan(mSwapModeTables[i].getA()));
	}
	mIndStages->load(0);
}

/**
 * @note Address: 0x8004AFF4
 * @note Size: 0x48
 * loadTexture__12J2DTevBlock1F11_GXTexMapIDUl
 */
void J2DTevBlock1::loadTexture(_GXTexMapID id, u32 index)
{
	if (index == 0 && mTextures[index] && mTextures[index]->mTexInfo) {
		mTextures[index]->load(id);
	}
}

/**
 * @note Address: 0x8004B03C
 * @note Size: 0x110
 * __ct__12J2DTevBlock2Fv
 */
J2DTevBlock2::J2DTevBlock2()
    : J2DTevBlock()
    , mOrders()
    , mColors()
    , mStages()
    , mKColors()
    , mSwapModeTables()
    , mIndStages()
{
	for (int i = 0; i < 2; i++) {
		mTextures[i] = nullptr;
	}
	mUndeleteFlag = 0;
	initialize();
}

/**
 * @note Address: 0x8004B14C
 * @note Size: 0xD8
 * __dt__12J2DTevBlock2Fv
 */
J2DTevBlock2::~J2DTevBlock2()
{
	if ((mUndeleteFlag & 1) != 0) {
		delete mTextures[0];
	}
	if ((mUndeleteFlag & 2) != 0) {
		delete mTextures[1];
	}
	delete mPalettes[0];
	delete mPalettes[1];
	if ((mUndeleteFlag & 0x80) != 0) {
		delete mFont;
	}
}

/**
 * @note Address: 0x8004B224
 * @note Size: 0x350
 * initialize__12J2DTevBlock2Fv
 */
void J2DTevBlock2::initialize()
{
	for (int i = 0; i < 2; i++) {
		mTexIndices[i] = -1;
	}
	mFontNo = -1;
	for (int i = 0; i < 2; i++) {
		mOrders[i].setTevOrderInfo(j2dDefaultTevOrderInfoNull);
	}
	for (int i = 0; i < 4; i++) {
		mColors[i] = j2dDefaultTevColor;
	}
	mStageNum = 1;
	for (int i = 0; i < 2; i++) {
		mStages[i].setStageNo(i);
	}
	for (int i = 0; i < 4; i++) {
		mKColors[i] = j2dDefaultTevKColor;
	}

	for (int i = 0; i < 2; i++) {
		mKColorSels[i] = 255;
	}
	for (int i = 0; i < 2; i++) {
		mKAlphaSels[i] = 255;
	}

	for (int i = 0; i < 4; i++) {
		mSwapModeTables[i] = j2dDefaultTevSwapModeTable;
	}

	mIndStages[0].setIndTevStageInfo(j2dDefaultIndTevStageInfo);
	mIndStages[1].setIndTevStageInfo(j2dDefaultIndTevStageInfo);

	for (int i = 0; i < 2; i++) {
		mPalettes[i] = nullptr;
	}
	mFont = nullptr;
	/*
	stwu     r1, -0x40(r1)
	addi     r7, r2, j2dDefaultTevColor@sda21
	lis      r4, 0x0000FFFF@ha
	lha      r12, 2(r7)
	stw      r31, 0x3c(r1)
	addi     r0, r4, 0x0000FFFF@l
	lha      r31, j2dDefaultTevColor@sda21(r2)
	li       r9, 1
	stw      r30, 0x38(r1)
	li       r8, 0xc0
	lha      r11, 4(r7)
	li       r6, 0xc1
	stw      r29, 0x34(r1)
	li       r5, 0xc2
	lha      r10, 6(r7)
	li       r4, 0xc3
	stw      r28, 0x30(r1)
	addi     r28, r2, j2dDefaultTevOrderInfoNull@sda21
	mr       r29, r3
	lwz      r7, j2dDefaultTevKColor@sda21(r2)
	sth      r0, 4(r3)
	sth      r0, 6(r3)
	sth      r0, 8(r3)
	li       r0, 2
	lbz      r30, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r30, 0xa(r3)
	lbz      r30, 1(r28)
	stb      r30, 0xb(r3)
	lbz      r30, 2(r28)
	stb      r30, 0xc(r3)
	lbz      r30, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r30, 0xe(r3)
	lbz      r30, 1(r28)
	stb      r30, 0xf(r3)
	lbz      r30, 2(r28)
	stb      r30, 0x10(r3)
	sth      r31, 0x12(r3)
	sth      r12, 0x14(r3)
	sth      r11, 0x16(r3)
	sth      r10, 0x18(r3)
	sth      r31, 0x1a(r3)
	sth      r12, 0x1c(r3)
	sth      r11, 0x1e(r3)
	sth      r10, 0x20(r3)
	sth      r31, 0x22(r3)
	sth      r12, 0x24(r3)
	sth      r11, 0x26(r3)
	sth      r10, 0x28(r3)
	sth      r31, 0x2a(r3)
	sth      r12, 0x2c(r3)
	sth      r11, 0x2e(r3)
	sth      r10, 0x30(r3)
	stb      r9, 0x32(r3)
	stb      r8, 0x33(r3)
	stb      r6, 0x37(r3)
	stb      r5, 0x3b(r3)
	stb      r4, 0x3f(r3)
	mtctr    r0

lbl_8004B30C:
	stw      r7, 8(r1)
	lbz      r6, 8(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x44(r29)
	lbz      r4, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r5, 0x45(r29)
	stb      r4, 0x46(r29)
	stw      r7, 8(r1)
	stb      r6, 0xc(r1)
	lbz      r6, 8(r1)
	stb      r0, 0x47(r29)
	stb      r5, 0xd(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x48(r29)
	stb      r4, 0xe(r1)
	lbz      r4, 0xa(r1)
	stb      r5, 0x49(r29)
	stb      r0, 0xf(r1)
	lbz      r0, 0xb(r1)
	stb      r4, 0x4a(r29)
	stb      r0, 0x4b(r29)
	addi     r29, r29, 8
	stb      r6, 0xc(r1)
	stb      r5, 0xd(r1)
	stb      r4, 0xe(r1)
	stb      r0, 0xf(r1)
	bdnz     lbl_8004B30C
	li       r0, 0xff
	lis      r4, j2dDefaultIndTevStageInfo@ha
	stb      r0, 0x54(r3)
	addi     r5, r2, j2dDefaultTevSwapModeTable@sda21
	addi     r4, r4, j2dDefaultIndTevStageInfo@l
	stb      r0, 0x55(r3)
	stb      r0, 0x56(r3)
	stb      r0, 0x57(r3)
	lbz      r0, 1(r5)
	lbz      r7, 2(r5)
	lbz      r6, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r0, r0, 4, 0x14, 0x1b
	slwi     r7, r7, 2
	lbz      r8, 3(r5)
	add      r0, r0, r7
	slwi     r6, r6, 6
	add      r0, r0, r8
	add      r0, r6, r0
	stb      r0, 0x58(r3)
	lbz      r0, 1(r5)
	lbz      r7, 2(r5)
	lbz      r6, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r0, r0, 4, 0x14, 0x1b
	slwi     r7, r7, 2
	lbz      r8, 3(r5)
	add      r0, r0, r7
	slwi     r6, r6, 6
	add      r0, r0, r8
	add      r0, r6, r0
	stb      r0, 0x59(r3)
	lbz      r0, 1(r5)
	lbz      r7, 2(r5)
	lbz      r6, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r0, r0, 4, 0x14, 0x1b
	slwi     r7, r7, 2
	lbz      r8, 3(r5)
	add      r0, r0, r7
	slwi     r6, r6, 6
	add      r0, r0, r8
	add      r0, r6, r0
	stb      r0, 0x5a(r3)
	lbz      r7, 2(r5)
	lbz      r0, 1(r5)
	lbz      r6, j2dDefaultTevSwapModeTable@sda21(r2)
	slwi     r7, r7, 2
	slwi     r0, r0, 4
	lbz      r8, 3(r5)
	add      r0, r0, r7
	slwi     r5, r6, 6
	add      r0, r0, r8
	add      r0, r5, r0
	stb      r0, 0x5b(r3)
	lwz      r5, 4(r4)
	lwz      r0, 8(r4)
	stw      r5, 0x20(r1)
	lwz      r5, 0(r4)
	stw      r0, 0x24(r1)
	lbz      r0, 0x23(r1)
	stw      r5, 0x1c(r1)
	lbz      r5, 0x24(r1)
	slwi     r0, r0, 0x15
	lbz      r6, 0x22(r1)
	slwi     r5, r5, 0x16
	lbz      r7, 0x1f(r1)
	or       r0, r5, r0
	slwi     r6, r6, 0x14
	lbz      r8, 0x21(r1)
	or       r0, r6, r0
	slwi     r5, r7, 0x10
	lbz      r9, 0x20(r1)
	lbz      r10, 0x1e(r1)
	or       r0, r5, r0
	slwi     r6, r8, 0xb
	lbz      r11, 0x1d(r1)
	or       r0, r6, r0
	slwi     r7, r9, 8
	or       r0, r7, r0
	slwi     r5, r10, 4
	slwi     r6, r11, 2
	lbz      r7, 0x1c(r1)
	or       r0, r5, r0
	or       r0, r6, r0
	or       r0, r7, r0
	stw      r0, 0x5c(r3)
	lwz      r6, 0(r4)
	lwz      r5, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r0, 0x18(r1)
	lbz      r5, 0x18(r1)
	li       r0, 0
	lbz      r4, 0x17(r1)
	lbz      r6, 0x16(r1)
	slwi     r5, r5, 0x16
	slwi     r4, r4, 0x15
	lbz      r7, 0x13(r1)
	lbz      r8, 0x15(r1)
	slwi     r6, r6, 0x14
	or       r4, r5, r4
	lbz      r9, 0x14(r1)
	lbz      r10, 0x12(r1)
	slwi     r5, r7, 0x10
	or       r4, r6, r4
	lbz      r11, 0x11(r1)
	slwi     r6, r8, 0xb
	slwi     r7, r9, 8
	or       r4, r5, r4
	slwi     r5, r10, 4
	or       r4, r6, r4
	slwi     r6, r11, 2
	or       r4, r7, r4
	lbz      r7, 0x10(r1)
	or       r4, r5, r4
	or       r4, r6, r4
	or       r4, r7, r4
	stw      r4, 0x60(r3)
	stw      r0, 0x6c(r3)
	stw      r0, 0x70(r3)
	stw      r0, 0x74(r3)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8004B574
 * @note Size: 0xE0
 * prepareTexture__12J2DTevBlock2FUc
 */
bool J2DTevBlock2::prepareTexture(u8 count)
{
	for (u8 i = 0; i < count; i++) {
		if (i >= 2) {
			return false;
		}
		if (mTextures[i] == nullptr) {
			mTextures[i] = new JUTTexture();
			if (mTextures[i] == nullptr) {
				return false;
			}
			mUndeleteFlag |= (1 << i);
		}
	}
	return true;
}

/**
 * @note Address: 0x8004B654
 * @note Size: 0x2CC
 * insertTexture__12J2DTevBlock2FUlPC7ResTIMGP10JUTPalette
 */
bool J2DTevBlock2::insertTexture(u32 id, const ResTIMG* timg, JUTPalette* tlut)
{
	if (id >= 2 || timg == nullptr) {
		return false;
	}

	u8 texNo = 0;
	for (; texNo < 2; texNo++) {
		if (mTextures[texNo] == nullptr || mTextures[texNo]->getTexInfo() == nullptr) {
			break;
		}
	}

	if (texNo < id) {
		return false;
	}

	if (texNo == 2) {
		return false;
	}

	JUTTexture* tex;
	u8 tlutid = 0;
	if (timg->mPaletteFormat && tlut == nullptr) {
		tex = mTextures[0];
		if (tex != nullptr && tex->getTexInfo() != nullptr && tex->getTexInfo()->mPaletteFormat) {
			int tlutname = tex->getTlutName();
			if (tlutname == GX_TLUT0 || tlutname == GX_BIGTLUT0) {
				tlutid = 1;
			}
		}
	}

	tex = mTextures[texNo];
	if (tex == nullptr) {
		JUTTexture* newtex = new JUTTexture(timg, tlutid);

		if (newtex == nullptr) {
			return false;
		}

		if (tlut != nullptr) {
			newtex->storeTIMG(timg, tlut);
		}

		if (id == 0) {
			mTextures[1]   = mTextures[0];
			mPalettes[1]   = mPalettes[0];
			mTexIndices[1] = mTexIndices[0];
		}
		mTextures[id] = newtex;
		shiftDeleteFlag(id, true);
		mUndeleteFlag |= (1 << id);
	} else {
		if (tlut == nullptr) {
			tex->storeTIMG(timg, tlutid);
		} else {
			tex->storeTIMG(timg, tlut);
		}

		bool local_28[2];
		for (u8 i = 0; i < 2; i++) {
			local_28[i] = mUndeleteFlag & (1 << i);
		}

		if (id == 0 && texNo == 1) {
			mTextures[1]   = mTextures[0];
			mPalettes[1]   = mPalettes[0];
			mTexIndices[1] = mTexIndices[0];
			local_28[1]    = local_28[0];
		}
		mTextures[id] = tex;
		mUndeleteFlag &= 0x80;

		for (u8 i = 0; i < 2; i++) {
			if (local_28[i]) {
				mUndeleteFlag |= (1 << i);
			}
		}

		mUndeleteFlag |= (1 << id);
	}

	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	return true;
}

/**
 * @note Address: 0x8004B920
 * @note Size: 0x168
 * insertTexture__12J2DTevBlock2FUlP10JUTTexture
 */
bool J2DTevBlock2::insertTexture(u32 id, JUTTexture* tex)
{
	if (id >= 2 || tex == nullptr) {
		return false;
	}

	u8 texNo = 0;
	for (; texNo < 2; texNo++) {
		if (mTextures[texNo] == nullptr || mTextures[texNo]->getTexInfo() == nullptr) {
			break;
		}
	}

	if (texNo < id) {
		return false;
	}

	if (texNo == 2) {
		return false;
	}

	if (mTextures[1] != nullptr && mTextures[1]->getTexInfo() == nullptr) {
		if (mUndeleteFlag & 2) {
			delete mTextures[1];
		}

		mUndeleteFlag &= ~2;
	}

	if (id == 0) {
		mTextures[1]   = mTextures[0];
		mPalettes[1]   = mPalettes[0];
		mTexIndices[1] = mTexIndices[0];
	}

	mTextures[id]   = tex;
	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	shiftDeleteFlag(id, true);
	mUndeleteFlag &= ~(1 << id);
	return true;
}

/**
 * @note Address: 0x8004BA88
 * @note Size: 0x21C
 * setTexture__12J2DTevBlock2FUlPC7ResTIMG
 */
bool J2DTevBlock2::setTexture(u32 id, const ResTIMG* timg)
{
	if (id >= 2) {
		return false;
	}

	u8 tlutid = 0;
	if (timg && timg->mPaletteFormat) {
		JUTTexture* tex = mTextures[id == 0];
		if (tex) {
			const ResTIMG* timg = tex->getTexInfo();
			if (timg != nullptr && timg->mPaletteFormat) {
				int tlutname = tex->getTlutName();
				u8 var_r0    = 0;

				if (tlutname >= 16) {
					var_r0 = 16;
				}

				if (u8(tlutname - (tlutname >= GX_BIGTLUT0 ? GX_BIGTLUT0 : GX_TLUT0)) == 0) {
					tlutid = 1;
				}
			}
		}
	}

	if (mTextures[id] == nullptr) {
		if (timg) {
			mTextures[id] = new JUTTexture(timg, tlutid);

			if (mTextures[id] == nullptr) {
				return false;
			}

			mUndeleteFlag |= (1 << id);
		} else {
			mUndeleteFlag &= ~(1 << id);
		}
	} else if (mUndeleteFlag & (1 << id)) {
		if (timg != nullptr) {
			mTextures[id]->storeTIMG(timg, tlutid);
		} else {
			delete mTextures[id];
			mTextures[id] = nullptr;
			mUndeleteFlag &= ~(1 << id);
		}
	} else {
		mTextures[id] = nullptr;

		if (timg != nullptr) {
			mTextures[id] = new JUTTexture(timg, 0);

			if (mTextures[id] == nullptr) {
				return false;
			}

			mUndeleteFlag |= (1 << id);
		}
	}

	delete mPalettes[id];
	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	return true;
}

/**
 * @note Address: 0x8004BCA4
 * @note Size: 0xA8
 * setTexture__12J2DTevBlock2FUlP10JUTTexture
 */
bool J2DTevBlock2::setTexture(u32 index, JUTTexture* texture)
{
	if (index >= 2) {
		return false;
	}
	if ((mUndeleteFlag & 1 << index) != 0) {
		delete mTextures[index];
	}
	mTextures[index] = texture;
	mUndeleteFlag &= ~(1 << index);
	delete mPalettes[index];
	mPalettes[index]   = nullptr;
	mTexIndices[index] = 0xFFFF;
	return true;
}

/**
 * @note Address: 0x8004BD4C
 * @note Size: 0xD4
 * removeTexture__12J2DTevBlock2FUl
 */
bool J2DTevBlock2::removeTexture(u32 id)
{
	if (id >= 2) {
		return false;
	}

	if (mUndeleteFlag & (1 << id)) {
		delete mTextures[id];
	}
	delete mPalettes[id];

	if (id == 0) {
		mTextures[0]   = mTextures[1];
		mPalettes[0]   = mPalettes[1];
		mTexIndices[0] = mTexIndices[1];
	}

	mTextures[1]   = nullptr;
	mPalettes[1]   = nullptr;
	mTexIndices[1] = -1;
	shiftDeleteFlag(id, false);
	return true;
}

/**
 * @note Address: 0x8004BE20
 * @note Size: 0xBC
 * setFont__12J2DTevBlock2FP7ResFONT
 */
bool J2DTevBlock2::setFont(ResFONT* font)
{
	if (font == nullptr) {
		return false;
	}
	JUTResFont* jutFont = new JUTResFont(font, nullptr);
	if (jutFont == nullptr) {
		return false;
	}
	if ((mUndeleteFlag & 0x80) != 0) {
		delete mFont;
	}
	mFont         = jutFont;
	mUndeleteFlag = mUndeleteFlag & 0x7F | 0x80;
	return true;
}

/**
 * @note Address: 0x8004BEDC
 * @note Size: 0x80
 * setFont__12J2DTevBlock2FP7JUTFont
 */
bool J2DTevBlock2::setFont(JUTFont* font)
{
	if (font == nullptr) {
		return false;
	}
	if ((mUndeleteFlag & 0x80) != 0) {
		delete mFont;
	}
	mFont = static_cast<JUTResFont*>(font);
	mUndeleteFlag &= 0x7F;
	return true;
}

/**
 * @note Address: 0x8004BF5C
 * @note Size: 0xD0
 * setPalette__12J2DTevBlock2FUlPC7ResTLUT
 */
bool J2DTevBlock2::setPalette(u32 index, const ResTLUT* lut)
{
	if (index >= 2) {
		return false;
	}
	if (lut) {
		if (mPalettes[index] == nullptr) {
			mPalettes[index] = new JUTPalette(index, const_cast<ResTLUT*>(lut));
			if (mPalettes[index] == nullptr) {
				return false;
			}
		} else {
			mPalettes[index]->storeTLUT(GX_TLUT0, const_cast<ResTLUT*>(lut));
		}
		if (mTextures[index]) {
			mTextures[index]->attachPalette(mPalettes[index]);
		}
	} else {
		delete mPalettes[index];
		mPalettes[index] = nullptr;
	}
	return true;
}

/**
 * @note Address: 0x8004C02C
 * @note Size: 0x88
 * shiftDeleteFlag__12J2DTevBlock2FUcb
 */
void J2DTevBlock2::shiftDeleteFlag(u8 p1, bool p2)
{
	u8 fontFlag = mUndeleteFlag & 0x80;
	mUndeleteFlag &= 0x7F;
	if (p2) {
		u32 v1        = ((1 << p1) - 1);
		mUndeleteFlag = (mUndeleteFlag & v1) | ((mUndeleteFlag & ~v1) << 1);
	} else {
		mUndeleteFlag = (mUndeleteFlag & (1 << p1) - 1) | ((mUndeleteFlag & ~((1 << (p1 + 1)) - 1)) >> 1);
	}
	mUndeleteFlag = mUndeleteFlag | fontFlag;
}

/**
 * @note Address: 0x8004C0B4
 * @note Size: 0x2E8
 * setGX__12J2DTevBlock2Fv
 */
void J2DTevBlock2::setGX()
{
	for (int i = 0; i < 2; i++) {
		loadTexture(GXTexMapID(i), i);
	}
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevOrder(GXTevStageID(i), mOrders[i].getTexCoord(), mOrders[i].getTexMap(), mOrders[i].getColor());
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevColorS10(i != 3 ? GXTevRegID(i + 1) : GX_TEVPREV, mColors[i]);
	}
	GXSetNumTevStages(mStageNum);
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevColorIn(GXTevStageID(i), GXTevColorArg(mStages[i].getColorA()), GXTevColorArg(mStages[i].getColorB()),
		                GXTevColorArg(mStages[i].getColorC()), GXTevColorArg(mStages[i].getColorD()));
		GXSetTevAlphaIn(GXTevStageID(i), GXTevAlphaArg(mStages[i].getAlphaA()), GXTevAlphaArg(mStages[i].getAlphaB()),
		                GXTevAlphaArg(mStages[i].getAlphaC()), GXTevAlphaArg(mStages[i].getAlphaD()));
		GXSetTevColorOp(GXTevStageID(i), GXTevOp(mStages[i].getCOp()), GXTevBias(mStages[i].getCBias()), GXTevScale(mStages[i].getCScale()),
		                mStages[i].getCClamp(), GXTevRegID(mStages[i].getCReg()));
		GXSetTevAlphaOp(GXTevStageID(i), (GXTevOp)mStages[i].getAOp(), GXTevBias(mStages[i].getABias()), GXTevScale(mStages[i].getAScale()),
		                mStages[i].getAClamp(), GXTevRegID(mStages[i].getAReg()));
		GXSetTevKColorSel(GXTevStageID(i), mKColorSels[i] != 0xff ? GXTevKColorSel(mKColorSels[i]) : GX_TEV_KCSEL_1);
		GXSetTevKAlphaSel(GXTevStageID(i), mKAlphaSels[i] != 0xff ? GXTevKAlphaSel(mKAlphaSels[i]) : GX_TEV_KASEL_1);
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevKColor(GXTevKColorID(i), mKColors[i]);
	}
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevSwapMode(GXTevStageID(i), GXTevSwapSel(mStages[i].getRasSel()), GXTevSwapSel(mStages[i].getTexSel()));
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevSwapModeTable(GXTevSwapSel(i), GXTevColorChan(mSwapModeTables[i].getR()), GXTevColorChan(mSwapModeTables[i].getG()),
		                      GXTevColorChan(mSwapModeTables[i].getB()), GXTevColorChan(mSwapModeTables[i].getA()));
	}
	for (u8 i = 0; i < mStageNum; i++) {
		mIndStages[i].load(i);
	}
}

/**
 * @note Address: 0x8004C39C
 * @note Size: 0x48
 * loadTexture__12J2DTevBlock2F11_GXTexMapIDUl
 */
void J2DTevBlock2::loadTexture(_GXTexMapID id, u32 index)
{
	if (index < 2 && mTextures[index] != nullptr && mTextures[index]->mTexInfo != nullptr) {
		mTextures[index]->load(id);
	}
}

/**
 * @note Address: 0x8004C3E4
 * @note Size: 0x118
 */
J2DTevBlock4::J2DTevBlock4()
    : J2DTevBlock()
    , mOrders()
    , mColors()
    , mStages()
    , mKColors()
    , mSwapModeTables()
    , mIndStages()
{
	for (int i = 0; i < 4; i++) {
		mTextures[i] = nullptr;
	}
	mUndeleteFlag = 0;
	initialize();
}

/**
 * @note Address: 0x8004C4FC
 * @note Size: 0xD0
 */
J2DTevBlock4::~J2DTevBlock4()
{
	for (int i = 0; i < 4; i++) {
		if ((mUndeleteFlag & 1 << i) != 0) {
			delete mTextures[i];
		}
		delete mPalettes[i];
	}
	if ((mUndeleteFlag & 0x80) != 0) {
		delete mFont;
	}
}

/**
 * @note Address: 0x8004C5CC
 * @note Size: 0x3BC
 */
void J2DTevBlock4::initialize()
{
	for (int i = 0; i < 4; i++) {
		mTexIndices[i] = -1;
	}
	mFontNo = -1;
	for (int i = 0; i < 4; i++) {
		mOrders[i].setTevOrderInfo(j2dDefaultTevOrderInfoNull);
	}
	for (int i = 0; i < 4; i++) {
		mColors[i] = j2dDefaultTevColor;
	}
	mStageNum = 1;
	for (int i = 0; i < 4; i++) {
		mStages[i].setStageNo(i);
	}
	for (int i = 0; i < 4; i++) {
		mKColors[i] = j2dDefaultTevKColor;
	}
	for (int i = 0; i < 4; i++) {
		mKColorSels[i] = -1;
		mKAlphaSels[i] = -1;
	}
	for (int i = 0; i < 4; i++) {
		mSwapModeTables[i] = j2dDefaultTevSwapModeTable;
	}
	for (int i = 0; i < 4; i++) {
		mIndStages[i].setIndTevStageInfo(j2dDefaultIndTevStageInfo);
	}
	for (int i = 0; i < 4; i++) {
		mPalettes[i] = nullptr;
	}
	mFont = nullptr;
	/*
	stwu     r1, -0x40(r1)
	lis      r4, 0x0000FFFF@ha
	addi     r0, r4, 0x0000FFFF@l
	addi     r5, r2, j2dDefaultTevOrderInfoNull@sda21
	stmw     r24, 0x20(r1)
	addi     r6, r2, j2dDefaultTevColor@sda21
	lha      r25, j2dDefaultTevColor@sda21(r2)
	li       r29, 1
	lha      r26, 2(r6)
	li       r30, 0xc0
	lha      r27, 4(r6)
	li       r31, 0xc1
	lha      r28, 6(r6)
	li       r12, 0xc2
	li       r11, 0xc3
	li       r10, 0xc4
	li       r9, 0xc5
	li       r7, 0xc6
	li       r6, 0xc7
	mr       r4, r3
	lwz      r8, j2dDefaultTevKColor@sda21(r2)
	sth      r0, 4(r3)
	sth      r0, 6(r3)
	sth      r0, 8(r3)
	sth      r0, 0xa(r3)
	sth      r0, 0xc(r3)
	li       r0, 2
	lbz      r24, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r24, 0xe(r3)
	lbz      r24, 1(r5)
	stb      r24, 0xf(r3)
	lbz      r24, 2(r5)
	stb      r24, 0x10(r3)
	lbz      r24, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r24, 0x12(r3)
	lbz      r24, 1(r5)
	stb      r24, 0x13(r3)
	lbz      r24, 2(r5)
	stb      r24, 0x14(r3)
	lbz      r24, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r24, 0x16(r3)
	lbz      r24, 1(r5)
	stb      r24, 0x17(r3)
	lbz      r24, 2(r5)
	stb      r24, 0x18(r3)
	lbz      r24, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r24, 0x1a(r3)
	lbz      r24, 1(r5)
	stb      r24, 0x1b(r3)
	lbz      r5, 2(r5)
	stb      r5, 0x1c(r3)
	sth      r25, 0x1e(r3)
	sth      r26, 0x20(r3)
	sth      r27, 0x22(r3)
	sth      r28, 0x24(r3)
	sth      r25, 0x26(r3)
	sth      r26, 0x28(r3)
	sth      r27, 0x2a(r3)
	sth      r28, 0x2c(r3)
	sth      r25, 0x2e(r3)
	sth      r26, 0x30(r3)
	sth      r27, 0x32(r3)
	sth      r28, 0x34(r3)
	sth      r25, 0x36(r3)
	sth      r26, 0x38(r3)
	sth      r27, 0x3a(r3)
	sth      r28, 0x3c(r3)
	stb      r29, 0x3e(r3)
	stb      r30, 0x3f(r3)
	stb      r31, 0x43(r3)
	stb      r12, 0x47(r3)
	stb      r11, 0x4b(r3)
	stb      r10, 0x4f(r3)
	stb      r9, 0x53(r3)
	stb      r7, 0x57(r3)
	stb      r6, 0x5b(r3)
	mtctr    r0

lbl_8004C700:
	stw      r8, 8(r1)
	lbz      r7, 8(r1)
	lbz      r6, 9(r1)
	stb      r7, 0x60(r4)
	lbz      r5, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r6, 0x61(r4)
	stb      r5, 0x62(r4)
	stw      r8, 8(r1)
	stb      r7, 0xc(r1)
	lbz      r7, 8(r1)
	stb      r0, 0x63(r4)
	stb      r6, 0xd(r1)
	lbz      r6, 9(r1)
	stb      r7, 0x64(r4)
	stb      r5, 0xe(r1)
	lbz      r5, 0xa(r1)
	stb      r6, 0x65(r4)
	stb      r0, 0xf(r1)
	lbz      r0, 0xb(r1)
	stb      r5, 0x66(r4)
	stb      r0, 0x67(r4)
	addi     r4, r4, 8
	stb      r7, 0xc(r1)
	stb      r6, 0xd(r1)
	stb      r5, 0xe(r1)
	stb      r0, 0xf(r1)
	bdnz     lbl_8004C700
	li       r7, 0xff
	lis      r4, j2dDefaultIndTevStageInfo@ha
	stb      r7, 0x70(r3)
	addi     r6, r2, j2dDefaultTevSwapModeTable@sda21
	li       r0, 2
	mr       r5, r3
	stb      r7, 0x74(r3)
	addi     r4, r4, j2dDefaultIndTevStageInfo@l
	stb      r7, 0x71(r3)
	stb      r7, 0x75(r3)
	stb      r7, 0x72(r3)
	stb      r7, 0x76(r3)
	stb      r7, 0x73(r3)
	stb      r7, 0x77(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x78(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x79(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x7a(r3)
	lbz      r9, 2(r6)
	lbz      r7, 1(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	slwi     r9, r9, 2
	slwi     r7, r7, 4
	lbz      r10, 3(r6)
	add      r6, r7, r9
	slwi     r7, r8, 6
	add      r6, r6, r10
	add      r6, r7, r6
	stb      r6, 0x7b(r3)
	mtctr    r0

lbl_8004C85C:
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0x7c(r5)
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0x80(r5)
	addi     r5, r5, 8
	bdnz     lbl_8004C85C
	li       r0, 0
	stw      r0, 0x9c(r3)
	stw      r0, 0xa0(r3)
	stw      r0, 0xa4(r3)
	stw      r0, 0xa8(r3)
	stw      r0, 0xac(r3)
	lmw      r24, 0x20(r1)
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8004C988
 * @note Size: 0xE0
 * prepareTexture__12J2DTevBlock4FUc
 */
bool J2DTevBlock4::prepareTexture(u8 count)
{
	for (u8 i = 0; i < count; i++) {
		if (i >= 4) {
			return false;
		}
		if (mTextures[i] == nullptr) {
			mTextures[i] = new JUTTexture();
			if (mTextures[i] == nullptr) {
				return false;
			}
			mUndeleteFlag |= (1 << i);
		}
	}
	return true;
}

/**
 * @note Address: 0x8004CA68
 * @note Size: 0x3AC
 */
bool J2DTevBlock4::insertTexture(u32 id, const ResTIMG* timg, JUTPalette* palette)
{
	if (id >= 4 || !timg) {
		return false;
	}
	u8 idx;
	for (idx = 0; idx < 4; idx++) {
		if (!mTextures[idx] || !mTextures[idx]->getTexInfo()) {
			break;
		}
	}
	if (idx < id) {
		return false;
	}
	if (idx == 4) {
		return false;
	}
	u8 local_43 = 0;
	if (timg->mPaletteFormat && !palette) {
		u8 local_44 = 0;
		for (int i = 0; i < 3; i++) {
			if (!mTextures[i]) {
				continue;
			}
			const ResTIMG* texInfo = mTextures[i]->getTexInfo();
			if (!texInfo) {
				continue;
			}
			if (!texInfo->mPaletteFormat) {
				continue;
			}
			int tlutName = mTextures[i]->getTlutName();
			u8 tlut_no   = tlutName - (tlutName >= GX_BIGTLUT0 ? GX_BIGTLUT0 : GX_TLUT0);
			if (tlut_no < 4) {
				local_44 |= 1 << tlut_no;
			}
		}
		for (u8 i = 0; i < 4; i++) {
			if ((local_44 & 1 << i) == 0) {
				local_43 = i;
				break;
			}
		}
	}
	if (!mTextures[idx]) {
		JUTTexture* texture = new JUTTexture(timg, local_43);
		if (!texture) {
			return false;
		}
		if (palette) {
			texture->storeTIMG(timg, palette);
		}
		for (u8 i = 3; i > id; i--) {
			mTextures[i]   = mTextures[i - 1];
			mPalettes[i]   = mPalettes[i - 1];
			mTexIndices[i] = mTexIndices[i - 1];
		}
		mTextures[id] = texture;
		shiftDeleteFlag(id, true);
		mUndeleteFlag |= 1 << id;
	} else {
		JUTTexture* texture = mTextures[idx];
		if (!palette) {
			texture->storeTIMG(timg, local_43);
		} else {
			texture->storeTIMG(timg, palette);
		}
		bool local_38[4];
		for (u8 i = 0; i < 4; i++) {
			local_38[i] = (mUndeleteFlag & 1 << i) != 0;
		}
		for (u8 i = idx; i > id; i--) {
			mTextures[i]   = mTextures[i - 1];
			mPalettes[i]   = mPalettes[i - 1];
			mTexIndices[i] = mTexIndices[i - 1];
			local_38[i]    = local_38[i - 1];
		}
		mTextures[id] = texture;
		mUndeleteFlag &= 0x80;
		for (u8 i = 0; i < 4; i++) {
			if (local_38[i]) {
				mUndeleteFlag |= 1 << i;
			}
		}
		mUndeleteFlag |= 1 << id;
	}
	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	return true;
}

/**
 * @note Address: 0x8004CE14
 * @note Size: 0x198
 */
bool J2DTevBlock4::insertTexture(u32 id, JUTTexture* tex)
{
	if (id >= 4 || tex == nullptr) {
		return false;
	}

	u8 texNo = 0;
	for (; texNo < 4; texNo++) {
		if (mTextures[texNo] == nullptr || mTextures[texNo]->getTexInfo() == nullptr) {
			break;
		}
	}

	if (texNo < id) {
		return false;
	}

	if (texNo == 4) {
		return false;
	}

	if (mTextures[3] != NULL && mTextures[3]->getTexInfo() == nullptr) {
		if (mUndeleteFlag & 0x8) {
			delete mTextures[3];
		}

		mUndeleteFlag &= ~0x8;
	}

	for (u8 i = 3; i > id; i--) {
		mTextures[i]   = mTextures[i - 1];
		mPalettes[i]   = mPalettes[i - 1];
		mTexIndices[i] = mTexIndices[i - 1];
	}

	mTextures[id]   = tex;
	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	shiftDeleteFlag(id, true);
	mUndeleteFlag &= ~(1 << id);
	return true;
}

/**
 * @note Address: 0x8004CFAC
 * @note Size: 0x2E4
 * setTexture__12J2DTevBlock4FUlPC7ResTIMG
 */
bool J2DTevBlock4::setTexture(u32 id, const ResTIMG* timg)
{
	if (id >= 4) {
		return false;
	}

	u8 tlutid = 0;
	if (timg && timg->mPaletteFormat) {
		u8 used_tlut = 0;
		for (int i = 0; i < 4; i++) {
			if (i == id || !mTextures[i]) {
				continue;
			}
			const ResTIMG* texInfo = mTextures[i]->getTexInfo();
			if (!texInfo || !texInfo->mPaletteFormat) {
				continue;
			}
			int tlutName = mTextures[i]->getTlutName();
			u8 tlut_no   = tlutName - (tlutName >= GX_BIGTLUT0 ? GX_BIGTLUT0 : GX_TLUT0);

			if (tlut_no < 4) {
				used_tlut |= 1 << tlut_no;
			}
		}
		for (u8 i = 0; i < 4; i++) {
			if ((used_tlut & 1 << i) == 0) {
				tlutid = i;
				break;
			}
		}
	}

	if (mTextures[id] == nullptr) {
		if (timg) {
			mTextures[id] = new JUTTexture(timg, tlutid);

			if (mTextures[id] == nullptr) {
				return false;
			}

			mUndeleteFlag |= (1 << id);
		} else {
			mUndeleteFlag &= ~(1 << id);
		}
	} else if (mUndeleteFlag & (1 << id)) {
		if (timg != nullptr) {
			mTextures[id]->storeTIMG(timg, tlutid);
		} else {
			delete mTextures[id];
			mTextures[id] = nullptr;
			mUndeleteFlag &= ~(1 << id);
		}
	} else {
		mTextures[id] = nullptr;

		if (timg != nullptr) {
			mTextures[id] = new JUTTexture(timg, 0);

			if (mTextures[id] == nullptr) {
				return false;
			}

			mUndeleteFlag |= (1 << id);
		}
	}

	delete mPalettes[id];
	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	return true;
}

/**
 * @note Address: 0x8004D290
 * @note Size: 0xA8
 * setTexture__12J2DTevBlock4FUlP10JUTTexture
 */
bool J2DTevBlock4::setTexture(u32 index, JUTTexture* texture)
{
	if (index >= 4) {
		return false;
	}
	if ((mUndeleteFlag & 1 << index) != 0) {
		delete mTextures[index];
	}
	mTextures[index] = texture;
	mUndeleteFlag &= ~(1 << index);
	delete mPalettes[index];
	mPalettes[index]   = nullptr;
	mTexIndices[index] = 0xFFFF;
	return true;
}

/**
 * @note Address: 0x8004D338
 * @note Size: 0x210
 * removeTexture__12J2DTevBlock4FUl
 */
bool J2DTevBlock4::removeTexture(u32 id)
{
	if (id >= 4) {
		return false;
	}

	if (mUndeleteFlag & (1 << id)) {
		delete mTextures[id];
	}
	delete mPalettes[id];

	for (u32 i = id; i < 3; i++) {
		mTextures[i]   = mTextures[i + 1];
		mPalettes[i]   = mPalettes[i + 1];
		mTexIndices[i] = mTexIndices[i + 1];
	}

	mTextures[3]   = nullptr;
	mPalettes[3]   = nullptr;
	mTexIndices[3] = -1;
	shiftDeleteFlag(id, false);
	return true;
}

/**
 * @note Address: 0x8004D548
 * @note Size: 0xBC
 */
bool J2DTevBlock4::setFont(ResFONT* font)
{
	if (font == nullptr) {
		return false;
	}
	JUTResFont* jutFont = new JUTResFont(font, nullptr);
	if (jutFont == nullptr) {
		return false;
	}
	if ((mUndeleteFlag & 0x80) != 0) {
		delete mFont;
	}
	mFont         = jutFont;
	mUndeleteFlag = mUndeleteFlag & 0x7F | 0x80;
	return true;
}

/**
 * @note Address: 0x8004D604
 * @note Size: 0x80
 * setFont__12J2DTevBlock4FP7JUTFont
 */
bool J2DTevBlock4::setFont(JUTFont* font)
{
	if (font == nullptr) {
		return false;
	}
	if ((mUndeleteFlag & 0x80) != 0) {
		delete mFont;
	}
	mFont = static_cast<JUTResFont*>(font);
	mUndeleteFlag &= 0x7F;
	return true;
}

/**
 * @note Address: 0x8004D684
 * @note Size: 0xD0
 * setPalette__12J2DTevBlock4FUlPC7ResTLUT
 */
bool J2DTevBlock4::setPalette(u32 index, const ResTLUT* lut)
{
	if (index >= 4) {
		return false;
	}
	if (lut) {
		if (mPalettes[index] == nullptr) {
			mPalettes[index] = new JUTPalette(index, const_cast<ResTLUT*>(lut));
			if (mPalettes[index] == nullptr) {
				return false;
			}
		} else {
			mPalettes[index]->storeTLUT(GX_TLUT0, const_cast<ResTLUT*>(lut));
		}
		if (mTextures[index]) {
			mTextures[index]->attachPalette(mPalettes[index]);
		}
	} else {
		delete mPalettes[index];
		mPalettes[index] = nullptr;
	}
	return true;
}

/**
 * @note Address: 0x8004D754
 * @note Size: 0x88
 */
void J2DTevBlock4::shiftDeleteFlag(u8 p1, bool p2)
{
	u8 fontFlag = mUndeleteFlag & 0x80;
	mUndeleteFlag &= 0x7F;
	if (p2) {
		u32 v1        = ((1 << p1) - 1);
		mUndeleteFlag = (mUndeleteFlag & v1) | ((mUndeleteFlag & ~v1) << 1);
	} else {
		mUndeleteFlag = (mUndeleteFlag & (1 << p1) - 1) | ((mUndeleteFlag & ~((1 << (p1 + 1)) - 1)) >> 1);
	}
	mUndeleteFlag = mUndeleteFlag | fontFlag;
}

/**
 * @note Address: 0x8004D7DC
 * @note Size: 0x2E8
 */
void J2DTevBlock4::setGX()
{
	for (int i = 0; i < 4; i++) {
		loadTexture(GXTexMapID(i), i);
	}
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevOrder(GXTevStageID(i), mOrders[i].getTexCoord(), mOrders[i].getTexMap(), mOrders[i].getColor());
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevColorS10(i != 3 ? GXTevRegID(i + 1) : GX_TEVPREV, mColors[i]);
	}
	GXSetNumTevStages(mStageNum);
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevColorIn(GXTevStageID(i), GXTevColorArg(mStages[i].getColorA()), GXTevColorArg(mStages[i].getColorB()),
		                GXTevColorArg(mStages[i].getColorC()), GXTevColorArg(mStages[i].getColorD()));
		GXSetTevAlphaIn(GXTevStageID(i), GXTevAlphaArg(mStages[i].getAlphaA()), GXTevAlphaArg(mStages[i].getAlphaB()),
		                GXTevAlphaArg(mStages[i].getAlphaC()), GXTevAlphaArg(mStages[i].getAlphaD()));
		GXSetTevColorOp(GXTevStageID(i), GXTevOp(mStages[i].getCOp()), GXTevBias(mStages[i].getCBias()), GXTevScale(mStages[i].getCScale()),
		                mStages[i].getCClamp(), GXTevRegID(mStages[i].getCReg()));
		GXSetTevAlphaOp(GXTevStageID(i), (GXTevOp)mStages[i].getAOp(), GXTevBias(mStages[i].getABias()), GXTevScale(mStages[i].getAScale()),
		                mStages[i].getAClamp(), GXTevRegID(mStages[i].getAReg()));
		GXSetTevKColorSel(GXTevStageID(i), mKColorSels[i] != 0xff ? GXTevKColorSel(mKColorSels[i]) : GX_TEV_KCSEL_1);
		GXSetTevKAlphaSel(GXTevStageID(i), mKAlphaSels[i] != 0xff ? GXTevKAlphaSel(mKAlphaSels[i]) : GX_TEV_KASEL_1);
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevKColor(GXTevKColorID(i), mKColors[i]);
	}
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevSwapMode(GXTevStageID(i), GXTevSwapSel(mStages[i].getRasSel()), GXTevSwapSel(mStages[i].getTexSel()));
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevSwapModeTable(GXTevSwapSel(i), GXTevColorChan(mSwapModeTables[i].getR()), GXTevColorChan(mSwapModeTables[i].getG()),
		                      GXTevColorChan(mSwapModeTables[i].getB()), GXTevColorChan(mSwapModeTables[i].getA()));
	}
	for (u8 i = 0; i < mStageNum; i++) {
		mIndStages[i].load(i);
	}
}

/**
 * @note Address: 0x8004DAC4
 * @note Size: 0x48
 * loadTexture__12J2DTevBlock4F11_GXTexMapIDUl
 */
void J2DTevBlock4::loadTexture(_GXTexMapID id, u32 index)
{
	if (index < 4 && mTextures[index] && mTextures[index]->mTexInfo) {
		mTextures[index]->load(id);
	}
}

/**
 * @note Address: 0x8004DB0C
 * @note Size: 0x128
 */
J2DTevBlock8::J2DTevBlock8()
    : J2DTevBlock()
    , mOrders()
    , mColors()
    , mStages()
    , mKColors()
    , mSwapModeTables()
    , mIndStages()
{
	for (int i = 0; i < 8; i++) {
		mTextures[i] = nullptr;
	}
	mUndeleteFlag = 0;
	initialize();
}

/**
 * @note Address: 0x8004DC34
 * @note Size: 0xD0
 */
J2DTevBlock8::~J2DTevBlock8()
{
	for (int i = 0; i < 8; i++) {
		if ((mUndeleteFlag & 1 << i) != 0) {
			delete mTextures[i];
		}
		delete mPalettes[i];
	}
	if (mFontUndeleteFlag != 0) {
		delete mFont;
	}
}

/**
 * @note Address: 0x8004DD04
 * @note Size: 0x4A0
 */
void J2DTevBlock8::initialize()
{
	for (int i = 0; i < 8; i++) {
		mTexIndices[i] = -1;
	}
	mFontNo = -1;
	for (int i = 0; i < 8; i++) {
		mOrders[i].setTevOrderInfo(j2dDefaultTevOrderInfoNull);
	}
	for (int i = 0; i < 4; i++) {
		mColors[i] = j2dDefaultTevColor;
	}
	mStageNum = 1;
	for (int i = 0; i < 8; i++) {
		mStages[i].setStageNo(i);
	}
	for (int i = 0; i < 4; i++) {
		mKColors[i] = j2dDefaultTevKColor;
	}
	for (int i = 0; i < 8; i++) {
		mKColorSels[i] = -1;
		mKAlphaSels[i] = -1;
	}
	for (int i = 0; i < 4; i++) {
		mSwapModeTables[i].setTevSwapModeTableInfo(j2dDefaultTevSwapModeTable);
	}
	for (int i = 0; i < 8; i++) {
		mIndStages[i].setIndTevStageInfo(j2dDefaultIndTevStageInfo);
	}
	for (int i = 0; i < 8; i++) {
		mPalettes[i] = nullptr;
	}
	mFont             = nullptr;
	mFontUndeleteFlag = 0;
	/*
	stwu     r1, -0x50(r1)
	addi     r8, r2, j2dDefaultTevColor@sda21
	lis      r5, 0x0000FFFF@ha
	addi     r4, r2, j2dDefaultTevOrderInfoNull@sda21
	stmw     r21, 0x24(r1)
	addi     r6, r5, 0x0000FFFF@l
	lha      r5, j2dDefaultTevColor@sda21(r2)
	lha      r0, 2(r8)
	lha      r7, 4(r8)
	lha      r22, 6(r8)
	sth      r6, 4(r3)
	sth      r6, 6(r3)
	sth      r6, 8(r3)
	sth      r6, 0xa(r3)
	sth      r6, 0xc(r3)
	sth      r6, 0xe(r3)
	sth      r6, 0x10(r3)
	sth      r6, 0x12(r3)
	sth      r6, 0x14(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x16(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x17(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x18(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x1a(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x1b(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x1c(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x1e(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x1f(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x20(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x22(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x23(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x24(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x26(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x27(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x28(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x2a(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x2b(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x2c(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x2e(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x2f(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x30(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x32(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x33(r3)
	lbz      r4, 2(r4)
	stb      r4, 0x34(r3)
	sth      r5, 0x36(r3)
	sth      r0, 0x38(r3)
	sth      r7, 0x3a(r3)
	sth      r22, 0x3c(r3)
	sth      r5, 0x3e(r3)
	sth      r0, 0x40(r3)
	sth      r7, 0x42(r3)
	sth      r22, 0x44(r3)
	sth      r5, 0x46(r3)
	li       r23, 1
	li       r24, 0xc0
	li       r25, 0xc1
	sth      r0, 0x48(r3)
	li       r26, 0xc2
	li       r27, 0xc3
	li       r28, 0xc4
	sth      r7, 0x4a(r3)
	li       r29, 0xc5
	li       r30, 0xc6
	li       r31, 0xc7
	sth      r22, 0x4c(r3)
	li       r12, 0xc8
	li       r11, 0xc9
	li       r10, 0xca
	sth      r5, 0x4e(r3)
	li       r9, 0xcb
	li       r8, 0xcc
	li       r6, 0xcd
	sth      r0, 0x50(r3)
	li       r5, 0xce
	li       r4, 0xcf
	li       r0, 2
	sth      r7, 0x52(r3)
	mr       r21, r3
	lwz      r7, j2dDefaultTevKColor@sda21(r2)
	sth      r22, 0x54(r3)
	stb      r23, 0x56(r3)
	stb      r24, 0x57(r3)
	stb      r25, 0x5b(r3)
	stb      r26, 0x5f(r3)
	stb      r27, 0x63(r3)
	stb      r28, 0x67(r3)
	stb      r29, 0x6b(r3)
	stb      r30, 0x6f(r3)
	stb      r31, 0x73(r3)
	stb      r12, 0x77(r3)
	stb      r11, 0x7b(r3)
	stb      r10, 0x7f(r3)
	stb      r9, 0x83(r3)
	stb      r8, 0x87(r3)
	stb      r6, 0x8b(r3)
	stb      r5, 0x8f(r3)
	stb      r4, 0x93(r3)
	mtctr    r0

lbl_8004DEE8:
	stw      r7, 8(r1)
	lbz      r6, 8(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x98(r21)
	lbz      r4, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r5, 0x99(r21)
	stb      r4, 0x9a(r21)
	stw      r7, 8(r1)
	stb      r6, 0xc(r1)
	lbz      r6, 8(r1)
	stb      r0, 0x9b(r21)
	stb      r5, 0xd(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x9c(r21)
	stb      r4, 0xe(r1)
	lbz      r4, 0xa(r1)
	stb      r5, 0x9d(r21)
	stb      r0, 0xf(r1)
	lbz      r0, 0xb(r1)
	stb      r4, 0x9e(r21)
	stb      r0, 0x9f(r21)
	addi     r21, r21, 8
	stb      r6, 0xc(r1)
	stb      r5, 0xd(r1)
	stb      r4, 0xe(r1)
	stb      r0, 0xf(r1)
	bdnz     lbl_8004DEE8
	li       r7, 0xff
	lis      r4, j2dDefaultIndTevStageInfo@ha
	stb      r7, 0xa8(r3)
	addi     r6, r2, j2dDefaultTevSwapModeTable@sda21
	li       r0, 4
	mr       r5, r3
	stb      r7, 0xb0(r3)
	addi     r4, r4, j2dDefaultIndTevStageInfo@l
	stb      r7, 0xa9(r3)
	stb      r7, 0xb1(r3)
	stb      r7, 0xaa(r3)
	stb      r7, 0xb2(r3)
	stb      r7, 0xab(r3)
	stb      r7, 0xb3(r3)
	stb      r7, 0xac(r3)
	stb      r7, 0xb4(r3)
	stb      r7, 0xad(r3)
	stb      r7, 0xb5(r3)
	stb      r7, 0xae(r3)
	stb      r7, 0xb6(r3)
	stb      r7, 0xaf(r3)
	stb      r7, 0xb7(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0xb8(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0xb9(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0xba(r3)
	lbz      r9, 2(r6)
	lbz      r7, 1(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	slwi     r9, r9, 2
	slwi     r7, r7, 4
	lbz      r10, 3(r6)
	add      r6, r7, r9
	slwi     r7, r8, 6
	add      r6, r6, r10
	add      r6, r7, r6
	stb      r6, 0xbb(r3)
	mtctr    r0

lbl_8004E064:
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0xbc(r5)
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0xc0(r5)
	addi     r5, r5, 8
	bdnz     lbl_8004E064
	li       r0, 0
	stw      r0, 0xfc(r3)
	stw      r0, 0x100(r3)
	stw      r0, 0x104(r3)
	stw      r0, 0x108(r3)
	stw      r0, 0x10c(r3)
	stw      r0, 0x110(r3)
	stw      r0, 0x114(r3)
	stw      r0, 0x118(r3)
	stw      r0, 0x11c(r3)
	stb      r0, 0x121(r3)
	lmw      r21, 0x24(r1)
	addi     r1, r1, 0x50
	blr
	*/
}

/**
 * @note Address: 0x8004E1A4
 * @note Size: 0xE0
 * prepareTexture__12J2DTevBlock8FUc
 */
bool J2DTevBlock8::prepareTexture(u8 count)
{
	for (u8 i = 0; i < count; i++) {
		if (i >= 8) {
			return false;
		}
		if (mTextures[i] == nullptr) {
			mTextures[i] = new JUTTexture();
			if (mTextures[i] == nullptr) {
				return false;
			}
			mUndeleteFlag |= (1 << i);
		}
	}
	return true;
}

/**
 * @note Address: 0x8004E284
 * @note Size: 0x3C8
 */
bool J2DTevBlock8::insertTexture(u32 id, const ResTIMG* timg, JUTPalette* palette)
{
	if (id >= 8 || !timg) {
		return false;
	}
	u8 idx;
	for (idx = 0; idx < 8; idx++) {
		if (!mTextures[idx] || !mTextures[idx]->getTexInfo()) {
			break;
		}
	}
	if (idx < id) {
		return false;
	}
	if (idx == 8) {
		return false;
	}
	u8 local_43 = 0;
	if (timg->mPaletteFormat && !palette) {
		u8 local_44 = 0;
		for (int i = 0; i < 7; i++) {
			if (!mTextures[i]) {
				continue;
			}
			const ResTIMG* texInfo = mTextures[i]->getTexInfo();
			if (!texInfo) {
				continue;
			}
			if (!texInfo->mPaletteFormat) {
				continue;
			}
			int tlutName = mTextures[i]->getTlutName();
			u8 tlut_no   = tlutName - (tlutName >= GX_BIGTLUT0 ? GX_BIGTLUT0 : GX_TLUT0);
			if (tlut_no < 8) {
				local_44 |= 1 << tlut_no;
			}
		}
		for (u8 i = 0; i < 8; i++) {
			if ((local_44 & 1 << i) == 0) {
				local_43 = i;
				break;
			}
		}
	}
	if (!mTextures[idx]) {
		JUTTexture* texture = new JUTTexture(timg, local_43);
		if (!texture) {
			return false;
		}
		if (palette) {
			texture->storeTIMG(timg, palette);
		}
		for (u8 i = 7; i > id; i--) {
			mTextures[i]   = mTextures[i - 1];
			mPalettes[i]   = mPalettes[i - 1];
			mTexIndices[i] = mTexIndices[i - 1];
		}
		mTextures[id] = texture;
		shiftDeleteFlag(id, true);
		mUndeleteFlag |= 1 << id;
	} else {
		JUTTexture* texture = mTextures[idx];
		if (!palette) {
			texture->storeTIMG(timg, local_43);
		} else {
			texture->storeTIMG(timg, palette);
		}
		bool local_38[8];
		for (u8 i = 0; i < 8; i++) {
			local_38[i] = (mUndeleteFlag & 1 << i) != 0;
		}
		for (u8 i = idx; i > id; i--) {
			mTextures[i]   = mTextures[i - 1];
			mPalettes[i]   = mPalettes[i - 1];
			mTexIndices[i] = mTexIndices[i - 1];
			local_38[i]    = local_38[i - 1];
		}
		mTextures[id] = texture;
		mUndeleteFlag = 0;
		for (u8 i = 0; i < 8; i++) {
			if (local_38[i]) {
				mUndeleteFlag |= 1 << i;
			}
		}
		mUndeleteFlag |= 1 << id;
	}
	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	return true;
}

/**
 * @note Address: 0x8004E64C
 * @note Size: 0x198
 */
bool J2DTevBlock8::insertTexture(u32 id, JUTTexture* tex)
{
	if (id >= 8 || tex == nullptr) {
		return false;
	}

	u8 texNo = 0;
	for (; texNo < 8; texNo++) {
		if (mTextures[texNo] == nullptr || mTextures[texNo]->getTexInfo() == nullptr) {
			break;
		}
	}

	if (texNo < id) {
		return false;
	}

	if (texNo == 8) {
		return false;
	}

	if (mTextures[7] != NULL && mTextures[7]->getTexInfo() == nullptr) {
		if (mUndeleteFlag & 0x80) {
			delete mTextures[7];
		}

		mUndeleteFlag &= 0x7F;
	}

	for (u8 i = 7; i > id; i--) {
		mTextures[i]   = mTextures[i - 1];
		mPalettes[i]   = mPalettes[i - 1];
		mTexIndices[i] = mTexIndices[i - 1];
	}

	mTextures[id]   = tex;
	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	shiftDeleteFlag(id, true);
	mUndeleteFlag &= ~(1 << id);
	return true;
}

/**
 * @note Address: 0x8004E7E4
 * @note Size: 0x2E4
 * setTexture__12J2DTevBlock8FUlPC7ResTIMG
 */
bool J2DTevBlock8::setTexture(u32 id, const ResTIMG* timg)
{
	if (id >= 8) {
		return false;
	}

	u8 tlutid = 0;
	if (timg && timg->mPaletteFormat) {
		u8 used_tlut = 0;
		for (int i = 0; i < 8; i++) {
			if (i == id || !mTextures[i]) {
				continue;
			}
			const ResTIMG* texInfo = mTextures[i]->getTexInfo();
			if (!texInfo || !texInfo->mPaletteFormat) {
				continue;
			}
			int tlutName = mTextures[i]->getTlutName();
			u8 tlut_no   = tlutName - (tlutName >= GX_BIGTLUT0 ? GX_BIGTLUT0 : GX_TLUT0);
			if (tlut_no < 8) {
				used_tlut |= 1 << tlut_no;
			}
		}
		for (u8 i = 0; i < 4; i++) {
			if ((used_tlut & 1 << i) == 0) {
				tlutid = i;
				break;
			}
		}
	}

	if (mTextures[id] == nullptr) {
		if (timg) {
			mTextures[id] = new JUTTexture(timg, tlutid);

			if (mTextures[id] == nullptr) {
				return false;
			}

			mUndeleteFlag |= (1 << id);
		} else {
			mUndeleteFlag &= ~(1 << id);
		}
	} else if (mUndeleteFlag & (1 << id)) {
		if (timg != nullptr) {
			mTextures[id]->storeTIMG(timg, tlutid);
		} else {
			delete mTextures[id];
			mTextures[id] = nullptr;
			mUndeleteFlag &= ~(1 << id);
		}
	} else {
		mTextures[id] = nullptr;

		if (timg != nullptr) {
			mTextures[id] = new JUTTexture(timg, 0);

			if (mTextures[id] == nullptr) {
				return false;
			}

			mUndeleteFlag |= (1 << id);
		}
	}

	delete mPalettes[id];
	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	return true;
}

/**
 * @note Address: 0x8004EAC8
 * @note Size: 0xA8
 * setTexture__12J2DTevBlock8FUlP10JUTTexture
 */
bool J2DTevBlock8::setTexture(u32 index, JUTTexture* texture)
{
	if (index >= 8) {
		return false;
	}
	if ((mUndeleteFlag & 1 << index) != 0) {
		delete mTextures[index];
	}
	mTextures[index] = texture;
	mUndeleteFlag &= ~(1 << index);
	delete mPalettes[index];
	mPalettes[index]   = nullptr;
	mTexIndices[index] = 0xFFFF;
	return true;
}

/**
 * @note Address: 0x8004EB70
 * @note Size: 0x210
 * removeTexture__12J2DTevBlock8FUl
 */
bool J2DTevBlock8::removeTexture(u32 id)
{
	if (id >= 8) {
		return false;
	}

	if (mUndeleteFlag & (1 << id)) {
		delete mTextures[id];
	}
	delete mPalettes[id];

	for (u32 i = id; i < 7; i++) {
		mTextures[i]   = mTextures[i + 1];
		mPalettes[i]   = mPalettes[i + 1];
		mTexIndices[i] = mTexIndices[i + 1];
	}

	mTextures[7]   = nullptr;
	mPalettes[7]   = nullptr;
	mTexIndices[7] = -1;
	shiftDeleteFlag(id, false);
	return true;
}

/**
 * @note Address: 0x8004ED80
 * @note Size: 0xB4
 */
bool J2DTevBlock8::setFont(ResFONT* font)
{
	if (font == nullptr) {
		return false;
	}
	JUTResFont* jutFont = new JUTResFont(font, nullptr);
	if (jutFont == nullptr) {
		return false;
	}
	if (mFontUndeleteFlag != 0) {
		delete mFont;
	}
	mFont             = jutFont;
	mFontUndeleteFlag = 1;
	return true;
}

/**
 * @note Address: 0x8004EE34
 * @note Size: 0x7C
 * setFont__12J2DTevBlock8FP7JUTFont
 */
bool J2DTevBlock8::setFont(JUTFont* font)
{
	if (font == nullptr) {
		return false;
	}
	if (mFontUndeleteFlag != 0) {
		delete mFont;
	}
	mFont             = static_cast<JUTResFont*>(font);
	mFontUndeleteFlag = 0;
	return true;
}

/**
 * @note Address: 0x8004EEB0
 * @note Size: 0xD0
 * setPalette__12J2DTevBlock8FUlPC7ResTLUT
 */
bool J2DTevBlock8::setPalette(u32 index, const ResTLUT* lut)
{
	if (index >= 8) {
		return false;
	}
	if (lut != nullptr) {
		if (mPalettes[index] == nullptr) {
			mPalettes[index] = new JUTPalette(index, const_cast<ResTLUT*>(lut));
			if (mPalettes[index] == nullptr) {
				return false;
			}
		} else {
			mPalettes[index]->storeTLUT(GX_TLUT0, const_cast<ResTLUT*>(lut));
		}
		if (mTextures[index] != nullptr) {
			mTextures[index]->attachPalette(mPalettes[index]);
		}
	} else {
		delete mPalettes[index];
		mPalettes[index] = nullptr;
	}
	return true;
}

/**
 * @note Address: 0x8004EF80
 * @note Size: 0x6C
 */
void J2DTevBlock8::shiftDeleteFlag(u8 flag, bool direction)
{
	if (direction) {
		u32 v1        = ((1 << flag) - 1);
		mUndeleteFlag = (mUndeleteFlag & v1) | ((mUndeleteFlag & ~v1) << 1);
	} else {
		mUndeleteFlag = (mUndeleteFlag & (1 << flag) - 1) | ((mUndeleteFlag & ~((1 << (flag + 1)) - 1)) >> 1);
	}
}

/**
 * @note Address: 0x8004EFEC
 * @note Size: 0x2E8
 */
void J2DTevBlock8::setGX()
{
	for (int i = 0; i < 8; i++) {
		loadTexture(GXTexMapID(i), i);
	}
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevOrder(GXTevStageID(i), mOrders[i].getTexCoord(), mOrders[i].getTexMap(), mOrders[i].getColor());
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevColorS10(i != 3 ? GXTevRegID(i + 1) : GX_TEVPREV, mColors[i]);
	}
	GXSetNumTevStages(mStageNum);
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevColorIn(GXTevStageID(i), GXTevColorArg(mStages[i].getColorA()), GXTevColorArg(mStages[i].getColorB()),
		                GXTevColorArg(mStages[i].getColorC()), GXTevColorArg(mStages[i].getColorD()));
		GXSetTevAlphaIn(GXTevStageID(i), GXTevAlphaArg(mStages[i].getAlphaA()), GXTevAlphaArg(mStages[i].getAlphaB()),
		                GXTevAlphaArg(mStages[i].getAlphaC()), GXTevAlphaArg(mStages[i].getAlphaD()));
		GXSetTevColorOp(GXTevStageID(i), GXTevOp(mStages[i].getCOp()), GXTevBias(mStages[i].getCBias()), GXTevScale(mStages[i].getCScale()),
		                mStages[i].getCClamp(), GXTevRegID(mStages[i].getCReg()));
		GXSetTevAlphaOp(GXTevStageID(i), (GXTevOp)mStages[i].getAOp(), GXTevBias(mStages[i].getABias()), GXTevScale(mStages[i].getAScale()),
		                mStages[i].getAClamp(), GXTevRegID(mStages[i].getAReg()));
		GXSetTevKColorSel(GXTevStageID(i), mKColorSels[i] != 0xff ? GXTevKColorSel(mKColorSels[i]) : GX_TEV_KCSEL_1);
		GXSetTevKAlphaSel(GXTevStageID(i), mKAlphaSels[i] != 0xff ? GXTevKAlphaSel(mKAlphaSels[i]) : GX_TEV_KASEL_1);
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevKColor(GXTevKColorID(i), mKColors[i]);
	}
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevSwapMode(GXTevStageID(i), GXTevSwapSel(mStages[i].getRasSel()), GXTevSwapSel(mStages[i].getTexSel()));
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevSwapModeTable(GXTevSwapSel(i), GXTevColorChan(mSwapModeTables[i].getR()), GXTevColorChan(mSwapModeTables[i].getG()),
		                      GXTevColorChan(mSwapModeTables[i].getB()), GXTevColorChan(mSwapModeTables[i].getA()));
	}
	for (u8 i = 0; i < mStageNum; i++) {
		mIndStages[i].load(i);
	}
}

/**
 * @note Address: 0x8004F2D4
 * @note Size: 0x48
 * loadTexture__12J2DTevBlock8F11_GXTexMapIDUl
 */
void J2DTevBlock8::loadTexture(_GXTexMapID id, u32 index)
{
	if (index < 8 && mTextures[index] != nullptr && mTextures[index]->mTexInfo != nullptr) {
		mTextures[index]->load(id);
	}
}

/**
 * @note Address: 0x8004F31C
 * @note Size: 0x128
 */
J2DTevBlock16::J2DTevBlock16()
    : J2DTevBlock()
    , mOrders()
    , mColors()
    , mStages()
    , mKColors()
    , mSwapModeTables()
    , mIndStages()
{
	for (int i = 0; i < 8; i++) {
		mTextures[i] = nullptr;
	}
	mUndeleteFlag = 0;
	initialize();
}

/**
 * @note Address: 0x8004F444
 * @note Size: 0xD0
 */
J2DTevBlock16::~J2DTevBlock16()
{
	for (int i = 0; i < 8; i++) {
		if ((mUndeleteFlag & 1 << i) != 0) {
			delete mTextures[i];
		}
		delete mPalettes[i];
	}
	if (mFontUndeleteFlag != 0) {
		delete mFont;
	}
}

/**
 * @note Address: 0x8004F514
 * @note Size: 0x550
 */
void J2DTevBlock16::initialize()
{
	for (int i = 0; i < 8; i++) {
		mTexIndices[i] = -1;
	}
	mFontNo = -1;
	for (int i = 0; i < 16; i++) {
		mOrders[i].setTevOrderInfo(j2dDefaultTevOrderInfoNull);
	}
	for (int i = 0; i < 4; i++) {
		mColors[i] = j2dDefaultTevColor;
	}
	mStageNum = 1;
	for (int i = 0; i < 16; i++) {
		mStages[i].setStageNo(i);
	}
	for (int i = 0; i < 4; i++) {
		mKColors[i] = j2dDefaultTevKColor;
	}
	for (int i = 0; i < 16; i++) {
		mKColorSels[i] = -1;
		mKAlphaSels[i] = -1;
	}
	for (int i = 0; i < 4; i++) {
		mSwapModeTables[i].setTevSwapModeTableInfo(j2dDefaultTevSwapModeTable);
	}
	for (int i = 0; i < 16; i++) {
		mIndStages[i].setIndTevStageInfo(j2dDefaultIndTevStageInfo);
	}
	for (int i = 0; i < 8; i++) {
		mPalettes[i] = nullptr;
	}
	mFont             = nullptr;
	mFontUndeleteFlag = 0;
	/*
	stwu     r1, -0x30(r1)
	lis      r4, 0x0000FFFF@ha
	addi     r6, r4, 0x0000FFFF@l
	li       r0, 2
	stw      r31, 0x2c(r1)
	mr       r4, r3
	addi     r5, r2, j2dDefaultTevOrderInfoNull@sda21
	sth      r6, 4(r3)
	sth      r6, 6(r3)
	sth      r6, 8(r3)
	sth      r6, 0xa(r3)
	sth      r6, 0xc(r3)
	sth      r6, 0xe(r3)
	sth      r6, 0x10(r3)
	sth      r6, 0x12(r3)
	sth      r6, 0x14(r3)
	mtctr    r0

lbl_8004F558:
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x16(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x17(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x18(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x1a(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x1b(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x1c(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x1e(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x1f(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x20(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x22(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x23(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x24(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x26(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x27(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x28(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x2a(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x2b(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x2c(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x2e(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x2f(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x30(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x32(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x33(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x34(r4)
	addi     r4, r4, 0x20
	bdnz     lbl_8004F558
	lha      r11, j2dDefaultTevColor@sda21(r2)
	addi     r6, r2, j2dDefaultTevColor@sda21
	lha      r10, 2(r6)
	li       r7, 1
	sth      r11, 0x56(r3)
	li       r0, 2
	lha      r9, 4(r6)
	mr       r4, r3
	sth      r10, 0x58(r3)
	li       r5, 0
	lha      r8, 6(r6)
	li       r6, 0
	sth      r9, 0x5a(r3)
	sth      r8, 0x5c(r3)
	sth      r11, 0x5e(r3)
	sth      r10, 0x60(r3)
	sth      r9, 0x62(r3)
	sth      r8, 0x64(r3)
	sth      r11, 0x66(r3)
	sth      r10, 0x68(r3)
	sth      r9, 0x6a(r3)
	sth      r8, 0x6c(r3)
	sth      r11, 0x6e(r3)
	sth      r10, 0x70(r3)
	sth      r9, 0x72(r3)
	sth      r8, 0x74(r3)
	stb      r7, 0x76(r3)
	mtctr    r0

lbl_8004F690:
	addi     r0, r6, 0xc0
	addi     r7, r6, 0xc1
	stb      r0, 0x77(r4)
	addi     r0, r5, 1
	slwi     r8, r0, 1
	addi     r6, r6, 0x10
	stb      r7, 0x7b(r4)
	addi     r7, r8, 0xc0
	addi     r0, r5, 2
	addi     r9, r8, 0xc1
	stb      r7, 0x7f(r4)
	slwi     r10, r0, 1
	addi     r8, r10, 0xc0
	addi     r0, r5, 3
	stb      r9, 0x83(r4)
	slwi     r9, r0, 1
	addi     r7, r10, 0xc1
	addi     r0, r5, 4
	stb      r8, 0x87(r4)
	slwi     r11, r0, 1
	addi     r10, r9, 0xc0
	addi     r0, r5, 5
	stb      r7, 0x8b(r4)
	slwi     r12, r0, 1
	addi     r9, r9, 0xc1
	addi     r8, r11, 0xc0
	stb      r10, 0x8f(r4)
	addi     r7, r11, 0xc1
	addi     r11, r12, 0xc0
	addi     r10, r12, 0xc1
	stb      r9, 0x93(r4)
	addi     r0, r5, 6
	slwi     r12, r0, 1
	stb      r8, 0x97(r4)
	addi     r0, r5, 7
	slwi     r31, r0, 1
	addi     r9, r12, 0xc0
	stb      r7, 0x9b(r4)
	addi     r8, r12, 0xc1
	addi     r7, r31, 0xc0
	addi     r0, r31, 0xc1
	stb      r11, 0x9f(r4)
	addi     r5, r5, 8
	stb      r10, 0xa3(r4)
	stb      r9, 0xa7(r4)
	stb      r8, 0xab(r4)
	stb      r7, 0xaf(r4)
	stb      r0, 0xb3(r4)
	addi     r4, r4, 0x40
	bdnz     lbl_8004F690
	li       r0, 2
	mr       r8, r3
	lwz      r7, j2dDefaultTevKColor@sda21(r2)
	mtctr    r0

lbl_8004F768:
	stw      r7, 8(r1)
	lbz      r6, 8(r1)
	lbz      r5, 9(r1)
	stb      r6, 0xf8(r8)
	lbz      r4, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r5, 0xf9(r8)
	stb      r4, 0xfa(r8)
	stw      r7, 8(r1)
	stb      r6, 0xc(r1)
	lbz      r6, 8(r1)
	stb      r0, 0xfb(r8)
	stb      r5, 0xd(r1)
	lbz      r5, 9(r1)
	stb      r6, 0xfc(r8)
	stb      r4, 0xe(r1)
	lbz      r4, 0xa(r1)
	stb      r5, 0xfd(r8)
	stb      r0, 0xf(r1)
	lbz      r0, 0xb(r1)
	stb      r4, 0xfe(r8)
	stb      r0, 0xff(r8)
	addi     r8, r8, 8
	stb      r6, 0xc(r1)
	stb      r5, 0xd(r1)
	stb      r4, 0xe(r1)
	stb      r0, 0xf(r1)
	bdnz     lbl_8004F768
	li       r7, 0xff
	lis      r4, j2dDefaultIndTevStageInfo@ha
	stb      r7, 0x108(r3)
	addi     r6, r2, j2dDefaultTevSwapModeTable@sda21
	li       r0, 8
	mr       r5, r3
	stb      r7, 0x118(r3)
	addi     r4, r4, j2dDefaultIndTevStageInfo@l
	stb      r7, 0x109(r3)
	stb      r7, 0x119(r3)
	stb      r7, 0x10a(r3)
	stb      r7, 0x11a(r3)
	stb      r7, 0x10b(r3)
	stb      r7, 0x11b(r3)
	stb      r7, 0x10c(r3)
	stb      r7, 0x11c(r3)
	stb      r7, 0x10d(r3)
	stb      r7, 0x11d(r3)
	stb      r7, 0x10e(r3)
	stb      r7, 0x11e(r3)
	stb      r7, 0x10f(r3)
	stb      r7, 0x11f(r3)
	stb      r7, 0x110(r3)
	stb      r7, 0x120(r3)
	stb      r7, 0x111(r3)
	stb      r7, 0x121(r3)
	stb      r7, 0x112(r3)
	stb      r7, 0x122(r3)
	stb      r7, 0x113(r3)
	stb      r7, 0x123(r3)
	stb      r7, 0x114(r3)
	stb      r7, 0x124(r3)
	stb      r7, 0x115(r3)
	stb      r7, 0x125(r3)
	stb      r7, 0x116(r3)
	stb      r7, 0x126(r3)
	stb      r7, 0x117(r3)
	stb      r7, 0x127(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x128(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x129(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x12a(r3)
	lbz      r9, 2(r6)
	lbz      r7, 1(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	slwi     r9, r9, 2
	slwi     r7, r7, 4
	lbz      r10, 3(r6)
	add      r6, r7, r9
	slwi     r7, r8, 6
	add      r6, r6, r10
	add      r6, r7, r6
	stb      r6, 0x12b(r3)
	mtctr    r0

lbl_8004F924:
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0x12c(r5)
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0x130(r5)
	addi     r5, r5, 8
	bdnz     lbl_8004F924
	li       r0, 0
	stw      r0, 0x18c(r3)
	stw      r0, 0x190(r3)
	stw      r0, 0x194(r3)
	stw      r0, 0x198(r3)
	stw      r0, 0x19c(r3)
	stw      r0, 0x1a0(r3)
	stw      r0, 0x1a4(r3)
	stw      r0, 0x1a8(r3)
	stw      r0, 0x1ac(r3)
	stb      r0, 0x1b1(r3)
	lwz      r31, 0x2c(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8004FA64
 * @note Size: 0xE0
 * prepareTexture__13J2DTevBlock16FUc
 */
bool J2DTevBlock16::prepareTexture(u8 count)
{
	for (u8 i = 0; i < count; i++) {
		if (i >= 8) {
			return false;
		}
		if (mTextures[i] == nullptr) {
			mTextures[i] = new JUTTexture();
			if (mTextures[i] == nullptr) {
				return false;
			}
			mUndeleteFlag |= (1 << i);
		}
	}
	return true;
}

/**
 * @note Address: 0x8004FB44
 * @note Size: 0x3C8
 */
bool J2DTevBlock16::insertTexture(u32 id, const ResTIMG* timg, JUTPalette* palette)
{
	if (id >= 8 || !timg) {
		return false;
	}
	u8 idx;
	for (idx = 0; idx < 8; idx++) {
		if (!mTextures[idx] || !mTextures[idx]->getTexInfo()) {
			break;
		}
	}
	if (idx < id) {
		return false;
	}
	if (idx == 8) {
		return false;
	}
	u8 local_43 = 0;
	if (timg->mPaletteFormat && !palette) {
		u8 local_44 = 0;
		for (int i = 0; i < 7; i++) {
			if (!mTextures[i]) {
				continue;
			}
			const ResTIMG* texInfo = mTextures[i]->getTexInfo();
			if (!texInfo) {
				continue;
			}
			if (!texInfo->mPaletteFormat) {
				continue;
			}
			int tlutName = mTextures[i]->getTlutName();
			u8 tlut_no   = tlutName - (tlutName >= GX_BIGTLUT0 ? GX_BIGTLUT0 : GX_TLUT0);
			if (tlut_no < 8) {
				local_44 |= 1 << tlut_no;
			}
		}
		for (u8 i = 0; i < 8; i++) {
			if ((local_44 & 1 << i) == 0) {
				local_43 = i;
				break;
			}
		}
	}
	if (!mTextures[idx]) {
		JUTTexture* texture = new JUTTexture(timg, local_43);
		if (!texture) {
			return false;
		}
		if (palette) {
			texture->storeTIMG(timg, palette);
		}
		for (u8 i = 7; i > id; i--) {
			mTextures[i]   = mTextures[i - 1];
			mPalettes[i]   = mPalettes[i - 1];
			mTexIndices[i] = mTexIndices[i - 1];
		}
		mTextures[id] = texture;
		shiftDeleteFlag(id, true);
		mUndeleteFlag |= 1 << id;
	} else {
		JUTTexture* texture = mTextures[idx];
		if (!palette) {
			texture->storeTIMG(timg, local_43);
		} else {
			texture->storeTIMG(timg, palette);
		}
		bool local_38[8];
		for (u8 i = 0; i < 8; i++) {
			local_38[i] = (mUndeleteFlag & 1 << i) != 0;
		}

		for (u8 i = idx; i > id; i--) {
			mTextures[i]   = mTextures[i - 1];
			mPalettes[i]   = mPalettes[i - 1];
			mTexIndices[i] = mTexIndices[i - 1];
			local_38[i]    = local_38[i - 1];
		}
		mTextures[id] = texture;
		mUndeleteFlag = 0;
		for (u8 i = 0; i < 8; i++) {
			if (local_38[i]) {
				mUndeleteFlag |= 1 << i;
			}
		}
		mUndeleteFlag |= 1 << id;
	}
	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	return true;
}

/**
 * @note Address: 0x8004FF0C
 * @note Size: 0x198
 */
bool J2DTevBlock16::insertTexture(u32 id, JUTTexture* tex)
{
	if (id >= 8 || tex == nullptr) {
		return false;
	}

	u8 texNo = 0;
	for (; texNo < 8; texNo++) {
		if (mTextures[texNo] == nullptr || mTextures[texNo]->getTexInfo() == nullptr) {
			break;
		}
	}

	if (texNo < id) {
		return false;
	}

	if (texNo == 8) {
		return false;
	}

	if (mTextures[7] != nullptr && mTextures[7]->getTexInfo() == nullptr) {
		if (mUndeleteFlag & 0x80) {
			delete mTextures[7];
		}

		mUndeleteFlag &= 0x7F;
	}

	for (u8 i = 7; i > id; i--) {
		mTextures[i]   = mTextures[i - 1];
		mPalettes[i]   = mPalettes[i - 1];
		mTexIndices[i] = mTexIndices[i - 1];
	}

	mTextures[id]   = tex;
	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	shiftDeleteFlag(id, true);
	mUndeleteFlag &= ~(1 << id);
	return true;
}

/**
 * @note Address: 0x800500A4
 * @note Size: 0x2E4
 * setTexture__13J2DTevBlock16FUlPC7ResTIMG
 */
bool J2DTevBlock16::setTexture(u32 id, const ResTIMG* timg)
{
	if (id >= 8) {
		return false;
	}

	u8 tlutid = 0;
	if (timg && timg->mPaletteFormat) {
		u8 used_tlut = 0;
		for (int i = 0; i < 8; i++) {
			if (i == id) {
				continue;
			}
			if (!mTextures[i]) {
				continue;
			}
			const ResTIMG* texInfo = mTextures[i]->getTexInfo();
			if (!texInfo) {
				continue;
			}
			if (!texInfo->mPaletteFormat) {
				continue;
			}
			int tlutName = mTextures[i]->getTlutName();
			u8 tlut_no   = tlutName - (tlutName >= GX_BIGTLUT0 ? GX_BIGTLUT0 : GX_TLUT0);

			if (tlut_no < 8) {
				used_tlut |= 1 << tlut_no;
			}
		}
		for (u8 i = 0; i < 4; i++) {
			if ((used_tlut & 1 << i) == 0) {
				tlutid = i;
				break;
			}
		}
	}

	if (mTextures[id] == nullptr) {
		if (timg) {
			mTextures[id] = new JUTTexture(timg, tlutid);

			if (mTextures[id] == nullptr) {
				return false;
			}

			mUndeleteFlag |= (1 << id);
		} else {
			mUndeleteFlag &= ~(1 << id);
		}
	} else if (mUndeleteFlag & (1 << id)) {
		if (timg != nullptr) {
			mTextures[id]->storeTIMG(timg, tlutid);
		} else {
			delete mTextures[id];
			mTextures[id] = nullptr;
			mUndeleteFlag &= ~(1 << id);
		}
	} else {
		mTextures[id] = nullptr;

		if (timg != nullptr) {
			mTextures[id] = new JUTTexture(timg, 0);

			if (mTextures[id] == nullptr) {
				return false;
			}

			mUndeleteFlag |= (1 << id);
		}
	}

	delete mPalettes[id];
	mPalettes[id]   = nullptr;
	mTexIndices[id] = -1;
	return true;
}

/**
 * @note Address: 0x80050388
 * @note Size: 0xA8
 * setTexture__13J2DTevBlock16FUlP10JUTTexture
 */
bool J2DTevBlock16::setTexture(u32 index, JUTTexture* texture)
{
	if (index >= 8) {
		return false;
	}
	if ((mUndeleteFlag & 1 << index) != 0) {
		delete mTextures[index];
	}
	mTextures[index] = texture;
	mUndeleteFlag &= ~(1 << index);
	delete mPalettes[index];
	mPalettes[index]   = nullptr;
	mTexIndices[index] = 0xFFFF;
	return true;
}

/**
 * @note Address: 0x80050430
 * @note Size: 0x210
 * removeTexture__13J2DTevBlock16FUl
 */
bool J2DTevBlock16::removeTexture(u32 id)
{
	if (id >= 8) {
		return false;
	}

	if (mUndeleteFlag & (1 << id)) {
		delete mTextures[id];
	}
	delete mPalettes[id];

	for (u32 i = id; i < 7; i++) {
		mTextures[i]   = mTextures[i + 1];
		mPalettes[i]   = mPalettes[i + 1];
		mTexIndices[i] = mTexIndices[i + 1];
	}

	mTextures[7]   = nullptr;
	mPalettes[7]   = nullptr;
	mTexIndices[7] = -1;
	shiftDeleteFlag(id, false);
	return true;
}

/**
 * @note Address: 0x80050640
 * @note Size: 0xB4
 */
bool J2DTevBlock16::setFont(ResFONT* font)
{
	if (font == nullptr) {
		return false;
	}
	JUTResFont* jutFont = new JUTResFont(font, nullptr);
	if (jutFont == nullptr) {
		return false;
	}
	if (mFontUndeleteFlag != 0) {
		delete mFont;
	}
	mFont             = jutFont;
	mFontUndeleteFlag = 1;
	return true;
}

/**
 * @note Address: 0x800506F4
 * @note Size: 0x7C
 * setFont__13J2DTevBlock16FP7JUTFont
 */
bool J2DTevBlock16::setFont(JUTFont* font)
{
	if (font == nullptr) {
		return false;
	}
	if (mFontUndeleteFlag != 0) {
		delete mFont;
	}
	mFont             = static_cast<JUTResFont*>(font);
	mFontUndeleteFlag = 0;
	return true;
}

/**
 * @note Address: 0x80050770
 * @note Size: 0xD0
 * setPalette__13J2DTevBlock16FUlPC7ResTLUT
 */
bool J2DTevBlock16::setPalette(u32 index, const ResTLUT* lut)
{
	if (index >= 8) {
		return false;
	}
	if (lut != nullptr) {
		if (mPalettes[index] == nullptr) {
			mPalettes[index] = new JUTPalette(index, const_cast<ResTLUT*>(lut));
			if (mPalettes[index] == nullptr) {
				return false;
			}
		} else {
			mPalettes[index]->storeTLUT(GX_TLUT0, const_cast<ResTLUT*>(lut));
		}
		if (mTextures[index] != nullptr) {
			mTextures[index]->attachPalette(mPalettes[index]);
		}
	} else {
		delete mPalettes[index];
		mPalettes[index] = nullptr;
	}
	return true;
}

/**
 * @note Address: 0x80050840
 * @note Size: 0x6C
 */
void J2DTevBlock16::shiftDeleteFlag(u8 flag, bool direction)
{
	if (direction) {
		u32 v1        = ((1 << flag) - 1);
		mUndeleteFlag = (mUndeleteFlag & v1) | ((mUndeleteFlag & ~v1) << 1);
	} else {
		mUndeleteFlag = (mUndeleteFlag & (1 << flag) - 1) | ((mUndeleteFlag & ~((1 << (flag + 1)) - 1)) >> 1);
	}
}

/**
 * @note Address: 0x800508AC
 * @note Size: 0x2E8
 */
void J2DTevBlock16::setGX()
{
	for (int i = 0; i < 8; i++) {
		loadTexture(GXTexMapID(i), i);
	}
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevOrder(GXTevStageID(i), mOrders[i].getTexCoord(), mOrders[i].getTexMap(), mOrders[i].getColor());
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevColorS10(i != 3 ? GXTevRegID(i + 1) : GX_TEVPREV, mColors[i]);
	}
	GXSetNumTevStages(mStageNum);
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevColorIn(GXTevStageID(i), GXTevColorArg(mStages[i].getColorA()), GXTevColorArg(mStages[i].getColorB()),
		                GXTevColorArg(mStages[i].getColorC()), GXTevColorArg(mStages[i].getColorD()));
		GXSetTevAlphaIn(GXTevStageID(i), GXTevAlphaArg(mStages[i].getAlphaA()), GXTevAlphaArg(mStages[i].getAlphaB()),
		                GXTevAlphaArg(mStages[i].getAlphaC()), GXTevAlphaArg(mStages[i].getAlphaD()));
		GXSetTevColorOp(GXTevStageID(i), GXTevOp(mStages[i].getCOp()), GXTevBias(mStages[i].getCBias()), GXTevScale(mStages[i].getCScale()),
		                mStages[i].getCClamp(), GXTevRegID(mStages[i].getCReg()));
		GXSetTevAlphaOp(GXTevStageID(i), (GXTevOp)mStages[i].getAOp(), GXTevBias(mStages[i].getABias()), GXTevScale(mStages[i].getAScale()),
		                mStages[i].getAClamp(), GXTevRegID(mStages[i].getAReg()));
		GXSetTevKColorSel(GXTevStageID(i), mKColorSels[i] != 0xff ? GXTevKColorSel(mKColorSels[i]) : GX_TEV_KCSEL_1);
		GXSetTevKAlphaSel(GXTevStageID(i), mKAlphaSels[i] != 0xff ? GXTevKAlphaSel(mKAlphaSels[i]) : GX_TEV_KASEL_1);
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevKColor(GXTevKColorID(i), mKColors[i]);
	}
	for (int i = 0; i < mStageNum; i++) {
		GXSetTevSwapMode(GXTevStageID(i), GXTevSwapSel(mStages[i].getRasSel()), GXTevSwapSel(mStages[i].getTexSel()));
	}
	for (int i = 0; i < 4; i++) {
		GXSetTevSwapModeTable(GXTevSwapSel(i), GXTevColorChan(mSwapModeTables[i].getR()), GXTevColorChan(mSwapModeTables[i].getG()),
		                      GXTevColorChan(mSwapModeTables[i].getB()), GXTevColorChan(mSwapModeTables[i].getA()));
	}
	for (u8 i = 0; i < mStageNum; i++) {
		mIndStages[i].load(i);
	}
}

/**
 * @note Address: 0x80050B94
 * @note Size: 0x48
 * loadTexture__13J2DTevBlock16F11_GXTexMapIDUl
 */
void J2DTevBlock16::loadTexture(_GXTexMapID id, u32 index)
{
	if (index < 8 && mTextures[index] && mTextures[index]->mTexInfo) {
		mTextures[index]->load(id);
	}
}

/**
 * @note Address: 0x80050BDC
 * @note Size: 0x148
 * initialize__15J2DIndBlockFullFv
 */
void J2DIndBlockFull::initialize()
{
	mTexStageNum = 0;
	for (int i = 0; i < ARRAY_SIZE(mTexOrders); i++) {
		mTexOrders[i].mOrder = j2dDefaultIndTexOrderNull;
	}
	for (int i = 0; i < ARRAY_SIZE(mTexMtxes); i++) {
		mTexMtxes[i].mMtxInfo = j2dDefaultIndTexMtxInfo;
	}
	for (int i = 0; i < ARRAY_SIZE(mTexCoordScales); i++) {
		mTexCoordScales[i].mScaleInfo = j2dDefaultIndTexCoordScaleInfo;
	}
}

/**
 * @note Address: 0x80050D24
 * @note Size: 0xCC
 * setGX__15J2DIndBlockFullFv
 */
void J2DIndBlockFull::setGX()
{
	GXSetNumIndStages(mTexStageNum);
	for (u8 i = 0; i < mTexStageNum; i++) {
		mTexMtxes[i].load(i);
	}
	for (u8 i = 0; i < mTexStageNum; i++) {
		mTexCoordScales[i].load(i);
	}
	for (u8 i = 0; i < mTexStageNum; i++) {
		mTexOrders[i].load(i);
	}
}

/**
 * @note Address: 0x80050DF0
 * @note Size: 0x44
 * initialize__10J2DPEBlockFv
 */
void J2DPEBlock::initialize()
{
	mAlphaComp = J2DAlphaComp();
	mBlendInfo.setBlendInfo(j2dDefaultBlendInfo);
	mDither = j2dDefaultDither;
}

/**
 * @note Address: 0x80050E34
 * @note Size: 0x60
 * setGX__10J2DPEBlockFv
 */
void J2DPEBlock::setGX()
{
	GXSetAlphaCompare(GXCompare(mAlphaComp.getComp0()), mAlphaComp.getRef0(), GXAlphaOp(mAlphaComp.getOp()),
	                  GXCompare(mAlphaComp.getComp1()), mAlphaComp.getRef1());
	GXSetBlendMode(GXBlendMode(mBlendInfo.getType()), GXBlendFactor(mBlendInfo.getSrcFactor()), GXBlendFactor(mBlendInfo.getDstFactor()),
	               GXLogicOp(mBlendInfo.getOp()));
	GXSetDither(mDither);
}
