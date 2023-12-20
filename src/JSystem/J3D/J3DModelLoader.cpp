#include "JSystem/J3D/J3DMaterialFactory.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DShapeFactory.h"
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
	if (mModelData->mModelLoaderFlags & 0x100) {
		for (u16 i = 0; i < mModelData->getShapeNum(); i++) {
			mModelData->mShapeTable.getItem(i)->onFlag(0x200);
		}
	}
	return mModelData;
}

/**
 * @note Address: 0x8006FE60
 * @note Size: 0x4
 */
void J3DModelLoader::readMaterial_v21(const J3DMaterialBlock_v21*, u32) { }

/**
 * @note Address: 0x8006FE64
 * @note Size: 0x4
 */
void J3DModelLoader::readMaterial(const J3DMaterialBlock*, u32) { }

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
 * @note Address: 0x8006FFB0
 * @note Size: 0x4
 */
void J3DModelLoader::readMaterialTable_v21(const J3DMaterialBlock_v21*, u32) { }

/**
 * @note Address: 0x8006FFB4
 * @note Size: 0x4
 */
void J3DModelLoader::readMaterialTable(const J3DMaterialBlock*, u32) { }

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
			u32 matFlags                     = flags & 0x3000000;
			matFlags                         = matFlags | 0x50100000;
			const J3DMaterialBlock* matBlock = (const J3DMaterialBlock*)nextBlock;
			mMaterialBlock                   = matBlock;
			if ((flags & 0x3000) == 0) {
				readMaterial(matBlock, matFlags);
			} else if ((flags & 0x3000) == 0x2000) {
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r25, r3
	mr       r27, r4
	mr       r26, r5
	li       r3, 0xe4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8006FFEC
	bl       __ct__12J3DModelDataFv
	mr       r0, r3

lbl_8006FFEC:
	stw      r0, 4(r25)
	lwz      r3, 4(r25)
	bl       clear__12J3DModelDataFv
	lwz      r4, 4(r25)
	lis      r3, 0x4D415433@ha
	li       r0, 1
	lwz      r24, 0xc(r27)
	stw      r27, 4(r4)
	addi     r28, r27, 0x20
	rlwinm   r30, r26, 0, 6, 7
	rlwinm   r29, r26, 0, 0x12, 0x13
	lwz      r4, 4(r25)
	addi     r31, r3, 0x4D415433@l
	li       r27, 0
	stw      r0, 0x1c(r4)
	lwz      r3, 4(r25)
	addi     r0, r3, 0x58
	stw      r0, 8(r25)
	b        lbl_800701D0

lbl_80070038:
	lwz      r4, 0(r28)
	cmpw     r4, r31
	beq      lbl_80070180
	bge      lbl_80070098
	lis      r3, 0x494E4631@ha
	addi     r0, r3, 0x494E4631@l
	cmpw     r4, r0
	beq      lbl_800700E8
	bge      lbl_80070084
	lis      r3, 0x45565031@ha
	addi     r0, r3, 0x45565031@l
	cmpw     r4, r0
	beq      lbl_8007010C
	bge      lbl_800701C4
	lis      r3, 0x44525731@ha
	addi     r0, r3, 0x44525731@l
	cmpw     r4, r0
	beq      lbl_8007011C
	b        lbl_800701C4

lbl_80070084:
	lis      r3, 0x4A4E5431@ha
	addi     r0, r3, 0x4A4E5431@l
	cmpw     r4, r0
	beq      lbl_8007012C
	b        lbl_800701C4

lbl_80070098:
	lis      r3, 0x54455831@ha
	addi     r0, r3, 0x54455831@l
	cmpw     r4, r0
	beq      lbl_80070150
	bge      lbl_800700D4
	lis      r3, 0x53485031@ha
	addi     r0, r3, 0x53485031@l
	cmpw     r4, r0
	beq      lbl_8007013C
	bge      lbl_800701C4
	lis      r3, 0x4D444C33@ha
	addi     r0, r3, 0x4D444C33@l
	cmpw     r4, r0
	beq      lbl_80070160
	b        lbl_800701C4

lbl_800700D4:
	lis      r3, 0x56545831@ha
	addi     r0, r3, 0x56545831@l
	cmpw     r4, r0
	beq      lbl_800700FC
	b        lbl_800701C4

lbl_800700E8:
	mr       r3, r25
	mr       r4, r28
	mr       r5, r26
	bl       readInformation__14J3DModelLoaderFPC17J3DModelInfoBlockUl
	b        lbl_800701C4

lbl_800700FC:
	mr       r3, r25
	mr       r4, r28
	bl       readVertex__14J3DModelLoaderFPC14J3DVertexBlock
	b        lbl_800701C4

lbl_8007010C:
	mr       r3, r25
	mr       r4, r28
	bl       readEnvelop__14J3DModelLoaderFPC16J3DEnvelopeBlock
	b        lbl_800701C4

lbl_8007011C:
	mr       r3, r25
	mr       r4, r28
	bl       readDraw__14J3DModelLoaderFPC12J3DDrawBlock
	b        lbl_800701C4

lbl_8007012C:
	mr       r3, r25
	mr       r4, r28
	bl       readJoint__14J3DModelLoaderFPC13J3DJointBlock
	b        lbl_800701C4

lbl_8007013C:
	mr       r3, r25
	mr       r4, r28
	mr       r5, r26
	bl       readShape__14J3DModelLoaderFPC13J3DShapeBlockUl
	b        lbl_800701C4

lbl_80070150:
	mr       r3, r25
	mr       r4, r28
	bl       readTexture__14J3DModelLoaderFPC15J3DTextureBlock
	b        lbl_800701C4

lbl_80070160:
	mr       r3, r25
	mr       r4, r28
	mr       r5, r26
	bl       readMaterialDL__14J3DModelLoaderFPC18J3DMaterialDLBlockUl
	mr       r3, r25
	mr       r4, r26
	bl       modifyMaterial__14J3DModelLoaderFUl
	b        lbl_800701C4

lbl_80070180:
	cmplwi   r29, 0
	lis      r5, 0x5010
	stw      r28, 0x10(r25)
	or       r5, r5, r30
	bne      lbl_800701B0
	lwz      r12, 0(r25)
	mr       r3, r25
	mr       r4, r28
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_800701C4

lbl_800701B0:
	cmplwi   r29, 0x2000
	bne      lbl_800701C4
	mr       r3, r25
	mr       r4, r28
	bl       readPatchedMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl

lbl_800701C4:
	lwz      r0, 4(r28)
	addi     r27, r27, 1
	add      r28, r28, r0

lbl_800701D0:
	cmplw    r27, r24
	blt      lbl_80070038
	lwz      r3, 4(r25)
	addi     r5, r1, 8
	li       r4, 0
	lwz      r0, 0x14(r3)
	stw      r0, 8(r1)
	lwz      r24, 4(r25)
	addi     r3, r24, 0x10
	addi     r6, r24, 0x58
	addi     r7, r24, 0x78
	bl
makeHierarchy__12J3DJointTreeFP8J3DJointPPC17J3DModelHierarchyP16J3DMaterialTableP13J3DShapeTable
	addi     r3, r24, 0x78
	addi     r4, r24, 0x44
	addi     r5, r24, 0x88
	bl       initShapeNodes__13J3DShapeTableFP14J3DDrawMtxDataP13J3DVertexData
	lwz      r3, 4(r25)
	addi     r3, r3, 0x78
	bl       sortVcdVatCmd__13J3DShapeTableFv
	lwz      r3, 4(r25)
	addi     r3, r3, 0x10
	bl       findImportantMtxIndex__12J3DJointTreeFv
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r25)
	bl       indexToPtr__12J3DModelDataFv
	lwz      r3, 4(r25)
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
			switch (initData[initDataIndexToIDMap[id]].mShapeMtxType) {
			case J3DShapeMtx_Base:
				mModelData->mJointTree.mJoints[i]->mKind &= 0x0F;
				break;
			case J3DShapeMtx_BBoard:
				mModelData->mJointTree.mJoints[i]->mKind = mModelData->mJointTree.mJoints[i]->mKind & 0x0F | 0x10;
				mModelData->mBillboardFlag               = 1;
				break;
			case J3DShapeMtx_Y_BBoard:
				mModelData->mJointTree.mJoints[i]->mKind = mModelData->mJointTree.mJoints[i]->mKind & 0x0F | 0x20;
				mModelData->mBillboardFlag               = 1;
				break;
			case J3DShapeMtx_Multi:
				mModelData->mJointTree.mJoints[i]->mKind = mModelData->mJointTree.mJoints[i]->mKind & 0x0F;
				break;
			}
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r29, r3
	li       r30, 0
	b        lbl_80070380

lbl_80070278:
	lwz      r3, 0x28(r4)
	rlwinm   r31, r30, 2, 0xe, 0x1d
	lwzx     r3, r3, r31
	lwz      r4, 0x58(r3)
	cmplwi   r4, 0
	beq      lbl_8007037C
	lwz      r5, 8(r4)
	lwz      r3, 0xc(r29)
	lhz      r27, 8(r5)
	lwz      r4, 0x10(r3)
	bl       "JSUConvertOffsetToPtr<Us>__FPCvUl"
	lwz      r5, 0xc(r29)
	mr       r28, r3
	lwz      r4, 0xc(r5)
	mr       r3, r5
	bl       "JSUConvertOffsetToPtr<16J3DShapeInitData>__FPCvUl"
	rlwinm   r0, r27, 1, 0xf, 0x1e
	lhzx     r0, r28, r0
	mulli    r0, r0, 0x28
	lbzx     r0, r3, r0
	cmpwi    r0, 2
	beq      lbl_80070338
	bge      lbl_800702E4
	cmpwi    r0, 0
	beq      lbl_800702F0
	bge      lbl_8007030C
	b        lbl_8007037C

lbl_800702E4:
	cmpwi    r0, 4
	bge      lbl_8007037C
	b        lbl_80070364

lbl_800702F0:
	lwz      r3, 4(r29)
	lwz      r3, 0x28(r3)
	lwzx     r3, r3, r31
	lbz      r0, 0x16(r3)
	clrlwi   r0, r0, 0x1c
	stb      r0, 0x16(r3)
	b        lbl_8007037C

lbl_8007030C:
	lwz      r3, 4(r29)
	li       r0, 1
	lwz      r3, 0x28(r3)
	lwzx     r4, r3, r31
	lbz      r3, 0x16(r4)
	rlwinm   r3, r3, 0, 0x1c, 0x17
	ori      r3, r3, 0x10
	stb      r3, 0x16(r4)
	lwz      r3, 4(r29)
	sth      r0, 0xe(r3)
	b        lbl_8007037C

lbl_80070338:
	lwz      r3, 4(r29)
	li       r0, 1
	lwz      r3, 0x28(r3)
	lwzx     r4, r3, r31
	lbz      r3, 0x16(r4)
	rlwinm   r3, r3, 0, 0x1c, 0x17
	ori      r3, r3, 0x20
	stb      r3, 0x16(r4)
	lwz      r3, 4(r29)
	sth      r0, 0xe(r3)
	b        lbl_8007037C

lbl_80070364:
	lwz      r3, 4(r29)
	lwz      r3, 0x28(r3)
	lwzx     r3, r3, r31
	lbz      r0, 0x16(r3)
	clrlwi   r0, r0, 0x1c
	stb      r0, 0x16(r3)

lbl_8007037C:
	addi     r30, r30, 1

lbl_80070380:
	lwz      r4, 4(r29)
	clrlwi   r0, r30, 0x10
	lhz      r3, 0x2c(r4)
	cmplw    r0, r3
	blt      lbl_80070278
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	switch (mModelData->mModelLoaderFlags & (J3DMLF_MtxCalc_SoftImage | J3DMLF_MtxCalc_Maya | J3DMLF_03 | J3DMLF_04)) {
	case 0:
		calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformBasic, J3DMtxCalcJ3DSysInitBasic>;
		break;
	case J3DMLF_MtxCalc_SoftImage:
		calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformSoftimage, J3DMtxCalcJ3DSysInitSoftimage>;
		break;
	case J3DMLF_MtxCalc_Maya:
		calc = new J3DMtxCalcNoAnm<J3DMtxCalcCalcTransformMaya, J3DMtxCalcJ3DSysInitMaya>;
		break;
	}
	mModelData->mJointTree.mTransformCalc = calc;
	mModelData->mVertexData.mPacketNum    = block->mMatrixGroupCount;
	mModelData->mVertexData.mVtxNum       = block->mVertexCount;
	mModelData->mJointTree.mHierarchy     = JSUConvertOffsetToPtr<J3DModelHierarchy>(block, block->mHierarchyDataOffset);
}

/**
 * @note Address: 0x8007056C
 * @note Size: 0x238
 * readVertex__14J3DModelLoaderFPC14J3DVertexBlock
 */
void J3DModelLoader::readVertex(const J3DVertexBlock* block)
{
	J3DModelData* model                     = mModelData;
	model->getVertexData()->mVtxAttrFmtList = JSUConvertOffsetToPtr<GXVtxAttrFmtList>(block, block->mVertexFormatOffset);
	model->getVertexData()->mVtxPos         = JSUConvertOffsetToPtr<void>(block, block->mPositionDataOffset);
	model->getVertexData()->mVtxNorm        = JSUConvertOffsetToPtr<void>(block, block->mNormalDataOffset);
	model->getVertexData()->mVtxNBT         = JSUConvertOffsetToPtr<void>(block, block->mNBTDataOffset);
	for (int i = 0; i < 2; i++) {
		model->getVertexData()->mVtxColor[i] = JSUConvertOffsetToPtr<GXColor>(block, block->mColorDataOffset[i]);
	}
	for (int i = 0; i < 8; i++) {
		model->getVertexData()->mVtxTexCoord[i] = JSUConvertOffsetToPtr<void>(block, block->mTexCoordDataOffset[i]);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r4
	lwz      r4, 8(r4)
	lwz      r5, 4(r3)
	mr       r3, r30
	addi     r31, r5, 0x88
	bl       "JSUConvertOffsetToPtr<17_GXVtxAttrFmtList>__FPCvPCv"
	stw      r3, 0x14(r31)
	mr       r3, r30
	lwz      r4, 0xc(r30)
	bl       "JSUConvertOffsetToPtr<v>__FPCvPCv"
	stw      r3, 0x18(r31)
	mr       r3, r30
	lwz      r4, 0x10(r30)
	bl       "JSUConvertOffsetToPtr<v>__FPCvPCv"
	stw      r3, 0x1c(r31)
	mr       r3, r30
	lwz      r4, 0x14(r30)
	bl       "JSUConvertOffsetToPtr<v>__FPCvPCv"
	stw      r3, 0x20(r31)
	mr       r29, r30
	mr       r28, r31
	li       r27, 0

lbl_800705D4:
	lwz      r4, 0x18(r29)
	mr       r3, r30
	bl       "JSUConvertOffsetToPtr<v>__FPCvPCv"
	addi     r27, r27, 1
	stw      r3, 0x24(r28)
	cmpwi    r27, 2
	addi     r29, r29, 4
	addi     r28, r28, 4
	blt      lbl_800705D4
	mr       r28, r30
	mr       r29, r31
	li       r27, 0

lbl_80070604:
	lwz      r4, 0x20(r28)
	mr       r3, r30
	bl       "JSUConvertOffsetToPtr<v>__FPCvPCv"
	addi     r27, r27, 1
	stw      r3, 0x2c(r29)
	cmpwi    r27, 8
	addi     r28, r28, 4
	addi     r29, r29, 4
	blt      lbl_80070604
	lwz      r3, 0x14(r31)
	b        lbl_80070644

lbl_80070630:
	cmpwi    r0, 0xa
	bne      lbl_80070640
	lwz      r0, 8(r3)
	b        lbl_80070654

lbl_80070640:
	addi     r3, r3, 0x10

lbl_80070644:
	lwz      r0, 0(r3)
	cmpwi    r0, 0xff
	bne      lbl_80070630
	li       r0, 4

lbl_80070654:
	cmpwi    r0, 4
	li       r4, 6
	bne      lbl_80070664
	li       r4, 0xc

lbl_80070664:
	lwz      r0, 0x20(r31)
	li       r3, 0
	cmplwi   r0, 0
	beq      lbl_8007067C
	mr       r3, r0
	b        lbl_800706A0

lbl_8007067C:
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	beq      lbl_80070690
	mr       r3, r0
	b        lbl_800706A0

lbl_80070690:
	lwz      r0, 0x2c(r31)
	cmplwi   r0, 0
	beq      lbl_800706A0
	mr       r3, r0

lbl_800706A0:
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0
	bne      lbl_800706B8
	li       r0, 0
	stw      r0, 4(r31)
	b        lbl_800706EC

lbl_800706B8:
	cmplwi   r3, 0
	beq      lbl_800706D4
	subf     r0, r0, r3
	divwu    r3, r0, r4
	addi     r0, r3, 1
	stw      r0, 4(r31)
	b        lbl_800706EC

lbl_800706D4:
	lwz      r3, 0x10(r30)
	lwz      r0, 4(r30)
	subf     r0, r3, r0
	divwu    r3, r0, r4
	addi     r0, r3, 1
	stw      r0, 4(r31)

lbl_800706EC:
	lwz      r0, 0x28(r31)
	li       r3, 0
	cmplwi   r0, 0
	beq      lbl_80070704
	mr       r3, r0
	b        lbl_80070714

lbl_80070704:
	lwz      r0, 0x2c(r31)
	cmplwi   r0, 0
	beq      lbl_80070714
	mr       r3, r0

lbl_80070714:
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_8007072C
	li       r0, 0
	stw      r0, 8(r31)
	b        lbl_80070760

lbl_8007072C:
	cmplwi   r3, 0
	beq      lbl_80070748
	subf     r0, r0, r3
	srwi     r3, r0, 2
	addi     r0, r3, 1
	stw      r0, 8(r31)
	b        lbl_80070760

lbl_80070748:
	lwz      r3, 0x18(r30)
	lwz      r0, 4(r30)
	subf     r0, r3, r0
	srwi     r3, r0, 2
	addi     r0, r3, 1
	stw      r0, 8(r31)

lbl_80070760:
	lwz      r0, 0x2c(r31)
	cmplwi   r0, 0
	bne      lbl_80070778
	li       r0, 0
	stw      r0, 0xc(r31)
	b        lbl_80070790

lbl_80070778:
	lwz      r3, 0x20(r30)
	lwz      r0, 4(r30)
	subf     r0, r3, r0
	srwi     r3, r0, 3
	addi     r0, r3, 1
	stw      r0, 0xc(r31)

lbl_80070790:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
	J3DModelData* model                   = mModelData;
	model->getJointTree().mMtxData.mCount = block->mCount - model->getJointTree().mEnvelopeCnt;

	model->getJointTree().mMtxData.mDrawMtxFlag = JSUConvertOffsetToPtr<u8>(block, block->mMatrixTypeArrayOffset);
	model->getJointTree().mMtxData.mDrawMtxIdx  = JSUConvertOffsetToPtr<u16>(block, block->mDataArrayOffset);

	u16 i;
	for (u16 i = 0; model->getJointTree().mMtxData.mCount > i; i++) {
		if (model->getJointTree().mMtxData.mDrawMtxFlag[i] == 1) {
			break;
		}
	}

	model->getJointTree().mMtxData.mDrawMtxCount = i;

	mModelData->getJointTree().mEnvelopeImptIdx = new u16[model->getJointTree().mMtxData.mCount];
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lhz      r0, 8(r4)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	lwz      r4, 0xc(r4)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 4(r3)
	mr       r3, r30
	lhz      r5, 0x2e(r31)
	subf     r0, r5, r0
	sth      r0, 0x44(r31)
	bl       "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
	stw      r3, 0x48(r31)
	mr       r3, r30
	lwz      r4, 0x10(r30)
	bl       "JSUConvertOffsetToPtr<Us>__FPCvPCv"
	stw      r3, 0x4c(r31)
	li       r5, 0
	lhz      r4, 0x44(r31)
	b        lbl_800708B4

lbl_8007089C:
	lwz      r3, 0x48(r31)
	clrlwi   r0, r5, 0x10
	lbzx     r0, r3, r0
	cmplwi   r0, 1
	beq      lbl_800708C0
	addi     r5, r5, 1

lbl_800708B4:
	clrlwi   r0, r5, 0x10
	cmplw    r0, r4
	blt      lbl_8007089C

lbl_800708C0:
	sth      r5, 0x46(r31)
	lhz      r0, 0x44(r31)
	lwz      r31, 4(r29)
	slwi     r3, r0, 1
	bl       __nwa__FUl
	stw      r3, 0x40(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800708F4
 * @note Size: 0xEC
 */
void J3DModelLoader::readJoint(const J3DJointBlock*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	bl       __ct__15J3DJointFactoryFRC13J3DJointBlock
	lwz      r0, 0x14(r29)
	lhz      r4, 8(r29)
	lwz      r3, 4(r31)
	cmplwi   r0, 0
	sth      r4, 0x2c(r3)
	beq      lbl_8007096C
	li       r3, 0x10
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80070960
	lwz      r4, 0x14(r29)
	mr       r3, r29
	bl       "JSUConvertOffsetToPtr<7ResNTAB>__FPCvPCv"
	mr       r4, r3
	mr       r3, r30
	bl       __ct__10JUTNameTabFPC7ResNTAB
	mr       r30, r3

lbl_80070960:
	lwz      r3, 4(r31)
	stw      r30, 0x54(r3)
	b        lbl_80070978

lbl_8007096C:
	lwz      r3, 4(r31)
	li       r0, 0
	stw      r0, 0x54(r3)

lbl_80070978:
	lwz      r30, 4(r31)
	lhz      r0, 0x2c(r30)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x28(r30)
	li       r29, 0
	b        lbl_800709B0

lbl_80070994:
	addi     r3, r1, 8
	clrlwi   r4, r29, 0x10
	bl       create__15J3DJointFactoryFi
	lwz      r4, 0x28(r30)
	rlwinm   r0, r29, 2, 0xe, 0x1d
	addi     r29, r29, 1
	stwx     r3, r4, r0

lbl_800709B0:
	lwz      r30, 4(r31)
	clrlwi   r0, r29, 0x10
	lhz      r3, 0x2c(r30)
	cmplw    r0, r3
	blt      lbl_80070994
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800709E0
 * @note Size: 0x274
 */
void J3DModelLoader_v26::readMaterial(const J3DMaterialBlock*, u32)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stmw     r27, 0x9c(r1)
	mr       r29, r3
	mr       r27, r4
	mr       r30, r5
	addi     r3, r1, 8
	bl       __ct__18J3DMaterialFactoryFRC16J3DMaterialBlock
	lhz      r0, 8(r27)
	addi     r3, r1, 8
	lwz      r4, 8(r29)
	sth      r0, 4(r4)
	bl       countUniqueMaterials__18J3DMaterialFactoryFv
	lwz      r0, 0x14(r27)
	lwz      r4, 8(r29)
	cmplwi   r0, 0
	sth      r3, 6(r4)
	beq      lbl_80070A64
	li       r3, 0x10
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80070A58
	lwz      r4, 0x14(r27)
	mr       r3, r27
	bl       "JSUConvertOffsetToPtr<7ResNTAB>__FPCvPCv"
	mr       r4, r3
	mr       r3, r28
	bl       __ct__10JUTNameTabFPC7ResNTAB
	mr       r28, r3

lbl_80070A58:
	lwz      r3, 8(r29)
	stw      r28, 0xc(r3)
	b        lbl_80070A70

lbl_80070A64:
	lwz      r3, 8(r29)
	li       r0, 0
	stw      r0, 0xc(r3)

lbl_80070A70:
	lwz      r3, 8(r29)
	lhz      r0, 4(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	lwz      r4, 8(r29)
	rlwinm.  r31, r30, 0, 0xa, 0xa
	stw      r3, 8(r4)
	beq      lbl_80070AD0
	lwz      r3, 8(r29)
	li       r4, 0x20
	lhz      r28, 6(r3)
	mulli    r3, r28, 0x4c
	addi     r3, r3, 0x10
	bl       __nwa__FUli
	lis      r4, __ct__11J3DMaterialFv@ha
	lis      r5, __dt__11J3DMaterialFv@ha
	addi     r4, r4, __ct__11J3DMaterialFv@l
	mr       r7, r28
	addi     r5, r5, __dt__11J3DMaterialFv@l
	li       r6, 0x4c
	bl       __construct_new_array
	lwz      r4, 8(r29)
	stw      r3, 0x10(r4)
	b        lbl_80070ADC

lbl_80070AD0:
	lwz      r3, 8(r29)
	li       r0, 0
	stw      r0, 0x10(r3)

lbl_80070ADC:
	cmplwi   r31, 0
	beq      lbl_80070B38
	li       r27, 0
	b        lbl_80070B24

lbl_80070AEC:
	clrlwi   r6, r27, 0x10
	lwz      r0, 0x10(r4)
	mulli    r28, r6, 0x4c
	mr       r7, r30
	addi     r3, r1, 8
	li       r5, 0
	add      r4, r0, r28
	bl
create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
	lwz      r3, 8(r29)
	addi     r27, r27, 1
	lwz      r0, 0x10(r3)
	add      r3, r0, r28
	srwi     r0, r3, 4
	stw      r0, 0x20(r3)

lbl_80070B24:
	lwz      r4, 8(r29)
	clrlwi   r3, r27, 0x10
	lhz      r0, 6(r4)
	cmplw    r3, r0
	blt      lbl_80070AEC

lbl_80070B38:
	li       r27, 0
	b        lbl_80070B6C

lbl_80070B40:
	mr       r7, r30
	addi     r3, r1, 8
	clrlwi   r6, r27, 0x10
	li       r4, 0
	li       r5, 0
	bl
create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
	lwz      r4, 8(r29)
	rlwinm   r0, r27, 2, 0xe, 0x1d
	addi     r27, r27, 1
	lwz      r4, 8(r4)
	stwx     r3, r4, r0

lbl_80070B6C:
	lwz      r3, 8(r29)
	clrlwi   r4, r27, 0x10
	lhz      r0, 4(r3)
	cmplw    r4, r0
	blt      lbl_80070B40
	cmplwi   r31, 0
	beq      lbl_80070BFC
	li       r8, 0
	b        lbl_80070BE4

lbl_80070B90:
	lwz      r3, 0x10(r1)
	rlwinm   r6, r8, 1, 0xf, 0x1e
	rlwinm   r7, r8, 2, 0xe, 0x1d
	lwz      r4, 0x10(r5)
	lhzx     r0, r3, r6
	addi     r8, r8, 1
	lwz      r3, 8(r5)
	mulli    r0, r0, 0x4c
	lwzx     r3, r3, r7
	add      r0, r4, r0
	srwi     r0, r0, 4
	stw      r0, 0x20(r3)
	lwz      r3, 0x10(r1)
	lwz      r4, 8(r29)
	lhzx     r0, r3, r6
	lwz      r3, 8(r4)
	mulli    r0, r0, 0x4c
	lwz      r4, 0x10(r4)
	lwzx     r3, r3, r7
	add      r0, r4, r0
	stw      r0, 0x38(r3)

lbl_80070BE4:
	lwz      r5, 8(r29)
	clrlwi   r3, r8, 0x10
	lhz      r0, 4(r5)
	cmplw    r3, r0
	blt      lbl_80070B90
	b        lbl_80070C40

lbl_80070BFC:
	li       r7, 0
	b        lbl_80070C2C

lbl_80070C04:
	lwz      r4, 0x10(r1)
	rlwinm   r3, r7, 1, 0xf, 0x1e
	lwz      r6, 8(r5)
	rlwinm   r0, r7, 2, 0xe, 0x1d
	lhzx     r4, r4, r3
	addi     r7, r7, 1
	srwi     r5, r6, 4
	lwzx     r3, r6, r0
	add      r0, r5, r4
	stw      r0, 0x20(r3)

lbl_80070C2C:
	lwz      r5, 8(r29)
	clrlwi   r3, r7, 0x10
	lhz      r0, 4(r5)
	cmplw    r3, r0
	blt      lbl_80070C04

lbl_80070C40:
	lmw      r27, 0x9c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/**
 * @note Address: 0x80070CA8
 * @note Size: 0x25C
 */
void J3DModelLoader_v21::readMaterial_v21(const J3DMaterialBlock_v21*, u32)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r27, 0x7C(r1)
	  mr        r29, r3
	  mr        r27, r4
	  mr        r30, r5
	  addi      r3, r1, 0x8
	  bl        0x13D38
	  lhz       r0, 0x8(r27)
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r29)
	  sth       r0, 0x4(r4)
	  bl        0x13F04
	  lwz       r0, 0x14(r27)
	  lwz       r4, 0x8(r29)
	  cmplwi    r0, 0
	  sth       r3, 0x6(r4)
	  beq-      .loc_0x84
	  li        r3, 0x10
	  bl        -0x4CE54
	  mr.       r28, r3
	  beq-      .loc_0x78
	  lwz       r4, 0x14(r27)
	  mr        r3, r27
	  bl        -0x278A0
	  mr        r4, r3
	  mr        r3, r28
	  bl        -0x4200C
	  mr        r28, r3

	.loc_0x78:
	  lwz       r3, 0x8(r29)
	  stw       r28, 0xC(r3)
	  b         .loc_0x90

	.loc_0x84:
	  lwz       r3, 0x8(r29)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x90:
	  lwz       r3, 0x8(r29)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4CD98
	  lwz       r4, 0x8(r29)
	  rlwinm.   r31,r30,0,10,10
	  stw       r3, 0x8(r4)
	  beq-      .loc_0xF0
	  lwz       r3, 0x8(r29)
	  li        r4, 0x20
	  lhz       r28, 0x6(r3)
	  mulli     r3, r28, 0x4C
	  addi      r3, r3, 0x10
	  bl        -0x4CD74
	  lis       r4, 0x8007
	  lis       r5, 0x8007
	  addi      r4, r4, 0xC54
	  mr        r7, r28
	  subi      r5, r5, 0x256C
	  li        r6, 0x4C
	  bl        0x50C68
	  lwz       r4, 0x8(r29)
	  stw       r3, 0x10(r4)
	  b         .loc_0xFC

	.loc_0xF0:
	  lwz       r3, 0x8(r29)
	  li        r0, 0
	  stw       r0, 0x10(r3)

	.loc_0xFC:
	  cmplwi    r31, 0
	  beq-      .loc_0x154
	  li        r27, 0
	  b         .loc_0x140

	.loc_0x10C:
	  rlwinm    r5,r27,0,16,31
	  lwz       r0, 0x10(r4)
	  mulli     r28, r5, 0x4C
	  mr        r6, r30
	  addi      r3, r1, 0x8
	  add       r4, r0, r28
	  bl        0x13E60
	  lwz       r3, 0x8(r29)
	  addi      r27, r27, 0x1
	  lwz       r0, 0x10(r3)
	  add       r3, r0, r28
	  rlwinm    r0,r3,28,4,31
	  stw       r0, 0x20(r3)

	.loc_0x140:
	  lwz       r4, 0x8(r29)
	  rlwinm    r3,r27,0,16,31
	  lhz       r0, 0x6(r4)
	  cmplw     r3, r0
	  blt+      .loc_0x10C

	.loc_0x154:
	  li        r27, 0
	  b         .loc_0x184

	.loc_0x15C:
	  mr        r6, r30
	  addi      r3, r1, 0x8
	  rlwinm    r5,r27,0,16,31
	  li        r4, 0
	  bl        0x13E18
	  lwz       r4, 0x8(r29)
	  rlwinm    r0,r27,2,14,29
	  addi      r27, r27, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r0

	.loc_0x184:
	  lwz       r3, 0x8(r29)
	  rlwinm    r4,r27,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0x15C
	  cmplwi    r31, 0
	  beq-      .loc_0x214
	  li        r8, 0
	  b         .loc_0x1FC

	.loc_0x1A8:
	  lwz       r3, 0x10(r1)
	  rlwinm    r6,r8,1,15,30
	  rlwinm    r7,r8,2,14,29
	  lwz       r4, 0x10(r5)
	  lhzx      r0, r3, r6
	  addi      r8, r8, 0x1
	  lwz       r3, 0x8(r5)
	  mulli     r0, r0, 0x4C
	  lwzx      r3, r3, r7
	  add       r0, r4, r0
	  rlwinm    r0,r0,28,4,31
	  stw       r0, 0x20(r3)
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0x8(r29)
	  lhzx      r0, r3, r6
	  lwz       r3, 0x8(r4)
	  mulli     r0, r0, 0x4C
	  lwz       r4, 0x10(r4)
	  lwzx      r3, r3, r7
	  add       r0, r4, r0
	  stw       r0, 0x38(r3)

	.loc_0x1FC:
	  lwz       r5, 0x8(r29)
	  rlwinm    r3,r8,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0x1A8
	  b         .loc_0x248

	.loc_0x214:
	  li        r6, 0
	  lis       r4, 0xC000
	  b         .loc_0x234

	.loc_0x220:
	  lwz       r3, 0x8(r5)
	  rlwinm    r0,r6,2,14,29
	  addi      r6, r6, 0x1
	  lwzx      r3, r3, r0
	  stw       r4, 0x20(r3)

	.loc_0x234:
	  lwz       r5, 0x8(r29)
	  rlwinm    r3,r6,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0x220

	.loc_0x248:
	  lmw       r27, 0x7C(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
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
		model->mShapeTable.mNames = new JUTNameTab(JSUConvertOffsetToPtr<ResNTAB>(block, block->mNameTableOffset));
	} else {
		model->mShapeTable.mNames = nullptr;
	}
	model->mShapeTable.mItems = new J3DShape*[model->getShapeNum()];
	factory.allocVcdVatCmdBuffer(model->mShapeTable.mCount);

	for (J3DModelHierarchy* hier = mModelData->mJointTree.mHierarchy; hier; hier++) {
		if (hier->mType == 0x12) {
			model->mShapeTable.mItems[hier->mValue] = factory.create(hier->mValue, 0, nullptr);
		}
	}

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r28, r4
	mr       r27, r3
	mr       r30, r5
	stw      r28, 0xc(r3)
	addi     r3, r1, 8
	lwz      r31, 4(r27)
	bl       __ct__15J3DShapeFactoryFRC13J3DShapeBlock
	lwz      r0, 0x14(r28)
	lhz      r3, 8(r28)
	cmplwi   r0, 0
	sth      r3, 0x7c(r31)
	beq      lbl_80070F78
	li       r3, 0x10
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80070F70
	lwz      r4, 0x14(r28)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<7ResNTAB>__FPCvPCv"
	mr       r4, r3
	mr       r3, r29
	bl       __ct__10JUTNameTabFPC7ResNTAB
	mr       r29, r3

lbl_80070F70:
	stw      r29, 0x84(r31)
	b        lbl_80070F80

lbl_80070F78:
	li       r0, 0
	stw      r0, 0x84(r31)

lbl_80070F80:
	lhz      r0, 0x7c(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x80(r31)
	addi     r3, r1, 8
	lhz      r4, 0x7c(r31)
	bl       allocVcdVatCmdBuffer__15J3DShapeFactoryFUl
	lwz      r3, 4(r27)
	li       r6, 0
	lwz      r29, 0x14(r3)
	b        lbl_80071000

lbl_80070FAC:
	cmplwi   r0, 0x12
	bne      lbl_80070FFC
	lhz      r4, 2(r29)
	mr       r5, r30
	addi     r3, r1, 8
	bl       create__15J3DShapeFactoryFiUlP14_GXVtxDescList
	lhz      r0, 2(r29)
	lwz      r4, 0x80(r31)
	slwi     r0, r0, 2
	stwx     r3, r4, r0
	lhz      r0, 2(r29)
	lwz      r3, 0xc(r1)
	slwi     r0, r0, 1
	lwz      r4, 8(r1)
	lhzx     r0, r3, r0
	lwz      r5, 0x10(r1)
	mulli    r3, r0, 0x28
	addi     r0, r3, 4
	lhzx     r0, r4, r0
	add      r6, r5, r0

lbl_80070FFC:
	addi     r29, r29, 4

lbl_80071000:
	lhz      r0, 0(r29)
	cmplwi   r0, 0
	bne      lbl_80070FAC
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
		J3DMaterial** materials = mMaterialTable->mMaterials;
		materials[i]->mDiffFlag = (u32)(materials + factory.mMatRemapTable[i]);
	}

	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  mr        r31, r5
	  stw       r30, 0x98(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  stw       r29, 0x94(r1)
	  stw       r28, 0x90(r1)
	  mr        r28, r4
	  bl        -0x4D6C
	  lwz       r0, 0x14(r28)
	  lhz       r4, 0x8(r28)
	  lwz       r3, 0x8(r30)
	  cmplwi    r0, 0
	  sth       r4, 0x4(r3)
	  beq-      .loc_0x80
	  li        r3, 0x10
	  bl        -0x4D28C
	  mr.       r29, r3
	  beq-      .loc_0x74
	  lwz       r4, 0x14(r28)
	  mr        r3, r28
	  bl        -0x27CD8
	  mr        r4, r3
	  mr        r3, r29
	  bl        -0x42444
	  mr        r29, r3

	.loc_0x74:
	  lwz       r3, 0x8(r30)
	  stw       r29, 0xC(r3)
	  b         .loc_0x8C

	.loc_0x80:
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x8C:
	  lwz       r3, 0x8(r30)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4D1D0
	  lwz       r4, 0x8(r30)
	  li        r29, 0
	  stw       r3, 0x8(r4)
	  b         .loc_0xD8

	.loc_0xAC:
	  mr        r7, r31
	  addi      r3, r1, 0x8
	  rlwinm    r6,r29,0,16,31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x4AE8
	  lwz       r4, 0x8(r30)
	  rlwinm    r0,r29,2,14,29
	  addi      r29, r29, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r0

	.loc_0xD8:
	  lwz       r3, 0x8(r30)
	  rlwinm    r4,r29,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0xAC
	  li        r6, 0
	  b         .loc_0x118

	.loc_0xF4:
	  lwz       r4, 0x10(r1)
	  rlwinm    r3,r6,1,15,30
	  lwz       r5, 0x8(r5)
	  rlwinm    r0,r6,2,14,29
	  lhzx      r4, r4, r3
	  addi      r6, r6, 0x1
	  lwzx      r3, r5, r0
	  add       r0, r5, r4
	  stw       r0, 0x20(r3)

	.loc_0x118:
	  lwz       r5, 0x8(r30)
	  rlwinm    r3,r6,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0xF4
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  lwz       r28, 0x90(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
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
		J3DMaterial** materials = mMaterialTable->mMaterials;
		materials[i]->mDiffFlag = (u32)(materials + factory.mMatRemapTable[i]);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  mr        r31, r5
	  stw       r30, 0x88(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  mr        r28, r4
	  bl        0x137A4
	  lwz       r0, 0x14(r28)
	  lhz       r4, 0x8(r28)
	  lwz       r3, 0x8(r30)
	  cmplwi    r0, 0
	  sth       r4, 0x4(r3)
	  beq-      .loc_0x80
	  li        r3, 0x10
	  bl        -0x4D3D8
	  mr.       r29, r3
	  beq-      .loc_0x74
	  lwz       r4, 0x14(r28)
	  mr        r3, r28
	  bl        -0x27E24
	  mr        r4, r3
	  mr        r3, r29
	  bl        -0x42590
	  mr        r29, r3

	.loc_0x74:
	  lwz       r3, 0x8(r30)
	  stw       r29, 0xC(r3)
	  b         .loc_0x8C

	.loc_0x80:
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x8C:
	  lwz       r3, 0x8(r30)
	  lhz       r0, 0x4(r3)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x4D31C
	  lwz       r4, 0x8(r30)
	  li        r29, 0
	  stw       r3, 0x8(r4)
	  b         .loc_0xD4

	.loc_0xAC:
	  mr        r6, r31
	  addi      r3, r1, 0x8
	  rlwinm    r5,r29,0,16,31
	  li        r4, 0
	  bl        0x13940
	  lwz       r4, 0x8(r30)
	  rlwinm    r0,r29,2,14,29
	  addi      r29, r29, 0x1
	  lwz       r4, 0x8(r4)
	  stwx      r3, r4, r0

	.loc_0xD4:
	  lwz       r3, 0x8(r30)
	  rlwinm    r4,r29,0,16,31
	  lhz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt+      .loc_0xAC
	  li        r7, 0
	  b         .loc_0x118

	.loc_0xF0:
	  lwz       r4, 0x10(r1)
	  rlwinm    r3,r7,1,15,30
	  lwz       r6, 0x8(r5)
	  rlwinm    r0,r7,2,14,29
	  lhzx      r4, r4, r3
	  addi      r7, r7, 0x1
	  rlwinm    r5,r6,28,4,31
	  lwzx      r3, r6, r0
	  add       r0, r5, r4
	  stw       r0, 0x20(r3)

	.loc_0x118:
	  lwz       r5, 0x8(r30)
	  rlwinm    r3,r7,0,16,31
	  lhz       r0, 0x4(r5)
	  cmplw     r3, r0
	  blt+      .loc_0xF0
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
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
		mMaterialTable->mMaterials[i]->mDiffFlag = factory.mMatRemapTable[i];
	}
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r30, r5
	stw      r29, 0x94(r1)
	mr       r29, r3
	addi     r3, r1, 8
	stw      r28, 0x90(r1)
	mr       r28, r4
	bl       __ct__18J3DMaterialFactoryFRC16J3DMaterialBlock
	lhz      r0, 8(r28)
	addi     r3, r1, 8
	lwz      r4, 8(r29)
	sth      r0, 4(r4)
	bl       countUniqueMaterials__18J3DMaterialFactoryFv
	lwz      r0, 0x14(r28)
	lwz      r4, 8(r29)
	cmplwi   r0, 0
	sth      r3, 6(r4)
	beq      lbl_800714D0
	li       r3, 0x10
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_800714C4
	lwz      r4, 0x14(r28)
	mr       r3, r28
	bl       "JSUConvertOffsetToPtr<7ResNTAB>__FPCvPCv"
	mr       r4, r3
	mr       r3, r31
	bl       __ct__10JUTNameTabFPC7ResNTAB
	mr       r31, r3

lbl_800714C4:
	lwz      r3, 8(r29)
	stw      r31, 0xc(r3)
	b        lbl_800714DC

lbl_800714D0:
	lwz      r3, 8(r29)
	li       r0, 0
	stw      r0, 0xc(r3)

lbl_800714DC:
	lwz      r3, 8(r29)
	lhz      r0, 4(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	lwz      r4, 8(r29)
	li       r0, 0
	li       r31, 0
	stw      r3, 8(r4)
	lwz      r3, 8(r29)
	stw      r0, 0x10(r3)
	b        lbl_8007155C

lbl_80071508:
	clrlwi   r28, r31, 0x10
	mr       r7, r30
	mr       r6, r28
	addi     r3, r1, 8
	li       r4, 0
	li       r5, 2
	bl
create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl
	lwz      r4, 8(r29)
	rlwinm   r6, r31, 2, 0xe, 0x1d
	slwi     r0, r28, 1
	addi     r31, r31, 1
	lwz      r4, 8(r4)
	stwx     r3, r4, r6
	lwz      r4, 8(r29)
	lwz      r3, 0x10(r1)
	lwz      r5, 8(r4)
	lhzx     r0, r3, r0
	srwi     r4, r5, 4
	lwzx     r3, r5, r6
	add      r0, r4, r0
	stw      r0, 0x20(r3)

lbl_8007155C:
	lwz      r3, 8(r29)
	clrlwi   r4, r31, 0x10
	lhz      r0, 4(r3)
	cmplw    r4, r0
	blt      lbl_80071508
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	lwz      r28, 0x90(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
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
