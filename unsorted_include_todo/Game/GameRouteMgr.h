#ifndef _GAME_GAMEROUTEMGR_H
#define _GAME_GAMEROUTEMGR_H

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
