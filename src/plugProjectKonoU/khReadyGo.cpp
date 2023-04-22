#include "kh/khReadyGo.h"
#include "kh/khFinalFloor.h"
#include "kh/khUtil.h"
#include "PSSystem/PSSystemIF.h"
#include "nans.h"
#include "SoundID.h"
#include "utilityU.h"
#include "efx2d/T2DGo.h"
#include "Game/GameSystem.h"
#include "JSystem/J2D/J2DAnmLoader.h"

static const char pad[] = { "\0\0\0\0\0\0\0\0" };
static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	80401268
 * Size:	0000A4
 */
bool ObjReadyGo::doUpdateFadein()
{
	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(61, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());

	if (disp->mGameType == 0) {
		PSSystem::spSysIF->playSystemSe(PSSE_READYGO_BATTLE_COME, 0);
	} else {
		PSSystem::spSysIF->playSystemSe(PSSE_READYGO_CHALLENGE_COME, 0);
	}
	return true;
}

/*
 * --INFO--
 * Address:	8040130C
 * Size:	0001D4
 */
void ObjReadyGo::doCreate(JKRArchive* arc)
{
	char* nameList[2][3]
	    = { "ready_go.blo", "ready_go.bck", "ready_go.bpk", "ready_go_reverse.blo", "ready_go_reverse.bck", "ready_go_reverse.bpk" };

	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(89, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());
	if (disp->mIs2Player) {
		mScreenNum  = 2;
		mYOffset[0] = msVal.mYOffsetP1;
		mYOffset[1] = msVal.mYOffsetP2;
	}

	for (int i = 0; i < mScreenNum; i++) {
		mScreen[i] = new P2DScreen::Mgr_tuning;
		mScreen[i]->set(nameList[i][0], 0x40000, arc);
		void* file = JKRFileLoader::getGlbResource(nameList[i][1], arc);
		mAnim1[i]  = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

		file      = JKRFileLoader::getGlbResource(nameList[i][2], arc);
		mAnim2[i] = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));

		mScreen[i]->setAnimation(mAnim1[i]);
		mScreen[i]->setAnimation(mAnim2[i]);
	}

	getOwner()->setColorBG(0, 0, 0, 160);

	if (disp->mGameType == 0) {
		PSStart2DStream(0xc0011022);
	} else {
		PSStart2DStream(0xc0011023);
	}
}

/*
 * --INFO--
 * Address:	804014E0
 * Size:	000020
 */
bool ObjReadyGo::doUpdate() { return updateAnimation(); }

/*
 * --INFO--
 * Address:	80401500
 * Size:	0000DC
 */
void ObjReadyGo::doDraw(Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();

	for (int i = 0; i < mScreenNum; i++) {
		mScreen[i]->search('ROOT')->setOffset(0.0f, mYOffset[i]);
		mScreen[i]->draw(gfx, gfx.mOrthoGraph);
	}
}

/*
 * --INFO--
 * Address:	804015DC
 * Size:	00018C
 */
bool ObjReadyGo::doUpdateFadeout()
{
	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(159, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());
	if (disp->mIsFinalFloor) {
		DispFinalFloor disp2;
		disp2.mIs2Player = disp->mIs2Player;
		::Screen::SetSceneArg arg(SCENE_FINAL_FLOOR, &disp2, 0, true);
		arg._09 = false;

		if (getOwner()->setScene(arg)) {
			getOwner()->startScene(nullptr);
		}
	} else {
		if (getOwner()->setBackupScene()) {
			getOwner()->startScene(nullptr);
		}
	}

	getOwner()->setColorBG(0, 0, 0, 0);
	return true;
}

/*
 * --INFO--
 * Address:	80401768
 * Size:	000384
 *
 * Updates the ready-go screen animation by changing its frame, advancing its time by msVal.mAnimSpeed, and creating an effect if necessary.
 * Once the animation is complete, the display status is set to 1 and the main background music is started.
 */
bool ObjReadyGo::updateAnimation()
{
	bool done = false;
	if (!getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
		JUT_PANICLINE(195, "disp member err");
	}

	DispReadyGo* disp = static_cast<DispReadyGo*>(getDispMember());
	f32 goalTime1     = 60.0f;
	f32 goalTime2     = 78.0f;

	// Update animations for each screen
	for (int i = 0; i < mScreenNum; i++) {
		mAnim1[i]->mCurrentFrame = mAnimTime1[i];
		mAnim2[i]->mCurrentFrame = mAnimTime2[i];
		mScreen[i]->animation();
		mAnimTime1[i] += msVal.mAnimSpeed;
		mAnimTime2[i] += msVal.mAnimSpeed;

		// Check if the animation is complete
		if (mAnimTime1[i] >= mAnim1[i]->mFrameLength - 2 || mAnimTime2[i] >= mAnim2[i]->mFrameLength - 2) {
			done = true;
		}

		// Create an effect if necessary
		if (mAnimTime1[i] > goalTime1 && !mMakeEfx[i]) {
			mMakeEfx[i] = true;

			Vector2f vec(getPaneCenterX(mScreen[i]->search('NALL')) + msVal.mEfxOffsetX,
			             getPaneCenterY(mScreen[i]->search('NALL')) + msVal.mEfxOffsetY);
			efx2d::Arg arg = vec;

			if (disp->mGameType == 0) {
				efx2d::T2DGoBatl efx;
				efx.create(&arg);
			} else {
				efx2d::T2DGoChal efx;
				efx.create(&arg);
			}
		}

		// Set the status of the display member to 1 and start the main BGM if necessary
		if (mAnimTime1[i] >= goalTime2) {
			mIsAnimComplete = true;
			disp->mStatus   = 1;
		}
	}

	// Start the main BGM if necessary
	if (mIsAnimComplete && !mIsOver && !disp->mIsFinalFloor) {
		Game::gameSystem->mSection->startMainBgm();
		mIsOver = true;
	}
	return done;
}

/*
 * --INFO--
 * Address:	80401AEC
 * Size:	000040
 */
bool SceneReadyGo::doConfirmSetScene(::Screen::SetSceneArg& arg) { return arg.getSceneType() != SCENE_PAUSE_MENU; }

ObjReadyGo::StaticValues ObjReadyGo::msVal;

} // namespace Screen
} // namespace kh
