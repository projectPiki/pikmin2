#ifndef _GAME_ITEMHOLE_CLOSESTATE_H
#define _GAME_ITEMHOLE_CLOSESTATE_H

/*
    __vt__Q34Game8ItemHole10CloseState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItemPQ24Game8StateArg
    .4byte exec__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem
    .4byte cleanup__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem
    .4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
    .4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
    .4byte onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
    .4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
    .4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
    .4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
    .4byte canRide__Q34Game8ItemHole5StateFv
*/

namespace Game {
struct FSMState<Game::CFSMItem> {
	virtual void init(CFSMItem*, StateArg*);                             // _08
	virtual void exec(CFSMItem*);                                        // _0C
	virtual void cleanup(CFSMItem*);                                     // _10
	virtual void FSMState<CFSMItem>::resume(CFSMItem*);                  // _14 (weak)
	virtual void FSMState<CFSMItem>::restart(CFSMItem*);                 // _18 (weak)
	virtual void FSMState<CFSMItem>::transit(CFSMItem*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct CItemState {
	virtual void init(CFSMItem*, StateArg*);                       // _08
	virtual void exec(CFSMItem*);                                  // _0C
	virtual void cleanup(CFSMItem*);                               // _10
	virtual void _14() = 0;                                        // _14
	virtual void _18() = 0;                                        // _18
	virtual void _1C() = 0;                                        // _1C
	virtual void onDamage(CFSMItem*, float);                       // _20 (weak)
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void onBounce(CFSMItem*, Sys::Triangle*);              // _28 (weak)
	virtual void onPlatCollision(CFSMItem*, PlatEvent&);           // _2C (weak)
	virtual void onCollision(CFSMItem*, CollEvent&);               // _30 (weak)
};
} // namespace Game

namespace Game {
namespace ItemHole {
struct State {
	virtual void init(CFSMItem*, StateArg*); // _08
	virtual void exec(CFSMItem*);            // _0C
	virtual void cleanup(CFSMItem*);         // _10
	virtual void _14() = 0;                  // _14
	virtual void _18() = 0;                  // _18
	virtual void _1C() = 0;                  // _1C
	virtual void _20() = 0;                  // _20
	virtual void _24() = 0;                  // _24
	virtual void _28() = 0;                  // _28
	virtual void _2C() = 0;                  // _2C
	virtual void _30() = 0;                  // _30
	virtual void canRide();                  // _34 (weak)
};
} // namespace ItemHole
} // namespace Game

namespace Game {
namespace ItemHole {
struct CloseState : public FSMState<Game::CFSMItem>, public CItemState, public State {
	virtual void init(CFSMItem*, StateArg*); // _08
	virtual void exec(CFSMItem*);            // _0C
	virtual void cleanup(CFSMItem*);         // _10
};
} // namespace ItemHole
} // namespace Game

#endif
