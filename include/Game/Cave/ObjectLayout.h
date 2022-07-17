#ifndef _GAME_CAVE_OBJECTLAYOUT_H
#define _GAME_CAVE_OBJECTLAYOUT_H

#include "types.h"
#include "CNode.h"
#include "Vector3.h"
#include "JSystem/JUT/JUTTexture.h"

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
struct AdjustNode;
struct MapUnits;
struct UnitInfo {
	UnitInfo(MapUnits* mapUnits);

	void setUnitTexture(JUTTexture*);
	void setUnitRotation(int rot);
	void create();
	char* getUnitName();
	int getUnitKind();
	int getUnitSizeX();
	int getUnitSizeY();
	int getUnitRotation();
	DoorNode* getDoorNode(int doorNum);
	BaseGen* getBaseGen();
	void draw(float, float, float, float);

	DoorNode* m_doorNode;     // _00
	AdjustNode* m_doorCounts; // _04
	MapUnits* m_mapUnits;     // _08
	int m_unitRotation;       // _0C
	int m_unitSizeX;          // _10
	int m_unitSizeY;          // _14
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
