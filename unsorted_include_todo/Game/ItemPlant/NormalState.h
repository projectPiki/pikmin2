#ifndef _GAME_ITEMPLANT_NORMALSTATE_H
#define _GAME_ITEMPLANT_NORMALSTATE_H

/*
    __vt__Q34Game9ItemPlant11NormalState:
    .4byte 0
    .4byte 0
    .4byte
   init__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg
    .4byte exec__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item
    .4byte cleanup__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item
    .4byte
   "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
    .4byte
   "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
    .4byte
   "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
    .4byte onDamage__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Itemf
    .4byte
   "onKeyEvent__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent"
    .4byte
   "onBounce__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ23Sys8Triangle"
    .4byte
   "onPlatCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9PlatEvent"
    .4byte
   "onCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9CollEvent"
    .4byte eventKarero__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item
    .4byte eventHaero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item
*/

namespace Game {
namespace FSMState < Game
{
	namespace ItemPlant {
		struct Item >
		{
			virtual void _00() = 0;                                 // _00
			virtual void _04() = 0;                                 // _04
			virtual void _08() = 0;                                 // _08
			virtual void FSMState < resume(Item*);                  // _0C
			virtual void FSMState < restart(Item*);                 // _10
			virtual void FSMState < transit(Item*, int, StateArg*); // _14
			virtual void _18() = 0;                                 // _18
			virtual void ItemState
			    < onKeyEvent(Item*, const SysShape::KeyEvent&);          // _1C
			virtual void ItemState < onBounce(Item*, Sys::Triangle*);    // _20
			virtual void ItemState < onPlatCollision(Item*, PlatEvent&); // _24
			virtual void ItemState < onCollision(Item*, CollEvent&);     // _28

			// _00 VTBL
		};
	} // namespace ItemPlant
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemPlant {
	struct State {
		virtual void _00() = 0;         // _00
		virtual void _04() = 0;         // _04
		virtual void _08() = 0;         // _08
		virtual void _0C() = 0;         // _0C
		virtual void _10() = 0;         // _10
		virtual void _14() = 0;         // _14
		virtual void _18() = 0;         // _18
		virtual void _1C() = 0;         // _1C
		virtual void _20() = 0;         // _20
		virtual void _24() = 0;         // _24
		virtual void _28() = 0;         // _28
		virtual void _2C() = 0;         // _2C
		virtual void eventHaero(Item*); // _30

		// _00 VTBL
	};
} // namespace ItemPlant
} // namespace Game

namespace Game {
namespace ItemPlant {
	struct NormalState : public Item >, public State {
		virtual void init(Item*, StateArg*);                    // _00
		virtual void exec(Item*);                               // _04
		virtual void cleanup(Item*);                            // _08
		virtual void FSMState < resume(Item*);                  // _0C
		virtual void FSMState < restart(Item*);                 // _10
		virtual void FSMState < transit(Item*, int, StateArg*); // _14
		virtual void onDamage(Item*, float);                    // _18
		virtual void ItemState
		    < onKeyEvent(Item*, const SysShape::KeyEvent&);          // _1C
		virtual void ItemState < onBounce(Item*, Sys::Triangle*);    // _20
		virtual void ItemState < onPlatCollision(Item*, PlatEvent&); // _24
		virtual void ItemState < onCollision(Item*, CollEvent&);     // _28
		virtual void eventKarero(Item*);                             // _2C
		virtual void eventHaero(Item*);                              // _30

		// _00 VTBL
	};
} // namespace ItemPlant
} // namespace Game

#endif
