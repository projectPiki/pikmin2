#ifndef _GAME_EDITORROUTEMGR_WPNODE_H
#define _GAME_EDITORROUTEMGR_WPNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace EditorRouteMgr {
	struct WPNode : public CNode {
		virtual ~WPNode();            // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace EditorRouteMgr
} // namespace Game

#endif
