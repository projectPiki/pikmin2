#ifndef _GAME_GATEDOWNSTATE_H
#define _GAME_GATEDOWNSTATE_H

/*
    __vt__Q24Game13GateDownState:
    .4byte 0
    .4byte 0
    .4byte init__Q24Game13GateDownStateFPQ24Game8ItemGatePQ24Game8StateArg
    .4byte exec__Q24Game13GateDownStateFPQ24Game8ItemGate
    .4byte cleanup__Q24Game13GateDownStateFPQ24Game8ItemGate
    .4byte "resume__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
    .4byte "restart__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGate"
    .4byte "transit__Q24Game26FSMState<Q24Game8ItemGate>FPQ24Game8ItemGateiPQ24Game8StateArg"
    .4byte onDamage__Q24Game13GateDownStateFPQ24Game8ItemGatef
    .4byte onKeyEvent__Q24Game13GateDownStateFPQ24Game8ItemGateRCQ28SysShape8KeyEvent
    .4byte "onBounce__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGatePQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game27ItemState<Q24Game8ItemGate>FPQ24Game8ItemGateRQ24Game9CollEvent"
*/

namespace Game {
struct FSMState<Game::ItemGate> {
	virtual void init(ItemGate*, StateArg*);                             // _08
	virtual void exec(ItemGate*);                                        // _0C
	virtual void cleanup(ItemGate*);                                     // _10
	virtual void FSMState<ItemGate>::resume(ItemGate*);                  // _14 (weak)
	virtual void FSMState<ItemGate>::restart(ItemGate*);                 // _18 (weak)
	virtual void FSMState<ItemGate>::transit(ItemGate*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct ItemState<Game::ItemGate> {
	virtual void init(ItemGate*, StateArg*);                                  // _08
	virtual void exec(ItemGate*);                                             // _0C
	virtual void cleanup(ItemGate*);                                          // _10
	virtual void _14() = 0;                                                   // _14
	virtual void _18() = 0;                                                   // _18
	virtual void _1C() = 0;                                                   // _1C
	virtual void onDamage(ItemGate*, float);                                  // _20
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&);            // _24
	virtual void ItemState<ItemGate>::onBounce(ItemGate*, Sys::Triangle*);    // _28 (weak)
	virtual void ItemState<ItemGate>::onPlatCollision(ItemGate*, PlatEvent&); // _2C (weak)
	virtual void ItemState<ItemGate>::onCollision(ItemGate*, CollEvent&);     // _30 (weak)
};
} // namespace Game

namespace Game {
struct GateDownState : public FSMState<Game::ItemGate>, public ItemState<Game::ItemGate> {
	virtual void init(ItemGate*, StateArg*);                       // _08
	virtual void exec(ItemGate*);                                  // _0C
	virtual void cleanup(ItemGate*);                               // _10
	virtual void onDamage(ItemGate*, float);                       // _20
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&); // _24
};
} // namespace Game

#endif
