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
	mIsFinished = 0;
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
			switch (mSaveMgr->mCurrStateID) {
			case 2:
			case 0:
				disp->mIsFinished = 1;
				break;

			case 1:
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
		if (pad->mButton.mButtonDown & Controller::PRESS_A) {
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
	paneList[0]->hide();
	paneList[1]->hide();

	J2DPane** list = paneList;
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
		list[i]->add(0.0f, mScrollPos - offs);
	}

	for (int i = 0; i < 2; i++) {
		mScreenMain->search(nametags[i])->show();
		mScreenMain->search(icontags[i])->show();
		mCounterOtaValues[i]->show();
	}

	u32 i = 0;
	int next;
	FOREACH_NODE(Game::Result::TNode, mResultNode->mChild, cNode)
	{
		int isOdd = i % 2;
		f32 calc  = i * mScrollUpDown + mScrollPos;

		if (calc < -mScrollUpDown || mScissorMax < calc) {
			paneList[isOdd]->add(0.0f, offs);
		} else {
			if ((cNode->mItemMgr->mFlags & LOSTITEM_Unk2) == 2) {
				if (cNode->mPokoValue < 0) {
					next = 0;
				} else {
					next = cNode->mQuantity * cNode->mPokoValue;
				}
				setAlpha(isOdd, 48);
			} else {
				next = cNode->getNextIndex(cNode->mQuantity, cNode->mLostNum);
				setAlpha(isOdd, 255);
			}
			paneList[!isOdd]->hide();
			paneList[isOdd]->show();
			paneList[isOdd]->add(0.0f, offs);
			setTex(mScreenMain, icontags[isOdd], cNode->mTexture->mTexInfo);
			u64 tag = cNode->mMesgTag;
			if (tag == 0) {
				mScreenMain->search(icontags[isOdd])->hide();
			} else {
				mScreenMain->search(icontags[isOdd])->setMsgID(tag + 1);
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
		mCounterOtaValues[i]->hide();
		mScreenMain->draw(gfx, gfx.mOrthoGraph);
	}

	GXSetScissor(x, y, wd, ht);
	pane1->show();
	pane2->hide();
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
		JGeometry::TBox2f box(0.0f, zero + x, 0.0f, zero + y);
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
	/*
stwu     r1, -0xd0(r1)
mflr     r0
stw      r0, 0xd4(r1)
stfd     f31, 0xc0(r1)
psq_st   f31, 200(r1), 0, qr0
stfd     f30, 0xb0(r1)
psq_st   f30, 184(r1), 0, qr0
stmw     r20, 0x80(r1)
mr       r20, r3
lis      r5, 0x414C4C32@ha
lwz      r3, 0x40(r3)
mr       r21, r4
addi     r6, r5, 0x414C4C32@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r29, r3
lwz      r3, 0x40(r20)
lwz      r7, lbl_80520EC0@sda21(r2)
lis      r5, 0x74703030@ha
lwz      r12, 0(r3)
lis      r4, 0x004E7365@ha
lwz      r0, lbl_80520EC4@sda21(r2)
addi     r6, r5, 0x74703030@l
lwz      r12, 0x3c(r12)
addi     r5, r4, 0x004E7365@l
stw      r7, 0x2c(r1)
stw      r0, 0x30(r1)
mtctr    r12
bctrl
stw      r3, 0x2c(r1)
lis      r5, 0x74703031@ha
lwz      r3, 0x40(r20)
lis      r4, 0x004E7365@ha
addi     r6, r5, 0x74703031@l
lwz      r12, 0(r3)
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
stw      r3, 0x30(r1)
lis      r4, 0x44414C4C@ha
lwz      r3, 0x40(r20)
addi     r6, r4, 0x44414C4C@l
li       r5, 0x4e33
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lis      r5, lbl_80498450@ha
lfdu     f3, lbl_80498450@l(r5)
lis      r4, lbl_80498460@ha
lfdu     f1, lbl_80498460@l(r4)
lfd      f2, 8(r5)
mr       r30, r3
lfd      f0, 8(r4)
addi     r3, r21, 0xbc
stfd     f3, 0x58(r1)
stfd     f2, 0x60(r1)
stfd     f1, 0x48(r1)
stfd     f0, 0x50(r1)
lwz      r12, 0xbc(r21)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
li       r3, 1
li       r0, 0
stb      r3, 0xb0(r29)
mr       r4, r21
lwz      r6, 0x2c(r1)
addi     r22, r1, 0x2c
stb      r0, 0xb0(r30)
addi     r5, r21, 0xbc
lwz      r3, 0x30(r1)
stb      r0, 0xb0(r6)
stb      r0, 0xb0(r3)
lwz      r3, 0x40(r20)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
li       r0, 0
addi     r3, r1, 0x28
stw      r0, 0x28(r1)
addi     r4, r1, 0x24
addi     r5, r1, 0x20
addi     r6, r1, 0x1c
stw      r0, 0x24(r1)
stw      r0, 0x20(r1)
stw      r0, 0x1c(r1)
bl       GXGetScissor
lwz      r3, 0x28(r1)
lwz      r4, 0xe8(r20)
lwz      r5, 0x20(r1)
lwz      r6, 0xec(r20)
bl       GXSetScissor
li       r0, 0
lfs      f1, lbl_8051FFBC@sda21(r2)
stb      r0, 0xb0(r29)
li       r23, 0
stb      r0, 0xb0(r30)
lfs      f0, 0xd4(r20)
fmuls    f30, f1, f0

lbl_803F98E8:
lwz      r3, 0(r22)
lfs      f0, 0xd0(r20)
lwz      r12, 0(r3)
fsubs    f2, f0, f30
lfs      f1, lbl_8051FFA8@sda21(r2)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
addi     r23, r23, 1
addi     r22, r22, 4
cmpwi    r23, 2
blt      lbl_803F98E8
mr       r24, r20
addi     r22, r1, 0x58
addi     r23, r1, 0x48
li       r25, 0

lbl_803F9928:
lwz      r3, 0x40(r20)
lwz      r5, 0(r22)
lwz      r12, 0(r3)
lwz      r6, 4(r22)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x40(r20)
lwz      r5, 0(r23)
lwz      r12, 0(r3)
lwz      r6, 4(r23)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0xa0(r24)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
addi     r25, r25, 1
addi     r23, r23, 8
cmpwi    r25, 2
addi     r24, r24, 4
addi     r22, r22, 8
blt      lbl_803F9928
lwz      r3, 0x3c(r20)
li       r24, 0
lfd      f31, lbl_8051FFC0@sda21(r2)
lis      r31, 0x4330
lwz      r23, 0x24(r3)
b        lbl_803F9BCC

lbl_803F99B4:
stw      r24, 0x6c(r1)
clrlwi   r26, r24, 0x1f
lfs      f3, 0xd4(r20)
stw      r31, 0x68(r1)
lfs      f1, 0xd0(r20)
fneg     f0, f3
lfd      f2, 0x68(r1)
fsubs    f2, f2, f31
fmadds   f1, f2, f3, f1
fcmpo    cr0, f1, f0
blt      lbl_803F9A00
lwz      r3, 0xec(r20)
lis      r0, 0x4330
stw      r0, 0x68(r1)
stw      r3, 0x6c(r1)
lfd      f0, 0x68(r1)
fsubs    f0, f0, f31
fcmpo    cr0, f0, f1
bge      lbl_803F9A28

lbl_803F9A00:
slwi     r0, r26, 2
addi     r3, r1, 0x2c
lwzx     r3, r3, r0
fmr      f2, f30
lfs      f1, lbl_8051FFA8@sda21(r2)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
b        lbl_803F9BC4

lbl_803F9A28:
lwz      r3, 0x48(r23)
lwz      r0, 8(r3)
rlwinm   r0, r0, 0, 0x1e, 0x1e
cmpwi    r0, 2
bne      lbl_803F9A6C
lwz      r3, 0x3c(r23)
cmpwi    r3, 0
bge      lbl_803F9A50
li       r22, 0
b        lbl_803F9A58

lbl_803F9A50:
lwz      r0, 0x30(r23)
mullw    r22, r0, r3

lbl_803F9A58:
mr       r3, r20
mr       r4, r26
li       r5, 0x30
bl       setAlpha__Q32kh6Screen13ObjCaveResultFiUc
b        lbl_803F9AA0

lbl_803F9A6C:
lwz      r4, 0x3c(r23)
lwz      r3, 0x30(r23)
lwz      r0, 0x34(r23)
cmpwi    r4, 0
add      r0, r3, r0
bge      lbl_803F9A8C
lwz      r22, 0x38(r23)
b        lbl_803F9A90

lbl_803F9A8C:
mullw    r22, r0, r4

lbl_803F9A90:
mr       r3, r20
mr       r4, r26
li       r5, 0xff
bl       setAlpha__Q32kh6Screen13ObjCaveResultFiUc

lbl_803F9AA0:
cntlzw   r0, r26
addi     r3, r1, 0x2c
rlwinm   r0, r0, 0x1d, 0x16, 0x1d
slwi     r25, r26, 2
lwzx     r4, r3, r0
li       r5, 0
lwzx     r3, r3, r25
li       r0, 1
stb      r5, 0xb0(r4)
fmr      f2, f30
lfs      f1, lbl_8051FFA8@sda21(r2)
stb      r0, 0xb0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r4, 0x2c(r23)
slwi     r26, r26, 3
addi     r0, r1, 0x58
lwz      r3, 0x40(r20)
add      r6, r0, r26
lwz      r7, 0x20(r4)
lwz      r5, 0(r6)
lwz      r6, 4(r6)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPC7ResTIMG
lwz      r28, 0x40(r23)
li       r3, 0
lwz      r27, 0x44(r23)
xor      r0, r28, r3
xor      r3, r27, r3
or.      r0, r3, r0
bne      lbl_803F9B50
lwz      r3, 0x40(r20)
addi     r0, r1, 0x48
add      r6, r0, r26
lwz      r12, 0(r3)
lwz      r5, 0(r6)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r6)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)
b        lbl_803F9B8C

lbl_803F9B50:
lwz      r3, 0x40(r20)
addi     r0, r1, 0x48
add      r6, r0, r26
lwz      r12, 0(r3)
lwz      r5, 0(r6)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r6)
mtctr    r12
bctrl
li       r0, 1
li       r4, 0
addc     r0, r27, r0
stw      r0, 0x1c(r3)
adde     r0, r28, r4
stw      r0, 0x18(r3)

lbl_803F9B8C:
add      r3, r20, r25
stw      r22, 0xbc(r3)
lwz      r3, 0xa0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0x40(r20)
mr       r4, r21
addi     r5, r21, 0xbc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl

lbl_803F9BC4:
lwz      r23, 0x18(r23)
addi     r24, r24, 1

lbl_803F9BCC:
cmplwi   r23, 0
bne      lbl_803F99B4
addi     r26, r1, 0x2c
addi     r23, r1, 0x58
addi     r22, r1, 0x48
b        lbl_803F9CC0

lbl_803F9BE4:
clrlwi   r27, r24, 0x1f
rlwinm   r25, r24, 2, 0x1d, 0x1d
cntlzw   r0, r27
li       r5, 0
rlwinm   r0, r0, 0x1d, 0x16, 0x1d
lwzx     r3, r26, r25
lwzx     r4, r26, r0
li       r0, 1
fmr      f2, f30
lfs      f1, lbl_8051FFA8@sda21(r2)
stb      r5, 0xb0(r4)
stb      r0, 0xb0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
mr       r3, r20
mr       r4, r27
li       r5, 0xff
bl       setAlpha__Q32kh6Screen13ObjCaveResultFiUc
lwz      r3, 0x40(r20)
slwi     r27, r27, 3
add      r6, r23, r27
lwz      r12, 0(r3)
lwz      r5, 0(r6)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r6)
mtctr    r12
bctrl
li       r0, 0
add      r6, r22, r27
stb      r0, 0xb0(r3)
lwz      r3, 0x40(r20)
lwz      r5, 0(r6)
lwz      r12, 0(r3)
lwz      r6, 4(r6)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r4, 0
addi     r0, r25, 0xa0
stb      r4, 0xb0(r3)
lwzx     r3, r20, r0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x40(r20)
mr       r4, r21
addi     r5, r21, 0xbc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
addi     r24, r24, 1

lbl_803F9CC0:
cmplwi   r24, 6
blt      lbl_803F9BE4
lwz      r3, 0x28(r1)
lwz      r4, 0x24(r1)
lwz      r5, 0x20(r1)
lwz      r6, 0x1c(r1)
bl       GXSetScissor
li       r7, 0
li       r0, 1
stb      r7, 0xb0(r29)
mr       r4, r21
lwz      r6, 0x2c(r1)
addi     r5, r21, 0xbc
stb      r0, 0xb0(r30)
lwz      r3, 0x30(r1)
stb      r7, 0xb0(r6)
stb      r7, 0xb0(r3)
lwz      r3, 0x40(r20)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r3, 0x3c(r20)
lis      r23, 0x6f6e
lis      r22, 0x6950
lwz      r24, 0x24(r3)
b        lbl_803F9D50

lbl_803F9D2C:
lwz      r7, 0x2c(r24)
mr       r8, r21
lwz      r3, 0x48(r24)
addi     r6, r23, 0x3030
lwz      r4, 0x44(r20)
addi     r5, r22, 0x6963
lwz      r7, 0x20(r7)
bl
draw__Q32kh6Screen11LostItemMgrFPQ29P2DScreen10Mgr_tuningUxPC7ResTIMGR8Graphics
lwz      r24, 0x18(r24)

lbl_803F9D50:
cmplwi   r24, 0
bne      lbl_803F9D2C
lbz      r0, 0x105(r20)
cmplwi   r0, 0
beq      lbl_803F9E1C
addi     r3, r21, 0xbc
lwz      r12, 0xbc(r21)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lbz      r0, 0x105(r20)
li       r8, 0
stb      r8, 0x18(r1)
addi     r3, r21, 0xbc
addi     r4, r1, 8
addi     r5, r1, 0xc
stb      r8, 0x19(r1)
addi     r6, r1, 0x10
addi     r7, r1, 0x14
stb      r8, 0x1a(r1)
stb      r0, 0x1b(r1)
lwz      r0, 0x18(r1)
stw      r0, 0x14(r1)
stw      r0, 0x10(r1)
stw      r0, 0xc(r1)
stw      r0, 8(r1)
bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
bl       getRenderModeObj__6SystemFv
lhz      r22, 6(r3)
bl       getRenderModeObj__6SystemFv
lhz      r4, 4(r3)
lis      r0, 0x4330
lfs      f3, lbl_8051FFA8@sda21(r2)
addi     r3, r21, 0xbc
stw      r4, 0x6c(r1)
addi     r4, r1, 0x34
lfd      f2, lbl_8051FFC0@sda21(r2)
stw      r0, 0x68(r1)
lfd      f0, 0x68(r1)
stw      r22, 0x74(r1)
fsubs    f1, f0, f2
stw      r0, 0x70(r1)
lfd      f0, 0x70(r1)
fadds    f1, f3, f1
stfs     f3, 0x34(r1)
fsubs    f0, f0, f2
stfs     f3, 0x38(r1)
fadds    f0, f3, f0
stfs     f1, 0x3c(r1)
stfs     f0, 0x40(r1)
bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_803F9E1C:
lbz      r0, 0x104(r20)
rlwinm.  r0, r0, 0, 0x1b, 0x1b
beq      lbl_803F9E58
addi     r3, r21, 0xbc
lwz      r12, 0xbc(r21)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x48(r20)
mr       r4, r21
addi     r5, r21, 0xbc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl

lbl_803F9E58:
lbz      r0, 0x104(r20)
rlwinm.  r0, r0, 0, 0x1d, 0x1d
beq      lbl_803F9E80
addi     r3, r21, 0x190
lwz      r12, 0x190(r21)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r20)
bl       draw__Q33ebi4Save4TMgrFv

lbl_803F9E80:
psq_l    f31, 200(r1), 0, qr0
lfd      f31, 0xc0(r1)
psq_l    f30, 184(r1), 0, qr0
lfd      f30, 0xb0(r1)
lmw      r20, 0x80(r1)
lwz      r0, 0xd4(r1)
mtlr     r0
addi     r1, r1, 0xd0
blr
	*/
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
	JGeometry::TVec3f vec1 = (mScreenMain->search('Nmask')->getGlbVtx(0));
	JGeometry::TVec3f vec2 = (mScreenMain->search('Nmask')->getGlbVtx(3));
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
		if (mAnimTimers[0] >= mMainAnim->mFrameLength) {
			mAnimTimers[0] = 0.0f;
		}

		mAnimTimers[2] += 1.0f;
		if (mAnimTimers[2] >= mMainAnimColor->mFrameLength) {
			mAnimTimers[2] = 0.0f;
		}

		mAnimTimers[4] += 1.0f;
		if (mAnimTimers[4] >= mAnimTexSRT->mFrameLength) {
			mAnimTimers[4] = 0.0f;
		}

		mAnimTimers[5] += 1.0f;
		if (mAnimTimers[5] >= mAnimTevReg->mFrameLength) {
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
