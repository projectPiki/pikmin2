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
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Container < Game
{
	struct WayPoint >
	{
		virtual void _00() = 0;        // _00
		virtual void _04() = 0;        // _04
		virtual void getObject(void*); // _08
		virtual void _0C() = 0;        // _0C
		virtual void _10() = 0;        // _10
		virtual void _14() = 0;        // _14
		virtual void _18() = 0;        // _18
		virtual void getAt(int);       // _1C
		virtual void getTo();          // _20

		// _00 VTBL
	};
} // namespace Game

namespace Game {
struct RouteMgr {
	virtual void _00() = 0;      // _00
	virtual void _04() = 0;      // _04
	virtual void _08() = 0;      // _08
	virtual void _0C() = 0;      // _0C
	virtual void _10() = 0;      // _10
	virtual void _14() = 0;      // _14
	virtual void _18() = 0;      // _18
	virtual void _1C() = 0;      // _1C
	virtual void _20() = 0;      // _20
	virtual void _24() = 0;      // _24
	virtual void _28() = 0;      // _28
	virtual void write(Stream&); // _2C

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct GameRouteMgr : public CNode, public WayPoint >, public RouteMgr {
	virtual ~GameRouteMgr();         // _00
	virtual void getChildCount();    // _04
	virtual void getObject(void*);   // _08
	virtual void getNext(void*);     // _0C
	virtual void getStart();         // _10
	virtual void getEnd();           // _14
	virtual void get(void*);         // _18
	virtual void getAt(int);         // _1C
	virtual void getTo();            // _20
	virtual void getWayPoint(short); // _24
	virtual void read(Stream&);      // _28
	virtual void write(Stream&);     // _2C

	// _00 VTBL
};
} // namespace Game

#endif
