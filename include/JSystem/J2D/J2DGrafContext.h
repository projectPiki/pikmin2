#ifndef _JSYSTEM_J2D_J2DGRAFCONTEXT_H
#define _JSYSTEM_J2D_J2DGRAFCONTEXT_H

#include "types.h"
#include "JSystem/JUtility.h"
#include "Dolphin/mtx.h"

namespace JGeometry {
template <typename T> struct TBox2;
typedef TBox2<float> TBox2f;
template <typename T> struct TVec2;
typedef TVec2<float> TVec2f;
} // namespace JGeometry

// TODO: These matrix members wouldn't actually be Matrixf, because this is in a
// separate library.
struct J2DGrafContext {
	J2DGrafContext(float, float, float, float);
	virtual ~J2DGrafContext();                      // _00
	virtual void place(const JGeometry::TBox2f&);   // _04
	virtual void place(float, float, float, float); // _08
	virtual void setPort();                         // _0C
	virtual void setup2D();                         // _10
	virtual void setScissor();                      // _14
	virtual u32 getGrafType() const;                // _18
	virtual void setLookat();                       // _1C

	void drawFrame(const JGeometry::TBox2f&);
	void fillBox(const JGeometry::TBox2f&);
	void lineTo(JGeometry::TVec2f&);
	void scissor(const JGeometry::TBox2f&);
	void setColor(JUtility::TColor, JUtility::TColor, JUtility::TColor,
	              JUtility::TColor);
	void setLineWidth(u8);

	// VTBL _00
	float _04;            // _04
	float _08;            // _08
	float _0C;            // _0C
	float _10;            // _10
	float _14;            // _14
	float _18;            // _18
	float _1C;            // _1C
	float _20;            // _20
	JUtility::TColor _24; // _24
	JUtility::TColor _28; // _28
	JUtility::TColor _2C; // _2C
	JUtility::TColor _30; // _30
	u8 m_lineWidth;       // _34
	float _38;            // _38
	float _3C;            // _3C
	Mtx _40;              // _40 /* Might actually be larger than Matrixf. See
	         // C_MTXPerspective, called by J2DPerspGraph::setPort */
	u8 _70[0x10]; // _70
	Mtx _80;      // _80
	u8 _B0;       // _B0
	u8 _B1;       // _B1
	u8 _B2;       // _B2
	u8 _B3;       // _B3
	u8 _B4;       // _B4
	u8 _B5;       // _B5
	u8 _B6;       // _B6
	u8 _B7;       // _B7
	u8 _B8;       // _B8
};

struct J2DPerspGraph : public J2DGrafContext {
	J2DPerspGraph();
	virtual ~J2DPerspGraph();        // _00
	virtual void setPort();          // _0C
	virtual u32 getGrafType() const; // _18
	virtual void setLookat();        // _1C

	void makeLookat();
	void set(float, float, float);
	void setFovy(float);

	float m_fovY; // _BC
	float _C0;    // _C0
	float _C4;    // _C4
	float _C8;    // _C8
};

struct J2DOrthoGraph : public J2DGrafContext {
	u8 _BC[0x18]; // _BC
};

#endif
