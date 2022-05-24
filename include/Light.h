#ifndef _LIGHT_H
#define _LIGHT_H

#include "types.h"
#include "CNode.h"
#include "Graphics.h"
#include "Camera.h"

enum ELightTypeFlag {
	TYPE_0,
	TYPE_1,
	TYPE_2,
	TYPE_3,
	TYPE_4,
};

struct AmbientLightObj : public CNode {
	virtual ~AmbientLightObj(); // _08
	                            // virtual void getChildCount(); // _10

	// _00 VTBL

	/*
	AmbientLightObj* _04; // _04
	AmbientLightObj* _08; // _08
	AmbientLightObj* _0C; // _0C
	AmbientLightObj* _10; // _10
	char* m_name;         // _14
	*/
};

struct LightObj : public CNode {
	LightObj(char*, _GXLightID, ELightTypeFlag, JUtility::TColor);

	virtual ~LightObj(); // _08
	// virtual void getChildCount();            // _0C
	virtual void update();                     // _10
	virtual void set(Matrixf&);                // _14
	virtual void drawPos(Graphics&);           // _18
	virtual void drawPos(Graphics&, Matrixf&); // _1C
	virtual void drawPos(Graphics&, Camera&);  // _20

	// _00 VTBL

	u8 m_lightID;              // _18
	u8 m_typeFlag;             // _19
	Vector3f m_position;       // _1C
	Vector3f m_offset;         // _28
	Color4 m_color;            // _34
	f32 m_colorScale;          // _38
	f32 m_float_3C;            // _3C
	f32 m_float_40;            // _40
	f32 m_cutoffAngle;         // _44
	u8 m_distAttnTypeMaybe_48; // _48
	u8 m_spotType;             // _49
	f32 m_kScale;              // _4C
	f32 m_sphereRadius;        // _50
	u8 m_flag_54;              // _54
};

struct LightMgr : public CNode {
	LightMgr(char*);
	void registLightObj(LightObj*);

	virtual ~LightMgr(); // _08
	// virtual void getChildCount();        // _0C
	virtual void update();                 // _10
	virtual void set(Graphics&);           // _14
	virtual void set(Matrixf&);            // _18
	virtual void drawDebugInfo(Graphics&); // _1C

	// _00 VTBL

	AmbientLightObj m_ambientLightObj; // _18
	Color4 m_ambientLightColor;        // _30
	CNode m_lightObjChain;             // _34
	int m_lightCount;                  // _4C
};

namespace TreasureLight {
struct Mgr : public LightMgr {
	Mgr();
	void setCommonProc();

	virtual ~Mgr() {}; // _08
	// virtual void getChildCount();        // _0C
	virtual void update();                 // _10
	virtual void set(Graphics&);           // _14
	virtual void set(Matrixf&);            // _18
	virtual void drawDebugInfo(Graphics&); // _1C

	// _00 VTBL

	LightObj* m_lightObj_50; // _50
	LightObj* m_lightObj_54; // _54
	f32 m_float_pos;         // _58
	f32 m_float_offset;      // _5C
};
} // namespace TreasureLight

#endif
