#include "JSystem/J3D/J3DMaterialFactory.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DShapeFactory.h"
#include "JSystem/J3D/J3DJointFactory.h"
#include "JSystem/JSupport/JSU.h"
/**
 * @note Address: 0x8006F894
 * @note Size: 0x154
 */
J3DModelData* J3DModelLoaderDataBase::load(const void* stream, u32 flags)
{
	if (stream == nullptr) {
		return nullptr;
	}
	J3DFileHeader* header = (J3DFileHeader*)stream;
	if (header->mJ3dVersion == 'J3D1' && header->mFileVersion == 'bmd1') {
		return nullptr;
	}
	if (header->mJ3dVersion == 'J3D2' && header->mFileVersion == 'bmd2') {
		J3DModelLoader_v21 loader;
		return loader.load(stream, flags);
	}
	if (header->mJ3dVersion == 'J3D2' && header->mFileVersion == 'bmd3') {
		J3DModelLoader_v26 loader;
		return loader.load(stream, flags);
	}
	return nullptr;
}

/**
 * @note Address: 0x8006FAE8
 * @note Size: 0xBC
 */
J3DModelData* J3DModelLoaderDataBase::loadBinaryDisplayList(const void* stream, u32 flags)
{
	if (stream == nullptr) {
		return nullptr;
	}
	J3DFileHeader* header = (J3DFileHeader*)stream;
	if (header->mJ3dVersion == 'J3D2' && (header->mFileVersion == 'bdl3' || header->mFileVersion == 'bdl4')) {
		J3DModelLoader_v26 loader;
		return loader.loadBinaryDisplayList(stream, flags);
	}
	return nullptr;
}

/**
 * @note Address: 0x8006FBA4
 * @note Size: 0x2BC
 * load__14J3DModelLoaderFPCvUl
 */
J3DModelData* J3DModelLoader::load(const void* stream, u32 flags)
{
	JKRHeap::sCurrentHeap->getTotalFreeSize();
	mModelData = new J3DModelData;
	mModelData->clear();
	const J3DFileHeader* header           = reinterpret_cast<const J3DFileHeader*>(stream);
	mModelData->mBmd                      = (u8*)stream;
	const J3DFileBlockBase* nextBlock     = header->getFirstBlock();
	mModelData->mJointTree.mModelDataType = 0;
	mMaterialTable                        = &mModelData->mMaterialTable;
	for (u32 i = 0; i < header->mBlockCount; i++) {
		switch (nextBlock->mBlockType) {
		case J3DFBT_Info:
			readInformation((const J3DModelInfoBlock*)nextBlock, flags);
			break;
		case J3DFBT_Vertex:
			readVertex((const J3DVertexBlock*)nextBlock);
			break;
		case J3DFBT_Envelope:
			readEnvelop((const J3DEnvelopeBlock*)nextBlock);
			break;
		case J3DFBT_Draw:
			readDraw((const J3DDrawBlock*)nextBlock);
			break;
		case J3DFBT_Joint:
			readJoint((const J3DJointBlock*)nextBlock);
			break;
		case J3DFBT_Material:
			readMaterial((const J3DMaterialBlock*)nextBlock, flags);
			break;
		case J3DFBT_MaterialV21:
			readMaterial_v21((const J3DMaterialBlock_v21*)nextBlock, flags);
			break;
		case J3DFBT_Shape:
			readShape((const J3DShapeBlock*)nextBlock, flags);
			break;
		case J3DFBT_Texture:
			readTexture((const J3DTextureBlock*)nextBlock);
			break;
		}
		nextBlock = nextBlock->getNext();
	}
	mModelData->init(mModelData->mJointTree.mHierarchy);
	mModelData->mShapeTable.sortVcdVatCmd();
	mModelData->mJointTree.findImportantMtxIndex();
	setupBBoardInfo();
	if (mModelData->mModelLoaderFlags & J3DMLF_NoMatrixTransform) {
		for (u16 i = 0; i < mModelData->getShapeNum(); i++) {
			mModelData->mShapeTable.getItem(i)->onFlag(J3DShape_NoMtx);
		}
	}
	return mModelData;
}

/**
 * @note Address: 0x8006FE68
 * @note Size: 0x148
 * loadMaterialTable__14J3DModelLoaderFPCv
 */
J3DMaterialTable* J3DModelLoader::loadMaterialTable(const void* stream)
{
	mMaterialTable = new J3DMaterialTable();
	mMaterialTable->clear();
	const J3DFileHeader* header       = reinterpret_cast<const J3DFileHeader*>(stream);
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	for (u32 i = 0; i < header->mBlockCount; i++) {
		switch (nextBlock->mBlockType) {
		case J3DFBT_Material:
			readMaterialTable((const J3DMaterialBlock*)nextBlock, 0x51100000);
			break;
		case J3DFBT_MaterialV21:
			readMaterialTable_v21((const J3DMaterialBlock_v21*)nextBlock, 0x51100000);
			break;
		case J3DFBT_Texture:
			readTextureTable((const J3DTextureBlock*)nextBlock);
			break;
		default:
			break;
		}
		nextBlock = nextBlock->getNext();
	}
	if (mMaterialTable->mTextures == nullptr) {
		mMaterialTable->mTextures = new J3DTexture(0, nullptr);
	}
	return mMaterialTable;
}

/**
 * @note Address: 0x8006FFB8
 * @note Size: 0x2A4
 * loadBinaryDisplayList__14J3DModelLoaderFPCvUl
 */
J3DModelData* J3DModelLoader::loadBinaryDisplayList(const void* stream, u32 flags)
{
	mModelData = new J3DModelData();
	mModelData->clear();
	const J3DFileHeader* header           = reinterpret_cast<const J3DFileHeader*>(stream);
	mModelData->mBmd                      = stream;
	const J3DFileBlockBase* nextBlock     = header->getFirstBlock();
	mModelData->mJointTree.mModelDataType = 0x1;
	mMaterialTable                        = &mModelData->mMaterialTable;
	for (u32 i = 0; i < header->mBlockCount; i++) {
		switch (nextBlock->mBlockType) {
		case J3DFBT_Info:
			readInformation((const J3DModelInfoBlock*)nextBlock, flags);
			break;
		case J3DFBT_Vertex:
			readVertex((const J3DVertexBlock*)nextBlock);
			break;
		case J3DFBT_Envelope:
			readEnvelop((const J3DEnvelopeBlock*)nextBlock);
			break;
		case J3DFBT_Draw:
			readDraw((const J3DDrawBlock*)nextBlock);
			break;
		case J3DFBT_Joint:
			readJoint((const J3DJointBlock*)nextBlock);
			break;
		case J3DFBT_Shape:
			readShape((const J3DShapeBlock*)nextBlock, flags);
			break;
		case J3DFBT_Texture:
			readTexture((const J3DTextureBlock*)nextBlock);
			break;
		case J3DFBT_MaterialDL:
			readMaterialDL((const J3DMaterialDLBlock*)nextBlock, flags);
			modifyMaterial(flags);
			break;
		case J3DFBT_Material: {
			u32 matFlags = 0x50100000;
			matFlags |= flags & 0x03000000;
			const J3DMaterialBlock* matBlock = (const J3DMaterialBlock*)nextBlock;
			mMaterialBlock                   = matBlock;
			u32 matType                      = getBdlFlag_MaterialType(flags);
			if (matType == 0) {
				readMaterial(matBlock, matFlags);
			} else if (matType == 0x2000) {
				readPatchedMaterial(matBlock, matFlags);
			}
			break;
		}
		}
		nextBlock = nextBlock->getNext();
	}
	mModelData->init(mModelData->mJointTree.mHierarchy);
	mModelData->mShapeTable.sortVcdVatCmd();
	mModelData->mJointTree.findImportantMtxIndex();
	setupBBoardInfo();
	mModelData->indexToPtr();
	return mModelData;
}

/**
 * @note Address: 0x8007025C
 * @note Size: 0x14C
 */
void J3DModelLoader::setupBBoardInfo()
{
	for (u16 i = 0; i < mModelData->getJointNum(); i++) {
		J3DMaterial* material = mModelData->mJointTree.mJoints[i]->mMaterial;
		if (material) {
			u16 id                     = material->mShape->mId;
			u16* initDataIndexToIDMap  = JSUConvertOffsetToPtr<u16>(mShapeBlock, mShapeBlock->mRemapTableOffset);
			J3DShapeInitData* initData = JSUConvertOffsetToPtr<J3DShapeInitData>(mShapeBlock, mShapeBlock->mShapeDataOffset);
			J3DJoint* joint;
			switch (initData[initDataIndexToIDMap[id]].mShapeMtxType) {
			case J3DShapeMtx_Base:
				joint = mModelData->getJointNodePointer(i);
				joint->resetMtxType();
				break;
			case J3DShapeMtx_BBoard:
				joint = mModelData->getJointNodePointer(i);
				joint->setMtxType(1);
				mModelData->mBillboardFlag = 1;
				break;
			case J3DShapeMtx_Y_BBoard:
				joint = mModelData->getJointNodePointer(i);
				joint->setMtxType(2);
				mModelData->mBillboardFlag = 1;
				break;
			case J3DShapeMtx_Multi:
				joint = mModelData->getJointNodePointer(i);
				joint->resetMtxType();
				break;
			}
		}
	}
}

/**
 * @note Address: 0x800703A8
 * @note Size: 0x168
 */
void J3DModelLoader::readInformation(const J3DModelInfoBlock* block, u32 flags)
{
	J3DMtxCalc* calc              = nullptr;
	mModelData->mModelLoaderFlags = flags | block->mFlags;
	mModelData->mJointTree.mFlags = mModelData->mModelLoaderFlags;
	switch (mModelData->mModelLoaderFlags & J3DMLF_MtxTypeMask) {
	case 0: // Basic
		calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformBasic, J3DMtxCalcJ3DSysInitBasic>;
		break;
	case J3DMLF_MtxSoftImageCalc:
		calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformSoftimage, J3DMtxCalcJ3DSysInitSoftimage>;
		break;
	case J3DMLF_MtxMayaCalc:
		calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformMaya, J3DMtxCalcJ3DSysInitMaya>;
		break;
	}
	mModelData->mJointTree.mTransformCalc = calc;
	mModelData->mVertexData.mPacketNum    = block->mMatrixGroupCount;
	mModelData->mVertexData.mVtxNum       = block->mVertexCount;
	mModelData->mJointTree.mHierarchy     = JSUConvertOffsetToPtr<J3DModelHierarchy>(block, block->mHierarchyDataOffset);
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
GXCompType getFmtType(GXVtxAttrFmtList* fmtList, GXAttr i_attr)
{
	for (; fmtList->mAttr != GX_VA_NULL; fmtList++) {
		if (fmtList->mAttr == i_attr) {
			return fmtList->mType;
		}
	}
	return GX_F32;
}

/**
 * @note Address: 0x8007056C
 * @note Size: 0x238
 * readVertex__14J3DModelLoaderFPC14J3DVertexBlock
 */
void J3DModelLoader::readVertex(const J3DVertexBlock* block)
{
	J3DModelData* model       = mModelData;
	J3DVertexData* vertData   = model->getVertexData();
	vertData->mVtxAttrFmtList = JSUConvertOffsetToPtr<GXVtxAttrFmtList>(block, block->mVertexFormatOffset);
	vertData->mVtxPos         = JSUConvertOffsetToPtr<void>(block, block->mPositionDataOffset);
	vertData->mVtxNorm        = JSUConvertOffsetToPtr<void>(block, block->mNormalDataOffset);
	vertData->mVtxNBT         = JSUConvertOffsetToPtr<void>(block, block->mNBTDataOffset);
	for (int i = 0; i < 2; i++) {
		vertData->mVtxColor[i] = (GXColor*)JSUConvertOffsetToPtr<void>(block, block->mColorDataOffset[i]);
	}
	for (int i = 0; i < 8; i++) {
		vertData->mVtxTexCoord[i] = JSUConvertOffsetToPtr<void>(block, block->mTexCoordDataOffset[i]);
	}

	_GXCompType nrm_type = getFmtType(vertData->mVtxAttrFmtList, GX_VA_NRM);
	u32 nrm_size         = nrm_type == GX_F32 ? 12 : 6;

	void* nrm_end = nullptr;
	if (vertData->mVtxNBT != nullptr) {
		nrm_end = vertData->mVtxNBT;
	} else if (vertData->mVtxColor[0] != nullptr) {
		nrm_end = vertData->mVtxColor[0];
	} else if (vertData->mVtxTexCoord[0] != nullptr) {
		nrm_end = vertData->mVtxTexCoord[0];
	}

	if (vertData->mVtxNorm == nullptr) {
		vertData->mNormNum = 0;
	} else if (nrm_end != nullptr) {
		vertData->mNormNum = ((u32)nrm_end - (u32)vertData->mVtxNorm) / nrm_size + 1;
	} else {
		vertData->mNormNum = (block->mSize - (u32)block->mNormalDataOffset) / nrm_size + 1;
	}

	void* color0_end = nullptr;
	if (vertData->mVtxColor[1] != nullptr) {
		color0_end = vertData->mVtxColor[1];
	} else if (vertData->mVtxTexCoord[0] != nullptr) {
		color0_end = vertData->mVtxTexCoord[0];
	}

	if (vertData->mVtxColor[0] == nullptr) {
		vertData->mColorNum = 0;
	} else if (color0_end != nullptr) {
		vertData->mColorNum = ((u32)color0_end - (u32)vertData->mVtxColor[0]) / 4 + 1;
	} else {
		vertData->mColorNum = (block->mSize - (u32)block->mColorDataOffset[0]) / 4 + 1;
	}

	if (vertData->mVtxTexCoord[0] == nullptr) {
		vertData->mTexCoordNum = 0;
	} else {
		vertData->mTexCoordNum = (block->mSize - (u32)block->mTexCoordDataOffset[0]) / 8 + 1;
	}
}

/**
 * @note Address: 0x800707A4
 * @note Size: 0x98
 */
void J3DModelLoader::readEnvelop(const J3DEnvelopeBlock* block)
{
	mModelData->getJointTree().mEnvelopeCnt       = block->mCount;
	mModelData->getJointTree().mEnvelopeMixCnt    = JSUConvertOffsetToPtr<u8>(block, block->mJointCountTableOffset);
	mModelData->getJointTree().mEnvelopeMixIdx    = JSUConvertOffsetToPtr<u16>(block, block->mIndexTableOffset);
	mModelData->getJointTree().mEnvelopeMixWeight = JSUConvertOffsetToPtr<f32>(block, block->mWeightTableOffset);
	mModelData->getJointTree().mInvJointMtx       = JSUConvertOffsetToPtr<Mtx>(block, block->mInvBindTableOffset);
}

/**
 * @note Address: 0x8007083C
 * @note Size: 0xB8
 */
void J3DModelLoader::readDraw(const J3DDrawBlock* block)
{
	J3DJointTree& tree   = mModelData->getJointTree();
	tree.mMtxData.mCount = block->mCount - tree.mEnvelopeCnt;

	tree.mMtxData.mDrawMtxFlag = JSUConvertOffsetToPtr<u8>(block, block->mMatrixTypeArrayOffset);
	tree.mMtxData.mDrawMtxIdx  = JSUConvertOffsetToPtr<u16>(block, block->mDataArrayOffset);

	u16 i;
	for (i = 0; i < tree.mMtxData.mCount; i++) {
		if (tree.mMtxData.mDrawMtxFlag[i] == 1) {
			break;
		}
	}

	tree.mMtxData.mDrawMtxCount = i;

	mModelData->getJointTree().mEnvelopeImptIdx = new u16[tree.mMtxData.mCount];
}

/**
 * @note Address: 0x800708F4
 * @note Size: 0xEC
 */
void J3DModelLoader::readJoint(const J3DJointBlock* block)
{
	J3DJointFactory factory(*block);
	mModelData->getJointTree().mJointCnt = block->mCount;
	if (block->mNameTableOffset != nullptr) {
		mModelData->getJointTree().mNametab = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, (const void*)block->mNameTableOffset));
	} else {
		mModelData->getJointTree().mNametab = nullptr;
	}
	mModelData->getJointTree().mJoints = new J3DJoint*[mModelData->getJointTree().mJointCnt];

	for (u16 i = 0; i < mModelData->getJointNum(); i++) {
		mModelData->getJointTree().mJoints[i] = factory.create(i);
	}
}

/**
 * @note Address: 0x800709E0
 * @note Size: 0x274
 */
void J3DModelLoader_v26::readMaterial(const J3DMaterialBlock* block, u32 flags)
{
	J3DMaterialFactory factory(*block);
	mMaterialTable->mMaterialNum       = block->mNumMaterials;
	mMaterialTable->mUniqueMaterialNum = factory.countUniqueMaterials();
	if (block->mStringTableOffset != nullptr) {
		mMaterialTable->mMaterialNames = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->mStringTableOffset));
	} else {
		mMaterialTable->mMaterialNames = nullptr;
	}

	mMaterialTable->mMaterials = new J3DMaterial*[mMaterialTable->mMaterialNum];
	if (flags & J3DMLF_UseUniqueMaterials) {
		mMaterialTable->mUniqueMaterials = new (0x20) J3DMaterial[mMaterialTable->mUniqueMaterialNum];
	} else {
		mMaterialTable->mUniqueMaterials = nullptr;
	}
	if (flags & J3DMLF_UseUniqueMaterials) {
		for (u16 i = 0; i < mMaterialTable->mUniqueMaterialNum; i++) {
			factory.create(&mMaterialTable->mUniqueMaterials[i], J3DMaterialFactory::NORMAL, i, flags);
			mMaterialTable->mUniqueMaterials[i].mDiffFlag = (u32)&mMaterialTable->mUniqueMaterials[i] >> 4;
		}
	}
	for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
		mMaterialTable->mMaterials[i] = factory.create(nullptr, J3DMaterialFactory::NORMAL, i, flags);
	}
	if (flags & J3DMLF_UseUniqueMaterials) {
		for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
			mMaterialTable->mMaterials[i]->mDiffFlag     = (u32)&mMaterialTable->mUniqueMaterials[factory.getMaterialID(i)] >> 4;
			mMaterialTable->mMaterials[i]->mOrigMaterial = &mMaterialTable->mUniqueMaterials[factory.getMaterialID(i)];
		}
	} else {
		for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
			mMaterialTable->mMaterials[i]->mDiffFlag = ((u32)mMaterialTable->mMaterials >> 4) + factory.getMaterialID(i);
		}
	}
}

/**
 * @note Address: 0x80070CA8
 * @note Size: 0x25C
 */
void J3DModelLoader_v21::readMaterial_v21(const J3DMaterialBlock_v21* block, u32 flags)
{
	J3DMaterialFactory_v21 factory(*block);
	mMaterialTable->mMaterialNum       = block->mNumMaterials;
	mMaterialTable->mUniqueMaterialNum = factory.countUniqueMaterials();
	if (block->mIndTexInfoOffset != nullptr) {
		mMaterialTable->mMaterialNames = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->mIndTexInfoOffset));
	} else {
		mMaterialTable->mMaterialNames = nullptr;
	}

	mMaterialTable->mMaterials = new J3DMaterial*[mMaterialTable->mMaterialNum];
	if (flags & J3DMLF_UseUniqueMaterials) {
		mMaterialTable->mUniqueMaterials = new (0x20) J3DMaterial[mMaterialTable->mUniqueMaterialNum];
	} else {
		mMaterialTable->mUniqueMaterials = nullptr;
	}
	if (flags & J3DMLF_UseUniqueMaterials) {
		for (u16 i = 0; i < mMaterialTable->mUniqueMaterialNum; i++) {
			factory.create(&mMaterialTable->mUniqueMaterials[i], i, flags);
			mMaterialTable->mUniqueMaterials[i].mDiffFlag = (u32)&mMaterialTable->mUniqueMaterials[i] >> 4;
		}
	}
	for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
		mMaterialTable->mMaterials[i] = factory.create(nullptr, i, flags);
	}
	if (flags & J3DMLF_UseUniqueMaterials) {
		for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
			mMaterialTable->mMaterials[i]->mDiffFlag     = (u32)&mMaterialTable->mUniqueMaterials[factory.getMaterialID(i)] >> 4;
			mMaterialTable->mMaterials[i]->mOrigMaterial = &mMaterialTable->mUniqueMaterials[factory.getMaterialID(i)];
		}
	} else {
		for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
			mMaterialTable->mMaterials[i]->mDiffFlag = 0xC0000000;
		}
	}
}

/**
 * @note Address: 0x80070F04
 * @note Size: 0x11C
 */
void J3DModelLoader::readShape(const J3DShapeBlock* block, u32 flags)
{
	mShapeBlock = block;

	J3DModelData* model = mModelData;
	J3DShapeFactory factory(*block);

	model->mShapeTable.mCount = block->mShapeNum;
	if (block->mNameTableOffset) {
		model->mShapeTable.mNames = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, (const void*)block->mNameTableOffset));
	} else {
		model->mShapeTable.mNames = nullptr;
	}
	model->mShapeTable.mItems = new J3DShape*[model->mShapeTable.mCount];
	factory.allocVcdVatCmdBuffer(model->mShapeTable.mCount);

	J3DModelHierarchy const* hierarchy_entry = model->getHierarchy();
	GXVtxDescList* vtxDescList               = nullptr;
	for (J3DModelHierarchy* hier = mModelData->mJointTree.mHierarchy; hier->mType; hier++) {
		if (hier->mType == 0x12) {
			model->mShapeTable.mItems[hier->mValue] = factory.create(hier->mValue, flags, vtxDescList);
			vtxDescList                             = factory.getVtxDescList(hier->mValue);
		}
	}
}

/**
 * @note Address: 0x80071020
 * @note Size: 0xC4
 */
void J3DModelLoader::readTexture(const J3DTextureBlock* block)
{
	const u16 count          = block->mTextureCount;
	ResTIMG* resTextureImage = JSUConvertOffsetToPtr<ResTIMG>(block, block->mTexHeaderOffset);
	if (block->mTexNameOffset) {
		mMaterialTable->mTextureNames = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->mTexNameOffset));
	} else {
		mMaterialTable->mTextureNames = nullptr;
	}
	mMaterialTable->setTexture(new J3DTexture(count, resTextureImage));
}

/**
 * @note Address: 0x800710E4
 * @note Size: 0x14C
 * readMaterialTable__18J3DModelLoader_v26FPC16J3DMaterialBlockUl
 */
void J3DModelLoader_v26::readMaterialTable(const J3DMaterialBlock* block, u32 flags)
{
	J3DMaterialFactory factory(*block);
	mMaterialTable->mMaterialNum = block->mNumMaterials;
	// TODO: I wonder if the rest of this is an inline from somewhere...
	if (block->mStringTableOffset) {
		mMaterialTable->mMaterialNames = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->mStringTableOffset));
	} else {
		mMaterialTable->mMaterialNames = nullptr;
	}
	mMaterialTable->mMaterials = new J3DMaterial*[mMaterialTable->mMaterialNum];
	for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
		mMaterialTable->mMaterials[i] = factory.create(nullptr, J3DMaterialFactory::NORMAL, i, flags);
	}
	for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
		mMaterialTable->mMaterials[i]->mDiffFlag = (u32)(mMaterialTable->mMaterials) + factory.getMaterialID(i);
	}
}

/**
 * @note Address: 0x80071230
 * @note Size: 0x14C
 */
void J3DModelLoader_v21::readMaterialTable_v21(const J3DMaterialBlock_v21* block, u32 flags)
{
	J3DMaterialFactory_v21 factory(*block);
	mMaterialTable->mMaterialNum = block->mNumMaterials;
	if (block->mIndTexInfoOffset) {
		mMaterialTable->mMaterialNames = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->mIndTexInfoOffset));
	} else {
		mMaterialTable->mMaterialNames = nullptr;
	}
	mMaterialTable->mMaterials = new J3DMaterial*[mMaterialTable->mMaterialNum];

	for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
		mMaterialTable->mMaterials[i] = factory.create(nullptr, i, flags);
	}

	for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
		mMaterialTable->mMaterials[i]->mDiffFlag = ((u32)(mMaterialTable->mMaterials) >> 4) + factory.getMaterialID(i);
	}
}

/**
 * @note Address: 0x8007137C
 * @note Size: 0xC4
 */
void J3DModelLoader::readTextureTable(const J3DTextureBlock* block)
{
	const u16 count          = block->mTextureCount;
	ResTIMG* resTextureImage = JSUConvertOffsetToPtr<ResTIMG>(block, block->mTexHeaderOffset);
	if (block->mTexNameOffset) {
		mMaterialTable->mTextureNames = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->mTexNameOffset));
	} else {
		mMaterialTable->mTextureNames = nullptr;
	}
	mMaterialTable->setTexture(new J3DTexture(count, resTextureImage));
}

/**
 * @note Address: 0x80071440
 * @note Size: 0x150
 */
void J3DModelLoader::readPatchedMaterial(const J3DMaterialBlock* block, u32 flags)
{
	J3DMaterialFactory factory(*block);
	mMaterialTable->mMaterialNum       = block->mNumMaterials;
	mMaterialTable->mUniqueMaterialNum = factory.countUniqueMaterials();
	if (block->mStringTableOffset) {
		mMaterialTable->mMaterialNames = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->mStringTableOffset));
	} else {
		mMaterialTable->mMaterialNames = nullptr;
	}
	mMaterialTable->mMaterials       = new J3DMaterial*[mMaterialTable->mMaterialNum];
	mMaterialTable->mUniqueMaterials = nullptr;

	for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
		mMaterialTable->mMaterials[i]            = factory.create(nullptr, J3DMaterialFactory::PATCHED, i, flags);
		mMaterialTable->mMaterials[i]->mDiffFlag = ((u32)(mMaterialTable->mMaterials) >> 4) + factory.getMaterialID(i);
	}
}

/**
 * @note Address: 0x80071590
 * @note Size: 0x1BC
 */
void J3DModelLoader::readMaterialDL(const J3DMaterialDLBlock* block, u32 flags)
{
	J3DMaterialFactory factory(*block);
	if (mMaterialTable->getMaterialNum() == 0) {
		mMaterialTable->_1C                = 1;
		mMaterialTable->mMaterialNum       = block->mEntries;
		mMaterialTable->mUniqueMaterialNum = block->mEntries;
		if (block->mStringTableOffset) {
			mMaterialTable->mMaterialNames = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->mStringTableOffset));
		} else {
			mMaterialTable->mMaterialNames = nullptr;
		}
		mMaterialTable->mMaterials       = new J3DMaterial*[mMaterialTable->mMaterialNum];
		mMaterialTable->mUniqueMaterials = nullptr;
		for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
			mMaterialTable->mMaterials[i] = factory.create(nullptr, J3DMaterialFactory::LOCKED, i, flags);
		}
		for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
			mMaterialTable->mMaterials[i]->mDiffFlag = 0xc0000000;
		}
		return;
	}

	for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
		mMaterialTable->mMaterials[i] = factory.create(mMaterialTable->mMaterials[i], J3DMaterialFactory::LOCKED, i, flags);
	}
}

/**
 * @note Address: 0x8007174C
 * @note Size: 0x7C
 */
void J3DModelLoader::modifyMaterial(u32 flags)
{
	if ((flags & 0x2000) != 0) {
		J3DMaterialFactory factory(*mMaterialBlock);
		for (u16 i = 0; i < mMaterialTable->mMaterialNum; i++) {
			factory.modifyPatchedCurrentMtx(mMaterialTable->mMaterials[i], i);
		}
	}
}
