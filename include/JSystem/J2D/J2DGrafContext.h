#ifndef _JSYSTEM_J2D_J2DGRAFCONTEXT_H
#define _JSYSTEM_J2D_J2DGRAFCONTEXT_H

#include "types.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JUtility.h"
#include "Dolphin/mtx.h"

// TODO: These matrix members wouldn't actually be Matrixf, because this is in a
// separate library.
struct J2DGrafContext {
	J2DGrafContext(float, float, float, float);
	virtual ~J2DGrafContext() {};                 // _08
	virtual void place(const JGeometry::TBox2f&); // _0C
	virtual void place(f32 x, f32 y, f32 width, f32 height)
	{
		JGeometry::TBox2<f32> box(x, y, x + width, y + height);
		this->place(box);
	}                                // _10
	virtual void setPort();          // _14
	virtual void setup2D();          // _18
	virtual void setScissor();       // _1C
	virtual u32 getGrafType() const; // _20
	virtual void setLookat();        // _24

	void drawFrame(const JGeometry::TBox2f&);
	void fillBox(const JGeometry::TBox2f&);
	void lineTo(JGeometry::TVec2f);

	void lineTo(f32 x, f32 y) { this->lineTo(JGeometry::TVec2<f32>(x, y)); }
	void moveTo(f32 x, f32 y) { this->moveTo(JGeometry::TVec2<f32>(x, y)); }

	void moveTo(JGeometry::TVec2<f32> pos) { m_PrevPos = pos; }

	void scissor(const JGeometry::TBox2f&);
	void setColor(JUtility::TColor c) { this->setColor(c, c, c, c); }
	void setColor(JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
	void setLineWidth(u8);

	// VTBL _00
	JGeometry::TBox2<f32> m_Bounds;        // _04
	JGeometry::TBox2<f32> m_ScissorBounds; // _14
	JUtility::TColor m_ColorTL;            // _24
	JUtility::TColor m_ColorTR;            // _28
	JUtility::TColor m_ColorBR;            // _2C
	JUtility::TColor m_ColorBL;            // _30
	u8 m_lineWidth;                        // _34
	JGeometry::TVec2<f32> m_PrevPos;       // _38
	Mtx44 m_Mtx44;                         // _40 /* Might actually be larger than Matrixf. See
	                                       // C_MTXPerspective, called by J2DPerspGraph::setPort */
	Mtx m_PosMtx;                          // _80
	u8 _B0;                                // _B0
	u8 _B1;                                // _B1
	u8 _B2;                                // _B2
	u8 m_LinePart;                         // _B3
	u8 _B4;                                // _B4
	u8 _B5;                                // _B5
	u8 m_BoxPart;                          // _B6
	u8 _B7;                                // _B7
	u8 _B8;                                // _B8
};

struct J2DPerspGraph : public J2DGrafContext {
	J2DPerspGraph();
	virtual ~J2DPerspGraph();        // _08
	virtual void setPort();          // _14
	virtual u32 getGrafType() const; // _20
	virtual void setLookat();        // _24

	void makeLookat();
	void set(float, float, float);
	void setFovy(float);

private:
	float m_fovY; // _BC
	float _C0;    // _C0
	float _C4;    // _C4
	float _C8;    // _C8
};

struct J2DOrthoGraph : public J2DGrafContext {
	virtual ~J2DOrthoGraph();                      // _08
	virtual void setPort();                        // _14
	virtual u32 getGrafType() const { return 1; }; // _20
	virtual void setLookat();                      // _24

	// _00 VTBL
	J2DOrthoGraph();
	J2DOrthoGraph(f32, f32, f32, f32, f32, f32);
	void setOrtho(JGeometry::TBox2<f32> const&, f32, f32);
	void scissorBounds(JGeometry::TBox2<f32>*, JGeometry::TBox2<f32> const*);

	f32 getWidthPower() const { return m_Bounds.getWidth() / m_Ortho.getWidth(); }
	f32 getHeightPower() const { return m_Bounds.getHeight() / m_Ortho.getHeight(); }

private:
	JGeometry::TBox2<f32> m_Ortho; // _BC
	f32 m_Near;                    // _CC
	f32 m_Far;                     // _D0
};

void J2DFillBox(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor color);
void J2DFillBox(JGeometry::TBox2<f32> const& param_0, JUtility::TColor param_1);
void J2DFillBox(f32, f32, f32, f32, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
void J2DFillBox(const JGeometry::TBox2<f32>&, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
void J2DDrawFrame(f32 param_0, f32 param_1, f32 param_2, f32 param_3, JUtility::TColor param_4, u8 param_5);
void J2DDrawFrame(JGeometry::TBox2<f32> const& param_0, JUtility::TColor param_1, u8 param_2);

#endif
