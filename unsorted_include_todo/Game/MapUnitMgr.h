#ifndef _GAME_MAPUNITMGR_H
#define _GAME_MAPUNITMGR_H

/*
    __vt__Q24Game10MapUnitMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game10MapUnitMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__26Container<Q24Game7MapUnit>FPv"
    .4byte "getNext__30NodeObjectMgr<Q24Game7MapUnit>FPv"
    .4byte "getStart__30NodeObjectMgr<Q24Game7MapUnit>Fv"
    .4byte "getEnd__30NodeObjectMgr<Q24Game7MapUnit>Fv"
    .4byte "get__30NodeObjectMgr<Q24Game7MapUnit>FPv"
    .4byte getAt__Q24Game10MapUnitMgrFi
    .4byte "getTo__26Container<Q24Game7MapUnit>Fv"
    .4byte 0
    .4byte 0
    .4byte "@28@doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"
    .4byte "@28@doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"
    .4byte "@28@doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"
    .4byte "@28@doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"
    .4byte "@28@doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"
    .4byte "@28@doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"
    .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
    .4byte loadResources__16GenericObjectMgrFv
    .4byte "@28@resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv"
    .4byte pausable__16GenericObjectMgrFv
    .4byte frozenable__16GenericObjectMgrFv
    .4byte getMatrixLoadType__16GenericObjectMgrFv
    .4byte "doAnimation__26ObjectMgr<Q24Game7MapUnit>Fv"
    .4byte "doEntry__26ObjectMgr<Q24Game7MapUnit>Fv"
    .4byte "doSetView__26ObjectMgr<Q24Game7MapUnit>Fi"
    .4byte "doViewCalc__26ObjectMgr<Q24Game7MapUnit>Fv"
    .4byte "doSimulation__26ObjectMgr<Q24Game7MapUnit>Ff"
    .4byte "doDirectDraw__26ObjectMgr<Q24Game7MapUnit>FR8Graphics"
    .4byte "resetMgr__30NodeObjectMgr<Q24Game7MapUnit>Fv"
*/

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Container < Game
{
	struct MapUnit >
	{
		virtual void _00() = 0;               // _00
		virtual void _04() = 0;               // _04
		virtual void getObject(void*);        // _08
		virtual void getNext(void*);          // _0C
		virtual void getStart();              // _10
		virtual void getEnd();                // _14
		virtual void get(void*);              // _18
		virtual void _1C() = 0;               // _1C
		virtual void getTo();                 // _20
		virtual void _24() = 0;               // _24
		virtual void _28() = 0;               // _28
		virtual void _2C() = 0;               // _2C
		virtual void _30() = 0;               // _30
		virtual void _34() = 0;               // _34
		virtual void _38() = 0;               // _38
		virtual void _3C() = 0;               // _3C
		virtual void _40() = 0;               // _40
		virtual void _44() = 0;               // _44
		virtual void _48() = 0;               // _48
		virtual void _4C() = 0;               // _4C
		virtual void _50() = 0;               // _50
		virtual void _54() = 0;               // _54
		virtual void _58() = 0;               // _58
		virtual void doAnimation();           // _5C
		virtual void doEntry();               // _60
		virtual void doSetView(int);          // _64
		virtual void doViewCalc();            // _68
		virtual void doSimulation(float);     // _6C
		virtual void doDirectDraw(Graphics&); // _70
		virtual void resetMgr();              // _74

		// _00 VTBL
	};
} // namespace Game

struct GenericObjectMgr {
	virtual void _00() = 0;               // _00
	virtual void _04() = 0;               // _04
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void _18() = 0;               // _18
	virtual void _1C() = 0;               // _1C
	virtual void _20() = 0;               // _20
	virtual void _24() = 0;               // _24
	virtual void _28() = 0;               // _28
	virtual void _2C() = 0;               // _2C
	virtual void _30() = 0;               // _30
	virtual void _34() = 0;               // _34
	virtual void _38() = 0;               // _38
	virtual void _3C() = 0;               // _3C
	virtual void _40() = 0;               // _40
	virtual void doSimpleDraw(Viewport*); // _44
	virtual void loadResources();         // _48
	virtual void _4C() = 0;               // _4C
	virtual void pausable();              // _50
	virtual void frozenable();            // _54
	virtual void getMatrixLoadType();     // _58

	// _00 VTBL
};

namespace Game {
struct MapUnitMgr : public CNode, public MapUnit >, public GenericObjectMgr {
	virtual ~MapUnitMgr();                // _00
	virtual void getChildCount();         // _04
	virtual void getObject(void*);        // _08
	virtual void getNext(void*);          // _0C
	virtual void getStart();              // _10
	virtual void getEnd();                // _14
	virtual void get(void*);              // _18
	virtual void getAt(int);              // _1C
	virtual void getTo();                 // _20
	virtual void _24() = 0;               // _24
	virtual void _28() = 0;               // _28
	virtual void doSimpleDraw(Viewport*); // _44
	virtual void loadResources();         // _48
	virtual void pausable();              // _50
	virtual void frozenable();            // _54
	virtual void getMatrixLoadType();     // _58
	virtual void doAnimation();           // _5C
	virtual void doEntry();               // _60
	virtual void doSetView(int);          // _64
	virtual void doViewCalc();            // _68
	virtual void doSimulation(float);     // _6C
	virtual void doDirectDraw(Graphics&); // _70
	virtual void resetMgr();              // _74

	// _00 VTBL
};
} // namespace Game

#endif
