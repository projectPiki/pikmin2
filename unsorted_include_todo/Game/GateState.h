#ifndef _GAME_GATESTATE_H
#define _GAME_GATESTATE_H

/*
    __vt__Q24Game9GateState:
    .4byte 0
    .4byte 0
    .4byte
   "init__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ24Game8StateArg"
    .4byte "exec__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
    .4byte "cleanup__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
    .4byte "resume__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
    .4byte "restart__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
    .4byte
   "transit__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
    .4byte onDamage__Q24Game9GateStateFPQ24Game8ItemGatef
    .4byte onKeyEvent__Q24Game9GateStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent
    .4byte
   "onBounce__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ23Sys8Triangle"
    .4byte
   "onPlatCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9PlatEvent"
    .4byte
   "onCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9CollEvent"
*/

namespace Game {
namespace FSMState < Game
{
	struct ItemGate >
	{
		virtual void FSMState < init(ItemGate*, StateArg*);              // _00
		virtual void FSMState < exec(ItemGate*);                         // _04
		virtual void FSMState < cleanup(ItemGate*);                      // _08
		virtual void FSMState < resume(ItemGate*);                       // _0C
		virtual void FSMState < restart(ItemGate*);                      // _10
		virtual void FSMState < transit(ItemGate*, int, StateArg*);      // _14
		virtual void onDamage(ItemGate*, float);                         // _18
		virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&);   // _1C
		virtual void ItemState < onBounce(ItemGate*, Sys::Triangle*);    // _20
		virtual void ItemState < onPlatCollision(ItemGate*, PlatEvent&); // _24
		virtual void ItemState < onCollision(ItemGate*, CollEvent&);     // _28

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct GateState : public ItemGate > {
	virtual void FSMState < init(ItemGate*, StateArg*);              // _00
	virtual void FSMState < exec(ItemGate*);                         // _04
	virtual void FSMState < cleanup(ItemGate*);                      // _08
	virtual void FSMState < resume(ItemGate*);                       // _0C
	virtual void FSMState < restart(ItemGate*);                      // _10
	virtual void FSMState < transit(ItemGate*, int, StateArg*);      // _14
	virtual void onDamage(ItemGate*, float);                         // _18
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&);   // _1C
	virtual void ItemState < onBounce(ItemGate*, Sys::Triangle*);    // _20
	virtual void ItemState < onPlatCollision(ItemGate*, PlatEvent&); // _24
	virtual void ItemState < onCollision(ItemGate*, CollEvent&);     // _28

	// _00 VTBL
};
} // namespace Game

#endif
