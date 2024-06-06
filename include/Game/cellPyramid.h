#ifndef _GAME_CELLPYRAMID_H
#define _GAME_CELLPYRAMID_H

#include "types.h"
#include "Sys/Sphere.h"
#include "SweepPrune.h"
#include "IDelegate.h"
#include "Graphics.h"
#include "Rect.h"
#include "Vector2.h"
#include "Vector3.h"
#include "BoundBox.h"
#include "Condition.h"

namespace Game {
struct Cell;
struct CellObject;
struct CellPyramid;

struct TPositionObject {
	virtual Vector3f getPosition() = 0; // _08

	// VTBL _00
};

struct CollNode {
	CollNode();

	CellObject* mCellObject; // _00
	f32 mObjDistance;        // _04
};

struct CollisionBuffer {
	CollisionBuffer();
	bool isAvailable();
	void init(CellObject*, CollNode*, int);
	void alloc(CellObject*, int);
	void clear();
	void insert(CellObject*, f32);
	void pikiInsertPiki(CellObject*, f32);
	void pikiInsertOther(CellObject*, f32);
	void insertSort(CellObject*, f32);
	int findIndex(CellObject*);

	int mNodeCount;          // _00
	int mUsedNodeCount;      // _04
	CollNode* mCollNodes;    // _08
	CellObject* mCellObject; // _0C
};

// TODO: Ensure this is aligned.
struct CellLeg {
	CellLeg()
	{
		mPrev   = nullptr;
		mNext   = nullptr;
		mObject = nullptr;
		mCell   = nullptr;
	}

	inline bool findLeg(CellLeg* leg)
	{
		CellLeg* currLeg = this;
		for (currLeg; currLeg; currLeg = currLeg->mNext) {
			if (currLeg == leg) {
				return true;
			}
		}
		return false;
	}

	CellLeg* mNext;      // _00
	CellLeg* mPrev;      // _04
	Cell* mCell;         // _08
	CellObject* mObject; // _0C
	u8 mFlags;           // _10
};

struct Cell {
	Cell();
	void clear();
	void mapSearch(IDelegate1<CellObject*>*, u32);
	void mapSearchUp(IDelegate1<CellObject*>*, u32);
	void mapSearchDown(IDelegate1<CellObject*>*, u32);
	void resolveCollision();
	void resolveCollision_1();
	void resolveCollision_2();
	void resolveCollision_3();
	void dump();
	bool hasLeg(CellLeg&);
	void rec_resolveColl();
	void clearAllCollBuffer();
	void appendList();
	void remove();
	void exit(CellLeg*, bool);
	void entry(CellLeg* leg, bool isPikiOrNavi);

	Cell* mNeighboringCells[4]; // _00
	Cell* mHeadCell;            // _10
	u16 mLocalPikiNaviCount;    // _14
	u16 mTotalPikiNaviCount;    // _16
	u16 mTotalObjectCount;      // _18
	CellLeg* mLeg;              // _1C
	Cell* mNextCell;            // _20
	Cell* mPrevCell;            // _24
	s16 mLayerIdx;              // _28

	static CellPyramid* sCurrCellMgr;
};

struct CellObject : public TPositionObject, public SweepPrune::Object {
	inline CellObject()
	{
		mCellLegs[0].mFlags  = 1;
		mCellLegs[1].mFlags  = 0;
		mCellLegs[2].mFlags  = 0;
		mCellLegs[3].mFlags  = 0;
		mCellLegs[0].mObject = this;
		mCellLegs[1].mObject = this;
		mCellLegs[2].mObject = this;
		mCellLegs[3].mObject = this;
		mPassID              = 0;
	}
	//	virtual Vector3f getPosition() 				= 0;	// _08
	virtual void checkCollision(CellObject*) { }        // _0C (weak)
	virtual void getBoundingSphere(Sys::Sphere&) = 0;   // _10
	virtual bool collisionUpdatable()            = 0;   // _14
	virtual bool isPiki() { return false; }             // _18 (weak)
	virtual bool isNavi() { return false; }             // _1C (weak)
	virtual bool deferPikiCollision() { return false; } // _20 (weak)
	virtual char* getTypeName() = 0;                    // _24
	virtual u16 getObjType()    = 0;                    // _28

	void exitCell();
	f32 calcCollisionDistance(CellObject*);
	void updateCollisionBuffer(CellObject*);
	void resolveUsingBuffer();

	inline void checkAllCollision()
	{
		for (int i = 0; i < mCollisionBuffer.mUsedNodeCount; i++) {
			checkCollision(mCollisionBuffer.mCollNodes[i].mCellObject);
		}
	}

	// _00 		= VTABLE
	// _04-_54 	= mSweepPruneObject
	CellLeg mCellLegs[4];             // _54
	u32 mPassID;                      // _A4
	CollisionBuffer mCollisionBuffer; // _A8
};

// Size: 0x38
struct CellLayer {
	CellLayer();
	void resolveCollision();
	void clearAllCollBuffer();
	void clear();
	void createBottom(int, int);
	Cell* operator()(int, int);
	void pileup(CellLayer&);
	void drawCell(Graphics&, Vector3f&, int, int, f32) const;
	void assertExtent(Recti&) const;
	void checkPoint(Vector2i&) const;

	u16 mSizeX;     // _00
	u16 mSizeY;     // _02
	u16 mLayerSize; // _04
	u16 mLayerIdx;  // _06
	Cell* mCells;   // _08
	Cell mCurrCell; // _0C
};

struct CellPyramid : public SweepPrune::World {
	CellPyramid();
	void mapSearch(Sys::Sphere&, IDelegate1<CellObject*>*);
	void initFrame();
	u32 getCheckCount();
	void resolveCollision();
	void clearAllCollBuffer();
	void clear();
	void calcExtent(Sys::Sphere&, int&, Recti&);
	void entry(CellObject*, Sys::Sphere&);
	void entry(CellObject*, Sys::Sphere&, int&, Recti&);
	void create(BoundBox2d&, f32);
	void drawCell(Graphics&, Sys::Sphere&);
	int getPikiCount(int, Recti&);
	void drawCell(Graphics&, int, Recti&, f32) const;
	void drawCell(Graphics&, int);
	void drawCell(Graphics&);
	void dumpCount(int&, int&);

	inline CellLayer* getLayer(int i) { return &mLayers[i]; }

	int mFreeMemory;    // _28
	int mLayerCount;    // _2C
	CellLayer* mLayers; // _30
	f32 mScale;         // _34
	f32 mInverseScale;  // _38
	Vector2f mBounds;   // _3C
	/**
	 * Incremented at the start of every resolve/search pass.
	 * Passed on to CellObjects to prevent evaluating multiple times per pass.
	 */
	u32 mPassID; // _44

	static char* sCellBugName;
	static int sCellBugID;
	static u8 sOptResolveColl;
	static u8 sSpeedUpResolveColl;
	static bool disableAICulling;
};

// fabricated
struct CellIteratorCondition {
	virtual bool satisfy(CellObject* obj) { return true; } // _08
};

struct CellIteratorArg {
	CellIteratorArg();
	CellIteratorArg(Sys::Sphere& sphere);

	Sys::Sphere mSphere;               // _00
	CellIteratorCondition* mCondition; // _10
	int mUseCustomRadius;              // _14, Useless flag
	CellPyramid* mCellMgr;             // _18
	bool mOptimise;                    // _1C, if true, use "is within cell", if false, calculate overlapping bounding spheres
	u8 mUnused;                        // _1D, set to 0 and unused
};

#define CI_LOOP(it) for (it.first(); !it.isDone(); it.next())

struct CellIterator {
	CellIterator(CellIteratorArg&);

	void calcExtent();
	void dump();
	bool find();
	void first();
	CellObject* getCellObject();
	bool isDone();
	bool next();
	CellObject* operator*();
	bool satisfy();
	bool step();

	CellLeg* mCurrLeg;    // _00
	int mCurrX;           // _04
	int mCurrY;           // _08
	int mCurrLayerIdx;    // _0C
	int mMinX;            // _10
	int mMinY;            // _14
	int mMaxX;            // _18
	int mMaxY;            // _1C
	u32 mPassID;          // _20
	CellIteratorArg mArg; // _24
	u32 _44;              // _44, unused
};

extern CellPyramid* cellMgr;
extern CellPyramid* platCellMgr;
extern CellPyramid* mapRoomCellMgr;
} // namespace Game

struct SweepCallback : public SweepPrune::World::Callback {
	virtual void invoke(SweepPrune::Object* objA, SweepPrune::Object* objB) // _08
	{
		Game::CellObject* cObjA = static_cast<Game::CellObject*>(objA);
		Game::CellObject* cObjB = static_cast<Game::CellObject*>(objB);
		cObjA->checkCollision(cObjB);
	}

	// vt _00
};

#endif
