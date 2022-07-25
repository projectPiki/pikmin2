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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Container < Game
{
	struct MapUnit >
	{
		virtual ~MapUnit > ();                // _08 (weak)
		virtual void _0C() = 0;               // _0C
		virtual void getObject(void*);        // _10 (weak)
		virtual void getNext(void*);          // _14 (weak)
		virtual void getStart();              // _18 (weak)
		virtual void getEnd();                // _1C (weak)
		virtual void get(void*);              // _20 (weak)
		virtual void getAt(int);              // _24
		virtual void getTo();                 // _28 (weak)
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
		virtual void _5C() = 0;               // _5C
		virtual void _60() = 0;               // _60
		virtual void doAnimation();           // _64 (weak)
		virtual void doEntry();               // _68 (weak)
		virtual void doSetView(int);          // _6C (weak)
		virtual void doViewCalc();            // _70 (weak)
		virtual void doSimulation(float);     // _74 (weak)
		virtual void doDirectDraw(Graphics&); // _78 (weak)
		virtual void resetMgr();              // _7C (weak)
	};
} // namespace Game

struct GenericObjectMgr {
	virtual ~GenericObjectMgr();          // _08 (weak)
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void _18() = 0;               // _18
	virtual void _1C() = 0;               // _1C
	virtual void _20() = 0;               // _20
	virtual void getAt(int);              // _24
	virtual void _28() = 0;               // _28
	virtual void _2C() = 0;               // _2C
	virtual void _30() = 0;               // _30
	virtual void _34() = 0;               // _34
	virtual void _38() = 0;               // _38
	virtual void _3C() = 0;               // _3C
	virtual void _40() = 0;               // _40
	virtual void _44() = 0;               // _44
	virtual void _48() = 0;               // _48
	virtual void doSimpleDraw(Viewport*); // _4C (weak)
	virtual void loadResources();         // _50 (weak)
	virtual void _54() = 0;               // _54
	virtual void pausable();              // _58 (weak)
	virtual void frozenable();            // _5C (weak)
	virtual void getMatrixLoadType();     // _60 (weak)
};

namespace Game {
struct MapUnitMgr : public CNode, public MapUnit >, public GenericObjectMgr {
	virtual ~MapUnitMgr();   // _08 (weak)
	virtual void getAt(int); // _24
	virtual void _2C() = 0;  // _2C
	virtual void _30() = 0;  // _30

	void makeUnit(Game::MapUnit*, char*);
};
} // namespace Game

#endif
