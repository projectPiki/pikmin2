#include "Demo.h"
#include "System.h"
#include "Controller.h"
#include "Dolphin/rand.h"
#include "PSSystem/PSSystemIF.h"
#include "PSSystem/PSGame.h"
#include "SoundID.h"
#include "JSystem/JFramework/JFWDisplay.h"
#include "JSystem/J2D/J2DPicture.h"
#include "JSystem/JUtility/JUTProcBar.h"
#include "PSM/Scene.h"

static void _Print(char* format, ...)
{
	OSReport(format, __FILE__);
}

namespace Demo {
namespace {

static u8 sMovieIndexTable[8] = {
	Game::THPPlayer::PLAY_1, Game::THPPlayer::PLAY_2, Game::THPPlayer::PLAY_3, Game::THPPlayer::OPENING_GameStart,
	Game::THPPlayer::PLAY_4, Game::THPPlayer::PLAY_5, Game::THPPlayer::PLAY_6, Game::THPPlayer::OPENING_GameStart,
};
static s8 sMovieIndex = -1;

struct LogoLocation {
	u16 x;
	u16 y;
};

static LogoLocation sLogoLocate[] = {
#if defined(VERSION_JP)
	{ 370, 320 }, { 370, 320 }, { 370, 320 }, { 370, 40 }, { 370, 320 }, { 370, 320 }, { 370, 340 }, { 370, 40 },
#elif defined(VERSION_PAL)
	{ 380, 7 }, { 380, 7 }, { 380, 7 }, { 380, 40 }, { 380, 7 }, { 380, 7 }, { 380, 7 }, { 380, 40 },
#else
	{ 370, 15 }, { 370, 15 }, { 370, 15 }, { 370, 40 }, { 370, 15 }, { 370, 15 }, { 370, 15 }, { 370, 40 },
#endif
};
} // namespace

/**
 * @note Address: 0x8044CBB8
 * @note Size: 0x54
 */
Section::Section(JKRHeap* heap)
    : Game::BaseHIOSection(heap)
    , mTimer(0.0f)
{
}

/**
 * @note Address: 0x8044CC0C
 * @note Size: 0x88
 */
Section::~Section()
{
}

/**
 * @note Address: 0x8044CC94
 * @note Size: 0x1A0
 */
void Section::init()
{
	sys->heapStatusStart("TitleSection::init", nullptr);

	sys->heapStatusStart("JMANewSinTable", nullptr);
	sys->heapStatusEnd("JMANewSinTable");

	HIORootNode* root = new HIORootNode(this);
	initHIO(root);

	sys->heapStatusStart("frameBuffer", nullptr);
	setDisplay(JFWDisplay::createManager(nullptr, mDisplayHeap, JUTXfb::DoubleBuffer, false), 1);
	sys->heapStatusEnd("frameBuffer");

	mController = new Controller(JUTGamePad::PORT_0);

	sys->setFrameRate(2);
	mMoviePlayer.init(mDisplayHeap);

	addGenNode(&mMoviePlayer);
	mTimeStep = 0.5f;

	JUTProcBar::sManager->setVisible(false);
	JUTProcBar::sManager->setVisibleHeapBar(false);
	if (sMovieIndex == -1) {
		sMovieIndex = randInt(sizeof(sMovieIndexTable));
	}
}

/**
 * @note Address: 0x8044CE34
 * @note Size: 0xE8
 */
void Section::doDraw(Graphics& gfx)
{
	mMoviePlayer.draw(gfx);
	gfx.mOrthoGraph.setPort();

	J2DPicture pic(mLogoTexture);
	LogoLocation& location = sLogoLocate[sMovieIndex];
	pic.draw(location.x, location.y, pic.getWidth(), pic.getHeight(), false, false, false);
}

/**
 * @note Address: 0x8044CF1C
 * @note Size: 0xAC
 */
bool Section::doUpdate()
{
	mTimer += sys->mDeltaTime;

	BaseHIOSection::doUpdate();
	if (mMoviePlayer.isFinishPlaying()) {
		mIsMainActive = false;
	}

	// if any button is pressed
	if (mController->isButtonDown(~JUTGamePad::False) && mIsMainActive) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
		mIsMainActive = false;
	}

	mMoviePlayer.play();
	mMoviePlayer.update();
	return mIsMainActive;
}

/**
 * @note Address: 0x8044CFC8
 * @note Size: 0xB0
 */
void Section::doExit()
{
	PSMGetSceneMgrCheck()->deleteCurrentScene();

	u32 max = sizeof(sMovieIndexTable);
	if (++sMovieIndex >= max) {
		sMovieIndex = 0;
	}

	mMoviePlayer.stop();
}

/**
 * @note Address: 0x8044D078
 * @note Size: 0xA4
 */
void Section::doLoadingStart()
{
	mMoviePlayer.load((Game::THPPlayer::EMovieIndex)sMovieIndexTable[sMovieIndex]);

	Delegate<Section>* delegate = new Delegate<Section>(this, &loadResource);
	sys->dvdLoadUseCallBack(&mThreadCommand, delegate);
}

/**
 * @note Address: 0x8044D11C
 * @note Size: 0x38
 */
bool Section::doLoading()
{
	return sys->dvdLoadSyncNoBlock(&mThreadCommand) == 0;
}

/**
 * @note Address: 0x8044D154
 * @note Size: 0xC8
 */
void Section::loadResource()
{
#if defined(VERSION_JP)
	JKRArchive* arc = JKRMountArchive("/user/yamashita/arc/demoMovieLogo_jp.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
#elif defined(VERSION_PAL)
	JKRArchive* arc = JKRMountArchive("/user/yamashita/arc/demoMovieLogo_pal.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
#else
	JKRArchive* arc = JKRMountArchive("/user/yamashita/arc/demoMovieLogo_us.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
#endif
#if defined(VERSION_PAL)
	P2ASSERTLINE(431, arc);
#elif defined(VERSION_JP)
	P2ASSERTLINE(422, arc);
#else
	P2ASSERTLINE(428, arc);
#endif

	ResTIMG* timg = JKRGetImageResource("/data/timg/pikmin2_logo.bti");
#if defined(VERSION_PAL)
	P2ASSERTLINE(436, timg);
#elif defined(VERSION_JP)
	P2ASSERTLINE(427, timg);
#else
	P2ASSERTLINE(433, timg);
#endif

	mLogoTexture = new JUTTexture(timg);
}

} // namespace Demo
