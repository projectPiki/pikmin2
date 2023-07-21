#ifndef _LIGHT_H
#define _LIGHT_H

#include "CNode.h"
#include "Graphics.h"
#include "Camera.h"
#include "FogMgr.h"

enum ELightTypeFlag {
	TYPE_0,
	TYPE_1,
	TYPE_2,
	TYPE_3,
	TYPE_4,
};

struct AmbientLightObj : public CNode {
	AmbientLightObj(char* name, Color4 color)
	    : CNode(name)
	{
		mColor = color;
	}

	virtual ~AmbientLightObj() { } // _08 (weak)

	Color4 mColor; // _18
};

struct LightObj : public CNode {
	LightObj(char*, _GXLightID, ELightTypeFlag, JUtility::TColor);

	virtual ~LightObj() { }                    // _08 (weak)
	virtual void update();                     // _10 (weak)
	virtual void set(Matrixf&);                // _14
	virtual void drawPos(Graphics&);           // _18
	virtual void drawPos(Graphics&, Matrixf&); // _1C
	virtual void drawPos(Graphics&, Camera&);  // _20

	inline void setColor(Color4& color) { mColor.set(color); }

	// _00 VTBL
	u8 mLightID;         // _18, GXLightID
	u8 mTypeFlag;        // _19
	Vector3f mPosition;  // _1C
	Vector3f mElevation; // _28
	Color4 mColor;       // _34, u_color
	f32 mBrightness;     // _38
	f32 mRefDistance;    // _3C
	f32 mRefBrightness;  // _40
	f32 mCutoffAngle;    // _44
	u8 mDistAttnFn;      // _48, GXDistAttnFn
	u8 mSpotFn;          // _49, GXSpotFn
	f32 mKScale;         // _4C
	f32 mSphereRadius;   // _50
	u8 _54;              // _54
};

struct LightMgr : public CNode {
	LightMgr(char*);
	void registLightObj(LightObj*);

	// virtual ~LightMgr() { }                // _08 (weak)
	virtual void update();                 // _10 (weak)
	virtual void set(Graphics&);           // _14
	virtual void set(Matrixf&);            // _18
	virtual void drawDebugInfo(Graphics&); // _1C

	// _00 VTBL
	AmbientLightObj mAmbientLight; // _18
	CNode mLightObjChain;          // _34
	int mLightCount;               // _4C
};

namespace TreasureLight {
/**
 * @brief The Treasure Light Manager
 *
 * This class handles the construction and setup of the lights used during the "treasure collected / presentation"
 * scenes.
 */
struct Mgr : public LightMgr {
	Mgr();

	/**
	 * @brief Common procedure for the "Set" virtual functions
	 *
	 * Calculates the position and rotation of the main and specular lights by converting the rotation and elevation
	 * angles to spherical coordinates. Whenever you update the manager by assigning it a new "Graphics" handle, or a
	 * new Matrix transform, this function is called.
	 */
	void setCommonProc();

	virtual ~Mgr() { }                     // _08
	virtual void update();                 // _10
	virtual void set(Graphics&);           // _14
	virtual void set(Matrixf&);            // _18
	virtual void drawDebugInfo(Graphics&); // _1C

	// _00 VTBL
	LightObj* mMainLight; // _50
	LightObj* mSpecLight; // _54
	f32 mRotationAngle;   // _58
	f32 mElevationAngle;  // _5C
};
} // namespace TreasureLight

#endif
