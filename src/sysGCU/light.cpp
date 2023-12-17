#include "Light.h"
#include "Graphics.h"
#include "Viewport.h"
#include "nans.h"

/*
 * --INFO--
 * Address:	8042B46C
 * Size:	0000C4
 * Matches with fuckry... had to remove the changes because
 * breaks build elsewhere, wtf is going on?
 */
LightObj::LightObj(char* name, GXLightID lightID, ELightTypeFlag typeFlag, JUtility::TColor color)
    : mLightID(lightID)
    , mTypeFlag(typeFlag)
    , mPosition(0.0f, 1000.0f, 0.0f)
    , mElevation(0.0f, -1.0f, 0.0f)
    , mColor(color.toUInt32())
{
	mBrightness    = 1.0f;
	mRefDistance   = 1000.0f;
	mRefBrightness = 1.0f;
	mCutoffAngle   = 60.0f;

	mDistAttnFn   = GX_DA_GENTLE;
	mSpotFn       = GX_SP_COS2;
	mKScale       = 16.0f;
	mSphereRadius = 30.0f;
	mFlags        = 0;

	setName(name);
}

/*
 * --INFO--
 * Address:	8042B530
 * Size:	0002DC
 */
void LightObj::set(Matrixf& mtx)
{
	JUtility::TColor color;

	f32 rCol = mColor.r * mBrightness;
	if (rCol > 255.0f) {
		rCol = 255.0f;
	}
	color.r = rCol;

	f32 gCol = mColor.g * mBrightness;
	if (gCol > 255.0f) {
		gCol = 255.0f;
	}
	color.g = gCol;

	f32 bCol = mColor.b * mBrightness;
	if (bCol > 255.0f) {
		bCol = 255.0f;
	}
	color.b = bCol;

	f32 aCol = mColor.a * mBrightness;
	if (aCol > 255.0f) {
		aCol = 255.0f;
	}
	color.a = aCol;

	GXLightObj lightObj;
	GXInitLightColor(&lightObj, color);

	Matrixf invMtx, tposeMtx;
	Vec r1, r2;
	Vector3f pos;
	Vector3f* posPtr = &pos;
	switch (mTypeFlag) {
	case TYPE_1:
		pos = mtx.mtxMult(mPosition);
		GXInitLightPos(&lightObj, pos.x, pos.y, pos.z);
		break;

	case TYPE_Spot:
		pos = mtx.mtxMult(mPosition);
		GXInitLightPos(&lightObj, pos.x, pos.y, pos.z);

		PSMTXInverse(mtx.mMatrix.mtxView, invMtx.mMatrix.mtxView);
		PSMTXTranspose(invMtx.mMatrix.mtxView, tposeMtx.mMatrix.mtxView);
		pos = tposeMtx.mtxMult(mElevation);

		GXInitLightDir(&lightObj, pos.x, pos.y, pos.z);
		GXInitLightSpot(&lightObj, mCutoffAngle, static_cast<GXSpotFn>(mSpotFn));
		GXInitLightDistAttn(&lightObj, mRefDistance, mRefBrightness, static_cast<GXDistAttnFn>(mDistAttnFn));
		break;

	case TYPE_Spec:
		PSMTXInverse(mtx.mMatrix.mtxView, invMtx.mMatrix.mtxView);
		PSMTXTranspose(invMtx.mMatrix.mtxView, tposeMtx.mMatrix.mtxView);
		pos = tposeMtx.mtxMult(mElevation);
		GXInitSpecularDir(&lightObj, pos.x, pos.y, pos.z);
		f32 k = mKScale / 2;
		GXInitLightAttn(&lightObj, 0.0f, 0.0f, 1.0f, k, 0.0f, 1.0f - k);
		break;
	}

	GXLoadLightObjImm(&lightObj, static_cast<GXLightID>(mLightID));
}

/*
 * --INFO--
 * Address:	8042B80C
 * Size:	00005C
 */
void LightObj::drawPos(Graphics& gfx) { drawPos(gfx, *gfx.mCurrentViewport->getMatrix(false)); }

/*
 * --INFO--
 * Address:	8042B868
 * Size:	00007C
 */
void LightObj::drawPos(Graphics& gfx, Camera& cam)
{
	cam.setProjection();
	drawPos(gfx, *cam.getViewMatrix(false));
}

/*
 * --INFO--
 * Address:	8042B8E4
 * Size:	0001A8
 */
void LightObj::drawPos(Graphics& gfx, Matrixf& mtx)
{
	if (mFlags & 1) {
		gfx.initPrimDraw(&mtx);

		Matrixf debugMtx;
		debugMtx.makeT(mPosition);
		gfx.mDrawColor.set(mColor);
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
}

/*
 * --INFO--
 * Address:	8042BA8C
 * Size:	0000D8
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

/*
 * --INFO--
 * Address:	8042BB64
 * Size:	00003C
 */
void LightMgr::registLightObj(LightObj* light)
{
	mLightObjChain.add(light);
	mLightCount++;
}

/*
 * --INFO--
 * Address:	8042BBA0
 * Size:	000050
 */
void LightMgr::set(Graphics& gfx)
{
	Matrixf& mtx = *gfx.mCurrentViewport->getMatrix(1);
	set(mtx);
}

/*
 * --INFO--
 * Address:	8042BBF0
 * Size:	000094
 */
void LightMgr::set(Matrixf& mtx)
{
	GXColor color = mAmbientLight.mColor.toGXColor();
	GXSetChanAmbColor(GX_COLOR0A0, color);

	FOREACH_NODE(LightObj, mLightObjChain.mChild, light) { light->set(mtx); }
}

/*
 * --INFO--
 * Address:	8042BC84
 * Size:	00005C
 */
void LightMgr::drawDebugInfo(Graphics& gfx)
{
	FOREACH_NODE(LightObj, mLightObjChain.mChild, light) { light->drawPos(gfx); }
}
