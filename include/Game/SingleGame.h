#ifndef _GAME_SINGLEGAME_H
#define _GAME_SINGLEGAME_H

#include "DvdThreadCommand.h"
#include "Game/PelletList.h"
#include "Game/PikiContainer.h"
#include "Game/Result.h"
#include "Game/ResultTexMgr.h"
#include "Game/SingleGameSection.h"
#include "Game/StateMachine.h"
#include "GenericObjectMgr.h"
#include "IDelegate.h"
#include "JSystem/JKR/JKRHeap.h"
#include "ObjectMgr.h"

namespace ebi {
namespace FileSelect {
struct TMgr;
} // namespace FileSelect
} // namespace ebi

namespace kh {
namespace Screen {
struct IncP;
struct TotalResultData;
struct WorldMap;
} // namespace Screen
} // namespace kh

namespace Game {
namespace IllustratedBook {
struct Camera;
struct DebugParms;
struct EnemyTexMgr;
struct Parms;
} // namespace IllustratedBook

namespace SingleGame {
/**
 * @fabricated
 */
enum StateID {
	SGS_File = 0,
	SGS_Select,
	SGS_Load,
	SGS_Game,
	SGS_Cave,
	SGS_DayEnd,
	SGS_CaveDayEnd,
	SGS_MainResult,
	SGS_CaveResult,
	SGS_Movie,
	SGS_Zukan,
	SGS_Ending
};

struct FSM : public StateMachine<SingleGameSection> {
	virtual void init(SingleGameSection*);                    // _00
	virtual void transit(SingleGameSection*, int, StateArg*); // _0C

	struct State* getState(int);
};

struct State : public FSMState<SingleGameSection> {
	inline State(int id)
	    : FSMState(id)
	{
	}
	virtual void draw(SingleGameSection*, Graphics&) {};                                          // _18
	virtual void onOrimaDown(SingleGameSection*, int) {};                                         // _1C
	virtual void onMovieStart(SingleGameSection*, MovieConfig*, unsigned long, unsigned long) {}; // _20
	virtual void onMovieDone(SingleGameSection*, MovieConfig*, unsigned long, unsigned long) {};  // _24
	virtual void onMovieCommand(SingleGameSection*, int) {};                                      // _28
	virtual void onHoleIn(SingleGameSection*, ItemCave::Item*) {};                                // _2C
	virtual void onNextFloor(SingleGameSection*, ItemHole::Item*) {};                             // _30
	virtual void onFountainReturn(SingleGameSection*, ItemBigFountain::Item*) {};                 // _34
	virtual void on_section_fadeout(SingleGameSection*) {};                                       // _38
	virtual void on_demo_timer(SingleGameSection*, unsigned long) {};                             // _3C

	State* accountEarnings(SingleGameSection*, PelletCropMemory*, bool);

	u8 _0C[4]; // _0C
};

/**
 * @size{0x14}
 */
struct CaveDayEndState : public State {
	inline CaveDayEndState()
	    : State(SGS_CaveDayEnd)
	{
	}

	virtual void init(SingleGameSection*, StateArg*); // _00
	virtual void exec(SingleGameSection*);            // _04
	virtual void cleanup(SingleGameSection*);         // _08
	virtual void draw(SingleGameSection*, Graphics&); // _18

	float _10; // _10
};

/**
 * @size{0x100}
 */
struct CaveResultState : public State {
	CaveResultState();

	virtual void init(SingleGameSection*, StateArg*); // _00
	virtual void exec(SingleGameSection*);            // _04
	virtual void cleanup(SingleGameSection*);         // _08
	virtual void draw(SingleGameSection*, Graphics&); // _18

	void createResultNodes();
	void loadResource();

	// Unused/inlined:
	void initNext(SingleGameSection*);
	unknown open2D(SingleGameSection*);

	s16 _10;                        //_10
	u16 _12;                        //_12
	unknown _14;                    //_14
	float _18;                      //_18
	Controller* _1C;                //_1C
	Game::Result::TNode _20;        //_20
	Game::ResultTexMgr::Mgr* _70;   //_70
	JKRHeap* _74;                   //_74
	u8 _78[4];                      // _78
	Delegate<CaveResultState>* _7C; // _7C
	DvdThreadCommand _80;           // _80
	SingleGameSection* m_section;   // _EC
	JKRHeap* _F0;                   // _F0
	JKRHeap* _F4;                   // _F4
	u8 _F8;                         // _F8
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

	virtual void init(SingleGameSection*, StateArg*);                                          // _00
	virtual void exec(SingleGameSection*);                                                     // _04
	virtual void cleanup(SingleGameSection*);                                                  // _08
	virtual void draw(SingleGameSection*, Graphics&);                                          // _18
	virtual void onOrimaDown(SingleGameSection*, int);                                         // _1C
	virtual void onMovieStart(SingleGameSection*, MovieConfig*, unsigned long, unsigned long); // _20
	virtual void onMovieDone(SingleGameSection*, MovieConfig*, unsigned long, unsigned long);  // _24
	virtual void onMovieCommand(SingleGameSection*, int);                                      // _28
	virtual void onNextFloor(SingleGameSection*, ItemHole::Item*);                             // _30
	virtual void onFountainReturn(SingleGameSection*, ItemBigFountain::Item*);                 // _34
	virtual void on_section_fadeout(SingleGameSection*);                                       // _38

	void check_SMenu(SingleGameSection*);

	// Unused/inlined:
	unknown gameStart(SingleGameSection*);

	u8 _10; // _10
	u8 _11; // _11
	u32 : 0;
	u8 _14[4]; // _14
	u8 _18;    // _18
};

/**
 * @size{0x20}
 */
struct DayEndState : public State {
	inline DayEndState()
	    : State(SGS_DayEnd)
	    , _18()
	{
	}

	virtual void init(SingleGameSection*, StateArg*);                                          // _00
	virtual void exec(SingleGameSection*);                                                     // _04
	virtual void cleanup(SingleGameSection*);                                                  // _08
	virtual void draw(SingleGameSection*, Graphics&);                                          // _18
	virtual void onMovieStart(SingleGameSection*, MovieConfig*, unsigned long, unsigned long); // _20
	virtual void onMovieDone(SingleGameSection*, MovieConfig*, unsigned long, unsigned long);  // _24
	virtual void onMovieCommand(SingleGameSection*, int);                                      // _28

	u16 _10;           // _10
	s16 _12;           // _12
	float _14;         // _14
	PikiContainer _18; // _18
};

/**
 * @size{0x30}
 */
struct EndingState : public State {
	EndingState();

	virtual void init(SingleGameSection*, StateArg*); // _00
	virtual void exec(SingleGameSection*);            // _04
	virtual void cleanup(SingleGameSection*);         // _08
	virtual void draw(SingleGameSection*, Graphics&); // _18
	virtual void do_dvdload();                        // _40

	void dvdload();

	// Unused/inlined:
	void initNext(SingleGameSection*);

	u8 _10;
	u8 _11;
	JKRHeap* _14;
	JKRHeap* _18;
	struct THPPlayer* _1C;
	u8 _20;
	Delegate<EndingState>* _24;
	Controller* _28;
	kh::Screen::TotalResultData** _2C;
};

/**
 * @size{0x38}
 */
struct FileState : public State {
	FileState();

	virtual void init(SingleGameSection*, StateArg*); // _00
	virtual void exec(SingleGameSection*);            // _04
	virtual void cleanup(SingleGameSection*);         // _08
	virtual void draw(SingleGameSection*, Graphics&); // _18

	void dvdload();
	void startGame(SingleGameSection*);

	// Unused/inlined:
	void first_init(SingleGameSection*);

	Controller* _14;          // _14
	Delegate<FileState>* _18; // _18
	JKRExpHeap* _1C;          // _1C
	JKRHeap* _20;             // _20
	u8 _24;                   // _24
	u32 : 0;
	u8 _28[4];                           // _28
	struct ebi::FileSelect::TMgr* m_mgr; // _2C
	u8 _30[4];                           // _30
	Controller* _34;                     // _34
};

/**
 * @size{0x24}
 */
struct GameState : public State {
	/**
	 * @fabricated
	 */
	enum RepayDemoState { RDS_0 = 0, RRD_1, RDS_2, RDS_3, RDS_4 };

	inline GameState()
	    : State(SGS_Game)
	{
	}

	virtual void init(SingleGameSection*, StateArg*);                                          // _00
	virtual void exec(SingleGameSection*);                                                     // _04
	virtual void cleanup(SingleGameSection*);                                                  // _08
	virtual void draw(SingleGameSection*, Graphics&);                                          // _18
	virtual void onOrimaDown(SingleGameSection*, int);                                         // _1C
	virtual void onMovieStart(SingleGameSection*, MovieConfig*, unsigned long, unsigned long); // _20
	virtual void onMovieDone(SingleGameSection*, MovieConfig*, unsigned long, unsigned long);  // _24
	virtual void onMovieCommand(SingleGameSection*, int);                                      // _28
	virtual void onHoleIn(SingleGameSection*, ItemCave::Item*);                                // _2C
	virtual void on_section_fadeout(SingleGameSection*);                                       // _38
	virtual void on_demo_timer(SingleGameSection*, unsigned long);                             // _3C

	bool check_DemoInout(SingleGameSection*);
	bool needRepayDemo();
	void startRepayDemo();
	RepayDemoState updateRepayDemo();

	// Unused/inlined:
	void drawRepayDemo(Graphics&);
	unknown gameStart(SingleGameSection*);

	u8 _10;    // _10
	u8 _11;    // _11
	float _14; // _14
	u8 _18;    // _18
	u8 _19;    // _19
	u32 : 0;
	u8 _1C[4]; // _1C
	u8 _20;    // _20
};

/**
 * @size{0x2C}
 */
struct LoadState : public State {
	/**
	 * @fabricated
	 */
	struct Arg : StateArg {
		u8 _00;  // _00
		u8 _01;  // _01
		u8 _02;  // _02
		u16 _04; // _04
	};

	inline LoadState()
	    : State(SGS_Load)
	{
	}

	virtual void init(SingleGameSection*, StateArg*); // _00
	virtual void exec(SingleGameSection*);            // _04
	virtual void cleanup(SingleGameSection*);         // _08
	virtual void draw(SingleGameSection*, Graphics&); // _18

	// Unused/inlined:
	void initNext(SingleGameSection*);

	unknown _10; // _10
	u8 _14;      // _14
	u8 _15;      // _15
	u32 : 0;
	u8 _18[0xC]; // _18
	u16 _24;     // _24
	u8 _26;      // _26
	u8 _27;      // _27
	u8 _28;      // _28
	u8 _29;      // _29
};

/**
 * @size{0x140}
 */
struct MainResultState : public State {
	MainResultState();

	virtual void init(SingleGameSection*, StateArg*);                                         // _00
	virtual void exec(SingleGameSection*);                                                    // _04
	virtual void cleanup(SingleGameSection*);                                                 // _08
	virtual void draw(SingleGameSection*, Graphics&);                                         // _18
	virtual void onMovieDone(SingleGameSection*, MovieConfig*, unsigned long, unsigned long); // _24

	void beforeSave();
	void createResultNodes();
	void loadResource();

	// Unused/inlined:
	unknown open2D(SingleGameSection*);

	s16 _10;         // _10
	float _14;       // _14
	Controller* _18; // _18
	u8 _1C;          // _1C
	u32 : 0;
	u8 _20[4];                          // _20
	Game::ResultTexMgr::Mgr _24;        // _24
	u8 _64[4];                          // _64
	Game::Result::TNode _68;            // _68
	kh::Screen::IncP* _B8;              // _B8
	u8 _BC[4];                          // _BC
	JKRHeap* _C0;                       // _C0
	TObjectNode<GenericObjectMgr>* _C4; // _C4
	Delegate<MainResultState>* _C8;     // _C8
	DvdThreadCommand _CC;               // _CC
	SingleGameSection* _138;            // _138
	Delegate<MainResultState>* _13C;    // _13C
};

/**
 * @size{0x28}
 */
struct MovieState : public State {
	MovieState();

	virtual void init(SingleGameSection*, StateArg*); // _00
	virtual void exec(SingleGameSection*);            // _04
	virtual void cleanup(SingleGameSection*);         // _08
	virtual void draw(SingleGameSection*, Graphics&); // _18

	unknown _10;           // _10
	Controller* _14;       // _14
	JKRHeap* _18;          // _18
	JKRHeap* _1C;          // _1C
	struct THPPlayer* _20; // _20
	bool _24;              // _24
};

/**
 * @size{0x30}
 */
struct SelectState : public State {
	SelectState();

	virtual void init(SingleGameSection*, StateArg*); // _00
	virtual void exec(SingleGameSection*);            // _04
	virtual void cleanup(SingleGameSection*);         // _08
	virtual void draw(SingleGameSection*, Graphics&); // _18

	void dvdload();
	void initNext(SingleGameSection*);

	kh::Screen::WorldMap* _10;                // _10
	Delegate<SelectState>* m_dvdLoadCallback; // _14
	JKRExpHeap* _18;                          // _18
	JKRHeap* _1C;                             // _1C
	Controller* _20;                          // _20
	int _24;                                  // _24
	int _28;                                  // _28
	bool m_anyFirstTimes;                     // _2C
};

/**
 * @size{0x118}
 */
struct ZukanState : public State {
	/**
	 * @real
	 */
	enum CMode { ZSCM_0 = 0, ZSCM_1, ZSCM_2, ZSCM_3, ZSCM_4, ZSCM_5, ZSCM_6, ZSCM_7, ZSCM_8 };

	/**
	 * @fabricated
	 */
	struct Arg {
		u8 _00;            // _00
		int m_courseIndex; // _04
	};

	ZukanState();

	virtual void init(SingleGameSection*, StateArg*); // _00
	virtual void exec(SingleGameSection*);            // _04
	virtual void cleanup(SingleGameSection*);         // _08
	virtual void draw(SingleGameSection*, Graphics&); // _18

	void clearHeapB_common();
	void clearHeapB_pellet();
	void clearHeapB_teki();
	unknown clearHeaps();
	PelletList::cKind convertPelletID(int&, int);
	void createEnemy(int);
	void createPellet(int);
	void createTeki(int);
	void drawGradationEffect(SingleGameSection*, Graphics&);
	void drawLightEffect(SingleGameSection*, Graphics&);
	unknown dvdloadA();
	void dvdloadB_pellet();
	void dvdloadB_teki();
	void execChangePellet(SingleGameSection*);
	void execChangeTeki(SingleGameSection*);
	void execModeChange(SingleGameSection*, CMode);
	unknown execPellet(SingleGameSection*);
	unknown execTeki(SingleGameSection*);
	PelletConfig* getCurrentPelletConfig(int);
	int getMaxPelletID();
	void setMode(CMode);
	void startWipe(float);

	// Unused/inlined:
	unknown startTekiMode(bool);
	unknown startPelletMode(bool);
	void createItem(int);
	unknown debugDraw(Graphics&);
	void dvdloadB_common();

	IDelegate* _10;                          // _10
	IDelegate* _14;                          // _14
	IDelegate* _18;                          // _18
	DvdThreadCommand _1C;                    // _1C
	u8 _88;                                  // _88
	Game::CourseInfo* _8C;                   // _8C
	Controller* _90;                         // _90
	BaseGameSection* _94;                    // _94
	Game::IllustratedBook::Camera* _98;      // _98
	CMode _9C;                               // _9C
	int m_tekiInfoIndex;                     // _A0
	Game::Creature* _A4;                     // _A4
	int _A8;                                 // _A8
	Game::Creature* _AC;                     // _AC
	JUTTexture* _B0;                         // _B0
	Rectf _B4;                               // _B4
	u8 _C4[4];                               // _C4
	float _C8;                               // _C8
	JUTTexture* _CC;                         // _CC
	u8 _D0[4];                               // _D0
	JKRExpHeap* _D4;                         // _D4
	JKRHeap* _D8;                            // _D8
	JKRExpHeap* _DC;                         // _DC
	JKRHeap* _E0;                            // _E0
	u32 _E4;                                 // _E4
	Game::ResultTexMgr::Mgr* _E8;            // _E8
	Game::IllustratedBook::EnemyTexMgr* _EC; // _EC
	JKRExpHeap* _F0;                         // _F0
	float _F4;                               // _F4
	float _F8;                               // _F8
	unknown _FC;                             // _FC
	Game::IllustratedBook::Parms* _100;      // _100
	Game::IllustratedBook::DebugParms* _104; // _104
	float _108;                              // _108
	unknown _10C;                            // _10C
	int _110;                                // _110
	int _114;                                // _114
};
} // namespace SingleGame
} // namespace Game

#endif
