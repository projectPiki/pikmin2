#include "kh/khWinLose.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "Morimura/GameOver.h"
#include "utilityU.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "JSystem/J2D/J2DAnmLoader.h"

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace kh {
namespace Screen {

/**
 * @note Address: 0x80410714
 * @note Size: 0xCC
 */
void ObjWinLoseReason::doCreate(JKRArchive* arc)
{
	mScreen = new P2DScreen::Mgr_tuning;
	mScreen->set("otakara_get.blo", 0x1040000, arc);
	void* file = JKRFileLoader::getGlbResource("otakara_get.bck", arc);
	mAnim1     = J2DAnmLoaderDataBase::load(file);
	file       = JKRFileLoader::getGlbResource("otakara_get.bpk", arc);
	mAnim2     = J2DAnmLoaderDataBase::load(file);
	mScreen->setAnimation(mAnim1);
	mScreen->setAnimation(mAnim2);
}

/**
 * @note Address: 0x804107E0
 * @note Size: 0x8
 */
bool ObjWinLoseReason::doUpdate() { return false; }

/**
 * @note Address: 0x804107E8
 * @note Size: 0x4
 */
void ObjWinLoseReason::doDraw(Graphics& gfx) { }

/**
 * @note Address: 0x804107EC
 * @note Size: 0x60
 */
SceneWinLoseReason::SceneWinLoseReason()
{
	mScreenObj[1] = nullptr;
	mScreenObj[0] = nullptr;
	mOutcome[1]   = -1;
	mOutcome[0]   = -1;
	mDone[1]      = false;
	mDone[0]      = false;
	mCounter      = 0;
}

/**
 * @note Address: 0x8041084C
 * @note Size: 0x588
 */
void SceneWinLoseReason::doCreateObj(JKRArchive* arc)
{
	if (!mDispMember->isID(OWNER_KH, MEMBER_WIN_LOSE_REASON)) {
		JUT_PANICLINE(140, "disp member err");
	}

	DispWinLoseReason* disp = static_cast<DispWinLoseReason*>(mDispMember);
	mOutcome[0]             = disp->mOutcomeP1;
	switch (disp->mOutcomeP1) {
	case 1: // captain down
	{
		mScreenObj[0] = new Morimura::TOrimaDown2D;
		registObj(mScreenObj[0], arc);
		Morimura::TOrimaDown2D* screen = static_cast<Morimura::TOrimaDown2D*>(mScreenObj[0]);
		P2ASSERTLINE(149, screen);
		screen->mGameOverScreen->setPosY(ObjWinLoseReason::msVal.mYOffsetP1);
		screen->mType      = 1;
		screen->mTimeSpeed = ObjWinLoseReason::msVal.mTimeSpeed;
		break;
	}
	case 2: // piki extinct
	{
		mScreenObj[0] = new Morimura::TPikminDown2D;
		registObj(mScreenObj[0], arc);
		Morimura::TPikminDown2D* screen = static_cast<Morimura::TPikminDown2D*>(mScreenObj[0]);
		P2ASSERTLINE(159, screen);
		screen->mGameOverScreen->setPosY(ObjWinLoseReason::msVal.mYOffsetP1);
		screen->mType      = 1;
		screen->mTimeSpeed = ObjWinLoseReason::msVal.mTimeSpeed;
		break;
	}
	case 3: {
		mScreenObj[0] = new ObjWinLoseReason(0);
		registObj(mScreenObj[0], arc);
		mDone[0] = true;
		break;
	}
	default:
		mDone[0] = 1;
		break;
	}

	mOutcome[1] = disp->mOutcomeP2;
	switch (disp->mOutcomeP2) {
	case 1: // captain down
	{
		mScreenObj[1] = new Morimura::TLujiDown2D;
		registObj(mScreenObj[1], arc);
		Morimura::TOrimaDown2D* screen = static_cast<Morimura::TOrimaDown2D*>(mScreenObj[1]);
		P2ASSERTLINE(180, screen);
		screen->mGameOverScreen->setPosY(ObjWinLoseReason::msVal.mYOffsetP2);
		screen->mType      = 2;
		screen->mTimeSpeed = ObjWinLoseReason::msVal.mTimeSpeed;
		break;
	}
	case 2: // piki extinct
	{
		mScreenObj[1] = new Morimura::TPikminDown2D;
		registObj(mScreenObj[1], arc);
		Morimura::TPikminDown2D* screen = static_cast<Morimura::TPikminDown2D*>(mScreenObj[1]);
		P2ASSERTLINE(190, screen);
		screen->mGameOverScreen->setPosY(ObjWinLoseReason::msVal.mYOffsetP2);
		screen->mType      = 2;
		screen->mTimeSpeed = ObjWinLoseReason::msVal.mTimeSpeed;
		break;
	}
	case 3: // default (marble?)
	{
		mScreenObj[1] = new ObjWinLoseReason(1);
		registObj(mScreenObj[1], arc);
		mDone[1] = 1;
		break;
	}
	default:
		mDone[1] = 1;
		break;
	}

	setColorBG(0, 0, 0, 160);

	int flag = 0;
	switch (mOutcome[0]) {
	case 2:
		flag |= 1;
		break;
	case 1:
		flag |= 2;
		break;
	case 3:
		flag |= 4;
		break;
	}

	switch (mOutcome[1]) {
	case 2:
		flag |= 0x10;
		break;
	case 1:
		flag |= 0x20;
		break;
	case 3:
		flag |= 0x40;
		break;
	}

	if (!(flag & 0x44)) {
		int streamID;
		if (!(flag & 3)) {
			if (flag & 0x20) {
				streamID = P2_STREAM_SOUND_ID(PSSTR_VS_PDOWN_WIN_ORI); // olimar win via louie dies
			} else {
				streamID = P2_STREAM_SOUND_ID(PSSTR_VS_PIK_WIN_ORI); // olimar wins via extinct
			}
		} else if (!(flag & 0x30)) {
			if (flag & 0x2) {
				streamID = P2_STREAM_SOUND_ID(PSSTR_VS_PDOWN_WIN_LUI); // louie win via olimar dies
			} else {
				streamID = P2_STREAM_SOUND_ID(PSSTR_VS_PIK_WIN_LUI); // louie win via extinct
			}
		} else {
			streamID = P2_STREAM_SOUND_ID(PSSTR_VS_BEE_DROW); // draw
		}

		PSStart2DStream(streamID);
		PSMuteSE_on2D();
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::validateSceneMgr(mgr);
		PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
		scene->stopAllSound(2);
	}
}

/**
 * @note Address: 0x80410DD4
 * @note Size: 0xCC
 */
void SceneWinLoseReason::doUpdateActive()
{
	mCounter++;
	for (int i = 0; i < 2; i++) {
		switch (mOutcome[i]) {
		case 1:
		case 2:
			if (mCounter == ObjWinLoseReason::msVal.mProgressFrame) {
				Morimura::TGameOverBase* obj = static_cast<Morimura::TGameOverBase*>(mScreenObj[i]);
				P2ASSERTLINE(272, obj);
				obj->mTimeSpeed = -ObjWinLoseReason::msVal.mTimeSpeed;
			} else if (mCounter > ObjWinLoseReason::msVal.mFinishFrame) {
				mDone[i] = true;
			}
			break;
		}
	}
}

/**
 * @note Address: 0x80410EA0
 * @note Size: 0x20
 */
bool SceneWinLoseReason::doEnd(::Screen::EndSceneArg* arg) { return SceneBase::doEnd(arg); }

ObjWinLoseReason::StaticValues ObjWinLoseReason::msVal;

} // namespace Screen
} // namespace kh
