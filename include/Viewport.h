#ifndef _VIEWPORT_H
#define _VIEWPORT_H

#include "Rect.h"
#include "types.h"
#include "CNode.h"
#include "Camera.h"

struct J2DGrafContext;
struct J2DOrthoGraph;
struct Matrixf;
struct CNode;

namespace SysShape {
struct Model;
} // namespace SysShape

struct Viewport : CNode {
	Viewport();

	virtual ~Viewport() { } // _08 (weak)

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

	inline void setCamera(Camera* cam)
	{
		mCamera = static_cast<LookAtCamera*>(cam);
		updateCameraAspect();
	}

	inline Camera* getCamera() { return mCamera; }

	u16 mVpId;             // _18
	Rectf mBounds;         // _1C
	Rectf mBounds2;        // _2C
	s8 mFlags;             // _3C
	Matrixf* mViewMat;     // _40
	LookAtCamera* mCamera; // _44
	f32 _48;               // _48
	f32 mVpScaleY;         // _4C
	f32 port;              // _50
	f32 mVpScaleX;         // _54
};

#endif
