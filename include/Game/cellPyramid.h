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

	CellObject* m_cellObject; // _00
	f32 _04;                  // _04
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

	int m_nodeCount;          // _00/
	int m_usedNodeCount;      // _04
	CollNode* m_collNodes;    // _08
	CellObject* m_cellObject; // _0C
};

// TODO: Ensure this is aligned.
struct CellLeg {
	CellLeg()
	{
		m_prev   = nullptr;
		m_next   = nullptr;
		m_object = nullptr;
		m_cell   = nullptr;
	}

	CellLeg* m_next;      // _00
	CellLeg* m_prev;      // _04
	Cell* m_cell;         // _08
	CellObject* m_object; // _0C
	u8 m_flags;           // _10
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
	void entry(CellLeg*, bool);

	Cell* _00[4]; // _00
	Cell* _10;    // _10
	u16 _14;      // _14
	u16 _16;      // _16
	u16 _18;      // _18
	u8 _1A[2];    // _1A
	CellLeg* _1C; // _1C
	Cell* _20;    // _20
	Cell* _24;    // _24
	short _28;    // _28
	u8 _2A[2];    // _2A

	static CellPyramid* sCurrCellMgr;
};

struct CellObject : public TPositionObject, public SweepPrune::Object {
	inline CellObject()
	{
		m_cellLegs[0].m_flags  = 1;
		m_cellLegs[1].m_flags  = 0;
		m_cellLegs[2].m_flags  = 0;
		m_cellLegs[3].m_flags  = 0;
		m_cellLegs[0].m_object = this;
		m_cellLegs[1].m_object = this;
		m_cellLegs[2].m_object = this;
		m_cellLegs[3].m_object = this;
		m_passID               = 0;
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

	// _00 		= VTABLE
	// _04-_54 	= m_sweepPruneObject
	CellLeg m_cellLegs[4];             // _54
	u32 m_passID;                      // _A4
	CollisionBuffer m_collisionBuffer; // _A8
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

	u16 m_sizeX;   // _00
	u16 m_sizeY;   // _02
	short _04;     // _04
	u16 _06;       // _06
	Cell* m_cells; // _08
	Cell m_cell;   // _0C // maybe this is a Cell?
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

	int m_memoryUsageMaybe; // _28
	int m_layerCount;       // _2C
	CellLayer* m_layers;    // _30
	f32 _34;                // _34
	f32 _38;                // _38
	f32 _3C;                // _3C
	f32 _40;                // _40
	/*
	 * Incremented at the start of every resolve/search pass.
	 * Passed on to CellObjects to prevent evaluating multiple times per pass.
	 */
	u32 m_passID; // _44

	static char* sCellBugName;
	static s32 sCellBugID;
	static u8 sOptResolveColl;
	static u8 sSpeedUpResolveColl;
	static bool disableAICulling;
};

struct CellIteratorArg {
	CellIteratorArg();
	CellIteratorArg(Sys::Sphere& sphere);

	Sys::Sphere m_sphere;   // _00
	u32 _10;                // _10
	u32 _14;                // _14
	CellPyramid* m_cellMgr; // _18
	u8 _1C;                 // _1C
	u8 _1D;                 // _1D
};

#define CI_LOOP(it) for (it.first(); !it.isDone(); it.next())

struct CellIterator {
	CellIterator(CellIteratorArg&);

	void calcExtent();
	void dump();
	bool find();
	void first();
	void getCellObject();
	bool isDone();
	bool next();
	CellObject* operator*();
	void satisfy();
	void step();

	CellLeg* _00;          // _00
	u32 _04;               // _04
	u32 _08;               // _08
	u32 _0C;               // _0C
	u32 _10;               // _10
	u32 _14;               // _14
	u32 _18;               // _18
	u32 _1C;               // _1C
	u32 m_passID;          // _20
	CellIteratorArg m_arg; // _24
};

extern CellPyramid* cellMgr;
extern CellPyramid* platCellMgr;
} // namespace Game

#endif
