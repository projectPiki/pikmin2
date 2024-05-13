#include "JSystem/JParticle/JPABlock.h"
#include "JSystem/JParticle/JPAResource.h"
#include "JSystem/JParticle/JPAShape.h"
#include "JSystem/JParticle/JPATexture.h"
#include "types.h"

#define GetTypeFromByteStream(data, type, offset) (*(type*)((data) + (offset)))

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
JPAResourceLoader::JPAResourceLoader(const u8*, JPAResourceManager*, u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800980D8
 * @note Size: 0x40
 */
JPAResourceLoader::JPAResourceLoader(const u8* p1, JPAResourceManager* manager)
{
	if (*(int*)(p1 + 4) == '2-10') {
		load_jpc(p1, manager);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x390
 */
void JPAResourceLoader::load_jpa(const u8*, JPAResourceManager*, u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80098118
 * @note Size: 0x3B8
 */
void JPAResourceLoader::load_jpc(const u8* p1, JPAResourceManager* manager)
{
	JKRHeap* heap               = manager->mHeap;
	manager->mResourceSlotCount = GetTypeFromByteStream(p1, u16, 0x08);
	manager->mTextureSlotCount  = GetTypeFromByteStream(p1, u16, 0x0A);
	manager->mResources         = new (heap, 0) JPAResource*[manager->mResourceSlotCount];
	manager->mTextures          = new (heap, 0) JPATexture*[manager->mTextureSlotCount];
	u16 resourceSlotCount       = GetTypeFromByteStream(p1, u16, 0x08);
	int resourceOffset          = 0x10;
	for (int i = 0; i < resourceSlotCount; i++) {
		const u8* resourceData   = (p1 + resourceOffset);
		JPAResource* resource    = new (heap, 0) JPAResource;
		resource->mFieldBlockNum = resourceData[4];
		resource->mFieldBlocks   = (resource->mFieldBlockNum != 0 ? new (heap, 0) JPAFieldBlock*[resource->mFieldBlockNum] : nullptr);
		resource->mKeyBlockNum   = resourceData[5];
		resource->mKeyBlocks     = (resource->mKeyBlockNum != 0 ? new (heap, 0) JPAKeyBlock*[resource->mKeyBlockNum] : nullptr);
		int fieldBlockIndex      = 0;
		int keyBlockIndex        = fieldBlockIndex;
		resource->mTDB1Num       = resourceData[6];
		resource->mTextureIDList = nullptr;
		resourceOffset += 8;
		resource->mUsrIdx = *(u16*)resourceData;
		for (int j = 0; j < GetTypeFromByteStream(resourceData, u16, 2); j++) {
			const u8* blockData = (p1 + resourceOffset);
			int blockLength     = GetTypeFromByteStream(blockData, int, 4);
			switch (GetTypeFromByteStream(blockData, int, 0)) {
			case 'FLD1':
				resource->mFieldBlocks[fieldBlockIndex++] = new (heap, 0) JPAFieldBlock(blockData, heap);
				break;
			case 'KFA1':
				resource->mKeyBlocks[keyBlockIndex++] = new (heap, 0) JPAKeyBlock(blockData);
				break;
			case 'BEM1':
				resource->mDynamicsBlock = new (heap, 0) JPADynamicsBlock(blockData);
				break;
			case 'BSP1':
				resource->mBaseShape = new (heap, 0) JPABaseShape(blockData, heap);
				break;
			case 'ESP1':
				resource->mExtraShape = new (heap, 0) JPAExtraShape(blockData);
				break;
			case 'SSP1':
				resource->mChildShape = new (heap, 0) JPAChildShape(blockData);
				break;
			case 'ETX1':
				resource->mExTexShape = new (heap, 0) JPAExTexShape(blockData);
				break;
			case 'TDB1':
				resource->mTextureIDList = (u16*)(blockData + 8);
				break;
			}
			resourceOffset += blockLength;
		}
		resource->init(heap);
		manager->registRes(resource);
	}

	int texDataOffset = GetTypeFromByteStream(p1, int, 0xC);
	for (int texDataLength, i = 0; i < GetTypeFromByteStream(p1, u16, 0xA); i++, texDataOffset += texDataLength) {
		const u8* texData = p1 + texDataOffset;
		texDataLength     = GetTypeFromByteStream(texData, int, 4);
		manager->registTex(new (heap, 0) JPATexture(texData));
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lhz      r3, 8(r4)
	stw      r0, 0x44(r1)
	lhz      r0, 0xa(r4)
	stmw     r18, 8(r1)
	mr       r20, r5
	mr       r23, r4
	lwz      r30, 0(r5)
	li       r5, 0
	sth      r3, 0xc(r20)
	mr       r4, r30
	sth      r0, 0x10(r20)
	lhz      r0, 0xc(r20)
	slwi     r3, r0, 2
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 4(r20)
	mr       r4, r30
	li       r5, 0
	lhz      r0, 0x10(r20)
	slwi     r3, r0, 2
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, 0x464C4431@ha
	stw      r3, 8(r20)
	lhz      r18, 8(r23)
	addi     r22, r4, 0x464C4431@l
	li       r26, 0x10
	li       r19, 0
	b        lbl_80098460

lbl_8009818C:
	mr       r4, r30
	add      r24, r23, r26
	li       r3, 0x48
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_800981B0
	bl       __ct__11JPAResourceFv
	mr       r31, r3

lbl_800981B0:
	lbz      r0, 4(r24)
	stb      r0, 0x3e(r31)
	lbz      r0, 0x3e(r31)
	cmplwi   r0, 0
	beq      lbl_800981D8
	mr       r4, r30
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	b        lbl_800981DC

lbl_800981D8:
	li       r3, 0

lbl_800981DC:
	stw      r3, 0x30(r31)
	lbz      r0, 5(r24)
	stb      r0, 0x3f(r31)
	lbz      r0, 0x3f(r31)
	cmplwi   r0, 0
	beq      lbl_80098208
	mr       r4, r30
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	b        lbl_8009820C

lbl_80098208:
	li       r3, 0

lbl_8009820C:
	stw      r3, 0x34(r31)
	li       r29, 0
	lbz      r3, 6(r24)
	mr       r28, r29
	lhz      r0, 0(r24)
	li       r27, 0
	stb      r3, 0x40(r31)
	addi     r26, r26, 8
	stw      r29, 0x38(r31)
	sth      r0, 0x3c(r31)
	b        lbl_80098438

lbl_80098238:
	add      r21, r23, r26
	lwz      r4, 0(r21)
	lwz      r25, 4(r21)
	cmpw     r4, r22
	beq      lbl_800982DC
	bge      lbl_800982A0
	lis      r3, 0x45535031@ha
	addi     r0, r3, 0x45535031@l
	cmpw     r4, r0
	beq      lbl_800983A4
	bge      lbl_8009828C
	lis      r3, 0x42535031@ha
	addi     r0, r3, 0x42535031@l
	cmpw     r4, r0
	beq      lbl_80098374
	bge      lbl_80098430
	lis      r3, 0x42454D31@ha
	addi     r0, r3, 0x42454D31@l
	cmpw     r4, r0
	beq      lbl_80098348
	b        lbl_80098430

lbl_8009828C:
	lis      r3, 0x45545831@ha
	addi     r0, r3, 0x45545831@l
	cmpw     r4, r0
	beq      lbl_800983FC
	b        lbl_80098430

lbl_800982A0:
	lis      r3, 0x53535031@ha
	addi     r0, r3, 0x53535031@l
	cmpw     r4, r0
	beq      lbl_800983D0
	bge      lbl_800982C8
	lis      r3, 0x4B464131@ha
	addi     r0, r3, 0x4B464131@l
	cmpw     r4, r0
	beq      lbl_80098314
	b        lbl_80098430

lbl_800982C8:
	lis      r3, 0x54444231@ha
	addi     r0, r3, 0x54444231@l
	cmpw     r4, r0
	beq      lbl_80098428
	b        lbl_80098430

lbl_800982DC:
	mr       r4, r30
	li       r3, 0x2c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_80098304
	mr       r4, r21
	mr       r5, r30
	bl       __ct__13JPAFieldBlockFPCUcP7JKRHeap
	mr       r0, r3

lbl_80098304:
	lwz      r3, 0x30(r31)
	stwx     r0, r3, r29
	addi     r29, r29, 4
	b        lbl_80098430

lbl_80098314:
	mr       r4, r30
	li       r3, 8
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_80098338
	mr       r4, r21
	bl       __ct__11JPAKeyBlockFPCUc
	mr       r0, r3

lbl_80098338:
	lwz      r3, 0x34(r31)
	stwx     r0, r3, r28
	addi     r28, r28, 4
	b        lbl_80098430

lbl_80098348:
	mr       r4, r30
	li       r3, 8
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_8009836C
	mr       r4, r21
	bl       __ct__16JPADynamicsBlockFPCUc
	mr       r0, r3

lbl_8009836C:
	stw      r0, 0x2c(r31)
	b        lbl_80098430

lbl_80098374:
	mr       r4, r30
	li       r3, 0x14
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_8009839C
	mr       r4, r21
	mr       r5, r30
	bl       __ct__12JPABaseShapeFPCUcP7JKRHeap
	mr       r0, r3

lbl_8009839C:
	stw      r0, 0x1c(r31)
	b        lbl_80098430

lbl_800983A4:
	mr       r4, r30
	li       r3, 0x1c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800983C8
	mr       r4, r21
	bl       __ct__13JPAExtraShapeFPCUc
	mr       r0, r3

lbl_800983C8:
	stw      r0, 0x20(r31)
	b        lbl_80098430

lbl_800983D0:
	mr       r4, r30
	li       r3, 4
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800983F4
	mr       r4, r21
	bl       __ct__13JPAChildShapeFPCUc
	mr       r0, r3

lbl_800983F4:
	stw      r0, 0x24(r31)
	b        lbl_80098430

lbl_800983FC:
	mr       r4, r30
	li       r3, 4
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_80098420
	mr       r4, r21
	bl       __ct__13JPAExTexShapeFPCUc
	mr       r0, r3

lbl_80098420:
	stw      r0, 0x28(r31)
	b        lbl_80098430

lbl_80098428:
	addi     r0, r21, 8
	stw      r0, 0x38(r31)

lbl_80098430:
	add      r26, r26, r25
	addi     r27, r27, 1

lbl_80098438:
	lhz      r0, 2(r24)
	cmpw     r27, r0
	blt      lbl_80098238
	mr       r3, r31
	mr       r4, r30
	bl       init__11JPAResourceFP7JKRHeap
	mr       r3, r20
	mr       r4, r31
	bl       registRes__18JPAResourceManagerFP11JPAResource
	addi     r19, r19, 1

lbl_80098460:
	cmpw     r19, r18
	blt      lbl_8009818C
	lwz      r21, 0xc(r23)
	li       r22, 0
	lhz      r18, 0xa(r23)
	b        lbl_800984B4

lbl_80098478:
	add      r19, r23, r21
	mr       r4, r30
	lwz      r24, 4(r19)
	li       r3, 0x48
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r4, r3, r3
	beq      lbl_800984A4
	mr       r4, r19
	bl       __ct__10JPATextureFPCUc
	mr       r4, r3

lbl_800984A4:
	mr       r3, r20
	bl       registTex__18JPAResourceManagerFP10JPATexture
	add      r21, r21, r24
	addi     r22, r22, 1

lbl_800984B4:
	cmpw     r22, r18
	blt      lbl_80098478
	lmw      r18, 8(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}
