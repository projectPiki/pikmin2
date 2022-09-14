#include "types.h"
#include "JSystem/J2D/J2DGrafContext.h"

/*
 * --INFO--
 * Address:	80035530
 * Size:	000060
 */
J2DOrthoGraph::J2DOrthoGraph()
    : J2DGrafContext(0.0f, 0.0f, 0.0f, 0.0f)
{
	setLookat();
}

/*
 * --INFO--
 * Address:	800355D8
 * Size:	0000E4
 */
J2DOrthoGraph::J2DOrthoGraph(f32 left, f32 top, f32 right, f32 bottom, f32 param_4, f32 param_5)
    : J2DGrafContext(left, top, right, bottom)
{
	m_ortho = JGeometry::TBox2<f32>(0, 0, right, bottom);
	m_near  = -param_5;
	m_far   = -param_4;
	setLookat();
}

/*
 * --INFO--
 * Address:	800356BC
 * Size:	000058
 */
void J2DOrthoGraph::setPort()
{
	J2DGrafContext::setPort(); // thiscall
	C_MTXOrtho(m_mtx44, m_ortho.i.y, m_ortho.f.y, m_ortho.i.x, m_ortho.f.x, m_near, m_far);
	GXSetProjection(m_mtx44, GX_ORTHOGRAPHIC);
}

/*
 * --INFO--
 * Address:	80035714
 * Size:	000034
 */
void J2DOrthoGraph::setOrtho(JGeometry::TBox2<f32> const& bounds, f32 far, f32 near)
{
	m_ortho = bounds;
	m_near  = -near;
	m_far   = -far;
}

/*
 * --INFO--
 * Address:	80035748
 * Size:	00003C
 */
void J2DOrthoGraph::setLookat()
{
	PSMTXIdentity(m_posMtx);
	GXLoadPosMtxImm(m_posMtx, 0);
}

/*
 * --INFO--
 * Address:	80035784
 * Size:	00010C
 */
void J2DOrthoGraph::scissorBounds(JGeometry::TBox2<f32>* param_0, JGeometry::TBox2<f32> const* param_1)
{
	f32 widthPower  = this->getWidthPower();
	f32 heightPower = this->getHeightPower();
	f32 ix          = m_bounds.i.x >= 0 ? m_bounds.i.x : 0;
	f32 iy          = m_bounds.i.y >= 0 ? m_bounds.i.y : 0;
	f32 f0          = ix + widthPower * (param_1->i.x - m_ortho.i.x);
	f32 f2          = ix + widthPower * (param_1->f.x - m_ortho.i.x);
	f32 f1          = iy + heightPower * (param_1->i.y - m_ortho.i.y);
	f32 f3          = iy + heightPower * (param_1->f.y - m_ortho.i.y);
	param_0->set(f0, f1, f2, f3);
	param_0->intersect(m_scissorBounds);
}

/*
 * --INFO--
 * Address:	80035890
 * Size:	000168
 */
void J2DDrawLine(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor color, int line_width)
{
	J2DOrthoGraph oGrph;
	oGrph.setLineWidth(line_width);
	oGrph.setColor(color);
	oGrph.moveTo(param_0, param_1);
	oGrph.lineTo(param_2, param_3);
}

/*
 * --INFO--
 * Address:	800359F8
 * Size:	000048
 */
void J2DFillBox(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor color)
{
	J2DFillBox(JGeometry::TBox2<f32>(param_0, param_1, param_0 + param_2, param_1 + param_3), color);
}

/*
 * --INFO--
 * Address:	80035A40
 * Size:	0000CC
 */
void J2DFillBox(JGeometry::TBox2<f32> const& param_0, JUtility::TColor param_1)
{
	J2DOrthoGraph oGrph;
	oGrph.setColor(param_1);
	oGrph.fillBox(param_0);
}

/*
 * --INFO--
 * Address:	80035B0C
 * Size:	00006C
 */
void J2DFillBox(float x0, float y0, float x1, float y1, JUtility::TColor c1, JUtility::TColor c2, JUtility::TColor c3, JUtility::TColor c4)
{
	J2DFillBox(JGeometry::TBox2<f32>(x0, y0, x0 + x1, y0 + y1), c1, c2, c3, c4);
}

/*
 * --INFO--
 * Address:	80035B78
 * Size:	0000D0
 */
void J2DFillBox(const JGeometry::TBox2<f32>& box, JUtility::TColor c1, JUtility::TColor c2, JUtility::TColor c3, JUtility::TColor c4)
{
	J2DOrthoGraph oGrph;
	oGrph.setColor(c1, c2, c3, c4);
	oGrph.fillBox(box);
}

/*
 * --INFO--
 * Address:	80035C48
 * Size:	00004C
 */
void J2DDrawFrame(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor color, u8 line_width)
{
	J2DDrawFrame(JGeometry::TBox2<f32>(param_0, param_1, param_0 + param_2, param_1 + param_3), color, line_width);
}

/*
 * --INFO--
 * Address:	80035C94
 * Size:	0000E4
 */
void J2DDrawFrame(JGeometry::TBox2<f32> const& param_0, JUtility::TColor color, u8 line_width)
{
	J2DOrthoGraph oGrph;
	oGrph.setColor(color);
	oGrph.setLineWidth(line_width);
	oGrph.drawFrame(param_0);
}
