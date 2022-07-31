#ifndef _GAME_ITEMTREASURE_STATE_H
#define _GAME_ITEMTREASURE_STATE_H

/*
    __vt__Q34Game12ItemTreasure5State:
    .4byte 0
    .4byte 0
    .4byte "init__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ24Game8StateArg"
    .4byte "exec__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
    .4byte "cleanup__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
    .4byte "resume__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
    .4byte "restart__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
    .4byte "transit__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
    .4byte onDamage__Q34Game12ItemTreasure5StateFPQ34Game12ItemTreasure4Itemf
    .4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRCQ28SysShape8KeyEvent"
    .4byte "onBounce__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9CollEvent"
*/

namespace Game {
struct FSMState<Game::ItemTreasure::Item> {
	virtual void FSMState<ItemTreasure::Item>::init(ItemTreasure::Item*, StateArg*);         // _08 (weak)
	virtual void FSMState<ItemTreasure::Item>::exec(ItemTreasure::Item*);                    // _0C (weak)
	virtual void FSMState<ItemTreasure::Item>::cleanup(ItemTreasure::Item*);                 // _10 (weak)
	virtual void FSMState<ItemTreasure::Item>::resume(ItemTreasure::Item*);                  // _14 (weak)
	virtual void FSMState<ItemTreasure::Item>::restart(ItemTreasure::Item*);                 // _18 (weak)
	virtual void FSMState<ItemTreasure::Item>::transit(ItemTreasure::Item*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct ItemState<Game::ItemTreasure::Item> {
	virtual void _08() = 0;                                                                                 // _08
	virtual void _0C() = 0;                                                                                 // _0C
	virtual void _10() = 0;                                                                                 // _10
	virtual void _14() = 0;                                                                                 // _14
	virtual void _18() = 0;                                                                                 // _18
	virtual void _1C() = 0;                                                                                 // _1C
	virtual void onDamage(Item*, float);                                                                    // _20 (weak)
	virtual void ItemState<ItemTreasure::Item>::onKeyEvent(ItemTreasure::Item*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void ItemState<ItemTreasure::Item>::onBounce(ItemTreasure::Item*, Sys::Triangle*);              // _28 (weak)
	virtual void ItemState<ItemTreasure::Item>::onPlatCollision(ItemTreasure::Item*, PlatEvent&);           // _2C (weak)
	virtual void ItemState<ItemTreasure::Item>::onCollision(ItemTreasure::Item*, CollEvent&);               // _30 (weak)
};
} // namespace Game

namespace Game {
namespace ItemTreasure {
struct State : public FSMState<Game::ItemTreasure::Item>, public ItemState<Game::ItemTreasure::Item> {
	virtual void onDamage(Item*, float); // _20 (weak)
};
} // namespace ItemTreasure
} // namespace Game

#endif
