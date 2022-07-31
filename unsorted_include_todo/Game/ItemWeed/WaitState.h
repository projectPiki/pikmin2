#ifndef _GAME_ITEMWEED_WAITSTATE_H
#define _GAME_ITEMWEED_WAITSTATE_H

/*
    __vt__Q34Game8ItemWeed9WaitState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4ItemPQ24Game8StateArg
    .4byte exec__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4Item
    .4byte cleanup__Q34Game8ItemWeed9WaitStateFPQ34Game8ItemWeed4Item
    .4byte "resume__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
    .4byte "restart__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Item"
    .4byte "transit__Q24Game31FSMState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg"
    .4byte "onDamage__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4Itemf"
    .4byte "onKeyEvent__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent"
    .4byte "onBounce__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game32ItemState<Q34Game8ItemWeed4Item>FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent"
*/

namespace Game {
struct FSMState<Game::ItemWeed::Item> {
	virtual void init(Item*, StateArg*);                                             // _08
	virtual void exec(Item*);                                                        // _0C
	virtual void cleanup(Item*);                                                     // _10
	virtual void FSMState<ItemWeed::Item>::resume(ItemWeed::Item*);                  // _14 (weak)
	virtual void FSMState<ItemWeed::Item>::restart(ItemWeed::Item*);                 // _18 (weak)
	virtual void FSMState<ItemWeed::Item>::transit(ItemWeed::Item*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct ItemState<Game::ItemWeed::Item> {
	virtual void init(Item*, StateArg*);                                                            // _08
	virtual void exec(Item*);                                                                       // _0C
	virtual void cleanup(Item*);                                                                    // _10
	virtual void _14() = 0;                                                                         // _14
	virtual void _18() = 0;                                                                         // _18
	virtual void _1C() = 0;                                                                         // _1C
	virtual void ItemState<ItemWeed::Item>::onDamage(ItemWeed::Item*, float);                       // _20 (weak)
	virtual void ItemState<ItemWeed::Item>::onKeyEvent(ItemWeed::Item*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void ItemState<ItemWeed::Item>::onBounce(ItemWeed::Item*, Sys::Triangle*);              // _28 (weak)
	virtual void ItemState<ItemWeed::Item>::onPlatCollision(ItemWeed::Item*, PlatEvent&);           // _2C (weak)
	virtual void ItemState<ItemWeed::Item>::onCollision(ItemWeed::Item*, CollEvent&);               // _30 (weak)
};
} // namespace Game

namespace Game {
namespace ItemWeed {
struct WaitState : public FSMState<Game::ItemWeed::Item>, public ItemState<Game::ItemWeed::Item> {
	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10
};
} // namespace ItemWeed
} // namespace Game

#endif
