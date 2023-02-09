#ifndef _VIEWPORT_H
#define _VIEWPORT_H

#include "Rect.h"
#include "types.h"

struct Camera;
struct J2DGrafContext;
struct J2DOrthoGraph;
struct Matrixf;
struct CNode;

namespace SysShape {
struct Model;
} // namespace SysShape

struct Viewport : CNode {
	Viewport();

	virtual ~Viewport(); // _08 (weak)

	void draw2dframe(J2DGrafContext&);
	void getAspect();
	Matrixf* getMatrix(bool);
	void refresh();
	SysShape::Model* setJ3DViewMtx(bool);
	void setOrthoGraph2d(J2DOrthoGraph&);
	void setProjection();
	void setRect(Rectf&);
	void setViewport();
	void updateCameraAspect();
	bool viewable();

	u16 mVpId;         // _18
	u8 _1A;            // _1A
	u8 _1B;            // _1B
	f32 mVpX1;         // _1C
	f32 mVpY1;         // _20
	f32 mVpX2;         // _24
	f32 mVpY2;         // _28
	f32 mX1;           // _2C
	f32 mY1;           // _30
	f32 mX2;           // _34
	f32 mY2;           // _38
	s8 mFlags;         // _3C
	Matrixf* mViewMat; // _40
	LookAtCamera* mCamera;   // _44
	f32 _48;           // _48
	f32 mVpScaleY;     // _4C
	f32 port;          // _50
	f32 mVpScaleX;     // _54
};

#endif
