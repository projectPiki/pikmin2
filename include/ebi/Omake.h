#ifndef _EBI_OMAKE_H
#define _EBI_OMAKE_H

#include "types.h"
#include "ebi/Screen/TScreenBase.h"
#include "Game/StateMachine.h"

struct Controller;

namespace ebi {
namespace Omake {
	struct TMgr;
} // namespace Omake
} // namespace ebi

/*
 * FSM template specializations
 */
namespace Game {
template <> struct FSMState<ebi::Omake::TMgr> {
	virtual void init(ebi::Omake::TMgr*, StateArg*);    // _00
	virtual void exec(ebi::Omake::TMgr*);               // _04
	virtual void cleanup(ebi::Omake::TMgr*);            // _08
	virtual void resume(ebi::Omake::TMgr*);             // _0C
	virtual void restart(ebi::Omake::TMgr*);            // _10
	virtual void transit(ebi::Omake::TMgr*, StateArg*); // _14
};

template <> struct StateMachine<ebi::Omake::TMgr> {
	virtual void init(ebi::Omake::TMgr*);                    // _00
	virtual u32 start(ebi::Omake::TMgr*, int, StateArg*);    // _04
	virtual void exec(ebi::Omake::TMgr*);                    // _08
	virtual void transit(ebi::Omake::TMgr*, int, StateArg*); // _0C
};
} // namespace Game

namespace ebi {
/*
 * Omake Screens
 */
namespace Screen {
	struct ArgOpenOmake : public ArgOpen {
		virtual char* getName();
	};

	struct TOmake : public TScreenBase {
		TOmake();
		~TOmake();

		virtual void doSetArchive(JKRArchive*); // _1C
		virtual void doOpenScreen(ArgOpen*);    // _20
		virtual void doCloseScreen(ArgClose*);  // _24
		virtual void doInitWaitState();         // _2C
		virtual bool doUpdateStateOpen();       // _30
		virtual bool doUpdateStateWait();       // _34
		virtual bool doUpdateStateClose();      // _38
		virtual void doDraw();                  // _3C
		virtual char* getName();                // _40

		void hidePanes() const;
		void openFromCardE() const;
		void openFromMovie() const;
		void setController(Controller*);
		void showPanes() const;

		// TODO: Data members.
		u8 _0C[0x454];
	};

	struct TOmakeCardE : public TScreenBase {
		TOmakeCardE();
		~TOmakeCardE();

		virtual void doSetArchive(JKRArchive*); // _1C
		virtual void doOpenScreen(ArgOpen*);    // _20
		virtual void doCloseScreen(ArgClose*);  // _24
		virtual void doInitWaitState();         // _2C
		virtual bool doUpdateStateOpen();       // _30
		virtual bool doUpdateStateWait();       // _34
		virtual bool doUpdateStateClose();      // _38
		virtual void doDraw();                  // _3C
		virtual char* getName();                // _40
		// virtual void _44(); // _44

		// TODO: Data members.
		u8 _0C[0x164];
	};

	struct TOmakeGame : public TScreenBase {
		TOmakeGame();
		~TOmakeGame();

		virtual void doSetArchive(JKRArchive*); // _1C
		virtual void doOpenScreen(ArgOpen*);    // _20
		virtual void doCloseScreen(ArgClose*);  // _24
		virtual bool doUpdateStateOpen();       // _30
		virtual bool doUpdateStateWait();       // _34
		virtual bool doUpdateStateClose();      // _38
		virtual void doDraw();                  // _3C
		virtual char* getName();                // _40
		// virtual void _44(); // _44

		bool isDelegateControl();
		bool openMsg(long);
		void setController(Controller*);
		void setSelfControl();

		// TODO: Data members.
		u8 _0C[0x2A8];
	};
} // namespace Screen

/*
 * ebi::Omake::*
 */
namespace Omake {
	// TODO: Additional state data members, if any.
	struct FSMState : public Game::FSMState<TMgr> {
		virtual void init(TMgr*, Game::StateArg*);    // _00
		virtual void exec(TMgr*);                     // _04
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMState_CardEScreen : public FSMState {
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMState_OmakeScreen : public FSMState {
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMState_SelectGame : public FSMState {
		virtual void do_exec(TMgr*);                  // _18
		virtual void do_init(TMgr*, Game::StateArg*); // _1C
	};

	struct FSMStateMachine : public Game::StateMachine<TMgr> {
		virtual void init(TMgr*); // _00
	};

	struct TMgr {
		void draw();
		int getMovieID();
		int getStateID();
		void goEnd() const;
		bool isFinish();
		bool isMovieState();
		void loadResource();
		void newCardEMgrAndTask();
		void restartFromMovieState();
		void start();
		void update();

		Controller* m_controller;              // _000
		u8 _004[4];                            // _004
		ebi::Screen::TOmake m_omake;           // _008
		ebi::Screen::TOmakeCardE m_omakeCardE; // _468
		u8 _5D8[4];                            // _5D8
		ebi::Screen::TOmakeGame m_omakeGame;   // _5DC
		u8 _890;                               // _890
		u32 _894;                              // _894
		u32 _898;                              // _898
		FSMStateMachine m_stateMachine;        // _89C
		u32 _8B8;
	};
} // namespace Omake
} // namespace ebi

#endif
