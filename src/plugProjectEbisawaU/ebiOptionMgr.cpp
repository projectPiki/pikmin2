#include "PowerPC_EABI_Support/Runtime/runtime.h"
#include "ebi/Option.h"
#include "ebi/Save.h"
#include "ebi/E2DCallBack.h"
#include "Graphics.h"
#include "P2Macros.h"
#include "PSSystem/PSSystemIF.h"
#include "Screen/Game2DMgr.h"
#include "SoundID.h"
#include "System.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("ebiOptionMgr"); }

namespace ebi {
namespace Option {
/*
 * --INFO--
 * Address:	803CE8F8
 * Size:	0002D8
 */
void FSMStateMachine::init(TMgr*)
{
	create(StateNum);
	registerState(new FSMState(Standby, "Standby"));
	registerState(new FSMState_LoadOption(LoadOption, "LoadOption"));
	registerState(new FSMState_ScreenOpen(ScreenOpen, "ScreenOpen"));
	registerState(new FSMState_ScreenWait(ScreenWait, "ScreenWait"));
	registerState(new FSMState_ScreenClose(ScreenClose, "ScreenClose"));
	registerState(new FSMState_SaveMgr(SaveMgr, "SaveMgr"));
	registerState(new FSMState_WaitCloseForNoCard(WaitCloseForNoCard, "WaitCloseForNoCard"));
	registerState(new FSMState_WorldMapInfoWindow(WorldMapInfoWindow, "WorldMapInfoWindow"));
}

/*
 * --INFO--
 * Address:	803CEBD0
 * Size:	00002C
 */
void FSMState::init(TMgr* obj, Game::StateArg* arg) { do_init(obj, arg); }

/*
 * --INFO--
 * Address:	803CEBFC
 * Size:	000004
 */
void FSMState::do_init(TMgr*, Game::StateArg* arg) { }

/*
 * --INFO--
 * Address:	803CEC00
 * Size:	00002C
 */
void FSMState::exec(TMgr* obj) { do_exec(obj); }

/*
 * --INFO--
 * Address:	803CEC2C
 * Size:	000004
 */
void FSMState::do_exec(TMgr*) { }

/*
 * --INFO--
 * Address:	803CEC30
 * Size:	000050
 */
void FSMState_ScreenOpen::do_init(TMgr* obj, Game::StateArg* arg)
{
	obj->mOptionScreen.mOptionParamA.loadRam();
	obj->mOptionScreen.mOptionParamB.loadRam();
	obj->mOptionScreen.openScreen(nullptr);
}

/*
 * --INFO--
 * Address:	803CEC80
 * Size:	000064
 */
void FSMState_ScreenOpen::do_exec(TMgr* obj)
{
	if (obj->mOptionScreen.isWaitScreen()) {
		transit(obj, ScreenWait, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803CED14
 * Size:	00000C
 */
void FSMState_ScreenWait::do_init(TMgr* obj, Game::StateArg* arg) { obj->mOptionScreen.mEnabled = 1; }

/*
 * --INFO--
 * Address:	803CED20
 * Size:	000144
 */
void FSMState_ScreenWait::do_exec(TMgr* mgr)
{
	switch (mgr->mOptionScreen.mExitStatus) {
	case 9:
		mgr->mOptionScreen.mOptionParamA.saveRam();
		break;
	case 8:
		mgr->mOptionScreen.mOptionParamA.saveRam();
		mgr->mOptionScreen.mEnabled = false;
		if (sys->mCardMgr->isSaveValid() && sys->mCardMgr->isCardReady()) {
			transit(mgr, WaitCloseForNoCard, 0);
			return;
		}
		transit(mgr, SaveMgr, 0);
		return;
	case 7:
		mgr->mOptionScreen.mEnabled = false;
		transit(mgr, WorldMapInfoWindow, 0);
		break;
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0xc4(r4)
	cmpwi    r0, 8
	beq      lbl_803CED70
	bge      lbl_803CED64
	cmpwi    r0, 7
	bge      lbl_803CED7C
	cmpwi    r0, 1
	bge      lbl_803CED70
	b        lbl_803CEE48

lbl_803CED64:
	cmpwi    r0, 0xa
	bge      lbl_803CEE48
	b        lbl_803CEE28

lbl_803CED70:
	addi     r3, r30, 0xc8
	bl       saveRam__Q33ebi6Screen16TOptionParameterFv
	b        lbl_803CEE48

lbl_803CED7C:
	addi     r3, r30, 0xc8
	bl       saveRam__Q33ebi6Screen16TOptionParameterFv
	li       r31, 0
	stb      r31, 0x10(r30)
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	lwz      r0, 0xa8(r3)
	cmpwi    r0, 0
	bne      lbl_803CEDB0
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_803CEDB0
	li       r31, 1

lbl_803CEDB0:
	clrlwi.  r0, r31, 0x18
	beq      lbl_803CEDD4
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	bl       getCardStatus__Q34Game10MemoryCard3MgrFv
	cmpwi    r3, 0
	bne      lbl_803CEDD4
	li       r0, 1
	b        lbl_803CEDD8

lbl_803CEDD4:
	li       r0, 0

lbl_803CEDD8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803CEE04
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803CEE48

lbl_803CEE04:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803CEE48

lbl_803CEE28:
	li       r0, 0
	li       r5, 7
	stb      r0, 0x10(r30)
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803CEE48:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CEE64
 * Size:	00003C
 */
void FSMState_ScreenClose::do_init(TMgr* obj, Game::StateArg* arg)
{
	obj->mIsFinished = true;
	obj->mOptionScreen.closeScreen(nullptr);
}

/*
 * --INFO--
 * Address:	803CEEA0
 * Size:	00004C
 */
void FSMState_ScreenClose::do_exec(TMgr* obj)
{
	if (obj->mOptionScreen.isFinishScreen()) {
		obj->goEnd_();
	}
}

/*
 * --INFO--
 * Address:	803CEEEC
 * Size:	000044
 */
void FSMState_WaitCloseForNoCard::do_init(TMgr* obj, Game::StateArg* arg)
{
	u32 v1 = 1.0f / sys->mDeltaTime;
	_10    = v1;
	_14    = v1;
}

/*
 * --INFO--
 * Address:	803CEF30
 * Size:	000084
 */
void FSMState_WaitCloseForNoCard::do_exec(TMgr* obj)
{
	if (_10) {
		_10--;
	}
	if (_10 == 0) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		transit(obj, ScreenClose, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803CEFB4
 * Size:	0000B8
 */
void FSMState_WorldMapInfoWindow::do_init(TMgr* obj, Game::StateArg* arg)
{
	::Screen::gGame2DMgr->mScreenMgr->reset();
	og::Screen::DispMemberWorldMapInfoWin0 disp;
	disp.mMsgIDYes       = '6017_00';
	disp.mMsgIDNo        = '6017_00';
	disp.mStartSelection = 1;
	::Screen::gGame2DMgr->open_WorldMapInfoWin0(disp);
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x804B
	  lis       r4, 0x34
	  li        r11, 0
	  lis       r3, 0x315F
	  addi      r8, r4, 0x3731
	  addi      r10, r5, 0x1148
	  addi      r0, r3, 0x3030
	  lis       r6, 0x804E
	  lis       r5, 0x305F
	  lis       r4, 0x375F
	  lis       r3, 0x36
	  li        r7, 0xB4
	  addi      r9, r5, 0x3030
	  stw       r10, 0x8(r1)
	  subi      r10, r6, 0x61F8
	  addi      r6, r4, 0x3030
	  stw       r0, 0x24(r1)
	  addi      r5, r3, 0x3031
	  li        r0, 0x1
	  lwz       r3, -0x6560(r13)
	  stw       r8, 0x20(r1)
	  addi      r4, r1, 0x8
	  stb       r11, 0x29(r1)
	  stw       r11, 0xC(r1)
	  stw       r10, 0x8(r1)
	  stw       r11, 0x10(r1)
	  stw       r9, 0x1C(r1)
	  stw       r8, 0x18(r1)
	  stb       r7, 0x28(r1)
	  stw       r6, 0x24(r1)
	  stw       r5, 0x20(r1)
	  stb       r0, 0x29(r1)
	  bl        0x2E000
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803CF06C
 * Size:	0000A0
 */
void FSMState_WorldMapInfoWindow::do_exec(TMgr* obj)
{
	switch (::Screen::gGame2DMgr->check_WorldMapInfoWin0()) {
	case 0:
		transit(obj, ScreenWait, nullptr);
		break;
	case 1:
		obj->mOptionScreen.mOptionParamB.saveRam();
		transit(obj, ScreenClose, nullptr);
		break;
	default:
		break;
	}
}

/*
 * --INFO--
 * Address:	803CF10C
 * Size:	00000C
 */
void FSMState_LoadOption::do_init(TMgr* obj, Game::StateArg* arg) { _10 = 0; }

/*
 * --INFO--
 * Address:	803CF118
 * Size:	0001A0
 */
void FSMState_LoadOption::do_exec(TMgr* mgr)
{
	switch (_10) {
	case 0:
		if (sys->mCardMgr->isSaveValid() && sys->mCardMgr->isCardReady()) {
			transit(mgr, ScreenOpen, 0);
		} else {
			if (sys->mCardMgr->isSaveValid()) {
				bool check = sys->mCardMgr->loadGameOption();
				if (check) {
					_10 = 1;
				} else {
					JUT_PANICLINE(239, "fail to memory card Request even if finish task\n");
				}
			}
		}
		break;
	case 1:
		if (sys->mCardMgr->isSaveValid()) {
			sys->mCardMgr->getCardStatus();
			transit(mgr, ScreenOpen, 0);
		}
		break;
	}

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r0, 0x10(r3)
	cmpwi    r0, 1
	beq      lbl_803CF240
	bge      lbl_803CF29C
	cmpwi    r0, 0
	bge      lbl_803CF154
	b        lbl_803CF29C

lbl_803CF154:
	lwz      r3, sys@sda21(r13)
	li       r30, 0
	lwz      r3, 0x5c(r3)
	lwz      r0, 0xa8(r3)
	cmpwi    r0, 0
	bne      lbl_803CF17C
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_803CF17C
	li       r30, 1

lbl_803CF17C:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803CF1A0
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	bl       getCardStatus__Q34Game10MemoryCard3MgrFv
	cmpwi    r3, 0
	bne      lbl_803CF1A0
	li       r0, 1
	b        lbl_803CF1A4

lbl_803CF1A0:
	li       r0, 0

lbl_803CF1A4:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803CF1D0
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803CF29C

lbl_803CF1D0:
	lwz      r3, sys@sda21(r13)
	li       r30, 0
	lwz      r3, 0x5c(r3)
	lwz      r0, 0xa8(r3)
	cmpwi    r0, 0
	bne      lbl_803CF1F8
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_803CF1F8
	li       r30, 1

lbl_803CF1F8:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803CF29C
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	bl       loadGameOption__Q34Game10MemoryCard3MgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803CF220
	li       r0, 1
	stw      r0, 0x10(r31)
	b        lbl_803CF29C

lbl_803CF220:
	lis      r3, lbl_80496608@ha
	lis      r5, lbl_8049661C@ha
	addi     r3, r3, lbl_80496608@l
	li       r4, 0xef
	addi     r5, r5, lbl_8049661C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_803CF29C

lbl_803CF240:
	lwz      r3, sys@sda21(r13)
	li       r30, 0
	lwz      r3, 0x5c(r3)
	lwz      r0, 0xa8(r3)
	cmpwi    r0, 0
	bne      lbl_803CF268
	bl       checkStatus__13MemoryCardMgrFv
	cmplwi   r3, 0xb
	beq      lbl_803CF268
	li       r30, 1

lbl_803CF268:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803CF29C
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	bl       getCardStatus__Q34Game10MemoryCard3MgrFv
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803CF29C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CF2B8
 * Size:	00002C
 */
void FSMState_SaveMgr::do_init(TMgr* obj, Game::StateArg* arg)
{
	obj->mOptionScreen.mEnabled = 0;
	obj->mSaveMgr->start();
}

/*
 * --INFO--
 * Address:	803CF2E4
 * Size:	000100
 */
void FSMState_SaveMgr::do_exec(TMgr* obj)
{
	if (obj->mSaveMgr->isFinish()) {
		switch (obj->mSaveMgr->mCurrStateID) {
		case 0:
			transit(obj, ScreenClose, nullptr);
			break;
		case 1:
			transit(obj, ScreenWait, nullptr);
			break;
		case 2:
			transit(obj, ScreenClose, nullptr);
			break;
		case 4:
			transit(obj, ScreenWait, nullptr);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	803CF3E4
 * Size:	0000C0
 */
TMgr::TMgr()
    : mOptionScreen()
    , mIsFinished(false)
    , mStateMachine()
{
	mStateMachine.init(this);
	mStateMachine.start(this, Standby, nullptr);
	mSaveMgr                   = Save::TMgr::createInstance();
	mSaveMgr->mIsStoryGameSave = true;
	mSaveMgr->mSaveType        = 1;
	mSaveMgr->mIsAutosaveOn    = true;
	mSaveMgr->_47A             = 0;
}

/*
 * --INFO--
 * Address:	803D00C0
 * Size:	000088
 */
void TMgr::loadResource()
{
	sys->heapStatusStart("Option::TMgr::loadResource", nullptr);
	mOptionScreen.loadResource();
	sys->heapStatusEnd("Option::TMgr::loadResource");

	mSaveMgr->doLoadMenuResource();
}

/*
 * --INFO--
 * Address:	803D0148
 * Size:	00004C
 */
void TMgr::setController(Controller* controller)
{
	mController = controller;
	mOptionScreen.setController(controller);
	mSaveMgr->setControllers(controller);
}

/*
 * --INFO--
 * Address:	803D0194
 * Size:	00003C
 */
void TMgr::start() { mStateMachine.transit(this, LoadOption, nullptr); }

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void TMgr::forceQuit()
{
	// UNUSED FUNCTION
	mOptionScreen.killScreen();
	mSaveMgr->forceQuit();
	::Screen::gGame2DMgr->mScreenMgr->reset();
}

/*
 * --INFO--
 * Address:	803D01D0
 * Size:	000028
 */
bool TMgr::isFinish() { return u8(getStateID() == 0); }

/*
 * --INFO--
 * Address:	803D01F8
 * Size:	00007C
 */
void TMgr::goEnd_()
{
	mStateMachine.transit(this, Standby, nullptr);
	forceQuit();
}

/*
 * --INFO--
 * Address:	803D0274
 * Size:	000094
 */
void TMgr::update()
{
	mIsFinished = false;
	mStateMachine.exec(this);
	if (getStateID()) {
		sys->mCardMgr->update();
		mOptionScreen.update();
		mSaveMgr->update();
	}
	::Screen::gGame2DMgr->update();
}

/*
 * --INFO--
 * Address:	803D0308
 * Size:	000090
 */
void TMgr::draw()
{
	if (getStateID()) {
		sys->mGfx->mPerspGraph.setPort();
		mOptionScreen.draw();
		sys->mGfx->mPerspGraph.setPort();
		mSaveMgr->draw();
	}
	::Screen::gGame2DMgr->draw(*sys->mGfx);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void TMgr::showInfo()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D0398
 * Size:	000058
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(430, mCurrentState);
	return mCurrentState->mId;
}

} // namespace Option
} // namespace ebi
