#ifndef _GAME_CAVE_OBJECTLAYOUT_H
#define _GAME_CAVE_OBJECTLAYOUT_H

#include "types.h"
#include "CNode.h"
#include "Vector3.h"
#include "JSystem/JUT/JUTTexture.h"

namespace Game {
struct ObjectLayoutNode : public CNode {
	virtual ~ObjectLayoutNode() { }                   // _08 (weak)
	virtual int getObjectId()   = 0;                  // _10
	virtual u32 getObjectType() = 0;                  // _14
	virtual int getBirthCount() = 0;                  // _18
	virtual float getDirection() { return 0.0f; }     // _1C (weak)
	virtual int getBirthDoorIndex() { return -1; }    // _20 (weak)
	virtual void getBirthPosition(float&, float&) { } // _24 (weak)
	virtual u32 getExtraCode() { return 0; }          // _28 (weak)
	virtual bool isFixedBattery() { return false; }   // _2C (weak)
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

	virtual s32 getCount(int);        // _08
	virtual CNode* getNode(int, int); // _0C

	void setNode(int, Game::ObjectLayoutNode*);

	// _00, VTBL
	ObjectLayoutNode** m_nodeList; // _04
};
} // namespace Cave
} // namespace Game

#endif
