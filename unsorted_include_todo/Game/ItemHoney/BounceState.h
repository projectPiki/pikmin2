#ifndef _GAME_ITEMHONEY_BOUNCESTATE_H
#define _GAME_ITEMHONEY_BOUNCESTATE_H

/*
    __vt__Q34Game9ItemHoney11BounceState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItemPQ24Game8StateArg
    .4byte exec__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItem
    .4byte cleanup__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItem
    .4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
    .4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
    .4byte onKeyEvent__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
    .4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
    .4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
    .4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
    .4byte collisionCallback__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game9CollEvent
    .4byte interactAbsorb__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb
    .4byte absorbable__Q34Game9ItemHoney5StateFv
*/

namespace Game {
namespace FSMState < Game
{
	struct CFSMItem >
	{
		virtual void _08() = 0;                                     // _08
		virtual void _0C() = 0;                                     // _0C
		virtual void _10() = 0;                                     // _10
		virtual void FSMState < resume(CFSMItem*);                  // _14
		virtual void FSMState < restart(CFSMItem*);                 // _18
		virtual void FSMState < transit(CFSMItem*, int, StateArg*); // _1C

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct CItemState {
	virtual void _08() = 0;                              // _08
	virtual void _0C() = 0;                              // _0C
	virtual void _10() = 0;                              // _10
	virtual void _14() = 0;                              // _14
	virtual void _18() = 0;                              // _18
	virtual void _1C() = 0;                              // _1C
	virtual void onDamage(CFSMItem*, float);             // _20
	virtual void _24() = 0;                              // _24
	virtual void onBounce(CFSMItem*, Sys::Triangle*);    // _28
	virtual void onPlatCollision(CFSMItem*, PlatEvent&); // _2C
	virtual void onCollision(CFSMItem*, CollEvent&);     // _30

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace ItemHoney {
struct State {
	virtual void _08() = 0;                                  // _08
	virtual void _0C() = 0;                                  // _0C
	virtual void _10() = 0;                                  // _10
	virtual void _14() = 0;                                  // _14
	virtual void _18() = 0;                                  // _18
	virtual void _1C() = 0;                                  // _1C
	virtual void _20() = 0;                                  // _20
	virtual void _24() = 0;                                  // _24
	virtual void _28() = 0;                                  // _28
	virtual void _2C() = 0;                                  // _2C
	virtual void _30() = 0;                                  // _30
	virtual void collisionCallback(CFSMItem*, CollEvent&);   // _34
	virtual void interactAbsorb(CFSMItem*, InteractAbsorb&); // _38
	virtual void absorbable();                               // _3C

	// _00 VTBL
};
} // namespace ItemHoney
} // namespace Game

namespace Game {
namespace ItemHoney {
struct BounceState : public CFSMItem >, public CItemState, public State {
	virtual void init(CFSMItem*, StateArg*);                       // _08
	virtual void exec(CFSMItem*);                                  // _0C
	virtual void cleanup(CFSMItem*);                               // _10
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _24

	// _00 VTBL
};
} // namespace ItemHoney
} // namespace Game

#endif
