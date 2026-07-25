#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DMaterialFactory.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DShapeFactory.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JSupport/JSU.h"
#include "types.h"

/**
 * @note Address: 0x80087900
 * @note Size: 0x40
 */
u16 J3DModelLoader::countMaterialNum(const void* stream)
{
	const J3DFileHeader* header   = (const J3DFileHeader*)stream;
	u32 count                     = header->mBlockCount;
	const J3DFileBlockBase* block = header->getFirstBlock();
	for (int i = 0; i < count; block = block->getNext(), i++) {
		if (block->mBlockType == J3DFBT_Material) {
			return ((const J3DMaterialBlock*)block)->mNumMaterials;
		}
	}
	return 0;
}

/**
 * @note Address: 0x80087940
 * @note Size: 0x1B0
 */
int J3DModelLoader::calcLoadSize(const void* stream, u32 flags)
{
	size_t size = 0;
	// TODO: What sizeof will get us a size of 0xE4?
	size += 0xE4;

	const J3DFileHeader* header       = static_cast<const J3DFileHeader*>(stream);
	const J3DFileBlockBase* nextBlock = (const J3DFileBlockBase*)(header + 1);
	for (u32 i = 0; i < header->mBlockCount; i++) {
		switch (nextBlock->mBlockType) {
		case J3DFBT_Info:
			size += calcSizeInformation((const J3DModelInfoBlock*)nextBlock, flags);
			break;
		case J3DFBT_Joint:
			size += calcSizeJoint((const J3DJointBlock*)nextBlock);
			break;
		case J3DFBT_MaterialV21:
			break;
		case J3DFBT_Material:
			size += calcSizeMaterial((const J3DMaterialBlock*)nextBlock, flags);
			break;
		case J3DFBT_Shape:
			size += calcSizeShape((const J3DShapeBlock*)nextBlock, flags);
			break;
		case J3DFBT_Texture:
			size += calcSizeTexture((const J3DTextureBlock*)nextBlock);
			break;
		case J3DFBT_Envelope:
			size += calcSizeEnvelope((const J3DEnvelopeBlock*)nextBlock);
			break;
		case J3DFBT_Draw:
			size += calcSizeDraw((const J3DDrawBlock*)nextBlock);
			break;
		case J3DFBT_Vertex:
			break;
		default:
			break;
		}
		nextBlock = nextBlock->getNext();
	}
	return size;
}

/**
 * @note Address: 0x80087AF0
 * @note Size: 0xCC
 */
int J3DModelLoader::calcLoadMaterialTableSize(const void* stream)
{
	u32 flags   = J3DMLF_21 | J3DMLF_Material_UseIndirect | J3DMLF_Material_PE_Full | J3DMLF_Material_Color_LightOn;
	size_t size = 0;

	// TODO: What sizeof will get us a size of 0x20? Is this just the file header???
	size += 0x20;
	const J3DFileBlockBase* nextBlock;
	const J3DFileHeader* header = reinterpret_cast<const J3DFileHeader*>(stream);
	bool hasTextureTable        = false;
	nextBlock                   = header->getFirstBlock();
	for (u32 i = 0; i < header->mBlockCount; i++) {
		switch (nextBlock->mBlockType) {
		case J3DFBT_MaterialV21:
			break;
		case J3DFBT_Material:
			size += calcSizeMaterialTable((const J3DMaterialBlock*)nextBlock, flags);
			break;
		case J3DFBT_Texture:
			size += calcSizeTextureTable((const J3DTextureBlock*)nextBlock);
			hasTextureTable = true;
			break;
		}
		nextBlock = nextBlock->getNext();
	}

	if (!hasTextureTable) {
		size += 0xC;
	}
	return size;
}

/**
 * @note Address: 0x80087BBC
 * @note Size: 0x210
 */
int J3DModelLoader::calcLoadBinaryDisplayListSize(const void* stream, u32 flags)
{
	const J3DFileHeader* header       = (const J3DFileHeader*)stream;
	u32 blockCount                    = header->mBlockCount;
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	u32 matFlags                      = flags & (J3DMLF_Material_UseIndirect | J3DMLF_26);
	int size                          = sizeof(J3DModelData);
	for (u32 i = 0; i < blockCount; i++) {
		switch (nextBlock->mBlockType) {
		case J3DFBT_Info:
			size += calcSizeInformation((const J3DModelInfoBlock*)nextBlock, flags);
			break;
		case J3DFBT_Joint:
			size += calcSizeJoint((const J3DJointBlock*)nextBlock);
			break;
		case J3DFBT_Shape:
			size += calcSizeShape((const J3DShapeBlock*)nextBlock, flags);
			break;
		case J3DFBT_Texture:
			size += calcSizeTexture((const J3DTextureBlock*)nextBlock);
			break;
		case J3DFBT_MaterialDL:
			size += calcSizeMaterialDL((const J3DMaterialDLBlock*)nextBlock, flags);
			break;
		case J3DFBT_MaterialV21:
			break;
		case J3DFBT_Material:
			mMaterialBlock = (const J3DMaterialBlock*)nextBlock;
			matFlags |= (J3DMLF_21 | J3DMLF_Material_PE_Full | J3DMLF_Material_Color_LightOn);
			if ((flags & (J3DMLF_13 | J3DMLF_DoBdlMaterialCalc)) == 0) {
				_18 = 1;
				size += calcSizeMaterial((const J3DMaterialBlock*)nextBlock, matFlags);
			} else if ((flags & (J3DMLF_13 | J3DMLF_DoBdlMaterialCalc)) == J3DMLF_DoBdlMaterialCalc) {
				_18 = 1;
				size += calcSizePatchedMaterial((const J3DMaterialBlock*)nextBlock, matFlags);
			}
			break;
		case J3DFBT_Envelope:
			size += calcSizeEnvelope((const J3DEnvelopeBlock*)nextBlock);
			break;
		case J3DFBT_Draw:
			size += calcSizeDraw((const J3DDrawBlock*)nextBlock);
			break;
		case J3DFBT_Vertex:
			break;
		default:
			break;
		}
		nextBlock = nextBlock->getNext();
	}
	return size;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	mr       r25, r5
	lis      r5, 0x4D415433@ha
	lwz      r23, 0xc(r4)
	mr       r24, r3
	addi     r27, r4, 0x20
	rlwinm   r30, r25, 0, 6, 7
	rlwinm   r29, r25, 0, 0x12, 0x13
	addi     r31, r5, 0x4D415433@l
	li       r26, 0
	li       r28, 0xe4
	b        lbl_80087DAC

lbl_80087BF8:
	lwz      r4, 0(r27)
	cmpw     r4, r31
	beq      lbl_80087D1C
	bge      lbl_80087C5C
	lis      r3, 0x494E4631@ha
	addi     r0, r3, 0x494E4631@l
	cmpw     r4, r0
	beq      lbl_80087CAC
	bge      lbl_80087C44
	lis      r3, 0x45565031@ha
	addi     r0, r3, 0x45565031@l
	cmpw     r4, r0
	beq      lbl_80087D7C
	bge      lbl_80087DA0
	lis      r3, 0x44525731@ha
	addi     r0, r3, 0x44525731@l
	cmpw     r4, r0
	beq      lbl_80087D90
	b        lbl_80087DA0

lbl_80087C44:
	lis      r3, 0x4A4E5431@ha
	addi     r0, r3, 0x4A4E5431@l
	cmpw     r4, r0
	beq      lbl_80087CC4
	blt      lbl_80087DA0
	b        lbl_80087DA0

lbl_80087C5C:
	lis      r3, 0x54455831@ha
	addi     r0, r3, 0x54455831@l
	cmpw     r4, r0
	beq      lbl_80087CF0
	bge      lbl_80087C98
	lis      r3, 0x53485031@ha
	addi     r0, r3, 0x53485031@l
	cmpw     r4, r0
	beq      lbl_80087CD8
	bge      lbl_80087DA0
	lis      r3, 0x4D444C33@ha
	addi     r0, r3, 0x4D444C33@l
	cmpw     r4, r0
	beq      lbl_80087D04
	b        lbl_80087DA0

lbl_80087C98:
	lis      r3, 0x56545831@ha
	addi     r0, r3, 0x56545831@l
	cmpw     r4, r0
	beq      lbl_80087DA0
	b        lbl_80087DA0

lbl_80087CAC:
	mr       r3, r24
	mr       r4, r27
	mr       r5, r25
	bl       calcSizeInformation__14J3DModelLoaderFPC17J3DModelInfoBlockUl
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087CC4:
	mr       r3, r24
	mr       r4, r27
	bl       calcSizeJoint__14J3DModelLoaderFPC13J3DJointBlock
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087CD8:
	mr       r3, r24
	mr       r4, r27
	mr       r5, r25
	bl       calcSizeShape__14J3DModelLoaderFPC13J3DShapeBlockUl
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087CF0:
	mr       r3, r24
	mr       r4, r27
	bl       calcSizeTexture__14J3DModelLoaderFPC15J3DTextureBlock
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087D04:
	mr       r3, r24
	mr       r4, r27
	mr       r5, r25
	bl       calcSizeMaterialDL__14J3DModelLoaderFPC18J3DMaterialDLBlockUl
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087D1C:
	cmplwi   r29, 0
	lis      r5, 0x5010
	stw      r27, 0x10(r24)
	or       r5, r5, r30
	bne      lbl_80087D58
	li       r0, 1
	mr       r3, r24
	stb      r0, 0x18(r24)
	mr       r4, r27
	lwz      r12, 0(r24)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087D58:
	cmplwi   r29, 0x2000
	bne      lbl_80087DA0
	li       r0, 1
	mr       r3, r24
	stb      r0, 0x18(r24)
	mr       r4, r27
	bl       calcSizePatchedMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087D7C:
	mr       r3, r24
	mr       r4, r27
	bl       calcSizeEnvelope__14J3DModelLoaderFPC16J3DEnvelopeBlock
	add      r28, r28, r3
	b        lbl_80087DA0

lbl_80087D90:
	mr       r3, r24
	mr       r4, r27
	bl       calcSizeDraw__14J3DModelLoaderFPC12J3DDrawBlock
	add      r28, r28, r3

lbl_80087DA0:
	lwz      r0, 4(r27)
	addi     r26, r26, 1
	add      r27, r27, r0

lbl_80087DAC:
	cmplw    r26, r23
	blt      lbl_80087BF8
	mr       r3, r28
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80087DCC
 * @note Size: 0x90
 */
int J3DModelLoader::calcSizeInformation(const J3DModelInfoBlock* block, u32 flags)
{
	int size = 0;
	switch ((flags | block->mFlags) & J3DMLF_MtxTypeMask) {
	case 0: // Basic
		size = 4;
		break;
	case J3DMLF_MtxSoftImageCalc:
		size = 4;
		break;
	case J3DMLF_MtxMayaCalc:
		size = 4;
		break;
	default:
		break;
	}
	mHierarchy = JSUConvertOffsetToPtr<J3DModelHierarchy>(block, block->mHierarchyDataOffset);
	return size;
}

/**
 * @note Address: 0x80087E5C
 * @note Size: 0x2C
 */
int J3DModelLoader::calcSizeJoint(const J3DJointBlock* block)
{
	int size = 0;
	if (block->mNameTableOffset) {
		size = 0x10;
	}
	size += (block->mCount * sizeof(J3DJoint*));
	size += (block->mCount * sizeof(J3DJoint));
	return size;
}

/**
 * @note Address: 0x80087E88
 * @note Size: 0x10
 */
int J3DModelLoader::calcSizeEnvelope(const J3DEnvelopeBlock* block)
{
	_1A = block->mCount;
	return 0;
}

/**
 * @note Address: 0x80087E98
 * @note Size: 0x14
 */
int J3DModelLoader::calcSizeDraw(const J3DDrawBlock* block)
{
	return (block->mCount - _1A) * 2;
}

/**
 * @note Address: 0x80087EAC
 * @note Size: 0xE4
 */
size_t J3DModelLoader_v26::calcSizeMaterial(const J3DMaterialBlock* block, u32 flags)
{
	size_t size = 0;
	J3DMaterialFactory factory(*block);
	u32 count       = block->mNumMaterials;
	u16 uniqueCount = factory.countUniqueMaterials();
	if (block->mStringTableOffset != nullptr) {
		size += 0x10;
	}
	size += (count * sizeof(J3DMaterial*));
	if ((flags & J3DMLF_UseUniqueMaterials) != 0) {
		// calc for allocated materials as well
		size += ALIGN_NEXT((u16)uniqueCount * sizeof(J3DMaterial), 0x20);
	}
	if ((flags & J3DMLF_UseUniqueMaterials) != 0) {
		for (u32 i = 0; i < uniqueCount; i++) {
			size += factory.calcSize(nullptr, J3DMaterialFactory::NORMAL, i, flags);
		}
	}
	for (u32 i = 0; i < count; i++) {
		size += factory.calcSize(nullptr, J3DMaterialFactory::NORMAL, i, flags);
	}
	return size;
}

/**
 * @note Address: 0x80087F90
 * @note Size: 0xB4
 */
int J3DModelLoader::calcSizeShape(const J3DShapeBlock* block, u32 flags)
{
	int size = 0;
	J3DShapeFactory factory(*block);
	int count = block->mShapeNum;
	if (block->mNameTableOffset) {
		size = 0x10;
	}
	size += count * sizeof(J3DShape*);
	size += factory.calcSizeVcdVatCmdBuffer(count);
	for (J3DModelHierarchy* hierarchy = mHierarchy; hierarchy->mType != 0; hierarchy = hierarchy + 1) {
		if (hierarchy->mType == 0x12) {
			size += factory.calcSize(hierarchy->mValue, flags);
		}
	}
	return size;
}

/**
 * @note Address: 0x80088044
 * @note Size: 0x1C
 */
int J3DModelLoader::calcSizeTexture(const J3DTextureBlock* block)
{
	// TODO: use sizeofs here.
	int padding = 0;
	if (block->mTexNameOffset) {
		padding = 0x10;
	}
	return padding + 0xC;
}

inline size_t calcSizeForCount(J3DMaterialFactory& factory, u16 count, u32 flags, int padding)
{
	u32 size = padding + (count * sizeof(J3DMaterial*));
	for (u16 i = 0; i < count; i++) {
		size += factory.calcSize(nullptr, J3DMaterialFactory::NORMAL, i, flags);
	}
	return size;
}

/**
 * @note Address: 0x80088060
 * @note Size: 0xA0
 */
size_t J3DModelLoader_v26::calcSizeMaterialTable(const J3DMaterialBlock* block, u32 flags)
{
	int size  = 0;
	u32 count = block->mNumMaterials;
	J3DMaterialFactory factory(*block);
	if (block->mStringTableOffset) {
		size = 0x10;
	}
	// return calcSizeForCount(factory, count, flags, padding);
	size += (count * sizeof(J3DMaterial*));
	for (u16 i = 0; (u16)i < (u16)count; i++) {
		size += factory.calcSize(nullptr, J3DMaterialFactory::NORMAL, (u16)i, flags);
	}
	return size;
}

/**
 * @note Address: 0x80088100
 * @note Size: 0x1C
 */
int J3DModelLoader::calcSizeTextureTable(const J3DTextureBlock* block)
{
	// TODO: use sizeofs here.
	int padding = 0;
	if (block->mTexNameOffset) {
		padding = 0x10;
	}
	return padding + 0xC;
}

/**
 * @note Address: 0x8008811C
 * @note Size: 0xA0
 */
int J3DModelLoader::calcSizePatchedMaterial(const J3DMaterialBlock* block, u32 flags)
{
	int padding = 0;
	u32 count   = block->mNumMaterials;
	J3DMaterialFactory factory(*block);
	if (block->mStringTableOffset) {
		padding = 0x10;
	}
	// return calcSizeForCount(factory, count, flags, padding);
	u32 size = padding + (count * sizeof(J3DMaterial*));
	for (u16 i = 0; (u16)i < (u16)count; i++) {
		size += factory.calcSize(nullptr, J3DMaterialFactory::PATCHED, (u16)i, flags);
	}
	return size;
}

/**
 * @note Address: 0x800881BC
 * @note Size: 0xD0
 */
int J3DModelLoader::calcSizeMaterialDL(const J3DMaterialDLBlock* block, u32 flags)
{
	size_t size = 0;
	J3DMaterialFactory factory(*block);
	u32 count;
	if (!_18) {
		count = block->mEntries;
		if (block->mStringTableOffset) {
			size = 0x10;
		}
		size += count * sizeof(J3DLockedMaterial*);
		for (u16 i = 0; (u16)i < count; i++) {
			size += factory.calcSize(nullptr, J3DMaterialFactory::LOCKED, (u16)i, flags);
		}
	} else {
		count = block->mEntries;
		for (u16 i = 0; (u16)i < count; i++) {
			size += factory.calcSize((J3DMaterial*)this, J3DMaterialFactory::LOCKED, (u16)i, flags);
		}
	}
	return size;
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stmw      r27, 0x9C(r1)
	  mr        r27, r3
	  mr        r29, r4
	  mr        r28, r5
	  addi      r3, r1, 0x8
	  li        r31, 0
	  bl        -0x1BBF4
	  lbz       r0, 0x18(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  lwz       r0, 0x20(r29)
	  lhz       r30, 0x8(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  li        r31, 0x10

	.loc_0x48:
	  rlwinm    r0,r30,2,0,29
	  li        r29, 0
	  add       r31, r31, r0
	  b         .loc_0x74

	.loc_0x58:
	  mr        r7, r28
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0x1
	  bl        -0x1A2E0
	  add       r31, r31, r3
	  addi      r29, r29, 0x1

	.loc_0x74:
	  rlwinm    r6,r29,0,16,31
	  cmplw     r6, r30
	  blt+      .loc_0x58
	  b         .loc_0xB8

	.loc_0x84:
	  lhz       r29, 0x8(r29)
	  li        r30, 0
	  b         .loc_0xAC

	.loc_0x90:
	  mr        r4, r27
	  mr        r7, r28
	  addi      r3, r1, 0x8
	  li        r5, 0x1
	  bl        -0x1A318
	  add       r31, r31, r3
	  addi      r30, r30, 0x1

	.loc_0xAC:
	  rlwinm    r6,r30,0,16,31
	  cmplw     r6, r29
	  blt+      .loc_0x90

	.loc_0xB8:
	  mr        r3, r31
	  lmw       r27, 0x9C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}
