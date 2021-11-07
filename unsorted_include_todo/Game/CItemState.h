#ifndef _GAME_CITEMSTATE_H
#define _GAME_CITEMSTATE_H

namespace Game {
namespace FSMState < Game
{
	struct CFSMItem >
	{
		virtual void FSMState < init(CFSMItem*, StateArg*);         // _00
		virtual void FSMState < exec(CFSMItem*);                    // _04
		virtual void FSMState < cleanup(CFSMItem*);                 // _08
		virtual void FSMState < resume(CFSMItem*);                  // _0C
		virtual void FSMState < restart(CFSMItem*);                 // _10
		virtual void FSMState < transit(CFSMItem*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct CItemState : public CFSMItem > {
	virtual void FSMState < init(CFSMItem*, StateArg*);            // _00
	virtual void FSMState < exec(CFSMItem*);                       // _04
	virtual void FSMState < cleanup(CFSMItem*);                    // _08
	virtual void FSMState < resume(CFSMItem*);                     // _0C
	virtual void FSMState < restart(CFSMItem*);                    // _10
	virtual void FSMState < transit(CFSMItem*, int, StateArg*);    // _14
	virtual void onDamage(CFSMItem*, float);                       // _18
	virtual void onKeyEvent(CFSMItem*, const SysShape::KeyEvent&); // _1C
	virtual void onBounce(CFSMItem*, Sys::Triangle*);              // _20
	virtual void onPlatCollision(CFSMItem*, PlatEvent&);           // _24
	virtual void onCollision(CFSMItem*, CollEvent&);               // _28

	// _00 VTBL
};
} // namespace Game

#endif
