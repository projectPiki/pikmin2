#ifndef _JSYSTEM_J2D_J2DGRAFCONTEXT_H
#define _JSYSTEM_J2D_J2DGRAFCONTEXT_H

#include "types.h"
#include "JSystem/JGeometry.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JUT/TColor.h"
#include "Dolphin/mtx.h"

/**
 * @fabricated
 */
enum J2DGrafType { J2DGraf_Base = 0, J2DGraf_Ortho, J2DGraf_Persp };

struct J2DGrafContext {
	J2DGrafContext(float, float, float, float);

	virtual ~J2DGrafContext() { }                 // _08 (weak)
	virtual void place(const JGeometry::TBox2f&); // _0C
	virtual void place(f32 x, f32 y, f32 width, f32 height)
	{
		JGeometry::TBox2f box(x, y, x + width, y + height);
		place(box);
	}                                                                // _10 (weak)
	virtual void setPort();                                          // _14
	virtual void setup2D();                                          // _18
	virtual void setScissor();                                       // _1C
	virtual J2DGrafType getGrafType() const { return J2DGraf_Base; } // _20 (weak)
	virtual void setLookat() { }                                     // _24 (weak)

	void drawFrame(const JGeometry::TBox2f&);
	void fillBox(const JGeometry::TBox2f&);
	void lineTo(JGeometry::TVec2f);

	void lineTo(f32 x, f32 y) { lineTo(JGeometry::TVec2f(x, y)); }
	void moveTo(f32 x, f32 y) { moveTo(JGeometry::TVec2f(x, y)); }

	void moveTo(JGeometry::TVec2f pos) { m_prevPos = pos; }

	void scissor(const JGeometry::TBox2f&);
	void setColor(JUtility::TColor c) { setColor(c, c, c, c); }
	void setColor(JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
	void setLineWidth(u8);

	// inlined
	void line(JGeometry::TVec2f, JGeometry::TVec2f);

	// _00 VTBL
	JGeometry::TBox2f m_bounds;        // _04
	JGeometry::TBox2f m_scissorBounds; // _14
	JUtility::TColor m_colorTL;        // _24, top left
	JUtility::TColor m_colorTR;        // _28, top right
	JUtility::TColor m_colorBR;        // _2C, bottom right
	JUtility::TColor m_colorBL;        // _30, bottom left
	u8 m_lineWidth;                    // _34
	JGeometry::TVec2f m_prevPos;       // _38
	Mtx44 m_mtx44;                     // _40
	Mtx m_posMtx;                      // _80
	J2DBlendInfo _B0;                  // _B0
	J2DBlendInfo m_linePart;           // _B3
	J2DBlendInfo m_boxPart;            // _B6
};

struct J2DPerspGraph : public J2DGrafContext {
	J2DPerspGraph();

	virtual ~J2DPerspGraph() { }                                      // _08 (weak)
	virtual void setPort();                                           // _14
	virtual J2DGrafType getGrafType() const { return J2DGraf_Persp; } // _20 (weak)
	virtual void setLookat();                                         // _24

	void makeLookat();
	void set(float, float, float);
	void setFovy(float);

	// _00 		= VTBL
	// _00-_BC	= J2DGrafContext
	float m_fovY; // _BC
	float _C0;    // _C0
	float _C4;    // _C4
	float _C8;    // _C8
};

struct J2DOrthoGraph : public J2DGrafContext {
	virtual ~J2DOrthoGraph() {};                                       // _08 (weak)
	virtual void setPort();                                            // _14
	virtual J2DGrafType getGrafType() const { return J2DGraf_Ortho; }; // _20 (weak)
	virtual void setLookat();                                          // _24

	// _00 VTBL
	J2DOrthoGraph();
	J2DOrthoGraph(f32, f32, f32, f32, f32, f32);
	void setOrtho(JGeometry::TBox2f const&, f32, f32);
	void scissorBounds(JGeometry::TBox2f*, JGeometry::TBox2f const*);

	f32 getWidthPower() const { return m_bounds.getWidth() / m_ortho.getWidth(); }
	f32 getHeightPower() const { return m_bounds.getHeight() / m_ortho.getHeight(); }

	// _00 		= VTBL
	// _00-_BC	= J2DGrafContext
	JGeometry::TBox2f m_ortho; // _BC
	f32 m_near;                // _CC
	f32 m_far;                 // _D0
};

void J2DFillBox(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor color);
void J2DFillBox(JGeometry::TBox2f const& param_0, JUtility::TColor param_1);
void J2DFillBox(f32, f32, f32, f32, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
void J2DFillBox(const JGeometry::TBox2f&, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);

void J2DDrawFrame(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor param_4, u8 param_5);
void J2DDrawFrame(JGeometry::TBox2f const& param_0, JUtility::TColor param_1, u8 param_2);

#endif
