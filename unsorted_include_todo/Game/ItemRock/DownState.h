#ifndef _GAME_ITEMROCK_DOWNSTATE_H
#define _GAME_ITEMROCK_DOWNSTATE_H

/*
    __vt__Q34Game8ItemRock9DownState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4ItemPQ24Game8StateArg
    .4byte exec__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Item
    .4byte cleanup__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Item
    .4byte "resume__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
    .4byte "restart__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4Item"
    .4byte "transit__Q24Game31FSMState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemiPQ24Game8StateArg"
    .4byte onDamage__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4Itemf
    .4byte onKeyEvent__Q34Game8ItemRock9DownStateFPQ34Game8ItemRock4ItemRCQ28SysShape8KeyEvent
    .4byte "onBounce__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game32ItemState<Q34Game8ItemRock4Item>FPQ34Game8ItemRock4ItemRQ24Game9CollEvent"
*/

namespace Game {
struct FSMState<Game::ItemRock::Item> {
	virtual void init(Item*, StateArg*);                                             // _08
	virtual void exec(Item*);                                                        // _0C
	virtual void cleanup(Item*);                                                     // _10
	virtual void FSMState<ItemRock::Item>::resume(ItemRock::Item*);                  // _14 (weak)
	virtual void FSMState<ItemRock::Item>::restart(ItemRock::Item*);                 // _18 (weak)
	virtual void FSMState<ItemRock::Item>::transit(ItemRock::Item*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct ItemState<Game::ItemRock::Item> {
	virtual void init(Item*, StateArg*);                                                  // _08
	virtual void exec(Item*);                                                             // _0C
	virtual void cleanup(Item*);                                                          // _10
	virtual void _14() = 0;                                                               // _14
	virtual void _18() = 0;                                                               // _18
	virtual void _1C() = 0;                                                               // _1C
	virtual void onDamage(Item*, float);                                                  // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&);                            // _24
	virtual void ItemState<ItemRock::Item>::onBounce(ItemRock::Item*, Sys::Triangle*);    // _28 (weak)
	virtual void ItemState<ItemRock::Item>::onPlatCollision(ItemRock::Item*, PlatEvent&); // _2C (weak)
	virtual void ItemState<ItemRock::Item>::onCollision(ItemRock::Item*, CollEvent&);     // _30 (weak)
};
} // namespace Game

namespace Game {
namespace ItemRock {
struct DownState : public FSMState<Game::ItemRock::Item>, public ItemState<Game::ItemRock::Item> {
	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, float);                       // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
};
} // namespace ItemRock
} // namespace Game

#endif
