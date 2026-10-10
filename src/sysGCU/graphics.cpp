#include "Splitter.h"
#include "Viewport.h"
#include "Graphics.h"
#include "Camera.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J2D/J2DPrint.h"
#include "IDelegate.h"
#include "trig.h"
#include "nans.h"

int gScissorOffset;
char* Graphics::lastTokenName;

/**
 * @note Address: 0x80424E90
 * @note Size: 0x150
 */
HorizonalSplitter::HorizonalSplitter(Graphics* gfx)
{
	mGraphics = gfx;

	mBounds.set(sys->getRenderModeObj()->fbWidth, sys->getRenderModeObj()->efbHeight);

	gfx->allocateViewports(2);
	Viewport* vp1 = new Viewport;
	Viewport* vp2 = new Viewport;

	Rectf bounds1(0.0f, 0.0f, mBounds.p2.x, mBounds.p2.y * 0.5f);
	Rectf bounds2(0.0f, mBounds.p2.y * 0.5f, mBounds.p2.x, mBounds.p2.y);

	vp1->setRect(bounds1);
	vp2->setRect(bounds2);
	gfx->addViewport(vp1);
	gfx->addViewport(vp2);
}

/**
 * @note Address: 0x80424FE0
 * @note Size: 0xBC
 */
void HorizonalSplitter::split2(f32 split)
{
	Viewport* vp1 = mGraphics->getViewport(PLAYER1_VIEWPORT);
	Viewport* vp2 = mGraphics->getViewport(PLAYER2_VIEWPORT);

	vp1->mSplitRatio.y = split / 0.5f;
	vp2->mSplitRatio.y = (1.0f - split) / 0.5f;
	vp2->mOffset.y     = vp1->mSplitRatio.y * (vp1->mBounds.getHeight()) - mBounds.p2.y * 0.5f;

	vp1->refresh();
	vp2->refresh();
}

/**
 * @note Address: N/A
 * @note Size: 0x150
 */
VerticalSplitter::VerticalSplitter(Graphics*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
void VerticalSplitter::split2(f32)
{
	Viewport* vp1 = mGraphics->getViewport(PLAYER1_VIEWPORT);
	Viewport* vp2 = mGraphics->getViewport(PLAYER2_VIEWPORT);

	vp1->mSplitRatio.x = -1.0f;
	int y              = sys->getRenderModeObj()->efbHeight;
	int x              = sys->getRenderModeObj()->fbWidth;
	mBounds.p1         = 0.0f;
	mBounds.p2         = Vector2f(x, y);
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C8
 */
FourSplitter::FourSplitter(Graphics*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x16C
 */
void FourSplitter::split4(f32, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8042509C
 * @note Size: 0xC0
 */
Viewport::Viewport()
{
	mVpId = 0;

	u16 y       = sys->getRenderModeObj()->efbHeight;
	u16 x       = sys->getRenderModeObj()->fbWidth;
	mBounds.p1  = 0.0f;
	mBounds.p2  = Vector2f(x, y);
	mFlags      = 0;
	mCamera     = nullptr;
	mOffset     = Vector2f(0.0f);
	mSplitRatio = Vector2f(1.0f);
	refresh();
}

/**
 * @note Address: 0x8042515C
 * @note Size: 0x44
 */
Matrixf* Viewport::getMatrix(bool getCurrentViewMtx)
{
	if (mCamera) {
		return mCamera->getViewMatrix(getCurrentViewMtx);
	} else {
		return mViewMat;
	}
}

/**
 * @note Address: 0x804251A0
 * @note Size: 0x2C
 */
void Viewport::setProjection()
{
	if (mCamera) {
		mCamera->setProjection();
	}
}

/**
 * @note Address: 0x804251CC
 * @note Size: 0x74
 */
int Graphics::getNumActiveViewports()
{
	int ret = 0;
	for (int i = 0; i < mActiveViewports; i++) {
		if (getViewport(i)->viewable()) {
			ret++;
		}
	}
	return ret;
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void Viewport::getAspect()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80425240
 * @note Size: 0x50
 */
bool Viewport::viewable()
{
	if (mFlags & 1) {
		return false;
	}
	if (mBounds2.getWidth() < 1.0f || mBounds2.getHeight() < 1.0f) {
		return false;
	}

	return true;
}

/**
 * @note Address: 0x80425290
 * @note Size: 0x4C
 */
void Viewport::updateCameraAspect()
{
	if (!mCamera) {
		return;
	}

	f32 y = mBounds2.getHeight();
	f32 x = mBounds2.getWidth();
	f32 aspect;
	if (y == 0.0f || x == 0.0f) {
		aspect = 1.0f;
	} else {
		aspect = x / y;
	}
	mCamera->mAspectRatio = aspect;
}

/**
 * @note Address: 0x804252DC
 * @note Size: 0xA4
 */
void Viewport::refresh()
{
	f32 size_x = mSplitRatio.x * mBounds.getWidth();
	f32 size_y = mSplitRatio.y * mBounds.getHeight();
	Vector2f size(size_x, size_y);
	mBounds2.p1 = mBounds.p1 + mOffset;
	mBounds2.p2 = mBounds2.p1 + size;
	updateCameraAspect();
}

/**
 * @note Address: 0x80425380
 * @note Size: 0xC4
 */
void Viewport::setRect(Rectf& rect)
{
	mBounds = rect;
	refresh();
}

/**
 * @note Address: 0x80425444
 * @note Size: 0xD4
 */
void Viewport::setViewport()
{
	GXSetViewport(mBounds2.p1.x, mBounds2.p1.y, mBounds2.getWidth(), mBounds2.getHeight(), 0.0f, 1.0f);

	u32 x = mBounds2.getWidth();
	u32 y = mBounds2.getHeight();
	GXSetScissor(mBounds2.p1.x, mBounds2.p1.y, x, gScissorOffset + y);
}

/**
 * @note Address: N/A
 * @note Size: 0x1EC
 */
void Viewport::setOrthoGraph2d(J2DOrthoGraph&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80425518
 * @note Size: 0x50
 */
SysShape::Model* Viewport::setJ3DViewMtx(bool flag)
{
	Matrixf* mtx = getMatrix(flag);
	j3dSys.setViewMtx(mtx->mMatrix.mtxView);
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
void Viewport::draw2dframe(J2DGrafContext&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80425568
 * @note Size: 0x44
 */
void Graphics::allocateViewports(int vpNum)
{
	mMaxViewports    = vpNum;
	mViewports       = new Viewport*[mMaxViewports];
	mActiveViewports = 0;
}

/**
 * @note Address: 0x804255AC
 * @note Size: 0x14
 */
void Graphics::deleteViewports()
{
	mMaxViewports    = 0;
	mActiveViewports = 0;
	mViewports       = nullptr;
}

/**
 * @note Address: 0x804255C0
 * @note Size: 0x30
 */
void Graphics::addViewport(Viewport* vp)
{
	if (mMaxViewports <= mActiveViewports) {
		return;
	}
	vp->mVpId                      = mActiveViewports;
	mViewports[mActiveViewports++] = vp;
}

/**
 * @note Address: 0x804255F0
 * @note Size: 0x10
 */
Viewport* Graphics::getViewport(int id)
{
	return mViewports[id];
}

/**
 * @note Address: 0x80425600
 * @note Size: 0xE0
 */
void Graphics::mapViewport(IDelegate1<Viewport*>* delegate)
{
	for (int i = 0; i < mActiveViewports; i++) {
		Viewport* vp = getViewport(i);
		if (vp->viewable()) {
			mCurrentViewport = vp;
			delegate->invoke(mViewports[i]);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void Graphics::mapViewport(IDelegate2<Graphics&, Viewport*>*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x130
 */
void Graphics::renderJ3D()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
void Graphics::updateJ3D()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804256E0
 * @note Size: 0x30
 */
static void graphicsTokenCallback(u16 id)
{
	Graphics::lastTokenName = sys->mGfx->getTokenName(id);
}

/**
 * @note Address: 0x80425710
 * @note Size: 0x78
 */
void Graphics::setToken(char* tok)
{
	int id = findTokenIndex(tok);
	if (id == -1) {
		if (mActiveTokens < GRAPHICS_TOKEN_MAX) {
			mTokens[mActiveTokens] = tok;
			GXSetDrawSync(mActiveTokens);
			mActiveTokens++;
		}
	} else {
		GXSetDrawSync(id);
	}
}

/**
 * @note Address: 0x80425788
 * @note Size: 0x10
 */
char* Graphics::getTokenName(u16 id)
{
	return mTokens[id];
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
u16 Graphics::getToken()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80425798
 * @note Size: 0x84
 */
int Graphics::findTokenIndex(char* tok)
{
	for (int i = 0; i < mActiveTokens; i++) {
		if (!strcmp(mTokens[i], tok)) {
			return i;
		}
	}
	return -1;
}

/**
 * @note Address: 0x8042581C
 * @note Size: 0x1CC
 */
void Graphics::initPrimDraw(Matrixf* mtx)
{
	setToken("initPrimDraw");
	initGX();
	GXSetNumTevStages(1);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
	GXSetNumChans(1);
	GXSetChanCtrl(GX_COLOR0A0, GX_TRUE, GX_SRC_VTX, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	disableLight();
	clearVtxDesc();
	setVtxDesc(GX_VA_POS, GX_DIRECT);
	setVtxDesc(GX_VA_CLR0, GX_DIRECT);
	setVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	setVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
	GXSetCullMode(GX_CULL_NONE);
	if (mtx) {
		PSMTXCopy(mtx->mMatrix.mtxView, mMatrix.mMatrix.mtxView);
	}
	GXSetLineWidth(6, GX_TO_ZERO);
	GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ONE, GX_LO_CLEAR);
	GXSetZMode(GX_TRUE, GX_LESS, GX_TRUE);
	GXLoadPosMtxImm(mMatrix.mMatrix.mtxView, 0);
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
void Graphics::drawPoint(Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x12C
 */
void Graphics::drawPoint(Vector3f*, u16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804259E8
 * @note Size: 0xC4
 */
void Graphics::drawLine(Vector3f& start, Vector3f& end)
{
	GXBegin(GX_LINES, GX_VTXFMT0, 2);

	GXPosition3f32(start.x, start.y, start.z);
	GXColor4u8(mDrawColor.r, mDrawColor.g, mDrawColor.b, mDrawColor.a);

	GXPosition3f32(end.x, end.y, end.z);
	GXColor4u8(mDrawColor.r, mDrawColor.g, mDrawColor.b, mDrawColor.a);
}

/**
 * @note Address: N/A
 * @note Size: 0x2FC
 */
void Graphics::drawPlane(Plane&, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7F0
 */
void Graphics::drawBox(Vector3f&, Vector3f*, f32*, f32*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x790
 */
void Graphics::drawBox(Vector3f&, Vector3f&, Vector3f&, Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80425AAC
 * @note Size: 0x598
 */
void Graphics::drawSphere(Vector3f& position, f32 radius)
{
	Matrixf concatMtx; // 0x98
	for (int i = 0; i < 16; i++) {
		Matrixf srtMtx;                           // 0x68
		Vector3f scale(1.0f);                     // 0x2C
		Vector3f rot(0.0f, 0.3926991f * i, 0.0f); // 0x20

		srtMtx.makeSRT(scale, rot, position);

		PSMTXConcat(mMatrix.mMatrix.mtxView, srtMtx.mMatrix.mtxView, concatMtx.mMatrix.mtxView);
		GXLoadPosMtxImm(concatMtx.mMatrix.mtxView, 0);

		for (int j = 0; j < 16; j++) {
			f32 theta = 0.3926991f * (f32)(j);
			f32 phi   = 0.3926991f * (f32)((j + 1) % 32);
			Vector3f start(radius * sinf(theta), radius * cosf(theta), 0.0f);
			Vector3f end(radius * sinf(phi), radius * cosf(phi), 0.0f);
			drawLine(start, end);
		}
	}

	for (int i = 0; i < 16; i++) {
		Matrixf srtMtx;                           // 0x68
		Vector3f scale(1.0f);                     // 0x2C
		Vector3f rot(0.3926991f * i, 0.0f, 0.0f); // 0x20

		srtMtx.makeSRT(scale, rot, position);

		PSMTXConcat(mMatrix.mMatrix.mtxView, srtMtx.mMatrix.mtxView, concatMtx.mMatrix.mtxView);
		GXLoadPosMtxImm(concatMtx.mMatrix.mtxView, 0);

		for (int j = 0; j < 16; j++) {
			f32 theta = 0.3926991f * (f32)(j);
			f32 phi   = 0.3926991f * (f32)((j + 1) % 32);
			Vector3f start(radius * sinf(theta), 0.0f, radius * cosf(theta));
			Vector3f end(radius * sinf(phi), 0.0f, radius * cosf(phi));
			drawLine(start, end);
		}
	}
}

/**
 * @note Address: 0x80426044
 * @note Size: 0x5C8
 */
void Graphics::drawSphere(f32 radius, Matrixf* gfxMtx)
{
	Matrixf concatMtx; // 0x98
	for (int i = 0; i < 16; i++) {
		Matrixf srtMtx;                           // 0x68
		Vector3f scale(1.0f);                     // 0x2C
		Vector3f rot(0.0f, 0.3926991f * i, 0.0f); // 0x20

		srtMtx.makeSRT(scale, rot, Vector3f::zero);

		PSMTXConcat(gfxMtx->mMatrix.mtxView, srtMtx.mMatrix.mtxView, srtMtx.mMatrix.mtxView);
		PSMTXConcat(mMatrix.mMatrix.mtxView, srtMtx.mMatrix.mtxView, concatMtx.mMatrix.mtxView);
		GXLoadPosMtxImm(concatMtx.mMatrix.mtxView, 0);

		for (int j = 0; j < 16; j++) {
			f32 theta = 0.3926991f * (f32)(j);
			f32 phi   = 0.3926991f * (f32)((j + 1) % 32);
			Vector3f start(radius * sinf(theta), radius * cosf(theta), 0.0f);
			Vector3f end(radius * sinf(phi), radius * cosf(phi), 0.0f);
			drawLine(start, end);
		}
	}

	for (int i = 0; i < 16; i++) {
		Matrixf srtMtx;                           // 0x68
		Vector3f scale(1.0f);                     // 0x2C
		Vector3f rot(0.3926991f * i, 0.0f, 0.0f); // 0x20

		srtMtx.makeSRT(scale, rot, Vector3f::zero);

		PSMTXConcat(gfxMtx->mMatrix.mtxView, srtMtx.mMatrix.mtxView, srtMtx.mMatrix.mtxView);
		PSMTXConcat(mMatrix.mMatrix.mtxView, srtMtx.mMatrix.mtxView, concatMtx.mMatrix.mtxView);
		GXLoadPosMtxImm(concatMtx.mMatrix.mtxView, 0);

		for (int j = 0; j < 16; j++) {
			f32 theta = 0.3926991f * (f32)(j);
			f32 phi   = 0.3926991f * (f32)((j + 1) % 32);
			Vector3f start(radius * sinf(theta), 0.0f, radius * cosf(theta));
			Vector3f end(radius * sinf(phi), 0.0f, radius * cosf(phi));
			drawLine(start, end);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x5B4
 */
void Graphics::drawCylinder(Vector3f& p1, Vector3f&, f32)
{
	p1.x = PI;
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void Graphics::loadPrimViewMtx()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5F8
 */
void Graphics::drawTube(Vector3f&, Vector3f&, f32, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
void Graphics::drawMesh(Matrixf*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8042660C
 * @note Size: 0x2B8
 */
void Graphics::drawAxis(f32 a1, Matrixf* mtx)
{
	setToken("draw axis");
	Color4 backup = mDrawColor;
	Mtx out;
	if (mtx) {
		PSMTXConcat(mMatrix.mMatrix.mtxView, mtx->mMatrix.mtxView, out);
		GXLoadPosMtxImm(out, 0);
	} else {
		GXLoadPosMtxImm(mMatrix.mMatrix.mtxView, 0);
	}
	f32 zero   = 0.0f;
	mDrawColor = Color4(255, 0, 0, 255);
	GXBegin(GX_LINES, GX_VTXFMT0, 2);
	GXPosition3f32(zero, zero, zero);
	GXColor4u8(mDrawColor.r, mDrawColor.g, mDrawColor.b, mDrawColor.a);
	GXPosition3f32(a1, zero, zero);
	GXColor4u8(mDrawColor.r, mDrawColor.g, mDrawColor.b, mDrawColor.a);

	mDrawColor = Color4(0, 255, 0, 255);
	GXBegin(GX_LINES, GX_VTXFMT0, 2);
	GXPosition3f32(zero, zero, zero);
	GXColor4u8(mDrawColor.r, mDrawColor.g, mDrawColor.b, mDrawColor.a);
	GXPosition3f32(zero, a1, zero);
	GXColor4u8(mDrawColor.r, mDrawColor.g, mDrawColor.b, mDrawColor.a);

	mDrawColor = Color4(0, 0, 255, 255);
	GXBegin(GX_LINES, GX_VTXFMT0, 2);
	GXPosition3f32(zero, zero, zero);
	GXColor4u8(mDrawColor.r, mDrawColor.g, mDrawColor.b, mDrawColor.a);
	GXPosition3f32(zero, zero, a1);
	GXColor4u8(mDrawColor.r, mDrawColor.g, mDrawColor.b, mDrawColor.a);

	mDrawColor = backup;
}

/**
 * @note Address: N/A
 * @note Size: 0x274
 */
void Graphics::drawMarker(f32, Matrixf*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1EC
 */
void Graphics::drawRect(Rectf&, Color4&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1B8
 */
void Graphics::drawRect(Rectf&, JUTTexture*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804268C4
 * @note Size: 0x24
 */
void Graphics::clearZBuffer(Rectf& bounds)
{
	fillZBuffer(bounds, -0.999f);
}

/**
 * @note Address: 0x804268E8
 * @note Size: 0x3D0
 */
void Graphics::fillZBuffer(Rectf& bounds, f32 z)
{
	setToken("initPrimDraw");
	initGX();
	GXSetNumTevStages(1);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
	GXSetNumChans(1);
	GXSetChanCtrl(GX_COLOR0A0, GX_TRUE, GX_SRC_VTX, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
	disableLight();
	clearVtxDesc();
	setVtxDesc(GX_VA_POS, GX_DIRECT);
	setVtxDesc(GX_VA_CLR0, GX_DIRECT);
	setVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	setVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
	GXSetCullMode(GX_CULL_NONE);
	GXSetLineWidth(6, GX_TO_ZERO);
	GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ONE, GX_LO_CLEAR);
	GXSetZMode(GX_TRUE, GX_LESS, GX_TRUE);
	GXLoadPosMtxImm(mMatrix.mMatrix.mtxView, 0);
	GXSetViewport(bounds.p1.x, bounds.p1.y, bounds.getWidth(), bounds.getHeight(), 0.0f, 1.0f);
	GXSetScissor(bounds.p1.x, bounds.p1.y, bounds.getWidth(), bounds.getHeight());
	GXSetColorUpdate(GX_FALSE);
	GXSetZMode(GX_TRUE, GX_ALWAYS, GX_TRUE);

	Mtx44 mtx;
	C_MTXOrtho(mtx, bounds.p1.y, bounds.p2.y, bounds.p1.x, bounds.p2.x, -1.0f, 1.0f);
	GXSetProjection(mtx, GX_ORTHOGRAPHIC);

	Mtx mtx2;
	PSMTXIdentity(mtx2);
	GXLoadPosMtxImm(mtx2, 0);

	GXSetCullMode(GX_CULL_NONE);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	GXPosition3f32(bounds.p1.x, bounds.p1.y, z);
	GXColor4u8(10, 70, 10, 255);

	GXPosition3f32(bounds.p1.x, bounds.p2.y, z);
	GXColor4u8(10, 70, 10, 255);

	GXPosition3f32(bounds.p2.x, bounds.p2.y, z);
	GXColor4u8(10, 70, 10, 255);

	GXPosition3f32(bounds.p2.x, bounds.p1.y, z);
	GXColor4u8(10, 70, 10, 255);

	GXSetZMode(GX_TRUE, GX_LESS, GX_TRUE);
	GXSetColorUpdate(GX_TRUE);
}

/**
 * @note Address: N/A
 * @note Size: 0x45C
 */
void Graphics::drawTile(Sys::Sphere&, Sys::Sphere&, JUTTexture*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80426CB8
 * @note Size: 0x70C
 */
void Graphics::drawCone(Vector3f& start, Vector3f& end, f32 inAngle, int limit)
{
	f32 zy, yx;
	Vector3f sep;
	sep = end - start;

	f32 angle = TORADIANS(inAngle);
	f32 dist  = sep.length();
	f32 sinTheta, cosTheta;
	sincosf(angle, sinTheta, cosTheta);
	f32 val = dist * (sinTheta / cosTheta);
	sep *= 1.0f / dist;

	Vector3f xVec;
	Vector3f yVec;
	Vector3f xAxis(1.0f, 0.0f, 0.0f);
	Vector3f yAxis(0.0f, 1.0f, 0.0f);
	if (absF(sep.dot(yAxis)) < 1.0E-7f) {
		xVec = cross(yAxis, sep);
		xVec.normalise();

		yVec = xVec;
		yVec.CP(sep);
		yVec.normalise();
	} else {
		yVec = cross(xAxis, sep);
		yVec.normalise();

		// doing this by hand and not using an inline fixes the registers, but sucks
		xVec.y = yVec.z * sep.x - yVec.x * sep.z;
		yx     = yVec.y * sep.x;
		yx     = yx;
		xVec.z = yVec.x * sep.y - yx;
		zy     = yVec.z * sep.y;
		zy     = zy;
		xVec.x = yVec.y * sep.z - zy;
		xVec.normalise();
	}

	Matrixf mtx;
	mtx.setColumn(0, xVec);
	mtx.setColumn(1, yVec);
	mtx.setColumn(2, sep);
	mtx.setColumn(3, start);

	Matrixf concatMtx;
	PSMTXConcat(mMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView, concatMtx.mMatrix.mtxView);

	GXLoadPosMtxImm(concatMtx.mMatrix.mtxView, 0);

	for (int i = 0; i < limit; i++) {
		f32 newAngle1 = (TAU * ((f32)i - 0.5f)) / (f32)limit;
		f32 cos1      = val * cosf(newAngle1);
		f32 sin1      = val * sinf(newAngle1);
		Vector3f ln1(cos1, sin1, dist);

		f32 newAngle2 = (TAU * ((f32)(i + 1) - 0.5f)) / (f32)limit;
		f32 cos2      = val * cosf(newAngle2);
		f32 sin2      = val * sinf(newAngle2);
		Vector3f ln2(cos2, sin2, dist);

		drawLine(Vector3f::zero, ln1);
		drawLine(Vector3f::zero, ln2);
		drawLine(ln1, ln2);
	}
}

/**
 * @note Address: 0x804273C4
 * @note Size: 0xA4
 */
Graphics::Graphics()
{
	deleteViewports();
	mDrawColor.set(255, 255, 255, 255);
	mWhiteColor.set(255, 255, 255, 255);
	mActiveTokens = 0;
	GXSetDrawSyncCallback(graphicsTokenCallback);
	mCurrentViewport = nullptr;
	setupJ2DOrthoGraphDefault();
	setupJ2DPerspGraphDefault();
}

/**
 * @note Address: N/A
 * @note Size: 0x16C
 */
void Graphics::initJ2DOrthoGraph(J2DOrthoGraph*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x11C
 */
void Graphics::initJ2DPerspGraph(J2DPerspGraph*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80427468
 * @note Size: 0x16C
 */
void Graphics::setupJ2DOrthoGraphDefault()
{
	sys->getRenderModeObj();
	u16 y = sys->getRenderModeObj()->efbHeight;
	u16 x = sys->getRenderModeObj()->fbWidth;
	mOrthoGraph.place(0.0f, 0.0f, x, y);

	f32 y2   = sys->getRenderModeObj()->efbHeight + gScissorOffset;
	u16 x2   = sys->getRenderModeObj()->fbWidth;
	f32 offs = 0.0f;
	mOrthoGraph.scissor(JGeometry::TBox2f(0.0f, 0.0f, offs + x2, offs + y2));

	y = sys->getRenderModeObj()->efbHeight;
	x = sys->getRenderModeObj()->fbWidth;
	JGeometry::TBox2f bounds2(0.0f, 0.0f, x, y);
	mOrthoGraph.setOrtho(bounds2, -1024.0f, 1024.0f);
}

/**
 * @note Address: 0x804275D4
 * @note Size: 0x11C
 */
void Graphics::setupJ2DPerspGraphDefault()
{
	u16 y = sys->getRenderModeObj()->efbHeight;
	u16 x = sys->getRenderModeObj()->fbWidth;
	mPerspGraph.place(0.0f, 0.0f, x, y);

	f32 y2   = sys->getRenderModeObj()->efbHeight + gScissorOffset;
	u16 x2   = sys->getRenderModeObj()->fbWidth;
	f32 offs = 0.0f;
	JGeometry::TBox2f bounds(0.0f, 0.0f, offs + x2, offs + y2);
	mPerspGraph.scissor(bounds);

	mPerspGraph.set(30.0f, 10.0f, 10000.0f);
}

/**
 * @note Address: 0x804276F0
 * @note Size: 0x20
 */
void Graphics::clearVtxDesc()
{
	GXClearVtxDesc();
}

/**
 * @note Address: 0x80427710
 * @note Size: 0x28
 */
void Graphics::setVtxDesc(_GXAttr attr, _GXAttrType type)
{
	GXSetVtxDesc(attr, type);
}

/**
 * @note Address: 0x80427738
 * @note Size: 0x34
 */
void Graphics::setVtxAttrFmt(_GXVtxFmt fmt, _GXAttr attr, _GXCompCnt comp, _GXCompType type, u8 a1)
{
	GXSetVtxAttrFmt(fmt, attr, comp, type, a1);
}

/**
 * @note Address: N/A
 * @note Size: 0x1DC
 */
void Graphics::drawRectangle(Rectf&, bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8042776C
 * @note Size: 0x3C
 */
void Graphics::disableLight()
{
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_VTX, GX_SRC_VTX, GX_LIGHT0, GX_DF_CLAMP, GX_AF_NONE);
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void Graphics::disableTexture()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804277A8
 * @note Size: 0x100
 */
void Graphics::setTextureGX()
{
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_VTX, GX_SRC_VTX, GX_LIGHT0, GX_DF_CLAMP, GX_AF_NONE);
	GXClearVtxDesc();
	GXSetNumTevStages(1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
	GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x3c, GX_FALSE, 0x7d);
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_S8, 4);
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_FALSE, GX_NEVER, GX_FALSE);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_CLEAR);
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
void Graphics::drawTexture(JUTTexture*, f32, f32, f32, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804278A8
 * @note Size: 0x234
 */
void Graphics::initPerspPrintf(Viewport* vp)
{
	initPrimDraw(vp->getMatrix(false));

	Mtx mtx;
	PSMTXIdentity(mtx);
	GXLoadTexMtxImm(mtx, 0x1e, GX_MTX3x4);
	GXSetZMode(GX_TRUE, GX_LESS, GX_FALSE);
	vp->setProjection();
}

/**
 * @note Address: 0x80427ADC
 * @note Size: 0x3C4
 */
void Graphics::perspPrintf(PerspPrintfInfo& info, Vector3f& position, char* format, ...)
{
	va_list args;
	va_start(args, format);
	char buf[256];
	vsprintf(buf, format, args);

	Matrixf mtx;
	mtx.set(info.mScale, position, mCurrentViewport->getViewMatrix());

	Matrixf concatMtx;
	PSMTXConcat(mCurrentViewport->getViewMatrix()->mMatrix.mtxView, mtx.mMatrix.mtxView, concatMtx.mMatrix.mtxView);

	GXLoadPosMtxImm(concatMtx.mMatrix.mtxView, 0);

	J2DPrint printer(info.mFont, info.mColorA.toTColor(), info.mColorB.toTColor());
	printer.initiate();

	switch (info.mPrintType) {
	case 1:
		printer.print((f32)info.mPerspectiveOffsetX, (f32)info.mPerspectiveOffsetY, buf);
		break;

	case 2: {
		f32 width = printer.getWidth(buf);
		f32 val   = ROUND_F32_TO_U8(width);
		int x     = info.mPerspectiveOffsetX - (int)val;
		printer.print(x, (f32)info.mPerspectiveOffsetY, buf);
	} break;
	default: {
		f32 width = 0.5f * printer.getWidth(buf);
		f32 val   = ROUND_F32_TO_U8(width);
		int x     = info.mPerspectiveOffsetX - (int)val;
		printer.print(x, (f32)info.mPerspectiveOffsetY, buf);
	} break;
	}
}

/**
 * @note Address: 0x80427EA0
 * @note Size: 0x60
 */
void Graphics::initGX()
{
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetCurrentMtx(0);
	GXSetNumChans(0);
	GXSetNumTevStages(1);
	GXSetTevOp(GX_TEVSTAGE0, GX_REPLACE);
	GXSetNumTexGens(1);
	GXSetNumIndStages(0);
	GXSetTevDirect(GX_TEVSTAGE0);
}

/**
 * @note Address: 0x80427F00
 * @note Size: 0x4
 */
void Graphics::dirtyInitGX()
{
}

/**
 * @note Address: 0x80427F04
 * @note Size: 0x60
 */
void Graphics::clearInitGX()
{
	initGX();
}
