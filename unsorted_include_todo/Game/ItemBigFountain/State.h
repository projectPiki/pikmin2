#ifndef _GAME_ITEMBIGFOUNTAIN_STATE_H
#define _GAME_ITEMBIGFOUNTAIN_STATE_H

namespace Game {
namespace FSMState < Game
{
	namespace ItemBigFountain {
		struct Item >
		{
			virtual void FSMState < init(Item*, StateArg*);         // _00
			virtual void FSMState < exec(Item*);                    // _04
			virtual void FSMState < cleanup(Item*);                 // _08
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
	} // namespace ItemBigFountain
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemBigFountain {
	struct State : public Item > {
		virtual void FSMState < init(Item*, StateArg*);         // _00
		virtual void FSMState < exec(Item*);                    // _04
		virtual void FSMState < cleanup(Item*);                 // _08
		virtual void FSMState < resume(Item*);                  // _0C
		virtual void FSMState < restart(Item*);                 // _10
		virtual void FSMState < transit(Item*, int, StateArg*); // _14
		virtual void onDamage(Item*, float);                    // _18
		virtual void ItemState
		    < onKeyEvent(Item*, const SysShape::KeyEvent&);          // _1C
		virtual void ItemState < onBounce(Item*, Sys::Triangle*);    // _20
		virtual void ItemState < onPlatCollision(Item*, PlatEvent&); // _24
		virtual void ItemState < onCollision(Item*, CollEvent&);     // _28
		virtual void canRide();                                      // _2C

		// _00 VTBL
	};
} // namespace ItemBigFountain
} // namespace Game

#endif
