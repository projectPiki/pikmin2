#ifndef _GAME_ITEMHOLE_NORMALSTATE_H
#define _GAME_ITEMHOLE_NORMALSTATE_H

/*
    __vt__Q34Game8ItemHole11NormalState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItemPQ24Game8StateArg
    .4byte exec__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItem
    .4byte cleanup__Q34Game8ItemHole11NormalStateFPQ24Game8CFSMItem
    .4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
    .4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
    .4byte onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
    .4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
    .4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
    .4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
    .4byte canRide__Q34Game8ItemHole11NormalStateFv
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
	virtual void _08() = 0;                                        // _08
	virtual void _0C() = 0;                                        // _0C
	virtual void _10() = 0;                                        // _10
	virtual void _14() = 0;                                        // _14
	virtual void _18() = 0;                                        // _18
	virtual void _1C() = 0;                                        // _1C
	virtual void onDamage(CFSMItem*, float);                       // _20
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _24
	virtual void onBounce(CFSMItem*, Sys::Triangle*);              // _28
	virtual void onPlatCollision(CFSMItem*, PlatEvent&);           // _2C
	virtual void onCollision(CFSMItem*, CollEvent&);               // _30

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace ItemHole {
struct NormalState : public CFSMItem >, public CItemState {
	virtual void init(CFSMItem*, StateArg*); // _08
	virtual void exec(CFSMItem*);            // _0C
	virtual void cleanup(CFSMItem*);         // _10
	virtual void canRide();                  // _34

	// _00 VTBL
};
} // namespace ItemHole
} // namespace Game

#endif
