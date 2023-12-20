#include "types.h"
#include "JSystem/J2D/J2DGrafContext.h"

/**
 * @note Address: 0x80035530
 * @note Size: 0x60
 */
J2DOrthoGraph::J2DOrthoGraph()
    : J2DGrafContext(0.0f, 0.0f, 0.0f, 0.0f)
{
	setLookat();
}

/**
 * @note Address: 0x800355D8
 * @note Size: 0xE4
 */
J2DOrthoGraph::J2DOrthoGraph(f32 left, f32 top, f32 right, f32 bottom, f32 param_4, f32 param_5)
    : J2DGrafContext(left, top, right, bottom)
{
	mOrtho = JGeometry::TBox2<f32>(0, 0, right, bottom);
	mNear  = -param_5;
	mFar   = -param_4;
	setLookat();
}

/**
 * @note Address: 0x800356BC
 * @note Size: 0x58
 */
void J2DOrthoGraph::setPort()
{
	J2DGrafContext::setPort(); // thiscall
	C_MTXOrtho(mMtx44, mOrtho.i.y, mOrtho.f.y, mOrtho.i.x, mOrtho.f.x, mNear, mFar);
	GXSetProjection(mMtx44, GX_ORTHOGRAPHIC);
}

/**
 * @note Address: 0x80035714
 * @note Size: 0x34
 */
void J2DOrthoGraph::setOrtho(JGeometry::TBox2<f32> const& bounds, f32 far, f32 near)
{
	mOrtho = bounds;
	mNear  = -near;
	mFar   = -far;
}

/**
 * @note Address: 0x80035748
 * @note Size: 0x3C
 */
void J2DOrthoGraph::setLookat()
{
	PSMTXIdentity(mPosMtx);
	GXLoadPosMtxImm(mPosMtx, 0);
}

/**
 * @note Address: 0x80035784
 * @note Size: 0x10C
 */
void J2DOrthoGraph::scissorBounds(JGeometry::TBox2<f32>* param_0, JGeometry::TBox2<f32> const* param_1)
{
	f32 widthPower  = this->getWidthPower();
	f32 heightPower = this->getHeightPower();
	f32 ix          = mBounds.i.x >= 0 ? mBounds.i.x : 0;
	f32 iy          = mBounds.i.y >= 0 ? mBounds.i.y : 0;
	f32 f0          = ix + widthPower * (param_1->i.x - mOrtho.i.x);
	f32 f2          = ix + widthPower * (param_1->f.x - mOrtho.i.x);
	f32 f1          = iy + heightPower * (param_1->i.y - mOrtho.i.y);
	f32 f3          = iy + heightPower * (param_1->f.y - mOrtho.i.y);
	param_0->set(f0, f1, f2, f3);
	param_0->intersect(mScissorBounds);
}

/**
 * @note Address: 0x80035890
 * @note Size: 0x168
 */
void J2DDrawLine(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor color, int line_width)
{
	J2DOrthoGraph oGrph;
	oGrph.setLineWidth(line_width);
	oGrph.setColor(color);
	oGrph.moveTo(param_0, param_1);
	oGrph.lineTo(param_2, param_3);
}

/**
 * @note Address: 0x800359F8
 * @note Size: 0x48
 */
void J2DFillBox(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor color)
{
	J2DFillBox(JGeometry::TBox2<f32>(param_0, param_1, param_0 + param_2, param_1 + param_3), color);
}

/**
 * @note Address: 0x80035A40
 * @note Size: 0xCC
 */
void J2DFillBox(JGeometry::TBox2<f32> const& param_0, JUtility::TColor param_1)
{
	J2DOrthoGraph oGrph;
	oGrph.setColor(param_1);
	oGrph.fillBox(param_0);
}

/**
 * @note Address: 0x80035B0C
 * @note Size: 0x6C
 */
void J2DFillBox(f32 x0, f32 y0, f32 x1, f32 y1, JUtility::TColor c1, JUtility::TColor c2, JUtility::TColor c3, JUtility::TColor c4)
{
	J2DFillBox(JGeometry::TBox2<f32>(x0, y0, x0 + x1, y0 + y1), c1, c2, c3, c4);
}

/**
 * @note Address: 0x80035B78
 * @note Size: 0xD0
 */
void J2DFillBox(const JGeometry::TBox2<f32>& box, JUtility::TColor c1, JUtility::TColor c2, JUtility::TColor c3, JUtility::TColor c4)
{
	J2DOrthoGraph oGrph;
	oGrph.setColor(c1, c2, c3, c4);
	oGrph.fillBox(box);
}

/**
 * @note Address: 0x80035C48
 * @note Size: 0x4C
 */
void J2DDrawFrame(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor color, u8 line_width)
{
	J2DDrawFrame(JGeometry::TBox2<f32>(param_0, param_1, param_0 + param_2, param_1 + param_3), color, line_width);
}

/**
 * @note Address: 0x80035C94
 * @note Size: 0xE4
 */
void J2DDrawFrame(JGeometry::TBox2<f32> const& param_0, JUtility::TColor color, u8 line_width)
{
	J2DOrthoGraph oGrph;
	oGrph.setColor(color);
	oGrph.setLineWidth(line_width);
	oGrph.drawFrame(param_0);
}
