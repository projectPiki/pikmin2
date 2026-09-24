#include "BootSection.h"
#include "P2JME/SimpleMessage.h"
#include "JSystem/J2D/J2DPrint.h"
#include "TinyPikmin.h"
#include "TinyPikminMgr.h"
#include "System.h"
#include "Dolphin/rand.h"
#include "Pikmin2ARAM.h"
#include "TParticle2dMgr.h"
#include "Controller.h"
#include "IDelegate.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JUtility/JUTProcBar.h"
#include "JSystem/JFramework/JFWDisplay.h"
#include "ebi/Screen/TScreenBase.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "Game/Data.h"
#include "Game/MemoryCard/Mgr.h"
#include "og/ogLib2D.h"
#include "PSSystem/PSGame.h"
#include "Game/GameConfig.h"
#include "PSM/Scene.h"
#include "ebi/Progre.h"
#include "trig.h"

static u32 unused[4] = { 1, 2, 3, 0 }; // has to be generated before nans
#include "nans.h"
#include "Game/Piki.h"

static const u32 padding[]        = { 0, 0, 0 };
u32 TinyPikminMgr::sTinyPikminNum = 10;
J2DPicture* TinyPikminMgr::sPikminTex[5];
BootSection* sBootSection;
static TinyPikminMgr* sTinyPikminMgr;

/**
 * @note Address: 0x804473BC
 * @note Size: 0x30
 */
TinyPikmin::TinyPikmin()
{
	mState          = 0;
	mColor          = 0;
	mOffsetX        = 0.0f;
	mOffsetY        = 0.0f;
	mPositionY      = 0.0f;
	mScaleAnimTimer = 1.0f;
	mWaitTimer      = 0.0f;
	mWaitDuration   = 1.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x110
 */
void TinyPikmin::init(int color, f32 x, f32 y, f32 wait)
{
	mState          = INACTIVE;
	mColor          = color;
	mOffsetX        = x;
	mOffsetY        = y;
	mPositionX      = 0.0f;
	mPositionY      = 70.0f;
	mScaleAnimTimer = randFloat();
	mWaitTimer      = 0.0f;
	mWaitDuration   = wait;
	mVelocityX      = 0.0f;
	mVelocityY      = 0.0f;
	mAngle          = 0.0f;

	switch (mColor) {
	case White:
		mTimeScale = 2.0f;
		break;
	case Purple:
		mTimeScale = 1.0f;
		if (sTinyPikminMgr->mDoSlamPikmin) {
			mPositionY = -200.0f;
		}
		break;
	default:
		mTimeScale = 1.5f;
	}

	if (sTinyPikminMgr->mMode == 1) {
		mPositionY = -200.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void TinyPikmin::wind(f32 xVel)
{
	if (mState != INACTIVE && mState != WAIT) {
		mState = SLAMMED;
		mVelocityX += xVel;
		mVelocityY -= randFloat() * 20.0f + 10.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void TinyPikmin::appear()
{
	if (mState != WAIT) {
		mWaitTimer = 0.0f;
		mState     = WAIT;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void TinyPikmin::disappear()
{
	// this is just guessing for sdata2 to be correct, The code prior to the TinyPikmin::init in
	// TinyPikminMgr::init seems to belong here, but how exactly, I havent figured out

	int color = 4.0f * randFloat();
	mColor    = color;
	color     = 5.0f * randFloat();
	mColor    = color;

	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804473EC
 * @note Size: 0x4B8
 */
void TinyPikmin::update()
{
	switch (mState) {
	case WAIT:
		if (mWaitTimer > mWaitDuration) {
			mWaitTimer = 0.0f;
			mState     = LANDED;
			mVelocityY = -(randFloat() * 7.0f + 8.5f);
		} else {
			mWaitTimer += sys->mDeltaTime;
		}
		break;
	case INACTIVE:
		break;
	case LANDED:
		mVelocityY += TINYPIKMIN_FALL_ACCEL;
		mPositionY += mVelocityY;
		if (mVelocityY > 0.0f && mPositionY > 0.0f) {
			if (sTinyPikminMgr->mDoSlamPikmin && mColor == Purple && mVelocityY > 10.0f) {
				// Trigger slam effect
				for (int i = 0; i < TinyPikminMgr::sTinyPikminNum; i++) {
					TinyPikmin* piki = sTinyPikminMgr->getPiki(i);

					if (piki != this) {
						Vector2f vec(piki->mOffsetX - mOffsetX, piki->mOffsetY - mOffsetY);
						f32 dist = vec.length();
						if (dist < 300.0f) {
							f32 x = (1.0f - dist / 300.0f) * 20.0f;
							x *= (piki->mOffsetX < mOffsetX) ? -1.0f : 1.0f;
							piki->wind(x);
						}
					}
				}
				sBootSection->mLogoShakeStrength = 15.0f;
			}
			mVelocityY = 0.0f;
			mPositionY = 0.0f;
			mWaitTimer += sys->mDeltaTime;
			if (sTinyPikminMgr->_08 && mWaitTimer > 1.0f) {
				mState     = FALLING;
				mVelocityY = randFloat() * -4.0f + -4.0f;
			}
			if (randFloat() > 0.9f) {
				f32 weight;
				switch (mColor) {
				case White:
					weight = 2.0f;
					break;
				case Purple:
					weight = 0.5f;
					break;
				default:
					weight = 1.0f;
					break;
				}
				mVelocityY = weight * (randFloat() * -4.0f + -1.0f);
			}
		}
		break;
	case FALLING:
		if (mPositionY > TINYPIKMIN_STAND_HEIGHT) {
			mPositionY = TINYPIKMIN_STAND_HEIGHT;
			mVelocityY = 0.0f;
			mState     = INACTIVE;
		} else {
			mVelocityY += TINYPIKMIN_FALL_ACCEL;
			mPositionY += mVelocityY;
		}
		break;
	case SLAMMED:
		mVelocityX *= 0.98f;
		mVelocityY += TINYPIKMIN_FALL_ACCEL;
		mPositionX += mVelocityX;
		mPositionY += mVelocityY;
		mAngle = -(mVelocityX * 0.75f - mAngle);
		if (mAngle > 360.0f) {
			mAngle -= 360.0f;
		}
		if (mAngle < 0.0f) {
			mAngle += 360.0f;
		}
		if (mPositionY > TINYPIKMIN_OFFSCREEN_Y) {
			mState = INACTIVE;
		}
		break;
	}

	mScaleAnimTimer += mTimeScale * sys->mDeltaTime;
	if (mScaleAnimTimer > 1.0f) {
		mScaleAnimTimer = 0.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x180
 */
void TinyPikmin::draw()
{
	if (mState != INACTIVE) {
		f32 xScale;
		f32 yScale;
		if (mPositionY < 0.0f) {
			f32 t = absF(mPositionY / 10.0f);
			if (t > 1.0f) {
				t = 1.0f;
			}

			xScale = (1.0f - t) * 0.2f + 0.8f;
			yScale = t * 0.2f + 1.0f;
		} else {
			yScale = xScale = 1.0f;
		}

		f32 angle = mScaleAnimTimer * TAU;
		xScale *= sinf(angle) * 0.1f + 1.0f;     // [0.9, 1.1]
		yScale *= -(sinf(angle) * 0.08f - 1.0f); // [1.08, 0.92]
		f32 yPosition = mOffsetY + mPositionY;
		f32 xPosition = mOffsetX + mPositionX;
		drawPikmin(xScale, yScale, xPosition, yPosition);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x100
 */
void TinyPikmin::drawPikmin(f32 xScale, f32 yScale, f32 xPosition, f32 yPosition)
{
	J2DPicture* pic = sTinyPikminMgr->sPikminTex[mColor];
	pic->updateScale(xScale, yScale);
	pic->rotate(pic->getWidth() / 2, pic->getHeight() / 2, J2DROTATE_Z, mAngle);
	pic->draw(-(pic->getWidth() / 2 - xPosition), yPosition - pic->getHeight(), false, false, false);
}

/**
 * @note Address: N/A
 * @note Size: 0x198
 */
TinyPikminMgr::TinyPikminMgr()
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(748, !sTinyPikminMgr);
#elif defined(VERSION_JP)
	P2ASSERTLINE(705, !sTinyPikminMgr);
#else
	P2ASSERTLINE(731, !sTinyPikminMgr);
#endif
	sTinyPikminMgr = this;

	int pikis;
	if (randFloat() < TINYPIKMINMGR_HIGHCOUNT_CHANCE) {
		pikis = TINYPIKMINMGR_LOWERCOUNT;
	} else {
		pikis = TINYPIKMINMGR_HIGHERCOUNT;
	}

	sTinyPikminNum = pikis;
	mPikis         = new TinyPikmin[sTinyPikminNum];
	if (randFloat() > 0.5f) {
		mMode = 0;
	} else {
		mMode = 1;
	}

	_08 = randFloat() > 0.5f;

	if (randFloat() > 0.5f) {
		mDoSlamPikmin = 1;
	} else {
		mDoSlamPikmin = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x124
 */
void TinyPikminMgr::loadResource(JKRArchive* arc)
{
	char* pikipaths[5]
	    = { "title_red_5a3.bti", "title_yellow_5a3.bti", "title_blue_5a3.bti", "title_white_5a3.bti", "title_violet_5a3.bti" };
	ResTIMG* file;
	for (int i = 0; i < 5; i++) {
		char buf[PATH_MAX];
		sprintf(buf, "timg/%s", pikipaths[i]);
		file = static_cast<ResTIMG*>(arc->getResource(buf));
#if defined(VERSION_PAL)
		JUT_ASSERTLINE(803, file, buf);
#elif defined(VERSION_JP)
		JUT_ASSERTLINE(760, file, buf);
#else
		JUT_ASSERTLINE(786, file, buf);
#endif
		JUTTexture* tex = new JUTTexture(file);
		sPikminTex[i]   = new J2DPicture(tex);
		sPikminTex[i]->setBasePosition(J2DPOS_BottomCenter);
	}
}

/**
 * @note Address: 0x804478A4
 * @note Size: 0x4C8
 */
void TinyPikminMgr::init()
{
	f32 maxTime, interval;

	interval = 1.5f / sTinyPikminNum;
	maxTime  = 274.0f / sTinyPikminNum;

	// Create a list of random time values
	f32* timeValues = new (-0x20) f32[sTinyPikminNum];
	for (int i = 0; i < sTinyPikminNum; i++) {
		timeValues[i] = (maxTime * i) + (0.75f * (maxTime * (randFloat() - 0.5f)));
	}

	// Randomly swap around times
	for (int i = 0; i < sTinyPikminNum; i++) {
		int id   = sTinyPikminNum * randFloat();
		int id2  = sTinyPikminNum * randFloat();
		f32 temp = timeValues[id];

		timeValues[id]  = timeValues[id2];
		timeValues[id2] = temp;
	}

	// Red is the default color, 25% chance to pick a random different color
	int color        = TinyPikmin::Red;
	bool changecolor = false;
	if (randFloat() > 0.75f) {
		changecolor = true;
		color       = randInt(Game::AllPikmin);
	}

	f32 delay = maxTime * 0.5f + 175.0f;
	for (int i = 0; i < sTinyPikminNum; i++) {

		// these rand calls belong in TinyPikmin::disappear based on sdata2, but I dont know how that works yet
		if (mDoSlamPikmin) {
			if (i == sTinyPikminNum - 1) {
				color = TinyPikmin::Purple;
			} else if (!changecolor) {
				color = 4.0f * randFloat();
			}
		} else if (!changecolor) {
			color = 5.0f * randFloat();
		}

		f32 x;
		if (i == 0) {
			x = 0.0f;
		} else {
			x = ((f32)i * interval) + (interval * randFloat());
		}

		mPikis[i].init(color, delay + timeValues[i], 166.0f, x);
	}

	delete[] timeValues;
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void TinyPikminMgr::update()
{
	for (int i = 0; i < sTinyPikminNum; i++) {
		mPikis[i].update();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x274
 */
void TinyPikminMgr::draw()
{
	for (int i = 0; i < sTinyPikminNum; i++) {
		mPikis[i].draw();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void TinyPikminMgr::appear()
{
	for (int i = 0; i < sTinyPikminNum; i++) {
		mPikis[i].appear();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
void TinyPikminMgr::disappear()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80447D6C
 * @note Size: 0x348
 */
BootSection::BootSection(JKRHeap* heap)
    : BaseHIOSection(heap)
    , mStateID(SID_NullState)
    , mChangeStateID(SID_NullState)
    , mFadeTimer(0.0f)
    , mNintendoLogoTexture(nullptr)
    , mController(nullptr)
    , mProgressiveScreen(nullptr)
    , mProgressiveActive(false)
    , mDoOpenProgressive(false)
    , mLogoShakeStrength(0.0f)
#if defined(VERSION_PAL)
    , mTVModeMessage(nullptr)
    , mTVModeSelection(0)
    , mTVModeAlpha(255)
#endif
{
	sBootSection = this;

	Game::HIORootNode* node = new Game::HIORootNode(this);
	node->setName("ブートセクション");
	initHIO(node);

	setDisplay(JFWDisplay::createManager(nullptr, mDisplayHeap, JUTXfb::DoubleBuffer, false), 1);
	sys->setFrameRate(1);

	mButtonCallback = new Delegate<BootSection>(this, &BootSection::loadResident);

	JUTProcBar::sManager->setVisible(false);
	JUTProcBar::sManager->setVisibleHeapBar(false);

	mController = new Controller(JUTGamePad::PORT_0);
	/*mController2 =*/new Controller(JUTGamePad::PORT_1);

	sys->createRomFont(JKRGetCurrentHeap());
	gPikmin2AramMgr->setLoadPermission(true);
	particle2dMgr = nullptr;

	mPikiMgr = new TinyPikminMgr;
	mPikiMgr->init();

	mTimeStep = 0.5f;
}

/**
 * @note Address: 0x804480B4
 * @note Size: 0x84
 */
BootSection::~BootSection()
{
	sys->destroyRomFont();
}

/**
 * @note Address: 0x80448138
 * @note Size: 0x4
 */
void BootSection::init()
{
}

/**
 * @note Address: 0x8044813C
 * @note Size: 0x2B8
 * Figure out how the JKR inlines are being used
 */
void BootSection::loadBootResource()
{
	mDisplayHeap->becomeCurrentHeap();
#if defined(VERSION_PAL)
	JKRArchive* arc = JKRMountArchive("/user/yamashita/arc/boot_pal.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
#elif defined(VERSION_JP)
	JKRArchive* arc = JKRMountArchive("/user/yamashita/arc/boot_jp.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
#else
	JKRArchive* arc = JKRMountArchive("/user/yamashita/arc/boot_us.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
#endif
#if defined(VERSION_PAL)
	P2ASSERTLINE(1042, arc);
#elif defined(VERSION_JP)
	P2ASSERTLINE(999, arc);
#else
	P2ASSERTLINE(1025, arc);
#endif

	ResTIMG* file = JKRGetImageResource("/data/timg/nintendo_376x104.bti");
#if defined(VERSION_PAL)
	P2ASSERTLINE(1048, file);
#elif defined(VERSION_JP)
	P2ASSERTLINE(1005, file);
#else
	P2ASSERTLINE(1031, file);
#endif
	mNintendoLogoTexture = new JUTTexture(file);

	file = JKRGetImageResource("/data/timg/dolby_mark.bti");
#if defined(VERSION_PAL)
	P2ASSERTLINE(1051, file);
#elif defined(VERSION_JP)
	P2ASSERTLINE(1008, file);
#else
	P2ASSERTLINE(1034, file);
#endif
	mDolbyMarkTexture = new JUTTexture(file);

#if defined(VERSION_PAL) || defined(VERSION_JP)
	// PAL and JP have no warning
#else
	file = JKRGetImageResource("/data/timg/warning.bti");
	P2ASSERTLINE(1039, file);
	mWarningTexture = new JUTTexture(file);

	file = JKRGetImageResource("/data/timg/warning_pstart.bti");
	P2ASSERTLINE(1042, file);
	mWarningPressStartTexture = new JUTTexture(file);
#endif

	sTinyPikminMgr->loadResource(arc);
}

/**
 * @note Address: 0x804483F4
 * @note Size: 0x128
 */
void BootSection::load2DResource()
{
	mDisplayHeap->becomeCurrentHeap();
	sys->heapStatusStart("og::Screen::Manager2D::create", nullptr);
	og::Lib2D::create();
	sys->heapStatusEnd("og::Screen::Manager2D::create");

	sys->heapStatusStart("ebiScreen", nullptr);
	sys->heapStatusStart("TParticle2dMgr", nullptr);
	TParticle2dMgr::globalInstance();
	particle2dMgr->createHeap(TITLESCREEN_PARTICLE_HEAP_SIZE);
	particle2dMgr->createMgr("user/Ebisawa/effect/eff2d_game2d.jpc", 2000, 0x80, 0x80);
	sys->heapStatusEnd("TParticle2dMgr");

	sys->heapStatusStart("ebi::TScreenProgre", nullptr);
	mProgressiveScreen              = new ebi::TScreenProgre;
	mProgressiveScreen->mController = mController;
	sys->heapStatusEnd("ebi::TScreenProgre");

	sys->heapStatusStart("ebi::TScreenProgre::loadResource", nullptr);
	mProgressiveScreen->loadResource();
	sys->heapStatusEnd("ebi::TScreenProgre::loadResource");
	sys->heapStatusEnd("ebiScreen");
}

/**
 * @note Address: 0x804487B0
 * @note Size: 0x44
 */
void BootSection::loadResident()
{
	JKRHeap* backup = JKRGetCurrentHeap();
	sys->mSysHeap->becomeCurrentHeap();
	gPikmin2AramMgr->load();
	backup->becomeCurrentHeap();
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void BootSection::drawScreenProgre(Graphics& gfx)
{
	gfx.mPerspGraph.setPort();
	mProgressiveScreen->draw();
	gfx.mPerspGraph.setPort();
	if (particle2dMgr) {
		particle2dMgr->draw(1, 0);
		particle2dMgr->draw(0, 0);
	}
}

/**
 * @note Address: 0x804487F4
 * @note Size: 0x19C
 */
void BootSection::doDraw(Graphics& gfx)
{
	switch (mStateID) {
	case SID_LoadResourceFirst:
	case SID_LoadMemoryCard:
	case SID_InitNintendoLogo:
	case SID_FadeInNintendoLogo:
#if defined(VERSION_US)
		drawEpilepsy(gfx);
#else
		drawNintendoLogo(gfx);
#endif
		break;
	case SID_NintendoLogo:
		drawNintendoLogo(gfx);
		break;
#if defined(VERSION_PAL)
	case SID_SelectTVMode:
		drawSelectTVMode(gfx);
		break;
#endif
	case SID_WaitProgressive:
		drawProgressive(gfx);
		drawScreenProgre(gfx);
		break;
	case SID_SetInterlace:
		drawSetInterlace(gfx);
		drawScreenProgre(gfx);
		break;
	case SID_UpdateSetInterlace:
		drawSetProgressive(gfx);
		drawScreenProgre(gfx);
		break;
	case SID_DolbyLogo:
	case SID_EndState:
		drawDolbyLogo(gfx);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void BootSection::drawDebugInfo(Graphics&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80448990
 * @note Size: 0x20
 */
void BootSection::drawProgressive(Graphics& gfx)
{
	drawNintendoLogo(gfx);
}

/**
 * @note Address: 0x804489B0
 * @note Size: 0x20
 */
void BootSection::drawSetProgressive(Graphics& gfx)
{
	drawNintendoLogo(gfx);
}

/**
 * @note Address: 0x804489D0
 * @note Size: 0x20
 */
void BootSection::drawSetInterlace(Graphics& gfx)
{
	drawNintendoLogo(gfx);
}

/**
 * @note Address: 0x804489F0
 * @note Size: 0x3E0
 */
void BootSection::drawNintendoLogo(Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();
	mPikiMgr->draw();
	gfx.mOrthoGraph.setPort();

	J2DPicture pic(mNintendoLogoTexture);
	JUtility::TColor color;
#if defined(VERSION_PAL)
	if (sys->getLanguage() == System::LANG_Japanese) {
#else
	if (sys->mRegion == System::LANG_Japanese) {
#endif
		color.set(NINTENDOLOGO_COLOR_JP);
	} else {
		color.set(NINTENDOLOGO_COLOR_US);
	}
	pic.setWhite(color);
	pic.draw(mLogoShakeStrength * (randFloat() - 0.5f) + NINTENDOLOGO_XPOS, mLogoShakeStrength * (randFloat() - 0.5f) + NINTENDOLOGO_YPOS,
	         NINTENDOLOGO_WIDTH, NINTENDOLOGO_HEIGHT, false, false, false);
	if (mLogoShakeStrength > 0.0f) {
		mLogoShakeStrength *= 0.94f;
	}
}

/**
 * @note Address: 0x80448DD0
 * @note Size: 0xB4
 */
void BootSection::drawDolbyLogo(Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();

	J2DPicture pic(mDolbyMarkTexture);
	JUtility::TColor color(DOLBYLOGO_COLOR);
	pic.setWhite(color);
	pic.draw(DOLBYLOGO_XPOS, DOLBYLOGO_YPOS, DOLBYLOGO_WIDTH, DOLBYLOGO_HEIGHT, false, false, false);
}

/**
 * @note Address: 0x80448E84
 * @note Size: 0x188
 */
#if defined(VERSION_US)
void BootSection::drawEpilepsy(Graphics& gfx)
{
	// Note: This function is completely missing in all(?) versions of the game besides USA final

	gfx.mOrthoGraph.setPort();

	J2DPicture pic(mWarningTexture);
	pic.draw(0.0f, 0.0f, 608.0f, 448.0f, false, false, false);

	if (mFadeTimer > 1.5f) {
		JUtility::TColor color(255, 255, 255, 255);

		f32 calc = (1.0f - cosf(TAU * (mFadeTimer - 1.5f))) * 127.5f;
		color.a  = ROUND_F32_TO_U8(calc);

		J2DPicture pic2(mWarningPressStartTexture);
		pic2.setWhite(color);
		pic2.draw(0.0f, 360.0f, 608.0f, 48.0f, false, false, false);
	}
}
#endif

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void BootSection::changeRenderModeProgressive()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8044900C
 * @note Size: 0x694
 */
bool BootSection::doUpdate()
{
	mPikiMgr->update();
	JUTFader* fader;
	switch (mStateID) {
	case SID_LoadResourceFirst:
		updateLoadResourceFirst();
		break;
	case SID_LoadMemoryCard:
		updateLoadMemoryCard();
		break;
	case SID_NintendoLogo:
		updateNintendoLogo();
		break;
#if defined(VERSION_PAL)
	case SID_SelectTVMode:
		updateSelectTVMode();
		break;
#endif
	case SID_WaitProgressive:
		updateProgressive();
		break;
	case SID_UpdateWaitProgressive:
		updateWaitProgressive();
		break;
	case SID_UpdateSetInterlace:
		fader = mDisplay->mFader;
		switch (fader->mStatus) {
		case JUTFader::Status_In:
			mFadeTimer += sys->mDeltaTime;
			if (mController->getButtonDown() & Controller::PRESS_A || mFadeTimer > 2.0f) {
				gPikmin2AramMgr->setLoadPermission(false);
			}
			if (mFadeTimer > 1.0f && !waitLoadResource()) {
				if (mProgressiveScreen->fadeout(getFadeSpeed())) {
					mDisplay->mFader->startFadeOut(getFadeSpeed());
				}
			}
			break;
		case JUTFader::Status_Out:
			if (mProgressiveScreen->isFinish()) {
				mFadeTimer = 0.0f;
				setMode(SID_UpdateWaitProgressive);
				VISetBlack(TRUE);
				VIFlush();
				VIWaitForRetrace();
				VIWaitForRetrace();
#if defined(VERSION_PAL)
				sys->changeRenderMode(System::RM_PAL_60Hz);
#else
				sys->changeRenderMode(System::RM_NTSC_Progressive);
#endif
			}
			break;
		}
		break;
	case SID_SetInterlace:
		fader = mDisplay->mFader;
		switch (fader->mStatus) {
		case JUTFader::Status_In:
			mFadeTimer += sys->mDeltaTime;
			if (mController->getButtonDown() & Controller::PRESS_A || mFadeTimer > 2.0f) {
				gPikmin2AramMgr->setLoadPermission(false);
			}
			if (mFadeTimer > 1.0f && !waitLoadResource()) {
				if (mProgressiveScreen->fadeout(getFadeSpeed())) {
					mDisplay->mFader->startFadeOut(getFadeSpeed());
				}
			}
			break;
		case JUTFader::Status_Out:
			if (mProgressiveScreen->isFinish()) {
				mFadeTimer = 0.0f;
				setMode(SID_DolbyLogo);
#if defined(VERSION_PAL)
				sys->changeRenderMode(System::RM_PAL_Standard);
#else
				sys->changeRenderMode(System::RM_NTSC_Standard);
#endif
			}
			break;
		}
		break;
#if defined(VERSION_US_DEMO) || defined(VERSION_PAL) || defined(VERSION_JP)
	case SID_InitNintendoLogo:
		// only US has to handle the epilepsy warning fadeout thing
		setMode(SID_NintendoLogo);
		mPikiMgr->appear();
		break;
#else
	case SID_InitNintendoLogo:
		if ((mController->getButton() & Controller::PRESS_B) && VIGetDTVStatus() == 1) {
			mDoOpenProgressive = true;
		}
		fader = mDisplay->mFader;
		switch (fader->mStatus) {
		case JUTFader::Status_Out:
			fader->startFadeIn(0.5f / sys->getDeltaTime());
			mFadeTimer = 0.0f;
			break;
		case JUTFader::Status_In:
			bool dofadeout = false;
			mFadeTimer += sys->mDeltaTime;
			if ((mController->isButtonDown(~Controller::False)) && mFadeTimer > 1.5f) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
				dofadeout = true;
			} else if (mFadeTimer > 60.0f) {
				dofadeout = true;
			}

			if (dofadeout) {
				mDisplay->mFader->startFadeOut(getFadeSpeed());
				setMode(SID_FadeInNintendoLogo);
			}
			break;
		}
		break;
	case SID_FadeInNintendoLogo: {
		if (mDisplay->mFader->mStatus == 0) {
			setMode(SID_NintendoLogo);
			mPikiMgr->appear();

			PSM::Scene_Global* scene = static_cast<PSM::Scene_Global*>(PSMGetPikSceneMgrCheck()->mScenes);
			P2ASSERTLINE(1638, scene);
			scene->startGlobalStream(P2_STREAM_SOUND_ID(PSSTR_PIKMIN_GREET));
		}
		break;
	}
#endif
	case SID_DolbyLogo:
		fader = mDisplay->mFader;
		switch (fader->mStatus) {
		case JUTFader::Status_Out:
			fader->startFadeIn(0.5f / sys->mDeltaTime);
			mFadeTimer = 0.0f;
			break;
		case JUTFader::Status_In:
			mFadeTimer += sys->mDeltaTime;
			if (mFadeTimer > 1.0f) {
				setMode(SID_EndState);
			}
			break;
		}
		break;
	case SID_EndState:
		mIsMainActive = false;
		mTimeStep     = 0.5f;
	}
	if (mProgressiveActive) {
		if (mProgressiveScreen) {
			mProgressiveScreen->update();
		}
		sys->mCardMgr->update();
		if (particle2dMgr) {
			particle2dMgr->update();
		}
	}
	BaseHIOSection::doUpdate();
	return mIsMainActive;
}

/**
 * @note Address: 0x804496A0
 * @note Size: 0x9C
 */
void BootSection::updateLoadResourceFirst()
{
	sys->mCardMgr->update();
	if (!sys->dvdLoadSyncAllNoBlock()) {
		if (Game::gGameConfig.mParms.mNintendoVersion.mData) {
			sys->mPlayData->mIsRumble = false;
		} else if (!Game::gGameConfig.mParms.mE3version.mData) {
#if defined(VERSION_PAL)
			sys->mCardMgr->loadGameOption(true);
#else
			sys->mCardMgr->loadGameOption();
#endif
		}
#if defined(VERSION_US_DEMO) || defined(VERSION_PAL) || defined(VERSION_JP)
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::validateSceneMgr(mgr);
		PSM::Scene_Global* scene = static_cast<PSM::Scene_Global*>(mgr->mScenes);
#if defined(VERSION_PAL)
		P2ASSERTLINE(1748, scene);
#elif defined(VERSION_JP)
		P2ASSERTLINE(1680, scene);
#else
		P2ASSERTLINE(1723, scene);
#endif
		scene->startGlobalStream(P2_STREAM_SOUND_ID(PSSTR_PIKMIN_GREET));
#endif
		setMode(SID_LoadMemoryCard);
	}
}

/**
 * @note Address: 0x8044973C
 * @note Size: 0x13C
 */
void BootSection::updateLoadMemoryCard()
{
	sys->mCardMgr->update();

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Global* scene = static_cast<PSM::Scene_Global*>(mgr->mScenes);
#if defined(VERSION_PAL)
	P2ASSERTLINE(1773, scene);
#elif defined(VERSION_JP)
	P2ASSERTLINE(1704, scene);
#else
	P2ASSERTLINE(1748, scene);
#endif
	JAISound* handle = *(scene->getGlobalStream()->getHandleP());

	if (sys->mCardMgr->isSaveInvalid() && !handle) {
		sys->mCardMgr->checkStatus();
		sys->mPlayData->setup();
		sys->loadResourceSecond();
		setModeEpilepsy();
		sys->resetPermissionOn();
	}
}

/**
 * @note Address: 0x80449878
 * @note Size: 0x288
 */
void BootSection::updateNintendoLogo()
{
#if defined(VERSION_PAL)
	int lastMode = mStateID;
	if (!sys->isFlag(System::SF_RestoredRenderMode) || !sys->isFlag(System::SF_TVModeSelected)) {
		mDoOpenProgressive = true;
	}
	if (mDoOpenProgressive && mChangeStateID != SID_WaitProgressive && !mProgressiveActive) {
		mChangeStateID = SID_SelectTVMode;
	}
	mFadeTimer += sys->mDeltaTime;
	if (mFadeTimer > 1.5f && !waitLoadResource()) {
		if (!mProgressiveActive) {
			mProgressiveActive = true;
		}
		if (mChangeStateID != SID_SelectTVMode) {
			mChangeStateID = SID_DolbyLogo;
		}
		JUTFader* fader = mDisplay->mFader;
		if (fader->mStatus == JUTFader::Status_In) {
			fader->startFadeOut(getFadeSpeed());
		}
		if (mDisplay->mFader->mStatus == JUTFader::Status_Out) {
			setMode(mChangeStateID);
			mFadeTimer = 0.0f;
		}
	}
	if (mStateID != lastMode) {
		sys->dvdLoadUseCallBack(&mThreadCommand, mButtonCallback);
	}
#else
	int lastMode = mStateID;
	if (!Game::gGameConfig.mParms.mNintendoVersion.mData && sys->mRenderMode != System::RM_NTSC_Progressive) {
		if ((OSGetProgressiveMode() == OS_PROGRESSIVE_MODE_ON || mController->getButton() & Controller::PRESS_B) && VIGetDTVStatus() == 1) {
			mDoOpenProgressive = true;
		} else if (VIGetDTVStatus() != 1) {
			OSSetProgressiveMode(OS_PROGRESSIVE_MODE_OFF);
		}
	}

	if (mDoOpenProgressive && mChangeStateID != SID_WaitProgressive && !mProgressiveActive) {
		mChangeStateID = SID_WaitProgressive;
		sys->dvdLoadUseCallBack(&mThreadCommand, new Delegate<BootSection>(this, &BootSection::load2DResource));
	}

	mFadeTimer += sys->mDeltaTime;
	if (mFadeTimer > 1.5f && !waitLoadResource()) {
		if (!mProgressiveActive) {
			mProgressiveActive = true;
		}

		if (mChangeStateID != SID_WaitProgressive) {
			mChangeStateID  = SID_DolbyLogo;
			JUTFader* fader = mDisplay->mFader;

			if (fader->mStatus == JUTFader::Status_In) {
				fader->startFadeOut(getFadeSpeed());
			}

			if (mDisplay->mFader->mStatus == JUTFader::Status_Out) {
				setMode(mChangeStateID);
				mFadeTimer = 0.0f;
			}
		} else {
			setMode(mChangeStateID);
			mFadeTimer = 0.0f;
			mProgressiveScreen->startScreen(0, getFadeSpeed());
			mProgressiveScreen->mSelect = 1;
		}
	}

	if (mStateID != lastMode) {
		sys->dvdLoadUseCallBack(&mThreadCommand, mButtonCallback);
	}
#endif
}

/**
 * @note Address: 0x80449B00
 * @note Size: 0x180
 */
void BootSection::updateProgressive()
{
	if (mFadeTimer < 10.0f) {
		mFadeTimer += sys->mDeltaTime;

		if (mFadeTimer >= 10.0f) {
			mProgressiveScreen->setDecide();
		}

		if (mProgressiveScreen->mSelected) {
			mProgressiveScreen->fadeout(getFadeSpeed());
			mFadeTimer = 10.0f;
		}
	}

	if (mProgressiveScreen->isFinish()) {
		if (mProgressiveScreen->mSelect) {
			setMode(SID_UpdateSetInterlace);
			mProgressiveScreen->startScreen(2, getFadeSpeed());
		} else {
			setMode(SID_SetInterlace);
			mProgressiveScreen->startScreen(1, getFadeSpeed());
		}

		mFadeTimer = 0.0f;
	}
}

/**
 * @note Address: 0x80449C80
 * @note Size: 0x64
 */
void BootSection::updateWaitProgressive()
{
	mFadeTimer += 1.0f;
#if defined(VERSION_PAL)
	if (mFadeTimer > 100.0f) {
#else
	if (mFadeTimer > 150.0f) {
#endif
		VISetBlack(FALSE);
		VIFlush();
		VIWaitForRetrace();
		setMode(SID_DolbyLogo);
	}
}

/**
 * @note Address: 0x80449CE4
 * @note Size: 0x120
 */
void BootSection::run()
{
	mDisplayHeap->becomeCurrentHeap();
	sys->dvdLoadUseCallBack(&mThreadCommand, new Delegate<BootSection>(this, &BootSection::loadBootResource));
	runWait(&waitLoadResource);
	sys->loadResourceFirst();
	setMode(SID_LoadResourceFirst);
	::Section::run();
	gPikmin2AramMgr->setLoadPermission(false);
	runWait(&waitLoadResource);
	sys->heapStatusDump(true);
	mIsMainActive = false;
}

/**
 * @note Address: 0x80449E04
 * @note Size: 0x9C
 */
void BootSection::runWait(RunWaitCallback func)
{
	bool dorun = true;
	while (dorun) {
		beginFrame();
		beginRender();
		draw(*mGraphics);
		endRender();
		dorun = (this->*func)();
		endFrame();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void BootSection::waitLoadGameOption()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void BootSection::waitSystemDvdLoad()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80449EA0
 * @note Size: 0x30
 */
bool BootSection::waitLoadResource()
{
	return sys->dvdLoadSyncAllNoBlock() != 0;
}

/**
 * @note Address: 0x80449ED0
 * @note Size: 0x84
 */
void BootSection::setMode(int id)
{
	if (mStateID != id) {
		mStateID = (StateID)id;
		switch (mStateID) {
		case SID_NintendoLogo:
			mDisplay->mFader->startFadeIn(0.5f / sys->mDeltaTime);
			mFadeTimer = 0.0f;
			break;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
BootSection::StateID BootSection::getModeEpilepsy()
{
	return mStateID;
}

/**
 * @note Address: 0x80449F54
 * @note Size: 0x88
 */
void BootSection::setModeEpilepsy()
{
	setMode(SID_InitNintendoLogo);
}

#if defined(VERSION_PAL)
/**
 * @note Address: 0x80449F74 (PAL)
 * @note Size: 0x3E8
 * @note Fabricated name. Guess based on what it does.
 */
void BootSection::updateSelectTVMode()
{
	switch (mTVModeState) {
	case 0: {
		JUTFader* fader = mDisplay->mFader;
		switch (fader->mStatus) {
		case JUTFader::Status_Out: {
			fader->startFadeIn(0.5f / sys->mDeltaTime);
			JKRHeap* previousHeap = JKRGetCurrentHeap();
			mDisplayHeap->becomeCurrentHeap();
			mFadeTimer     = 0.0f;
			mTVModeMessage = new P2JME::SimpleMessage;
			mTVModeMessage->init();
			if (OSGetEuRgb60Mode() == 1) {
				mTVModeSelection = 0;
			} else {
				mTVModeSelection = 1;
			}
			mTVModeAlpha = 255;
			previousHeap->becomeCurrentHeap();
			break;
		}
		case JUTFader::Status_In: {
			mFadeTimer += sys->mDeltaTime;
			int previousSelection = mTVModeSelection;
			mTVModeSelection
			    += (int)mController->isButtonDown(Controller::ANALOG_RIGHT) - (mController->isButtonDown(Controller::ANALOG_LEFT) != false);
			if (mTVModeSelection < 0) {
				mTVModeSelection = 0;
			} else if (mTVModeSelection > 1) {
				mTVModeSelection = 1;
			}
			if (previousSelection != mTVModeSelection) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
			}
			if ((mController->getButtonDown() & Controller::PRESS_A) || mFadeTimer > 10.0f) {
				mFadeTimer = 10.0f;
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
				mTVModeState = 1;
			}
			break;
		}
		}
		break;
	}
	case 1:
		if (mTVModeAlpha > 25) {
			mTVModeAlpha -= 25;
		} else {
			mTVModeAlpha = 0;
			mFadeTimer   = 0.0f;
			mTVModeState = 2;
		}
		break;
	case 2:
		mFadeTimer += sys->mDeltaTime;
		if (mFadeTimer > 2.0f || (mController->getButtonDown() & Controller::PRESS_A)) {
			mTVModeState = 3;
			mDisplay->mFader->startFadeOut(getFadeSpeed());
		}
		break;
	case 3:
		if (mDisplay->mFader->mStatus == JUTFader::Status_Out) {
			mFadeTimer = 0.0f;
			if (mTVModeSelection == 0) {
				setMode(SID_UpdateWaitProgressive);
				VISetBlack(TRUE);
				VIFlush();
				VIWaitForRetrace();
				VIWaitForRetrace();
				sys->changeRenderMode(System::RM_PAL_60Hz);
			} else {
				setMode(SID_DolbyLogo);
				sys->changeRenderMode(System::RM_PAL_Standard);
			}
			// record that the TV mode selection has finished
			sys->setFlag(System::SF_TVModeSelected);
		}
		break;
	default:
		JUT_PANICLINE(2313, "Unknown mode");
	}
}

/**
 * @note Address: 0x8044A35C (PAL)
 * @note Size: 0x600
 * @note Fabricated name. Guess based on what it does.
 */
void BootSection::drawSelectTVMode(Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();
	if (mTVModeMessage) {
		u8 alpha                         = mTVModeAlpha;
		P2JME::TRenderingProcessor* proc = mTVModeMessage->mProcessor;
		proc->mActiveLineHeight          = 26.0f;
		proc->mLineHeight                = 26.0f;
		JUtility::TColor promptColor(255, 255, 255, alpha);
		JUtility::TColor resultColor(255, 255, 255, 255 - alpha);
		JUtility::TColor selectedColor(255, 255, 0, alpha);
		JUtility::TColor unselectedColor(50, 50, 200, alpha);

		proc->initFlagsA();
		proc->mTextBoxWidth = System::getRenderModeObj()->fbWidth;
		proc->setDefaultCharColor(promptColor);
		proc->setDefaultGradColor(promptColor);
		proc->mXOffset = 0.0f;
		mTVModeMessage->locate(0, 100);
		mTVModeMessage->drawMessageID(gfx, "8305_00");

		char* resultID;
		if (mTVModeSelection == 0) {
			resultID = "8309_00";
		} else {
			resultID = "8308_00";
		}
		proc->initFlagsA();
		proc->mTextBoxWidth = System::getRenderModeObj()->fbWidth;
		proc->setDefaultCharColor(resultColor);
		proc->setDefaultGradColor(resultColor);
		proc->mXOffset = 0.0f;
		mTVModeMessage->locate(0, 100);
		mTVModeMessage->drawMessageID(gfx, resultID);

		proc->initFlagsA();
		proc->mTextBoxWidth = (u16)System::getRenderModeObj()->fbWidth / 2;
		if (mTVModeSelection == 0) {
			proc->setDefaultCharColor(selectedColor);
			proc->setDefaultGradColor(selectedColor);
		} else {
			proc->setDefaultCharColor(unselectedColor);
			proc->setDefaultGradColor(unselectedColor);
		}
		proc->mXOffset = 0.0f;
		mTVModeMessage->locate(0, 350);
		mTVModeMessage->drawMessageID(gfx, "8306_00");

		proc->initFlagsA();
		proc->mTextBoxWidth = (u16)System::getRenderModeObj()->fbWidth / 2;
		if (mTVModeSelection == 1) {
			proc->setDefaultCharColor(selectedColor);
			proc->setDefaultGradColor(selectedColor);
		} else {
			proc->setDefaultCharColor(unselectedColor);
			proc->setDefaultGradColor(unselectedColor);
		}
		proc->mXOffset = (u16)System::getRenderModeObj()->fbWidth / 2;
		mTVModeMessage->locate(0, 350);
		mTVModeMessage->drawMessageID(gfx, "8307_00");

		J2DPrint print(gP2JMEMgr->mFont, 0.0f);
		print.initiate();
		print.setCharColor(promptColor);
		print.setGradColor(promptColor);
		f32 remaining   = 10.0f - mFadeTimer;
		int countdown   = ROUND_F32_TO_U8(remaining);
		int secondCount = ROUND_F32_TO_U8(remaining);
		u16 width       = System::getRenderModeObj()->fbWidth;
		f32 textWidth   = print.getWidth("%d", secondCount);
		print.print((width - textWidth) / 2, 350.0f, "%d", countdown);
	}
}
#endif
