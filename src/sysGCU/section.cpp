#include "Section.h"
#include "Dolphin/__start.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JUT/JUTFader.h"
#include "JSystem/JFW/JFWDisplay.h"
#include "Game/MemoryCard/Mgr.h"
#include "PSSystem/PSGame.h"
#include "THP/THPRead.h"
#include "System.h"
#include "Graphics.h"
#include "nans.h"

static const f32 unusedSectionArray[] = { 0.0f, 0.0f, 0.0f };

// TODO: move to header file
extern bool gTHPReaderDvdAccess;

// Some bullshit
static OSTime sPlayTime = (*(u32*)CONSOLE_BUS_SPEED / 4) * 300;

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
	m_isLoadingDVD = false;
	m_displayHeap  = nullptr;
	m_oldHeap      = nullptr;
	m_display      = nullptr;
	m_fader        = nullptr;
	m_displayWiper = nullptr;
	m_timeStep     = 0.5f;
	m_isMainActive = true;
	_36            = 0;
	m_isDisplayNew = false;
	_38            = 0;

	if (heap) {
		m_displayHeap = JKRExpHeap::create(heap->getFreeSize(), heap, true);
		m_oldHeap     = m_displayHeap->becomeCurrentHeap();
	} else {
		m_displayHeap = JKRExpHeap::create(JKRHeap::sRootHeap->getFreeSize(), nullptr, true);
		m_oldHeap     = m_displayHeap->becomeCurrentHeap();
	}

	if (b) {
		if (display) {
			m_display      = display;
			m_fader        = display->m_fader;
			m_isDisplayNew = false;
		} else {
			m_display = JFWDisplay::createManager(nullptr, m_displayHeap, JUTXfb::DoubleBuffer, false);
			m_fader   = new JUTFader(0, 0, JUTVideo::sManager->m_renderModeObj->fbWidth, JUTVideo::sManager->m_renderModeObj->efbHeight,
                                   JUtility::TColor(0, 0, 0, 0)); // TODO: HELP
			m_display->m_fader = m_fader;
			m_isDisplayNew     = true;

			sys->setCurrentDisplay(m_display);
			sys->setFrameRate(1);
		}
	}

	m_graphics = new Graphics();
	sys->m_gfx = m_graphics;
}

/*
 * --INFO--
 * Address:	80423944
 * Size:	000060
 */
ISection::~ISection() { }

/*
 * --INFO--
 * Address:	804239A4
 * Size:	000120
 */
Section::~Section()
{
	if (m_isDisplayNew && m_display) {
		delete m_fader;
		JUTXfb::sManager->clearIndex();
		JFWDisplay::destroyManager();
		sys->clearCurrentDisplay(m_display);
		m_display = nullptr;
	}

	if (m_displayHeap) {
		m_displayHeap->freeAll();
		JKRHeap* heap = m_displayHeap;

		void* address = (void*)m_displayHeap;
		u32 size      = heap->getFreeSize() + 4;

		m_displayHeap->destroy();
		DCStoreRange(address, size);
	}

	sys->m_gfx = nullptr;
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
	drawInit(*m_graphics, Section::Zero);

	s32 fadeTimer = getX(m_timeStep);
	if (m_display->m_fader) {
		m_display->m_fader->startFadeIn(fadeTimer);
	}

	for (f32 x = 0.0f; x < m_timeStep;) {
		beginFrame();
		beginRender();

		draw(*m_graphics);

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
	drawInit(*m_graphics, Section::One);
	do {
		sys->m_timers->newFrame();

		beginFrame();
		beginRender();

		sys->m_timers->_start("draw", true);
		draw(*m_graphics);
		sys->m_timers->_stop("draw");
		endRender();

		sys->m_timers->_start("update", true);
		update();
		sys->m_timers->_stop("update");
		endFrame();
	} while (!m_isLoadingDVD && m_isMainActive);
	// Don't draw or render while loading from DVD

	s32 timer = getX(m_timeStep);

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	mgr->checkScene();

	PSSystem::Scene* scene = mgr->m_scenes->m_child;
	if (scene) {
		scene->stopMainSeq(timer);
	}

	if (m_display->m_fader) {
		m_display->m_fader->startFadeOut(timer);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D0
 */
void Section::fadeOut()
{
	drawInit(*m_graphics, Section::Two);
	for (f32 x = 0.0f; x < m_timeStep;) {
		beginFrame();

		beginRender();
		draw(*m_graphics);
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
	JUT_ASSERTLINE(543, m_display, "no Display manager.\n");

	m_display->waitBlanking(1);

	loading();
	fadeIn();
	main();
	fadeOut();

	if (m_isLoadingDVD) {
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
	m_oldHeap->becomeCurrentHeap();
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
	if (m_displayWiper) {
		m_displayWiper->update();
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
		sys->m_cardMgr->update();
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
