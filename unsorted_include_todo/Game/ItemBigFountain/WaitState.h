#ifndef _GAME_ITEMBIGFOUNTAIN_WAITSTATE_H
#define _GAME_ITEMBIGFOUNTAIN_WAITSTATE_H

/*
    __vt__Q34Game15ItemBigFountain9WaitState:
    .4byte 0
    .4byte 0
    .4byte
   init__Q34Game15ItemBigFountain9WaitStateFPQ34Game15ItemBigFountain4ItemPQ24Game8StateArg
    .4byte
   exec__Q34Game15ItemBigFountain9WaitStateFPQ34Game15ItemBigFountain4Item
    .4byte
   cleanup__Q34Game15ItemBigFountain9WaitStateFPQ34Game15ItemBigFountain4Item
    .4byte
   "resume__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4Item"
    .4byte
   "restart__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4Item"
    .4byte
   "transit__Q24Game39FSMState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemiPQ24Game8StateArg"
    .4byte
   onDamage__Q34Game15ItemBigFountain9WaitStateFPQ34Game15ItemBigFountain4Itemf
    .4byte
   onKeyEvent__Q34Game15ItemBigFountain9WaitStateFPQ34Game15ItemBigFountain4ItemRCQ28SysShape8KeyEvent
    .4byte
   "onBounce__Q24Game40ItemState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemPQ23Sys8Triangle"
    .4byte
   "onPlatCollision__Q24Game40ItemState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemRQ24Game9PlatEvent"
    .4byte
   "onCollision__Q24Game40ItemState<Q34Game15ItemBigFountain4Item>FPQ34Game15ItemBigFountain4ItemRQ24Game9CollEvent"
    .4byte canRide__Q34Game15ItemBigFountain5StateFv
*/

namespace Game {
namespace FSMState < Game
{
	namespace ItemBigFountain {
		struct Item >
		{
			virtual void _00() = 0;                                      // _00
			virtual void _04() = 0;                                      // _04
			virtual void _08() = 0;                                      // _08
			virtual void FSMState < resume(Item*);                       // _0C
			virtual void FSMState < restart(Item*);                      // _10
			virtual void FSMState < transit(Item*, int, StateArg*);      // _14
			virtual void _18() = 0;                                      // _18
			virtual void _1C() = 0;                                      // _1C
			virtual void ItemState < onBounce(Item*, Sys::Triangle*);    // _20
			virtual void ItemState < onPlatCollision(Item*, PlatEvent&); // _24
			virtual void ItemState < onCollision(Item*, CollEvent&);     // _28

			// _00 VTBL
		};
	} // namespace ItemBigFountain
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemBigFountain {
	struct State {
		virtual void _00() = 0; // _00
		virtual void _04() = 0; // _04
		virtual void _08() = 0; // _08
		virtual void _0C() = 0; // _0C
		virtual void _10() = 0; // _10
		virtual void _14() = 0; // _14
		virtual void _18() = 0; // _18
		virtual void _1C() = 0; // _1C
		virtual void _20() = 0; // _20
		virtual void _24() = 0; // _24
		virtual void _28() = 0; // _28
		virtual void canRide(); // _2C

		// _00 VTBL
	};
} // namespace ItemBigFountain
} // namespace Game

namespace Game {
namespace ItemBigFountain {
	struct WaitState : public Item >, public State {
		virtual void init(Item*, StateArg*);                         // _00
		virtual void exec(Item*);                                    // _04
		virtual void cleanup(Item*);                                 // _08
		virtual void FSMState < resume(Item*);                       // _0C
		virtual void FSMState < restart(Item*);                      // _10
		virtual void FSMState < transit(Item*, int, StateArg*);      // _14
		virtual void onDamage(Item*, float);                         // _18
		virtual void onKeyEvent(Item*, const SysShape::KeyEvent&);   // _1C
		virtual void ItemState < onBounce(Item*, Sys::Triangle*);    // _20
		virtual void ItemState < onPlatCollision(Item*, PlatEvent&); // _24
		virtual void ItemState < onCollision(Item*, CollEvent&);     // _28
		virtual void canRide();                                      // _2C

		// _00 VTBL
	};
} // namespace ItemBigFountain
} // namespace Game

#endif
