#ifndef _GAME_ROUTEMGR_H
#define _GAME_ROUTEMGR_H

/*
    __vt__Q24Game8RouteMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game8RouteMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__27Container<Q24Game8WayPoint>FPv"
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte "getAt__27Container<Q24Game8WayPoint>Fi"
    .4byte "getTo__27Container<Q24Game8WayPoint>Fv"
    .4byte 0
    .4byte 0
    .4byte write__Q24Game8RouteMgrFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C
};

struct Container<Game::WayPoint> {
	virtual ~Container<WayPoint>(); // _08
	virtual void _0C() = 0;         // _0C
	virtual void getObject(void*);  // _10 (weak)
	virtual void _14() = 0;         // _14
	virtual void _18() = 0;         // _18
	virtual void _1C() = 0;         // _1C
	virtual void _20() = 0;         // _20
	virtual void getAt(int);        // _24 (weak)
	virtual void getTo();           // _28 (weak)
};

namespace Game {
struct RouteMgr : public CNode, public Container<Game::WayPoint> {
	virtual ~RouteMgr();         // _08
	virtual void _14() = 0;      // _14
	virtual void _18() = 0;      // _18
	virtual void _1C() = 0;      // _1C
	virtual void _20() = 0;      // _20
	virtual void _2C() = 0;      // _2C
	virtual void _30() = 0;      // _30
	virtual void write(Stream&); // _34

	void makeInvertLinks();
	void linkable(Game::WayPoint*, Game::WayPoint*);
	void refreshWater();
	void getNearestWayPoint(Game::WPSearchArg&);
	void getNearestEdge(Game::WPEdgeSearchArg&);
	void setCloseAll();
	void openRoom(short);
};
} // namespace Game

#endif
