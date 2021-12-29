#ifndef _GAME_ITEMHOLE_STATE_H
#define _GAME_ITEMHOLE_STATE_H

/*
    __vt__Q34Game8ItemHole5State:
    .4byte 0
    .4byte 0
    .4byte
   "init__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg"
    .4byte "exec__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "cleanup__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte
   "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
    .4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
    .4byte
   onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
    .4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
    .4byte
   onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
    .4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
    .4byte canRide__Q34Game8ItemHole5StateFv
*/

namespace Game {
namespace FSMState < Game
{
	struct CFSMItem >
	{
		virtual void FSMState < init(CFSMItem*, StateArg*);         // _00
		virtual void FSMState < exec(CFSMItem*);                    // _04
		virtual void FSMState < cleanup(CFSMItem*);                 // _08
		virtual void FSMState < resume(CFSMItem*);                  // _0C
		virtual void FSMState < restart(CFSMItem*);                 // _10
		virtual void FSMState < transit(CFSMItem*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct CItemState {
	virtual void _00() = 0;                                        // _00
	virtual void _04() = 0;                                        // _04
	virtual void _08() = 0;                                        // _08
	virtual void _0C() = 0;                                        // _0C
	virtual void _10() = 0;                                        // _10
	virtual void _14() = 0;                                        // _14
	virtual void onDamage(CFSMItem*, float);                       // _18
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _1C
	virtual void onBounce(CFSMItem*, Sys::Triangle*);              // _20
	virtual void onPlatCollision(CFSMItem*, PlatEvent&);           // _24
	virtual void onCollision(CFSMItem*, CollEvent&);               // _28

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace ItemHole {
	struct State : public CFSMItem >, public CItemState {
		virtual void FSMState < init(CFSMItem*, StateArg*);            // _00
		virtual void FSMState < exec(CFSMItem*);                       // _04
		virtual void FSMState < cleanup(CFSMItem*);                    // _08
		virtual void FSMState < resume(CFSMItem*);                     // _0C
		virtual void FSMState < restart(CFSMItem*);                    // _10
		virtual void FSMState < transit(CFSMItem*, int, StateArg*);    // _14
		virtual void onDamage(CFSMItem*, float);                       // _18
		virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _1C
		virtual void onBounce(CFSMItem*, Sys::Triangle*);              // _20
		virtual void onPlatCollision(CFSMItem*, PlatEvent&);           // _24
		virtual void onCollision(CFSMItem*, CollEvent&);               // _28
		virtual void canRide();                                        // _2C

		// _00 VTBL
	};
} // namespace ItemHole
} // namespace Game

#endif
