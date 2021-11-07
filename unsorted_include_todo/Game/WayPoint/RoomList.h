#ifndef _GAME_WAYPOINT_ROOMLIST_H
#define _GAME_WAYPOINT_ROOMLIST_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace WayPoint {
	struct RoomList : public CNode {
		virtual ~RoomList();          // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace WayPoint
} // namespace Game

#endif
