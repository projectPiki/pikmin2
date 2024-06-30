#ifndef _GAME_NAVISTATE_H
#define _GAME_NAVISTATE_H

#include "Game/StateMachine.h"
#include "Game/Navi.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/pathfinder.h"
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

	void playChangeVoice(Navi* navi);

	// _00     = VTBL
	// _00-_0C = FSMState<Navi>
	char* mName; // _0C
};

struct NaviAbsorbArg : public StateArg {
	inline NaviAbsorbArg(ItemHoney::Item* drop)
	    : mDrop(drop)
	{
	}

	ItemHoney::Item* mDrop; // _00
};

struct NaviAbsorbState : public NaviState {
	inline NaviAbsorbState()
	    : NaviState(NSID_Absorb)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible() { return true; }                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool pressable() { return false; }                 // _34 (weak)
	virtual bool vsUsableY() { return false; }                 // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 _10;                 // _10
	ItemHoney::Item* mDrop; // _14
	u8 _18;                 // _18
};

struct NaviCarryBombArg : public StateArg {
	inline NaviCarryBombArg(Creature* bomb)
	    : mBomb(bomb)
	{
	}

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
	bool mDoThrow;          // _44
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

struct ClimbStateArg : public StateArg {
	inline ClimbStateArg(Creature* obj)
	    : mObj(obj)
	{
	}

	Creature* mObj; // _00
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
	Vector3f _10;        // _10
	f32 _1C;             // _1C
	Creature* mClimbObj; // _20
	CollPart* mTubePart; // _24
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

	virtual void init(Navi*, StateArg*);       // _08
	virtual void exec(Navi*);                  // _0C
	virtual void cleanup(Navi*);               // _10
	virtual bool invincible() { return true; } // _20 (weak)

	void enterPikis(Navi*, int);

	// _00     = VTBL
	// _00-_10 = NaviState
	Onyon* mOnyon;      // _10
	int _14;            // _14
	bool _18;           // _18
	int mShipPikiType;  // _1C
	bool mIsScreenOpen; // _20
};

struct NaviDamagedState : public NaviState {
	inline NaviDamagedState()
	    : NaviState(NSID_Damaged)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible() { return true; }                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool vsUsableY() { return false; }                 // _44 (weak)

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
	virtual bool invincible() { return true; }                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool pressable() { return false; }                 // _34 (weak)
	virtual bool vsUsableY() { return false; }                 // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
};

struct NaviDemo_HoleInState : public NaviState {
	inline NaviDemo_HoleInState()
	    : NaviState(NSID_Demo_HoleIn)
	{
	}

	enum SubState { GoTo, Hesitate, Fall };

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	bool execGoto(Navi*);
	void initHesitate(Navi*);
	bool execHesitate(Navi*);
	void initFall(Navi*);
	bool execFall(Navi*);

	// _00     = VTBL
	// _00-_10 = NaviState
	u16 mSubState;      // _10
	u8 _12;             // _12
	BaseItem* mHoleObj; // _14, could be ItemHole or ItemCave
};

struct NaviDemo_UfoState : public NaviState {
	inline NaviDemo_UfoState()
	    : NaviState(NSID_Demo_Ufo)
	{
	}

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10

	bool execGoto(Navi*);
	void initSuck(Navi*);
	bool execSuck(Navi*);

	// _00     = VTBL
	// _00-_10 = NaviState
	u16 _10;      // _10
	f32 _14;      // _14
	f32 _18;      // _18
	f32 _1C;      // _1C
	f32 _20;      // _20
	Vector3f _24; // _24
	f32 _30;
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
	virtual bool invincible() { return true; }                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_10 = NaviState
	int mDopeType; // _10
	u8 _14;        // _14
};

struct NaviFallMeckArg : public StateArg {
	NaviFallMeckArg(f32 a1) { _00 = a1; }

	f32 _00; // _00
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
	virtual bool pressable() { return false; }                 // _34 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	f32 _10; // _10
	int _14; // _14
};

struct NaviFlickArg : public StateArg {
	NaviFlickArg(Creature* flicker, Vector3f& direction, f32 damage)
	{
		mCreature  = flicker;
		mDirection = direction;
		mDamage    = damage;
	}

	Creature* mCreature; // _00
	Vector3f mDirection; // _04
	f32 mDamage;         // _10
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
	virtual bool pressable() { return true; }                  // _34 (weak)
	virtual bool vsUsableY() { return false; }                 // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	s32 _10;             // _10
	Creature* mFlicker;  // _14
	Vector3f mDirection; // _18
	f32 mDamage;         // _24
};

struct NaviFollowArg : public StateArg {
	inline NaviFollowArg(bool isNewToParty)
	    : mIsNewToParty(isNewToParty)
	{
	}

	bool mIsNewToParty; // _00, true if whistled/bumped into, false if just swapped control from or coming out of plucking state
};

struct NaviFollowState : public NaviState {
	enum FollowState {
		FOLLOW_AlertJump   = 0,
		FOLLOW_Normal      = 1,
		FOLLOW_IdleGoof    = 2,
		FOLLOW_PunchTarget = 3,
	};

	inline NaviFollowState()
	    : NaviState(NSID_Follow)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool needYChangeMotion() { return true; }          // _40 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	Navi* mTargetNavi;      // _10
	u8 mFollowState;        // _14, see FollowState enum
	Creature* mTargetEnemy; // _18, enemy leader just punched that we're ALSO gonna punch
	u8 mIdleCounter;        // _1C, try and do a lil idle goof every 90 frames (3s)
	u8 mAnimID;             // _1D
	u8 mPunchSeekCounter;   // _1E, time out seeking punch target after 60 frames (2s)
};

struct NaviGatherArg : public StateArg {
	inline NaviGatherArg(bool p1)
	    : _00(p1)
	{
	}

	bool _00; // _00
	bool _01; // _01
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

struct NaviKokeDamageInitArg : public StateArg {
	inline NaviKokeDamageInitArg(f32 timer, bool toPlaySound, Creature* creature, f32 damage)
	    : mCreature(creature)
	    , mDamage(damage)
	    , mTimer(timer)
	    , mPlaySoundOnDamage(toPlaySound)
	{
	}

	Creature* mCreature;     // _00
	f32 mDamage;             // _04
	f32 mTimer;              // _08
	bool mPlaySoundOnDamage; // _0C
};

struct NaviDamageArg : public StateArg {
	NaviDamageArg(f32 damage) { mDamage = damage; }

	virtual const char* getName() { return "NaviDamageArg"; } // _08 (weak)

	// _00 VTBL
	f32 mDamage;
};

// Knockback state
struct NaviKokeDamageState : public NaviState {
	inline NaviKokeDamageState()
	    : NaviState(NSID_KokeDamage)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24
	virtual bool pressable() { return true; }                  // _34 (weak)
	virtual bool vsUsableY() { return false; }                 // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	f32 mDamage;             // _10
	f32 mTimer;              // _14
	int mState;              // _18
	Creature* mCreature;     // _1C
	bool mPlaySoundOnDamage; // _20
};

struct NaviNukuAdjustStateArg : public StateArg {
	inline NaviNukuAdjustStateArg()
	    : _18(0)
	{
	}

	f32 mAngleToItem;              // _00
	Vector3f mUnusedVelocity;      // _04
	int mUnusedState;              // _10
	ItemPikihead::Item* mPikihead; // _14
	u8 _18;                        // _18
};

struct NaviNukuAdjustState : public NaviState {
	inline NaviNukuAdjustState()
	    : NaviState(NSID_NukuAdjust)
	    , mIsFollowing(0)
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
	f32 mAngleToPiki;               // _10
	Vector3f mTargetPosition;       // _14
	bool mUnusedBool;               // _20
	Vector3f mNaviPosition;         // _24
	f32 mAngleToItem;               // _30
	Vector3f mUnusedVelocity;       // _34
	int mUnusedState;               // _40
	ItemPikihead::Item* mPikiHead;  // _44
	u8 mIsFollowing;                // _48
	u8 _49[0x3];                    // _49, unknown/buffer
	u8 mIsMoving;                   // _4C
	Vector3f mCollidedPikiPosition; // _50
	u8 mWallHitCounter;             // _5C
};

struct NaviNukuArg : public StateArg {
	u8 mIsFollowing; // _00
};

struct NaviNukuState : public NaviState {
	inline NaviNukuState()
	    : NaviState(NSID_Nuku)
	{
	}

	virtual void init(Navi*, StateArg*);                       // _08
	virtual void exec(Navi*);                                  // _0C
	virtual void cleanup(Navi*);                               // _10
	virtual bool invincible() { return true; }                 // _20 (weak)
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_10 = NaviState
	u16 mCounter;   // _10
	u8 mDidPluckSE; // _12
	u8 mDidPressA;  // _13
	u8 mIsActive;   // _14
	u8 _15;         // _15
	s16 mAnimID;    // _16
	u8 mIsFollower; // _18
};

/** @fabricated */
struct NaviPathMoveStateArg : StateArg {
	Vector3f mPosition; // _00
};

struct NaviPathMoveState : public NaviState {
	inline NaviPathMoveState()
	    : NaviState(NSID_PathMove)
	{
	}

	virtual void init(Navi*, StateArg*); // _08
	virtual void exec(Navi*);            // _0C
	virtual void cleanup(Navi*);         // _10

	int initPathfinding(Navi*);
	int execPathfinding(Navi*);
	int execMove(Navi*);
	int execMoveGoal(Navi*);

	/** @fabricated */
	inline void releasePathfinder()
	{
		if (mPathfinderContextID != 0) {
			testPathfinder->release(mPathfinderContextID);
			mPathfinderContextID = 0;
		}
	}

	// _00     = VTBL
	// _00-_10 = NaviState
	u16 _10;                  // _10
	u32 mPathfinderContextID; // _14
	Vector3f mPosition;       // _18
	PathNode* mNodes[2];      // _24
	int _2C;                  // _2C
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
	virtual bool callable() { return true; }                   // _34 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	u8 mDoForceWakeup; // _10, never set to true
	int mState;        // _14
};

struct NaviPressedState : public NaviState {
	inline NaviPressedState()
	    : NaviState(NSID_Pressed)
	{
	}

	virtual void init(Navi*, StateArg*);       // _08
	virtual void exec(Navi*);                  // _0C
	virtual void cleanup(Navi*);               // _10
	virtual bool invincible() { return true; } // _20 (weak)
	virtual bool pressable() { return false; } // _34 (weak)
	virtual bool vsUsableY() { return false; } // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	f32 mTimer;            // _10
	Vector3f mScaleBackup; // _14
	u32 _20;               // _20
};

struct NaviPunchArg : public StateArg {
	inline NaviPunchArg()
	    : mIsFollowing(false)
	    , mNextState(NSID_Walk)
	{
	}

	bool mIsFollowing; // _00
	u32 mNextState;    // _04
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
	bool mIsPunchReady;     // _10, just gets set and unset, doesn't get checked
	Creature* mTarget;      // _14
	Navi* mNavi;            // _18
	u8 mUnused1C;           // _1C, unused, just set to 0, probably some leftover debug thing
	bool mIsNextPunchReady; // _1D
	u8 mComboCounter;       // _1E, 0=first punch, 1=second punch, 2=final punch (big one for rocket fist)
	bool mIsTargetHit;      // _1F, just gets set and unset, doesn't get checked
	u8 mIdleCounter;        // _20
	u8 mUnused21[0x3];      // _21, padding
	bool mIsFollowing;      // _24, is navi following another navi
	u32 mNextStateID;       // _28
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
	virtual bool pressable() { return false; }          // _34 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
};

struct NaviSaraiState : public NaviState {
	inline NaviSaraiState()
	    : NaviState(NSID_Sarai)
	{
	}

	virtual void init(Navi*, StateArg*);       // _08
	virtual void exec(Navi*);                  // _0C
	virtual void cleanup(Navi*);               // _10
	virtual bool pressable() { return false; } // _34 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	u32 mInputFlags;   // _10
	u16 mEscapeInputs; // _14
};

struct NaviStuckState : public NaviState {
	inline NaviStuckState()
	    : NaviState(NSID_Stuck)
	{
	}

	virtual void init(Navi*, StateArg*);       // _08
	virtual void exec(Navi*);                  // _0C
	virtual void cleanup(Navi*);               // _10
	virtual bool vsUsableY() { return false; } // _44 (weak)

	// _00     = VTBL
	// _00-_10 = NaviState
	Vector3f mPrevStickDirection; // _10
	f32 mIdleTimer;               // _1C
	int mWiggleCounter;           // _20
};

struct NaviThrowInitArg : public StateArg {
	NaviThrowInitArg(Piki* piki) { mPiki = piki; }

	Piki* mPiki; // _00
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
	// _10-_14 = MotionListener VTBL

	u8 mHasThrown; // _14
	u8 mDidCancel; // _15, set to true on pressing b, never used
	Piki* mPiki;   // _18
	Navi* mNavi;   // _1C

	// _20 = MotionListener
};

struct NaviThrowWaitState : public NaviState, virtual public SysShape::MotionListener {
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
	Piki* findNearestColorPiki(Navi*, int);
	void sortPikis(Navi*);

	// _00     = VTBL
	// _00-_10 = NaviState
	// _10-_14 = MotionListener VTBL
	Piki* mHeldPiki;                         // _14, held piki to be thrown
	Piki* mNextPiki;                         // _18
	int mHoldChargeLevel;                    // _1C
	bool mHasHeldPiki;                       // _20
	int _24;                                 // _24
	f32 mNextPikiTimeLimit;                  // _28
	f32 mInitialSortDelayTimer;              // _2C
	Delegate<NaviThrowWaitState>* mDelegate; // _30
	Navi* mNavi;                             // _34
	int mCurrHappa;                          // _38
	                                         // _3C = MotionListener
};

struct NaviWalkState : public NaviState {
	enum AIState {
		WALKAI_Control   = 0,
		WALKAI_Wait      = 1,
		WALKAI_Animation = 2,
		WALKAI_Escape    = 3,
		WALKAI_Attack    = 4,
	};

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
	virtual bool callable() { return true; }                   // _38 (weak)
	virtual bool needYChangeMotion() { return true; }          // _40 (weak)

	void execAI(Navi*);
	bool checkAI(Navi*);
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
	u8 mAIState;        // _10, see AIState enum
	f32 mIdleTimer;     // _14, counts down to 0; once at 0, do idle animation.
	Creature* mTarget;  // _18
	Vector3f mPosition; // _1C, gets set and never used?
	bool mIsEscapeCCW;  // _28, do we run counter clockwise (true) or clockwise (false) around enemy? flips on wall hit
	u8 mEscapeTimer;    // _29, counts number of frames since starting escaping
	u8 mAnimIdx;        // _2A, anim id for current AI_animation
	u8 mDismissTimer;   // _2B, counts number of frames since dismiss (starts at 20 if no pikis); > 35, try and napsack
	u8 mCollisionTimer; // _2C, increases (x3) per frame when walking into an object, decreases (x1) per frame walking
};

} // namespace Game

#endif // _GAME_NAVISTATE_H
