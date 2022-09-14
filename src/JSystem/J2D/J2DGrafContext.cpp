#include "types.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "Dolphin/math.h"

/*
 * --INFO--
 * Address:	80036074
 * Size:	0000AC
 */
J2DGrafContext::J2DGrafContext(f32 left, f32 top, f32 right, f32 bottom)
    : m_bounds(left, top, left + right, top + bottom)
    , m_scissorBounds(left, top, left + right, top + bottom)
{
	JUtility::TColor color(-1);
	setColor(color);
	setLineWidth(6);
}

/*
 * --INFO--
 * Address:	80036120
 * Size:	000090
 */
void J2DGrafContext::setPort()
{
	setScissor();
	setup2D();

	f32 x0 = m_bounds.i.x;
	f32 y0 = m_bounds.i.y;
	f32 x1 = m_bounds.f.x;
	f32 y1 = m_bounds.f.y;

	if (x0 < 0.0f) {
		x0 = 0.0f;
	}

	if (y0 < 0.0f) {
		y0 = 0.0f;
	}

	GXSetViewport(x0, y0, x1 - x0, y1 - y0, 0.0f, 1.0f);
}

/*
 * --INFO--
 * Address:	800361B0
 * Size:	0001DC
 */
void J2DGrafContext::setup2D()
{
	GXSetNumIndStages(0);
	for (int i = 0; i < 16; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}

	GXSetZCompLoc(0);
	GXSetAlphaCompare(GX_GREATER, 0, GX_AOP_OR, GX_GREATER, 0);
	GXSetZMode(0, GX_LTEQUAL, 0);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);

	GXSetNumChans(1);
	GXSetNumTevStages(1);
	GXSetNumTexGens(0);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetCullMode(GX_CULL_NONE);

	GXLoadPosMtxImm(m_posMtx, 0);
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

	GXSetLineWidth(m_lineWidth, GX_TO_ZERO);

	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
}

/*
 * --INFO--
 * Address:	8003638C
 * Size:	0002A8
 */
void J2DGrafContext::setScissor()
{
	JGeometry::TBox2f hardBounds(0, 0, 1024, 1024);
	JGeometry::TBox2f newBounds(m_scissorBounds);

	m_scissorBounds.intersect(hardBounds);
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

/*
 * --INFO--
 * Address:	80036634
 * Size:	000024
 */
void J2DGrafContext::scissor(const JGeometry::TBox2f& bounds) { m_scissorBounds = bounds; }

/*
 * --INFO--
 * Address:	80036658
 * Size:	000034
 */
void J2DGrafContext::place(const JGeometry::TBox2f& bounds)
{
	m_bounds        = bounds;
	m_scissorBounds = bounds;
}

/*
 * --INFO--
 * Address:	8003668C
 * Size:	00011C
 */
void J2DGrafContext::setColor(JUtility::TColor colorTL, JUtility::TColor colorTR, JUtility::TColor colorBR, JUtility::TColor colorBL)
{
	m_colorTL = colorTL;
	m_colorTR = colorTR;
	m_colorBR = colorBR;
	m_colorBL = colorBL;

	_B0        = J2DBlendInfo(1, 4, 5);
	m_linePart = J2DBlendInfo(1, 4, 5);
	m_boxPart  = J2DBlendInfo(1, 4, 5);

	if ((u8)u32(m_colorTL) != 0xFF) {
		return;
	}

	_B0 = J2DBlendInfo(0, 1, 0);

	if ((u8)u32(m_colorBR) != 0xFF) {
		return;
	}

	m_linePart = J2DBlendInfo(0, 1, 0);

	if ((u8)u32(m_colorTR) != 0xFF) {
		return;
	}
	if ((u8)u32(m_colorBL) != 0xFF) {
		return;
	}

	m_boxPart = J2DBlendInfo(0, 1, 0);
}

/*
 * --INFO--
 * Address:	800367A8
 * Size:	00002C
 */
void J2DGrafContext::setLineWidth(u8 width)
{
	m_lineWidth = width;
	GXSetLineWidth(m_lineWidth, GX_TO_ZERO);
}

/*
 * --INFO--
 * Address:	800367D4
 * Size:	0000FC
 */
void J2DGrafContext::fillBox(const JGeometry::TBox2f& box)
{
	GXSetBlendMode((GXBlendMode)m_boxPart.m_type, (GXBlendFactor)m_boxPart.m_srcFactor, (GXBlendFactor)m_boxPart.m_destFactor, GX_LO_SET);
	GXLoadPosMtxImm(m_posMtx, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_F32, 0);

	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	f32 z = 0;
	GXPosition3f32(box.i.x, box.i.y, z);
	GXColor1u32(m_colorTL);
	GXPosition3f32(box.f.x, box.i.y, z);
	GXColor1u32(m_colorTR);
	GXPosition3f32(box.f.x, box.f.y, z);
	GXColor1u32(m_colorBL);
	GXPosition3f32(box.i.x, box.f.y, z);
	GXColor1u32(m_colorBR);
	GXEnd();

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
}

/*
 * --INFO--
 * Address:	800368D0
 * Size:	000110
 */
void J2DGrafContext::drawFrame(const JGeometry::TBox2f& box)
{
	GXSetBlendMode((GXBlendMode)m_boxPart.m_type, (GXBlendFactor)m_boxPart.m_srcFactor, (GXBlendFactor)m_boxPart.m_destFactor, GX_LO_SET);
	GXLoadPosMtxImm(m_posMtx, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_F32, 0);

	GXBegin(GX_LINESTRIP, GX_VTXFMT0, 5);
	f32 z = 0;
	GXPosition3f32(box.i.x, box.i.y, z);
	GXColor1u32(m_colorTL);
	GXPosition3f32(box.f.x, box.i.y, z);
	GXColor1u32(m_colorTR);
	GXPosition3f32(box.f.x, box.f.y, z);
	GXColor1u32(m_colorBL);
	GXPosition3f32(box.i.x, box.f.y, z);
	GXColor1u32(m_colorBR);
	GXPosition3f32(box.i.x, box.i.y, z);
	GXColor1u32(m_colorTL);
	GXEnd();

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
}

/*
 * --INLINED--
 *
 * --INFO--
 * Address:	--------
 * Size:	0000e0
 */
inline void J2DGrafContext::line(JGeometry::TVec2f start, JGeometry::TVec2f end)
{
	GXSetBlendMode((GXBlendMode)m_linePart.m_type, (GXBlendFactor)m_linePart.m_srcFactor, (GXBlendFactor)m_linePart.m_destFactor,
	               GX_LO_SET);
	GXLoadPosMtxImm(m_posMtx, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_F32, 0);

	f32 z = 0;
	GXBegin(GX_LINES, GX_VTXFMT0, 2);
	GXPosition3f32(start.x, start.y, z);
	GXColor1u32(m_colorTL);
	GXPosition3f32(end.x, end.y, z);
	GXColor1u32(m_colorBR);
	GXEnd();

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
}

/*
 * --INFO--
 * Address:	800369E0
 * Size:	000104
 */
void J2DGrafContext::lineTo(JGeometry::TVec2f pos)
{
	line(m_prevPos, pos);
	m_prevPos = pos;
}
