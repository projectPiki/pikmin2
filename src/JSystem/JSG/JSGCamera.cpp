#include "types.h"
#include "Dolphin/float.h"
#include "Dolphin/vec.h"
#include "JStage/TCamera.h"
#include "JStage/TObject.h"

namespace JStage {

typedef struct TECameraProjection {
};
typedef struct TECameraView {
};

/*
 * --INFO--
 * Address:	800987F4
 * Size:	000060
 */
TCamera::~TCamera(void) { }

/*
 * --INFO--
 * Address:	80098854
 * Size:	000008
 */
int TCamera::JSGFGetType() const { return 3; }

/*
 * --INFO--
 * Address:	8009885C
 * Size:	000008
 */
int TCamera::JSGGetProjectionType() const { return 1; }

/*
 * --INFO--
 * Address:	80098864
 * Size:	000004
 */
void TCamera::JSGSetProjectionType(TECameraProjection) { }

/*
 * --INFO--
 * Address:	80098868
 * Size:	000008
 */
f32 TCamera::JSGGetProjectionNear() const { return 0.0f; }

/*
 * --INFO--
 * Address:	80098870
 * Size:	000004
 */
void TCamera::JSGSetProjectionNear(float) { }

/*
 * --INFO--
 * Address:	80098874
 * Size:	00000C
 */
f32 TCamera::JSGGetProjectionFar() const { return *__float_max; }

/*
 * --INFO--
 * Address:	80098880
 * Size:	000004
 */
void TCamera::JSGSetProjectionFar(float) { }

/*
 * --INFO--
 * Address:	80098884
 * Size:	000008
 */
f32 TCamera::JSGGetProjectionFovy() const { return 0.0f; }

/*
 * --INFO--
 * Address:	8009888C
 * Size:	000004
 */
void TCamera::JSGSetProjectionFovy(float) { }

/*
 * --INFO--
 * Address:	80098890
 * Size:	000008
 */
f32 TCamera::JSGGetProjectionAspect() const { return 0.0f; }

/*
 * --INFO--
 * Address:	80098898
 * Size:	000004
 */
void TCamera::JSGSetProjectionAspect(float) { }

/*
 * --INFO--
 * Address:	8009889C
 * Size:	000004
 */
void TCamera::JSGGetProjectionField(float*) const { }

/*
 * --INFO--
 * Address:	800988A0
 * Size:	000004
 */
void TCamera::JSGSetProjectionField(const float*) { }

/*
 * --INFO--
 * Address:	800988A4
 * Size:	000008
 */
int TCamera::JSGGetViewType() const { return 1; }

/*
 * --INFO--
 * Address:	800988AC
 * Size:	000004
 */
void TCamera::JSGSetViewType(TECameraView) { }

/*
 * --INFO--
 * Address:	800988B0
 * Size:	000004
 */
void TCamera::JSGGetViewPosition(Vec*) const { }

/*
 * --INFO--
 * Address:	800988B4
 * Size:	000004
 */
void TCamera::JSGSetViewPosition(const Vec&) { }

/*
 * --INFO--
 * Address:	800988B8
 * Size:	000004
 */
void TCamera::JSGGetViewUpVector(Vec*) const { }

/*
 * --INFO--
 * Address:	800988BC
 * Size:	000004
 */
void TCamera::JSGSetViewUpVector(const Vec&) { }

/*
 * --INFO--
 * Address:	800988C0
 * Size:	000004
 */
void TCamera::JSGGetViewTargetPosition(Vec*) const { }

/*
 * --INFO--
 * Address:	800988C4
 * Size:	000004
 */
void TCamera::JSGSetViewTargetPosition(const Vec&) { }

/*
 * --INFO--
 * Address:	800988C8
 * Size:	000008
 */
f32 TCamera::JSGGetViewRoll() const { return 0.0f; }

/*
 * --INFO--
 * Address:	800988D0
 * Size:	000004
 */
void TCamera::JSGSetViewRoll(float) { }
} // namespace JStage
