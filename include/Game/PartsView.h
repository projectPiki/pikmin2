#ifndef _GAME_PARTSVIEW_H
#define _GAME_PARTSVIEW_H

#include "Graphics.h"
#include "types.h"
#include "CNode.h"
#include "Game/routeMgr.h"
#include "Game/Pathfinder.h"

struct Graphics;
struct Stream;
namespace Game {
	struct MapUnit;
}
namespace SysShape {
	struct Model;
}

namespace Game {
	struct PartsView : public CNode {
		PartsView();
		PartsView(MapUnit*, uchar*);
		virtual void constructor();           // _08
		virtual void doAnimation();           // _0C
		virtual void doEntry();               // _10
		virtual void doSetView(int);          // _14
		virtual void doViewCalc();            // _18
		virtual void doSimulation(float);     // _1C
		virtual void doDirectDraw(Graphics&); // _20

		void getHalfX();
		void getOffset();
		void read(Stream&);
		void write(Stream&);

		MapUnit* m_mapUnit;           // _018
		SysShape::Model* m_model;     // _01C
		u8 _20[0x30];                 // _020
		u32 _50;                      // _050
		u32 _54;                      // _054
		u32 _58;                      // _058
		u32 _5C;                      // _05C
		u32 _60;                      // _060
		u8 _64[8];                    // _064
		ushort m_unitKind;            // _06C
		u8 _6E[2];                    // _06E
		EditorRouteMgr m_routeMgr;    // _070
		AStarContext m_aStarContext;  // _0AC
		AStarPathfinder m_pathFinder; // _110
		Door m_door;                  // _118
		BaseGen* m_baseGen;           // _168
	};
} // namespace Game

#endif
