#ifndef _GAME_GAMEROUTEMGR_H
#define _GAME_GAMEROUTEMGR_H

/*
    __vt__Q24Game12GameRouteMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game12GameRouteMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__27Container<Q24Game8WayPoint>FPv"
    .4byte getNext__Q24Game12GameRouteMgrFPv
    .4byte getStart__Q24Game12GameRouteMgrFv
    .4byte getEnd__Q24Game12GameRouteMgrFv
    .4byte get__Q24Game12GameRouteMgrFPv
    .4byte "getAt__27Container<Q24Game8WayPoint>Fi"
    .4byte "getTo__27Container<Q24Game8WayPoint>Fv"
    .4byte getWayPoint__Q24Game12GameRouteMgrFs
    .4byte read__Q24Game12GameRouteMgrFR6Stream
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
	virtual void getNext(void*);    // _14
	virtual void getStart();        // _18
	virtual void getEnd();          // _1C
	virtual void get(void*);        // _20
	virtual void getAt(int);        // _24 (weak)
	virtual void getTo();           // _28 (weak)
};

namespace Game {
struct RouteMgr {
	virtual ~RouteMgr();             // _08
	virtual void _0C() = 0;          // _0C
	virtual void _10() = 0;          // _10
	virtual void getNext(void*);     // _14
	virtual void getStart();         // _18
	virtual void getEnd();           // _1C
	virtual void get(void*);         // _20
	virtual void _24() = 0;          // _24
	virtual void _28() = 0;          // _28
	virtual void getWayPoint(short); // _2C
	virtual void read(Stream&);      // _30
	virtual void write(Stream&);     // _34
};
} // namespace Game

namespace Game {
struct GameRouteMgr : public CNode, public Container<Game::WayPoint>, public RouteMgr {
	virtual ~GameRouteMgr();         // _08
	virtual void getNext(void*);     // _14
	virtual void getStart();         // _18
	virtual void getEnd();           // _1C
	virtual void get(void*);         // _20
	virtual void getWayPoint(short); // _2C
	virtual void read(Stream&);      // _30

	GameRouteMgr();
};
} // namespace Game

#endif
