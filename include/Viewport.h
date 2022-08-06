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

	u16 m_vpId;         // _18
	u8 _1A;             // _1A
	u8 _1B;             // _1B
	f32 m_vpX1;         // _1C
	f32 m_vpY1;         // _20
	f32 m_vpX2;         // _24
	f32 m_vpY2;         // _28
	f32 m_x1;           // _2C
	f32 m_y1;           // _30
	f32 m_x2;           // _34
	f32 m_y2;           // _38
	s8 m_flags;         // _3C
	Matrixf* m_viewMat; // _40
	Camera* m_camera;   // _44
	f32 _48;            // _48
	f32 m_vpScaleY;     // _4C
	f32 port;           // _50
	f32 m_vpScaleX;     // _54
};

#endif
