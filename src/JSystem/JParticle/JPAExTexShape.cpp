#include "JSystem/JParticle/JPAShape.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "Dolphin/gx.h"

// TODO: replace GX functions with proper enumerated values

/**
 * @note Address: 0x80090F2C
 * @note Size: 0xFC
 */
void JPALoadExTex(JPAEmitterWorkData* work)
{
	GXTexCoordID result = GX_TEXCOORD1;

	JPAExTexShape* exTexShape = work->mResource->mExTexShape;
	if (IS_FLAG(exTexShape->mData->mFlags, 1)) {
		GXSetTexCoordGen2(result, GX_TG_MTX3X4, GX_TG_TEX0, 60, GX_FALSE, 125);
		u8 texIdx = exTexShape->getIndTexIdx() & 0xFF;
		work->mResourceMgr->load(work->mResource->getTexIdx(texIdx), GX_TEXMAP2);
		result = GX_TEXCOORD2;
	}

	if (IS_FLAG(exTexShape->mData->mFlags, 0x100)) {
		GXSetTexCoordGen2(result, GX_TG_MTX3X4, GX_TG_TEX0, 60, GX_FALSE, 125);
		u8 texIdx = exTexShape->getSecTexIdx() & 0xFF;
		work->mResourceMgr->load(work->mResource->getTexIdx(texIdx), GX_TEXMAP3);
	}
}

/**
 * @note Address: 0x80091028
 * @note Size: 0x8
 */
JPAExTexShape::JPAExTexShape(const u8* data)
    : mData((JPAExTexShapeData*)data)
{
}

/**
 * @note Address: N/A
 * @note Size: 0xD8
 */
void JPAExTexShape::init_jpa(const u8*, JKRHeap*)
{
	// UNUSED FUNCTION
}
