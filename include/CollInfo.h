#ifndef _COLLINFO_H
#define _COLLINFO_H

#include "CNode.h"
#include "Graphics.h"
#include "IDelegate.h"
#include "id32.h"
#include "JSystem/JKR/JKRFileLoader.h"
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
	virtual void doSimulation(float rate) { }    // _2C (weak)
	virtual void doDirectDraw(Graphics& gfx) { } // _30 (weak)
	////////////// END VTABLE

	void init(SysShape::MtxObject*);

	void addChild(CollPart* child) { add(child); }
	void attachModel(SysShape::MtxObject*);

	void calcStickGlobal(Vector3f&, Vector3f&);
	void calcStickLocal(Vector3f&, Vector3f&);
	void calcPoseMatrix(Vector3f&, Matrixf&);

	void checkCollision(Sys::Sphere&, IDelegate1<CollPart*>*);
	void checkCollisionMulti(CollPart*, IDelegate3<CollPart*, CollPart*, Vector3f&>*);

	CollPart* clone(SysShape::MtxObject*, CollPartMgr*);
	bool collide(CollPart*, Vector3f&);

	int getAllCollPartToArray(CollPart**, int, int&);

	CollPart* getChild() { return (CollPart*)m_child; }
	CollPart* getCollPart(u32);
	CollPart* getNext() { return (CollPart*)m_next; }

	void getSphere(Sys::Sphere&);
	void getTube(Sys::Tube&);

	bool isLeaf() { return (getChild() == nullptr); }
	bool isSphere() { return (m_partType == COLLTYPE_SPHERE); }
	bool isStickable();
	bool isTube() { return (m_partType == COLLTYPE_TUBE); }
	bool isTubeTree() { return (m_partType == COLLTYPE_TUBETREE); }
	bool isTubeLike() { return isTube() || isTubeTree(); }
	bool isPrim() { return (getChild() == nullptr || isTube() || isTubeTree()); }

	void makeMatrixTo(Matrixf&);
	void makeTubeTree();
	void read(Stream&, bool);
	void setScale(float);
	void update();

	float m_baseRadius;           // _18, base radius used to calculate real radius (in setScale, it's scaled)
	float m_radius;               // _1C
	Vector3f m_offset;            // _20
	u32 m_jointIndex;             // _2C
	ID32 m_currentID;             // _30, identifier of current part, initialised to root
	ID32 m_specialID;             // _3C, used to detect whether the collpart is stickable, denoted by prefixed -s: e.g. 'sp01'
	u16 m_attribute;              // _48
	Vector3f m_position;          // _4C
	u8 m_partType;                // _58, using define list - 0=Sphere, 1=Tube, 2=TubeTree
	SysShape::MtxObject* m_model; // _5C
	u32 _60;                      // _60
};

struct CollPartMgr : public MonoObjectMgr<CollPart> {

	virtual ~CollPartMgr() { } // _08 (weak)

	CollPart* createOne(SysShape::MtxObject*);
};

struct FindCollPartArg {
	Condition<CollPart>* m_condition; // _00
	Vector3f m_position;              // _04
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

	Game::Creature* m_stuckCreature; // _64
	SysShape::Joint* m_mouthJoint;   // _68
	u8 _6C;                          // _6C
};

struct MouthSlots {
	MouthSlots();
	void alloc(int);
	MouthCollPart* getSlot(int);
	void update();
	void setup(int, SysShape::Model*, char*);

	int m_max;              // _00
	MouthCollPart* m_slots; // _04
};

#define ACP_DRAWFLAG_DISABLED (0x0)
#define ACP_DRAWFLAG_ENABLED  (0x1)

struct AgeCollPart : public CollPart {
	AgeCollPart(SysShape::Model*);

	virtual ~AgeCollPart() { }    // _08 (weak)
	virtual void draw(Graphics&); // _14

	u8 m_drawFlags; // _64
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

	CollPart* m_part;   // _00
	CollPartMgr* m_mgr; // _04
};

#endif
