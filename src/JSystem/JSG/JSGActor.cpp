#include "types.h"
#include "JStage/TActor.h"

namespace JStage {
/*
 * --INFO--
 * Address:	80098990
 * Size:	000060
 */
TActor::~TActor(void) { }

/*
 * --INFO--
 * Address:	800989F0
 * Size:	000008
 */
int TActor::JSGFGetType() const { return 2; }

/*
 * --INFO--
 * Address:	800989F8
 * Size:	000004
 */
void TActor::JSGGetTranslation(Vec*) const { }

/*
 * --INFO--
 * Address:	800989FC
 * Size:	000004
 */
void TActor::JSGSetTranslation(Vec const&) { }

/*
 * --INFO--
 * Address:	80098A00
 * Size:	000004
 */
void TActor::JSGGetScaling(Vec*) const { }

/*
 * --INFO--
 * Address:	80098A04
 * Size:	000004
 */
void TActor::JSGSetScaling(Vec const&) { }

/*
 * --INFO--
 * Address:	80098A08
 * Size:	000004
 */
void TActor::JSGGetRotation(Vec*) const { }

/*
 * --INFO--
 * Address:	80098A0C
 * Size:	000004
 */
void TActor::JSGSetRotation(Vec const&) { }

/*
 * --INFO--
 * Address:	80098A10
 * Size:	000008
 */
int TActor::JSGGetShape() const { return -1; }

/*
 * --INFO--
 * Address:	80098A18
 * Size:	000004
 */
void TActor::JSGSetShape(unsigned long) { }

/*
 * --INFO--
 * Address:	80098A1C
 * Size:	000008
 */
int TActor::JSGGetAnimation() const { return -1; }

/*
 * --INFO--
 * Address:	80098A24
 * Size:	000004
 */
void TActor::JSGSetAnimation(unsigned long) { }

/*
 * --INFO--
 * Address:	80098A28
 * Size:	000008
 */
f32 TActor::JSGGetAnimationFrame() const { return 0.0f; }

/*
 * --INFO--
 * Address:	80098A30
 * Size:	000004
 */
void TActor::JSGSetAnimationFrame(float) { }

/*
 * --INFO--
 * Address:	80098A34
 * Size:	000008
 */
f32 TActor::JSGGetAnimationFrameMax() const { return 0.0f; }

/*
 * --INFO--
 * Address:	80098A3C
 * Size:	000008
 */
f32 TActor::JSGGetAnimationTransition() const { return 0.0f; }

/*
 * --INFO--
 * Address:	80098A44
 * Size:	000004
 */
void TActor::JSGSetAnimationTransition(float) { }

/*
 * --INFO--
 * Address:	80098A48
 * Size:	000008
 */
int TActor::JSGGetTextureAnimation() const { return -1; }

/*
 * --INFO--
 * Address:	80098A50
 * Size:	000004
 */
void TActor::JSGSetTextureAnimation(unsigned long) { }

/*
 * --INFO--
 * Address:	80098A54
 * Size:	000008
 */
f32 TActor::JSGGetTextureAnimationFrame() const { return 0.0f; }

/*
 * --INFO--
 * Address:	80098A5C
 * Size:	000004
 */
void TActor::JSGSetTextureAnimationFrame(float) { }

/*
 * --INFO--
 * Address:	80098A60
 * Size:	000008
 */
f32 TActor::JSGGetTextureAnimationFrameMax() const { return 0.0f; }
} // namespace JStage
