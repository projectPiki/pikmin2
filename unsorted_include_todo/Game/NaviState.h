#ifndef _GAME_NAVISTATE_H
#define _GAME_NAVISTATE_H

namespace Game {
namespace FSMState < Game
{
	struct Navi >
	{
		virtual void FSMState < init(Navi*, StateArg*);         // _00
		virtual void FSMState < exec(Navi*);                    // _04
		virtual void FSMState < cleanup(Navi*);                 // _08
		virtual void FSMState < resume(Navi*);                  // _0C
		virtual void FSMState < restart(Navi*);                 // _10
		virtual void FSMState < transit(Navi*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct NaviState : public Navi > {
	virtual void FSMState < init(Navi*, StateArg*);            // _00
	virtual void FSMState < exec(Navi*);                       // _04
	virtual void FSMState < cleanup(Navi*);                    // _08
	virtual void FSMState < resume(Navi*);                     // _0C
	virtual void FSMState < restart(Navi*);                    // _10
	virtual void FSMState < transit(Navi*, int, StateArg*);    // _14
	virtual void invincible();                                 // _18
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _1C
	virtual void collisionCallback(Navi*, CollEvent&);         // _20
	virtual void wallCallback(Navi*, Vector3<float>&);         // _24
	virtual void bounceCallback(Navi*, Sys::Triangle*);        // _28
	virtual void pressable();                                  // _2C
	virtual void callable();                                   // _30
	virtual void ignoreAtari(Creature*);                       // _34
	virtual void needYChangeMotion();                          // _38
	virtual void vsUsableY();                                  // _3C
	virtual void draw2d(J2DGrafContext&, int&);                // _40

	// _00 VTBL
};
} // namespace Game

#endif
