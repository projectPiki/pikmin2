#include "ebi/Omake.h"
#include "ebi/E2DGraph.h"
#include "PSSystem/PSSystemIF.h"

static const char name[] = "ebiScreenOmakeGame";

namespace ebi {
namespace Screen {

/**
 * @note Address: 0x803F0CF4
 * @note Size: 0x278
 */
TOmakeGame::TOmakeGame()
    : mInput(nullptr)
    , mScreenObj(nullptr)
{
}

/**
 * @note Address: 0x803F0F6C
 * @note Size: 0x2F4
 */
void TOmakeGame::doSetArchive(JKRArchive* arc)
{
	sys->heapStatusStart("Screen_newScreen_of_TOmakeGame", nullptr);
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set("omake_game.blo", 0x1100000, arc);
	sys->heapStatusEnd("Screen_newScreen_of_TOmakeGame");

	E2DScreen_searchAssert(mScreenObj, 'DATA')->hide();

	for (int i = 0; i < GameCount; i++) {
		mPaneGameSel[i]    = E2DScreen_searchAssert(mScreenObj, 'Ngrpgam1' + i);
		mPaneSelectBox[i]  = E2DScreen_searchAssert(mScreenObj, 'Wsetga1' + i);
		mPaneGameName[i]   = E2DScreen_searchAssert(mScreenObj, 'Tgame1' + i);
		mPaneGameNameS[i]  = E2DScreen_searchAssert(mScreenObj, 'Tgame_s1' + i);
		mPaneThumbnails[i] = E2DScreen_searchAssert(mScreenObj, 'Pagb01' + i);
	}

	mPaneSelectBox[PikminPluck]->hide();
	mPaneSelectBox[PikminPart]->hide();
	mPaneSelectBox[PikminPath]->hide();

	mPaneDescription  = E2DScreen_searchAssert(mScreenObj, 'Tset');
	mPaneDescriptionS = E2DScreen_searchAssert(mScreenObj, 'Tset_s');

	sys->heapStatusStart("Screen_setCallBackMessage_of_TOmakeGame", nullptr);
	E2DPane_setTreeCallBackMessage(mScreenObj, mScreenObj);
	sys->heapStatusEnd("Screen_setCallBackMessage_of_TOmakeGame");

	mScreenObj->addCallBackPane(mScreenObj, &mAnimationEnter);
	mScreenObj->addCallBackPane(mScreenObj, &mAnimationExit);
	mScreenObj->addCallBack('picwin', &mAnimationChangeGame);
	mScreenObj->addCallBackPane(mScreenObj, &mAnimCalc);
	mAnimationEnter.loadAnm("omake_game.bck", arc, 21, 40);
	mAnimationExit.loadAnm("omake_game.bck", arc, 0, 20);
	mAnimationChangeGame.loadAnm("omake_game.bck", arc, 80, 100);

	for (int i = 0; i < GameCount; i++) {
		mBlinkFont[i].set(static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenObj, 'Tgame1')),
		                  static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenObj, 'Tscolor')));
		mScreenObj->addCallBackPane(mPaneGameName[i], &mBlinkFont[i]);
	}

	mScreenObj->addCallBack('Wselctw', &mCursor);
}

/**
 * @note Address: 0x803F1260
 * @note Size: 0x294
 */
void TOmakeGame::doOpenScreen(ArgOpen*)
{
	mExitState = true;
	mAnimationEnter.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	mAnimationChangeGame.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	mIsChangedGameSel = true;
	mSelection        = 0;

	JGeometry::TBox2f box;
	box                 = *mPaneSelectBox[mSelection]->getBounds();
	u32 time            = 0.1f / sys->mDeltaTime;
	mCursor.mCounter    = time;
	mCursor.mCounterMax = time;
	mCursor.mBounds1    = box;
	mCursor.mBounds2    = box;
	mCursor.mIsEnabled  = true;
	mCursor.mWindowPane = mPaneGameSel[mSelection];

	for (int i = 0; i < GameCount; i++) {
		mBlinkFont[i].setPaneColors(0);
	}

	mBlinkFont[mSelection].enable();

	openMsg(GameDesc);

	mPaneThumbnails[PikminPluck]->hide();
	mPaneThumbnails[PikminPart]->hide();
	mPaneThumbnails[PikminPath]->hide();
	mPaneThumbnails[mSelection]->show();

	mScreenObj->update();
}

/**
 * @note Address: 0x803F14F4
 * @note Size: 0x3C
 */
void TOmakeGame::doCloseScreen(ArgClose*) { mAnimationExit.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true); }

/**
 * @note Address: 0x803F1530
 * @note Size: 0x54
 */
bool TOmakeGame::doUpdateStateOpen()
{
	mScreenObj->update();
	return !!mAnimationEnter.isFinish();
}

/**
 * @note Address: 0x803F1584
 * @note Size: 0x258
 */
bool TOmakeGame::doUpdateStateWait()
{
	mScreenObj->update();
	if (mExitState) {
		mPad.update();
		if (mPad.mSelectionChanged) {
			int oldsel = mPad.mLastIndex;
			JGeometry::TBox2f box;
			box              = *mPaneSelectBox[mSelection]->getBounds();
			mCursor.mBounds1 = mCursor.mBounds2;
			mCursor.mBounds2 = box;
			mCursor.mCounter = mCursor.mCounterMax;
			mCursor.mScaleMgr.up(0.1f, 30.0f, 0.6f, 0.0f);
			mCursor.mWindowPane = mPaneGameSel[mSelection];

			mBlinkFont[oldsel].mIsTowardColor1 = false;
			mBlinkFont[oldsel]._49             = true;

			mBlinkFont[mSelection].enable();
			openMsg(GameDesc);
			mAnimationChangeGame.playBack(sys->mDeltaTime * 60.0f, false);
			mIsChangedGameSel = false;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		}
		if (!mCursor.mCounter) {
			if (mInput->getButtonDown() & Controller::PRESS_A) {
				mExitState = false;
			}
			if (mInput->getButtonDown() & Controller::PRESS_B) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
				return true;
			}
		}
	}
	if (mAnimationChangeGame.isFinish() && !mIsChangedGameSel) {
		mPaneThumbnails[PikminPluck]->hide();
		mPaneThumbnails[PikminPart]->hide();
		mPaneThumbnails[PikminPath]->hide();
		mPaneThumbnails[mSelection]->show();
		mAnimationChangeGame.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mIsChangedGameSel = true;
	}
	return false;
}

/**
 * @note Address: 0x803F17DC
 * @note Size: 0x54
 */
bool TOmakeGame::doUpdateStateClose()
{
	mScreenObj->update();
	return !!mAnimationExit.isFinish();
}

/**
 * @note Address: 0x803F1830
 * @note Size: 0x74
 */
void TOmakeGame::doDraw()
{
	Graphics* gfx       = sys->mGfx;
	J2DPerspGraph* graf = &gfx->mPerspGraph;

	graf->setPort();
	mScreenObj->draw(*gfx, *graf);
}

/**
 * @note Address: 0x803F18A4
 * @note Size: 0x44
 */
void TOmakeGame::setController(Controller* pad)
{
	mInput = pad;
	mPad.init(pad, 0, 2, &mSelection, EUTPadInterface_countNum::MODE_DOWNUP, 0.66f, 0.15f);
}

/**
 * @note Address: 0x803F18E8
 * @note Size: 0x48
 */
bool TOmakeGame::isDelegateControl()
{
	bool ret = false;
	if (!mExitState && !isCloseScreen()) {
		ret = true;
	}
	return ret;
}

/**
 * @note Address: 0x803F1930
 * @note Size: 0x3C
 */
void TOmakeGame::setSelfControl()
{
	mExitState = true;
	mCursor.mScaleMgr.up(0.1f, 30.0f, 0.6f, 0.0f);
}

/**
 * @note Address: 0x803F196C
 * @note Size: 0x108
 */
bool TOmakeGame::openMsg(s32 id)
{
	// This text was never translated from japanese
	u64 tag;
	switch (id) {
	case GameDesc:
		switch (mSelection) {
		case PikminPluck:
			tag = '4800_00'; // "オリマーまたはルーイを操作して、ピクミンたちをすべてひっこぬくゲームです。"
			break;           // translates to "In this game, you control Olimar or Louie and take out all the Pikmin."
		case PikminPart:
			tag = '4801_00'; // "同じ向きに動くピクミンたちをあやつり、お宝のある場所に連れていくゲームです。"
			break; // translates to "In this game, you control Pikmin that move in the same direction and lead them to treasure locations."
		case PikminPath:
			tag = '4802_00'; // "パネルを入れかえながら、ポッドまでの道を完成させ、ピクミンたちをすべてゴールさせるゲームです。"
			break; // translates to "This is a game where you can complete the path to the pod by replacing the panels and get all the
			       // Pikmin to the finish line."
		}
		break;
	case Transferring:
		tag = '4823_00'; // "ゲームを転送しています。しばらくお待ちください。"
		break;           // translates to "Transferring games. Please wait."
	case TransferFinished:
		tag = '4824_00'; // "ゲームの転送が終わりました。ケーブルを抜いてもゲームは遊べます。"
		break;           // translates to "Game transfer finished. You can play the game even if you unplug the cable."
	case TransferFailed:
		tag = '4826_00'; // "ゲームを転送できませんでした。接続の仕方を確認してください。"
		break;           // translates to "Failed to transfer game. Please check how to connect."
	case TransferUnable:
		tag = '4825_00'; // "転送できません！！ でもどって、接続の仕方や操作を確認してください。"
		break;           // translates to "Unable to transfer! ! But go back and check how to connect and how to operate."
	default:
		return false;
	}

	mPaneDescription->setMsgID(tag);
	mPaneDescriptionS->setMsgID(tag);
	return true;
}

} // namespace Screen
} // namespace ebi
