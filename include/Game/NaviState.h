#ifndef _GAME_NAVISTATE_H
#define _GAME_NAVISTATE_H

#include "Game/StateMachine.h"
#include "Game/Navi.h"
#include "SysShape/KeyEvent.h"

namespace Game {

struct NaviState : public FSMState<Navi> {
	inline NaviState(int stateID) // likely
	    : FSMState(stateID)
	{
	}

	virtual bool invincible();                                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void collisionCallback(Navi*, CollEvent&);         // _28 (weak)
	virtual void wallCallback(Navi*, Vector3f&);               // _2C (weak)
	virtual void bounceCallback(Navi*, Sys::Triangle*);        // _30 (weak)
	virtual bool pressable();                                  // _34 (weak)
	virtual bool callable();                                   // _38 (weak)
	virtual bool ignoreAtari(Creature*);                       // _3C (weak)
	virtual bool needYChangeMotion();                          // _40 (weak)
	virtual bool vsUsableY();                                  // _44 (weak)
	virtual void draw2d(J2DGrafContext&, int&);                // _48
};

struct NaviAbsorbState : public NaviState {
	inline NaviAbsorbState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible();                                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool pressable();                                  // _34 (weak)
	virtual bool vsUsableY();                                  // _44 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviCarryBombState : public NaviState {
	inline NaviCarryBombState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	void updateMatrix(Navi*);

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviChangeState : public NaviState {
	inline NaviChangeState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = NaviState
	char* m_name;      // _0C
	Navi* m_newNavi;   // _10
	bool m_isFinished; // _14
};

struct NaviClimbState : public NaviState {
	inline NaviClimbState(); // likely

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10

	void prepare(Navi*);

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviContainerState : public NaviState {
	inline NaviContainerState(); // likely

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10
	virtual bool invincible();           // _20 (weak)

	void enterPikis(Navi*, int);

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviDamagedState : public NaviState {
	inline NaviDamagedState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible();                                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool vsUsableY();                                  // _44 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviDeadState : public NaviState {
	inline NaviDeadState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible();                                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool pressable();                                  // _34 (weak)
	virtual bool vsUsableY();                                  // _44 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviDemo_HoleInState : public NaviState {
	inline NaviDemo_HoleInState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	void execGoto(Navi*);
	void initHesitate(Navi*);
	void execHesitate(Navi*);
	void initFall(Navi*);
	void execFall(Navi*);

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviDemo_UfoState : public NaviState {
	inline NaviDemo_UfoState(); // likely

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10

	void execGoto(Navi*);
	void initSuck(Navi*);
	void execSuck(Navi*);

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviDopeState : public NaviState {
	inline NaviDopeState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible();                                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviFallMeckState : public NaviState {
	inline NaviFallMeckState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual void bounceCallback(Navi*, Sys::Triangle*);        // _30
	virtual bool pressable();                                  // _34 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviFlickState : public NaviState {
	inline NaviFlickState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual void bounceCallback(Navi*, Sys::Triangle*);        // _30
	virtual bool pressable();                                  // _34 (weak)
	virtual bool vsUsableY();                                  // _44 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviFollowState : public NaviState {
	inline NaviFollowState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool needYChangeMotion();                          // _40 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
	char* m_name;       // _0C
	Navi* m_targetNavi; // _10
	bool m_isFinished;  // _14
	Navi* _18;          // _18, unk navi?
	u8 _1C;             // _1C, counter?
	u8 _1D;             // _1D, motion?
	u8 _1E;             // _1E, counter 2?
};

struct NaviGatherState : public NaviState {
	inline NaviGatherState(); // likely

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviKokeDamageState : public NaviState {
	inline NaviKokeDamageState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool pressable();                                  // _34 (weak)
	virtual bool vsUsableY();                                  // _44 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviNukuAdjustState : public NaviState {
	inline NaviNukuAdjustState(); // likely

	virtual void init(Navi*, StateArg*);               // _08
	virtual void exec(Navi*);                          // _0C
	virtual void cleanup(Navi*);                       // _10
	virtual void collisionCallback(Navi*, CollEvent&); // _28
	virtual void wallCallback(Navi*, Vector3f&);       // _2C
	virtual bool ignoreAtari(Creature*);               // _3C

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviNukuState : public NaviState {
	inline NaviNukuState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible();                                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviPathMoveState : public NaviState {
	inline NaviPathMoveState(); // likely

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10

	void initPathfinding(Navi*);
	void execPathfinding(Navi*);
	void execMove(Navi*);
	void execMoveGoal(Navi*);

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviPelletState : public NaviState {
	inline NaviPelletState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool callable();                                   // _34 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviPressedState : public NaviState {
	inline NaviPressedState(); // likely

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10
	virtual bool invincible();           // _20 (weak)
	virtual bool pressable();            // _34 (weak)
	virtual bool vsUsableY();            // _44 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviPunchState : public NaviState {
	NaviPunchState();

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	void hitCallback(CollPart*);

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviSaraiExitState : public NaviState {
	inline NaviSaraiExitState(); // likely

	virtual void init(Navi*, StateArg*);                // _08
	virtual void exec(Navi*);                           // _0C
	virtual void cleanup(Navi*);                        // _10
	virtual void bounceCallback(Navi*, Sys::Triangle*); // _30
	virtual bool pressable();                           // _34 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviSaraiState : public NaviState {
	inline NaviSaraiState(); // likely

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10
	virtual bool pressable();            // _34 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviStuckState : public NaviState {
	inline NaviStuckState(); // likely

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10
	virtual bool vsUsableY();            // _44 (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviThrowState : public NaviState {
	inline NaviThrowState(); // likely

	virtual void init(Navi*, StateArg*);                // _08
	virtual void exec(Navi*);                           // _0C
	virtual void cleanup(Navi*);                        // _10
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _4C (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviThrowWaitState : public NaviState {
	NaviThrowWaitState();

	virtual void init(Navi*, StateArg*);                // _08
	virtual void exec(Navi*);                           // _0C
	virtual void cleanup(Navi*);                        // _10
	virtual void resume(Navi*);                         // _14
	virtual void restart(Navi*);                        // _18
	virtual void draw2d(J2DGrafContext&, int&);         // _48
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _4C (weak)

	void doAnimCallback();
	void lockHangPiki(Navi*);
	void findNearestColorPiki(Navi*, int);
	void sortPikis(Navi*);

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviWalkState : public NaviState {
	inline NaviWalkState(); // likely

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual void collisionCallback(Navi*, CollEvent&);         // _28
	virtual void wallCallback(Navi*, Vector3f&);               // _2C
	virtual bool callable();                                   // _38 (weak)
	virtual bool needYChangeMotion();                          // _40 (weak)

	void execAI(Navi*);
	void checkAI(Navi*);
	void initAI_wait(Navi*);
	void execAI_wait(Navi*);
	void initAI_animation(Navi*);
	void execAI_animation(Navi*);
	void execAI_attack(Navi*);
	void initAI_escape(Navi*);
	void execAI_escape(Navi*);
	void blendVelocity(Navi*, Vector3f&);

	// _00     = VTBL
	// _00-_0C = NaviState
};

} // namespace Game

#endif // _GAME_NAVISTATE_H
