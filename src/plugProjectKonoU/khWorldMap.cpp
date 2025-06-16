#include "kh/khUtil.h"
#include "kh/khWorldMap.h"
#include "LoadResource.h"
#include "og/newScreen/ogUtil.h"
#include "Game/gamePlayData.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/ArrowAlphaBlink.h"
#include "TParticle2dMgr.h"
#include "efx2d/WorldMap.h"
#include "utilityU.h"
#include "Screen/Game2DMgr.h"
#include "PSSystem/PSSystemIF.h"
#include "efx2d/T2DChangesmoke.h"
#include "Controller.h"

static void _Print(char* format, ...)
{
	OSReport(format, __FILE__);
}

namespace kh {

namespace Screen {

// these control the camera zoom during new level unlocked animations
const f32 cOpenMinFrm[4] = { 0.0f, 300.0f, 600.0f, 900.0f };
const f32 cOpenMaxFrm[4] = { 300.0f, 600.0f, 900.0f, 1100.0f };

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
khUtilFadePaneWM* khUtilFadePaneWM::create(P2DScreen::Mgr* mgr, u64 tag, u8)
{
	khUtilFadePaneWM* outPane;
	if (!mgr) {
		return nullptr;
	}

	outPane = new khUtilFadePaneWM;
	P2ASSERTLINE(60, outPane);
	outPane->add(mgr->addCallBack(tag, outPane));
	return outPane;
}

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
khUtilFadePaneWM* khUtilFadePaneWM::create(P2DScreen::Mgr* screen, J2DPane* pane, u8 a)
{
	return create(screen, pane->mTag, a);
}

/**
 * @note Address: 0x803F1BA0
 * @note Size: 0x58
 */
void khUtilFadePaneWM::fadeout_finish()
{
	if (mFinish) {
		mMapObj->changeInfo();
		mMapObj->effectFirstTime();
		mState = 0;
	} else {
		mState = 2;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
khUtilColorAnmWM::khUtilColorAnmWM(P2DScreen::Mgr* screen, u64 tag, int i1, int i2)
    : khUtilColorAnm(screen, tag, i1, i2)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
void khUtilColorAnmWM::my_init(J2DPicture** panes, og::Screen::CallBack_CounterRV** counters)
{
	for (int j = 0; j < 4; j++) {
		mPaneList[j] = panes[j];
		mEfx[j]      = new efx2d::T2DCountKira;
		mEfx[j]->setGroup(4);
	}
	mCounter1 = counters[0];
	mCounter2 = counters[1];
}

/**
 * @note Address: N/A
 * @note Size: 0x110
 */
void khUtilColorAnmWM::effect_on(u32 max)
{
	mColor      = mColorList[0];
	mFrame      = 0;
	mUpdateMode = true;
	for (int i = 0; i < 4; i++) {
		if (i % 2 == 0 || max >= 10) {
			Vector3f pos(getPaneCenterX(mPaneList[i]), getPaneCenterY(mPaneList[i]), 0.0f);
			efx2d::Arg arg(pos);
			mEfx[i]->create(&arg);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void khUtilColorAnmWM::effect_off()
{
	mUpdateMode = false;
	for (int j = 0; j < 4; j++) {
		mEfx[j]->fade();
	}
	mCounter1->setPuyoAnim(false);
	mCounter2->setPuyoAnim(false);
}

/**
 * @note Address: 0x803F1C78
 * @note Size: 0x7C
 */
void khUtilColorAnmWM::do_update()
{
	JUtility::TColor col = mColor;
	static_cast<J2DTextBox*>(mPane)->setWhite(col);
	if (mUpdateMode && !mFrame) {
		mCounter1->startPuyoUp(1.0f);
		mCounter2->startPuyoUp(1.0f);
	}
}

/**
 * @note Address: 0x803F1CF4
 * @note Size: 0x1E8
 */
WorldMap::WorldMap()
{
	/* NON-MATCHING */
	mScreenKitagawa     = nullptr;
	mKitaAnim2          = nullptr;
	mKitaAnim1          = nullptr;
	mKitaAnim3          = nullptr;
	mKitaAnim5          = nullptr;
	mKitaAnim4          = nullptr;
	mScreenRocket       = nullptr;
	mRocketAnim1        = nullptr;
	mRocketAnim2        = nullptr;
	mScreenInfo         = nullptr;
	mInfoAnim3          = nullptr;
	mInfoAnim2          = nullptr;
	mInfoAnim1          = nullptr;
	mAnimTimers[9]      = 0.0f;
	mAnimTimers[8]      = 0.0f;
	mAnimTimers[7]      = 0.0f;
	mAnimTimers[6]      = 0.0f;
	mAnimTimers[5]      = 0.0f;
	mAnimTimers[4]      = 0.0f;
	mAnimTimers[3]      = 0.0f;
	mAnimTimers[2]      = 0.0f;
	mAnimTimers[1]      = 0.0f;
	mAnimTimers[0]      = 0.0f;
	mCameraZoomX        = 0.0f;
	mCameraZoomMinFrame = 0.0f;
	mCameraZoomY        = 1.0f;
	mRocketPosition.set(0.0f, 0.0f);
	mRocketPosition2.set(0.0f, 0.0f);

	mRocketAngle.set(0.0f, -1.0f);
	_B4.set(mRocketAngle);

	mRocketScale     = 0.0f;
	mEfxRocketGlow   = nullptr;
	mEfxRocketSparks = nullptr;
	mEfxMapFlare     = nullptr;
	mEfxShstar1      = nullptr;

	mEffectPos.set(0.0f, 0.0f);
	mEffectDir.set(0.0f, 1.0f);
	mLight01Center.set(0.0f, 0.0f);
	mStarCenter.set(0.0f, 0.0f);

	mOnyonArray                     = nullptr;
	mOnyonCount                     = 0;
	mCurrentCourseIndex             = COURSE_Tutorial;
	mRocketMoveCounter              = 0;
	mGroundTreasureCounterMax       = nullptr;
	mGroundTreasureCounterCollected = nullptr;
	mPokoCounter                    = nullptr;
	mGroundTreasureMax              = 0;
	mGroundTreasureCount            = 0;

	for (int i = 0; i < 4; i++) {
		mCaveTreasureCounterMax[i]       = nullptr;
		mCaveTreasureCounterCollected[i] = nullptr;
		mCaveOtaMax[i]                   = 0;
		mCaveOtaNum[i]                   = 0;
	}

	mCaveFadePane = nullptr;
	for (int i = 0; i < 5; i++) {
		mColorAnims[i] = nullptr;
	}

	mColorAnim2 = nullptr;
	mArrowBlink = nullptr;
	// possibly a substruct?
	mCurrentState    = WMAP_Begin;
	mRocketAngleMode = ROT_Unk1;
	mFlags           = WMAPFLAG_IsFirstTimeEffect;
	// end possible substruct
	mLockoutCounter      = 1;
	mCourseJustOpenFlags = 0;
	mOpenCourses         = 0;
	mZukanFadeout        = 0;
}

/**
 * @note Address: 0x803F1F3C
 * @note Size: 0xCC
 */
void WorldMap::init(::Game::WorldMap::InitArg& arg)
{
	int i    = 0;
	mInitArg = arg;
	do {
		mOpenCourses += ::Game::playData->courseOpen(i);
		SET_FLAG(mCourseJustOpenFlags, ::Game::playData->courseJustOpen(i) << i);
		i++;
	} while (i < 4);
	SET_FLAG(mCourseJustOpenFlags, mCourseJustOpenFlags << 4);
}

/**
 * @note Address: 0x803F2008
 * @note Size: 0x1790
 */
void WorldMap::loadResource()
{
	JKRHeap* savedHeap = JKRGetCurrentHeap();
	mInitArg.mHeap->becomeCurrentHeap();

	JKRArchive* arc = nullptr;

	char path[128] = { 0 };
	og::newScreen::makeLanguageResName(path, "worldmap.szs");
	LoadResource::Arg mapArg(path);
	LoadResource::Node* mapNode = gLoadResourceMgr->mountArchive(mapArg);
	if (mapNode) {
		arc = mapNode->mArchive;
	} else {
		JUT_PANICLINE(278, "failed");
	}
	P2ASSERTLINE(279, arc);

	// load in animations
	mScreenKitagawa = new P2DScreen::Mgr_tuning;
	mScreenKitagawa->set("world_map_kitagawa.blo", 0x1040000, arc);

	const void* resData = JKRFileLoader::getGlbResource("world_map_kitagawa.bck", arc);
	mKitaAnim1          = (J2DAnmTransform*)J2DAnmLoaderDataBase::load(resData);
	mKitaAnim2          = (J2DAnmTransformKey*)J2DAnmLoaderDataBase::load(resData);
	mScreenKitagawa->setAnimation(mKitaAnim1);
	for (int i = 0; i < 4; i++) {
		mScreenKitagawa->search(getSerialTagName('Pland0', i))->setAnimation(mKitaAnim2);
		mScreenKitagawa->search(getSerialTagName('Plight0', i))->setAnimation(mKitaAnim2);
	}

	void* file = JKRFileLoader::getGlbResource("world_map_kitagawa.bpk", arc);
	mKitaAnim3 = static_cast<J2DAnmColorKey*>(J2DAnmLoaderDataBase::load(file));
	mScreenKitagawa->setAnimation(mKitaAnim3);

	file       = JKRFileLoader::getGlbResource("world_map_kitagawa.btk", arc);
	mKitaAnim4 = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(file));
	mScreenKitagawa->setAnimation(mKitaAnim4);

	file       = JKRFileLoader::getGlbResource("world_map_kitagawa_02.btk", arc);
	mKitaAnim5 = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(file));
	mScreenKitagawa->setAnimation(mKitaAnim5);

	// set up info/anim paths for rocket
	const char* paths[2][3] = { "worldmap_icon.blo",  "worldmap_icon.bck",  "worldmap_icon.btp",
		                        "worldmap_gicon.blo", "worldmap_gicon.bck", "worldmap_gicon.btp" };
	const char** usePath;

	usePath = paths[0]; // normal ship
	if (Game::playData->isStoryFlag(Game::STORY_DebtPaid)) {
		usePath = paths[1]; // gold ship
	}

	mScreenRocket = new P2DScreen::Mgr;
	mScreenRocket->set(usePath[0], 0x40000, arc);

	file         = JKRFileLoader::getGlbResource(usePath[1], arc);
	mRocketAnim1 = static_cast<J2DAnmTransformKey*>(J2DAnmLoaderDataBase::load(file));
	mScreenRocket->setAnimation(mRocketAnim1);

	file         = JKRFileLoader::getGlbResource(usePath[2], arc);
	mRocketAnim2 = static_cast<J2DAnmTexPattern*>(J2DAnmLoaderDataBase::load(file));
	mScreenRocket->setAnimation(mRocketAnim2);

	// set up onyons
	// check how many onyons we have
	if (Game::playData->hasBootContainer(Game::Red)) {
		mOnyonCount++;
	} else {
		mScreenRocket->search('NRED')->hide();
	}

	if (Game::playData->hasBootContainer(Game::Yellow)) {
		mOnyonCount++;
	} else {
		mScreenRocket->search('NYELLOW')->hide();
	}

	if (Game::playData->hasBootContainer(Game::Blue)) {
		mOnyonCount++;
	} else {
		mScreenRocket->search('NBLUE')->hide();
	}
	// set up correct number of dynamics
	mOnyonArray = new OnyonDynamics[mOnyonCount];

	// apply panes to each onyon
	int onyons = 0;
	if (Game::playData->hasBootContainer(Game::Red)) {
		mOnyonArray[onyons++].mOnyonPane = mScreenRocket->search('NRED');
	}

	if (Game::playData->hasBootContainer(Game::Yellow)) {
		mOnyonArray[onyons++].mOnyonPane = mScreenRocket->search('NYELLOW');
	}

	if (Game::playData->hasBootContainer(Game::Blue)) {
		mOnyonArray[onyons].mOnyonPane = mScreenRocket->search('NBLUE');
	}

	// offset each onyon to a different rotation angle (equally spread)
	for (int i = 1; i < mOnyonCount; i++) {
		mOnyonArray[i].mRotateAngle = (i * 0xffff) / mOnyonCount;
	}

	// set up information screens
	char* infoPaths[4] = { "world_map_info.blo", "world_map_info.btk", "world_map_info_02.btk", "world_map_info_03.btk" };
	mScreenInfo        = new P2DScreen::Mgr_tuning;
	mScreenInfo->set(infoPaths[0], 0x40000, arc);

	file       = JKRFileLoader::getGlbResource(infoPaths[1], arc);
	mInfoAnim1 = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(file));

	file       = JKRFileLoader::getGlbResource(infoPaths[2], arc);
	mInfoAnim2 = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(file));

	file       = JKRFileLoader::getGlbResource(infoPaths[3], arc);
	mInfoAnim3 = static_cast<J2DAnmTextureSRTKey*>(J2DAnmLoaderDataBase::load(file));

	mScreenInfo->setAnimation(mInfoAnim1);
	mScreenInfo->setAnimation(mInfoAnim2);
	mScreenInfo->setAnimation(mInfoAnim3);

	og::Screen::setCallBackMessage(mScreenInfo);
	og::Screen::setCallBack_CounterDay(mScreenInfo, 'Pday_r', 'Pday_l', 'Pday_c', &mInitArg.mCurrentDay, 3, arc);

	int money = ::Game::playData->mPokoCount;
	if (Game::playData->isStoryFlag(Game::STORY_DebtPaid)) {
		// debt is paid
		mScreenInfo->search('Nfinal_f')->hide(); // hide the debt amount
		mScreenInfo->search('Ncomp_f')->show();  // show complete amount across screen
		mPokoCounter = og::Screen::setCallBack_CounterRV(mScreenInfo, 'Pcomp00', money, 10, false, true, arc); // up to 10 digits?
	} else {
		// debt is not paid
		mScreenInfo->search('Nfinal_f')->show(); // show debt amount
		mScreenInfo->search('Ncomp_f')->hide();  // hide complete amount across screen
		mPokoCounter
		    = og::Screen::setCallBack_CounterRV(mScreenInfo, 'Ppoko01', money, 5, false, false, arc); // only need 5 digits (< 10,000)
	}

	// above-ground treasure counters
	mGroundTreasureCounterCollected = og::Screen::setCallBack_CounterRV(mScreenInfo, 'Pg_c_01', &mGroundTreasureCount, 2, false, true, arc);
	mGroundTreasureCounterMax       = og::Screen::setCallBack_CounterRV(mScreenInfo, 'Pg_p_01', &mGroundTreasureMax, 2, false, true, arc);

	// cave treasures for each of the four caves
	mCaveTreasureCounterCollected[0] = og::Screen::setCallBack_CounterRV(mScreenInfo, 'P0_c_01', &mCaveOtaNum[0], 2, false, true, arc);
	mCaveTreasureCounterMax[0]       = og::Screen::setCallBack_CounterRV(mScreenInfo, 'P0_p_01', &mCaveOtaMax[0], 2, false, true, arc);
	mCaveTreasureCounterCollected[1] = og::Screen::setCallBack_CounterRV(mScreenInfo, 'P1_c_01', &mCaveOtaNum[1], 2, false, true, arc);
	mCaveTreasureCounterMax[1]       = og::Screen::setCallBack_CounterRV(mScreenInfo, 'P1_p_01', &mCaveOtaMax[1], 2, false, true, arc);
	mCaveTreasureCounterCollected[2] = og::Screen::setCallBack_CounterRV(mScreenInfo, 'P2_c_01', &mCaveOtaNum[2], 2, false, true, arc);
	mCaveTreasureCounterMax[2]       = og::Screen::setCallBack_CounterRV(mScreenInfo, 'P2_p_01', &mCaveOtaMax[2], 2, false, true, arc);
	mCaveTreasureCounterCollected[3] = og::Screen::setCallBack_CounterRV(mScreenInfo, 'P3_c_01', &mCaveOtaNum[3], 2, false, true, arc);
	mCaveTreasureCounterMax[3]       = og::Screen::setCallBack_CounterRV(mScreenInfo, 'P3_p_01', &mCaveOtaMax[3], 2, false, true, arc);

	mScreenInfo->search('T_new_l')->hide();
	mScreenInfo->search('T_new_r')->hide();
	mScreenInfo->search('Nlwin')->hide();
	mScreenInfo->search('Nrwin')->hide();

	mColorAnim2 = new khUtilColorAnm(nullptr, 'dummy', 3, 100);
	mColorAnim2->setColor(JUtility::TColor(255, 96, 80, 0), 0);
	mColorAnim2->setColor(JUtility::TColor(255, 160, 32, 255), 1);
	mColorAnim2->setColor(JUtility::TColor(255, 96, 80, 0), 2);
	mColorAnim2->mUpdateMode = true;

	mScaleMgr   = new og::Screen::ScaleMgr;
	mArrowBlink = new og::Screen::ArrowAlphaBlink;

	setInfAlpha(mScreenInfo->search('Nlbtn'));
	setInfAlpha(mScreenInfo->search('Nrbtn'));

	// load particles
	void* jpc = JKRDvdRipper::loadToMainRAM("user/Ebisawa/effect/eff2d_world_map.jpc", nullptr, Switch_0, 0, nullptr,
	                                        JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, nullptr);
	P2ASSERTLINE(462, jpc);
	particle2dMgr->setSceneResourceManager(new JPAResourceManager(jpc, JKRGetCurrentHeap()));
	mEfxRocketSparks = new efx2d::WorldMap::T2DRocketB(mEffectPos, mEffectDir);
	mEfxRocketGlow   = new efx2d::WorldMap::T2DRocketGlow(mEffectPos, mEffectDir);
	mEfxRocketSparks->setGroup(3);
	mEfxRocketGlow->setGroup(2);
	mEfxRocketSparks->create(nullptr);
	mEfxRocketGlow->create(nullptr);

	for (int i = 0; i < mOnyonCount; i++) {
		mOnyonArray[i].initPtcl();
	}

	mEfxMapFlare = new efx2d::WorldMap::T2DMapFlare(&mLight01Center);
	mEfxShstar1  = new efx2d::WorldMap::T2DShstar1(&mStarCenter);
	mEfxMapFlare->setGroup(2);
	mEfxShstar1->setGroup(2);
	mEfxMapFlare->create(nullptr);
	mEfxShstar1->create(nullptr);

	mCaveFadePane = khUtilFadePaneWM::create(mScreenInfo, mScreenInfo->search('Ncave0'), 0);

	mCaveFadePane->add(mScreenInfo->search('Ncave1'));
	mCaveFadePane->add(mScreenInfo->search('Ncave2'));
	mCaveFadePane->add(mScreenInfo->search('Ncave3'));
	mCaveFadePane->add(mScreenInfo->search('Pc_name'));
	mCaveFadePane->add(mScreenInfo->search('Ngrand'));
	mCaveFadePane->mMapObj = this;
	mCaveFadePane->set_init_alpha(0);
	mCaveFadePane->fadeout();

	u64 paneTags[25] = { 'PICT_045', 'Pg_p_01',  'Pg_p_02',  'Pg_c_01', 'Pg_c_02', 'Pcave_00', 'P0_p_01',  'P0_p_02', 'P0_c_01',
		                 'P0_c_02',  'Pcave_01', 'P1_p_01',  'P1_p_02', 'P1_c_01', 'P1_c_02',  'Pcave_02', 'P2_p_01', 'P2_p_02',
		                 'P2_c_01',  'P2_c_02',  'Pcave_03', 'P3_p_01', 'P3_p_02', 'P3_c_01',  'P3_c_02' };

	og::Screen::CallBack_CounterRV* counter[5][2]
	    = { mGroundTreasureCounterCollected,  mGroundTreasureCounterMax,  mCaveTreasureCounterCollected[0], mCaveTreasureCounterMax[0],
		    mCaveTreasureCounterCollected[1], mCaveTreasureCounterMax[1], mCaveTreasureCounterCollected[2], mCaveTreasureCounterMax[2],
		    mCaveTreasureCounterCollected[3], mCaveTreasureCounterMax[3] };

	for (int i = 0; i < 5; i++) {
		mColorAnims[i] = new khUtilColorAnmWM(mScreenInfo, paneTags[5 * i]);
		mColorAnims[i]->setColor(JUtility::TColor(255, 160, 64, 255), 0);
		mColorAnims[i]->setColor(JUtility::TColor(255, 255, 96, 255), 1);
		mColorAnims[i]->setColor(JUtility::TColor(255, 160, 64, 255), 2);
		mColorAnims[i]->setDisabledColor(JUtility::TColor(0, 173, 182, 255));

		J2DPicture* paneList[4]
		    = { (J2DPicture*)mScreenInfo->search(paneTags[5 * i + 1]), (J2DPicture*)mScreenInfo->search(paneTags[5 * i + 2]),
			    (J2DPicture*)mScreenInfo->search(paneTags[5 * i + 3]), (J2DPicture*)mScreenInfo->search(paneTags[5 * i + 4]) };

		mColorAnims[i]->my_init(paneList, counter[i]);
	}
	savedHeap->becomeCurrentHeap();

	for (int i = mOpenCourses - 1; i >= 0; i--) {
		if (!(mCourseJustOpenFlags & 1 << i)) {
			mCameraZoomMinFrame = cOpenMinFrm[i];
			break;
		}
	}

	mScreenRocket->search('NROCKET')->setOffset(1000.0f, 0.0f);
	mScreenRocket->search('NRED')->setOffset(1000.0f, 0.0f);
	mScreenRocket->search('NYELLOW')->setOffset(1000.0f, 0.0f);
	mScreenRocket->search('NBLUE')->setOffset(1000.0f, 0.0f);

	for (int i = 0; i < 4; i++) {
		mScreenKitagawa->search(getSerialTagName('Nwait0', i))->hide();
	}

	for (int i = 0; i < 4; i++) {
		if (i >= mOpenCourses || mCourseJustOpenFlags & 1 << i) {
			mScreenKitagawa->search(getSerialTagName('Npoint0', i))->hide();
		}
	}

	for (int i = 0; i < mOpenCourses; i++) {
		mScreenKitagawa->search(getSerialTagName('Plight0', i))->hide();
	}
	::Screen::gGame2DMgr->setGamePad(mInitArg.mController);
}

/**
 * @note Address: 0x803F37D4
 * @note Size: 0x1C20
 */
void WorldMap::update(Game::WorldMap::UpdateArg& arg)
{
	/* NON-MATCHING */
	arg.mCourseInfo = mInitArg.mStages->getCourseInfo(mCurrentCourseIndex);
	mKitaAnim1->setFrame(mAnimTimers[0]);
	mKitaAnim3->setFrame(mAnimTimers[2]);
	mKitaAnim4->setFrame(mAnimTimers[3]);
	mKitaAnim5->setFrame(mAnimTimers[4]);

	mRocketAnim1->setFrame(mAnimTimers[5]);
	mRocketAnim2->setFrame(mAnimTimers[6]);

	mInfoAnim1->setFrame(mAnimTimers[7]);
	mInfoAnim2->setFrame(mAnimTimers[8]);
	mInfoAnim3->setFrame(mAnimTimers[9]);

	mScreenKitagawa->animation();
	mScreenRocket->animation();
	mScreenInfo->animation();

	mKitaAnim2->setFrame(mAnimTimers[1]);

	for (int i = 0; i < 4; i++) {
		mScreenKitagawa->search(getSerialTagName('Pland0', i))->animationTransform();
		mScreenKitagawa->search(getSerialTagName('Plight0', i))->animationTransform();
	}

	mAnimTimers[2] += 1.0f;
	if (mAnimTimers[2] >= mKitaAnim3->getFrameMax()) {
		mAnimTimers[2] = 0.0f;
	}

	mAnimTimers[3] += 1.0f;
	if (mAnimTimers[3] >= mKitaAnim4->getFrameMax()) {
		mAnimTimers[3] = 0.0f;
	}

	mAnimTimers[4] += 1.0f;
	if (mAnimTimers[4] >= mKitaAnim5->getFrameMax()) {
		mAnimTimers[4] = 0.0f;
	}

	mAnimTimers[5] += 1.0f;
	if (mAnimTimers[5] >= mRocketAnim1->getFrameMax()) {
		mAnimTimers[5] = 0.0f;
	}

	mAnimTimers[6] += 1.0f;
	if (mAnimTimers[6] >= mRocketAnim2->getFrameMax()) {
		mAnimTimers[6] = 0.0f;
	}

	mAnimTimers[7] += 0.5f;
	if (mAnimTimers[7] >= mInfoAnim1->getFrameMax()) {
		mAnimTimers[7] = 0.0f;
	}

	mAnimTimers[8] += 0.5f;
	if (mAnimTimers[8] >= mInfoAnim2->getFrameMax()) {
		mAnimTimers[8] = 0.0f;
	}

	mAnimTimers[9] += 0.5f;
	if (mAnimTimers[9] >= mInfoAnim3->getFrameMax()) {
		mAnimTimers[9] = 0.0f;
	}

	mAnimTimers[1] += 1.0f;
	if (mAnimTimers[1] >= mKitaAnim2->getFrameMax()) {
		mAnimTimers[1] = 0.0f;
	}

	mLight01Center = Vector2f(getPaneCenterX(mScreenKitagawa->search('light01')), getPaneCenterY(mScreenKitagawa->search('light01')));
	mStarCenter    = Vector2f(getPaneCenterX(mScreenKitagawa->search('star')), getPaneCenterY(mScreenKitagawa->search('star')));

	u64 tagsWait[4]     = { 'Nwait0', 'Nwait1', 'Nwait2', 'Nwait3' };
	u64 tagsPoint[4]    = { 'Npoint0', 'Npoint1', 'Npoint2', 'Npoint3' };
	J2DPane* cWaitPane  = mScreenKitagawa->search(tagsWait[mCurrentCourseIndex]);
	J2DPane* cPointPane = mScreenKitagawa->search(tagsPoint[mCurrentCourseIndex]);
	J2DPane* paneRocket = mScreenRocket->search('NROCKET');
	mRocketPosition2    = mRocketPosition;

	switch (mCurrentState) {
	case WMAP_NewMapOpened: {
		mAnimTimers[0] += 1.5f;
		if (mAnimTimers[0] >= mCameraZoomMinFrame && !newMapOpen()) {
			// COURSE_Tutorial is always open, so start from next course
			for (int i = COURSE_Forest; i < COURSE_COUNT; i++) {
				if (mCourseJustOpenFlags & 1 << (i + 4)) {
					// if a course has just opened, make the appear effect spawn over its dot
					Vector2f efxPos(getPaneCenterX(mScreenKitagawa->search(getSerialTagName('Npoint0', i))),
					                getPaneCenterY(mScreenKitagawa->search(getSerialTagName('Npoint0', i))));
					efx2d::ArgScale efxArg(efxPos, msVal._28[mOpenCourses]);
					efx2d::WorldMap::T2DNewmap efx;
					efx.mResMgrId = 1;
					efx.mGroup    = 2;
					efx.create(&efxArg);
					// if the newly unlocked level is wistful wild, make the meteor shower
					if (i == COURSE_Last) {
						efx2d::ArgScale efxArg2(mStarCenter, 1.0f);
						efx2d::WorldMap::T2DShstar2 efx2;
						efx2.mResMgrId = 1;
						efx2.mGroup    = 2;
						efx2.create(&efxArg2);
					}
					mScreenKitagawa->search(getSerialTagName('Npoint0', i))->show();
				}
			}

			// set to (force move?) state and move ship to newly unlocked level
			mCurrentState       = WMAP_Unk12;
			mCurrentCourseIndex = mOpenCourses - 1;
			cWaitPane           = mScreenKitagawa->search(tagsWait[mCurrentCourseIndex]);
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_2);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_NEW_COURSE_OPEN, 0);
			mCaveFadePane->fadeout();
		}
		postureControl(cWaitPane);
		onyonMove();
		break;
	}
	case WMAP_RocketMoving: {
		f32 test = rocketMove(cWaitPane, true);
		rocketUpdate(cWaitPane);
		if (test < msVal._0C) {
			mRocketMoveCounter = 0;
			mCurrentState      = WMAP_Idle;
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_Idle);
		}
		onyonMove();
		changeState();
		break;
	}

	case WMAP_Idle: {
		postureControl(cWaitPane);
		onyonMove();
		changeState();
		break;
	}

	case WMAP_RocketMoving2: {
		mRocketMoveCounter++;
		f32 x, y;
		if (mRocketAngleMode == ROT_Unk1) {
			x = pikmin2_cosf(0.1f);
		} else {
			x = pikmin2_cosf(-0.1f);
		}
		if (mRocketAngleMode == ROT_Unk1) {
			y = pikmin2_sinf(0.1f);
		} else {
			y = pikmin2_sinf(-0.1f);
		}
		JGeometry::TVec2f temp;
		temp.x       = mRocketAngle.x;
		temp.y       = mRocketAngle.y;
		mRocketAngle = JGeometry::TVec2f(temp.x * x - temp.y * y, temp.x * y + temp.y * x);
		f32 angle    = mRocketAngle.squared();
		mRocketAngle.normalize();

		getRotDir(temp, 0.0f);
		mRocketPosition.x += msVal._04 * (mRocketAngle.x * msVal._00);
		mRocketPosition.y += msVal._04 * (mRocketAngle.y * msVal._00);

		// this is the regswap
		JGeometry::TVec2f vec(getPaneCenterX(cPointPane) - mRocketPosition.x, getPaneCenterY(cPointPane) - mRocketPosition.y);
		f32 dist = vec.x * vec.x + vec.y + vec.y; // is this a typo?
		if (!isFlag(WMAPFLAG_Unk4)) {
			vec.normalize();
			if (vec.dot(mRocketAngle) > 0.7f) {

				if (!isFlag(WMAPFLAG_Unk1)) {
					setFlag(WMAPFLAG_Unk1 | WMAPFLAG_Unk2);
				} else if (!isFlag(WMAPFLAG_Unk2)) {
					setFlag(WMAPFLAG_Unk4);
					resetFlag(WMAPFLAG_Unk1 | WMAPFLAG_Unk2);
				}
			} else {
				resetFlag(WMAPFLAG_Unk2);
			}

		} else if (dist > msVal._14) {
			mCurrentState = WMAP_RocketMoving3;
			resetFlag(WMAPFLAG_Unk1 | WMAPFLAG_Unk4 | WMAPFLAG_IsBackdropBehindInfo);
			setFlag(WMAPFLAG_IsBackdropActive);
			mRocketMoveCounter = 0;
		}

		if (mRocketMoveCounter > 60 && dist > msVal._14) {
			mCurrentState = WMAP_RocketMoving3;
			resetFlag(WMAPFLAG_Unk1 | WMAPFLAG_Unk4 | WMAPFLAG_IsBackdropBehindInfo);
			setFlag(WMAPFLAG_IsBackdropActive);
			mRocketMoveCounter = 0;
		}

		if (mInitArg.mController->getButtonDown() & Controller::PRESS_B) {
			mCurrentState = WMAP_InputTarget;
			resetFlag(WMAPFLAG_Unk1 | WMAPFLAG_Unk2);
			mRocketMoveCounter = 0;
		}
		rocketUpdate(cWaitPane);
		onyonMove();
		break;
	}

	case WMAP_LandingStart: {
		f32 test = rocketMove(cPointPane, true);
		rocketUpdate(cWaitPane);
		if (test < msVal._18) {
			mRocketMoveCounter = 0;
			mCurrentState      = WMAP_RocketMoving2;
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_3);
		}
		if (mInitArg.mController->getButtonDown() & Controller::PRESS_B) {
			mCurrentState = WMAP_InputTarget;
			resetFlag(WMAPFLAG_Unk1 | WMAPFLAG_Unk2);
			mRocketMoveCounter = 0;
		}
		onyonMove();
		break;
	}

	case WMAP_RocketMoving3: {
		f32 dist = rocketMove(cPointPane, true);
		rocketUpdate(cPointPane);
		if (dist < msVal._14) {
			mRocketMoveCounter = 0;
			arg.mStatus        = Game::WorldMap::WMapUpdate_BeginGame;
			finish();
			break;
		}
		if (mZukanFadeout < 255 - msVal.mZukanFadeoutSpeed) {
			mZukanFadeout += msVal.mZukanFadeoutSpeed >> 1;
		}
		if (mInitArg.mController->getButtonDown() & Controller::PRESS_B) {
			mCurrentState = WMAP_InputTarget;
			resetFlag(WMAPFLAG_Unk1 | WMAPFLAG_Unk2 | WMAPFLAG_IsBackdropActive);
			mRocketMoveCounter = 0;
		}
		onyonMove();

		break;
	}

	case WMAP_InputTarget: {
		int map = getTarget();
		// a new course was or wasn't selected
		if (map < COURSE_Tutorial || map >= mOpenCourses || map == mCurrentCourseIndex) {
			f32 y = getPaneCenterY(cWaitPane) - mRocketPosition.y;
			f32 x = getPaneCenterX(cWaitPane) - mRocketPosition.x;
			if (x * x + y * y < msVal._0C) {
				postureControl(cWaitPane);
				mCurrentState = WMAP_Idle;
				PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_Idle);
			} else {
				rocketMove(cWaitPane, true);
				rocketUpdate(cWaitPane);
				mCurrentState = WMAP_RocketMoving;
				PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_2);
			}
		} else {
			mCurrentCourseIndex = map;
			cWaitPane           = mScreenKitagawa->search(tagsWait[mCurrentCourseIndex]);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_2);
			mCaveFadePane->fadeout();
			rocketMove(cWaitPane, true);
			rocketUpdate(cWaitPane);
			mCurrentState = WMAP_RocketMoving;
		}
		onyonMove();
		break;
	}

	case WMAP_GoToZukanItem: {
		f32 dist = rocketMove(cWaitPane, true);
		rocketUpdate(cWaitPane);
		if (dist < msVal._0C) {
			postureControl(cWaitPane);
		}
		onyonMove();
		setFlag(WMAPFLAG_IsBackdropActive);
		mZukanFadeout += msVal.mZukanFadeoutSpeed;
		if (mZukanFadeout >= 255 - msVal.mZukanFadeoutSpeed) {
			arg.mStatus = Game::WorldMap::WMapUpdate_GoToZukanItem;
			finish();
		}
		break;
	}

	case WMAP_GoToZukanEnemy: {
		f32 dist = rocketMove(cWaitPane, true);
		rocketUpdate(cWaitPane);
		if (dist < msVal._0C) {
			postureControl(cWaitPane);
		}
		onyonMove();
		setFlag(WMAPFLAG_IsBackdropActive);
		mZukanFadeout += msVal.mZukanFadeoutSpeed;
		if (mZukanFadeout >= 255 - msVal.mZukanFadeoutSpeed) {
			arg.mStatus = Game::WorldMap::WMapUpdate_GoToZukanEnemy;
			finish();
		}
		break;
	}

	case WMAP_InSelReturnToTitle: {
		rocketUpdate(cWaitPane);
		onyonUpdate();
		switch (::Screen::gGame2DMgr->check_WorldMapInfoWin0()) {
		case ::Screen::Game2DMgr::CHECK2D_WorldMapInfoWin0_Cancel: {
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_7);
			mCurrentState = WMAP_InputTarget;
			resetFlag(WMAPFLAG_IsBackdropActive);
			break;
		}
		case ::Screen::Game2DMgr::CHECK2D_WorldMapInfoWin0_Confirm: {
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_7);
			resetFlag(WMAPFLAG_IsBackdropActive);
			arg.mStatus = Game::WorldMap::WMapUpdate_ReturnToTitle;
			finish();
			break;
		}
		}
		if (mZukanFadeout < 180) {
			mZukanFadeout += msVal.mZukanFadeoutSpeed;
		}
		break;
	}

	case WMAP_InSelLandHere: {
		rocketUpdate(cWaitPane);
		onyonUpdate();
		switch (::Screen::gGame2DMgr->check_WorldMapInfoWin1()) {
		case ::Screen::Game2DMgr::CHECK2D_WorldMapInfoWin1_Cancel: {
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_7);
			mCurrentState = WMAP_InputTarget;
			resetFlag(WMAPFLAG_IsBackdropActive);
			break;
		}
		case ::Screen::Game2DMgr::CHECK2D_WorldMapInfoWin1_Confirm: {
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_2);
			mCurrentState = WMAP_LandingStart;
			resetFlag(WMAPFLAG_IsBackdropActive);
			mRocketMoveCounter = 0;
			break;
		}
		}
		if (mZukanFadeout < 180) {
			mZukanFadeout += msVal.mZukanFadeoutSpeed;
		}
		break;
	}

	case WMAP_BeginShipAppear: {
		f32 angle = pikmin2_atan2f(mRocketAngle.x, -mRocketAngle.y);

		if (mRocketAngleMode == ROT_Unk1 && angle > 0.0f) {
			angle -= TAU;
		} else if (mRocketAngleMode == ROT_Unk2 && angle < 0.0f) {
			angle += TAU;
		}

		f32 offs = (mRocketAngleMode == ROT_Unk1) ? 0.1f : -0.1f;

		angle += offs;
		mRocketAngle.x = pikmin2_sinf(angle);
		mRocketAngle.y = -pikmin2_cosf(angle);

		mRocketAngle.normalize();

		mRocketPosition.x += msVal._04 * (mRocketAngle.x * msVal._00);
		mRocketPosition.y += msVal._04 * (mRocketAngle.y * msVal._00);

		JGeometry::TVec2f vec(0.0f, -1.0f);
		f32 downComponent = vec.x * mRocketAngle.x + vec.y * mRocketAngle.y;
		if (downComponent > 0.95f) {
			if (!isFlag(WMAPFLAG_Unk1)) {
				setFlag(WMAPFLAG_Unk1 | WMAPFLAG_Unk2);
			} else if (!isFlag(WMAPFLAG_Unk2)) {
				mCurrentState = WMAP_RocketMoving;
				newMapOpen();
				resetFlag(WMAPFLAG_Unk1 | WMAPFLAG_Unk2);
				if (mInitArg.mHasNewPiklopediaEntries) {
					J2DPane* target = mScreenInfo->search('T_new_l');
					target->show();
					mScreenInfo->search('Nlwin')->show();

					if (!mInitArg.mDoNewEntriesEfx) {
						efx2d::Arg arg(Vector2f(getPaneCenterX(target) + msVal._50[0].x, getPaneCenterY(target) + msVal._50[0].y));
						efx2d::T2DChangesmoke efx;
						efx.create(&arg);
					}
				}
				if (mInitArg.mHasNewTreasureHoardEntries) {
					J2DPane* target = mScreenInfo->search('T_new_r');
					target->show();
					mScreenInfo->search('Nrwin')->show();

					if (!mInitArg.mDoNewEntriesEfx) {
						// Vector2f efxPos2(getPaneCenterX(target) + msVal._50[0].x, getPaneCenterY(target) + msVal._50[0].y);
						efx2d::Arg arg(Vector2f(getPaneCenterX(target) + msVal._50[1].x, getPaneCenterY(target) + msVal._50[1].y));
						efx2d::T2DChangesmoke efx;
						efx.create(&arg);
					}
				}
				if (mInitArg.mHasNewPiklopediaEntries || mInitArg.mHasNewTreasureHoardEntries) {
					khUtilColorAnm* anm = mColorAnim2;
					mColorAnim2->reset();

					if (!mInitArg.mDoNewEntriesEfx) {
						mScaleMgr->up();
						PSSystem::spSysIF->playSystemSe(PSSE_SY_WMAP_ZUKAN_NEW, 0);
					}
				}
			}
		} else {
			resetFlag(WMAPFLAG_Unk2);
		}
		rocketUpdate(cWaitPane);
		onyonMove();
		break;
	}

	case WMAP_BeginWait: {
		paneRocket->setOffset(1000.0f, 0.0f);
		for (int i = 0; i < mOnyonCount; i++) {
			mOnyonArray[i].mOnyonPane->setOffset(1000.0f, 0.0f);
		}
		if (++mRocketMoveCounter > 5) {
			mCurrentCourseIndex = mInitArg.mInitialCourseIndex;
			if (mCurrentCourseIndex < 0) {
				mCurrentCourseIndex = 0;
			}
			cPointPane = mScreenKitagawa->search(tagsPoint[mCurrentCourseIndex]);
			mScreenKitagawa->search(tagsWait[mCurrentCourseIndex]);
			mCaveFadePane->mFinish = true;
			mRocketPosition        = Vector2f(getPaneCenterX(cPointPane), getPaneCenterY(cPointPane));
			mRocketScale           = 0.01f;
			paneRocket->setOffset(mRocketPosition.x, mRocketPosition.y);
			f32 atanVal = JMAAtan2Radian(-mRocketAngle.x, -mRocketAngle.y) * JMath::TAngleConstant_<f32>::RADIAN_TO_DEGREE_FACTOR();
			paneRocket->setAngle(atanVal);
			paneRocket->updateScale(mRocketScale);
			for (int i = 0; i < mOnyonCount; i++) {
				mOnyonArray[i].mOffset = mRocketPosition;
				mOnyonArray[i].mAngle.set(mRocketAngle);
				mOnyonArray[i].mOnyonPane->setOffset(mRocketPosition.x, mRocketPosition.y);
				f32 atanVal = JMAAtan2Radian(-mRocketAngle.x, -mRocketAngle.y) * JMath::TAngleConstant_<f32>::RADIAN_TO_DEGREE_FACTOR();
				mOnyonArray[i].mOnyonPane->setAngle(atanVal);
				mOnyonArray[i].mOnyonPane->updateScale(mRocketScale);
			}
			mRocketMoveCounter = 0;
			mCurrentState      = WMAP_BeginShipAppear;
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_Appear);
		}
		break;
	}

	case WMAP_Unk12: {
		f32 test = rocketMove(cWaitPane, true);
		rocketUpdate(cWaitPane);
		if (test < msVal._0C) {
			mRocketMoveCounter = 0;
			mCurrentState      = WMAP_Idle;
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_Idle);
		}
		onyonMove();
		break;
	}

	case WMAP_Begin: {
		// hide ship/onions offscreen
		paneRocket->setOffset(1000.0f, 0.0f);
		for (int i = 0; i < mOnyonCount; i++) {
			mOnyonArray[i].mOnyonPane->setOffset(1000.0f, 0.0f);
		}

		mCameraZoomY += msVal._48;
		mAnimTimers[0] = mCameraZoomMinFrame * (1.0f - (mCameraZoomY * mCameraZoomY * mCameraZoomY * mCameraZoomY));
		if (mCameraZoomMinFrame - mAnimTimers[0] < 2.0f) {
			mAnimTimers[0] = mCameraZoomMinFrame;
			mCurrentState  = WMAP_BeginWait;
		}
		break;
	}
	}

	if (!isFlag(WMAPFLAG_IsBackdropActive) && mZukanFadeout) {
		mZukanFadeout -= msVal.mZukanFadeoutSpeed;
		if (mZukanFadeout < msVal.mZukanFadeoutSpeed) {
			mZukanFadeout = 0;
		}
	}

	if (mCurrentState != WMAP_Begin && mCurrentState != WMAP_BeginWait && mCurrentState != WMAP_NewMapOpened) {
		// only show the "light" pane of the currently selected level
		for (int i = 0; i < mOpenCourses; i++) {
			if (mCurrentCourseIndex == i) {
				mScreenKitagawa->search(getSerialTagName('Plight0', i))->show();
			} else {
				mScreenKitagawa->search(getSerialTagName('Plight0', i))->hide();
			}
		}
	}

	if (mCurrentState != WMAP_Begin && mCurrentState != WMAP_BeginWait) {
		PSMGetWorldMapRocket()->startRocketSE(mRocketPosition.x, mRocketPosition.y);
	}

	mScreenInfo->update();
	mColorAnim2->update();
	mScaleMgr->calc();

	for (int i = 0; i < 2; i++) {
		u64 tags[2]            = { 'T_new_l', 'T_new_r' };
		J2DTextBox* cPane      = static_cast<J2DTextBox*>(mScreenInfo->search(tags[i]));
		JUtility::TColor color = mColorAnim2->mColor;
		cPane->setAlpha(color.a);
		color.a = 0;
		cPane->setBlack(color);
	}

	u8 scale = mArrowBlink->calc() * 255.0f;
	mScreenInfo->search('Nlbtn')->setAlpha(scale);
	mScreenInfo->search('Nrbtn')->setAlpha(scale);
	::Screen::gGame2DMgr->update();
}

// const static int testdata[6] = { 0 };

/**
 * @note Address: 0x803F53F4
 * @note Size: 0x198
 */
void WorldMap::draw1st(Graphics& gfx)
{
	gfx.mPerspGraph.setPort();
	GXSetClipMode(GX_CLIP_ENABLE);
	mScreenKitagawa->search('Ngrand3')->show();
	mScreenKitagawa->search('Ngrand2')->show();
	mScreenKitagawa->search('Ngrand00')->show();
	mScreenKitagawa->search('Ngrand0')->show();
	mScreenKitagawa->search('Ngrand1')->show();
	mScreenKitagawa->search('Npoint')->show();
	mScreenKitagawa->search('Nhapa')->hide();
	mScreenKitagawa->draw(gfx, gfx.mPerspGraph);
}

/**
 * @note Address: 0x803F558C
 * @note Size: 0x64
 */
void WorldMap::draw2nd(Graphics& gfx)
{
	gfx.mPerspGraph.setPort();
	mScreenRocket->draw(gfx, gfx.mPerspGraph);
}

/**
 * @note Address: 0x803F55F0
 * @note Size: 0x2A0
 */
void WorldMap::draw3rd(Graphics& gfx)
{
	gfx.mPerspGraph.setPort();
	GXSetClipMode(GX_CLIP_ENABLE);
	mScreenKitagawa->search('Ngrand3')->hide();
	mScreenKitagawa->search('Ngrand2')->hide();
	mScreenKitagawa->search('Ngrand00')->hide();
	mScreenKitagawa->search('Ngrand0')->hide();
	mScreenKitagawa->search('Ngrand1')->hide();
	mScreenKitagawa->search('Npoint')->hide();
	mScreenKitagawa->search('Nhapa')->show();
	mScreenKitagawa->draw(gfx, gfx.mPerspGraph);

	if (isFlag(WMAPFLAG_IsBackdropBehindInfo) && mZukanFadeout) {
		gfx.mOrthoGraph.setPort();
		gfx.mOrthoGraph.setColor(JUtility::TColor(0, 0, 0, mZukanFadeout));
		f32 zero = 0.0f;
		u16 y    = System::getRenderModeObj()->efbHeight;
		u16 x    = System::getRenderModeObj()->fbWidth;
		gfx.mOrthoGraph.fillBox(JGeometry::TBox2f(0.0f, 0.0f, zero + x, zero + y));
	}
	gfx.mPerspGraph.setPort();
	mScreenInfo->draw(gfx, gfx.mPerspGraph);
}

/**
 * @note Address: 0x803F5890
 * @note Size: 0x110
 */
void WorldMap::draw4th(Graphics& gfx)
{
	if (!isFlag(WMAPFLAG_IsBackdropBehindInfo) && mZukanFadeout) {
		gfx.mOrthoGraph.setPort();
		gfx.mOrthoGraph.setColor(JUtility::TColor(0, 0, 0, mZukanFadeout));
		f32 zero = 0.0f;
		u16 y    = System::getRenderModeObj()->efbHeight;
		u16 x    = System::getRenderModeObj()->fbWidth;
		gfx.mOrthoGraph.fillBox(JGeometry::TBox2f(0.0f, 0.0f, zero + x, zero + y));
	}
	::Screen::gGame2DMgr->draw(gfx);
}

/**
 * @note Address: 0x803F59A0
 * @note Size: 0x330
 */
f32 WorldMap::rocketMove(J2DPane* pane, bool flag)
{
	mRocketMoveCounter++;
	JGeometry::TVec2f angle;
	angle.x = mRocketAngle.x;
	angle.y = mRocketAngle.y;
	JGeometry::TVec2f pos(getPaneCenterX(pane) - mRocketPosition.x, getPaneCenterY(pane) - mRocketPosition.y);
	f32 dist        = pos.x * pos.x + pos.y * pos.y;
	f32 factor      = msVal._08;
	f32 otherFactor = msVal._4C;

	for (int i = mRocketMoveCounter; i > 90; i -= 5) {
		factor *= 0.99f;
	}

	pos.normalize();

	f32 val1, val2, val3;
	val1 = pikmin2_atan2f(mRocketAngle.x, -mRocketAngle.y); // f30
	val2 = pikmin2_atan2f(pos.x, -pos.y);                   // f31
	val3 = pikmin2_atan2f(_B4.x, -_B4.y);                   // f1

	if (val1 < 0.0f) {
		val1 += TAU;
	}
	if (val2 < 0.0f) {
		val2 += TAU;
	}
	if (val1 < val2) {
		if (val2 - val1 > PI) {
			val1 += TAU;
		}
	} else if (val1 - val2 > PI) {
		val2 += TAU;
	}

	f32 phi;
	f32 theta = val3 * otherFactor + (val1 * factor + (val2 * (1.0f - factor)));
	phi       = theta - val1;

	_B4.set(pikmin2_sinf(phi), -pikmin2_cosf(phi));

	if (phi < -0.1f) {
		theta = val1 - 0.1f;
	} else if (phi > 0.1f) {
		theta = 0.1f + val1;
	}

	mRocketAngle.set(pikmin2_sinf(theta), -pikmin2_cosf(theta));
	getRotDir(angle, 0.02f);
	f32 calc = dist;
	if (!flag) {
		calc = msVal._00;
	} else if (dist > msVal._00) {
		calc = msVal._00;
	}

	mRocketPosition.x += (mRocketAngle.x * calc) * msVal._04;
	mRocketPosition.y += (mRocketAngle.y * calc) * msVal._04;

	return dist;
}

/**
 * @note Address: 0x803F5CD0
 * @note Size: 0x404
 */
void WorldMap::rocketUpdate(J2DPane* pane)
{
	/* NON-MATCHING */
	J2DPane* shipPane = mScreenRocket->search('NROCKET'); // r30
	shipPane->setOffset(mRocketPosition.x, mRocketPosition.y);
	shipPane->setAngle(JMAAtan2Radian(-mRocketAngle.x, -mRocketAngle.y) * JMath::TAngleConstant_<f32>::RADIAN_TO_DEGREE_FACTOR());

	mRocketScale = mRocketScale * msVal._08 + (1.0f - msVal._08) * tag2num(pane->mMessageID);

	f32 scale2 = *(&msVal._1C + mOpenCourses) * mRocketScale;
	shipPane->updateScale(scale2);

	Vector2f sep = mRocketPosition;
	sep -= mRocketPosition2;
	J2DPane* shipPane2     = mScreenRocket->search('Procket');
	JGeometry::TVec3f pos1 = shipPane2->getGlbVtx(GLBVTX_BtmLeft);
	JGeometry::TVec3f pos2 = shipPane2->getGlbVtx(GLBVTX_BtmRight);
	JGeometry::TVec3f pos3 = shipPane2->getGlbVtx(GLBVTX_TopLeft);
	JGeometry::TVec3f pos4 = shipPane2->getGlbVtx(GLBVTX_TopRight);
	// f32 factor             = msVal._1C;
	JGeometry::TVec3f mid2;
	mid2.set(0.5f * (pos4.x + pos3.x), 0.5f * (pos4.y + pos3.y), 0.5f * (pos4.z + pos3.z)); // f5, f4, f7
	JGeometry::TVec3f mid1;
	mid1.set(0.5f * (pos1.x + pos2.x), 0.5f * (pos1.y + pos2.y), 0.5f * (pos1.z + pos2.z)); //
	// f32 inv                = 1.0f - msVal._1C[0];
	mEffectPos = sep + Vector2f(mid1.x * (1.0f - msVal._1C) + mid2.x * msVal._1C, mid1.y * (1.0f - msVal._1C) + mid2.y * msVal._1C);
	mEffectDir = Vector2f(-mRocketAngle.x, -mRocketAngle.y);

	volatile Vec vec  = { 0.0f, 0.0f, 0.0f };
	volatile Vec vec2 = { 0.0f, 0.0f, 0.0f };

	efx2d::WorldMap::ArgDirScale arg(mEffectPos, mEffectDir, scale2);
	vec.x  = mid1.x;
	vec.y  = mid1.y;
	vec2.x = mid2.x;
	vec2.y = mid2.y;

	efx2d::WorldMap::T2DRocketA efx;
	efx.create(&arg);
	mEfxRocketSparks->setGlobalParticleScale(scale2);
	mEfxRocketGlow->setGlobalParticleScale(scale2);
}

/**
 * @note Address: 0x803F60D4
 * @note Size: 0x90
 */
void WorldMap::onyonMove()
{
	JGeometry::TVec2f pos;
	pos.x = mRocketPosition.x;
	pos.y = mRocketPosition.y;
	for (int i = 0; i < mOnyonCount; i++) {
		JGeometry::TVec2f temp = mOnyonArray[i].move(this, pos);
		pos.y                  = temp.y;
		pos.x                  = temp.x;
	}
}

/**
 * @note Address: 0x803F6164
 * @note Size: 0x68
 */
void WorldMap::onyonUpdate()
{
	for (int i = 0; i < mOnyonCount; i++) {
		mOnyonArray[i].update(this);
	}
}

/**
 * @note Address: 0x803F61CC
 * @note Size: 0x1F4
 */
void WorldMap::postureControl(J2DPane* pane)
{
	f32 angle1, angle2, angle3;
	angle1 = pikmin2_atan2f(mRocketAngle.x, -mRocketAngle.y);
	angle2 = pikmin2_atan2f(0.0f, 1.0f);
	angle3 = pikmin2_atan2f(_B4.x, -_B4.y);
	if (angle1 < 0.0f) {
		angle1 += TAU;
	}
	if (angle2 < 0.0f) {
		angle2 += TAU;
	}

	if (angle1 < angle2) {
		if (angle2 - angle1 > PI) {
			angle1 += TAU;
		}
	} else if (angle1 - angle2 > PI) {
		angle2 += TAU;
	}

	angle2 = angle3 * 0.99f + (angle1 * msVal._08 + (angle2 * (1.0f - msVal._08)));
	if (angle2 - angle1 < -0.05f) {
		angle2 = angle1 - 0.05f;
	} else if (angle2 - angle1 > 0.05f) {
		angle2 = angle1 + 0.05f;
	}

	mRocketAngle.set(pikmin2_sinf(angle2), -pikmin2_cosf(angle2));

	angle1 = angle2 - angle1;
	_B4.set(pikmin2_sinf(angle1), -pikmin2_cosf(angle1));

	mRocketPosition.x = mRocketPosition.x * msVal._10 + (1.0f - msVal._10) * getPaneCenterX(pane);
	mRocketPosition.y = mRocketPosition.y * msVal._10 + (1.0f - msVal._10) * getPaneCenterY(pane);
	rocketUpdate(pane);
}

/**
 * @note Address: 0x803F63C0
 * @note Size: 0x230
 */
bool WorldMap::changeState()
{
	bool isStateChange = false;

	if (mInitArg.mController->isButtonDown(Controller::PRESS_START)) {
		// Bring up "Return to Title Screen" popup

		::Screen::gGame2DMgr->mScreenMgr->reset();
		og::Screen::DispMemberWorldMapInfoWin0 dispToTitle;
		dispToTitle.mBgAlpha = 0;

		if (::Screen::gGame2DMgr->open_WorldMapInfoWin0(dispToTitle)) {
			mCurrentState = WMAP_InSelReturnToTitle;
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_6);
			isStateChange = true;
			setFlag(WMAPFLAG_IsBackdropActive | WMAPFLAG_IsBackdropBehindInfo);
		}

	} else if (mInitArg.mController->isButtonDown(Controller::PRESS_A)) {
		// Bring up "Land in this area?" popup

		::Screen::gGame2DMgr->mScreenMgr->reset();
		og::Screen::DispMemberWorldMapInfoWin1 dispLandHere;
		dispLandHere.mBgAlpha = 0;
		if (::Screen::gGame2DMgr->open_WorldMapInfoWin1(dispLandHere)) {
			mCurrentState = WMAP_InSelLandHere;
			PSMGetWorldMapRocket()->stateChange(PSM::WorldMapRocket::PSMRocket_6);
			isStateChange = true;
			setFlag(WMAPFLAG_IsBackdropActive | WMAPFLAG_IsBackdropBehindInfo);
		}

	} else if (mInitArg.mController->isButtonDown(Controller::PRESS_L)) {
		// Go to enemy piklopedia ("Piklopedia")

		PSSystem::spSysIF->playSystemSe(PSSE_SY_PLAYER_CHANGE, 0);
		isStateChange = true;
		mCurrentState = WMAP_GoToZukanEnemy;

	} else if (mInitArg.mController->isButtonDown(Controller::PRESS_R)) {
		// Go to item piklopedia ("Treasures")

		PSSystem::spSysIF->playSystemSe(PSSE_SY_PLAYER_CHANGE, 0);
		isStateChange = true;
		mCurrentState = WMAP_GoToZukanItem;

	} else if (mInitArg.mController->getMainStickValue() > 0.1f || mInitArg.mController->isButtonHeld(Controller::PRESS_DPAD)) {
		if (mLockoutCounter == 0) {
			isStateChange   = true;
			mLockoutCounter = msVal.mInputLockoutFrames;
			mCurrentState   = WMAP_InputTarget;
		} else {
			mLockoutCounter--;
		}

	} else {
		mLockoutCounter = 0;
	}

	return isStateChange;
}

/**
 * @note Address: 0x803F65F0
 * @note Size: 0xC0
 */
f32 WorldMap::tag2num(u64 tag)
{
	int id1 = tag & 0xff;
	int t0  = id1 != 0 ? id1 - '0' : 0;

	int id2 = (tag & 0xff00) >> 8;
	int t1  = id2 != 0 ? id2 - '0' : 0;

	int id3 = (tag & 0xff0000) >> 16;
	int t2  = id3 != 0 ? id3 - '0' : 0;

	f32 ret = int(t2 * 100 + t1 * 10 + t0) * 0.01f;

	if (ret == 0.0f) {
		ret = 0.2f;
	}
	return ret;
}

/**
 * @note Address: 0x803F66B0
 * @note Size: 0x8C
 */
void WorldMap::finish()
{
	mEfxRocketGlow->kill();
	mEfxRocketSparks->kill();
	for (int i = 0; i < mOnyonCount; i++) {
		mOnyonArray[i].kill();
	}
}

/**
 * @note Address: 0x803F673C
 * @note Size: 0x7C
 */
bool WorldMap::newMapOpen()
{
	// COURSE_Tutorial is always open, so start from next one (COURSE_Forest)
	for (int i = COURSE_Forest; i < COURSE_COUNT; i++) {
		if (mCourseJustOpenFlags & 1 << i) {
			mCourseJustOpenFlags &= ~(1 << i);
			mCameraZoomX        = cOpenMinFrm[i - 1];
			mCameraZoomMinFrame = cOpenMaxFrm[i - 1];
			mAnimTimers[0]      = mCameraZoomX;
			mCurrentState       = WMAP_NewMapOpened;
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x803F67B8
 * @note Size: 0x13C
 */
int WorldMap::getTarget()
{
	int newMap = COURSE_NULL;
	switch (mCurrentCourseIndex) {
	case COURSE_Tutorial: // currently selected valley of repose
	{
		// press right, go to awakening wood if opened
		if (mInitArg.mController->isButtonHeld(Controller::PRESS_RIGHT)) {
			newMap = COURSE_Forest;
		}
		// press up, go to perplexing pool if opened
		else if (mInitArg.mController->isButtonHeld(Controller::PRESS_UP)) {
			newMap = COURSE_Yakushima;
		}
		break;
	}
	case COURSE_Forest: // currently selected awakening wood
	{
		// press left, go to valley of repose if opened
		if (mInitArg.mController->isButtonHeld(Controller::PRESS_LEFT)) {
			newMap = COURSE_Tutorial;
		}
		// press up, go to wistful wild if opened, or go to perplexing pool if not
		else if (mInitArg.mController->isButtonHeld(Controller::PRESS_UP)) {
			newMap = mOpenCourses == (COURSE_Yakushima + 1) ? (int)COURSE_Yakushima
			                                                : (int)COURSE_Last; // the int casts prevent this from un-optimising
		}
		break;
	}
	case COURSE_Yakushima: // currently selected perplexing pool
	{
		// press right, go to wistful wild if open, otherwise awakening wood
		if (mInitArg.mController->isButtonHeld(Controller::PRESS_RIGHT)) {
			newMap = mOpenCourses == (COURSE_Yakushima + 1) ? (int)COURSE_Forest : (int)COURSE_Last;
		}
		// press down, to go valley of repose
		else if (mInitArg.mController->isButtonHeld(Controller::PRESS_DOWN)) {
			newMap = COURSE_Tutorial;
		}
		break;
	}
	case COURSE_Last: // currently selected wistful wild
	{
		// press left, go to perplexing pool
		if (mInitArg.mController->isButtonHeld(Controller::PRESS_LEFT)) {
			newMap = COURSE_Yakushima;
		}
		// press down, go to awakening wood
		else if (mInitArg.mController->isButtonHeld(Controller::PRESS_DOWN)) {
			newMap = COURSE_Forest;
		}
		break;
	}
	}
	return newMap;
}

/**
 * @note Address: 0x803F68F4
 * @note Size: 0x174
 */
void WorldMap::getRotDir(const JGeometry::TVec2f& oldAngle, f32 max)
{
	RocketRotation newdir;

	if (oldAngle.x >= 0.0f && mRocketAngle.x >= 0.0f) {
		if (oldAngle.y - mRocketAngle.y < -max) {
			newdir = ROT_Unk1;
		} else if (oldAngle.y - mRocketAngle.y > max) {
			newdir = ROT_Unk2;
		} else {
			newdir = ROT_Unk0;
		}

	} else if (oldAngle.x < 0.0f && mRocketAngle.x < 0.0f) {
		if (oldAngle.y - mRocketAngle.y < -max) {
			newdir = ROT_Unk2;
		} else if (oldAngle.y - mRocketAngle.y > max) {
			newdir = ROT_Unk1;
		} else {
			newdir = ROT_Unk0;
		}

	} else if (oldAngle.x < 0.0f && mRocketAngle.x >= 0.0f) {
		if (oldAngle.y > 0.0f && oldAngle.x - mRocketAngle.x < -max) {
			newdir = ROT_Unk2;
		} else if (oldAngle.y < 0.0f && oldAngle.x - mRocketAngle.x > max) {
			newdir = ROT_Unk1;
		} else {
			newdir = ROT_Unk0;
		}

	} else {
		if (oldAngle.y > 0.0f && oldAngle.x - mRocketAngle.x > max) {
			newdir = ROT_Unk1;
		} else if (oldAngle.y < 0.0f && oldAngle.x - mRocketAngle.x > max) {
			newdir = ROT_Unk2;
		} else {
			newdir = ROT_Unk0;
		}
	}

	if (newdir == ROT_Unk0) {
		return;
	}

	mRocketAngleMode = newdir;
}

/**
 * @note Address: 0x803F6A68
 * @note Size: 0xA4C
 */
void WorldMap::changeInfo()
{
	u64 courseTags[4]
	    = { '8390_01', '8391_01', '8392_01', '8393_01' };          // "Valley of Repose"	"Awakening Wood"	"Perplexing Pool"	"Wistful Wild"
	u64 tags1[4] = { '8395_01', '8399_01', '8400_01', 'no_data' }; // "Emergence Cave" 	"Subterranean Complex"	"Frontier Cavern"
	u64 tags2[4]
	    = { '8396_01', '8398_01', '8401_01', '8410_01' }; // "Hole of Beasts" 	"White Flower Garden"	"Bulblax Kingdom" 	"Snagret Hole"
	u64 tags3[4]     = { '8397_01', '8402_01', '8403_01',
		                 '8411_01' }; // "Citadel of Spiders"	"Glutton's Kitchen"		"Shower Room"		"Submerged Castle"
	u64 tags4[4]     = { '8412_01', '8413_01', '8414_01', 'no_data' }; // "Cavern of Chaos" 	"Hole of Heroes"	 	"Dream Den"
	u64* caveTags[4] = { tags1, tags2, tags3, tags4 };

	u64 unusedtags[20] = { 'Pg_p_01', 'Pg_p_02', 'Pg_c_01', 'Pg_c_02', 'P0_p_01', 'P0_p_02', 'P0_c_01', 'P0_c_02', 'P1_p_01', 'P1_p_02',
		                   'P1_c_01', 'P1_c_02', 'P2_p_01', 'P2_p_02', 'P2_c_01', 'P2_c_02', 'P3_p_01', 'P3_p_02', 'P3_c_01', 'P3_c_02' };

	u64 floTags[4] = { 'Nca_fl0', 'Nca_fl1', 'Nca_fl2', 'Nca_fl3' };

	mScreenInfo->search('Pc_name')->setMsgID(courseTags[mCurrentCourseIndex]);
	mGroundTreasureCount = Game::playData->getGroundOtakaraNum(mCurrentCourseIndex);
	mGroundTreasureMax   = Game::playData->getGroundOtakaraMax(mCurrentCourseIndex);

	mColorAnims[0]->effect_off();
	if (mGroundTreasureCount == mGroundTreasureMax) {
		mColorAnims[0]->effect_on(mGroundTreasureMax);
		mScreenInfo->search('Ngr_fl0')->show();
	} else {
		mColorAnims[0]->effect_off();
		mScreenInfo->search('Ngr_fl0')->hide();
	}

	if (Game::playData->isStoryFlag(Game::STORY_DebtPaid) || mGroundTreasureMax == mGroundTreasureCount) {
		mGroundTreasureCounterMax->getMotherPane()->show();
		mScreenInfo->search('Pg_sra')->show();
		mGroundTreasureCounterCollected->getMotherPane()->move(0.0f, 0.0f);
	} else {
		mGroundTreasureCounterMax->getMotherPane()->hide();
		mScreenInfo->search('Pg_sra')->hide();
		f32 x = msVal._64;
		if (mGroundTreasureCount >= 10) {
			x += 12.5f;
		}
		mGroundTreasureCounterCollected->getMotherPane()->move(x, 0.0f);
	}

	u64 tagsSura[4] = { 'P0_sra', 'P1_sura', 'P2_sura', 'P3_sra' };

	for (int i = 0; i < 4; i++) {
		mColorAnims[i + 1]->effect_off();
		if (caveTags[mCurrentCourseIndex][i] == 'no_data') {
			mScreenInfo->search(getSerialTagName('Ncave0', i))->hide();
		} else {
			mScreenInfo->search(getSerialTagName('Ncave0', i))->show();
			ID32 caveID(mInitArg.mStages->getCourseInfo(mCurrentCourseIndex)->getCaveID_FromIndex(i));
			mCaveTreasureCounterCollected[i]->getMotherPane()->show();
			mCaveTreasureCounterCollected[i]->setBlind(false);
			mCaveTreasureCounterCollected[i]->getMotherPane()->move(0.0f, 0.0f);
			mCaveTreasureCounterMax[i]->getMotherPane()->show();
			mCaveTreasureCounterMax[i]->setBlind(false);
			mScreenInfo->search(tagsSura[i])->show();
			mCaveOtaNum[i] = Game::playData->getOtakaraNum_Course_CaveID(mCurrentCourseIndex, caveID);
			mCaveOtaMax[i] = Game::playData->getOtakaraMax_Course_CaveID(mCurrentCourseIndex, caveID);
			if (Game::playData->isCaveFirstTime(mCurrentCourseIndex, caveID)) {
				if (Game::playData->isStoryFlag(Game::STORY_DebtPaid)) {
					mCaveTreasureCounterCollected[i]->setBlind(true);
					mCaveTreasureCounterMax[i]->setBlind(true);
				} else {
					mCaveTreasureCounterCollected[i]->getMotherPane()->hide();
					mCaveTreasureCounterMax[i]->getMotherPane()->hide();
					mScreenInfo->search(tagsSura[i])->hide();
					f32 x = msVal._68;
					if (mCaveOtaNum[i] >= 10) {
						x += 11.5f;
					}
					mCaveTreasureCounterCollected[i]->getMotherPane()->move(x, 0.0f);
				}
				mScreenInfo->search(getSerialTagName('Pcave_00', i))->setMsgID('8419_01'); // "???"
				mScreenInfo->search(floTags[i])->hide();
			} else {
				if (!Game::playData->isStoryFlag(Game::STORY_DebtPaid) && mCaveOtaMax[i] != mCaveOtaNum[i]) {
					f32 x = msVal._68;
					if (mCaveOtaNum[i] >= 10) {
						x += 11.5f;
					}
					mCaveTreasureCounterCollected[i]->getMotherPane()->move(x, 0.0f);
					mCaveTreasureCounterMax[i]->getMotherPane()->hide();
					mScreenInfo->search(tagsSura[i])->hide();
				}
				mScreenInfo->search(getSerialTagName('Pcave_00', i))->setMsgID(caveTags[mCurrentCourseIndex][i]);
				if (mCaveOtaNum[i] == mCaveOtaMax[i]) {
					mCaveTreasureCounterMax[i]->setBlind(false);
					mColorAnims[i + 1]->effect_on(mCaveOtaNum[i]);
					mScreenInfo->search(floTags[i])->show();
				} else {
					mScreenInfo->search(floTags[i])->hide();
				}
			}
		}
	}
}

/**
 * @note Address: 0x803F74B4
 * @note Size: 0x550
 */
void WorldMap::effectFirstTime()
{
	if (!isFlag(WMAPFLAG_IsFirstTimeEffect))
		return;

	u64 courseTags[4]
	    = { '8390_01', '8391_01', '8392_01', '8393_01' };          // "Valley of Repose"	"Awakening Wood"	"Perplexing Pool"	"Wistful Wild"
	u64 tags1[4] = { '8395_01', '8399_01', '8400_01', 'no_data' }; // "Emergence Cave" 	"Subterranean Complex"	"Frontier Cavern"
	u64 tags2[4]
	    = { '8396_01', '8398_01', '8401_01', '8410_01' }; // "Hole of Beasts" 	"White Flower Garden"	"Bulblax Kingdom" 	"Snagret Hole"
	u64 tags3[4] = { '8397_01', '8402_01', '8403_01',
		             '8411_01' }; // "Citadel of Spiders"	"Glutton's Kitchen"		"Shower Room"		"Submerged Castle"
	u64 tags4[4] = { '8412_01', '8413_01', '8414_01', 'no_data' }; // "Cavern of Chaos" 	"Hole of Heroes"	 	"Dream Den"

	u64* caveTags[4] = { tags1, tags2, tags3, tags4 }; // Note: this generates some 0s in the rodata, so its place is important

	u64 unusedtags[20] = { 'Pg_p_01', 'Pg_p_02', 'Pg_c_01', 'Pg_c_02', 'P0_p_01', 'P0_p_02', 'P0_c_01', 'P0_c_02', 'P1_p_01', 'P1_p_02',
		                   'P1_c_01', 'P1_c_02', 'P2_p_01', 'P2_p_02', 'P2_c_01', 'P2_c_02', 'P3_p_01', 'P3_p_02', 'P3_c_01', 'P3_c_02' };

	bool isIncPoko = false;
	bool isNewOta  = false;
	bool isAllOta  = false;
	bool isNewCave = false;

	int old0 = Game::playData->mPokoCount;
	int old  = Game::playData->getMoney_Old();
	if (old0 != old) {
		mPokoCounter->startPuyoUp(1.0f);
		isIncPoko = true;
	}

	if (Game::playData->getGroundOtakaraNum(mCurrentCourseIndex) != Game::playData->getGroundOtakaraNum_Old(mCurrentCourseIndex)) {
		mGroundTreasureCounterCollected->startPuyoUp(1.0f);
		isNewOta = true;
		if (Game::playData->getGroundOtakaraNum(mCurrentCourseIndex) == Game::playData->getGroundOtakaraMax(mCurrentCourseIndex)) {
			isAllOta = true;
		}
	}

	for (int i = 0; i < 4; i++) {
		if (caveTags[mCurrentCourseIndex][i] != 'no_data') {
			ID32 caveID(mInitArg.mStages->getCourseInfo(mCurrentCourseIndex)->getCaveID_FromIndex(i));
			if (Game::playData->isCaveFirstTime(mCurrentCourseIndex, caveID)
			    != Game::playData->isCaveFirstTime_Old(mCurrentCourseIndex, caveID)) {
				JGeometry::TVec3f pos1 = mScreenInfo->search(getSerialTagName('Pcave_00', i))->getGlbVtx(GLBVTX_BtmLeft);
				JGeometry::TVec3f pos2 = mScreenInfo->search(getSerialTagName('Pcave_00', i))->getGlbVtx(GLBVTX_TopRight);
				f32 y                  = (pos1.y + pos2.y) * 0.5f;
				for (int j = 0; j < 5; j++) {
					f32 x = (pos1.x * (4 - j) + pos2.x * j) * 0.25f;
					efx2d::Arg arg(Vector2f(x, y));
					efx2d::T2DChangesmoke efx;
					efx.create(&arg);
				}
				isNewCave = true;
			}
			if (Game::playData->getOtakaraNum_Course_CaveID(mCurrentCourseIndex, caveID)
			    != Game::playData->getOtakaraNum_Course_CaveID_Old(mCurrentCourseIndex, caveID)) {
				mCaveTreasureCounterCollected[i]->startPuyoUp(1.0f);
				isNewOta = true;
				if (Game::playData->getOtakaraNum_Course_CaveID(mCurrentCourseIndex, caveID)
				    == Game::playData->getOtakaraMax_Course_CaveID(mCurrentCourseIndex, caveID)) {
					isAllOta = true;
				}
			}
		}
	}

	u32 soundID = -1;
	if (isNewCave && isAllOta) {
		soundID = PSSE_SY_WMAP_CAVE_COMP;
	} else if (isNewCave && isNewOta) {
		soundID = PSSE_SY_WMAP_CAVE_ITEM;
	} else if (isNewCave && isIncPoko) {
		soundID = PSSE_SY_WMAP_CAVE_MONEY;
	} else if (isNewCave) {
		soundID = PSSE_SY_WMAP_CAVE_NAME;
	} else if (isAllOta) {
		soundID = PSSE_SY_WMAP_ITEM_COMP;
	} else if (isNewOta) {
		soundID = PSSE_SY_WMAP_ITEM_GET;
	} else if (isIncPoko) {
		soundID = PSSE_SY_WMAP_MONEY_UP;
	}
	if (soundID != -1) {
		PSSystem::spSysIF->playSystemSe(soundID, 0);
	}
	resetFlag(WMAPFLAG_IsFirstTimeEffect);
}

/**
 * @note Address: 0x803F7A04
 * @note Size: 0x44
 */
WorldMap::OnyonDynamics::OnyonDynamics()
{
	mRotateAngle = 0;
	mOnyonPane   = nullptr;
	mOffset      = Vector2f(1000.0f, 0.0f);
	mEfxPosition = Vector2f(1000.0f, 0.0f);
	_28          = Vector2f(0.0f, -1.0f);

	mVelocity.y = 0.0f;
	mVelocity.x = 0.0f;

	mAngle.set(0.0f, -1.0f);
}

/**
 * @note Address: 0x803F7A48
 * @note Size: 0xF8
 */
void WorldMap::OnyonDynamics::initPtcl()
{
	mOnyonKira = new efx2d::WorldMap::T2DOnyonKira(mEfxPosition, _28);
	mOnyonKira->setGroup(3);
	mOnyonKira->create(nullptr);
}

/**
 * @note Address: 0x803F7B40
 * @note Size: 0x458
 */
Vector2f WorldMap::OnyonDynamics::move(WorldMap* wmap, const JGeometry::TVec2f& pos)
{
	// unused pane
	u64 tags[4] = { 'Nwait0', 'Nwait1', 'Nwait2', 'Nwait3' };
	int id      = wmap->mCurrentCourseIndex;
	wmap->mScreenKitagawa->search(tags[id]);

	JGeometry::TVec2f posDiff(pos.x - mOffset.x, pos.y - mOffset.y);
	f32 dist = posDiff.length();

	int prevAngle = mRotateAngle;
	mRotateAngle += 500;
	if (dist < 1.0f) {
		mVelocity.x += msVal._3C * (wmap->mRocketPosition.x - mOffset.x);
		mVelocity.y += msVal._3C * (wmap->mRocketPosition.y - mOffset.y);
		mVelocity *= msVal._40;
		mOffset += mVelocity;
	} else {
		mVelocity.x += msVal._3C * (pos.x - mOffset.x);
		mVelocity.y += msVal._3C * (pos.y - mOffset.y);
		mVelocity *= 0.05f * JMASinShort(mRotateAngle) + msVal._40;
		mOffset += mVelocity;
	}

	if (dist < 20.0f) {
		f32 calc  = pikmin2_atan2f(mAngle.x, -mAngle.y);
		f32 calc2 = calc * msVal._44;
		if (calc2 - calc < -0.1f) {
			calc2 = calc - 0.1f;
		} else if (calc2 - calc > 0.1f) {
			calc2 = calc + 0.1f;
		}
		mAngle.set(pikmin2_sinf(calc2), -pikmin2_cosf(calc2));
		if (prevAngle < -0x4000 && mRotateAngle > -0x4000) {
			J2DPane* parentPane = mOnyonPane->getParentPane();
			parentPane->appendChild(mOnyonPane);
		} else if (prevAngle < 0x4000 && mRotateAngle > 0x4000) {
			J2DPane* parentPane = mOnyonPane->getParentPane();
			parentPane->prependChild(mOnyonPane);
		}
	} else {
		posDiff.normalize();
		f32 calc  = pikmin2_atan2f(mAngle.x, -mAngle.y);   // f30
		f32 calc2 = pikmin2_atan2f(posDiff.x, -posDiff.y); // f1
		if (calc < 0.0f) {
			calc += TAU;
		}
		if (calc2 < 0.0f) {
			calc2 += TAU;
		}
		if (calc < calc2) {
			if ((calc2 - calc) > PI) {
				calc += TAU;
			}
		} else if ((calc - calc2) > PI) {
			calc2 += TAU;
		}
		calc2 = (calc * msVal._44 + (calc2 * (1.0f - msVal._44)));
		if ((calc2 - calc) < -0.1f) {
			calc2 = calc - 0.1f;
		} else if ((calc2 - calc) > 0.1f) {
			calc2 = calc + 0.1f;
		}
		mAngle.set(pikmin2_sinf(calc2), -pikmin2_cosf(calc2));
	}

	update(wmap);
	return mOffset;
}

/**
 * @note Address: 0x803F7F98
 * @note Size: 0x12C
 */
void WorldMap::OnyonDynamics::update(WorldMap* map)
{
	f32 scale = map->mScreenRocket->search('NROCKET')->mScale.x;
	mOnyonPane->setOffset((50.0f * JMASinShort(mRotateAngle)) * scale + mOffset.x, mOffset.y);
	f32 angle = JMAAtan2Radian(-mAngle.x, -mAngle.y);
	angle *= 57.295776f;
	mOnyonPane->setAngle(angle);
	mOnyonPane->updateScale(scale);
	mEfxPosition.set(mOnyonPane->mGlobalMtx[0][3], mOnyonPane->mGlobalMtx[1][3]);
	_28 = Vector2f(0.0f, 1.0f);
	mOnyonKira->setGlobalParticleScale(scale);
}

/**
 * @note Address: 0x803F80C4
 * @note Size: 0x30
 */
void WorldMap::OnyonDynamics::kill()
{
	mOnyonKira->kill();
}

WorldMap::StaticValues WorldMap::msVal;

} // namespace Screen
} // namespace kh
