#include "kh/khFinalFloor.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "PSSystem/PSSystemIF.h"
#include "nans.h"
#include "Game/GameSystem.h"
#include "og/newScreen/Challenge.h"
#include "Screen/Game2DMgr.h"
#include "JSystem/J2D/J2DAnmLoader.h"

static void strippedFunc()
{
	OSReport("\0\0\0\0\0\0\0\0\0\0\0");
}

namespace kh {
namespace Screen {

/**
 * @note Address: 0x80401D38
 * @note Size: 0x21C
 */
void ObjFinalFloor::doCreate(JKRArchive* arc)
{
	// Check if the display member is valid.
	if (!getDispMember()->isID(OWNER_KH, MEMBER_FINAL_FLOOR)) {
		JUT_PANICLINE(57, "disp member err");
	}

	// Set up the viewport count and vertical offset for each player's viewport.
	if (static_cast<DispFinalFloor*>(getDispMember())->mIs2Player) {
		mViewportCount = 2;
		mYOffset[0]    = msVal.mYOffsetP1;
		mYOffset[1]    = msVal.mYOffsetP2;
	}

	// Load resources for each viewport.
	for (int i = 0; i < mViewportCount; i++) {
		// Load the screen manager and set the tuning file.
		mScreen[i] = new P2DScreen::Mgr_tuning;
		mScreen[i]->set("final_floor.blo", 0x40000, arc);

		// Load the animation files.
		void* file = JKRFileLoader::getGlbResource("final_floor.bck", arc);
		mAnim1[i]  = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

		file      = JKRFileLoader::getGlbResource("final_floor.bpk", arc);
		mAnim2[i] = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));

		// Set the animations for the screen manager.
		mScreen[i]->setAnimation(mAnim1[i]);
		mScreen[i]->setAnimation(mAnim2[i]);
	}

	// Start playing the background music.
	startBGM();
}

/**
 * @note Address: 0x80401F54
 * @note Size: 0x20
 */
bool ObjFinalFloor::doUpdate() { return updateAnimation(); }

/**
 * @note Address: 0x80401F74
 * @note Size: 0xDC
 */
void ObjFinalFloor::doDraw(Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();

	for (int i = 0; i < mViewportCount; i++) {
		mScreen[i]->search('ROOT')->setOffset(0.0f, mYOffset[i]);
		mScreen[i]->draw(gfx, gfx.mOrthoGraph);
	}
}

/**
 * @note Address: 0x80402050
 * @note Size: 0x38
 */
bool ObjFinalFloor::doUpdateFadein()
{
	PSSystem::spSysIF->playSystemSe(PSSE_FINALLEVEL_COME, &mSound, 0);
	return true;
}

/**
 * @note Address: 0x80402088
 * @note Size: 0x1F8
 */
bool ObjFinalFloor::doUpdateFadeout()
{
	bool isCh = Game::gameSystem && Game::gameSystem->isChallengeMode();
	if (!getDispMember()->isID(OWNER_KH, MEMBER_FINAL_FLOOR)) {
		JUT_PANICLINE(151, "disp member err");
	}

	DispFinalFloor* disp = static_cast<DispFinalFloor*>(getDispMember());
	if (isCh) {
		if (disp->mIs2Player) {
			og::newScreen::SArgChallenge2P arg(1.5f);
			::Screen::SceneBase* scene = getOwner();
			if (scene->setBackupScene()) {
				scene = getOwner();
				scene->startScene(&arg);
			}
		} else {
			og::newScreen::SArgChallenge1P arg(1.5f);
			::Screen::SceneBase* scene = getOwner();
			if (scene->setBackupScene()) {
				scene = getOwner();
				scene->startScene(&arg);
			}
		}
	} else {
		// story mode cave is the default
		::Screen::SceneBase* scene = getOwner();
		if (scene->setBackupScene()) {
			scene = getOwner();
			scene->startScene(nullptr);
		}
	}
	return true;
}

/**
 * @note Address: 0x80402280
 * @note Size: 0x34
 */
void ObjFinalFloor::doUpdateFadeoutFinish() { Game::gameSystem->mSection->startMainBgm(); }

/**
 * @note Address: 0x804022B4
 * @note Size: 0x1C8
 */
bool ObjFinalFloor::updateAnimation()
{
	bool ret = false;

	// Update the animation for each viewport
	for (int i = 0; i < mViewportCount; i++) {
		// Set the current frame for each animation and update the screen manager
		mAnim1[i]->mCurrentFrame = mAnimTime1[i];
		mAnim2[i]->mCurrentFrame = mAnimTime2[i];
		mScreen[i]->animation();

		// Check if the game is in demo mode
		if (::Screen::gGame2DMgr && static_cast<newScreen::Mgr*>(::Screen::gGame2DMgr->mScreenMgr)->mInDemo) {
			mScreen[i]->hide();

			// Reset animation if current frame is >75% of the length.
			if (mAnimTime1[i] > (mAnim1[i]->mTotalFrameCount * 3) >> 2) {
				mAnimTime1[i] = mAnim1[i]->mTotalFrameCount;
				mAnimTime2[i] = mAnim2[i]->mTotalFrameCount;
			} else {
				mAnimTime2[i] = 0.0f;
				mAnimTime1[i] = 0.0f;
			}
		} else {
			// Show the screen manager
			mScreen[i]->show();
		}

		// Update the animation times and check if the animation has finished
		mAnimTime1[i] += msVal.mAnimSpeed;
		mAnimTime2[i] += msVal.mAnimSpeed;
		if (mAnimTime1[i] >= mAnim1[i]->mTotalFrameCount || mAnimTime2[i] >= mAnim2[i]->mTotalFrameCount) {
			ret = true;
		}
	}

	return ret;
}

/**
 * @note Address: 0x8040247C
 * @note Size: 0x40
 */
void ObjFinalFloor::stopSound()
{
	if (mSound) {
		mSound->stop(0);
	}
	PSStop2DStream();
}

/**
 * @note Address: 0x804024BC
 * @note Size: 0x15C
 */
void ObjFinalFloor::restartSound()
{
	if (mAnimTime1[0] <= (mAnim1[0]->mTotalFrameCount * 3) >> 2) {
		PSSystem::spSysIF->playSystemSe(PSSE_FINALLEVEL_COME, &mSound, 0);
		startBGM();
	}
}

/**
 * @note Address: 0x80402618
 * @note Size: 0x40
 */
bool SceneFinalFloor::doConfirmSetScene(::Screen::SetSceneArg& arg) { return arg.getSceneType() != SCENE_PAUSE_MENU; }

ObjFinalFloor::StaticValues ObjFinalFloor::msVal;

} // namespace Screen
} // namespace kh
