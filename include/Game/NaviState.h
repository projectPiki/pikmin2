#ifndef _GAME_NAVISTATE_H
#define _GAME_NAVISTATE_H

#include "Game/StateMachine.h"
#include "Game/Navi.h"
#include "SysShape/KeyEvent.h"

namespace Game {

enum ENaviStateID {
	NSID_NULL        = -1,
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
	NSID_StateCount, // 27
};

struct NaviState : public FSMState<Navi> {
	inline NaviState(int stateID) // likely
	    : FSMState(stateID)
	{
	}

	virtual bool invincible() { return false; }                    // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&) { }  // _24 (weak)
	virtual void collisionCallback(Navi*, CollEvent&) { }          // _28 (weak)
	virtual void wallCallback(Navi*, Vector3f&) { }                // _2C (weak)
	virtual void bounceCallback(Navi*, Sys::Triangle*) { }         // _30 (weak)
	virtual bool pressable() { return true; }                      // _34 (weak)
	virtual bool callable() { return false; }                      // _38 (weak)
	virtual bool ignoreAtari(Creature* toIgnore) { return false; } // _3C (weak)
	virtual bool needYChangeMotion() { return false; }             // _40 (weak)
	virtual bool vsUsableY() { return true; }                      // _44 (weak)
	virtual void draw2d(J2DGrafContext&, int&);                    // _48

	// _00     = VTBL
	// _00-_0C = FSMState<Navi>
	char* mName; // _0C
};

struct NaviAbsorbState : public NaviState {
	inline NaviAbsorbState()
	    : NaviState(NSID_Absorb)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible();                                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool pressable();                                  // _34 (weak)
	virtual bool vsUsableY();                                  // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0xC]; // _10, unknown
};

struct NaviCarryBombArg : public StateArg {
	Creature* mBomb; // _00
};

struct NaviCarryBombState : public NaviState {
	inline NaviCarryBombState()
	    : NaviState(NSID_CarryBomb)
	    , mBomb(nullptr)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	void updateMatrix(Navi*);

	// _00     = VTBL
	// _00-_10 = NaviState
	Creature* mBomb;        // _10
	Matrixf mCaptureMatrix; // _14, capture matrix for bomb
	u8 _44;                 // _44
};

struct NaviChangeState : public NaviState {
	inline NaviChangeState()
	    : NaviState(NSID_Change)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_10 = NaviState
	Navi* mNewNavi;   // _10
	bool mIsFinished; // _14
};

struct NaviClimbState : public NaviState {
	inline NaviClimbState()
	    : NaviState(NSID_Climb)
	{
	}

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10

	void prepare(Navi*);

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x18]; // _10, unknown
};

struct NaviContainerArg : public StateArg {
	inline NaviContainerArg(Onyon* onyon)
	    : mOnyon(onyon)
	{
	}

	Onyon* mOnyon; // _00
};

struct NaviContainerState : public NaviState {
	inline NaviContainerState()
	    : NaviState(NSID_Container)
	{
	}

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10
	virtual bool invincible();           // _20 (weak)

	void enterPikis(Navi*, int);

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x14]; // _10, unknown
};

struct NaviDamagedState : public NaviState {
	inline NaviDamagedState()
	    : NaviState(NSID_Damaged)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible();                                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool vsUsableY();                                  // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
};

struct NaviDeadState : public NaviState {
	inline NaviDeadState()
	    : NaviState(NSID_Dead)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible();                                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool pressable();                                  // _34 (weak)
	virtual bool vsUsableY();                                  // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
};

struct NaviDemo_HoleInState : public NaviState {
	inline NaviDemo_HoleInState()
	    : NaviState(NSID_Demo_HoleIn)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	void execGoto(Navi*);
	void initHesitate(Navi*);
	void execHesitate(Navi*);
	void initFall(Navi*);
	bool execFall(Navi*);

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x8]; // _10, unknown
};

struct NaviDemo_UfoState : public NaviState {
	inline NaviDemo_UfoState()
	    : NaviState(NSID_Demo_Ufo)
	{
	}

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10

	void execGoto(Navi*);
	void initSuck(Navi*);
	void execSuck(Navi*);

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x24]; // _10, unknown
};

struct NaviDopeArg : public StateArg {
	inline NaviDopeArg(int type)
	    : mType(type)
	{
	}

	int mType; // _00, spray type to consume
};

struct NaviDopeState : public NaviState {
	inline NaviDopeState()
	    : NaviState(NSID_Dope)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible();                                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x8]; // _10, unknown
};

struct NaviFallMeckArg : public StateArg {
	NaviFallMeckArg(f32 a1) { _04 = a1; }

	f32 _04; // _04
};

struct NaviFallMeckState : public NaviState {
	inline NaviFallMeckState()
	    : NaviState(NSID_FallMeck)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual void bounceCallback(Navi*, Sys::Triangle*);        // _30
	virtual bool pressable();                                  // _34 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x8]; // _10, unknown
};

struct NaviFlickArg : public StateArg {
	NaviFlickArg(Creature* c, Vector3f& d, f32 i)
	{
		mCreature  = c;
		mDirection = d;
		mIntensity = i;
	}

	Creature* mCreature; // _0C
	Vector3f mDirection; // _10
	f32 mIntensity;      // _1C
};

struct NaviFlickState : public NaviState {
	inline NaviFlickState()
	    : NaviState(NSID_Flick)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual void bounceCallback(Navi*, Sys::Triangle*);        // _30
	virtual bool pressable();                                  // _34 (weak)
	virtual bool vsUsableY();                                  // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	u32 _10;            // _10
	Creature* mFlicker; // _14
	Vector3f _18;       // _18
};

struct FollowStateArg : public StateArg {
	bool _00; // _00
	bool _01; // _01
};

struct NaviFollowState : public NaviState {
	inline NaviFollowState()
	    : NaviState(NSID_Follow)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool needYChangeMotion();                          // _40 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	Navi* mTargetNavi; // _10
	bool mIsFinished;  // _14
	Navi* _18;         // _18, unk navi?
	u8 _1C;            // _1C, counter?
	u8 _1D;            // _1D, motion?
	u8 _1E;            // _1E, counter 2?
};

struct NaviGatherState : public NaviState {
	inline NaviGatherState()
	    : NaviState(NSID_Gather)
	    , _10(0)
	    , _11(0)
	{
	}

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10;  // _10
	u8 _11;  // _11
	u32 _14; // _14, unknown
};

// WTF is Koke Damage? Heart Attack?
struct NaviKokeDamageState : public NaviState {
	inline NaviKokeDamageState()
	    : NaviState(NSID_KokeDamage)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool pressable();                                  // _34 (weak)
	virtual bool vsUsableY();                                  // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	u32 _10;             // _10
	f32 _14;             // _14
	u32 _18;             // _18
	Creature* mCreature; // _1C
	u8 _20;              // _20
};

struct NaviNukuAdjustStateArg : public StateArg {
	inline NaviNukuAdjustStateArg()
	    : _18(0)
	{
	}

	f32 _00;                       // _00
	Vector3f _04;                  // _04
	int _10;                       // _10
	ItemPikihead::Item* mPikihead; // _14
	u8 _18;                        // _18
};

struct NaviNukuAdjustState : public NaviState {
	inline NaviNukuAdjustState()
	    : NaviState(NSID_NukuAdjust)
	    , _48(0)
	{
	}

	virtual void init(Navi*, StateArg*);               // _08
	virtual void exec(Navi*);                          // _0C
	virtual void cleanup(Navi*);                       // _10
	virtual void collisionCallback(Navi*, CollEvent&); // _28
	virtual void wallCallback(Navi*, Vector3f&);       // _2C
	virtual bool ignoreAtari(Creature* toIgnore);      // _3C

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x38]; // _10, unknown
	u8 _48;       // _38
	u8 _49[0x3];  // _39, unknown/buffer
	u8 _4C[0x14]; // _3C, unknown
};

struct NaviNukuState : public NaviState {
	inline NaviNukuState()
	    : NaviState(NSID_Nuku)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible();                                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0xC]; // _10, unknown
};

struct NaviPathMoveState : public NaviState {
	inline NaviPathMoveState()
	    : NaviState(NSID_PathMove)
	{
	}

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10

	void initPathfinding(Navi*);
	void execPathfinding(Navi*);
	void execMove(Navi*);
	bool execMoveGoal(Navi*);

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x20]; // _10, unknown
};

struct NaviPelletState : public NaviState {
	inline NaviPelletState()
	    : NaviState(NSID_Pellet)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool callable();                                   // _34 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x8]; // _10, unknown
};

struct NaviPressedState : public NaviState {
	inline NaviPressedState()
	    : NaviState(NSID_Pressed)
	{
	}

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10
	virtual bool invincible();           // _20 (weak)
	virtual bool pressable();            // _34 (weak)
	virtual bool vsUsableY();            // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x14]; // _10, unknown
};

struct NaviPunchState : public NaviState {
	NaviPunchState();

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	void hitCallback(CollPart*);

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x1C]; // _10, unknown
};

struct NaviSaraiExitState : public NaviState {
	inline NaviSaraiExitState()
	    : NaviState(NSID_SaraiExit)
	{
	}

	virtual void init(Navi*, StateArg*);                // _08
	virtual void exec(Navi*);                           // _0C
	virtual void cleanup(Navi*);                        // _10
	virtual void bounceCallback(Navi*, Sys::Triangle*); // _30
	virtual bool pressable();                           // _34 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
};

struct NaviSaraiState : public NaviState {
	inline NaviSaraiState()
	    : NaviState(NSID_Sarai)
	{
	}

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10
	virtual bool pressable();            // _34 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0x8]; // _10, unknown
};

struct NaviStuckState : public NaviState {
	inline NaviStuckState()
	    : NaviState(NSID_Stuck)
	{
	}

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10
	virtual bool vsUsableY();            // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	Vector3f _10; // _10
	f32 _1C;      // _1C
	int _20;      // _20
};

struct NaviThrowState : public NaviState, virtual public SysShape::MotionListener {
	inline NaviThrowState()
	    : NaviState(NSID_Throw)
	{
	}

	virtual void init(Navi*, StateArg*);                      // _08
	virtual void exec(Navi*);                                 // _0C
	virtual void cleanup(Navi*);                              // _10
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _4C (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10[0xC]; // _10, unknown
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
	// _00-_10 = NaviState
	u8 _10[0x4];  // _10, unknown
	Piki* mPiki;  // _14, held piki to be thrown
	u8 _18[0x2C]; // _18, unknown
};

struct NaviWalkState : public NaviState {
	inline NaviWalkState()
	    : NaviState(NSID_Walk)
	{
	}

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
	// _00-_10 = NaviState
	u8 _10;       // _10
	f32 _14;      // _14
	u32 _18;      // _18
	Vector3f _1C; // _1C
	bool _28;     // _28
	u8 _29;       // _29
	u8 _2A;       // _2A
	u8 _2B;       // _2B
	u8 _2C;       // _2C
};

} // namespace Game

#endif // _GAME_NAVISTATE_H
