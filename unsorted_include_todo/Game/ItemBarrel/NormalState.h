#ifndef _GAME_ITEMBARREL_NORMALSTATE_H
#define _GAME_ITEMBARREL_NORMALSTATE_H

namespace Game {
namespace FSMState < Game
{
	namespace ItemBarrel {
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
	} // namespace ItemBarrel
} // namespace Game
} // namespace Game

namespace Game {
namespace ItemBarrel {
	struct NormalState : public Item > {
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

		// _00 VTBL
	};
} // namespace ItemBarrel
} // namespace Game

#endif
