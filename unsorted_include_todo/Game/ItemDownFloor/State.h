#ifndef _GAME_ITEMDOWNFLOOR_STATE_H
#define _GAME_ITEMDOWNFLOOR_STATE_H

/*
    __vt__Q34Game13ItemDownFloor5State:
    .4byte 0
    .4byte 0
    .4byte "init__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ24Game8StateArg"
    .4byte "exec__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
    .4byte "cleanup__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
    .4byte "resume__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
    .4byte "restart__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Item"
    .4byte "transit__Q24Game37FSMState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemiPQ24Game8StateArg"
    .4byte "onDamage__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4Itemf"
    .4byte onKeyEvent__Q34Game13ItemDownFloor5StateFPQ34Game13ItemDownFloor4ItemRCQ28SysShape8KeyEvent
    .4byte "onBounce__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game38ItemState<Q34Game13ItemDownFloor4Item>FPQ34Game13ItemDownFloor4ItemRQ24Game9CollEvent"
    .4byte onPlat__Q34Game13ItemDownFloor5StateFPQ34Game13ItemDownFloor4Item
*/

namespace Game {
namespace FSMState < Game
{
	namespace ItemDownFloor {
	struct Item >
	{
		virtual void FSMState < init(Item*, StateArg*);              // _08 (inline)
		virtual void FSMState < exec(Item*);                         // _0C (inline)
		virtual void FSMState < cleanup(Item*);                      // _10 (inline)
		virtual void FSMState < resume(Item*);                       // _14 (inline)
		virtual void FSMState < restart(Item*);                      // _18 (inline)
		virtual void FSMState < transit(Item*, int, StateArg*);      // _1C (inline)
		virtual void ItemState < onDamage(Item*, float);             // _20 (inline)
		virtual void onKeyEvent(Item*, const SysShape::KeyEvent&);   // _24 (inline)
		virtual void ItemState < onBounce(Item*, Sys::Triangle*);    // _28 (inline)
		virtual void ItemState < onPlatCollision(Item*, PlatEvent&); // _2C (inline)
		virtual void ItemState < onCollision(Item*, CollEvent&);     // _30 (inline)
	};
	} // namespace ItemDownFloor
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemDownFloor {
struct State : public Item > {
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24 (inline)
	virtual void onPlat(Item*);                                // _34 (inline)
};
} // namespace ItemDownFloor
} // namespace Game

#endif
