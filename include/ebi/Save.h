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

enum StateID { Standby, DoYouSave, DoYouContinue, MountCheck, GetPlayerHeader, CheckBeforeSave, NowSave, AfterSave, CardError, StateCount };

struct FSMStateMachine : public Game::StateMachine<TMgr> {
	virtual void init(TMgr*); // _08

	// _00     = VTBL
	// _00-_1C = Game::StateMachine
};

struct FSMState : public Game::FSMState<TMgr> {
	inline FSMState(int stateID, char* name)
	    : Game::FSMState<TMgr>(stateID)
	{
		mName = name;
	}

	virtual void init(TMgr* mgr, Game::StateArg* settings); // _08
	virtual void exec(TMgr* mgr);                           // _0C
	virtual void do_init(TMgr*, Game::StateArg*) { }        // _20 (weak)
	virtual void do_exec(TMgr*) { }                         // _24 (weak)

	// _00     = VTBL
	// _00-_0C = Game::FSMState
	char* mName; // _0C
};

struct FSMState_CardRequest : public FSMState {
	inline FSMState_CardRequest(int stateID, char* name)
	    : FSMState(stateID, name)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*);       // _20
	virtual void do_exec(TMgr*);                        // _24
	virtual bool do_cardRequest(TMgr*)      = 0;        // _28
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
	// _00-_10 = FSMState
	int mCardStatus; // _10
	int mState;      // _14
};

struct FSMState_AfterSave : public FSMState {
	inline FSMState_AfterSave()
	    : FSMState(AfterSave, "AfterSave")
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct CardErrorArg : public Game::StateArg {
	CardErrorArg(int id) { mStartType = CardError::TMgr::enumStart(id); }

	CardError::TMgr::enumStart mStartType; // _00
};

struct FSMState_CardError : public FSMState {
	inline FSMState_CardError()
	    : FSMState(CardError, "CardError")
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMState_DoYouContinue : public FSMState {
	inline FSMState_DoYouContinue()
	    : FSMState(DoYouContinue, "DoYouContinue")
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMState_DoYouSave : public FSMState {
	inline FSMState_DoYouSave()
	    : FSMState(DoYouSave, "DoYouSave")
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct NowSaveArg : public Game::StateArg {
	NowSaveArg(int id) { mMesgType = id; }
	bool mMesgType; // _00
};

struct FSMState_NowSave : public FSMState {
	inline FSMState_NowSave()
	    : FSMState(NowSave, "NowSave")
	{
		mState = 0;
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
	int mState;
	int mCardStatus;    // _14
	bool mIsErrorState; // _18
};

struct FSMState_CheckBeforeSave : public FSMState_CardRequest {
	inline FSMState_CheckBeforeSave()
	    : FSMState_CardRequest(CheckBeforeSave, "CheckBeforeSave")
	{
	}

	virtual bool do_cardRequest(TMgr*);      // _28
	virtual void do_transitCardReady(TMgr*); // _2C

	// _00     = VTBL
	// _00-_10 = FSMState_CardRequest
};

struct FSMState_GetPlayerHeader : public FSMState_CardRequest {
	inline FSMState_GetPlayerHeader()
	    : FSMState_CardRequest(GetPlayerHeader, "GetPlayerHeader")
	{
	}

	virtual bool do_cardRequest(TMgr*);              // _28
	virtual void do_transitCardReady(TMgr*);         // _2C
	virtual void do_transitCardSerialNoError(TMgr*); // _54

	// _00     = VTBL
	// _00-_10 = FSMState_CardRequest
};

struct FSMState_MountCheck : public FSMState_CardRequest {
	inline FSMState_MountCheck()
	    : FSMState_CardRequest(MountCheck, "MountCheck")
	{
	}

	virtual bool do_cardRequest(TMgr*);      // _28
	virtual void do_transitCardReady(TMgr*); // _2C

	// _00     = VTBL
	// _00-_10 = FSMState_CardRequest
};

struct TMgr : public JKRDisposer {
	typedef FSMState StateType;

	enum enumEnd { End_SaveDone = 0, End_Cancel = 1, End_SelectNoSave = 2, End_ReturnToFS = 3, End_Error = 4 };

	TMgr();

	virtual ~TMgr(); // _08

	static TMgr* createInstance();
	static void deleteInstance();
	static TMgr* getInstance();
	void showInfo();
	void start();
	void forceQuit();
	bool isFinish();
	void goEnd_(enumEnd);
	void update();
	void draw();
	int getStateID();

	static void onDvdErrorOccured();
	static void onDvdErrorRecovered();

	inline void doLoadMenuResource()
	{
		mSaveMenu.loadResource();
		doLoadResource(JKRGetCurrentHeap());
	}

	inline void doLoadResource(JKRHeap* heap)
	{
		mMemCardErrorMgr.mScreen.loadResource(heap);
		static_cast<Game::MemoryCard::Mgr*>(sys->mCardMgr)->loadResource(heap);
	}

	inline void setControllers(Controller* pad)
	{
		mController                          = pad;
		mSaveMenu.mController                = pad;
		mMemCardErrorMgr.mScreen.mController = pad;
	}

	inline void setCurrState(StateType* state) { mCurrentState = state; }
	inline StateType* getCurrState() { return mCurrentState; }

	static TMgr* msInstance;

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	Screen::TSaveMenu mSaveMenu;                      // _18
	CardError::TMgr mMemCardErrorMgr;                 // _100
	u32 mCounter;                                     // _3C8
	u32 mCounterBackup;                               // _3CC
	Controller* mController;                          // _3D0
	Game::MemoryCard::PlayerFileInfo mPlayerFileInfo; // _3D4
	BOOL mIsStoryGameSave;                            // _470
	enumEnd mEndState;                                // _474
	u8 mSaveType;                                     // _478
	bool mIsAutosaveOn;                               // _479
	u8 mDoRetryOnError;                               // _47A
	bool mDVDErrorSuspended;                          // _47B
	FSMStateMachine mStateMachine;                    // _47C
	FSMState* mCurrentState;                          // _498
};
} // namespace Save
} // namespace ebi

#endif
