#include "Game/shadowMgr.h"
#include "Game/GameSystem.h"
#include "System.h"
#include "trig.h"
#include "nans.h"
#include "JSystem/JUtility/JUTTexture.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "246-ShadowCylinder";
namespace Game {

// clang-format off
static u8 sHighCylinderDL[]  ATTRIBUTE_ALIGN(32) = {
	GX_TRIANGLEFAN,   0, 12, 0, 0,  0, 1,  0, 2,  0, 3,  0, 4,  0, 5,  0, 6,  0, 7,  0, 8,  0, 9,  0, 10, 0, 11,
	GX_TRIANGLEFAN,   0, 12, 0, 23, 0, 22, 0, 21, 0, 20, 0, 19, 0, 18, 0, 17, 0, 16, 0, 15, 0, 14, 0, 13, 0, 12,
	GX_TRIANGLESTRIP, 0, 26, 0, 0,  0, 12, 0, 1,  0, 13, 0, 2,  0, 14, 0, 3,  0, 15, 0, 4,  0, 16, 0, 5,  0, 17, 0, 6, 0, 18, 0, 7, 0, 19, 0, 8, 0, 20, 0, 9, 0, 21, 0, 10, 0, 22, 0, 11, 0, 23,
	 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
} ;

static u8 sMidCylinderDL[]  ATTRIBUTE_ALIGN(32) = {
	GX_TRIANGLEFAN,   0, 8, 0, 24, 0, 25, 0, 26, 0, 27,  0, 28,  0, 29,  0, 30,  0, 31,
	GX_TRIANGLEFAN,   0, 8, 0, 39, 0, 38, 0, 37, 0, 36, 0, 35, 0, 34, 0, 33, 0, 32,
	GX_TRIANGLESTRIP, 0, 18, 0, 24, 0, 32, 0, 25, 0, 33, 0, 26, 0, 34, 0, 27, 0, 35, 0, 28, 0, 36, 0, 29, 0, 37, 0, 30, 0, 38, 0, 31, 0, 39, 0, 24, 0, 32, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static u8 sLowCylinderDL[]  ATTRIBUTE_ALIGN(32) = {
	GX_TRIANGLEFAN,   0, 4, 0, 40, 0, 41, 0, 42, 0, 43,  
	GX_TRIANGLEFAN,   0, 4, 0, 47, 0, 46, 0, 45, 0, 44,
	GX_TRIANGLESTRIP, 0, 10, 0, 40, 0, 44, 0, 41, 0, 45, 0, 42, 0, 46, 0, 43, 0, 47, 0, 40, 0, 44, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};
// clang-format on

static f32 sCylinderVertPos[48 * 3];

/**
 * @note Address: N/A
 * @note Size: 0x108
 */
CylinderList::CylinderList(int index)
{
	mTriangleCount = 0;
	mDLData        = nullptr;
	mSize          = 0;
	switch (index) {
	case 0:
		mTriangleCount = 12;
		mDLData        = sHighCylinderDL;
		mSize          = 141;
		break;
	case 1:
		mTriangleCount = 8;
		mDLData        = sMidCylinderDL;
		mSize          = 109;
		break;
	case 2:
		mTriangleCount = 4;
		mDLData        = sLowCylinderDL;
		mSize          = 77;
		break;
	}

	P2ASSERTBOOLLINE(188, mTriangleCount && mDLData && mSize);
}

/**
 * @note Address: N/A
 * @note Size: 0x210
 */
void CylinderList::createCylinder(int cylinderType, f32 radius)
{
	int vertexIndex = 0;
	switch (cylinderType) {
	case 0:
		vertexIndex = 0;
		break;
	case 1:
		vertexIndex = 72;
		break;
	case 2:
		vertexIndex = 120;
		break;
	}

	f32 angleStep = TAU / mTriangleCount;
	f32 offset    = angleStep / 2;
	for (int i = 0; i < mTriangleCount; i++) {
		int botVert       = i + mTriangleCount;
		f32 currentAngle  = i * angleStep;
		f32 adjustedAngle = currentAngle - offset;

		sCylinderVertPos[(vertexIndex << 0) + 3 * i + 0] = radius * cosf(adjustedAngle);
		sCylinderVertPos[(vertexIndex << 0) + 3 * i + 1] = 0.0f;
		sCylinderVertPos[(vertexIndex << 0) + 3 * i + 2] = radius * sinf(adjustedAngle);

		sCylinderVertPos[((vertexIndex + botVert * 3)) + 0] = radius * cosf(currentAngle);
		sCylinderVertPos[((vertexIndex + botVert * 3)) + 1] = -1.0f;
		sCylinderVertPos[((vertexIndex + botVert * 3)) + 2] = radius * sinf(currentAngle);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void CylinderList::draw()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8023DA30
 * @note Size: 0x4DC
 */
CylinderBase::CylinderBase()
{
	mDisplayListObj = new CylinderList*[3];
	for (int i = 0; i < 3; i++) {
		f32 size = 1.0f;
		switch (i) {
		case 0:
			size = 1.0f;
			break;
		case 1:
			size = 1.05f;
			break;
		case 2:
			size = 1.35f;
			break;
		}

		mDisplayListObj[i] = new CylinderList(i);
		mDisplayListObj[i]->createCylinder(i, size);
	}

	u16 y = sys->getRenderModeObj()->efbHeight;
	u16 x = sys->getRenderModeObj()->fbWidth;

	mScreenBounds.p1.x = 0.0f;
	mScreenBounds.p1.y = 0.0f;
	mScreenBounds.p2.x = x;
	mScreenBounds.p2.y = y;

	for (int i = 0; i < 2; i++) {
		mCamPosition[i]   = Vector3f(0.0f, 0.0f, 1.0f);
		mCamLookAt[i]     = Vector3f(0.0f, 0.0f, 1.0f);
		mCameraSizeMod[i] = 12800.0f;
	}
}

/**
 * @note Address: 0x8023DF0C
 * @note Size: 0x8
 */
void CylinderBase::setColor(Color4* color) { mColor = color; }

/**
 * @note Address: 0x8023DF14
 * @note Size: 0x24
 */
void CylinderBase::setShadowRect(Rectf& rect) { mScreenBounds = rect; }

/**
 * @note Address: 0x8023DF38
 * @note Size: 0xB4
 */
void CylinderBase::setCameraParms(Camera* camera, int id)
{
	mCamPosition[id]   = camera->getPosition();
	mCamLookAt[id]     = camera->getViewVector();
	mCameraSizeMod[id] = camera->mFieldOfViewTangent;
}

/**
 * @note Address: 0x8023DFEC
 * @note Size: 0xCC
 */
void CylinderBase::makeSRT(Matrixf& mtx, Game::ShadowParam& param)
{
	f32 ybound    = param.mBoundingSphere.mPosition.y;
	f32 x         = param.mPosition.x;
	f32 y         = param.mPosition.y;
	f32 z         = param.mPosition.z;
	f32 radius    = param.mSize;
	f32 boundsize = param.mBoundingSphere.mRadius;

	if (ybound >= 1.0f || ybound <= 0.0f) {
		mtx.mMatrix.mtxView[0][0] = radius;
		mtx.mMatrix.mtxView[1][0] = 0.0f;
		mtx.mMatrix.mtxView[2][0] = 0.0f;
		mtx.mMatrix.mtxView[0][1] = 0.0f;

		mtx.mMatrix.mtxView[1][1] = boundsize;
		mtx.mMatrix.mtxView[2][1] = 0.0f;
		mtx.mMatrix.mtxView[0][2] = 0.0f;
		mtx.mMatrix.mtxView[1][2] = 0.0f;
		mtx.mMatrix.mtxView[2][2] = radius;

		mtx.mMatrix.mtxView[0][3] = x;
		mtx.mMatrix.mtxView[1][3] = y;
		mtx.mMatrix.mtxView[2][3] = z;
		return;
	}

	mtx.mMatrix.mtxView[0][0] = radius;
	mtx.mMatrix.mtxView[1][0] = radius * (-param.mBoundingSphere.mPosition.x / param.mBoundingSphere.mPosition.y);
	mtx.mMatrix.mtxView[2][0] = 0.0f;
	mtx.mMatrix.mtxView[0][1] = 0.0f;

	mtx.mMatrix.mtxView[1][1] = boundsize;
	mtx.mMatrix.mtxView[2][1] = 0.0f;
	mtx.mMatrix.mtxView[0][2] = 0.0f;

	mtx.mMatrix.mtxView[1][2] = radius * (-param.mBoundingSphere.mPosition.z / param.mBoundingSphere.mPosition.y);
	mtx.mMatrix.mtxView[2][2] = radius;
	mtx.mMatrix.mtxView[0][3] = x;
	mtx.mMatrix.mtxView[1][3] = y;
	mtx.mMatrix.mtxView[2][3] = z;
}

/**
 * @note Address: 0x8023E0B8
 * @note Size: 0xA4
 */
int CylinderBase::getCylinderType(Game::ShadowParam& param, int camID)
{
	f32 dist = (mCameraSizeMod[camID] * param.mSize) / mCamLookAt[camID].dot(param.mPosition - mCamPosition[camID]);

	if (dist > mParms->mLodNear()) {
		return 0;
	} else if (dist > mParms->mLodFar()) {
		return 1;
	} else if (dist > 0.0f) {
		return 2;
	} else {
		return 0;
	}
}

/**
 * @note Address: 0x8023E15C
 * @note Size: 0x4
 */
void CylinderBase::setFilterTextureID(int) { }

/**
 * @note Address: 0x8023E160
 * @note Size: 0x4
 */
void CylinderBase::drawInit() { }

/**
 * @note Address: 0x8023E164
 * @note Size: 0x4
 */
void CylinderBase::drawCylinder(Matrixf&, int) { }

/**
 * @note Address: 0x8023E168
 * @note Size: 0x4
 */
void CylinderBase::drawFinish() { }

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
void CylinderBase::setupFillGX()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void CylinderBase::setupDrawCylinderGX()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void CylinderBase::setupFilterGX()
{
	GXSetNumTexGens(0);
	GXSetNumIndStages(0);
	__GXSetIndirectMask(0);
	GXSetCurrentMtx(0);
	GXSetNumTevStages(1);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetNumChans(1);
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void CylinderBase::setOrthoProjection()
{
	Mtx44 mtx;
	C_MTXOrtho(mtx, mScreenBounds.p1.y, mScreenBounds.p2.y, mScreenBounds.p1.x, mScreenBounds.p2.x, 0.0f, 2.0f);
	GXSetProjection(mtx, GX_ORTHOGRAPHIC);
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void CylinderBase::setOrthoCamera()
{
	Vec b = { 0.0f, 1.0f, 0.0f };
	Vec c = { 0.0f, 0.0f, 0.0f };
	Vec a = { 0.0f, 0.0f, 1.0f };

	Mtx mtx2;
	C_MTXLookAt(mtx2, &a, &b, &c);
	GXLoadPosMtxImm(mtx2, 0);
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
void CylinderBase::setScissorViewport()
{
	GXSetScissor(mScreenBounds.p1.x, mScreenBounds.p1.y, mScreenBounds.getWidth(), mScreenBounds.getHeight());
	GXSetViewport(mScreenBounds.p1.x, mScreenBounds.p1.y, mScreenBounds.getWidth(), mScreenBounds.getHeight(), 0.0f, 1.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void CylinderBase::fillShadowRect()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xD4
 */
void CylinderBase::fillRectAlphaZero()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void CylinderBase::drawCylinderList(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8023E16C
 * @note Size: 0x164
 */
ShadowCylinder2::ShadowCylinder2(Game::ShadowParms* parm, Color4* color)
{
	sys->heapStatusStart("Shadow Texture", nullptr);

	u16 y    = sys->getRenderModeObj()->efbHeight;
	u16 x    = sys->getRenderModeObj()->fbWidth;
	int size = GXGetTexBufferSize(x / 2, y / 2, GX_CTF_R8, GX_FALSE, 0);
	if (gameSystem && !gameSystem->isMultiplayerMode()) {
		mTexImg    = new (0x20) ResTIMG*[1];
		mTexImg[0] = (ResTIMG*)(new (0x20) u8[size]);
		mTexObj    = new GXTexObj[1];
	} else {
		mTexImg    = new (0x20) ResTIMG*[2];
		mTexImg[0] = (ResTIMG*)(new (0x20) u8[size]);
		mTexImg[1] = (ResTIMG*)(new (0x20) u8[size]);
		mTexObj    = new GXTexObj[2];
	}
	mParms  = parm;
	mColor  = color;
	mTexIdx = 0;
	sys->heapStatusEnd("Shadow Texture");
}

/**
 * @note Address: 0x8023E2D0
 * @note Size: 0x44
 */
void ShadowCylinder2::setFilterTextureID(int vpID)
{
	if (gameSystem && !gameSystem->isMultiplayerMode()) {
		mTexIdx = 0;
		return;
	}
	mTexIdx = vpID;
}

/**
 * @note Address: 0x8023E314
 * @note Size: 0x350
 */
void ShadowCylinder2::drawInit()
{
	setOrthoProjection();
	setOrthoCamera();
	setScissorViewport();

	setupFilterGX();

	GXSetChanMatColor4(mColor);

	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_NONE, GX_AF_NONE);
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_FALSE, GX_NEVER, GX_FALSE);
	GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ONE, GX_LO_CLEAR);
	GXSetColorUpdate(GX_FALSE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetDstAlpha(GX_TRUE, 0);
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p1.y, zero);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p1.y, zero);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p2.y, zero);
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p2.y, zero);

	GXSetDstAlpha(GX_FALSE, 0);
	GXColor color = { 255, 255, 255, 4 };
	GXSetChanMatColor(GX_COLOR0A0, color);
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_INDEX16);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetArray(GX_VA_POS, sCylinderVertPos, 0xc);
}

/**
 * @note Address: 0x8023E664
 * @note Size: 0xC0
 */
void ShadowCylinder2::drawCylinder(Matrixf& mtx, int id)
{
	GXLoadPosMtxImm(mtx.mMatrix.mtxView, 0);

	GXSetZMode(GX_TRUE, GX_LEQUAL, GX_FALSE);
	GXSetCullMode(GX_CULL_BACK);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_ONE, GX_BL_ONE, GX_LO_NOOP);
	GXCallDisplayList(mDisplayListObj[id]->mDLData, mDisplayListObj[id]->mSize & 0xffffffe0);

	GXSetCullMode(GX_CULL_FRONT);
	GXSetBlendMode(GX_BM_SUBTRACT, GX_BL_ONE, GX_BL_ONE, GX_LO_NOOP);
	GXCallDisplayList(mDisplayListObj[id]->mDLData, mDisplayListObj[id]->mSize & 0xffffffe0);
}

/**
 * @note Address: 0x8023E724
 * @note Size: 0x1E4
 */
void ShadowCylinder2::drawFinish()
{
	setOrthoProjection();
	setOrthoCamera();
	setScissorViewport();

	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetChanMatColor(GX_COLOR0A0, mColor->toGXColor());
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_FALSE, GX_NEVER, GX_FALSE);
	copyShadowTexture();
	setupTextureFilterGX();
	drawTextureFilter();
}

/**
 * @note Address: 0x8023E908
 * @note Size: 0x170
 */
void ShadowCylinder2::copyShadowTexture()
{
	GXSetTexCopySrc(mScreenBounds.p1.x, mScreenBounds.p1.y, mScreenBounds.p2.x, mScreenBounds.p2.y);

	GXSetTexCopyDst(mScreenBounds.getWidth() / 2, mScreenBounds.getHeight() / 2, GX_CTF_R8, GX_TRUE);
	GXCopyTex(mTexImg[mTexIdx], GX_FALSE);
	GXPixModeSync();
	GXInitTexObj(&mTexObj[mTexIdx], mTexImg[mTexIdx], mScreenBounds.getWidth() / 2, mScreenBounds.getHeight() / 2, GX_TF_I8, GX_CLAMP,
	             GX_CLAMP, GX_FALSE);
	GXInitTexObjLOD(&mTexObj[mTexIdx], GX_LINEAR, GX_LINEAR, 0.0, 0.0, 0.0, GX_FALSE, GX_FALSE, GX_ANISO_1);
}

/**
 * @note Address: 0x8023EA78
 * @note Size: 0xFC
 */
void ShadowCylinder2::setupTextureFilterGX()
{
	GXLoadTexObj(&mTexObj[mTexIdx], GX_TEXMAP0);
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x3c, GX_FALSE, 0x7d);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);

	GXColor color = {};
	GXSetTevColor(GX_TEVREG0, color);
	GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_TEXA, GX_CC_C1, GX_CC_RASC, GX_CC_ZERO);
	GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_COMP_R8_GT, GX_TB_ZERO, GX_CS_SCALE_1, GX_FALSE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_TEXA, GX_CA_A0, GX_CA_RASA, GX_CA_ZERO);
	GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_COMP_R8_GT, GX_TB_ZERO, GX_CS_SCALE_1, GX_FALSE, GX_TEVPREV);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_NOOP);
}

/**
 * @note Address: 0x8023EB74
 * @note Size: 0x108
 */
void ShadowCylinder2::drawTextureFilter()
{
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_S8, 4);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p1.y, zero);
	GXTexCoord2s8(0, 0);

	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p1.y, zero);
	GXTexCoord2s8(0x10, 0);

	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p2.y, zero);
	GXTexCoord2s8(0x10, 0x10);

	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p2.y, zero);
	GXTexCoord2s8(0, 0x10);
}

/**
 * @note Address: 0x8023EC7C
 * @note Size: 0x5C
 */
ShadowCylinder3::ShadowCylinder3(ShadowParms* parm, Color4* color)
{
	mParms = parm;
	mColor = color;
}

/**
 * @note Address: 0x8023ECD8
 * @note Size: 0x350
 */
void ShadowCylinder3::drawInit()
{
	setOrthoProjection();
	setOrthoCamera();
	setScissorViewport();

	setupFilterGX();

	GXSetChanMatColor4(mColor);

	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_NONE, GX_AF_NONE);
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_FALSE, GX_NEVER, GX_FALSE);
	GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ONE, GX_LO_CLEAR);
	GXSetColorUpdate(GX_FALSE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetDstAlpha(GX_TRUE, 0);
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p1.y, zero);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p1.y, zero);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p2.y, zero);
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p2.y, zero);

	GXSetDstAlpha(GX_FALSE, 0);
	GXColor color = { 255, 255, 255, 127 };
	GXSetChanMatColor(GX_COLOR0A0, color);
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_INDEX16);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetArray(GX_VA_POS, sCylinderVertPos, 0xc);
}

/**
 * @note Address: 0x8023F028
 * @note Size: 0xF8
 */
void ShadowCylinder3::drawCylinder(Matrixf& mtx, int id)
{
	GXLoadPosMtxImm(mtx.mMatrix.mtxView, 0);
	GXSetCullMode(GX_CULL_FRONT);
	GXSetZMode(GX_TRUE, GX_GEQUAL, GX_FALSE);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_ONE, GX_BL_ONE, GX_LO_NOOP);
	GXCallDisplayList(mDisplayListObj[id]->mDLData, mDisplayListObj[id]->mSize & 0xffffffe0);
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_TRUE, GX_LEQUAL, GX_FALSE);
	GXCallDisplayList(mDisplayListObj[id]->mDLData, mDisplayListObj[id]->mSize & 0xffffffe0);
	GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
	GXSetBlendMode(GX_BM_SUBTRACT, GX_BL_ONE, GX_BL_ONE, GX_LO_NOOP);
	GXCallDisplayList(mDisplayListObj[id]->mDLData, mDisplayListObj[id]->mSize & 0xffffffe0);
}

/**
 * @note Address: 0x8023F120
 * @note Size: 0x1D4
 */
void ShadowCylinder3::drawFinish()
{
	setOrthoProjection();
	setOrthoCamera();
	setScissorViewport();

	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetChanMatColor(GX_COLOR0A0, mColor->toGXColor());
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_FALSE, GX_NEVER, GX_FALSE);
	drawScreenFilter();
}

/**
 * @note Address: 0x8023F2F4
 * @note Size: 0xD0
 */
void ShadowCylinder3::drawScreenFilter()
{
	GXSetBlendMode(GX_BM_BLEND, GX_BL_DSTALPHA, GX_BL_INVDSTALPHA, GX_LO_NOOP);
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p1.y, zero);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p1.y, zero);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p2.y, zero);
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p2.y, zero);
}

} // namespace Game
