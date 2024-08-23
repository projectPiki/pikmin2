#ifndef _GAME_GAMESYSTEM_H
#define _GAME_GAMESYSTEM_H

#include "types.h"
#include "CNode.h"
#include "ObjectMgr.h"
#include "Game/BaseGameSection.h"
#include "Game/TimeMgr.h"

struct Graphics;
struct JUTTexture;
struct LightMgr;
struct Viewport;
namespace Game {

enum GameSystemMode {
	GSM_STORY_MODE           = 0,
	GSM_VERSUS_MODE          = 1,
	GSM_ONE_PLAYER_CHALLENGE = 2,
	GSM_TWO_PLAYER_CHALLENGE = 3,
	GSM_PIKLOPEDIA           = 4,
};

enum GameSystemFlags {
	GAMESYS_IsSoundFXActive     = 0x1,  // set when sound effects are enabled
	GAMESYS_IsPlaying           = 0x2,  // set when the game is running
	GAMESYS_DisableCollision    = 0x4,  // disables collision detection
	GAMESYS_DisablePause        = 0x8,  // while enabled, time of day will not advance, and the game cannot be paused
	GAMESYS_DisableDeathCounter = 0x10, // disables the pikmin death counter, used to make left behind pikis not increase it in the cutscene
	GAMESYS_IsGameWorldActive   = 0x20, // set when the game world is active
};

struct GameSystem : public NodeObjectMgr<GenericObjectMgr> {
	GameSystem(Game::BaseGameSection*);
	// vtable 1
	virtual ~GameSystem(); // _08
	// vtable 2
	virtual void doAnimation();                 // _64 (weak)
	virtual void doEntry();                     // _68 (weak)
	virtual void doSetView(int viewportNumber); // _6C (weak)
	virtual void doViewCalc();                  // _70 (weak)
	virtual void doSimulation(f32 rate);        // _74 (weak)
	virtual void doDirectDraw(Graphics& gfx);   // _78 (weak)
	virtual void startFrame();                  // _80
	virtual void endFrame();                    // _84
	virtual void doSimpleDraw(Viewport* vp);    // _88 (weak)
	virtual void directDraw(Graphics& gfx);     // _8C
	virtual void startFadeout(f32 speed);       // _90
	virtual void startFadein(f32 speed);        // _94
	virtual void startFadeoutin(f32 speed);     // _98
	virtual void startFadeblack();              // _9C
	virtual void startFadewhite();              // _A0

	void addObjectMgr_reuse(TObjectNode<GenericObjectMgr>*);
	void addObjectMgr(GenericObjectMgr*);
	int calcFrameDist(int);
	void detachAllMgr();
	TObjectNode<GenericObjectMgr>* detachObjectMgr_reuse(GenericObjectMgr*);
	void detachObjectMgr(GenericObjectMgr*);
	GameLightMgr* getLightMgr();
	void init();
	bool paused_soft();
	bool paused();
	void setDrawBuffer(int);
	void setFrozen(bool, char*);
	void setMoviePause(bool, char*);
	u32 setPause(bool, char*, int);
	int startPause(bool, int, char*);

	inline bool isStoryMode() { return mMode == GSM_STORY_MODE; }
	inline bool isVersusMode() { return mMode == GSM_VERSUS_MODE; }
	inline bool isMultiplayerMode() { return (mMode == GSM_VERSUS_MODE || mMode == GSM_TWO_PLAYER_CHALLENGE); }
	inline bool isChallengeMode() { return (mMode == GSM_ONE_PLAYER_CHALLENGE || mMode == GSM_TWO_PLAYER_CHALLENGE); }
	inline bool isTwoPlayerMode() { return mMode == GSM_TWO_PLAYER_CHALLENGE; }
	bool isZukanMode() { return mMode == GSM_PIKLOPEDIA; }

	inline void setFlag(u32 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u32 flag) { return mFlags.typeView & flag; }

	inline BaseGameSection* getSection() { return mSection; }

	inline JUTTexture* getXfbTexture() { return mXfbTexture; }

	// _00     = VTBL
	// _00-_3C = NodeObjectMgr
	BitFlag<u8> mFlags;        // _3C
	TimeMgr* mTimeMgr;         // _40
	GameSystemMode mMode;      // _44
	u8 mIsInCave;              // _48
	u8 mUnused;                // _49
	bool mIsFrozen;            // _4A
	u8 mIsPaused;              // _4B, not a bool
	bool mIsPausedSoft;        // _4C
	bool mIsMoviePause;        // _4D
	u32 mFrameTimer;           // _50
	JUTTexture* mXfbTexture;   // _54
	BaseGameSection* mSection; // _58
};

struct OptimiseController : public JKRDisposer, public Parameters {
	OptimiseController();

	virtual ~OptimiseController(); // _08

	static void globalInstance();
	static void deleteInstance();

	static OptimiseController* mInstance;

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	// _18-_24 = Parameters
	Parm<bool> mPikminNeck;             // _24, c000, 'pikmin neck'
	Parm<bool> mCollisionBufferEnabled; // _40, c001, 'collision buffer enabled'
};

extern GameSystem* gameSystem;

} // namespace Game

#endif
