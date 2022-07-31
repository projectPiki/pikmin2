#ifndef _GAME_ITEMBIGFOUNTAIN_STATE_H
#define _GAME_ITEMBIGFOUNTAIN_STATE_H

/*
    __vt__Q34Game15ItemBigFountain5State:
    .4byte 0
    .4byte 0
    .4byte "init__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemPQ24Game8StateArg"
    .4byte "exec__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4Item"
    .4byte "cleanup__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4Item"
    .4byte "resume__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4Item"
    .4byte "restart__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4Item"
    .4byte "transit__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemiPQ24Game8StateArg"
    .4byte onDamage__Q34Game15ItemBigFountain5StateFPQ34Game15ItemBigFountain4Itemf
    .4byte "onKeyEvent__Q24Game40ItemState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemRCQ28SysShape8KeyEvent"
    .4byte "onBounce__Q24Game40ItemState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game40ItemState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game40ItemState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemRQ24Game9CollEvent"
    .4byte canRide__Q34Game15ItemBigFountain5StateFv
*/

namespace Game {
struct FSMState<Game::ItemBigFountain::Item> {
	virtual void FSMState<ItemBigFountain::Item>::init(ItemBigFountain::Item*, StateArg*);         // _08 (weak)
	virtual void FSMState<ItemBigFountain::Item>::exec(ItemBigFountain::Item*);                    // _0C (weak)
	virtual void FSMState<ItemBigFountain::Item>::cleanup(ItemBigFountain::Item*);                 // _10 (weak)
	virtual void FSMState<ItemBigFountain::Item>::resume(ItemBigFountain::Item*);                  // _14 (weak)
	virtual void FSMState<ItemBigFountain::Item>::restart(ItemBigFountain::Item*);                 // _18 (weak)
	virtual void FSMState<ItemBigFountain::Item>::transit(ItemBigFountain::Item*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct ItemState<Game::ItemBigFountain::Item> {
	virtual void _08() = 0;                                                                                       // _08
	virtual void _0C() = 0;                                                                                       // _0C
	virtual void _10() = 0;                                                                                       // _10
	virtual void _14() = 0;                                                                                       // _14
	virtual void _18() = 0;                                                                                       // _18
	virtual void _1C() = 0;                                                                                       // _1C
	virtual void onDamage(Item*, float);                                                                          // _20 (weak)
	virtual void ItemState<ItemBigFountain::Item>::onKeyEvent(ItemBigFountain::Item*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void ItemState<ItemBigFountain::Item>::onBounce(ItemBigFountain::Item*, Sys::Triangle*);              // _28 (weak)
	virtual void ItemState<ItemBigFountain::Item>::onPlatCollision(ItemBigFountain::Item*, PlatEvent&);           // _2C (weak)
	virtual void ItemState<ItemBigFountain::Item>::onCollision(ItemBigFountain::Item*, CollEvent&);               // _30 (weak)
};
} // namespace Game

namespace Game {
namespace ItemBigFountain {
struct State : public FSMState<Game::ItemBigFountain::Item>, public ItemState<Game::ItemBigFountain::Item> {
	virtual void onDamage(Item*, float); // _20 (weak)
	virtual void canRide();              // _34 (weak)
};
} // namespace ItemBigFountain
} // namespace Game

#endif
