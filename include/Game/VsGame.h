#ifndef _GAME_VSGAME_VSGAME_H
#define _GAME_VSGAME_VSGAME_H

#include "Graphics.h"
#include "Vector3.h"
#include "stream.h"
#include "CNode.h"
#include "Game/PikiContainer.h"
#include "Game/StateMachine.h"
#include "Game/VsGameSection.h"
#include "Game/EnemyBase.h"
#include "Game/gameChallenge2D.h"
#include "Game/Navi.h"
#include "Game/PikiMgr.h"
#include "Game/MoviePlayer.h"
#include "efx/TNaviEffect.h"
#include "efx/TPk.h"

struct JUTTexture;
struct LightObj;

namespace Game {
namespace ItemHole {
struct Item;
} // namespace ItemHole

struct MovieConfig;
struct Challenge2D_ResultInfo;

namespace VsGame {
enum StateID {
	VGS_Title  = 0,
	VGS_Load   = 1,
	VGS_Game   = 2,
	VGS_VS     = 3,
	VGS_Result = 4,
	VGS_StateCount,
};

enum VsCaveInfoType {
	VSCAVEINFO_Default  = 0,
	VSCAVEINFO_Metal    = 1,
	VSCAVEINFO_Concrete = 2,
	VSCAVEINFO_Tsuchi   = 3,
};

enum LoseReasonFlags {
	VSLOSE_NaviDown   = 0x1,
	VSLOSE_Extinction = 0x2,
	VSLOSE_Finished   = 0x4,
	VSLOSE_Marble     = 0x80,
};

enum VSPlayerColor {
	VSPLAYER_Red  = 0,
	VSPLAYER_Blue = 1,
};

struct TekiNode : public CNode {
	inline TekiNode() { }
	virtual ~TekiNode() {}; // _08 (weak)

	// _00 		= VTBL
	// _00-_18	= CNode
	EnemyTypeID::EEnemyTypeID mId; // _18
	int mTekiNum;                  // _1C
	int mNodeID;                   // _20
};

struct TekiMgr {
	TekiMgr();

	void entry(EnemyTypeID::EEnemyTypeID, int);
	TekiNode* getNode(int); // unused; inlined into birth
	bool birthable(int);    // unused
	EnemyBase* birth(int, Vector3f&, bool);
	EnemyTypeID::EEnemyTypeID getID(int); // unused

	// these elements were likely private
	TekiNode mNode; // _00
	int mNodeCount; // _24
};

enum eCardType { // official enum name
	PIKMIN_5          = 0,
	PIKMIN_10         = 1,
	ALL_FLOWER        = 2,
	PIKMIN_XLU        = 3,
	DOPE_BLACK        = 4,
	DOPE_RED          = 5,
	RESET_BEDAMA      = 6,
	TEKI_HANACHIRASHI = 7,
	TEKI_SARAI        = 8,
	TEKI_ROCK         = 9,
	TEKI_BOMBOTAKRA   = 10,
	TEKI_TANK         = 11,
	CARD_ID_COUNT,
	UNRESOLVED = 0xffff
};

struct CardSelector {
	CardSelector();
	int getTotalWeight();
	int selectCard();

	int mValues[CARD_ID_COUNT];     // _00
	f32 mCumulative[CARD_ID_COUNT]; // _30
};

// this is just a guess, it's for cardData in vsCardMgr.cpp that doesn't get used... at all
struct CardData {
	const char* mName; // _00
	int mCount;        // _04
};

struct CardMgr {
	struct SlotMachine {
		enum EAppearStates { APPEAR_LEAVE = 0, APPEAR_AWAIT = 1, APPEAR_ENTER = 2, APPEAR_RESET = 3 };

		enum ESpinStates {
			SPIN_UNSTARTED      = 0,
			SPIN_WAIT_START     = 1,
			SPIN_START          = 2,
			SPIN_WAIT_MAX_SPEED = 3,
			SPIN_DECELERATE     = 4,
			SPIN_DECELERATE_END = 5,
			SPIN_DOWN_TO_CARD   = 6,
			SPIN_WAIT_CARD_STOP = 7,
			SPIN_UP_TO_CARD     = 8,
			SPIN_WAIT_CARD_ROLL = 9,
			SPIN_END            = 10
		};

		SlotMachine()
		{
			mCardMgr = nullptr;
			clear();
			mCherryStock  = 0;
			mPrevSelected = UNRESOLVED;
			_68           = 0.0f;
			_6C           = 0.0f;
		}

		void clear();
		void start();
		void startStop();
		void update();
		void updateAppear();
		void startZoomIn();
		void startZoomUse();
		void updateZoomIn();
		void updateZoomUse();

		bool equalTo(int);
		bool goodPlace();

		inline int getNextCard(int card) { return (CARD_ID_COUNT + card + 1) % CARD_ID_COUNT; }
		inline int getPrevCard(int card) { return (CARD_ID_COUNT + card - 1) % CARD_ID_COUNT; }

		f32 mSpinAngle;     // _00
		int mCurrCardIndex; // _04
		int mPrevCardIndex; // _08
		f32 mSpinProgress;  // _0C
		f32 mSpinSpeed;     // _10
		f32 mSpinAccel;     // _14
		bool _18;           // _18
		int mCherryStock;   // _1C, cherry count
		int mSpinState;     // _20
		int mSelectedSlot;  // _24, pre-determined slot
		f32 _28;            // _28, unknown
		f32 _2C;            // _2C
		u32 mAppearState;   // _30, unknown
		f32 mAppearValue;   // _34
		int _38;            // _38
		f32 mTimer;         // _3C
		f32 mRotationZ;     // _40
		f32 _44;            // _44
		f32 _48;            // _48
		int _4C;            // _4C, maybe currentSlotIndex?
		u8 _50;             // _50, unknown
		u8 _51;             // _51
		f32 mSpinTimer;     // _54
		int mSlotID;        // _58
		int mPlayerIndex;   // _5C
		CardMgr* mCardMgr;  // _60
		int mPrevSelected;  // _64
		f32 _68;            // _68
		f32 _6C;            // _6C
	};

	CardMgr(VsGameSection*, TekiMgr*);

	void loadResource();
	void update();
	void clear();
	void draw(Graphics&);
	void stopSlot(int);
	bool usePlayerCard(int, TekiMgr*);
	void gotPlayerCard(int);
	void initDraw();
	void drawSlot(Graphics&, Vector3f&, SlotMachine&);

	Vector3f getSlotOrigin(int);
	Vector2f getLampPos(int, int);
	Vector3f getPlayerCard(int);
	void clearPlayerCard();

	JUTTexture* getTexture(eCardType);
	void vert(int);
	void norm(int);

	int mSlotNum;                  // _00, unknown
	JUTTexture** mSlotTextures;    // _04, slot textures?
	JUTTexture* mYButtonTexture;   // _08
	JUTTexture* mLampOnTexture;    // _0C
	JUTTexture* mLampOffTexture;   // _10
	JUTTexture* mHighlightTexture; // _14
	SlotMachine mSlotMachines[2];  // _18
	int mPointCount;               // _F8
	Vector3f* mVertices;           // _FC, array of 0x100 vectors?
	Vector3f* mNormals;            // _100, array of 0x100 vectors?
	f32 mRollSoundMinSpeed;        // _104
	LightObj* mLightObj;           // _108
	VsGameSection* mSection;       // _10C
	TekiMgr* mTekiMgr;             // _110
};

struct StageData : public CNode {
	StageData();

	virtual ~StageData() { } // _08 (weak)

	void read(Stream&);
	void write(Stream&);

	// _00 		= VTBL
	// _00-_18	= CNode
	PikiContainer mPikiContainer;  // _18
	char mCaveInfoFilename[64];    // _20, default = "caveinfo.txt"
	f32 mTimeLimit;                // _60
	int mStartNumBitter;           // _64
	int mStartNumSpicy;            // _68
	int mIndex2D;                  // _6C
	char mStageLayoutFilePath[64]; // _70
	int mStartNumYellowMarbles;    // _B0
};

struct StageList : public CNode {
	StageList();

	virtual ~StageList() { } // _08 (weak)

	void read(Stream&);
	void write(Stream&);
	StageData* getStageData(int);

	// _00 		= VTBL
	// _00-_18	= CNode
	StageData mStageData; // _18
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum GameStateFlags {
	VSGS_EnteringCave      = 0x1,
	VSGS_PikminExtinct     = 0x2,
	VSGS_IntroDone         = 0x4,
	VSGS_TimeUp            = 0x8,
	VSGS_Unk5              = 0x10,
	VSGS_Unk6              = 0x20,
	VSGS_Unk7              = 0x40,
	VSGS_ReadyGoOpen       = 0x80,
	VSGS_WinLoseReasonOpen = 0x100,
	VSGS_WinLoseOpen       = 0x200,
	VSGS_Unk11             = 0x400,
	VSGS_Unk12             = 0x800,
	VSGS_Unk13             = 0x1000,
	VSGS_Unk14             = 0x2000,
	VSGS_Unk15             = 0x4000,
	VSGS_IsSectionFadeout  = 0x8000,
};

struct FSM : public StateMachine<VsGameSection> {
	virtual void init(VsGameSection*);                    // _08
	virtual void transit(VsGameSection*, int, StateArg*); // _14

	void draw(VsGameSection*, Graphics&);
};

struct State : public FSMState<VsGameSection> {
	inline State(int id)
	    : FSMState(id)
	{
	}

	virtual void draw(VsGameSection*, Graphics&) { }                                               // _20 (weak)
	virtual void pre2dDraw(Graphics&, VsGameSection*) { }                                          // _24 (weak)
	virtual void onOrimaDown(VsGameSection*, int) { }                                              // _28 (weak)
	virtual void onMovieStart(VsGameSection* game, MovieConfig* movie, u32 unused, u32 naviID) { } // _2C (weak)
	virtual void onMovieDone(VsGameSection*, MovieConfig*, u32, u32) { }                           // _30 (weak)
	virtual void onNextFloor(VsGameSection*, ItemHole::Item*) { }                                  // _34 (weak)
	virtual void on_section_fadeout(VsGameSection*) { }                                            // _38 (weak)
	virtual bool goingToCave(VsGameSection*) { return false; }                                     // _3C (weak)
	virtual void onBattleFinished(VsGameSection*, int, bool) { }                                   // _40 (weak)
	virtual void onRedOrBlueSuckStart(VsGameSection*, int, bool) { }                               // _44 (weak)
	virtual bool isCardUsable(VsGameSection*) { return false; }                                    // _48 (weak)

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct GameState : public State {
	GameState();

	virtual void init(VsGameSection*, StateArg*);                                               // _08
	virtual void exec(VsGameSection*);                                                          // _0C
	virtual void cleanup(VsGameSection*);                                                       // _10
	virtual void draw(VsGameSection*, Graphics&);                                               // _20
	virtual void pre2dDraw(Graphics&, VsGameSection*);                                          // _24
	virtual void onOrimaDown(VsGameSection*, int);                                              // _28
	virtual void onMovieStart(VsGameSection* game, MovieConfig* movie, u32 unused, u32 naviID); // _2C
	virtual void onMovieDone(VsGameSection*, MovieConfig*, u32, u32);                           // _30
	virtual void onNextFloor(VsGameSection*, ItemHole::Item*);                                  // _34
	virtual void on_section_fadeout(VsGameSection*)                                             // _38 (weak)
	{
		setFlag(VSGS_IsSectionFadeout);
	}
	virtual bool goingToCave(VsGameSection*);                     // _3C
	virtual void onBattleFinished(VsGameSection*, int, bool);     // _40
	virtual void onRedOrBlueSuckStart(VsGameSection*, int, bool); // _44
	virtual bool isCardUsable(VsGameSection*);                    // _48
	virtual void drawStatus(Graphics&, VsGameSection*);           // _4C
	virtual void do_init(VsGameSection*);                         // _50

	void clearLoseCauses();
	void checkFindKeyDemo(VsGameSection*);
	void checkSMenu(VsGameSection*);
	void checkPikminZero(VsGameSection*);
	void open_GameChallenge(VsGameSection*, int);
	void update_GameChallenge(VsGameSection*);

	inline void updateNavi(VsGameSection* section, int naviIndex)
	{
		if (section->mGhostIconTimers[naviIndex] > 0.0f) {
			section->mGhostIconTimers[naviIndex] -= sys->mDeltaTime;

			Navi* navi = naviMgr->getAt(naviIndex);
			if (navi && section->mGhostIconTimers[naviIndex] <= 0.0f) {
				efx::TNaviEffect* naviEffect = navi->mEffectsObj;

				if (naviEffect->isFlag(efx::NAVIFX_IsSaved)) {
					naviEffect->mFlags = naviEffect->mSavedFlags;
					naviEffect->resetFlag(efx::NAVIFX_IsSaved);
				}

				bool inWater = naviEffect->isFlag(efx::NAVIFX_InWater);
				if (naviEffect->isFlag(efx::NAVIFX_InWater)) { // in water?
					naviEffect->setFlag(efx::NAVIFX_InWater);
					naviEffect->updateHamon_();

					if (!(inWater)) { // what is bro doing
						efx::createSimpleDive(naviEffect->mHamonPosition);
					}
				}

				if (naviEffect->isFlag(efx::NAVIFX_LightOn)) {
					naviEffect->createLight();
				}
			}

			pikiMgr->setVsXlu(1 - naviIndex, false);

		} else {
			pikiMgr->setVsXlu(1 - naviIndex, true);
		}
	}

	inline void setFlag(u16 flag) { mFlags.typeView |= flag; }

	inline void resetFlag(u16 flag) { mFlags.typeView &= ~flag; }

	inline bool isFlag(u16 flag) { return mFlags.typeView & flag; }

	inline void setLoseCause(int player, u32 flag) { mLoseCauses[player].typeView |= flag; }

	inline bool isLoseCause(int player, u32 flag) { return mLoseCauses[player].typeView & flag; }

	inline u8 getLoseCauses(int player) { return mLoseCauses[player].typeView; }

	inline void setLoseCause(BitFlag<u8>& player, u32 flag) { player.typeView |= flag; }

	inline bool getMarbleLoss(bool& loseRed, bool& loseBlue)
	{
		bool moviePlayerActive = moviePlayer->isFlag(MVP_IsActive);

		loseRed  = false;
		loseBlue = false;

		if (!moviePlayerActive && isLoseCause(VSPLAYER_Blue, VSLOSE_Marble)) {
			loseRed = true;
		}

		if (!moviePlayerActive && isLoseCause(VSPLAYER_Red, VSLOSE_Marble)) {
			loseBlue = true;
		}
	}

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C;                    // _0C
	Controller* mController;    // _10
	BitFlag<u16> mFlags;        // _14
	u8 mSubState;               // _16
	f32 mTimer;                 // _18
	f32 mFloorExtendTimer;      // _1C
	f32 mDisplayTime;           // _20
	bool mHasKeyDemoPlayed;     // _24
	BitFlag<u8> mLoseCauses[2]; // _25
};

struct VSState : public GameState {
	VSState();

	virtual void do_init(VsGameSection*); // _50

	// _00     = VTBL
	// _00-_0C = State
};

struct LoadArg : public StateArg {
	inline LoadArg()
	    : _00(0)
	    , mGameLoadType(0)
	    , mNeedClearHeap(false)
	{
	}

	inline LoadArg(u32 a, int b, bool c)
	    : _00(a)
	    , mGameLoadType(b)
	    , mNeedClearHeap(c)
	{
	}

	u32 _00;             // _00, unused
	int mGameLoadType;   // _04
	bool mNeedClearHeap; // _08
};

struct LoadState : public State {
	LoadState();

	virtual void init(VsGameSection*, StateArg*); // _08
	virtual void exec(VsGameSection*);            // _0C
	virtual void cleanup(VsGameSection*);         // _10
	virtual void draw(VsGameSection*, Graphics&); // _20

	void dvdLoad();

	// _00     = VTBL
	// _00-_0C = State
	f32 _0C;                                      // _0C
	f32 _14;                                      // _10
	Controller* mController;                      // _14
	VsGameSection* mSection;                      // _18
	bool mIsLoadStarted;                          // _1C
	u32 mUnusedVal;                               // _20
	int mGameStartType;                           // _24
	bool mNeedClearHeap;                          // _28
	Delegate<Game::VsGame::LoadState>* mDelegate; // _2C
	DvdThreadCommand mDvdThreadCommand;           // _30
	bool mIsGameStarting;                         // _9c
	f32 mAutoStartTime;                           // _A0
};

struct ResultArg : public StateArg {
	BitFlag<u8> mEndFlag; // _00, 0 if extinction/captain down/give up, 1 if normal end
};

struct ResultState : public State {
	enum ResultStage {
		VSRES_PrepareInfo = 0,
		VSRES_PrepareDisp = 1,
		VSRES_Display     = 2,
	};

	ResultState();

	virtual void init(VsGameSection*, StateArg*); // _08
	virtual void exec(VsGameSection*);            // _0C
	virtual void cleanup(VsGameSection*);         // _10
	virtual void draw(VsGameSection*, Graphics&); // _20

	void prepareMorimuraInfo(VsGameSection*);
	void dvdload();

	inline bool isNormalEnd() { return mEndFlags.typeView & 1; }

	// _00     = VTBL
	// _00-_0C = State
	f32 _0C;                                        // _0C
	Controller* mPlayer1Controller;                 // _10
	Controller* mPlayer2Controller;                 // _14
	u8 mResultStage;                                // _18
	JKRExpHeap* mExpHeap;                           // _1C
	JKRHeap* mHeap;                                 // _20
	Delegate<Game::VsGame::ResultState>* mDelegate; // _24
	int mPikminLeft;                                // _28
	int _2C;                                        // _2C
	int mPokoTimeScore;                             // _30
	BitFlag<u8> mEndFlags;                          // _34, 0 if pikmin extinction/captain down/given up
	Challenge2D_ResultInfo* mResultInfo;            // _38
};

struct TitleArg : public StateArg {
	bool mDoNeedClearHeap; // _00
};

struct TitleState : public State {
	enum TitleStage {
		VSTITLE_PrepareInfo = 0,
		VSTITLE_PrepareDisp = 1,
		VSTITLE_Display     = 2,
	};

	TitleState();

	virtual void init(VsGameSection*, StateArg*); // _08
	virtual void exec(VsGameSection*);            // _0C
	virtual void cleanup(VsGameSection*);         // _10
	virtual void draw(VsGameSection*, Graphics&); // _20

	void dvdload();
	void execChallenge(VsGameSection*);
	void execVs(VsGameSection*);

	inline int getChallengeStageNum() { return 30; }

	inline int getVsStageNum() { return mSection->mVsStageList->mStageData.getChildCount(); }

	// _00     = VTBL
	// _00-_0C = State
	f32 _0C;                                       // _0C
	u8 mTitleStage;                                // _10
	JKRExpHeap* mExpHeap;                          // _14
	JKRHeap* mHeap;                                // _18
	Delegate<Game::VsGame::TitleState>* mDelegate; // _1C
	int _20;                                       // _20
	int mCaveInfoType;                             // _24
	int mStageNum;                                 // _28
	int _2C;                                       // _2C
	Controller* mPlayer1Controller;                // _2C
	Controller* mPlayer2Controller;                // _30
	VsGameSection* mSection;                       // _38
	Challenge2D_TitleInfo* mChallengeTitleInfo;    // _3C
	Vs2D_TitleInfo* mVsTitleInfo;                  // _40
};
/////////////////////////////////////////////////////////////////
} // namespace VsGame
} // namespace Game

#endif
