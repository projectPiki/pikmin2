#ifndef _GAME_CITEMSTATE_H
#define _GAME_CITEMSTATE_H

/*
    __vt__Q24Game10CItemState:
    .4byte 0
    .4byte 0
    .4byte "init__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg"
    .4byte "exec__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "cleanup__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
    .4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
    .4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
    .4byte onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
    .4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
    .4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
    .4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
*/

namespace Game {
namespace FSMState < Game
{
	struct CFSMItem >
	{
		virtual void FSMState < init(CFSMItem*, StateArg*);         // _08
		virtual void FSMState < exec(CFSMItem*);                    // _0C
		virtual void FSMState < cleanup(CFSMItem*);                 // _10
		virtual void FSMState < resume(CFSMItem*);                  // _14
		virtual void FSMState < restart(CFSMItem*);                 // _18
		virtual void FSMState < transit(CFSMItem*, int, StateArg*); // _1C

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct CItemState : public CFSMItem > {
	virtual void onDamage(CFSMItem*, float);                       // _20
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _24
	virtual void onBounce(CFSMItem*, Sys::Triangle*);              // _28
	virtual void onPlatCollision(CFSMItem*, PlatEvent&);           // _2C
	virtual void onCollision(CFSMItem*, CollEvent&);               // _30

	// _00 VTBL
};
} // namespace Game

#endif
