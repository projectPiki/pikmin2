#include "BootSection.h"
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

u32 unused[4] = { 1, 2, 3, 0 }; // has to be generated before nans
#include "nans.h"
#include "Game/Piki.h"

static const u32 padding[]        = { 0, 0, 0 };
u32 TinyPikminMgr::sTinyPikminNum = 10;
J2DPicture* TinyPikminMgr::sPikminTex[6];

/**
 * @note Address: 0x804473BC
 * @note Size: 0x30
 */
TinyPikmin::TinyPikmin()
{
	mState          = 0;
	mColor          = 0;
	mUnused0        = 0.0f;
	mUnused1        = 0.0f;
	mPositionY      = 0.0f;
	mScaleAnimTimer = 1.0f;
	mWaitTimer      = 0.0f;
	mWaitDuration   = 1.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x110
 */
void TinyPikmin::init(int color, f32 delay, f32 u2, f32 x)
{
	mState          = INACTIVE;
	mColor          = color;
	mUnused0        = delay + u2;
	mUnused1        = 166.0f;
	mPositionX      = 0.0f;
	mPositionY      = 70.0f;
	mScaleAnimTimer = randFloat();
	mWaitTimer      = 0.0f;
	mWaitDuration   = x;
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
					TinyPikmin* piki;
					if (i < TinyPikminMgr::sTinyPikminNum) {
						piki = &sTinyPikminMgr->mPikis[i];
					} else {
						piki = nullptr;
					}

					if (piki != this) {
						Vector2f vec(piki->mVelocityX - mVelocityX, piki->mVelocityY - mVelocityY);
						f32 dist = _lenVec2D(vec);
						if (dist < 300.0f) {
							f32 x   = (1.0f - dist / 300.0f) * 20.0f;
							f32 dir = 1.0f;
							if (piki->mVelocityX < mVelocityX) {
								dir = -1.0f;
							}
							x *= dir;
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
				mVelocityY = randFloat() * -4.0f + 4.0f;
			}
			if (randFloat() > 0.9f) {
				f32 weight;
				switch (mColor) {
				case Purple:
					weight = 0.5f;
					break;
				case White:
					weight = 2.0f;
					break;
				default:
					weight = 1.0f;
					break;
				}
				mVelocityY = weight * randFloat() * -4.0f + -1.0f;
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
		f32 xScale, yScale;
		if (mPositionY < 0.0f) {
			yScale = FABS(mPositionY / 10.0f);
			if (yScale > 1.0f) {
				yScale = 1.0f;
			}

			yScale *= xScale * 0.2f + 1.0f;
			xScale = (1.0f - xScale) * 0.2f + 0.8f;
		} else {
			yScale = 1.0f;
			xScale = 1.0f;
		}

		f32 angle = mScaleAnimTimer * TAU;
		xScale *= sinf(angle) * 0.1f + 1.0f;     // [0.9, 1.1]
		yScale *= -(sinf(angle) * 0.08f - 1.0f); // [1.08, 0.92]
		f32 yPosition = mVelocityY + mPositionY;
		f32 xPosition = mVelocityX + mPositionX;
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
	pic->draw(pic->getWidth() / 2 - xPosition, pic->getHeight() / 2 - yPosition, false, false, false);
}

/**
 * @note Address: N/A
 * @note Size: 0x198
 */
TinyPikminMgr::TinyPikminMgr()
{
	P2ASSERTLINE(731, !sTinyPikminMgr);
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
	for (int i = 0; i < 5; i++) {
		char buf[PATH_MAX];
		sprintf(buf, "timg/%s", pikipaths[i]);
		ResTIMG* file = static_cast<ResTIMG*>(arc->getResource(buf));
		P2ASSERTLINE(786, file); // 1031 in demo 1?
		JUTTexture* tex              = new JUTTexture(file);
		TinyPikminMgr::sPikminTex[i] = new J2DPicture(tex);
		TinyPikminMgr::sPikminTex[i]->setBasePosition(J2DPOS_BottomCenter);
	}
}

/**
 * @note Address: 0x804478A4
 * @note Size: 0x4C8
 */
void TinyPikminMgr::init()
{
	f32 interval = 1.5f / sTinyPikminNum;
	f32 maxTime  = 274.0f / sTinyPikminNum;

	// !!! timeValues doesn't ever get used. It's created to be ignored. (in TinyPikmin::init as argument 3)

	// Create a list of random time values
	f32* timeValues = new (-0x20) f32[sTinyPikminNum];
	for (int i = 0; i < sTinyPikminNum; i++) {
		timeValues[i] = (maxTime * (f32)i) + (0.75f * maxTime * randFloat() - 0.5f);
	}

	// Randomly swap around times
	for (int i = 0; i < sTinyPikminNum; i++) {
		int id          = randInt(sTinyPikminNum);
		f32 temp        = timeValues[id];
		int id2         = randInt(sTinyPikminNum);
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
		if (!mDoSlamPikmin || i == sTinyPikminNum - 1) {
			color = TinyPikmin::Purple;
		} else if (!changecolor) {
			color = randInt(4);
		} else if (!changecolor) {
			color = randInt(5);
		}

		f32 x;
		if (i == 0) {
			x = 0.0f;
		} else {
			x = ((f32)i * interval) + (interval * randFloat());
		}

		mPikis[i].init(color, delay, timeValues[i], x);
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
    , mChangeStateID(SID_FirstState)
    , mFadeTimer(0.0f)
    , mNintendoLogoTexture(nullptr)
    , mController(nullptr)
    , mProgressiveScreen(nullptr)
    , mProgressiveActive(false)
    , mDoOpenProgressive(false)
    , mLogoShakeStrength(0.0f)
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
BootSection::~BootSection() { sys->destroyRomFont(); }

/**
 * @note Address: 0x80448138
 * @note Size: 0x4
 */
void BootSection::init() { }

/**
 * @note Address: 0x8044813C
 * @note Size: 0x2B8
 * Figure out how the JKR inlines are being used
 */
void BootSection::loadBootResource()
{
	mDisplayHeap->becomeCurrentHeap();
	JKRArchive* arc = JKRMountArchive("/user/yamashita/arc/boot_us.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(1025, arc);

	ResTIMG* file = JKRGetImageResource("/data/timg/nintendo_376x104.bti");
	P2ASSERTLINE(1031, file);
	mNintendoLogoTexture = new JUTTexture(file);

	file = JKRGetImageResource("/data/timg/dolby_mark.bti");
	P2ASSERTLINE(1034, file);
	mDolbyMarkTexture = new JUTTexture(file);

	file = JKRGetImageResource("/data/timg/warning.bti");
	P2ASSERTLINE(1039, file);
	mWarningTexture = new JUTTexture(file);

	file = JKRGetImageResource("/data/timg/warning_pstart.bti");
	P2ASSERTLINE(1042, file);
	mWarningPressStartTexture = new JUTTexture(file);

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
	particle2dMgr->createHeap(0x100000);
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
	case SID_Unused3:
		drawEpilepsy(gfx); // drawNintendoLogo in USA Demo 1
		break;
	case SID_NintendoLogo:
		drawNintendoLogo(gfx);
		break;
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
void BootSection::drawProgressive(Graphics& gfx) { drawNintendoLogo(gfx); }

/**
 * @note Address: 0x804489B0
 * @note Size: 0x20
 */
void BootSection::drawSetProgressive(Graphics& gfx) { drawNintendoLogo(gfx); }

/**
 * @note Address: 0x804489D0
 * @note Size: 0x20
 */
void BootSection::drawSetInterlace(Graphics& gfx) { drawNintendoLogo(gfx); }

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
	if (sys->mRegion == System::LANG_Japanese) {
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
void BootSection::drawEpilepsy(Graphics& gfx)
{
	// uhhhh something like this probably (demo 1 moment)
	gfx.mOrthoGraph.setPort();

	J2DPicture pic(mWarningTexture);
	pic.draw(189.0f, 150.0f, -2.5f, -3.5f, false, false, false);

	f32 calc = sinf(1.00f);
	u8 alpha = calc * 255.0f;

	J2DPicture pic2(mWarningPressStartTexture);
	JUtility::TColor color(255, 255, 255, alpha);
	pic2.setWhite(color);
	pic2.draw(189.0f, 150.0f, 232.0f, 112.0f, false, false, false);
	/*
	stwu     r1, -0x300(r1)
	mflr     r0
	stw      r0, 0x304(r1)
	stw      r31, 0x2fc(r1)
	mr       r31, r3
	addi     r3, r4, 0xbc
	lwz      r12, 0xbc(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x54(r31)
	addi     r3, r1, 0x178
	bl       __ct__10J2DPictureFP10JUTTexture
	lfs      f1, lbl_805209A0@sda21(r2)
	addi     r3, r1, 0x178
	lfs      f3, lbl_80520A70@sda21(r2)
	li       r4, 0
	fmr      f2, f1
	lfs      f4, lbl_80520A08@sda21(r2)
	li       r5, 0
	li       r6, 0
	bl       draw__10J2DPictureFffffbbb
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80448FEC
	fsubs    f1, f1, f0
	li       r0, 0xff
	lfs      f2, lbl_80520A14@sda21(r2)
	lfs      f0, lbl_805209A0@sda21(r2)
	fmuls    f1, f2, f1
	stb      r0, 0xc(r1)
	stb      r0, 0xd(r1)
	fcmpo    cr0, f1, f0
	stb      r0, 0xe(r1)
	stb      r0, 0xf(r1)
	bge      lbl_80448F1C
	fneg     f1, f1

lbl_80448F1C:
	lfs      f0, lbl_80520A20@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, lbl_805209A4@sda21(r2)
	fmuls    f1, f1, f0
	lfs      f3, lbl_80520A74@sda21(r2)
	lfs      f0, lbl_805209A0@sda21(r2)
	fctiwz   f1, f1
	stfd     f1, 0x2e0(r1)
	lwz      r0, 0x2e4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fsubs    f1, f2, f1
	fmuls    f1, f3, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80448F70
	lfs      f0, lbl_805209F8@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_80448F78

lbl_80448F70:
	lfs      f0, lbl_805209F8@sda21(r2)
	fsubs    f0, f1, f0

lbl_80448F78:
	fctiwz   f0, f0
	lwz      r4, 0x58(r31)
	addi     r3, r1, 0x10
	stfd     f0, 0x2e8(r1)
	lwz      r0, 0x2ec(r1)
	stb      r0, 0xf(r1)
	bl       __ct__10J2DPictureFP10JUTTexture
	lwz      r0, 0xc(r1)
	addi     r3, r1, 0x10
	lfs      f1, lbl_805209A0@sda21(r2)
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	lfs      f2, lbl_80520A04@sda21(r2)
	li       r6, 0
	lbz      r9, 8(r1)
	lbz      r8, 9(r1)
	lbz      r7, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r9, 0x158(r1)
	lfs      f3, lbl_80520A70@sda21(r2)
	stb      r8, 0x159(r1)
	lfs      f4, lbl_80520A78@sda21(r2)
	stb      r7, 0x15a(r1)
	stb      r0, 0x15b(r1)
	bl       draw__10J2DPictureFffffbbb
	addi     r3, r1, 0x10
	li       r4, -1
	bl       __dt__10J2DPictureFv

lbl_80448FEC:
	addi     r3, r1, 0x178
	li       r4, -1
	bl       __dt__10J2DPictureFv
	lwz      r0, 0x304(r1)
	lwz      r31, 0x2fc(r1)
	mtlr     r0
	addi     r1, r1, 0x300
	blr
	*/
}

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
	case SID_InitNintendoLogo:
		// setMode(SID_NINTENDO_LOGO);
		// mPikiMgr->appear();
		break;
	case SID_NintendoLogo:
		updateNintendoLogo();
		break;
	case SID_WaitProgressive:
		updateProgressive();
		break;
	case SID_UpdateWaitProgressive:
		updateWaitProgressive();
		break;
	case SID_UpdateSetInterlace:
		fader = mDisplay->mFader;
		switch (fader->mStatus) {
		case JUTFader::Status_Out:
			if (mProgressiveScreen->isFinish()) {
				mFadeTimer = 0.0f;
				setMode(SID_UpdateWaitProgressive);
				VISetBlack(TRUE);
				VIFlush();
				VIWaitForRetrace();
				VIWaitForRetrace();
				sys->changeRenderMode(System::RM_NTSC_Progressive);
			}
			break;
		case JUTFader::Status_In:
			mFadeTimer += sys->mDeltaTime;
			if (mController->getButtonDown() & Controller::PRESS_A || mFadeTimer > 2.0f) {
				gPikmin2AramMgr->setLoadPermission(false);
			}
			if (mFadeTimer > 1.0f && !waitLoadResource()) {
				if (mProgressiveScreen->fadeout(getFadeSpeed())) {
					fader->startFadeOut(getFadeSpeed());
				}
			}
			break;
		}
		break;
	case SID_SetInterlace:
		fader = mDisplay->mFader;
		switch (fader->mStatus) {
		case JUTFader::Status_Out:
			if (mProgressiveScreen->isFinish()) {
				mFadeTimer = 0.0f;
				setMode(SID_DolbyLogo);
				sys->changeRenderMode(System::RM_NTSC_Standard);
			}
			break;
		case JUTFader::Status_In:
			mFadeTimer += sys->mDeltaTime;
			if (mController->getButtonDown() & Controller::PRESS_A || mFadeTimer > 2.0f) {
				gPikmin2AramMgr->setLoadPermission(false);
			}
			if (mFadeTimer > 1.0f && !waitLoadResource()) {
				if (mProgressiveScreen->fadeout(getFadeSpeed())) {
					fader->startFadeOut(getFadeSpeed());
				}
			}
			break;
		}
		break;
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r31, r3
	lis      r3, lbl_8049AF08@ha
	li       r29, 0
	mr       r27, r29
	addi     r30, r3, lbl_8049AF08@l
	lwz      r28, 0xe0(r31)
	b        lbl_8044904C

lbl_80449038:
	lwz      r0, 0(r28)
	add      r3, r0, r27
	bl       update__10TinyPikminFv
	addi     r27, r27, 0x34
	addi     r29, r29, 1

lbl_8044904C:
	lwz      r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	cmplw    r29, r0
	blt      lbl_80449038
	lwz      r0, 0x48(r31)
	cmplwi   r0, 0xa
	bgt      lbl_8044963C
	lis      r3, lbl_804ED03C@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804ED03C@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_8044907C:
	mr       r3, r31
	bl       updateLoadResourceFirst__11BootSectionFv
	b        lbl_8044963C

lbl_80449088:
	mr       r3, r31
	bl       updateLoadMemoryCard__11BootSectionFv
	b        lbl_8044963C

lbl_80449094:
	mr       r3, r31
	bl       updateNintendoLogo__11BootSectionFv
	b        lbl_8044963C

lbl_804490A0:
	mr       r3, r31
	bl       updateProgressive__11BootSectionFv
	b        lbl_8044963C

lbl_804490AC:
	mr       r3, r31
	bl       updateWaitProgressive__11BootSectionFv
	b        lbl_8044963C

lbl_804490B8:
	lwz      r3, 0x24(r31)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_804490DC
	bge      lbl_8044963C
	cmpwi    r0, 0
	bge      lbl_804491D8
	b        lbl_8044963C

lbl_804490DC:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x50(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r31)
	lwz      r3, 0xd4(r31)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80449110
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209B0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8044911C

lbl_80449110:
	lwz      r3, gPikmin2AramMgr@sda21(r13)
	li       r4, 0
	bl       setLoadPermission__Q211Pikmin2ARAM3MgrFb

lbl_8044911C:
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209A4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8044963C
	mr       r3, r31
	bl       waitLoadResource__11BootSectionFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8044963C
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 0xd8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80449168
	fadds    f0, f2, f1
	b        lbl_8044916C

lbl_80449168:
	fsubs    f0, f1, f2

lbl_8044916C:
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	bl       fadeout__Q23ebi13TScreenProgreFUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8044963C
	lwz      r4, sys@sda21(r13)
	lwz      r3, 0x24(r31)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_804491B4
	fadds    f0, f2, f1
	b        lbl_804491B8

lbl_804491B4:
	fsubs    f0, f1, f2

lbl_804491B8:
	fctiwz   f0, f0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	b        lbl_8044963C

lbl_804491D8:
	lwz      r3, 0xd8(r31)
	bl       isFinish__Q23ebi13TScreenProgreFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8044963C
	lfs      f0, lbl_805209A0@sda21(r2)
	mr       r3, r31
	li       r4, 6
	stfs     f0, 0x50(r31)
	bl       setMode__11BootSectionFi
	li       r3, 1
	bl       VISetBlack
	bl       VIFlush
	bl       VIWaitForRetrace
	bl       VIWaitForRetrace
	lwz      r3, sys@sda21(r13)
	li       r4, 1
	bl       changeRenderMode__6SystemFQ26System11ERenderMode
	b        lbl_8044963C

lbl_80449220:
	lwz      r3, 0x24(r31)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_80449244
	bge      lbl_8044963C
	cmpwi    r0, 0
	bge      lbl_80449340
	b        lbl_8044963C

lbl_80449244:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x50(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r31)
	lwz      r3, 0xd4(r31)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	bne      lbl_80449278
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209B0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80449284

lbl_80449278:
	lwz      r3, gPikmin2AramMgr@sda21(r13)
	li       r4, 0
	bl       setLoadPermission__Q211Pikmin2ARAM3MgrFb

lbl_80449284:
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209A4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8044963C
	mr       r3, r31
	bl       waitLoadResource__11BootSectionFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8044963C
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 0xd8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_804492D0
	fadds    f0, f2, f1
	b        lbl_804492D4

lbl_804492D0:
	fsubs    f0, f1, f2

lbl_804492D4:
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	bl       fadeout__Q23ebi13TScreenProgreFUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8044963C
	lwz      r4, sys@sda21(r13)
	lwz      r3, 0x24(r31)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8044931C
	fadds    f0, f2, f1
	b        lbl_80449320

lbl_8044931C:
	fsubs    f0, f1, f2

lbl_80449320:
	fctiwz   f0, f0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	b        lbl_8044963C

lbl_80449340:
	lwz      r3, 0xd8(r31)
	bl       isFinish__Q23ebi13TScreenProgreFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8044963C
	lfs      f0, lbl_805209A0@sda21(r2)
	mr       r3, r31
	li       r4, 9
	stfs     f0, 0x50(r31)
	bl       setMode__11BootSectionFi
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	bl       changeRenderMode__6SystemFQ26System11ERenderMode
	b        lbl_8044963C

lbl_80449374:
	lwz      r3, 0xd4(r31)
	lwz      r0, 0x18(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80449398
	bl       VIGetDTVStatus
	cmplwi   r3, 1
	bne      lbl_80449398
	li       r0, 1
	stb      r0, 0xdd(r31)

lbl_80449398:
	lwz      r3, 0x24(r31)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_804493F4
	bge      lbl_8044963C
	cmpwi    r0, 0
	bge      lbl_804493BC
	b        lbl_8044963C

lbl_804493BC:
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r3)
	lfs      f1, lbl_805209F8@sda21(r2)
	lfs      f0, 0x54(r4)
	lwz      r12, 0xc(r12)
	fdivs    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	lfs      f0, lbl_805209A0@sda21(r2)
	stfs     f0, 0x50(r31)
	b        lbl_8044963C

lbl_804493F4:
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	lfs      f1, 0x50(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r31)
	lwz      r3, 0xd4(r31)
	lwz      r0, 0x1c(r3)
	rotlwi.  r0, r0, 0
	beq      lbl_80449444
	lfs      f1, 0x50(r31)
	lfs      f0, lbl_805209B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80449444
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1800
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	li       r4, 1
	b        lbl_80449458

lbl_80449444:
	lfs      f1, 0x50(r31)
	lfs      f0, zz_80520a7c@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80449458
	li       r4, 1

lbl_80449458:
	clrlwi.  r0, r4, 0x18
	beq      lbl_8044963C
	lwz      r4, sys@sda21(r13)
	lwz      r3, 0x24(r31)
	lfs      f2, lbl_805209F8@sda21(r2)
	lfs      f1, 0x54(r4)
	lfs      f0, lbl_805209A0@sda21(r2)
	fdivs    f1, f2, f1
	lwz      r3, 4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80449490
	fadds    f0, f2, f1
	b        lbl_80449494

lbl_80449490:
	fsubs    f0, f1, f2

lbl_80449494:
	fctiwz   f0, f0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 3
	bl       setMode__11BootSectionFi
	b        lbl_8044963C

lbl_804494C0:
	lwz      r3, 0x24(r31)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 0
	bne      lbl_8044963C
	mr       r3, r31
	li       r4, 4
	bl       setMode__11BootSectionFi
	li       r4, 0
	lwz      r5, 0xe0(r31)
	lfs      f0, lbl_805209A0@sda21(r2)
	mr       r7, r4
	li       r3, 1
	b        lbl_8044951C

lbl_804494F8:
	lwz      r0, 0(r5)
	add      r6, r0, r7
	lwz      r0, 0(r6)
	cmpwi    r0, 1
	beq      lbl_80449514
	stfs     f0, 0x20(r6)
	stw      r3, 0(r6)

lbl_80449514:
	addi     r7, r7, 0x34
	addi     r4, r4, 1

lbl_8044951C:
	lwz      r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
	cmplw    r4, r0
	blt      lbl_804494F8
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80449548
	addi     r3, r30, 0x1ec
	addi     r5, r30, 0x1c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80449548:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_80449568
	addi     r3, r30, 0x1ec
	addi     r5, r30, 0x1c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80449568:
	lwz      r27, 4(r28)
	cmplwi   r27, 0
	bne      lbl_80449588
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x666
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80449588:
	lis      r4, 0xC001101F@ha
	mr       r3, r27
	addi     r4, r4, 0xC001101F@l
	bl       startGlobalStream__Q23PSM12Scene_GlobalFUl
	b        lbl_8044963C

lbl_8044959C:
	lwz      r3, 0x24(r31)
	lwz      r3, 4(r3)
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_804495F8
	bge      lbl_8044963C
	cmpwi    r0, 0
	bge      lbl_804495C0
	b        lbl_8044963C

lbl_804495C0:
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r3)
	lfs      f1, lbl_805209F8@sda21(r2)
	lfs      f0, 0x54(r4)
	lwz      r12, 0xc(r12)
	fdivs    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	mtctr    r12
	bctrl
	lfs      f0, lbl_805209A0@sda21(r2)
	stfs     f0, 0x50(r31)
	b        lbl_8044963C

lbl_804495F8:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x50(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_805209A4@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x50(r31)
	lfs      f1, 0x50(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8044963C
	mr       r3, r31
	li       r4, 0xa
	bl       setMode__11BootSectionFi
	b        lbl_8044963C

lbl_8044962C:
	li       r0, 0
	lfs      f0, lbl_805209F8@sda21(r2)
	stb      r0, 0x34(r31)
	stfs     f0, 0x30(r31)

lbl_8044963C:
	lbz      r0, 0xdc(r31)
	cmplwi   r0, 0
	beq      lbl_80449680
	lwz      r3, 0xd8(r31)
	cmplwi   r3, 0
	beq      lbl_80449658
	bl       update__Q23ebi13TScreenProgreFv

lbl_80449658:
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80449680
	bl       update__14TParticle2dMgrFv

lbl_80449680:
	mr       r3, r31
	bl       doUpdate__Q24Game14BaseHIOSectionFv
	lbz      r3, 0x34(r31)
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
			sys->mCardMgr->loadGameOption();
		}
		// THIS IS ALL FOR DEMO 1
#if BUILDTARGET == USADEMO1
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::validateSceneMgr(mgr);
		PSM::Scene_Global* scene = static_cast<PSM::Scene_Global*>(mgr->mScenes);
		P2ASSERTLINE(1723, scene);
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
	P2ASSERTLINE(1748, scene);
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
	int lastMode = mStateID;
	if (!Game::gGameConfig.mParms.mNintendoVersion.mData && sys->mRenderMode != System::RM_NTSC_Progressive) {
		if ((OSGetProgressiveMode() == 1 || mController->getButton() & Controller::PRESS_B) && VIGetDTVStatus() == 1) {
			mDoOpenProgressive = true;
		} else if (VIGetDTVStatus() != 1) {
			OSSetProgressiveMode(0);
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
			mFadeTimer                 = 0.0f;
			ebi::TScreenProgre* screen = mProgressiveScreen;
			screen->startScreen(0, getFadeSpeed());
			mProgressiveScreen->mSelect = 1;
		}
	}

	if (mStateID != lastMode) {
		sys->dvdLoadUseCallBack(&mThreadCommand, mButtonCallback);
	}
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
	if (mFadeTimer > 150.0f) {
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
bool BootSection::waitLoadResource() { return sys->dvdLoadSyncAllNoBlock() != 0; }

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
void BootSection::getModeEpilepsy()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80449F54
 * @note Size: 0x88
 */
void BootSection::setModeEpilepsy() { setMode(SID_InitNintendoLogo); }
