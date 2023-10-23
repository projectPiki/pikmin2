#include "kh/khDayEndResult.h"
#include "Game/gamePlayData.h"
#include "Game/Piki.h"
#include "Game/DeathMgr.h"
#include "Game/GameSystem.h"
#include "PSSystem/PSSystemIF.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/StickAnimMgr.h"
#include "Controller.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "og/newScreen/ogUtil.h"
#include "LoadResource.h"

namespace kh {
namespace Screen {

u64 arrow[6] = { 'Nyaji01', 'Nyaji02', 'Nyaji03', 'Nyaji04', 'Nyaji05', 'Nyaji06' };

static void _Printf(char* format) { OSReport(format, __FILE__); }

/*
 * --INFO--
 * Address:	8040284C
 * Size:	00008C
 */
DispDayEndResultItem::DispDayEndResultItem(Game::Result::TNode* resultNode, int treasures, int pokos, bool payDebt)
{
	mResultNode           = resultNode;
	mTodaysPokoAmount     = 0;
	mTodaysTreasureAmount = 0;
	mNodeCount            = 0;

	FOREACH_NODE(Game::Result::TNode, mResultNode->mChild, node)
	{
		mNodeCount++;
		mTodaysTreasureAmount += node->mQuantity;
		mTodaysPokoAmount += node->mTotalPokos;
	}

	mTotalTreasureNum = treasures;
	mTotalPokos       = pokos;
	mPayedDebt        = payDebt;
	mHasNothing       = false;
}

/*
 * --INFO--
 * Address:	804028D8
 * Size:	000294
 */
IncP::IncP()
{
	for (int i = 0; i < 6; i++) {
		mYesterdayPikiCounts[i] = 0;
	}

	for (int i = 0; i < 6; i++) {
		mTodayPikiCounts[i] = 0;
	}

	for (int i = 0; i < 8; i++) {
		mTodayPikiDeaths[i] = 0;
	}

	for (int i = 0; i < 8; i++) {
		mTotalPikiDeaths[i] = 0;
	}

	mYesterdayPikiCounts[0] = Game::playData->getPikminCount_Yesterday(Game::Red);
	mYesterdayPikiCounts[1] = Game::playData->getPikminCount_Yesterday(Game::Yellow);
	mYesterdayPikiCounts[2] = Game::playData->getPikminCount_Yesterday(Game::Blue);
	mYesterdayPikiCounts[3] = Game::playData->getPikminCount_Yesterday(Game::White);
	mYesterdayPikiCounts[4] = Game::playData->getPikminCount_Yesterday(Game::Purple);
	mYesterdayPikiCounts[5] = Game::playData->getPikminCount_Yesterday(Game::AllPikmin);

	mTodayPikiCounts[0] = Game::playData->getPikminCount_Today(Game::Red);
	mTodayPikiCounts[1] = Game::playData->getPikminCount_Today(Game::Yellow);
	mTodayPikiCounts[2] = Game::playData->getPikminCount_Today(Game::Blue);
	mTodayPikiCounts[3] = Game::playData->getPikminCount_Today(Game::White);
	mTodayPikiCounts[4] = Game::playData->getPikminCount_Today(Game::Purple);
	mTodayPikiCounts[5] = Game::playData->getPikminCount_Today(Game::AllPikmin);

	mTodayPikiDeaths[0] = Game::deathMgr->get_today(Game::DeathCounter::COD_Battle);
	mTodayPikiDeaths[1] = Game::deathMgr->get_today(Game::DeathCounter::COD_Sunset);
	mTodayPikiDeaths[2] = Game::deathMgr->get_today(Game::DeathCounter::COD_Fire);
	mTodayPikiDeaths[3] = Game::deathMgr->get_today(Game::DeathCounter::COD_Water);
	mTodayPikiDeaths[4] = Game::deathMgr->get_today(Game::DeathCounter::COD_Electricity);
	mTodayPikiDeaths[5] = Game::deathMgr->get_today(Game::DeathCounter::COD_Explosion);
	mTodayPikiDeaths[6] = Game::deathMgr->get_today(Game::DeathCounter::COD_Poison);
	mTodayPikiDeaths[7] = Game::deathMgr->get_today(Game::DeathCounter::COD_All);
	Game::deathMgr->account_today();

	mTotalPikiDeaths[0] = Game::deathMgr->get_total(Game::DeathCounter::COD_Battle);
	mTotalPikiDeaths[1] = Game::deathMgr->get_total(Game::DeathCounter::COD_Sunset);
	mTotalPikiDeaths[2] = Game::deathMgr->get_total(Game::DeathCounter::COD_Fire);
	mTotalPikiDeaths[3] = Game::deathMgr->get_total(Game::DeathCounter::COD_Water);
	mTotalPikiDeaths[4] = Game::deathMgr->get_total(Game::DeathCounter::COD_Electricity);
	mTotalPikiDeaths[5] = Game::deathMgr->get_total(Game::DeathCounter::COD_Explosion);
	mTotalPikiDeaths[6] = Game::deathMgr->get_total(Game::DeathCounter::COD_Poison);
	mTotalPikiDeaths[7] = Game::deathMgr->get_total(Game::DeathCounter::COD_All);

	mPikminUnlockedFlag = (Game::playData->hasContainer(Game::Red)) | (Game::playData->hasContainer(Game::Yellow) << 1)
	                    | (Game::playData->hasContainer(Game::Blue) << 2) | (Game::playData->hasContainer(Game::White) << 3)
	                    | (Game::playData->hasContainer(Game::Purple) << 4);

	Game::playData->setPikminCounts_Yesterday();
}

/*
 * --INFO--
 * Address:	80402B6C
 * Size:	000030
 */
DispDayEndResultIncP::DispDayEndResultIncP(const IncP* incP)
{
	mPikminInfo = const_cast<IncP*>(incP);
	_0D         = 0;
	_0C         = 0;
}

/*
 * --INFO--
 * Address:	80402B9C
 * Size:	000050
 */
DispDayEndResultMail::DispDayEndResultMail(JKRHeap* heap, MailCategory category)
{
	mHeap         = heap;
	mBackupHeap   = nullptr;
	mMailCategory = category;
	_14           = 0;
	_18           = 0;
	mTodayMailID  = -1;
	mDayCount     = Game::gameSystem->mTimeMgr->mDayCount;
}

/*
 * --INFO--
 * Address: ........
 * Size:	0000b4
 */
ObjDayEndResultBase::ObjDayEndResultBase()
{
	mScreenTitle       = nullptr;
	mTitleAnmTransform = nullptr;
	mTitleAnmColor     = nullptr;
	mScreenMain        = nullptr;
	mMainAnimTrans1    = nullptr;
	mMainAnimTrans2    = nullptr;
	mMainAnimSRT       = nullptr;
	mMainAnimTev       = nullptr;
	mScreenStars       = nullptr;
	mStarsAnimColor    = nullptr;
	mStarsAnimTimer1   = 0.0f;
	mMainAnimTimer4    = 0.0f;
	mMainAnimTimer3    = 0.0f;
	mMainAnimTimer2    = 0.0f;
	mMainAnimTimer1    = 0.0f;
	mTitleAnimTimer2   = 0.0f;
	mTitleAnimTimer1   = 0.0f;
	mFadeoutMaxFrame   = 0.0f;
	mFadeoutMinFrame   = 0.0f;
	mFadeinMaxFrame    = 0.0f;
	mFadeinMinFrame    = 0.0f;
	mNextBtnFadePane   = nullptr;
	_95                = 255;
	_94                = 255;
	mFlags             = 0;
}

/*
 * --INFO--
 * Address:	80402BEC
 * Size:	0000FC
 */
void ObjDayEndResultBase::doCreate(JKRArchive* archive)
{
	mScreenTitle = new P2DScreen::Mgr_tuning;
	mScreenTitle->set("result_title.blo", 0x01040000, archive);
	mTitleAnmTransform
	    = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_title.bck", archive)));
	mTitleAnmColor = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_title.bpk", archive)));

	mScreenTitle->setAnimation(mTitleAnmTransform);
	mScreenTitle->setAnimation(mTitleAnmColor);
	mNextBtnFadePane = khUtilFadePane::create(mScreenTitle, 'Nbtn2', 8);
	mNextBtnFadePane->fadeout();
	mNextBtnFadePane->set_init_alpha(0);
}

/*
 * --INFO--
 * Address:	80402CE8
 * Size:	000098
 */
bool ObjDayEndResultBase::doStart(const ::Screen::StartSceneArg* sceneArg)
{
	const StartSceneArg* sarg = static_cast<const StartSceneArg*>(sceneArg);

	if (sceneArg && sarg->_00) {
		mFlags &= ~0x8;
	} else {
		mFlags |= 0x8;
	}

	setFadeinFrm();
	setInfAlpha(mScreenStars->search('Nall'));

	PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
	return true;
}

/*
 * --INFO--
 * Address:	80402D80
 * Size:	000044
 */
void ObjDayEndResultBase::doUpdateFinish()
{
	setFadeoutFrm();
	mNextBtnFadePane->fadeout();
	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_RECEIPT, 0);
}

/*
 * --INFO--
 * Address:	80402DC4
 * Size:	0000F4
 */
bool ObjDayEndResultBase::doUpdateFadein()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += msVal._08;

	mScreenStars->search('Nall')->setAlpha((mMainAnimTimer1 - mFadeinMinFrame) / (mFadeinMaxFrame - mFadeinMinFrame) * 255.0f);

	return (u8)(mMainAnimTimer1 >= mFadeinMaxFrame);
}

/*
 * --INFO--
 * Address:	80402EB8
 * Size:	000010
 */
void ObjDayEndResultBase::doUpdateFadeinFinish()
{
	_94 = 0;
	_95 = 0;
}

/*
 * --INFO--
 * Address:	80402EC8
 * Size:	0000FC
 */
bool ObjDayEndResultBase::doUpdateFadeout()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += msVal._08;

	mScreenStars->search('Nall')->setAlpha((1.0f - (mMainAnimTimer1 - mFadeoutMinFrame) / (mFadeoutMaxFrame - mFadeoutMinFrame)) * 255.0f);

	return (u8)(mMainAnimTimer1 >= mFadeoutMaxFrame);
}

/*
 * --INFO--
 * Address:	80402FC4
 * Size:	000118
 */
void ObjDayEndResultBase::doDraw(Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();

	mScreenTitle->setXY(msVal._1C, 0.0f);
	mScreenTitle->draw(gfx, gfx.mOrthoGraph);

	gfx.mOrthoGraph.setPort();
	mScreenStars->setXY(msVal._14, 0.0f);
	mScreenStars->draw(gfx, gfx.mOrthoGraph);

	mScreenMain->setXY(msVal._18, 0.0f);
}

/*
 * --INFO--
 * Address:	804030DC
 * Size:	000280
 */
void ObjDayEndResultBase::updateCommon()
{
	mTitleAnmTransform->mCurrentFrame = mTitleAnimTimer1;
	mTitleAnmColor->mCurrentFrame     = mTitleAnimTimer2;
	mScreenTitle->animation();

	mTitleAnimTimer1 += 1.0f;
	mTitleAnimTimer2 += 1.0f;

	if (mTitleAnimTimer1 >= mTitleAnmTransform->mFrameLength) {
		mTitleAnimTimer1 = 0.0f;
	}

	if (mTitleAnimTimer2 >= mTitleAnmColor->mFrameLength) {
		mTitleAnimTimer2 = 0.0f;
	}

	mMainAnimSRT->mCurrentFrame = mMainAnimTimer3;
	mMainAnimTev->mCurrentFrame = mMainAnimTimer4;
	mScreenMain->animation();

	mMainAnimTimer3 += 1.0f;
	mMainAnimTimer4 += 1.0f;

	if (mMainAnimTimer3 >= mMainAnimSRT->mFrameLength) {
		mMainAnimTimer3 = 0.0f;
	}

	if (mMainAnimTimer4 >= mMainAnimTev->mFrameLength) {
		mMainAnimTimer4 = 0.0f;
	}

	mMainAnimTrans2->mCurrentFrame = mMainAnimTimer2;
	mScreenMain->search('Ntitle')->animationTransform();

	mMainAnimTimer2 += 1.0f;

	if (mMainAnimTimer2 >= mMainAnimTrans2->mFrameLength) {
		mMainAnimTimer2 = 0.0f;
	}

	mStarsAnimColor->mCurrentFrame = mStarsAnimTimer1;
	mScreenStars->animation();

	mStarsAnimTimer1 += 1.0f;

	if (mStarsAnimTimer1 >= mStarsAnimColor->mFrameLength) {
		mStarsAnimTimer1 = 0.0f;
	}

	mScreenTitle->update();
}

/*
 * --INFO--
 * Address:	8040335C
 * Size:	000098
 */
void ObjDayEndResultBase::setFadeinFrm()
{
	if (mFlags & 0x8) {
		mFadeinMinFrame = getFadeinDownMinFrm();
		mFadeinMaxFrame = getFadeinDownMaxFrm();
	} else {
		mFadeinMinFrame = getFadeinUpMinFrm();
		mFadeinMaxFrame = getFadeinUpMaxFrm();
	}

	mMainAnimTimer1 = mFadeinMinFrame;
}

/*
 * --INFO--
 * Address:	804033F4
 * Size:	000098
 */
void ObjDayEndResultBase::setFadeoutFrm()
{
	if (mFlags & 0x10) {
		mFadeoutMinFrame = getFadeoutDownMinFrm();
		mFadeoutMaxFrame = getFadeoutDownMaxFrm();
	} else {
		mFadeoutMinFrame = getFadeoutUpMinFrm();
		mFadeoutMaxFrame = getFadeoutUpMaxFrm();
	}

	mMainAnimTimer1 = mFadeoutMinFrame;
}

/*
 * --INFO--
 * Address:	8040348C
 * Size:	000144
 */
ObjDayEndResultItem::ObjDayEndResultItem()
{
	mStatus                 = ITEMSTATUS_ForceScroll;
	mMainAnimTrans3         = nullptr;
	mMainAnimTimer5         = 0.0f;
	mTotalPokoCounter       = nullptr;
	mTodayPokoCounter       = nullptr;
	mTreasurePokoCounter[1] = nullptr;
	mTreasurePokoCounter[0] = nullptr;
	mTreasurePokoCount[1]   = 0;
	mTreasurePokoCount[0]   = 0;
	mTodaysPokoCount        = 0;
	mTotalPokoCount         = 0;
	mStickAnimMgr           = nullptr;
	mFadePane3DStick        = nullptr;
	mFadePaneDownArrow      = nullptr;
	mFadePaneUpArrow        = nullptr;
	mCurrentScrollYPos      = 0.0f;
	mItemRowHeight          = 0.0f;
	mCurrentSelectId        = -6;
	mMaxScrollId            = 0;
	mScollMoveTargetTime    = ObjDayEndResultBase::msVal._24;
	mScrollMoveCounter      = 0;
	mGXScissorBottomY       = 0;
	mGXScissorTopY          = 0;
	mTotalValueDelay        = 0;
	mScrollDownDelay        = 0;
	mScrollUpDelay          = 0;
}

/*
 * --INFO--
 * Address:	8040367C
 * Size:	0007AC
 */
void ObjDayEndResultItem::doCreate(JKRArchive* archive)
{
	ObjDayEndResultBase::doCreate(archive);

	mScreenMain = new P2DScreen::Mgr_tuning;
	mScreenMain->set("result_item.blo", 0x00040000, archive);
	void* resource  = JKRFileLoader::getGlbResource("result_item.bck", archive);
	mMainAnimTrans1 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimTrans2 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimTrans3 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));

	mMainAnimSRT = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_item.btk", archive)));
	mMainAnimTev = static_cast<J2DAnmTevRegKey*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_item.brk", archive)));

	mScreenMain->setAnimation(mMainAnimSRT);
	mScreenMain->setAnimation(mMainAnimTev);

	mScreenMain->search('NitemW')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Ntitle')->setAnimation(mMainAnimTrans2);
	mScreenMain->search('N_3d')->setAnimation(mMainAnimTrans3);

	mScreenStars = new P2DScreen::Mgr_tuning;
	mScreenStars->set("result_item_constellation.blo", 0x40000, archive);

	mStarsAnimColor
	    = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_item_constellation.bpk", archive)));
	mScreenStars->setAnimation(mStarsAnimColor);

	og::Screen::setCallBackMessage(mScreenMain);

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(501, "disp member err");
	}

	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
	if (dispResult->mItem.mNodeCount > 6) {
		mFlags |= 0x1;
		mMaxScrollId = dispResult->mItem.mNodeCount - 6;
	}

	f32 y1 = mScreenMain->search('Nsetp00')->getBounds()->i.y;
	f32 y2 = mScreenMain->search('Nsetp01')->getBounds()->i.y;

	mItemRowHeight     = y2 - y1;
	mCurrentScrollYPos = mItemRowHeight * (1 - mCurrentSelectId);

	u64 code;
	if (dispResult->mItem.mPayedDebt) {
		mScreenMain->search('Nfin_men')->hide();
		mScreenMain->search('Nco_menu')->show();
		code = 'Pcomp01';
	} else {
		mScreenMain->search('Nfin_men')->show();
		mScreenMain->search('Nco_menu')->hide();
		code = 'Pfin01';
	}

	mTodaysPokoCount = 0;
	mTotalPokoCount  = dispResult->mItem.mTotalPokos - dispResult->mItem.mTodaysPokoAmount;

	mTodayPokoCounter = og::Screen::setCallBack_CounterRV(mScreenMain, 'Ptokyop1', &mTodaysPokoCount, 9, true, false, archive);

	mTotalPokoCounter = og::Screen::setCallBack_CounterRV(mScreenMain, code, &mTotalPokoCount, 9, true, false, archive);

	mTreasurePokoCounter[0] = og::Screen::setCallBack_CounterRV(mScreenMain, 'Pmad00_1', &mTreasurePokoCount[0], 9, false, false, archive);

	mTreasurePokoCounter[1] = og::Screen::setCallBack_CounterRV(mScreenMain, 'Pmad01_1', &mTreasurePokoCount[1], 9, false, false, archive);

	og::Screen::CallBack_Picture* callback = og::Screen::setCallBack_3DStick(archive, mScreenMain, 'P3d');
	mStickAnimMgr                          = new og::Screen::StickAnimMgr(callback);
	mStickAnimMgr->stickUpDown();

	mFadePaneUpArrow = khUtilFadePane::create(mScreenMain, 'Nyame_u', 16);
	mFadePaneUpArrow->fadeout();

	mFadePaneDownArrow = khUtilFadePane::create(mScreenMain, 'Nyame_l', 16);
	mFadePaneDownArrow->fadeout();

	mFadePane3DStick = khUtilFadePane::create(mScreenMain, 'P3d', 16);
	mFadePane3DStick->add(mScreenMain->search('N_3d'));
	mFadePane3DStick->fadeout();

	mScreenMain->search('Nsetp02')->hide();
	mScreenMain->search('Nsetp03')->hide();
	mScreenMain->search('Nsetp04')->hide();
	mScreenMain->search('Nsetp05')->hide();
	mScreenTitle->search('Nbtn1')->hide();

	if (dispResult->mItem.mHasNothing) {
		mStatus          = ITEMSTATUS_Normal;
		mTodaysPokoCount = dispResult->mItem.mTodaysPokoAmount;
		mTotalPokoCount  = dispResult->mItem.mTotalPokos;
		mTodayPokoCounter->show();
		mTotalPokoCounter->show();
		mNextBtnFadePane->fadein();
		mCurrentSelectId   = 0;
		mCurrentScrollYPos = 0.0f;
		if (mFlags & 0x1) {
			mFadePaneDownArrow->fadein();
			mFadePane3DStick->fadein();
		}
		mFlags |= 0x40;
	}

	dispResult->mItem.mHasNothing = true;
}

/*
 * --INFO--
 * Address:	80403E28
 * Size:	000108
 */
bool ObjDayEndResultItem::doStart(const ::Screen::StartSceneArg* sceneArg)
{
	const StartSceneArg* sarg = static_cast<const StartSceneArg*>(sceneArg);

	if (sceneArg && sarg->_00) {
		mFlags &= ~0x8;
	} else {
		mFlags |= 0x8;
	}

	if (mFlags & 0x8) {
		mFadeinMinFrame = getFadeinDownMinFrm();
		mFadeinMaxFrame = getFadeinDownMaxFrm();
	} else {
		mFadeinMinFrame = getFadeinUpMinFrm();
		mFadeinMaxFrame = getFadeinUpMaxFrm();
	}

	mMainAnimTimer1 = mFadeinMinFrame;

	setInfAlpha(mScreenStars->search('Nall'));
	PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
	return true;
}

/*
 * --INFO--
 * Address:	80403F30
 * Size:	00011C
 */
bool ObjDayEndResultItem::doUpdateFadein()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += ObjDayEndResultBase::msVal._08;

	mScreenStars->search('Nall')->setAlpha((mMainAnimTimer1 - mFadeinMinFrame) / (mFadeinMaxFrame - mFadeinMinFrame) * 255.0f);

	bool result;
	if (mMainAnimTimer1 >= mFadeinMaxFrame) {
		result = true;
	} else {
		result = false;
	}

	mScreenMain->update();
	return result;
}

/*
 * --INFO--
 * Address:	8040404C
 * Size:	0002CC
 */
bool ObjDayEndResultItem::doUpdate()
{
	updateCommon();
	mScreenMain->update();

	switch (mStatus) {
	case ITEMSTATUS_Normal:
		statusNormal();
		break;
	case ITEMSTATUS_ScrollUp:
		statusScrollUp();
		break;
	case ITEMSTATUS_ScrollDown:
		statusScrollDown();
		break;
	case ITEMSTATUS_ForceScroll:
		statusForceScroll();
		break;
	case ITEMSTATUS_DrumRoll:
		statusDrumRoll();
		break;
	case ITEMSTATUS_TotalValue:
		statusTotalValue();
		break;
	}

	if (getGamePad()->mButton.mButtonDown & Controller::PRESS_A) {
		if (getGamePad()->mButton.mButtonDown & Controller::PRESS_A && !isFlag(0x40)) {
			mFlags |= 0x20;
		}

		if (mStatus == ITEMSTATUS_Normal) {
			DispDayEndResultIncP* dispIncP = static_cast<DispDayEndResultIncP*>(getDispMember());
			::Screen::SetSceneArg setArg(SCENE_DAY_END_RESULT_INC_P, dispIncP, 0, 1);

			if (getOwner()->setScene(setArg)) {
				SArgDayEndResultIncP argIncP(1);
				getOwner()->startScene(&argIncP);
				mFlags &= ~0x10;
			}
		}
	}

	if (mFlags & 0x20) {
		mCurrentSelectId   = mMaxScrollId;
		mCurrentScrollYPos = -mItemRowHeight * mCurrentSelectId;
		mScrollMoveCounter = 0;
		mStatus            = ITEMSTATUS_Normal;

		if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
			JUT_PANICLINE(664, "disp member err");
		}

		DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
		mTodaysPokoCount             = dispResult->mItem.mTodaysPokoAmount;
		mTotalPokoCount              = dispResult->mItem.mTotalPokos;
		mTodayPokoCounter->startPuyoUp(1.0f);
		mTotalPokoCounter->startPuyoUp(1.0f);
		mNextBtnFadePane->fadein();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_SUM_UP, 0);
		mFlags &= ~0x20;
		mFlags |= 0x40;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80404318
 * Size:	000124
 */
bool ObjDayEndResultItem::doUpdateFadeout()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += ObjDayEndResultBase::msVal._08;

	mScreenStars->search('Nall')->setAlpha((1.0f - (mMainAnimTimer1 - mFadeoutMinFrame) / (mFadeoutMaxFrame - mFadeoutMinFrame)) * 255.0f);

	bool result;
	if (mMainAnimTimer1 >= mFadeoutMaxFrame) {
		result = true;
	} else {
		result = false;
	}

	mScreenMain->update();
	return result;
}

/*
 * --INFO--
 * Address:	8040443C
 * Size:	0006C4
 */
void ObjDayEndResultItem::doDraw(Graphics& gfx)
{
	ObjDayEndResultBase::doDraw(gfx);
	gfx.mOrthoGraph.setPort();

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(720, "disp member err");
	}

	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
	J2DPane* pane1               = mScreenMain->search('NALL2');
	J2DPane* pane2               = mScreenMain->search('N_3d');

	J2DPane* panes[2] = { mScreenMain->search('Nsetp00'), mScreenMain->search('Nsetp01') };

	u64 icons[2] = { 'iPicon00', 'iPicon01' };
	u64 names[2] = { 'Piname00', 'Piname01' };

	pane1->show();
	pane2->hide();

	for (int i = 0; i < 2; i++) {
		panes[i]->hide();
	}

	mScreenMain->draw(gfx, gfx.mOrthoGraph);
	u32 left   = 0;
	u32 top    = 0;
	u32 width  = 0;
	u32 height = 0;
	GXGetScissor(&left, &top, &width, &height);
	GXSetScissor(left, mGXScissorTopY, width, mGXScissorBottomY);
	pane1->hide();
	pane2->hide();
	f32 offs = mItemRowHeight * 2.0f;

	for (int i = 0; i < 2; i++) {
		panes[i]->add(0.0f, mCurrentScrollYPos - offs);
	}

	for (int i = 0; i < 2; i++) {
		mScreenMain->search(icons[i])->show();
		mScreenMain->search(names[i])->show();
		mTreasurePokoCounter[i]->show();
	}

	u32 i = 0;
	FOREACH_NODE(Game::Result::TNode, dispResult->mItem.mResultNode->mChild, cNode)
	{
		int pokos = cNode->mTotalPokos;
		int isOdd = i % 2;
		f32 check = (f32)i * mItemRowHeight + mCurrentScrollYPos;
		if (check < -mItemRowHeight || mGXScissorBottomY < check) {
			panes[isOdd]->add(0.0f, offs);
		} else {
			int isEven = !(i % 2);
			panes[isEven]->hide();
			panes[isOdd]->show();
			panes[isEven]->add(0.0f, offs);

			setTex(mScreenMain, icons[isOdd], cNode->mTexture->mTexInfo);
			if (!cNode->mMesgTag) {
				mScreenMain->search(names[isOdd])->hide();
			} else {
				mScreenMain->search(names[isOdd])->setMsgID(cNode->mMesgTag + 1);
			}
			mTreasurePokoCount[isOdd] = pokos;
			mTreasurePokoCounter[isOdd]->update();
			mScreenMain->draw(gfx, gfx.mOrthoGraph);
		}
		i++;
	}

	for (i; i < 6; i++) {
		int isOdd  = i % 2;
		int isEven = !(i % 2);
		panes[isEven]->hide();
		panes[isOdd]->show();
		panes[isOdd]->add(0.0f, offs);
		mScreenMain->search(icons[isOdd])->hide();
		mScreenMain->search(names[isOdd])->hide();
		mTreasurePokoCounter[isOdd]->hide();
		mScreenMain->draw(gfx, gfx.mOrthoGraph);
	}

	GXSetScissor(left, top, width, height);
	if (mFlags & 1 && mStatus != ITEMSTATUS_ForceScroll && mStatus != ITEMSTATUS_DrumRoll && mStatus != ITEMSTATUS_TotalValue) {
		pane1->hide();
		pane2->show();
		panes[0]->hide();
		panes[1]->hide();
		mScreenMain->draw(gfx, gfx.mOrthoGraph);
	}
	/*
stwu     r1, -0xa0(r1)
mflr     r0
stw      r0, 0xa4(r1)
stfd     f31, 0x90(r1)
psq_st   f31, 152(r1), 0, qr0
stfd     f30, 0x80(r1)
psq_st   f30, 136(r1), 0, qr0
stmw     r20, 0x50(r1)
mr       r31, r4
mr       r30, r3
addi     r3, r31, 0xbc
lis      r4, lbl_80498830@ha
lwz      r12, 0xbc(r31)
addi     r26, r4, lbl_80498830@l
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lis      r3, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
addi     r3, r3, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lfs      f1, lbl_805200A8@sda21(r2)
lfs      f3, 0x1c(r3)
mr       r4, r31
lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
addi     r5, r31, 0xbc
fadds    f2, f3, f2
lwz      r3, 0x38(r30)
fadds    f0, f1, f0
stfs     f2, 0x140(r3)
stfs     f0, 0x144(r3)
lwz      r3, 0x38(r30)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
addi     r3, r31, 0xbc
lwz      r12, 0xbc(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lis      r3, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
addi     r3, r3, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lfs      f1, lbl_805200A8@sda21(r2)
lfs      f3, 0x14(r3)
mr       r4, r31
lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
addi     r5, r31, 0xbc
fadds    f2, f3, f2
lwz      r3, 0x70(r30)
fadds    f0, f1, f0
stfs     f2, 0x140(r3)
stfs     f0, 0x144(r3)
lwz      r3, 0x70(r30)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lis      r3, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
addi     r3, r3, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lfs      f1, lbl_805200A8@sda21(r2)
lfs      f3, 0x18(r3)
addi     r3, r31, 0xbc
lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
fadds    f2, f3, f2
lwz      r4, 0x4c(r30)
fadds    f0, f1, f0
stfs     f2, 0x140(r4)
stfs     f0, 0x144(r4)
lwz      r12, 0xbc(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
mr       r3, r30
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x52534C54@ha
lis      r5, 0x0044455F@ha
addi     r6, r4, 0x52534C54@l
li       r4, 0x4b48
addi     r5, r5, 0x0044455F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_804045A0
addi     r3, r26, 0
addi     r5, r26, 0xd0
li       r4, 0x2d0
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_804045A0:
mr       r3, r30
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r29, r3
lwz      r3, 0x4c(r30)
lis      r4, 0x414C4C32@ha
li       r5, 0x4e
lwz      r12, 0(r3)
addi     r6, r4, 0x414C4C32@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r27, r3
lwz      r3, 0x4c(r30)
lis      r4, 0x4E5F3364@ha
li       r5, 0
lwz      r12, 0(r3)
addi     r6, r4, 0x4E5F3364@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
mr       r28, r3
lwz      r3, 0x4c(r30)
lwz      r7, lbl_80520EC8@sda21(r2)
lis      r5, 0x74703030@ha
lwz      r12, 0(r3)
lis      r4, 0x004E7365@ha
lwz      r0, lbl_80520ECC@sda21(r2)
addi     r6, r5, 0x74703030@l
lwz      r12, 0x3c(r12)
addi     r5, r4, 0x004E7365@l
stw      r7, 0x18(r1)
stw      r0, 0x1c(r1)
mtctr    r12
bctrl
stw      r3, 0x18(r1)
lis      r5, 0x74703031@ha
lwz      r3, 0x4c(r30)
lis      r4, 0x004E7365@ha
addi     r6, r5, 0x74703031@l
lwz      r12, 0(r3)
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lfd      f3, 0xe0(r26)
li       r7, 1
lfd      f2, 0xe8(r26)
li       r0, 0
lfd      f1, 0xf0(r26)
mr       r4, r31
lfd      f0, 0xf8(r26)
addi     r20, r1, 0x18
stfd     f3, 0x30(r1)
addi     r5, r31, 0xbc
lwz      r6, 0x18(r1)
stfd     f2, 0x38(r1)
stfd     f1, 0x20(r1)
stfd     f0, 0x28(r1)
stb      r7, 0xb0(r27)
stb      r0, 0xb0(r28)
stb      r0, 0xb0(r6)
stb      r0, 0xb0(r3)
stw      r3, 0x1c(r1)
lwz      r3, 0x4c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
li       r0, 0
addi     r3, r1, 0x14
stw      r0, 0x14(r1)
addi     r4, r1, 0x10
addi     r5, r1, 0xc
addi     r6, r1, 8
stw      r0, 0x10(r1)
stw      r0, 0xc(r1)
stw      r0, 8(r1)
bl       GXGetScissor
lwz      r3, 0x14(r1)
lwz      r4, 0xec(r30)
lwz      r5, 0xc(r1)
lwz      r6, 0xf0(r30)
bl       GXSetScissor
li       r0, 0
lfs      f1, lbl_805200C0@sda21(r2)
stb      r0, 0xb0(r27)
li       r21, 0
stb      r0, 0xb0(r28)
lfs      f0, 0xdc(r30)
fmuls    f30, f1, f0

lbl_80404708:
lwz      r3, 0(r20)
lfs      f0, 0xd4(r30)
lwz      r12, 0(r3)
fsubs    f2, f0, f30
lfs      f1, lbl_805200A8@sda21(r2)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
addi     r21, r21, 1
addi     r20, r20, 4
cmpwi    r21, 2
blt      lbl_80404708
mr       r22, r30
addi     r20, r1, 0x30
addi     r21, r1, 0x20
li       r23, 0

lbl_80404748:
lwz      r3, 0x4c(r30)
lwz      r5, 0(r20)
lwz      r12, 0(r3)
lwz      r6, 4(r20)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0x4c(r30)
lwz      r5, 0(r21)
lwz      r12, 0(r3)
lwz      r6, 4(r21)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r0, 1
stb      r0, 0xb0(r3)
lwz      r3, 0xac(r22)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
addi     r23, r23, 1
addi     r21, r21, 8
cmpwi    r23, 2
addi     r22, r22, 4
addi     r20, r20, 8
blt      lbl_80404748
lwz      r3, 0x18(r29)
li       r22, 0
lfd      f31, lbl_805200C8@sda21(r2)
lis      r29, 0x4330
lwz      r21, 0x24(r3)
b        lbl_80404978

lbl_804047D4:
stw      r22, 0x44(r1)
clrlwi   r24, r22, 0x1f
lfs      f3, 0xdc(r30)
stw      r29, 0x40(r1)
lfs      f1, 0xd4(r30)
fneg     f0, f3
lfd      f2, 0x40(r1)
lwz      r20, 0x38(r21)
fsubs    f2, f2, f31
fmadds   f1, f2, f3, f1
fcmpo    cr0, f1, f0
blt      lbl_80404824
lwz      r3, 0xf0(r30)
lis      r0, 0x4330
stw      r0, 0x40(r1)
stw      r3, 0x44(r1)
lfd      f0, 0x40(r1)
fsubs    f0, f0, f31
fcmpo    cr0, f0, f1
bge      lbl_8040484C

lbl_80404824:
slwi     r0, r24, 2
addi     r3, r1, 0x18
lwzx     r3, r3, r0
fmr      f2, f30
lfs      f1, lbl_805200A8@sda21(r2)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
b        lbl_80404970

lbl_8040484C:
cntlzw   r0, r24
addi     r3, r1, 0x18
rlwinm   r0, r0, 0x1d, 0x16, 0x1d
slwi     r23, r24, 2
lwzx     r4, r3, r0
li       r5, 0
lwzx     r3, r3, r23
li       r0, 1
stb      r5, 0xb0(r4)
fmr      f2, f30
lfs      f1, lbl_805200A8@sda21(r2)
stb      r0, 0xb0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r4, 0x2c(r21)
slwi     r24, r24, 3
addi     r0, r1, 0x30
lwz      r3, 0x4c(r30)
add      r6, r0, r24
lwz      r7, 0x20(r4)
lwz      r5, 0(r6)
lwz      r6, 4(r6)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPC7ResTIMG
lwz      r26, 0x40(r21)
li       r3, 0
lwz      r25, 0x44(r21)
xor      r0, r26, r3
xor      r3, r25, r3
or.      r0, r3, r0
bne      lbl_804048FC
lwz      r3, 0x4c(r30)
addi     r0, r1, 0x20
add      r6, r0, r24
lwz      r12, 0(r3)
lwz      r5, 0(r6)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r6)
mtctr    r12
bctrl
li       r0, 0
stb      r0, 0xb0(r3)
b        lbl_80404938

lbl_804048FC:
lwz      r3, 0x4c(r30)
addi     r0, r1, 0x20
add      r6, r0, r24
lwz      r12, 0(r3)
lwz      r5, 0(r6)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r6)
mtctr    r12
bctrl
li       r0, 1
li       r4, 0
addc     r0, r25, r0
stw      r0, 0x1c(r3)
adde     r0, r26, r4
stw      r0, 0x18(r3)

lbl_80404938:
add      r3, r30, r23
stw      r20, 0xcc(r3)
lwz      r3, 0xac(r3)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r30)
mr       r4, r31
addi     r5, r31, 0xbc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl

lbl_80404970:
lwz      r21, 0x18(r21)
addi     r22, r22, 1

lbl_80404978:
cmplwi   r21, 0
bne      lbl_804047D4
addi     r24, r1, 0x18
addi     r21, r1, 0x30
addi     r20, r1, 0x20
b        lbl_80404A5C

lbl_80404990:
clrlwi   r25, r22, 0x1f
rlwinm   r23, r22, 2, 0x1d, 0x1d
cntlzw   r0, r25
li       r5, 0
rlwinm   r0, r0, 0x1d, 0x16, 0x1d
lwzx     r3, r24, r23
lwzx     r4, r24, r0
li       r0, 1
fmr      f2, f30
lfs      f1, lbl_805200A8@sda21(r2)
stb      r5, 0xb0(r4)
stb      r0, 0xb0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r30)
slwi     r25, r25, 3
add      r6, r21, r25
lwz      r12, 0(r3)
lwz      r5, 0(r6)
lwz      r12, 0x3c(r12)
lwz      r6, 4(r6)
mtctr    r12
bctrl
li       r0, 0
add      r6, r20, r25
stb      r0, 0xb0(r3)
lwz      r3, 0x4c(r30)
lwz      r5, 0(r6)
lwz      r12, 0(r3)
lwz      r6, 4(r6)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
li       r4, 0
addi     r0, r23, 0xac
stb      r4, 0xb0(r3)
lwzx     r3, r30, r0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r30)
mr       r4, r31
addi     r5, r31, 0xbc
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
addi     r22, r22, 1

lbl_80404A5C:
cmplwi   r22, 6
blt      lbl_80404990
lwz      r3, 0x14(r1)
lwz      r4, 0x10(r1)
lwz      r5, 0xc(r1)
lwz      r6, 8(r1)
bl       GXSetScissor
lwz      r0, 0x90(r30)
clrlwi.  r0, r0, 0x1f
beq      lbl_80404ADC
lwz      r0, 0x98(r30)
cmpwi    r0, 3
beq      lbl_80404ADC
cmpwi    r0, 4
beq      lbl_80404ADC
cmpwi    r0, 5
beq      lbl_80404ADC
li       r7, 0
li       r0, 1
stb      r7, 0xb0(r27)
mr       r4, r31
lwz      r6, 0x18(r1)
addi     r5, r31, 0xbc
stb      r0, 0xb0(r28)
lwz      r3, 0x1c(r1)
stb      r7, 0xb0(r6)
stb      r7, 0xb0(r3)
lwz      r3, 0x4c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl

lbl_80404ADC:
psq_l    f31, 152(r1), 0, qr0
lfd      f31, 0x90(r1)
psq_l    f30, 136(r1), 0, qr0
lfd      f30, 0x80(r1)
lmw      r20, 0x50(r1)
lwz      r0, 0xa4(r1)
mtlr     r0
addi     r1, r1, 0xa0
blr
	*/
}

/*
 * --INFO--
 * Address:	80404B00
 * Size:	0001D4
 */
void ObjDayEndResultItem::statusNormal()
{
	if (mFlags & 0x1) {
		if (mCurrentSelectId == 0) {
			mFadePaneUpArrow->fadeout();
			mFadePaneDownArrow->fadein();
			mStickAnimMgr->stickDown();
		} else if (mCurrentSelectId == mMaxScrollId) {
			mFadePaneUpArrow->fadein();
			mFadePaneDownArrow->fadeout();
			mStickAnimMgr->stickUp();
		} else {
			mFadePaneUpArrow->fadein();
			mFadePaneDownArrow->fadein();
			mStickAnimMgr->stickUpDown();
		}
		mFadePane3DStick->fadein();
	} else {
		mFadePaneUpArrow->fadeout();
		mFadePaneDownArrow->fadeout();
		mFadePane3DStick->fadeout();
	}

	if (mFlags & 0x1) {
		if (getGamePad()->getButton() & Controller::PRESS_UP && mCurrentSelectId != 0) {
			mCurrentSelectId--;
			if (mScrollUpDelay >= 1) {
				mScollMoveTargetTime = ObjDayEndResultBase::msVal._28;
			} else {
				mScrollUpDelay++;
			}

			mScrollDownDelay = 0;
			mStatus          = ITEMSTATUS_ScrollUp;
			statusScrollUp();
		} else if (getGamePad()->getButton() & Controller::PRESS_DOWN && mCurrentSelectId != mMaxScrollId) {
			mCurrentSelectId++;
			if (mScrollDownDelay >= 1) {
				mScollMoveTargetTime = ObjDayEndResultBase::msVal._28;
			} else {
				mScrollDownDelay++;
			}

			mScrollUpDelay = 0;
			mStatus        = ITEMSTATUS_ScrollDown;
			statusScrollDown();
		} else {
			mScrollDownDelay     = 0;
			mScrollUpDelay       = 0;
			mScollMoveTargetTime = ObjDayEndResultBase::msVal._24;
		}
	}
}

/*
 * --INFO--
 * Address:	80404CD4
 * Size:	0000F4
 */
void ObjDayEndResultItem::statusScrollUp()
{
	f32 p1             = mItemRowHeight * (mCurrentSelectId + 1) * (mScollMoveTargetTime - mScrollMoveCounter);
	mCurrentScrollYPos = -((mScrollMoveCounter * (mItemRowHeight * mCurrentSelectId) + p1) / mScollMoveTargetTime);
	if (mScrollMoveCounter++ == mScollMoveTargetTime) {
		mScrollMoveCounter = 1;
		mStatus            = ITEMSTATUS_Normal;
	}

	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_ROLL, 0);
}

/*
 * --INFO--
 * Address:	80404DC8
 * Size:	0000F4
 */
void ObjDayEndResultItem::statusScrollDown()
{
	f32 p1             = mItemRowHeight * (mCurrentSelectId - 1) * (mScollMoveTargetTime - mScrollMoveCounter);
	mCurrentScrollYPos = -((mScrollMoveCounter * (mItemRowHeight * mCurrentSelectId) + p1) / mScollMoveTargetTime);
	if (mScrollMoveCounter++ == mScollMoveTargetTime) {
		mScrollMoveCounter = 1;
		mStatus            = ITEMSTATUS_Normal;
	}

	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_ROLL, 0);
}

/*
 * --INFO--
 * Address:	80404EBC
 * Size:	0001D4
 */
void ObjDayEndResultItem::statusForceScroll()
{
	f32 p1             = mItemRowHeight * (mCurrentSelectId - 1) * (mScollMoveTargetTime - mScrollMoveCounter);
	mCurrentScrollYPos = -((mScrollMoveCounter * (mItemRowHeight * mCurrentSelectId) + p1) / mScollMoveTargetTime);
	if (mScrollMoveCounter++ == mScollMoveTargetTime) {
		if (mCurrentSelectId == mMaxScrollId) {
			mScrollMoveCounter = 1;
			mStatus            = ITEMSTATUS_DrumRoll;
		} else {
			if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
				JUT_PANICLINE(958, "disp member err");
			}

			DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());

			int i                           = 0;
			Game::Result::TNode* resultNode = static_cast<Game::Result::TNode*>(dispResult->mItem.mResultNode->mChild);
			for (resultNode; resultNode && i != mCurrentSelectId + 6;
			     resultNode = static_cast<Game::Result::TNode*>(resultNode->mNext), i++) { }

			if (resultNode && resultNode->mLostNum == 0) {
				mTodaysPokoCount += resultNode->mTotalPokos;
				PSSystem::spSysIF->playSystemSe(PSSE_SY_COIN_COUNT, 0);
			}
			mScrollMoveCounter = 1;
			mCurrentSelectId++;
		}
	}

	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_ROLL, 0);
}

/*
 * --INFO--
 * Address:	80405090
 * Size:	00001C
 */
void ObjDayEndResultItem::statusDrumRoll()
{
	mTotalValueDelay = ObjDayEndResultBase::msVal._50;
	mStatus          = ITEMSTATUS_TotalValue;
}

/*
 * --INFO--
 * Address:	804050AC
 * Size:	0000C8
 */
void ObjDayEndResultItem::statusTotalValue()
{
	if (mTotalValueDelay == 0) {
		if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
			JUT_PANICLINE(1011, "disp member err");
		}

		DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
		mTotalPokoCount              = dispResult->mItem.mTotalPokos;
		mTotalPokoCounter->startPuyoUp(1.0f);
		mNextBtnFadePane->fadein();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_SUM_UP, 0);
		mStatus = ITEMSTATUS_Normal;
		mFlags |= 0x40;
	} else {
		mTotalValueDelay--;
	}
}

/*
 * --INFO--
 * Address:	80405174
 * Size:	0003C8
 */
void ObjDayEndResultItem::updateCommon()
{
	ObjDayEndResultBase::updateCommon();

	Vector3f topLeft    = mScreenMain->search('Nmask')->getGlbVtx(J2DPOS_TopLeft);
	Vector3f centerLeft = mScreenMain->search('Nmask')->getGlbVtx(J2DPOS_CenterLeft);

	// this is so dumb. SO DUMB.
	f32 yTop;
	mGXScissorTopY    = 0.5f + (yTop = topLeft.y);
	mGXScissorBottomY = centerLeft.y - yTop;

	mScreenMain->animation();

	mMainAnimTrans3->mCurrentFrame = mMainAnimTimer5;
	mScreenMain->search('N_3d')->animationTransform();

	mMainAnimTimer5++;
	if (mMainAnimTimer5 >= mMainAnimTrans3->mFrameLength) {
		mMainAnimTimer5 = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8040553C
 * Size:	00019C
 */
ObjDayEndResultIncP::ObjDayEndResultIncP()
{
	for (int i = 0; i < 6; i++) {
		mYesterdayPikis[i] = 0;
	}

	for (int i = 0; i < 6; i++) {
		mTodayPikis[i] = 0;
	}

	for (int i = 0; i < 8; i++) {
		mTodayDeaths[i] = 0;
	}

	for (int i = 0; i < 8; i++) {
		mTotalDeaths[i] = 0;
	}

	mStatus               = INCPSTATUS_Slot;
	mScreenMain           = nullptr;
	mMainAnimTrans4       = nullptr;
	mMainAnimTrans3       = nullptr;
	mMainAnimTimer5       = 399.0f;
	mMainAnimTimer6       = 404.0f;
	mPikiCountersList     = nullptr;
	mCounterNum           = 10;
	mPikiCounterToday     = nullptr;
	mPikiCounterYesterday = nullptr;
	mScaleMgr             = nullptr;
	mSlotChangeDelay      = ObjDayEndResultBase::msVal._50;
	mArrowAngles[0]       = 0.0f;
	mArrowAngles[1]       = 0.0f;
	mArrowAngles[2]       = 0.0f;
	mArrowAngles[3]       = 0.0f;
	mArrowAngles[4]       = 0.0f;
	mArrowAngles[5]       = 0.0f;
}

/*
 * --INFO--
 * Address:	804056D8
 * Size:	001374
 */
void ObjDayEndResultIncP::doCreate(JKRArchive* arc)
{
	ObjDayEndResultBase::doCreate(arc);
	mScreenMain = new P2DScreen::Mgr_tuning;
	mScreenMain->set("result_fuetaheta.blo", 0x40000, arc);

	void* resource  = JKRFileLoader::getGlbResource("result_fuetaheta.bck", arc);
	mMainAnimTrans1 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimTrans2 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimTrans3 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimTrans4 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimSRT
	    = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_fuetaheta.btk", arc)));
	mMainAnimTev = static_cast<J2DAnmTevRegKey*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_fuetaheta.brk", arc)));
	mScreenMain->setAnimation(mMainAnimSRT);
	mScreenMain->setAnimation(mMainAnimTev);

	mScreenMain->search('NitemW1')->setAnimation(mMainAnimTrans3);
	mScreenMain->search('NitemW')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp00')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp01')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp02')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp03')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp04')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp05')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Ntitle')->setAnimation(mMainAnimTrans2);
	mScreenMain->search('Ndead')->setAnimation(mMainAnimTrans4);

	mScreenStars = new P2DScreen::Mgr_tuning;
	mScreenStars->set("result_fueta_constellation.blo", 0x40000, arc);

	mStarsAnimColor
	    = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_fueta_constellation.bpk", arc)));
	mScreenStars->setAnimation(mStarsAnimColor);

	og::Screen::setCallBackMessage(mScreenMain);

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(1158, "disp member err");
	}

	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());

	kh::Screen::IncP* inca;

	inca = dispResult->mIncP.mPikminInfo;
	for (int i = 0; i < 6; i++) {
		mYesterdayPikis[i] = inca->mYesterdayPikiCounts[i];
	}

	inca = dispResult->mIncP.mPikminInfo;
	for (int i = 0; i < 6; i++) {
		mTodayPikis[i] = inca->mTodayPikiCounts[i];
	}

	inca = dispResult->mIncP.mPikminInfo;
	for (int i = 0; i < 8; i++) {
		mTodayDeaths[i] = inca->mTodayPikiDeaths[i];
	}

	inca = dispResult->mIncP.mPikminInfo;
	for (int i = 0; i < 8; i++) {
		mTotalDeaths[i] = inca->mTotalPikiDeaths[i];
	}

	const u8 flag = dispResult->mIncP.mPikminInfo->mPikminUnlockedFlag;
	if (!(flag & 1)) {
		mScreenMain->search('Nfigre01')->hide();
		mScreenMain->search('Npiki01')->hide();
		mScreenMain->search('Ntopi01')->hide();
		mCounterNum -= 2;
	}

	if (!(flag & 2)) {
		mScreenMain->search('Nfigre02')->hide();
		mScreenMain->search('Npiki02')->hide();
		mScreenMain->search('Ntopi02')->hide();
		mCounterNum -= 2;
	}

	if (!(flag & 4)) {
		mScreenMain->search('Nfigre03')->hide();
		mScreenMain->search('Npiki03')->hide();
		mScreenMain->search('Ntopi03')->hide();
		mCounterNum -= 2;
	}

	if (!(flag & 8)) {
		mScreenMain->search('Nfigre04')->hide();
		mScreenMain->search('Npiki04')->hide();
		mScreenMain->search('Ntopi04')->hide();
		mCounterNum -= 2;
	}

	if (!(flag & 0x10)) {
		mScreenMain->search('Nfigre05')->hide();
		mScreenMain->search('Npiki05')->hide();
		mScreenMain->search('Ntopi05')->hide();
		mCounterNum -= 2;
	}

	int counters      = 0;
	mPikiCountersList = new og::Screen::CallBack_CounterSlot*[mCounterNum];
	if (flag & 1) {
		mPikiCountersList[counters++]
		    = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Prpkyo1', &mYesterdayPikis[0], 5, true, false, arc);
		mPikiCountersList[counters++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Prpmade1', &mTodayPikis[0], 8, true, false, arc);
		counters                      = 2;
	}

	if (flag & 2) {
		mPikiCountersList[counters++]
		    = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pypkyo1', &mYesterdayPikis[1], 5, true, false, arc);
		mPikiCountersList[counters++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pypmade1', &mTodayPikis[1], 8, true, false, arc);
	}

	if (flag & 4) {
		mPikiCountersList[counters++]
		    = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pbpkyo1', &mYesterdayPikis[2], 5, true, false, arc);
		mPikiCountersList[counters++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pbpmade1', &mTodayPikis[2], 8, true, false, arc);
	}

	if (flag & 8) {
		mPikiCountersList[counters++]
		    = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pwpkyo1', &mYesterdayPikis[3], 5, true, false, arc);
		mPikiCountersList[counters++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pwpmade1', &mTodayPikis[3], 8, true, false, arc);
	}

	if (flag & 0x10) {
		mPikiCountersList[counters++]
		    = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pblpkyo1', &mYesterdayPikis[4], 5, true, false, arc);
		mPikiCountersList[counters++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pblpmad1', &mTodayPikis[4], 8, true, false, arc);
	}

	mPikiCounterYesterday = og::Screen::setCallBack_CounterRV(mScreenMain, 'Ptokypo1', &mYesterdayPikis[5], 5, false, false, arc);
	mPikiCounterToday     = og::Screen::setCallBack_CounterRV(mScreenMain, 'Ptomdpo1', &mTodayPikis[5], 8, false, false, arc);
	mPikiCounterYesterday->hide();
	mPikiCounterToday->hide();

	for (int i = 0; i < mCounterNum; i++) {
		mPikiCountersList[i]->setPuyoParam(2.5f, 35.0f, 0.3f);
	}
	// unrolled loop?
	int counters2                   = 0;
	mDeathCountersList              = new og::Screen::CallBack_CounterSlot*[14];
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Ptakyo1', &mTodayDeaths[0], 4, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Ptamade1', &mTotalDeaths[0], 8, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pnikyo1', &mTodayDeaths[1], 4, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pnimade1', &mTotalDeaths[1], 8, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Phokyo1', &mTodayDeaths[2], 4, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Phomade1', &mTotalDeaths[2], 8, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Psukyo1', &mTodayDeaths[3], 4, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Psumade1', &mTotalDeaths[3], 8, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pdepkyo1', &mTodayDeaths[4], 4, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pdepmad1', &mTotalDeaths[4], 8, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pbapkyo1', &mTodayDeaths[5], 4, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pbapmad1', &mTotalDeaths[5], 8, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pdopkyo1', &mTodayDeaths[6], 4, true, false, arc);
	mDeathCountersList[counters2++] = og::Screen::setCallBack_CounterSlot(mScreenMain, 'Pdopmad1', &mTotalDeaths[6], 8, true, false, arc);
	mDeathCounterToday              = og::Screen::setCallBack_CounterRV(mScreenMain, 'Pdtokyp1', &mTodayDeaths[7], 4, false, false, arc);
	mDeathCounterTotal              = og::Screen::setCallBack_CounterRV(mScreenMain, 'Pdtomdp1', &mTotalDeaths[7], 8, false, false, arc);
	mDeathCounterToday->hide();
	mDeathCounterTotal->hide();

	for (int i = 0; i < 14; i++) {
		mDeathCountersList[i]->setPuyoParam(2.5f, 35.0f, 0.3f);
	}

	mScaleMgr = new og::Screen::ScaleMgr;

	for (int i = 0; i < 6; i++) {
		mScreenMain->search(arrow[i])->hide();
	}

	int counts[12] = { mYesterdayPikis[0], mTodayPikis[0], mYesterdayPikis[1], mTodayPikis[1], mYesterdayPikis[2], mTodayPikis[2],
		               mYesterdayPikis[3], mTodayPikis[3], mYesterdayPikis[4], mTodayPikis[4], mYesterdayPikis[5], mTodayPikis[5] };

	f32 angle1 = 30.0f;
	f32 angle2 = -angle1;
	for (int i = 0; i < 6; i++) {
		if ((u32)counts[2 * i] < counts[2 * i + 1]) {
			mArrowAngles[i] = angle1;
		} else if ((u32)counts[2 * i] > counts[2 * i + 1]) {
			mArrowAngles[i] = angle2;
		}
	}

	if (dispResult->mIncP._0C) {
		mStatus = INCPSTATUS_Normal;
		for (int i = 0; i < mCounterNum; i++) {
			mPikiCountersList[i]->_AC = 1;
			mPikiCountersList[i]->_A9 = 1;
		}
		mPikiCounterYesterday->show();
		mPikiCounterToday->show();
		mNextBtnFadePane->fadein();
		for (int i = 0; i < 6; i++) {
			if (i == 5 || dispResult->mIncP.mPikminInfo->mPikminUnlockedFlag & 1 << i) {
				mScreenMain->search(arrow[i])->show();
			}
		}
		mFlags |= 0x40;
	}
	dispResult->mIncP._0C = 1;

	if (dispResult->mIncP._0D) {
		for (int i = 0; i < 14; i++) {
			mDeathCountersList[i]->_AC = 1;
			mDeathCountersList[i]->_A9 = 1;
		}
		mDeathCounterToday->show();
		mDeathCounterTotal->show();
		mFlags |= 0x100;
	}
}

/*
 * --INFO--
 * Address:	80406A4C
 * Size:	00017C
 */
bool ObjDayEndResultIncP::doUpdateFadein()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += ObjDayEndResultBase::msVal._08;

	mScreenStars->search('Nall')->setAlpha((mMainAnimTimer1 - mFadeinMinFrame) / (mFadeinMaxFrame - mFadeinMinFrame) * 255.0f);

	bool result = (mMainAnimTimer1 >= mFadeinMaxFrame) ? true : false;

	mScreenMain->update();
	for (int i = 0; i < 6; i++) {
		mScreenMain->search(arrow[i])->setAngle(mArrowAngles[i]);
	}

	return result;
}

/*
 * --INFO--
 * Address:	80406BC8
 * Size:	00047C
 */
bool ObjDayEndResultIncP::doUpdate()
{
	updateCommon();

	switch (mStatus) {
	case INCPSTATUS_Normal:
		statusNormal();
		break;
	case INCPSTATUS_Fadeout:
		statusFadeout();
		break;
	case INCPSTATUS_DecP:
		statusDecP();
		break;
	case INCPSTATUS_Fadein:
		statusFadein();
		break;
	case INCPSTATUS_Slot:
		statusSlot();
		break;
	case INCPSTATUS_DecPSlot:
		statusDecPSlot();
		break;
	}

	if (getGamePad()->mButton.mButtonDown & (Controller::PRESS_A | Controller::PRESS_B)) {
		if (getGamePad()->mButton.mButtonDown & Controller::PRESS_A && mStatus == INCPSTATUS_Slot && !isFlag(0x40)) {
			mFlags |= 0x20;
		}

		if (getGamePad()->mButton.mButtonDown & Controller::PRESS_A && mStatus == INCPSTATUS_DecPSlot && !isFlag(0x100)) {
			mFlags |= 0x80;
		}

		if (mStatus == INCPSTATUS_Normal || mStatus == INCPSTATUS_DecP) {
			if (getGamePad()->mButton.mButtonDown & Controller::PRESS_A) {
				::Screen::SetSceneArg setArg(SCENE_DAY_END_RESULT_MAIL, getDispMember(), 0, 1);
				if (getOwner()->setScene(setArg)) {
					SArgDayEndResultMail argMail(1);
					getOwner()->startScene(&argMail);
					mFlags &= ~0x10;
				}
			} else if (getGamePad()->mButton.mButtonDown & Controller::PRESS_B) {
				::Screen::SetSceneArg setArg(SCENE_DAY_END_RESULT_ITEM, getDispMember(), 0, 1);
				if (getOwner()->setScene(setArg)) {
					SArgDayEndResultItem argItem(0);
					getOwner()->startScene(&argItem);
					mFlags |= 0x10;
				}
			}
		}
	}

	if (mFlags & 0x20) {
		for (int i = 0; i < mCounterNum; i++) {
			og::Screen::CallBack_CounterSlot* slot = mPikiCountersList[i];
			if (!slot->_A9 || slot->_A8) {
				slot->startSlot(0.0f);
			}
		}
		effectCommon();
		mNextBtnFadePane->fadein();
		mFlags &= ~0x20;
		mFlags |= 0x40;
		mStatus = INCPSTATUS_Normal;
	}

	if (mFlags & 0x80) {
		for (int i = 0; i < 14; i++) {
			og::Screen::CallBack_CounterSlot* slot = mDeathCountersList[i];
			if (!slot->_A9 || slot->_A8) {
				slot->startSlot(0.0f);
			}
		}
		mDeathCounterToday->show();
		mDeathCounterTotal->show();
		mDeathCounterToday->startPuyoUp(1.0f);
		mDeathCounterTotal->startPuyoUp(1.0f);

		if (mTodayDeaths[7] == 0) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_PLUS_MINUS, 0);
		} else {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_DECRE_SUM, 0);
			PSSystem::spSysIF->playSystemSe(PSSE_PK_RESULT_DECREMENT, 0);
		}
		mFlags &= ~0x80;
		mFlags |= 0x100;
		mStatus = INCPSTATUS_DecP;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80407044
 * Size:	000184
 */
bool ObjDayEndResultIncP::doUpdateFadeout()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += ObjDayEndResultBase::msVal._08;

	mScreenStars->search('Nall')->setAlpha((1.0f - (mMainAnimTimer1 - mFadeoutMinFrame) / (mFadeoutMaxFrame - mFadeoutMinFrame)) * 255.0f);

	bool result = (mMainAnimTimer1 >= mFadeoutMaxFrame) ? true : false;

	mScreenMain->update();
	for (int i = 0; i < 6; i++) {
		mScreenMain->search(arrow[i])->setAngle(mArrowAngles[i]);
	}
	return result;
}

/*
 * --INFO--
 * Address:	804071C8
 * Size:	000148
 */
void ObjDayEndResultIncP::doDraw(Graphics& gfx)
{
	ObjDayEndResultBase::doDraw(gfx);

	gfx.mOrthoGraph.setPort();
	mScreenMain->draw(gfx, gfx.mOrthoGraph);
}

/*
 * --INFO--
 * Address:	80407310
 * Size:	000050
 */
void ObjDayEndResultIncP::statusNormal()
{
	if (getGamePad()->mButton.mButtonDown & 0x10) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		mStatus = INCPSTATUS_Fadeout;
	}
}

/*
 * --INFO--
 * Address:	80407360
 * Size:	000100
 */
void ObjDayEndResultIncP::statusFadeout()
{
	mMainAnimTrans3->mCurrentFrame = mMainAnimTimer5;
	if (mMainAnimTimer5 < 404.0f) {
		mMainAnimTimer5 += 1.0f;
		return;
	}

	mMainAnimTrans4->mCurrentFrame = mMainAnimTimer6;
	if (mMainAnimTimer6 < 409.0f) {
		mMainAnimTimer6 += 1.0f;
		return;
	}

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(1541, "disp member err");
	}
	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
	if (!dispResult->mIncP._0D) {
		dispResult->mIncP._0D = true;
		mSlotChangeDelay      = msVal._50;
		mStatus               = INCPSTATUS_DecPSlot;
	} else {
		mStatus = INCPSTATUS_DecP;
	}
}

/*
 * --INFO--
 * Address:	80407460
 * Size:	000050
 */
void ObjDayEndResultIncP::statusDecP()
{
	if (getGamePad()->mButton.mButtonDown & 0x10) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		mStatus = INCPSTATUS_Fadein;
	}
}

/*
 * --INFO--
 * Address:	804074B0
 * Size:	000064
 */
void ObjDayEndResultIncP::statusFadein()
{
	mMainAnimTrans4->mCurrentFrame = mMainAnimTimer6;
	if (mMainAnimTimer6 > 404.0f) {
		mMainAnimTimer6--;
		return;
	}

	mMainAnimTrans3->mCurrentFrame = mMainAnimTimer5;
	if (mMainAnimTimer5 > 399.0f) {
		mMainAnimTimer5--;
		return;
	}

	mStatus = INCPSTATUS_Normal;
}

/*
 * --INFO--
 * Address:	80407514
 * Size:	000140
 */
void ObjDayEndResultIncP::statusSlot()
{
	for (int i = 0; i < mCounterNum; i++) {
		if (i == 0 && !mPikiCountersList[0]->_A9) {
			mPikiCountersList[i]->startSlot(msVal._10);
			callIncPSE(i);
		}

		if (mPikiCountersList[i - 1]->_AA && !mPikiCountersList[i]->_A9) {
			mPikiCountersList[i]->startSlot(msVal._10);
			callIncPSE(i);
			break;
		}
	}

	if (mPikiCountersList[mCounterNum - 1]->_AA) {
		if (!mSlotChangeDelay) {
			effectCommon();
			mNextBtnFadePane->fadein();
			mStatus = INCPSTATUS_Normal;
			mFlags |= 0x40;
		} else {
			mSlotChangeDelay--;
		}
	}
}

/*
 * --INFO--
 * Address:	80407654
 * Size:	00019C
 */
void ObjDayEndResultIncP::statusDecPSlot()
{
	for (int i = 0; i < 14; i++) {
		if (i == 0 && !mDeathCountersList[0]->_A9) {
			mDeathCountersList[i]->startSlot(msVal._10);
			callDecPSE(i);
		}

		if (mDeathCountersList[i - 1]->_AA && !mDeathCountersList[i]->_A9) {
			mDeathCountersList[i]->startSlot(msVal._10);
			callDecPSE(i);
			break;
		}
	}

	if (mDeathCountersList[13]->_AA) {
		if (!mSlotChangeDelay) {
			mDeathCounterToday->show();
			mDeathCounterTotal->show();
			mDeathCounterToday->startPuyoUp(1.0f);
			mDeathCounterTotal->startPuyoUp(1.0f);
			if (mTodayDeaths[7] == 0) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_PLUS_MINUS, 0);
			} else {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_DECRE_SUM, 0);
				PSSystem::spSysIF->playSystemSe(PSSE_PK_RESULT_DECREMENT, 0);
			}
			mFlags |= 0x100;
			mStatus = INCPSTATUS_DecP;
		} else {
			mSlotChangeDelay--;
		}
	}
}
static const int someDumbUnusedArray[0x40] = { 0 }; // not actually unused according to pikhacker
/*
 * --INFO--
 * Address:	804077F0
 * Size:	000088
 */
void ObjDayEndResultIncP::callIncPSE(int id)
{
	u32 soundID;

	u32 test = id & ~1;
	if (((u32)(id & 1) ^ test) - test) {
		u32 count2 = *mPikiCountersList[id - 1]->mCountPtr;
		u32 count1 = *mPikiCountersList[id]->mCountPtr;
		if (count2 < count1) {
			soundID = PSSE_SY_PIKI_INCREMENT;
		} else if (count2 > count1) {
			soundID = PSSE_SY_PIKI_DECREMENT;
		} else {
			soundID = PSSE_SY_MENU_PLUS_MINUS;
		}
	} else {
		soundID = PSSE_SY_MENU_PLUS_MINUS;
	}

	PSSystem::spSysIF->playSystemSe(soundID, 0);
	/*
stwu     r1, -0x10(r1)
mflr     r0
srwi     r5, r4, 0x1f
stw      r0, 0x14(r1)
clrlwi   r0, r4, 0x1f
xor      r0, r0, r5
subf.    r0, r5, r0
beq      lbl_80407858
lwz      r3, 0xac(r3)
slwi     r0, r4, 2
add      r4, r3, r0
lwzx     r3, r3, r0
lwz      r4, -4(r4)
lwz      r3, 0x20(r3)
lwz      r4, 0x20(r4)
lwz      r3, 0(r3)
lwz      r0, 0(r4)
cmplw    r0, r3
bge      lbl_80407844
li       r4, 0x1828
b        lbl_8040785C

lbl_80407844:
ble      lbl_80407850
li       r4, 0x182a
b        lbl_8040785C

lbl_80407850:
li       r4, 0x1806
b        lbl_8040785C

lbl_80407858:
li       r4, 0x1806

lbl_8040785C:
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	80407878
 * Size:	00004C
 */
void ObjDayEndResultIncP::callDecPSE(int id)
{
	PSSystem::SysIF* sys = PSSystem::spSysIF;
	u32 soundID          = PSSE_SY_PIKI_DECREMENT;
	u32 count2           = *mDeathCountersList[id & ~1]->mCountPtr;
	if (!count2) {
		soundID = PSSE_SY_MENU_PLUS_MINUS;
	}

	sys->playSystemSe(soundID, 0);
}

/*
 * --INFO--
 * Address:	804078C4
 * Size:	000188
 */
void ObjDayEndResultIncP::effectCommon()
{
	mPikiCounterYesterday->show();
	mPikiCounterToday->show();
	mPikiCounterYesterday->startPuyoUp(1.0f);
	mPikiCounterToday->startPuyoUp(1.0f);

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(1730, "disp member err");
	}
	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());

	for (int i = 0; i < 6; i++) {
		if (i == 5 || dispResult->mIncP.mPikminInfo->mPikminUnlockedFlag & 1 << i) {
			mScreenMain->search(arrow[i])->show();
		}
	}
	mScaleMgr->up();

	if (mYesterdayPikis[5] < mTodayPikis[5]) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_INCRE_SUM, 0);
		PSSystem::spSysIF->playSystemSe(PSSE_PK_RESULT_INCREMENT, 0);
	} else if (mYesterdayPikis[5] > mTodayPikis[5]) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_DECRE_SUM, 0);
		PSSystem::spSysIF->playSystemSe(PSSE_PK_RESULT_DECREMENT, 0);
	} else {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_PLUS_MINUS, 0);
	}
}

/*
 * --INFO--
 * Address:	80407A4C
 * Size:	00036C
 */
void ObjDayEndResultIncP::updateCommon()
{
	ObjDayEndResultBase::updateCommon();
	mScreenMain->update();
	f32 scale = mScaleMgr->calc();
	for (int i = 0; i < 6; i++) {
		mScreenMain->search(arrow[i])->updateScale(scale);
	}

	for (int i = 0; i < 6; i++) {
		mScreenMain->search(arrow[i])->setAngle(mArrowAngles[i]);
	}
}

/*
 * --INFO--
 * Address:	80407DB8
 * Size:	0008B4
 */
void ObjDayEndResultMail::doCreate(JKRArchive* arc)
{
	ObjDayEndResultBase::doCreate(arc);
	mScreenMain = new P2DScreen::Mgr_tuning;
	mScreenMain->set("result_mail.blo", 0x1040000, arc);

	void* resource  = JKRFileLoader::getGlbResource("result_mail.bck", arc);
	mMainAnimTrans1 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimTrans2 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimTrans3 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimTrans4 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));

	mMainAnimSRT = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_mail.btk", arc)));
	mMainAnimTev = static_cast<J2DAnmTevRegKey*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_mail.brk", arc)));
	mScreenMain->setAnimation(mMainAnimSRT);
	mScreenMain->setAnimation(mMainAnimTev);

	mScreenMain->search('NitemW1')->setAnimation(mMainAnimTrans3);
	mScreenMain->search('NitemW')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp00')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp01')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp02')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp03')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp04')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Nsetp05')->setAnimation(mMainAnimTrans1);
	mScreenMain->search('Pset_p')->setAnimation(mMainAnimTrans4);
	mScreenMain->search('Ntitle')->setAnimation(mMainAnimTrans2);
	mScreenMain->search('Nicon')->setAnimation(mMainAnimTrans3);

	mScreenCharacter = new P2DScreen::Mgr_tuning;
	mScreenCharacter->set("result_maile_big_icon.blo", 0x1040000, arc);
	mCharacterAnimTrans
	    = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_maile_big_icon.bck", arc)));
	mScreenCharacter->search('NitemW')->setAnimation(mCharacterAnimTrans);

	mScreenStars = new P2DScreen::Mgr_tuning;
	mScreenStars->set("result_mail_constellation.blo", 0x40000, arc);
	mStarsAnimColor
	    = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_mail_constellation.bpk", arc)));
	mScreenStars->setAnimation(mStarsAnimColor);

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(1902, "disp member err");
	}
	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());

	mSaveMgr             = ebi::Save::TMgr::createInstance();
	ebi::Save::TMgr* mgr = mSaveMgr;
	mgr->mSaveMenu.loadResource();
	mgr->doLoadResource(JKRGetCurrentHeap());
	mSaveMgr->setControllers(getGamePad());

	int day     = dispResult->mMail.mDayCount;
	mCurrentDay = day;
	mMaxDay     = day;
	mDayCounter = og::Screen::setCallBack_CounterDay(mScreenMain, 'Pday2_1', 'Pday2_2', 'Pday1', &mCurrentDay, 3, arc);
	mDayCounter->setPuyoAnim(true);
	setCallBackMessage(mScreenMain);

	SceneDayEndResultMail* scene = static_cast<SceneDayEndResultMail*>(getOwner());
	if (dispResult->mMail.mHeap) {
		mIconArchive  = scene->mIconArchive;
		mMailIconAnms = new MailIconAnm[20];

		for (int i = 0; i < 20; i++) {
			u8 id = scene->mMailFlags[i];
			if (id == -1)
				break;
			if (id == -2) {
				mMailIconAnms[i].mTIMG      = nullptr;
				mMailIconAnms[i].mIconCount = 0;
			} else {
				char* path = scene->mTableData[id]->mFileName;
				char buf[64];
				do {
					mMailIconAnms[i].mIconCount++;
					sprintf(buf, "%s%003d.bti", path);
				} while (JKRFileLoader::getGlbResource(buf, mIconArchive));
				mMailIconAnms[i].mIconCount--;
				if (mMailIconAnms[i].mIconCount) {
					mMailIconAnms[i].mTIMG = new ResTIMG*[mMailIconAnms[i].mIconCount];
				}

				for (int j = 0; i < mMailIconAnms[i].mIconCount; j++) {
					char buf2[64];
					sprintf(buf2, "%s%003d.bti", path, j);
					mMailIconAnms[i].mTIMG[j] = static_cast<ResTIMG*>(JKRFileLoader::getGlbResource(buf2, mIconArchive));
				}
			}
		}
		setTex(mScreenMain, 'Pset_p', mMailIconAnms[0].mTIMG[0]);
	}
	MailTableData* data = scene->mTableData[scene->mMailFlags[0]];
	mScreenMain->search('Ttext')->setMsgID(data->mMessageID);
	mFadePaneArrowL = khUtilFadePane::create(mScreenMain, 'Nyaji_l', 32);
	mFadePaneArrowR = khUtilFadePane::create(mScreenMain, 'Nyaji_r', 32);

	if (mMaxDay == 1) {
		mFadePaneArrowL->fadeout();
		mFadePaneArrowL->set_init_alpha(0);
	}
	mFadePaneArrowR->fadeout();
	mFadePaneArrowR->set_init_alpha(0);
	setInfAlpha(mScreenCharacter->search('NitemW'));
	changeAlpha();
	if (dispResult->mMail._18) {
		mStatus = MAILSTATUS_Normal;
		mAlpha  = 255;
		changeAlpha();
		mNextBtnFadePane->fadein();
		mCharacterIconScaleY = 1.0f;
		mCharacterIconScaleX = 1.0f;
	}
	/*
stwu     r1, -0x140(r1)
mflr     r0
lis      r5, lbl_80498830@ha
stw      r0, 0x144(r1)
stmw     r22, 0x118(r1)
mr       r31, r3
mr       r25, r4
li       r3, 0x148
addi     r28, r5, lbl_80498830@l
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_80407DF0
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_80407DF0:
stw      r0, 0x38(r31)
mr       r6, r25
addi     r4, r28, 0x14
lis      r5, 0x104
lwz      r3, 0x38(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r25
addi     r3, r28, 0x28
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x3c(r31)
mr       r4, r25
addi     r3, r28, 0x3c
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x40(r31)
lwz      r3, 0x38(r31)
lwz      r4, 0x3c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r31)
lwz      r4, 0x40(r31)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
lis      r4, 0x62746E32@ha
lwz      r3, 0x38(r31)
addi     r6, r4, 0x62746E32@l
li       r5, 0x4e
li       r7, 8
bl       create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
stw      r3, 0x8c(r31)
lwz      r3, 0x8c(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
lwz      r3, 0x8c(r31)
li       r4, 0
bl       set_init_alpha__Q32kh6Screen14khUtilFadePaneFUc
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_80407EA8
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_80407EA8:
stw      r0, 0x4c(r31)
mr       r6, r25
addi     r4, r28, 0x2d0
lis      r5, 0x104
lwz      r3, 0x4c(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r25
addi     r3, r28, 0x2e0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
mr       r24, r3
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x50(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x54(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0xa8(r31)
mr       r3, r24
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0xac(r31)
mr       r4, r25
addi     r3, r28, 0x2f0
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x58(r31)
mr       r4, r25
addi     r3, r28, 0x300
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x5c(r31)
lwz      r3, 0x4c(r31)
lwz      r4, 0x58(r31)
lwz      r12, 0(r3)
lwz      r12, 0x6c(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lwz      r4, 0x5c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x70(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x656D5731@ha
lis      r4, 0x004E6974@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x656D5731@l
addi     r5, r4, 0x004E6974@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0xa8(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r4, 0x74656D57@ha
addi     r6, r4, 0x74656D57@l
li       r5, 0x4e69
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703030@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703030@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703031@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703031@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703032@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703032@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703033@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703033@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703034@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703034@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r5, 0x74703035@ha
lis      r4, 0x004E7365@ha
lwz      r12, 0(r3)
addi     r6, r5, 0x74703035@l
addi     r5, r4, 0x004E7365@l
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x50(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r4, 0x65745F70@ha
addi     r6, r4, 0x65745F70@l
li       r5, 0x5073
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0xac(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r4, 0x69746C65@ha
addi     r6, r4, 0x69746C65@l
li       r5, 0x4e74
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0x54(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x4c(r31)
lis      r4, 0x69636F6E@ha
addi     r6, r4, 0x69636F6E@l
li       r5, 0x4e
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0xa8(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_804081C4
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_804081C4:
stw      r0, 0x9c(r31)
mr       r6, r25
addi     r4, r28, 0x310
lis      r5, 0x104
lwz      r3, 0x9c(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r25
addi     r3, r28, 0x32c
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0xa0(r31)
lis      r3, 0x74656D57@ha
addi     r6, r3, 0x74656D57@l
li       r5, 0x4e69
lwz      r3, 0x9c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
lwz      r4, 0xa0(r31)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_8040823C
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_8040823C:
stw      r0, 0x70(r31)
mr       r6, r25
addi     r4, r28, 0x348
lis      r5, 4
lwz      r3, 0x70(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
mr       r4, r25
addi     r3, r28, 0x368
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x74(r31)
lwz      r3, 0x70(r31)
lwz      r4, 0x74(r31)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x52534C54@ha
lis      r5, 0x0044455F@ha
addi     r6, r4, 0x52534C54@l
li       r4, 0x4b48
addi     r5, r5, 0x0044455F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_804082BC
addi     r3, r28, 0
addi     r5, r28, 0xd0
li       r4, 0x76e
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_804082BC:
mr       r3, r31
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r29, r3
bl       createInstance__Q33ebi4Save4TMgrFv
stw      r3, 0xa4(r31)
lwz      r24, 0xa4(r31)
addi     r3, r24, 0x18
bl       loadResource__Q33ebi6Screen9TSaveMenuFv
lwz      r23, sCurrentHeap__7JKRHeap@sda21(r13)
addi     r3, r24, 0x100
mr       r4, r23
bl       loadResource__Q33ebi6Screen11TMemoryCardFP7JKRHeap
lwz      r3, sys@sda21(r13)
mr       r4, r23
lwz      r3, 0x5c(r3)
bl       loadResource__Q34Game10MemoryCard3MgrFP7JKRHeap
mr       r3, r31
bl       getGamePad__Q26Screen7ObjBaseCFv
lwz      r9, 0xa4(r31)
lis      r8, 0x79325F31@ha
lis      r5, 0x00506461@ha
lis      r4, 0x64617931@ha
stw      r3, 0x3d0(r9)
addi     r5, r5, 0x00506461@l
addi     r11, r31, 0xbc
li       r0, 3
stw      r3, 0x24(r9)
mr       r7, r5
addi     r6, r8, 0x79325F31@l
addi     r8, r8, 0x5f32
stw      r3, 0x104(r9)
addi     r10, r4, 0x64617931@l
li       r9, 0x50
lwz      r3, 0x64(r29)
stw      r3, 0xbc(r31)
stw      r3, 0xb8(r31)
stw      r11, 8(r1)
stw      r0, 0xc(r1)
stw      r25, 0x10(r1)
lwz      r3, 0x4c(r31)
bl
setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
stw      r3, 0xb4(r31)
li       r4, 1
lwz      r3, 0xb4(r31)
bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
lwz      r4, 0x4c(r31)
mr       r3, r31
bl setCallBackMessage__Q32kh6Screen19ObjDayEndResultMailFPQ29P2DScreen3Mgr
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0x4c(r29)
mr       r30, r3
cmplwi   r0, 0
beq      lbl_8040853C
lwz      r0, 0x224(r30)
li       r3, 0xb0
stw      r0, 0xc0(r31)
bl       __nwa__FUl
lis      r4, __ct__Q42kh6Screen19ObjDayEndResultMail11MailIconAnmFv@ha
li       r5, 0
addi     r4, r4, __ct__Q42kh6Screen19ObjDayEndResultMail11MailIconAnmFv@l
li       r6, 8
li       r7, 0x14
bl       __construct_new_array
stw      r3, 0xc4(r31)
addi     r24, r30, 0x228
li       r25, 0
li       r26, 0

lbl_804083D8:
lbz      r0, 0(r24)
extsb    r0, r0
cmpwi    r0, -1
beq      lbl_8040851C
cmpwi    r0, -2
bne      lbl_8040840C
lwz      r3, 0xc4(r31)
addi     r0, r26, 4
li       r4, 0
stwx     r4, r3, r0
lwz      r3, 0xc4(r31)
stwx     r4, r3, r26
b        lbl_80408508

lbl_8040840C:
lwz      r4, 0x220(r30)
slwi     r3, r0, 2
li       r0, 0x20
addi     r5, r1, 0x14
lwzx     r3, r4, r3
addi     r4, r28, 0x1cc
lwz      r27, 0xc(r3)
mtctr    r0

lbl_8040842C:
lwz      r3, 4(r4)
lwzu     r0, 8(r4)
stw      r3, 4(r5)
stwu     r0, 8(r5)
bdnz     lbl_8040842C

lbl_80408440:
lwz      r6, 0xc4(r31)
mr       r5, r27
addi     r3, r1, 0x18
addi     r4, r28, 0x388
addi     r7, r6, 4
lwzx     r6, r26, r7
addi     r0, r6, 1
stwx     r0, r26, r7
crclr    6
bl       sprintf
lwz      r4, 0xc0(r31)
addi     r3, r1, 0x18
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
cmplwi   r3, 0
bne      lbl_80408440
lwz      r5, 0xc4(r31)
addi     r4, r26, 4
lwzx     r3, r5, r4
addi     r0, r3, -1
stwx     r0, r5, r4
lwz      r3, 0xc4(r31)
lwzx     r0, r3, r4
cmpwi    r0, 0
beq      lbl_804084B0
slwi     r3, r0, 2
bl       __nwa__FUl
lwz      r4, 0xc4(r31)
stwx     r3, r4, r26

lbl_804084B0:
li       r22, 0
li       r23, 0
b        lbl_804084F4

lbl_804084BC:
mr       r5, r27
mr       r6, r22
addi     r3, r1, 0x18
addi     r4, r28, 0x388
crclr    6
bl       sprintf
lwz      r4, 0xc0(r31)
addi     r3, r1, 0x18
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
lwz      r0, 0xc4(r31)
addi     r22, r22, 1
lwzx     r4, r26, r0
stwx     r3, r4, r23
addi     r23, r23, 4

lbl_804084F4:
lwz      r3, 0xc4(r31)
addi     r0, r3, 4
lwzx     r0, r26, r0
cmpw     r22, r0
blt      lbl_804084BC

lbl_80408508:
addi     r25, r25, 1
addi     r24, r24, 1
cmpwi    r25, 0x14
addi     r26, r26, 8
blt      lbl_804083D8

lbl_8040851C:
lwz      r4, 0xc4(r31)
lis      r5, 0x65745F70@ha
lwz      r3, 0x4c(r31)
addi     r6, r5, 0x65745F70@l
lwz      r4, 0(r4)
li       r5, 0x5073
lwz      r7, 0(r4)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPC7ResTIMG

lbl_8040853C:
lbz      r0, 0x228(r30)
lis      r4, 0x74657874@ha
lwz      r3, 0x4c(r31)
addi     r6, r4, 0x74657874@l
extsb    r0, r0
lwz      r4, 0x220(r30)
lwz      r12, 0(r3)
slwi     r0, r0, 2
lwzx     r4, r4, r0
li       r5, 0x54
lwz      r12, 0x3c(r12)
lwz      r24, 0(r4)
lwz      r25, 4(r4)
mtctr    r12
bctrl
stw      r25, 0x1c(r3)
lis      r5, 0x6A695F6C@ha
lis      r4, 0x004E7961@ha
li       r7, 0x20
stw      r24, 0x18(r3)
addi     r6, r5, 0x6A695F6C@l
addi     r5, r4, 0x004E7961@l
lwz      r3, 0x4c(r31)
bl       create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
stw      r3, 0xcc(r31)
lis      r5, 0x6A695F72@ha
lis      r4, 0x004E7961@ha
li       r7, 0x20
lwz      r3, 0x4c(r31)
addi     r6, r5, 0x6A695F72@l
addi     r5, r4, 0x004E7961@l
bl       create__Q32kh6Screen14khUtilFadePaneFPQ29P2DScreen3MgrUxUc
stw      r3, 0xd0(r31)
lwz      r0, 0xb8(r31)
cmplwi   r0, 1
bne      lbl_804085E0
lwz      r3, 0xcc(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
lwz      r3, 0xcc(r31)
li       r4, 0
bl       set_init_alpha__Q32kh6Screen14khUtilFadePaneFUc

lbl_804085E0:
lwz      r3, 0xd0(r31)
bl       fadeout__Q32kh6Screen14khUtilFadePaneFv
lwz      r3, 0xd0(r31)
li       r4, 0
bl       set_init_alpha__Q32kh6Screen14khUtilFadePaneFUc
lwz      r3, 0x9c(r31)
lis      r4, 0x74656D57@ha
addi     r6, r4, 0x74656D57@l
li       r5, 0x4e69
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
bl       setInfAlpha__Q22kh6ScreenFP7J2DPane
mr       r3, r31
bl       changeAlpha__Q32kh6Screen19ObjDayEndResultMailFv
lbz      r0, 0x5c(r29)
cmplwi   r0, 0
beq      lbl_80408658
li       r3, 0
li       r0, 0xff
stw      r3, 0x98(r31)
mr       r3, r31
stw      r0, 0xe8(r31)
bl       changeAlpha__Q32kh6Screen19ObjDayEndResultMailFv
lwz      r3, 0x8c(r31)
bl       fadein__Q32kh6Screen14khUtilFadePaneFv
lfs      f0, lbl_805200B0@sda21(r2)
stfs     f0, 0xdc(r31)
stfs     f0, 0xd8(r31)

lbl_80408658:
lmw      r22, 0x118(r1)
lwz      r0, 0x144(r1)
mtlr     r0
addi     r1, r1, 0x140
blr
	*/
}

/*
 * --INFO--
 * Address:	8040867C
 * Size:	000170
 */
bool ObjDayEndResultMail::doStart(const ::Screen::StartSceneArg* arg)
{
	const StartSceneArg* sarg = static_cast<const StartSceneArg*>(arg);

	if (arg && sarg->_00) {
		mFlags &= ~0x8;
	} else {
		mFlags |= 0x8;
	}
	setFadeinFrm();

	setInfAlpha(mScreenStars->search('Nall'));
	PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(2022, "disp member err");
	}
	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
	if (!dispResult->mMail._18) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MAIL_RECIEVE, 0);
	}
	return true;
}

/*
 * --INFO--
 * Address:	804087EC
 * Size:	0001B8
 */
bool ObjDayEndResultMail::doUpdateFadein()
{
	mMainAnimTrans4->mCurrentFrame = mMainAnimTimer1;
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += msVal._08;

	mScreenStars->search('Nall')->setAlpha((mMainAnimTimer1 - mFadeinMinFrame) / (mFadeinMaxFrame - mFadeinMinFrame) * 255.0f);

	bool result;
	if (mMainAnimTimer1 >= mFadeinMaxFrame) {
		result = true;
	} else {
		result = false;
	}
	mCharacterAnimTrans->mCurrentFrame = mMainAnimTimer1;
	mScreenCharacter->search('NitemW')->animationTransform();
	mScreenMain->search('NitemW0')->updateScale(mCharacterIconScaleX, mCharacterIconScaleY);
	mScreenMain->update();
	return result;
}

/*
 * --INFO--
 * Address:	804089A4
 * Size:	000280
 */
bool ObjDayEndResultMail::doUpdate()
{
	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(2062, "disp member err");
	}
	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());

	if (mFlags & 4) {
		mSaveMgr->update();
		if (mSaveMgr->isFinish()) {
			switch (mSaveMgr->mCurrStateID) {
			case 2:
			case 0:
				dispResult->mMail._14 = 1;
				break;

			case 1:
				mFlags &= ~4;
				break;

			case 3:
				dispResult->mMail._14 = 2;
				break;
			}
		}
	} else {
		switch (mStatus) {
		case MAILSTATUS_Normal:
			statusNormal();
			break;
		case MAILSTATUS_FadeoutToLeft:
			statusFadeoutToLeft();
			break;
		case MAILSTATUS_FadeinFromLeft:
			statusFadeoutToLeft();
			break;
		case MAILSTATUS_FadeoutToRight:
			statusFadeoutToLeft();
			break;
		case MAILSTATUS_FadeinFromRight:
			statusFadeoutToLeft();
			break;
		case MAILSTATUS_WaitOpen:
			statusWaitOpen();
			break;
		case MAILSTATUS_OpenW:
			statusOpenW();
			break;
		case MAILSTATUS_OpenH:
			statusOpenH();
			break;
		}
		int texID = ++mCharacterIconTimer;
		texID /= 4;
		if (texID >= mMailIconAnms[mMaxDay - mCurrentDay].mIconCount) {
			texID               = 0;
			mCharacterIconTimer = 0;
		}
		setTex(mScreenMain, 'Pset_p', mMailIconAnms[mMaxDay - mCurrentDay].mTIMG[texID]);
		updateCommon();
		mScreenMain->search('NitemW0')->updateScale(mCharacterIconScaleX, mCharacterIconScaleY);
	}

	mScreenMain->update();
	return false;
}

/*
 * --INFO--
 * Address:	80408C24
 * Size:	0001B4
 */
bool ObjDayEndResultMail::doUpdateFadeout()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += msVal._08;

	mScreenStars->search('Nall')->setAlpha((1.0f - ((mMainAnimTimer1 - mFadeoutMinFrame) / (mFadeoutMaxFrame - mFadeoutMinFrame)))
	                                       * 255.0f);

	bool result;
	if (mMainAnimTimer1 >= mFadeoutMaxFrame) {
		result = true;
	} else {
		result = false;
	}
	mCharacterAnimTrans->mCurrentFrame = mMainAnimTimer1;
	mScreenCharacter->search('NitemW')->animationTransform();
	mScreenMain->search('NitemW0')->updateScale(mCharacterIconScaleX, mCharacterIconScaleY);
	mScreenMain->update();
	return result;
}

/*
 * --INFO--
 * Address:	80408DD8
 * Size:	000214
 */
void ObjDayEndResultMail::statusNormal()
{
	if (getGamePad()->mButton.mButtonDown & Controller::PRESS_A) {
		mFlags |= 4;
		mSaveMgr->start();
	} else if (getGamePad()->mButton.mButtonDown & Controller::PRESS_B) {
		DispDayEndResultIncP* dispIncP = static_cast<DispDayEndResultIncP*>(getDispMember());
		::Screen::SetSceneArg setArg(SCENE_DAY_END_RESULT_INC_P, dispIncP, 0, 1);
		if (getOwner()->setScene(setArg)) {
			SArgDayEndResultIncP argIncP(0);
			getOwner()->startScene(&argIncP);
			mFlags |= 0x10;
		}
	} else if (getGamePad()->getButton() & Controller::PRESS_L) {
		if (mCurrentDay > 1 && (mMaxDay - (mCurrentDay - 1)) < 20) {
			SceneDayEndResultMail* scene = static_cast<SceneDayEndResultMail*>(getOwner());
			s8* flag                     = scene->mMailFlags;
			if (mMaxDay - (mCurrentDay - 1) != 19 || (flag[mMaxDay - (mCurrentDay - 1)]) != -2) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				mFadePaneArrowR->fadein();
				mStatus        = MAILSTATUS_FadeoutToRight;
				mSideMoveTimer = 399.0f;
			}
		}
	} else if (getGamePad()->getButton() & Controller::PRESS_R) {
		if (mCurrentDay < mMaxDay) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
			mFadePaneArrowL->fadein();
			mStatus        = MAILSTATUS_FadeoutToLeft;
			mSideMoveTimer = 349.0f;
		}
	}
}

/*
 * --INFO--
 * Address:	80408FEC
 * Size:	0000A8
 */
void ObjDayEndResultMail::statusFadeoutToLeft()
{
	mMainAnimTrans3->mCurrentFrame = mSideMoveTimer;
	if (mSideMoveTimer > 344.0f) {
		mSideMoveTimer -= 1.0f;
	} else {
		mCurrentDay++;
		if (skipped()) {
			mCurrentDay++;
		}

		if (mCurrentDay >= mMaxDay) {
			mFadePaneArrowR->fadeout();
		}
		changeMail();
		mStatus        = MAILSTATUS_FadeinFromLeft;
		mSideMoveTimer = 404.0f;
	}
}

/*
 * --INFO--
 * Address:	80409094
 * Size:	000038
 */
void ObjDayEndResultMail::statusFadeinFromLeft()
{
	mMainAnimTrans3->mCurrentFrame = mSideMoveTimer;
	if (mSideMoveTimer > 344.0f) {
		mSideMoveTimer -= 1.0f;
	} else {
		mStatus = MAILSTATUS_Normal;
	}
}

/*
 * --INFO--
 * Address:	804090CC
 * Size:	0000B8
 */
void ObjDayEndResultMail::statusFadeoutToRight()
{
	mMainAnimTrans3->mCurrentFrame = mSideMoveTimer;
	if (mSideMoveTimer < 404.0f) {
		mSideMoveTimer += 1.0f;
	} else {
		mCurrentDay--;
		if (skipped()) {
			mCurrentDay--;
		}

		if (mCurrentDay <= 1 || 20 <= (mMaxDay - (mCurrentDay - 1))) {
			mFadePaneArrowL->fadeout();
		}
		changeMail();
		mStatus        = MAILSTATUS_FadeinFromRight;
		mSideMoveTimer = 344.0f;
	}
}

/*
 * --INFO--
 * Address:	80409184
 * Size:	000038
 */
void ObjDayEndResultMail::statusFadeinFromRight()
{
	mMainAnimTrans3->mCurrentFrame = mSideMoveTimer;
	if (mSideMoveTimer < 349.0f) {
		mSideMoveTimer += 1.0f;
	} else {
		mStatus = MAILSTATUS_Normal;
	}
}

/*
 * --INFO--
 * Address:	804091BC
 * Size:	00012C
 */
void ObjDayEndResultMail::statusWaitOpen()
{
	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(2289, "disp member err");
	}
	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
	dispResult->mMail._18        = 1;

	SceneDayEndResultMail* scene = static_cast<SceneDayEndResultMail*>(getOwner());

	s8 soundType = scene->mTableData[dispResult->mMail.mTodayMailID]->mFlag[2];
	int soundID;
	switch (soundType) {
	case 0:
		soundID = PSSE_SY_MAIL_SHACHO;
		break;
	case 1:
		soundID = PSSE_SY_MAIL_ORIMA_WIFE;
		break;
	case 2:
		soundID = PSSE_SY_MAIL_ORIMA_SON;
		break;
	case 3:
		soundID = PSSE_SY_MAIL_ORIMA_DAUGHTER;
		break;
	case 4:
		soundID = PSSE_SY_MAIL_LOUIE_GRANMA;
		break;
	case 5:
		soundID = PSSE_SY_MAIL_SHACHO_WIFE;
		break;
	default:
		soundID = PSSE_SY_MAIL_SPAM;
	}
	PSSystem::spSysIF->playSystemSe(soundID, 0);
	mStatus = MAILSTATUS_OpenW;
}

/*
 * --INFO--
 * Address:	804092E8
 * Size:	0000D4
 */
void ObjDayEndResultMail::statusOpenW()
{
	mOpenWTimer *= ObjDayEndResultBase::msVal._48;
	mCharacterIconScaleY += (0.02f - mCharacterIconScaleY) * msVal._3C;
	mOpenWTimer += (1.0f - mCharacterIconScaleX) * ObjDayEndResultBase::msVal._3C;
	mCharacterIconScaleX += mOpenWTimer;

	if (mOpenWTimer < 0.0f && (mCharacterIconScaleX - 1.0f) < 0.1f) {
		mCharacterIconScaleX = 1.0f;
		mOpenHTimer          = msVal._40;
		mStatus              = MAILSTATUS_OpenH;
	}

	mAlpha += 32;
	if (mAlpha > 255) {
		mAlpha = 255;
	}
	changeAlpha();
}

/*
 * --INFO--
 * Address:	804093BC
 * Size:	0000CC
 */
void ObjDayEndResultMail::statusOpenH()
{
	mOpenHTimer *= ObjDayEndResultBase::msVal._48;
	mOpenHTimer += (1.0f - mCharacterIconScaleY) * ObjDayEndResultBase::msVal._44;
	mCharacterIconScaleY += mOpenHTimer;

	if (mOpenHTimer < 0.0f && (mCharacterIconScaleY - 1.0f) < 0.1f) {
		mCharacterIconScaleY = 1.0f;
		mNextBtnFadePane->fadein();
		mStatus = MAILSTATUS_Normal;
	}

	mAlpha += 32;
	if (mAlpha > 255) {
		mAlpha = 255;
	}
	changeAlpha();
}

/*
 * --INFO--
 * Address:	80409488
 * Size:	000480
 */
void ObjDayEndResultMail::changeMail()
{
	SceneDayEndResultMail* scene = static_cast<SceneDayEndResultMail*>(getOwner());
	mCharacterIconTimer          = 0;
	setTex(mScreenMain, 'Pset_p', mMailIconAnms[mMaxDay - mCurrentDay].mTIMG[0]);
	mScreenMain->search(scene->mTableData[mMaxDay - mCurrentDay]->mMessageID);

	if (mMaxDay == mCurrentDay) {
		mMessage->mMinX = 1.0f;
		mMessage->mMinY = 1.0f;
		mMessage->mMaxX = 1.0f;
		mMessage->mMaxY = 1.0f;
		mScreenMain->search('Pset_p');
		mScreenMain->search('Picon_b');
	} else {
		mMessage->mMinX = msVal._2C;
		mMessage->mMinY = msVal._30;
		mMessage->mMaxX = msVal._34;
		mMessage->mMaxY = msVal._38;
		mScreenMain->search('Pset_p');
		mScreenMain->search('Picon_b');
	}
	/*
stwu     r1, -0x80(r1)
mflr     r0
stw      r0, 0x84(r1)
stw      r31, 0x7c(r1)
mr       r31, r3
stw      r30, 0x78(r1)
stw      r29, 0x74(r1)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
li       r0, 0
lis      r4, 0x65745F70@ha
stw      r0, 0xc8(r31)
mr       r30, r3
addi     r6, r4, 0x65745F70@l
li       r5, 0x5073
lwz      r3, 0xbc(r31)
lwz      r0, 0xb8(r31)
lwz      r4, 0xc4(r31)
subf     r0, r3, r0
lwz      r3, 0x4c(r31)
slwi     r0, r0, 3
lwzx     r4, r4, r0
lwz      r7, 0(r4)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPC7ResTIMG
lwz      r4, 0xbc(r31)
lis      r3, 0x74657874@ha
lwz      r0, 0xb8(r31)
addi     r6, r3, 0x74657874@l
lwz      r3, 0x4c(r31)
li       r5, 0x54
subf     r0, r4, r0
lwz      r7, 0x220(r30)
add      r4, r30, r0
lwz      r12, 0(r3)
lbz      r0, 0x228(r4)
lwz      r12, 0x3c(r12)
extsb    r0, r0
slwi     r0, r0, 2
lwzx     r4, r7, r0
lwz      r30, 0(r4)
lwz      r29, 4(r4)
mtctr    r12
bctrl
stw      r29, 0x1c(r3)
stw      r30, 0x18(r3)
lwz      r3, 0xbc(r31)
lwz      r0, 0xb8(r31)
cmplw    r3, r0
bne      lbl_804096F0
lwz      r4, 0xd4(r31)
li       r0, 0xff
lfs      f0, lbl_805200B0@sda21(r2)
lis      r3, 0x65745F70@ha
stb      r0, 0x4c(r1)
addi     r6, r3, 0x65745F70@l
li       r5, 0x5073
stfs     f0, 0x38(r4)
stfs     f0, 0x3c(r4)
stfs     f0, 0x40(r4)
stfs     f0, 0x44(r4)
lwz      r3, 0x4c(r31)
stb      r0, 0x4d(r1)
lwz      r12, 0(r3)
stb      r0, 0x4e(r1)
lwz      r12, 0x3c(r12)
stb      r0, 0x4f(r1)
mtctr    r12
bctrl
lwz      r8, 0x4c(r1)
lis      r5, 0x6F6E5F62@ha
lis      r4, 0x00506963@ha
stw      r8, 0x38(r1)
addi     r6, r5, 0x6F6E5F62@l
addi     r5, r4, 0x00506963@l
lbz      r4, 0x38(r1)
stw      r8, 0x3c(r1)
lbz      r0, 0x39(r1)
stb      r4, 0x150(r3)
lbz      r4, 0x3a(r1)
stb      r0, 0x151(r3)
lbz      r0, 0x3b(r1)
stb      r4, 0x152(r3)
lbz      r4, 0x3c(r1)
stb      r0, 0x153(r3)
lbz      r0, 0x3d(r1)
stb      r4, 0x154(r3)
lbz      r4, 0x3e(r1)
stb      r0, 0x155(r3)
lbz      r0, 0x3f(r1)
stw      r8, 0x40(r1)
stb      r4, 0x156(r3)
lbz      r4, 0x40(r1)
stb      r0, 0x157(r3)
lbz      r0, 0x41(r1)
stb      r4, 0x158(r3)
lbz      r7, 0x42(r1)
stw      r8, 0x44(r1)
lbz      r4, 0x43(r1)
stb      r0, 0x159(r3)
lbz      r0, 0x44(r1)
stb      r7, 0x15a(r3)
lbz      r7, 0x45(r1)
stb      r4, 0x15b(r3)
lbz      r4, 0x46(r1)
stb      r0, 0x15c(r3)
lbz      r0, 0x47(r1)
stb      r7, 0x15d(r3)
stb      r4, 0x15e(r3)
stb      r0, 0x15f(r3)
lwz      r3, 0x4c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r6, 0x4c(r1)
stw      r6, 0x28(r1)
lbz      r4, 0x28(r1)
stw      r6, 0x2c(r1)
lbz      r0, 0x29(r1)
stb      r4, 0x150(r3)
lbz      r4, 0x2a(r1)
stb      r0, 0x151(r3)
lbz      r0, 0x2b(r1)
stb      r4, 0x152(r3)
lbz      r4, 0x2c(r1)
stb      r0, 0x153(r3)
lbz      r0, 0x2d(r1)
stb      r4, 0x154(r3)
lbz      r4, 0x2e(r1)
stb      r0, 0x155(r3)
lbz      r0, 0x2f(r1)
stw      r6, 0x30(r1)
stb      r4, 0x156(r3)
lbz      r4, 0x30(r1)
stb      r0, 0x157(r3)
lbz      r0, 0x31(r1)
stb      r4, 0x158(r3)
lbz      r5, 0x32(r1)
stw      r6, 0x34(r1)
lbz      r4, 0x33(r1)
stb      r0, 0x159(r3)
lbz      r0, 0x34(r1)
stb      r5, 0x15a(r3)
lbz      r5, 0x35(r1)
stb      r4, 0x15b(r3)
lbz      r4, 0x36(r1)
stb      r0, 0x15c(r3)
lbz      r0, 0x37(r1)
stb      r5, 0x15d(r3)
stb      r4, 0x15e(r3)
stb      r0, 0x15f(r3)
b        lbl_804098EC

lbl_804096F0:
lis      r4, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
lis      r3, 0x65745F70@ha
addi     r4, r4, msVal__Q32kh6Screen19ObjDayEndResultBase@l
lwz      r7, 0xd4(r31)
lfs      f3, 0x38(r4)
addi     r6, r3, 0x65745F70@l
lfs      f2, 0x34(r4)
li       r5, 0x5073
lfs      f1, 0x30(r4)
lfs      f0, 0x2c(r4)
lfs      f4, lbl_805200AC@sda21(r2)
stfs     f0, 0x38(r7)
stfs     f1, 0x3c(r7)
stfs     f2, 0x40(r7)
stfs     f3, 0x44(r7)
lfs      f0, 0x2c(r4)
lfs      f2, 0x30(r4)
lfs      f1, 0x34(r4)
fmuls    f3, f4, f0
lfs      f0, 0x38(r4)
fmuls    f2, f4, f2
fmuls    f1, f4, f1
lwz      r3, 0x4c(r31)
fmuls    f0, f4, f0
fctiwz   f3, f3
lwz      r12, 0(r3)
fctiwz   f2, f2
fctiwz   f1, f1
lwz      r12, 0x3c(r12)
fctiwz   f0, f0
stfd     f3, 0x50(r1)
stfd     f2, 0x58(r1)
lwz      r8, 0x54(r1)
stfd     f1, 0x60(r1)
lwz      r7, 0x5c(r1)
stfd     f0, 0x68(r1)
lwz      r4, 0x64(r1)
lwz      r0, 0x6c(r1)
stb      r8, 0x48(r1)
stb      r7, 0x49(r1)
stb      r4, 0x4a(r1)
stb      r0, 0x4b(r1)
mtctr    r12
bctrl
lwz      r8, 0x48(r1)
lis      r5, 0x6F6E5F62@ha
lis      r4, 0x00506963@ha
stw      r8, 0x18(r1)
addi     r6, r5, 0x6F6E5F62@l
addi     r5, r4, 0x00506963@l
lbz      r4, 0x18(r1)
stw      r8, 0x1c(r1)
lbz      r0, 0x19(r1)
stb      r4, 0x150(r3)
lbz      r4, 0x1a(r1)
stb      r0, 0x151(r3)
lbz      r0, 0x1b(r1)
stb      r4, 0x152(r3)
lbz      r4, 0x1c(r1)
stb      r0, 0x153(r3)
lbz      r0, 0x1d(r1)
stb      r4, 0x154(r3)
lbz      r4, 0x1e(r1)
stb      r0, 0x155(r3)
lbz      r0, 0x1f(r1)
stw      r8, 0x20(r1)
stb      r4, 0x156(r3)
lbz      r4, 0x20(r1)
stb      r0, 0x157(r3)
lbz      r0, 0x21(r1)
stb      r4, 0x158(r3)
lbz      r7, 0x22(r1)
stw      r8, 0x24(r1)
lbz      r4, 0x23(r1)
stb      r0, 0x159(r3)
lbz      r0, 0x24(r1)
stb      r7, 0x15a(r3)
lbz      r7, 0x25(r1)
stb      r4, 0x15b(r3)
lbz      r4, 0x26(r1)
stb      r0, 0x15c(r3)
lbz      r0, 0x27(r1)
stb      r7, 0x15d(r3)
stb      r4, 0x15e(r3)
stb      r0, 0x15f(r3)
lwz      r3, 0x4c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lwz      r6, 0x48(r1)
stw      r6, 8(r1)
lbz      r4, 8(r1)
stw      r6, 0xc(r1)
lbz      r0, 9(r1)
stb      r4, 0x150(r3)
lbz      r4, 0xa(r1)
stb      r0, 0x151(r3)
lbz      r0, 0xb(r1)
stb      r4, 0x152(r3)
lbz      r4, 0xc(r1)
stb      r0, 0x153(r3)
lbz      r0, 0xd(r1)
stb      r4, 0x154(r3)
lbz      r4, 0xe(r1)
stb      r0, 0x155(r3)
lbz      r0, 0xf(r1)
stw      r6, 0x10(r1)
stb      r4, 0x156(r3)
lbz      r4, 0x10(r1)
stb      r0, 0x157(r3)
lbz      r0, 0x11(r1)
stb      r4, 0x158(r3)
lbz      r5, 0x12(r1)
stw      r6, 0x14(r1)
lbz      r4, 0x13(r1)
stb      r0, 0x159(r3)
lbz      r0, 0x14(r1)
stb      r5, 0x15a(r3)
lbz      r5, 0x15(r1)
stb      r4, 0x15b(r3)
lbz      r4, 0x16(r1)
stb      r0, 0x15c(r3)
lbz      r0, 0x17(r1)
stb      r5, 0x15d(r3)
stb      r4, 0x15e(r3)
stb      r0, 0x15f(r3)

lbl_804098EC:
lwz      r0, 0x84(r1)
lwz      r31, 0x7c(r1)
lwz      r30, 0x78(r1)
lwz      r29, 0x74(r1)
mtlr     r0
addi     r1, r1, 0x80
blr
	*/
}

/*
 * --INFO--
 * Address:	80409908
 * Size:	000064
 */
void ObjDayEndResultMail::changeAlpha() { mScreenCharacter->search('NitemW')->setAlpha(255 - mAlpha); }

/*
 * --INFO--
 * Address:	8040996C
 * Size:	0001C4
 */
void ObjDayEndResultMail::doDraw(Graphics& gfx)
{
	ObjDayEndResultBase::doDraw(gfx);

	gfx.mOrthoGraph.setPort();
	mScreenMain->draw(gfx, gfx.mOrthoGraph);

	gfx.mOrthoGraph.setPort();
	mScreenCharacter->draw(gfx, gfx.mOrthoGraph);

	if (mFlags & 4) {
		gfx.mPerspGraph.setPort();
		mScreenMain->search('Nsetpoin');
		mSaveMgr->draw();
	}
}

/*
 * --INFO--
 * Address:	80409B30
 * Size:	000288
 */
void ObjDayEndResultMail::updateCommon()
{
	ObjDayEndResultBase::updateCommon();
	mScreenMain->animation();
}

/*
 * --INFO--
 * Address:	80409DB8
 * Size:	0003BC
 */
void ObjDayEndResultMail::setCallBackMessage(P2DScreen::Mgr* mgr, J2DPane* pane)
{
	if (pane->getTypeID() == 19 && pane->getUserInfo()) {
		og::Screen::CallBack_Message* mesg = new og::Screen::CallBack_Message;
		u64 tag                            = pane->mTag; // getTagName() ?
		mgr->addCallBack(tag, mesg);
		static_cast<J2DTextBox*>(pane)->setString("");
		if (tag == 'Ttext') {
			mMessage = mesg;
		}
	}

	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iter(tree->getFirstChild());
	while (iter != tree->getEndChild()) {
		setCallBackMessage(mgr, iter.getObject());
		++iter;
	}
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stmw     r23, 0x1c(r1)
mr       r26, r5
mr       r31, r3
mr       r30, r4
mr       r3, r26
lwz      r12, 0(r26)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_80409E74
lwz      r0, 0x18(r26)
li       r3, 0
lwz      r4, 0x1c(r26)
xor      r0, r0, r3
xor      r3, r4, r3
or.      r0, r3, r0
beq      lbl_80409E74
li       r3, 0x48
bl       __nw__FUl
or.      r24, r3, r3
beq      lbl_80409E28
bl       __ct__Q32og6Screen16CallBack_MessageFv
mr       r24, r3

lbl_80409E28:
lwz      r25, 0x10(r26)
mr       r3, r30
lwz      r27, 0x14(r26)
mr       r7, r24
mr       r5, r25
mr       r6, r27
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r26
addi     r4, r2, lbl_80520100@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce
lis      r3, 0x74657874@ha
li       r0, 0x54
addi     r3, r3, 0x74657874@l
xor      r3, r27, r3
xor      r0, r25, r0
or.      r0, r3, r0
bne      lbl_80409E74
stw      r24, 0xd4(r31)

lbl_80409E74:
lwz      r29, 0xdc(r26)
cmplwi   r29, 0
beq      lbl_8040A158
addi     r29, r29, -12
b        lbl_8040A158

lbl_80409E88:
lwz      r24, 0xc(r29)
mr       r3, r24
lwz      r12, 0(r24)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_80409F2C
lwz      r0, 0x18(r24)
li       r3, 0
lwz      r4, 0x1c(r24)
xor      r0, r0, r3
xor      r3, r4, r3
or.      r0, r3, r0
beq      lbl_80409F2C
li       r3, 0x48
bl       __nw__FUl
or.      r25, r3, r3
beq      lbl_80409EE0
bl       __ct__Q32og6Screen16CallBack_MessageFv
mr       r25, r3

lbl_80409EE0:
lwz      r26, 0x10(r24)
mr       r3, r30
lwz      r27, 0x14(r24)
mr       r7, r25
mr       r5, r26
mr       r6, r27
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r24
addi     r4, r2, lbl_80520100@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce
lis      r3, 0x74657874@ha
li       r0, 0x54
addi     r3, r3, 0x74657874@l
xor      r3, r27, r3
xor      r0, r26, r0
or.      r0, r3, r0
bne      lbl_80409F2C
stw      r25, 0xd4(r31)

lbl_80409F2C:
addi     r3, r24, 0xdc
bl       getFirstLink__10JSUPtrListCFv
cmplwi   r3, 0
beq      lbl_80409F40
addi     r3, r3, -12

lbl_80409F40:
mr       r28, r3
b        lbl_8040A140

lbl_80409F48:
mr       r3, r28
bl       "getObject__17JSUTree<7J2DPane>CFv"
lwz      r12, 0(r3)
mr       r27, r3
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_80409FF0
lwz      r0, 0x18(r27)
li       r3, 0
lwz      r4, 0x1c(r27)
xor      r0, r0, r3
xor      r3, r4, r3
or.      r0, r3, r0
beq      lbl_80409FF0
li       r3, 0x48
bl       __nw__FUl
or.      r24, r3, r3
beq      lbl_80409FA4
bl       __ct__Q32og6Screen16CallBack_MessageFv
mr       r24, r3

lbl_80409FA4:
lwz      r25, 0x10(r27)
mr       r3, r30
lwz      r26, 0x14(r27)
mr       r7, r24
mr       r5, r25
mr       r6, r26
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r27
addi     r4, r2, lbl_80520100@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce
lis      r3, 0x74657874@ha
li       r0, 0x54
addi     r3, r3, 0x74657874@l
xor      r3, r26, r3
xor      r0, r25, r0
or.      r0, r3, r0
bne      lbl_80409FF0
stw      r24, 0xd4(r31)

lbl_80409FF0:
addi     r26, r27, 0xdc
mr       r3, r26
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
stw      r3, 0xc(r1)
b        lbl_8040A11C

lbl_8040A004:
addi     r3, r1, 0xc
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
lwz      r12, 0(r3)
mr       r27, r3
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_8040A0B4
mr       r3, r27
bl       getUserInfo__7J2DPaneCFv
li       r0, 0
xor      r4, r4, r0
xor      r0, r3, r0
or.      r0, r4, r0
beq      lbl_8040A0B4
li       r3, 0x48
bl       __nw__FUl
or.      r23, r3, r3
beq      lbl_8040A060
bl       __ct__Q32og6Screen16CallBack_MessageFv
mr       r23, r3

lbl_8040A060:
mr       r3, r27
bl       getTagName__7J2DPaneCFv
mr       r25, r3
mr       r24, r4
mr       r3, r30
mr       r7, r23
mr       r6, r24
mr       r5, r25
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
mr       r3, r27
addi     r4, r2, lbl_80520100@sda21
crclr    6
bl       setString__10J2DTextBoxFPCce
lis      r3, 0x74657874@ha
li       r0, 0x54
addi     r3, r3, 0x74657874@l
xor      r3, r24, r3
xor      r0, r25, r0
or.      r0, r3, r0
bne      lbl_8040A0B4
stw      r23, 0xd4(r31)

lbl_8040A0B4:
mr       r3, r27
bl       getPaneTree__7J2DPaneFv
mr       r27, r3
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
b        lbl_8040A0F4

lbl_8040A0D4:
addi     r3, r1, 8
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
mr       r5, r3
mr       r3, r31
mr       r4, r30
bl
setCallBackMessage__Q32kh6Screen19ObjDayEndResultMailFPQ29P2DScreen3MgrP7J2DPane
addi     r3, r1, 8
bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_8040A0F4:
mr       r3, r27
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
clrlwi.  r0, r3, 0x18
bne      lbl_8040A0D4
lwz      r3, 0xc(r1)
bl       "getNextChild__17JSUTree<7J2DPane>CFv"
stw      r3, 0xc(r1)

lbl_8040A11C:
mr       r3, r26
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
lwz      r0, 0xc(r1)
cmplw    r0, r3
bne      lbl_8040A004
lwz      r28, 0x18(r28)
cmplwi   r28, 0
beq      lbl_8040A140
addi     r28, r28, -12

lbl_8040A140:
cmplwi   r28, 0
bne      lbl_80409F48
lwz      r29, 0x18(r29)
cmplwi   r29, 0
beq      lbl_8040A158
addi     r29, r29, -12

lbl_8040A158:
cmplwi   r29, 0
bne      lbl_80409E88
lmw      r23, 0x1c(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	8040A174
 * Size:	000024
 */
void ObjDayEndResultMail::setCallBackMessage(P2DScreen::Mgr* mgr) { setCallBackMessage(mgr, mgr); }

/*
 * --INFO--
 * Address:	8040A198
 * Size:	00005C
 */
bool ObjDayEndResultMail::skipped() const
{
	SceneDayEndResultMail* scene = static_cast<SceneDayEndResultMail*>(getOwner());
	return scene->mMailFlags[mMaxDay - mCurrentDay] == -2;
}

/*
 * --INFO--
 * Address:	8040A1F4
 * Size:	000068
 */
ObjDayEndResultTitl::ObjDayEndResultTitl()
{
	mScreenMain    = nullptr;
	mMainAnimTrans = nullptr;
	mMainAnimSRT   = nullptr;
	mAnimTimer2    = 0.0f;
	mAnimTimer1    = 0.0f;
	mTimer         = 0;
	mAlpha         = 0;
}

/*
 * --INFO--
 * Address:	8040A25C
 * Size:	0001BC
 */
void ObjDayEndResultTitl::doCreate(JKRArchive* arc)
{
	mScreenMain = new P2DScreen::Mgr_tuning;
	mScreenMain->set("result_title_new.blo", 0x1040000, arc);
	mMainAnimTrans = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_title_new.bck", arc)));
	mMainAnimSRT
	    = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(JKRFileLoader::getGlbResource("result_title_new.btk", arc)));

	mScreenMain->setAnimation(mMainAnimTrans);
	mScreenMain->setAnimation(mMainAnimSRT);
	setInfAlpha(mScreenMain);

	J2DBlendInfo info(1, 7, 6, 0);
	u64 tags[4] = { 'nuki_tex', 'efect_00', 'efect_01', 0 };
	mScreenMain->setBlendInfo(info, tags);
}

/*
 * --INFO--
 * Address:	8040A418
 * Size:	000078
 */
bool ObjDayEndResultTitl::doUpdateFadein()
{
	updateCommon();
	mScreenMain->setAlpha(mAlpha);

	if (mAlpha > 255 - msVal._04) {
		mAlpha = 255;
		return true;
	} else {
		mAlpha += msVal._04;
		return false;
	}
}

/*
 * --INFO--
 * Address:	8040A490
 * Size:	000064
 */
bool ObjDayEndResultTitl::doUpdate()
{
	updateCommon();
	if (++mTimer >= msVal._00 || getGamePad()->mButton.mButtonDown & Controller::PRESS_A) {
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	8040A4F4
 * Size:	000074
 */
bool ObjDayEndResultTitl::doUpdateFadeout()
{
	updateCommon();
	mScreenMain->setAlpha(mAlpha);

	if (mAlpha < msVal._04) {
		mAlpha = 0;
		return true;
	} else {
		mAlpha -= msVal._04;
		return false;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8040A568
 * Size:	0000CC
 */
void ObjDayEndResultTitl::doUpdateFadeoutFinish()
{
	::Screen::SetSceneArg arg(SCENE_DAY_END_RESULT_ITEM, getDispMember(), 0, 1);
	SArgDayEndResultItem sarg(1);
	if (getOwner()->setScene(arg)) {
		getOwner()->startScene(&sarg);
	}
}

/*
 * --INFO--
 * Address:	8040A634
 * Size:	000144
 */
void ObjDayEndResultTitl::doDraw(Graphics& gfx)
{
	J2DOrthoGraph* graf = &gfx.mOrthoGraph;
	graf->setPort();
	graf->setColor(JUtility::TColor(255, 255, 255, 255));
	GXSetColorUpdate(GX_FALSE);
	GXSetAlphaUpdate(GX_TRUE);
	f32 zero = 0.0f;
	u16 y    = System::getRenderModeObj()->efbHeight;
	u16 x    = System::getRenderModeObj()->fbWidth;
	graf->fillBox(JGeometry::TBox2f(0.0f, 0.0f, zero + x, zero + y));
	GXSetColorUpdate(GX_TRUE);
	graf->setPort();
	mScreenMain->draw(gfx, gfx.mOrthoGraph);
}

/*
 * --INFO--
 * Address:	8040A778
 * Size:	0000E0
 */
void ObjDayEndResultTitl::updateCommon()
{
	mMainAnimTrans->mCurrentFrame = mAnimTimer1;
	mMainAnimSRT->mCurrentFrame   = mAnimTimer2;
	mScreenMain->animation();

	mAnimTimer1 += 1.0f;
	if (mAnimTimer1 >= mMainAnimTrans->mFrameLength) {
		mAnimTimer1 = 0.0f;
	}

	mAnimTimer2 += 1.0f;
	if (mAnimTimer2 >= mMainAnimSRT->mFrameLength) {
		mAnimTimer2 = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8040A858
 * Size:	000048
 */
SceneDayEndResultMail::SceneDayEndResultMail()
{
	mTableData   = nullptr;
	mIconArchive = nullptr;
}

/*
 * --INFO--
 * Address:	8040A8A0
 * Size:	00058C
 */
void SceneDayEndResultMail::doUserCallBackFunc(Resource::MgrCommand* mgr)
{
	MailTableFile* file = nullptr;
	LoadResource::Arg arg1("/user/Koono/mail_table.szs");
	LoadResource::Node* node1 = gLoadResourceMgr->mountArchive(arg1);
	if (node1) {
		file = static_cast<MailTableFile*>(JKRFileLoader::getGlbResource("mail_table.bin", node1->mArchive));
	} else {
		JUT_ASSERTLINE(2674, node1, "failed");
	}

	s8 saveFlags[16] = { Game::playData->mMailSaveData.mHistory[0] };
	int entries      = file->mEntries;
	for (int i = 0; i < entries; i++) {
		MailTableData* data = new MailTableData;

		mTableData[i] = data;
	}

	LoadResource::Arg arg2("/user/Koono/mail_icon.szs");
	LoadResource::Node* node2 = gLoadResourceMgr->mountArchive(arg2);
	if (node2) {
		mIconArchive = static_cast<JKRMemArchive*>(node2->mArchive);
	} else {
		JUT_ASSERTLINE(2749, node2, "no exist");
	}

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(2690, "disp member err");
	}
	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());

	og::newScreen::makeLanguageResName(mName, "result_mail.szs");
	LoadResource::Arg arg(mName);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	if (node) {
		registObj(new ObjDayEndResultMail, node->mArchive);
	} else {
		JUT_ASSERTLINE(2764, node, "failed");
	}
	/*
stwu     r1, -0xd0(r1)
mflr     r0
lis      r4, lbl_80498830@ha
stw      r0, 0xd4(r1)
stmw     r24, 0xb0(r1)
addi     r30, r4, lbl_80498830@l
mr       r24, r3
addi     r3, r1, 0x78
addi     r4, r30, 0x400
li       r28, 0
bl       __ct__Q212LoadResource3ArgFPCc
lwz      r3, gLoadResourceMgr@sda21(r13)
addi     r4, r1, 0x78
bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
cmplwi   r3, 0
beq      lbl_8040A8F4
lwz      r4, 0x34(r3)
addi     r3, r30, 0x41c
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
mr       r28, r3
b        lbl_8040A908

lbl_8040A8F4:
addi     r3, r30, 0
li       r4, 0xa72
addi     r5, r2, lbl_80520104@sda21
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040A908:
lwz      r7, playData__4Game@sda21(r13)
li       r29, 4
lwz      r27, 0(r28)
lwz      r6, 0x84(r7)
lwz      r5, 0x88(r7)
slwi     r3, r27, 2
lwz      r4, 0x8c(r7)
lwz      r0, 0x90(r7)
stw      r6, 8(r1)
stw      r5, 0xc(r1)
stw      r4, 0x10(r1)
stw      r0, 0x14(r1)
bl       __nwa__FUl
stw      r3, 0x220(r24)
li       r26, 0
li       r31, 0
b        lbl_8040AA08

lbl_8040A94C:
li       r3, 0x18
bl       __nw__FUl
cmplwi   r3, 0
beq      lbl_8040A9C4
add      r9, r28, r29
srawi    r5, r26, 3
lwz      r0, 0(r9)
slwi     r7, r5, 3
lwz      r4, 4(r9)
subfic   r6, r5, 0xf
addi     r5, r1, 8
subf     r7, r7, r26
stw      r4, 4(r3)
li       r8, 1
lbzx     r4, r5, r6
slw      r5, r8, r7
stw      r0, 0(r3)
addi     r0, r9, 0xc
and      r6, r5, r4
lbz      r4, 8(r9)
neg      r5, r6
or       r5, r5, r6
stb      r4, 8(r3)
srwi     r5, r5, 0x1f
lbz      r4, 9(r9)
stb      r4, 9(r3)
lbz      r4, 0xa(r9)
stb      r4, 0xa(r3)
stw      r0, 0xc(r3)
stb      r5, 0x10(r3)

lbl_8040A9C4:
lwz      r4, 0x220(r24)
li       r5, 0
stwx     r3, r4, r31
lwz      r3, 0x220(r24)
lwzx     r3, r3, r31
lwz      r3, 0xc(r3)
b        lbl_8040A9E8

lbl_8040A9E0:
addi     r3, r3, 1
addi     r5, r5, 1

lbl_8040A9E8:
lbz      r0, 0(r3)
cmplwi   r0, 0
bne      lbl_8040A9E0
addi     r0, r5, 0x10
addi     r31, r31, 4
rlwinm   r0, r0, 0, 0, 0x1d
addi     r26, r26, 1
add      r29, r29, r0

lbl_8040AA08:
cmplw    r26, r27
blt      lbl_8040A94C
lis      r5, 0x52534C54@ha
lis      r4, 0x0044455F@ha
lwz      r3, 0x21c(r24)
addi     r6, r5, 0x52534C54@l
addi     r5, r4, 0x0044455F@l
li       r4, 0x4b48
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040AA48
addi     r3, r30, 0
addi     r5, r30, 0xd0
li       r4, 0xa82
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040AA48:
lwz      r31, 0x21c(r24)
lwz      r4, 0x4c(r31)
cmplwi   r4, 0
beq      lbl_8040AC80
lwz      r0, 0x50(r31)
cmplwi   r0, 0
bne      lbl_8040AC80
li       r3, -1
li       r5, 0
bl       create__12JKRSolidHeapFUlP7JKRHeapb
stw      r3, 0x50(r31)
li       r26, -1
li       r6, 0
li       r5, 0
mtctr    r27
cmplwi   r27, 0
ble      lbl_8040AAD0

lbl_8040AA8C:
lwz      r3, 0x220(r24)
lwz      r4, 0x54(r31)
lwzx     r3, r3, r5
lbz      r0, 8(r3)
cmpw     r4, r0
bne      lbl_8040AAC4
lbz      r0, 0x10(r3)
cmplwi   r0, 0
beq      lbl_8040AABC
lbz      r0, 9(r3)
extsb.   r0, r0
bge      lbl_8040AAC4

lbl_8040AABC:
mr       r26, r6
b        lbl_8040AAD0

lbl_8040AAC4:
addi     r5, r5, 4
addi     r6, r6, 1
bdnz     lbl_8040AA8C

lbl_8040AAD0:
cmpwi    r26, -1
bne      lbl_8040AAEC
addi     r3, r30, 0
li       r4, 0xa96
addi     r5, r2, lbl_8052010C@sda21
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040AAEC:
slwi     r28, r26, 2
li       r25, 0
li       r29, 0
b        lbl_8040AB90

lbl_8040AAFC:
lwz      r5, 0x220(r24)
lwz      r3, 0x54(r31)
lwzx     r4, r5, r29
lbz      r0, 8(r4)
cmpw     r3, r0
bne      lbl_8040AB88
lbz      r0, 0x10(r4)
cmplwi   r0, 0
beq      lbl_8040AB2C
lbz      r0, 9(r4)
extsb.   r0, r0
bge      lbl_8040AB88

lbl_8040AB2C:
lwzx     r3, r28, r5
lbz      r4, 9(r4)
lbz      r0, 9(r3)
extsb    r3, r4
extsb    r0, r0
cmpw     r3, r0
bgt      lbl_8040AB80
bne      lbl_8040AB88
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0xac(r1)
lfd      f3, lbl_805200B8@sda21(r2)
stw      r0, 0xa8(r1)
lfs      f1, lbl_80520114@sda21(r2)
lfd      f2, 0xa8(r1)
lfs      f0, lbl_805200D0@sda21(r2)
fsubs    f2, f2, f3
fdivs    f1, f2, f1
fcmpo    cr0, f1, f0
bge      lbl_8040AB88

lbl_8040AB80:
mr       r26, r25
b        lbl_8040AB98

lbl_8040AB88:
addi     r29, r29, 4
addi     r25, r25, 1

lbl_8040AB90:
cmplw    r25, r27
blt      lbl_8040AAFC

lbl_8040AB98:
stw      r26, 0x60(r31)
lwz      r7, 0x60(r31)
cmpwi    r7, 0x80
bge      lbl_8040ABD0
srawi    r0, r7, 3
addi     r5, r1, 8
subfic   r6, r0, 0xf
li       r3, 1
slwi     r0, r0, 3
lbzx     r4, r5, r6
subf     r0, r0, r7
slw      r0, r3, r0
or       r0, r4, r0
stbx     r0, r5, r6

lbl_8040ABD0:
lwz      r4, playData__4Game@sda21(r13)
lwz      r3, 8(r1)
lwz      r0, 0xc(r1)
stw      r3, 0x84(r4)
lwz      r3, 0x10(r1)
stw      r0, 0x88(r4)
lwz      r0, 0x14(r1)
stw      r3, 0x8c(r4)
stw      r0, 0x90(r4)
lwz      r3, playData__4Game@sda21(r13)
lwz      r0, 0x60(r31)
addi     r3, r3, 0x84
extsb    r4, r0
bl       set_history__Q32kh6Screen12MailSaveDataFSc
lwz      r6, playData__4Game@sda21(r13)
addi     r3, r1, 0x48
addi     r4, r30, 0x42c
lwz      r5, 0x94(r6)
lwz      r0, 0x98(r6)
stw      r5, 0x228(r24)
stw      r0, 0x22c(r24)
lwz      r5, 0x9c(r6)
lwz      r0, 0xa0(r6)
stw      r5, 0x230(r24)
stw      r0, 0x234(r24)
lwz      r0, 0xa4(r6)
stw      r0, 0x238(r24)
bl       __ct__Q212LoadResource3ArgFPCc
lwz      r0, 0x50(r31)
addi     r4, r1, 0x48
lwz      r3, gLoadResourceMgr@sda21(r13)
stw      r0, 0x60(r1)
bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
cmplwi   r3, 0
beq      lbl_8040AC68
lwz      r0, 0x34(r3)
stw      r0, 0x224(r24)
b        lbl_8040ACAC

lbl_8040AC68:
addi     r3, r30, 0
addi     r5, r30, 0x448
li       r4, 0xabd
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce
b        lbl_8040ACAC

lbl_8040AC80:
lwz      r4, playData__4Game@sda21(r13)
lwz      r3, 0x94(r4)
lwz      r0, 0x98(r4)
stw      r3, 0x228(r24)
stw      r0, 0x22c(r24)
lwz      r3, 0x9c(r4)
lwz      r0, 0xa0(r4)
stw      r3, 0x230(r24)
stw      r0, 0x234(r24)
lwz      r0, 0xa4(r4)
stw      r0, 0x238(r24)

lbl_8040ACAC:
addi     r3, r24, 4
addi     r4, r30, 0x454
bl       makeLanguageResName__Q22og9newScreenFPcPCc
addi     r3, r1, 0x18
addi     r4, r24, 4
bl       __ct__Q212LoadResource3ArgFPCc
lwz      r3, gLoadResourceMgr@sda21(r13)
addi     r4, r1, 0x18
bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
or.      r25, r3, r3
beq      lbl_8040AE04
li       r3, 0xec
bl       __nw__FUl
or.      r26, r3, r3
beq      lbl_8040ADF0
bl       __ct__Q26Screen7ObjBaseFv
lis      r3, __vt__Q32kh6Screen19ObjDayEndResultBase@ha
lis      r4, __vt__Q32kh6Screen19ObjDayEndResultMail@ha
addi     r5, r3, __vt__Q32kh6Screen19ObjDayEndResultBase@l
lis      r3, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
stw      r5, 0(r26)
addi     r0, r5, 0x10
addi     r6, r4, __vt__Q32kh6Screen19ObjDayEndResultMail@l
li       r8, 0
stw      r0, 0x18(r26)
li       r7, 0xff
lfs      f1, lbl_805200A8@sda21(r2)
addi     r5, r6, 0x10
stw      r8, 0x38(r26)
li       r4, 5
li       r0, 1
addi     r3, r3, msVal__Q32kh6Screen19ObjDayEndResultBase@l
stw      r8, 0x3c(r26)
stw      r8, 0x40(r26)
stw      r8, 0x4c(r26)
stw      r8, 0x50(r26)
stw      r8, 0x54(r26)
stw      r8, 0x58(r26)
stw      r8, 0x5c(r26)
stw      r8, 0x70(r26)
stw      r8, 0x74(r26)
stfs     f1, 0x78(r26)
stfs     f1, 0x6c(r26)
stfs     f1, 0x68(r26)
stfs     f1, 0x64(r26)
stfs     f1, 0x60(r26)
stfs     f1, 0x48(r26)
stfs     f1, 0x44(r26)
stfs     f1, 0x88(r26)
stfs     f1, 0x84(r26)
stfs     f1, 0x80(r26)
stfs     f1, 0x7c(r26)
stw      r8, 0x8c(r26)
stb      r7, 0x95(r26)
stb      r7, 0x94(r26)
stw      r8, 0x90(r26)
stw      r6, 0(r26)
stw      r5, 0x18(r26)
stw      r4, 0x98(r26)
stw      r8, 0x9c(r26)
stw      r8, 0xa0(r26)
stw      r8, 0xa4(r26)
stw      r8, 0x4c(r26)
stw      r8, 0xac(r26)
stw      r8, 0xa8(r26)
stfs     f1, 0xb0(r26)
stw      r8, 0xb4(r26)
stw      r0, 0xbc(r26)
stw      r0, 0xb8(r26)
stw      r8, 0xc0(r26)
stw      r8, 0xc4(r26)
stw      r8, 0xc8(r26)
stw      r8, 0xd0(r26)
stw      r8, 0xcc(r26)
stw      r8, 0xd4(r26)
stfs     f1, 0xdc(r26)
stfs     f1, 0xd8(r26)
lfs      f0, 0x40(r3)
stfs     f0, 0xe0(r26)
stfs     f1, 0xe4(r26)
stw      r8, 0xe8(r26)

lbl_8040ADF0:
lwz      r5, 0x34(r25)
mr       r3, r24
mr       r4, r26
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
b        lbl_8040AE18

lbl_8040AE04:
addi     r3, r30, 0
li       r4, 0xacc
addi     r5, r2, lbl_80520104@sda21
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040AE18:
lmw      r24, 0xb0(r1)
lwz      r0, 0xd4(r1)
mtlr     r0
addi     r1, r1, 0xd0
blr
	*/
}

ObjDayEndResultBase::StaticValues ObjDayEndResultBase::msVal;
ObjDayEndResultTitl::StaticValues ObjDayEndResultTitl::msVal;

} // namespace Screen
} // namespace kh

// /*
//  * --INFO--
//  * Address:	8040B300
//  * Size:	0000CC
//  */
// void __sinit_khDayEndResult_cpp()
// {
// 	/*
// 	lis      r3, msVal__Q32kh6Screen19ObjDayEndResultBase@ha
// 	lfs      f12, lbl_80520154@sda21(r2)
// 	addi     r11, r3, msVal__Q32kh6Screen19ObjDayEndResultBase@l
// 	lfs      f9, lbl_805200FC@sda21(r2)
// 	lfs      f10, lbl_805200B0@sda21(r2)
// 	li       r7, 0x5a
// 	lfs      f7, lbl_805200A8@sda21(r2)
// 	li       r10, 8
// 	lfs      f11, lbl_80520158@sda21(r2)
// 	li       r9, 3
// 	lfs      f8, lbl_8052015C@sda21(r2)
// 	li       r8, 0x1e
// 	lfs      f6, lbl_80520160@sda21(r2)
// 	li       r6, 0xa0
// 	lfs      f5, lbl_80520164@sda21(r2)
// 	li       r5, 0x20
// 	lfs      f4, lbl_80520168@sda21(r2)
// 	li       r4, 0x14
// 	lfs      f3, lbl_8052016C@sda21(r2)
// 	li       r0, 0x10
// 	lfs      f2, lbl_80520170@sda21(r2)
// 	addi     r3, r13, msVal__Q32kh6Screen19ObjDayEndResultTitl@sda21
// 	lfs      f1, lbl_80520174@sda21(r2)
// 	lfs      f0, lbl_80520178@sda21(r2)
// 	stfs     f12, 0(r11)
// 	stfs     f11, 4(r11)
// 	stfs     f10, 8(r11)
// 	stfs     f10, 0xc(r11)
// 	stfs     f9, 0x10(r11)
// 	stw      r10, 0x24(r11)
// 	stw      r9, 0x28(r11)
// 	stb      r8, 0x4c(r11)
// 	stb      r7, 0x4d(r11)
// 	stb      r6, 0x4e(r11)
// 	stb      r5, 0x4f(r11)
// 	stb      r4, 0x50(r11)
// 	stfs     f8, 0x14(r11)
// 	stfs     f7, 0x18(r11)
// 	stfs     f7, 0x1c(r11)
// 	stfs     f6, 0x20(r11)
// 	stfs     f5, 0x2c(r11)
// 	stfs     f4, 0x30(r11)
// 	stfs     f3, 0x34(r11)
// 	stfs     f2, 0x38(r11)
// 	stfs     f1, 0x40(r11)
// 	stfs     f0, 0x48(r11)
// 	stfs     f9, 0x3c(r11)
// 	stfs     f9, 0x44(r11)
// 	stw      r7, msVal__Q32kh6Screen19ObjDayEndResultTitl@sda21(r13)
// 	stb      r0, 4(r3)
// 	blr
// 	*/
// }
