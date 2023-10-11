#include "Section.h"
#include "Dolphin/__start.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTException.h"
#include "JSystem/JUtility/JUTFader.h"
#include "JSystem/JFramework/JFWDisplay.h"
#include "Game/MemoryCard/Mgr.h"
#include "PSSystem/PSGame.h"
#include "THP/THPRead.h"
#include "System.h"
#include "Graphics.h"
#include "nans.h"
#if BUILDTARGET == USADEMO1
#include "Game/GameConfig.h"
#endif

static const f32 unusedSectionArray[] = { 0.0f, 0.0f, 0.0f };

// Some bullshit
static OSTime sPlayTime = OS_TIMER_CLOCK * 300;

/*
 * --INFO--
 * Address:	80423770
 * Size:	000004
 */
void Section::init() { }

/*
 * --INFO--
 * Address:	80423774
 * Size:	0001D0
 */
Section::Section(JFWDisplay* display, JKRHeap* heap, bool b)
{
	mIsLoadingDVD = false;
	mDisplayHeap  = nullptr;
	mOldHeap      = nullptr;
	mDisplay      = nullptr;
	mFader        = nullptr;
	mDisplayWiper = nullptr;
	mTimeStep     = 0.5f;
	mIsMainActive = true;
	_36           = 0;
	mIsDisplayNew = false;
	_38           = 0;

	if (heap) {
		mDisplayHeap = JKRExpHeap::create(heap->getFreeSize(), heap, true);
		mOldHeap     = mDisplayHeap->becomeCurrentHeap();
	} else {
		mDisplayHeap = JKRExpHeap::create(JKRHeap::sRootHeap->getFreeSize(), nullptr, true);
		mOldHeap     = mDisplayHeap->becomeCurrentHeap();
	}

	if (b) {
		if (display) {
			mDisplay      = display;
			mFader        = display->mFader;
			mIsDisplayNew = false;
		} else {
			mDisplay = JFWDisplay::createManager(nullptr, mDisplayHeap, JUTXfb::DoubleBuffer, false);
			mFader   = new JUTFader(0, 0, JUTVideo::sManager->mRenderModeObj->fbWidth, JUTVideo::sManager->mRenderModeObj->efbHeight,
                                  JUtility::TColor(0, 0, 0, 0)); // TODO: HELP
			mDisplay->mFader = mFader;
			mIsDisplayNew    = true;

			sys->setCurrentDisplay(mDisplay);
			sys->setFrameRate(1);
		}
	}

	mGraphics = new Graphics();
	sys->mGfx = mGraphics;
#if BUILDTARGET == USADEMO1
	mOsTime          = 0;
	mDemoController1 = new JUTGamePad(JUTGamePad::PORT_0);
	mDemoController2 = new JUTGamePad(JUTGamePad::PORT_1);
	mTimer           = 0.0f;
#endif
}

/*
 * --INFO--
 * Address:	804239A4
 * Size:	000120
 */
Section::~Section()
{
	if (mIsDisplayNew && mDisplay) {
		delete mFader;
		JUTXfb::sManager->clearIndex();
		JFWDisplay::destroyManager();
		sys->clearCurrentDisplay(mDisplay);
		mDisplay = nullptr;
	}

	if (mDisplayHeap) {
		mDisplayHeap->freeAll();
		JKRHeap* heap = mDisplayHeap;

		void* address = (void*)mDisplayHeap;
		u32 size      = heap->getFreeSize() + 4;

		mDisplayHeap->destroy();
		DCStoreRange(address, size);
	}

	sys->mGfx = nullptr;
}

inline f32 getX(f32 x)
{
	// 0.5 / (1 / 60) == 30
	f32 y = x / SINGLE_FRAME_LENGTH;

	if (y >= 0.0f) {
		return y + 0.5f;
	} else {
		return y - 0.5f;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void Section::loading()
{
	doLoadingStart();
	do {
		bool isLoading;
		do {
			beginFrame();
			beginRender();

			endRender();
			isLoading = doLoading();
			endFrame();
		} while (isLoading);
	} while (sys->isDvdErrorOccured());
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void Section::fadeIn()
{
	drawInit(*mGraphics, Section::Zero);

	s32 fadeTimer = getX(mTimeStep);
	if (mDisplay->mFader) {
		mDisplay->mFader->startFadeIn(fadeTimer);
	}

	for (f32 x = 0.0f; x < mTimeStep;) {
		beginFrame();
		beginRender();

		draw(*mGraphics);

		endRender();
		endFrame();

		if (!sys->isDvdErrorOccured()) {
			x += SINGLE_FRAME_LENGTH;
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A4
 */
void Section::main()
{
#if BUILDTARGET == USADEMO1
	mOsTime = OSGetTime();
	drawInit(*mGraphics, Section::One);
	Game::GameConfig* config = &Game::gGameConfig;
#else
	drawInit(*mGraphics, Section::One);
#endif
	do {
		sys->mTimers->newFrame();

		beginFrame();
		beginRender();

		sys->mTimers->_start("draw", true);
		draw(*mGraphics);
		sys->mTimers->_stop("draw");
		endRender();

		sys->mTimers->_start("update", true);
		update();
		sys->mTimers->_stop("update");
		endFrame();
#if BUILDTARGET == USADEMO1
		// TODO: This case has to be something around the lines of the below, running into inlining issues with Section::run()
		/*if (!config->mParms.mE3version.mData || !config->mParms.mNintendoVersion.mData && !forceReset()) {
		    if (!mDemoController1->mButton.mButton || !mDemoController2->mButton.mButton) {
		        mTimer = 0.0f;
		    }
		    mTimer += sys->mDeltaTime;
		    if (mTimer > 180.0f)
		        sys->resetOn(false);
		}*/
		if (!config->mParms.mE3version.mData) {
			mTimer += sys->mDeltaTime;
			if (mTimer > 180.0f)
				sys->resetOn(false);
		}
#endif
	} while (!mIsLoadingDVD && mIsMainActive);
	// Don't draw or render while loading from DVD

	s32 timer = getX(mTimeStep);

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	mgr->checkScene();

	PSSystem::Scene* scene = mgr->mScenes->mChild;
	if (scene) {
		scene->stopMainSeq(timer);
	}

	if (mDisplay->mFader) {
		mDisplay->mFader->startFadeOut(timer);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D0
 */
void Section::fadeOut()
{
	drawInit(*mGraphics, Section::Two);
	for (f32 x = 0.0f; x < mTimeStep;) {
		beginFrame();

		beginRender();
		draw(*mGraphics);
		endRender();

		update();

		endFrame();

		if (!sys->isDvdErrorOccured()) {
			x += SINGLE_FRAME_LENGTH;
		}
	}

	for (; !isFinishable() || sys->isDvdErrorOccured();) {
		beginFrame();
		beginRender();
		endRender();
		endFrame();
	}
}

/*
 * --INFO--
 * Address:	80423AC4
 * Size:	0004B8
 */
void Section::run()
{
	JUT_ASSERTLINE(543, mDisplay, "no Display manager.\n");

	mDisplay->waitBlanking(1);

	loading();
	fadeIn();
	main();
	fadeOut();

	if (mIsLoadingDVD) {
		do {
			do {
				beginFrame();
				beginRender();
				endRender();
				endFrame();
			} while (sys->dvdLoadSyncAllNoBlock());
		} while (gTHPReaderDvdAccess);
	}
}

/*
 * --INFO--
 * Address:	80423F7C
 * Size:	000050
 */
void Section::exit()
{
	doExit();
	mOldHeap->becomeCurrentHeap();
	sys->initGenNode();
	sys->refreshGenNode();
}

/*
 * --INFO--
 * Address:	80423FCC
 * Size:	000024
 */
bool Section::beginFrame() { return sys->beginFrame(); }

/*
 * --INFO--
 * Address:	80423FF0
 * Size:	000024
 */
void Section::endFrame() { sys->endFrame(); }

/*
 * --INFO--
 * Address:	80424014
 * Size:	000024
 */
void Section::beginRender() { sys->beginRender(); }

/*
 * --INFO--
 * Address:	80424038
 * Size:	000040
 */
void Section::endRender()
{
	if (mDisplayWiper) {
		mDisplayWiper->update();
	}

	sys->endRender();
}

/*
 * --INFO--
 * Address:	80424078
 * Size:	00007C
 */
bool Section::update()
{
	bool isActive = false;

	if (!sys->isDvdErrorOccured()) {
		isActive = doUpdate();
	} else {
		sys->mCardMgr->update();
	}

	return isActive;
}

/*
 * --INFO--
 * Address:	804240F4
 * Size:	00005C
 */
void Section::draw(Graphics& gfx)
{
	if (!sys->isDvdErrorOccured()) {
		doDraw(gfx);
	}
}

/*
 * --INFO--
 * Address:	80424150
 * Size:	000054
 */
// void __sinit_section_cpp()
// {
// 	/*
// 	lis      r3, 0x800000F8@ha
// 	lis      r4, __float_nan@ha
// 	lwz      r0, 0x800000F8@l(r3)
// 	li       r7, -1
// 	lfs      f0, __float_nan@l(r4)
// 	lis      r6, lbl_804EBB80@ha
// 	srwi     r5, r0, 2
// 	li       r3, 0x12c
// 	li       r4, 0
// 	stfsu    f0, lbl_804EBB80@l(r6)
// 	mulhwu   r0, r5, r3
// 	stw      r7, lbl_80516178@sda21(r13)
// 	stfs     f0, lbl_8051617C@sda21(r13)
// 	mullw    r3, r4, r3
// 	stfs     f0, 4(r6)
// 	stfs     f0, 8(r6)
// 	mulli    r4, r5, 0x12c
// 	add      r0, r0, r3
// 	stw      r0, sPlayTime@sda21(r13)
// 	stw      r4, lbl_80516184@sda21(r13)
// 	blr
// 	*/
// }
