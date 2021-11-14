#ifndef _GAME_CAVE_OBJECTLAYOUT_H
#define _GAME_CAVE_OBJECTLAYOUT_H

#include "types.h"
#include "CNode.h"

namespace Game {
struct ObjectLayoutNode : public CNode {
};

namespace Cave {
	struct MapNode : public CNode {
		struct UnitInfo* m_unitInfo; // _18

		// Types are EnemyNode, GateNode and ItemNode respectively
		ObjectLayoutNode* m_enemyNode; // _1C
		ObjectLayoutNode* m_gateNode;  // _20
		ObjectLayoutNode* m_itemNode;  // _24

		MapNode** m_nodeList; // _28
		s32 m_xGridOffset;    // _2C
		s32 m_yGridOffset;    // _30
		s32 m_enemyScore;     // _34
		s32 m_nodeScore;      // _38
		s32 m_vsScore;        // _3C
	};

	struct ObjectLayoutInfo {
		ObjectLayoutInfo() { }

		virtual s32 getCount(int)        = 0;
		virtual CNode* getNode(int, int) = 0;
	};

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
