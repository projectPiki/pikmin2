#ifndef _GAME_SHADOWMGR_H
#define _GAME_SHADOWMGR_H

#include "Game/JointFuncs.h"
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
	float m_size;                 // _1C
};

// Size: 0x60
struct ShadowParms : public Parameters {
	Parm<float> m_lodNear; // _0C
	Parm<float> m_lodFar;  // _34
	void* m_end;           // _5C
};

// Size: 0x24
struct ShadowNode : public CNode {
	virtual ~ShadowNode(); // _08 (weak)

	Creature* m_creature; // _18
	u32 _1C;              // _1C
	u32 _20;              // _20 /* bitfield */
};

struct CylinderBase {
	CylinderBase();

	virtual void setFilterTextureID(int);     // _08
	virtual void drawInit();                  // _0C
	virtual void drawCylinder(Matrixf&, int); // _10
	virtual void drawFinish();                // _14

	void setColor(Color4*);
	void setShadowRect(Rectf&);
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
	ShadowCylinder2(ShadowParms*, Color4*);

	virtual void setFilterTextureID(int);     // _08
	virtual void drawInit();                  // _0C
	virtual void drawCylinder(Matrixf&, int); // _10
	virtual void drawFinish();                // _14

	void copyShadowTexture();
	void setupTextureFilterGX();
	void drawTextureFilter();

	u8 _54[8]; // _54
	void* _5C; // _5C
	int _60;   // _60
};

struct ShadowCylinder3 : public CylinderBase {
	ShadowCylinder3(ShadowParms*, Color4*);

	virtual void setFilterTextureID(int);     // _08
	virtual void drawInit();                  // _0C
	virtual void drawCylinder(Matrixf&, int); // _10
	virtual void drawFinish();                // _14

	void drawScreenFilter();

	u8 _54[4]; // _54
};

struct TubeShadowPosNode : public CNode {
	virtual ~TubeShadowPosNode(); // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&, Vector3f&);

	// _00     = VTBL
	// _00-_18 = CNode
};

struct TubeShadowSetNode : public CNode {
	virtual ~TubeShadowSetNode(); // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&, Vector3f&);

	// _00     = VTBL
	// _00-_18 = CNode
};

struct TubeShadowTransNode : public CNode {
	virtual ~TubeShadowTransNode(); // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&, Vector3f&);

	// _00     = VTBL
	// _00-_18 = CNode
};

struct SphereShadowNode : public CNode {
	virtual ~SphereShadowNode(); // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&);

	// _00     = VTBL
	// _00-_18 = CNode
};

// Size: 0x50
struct ShadowMgr : public CNode {
	ShadowMgr(int);

	virtual ~ShadowMgr();               // _08 (weak)
	virtual int getSize();              // _10
	virtual int getMax();               // _14
	virtual Creature* getCreature(int); // _18
	virtual int getFirst();             // _1C
	virtual int getNext(int);           // _20
	virtual bool isDone(int);           // _24
	virtual void write(Stream&);        // _28
	virtual void read(Stream&);         // _2C

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
	void draw(Graphics& gfx);
	void draw(Graphics& gfx, int vpIndex);

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
