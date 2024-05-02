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
J2DOrthoGraph::J2DOrthoGraph(f32 left, f32 top, f32 right, f32 bottom, f32 nearPlaneDistance, f32 farPlaneDistance)
    : J2DGrafContext(left, top, right, bottom)
{
	mOrtho = JGeometry::TBox2<f32>(0, 0, right, bottom);
	mNear  = -farPlaneDistance;
	mFar   = -nearPlaneDistance;
	setLookat();
}

/**
 * @note Address: 0x800356BC
 * @note Size: 0x58
 */
void J2DOrthoGraph::setPort()
{
	J2DGrafContext::setPort();
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
void J2DOrthoGraph::scissorBounds(JGeometry::TBox2<f32>* outputBounds, JGeometry::TBox2<f32> const* inputBounds)
{
	f32 widthScaleFactor  = this->getWidthPower();
	f32 heightScaleFactor = this->getHeightPower();

	// If the bounds are negative, adjust them to 0
	f32 adjustedX = mBounds.i.x >= 0 ? mBounds.i.x : 0;
	f32 adjustedY = mBounds.i.y >= 0 ? mBounds.i.y : 0;

	// Calculate the new X bounds
	f32 newLowerX = adjustedX + widthScaleFactor * (inputBounds->i.x - mOrtho.i.x);
	f32 newUpperX = adjustedX + widthScaleFactor * (inputBounds->f.x - mOrtho.i.x);

	// Calculate the new Y bounds
	f32 newLowerY = adjustedY + heightScaleFactor * (inputBounds->i.y - mOrtho.i.y);
	f32 newUpperY = adjustedY + heightScaleFactor * (inputBounds->f.y - mOrtho.i.y);

	outputBounds->set(newLowerX, newLowerY, newUpperX, newUpperY);
	outputBounds->intersect(mScissorBounds);
}

/**
 * @note Address: 0x80035890
 * @note Size: 0x168
 */
void J2DDrawLine(f32 startX, f32 startY, f32 endX, f32 endY, JUtility::TColor color, int lineWidth)
{
	J2DOrthoGraph graph;
	graph.setLineWidth(lineWidth);
	graph.setColor(color);
	graph.moveTo(startX, startY);
	graph.lineTo(endX, endY);
}

/**
 * @note Address: 0x800359F8
 * @note Size: 0x48
 */
void J2DFillBox(f32 startX, f32 startY, f32 width, f32 height, JUtility::TColor fillColor)
{
	J2DFillBox(JGeometry::TBox2<f32>(startX, startY, startX + width, startY + height), fillColor);
}

/**
 * @note Address: 0x80035A40
 * @note Size: 0xCC
 */
void J2DFillBox(JGeometry::TBox2<f32> const& boxDimensions, JUtility::TColor fillColor)
{
	J2DOrthoGraph orthoGraph;
	orthoGraph.setColor(fillColor);
	orthoGraph.fillBox(boxDimensions);
}

/**
 * @note Address: 0x80035B0C
 * @note Size: 0x6C
 */
void J2DFillBox(f32 startX, f32 startY, f32 endX, f32 endY, JUtility::TColor color1, JUtility::TColor color2, JUtility::TColor color3,
                JUtility::TColor color4)
{
	J2DFillBox(JGeometry::TBox2<f32>(startX, startY, startX + endX, startY + endY), color1, color2, color3, color4);
}

/**
 * @note Address: 0x80035B78
 * @note Size: 0xD0
 */
void J2DFillBox(const JGeometry::TBox2<f32>& boxDimensions, JUtility::TColor color1, JUtility::TColor color2, JUtility::TColor color3,
                JUtility::TColor color4)
{
	J2DOrthoGraph orthoGraph;
	orthoGraph.setColor(color1, color2, color3, color4);
	orthoGraph.fillBox(boxDimensions);
}

/**
 * @note Address: 0x80035C48
 * @note Size: 0x4C
 */
void J2DDrawFrame(f32 startX, f32 startY, f32 width, f32 height, JUtility::TColor frameColor, u8 lineWidth)
{
	J2DDrawFrame(JGeometry::TBox2<f32>(startX, startY, startX + width, startY + height), frameColor, lineWidth);
}

/**
 * @note Address: 0x80035C94
 * @note Size: 0xE4
 */
void J2DDrawFrame(JGeometry::TBox2<f32> const& frameBounds, JUtility::TColor frameColor, u8 lineWidth)
{
	J2DOrthoGraph orthoGraph;
	orthoGraph.setColor(frameColor);
	orthoGraph.setLineWidth(lineWidth);
	orthoGraph.drawFrame(frameBounds);
}
