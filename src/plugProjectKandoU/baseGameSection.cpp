#include "CarryInfo.h"
#include "Controller.h"
#include "Dolphin/dvd.h"
#include "DvdThreadCommand.h"
#include "Game/BaseGameSection.h"
#include "Game/BaseHIO.h"
#include "Game/CameraMgr.h"
#include "Game/TimeMgr.h"
#include "Game/gameGenerator.h"
#include "Game/gameGeneratorCache.h"
#include "Game/gamePlayData.h"
#include "Game/gameStages.h"
#include "Game/GameSystem.h"
#include "Game/MapMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/rumble.h"
#include "Game/shadowMgr.h"
#include "Graphics.h"
#include "IDelegate.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JFramework/JFWDisplay.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JUtility/JUTXfb.h"
#include "LifeGaugeMgr.h"
#include "P2Macros.h"
#include "Screen/Game2DMgr.h"
#include "og/Screen/ogScreen.h"
#include "System.h"
#include "stream.h"
#include "wipe.h"
#include "nans.h"
#include "SysTimers.h"
#include "Game/PelletBirthBuffer.h"
#include "PSSystem/PSCommon.h"
#include "Sys/DrawBuffers.h"
#include "Game/Entities/ItemBigFountain.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSScene.h"
#include "TParticle2dMgr.h"
#include "LifeGaugeMgr.h"
#include "Game/DynParticle.h"
#include "Game/Cave/Info.h"
#include "Game/Cave/RandMapUnit.h"
#include "Game/Farm.h"

#include "Dolphin/rand.h"

#include "Game/Entities/PelletCarcass.h"
#include "Game/Entities/PelletFruit.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/PelletOtakara.h"

#include "Game/GameLight.h"

#include "Dolphin/dvd.h"
#include "System.h"

#include "og/ogLib2D.h"
#include "Screen/Game2DMgr.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/PikiState.h"
#include "PikiAI.h"

#include "Game/DeathMgr.h"

#include "utilityU.h"
#include "PSGame/Global.h"
#include "Splitter.h"

#include "JSystem/J2D/J2DPrint.h"
#include "TexCaster.h"
#include "Game/pathfinder.h"
#include "og/Screen/ogScreen.h"
#include "Game/AIConstants.h"
#include "efx/OnyonSpot.h"

namespace og {
namespace Screen {

int UfoMenuResult[4] = { 1, 2, 3, 0 };

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void setBlendPane(J2DBlendInfo, J2DScreen*, u64*)
{
	// UNUSED FUNCTION
}

} // namespace Screen
} // namespace og

static const int padding[]    = { 0, 0, 0 };
static const char className[] = "baseGameSection";

static Delegate1<Game::BaseGameSection, Game::CameraArg*>* cameraMgrCallback;
static JKRExpHeap* theExpHeap;

namespace Game {

u8 BaseGameSection::sOptDraw = 3;

/*
 * --INFO--
 * Address:	8014ADA0
 * Size:	00021C
 */
BaseGameSection::BaseGameSection(JKRHeap* heap)
    : BaseHIOSection(heap)
    , mDvdThreadCommand()
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
	_168                = nullptr;
	mFbTexture          = nullptr;
	mXfbImage           = nullptr;
	mXfbBoundsX         = 0;
	mXfbBoundsY         = 0;
	_170                = 0;
	mTexData1           = 0;
	_E0                 = 0;
	mBlackFader         = new BlackFader;
	mWipeInFader        = new WipeInFader;
	mWipeOutFader       = new WipeOutFader;
	mWipeOutInFader     = new WipeOutInFader;
}

/*
 * --INFO--
 * Address:	8014B0FC
 * Size:	000074
 */
void BaseGameSection::useSpecificFBTexture(JUTTexture* texture)
{
	JUT_ASSERTLINE(1523, !mFbTexture, "２回は無理ｗ\n"); // 'it's impossible to do twice lol'
	mFbTexture                    = mXfbImage;
	mXfbImage                     = texture;
	Game::gameSystem->mXfbTexture = mXfbImage;
}

/*
 * --INFO--
 * Address:	8014B170
 * Size:	00006C
 */
void BaseGameSection::restoreFBTexture()
{
	JUT_ASSERTLINE(1533, mFbTexture, "useSpecificFBTexture してないｗ\n"); // 'i haven't used useSpecificFBTexture lol'
	mXfbImage                     = mFbTexture;
	mFbTexture                    = nullptr;
	Game::gameSystem->mXfbTexture = mXfbImage;
}

/*
 * --INFO--
 * Address:	8014B1DC
 * Size:	000114
 */
BaseGameSection::~BaseGameSection()
{
	theExpHeap = nullptr;
	PSSystem::SceneMgr* sceneMgr;
	PSSystem::checkSceneMgr(sceneMgr = PSSystem::getSceneMgr());
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

/*
 * --INFO--
 * Address:	8014B2F0
 * Size:	000050
 */
void BaseGameSection::loadSync(IDelegate* delegate, bool p2)
{
	sys->dvdLoadUseCallBack(&mDvdThreadCommand, delegate);
	waitSyncLoad(p2);
}

/*
 * --INFO--
 * Address:	8014B340
 * Size:	000120
 */

u32 BaseGameSection::waitSyncLoad(bool dontPause)
{
	static int col;
	static s8 init;

	if (!init) {
		col  = 0;
		init = 1;
	}
	col++;
	endFrame();
	if (!dontPause) {
		gameSystem->setPause(true, "waitSyncLoad", 3);
	}
	while (true) {
		beginFrame();
		beginRender();

		j3dSys.drawInit();
		GXSetViewport(0.0f, 0.0f, 608.0f, 480.0f, 0.0f, 1.0f);
		GXSetScissor(0, 0x10, 0x260, 0x1c0);
		endRender();

		// I have no clue

		if (mDvdThreadCommand.mMode != 2)
			;

		else if (!dontPause) {
			gameSystem->setPause(false, "waitSyncLoad", 3);
			return;
		} else
			break;

		endFrame();
	}
}

/*
 * --INFO--
 * Address:	8014B460
 * Size:	000050
 */
void BaseGameSection::dvdloadGameSystem()
{
	GameSystem* game = new GameSystem(this);
	Game::gameSystem = game;
	game->init();
}

/*
 * --INFO--
 * Address:	8014B4B0
 * Size:	000390
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
	_11C   = true;
	mapMgr = nullptr;
	System::assert_fragmentation("BaseGameSection::InitJ3D");
	System::assert_fragmentation("BaseGameSection::Before 2D");

	og::Lib2D::create();
	Screen::Game2DMgr::create();
	Screen::gGame2DMgr->mScreenMgr->_90 = 1;
	System::assert_fragmentation("BaseGameSection::Game2DMgr");
	mXfbBoundsY = 0;
	mXfbBoundsX = 0;
	onInit();
	sys->heapStatusEnd("baseGameSection::init");
	mTreasureGetState = false;
}

/*
 * --INFO--
 * Address:	8014B844
 * Size:	000034
 */
void BaseGameSection::drawInit(Graphics& gfx, Section::EDrawInitMode mode)
{
	if (mode == Two) {
		section_fadeout();
	}
}

/*
 * --INFO--
 * Address:	8014B87C
 * Size:	0003A8
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
		if (!(gameSystem->isFlag(GAMESYS_Unk3))) {
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

/*
 * --INFO--
 * Address:	8014BC28
 * Size:	000170
 */
void BaseGameSection::doDraw(Graphics& gfx)
{
	captureRadarmap(gfx);
	if (gameSystem->paused()) {
		if (cameraMgr) {
			cameraMgr->controllerLock(2);
			cameraMgr->update();
			cameraMgr->controllerUnLock(2);
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

/*
 * --INFO--
 * Address:	8014BD9C
 * Size:	000078
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

/*
 * --INFO--
 * Address:	8014BE18
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	8014BEA4
 * Size:	000450
 */

// unfortunatly this probably isn't real inline, however I'm not writing the full code out bc that's stupid
inline void j3dStuff(Sys::DrawBuffers*& buffer, Sys::DrawBuffer::CreateArg& drawArg, bool doFog)
{

	drawArg.mSize = 0x80;
	drawArg.mName = "normal";

	buffer->get(0)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = (doFog) ? "normal-fogoff" : "normal";

	buffer->get(1)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "map";
	if (doFog)
		drawArg.mSortType = J3DDrawBuffer::J3DSORT_NonSort;

	buffer->get(2)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "piki";
	if (doFog)
		drawArg.mSortType = J3DDrawBuffer::J3DSORT_Mat;

	buffer->get(3)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "post";

	buffer->get(4)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "2d";

	buffer->get(5)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "first";

	buffer->get(6)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "postshadow";

	buffer->get(7)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "objectlast";

	buffer->get(8)->create(drawArg);

	drawArg.mSize = 1;
	drawArg.mName = "farm";

	buffer->get(9)->create(drawArg);
}

void BaseGameSection::initJ3D()
{
	mDrawBuffer1 = new Sys::DrawBuffers;
	mDrawBuffer2 = new Sys::DrawBuffers;

	mDrawBuffer1->allocate(10);
	mDrawBuffer1->mName = "OPA";
	{
		Sys::DrawBuffer::CreateArg drawArg;
		drawArg.mSortType = J3DDrawBuffer::J3DSORT_Mat;
		drawArg.mDrawType = J3DDrawBuffer::J3DDRAW_Head;
		j3dStuff(mDrawBuffer1, drawArg, true);
	}

	mDrawBuffer2->allocate(10);
	mDrawBuffer2->mName = "XLU";

	{
		Sys::DrawBuffer::CreateArg drawArg;

		drawArg.mSortType = J3DDrawBuffer::J3DSORT_Mat;
		drawArg.mDrawType = J3DDrawBuffer::J3DDRAW_Head;

		drawArg.mFlags.typeView |= 1;

		j3dStuff(mDrawBuffer2, drawArg, false);
	}

	addGenNode(mDrawBuffer1);
	addGenNode(mDrawBuffer2);

	j3dSys.mDrawBuffer[0] = mDrawBuffer1->get(0)->mBuffer;
	j3dSys.mDrawBuffer[1] = mDrawBuffer2->get(0)->mBuffer;

	System::FragmentationChecker frag("poyol", false);
}

/*
 * --INFO--
 * Address:	8014C2F4
 * Size:	000034
 */
void BaseGameSection::initResources()
{
	setupFixMemory();
	setupFloatMemory();
}

Vector2f getRectSkew() { return Vector2f(0.0f, -80.0f); }

Vector2f getBottomLeft() { return Vector2f(0.0f, 0.0f); }

/*
 * --INFO--
 * Address:	8014C328
 * Size:	0001E4
 */
void BaseGameSection::initViewports(Graphics& gfx)
{
	mSplitter = new HorizonalSplitter(&gfx);
	setSplitter(false);

	gfx.getViewport(0)->setCamera(mOlimarCamera);
	gfx.getViewport(1)->setCamera(mLouieCamera);

	shadowMgr->setViewport(gfx.getViewport(0), 0);
	shadowMgr->setViewport(gfx.getViewport(1), 1);

	cameraMgr->setViewport(gfx.getViewport(0), 0);
	cameraMgr->setViewport(gfx.getViewport(1), 1);

	cameraMgr->init(0);
	mTreasureZoomCamera         = new ZoomCamera;
	mTreasureGetViewport        = new Viewport;
	mTreasureGetViewport->mVpId = 2;

	u16 x               = sys->getRenderModeObj()->fbWidth;
	u16 y               = sys->getRenderModeObj()->efbHeight;
	Vector2f screenSize = Vector2f(x, y);
	sys->getRenderModeObj();
	sys->getRenderModeObj();
	// there's probably some rect ctor or setter that takes vector2fs tbh
	// float moment
	Rectf rect;
	rect.p1 = getBottomLeft() + getRectSkew();
	rect.p2 = getRectSkew() + screenSize;
	mTreasureGetViewport->setRect(rect);
	mTreasureGetViewport->setCamera(mTreasureZoomCamera);
}

/*
 * --INFO--
 * Address:	8014C5CC
 * Size:	001120
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

		limitGeneratorMgr        = new GeneratorMgr;
		limitGeneratorMgr->mName = "Generator(Limit)";
		limitGeneratorMgr->_6C   = true;
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

		char filenameCharArr[256];
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
				plantsGenTxt.mMode = 1;
				if (plantsGenTxt.mMode == 1) {
					plantsGenTxt.mTabCount = 0;
				}
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
					currentNonloopMgr->_6C          = true; // is nonrepeating?

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

			if (day % 30 == 0) {

				for (int i = 0; i < courseInfo->mLoopGenInfo.mCount; i++) {
					LimitGen* currentGen = static_cast<LimitGen*>(courseInfo->mLoopGenInfo.mOwner.getChildAt(i));
					if (currentGen->mMinimumDay - 30 > day % 30 || day % 30 > currentGen->mMinimumDay - 30)
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
						currentLoopMgr->_6C          = true; // is nonrepeating?

						currentLoopMgr->read(loopTxt, false);
						currentLoopMgr->setDayLimit(currentGen->mMaximumDay - 30);
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
		if (!(playData->mDeadNaviID & 1)) {
			louie->mHealth = playData->mNaviLifeMax[1];
		}
		if (playData->mDeadNaviID & 2) {
			louie->setDeadLaydown();
			return;
		}
		if (!gameSystem->isMultiplayerMode() && !olimarAlive) {
			InteractFue callNavi(olimar, 0, 1);
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
		Navi* olimar = naviMgr->getAt(0);
		olimar->setCamera(mOlimarCamera);
		olimar->setController(mControllerP1);
		olimar = naviMgr->birth();
		olimar->init(nullptr);
		olimar->setCamera(mLouieCamera);
		olimar->setController(mControllerP2);
		olimar->setPosition(offset, false);
		break;

	case 2: {
		Navi* olimar = naviMgr->getAt(0);
		olimar->setCamera(mOlimarCamera);
		olimar->setController(mControllerP1);
		Navi* louie = naviMgr->getAt(1);
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
	if (mPrevNaviIdx == 0) {
		setPlayerMode(1);
		moviePlayer->mViewport     = sys->mGfx->getViewport(1);
		moviePlayer->mActingCamera = mLouieCamera;
	} else if (mPrevNaviIdx == 1) {
		setPlayerMode(0);
		moviePlayer->mViewport     = sys->mGfx->getViewport(0);
		moviePlayer->mActingCamera = mOlimarCamera;
	}
	onTogglePlayer();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void BaseGameSection::pmPlayerJoin()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014D918
 * Size:	0002B8
 */
void BaseGameSection::setPlayerMode(int mode)
{
	// this is a really dumb regswap
	Navi* fools[2];
	fools[0] = naviMgr->getAt(0);
	fools[1] = naviMgr->getAt(1);
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
		cameraMgr->changePlayerMode(0, cameraMgrCallback);
		if (mPlayerMode == 1) {
			Graphics* gfx = sys->mGfx;
			gfx->getViewport(0)->setCamera(mOlimarCamera);
			gfx->getViewport(1)->setCamera(mLouieCamera);
		}
		Viewport* olimarViewport    = sys->mGfx->getViewport(0);
		sys->mGfx->mCurrentViewport = olimarViewport;
		mLightMgr->updatePosition(sys->mGfx->mCurrentViewport);
		break;
	}
	case NAVIID_Louie: {
		if (mPlayerMode == 1) {
			Graphics* gfx = sys->mGfx;

			gfx->getViewport(0)->setCamera(mLouieCamera);
			gfx->getViewport(1)->setCamera(mOlimarCamera);

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
		cameraMgr->changePlayerMode(1, cameraMgrCallback);

		Viewport* louieViewport     = sys->mGfx->getViewport(1);
		sys->mGfx->mCurrentViewport = louieViewport;
		mLightMgr->updatePosition(sys->mGfx->mCurrentViewport);
		break;
	}
	case NAVIID_President: {
		mSecondViewportHeight = 0.5f;
		mSplit                = 0.0f;
		mSplitter->split2(0.5f);
		cameraMgr->changePlayerMode(2, cameraMgrCallback);
		break;
	}
	}
	mPrevNaviIdx = mode;
}

/*
 * --INFO--
 * Address:	8014DBD4
 * Size:	00014C
 */
void BaseGameSection::onCameraBlendFinished(CameraArg* arg)
{
	setCamController();
	if (gameSystem->isStoryMode()) {
		if (!playData->isDemoFlag(DEMO_First_Use_Louie) && playData->isDemoFlag(DEMO_Unlock_Captain_Switch)) {
			Navi* louie = naviMgr->getAt(1);
			JUT_ASSERTLINE(3088, louie, "louie null");
			MoviePlayArg louieStart("x05_louiestart", nullptr, nullptr, 0);
			louieStart.setTarget(louie);
			moviePlayer->mTargetObject = louie;
			moviePlayer->play(louieStart);
			playData->setDemoFlag(DEMO_First_Use_Louie);
		}
	}
}
/*
 * --INFO--
 * Address:	8014DD20
 * Size:	000068
 */
void BaseGameSection::setFixNearFar(bool b, f32 near, f32 far)
{
	mOlimarCamera->setFixNearFar(b, near, far);
	mLouieCamera->setFixNearFar(b, near, far);
}

/*
 * --INFO--
 * Address:	8014DD88
 * Size:	000210
 */
void BaseGameSection::setCamController()
{
	Navi* navis[2];

	navis[0] = naviMgr->getAt(0);
	navis[1] = naviMgr->getAt(1);

	switch (mPrevNaviIdx) {
	case 0: {
		PlayCamera* olimarCam        = mOlimarCamera;
		navis[0]->mCamera            = olimarCam;
		navis[0]->mCamera2           = olimarCam;
		Controller* olimarController = mControllerP1;
		navis[0]->mController1       = olimarController;
		navis[0]->mController2       = olimarController;
		navis[1]->disableController();
		moviePlayer->mTargetNavi   = navis[0];
		moviePlayer->mViewport     = sys->mGfx->getViewport(0);
		moviePlayer->mActingCamera = mOlimarCamera;
		if (!gameSystem->isMultiplayerMode()) {
			PSSetCurCameraNo(0);
			PSPlayerChangeToOrimer();
		}
		break;
	}
	case 1: {
		navis[0]->disableController();
		PlayCamera* louieCam        = mLouieCamera;
		navis[1]->mCamera           = louieCam;
		navis[1]->mCamera2          = louieCam;
		Controller* louieController = mControllerP1;
		navis[1]->mController1      = louieController;
		navis[1]->mController2      = louieController;
		moviePlayer->mTargetNavi    = navis[1];
		moviePlayer->mViewport      = sys->mGfx->getViewport(1);
		moviePlayer->mActingCamera  = mLouieCamera;
		if (!gameSystem->isMultiplayerMode()) {
			PSSetCurCameraNo(1);
			PSPlayerChangeToLugie();
		}
		break;
	}
	case 2: {
		PlayCamera* olimarCam        = mOlimarCamera;
		navis[0]->mCamera            = olimarCam;
		navis[0]->mCamera2           = olimarCam;
		Controller* olimarController = mControllerP1;
		navis[0]->mController1       = olimarController;
		navis[0]->mController2       = olimarController;
		PlayCamera* louieCam         = mLouieCamera;
		navis[1]->mCamera            = louieCam;
		navis[1]->mCamera2           = louieCam;
		Controller* louieController  = mControllerP2;
		navis[1]->mController1       = louieController;
		navis[1]->mController2       = louieController;

		moviePlayer->mTargetNavi   = navis[0];
		moviePlayer->mActingCamera = mOlimarCamera;
		if (gameSystem->isStoryMode()) {
			PSSetCurCameraNo(0);
		}
		break;
	}
	}
	on_setCamController(mPrevNaviIdx);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
int BaseGameSection::getNumWindows()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
int BaseGameSection::getActivePlayerID()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014DF9C
 * Size:	000184
 */
void BaseGameSection::setDefaultPSSceneInfo(PSGame::SceneInfo& sceneInfo)
{
	P2ASSERTLINE(3197, mOlimarCamera);
	P2ASSERTLINE(3198, mLouieCamera);

	sceneInfo.mCameras         = 2;
	sceneInfo.mCam1Position[0] = mOlimarCamera->getSoundPositionPtr();
	sceneInfo.mCam2Position[0] = mOlimarCamera->getSoundPositionPtr();
	sceneInfo.mCameraMtx[0]    = mOlimarCamera->getSoundMatrixPtr();
	sceneInfo.mCam1Position[1] = mLouieCamera->getSoundPositionPtr();
	sceneInfo.mCam2Position[1] = mLouieCamera->getSoundPositionPtr();
	sceneInfo.mCameraMtx[1]    = mLouieCamera->getSoundMatrixPtr();
	BoundBox box;

	mapMgr->getBoundBox(box);

	Vector3f min = box.mMin;
	Vector3f max = box.mMax;

	sceneInfo.mBounds.minX = min.x;
	sceneInfo.mBounds.minY = min.y;
	sceneInfo.mBounds.minZ = min.z;
	sceneInfo.mBounds.maxX = max.x;
	sceneInfo.mBounds.maxY = max.y;
	sceneInfo.mBounds.maxZ = max.z;
}

/*
 * --INFO--
 * Address:	8014E130
 * Size:	00068C
 */
// void prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3f b()
void BaseGameSection::prepareHoleIn(Vector3f& suroundPos, bool killPikihead)
{
	Screen::gGame2DMgr->mScreenMgr->reset();
	Navi* aliveOrima = naviMgr->getAliveOrima(0);
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
					sendMessage(deadPikmin);
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
				PikiAI::ActFormationInitArg arg(aliveOrima, 1);
				arg._09 = false;
				piki->mBrain->start(PikiAI::ACT_Formation, &arg);
				piki->movie_begin(false);
			}
		}
	}
	if (aliveOrima) {
		aliveOrima->demowaitAllPikis();
	}
}
/*
 * --INFO--
 * Address:	8014E7BC
 * Size:	000714
 */
// void prepareFountainOn__Q24Game15BaseGameSectionFR10Vector3f()
void BaseGameSection::prepareFountainOn(Vector3f& suroundPos)
{
	Iterator<BaseItem> iFountain = ItemBigFountain::mgr;
	CI_LOOP(iFountain)
	{
		ItemBigFountain::Item* fountain = static_cast<ItemBigFountain::Item*>(*iFountain);
		fountain->killAllEffect();
	}
	Screen::gGame2DMgr->mScreenMgr->reset();
	Navi* aliveOrima = naviMgr->getAliveOrima(0);

	Iterator<ItemPikihead::Item> iPikihead = ItemPikihead::mgr;
	CI_LOOP(iPikihead)
	{
		ItemPikihead::Item* item = *iPikihead;
		if (item->isAlive()) {
			DeathMgr::inc(DeathCounter::COD_Battle);
			DeathMgr::inc(DeathCounter::COD_All);
			if (gameSystem->isChallengeMode()) {
				GameMessageVsPikminDead deadPikmin;
				sendMessage(deadPikmin);
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
			piki->mNavi = aliveOrima;

			PikiAI::ActFormationInitArg arg(aliveOrima);
			arg._08 = 1;
			piki->mBrain->start(PikiAI::ACT_Formation, &arg);
			piki->movie_begin(false);
		}
	}
	if (aliveOrima) {
		aliveOrima->demowaitAllPikis();
	}
}

/*
 * --INFO--
 * Address:	8014EED0
 * Size:	000074
 */
void BaseGameSection::initLights()
{
	mLightMgr           = new GameLightMgr("ゲームライトマネージャ"); // game light manager
	mLightMgr->mTimeMgr = gameSystem->mTimeMgr;
	addGenNode(mLightMgr);
	particleMgr->mLightMgr = mLightMgr;
}

/*
 * --INFO--
 * Address:	8014EF44
 * Size:	000020
 */
void BaseGameSection::draw3D(Graphics& gfx) { newdraw_draw3D_all(gfx); }

/*
 * --INFO--
 * Address:	8014EF64
 * Size:	0001D4
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
		if (!gameSystem->isMultiplayerMode() && mPrevNaviIdx != 2) {
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

/*
 * --INFO--
 * Address:	8014F138
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	8014F1D8
 * Size:	000004
 */
void BaseGameSection::test_draw_treasure_detector() { }

/*
 * --INFO--
 * Address:	8014F1DC
 * Size:	0001BC
 */
void BaseGameSection::draw2D(Graphics& gfx)
{
	j3dSys.reinitGX();
	gfx.mOrthoGraph.setPort();
	draw_Ogawa2D(gfx);
	if (_168) {
		_168->capture(mTexData1, _170, GX_TF_IA8, false, 0);
	}
	if (!_168 && mXfbFlags & 2) {
		mXfbImage->capture(mXfbBoundsX, mXfbBoundsY, GX_TF_IA8, true, 0);
		mXfbFlags &= ~2;
		mXfbFlags |= 1;
		mXfbFlags |= 4;
	}
	Screen::gGame2DMgr->drawIndirect(gfx);
	gfx.mOrthoGraph.setPort();
	J2DPrint print(JFWSystem::systemFont, 0.0f);
	print.initiate();
	print.mCharColor     = JUtility::TColor(0x9e, 0xdb, 0xff, 0xff);
	print.mGradientColor = JUtility::TColor(0x38, 0x9f, 0xf7, 0xff);
	JKRHeap::sCurrentHeap->getFreeSize();
	// print was likely showing how much head space was left
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::setupViewportMatrix(Graphics&)
{
	JUT_PANICLINE(0, "DON'T USE THIS !\n");
	JUT_PANICLINE(0, "使ってないかも\n");
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014F398
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	8014F450
 * Size:	000078
 */
void BaseGameSection::directDrawPost(Graphics& gfx, Viewport* vp)
{
	vp->setViewport();
	vp->setProjection();
	gfx.initPrimDraw(vp->getMatrix(true));
	doDirectDrawPost(gfx, vp);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void BaseGameSection::j3dDraw(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawPostShadow(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawObjectLast(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawPost(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::j3dDrawLast(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014F4C8
 * Size:	000054
 */
void BaseGameSection::j3dSetView(Viewport* vp, bool b)
{
	vp->setJ3DViewMtx(b);
	doSetView(vp->mVpId);
	doViewCalc();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void BaseGameSection::j3dViewCalc(Viewport*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014F51C
 * Size:	000030
 */
void BaseGameSection::doSimulation(float rate) { gameSystem->doSimulation(rate); }

/*
 * --INFO--
 * Address:	8014F54C
 * Size:	000030
 */
void BaseGameSection::doSimpleDraw(Viewport* vp) { gameSystem->doSimpleDraw(vp); }

/*
 * --INFO--
 * Address:	8014F57C
 * Size:	0001D8
 */
void BaseGameSection::doAnimation()
{
	Navi* olimar = naviMgr->getAt(0);
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

/*
 * --INFO--
 * Address:	8014F754
 * Size:	00004C
 */
void BaseGameSection::changeGeneratorCursor(Vector3f& vec) { naviMgr->getAt(0)->setPosition(vec, false); }

/*
 * --INFO--
 * Address:	8014F7A0
 * Size:	0000C8
 */
void BaseGameSection::doEntry()
{
	setDrawBuffer(0);
	sys->mTimers->_start("ENT-GSYS", true);
	gameSystem->doEntry();
	sys->mTimers->_stop("ENT-GSYS");
	sys->mTimers->_start("ENT-REST", true);
	if (particleMgr) {
		setDrawBuffer(1);
		particleMgr->doEntry();
	}
	sys->mTimers->_stop("ENT-REST");
}

/*
 * --INFO--
 * Address:	8014F868
 * Size:	000100
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

/*
 * --INFO--
 * Address:	8014F968
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void BaseGameSection::initBlendCamera()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FA30
 * Size:	000174
 */
void BaseGameSection::updateBlendCamera()
{
	if (mPrevNaviIdx == 0) {
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
		gfx->getViewport(0)->setCamera(mOlimarCamera);
		gfx->getViewport(1)->setCamera(mLouieCamera);
		setCamController();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void BaseGameSection::blend1to2()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void BaseGameSection::blend2to1()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FBA4
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void BaseGameSection::startSplit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void BaseGameSection::changeSplit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void BaseGameSection::endSplit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FC10
 * Size:	000134
 */
void BaseGameSection::updateSplitter()
{
	if (mSplit == 0.0f && moviePlayer->mDemoState == 0 && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
		return;
	}

	mSecondViewportHeight += mSplit * sys->mDeltaTime;
	int id = mPrevNaviIdx;
	if (id == 2 && mSecondViewportHeight <= 0.5f) {
		mSecondViewportHeight = 0.5f;
		mSplit                = 0.0f;
		mSetSplit             = true;
		setCamController();
	} else if (id == 0 && mSecondViewportHeight >= 1.0f) {
		mSecondViewportHeight = 1.0f;
		mSplit                = 0.0f;
		mSetSplit             = false;
		setCamController();
	} else if (id == 1 && mSecondViewportHeight <= 0.0f) {
		mSecondViewportHeight = 0.0f;
		mSplit                = 0.0f;
		setCamController();
	}

	if (mSplitter) {
		mSplitter->split2(mSecondViewportHeight);
	}
}

/*
 * --INFO--
 * Address:	8014FD44
 * Size:	000058
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

/*
 * --INFO--
 * Address:	8014FD9C
 * Size:	000004
 */
void BaseGameSection::doDirectDraw(Graphics&, Viewport*) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void BaseGameSection::startHeap()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8014FDA4
 * Size:	0002A8
 */
void BaseGameSection::clearHeap()
{
	TexCaster::Mgr::deleteInstance();
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	mgr->deleteCurrentScene();
	GXWaitDrawDone();
	itemMgr->clearGlobalPointers();
	platCellMgr = nullptr;
	cellMgr     = nullptr;
	mDrawBuffer1->frameInitAll();
	mDrawBuffer2->frameInitAll();
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

/*
 * --INFO--
 * Address:	801500B0
 * Size:	00002C
 */
void BaseGameSection::startFadeout(f32 time)
{
	mDisplayWiper = mWipeOutFader;
	mWipeOutFader->start(time);
}

/*
 * --INFO--
 * Address:	801500DC
 * Size:	00002C
 */
void BaseGameSection::startFadein(f32 time)
{
	mDisplayWiper = mWipeInFader;
	mWipeInFader->start(time);
}

/*
 * --INFO--
 * Address:	80150108
 * Size:	00002C
 */
void BaseGameSection::startFadeoutin(f32 time)
{
	mDisplayWiper = mWipeOutInFader;
	mWipeOutInFader->start(time);
}

/*
 * --INFO--
 * Address:	80150134
 * Size:	00003C
 */
void BaseGameSection::startFadeblack()
{
	mDisplayWiper         = mBlackFader;
	mBlackFader->mIsBlack = true;
	mBlackFader->start(999.0f);
}

/*
 * --INFO--
 * Address:	80150170
 * Size:	00003C
 */
void BaseGameSection::startFadewhite()
{
	mDisplayWiper         = mBlackFader;
	mBlackFader->mIsBlack = false;
	mBlackFader->start(999.0f);
}

/*
 * --INFO--
 * Address:	801501AC
 * Size:	0001C0
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

/*
 * --INFO--
 * Address:	8015036C
 * Size:	000334
 */
void BaseGameSection::setupFixMemory_dvdload()
{
	sys->heapStatusStart("setupFixMemory", nullptr);

	ResTIMG* file = static_cast<ResTIMG*>(JKRDvdRipper::loadToMainRAM("user/Kando/mizu.bti", nullptr, Switch_0, 0, nullptr,
	                                                                  JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, nullptr));
	mMizuTexture  = new JUTTexture(file);
	sys->heapStatusStart("fbTexture", nullptr);

	mXfbImage               = new JUTTexture();
	gameSystem->mXfbTexture = mXfbImage;

	sys->heapStatusEnd("fbTexture");

	sys->heapStatusStart("particle", nullptr);
	ParticleMgr::globalInstance();
	particleMgr->createHeap(0x180000);
	particleMgr->createMgr("user/Ebisawa/effect/game.jpc", 2000, 300, 0x80);
	addGenNode(particleMgr);

	TParticle2dMgr::globalInstance();
	particle2dMgr->createHeap(0x3e800);
	particle2dMgr->createMgr("user/Ebisawa/effect/eff2d_game2d.jpc", 0x1d4, 0x28, 0x80);
	addGenNode(particle2dMgr);

	particleMgr->beginEntryModelEffect();
	efx::OnyonSpotData* spot = new efx::OnyonSpotData;
	spot->entry();
	particleMgr->endEntryModelEffect();
	// reload particleMgr here
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

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8047C948@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_8047C948@l
	addi     r4, r31, 0x2e0
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r0, 0
	addi     r3, r31, 0x2f0
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 1
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	mr       r0, r3
	li       r3, 0x40
	mr       r28, r0
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80150408
	li       r0, 0
	mr       r4, r28
	stw      r0, 0x28(r29)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r29)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r29)

lbl_80150408:
	stw      r29, 0xf4(r30)
	addi     r4, r31, 0x304
	li       r5, 0
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x40
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80150454
	bl       getRenderModeObj__6SystemFv
	lhz      r28, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r0, 4(r3)
	mr       r3, r29
	rlwinm   r5, r28, 0x1f, 0x11, 0x1f
	li       r6, 4
	rlwinm   r4, r0, 0x1f, 0x11, 0x1f
	bl       __ct__10JUTTextureFii9_GXTexFmt
	mr       r29, r3

lbl_80150454:
	stw      r29, 0x154(r30)
	addi     r4, r31, 0x304
	lwz      r0, 0x154(r30)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r0, 0x54(r3)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x14c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	bl       globalInstance__11ParticleMgrFv
	lwz      r3, particleMgr@sda21(r13)
	lis      r4, 0x18
	bl       createHeap__11ParticleMgrFUl
	lwz      r3, particleMgr@sda21(r13)
	addi     r4, r31, 0x310
	li       r5, 0x7d0
	li       r6, 0x12c
	li       r7, 0x80
	bl       createMgr__11ParticleMgrFPcUlUlUl
	lwz      r4, particleMgr@sda21(r13)
	mr       r3, r30
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	bl       globalInstance__14TParticle2dMgrFv
	lis      r4, 0x0003E800@ha
	lwz      r3, particle2dMgr@sda21(r13)
	addi     r4, r4, 0x0003E800@l
	bl       createHeap__14TParticle2dMgrFUl
	lwz      r3, particle2dMgr@sda21(r13)
	addi     r4, r31, 0x330
	li       r5, 0x1d4
	li       r6, 0x28
	li       r7, 0x80
	bl       createMgr__14TParticle2dMgrFPcUlUlUl
	lwz      r4, particle2dMgr@sda21(r13)
	mr       r3, r30
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r3, particleMgr@sda21(r13)
	bl       beginEntryModelEffect__11ParticleMgrFv
	li       r3, 0x30
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80150520
	bl       __ct__5CNodeFv
	lis      r4, __vt__15ModelEffectData@ha
	lis      r3, __vt__Q23efx13OnyonSpotData@ha
	addi     r0, r4, __vt__15ModelEffectData@l
	stw      r0, 0(r29)
	addi     r0, r3, __vt__Q23efx13OnyonSpotData@l
	stw      r0, 0(r29)

lbl_80150520:
	mr       r3, r29
	bl       entry__15ModelEffectDataFv
	lwz      r3, particleMgr@sda21(r13)
	bl       endEntryModelEffect__11ParticleMgrFv
	lwz      r3, particleMgr@sda21(r13)
	bl       Instance_TPkEffectMgr__11ParticleMgrFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x14c
	bl       heapStatusEnd__6SystemFPc
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8015055C
	bl       __ct__Q24Game9UpdateMgrFv
	mr       r0, r3

lbl_8015055C:
	stw      r0, collisionUpdateMgr__4Game@sda21(r13)
	mr       r3, r0
	li       r4, 3
	bl       create__Q24Game9UpdateMgrFi
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x358
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0xd0
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80150594
	bl       __ct__Q24Game7NaviMgrFv
	mr       r4, r3

lbl_80150594:
	cmplwi   r4, 0
	stw      r4, naviMgr__4Game@sda21(r13)
	beq      lbl_801505A4
	addi     r4, r4, 0x1c

lbl_801505A4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	li       r3, 0x80
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801505D8
	bl       __ct__Q24Game7PikiMgrFv
	mr       r4, r3

lbl_801505D8:
	cmplwi   r4, 0
	stw      r4, pikiMgr__4Game@sda21(r13)
	beq      lbl_801505E8
	addi     r4, r4, 0x1c

lbl_801505E8:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, pikiMgr__4Game@sda21(r13)
	mr       r3, r30
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r4, naviMgr__4Game@sda21(r13)
	mr       r3, r30
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r4, 0x114(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x358
	bl       heapStatusEnd__6SystemFPc
	li       r3, 0x40
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80150644
	bl       __ct__Q24Game9PelletMgrFv
	mr       r0, r3

lbl_80150644:
	stw      r0, pelletMgr__4Game@sda21(r13)
	mr       r3, r0
	li       r4, 0
	bl       createManagers__Q24Game9PelletMgrFUl
	lwz      r4, pelletMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80150664
	addi     r4, r4, 0x1c

lbl_80150664:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	mr       r3, r30
	bl       createScreenRootNode__Q24Game14BaseHIOSectionFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x2e0
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void BaseGameAllocCallback(u32, int, JKRHeap*, void*)
{
	JUT_PANIC("allocation dameck!\n%d/%d");
	// UNUSED FUNCTION
}

namespace Game {

/*
 * --INFO--
 * Address:	80150700
 * Size:	000008
 */
bool BaseGameSection::enableAllocHalt() { return false; }

/*
 * --INFO--
 * Address:	80150708
 * Size:	000008
 */
bool BaseGameSection::disableAllocHalt() { return false; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
bool BaseGameSection::isAllocHalt()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80150710
 * Size:	000CC0
 */
void BaseGameSection::setupFloatMemory()
{
	bool cave = false;
	gameSystem->mFlags.typeView &= 0xFE; // this matches, but it's a bit odd
	// gameSystem->resetFlag(0xFFFFFF01); // this matches, but it's extraordinarily stupid

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

	CarryInfoMgr* mgr;
	if (gameSystem->isStoryMode()) {
		mgr = new CarryInfoMgr(48);
	} else {
		mgr = new CarryInfoMgr(64);
	}
	carryInfoMgr = mgr;
	carryInfoMgr->loadResource();

	platMgr   = new PlatMgr;
	shadowMgr = new ShadowMgr(2);
	addGenNode(shadowMgr);
	initLights();

	naviMgr->alloc(2);

	Navi* p1 = naviMgr->getAt(0);
	Navi* p2 = naviMgr->getAt(1);

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

	bool incave = gameSystem->mIsInCave;
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
	pikiMgr->alloc(100);
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
				mapunit->setEditNumber(getCurrFloor());
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
		platCellMgr = new CellPyramid;
		platCellMgr->create(bounds, 170.0f);
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
	Graphics* gfx = sys->mGfx;
	initViewports(*gfx);
	particleMgr->setViewport(*gfx);
	particleMgr->start();

	initGenerators();

	itemMgr->initDependency();
	cameraMgr->init(0);

	f32 angle = _aiConstants->mCameraAngle.mData * DEG2RAD * PI;
	angle     = roundAng(angle + mapMgr->getMapRotation());
	mapMgr->getMapRotation();
	cameraMgr->setCameraAngle(angle, 2);
	cameraMgr->controllerUnLock(2);
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
	OSReport("<float> Done\n");

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

/*
 * --INFO--
 * Address:	8015145C
 * Size:	0000A4
 */
void BaseGameSection::setDrawBuffer(int index)
{
	P2ASSERTBOUNDSLINE(5295, 0, index, 10);
	j3dSys.mDrawBuffer[0] = mDrawBuffer1->get(index)->mBuffer;
	j3dSys.mDrawBuffer[1] = mDrawBuffer2->get(index)->mBuffer;
}

/*
 * --INFO--
 * Address:	80151500
 * Size:	000030
 */
void BaseGameSection::postSetupFloatMemory() { mapMgr->setupJUTTextures(); }

/*
 * --INFO--
 * Address:	80151534
 * Size:	000200
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

/*
 * --INFO--
 * Address:	80151734
 * Size:	000004
 */
void BaseGameSection::captureRadarmap(Graphics&) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void BaseGameSection::drawRadarmap(Graphics&)
{
	// UNUSED FUNCTION
}

} // namespace Game
