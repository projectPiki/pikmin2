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

/*
 * --INFO--
 * Address:	80451790
 * Size:	000134
 */
SceneBase::SceneBase()
    : mController(nullptr)
    , mScreenMgr(nullptr)
    , _10C(this, &SceneBase::userCallBackFunc)
    , mStateID(Unknown0)
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

/*
 * --INFO--
 * Address:	804518C4
 * Size:	000030
 */
IObjBase* SceneBase::searchObj(char* name) { return mObjMgr->search(this, name); }

/*
 * --INFO--
 * Address:	804518F4
 * Size:	000038
 */
void SceneBase::destroy()
{
	if (mCommand.mMode != -1) {
		gResMgr2D->destroy(&mCommand);
	}
}

/*
 * --INFO--
 * Address:	8045192C
 * Size:	0000BC
 */
void SceneBase::create()
{
	if (mCommand.mMode == -1) {
		mSomeTime              = sys->getTime();
		mCommand.mUserCallback = &_10C;
		if (getResName()[0] != '\0') {
			og::newScreen::makeLanguageResName(mName, getResName());
			gResMgr2D->loadResource(&mCommand, mName, true);
		} else {
			gResMgr2D->loadResource(&mCommand, "", true);
		}
		mStateID = Unknown1;
	}
}

/*
 * --INFO--
 * Address:	804519E8
 * Size:	00015C
 */
void SceneBase::update()
{
	switch (mStateID) {
	case Unknown0:
		break;
	case Unknown1:
		if (gResMgr2D->sync(&mCommand, false) != false) {
			if (getResName()[0] != '\0') {
				void* res = mCommand.getResource();
				P2ASSERTLINE(194, res != nullptr);
				mCommand.becomeCurrentHeap();
				JKRArchive* archive = JKRArchive::mount(res, nullptr, JKRArchive::EMD_Head);
				P2ASSERTLINE(197, archive != nullptr);
				createObj(archive);
				mCommand.releaseCurrentHeap();
			}
			mStateID = Unknown2;
			sys->getTime();
		}
		break;
	case Unknown2:
		break;
	case Unknown3:
		if (updateActive()) {
			mStateID = Unknown4;
		}
		break;
	case Unknown4:
		break;
	default:
		JUT_PANICLINE(226, "P2Assert");
		break;
	}
}

/*
 * --INFO--
 * Address:	80451B44
 * Size:	000040
 */
bool SceneBase::updateActive()
{
	doUpdateActive();
	return mObjMgr->update();
}

/*
 * --INFO--
 * Address:	80451B84
 * Size:	000004
 */
void SceneBase::doUpdateActive() { }

/*
 * @note `break;` has a different result from `return;` here.
 * --INFO--
 * Address:	80451B88
 * Size:	000090
 */
void SceneBase::draw(Graphics& gfx)
{
	switch (mStateID) {
	case Unknown0:
	case Unknown1:
	case Unknown2:
		// return;
		break;
	case Unknown3:
	case Unknown4:
		setPort(gfx);
		mObjMgr->draw(gfx);
		// return;
		break;
	default:
		P2ASSERTLINE(285, false);
	}
}

/*
 * --INFO--
 * Address:	80451C18
 * Size:	000050
 */
bool SceneBase::start(Screen::StartSceneArg* arg)
{
	if (mStateID != Unknown0 && mStateID != Unknown1) {
		mStateID = Unknown3;
		return doStart(arg);
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	80451C68
 * Size:	000028
 */
bool SceneBase::doStart(Screen::StartSceneArg* arg)
{
	mObjMgr->start(arg);
	return true;
}

/*
 * --INFO--
 * Address:	80451C90
 * Size:	000068
 */
bool SceneBase::end(Screen::EndSceneArg* arg)
{
	bool result;
	if (mStateID == Unknown0 || mStateID == Unknown2) {
		mStateID = Unknown4;
		result   = true;
	} else if (mStateID != Unknown1) {
		result = doEnd(arg);
	} else {
		result = false;
	}
	return result;
}

/*
 * --INFO--
 * Address:	80451CF8
 * Size:	000024
 */
bool SceneBase::doEnd(Screen::EndSceneArg* arg) { return mObjMgr->end(arg); }

/*
 * --INFO--
 * Address:	80451D1C
 * Size:	00002C
 */
void SceneBase::userCallBackFunc(Resource::MgrCommand* command) { doUserCallBackFunc(command); }

/*
 * --INFO--
 * Address:	80451D48
 * Size:	00002C
 */
void SceneBase::createObj(JKRArchive* archive) { doCreateObj(archive); }

/*
 * --INFO--
 * Address:	80451D74
 * Size:	00005C
 */
void SceneBase::registObj(ObjBase* obj, JKRArchive* archive)
{
	mObjMgr->registObj(obj, this);
	obj->create(archive);
}

/*
 * --INFO--
 * Address:	80451DD0
 * Size:	000078
 */
bool SceneBase::confirmSetScene(SetSceneArg& arg) { return (mObjMgr->confirmSetScene(arg) && doConfirmSetScene(arg)); }

/*
 * --INFO--
 * Address:	80451E48
 * Size:	000078
 */
bool SceneBase::confirmStartScene(StartSceneArg* arg) { return (mObjMgr->confirmStartScene(arg) && doConfirmStartScene(arg)); }

/*
 * --INFO--
 * Address:	80451EC0
 * Size:	000070
 */
bool SceneBase::confirmEndScene(EndSceneArg* arg) { return (mObjMgr->confirmEndScene(arg) && doConfirmEndScene(arg)); }

/*
 * setScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
 * --INFO--
 * Address:	80451F30
 * Size:	000030
 */
bool SceneBase::setScene(SetSceneArg& arg) { return mScreenMgr->setScene(arg); }

/*
 * startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
 * --INFO--
 * Address:	80451F60
 * Size:	000030
 */
bool SceneBase::startScene(StartSceneArg* arg) { return mScreenMgr->startScene(arg); }

/*
 * endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
 * --INFO--
 * Address:	80451F90
 * Size:	000030
 */
void SceneBase::endScene(EndSceneArg* arg) { mScreenMgr->endScene(arg); }

/*
 * setBackupScene__Q26Screen9SceneBaseFv
 * --INFO--
 * Address:	80451FC0
 * Size:	000100
 */
bool SceneBase::setBackupScene()
{

	SceneInfoList* list = (SceneInfoList*)mScreenMgr->_60.mChild;
	Mgr* mgr;
	bool result = false;

	if (list) {
		SetSceneArg arg(list->mSceneType, (og::Screen::DispMemberBase*)list->mDispMemberBuffer, 0, true);
		doSetBackupScene(arg);

		result = mScreenMgr->setScene(arg);
		if (result) {
			mgr  = getScreenMgr();
			list = (SceneInfoList*)mgr->_60.mChild;
			checkSceneList(list);
			list->del();
			mgr->mSceneInfoList.add(list);
		}
	}
	return result;
}

/*
 * setDispMember__Q26Screen9SceneBaseFPQ32og6Screen14DispMemberBase
 * --INFO--
 * Address:	804520C0
 * Size:	000130
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

/*
 * --INFO--
 * Address:	804521F0
 * Size:	000040
 */
int SceneBase::getFinishState() { return (mStateID == 4) ? doGetFinishState() : -2; }

/*
 * --INFO--
 * Address:	80452230
 * Size:	000054
 */
Controller* SceneBase::getGamePad() const
{
	Mgr* mgr = mScreenMgr;
	mgr->checkController();
	return mgr->mController;
}

/*
 * --INFO--
 * Address:	80452284
 * Size:	000044
 */
void SceneBase::setColorBG(u8 r, u8 g, u8 b, u8 a)
{
	JUtility::TColor color(r, g, b, a);
	mScreenMgr->setColorBG(color);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void SceneBase::setBGMode(int mode) { mScreenMgr->setBGMode(mode); }

} // namespace Screen
