#include "types.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "math.h"

/**
 * @note Address: 0x80036074
 * @note Size: 0xAC
 */
J2DGrafContext::J2DGrafContext(f32 left, f32 top, f32 right, f32 bottom)
    : mBounds(left, top, left + right, top + bottom)
    , mScissorBounds(left, top, left + right, top + bottom)
{
	JUtility::TColor color(-1);
	setColor(color);
	setLineWidth(6);
}

/**
 * @note Address: 0x80036120
 * @note Size: 0x90
 */
void J2DGrafContext::setPort()
{
	setScissor();
	setup2D();

	f32 x0 = mBounds.i.x;
	f32 y0 = mBounds.i.y;
	f32 x1 = mBounds.f.x;
	f32 y1 = mBounds.f.y;

	if (x0 < 0.0f) {
		x0 = 0.0f;
	}

	if (y0 < 0.0f) {
		y0 = 0.0f;
	}

	GXSetViewport(x0, y0, x1 - x0, y1 - y0, 0.0f, 1.0f);
}

/**
 * @note Address: 0x800361B0
 * @note Size: 0x1DC
 */
void J2DGrafContext::setup2D()
{
	GXSetNumIndStages(0);
	for (int i = 0; i < 16; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}

	GXSetZCompLoc(0);
	GXSetAlphaCompare(GX_GREATER, 0, GX_AOP_OR, GX_GREATER, 0);
	GXSetZMode(0, GX_LEQUAL, 0);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);

	GXSetNumChans(1);
	GXSetNumTevStages(1);
	GXSetNumTexGens(0);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetCullMode(GX_CULL_NONE);

	GXLoadPosMtxImm(mPosMtx, 0);
	Mtx m;
	PSMTXIdentity(m);
	GXLoadTexMtxImm(m, 60, GX_MTX3x4);

	GXSetChanCtrl(GX_COLOR0A0, 0, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	GXSetChanCtrl(GX_COLOR1A1, 0, GX_SRC_REG, GX_SRC_REG, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);

	GXSetCurrentMtx(0);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 60, 0, 125);

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_RGBA4, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_RGBX8, 0xF);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX1, GX_POS_XYZ, GX_RGBX8, 0xF);

	GXSetLineWidth(mLineWidth, GX_TO_ZERO);

	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
}

/**
 * @note Address: 0x8003638C
 * @note Size: 0x2A8
 */
void J2DGrafContext::setScissor()
{
	JGeometry::TBox2f hardBounds(0, 0, 1024, 1024);
	JGeometry::TBox2f newBounds(mScissorBounds);

	mScissorBounds.intersect(hardBounds);
	newBounds.absolute();

	if (newBounds.intersect(hardBounds)) {
		newBounds.i.x = (u32)newBounds.i.x;
		newBounds.i.y = (u32)newBounds.i.y;
		newBounds.f.x = ceil(newBounds.f.x);
		newBounds.f.y = ceil(newBounds.f.y);
		GXSetScissor(newBounds.i.x, newBounds.i.y, newBounds.getWidth(), newBounds.getHeight());
	} else {
		GXSetScissor(0, 0, 0, 0);
	}
}

/**
 * @note Address: 0x80036634
 * @note Size: 0x24
 */
void J2DGrafContext::scissor(const JGeometry::TBox2f& bounds)
{
	mScissorBounds = bounds;
}

/**
 * @note Address: 0x80036658
 * @note Size: 0x34
 */
void J2DGrafContext::place(const JGeometry::TBox2f& bounds)
{
	mBounds        = bounds;
	mScissorBounds = bounds;
}

/**
 * @note Address: 0x8003668C
 * @note Size: 0x11C
 */
void J2DGrafContext::setColor(JUtility::TColor colorTL, JUtility::TColor colorTR, JUtility::TColor colorBR, JUtility::TColor colorBL)
{
	mColorTL = colorTL;
	mColorTR = colorTR;
	mColorBR = colorBR;
	mColorBL = colorBL;

	_B0.mType       = 1;
	_B0.mSrcFactor  = 4;
	_B0.mDestFactor = 5;

	mLinePart.mType       = 1;
	mLinePart.mSrcFactor  = 4;
	mLinePart.mDestFactor = 5;

	mBoxPart.mType       = 1;
	mBoxPart.mSrcFactor  = 4;
	mBoxPart.mDestFactor = 5;

	if ((u8)u32(mColorTL) != 0xFF) {
		return;
	}

	_B0.mType       = 0;
	_B0.mSrcFactor  = 1;
	_B0.mDestFactor = 0;

	if ((u8)u32(mColorBR) != 0xFF) {
		return;
	}

	mLinePart.mType       = 0;
	mLinePart.mSrcFactor  = 1;
	mLinePart.mDestFactor = 0;

	if ((u8)u32(mColorTR) != 0xFF) {
		return;
	}
	if ((u8)u32(mColorBL) != 0xFF) {
		return;
	}

	mBoxPart.mType       = 0;
	mBoxPart.mSrcFactor  = 1;
	mBoxPart.mDestFactor = 0;
}

/**
 * @note Address: 0x800367A8
 * @note Size: 0x2C
 */
void J2DGrafContext::setLineWidth(u8 width)
{
	mLineWidth = width;
	GXSetLineWidth(mLineWidth, GX_TO_ZERO);
}

/**
 * @note Address: 0x800367D4
 * @note Size: 0xFC
 */
void J2DGrafContext::fillBox(const JGeometry::TBox2f& box)
{
	GXSetBlendMode((GXBlendMode)mBoxPart.mType, (GXBlendFactor)mBoxPart.mSrcFactor, (GXBlendFactor)mBoxPart.mDestFactor, GX_LO_SET);
	GXLoadPosMtxImm(mPosMtx, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_F32, 0);

	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	f32 z = 0.0f;
	GXPosition3f32(box.i.x, box.i.y, z);
	GXColor1u32(mColorTL);
	GXPosition3f32(box.f.x, box.i.y, z);
	GXColor1u32(mColorTR);
	GXPosition3f32(box.f.x, box.f.y, z);
	GXColor1u32(mColorBL);
	GXPosition3f32(box.i.x, box.f.y, z);
	GXColor1u32(mColorBR);
	GXEnd();

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
}

/**
 * @note Address: 0x800368D0
 * @note Size: 0x110
 */
void J2DGrafContext::drawFrame(const JGeometry::TBox2f& box)
{
	GXSetBlendMode((GXBlendMode)mBoxPart.mType, (GXBlendFactor)mBoxPart.mSrcFactor, (GXBlendFactor)mBoxPart.mDestFactor, GX_LO_SET);
	GXLoadPosMtxImm(mPosMtx, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_F32, 0);

	GXBegin(GX_LINESTRIP, GX_VTXFMT0, 5);
	f32 z = 0;
	GXPosition3f32(box.i.x, box.i.y, z);
	GXColor1u32(mColorTL);
	GXPosition3f32(box.f.x, box.i.y, z);
	GXColor1u32(mColorTR);
	GXPosition3f32(box.f.x, box.f.y, z);
	GXColor1u32(mColorBL);
	GXPosition3f32(box.i.x, box.f.y, z);
	GXColor1u32(mColorBR);
	GXPosition3f32(box.i.x, box.i.y, z);
	GXColor1u32(mColorTL);
	GXEnd();

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
}

/**
 * --INLINED--
 *
 * @note Address: --------
 * @note Size: 0xe0
 */
inline void J2DGrafContext::line(JGeometry::TVec2f start, JGeometry::TVec2f end)
{
	GXSetBlendMode((GXBlendMode)mLinePart.mType, (GXBlendFactor)mLinePart.mSrcFactor, (GXBlendFactor)mLinePart.mDestFactor, GX_LO_SET);
	GXLoadPosMtxImm(mPosMtx, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_F32, 0);

	f32 z = 0;
	GXBegin(GX_LINES, GX_VTXFMT0, 2);
	GXPosition3f32(start.x, start.y, z);
	GXColor1u32(mColorTL);
	GXPosition3f32(end.x, end.y, z);
	GXColor1u32(mColorBR);
	GXEnd();

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
}

/**
 * @note Address: 0x800369E0
 * @note Size: 0x104
 */
void J2DGrafContext::lineTo(JGeometry::TVec2f pos)
{
	line(mPrevPos, pos);
	mPrevPos = pos;
}
