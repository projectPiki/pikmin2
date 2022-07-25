#ifndef _GAME_WAYPOINT_ROOMLIST_H
#define _GAME_WAYPOINT_ROOMLIST_H

/*
    __vt__Q34Game8WayPoint8RoomList:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game8WayPoint8RoomListFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace WayPoint {
struct RoomList : public CNode {
	virtual ~RoomList(); // _08 (weak)
};
} // namespace WayPoint
} // namespace Game

#endif
