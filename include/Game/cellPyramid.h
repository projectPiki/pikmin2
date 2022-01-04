#ifndef _GAME_CELLPYRAMID_H
#define _GAME_CELLPYRAMID_H

#include "types.h"
#include "Game/TPositionObject.h"
#include "Sys/Sphere.h"
#include "SweepPrune.h"
#include "IDelegate.h"
#include "Graphics.h"
#include "Rect.h"
#include "Vector2.h"
#include "BoundBox.h"

namespace Game {
struct Cell;
struct CellObject;
struct CellPyramid;

struct CollNode {
	CollNode();

	CellObject* m_cellObject; // _00
	float _04;                // _04
};

struct CollisionBuffer {
	CollisionBuffer();
	bool isAvailable();
	void init(CellObject*, CollNode*, int);
	void alloc(CellObject*, int);
	void clear();
	void insert(CellObject*, float);
	void pikiInsertPiki(CellObject*, float);
	void pikiInsertOther(CellObject*, float);
	void insertSort(CellObject*, float);
	int findIndex(CellObject*);

	int m_nodeCount;          // _00 /* total node count? */
	int m_usedNodeCount;      // _04 /* used node count? */
	CollNode* m_collNodes;    // _08
	CellObject* m_cellObject; // _0C
};

// TODO: Ensure this is aligned.
struct CellLeg {
	CellLeg();
	CellLeg* m_next;      // _00
	CellLeg* m_prev;      // _04
	Cell* m_cell;         // _08
	CellObject* m_object; // _0C
	u8 m_flags;           // _10
};

struct Cell {
	Cell();
	void clear();
	void mapSearch(IDelegate1<CellObject*>*, ulong);
	void mapSearchUp(IDelegate1<CellObject*>*, ulong);
	void mapSearchDown(IDelegate1<CellObject*>*, ulong);
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
	u16 _14;   // _14
	u16 _16;   // _16
	u16 _18;   // _18
	u8 _1A[2];    // _1A
	CellLeg* _1C; // _1C
	Cell* _20;    // _20
	Cell* _24;    // _24
	short _28;    // _28
	u8 _2A[2];    // _2A

	static CellPyramid* sCurrCellMgr;
};

struct CellObject : public TPositionObject {
	virtual void checkCollision(CellObject*);
	virtual void getBoundingSphere(Sys::Sphere&);
	virtual bool collisionUpdatable();
	virtual bool isPiki();
	virtual bool isNavi();
	virtual bool deferPikiCollision();
	virtual char* getTypeName();
	virtual u16 getObjType();

	void exitCell();
	float calcCollisionDistance(CellObject*);
	void updateCollisionBuffer(CellObject*);
	void resolveUsingBuffer();

	SweepPrune::Object m_sweepPruneObject; // _04
	union {
		CellLeg arrayView[4];
		struct {
			CellLeg X1;
			CellLeg X2;
			CellLeg Z1;
			CellLeg Z2;
		} structView;
	} m_cellLegs;                      // _54
	ulong m_passID;                    // _A4
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
	void drawCell(Graphics&, Vector3f&, int, int, float) const;
	void assertExtent(Recti&) const;
	void checkPoint(Vector2i&) const;

	u16 m_sizeX; // _00
	u16 m_sizeY; // _02
	short _04;      // _04
	u16 _06;     // _06
	Cell* m_cells;  // _08
	Cell m_cell;    // _0C // maybe this is a Cell?
};

struct CellPyramid : public SweepPrune::World {
	CellPyramid();
	void mapSearch(Sys::Sphere&, IDelegate1<CellObject*>*);
	void initFrame();
	uint getCheckCount();
	void resolveCollision();
	void clearAllCollBuffer();
	void clear();
	void calcExtent(Sys::Sphere&, int&, Recti&) const;
	void entry(CellObject*, Sys::Sphere&);
	void entry(CellObject*, Sys::Sphere&, int&, Recti&);
	void create(BoundBox2d&, float);
	void drawCell(Graphics&, Sys::Sphere&);
	int getPikiCount(int, Recti&) const;
	void drawCell(Graphics&, int, Recti&, float) const;
	void drawCell(Graphics&, int);
	void drawCell(Graphics&);
	void dumpCount(int&, int&);

	int m_memoryUsageMaybe; // _28
	int m_layerCount;       // _2C
	CellLayer* m_layers;    // _30
	float _34;              // _34
	float _38;              // _38
	float _3C;              // _3C
	float _40;              // _40
	/*
	 * Incremented at the start of every resolve/search pass.
	 * Passed on to CellObjects to prevent evaluating multiple times per pass.
	 */
	ulong m_passID; // _44

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

struct CellIterator {
	CellIterator(CellIteratorArg&);

	void calcExtent();
	void dump();
	void find();
	void first();
	void getCellObject();
	bool isDone();
	void next();
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
} // namespace Game

#endif
