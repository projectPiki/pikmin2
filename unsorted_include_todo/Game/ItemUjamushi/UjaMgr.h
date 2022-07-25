#ifndef _GAME_ITEMUJAMUSHI_UJAMGR_H
#define _GAME_ITEMUJAMUSHI_UJAMGR_H

/*
    __vt__Q34Game12ItemUjamushi6UjaMgr:
    .4byte 0
    .4byte 0
    .4byte "getMaxObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
    .4byte "getNumObjects__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
    .4byte "isFlagAlive__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
    .4byte "getFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fi"
    .4byte "killFlock__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPQ24Game6TFlock"
    .4byte do_update__Q34Game12ItemUjamushi6UjaMgrFv
    .4byte do_update_boundSphere__Q34Game12ItemUjamushi6UjaMgrFv
    .4byte doSimpleDraw__Q24Game12BaseFlockMgrFP8ViewportPP12J3DModelDatai
    .4byte isWeed__Q24Game12BaseFlockMgrFi
    .4byte fear__Q24Game12BaseFlockMgrFi
    .4byte 0
    .4byte 0
    .4byte "@32@__dt__Q34Game12ItemUjamushi6UjaMgrFv"
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__36Container<Q34Game12ItemUjamushi3Uja>FPv"
    .4byte "@32@getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
    .4byte "@32@getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
    .4byte "@32@getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
    .4byte "@32@get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
    .4byte "getAt__36Container<Q34Game12ItemUjamushi3Uja>Fi"
    .4byte "getTo__36Container<Q34Game12ItemUjamushi3Uja>Fv"
    .4byte "get__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
    .4byte "getNext__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>FPv"
    .4byte "getStart__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
    .4byte "getEnd__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>Fv"
    .4byte __dt__Q34Game12ItemUjamushi6UjaMgrFv
*/

namespace Game {
namespace TFlockMgr < Game
{
	namespace ItemUjamushi {
	struct Uja >
	{
		virtual void TFlockMgr < getMaxObjects();    // _08 (weak)
		virtual void TFlockMgr < getNumObjects();    // _0C (weak)
		virtual void TFlockMgr < isFlagAlive(int);   // _10 (weak)
		virtual void TFlockMgr < getFlock(int);      // _14 (weak)
		virtual void TFlockMgr < killFlock(TFlock*); // _18 (weak)
		virtual void do_update();                    // _1C
		virtual void do_update_boundSphere();        // _20
		virtual void _24() = 0;                      // _24
		virtual void _28() = 0;                      // _28
		virtual void _2C() = 0;                      // _2C
		virtual void _30() = 0;                      // _30
		virtual void _34() = 0;                      // _34
		virtual void _38() = 0;                      // _38
		virtual void _3C() = 0;                      // _3C
		virtual void getObject(void*);               // _40 (weak)
		virtual void _44() = 0;                      // _44
		virtual void _48() = 0;                      // _48
		virtual void _4C() = 0;                      // _4C
		virtual void _50() = 0;                      // _50
		virtual void getAt(int);                     // _54 (weak)
		virtual void getTo();                        // _58 (weak)
		virtual void TFlockMgr < get(void*);         // _5C (weak)
		virtual void TFlockMgr < getNext(void*);     // _60 (weak)
		virtual void TFlockMgr < getStart();         // _64 (weak)
		virtual void TFlockMgr < getEnd();           // _68 (weak)
	};
	} // namespace ItemUjamushi
} // namespace Game
} // namespace Game

namespace Game {
struct BaseFlockMgr {
	virtual void _08() = 0;                                    // _08
	virtual void _0C() = 0;                                    // _0C
	virtual void _10() = 0;                                    // _10
	virtual void _14() = 0;                                    // _14
	virtual void _18() = 0;                                    // _18
	virtual void do_update();                                  // _1C
	virtual void do_update_boundSphere();                      // _20
	virtual void doSimpleDraw(Viewport*, J3DModelData**, int); // _24
	virtual void isWeed(int);                                  // _28 (weak)
	virtual void fear(int);                                    // _2C (weak)
};
} // namespace Game

struct CNode {
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void _18() = 0;               // _18
	virtual void do_update();             // _1C
	virtual void do_update_boundSphere(); // _20
	virtual void _24() = 0;               // _24
	virtual void _28() = 0;               // _28
	virtual void _2C() = 0;               // _2C
	virtual void _30() = 0;               // _30
	virtual void _34() = 0;               // _34
	virtual void _38() = 0;               // _38
	virtual void getChildCount();         // _3C
};

namespace Game {
namespace ItemUjamushi {
struct UjaMgr : public Uja >, public BaseFlockMgr, public CNode {
	virtual void do_update();             // _1C
	virtual void do_update_boundSphere(); // _20
	virtual void _30() = 0;               // _30
	virtual void _34() = 0;               // _34
	virtual ~UjaMgr();                    // _6C (weak)

	UjaMgr(int);
	void init(Game::ItemUjamushi::UjaMgrInitArg&);
	void test_createUjas();
	void astonishPikmins();
};
} // namespace ItemUjamushi
} // namespace Game

#endif
