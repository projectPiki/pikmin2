#ifndef _GAME_CAVE_NODE_H
#define _GAME_CAVE_NODE_H

#include "types.h"
#include "CNode.h"

namespace Game {
namespace Cave {
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
} // namespace Cave
} // namespace Game

#endif
