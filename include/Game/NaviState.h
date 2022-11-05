#ifndef _GAME_NAVISTATE_H
#define _GAME_NAVISTATE_H

#include "Game/StateMachine.h"
#include "Game/Navi.h"
#include "SysShape/KeyEvent.h"

namespace Game {

enum ENaviStateID {
	NSID_Walk        = 0,
	NSID_Follow      = 1,
	NSID_Punch       = 2,
	NSID_Change      = 3,
	NSID_Gather      = 4,
	NSID_Throw       = 5,
	NSID_ThrowWait   = 6,
	NSID_Dope        = 7,
	NSID_Nuku        = 8,
	NSID_NukuAdjust  = 9,
	NSID_Container   = 10,
	NSID_Absorb      = 11,
	NSID_Flick       = 12,
	NSID_Damaged     = 13,
	NSID_Pressed     = 14,
	NSID_FallMeck    = 15,
	NSID_KokeDamage  = 16,
	NSID_Sarai       = 17,
	NSID_SaraiExit   = 18,
	NSID_Dead        = 19,
	NSID_Stuck       = 20,
	NSID_Demo_Ufo    = 21,
	NSID_Demo_HoleIn = 22,
	NSID_Pellet      = 23,
	NSID_CarryBomb   = 24,
	NSID_Climb       = 25,
	NSID_PathMove    = 26,
};

struct FollowStateArg : public StateArg {
	bool _00; // _00
	bool _01; // _01
};

// The following Navi...Arg structs are made up! TODO: see if this is just a Navi thing
struct NaviFlickArg : public StateArg {
	NaviFlickArg(Creature* c, Vector3f& d, f32 i)
	{
		m_creature  = c;
		m_direction = d;
		m_intensity = i;
	}

	Creature* m_creature; // _0C
	Vector3f m_direction; // _10
	f32 m_intensity;      // _1C
};

struct NaviFallMeckArg : public StateArg {
	NaviFallMeckArg(f32 a1) { _04 = a1; }

	f32 _04; // _04
};

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
	virtual bool ignoreAtari(Creature* toIgnore);              // _3C (weak)
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
	u32 _10;             // _10
	u32 _14;             // _14
	Creature* m_flicker; // _18
	Vector3f _18;        // _1C
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

// WTF is Koke Damage? Heart Attack?
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
	u32 _0C;              // _0C
	u32 _10;              // _10
	f32 _14;              // _14
	u32 _18;              // _18
	Creature* m_creature; // _1C
	u8 _20;               // _20
};

struct NaviNukuAdjustState : public NaviState {
	inline NaviNukuAdjustState(); // likely

	virtual void init(Navi*, StateArg*);               // _08
	virtual void exec(Navi*);                          // _0C
	virtual void cleanup(Navi*);                       // _10
	virtual void collisionCallback(Navi*, CollEvent&); // _28
	virtual void wallCallback(Navi*, Vector3f&);       // _2C
	virtual bool ignoreAtari(Creature* toIgnore);      // _3C

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

	virtual void init(Navi*, StateArg*);                      // _08
	virtual void exec(Navi*);                                 // _0C
	virtual void cleanup(Navi*);                              // _10
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _4C (weak)

	// _00     = VTBL
	// _00-_0C = NaviState
};

struct NaviThrowWaitState : public NaviState {
	NaviThrowWaitState();

	virtual void init(Navi*, StateArg*);                      // _08
	virtual void exec(Navi*);                                 // _0C
	virtual void cleanup(Navi*);                              // _10
	virtual void resume(Navi*);                               // _14
	virtual void restart(Navi*);                              // _18
	virtual void draw2d(J2DGrafContext&, int&);               // _48
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _4C (weak)

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
