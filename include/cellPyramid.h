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

namespace Game {
struct CellObject;

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
	void findIndex(CellObject*);

	int _00;
	int _04;
	CollNode* m_collNodes;
	CellObject* m_cellObject;
};

struct CellLeg {
	u8 _00[0x14];
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

	u8 _00[0x2C];
};

struct CellObject : public TPositionObject {
	virtual u8 checkCollision(void*);
	virtual void getBoundingSphere(Sys::Sphere&);
	virtual bool collisionUpdatable();
	virtual bool isPiki();
	virtual bool isNavi();
	virtual bool deferPikiCollision();
	virtual char* getTypeName();
	virtual u8 getObjType();

	void exitCell();
	void calcCollisionDistance(CellObject*);
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
	ulong _A4;                         // _A4
	CollisionBuffer m_collisionBuffer; // _A8
};

struct CellLayer {
	CellLayer();
	void resolveCollision();
	void clearAllCollBuffer();
	void clear();
	void createBottom(int, int);
	void operator()(int, int);
	void pileup(CellLayer&);
	void drawCell(Graphics&, Vector3<float>&, int, int, float) const;
	void assertExtent(Rect<int>&) const;
	void checkPoint(Vector2<int>&) const;

	ushort m_sizeX;
	ushort m_sizeY;
	short _04;
	short _06;
	Cell* m_cells; // _08
	u8 _0C[0x2C];  // _0C // maybe this is a Cell?
};

struct CellPyramid : public SweepPrune::World {
	CellPyramid();
	void mapSearch(Sys::Sphere&, IDelegate1<CellObject*>*);
	void initFrame();
	void getCheckCount();
	void resolveCollision();
	void clearAllCollBuffer();
	void clear();
	void calcExtent(Sys::Sphere&, int&, Rect<int>&) const;
	void entry(CellObject*, Sys::Sphere&);
	void entry(CellObject&, Sys::Sphere&, int&, Rect<int>&) const;
	void create(BoundBox2d&, float);
	void drawCell(Graphics&, Sys::Sphere&);
	void getPikiCount(int, Rect<int>&) const;
	void drawCell(Graphics&, int, Rect<int>&, float) const;
	void drawCell(Graphics&, int);
	void drawCell(Graphics&);
	void dumpCount(int&, int&);

	u8 _24[4];
	int m_memoryUsageMaybe; // _28
	int m_layerCount;       // _2C
	CellLayer* m_layers;    // _30
	float _34;
	float _38;
	float _3C;
	float _40;
	uint _44;
};
} // namespace Game

#endif
