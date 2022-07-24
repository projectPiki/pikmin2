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
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Container < Game
{
	struct WayPoint >
	{
		virtual void _08() = 0;        // _08
		virtual void _0C() = 0;        // _0C
		virtual void getObject(void*); // _10
		virtual void _14() = 0;        // _14
		virtual void _18() = 0;        // _18
		virtual void _1C() = 0;        // _1C
		virtual void _20() = 0;        // _20
		virtual void getAt(int);       // _24
		virtual void getTo();          // _28

		// _00 VTBL
	};
} // namespace Game

namespace Game {
struct RouteMgr : public CNode, public WayPoint > {
	virtual ~RouteMgr();         // _08
	virtual void _14() = 0;      // _14
	virtual void _18() = 0;      // _18
	virtual void _1C() = 0;      // _1C
	virtual void _20() = 0;      // _20
	virtual void _2C() = 0;      // _2C
	virtual void _30() = 0;      // _30
	virtual void write(Stream&); // _34

	// _00 VTBL
};
} // namespace Game

#endif
