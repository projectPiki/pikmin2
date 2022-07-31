#ifndef _GAME_ITEMDOWNFLOOR_DOWNSTATE_H
#define _GAME_ITEMDOWNFLOOR_DOWNSTATE_H

/*
    __vt__Q34Game13ItemDownFloor9DownState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg
    .4byte exec__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item
    .4byte cleanup__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item
    .4byte "resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
    .4byte "restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
    .4byte "transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
    .4byte "onDamage__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Itemf"
    .4byte onKeyEvent__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
    .4byte "onBounce__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent"
    .4byte onPlat__Q34Game13ItemDownFloor9DownStateFPQ34Game13ItemDownFloor4Item
*/

namespace Game {
struct FSMState<Game::ItemDownFloor::Item> {
	virtual void init(Item*, StateArg*);                                                       // _08
	virtual void exec(Item*);                                                                  // _0C
	virtual void cleanup(Item*);                                                               // _10
	virtual void FSMState<ItemDownFloor::Item>::resume(ItemDownFloor::Item*);                  // _14 (weak)
	virtual void FSMState<ItemDownFloor::Item>::restart(ItemDownFloor::Item*);                 // _18 (weak)
	virtual void FSMState<ItemDownFloor::Item>::transit(ItemDownFloor::Item*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
struct ItemState<Game::ItemDownFloor::Item> {
	virtual void init(Item*, StateArg*);                                                            // _08
	virtual void exec(Item*);                                                                       // _0C
	virtual void cleanup(Item*);                                                                    // _10
	virtual void _14() = 0;                                                                         // _14
	virtual void _18() = 0;                                                                         // _18
	virtual void _1C() = 0;                                                                         // _1C
	virtual void ItemState<ItemDownFloor::Item>::onDamage(ItemDownFloor::Item*, float);             // _20 (weak)
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&);                                      // _24
	virtual void ItemState<ItemDownFloor::Item>::onBounce(ItemDownFloor::Item*, Sys::Triangle*);    // _28 (weak)
	virtual void ItemState<ItemDownFloor::Item>::onPlatCollision(ItemDownFloor::Item*, PlatEvent&); // _2C (weak)
	virtual void ItemState<ItemDownFloor::Item>::onCollision(ItemDownFloor::Item*, CollEvent&);     // _30 (weak)
};
} // namespace Game

namespace Game {
namespace ItemDownFloor {
struct DownState : public FSMState<Game::ItemDownFloor::Item>, public ItemState<Game::ItemDownFloor::Item> {
	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void onPlat(Item*);                                // _34
};
} // namespace ItemDownFloor
} // namespace Game

#endif
