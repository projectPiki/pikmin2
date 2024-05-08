#ifndef _JSYSTEM_J2D_J2DGRAFCONTEXT_H
#define _JSYSTEM_J2D_J2DGRAFCONTEXT_H

#include "types.h"
#include "JSystem/JGeometry.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JUtility/TColor.h"
#include "Dolphin/mtx.h"

/**
 * @fabricated
 */
enum J2DGrafType {
	J2DGraf_Base  = 0,
	J2DGraf_Ortho = 1,
	J2DGraf_Persp = 2,
};

struct J2DGrafContext {
	J2DGrafContext(f32, f32, f32, f32);

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

	void moveTo(JGeometry::TVec2f pos) { mPrevPos = pos; }

	void scissor(const JGeometry::TBox2f&);
	void setColor(JUtility::TColor c) { setColor(c, c, c, c); }
	void setColor(JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
	void setLineWidth(u8);

	// inlined
	void line(JGeometry::TVec2f, JGeometry::TVec2f);

	// _00 VTBL
	JGeometry::TBox2f mBounds;        // _04
	JGeometry::TBox2f mScissorBounds; // _14
	JUtility::TColor mColorTL;        // _24, top left
	JUtility::TColor mColorTR;        // _28, top right
	JUtility::TColor mColorBR;        // _2C, bottom right
	JUtility::TColor mColorBL;        // _30, bottom left
	u8 mLineWidth;                    // _34
	JGeometry::TVec2f mPrevPos;       // _38
	Mtx44 mMtx44;                     // _40
	Mtx mPosMtx;                      // _80
	J2DGrafBlend _B0;                 // _B0
	J2DGrafBlend mLinePart;           // _B3
	J2DGrafBlend mBoxPart;            // _B6
};

struct J2DPerspGraph : public J2DGrafContext {
	J2DPerspGraph();

	virtual ~J2DPerspGraph() { }                                      // _08 (weak)
	virtual void setPort();                                           // _14
	virtual J2DGrafType getGrafType() const { return J2DGraf_Persp; } // _20 (weak)
	virtual void setLookat();                                         // _24

	void makeLookat();
	void set(f32, f32, f32);
	void setFovy(f32);

	inline f32 getFovY() const { return mFovY; }

	// _00 		= VTBL
	// _00-_BC	= J2DGrafContext
	f32 mFovY; // _BC
	f32 _C0;   // _C0
	f32 _C4;   // _C4
	f32 _C8;   // _C8
};

struct J2DOrthoGraph : public J2DGrafContext {
	J2DOrthoGraph();
	J2DOrthoGraph(f32 left, f32 top, f32 right, f32 bottom, f32 nearPlaneDistance, f32 farPlaneDistance);

	virtual ~J2DOrthoGraph() {};                                       // _08 (weak)
	virtual void setPort();                                            // _14
	virtual J2DGrafType getGrafType() const { return J2DGraf_Ortho; }; // _20 (weak)
	virtual void setLookat();                                          // _24

	void setOrtho(JGeometry::TBox2<f32> const& bounds, f32 far, f32 near);
	void scissorBounds(JGeometry::TBox2<f32>* outputBounds, JGeometry::TBox2<f32> const* inputBounds);

	f32 getWidthPower() const { return mBounds.getWidth() / mOrtho.getWidth(); }
	f32 getHeightPower() const { return mBounds.getHeight() / mOrtho.getHeight(); }

	void setOrtho(f32 startX, f32 startY, f32 width, f32 height, f32 nearPlane, f32 farPlane)
	{
		JGeometry::TBox2<f32> bounds(startX, startY, startX + width, startY + height);
		setOrtho(bounds, nearPlane, farPlane);
	}

	// _00 		= VTBL
	// _00-_BC	= J2DGrafContext
	JGeometry::TBox2f mOrtho; // _BC
	f32 mNear;                // _CC
	f32 mFar;                 // _D0
};

void J2DFillBox(f32 startX, f32 startY, f32 width, f32 height, JUtility::TColor fillColor);
void J2DFillBox(JGeometry::TBox2<f32> const& boxDimensions, JUtility::TColor fillColor);
void J2DFillBox(f32 startX, f32 startY, f32 endX, f32 endY, JUtility::TColor color1, JUtility::TColor color2, JUtility::TColor color3,
                JUtility::TColor color4);
void J2DFillBox(const JGeometry::TBox2<f32>& boxDimensions, JUtility::TColor color1, JUtility::TColor color2, JUtility::TColor color3,
                JUtility::TColor color4);

void J2DDrawFrame(f32 startX, f32 startY, f32 width, f32 height, JUtility::TColor frameColor, u8 lineWidth);
void J2DDrawFrame(JGeometry::TBox2<f32> const& frameBounds, JUtility::TColor frameColor, u8 lineWidth);

void J2DDrawLine(f32 startX, f32 startY, f32 endX, f32 endY, JUtility::TColor color, int lineWidth);

#endif
