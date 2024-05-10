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

#define VIEWPORT_0 (0)
#define VIEWPORT_1 (1)
#define VIEWPORT_2 (2) // unused
#define VIEWPORT_3 (3) // unused

#define PLAYER1_VIEWPORT (VIEWPORT_0)
#define PLAYER2_VIEWPORT (VIEWPORT_1)

struct Viewport : public CNode {
	Viewport();

	virtual ~Viewport() { } // _08 (weak)

	// Matrix and view related methods
	Matrixf* getMatrix(bool getCurrentViewMtx);
	SysShape::Model* setJ3DViewMtx(bool);
	void setProjection();
	void updateCameraAspect();

	// Drawing and rendering methods
	void draw2dframe(J2DGrafContext&);
	void refresh();

	// Viewport and rectangle methods
	void setRect(Rectf&);
	void setViewport();
	bool viewable();

	// Other methods
	void getAspect();
	void setOrthoGraph2d(J2DOrthoGraph&);

	inline void setCamera(Camera* cam)
	{
		mCamera = static_cast<LookAtCamera*>(cam);
		updateCameraAspect();
	}

	inline Matrixf* getViewMatrix()
	{
		if (mCamera) {
			return mCamera->getViewMatrix(false);
		}

		return mViewMat;
	}

	inline Camera* getCamera() { return mCamera; }

	u16 mVpId;             // _18
	Rectf mBounds;         // _1C
	Rectf mBounds2;        // _2C
	s8 mFlags;             // _3C
	Matrixf* mViewMat;     // _40
	LookAtCamera* mCamera; // _44
	Vector2f mOffset;      // _48
	Vector2f mSplitRatio;  // _50
};

#endif
