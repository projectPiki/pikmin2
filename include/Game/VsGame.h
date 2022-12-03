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

struct JUTTexture;
struct LightObj;

namespace Game {
namespace ItemHole {
struct Item;
} // namespace ItemHole

struct MovieConfig;

namespace VsGame {
enum StateID {
	VGS_Title  = 0,
	VGS_Load   = 1,
	VGS_Game   = 2,
	VGS_VS     = 3,
	VGS_Result = 4,
	VGS_StateCount,
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
	void getStageData(int);

	// _00 		= VTBL
	// _00-_18	= CNode
	StageData m_stageData;
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
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

	// _00     = VTBL
	// _00-_0C = State
	u8 _0C[0x1C]; // _0C, unknown
};

struct VSState : public GameState {
	VSState();

	virtual void do_init(VsGameSection*); // _50

	// _00     = VTBL
	// _00-_0C = State
};

struct LoadArg : public StateArg {
	u32 _00;  // _00, unknown
	s32 _04;  // _04, unknown
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
	s32 _24;                                       // _24
	bool _28;                                      // _28
	Delegate<Game::VsGame::LoadState>* m_delegate; // _2C
	DvdThreadCommand m_dvdThreadCommand;           // _30
	bool _9C;                                      // _9c
	f32 _A0;                                       // _A0
};

struct ResultState : public State {
	ResultState();

	virtual void init(VsGameSection*, StateArg*); // _08
	virtual void exec(VsGameSection*);            // _0C
	virtual void cleanup(VsGameSection*);         // _10
	virtual void draw(VsGameSection*, Graphics&); // _20

	void prepareMorimuraInfo(VsGameSection*);
	void dvdload();

	// _00     = VTBL
	// _00-_0C = State
	f32 _0C;                                         // _0C
	Controller* m_player1Controller;                 // _10
	Controller* m_player2Controller;                 // _14
	bool _18;                                        // _18
	JKRExpHeap* m_expHeap;                           // _1C
	JKRHeap* m_heap;                                 // _20
	Delegate<Game::VsGame::ResultState>* m_delegate; // _24
	int _28;                                         // _28
	int _2C;                                         // _2C
	int _30;                                         // _30
	bool _34;                                        // _34
	u32 _38;                                         // _38
};

struct TitleState : public State {
	TitleState();

	virtual void init(VsGameSection*, StateArg*); // _08
	virtual void exec(VsGameSection*);            // _0C
	virtual void cleanup(VsGameSection*);         // _10
	virtual void draw(VsGameSection*, Graphics&); // _20

	void dvdload();
	void execChallenge(VsGameSection*);
	void execVs(VsGameSection*);

	// _00     = VTBL
	// _00-_0C = State
	u8 _0C[0x38]; // _0C, unknown
};
/////////////////////////////////////////////////////////////////
} // namespace VsGame
} // namespace Game

#endif
