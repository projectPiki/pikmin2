#ifndef _GAME_ITEMPIKIHEAD_FALLSTATE_H
#define _GAME_ITEMPIKIHEAD_FALLSTATE_H

/*
    __vt__Q34Game12ItemPikihead9FallState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game12ItemPikihead9FallStateFPQ34Game12ItemPikihead4ItemPQ24Game8StateArg
    .4byte exec__Q34Game12ItemPikihead9FallStateFPQ34Game12ItemPikihead4Item
    .4byte cleanup__Q34Game12ItemPikihead9FallStateFPQ34Game12ItemPikihead4Item
    .4byte "resume__Q24Game36FSMState<Q34Game12ItemPikihead4Item>FPQ34Game12ItemPikihead4Item"
    .4byte "restart__Q24Game36FSMState<Q34Game12ItemPikihead4Item>FPQ34Game12ItemPikihead4Item"
    .4byte "transit__Q24Game36FSMState<Q34Game12ItemPikihead4Item>FPQ34Game12ItemPikihead4ItemiPQ24Game8StateArg"
    .4byte "onDamage__Q24Game37ItemState<Q34Game12ItemPikihead4Item>FPQ34Game12ItemPikihead4Itemf"
    .4byte onKeyEvent__Q34Game12ItemPikihead5StateFPQ34Game12ItemPikihead4ItemRCQ28SysShape8KeyEvent
    .4byte onBounce__Q34Game12ItemPikihead9FallStateFPQ34Game12ItemPikihead4ItemPQ23Sys8Triangle
    .4byte onPlatCollision__Q34Game12ItemPikihead9FallStateFPQ34Game12ItemPikihead4ItemRQ24Game9PlatEvent
    .4byte "onCollision__Q24Game37ItemState<Q34Game12ItemPikihead4Item>FPQ34Game12ItemPikihead4ItemRQ24Game9CollEvent"
*/

namespace Game {
namespace FSMState < Game
{
	namespace ItemPikihead {
	struct Item >
	{
		virtual void init(Item*, StateArg*);                     // _08
		virtual void exec(Item*);                                // _0C
		virtual void cleanup(Item*);                             // _10
		virtual void FSMState < resume(Item*);                   // _14 (inline)
		virtual void FSMState < restart(Item*);                  // _18 (inline)
		virtual void FSMState < transit(Item*, int, StateArg*);  // _1C (inline)
		virtual void ItemState < onDamage(Item*, float);         // _20 (inline)
		virtual void _24() = 0;                                  // _24
		virtual void onBounce(Item*, Sys::Triangle*);            // _28
		virtual void onPlatCollision(Item*, PlatEvent&);         // _2C
		virtual void ItemState < onCollision(Item*, CollEvent&); // _30 (inline)
	};
	} // namespace ItemPikihead
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemPikihead {
struct State {
	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void _14() = 0;                                    // _14
	virtual void _18() = 0;                                    // _18
	virtual void _1C() = 0;                                    // _1C
	virtual void _20() = 0;                                    // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24 (inline)
};
} // namespace ItemPikihead
} // namespace Game

namespace Game {
namespace ItemPikihead {
struct FallState : public Item >, public State {
	virtual void init(Item*, StateArg*);             // _08
	virtual void exec(Item*);                        // _0C
	virtual void cleanup(Item*);                     // _10
	virtual void onBounce(Item*, Sys::Triangle*);    // _28
	virtual void onPlatCollision(Item*, PlatEvent&); // _2C
};
} // namespace ItemPikihead
} // namespace Game

#endif
