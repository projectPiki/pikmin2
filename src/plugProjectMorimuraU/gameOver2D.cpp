#include "Morimura/GameOver.h"

static const char name[] = "gameOver2D";

namespace Morimura {

/*
 * --INFO--
 * Address:	80347F48
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	80347FB4
 * Size:	0000F0
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

/*
 * --INFO--
 * Address:	803480A4
 * Size:	000240
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
		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_NONE, GX_AF_NONE);
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
		case 2:
			y0 = y2 / 2;
			break;
		case 1:
			y1 = y2 / 2;
			break;
		}
		GXSetScissor(0, y0, System::getRenderModeObj()->fbWidth, y1);

		GXBegin(GX_QUADS, GX_VTXFMT0, 4);
		// you thought you were safe from GX register setting?

		System::getRenderModeObj();
		System::getRenderModeObj();

		GXSetDstAlpha(GX_FALSE, mFadeAlpha);
		GXSetScissor(0, y0, System::getRenderModeObj()->fbWidth, y1);
		persp->setPort();
		if (mGameOverScreen) {
			mGameOverScreen->draw(gfx, persp);
		}
		GXSetScissor(0, 0, System::getRenderModeObj()->fbWidth, System::getRenderModeObj()->efbHeight);
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r28, r3
	mr       r29, r4
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803480D4
	li       r3, 1
	li       r4, 0
	bl       GXSetPixelFmt

lbl_803480D4:
	lbz      r0, 0x85(r28)
	addi     r31, r29, 0x190
	cmplwi   r0, 0
	bne      lbl_803480F8
	lwz      r3, 0x7c(r28)
	mr       r4, r29
	mr       r5, r31
	bl       orgdraw__Q28Morimura15TGameOverScreenFR8GraphicsP13J2DPerspGraph
	b        lbl_803482D0

lbl_803480F8:
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 2
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	bl       GXSetColorUpdate
	li       r3, 1
	bl       GXSetAlphaUpdate
	lbz      r0, 0x84(r28)
	li       r3, 1
	subfic   r0, r0, 0xff
	clrlwi   r4, r0, 0x18
	bl       GXSetDstAlpha
	li       r24, 0
	bl       getRenderModeObj__6SystemFv
	lwz      r0, 0x88(r28)
	lhz      r3, 6(r3)
	cmpwi    r0, 2
	mr       r30, r3
	beq      lbl_803481CC
	bge      lbl_803481D4
	cmpwi    r0, 1
	bge      lbl_803481C0
	b        lbl_803481D4

lbl_803481C0:
	rlwinm   r0, r3, 0x1f, 0x11, 0x1f
	mr       r30, r0
	b        lbl_803481D4

lbl_803481CC:
	rlwinm   r0, r3, 0x1f, 0x11, 0x1f
	mr       r24, r0

lbl_803481D4:
	bl       getRenderModeObj__6SystemFv
	lhz      r5, 4(r3)
	clrlwi   r25, r24, 0x10
	clrlwi   r26, r30, 0x10
	li       r3, 0
	mr       r4, r25
	mr       r6, r26
	bl       GXSetScissor
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	li       r0, 0
	lis      r3, 0xCC008000@ha
	sth      r0, 0xCC008000@l(r3)
	mr       r27, r25
	sth      r24, -0x8000(r3)
	sth      r0, -0x8000(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r3, 0xCC008000@ha
	li       r0, 0
	sth      r4, 0xCC008000@l(r3)
	sth      r27, -0x8000(r3)
	sth      r0, -0x8000(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r3, 4(r3)
	lis      r4, 0xCC008000@ha
	li       r0, 0
	sth      r3, 0xCC008000@l(r4)
	li       r3, 0
	sth      r30, -0x8000(r4)
	sth      r0, -0x8000(r4)
	sth      r0, -0x8000(r4)
	sth      r30, -0x8000(r4)
	sth      r0, -0x8000(r4)
	lbz      r4, 0x84(r28)
	bl       GXSetDstAlpha
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	bl       getRenderModeObj__6SystemFv
	lhz      r5, 4(r3)
	mr       r4, r25
	mr       r6, r26
	li       r3, 0
	bl       GXSetScissor
	lwz      r3, 0x7c(r28)
	cmplwi   r3, 0
	beq      lbl_803482B0
	mr       r4, r29
	mr       r5, r31
	bl       draw__Q28Morimura15TGameOverScreenFR8GraphicsP13J2DPerspGraph

lbl_803482B0:
	bl       getRenderModeObj__6SystemFv
	lhz      r28, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r5, 4(r3)
	mr       r6, r28
	li       r3, 0
	li       r4, 0
	bl       GXSetScissor

lbl_803482D0:
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void TGameOverBase::init()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803482E4
 * Size:	0000AC
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

/*
 * --INFO--
 * Address:	80348390
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	80348430
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	803484D0
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	80348570
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	80348610
 * Size:	000024
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

/*
 * --INFO--
 * Address:	80348634
 * Size:	000218
 */
void TGameOverScreen::init(char const* path, u32 flags)
{
	mScreen = new P2DScreen::Mgr_tuning;
	mScreen->set(path, flags, mArchive);
	mScreen2 = new P2DScreen::Mgr_tuning;
	mScreen2->set(path, flags, mArchive);

	mGXPane = new TGXSetPane;
	mScreen->appendChild(mGXPane);

	u64 taglist[9] = { 'back', 'efect_00', 'efect_01', 'kuronuki', 'kuro_u', 'kuro_d', 'kuro_l', 'kuro_r', 'capusel' };
	for (int i = 0; i < 9; i++) {
		// great use of a for loop here
		if (i < 3 || i > 7) {
			J2DPane* pane = mScreen->search(taglist[i]);
			P2ASSERTLINE(298, pane);
			mScreen->removeChild(pane);
			mScreen->appendChild(pane);
			if (i < 3) {
				J2DMaterial* mat                     = static_cast<J2DPictureEx*>(pane)->getMaterial();
				mat->mPeBlock.mBlendInfo.mType       = 1;
				mat->mPeBlock.mBlendInfo.mDestFactor = 7;
				mat->mPeBlock.mBlendInfo.mSrcFactor  = 6;
			}
		}
	}
	mAnimList  = new og::Screen::AnimScreen*[mAnimCountMax];
	mAnimList2 = new og::Screen::AnimScreen*[mAnimCountMax];
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	lis      r6, lbl_804902F8@ha
	stw      r0, 0x84(r1)
	stmw     r27, 0x6c(r1)
	mr       r30, r3
	mr       r28, r4
	mr       r27, r5
	addi     r31, r6, lbl_804902F8@l
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80348670
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_80348670:
	stw      r0, 4(r30)
	mr       r4, r28
	mr       r5, r27
	lwz      r3, 4(r30)
	lwz      r6, 0(r30)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803486A0
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_803486A0:
	stw      r0, 0x18(r30)
	mr       r4, r28
	mr       r5, r27
	lwz      r3, 0x18(r30)
	lwz      r6, 0(r30)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	li       r4, 1
	li       r7, 7
	li       r6, 6
	li       r3, 0
	li       r0, 9
	stb      r4, 0xc(r1)
	addi     r5, r1, 0x1c
	addi     r4, r31, 0x17c
	stb      r7, 0xd(r1)
	stb      r6, 0xe(r1)
	stb      r3, 0xf(r1)
	mtctr    r0

lbl_803486E8:
	lwz      r3, 4(r4)
	lwzu     r0, 8(r4)
	stw      r3, 4(r5)
	stwu     r0, 8(r5)
	bdnz     lbl_803486E8
	li       r3, 0x1a8
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8034874C
	lfs      f1, lbl_8051E2E0@sda21(r2)
	lis      r4, 0x74657374@ha
	lfs      f0, lbl_8051E2E4@sda21(r2)
	addi     r6, r4, 0x74657374@l
	stfs     f1, 0x10(r1)
	addi     r7, r1, 0x10
	li       r5, 0
	addi     r8, r2, lbl_8051E2E8@sda21
	stfs     f1, 0x14(r1)
	lis      r9, 0x110
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "__ct__12J2DPictureExFUxRCQ29JGeometry8TBox2<f>PCcUl"
	lis      r3, __vt__Q28Morimura10TGXSetPane@ha
	addi     r0, r3, __vt__Q28Morimura10TGXSetPane@l
	stw      r0, 0(r29)

lbl_8034874C:
	stw      r29, 0xc(r30)
	lwz      r3, 4(r30)
	lwz      r4, 0xc(r30)
	bl       appendChild__7J2DPaneFP7J2DPane
	li       r28, 0
	addi     r29, r1, 0x20

lbl_80348764:
	cmpwi    r28, 3
	blt      lbl_80348774
	cmpwi    r28, 8
	blt      lbl_80348808

lbl_80348774:
	lwz      r3, 4(r30)
	lwz      r5, 0(r29)
	lwz      r12, 0(r3)
	lwz      r6, 4(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r27, r3, r3
	bne      lbl_803487AC
	addi     r3, r31, 0x1c8
	addi     r5, r31, 0x1d8
	li       r4, 0x12a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803487AC:
	lwz      r3, 4(r30)
	mr       r4, r27
	bl       removeChild__7J2DPaneFP7J2DPane
	lwz      r3, 4(r30)
	mr       r4, r27
	bl       appendChild__7J2DPaneFP7J2DPane
	cmpwi    r28, 3
	bge      lbl_80348808
	mr       r3, r27
	lwz      r0, 0xc(r1)
	lwz      r12, 0(r27)
	stw      r0, 8(r1)
	lwz      r12, 0x13c(r12)
	mtctr    r12
	bctrl
	lbz      r4, 8(r1)
	lbz      r0, 9(r1)
	stb      r4, 0x7c(r3)
	lbz      r4, 0xa(r1)
	stb      r0, 0x7d(r3)
	lbz      r0, 0xb(r1)
	stb      r4, 0x7e(r3)
	stb      r0, 0x7f(r3)

lbl_80348808:
	addi     r28, r28, 1
	addi     r29, r29, 8
	cmpwi    r28, 9
	blt      lbl_80348764
	lwz      r0, 0x10(r30)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 8(r30)
	lwz      r0, 0x10(r30)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x1c(r30)
	lmw      r27, 0x6c(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8034884C
 * Size:	0000D0
 */
void TGameOverScreen::addAnim(char* name)
{
	mAnimList[mAnimCountCurrent] = new og::Screen::AnimScreen;
	mAnimList[mAnimCountCurrent]->init(mArchive, mScreen, name);

	mAnimList2[mAnimCountCurrent] = new og::Screen::AnimScreen;
	mAnimList2[mAnimCountCurrent]->init(mArchive, mScreen2, name);

	mAnimCountCurrent++;
}

/*
 * --INFO--
 * Address:	8034891C
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	........
 * Size:	00023C
 */
void addYPos(J2DPane*, f32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803489A8
 * Size:	000024
 */
void TGameOverScreen::setPosY(f32 pos) { mScreen->setXY(0.0f, pos); }

/*
 * --INFO--
 * Address:	803489CC
 * Size:	000038
 */
void TGameOverScreen::draw(Graphics& gfx, J2DPerspGraph* persp)
{
	if (mScreen) {
		mScreen->draw(gfx, *persp);
	}
}

/*
 * --INFO--
 * Address:	80348A04
 * Size:	000038
 */
void TGameOverScreen::orgdraw(Graphics& gfx, J2DPerspGraph* persp)
{
	if (mScreen2) {
		mScreen2->draw(gfx, *persp);
	}
}

/*
 * --INFO--
 * Address:	80348A3C
 * Size:	000184
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

/*
 * --INFO--
 * Address:	80348C20
 * Size:	00002C
 */
void TGXSetPane::drawSelf(f32, f32, float (*)[3][4])
{
	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_FALSE);
}

} // namespace Morimura
