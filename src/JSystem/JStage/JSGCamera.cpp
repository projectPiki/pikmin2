#include "JSystem/JStage/TSystem.h"
#include "types.h"
#include "float.h"
#include "Dolphin/vec.h"
#include "JSystem/JStage/TCamera.h"
#include "JSystem/JStage/TObject.h"

namespace JStage {

/**
 * @note Address: 0x800987F4
 * @note Size: 0x60
 */
TCamera::~TCamera() { }

/**
 * @note Address: 0x80098854
 * @note Size: 0x8
 */
int TCamera::JSGFGetType() const { return TEO_Camera; }

/**
 * @note Address: 0x8009885C
 * @note Size: 0x8
 */
int TCamera::JSGGetProjectionType() const { return 1; }

/**
 * @note Address: 0x80098864
 * @note Size: 0x4
 */
void TCamera::JSGSetProjectionType(TECameraProjection) { }

/**
 * @note Address: 0x80098868
 * @note Size: 0x8
 */
f32 TCamera::JSGGetProjectionNear() const { return 0.0f; }

/**
 * @note Address: 0x80098870
 * @note Size: 0x4
 */
void TCamera::JSGSetProjectionNear(f32) { return; }

/**
 * @note Address: 0x80098874
 * @note Size: 0xC
 */
f32 TCamera::JSGGetProjectionFar() const { return FLT_MAX; }

/**
 * @note Address: 0x80098880
 * @note Size: 0x4
 */
void TCamera::JSGSetProjectionFar(f32) { }

/**
 * @note Address: 0x80098884
 * @note Size: 0x8
 */
f32 TCamera::JSGGetProjectionFovy() const { return 0.0f; }

/**
 * @note Address: 0x8009888C
 * @note Size: 0x4
 */
void TCamera::JSGSetProjectionFovy(f32) { }

/**
 * @note Address: 0x80098890
 * @note Size: 0x8
 */
f32 TCamera::JSGGetProjectionAspect() const { return 0.0f; }

/**
 * @note Address: 0x80098898
 * @note Size: 0x4
 */
void TCamera::JSGSetProjectionAspect(f32) { }

/**
 * @note Address: 0x8009889C
 * @note Size: 0x4
 */
void TCamera::JSGGetProjectionField(f32*) const { }

/**
 * @note Address: 0x800988A0
 * @note Size: 0x4
 */
void TCamera::JSGSetProjectionField(const f32*) { }

/**
 * @note Address: 0x800988A4
 * @note Size: 0x8
 */
int TCamera::JSGGetViewType() const { return 1; }

/**
 * @note Address: 0x800988AC
 * @note Size: 0x4
 */
void TCamera::JSGSetViewType(TECameraView) { }

/**
 * @note Address: 0x800988B0
 * @note Size: 0x4
 */
void TCamera::JSGGetViewPosition(Vec*) const { }

/**
 * @note Address: 0x800988B4
 * @note Size: 0x4
 */
void TCamera::JSGSetViewPosition(const Vec&) { }

/**
 * @note Address: 0x800988B8
 * @note Size: 0x4
 */
void TCamera::JSGGetViewUpVector(Vec*) const { }

/**
 * @note Address: 0x800988BC
 * @note Size: 0x4
 */
void TCamera::JSGSetViewUpVector(const Vec&) { }

/**
 * @note Address: 0x800988C0
 * @note Size: 0x4
 */
void TCamera::JSGGetViewTargetPosition(Vec*) const { }

/**
 * @note Address: 0x800988C4
 * @note Size: 0x4
 */
void TCamera::JSGSetViewTargetPosition(const Vec&) { }

/**
 * @note Address: 0x800988C8
 * @note Size: 0x8
 */
f32 TCamera::JSGGetViewRoll() const { return 0.0f; }

/**
 * @note Address: 0x800988D0
 * @note Size: 0x4
 */
void TCamera::JSGSetViewRoll(f32) { }
} // namespace JStage
