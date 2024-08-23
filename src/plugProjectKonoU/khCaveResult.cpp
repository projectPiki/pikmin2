#include "types.h"
#include "kh/khCaveResult.h"
#include "kh/khLostItem.h"
#include "Dolphin/rand.h"
#include "efx2d/T2DChangesmoke.h"
#include "efx2d/T2DCavecomp.h"
#include "PSSystem/PSSystemIF.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/StickAnimMgr.h"
#include "og/newScreen/ogUtil.h"
#include "Game/MemoryCard/Mgr.h"
#include "LoadResource.h"
#include "Controller.h"
#include "Dolphin/gx.h"
#include "Screen/Game2DMgr.h"

namespace kh {
namespace Screen {

/**
 * @note Address: 0x803F8694
 * @note Size: 0x7C
 */
DispCaveResult::DispCaveResult(Game::Result::TNode* node, u32 death, u32 otakara, u32 otakaraMax, u32 pokos, bool paydebt, JKRHeap* heap,
                               bool caveComp)
{
	init(node, death, caveComp);
	mTotalPokos       = pokos;
	mDebtPayed        = paydebt;
	mCollectedOtakara = otakara;
	mMaxOtakara       = otakaraMax;
	mHeap             = heap;
}

/**
 * @note Address: 0x803F8710
 * @note Size: 0xAC
 */
void DispCaveResult::init(Game::Result::TNode* node, u32 death, bool caveComp)
{
	mResultNode            = node;
	mLostTreasures         = 0;
	mTotalNotLostTreasures = 0;
	mCavePokos             = 0;
	mTreasureNodeCount     = 0;

	FOREACH_NODE(Game::Result::TNode, mResultNode->mChild, cNode)
	{
		if (cNode->mPokoValue > 0 || cNode->mLostNum != 0) {
			mTotalNotLostTreasures++;
		}
		mTreasureNodeCount++;
		mLostTreasures += cNode->mLostNum;

		if (cNode->mPokoValue > 0 || !cNode->mLostNum) {
			mCavePokos += cNode->mTotalPokos;
		}
	}

	mDeadPikis  = death;
	mCaveComp   = caveComp;
	mIsFinished = ::Screen::Game2DMgr::CHECK2D_CaveResult_MenuOpen;
}

/**
 * @note Address: 0x803F87BC
 * @note Size: 0x134
 */
ObjCaveResult::ObjCaveResult()
{
	mSaveMgr        = nullptr;
	mResultNode     = nullptr;
	mScreenComplete = nullptr;
	mScreenDropItem = nullptr;
	mScreenMain     = nullptr;

	mCompleteAnim      = nullptr;
	mMainAnim          = nullptr;
	mCompleteAnimColor = nullptr;
	mMainAnimColor     = nullptr;
	mAnimTexSRT        = nullptr;
	mAnimTevReg        = nullptr;

	mAnimTimers[5] = 0.0f;
	mAnimTimers[4] = 0.0f;
	mAnimTimers[3] = 0.0f;
	mAnimTimers[1] = 0.0f;
	mAnimTimers[2] = 0.0f;
	mAnimTimers[0] = 0.0f;

	mEfxComp   = nullptr;
	mStickAnim = nullptr;

	mFadePane4         = nullptr;
	mFadePaneDownArrow = nullptr;
	mFadePaneUpArrow   = nullptr;
	mFadePane1         = nullptr;

	mCounterTotalPokos        = nullptr;
	mCounterTreasureMax       = nullptr;
	mCounterTreasureCollected = nullptr;
	mCounterOtaValues[1]      = nullptr;
	mCounterOtaValues[0]      = nullptr;
	mCounterDeadPiki          = nullptr;
	mCounterCavePokos         = nullptr;

	mTotalPokos       = 0;
	mMaxOtakara       = 0;
	mOtakaraCount     = 0;
	mCurrOtaValues[1] = 0;
	mCurrOtaValues[0] = 0;
	mDeadPiki         = 0;
	mCavePokos        = 0;

	mScrollPos         = 0.0f;
	mScrollUpDown      = 0.0f;
	mScrollSelIndex    = -6;
	mScrollSelIndexMax = 0;
	mScrollTargetDist  = msVal.mScrollTargetInitialDist;

	mScrollMoveTimer       = 0;
	mScissorMax            = 0;
	mScissorMin            = 0;
	mStatus                = 3;
	mChangeStateDelay      = 0;
	mUnusedValue           = 0;
	mFlag                  = 0;
	mAlpha                 = 255;
	mScrollMoveDownCounter = 0;
	mScrollMoveUpCounter   = 0;
}

/**
 * @note Address: 0x803F88F0
 * @note Size: 0xB08
 */
void ObjCaveResult::doCreate(JKRArchive* arc)
{

	JUT_ASSERTLINE(191, getDispMember()->isID(OWNER_KH, MEMBER_CAVE_RESULT), "disp member err");

	DispCaveResult* disp = static_cast<DispCaveResult*>(getDispMember());

	mScreenMain = new P2DScreen::Mgr_tuning;
	mScreenMain->set("result_doukutu.blo", 0x1040000, arc);

	mScreenDropItem = new P2DScreen::Mgr_tuning;
	mScreenDropItem->set("result_doukutu_drop_item.blo", 0x1040000, arc);

	void* file     = JKRFileLoader::getGlbResource("result_doukutu.bck", arc);
	mMainAnim      = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	file           = JKRFileLoader::getGlbResource("result_doukutu.bpk", arc);
	mMainAnimColor = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));
	file           = JKRFileLoader::getGlbResource("result_doukutu.btk", arc);
	mAnimTexSRT    = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(file));
	file           = JKRFileLoader::getGlbResource("result_doukutu.brk", arc);
	mAnimTevReg    = static_cast<J2DAnmTevRegKey*>(J2DAnmLoaderDataBase::load(file));

	mScreenMain->setAnimation(mMainAnim);
	mScreenMain->setAnimation(mMainAnimColor);
	mScreenMain->setAnimation(mAnimTexSRT);
	mScreenMain->setAnimation(mAnimTevReg);

	JKRHeap* oldHeap = JKRGetCurrentHeap();
	if (disp->mHeap) {
		disp->mHeap->becomeCurrentHeap();
	}

	mScreenComplete = new P2DScreen::Mgr_tuning;
	mScreenComplete->set("doukutu_complete.blo", 0x40000, arc);

	file          = JKRFileLoader::getGlbResource("doukutu_complete.bck", arc);
	mCompleteAnim = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));

	file               = JKRFileLoader::getGlbResource("doukutu_complete.bpk", arc);
	mCompleteAnimColor = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));

	mScreenComplete->setAnimation(mCompleteAnim);
	mScreenComplete->setAnimation(mCompleteAnimColor);
	mScreenComplete->animation();

	og::Screen::setCallBackMessage(mScreenMain);
	mResultNode = disp->mResultNode;

	Game::Result::TNode* cNode = static_cast<Game::Result::TNode*>(mResultNode->mChild);

	while (cNode) {
		cNode->mItemMgr = new kh::Screen::LostItemMgr(cNode->mLostNum);
		cNode           = static_cast<Game::Result::TNode*>(cNode->mNext);
	}

	if (disp->mTreasureNodeCount > 6) {
		setFlag(CAVERESFLAG_CanScroll);
		mScrollSelIndexMax = disp->mTreasureNodeCount - 6;
	}

	mScrollUpDown = mScreenMain->search('Nsetp01')->getBounds()->i.y - mScreenMain->search('Nsetp00')->getBounds()->i.y;
	mScrollPos    = mScrollUpDown * (int)(1 - mScrollSelIndex);

	kh::Screen::setInfAlpha(mScreenMain->search('Nicon00'));
	kh::Screen::setInfAlpha(mScreenMain->search('Nicon01'));

	mCavePokos    = 0;
	mDeadPiki     = 0;
	mOtakaraCount = disp->mCollectedOtakara + disp->mLostTreasures - disp->mTotalNotLostTreasures;
	mMaxOtakara   = disp->mMaxOtakara;
	mTotalPokos   = disp->mTotalPokos - disp->mCavePokos;

	u64 debtTag;
	if (disp->mDebtPayed) {
		mScreenMain->search('Nfi_menu')->hide();
		mScreenMain->search('Nco_menu')->show();
		debtTag = 'Pcomp01';
	} else {
		mScreenMain->search('Nfi_menu')->show();
		mScreenMain->search('Nco_menu')->hide();
		debtTag = 'Pfin01';
	}

	if (disp->mCaveComp || (disp->mMaxOtakara != disp->mCollectedOtakara)) {
		mScreenMain->search('Pananorm')->show();
		mScreenMain->search('Panacomp')->hide();
	} else {
		mScreenMain->search('Pananorm')->hide();
		mScreenMain->search('Panacomp')->show();
	}

	mScreenMain->search('Panacomp')->setBasePosition(J2DPOS_Center);

	og::Screen::CallBack_Picture* pic = og::Screen::setCallBack_3DStick(arc, mScreenMain, 'PICT_004');
	mStickAnim                        = new og::Screen::StickAnimMgr(pic);
	mStickAnim->stickUpDown();

	mFadePaneUpArrow = kh::Screen::khUtilFadePane::create(mScreenMain, 'Nyame_u', 16);
	mFadePaneUpArrow->fadeout();
	mFadePaneDownArrow = kh::Screen::khUtilFadePane::create(mScreenMain, 'Nyame_l', 16);
	mFadePaneDownArrow->fadeout();
	mFadePane1 = kh::Screen::khUtilFadePane::create(mScreenMain, 'PICT_004', 16);
	mFadePane1->add(mScreenMain->search('N_3d'));
	mFadePane1->fadeout();
	mFadePane4 = kh::Screen::khUtilFadePane::create(mScreenMain, 'Nmain_m', 16);
	mFadePane4->fadeout();

	mCounterCavePokos         = og::Screen::setCallBack_CounterRV(mScreenMain, 'Ptomadp1', &mCavePokos, 6, true, false, arc);
	mCounterDeadPiki          = og::Screen::setCallBack_CounterRV(mScreenMain, 'Ppiki1', &mDeadPiki, 3, true, false, arc);
	mCounterOtaValues[0]      = og::Screen::setCallBack_CounterRV(mScreenMain, 'Pmad00_1', &mCurrOtaValues[0], 4, false, false, arc);
	mCounterOtaValues[1]      = og::Screen::setCallBack_CounterRV(mScreenMain, 'Pmad01_1', &mCurrOtaValues[1], 4, false, false, arc);
	mCounterTreasureCollected = og::Screen::setCallBack_CounterRV(mScreenMain, 'Pota_1', &mOtakaraCount, 2, true, true, arc);
	mCounterTreasureMax       = og::Screen::setCallBack_CounterRV(mScreenMain, 'Pota_to1', &mMaxOtakara, 2, false, true, arc);
	mCounterTotalPokos        = og::Screen::setCallBack_CounterRV(mScreenMain, debtTag, &mTotalPokos, 9, false, false, arc);
	mCounterTreasureMax->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);

	if (!disp->mDebtPayed && (disp->mCaveComp || disp->mMaxOtakara != disp->mCollectedOtakara)) {
		mCounterTreasureMax->getMotherPane()->hide();
		mCounterTreasureCollected->getMotherPane()->add(msVal.mCollectedTreasureCounterOffsetX, msVal.mCollectedTreasureCounterOffsetY);
		mScreenMain->search('PICT_008')->hide();
		mScreenMain->search('Ptits14')->hide();
		mScreenMain->search('Ptits15')->hide();
	}
	mScaleMgr = new og::Screen::ScaleMgr;

	mScreenMain->search('Nsetp02')->hide();
	mScreenMain->search('Nsetp03')->hide();
	mScreenMain->search('Nsetp04')->hide();
	mScreenMain->search('Nsetp05')->hide();
	mScreenMain->search('Piname00')->setMsgID('0101_00');
	mScreenMain->search('Piname01')->setMsgID('0101_00');

	mSaveMgr = ebi::Save::TMgr::createInstance();
	loadSaveMgrResources();
	mSaveMgr->setControllers(getGamePad());
	mSaveMgr->mSaveType = 1;
	mEfxComp            = new efx2d::T2DCavecompLoop;

	if (disp->mHeap) {
		oldHeap->becomeCurrentHeap();
	}
}

/**
 * @note Address: 0x803F93F8
 * @note Size: 0x34C
 */
bool ObjCaveResult::doUpdate()
{
	JUT_ASSERTLINE(376, getDispMember()->isID(OWNER_KH, MEMBER_CAVE_RESULT), "disp member err");

	DispCaveResult* disp = static_cast<DispCaveResult*>(getDispMember());
	updateAnimation();

	if (isFlag(CAVERESFLAG_SaveOpen)) {
		mSaveMgr->update();
		if (mSaveMgr->isFinish()) {
			switch (mSaveMgr->mEndState) {
			case ebi::Save::TMgr::End_SelectNoSave:
			case ebi::Save::TMgr::End_SaveDone:
				disp->mIsFinished = ::Screen::Game2DMgr::CHECK2D_CaveResult_Finished;
				break;

			case ebi::Save::TMgr::End_Cancel:
				resetFlag(CAVERESFLAG_SaveOpen);
				break;
			}
		}

	} else {
		switch (mStatus) {
		case CAVERES_Normal:
			statusNormal();
			break;
		case CAVERES_ScrollUp:
			statusScrollUp();
			break;
		case CAVERES_ScrollDown:
			statusScrollDown();
			break;
		case CAVERES_ForceScroll:
			statusForceScroll();
			break;
		case CAVERES_DrumRoll:
			statusDrumRoll();
			break;
		case CAVERES_Lost:
			statusLost();
			break;
		case CAVERES_DecP:
			statusDecP();
			break;
		case CAVERES_Effect:
			statusEffect();
			break;
		case CAVERES_AllMoney:
			statusAllMoney();
			break;
		}

		Controller* pad = getGamePad();
		if (pad->getButtonDown() & Controller::PRESS_A) {
			if (!isFlag(CAVERESFLAG_PikisKilledShown)) {
				setFlag(CAVERESFLAG_FinishAutoScroll);
			}
			if (mStatus == CAVERES_Normal) {
				setFlag(CAVERESFLAG_SaveOpen);
				mEfxComp->fade();
				mSaveMgr->start();
			}
		}

		if (isFlag(CAVERESFLAG_FinishAutoScroll)) {
			mScrollSelIndex  = mScrollSelIndexMax;
			mScrollPos       = -mScrollUpDown * (f32)mScrollSelIndex;
			mScrollMoveTimer = 0;
			mCavePokos       = disp->mCavePokos;
			mDeadPiki        = disp->mDeadPikis;
			mTotalPokos      = disp->mTotalPokos;
			mOtakaraCount    = disp->mCollectedOtakara;
			mCounterCavePokos->startPuyoUp(1.0f);
			mCounterDeadPiki->startPuyoUp(1.0f);
			mCounterTotalPokos->startPuyoUp(1.0f);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_SUM_UP, 0);
			pikminSE();

			if (disp->mCaveComp) {
				mStatus           = CAVERES_Effect;
				mChangeStateDelay = msVal.mChangeStateInitialDelay;
			} else {
				mOtakaraCount = disp->mCollectedOtakara;
				mStatus       = CAVERES_Normal;
			}

			kh::Screen::LostItemMgr* mgr;
			FOREACH_NODE(Game::Result::TNode, mResultNode->mChild, cNode)
			{
				mgr = cNode->mItemMgr;
				if ((int)mgr->isFlag(0x1) != 1 && mgr->mMaxPanes != 0) {
					mgr->setFlag(0x2);
				}
			}
			resetFlag(CAVERESFLAG_FinishAutoScroll);
			setFlag(CAVERESFLAG_PikisKilledShown);
		}
	}

	if (!isFlag(CAVERESFLAG_SaveOpen) && (mStatus != CAVERES_Effect) && mAlpha != 0) {
		mAlpha -= msVal.mAlphaRateInEffect;
	}

	return false;
}

/**
 * @note Address: 0x803F9744
 * @note Size: 0x760
 */
void ObjCaveResult::doDraw(Graphics& gfx)
{
	J2DPane* pane1       = mScreenMain->search('NALL2');
	J2DPane* paneList[2] = { mScreenMain->search('Nsetp00'), mScreenMain->search('Nsetp01') };
	J2DPane* pane2       = mScreenMain->search('N3DALL');

	u64 icontags[2] = { 'iPicon00', 'iPicon01' };
	u64 nametags[2] = { 'Piname00', 'Piname01' };

	gfx.mOrthoGraph.setPort();
	pane1->show();
	pane2->hide();
	for (int i = 0; i < 2; i++) {
		paneList[i]->hide();
	}

	mScreenMain->draw(gfx, gfx.mOrthoGraph);

	u32 x, y, wd, ht;
	x  = 0;
	y  = 0;
	wd = 0;
	ht = 0;
	GXGetScissor(&x, &y, &wd, &ht);
	GXSetScissor(x, mScissorMin, wd, mScissorMax);

	pane1->hide();
	pane2->hide();

	f32 offs = mScrollUpDown * 2.0f;
	for (int i = 0; i < 2; i++) {
		paneList[i]->add(0.0f, mScrollPos - offs);
	}

	for (int i = 0; i < 2; i++) {
		mScreenMain->search(icontags[i])->show();
		mScreenMain->search(nametags[i])->show();
		mCounterOtaValues[i]->show();
	}

	u32 i = 0;
	FOREACH_NODE(Game::Result::TNode, mResultNode->mChild, cNode)
	{
		// regswaps are probably mostly from these values
		int isOdd = i % 2;
		u32 next;

		f32 calc = i * mScrollUpDown + mScrollPos;

		if (calc < -mScrollUpDown || mScissorMax < calc) {
			paneList[isOdd]->add(0.0f, offs);
		} else {
			// isFlag doesnt work for this
			if ((cNode->mItemMgr->mFlags & LOSTITEM_Unk2) == 2) {
				if (cNode->mPokoValue < 0) {
					next = 0;
				} else {
					next = cNode->mQuantity * cNode->mPokoValue;
				}
				setAlpha(isOdd, 48);
			} else {
				u32 count = cNode->mQuantity + cNode->mLostNum;
				if (cNode->mPokoValue < 0) {
					next = cNode->mTotalPokos;
				} else {
					next = count * cNode->mPokoValue;
				}
				setAlpha(isOdd, 255);
			}
			paneList[!isOdd]->hide();
			paneList[isOdd]->show();
			paneList[isOdd]->add(0.0f, offs);

			setTex(mScreenMain, icontags[isOdd], cNode->mTexture->mTexInfo);

			u64 tag = cNode->getTag();
			if (tag == 0) {
				mScreenMain->search(nametags[isOdd])->hide();
			} else {
				mScreenMain->search(nametags[isOdd])->setMsgID(tag + 1);
			}
			mCurrOtaValues[isOdd] = next;
			mCounterOtaValues[isOdd]->update();
			mScreenMain->draw(gfx, gfx.mOrthoGraph);
		}
		i++;
	}

	for (; i < 6; i++) {
		int isOdd = i % 2;
		paneList[!isOdd]->hide();
		paneList[isOdd]->show();
		paneList[isOdd]->add(0.0f, offs);
		setAlpha(isOdd, 255);
		mScreenMain->search(icontags[isOdd])->hide();
		mScreenMain->search(nametags[isOdd])->hide();
		mCounterOtaValues[isOdd]->hide();
		mScreenMain->draw(gfx, gfx.mOrthoGraph);
	}

	GXSetScissor(x, y, wd, ht);
	pane1->hide();
	pane2->show();
	paneList[0]->hide();
	paneList[1]->hide();
	mScreenMain->draw(gfx, gfx.mOrthoGraph);

	FOREACH_NODE(Game::Result::TNode, mResultNode->mChild, cNode)
	{
		cNode->mItemMgr->draw(mScreenDropItem, 'iPicon00', cNode->mTexture->mTexInfo, gfx);
	}

	if (mAlpha) {
		gfx.mOrthoGraph.setPort();
		JUtility::TColor c(0, 0, 0, mAlpha);
		gfx.mOrthoGraph.setColor(c);

		u32 y    = System::getRenderModeObj()->efbHeight;
		u32 x    = System::getRenderModeObj()->fbWidth;
		f32 zero = 0.0f;
		JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
		gfx.mOrthoGraph.fillBox(box);
	}

	if (isFlag(CAVERESFLAG_DrawComp)) {
		gfx.mOrthoGraph.setPort();
		mScreenComplete->draw(gfx, gfx.mOrthoGraph);
	}

	if (isFlag(CAVERESFLAG_SaveOpen)) {
		gfx.mPerspGraph.setPort();
		mSaveMgr->draw();
	}
}

/**
 * @note Address: 0x803F9EA4
 * @note Size: 0x68
 */
bool ObjCaveResult::doUpdateFadein()
{
	updateAnimation();

	mAlpha -= msVal.mFadeInOutSpeed;
	if (mAlpha < msVal.mFadeInOutSpeed) {
		mAlpha = 0;
		return true;
	}

	return false;
}

/**
 * @note Address: 0x803F9F0C
 * @note Size: 0x14
 */
void ObjCaveResult::doUpdateFadeinFinish()
{
	mItemDropBaseXPos = 175.0f;
	mItemDropBaseYPos = 224.5f;
}

/**
 * @note Address: 0x803F9F20
 * @note Size: 0x6C
 */
bool ObjCaveResult::doUpdateFadeout()
{
	updateAnimation();
	mAlpha += msVal.mFadeInOutSpeed;
	if (mAlpha > (255 - msVal.mFadeInOutSpeed)) {
		mAlpha = 255;
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803F9F8C
 * @note Size: 0x1DC
 */
void ObjCaveResult::statusNormal()
{
	if (isFlag(CAVERESFLAG_CanScroll)) {
		// at top of scroll list
		if (!mScrollSelIndex) {
			mFadePaneUpArrow->fadeout();
			mFadePaneDownArrow->fadein();
			mStickAnim->stickDown();
		}
		// at bottom of scroll list
		else if (mScrollSelIndex == mScrollSelIndexMax) {
			mFadePaneUpArrow->fadein();
			mFadePaneDownArrow->fadeout();
			mStickAnim->stickUp();
		}
		// in middle of sroll list
		else {
			mFadePaneUpArrow->fadein();
			mFadePaneDownArrow->fadein();
			mStickAnim->stickUpDown();
		}
		mFadePane1->fadein();
	} else {
		mFadePaneUpArrow->fadeout();
		mFadePaneDownArrow->fadeout();
		mFadePane1->fadeout();
	}

	mFadePane4->fadein();
	if (isFlag(CAVERESFLAG_CanScroll)) {
		// press up, begin scroll up state
		if (getGamePad()->getButton() & (Controller::PRESS_UP) && mScrollSelIndex) {
			mScrollSelIndex--;
			if (mScrollMoveUpCounter >= 1) {
				mScrollTargetDist = msVal.mInputScrollInitialDist;
			} else {
				mScrollMoveUpCounter++;
			}

			mScrollMoveDownCounter = 0;
			mStatus                = CAVERES_ScrollUp;
			statusScrollUp();
			return;
		}

		// press down, begin scroll down state
		if (getGamePad()->getButton() & (Controller::PRESS_DOWN) && mScrollSelIndex != mScrollSelIndexMax) {
			mScrollSelIndex++;
			if (mScrollMoveDownCounter >= 1) {
				mScrollTargetDist = msVal.mInputScrollInitialDist;
			} else {
				mScrollMoveDownCounter++;
			}
			mScrollMoveUpCounter = 0;
			mStatus              = CAVERES_ScrollDown;
			statusScrollDown();
			return;
		}

		mScrollMoveDownCounter = 0;
		mScrollMoveUpCounter   = 0;
		mScrollTargetDist      = msVal.mScrollTargetInitialDist;
	}
}

/**
 * @note Address: 0x803FA168
 * @note Size: 0xF4
 */
void ObjCaveResult::statusScrollUp()
{
	f32 p1     = mScrollUpDown * (mScrollSelIndex + 1) * (mScrollTargetDist - mScrollMoveTimer);
	mScrollPos = -((mScrollMoveTimer * (mScrollUpDown * mScrollSelIndex) + p1) / mScrollTargetDist);

	if (mScrollMoveTimer++ == mScrollTargetDist) {
		mScrollMoveTimer = 1;
		mStatus          = CAVERES_Normal;
	}
	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_ROLL, 0);
}

/**
 * @note Address: 0x803FA25C
 * @note Size: 0xF4
 */
void ObjCaveResult::statusScrollDown()
{
	f32 p1     = mScrollUpDown * (mScrollSelIndex - 1) * (mScrollTargetDist - mScrollMoveTimer);
	mScrollPos = -((mScrollMoveTimer * (mScrollUpDown * mScrollSelIndex) + p1) / mScrollTargetDist);

	if (mScrollMoveTimer++ == mScrollTargetDist) {
		mScrollMoveTimer = 1;
		mStatus          = CAVERES_Normal;
	}
	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_ROLL, 0);
}

/**
 * @note Address: 0x803FA350
 * @note Size: 0x2F0
 */
void ObjCaveResult::statusForceScroll()
{
	f32 p1     = mScrollUpDown * (mScrollSelIndex - 1) * (mScrollTargetDist - mScrollMoveTimer);
	mScrollPos = -((mScrollMoveTimer * (mScrollUpDown * mScrollSelIndex) + p1) / mScrollTargetDist);

	if (mScrollMoveTimer++ == mScrollTargetDist) {
		if (mScrollSelIndex == mScrollSelIndexMax) {
			bool check       = false;
			mScrollMoveTimer = 1;
			FOREACH_NODE(Game::Result::TNode, mResultNode->mChild, cNode)
			{
				if ((cNode->mItemMgr->mFlags & LOSTITEM_Unk2) != 2 && cNode->mLostNum) {
					mStatus           = CAVERES_Lost;
					check             = true;
					mChangeStateDelay = 0;
				}
			}
			if (!check) {
				mStatus           = CAVERES_AllMoney;
				mChangeStateDelay = msVal.mChangeStateInitialDelay;
			}
		} else {
			JUT_ASSERTLINE(829, getDispMember()->isID(OWNER_KH, MEMBER_CAVE_RESULT), "disp member err");
			getDispMember();
			int i                     = 0;
			Game::Result::TNode* node = static_cast<Game::Result::TNode*>(mResultNode->mChild);
			for (i; node && i != mScrollSelIndex + 6; i++) {
				node = static_cast<Game::Result::TNode*>(node->mNext);
			}
			if (node && !node->mLostNum) {
				if (node->mPokoValue > 0) {
					mOtakaraCount++;
				}
				if (node->mPokoValue > 0 || !node->mLostNum) {
					mCavePokos += node->mTotalPokos;
				}
				PSSystem::spSysIF->playSystemSe(PSSE_SY_COIN_COUNT, 0);
			}
			mScrollMoveTimer = 1;
			mScrollSelIndex++;
		}
	}

	int i = 0;
	JGeometry::TVec2f pos;
	pos.x = mItemDropBaseXPos;
	pos.y = mItemDropBaseYPos;
	FOREACH_NODE(Game::Result::TNode, mResultNode->mChild, cNode)
	{
		LostItemMgr* mgr = cNode->mItemMgr;
		if (i == mScrollSelIndex + 2 && (mgr->mFlags & LOSTITEM_Unk1) != 1) {
			cNode->mItemMgr->init(pos, i % 2); // is i odd
		}
		i++;
	}
	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_ROLL, 0);
}

/**
 * @note Address: 0x803FA640
 * @note Size: 0x1C
 */
void ObjCaveResult::statusDrumRoll()
{
	mChangeStateDelay = msVal.mChangeStateInitialDelay;
	mStatus           = CAVERES_AllMoney;
}

/**
 * @note Address: 0x803FA65C
 * @note Size: 0xC0
 */
void ObjCaveResult::statusAllMoney()
{
	if (!mChangeStateDelay) {
		JUT_ASSERTLINE(910, getDispMember()->isID(OWNER_KH, MEMBER_CAVE_RESULT), "disp member err");
		DispCaveResult* disp = static_cast<DispCaveResult*>(getDispMember());
		mTotalPokos          = disp->mTotalPokos;
		mCounterTotalPokos->startPuyoUp(1.0f);
		PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_SUM_UP, 0);
		mChangeStateDelay = msVal.mChangeStateInitialDelay;
		mStatus           = CAVERES_DecP;
	} else {
		mChangeStateDelay--;
	}
}

/**
 * @note Address: 0x803FA71C
 * @note Size: 0xE8
 */
void ObjCaveResult::statusDecP()
{
	if (!mChangeStateDelay) {
		JUT_ASSERTLINE(934, getDispMember()->isID(OWNER_KH, MEMBER_CAVE_RESULT), "disp member err");
		DispCaveResult* disp = static_cast<DispCaveResult*>(getDispMember());
		mDeadPiki            = disp->mDeadPikis;
		mCounterDeadPiki->startPuyoUp(1.0f);
		pikminSE();
		if (disp->mCaveComp) {
			mStatus           = CAVERES_Effect;
			mChangeStateDelay = msVal.mChangeStateInitialDelay;
		} else {
			mStatus = CAVERES_Normal;
		}
		setFlag(CAVERESFLAG_PikisKilledShown);
	} else {
		mChangeStateDelay--;
	}
}

/**
 * @note Address: 0x803FA804
 * @note Size: 0x110
 */
void ObjCaveResult::statusLost()
{
	if (!mChangeStateDelay) {
		int i = 0;
		JGeometry::TVec2f pos;
		pos.x = mItemDropBaseXPos;
		pos.y = mItemDropBaseYPos;
		FOREACH_NODE(Game::Result::TNode, mResultNode->mChild, cNode)
		{
			if (cNode->mLostNum != 0 && ((cNode->mItemMgr->mFlags & LOSTITEM_Unk2) != 2)) {
				pos.y = mScrollUpDown * (i - 3 - mScrollSelIndexMax) + pos.y;
				cNode->mItemMgr->init(pos, i % 2);
				mChangeStateDelay = mScrollTargetDist;
				return;
			}
			i++;
		}
		mStatus           = CAVERES_AllMoney;
		mChangeStateDelay = msVal.mChangeStateInitialDelay;
	} else {
		mChangeStateDelay--;
	}
}

/**
 * @note Address: 0x803FA914
 * @note Size: 0x1D4
 */
void ObjCaveResult::statusEffect()
{
	if (!mChangeStateDelay) {
		if (!isFlag(CAVERESFLAG_DrawComp)) {
			mScreenMain->search('Pananorm')->hide();
			mScreenMain->search('Panacomp')->show();
			mScaleMgr->up();
			mCounterTreasureMax->getMotherPane()->show();
			mCounterTreasureCollected->getMotherPane()->add(-msVal.mCollectedTreasureCounterOffsetX,
			                                                -msVal.mCollectedTreasureCounterOffsetY);
			mScreenMain->search('PICT_008')->show();
			mScreenMain->search('Ptits14')->show();
			mScreenMain->search('Ptits15')->show();
			mStatus = CAVERES_Normal;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_WMAP_CAVE_NAME, 0);
		}

		if (mAlpha < msVal.mMaxAlphaInEffect) {
			mAlpha += msVal.mAlphaRateInEffect;
		}

	} else {
		mChangeStateDelay--;
		if (mChangeStateDelay == 0) {
			setFlag(CAVERESFLAG_DrawComp);
			PSSystem::spSysIF->playSystemSe(PSSE_DOKUTSU_COMPLETE, 0);
		}
	}
}

/**
 * @note Address: 0x803FAAE8
 * @note Size: 0x564
 */
void ObjCaveResult::updateAnimation()
{
	JGeometry::TVec3f vec1 = (mScreenMain->search('Nmask')->getGlbVtx(GLBVTX_BtmLeft));
	JGeometry::TVec3f vec2 = (mScreenMain->search('Nmask')->getGlbVtx(GLBVTX_TopRight));
	f32 yoffs              = vec1.y;
	mScissorMin            = vec1.y + 0.5f;
	mScissorMax            = vec2.y - yoffs;

	mMainAnim->mCurrentFrame      = mAnimTimers[0];
	mMainAnimColor->mCurrentFrame = mAnimTimers[2];
	mAnimTexSRT->mCurrentFrame    = mAnimTimers[4];
	mAnimTevReg->mCurrentFrame    = mAnimTimers[5];
	mScreenMain->animation();

	if (!isFlag(CAVERESFLAG_SaveOpen)) {
		mAnimTimers[0] += 1.0f;
		if (mAnimTimers[0] >= mMainAnim->mTotalFrameCount) {
			mAnimTimers[0] = 0.0f;
		}

		mAnimTimers[2] += 1.0f;
		if (mAnimTimers[2] >= mMainAnimColor->mTotalFrameCount) {
			mAnimTimers[2] = 0.0f;
		}

		mAnimTimers[4] += 1.0f;
		if (mAnimTimers[4] >= mAnimTexSRT->mTotalFrameCount) {
			mAnimTimers[4] = 0.0f;
		}

		mAnimTimers[5] += 1.0f;
		if (mAnimTimers[5] >= mAnimTevReg->mTotalFrameCount) {
			mAnimTimers[5] = 0.0f;
		}
	}

	mScreenMain->update();
	mScreenMain->search('Panacomp')->updateScale(mScaleMgr->calc());

	if (isFlag(CAVERESFLAG_DrawComp)) {
		mCompleteAnim->mCurrentFrame      = mAnimTimers[1];
		mCompleteAnimColor->mCurrentFrame = mAnimTimers[3];
		mScreenComplete->animation();
		if (mAnimTimers[1] >= 30.0f && !isFlag(CAVERESFLAG_MakeEfx)) {
			u16 y = System::getRenderModeObj()->efbHeight;
			u16 x = System::getRenderModeObj()->fbWidth;
			efx2d::Arg arg2(Vector2f(x * 0.5f, y * 0.5f));
			mEfxComp->create(&arg2);

			efx2d::Arg arg(Vector2f(getPaneCenterX(mScreenComplete->search('NALL')) + msVal.mCompEfxOffsetX,
			                        getPaneCenterY(mScreenComplete->search('NALL')) + msVal.mCompEfxOffsetY));
			efx2d::T2DCavecomp efx;
			efx.create(&arg);

			setFlag(CAVERESFLAG_MakeEfx);
		}
		mAnimTimers[1] += msVal.mAnimSpeed;
		mAnimTimers[3] += msVal.mAnimSpeed;
		if (mAnimTimers[1] >= mCompleteAnim->getFrameMax() - 1.0f || mAnimTimers[3] >= mCompleteAnimColor->getFrameMax() - 1.0f) {
			resetFlag(CAVERESFLAG_DrawComp);
		}
	}
	FOREACH_NODE(Game::Result::TNode, mResultNode->mChild, cNode) { cNode->mItemMgr->update(); }
}

/**
 * @note Address: 0x803FB04C
 * @note Size: 0x78
 */
void ObjCaveResult::setAlpha(int index, u8 alpha)
{
	u64 tag[2] = { 'Nicon00', 'Nicon01' };
	mScreenMain->search(tag[index])->setAlpha(alpha);
}

/**
 * @note Address: 0x803FB0C4
 * @note Size: 0xC4
 */
void ObjCaveResult::pikminSE()
{
	uint dead = mDeadPiki;
	if (dead == 0) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_PLUS_MINUS, 0);
		PSSystem::spSysIF->playSystemSe(PSSE_PK_RESULT_INCREMENT, 0);
	} else if (dead <= 10) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_DECREMENT, 0);
		PSSystem::spSysIF->playSystemSe(PSSE_PK_VC_SAVED, 0);
	} else if (dead <= 50) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_DECRE_SUM, 0);
		PSSystem::spSysIF->playSystemSe(PSSE_PK_RESULT_DECREMENT, 0);
	} else {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_DECRE_SUM, 0);
		PSSystem::spSysIF->playSystemSe(PSSE_PK_VC_GHOST, 0);
	}
}

/**
 * @note Address: 0x803FB188
 * @note Size: 0x38
 */
LostItem::LostItem()
{
	mRect.p1.y = 0.0f;
	mRect.p1.x = 0.0f;
	mRect.p2.y = 0.0f;
	mRect.p2.x = 0.0f;
	mAlpha     = 255;
	_14        = -40;
	_1A        = 0;
	mAngle     = 0;
	mCounter   = false;
}

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
bool LostItem::update()
{
	bool flag;
	if (mAlpha == 0) {
		flag = true;

	} else {
		if (mCounter == 0) {
			mAlpha += _14;
			if (mAlpha < (int)-_14) {
				mAlpha = 0;
			}
		} else {
			mCounter--;
		}

		flag = false;
		mRect.p2.y += _10;
		mRect.p2.x *= 0.85f;
		mRect.p2.y *= 0.85f;
		mRect.p1.x += mRect.p2.x;
		mRect.p1.y += mRect.p2.y;
		mAngle += _1A;
	}

	return flag;
}

/**
 * @note Address: 0x803FB1C0
 * @note Size: 0x80
 */
LostItemMgr::LostItemMgr(int count)
{
	mMaxPanes = count;
	if (count) {
		mItemList = new LostItem[count];
	} else {
		mItemList = nullptr;
	}

	mFlags = 0;
}

/**
 * @note Address: 0x803FB240
 * @note Size: 0x3EC
 */
void LostItemMgr::init(const JGeometry::TVec2f& pos, bool isOdd)
{
	if (mMaxPanes) {
		f32 x = pos.x;
		f32 y = pos.y;
		if (isOdd) {
			x += 60.0f;
		}

		for (int i = 0; i < mMaxPanes; i++) {
			f32 x1   = randFloat();
			f32 x2   = randFloat();
			f32 y1   = randFloat();
			f32 y2   = randFloat();
			f32 test = randFloat();

			LostItem* item   = &mItemList[i];
			item->mRect.p1.x = x;
			item->mRect.p1.y = y;
			item->mRect.p2.x = 40.0f * test - 20.0f;
			item->mRect.p2.y = 32.0f * y2 - 30.0f;

			item->_10      = (4.0f * y1 + 2.0f);
			item->_1A      = (10000.0f * x2 - 5000.0f);
			item->mCounter = (10.0f * x1 + 8.0f);
		}

		f32 xoffs[5] = { kh::Screen::ObjCaveResult::msVal.mLostItemSmokeOffsetX1, kh::Screen::ObjCaveResult::msVal.mLostItemSmokeOffsetX2,
			             kh::Screen::ObjCaveResult::msVal.mLostItemSmokeOffsetX3, kh::Screen::ObjCaveResult::msVal.mLostItemSmokeOffsetX4,
			             kh::Screen::ObjCaveResult::msVal.mLostItemSmokeOffsetX5 };

		if (isOdd) {
			xoffs[0] += 60.0f;
		}
		f32 efxY = pos.y - 10.0f;
		f32 efxX = pos.x;
		for (int i = 0; i < 5; i++) {
			efx2d::T2DChangesmoke efx;
			Vector2f pos(efxX + xoffs[i], efxY);
			efx2d::Arg arg(pos);
			efx.create(&arg);
		}
		PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_DECREMENT, 0);
		setFlag(0x1 + 0x2);
	}
}

/**
 * @note Address: 0x803FB62C
 * @note Size: 0x108
 */
void LostItemMgr::update()
{
	if (!isFlag(0x1)) {
		return;
	}

	bool doend = true;
	for (int i = 0; i < (int)mMaxPanes; i++) {
		doend &= mItemList[i].update();
	}

	if (doend) {
		resetFlag(0x1);
	}
}

/**
 * @note Address: 0x803FB734
 * @note Size: 0x170
 */
void LostItemMgr::draw(P2DScreen::Mgr_tuning* screen, u64 tag, const ResTIMG* timg, Graphics& gfx)
{
	if (isFlag(0x1)) {
		kh::Screen::setTex(screen, tag, timg);
		J2DPane* pane = screen->search(tag);
		for (int i = 0; i < (int)mMaxPanes; i++) {
			pane->mOffset = JGeometry::TVec2f(mItemList[i].mRect.p1.x, mItemList[i].mRect.p1.y);
			pane->calcMtx();

			pane->setAlpha(mItemList[i].mAlpha);
			pane->setAngle(360.0f * (f32)mItemList[i].mAngle / 65536.0f);

			screen->draw(gfx, gfx.mOrthoGraph);
		}
	}
}

/**
 * @note Address: 0x803FB8A4
 * @note Size: 0xA4
 */
void SceneCaveResult::doUserCallBackFunc(Resource::MgrCommand* command)
{
	og::newScreen::makeLanguageResName(mName, "result_doukutu.szs");
	LoadResource::Arg loadArg(mName);
	LoadResource::Node* resource = gLoadResourceMgr->mountArchive(loadArg);
	if (resource) {
		JKRArchive* archive = resource->mArchive;
		registObj(new ObjCaveResult, archive);
	} else {
		JUT_PANICLINE(1299, "failed");
	}
}

ObjCaveResult::StaticValues ObjCaveResult::msVal;

} // namespace Screen
} // namespace kh
