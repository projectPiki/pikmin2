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
		m_color = color;
	}

	virtual ~AmbientLightObj() { } // _08 (weak)

	Color4 m_color; // _18
};

struct LightObj : public CNode {
	LightObj(char*, _GXLightID, ELightTypeFlag, JUtility::TColor);

	virtual ~LightObj();                       // _08 (weak)
	virtual void update();                     // _10 (weak)
	virtual void set(Matrixf&);                // _14
	virtual void drawPos(Graphics&);           // _18
	virtual void drawPos(Graphics&, Matrixf&); // _1C
	virtual void drawPos(Graphics&, Camera&);  // _20

	// _00 VTBL
	u8 m_lightID;         // _18
	u8 m_typeFlag;        // _19
	Vector3f m_rotation;  // _1C
	Vector3f m_elevation; // _28
	Color4 m_color;       // _34
	f32 m_colorScale;     // _38
	f32 _3C;              // _3C
	f32 _40;              // _40
	f32 m_cutoffAngle;    // _44
	u8 _48;               // _48, distance attenuation type?
	u8 m_spotType;        // _49
	f32 _4C;              // _4C, kScale?
	f32 m_sphereRadius;   // _50
	u8 _54;               // _54
};

struct LightMgr : public CNode {
	LightMgr(char*);
	void registLightObj(LightObj*);

	virtual ~LightMgr() { }                // _08 (weak)
	virtual void update();                 // _10 (weak)
	virtual void set(Graphics&);           // _14
	virtual void set(Matrixf&);            // _18
	virtual void drawDebugInfo(Graphics&); // _1C

	// _00 VTBL
	AmbientLightObj m_ambientLight; // _18
	CNode m_lightObjChain;          // _34
	int m_lightCount;               // _4C
};

namespace TreasureLight {
/**
 * @brief The Treasure Light Manager
 *
 * This class handles the construction and setup of the lights used during the "treasure collected / presentation" scenes.
 */
struct Mgr : public LightMgr {
	Mgr();

	/**
	 * @brief Common procedure for the "Set" virtual functions
	 *
	 * Calculates the position and rotation of the main and specular lights by converting the rotation and elevation angles to spherical
	 * coordinates. Whenever you update the manager by assigning it a new "Graphics" handle, or a new Matrix transform, this function is
	 * called.
	 */
	void setCommonProc();

	virtual ~Mgr() { }                     // _08
	virtual void update();                 // _10
	virtual void set(Graphics&);           // _14
	virtual void set(Matrixf&);            // _18
	virtual void drawDebugInfo(Graphics&); // _1C

	// _00 VTBL
	LightObj* m_mainLight; // _50
	LightObj* m_specLight; // _54
	f32 m_rotationAngle;   // _58
	f32 m_elevationAngle;  // _5C
};
} // namespace TreasureLight

#endif
