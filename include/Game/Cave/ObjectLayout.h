#ifndef _GAME_CAVE_OBJECTLAYOUT_H
#define _GAME_CAVE_OBJECTLAYOUT_H

#include "types.h"
#include "CNode.h"
#include "Vector3.h"
#include "JSystem/JUtility/JUTTexture.h"

namespace Game {

enum ObjectLayoutType {
	OBJLAYOUT_Enemy       = 0,
	OBJLAYOUT_Item        = 1,
	OBJLAYOUT_Gate        = 2,
	OBJLAYOUT_Hole        = 3,
	OBJLAYOUT_Pod         = 4,
	OBJLAYOUT_Fountain    = 5,
	OBJLAYOUT_VsRedOnyon  = 6,
	OBJLAYOUT_VsBlueOnyon = 7,
	OBJLAYOUT_TypeCount, // 8
};

/**
 * @size{0x18}
 */
struct ObjectLayoutNode : public CNode {
	virtual ~ObjectLayoutNode() { }                   // _08 (weak)
	virtual int getObjectId()   = 0;                  // _10
	virtual u32 getObjectType() = 0;                  // _14
	virtual int getBirthCount() = 0;                  // _18
	virtual f32 getDirection() { return 0.0f; }       // _1C (weak)
	virtual int getBirthDoorIndex() { return -1; }    // _20 (weak)
	virtual void getBirthPosition(f32& x, f32& y) { } // _24 (weak)
	virtual u32 getExtraCode() { return 0; }          // _28 (weak)
	virtual bool isFixedBattery() { return false; }   // _2C (weak)
};

/**
 * @size{0x4}
 */
struct ObjectLayoutInfo {
	ObjectLayoutInfo() { }

	virtual int getCount(int index)                                  = 0;
	virtual ObjectLayoutNode* getNode(int nodeIndex, int childIndex) = 0;
};

namespace Cave {
enum CardinalDirection { CD_Up = 0, CD_Right, CD_Down, CD_Left };
struct DoorNode;
struct BaseGen;
struct AdjustNode;
struct MapUnits;
struct MapNode;

enum UnitKind {
	UNITKIND_Cap      = 0,
	UNITKIND_Room     = 1,
	UNITKIND_Corridor = 2,
	UNITKIND_Count, // 3
};

/**
 * @size{0x18}
 */
struct UnitInfo {
	UnitInfo(MapUnits* mapUnits);

	void setUnitTexture(JUTTexture* texture);
	void setUnitRotation(int direction); // Use CD_ / CardinalDirection enum
	void create();
	char* getUnitName();
	int getUnitIndex();
	int getUnitKind();
	int getUnitSizeX();
	int getUnitSizeY();
	int getUnitRotation();
	DoorNode* getDoorNode(int doorNum);
	BaseGen* getBaseGen();
	void draw(f32 x0, f32 y0, f32 x1, f32 y1);

	DoorNode* mDoorNode;     // _00
	AdjustNode* mDoorCounts; // _04
	MapUnits* mMapUnits;     // _08
	int mUnitRotation;       // _0C, Use CD_ / CardinalDirection enum
	int mUnitSizeX;          // _10
	int mUnitSizeY;          // _14
};

/**
 * @size{0x8}
 */
struct ObjectLayout : public ObjectLayoutInfo {
	ObjectLayout(MapNode*);

	virtual int getCount(int index);                                  // _08
	virtual ObjectLayoutNode* getNode(int nodeIndex, int childIndex); // _0C

	void setNode(int index, Game::ObjectLayoutNode* data);

	// _00, VTBL
	ObjectLayoutNode** mNodeList; // _04
};
} // namespace Cave
} // namespace Game

#endif
