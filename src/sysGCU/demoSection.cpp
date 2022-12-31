#include "Demo.h"
#include "System.h"
#include "Controller.h"
#include "Dolphin/rand.h"
#include "PSSystem/PSSystemIF.h"
#include "PSSystem/PSGame.h"
#include "SoundID.h"
#include "JSystem/JFW/JFWDisplay.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUT/JUTProcBar.h"
#include "JSystem/JUT/JUTTexture.h"

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace Demo {
namespace {

static u8 sMovieIndexTable[8] = { 5, 6, 7, 0, 8, 9, 10, 0 };
static s8 sMovieIndex         = -1;

struct LogoLocation {
	u16 x;
	u16 y;
};

static LogoLocation sLogoLocate[] = {
	{ 0x0172, 0x000F }, { 0x0172, 0x000F }, { 0x0172, 0x000F }, { 0x0172, 0x0028 },
	{ 0x0172, 0x000F }, { 0x0172, 0x000F }, { 0x0172, 0x000F }, { 0x0172, 0x0028 },
};
} // namespace

/*
 * --INFO--
 * Address:	8044CBB8
 * Size:	000054
 */
Section::Section(JKRHeap* heap)
    : Game::BaseHIOSection(heap)
    , m_timer(0.0f)
{
}

/*
 * --INFO--
 * Address:	8044CC0C
 * Size:	000088
 */
Section::~Section() { }

/*
 * --INFO--
 * Address:	8044CC94
 * Size:	0001A0
 */
void Section::init()
{
	sys->heapStatusStart("TitleSection::init", nullptr);

	sys->heapStatusStart("JMANewSinTable", nullptr);
	sys->heapStatusEnd("JMANewSinTable");

	HIORootNode* root = new HIORootNode(this);
	initHIO(root);

	sys->heapStatusStart("frameBuffer", nullptr);
	setDisplay(JFWDisplay::createManager(nullptr, m_displayHeap, JUTXfb::DoubleBuffer, false), 1);
	sys->heapStatusEnd("frameBuffer");

	m_controller = new Controller(JUTGamePad::PORT_0);

	sys->setFrameRate(2);
	m_moviePlayer.init(m_displayHeap);

	addGenNode(&m_moviePlayer);
	m_timeStep = 0.5f;

	// this struct appears messed up
	JUTProcBar::sManager->_10C = 0;
	JUTProcBar::sManager->_130 = 0;
	if (sMovieIndex == -1) {
		sMovieIndex = 8 * randFloat();
	}
}

/*
 * --INFO--
 * Address:	8044CE34
 * Size:	0000E8
 */
void Section::doDraw(Graphics& gfx)
{
	m_moviePlayer.draw(gfx);
	gfx.m_orthoGraph.setPort();

	J2DPicture pic(m_logoTexture);
	LogoLocation& location = sLogoLocate[sMovieIndex];
	pic.draw(location.x, location.y, pic._020.f.x - pic._020.i.x, pic._020.f.y - pic._020.i.y, false, false, false);
}

/*
 * --INFO--
 * Address:	8044CF1C
 * Size:	0000AC
 */
bool Section::doUpdate()
{
	m_timer += sys->m_deltaTime;

	BaseHIOSection::doUpdate();
	if (m_moviePlayer.isFinishPlaying()) {
		m_isMainActive = false;
	}

	// if any button is pressed
	if (m_controller->isButtonDown(~JUTGamePad::False) && m_isMainActive) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
		m_isMainActive = false;
	}

	m_moviePlayer.play();
	m_moviePlayer.update();
	return m_isMainActive;
}

/*
 * --INFO--
 * Address:	8044CFC8
 * Size:	0000B0
 */
void Section::doExit()
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	mgr->deleteCurrentScene();

	if ((s8)(++sMovieIndex) >= (u32)8) {
		sMovieIndex = 0;
	}

	m_moviePlayer.stop();
}

/*
 * --INFO--
 * Address:	8044D078
 * Size:	0000A4
 */
void Section::doLoadingStart()
{
	m_moviePlayer.load((Game::THPPlayer::EMovieIndex)sMovieIndexTable[sMovieIndex]);

	Delegate<Section>* delegate = new Delegate<Section>(this, loadResource);
	sys->dvdLoadUseCallBack(&m_threadCommand, delegate);
}

/*
 * --INFO--
 * Address:	8044D11C
 * Size:	000038
 */
bool Section::doLoading() { return sys->dvdLoadSyncNoBlock(&m_threadCommand) == 0; }

/*
 * --INFO--
 * Address:	8044D154
 * Size:	0000C8
 */
void Section::loadResource()
{
	JKRArchive* arc = JKRArchive::mount("/user/yamashita/arc/demoMovieLogo_us.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Unk1);
	P2ASSERTLINE(428, arc);

	ResTIMG* timg = static_cast<ResTIMG*>(JKRFileLoader::getGlbResource("/data/timg/pikmin2_logo.bti"));
	P2ASSERTLINE(433, timg);

	m_logoTexture = new JUTTexture(timg);
}

} // namespace Demo
