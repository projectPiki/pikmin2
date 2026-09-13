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
	for (int i = 0; i != 8; i++) {
		mTexIndices[i] = -1;
	}
	mFontNo                      = -1;
	const J2DTevOrderInfo& order = j2dDefaultTevOrderInfoNull;
	for (int i = 0; i < 8; i++) {
		mOrders[i].setTevOrderInfo(order);
	}
	const GXColorS10& color = j2dDefaultTevColor;
	for (int i = 0; i < 4; i++) {
		mColors[i] = color;
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
