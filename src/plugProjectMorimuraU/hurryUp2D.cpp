#include "Morimura/HurryUp.h"
#include "Morimura/mrUtil.h"
#include "PSSystem/PSSystemIF.h"
#include "Game/GameSystem.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
#include "Game/Navi.h"
#include "nans.h"

static const int unusedHurryUpArray[] = { 0, 0, 0 };
static const char name[]              = "hurryUp2D";

namespace Morimura {

f32 THurryUp2D::mInitPosX  = 900.0f;
f32 THurryUp2D::mMoveSp    = 12.0f;
f32 THurryUp2D::mScaleSp1  = 0.01f;
f32 THurryUp2D::mScaleSp2  = 0.1f;
f32 THurryUp2D::mScaleRate = 1.02f;
f32 THurryUp2D::mColorUpSp = 1.0f;

/**
 * @note Address: 0x80346178
 * @note Size: 0x224
 */
void THuWhitePaneSet::drawSelf(f32 height, f32 width, Mtx* mtx)
{
	gxSet();
	GXSetColorUpdate(GX_FALSE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetDstAlpha(GX_TRUE, 0);

	f32 xOffs = getWidth() + width;
	f32 yOffs = getHeight() + height;

	Mtx test;
	PSMTXConcat(*mtx, mGlobalMtx, test);
	GXLoadPosMtxImm(test, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 depth = 0.0f;

	GXPosition3f32(width, height, depth);
	GXPosition3f32(xOffs, height, depth);
	GXPosition3f32(xOffs, yOffs, depth);
	GXPosition3f32(width, yOffs, depth);

	GXSetDstAlpha(GX_FALSE, 0);
	J2DPictureEx::drawSelf(height, width, mtx);
	gxSet();
	GXSetDstAlpha(GX_TRUE, 0);

	f32 xFactor = f32(255 - mAlpha) * getWidth() / 255.0f;
	GXLoadPosMtxImm(test, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	xFactor = xOffs - xFactor;

	GXPosition3f32(xFactor, height, depth);
	GXPosition3f32(xOffs, height, depth);
	GXPosition3f32(xOffs, yOffs, depth);
	GXPosition3f32(xFactor, yOffs, depth);

	GXSetDstAlpha(GX_FALSE, 0);
	GXSetColorUpdate(GX_TRUE);
	PSMTXCopy(test, mMatrix.mMatrix.mtxView);

	_1A8 = Vector2f(xFactor, yOffs - getHeight() * 0.5f);
}

/**
 * @note Address: 0x8034639C
 * @note Size: 0x94
 */
void THuWhitePaneSet::gxSet()
{
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetNumChans(1);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_NONE, GX_AF_NONE);
	GXSetNumTevStages(1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
}

/**
 * @note Address: 0x80346430
 * @note Size: 0xB0
 */
THurryUp2D::THurryUp2D()
    : TTestBase("HurryUp2D")
    , mScreen(nullptr)
    , mPaneHurry(nullptr)
    , mPaneSundown(nullptr)
    , mPaneSunW(nullptr)
    , mWhitePane(nullptr)
    , mPaneSunL(nullptr)
    , mPaneHurry2(nullptr)
    , mPaneSundown2(nullptr)
    , mState(StateInit)
    , mTimer(0.0f)
    , _C0(0)
    , _C2(0)
    , mDoDraw(true)
    , _C8(0.0f)
    , mTimeMax(0.0f)
{
}

/**
 * @note Address: 0x80346504
 * @note Size: 0x390
 */
void THurryUp2D::doCreate(JKRArchive* arc)
{
	mArchive = arc;

	og::Screen::DispMemberGround* disp = static_cast<og::Screen::DispMemberGround*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_GROUND)) {
		mDisp = &disp->mHurryUp;
	} else {
		mDisp      = new og::Screen::DispMemberHurryUp;
		mIsSection = true;
	}

	mScreen = new P2DScreen::Mgr_tuning;
	mScreen->set("sund.blo", 0x20000, arc);

	mPaneHurry = mScreen->search('hurr');
	P2ASSERTLINE(150, mPaneHurry);
	mPaneSundown = mScreen->search('sund');
	P2ASSERTLINE(153, mPaneSundown);
	mPaneSunL = mScreen->search('sunl');
	P2ASSERTLINE(156, mPaneSunL);
	mPaneSunW = mScreen->search('sunw');
	P2ASSERTLINE(159, mPaneSunW);
	mPaneHurry2 = mScreen->search('hur2');
	P2ASSERTLINE(162, mPaneHurry2);
	mPaneSundown2 = mScreen->search('sun2');
	P2ASSERTLINE(165, mPaneSundown2);

	mWhitePane = new THuWhitePaneSet(mPaneSunW);
	P2ASSERTLINE(169, mPaneSunW);
	mWhitePane->setBasePosition(J2DPOS_Center);
	mWhitePane->setAlpha(0);
	mWhitePane->mAlpha = 0;
	mPaneSunL->appendChild(mWhitePane);
	mPane1Pos = JGeometry::TVec2f(mPaneHurry->mOffset);
	mPane2Pos = JGeometry::TVec2f(mPaneSundown->mOffset);
}

/**
 * @note Address: 0x80346894
 * @note Size: 0x18C
 */
bool THurryUp2D::doUpdate()
{
	if (mIsSection) {
		og::Screen::DispMemberHurryUp* disp = mDisp;
		if (disp->mCurrSunRatio < disp->mDuration) {
			disp->mCurrSunRatio = disp->mDuration;
		}
		mDisp->mCurrSunRatio += 0.00001f;
		disp = mDisp;
		if (disp->mCurrSunRatio > 0.803f) {
			disp->mCurrSunRatio = disp->mDuration;
			mState              = 0;
		}
	}

	switch (mState) {
	case StateInit:
		init();
		changeState(StatePlaySE, 0.0f);
		break;
	case StatePlaySE:
		if (mTimer == 10.0f) {
			P2ASSERTLINE(210, PSSystem::spSysIF);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_EVENING_ALERT, 0);
		}
		move();
		break;
	case StateScaleUp1:
		scaleUp1();
		break;
	case StateColorUp:
		colorUp();
		break;
	case StateScaleUp2:
		scaleUp2();
		break;
	}
	if (mTimeMax != mDisp->mCurrSunRatio) {
		mTimer += 1.0f;
	}
	mTimeMax = mDisp->mCurrSunRatio;
	mScreen->update();
	return false;
}

/**
 * @note Address: 0x80346A20
 * @note Size: 0x40C
 */
void THurryUp2D::doDraw(Graphics& gfx)
{
	if (mIsSection) {
		GXSetPixelFmt(GX_PF_RGBA6_Z24, GX_ZC_LINEAR);
	}
	gfx.mPerspGraph.setPort();
	mScreen->draw(gfx, gfx.mPerspGraph);
	if (mState == 3 && mDoDraw) {

		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
		GXSetNumChans(1);
		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_NONE, GX_AF_NONE);
		GXSetNumTevStages(1);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
		u32 flag = mParams[5].mAlpha1;
		if (flag > 0x80) {
			flag = 0x80;
		}
		f32 calc = flag * mFadeFraction;
		JUtility::TColor color(255, 255, 255, calc);
		GXSetChanMatColor(GX_COLOR_NULL, color);
		GXSetCullMode(GX_CULL_NONE);
		GXLoadPosMtxImm(mWhitePane->mMatrix.mMatrix.mtxView, 0);

		GXBegin(GX_TRIANGLES, GX_VTXFMT0, 216);
	}
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	mr       r30, r3
	mr       r31, r4
	cmplwi   r0, 0
	beq      lbl_80346A74
	li       r3, 1
	li       r4, 0
	bl       GXSetPixelFmt

lbl_80346A74:
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x7c(r30)
	mr       r4, r31
	addi     r5, r31, 0x190
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xb0(r30)
	cmpwi    r0, 3
	bne      lbl_80346DF4
	lbz      r0, 0xc4(r30)
	cmplwi   r0, 0
	beq      lbl_80346DF4
	lwz      r4, 0x88(r30)
	lwz      r3, 0x8c(r30)
	lfs      f0, lbl_8051E288@sda21(r2)
	lfs      f1, 0x1a8(r3)
	lfs      f3, 0x2c(r4)
	lfs      f2, 0x24(r4)
	fsubs    f31, f1, f0
	lfs      f1, 0x28(r4)
	lfs      f0, 0x20(r4)
	fsubs    f28, f3, f2
	lfs      f30, 0x1ac(r3)
	fsubs    f29, f1, f0
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
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
	lwz      r3, 0x8c(r30)
	lbz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0x1f, 0x18, 0x1f
	cmplwi   r0, 0x80
	ble      lbl_80346B7C
	li       r0, 0x80

lbl_80346B7C:
	clrlwi   r3, r0, 0x18
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	addi     r4, r1, 0xc
	lwz      r5, lbl_8051E284@sda21(r2)
	li       r3, 4
	stw      r0, 0x10(r1)
	lfd      f2, lbl_8051E2A8@sda21(r2)
	lfd      f1, 0x10(r1)
	lfs      f0, 0x40(r30)
	fsubs    f1, f1, f2
	stw      r5, 8(r1)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetChanMatColor
	li       r3, 0
	bl       GXSetCullMode
	lwz      r3, 0x8c(r30)
	li       r4, 0
	addi     r3, r3, 0x1b0
	bl       GXLoadPosMtxImm
	lfs      f0, lbl_8051E280@sda21(r2)
	li       r5, 0x168
	li       r3, 0x90
	li       r4, 0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	divw     r0, r5, r0
	clrlwi   r31, r0, 0x10
	mulli    r0, r31, 6
	clrlwi   r5, r0, 0x10
	bl       GXBegin
	lis      r3, sincosTable___5JMath@ha
	lfs      f5, lbl_8051E28C@sda21(r2)
	addi     r6, r3, sincosTable___5JMath@l
	lfs      f4, lbl_8051E280@sda21(r2)
	lfd      f3, lbl_8051E268@sda21(r2)
	li       r3, 0
	lfs      f2, lbl_8051E290@sda21(r2)
	lis      r7, 0x4330
	lfs      f1, lbl_8051E294@sda21(r2)
	lis      r4, 0xcc01
	lfs      f0, lbl_8051E258@sda21(r2)
	lfs      f9, lbl_8051E29C@sda21(r2)
	lfs      f7, lbl_8051E2A0@sda21(r2)
	mtctr    r31
	cmpwi    r31, 0
	ble      lbl_80346DF4

lbl_80346C54:
	xoris    r5, r3, 0x8000
	addi     r0, r3, 1
	stw      r5, 0x24(r1)
	xoris    r0, r0, 0x8000
	stw      r7, 0x20(r1)
	lfd      f6, 0x20(r1)
	stw      r0, 0x1c(r1)
	fsubs    f8, f6, f3
	stw      r7, 0x18(r1)
	lfd      f6, 0x18(r1)
	fmuls    f8, f4, f8
	fsubs    f6, f6, f3
	fmuls    f8, f5, f8
	fmuls    f6, f4, f6
	fdivs    f10, f8, f2
	fmuls    f6, f5, f6
	fcmpo    cr0, f10, f0
	fdivs    f6, f6, f2
	bge      lbl_80346CCC
	lfs      f8, lbl_8051E298@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f8, f10, f8
	fctiwz   f8, f8
	stfd     f8, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f8, r5, r0
	fneg     f8, f8
	b        lbl_80346CF0

lbl_80346CCC:
	lfs      f8, lbl_8051E29C@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f8, f10, f8
	fctiwz   f8, f8
	stfd     f8, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f8, r5, r0

lbl_80346CF0:
	fcmpo    cr0, f10, f0
	fmadds   f11, f1, f8, f31
	bge      lbl_80346D00
	fneg     f10, f10

lbl_80346D00:
	fmuls    f8, f10, f9
	fcmpo    cr0, f6, f0
	fctiwz   f8, f8
	stfd     f8, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r5, r6, r0
	lfs      f8, 4(r5)
	fnmsubs  f10, f1, f8, f30
	bge      lbl_80346D54
	lfs      f8, lbl_8051E298@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f8, f6, f8
	fctiwz   f8, f8
	stfd     f8, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f8, r5, r0
	fneg     f8, f8
	b        lbl_80346D74

lbl_80346D54:
	fmuls    f8, f6, f9
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fctiwz   f8, f8
	stfd     f8, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f8, r5, r0

lbl_80346D74:
	fcmpo    cr0, f6, f0
	fmadds   f8, f1, f8, f31
	bge      lbl_80346D84
	fneg     f6, f6

lbl_80346D84:
	fmuls    f6, f6, f9
	addi     r3, r3, 1
	fctiwz   f6, f6
	stfd     f6, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r5, r6, r0
	lfs      f6, 4(r5)
	stfs     f31, -0x8000(r4)
	fnmsubs  f6, f1, f6, f30
	stfs     f30, -0x8000(r4)
	stfs     f0, -0x8000(r4)
	stfs     f11, -0x8000(r4)
	stfs     f10, -0x8000(r4)
	stfs     f0, -0x8000(r4)
	stfs     f8, -0x8000(r4)
	stfs     f6, -0x8000(r4)
	stfs     f0, -0x8000(r4)
	stfs     f29, -0x8000(r4)
	stfs     f28, -0x8000(r4)
	stfs     f7, -0x8000(r4)
	stfs     f11, -0x8000(r4)
	stfs     f10, -0x8000(r4)
	stfs     f0, -0x8000(r4)
	stfs     f8, -0x8000(r4)
	stfs     f6, -0x8000(r4)
	stfs     f0, -0x8000(r4)
	bdnz     lbl_80346C54

lbl_80346DF4:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0xa4(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/**
 * @note Address: 0x80346E2C
 * @note Size: 0x5C
 */
bool THurryUp2D::doStart(Screen::StartSceneArg const* arg)
{
	bool ret = TTestBase::doStart(arg);
	init();
	doUpdate();
	return ret;
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void THurryUp2D::calcCount()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80346E88
 * @note Size: 0x4C0
 */
void THurryUp2D::init()
{
	mState   = StateInit;
	mTimer   = 0.0f;
	mTimeMax = 0.0f;

	mParams[1].mAlpha1    = 100;
	mParams[1].mAlpha2    = 255;
	mParams[1].mScale     = 0.5f;
	mParams[1].mGoalScale = 1.0f;

	mParams[2].mAlpha1    = 100;
	mParams[2].mAlpha2    = 255;
	mParams[2].mScale     = 0.9f;
	mParams[2].mGoalScale = 1.05f;

	mParams[4].mAlpha1    = 255;
	mParams[4].mAlpha2    = 0;
	mParams[4].mScale     = 1.0f;
	mParams[4].mGoalScale = 2.0f;

	mPaneHurry->hide();
	mPaneHurry->setOffset(mPane1Pos.x + mInitPosX, mPane1Pos.y);
	mPaneHurry->setBasePosition(J2DPOS_Center);
	mPaneHurry->updateScale(0.5f);
	mPaneHurry->setAlpha(100);

	mPaneSundown->hide();
	mPaneSundown->setOffset(mPane2Pos.x - mInitPosX, mPane2Pos.y);
	mPaneSundown->setBasePosition(J2DPOS_Center);
	mPaneSundown->updateScale(0.5f);
	mPaneSundown->setAlpha(100);

	mPaneSunL->setBasePosition(J2DPOS_Center);
	mPaneSunL->updateScale(mParams[2].mScale);
	mPaneSunL->setAlpha(100);
	mPaneSunL->hide();

	mPaneSunW->setBasePosition(J2DPOS_Center);
	mPaneSunW->updateScale(1.0f);
	mPaneSunW->hide();

	mPaneHurry2->setBasePosition(J2DPOS_Center);
	mPaneHurry2->updateScale(0.5f);
	mPaneHurry2->hide();
	mPaneHurry2->setAlpha(100);

	mPaneSundown2->setBasePosition(J2DPOS_Center);
	mPaneSundown2->updateScale(0.5f);
	mPaneSundown2->hide();
	mPaneSundown2->setAlpha(100);

	if (mDoDraw) {
		mWhitePane->show();
		J2DBlend info1(1, 6, 7, 0);
		// J2DBlend blend(info1);
		static_cast<J2DPictureEx*>(mPaneSunW)->getMaterial()->mPeBlock.setBlend(info1);

		J2DBlend info2(1, 1, 0, 0);
		// J2DBlend blend2(info2);
		mWhitePane->getMaterial()->mPeBlock.setBlend(info2);
		mWhitePane->mAlpha = 0;
	} else {
		J2DBlend info(1, 4, 5, 0);
		// J2DBlend blend(info);
		J2DPictureEx* pane = static_cast<J2DPictureEx*>(mScreen->search('sunw'));
		pane->getMaterial()->mPeBlock.setBlend(info);
		mWhitePane->hide();
	}

	// These values need to be treated as variables and not constants, somehow
	s32 numA = 75;
	s32 numB = 9;
	s32 numC = 64;
	s32 numD = 6;
	mTimer   = calcTimer(numA, numB, numC, numD);

	changeState(mState, mTimer);

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r4, 0
	lfs      f0, lbl_8051E258@sda21(r2)
	stw      r0, 0x34(r1)
	li       r0, 0xff
	lfs      f4, lbl_8051E260@sda21(r2)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lfs      f3, lbl_8051E270@sda21(r2)
	stw      r4, 0xb0(r3)
	li       r3, 0x64
	lfs      f2, lbl_8051E2B8@sda21(r2)
	stfs     f0, 0xb4(r31)
	lfs      f1, lbl_8051E2BC@sda21(r2)
	stfs     f0, 0xcc(r31)
	lfs      f0, lbl_8051E2C0@sda21(r2)
	stb      r3, 0xdc(r31)
	stb      r0, 0xdd(r31)
	stfs     f4, 0xe0(r31)
	stfs     f3, 0xe4(r31)
	stb      r3, 0xe8(r31)
	stb      r0, 0xe9(r31)
	stfs     f2, 0xec(r31)
	stfs     f1, 0xf0(r31)
	stb      r0, 0x100(r31)
	stb      r4, 0x101(r31)
	stfs     f3, 0x104(r31)
	stfs     f0, 0x108(r31)
	lwz      r3, 0x80(r31)
	stb      r4, 0xb0(r3)
	lfs      f1, 0x9c(r31)
	lfs      f0, mInitPosX__Q28Morimura10THurryUp2D@sda21(r13)
	lwz      r3, 0x80(r31)
	fadds    f0, f1, f0
	lfs      f1, 0xa0(r31)
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x80(r31)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0x80(r31)
	lfs      f0, lbl_8051E260@sda21(r2)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x80(r31)
	li       r4, 0x64
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x84(r31)
	li       r0, 0
	stb      r0, 0xb0(r3)
	lfs      f1, 0xa4(r31)
	lfs      f0, mInitPosX__Q28Morimura10THurryUp2D@sda21(r13)
	lwz      r3, 0x84(r31)
	fsubs    f0, f1, f0
	lfs      f1, 0xa8(r31)
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x84(r31)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0x84(r31)
	lfs      f0, lbl_8051E260@sda21(r2)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x84(r31)
	li       r4, 0x64
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x90(r31)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0x90(r31)
	lfs      f0, 0xec(r31)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x90(r31)
	li       r4, 0x64
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x90(r31)
	li       r0, 0
	li       r4, 4
	stb      r0, 0xb0(r3)
	lwz      r3, 0x88(r31)
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0x88(r31)
	lfs      f0, lbl_8051E270@sda21(r2)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x88(r31)
	li       r0, 0
	li       r4, 4
	stb      r0, 0xb0(r3)
	lwz      r3, 0x94(r31)
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0x94(r31)
	lfs      f0, lbl_8051E260@sda21(r2)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x94(r31)
	li       r0, 0
	li       r4, 0x64
	stb      r0, 0xb0(r3)
	lwz      r3, 0x94(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x98(r31)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0x98(r31)
	lfs      f0, lbl_8051E260@sda21(r2)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x98(r31)
	li       r0, 0
	li       r4, 0x64
	stb      r0, 0xb0(r3)
	lwz      r3, 0x98(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0xc4(r31)
	cmplwi   r0, 0
	beq      lbl_803471EC
	lwz      r3, 0x8c(r31)
	li       r6, 1
	li       r5, 6
	li       r4, 7
	stb      r6, 0xb0(r3)
	li       r0, 0
	lwz      r3, 0x88(r31)
	stb      r6, 0x1c(r1)
	lwz      r12, 0(r3)
	stb      r5, 0x1d(r1)
	lwz      r12, 0x13c(r12)
	stb      r4, 0x1e(r1)
	stb      r0, 0x1f(r1)
	lwz      r0, 0x1c(r1)
	stw      r0, 0x10(r1)
	mtctr    r12
	bctrl
	lbz      r6, 0x10(r1)
	li       r4, 1
	li       r0, 0
	lbz      r5, 0x11(r1)
	stb      r6, 0x7c(r3)
	lbz      r6, 0x12(r1)
	stb      r5, 0x7d(r3)
	lbz      r5, 0x13(r1)
	stb      r6, 0x7e(r3)
	stb      r5, 0x7f(r3)
	lwz      r3, 0x8c(r31)
	stb      r4, 0x18(r1)
	lwz      r12, 0(r3)
	stb      r4, 0x19(r1)
	lwz      r12, 0x13c(r12)
	stb      r0, 0x1a(r1)
	stb      r0, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0xc(r1)
	mtctr    r12
	bctrl
	lbz      r5, 0xc(r1)
	li       r0, 0
	lbz      r4, 0xd(r1)
	stb      r5, 0x7c(r3)
	lbz      r5, 0xe(r1)
	stb      r4, 0x7d(r3)
	lbz      r4, 0xf(r1)
	stb      r5, 0x7e(r3)
	stb      r4, 0x7f(r3)
	lwz      r3, 0x8c(r31)
	stb      r0, 0x1e0(r3)
	b        lbl_80347270

lbl_803471EC:
	lwz      r3, 0x7c(r31)
	li       r6, 1
	li       r5, 4
	li       r7, 5
	lwz      r12, 0(r3)
	li       r0, 0
	lis      r4, 0x73756E77@ha
	stb      r6, 0x14(r1)
	lwz      r12, 0x3c(r12)
	addi     r6, r4, 0x73756E77@l
	stb      r5, 0x15(r1)
	li       r5, 0
	stb      r7, 0x16(r1)
	stb      r0, 0x17(r1)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r0, 0x14(r1)
	lwz      r12, 0x13c(r12)
	stw      r0, 8(r1)
	mtctr    r12
	bctrl
	lbz      r5, 8(r1)
	li       r0, 0
	lbz      r4, 9(r1)
	stb      r5, 0x7c(r3)
	lbz      r5, 0xa(r1)
	stb      r4, 0x7d(r3)
	lbz      r4, 0xb(r1)
	stb      r5, 0x7e(r3)
	stb      r4, 0x7f(r3)
	lwz      r3, 0x8c(r31)
	stb      r0, 0xb0(r3)

lbl_80347270:
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	li       r6, 0x4b
	lfs      f2, lbl_8051E2B0@sda21(r2)
	li       r4, 9
	cmplwi   r0, 0
	li       r3, 0x40
	li       r0, 6
	beq      lbl_80347294
	lfs      f2, lbl_8051E2B4@sda21(r2)

lbl_80347294:
	lwz      r7, 0xac(r31)
	li       r5, 1
	lfs      f1, 8(r7)
	lfs      f0, 0xc(r7)
	fsubs    f0, f1, f0
	stw      r5, 0xb0(r31)
	fdivs    f0, f0, f2
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r7, 0x24(r1)
	cmpw     r7, r6
	blt      lbl_80347304
	subf     r7, r6, r7
	li       r5, 2
	cmpw     r7, r4
	stw      r5, 0xb0(r31)
	blt      lbl_80347304
	subf     r7, r4, r7
	li       r5, 3
	cmpw     r7, r3
	stw      r5, 0xb0(r31)
	blt      lbl_80347304
	subf     r7, r3, r7
	li       r5, 4
	cmpw     r7, r0
	stw      r5, 0xb0(r31)
	blt      lbl_80347304
	subf     r7, r0, r7

lbl_80347304:
	xoris    r3, r7, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	mr       r3, r31
	lfd      f1, lbl_8051E268@sda21(r2)
	stw      r0, 0x20(r1)
	lfd      f0, 0x20(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lwz      r4, 0xb0(r31)
	lfs      f1, 0xb4(r31)
	bl       changeState__Q28Morimura10THurryUp2DFif
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80347348
 * @note Size: 0x2CC
 */
void THurryUp2D::move()
{
	f32 time = mMoveSp * 60.0f * sys->mDeltaTime;
	mPaneHurry->setOffset(-(time * mTimer - (mPane1Pos.x + mInitPosX)), mPane1Pos.y);
	mPaneSundown->setOffset((time * mTimer + (mPane2Pos.x - mInitPosX)), mPane2Pos.y);

	u8 alpha = mParams[1].mAlpha1 * mFadeFraction;
	mPaneHurry->setAlpha(alpha);
	mPaneSundown->setAlpha(alpha);

	if (mPaneHurry->mOffset.x < mPane1Pos.x) {
		mPaneHurry2->show();
		mPaneSundown2->show();
		f32 scale     = mParams[mState].mScale;
		f32 gscale    = mParams[mState].mGoalScale;
		int i         = FABS(mPane1Pos.x - mPaneHurry->mOffset.x) / time;
		const f32 mod = mScaleRate;
		for (i; i > 0; i--) {
			if (scale < gscale) {
				scale *= mod;
			}
			if (scale > gscale) {
				scale = gscale;
			}
		}
		J2DPane* pane = mPaneHurry2;
		if (pane->mAlpha < 255) {
			u8 alpha = mFadeFraction * u8(mAlphaMod1 * scale + mAlphaMod2);
			pane->setAlpha(alpha);
			mPaneSundown2->setAlpha(alpha);
		}
		mPaneHurry2->updateScale(scale);
		mPaneSundown2->updateScale(scale);
	}

	if (mPaneHurry->mOffset.x < mPane1Pos.x - mInitPosX && (mPaneHurry2->mScale.x >= mParams[mState].mGoalScale)) {
		changeState(StateScaleUp1, 0.0f);
	}
}

/**
 * @note Address: 0x80347614
 * @note Size: 0x168
 */
void THurryUp2D::scaleUp1()
{
	J2DPane* pane = mPaneSunL;
	f32 goal      = mParams[mState].mGoalScale;
	f32 scale;
	if (pane->mScale.x < goal) {
		f32 factor = mTimer * mScaleSp1 * 60.0f;
		scale      = factor * sys->mDeltaTime + mParams[mState].mScale;
		if (scale >= goal) {
			scale = goal;
		}
		pane->setAlpha(mFadeFraction * u8(mAlphaMod1 * scale + mAlphaMod2));
	} else {
		scale = 1.0f;
		changeState(StateColorUp, 0.0f);
	}

	mPaneSunL->updateScale(scale);

	u8 alpha = mFadeFraction * 255.0f;
	mPaneHurry2->setAlpha(alpha);
	mPaneSundown2->setAlpha(alpha);
}

/**
 * @note Address: 0x8034777C
 * @note Size: 0x1B0
 */
void THurryUp2D::colorUp()
{
	u8 alpha = 255;
	f32 v1   = mColorUpSp * (sys->mDeltaTime * 120.0f);
	f32 time = (int)v1;
	if (time * mTimer < mParams[mState].mAlpha2) {
		f32 time2 = mParams[mState].mAlpha1;
		alpha     = mTimer * (int)v1 + time2;
	} else {
		changeState(StateScaleUp2, 0.0f);
	}

	mWhitePane->setAlpha(255);
	mWhitePane->mAlpha = alpha;
	mPaneSunL->setAlpha(alpha * mFadeFraction);
	mPaneSunW->setAlpha(255);
	u8 alpha2 = mFadeFraction * 255.0f;
	mPaneHurry2->setAlpha(alpha2);
	mPaneSundown2->setAlpha(alpha2);
}

/**
 * @note Address: 0x8034792C
 * @note Size: 0x240
 */
void THurryUp2D::scaleUp2()
{
	f32 goal = mParams[mState].mGoalScale;
	if (mPaneSunL->mScale.x < goal) {
		f32 factor = mTimer * mScaleSp2 * 60.0f;
		f32 scale  = factor * sys->mDeltaTime + mParams[mState].mScale;
		if (scale > goal) {
			scale = goal;
		}
		u8 alpha = mFadeFraction * u8(mAlphaMod1 * scale + mAlphaMod2);
		mPaneHurry2->setAlpha(alpha);
		mPaneSundown2->setAlpha(alpha);
		mPaneSunL->setAlpha(alpha);
		mPaneSunW->setAlpha(alpha);
		mWhitePane->setAlpha(0);
		mPaneSunL->updateScale(scale);
	} else {
		if (!mIsSection && (Game::gameSystem->isFlag(Game::GAMESYS_IsGameWorldActive)) && !mIsSection && Game::moviePlayer
		    && !Game::playData->isDemoFlag(Game::DEMO_First_Sunset_Warning)) {
			Game::MoviePlayArg arg("g09_first_sunset", nullptr, nullptr, 0);
			Game::Navi* navi = Game::naviMgr->getActiveNavi();
			if (navi && navi->mCamera) {
				Game::playData->setDemoFlag(Game::DEMO_First_Sunset_Warning);
				Game::moviePlayer->mTargetNavi   = navi;
				Game::moviePlayer->mActingCamera = navi->mCamera;
				Game::moviePlayer->play(arg);
			}
		}
	}
}

/**
 * @note Address: 0x80347B6C
 * @note Size: 0x254
 */
void THurryUp2D::changeState(int state, f32 speed)
{
	mState = state;
	mTimer = speed;

	f32 alpha  = mParams[mState].mAlpha2;
	mAlphaMod1 = (alpha - mParams[mState].mAlpha1) / (mParams[mState].mGoalScale - mParams[mState].mScale);
	mAlphaMod2 = -(mAlphaMod1 * mParams[mState].mGoalScale - alpha);

	switch (mState) {
	case StateInit:
		mWhitePane->mAlpha = 0;
		break;
	case StatePlaySE:
		mPaneHurry->show();
		mPaneSundown->show();
		break;
	case StateScaleUp1:
		mPaneHurry->hide();
		mPaneSundown->hide();
		mPaneHurry2->updateScale(1.0f);
		mPaneSundown2->updateScale(1.0f);
		mPaneHurry2->show();
		mPaneSundown2->show();
		mPaneSunL->show();
		mPaneSunL->setAlpha(0);
		break;
	case StateColorUp:
	case StateScaleUp2:
		mPaneSunL->setAlpha(0);
		mPaneSunW->setAlpha(0);
		mPaneHurry2->updateScale(1.0f);
		mPaneSundown2->updateScale(1.0f);
		mPaneSunL->updateScale(1.0f);
		mPaneSunW->updateScale(1.0f);
		mPaneHurry2->show();
		mPaneSundown2->show();
		mPaneSunL->show();
		mPaneSunW->show();
		break;
	}
}

} // namespace Morimura
