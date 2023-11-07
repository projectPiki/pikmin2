#include "PSSystem/PSCommon.h"
#include "Title.h"
#include "ebi/title/TTitle.h"
#include "og/ogLib2D.h"
#include "Pikmin2ARAM.h"
#include "Game/THPPlayer.h"
#include "Screen/Game2DMgr.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSSystemIF.h"
#include "JSystem/JFramework/JFWDisplay.h"
#include "PSM/ObjMgr.h"
#include "GameFlow.h"
#include "PSSystem/PSCommon.h"
#include "Game/Data.h"
#include "Game/GameConfig.h"
#include "Game/MemoryCard/Mgr.h"
#include "og/newScreen/ogUtil.h"
#include "TParticle2dMgr.h"
#include "JSystem/JUtility/JUTProcBar.h"
#include "Dolphin/rand.h"
#include "Morimura/HiScore.h"
#include "menu.h"
#include "nans.h"

static const char idk[]  = "\0\0\0\0\0\0\0\0\0";
static const char name[] = "titleSection";

namespace {
static u8 sMovieIndex[7] = { 0, 2, 4, 1, 3, 11, 11 };
static s8 sSeasonIndex   = 255;
} // namespace

namespace Title {

/*
 * --INFO--
 * Address:	8044A03C
 * Size:	0000F0
 */
Section::Section(JKRHeap* heap)
    : BaseHIOSection(heap)
    , mState(State_Init)
    , mGoToDemoTimer(0.0f)
    , mButtonCallback(nullptr)
{
	mMovieIndex     = -1;
	mButtonCallback = new Delegate<Section>(this, &loadResident);
	og::Lib2D::create();
	gPikmin2AramMgr->setLoadPermission(true);
	mDoCheckShortCut = false;
}

/*
 * --INFO--
 * Address:	8044A460
 * Size:	0000A4
 */
Section::~Section() { ebi::title::TTitleMgr::deleteInstance(); }

/*
 * --INFO--
 * Address:	8044A504
 * Size:	0000C4
 */
void Section::doExit()
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	mgr->deleteCurrentScene();
	mThpPlayer->stop();
	if (!Screen::gGame2DMgr->mScreenMgr->reset()) {
		JUT_PANICLINE(527, "game2DMgr::reset error\n");
	}
}

/*
 * --INFO--
 * Address:	8044A5C8
 * Size:	000104
 */
void Section::loadResident()
{
	JKRHeap* backup = JKRGetCurrentHeap();
	if (!(sys->mFlags.isSet(1))) {
		sys->mSysHeap->becomeCurrentHeap();
		sys->heapStatusStart("titleSection::loadResident", nullptr);

		char* path      = "/user/Kando/piki/pikis.szs";
		JKRArchive* arc = JKRArchive::mount(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
		JUT_ASSERTLINE(582, arc, "%s : mount failed !!\n", path);

		path = "user/Kando/onyon/arc.szs";
		arc  = JKRArchive::mount(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
		JUT_ASSERTLINE(590, arc, "%s : mount failed !!\n", path);

		sys->heapStatusEnd("titleSection::loadResident");
		sys->mFlags.set(1);
	}
	gPikmin2AramMgr->load();
	backup->becomeCurrentHeap();
}

/*
 * --INFO--
 * Address:	8044A6CC
 * Size:	000434
 */
void Section::init()
{
	sys->heapStatusStart("TitleSection::init", nullptr);

	sys->heapStatusStart("JMANewSinTable", nullptr);
	sys->heapStatusEnd("JMANewSinTable");

	initHIO(new HIORootNode(this, "タイトルセクション"));

	sys->heapStatusStart("frameBuffer", nullptr);
	setDisplay(JFWDisplay::createManager(nullptr, mDisplayHeap, JUTXfb::DoubleBuffer, false), 1);
	sys->heapStatusEnd("frameBuffer");

	mController1 = new Controller(JUTGamePad::PORT_0);
	mController2 = new Controller(JUTGamePad::PORT_1);

	sys->setFrameRate(1); // 60fps title screen

	// this entire menu class seems to be for a scrapped debug menu
	mMenu      = new Menu(mController1, JFWSystem::systemFont, false);
	mMenu->_48 = 260;
	mMenu->addKeyEvent(Menu::KeyEvent::UNK1, 512, new Delegate1<Section, Menu&>(this, &menuCancel));
	mMenu->addKeyEvent(Menu::KeyEvent::UNK0, 256, new Delegate1<Section, Menu&>(this, &menuSelect));
	int sects = 0;
	for (int i = 0; i < GameFlow::SECTION_COUNT; i++) {
		SectionInfo* data = GameFlow::getSectionInfo(i);
		if (data) {
			if ((!Game::gGameConfig.mParms.mMarioClubDevelop.mData || data->id.c) && data->id.b) {
				mMenu->addOption(i, data->mName, nullptr, true);
				sects++;
			}
		} else {
			mMenu->addOption(i, "NO NAME", nullptr, true);
			sects++;
		}
	}
	mMenu->setPosition(300, sys->getRenderModeObj()->efbHeight - (sects * JFWSystem::systemFont->getHeight() + 60));

	sys->heapStatusEnd("TitleSection::init");

	PSM::ObjMgr::newInstance();

	mThpPlayer = new Game::THPPlayer;
	mThpPlayer->init(mDisplayHeap);
	addGenNode(mThpPlayer);
	Screen::Game2DMgr::create();
	Screen::gGame2DMgr->setGamePad(mController1);
	JUTProcBar::sManager->setVisible(false);
	JUTProcBar::sManager->setVisibleHeapBar(false);
	mTimeStep = 0.0f;
}

/*
 * --INFO--
 * Address:	8044AB00
 * Size:	00002C
 */
void Section::menuCancel(Menu&) { PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0); }

/*
 * --INFO--
 * Address:	8044AB2C
 * Size:	000054
 */
void Section::menuSelect(Menu& menu)
{
	if (menu.mState == 2 || menu.mState == 1) {
		mIsMainActive                = false;
		GameFlow::mActiveSectionFlag = menu.mCurrentItem->_0C;
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
	}
}

/*
 * --INFO--
 * Address:	8044AB80
 * Size:	000110
 */
void Section::doDraw(Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();
	switch (mState) {
	case State_Init:
	case State_MainTitle:
		mMainTitleMgr.draw();
		break;
	case State_Options:
		mOptionMgr.draw();
		break;
	case State_Bonus:
		if (mMovieIndex >= 0) {
			mThpPlayer->draw(gfx);
		}
		mOmakeMgr.draw();
		break;
	case 5:
		break;
	case State_HiScore:
		Screen::gGame2DMgr->draw(gfx);
		Screen::gGame2DMgr->drawIndirect(gfx);
		break;
	}
	gfx.mPerspGraph.setPort();
	particle2dMgr->draw(1, 0);
	particle2dMgr->draw(0, 0);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000200
 */
void Section::drawShortCuts(Graphics& gfx)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void Section::drawShortCut(Graphics&, int, int, int, char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Section::drawDebugInfo(Graphics& gfx)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void Section::updateMenu()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044AC90
 * Size:	000688
 */
void Section::doUpdateMainTitle()
{
	mGoToDemoTimer += sys->mDeltaTime;
	if (mDoCheckShortCut) {
		mMenu->doUpdate(false);
		if (mMenu->mState == 2 || mMenu->mState == 1) {
			if (mController1->mButton.mButtonDown & Controller::PRESS_DPAD_UP && Game::gGameConfig.mParms.mShortCutUp.mData >= 0) {
				GameFlow::mActiveSectionFlag = Game::gGameConfig.mParms.mShortCutUp.mData;
				mIsMainActive                = false;
			}
			if (mController1->mButton.mButtonDown & Controller::PRESS_DPAD_DOWN && Game::gGameConfig.mParms.mShortCutDown.mData >= 0) {
				GameFlow::mActiveSectionFlag = Game::gGameConfig.mParms.mShortCutDown.mData;
				mIsMainActive                = false;
			}
			if (mController1->mButton.mButtonDown & Controller::PRESS_DPAD_LEFT && Game::gGameConfig.mParms.mShortCutLeft.mData >= 0) {
				GameFlow::mActiveSectionFlag = Game::gGameConfig.mParms.mShortCutLeft.mData;
				mIsMainActive                = false;
			}
			if (mController1->mButton.mButtonDown & Controller::PRESS_DPAD_RIGHT && Game::gGameConfig.mParms.mShortCutRight.mData >= 0) {
				GameFlow::mActiveSectionFlag = Game::gGameConfig.mParms.mShortCutRight.mData;
				mIsMainActive                = false;
			}
		}
	}
	mMainTitleMgr.update();
	if (mController1->isButton(~JUTGamePad::False)) {
		mGoToDemoTimer = 0.0f;
	}

	if (mController1->mButton.mButtonDown & Controller::PRESS_Y) {
		OSReport("code size           %dKB\n", (JKRHeap::mCodeEnd - JKRHeap::mCodeStart) / 1024);
		OSReport("GameSystemHeap Free %dKB\n", (int)sys->mSysHeap->getTotalFreeSize() / 1024);
	}

	PSSystem::SceneMgr* mgr;
	PSSystem::SeqBase* seq;
	if (mMainTitleMgr.mDoEndBGM) {
		mgr = PSSystem::getSceneMgr();
		PSSystem::checkSceneMgr(mgr);
		mgr->checkScene();
		PSSystem::SeqBase* seq = PSSystem::getSeqData(mgr, BGM_MainTheme);
		f32 rate               = (ebi::TMainTitleMgr::kFadeOutTime / sys->mDeltaTime);
		rate                   = (rate >= 0.0f) ? rate + 0.5f : rate - 0.5f;
		seq->stopSeq((int)rate);
	}

	if (mMainTitleMgr.isFinish()) {
		int id        = mMainTitleMgr.getSelectedMenu();
		mIsMainActive = false;
		switch (id) {
		case ebi::TMainTitleMgr::Select_Story:
			GameFlow::mActiveSectionFlag = GameFlow::SingleGame;
			break;
		case ebi::TMainTitleMgr::Select_Challenge:
			GameFlow::mActiveSectionFlag = GameFlow::ChallengeGame;
			break;
		case ebi::TMainTitleMgr::Select_Vs:
			GameFlow::mActiveSectionFlag = GameFlow::VSGame;
			break;
		case ebi::TMainTitleMgr::Select_Options:
			mState = State_Options;
			mOptionMgr.start();
			mIsMainActive = true;
			mgr           = PSSystem::getSceneMgr();
			PSSystem::checkSceneMgr(mgr);
			mgr->checkScene();
			seq = PSSystem::getSeqData(mgr, BGM_Options);
			seq->startSeq();
			mLanguageID = sys->mPlayData->mRegion;
			break;
		case ebi::TMainTitleMgr::Select_HiScore:
			if (isFinishable()) {
				mState = State_HiScore;
				Morimura::DispMemberHighScore disp;
				disp.mImageArchive = mHiScoreTex;
				Screen::gGame2DMgr->open_HighScore(disp);
				mgr = PSSystem::getSceneMgr();
				PSSystem::checkSceneMgr(mgr);
				mgr->checkScene();
				seq = PSSystem::getSeqData(mgr, BGM_HiScore);
				seq->startSeq();
				mIsMainActive = true;
				break;
			}
		case ebi::TMainTitleMgr::Select_Bonus:
			mState = State_Bonus;
			mOmakeMgr.start();
			mIsMainActive = true;
			mgr           = PSSystem::getSceneMgr();
			PSSystem::checkSceneMgr(mgr);
			mgr->checkScene();
			seq = PSSystem::getSeqData(mgr, BGM_Bonus);
			seq->startSeq();
			break;
		case ebi::TMainTitleMgr::Select_NULL:
			mIsMainActive = true;
			break;
		default:
			GameFlow::mActiveSectionFlag = GameFlow::MainTitle;
			break;
		}
	} else {
		if (mGoToDemoTimer > 43.0f) {
			if (!Game::gGameConfig.mParms.mKFesVersion.mData && !Game::gGameConfig.mParms.mNintendoVersion.mData) {
				mMainTitleMgr.forceQuit();
				mIsMainActive                = false;
				GameFlow::mActiveSectionFlag = GameFlow::Demo;
			} else {
				mGoToDemoTimer = 0.0f;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000214
 */
void Section::doUpdateHiScore()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044B318
 * Size:	0004C8
 */
void Section::doUpdateOmake()
{
	PSSystem::SceneMgr* mgr;
	PSSystem::SeqBase* seq;

	mOmakeMgr.update();
	if (mOmakeMgr.mIsFinished) {
		mgr = PSSystem::getSceneMgr();
		PSSystem::checkSceneMgr(mgr);
		mgr->checkScene();
		PSSystem::SeqBase* seq = PSSystem::getSeqData(mgr, BGM_Bonus);
		f32 rate               = ebi::TMainTitleMgr::kFadeTime / sys->mDeltaTime;
		rate                   = (rate >= 0.0f) ? rate + 0.5f : rate - 0.5f;
		seq->stopSeq((int)rate);
	}

	if (mOmakeMgr.isMovieState()) {
		if (mMovieIndex < 0) {
			mgr = PSSystem::getSceneMgr();
			PSSystem::checkSceneMgr(mgr);
			mgr->checkScene();
			PSSystem::SeqBase* seq = PSSystem::getSeqData(mgr, BGM_Bonus);
			seq->stopSeq(0);
			mMovieIndex = sMovieIndex[mOmakeMgr.getMovieID()];
			if (mMovieIndex < 0 || mMovieIndex >= 12) {
				mMovieIndex = Game::THPPlayer::PLAY_5;
			}
			mThpPlayer->load((Game::THPPlayer::EMovieIndex)mMovieIndex);
			mThpPlayer->pause();
		} else if (mThpPlayer->isFinishLoading()) {
			mThpPlayer->play();
		}
		mThpPlayer->update();
		if (mThpPlayer->isFinishLoading()) {
			if (mThpPlayer->isFinishPlaying() || mController1->mButton.mButtonDown & Controller::PRESS_B) {
				if (mController1->mButton.mButtonDown & Controller::PRESS_B) {
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
				}
				mThpPlayer->pause();
				mThpPlayer->stop();
				mOmakeMgr.restartFromMovieState();
				mMovieIndex = -1;
				mgr         = PSSystem::getSceneMgr();
				PSSystem::checkSceneMgr(mgr);
				mgr->checkScene();
				seq = PSSystem::getSeqData(mgr, BGM_Bonus);
				seq->startSeq();
			}
		}
	}

	if (mOmakeMgr.isFinish()) {
		mState = State_MainTitle;
		int idk;
		mMainTitleMgr.startMenuSet(idk, ebi::TMainTitleMgr::Select_Bonus);
		mgr = PSSystem::getSceneMgr();
		PSSystem::checkSceneMgr(mgr);
		mgr->checkScene();
		seq = PSSystem::getSeqData(mgr, BGM_MainTheme);
		seq->startSeq();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00025C
 */
void Section::doUpdateOption()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044B7E0
 * Size:	000108
 */
void Section::run()
{
	if (!Game::gGameConfig.mParms.mNintendoVersion.mData && !Game::gGameConfig.mParms.mE3version.mData) {
		sys->mCardMgr->loadGameOption();
	}

	bool dorun = true;
	while (dorun) {
		beginFrame();
		beginRender();
		endRender();
		sys->mCardMgr->update();
		if (sys->mCardMgr->isSaveInvalid()) {
			sys->mCardMgr->checkStatus();
			sys->mPlayData->setup();
			dorun = false;
		}
		endFrame();
	}
	::Section::run();
	mIsMainActive = false;
}

/*
 * --INFO--
 * Address:	8044B8E8
 * Size:	0005B8
 */
bool Section::doUpdate()
{
	PSSystem::SeqBase* seq;

	sys->mCardMgr->update();
	switch (mState) {
	case State_Init:
		mMainTitleMgr.start();
		mState = State_MainTitle;
		mMainTitleMgr.update();
		break;
	case State_MainTitle:
		doUpdateMainTitle();
		break;
	case State_Options:
		if (isFinishable()) {
			mOptionMgr.update();
			if (mOptionMgr.mIsFinished) {

				PSSystem::SeqBase* seq = PSSystemGetSeq(BGM_Options);
				f32 rate               = ebi::TMainTitleMgr::kFadeTime / sys->mDeltaTime;
				rate                   = (rate >= 0.0f) ? rate + 0.5f : rate - 0.5f;
				seq->stopSeq((int)rate);
			}
			if (mOptionMgr.isFinish()) {
				mState = State_MainTitle;
				int idk;
				mMainTitleMgr.startMenuSet(idk, ebi::TMainTitleMgr::Select_Options);
				PSSystem::SeqBase* seq = PSSystemGetSeq(BGM_MainTheme);
				seq->startSeq();
			}
		}
		break;
	case State_Bonus:
		doUpdateOmake();
		break;
	case State_HiScore:
		Screen::gGame2DMgr->update();
		if (Screen::gGame2DMgr->isEndHighScore()) {

			PSSystem::SeqBase* seq = PSSystemGetSeq(BGM_HiScore);
			seq->stopSeq(0);
			mState = State_MainTitle;
			int idk;
			mMainTitleMgr.startMenuSet(idk, ebi::TMainTitleMgr::Select_HiScore);
			seq = PSSystemGetSeq(BGM_MainTheme);
			seq->startSeq();
			Screen::gGame2DMgr->mScreenMgr->reset();
		}
		break;
	case 5:
		if (sys->dvdLoadSyncNoBlock(&mThreadCommand)) {
			mState = State_MainTitle;
			int idk;
			mMainTitleMgr.startMenuSet(idk, ebi::TMainTitleMgr::Select_Options);
			PSSystem::SeqBase* seq = PSSystemGetSeq(BGM_MainTheme);
			seq->startSeq();
		}
		break;
	}
	BaseHIOSection::doUpdate();
	particle2dMgr->update();
	return mIsMainActive;
}

/*
 * --INFO--
 * Address:	8044BEA0
 * Size:	000040
 */
bool Section::isFinishable()
{
	gPikmin2AramMgr->setLoadPermission(false);
	sys->dvdLoadSyncNoBlock(&mThreadCommand);
}

/*
 * --INFO--
 * Address:	8044BEE0
 * Size:	00008C
 */
void Section::doLoadingStart() { sys->dvdLoadUseCallBack(&mThreadCommand, new Delegate<Section>(this, nullptr)); }

/*
 * --INFO--
 * Address:	8044BF6C
 * Size:	0000EC
 */
bool Section::doLoading()
{
	bool flag = sys->dvdLoadSyncNoBlock(&mThreadCommand);
	if (flag) {
		sys->dvdLoadUseCallBack(&mThreadCommand, mButtonCallback);

		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::checkSceneMgr(mgr);
		mgr->checkScene();
		mgr->mScenes->mChild->startMainSeq();
	}
	return u8(flag == 0);
}

/*
 * --INFO--
 * Address:	8044C058
 * Size:	0003C8
 */
void Section::loadResource()
{
	sys->heapStatusStart("TitleSection::loadResource", nullptr);
	createScreenRootNode();
	PSGame::SceneInfo info;
	info.mSceneType          = PSGame::SceneInfo::TITLE_SCREEN;
	info.mCameras            = 0;
	PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->newAndSetCurrentScene(info);

	PSSystem::SceneMgr* mgr2 = PSSystem::getSceneMgr();
	mgr2->checkScene();
	mgr2->mScenes->mChild->scene1stLoadSync();

	sys->heapStatusStart("TParticle2dMgr", nullptr);
	TParticle2dMgr::globalInstance();
	particle2dMgr->createHeap(0x100000);
	particle2dMgr->createMgr("user/Ebisawa/effect/eff2d_game2d.jpc", 2000, 0x80, 0x80);
	sys->heapStatusEnd("TParticle2dMgr");

	sys->heapStatusStart("titleMgr", nullptr);
	int id;
	if (sSeasonIndex == -1) {
		id = randFloat() * 12.0f;
	} else {
		id = 12;
	}

	switch (id) {
	case 0:
		sSeasonIndex = ebi::title::TTitleMgr::Winter;
		break;
	case 1:
		sSeasonIndex = ebi::title::TTitleMgr::Winter;
		break;
	case 2:
		sSeasonIndex = ebi::title::TTitleMgr::Spring;
		break;
	case 3:
		sSeasonIndex = ebi::title::TTitleMgr::Spring;
		break;
	case 4:
		sSeasonIndex = ebi::title::TTitleMgr::Spring;
		break;
	case 5:
		sSeasonIndex = ebi::title::TTitleMgr::Summer;
		break;
	case 6:
		sSeasonIndex = ebi::title::TTitleMgr::Summer;
		break;
	case 7:
		sSeasonIndex = ebi::title::TTitleMgr::Summer;
		break;
	case 8:
		sSeasonIndex = ebi::title::TTitleMgr::Autumn;
		break;
	case 9:
		sSeasonIndex = ebi::title::TTitleMgr::Autumn;
		break;
	case 10:
		sSeasonIndex = ebi::title::TTitleMgr::Autumn;
		break;
	case 11:
		sSeasonIndex = ebi::title::TTitleMgr::Winter;
		break;
	default:
		if ((s8)(++sSeasonIndex) > ebi::title::TTitleMgr::Winter) {
			sSeasonIndex = ebi::title::TTitleMgr::Spring;
		}
	}

	if (Game::gGameConfig.mParms.mKFesVersion.mData) {
		mMainTitleMgr.setMode(ebi::title::TTitleMgr::Summer);
	} else {
		mMainTitleMgr.setMode(sSeasonIndex);
	}
	mMainTitleMgr.loadResource();
	mMainTitleMgr.setController(mController1);
	sys->heapStatusEnd("titleMgr");

	sys->heapStatusStart("optionMgr", nullptr);
	mOptionMgr.loadResource();
	mOptionMgr.setController(mController1);
	sys->heapStatusEnd("optionMgr");

	sys->heapStatusStart("hiscoreTexture", nullptr);
	mHiScoreTex = nullptr;
	char buf[52];
	og::newScreen::makeLanguageResName(buf, "res_hiscoreTexture.szs");
	mHiScoreTex = JKRArchive::mount(buf, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	JUT_ASSERTLINE(1700, mHiScoreTex, "arcName = %s\n", buf);
	sys->heapStatusEnd("hiscoreTexture");

	sys->heapStatusStart("omakeMgr", nullptr);
	mOmakeMgr.newCardEMgrAndTask();
	mOmakeMgr.loadResource();
	mOmakeMgr.setControllers(mController1);
	sys->heapStatusEnd("omakeMgr");

	sys->heapStatusEnd("TitleSection::loadResource");
}

} // namespace Title

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
TitleDummy::Section::Section(JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void TitleDummy::Section::init()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C0
 */
void TitleDummy::Section::loadResource()
{
	sys->heapStatusStart("TitleDummySection::loadResource", nullptr);
	static const char* test  = "/user/Yamashita/testResource/tex";
	static const char* test2 = "titlelogo.bti";
	sys->heapStatusEnd("TitleDummySection::loadResource");
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
bool TitleDummy::Section::doUpdate()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void TitleDummy::Section::doDraw(Graphics& gfx)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
TitleDummy::Section::~Section()
{
	// UNUSED FUNCTION
}
