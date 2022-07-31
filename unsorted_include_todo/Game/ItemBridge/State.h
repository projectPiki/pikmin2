#ifndef _GAME_ITEMBRIDGE_STATE_H
#define _GAME_ITEMBRIDGE_STATE_H

/*
    __vt__Q34Game10ItemBridge5State:
    .4byte 0
    .4byte 0
    .4byte "init__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ24Game8StateArg"
    .4byte "exec__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
    .4byte "cleanup__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
    .4byte "resume__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
    .4byte "restart__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
    .4byte "transit__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
    .4byte "onDamage__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Itemf"
    .4byte "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRCQ28SysShape8KeyEvent"
    .4byte "onBounce__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9CollEvent"
*/

namespace Game {
struct FSMState<Game::ItemBridge::Item> {
	virtual void FSMState<ItemBridge::Item>::init(ItemBridge::Item*, StateArg*);         // _08 (weak)
	virtual void FSMState<ItemBridge::Item>::exec(ItemBridge::Item*);                    // _0C (weak)
	virtual void FSMState<ItemBridge::Item>::cleanup(ItemBridge::Item*);                 // _10 (weak)
	virtual void FSMState<ItemBridge::Item>::resume(ItemBridge::Item*);                  // _14 (weak)
	virtual void FSMState<ItemBridge::Item>::restart(ItemBridge::Item*);                 // _18 (weak)
	virtual void FSMState<ItemBridge::Item>::transit(ItemBridge::Item*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct ItemState<Game::ItemBridge::Item> {
	virtual void _08() = 0;                                                                             // _08
	virtual void _0C() = 0;                                                                             // _0C
	virtual void _10() = 0;                                                                             // _10
	virtual void _14() = 0;                                                                             // _14
	virtual void _18() = 0;                                                                             // _18
	virtual void _1C() = 0;                                                                             // _1C
	virtual void ItemState<ItemBridge::Item>::onDamage(ItemBridge::Item*, float);                       // _20 (weak)
	virtual void ItemState<ItemBridge::Item>::onKeyEvent(ItemBridge::Item*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void ItemState<ItemBridge::Item>::onBounce(ItemBridge::Item*, Sys::Triangle*);              // _28 (weak)
	virtual void ItemState<ItemBridge::Item>::onPlatCollision(ItemBridge::Item*, PlatEvent&);           // _2C (weak)
	virtual void ItemState<ItemBridge::Item>::onCollision(ItemBridge::Item*, CollEvent&);               // _30 (weak)
};
} // namespace Game

namespace Game {
namespace ItemBridge {
struct State : public FSMState<Game::ItemBridge::Item>, public ItemState<Game::ItemBridge::Item> {
};
} // namespace ItemBridge
} // namespace Game

#endif
