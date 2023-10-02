#ifndef _GRAPHICS_H
#define _GRAPHICS_H

#include "types.h"
#include "Dolphin/gx.h"
#include "Matrixf.h"
#include "Color4.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JFramework/JFWSystem.h"

struct Color4;
template <typename T>
struct IDelegate1;
template <typename A, typename B>
struct IDelegate2;
struct JUTTexture;
struct Plane;
template <typename T>
struct Rect;
typedef Rect<f32> Rectf;
struct Viewport;

namespace Sys {
struct Sphere;
}

struct PerspPrintfInfo {
	inline PerspPrintfInfo(f32 x = 1.0f)
	    : mFont(JFWSystem::systemFont)
	    , _04(0)
	    , _08(0)
	    , _0C(0)
	    , mScale(x)
	    , mColorA(Color4(0x66, 0x99, 0xFF, 0xFF))
	    , mColorB(Color4(0, 0x66, 0xFF, 0xFF))
	{
	}

	struct JUTFont* mFont; // _00
	u32 _04;               // _04
	u32 _08;               // _08
	int _0C;               // _0C
	f32 mScale;            // _10
	Color4 mColorA;        // _14
	Color4 mColorB;        // _18
};

struct _GraphicsParent {
#define GRAPHICS_TOKEN_MAX 32

	u16 mActiveTokens;                 // _000
	char* mTokens[GRAPHICS_TOKEN_MAX]; // _004
	Color4 _084;                       // _084
	Color4 _088;                       // _088
	Matrixf mMatrix;                   // _08C
	J2DOrthoGraph mOrthoGraph;         // _0BC
	J2DPerspGraph mPerspGraph;         // _190
	Viewport* mCurrentViewport;        // _25C
	int mMaxViewports;                 // _260
	int mActiveViewports;              // _264
	Viewport** mViewports;             // _268
};

// Size: 0x2A0
struct Graphics : public _GraphicsParent {
	Graphics();

	virtual void doJ3DDrawInit() { }   // _08 (weak)
	virtual void doJ3DDraw(int) { }    // _0C (weak)
	virtual void doJ3DFrameInit() { }  // _10 (weak)
	virtual void doJ3DAnimation() { }  // _14 (weak)
	virtual void doJ3DUpdateInit() { } // _18 (weak)
	virtual void doJ3DSetView(int) { } // _1C (weak)
	virtual void doJ3DViewCalc() { }   // _20 (weak)

	void allocateViewports(int count);
	void addViewport(Viewport* newVp);
	void deleteViewports();
	int getNumActiveViewports();
	Viewport* getViewport(int vpIndex);
	void mapViewport(IDelegate1<Viewport*>*);
	void mapViewport(IDelegate2<Graphics&, Viewport*>*);

	void renderJ3D();
	void updateJ3D();

	int findTokenIndex(char*);
	u16 getToken();
	char* getTokenName(u16);
	void graphicsTokenCallback(u16);
	void setToken(char*);

	void drawAxis(f32, Matrixf*);
	void drawBox(Vector3f&, Vector3f*, f32*, f32*);
	void drawBox(Vector3f&, Vector3f&, Vector3f&, Vector3f&);
	void drawCone(Vector3f&, Vector3f&, f32, int);
	void drawCylinder(Vector3f&, Vector3f&, f32);
	void drawLine(Vector3f&, Vector3f&);
	void drawMarker(f32, Matrixf*);
	void drawMesh(Matrixf*);
	void drawPlane(Plane&, f32);
	void drawPoint(Vector3f&);
	void drawPoint(Vector3f*, u16);
	void drawRect(Rectf&, Color4&);
	void drawRect(Rectf&, JUTTexture*);
	void drawRectangle(Rectf&, bool);
	void drawSphere(Vector3f&, f32);
	void drawSphere(f32, Matrixf*);
	void drawTexture(JUTTexture*, f32, f32, f32, f32);
	void drawTile(Sys::Sphere&, Sys::Sphere&, JUTTexture*);
	void drawTube(Vector3f&, Vector3f&, f32, f32);
	void initPrimDraw(Matrixf*);
	void loadPrimViewMtx();

	void clearZBuffer(Rectf&);
	void fillZBuffer(Rectf&, f32);

	void initJ2DOrthoGraph(J2DOrthoGraph*);
	void initJ2DPerspGraph(J2DPerspGraph*);
	void setupJ2DOrthoGraphDefault();
	void setupJ2DPerspGraphDefault();

	void clearVtxDesc();
	void setVtxDesc(_GXAttr, _GXAttrType);
	void setVtxAttrFmt(_GXVtxFmt, _GXAttr, _GXCompCnt, _GXCompType, u8);

	void disableLight();
	void disableTexture();

	void setTextureGX();

	void initPerspPrintf(Viewport*);
	void perspPrintf(PerspPrintfInfo&, Vector3f&, char*, ...);

	static void initGX();
	static void dirtyInitGX();
	static void clearInitGX();

	// _GraphicsParent _000
	// VTBL _26C
	u8 _270[0x2E]; // _270

	static char* lastTokenName;
};

#endif
