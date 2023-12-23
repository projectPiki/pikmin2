#include "types.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "fdlibm.h"
#include "math.h"
#include "Dolphin/gx.h"

/**
 * __ct
 *
 * @note Address: 0x80035DC8
 * @note Size: 0x4C
 */
J2DPerspGraph::J2DPerspGraph()
    : J2DGrafContext(0.0f, 0.0f, 0.0f, 0.0f)
{
}

/**
 * @note Address: 0x80035E14
 * @note Size: 0x60
 */
void J2DPerspGraph::set(f32 fovY, f32 f2, f32 f3)
{
	setFovy(fovY);
	_C0 = f2;
	_C4 = f3;
	setLookat();
}

/**
 * @note Address: 0x80035E74
 * @note Size: 0x2C
 */
void J2DPerspGraph::setFovy(f32 fovY)
{
	mFovY = fovY;
	if (fovY < 1.0f) {
		mFovY = 1.0f;
	} else if (fovY > 179.0f) {
		mFovY = 179.0f;
	}
}

/**
 * @note Address: 0x80035EA0
 * @note Size: 0x68
 */
void J2DPerspGraph::setPort()
{
	J2DGrafContext::setPort();
	C_MTXPerspective(mMtx44, mFovY, mBounds.getWidth() / mBounds.getHeight(), _C0, _C4);
	GXSetProjection(mMtx44, GX_PERSPECTIVE);
}

/**
 * @note Address: 0x80035F08
 * @note Size: 0x68
 */
void J2DPerspGraph::setLookat()
{
	f32 tanTheta = tan(mFovY * PI / 360.0f);
	_C8          = (mBounds.getHeight() / 2) / tanTheta;
	makeLookat();
}

/**
 * @note Address: 0x80035F70
 * @note Size: 0xA0
 */
void J2DPerspGraph::makeLookat()
{
	f32 width  = (mBounds.f.x + mBounds.i.x) / 2;
	f32 height = (mBounds.f.y + mBounds.i.y) / 2;

	Vec pos;
	pos.x = width;
	pos.y = height;
	pos.z = -(_C8);

	Vec dest;
	dest.x = width;
	dest.y = height;
	dest.z = 0.0f;

	Vec up;
	up.x = 0.0f;
	up.y = -1.0f;
	up.z = 0.0f;

	C_MTXLookAt(mPosMtx, &pos, &up, &dest);
	GXLoadPosMtxImm(mPosMtx, 0);
}
