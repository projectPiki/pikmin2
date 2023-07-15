#include "og/newScreen/Save.h"
#include "og/Sound.h"
#include "ebi/Save.h"
#include "System.h"
#include "Game/GameConfig.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	80324A54
 * Size:	000060
 */
ObjSave::ObjSave(const char* name)
{
	mSaveMgr = nullptr;
	mName    = name;
	mDisp    = nullptr;
}

/*
 * --INFO--
 * Address:	80324AB4
 * Size:	0000AC
 */
ObjSave::~ObjSave() { }

/*
 * --INFO--
 * Address:	80324B60
 * Size:	00008C
 */
void ObjSave::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberSave* disp = static_cast<og::Screen::DispMemberSave*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_SAVE)) {
		mDisp = disp;
	} else {
		JUT_PANICLINE(84, "ERR! in ObjSave CreateŽ¸”sI\n");
	}
	mState = SAVESTATE_StartDelay;
	mTimer = 0.0f;
}

/*
 * --INFO--
 * Address:	80324BEC
 * Size:	000134
 */
bool ObjSave::doUpdate()
{
	bool check = false;
	if (mDisp->mDoSound) {
		ogSound->setSaveCave();
	}
	mSaveMgr->update();

	switch (mState) {
	case SAVESTATE_StartDelay:
		mTimer += sys->mDeltaTime;
		if (mTimer > 0.1f) {
			mState = SAVESTATE_WaitForFinish;
			mSaveMgr->setControllers(getGamePad());
			mSaveMgr->mIsStoryGameSave = 0;
			mSaveMgr->mSaveType        = 1;
			if (!Game::gGameConfig.mParms.mAutosaveOff.mData) {
				mSaveMgr->mIsAutosaveOn = true;
			}
			mSaveMgr->start();
			mSaveMgr->update();
		}
		break;

	case SAVESTATE_WaitForFinish:
		if (mSaveMgr->isFinish()) {
			mState = SAVESTATE_Finished;
		}
		break;

	case SAVESTATE_Finished:
		check  = true;
		mState = SAVESTATE_StartDelay;
	}

	return check;
}

/*
 * --INFO--
 * Address:	80324D20
 * Size:	000030
 */
void ObjSave::doDraw(Graphics& gfx)
{
	if (mState == SAVESTATE_WaitForFinish) {
		mSaveMgr->draw();
	}
}

/*
 * --INFO--
 * Address:	80324D50
 * Size:	000008
 */
bool ObjSave::doStart(::Screen::StartSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	80324D58
 * Size:	000008
 */
bool ObjSave::doEnd(::Screen::EndSceneArg const*) { return true; }

/*
 * --INFO--
 * Address:	80324D60
 * Size:	000004
 */
void ObjSave::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	80324D64
 * Size:	000004
 */
void ObjSave::doUpdateFinish() { }

/*
 * --INFO--
 * Address:	80324D68
 * Size:	000034
 */
void ObjSave::doUpdateFadeoutFinish() { getOwner()->endScene(nullptr); }

/*
 * --INFO--
 * Address:	80324D9C
 * Size:	000008
 */
bool ObjSave::doUpdateFadein() { return true; }

/*
 * --INFO--
 * Address:	80324DA4
 * Size:	000008
 */
bool ObjSave::doUpdateFadeout() { return true; }

} // namespace newScreen
} // namespace og
