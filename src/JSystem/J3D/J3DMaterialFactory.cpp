#include "JSystem/J3D/J3DMaterialFactory.h"
#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DColorBlock.h"
#include "JSystem/J3D/J3DDisplayListObj.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "JSystem/J3D/J3DInd.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DPE.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JSupport/JSU.h"

/**
 * @note Address: 0x8006C3A4
 * @note Size: 0x248
 */
J3DMaterialFactory::J3DMaterialFactory(const J3DMaterialBlock& block)
{
	mMaterialNum   = block.mNumMaterials;
	mInitData      = JSUConvertOffsetToPtr<J3DMaterialInitData>(&block, block.mMatEntryDataOffset);
	mMatRemapTable = JSUConvertOffsetToPtr<u16>(&block, block.mMatRemapTableOffset);
	if (block.mIndTextureInfoOffset != nullptr && (u32)block.mIndTextureInfoOffset - (u32)block.mStringTableOffset > 4) {
		mIndInitData = JSUConvertOffsetToPtr<J3DIndInitData>(&block, block.mIndTextureInfoOffset);
	} else {
		mIndInitData = nullptr;
	}
	mCullModeInfo         = JSUConvertOffsetToPtr<_GXCullMode>(&block, block.mCullModeInfoOffset);
	mMaterialColors       = JSUConvertOffsetToPtr<GXColor>(&block, block.mMatColorsOffset);
	mNumColorChans        = JSUConvertOffsetToPtr<u8>(&block, block.mNumColorChansOffset);
	mColorChanInfo        = JSUConvertOffsetToPtr<J3DColorChanInfo>(&block, block.mColorChanInfoOffset);
	mAmbientColors        = JSUConvertOffsetToPtr<GXColor>(&block, block.mAmbientColorOffset);
	mLightInfo            = JSUConvertOffsetToPtr<J3DLightInfo>(&block, block.mLightInfoOffset);
	mTexGenNums           = JSUConvertOffsetToPtr<u8>(&block, block.mNumTexCoordsOffset);
	mTexCoordInfo         = JSUConvertOffsetToPtr<J3DTexCoordInfo>(&block, block.mTexCoordInfoOffset);
	mTexCoord2Info        = JSUConvertOffsetToPtr<J3DTexCoord2Info>(&block, block.mTexCoord2InfoOffset);
	mTexMtxInfo           = JSUConvertOffsetToPtr<J3DTexMtxInfo>(&block, block.mTexMtxInfoOffset);
	mTexMtxInfo2          = JSUConvertOffsetToPtr<J3DTexMtxInfo>(&block, block.mTexMtxInfo2Offset);
	mTextureRemapTable    = JSUConvertOffsetToPtr<u16>(&block, block.mTextureRemapTableOffset);
	mTevOrderInfo         = JSUConvertOffsetToPtr<J3DTevOrderInfo>(&block, block.mTevOrderInfoOffset);
	mTevColors            = JSUConvertOffsetToPtr<GXColorS10>(&block, block.mTevColorsOffset);
	mTevKColors           = JSUConvertOffsetToPtr<GXColor>(&block, block.mTevKColorsOffset);
	mTevStageNums         = JSUConvertOffsetToPtr<u8>(&block, block.mNumTevStagesOffset);
	mTevStageInfo         = JSUConvertOffsetToPtr<J3DTevStageInfo>(&block, block.mTevStageInfoOffset);
	mTevSwapModeInfo      = JSUConvertOffsetToPtr<J3DTevSwapModeInfo>(&block, block.mTevSwapModeInfoOffset);
	mTevSwapModeTableInfo = JSUConvertOffsetToPtr<J3DTevSwapModeTableInfo>(&block, block.mTevSwapModeTableInfoOffset);
	mFogInfo              = JSUConvertOffsetToPtr<J3DFogInfo>(&block, block.mFogInfoOffset);
	mAlphaCompInfo        = JSUConvertOffsetToPtr<J3DAlphaCompInfo>(&block, block.mAlphaCompInfoOffset);
	mBlendInfo            = JSUConvertOffsetToPtr<J3DBlendInfo>(&block, block.mBlendInfoOffset);
	mZModeInfo            = JSUConvertOffsetToPtr<J3DZModeInfo>(&block, block.mZModeInfoOffset);
	mZCompareInfo         = JSUConvertOffsetToPtr<u8>(&block, block.mZCompareInfoOffset);
	mDitherInfo           = JSUConvertOffsetToPtr<u8>(&block, block.mDitherInfoOffset);
	mNBTScaleInfo         = JSUConvertOffsetToPtr<J3DNBTScaleInfo>(&block, block.mNBTScaleInfoOffset);

	mDisplayLists = nullptr;
	mPatchInfo    = nullptr;
	mCurrMtxInfo  = nullptr;
	mPEModes      = nullptr;
}

/**
 * @note Address: 0x8006C5EC
 * @note Size: 0x88
 * __ct__18J3DMaterialFactoryFRC18J3DMaterialDLBlock
 */
J3DMaterialFactory::J3DMaterialFactory(const J3DMaterialDLBlock& block)
{
	mMaterialNum  = block.mEntries;
	mInitData     = nullptr;
	mDisplayLists = JSUConvertOffsetToPtr<J3DDisplayListInit>(&block, block.mPacketOffset);
	mPatchInfo    = JSUConvertOffsetToPtr<J3DPatchingInfo>(&block, block.mSubPacketLocationOffset);
	mCurrMtxInfo  = JSUConvertOffsetToPtr<J3DCurrentMtxInfo>(&block, block.mMatrixIndexOffset);
	mPEModes      = JSUConvertOffsetToPtr<u8>(&block, block.mPixelEngineModesOffset);
}

/**
 * @note Address: 0x8006C674
 * @note Size: 0x48
 */
u32 J3DMaterialFactory::countUniqueMaterials()
{
	u32 count = 0;
	int maxID = -1;
	for (u16 i = 0; i < mMaterialNum; i++) {
		if (maxID < mMatRemapTable[i]) {
			count++;
			maxID = mMatRemapTable[i];
		}
	}
	return count;
}

/**
 * @note Address: 0x8006C674
 * @note Size: 0x38
 */
u32 J3DMaterialFactory::countTexGens(int matID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u8 id                     = data.mNumTexGensIndex;
	if (id != 0xFF) {
		return mTexGenNums[id];
	}
	return 0;
}

/**
 * @note Address: 0x8006C674
 * @note Size: 0xE0
 */
u32 J3DMaterialFactory::countStages(int matID) const
{
	J3DMaterialInitData& initData = mInitData[mMatRemapTable[matID]];

	u32 texGenNum   = 0;
	u32 tevStageNum = 0;

	u8 id = initData.mNumTevStagesIndex;
	if (id != 0xFF) {
		tevStageNum = mTevStageNums[id];
	}

	for (s32 i = 0; i < 8; i++) {
		if (initData.mTextureIndex[i] != 0xFFFF) {
			texGenNum++;
		}
	}

	if (tevStageNum != texGenNum && texGenNum != 0) {
		return tevStageNum > texGenNum ? tevStageNum : texGenNum;
	}
	return tevStageNum;
}

/**
 * @note Address: 0x8006C6BC
 * @note Size: 0x7C
 * create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
 */
J3DMaterial* J3DMaterialFactory::create(J3DMaterial* material, MaterialType type, int matID, u32 flags) const
{
	switch (type) {
	case NORMAL:
		material = createNormalMaterial(material, matID, flags);
		break;
	case LOCKED:
		material = createLockedMaterial(material, matID, flags);
		break;
	case PATCHED:
		material = createPatchedMaterial(material, matID, flags);
		break;
	}
	return material;
}

/**
 * @note Address: 0x8006C738
 * @note Size: 0xA0C
 */
J3DMaterial* J3DMaterialFactory::createNormalMaterial(J3DMaterial* material, int matID, u32 flags) const
{
	if (mDisplayLists) {
		return createLockedMaterial(material, matID, flags);
	}

	u32 stageNum    = countStages(matID);
	u32 tevFlag     = getMdlDataFlag_TevStageNum(flags);
	u32 tevStageNum = stageNum > tevFlag ? stageNum : tevFlag;
	u32 texNum      = tevStageNum > 8 ? 8 : tevStageNum;

	u32 texGenNum  = countTexGens(matID);
	u32 texGenFlag = texGenNum > 4 ? 0 : getMdlDataFlag_TexGenFlag(flags);
	u32 colorFlag  = getMdlDataFlag_ColorFlag(flags);
	u32 peFlag     = getMdlDataFlag_PEFlag(flags);
	BOOL indFlag   = (flags & J3DMLF_Material_UseIndirect) ? TRUE : FALSE;

	if (!material) {
		material = new J3DMaterial();
	}

	material->mColorBlock   = J3DMaterial::createColorBlock(colorFlag);
	material->mTexGenBlock  = J3DMaterial::createTexGenBlock(texGenFlag);
	material->mTevBlock     = J3DMaterial::createTevBlock((u16)tevStageNum);
	material->mIndBlock     = J3DMaterial::createIndBlock(indFlag);
	material->mPEBlock      = J3DMaterial::createPEBlock(peFlag, getMaterialMode(matID));
	material->mIndex        = matID;
	material->mMaterialMode = getMaterialMode(matID);
	material->mColorBlock->setColorChanNum(newColorChanNum(matID));
	material->mColorBlock->setCullMode(newCullMode(matID));
	material->mTexGenBlock->setTexGenNum(newTexGenNum(matID));
	material->mTexGenBlock->setNBTScale(newNBTScale(matID));
	material->mPEBlock->setFog(newFog(matID));
	material->mPEBlock->setAlphaComp(newAlphaComp(matID));
	material->mPEBlock->setBlend(newBlend(matID));
	material->mPEBlock->setZMode(newZMode(matID));
	material->mPEBlock->setZCompLoc(newZCompLoc(matID));
	material->mPEBlock->setDither(newDither(matID));
	material->mTevBlock->setTevStageNum(newTevStageNum(matID));

	for (u8 i = 0; i < texNum; i++)
		material->mTevBlock->setTexNo(i, newTexNo(matID, i));
	for (u8 i = 0; i < tevStageNum; i++)
		material->mTevBlock->setTevOrder(i, newTevOrder(matID, i));
	for (u8 i = 0; i < tevStageNum; i++) {
		J3DMaterialInitData& initData = mInitData[mMatRemapTable[matID]];
		material->mTevBlock->setTevStage(i, newTevStage(matID, i));
		if (initData.mTevSwapModeInfoIndex[i] != 0xFFFF) {
			material->mTevBlock->getTevStage(i)->setTexSel(mTevSwapModeInfo[initData.mTevSwapModeInfoIndex[i]].mTexSel);
			material->mTevBlock->getTevStage(i)->setRasSel(mTevSwapModeInfo[initData.mTevSwapModeInfoIndex[i]].mRasSel);
		}
	}
	for (u8 i = 0; i < 4; i++)
		material->mTevBlock->setTevKColor(i, newTevKColor(matID, i));
	for (u8 i = 0; i < 4; i++)
		material->mTevBlock->setTevColor(i, newTevColor(matID, i));
	for (u8 i = 0; i < 4; i++)
		material->mTevBlock->setTevSwapModeTable(i, newTevSwapModeTable(matID, i));
	for (u8 i = 0; i < 2; i++)
		material->mColorBlock->setAmbColor(i, newAmbColor(matID, i));
	for (u8 i = 0; i < 2; i++)
		material->mColorBlock->setMatColor(i, newMatColor(matID, i));
	for (u8 i = 0; i < 4; i++) {
		J3DColorChan colorChan = newColorChan(matID, i);
		material->mColorBlock->setColorChan(i, colorChan);
	}
	for (u8 i = 0; i < texGenNum; i++) {
		J3DTexCoord texCoord = newTexCoord(matID, i);
		material->mTexGenBlock->setTexCoord(i, &texCoord);
	}
	for (u8 i = 0; i < 8; i++) {
		material->mTexGenBlock->setTexMtx(i, newTexMtx(matID, i));
	}
	J3DMaterialInitData& initData = mInitData[mMatRemapTable[matID]];
	for (u8 i = 0; i < tevStageNum; i++) {
		if (initData.mTevKColorSels[i] != 0xff) {
			material->mTevBlock->setTevKColorSel(i, initData.mTevKColorSels[i]);
		} else {
			material->mTevBlock->setTevKColorSel(i, 0xc);
		}
	}
	for (u8 i = 0; i < tevStageNum; i++) {
		if (initData.mTevKAlphaSels[i] != 0xff) {
			material->mTevBlock->setTevKAlphaSel(i, initData.mTevKAlphaSels[i]);
		} else {
			material->mTevBlock->setTevKAlphaSel(i, 0x1C);
		}
	}
	if (mIndInitData) {
		u8 indTexStageNum = newIndTexStageNum(matID);
		material->mIndBlock->setIndTexStageNum(newIndTexStageNum(matID));
		for (u8 i = 0; i < indTexStageNum; i++)
			material->mIndBlock->setIndTexMtx(i, newIndTexMtx(matID, i));
		for (u8 i = 0; i < indTexStageNum; i++)
			material->mIndBlock->setIndTexOrder(i, newIndTexOrder(matID, i));
		for (u8 i = 0; i < indTexStageNum; i++)
			material->mIndBlock->setIndTexCoordScale(i, newIndTexCoordScale(matID, i));
		for (u8 i = 0; i < tevStageNum; i++)
			material->mTevBlock->setIndTevStage(i, newIndTevStage(matID, i));
	}
	return material;
}

/**
 * @note Address: 0x8006D170
 * @note Size: 0x924
 */
J3DPatchedMaterial* J3DMaterialFactory::createPatchedMaterial(J3DMaterial* material, int matID, u32 flags) const
{
	if (material == nullptr) {
		material = new J3DPatchedMaterial();
	}

	bool indFlag          = (flags & 0x03000000) ? true : false; // fakematch?
	material->mColorBlock = J3DMaterial::createColorBlock(0x40000000);

	material->mTexGenBlock  = new J3DTexGenBlockPatched();
	material->mTevBlock     = new J3DTevBlockPatched();
	material->mIndBlock     = J3DMaterial::createIndBlock(indFlag);
	material->mPEBlock      = J3DMaterial::createPEBlock(0x10000000, getMaterialMode(matID));
	material->mIndex        = matID;
	material->mMaterialMode = getMaterialMode(matID);
	material->mTevBlock->setTevStageNum(newTevStageNum(matID));
	material->mColorBlock->setColorChanNum(newColorChanNum(matID));
	material->mColorBlock->setCullMode(newCullMode(matID));
	material->mPEBlock->setFog(newFog(matID));
	material->mPEBlock->setAlphaComp(newAlphaComp(matID));
	material->mPEBlock->setBlend(newBlend(matID));
	material->mPEBlock->setZMode(newZMode(matID));
	material->mPEBlock->setZCompLoc(newZCompLoc(matID));
	material->mPEBlock->setDither(newDither(matID));

	u8 tevStageNum = material->mTevBlock->getTevStageNum();
	for (u8 i = 0; i < 8; i++)
		material->mTevBlock->setTexNo(i, newTexNo(matID, i));
	for (u8 i = 0; i < tevStageNum; i++)
		material->mTevBlock->setTevOrder(i, newTevOrder(matID, i));
	for (u8 i = 0; i < 4; i++)
		material->mTevBlock->setTevKColor(i, newTevKColor(matID, i));
	for (u8 i = 0; i < 4; i++)
		material->mTevBlock->setTevColor(i, newTevColor(matID, i));
	for (u8 i = 0; i < tevStageNum; i++) {
		J3DMaterialInitData& initData = mInitData[mMatRemapTable[matID]];
		material->mTevBlock->setTevStage(i, newTevStage(matID, i));
		if (initData.mTevSwapModeInfoIndex[i] != 0xFFFF) {
			material->mTevBlock->getTevStage(i)->setTexSel(mTevSwapModeInfo[initData.mTevSwapModeInfoIndex[i]].mTexSel);
			material->mTevBlock->getTevStage(i)->setRasSel(mTevSwapModeInfo[initData.mTevSwapModeInfoIndex[i]].mRasSel);
		}
	}
	J3DMaterialInitData& initData = mInitData[mMatRemapTable[matID]];
	for (u8 i = 0; i < tevStageNum; i++) {
		if (initData.mTevKColorSels[i] != 0xff) {
			material->mTevBlock->setTevKColorSel(i, initData.mTevKColorSels[i]);
		} else {
			material->mTevBlock->setTevKColorSel(i, 0xc);
		}
	}
	for (u8 i = 0; i < 2; i++)
		material->mColorBlock->setMatColor(i, newMatColor(matID, i));
	for (u8 i = 0; i < 4; i++) {
		J3DColorChan colorChan = newColorChan(matID, i);
		material->mColorBlock->setColorChan(i, colorChan);
	}

	u32 texGenNum = countTexGens(matID);
	material->mTexGenBlock->setTexGenNum(newTexGenNum(matID));
	for (u8 i = 0; i < 8; i++)
		material->mTexGenBlock->setTexMtx(i, newTexMtx(matID, i));
	for (u8 i = 0; i < texGenNum; i++) {
		J3DTexCoord texCoord = newTexCoord(matID, i);
		material->mTexGenBlock->setTexCoord(i, &texCoord);
	}
	if (indFlag && mIndInitData) {
		u8 indTexStageNum = newIndTexStageNum(matID);
		material->mIndBlock->setIndTexStageNum(newIndTexStageNum(matID));
		for (u8 i = 0; i < indTexStageNum; i++)
			material->mIndBlock->setIndTexMtx(i, newIndTexMtx(matID, i));
		for (u8 i = 0; i < indTexStageNum; i++)
			material->mIndBlock->setIndTexOrder(i, newIndTexOrder(matID, i));
		for (u8 i = 0; i < indTexStageNum; i++)
			material->mIndBlock->setIndTexCoordScale(i, newIndTexCoordScale(matID, i));
		for (u8 i = 0; i < tevStageNum; i++)
			material->mTevBlock->setIndTevStage(i, newIndTevStage(matID, i));
	}
	return (J3DPatchedMaterial*)material;
}

/**
 * @note Address: 0x8006DADC
 * @note Size: 0x1A4
 */
void J3DMaterialFactory::modifyPatchedCurrentMtx(J3DMaterial* material, int matID) const
{
	J3DTexCoord coords[8];
	u32 texGenNum = countTexGens(matID);
	for (u8 i = 0; i < texGenNum; i++) {
		coords[i] = newTexCoord(matID, i);
	}
	material->mCurrentMtx.setCurrentTexMtx(coords[0].getTexGenMtx(), coords[1].getTexGenMtx(), coords[2].getTexGenMtx(),
	                                       coords[3].getTexGenMtx(), coords[4].getTexGenMtx(), coords[5].getTexGenMtx(),
	                                       coords[6].getTexGenMtx(), coords[7].getTexGenMtx());
}

/**
 * @note Address: 0x8006DC80
 * @note Size: 0x2B8
 */
J3DLockedMaterial* J3DMaterialFactory::createLockedMaterial(J3DMaterial* material, int index, u32 flags) const
{
	if (material == nullptr) {
		material                = new J3DLockedMaterial;
		material->mColorBlock   = new J3DColorBlockNull;
		material->mTexGenBlock  = new J3DTexGenBlockNull;
		material->mTevBlock     = new J3DTevBlockNull;
		material->mIndBlock     = new J3DIndBlockNull;
		material->mPEBlock      = new J3DPEBlockNull;
		material->mIndex        = index;
		material->mMaterialMode = mPEModes[index];
	}
	material->mCurrentMtx = mCurrMtxInfo[index];
	material->mColorBlock->setMatColorOffset(mPatchInfo[index].mMatColorOffset);
	material->mColorBlock->setColorChanOffset(mPatchInfo[index].mColorChanOffset);
	material->mTexGenBlock->setTexMtxOffset(mPatchInfo[index].mTexMtxOffset);
	material->mTevBlock->setTexNoOffset(mPatchInfo[index].mTexNoOffset);
	material->mTevBlock->setTevRegOffset(mPatchInfo[index].mTevRegOffset);
	material->mPEBlock->setFogOffset(mPatchInfo[index].mFogOffset);

	if (material->mSharedDLObj == nullptr) {
		material->mSharedDLObj = new J3DDisplayListObj;
		material->mSharedDLObj->setSingleDisplayList((void*)(mDisplayLists[index].mOffset + (u32)&mDisplayLists[index]),
		                                             mDisplayLists[index].mSize);
	}
	return static_cast<J3DLockedMaterial*>(material);
}

/**
 * @note Address: 0x8006DF44
 * @note Size: 0x80
 * calcSize__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
 */
size_t J3DMaterialFactory::calcSize(J3DMaterial* material, MaterialType type, int matID, u32 flags) const
{
	size_t size = 0;
	switch (type) {
	case NORMAL:
		size = calcSizeNormalMaterial(material, matID, flags);
		break;
	case LOCKED:
		size = calcSizeLockedMaterial(material, matID, flags);
		break;
	case PATCHED:
		size = calcSizePatchedMaterial(material, matID, flags);
		break;
	}
	return size;
}

/**
 * @note Address: 0x8006DFC4
 * @note Size: 0x258
 */
size_t J3DMaterialFactory::calcSizeNormalMaterial(J3DMaterial* material, int matID, u32 flags) const
{
	u32 size = 0;
	if (mDisplayLists != nullptr) {
		return calcSizeLockedMaterial(material, matID, flags);
	}

	u32 stages           = countStages(matID);
	u32 tev_flag         = getMdlDataFlag_TevStageNum(flags);
	u32 tev_stage_num    = stages > tev_flag ? stages : tev_flag;
	u32 tex_gens         = countTexGens(matID);
	u32 tex_gen_flag     = tex_gens > 4 ? 0 : getMdlDataFlag_TexGenFlag(flags);
	u32 color_block_flag = getMdlDataFlag_ColorFlag(flags);
	u32 pe_flag          = getMdlDataFlag_PEFlag(flags);
	u32 ind_flag         = (flags & J3DMLF_Material_UseIndirect) ? 1 : 0;
	if (material == nullptr) {
		size = sizeof(J3DMaterial);
	}
	size += J3DMaterial::calcSizeColorBlock(color_block_flag);
	size += J3DMaterial::calcSizeTexGenBlock(tex_gen_flag);
	size += J3DMaterial::calcSizeTevBlock((u16)tev_stage_num);
	size += J3DMaterial::calcSizeIndBlock(ind_flag);
	size += J3DMaterial::calcSizePEBlock(pe_flag, getMaterialMode(matID));
	J3DMaterialInitData& initData = mInitData[mMatRemapTable[matID]];
	for (int i = 0; i < 8; i++) {
		if (initData.mTexMatrixIndex[i] != 0xffff) {
			size += sizeof(J3DTexMtx);
		}
	}
	return size;
}

/**
 * @note Address: 0x8006E21C
 * @note Size: 0x13C
 */
size_t J3DMaterialFactory::calcSizePatchedMaterial(J3DMaterial* material, int matID, u32 flags) const
{
	u32 size = 0;
	if (material == nullptr) {
		size = sizeof(J3DPatchedMaterial);
	}
	bool ind_flag = !!(flags & 0x03000000) ? true : false; // fakematch? order gets messed up if you remove the ternary
	size += J3DMaterial::calcSizeColorBlock(0x40000000);
	size += sizeof(J3DTexGenBlockPatched);
	size += sizeof(J3DTevBlockPatched);
	size += J3DMaterial::calcSizeIndBlock(ind_flag);
	size += J3DMaterial::calcSizePEBlock(0x10000000, getMaterialMode(matID));
	J3DMaterialInitData& initData = mInitData[mMatRemapTable[matID]];
	for (int i = 0; i < 8; i++) {
		if (initData.mTexMatrixIndex[i] != 0xffff) {
			size += sizeof(J3DTexMtx);
		}
	}
	return size;
}

/**
 * @note Address: 0x8006E358
 * @note Size: 0x18
 */
size_t J3DMaterialFactory::calcSizeLockedMaterial(J3DMaterial* material, int matID, u32 flags) const
{
	u32 size = 0;
	if (material == nullptr) {
		size = sizeof(J3DLockedMaterial) + sizeof(J3DColorBlockNull) + sizeof(J3DTexGenBlockNull) + sizeof(J3DTevBlockNull)
		     + sizeof(J3DIndBlockNull) + sizeof(J3DPEBlockNull);
	}
	return size + sizeof(J3DDisplayListObj);
}

/**
 * @note Address: 0x8006E370
 * @note Size: 0x90
 */
J3DGXColor J3DMaterialFactory::newMatColor(int matID, int colID) const
{
	GXColor gxColor = { 0xFF, 0xFF, 0xFF, 0xFF };
	J3DGXColor j3dColor;
	j3dColor.r                = gxColor.r;
	j3dColor.g                = gxColor.g;
	j3dColor.b                = gxColor.b;
	j3dColor.a                = gxColor.a;
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 id                    = data.mMatColorIndex[colID];
	if (id != 0xFFFF) {
		return mMaterialColors[id];
	}
	return j3dColor;
}

/**
 * @note Address: 0x8006E400
 * @note Size: 0x38
 */
u8 J3DMaterialFactory::newColorChanNum(int matID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	if (data.mNumberColorChanControls != 0xFF) {
		return mNumColorChans[data.mNumberColorChanControls];
	}
	return 0;
}

/**
 * @note Address: 0x8006E438
 * @note Size: 0x194
 */
J3DColorChan J3DMaterialFactory::newColorChan(int matID, int colID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 id                    = data.mColorChanControlIndex[colID];
	if (id != 0xFFFF) {
		return J3DColorChan(mColorChanInfo[id]);
	}
	return J3DColorChan();
}

/**
 * @note Address: 0x8006E5CC
 * @note Size: 0x90
 */
J3DGXColor J3DMaterialFactory::newAmbColor(int matID, int colID) const
{
	GXColor gxColor = { 50, 50, 50, 50 };
	J3DGXColor j3dColor;
	j3dColor.r                = gxColor.r;
	j3dColor.g                = gxColor.g;
	j3dColor.b                = gxColor.b;
	j3dColor.a                = gxColor.a;
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 id                    = data.mAmbColorIndex[colID];
	if (id != 0xFFFF) {
		return mAmbientColors[id];
	}
	return j3dColor;
}

/**
 * @note Address: 0x8006E65C
 * @note Size: 0x38
 */
u32 J3DMaterialFactory::newTexGenNum(int index) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[index]];
	if (data.mNumTexGensIndex != 0xFF) {
		return mTexGenNums[data.mNumTexGensIndex];
	}
	return 0;
}

/**
 * @note Address: 0x8006E694
 * @note Size: 0x84
 */
J3DTexCoord J3DMaterialFactory::newTexCoord(int matID, int texID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 id                    = data.mTexGenInfoIndex[texID];
	if (id != 0xffff) {
		return J3DTexCoord(mTexCoordInfo[id]);
	}

	return J3DTexCoord();
}

/**
 * @note Address: 0x8006E718
 * @note Size: 0x158
 */
J3DTexMtx* J3DMaterialFactory::newTexMtx(int matID, int texID) const
{
	J3DTexMtx* texMtx             = nullptr;
	J3DMaterialInitData& initData = mInitData[mMatRemapTable[matID]];
	if (initData.mTexMatrixIndex[texID] != 0xFFFF) {
		texMtx = new J3DTexMtx(mTexMtxInfo[initData.mTexMatrixIndex[texID]]);
	}
	return texMtx;
}

/**
 * @note Address: 0x8006E870
 * @note Size: 0x40
 */
u8 J3DMaterialFactory::newCullMode(int matID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	if (data.mCullModeIndex != 0xFF) {
		return (GXCullMode)(mCullModeInfo[data.mCullModeIndex] & 0xFF);
	}
	return (GXCullMode)0xFF;
}

/**
 * @note Address: 0x8006E8B0
 * @note Size: 0x48
 */
u16 J3DMaterialFactory::newTexNo(int matID, int texID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	if (data.mTextureIndex[texID] != 0xFFFF) {
		return mTextureRemapTable[data.mTextureIndex[texID]];
	}
	return 0xFFFF;
}

/**
 * @note Address: 0x8006E8F8
 * @note Size: 0x74
 */
J3DTevOrder J3DMaterialFactory::newTevOrder(int matID, int tevID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 id                    = data.mTevOrderInfoIndex[tevID];
	if (id != 0xFFFF) {
		return mTevOrderInfo[id];
	}
	return j3dDefaultTevOrderInfoNull;
}

/**
 * @note Address: 0x8006E96C
 * @note Size: 0x98
 */
J3DGXColorS10 J3DMaterialFactory::newTevColor(int matID, int colID) const
{
	GXColorS10 defaultTevColor = { 0, 0, 0, 0 };
	J3DGXColorS10 j3dColor;
	j3dColor.r                = defaultTevColor.r;
	j3dColor.g                = defaultTevColor.g;
	j3dColor.b                = defaultTevColor.b;
	j3dColor.a                = defaultTevColor.a;
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 id                    = data.mTevColorIndex[colID];
	if (id != 0xFFFF) {
		return mTevColors[id];
	}
	return j3dColor;
}

/**
 * @note Address: 0x8006EA04
 * @note Size: 0x90
 */
J3DGXColor J3DMaterialFactory::newTevKColor(int matID, int colID) const
{
	GXColor defaultTevColor = { 255, 255, 255, 255 };
	J3DGXColor j3dColor;
	j3dColor.r                = defaultTevColor.r;
	j3dColor.g                = defaultTevColor.g;
	j3dColor.b                = defaultTevColor.b;
	j3dColor.a                = defaultTevColor.a;
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 id                    = data.mTevKColorIndex[colID];
	if (id != 0xFFFF) {
		return mTevKColors[id];
	}
	return j3dColor;
}

/**
 * @note Address: 0x8006EA94
 * @note Size: 0x38
 */
u8 J3DMaterialFactory::newTevStageNum(int matID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	if (data.mNumTevStagesIndex != 0xFF) {
		return mTevStageNums[data.mNumTevStagesIndex];
	}
	return 0xFF;
}

/**
 * @note Address: 0x8006EACC
 * @note Size: 0x60
 * newTevStage__18J3DMaterialFactoryCFii
 */
J3DTevStage J3DMaterialFactory::newTevStage(int matID, int tevID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 id                    = data.mTevStageInfoIndex[tevID];
	if (id != 0xFFFF) {
		return J3DTevStage(mTevStageInfo[id]);
	}
	return J3DTevStage();
}

/**
 * @note Address: 0x8006EB8C
 * @note Size: 0x9C
 */
J3DTevSwapModeTable J3DMaterialFactory::newTevSwapModeTable(int matID, int tevID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 id                    = data.mTevSwapModeTableIndex[tevID];
	if (id != 0xFFFF) {
		return J3DTevSwapModeTable(mTevSwapModeTableInfo[id]);
	}
	return J3DTevSwapModeTable(j3dDefaultTevSwapModeTable);
}

/**
 * @note Address: 0x8006EC28
 * @note Size: 0x28
 */
u8 J3DMaterialFactory::newIndTexStageNum(int matID) const
{
	if (mIndInitData[matID].mEnabled == true) {
		return mIndInitData[matID].mIndTexStageNum;
	}
	return 0;
}

/**
 * @note Address: 0x8006EC50
 * @note Size: 0x60
 */
J3DIndTexOrder J3DMaterialFactory::newIndTexOrder(int matID, int texID) const
{
	J3DIndTexOrder order = j3dDefaultIndTexOrderNull;
	if (mIndInitData[matID].mEnabled == true) {
		return J3DIndTexOrder(mIndInitData[matID].mIndTexOrderInfo[texID]);
	}
	return order;
}

/**
 * @note Address: 0x8006ECB0
 * @note Size: 0xE0
 */
J3DIndTexMtx J3DMaterialFactory::newIndTexMtx(int matID, int texID) const
{
	J3DIndTexMtx indTexMtx;
	if (mIndInitData[matID].mEnabled == true) {
		return J3DIndTexMtx(mIndInitData[matID].mIndTexMtxInfo[texID]);
	}
	return indTexMtx;
}

/**
 * @note Address: 0x8006ED90
 * @note Size: 0x194
 */
J3DIndTevStage J3DMaterialFactory::newIndTevStage(int matID, int tevID) const
{
	J3DIndTevStage ret;
	if (mIndInitData[matID].mEnabled == true) {
		return J3DIndTevStage(mIndInitData[matID].mIndTevStageInfo[tevID]);
	}

	return ret;
}

/**
 * @note Address: 0x8006EF24
 * @note Size: 0x60
 */
J3DIndTexCoordScale J3DMaterialFactory::newIndTexCoordScale(int matID, int texID) const
{
	J3DIndTexCoordScale ret;
	if (mIndInitData[matID].mEnabled == true) {
		return J3DIndTexCoordScale(mIndInitData[matID].mIndTexCoordScaleInfo[texID]);
	}
	return ret;
}

/**
 * @note Address: 0x8006EF84
 * @note Size: 0x24C
 */
J3DFog J3DMaterialFactory::newFog(int matID) const
{
	J3DFog fog;
	J3DMaterialInitData* data = &mInitData[mMatRemapTable[matID]];
	if (data->mFogInfoIndex != 0xFFFF) {
		fog.setFogInfo(mFogInfo[data->mFogInfoIndex]);
	}

	return fog;
}

/**
 * @note Address: 0x8006F1D0
 * @note Size: 0x80
 */
J3DAlphaComp J3DMaterialFactory::newAlphaComp(int matID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 v1                    = data.mAlphaCompareIndex;
	if (v1 != 0xFFFF) {
		return J3DAlphaComp(mAlphaCompInfo[v1]);
	}
	return J3DAlphaComp(0xFFFF);
}

/**
 * @note Address: 0x8006F250
 * @note Size: 0x7C
 */
J3DBlend J3DMaterialFactory::newBlend(int matID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 v1                    = data.mBlendModeIndex;
	if (v1 != 0xFFFF) {
		return J3DBlend(mBlendInfo[v1]);
	}
	return J3DBlend();
}

/**
 * @note Address: 0x8006F2CC
 * @note Size: 0x60
 */
J3DZMode J3DMaterialFactory::newZMode(int matID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u8 v1                     = data.mZModeIndex;
	if (v1 != 0xFF) {
		return J3DZMode(mZModeInfo[v1]);
	}
	return J3DZMode();
}

/**
 * @note Address: 0x8006F32C
 * @note Size: 0x38
 */
u8 J3DMaterialFactory::newZCompLoc(int matID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u8 v1                     = data.mZCompLocIndex;
	if (v1 != 0xFF) {
		return mZCompareInfo[v1];
	}
	return 0;
}

/**
 * @note Address: 0x8006F364
 * @note Size: 0x38
 */
u8 J3DMaterialFactory::newDither(int matID) const
{
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u8 v1                     = data.mDitherIndex;
	if (v1 != 0xFF) {
		return mDitherInfo[v1];
	}
	return 1;
}

/**
 * @note Address: 0x8006F39C
 * @note Size: 0xA8
 */
J3DNBTScale J3DMaterialFactory::newNBTScale(int matID) const
{
	J3DNBTScale ret;
	J3DMaterialInitData& data = mInitData[mMatRemapTable[matID]];
	u16 no                    = data.mNBTScaleIndex;
	if (no != 0xFFFF) {
		return J3DNBTScale(mNBTScaleInfo[no]);
	}
	return ret;
}
