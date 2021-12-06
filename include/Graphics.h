#ifndef _GRAPHICS_H
#define _GRAPHICS_H

#include "types.h"
#include "Dolphin/gx.h"
#include "Matrixf.h"
#include "Color4.h"
#include "JSystem/J2D/J2DGrafContext.h"

struct Color4;
template <typename T> struct IDelegate1;
template <typename A, typename B> struct IDelegate2;
struct JUTTexture;
struct Plane;
template <typename T> struct Rect;
typedef Rect<float> Rectf;
struct Viewport;

namespace Sys {
struct Sphere;
}

struct PerspPrintfInfo {
	inline PerspPrintfInfo() {};

	struct JUTFont* m_font; // _00
	uint _04;               // _04
	uint _08;               // _08
	int _0C;                // _0C
	float _10;              // _10
	Color4 _14;             // _14
	Color4 _18;             // _18
};

struct _GraphicsParent {
	ushort m_primitiveDrawCount; // _000
	char* m_tokens[0x20];        // _004
	u8 _084;                     // _084
	u8 _085;                     // _085
	u8 _086;                     // _086
	u8 _087;                     // _087
	u8 _088[4];                  // _088
	Matrixf _08C;                // _08C
	J2DOrthoGraph m_orthoGraph;  // _0BC
	J2DPerspGraph m_perspGraph;  // _190
	Viewport* _25C;              // _25C
	u8 _260[4];                  // _260
	int m_viewportCount;         // _264
	Viewport** m_viewports;      // _268
};

// Size: 0x2A0
struct Graphics : public _GraphicsParent {
	Graphics();
	virtual void doJ3DDrawInit();   // _00
	virtual void doJ3DDraw(int);    // _04
	virtual void doJ3DFrameInit();  // _08
	virtual void doJ3DAnimation();  // _0C
	virtual void doJ3DUpdateInit(); // _10
	virtual void doJ3DSetView(int); // _14
	virtual void doJ3DViewCalc();   // _18
	virtual void _1C() = 0;         // _1C

	void allocateViewports(int);
	void addViewport(Viewport*);
	void deleteViewports();
	int getNumActiveViewports();
	Viewport* getViewport(int);
	void mapViewport(IDelegate1<Viewport*>*);
	void mapViewport(IDelegate2<Graphics&, Viewport*>*);

	void renderJ3D();
	void updateJ3D();

	int findTokenIndex(char*);
	ushort getToken();
	char* getTokenName(ushort);
	void graphicsTokenCallback(ushort);
	void setToken(char*);

	void drawAxis(float, Matrixf*);
	void drawBox(Vector3f&, Vector3f*, float*, float*);
	void drawBox(Vector3f&, Vector3f&, Vector3f&, Vector3f&);
	void drawCone(Vector3f&, Vector3f&, float, int);
	void drawCylinder(Vector3f&, Vector3f&, float);
	void drawLine(Vector3f&, Vector3f&);
	void drawMarker(float, Matrixf*);
	void drawMesh(Matrixf*);
	void drawPlane(Plane&, float);
	void drawPoint(Vector3f&);
	void drawPoint(Vector3f*, ushort);
	void drawRect(Rectf&, Color4&);
	void drawRect(Rectf&, JUTTexture*);
	void drawRectangle(Rectf&, bool);
	void drawSphere(Vector3f&, float);
	void drawSphere(float, Matrixf*);
	void drawTexture(JUTTexture*, float, float, float, float);
	void drawTile(Sys::Sphere&, Sys::Sphere&, JUTTexture*);
	void drawTube(Vector3f&, Vector3f&, float, float);
	void initPrimDraw(Matrixf*);
	void loadPrimViewMtx();

	void clearZBuffer(Rectf&);
	void fillZBuffer(Rectf&, float);

	void initJ2DOrthoGraph(J2DOrthoGraph*);
	void initJ2DPerspGraph(J2DPerspGraph*);
	void setupJ2DOrthoGraphDefault();
	void setupJ2DPerspGraphDefault();

	void clearVtxDesc();
	void setVtxDesc(_GXAttr, _GXAttrType);
	void setVtxAttrFmt(_GXVtxFmt, _GXAttr, _GXCompCnt, _GXCompType, uchar);

	void disableLight();
	void disableTexture();

	void setTextureGX();

	void initPerspPrintf(Viewport*);
	void perspPrintf(PerspPrintfInfo&, Vector3f&, char*, ...);

	void initGX();
	void dirtyInitGX();
	void clearInitGX();

	// _GraphicsParent _000
	// VTBL _26C
	u8 _270[0x30]; // _270
};

#endif
