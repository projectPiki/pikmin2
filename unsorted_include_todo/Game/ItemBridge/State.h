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
namespace FSMState < Game
{
	namespace ItemBridge {
	struct Item >
	{
		virtual void FSMState < init(Item*, StateArg*);                        // _08 (weak)
		virtual void FSMState < exec(Item*);                                   // _0C (weak)
		virtual void FSMState < cleanup(Item*);                                // _10 (weak)
		virtual void FSMState < resume(Item*);                                 // _14 (weak)
		virtual void FSMState < restart(Item*);                                // _18 (weak)
		virtual void FSMState < transit(Item*, int, StateArg*);                // _1C (weak)
		virtual void ItemState < onDamage(Item*, float);                       // _20 (weak)
		virtual void ItemState < onKeyEvent(Item*, const SysShape::KeyEvent&); // _24 (weak)
		virtual void ItemState < onBounce(Item*, Sys::Triangle*);              // _28 (weak)
		virtual void ItemState < onPlatCollision(Item*, PlatEvent&);           // _2C (weak)
		virtual void ItemState < onCollision(Item*, CollEvent&);               // _30 (weak)
	};
	} // namespace ItemBridge
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemBridge {
struct State : public Item > {
};
} // namespace ItemBridge
} // namespace Game

#endif
