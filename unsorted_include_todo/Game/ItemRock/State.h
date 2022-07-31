#ifndef _GAME_ITEMROCK_STATE_H
#define _GAME_ITEMROCK_STATE_H

/*
    __vt__Q34Game8ItemRock5State:
    .4byte 0
    .4byte 0
    .4byte "init__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ24Game8StateArg"
    .4byte "exec__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
    .4byte "cleanup__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
    .4byte "resume__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
    .4byte "restart__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
    .4byte "transit__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
    .4byte onDamage__Q34Game8ItemRock5StateFPQ34Game8ItemRock4Itemf
    .4byte "onKeyEvent__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent"
    .4byte "onBounce__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9CollEvent"
*/

namespace Game {
struct FSMState<Game::ItemRock::Item> {
	virtual void FSMState<ItemRock::Item>::init(ItemRock::Item*, StateArg*);         // _08 (weak)
	virtual void FSMState<ItemRock::Item>::exec(ItemRock::Item*);                    // _0C (weak)
	virtual void FSMState<ItemRock::Item>::cleanup(ItemRock::Item*);                 // _10 (weak)
	virtual void FSMState<ItemRock::Item>::resume(ItemRock::Item*);                  // _14 (weak)
	virtual void FSMState<ItemRock::Item>::restart(ItemRock::Item*);                 // _18 (weak)
	virtual void FSMState<ItemRock::Item>::transit(ItemRock::Item*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct ItemState<Game::ItemRock::Item> {
	virtual void _08() = 0;                                                                         // _08
	virtual void _0C() = 0;                                                                         // _0C
	virtual void _10() = 0;                                                                         // _10
	virtual void _14() = 0;                                                                         // _14
	virtual void _18() = 0;                                                                         // _18
	virtual void _1C() = 0;                                                                         // _1C
	virtual void onDamage(Item*, float);                                                            // _20 (weak)
	virtual void ItemState<ItemRock::Item>::onKeyEvent(ItemRock::Item*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void ItemState<ItemRock::Item>::onBounce(ItemRock::Item*, Sys::Triangle*);              // _28 (weak)
	virtual void ItemState<ItemRock::Item>::onPlatCollision(ItemRock::Item*, PlatEvent&);           // _2C (weak)
	virtual void ItemState<ItemRock::Item>::onCollision(ItemRock::Item*, CollEvent&);               // _30 (weak)
};
} // namespace Game

namespace Game {
namespace ItemRock {
struct State : public FSMState<Game::ItemRock::Item>, public ItemState<Game::ItemRock::Item> {
	virtual void onDamage(Item*, float); // _20 (weak)
};
} // namespace ItemRock
} // namespace Game

#endif
