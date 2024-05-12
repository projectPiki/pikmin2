#ifndef _COLLINFO_H
#define _COLLINFO_H

#include "CNode.h"
#include "Graphics.h"
#include "IDelegate.h"
#include "Sys/Sphere.h"
#include "id32.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "MonoObjectMgr.h"
#include "Sys/Tube.h"
#include "SysShape/Model.h"
#include "SysShape/MtxObject.h"
#include "Vector3.h"
#include "Condition.h"

struct CollPartMgr;

#define COLLTYPE_SPHERE   (0)
#define COLLTYPE_TUBE     (1)
#define COLLTYPE_TUBETREE (2)

namespace Game {
struct Creature;
}

struct CollPart : public CNode {
	CollPart();
	CollPart(SysShape::MtxObject*);

	////////////// VTABLE
	virtual ~CollPart() { }     // _08 (weak)
	virtual int getChildCount() // _0C (weak)
	{
		return CNode::getChildCount();
	}
	virtual bool isMouth() // _10 (weak)
	{
		return false;
	}
	virtual void draw(Graphics&);                // _14
	virtual void constructor() { }               // _18 (weak)
	virtual void doAnimation() { }               // _1C (weak)
	virtual void doEntry() { }                   // _20 (weak)
	virtual void doSetView(u32) { }              // _24 (weak)
	virtual void doViewCalc() { }                // _28 (weak)
	virtual void doSimulation(f32 rate) { }      // _2C (weak)
	virtual void doDirectDraw(Graphics& gfx) { } // _30 (weak)
	////////////// END VTABLE

	void init(SysShape::MtxObject*);

	void addChild(CollPart* child) { add(child); }
	void attachModel(SysShape::MtxObject*);

	void calcStickGlobal(Vector3f& input, Vector3f& globalPosition);
	void calcStickLocal(Vector3f& input, Vector3f& localPosition);
	void calcPoseMatrix(Vector3f& input, Matrixf& poseMatrix);

	void checkCollision(Sys::Sphere& input, IDelegate1<CollPart*>* onCollisionCallback);
	void checkCollisionMulti(CollPart* other, IDelegate3<CollPart*, CollPart*, Vector3f&>* onCollidedCallback);

	CollPart* clone(SysShape::MtxObject* newMtx, CollPartMgr* mgr);
	bool collide(CollPart* other, Vector3f& hitPosition);

	int getAllCollPartToArray(CollPart** outputArray, int limit, int& count);

	CollPart* getChild() { return (CollPart*)mChild; }
	CollPart* getCollPart(u32);
	CollPart* getNext() { return (CollPart*)mNext; }
	CollPart* getParent() { return (CollPart*)mParent; }

	void getSphere(Sys::Sphere& output);
	void getTube(Sys::Tube& output);

	bool isLeaf() { return (getChild() == nullptr); }
	bool isSphere() { return (mPartType == COLLTYPE_SPHERE); }
	bool isStickable();
	bool isTube() { return (mPartType == COLLTYPE_TUBE); }
	bool isTubeTree() { return (mPartType == COLLTYPE_TUBETREE); }
	bool isTubeLike() { return isTube() || isTubeTree(); }
	bool isPrim() { return (getChild() == nullptr || isTube() || isTubeTree()); }

	void makeMatrixTo(Matrixf& target);
	void makeTubeTree();
	void read(Stream& stream, bool isAgeCollPart);
	void setScale(f32);
	void update();

	inline f32 getSqrRadius() { return mRadius * mRadius; }

	f32 mBaseRadius;             // _18, base radius used to calculate real radius (in setScale, it's scaled)
	f32 mRadius;                 // _1C
	Vector3f mOffset;            // _20
	u32 mJointIndex;             // _2C
	ID32 mCurrentID;             // _30, identifier of current part, initialised to root
	ID32 mSpecialID;             // _3C, used to detect whether the collpart is stickable, denoted by prefixed -s: e.g. 'sp01'
	u16 mAttribute;              // _48
	Vector3f mPosition;          // _4C
	u8 mPartType;                // _58, using define list - 0=Sphere, 1=Tube, 2=TubeTree
	SysShape::MtxObject* mModel; // _5C
	u32 mUnusedVal;              // _60
};

struct CollPartMgr : public MonoObjectMgr<CollPart> {

	virtual ~CollPartMgr() { } // _08 (weak)

	CollPart* createOne(SysShape::MtxObject*);
};

struct FindCollPartArg {
	Condition<CollPart>* mCondition; // _00
	Sys::Sphere mHitSphere;          // _04

	inline Vector3f& getHitPosition() { return mHitSphere.mPosition; }
};

struct MouthCollPart : public CollPart {
	MouthCollPart();

	virtual ~MouthCollPart() { } // _08 (weak)
	virtual bool isMouth()       // _10 (weak)
	{
		return true;
	}

	void copyMatrixTo(Matrixf&);
	void getPosition(Vector3f&);

	// inlined
	void setup(SysShape::Model* model, char* jointName, Vector3f& vector);

	Game::Creature* mStuckCreature; // _64
	SysShape::Joint* mMouthJoint;   // _68
	u8 mIsOniKurage;                // _6C, greater jellyfloat uses special calcs for stuff inside it
};

struct MouthSlots {
	MouthSlots();
	void alloc(int);
	MouthCollPart* getSlot(int);
	void update();
	void setup(int, SysShape::Model*, char*);

	int getMax() { return mMax; }

	inline Game::Creature* getStuckCreature(int i) { return getSlot(i)->mStuckCreature; }

	int mMax;              // _00
	MouthCollPart* mSlots; // _04
};

#define ACP_DRAWFLAG_DISABLED (0x0)
#define ACP_DRAWFLAG_ENABLED  (0x1)

struct AgeCollPart : public CollPart {
	AgeCollPart(SysShape::Model*);

	virtual ~AgeCollPart() { }    // _08 (weak)
	virtual void draw(Graphics&); // _14

	u8 mDrawFlags; // _64
};

struct CollPartFactory : public CollPart {
	inline CollPartFactory(Stream& input)
	    : CollPart()
	{
		read(input, false);
	}

	virtual ~CollPartFactory() { } // _08 (weak)

	static CollPartFactory* load(char*);
	static CollPartFactory* load(JKRFileLoader*, char*);
	CollPart* createInstance(SysShape::MtxObject*, CollPartMgr*);
};

struct CollTree {
	CollTree();
	void attachModel(SysShape::MtxObject*);
	void createFromFactory(SysShape::MtxObject*, CollPartFactory*, CollPartMgr*);
	void createSingleSphere(SysShape::MtxObject*, int, Sys::Sphere&, CollPartMgr*);
	bool checkCollision(CollTree*, CollPart**, CollPart**, Vector3f&);
	void checkCollision(Sys::Sphere&, IDelegate1<CollPart*>*);
	bool checkCollisionRec(CollPart*, CollPart*, CollPart**, CollPart**, Vector3f&);
	void checkCollisionMulti(CollTree*, IDelegate3<CollPart*, CollPart*, Vector3f&>*);
	CollPart* findCollPart(FindCollPartArg&);
	void getBoundingSphere(Sys::Sphere&);
	CollPart* getCollPart(u32);
	CollPart* getRandomCollPart();
	void release();
	void releaseRec(CollPart*);
	void update();

	// Unused/inlined:
	void checkCollisionMultiRec(CollPart*, CollPart*, IDelegate3<CollPart*, CollPart*, Vector3f&>*);

	static bool mDebug;

	CollPart* mPart;   // _00
	CollPartMgr* mMgr; // _04
};

#endif
