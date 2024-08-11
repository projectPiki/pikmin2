#include "og/newScreen/Save.h"
#include "og/Sound.h"
#include "ebi/Save.h"
#include "System.h"
#include "Game/GameConfig.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x80324A54
 * @note Size: 0x60
 */
ObjSave::ObjSave(const char* name)
{
	mSaveMgr = nullptr;
	mName    = name;
	mDisp    = nullptr;
}

/**
 * @note Address: 0x80324AB4
 * @note Size: 0xAC
 */
ObjSave::~ObjSave() { }

/**
 * @note Address: 0x80324B60
 * @note Size: 0x8C
 */
void ObjSave::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberSave* disp = static_cast<og::Screen::DispMemberSave*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_SAVE)) {
		mDisp = disp;
	} else {
		JUT_PANICLINE(84, "ERR! in ObjSave Create失敗！\n");
	}
	mState = SAVESTATE_StartDelay;
	mTimer = 0.0f;
}

/**
 * @note Address: 0x80324BEC
 * @note Size: 0x134
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

/**
 * @note Address: 0x80324D20
 * @note Size: 0x30
 */
void ObjSave::doDraw(Graphics& gfx)
{
	if (mState == SAVESTATE_WaitForFinish) {
		mSaveMgr->draw();
	}
}

/**
 * @note Address: 0x80324D50
 * @note Size: 0x8
 */
bool ObjSave::doStart(::Screen::StartSceneArg const*) { return true; }

/**
 * @note Address: 0x80324D58
 * @note Size: 0x8
 */
bool ObjSave::doEnd(::Screen::EndSceneArg const*) { return true; }

/**
 * @note Address: 0x80324D60
 * @note Size: 0x4
 */
void ObjSave::doUpdateFadeinFinish() { }

/**
 * @note Address: 0x80324D64
 * @note Size: 0x4
 */
void ObjSave::doUpdateFinish() { }

/**
 * @note Address: 0x80324D68
 * @note Size: 0x34
 */
void ObjSave::doUpdateFadeoutFinish() { getOwner()->endScene(nullptr); }

/**
 * @note Address: 0x80324D9C
 * @note Size: 0x8
 */
bool ObjSave::doUpdateFadein() { return true; }

/**
 * @note Address: 0x80324DA4
 * @note Size: 0x8
 */
bool ObjSave::doUpdateFadeout() { return true; }

} // namespace newScreen
} // namespace og
