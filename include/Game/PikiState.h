#ifndef _GAME_PIKISTATE_H
#define _GAME_PIKISTATE_H

#include "Game/StateMachine.h"
#include "Game/PlatInstance.h"
#include "Game/CollEvent.h"
#include "Game/Piki.h"
#include "SysShape/KeyEvent.h"
#include "SysShape/MotionListener.h"
#include "Sys/Triangle.h"
#include "Vector3.h"

// panic types:
#define PIKIPANIC_Fire  (0)
#define PIKIPANIC_Water (1)
#define PIKIPANIC_Gas   (2)
#define PIKIPANIC_Panic (3)
#define PIKIPANIC_Other (4)

namespace Game {
struct Piki;
struct Navi;
struct Creature;

enum PikiStateID {
	PIKISTATE_NULL        = -1,
	PIKISTATE_Walk        = 0, // 'default' walk/follow
	PIKISTATE_DemoWait    = 1, // during cutscenes
	PIKISTATE_LookAt      = 2, // whistled
	PIKISTATE_GoHang      = 3,
	PIKISTATE_Hanged      = 4,
	PIKISTATE_WaterHanged = 5,
	PIKISTATE_Flying      = 6, // thrown
	PIKISTATE_KokeDamage  = 7,
	PIKISTATE_Blow        = 8,
	PIKISTATE_Flick       = 9,  // knockback from enemy
	PIKISTATE_Drown       = 10, // drowning
	PIKISTATE_Swallowed   = 11, // being eaten
	PIKISTATE_Nukare      = 12, // being plucked (by hand)
	PIKISTATE_Absorb      = 13,
	PIKISTATE_Growup      = 14, // nectared
	PIKISTATE_Tane        = 15, // abducted by snitchbug
	PIKISTATE_Dope        = 16, // spicy spray
	PIKISTATE_AutoNuki    = 17, // being plucked (by pluckaphone)
	PIKISTATE_HipDrop     = 18, // purple pound
	PIKISTATE_Emotion     = 19,
	PIKISTATE_Pressed     = 20, // squashed
	PIKISTATE_Panic       = 21, // panicking
	PIKISTATE_DenkiDying  = 22, // electricity zap
	PIKISTATE_FallMeck    = 23,
	PIKISTATE_Dying       = 24, // dying
	PIKISTATE_Dead        = 25, // dead
	PIKISTATE_Suikomi     = 26,
	PIKISTATE_Holein      = 27, // enter cave hole
	PIKISTATE_Fountainon  = 28, // enter geyser
	// no 29?
	PIKISTATE_Koke   = 30,
	PIKISTATE_Escape = 31,
	PIKISTATE_Carrot = 32, // pikipedia carrot
	PIKISTATE_Count,
};

struct PikiState : public FSMState<Piki> {
	inline PikiState(int stateID, char* name)
	    : FSMState(stateID)
	{
		mName = name;
	}

	virtual bool ignoreAtari(Piki*, Creature*) { return false; }  // _20 (weak)
	virtual void bounceCallback(Piki*, Sys::Triangle*) { }        // _24 (weak)
	virtual void collisionCallback(Piki*, CollEvent&) { }         // _28 (weak)
	virtual void platCallback(Piki*, PlatEvent&) { }              // _2C (weak)
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&) { } // _30 (weak)
	virtual void getInfo(char*);                                  // _34
	virtual void outWaterCallback(Piki*) { }                      // _38 (weak)
	virtual void wallCallback(Piki*, Vector3f&) { }               // _3C (weak)
	virtual bool invincible(Piki*) { return false; }              // _40 (weak)
	virtual bool callable() { return false; }                     // _44 (weak)
	virtual bool aiActive() { return false; }                     // _48 (weak)
	virtual bool dopable() { return false; }                      // _4C (weak)
	virtual bool releasable() { return false; }                   // _50 (weak)
	virtual bool throwable() { return false; }                    // _54 (weak)
	virtual bool dead() { return false; }                         // _58 (weak)
	virtual bool battleOK() { return false; }                     // _5C (weak)
	virtual bool pressable() { return true; }                     // _60 (weak)
	virtual bool transittable(int) { return true; }               // _64 (weak)
	virtual bool soft_transittable(int) { return true; }          // _68 (weak)
	virtual void onFlute(Piki*, Navi*) { }                        // _6C (weak)
	virtual void dump();                                          // _70

	// _00     = VTBL
	// _00-_0C = FSMState
	char* mName; // _0C
};

struct AbsorbStateArg : public StateArg {
	Creature* mCreature; // _00
};

struct PikiAbsorbState : public PikiState {
	inline PikiAbsorbState()
	    : PikiState(PIKISTATE_Absorb, "ABSORB")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30

	// _00     = VTBL
	// _00-_10 = PikiState
	u8 mState;                    // _10
	Creature* mAbsorbingCreature; // _14
	u8 mHasAbsorbed;              // _18
	u8 mAbsorbTimer;              // _19
};

struct PikiAutoNukiState : public PikiState {
	inline PikiAutoNukiState()
	    : PikiState(PIKISTATE_AutoNuki, "AUTONUKI")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable() { return false; }                  // _44 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
	f32 mTimer; // _10
	u16 mState; // _14
};

struct BlowStateArg : public StateArg {
	inline BlowStateArg(Vector3f& vec, f32 leafChance, u8 lethal, u16 flags, Creature* creature)
	{
		mBlowDirection = vec;
		mChanceToLeaf  = leafChance;
		mIsLethal      = lethal;
		mFlags         = flags;
		mHeldNavi      = creature;
	}

	Vector3f mBlowDirection; // _00
	f32 mChanceToLeaf;       // _0C
	bool mIsLethal;          // _10
	u16 mFlags;              // _12
	Creature* mHeldNavi;     // _14
};

struct PikiBlowState : public PikiState {
	enum StateID {
		BLOW_Start     = 0,
		BLOW_Knockback = 1,
	};

	inline PikiBlowState()
	    : PikiState(PIKISTATE_Blow, "BLOW")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void bounceCallback(Piki*, Sys::Triangle*);        // _24
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable() { return false; }                  // _44 (weak)
	virtual bool pressable() { return false; }                 // _60 (weak)
	virtual void onFlute(Piki*, Navi*);                        // _6C

	// _00     = VTBL
	// _00-_10 = PikiState
	int mState;              // _10
	Creature* mHeldNavi;     // _14
	Vector3f mBlowDirection; // _18
	f32 mChanceToLeaf;       // _24
	bool mIsWhistled;        // _28
	bool mIsLethal;          // _29
	u16 mFlags;              // _2A
};

struct PikiCarrotState : public PikiState {
	inline PikiCarrotState()
	    : PikiState(PIKISTATE_Carrot, "CARROT")
	{
	}

	virtual void init(Piki*, StateArg*);                // _08
	virtual void exec(Piki*);                           // _0C
	virtual void cleanup(Piki*);                        // _10
	virtual void bounceCallback(Piki*, Sys::Triangle*); // _24
	virtual void collisionCallback(Piki*, CollEvent&);  // _28

	// _00     = VTBL
	// _00-_10 = PikiState
	f32 mTimeRemaining; // _10, remaining time alive, in seconds (max 10-13s)
	bool mIsPlanted;    // _14
	Vector3f mPosition; // _18
};

struct PikiDeadState : public PikiState {
	inline PikiDeadState()
	    : PikiState(PIKISTATE_Dead, "DEAD")
	{
	}

	virtual void init(Piki*, StateArg*);                     // _08
	virtual void exec(Piki*);                                // _0C
	virtual bool dead() { return true; }                     // _58 (weak)
	virtual bool pressable() { return false; }               // _60 (weak)
	virtual bool transittable(int stateID) { return false; } // _64 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiDemoWaitState : public PikiState {
	inline PikiDemoWaitState()
	    : PikiState(PIKISTATE_DemoWait, "DEMOWAIT")
	{
	}

	virtual void init(Piki*, StateArg*);            // _08
	virtual void exec(Piki*);                       // _0C
	virtual void cleanup(Piki*);                    // _10
	virtual bool invincible(Piki*) { return true; } // _40 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiDenkiDyingState : public PikiState {
	inline PikiDenkiDyingState()
	    : PikiState(PIKISTATE_DenkiDying, "DENKI_DYING")
	{
	}

	virtual void init(Piki*, StateArg*);       // _08
	virtual void exec(Piki*);                  // _0C
	virtual void cleanup(Piki*);               // _10
	virtual bool dead() { return true; }       // _58 (weak)
	virtual bool pressable() { return false; } // _60 (weak)
	virtual bool transittable(int);            // _64
	virtual bool soft_transittable(int);       // _68

	// _00     = VTBL
	// _00-_10 = PikiState
	f32 mWaitTime; // _10
};

struct DopeStateArg : public StateArg {
	int mDopeType; // _00
};

struct PikiDopeState : public PikiState {
	inline PikiDopeState()
	    : PikiState(PIKISTATE_Dope, "DOPE")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual void onFlute(Piki*, Navi*);                        // _6C

	// _00     = VTBL
	// _00-_10 = PikiState
	bool mHasAnimStarted; // _10
	f32 mStartWaitTime;   // _14
	s16 mDopeState;       // _18
	s16 mAnimIdx;         // _1A
	Navi* mNavi;          // _1C
};

struct PikiDrownState : public PikiState {
	inline PikiDrownState()
	    : PikiState(PIKISTATE_Drown, "DROWN")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual void outWaterCallback(Piki*);                      // _38
	virtual bool soft_transittable(int);                       // _68
	virtual void onFlute(Piki*, Navi*);                        // _6C

	// _00     = VTBL
	// _00-_10 = PikiState
	u16 mSubState;          // _10
	u16 mSizumuAnimDelay;   // _12
	u16 mUnusedVal;         // _14
	u16 mMoveState;         // _16
	f32 _18;                // _18
	bool mIsEscaped;        // _1C
	Navi* mNavi;            // _20
	Vector3f mMoveVelocity; // _24
	bool mIsCalled;         // _30
};

struct DyingStateArg : public StateArg {
	inline DyingStateArg()
	    : mAnimIdx(IPikiAnims::NULLANIM)
	    , mDoUseKillArg(false)
	{
	}

	int mAnimIdx;       // _00
	bool mDoUseKillArg; // _04
};

struct PikiDyingState : public PikiState {
	inline PikiDyingState()
	    : PikiState(PIKISTATE_Dying, "DYING")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool dead() { return true; }                       // _58 (weak)
	virtual bool pressable() { return false; }                 // _60 (weak)
	virtual bool transittable(int);                            // _64

	// _00     = VTBL
	// _00-_10 = PikiState
	int mAnimIdx;       // _10
	bool mDoUseKillArg; // _14
};

struct EmotionStateArg : public StateArg {
	inline EmotionStateArg(u16 type)
	    : mType(type)
	{
	}

	u16 mType; // _00
};

struct PikiEmotionState : public PikiState {
	inline PikiEmotionState()
	    : PikiState(PIKISTATE_Emotion, "EMOTION")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable() { return true; }                   // _44 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
	u8 _10[0xC];       // _10, unknown
	u8 mUnusedVal;     // _1C
	u8 mRepeatCounter; // _1D
	u8 _1E[0x6];       // _1E, unknown
	u16 mEmotionType;  // _24
	s16 mAnimIdx;      // _26
};

struct PikiEscapeState : public PikiState {
	inline PikiEscapeState()
	    : PikiState(PIKISTATE_Escape, "ESCAPE")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable() { return false; }                  // _44 (weak)

	void initRun(Piki*);

	Creature* findTeki(Piki*);

	// _00     = VTBL
	// _00-_10 = PikiState
	s8 mDoFinishAnim; // _10
	u8 mSubState;     // _11
};

struct FallMeckStateArg : public StateArg {
	bool mDoAutoPluck; // _00
};

struct PikiFallMeckState : public PikiState {
	inline PikiFallMeckState()
	    : PikiState(PIKISTATE_FallMeck, "FALLMECK")
	{
	}

	virtual void init(Piki*, StateArg*);                // _08
	virtual void exec(Piki*);                           // _0C
	virtual void cleanup(Piki*);                        // _10
	virtual void bounceCallback(Piki*, Sys::Triangle*); // _24
	virtual void collisionCallback(Piki*, CollEvent&);  // _28
	virtual void platCallback(Piki*, PlatEvent&);       // _2C
	virtual bool pressable() { return false; }          // _60 (weak)

	bool becomePikihead(Piki* piki);

	// _00     = VTBL
	// _00-_10 = PikiState
	bool mDoAutoPluck; // _10
};

struct FlickStateArg : public StateArg {
	f32 mAngle; // _00
	f32 mSpeed; // _04
};

struct PikiFlickState : public PikiState, virtual SysShape::MotionListener {
	enum StateID {
		FLICK_Start = 0,
		FLICK_InAir = 1,
		FLICK_Land  = 2,
		FLICK_Stand = 3,
	};

	inline PikiFlickState()
	    : PikiState(PIKISTATE_Flick, "FLICK")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable() { return false; }                  // _44 (weak)
	virtual void onFlute(Piki*, Navi*);                        // _6C
	virtual void onKeyEvent(const SysShape::KeyEvent& event);  // _74 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
	u16 mState;          // _14
	f32 mKnockDownTimer; // _18
	f32 mKnockBackAngle; // _1C
	f32 mFaceDirOffset;  // _20
	f32 mKnockBackSpeed; // _24
	Piki* mPiki;         // _28
	bool mIsWhistled;    // _2C
};

struct PikiFlyingState : public PikiState {
	inline PikiFlyingState()
	    : PikiState(PIKISTATE_Flying, "FLYING")
	{
	}

	virtual void init(Piki*, StateArg*);                // _08
	virtual void exec(Piki*);                           // _0C
	virtual void cleanup(Piki*);                        // _10
	virtual bool ignoreAtari(Piki*, Creature*);         // _20
	virtual void bounceCallback(Piki*, Sys::Triangle*); // _24
	virtual void collisionCallback(Piki*, CollEvent&);  // _28
	virtual bool callable() { return false; }           // _44 (weak)
	virtual void stopEffect();                          // _74
	virtual void restartEffect();                       // _78

	// _00     = VTBL
	// _00-_10 = PikiState
	f32 mSlowFallWaitTimer;      // _10
	u8 mIsFlowerPiki;            // _14
	u8 mUnusedVal;               // _15
	u8 _16[0x2];                 // _16, unknown/padding
	u8 _18[0x4];                 // _18, unknown
	Vector3f mVelocityDirection; // _1C
	f32 mDirectionalSpeed;       // _28
	f32 mHalfDirectionalSpeed;   // _2C
	int mFrameCounter;           // _30
};

struct FountainonStateArg : public StateArg {
	FountainonStateArg(Vector3f& pos) { mPosition = pos; }
	Vector3f mPosition; // _00
};

struct PikiFountainonState : public PikiState {
	inline PikiFountainonState()
	    : PikiState(PIKISTATE_Fountainon, "FOUNTAINON")
	{
	}

	virtual void init(Piki*, StateArg*);                          // _08
	virtual void exec(Piki*);                                     // _0C
	virtual void cleanup(Piki*);                                  // _10
	virtual bool invincible(Piki*) { return true; }               // _40 (weak)
	virtual bool callable() { return false; }                     // _44 (weak)
	virtual bool soft_transittable(int stateID) { return false; } // _44 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
	// u8 _10[0x24]; // _10, unknown
	Vector3f mAvgPosition; // _10
	Vector3f mPosDiff;     // _1C
	f32 mTargetDist;       // _28, length?
	f32 mTimer;            // _2C
	f32 mCountdown;        // _30
};

struct PikiGoHangState : public PikiState {
	inline PikiGoHangState()
	    : PikiState(PIKISTATE_GoHang, "GOHANG")
	{
	}

	virtual void init(Piki*, StateArg*);      // _08
	virtual void exec(Piki*);                 // _0C
	virtual void cleanup(Piki*);              // _10
	virtual bool callable() { return true; }  // _44 (weak)
	virtual bool throwable() { return true; } // _54 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiGrowupState : public PikiState {
	inline PikiGrowupState()
	    : PikiState(PIKISTATE_Growup, "GROWUP")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30

	// _00     = VTBL
	// _00-_10 = PikiState
	s16 mAnimIdx; // _10
};

struct PikiHangedState : public PikiState, virtual SysShape::MotionListener {
	inline PikiHangedState()
	    : PikiState(PIKISTATE_Hanged, "HANGED")
	{
	}

	virtual void init(Piki*, StateArg*);                      // _08
	virtual void exec(Piki*);                                 // _0C
	virtual void cleanup(Piki*);                              // _10
	virtual bool ignoreAtari(Piki*, Creature*);               // _20
	virtual bool throwable() { return true; }                 // _54 (weak)
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _74 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiHipDropState : public PikiState {
	inline PikiHipDropState()
	    : PikiState(PIKISTATE_HipDrop, "HIPDROP")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void bounceCallback(Piki*, Sys::Triangle*);        // _24
	virtual void collisionCallback(Piki*, CollEvent&);         // _28
	virtual void platCallback(Piki*, PlatEvent&);              // _2C
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30

	void dosin(Piki*);
	void earthquake(Piki*);

	// _00     = VTBL
	// _00-_10 = PikiState
	f32 mWaitTimer; // _10
	u16 mSubState;  // _14
};

struct HoleinStateArg : public StateArg {
	HoleinStateArg(Vector3f& pos) { mPosition = pos; }
	Vector3f mPosition; // _00
};

struct PikiHoleinState : public PikiState {
	inline PikiHoleinState()
	    : PikiState(PIKISTATE_Holein, "HOLEIN")
	{
	}

	virtual void init(Piki*, StateArg*);                  // _08
	virtual void exec(Piki*);                             // _0C
	virtual void cleanup(Piki*);                          // _10
	virtual bool invincible(Piki*) { return true; }       // _40 (weak)
	virtual bool callable() { return false; }             // _44 (weak)
	virtual bool soft_transittable(int) { return false; } // _68 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
	Vector3f mGoalPos;      // _10
	Vector3f mPosDiff;      // _1C
	f32 mTargetDist;        // _28
	f32 mTimer;             // _2C
	f32 mCountdown;         // _30
	bool mNeedHoldPos;      // _34
	Vector3f mHeldPosition; // _38
	u8 mHasPlayedSound;     // _44
	f32 mScale;             // _48
};

struct KokeDamageStateArg : public StateArg {
	inline KokeDamageStateArg(u16 flags, f32 time)
	    : mFlags(flags)
	    , mTime(time)
	{
	}

	u16 mFlags; // _00
	f32 mTime;  // _04
};

struct PikiKokeDamageState : public PikiState {
	enum StateID {
		KOKEDAMAGE_Start = 0,
		KOKEDAMAGE_Unk1  = 1,
		KOKEDAMAGE_Unk2  = 2,
	};

	inline PikiKokeDamageState()
	    : PikiState(PIKISTATE_KokeDamage, "KOKEDAMAGE")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable() { return false; }                  // _44 (weak)
	virtual void onFlute(Piki*, Navi*);                        // _6C

	// _00     = VTBL
	// _00-_10 = PikiState
	f32 mTimer; // _10
	u16 mFlags; // _14
	int mState; // _18
};

struct PikiKokeState : public PikiState {
	inline PikiKokeState()
	    : PikiState(PIKISTATE_Koke, "KOKE")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable() { return false; }                  // _44 (weak)
	virtual void onFlute(Piki*, Navi*);                        // _6C

	// _00     = VTBL
	// _00-_10 = PikiState
	s8 mTimer;           // _10
	bool mFallSoundType; // _11
};

struct PikiLookAtState : public PikiState, virtual SysShape::MotionListener {
	inline PikiLookAtState()
	    : PikiState(PIKISTATE_LookAt, "LOOKAT")
	{
	}

	virtual void init(Piki*, StateArg*);                      // _08
	virtual void exec(Piki*);                                 // _0C
	virtual void cleanup(Piki*);                              // _10
	virtual bool callable() { return false; }                 // _44 (weak)
	virtual void onFlute(Piki*, Navi*);                       // _6C
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _74 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
	// _10-_14 = MotionListener VTBL
	f32 mWaitTime; // _14
	u16 mSubState; // _18
	               // _1C = MotionListener again?
};

struct NukareStateArg : public StateArg {
	bool mIsPlucking; // _00
	Navi* mNavi;      // _04
};

struct PikiNukareState : public PikiState {
	inline PikiNukareState()
	    : PikiState(PIKISTATE_Nukare, "NUKARE")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool soft_transittable(int);                       // _68

	// _00     = VTBL
	// _00-_10 = PikiState
	Navi* mNavi;    // _10
	bool mDoFinish; // _14
	s16 mAnimIdx;   // _16
};

struct PanicStateArg : public StateArg {
	u16 mPanicType; // _00
};

struct PikiPanicState : public PikiState {
	inline PikiPanicState()
	    : PikiState(PIKISTATE_Panic, "PANIC")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void bounceCallback(Piki*, Sys::Triangle*);        // _24
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool transittable(int);                            // _64
	virtual bool soft_transittable(int);                       // _68
	virtual void onFlute(Piki*, Navi*);                        // _6C

	void panicRun(Piki*);
	void panicLobster(Piki*);

	void startSound(Piki*);
	void checkDemo(Piki*);

	// _00     = VTBL
	// _00-_10 = PikiState
	f32 mDeathTimer;       // _10, when this reaches 0, piki dies
	f32 mDramaTimer;       // _14, when this reaches 0, piki does dramatic effect (hop/cough/sound)
	f32 mAngle;            // _18
	f32 mSpeed;            // _1C
	bool mIsCalled;        // _20
	bool mIsLobsterLanded; // _21
	u8 mSubState;          // _22
	u16 mPanicType;        // _24
	f32 mDemoWaitTime;     // _28
};

struct PikiPressedState : public PikiState {
	inline PikiPressedState()
	    : PikiState(PIKISTATE_Pressed, "PRESSED")
	{
	}

	virtual void init(Piki*, StateArg*);       // _08
	virtual void exec(Piki*);                  // _0C
	virtual void cleanup(Piki*);               // _10
	virtual bool dead() { return true; }       // _58 (weak)
	virtual bool pressable() { return false; } // _60 (weak)
	virtual bool transittable(int);            // _64
	virtual bool soft_transittable(int);       // _68

	// _00     = VTBL
	// _00-_10 = PikiState
	f32 mWaitTime; // _10
};

struct SuikomiStateArg : public StateArg {

	inline SuikomiStateArg(Creature* creature, CollPart* collpart, CollPart* stomachCollpart)
	{
		mCreature        = creature;
		mCollpart        = collpart;
		mStomachCollpart = stomachCollpart;
	}

	Creature* mCreature;        // _00
	CollPart* mCollpart;        // _04
	CollPart* mStomachCollpart; // _08
};

struct PikiSuikomiState : public PikiState {
	inline PikiSuikomiState()
	    : PikiState(PIKISTATE_Suikomi, "SUIKOMI")
	{
	}

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual bool ignoreAtari(Piki*, Creature*);                // _20
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool pressable() { return false; }                 // _60 (weak)

	void execMouth(Piki*);
	void execString(Piki*);
	void execStomach(Piki*);

	// _00     = VTBL
	// _00-_10 = PikiState
	u8 mState;                  // _10
	Creature* mCreature;        // _14
	CollPart* mCollpart;        // _18
	CollPart* mStomachCollpart; // _1C
	f32 mTimer;                 // _20
};

struct SwallowedStateArg : public StateArg {
	int mAnimIdx; // _00
};

struct PikiSwallowedState : public PikiState {
	inline PikiSwallowedState()
	    : PikiState(PIKISTATE_Swallowed, "SWALLOWED")
	{
	}

	virtual void init(Piki*, StateArg*);                        // _08
	virtual void exec(Piki*);                                   // _0C
	virtual void cleanup(Piki*);                                // _10
	virtual bool ignoreAtari(Piki*, Creature*) { return true; } // _20 (weak)
	virtual bool callable() { return false; }                   // _44 (weak)
	virtual bool dead() { return true; }                        // _58 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiTaneState : public PikiState {
	inline PikiTaneState()
	    : PikiState(PIKISTATE_Tane, "TANE")
	{
	}

	virtual void init(Piki*, StateArg*);                // _08
	virtual void exec(Piki*);                           // _0C
	virtual void cleanup(Piki*);                        // _10
	virtual void bounceCallback(Piki*, Sys::Triangle*); // _24
	virtual bool callable() { return false; }           // _44 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
	f32 mHorizontalDrag; // _10
	f32 mVerticalDrag;   // _14
};

struct PikiWalkState : public PikiState {
	inline PikiWalkState()
	    : PikiState(PIKISTATE_Walk, "WALK")
	{
	}

	virtual void init(Piki*, StateArg*);       // _08
	virtual void exec(Piki*);                  // _0C
	virtual void cleanup(Piki*);               // _10
	virtual bool callable() { return true; }   // _44 (weak)
	virtual bool aiActive() { return true; }   // _48 (weak)
	virtual bool dopable() { return true; }    // _4C (weak)
	virtual bool releasable() { return true; } // _50 (weak)
	virtual bool throwable() { return true; }  // _54 (weak)
	virtual bool battleOK() { return true; }   // _5C (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct WaterHangedStateArg : public StateArg {
	WaterHangedStateArg(Piki* piki) { mPiki = piki; }
	Piki* mPiki; // _00
};

struct PikiWaterHangedState : public PikiState, virtual SysShape::MotionListener {
	inline PikiWaterHangedState()
	    : PikiState(PIKISTATE_WaterHanged, "WATERHANGED")
	{
	}

	virtual void init(Piki*, StateArg*);                      // _08
	virtual void exec(Piki*);                                 // _0C
	virtual void cleanup(Piki*);                              // _10
	virtual bool ignoreAtari(Piki*, Creature*);               // _20
	virtual bool throwable() { return true; }                 // _54 (weak)
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _74 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
	Piki* mPiki; // _14
};
} // namespace Game

#endif
