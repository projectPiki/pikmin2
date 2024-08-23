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
#include "Dolphin/rand.h"
#include "LoadResource.h"
#include "Screen/Game2DMgr.h"

namespace kh {
namespace Screen {

u64 arrow[6] = { 'Nyaji01', 'Nyaji02', 'Nyaji03', 'Nyaji04', 'Nyaji05', 'Nyaji06' };

static void _Printf(char* format) { OSReport(format, __FILE__); }

/**
 * @note Address: 0x8040284C
 * @note Size: 0x8C
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

/**
 * @note Address: 0x804028D8
 * @note Size: 0x294
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

/**
 * @note Address: 0x80402B6C
 * @note Size: 0x30
 */
DispDayEndResultIncP::DispDayEndResultIncP(const IncP* incP)
{
	mPikminInfo = const_cast<IncP*>(incP);
	_0D         = 0;
	_0C         = 0;
}

/**
 * @note Address: 0x80402B9C
 * @note Size: 0x50
 */
DispDayEndResultMail::DispDayEndResultMail(JKRHeap* heap, MailCategory category)
{
	mHeap         = heap;
	mBackupHeap   = nullptr;
	mMailCategory = category;
	mExitStatus   = ::Screen::Game2DMgr::CHECK2D_DayResult_MenuOpen;
	mHasOpened    = false;
	mTodayMailID  = -1;
	mDayCount     = Game::gameSystem->mTimeMgr->mDayCount;
}

/**
 * @note Address: N/A
 * @note Size: 0xb4
 */
ObjDayEndResultBase::ObjDayEndResultBase()
{
	mScreenTitle             = nullptr;
	mTitleAnmTransform       = nullptr;
	mTitleAnmColor           = nullptr;
	mScreenMain              = nullptr;
	mMainAnimTrans1          = nullptr;
	mMainAnimTrans2          = nullptr;
	mMainAnimSRT             = nullptr;
	mMainAnimTev             = nullptr;
	mScreenStars             = nullptr;
	mStarsAnimColor          = nullptr;
	mStarsAnimTimer1         = 0.0f;
	mMainAnimTimer4          = 0.0f;
	mMainAnimTimer3          = 0.0f;
	mMainAnimTimer2          = 0.0f;
	mMainAnimTimer1          = 0.0f;
	mTitleAnimColorTimer     = 0.0f;
	mTitleAnimTransformTimer = 0.0f;
	mFadeoutMaxFrame         = 0.0f;
	mFadeoutMinFrame         = 0.0f;
	mFadeinMaxFrame          = 0.0f;
	mFadeinMinFrame          = 0.0f;
	mNextBtnFadePane         = nullptr;
	_95                      = 255;
	_94                      = 255;
	mFlags                   = 0;
}

/**
 * @note Address: 0x80402BEC
 * @note Size: 0xFC
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

/**
 * @note Address: 0x80402CE8
 * @note Size: 0x98
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

/**
 * @note Address: 0x80402D80
 * @note Size: 0x44
 */
void ObjDayEndResultBase::doUpdateFinish()
{
	setFadeoutFrm();
	mNextBtnFadePane->fadeout();
	PSSystem::spSysIF->playSystemSe(PSSE_SY_REGI_RECEIPT, 0);
}

/**
 * @note Address: 0x80402DC4
 * @note Size: 0xF4
 */
bool ObjDayEndResultBase::doUpdateFadein()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += msVal.mAnimRate;

	mScreenStars->search('Nall')->setAlpha((mMainAnimTimer1 - mFadeinMinFrame) / (mFadeinMaxFrame - mFadeinMinFrame) * 255.0f);

	return (u8)(mMainAnimTimer1 >= mFadeinMaxFrame);
}

/**
 * @note Address: 0x80402EB8
 * @note Size: 0x10
 */
void ObjDayEndResultBase::doUpdateFadeinFinish()
{
	_94 = 0;
	_95 = 0;
}

/**
 * @note Address: 0x80402EC8
 * @note Size: 0xFC
 */
bool ObjDayEndResultBase::doUpdateFadeout()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += msVal.mAnimRate;

	mScreenStars->search('Nall')->setAlpha((1.0f - (mMainAnimTimer1 - mFadeoutMinFrame) / (mFadeoutMaxFrame - mFadeoutMinFrame)) * 255.0f);

	return (u8)(mMainAnimTimer1 >= mFadeoutMaxFrame);
}

/**
 * @note Address: 0x80402FC4
 * @note Size: 0x118
 */
void ObjDayEndResultBase::doDraw(Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();

	mScreenTitle->setXY(msVal.mTitleScreenPosX, 0.0f);
	mScreenTitle->draw(gfx, gfx.mOrthoGraph);

	gfx.mOrthoGraph.setPort();
	mScreenStars->setXY(msVal.mStarsScreenPosX, 0.0f);
	mScreenStars->draw(gfx, gfx.mOrthoGraph);

	mScreenMain->setXY(msVal.mMainScreenPosX, 0.0f);
}

/**
 * @note Address: 0x804030DC
 * @note Size: 0x280
 */
void ObjDayEndResultBase::updateCommon()
{
	mTitleAnmTransform->mCurrentFrame = mTitleAnimTransformTimer;
	mTitleAnmColor->mCurrentFrame     = mTitleAnimColorTimer;
	mScreenTitle->animation();

	mTitleAnimTransformTimer += 1.0f;
	mTitleAnimColorTimer += 1.0f;

	if (mTitleAnimTransformTimer >= mTitleAnmTransform->mTotalFrameCount) {
		mTitleAnimTransformTimer = 0.0f;
	}

	if (mTitleAnimColorTimer >= mTitleAnmColor->mTotalFrameCount) {
		mTitleAnimColorTimer = 0.0f;
	}

	mMainAnimSRT->mCurrentFrame = mMainAnimTimer3;
	mMainAnimTev->mCurrentFrame = mMainAnimTimer4;
	mScreenMain->animation();

	mMainAnimTimer3 += 1.0f;
	mMainAnimTimer4 += 1.0f;

	if (mMainAnimTimer3 >= mMainAnimSRT->mTotalFrameCount) {
		mMainAnimTimer3 = 0.0f;
	}

	if (mMainAnimTimer4 >= mMainAnimTev->mTotalFrameCount) {
		mMainAnimTimer4 = 0.0f;
	}

	mMainAnimTrans2->mCurrentFrame = mMainAnimTimer2;
	mScreenMain->search('Ntitle')->animationTransform();

	mMainAnimTimer2 += 1.0f;

	if (mMainAnimTimer2 >= mMainAnimTrans2->mTotalFrameCount) {
		mMainAnimTimer2 = 0.0f;
	}

	mStarsAnimColor->mCurrentFrame = mStarsAnimTimer1;
	mScreenStars->animation();

	mStarsAnimTimer1 += 1.0f;

	if (mStarsAnimTimer1 >= mStarsAnimColor->mTotalFrameCount) {
		mStarsAnimTimer1 = 0.0f;
	}

	mScreenTitle->update();
}

/**
 * @note Address: 0x8040335C
 * @note Size: 0x98
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

/**
 * @note Address: 0x804033F4
 * @note Size: 0x98
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

/**
 * @note Address: 0x8040348C
 * @note Size: 0x144
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

/**
 * @note Address: 0x8040367C
 * @note Size: 0x7AC
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

/**
 * @note Address: 0x80403E28
 * @note Size: 0x108
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
		mFadeinMinFrame = ((ObjDayEndResultBase*)this)->getFadeinDownMinFrm();
		mFadeinMaxFrame = ((ObjDayEndResultBase*)this)->getFadeinDownMaxFrm();
	} else {
		mFadeinMinFrame = ((ObjDayEndResultBase*)this)->getFadeinUpMinFrm();
		mFadeinMaxFrame = ((ObjDayEndResultBase*)this)->getFadeinUpMaxFrm();
	}

	mMainAnimTimer1 = mFadeinMinFrame;

	setInfAlpha(mScreenStars->search('Nall'));
	PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
	return true;
}

/**
 * @note Address: 0x80403F30
 * @note Size: 0x11C
 */
bool ObjDayEndResultItem::doUpdateFadein()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += ObjDayEndResultBase::msVal.mAnimRate;

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

/**
 * @note Address: 0x8040404C
 * @note Size: 0x2CC
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

	if (getGamePad()->getButtonDown() & Controller::PRESS_A) {
		if (getGamePad()->getButtonDown() & Controller::PRESS_A && !isFlag(0x40)) {
			mFlags |= 0x20;
		}

		if (mStatus == ITEMSTATUS_Normal) {
			DispDayEndResultIncP* dispIncP = static_cast<DispDayEndResultIncP*>(getDispMember());
			::Screen::SetSceneArg setArg(SCENE_DAY_END_RESULT_INC_P, dispIncP);

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

/**
 * @note Address: 0x80404318
 * @note Size: 0x124
 */
bool ObjDayEndResultItem::doUpdateFadeout()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += ObjDayEndResultBase::msVal.mAnimRate;

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

/**
 * @note Address: 0x8040443C
 * @note Size: 0x6C4
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
		f32 check = i * mItemRowHeight + mCurrentScrollYPos;
		int pokos = cNode->mTotalPokos;
		int isOdd = i % 2;
		if (check < -mItemRowHeight || mGXScissorBottomY < check) {
			panes[isOdd]->add(0.0f, offs);
		} else {
			panes[!isOdd]->hide();
			panes[isOdd]->show();
			panes[isOdd]->add(0.0f, offs);

			setTex(mScreenMain, icons[isOdd], cNode->mTexture->mTexInfo);
			u64 tag = cNode->getTag();
			if (tag == 0) {
				mScreenMain->search(names[isOdd])->hide();
			} else {
				mScreenMain->search(names[isOdd])->setMsgID(tag + 1);
			}
			mTreasurePokoCount[isOdd] = pokos;
			mTreasurePokoCounter[isOdd]->update();
			mScreenMain->draw(gfx, gfx.mOrthoGraph);
		}
		i++;
	}

	for (i; i < 6; i++) {
		int isOdd = i % 2;
		panes[!isOdd]->hide();
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
}

/**
 * @note Address: 0x80404B00
 * @note Size: 0x1D4
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

/**
 * @note Address: 0x80404CD4
 * @note Size: 0xF4
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

/**
 * @note Address: 0x80404DC8
 * @note Size: 0xF4
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

/**
 * @note Address: 0x80404EBC
 * @note Size: 0x1D4
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

/**
 * @note Address: 0x80405090
 * @note Size: 0x1C
 */
void ObjDayEndResultItem::statusDrumRoll()
{
	mTotalValueDelay = ObjDayEndResultBase::msVal._50;
	mStatus          = ITEMSTATUS_TotalValue;
}

/**
 * @note Address: 0x804050AC
 * @note Size: 0xC8
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

/**
 * @note Address: 0x80405174
 * @note Size: 0x3C8
 */
void ObjDayEndResultItem::updateCommon()
{
	ObjDayEndResultBase::updateCommon();

	JGeometry::TVec3f topLeft    = mScreenMain->search('Nmask')->getGlbVtx(GLBVTX_BtmLeft);
	JGeometry::TVec3f centerLeft = mScreenMain->search('Nmask')->getGlbVtx(GLBVTX_TopRight);

	// this is so dumb. SO DUMB.
	f32 yTop;
	mGXScissorTopY    = 0.5f + (yTop = topLeft.y);
	mGXScissorBottomY = centerLeft.y - yTop;

	mScreenMain->animation();

	mMainAnimTrans3->mCurrentFrame = mMainAnimTimer5;
	mScreenMain->search('N_3d')->animationTransform();

	mMainAnimTimer5++;
	if (mMainAnimTimer5 >= mMainAnimTrans3->mTotalFrameCount) {
		mMainAnimTimer5 = 0.0f;
	}
}

/**
 * @note Address: 0x8040553C
 * @note Size: 0x19C
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

/**
 * @note Address: 0x804056D8
 * @note Size: 0x1374
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

/**
 * @note Address: 0x80406A4C
 * @note Size: 0x17C
 */
bool ObjDayEndResultIncP::doUpdateFadein()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += ObjDayEndResultBase::msVal.mAnimRate;

	mScreenStars->search('Nall')->setAlpha((mMainAnimTimer1 - mFadeinMinFrame) / (mFadeinMaxFrame - mFadeinMinFrame) * 255.0f);

	bool result = (mMainAnimTimer1 >= mFadeinMaxFrame) ? true : false;

	mScreenMain->update();
	for (int i = 0; i < 6; i++) {
		mScreenMain->search(arrow[i])->setAngle(mArrowAngles[i]);
	}

	return result;
}

/**
 * @note Address: 0x80406BC8
 * @note Size: 0x47C
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

	if (getGamePad()->getButtonDown() & (Controller::PRESS_A | Controller::PRESS_B)) {
		if (getGamePad()->getButtonDown() & Controller::PRESS_A && mStatus == INCPSTATUS_Slot && !isFlag(0x40)) {
			mFlags |= 0x20;
		}

		if (getGamePad()->getButtonDown() & Controller::PRESS_A && mStatus == INCPSTATUS_DecPSlot && !isFlag(0x100)) {
			mFlags |= 0x80;
		}

		if (mStatus == INCPSTATUS_Normal || mStatus == INCPSTATUS_DecP) {
			if (getGamePad()->getButtonDown() & Controller::PRESS_A) {
				::Screen::SetSceneArg setArg(SCENE_DAY_END_RESULT_MAIL, getDispMember());
				if (getOwner()->setScene(setArg)) {
					SArgDayEndResultMail argMail(1);
					getOwner()->startScene(&argMail);
					mFlags &= ~0x10;
				}
			} else if (getGamePad()->getButtonDown() & Controller::PRESS_B) {
				::Screen::SetSceneArg setArg(SCENE_DAY_END_RESULT_ITEM, getDispMember());
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
			if (!slot->_A9 || slot->mSlotStarted) {
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
			if (!slot->_A9 || slot->mSlotStarted) {
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

/**
 * @note Address: 0x80407044
 * @note Size: 0x184
 */
bool ObjDayEndResultIncP::doUpdateFadeout()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += ObjDayEndResultBase::msVal.mAnimRate;

	mScreenStars->search('Nall')->setAlpha((1.0f - (mMainAnimTimer1 - mFadeoutMinFrame) / (mFadeoutMaxFrame - mFadeoutMinFrame)) * 255.0f);

	bool result = (mMainAnimTimer1 >= mFadeoutMaxFrame) ? true : false;

	mScreenMain->update();
	for (int i = 0; i < 6; i++) {
		mScreenMain->search(arrow[i])->setAngle(mArrowAngles[i]);
	}
	return result;
}

/**
 * @note Address: 0x804071C8
 * @note Size: 0x148
 */
void ObjDayEndResultIncP::doDraw(Graphics& gfx)
{
	ObjDayEndResultBase::doDraw(gfx);

	gfx.mOrthoGraph.setPort();
	mScreenMain->draw(gfx, gfx.mOrthoGraph);
}

/**
 * @note Address: 0x80407310
 * @note Size: 0x50
 */
void ObjDayEndResultIncP::statusNormal()
{
	if (getGamePad()->getButtonDown() & 0x10) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		mStatus = INCPSTATUS_Fadeout;
	}
}

/**
 * @note Address: 0x80407360
 * @note Size: 0x100
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

/**
 * @note Address: 0x80407460
 * @note Size: 0x50
 */
void ObjDayEndResultIncP::statusDecP()
{
	if (getGamePad()->getButtonDown() & 0x10) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
		mStatus = INCPSTATUS_Fadein;
	}
}

/**
 * @note Address: 0x804074B0
 * @note Size: 0x64
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

/**
 * @note Address: 0x80407514
 * @note Size: 0x140
 */
void ObjDayEndResultIncP::statusSlot()
{
	for (int i = 0; i < mCounterNum; i++) {
		if (i == 0 && !mPikiCountersList[0]->_A9) {
			mPikiCountersList[i]->startSlot(msVal._10);
			callIncPSE(i);
		}

		if (mPikiCountersList[i - 1]->mSlotFinished && !mPikiCountersList[i]->_A9) {
			mPikiCountersList[i]->startSlot(msVal._10);
			callIncPSE(i);
			break;
		}
	}

	if (mPikiCountersList[mCounterNum - 1]->mSlotFinished) {
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

/**
 * @note Address: 0x80407654
 * @note Size: 0x19C
 */
void ObjDayEndResultIncP::statusDecPSlot()
{
	for (int i = 0; i < 14; i++) {
		if (i == 0 && !mDeathCountersList[0]->_A9) {
			mDeathCountersList[i]->startSlot(msVal._10);
			callDecPSE(i);
		}

		if (mDeathCountersList[i - 1]->mSlotFinished && !mDeathCountersList[i]->_A9) {
			mDeathCountersList[i]->startSlot(msVal._10);
			callDecPSE(i);
			break;
		}
	}

	if (mDeathCountersList[13]->mSlotFinished) {
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

/**
 * @note Address: 0x804077F0
 * @note Size: 0x88
 */
void ObjDayEndResultIncP::callIncPSE(int id)
{
	u32 soundID;
	if (id % 2) {
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
}

/**
 * @note Address: 0x80407878
 * @note Size: 0x4C
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

/**
 * @note Address: 0x804078C4
 * @note Size: 0x188
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

/**
 * @note Address: 0x80407A4C
 * @note Size: 0x36C
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

/**
 * @note Address: 0x80407DB8
 * @note Size: 0x8B4
 */
void ObjDayEndResultMail::doCreate(JKRArchive* arc)
{
	ObjDayEndResultBase::doCreate(arc);
	mScreenMain = new P2DScreen::Mgr_tuning;
	mScreenMain->set("result_mail.blo", 0x1040000, arc);

	void* resource  = JKRGetResource("result_mail.bck", arc);
	mMainAnimTrans1 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimTrans2 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimTrans3 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));
	mMainAnimTrans4 = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(resource));

	mMainAnimSRT = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(JKRGetResource("result_mail.btk", arc)));
	mMainAnimTev = static_cast<J2DAnmTevRegKey*>(J2DAnmLoaderDataBase::load(JKRGetResource("result_mail.brk", arc)));
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
	mCharacterAnimTrans = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(JKRGetResource("result_maile_big_icon.bck", arc)));
	mScreenCharacter->search('NitemW')->setAnimation(mCharacterAnimTrans);

	mScreenStars = new P2DScreen::Mgr_tuning;
	mScreenStars->set("result_mail_constellation.blo", 0x40000, arc);
	mStarsAnimColor = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(JKRGetResource("result_mail_constellation.bpk", arc)));
	mScreenStars->setAnimation(mStarsAnimColor);

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(1902, "disp member err");
	}
	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());

	mSaveMgr = ebi::Save::TMgr::createInstance();
	mSaveMgr->doLoadMenuResource();
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
		s8* data      = scene->mMailFlags.byteView;
		for (int i = 0; i < 20; i++) {
			s8 id = data[i];
			if (id == -1)
				break;
			if (id == -2) {
				mMailIconAnms[i].mIconCount = 0;
				mMailIconAnms[i].mTIMG      = nullptr;
			} else {
				const char* path   = scene->mTableData[id]->getFileName();
				char buf[PATH_MAX] = { 0 };
				do {
					sprintf(buf, "%s%003d.bti", path, mMailIconAnms[i].mIconCount++);
				} while (JKRGetResource(buf, mIconArchive));

				mMailIconAnms[i].mIconCount--;
				if (mMailIconAnms[i].mIconCount) {
					mMailIconAnms[i].mTIMG = new ResTIMG*[mMailIconAnms[i].mIconCount];
				}

				for (int j = 0; j < mMailIconAnms[i].mIconCount; j++) {
					sprintf(buf, "%s%003d.bti", path, j);
					mMailIconAnms[i].mTIMG[j] = JKRGetImageResource(buf, mIconArchive);
				}
			}
		}
		setTex(mScreenMain, 'Pset_p', mMailIconAnms[0].mTIMG[0]);
	}
	MailTableData* data = scene->mTableData[scene->mMailFlags.byteView[0]];
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
	if (dispResult->mMail.mHasOpened) {
		mStatus = MAILSTATUS_Normal;
		mAlpha  = 255;
		changeAlpha();
		mNextBtnFadePane->fadein();
		mCharacterIconScaleY = 1.0f;
		mCharacterIconScaleX = 1.0f;
	}
}

/**
 * @note Address: 0x8040867C
 * @note Size: 0x170
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
	if (!dispResult->mMail.mHasOpened) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MAIL_RECIEVE, 0);
	}
	return true;
}

/**
 * @note Address: 0x804087EC
 * @note Size: 0x1B8
 */
bool ObjDayEndResultMail::doUpdateFadein()
{
	mMainAnimTrans4->mCurrentFrame = mMainAnimTimer1;
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += msVal.mAnimRate;

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

/**
 * @note Address: 0x804089A4
 * @note Size: 0x280
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
			switch (mSaveMgr->mEndState) {
			case ebi::Save::TMgr::End_SelectNoSave:
			case ebi::Save::TMgr::End_SaveDone:
				dispResult->mMail.mExitStatus = ::Screen::Game2DMgr::CHECK2D_DayResult_SaveFinished;
				break;

			case ebi::Save::TMgr::End_Cancel:
				mFlags &= ~4;
				break;

			case ebi::Save::TMgr::End_ReturnToFS:
				dispResult->mMail.mExitStatus = ::Screen::Game2DMgr::CHECK2D_DayResult_ReturnToFileSelect;
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
			statusFadeinFromLeft();
			break;
		case MAILSTATUS_FadeoutToRight:
			statusFadeoutToRight();
			break;
		case MAILSTATUS_FadeinFromRight:
			statusFadeinFromRight();
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

/**
 * @note Address: 0x80408C24
 * @note Size: 0x1B4
 */
bool ObjDayEndResultMail::doUpdateFadeout()
{
	updateCommon();
	mMainAnimTrans1->mCurrentFrame = mMainAnimTimer1;
	mScreenMain->search('NitemW')->animationTransform();

	mMainAnimTimer1 += msVal.mAnimRate;

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

/**
 * @note Address: 0x80408DD8
 * @note Size: 0x214
 */
void ObjDayEndResultMail::statusNormal()
{
	if (getGamePad()->getButtonDown() & Controller::PRESS_A) {
		mFlags |= 4;
		mSaveMgr->start();
	} else if (getGamePad()->getButtonDown() & Controller::PRESS_B) {
		DispDayEndResultIncP* dispIncP = static_cast<DispDayEndResultIncP*>(getDispMember());
		::Screen::SetSceneArg setArg(SCENE_DAY_END_RESULT_INC_P, dispIncP);
		if (getOwner()->setScene(setArg)) {
			SArgDayEndResultIncP argIncP(0);
			getOwner()->startScene(&argIncP);
			mFlags |= 0x10;
		}
	} else if (getGamePad()->getButton() & Controller::PRESS_L) {
		if (mCurrentDay > 1 && (mMaxDay - (mCurrentDay - 1)) < 20) {
			SceneDayEndResultMail* scene = static_cast<SceneDayEndResultMail*>(getOwner());
			s8* flag                     = scene->mMailFlags.byteView;
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

/**
 * @note Address: 0x80408FEC
 * @note Size: 0xA8
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

/**
 * @note Address: 0x80409094
 * @note Size: 0x38
 */
void ObjDayEndResultMail::statusFadeinFromLeft()
{
	mMainAnimTrans3->mCurrentFrame = mSideMoveTimer;
	if (mSideMoveTimer > 399.0f) {
		mSideMoveTimer -= 1.0f;
	} else {
		mStatus = MAILSTATUS_Normal;
	}
}

/**
 * @note Address: 0x804090CC
 * @note Size: 0xB8
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

/**
 * @note Address: 0x80409184
 * @note Size: 0x38
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

/**
 * @note Address: 0x804091BC
 * @note Size: 0x12C
 */
void ObjDayEndResultMail::statusWaitOpen()
{
	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(2289, "disp member err");
	}
	DispDayEndResult* dispResult = static_cast<DispDayEndResult*>(getDispMember());
	dispResult->mMail.mHasOpened = true;

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

/**
 * @note Address: 0x804092E8
 * @note Size: 0xD4
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

/**
 * @note Address: 0x804093BC
 * @note Size: 0xCC
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

/**
 * @note Address: 0x80409488
 * @note Size: 0x480
 */
void ObjDayEndResultMail::changeMail()
{
	SceneDayEndResultMail* scene = static_cast<SceneDayEndResultMail*>(getOwner());
	mCharacterIconTimer          = 0;
	setTex(mScreenMain, 'Pset_p', mMailIconAnms[mMaxDay - mCurrentDay].mTIMG[0]);
	u64 mesg = scene->mTableData[scene->mMailFlags.byteView[mMaxDay - mCurrentDay]]->mMessageID;
	mScreenMain->search('Ttext')->setMsgID(mesg);

	if (mCurrentDay == mMaxDay) {
		mMessage->setBounds(1.0f, 1.0f, 1.0f, 1.0f);
		JUtility::TColor color(255, 255, 255, 255);
		static_cast<J2DPicture*>(mScreenMain->search('Pset_p'))->setCornerColorRef(color);
		static_cast<J2DPicture*>(mScreenMain->search('Picon_b'))->setCornerColorRef(color);
	} else {
		mMessage->setBounds(msVal._2C, msVal._30, msVal._34, msVal._38);
		JUtility::TColor color(msVal._2C * 255.0f, msVal._30 * 255.0f, msVal._34 * 255.0f, msVal._38 * 255.0f);
		static_cast<J2DPicture*>(mScreenMain->search('Pset_p'))->setCornerColorRef(color);
		static_cast<J2DPicture*>(mScreenMain->search('Picon_b'))->setCornerColorRef(color);
	}
}

/**
 * @note Address: 0x80409908
 * @note Size: 0x64
 */
void ObjDayEndResultMail::changeAlpha() { mScreenCharacter->search('NitemW')->setAlpha(255 - mAlpha); }

/**
 * @note Address: 0x8040996C
 * @note Size: 0x1C4
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

/**
 * @note Address: 0x80409B30
 * @note Size: 0x288
 */
void ObjDayEndResultMail::updateCommon()
{
	ObjDayEndResultBase::updateCommon();
	mScreenMain->animation();
}

inline u64 J2DPane::getTagName() const { return mTag; }

/**
 * @note Address: 0x80409DB8
 * @note Size: 0x3BC
 */
void ObjDayEndResultMail::setCallBackMessage(P2DScreen::Mgr* mgr, J2DPane* pane)
{
	if (pane->getTypeID() == 19 && pane->getUserInfo()) {
		og::Screen::CallBack_Message* mesg = new og::Screen::CallBack_Message;
		u64 tag                            = pane->getTagName();
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
}

/**
 * @note Address: 0x8040A174
 * @note Size: 0x24
 */
void ObjDayEndResultMail::setCallBackMessage(P2DScreen::Mgr* mgr) { setCallBackMessage(mgr, mgr); }

/**
 * @note Address: 0x8040A198
 * @note Size: 0x5C
 */
bool ObjDayEndResultMail::skipped() const
{
	SceneDayEndResultMail* scene = static_cast<SceneDayEndResultMail*>(getOwner());
	return scene->mMailFlags.byteView[mMaxDay - mCurrentDay] == -2;
}

/**
 * @note Address: 0x8040A1F4
 * @note Size: 0x68
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

/**
 * @note Address: 0x8040A25C
 * @note Size: 0x1BC
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

	J2DBlend info(1, 7, 6, 0);
	u64 tags[4] = { 'nuki_tex', 'efect_00', 'efect_01', 0 };
	mScreenMain->setBlendInfo(info, tags);
}

/**
 * @note Address: 0x8040A418
 * @note Size: 0x78
 */
bool ObjDayEndResultTitl::doUpdateFadein()
{
	updateCommon();
	mScreenMain->setAlpha(mAlpha);

	if (mAlpha > 255 - msVal.mAlphaChangeRate) {
		mAlpha = 255;
		return true;
	} else {
		mAlpha += msVal.mAlphaChangeRate;
		return false;
	}
}

/**
 * @note Address: 0x8040A490
 * @note Size: 0x64
 */
bool ObjDayEndResultTitl::doUpdate()
{
	updateCommon();
	if (++mTimer >= msVal.mActiveMaxFrames || getGamePad()->getButtonDown() & Controller::PRESS_A) {
		return true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x8040A4F4
 * @note Size: 0x74
 */
bool ObjDayEndResultTitl::doUpdateFadeout()
{
	updateCommon();
	mScreenMain->setAlpha(mAlpha);

	if (mAlpha < msVal.mAlphaChangeRate) {
		mAlpha = 0;
		return true;
	} else {
		mAlpha -= msVal.mAlphaChangeRate;
		return false;
	}
	return false;
}

/**
 * @note Address: 0x8040A568
 * @note Size: 0xCC
 */
void ObjDayEndResultTitl::doUpdateFadeoutFinish()
{
	::Screen::SetSceneArg arg(SCENE_DAY_END_RESULT_ITEM, getDispMember());
	SArgDayEndResultItem sarg(1);
	if (getOwner()->setScene(arg)) {
		getOwner()->startScene(&sarg);
	}
}

/**
 * @note Address: 0x8040A634
 * @note Size: 0x144
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

/**
 * @note Address: 0x8040A778
 * @note Size: 0xE0
 */
void ObjDayEndResultTitl::updateCommon()
{
	mMainAnimTrans->mCurrentFrame = mAnimTimer1;
	mMainAnimSRT->mCurrentFrame   = mAnimTimer2;
	mScreenMain->animation();

	mAnimTimer1 += 1.0f;
	if (mAnimTimer1 >= mMainAnimTrans->mTotalFrameCount) {
		mAnimTimer1 = 0.0f;
	}

	mAnimTimer2 += 1.0f;
	if (mAnimTimer2 >= mMainAnimSRT->mTotalFrameCount) {
		mAnimTimer2 = 0.0f;
	}
}

/**
 * @note Address: 0x8040A858
 * @note Size: 0x48
 */
SceneDayEndResultMail::SceneDayEndResultMail()
{
	mTableData   = nullptr;
	mIconArchive = nullptr;
}

/**
 * @note Address: 0x8040A8A0
 * @note Size: 0x58C
 */
void SceneDayEndResultMail::doUserCallBackFunc(Resource::MgrCommand* mgr)
{
	MailTableFile* file = nullptr;
	LoadResource::Arg tableArg("/user/Koono/mail_table.szs");
	LoadResource::Node* tableNode = gLoadResourceMgr->mountArchive(tableArg);
	if (tableNode) {
		file = static_cast<MailTableFile*>(JKRGetResource("mail_table.bin", tableNode->mArchive));
	} else {
		JUT_PANICLINE(2674, "failed");
	}

	// problem is from here
	int offset              = 4;
	MailSaveFlags saveFlags = Game::playData->mMailSaveData.mPastLogs;

	u32 entries = file->mEntries;
	mTableData  = new MailTableData*[entries];
	for (int i = 0; i < entries; i++) {
		mTableData[i]
		    = new MailTableData(reinterpret_cast<MailTableDataEntry*>((u8*)file + offset), saveFlags, i); // this is the main issue
		int fileNameLen = 0;
		for (u8* ptr = (u8*)mTableData[i]->mFileName; *ptr; ptr++, fileNameLen++) {
			;
		}
		offset += (fileNameLen + 16) & ~0x3;
	}
	// to here

	if (!getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(2690, "disp member err");
	}

	int mailID;
	DispDayEndResultMail& dispResult = static_cast<DispDayEndResult*>(getDispMember())->mMail;
	if (dispResult.mHeap && !dispResult.mBackupHeap) {
		dispResult.mBackupHeap = makeSolidHeap(-1, dispResult.mHeap, false);
		mailID                 = -1;
		for (int i = 0; i < entries; i++) {
			if (dispResult.mMailCategory != mTableData[i]->mFlag[0]) {
				continue;
			}

			if (!mTableData[i]->mSaveFlag || (s8)mTableData[i]->mFlag[1] < 0) {
				mailID = i;
				break;
			}
		}

		JUT_ASSERTLINE(2710, mailID != -1, "error");

		for (int i = 0; i < entries; i++) {
			if (dispResult.mMailCategory != mTableData[i]->mFlag[0]) {
				continue;
			}
			if (!mTableData[i]->mSaveFlag || (s8)mTableData[i]->mFlag[1] < 0) {
				if ((s8)mTableData[i]->mFlag[1] > (s8)mTableData[mailID]->mFlag[1]
				    || ((s8)mTableData[i]->mFlag[1] == (s8)mTableData[mailID]->mFlag[1] && randFloat() < 0.5f)) {
					mailID = i;
					break;
				}
			}
		}

		dispResult.mTodayMailID = mailID;

		if (dispResult.mTodayMailID < 128) {
			int byte = dispResult.mTodayMailID >> 3;
			saveFlags.byteView[15 - byte] |= (1 << (dispResult.mTodayMailID - (byte << 3)));
		}

		Game::playData->mMailSaveData.mPastLogs = saveFlags;
		Game::playData->mMailSaveData.set_history(dispResult.mTodayMailID);

		mMailFlags = Game::playData->mMailSaveData.mHistory;

		LoadResource::Arg iconArg("/user/Koono/mail_icon.szs");
		iconArg.mHeap                = dispResult.mBackupHeap;
		LoadResource::Node* iconNode = gLoadResourceMgr->mountArchive(iconArg);
		if (iconNode) {
			mIconArchive = static_cast<JKRMemArchive*>(iconNode->mArchive);
		} else {
			JUT_PANICLINE(2749, "no exist");
		}
	} else {
		mMailFlags = Game::playData->mMailSaveData.mHistory;
	}

	og::newScreen::makeLanguageResName(mName, "result_mail.szs");
	LoadResource::Arg arg(mName);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	if (node) {
		registObj(new ObjDayEndResultMail, node->mArchive);
	} else {
		JUT_PANICLINE(2764, "failed");
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
