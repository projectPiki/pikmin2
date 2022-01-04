#ifndef _EBI_SCREEN_TOPTION_H
#define _EBI_SCREEN_TOPTION_H

#include "ebi/E2DCallBack.h"
#include "ebi/Screen/TScreenBase.h"
#include "ebi/Utility.h"
#include "Game/StateMachine.h"
#include "P2DScreen.h"
#include "types.h"

struct Controller;

namespace ebi {
namespace Option {
struct TMgr;
} // namespace Option
namespace Save {
struct TMgr;
} // namespace Save
} // namespace ebi

namespace ebi {
/*
 * Option Screens
 */
namespace Screen {
struct TOptionParameter {
	void initParamForTest();
	void loadRam();
	void saveRam();

	bool _00;           // _00
	bool _01;           // _01
	long m_soundMode;   // _04
	long m_bgmVolume;   // _08
	long m_seVolume;    // _0C
	bool m_isDeflicker; // _10
};

struct TOption : public TScreenBase {
	TOption();
	~TOption();

	virtual void doSetArchive(JKRArchive*); // _1C
	virtual void doOpenScreen(ArgOpen*);    // _20
	virtual void doCloseScreen(ArgClose*);  // _24
	virtual void doInitWaitState();         // _2C
	virtual bool doUpdateStateOpen();       // _30
	virtual bool doUpdateStateWait();       // _34
	virtual bool doUpdateStateClose();      // _38
	virtual void doDraw();                  // _3C
	virtual char* getName();                // _40

	void initScreen_() const;
	void setOptionParamToScreen_();
	void loadResource();
	void setController(Controller*);

	Controller* m_controller;                    // _00C
	u8 _010;                                     // _010
	EUTPadInterface_countNum m_padInterfaces[4]; // _014
	int _0C4;                                    // _0C4
	TOptionParameter _0C8;                       // _0C8
	TOptionParameter _0DC;                       // _0DC
	u8 _0F0;                                     // _0F0
	u8 _0F1;                                     // _0F1
	u8 _0F2;                                     // _0F2
	u8 _0F3;                                     // _0F3
	u8 _0F4;                                     // _0F4
	int _0F8;                                    // _0F8
	u32 _0FC;                                    // _0FC
	u32 _100;                                    // _100
	long _104;                                   // _104
	int _108;                                    // _108
	P2DScreen::Mgr_tuning* _10C;                 // _10C
	J2DTextBox* _110;                            // _110
	J2DTextBox* _114;                            // _114
	J2DTextBox* _118;                            // _118
	J2DTextBox* _11C;                            // _11C
	J2DTextBox* _120;                            // _120
	J2DTextBox* _124;                            // _124
	J2DTextBox* _128;                            // _128
	J2DPane* _12C[10];                           // _12C
	J2DPane* _154[10];                           // _154
	J2DPane* _17C;                               // _17C
	J2DPane* _180[10];                           // _180
	J2DPane* _1A8;                               // _1A8
	J2DPane* _1AC;                               // _1AC
	J2DPane* _1B0;                               // _1B0
	J2DPane* _1B4;                               // _1B4
	J2DPane* _1B8;                               // _1B8
	J2DPane* _1BC;                               // _1BC
	J2DPane* _1C0;                               // _1C0
	E2DFullFontColor _1C4;                       // _1C4
	E2DFullFontColor _1D4;                       // _1D4
	// JUtility::TColor _1C4;                       // _1C4
	// JUtility::TColor _1C8;                       // _1C8
	// JUtility::TColor m_white1;                    // _1CC
	// JUtility::TColor m_black1;                    // _1D0
	// JUtility::TColor _1D4;                       // _1D4
	// JUtility::TColor _1D8;                       // _1D8
	// JUtility::TColor m_white2;                    // _1DC
	// JUtility::TColor m_black2;                    // _1E0
	E2DCallBack_AnmBase _1E4;          // _1E4
	E2DCallBack_CalcAnimation _220;    // _220
	E2DCallBack_BlinkFontColor _240;   // _240
	E2DCallBack_BlinkAlpha _28C;       // _28C
	E2DCallBack_BlinkAlpha _2BC;       // _2BC
	E2DCallBack_Purupuru _2EC[7];      // _2EC
	E2DCallBack_Purupuru _4AC[10];     // _4AC
	E2DCallBack_Purupuru _72C[10];     // _72C
	E2DCallBack_Purupuru _9AC[10];     // _9AC
	E2DCallBack_Purupuru _C2C[10];     // _C2C
	E2DCallBack_WindowCursor _EAC[10]; // __EAC
};
} // namespace Screen

/*
 * ebi::Option::*
 */
namespace Option {
enum StateID {
	Standby = 0,
	LoadOption,
	ScreenOpen,
	ScreenWait,
	ScreenClose,
	SaveMgr,
	WaitCloseForNoCard,
	WorldMapInfoWindow,
	_FORCE_UINT = 0xFFFFFFFF
};
// TODO: Additional state data members, if any.
struct FSMState : public Game::FSMState<TMgr> {
	inline FSMState(int id, const char* name)
	    : Game::FSMState<TMgr>(id)
	    , m_name(name) {};

	virtual void init(TMgr*, Game::StateArg*);    // _00
	virtual void exec(TMgr*);                     // _04
	virtual void do_init(TMgr*, Game::StateArg*); // _18
	virtual void do_exec(TMgr*);                  // _1C

	const char* m_name; // _0C
};

struct FSMState_LoadOption : public ebi::Option::FSMState {
	inline FSMState_LoadOption(int id, const char* name)
	    : FSMState(id, name) {};
	virtual void do_init(TMgr*, Game::StateArg*); // _18
	virtual void do_exec(TMgr*);                  // _1C

	u32 _10;
};

struct FSMState_SaveMgr : public FSMState {
	inline FSMState_SaveMgr(int id, const char* name)
	    : FSMState(id, name) {};
	virtual void do_init(TMgr*, Game::StateArg*); // _18
	virtual void do_exec(TMgr*);                  // _1C
};

struct FSMState_ScreenClose : public FSMState {
	inline FSMState_ScreenClose(int id, const char* name)
	    : FSMState(id, name) {};
	virtual void do_init(TMgr*, Game::StateArg*); // _18
	virtual void do_exec(TMgr*);                  // _1C
};

struct FSMState_ScreenOpen : public FSMState {
	inline FSMState_ScreenOpen(int id, const char* name)
	    : FSMState(id, name) {};
	virtual void do_init(TMgr*, Game::StateArg*); // _18
	virtual void do_exec(TMgr*);                  // _1C
};

struct FSMState_ScreenWait : public FSMState {
	inline FSMState_ScreenWait(int id, const char* name)
	    : FSMState(id, name) {};
	virtual void do_init(TMgr*, Game::StateArg*); // _18
	virtual void do_exec(TMgr*);                  // _1C
};

struct FSMState_WaitCloseForNoCard : public FSMState {
	inline FSMState_WaitCloseForNoCard(int id, const char* name)
	    : FSMState(id, name)
	    , _10(0)
	    , _14(0) {};
	virtual void do_init(TMgr*, Game::StateArg*); // _18
	virtual void do_exec(TMgr*);                  // _1C

	u32 _10; // _10
	u32 _14; // _14
};

struct FSMState_WorldMapInfoWindow : public FSMState {
	inline FSMState_WorldMapInfoWindow(int id, const char* name)
	    : FSMState(id, name) {};
	virtual void do_init(TMgr*, Game::StateArg*); // _18
	virtual void do_exec(TMgr*);                  // _1C
};

struct FSMStateMachine : public Game::StateMachine<TMgr> {
	virtual void init(TMgr*); // _00
};

struct TMgr {

	TMgr();
	~TMgr();

	void draw();
	int getStateID();
	void goEnd_();
	bool isFinish();
	void loadResource();
	void setController(Controller*);
	void start();
	void update();

	void forceQuit();
	void showInfo();

	Screen::TOption m_optionScreen; // _000
	ebi::Save::TMgr* m_saveMgr;     // _F18
	Controller* m_controller;       // _F1C
	u8 _F20;                        // _F20
	FSMStateMachine m_stateMachine; // _F24
	u8 _F28;                        // _F28
};
} // namespace Option
} // namespace ebi

#endif
