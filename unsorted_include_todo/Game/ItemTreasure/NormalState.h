#ifndef _GAME_ITEMTREASURE_NORMALSTATE_H
#define _GAME_ITEMTREASURE_NORMALSTATE_H

/*
    __vt__Q34Game12ItemTreasure11NormalState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4ItemPQ24Game8StateArg
    .4byte exec__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Item
    .4byte cleanup__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Item
    .4byte "resume__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
    .4byte "restart__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4Item"
    .4byte "transit__Q24Game36FSMState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemiPQ24Game8StateArg"
    .4byte onDamage__Q34Game12ItemTreasure11NormalStateFPQ34Game12ItemTreasure4Itemf
    .4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRCQ28SysShape8KeyEvent"
    .4byte "onBounce__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game37ItemState<Q34Game12ItemTreasure4Item>FPQ34Game12ItemTreasure4ItemRQ24Game9CollEvent"
*/

namespace Game {
namespace FSMState < Game
{
	namespace ItemTreasure {
	struct Item >
	{
		virtual void init(Item*, StateArg*);                                   // _08
		virtual void exec(Item*);                                              // _0C
		virtual void cleanup(Item*);                                           // _10
		virtual void FSMState < resume(Item*);                                 // _14 (weak)
		virtual void FSMState < restart(Item*);                                // _18 (weak)
		virtual void FSMState < transit(Item*, int, StateArg*);                // _1C (weak)
		virtual void onDamage(Item*, float);                                   // _20
		virtual void ItemState < onKeyEvent(Item*, const SysShape::KeyEvent&); // _24 (weak)
		virtual void ItemState < onBounce(Item*, Sys::Triangle*);              // _28 (weak)
		virtual void ItemState < onPlatCollision(Item*, PlatEvent&);           // _2C (weak)
		virtual void ItemState < onCollision(Item*, CollEvent&);               // _30 (weak)
	};
	} // namespace ItemTreasure
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemTreasure {
struct NormalState : public Item > {
	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10
	virtual void onDamage(Item*, float); // _20
};
} // namespace ItemTreasure
} // namespace Game

#endif
