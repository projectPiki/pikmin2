#include "ebi/Omake.h"
#include "ebi/E2DGraph.h"
#include "PSSystem/PSSystemIF.h"

static const char name[] = "ebiScreenOmakeGame";

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803F0CF4
 * Size:	000278
 */
TOmakeGame::TOmakeGame()
    : mInput(nullptr)
    , mScreenObj(nullptr)
{
}

/*
 * --INFO--
 * Address:	803F0F6C
 * Size:	0002F4
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

/*
 * --INFO--
 * Address:	803F1260
 * Size:	000294
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
	/*
stwu     r1, -0x50(r1)
mflr     r0
lfs      f1, lbl_8051FED0@sda21(r2)
li       r4, 0
stw      r0, 0x54(r1)
li       r0, 1
li       r5, 1
stw      r31, 0x4c(r1)
stw      r30, 0x48(r1)
stw      r29, 0x44(r1)
mr       r29, r3
stw      r28, 0x40(r1)
stb      r0, 0x10(r3)
addi     r3, r29, 0x8c
lwz      r6, sys@sda21(r13)
lfs      f0, 0x54(r6)
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
lwz      r5, sys@sda21(r13)
addi     r3, r29, 0x104
lfs      f1, lbl_8051FED0@sda21(r2)
li       r4, 0
lfs      f0, 0x54(r5)
li       r5, 1
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
li       r3, 1
li       r0, 0
stb      r3, 0x2b0(r29)
stw      r0, 0x40(r29)
lwz      r0, 0x40(r29)
slwi     r0, r0, 2
add      r3, r29, r0
lwz      r3, 0x54(r3)
bl       getBounds__7J2DPaneFv
lwz      r4, sys@sda21(r13)
lwz      r6, 0(r3)
lfs      f1, lbl_8051FED4@sda21(r2)
lfs      f0, 0x54(r4)
lwz      r5, 4(r3)
fdivs    f1, f1, f0
lwz      r4, 8(r3)
lwz      r0, 0xc(r3)
stw      r6, 0x28(r1)
stw      r5, 0x2c(r1)
stw      r4, 0x30(r1)
stw      r0, 0x34(r1)
bl       __cvt_fp2unsigned
stw      r3, 0x284(r29)
li       r0, 1
lwz      r5, 0x30(r1)
mr       r31, r29
stw      r3, 0x288(r29)
li       r30, 0
lwz      r6, 0x28(r1)
lwz      r3, 0x2c(r1)
stw      r6, 0x264(r29)
lwz      r4, 0x34(r1)
stw      r3, 0x268(r29)
stw      r5, 0x26c(r29)
stw      r4, 0x270(r29)
stw      r6, 0x274(r29)
stw      r3, 0x278(r29)
stw      r5, 0x27c(r29)
stw      r4, 0x280(r29)
stb      r0, 0x260(r29)
lwz      r0, 0x40(r29)
stw      r5, 0x20(r1)
slwi     r0, r0, 2
add      r3, r29, r0
stw      r4, 0x24(r1)
lwz      r0, 0x48(r3)
stw      r0, 0x2ac(r29)

lbl_803F1384:
li       r0, 0
stb      r0, 0x17c(r31)
lwz      r3, 0x178(r31)
cmplwi   r3, 0
beq      lbl_803F1430
lwz      r7, 0x180(r31)
mr       r28, r3
addi     r4, r1, 0x18
stw      r7, 0xc(r1)
lbz      r5, 0xc(r1)
lbz      r0, 0xd(r1)
stb      r5, 0x104(r3)
lbz      r5, 0xe(r1)
stb      r0, 0x105(r3)
lbz      r0, 0xf(r1)
stb      r5, 0x106(r3)
stb      r0, 0x107(r3)
lwz      r6, 0x184(r31)
stw      r7, 0x10(r1)
stw      r6, 8(r1)
lbz      r5, 8(r1)
lbz      r0, 9(r1)
stb      r5, 0x108(r3)
lbz      r5, 0xa(r1)
stb      r0, 0x109(r3)
lbz      r0, 0xb(r1)
stb      r5, 0x10a(r3)
stb      r0, 0x10b(r3)
lwz      r0, 0x188(r31)
stw      r6, 0x14(r1)
stw      r0, 0x18(r1)
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x18c(r31)
mr       r3, r28
addi     r4, r1, 0x1c
stw      r0, 0x1c(r1)
lwz      r12, 0(r28)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803F1430:
addi     r30, r30, 1
addi     r31, r31, 0x4c
cmpwi    r30, 3
blt      lbl_803F1384
lwz      r3, 0x40(r29)
li       r6, 1
lfs      f2, lbl_8051FED8@sda21(r2)
li       r0, 0
mulli    r5, r3, 0x4c
lfs      f0, lbl_8051FECC@sda21(r2)
mr       r3, r29
li       r4, 0
addi     r7, r5, 0x160
add      r7, r29, r7
stb      r6, 0x1c(r7)
lwz      r5, sys@sda21(r13)
lfs      f1, 0x54(r5)
fmuls    f1, f2, f1
stfs     f1, 0x44(r7)
stfs     f0, 0x40(r7)
stb      r6, 0x48(r7)
stb      r0, 0x49(r7)
bl       openMsg__Q33ebi6Screen10TOmakeGameFl
lwz      r3, 0x80(r29)
li       r0, 0
li       r4, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x84(r29)
stb      r0, 0xb0(r3)
lwz      r3, 0x88(r29)
stb      r0, 0xb0(r3)
lwz      r0, 0x40(r29)
slwi     r0, r0, 2
add      r3, r29, r0
lwz      r3, 0x80(r3)
stb      r4, 0xb0(r3)
lwz      r3, 0x44(r29)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0x54(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
lwz      r28, 0x40(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	803F14F4
 * Size:	00003C
 */
void TOmakeGame::doCloseScreen(ArgClose*) { mAnimationExit.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true); }

/*
 * --INFO--
 * Address:	803F1530
 * Size:	000054
 */
bool TOmakeGame::doUpdateStateOpen()
{
	mScreenObj->update();
	return !!mAnimationEnter.isFinish();
}

/*
 * --INFO--
 * Address:	803F1584
 * Size:	000258
 */
bool TOmakeGame::doUpdateStateWait()
{
	mScreenObj->update();
	if (mExitState) {
		mPad.update();
		if (mPad._0D) {
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
			if (mInput->mButton.mButtonDown & Controller::PRESS_A) {
				mExitState = false;
			}
			if (mInput->mButton.mButtonDown & Controller::PRESS_B) {
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

/*
 * --INFO--
 * Address:	803F17DC
 * Size:	000054
 */
bool TOmakeGame::doUpdateStateClose()
{
	mScreenObj->update();
	return !!mAnimationExit.isFinish();
}

/*
 * --INFO--
 * Address:	803F1830
 * Size:	000074
 */
void TOmakeGame::doDraw()
{
	Graphics* gfx       = sys->mGfx;
	J2DPerspGraph* graf = &gfx->mPerspGraph;

	graf->setPort();
	mScreenObj->draw(*gfx, *graf);
}

/*
 * --INFO--
 * Address:	803F18A4
 * Size:	000044
 */
void TOmakeGame::setController(Controller* pad)
{
	mInput = pad;
	mPad.init(pad, 0, 2, &mSelection, EUTPadInterface_countNum::MODE_DOWNUP, 0.66f, 0.15f);
}

/*
 * --INFO--
 * Address:	803F18E8
 * Size:	000048
 */
bool TOmakeGame::isDelegateControl()
{
	bool ret = false;
	if (!mExitState && !isCloseScreen()) {
		ret = true;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803F1930
 * Size:	00003C
 */
void TOmakeGame::setSelfControl()
{
	mExitState = true;
	mCursor.mScaleMgr.up(0.1f, 30.0f, 0.6f, 0.0f);
}

/*
 * --INFO--
 * Address:	803F196C
 * Size:	000108
 */
bool TOmakeGame::openMsg(long id)
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
