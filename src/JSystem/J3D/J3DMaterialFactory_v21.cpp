#include "JSystem/J3D/J3DMaterialFactory.h"
#include "JSystem/J3D/J3DColorBlock.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/JSupport/JSU.h"

/**
 * @note Address: 0x80084A00
 * @note Size: 0x1E0
 */
J3DMaterialFactory_v21::J3DMaterialFactory_v21(const J3DMaterialBlock_v21& matblock)
{
	mMaterialNum = matblock.mNumMaterials;

	mInitData             = JSUConvertOffsetToPtr<J3DMaterialInitData_v21>(&matblock, matblock.mMatEntryDataOffset);
	mMatRemapTable        = JSUConvertOffsetToPtr<u16>(&matblock, matblock.mMatRemapTableOffset);
	mCullModeInfo         = JSUConvertOffsetToPtr<GXCullMode>(&matblock, matblock.mCullModeInfoOffset);
	mColorData            = JSUConvertOffsetToPtr<GXColor>(&matblock, matblock.mMatColorsOffset);
	mNumColorChans        = JSUConvertOffsetToPtr<u8>(&matblock, matblock.mNumColorChansOffset);
	mColorChanInfo        = JSUConvertOffsetToPtr<J3DColorChanInfo>(&matblock, matblock.mColorChanInfoOffset);
	mTexGenNums           = JSUConvertOffsetToPtr<u8>(&matblock, matblock.mNumTexCoordsOffset);
	mTexCoordInfo         = JSUConvertOffsetToPtr<J3DTexCoordInfo>(&matblock, matblock.mTexCoordInfoOffset);
	mTexCoord2Info        = JSUConvertOffsetToPtr<J3DTexCoord2Info>(&matblock, matblock.mTexCoord2InfoOffset);
	mTexMtxInfo           = JSUConvertOffsetToPtr<J3DTexMtxInfo>(&matblock, matblock.mTexMtxInfoOffset);
	mTexMtxInfo2          = JSUConvertOffsetToPtr<J3DTexMtxInfo>(&matblock, matblock.mTexMtxInfo2Offset);
	mTextureRemapTable    = JSUConvertOffsetToPtr<u16>(&matblock, matblock.mTextureRemapTableOffset);
	mTevOrderInfo         = JSUConvertOffsetToPtr<J3DTevOrderInfo>(&matblock, matblock.mTevOrderInfoOffset);
	mTevColors            = JSUConvertOffsetToPtr<GXColorS10>(&matblock, matblock.mTevColorsOffset);
	mTevKColors           = JSUConvertOffsetToPtr<GXColor>(&matblock, matblock.mTevKColorsOffset);
	mTevStageNums         = JSUConvertOffsetToPtr<u8>(&matblock, matblock.mNumTevStagesOffset);
	mTevStageInfo         = JSUConvertOffsetToPtr<J3DTevStageInfo>(&matblock, matblock.mTevStageInfoOffset);
	mTevSwapModeInfo      = JSUConvertOffsetToPtr<J3DTevSwapModeInfo>(&matblock, matblock.mTevSwapModeInfoOffset);
	mTevSwapModeTableInfo = JSUConvertOffsetToPtr<J3DTevSwapModeTableInfo>(&matblock, matblock.mTevSwapModeTableInfoOffset);
	mFogInfo              = JSUConvertOffsetToPtr<J3DFogInfo>(&matblock, matblock.mFogInfoOffset);
	mAlphaCompInfo        = JSUConvertOffsetToPtr<J3DAlphaCompInfo>(&matblock, matblock.mAlphaCompInfoOffset);
	mBlendInfo            = JSUConvertOffsetToPtr<J3DBlendInfo>(&matblock, matblock.mBlendInfoOffset);
	mZModeInfo            = JSUConvertOffsetToPtr<J3DZModeInfo>(&matblock, matblock.mZModeInfoOffset);
	mZCompareInfo         = JSUConvertOffsetToPtr<u8>(&matblock, matblock.mZCompareInfoOffset);
	mDitherInfo           = JSUConvertOffsetToPtr<u8>(&matblock, matblock.mDitherInfoOffset);
	mNBTScaleInfo         = JSUConvertOffsetToPtr<J3DNBTScaleInfo>(&matblock, matblock.mNBTScaleInfoOffset);
}

/**
 * @note Address: 0x80084BE0
 * @note Size: 0x4C
 */
u16 J3DMaterialFactory_v21::countUniqueMaterials()
{
	// Man if ONLY there were an easier way to do this!
	u16 count;

	for (count = 0; count < mMaterialNum; count++) { }

	return count;
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
u32 J3DMaterialFactory_v21::countStages(int index) const
{
	J3DMaterialInitData_v21* data = &mInitData[mMatRemapTable[index]];
	u32 texNum                    = 0;
	u32 tevID                     = 0;
	if (data->mNumTevStagesIndex != 255) {
		tevID = mTevStageNums[data->mNumTevStagesIndex];
	}
	for (int i = 0; i < 8; i++) {
		if (data->mTextureIndex[i] != 0xffff) {
			texNum++;
		}
	}
	if (tevID != texNum && texNum != 0) {
		return tevID > texNum ? tevID : texNum;
	} else {
		return tevID;
	}
}

/**
 * @note Address: 0x80084C2C
 * @note Size: 0x838
 */
J3DMaterial* J3DMaterialFactory_v21::create(J3DMaterial* mat, int index, u32 flags) const
{
	u32 stageCount = countStages(index);
	u32 tevFlag    = getMdlDataFlag_TevStageNum(flags);
	u32 tevNum     = stageCount > tevFlag ? stageCount : tevFlag;

	u32 texNo = tevNum > 8 ? 8 : tevNum;

	J3DMaterialInitData_v21* data = &mInitData[mMatRemapTable[index]];
	u32 texNum2;
	if (data->mNumTexGensIndex != 255) {
		texNum2 = mTexGenNums[data->mNumTexGensIndex];
	} else {
		texNum2 = 0;
	}

	u32 texGenFlag = texNum2 > 4 ? 0 : getMdlDataFlag_TexGenFlag(flags);
	u32 colorFlag  = getMdlDataFlag_ColorFlag(flags);
	u32 PEFlag     = getMdlDataFlag_PEFlag(flags);
	BOOL IndFlag   = (flags & J3DMLF_Material_UseIndirect) ? TRUE : FALSE;

	if (mat == nullptr) {
		mat = new J3DMaterial();
	}
	mat->mColorBlock   = mat->createColorBlock(colorFlag);
	mat->mTexGenBlock  = mat->createTexGenBlock(texGenFlag);
	mat->mTevBlock     = mat->createTevBlock((u16)tevNum);
	mat->mIndBlock     = mat->createIndBlock(IndFlag);
	mat->mPEBlock      = mat->createPEBlock(PEFlag, mInitData[mMatRemapTable[index]].mPixelEngineMode);
	mat->mIndex        = index;
	mat->mMaterialMode = mInitData[mMatRemapTable[index]].mPixelEngineMode;

	mat->mColorBlock->setColorChanNum(newColorChanNum(index));
	mat->mColorBlock->setCullMode(newCullMode(index));
	mat->mTexGenBlock->setTexGenNum(newTexGenNum(index));
	mat->mTexGenBlock->setNBTScale(newNBTScale(index));
	mat->mPEBlock->setFog(newFog(index));
	mat->mPEBlock->setAlphaComp(newAlphaComp(index));
	mat->mPEBlock->setBlend(newBlend(index));
	mat->mPEBlock->setZMode(newZMode(index));
	mat->mPEBlock->setZCompLoc(newZCompLoc(index));
	mat->mPEBlock->setDither(newDither(index));
	mat->mTevBlock->setTevStageNum(newTevStageNum(index));
	for (u8 i = 0; i < texNo; i++) {
		mat->mTevBlock->setTexNo(i, newTexNo(index, i));
	}
	for (u8 i = 0; i < tevNum; i++) {
		mat->mTevBlock->setTevOrder(i, newTevOrder(index, i));
	}

	for (u8 i = 0; i < tevNum; i++) {
		J3DMaterialInitData_v21* data = &mInitData[mMatRemapTable[index]];
		mat->mTevBlock->setTevStage(i, newTevStage(index, i));
		u16 id = data->mTevSwapModeInfoIndex[i];
		if (id != 0xffff) {
			mat->mTevBlock->getTevStage(i)->setTexSel(mTevSwapModeInfo[id].mTexSel);
			mat->mTevBlock->getTevStage(i)->setRasSel(mTevSwapModeInfo[data->mTevSwapModeInfoIndex[i]].mRasSel);
		}
	}

	for (u8 i = 0; i < 4; i++) {
		mat->mTevBlock->setTevKColor(i, newTevKColor(index, i));
	}

	for (u8 i = 0; i < 4; i++) {
		mat->mTevBlock->setTevColor(i, newTevColor(index, i));
	}

	for (u8 i = 0; i < 4; i++) {
		mat->mTevBlock->setTevSwapModeTable(i, newTevSwapModeTable(index, i));
	}

	for (u8 i = 0; i < 2; i++) {
		mat->mColorBlock->setMatColor(i, newMatColor(index, i));
	}

	for (u8 i = 0; i < 4; i++) {
		J3DColorChan colorChan = newColorChan(index, i);
		mat->mColorBlock->setColorChan(i, colorChan);
	}

	for (u8 i = 0; i < texNum2; i++) {
		J3DTexCoord texCoord = newTexCoord(index, i);
		mat->mTexGenBlock->setTexCoord(i, &texCoord);
	}

	for (u8 i = 0; i < 8; i++) {
		mat->mTexGenBlock->setTexMtx(i, newTexMtx(index, i));
	}

	data = &mInitData[mMatRemapTable[index]];
	for (u8 i = 0; i < tevNum; i++) {
		if (data->mTevKColorSels[i] != 255) {
			mat->mTevBlock->setTevKColorSel(i, data->mTevKColorSels[i]);
		} else {
			mat->mTevBlock->setTevKColorSel(i, (u8)12);
		}
	}
	for (u8 i = 0; i < tevNum; i++) {
		if (data->mTevKAlphaSels[i] != 255) {
			mat->mTevBlock->setTevKAlphaSel(i, data->mTevKAlphaSels[i]);
		} else {
			mat->mTevBlock->setTevKAlphaSel(i, (u8)28);
		}
	}
	return mat;
}

/**
 * @note Address: 0x80085464
 * @note Size: 0x90
 */
J3DGXColor J3DMaterialFactory_v21::newMatColor(int matID, int colID) const
{
	GXColor defaultMatColor = { 255, 255, 255, 255 };
	J3DGXColor j3dColor;
	j3dColor.r = defaultMatColor.r;
	j3dColor.g = defaultMatColor.g;
	j3dColor.b = defaultMatColor.b;
	j3dColor.a = defaultMatColor.a;
	u16 id     = getMaterialInitData(matID).mMatColorIndex[colID];
	if (id != 0xffff) {
		return mColorData[id];
	}
	return j3dColor;
}

/**
 * @note Address: 0x800854F4
 * @note Size: 0x38
 */
u8 J3DMaterialFactory_v21::newColorChanNum(int matID) const
{
	u8 id = getMaterialInitData(matID).mNumberColorChanControls;
	if (id != 255) {
		return mNumColorChans[id];
	}
	return 0;
}

/**
 * @note Address: 0x8008552C
 * @note Size: 0x194
 */
J3DColorChan J3DMaterialFactory_v21::newColorChan(int matID, int colID) const
{
	u16 id = getMaterialInitData(matID).mColorChanControlIndex[colID];
	if (id != 0xffff) {
		return J3DColorChan(mColorChanInfo[id]);
	}

	return J3DColorChan();
}

/**
 * @note Address: 0x800856C0
 * @note Size: 0x38
 */
u32 J3DMaterialFactory_v21::newTexGenNum(int matID) const
{
	u8 id = getMaterialInitData(matID).mNumTexGensIndex;
	if (id != 255) {
		return mTexGenNums[id];
	}
	return 0;
}

/**
 * @note Address: 0x800856F8
 * @note Size: 0x84
 */
J3DTexCoord J3DMaterialFactory_v21::newTexCoord(int matID, int texID) const
{
	u16 id = getMaterialInitData(matID).mTexGenInfoIndex[texID];
	if (id != 0xffff) {
		return J3DTexCoord(mTexCoordInfo[id]);
	}

	return J3DTexCoord();
}

/**
 * @note Address: 0x8008577C
 * @note Size: 0x158
 */
J3DTexMtx* J3DMaterialFactory_v21::newTexMtx(int matID, int texID) const
{
	J3DTexMtx* texMtx                 = nullptr;
	J3DMaterialInitData_v21& initData = getMaterialInitData(matID);
	if (initData.mTexMatrixIndex[texID] != 0xFFFF) {
		texMtx = new J3DTexMtx(mTexMtxInfo[initData.mTexMatrixIndex[texID]]);
	}
	return texMtx;
}

/**
 * @note Address: 0x800858D4
 * @note Size: 0x40
 */
u8 J3DMaterialFactory_v21::newCullMode(int matID) const
{
	u8 cullIndex = getMaterialInitData(matID).mCullModeIndex;
	if (cullIndex != 0xFF) {
		return mCullModeInfo[cullIndex];
	}
	return 0xFF;
}

/**
 * @note Address: 0x80085914
 * @note Size: 0x48
 */
u16 J3DMaterialFactory_v21::newTexNo(int matID, int texID) const
{
	u16 id = getMaterialInitData(matID).mTextureIndex[texID];
	if (id != 0xFFFF) {
		return mTextureRemapTable[id];
	}
	return 0xFFFF;
}

/**
 * @note Address: 0x8008595C
 * @note Size: 0x74
 */
J3DTevOrder J3DMaterialFactory_v21::newTevOrder(int matID, int tevID) const
{
	u16 id = getMaterialInitData(matID).mTevOrderInfoIndex[tevID];
	if (id != 0xFFFF) {
		return mTevOrderInfo[id];
	}
	return j3dDefaultTevOrderInfoNull;
}

/**
 * @note Address: 0x800859D0
 * @note Size: 0x98
 */
J3DGXColorS10 J3DMaterialFactory_v21::newTevColor(int matID, int colID) const
{
	GXColorS10 defaultTevColor = { 0, 0, 0, 0 };
	J3DGXColorS10 j3dColor;
	j3dColor.r = defaultTevColor.r;
	j3dColor.g = defaultTevColor.g;
	j3dColor.b = defaultTevColor.b;
	j3dColor.a = defaultTevColor.a;
	u16 id     = getMaterialInitData(matID).mTevColorIndex[colID];
	if (id != 0xFFFF) {
		return mTevColors[id];
	}
	return j3dColor;
}

/**
 * @note Address: 0x80085A68
 * @note Size: 0x90
 */
J3DGXColor J3DMaterialFactory_v21::newTevKColor(int matID, int colID) const
{
	GXColor defaultTevColor = { 255, 255, 255, 255 };
	J3DGXColor j3dColor;
	j3dColor.r = defaultTevColor.r;
	j3dColor.g = defaultTevColor.g;
	j3dColor.b = defaultTevColor.b;
	j3dColor.a = defaultTevColor.a;
	u16 id     = getMaterialInitData(matID).mTevKColorIndex[colID];
	if (id != 0xFFFF) {
		return mTevKColors[id];
	}
	return j3dColor;
}

/**
 * @note Address: 0x80085AF8
 * @note Size: 0x38
 */
u8 J3DMaterialFactory_v21::newTevStageNum(int id) const
{
	u8 v1 = getMaterialInitData(id).mNumTevStagesIndex;
	if (v1 != 0xFF) {
		return mTevStageNums[v1];
	}
	return 255;
}

/**
 * @note Address: 0x80085B30
 * @note Size: 0x60
 */
J3DTevStage J3DMaterialFactory_v21::newTevStage(int matID, int tevID) const
{
	u16 id = getMaterialInitData(matID).mTevStageInfoIndex[tevID];
	if (id != 0xFFFF) {
		return J3DTevStage(mTevStageInfo[id]);
	}
	return J3DTevStage();
}

/**
 * @note Address: 0x80085B90
 * @note Size: 0x9C
 */
J3DTevSwapModeTable J3DMaterialFactory_v21::newTevSwapModeTable(int matID, int tevID) const
{
	u16 id = getMaterialInitData(matID).mTevSwapModeTableIndex[tevID];
	if (id != 0xFFFF) {
		return J3DTevSwapModeTable(mTevSwapModeTableInfo[id]);
	}
	return J3DTevSwapModeTable(j3dDefaultTevSwapModeTable);
}

/**
 * @note Address: 0x80085C2C
 * @note Size: 0x24C
 */
J3DFog J3DMaterialFactory_v21::newFog(int matID) const
{
	J3DFog fog;
	J3DMaterialInitData_v21* data = &mInitData[mMatRemapTable[matID]];
	if (data->mFogInfoIndex != 0xFFFF) {
		fog.setFogInfo(mFogInfo[data->mFogInfoIndex]);
	}
	return fog;
}

/**
 * @note Address: 0x80085E78
 * @note Size: 0x80
 */
J3DAlphaComp J3DMaterialFactory_v21::newAlphaComp(int matID) const
{
	u16 id = getMaterialInitData(matID).mAlphaCompareIndex;
	if (id != 0xFFFF) {
		return J3DAlphaComp(mAlphaCompInfo[id]);
	}
	return J3DAlphaComp(0xFFFF);
}

/**
 * @note Address: 0x80085EF8
 * @note Size: 0x7C
 */
J3DBlend J3DMaterialFactory_v21::newBlend(int id) const
{
	u16 v1 = getMaterialInitData(id).mBlendModeIndex;
	if (v1 != 0xFFFF) {
		return J3DBlend(mBlendInfo[v1]);
	}
	return J3DBlend();
}

/**
 * @note Address: 0x80085F74
 * @note Size: 0x60
 */
J3DZMode J3DMaterialFactory_v21::newZMode(int matID) const
{
	u8 id = getMaterialInitData(matID).mZModeIndex;
	if (id != 0xFF) {
		return J3DZMode(mZModeInfo[id]);
	}
	return J3DZMode();
}

/**
 * @note Address: 0x80085FD4
 * @note Size: 0x38
 */
u8 J3DMaterialFactory_v21::newZCompLoc(int matID) const
{
	u8 id = getMaterialInitData(matID).mZCompLocIndex;
	if (id != 0xFF) {
		return mZCompareInfo[id];
	}
	return 0;
}

/**
 * @note Address: 0x8008600C
 * @note Size: 0x38
 */
u8 J3DMaterialFactory_v21::newDither(int matID) const
{
	u8 id = getMaterialInitData(matID).mDitherIndex;
	if (id != 0xFF) {
		return mDitherInfo[id];
	}
	return 1;
}

/**
 * @note Address: 0x80086044
 * @note Size: 0xA8
 */
J3DNBTScale J3DMaterialFactory_v21::newNBTScale(int matID) const
{
	J3DNBTScale ret;
	u16 id = getMaterialInitData(matID).mNBTScaleIndex;
	if (id != 0xFFFF) {
		return J3DNBTScale(mNBTScaleInfo[id]);
	}
	return ret;
}
