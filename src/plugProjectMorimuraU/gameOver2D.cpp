#include "Morimura/GameOver.h"

static const char name[] = "gameOver2D";

namespace Morimura {

/**
 * @note Address: 0x80347F48
 * @note Size: 0x6C
 */
TGameOverBase::TGameOverBase(char* name)
    : TTestBase(name)
{
	mGameOverScreen = nullptr;
	mFadeAlpha      = 0;
	mDoOrgDraw      = 1;
	mTimer          = 0;
	mType           = 0;
	mTimeSpeed      = 1;
	mMaxTime        = 150;
}

/**
 * @note Address: 0x80347FB4
 * @note Size: 0xF0
 */
bool TGameOverBase::doUpdate()
{
	if (mGameOverScreen) {
		mGameOverScreen->update();
		f32 thing = 1.0f;
		if (mTimer < mMaxTime) {
			thing = (f32)mTimer / (f32)mMaxTime;
		}
		mFadeAlpha = 255.0f * thing * mFadeFraction;
		if (mGameOverScreen) {
			mGameOverScreen->setFadeAlpha(mFadeAlpha);
		}
		mTimer += mTimeSpeed;
		if (mTimer < 0) {
			mTimer = 0;
		}
		if (mTimer > mMaxTime) {
			mTimer = mMaxTime;
		}
	}
	return false;
}

/**
 * @note Address: 0x803480A4
 * @note Size: 0x240
 */
void TGameOverBase::doDraw(Graphics& gfx)
{
	if (mIsSection) {
		GXSetPixelFmt(GX_PF_RGBA6_Z24, GX_ZC_LINEAR);
	}
	J2DPerspGraph* persp = &gfx.mPerspGraph;
	if (!mDoOrgDraw) {
		mGameOverScreen->orgdraw(gfx, persp);
	} else {
		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_U16, 0);
		GXSetNumChans(1);
		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
		GXSetNumTevStages(1);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
		GXSetColorUpdate(GX_FALSE);
		GXSetAlphaUpdate(GX_TRUE);
		GXSetDstAlpha(GX_TRUE, 255 - mFadeAlpha);
		u16 y0 = 0;
		u16 y2 = System::getRenderModeObj()->efbHeight;
		u16 y1 = y2;
		switch (mType) {
		case 1:
			y1 = y2 / 2;
			break;
		case 2:
			y0 = y2 / 2;
			break;
		}
		GXSetScissor(0, y0, System::getRenderModeObj()->fbWidth, y1);

		GXBegin(GX_QUADS, GX_VTXFMT0, 4);

		GXPosition3u16(0, y0, 0);
		GXPosition3u16(System::getRenderModeObj()->fbWidth, y0, 0);

		GXPosition3u16(System::getRenderModeObj()->fbWidth, y1, 0);
		GXPosition3u16(0, y1, 0);

		GXSetDstAlpha(GX_FALSE, mFadeAlpha);
		persp->setPort();
		GXSetScissor(0, y0, System::getRenderModeObj()->fbWidth, y1);

		if (mGameOverScreen) {
			mGameOverScreen->draw(gfx, persp);
		}
		GXSetScissor(0, 0, System::getRenderModeObj()->fbWidth, System::getRenderModeObj()->efbHeight);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void TGameOverBase::init()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803482E4
 * @note Size: 0xAC
 */
void TGameOver2D::doCreate(JKRArchive* arc)
{
	mArchive        = arc;
	mTimer          = 0;
	mFadeAlpha      = 0;
	mGameOverScreen = new TGameOverScreen(arc, 3);
	mGameOverScreen->init("gameover_gameover.blo", 0x1040000);
	mGameOverScreen->addAnim("gameover_gameover.bck");
	mGameOverScreen->addAnim("gameover_gameover.btk");
	mGameOverScreen->addAnim("gameover_gameover_02.btk");
}

/**
 * @note Address: 0x80348390
 * @note Size: 0xA0
 */
void TOrimaDown2D::doCreate(JKRArchive* arc)
{
	mArchive        = arc;
	mTimer          = 0;
	mFadeAlpha      = 0;
	mGameOverScreen = new TGameOverScreen(arc, 2);
	mGameOverScreen->init("gameover_orima.blo", 0x1040000);
	mGameOverScreen->addAnim("gameover_orima.btk");
	mGameOverScreen->addAnim("gameover_orima_02.btk");
}

/**
 * @note Address: 0x80348430
 * @note Size: 0xA0
 */
void TLujiDown2D::doCreate(JKRArchive* arc)
{
	mArchive        = arc;
	mTimer          = 0;
	mFadeAlpha      = 0;
	mGameOverScreen = new TGameOverScreen(arc, 2);
	mGameOverScreen->init("gameover_louie.blo", 0x1040000);
	mGameOverScreen->addAnim("gameover_louie.btk");
	mGameOverScreen->addAnim("gameover_louie_02.btk");
}

/**
 * @note Address: 0x803484D0
 * @note Size: 0xA0
 */
void TPresidentDown2D::doCreate(JKRArchive* arc)
{
	mArchive        = arc;
	mTimer          = 0;
	mFadeAlpha      = 0;
	mGameOverScreen = new TGameOverScreen(arc, 2);
	mGameOverScreen->init("gameover_president.blo", 0x1040000);
	mGameOverScreen->addAnim("gameover_president.btk");
	mGameOverScreen->addAnim("gameover_president_02.btk");
}

/**
 * @note Address: 0x80348570
 * @note Size: 0xA0
 */
void TPikminDown2D::doCreate(JKRArchive* arc)
{
	mArchive        = arc;
	mTimer          = 0;
	mFadeAlpha      = 0;
	mGameOverScreen = new TGameOverScreen(arc, 2);
	mGameOverScreen->init("gameover_pikmin.blo", 0x1040000);
	mGameOverScreen->addAnim("gameover_pikmin.btk");
	mGameOverScreen->addAnim("gameover_pikmin_02.btk");
}

/**
 * @note Address: 0x80348610
 * @note Size: 0x24
 */
TGameOverScreen::TGameOverScreen(JKRArchive* arc, int anims)
{
	mArchive          = arc;
	mScreen           = nullptr;
	mAnimList         = nullptr;
	mAnimCountMax     = anims;
	mAnimCountCurrent = 0;
	mScreen2          = nullptr;
	mAnimList2        = nullptr;
}

/**
 * @note Address: 0x80348634
 * @note Size: 0x218
 */
void TGameOverScreen::init(char const* path, u32 flags)
{
	mScreen = new P2DScreen::Mgr_tuning;
	mScreen->set(path, flags, mArchive);
	mScreen2 = new P2DScreen::Mgr_tuning;
	mScreen2->set(path, flags, mArchive);

	J2DBlendInfo info;
	info.mType       = 1;
	info.mSrcFactor  = 7;
	info.mDestFactor = 6;
	info.mOp         = 0;
	J2DBlend blend(info);
	u64 taglist[9] = { 'back', 'efect_00', 'efect_01', 'kuronuki', 'kuro_u', 'kuro_d', 'kuro_l', 'kuro_r', 'capusel' };
	mGXPane        = new TGXSetPane;
	mScreen->appendChild(mGXPane);

	for (int i = 0; i < 9; i++) {
		// great use of a for loop here
		if (i < 3 || i >= 8) {
			J2DPane* pane = mScreen->search(taglist[i]);
			P2ASSERTLINE(298, pane);
			mScreen->removeChild(pane);
			mScreen->appendChild(pane);
			if (i < 3) {
				static_cast<J2DPictureEx*>(pane)->getMaterial()->mPeBlock.mBlendInfo.set(blend);
			}
		}
	}

	mAnimList  = new og::Screen::AnimScreen*[mAnimCountMax];
	mAnimList2 = new og::Screen::AnimScreen*[mAnimCountMax];
}

/**
 * @note Address: 0x8034884C
 * @note Size: 0xD0
 */
void TGameOverScreen::addAnim(char* name)
{
	mAnimList[mAnimCountCurrent] = new og::Screen::AnimScreen;
	mAnimList[mAnimCountCurrent]->init(mArchive, mScreen, name);

	mAnimList2[mAnimCountCurrent] = new og::Screen::AnimScreen;
	mAnimList2[mAnimCountCurrent]->init(mArchive, mScreen2, name);

	mAnimCountCurrent++;
}

/**
 * @note Address: 0x8034891C
 * @note Size: 0x8C
 */
void TGameOverScreen::update()
{
	if (mScreen) {
		for (int i = 0; i < mAnimCountMax; i++) {
			mAnimList[i]->update();
			mAnimList2[i]->update();
		}
		mScreen->animation();
		mScreen2->animation();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x23C
 */
void addYPos(J2DPane*, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803489A8
 * @note Size: 0x24
 */
void TGameOverScreen::setPosY(f32 pos) { mScreen->setXY(0.0f, pos); }

/**
 * @note Address: 0x803489CC
 * @note Size: 0x38
 */
void TGameOverScreen::draw(Graphics& gfx, J2DPerspGraph* persp)
{
	if (mScreen) {
		mScreen->draw(gfx, *persp);
	}
}

/**
 * @note Address: 0x80348A04
 * @note Size: 0x38
 */
void TGameOverScreen::orgdraw(Graphics& gfx, J2DPerspGraph* persp)
{
	if (mScreen2) {
		mScreen2->draw(gfx, *persp);
	}
}

/**
 * @note Address: 0x80348A3C
 * @note Size: 0x184
 */
void TGameOverScreen::setFadeAlpha(u8 alpha)
{
	mScreen->search('efect_00')->setAlpha(alpha);
	mScreen->search('efect_01')->setAlpha(alpha);
	mScreen->search('capusel')->setAlpha(alpha);
	mScreen2->search('efect_00')->setAlpha(alpha);
	mScreen2->search('efect_01')->setAlpha(alpha);
	mScreen2->search('capusel')->setAlpha(alpha);
}
} // namespace Morimura
