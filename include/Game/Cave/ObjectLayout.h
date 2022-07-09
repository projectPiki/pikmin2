#ifndef _GAME_CAVE_OBJECTLAYOUT_H
#define _GAME_CAVE_OBJECTLAYOUT_H

#include "types.h"
#include "CNode.h"
#include "Vector3.h"

namespace Game {
struct ObjectLayoutNode : public CNode {
	virtual int getObjectId()   = 0;
	virtual u32 getObjectType() = 0;
	virtual int getBirthCount() = 0;
	virtual float getDirection();
	virtual int getBirthDoorIndex();
	virtual void getBirthPosition(float&, float&);
	virtual u32 getExtraCode();
	virtual bool isFixedBattery();
};

struct ObjectLayoutInfo {
	ObjectLayoutInfo() { }

	virtual s32 getCount(int)        = 0;
	virtual CNode* getNode(int, int) = 0;
};

namespace Cave {
enum CardinalDirection { CD_UP, CD_RIGHT, CD_DOWN, CD_LEFT };
struct DoorNode;
struct BaseGen;
struct UnitInfo {
	DoorNode* m_doorNode;            // _00
	struct AdjustNode* m_adjustNode; // _04
	struct MapUnits* m_mapUnits;     // _08
	int m_unitRotation;              // _0C
	int m_unitSizeX;                 // _10
	int m_unitSizeY;                 // _14

	int getUnitSizeX();
	int getUnitSizeY();
	int getUnitKind();
	int getUnitRotation();
	BaseGen* getBaseGen();
	void draw();
};

struct BaseGen;
struct MapNode;

struct ObjectLayout : public ObjectLayoutInfo {
	ObjectLayout(MapNode*);

	virtual s32 getCount(int);
	virtual CNode* getNode(int, int);

	void setNode(int, Game::ObjectLayoutNode*);

	// _00, VTBL
	ObjectLayoutNode** m_nodeList; // _04
};
} // namespace Cave
} // namespace Game

#endif
