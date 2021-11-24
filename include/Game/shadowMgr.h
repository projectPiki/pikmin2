#ifndef _GAME_SHADOWMGR_H
#define _GAME_SHADOWMGR_H

#include "BaseParm.h"
#include "CNode.h"
#include "Color4.h"
#include "Parameters.h"
#include "Rect.h"
#include "Vector3.h"

struct Camera;
struct Color4;
struct Matrixf;
struct Stream;
struct Viewport;

namespace Game {
struct Creature;

struct ShadowParam {
	Vector3f m_position; // _00
	float _0C;           // _0C
	float _10;           // _10
	float _14;           // _14
	float m_height;      // _18
	float m_radius;      // _1C
};

// Size: 0x60
struct ShadowParms : public Parameters {
	Parm<float> m_lodNear; // _0C
	Parm<float> m_lodFar;  // _34
	void* m_end;           // _5C
};

// Size: 0x20
struct JointShadowRootNode : public CNode {
	Creature* m_creature; // _18
	u8 _1C;               // _1C
};

// Size: 0x24
struct ShadowNode : public CNode {
	Creature* m_creature; // _18
	u32 _1C;              // _1C
	uint _20;             // _20 /* bitfield */
};

struct CylinderBase {
	CylinderBase();

	virtual void setFilterTextureID(int);     // _00
	virtual void drawInit();                  // _04
	virtual void drawCylinder(Matrixf&, int); // _08
	virtual void drawFinish();                // _0C

	void setColor(Color4*);
	void setCameraParms(Camera*, int);
	void makeSRT(Matrixf&, ShadowParam&);
	void getCylinderType(ShadowParam&, int);
	void setupFillGX();
	void setupDrawCylinderGX();
	void setupFilterGX();
	void setOrthoProjection();
	void setOrthoCamera();
	void setScissorViewport();
	void fillShadowRect();
	void fillRectAlphaZero();
	void drawCylinderList(int);

	// VTBL _00
	void* m_displayListObj; // _04
	Color4* m_color;        // _08
	ShadowParms* m_parms;   // _0C
	Rectf _10;              // _10
	Vector3f _20[2];        // _20
	Vector3f _38[2];        // _38
	float _50;              // _50
};

struct ShadowCylinder2 : public CylinderBase {
	u8 _54[8]; // _54
	void* _5C; // _5C
	int _60;   // _60
};

struct ShadowCylinder3 : public CylinderBase {
	u8 _54[4]; // _54
};

// Size: 0x50
struct ShadowMgr : public CNode {
	virtual ~ShadowMgr();          // _00
	virtual int getChildCount();   // _04
	virtual void getSize();        // _08
	virtual void getMax();         // _0C
	virtual void getCreature(int); // _10
	virtual void getFirst();       // _14
	virtual void getNext(int);     // _18
	virtual void isDone(int);      // _1C
	virtual void write(Stream&);   // _20
	virtual void read(Stream&);    // _24

	// CNode _00
	int _18;
	int _1C; // _1C /* Sodium called this max? Unsure why. */
	ShadowNode* _20;
	ShadowNode* _24;
	ShadowCylinder2* _28;
	ShadowCylinder3* _2C;
	Viewport** m_viewports;
	JointShadowRootNode* _34;
	JointShadowRootNode* _38;
	u8 _3C;
	u8 _3D;
	int _40;
	int _44;
	Color4 m_color;
	ShadowParms* m_parms;
};
} // namespace Game

#endif
