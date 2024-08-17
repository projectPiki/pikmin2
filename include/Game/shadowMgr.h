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
#include "SysShape/Joint.h"

struct Camera;
struct Color4;
struct Graphics;
struct Matrixf;
struct Stream;
struct Viewport;
struct ResTIMG;

namespace Game {
struct Creature;
struct JointShadowRootNode;

// Size: 0x20
struct ShadowParam {
	Vector3f mPosition;          // _00
	Sys::Sphere mBoundingSphere; // _0C
	f32 mSize;                   // _1C
};

// Size: 0x60
struct ShadowParms : public Parameters {
	ShadowParms()
	    : Parameters(nullptr, "ShadowParms")
	    , mLodNear(this, 'lodn', "LOD Near：", 0.1f, 0.0f, 0.2f)
	    , mLodFar(this, 'lodf', "LOD Far：", 0.02f, 0.0f, 0.2f)
	{
	}

	Parm<f32> mLodNear; // _0C
	Parm<f32> mLodFar;  // _34
};

// Size: 0x24
struct ShadowNode : public CNode {
	ShadowNode();
	ShadowNode(Creature*, int);

	// virtual ~ShadowNode(); // _08 (weak)

	void init(int);

	inline ShadowNode* getNext() { return (ShadowNode*)mChild; }
	inline Creature* getGameObject() { return mCreature; }
	inline Matrixf* getMtx(int i) { return &mMatrices[i]; }

	Creature* mCreature; // _18
	Matrixf* mMatrices;  // _1C
	u32 mFlags;          // _20 /* bitfield */
};

// stripped struct
struct CylinderList {
	CylinderList(int);

	void createCylinder(int, f32);
	void draw();

	u8 mTriangleCount; // _00
	void* mDLData;     // _04
	int mSize;         // _08
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
	int getCylinderType(ShadowParam&, int);
	void setupFillGX();
	void setupDrawCylinderGX();
	void setupFilterGX();
	void setOrthoProjection();
	void setOrthoCamera();
	void setScissorViewport();
	void fillShadowRect();
	void fillRectAlphaZero();
	void drawCylinderList(int);

	// _00 = VTBL
	CylinderList** mDisplayListObj; // _04
	Color4* mColor;                 // _08
	ShadowParms* mParms;            // _0C
	Rectf mScreenBounds;            // _10
	Vector3f mCamPosition[2];       // _20
	Vector3f mCamLookAt[2];         // _38
	f32 mCameraSizeMod[2];          // _50
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

	ResTIMG** mTexImg; // _58
	GXTexObj* mTexObj; // _5C
	int mTexIdx;       // _60
};

struct ShadowCylinder3 : public CylinderBase {
	ShadowCylinder3(ShadowParms*, Color4*);

	virtual void setFilterTextureID(int) { }  // _08
	virtual void drawInit();                  // _0C
	virtual void drawCylinder(Matrixf&, int); // _10
	virtual void drawFinish();                // _14

	void drawScreenFilter();
};

struct TubeShadowPosNode : public JointShadowNode {
	inline TubeShadowPosNode()
	    : JointShadowNode(2)
	{
	}

	virtual ~TubeShadowPosNode() { } // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&, Vector3f&);

	// _00     = VTBL
	// _00-_18 = CNode
};

struct TubeShadowSetNode : public JointShadowNode {
	inline TubeShadowSetNode()
	    : JointShadowNode(2)
	{
		mJoint = nullptr;
	}

	virtual ~TubeShadowSetNode() { } // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&, Vector3f&);

	// _00     = VTBL
	// _00-_24 = JointShadowNode
	SysShape::Joint* mJoint; // _24
};

struct TubeShadowTransNode : public JointShadowNode {
	inline TubeShadowTransNode()
	    : JointShadowNode(2)
	{
		mJoint = nullptr;
	}

	virtual ~TubeShadowTransNode() { } // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&, Vector3f&);

	// _00     = VTBL
	// _00-_24 = JointShadowNode
	SysShape::Joint* mJoint; // _24
};

struct SphereShadowNode : public JointShadowNode {
	inline SphereShadowNode()
	    : JointShadowNode(2)
	{
	}

	virtual ~SphereShadowNode() { } // _08 (weak)

	void makeShadowSRT(JointShadowParm&, Vector3f&);

	// _00     = VTBL
	// _00-_24 = JointShadowNode
};

// Size: 0x50
struct ShadowMgr : public CNode {
	ShadowMgr(int);

	// virtual ~ShadowMgr();               // _08 (weak)
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

	inline int getViewportCount() { return mViewportNum; }
	CylinderBase* getActiveCylinder() { return mCylinders[mCylinderID]; }
	inline Viewport* getViewport(int i) { return mViewports[i]; }

	// CNode _00
	int mViewportNum;                           // _18
	int mAllocShadowNum;                        // _1C
	ShadowNode* mActiveShadows;                 // _20
	ShadowNode* mInactiveShadows;               // _24
	CylinderBase* mCylinders[2];                // _28, 0 = ShadowCylinder2, 1 = ShadowCylinder3
	Viewport** mViewports;                      // _30, array of size _18
	JointShadowRootNode* mActiveJointShadows;   // _34
	JointShadowRootNode* mInactiveJointShadows; // _38
	u8 mEnabled;                                // _3C
	u8 mDoCheckCylinderType;                    // _3D
	int mCylinderID;                            // _40
	int mUnused0;                               // _44, seems to be entirely unused
	Color4 mColor;                              // _48
	ShadowParms* mParms;                        // _4C
};

extern ShadowMgr* shadowMgr;
} // namespace Game

#endif
