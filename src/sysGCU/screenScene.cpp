#include "IDelegate.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JUtility/TColor.h"
#include "P2Macros.h"
#include "Screen/Enums.h"
#include "Screen/SceneInfoList.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/ogScreen.h"
#include "og/newScreen/ogUtil.h"
#include "Screen/screenObj.h"
#include "Screen/screenMgr.h"
#include "System.h"
#include "stl/mem.h"

namespace Screen {

/**
 * @note Address: 0x80451790
 * @note Size: 0x134
 */
SceneBase::SceneBase()
    : mController(nullptr)
    , mScreenMgr(nullptr)
    , mUserCallbackDelegate(this, &SceneBase::userCallBackFunc)
    , mStateID(SB_Unknown0)
    , mCommand("no name")
    , mObjMgr(nullptr)
{
	mObjMgr     = new ObjMgrBase();
	mDispMember = reinterpret_cast<og::Screen::DispMemberBase*>(new u8[0x400]);
	P2ASSERTLINE(113, mDispMember != nullptr);
	og::Screen::DispMemberDummy dummy;
	memcpy(mDispMember, (void*)&dummy, sizeof(dummy));
	sprintf(mName, "???");
}

/**
 * @note Address: 0x804518C4
 * @note Size: 0x30
 */
IObjBase* SceneBase::searchObj(char* name) { return mObjMgr->search(this, name); }

/**
 * @note Address: 0x804518F4
 * @note Size: 0x38
 */
void SceneBase::destroy()
{
	if (mCommand.mMode != -1) {
		gResMgr2D->destroy(&mCommand);
	}
}

/**
 * @note Address: 0x8045192C
 * @note Size: 0xBC
 */
void SceneBase::create()
{
	if (mCommand.mMode == -1) {
		mSomeTime              = sys->getTime();
		mCommand.mUserCallback = &mUserCallbackDelegate;
		if (getResName()[0] != '\0') {
			og::newScreen::makeLanguageResName(mName, getResName());
			gResMgr2D->loadResource(&mCommand, mName, true);
		} else {
			gResMgr2D->loadResource(&mCommand, "", true);
		}
		mStateID = SB_WaitForResourceSync;
	}
}

/**
 * @note Address: 0x804519E8
 * @note Size: 0x15C
 */
void SceneBase::update()
{
	switch (mStateID) {
	case SB_Unknown0:
		break;
	case SB_WaitForResourceSync:
		if (gResMgr2D->sync(&mCommand, false) != false) {
			if (getResName()[0] != '\0') {
				void* res = mCommand.getResource();
				P2ASSERTLINE(194, res != nullptr);
				mCommand.becomeCurrentHeap();
				JKRArchive* archive = JKRMountArchive(res, nullptr, JKRArchive::EMD_Head);
				P2ASSERTLINE(197, archive != nullptr);
				createObj(archive);
				mCommand.releaseCurrentHeap();
			}
			mStateID = SB_Unknown2;
			sys->getTime();
		}
		break;
	case SB_Unknown2:
		break;
	case SB_Started:
		if (updateActive()) {
			mStateID = SB_Unknown4;
		}
		break;
	case SB_Unknown4:
		break;
	default:
		JUT_PANICLINE(226, "P2Assert");
		break;
	}
}

/**
 * @note Address: 0x80451B44
 * @note Size: 0x40
 */
bool SceneBase::updateActive()
{
	doUpdateActive();
	return mObjMgr->update();
}

/**
 * @note Address: 0x80451B84
 * @note Size: 0x4
 */
void SceneBase::doUpdateActive() { }

/**
 * @note `break;` has a different result from `return;` here.
 * @note Address: 0x80451B88
 * @note Size: 0x90
 */
void SceneBase::draw(Graphics& gfx)
{
	switch (mStateID) {
	case SB_Unknown0:
	case SB_WaitForResourceSync:
	case SB_Unknown2:
		break;
	case SB_Started:
	case SB_Unknown4:
		setPort(gfx);
		mObjMgr->draw(gfx);
		break;
	default:
		P2ASSERTLINE(285, false);
	}
}

/**
 * @note Address: 0x80451C18
 * @note Size: 0x50
 */
bool SceneBase::start(Screen::StartSceneArg* arg)
{
	if (mStateID != SB_Unknown0 && mStateID != SB_WaitForResourceSync) {
		mStateID = SB_Started;
		return doStart(arg);
	}

	return false;
}

/**
 * @note Address: 0x80451C68
 * @note Size: 0x28
 */
bool SceneBase::doStart(Screen::StartSceneArg* arg)
{
	mObjMgr->start(arg);
	return true;
}

/**
 * @note Address: 0x80451C90
 * @note Size: 0x68
 */
bool SceneBase::end(Screen::EndSceneArg* arg)
{
	bool result;
	if (mStateID == SB_Unknown0 || mStateID == SB_Unknown2) {
		mStateID = SB_Unknown4;
		result   = true;
	} else if (mStateID != SB_WaitForResourceSync) {
		result = doEnd(arg);
	} else {
		result = false;
	}
	return result;
}

/**
 * @note Address: 0x80451CF8
 * @note Size: 0x24
 */
bool SceneBase::doEnd(Screen::EndSceneArg* arg) { return mObjMgr->end(arg); }

/**
 * @note Address: 0x80451D1C
 * @note Size: 0x2C
 */
void SceneBase::userCallBackFunc(Resource::MgrCommand* command) { doUserCallBackFunc(command); }

/**
 * @note Address: 0x80451D48
 * @note Size: 0x2C
 */
void SceneBase::createObj(JKRArchive* archive) { doCreateObj(archive); }

/**
 * @note Address: 0x80451D74
 * @note Size: 0x5C
 */
void SceneBase::registObj(ObjBase* obj, JKRArchive* archive)
{
	mObjMgr->registObj(obj, this);
	obj->create(archive);
}

/**
 * @note Address: 0x80451DD0
 * @note Size: 0x78
 */
bool SceneBase::confirmSetScene(SetSceneArg& arg) { return (mObjMgr->confirmSetScene(arg) && doConfirmSetScene(arg)); }

/**
 * @note Address: 0x80451E48
 * @note Size: 0x78
 */
bool SceneBase::confirmStartScene(StartSceneArg* arg) { return (mObjMgr->confirmStartScene(arg) && doConfirmStartScene(arg)); }

/**
 * @note Address: 0x80451EC0
 * @note Size: 0x70
 */
bool SceneBase::confirmEndScene(EndSceneArg* arg) { return (mObjMgr->confirmEndScene(arg) && doConfirmEndScene(arg)); }

/**
 * setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
 * @note Address: 0x80451F30
 * @note Size: 0x30
 */
bool SceneBase::setScene(SetSceneArg& arg) { return mScreenMgr->setScene(arg); }

/**
 * startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
 * @note Address: 0x80451F60
 * @note Size: 0x30
 */
bool SceneBase::startScene(StartSceneArg* arg) { return mScreenMgr->startScene(arg); }

/**
 * endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
 * @note Address: 0x80451F90
 * @note Size: 0x30
 */
void SceneBase::endScene(EndSceneArg* arg) { mScreenMgr->endScene(arg); }

/**
 * setBackupScene__Q26Screen9SceneBaseFv
 * @note Address: 0x80451FC0
 * @note Size: 0x100
 */
bool SceneBase::setBackupScene()
{

	SceneInfoList* list = (SceneInfoList*)mScreenMgr->mBackupInfoList.mChild;
	Mgr* mgr;
	bool result = false;

	if (list) {
		SetSceneArg arg(list->mSceneType, (og::Screen::DispMemberBase*)list->mDispMemberBuffer);
		doSetBackupScene(arg);

		result = mScreenMgr->setScene(arg);
		if (result) {
			mgr  = getScreenMgr();
			list = (SceneInfoList*)mgr->mBackupInfoList.mChild;
			checkSceneList(list);
			list->del();
			mgr->mSceneInfoList.add(list);
		}
	}

	return result;
}

/**
 * setDispMember__Q26Screen9SceneBaseFPQ32og6Screen14DispMemberBase
 * @note Address: 0x804520C0
 * @note Size: 0x130
 */
bool SceneBase::setDispMember(og::Screen::DispMemberBase* disp)
{
	bool result = false;
	if (disp->isID(getOwnerID(), getMemberID()) || disp->getSubMember(getOwnerID(), getMemberID())) {
		memcpy(mDispMember, (void*)disp, disp->getSize());
		result = true;
	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		result = setDefaultDispMember();
	}

	return result;
}

/**
 * @note Address: 0x804521F0
 * @note Size: 0x40
 */
int SceneBase::getFinishState() { return (mStateID == SB_Unknown4) ? doGetFinishState() : SB_Finished2; }

/**
 * @note Address: 0x80452230
 * @note Size: 0x54
 */
Controller* SceneBase::getGamePad() const
{
	Mgr* mgr = mScreenMgr;
	mgr->checkController();
	return mgr->mController;
}

/**
 * @note Address: 0x80452284
 * @note Size: 0x44
 */
void SceneBase::setColorBG(u8 r, u8 g, u8 b, u8 a)
{
	JUtility::TColor color(r, g, b, a);
	mScreenMgr->setColorBG(color);
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void SceneBase::setBGMode(int mode) { mScreenMgr->setBGMode(mode); }

} // namespace Screen
