#ifndef _GAME_ITEMTREASURE_NORMALSTATE_H
#define _GAME_ITEMTREASURE_NORMALSTATE_H

namespace Game {
namespace FSMState < Game
{
	namespace ItemTreasure {
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
	} // namespace ItemTreasure
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemTreasure {
	struct NormalState : public Item > {
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

		// _00 VTBL
	};
} // namespace ItemTreasure
} // namespace Game

#endif
