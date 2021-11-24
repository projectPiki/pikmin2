#ifndef _EBI_OPTION_H
#define _EBI_OPTION_H

#include "types.h"
#include "ebi/Screen/TScreenBase.h"
#include "Game/StateMachine.h"

struct Controller;

namespace ebi {
namespace Option {
	struct TMgr;
} // namespace Option
namespace Save {
	struct TMgr;
} // namespace Save
} // namespace ebi

/*
 * FSM template specializations
 */
namespace Game {
template <> struct FSMState<ebi::Option::TMgr> {
	virtual void init(ebi::Option::TMgr*, StateArg*);    // _00
	virtual void exec(ebi::Option::TMgr*);               // _04
	virtual void cleanup(ebi::Option::TMgr*);            // _08
	virtual void resume(ebi::Option::TMgr*);             // _0C
	virtual void restart(ebi::Option::TMgr*);            // _10
	virtual void transit(ebi::Option::TMgr*, StateArg*); // _14
};

template <> struct StateMachine<ebi::Option::TMgr> {
	virtual void init(ebi::Option::TMgr*);                    // _00
	virtual u32 start(ebi::Option::TMgr*, int, StateArg*);    // _04
	virtual void exec(ebi::Option::TMgr*);                    // _08
	virtual void transit(ebi::Option::TMgr*, int, StateArg*); // _0C
};
} // namespace Game

namespace ebi {
/*
 * Option Screens
 */
namespace Screen {
	struct TOptionParameter {
		void initParamForTest();
		void loadRam();
		void saveRam();

		u8 _00;   // _00
		u8 _01;   // _01
		long _04; // _04
		long _08; // _08
		long _0C; // _0C
		u8 _10;   // _10
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

		void initScreen() const;
		void setOptionParamToScreen() const;
		void loadResource();
		void setController(Controller*);

		// TODO: Data members.
		u8 _0C[0xF0C];
	};
} // namespace Screen

/*
 * ebi::Option::*
 */
namespace Option {
	// TODO: Additional state data members, if any.
	struct FSMState : public Game::FSMState<TMgr> {
		virtual void init(TMgr*, Game::StateArg*);    // _00
		virtual void exec(TMgr*);                     // _04
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMState_LoadOption : public FSMState {
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMState_SaveMgr : public FSMState {
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMState_ScreenClose : public FSMState {
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMState_ScreenOpen : public FSMState {
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMState_ScreenWait : public FSMState {
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMState_WaitCloseForNoCard : public FSMState {
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMState_WorldMapInfoWindow : public FSMState {
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMStateMachine : public Game::StateMachine<TMgr> {
		virtual void init(TMgr*); // _00
	};

	struct TMgr {

		TMgr();
		~TMgr();

		void draw();
		int getStateID();
		void goEnd() const;
		bool isFinish();
		void loadResource();
		void setController(Controller*);
		void start();
		void update();

		Screen::TOption m_optionScreen; // _000
		ebi::Save::TMgr* m_saveTMgr;    // _F18
		Controller* m_controller;       // _F1C
		u8 _F20;                        // _F20
		FSMStateMachine m_stateMachine; // _F24
	};
} // namespace Option
} // namespace ebi

#endif
