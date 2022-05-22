#ifndef _GAME_CAVE_NODE_H
#define _GAME_CAVE_NODE_H

#include "Game/Cave/ObjectLayout.h"
#include "Game/Cave/Info.h"

namespace Game {
namespace Cave {
enum NodeType { Item = 1, Gate };

struct Adjust {
	s32 _00; // _00
	s32 _04; // _04
	s32 _08; // _08

	Adjust();
};

struct AdjustNode : public CNode {
	Adjust* m_node; // _18

	AdjustNode();
	AdjustNode(Adjust*);
};

struct Door {
	s32 _00;
	s32 _04;

	Door();
};

struct DoorNode : public CNode {
	Door m_node; // _18

	DoorNode();
	~DoorNode();

	inline void reset()
	{
		m_node._00 = -1;
		m_node._04 = -1;
	}

	DoorNode(Door&);
	bool isDoorAdjust(DoorNode*);
};

struct GateUnit {
	GateInfo* m_info; // _00
};

struct GateNode : public ObjectLayoutNode {
	GateNode();
	GateNode(GateUnit* unit, int index, int dir); // for dir, use cardinal direction
	~GateNode();

	virtual int getObjectId();
	virtual u32 getObjectType();
	virtual int getBirthCount();
	virtual float getDirection();
	virtual int getBirthDoorIndex();

	GateUnit* m_unit; // _18
	f32 m_direction;  // _1C
	s32 m_index;      // _20
};

struct ItemUnit {
	ItemInfo* m_info; // _00
};

struct ItemNode : public ObjectLayoutNode {
	ItemNode();
	ItemNode(ItemUnit*, BaseGen*, int);
	~ItemNode();

	void makeGlobalData(MapNode*);

	virtual int getObjectId();
	virtual u32 getObjectType();
	virtual int getBirthCount();
	virtual float getDirection();
	virtual void getBirthPosition(float&, float&);

	ItemUnit* m_unit;     // _18
	BaseGen* m_generator; // _1C
	u32 m_birthCount;     // _20
	f32 m_direction;      // _24
	Vector3f m_position;  // _28
};
} // namespace Cave
} // namespace Game

#endif
