#include "Game/Entities/ItemBigFountain.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/PelletCarcass.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/Entities/PelletFruit.h"
#include "Game/Entities/PelletItem.h"
#include "Game/PelletBirthBuffer.h"
#include "Game/Cave/RandMapUnit.h"
#include "Game/BaseGameSection.h"
#include "Game/generalEnemyMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/AIConstants.h"
#include "Game/PikiState.h"
#include "Game/GameLight.h"
#include "Game/CameraMgr.h"
#include "Game/DeathMgr.h"
#include "Game/PikiMgr.h"
#include "Game/rumble.h"
#include "Game/Navi.h"
#include "Game/Farm.h"

#include "JSystem/JFramework/JFWDisplay.h"
#include "JSystem/J2D/J2DPrint.h"
#include "Screen/Game2DMgr.h"
#include "Sys/DrawBuffers.h"
#include "TParticle2dMgr.h"
#include "PSGame/Global.h"
#include "efx/OnyonSpot.h"
#include "Dolphin/rand.h"
#include "LifeGaugeMgr.h"
#include "og/ogLib2D.h"
#include "utilityU.h"
#include "PikiAI.h"
#include "nans.h"

namespace og {
namespace Screen {

int UfoMenuResult[4] = { 1, 2, 3, 0 };

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void setBlendPane(J2DBlendInfo, J2DScreen*, u64*)
{
	// UNUSED FUNCTION
}

} // namespace Screen
} // namespace og

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "baseGameSection";

static Delegate1<Game::BaseGameSection, Game::CameraArg*>* cameraMgrCallback;
static JKRExpHeap* theExpHeap;

namespace Game {

u8 BaseGameSection::sOptDraw = 3;

/**
 * @note Address: 0x8014ADA0
 * @note Size: 0x21C
 */
BaseGameSection::BaseGameSection(JKRHeap* heap)
    : BaseHIOSection(heap)
{
	mXfbFlags = 0;
	setDisplay(JFWDisplay::createManager(nullptr, mDisplayHeap, JUTXfb::DoubleBuffer, true), 1);
	mPlayerMode         = 2;
	mDraw2DCreature     = nullptr;
	mTreasureZoomCamera = nullptr;
	mKanteiDelegate     = new Delegate1<BaseGameSection, Rectf&>(this, &BaseGameSection::onKanteiDone);
	cameraMgrCallback   = new Delegate1<BaseGameSection, CameraArg*>(this, &BaseGameSection::onCameraBlendFinished);
	mBlendCamera        = nullptr;
	Game::cameraMgr     = nullptr;
	Game::rumbleMgr     = nullptr;
	Game::shadowMgr     = nullptr;
	lifeGaugeMgr        = nullptr;
	carryInfoMgr        = nullptr;
	mLightMgr           = nullptr;
	mSplitter           = nullptr;
	mTheExpHeap         = nullptr;
	theExpHeap          = nullptr;
	mBackupHeap         = nullptr;
	mXfbTexture2d       = nullptr;
	mFbTexture          = nullptr;
	mXfbImage           = nullptr;
	mXfbBoundsX         = 0;
	mXfbBoundsY         = 0;
	mXfbBounds2dY       = 0;
	mXfbBounds2dX       = 0;
	mUnusedVal          = 0;
	mBlackFader         = new BlackFader;
	mWipeInFader        = new WipeInFader;
	mWipeOutFader       = new WipeOutFader;
	mWipeOutInFader     = new WipeOutInFader;
}

/**
 * @note Address: 0x8014B0FC
 * @note Size: 0x74
 */
void BaseGameSection::useSpecificFBTexture(JUTTexture* texture)
{
	JUT_ASSERTLINE(1523, !mFbTexture, "２回は無理ｗ\n"); // 'it's impossible to do twice lol'
	mFbTexture                    = mXfbImage;
	mXfbImage                     = texture;
	Game::gameSystem->mXfbTexture = mXfbImage;
}

/**
 * @note Address: 0x8014B170
 * @note Size: 0x6C
 */
void BaseGameSection::restoreFBTexture()
{
	JUT_ASSERTLINE(1533, mFbTexture, "useSpecificFBTexture してないｗ\n"); // 'i haven't used useSpecificFBTexture lol'
	mXfbImage                     = mFbTexture;
	mFbTexture                    = nullptr;
	Game::gameSystem->mXfbTexture = mXfbImage;
}

/**
 * @note Address: 0x8014B1DC
 * @note Size: 0x114
 */
BaseGameSection::~BaseGameSection()
{
	theExpHeap = nullptr;
	PSSystem::SceneMgr* sceneMgr;
	PSSystem::validateSceneMgr(sceneMgr = PSSystem::getSceneMgr());
	sceneMgr->deleteCurrentScene();
	TParticle2dMgr::deleteInstance();
	particleMgr->deleteInstance_TPkEffectMgr();
	ParticleMgr::deleteInstance();

	itemMgr->clearGlobalPointers();

	PelletOtakara::mgr = nullptr;
	PelletFruit::mgr   = nullptr;
	PelletItem::mgr    = nullptr;
	PelletNumber::mgr  = nullptr;
	PelletCarcass::mgr = nullptr;
}

/**
 * @note Address: 0x8014B2F0
 * @note Size: 0x50
 */
void BaseGameSection::loadSync(IDelegate* delegate, bool p2)
{
	sys->dvdLoadUseCallBack(&mDvdThreadCommand, delegate);
	waitSyncLoad(p2);
}

/**
 * @note Address: 0x8014B340
 * @note Size: 0x120
 */

u32 BaseGameSection::waitSyncLoad(bool allowPause)
{
	static int col = 0;
	col++;
	endFrame();

	if (!allowPause) {
		gameSystem->setPause(true, "waitSyncLoad", 3);
	}

	while (true) {
		beginFrame();
		beginRender();

		j3dSys.drawInit();
		GXSetViewport(0.0f, 0.0f, SCREEN_WIDTH, SCREEN_HEIGHT, 0.0f, 1.0f);
		GXSetScissor(0, 0x10, SCREEN_SCISSOR_WIDTH, SCREEN_SCISSOR_HEIGHT);
		endRender();

		if (mDvdThreadCommand.mMode != DvdThreadCommand::CM_Completed) {
			// Wait for the DVD thread to finish
		} else if (!allowPause) {
			gameSystem->setPause(false, "waitSyncLoad", 3);
			return;
		} else {
			break;
		}

		endFrame();
	}
}

/**
 * @note Address: 0x8014B460
 * @note Size: 0x50
 */
void BaseGameSection::dvdloadGameSystem()
{
	GameSystem* game = new GameSystem(this);
	Game::gameSystem = game;
	game->init();
}

/**
 * @note Address: 0x8014B4B0
 * @note Size: 0x390
 */
void BaseGameSection::init()
{
	mXfbFlags       = 0;
	mMoney          = 0;
	mDraw2DCreature = nullptr;
	System::FragmentationChecker initFrag("BGS::init", false);
	{
		System::FragmentationChecker heapFrag("heapStatus", false);
		sys->heapStatusStart("baseGameSection::init", nullptr);
	}

	sys->enableCPULockDetector(480);
	Delegate<BaseGameSection> delegate(this, dvdloadGameSystem);
	beginFrame();
	beginRender();
	j3dSys.drawInit();
	GXSetViewport(0.0f, 0.0f, 608.0f, 480.0f, 0.0f, 1.0f);
	GXSetScissor(0, 0x10, 0x260, 0x1c0);
	mGraphics->mOrthoGraph.setPort();
	endRender();
	sys->dvdLoadUseCallBack(&mDvdThreadCommand, &delegate);

	waitSyncLoad(true);

	BaseHIOSection::initHIO(nullptr);

	mTreasureLightMgr = new TreasureLight::Mgr;
	System::assert_fragmentation("BaseGameSection::initHIO");
	moviePlayer          = new MoviePlayer;
	mMovieFinishCallback = new Delegate3<BaseGameSection, MovieConfig*, u32, u32>(this, movieDone);
	mMovieStartCallback  = new Delegate3<BaseGameSection, MovieConfig*, u32, u32>(this, onMovieStart);

	sys->setFrameRate(2);
	System::assert_fragmentation("BaseGameSection::MoviePlayer");
	initJ3D();
	mUnusedFlag = true;
	mapMgr      = nullptr;
	System::assert_fragmentation("BaseGameSection::InitJ3D");
	System::assert_fragmentation("BaseGameSection::Before 2D");

	og::Lib2D::create();
	Screen::Game2DMgr::create();
	static_cast<newScreen::Mgr*>(Screen::gGame2DMgr->mScreenMgr)->mInitialised = 1;
	System::assert_fragmentation("BaseGameSection::Game2DMgr");
	mXfbBoundsY = 0;
	mXfbBoundsX = 0;
	onInit();
	sys->heapStatusEnd("baseGameSection::init");
	mTreasureGetState = false;
}

/**
 * @note Address: 0x8014B844
 * @note Size: 0x34
 */
void BaseGameSection::drawInit(Graphics& gfx, Section::EDrawInitMode mode)
{
	if (mode == Two) {
		section_fadeout();
	}
}

/**
 * @note Address: 0x8014B87C
 * @note Size: 0x3A8
 */
bool BaseGameSection::doUpdate()
{
	SysShape::Model::cullCount = 0;
	gameSystem->startFrame();
	Screen::gGame2DMgr->update();
	if (mIsBlendCameraActive) {
		updateBlendCamera();
	}
	mapMgr->update();
	sys->mTimers->_start("doAnim", true);
	doAnimation();
	sys->mTimers->_stop("doAnim");
	sys->mTimers->_start("ENT", true);
	sys->mTimers->_start("ENT-A", true);
	doEntry();
	sys->mTimers->_stop("ENT-A");
	sys->mTimers->_start("ENT-B", true);

	if (rumbleMgr) {
		rumbleMgr->update();
	}
	if (shadowMgr) {
		shadowMgr->update();
	}
	if (lifeGaugeMgr) {
		lifeGaugeMgr->update();
	}
	if (carryInfoMgr) {
		carryInfoMgr->update();
	}
	if (mLightMgr) {
		mLightMgr->update();
	}
	SysShape::Model::setViewCalcModeInd();
	for (int vpIdx = 0; vpIdx < sys->mGfx->mActiveViewports; vpIdx++) {
		Viewport* viewport = sys->mGfx->getViewport(vpIdx);
		if (viewport && viewport->viewable()) {
			j3dSetView(viewport, false);
		}
	}
	BaseHIOSection::doUpdate();
	if (platMgr) {
		platMgr->resetOnCount();
	}

	sys->mTimers->_stop("ENT-B");
	sys->mTimers->_stop("ENT");
	sys->mTimers->_start("doSim", true);

	if (!gameSystem->paused()) {
		f32 frameRate = sys->getFrameRate(1.0f);
		sys->mTimers->_start("coll", true);
		if (!(gameSystem->isFlag(GAMESYS_DisableCollision))) {
			sys->getTime();
			cellMgr->resolveCollision();
			CellPyramid::sSpeedUpResolveColl = true;
		}
		sys->mTimers->_stop("coll");
		doSimulation(frameRate);
	}

	sys->mTimers->_stop("doSim");
	sys->mTimers->_start("particle", true);
	if (!gameSystem->mIsFrozen && !gameSystem->paused() && particleMgr) {
		particleMgr->update();
	}
	if (particle2dMgr) {
		particle2dMgr->update();
	}
	sys->mTimers->_stop("particle");
	onUpdate();
	if (moviePlayer && !gameSystem->mIsMoviePause) {
		if (gameSystem->isMultiplayerMode()) {
			moviePlayer->update(mControllerP1, mControllerP2);
		} else {
			moviePlayer->update(mControllerP1, nullptr);
		}
	}
	if (shadowMgr) {
		shadowMgr->init();
	}
	gameSystem->endFrame();
	return mIsMainActive;
}

/**
 * @note Address: 0x8014BC28
 * @note Size: 0x170
 */
void BaseGameSection::doDraw(Graphics& gfx)
{
	captureRadarmap(gfx);
	if (gameSystem->paused()) {
		if (cameraMgr) {
			cameraMgr->controllerLock(CAMNAVI_Both);
			cameraMgr->update();
			cameraMgr->controllerUnLock(CAMNAVI_Both);
		}

	} else if (cameraMgr) {
		cameraMgr->update();
	}

	sys->mTimers->_start("_draw3D_", true);
	draw3D(gfx);
	sys->mTimers->_stop("_draw3D_");
	if (moviePlayer && !gameSystem->mIsMoviePause) {
		moviePlayer->drawLoading(gfx);
	}
	pre2dDraw(gfx);
	gfx.setToken("2d");
	draw2D(gfx);
	if (mDraw2DCreature) {
		drawOtakaraWindow(gfx);
	}
	Screen::gGame2DMgr->drawKanteiMsg(gfx);
	if (moviePlayer && !gameSystem->mIsMoviePause) {
		moviePlayer->draw(gfx);
	}
}

/**
 * @note Address: 0x8014BD9C
 * @note Size: 0x78
 */
void BaseGameSection::movieDone(MovieConfig* config, u32 id1, u32 id2)
{
	onMovieDone(config, id1, id2);
	if (mDraw2DCreature) {
		mDraw2DCreature->movie_end(true);
		mDraw2DCreature->kill(nullptr);
		mDraw2DCreature = nullptr;
		Screen::gGame2DMgr->close_SpecialItem();
		Screen::gGame2DMgr->close_Kantei();
		mTreasureGetState = 0;
	}
}

/**
 * @note Address: 0x8014BE18
 * @note Size: 0x8C
 */
void BaseGameSection::onMovieCommand(int cmd)
{
	switch (cmd) {
	case 0:
		break;
	case 2:
		if (moviePlayer && !(moviePlayer->isFlag(MVP_IsFinished))) {
			createFallPikminSound();
		}
		break;
	case 3:
		if (gameSystem->isStoryMode() && gameSystem->mTimeMgr->mDayCount == 0) {
			pikiMgr->forceEnterPikmins(false);
		}
		break;
	}
}

/**
 * @note Address: 0x8014BEA4
 * @note Size: 0x450
 */

// unfortunatly this probably isn't real inline, however I'm not writing the full code out bc that's stupid
inline void j3dStuff(Sys::DrawBuffers*& buffer, Sys::DrawBuffer::CreateArg& drawArg, bool doFog)
{

	drawArg.mSize = 0x80;
	drawArg.mName = "normal";
	buffer->get(DB_NormalLayer)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = (doFog) ? "normal-fogoff" : "normal";
	buffer->get(DB_NormalFogOffLayer)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "map";
	if (doFog) {
		drawArg.mSortType = J3DDrawBuffer::J3DSORT_NonSort;
	}
	buffer->get(DB_MapLayer)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "piki";
	if (doFog) {
		drawArg.mSortType = J3DDrawBuffer::J3DSORT_Mat;
	}
	buffer->get(DB_PikiLayer)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "post";
	buffer->get(DB_PostRenderLayer)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "2d";
	buffer->get(DB_2DLayer)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "first";
	buffer->get(DB_FirstLayer)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "postshadow";
	buffer->get(DB_PostShadowLayer)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "objectlast";
	buffer->get(DB_ObjectLastLayer)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "farm";
	buffer->get(DB_FarmLayer)->create(drawArg);
}

void BaseGameSection::initJ3D()
{
	mOpaqueDrawBuffer      = new Sys::DrawBuffers;
	mTransparentDrawBuffer = new Sys::DrawBuffers;

	mOpaqueDrawBuffer->allocate(10);
	mOpaqueDrawBuffer->mName = "OPA";
	{
		Sys::DrawBuffer::CreateArg drawArg;
		drawArg.mSortType = J3DDrawBuffer::J3DSORT_Mat;
		drawArg.mDrawType = J3DDrawBuffer::J3DDRAW_Head;
		j3dStuff(mOpaqueDrawBuffer, drawArg, true);
	}

	mTransparentDrawBuffer->allocate(10);
	mTransparentDrawBuffer->mName = "XLU";

	{
		Sys::DrawBuffer::CreateArg drawArg;
		drawArg.mSortType = J3DDrawBuffer::J3DSORT_Mat;
		drawArg.mDrawType = J3DDrawBuffer::J3DDRAW_Head;
		drawArg.mFlags.typeView |= 1;
		j3dStuff(mTransparentDrawBuffer, drawArg, false);
	}

	addGenNode(mOpaqueDrawBuffer);
	addGenNode(mTransparentDrawBuffer);

	j3dSys.mDrawBuffer[0] = mOpaqueDrawBuffer->get(DB_NormalLayer)->mBuffer;
	j3dSys.mDrawBuffer[1] = mTransparentDrawBuffer->get(DB_NormalLayer)->mBuffer;

	System::FragmentationChecker frag("poyol", false);
}

/**
 * @note Address: 0x8014C2F4
 * @note Size: 0x34
 */
void BaseGameSection::initResources()
{
	setupFixMemory();
	setupFloatMemory();
}

/**
 * @note Address: 0x8014C328
 * @note Size: 0x1E4
 */
void BaseGameSection::initViewports(Graphics& gfx)
{
	mSplitter = new HorizonalSplitter(&gfx);
	setSplitter(false);

	gfx.getViewport(PLAYER1_VIEWPORT)->setCamera(mOlimarCamera);
	gfx.getViewport(PLAYER2_VIEWPORT)->setCamera(mLouieCamera);

	shadowMgr->setViewport(gfx.getViewport(PLAYER1_VIEWPORT), 0);
	shadowMgr->setViewport(gfx.getViewport(PLAYER2_VIEWPORT), 1);

	cameraMgr->setViewport(gfx.getViewport(PLAYER1_VIEWPORT), CAMNAVI_Olimar);
	cameraMgr->setViewport(gfx.getViewport(PLAYER2_VIEWPORT), CAMNAVI_Louie);

	cameraMgr->init(CAMNAVI_Olimar);
	mTreasureZoomCamera         = new ZoomCamera;
	mTreasureGetViewport        = new Viewport;
	mTreasureGetViewport->mVpId = 2;

	u16 x = sys->getRenderModeObj()->fbWidth;
	u16 y = sys->getRenderModeObj()->efbHeight;
	sys->getRenderModeObj();
	sys->getRenderModeObj();

	f32 left = 0.0f;
	f32 top  = left - 80.0f;
	Rectf rect(left, top, left + x, top + y);
	mTreasureGetViewport->setRect(rect);
	mTreasureGetViewport->setCamera(mTreasureZoomCamera);
}

/**
 * @note Address: 0x8014C5CC
 * @note Size: 0x1120
 */
#define LoadTextFile(x) JKRDvdRipper::loadToMainRAM(x, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);

void BaseGameSection::initGenerators()
{

	generatorCache->clearGeneratorList();
	Generator::initialiseSystem();

	{ // Init Generator Managers
		generatorMgr        = new GeneratorMgr;
		generatorMgr->mName = "Generator(Default)";
		addGenNode(generatorMgr);

		onceGeneratorMgr        = new GeneratorMgr;
		onceGeneratorMgr->mName = "Generator(Init)";
		addGenNode(onceGeneratorMgr);

		limitGeneratorMgr              = new GeneratorMgr;
		limitGeneratorMgr->mName       = "Generator(Limit)";
		limitGeneratorMgr->mUnusedFlag = true;
		addGenNode(limitGeneratorMgr);

		plantsGeneratorMgr        = new GeneratorMgr;
		plantsGeneratorMgr->mName = "Generator(植物)";
		addGenNode(plantsGeneratorMgr);

		dayGeneratorMgr        = new GeneratorMgr;
		dayGeneratorMgr->mName = "Generator(DAY)";
		addGenNode(dayGeneratorMgr);

		GeneratorMgr::cursorCallback = new Delegate1<BaseGameSection, Vector3f&>(this, changeGeneratorCursor);

		GenObjectEnemy::initialise();
		GenItem::initialise();
		GenPellet::initialise();
		GenObjectPiki::initialise();
		GenObjectNavi::initialise();
	}

	// load courseinfo
	if (mapMgr->mCourseInfo) {

		PelletBirthBuffer::clear();
		generatorCache->loadGenerators(mapMgr->mCourseInfo->mCourseIndex);
		generatorCache->updateUseList();

		int fileIdx = 0;

		char filenameCharArr[PATH_MAX];
		void* generatorFiles[64];
		GeneratorMgr* generatorManagers[64];

#pragma region defaultgen

		sprintf(filenameCharArr, "%s/defaultgen.txt", mapMgr->mCourseInfo->mAbeFolder);

		void* defaultGenFile = LoadTextFile(filenameCharArr);

		if (defaultGenFile) {
			RamStream defaultGenTxt(defaultGenFile, -1);
			defaultGenTxt.mMode = 1;
			if (defaultGenTxt.mMode == 1) {
				defaultGenTxt.mTabCount = 0;
			}
			generatorMgr->read(defaultGenTxt, false);
			generatorMgr->updateUseList();

			generatorFiles[0]    = defaultGenFile;
			generatorManagers[0] = generatorMgr;
			fileIdx++;
		}

#pragma endregion

#pragma region plantsgen

		sprintf(filenameCharArr, "/%s/plantsgen.txt", mapMgr->mCourseInfo->mAbeFolder);
		int entrynum = DVDConvertPathToEntrynum(filenameCharArr);

		if (entrynum != -1) {
			void* plantsgenFile = LoadTextFile(filenameCharArr);
			if (plantsgenFile) {
				RamStream plantsGenTxt(plantsgenFile, -1);
				plantsGenTxt.setMode(STREAM_MODE_TEXT, 1);
				plantsGeneratorMgr->read(plantsGenTxt, false);
				plantsGeneratorMgr->updateUseList();
				generatorFiles[fileIdx]    = plantsgenFile;
				generatorManagers[fileIdx] = plantsGeneratorMgr;
				fileIdx++;
			}
		}

#pragma endregion

#pragma region initgen

		CourseInfo* courseInfo = mapMgr->mCourseInfo;

		bool firstVisit = playData->courseVisited(courseInfo->mCourseIndex);

		if (!firstVisit) {
			playData->visitCourse(courseInfo->mCourseIndex);
			sprintf(filenameCharArr, "%s/initgen.txt", courseInfo->mAbeFolder);
			void* initgenFile = LoadTextFile(filenameCharArr);
			if (initgenFile) {
				RamStream initgenTxt(initgenFile, -1);
				initgenTxt.mMode = 1;
				if (initgenTxt.mMode == 1) {
					initgenTxt.mTabCount = 0;
				}
				onceGeneratorMgr->read(initgenTxt, false);
				onceGeneratorMgr->updateUseList();
				generatorFiles[fileIdx]    = initgenFile;
				generatorManagers[fileIdx] = onceGeneratorMgr;
				fileIdx++;
			}
		}

#pragma endregion
		int today = gameSystem->mTimeMgr->mDayCount;

		{ // nonloop

			for (int i = 0; i < courseInfo->mLimitGenInfo.mCount; i++) {
				LimitGen* currentGen = static_cast<LimitGen*>(courseInfo->mLimitGenInfo.mOwner.getChildAt(i));

				if (currentGen->mMinimumDay > today || today > currentGen->mMaximumDay)
					continue;
				if (playData->mLimitGen[courseInfo->mCourseIndex].mNonLoops.isFlag(i))
					continue;

				sprintf(filenameCharArr, "%s/nonloop/%s", courseInfo->mAbeFolder, currentGen->mName);

				void* nonLoopFile = LoadTextFile(filenameCharArr);

				if (nonLoopFile) {
					RamStream noonloopTxt(nonLoopFile, -1);
					noonloopTxt.mMode = 1;
					if (noonloopTxt.mMode == 1) {
						noonloopTxt.mTabCount = 0;
					}

					GeneratorMgr* currentNonloopMgr = new GeneratorMgr;
					currentNonloopMgr->mUnusedFlag  = true; // is nonrepeating?

					currentNonloopMgr->read(noonloopTxt, false);
					currentNonloopMgr->setDayLimit(currentGen->mDayLimit);
					currentNonloopMgr->updateUseList();

					generatorFiles[fileIdx]    = nonLoopFile;
					generatorManagers[fileIdx] = currentNonloopMgr;
					fileIdx++;

					limitGeneratorMgr->addMgr(currentNonloopMgr);
					playData->mLimitGen[courseInfo->mCourseIndex].mNonLoops.setFlag(i);
				}
			}

		} // end nonloop
		{ // loop

			int day = gameSystem->mTimeMgr->mDayCount;
			// int loopGenCount = courseInfo->mLoopGenInfo.mCount;

			int intervalDay = today % 30;

			int intervalIterations = day / 30;

			// effectively day > 30
			if (intervalIterations >= 1) {

				int floorDay = intervalIterations * 30;

				for (int i = 0; i < courseInfo->mLoopGenInfo.mCount; i++) {
					LimitGen* currentGen = static_cast<LimitGen*>(courseInfo->mLoopGenInfo.mOwner.getChildAt(i));

					int intervalMin = currentGen->mMinimumDay % 30;
					int intervalMax = currentGen->mMaximumDay % 30;

					if (intervalMin > intervalDay || intervalDay > intervalMax)
						continue;

					bool loopLoaded = playData->mLimitGen[courseInfo->mCourseIndex].mLoops.isFlag(i);

					if (loopLoaded)
						continue;

					sprintf(filenameCharArr, "%s/loop/%s", courseInfo->mAbeFolder, currentGen->mName);
					void* loopFile = LoadTextFile(filenameCharArr);
					if (loopFile) {
						RamStream loopTxt(loopFile, -1);
						loopTxt.mMode = 1;
						if (loopTxt.mMode == 1) {
							loopTxt.mTabCount = 0;
						}

						GeneratorMgr* currentLoopMgr = new GeneratorMgr;
						currentLoopMgr->mUnusedFlag  = true; // is nonrepeating?

						currentLoopMgr->read(loopTxt, false);
						currentLoopMgr->setDayLimit(floorDay + currentGen->mMaximumDay - 30);
						currentLoopMgr->updateUseList();

						generatorManagers[fileIdx] = currentLoopMgr;
						generatorFiles[fileIdx]    = loopFile;
						fileIdx++;
						limitGeneratorMgr->addMgr(currentLoopMgr);

						playData->mLimitGen[courseInfo->mCourseIndex].mLoops.setFlag(i);
					}
				}
			}

		} // end loop
		{ // weird day ujim thing
			int today = gameSystem->mTimeMgr->mDayCount;
			sprintf(filenameCharArr, "%s/day/%d.txt", courseInfo->mAbeFolder, today % 30);
			int fileNum = DVDConvertPathToEntrynum(filenameCharArr);
			if (fileNum != -1) {
				void* dayFile = LoadTextFile(filenameCharArr);
				if (dayFile) {
					RamStream dayTxt(dayFile, -1);
					dayTxt.mMode = 1;
					if (dayTxt.mMode == 1) {
						dayTxt.mTabCount = 0;
					}
					dayGeneratorMgr->read(dayTxt, false);
					dayGeneratorMgr->updateUseList();
					generatorFiles[fileIdx]    = dayFile;
					generatorManagers[fileIdx] = dayGeneratorMgr;
					fileIdx++;
				}
			}
		}

		generalEnemyMgr->allocateEnemys(mPlayerMode, -1);
		generalEnemyMgr->setupSoundViewerAndBas();
		pelletMgr->setupResources();

		// cleanup file ptrs that have been left lying arround
		for (int i = fileIdx - 1; i >= 0; i--) {
			delete[] generatorFiles[i];
		}

		for (int i = 0; i < fileIdx; i++) {
			generatorManagers[i]->generate();
		}

		generatorCache->createNumberGenerators();
		generatorCache->loadCreatures(mapMgr->mCourseInfo->mCourseIndex);
	}

	PelletBirthBuffer::birthAll();
	Iterator<Navi> iNavi = naviMgr;
	int naviCount        = 0;
	CI_LOOP(iNavi) { naviCount++; }
	switch (naviCount) {
	case 0: {
		bool olimarAlive    = false;
		Vector3f vec_0x1c30 = Vector3f(0.0f);

		f32 mapRotation = mapMgr->getMapRotation();
		Vector3f vec_0x1c24(-40.0f, 0.0f, 2.0f);
		if (gameSystem->isVersusMode()) {
			Onyon* redOnyon = ItemOnyon::mgr->getOnyon(Red);
			P2ASSERTLINE(2739, redOnyon);
			vec_0x1c24 = redOnyon->getPosition();
		} else {
			if (!mapMgr->getDemoMatrix()) {
				mapMgr->getStartPosition(vec_0x1c24, 0);
				vec_0x1c24.y = mapMgr->getMinY(vec_0x1c24) + 8.5f;
				vec_0x1c24.x += -4.526f;
				vec_0x1c24.z += 7.453f;
			} else {
				Matrixf* demoMtx = mapMgr->getDemoMatrix();
				Vector3f vec_0x1c78;
				PSMTXMultVec((PSQuaternion*)demoMtx, (Vec*)&vec_0x1c24, (Vec*)&vec_0x1c78);
				vec_0x1c24   = vec_0x1c78;
				vec_0x1c24.y = mapMgr->getMinY(vec_0x1c24);
				vec_0x1c30   = Vector3f(0.0f);
			}
		}
		Navi* olimar = naviMgr->birth();
		olimar->init(nullptr);
		olimar->mFaceDir = roundAng(mapRotation);
		olimar->setCamera(mOlimarCamera);
		olimar->setController(mControllerP1);
		olimar->setPosition(vec_0x1c24, false);
		olimar->setVelocity(vec_0x1c30);

		if (playData->mDeadNaviID & 1) {

			olimar->setDeadLaydown();
			olimarAlive = true;
		} else {
			olimar->mHealth = playData->mNaviLifeMax[0];
		}

		mapRotation = mapMgr->getMapRotation();
		vec_0x1c24  = Vector3f(-60.0f, 0.0f, -10.0f);
		if (gameSystem->isVersusMode()) {
			Onyon* blueOnyon = ItemOnyon::mgr->getOnyon(Blue);
			P2ASSERTLINE(2791, blueOnyon);
			vec_0x1c24 = blueOnyon->getPosition();
		} else {
			if (!mapMgr->getDemoMatrix()) {
				mapMgr->getStartPosition(vec_0x1c24, 0);
				vec_0x1c24.y = mapMgr->getMinY(vec_0x1c24) + 8.5f;
				vec_0x1c24.x += 18.082f;
				vec_0x1c24.z += -11.428f;
			} else {
				Matrixf* demoMtx = mapMgr->getDemoMatrix();
				Vector3f vec_0x1c78;
				PSMTXMultVec((PSQuaternion*)demoMtx, (Vec*)&vec_0x1c24, (Vec*)&vec_0x1c78);
				vec_0x1c24   = vec_0x1c78;
				vec_0x1c24.y = mapMgr->getMinY(vec_0x1c24);
				vec_0x1c30   = Vector3f(0.0f);
			}
		}
		Navi* louie = naviMgr->birth();
		louie->init(nullptr);

		louie->setCamera(mLouieCamera);

		louie->setController(mControllerP2);
		louie->mFaceDir = roundAng(mapRotation);
		louie->setPosition(vec_0x1c24, false);
		louie->setVelocity(vec_0x1c30);
		if (!(playData->mDeadNaviID >> 1 & 1)) {
			louie->mHealth = playData->mNaviLifeMax[1];
		}
		if (playData->mDeadNaviID & 2) {
			louie->setDeadLaydown();
			return;
		}
		if (!gameSystem->isMultiplayerMode() && !olimarAlive) {
			InteractFue callNavi(olimar, false, true); // don't combine parties, is new to party
			louie->stimulate(callNavi);
		}
		break;
	}

	case 1:
		JUT_PANICLINE(2853, "KESHIMASU!\n"); // erase?
		mapMgr->getMapRotation();
		Vector3f offset(-60.0f, 0.0f, 2.0f);
		JUT_ASSERTLINE(2859, mapMgr->getDemoMatrix(), "no demomatrix\n");
		Matrixf* mtx = mapMgr->getDemoMatrix();
		Vector3f pos;
		PSMTXMultVec(mtx->mMatrix.mtxView, (Vec*)&offset, (Vec*)&pos);
		offset       = pos;
		offset.y     = mapMgr->getMinY(offset) + 8.5f;
		Navi* olimar = naviMgr->getAt(NAVIID_Olimar);
		olimar->setCamera(mOlimarCamera);
		olimar->setController(mControllerP1);
		olimar = naviMgr->birth();
		olimar->init(nullptr);
		olimar->setCamera(mLouieCamera);
		olimar->setController(mControllerP2);
		olimar->setPosition(offset, false);
		break;

	case 2: {
		Navi* olimar = naviMgr->getAt(NAVIID_Olimar);
		olimar->setCamera(mOlimarCamera);
		olimar->setController(mControllerP1);
		Navi* louie = naviMgr->getAt(NAVIID_Louie);
		louie->setCamera(mLouieCamera);
		louie->setController(mControllerP2);
		break;
	}
	}
}

void BaseGameSection::advanceDayCount()
{
	int newDayCount = gameSystem->mTimeMgr->mDayCount + 1;
	if (newDayCount % 30 == 0) {
		for (int i = 0; i < 4; i++) {
			playData->mLimitGen[i].mLoops.all_zero();
		}
	}
	gameSystem->mTimeMgr->mDayCount = newDayCount;
}

void BaseGameSection::saveToGeneratorCache(CourseInfo* courseinfo)
{
	P2ASSERTLINE(2923, courseinfo);
	generatorCache->beginSave(courseinfo->mCourseIndex);
	FOREACH_NODE(Generator, generatorCache->getFirstGenerator(), node)
	{
		if (node->mReservedNum & 1) {
			generatorCache->saveGenerator(node);
		}
	}
	FOREACH_NODE(Generator, generatorCache->getFirstGenerator(), node)
	{
		if (node->mReservedNum & 1 && node->mReservedNum & 2) {
			generatorCache->saveCreature(node);
		}
	}
	generatorCache->savePikiheads();
	generatorCache->endSave();
}

void BaseGameSection::pmTogglePlayer()
{
	if (mPrevNaviIdx == NAVIID_Olimar) {
		setPlayerMode(NAVIID_Louie);
		moviePlayer->mViewport     = sys->mGfx->getViewport(PLAYER2_VIEWPORT);
		moviePlayer->mActingCamera = mLouieCamera;
	} else if (mPrevNaviIdx == NAVIID_Louie) {
		setPlayerMode(NAVIID_Olimar);
		moviePlayer->mViewport     = sys->mGfx->getViewport(PLAYER1_VIEWPORT);
		moviePlayer->mActingCamera = mOlimarCamera;
	}
	onTogglePlayer();
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void BaseGameSection::pmPlayerJoin()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8014D918
 * @note Size: 0x2B8
 */
void BaseGameSection::setPlayerMode(int mode)
{
	// this is a really dumb regswap
	Navi* fools[2];
	fools[0] = naviMgr->getAt(NAVIID_Olimar);
	fools[1] = naviMgr->getAt(NAVIID_Louie);
	fools[0]->disableController();
	fools[1]->disableController();

	switch (mode) {
	case NAVIID_Olimar: {
		mSecondViewportHeight = 1.0f;
		mSplit                = 0.0f;
		mSplitter->split2(1.0f);
		Matrixf* viewMtx = mLouieCamera->getViewMatrix(false);
		PSMTXCopy((PSQuaternion*)viewMtx, (PSQuaternion*)&mOlimarCamera->mCurViewMatrix);
		mOlimarCamera->update();
		cameraMgr->changePlayerMode(NAVIID_Olimar, cameraMgrCallback);
		if (mPlayerMode == 1) {
			Graphics* gfx = sys->mGfx;
			gfx->getViewport(PLAYER1_VIEWPORT)->setCamera(mOlimarCamera);
			gfx->getViewport(PLAYER2_VIEWPORT)->setCamera(mLouieCamera);
		}
		Viewport* olimarViewport    = sys->mGfx->getViewport(PLAYER1_VIEWPORT);
		sys->mGfx->mCurrentViewport = olimarViewport;
		mLightMgr->updatePosition(sys->mGfx->mCurrentViewport);
		break;
	}
	case NAVIID_Louie: {
		if (mPlayerMode == 1) {
			Graphics* gfx = sys->mGfx;

			gfx->getViewport(PLAYER1_VIEWPORT)->setCamera(mLouieCamera);
			gfx->getViewport(PLAYER2_VIEWPORT)->setCamera(mOlimarCamera);

			mSecondViewportHeight = 1.0f;
			mSplitter->split2(1.0f);
		} else {
			mSecondViewportHeight = 0.0f;
			mSplitter->split2(0.0f);
		}

		mSplit = 0.0f;

		Matrixf* viewMtx = mOlimarCamera->getViewMatrix(false);
		PSMTXCopy((PSQuaternion*)viewMtx, (PSQuaternion*)&mLouieCamera->mCurViewMatrix);

		mLouieCamera->update();
		cameraMgr->changePlayerMode(NAVIID_Louie, cameraMgrCallback);

		Viewport* louieViewport     = sys->mGfx->getViewport(PLAYER2_VIEWPORT);
		sys->mGfx->mCurrentViewport = louieViewport;
		mLightMgr->updatePosition(sys->mGfx->mCurrentViewport);
		break;
	}
	case NAVIID_Multiplayer: {
		mSecondViewportHeight = 0.5f;
		mSplit                = 0.0f;
		mSplitter->split2(0.5f);
		cameraMgr->changePlayerMode(NAVIID_Multiplayer, cameraMgrCallback);
		break;
	}
	}
	mPrevNaviIdx = mode;
}

/**
 * @note Address: 0x8014DBD4
 * @note Size: 0x14C
 */
void BaseGameSection::onCameraBlendFinished(CameraArg* arg)
{
	setCamController();
	if (gameSystem->isStoryMode()) {
		if (!playData->isDemoFlag(DEMO_First_Use_Louie) && playData->isDemoFlag(DEMO_Unlock_Captain_Switch)) {
			Navi* louie = naviMgr->getAt(NAVIID_Louie);
			JUT_ASSERTLINE(3088, louie, "louie null");
			MoviePlayArg louieStart("x05_louiestart", nullptr, nullptr, 0);
			louieStart.setTarget(louie);
			moviePlayer->mTargetObject = louie;
			moviePlayer->play(louieStart);
			playData->setDemoFlag(DEMO_First_Use_Louie);
		}
	}
}

/**
 * @note Address: 0x8014DD20
 * @note Size: 0x68
 */
void BaseGameSection::setFixNearFar(bool isFixed, f32 near, f32 far)
{
	mOlimarCamera->setFixNearFar(isFixed, near, far);
	mLouieCamera->setFixNearFar(isFixed, near, far);
}

/**
 * @note Address: 0x8014DD88
 * @note Size: 0x210
 */
void BaseGameSection::setCamController()
{
	Navi* navis[2];

	navis[NAVIID_Olimar] = naviMgr->getAt(NAVIID_Olimar);
	navis[NAVIID_Louie]  = naviMgr->getAt(NAVIID_Louie);

	switch (mPrevNaviIdx) {
	case NAVIID_Olimar: {
		PlayCamera* olimarCam              = mOlimarCamera;
		navis[NAVIID_Olimar]->mCamera      = olimarCam;
		navis[NAVIID_Olimar]->mCamera2     = olimarCam;
		Controller* olimarController       = mControllerP1;
		navis[NAVIID_Olimar]->mController1 = olimarController;
		navis[NAVIID_Olimar]->mController2 = olimarController;
		navis[NAVIID_Louie]->disableController();
		moviePlayer->mTargetNavi   = navis[NAVIID_Olimar];
		moviePlayer->mViewport     = sys->mGfx->getViewport(PLAYER1_VIEWPORT);
		moviePlayer->mActingCamera = mOlimarCamera;
		if (!gameSystem->isMultiplayerMode()) {
			PSSetCurCameraNo(NAVIID_Olimar);
			PSPlayerChangeToOrimer();
		}
		break;
	}
	case NAVIID_Louie: {
		navis[NAVIID_Olimar]->disableController();
		PlayCamera* louieCam              = mLouieCamera;
		navis[NAVIID_Louie]->mCamera      = louieCam;
		navis[NAVIID_Louie]->mCamera2     = louieCam;
		Controller* louieController       = mControllerP1;
		navis[NAVIID_Louie]->mController1 = louieController;
		navis[NAVIID_Louie]->mController2 = louieController;
		moviePlayer->mTargetNavi          = navis[NAVIID_Louie];
		moviePlayer->mViewport            = sys->mGfx->getViewport(PLAYER2_VIEWPORT);
		moviePlayer->mActingCamera        = mLouieCamera;
		if (!gameSystem->isMultiplayerMode()) {
			PSSetCurCameraNo(NAVIID_Louie);
			PSPlayerChangeToLugie();
		}
		break;
	}
	case NAVIID_Multiplayer: {
		PlayCamera* olimarCam              = mOlimarCamera;
		navis[NAVIID_Olimar]->mCamera      = olimarCam;
		navis[NAVIID_Olimar]->mCamera2     = olimarCam;
		Controller* olimarController       = mControllerP1;
		navis[NAVIID_Olimar]->mController1 = olimarController;
		navis[NAVIID_Olimar]->mController2 = olimarController;
		PlayCamera* louieCam               = mLouieCamera;
		navis[NAVIID_Louie]->mCamera       = louieCam;
		navis[NAVIID_Louie]->mCamera2      = louieCam;
		Controller* louieController        = mControllerP2;
		navis[NAVIID_Louie]->mController1  = louieController;
		navis[NAVIID_Louie]->mController2  = louieController;

		moviePlayer->mTargetNavi   = navis[NAVIID_Olimar];
		moviePlayer->mActingCamera = mOlimarCamera;
		if (gameSystem->isStoryMode()) {
			PSSetCurCameraNo(NAVIID_Olimar);
		}
		break;
	}
	}
	on_setCamController(mPrevNaviIdx);
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
int BaseGameSection::getNumWindows()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
int BaseGameSection::getActivePlayerID()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8014DF9C
 * @note Size: 0x184
 */
void BaseGameSection::setDefaultPSSceneInfo(PSGame::SceneInfo& sceneInfo)
{
	P2ASSERTLINE(3197, mOlimarCamera);
	P2ASSERTLINE(3198, mLouieCamera);

	sceneInfo.mCameras                     = 2;
	sceneInfo.mCam1Position[NAVIID_Olimar] = mOlimarCamera->getSoundPositionPtr();
	sceneInfo.mCam2Position[NAVIID_Olimar] = mOlimarCamera->getSoundPositionPtr();
	sceneInfo.mCameraMtx[NAVIID_Olimar]    = mOlimarCamera->getSoundMatrixPtr();
	sceneInfo.mCam1Position[NAVIID_Louie]  = mLouieCamera->getSoundPositionPtr();
	sceneInfo.mCam2Position[NAVIID_Louie]  = mLouieCamera->getSoundPositionPtr();
	sceneInfo.mCameraMtx[NAVIID_Louie]     = mLouieCamera->getSoundMatrixPtr();
	BoundBox box;

	mapMgr->getBoundBox(box);

	Vector3f min = box.mMin;
	Vector3f max = box.mMax;

	sceneInfo.mBounds.mMin.x = min.x;
	sceneInfo.mBounds.mMin.y = min.y;
	sceneInfo.mBounds.mMin.z = min.z;
	sceneInfo.mBounds.mMax.x = max.x;
	sceneInfo.mBounds.mMax.y = max.y;
	sceneInfo.mBounds.mMax.z = max.z;
}

/**
 * @note Address: 0x8014E130
 * @note Size: 0x68C
 */
void BaseGameSection::prepareHoleIn(Vector3f& suroundPos, bool killPikihead)
{
	Screen::gGame2DMgr->mScreenMgr->reset();
	Navi* aliveOrima = naviMgr->getAliveOrima(ALIVEORIMA_Active);
	if (killPikihead) {
		Iterator<ItemPikihead::Item> iPikihead = ItemPikihead::mgr;
		CI_LOOP(iPikihead)
		{
			ItemPikihead::Item* item = *iPikihead;
			if (item->isAlive()) {
				DeathMgr::inc(DeathCounter::COD_Battle);
				DeathMgr::inc(DeathCounter::COD_All);
				if (gameSystem->isChallengeMode()) {
					GameMessageVsPikminDead deadPikmin;
					// REALLY????? WHAT FILE ARE WE IN???
					gameSystem->mSection->sendMessage(deadPikmin);
				}
			}
		}
	}
	Iterator<Piki> iPiki = pikiMgr;
	CI_LOOP(iPiki)
	{
		Piki* piki = *iPiki;
		if (piki->getKind() != Bulbmin || piki->isPikmin()) {
			if (!piki->isZikatu()) {
				if (piki->getKind() == Bulbmin) {
					piki->getCurrActionID();
					piki->getStateID();
				}
				piki->endStick();
				piki->mFsm->transitForce(piki, PIKISTATE_Walk, nullptr);
				piki->getCreatureID();
				piki->mNavi   = aliveOrima;
				f32 randAngle = randFloat() * TAU;

				Vector3f suroundCircle(sinf(randAngle), 0, cosf(randAngle));

				Vector3f vec = Vector3f(sinf(randAngle) * 50.0f, 0.0f, cosf(randAngle) * 50.0f);
				vec += suroundPos;
				vec.y = mapMgr->getMinY(vec);
				piki->setPosition(vec, false);
				PikiAI::ActFormationInitArg arg(aliveOrima);
				arg.mIsDemoFollow = true;
				piki->mBrain->start(PikiAI::ACT_Formation, &arg);
				piki->movie_begin(false);
			}
		}
	}
	if (aliveOrima) {
		aliveOrima->demowaitAllPikis();
	}
}

/**
 * @note Address: 0x8014E7BC
 * @note Size: 0x714
 */
void BaseGameSection::prepareFountainOn(Vector3f& suroundPos)
{
	if (ItemBigFountain::mgr) {
		Iterator<BaseItem> iFountain = ItemBigFountain::mgr;
		CI_LOOP(iFountain)
		{
			ItemBigFountain::Item* fountain = static_cast<ItemBigFountain::Item*>(*iFountain);
			fountain->killAllEffect();
		}
	}
	Screen::gGame2DMgr->mScreenMgr->reset();
	Navi* aliveOrima = naviMgr->getAliveOrima(ALIVEORIMA_Active);

	Iterator<ItemPikihead::Item> iPikihead = ItemPikihead::mgr;
	CI_LOOP(iPikihead)
	{
		ItemPikihead::Item* item = *iPikihead;
		if (item->isAlive()) {
			DeathMgr::inc(DeathCounter::COD_Battle);
			DeathMgr::inc(DeathCounter::COD_All);
			if (gameSystem->isChallengeMode()) {
				GameMessageVsPikminDead deadPikmin;
				// OH MY FUCKING GOD NOT AGAIN
				gameSystem->mSection->sendMessage(deadPikmin);
			}
		}
	}
	PikiCond_ExceptChappyPikmin pikiCond;
	pikiMgr->moveAllPikmins(suroundPos, 50.0f, &pikiCond);
	Iterator<Piki> iPiki(pikiMgr, NULL, nullptr);

	CI_LOOP(iPiki)
	{
		Piki* piki = *iPiki;
		if (piki->getKind() == Bulbmin) {
			piki->movie_begin(false);
		} else {
			piki->endStick();
			piki->mFsm->transitForce(piki, PIKISTATE_Walk, nullptr);
			piki->getCreatureID();

			PikiAI::ActFormationInitArg arg(aliveOrima, false);

			piki->mNavi = aliveOrima;

			arg.mIsDemoFollow = true; // MAKE UP YOUR DAMN MIND I STG

			piki->mBrain->start(PikiAI::ACT_Formation, &arg);
			piki->movie_begin(false);
		}
	}
	if (aliveOrima) {
		aliveOrima->demowaitAllPikis();
	}
}

/**
 * @note Address: 0x8014EED0
 * @note Size: 0x74
 */
void BaseGameSection::initLights()
{
	mLightMgr           = new GameLightMgr("ゲームライトマネージャ"); // game light manager
	mLightMgr->mTimeMgr = gameSystem->mTimeMgr;
	addGenNode(mLightMgr);
	particleMgr->mLightMgr = mLightMgr;
}

/**
 * @note Address: 0x8014EF44
 * @note Size: 0x20
 */
void BaseGameSection::draw3D(Graphics& gfx) { newdraw_draw3D_all(gfx); }

/**
 * @note Address: 0x8014EF64
 * @note Size: 0x1D4
 */
void BaseGameSection::drawParticle(Graphics& gfx, int viewport)
{
	if (BaseHIOParms::sDrawParticle) {
		Viewport* port = gfx.getViewport(viewport);
		if (!port || !port->viewable()) {
			return;
		}

		port->setProjection();
		port->setViewport();
		if (!gameSystem->isMultiplayerMode() && mPrevNaviIdx != NAVIID_Multiplayer) {
			mLightMgr->mFogMgr->off(gfx);
			particleMgr->draw(port, 0);
			mLightMgr->mFogMgr->set(gfx);
		}
		if (moviePlayer && moviePlayer->isFlag(MVP_IsActive)) {
			for (u8 i = 3; i <= 5; i++) {
				particleMgr->draw(port, i);
			}
		}
		particleMgr->draw(port, 1);
		mLightMgr->mFogMgr->off(gfx);
		if (moviePlayer && moviePlayer->isFlag(MVP_IsActive)) {
			for (u8 i = 6; i <= 8; i++) {
				particleMgr->draw(port, i);
			}
		}
		particleMgr->draw(port, 2);
	}
}

/**
 * @note Address: 0x8014F138
 * @note Size: 0xA0
 */
void BaseGameSection::draw_Ogawa2D(Graphics& gfx)
{
	gfx.mPerspGraph.setPort();
	particle2dMgr->draw(true, 0);
	sys->mTimers->_start("2ddraw", true);
	Screen::gGame2DMgr->draw(gfx);
	sys->mTimers->_stop("2ddraw");
	gfx.mPerspGraph.setPort();
	particle2dMgr->draw(false, 0);
}

/**
 * @note Address: 0x8014F1D8
 * @note Size: 0x4
 */
void BaseGameSection::test_draw_treasure_detector() { }

/**
 * @note Address: 0x8014F1DC
 * @note Size: 0x1BC
 */
void BaseGameSection::draw2D(Graphics& gfx)
{
	j3dSys.reinitGX();
	gfx.mOrthoGraph.setPort();
	draw_Ogawa2D(gfx);
	if (mXfbTexture2d) {
		mXfbTexture2d->capture(mXfbBounds2dX, mXfbBounds2dY, GX_TF_RGB565, false, 0);
	}
	if (!mXfbTexture2d && mXfbFlags & 2) {
		mXfbImage->capture(mXfbBoundsX, mXfbBoundsY, GX_TF_RGB565, true, 0);
		mXfbFlags &= ~2;
		mXfbFlags |= 1;
		mXfbFlags |= 4;
	}
	Screen::gGame2DMgr->drawIndirect(gfx);
	gfx.mOrthoGraph.setPort();
	J2DPrint print(JFWSystem::systemFont, 0.0f);
	print.initiate();
	print.setCharColor(JUtility::TColor(158, 219, 255, 255));
	print.setGradColor(JUtility::TColor(56, 159, 247, 255));
	JKRHeap::sCurrentHeap->getFreeSize();
	// print was likely showing how much head space was left
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void BaseGameSection::setupViewportMatrix(Graphics&)
{
	JUT_PANICLINE(0, "DON'T USE THIS !\n");
	JUT_PANICLINE(0, "使ってないかも\n");
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8014F398
 * @note Size: 0xB8
 */
void BaseGameSection::directDraw(Graphics& gfx, Viewport* vp)
{
	vp->setViewport();
	vp->setProjection();
	gfx.initPrimDraw(vp->getMatrix(true));
	doDirectDraw(gfx, vp);
	if (TexCaster::Mgr::sInstance) {
		gfx.initPrimDraw(vp->getMatrix(true));
		mLightMgr->mFogMgr->set(gfx);
		TexCaster::Mgr::sInstance->draw(gfx);
	}
}

/**
 * @note Address: 0x8014F450
 * @note Size: 0x78
 */
void BaseGameSection::directDrawPost(Graphics& gfx, Viewport* vp)
{
	vp->setViewport();
	vp->setProjection();
	gfx.initPrimDraw(vp->getMatrix(true));
	doDirectDrawPost(gfx, vp);
}

/**
 * @note Address: N/A
 * @note Size: 0x140
 */
void BaseGameSection::j3dDraw(Viewport*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void BaseGameSection::j3dDrawPostShadow(Viewport*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void BaseGameSection::j3dDrawObjectLast(Viewport*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void BaseGameSection::j3dDrawPost(Viewport*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void BaseGameSection::j3dDrawLast(Viewport*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8014F4C8
 * @note Size: 0x54
 */
void BaseGameSection::j3dSetView(Viewport* vp, bool b)
{
	vp->setJ3DViewMtx(b);
	doSetView(vp->mVpId);
	doViewCalc();
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void BaseGameSection::j3dViewCalc(Viewport*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8014F51C
 * @note Size: 0x30
 */
void BaseGameSection::doSimulation(f32 rate) { gameSystem->doSimulation(rate); }

/**
 * @note Address: 0x8014F54C
 * @note Size: 0x30
 */
void BaseGameSection::doSimpleDraw(Viewport* vp) { gameSystem->doSimpleDraw(vp); }

/**
 * @note Address: 0x8014F57C
 * @note Size: 0x1D8
 */
void BaseGameSection::doAnimation()
{
	Navi* olimar = naviMgr->getAt(NAVIID_Olimar);
	if (!gameSystem->isZukanMode() && generatorMgr) {
		Vector3f olimarPos = olimar->getPosition();
		generatorMgr->updateCursorPos(olimarPos);
		onceGeneratorMgr->updateCursorPos(olimarPos);
		limitGeneratorMgr->updateCursorPos(olimarPos);
		plantsGeneratorMgr->updateCursorPos(olimarPos);
		dayGeneratorMgr->updateCursorPos(olimarPos);
	}

	if (testPathfinder) {
		testPathfinder->update();
	}

	sys->mTimers->_start("gameSys-da", true);
	gameSystem->doAnimation();
	sys->mTimers->_stop("gameSys-da");

	if (particleMgr && !gameSystem->mIsFrozen) {
		particleMgr->doAnimation();
	}

	if (!gameSystem->isZukanMode() && generatorMgr) {
		generatorMgr->doAnimation();
		onceGeneratorMgr->doAnimation();
		limitGeneratorMgr->doAnimation();
		plantsGeneratorMgr->doAnimation();
		dayGeneratorMgr->doAnimation();
	}

	if (!gameSystem->isZukanMode()) {
		updateSplitter();
	}
}

/**
 * @note Address: 0x8014F754
 * @note Size: 0x4C
 */
void BaseGameSection::changeGeneratorCursor(Vector3f& vec) { naviMgr->getAt(NAVIID_Olimar)->setPosition(vec, false); }

/**
 * @note Address: 0x8014F7A0
 * @note Size: 0xC8
 */
void BaseGameSection::doEntry()
{
	setDrawBuffer(DB_NormalLayer);
	sys->mTimers->_start("ENT-GSYS", true);
	gameSystem->doEntry();
	sys->mTimers->_stop("ENT-GSYS");
	sys->mTimers->_start("ENT-REST", true);
	if (particleMgr) {
		setDrawBuffer(DB_NormalFogOffLayer);
		particleMgr->doEntry();
	}
	sys->mTimers->_stop("ENT-REST");
}

/**
 * @note Address: 0x8014F868
 * @note Size: 0x100
 */
void BaseGameSection::doSetView(int viewportNumber)
{
	if (mPlayerMode == 1)
		viewportNumber = 0;

	gameSystem->doSetView(viewportNumber);
	if (particleMgr) {
		particleMgr->doSetView(viewportNumber);
	}
	if (!gameSystem->isZukanMode() && generatorMgr) {
		generatorMgr->doSetView(viewportNumber);
		onceGeneratorMgr->doSetView(viewportNumber);
		limitGeneratorMgr->doSetView(viewportNumber);
		plantsGeneratorMgr->doSetView(viewportNumber);
		dayGeneratorMgr->doSetView(viewportNumber);
	}
}

/**
 * @note Address: 0x8014F968
 * @note Size: 0xC8
 */
void BaseGameSection::doViewCalc()
{
	gameSystem->doViewCalc();
	if (particleMgr) {
		particleMgr->doViewCalc();
	}
	if (!gameSystem->isZukanMode() && generatorMgr) {
		generatorMgr->doViewCalc();
		onceGeneratorMgr->doViewCalc();
		limitGeneratorMgr->doViewCalc();
		plantsGeneratorMgr->doViewCalc();
		dayGeneratorMgr->doViewCalc();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void BaseGameSection::initBlendCamera()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8014FA30
 * @note Size: 0x174
 */
void BaseGameSection::updateBlendCamera()
{
	if (mPrevNaviIdx == NAVIID_Olimar) {
		mBlendFactor -= sys->mDeltaTime / 0.2f;
		if (mBlendFactor < 0.0f) {
			mBlendFactor         = 0.0f;
			mIsBlendCameraActive = false;
			mSplitter->split2(1.0f);
		}

	} else {
		mBlendFactor += sys->mDeltaTime / 0.2f;
		if (mBlendFactor > 1.0f) {
			mBlendFactor         = 1.0f;
			mIsBlendCameraActive = false;
			if (mPlayerMode == 1) {
				mSplitter->split2(1.0f);
			} else {
				mSplitter->split2(0.0f);
			}
		}
	}

	if (mBlendCamera) {
		mBlendCamera->setBlendFactor(mBlendFactor);
		mBlendCamera->update();
	}
	if (!mIsBlendCameraActive) {
		Graphics* gfx = sys->mGfx;
		gfx->getViewport(PLAYER1_VIEWPORT)->setCamera(mOlimarCamera);
		gfx->getViewport(PLAYER2_VIEWPORT)->setCamera(mLouieCamera);
		setCamController();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
void BaseGameSection::blend1to2()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
void BaseGameSection::blend2to1()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8014FBA4
 * @note Size: 0x6C
 */
void BaseGameSection::setSplitter(bool flag)
{
	if (flag) {
		mSecondViewportHeight = 0.5f;
		mSetSplit             = true;
	} else {
		mSecondViewportHeight = 1.0f;
		mSetSplit             = false;
	}
	mSplit = 0.0f;
	mSplitter->split2(mSecondViewportHeight);
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void BaseGameSection::startSplit()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void BaseGameSection::changeSplit()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void BaseGameSection::endSplit()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8014FC10
 * @note Size: 0x134
 */
void BaseGameSection::updateSplitter()
{
	if (mSplit == 0.0f && moviePlayer->mDemoState == DEMOSTATE_Inactive && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
		return;
	}

	mSecondViewportHeight += mSplit * sys->mDeltaTime;
	int id = mPrevNaviIdx;
	if (id == NAVIID_Multiplayer && mSecondViewportHeight <= 0.5f) {
		mSecondViewportHeight = 0.5f;
		mSplit                = 0.0f;
		mSetSplit             = true;
		setCamController();
	} else if (id == NAVIID_Olimar && mSecondViewportHeight >= 1.0f) {
		mSecondViewportHeight = 1.0f;
		mSplit                = 0.0f;
		mSetSplit             = false;
		setCamController();
	} else if (id == NAVIID_Louie && mSecondViewportHeight <= 0.0f) {
		mSecondViewportHeight = 0.0f;
		mSplit                = 0.0f;
		setCamController();
	}

	if (mSplitter) {
		mSplitter->split2(mSecondViewportHeight);
	}
}

/**
 * @note Address: 0x8014FD44
 * @note Size: 0x58
 */
void BaseGameSection::doDirectDrawPost(Graphics& gfx, Viewport*)
{
	if (lifeGaugeMgr) {
		lifeGaugeMgr->draw(gfx);
	}
	if (carryInfoMgr) {
		carryInfoMgr->draw(gfx);
	}
}

/**
 * @note Address: 0x8014FD9C
 * @note Size: 0x4
 */
void BaseGameSection::doDirectDraw(Graphics&, Viewport*) { }

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void BaseGameSection::startHeap()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8014FDA4
 * @note Size: 0x2A8
 */
void BaseGameSection::clearHeap()
{
	TexCaster::Mgr::deleteInstance();
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	mgr->deleteCurrentScene();
	GXWaitDrawDone();
	itemMgr->clearGlobalPointers();
	platCellMgr = nullptr;
	cellMgr     = nullptr;
	mOpaqueDrawBuffer->frameInitAll();
	mTransparentDrawBuffer->frameInitAll();
	particleMgr->killAll();
	particleMgr->reset();
	Generator::initialiseSystem();
	mOlimarCamera->del();
	mLouieCamera->del();
	rumbleMgr->del();
	cameraMgr->del();
	shadowMgr->del();
	generatorMgr->del();
	onceGeneratorMgr->del();
	limitGeneratorMgr->del();
	plantsGeneratorMgr->del();
	dayGeneratorMgr->del();
	itemMgr->del();
	if (generalEnemyMgr)
		generalEnemyMgr->del();
	mLightMgr->del();
	naviMgr->resetMgr();
	pikiMgr->resetMgr();
	pelletMgr->resetMgrs();
	dynParticleMgr->resetMgr();

	gameSystem->detachObjectMgr(generalEnemyMgr);
	gameSystem->detachObjectMgr(mapMgr);
	gameSystem->detachObjectMgr(itemMgr);
	gameSystem->detachObjectMgr(mapMgr); // remove mapMgr twice for some reason
	mapMgr = nullptr;
	onClearHeap();
	mapMgr       = nullptr;
	platMgr      = nullptr;
	cameraMgr    = nullptr;
	shadowMgr    = nullptr;
	carryInfoMgr = nullptr;
	lifeGaugeMgr = nullptr;
	mBlendCamera = nullptr;
	if (mControllerP1) {
		delete mControllerP1;
	}
	if (mControllerP2) {
		delete mControllerP2;
	}
	mControllerP2 = nullptr;
	mControllerP1 = nullptr;
	mLouieCamera  = nullptr;
	mOlimarCamera = nullptr;

	rumbleMgr           = nullptr;
	cameraMgr           = nullptr;
	itemMgr             = nullptr;
	generalEnemyMgr     = nullptr;
	testPathfinder      = nullptr;
	mTreasureZoomCamera = nullptr;

	mTheExpHeap->destroy();
	mTheExpHeap = nullptr;
	theExpHeap  = nullptr;
	mBackupHeap->becomeCurrentHeap();
	JKRGetCurrentHeap()->getFreeSize();
}

/**
 * @note Address: 0x801500B0
 * @note Size: 0x2C
 */
void BaseGameSection::startFadeout(f32 time)
{
	mDisplayWiper = mWipeOutFader;
	mWipeOutFader->start(time);
}

/**
 * @note Address: 0x801500DC
 * @note Size: 0x2C
 */
void BaseGameSection::startFadein(f32 time)
{
	mDisplayWiper = mWipeInFader;
	mWipeInFader->start(time);
}

/**
 * @note Address: 0x80150108
 * @note Size: 0x2C
 */
void BaseGameSection::startFadeoutin(f32 time)
{
	mDisplayWiper = mWipeOutInFader;
	mWipeOutInFader->start(time);
}

/**
 * @note Address: 0x80150134
 * @note Size: 0x3C
 */
void BaseGameSection::startFadeblack()
{
	mDisplayWiper         = mBlackFader;
	mBlackFader->mIsBlack = true;
	mBlackFader->start(999.0f);
}

/**
 * @note Address: 0x80150170
 * @note Size: 0x3C
 */
void BaseGameSection::startFadewhite()
{
	mDisplayWiper         = mBlackFader;
	mBlackFader->mIsBlack = false;
	mBlackFader->start(999.0f);
}

/**
 * @note Address: 0x801501AC
 * @note Size: 0x1C0
 */
void BaseGameSection::setupFixMemory()
{
	Delegate<BaseGameSection>* delegate = new Delegate<BaseGameSection>(this, setupFixMemory_dvdload);

	beginFrame();
	beginRender();
	j3dSys.drawInit();
	GXSetViewport(0.0f, 0.0f, 608.0f, 480.0f, 0.0f, 1.0f);
	GXSetScissor(0, 16, 608, 448);
	endRender();
	sys->dvdLoadUseCallBack(&mDvdThreadCommand, delegate);
	waitSyncLoad(false); // inlines waitSyncLoad
}

/**
 * @note Address: 0x8015036C
 * @note Size: 0x334
 */
void BaseGameSection::setupFixMemory_dvdload()
{
	sys->heapStatusStart("setupFixMemory", nullptr);

	ResTIMG* file = static_cast<ResTIMG*>(JKRDvdRipper::loadToMainRAM("user/Kando/mizu.bti", nullptr, Switch_0, 0, nullptr,
	                                                                  JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, nullptr));
	mMizuTexture  = new JUTTexture(file);
	sys->heapStatusStart("fbTexture", nullptr);

	mXfbImage = new JUTTexture((System::getRenderModeWidth() >> 1) & 0x7FFF, (System::getRenderModeHeight() >> 1) & 0x7FFF, GX_TF_RGB565);
	gameSystem->mXfbTexture = mXfbImage;

	sys->heapStatusEnd("fbTexture");

	sys->heapStatusStart("particle", nullptr);
	ParticleMgr::globalInstance();
	particleMgr->createHeap(0x180000);
	particleMgr->createMgr("user/Ebisawa/effect/game.jpc", 2000, 300, 0x80);
	addGenNode(particleMgr);

	TParticle2dMgr::globalInstance();
	particle2dMgr->createHeap(256000);
	particle2dMgr->createMgr("user/Ebisawa/effect/eff2d_game2d.jpc", 0x1d4, 0x28, 0x80);
	addGenNode(particle2dMgr);

	particleMgr->beginEntryModelEffect();
	efx::OnyonSpotData* spot = new efx::OnyonSpotData;
	spot->entry();
	particleMgr->endEntryModelEffect();
	// Instance_TPkEffectMgr isn't static, checked particleMgr.o
	particleMgr->Instance_TPkEffectMgr();

	sys->heapStatusEnd("particle");
	collisionUpdateMgr = new UpdateMgr;
	collisionUpdateMgr->create(3);

	sys->heapStatusStart("navi-piki", nullptr);
	naviMgr = new NaviMgr;
	gameSystem->addObjectMgr(naviMgr);
	naviMgr->loadResources();

	pikiMgr = new PikiMgr;
	gameSystem->addObjectMgr(pikiMgr);

	addGenNode(pikiMgr);
	addGenNode(naviMgr);
	pikiMgr->loadResources(mPlayerMode);
	sys->heapStatusEnd("navi-piki");

	pelletMgr = new PelletMgr;
	pelletMgr->createManagers(nullptr);
	gameSystem->addObjectMgr(pelletMgr);

	createScreenRootNode();
	sys->heapStatusEnd("setupFixMemory");
}

} // namespace Game

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void BaseGameAllocCallback(u32, int, JKRHeap*, void*)
{
	JUT_PANIC("allocation dameck!\n%d/%d");
	// UNUSED FUNCTION
}

namespace Game {

/**
 * @note Address: 0x80150700
 * @note Size: 0x8
 */
bool BaseGameSection::enableAllocHalt() { return false; }

/**
 * @note Address: 0x80150708
 * @note Size: 0x8
 */
bool BaseGameSection::disableAllocHalt() { return false; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
bool BaseGameSection::isAllocHalt()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80150710
 * @note Size: 0xCC0
 */
void BaseGameSection::setupFloatMemory()
{
	bool cave = false;
	gameSystem->mFlags.typeView &= 0xFE; // this matches, but it's a bit odd

	PSSystem::SingletonBase<PSM::ObjMgr>::newInstance();
	PSSystem::SingletonBase<PSM::BossBgmFader::Mgr>::newInstance();

	mTheExpHeap = JKRExpHeap::create(JKRGetCurrentHeap()->getFreeSize(), JKRGetCurrentHeap(), true);
	theExpHeap  = mTheExpHeap;
	mBackupHeap = mTheExpHeap->becomeCurrentHeap();
	onStartHeap();

	sys->heapStatusStart("setupFloatMemory", nullptr);
	naviMgr->loadResources_float();
	lifeGaugeMgr = new LifeGaugeMgr;
	lifeGaugeMgr->loadResource();

	if (gameSystem->isStoryMode()) {
		carryInfoMgr = new CarryInfoMgr(48);
	} else {
		carryInfoMgr = new CarryInfoMgr(64);
	}
	carryInfoMgr->loadResource();

	platMgr   = new PlatMgr;
	shadowMgr = new ShadowMgr(2);
	addGenNode(shadowMgr);
	initLights();

	naviMgr->alloc(2);

	Navi* p1 = naviMgr->getAt(NAVIID_Olimar);
	Navi* p2 = naviMgr->getAt(NAVIID_Louie);

	mControllerP1 = new Controller(JUTGamePad::PORT_0);
	mControllerP2 = new Controller(JUTGamePad::PORT_1);
	mOlimarCamera = new PlayCamera(p1);
	mLouieCamera  = new PlayCamera(p2);
	cameraMgr     = new CameraMgr;
	cameraMgr->loadResource();
	addGenNode(cameraMgr);

	Camera* cams[2]      = { mOlimarCamera, mLouieCamera };
	mBlendCamera         = new BlendCamera(2, cams);
	mIsBlendCameraActive = false;
	mLightMgr->mCamera   = mOlimarCamera;

	rumbleMgr = new RumbleMgr;
	rumbleMgr->loadResource();
	rumbleMgr->init();
	addGenNode(rumbleMgr);

	bool incave = false;
	if (gameSystem->mIsInCave) {
		incave = true;
	}
	sys->heapStatusStart("itemMgr", nullptr);
	itemMgr = new ItemMgr;
	if (isDevelopSection()) {
		itemMgr->createManagers(3);
	} else if (incave) {
		itemMgr->createManagers(1);
	} else {
		itemMgr->createManagers(2);
	}
	gameSystem->addObjectMgr(itemMgr);
	addGenNode(itemMgr);
	sys->heapStatusEnd("itemMgr");

	sys->heapStatusStart("Pikmin-PikiClass", nullptr);
	pikiMgr->alloc(MAX_PIKI_COUNT);
	sys->heapStatusEnd("Pikmin-PikiClass");

	generalEnemyMgr = new GeneralEnemyMgr;
	gameSystem->addObjectMgr(generalEnemyMgr);
	addGenNode(generalEnemyMgr);
	onSetupFloatMemory();

	// no mapMgr means in cave
	if (!mapMgr) {
		cave = true;
		char path[512];
		sprintf(path, "user/Mukki/mapunits/caveinfo/%s", getCaveFilename());
		getCaveFilename();
		Cave::CaveInfo* info       = Cave::CaveInfo::load(path);
		Cave::EditMapUnit* mapunit = nullptr;
		if (gameSystem->isVersusMode()) {
			if (strcmp("random", getEditorFilename())) {
				sprintf(path, "user/Abe/vs/%s", getEditorFilename());
				mapunit = new Cave::EditMapUnit;
				mapunit->read(path);
				mapunit->setEditNumber(getVsEditNumber());
			}
		}
		if (challengeDisablePelplant()) {
			info->disablePelplant();
		}
		mapMgr = new RoomMapMgr(info);
		sys->heapStatusStart("mapMgr", nullptr);
		static_cast<RoomMapMgr*>(mapMgr)->createRandomMap(getCurrFloor(), mapunit);
		sys->heapStatusEnd("mapMgr");
		gameSystem->addObjectMgr(mapMgr);

		if (gameSystem->isVersusMode()) {
			GameMessageVsAddEnemy mesg1(EnemyTypeID::EnemyID_Hanachirashi, 4);
			sendMessage(mesg1);

			GameMessageVsAddEnemy mesg2(EnemyTypeID::EnemyID_Sarai, 4);
			sendMessage(mesg2);

			GameMessageVsAddEnemy mesg3(EnemyTypeID::EnemyID_Rock, 12);
			sendMessage(mesg3);

			GameMessageVsAddEnemy mesg4(EnemyTypeID::EnemyID_BombOtakara, 2);
			sendMessage(mesg4);

			GameMessageVsAddEnemy mesg5(EnemyTypeID::EnemyID_Tank, 4);
			sendMessage(mesg5);

			GameMessageVsAddEnemy mesg6(EnemyTypeID::EnemyID_Wtank, 4);
			sendMessage(mesg6);

			GameMessageVsAddEnemy mesg7(EnemyTypeID::EnemyID_Tobi, 20);
			sendMessage(mesg7);
		}

		sys->heapStatusStart("CellMgr", nullptr);

		BoundBox2d bounds(FLOAT_DIST_MAX, FLOAT_DIST_MAX, FLOAT_DIST_MIN, FLOAT_DIST_MIN);
		mapMgr->getBoundBox2d(bounds);
		sys->heapStatusStart("PlatCellMgr", nullptr);
		platCellMgr = new CellPyramid;
		platCellMgr->create(bounds, 128.0f);
		sys->heapStatusEnd("PlatCellMgr");

		BoundBox2d bounds2(FLOAT_DIST_MAX, FLOAT_DIST_MAX, FLOAT_DIST_MIN, FLOAT_DIST_MIN);
		mapMgr->getBoundBox2d(bounds2);
		sys->heapStatusStart("MapRoomCellMgr", nullptr);
		mapRoomCellMgr = new CellPyramid;
		mapRoomCellMgr->create(bounds2, 170.0f);
		sys->heapStatusEnd("MapRoomCellMgr");

		static_cast<RoomMapMgr*>(mapMgr)->entryToMapRoomCellMgr();
		static_cast<RoomMapMgr*>(mapMgr)->createGlobalCollision();
		sys->heapStatusEnd("CellMgr");

		generalEnemyMgr->allocateEnemys(mPlayerMode, -1);
		generalEnemyMgr->setupSoundViewerAndBas();

		pelletMgr->setupResources();
		if (getCurrFloor() == 0) {
			playData->mCaveSaveData.mIsWaterwraithAlive = true;
		}
		TexCaster::Mgr::globalInstance();
		mapMgr->mRouteMgr->setCloseAll();
	} else {
		TexCaster::Mgr::globalInstance();
	}

	if (mapMgr->mRouteMgr) {
		testPathfinder = new Pathfinder;
		testPathfinder->create(100, mapMgr->mRouteMgr);
	} else {
		testPathfinder = nullptr;
	}

	if (mapMgr->mRouteMgr) {
		mapMgr->mRouteMgr->refreshWater();
	}

	sys->heapStatusStart("CellMgr", nullptr);
	cellMgr = new CellPyramid;
	BoundBox2d bounds(FLOAT_DIST_MAX, FLOAT_DIST_MAX, FLOAT_DIST_MIN, FLOAT_DIST_MIN);
	mapMgr->getBoundBox2d(bounds);
	JKRGetCurrentHeap()->getFreeSize();
	cellMgr->create(bounds, 108.0f);
	if (!cave) {
		sys->heapStatusStart("PlatCellMgr", nullptr);
		platCellMgr = new CellPyramid;
		platCellMgr->create(bounds, 128.0f);
		sys->heapStatusEnd("PlatCellMgr");
	}
	sys->heapStatusEnd("CellMgr");

	if (cave) {
		static_cast<RoomMapMgr*>(mapMgr)->placeObjects();
	}

	Graphics& gfx = *sys->getGfx();
	initViewports(gfx);
	particleMgr->setViewport(gfx);
	particleMgr->start();

	initGenerators();

	itemMgr->initDependency();
	cameraMgr->init(CAMNAVI_Olimar);

	f32 angle = TORADIANS(_aiConstants->mCameraAngle.mData);
	angle     = roundAng(angle + mapMgr->getMapRotation());
	mapMgr->getMapRotation();
	cameraMgr->setCameraAngle(angle, CAMNAVI_Both);

	cameraMgr->controllerUnLock(CAMNAVI_Both);
	sys->heapStatusEnd("setupFloatMemory");

	pikiMgr->setupSoundViewerAndBas();
	naviMgr->setupSoundViewerAndBas();
	itemMgr->setupSoundViewerAndBas();
	pelletMgr->setupSoundViewerAndBas();

	onSetSoundScene();
	gameSystem->setFlag(GAMESYS_IsSoundFXActive);
	if (Farm::farmMgr) {
		Farm::farmMgr->setupSound();
	}
	OSReport("<float> Done\n"); // anyone else who changes this to f32 gets 40 years in the dungeon

	/*
	stwu     r1, -0x2c0(r1)
	mflr     r0
	stw      r0, 0x2c4(r1)
	stfd     f31, 0x2b0(r1)
	psq_st   f31, 696(r1), 0, qr0
	stmw     r27, 0x29c(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	lis      r5, lbl_8047C948@ha
	mr       r31, r3
	li       r29, 0
	lbz      r0, 0x3c(r4)
	addi     r30, r5, lbl_8047C948@l
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x3c(r4)
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	beq      lbl_80150768
	addi     r3, r30, 0x380
	addi     r5, r30, 0x70
	li       r4, 0x76
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80150768:
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	bne      lbl_801507DC
	li       r3, 0x30
	bl       __nw__FUl
	or.      r5, r3, r3
	beq      lbl_801507D8
	mr       r27, r5
	bl       initiate__10JSUPtrListFv
	lis      r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@ha
	addic.   r4, r27, 0xc
	addi     r0, r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@l
	stw      r0, 0xc(r27)
	beq      lbl_801507A4
	addi     r4, r4, -12

lbl_801507A4:
	stw      r4,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) addi     r3,
r27, 0x10 bl       __ct__11JKRDisposerFv lis      r3, __vt__Q23PSM6ObjMgr@ha li
r0, 0 addi     r3, r3, __vt__Q23PSM6ObjMgr@l mr       r5, r27 stw      r3,
0x28(r27) addi     r4, r3, 8 addi     r3, r3, 0x14 stw      r4, 0xc(r27) stw r3,
0x10(r27) stw      r0, 0x2c(r27)

lbl_801507D8:
	stw      r5,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)

lbl_801507DC:
	lwz      r0,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r0, 0
	bne      lbl_801507FC
	addi     r3, r30, 0x380
	addi     r5, r30, 0x70
	li       r4, 0x79
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801507FC:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8015081C
	addi     r3, r30, 0x380
	addi     r5, r30, 0x70
	li       r4, 0x76
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8015081C:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80150844
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150840
	bl       __ct__Q33PSM12BossBgmFader3MgrFv
	mr       r0, r3

lbl_80150840:
	stw      r0,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)

lbl_80150844:
	lwz      r0,
"sInstance__Q28PSSystem39SingletonBase<Q33PSM12BossBgmFader3Mgr>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80150864
	addi     r3, r30, 0x380
	addi     r5, r30, 0x70
	li       r4, 0x79
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80150864:
	lwz      r28, sCurrentHeap__7JKRHeap@sda21(r13)
	mr       r3, r28
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r28
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0xfc(r31)
	lwz      r0, 0xfc(r31)
	stw      r0, theExpHeap@sda21(r13)
	lwz      r3, 0xfc(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	stw      r3, 0x100(r31)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x38c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       loadResources_float__Q24Game7NaviMgrFv
	li       r3, 0x94
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801508D8
	bl       __ct__12LifeGaugeMgrFv
	mr       r0, r3

lbl_801508D8:
	stw      r0, lifeGaugeMgr@sda21(r13)
	mr       r3, r0
	bl       loadResource__12LifeGaugeMgrFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_80150918
	li       r3, 0xec
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150910
	li       r4, 0x30
	bl       __ct__12CarryInfoMgrFi
	mr       r0, r3

lbl_80150910:
	stw      r0, carryInfoMgr@sda21(r13)
	b        lbl_80150938

lbl_80150918:
	li       r3, 0xec
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150934
	li       r4, 0x40
	bl       __ct__12CarryInfoMgrFi
	mr       r0, r3

lbl_80150934:
	stw      r0, carryInfoMgr@sda21(r13)

lbl_80150938:
	lwz      r3, carryInfoMgr@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150964
	bl       __ct__Q24Game7PlatMgrFv
	mr       r0, r3

lbl_80150964:
	stw      r0, platMgr__4Game@sda21(r13)
	li       r3, 0x50
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80150984
	li       r4, 2
	bl       __ct__Q24Game9ShadowMgrFi
	mr       r4, r3

lbl_80150984:
	stw      r4, shadowMgr__4Game@sda21(r13)
	mr       r3, r31
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x108(r12)
	mtctr    r12
	bctrl
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 2
	bl       "alloc__27MonoObjectMgr<Q24Game4Navi>Fi"
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	mr       r28, r0
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	li       r3, 0xb0
	mr       r27, r0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150A0C
	li       r4, 0
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_80150A0C:
	stw      r0, 0x10c(r31)
	li       r3, 0xb0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150A2C
	li       r4, 1
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_80150A2C:
	stw      r0, 0x110(r31)
	li       r3, 0x254
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150A4C
	mr       r4, r28
	bl       __ct__Q24Game10PlayCameraFPQ24Game4Navi
	mr       r0, r3

lbl_80150A4C:
	stw      r0, 0x104(r31)
	li       r3, 0x254
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150A6C
	mr       r4, r27
	bl       __ct__Q24Game10PlayCameraFPQ24Game4Navi
	mr       r0, r3

lbl_80150A6C:
	stw      r0, 0x108(r31)
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150A88
	bl       __ct__Q24Game9CameraMgrFv
	mr       r0, r3

lbl_80150A88:
	stw      r0, cameraMgr__4Game@sda21(r13)
	mr       r3, r0
	bl       loadResource__Q24Game9CameraMgrFv
	lwz      r4, cameraMgr__4Game@sda21(r13)
	mr       r3, r31
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r4, lbl_80520E58@sda21(r2)
	li       r3, 0x180
	lwz      r0, lbl_80520E5C@sda21(r2)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r0, 0x104(r31)
	stw      r0, 8(r1)
	lwz      r0, 0x108(r31)
	stw      r0, 0xc(r1)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150AE0
	addi     r5, r1, 8
	li       r4, 2
	bl       __ct__11BlendCameraFiPP6Camera
	mr       r0, r3

lbl_80150AE0:
	stw      r0, 0x50(r31)
	li       r0, 0
	li       r3, 0x34
	stb      r0, 0x58(r31)
	lwz      r0, 0x104(r31)
	lwz      r4, 0x128(r31)
	stw      r0, 0x233c(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150B10
	bl       __ct__Q24Game9RumbleMgrFv
	mr       r0, r3

lbl_80150B10:
	stw      r0, rumbleMgr__4Game@sda21(r13)
	mr       r3, r0
	bl       loadResource__Q24Game9RumbleMgrFv
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	bl       init__Q24Game9RumbleMgrFv
	lwz      r4, rumbleMgr__4Game@sda21(r13)
	mr       r3, r31
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r27, 0
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80150B48
	li       r27, 1

lbl_80150B48:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518580@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150B70
	bl       __ct__Q24Game7ItemMgrFv
	mr       r0, r3

lbl_80150B70:
	stw      r0, itemMgr__4Game@sda21(r13)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80150BA0
	lwz      r3, itemMgr__4Game@sda21(r13)
	li       r4, 3
	bl       createManagers__Q24Game7ItemMgrFUl
	b        lbl_80150BC4

lbl_80150BA0:
	clrlwi.  r0, r27, 0x18
	beq      lbl_80150BB8
	lwz      r3, itemMgr__4Game@sda21(r13)
	li       r4, 1
	bl       createManagers__Q24Game7ItemMgrFUl
	b        lbl_80150BC4

lbl_80150BB8:
	lwz      r3, itemMgr__4Game@sda21(r13)
	li       r4, 2
	bl       createManagers__Q24Game7ItemMgrFUl

lbl_80150BC4:
	lwz      r4, itemMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80150BD4
	addi     r4, r4, 0x1c

lbl_80150BD4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, itemMgr__4Game@sda21(r13)
	mr       r3, r31
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518580@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3a0
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0x64
	bl       "alloc__27MonoObjectMgr<Q24Game4Piki>Fi"
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3a0
	bl       heapStatusEnd__6SystemFPc
	li       r3, 0x90
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80150C34
	bl       __ct__Q24Game15GeneralEnemyMgrFv
	mr       r4, r3

lbl_80150C34:
	stw      r4, generalEnemyMgr__4Game@sda21(r13)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80150C50
	addi     r4, r4, 4

lbl_80150C50:
	mr       r3, r31
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	lwz      r0, mapMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80151158
	mr       r3, r31
	li       r29, 1
	lwz      r12, 0(r31)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	addi     r3, r1, 0x94
	addi     r4, r30, 0x3b4
	crclr    6
	bl       sprintf
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	addi     r3, r1, 0x94
	bl       load__Q34Game4Cave8CaveInfoFPc
	lwz      r4, gameSystem__4Game@sda21(r13)
	mr       r27, r3
	li       r28, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bne      lbl_80150D6C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r2, lbl_80518588@sda21
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_80150D6C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	addi     r3, r1, 0x94
	addi     r4, r30, 0x3d4
	crclr    6
	bl       sprintf
	li       r3, 0x20
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80150D40
	bl       __ct__Q34Game4Cave11EditMapUnitFv
	mr       r28, r3

lbl_80150D40:
	mr       r3, r28
	addi     r4, r1, 0x94
	bl       read__Q34Game4Cave11EditMapUnitFPc
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r28
	bl       setEditNumber__Q34Game4Cave11EditMapUnitFi

lbl_80150D6C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80150D90
	mr       r3, r27
	bl       disablePelplant__Q34Game4Cave8CaveInfoFv

lbl_80150D90:
	li       r3, 0x120
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150DB0
	mr       r5, r27
	li       r4, 1
	bl       __ct__Q24Game10RoomMapMgrFPQ34Game4Cave8CaveInfo
	mr       r0, r3

lbl_80150DB0:
	stw      r0, mapMgr__4Game@sda21(r13)
	addi     r4, r2, lbl_80518590@sda21
	lwz      r3, sys@sda21(r13)
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, mapMgr__4Game@sda21(r13)
	mr       r5, r28
	bl       createRandomMap__Q24Game10RoomMapMgrFiPQ34Game4Cave11EditMapUnit
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518590@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r4, mapMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80150E04
	lwz      r4, 0(r4)

lbl_80150E04:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80150FDC
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x37
	stw      r0, 0x88(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 4
	mr       r3, r31
	stw      r4, 0x88(r1)
	addi     r4, r1, 0x88
	stw      r5, 0x8c(r1)
	stw      r0, 0x90(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x17
	stw      r0, 0x7c(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 4
	mr       r3, r31
	stw      r4, 0x7c(r1)
	addi     r4, r1, 0x7c
	stw      r5, 0x80(r1)
	stw      r0, 0x84(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x13
	stw      r0, 0x70(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 0xc
	mr       r3, r31
	stw      r4, 0x70(r1)
	addi     r4, r1, 0x70
	stw      r5, 0x74(r1)
	stw      r0, 0x78(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x5d
	stw      r0, 0x64(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 2
	mr       r3, r31
	stw      r4, 0x64(r1)
	addi     r4, r1, 0x64
	stw      r5, 0x68(r1)
	stw      r0, 0x6c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x18
	stw      r0, 0x58(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 4
	mr       r3, r31
	stw      r4, 0x58(r1)
	addi     r4, r1, 0x58
	stw      r5, 0x5c(r1)
	stw      r0, 0x60(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0x19
	stw      r0, 0x4c(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 4
	mr       r3, r31
	stw      r4, 0x4c(r1)
	addi     r4, r1, 0x4c
	stw      r5, 0x50(r1)
	stw      r0, 0x54(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game21GameMessageVsAddEnemy@ha
	addi     r0, r4, __vt__Q24Game11GameMessage@l
	li       r5, 0xe
	stw      r0, 0x40(r1)
	addi     r4, r3, __vt__Q24Game21GameMessageVsAddEnemy@l
	li       r0, 0x14
	mr       r3, r31
	stw      r4, 0x40(r1)
	addi     r4, r1, 0x40
	stw      r5, 0x44(r1)
	stw      r0, 0x48(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_80150FDC:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518598@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lfs      f1, lbl_805185A0@sda21(r2)
	addi     r4, r1, 0x30
	lfs      f0, lbl_805185A4@sda21(r2)
	stfs     f1, 0x30(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	stfs     f0, 0x3c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3e4
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80151044
	bl       __ct__Q24Game11CellPyramidFv
	mr       r0, r3

lbl_80151044:
	stw      r0, platCellMgr__4Game@sda21(r13)
	mr       r3, r0
	lfs      f1, lbl_805185A8@sda21(r2)
	addi     r4, r1, 0x30
	bl       create__Q24Game11CellPyramidFR10BoundBox2df
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3e4
	bl       heapStatusEnd__6SystemFPc
	lfs      f1, lbl_805185A0@sda21(r2)
	addi     r4, r1, 0x20
	lfs      f0, lbl_805185A4@sda21(r2)
	stfs     f1, 0x20(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	stfs     f0, 0x2c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3f0
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801510BC
	bl       __ct__Q24Game11CellPyramidFv
	mr       r0, r3

lbl_801510BC:
	stw      r0, mapRoomCellMgr__4Game@sda21(r13)
	mr       r3, r0
	lfs      f1, lbl_805185AC@sda21(r2)
	addi     r4, r1, 0x20
	bl       create__Q24Game11CellPyramidFR10BoundBox2df
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3f0
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, mapMgr__4Game@sda21(r13)
	bl       entryToMapRoomCellMgr__Q24Game10RoomMapMgrFv
	lwz      r3, mapMgr__4Game@sda21(r13)
	bl       createGlobalCollision__Q24Game10RoomMapMgrFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518598@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x114(r31)
	li       r5, -1
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	clrlwi   r4, r0, 0x18
	bl       allocateEnemys__Q24Game15GeneralEnemyMgrFUci
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game15GeneralEnemyMgrFv
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       setupResources__Q24Game9PelletMgrFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_80151144
	lwz      r3, playData__4Game@sda21(r13)
	li       r0, 1
	stb      r0, 0x6c(r3)

lbl_80151144:
	bl       globalInstance__Q29TexCaster3MgrFv
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r3, 8(r3)
	bl       setCloseAll__Q24Game8RouteMgrFv
	b        lbl_8015115C

lbl_80151158:
	bl       globalInstance__Q29TexCaster3MgrFv

lbl_8015115C:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_801511A0
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80151184
	bl       __ct__Q24Game10PathfinderFv
	mr       r0, r3

lbl_80151184:
	stw      r0, testPathfinder__4Game@sda21(r13)
	mr       r3, r0
	lwz      r5, mapMgr__4Game@sda21(r13)
	li       r4, 0x64
	lwz      r5, 8(r5)
	bl       create__Q24Game10PathfinderFiPQ24Game8RouteMgr
	b        lbl_801511A8

lbl_801511A0:
	li       r0, 0
	stw      r0, testPathfinder__4Game@sda21(r13)

lbl_801511A8:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	beq      lbl_801511BC
	bl       refreshWater__Q24Game8RouteMgrFv

lbl_801511BC:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518598@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801511E4
	bl       __ct__Q24Game11CellPyramidFv
	mr       r0, r3

lbl_801511E4:
	lfs      f1, lbl_805185A0@sda21(r2)
	addi     r4, r1, 0x10
	lfs      f0, lbl_805185A4@sda21(r2)
	stw      r0, cellMgr__4Game@sda21(r13)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	lwz      r3, cellMgr__4Game@sda21(r13)
	addi     r4, r1, 0x10
	lfs      f1, lbl_805185B0@sda21(r2)
	bl       create__Q24Game11CellPyramidFR10BoundBox2df
	clrlwi.  r0, r29, 0x18
	bne      lbl_80151280
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3e4
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x48
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80151260
	bl       __ct__Q24Game11CellPyramidFv
	mr       r0, r3

lbl_80151260:
	stw      r0, platCellMgr__4Game@sda21(r13)
	mr       r3, r0
	lfs      f1, lbl_805185A8@sda21(r2)
	addi     r4, r1, 0x10
	bl       create__Q24Game11CellPyramidFR10BoundBox2df
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3e4
	bl       heapStatusEnd__6SystemFPc

lbl_80151280:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518598@sda21
	bl       heapStatusEnd__6SystemFPc
	clrlwi.  r0, r29, 0x18
	beq      lbl_8015129C
	lwz      r3, mapMgr__4Game@sda21(r13)
	bl       placeObjects__Q24Game10RoomMapMgrFv

lbl_8015129C:
	mr       r3, r31
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r31)
	lwz      r28, 0x24(r4)
	lwz      r12, 0xfc(r12)
	mr       r4, r28
	mtctr    r12
	bctrl
	lwz      r3, particleMgr@sda21(r13)
	mr       r4, r28
	bl       setViewport__11ParticleMgrFR8Graphics
	lwz      r3, particleMgr@sda21(r13)
	bl       start__11ParticleMgrFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x104(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	bl       initDependency__Q24Game7ItemMgrFv
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 0
	bl       init__Q24Game9CameraMgrFi
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lfs      f1, lbl_805185B8@sda21(r2)
	lfs      f0, 0x58(r3)
	lfs      f2, lbl_805185B4@sda21(r2)
	fmuls    f0, f1, f0
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmuls    f31, f2, f0
	bl       getMapRotation__Q24Game6MapMgrFv
	fadds    f1, f31, f1
	bl       roundAng__Ff
	fmr      f31, f1
	lwz      r3, mapMgr__4Game@sda21(r13)
	bl       getMapRotation__Q24Game6MapMgrFv
	fmr      f1, f31
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 2
	bl       setCameraAngle__Q24Game9CameraMgrFfi
	lwz      r3, cameraMgr__4Game@sda21(r13)
	li       r4, 2
	bl       controllerUnLock__Q24Game9CameraMgrFi
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x38c
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, pikiMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game7PikiMgrFv
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game7NaviMgrFv
	lwz      r3, itemMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game7ItemMgrFv
	lwz      r3, pelletMgr__4Game@sda21(r13)
	bl       setupSoundViewerAndBas__Q24Game9PelletMgrFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x128(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	ori      r0, r0, 1
	stb      r0, 0x3c(r3)
	lwz      r3, farmMgr__Q24Game4Farm@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801513A8
	bl       setupSound__Q34Game4Farm7FarmMgrFv

lbl_801513A8:
	addi     r3, r30, 0x400
	crclr    6
	bl       OSReport
	psq_l    f31, 696(r1), 0, qr0
	lfd      f31, 0x2b0(r1)
	lmw      r27, 0x29c(r1)
	lwz      r0, 0x2c4(r1)
	mtlr     r0
	addi     r1, r1, 0x2c0
	blr
	*/
}

/**
 * @note Address: 0x8015145C
 * @note Size: 0xA4
 */
void BaseGameSection::setDrawBuffer(int index)
{
	P2ASSERTBOUNDSLINE(5295, 0, index, 10);
	j3dSys.mDrawBuffer[0] = mOpaqueDrawBuffer->get(index)->mBuffer;
	j3dSys.mDrawBuffer[1] = mTransparentDrawBuffer->get(index)->mBuffer;
}

/**
 * @note Address: 0x80151500
 * @note Size: 0x30
 */
void BaseGameSection::postSetupFloatMemory() { mapMgr->setupJUTTextures(); }

/**
 * @note Address: 0x80151534
 * @note Size: 0x200
 */
void BaseGameSection::createFallPikminSound()
{
	Iterator<Piki> iterator(pikiMgr);
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		piki->movie_begin(false);
		piki->mSoundObj->startFreePikiSound(PSSE_PK_VC_FALL, 0, 0);
	}
}

/**
 * @note Address: 0x80151734
 * @note Size: 0x4
 */
void BaseGameSection::captureRadarmap(Graphics&) { }

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void BaseGameSection::drawRadarmap(Graphics&)
{
	// UNUSED FUNCTION
}

} // namespace Game
