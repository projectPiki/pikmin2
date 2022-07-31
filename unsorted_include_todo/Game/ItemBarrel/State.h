#ifndef _GAME_ITEMBARREL_STATE_H
#define _GAME_ITEMBARREL_STATE_H

/*
    __vt__Q34Game10ItemBarrel5State:
    .4byte 0
    .4byte 0
    .4byte "init__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ24Game8StateArg"
    .4byte "exec__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
    .4byte "cleanup__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
    .4byte "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
    .4byte "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
    .4byte "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
    .4byte onDamage__Q34Game10ItemBarrel5StateFPQ34Game10ItemBarrel4Itemf
    .4byte "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent"
    .4byte "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
*/

namespace Game {
struct FSMState<Game::ItemBarrel::Item> {
	virtual void FSMState<ItemBarrel::Item>::init(ItemBarrel::Item*, StateArg*);         // _08 (weak)
	virtual void FSMState<ItemBarrel::Item>::exec(ItemBarrel::Item*);                    // _0C (weak)
	virtual void FSMState<ItemBarrel::Item>::cleanup(ItemBarrel::Item*);                 // _10 (weak)
	virtual void FSMState<ItemBarrel::Item>::resume(ItemBarrel::Item*);                  // _14 (weak)
	virtual void FSMState<ItemBarrel::Item>::restart(ItemBarrel::Item*);                 // _18 (weak)
	virtual void FSMState<ItemBarrel::Item>::transit(ItemBarrel::Item*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct ItemState<Game::ItemBarrel::Item> {
	virtual void _08() = 0;                                                                             // _08
	virtual void _0C() = 0;                                                                             // _0C
	virtual void _10() = 0;                                                                             // _10
	virtual void _14() = 0;                                                                             // _14
	virtual void _18() = 0;                                                                             // _18
	virtual void _1C() = 0;                                                                             // _1C
	virtual void onDamage(Item*, float);                                                                // _20 (weak)
	virtual void ItemState<ItemBarrel::Item>::onKeyEvent(ItemBarrel::Item*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void ItemState<ItemBarrel::Item>::onBounce(ItemBarrel::Item*, Sys::Triangle*);              // _28 (weak)
	virtual void ItemState<ItemBarrel::Item>::onPlatCollision(ItemBarrel::Item*, PlatEvent&);           // _2C (weak)
	virtual void ItemState<ItemBarrel::Item>::onCollision(ItemBarrel::Item*, CollEvent&);               // _30 (weak)
};
} // namespace Game

namespace Game {
namespace ItemBarrel {
struct State : public FSMState<Game::ItemBarrel::Item>, public ItemState<Game::ItemBarrel::Item> {
	virtual void onDamage(Item*, float); // _20 (weak)
};
} // namespace ItemBarrel
} // namespace Game

#endif
