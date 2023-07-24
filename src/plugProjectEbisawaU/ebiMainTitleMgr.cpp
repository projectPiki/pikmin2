#include "ebi/TMainTitleMgr.h"
#include "ebi/title/TTitle.h"
#include "ebi/E2DGraph.h"
#include "nans.h"
#include "og/newScreen/ogUtil.h"
#include "Game/GameConfig.h"
#include "Game/Data.h"

static const char idk[]  = "\0\0\0\0\0\0\0\0\0";
static const char name[] = "ebiMainTitleMgr";

namespace ebi {

/*
 * --INFO--
 * Address:	803EA170
 * Size:	0003B4
 */
TMainTitleMgr::TMainTitleMgr()
    : _1634(0)
    , _1635(0)
    , _1636(0)
    , _1637(-1)
    , mAlpha(-1)
    , mDrawState(0)
    , mOpenMenuCounter(0)
    , mOpenMenuCounterMax(0)
    , mExitMenuCounter(0)
    , mExitMenuCounterMax(0)
{
	title::TTitleMgr::globalInstance();
	title::titleMgr->init();
}

/*
 * --INFO--
 * Address:	803EA524
 * Size:	000068
 */
void TMainTitleMgr::setMode(long set)
{
	switch (set) {
	case 0:
		title::titleMgr->mLevelSetting = title::TTitleMgr::Spring;
		break;
	case 1:
		title::titleMgr->mLevelSetting = title::TTitleMgr::Summer;
		break;
	case 2:
		title::titleMgr->mLevelSetting = title::TTitleMgr::Autumn;
		break;
	case 3:
		title::titleMgr->mLevelSetting = title::TTitleMgr::Winter;
		break;
	}
}

/*
 * --INFO--
 * Address:	803EA58C
 * Size:	000124
 */
void TMainTitleMgr::loadResource()
{
	sys->heapStatusStart("TMainTitleMgr::loadResource", nullptr);
	sys->heapStatusStart("TTitleMenu::loadResource", nullptr);

	char buf[256];
	og::newScreen::makeLanguageResName(buf, "title.szs");

	JKRArchive* arc = JKRArchive::mount(buf, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(69, arc);
	sys->heapStatusEnd("TTitleMenu::loadResource");

	mTitleMenu.setArchive(arc);
	mPressStart.setArchive(arc);
	mTMBack.setArchive(arc);
	mLogo.setArchive(arc);

	title::titleMgr->loadResource();
	title::titleMgr->initAfterLoadRes();

	sys->heapStatusEnd("TMainTitleMgr::loadResource");
}

/*
 * --INFO--
 * Address:	803EA6B0
 * Size:	00004C
 */
void TMainTitleMgr::setController(Controller* control)
{
	mTitleMenu.setController(control);
	mPressStart.mControl = control;
	title::titleMgr->setController(control);
	mController = control;
}

/*
 * --INFO--
 * Address:	803EA6FC
 * Size:	0000C0
 */
void TMainTitleMgr::start()
{
	mTitleMenu.killScreen();
	mPressStart.killScreen();

	Screen::ArgOpenTMBack arg(5.0f);
	mTMBack.openScreen(&arg);
	mLogo.openScreen(nullptr);

	title::titleMgr->start();

	mState              = Opening;
	mIsForceSelect      = false;
	mSelectedMenuOption = Select_NULL;
	mDrawState          = 0;
}

/*
 * --INFO--
 * Address:	803EA7BC
 * Size:	0001F0
 */
void TMainTitleMgr::startMenuSet(long, long select)
{
	mSelectedMenuOption = select;
	int id;
	switch (mSelectedMenuOption) {
	case Select_Story:
		id = 0;
		break;
	case Select_Challenge:
		id = 2;
		break;
	case Select_Vs:
		id = 1;
		break;
	case Select_Options:
		id = 3;
		break;
	case Select_HiScore:
		id = 4;
		break;
	case Select_Bonus:
		id = 5;
		break;
	default:
		JUT_PANICLINE(177, "P2Assert");
	}

	if (Game::gGameConfig.mParms.mE3version.mData) {
		Screen::ArgOpenTitleMenu arg(1, id);
		mTitleMenu.openMenuSet(&arg);
	} else {
		Screen::ArgOpenTitleMenu arg(sys->getPlayCommonData()->isChallengeGamePlayable() != 0, id);
		mTitleMenu.openMenuSet(&arg);
	}

	mPressStart.killScreen();
	Screen::ArgOpenTMBack tmarg(0.0f);
	mTMBack.openScreen(&tmarg);
	mLogo.openScreen(nullptr);

	title::titleMgr->start();
	title::titleMgr->setLogo();
	mState              = MainMenu;
	mIsForceSelect      = false;
	u32 count           = E2DFader::kFadeTime / sys->mDeltaTime;
	mOpenMenuCounter    = count;
	mOpenMenuCounterMax = count;
	mDrawState          = 1;
}

/*
 * --INFO--
 * Address:	803EA9AC
 * Size:	00000C
 */
void TMainTitleMgr::forceQuit() { mState = Standby; }

/*
 * --INFO--
 * Address:	803EA9B8
 * Size:	000010
 */
bool TMainTitleMgr::isFinish() { return u8(mState == Standby); }

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
bool TMainTitleMgr::isAnyKey()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EA9C8
 * Size:	000008
 */
int TMainTitleMgr::getSelectedMenu() { return mSelectedMenuOption; }

/*
 * --INFO--
 * Address:	803EA9D0
 * Size:	0004B0
 */
void TMainTitleMgr::update()
{
	mDoEndBGM = false;
	switch (mState) {
	case Opening:
		if (title::titleMgr->isPressStart()) {
			mPressStart.openScreen(nullptr);
			mState = PressStart;
		}
		break;
	case PressStart:
		if (title::titleMgr->isControllerOK()) {
			mPressStart.mIsOpen = true;
		} else {
			mPressStart.mIsOpen = false;
		}
		if (Game::gGameConfig.mParms.mNintendoVersion.mData && mController->mButton.mButtonDown & Controller::PRESS_B) {
			sys->resetOn(false);
		}
		if (mPressStart.isFinishScreen()) {
			if (Game::gGameConfig.mParms.mKFesVersion.mData) {
				mSelectedMenuOption = Select_Challenge;
				mDoEndBGM           = true;
				u32 count           = 1.0f / sys->mDeltaTime;
				mExitMenuCounter    = count;
				mExitMenuCounterMax = count;
				u32 count2          = 1.0f / sys->mDeltaTime;
				mOpenMenuCounter    = count2;
				mOpenMenuCounterMax = count2;
				mDrawState          = 2;
				mState              = Exiting;
			} else if (Game::gGameConfig.mParms.mNintendoVersion.mData) {
				mSelectedMenuOption = Select_Challenge;
				mDoEndBGM           = true;
				u32 count           = 1.0f / sys->mDeltaTime;
				mExitMenuCounter    = count;
				mExitMenuCounterMax = count;
				u32 count2          = 1.0f / sys->mDeltaTime;
				mOpenMenuCounter    = count2;
				mOpenMenuCounterMax = count2;
				mDrawState          = 2;
				mState              = Exiting;
			} else if (Game::gGameConfig.mParms.mE3version.mData) {
				Screen::ArgOpenTitleMenu arg(1, 1);
				mTitleMenu.openScreen(&arg);
				mState = MainMenu;
			} else {
				Screen::ArgOpenTitleMenu arg(sys->getPlayCommonData()->isChallengeGamePlayable() != 0, 0);
				mTitleMenu.openScreen(&arg);
				mState = MainMenu;
			}
		}
		break;
	case MainMenu:
		if (mTitleMenu.isDecide() && !mIsForceSelect) {
			mIsForceSelect = true;
			switch (mTitleMenu.mSelectID) {
			case 0:
				mSelectedMenuOption = Select_Story;
				break;
			case 1:
				mSelectedMenuOption = Select_Vs;
				break;
			case 2:
				mSelectedMenuOption = Select_Challenge;
				break;
			case 3:
				mSelectedMenuOption = Select_Options;
				break;
			case 4:
				mSelectedMenuOption = Select_HiScore;
				break;
			case 5:
				mSelectedMenuOption = Select_Bonus;
				break;
			}
			title::titleMgr->breakup();
			Screen::ArgCloseTMBack arg(1.0f);
			mTMBack.closeScreen(&arg);
			if (!mTitleMenu.isCancel()) {
				u32 count           = 1.0f / sys->mDeltaTime;
				mOpenMenuCounter    = count;
				mOpenMenuCounterMax = count;
				mDrawState          = 2;
				mDoEndBGM           = true;
			}
		}
		u8 end    = mTitleMenu.isFinishScreen();
		bool end2 = mTitleMenu.isCancel();
		if (end) {
			if (end2) {
				mPressStart.openScreen(nullptr);
				mState = PressStart;
			} else {
				if (!mOpenMenuCounter) {
					mState = Standby;
				}
			}
		}
		break;
	case Exiting:
		if (mExitMenuCounter) {
			mExitMenuCounter--;
		}
		if (!mExitMenuCounter) {
			mState = Standby;
		}
		break;
	}

	mTitleMenu.update();
	mPressStart.update();
	mTMBack.update();
	mLogo.update();
	title::titleMgr->update();
	if (mDrawState && mOpenMenuCounter) {
		mOpenMenuCounter--;
	}

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	stb      r0, 0x1654(r3)
	lwz      r0, 0x1650(r3)
	cmpwi    r0, 3
	beq      lbl_803EAC48
	bge      lbl_803EAA10
	cmpwi    r0, 1
	beq      lbl_803EAA1C
	bge      lbl_803EAA50
	b        lbl_803EADF0

lbl_803EAA10:
	cmpwi    r0, 5
	bge      lbl_803EADF0
	b        lbl_803EADC8

lbl_803EAA1C:
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       isPressStart__Q33ebi5title9TTitleMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EADF0
	addi     r3, r31, 0x137c
	li       r4, 0
	lwz      r12, 0x137c(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EAA50:
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       isControllerOK__Q33ebi5title9TTitleMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EAA6C
	li       r0, 1
	stb      r0, 0x138c(r31)
	b        lbl_803EAA74

lbl_803EAA6C:
	li       r0, 0
	stb      r0, 0x138c(r31)

lbl_803EAA74:
	lis      r3, gGameConfig__4Game@ha
	addi     r30, r3, gGameConfig__4Game@l
	lwz      r0, 0x238(r30)
	cmpwi    r0, 0
	beq      lbl_803EAAA4
	lwz      r3, 0x1648(r31)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_803EAAA4
	lwz      r3, sys@sda21(r13)
	li       r4, 0
	bl       resetOn__6SystemFb

lbl_803EAAA4:
	addi     r3, r31, 0x137c
	lwz      r12, 0x137c(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EADF0
	lis      r3, gGameConfig__4Game@ha
	addi     r3, r3, gGameConfig__4Game@l
	lwz      r0, 0x228(r3)
	cmpwi    r0, 0
	beq      lbl_803EAB2C
	li       r0, 1
	lfs      f1, lbl_8051FE1C@sda21(r2)
	stw      r0, 0x1658(r31)
	stb      r0, 0x1654(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x165c(r31)
	lfs      f1, lbl_8051FE1C@sda21(r2)
	stw      r3, 0x1660(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1640(r31)
	li       r4, 2
	li       r0, 4
	stw      r3, 0x1644(r31)
	stw      r4, 0x163c(r31)
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EAB2C:
	lwz      r0, 0x238(r30)
	cmpwi    r0, 0
	beq      lbl_803EAB90
	li       r0, 1
	lfs      f1, lbl_8051FE1C@sda21(r2)
	stw      r0, 0x1658(r31)
	stb      r0, 0x1654(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x165c(r31)
	lfs      f1, lbl_8051FE1C@sda21(r2)
	stw      r3, 0x1660(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1640(r31)
	li       r4, 2
	li       r0, 4
	stw      r3, 0x1644(r31)
	stw      r4, 0x163c(r31)
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EAB90:
	lwz      r0, 0x1c8(r3)
	cmpwi    r0, 0
	beq      lbl_803EABE4
	lis      r3, __vt__Q33ebi6Screen7ArgOpen@ha
	li       r0, 1
	addi     r4, r3, __vt__Q33ebi6Screen7ArgOpen@l
	lis      r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@ha
	stw      r4, 0x1c(r1)
	addi     r5, r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@l
	mr       r3, r31
	addi     r4, r1, 0x1c
	stw      r5, 0x1c(r1)
	stw      r0, 0x20(r1)
	stw      r0, 0x24(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 3
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EABE4:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	bl       isChallengeGamePlayable__Q24Game14PlayCommonDataFv
	clrlwi   r6, r3, 0x18
	lis      r4, __vt__Q33ebi6Screen7ArgOpen@ha
	neg      r5, r6
	lis      r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@ha
	addi     r4, r4, __vt__Q33ebi6Screen7ArgOpen@l
	li       r0, 0
	or       r5, r5, r6
	stw      r4, 0x10(r1)
	srwi     r5, r5, 0x1f
	addi     r3, r3, __vt__Q33ebi6Screen16ArgOpenTitleMenu@l
	stw      r3, 0x10(r1)
	mr       r3, r31
	addi     r4, r1, 0x10
	stw      r5, 0x14(r1)
	stw      r0, 0x18(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 3
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EAC48:
	bl       isDecide__Q33ebi6Screen10TTitleMenuFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EAD5C
	lbz      r0, 0x1655(r31)
	cmplwi   r0, 0
	bne      lbl_803EAD5C
	li       r3, 1
	stb      r3, 0x1655(r31)
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 3
	beq      lbl_803EACC0
	bge      lbl_803EAC90
	cmpwi    r0, 1
	beq      lbl_803EACAC
	bge      lbl_803EACB8
	cmpwi    r0, 0
	bge      lbl_803EACA0
	b        lbl_803EACE0

lbl_803EAC90:
	cmpwi    r0, 5
	beq      lbl_803EACD8
	bge      lbl_803EACE0
	b        lbl_803EACCC

lbl_803EACA0:
	li       r0, 0
	stw      r0, 0x1658(r31)
	b        lbl_803EACE0

lbl_803EACAC:
	li       r0, 2
	stw      r0, 0x1658(r31)
	b        lbl_803EACE0

lbl_803EACB8:
	stw      r3, 0x1658(r31)
	b        lbl_803EACE0

lbl_803EACC0:
	li       r0, 3
	stw      r0, 0x1658(r31)
	b        lbl_803EACE0

lbl_803EACCC:
	li       r0, 4
	stw      r0, 0x1658(r31)
	b        lbl_803EACE0

lbl_803EACD8:
	li       r0, 5
	stw      r0, 0x1658(r31)

lbl_803EACE0:
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       breakup__Q33ebi5title9TTitleMgrFv
	lis      r3, __vt__Q33ebi6Screen8ArgClose@ha
	lfs      f0, lbl_8051FE1C@sda21(r2)
	addi     r0, r3, __vt__Q33ebi6Screen8ArgClose@l
	lis      r3, __vt__Q33ebi6Screen14ArgCloseTMBack@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q33ebi6Screen14ArgCloseTMBack@l
	addi     r3, r31, 0x160c
	addi     r4, r1, 8
	stw      r0, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 0x160c(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       isCancel__Q33ebi6Screen10TTitleMenuFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803EAD5C
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051FE1C@sda21(r2)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x1640(r31)
	li       r4, 2
	li       r0, 1
	stw      r3, 0x1644(r31)
	stw      r4, 0x163c(r31)
	stb      r0, 0x1654(r31)

lbl_803EAD5C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r31
	bl       isCancel__Q33ebi6Screen10TTitleMenuFv
	clrlwi.  r0, r30, 0x18
	beq      lbl_803EADF0
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EADB0
	addi     r3, r31, 0x137c
	li       r4, 0
	lwz      r12, 0x137c(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EADB0:
	lwz      r0, 0x1640(r31)
	cmplwi   r0, 0
	bne      lbl_803EADF0
	li       r0, 0
	stw      r0, 0x1650(r31)
	b        lbl_803EADF0

lbl_803EADC8:
	lwz      r3, 0x165c(r31)
	cmplwi   r3, 0
	beq      lbl_803EADDC
	addi     r0, r3, -1
	stw      r0, 0x165c(r31)

lbl_803EADDC:
	lwz      r0, 0x165c(r31)
	cmplwi   r0, 0
	bne      lbl_803EADF0
	li       r0, 0
	stw      r0, 0x1650(r31)

lbl_803EADF0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x137c
	lwz      r12, 0x137c(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x160c
	lwz      r12, 0x160c(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x1624
	lwz      r12, 0x1624(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       update__Q33ebi5title9TTitleMgrFv
	lwz      r0, 0x163c(r31)
	cmpwi    r0, 0
	beq      lbl_803EAE68
	lwz      r3, 0x1640(r31)
	cmplwi   r3, 0
	beq      lbl_803EAE68
	addi     r0, r3, -1
	stw      r0, 0x1640(r31)

lbl_803EAE68:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EAE80
 * Size:	000274
 */
void TMainTitleMgr::draw()
{
	if (mState != Standby) {
		title::titleMgr->draw();
		GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
		mTMBack.draw();
		mTitleMenu.draw();
		mPressStart.draw();
		mLogo.draw();
		if (mDrawState != 0) {
			J2DPerspGraph* graf = &sys->mGfx->mPerspGraph;
			graf->setPort();
			JUtility::TColor color(-1);
			switch (mDrawState) {
				f32 calc;
			case 1:
				u32 count = mOpenMenuCounterMax;
				if (count) {
					calc = (f32)mOpenMenuCounter / count;
				} else {
					calc = 0.0f;
				}
				color.a = mAlpha * calc;
				break;
			case 2:
				count = mOpenMenuCounterMax;
				if (count) {
					calc = (f32)mOpenMenuCounter / count;
				} else {
					calc = 0.0f;
				}
				color.a = mAlpha * (1.0f - calc);
				break;
			}
			graf->setColor(color);
			u32 y    = System::getRenderModeObj()->efbHeight;
			u32 x    = System::getRenderModeObj()->fbWidth;
			f32 zero = 0.0f;
			JGeometry::TBox2f box(0.0f, zero + x, 0.0f, zero + y);
			graf->fillBox(box);
		}
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	lwz      r0, 0x1650(r3)
	cmpwi    r0, 0
	beq      lbl_803EB0DC
	lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
	bl       draw__Q33ebi5title9TTitleMgrFv
	li       r3, 0
	li       r4, 7
	li       r5, 0
	bl       GXSetZMode
	addi     r3, r30, 0x160c
	lwz      r12, 0x160c(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x137c
	lwz      r12, 0x137c(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x1624
	lwz      r12, 0x1624(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x163c(r30)
	cmpwi    r0, 0
	beq      lbl_803EB0DC
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	addi     r31, r3, 0x190
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x163c(r30)
	lwz      r3, 0x1634(r30)
	cmpwi    r0, 2
	stw      r3, 0x18(r1)
	beq      lbl_803EAFD4
	bge      lbl_803EB050
	cmpwi    r0, 1
	bge      lbl_803EAF5C
	b        lbl_803EB050

lbl_803EAF5C:
	lwz      r4, 0x1644(r30)
	cmplwi   r4, 0
	beq      lbl_803EAF9C
	lwz      r3, 0x1640(r30)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lfd      f2, lbl_8051FE20@sda21(r2)
	stw      r3, 0x34(r1)
	lfd      f0, 0x30(r1)
	stw      r4, 0x3c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	fsubs    f0, f0, f2
	fdivs    f2, f1, f0
	b        lbl_803EAFA0

lbl_803EAF9C:
	lfs      f2, lbl_8051FE18@sda21(r2)

lbl_803EAFA0:
	lbz      r3, 0x1638(r30)
	lis      r0, 0x4330
	stw      r0, 0x40(r1)
	lfd      f1, lbl_8051FE20@sda21(r2)
	stw      r3, 0x44(r1)
	lfd      f0, 0x40(r1)
	fsubs    f0, f0, f1
	fmuls    f0, f0, f2
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	stb      r0, 0x1b(r1)
	b        lbl_803EB050

lbl_803EAFD4:
	lwz      r4, 0x1644(r30)
	cmplwi   r4, 0
	beq      lbl_803EB014
	lwz      r3, 0x1640(r30)
	lis      r0, 0x4330
	stw      r0, 0x48(r1)
	lfd      f2, lbl_8051FE20@sda21(r2)
	stw      r3, 0x4c(r1)
	lfd      f0, 0x48(r1)
	stw      r4, 0x44(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x40(r1)
	lfd      f0, 0x40(r1)
	fsubs    f0, f0, f2
	fdivs    f1, f1, f0
	b        lbl_803EB018

lbl_803EB014:
	lfs      f1, lbl_8051FE18@sda21(r2)

lbl_803EB018:
	lbz      r3, 0x1638(r30)
	lis      r0, 0x4330
	lfs      f0, lbl_8051FE1C@sda21(r2)
	stw      r3, 0x3c(r1)
	lfd      f2, lbl_8051FE20@sda21(r2)
	fsubs    f0, f0, f1
	stw      r0, 0x38(r1)
	lfd      f1, 0x38(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	stb      r0, 0x1b(r1)

lbl_803EB050:
	lwz      r0, 0x18(r1)
	mr       r3, r31
	addi     r4, r1, 8
	addi     r5, r1, 0xc
	stw      r0, 0x14(r1)
	addi     r6, r1, 0x10
	addi     r7, r1, 0x14
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_8051FE18@sda21(r2)
	mr       r3, r31
	stw      r4, 0x4c(r1)
	addi     r4, r1, 0x1c
	lfd      f2, lbl_8051FE20@sda21(r2)
	stw      r0, 0x48(r1)
	lfd      f0, 0x48(r1)
	stw      r30, 0x44(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x40(r1)
	lfd      f0, 0x40(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x1c(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x20(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_803EB0DC:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void TMainTitleMgr::showInfo()
{
	// UNUSED FUNCTION
}

} // namespace ebi
