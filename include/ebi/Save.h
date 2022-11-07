#ifndef _EBI_SAVE_H
#define _EBI_SAVE_H

#include "types.h"
#include "ebi/Screen/TScreenBase.h"
#include "ebi/Screen/TSaveMenu.h"
#include "ebi/CardError.h"
#include "Game/StateMachine.h"
#include "Game/MemoryCard/PlayerFileInfo.h"
#include "Game/MemoryCard/Mgr.h"
#include "System.h"

struct Controller;

namespace ebi {
namespace Save {
struct TMgr;

struct FSMStateMachine : public Game::StateMachine<TMgr> {
	virtual void init(TMgr*); // _08

	// _00     = VTBL
	// _00-_1C = Game::StateMachine
};

struct FSMState : public Game::FSMState<TMgr> {
	inline FSMState(int stateID); // likely

	virtual void init(TMgr*, Game::StateArg*);    // _08 (weak)
	virtual void exec(TMgr*);                     // _0C (weak)
	virtual void do_init(TMgr*, Game::StateArg*); // _20 (weak)
	virtual void do_exec(TMgr*);                  // _24 (weak)

	// _00     = VTBL
	// _00-_0C = Game::FSMState
};

struct FSMState_AfterSave : public FSMState {
	inline FSMState_AfterSave(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState_CardError : public FSMState {
	inline FSMState_CardError(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState_DoYouContinue : public FSMState {
	inline FSMState_DoYouContinue(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState_DoYouSave : public FSMState {
	inline FSMState_DoYouSave(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState_NowSave : public FSMState {
	inline FSMState_NowSave(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState_CardRequest : public FSMState {
	inline FSMState_CardRequest(); // likely

	virtual void do_init(TMgr*, Game::StateArg*);       // _20
	virtual void do_exec(TMgr*);                        // _24
	virtual void do_cardRequest(TMgr*)      = 0;        // _28
	virtual void do_transitCardReady(TMgr*) = 0;        // _2C
	virtual void do_transitCardNoCard(TMgr*);           // _30
	virtual void do_transitCardIOError(TMgr*);          // _34
	virtual void do_transitCardWrongDevice(TMgr*);      // _38
	virtual void do_transitCardWrongSector(TMgr*);      // _3C
	virtual void do_transitCardBroken(TMgr*);           // _40
	virtual void do_transitCardEncoding(TMgr*);         // _44
	virtual void do_transitCardNoFileSpace(TMgr*);      // _48
	virtual void do_transitCardNoFileEntry(TMgr*);      // _4C
	virtual void do_transitCardFileOpenError(TMgr*);    // _50
	virtual void do_transitCardSerialNoError(TMgr*);    // _54
	virtual void do_transitCardPlayerDataBroken(TMgr*); // _58

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState_CheckBeforeSave : public FSMState_CardRequest {
	inline FSMState_CheckBeforeSave(); // likely

	virtual void do_cardRequest(TMgr*);      // _28
	virtual void do_transitCardReady(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_CardRequest
};

struct FSMState_GetPlayerHeader : public FSMState_CardRequest {
	inline FSMState_GetPlayerHeader(); // likely

	virtual void do_cardRequest(TMgr*);              // _28
	virtual void do_transitCardReady(TMgr*);         // _2C
	virtual void do_transitCardSerialNoError(TMgr*); // _54

	// _00     = VTBL
	// _00-_0C = FSMState_CardRequest
};

struct FSMState_MountCheck : public FSMState_CardRequest {
	inline FSMState_MountCheck(); // likely

	virtual void do_cardRequest(TMgr*);      // _28
	virtual void do_transitCardReady(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_CardRequest
};

struct TMgr : public JKRDisposer {
	enum enumEnd {

	};

	TMgr();

	virtual ~TMgr(); // _08

	static TMgr* createInstance();
	void onDvdErrorOccured();
	void onDvdErrorRecovered();
	void start();
	void forceQuit();
	void isFinish();
	void goEnd_(enumEnd);
	void update();
	void draw();
	void getStateID();

	inline void doLoadResource(JKRHeap* heap)
	{
		m_memCardErrorMgr.loadResource(heap);
		static_cast<Game::MemoryCard::Mgr*>(sys->m_cardMgr)->loadResource(heap);
	}

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	Screen::TSaveMenu m_saveMenu;                      // _18
	CardError::TMgr m_memCardErrorMgr;                 // _100
	u32 _3C8;                                          // _3C8, unknown
	u32 _3CC;                                          // _3CC, unknown
	Controller* m_controller;                          // _3D0
	Game::MemoryCard::PlayerFileInfo m_playerFileInfo; // _3D4
	int _470;                                          // _470
	int _474;                                          // _474
	u8 _478;                                           // _478
	bool m_isAutosaveOn;                               // _479
	u8 _47A;                                           // _47A
	u8 _47B;                                           // _47B
	FSMStateMachine m_stateMachine;                    // _47C
	u8 _498[0x4];                                      // _498, unknown
};
} // namespace Save
} // namespace ebi

#endif
