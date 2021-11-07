#ifndef _GAME_GATESTATE_H
#define _GAME_GATESTATE_H

namespace Game {
namespace FSMState < Game
{
	struct ItemGate >
	{
		virtual void FSMState < init(ItemGate*, StateArg*);              // _00
		virtual void FSMState < exec(ItemGate*);                         // _04
		virtual void FSMState < cleanup(ItemGate*);                      // _08
		virtual void FSMState < resume(ItemGate*);                       // _0C
		virtual void FSMState < restart(ItemGate*);                      // _10
		virtual void FSMState < transit(ItemGate*, int, StateArg*);      // _14
		virtual void _18() = 0;                                          // _18
		virtual void _1C() = 0;                                          // _1C
		virtual void ItemState < onBounce(ItemGate*, Sys::Triangle*);    // _20
		virtual void ItemState < onPlatCollision(ItemGate*, PlatEvent&); // _24
		virtual void ItemState < onCollision(ItemGate*, CollEvent&);     // _28

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct GateState : public ItemGate > {
	virtual void FSMState < init(ItemGate*, StateArg*);              // _00
	virtual void FSMState < exec(ItemGate*);                         // _04
	virtual void FSMState < cleanup(ItemGate*);                      // _08
	virtual void FSMState < resume(ItemGate*);                       // _0C
	virtual void FSMState < restart(ItemGate*);                      // _10
	virtual void FSMState < transit(ItemGate*, int, StateArg*);      // _14
	virtual void onDamage(ItemGate*, float);                         // _18
	virtual void onKeyEvent(ItemGate*, const SysShape::KeyEvent&);   // _1C
	virtual void ItemState < onBounce(ItemGate*, Sys::Triangle*);    // _20
	virtual void ItemState < onPlatCollision(ItemGate*, PlatEvent&); // _24
	virtual void ItemState < onCollision(ItemGate*, CollEvent&);     // _28

	// _00 VTBL
};
} // namespace Game

#endif
