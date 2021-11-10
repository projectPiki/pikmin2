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

struct CollPartMgr;
struct FindCollPartArg;

struct CollPart : public CNode {
	CollPart();
	CollPart(SysShape::MtxObject*);
	virtual ~CollPart();
	void constructor();
	void init(SysShape::MtxObject*);

	void addChild(CollPart*);
	void attachModel(SysShape::MtxObject*);
	void calcStickGlobal(Vector3f&, Vector3f&);
	void calcStickLocal(Vector3f&, Vector3f&);
	void calcPoseMatrix(Vector3f&, Matrixf&);
	void checkCollision(Sys::Sphere&, IDelegate1<CollPart*>*);
	void checkCollisionMulti(CollPart*,
	                         IDelegate3<CollPart*, CollPart*, Vector3f&>*);
	void clone(SysShape::MtxObject*, CollPartMgr*);
	void collide(CollPart*, Vector3f&);
	void doAnimation();
	void doDirectDraw(Graphics&);
	void doEntry();
	void doSetView(ulong);
	void doSimulation(float);
	void doViewCalc();
	virtual void draw(Graphics&);
	void getAllCollPartToArray(CollPart**, int, int&);
	CollPart* getChild();
	virtual int getChildCount();
	CollPart* getCollPart(ulong);
	CollPart* getNext();
	void getSphere(Sys::Sphere&);
	void getTube(Sys::Tube&);
	bool isLeaf();
	virtual bool isMouth();
	bool isPrim();
	bool isSphere();
	bool isStickable();
	bool isTube();
	bool isTubeTree();
	void makeMatrixTo(Matrixf&);
	void makeTubeTree();
	void read(Stream&, bool);
	void setScale(float);
	void update();

	float _18;    // _18   /* PikDecomp calls this `radius1`. */
	float _1C;    // _1C   /* PikDecomp calls this `radius`. */
	Vector3f _20; // _20   /* PikDecomp calls this `Offset`. SodiumDecomp calls
	              // this `size_0x20`. :shrug: */
	uint m_jointIndex;        // _2C
	ID32 _30;                 // _30
	ID32 _3C;                 // _3C
	short m_attribute;        // _48   /* name from PikDecomp */
	Vector3f m_position;      // _4C   /* name from PikDecomp */
	u8 m_hasCollPart;         // _58   /* name from PikDecomp */
	SysShape::Model* m_model; // _5C
	u32 _60;                  // _60
};

struct CollPartMgr : public MonoObjectMgr<CollPart> {
	void createOne(SysShape::MtxObject*);
};

struct MouthCollPart : public CollPart {
	MouthCollPart();
	virtual ~MouthCollPart();
	void copyMatrixTo(Matrixf&);
	void getPosition(Vector3f&);
	virtual bool isMouth();

	CollPart* _64;        // _64
	SysShape::Joint* _68; // _68
	u8 _6C[4];            // _6C
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

struct AgeCollPart : public CollPart {
	AgeCollPart(SysShape::Model*);
	virtual ~AgeCollPart();
	virtual void draw(Graphics&);

	u8 _64; // _64
};

struct CollPartFactory : CollPart {
	virtual ~CollPartFactory();
	void load(char*);
	void load(JKRFileLoader*, char*);
	void createInstance(SysShape::MtxObject*, CollPartMgr*);
};

struct CollTree {
	CollTree();
	void attachModel(SysShape::MtxObject*);
	void createFromFactory(SysShape::MtxObject*, CollPartFactory*,
	                       CollPartMgr*);
	void createSingleSphere(SysShape::MtxObject*, int, Sys::Sphere&,
	                        CollPartMgr*);
	void checkCollision(CollTree*, CollPart**, CollPart**, Vector3f&);
	void checkCollision(Sys::Sphere&, IDelegate1<CollPart*>*);
	void checkCollisionRec(CollPart*, CollPart*, CollPart**, CollPart**,
	                       Vector3f&);
	void checkCollisionMulti(CollTree*,
	                         IDelegate3<CollPart*, CollPart*, Vector3f&>*);
	void findCollPart(FindCollPartArg&);
	void getBoundingSphere(Sys::Sphere&);
	CollPart* getCollPart(ulong);
	CollPart* getRandomCollPart();
	void release();
	void releaseRec(CollPart*);
	void update();

	CollPart* m_part;   // _00
	CollPartMgr* m_mgr; // _04
};

#endif
