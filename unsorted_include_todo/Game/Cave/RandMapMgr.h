#ifndef _GAME_CAVE_RANDMAPMGR_H
#define _GAME_CAVE_RANDMAPMGR_H

/*
    __vt__Q34Game4Cave10RandMapMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave10RandMapMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace Cave {
	struct RandMapMgr : public CNode {
		virtual ~RandMapMgr();        // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace Cave
} // namespace Game

#endif
