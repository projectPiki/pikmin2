#ifndef _GAME_ITEMBARREL_NORMALSTATE_H
#define _GAME_ITEMBARREL_NORMALSTATE_H

/*
    __vt__Q34Game10ItemBarrel11NormalState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemPQ24Game8StateArg
    .4byte exec__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item
    .4byte cleanup__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Item
    .4byte "resume__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
    .4byte "restart__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4Item"
    .4byte "transit__Q24Game34FSMState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemiPQ24Game8StateArg"
    .4byte onDamage__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4Itemf
    .4byte onKeyEvent__Q34Game10ItemBarrel11NormalStateFPQ34Game10ItemBarrel4ItemRCQ28SysShape8KeyEvent
    .4byte "onBounce__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game35ItemState<Q34Game10ItemBarrel4Item>FPQ34Game10ItemBarrel4ItemRQ24Game9CollEvent"
*/

namespace Game {
namespace FSMState < Game
{
	namespace ItemBarrel {
	struct Item >
	{
		virtual void init(Item*, StateArg*);                         // _08
		virtual void exec(Item*);                                    // _0C
		virtual void cleanup(Item*);                                 // _10
		virtual void FSMState < resume(Item*);                       // _14
		virtual void FSMState < restart(Item*);                      // _18
		virtual void FSMState < transit(Item*, int, StateArg*);      // _1C
		virtual void onDamage(Item*, float);                         // _20
		virtual void onKeyEvent(Item*, const SysShape::KeyEvent&);   // _24
		virtual void ItemState < onBounce(Item*, Sys::Triangle*);    // _28
		virtual void ItemState < onPlatCollision(Item*, PlatEvent&); // _2C
		virtual void ItemState < onCollision(Item*, CollEvent&);     // _30

		// _00 VTBL
	};
	} // namespace ItemBarrel
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemBarrel {
struct NormalState : public Item > {
	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, float);                       // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00 VTBL
};
} // namespace ItemBarrel
} // namespace Game

#endif
