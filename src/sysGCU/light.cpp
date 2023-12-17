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

	Mtx m1, m2;
	Vec r1, r2;
	switch (mTypeFlag) {
	case TYPE_1:
		PSMTXMultVec(mtx.mMatrix.mtxView, (Vec*)&mPosition, &r1);
		volatile Vector3f vec(r1);
		GXInitLightPos(&lightObj, vec.x, vec.y, vec.z);
		break;
	case TYPE_Spot:
		PSMTXMultVec(mtx.mMatrix.mtxView, (Vec*)&mElevation, &r1);
		volatile Vector3f vec2(r1);
		// probably some inline or something, the volatile definitely isnt right but the extra vector3 needs to generate
		GXInitLightPos(&lightObj, vec2.x, vec2.y, vec2.z);

		PSMTXInverse(mtx.mMatrix.mtxView, m1);
		PSMTXTranspose(m1, m2);
		PSMTXMultVec(m2, (Vec*)&mElevation, &r2);
		Vector3f vec3(r1);

		GXInitLightDir(&lightObj, vec3.x, vec3.y, vec3.z);
		GXInitLightSpot(&lightObj, mCutoffAngle, static_cast<GXSpotFn>(mSpotFn));
		GXInitLightDistAttn(&lightObj, mRefDistance, mRefBrightness, static_cast<GXDistAttnFn>(mDistAttnFn));
		break;
	case TYPE_Spec:
		PSMTXInverse(mtx.mMatrix.mtxView, m1);
		PSMTXTranspose(m1, m2);
		PSMTXMultVec(m2, (Vec*)&mElevation, &r1);
		volatile Vector3f vec4(r1);
		GXInitSpecularDir(&lightObj, vec4.x, vec4.y, vec4.z);
		f32 k = mKScale * 0.5f;
		GXInitLightAttn(&lightObj, 0.0f, 0.0f, 1.0f, mKScale * 0.5f, 0.0f, 1.0f - k);
		break;
	}

	GXLoadLightObjImm(&lightObj, static_cast<GXLightID>(mLightID));
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	li       r5, -1
	lfd      f3, lbl_805205D0@sda21(r2)
	stw      r0, 0x144(r1)
	lis      r0, 0x4330
	lfs      f0, lbl_805205C4@sda21(r2)
	stw      r31, 0x13c(r1)
	mr       r31, r4
	stw      r30, 0x138(r1)
	mr       r30, r3
	lbz      r3, 0x34(r3)
	stw      r0, 0xf0(r1)
	lfs      f1, 0x38(r30)
	stw      r3, 0xf4(r1)
	lfd      f2, 0xf0(r1)
	stw      r5, 0xc(r1)
	fsubs    f2, f2, f3
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8042B588
	fmr      f1, f0

lbl_8042B588:
	lbz      r3, 0x35(r30)
	lis      r0, 0x4330
	fctiwz   f3, f1
	stw      r0, 0x100(r1)
	lfd      f2, lbl_805205D0@sda21(r2)
	stw      r3, 0x104(r1)
	lfs      f1, 0x38(r30)
	lfd      f0, 0x100(r1)
	stfd     f3, 0xf8(r1)
	fsubs    f2, f0, f2
	lfs      f0, lbl_805205C4@sda21(r2)
	lwz      r0, 0xfc(r1)
	fmuls    f1, f2, f1
	stb      r0, 0xc(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_8042B5CC
	fmr      f1, f0

lbl_8042B5CC:
	lbz      r3, 0x36(r30)
	lis      r0, 0x4330
	fctiwz   f3, f1
	stw      r0, 0x110(r1)
	lfd      f2, lbl_805205D0@sda21(r2)
	stw      r3, 0x114(r1)
	lfs      f1, 0x38(r30)
	lfd      f0, 0x110(r1)
	stfd     f3, 0x108(r1)
	fsubs    f2, f0, f2
	lfs      f0, lbl_805205C4@sda21(r2)
	lwz      r0, 0x10c(r1)
	fmuls    f1, f2, f1
	stb      r0, 0xd(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_8042B610
	fmr      f1, f0

lbl_8042B610:
	lbz      r3, 0x37(r30)
	lis      r0, 0x4330
	fctiwz   f3, f1
	stw      r0, 0x120(r1)
	lfd      f2, lbl_805205D0@sda21(r2)
	stw      r3, 0x124(r1)
	lfs      f1, 0x38(r30)
	lfd      f0, 0x120(r1)
	stfd     f3, 0x118(r1)
	fsubs    f2, f0, f2
	lfs      f0, lbl_805205C4@sda21(r2)
	lwz      r0, 0x11c(r1)
	fmuls    f1, f2, f1
	stb      r0, 0xe(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_8042B654
	fmr      f1, f0

lbl_8042B654:
	fctiwz   f0, f1
	addi     r3, r1, 0xac
	addi     r4, r1, 8
	stfd     f0, 0x128(r1)
	lwz      r0, 0x12c(r1)
	stb      r0, 0xf(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl       GXInitLightColor
	lbz      r0, 0x19(r30)
	cmpwi    r0, 3
	beq      lbl_8042B7E8
	bge      lbl_8042B698
	cmpwi    r0, 1
	beq      lbl_8042B6A4
	bge      lbl_8042B6D8
	b        lbl_8042B7E8

lbl_8042B698:
	cmpwi    r0, 5
	bge      lbl_8042B7E8
	b        lbl_8042B778

lbl_8042B6A4:
	mr       r3, r31
	addi     r4, r30, 0x1c
	addi     r5, r1, 0x34
	bl       PSMTXMultVec
	lfs      f1, 0x34(r1)
	addi     r3, r1, 0xac
	lfs      f2, 0x38(r1)
	lfs      f3, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f3, 0x48(r1)
	bl       GXInitLightPos
	b        lbl_8042B7E8

lbl_8042B6D8:
	mr       r3, r31
	addi     r4, r30, 0x1c
	addi     r5, r1, 0x28
	bl       PSMTXMultVec
	lfs      f1, 0x28(r1)
	addi     r3, r1, 0xac
	lfs      f2, 0x2c(r1)
	lfs      f3, 0x30(r1)
	stfs     f1, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f3, 0x48(r1)
	bl       GXInitLightPos
	mr       r3, r31
	addi     r4, r1, 0x7c
	bl       PSMTXInverse
	addi     r3, r1, 0x7c
	addi     r4, r1, 0x4c
	bl       PSMTXTranspose
	addi     r3, r1, 0x4c
	addi     r4, r30, 0x28
	addi     r5, r1, 0x1c
	bl       PSMTXMultVec
	lfs      f1, 0x1c(r1)
	addi     r3, r1, 0xac
	lfs      f2, 0x20(r1)
	lfs      f3, 0x24(r1)
	stfs     f1, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f3, 0x48(r1)
	bl       GXInitLightDir
	lfs      f1, 0x44(r30)
	addi     r3, r1, 0xac
	lbz      r4, 0x49(r30)
	bl       GXInitLightSpot
	lfs      f1, 0x3c(r30)
	addi     r3, r1, 0xac
	lfs      f2, 0x40(r30)
	lbz      r4, 0x48(r30)
	bl       GXInitLightDistAttn
	b        lbl_8042B7E8

lbl_8042B778:
	mr       r3, r31
	addi     r4, r1, 0x7c
	bl       PSMTXInverse
	addi     r3, r1, 0x7c
	addi     r4, r1, 0x4c
	bl       PSMTXTranspose
	addi     r3, r1, 0x4c
	addi     r4, r30, 0x28
	addi     r5, r1, 0x10
	bl       PSMTXMultVec
	lfs      f1, 0x10(r1)
	addi     r3, r1, 0xac
	lfs      f2, 0x14(r1)
	lfs      f3, 0x18(r1)
	stfs     f1, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f3, 0x48(r1)
	bl       GXInitSpecularDir
	lfs      f2, 0x4c(r30)
	addi     r3, r1, 0xac
	lfs      f0, lbl_805205C8@sda21(r2)
	lfs      f1, lbl_805205A8@sda21(r2)
	fmuls    f4, f2, f0
	lfs      f3, lbl_805205B4@sda21(r2)
	fmr      f2, f1
	fmr      f5, f1
	fsubs    f6, f3, f4
	bl       GXInitLightAttn

lbl_8042B7E8:
	lbz      r4, 0x18(r30)
	addi     r3, r1, 0xac
	bl       GXLoadLightObjImm
	lwz      r0, 0x144(r1)
	lwz      r31, 0x13c(r1)
	lwz      r30, 0x138(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
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

		switch (mTypeFlag) {
		case TYPE_Spec: {
			f32 radius   = mSphereRadius * 10.0f;
			Vector3f pos = mPosition + mElevation * radius;
			gfx.drawLine(mPosition, pos);
			gfx.drawSphere(10.0f, &debugMtx);
			break;
		}
		case TYPE_Spot: {
			gfx.drawSphere(10.0f, &debugMtx);
			f32 radius   = mSphereRadius * 10.0f;
			Vector3f pos = mPosition + mElevation * radius;
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

	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	lbz      r0, 0x54(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8042BA74
	mr       r3, r31
	mr       r4, r5
	bl       initPrimDraw__8GraphicsFP7Matrixf
	addi     r3, r1, 0x14
	addi     r4, r30, 0x1c
	bl       "makeT__7MatrixfFR10Vector3<f>"
	lbz      r5, 0x37(r30)
	lbz      r4, 0x36(r30)
	lbz      r3, 0x35(r30)
	lbz      r0, 0x34(r30)
	stb      r0, 0x84(r31)
	stb      r3, 0x85(r31)
	stb      r4, 0x86(r31)
	stb      r5, 0x87(r31)
	lbz      r0, 0x19(r30)
	cmpwi    r0, 3
	beq      lbl_8042BA74
	bge      lbl_8042B964
	cmpwi    r0, 1
	beq      lbl_8042BA4C
	bge      lbl_8042B9D8
	b        lbl_8042BA74

lbl_8042B964:
	cmpwi    r0, 5
	bge      lbl_8042BA74
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	lfs      f0, 0x50(r30)
	addi     r4, r30, 0x1c
	lfs      f4, 0x28(r30)
	addi     r5, r1, 8
	fmuls    f3, f1, f0
	lfs      f5, 0x2c(r30)
	lfs      f6, 0x30(r30)
	lfs      f2, 0x24(r30)
	fmuls    f6, f6, f3
	lfs      f1, 0x20(r30)
	fmuls    f5, f5, f3
	lfs      f0, 0x1c(r30)
	fmuls    f4, f4, f3
	fadds    f2, f2, f6
	fadds    f1, f1, f5
	fadds    f0, f0, f4
	stfs     f2, 0x10(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	bl       "drawLine__8GraphicsFR10Vector3<f>R10Vector3<f>"
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x14
	bl       drawSphere__8GraphicsFfP7Matrixf
	b        lbl_8042BA74

lbl_8042B9D8:
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x14
	bl       drawSphere__8GraphicsFfP7Matrixf
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	lfs      f0, 0x50(r30)
	addi     r4, r30, 0x1c
	lfs      f3, 0x28(r30)
	addi     r5, r1, 8
	fmuls    f1, f1, f0
	lfs      f4, 0x2c(r30)
	lfs      f5, 0x30(r30)
	li       r6, 0x10
	lfs      f2, 0x24(r30)
	fmuls    f5, f5, f1
	fmuls    f3, f3, f1
	lfs      f0, 0x1c(r30)
	fmuls    f4, f4, f1
	lfs      f1, 0x20(r30)
	fadds    f2, f2, f5
	fadds    f0, f0, f3
	fadds    f1, f1, f4
	stfs     f2, 0x10(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x44(r30)
	bl       "drawCone__8GraphicsFR10Vector3<f>R10Vector3<f>fi"
	b        lbl_8042BA74

lbl_8042BA4C:
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	addi     r4, r1, 0x14
	bl       drawSphere__8GraphicsFfP7Matrixf
	lfs      f1, lbl_805205D8@sda21(r2)
	mr       r3, r31
	lfs      f0, 0x50(r30)
	addi     r4, r1, 0x14
	fmuls    f1, f1, f0
	bl       drawSphere__8GraphicsFfP7Matrixf

lbl_8042BA74:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
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

/*
 * --INFO--
 * Address:	8042BCE0
 * Size:	000004
 */
void LightMgr::update() { }
