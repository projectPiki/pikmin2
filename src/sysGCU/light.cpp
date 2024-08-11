#include "Light.h"
#include "Graphics.h"
#include "Viewport.h"
#include "nans.h"

/**
 * @note Address: 0x8042B46C
 * @note Size: 0xC4
 *
 */
LightObj::LightObj(char* name, GXLightID lightID, ELightTypeFlag lightType, JUtility::TColor lightColor)
    : mLightID(lightID)
    , mTypeFlag(lightType)
    , mPosition(0.0f, 1000.0f, 0.0f)
    , mElevation(0.0f, -1.0f, 0.0f)
    , mColor(lightColor.toUInt32())
{
	mBrightness    = 1.0f;
	mRefDistance   = 1000.0f;
	mRefBrightness = 1.0f;
	mCutoffAngle   = 60.0f;

	mDistAttnFn   = GX_DA_GENTLE;
	mSpotFn       = GX_SP_COS2;
	mKScale       = 16.0f;
	mSphereRadius = 30.0f;
	mDebugState   = LDS_None;

	setName(name);
}

/**
 * @brief Scales the input color by the specified brightness factor.
 *
 * @param input The input color value to be scaled.
 * @param output The output color value after scaling.
 * @param brightness The brightness factor to scale the input color by.
 */
inline void ScaleColor(u8& input, u8& output, f32 brightness)
{
	f32 xCol = input * brightness;
	if (xCol > 255.0f) {
		xCol = 255.0f;
	}
	output = xCol;
}

/**
 * @note Address: 0x8042B530
 * @note Size: 0x2DC
 */
void LightObj::set(Matrixf& posMtx)
{
	JUtility::TColor color;
	ScaleColor(mColor.r, color.r, mBrightness);
	ScaleColor(mColor.g, color.g, mBrightness);
	ScaleColor(mColor.b, color.b, mBrightness);
	ScaleColor(mColor.a, color.a, mBrightness);

	GXLightObj lightObj;
	GXInitLightColor(&lightObj, color);

	Matrixf invMtx, tposeMtx;
	Vector3f pos;

#if MATCHING
	Vector3f* posPtr = &pos; // INTNS: Required for matching compile.
#endif

	switch (mTypeFlag) {
	case TYPE_1:
		pos = posMtx.mtxMult(mPosition);
		GXInitLightPos(&lightObj, pos.x, pos.y, pos.z);
		break;

	case TYPE_Spot:
		pos = posMtx.mtxMult(mPosition);
		GXInitLightPos(&lightObj, pos.x, pos.y, pos.z);

		PSMTXInverse(posMtx.mMatrix.mtxView, invMtx.mMatrix.mtxView);
		PSMTXTranspose(invMtx.mMatrix.mtxView, tposeMtx.mMatrix.mtxView);

		pos = tposeMtx.mtxMult(mElevation);
		GXInitLightDir(&lightObj, pos.x, pos.y, pos.z);

		GXInitLightSpot(&lightObj, mCutoffAngle, static_cast<GXSpotFn>(mSpotFn));
		GXInitLightDistAttn(&lightObj, mRefDistance, mRefBrightness, static_cast<GXDistAttnFn>(mDistAttnFn));
		break;

	case TYPE_Spec:
		PSMTXInverse(posMtx.mMatrix.mtxView, invMtx.mMatrix.mtxView);
		PSMTXTranspose(invMtx.mMatrix.mtxView, tposeMtx.mMatrix.mtxView);

		pos = tposeMtx.mtxMult(mElevation);
		GXInitSpecularDir(&lightObj, pos.x, pos.y, pos.z);

		f32 k = mKScale / 2;
		GXInitLightAttn(&lightObj, 0.0f, 0.0f, 1.0f, k, 0.0f, 1.0f - k);
		break;
	}

	GXLoadLightObjImm(&lightObj, static_cast<GXLightID>(mLightID));
}

/**
 * @note Address: 0x8042B80C
 * @note Size: 0x5C
 */
void LightObj::drawPos(Graphics& gfx) { drawPos(gfx, *gfx.mCurrentViewport->getMatrix(false)); }

/**
 * @note Address: 0x8042B868
 * @note Size: 0x7C
 */
void LightObj::drawPos(Graphics& gfx, Camera& cam)
{
	cam.setProjection();
	drawPos(gfx, *cam.getViewMatrix(false));
}

/**
 * @note Address: 0x8042B8E4
 * @note Size: 0x1A8
 */
void LightObj::drawPos(Graphics& gfx, Matrixf& transformationMtx)
{
	// If the debug flag is not set, return.
	if (!(mDebugState & LDS_DrawDebug)) {
		return;
	}

	gfx.initPrimDraw(&transformationMtx);

	Matrixf debugMtx;
	debugMtx.makeT(mPosition);

	gfx.mDrawColor.set(mColor);

	// Debug draw the light position based on type.
	Vector3f pos;
	switch (mTypeFlag) {
	case TYPE_Spec: {
		Vector3f elev = mElevation;
		elev *= mSphereRadius * 10.0f;
		pos = mPosition + elev;

		gfx.drawLine(mPosition, pos);
		gfx.drawSphere(10.0f, &debugMtx);
		break;
	}
	case TYPE_Spot: {
		gfx.drawSphere(10.0f, &debugMtx);

		Vector3f elev = mElevation;
		elev *= mSphereRadius * 10.0f;
		pos = mPosition + elev;

		gfx.drawCone(mPosition, pos, mCutoffAngle, 16);
		break;
	}
	case TYPE_1: {
		gfx.drawSphere(10.0f, &debugMtx);
		gfx.drawSphere(mSphereRadius * 10.0f, &debugMtx);
		break;
	}
	}
}

/**
 * @note Address: 0x8042BA8C
 * @note Size: 0xD8
 */
LightMgr::LightMgr(char* name)
    : CNode(name)
    , mAmbientLight("アンビエントライト")
    , mLightObjChain("ライト")
    , mLightCount(0)
{
	add(&mAmbientLight);
	add(&mLightObjChain);
}

/**
 * @note Address: 0x8042BB64
 * @note Size: 0x3C
 */
void LightMgr::registLightObj(LightObj* light)
{
	mLightObjChain.add(light);
	mLightCount++;
}

/**
 * @note Address: 0x8042BBA0
 * @note Size: 0x50
 */
void LightMgr::set(Graphics& gfx)
{
	Matrixf& mtx = *gfx.mCurrentViewport->getMatrix(true);
	set(mtx);
}

/**
 * @note Address: 0x8042BBF0
 * @note Size: 0x94
 */
void LightMgr::set(Matrixf& mtx)
{
	GXColor color = mAmbientLight.mColor.toGXColor();
	GXSetChanAmbColor(GX_COLOR0A0, color);

	FOREACH_NODE(LightObj, mLightObjChain.mChild, light) { light->set(mtx); }
}

/**
 * @note Address: 0x8042BC84
 * @note Size: 0x5C
 */
void LightMgr::drawDebugInfo(Graphics& gfx)
{
	FOREACH_NODE(LightObj, mLightObjChain.mChild, light) { light->drawPos(gfx); }
}
