#ifndef _GAME_ITEMUJAMUSHI_STATE_H
#define _GAME_ITEMUJAMUSHI_STATE_H

/*
    __vt__Q34Game12ItemUjamushi5State:
    .4byte 0
    .4byte 0
    .4byte "init__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg"
    .4byte "exec__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
    .4byte "cleanup__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
    .4byte "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
    .4byte "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
    .4byte "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
    .4byte "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
    .4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
    .4byte "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
*/

namespace Game {
struct FSMState<Game::ItemUjamushi::Item> {
	virtual void FSMState<ItemUjamushi::Item>::init(ItemUjamushi::Item*, StateArg*);         // _08 (weak)
	virtual void FSMState<ItemUjamushi::Item>::exec(ItemUjamushi::Item*);                    // _0C (weak)
	virtual void FSMState<ItemUjamushi::Item>::cleanup(ItemUjamushi::Item*);                 // _10 (weak)
	virtual void FSMState<ItemUjamushi::Item>::resume(ItemUjamushi::Item*);                  // _14 (weak)
	virtual void FSMState<ItemUjamushi::Item>::restart(ItemUjamushi::Item*);                 // _18 (weak)
	virtual void FSMState<ItemUjamushi::Item>::transit(ItemUjamushi::Item*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct ItemState<Game::ItemUjamushi::Item> {
	virtual void _08() = 0;                                                                                 // _08
	virtual void _0C() = 0;                                                                                 // _0C
	virtual void _10() = 0;                                                                                 // _10
	virtual void _14() = 0;                                                                                 // _14
	virtual void _18() = 0;                                                                                 // _18
	virtual void _1C() = 0;                                                                                 // _1C
	virtual void ItemState<ItemUjamushi::Item>::onDamage(ItemUjamushi::Item*, float);                       // _20 (weak)
	virtual void ItemState<ItemUjamushi::Item>::onKeyEvent(ItemUjamushi::Item*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void ItemState<ItemUjamushi::Item>::onBounce(ItemUjamushi::Item*, Sys::Triangle*);              // _28 (weak)
	virtual void ItemState<ItemUjamushi::Item>::onPlatCollision(ItemUjamushi::Item*, PlatEvent&);           // _2C (weak)
	virtual void ItemState<ItemUjamushi::Item>::onCollision(ItemUjamushi::Item*, CollEvent&);               // _30 (weak)
};
} // namespace Game

namespace Game {
namespace ItemUjamushi {
struct State : public FSMState<Game::ItemUjamushi::Item>, public ItemState<Game::ItemUjamushi::Item> {
};
} // namespace ItemUjamushi
} // namespace Game

#endif
