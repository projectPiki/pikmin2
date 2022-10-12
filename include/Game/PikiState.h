#ifndef _GAME_PIKISTATE_H
#define _GAME_PIKISTATE_H

#include "Game/StateMachine.h"
#include "Game/PlatInstance.h"
#include "Game/CollEvent.h"
#include "SysShape/KeyEvent.h"
#include "Sys/Triangle.h"
#include "Vector3.h"

namespace Game {
struct Piki;
struct Navi;
struct Creature;

struct PikiState : public FSMState<Piki> {
	inline PikiState(int stateID, char* name) // likely, may need adjusting
	    : FSMState(stateID)
	{
		m_name = name;
	}

	virtual bool ignoreAtari(Piki, Creature*);                 // _20 (weak)
	virtual void bounceCallback(Piki*, Sys::Triangle*);        // _24 (weak)
	virtual void collisionCallback(Piki*, CollEvent&);         // _28 (weak)
	virtual void platCallback(Piki*, PlatEvent&);              // _2C (weak)
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30 (weak)
	virtual void getInfo(char*);                               // _34
	virtual void outWaterCallback(Piki*);                      // _38 (weak)
	virtual void wallCallback(Piki*, Vector3f&);               // _3C (weak)
	virtual bool invincible(Piki*);                            // _40 (weak)
	virtual bool callable();                                   // _44 (weak)
	virtual bool aiActive();                                   // _48 (weak)
	virtual bool dopable();                                    // _4C (weak)
	virtual bool releasable();                                 // _50 (weak)
	virtual bool throwable();                                  // _54 (weak)
	virtual bool dead();                                       // _58 (weak)
	virtual bool battleOK();                                   // _5C (weak)
	virtual bool pressable();                                  // _60 (weak)
	virtual bool transittable(int);                            // _64 (weak)
	virtual bool soft_transittable(int);                       // _68 (weak)
	virtual void onFlute(Piki*, Navi*);                        // _6C (weak)
	virtual void dump();                                       // _70

	// _00     = VTBL
	// _00-_0C = FSMState
	char* m_name; // _0C
};

struct PikiAbsorbState : public PikiState {
	inline PikiAbsorbState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiAutoNukiState : public PikiState {
	inline PikiAutoNukiState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable();                                   // _44 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiBlowState : public PikiState {
	inline PikiBlowState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void bounceCallback(Piki*, Sys::Triangle*);        // _24
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable();                                   // _44 (weak)
	virtual void onFlute(Piki*, Navi*);                        // _6C

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiCarrotState : public PikiState {
	inline PikiCarrotState(); // likely

	virtual void init(Piki*, StateArg*);                // _08
	virtual void exec(Piki*);                           // _0C
	virtual void cleanup(Piki*);                        // _10
	virtual void bounceCallback(Piki*, Sys::Triangle*); // _24
	virtual void collisionCallback(Piki*, CollEvent&);  // _28

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiDeadState : public PikiState {
	inline PikiDeadState(); // likely

	virtual void init(Piki*, StateArg*); // _08
	virtual void exec(Piki*);            // _0C
	virtual bool dead();                 // _58 (weak)
	virtual bool pressable();            // _60 (weak)
	virtual bool transittable(int);      // _64 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiDemoWaitState : public PikiState {
	inline PikiDemoWaitState(); // likely

	virtual void init(Piki*, StateArg*); // _08
	virtual void exec(Piki*);            // _0C
	virtual void cleanup(Piki*);         // _10
	virtual bool invincible(Piki*);      // _40 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiDenkiDyingState : public PikiState {
	inline PikiDenkiDyingState(); // likely

	virtual void init(Piki*, StateArg*); // _08
	virtual void exec(Piki*);            // _0C
	virtual void cleanup(Piki*);         // _10
	virtual bool dead();                 // _58 (weak)
	virtual bool pressable();            // _60 (weak)
	virtual bool transittable(int);      // _64
	virtual bool soft_transittable(int); // _68

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiDopeState : public PikiState {
	inline PikiDopeState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual void onFlute(Piki*, Navi*);                        // _6C

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiDrownState : public PikiState {
	inline PikiDrownState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual void outWaterCallback(Piki*);                      // _38
	virtual bool soft_transittable(int);                       // _68
	virtual void onFlute(Piki*, Navi*);                        // _6C

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiDyingState : public PikiState {
	inline PikiDyingState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool dead();                                       // _58 (weak)
	virtual bool pressable();                                  // _60 (weak)
	virtual bool transittable(int);                            // _64

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiEmotionState : public PikiState {
	inline PikiEmotionState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable();                                   // _44 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiEscapeState : public PikiState {
	inline PikiEscapeState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable();                                   // _44 (weak)

	void initRun(Piki*);

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiFallMeckState : public PikiState {
	inline PikiFallMeckState(); // likely

	virtual void init(Piki*, StateArg*);                // _08
	virtual void exec(Piki*);                           // _0C
	virtual void cleanup(Piki*);                        // _10
	virtual void bounceCallback(Piki*, Sys::Triangle*); // _24
	virtual void collisionCallback(Piki*, CollEvent&);  // _28
	virtual void platCallback(Piki*, PlatEvent&);       // _2C
	virtual bool pressable();                           // _60 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiFlickState : public PikiState {
	inline PikiFlickState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable();                                   // _44 (weak)
	virtual void onFlute(Piki*, Navi*);                        // _6C
	virtual void onKeyEvent(const SysShape::KeyEvent&);        // _74 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiFlyingState : public PikiState {
	inline PikiFlyingState(); // likely

	virtual void init(Piki*, StateArg*);                // _08
	virtual void exec(Piki*);                           // _0C
	virtual void cleanup(Piki*);                        // _10
	virtual bool ignoreAtari(Piki*, Creature*);         // _20
	virtual void bounceCallback(Piki*, Sys::Triangle*); // _24
	virtual void collisionCallback(Piki*, CollEvent&);  // _28
	virtual bool callable();                            // _44 (weak)
	virtual void stopEffect();                          // _74
	virtual void restartEffect();                       // _78

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiFountainonState : public PikiState {
	inline PikiFountainonState(); // likely

	virtual void init(Piki*, StateArg*); // _08
	virtual void exec(Piki*);            // _0C
	virtual void cleanup(Piki*);         // _10
	virtual bool invincible();           // _40 (weak)
	virtual bool callable();             // _44 (weak)
	virtual bool soft_transittable(int); // _44 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiGoHangState : public PikiState {
	inline PikiGoHangState(); // likely

	virtual void init(Piki*, StateArg*); // _08
	virtual void exec(Piki*);            // _0C
	virtual void cleanup(Piki*);         // _10
	virtual bool callable();             // _44 (weak)
	virtual bool throwable();            // _54 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiGrowupState : public PikiState {
	inline PikiGrowupState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiHangedState : public PikiState {
	inline PikiHangedState(); // likely

	virtual void init(Piki*, StateArg*);                // _08
	virtual void exec(Piki*);                           // _0C
	virtual void cleanup(Piki*);                        // _10
	virtual bool ignoreAtari(Piki*, Creature*);         // _20
	virtual bool throwable();                           // _54 (weak)
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _74 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiHipDropState : public PikiState {
	inline PikiHipDropState(); // likely

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
};

struct PikiHoleinState : public PikiState {
	inline PikiHoleinState(); // likely

	virtual void init(Piki*, StateArg*); // _08
	virtual void exec(Piki*);            // _0C
	virtual void cleanup(Piki*);         // _10
	virtual bool invincible(Piki*);      // _40 (weak)
	virtual bool callable();             // _44 (weak)
	virtual bool soft_transittable(int); // _68 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiKokeDamageState : public PikiState {
	inline PikiKokeDamageState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable();                                   // _44 (weak)
	virtual void onFlute(Piki*, Navi*);                        // _6C

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiKokeState : public PikiState {
	inline PikiKokeState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable();                                   // _44 (weak)
	virtual void onFlute(Piki*, Navi*);                        // _6C

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiEmotionState : public PikiState {
	inline PikiEmotionState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool callable();                                   // _44 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiLookAtState : public PikiState {
	inline PikiLookAtState(); // likely

	virtual void init(Piki*, StateArg*);                // _08
	virtual void exec(Piki*);                           // _0C
	virtual void cleanup(Piki*);                        // _10
	virtual bool callable();                            // _44 (weak)
	virtual void onFlute(Piki*, Navi*);                 // _6C
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _74 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiNukareState : public PikiState {
	inline PikiNukareState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool soft_transittable(int);                       // _68

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiPanicState : public PikiState {
	inline PikiPanicState(); // likely

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

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiPressedState : public PikiState {
	inline PikiPressedState(); // likely

	virtual void init(Piki*, StateArg*); // _08
	virtual void exec(Piki*);            // _0C
	virtual void cleanup(Piki*);         // _10
	virtual bool dead();                 // _58 (weak)
	virtual bool pressable();            // _60 (weak)
	virtual bool transittable(int);      // _64
	virtual bool soft_transittable(int); // _68

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiSuikomiState : public PikiState {
	inline PikiSuikomiState(); // likely

	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual bool ignoreAtari(Piki*, Creature*);                // _20
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual bool pressable();                                  // _60 (weak)

	void execMouth(Piki*);
	void execString(Piki*);
	void execStomach(Piki*);

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiSwallowedState : public PikiState {
	inline PikiSwallowedState(); // likely

	virtual void init(Piki*, StateArg*);        // _08
	virtual void exec(Piki*);                   // _0C
	virtual void cleanup(Piki*);                // _10
	virtual bool ignoreAtari(Piki*, Creature*); // _20 (weak)
	virtual bool callable();                    // _44 (weak)
	virtual bool dead();                        // _58 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiTaneState : public PikiState {
	inline PikiTaneState(); // likely

	virtual void init(Piki*, StateArg*);                // _08
	virtual void exec(Piki*);                           // _0C
	virtual void cleanup(Piki*);                        // _10
	virtual void bounceCallback(Piki*, Sys::Triangle*); // _24
	virtual bool callable();                            // _44 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiWalkState : public PikiState {
	inline PikiWalkState(); // likely

	virtual void init(Piki*, StateArg*); // _08
	virtual void exec(Piki*);            // _0C
	virtual void cleanup(Piki*);         // _10
	virtual bool callable();             // _44 (weak)
	virtual bool aiActive();             // _48 (weak)
	virtual bool dopable();              // _4C (weak)
	virtual bool releasable();           // _50 (weak)
	virtual bool throwable();            // _54 (weak)
	virtual bool battleOK();             // _5C (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};

struct PikiWaterHangedState : public PikiState {
	inline PikiWaterHangedState(); // likely

	virtual void init(Piki*, StateArg*);                // _08
	virtual void exec(Piki*);                           // _0C
	virtual void cleanup(Piki*);                        // _10
	virtual bool ignoreAtari(Piki*, Creature*);         // _20
	virtual bool throwable();                           // _54 (weak)
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _74 (weak)

	// _00     = VTBL
	// _00-_10 = PikiState
};
} // namespace Game

#endif
