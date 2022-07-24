#ifndef _GAME_ITEMUJAMUSHI_WAITSTATE_H
#define _GAME_ITEMUJAMUSHI_WAITSTATE_H

/*
    __vt__Q34Game12ItemUjamushi9WaitState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4ItemPQ24Game8StateArg
    .4byte exec__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4Item
    .4byte cleanup__Q34Game12ItemUjamushi9WaitStateFPQ34Game12ItemUjamushi4Item
    .4byte "resume__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
    .4byte "restart__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Item"
    .4byte "transit__Q24Game36FSMState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg"
    .4byte "onDamage__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4Itemf"
    .4byte "onKeyEvent__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRCQ28SysShape8KeyEvent"
    .4byte "onBounce__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game37ItemState<Q34Game12ItemUjamushi4Item>FPQ34Game12ItemUjamushi4ItemRQ24Game9CollEvent"
*/

namespace Game {
namespace FSMState < Game
{
	namespace ItemUjamushi {
	struct Item >
	{
		virtual void init(Item*, StateArg*);                                   // _08
		virtual void exec(Item*);                                              // _0C
		virtual void cleanup(Item*);                                           // _10
		virtual void FSMState < resume(Item*);                                 // _14 (inline)
		virtual void FSMState < restart(Item*);                                // _18 (inline)
		virtual void FSMState < transit(Item*, int, StateArg*);                // _1C (inline)
		virtual void ItemState < onDamage(Item*, float);                       // _20 (inline)
		virtual void ItemState < onKeyEvent(Item*, const SysShape::KeyEvent&); // _24 (inline)
		virtual void ItemState < onBounce(Item*, Sys::Triangle*);              // _28 (inline)
		virtual void ItemState < onPlatCollision(Item*, PlatEvent&);           // _2C (inline)
		virtual void ItemState < onCollision(Item*, CollEvent&);               // _30 (inline)
	};
	} // namespace ItemUjamushi
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemUjamushi {
struct WaitState : public Item > {
	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10
};
} // namespace ItemUjamushi
} // namespace Game

#endif
