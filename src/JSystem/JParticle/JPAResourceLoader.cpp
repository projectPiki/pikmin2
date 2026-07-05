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

	u32 resourceOffset = 0x10;
	for (int i = 0; i < GetTypeFromByteStream(p1, u16, 0x08); i++) {
		JPAResourceHeader* header = (JPAResourceHeader*)(p1 + resourceOffset);
		JPAResource* resource     = new (heap, 0) JPAResource;
		resource->mFieldBlockNum  = header->mFieldBlockNum;
		resource->mFieldBlocks    = (resource->mFieldBlockNum != 0 ? new (heap, 0) JPAFieldBlock*[resource->mFieldBlockNum] : nullptr);
		resource->mKeyBlockNum    = header->mKeyBlockNum;
		resource->mKeyBlocks      = (resource->mKeyBlockNum != 0 ? new (heap, 0) JPAKeyBlock*[resource->mKeyBlockNum] : nullptr);
		resource->mTDB1Num        = header->mTDB1Num;
		resource->mTextureIDList  = nullptr;

		resourceOffset += 8;
		u32 fieldBlockIndex = 0;
		u32 keyBlockIndex   = 0;

		resource->mUsrIdx = header->mUsrIdx;
		for (int j = 0; j < header->mBlockNum; j++) {
			u32 magic       = *(u32*)(p1 + resourceOffset);
			u32 blockLength = *(u32*)(p1 + resourceOffset + 4);

			switch (magic) {
			case 'FLD1':
				resource->mFieldBlocks[fieldBlockIndex] = new (heap, 0) JPAFieldBlock(p1 + resourceOffset, heap);
				fieldBlockIndex++;
				break;
			case 'KFA1':
				resource->mKeyBlocks[keyBlockIndex] = new (heap, 0) JPAKeyBlock(p1 + resourceOffset);
				keyBlockIndex++;
				break;
			case 'BEM1':
				resource->mDynamicsBlock = new (heap, 0) JPADynamicsBlock(p1 + resourceOffset);
				break;
			case 'BSP1':
				resource->mBaseShape = new (heap, 0) JPABaseShape(p1 + resourceOffset, heap);
				break;
			case 'ESP1':
				resource->mExtraShape = new (heap, 0) JPAExtraShape(p1 + resourceOffset);
				break;
			case 'SSP1':
				resource->mChildShape = new (heap, 0) JPAChildShape(p1 + resourceOffset);
				break;
			case 'ETX1':
				resource->mExTexShape = new (heap, 0) JPAExTexShape(p1 + resourceOffset);
				break;
			case 'TDB1':
				resource->mTextureIDList = (u16*)(p1 + resourceOffset + 8);
				break;
			}
			resourceOffset += blockLength;
		}
		resource->init(heap);
		manager->registRes(resource);
	}

	const u8* p2;
	int textureOffset = GetTypeFromByteStream(p1, u32, 0xC);
	for (int i = 0; i < GetTypeFromByteStream(p1, u16, 0xA); i++) {
		p2       = p1 + textureOffset;
		int size = GetTypeFromByteStream(p2, u32, 4);
		manager->registTex(new (heap, 0) JPATexture(p2));
		textureOffset += size;
	}
}
