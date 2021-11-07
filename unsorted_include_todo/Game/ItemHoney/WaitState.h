#ifndef _GAME_ITEMHONEY_WAITSTATE_H
#define _GAME_ITEMHONEY_WAITSTATE_H

namespace Game {
namespace FSMState < Game
{
	struct CFSMItem >
	{
		virtual void _00() = 0;                                     // _00
		virtual void _04() = 0;                                     // _04
		virtual void _08() = 0;                                     // _08
		virtual void FSMState < resume(CFSMItem*);                  // _0C
		virtual void FSMState < restart(CFSMItem*);                 // _10
		virtual void FSMState < transit(CFSMItem*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct CItemState {
	virtual void _00() = 0;                              // _00
	virtual void _04() = 0;                              // _04
	virtual void _08() = 0;                              // _08
	virtual void _0C() = 0;                              // _0C
	virtual void _10() = 0;                              // _10
	virtual void _14() = 0;                              // _14
	virtual void onDamage(CFSMItem*, float);             // _18
	virtual void _1C() = 0;                              // _1C
	virtual void onBounce(CFSMItem*, Sys::Triangle*);    // _20
	virtual void onPlatCollision(CFSMItem*, PlatEvent&); // _24
	virtual void onCollision(CFSMItem*, CollEvent&);     // _28

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace ItemHoney {
	struct State {
		virtual void _00() = 0;                                        // _00
		virtual void _04() = 0;                                        // _04
		virtual void _08() = 0;                                        // _08
		virtual void _0C() = 0;                                        // _0C
		virtual void _10() = 0;                                        // _10
		virtual void _14() = 0;                                        // _14
		virtual void _18() = 0;                                        // _18
		virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _1C

		// _00 VTBL
	};
} // namespace ItemHoney
} // namespace Game

namespace Game {
namespace ItemHoney {
	struct WaitState : public CFSMItem >, public CItemState, public State {
		virtual void init(CFSMItem*, StateArg*);                       // _00
		virtual void exec(CFSMItem*);                                  // _04
		virtual void cleanup(CFSMItem*);                               // _08
		virtual void FSMState < resume(CFSMItem*);                     // _0C
		virtual void FSMState < restart(CFSMItem*);                    // _10
		virtual void FSMState < transit(CFSMItem*, int, StateArg*);    // _14
		virtual void onDamage(CFSMItem*, float);                       // _18
		virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _1C
		virtual void onBounce(CFSMItem*, Sys::Triangle*);              // _20
		virtual void onPlatCollision(CFSMItem*, PlatEvent&);           // _24
		virtual void onCollision(CFSMItem*, CollEvent&);               // _28
		virtual void collisionCallback(CFSMItem*, CollEvent&);         // _2C
		virtual void interactAbsorb(CFSMItem*, InteractAbsorb&);       // _30
		virtual void absorbable();                                     // _34

		// _00 VTBL
	};
} // namespace ItemHoney
} // namespace Game

#endif
