#ifndef _GAME_ITEMBIGFOUNTAIN_APPEARSTATE_H
#define _GAME_ITEMBIGFOUNTAIN_APPEARSTATE_H

/*
    __vt__Q34Game15ItemBigFountain11AppearState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game15ItemBigFountain11AppearStateFPQ34Game15ItemBigFountain4ItemPQ24Game8StateArg
    .4byte exec__Q34Game15ItemBigFountain11AppearStateFPQ34Game15ItemBigFountain4Item
    .4byte cleanup__Q34Game15ItemBigFountain11AppearStateFPQ34Game15ItemBigFountain4Item
    .4byte "resume__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4Item"
    .4byte "restart__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4Item"
    .4byte "transit__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemiPQ24Game8StateArg"
    .4byte onDamage__Q34Game15ItemBigFountain5StateFPQ34Game15ItemBigFountain4Itemf
    .4byte "onKeyEvent__Q24Game40ItemState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemRCQ28SysShape8KeyEvent"
    .4byte "onBounce__Q24Game40ItemState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemPQ23Sys8Triangle"
    .4byte "onPlatCollision__Q24Game40ItemState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemRQ24Game9PlatEvent"
    .4byte "onCollision__Q24Game40ItemState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemRQ24Game9CollEvent"
    .4byte canRide__Q34Game15ItemBigFountain5StateFv
*/

namespace Game {
namespace FSMState < Game
{
	namespace ItemBigFountain {
	struct Item >
	{
		virtual void init(Item*, StateArg*);                                   // _08
		virtual void exec(Item*);                                              // _0C
		virtual void cleanup(Item*);                                           // _10
		virtual void FSMState < resume(Item*);                                 // _14 (weak)
		virtual void FSMState < restart(Item*);                                // _18 (weak)
		virtual void FSMState < transit(Item*, int, StateArg*);                // _1C (weak)
		virtual void _20() = 0;                                                // _20
		virtual void ItemState < onKeyEvent(Item*, const SysShape::KeyEvent&); // _24 (weak)
		virtual void ItemState < onBounce(Item*, Sys::Triangle*);              // _28 (weak)
		virtual void ItemState < onPlatCollision(Item*, PlatEvent&);           // _2C (weak)
		virtual void ItemState < onCollision(Item*, CollEvent&);               // _30 (weak)
	};
	} // namespace ItemBigFountain
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemBigFountain {
struct State {
	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10
	virtual void _14() = 0;              // _14
	virtual void _18() = 0;              // _18
	virtual void _1C() = 0;              // _1C
	virtual void onDamage(Item*, float); // _20 (weak)
	virtual void _24() = 0;              // _24
	virtual void _28() = 0;              // _28
	virtual void _2C() = 0;              // _2C
	virtual void _30() = 0;              // _30
	virtual void canRide();              // _34 (weak)
};
} // namespace ItemBigFountain
} // namespace Game

namespace Game {
namespace ItemBigFountain {
struct AppearState : public Item >, public State {
	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10
};
} // namespace ItemBigFountain
} // namespace Game

#endif
