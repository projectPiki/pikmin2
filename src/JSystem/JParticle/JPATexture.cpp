#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JParticle/JPATexture.h"

/*
 * __ct__10JPATextureFPCUc
 *
 * --INFO--
 * Address:	800986A0
 * Size:	000068
 */
JPATexture::JPATexture(const u8* p1)
    : mTexture()
    , mData((JPATextureData*)p1)
{
	mTexture.storeTIMG(&mData->mResTIMG, (u8)'\0');
}

/*
 * --INFO--
 * Address:	80098708
 * Size:	000064
 */
JPATexture::~JPATexture() { }
