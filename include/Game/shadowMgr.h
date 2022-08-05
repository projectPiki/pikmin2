#ifndef _GAME_SHADOWMGR_H
#define _GAME_SHADOWMGR_H

#include "BaseParm.h"
#include "CNode.h"
#include "Color4.h"
#include "Parameters.h"
#include "Rect.h"
#include "Vector3.h"
#include "Sys/Sphere.h"

struct Camera;
struct Color4;
struct Graphics;
struct Matrixf;
struct Stream;
struct Viewport;

namespace Game {
struct Creature;
struct JointShadowRootNode;

// Size: 0x20
struct ShadowParam {
	Vector3f m_position;          // _00
	Sys::Sphere m_boundingSphere; // _0C
	float _1C;                    // _1C
};

// Size: 0x60
struct ShadowParms : public Parameters {
	Parm<float> m_lodNear; // _0C
	Parm<float> m_lodFar;  // _34
	void* m_end;           // _5C
};

// Size: 0x24
struct ShadowNode : public CNode {
	virtual ~ShadowNode(); // _00

	Creature* m_creature; // _18
	u32 _1C;              // _1C
	u32 _20;              // _20 /* bitfield */
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
	virtual void setFilterTextureID(int);     // _00
	virtual void drawInit();                  // _04
	virtual void drawCylinder(Matrixf&, int); // _08
	virtual void drawFinish();                // _0C

	u8 _54[8]; // _54
	void* _5C; // _5C
	int _60;   // _60
};

struct ShadowCylinder3 : public CylinderBase {
	virtual void setFilterTextureID(int);     // _00
	virtual void drawInit();                  // _04
	virtual void drawCylinder(Matrixf&, int); // _08
	virtual void drawFinish();                // _0C

	u8 _54[4]; // _54
};

// Size: 0x50
struct ShadowMgr : public CNode {
	virtual ~ShadowMgr();               // _00
	virtual int getChildCount();        // _04
	virtual int getSize();              // _08
	virtual int getMax();               // _0C
	virtual Creature* getCreature(int); // _10
	virtual int getFirst();             // _14
	virtual int getNext(int);           // _18
	virtual bool isDone(int);           // _1C
	virtual void write(Stream&);        // _20
	virtual void read(Stream&);         // _24

	void init();
	void update();
	void loadResource();
	void readShadowParms(char*);

	u32 getShadowMaskType(int, int);
	u32 getShadowType(int, int);

	void setShadowColor(Color4*);
	void resetShadowColor();

	void setViewport(Viewport*, int);
	void drawShadowOn();
	void drawShadowOff();
	void draw(Graphics&);
	void draw(Graphics&, int);

	void killAll();

	void createShadow(Creature*);
	void addShadow(Creature*);
	void delShadow(Creature*);
	void killShadow(Creature*);

	void addHeadShadow(Creature*);

	void addNormalShadow(Creature*);
	void delNormalShadow(Creature*);
	void killNormalShadow(Creature*);
	bool isDrawNormalShadow(ShadowNode*, int);

	void addJointShadow(Creature*);
	void delJointShadow(Creature*);
	void killJointShadow(Creature*);
	bool isDrawJointShadow(JointShadowRootNode*, int);

	void addHeadNormalShadow(Creature*);
	void addHeadJointShadow(Creature*);

	void setJointShadowRootNode(JointShadowRootNode*);

	void setForceVisible(Creature*, bool);

	// CNode _00
	int _18;                  // _18
	int _1C;                  // _1C /* Sodium called this max? Unsure why. */
	ShadowNode* _20;          // _20
	ShadowNode* _24;          // _24
	ShadowCylinder2* _28;     // _28
	ShadowCylinder3* _2C;     // _2C
	Viewport** m_viewports;   // _30
	JointShadowRootNode* _34; // _34
	JointShadowRootNode* _38; // _38
	u8 _3C;                   // _3C
	u8 _3D;                   // _3D
	int _40;                  // _40
	int _44;                  // _44
	Color4 m_color;           // _48
	ShadowParms* m_parms;     // _4C
};

extern ShadowMgr* shadowMgr;
} // namespace Game

#endif
