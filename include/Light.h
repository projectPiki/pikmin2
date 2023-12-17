#ifndef _LIGHT_H
#define _LIGHT_H

#include "CNode.h"
#include "Graphics.h"
#include "Camera.h"
#include "FogMgr.h"

enum ELightTypeFlag {
	TYPE_0 = 0,
	TYPE_1,
	TYPE_Spot,
	TYPE_3,
	TYPE_Spec,
};

struct AmbientLightObj : public CNode {
	AmbientLightObj(char* name)
	    : CNode(name)
	{
		mColor = Color4(128, 128, 128, 255);
	}

	virtual ~AmbientLightObj() { } // _08 (weak)

	Color4 mColor; // _18
};

/**
 * @struct LightObj
 * @brief Represents a light object in the game.
 * @extends CNode
 */
struct LightObj : public CNode {
	/**
	 * @enum LightDebugState
	 * @brief Represents the debug state of the light object.
	 */
	enum LightDebugState {
		LDS_None      = 0, /** No debug state */
		LDS_DrawDebug = 1  /** Debug state to draw debug information */
	};

	LightObj(char* name, GXLightID lightID, ELightTypeFlag lightType, JUtility::TColor lightColor);

	virtual ~LightObj() { }   // _08 (weak)
	virtual void update() { } // _10 (weak)

	/**
	 * Sets the properties of the light object based on the given matrix.
	 * The light color is scaled by the brightness value.
	 * The light position and direction are calculated based on the type of light.
	 *
	 * @param posMtx The matrix used for position and direction calculations.
	 */
	virtual void set(Matrixf&); // _14

	/**
	 * @brief Draws the position of the light object.
	 *
	 * @note ONLY WORKS IF DEBUG STATE IS SET!
	 *
	 * @param gfx The graphics object used for drawing.
	 * @param matrix The viewport matrix used for transforming the position.
	 */
	virtual void drawPos(Graphics& gfx); // _18

	/**
	 * @brief Draws the position of the light object.
	 *
	 * @note ONLY WORKS IF DEBUG STATE IS SET!
	 *
	 * @param gfx The graphics object used for drawing.
	 * @param posMtx The matrix used for transforming the position.
	 */
	virtual void drawPos(Graphics& gfx, Matrixf& transformationMtx); // _1C

	/**
	 * @brief Draws the position of the light object.
	 *
	 * @note ONLY WORKS IF DEBUG STATE IS SET!
	 *
	 * @param gfx The graphics object used for drawing.
	 * @param viewCam The target camera to render on.
	 */
	virtual void drawPos(Graphics& gfx, Camera& viewCam); // _20

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
	u8 mDebugState;      // _54, LightDebugState
};

struct LightMgr : public CNode {
	LightMgr(char*);
	void registLightObj(LightObj*);

	// virtual ~LightMgr() { }                // _08 (weak)
	virtual void update() { }              // _10 (weak)
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
	 * @brief Sets common properties for the main and specular lights.
	 *
	 * The angles are derived from mRotationAngle and mElevationAngle.
	 * The position is determined using spherical coordinates.
	 * The elevation vector is the normalized negative of the rotation vector.
	 * The default reference brightness of the main light is set to 0.85.
	 */
	void setCommonProc();

	virtual ~Mgr() { }                         // _08
	virtual void update();                     // _10
	virtual void set(Graphics& gfx);           // _14
	virtual void set(Matrixf& mtx);            // _18
	virtual void drawDebugInfo(Graphics& gfx); // _1C

	// _00 VTBL
	LightObj* mMainLight; // _50
	LightObj* mSpecLight; // _54
	f32 mRotationAngle;   // _58
	f32 mElevationAngle;  // _5C
};
} // namespace TreasureLight

#endif
