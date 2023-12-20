#include "string.h"
#include "JSystem/JParticle/JPABlock.h"
#include "JSystem/JParticle/JPAResource.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "JSystem/ResTIMG.h"

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
JPAResourceManager::JPAResourceManager(u16, u16, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800984D0
 * @note Size: 0x58
 */
JPAResourceManager::JPAResourceManager(const void* p1, JKRHeap* heap)
    : mResources(nullptr)
    , mTextures(nullptr)
    , mResourceSlotCount(0)
    , mResourceCount(0)
    , mTextureSlotCount(0)
    , mTextureCount(0)
{
	mHeap = heap;
	JPAResourceLoader loader((const u8*)p1, this);
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void JPAResourceManager::load(const char*, u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void JPAResourceManager::load(const void*, u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80098528
 * @note Size: 0x40
 */
JPAResource* JPAResourceManager::getResource(u16 p1) const
{
	for (u16 i = 0; i < mResourceCount; i++) {
		if (p1 == mResources[i]->getUsrIdx()) {
			return mResources[i];
		}
	}
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void JPAResourceManager::checkUserIndexDuplication(u16) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80098568
 * @note Size: 0x9C
 */
const ResTIMG* JPAResourceManager::swapTexture(const ResTIMG* img, const char* swapName)
{
	const ResTIMG* ret = nullptr;

	for (s32 i = 0; i < mTextureCount; i++) {
		if (strcmp(swapName, mTextures[i]->getName()) == 0) {
			JUTTexture* tex = mTextures[i]->getJUTTexture();
			ret             = tex->getTexInfo();
			tex->storeTIMG(img, (u8)0);
			break;
		}
	}
	return ret;
}

/**
 * @note Address: 0x80098604
 * @note Size: 0x20
 */
void JPAResourceManager::registRes(JPAResource* resource)
{
	mResources[mResourceCount] = resource;
	mResourceCount++;
}

/**
 * @note Address: 0x80098624
 * @note Size: 0x20
 */
void JPAResourceManager::registTex(JPATexture* texture)
{
	mTextures[mTextureCount] = texture;
	mTextureCount++;
}

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
void JPAResourceManager::registTexDupCheck(const u8*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80098644
 * @note Size: 0x5C
 */
u32 JPAResourceManager::getResUserWork(u16 usrIdx) const
{
	u32 ret = 0;

	JPAResource* res = getResource(usrIdx);
	if (res != nullptr)
		ret = res->getDyn()->getResUserWork();

	return ret;
}
