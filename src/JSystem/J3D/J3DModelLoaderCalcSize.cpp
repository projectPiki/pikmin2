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

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	80087900
 * Size:	000040
 */
u16 J3DModelLoader::countMaterialNum(const void* stream)
{
	const J3DFileHeader* header   = (const J3DFileHeader*)stream;
	u32 count                     = header->m_blockCount;
	const J3DFileBlockBase* block = header->getFirstBlock();
	for (int i = 0; i < count; block = block->getNext(), i++) {
		if (block->m_blockType == J3DFBT_Material) {
			return ((const J3DMaterialBlock*)block)->m_count;
		}
	}
	return 0;
}

/*
 * --INFO--
 * Address:	80087940
 * Size:	0001B0
 */
int J3DModelLoader::calcLoadSize(const void* stream, u32 flags)
{
	const J3DFileHeader* header       = reinterpret_cast<const J3DFileHeader*>(stream);
	u32 blockCount                    = header->m_blockCount;
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	// TODO: What sizeof will get us a size of 0xE4?
	int size = 0xE4;
	for (u32 i = 0; i < blockCount; i++) {
		switch (nextBlock->m_blockType) {
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, 0x4D415432@ha
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r3
	lwz      r25, 0xc(r4)
	mr       r27, r5
	addi     r29, r4, 0x20
	addi     r31, r6, 0x4D415432@l
	li       r28, 0
	li       r30, 0xe4
	b        lbl_80087AD0

lbl_80087974:
	lwz      r4, 0(r29)
	cmpw     r4, r31
	beq      lbl_80087AC4
	bge      lbl_800879D4
	lis      r3, 0x494E4631@ha
	addi     r0, r3, 0x494E4631@l
	cmpw     r4, r0
	beq      lbl_80087A24
	bge      lbl_800879C0
	lis      r3, 0x45565031@ha
	addi     r0, r3, 0x45565031@l
	cmpw     r4, r0
	beq      lbl_80087AA0
	bge      lbl_80087AC4
	lis      r3, 0x44525731@ha
	addi     r0, r3, 0x44525731@l
	cmpw     r4, r0
	beq      lbl_80087AB4
	b        lbl_80087AC4

lbl_800879C0:
	lis      r3, 0x4A4E5431@ha
	addi     r0, r3, 0x4A4E5431@l
	cmpw     r4, r0
	beq      lbl_80087A3C
	b        lbl_80087AC4

lbl_800879D4:
	lis      r3, 0x54455831@ha
	addi     r0, r3, 0x54455831@l
	cmpw     r4, r0
	beq      lbl_80087A8C
	bge      lbl_80087A10
	lis      r3, 0x53485031@ha
	addi     r0, r3, 0x53485031@l
	cmpw     r4, r0
	beq      lbl_80087A74
	bge      lbl_80087AC4
	lis      r3, 0x4D415434@ha
	addi     r0, r3, 0x4D415434@l
	cmpw     r4, r0
	bge      lbl_80087AC4
	b        lbl_80087A50

lbl_80087A10:
	lis      r3, 0x56545831@ha
	addi     r0, r3, 0x56545831@l
	cmpw     r4, r0
	beq      lbl_80087AC4
	b        lbl_80087AC4

lbl_80087A24:
	mr       r3, r26
	mr       r4, r29
	mr       r5, r27
	bl       calcSizeInformation__14J3DModelLoaderFPC17J3DModelInfoBlockUl
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087A3C:
	mr       r3, r26
	mr       r4, r29
	bl       calcSizeJoint__14J3DModelLoaderFPC13J3DJointBlock
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087A50:
	mr       r3, r26
	mr       r4, r29
	lwz      r12, 0(r26)
	mr       r5, r27
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087A74:
	mr       r3, r26
	mr       r4, r29
	mr       r5, r27
	bl       calcSizeShape__14J3DModelLoaderFPC13J3DShapeBlockUl
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087A8C:
	mr       r3, r26
	mr       r4, r29
	bl       calcSizeTexture__14J3DModelLoaderFPC15J3DTextureBlock
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087AA0:
	mr       r3, r26
	mr       r4, r29
	bl       calcSizeEnvelope__14J3DModelLoaderFPC16J3DEnvelopeBlock
	add      r30, r30, r3
	b        lbl_80087AC4

lbl_80087AB4:
	mr       r3, r26
	mr       r4, r29
	bl       calcSizeDraw__14J3DModelLoaderFPC12J3DDrawBlock
	add      r30, r30, r3

lbl_80087AC4:
	lwz      r0, 4(r29)
	addi     r28, r28, 1
	add      r29, r29, r0

lbl_80087AD0:
	cmplw    r28, r25
	blt      lbl_80087974
	mr       r3, r30
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80087AF0
 * Size:	0000CC
 */
int J3DModelLoader::calcLoadMaterialTableSize(const void* stream)
{
	const J3DFileHeader* header = reinterpret_cast<const J3DFileHeader*>(stream);
	// u32 blockCount              = header->m_blockCount;
	// const J3DFileBlockBase* nextBlock = reinterpret_cast<const J3DFileBlockBase*>(reinterpret_cast<const J3DFileHeader*>(stream) + 1);
	// const u32 blockCount              = ;
	bool hasTextureTable              = false;
	u32 i                             = 0;
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	// TODO: What sizeof will get us a size of 0x20? Is this just the file header???
	size_t size = 0x20;
	for (; i < header->m_blockCount; i++) {
		switch (nextBlock->m_blockType) {
		case J3DFBT_MaterialV21:
			break;
		case J3DFBT_Material:
			size += calcSizeMaterialTable((const J3DMaterialBlock*)nextBlock, J3DMLF_21 | J3DMLF_25 | J3DMLF_29 | J3DMLF_31);
			break;
		case J3DFBT_Texture:
			size += calcSizeTextureTable((const J3DTextureBlock*)nextBlock);
			hasTextureTable = true;
			break;
		}
		// nextBlock = reinterpret_cast<const J3DFileBlockBase*>(reinterpret_cast<const u8*>(nextBlock) + nextBlock->m_size);
		nextBlock = nextBlock->getNext();
	}
	if (!hasTextureTable) {
		size += 0xC;
	}
	return size;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, 0x4D415433@ha
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r3
	lwz      r31, 0xc(r4)
	addi     r28, r4, 0x20
	addi     r30, r5, 0x4D415433@l
	li       r27, 0
	li       r26, 0
	li       r29, 0x20
	b        lbl_80087B90

lbl_80087B24:
	lwz      r4, 0(r28)
	cmpw     r4, r30
	beq      lbl_80087B4C
	bge      lbl_80087B38
	b        lbl_80087B84

lbl_80087B38:
	lis      r3, 0x54455831@ha
	addi     r0, r3, 0x54455831@l
	cmpw     r4, r0
	beq      lbl_80087B70
	b        lbl_80087B84

lbl_80087B4C:
	mr       r3, r25
	mr       r4, r28
	lwz      r12, 0(r25)
	lis      r5, 0x5110
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	add      r29, r29, r3
	b        lbl_80087B84

lbl_80087B70:
	mr       r3, r25
	mr       r4, r28
	bl       calcSizeTextureTable__14J3DModelLoaderFPC15J3DTextureBlock
	add      r29, r29, r3
	li       r27, 1

lbl_80087B84:
	lwz      r0, 4(r28)
	addi     r26, r26, 1
	add      r28, r28, r0

lbl_80087B90:
	cmplw    r26, r31
	blt      lbl_80087B24
	clrlwi.  r0, r27, 0x18
	bne      lbl_80087BA4
	addi     r29, r29, 0xc

lbl_80087BA4:
	mr       r3, r29
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80087BBC
 * Size:	000210
 */
int J3DModelLoader::calcLoadBinaryDisplayListSize(const void* stream, u32 flags)
{
	const J3DFileHeader* header       = (const J3DFileHeader*)stream;
	u32 blockCount                    = header->m_blockCount;
	const J3DFileBlockBase* nextBlock = header->getFirstBlock();
	u32 matFlags                      = flags & (J3DMLF_25 | J3DMLF_26);
	int size                          = sizeof(J3DModelData);
	for (u32 i = 0; i < blockCount; i++) {
		switch (nextBlock->m_blockType) {
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
			m_materialBlock = (const J3DMaterialBlock*)nextBlock;
			matFlags |= (J3DMLF_21 | J3DMLF_29 | J3DMLF_31);
			if ((flags & (J3DMLF_13 | J3DMLF_14)) == 0) {
				_18 = 1;
				size += calcSizeMaterial((const J3DMaterialBlock*)nextBlock, matFlags);
			} else if ((flags & (J3DMLF_13 | J3DMLF_14)) == J3DMLF_14) {
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

/*
 * --INFO--
 * Address:	80087DCC
 * Size:	000090
 */
int J3DModelLoader::calcSizeInformation(const J3DModelInfoBlock* block, u32 flags)
{
	int size = 0;
	switch ((flags | block->_08) & (J3DMLF_MtxCalc_SoftImage | J3DMLF_MtxCalc_Maya | J3DMLF_03 | J3DMLF_04)) {
	case 0:
		size = 4;
		break;
	case J3DMLF_MtxCalc_SoftImage:
		size = 4;
		break;
	case J3DMLF_MtxCalc_Maya:
		size = 4;
		break;
	default:
		break;
	}
	m_hierarchy = JSUConvertOffsetToPtr<J3DModelHierarchy>(block, block->_14);
	return size;
}

/*
 * --INFO--
 * Address:	80087E5C
 * Size:	00002C
 */
int J3DModelLoader::calcSizeJoint(const J3DJointBlock* block)
{
	int size = 0;
	if (block->_14) {
		size = 0x10;
	}
	size += (block->_08 * sizeof(J3DJoint*));
	size += (block->_08 * sizeof(J3DJoint));
	return size;
}

/*
 * --INFO--
 * Address:	80087E88
 * Size:	000010
 */
int J3DModelLoader::calcSizeEnvelope(const J3DEnvelopeBlock* block)
{
	_1A = block->m_count;
	return 0;
}

/*
 * --INFO--
 * Address:	80087E98
 * Size:	000014
 */
int J3DModelLoader::calcSizeDraw(const J3DDrawBlock* block) { return (block->m_count - _1A) * 2; }

/*
 * --INFO--
 * Address:	80087EAC
 * Size:	0000E4
 */
u32 J3DModelLoader_v26::calcSizeMaterial(const J3DMaterialBlock* block, u32 flags)
{
	int padding = 0;
	J3DMaterialFactory factory(*block);
	u16 count       = block->m_count;
	u32 uniqueCount = factory.countUniqueMaterials();
	if (block->_14) {
		padding = 0x10;
	}
	u32 size = padding + (count * sizeof(J3DMaterial*));
	// TODO: the casting of uniqueCount smells like a u16 argument to an inline
	if (flags & J3DMLF_22) {
		// calc for allocated materials as well
		size += ALIGN_NEXT((u16)uniqueCount * sizeof(J3DMaterial), 0x20);
		for (u16 i = 0; i < (u16)uniqueCount; i++) {
			size += factory.calcSize(nullptr, J3DMaterialFactory::NORMAL, i, flags);
		}
	}
	for (u32 i = 0; i < count; i++) {
		size += factory.calcSize(nullptr, J3DMaterialFactory::NORMAL, i, flags);
	}
	return size;
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  addi      r3, r1, 0x8
	  stmw      r27, 0x9C(r1)
	  mr        r28, r4
	  mr        r27, r5
	  li        r31, 0
	  bl        -0x1BB28
	  lhz       r30, 0x8(r28)
	  addi      r3, r1, 0x8
	  bl        -0x1B864
	  lwz       r0, 0x14(r28)
	  rlwinm    r29,r3,0,16,31
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  li        r31, 0x10

	.loc_0x44:
	  rlwinm.   r4,r27,0,10,10
	  rlwinm    r0,r30,2,0,29
	  add       r31, r31, r0
	  beq-      .loc_0x64
	  mulli     r3, r29, 0x4C
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  add       r31, r31, r0

	.loc_0x64:
	  cmplwi    r4, 0
	  beq-      .loc_0x9C
	  li        r28, 0
	  b         .loc_0x94

	.loc_0x74:
	  mr        r6, r28
	  mr        r7, r27
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0
	  bl        -0x19FF0
	  add       r31, r31, r3
	  addi      r28, r28, 0x1

	.loc_0x94:
	  cmplw     r28, r29
	  blt+      .loc_0x74

	.loc_0x9C:
	  li        r28, 0
	  b         .loc_0xC4

	.loc_0xA4:
	  mr        r6, r28
	  mr        r7, r27
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1A020
	  add       r31, r31, r3
	  addi      r28, r28, 0x1

	.loc_0xC4:
	  cmplw     r28, r30
	  blt+      .loc_0xA4
	  mr        r3, r31
	  lmw       r27, 0x9C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087F90
 * Size:	0000B4
 */
int J3DModelLoader::calcSizeShape(const J3DShapeBlock* block, u32 flags)
{
	int size = 0;
	J3DShapeFactory factory(*block);
	int count = block->_08;
	if (block->_14) {
		size = 0x10;
	}
	size += count * sizeof(J3DShape*);
	size += factory.calcSizeVcdVatCmdBuffer(count);
	for (J3DModelHierarchy* hierarchy = m_hierarchy; hierarchy->_00 != 0; hierarchy = hierarchy + 1) {
		if (hierarchy->_00 == 0x12) {
			size += factory.calcSize(hierarchy->_02, flags);
		}
	}
	return size;
}

/*
 * --INFO--
 * Address:	80088044
 * Size:	00001C
 */
int J3DModelLoader::calcSizeTexture(const J3DTextureBlock* block)
{
	// TODO: use sizeofs here.
	int padding = 0;
	if (block->_10) {
		padding = 0x10;
	}
	return padding + 0xC;
}

inline u32 calcSizeForCount(J3DMaterialFactory& factory, u16 count, u32 flags, int padding)
{
	u32 size = padding + (count * sizeof(J3DMaterial*));
	for (u16 i = 0; i < count; i++) {
		size += factory.calcSize(nullptr, J3DMaterialFactory::NORMAL, i, flags);
	}
	return size;
}

/*
 * --INFO--
 * Address:	80088060
 * Size:	0000A0
 */
u32 J3DModelLoader_v26::calcSizeMaterialTable(const J3DMaterialBlock* block, u32 flags)
{
	int size  = 0;
	u32 count = block->m_count;
	J3DMaterialFactory factory(*block);
	if (block->_14) {
		size = 0x10;
	}
	// return calcSizeForCount(factory, count, flags, padding);
	size += (count * sizeof(J3DMaterial*));
	for (int i = 0; (u16)i < (u16)count; i++) {
		size += factory.calcSize(nullptr, J3DMaterialFactory::NORMAL, (u16)i, flags);
	}
	return size;
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  addi      r3, r1, 0x8
	  stw       r31, 0x9C(r1)
	  li        r31, 0
	  stw       r30, 0x98(r1)
	  lhz       r30, 0x8(r4)
	  stw       r29, 0x94(r1)
	  mr        r29, r4
	  stw       r28, 0x90(r1)
	  mr        r28, r5
	  bl        -0x1BCEC
	  lwz       r0, 0x14(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  li        r31, 0x10

	.loc_0x44:
	  rlwinm    r0,r30,2,0,29
	  li        r29, 0
	  add       r31, r31, r0
	  b         .loc_0x70

	.loc_0x54:
	  mr        r7, r28
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1A180
	  add       r31, r31, r3
	  addi      r29, r29, 0x1

	.loc_0x70:
	  rlwinm    r6,r29,0,16,31
	  cmplw     r6, r30
	  blt+      .loc_0x54
	  lwz       r0, 0xA4(r1)
	  mr        r3, r31
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  lwz       r28, 0x90(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088100
 * Size:	00001C
 */
int J3DModelLoader::calcSizeTextureTable(const J3DTextureBlock* block)
{
	// TODO: use sizeofs here.
	int padding = 0;
	if (block->_10) {
		padding = 0x10;
	}
	return padding + 0xC;
}

/*
 * --INFO--
 * Address:	8008811C
 * Size:	0000A0
 */
int J3DModelLoader::calcSizePatchedMaterial(const J3DMaterialBlock* block, u32 flags)
{
	int padding = 0;
	u32 count   = block->m_count;
	J3DMaterialFactory factory(*block);
	if (block->_14) {
		padding = 0x10;
	}
	// return calcSizeForCount(factory, count, flags, padding);
	u32 size = padding + (count * sizeof(J3DMaterial*));
	for (int i = 0; (u16)i < (u16)count; i++) {
		size += factory.calcSize(nullptr, J3DMaterialFactory::PATCHED, (u16)i, flags);
	}
	return size;
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  addi      r3, r1, 0x8
	  stw       r31, 0x9C(r1)
	  li        r31, 0
	  stw       r30, 0x98(r1)
	  lhz       r30, 0x8(r4)
	  stw       r29, 0x94(r1)
	  mr        r29, r4
	  stw       r28, 0x90(r1)
	  mr        r28, r5
	  bl        -0x1BDA8
	  lwz       r0, 0x14(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  li        r31, 0x10

	.loc_0x44:
	  rlwinm    r0,r30,2,0,29
	  li        r29, 0
	  add       r31, r31, r0
	  b         .loc_0x70

	.loc_0x54:
	  mr        r7, r28
	  addi      r3, r1, 0x8
	  li        r4, 0
	  li        r5, 0x2
	  bl        -0x1A23C
	  add       r31, r31, r3
	  addi      r29, r29, 0x1

	.loc_0x70:
	  rlwinm    r6,r29,0,16,31
	  cmplw     r6, r30
	  blt+      .loc_0x54
	  lwz       r0, 0xA4(r1)
	  mr        r3, r31
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  lwz       r28, 0x90(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800881BC
 * Size:	0000D0
 */
int J3DModelLoader::calcSizeMaterialDL(const J3DMaterialDLBlock* block, u32 flags)
{
	int size = 0;
	J3DMaterialFactory factory(*block);
	u16 count;
	if (!this->_18) {
		count = block->_08;
		if (block->_20) {
			size = 0x10;
		}
		size += count * sizeof(J3DLockedMaterial*);
		for (int i = 0; (u16)i < count; i++) {
			size += factory.calcSize(nullptr, J3DMaterialFactory::LOCKED, (u16)i, flags);
		}
	} else {
		count = block->_08;
		size += count * sizeof(J3DLockedMaterial*);
		for (int i = 0; (u16)i < count; i++) {
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
