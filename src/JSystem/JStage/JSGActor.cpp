#include "types.h"
#include "JSystem/JStage/TActor.h"

namespace JStage {
/**
 * @note Address: 0x80098990
 * @note Size: 0x60
 */
TActor::~TActor() { }

/**
 * @note Address: 0x800989F0
 * @note Size: 0x8
 */
int TActor::JSGFGetType() const { return 2; }

/**
 * @note Address: 0x800989F8
 * @note Size: 0x4
 */
void TActor::JSGGetTranslation(Vec*) const { }

/**
 * @note Address: 0x800989FC
 * @note Size: 0x4
 */
void TActor::JSGSetTranslation(Vec const&) { }

/**
 * @note Address: 0x80098A00
 * @note Size: 0x4
 */
void TActor::JSGGetScaling(Vec*) const { }

/**
 * @note Address: 0x80098A04
 * @note Size: 0x4
 */
void TActor::JSGSetScaling(Vec const&) { }

/**
 * @note Address: 0x80098A08
 * @note Size: 0x4
 */
void TActor::JSGGetRotation(Vec*) const { }

/**
 * @note Address: 0x80098A0C
 * @note Size: 0x4
 */
void TActor::JSGSetRotation(Vec const&) { }

/**
 * @note Address: 0x80098A10
 * @note Size: 0x8
 */
int TActor::JSGGetShape() const { return -1; }

/**
 * @note Address: 0x80098A18
 * @note Size: 0x4
 */
void TActor::JSGSetShape(u32) { }

/**
 * @note Address: 0x80098A1C
 * @note Size: 0x8
 */
int TActor::JSGGetAnimation() const { return -1; }

/**
 * @note Address: 0x80098A24
 * @note Size: 0x4
 */
void TActor::JSGSetAnimation(u32) { }

/**
 * @note Address: 0x80098A28
 * @note Size: 0x8
 */
f32 TActor::JSGGetAnimationFrame() const { return 0.0f; }

/**
 * @note Address: 0x80098A30
 * @note Size: 0x4
 */
void TActor::JSGSetAnimationFrame(f32) { }

/**
 * @note Address: 0x80098A34
 * @note Size: 0x8
 */
f32 TActor::JSGGetAnimationFrameMax() const { return 0.0f; }

/**
 * @note Address: 0x80098A3C
 * @note Size: 0x8
 */
f32 TActor::JSGGetAnimationTransition() const { return 0.0f; }

/**
 * @note Address: 0x80098A44
 * @note Size: 0x4
 */
void TActor::JSGSetAnimationTransition(f32) { }

/**
 * @note Address: 0x80098A48
 * @note Size: 0x8
 */
int TActor::JSGGetTextureAnimation() const { return -1; }

/**
 * @note Address: 0x80098A50
 * @note Size: 0x4
 */
void TActor::JSGSetTextureAnimation(u32) { }

/**
 * @note Address: 0x80098A54
 * @note Size: 0x8
 */
f32 TActor::JSGGetTextureAnimationFrame() const { return 0.0f; }

/**
 * @note Address: 0x80098A5C
 * @note Size: 0x4
 */
void TActor::JSGSetTextureAnimationFrame(f32) { }

/**
 * @note Address: 0x80098A60
 * @note Size: 0x8
 */
f32 TActor::JSGGetTextureAnimationFrameMax() const { return 0.0f; }
} // namespace JStage
