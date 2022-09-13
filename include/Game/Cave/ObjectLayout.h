#ifndef _GAME_CAVE_OBJECTLAYOUT_H
#define _GAME_CAVE_OBJECTLAYOUT_H

#include "types.h"
#include "CNode.h"
#include "Vector3.h"
#include "JSystem/JUT/JUTTexture.h"

namespace Game {

/**
 * @size{0x18}
 */
struct ObjectLayoutNode : public CNode {
	virtual ~ObjectLayoutNode() { }                 // _08 (weak)
	virtual int getObjectId()   = 0;                // _10
	virtual u32 getObjectType() = 0;                // _14
	virtual int getBirthCount() = 0;                // _18
	virtual f32 getDirection() { return 0.0f; }     // _1C (weak)
	virtual int getBirthDoorIndex() { return -1; }  // _20 (weak)
	virtual void getBirthPosition(f32&, f32&) { }   // _24 (weak)
	virtual u32 getExtraCode() { return 0; }        // _28 (weak)
	virtual bool isFixedBattery() { return false; } // _2C (weak)
};

/**
 * @size{0x4}
 */
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
struct MapNode;

/**
 * @size{0x18}
 */
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
	void draw(f32, f32, f32, f32);

	DoorNode* m_doorNode;     // _00
	AdjustNode* m_doorCounts; // _04
	MapUnits* m_mapUnits;     // _08
	int m_unitRotation;       // _0C
	int m_unitSizeX;          // _10
	int m_unitSizeY;          // _14
};

/**
 * @size{0x8}
 */
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
