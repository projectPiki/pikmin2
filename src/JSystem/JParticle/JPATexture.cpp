#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JParticle/JPATexture.h"

/**
 * __ct__10JPATextureFPCUc
 *
 * @note Address: 0x800986A0
 * @note Size: 0x68
 */
JPATexture::JPATexture(const u8* p1)
    : mTexture()
    , mData((JPATextureData*)p1)
{
	mTexture.storeTIMG(&mData->mResTIMG, (u8)'\0');
}

/**
 * @note Address: 0x80098708
 * @note Size: 0x64
 */
JPATexture::~JPATexture() { }
