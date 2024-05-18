#ifndef _GAME_SINGLEGAME_H
#define _GAME_SINGLEGAME_H

#include "DvdThreadCommand.h"
#include "Game/IllustratedBook.h"
#include "Game/PelletList.h"
#include "Game/PikiContainer.h"
#include "Game/Result.h"
#include "Game/ResultTexMgr.h"
#include "Game/SingleGameSection.h"
#include "Game/StateMachine.h"
#include "Game/THPPlayer.h"
#include "GenericObjectMgr.h"
#include "IDelegate.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "ObjectMgr.h"
#include "ebi/FileSelect.h"

namespace kh {
namespace Screen {
struct IncP;
struct TotalResultData;
struct WorldMap;
} // namespace Screen
} // namespace kh

namespace Game {

namespace SingleGame {
struct State;

/**
 * @fabricated
 */
enum StateID {
	SGS_File       = 0,
	SGS_Select     = 1,
	SGS_Load       = 2,
	SGS_Game       = 3,
	SGS_Cave       = 4,
	SGS_DayEnd     = 5,
	SGS_CaveDayEnd = 6,
	SGS_MainResult = 7,
	SGS_CaveResult = 8,
	SGS_Movie      = 9,
	SGS_Zukan      = 10,
	SGS_Ending     = 11,
	SGS_StateCount,
};

// Used by a few game states for knowing what to do upon loading into a map
enum MapEnterStatus {
	MapEnter_NewDay         = 0, // start of new day
	MapEnter_CaveGeyser     = 1, // left cave via geyser
	MapEnter_CaveNavisDown  = 2, // left via both captains down
	MapEnter_CaveExtinction = 3, // left via pikmin extinction
	MapEnter_CaveGiveUp     = 4, // left via giving up
	MapEnter_NewGame        = 5, // start of new game file (crash landing)
};

struct FSM : public StateMachine<SingleGameSection> {
	virtual void init(SingleGameSection*);                    // _08
	virtual void transit(SingleGameSection*, int, StateArg*); // _14

	void draw(Game::SingleGameSection*, Graphics&); // UNUSED
	State* getState(int);

	inline bool assertValidID(int id)
	{
		if (id < 0 || id >= mLimit) {
			return false;
		}
		return true;
	}

	// _00     = VTBL
	// _00-_1C = StateMachine
};

struct State : public FSMState<SingleGameSection> {
	inline State(int id)
	    : FSMState(id)
	{
	}

	virtual void draw(SingleGameSection*, Graphics&) { }                                               // _20 (weak)
	virtual void onOrimaDown(SingleGameSection*, int) { }                                              // _24 (weak)
	virtual void onMovieStart(SingleGameSection* game, MovieConfig* movie, u32 unused, u32 naviID) { } // _28 (weak)
	virtual void onMovieDone(SingleGameSection*, MovieConfig*, u32, u32) { }                           // _2C (weak)
	virtual void onMovieCommand(SingleGameSection*, int) { }                                           // _30 (weak)
	virtual void onHoleIn(SingleGameSection*, ItemCave::Item*) { }                                     // _34 (weak)
	virtual void onNextFloor(SingleGameSection*, ItemHole::Item*) { }                                  // _38 (weak)
	virtual void onFountainReturn(SingleGameSection*, ItemBigFountain::Item*) { }                      // _3C (weak)
	virtual void on_section_fadeout(SingleGameSection*) { }                                            // _40 (weak)
	virtual void on_demo_timer(SingleGameSection*, u32) { }                                            // _44 (weak)

	void accountEarnings(SingleGameSection*, PelletCropMemory*, bool);

	// _00     = VTBL
	// _00-_0C = FSMState
	char* mName; // _0C, unused/educated guess
};

/**
 * @size{0x14}
 */
struct CaveDayEndState : public State {
	inline CaveDayEndState()
	    : State(SGS_CaveDayEnd)
	{
	}

	virtual void init(SingleGameSection*, StateArg*); // _08
	virtual void exec(SingleGameSection*);            // _0C
	virtual void cleanup(SingleGameSection*);         // _10
	virtual void draw(SingleGameSection*, Graphics&); // _20

	// _00     = VTBL
	// _00-_10 = State
	f32 mFadeTimer; // _10
};

struct CaveResultArg : public StateArg {
	u16 mGameState; // _00 make enum eventually, 1 = geyser, 2 = navis down, 3 = extinction, 4 = giveup
};

/**
 * @size{0x100}
 */
struct CaveResultState : public State {
	CaveResultState();

	virtual void init(SingleGameSection*, StateArg*); // _08
	virtual void exec(SingleGameSection*);            // _0C
	virtual void cleanup(SingleGameSection*);         // _10
	virtual void draw(SingleGameSection*, Graphics&); // _20

	void createResultNodes();
	void loadResource();

	// Unused/inlined:
	void initNext(SingleGameSection*);
	void open2D(SingleGameSection*);

	// _00     = VTBL
	// _00-_10 = State
	u16 mGameState;                           //_10, what to do following the result state
	u16 mStatus;                              //_12
	unknown _14;                              //_14
	f32 mStartTimer;                          //_18
	Controller* mController;                  //_1C
	Result::TNode mResultNodes;               //_20
	ResultTexMgr::Mgr* mResultTextures;       //_70
	JKRHeap* mResultTexHeap;                  //_74
	u8 _78[4];                                // _78
	Delegate<CaveResultState>* mLoadCallback; // _7C
	DvdThreadCommand mDvdThread;              // _80
	SingleGameSection* mSection;              // _EC
	JKRHeap* mMainHeap;                       // _F0
	JKRHeap* mBackupHeap;                     // _F4
	u8 mIsCaveComplete;                       // _F8
	u32 : 0;
	u8 _FC[4]; // _FC
};

/**
 * @size{0x1C}
 */
struct CaveState : public State {
	inline CaveState()
	    : State(SGS_Cave)
	{
	}

	virtual void init(SingleGameSection*, StateArg*);                                               // _08
	virtual void exec(SingleGameSection*);                                                          // _0C
	virtual void cleanup(SingleGameSection*);                                                       // _10
	virtual void draw(SingleGameSection*, Graphics&);                                               // _20
	virtual void onOrimaDown(SingleGameSection*, int);                                              // _24
	virtual void onMovieStart(SingleGameSection* game, MovieConfig* movie, u32 unused, u32 naviID); // _28
	virtual void onMovieDone(SingleGameSection*, MovieConfig*, u32, u32);                           // _2C
	virtual void onMovieCommand(SingleGameSection*, int);                                           // _30
	virtual void onNextFloor(SingleGameSection*, ItemHole::Item*);                                  // _38
	virtual void onFountainReturn(SingleGameSection*, ItemBigFountain::Item*);                      // _3C
	virtual void on_section_fadeout(SingleGameSection*);                                            // _40

	void check_SMenu(SingleGameSection*);

	// Unused/inlined:
	void gameStart(SingleGameSection*);

	// _00     = VTBL
	// _00-_10 = State
	bool mLosePellets; // _10
	bool mFadeout;     // _11
	u32 _14;           // _14, unknown
	bool mDrawSave;    // _18
};

struct DayEndArg : public StateArg {
	DayEndArg(u16 endType)
	    : mEndType(endType)
	{
	}

	u16 mEndType; // _00
};

/**
 * @size{0x20}
 */
struct DayEndState : public State {
	enum DayEndType {
		DETYPE_Normal       = 0,
		DETYPE_PikminZero   = 1,
		DETYPE_CaptainsDown = 2,
	};

	enum DayEndStatus {
		DESTATE_PlayCutscene = 0, // before/during cutscene; plays cutscene
		DESTATE_Cleanup      = 1, // after cutscene; cleans up data, advances day, triggers day end results
	};

	inline DayEndState()
	    : State(SGS_DayEnd)
	{
	}

	virtual void init(SingleGameSection*, StateArg*);                                               // _08
	virtual void exec(SingleGameSection*);                                                          // _0C
	virtual void cleanup(SingleGameSection*);                                                       // _10
	virtual void draw(SingleGameSection*, Graphics&);                                               // _20
	virtual void onMovieStart(SingleGameSection* game, MovieConfig* movie, u32 unused, u32 naviID); // _28
	virtual void onMovieDone(SingleGameSection*, MovieConfig*, u32, u32);                           // _2C
	virtual void onMovieCommand(SingleGameSection*, int);                                           // _30

	// _00     = VTBL
	// _00-_10 = State
	u16 mDayEndType;                // _10
	u16 mStatus;                    // _12
	f32 mTimer;                     // _14
	PikiContainer mLeftBehindPikis; // _18
};

struct EndingArg : public StateArg {
	EndingArg(int state) { mState = state; }

	u8 mState; // _00
};

/**
 * @size{0x30}
 */
struct EndingState : public State {
	EndingState();

	enum EndingFlag {
		Ending_SkipMovie  = 1, // unset = play thp file, set = skip thp file
		Ending_IsComplete = 2  // unset = pay debt, set = all treasures
	};

	enum EndingStatus {
		EndingStatus_InitLoad                 = 0,
		EndingStatus_LoadStart                = 1,
		EndingStatus_LoadFirstMovie           = 2,
		EndingStatus_PlayMoviePayDebt         = 3,
		EndingStatus_PlayMovieCredits         = 4,
		EndingStatus_ShowFinalResultsDebt     = 5,
		EndingStatus_ShowContinueMesg         = 6,
		EndingStatus_PlayMoviePostDebtStart   = 7,
		EndingStatus_PlayMovieAllTreasure     = 8,
		EndingStatus_Unused9                  = 9, // seems to be a copy of state 8? never reached normally
		EndingStatus_ShowFinalResultsComplete = 10
	};

	virtual void init(SingleGameSection* game, StateArg* settings); // _08
	virtual void exec(SingleGameSection* game);                     // _0C
	virtual void cleanup(SingleGameSection* game);                  // _10
	virtual void draw(SingleGameSection* game, Graphics& gfx);      // _20
	virtual void do_dvdload();                                      // _48 (weak)

	void dvdload();

	// Unused/inlined:
	void initNext(SingleGameSection* game);

	// _00     = VTBL
	// _00-_10 = State
	u8 mFlag;                                 // _10
	u8 mStatus;                               // _11
	JKRHeap* mMainHeap;                       // _14
	JKRHeap* mBackupHeap;                     // _18
	THPPlayer* mTHPPlayer;                    // _1C
	u8 mThpState;                             // _20
	Delegate<EndingState>* mDelegate;         // _24
	Controller* mController;                  // _28
	kh::Screen::TotalResultData* mResultData; // _2C
};

/**
 * @size{0x38}
 */
struct FileState : public State {
	FileState();

	virtual void init(SingleGameSection*, StateArg*); // _08
	virtual void exec(SingleGameSection*);            // _0C
	virtual void cleanup(SingleGameSection*);         // _10
	virtual void draw(SingleGameSection*, Graphics&); // _20

	void dvdload();
	void startGame(SingleGameSection*);

	// Unused/inlined:
	void first_init(SingleGameSection*);

	// _00     = VTBL
	// _00-_10 = State
	u32 _10;                            // _10
	Controller* mMainController;        // _14
	Delegate<FileState>* mLoadDelegate; // _18
	JKRExpHeap* mMainHeap;              // _1C
	JKRHeap* mBackupHeap;               // _20
	bool mIsNotInitialized;             // _24
	u32 _28;                            // _28, unknown
	ebi::FileSelect::TMgr* mFSMgr;      // _2C
	u8 _30[4];                          // _30
	Controller* mDebugController;       // _34
};

struct GameArg : public StateArg {
	inline GameArg(bool check, u16 startType)
	    : _00(check)
	    , mStartType(startType)
	{
	}

	bool _00;       // _00
	u16 mStartType; // _02
};

/**
 * @size{0x24}
 */
struct GameState : public State {
	/**
	 * @fabricated
	 */
	enum RepayDemoState {
		RDS_Inactive     = 0,
		RDS_Started      = 1,
		RDS_DemoPlaying  = 2,
		RDS_GoToPayDebt  = 3,
		RDS_GameComplete = 4,
	};

	inline GameState()
	    : State(SGS_Game)
	{
	}

	virtual void init(SingleGameSection*, StateArg*);                                               // _08
	virtual void exec(SingleGameSection*);                                                          // _0C
	virtual void cleanup(SingleGameSection*);                                                       // _10
	virtual void draw(SingleGameSection*, Graphics&);                                               // _20
	virtual void onOrimaDown(SingleGameSection*, int);                                              // _24
	virtual void onMovieStart(SingleGameSection* game, MovieConfig* movie, u32 unused, u32 naviID); // _28
	virtual void onMovieDone(SingleGameSection*, MovieConfig*, u32, u32);                           // _2C
	virtual void onMovieCommand(SingleGameSection*, int);                                           // _30
	virtual void onHoleIn(SingleGameSection*, ItemCave::Item*);                                     // _34
	virtual void on_section_fadeout(SingleGameSection*);                                            // _40
	virtual void on_demo_timer(SingleGameSection*, u32);                                            // _44

	bool check_DemoInout(SingleGameSection*);
	bool needRepayDemo();
	void startRepayDemo();
	RepayDemoState updateRepayDemo();

	// Unused/inlined:
	void drawRepayDemo(Graphics&);
	unknown gameStart(SingleGameSection*);

	// _00     = VTBL
	// _00-_10 = State
	bool mIsPostExtinct; // _10
	u8 _11;              // _11
	f32 _14;             // _14
	u8 mDoExit;          // _18
	u8 mCheckRepay;      // _19
	f32 mRepayTimer;     // _1C
	u8 mInSaveScreen;    // _20
};

struct LoadArg : public StateArg {
	inline LoadArg() { }

	inline LoadArg(u16 enterType, bool inCave, bool noClearHeap, bool isCaveDeeper)
	    : mGameLoadType(enterType)
	    , mInCave(inCave)
	    , mDontClearHeap(noClearHeap)
	    , mIsCaveDeeper(isCaveDeeper)
	{
	}

	bool mInCave;        // _00, are we loading a cave or above ground
	bool mDontClearHeap; // _01, does the existing map data need to be cleared
	bool mIsCaveDeeper;  // _02, does the sublevel count need to go up
	u16 mGameLoadType;   // _04, see MapEnterStatus enum
};

/**
 * @size{0x2C}
 */
struct LoadState : public State {

	inline LoadState()
	    : State(SGS_Load)
	{
	}

	virtual void init(SingleGameSection*, StateArg*); // _08
	virtual void exec(SingleGameSection*);            // _0C
	virtual void cleanup(SingleGameSection*);         // _10
	virtual void draw(SingleGameSection*, Graphics&); // _20

	// Unused/inlined:
	void initNext(SingleGameSection*);

	// _00     = VTBL
	// _00-_10 = State
	u32 _10;             // _10, unknown
	bool mHasDrawn;      // _14
	bool mHasLoadBegun;  // _15
	u8 _16[0x2];         // _16, probably padding
	u8 _18[0xC];         // _18, unknown
	u16 mGameLoadType;   // _24, see MapEnterType enum
	bool mIsInitialized; // _26
	bool mIsCaveLoad;    // _27
	bool mIsCaveDeeper;  // _28, does the sublevel count need to increase
	bool mDontClearHeap; // _29
};

/**
 * @size{0x140}
 */
struct MainResultState : public State {
	MainResultState();

	virtual void init(SingleGameSection* game, StateArg* settings);                   // _08
	virtual void exec(SingleGameSection* game);                                       // _0C
	virtual void cleanup(SingleGameSection* game);                                    // _10
	virtual void draw(SingleGameSection* game, Graphics& gfx);                        // _20
	virtual void onMovieDone(SingleGameSection* game, MovieConfig* config, u32, u32); // _2C

	void beforeSave();
	void createResultNodes();
	void loadResource();

	// Unused/inlined:
	unknown open2D(SingleGameSection* game);

	enum ResultStatus {
		Result_LoadData     = 0,
		Result_Unused1      = 1,
		Result_OpenWait     = 2,
		Result_ScreenActive = 3,
		Result_Finish       = 4,
	};

	// _00     = VTBL
	// _00-_10 = State
	u16 mStatus;                                    // _10
	f32 mStartTimer;                                // _14
	Controller* mControl;                           // _18
	u8 _1C;                                         // _1C
	int mCounter;                                   // _20
	ResultTexMgr::Mgr mResultTex;                   // _24
	u8 _64[4];                                      // _64
	Result::TNode mResultNode;                      // _68
	kh::Screen::IncP* mIncP;                        // _B8
	u8 _BC[4];                                      // _BC
	JKRHeap* mMainHeap;                             // _C0
	TObjectNode<GenericObjectMgr>* mPelletMgr;      // _C4
	Delegate<MainResultState>* mLoadDelegate;       // _C8
	DvdThreadCommand mDvdThread;                    // _CC
	SingleGameSection* mGameSect;                   // _138
	Delegate<MainResultState>* mBeforeSaveDelegate; // _13C
};

struct MovieArg : public StateArg {
	MovieArg(THPPlayer::EMovieIndex id) { mMovieIndex = id; }
	THPPlayer::EMovieIndex mMovieIndex; // _00
};

/**
 * @size{0x28}
 */
struct MovieState : public State {
	MovieState();

	virtual void init(SingleGameSection*, StateArg*); // _08
	virtual void exec(SingleGameSection*);            // _0C
	virtual void cleanup(SingleGameSection*);         // _10
	virtual void draw(SingleGameSection*, Graphics&); // _20

	// _00     = VTBL
	// _00-_10 = State
	THPPlayer::EMovieIndex mMovieID; // _10, doesnt actually change what loads
	Controller* mController;         // _14
	JKRHeap* mBackupHeap;            // _18
	JKRHeap* mMovieHeap;             // _1C
	THPPlayer* mMoviePlayer;         // _20
	bool mIsMovieLoaded;             // _24
};

/**
 * @size{0x30}
 */
struct SelectState : public State {
	enum StateID {
		SELECTSTATE_Init = 0,
		SELECTSTATE_Load = 1,
		SELECTSTATE_Draw = 2,
	};

	SelectState();

	virtual void init(SingleGameSection*, StateArg*); // _08
	virtual void exec(SingleGameSection*);            // _0C
	virtual void cleanup(SingleGameSection*);         // _10
	virtual void draw(SingleGameSection*, Graphics&); // _20

	void dvdload();
	void initNext(SingleGameSection*);

	// _00     = VTBL
	// _00-_10 = State
	kh::Screen::WorldMap* mWorldMap;         // _10
	Delegate<SelectState>* mDvdLoadCallback; // _14
	JKRExpHeap* mWMapHeap;                   // _18
	JKRHeap* mParentHeap;                    // _1C
	Controller* mController;                 // _20
	StateID mState;                          // _24
	int mPreviousCourseID;                   // _28
	bool mNewLevelOpen;                      // _2C
};

enum ZukanLoadType {
	ZukanType_Item  = 0,
	ZukanType_Enemy = 1,
};

struct ZukanStateArg : public StateArg {
	u8 mZukanType;
	int mCourseID;
};

/**
 * @size{0x118}
 */
struct ZukanState : public State {
	/**
	 * @real
	 */
	enum CMode {
		ModeStartTeki      = 0,
		ModeStartPellet    = 1,
		ModeChangeToTeki   = 2,
		ModeTeki           = 3,
		ModeChangeTeki     = 4,
		ModeChangeToPellet = 5,
		ModePellet         = 6,
		ModeChangePellet   = 7,
		ModeNone           = 8,
	};

	/**
	 * @fabricated
	 */
	struct Arg : public StateArg {
		u8 mStartMode;    // _00
		int mCourseIndex; // _04
	};

	ZukanState();

	virtual void init(SingleGameSection* game, StateArg* settings); // _08
	virtual void exec(SingleGameSection* game);                     // _0C
	virtual void cleanup(SingleGameSection* game);                  // _10
	virtual void draw(SingleGameSection* game, Graphics& gfx);      // _20

	void clearHeapB_common();
	void clearHeapB_pellet();
	void clearHeapB_teki();
	void clearHeaps();
	static PelletList::cKind convertPelletID(int&, int);
	void createEnemy(int);
	void createPellet(int);
	void createTeki(int);
	void drawGradationEffect(SingleGameSection* game, Graphics& gfx);
	void drawLightEffect(SingleGameSection* game, Graphics& gfx);
	void dvdloadA();
	void dvdloadB_pellet();
	void dvdloadB_teki();
	void execChangePellet(SingleGameSection* game);
	void execChangeTeki(SingleGameSection* game);
	void execModeChange(SingleGameSection* game, CMode mode);
	void execPellet(SingleGameSection* game);
	void execTeki(SingleGameSection* game);
	void setMode(CMode mode);
	void startWipe(f32 DemoTimers);

	static int getMaxPelletID();
	static PelletConfig* getCurrentPelletConfig(int id);

	// Unused/inlined:
	void startTekiMode(bool);
	void startPelletMode(bool);
	void createItem(int);
	void debugDraw(Graphics&);
	void dvdloadB_common();

	inline f32 getWindowWidth() { return mWindowBounds.p2.x - mWindowBounds.p1.x; }
	inline f32 getWindowHeight() { return mWindowBounds.p2.y - mWindowBounds.p1.y; }

	// _00     = VTBL
	// _00-_10 = State
	Delegate<ZukanState>* mDelegateLoadMain;    // _10
	Delegate<ZukanState>* mDelegateLoadEnemy;   // _14
	Delegate<ZukanState>* mDelegateLoadPellet;  // _18
	DvdThreadCommand mDvdThread;                // _1C
	bool mDoDraw;                               // _88
	CourseInfo* mCourseInfo;                    // _8C
	Controller* mController;                    // _90
	BaseGameSection* mGameSect;                 // _94
	IllustratedBook::Camera* mCamera;           // _98
	CMode mCurrMode;                            // _9C
	int mCurrentEnemyIndex;                     // _A0
	EnemyBase* mCurrentEnemy;                   // _A4
	int mCurrentPelletIndex;                    // _A8
	Pellet* mCurrentPellet;                     // _AC
	JUTTexture* mTexture;                       // _B0
	Rectf mWindowBounds;                        // _B4
	Vector2f mCameraAspect;                     // _C4
	JUTTexture* mTexture2;                      // _CC
	u8 _D0[4];                                  // _D0
	JKRExpHeap* mParentHeap;                    // _D4
	JKRHeap* mMainHeap;                         // _D8
	JKRExpHeap* mCurrObjHeap;                   // _DC
	JKRHeap* mBackupHeap;                       // _E0
	u32 mHeapSize;                              // _E4
	ResultTexMgr::Mgr* mResultTexture;          // _E8
	IllustratedBook::EnemyTexMgr* mEnemyTexMgr; // _EC
	JKRExpHeap* mExtraHeapFor2D;                // _F0
	f32 mChangeSelTimer;                        // _F4
	f32 mChangeSelMaxTime;                      // _F8
	u32 mChangeSelState;                        // _FC
	IllustratedBook::Parms* mParms;             // _100
	IllustratedBook::DebugParms* mDebugParms;   // _104
	f32 _108;                                   // _108
	int mMapIndex;                              // _10C
	u32 _110;                                   // _110
	u32 _114;                                   // _114
};
} // namespace SingleGame
} // namespace Game

#endif
