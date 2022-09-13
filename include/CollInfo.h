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

	////////////// VTABLE
	virtual ~CollPart() { }      // _08 (weak)
	virtual int getChildCount(); // _0C (weak)
	virtual bool isMouth()       // _10 (weak)
	{
		return false;
	}
	virtual void draw(Graphics&);            // _14
	virtual void constructor() { }           // _18 (weak)
	virtual void doAnimation() { }           // _1C (weak)
	virtual void doEntry() { }               // _20 (weak)
	virtual void doSetView(u32) { }          // _24 (weak)
	virtual void doViewCalc() { }            // _28 (weak)
	virtual void doSimulation(float) { }     // _2C (weak)
	virtual void doDirectDraw(Graphics&) { } // _30 (weak)
	////////////// END VTABLE

	void init(SysShape::MtxObject*);
	/**
	 * @reifiedAddress{8013915C}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
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
	/**
	 * @reifiedAddress{80134540}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	CollPart* getChild() { return (CollPart*)m_child; }
	CollPart* getCollPart(u32);
	/**
	 * @reifiedAddress{80134548}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	CollPart* getNext() { return (CollPart*)m_next; }
	void getSphere(Sys::Sphere&);
	void getTube(Sys::Tube&);
	/**
	 * @reifiedAddress{80134B90}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	bool isLeaf() { return (m_child == nullptr); }
	/**
	 * @reifiedAddress{80135510}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	bool isSphere() { return (m_hasCollPart == 0); }
	bool isStickable();
	bool isTube() { return (m_hasCollPart == 2); }
	bool isTubeTree() { return (m_hasCollPart == 1); }
	/**
	 * @fabricated
	 */
	bool isTubeLike() { return isTubeTree() || isTube(); }
	/**
	 * @reifiedAddress{80134BA0}
	 * @reifiedFile{plugProjectKandoU/collinfo.cpp}
	 */
	bool isPrim() { return (isLeaf() || isTubeTree() || isTube()); }
	void makeMatrixTo(Matrixf&);
	void makeTubeTree();
	void read(Stream&, bool);
	void setScale(float);
	void update();

	float _18;                    // _18   /* PikDecomp calls this `radius1`. */
	float _1C;                    // _1C   /* PikDecomp calls this `radius`. */
	Vector3f _20;                 // _20   /* PikDecomp calls this `Offset`. SodiumDecomp calls
	                              // this `size_0x20`. :shrug: */
	u32 m_jointIndex;             // _2C
	ID32 _30;                     // _30
	ID32 _3C;                     // _3C
	short m_attribute;            // _48   /* name from PikDecomp */
	Vector3f m_position;          // _4C   /* name from PikDecomp */
	u8 m_hasCollPart;             // _58   /* name from PikDecomp */
	SysShape::MtxObject* m_model; // _5C
	u32 _60;                      // _60
};

struct CollPartMgr : public MonoObjectMgr<CollPart> {

	virtual ~CollPartMgr() { } // _08 (weak)

	CollPart* createOne(SysShape::MtxObject*);
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

	CollPart* _64;        // _64
	SysShape::Joint* _68; // _68
	u8 _6C;               // _6C
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

	virtual ~AgeCollPart();       // _08 (weak)
	virtual void draw(Graphics&); // _14

	u8 _64; // _64
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
	void createInstance(SysShape::MtxObject*, CollPartMgr*);
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
	void findCollPart(FindCollPartArg&);
	void getBoundingSphere(Sys::Sphere&);
	CollPart* getCollPart(u32);
	CollPart* getRandomCollPart();
	void release();
	void releaseRec(CollPart*);
	void update();

	// Unused/inlined:
	void checkCollisionMultiRec(CollPart*, CollPart*, IDelegate3<CollPart*, CollPart*, Vector3f&>*);

	CollPart* m_part;   // _00
	CollPartMgr* m_mgr; // _04
};

#endif
