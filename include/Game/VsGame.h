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
	VSLOSE_Unk1       = 0x1,
	VSLOSE_Extinction = 0x2,
	VSLOSE_Unk3       = 0x4,
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
	EnemyTypeID::EEnemyTypeID m_id; // _18
	int _1C;                        // _1C
	int m_nodeID;                   // _20
};

struct TekiMgr {
	TekiMgr();

	void entry(EnemyTypeID::EEnemyTypeID, int);
	TekiNode* getNode(int); // unused; inlined into birth
	bool birthable(int);    // unused
	EnemyBase* birth(int, Vector3f&, bool);
	EnemyTypeID::EEnemyTypeID getID(int); // unused

	// these elements were likely private
	TekiNode m_node; // _00
	int m_nodeCount; // _24
};

struct CardMgr {
	struct SlotMachine {
		SlotMachine();

		void clear();
		void start();
		void startStop();
		void update();
		void updateAppear();
		void startZoomIn();
		void startZoomUse();
		void updateZoomIn();
		void updateZoomUse();

		f32 _00;           // _00
		u8 _04[0x8];       // _04, unknown
		f32 _0C;           // _0C
		f32 _10;           // _10
		f32 _14;           // _14
		bool _18;          // _18
		u32 _1C;           // _1C, unknown
		int _20;           // _20
		u8 _24[0x8];       // _24, unknown
		f32 _2C;           // _2C
		u8 _30[0xC];       // _30, unknown
		f32 _3C;           // _3C, timer?
		f32 _40;           // _40
		f32 _44;           // _44
		f32 _48;           // _48
		int _4C;           // _4C, maybe currentSlotIndex?
		u8 _50;            // _50, unknown
		u8 _51;            // _51
		f32 _54;           // _54
		int _58;           // _58
		int m_playerIndex; // _5C
		CardMgr* _60;      // _60
		u32 _64;           // _64
		f32 _68;           // _68
		f32 _6C;           // _6C
	};

	CardMgr(VsGameSection*, TekiMgr*);

	void loadResource();
	void update();
	void draw(Graphics&);
	void stopSlot(int);
	bool usePlayerCard(int, TekiMgr*);
	void gotPlayerCard(int);
	void initDraw();
	void drawSlot(Graphics&, Vector3f&, SlotMachine&);

	u32 _00;                       // _00, unknown
	JUTTexture** _04;              // _04, slot textures?
	JUTTexture* _08;               // _08
	JUTTexture* _0C;               // _0C
	JUTTexture* _10;               // _10
	JUTTexture* _14;               // _14
	SlotMachine m_slotMachines[2]; // _18
	int _F8;                       // _F8
	Vector3f* _FC;                 // _FC, array of 0x100 vectors?
	Vector3f* _100;                // _100, array of 0x100 vectors?
	f32 _104;                      // _104
	LightObj* m_lightObj;          // _108
	VsGameSection* m_section;      // _10C
	TekiMgr* m_tekiMgr;            // _110
};

struct StageData : public CNode {
	virtual ~StageData(); // _08 (weak)

	// _00 		= VTBL
	// _00-_18	= CNode
	PikiContainer m_pikiContainer;  // _18
	char m_caveInfoFilename[64];    // _20, default = "caveinfo.txt"
	f32 m_timeLimit;                // _60
	int m_startNumBitter;           // _64
	int m_startNumSpicy;            // _68
	int m_index2D;                  // _6C
	char m_stageLayoutFilePath[64]; // _70
	int m_startNumYellowMarbles;    // _B0
};

struct StageList : public CNode {
	StageList();

	virtual ~StageList(); // _08 (weak)

	void read(Stream&);
	StageData* getStageData(int);

	// _00 		= VTBL
	// _00-_18	= CNode
	StageData m_stageData;
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum GameStateFlags {
	VSGS_Unk1  = 0x1,
	VSGS_Unk2  = 0x2,
	VSGS_Unk3  = 0x4,
	VSGS_Unk4  = 0x8,
	VSGS_Unk5  = 0x10,
	VSGS_Unk6  = 0x20,
	VSGS_Unk7  = 0x40,
	VSGS_Unk8  = 0x80,
	VSGS_Unk9  = 0x100,
	VSGS_Unk10 = 0x200,
	VSGS_Unk11 = 0x400,
	VSGS_Unk12 = 0x800,
	VSGS_Unk13 = 0x1000,
	VSGS_Unk14 = 0x2000,
	VSGS_Unk15 = 0x4000,
	VSGS_Unk16 = 0x8000,
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

	virtual void draw(VsGameSection*, Graphics&) { }                      // _20 (weak)
	virtual void pre2dDraw(Graphics&, VsGameSection*) { }                 // _24 (weak)
	virtual void onOrimaDown(VsGameSection*, int) { }                     // _28 (weak)
	virtual void onMovieStart(VsGameSection*, MovieConfig*, u32, u32) { } // _2C (weak)
	virtual void onMovieDone(VsGameSection*, MovieConfig*, u32, u32) { }  // _30 (weak)
	virtual void onNextFloor(VsGameSection*, ItemHole::Item*) { }         // _34 (weak)
	virtual void on_section_fadeout(VsGameSection*) { }                   // _38 (weak)
	virtual bool goingToCave(VsGameSection*) { return false; }            // _3C (weak)
	virtual void onBattleFinished(VsGameSection*, int, bool) { }          // _40 (weak)
	virtual void onRedOrBlueSuckStart(VsGameSection*, int, bool) { }      // _44 (weak)
	virtual bool isCardUsable(VsGameSection*) { return false; }           // _48 (weak)

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct GameState : public State {
	GameState();

	virtual void init(VsGameSection*, StateArg*);                      // _08
	virtual void exec(VsGameSection*);                                 // _0C
	virtual void cleanup(VsGameSection*);                              // _10
	virtual void draw(VsGameSection*, Graphics&);                      // _20
	virtual void pre2dDraw(Graphics&, VsGameSection*);                 // _24
	virtual void onOrimaDown(VsGameSection*, int);                     // _28
	virtual void onMovieStart(VsGameSection*, MovieConfig*, u32, u32); // _2C
	virtual void onMovieDone(VsGameSection*, MovieConfig*, u32, u32);  // _30
	virtual void onNextFloor(VsGameSection*, ItemHole::Item*);         // _34
	virtual void on_section_fadeout(VsGameSection*);                   // _38 (weak)
	virtual bool goingToCave(VsGameSection*);                          // _3C
	virtual void onBattleFinished(VsGameSection*, int, bool);          // _40
	virtual void onRedOrBlueSuckStart(VsGameSection*, int, bool);      // _44
	virtual bool isCardUsable(VsGameSection*);                         // _48
	virtual void drawStatus(Graphics&, VsGameSection*);                // _4C
	virtual void do_init(VsGameSection*);                              // _50

	void clearLoseCauses();
	void checkFindKeyDemo(VsGameSection*);
	void checkSMenu(VsGameSection*);
	void checkPikminZero(VsGameSection*);
	void open_GameChallenge(VsGameSection*, int);
	void update_GameChallenge(VsGameSection*);

	inline void updateNavi(VsGameSection* section, int naviIndex)
	{
		if (section->_1F0[naviIndex] > 0.0f) {
			section->_1F0[naviIndex] -= sys->m_deltaTime;

			Navi* navi = naviMgr->getAt(naviIndex);
			if (navi && section->_1F0[naviIndex] <= 0.0f) {
				efx::TNaviEffect* naviEffect = navi->m_effectsObj;

				if (naviEffect->isFlag(efx::NAVIFX_Unk32)) {
					naviEffect->m_flags = naviEffect->_04;
					naviEffect->resetFlag(efx::NAVIFX_Unk32);
				}

				bool inWater = naviEffect->isFlag(efx::NAVIFX_Unk1);
				if (naviEffect->isFlag(efx::NAVIFX_Unk1)) { // in water?
					naviEffect->setFlag(efx::NAVIFX_Unk1);
					naviEffect->updateHamon_();

					if (!(inWater)) { // what is bro doing
						efx::createSimpleDive(naviEffect->m_hamonPosition);
					}
				}

				if (naviEffect->isFlag(efx::NAVIFX_Unk2)) {
					naviEffect->createLight();
				}
			}

			pikiMgr->setVsXlu(1 - naviIndex, false);

		} else {
			pikiMgr->setVsXlu(1 - naviIndex, true);
		}
	}

	inline void setFlag(u32 flag) { m_flags.typeView |= flag; }

	inline void resetFlag(u32 flag) { m_flags.typeView &= ~flag; }

	inline bool isFlag(u32 flag) { return m_flags.typeView & flag; }

	inline void setLoseCause(int player, u32 flag) { m_loseCauses[player].typeView |= flag; }

	inline bool isLoseCause(int player, u32 flag) { return m_loseCauses[player].typeView & flag; }

	inline u8 getLoseCauses(int player) { return m_loseCauses[player].typeView; }

	inline void setLoseCause(BitFlag<u8>& player, u32 flag) { player.typeView |= flag; }

	inline bool isLoseMarble(bool& redMarble, bool& blueMarble)
	{
		bool moviePlayerActive = moviePlayer->m_flags & MoviePlayer::IS_ACTIVE;

		redMarble  = false;
		blueMarble = false;

		if (!moviePlayerActive && isLoseCause(VSPLAYER_Blue, VSLOSE_Marble)) {
			redMarble = true;
		}

		if (!moviePlayerActive && isLoseCause(VSPLAYER_Red, VSLOSE_Marble)) {
			blueMarble = true;
		}
	}

	// _00     = VTBL
	// _00-_0C = State
	u32 _0C;                     // _0C
	Controller* m_controller;    // _10
	BitFlag<u16> m_flags;        // _14
	u8 _16;                      // _16
	f32 m_timer;                 // _18
	f32 m_floorExtendTimer;      // _1C
	f32 m_displayTime;           // _20
	bool m_hasKeyDemoPlayed;     // _24
	BitFlag<u8> m_loseCauses[2]; // _25
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
	    , _04(0)
	    , _08(false)
	{
	}

	inline LoadArg(u32 a, int b, bool c)
	    : _00(a)
	    , _04(b)
	    , _08(c)
	{
	}

	u32 _00;  // _00, unknown
	int _04;  // _04, unknown
	bool _08; // _08
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
	f32 _0C;                                       // _0C
	f32 _14;                                       // _10
	Controller* m_controller;                      // _14
	VsGameSection* m_section;                      // _18
	bool _1C;                                      // _1C
	u32 _20;                                       // _20
	int _24;                                       // _24
	bool _28;                                      // _28
	Delegate<Game::VsGame::LoadState>* m_delegate; // _2C
	DvdThreadCommand m_dvdThreadCommand;           // _30
	bool _9C;                                      // _9c
	f32 _A0;                                       // _A0
};

struct ResultArg : public StateArg {
	BitFlag<u8> m_endFlag; // _00, 0 if extinction/captain down/give up, 1 if normal end
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

	inline bool isNormalEnd() { return m_endFlags.typeView & 1; }

	// _00     = VTBL
	// _00-_0C = State
	f32 _0C;                                         // _0C
	Controller* m_player1Controller;                 // _10
	Controller* m_player2Controller;                 // _14
	u8 m_resultStage;                                // _18
	JKRExpHeap* m_expHeap;                           // _1C
	JKRHeap* m_heap;                                 // _20
	Delegate<Game::VsGame::ResultState>* m_delegate; // _24
	int m_pikminLeft;                                // _28
	int _2C;                                         // _2C
	int m_pokoTimeScore;                             // _30
	BitFlag<u8> m_endFlags;                          // _34, 0 if pikmin extinction/captain down/given up
	Challenge2D_ResultInfo* m_resultInfo;            // _38
};

struct TitleArg : public StateArg {
	u8 _00; // _00, unknown
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

	inline int getVsStageNum() { return m_section->m_VsStageList->m_stageData.getChildCount(); }

	// _00     = VTBL
	// _00-_0C = State
	f32 _0C;                                        // _0C
	u8 m_titleStage;                                // _10
	JKRExpHeap* m_expHeap;                          // _14
	JKRHeap* m_heap;                                // _18
	Delegate<Game::VsGame::TitleState>* m_delegate; // _1C
	int _20;                                        // _20
	int m_caveInfoType;                             // _24
	int m_stageNum;                                 // _28
	int _2C;                                        // _2C
	Controller* m_player1Controller;                // _2C
	Controller* m_player2Controller;                // _30
	VsGameSection* m_section;                       // _38
	Challenge2D_TitleInfo* m_challengeTitleInfo;    // _3C
	Vs2D_TitleInfo* m_vsTitleInfo;                  // _40
};
/////////////////////////////////////////////////////////////////
} // namespace VsGame
} // namespace Game

#endif
