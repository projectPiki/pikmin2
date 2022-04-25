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
	virtual ~J2DGrafContext();                      // _08
	virtual void place(const JGeometry::TBox2f&);   // _0C
	virtual void place(float, float, float, float); // _10
	virtual void setPort();                         // _14
	virtual void setup2D();                         // _18
	virtual void setScissor();                      // _1C
	virtual u32 getGrafType() const;                // _20
	virtual void setLookat();                       // _24

	void drawFrame(const JGeometry::TBox2f&);
	void fillBox(const JGeometry::TBox2f&);
	void lineTo(JGeometry::TVec2f&);
	void scissor(const JGeometry::TBox2f&);
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
	virtual void setup2D();                        // _18
	virtual void setScissor();                     // _1C
	virtual u32 getGrafType() const { return 1; }; // _20
	virtual void setLookat();                      // _24

	// _00 VTBL
private:
	JGeometry::TBox2<f32> m_Ortho; // _BC
	f32 m_Near;                    // _CC
	f32 m_Far;                     // _D0
};

#endif
