#include "Morimura/VsSelect.h"
#include "og/newScreen/ogUtil.h"
#include "og/Screen/ArrowAlphaBlink.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "Game/gameChallenge2D.h"
#include "efx2d/T2DBattleDive.h"
#include "Dolphin/rand.h"
#include "Screen/Game2DMgr.h"
#include "Controller.h"

static const char unusedName[] = "vsSelect2D";
namespace Morimura {
bool TVsSelect::mCanCancel      = false;
bool TVsSelect::mLoopDrum       = false;
bool TVsSelect::mForceDemoStart = false;
f32 TVsSelect::mAngRate         = 0.2f;
f32 TVsSelect::mMoveSpeed       = 25.0f;
f32 TVsSelect::mIndVal          = 0.05f;
f32 TVsSelect::mIndShuki        = 0.3f;
f32 TVsSelect::mZoomFrameMax    = 25.0f;
f32 TVsSelect::mTestVal         = 10.0f;
f32 TVsSelect::mAngUp           = 0.03f;
f32 TVsSelect::mWindowScale     = 1.0f;
f32 TVsSelect::mDemoScaleMax    = 2.2f;
f32 TVsSelect::mDemoScale       = 1.0f;
f32 TVsSelect::mDemoOffsetMax   = 290.0f;
f32 TVsSelect::mFireAlphaRate   = 0.5f;
JKRHeap* TVsSelect::mDebugHeap;
JKRHeap* TVsSelect::mDebugHeapParent;
Vector2f TVsPiki::mPikiOffset = Vector2f(12.5f, -0.5f);
TVsSelect::StaticValues TVsSelect::mScrollParm;

u32 unk[]                            = { 1, 2, 3 };
ResTIMG* TVsSelect::mOrimaTexture[5] = { nullptr };
ResTIMG* TVsSelect::mLouieTexture[5] = { nullptr };

TVsSelectSlotIndex slotIDInfo[12] = {
	{ 6, 0, '2042_00' },  // "Supercharge all Pikmin!"
	{ 7, 1, '2041_00' },  // "Bury enemy Pikmin!"
	{ 8, 5, '2049_00' },  // "Volatile Dweevil drops on opponent."
	{ 9, 3, '2044_00' },  // "Blowhog drops on opponent."
	{ 10, 4, '2045_00' }, // "Blowhog drops on opponent."
	{ 11, 2, '2052_00' }, // "Swooping Snitchbug drops on opponent."
	{ 0, 6, '2046_00' },  // "Recover stolen marble."
	{ 1, 7, '2050_00' },  // "Boulders drop on opponent."
	{ 2, 8, '2051_00' },  // "All Pikmin bloom."
	{ 3, 9, '2047_00' },  // "Increase Pikmin by five."
	{ 4, 10, '2048_00' }, // "Increase Pikmin by ten."
	{ 5, 11, '2043_00' }, // "Vanish from opponent's view."
};

/**
 * @note Address: 0x8039982C
 * @note Size: 0x314
 */
void TVsSelectIndPane::draw()
{
	J2DOrthoGraph graf(0.0f, 0.0f, 640.0f, 480.0f, -1.0f, 1.0f);
	graf.setPort();
	P2ASSERTLINE(49, mTexture1);
	P2ASSERTLINE(50, mTexture2);
	mTexture1->load(GX_TEXMAP0);
	mTexture2->load(GX_TEXMAP1);
	GXSetNumTevStages(1);
	GXSetNumIndStages(1);
	GXSetNumChans(0);
	GXSetNumTexGens(1);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_DSTALPHA, GX_BL_INVDSTALPHA, GX_LO_CLEAR);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x1e, GX_FALSE, 0x7d);
	GXSetIndTexOrder(GX_IND_TEX_STAGE_0, GX_TEXCOORD0, GX_TEXMAP1);
	GXSetIndTexCoordScale(GX_IND_TEX_STAGE_0, GX_ITS_1, GX_ITS_1);

	Mtx mtx;
	Mtx23 indMtx;
	if (mMtxUseType) {
		indMtx[0][0] = mMtxXOffset;
		indMtx[0][1] = 0.0f;
		indMtx[0][2] = 0.0f;
		indMtx[1][0] = 0.0f;
		indMtx[1][1] = mMtxYOffset;
		indMtx[1][2] = 0.0f;
	} else {
		PSMTXRotRad(mtx, J2DROTATE_Z, mRotation * 0.01745329f);
		indMtx[0][0] = mtx[0][0] * 0.5f;
		indMtx[0][1] = mtx[0][1] * 0.5f;
		indMtx[0][2] = 0.0f;
		indMtx[1][0] = mtx[1][0] * 0.5f;
		indMtx[1][1] = mtx[1][1] * 0.5f;
		indMtx[1][2] = 0.0f;
	}

	GXSetIndTexMtx(GX_ITM_0, indMtx, mTexMtxScale);
	GXSetTevIndWarp(GX_TEVSTAGE0, GX_IND_TEX_STAGE_0, GX_TRUE, GX_FALSE, GX_ITM_0);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
	GXSetTevOp(GX_TEVSTAGE0, GX_REPLACE);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);

	Mtx mtx2;
	PSMTXIdentity(mtx2);
	GXLoadPosMtxImm(mtx2, 0);
	GXLoadTexMtxImm(mtx2, 0x1e, GX_MTX2x4);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	f32 one  = 1.0f;
	// Top Left
	GXTexCoord2f32(mMinPos.x, mMinPos.y);
	GXPosition3f32(zero, zero, zero);

	// Top Right
	GXTexCoord2f32(mMaxPos.x, mMinPos.y);
	GXPosition3f32(zero, one, zero);

	// Bottom Right
	GXTexCoord2f32(mMaxPos.x, mMaxPos.y);
	GXPosition3f32(zero, one, one);

	// Bottom Left
	GXTexCoord2f32(mMinPos.x, mMaxPos.y);
	GXPosition3f32(zero, zero, one);
}

/**
 * @note Address: 0x80399B40
 * @note Size: 0x3C
 */
void TVsSelectExplanationWindow::create(char const* path, u32 flags)
{
	TScreenBase::create(path, flags);
	mTransXModifier = 0.0f;
	mTransYModifier = -800.0f;
}

/**
 * @note Address: 0x80399B7C
 * @note Size: 0x4
 */
void TVsSelectExplanationWindow::screenScaleUp() { }

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
TVsPiki::TVsPiki(J2DPane* left, J2DPane* right, J2DPane* flower)
{
	mPikminLeft = static_cast<J2DPicture*>(left);
	left->setBasePosition(J2DPOS_TopRight);

	mPikminRight = static_cast<J2DPicture*>(right);
	right->setBasePosition(J2DPOS_TopLeft);

	mPikminFlower = static_cast<J2DPicture*>(flower);
	flower->setBasePosition(J2DPOS_Center);

	for (int i = 0; i < 3; i++) {
		P2ASSERTLINE(176, (&mPikminLeft)[i]);
	}
}

/**
 * @note Address: 0x80399B80
 * @note Size: 0x4
 */
TVsPiki::posInfo::posInfo() { }

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
void TVsPiki::init(int sel)
{
	for (int i = 0; i < 10; i++) {
		mPosInfos[i].mPosition.x = mPikiOffset.x * i;
		mPosInfos[i].mStateTimer = 0.0f;
		if (i < sel) {
			mPosInfos[i].mState      = posInfo::Idle;
			mPosInfos[i].mPosition.y = 0.0f;
		} else {
			mPosInfos[i].mState      = posInfo::Sprout;
			mPosInfos[i].mPosition.y = 20.0f;
		}
	}
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80399B84
 * @note Size: 0x2C8
 */
void TVsPiki::update(int pikis)
{
	mPikminLeft->setBasePosition(J2DPOS_TopRight);
	mPikminRight->setBasePosition(J2DPOS_TopLeft);
	mPikminFlower->setBasePosition(J2DPOS_Center);

	mBounds[0] = Vector2f(mPikminLeft->getGlbVtx(GLBVTX_BtmLeft).x - mPikminRight->getGlbVtx(GLBVTX_BtmRight).x,
	                      mPikminLeft->getGlbVtx(GLBVTX_BtmLeft).y - mPikminRight->getGlbVtx(GLBVTX_BtmRight).y);
	mBounds[1] = Vector2f(mPikminLeft->getGlbVtx(GLBVTX_BtmLeft).x - mPikminFlower->getGlbVtx(GLBVTX_BtmLeft).x,
	                      mPikminLeft->getGlbVtx(GLBVTX_BtmLeft).y - mPikminFlower->getGlbVtx(GLBVTX_BtmLeft).y);

	for (int i = 0; i < 10; i++) {
		if (i < pikis) {
			if (mPosInfos[i].mState == posInfo::Sprout) {
				mPosInfos[i].mState = posInfo::Pluck;
			}
		} else if (mPosInfos[i].mState == posInfo::Idle) {
			mPosInfos[i].mState = posInfo::Bury;
		}

		switch (mPosInfos[i].mState) {
		case posInfo::Idle:
		case posInfo::Sprout:
			mPosInfos[i].mStateTimer = 0.0f;
			break;
		case posInfo::Pluck:
			if (mPosInfos[i].mPosition.y > 0.0f) {
				mPosInfos[i].mPosition.y -= 5.0f;
				if (mPosInfos[i].mPosition.y <= 0.0f) {
					mPosInfos[i].mPosition.y = 0.0f;
				}
			} else {
				mPosInfos[i].mStateTimer += PI / 10;
				if (mPosInfos[i].mStateTimer >= PI) {
					mPosInfos[i].mStateTimer = PI;
					mPosInfos[i].mState      = posInfo::Idle;
				}
				mPosInfos[i].mPosition.y = sinf(mPosInfos[i].mStateTimer) * -20.0f;
			}
			break;
		case posInfo::Bury:
			if (mPosInfos[i].mPosition.y < 20.0f) {
				mPosInfos[i].mPosition.y += 5.0f;
				if (mPosInfos[i].mPosition.y >= 20.0f) {
					mPosInfos[i].mPosition.y = 20.0f;
					mPosInfos[i].mState      = posInfo::Sprout;
				}
			}
			break;
		}
	}
}

/**
 * @note Address: 0x80399E4C
 * @note Size: 0x280
 */
void TVsPiki::draw()
{
	JGeometry::TVec3f pos = mPikminLeft->getGlbVtx(GLBVTX_TopLeft);
	f32 x1                = pos.x - mPikiOffset.x;
	f32 xoffs             = mPikiOffset.x;
	f32 y1                = pos.y - 50.0f;
	f32 y2                = mPikminLeft->getGlbVtx(GLBVTX_TopLeft).y - y1;
	f32 x2                = (xoffs * 12.0f + x1) - x1;
	GXSetScissor(x1, y1, x2, y2);
	Vector2f* offs = &mPikiOffset;

	for (int i = 0; i < 10; i++) {
		J2DPicture* pic = mPikminLeft;
		f32 calc        = TVsSelect::mDemoScale;
		f32 x           = mPosInfos[i].mPosition.x * calc + pic->getGlbVtx(GLBVTX_BtmLeft).x;
		f32 y           = mPosInfos[i].mPosition.y * calc + pic->getGlbVtx(GLBVTX_BtmLeft).y;
		pic->draw(x, y, calc * pic->getWidth(), calc * pic->getHeight(), false, false, false);
		pic->calcMtx();

		pic = mPikminRight;
		pic->draw(x - mBounds[0].x, y - mBounds[0].y, calc * -pic->getWidth(), calc * pic->getHeight(), false, false, false);
		pic->calcMtx();

		pic = mPikminFlower;
		pic->draw(offs->y + (x + mBounds[1].x), y - mBounds[1].y, calc * pic->getWidth(), calc * pic->getHeight(), false, false, false);
		pic->calcMtx();
	}

	GXSetScissor(0, 0, 640, 480);

	FORCE_DONT_INLINE;

	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	lwz      r4, 0(r3)
	mr       r27, r3
	addi     r3, r1, 0x2c
	li       r5, 2
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f29, 0x2c(r1)
	addi     r3, r1, 0x20
	lfs      f31, mPikiOffset__Q28Morimura7TVsPiki@sda21(r13)
	li       r5, 2
	lfs      f30, 0x30(r1)
	lfs      f0, lbl_8051F1B8@sda21(r2)
	fsubs    f29, f29, f31
	lwz      r4, 0(r27)
	fsubs    f30, f30, f0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f0, 0x24(r1)
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	lfs      f0, lbl_8051F1BC@sda21(r2)
	mr       r29, r3
	fmadds   f0, f0, f31, f29
	fsubs    f1, f0, f29
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r30, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f29
	mr       r31, r3
	bl       __cvt_fp2unsigned
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl       GXSetScissor
	mr       r29, r27
	li       r28, 0
	addi     r30, r13, mPikiOffset__Q28Morimura7TVsPiki@sda21

lbl_80399F04:
	lwz      r31, 0(r27)
	addi     r3, r1, 8
	lfs      f29, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
	li       r5, 0
	mr       r4, r31
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0xc(r1)
	mr       r4, r31
	lfs      f0, 0x18(r29)
	addi     r3, r1, 0x14
	li       r5, 0
	fmadds   f30, f0, f29, f1
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x14(r1)
	mr       r3, r31
	lfs      f0, 0x14(r29)
	fmr      f2, f30
	lwz      r12, 0(r31)
	li       r4, 0
	fmadds   f31, f0, f29, f1
	lfs      f4, 0x28(r31)
	lfs      f3, 0x20(r31)
	lfs      f1, 0x2c(r31)
	li       r5, 0
	lfs      f0, 0x24(r31)
	fsubs    f3, f4, f3
	lwz      r12, 0xec(r12)
	fsubs    f0, f1, f0
	li       r6, 0
	fmr      f1, f31
	fmuls    f3, f29, f3
	fmuls    f4, f29, f0
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r31, 4(r27)
	li       r4, 0
	lfs      f1, 0xac(r27)
	li       r5, 0
	lfs      f2, 0x28(r31)
	mr       r3, r31
	lfs      f0, 0x20(r31)
	fsubs    f1, f31, f1
	lwz      r12, 0(r31)
	li       r6, 0
	fsubs    f3, f2, f0
	lfs      f2, 0x2c(r31)
	lfs      f0, 0x24(r31)
	lfs      f4, 0xb0(r27)
	fneg     f3, f3
	lwz      r12, 0xec(r12)
	fsubs    f0, f2, f0
	fsubs    f2, f30, f4
	fmuls    f3, f29, f3
	fmuls    f4, f29, f0
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r31, 8(r27)
	li       r4, 0
	lfs      f2, 0xb4(r27)
	li       r5, 0
	lfs      f1, 0x28(r31)
	mr       r3, r31
	lfs      f0, 0x20(r31)
	fadds    f5, f31, f2
	lwz      r12, 0(r31)
	li       r6, 0
	fsubs    f4, f1, f0
	lfs      f0, 4(r30)
	lfs      f2, 0xb8(r27)
	lfs      f3, 0x2c(r31)
	fadds    f1, f0, f5
	lfs      f0, 0x24(r31)
	lwz      r12, 0xec(r12)
	fsubs    f2, f30, f2
	fsubs    f0, f3, f0
	fmuls    f3, f29, f4
	fmuls    f4, f29, f0
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r29, r29, 0x10
	cmpwi    r28, 0xa
	blt      lbl_80399F04
	li       r3, 0
	li       r4, 0
	li       r5, 0x280
	li       r6, 0x1e0
	bl       GXSetScissor
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void TVsPiki::setAlpha(u8 alpha)
{
	for (int i = 0; i < 3; i++) {
		(&mPikminLeft)[i]->setAlpha(alpha);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x108
 */
void TVsSelectOnyon::reset()
{
	mCurrentPosition = Vector2f(-100.0f, 0.0f);
	int test         = randInt(20);
	mCounter         = -(test + int(TVsSelect::mTestVal));
	_30              = 0.0f;
	_3C              = true;
	mOnyonPane->hide();
	mGoalAngle = 0.0f;
	if (randFloat() > 0.5f) {
		mGoalAngle = PI;
	}
	mVelocity   = 0.0f;
	mAngleDef   = 0.0f;
	mAngleTimer = TVsSelect::mAngRate;
}

/**
 * @note Address: 0x8039A0CC
 * @note Size: 0x308
 */
void TVsSelectOnyon::posUpdate(f32 rate)
{
	mCounter++;
	if (mCounter > 0) {
		if (rate == 1.0f) {
			mAngleTimer += TVsSelect::mAngUp;
			if (mAngleTimer > 1.0f) {
				mAngleTimer = 1.0f;
			}
		} else {
			mAngleTimer -= TVsSelect::mAngUp;
			if (mAngleTimer < 0.0f) {
				mAngleTimer = 0.0f;
			}
		}
	}

	f32 dist  = mAngleTimer * getAngDist();
	f32 clamp = TAU;
	if (FABS(dist) > clamp) {
		if (dist > 0.0f) {
			dist = clamp;
		} else {
			dist = -clamp;
		}
	}

	mGoalAngle  = roundAng(mGoalAngle + dist);
	f32 speed   = TVsSelect::mMoveSpeed * rate;
	mAngleDef.x = speed * sinf(mGoalAngle);
	mAngleDef.y = speed * -cosf(mGoalAngle);

	f32 scale = mAngleTimer;
	if (scale < 0.05f) {
		scale = 0.05f;
	}
	scale = 0.4f / scale;
	if (scale <= 0.4f) {
		mAngleDef = 0.0f;
		mVelocity = 0.0f;
	} else {
		f32 calc = roundAng(TAU - mGoalAngle);
		mOnyonPane->setAngle((calc * 360.0f) / TAU);
	}
	mVelocity = mVelocity + (mAngleDef - mVelocity) * 0.1f;
	mCurrentPosition += mVelocity;
	mOnyonPane->setOffset(mCurrentPosition.x + -320.0f, mCurrentPosition.y + -240.0f);

	if (scale > 1.25f) {
		scale = 1.25f;
	}
	if (scale <= 0.4f) {
		mOnyonPane->hide();
		scale = 0.4f;
	} else {
		mOnyonPane->show();
	}
	mOnyonPane->updateScale(scale);
}

/**
 * @note Address: 0x8039A3D4
 * @note Size: 0x7C
 */
f32 TVsSelectOnyon::getAngDist()
{
	f32 x = mGoalPosition.x - mCurrentPosition.x;
	if (x == 0.0f) {
		x = 0.1f;
	}

	f32 y = mGoalPosition.y - mCurrentPosition.y;
	if (y == 0.0f) {
		y = 0.1f;
	}

	f32 angle = JMath::atanTable_.atan2_(x, -y);
	return angDist(roundAng(angle), mGoalAngle);
}

/**
 * @note Address: N/A
 * @note Size: 0x198
 */
void TVsSelectOnyon::draw()
{
	if (0.4f == mOnyonPane->mScale.x) {
		mNaviPane->setBasePosition(J2DPOS_Center);
		mNaviPane->draw(mCurrentPosition.x + -30.0f, mCurrentPosition.y + -30.0f, false, false, false);
		mNaviPane->calcMtx();
		_30 += 0.05f;
		mOnyonPane->hide();
		if (_30 > 2.0f) {
			_30 = 2.0f;
		}
		if (_3C) {
			_3C = false;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_2PTOP_ONY_ENTER, 0);
			Vector2f pos(mCurrentPosition.x - 16.0f, mCurrentPosition.y - 16.0f);
			efx2d::Arg arg(pos);
			efx2d::T2DBattleDive efx;
			efx.create(&arg);
		}
	}
}

/**
 * @note Address: 0x8039A450
 * @note Size: 0x2B0
 */
void TVsSelectScreen::create(char const* name, u32 flags)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set(name, flags, mArchive);
	J2DPane* menu = mScreenObj->search('Tbmenu11');
	P2ASSERTLINE(489, menu);

	mCallbackScissor          = new TCallbackScissor;
	mCallbackScissor->mBounds = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);
	mScreenObj->addCallBack('Pblo1', mCallbackScissor);

	mScreenObj->addCallBack('Tbmenu11', new og::Screen::CallBack_Message);

	TCallbackScissor* scis = new TCallbackScissor;
	scis->mBounds          = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);
	mScreenObj->addCallBack('Tbmenu11', scis);

	menu->removeFromParent();
	og::Screen::setCallBackMessage(mScreenObj);
	mScreenObj->search('Ncourse')->appendChild(menu);

	mAnimScreens = new og::Screen::AnimScreen*[mAnimScreenCountMax];
	og::Screen::setAlphaScreen(mScreenObj);
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
TVsSelectCBWinNum::TVsSelectCBWinNum(char** p1, u16 p2, JKRArchive* arc)
    : og::Screen::CallBack_CounterDay(p1, p2, arc)
    , mIsNeedUp(false)
    , mScaleMgr(nullptr)
{
	mScaleMgr = new og::Screen::ScaleMgr;
}

/**
 * @note Address: 0x8039A700
 * @note Size: 0x58
 */
void TVsSelectCBWinNum::update()
{
	CallBack_CounterRV::update();
	CallBack_CounterDay::setValue();
	mDayPic->updateScale(mScaleMgr->calc());
}

/**
 * @note Address: 0x8039A758
 * @note Size: 0x68
 */
void TVsSelectCBWinNum::setValue(bool a1, bool a2)
{
	if (mIsNeedUp) {
		CallBack_CounterRV::setValue(true, false);
		mScaleMgr->up(0.5f, 30.0f, 0.8f, 0.0f);
		mIsNeedUp = false;
	} else {
		CallBack_CounterRV::setValue(a1, a2);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
TVsSelectSlotIndex* TVsSelectSlotIndex::getIndexInfo(int id)
{
	for (int i = 0; i < 12; i++) {
		if (slotIDInfo[i].mIndex == id) {
			return &slotIDInfo[i];
		}
	}
	return &slotIDInfo[0];
}

/**
 * @note Address: 0x8039A7C0
 * @note Size: 0x3A0
 */
TVsSelect::TVsSelect()
    : TScrollList("vsSelect")
    , mVsSelectTextureArc(nullptr)
    , mController2(nullptr)
    , mListScreen(nullptr)
    , mBackgroundScreen(nullptr)
    , mRedPodScreen(nullptr)
    , mBluePodScreen(nullptr)
    , mSlotTexturesScreen(nullptr)
    , mFireScreen(nullptr)
    , mRulesWindow(nullptr)
    , mIndPane(nullptr)
    , mPane3DStick(nullptr)
    , mPaneSpot(nullptr)
    , mPaneStageList(nullptr)
    , mPaneStageNameBg(nullptr)
    , mPaneStars(nullptr)
    , mPaneLevelName(nullptr)
    , mPaneRulesInfo(nullptr)
    , mIndPic(nullptr)
    , mMesgData(nullptr)
    , mEfxCountKira(nullptr)
    , mStickImage(nullptr)
    , mStickAnim(nullptr)
    , mArrowBlink(nullptr)
    , mIsDemoStarted(true)
    , mIsOnyonHitGoal(false)
    , mIsUpdatedScore(true)
    , mCurrentRulesPage(0)
    , mDoChangeRulesPage(false)
    , mIsRulesPageChanging(true)
    , mLevelNameYPos(0.0f)
    , _234(1.0f)
    , mPaneStarAlpha(1.0f)
    , mDrawAlpha(0)
    , mIsSelectIndexChange(0)
    , mZoomState(0)
    , mStickAnimState(0)
    , mChangeFaceState(-1)
    , mZoomLevel(0.0f)
    , mOtherLevelsFadeAlpha(1.0f)
    , mRulesMoveXPos(0.0f)
    , mRuleChangeTimer(0.0f)
    , mRulePageChangeSpeed(0.25f)
    , mChangeFaceTimer(0.0f)
    , mFaceChangeSpeed(60.0f)
    , mDoDebugScores(false)
{
	mNumActiveRows = 5; // 5 course thumbnails are loaded at a time
	for (int i = 0; i < mNumActiveRows; i++) {
		mActiveCourseThumbs[i] = nullptr;
		mPaneLevelWindows[i]   = nullptr;
	}

	for (int i = 0; i < 2; i++) {
		mHandicapSel[i]        = 3;
		mOnyonObj[i]           = nullptr;
		mVsPiki[i]             = nullptr;
		mWinCounter[i]         = nullptr;
		mPaneRulesLR[i]        = nullptr;
		mPlayerWinCounts[i]    = false;
		mDebugWinCounts[i]     = 0;
		mCharacterMainIcons[i] = nullptr;
		mPlayerIconOffset[i]   = 0.0f;
	}

	for (int i = 0; i < 3; i++) {
		mButtonMsgTags[i] = nullptr;
	}

	for (int i = 0; i < 5; i++) {
		mOlimarFaceScales[i] = 1.0f;
		mLouieFaceScales[i]  = 1.0f;
	}
	mPowerIconOffset = 0.0f;

	for (int i = 0; i < 6; i++) {
		mPaneRulesDesc1[i]  = nullptr;
		mPaneRulesDesc2[i]  = nullptr;
		mPaneRulesIcons[i]  = nullptr;
		mOlimarFacePanes[i] = nullptr;
		mLouieFacePanes[i]  = nullptr;
	}

	for (int i = 0; i < 12; i++) {
		mPowerIconPanes[i] = nullptr;
	}
	mDemoScale         = 1.0f;
	mScreenXPos        = 0.0f;
	_290               = 115.0f;
	_294               = 170.0f;
	_298               = 470.0f;
	_29C               = 420.0f;
	mOnyonGoalOffset.x = -15.0f;
	mOnyonGoalOffset.y = -15.0f;
	mScrollParm._00    = 20.0f;
	mScrollParm._04    = 0.99f;
	mScrollParm._08    = 1.5f;
	mScrollParm._0C    = 1.25f;
	mScrollParm._10    = 2.5f;
	mCanCancel         = false;
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void TVsSelect::setDebugHeapParent(JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8039AC6C
 * @note Size: 0x2554
 */
void TVsSelect::doCreate(JKRArchive* arc)
{
	mController2 = new Controller(JUTGamePad::PORT_1);
	P2ASSERTLINE(783, mController2);
	mArchive = arc;

	DispMemberVsSelect* disp = static_cast<DispMemberVsSelect*>(getDispMember());
	int something            = 0;
	if (disp->isID(OWNER_MRMR, MEMBER_VS_SELECT)) {
		mDispMember = disp;
		something   = mDispMember->mStageNumber;
	} else {
		mIsSection = true;
	}

	if (mIsSection) {
		if (mDebugHeapParent) {
			mDebugHeap = JKRExpHeap::create(0x200000, mDebugHeapParent, true);
			P2ASSERTLINE(800, mDebugHeap);
			mDispMember                        = new (mDebugHeap, 0) DispMemberVsSelect;
			mDispMember->mDebugExpHeap         = mDebugHeap;
			mDispMember->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
			mDispMember->mRedWinCount          = randInt(99);
			mDispMember->mBlueWinCount         = randInt(99);
			mDispMember->mRedWinCount          = 2;
			mDispMember->mBlueWinCount         = 0;
			mDispMember->mStageCount           = VS_Stage_Count;
			if (randFloat() > 0.5f) {
				mDispMember->mVsWinner = 0;
			} else {
				mDispMember->mVsWinner = 1;
			}
			mDispMember->mVsWinner = 0; // so much for the random thing we just did
			getOwner()->setDispMember(mDispMember);
		} else {
			JUT_PANICLINE(820, "set DebugHeapParent. mail to morimun.\n");
		}
	}

	if (!mIsSection) {
		mDispMember->mDispWorldMapInfoWin0 = new og::Screen::DispMemberWorldMapInfoWin0;
	}

	mController     = getGamePad();
	mHandicapSel[0] = mDispMember->mOlimarHandicap;
	mHandicapSel[1] = mDispMember->mLouieHandicap;

	u64 tags[1] = { '4771_00' };
	mMesgData   = new TOffsetMsgSet(tags, '4770_00', 1);

	mRedPodScreen = new TScreenBase(arc, 2);
	mRedPodScreen->create("red_pod.blo", 0x20000);
	mRedPodScreen->addAnim("red_pod.bck");
	mRedPodScreen->addAnim("red_pod.btp");

	mBluePodScreen = new TScreenBase(arc, 2);
	mBluePodScreen->create("blue_pod.blo", 0x20000);
	mBluePodScreen->addAnim("blue_pod.bck");
	mBluePodScreen->addAnim("blue_pod.btp");

	mStageCount    = mDispMember->mStageCount;
	mLevelTextures = new ResTIMG*[mStageCount];

	if (mIsSection) {
		something = randFloat() * mStageCount;
	}

	JKRHeap* backup = JKRGetCurrentHeap();
	mDispMember->mDebugExpHeap->becomeCurrentHeap();
	sys->heapStatusStart("vsSelectTexture", nullptr);
	mVsSelectTextureArc = nullptr;
	char path[50];
	og::newScreen::makeLanguageResName(path, "res_vsSelectTexture.szs");
	mVsSelectTextureArc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	JUT_ASSERTLINE(893, mVsSelectTextureArc, "arcName = %s\n", path);
	sys->heapStatusEnd("vsSelectTexture");

	const char* texNames[VS_Stage_Count]
	    = { "timg/otegaru.bti",  "timg/ujyaujya.bti", "timg/hirobiro.bti", "timg/karakuchi.bti", "timg/semai.bti",
		    "timg/hiyahiya.bti", "timg/nobinobi.bti", "timg/kakukaku.bti", "timg/meiro.bti",     "timg/tile.bti" };
	for (int i = 0; i < mStageCount; i++) {
		mLevelTextures[i] = JKRGetArchiveImageResource(mVsSelectTextureArc, texNames[i]);

		// Use louie face as a default if level icon not found
		if (!mLevelTextures[i]) {
			mLevelTextures[i] = JKRGetArchiveImageResource(mArchive, "timg/loozy_icon.bti");
		}
	}

	const char* olimarTexNames[5]
	    = { "timg/orima001.bti", "timg/orima002.bti", "timg/orima003.bti", "timg/orima004.bti", "timg/orima005.bti" };
	const char* louieTexNames[5] = { "timg/lui001.bti", "timg/lui002.bti", "timg/lui003.bti", "timg/lui004.bti", "timg/lui005.bti" };
	for (int i = 0; i < 5; i++) {
		mOrimaTexture[i] = JKRGetArchiveImageResource(mVsSelectTextureArc, olimarTexNames[i]);
		P2ASSERTLINE(926, mOrimaTexture[i]);
		mLouieTexture[i] = JKRGetArchiveImageResource(mVsSelectTextureArc, louieTexNames[i]);
		P2ASSERTLINE(930, mLouieTexture[i]);
	}

	mSlotTexturesScreen = new TScreenBase(mVsSelectTextureArc, 0);
	mSlotTexturesScreen->create("vs_slot_texture.blo", 0x20000);

	u64 iconTags[12] = { 'P0icon00', 'P0icon01', 'P0icon02', 'P0icon03', 'P0icon04', 'P0icon05',
		                 'P1icon00', 'P1icon01', 'P1icon02', 'P1icon03', 'P1icon04', 'P1icon05' };

	for (int i = 0; i < 12; i++) {
		TVsSelectSlotIndex info      = *TVsSelectSlotIndex::getIndexInfo(i);
		mPowerIconPanes[info.mIndex] = mSlotTexturesScreen->mScreenObj->search(iconTags[info.mTagID]);
		P2ASSERTLINE(949, mPowerIconPanes[info.mIndex]);
	}

	mArrowBlink = new og::Screen::ArrowAlphaBlink;
	mIndPane    = new TVsSelectIndPane("otegaru.bti", 336.0, 240.0);
	mIndPane->createIndTexture("AK_kagerouRR.bti");
	mIndPane->mTexture2->mWrapS = GX_REPEAT;
	mIndPane->mTexture2->mWrapT = GX_REPEAT;
	mIndPane->createCaptureTexture(GX_TF_RGB5A3);
	ResTIMG* timg = mIndPane->mTexture3->mTexInfo;
	P2ASSERTLINE(962, timg);
	timg->mTransparency = 2;
	timg                = mIndPane->mTexture1->mTexInfo;
	P2ASSERTLINE(966, timg);
	timg->mTransparency = 2;
	timg                = mIndPane->mTexture2->mTexInfo;
	P2ASSERTLINE(970, timg);
	timg->mTransparency = 2;

	mIndPic = new J2DPictureEx(mIndPane->mTexture1->mTexInfo, 0x20000);

	mMainScreen = new TVsSelectScreen(arc, 2);
	mMainScreen->create("vs_select_main.blo", 0x1020000);
	mMainScreen->addAnim("vs_select_main.btk");
	mMainScreen->addAnim("vs_select_main_02.btk");

	P2DScreen::Mgr_tuning* screen = mMainScreen->mScreenObj;
	mOlimarFacePanes[0]           = static_cast<J2DPicture*>(screen->search('Porbody0')); // big icon 1
	mOlimarFacePanes[1]           = static_cast<J2DPicture*>(screen->search('Porbody1')); // big icon 2
	mOlimarFacePanes[2]           = static_cast<J2DPicture*>(screen->search('Porbody2')); // big icon 3
	mOlimarFacePanes[3]           = static_cast<J2DPicture*>(screen->search('Ph_or'));    // for handicap
	mOlimarFacePanes[4]           = static_cast<J2DPicture*>(screen->search('Pbor0'));    // for curr score
	mOlimarFacePanes[5]           = static_cast<J2DPicture*>(screen->search('Pbor1'));    // for curr score

	mLouieFacePanes[0] = static_cast<J2DPicture*>(screen->search('Plobody0')); // big icon 1
	mLouieFacePanes[1] = static_cast<J2DPicture*>(screen->search('Plobody1')); // big icon 2
	mLouieFacePanes[2] = static_cast<J2DPicture*>(screen->search('Plobody2')); // big icon 3
	mLouieFacePanes[3] = static_cast<J2DPicture*>(screen->search('Ph_lo'));    // for handicap
	mLouieFacePanes[4] = static_cast<J2DPicture*>(screen->search('Pblo0'));    // for curr score
	mLouieFacePanes[5] = static_cast<J2DPicture*>(screen->search('Pblo1'));    // for curr score

	for (int i = 0; i < 6; i++) {
		P2ASSERTLINE(1004, mOlimarFacePanes[i]);
		mOlimarFacePanes[i]->setBasePosition(J2DPOS_Center);
		P2ASSERTLINE(1006, mLouieFacePanes[i]);
		mLouieFacePanes[i]->setBasePosition(J2DPOS_Center);
	}

	mStickImage  = og::Screen::setCallBack_3DStickSmall(mArchive, screen, 'ota3dl');
	mPane3DStick = screen->search('ota3dl');
	P2ASSERTLINE(1018, mPane3DStick);
	P2ASSERTLINE(1019, mStickImage);
	mStickImage->mAnimGroup->setSpeed(2.0f);
	mStickImage->mAnimGroup->start();
	mStickAnim = new og::Screen::StickAnimMgr(mStickImage);
	P2ASSERTLINE(1024, mStickAnim);

	mCharacterMainIcons[0] = screen->search('Norima');
	P2ASSERTLINE(1027, mCharacterMainIcons[0]);
	mPlayerMainIconPos[0].x = mCharacterMainIcons[0]->mOffset.x;
	mPlayerMainIconPos[0].y = mCharacterMainIcons[0]->mOffset.y;

	mCharacterMainIcons[1] = screen->search('Nluie');
	P2ASSERTLINE(1032, mCharacterMainIcons[1]);
	mPlayerMainIconPos[1].x = mCharacterMainIcons[1]->mOffset.x;
	mPlayerMainIconPos[1].y = mCharacterMainIcons[1]->mOffset.y;

	J2DPane* light = screen->search('Ploligh2');
	P2ASSERTLINE(1039, light);

	u64 btnmsg[3] = { 'Tbmenu3', 'Tbmenu4', 'Tbmenu5' };
	for (int i = 0; i < 3; i++) {
		mButtonMsgTags[i] = screen->search(btnmsg[i]);
		JUT_ASSERTLINE(1046, mButtonMsgTags[i], "btnmsg[%d] is unknown", i);
		mButtonMsgTags[i]->setInfluencedAlpha(false, false);
	}

	mOnyonObj[0] = new TVsSelectOnyon(light, mRedPodScreen->mScreenObj->search('Nyonyon'));
	mOnyonObj[0]->reset();

	light = mMainScreen->mScreenObj->search('Ploligh');
	P2ASSERTLINE(1056, light);

	mOnyonObj[1] = new TVsSelectOnyon(light, mBluePodScreen->mScreenObj->search('Nyonyon'));
	mOnyonObj[1]->reset();

	mVsPiki[0]       = new TVsPiki(screen->search('Prp_l_00'), screen->search('Prp_r_00'), screen->search('Prp_f_00'));
	u64 pikiTags[10] = { 'Nrp_00', 'Nrp_01', 'Nrp_02', 'Nrp_03', 'Nrp_04', 'Nrp_05', 'Nrp_06', 'Nrp_07', 'Nrp_08', 'Nrp_09' };
	for (int i = 0; i < 10; i++) {
		J2DPane* pane = screen->search(pikiTags[i]);
		if (pane) {
			pane->hide();
		}
	}

	mVsPiki[1]        = new TVsPiki(screen->search('Pbp_l_00'), screen->search('Pbp_r_00'), screen->search('Pbp_f_00'));
	u64 pikiTags2[10] = { 'Nbp_00', 'Nbp_01', 'Nbp_02', 'Nbp_03', 'Nbp_04', 'Nbp_05', 'Nbp_06', 'Nbp_07', 'Nbp_08', 'Nbp_09' };
	for (int i = 0; i < 10; i++) {
		J2DPane* pane = screen->search(pikiTags2[i]);
		if (pane) {
			pane->hide();
		}
	}

	for (int i = 0; i < 2; i++) {
		mVsPiki[i]->init(mHandicapSel[i]);
		mDispPikiNum[i] = mHandicapSel[i] * 5;
	}

	og::Screen::setCallBack_CounterRV(screen, 'Prp_f_r', 'Prp_f_l', 'Prp_f_l', &mDispPikiNum[0], 2, 0, 1, mArchive);
	og::Screen::setCallBack_CounterRV(screen, 'Prp_f_r1', 'Prp_f_l1', 'Prp_f_l1', &mDispPikiNum[0], 2, 0, 1, mArchive);

	mWinCounter[0] = new TVsSelectCBWinNum(const_cast<char**>(og::Screen::SujiTex32), 4, mArchive);
	mWinCounter[0]->init(screen, 'Pori_r', 'Pori_l', 'Pori_c', &mPlayerWinCounts[0], true);
	mWinCounter[0]->setPuyoAnim(true);
	screen->addCallBack('Pori_r', mWinCounter[0]);

	mWinCounter[1] = new TVsSelectCBWinNum(const_cast<char**>(og::Screen::SujiTex32), 4, mArchive);
	mWinCounter[1]->init(screen, 'Plui_r', 'Plui_l', 'Plui_c', &mPlayerWinCounts[1], true);
	mWinCounter[1]->setPuyoAnim(true);
	screen->addCallBack('Plui_r', mWinCounter[1]);

	mEfxCountKira = new efx2d::T2DCountKira;

	mListScreen = new TVsSelectListScreen(arc, 0);
	mListScreen->create("vs_select_list.blo", 0x20000);
	mPaneStageList = mMainScreen->mScreenObj->search('Nlist');
	P2ASSERTLINE(1110, mPaneStageList);

	mBackgroundScreen = new TScreenBase(arc, 1);
	mBackgroundScreen->create("vs_select_bg.blo", 0x1020000);
	mBackgroundScreen->addAnim("vs_select_bg.btk");

	mFireScreen = new TScreenBase(arc, 2);
	mFireScreen->create("vs_select_fire.blo", 0x1020000);
	mFireScreen->addAnim("vs_select_fire.btk");
	mFireScreen->addAnim("vs_select_fire_02.btk");

	mRulesWindow = new TVsSelectExplanationWindow(arc, 12);
	mRulesWindow->create("vs_main_rule_window.blo", 0x1020000);
	mRulesWindow->addAnim("vs_main_rule_window.btk");
	mRulesWindow->addAnim("vs_main_rule_window_02.btk");
	mRulesWindow->addAnim("vs_main_rule_window_03.btk");
	mRulesWindow->addAnim("vs_main_rule_window_04.btk");
	mRulesWindow->addAnim("vs_main_rule_window_05.btk");
	mRulesWindow->addAnim("vs_main_rule_window_06.btk");
	mRulesWindow->addAnim("vs_main_rule_window_07.btk");
	mRulesWindow->addAnim("vs_main_rule_window_08.btk");
	mRulesWindow->addAnim("vs_main_rule_window_09.btk");
	mRulesWindow->addAnim("vs_main_rule_window_10.btk");
	mRulesWindow->addAnim("vs_main_rule_window_11.btk");
	mRulesWindow->addAnim("vs_main_rule_window_12.btk");

	mPaneRulesInfo = mRulesWindow->mScreenObj->search('Nmg0');
	P2ASSERTLINE(1142, mPaneRulesInfo);
	JGeometry::TVec2f test = mPaneRulesInfo->mOffset;
	mRulesPanePos          = test;

	mPaneRulesLR[0] = mRulesWindow->mScreenObj->search('Nyaji00');
	P2ASSERTLINE(1146, mPaneRulesLR[0]);
	mPaneRulesLR[1] = mRulesWindow->mScreenObj->search('Nyaji01');
	P2ASSERTLINE(1149, mPaneRulesLR[1]);

	mPaneRulesDesc1[0] = mRulesWindow->mScreenObj->search('T0mg00');
	P2ASSERTLINE(1152, mPaneRulesDesc1[0]);
	mPaneRulesDesc2[0] = mRulesWindow->mScreenObj->search('T0mgs00');
	P2ASSERTLINE(1154, mPaneRulesDesc2[0]);

	mPaneRulesDesc1[1] = mRulesWindow->mScreenObj->search('T0mg01');
	P2ASSERTLINE(1157, mPaneRulesDesc1[1]);
	mPaneRulesDesc2[1] = mRulesWindow->mScreenObj->search('T0mgs01');
	P2ASSERTLINE(1159, mPaneRulesDesc2[1]);

	mPaneRulesDesc1[2] = mRulesWindow->mScreenObj->search('T0mg02');
	P2ASSERTLINE(1162, mPaneRulesDesc1[2]);
	mPaneRulesDesc2[2] = mRulesWindow->mScreenObj->search('T0mgs02');
	P2ASSERTLINE(1164, mPaneRulesDesc2[2]);

	mPaneRulesDesc1[3] = mRulesWindow->mScreenObj->search('T0mg03');
	P2ASSERTLINE(1167, mPaneRulesDesc1[3]);
	mPaneRulesDesc2[3] = mRulesWindow->mScreenObj->search('T0mgs03');
	P2ASSERTLINE(1169, mPaneRulesDesc2[3]);

	mPaneRulesDesc1[4] = mRulesWindow->mScreenObj->search('T0mg04');
	P2ASSERTLINE(1172, mPaneRulesDesc1[4]);
	mPaneRulesDesc2[4] = mRulesWindow->mScreenObj->search('T0mgs04');
	P2ASSERTLINE(1174, mPaneRulesDesc2[4]);

	mPaneRulesDesc1[5] = mRulesWindow->mScreenObj->search('T0mg05');
	P2ASSERTLINE(1177, mPaneRulesDesc1[5]);
	mPaneRulesDesc2[5] = mRulesWindow->mScreenObj->search('T0mgs05');
	P2ASSERTLINE(1179, mPaneRulesDesc2[5]);

	mPaneRulesIcons[0] = mRulesWindow->mScreenObj->search('P0icon00');
	P2ASSERTLINE(1182, mPaneRulesIcons[0]);
	mPaneRulesIcons[1] = mRulesWindow->mScreenObj->search('P0icon01');
	P2ASSERTLINE(1185, mPaneRulesIcons[1]);
	mPaneRulesIcons[2] = mRulesWindow->mScreenObj->search('P0icon02');
	P2ASSERTLINE(1188, mPaneRulesIcons[2]);
	mPaneRulesIcons[3] = mRulesWindow->mScreenObj->search('P0icon03');
	P2ASSERTLINE(1191, mPaneRulesIcons[3]);
	mPaneRulesIcons[4] = mRulesWindow->mScreenObj->search('P0icon04');
	P2ASSERTLINE(1194, mPaneRulesIcons[4]);
	mPaneRulesIcons[5] = mRulesWindow->mScreenObj->search('P0icon05');
	P2ASSERTLINE(1197, mPaneRulesIcons[5]);

	for (int i = 0; i < 6; i++) {
		mPaneRulesIcons[i]->hide();
	}

	J2DPane* desc = mRulesWindow->mScreenObj->search('Trule_11');
	P2ASSERTLINE(1204, desc);
	desc->setMsgID('2013_00'); // "Get a cherry, spin the roulette!"

	desc = mRulesWindow->mScreenObj->search('Trule_m6');
	P2ASSERTLINE(1208, desc);
	desc->setMsgID('2013_00'); // "Get a cherry, spin the roulette!"

	changeSlotPage();

	screen            = mListScreen->mScreenObj;
	mCurrMinActiveRow = 0;
	mCurrActiveRowSel = 2;
	mCurrMaxActiveRow = mNumActiveRows - 1;

	u64 stageTags[5] = { 'Tmenu00', 'Tmenu01', 'Tmenu02', 'Tmenu03', 'Tmenu04' };
	J2DPane* icon    = screen->search(stageTags[mCurrMinActiveRow]);
	P2ASSERTLINE(1227, icon);
	mMinSelYOffset = icon->mOffset.y;
	icon           = screen->search(stageTags[mCurrMaxActiveRow]);
	P2ASSERTLINE(1231, icon);
	mMaxSelYOffset = icon->mOffset.y;
	mIndexPaneList = new TIndexPane*[mNumActiveRows];
	for (int i = 0; i < mNumActiveRows; i++) {
		mIndexPaneList[i] = new TIndexPane(this, screen, stageTags[i]);
		mIndexPaneList[i]->mPane->setMsgID('0000_01');
		mIndexPaneList[i]->setIndex(i);
		mIndexPaneList[i]->mPane->show();
	}

	f32 calc = mIndexPaneList[0]->mPane->mOffset.y - mIndexPaneList[1]->mPane->mOffset.y;

	mIndexGroup               = new TIndexGroup;
	mIndexGroup->mHeight      = calc;
	TIndexGroup* grp          = mIndexGroup;
	grp->mMaxRollSpeed        = mScrollParm._00;
	grp->mSpeedSlowdownFactor = mScrollParm._04;
	grp->mRollSpeedMod        = mScrollParm._08;
	grp->mSpeedSpeedupFactor  = mScrollParm._0C;
	grp->mInitialRollSpeed    = mScrollParm._10;

	paneInit();
	changePaneInfo();

	int num = mDispMember->mRedWinCount;
	if (mDispMember->mVsWinner == 0) {
		num--;
	}
	if (num < 0) {
		num = 0;
	}
	mPlayerWinCounts[0] = num;

	num = mDispMember->mBlueWinCount;
	if (mDispMember->mVsWinner == 1) {
		num--;
	}
	if (num < 0) {
		num = 0;
	}
	mPlayerWinCounts[1] = num;

	int max = (mStageCount - something) + 2;
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < mNumActiveRows; j++) {
			TIndexPane* indpane = mIndexPaneList[j];
			indpane->mPane->setOffsetY(indpane->mYOffset + calc);
			mIndexPaneList[j]->mYOffset = mIndexPaneList[j]->mPane->mOffset.y;
		}
		updateIndex(0);
		mIndexGroup->reset();
		changePaneInfo();
	}
	changeFaceTexture();
	backup->becomeCurrentHeap();
	/*
	stwu     r1, -0x280(r1)
	mflr     r0
	stw      r0, 0x284(r1)
	stfd     f31, 0x270(r1)
	psq_st   f31, 632(r1), 0, qr0
	stfd     f30, 0x260(r1)
	psq_st   f30, 616(r1), 0, qr0
	stmw     r21, 0x234(r1)
	lis      r6, lbl_804E5328@ha
	lis      r5, lbl_80494B18@ha
	mr       r31, r3
	mr       r28, r4
	addi     r29, r6, lbl_804E5328@l
	addi     r30, r5, lbl_80494B18@l
	li       r3, 0xb0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039ACC0
	li       r4, 1
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_8039ACC0:
	stw      r0, 0xb8(r31)
	lwz      r0, 0xb8(r31)
	cmplwi   r0, 0
	bne      lbl_8039ACE4
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x30f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039ACE4:
	stw      r28, 0x78(r31)
	mr       r3, r31
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x4D524D52@ha
	lis      r6, 0x4C454354@ha
	lis      r5, 0x56535345@ha
	mr       r21, r3
	addi     r4, r4, 0x4D524D52@l
	addi     r6, r6, 0x4C454354@l
	addi     r5, r5, 0x56535345@l
	li       r27, 0
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8039AD2C
	stw      r21, 0x1f8(r31)
	lwz      r3, 0x1f8(r31)
	lwz      r27, 0x18(r3)
	b        lbl_8039AD34

lbl_8039AD2C:
	li       r0, 1
	stb      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)

lbl_8039AD34:
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8039AFA4
	lwz      r4, mDebugHeapParent__Q28Morimura9TVsSelect@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8039AF90
	lis      r3, 0x20
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	cmplwi   r3, 0
	stw      r3, mDebugHeap__Q28Morimura9TVsSelect@sda21(r13)
	bne      lbl_8039AD78
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x320
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039AD78:
	lwz      r4, mDebugHeap__Q28Morimura9TVsSelect@sda21(r13)
	li       r3, 0x38
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_8039ADE8
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q28Morimura18DispMemberVsSelect@ha
	addi     r0, r5, __vt__Q32og6Screen14DispMemberBase@l
	li       r6, 0
	stw      r0, 0(r3)
	addi     r5, r4, __vt__Q28Morimura18DispMemberVsSelect@l
	li       r4, -1
	li       r0, 3
	stw      r6, 4(r3)
	stw      r5, 0(r3)
	stw      r6, 8(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0x10(r3)
	stw      r4, 0x14(r3)
	stw      r6, 0x18(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0x20(r3)
	stw      r6, 0x24(r3)
	stw      r6, 0x28(r3)
	stw      r4, 0x2c(r3)
	stw      r6, 0x30(r3)
	stw      r6, 0x34(r3)

lbl_8039ADE8:
	stw      r3, 0x1f8(r31)
	li       r3, 0x28
	lwz      r0, mDebugHeap__Q28Morimura9TVsSelect@sda21(r13)
	lwz      r4, 0x1f8(r31)
	stw      r0, 0xc(r4)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8039AE60
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
	addi     r0, r4, __vt__Q32og6Screen14DispMemberBase@l
	lis      r6, 0x305F3030@ha
	stw      r0, 0(r3)
	li       r8, 0
	lis      r5, 0x00343731@ha
	lis      r4, 0x315F3030@ha
	stw      r8, 4(r3)
	addi     r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
	addi     r6, r6, 0x305F3030@l
	addi     r5, r5, 0x00343731@l
	stw      r0, 0(r3)
	addi     r4, r4, 0x315F3030@l
	li       r0, 0xb4
	stw      r8, 8(r3)
	stw      r6, 0x14(r3)
	stw      r5, 0x10(r3)
	stw      r4, 0x1c(r3)
	stw      r5, 0x18(r3)
	stb      r0, 0x20(r3)
	stb      r8, 0x21(r3)

lbl_8039AE60:
	lwz      r4, 0x1f8(r31)
	stw      r3, 0x10(r4)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x204(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	stw      r0, 0x200(r1)
	lfs      f1, lbl_8051F1C4@sda21(r2)
	lfd      f2, 0x200(r1)
	lfs      f0, lbl_8051F230@sda21(r2)
	fsubs    f2, f2, f3
	lwz      r3, 0x1f8(r31)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x208(r1)
	lwz      r0, 0x20c(r1)
	stw      r0, 0x24(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x214(r1)
	li       r5, 2
	lfd      f3, lbl_8051F198@sda21(r2)
	li       r4, 0
	stw      r0, 0x210(r1)
	li       r0, 0xa
	lfs      f1, lbl_8051F1C4@sda21(r2)
	lfd      f2, 0x210(r1)
	lfs      f0, lbl_8051F230@sda21(r2)
	fsubs    f2, f2, f3
	lwz      r3, 0x1f8(r31)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x218(r1)
	lwz      r6, 0x21c(r1)
	stw      r6, 0x28(r3)
	lwz      r3, 0x1f8(r31)
	stw      r5, 0x24(r3)
	lwz      r3, 0x1f8(r31)
	stw      r4, 0x28(r3)
	lwz      r3, 0x1f8(r31)
	stw      r0, 0x30(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x224(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	stw      r0, 0x220(r1)
	lfs      f1, lbl_8051F1C4@sda21(r2)
	lfd      f2, 0x220(r1)
	lfs      f0, lbl_8051F188@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8039AF58
	lwz      r3, 0x1f8(r31)
	li       r0, 0
	stw      r0, 0x2c(r3)
	b        lbl_8039AF64

lbl_8039AF58:
	lwz      r3, 0x1f8(r31)
	li       r0, 1
	stw      r0, 0x2c(r3)

lbl_8039AF64:
	lwz      r4, 0x1f8(r31)
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2c(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1f8(r31)
	bl       setDispMember__Q26Screen9SceneBaseFPQ32og6Screen14DispMemberBase
	b        lbl_8039AFA4

lbl_8039AF90:
	addi     r3, r30, 0xc
	addi     r5, r30, 0x338
	li       r4, 0x334
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039AFA4:
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8039B020
	li       r3, 0x28
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8039B018
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@ha
	addi     r0, r4, __vt__Q32og6Screen14DispMemberBase@l
	lis      r6, 0x305F3030@ha
	stw      r0, 0(r3)
	li       r8, 0
	lis      r5, 0x00343731@ha
	lis      r4, 0x315F3030@ha
	stw      r8, 4(r3)
	addi     r0, r7, __vt__Q32og6Screen26DispMemberWorldMapInfoWin0@l
	addi     r6, r6, 0x305F3030@l
	addi     r5, r5, 0x00343731@l
	stw      r0, 0(r3)
	addi     r4, r4, 0x315F3030@l
	li       r0, 0xb4
	stw      r8, 8(r3)
	stw      r6, 0x14(r3)
	stw      r5, 0x10(r3)
	stw      r4, 0x1c(r3)
	stw      r5, 0x18(r3)
	stb      r0, 0x20(r3)
	stb      r8, 0x21(r3)

lbl_8039B018:
	lwz      r4, 0x1f8(r31)
	stw      r3, 0x10(r4)

lbl_8039B020:
	mr       r3, r31
	bl       getGamePad__Q26Screen7ObjBaseCFv
	stw      r3, 0x80(r31)
	li       r3, 0x18
	lwz      r4, 0x1f8(r31)
	lwz      r0, 0x1c(r4)
	stw      r0, 0x274(r31)
	lwz      r4, 0x1f8(r31)
	lwz      r0, 0x20(r4)
	stw      r0, 0x278(r31)
	lfd      f0, lbl_8051F228@sda21(r2)
	stfd     f0, 0x20(r1)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039B07C
	lis      r6, 0x305F3030@ha
	lis      r5, 0x00343737@ha
	addi     r4, r1, 0x20
	li       r7, 1
	addi     r6, r6, 0x305F3030@l
	addi     r5, r5, 0x00343737@l
	bl       __ct__Q28Morimura13TOffsetMsgSetFPUxUxi
	mr       r0, r3

lbl_8039B07C:
	stw      r0, 0x1fc(r31)
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039B0A0
	mr       r4, r28
	li       r5, 2
	bl       __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
	mr       r0, r3

lbl_8039B0A0:
	stw      r0, 0xc4(r31)
	addi     r4, r30, 0x360
	lis      r5, 2
	lwz      r3, 0xc4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc4(r31)
	addi     r4, r30, 0x36c
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xc4(r31)
	addi     r4, r30, 0x378
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039B0F8
	mr       r4, r28
	li       r5, 2
	bl       __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
	mr       r0, r3

lbl_8039B0F8:
	stw      r0, 0xc8(r31)
	addi     r4, r30, 0x384
	lis      r5, 2
	lwz      r3, 0xc8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc8(r31)
	addi     r4, r30, 0x394
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xc8(r31)
	addi     r4, r30, 0x3a4
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x1f8(r31)
	lwz      r0, 0x30(r3)
	stw      r0, 0x248(r31)
	lwz      r0, 0x248(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x328(r31)
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8039B1A8
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x224(r1)
	lwz      r0, 0x248(r31)
	stw      r4, 0x220(r1)
	lfd      f2, lbl_8051F198@sda21(r2)
	xoris    r0, r0, 0x8000
	lfd      f1, 0x220(r1)
	lfs      f0, lbl_8051F1C4@sda21(r2)
	fsubs    f1, f1, f2
	stw      r0, 0x21c(r1)
	stw      r4, 0x218(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x218(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x210(r1)
	lwz      r27, 0x214(r1)

lbl_8039B1A8:
	lwz      r3, 0x1f8(r31)
	lwz      r26, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r3, 0xc(r3)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3b4
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r0, 0
	addi     r4, r30, 0x3c4
	stw      r0, 0xb4(r31)
	addi     r3, r1, 0xc8
	bl       makeLanguageResName__Q22og9newScreenFPcPCc
	addi     r3, r1, 0xc8
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	stw      r3, 0xb4(r31)
	lwz      r0, 0xb4(r31)
	cmplwi   r0, 0
	bne      lbl_8039B218
	addi     r3, r30, 0xc
	addi     r5, r30, 0x3dc
	addi     r6, r1, 0xc8
	li       r4, 0x37d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B218:
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x3b4
	bl       heapStatusEnd__6SystemFPc
	lwz      r11, 0xf0(r30)
	addi     r23, r1, 0xa0
	lwz      r10, 0xf4(r30)
	li       r22, 0
	lwz      r9, 0xf8(r30)
	li       r24, 0
	lwz      r8, 0xfc(r30)
	lwz      r7, 0x100(r30)
	lwz      r6, 0x104(r30)
	lwz      r5, 0x108(r30)
	lwz      r4, 0x10c(r30)
	lwz      r3, 0x110(r30)
	lwz      r0, 0x114(r30)
	stw      r11, 0xa0(r1)
	stw      r10, 0xa4(r1)
	stw      r9, 0xa8(r1)
	stw      r8, 0xac(r1)
	stw      r7, 0xb0(r1)
	stw      r6, 0xb4(r1)
	stw      r5, 0xb8(r1)
	stw      r4, 0xbc(r1)
	stw      r3, 0xc0(r1)
	stw      r0, 0xc4(r1)
	b        lbl_8039B2E0

lbl_8039B284:
	lwz      r3, 0xb4(r31)
	lwz      r4, 0(r23)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x328(r31)
	stwx     r3, r4, r24
	lwz      r3, 0x328(r31)
	lwzx     r0, r3, r24
	cmplwi   r0, 0
	bne      lbl_8039B2D4
	lwz      r3, 0x78(r31)
	addi     r4, r30, 0x3ec
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x328(r31)
	stwx     r3, r4, r24

lbl_8039B2D4:
	addi     r23, r23, 4
	addi     r24, r24, 4
	addi     r22, r22, 1

lbl_8039B2E0:
	lwz      r0, 0x248(r31)
	cmpw     r22, r0
	blt      lbl_8039B284
	lwz      r11, 0x17c(r30)
	addi     r23, r1, 0x64
	lwz      r10, 0x180(r30)
	addi     r24, r29, 0x10
	lwz      r9, 0x184(r30)
	addi     r25, r1, 0x50
	lwz      r8, 0x188(r30)
	addi     r22, r29, 0x24
	lwz      r7, 0x18c(r30)
	li       r21, 0
	lwz      r6, 0x1e0(r30)
	lwz      r5, 0x1e4(r30)
	lwz      r4, 0x1e8(r30)
	lwz      r3, 0x1ec(r30)
	lwz      r0, 0x1f0(r30)
	stw      r11, 0x64(r1)
	stw      r10, 0x68(r1)
	stw      r9, 0x6c(r1)
	stw      r8, 0x70(r1)
	stw      r7, 0x74(r1)
	stw      r6, 0x50(r1)
	stw      r5, 0x54(r1)
	stw      r4, 0x58(r1)
	stw      r3, 0x5c(r1)
	stw      r0, 0x60(r1)

lbl_8039B350:
	lwz      r3, 0xb4(r31)
	lwz      r4, 0(r23)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0(r24)
	lwz      r0, 0(r24)
	cmplwi   r0, 0
	bne      lbl_8039B38C
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x39e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B38C:
	lwz      r3, 0xb4(r31)
	lwz      r4, 0(r25)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0(r22)
	lwz      r0, 0(r22)
	cmplwi   r0, 0
	bne      lbl_8039B3C8
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x3a2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B3C8:
	addi     r21, r21, 1
	addi     r24, r24, 4
	cmpwi    r21, 5
	addi     r25, r25, 4
	addi     r22, r22, 4
	addi     r23, r23, 4
	blt      lbl_8039B350
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039B404
	lwz      r4, 0xb4(r31)
	li       r5, 0
	bl       __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
	mr       r0, r3

lbl_8039B404:
	stw      r0, 0xcc(r31)
	addi     r4, r30, 0x400
	lis      r5, 2
	lwz      r3, 0xcc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0xc
	addi     r5, r1, 0x19c
	addi     r4, r30, 0x1f4
	mtctr    r0

lbl_8039B434:
	lwz      r3, 4(r4)
	lwzu     r0, 8(r4)
	stw      r3, 4(r5)
	stwu     r0, 8(r5)
	bdnz     lbl_8039B434
	li       r21, 0
	addi     r22, r1, 0x1a0

lbl_8039B450:
	li       r0, 0xc
	addi     r4, r29, 0x38
	li       r3, 0
	mtctr    r0

lbl_8039B460:
	lwz      r0, 0(r4)
	cmpw     r21, r0
	bne      lbl_8039B47C
	slwi     r0, r3, 4
	addi     r4, r29, 0x38
	add      r4, r4, r0
	b        lbl_8039B48C

lbl_8039B47C:
	addi     r4, r4, 0x10
	addi     r3, r3, 1
	bdnz     lbl_8039B460
	addi     r4, r29, 0x38

lbl_8039B48C:
	lfd      f0, 0(r4)
	lwz      r3, 0xcc(r31)
	stfd     f0, 0x28(r1)
	lwz      r3, 8(r3)
	lwz      r0, 0x2c(r1)
	lwz      r12, 0(r3)
	slwi     r0, r0, 3
	lfd      f0, 8(r4)
	add      r6, r22, r0
	lwz      r12, 0x3c(r12)
	lwz      r5, 0(r6)
	stfd     f0, 0x30(r1)
	lwz      r6, 4(r6)
	mtctr    r12
	bctrl
	lwz      r0, 0x28(r1)
	slwi     r4, r0, 2
	addi     r0, r4, 0x184
	stwx     r3, r31, r0
	lwzx     r0, r31, r0
	cmplwi   r0, 0
	bne      lbl_8039B4F8
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x3b5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B4F8:
	addi     r21, r21, 1
	cmpwi    r21, 0xc
	blt      lbl_8039B450
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8039B534
	lfs      f1, lbl_8051F170@sda21(r2)
	lfs      f0, lbl_8051F1D8@sda21(r2)
	stfs     f1, 0(r3)
	lfs      f1, lbl_8051F234@sda21(r2)
	stfs     f0, 4(r3)
	lfs      f0, lbl_8051F238@sda21(r2)
	stfs     f1, 8(r3)
	stfs     f0, 0xc(r3)

lbl_8039B534:
	stw      r3, 0x20c(r31)
	li       r3, 0x48
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_8039B564
	lfs      f1, lbl_8051F23C@sda21(r2)
	addi     r4, r30, 0x414
	lfs      f2, lbl_8051F240@sda21(r2)
	bl       __ct__Q28Morimura8TIndPaneFPCcff
	lis      r3, __vt__Q28Morimura16TVsSelectIndPane@ha
	addi     r0, r3, __vt__Q28Morimura16TVsSelectIndPane@l
	stw      r0, 0(r21)

lbl_8039B564:
	stw      r21, 0xd8(r31)
	addi     r4, r30, 0x420
	lwz      r3, 0xd8(r31)
	bl       createIndTexture__Q28Morimura8TIndPaneFPCc
	lwz      r3, 0xd8(r31)
	li       r0, 1
	li       r4, 5
	lwz      r3, 0x1c(r3)
	stb      r0, 0x30(r3)
	lwz      r3, 0xd8(r31)
	lwz      r3, 0x1c(r3)
	stb      r0, 0x31(r3)
	lwz      r3, 0xd8(r31)
	bl       createCaptureTexture__Q28Morimura8TIndPaneF9_GXTexFmt
	lwz      r3, 0xd8(r31)
	lwz      r3, 0x20(r3)
	lwz      r21, 0x20(r3)
	cmplwi   r21, 0
	bne      lbl_8039B5C4
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x3c2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B5C4:
	li       r0, 2
	stb      r0, 1(r21)
	lwz      r3, 0xd8(r31)
	lwz      r3, 0x18(r3)
	lwz      r21, 0x20(r3)
	cmplwi   r21, 0
	bne      lbl_8039B5F4
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x3c6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B5F4:
	li       r0, 2
	stb      r0, 1(r21)
	lwz      r3, 0xd8(r31)
	lwz      r3, 0x1c(r3)
	lwz      r21, 0x20(r3)
	cmplwi   r21, 0
	bne      lbl_8039B624
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x3ca
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B624:
	li       r0, 2
	li       r3, 0x1a8
	stb      r0, 1(r21)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039B654
	lwz      r4, 0xd8(r31)
	lis      r5, 2
	lwz      r4, 0x18(r4)
	lwz      r4, 0x20(r4)
	bl       __ct__12J2DPictureExFPC7ResTIMGUl
	mr       r0, r3

lbl_8039B654:
	stw      r0, 0x1e4(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_8039B688
	mr       r4, r28
	li       r5, 2
	bl       __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
	lis      r3, __vt__Q28Morimura15TVsSelectScreen@ha
	li       r0, 0
	addi     r3, r3, __vt__Q28Morimura15TVsSelectScreen@l
	stw      r3, 0(r21)
	stw      r0, 0x18(r21)

lbl_8039B688:
	stw      r21, 0x7c(r31)
	addi     r4, r30, 0x434
	lis      r5, 0x102
	lwz      r3, 0x7c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x7c(r31)
	addi     r4, r30, 0x448
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x7c(r31)
	addi     r4, r30, 0x45c
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r5, 0x7c(r31)
	lis      r4, 0x6F647930@ha
	lis      r3, 0x506F7262@ha
	lwz      r29, 8(r5)
	addi     r5, r3, 0x506F7262@l
	addi     r6, r4, 0x6F647930@l
	lwz      r12, 0(r29)
	mr       r3, r29
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x154(r31)
	mr       r3, r29
	lis      r5, 0x6F647931@ha
	lis      r4, 0x506F7262@ha
	lwz      r12, 0(r29)
	addi     r6, r5, 0x6F647931@l
	addi     r5, r4, 0x506F7262@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x158(r31)
	mr       r3, r29
	lis      r5, 0x6F647932@ha
	lis      r4, 0x506F7262@ha
	lwz      r12, 0(r29)
	addi     r6, r5, 0x6F647932@l
	addi     r5, r4, 0x506F7262@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x15c(r31)
	mr       r3, r29
	lis      r4, 0x685F6F72@ha
	li       r5, 0x50
	lwz      r12, 0(r29)
	addi     r6, r4, 0x685F6F72@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x160(r31)
	mr       r3, r29
	lis      r4, 0x626F7230@ha
	li       r5, 0x50
	lwz      r12, 0(r29)
	addi     r6, r4, 0x626F7230@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x164(r31)
	mr       r3, r29
	lis      r4, 0x626F7231@ha
	li       r5, 0x50
	lwz      r12, 0(r29)
	addi     r6, r4, 0x626F7231@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x168(r31)
	mr       r3, r29
	lis      r5, 0x6F647930@ha
	lis      r4, 0x506C6F62@ha
	lwz      r12, 0(r29)
	addi     r6, r5, 0x6F647930@l
	addi     r5, r4, 0x506C6F62@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x16c(r31)
	mr       r3, r29
	lis      r5, 0x6F647931@ha
	lis      r4, 0x506C6F62@ha
	lwz      r12, 0(r29)
	addi     r6, r5, 0x6F647931@l
	addi     r5, r4, 0x506C6F62@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x170(r31)
	mr       r3, r29
	lis      r5, 0x6F647932@ha
	lis      r4, 0x506C6F62@ha
	lwz      r12, 0(r29)
	addi     r6, r5, 0x6F647932@l
	addi     r5, r4, 0x506C6F62@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x174(r31)
	mr       r3, r29
	lis      r4, 0x685F6C6F@ha
	li       r5, 0x50
	lwz      r12, 0(r29)
	addi     r6, r4, 0x685F6C6F@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x178(r31)
	mr       r3, r29
	lis      r4, 0x626C6F30@ha
	li       r5, 0x50
	lwz      r12, 0(r29)
	addi     r6, r4, 0x626C6F30@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x17c(r31)
	mr       r3, r29
	lis      r4, 0x626C6F31@ha
	li       r5, 0x50
	lwz      r12, 0(r29)
	addi     r6, r4, 0x626C6F31@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x180(r31)
	mr       r21, r31
	li       r22, 0

lbl_8039B898:
	lwz      r0, 0x154(r21)
	cmplwi   r0, 0
	bne      lbl_8039B8B8
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x3ec
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B8B8:
	lwz      r3, 0x154(r21)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r0, 0x16c(r21)
	cmplwi   r0, 0
	bne      lbl_8039B8E4
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x3ee
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B8E4:
	lwz      r3, 0x16c(r21)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	addi     r22, r22, 1
	addi     r21, r21, 4
	cmpwi    r22, 6
	blt      lbl_8039B898
	lis      r6, 0x6133646C@ha
	lwz      r3, 0x78(r31)
	mr       r4, r29
	li       r5, 0x6f74
	addi     r6, r6, 0x6133646C@l
	bl setCallBack_3DStickSmall__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0x204(r31)
	mr       r3, r29
	lis      r4, 0x6133646C@ha
	li       r5, 0x6f74
	lwz      r12, 0(r29)
	addi     r6, r4, 0x6133646C@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xdc(r31)
	lwz      r0, 0xdc(r31)
	cmplwi   r0, 0
	bne      lbl_8039B960
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x3fa
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B960:
	lwz      r0, 0x204(r31)
	cmplwi   r0, 0
	bne      lbl_8039B980
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x3fb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B980:
	lwz      r3, 0x204(r31)
	lfs      f1, lbl_8051F1EC@sda21(r2)
	lwz      r3, 0x34(r3)
	bl       setSpeed__Q32og6Screen9AnimGroupFf
	lwz      r3, 0x204(r31)
	lwz      r3, 0x34(r3)
	bl       start__Q32og6Screen9AnimGroupFv
	li       r3, 8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039B9B8
	lwz      r4, 0x204(r31)
	bl       __ct__Q32og6Screen12StickAnimMgrFPQ32og6Screen16CallBack_Picture
	mr       r0, r3

lbl_8039B9B8:
	stw      r0, 0x208(r31)
	lwz      r0, 0x208(r31)
	cmplwi   r0, 0
	bne      lbl_8039B9DC
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x400
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039B9DC:
	mr       r3, r29
	lis      r4, 0x72696D61@ha
	lwz      r12, 0(r29)
	addi     r6, r4, 0x72696D61@l
	li       r5, 0x4e6f
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x100(r31)
	lwz      r0, 0x100(r31)
	cmplwi   r0, 0
	bne      lbl_8039BA20
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x403
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039BA20:
	lwz      r6, 0x100(r31)
	lis      r4, 0x6C756965@ha
	mr       r3, r29
	li       r5, 0x4e
	lfs      f0, 0xd4(r6)
	addi     r6, r4, 0x6C756965@l
	stfs     f0, 0x2f8(r31)
	lwz      r4, 0x100(r31)
	lfs      f0, 0xd8(r4)
	stfs     f0, 0x2fc(r31)
	lwz      r12, 0(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x104(r31)
	lwz      r0, 0x104(r31)
	cmplwi   r0, 0
	bne      lbl_8039BA7C
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x408
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039BA7C:
	lwz      r6, 0x104(r31)
	lis      r5, 0x69676832@ha
	lis      r4, 0x506C6F6C@ha
	mr       r3, r29
	lfs      f0, 0xd4(r6)
	addi     r6, r5, 0x69676832@l
	addi     r5, r4, 0x506C6F6C@l
	stfs     f0, 0x300(r31)
	lwz      r4, 0x104(r31)
	lfs      f0, 0xd8(r4)
	stfs     f0, 0x304(r31)
	lwz      r12, 0(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r22, r3, r3
	bne      lbl_8039BAD4
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x40f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039BAD4:
	lfd      f2, 0x258(r30)
	mr       r23, r31
	lfd      f1, 0x260(r30)
	addi     r21, r1, 0x38
	lfd      f0, 0x268(r30)
	li       r24, 0
	stfd     f2, 0x38(r1)
	stfd     f1, 0x40(r1)
	stfd     f0, 0x48(r1)

lbl_8039BAF8:
	mr       r3, r29
	lwz      r5, 0(r21)
	lwz      r12, 0(r29)
	lwz      r6, 4(r21)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xf4(r23)
	lwz      r0, 0xf4(r23)
	cmplwi   r0, 0
	bne      lbl_8039BB3C
	mr       r6, r24
	addi     r3, r30, 0xc
	addi     r5, r30, 0x474
	li       r4, 0x416
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039BB3C:
	lwz      r3, 0xf4(r23)
	li       r4, 0
	li       r5, 0
	bl       setInfluencedAlpha__7J2DPaneFbb
	addi     r24, r24, 1
	addi     r23, r23, 4
	cmpwi    r24, 3
	addi     r21, r21, 8
	blt      lbl_8039BAF8
	li       r3, 0x40
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_8039BBAC
	lwz      r3, 0xc4(r31)
	lis      r5, 0x6E796F6E@ha
	lis      r4, 0x004E796F@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x6E796F6E@l
	addi     r5, r4, 0x004E796F@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r22, 4(r21)
	li       r4, 4
	stw      r3, 8(r21)
	lwz      r3, 8(r21)
	bl       setBasePosition__7J2DPaneF15J2DBasePosition

lbl_8039BBAC:
	stw      r21, 0x1e8(r31)
	lfs      f1, lbl_8051F1C0@sda21(r2)
	lwz      r25, 0x1e8(r31)
	lfs      f0, lbl_8051F170@sda21(r2)
	stfs     f1, 0xc(r25)
	stfs     f0, 0x10(r25)
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0x224(r1)
	li       r3, 1
	lfs      f0, mTestVal__Q28Morimura9TVsSelect@sda21(r13)
	li       r0, 0
	stw      r4, 0x220(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	fctiwz   f0, f0
	lfd      f1, 0x220(r1)
	lfs      f2, lbl_8051F1C4@sda21(r2)
	fsubs    f3, f1, f3
	stfd     f0, 0x218(r1)
	lfs      f1, lbl_8051F190@sda21(r2)
	lwz      r5, 0x21c(r1)
	fdivs    f2, f3, f2
	lfs      f0, lbl_8051F170@sda21(r2)
	fmuls    f1, f1, f2
	fctiwz   f1, f1
	stfd     f1, 0x210(r1)
	lwz      r4, 0x214(r1)
	add      r4, r5, r4
	neg      r4, r4
	stw      r4, 0x38(r25)
	stfs     f0, 0x30(r25)
	stb      r3, 0x3c(r25)
	lwz      r3, 8(r25)
	stb      r0, 0xb0(r3)
	stfs     f0, 0x2c(r25)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x20c(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	stw      r0, 0x208(r1)
	lfs      f1, lbl_8051F1C4@sda21(r2)
	lfd      f2, 0x208(r1)
	lfs      f0, lbl_8051F188@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8039BC78
	lfs      f0, lbl_8051F1A8@sda21(r2)
	stfs     f0, 0x2c(r25)

lbl_8039BC78:
	lfs      f0, lbl_8051F170@sda21(r2)
	lis      r4, 0x6C696768@ha
	lis      r3, 0x00506C6F@ha
	stfs     f0, 0x1c(r25)
	addi     r6, r4, 0x6C696768@l
	addi     r5, r3, 0x00506C6F@l
	stfs     f0, 0x20(r25)
	stfs     f0, 0x24(r25)
	stfs     f0, 0x28(r25)
	lfs      f0, mAngRate__Q28Morimura9TVsSelect@sda21(r13)
	stfs     f0, 0x34(r25)
	lwz      r3, 0x7c(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r22, r3, r3
	bne      lbl_8039BCD8
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x420
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039BCD8:
	li       r3, 0x40
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_8039BD24
	lwz      r3, 0xc8(r31)
	lis      r5, 0x6E796F6E@ha
	lis      r4, 0x004E796F@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x6E796F6E@l
	addi     r5, r4, 0x004E796F@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r22, 4(r21)
	li       r4, 4
	stw      r3, 8(r21)
	lwz      r3, 8(r21)
	bl       setBasePosition__7J2DPaneF15J2DBasePosition

lbl_8039BD24:
	stw      r21, 0x1ec(r31)
	lfs      f1, lbl_8051F1C0@sda21(r2)
	lwz      r25, 0x1ec(r31)
	lfs      f0, lbl_8051F170@sda21(r2)
	stfs     f1, 0xc(r25)
	stfs     f0, 0x10(r25)
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r4, 0x4330
	stw      r0, 0x224(r1)
	li       r3, 1
	lfs      f0, mTestVal__Q28Morimura9TVsSelect@sda21(r13)
	li       r0, 0
	stw      r4, 0x220(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	fctiwz   f0, f0
	lfd      f1, 0x220(r1)
	lfs      f2, lbl_8051F1C4@sda21(r2)
	fsubs    f3, f1, f3
	stfd     f0, 0x218(r1)
	lfs      f1, lbl_8051F190@sda21(r2)
	lwz      r5, 0x21c(r1)
	fdivs    f2, f3, f2
	lfs      f0, lbl_8051F170@sda21(r2)
	fmuls    f1, f1, f2
	fctiwz   f1, f1
	stfd     f1, 0x210(r1)
	lwz      r4, 0x214(r1)
	add      r4, r5, r4
	neg      r4, r4
	stw      r4, 0x38(r25)
	stfs     f0, 0x30(r25)
	stb      r3, 0x3c(r25)
	lwz      r3, 8(r25)
	stb      r0, 0xb0(r3)
	stfs     f0, 0x2c(r25)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x20c(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	stw      r0, 0x208(r1)
	lfs      f1, lbl_8051F1C4@sda21(r2)
	lfd      f2, 0x208(r1)
	lfs      f0, lbl_8051F188@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8039BDF0
	lfs      f0, lbl_8051F1A8@sda21(r2)
	stfs     f0, 0x2c(r25)

lbl_8039BDF0:
	lfs      f0, lbl_8051F170@sda21(r2)
	li       r3, 0xbc
	stfs     f0, 0x1c(r25)
	stfs     f0, 0x20(r25)
	stfs     f0, 0x24(r25)
	stfs     f0, 0x28(r25)
	lfs      f0, mAngRate__Q28Morimura9TVsSelect@sda21(r13)
	stfs     f0, 0x34(r25)
	bl       __nw__FUl
	or.      r25, r3, r3
	beq      lbl_8039BF34
	mr       r3, r29
	lis      r5, 0x665F3030@ha
	lwz      r12, 0(r29)
	lis      r4, 0x5072705F@ha
	addi     r6, r5, 0x665F3030@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x5072705F@l
	mtctr    r12
	bctrl
	lwz      r12, 0(r29)
	lis      r5, 0x725F3030@ha
	mr       r23, r3
	lis      r4, 0x5072705F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x725F3030@l
	mr       r3, r29
	addi     r5, r4, 0x5072705F@l
	mtctr    r12
	bctrl
	lwz      r12, 0(r29)
	lis      r5, 0x6C5F3030@ha
	mr       r24, r3
	lis      r4, 0x5072705F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x6C5F3030@l
	mr       r3, r29
	addi     r5, r4, 0x5072705F@l
	mtctr    r12
	bctrl
	lis      r4, __ct__Q38Morimura7TVsPiki7posInfoFv@ha
	mr       r21, r3
	addi     r4, r4, __ct__Q38Morimura7TVsPiki7posInfoFv@l
	addi     r3, r25, 0xc
	li       r5, 0
	li       r6, 0x10
	li       r7, 0xa
	bl       __construct_array
	lis      r4, "__ct__10Vector2<f>Fv"@ha
	addi     r3, r25, 0xac
	addi     r4, r4, "__ct__10Vector2<f>Fv"@l
	li       r5, 0
	li       r6, 8
	li       r7, 2
	bl       __construct_array
	stw      r21, 0(r25)
	mr       r3, r21
	li       r4, 2
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	stw      r24, 4(r25)
	mr       r3, r24
	li       r4, 0
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	stw      r23, 8(r25)
	mr       r3, r23
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	li       r21, 0
	mr       r22, r25

lbl_8039BF04:
	lwz      r0, 0(r22)
	cmplwi   r0, 0
	bne      lbl_8039BF24
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0xb0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039BF24:
	addi     r21, r21, 1
	addi     r22, r22, 4
	cmpwi    r21, 3
	blt      lbl_8039BF04

lbl_8039BF34:
	li       r0, 0xa
	stw      r25, 0x1f0(r31)
	addi     r5, r1, 0x14c
	addi     r4, r30, 0x26c
	mtctr    r0

lbl_8039BF48:
	lwz      r3, 4(r4)
	lwzu     r0, 8(r4)
	stw      r3, 4(r5)
	stwu     r0, 8(r5)
	bdnz     lbl_8039BF48
	addi     r22, r1, 0x150
	li       r23, 0
	li       r21, 0

lbl_8039BF68:
	mr       r3, r29
	lwz      r5, 0(r22)
	lwz      r12, 0(r29)
	lwz      r6, 4(r22)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8039BF90
	stb      r21, 0xb0(r3)

lbl_8039BF90:
	addi     r23, r23, 1
	addi     r22, r22, 8
	cmpwi    r23, 0xa
	blt      lbl_8039BF68
	li       r3, 0xbc
	bl       __nw__FUl
	or.      r23, r3, r3
	beq      lbl_8039C0C8
	mr       r3, r29
	lis      r5, 0x665F3030@ha
	lwz      r12, 0(r29)
	lis      r4, 0x5062705F@ha
	addi     r6, r5, 0x665F3030@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x5062705F@l
	mtctr    r12
	bctrl
	lwz      r12, 0(r29)
	lis      r5, 0x725F3030@ha
	mr       r25, r3
	lis      r4, 0x5062705F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x725F3030@l
	mr       r3, r29
	addi     r5, r4, 0x5062705F@l
	mtctr    r12
	bctrl
	lwz      r12, 0(r29)
	lis      r5, 0x6C5F3030@ha
	mr       r24, r3
	lis      r4, 0x5062705F@ha
	lwz      r12, 0x3c(r12)
	addi     r6, r5, 0x6C5F3030@l
	mr       r3, r29
	addi     r5, r4, 0x5062705F@l
	mtctr    r12
	bctrl
	lis      r4, __ct__Q38Morimura7TVsPiki7posInfoFv@ha
	mr       r21, r3
	addi     r4, r4, __ct__Q38Morimura7TVsPiki7posInfoFv@l
	addi     r3, r23, 0xc
	li       r5, 0
	li       r6, 0x10
	li       r7, 0xa
	bl       __construct_array
	lis      r4, "__ct__10Vector2<f>Fv"@ha
	addi     r3, r23, 0xac
	addi     r4, r4, "__ct__10Vector2<f>Fv"@l
	li       r5, 0
	li       r6, 8
	li       r7, 2
	bl       __construct_array
	stw      r21, 0(r23)
	mr       r3, r21
	li       r4, 2
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	stw      r24, 4(r23)
	mr       r3, r24
	li       r4, 0
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	stw      r25, 8(r23)
	mr       r3, r25
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	li       r21, 0
	mr       r22, r23

lbl_8039C098:
	lwz      r0, 0(r22)
	cmplwi   r0, 0
	bne      lbl_8039C0B8
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0xb0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C0B8:
	addi     r21, r21, 1
	addi     r22, r22, 4
	cmpwi    r21, 3
	blt      lbl_8039C098

lbl_8039C0C8:
	li       r0, 0xa
	stw      r23, 0x1f4(r31)
	addi     r5, r1, 0xfc
	addi     r4, r30, 0x2bc
	mtctr    r0

lbl_8039C0DC:
	lwz      r3, 4(r4)
	lwzu     r0, 8(r4)
	stw      r3, 4(r5)
	stwu     r0, 8(r5)
	bdnz     lbl_8039C0DC
	addi     r22, r1, 0x100
	li       r23, 0
	li       r21, 0

lbl_8039C0FC:
	mr       r3, r29
	lwz      r5, 0(r22)
	lwz      r12, 0(r29)
	lwz      r6, 4(r22)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8039C124
	stb      r21, 0xb0(r3)

lbl_8039C124:
	addi     r23, r23, 1
	addi     r22, r22, 8
	cmpwi    r23, 0xa
	blt      lbl_8039C0FC
	lfd      f3, lbl_8051F198@sda21(r2)
	mr       r9, r31
	lfs      f1, lbl_8051F170@sda21(r2)
	li       r10, 0
	lfs      f0, lbl_8051F190@sda21(r2)
	lis      r5, 0x4330

lbl_8039C14C:
	li       r6, 0
	li       r0, 5
	mr       r4, r6
	lwz      r7, 0x274(r9)
	lwz      r8, 0x1f0(r9)
	li       r3, 3
	mtctr    r0

lbl_8039C168:
	xoris    r0, r6, 0x8000
	stw      r5, 0x220(r1)
	lfs      f4, mPikiOffset__Q28Morimura7TVsPiki@sda21(r13)
	cmpw     r6, r7
	stw      r0, 0x224(r1)
	lfd      f2, 0x220(r1)
	fsubs    f2, f2, f3
	fmuls    f2, f4, f2
	stfs     f2, 0x14(r8)
	stfs     f1, 0x10(r8)
	bge      lbl_8039C1A0
	stw      r4, 0xc(r8)
	stfs     f1, 0x18(r8)
	b        lbl_8039C1A8

lbl_8039C1A0:
	stw      r3, 0xc(r8)
	stfs     f0, 0x18(r8)

lbl_8039C1A8:
	addi     r6, r6, 1
	stw      r5, 0x220(r1)
	xoris    r0, r6, 0x8000
	lfs      f4, mPikiOffset__Q28Morimura7TVsPiki@sda21(r13)
	stw      r0, 0x224(r1)
	cmpw     r6, r7
	lfd      f2, 0x220(r1)
	fsubs    f2, f2, f3
	fmuls    f2, f4, f2
	stfs     f2, 0x24(r8)
	stfs     f1, 0x20(r8)
	bge      lbl_8039C1E4
	stw      r4, 0x1c(r8)
	stfs     f1, 0x28(r8)
	b        lbl_8039C1EC

lbl_8039C1E4:
	stw      r3, 0x1c(r8)
	stfs     f0, 0x28(r8)

lbl_8039C1EC:
	addi     r8, r8, 0x20
	addi     r6, r6, 1
	bdnz     lbl_8039C168
	lwz      r0, 0x274(r9)
	addi     r10, r10, 1
	cmpwi    r10, 2
	mulli    r0, r0, 5
	stw      r0, 0x27c(r9)
	addi     r9, r9, 4
	blt      lbl_8039C14C
	addi     r0, r31, 0x27c
	lis      r4, 0x5F665F6C@ha
	stw      r0, 8(r1)
	li       r0, 2
	lis      r3, 0x00507270@ha
	addi     r8, r4, 0x5F665F6C@l
	stw      r0, 0xc(r1)
	addi     r5, r3, 0x00507270@l
	li       r3, 0
	li       r0, 1
	stw      r3, 0x10(r1)
	mr       r3, r29
	mr       r7, r5
	mr       r10, r8
	stw      r0, 0x14(r1)
	mr       r9, r5
	addi     r6, r4, 0x5f72
	lwz      r0, 0x78(r31)
	stw      r0, 0x18(r1)
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
	addi     r0, r31, 0x280
	lis      r4, 0x665F6C31@ha
	stw      r0, 8(r1)
	li       r0, 2
	lis      r3, 0x5072705F@ha
	addi     r8, r4, 0x665F6C31@l
	stw      r0, 0xc(r1)
	addi     r5, r3, 0x5072705F@l
	li       r3, 0
	li       r0, 1
	stw      r3, 0x10(r1)
	mr       r3, r29
	mr       r7, r5
	mr       r10, r8
	stw      r0, 0x14(r1)
	mr       r9, r5
	addi     r6, r4, 0x7231
	lwz      r0, 0x78(r31)
	stw      r0, 0x18(r1)
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
	li       r3, 0xb4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039C314
	lis      r4, SujiTex32__Q22og6Screen@ha
	lwz      r6, 0x78(r31)
	addi     r4, r4, SujiTex32__Q22og6Screen@l
	mr       r21, r0
	li       r5, 4
	bl       __ct__Q32og6Screen19CallBack_CounterDayFPPcUsP10JKRArchive
	lis      r3, __vt__Q28Morimura17TVsSelectCBWinNum@ha
	li       r0, 0
	addi     r4, r3, __vt__Q28Morimura17TVsSelectCBWinNum@l
	li       r3, 0x1c
	stw      r4, 0(r21)
	stb      r0, 0xac(r21)
	stw      r0, 0xb0(r21)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039C30C
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_8039C30C:
	stw      r0, 0xb0(r21)
	mr       r0, r21

lbl_8039C314:
	stw      r0, 0x210(r31)
	lis      r3, 0x72695F72@ha
	addi     r4, r31, 0x284
	li       r0, 1
	stw      r4, 8(r1)
	mr       r4, r29
	addi     r6, r3, 0x72695F72@l
	addi     r8, r3, 0x5f6c
	stw      r0, 0xc(r1)
	addi     r10, r3, 0x5f63
	li       r5, 0x506f
	li       r7, 0x506f
	lwz      r3, 0x210(r31)
	li       r9, 0x506f
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x210(r31)
	li       r4, 1
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x72695F72@ha
	lwz      r7, 0x210(r31)
	mr       r3, r29
	li       r5, 0x506f
	addi     r6, r4, 0x72695F72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	li       r3, 0xb4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039C3E0
	lis      r4, SujiTex32__Q22og6Screen@ha
	lwz      r6, 0x78(r31)
	addi     r4, r4, SujiTex32__Q22og6Screen@l
	mr       r21, r0
	li       r5, 4
	bl       __ct__Q32og6Screen19CallBack_CounterDayFPPcUsP10JKRArchive
	lis      r3, __vt__Q28Morimura17TVsSelectCBWinNum@ha
	li       r0, 0
	addi     r4, r3, __vt__Q28Morimura17TVsSelectCBWinNum@l
	li       r3, 0x1c
	stw      r4, 0(r21)
	stb      r0, 0xac(r21)
	stw      r0, 0xb0(r21)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039C3D8
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_8039C3D8:
	stw      r0, 0xb0(r21)
	mr       r0, r21

lbl_8039C3E0:
	stw      r0, 0x214(r31)
	lis      r3, 0x75695F72@ha
	addi     r4, r31, 0x288
	li       r0, 1
	stw      r4, 8(r1)
	mr       r4, r29
	addi     r6, r3, 0x75695F72@l
	addi     r8, r3, 0x5f6c
	stw      r0, 0xc(r1)
	addi     r10, r3, 0x5f63
	li       r5, 0x506c
	li       r7, 0x506c
	lwz      r3, 0x214(r31)
	li       r9, 0x506c
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x214(r31)
	li       r4, 1
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	lis      r4, 0x75695F72@ha
	lwz      r7, 0x214(r31)
	mr       r3, r29
	li       r5, 0x506c
	addi     r6, r4, 0x75695F72@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8039C4C8
	lis      r5, __vt__Q25efx2d7TBaseIF@ha
	lis      r4, __vt__Q25efx2d5TBase@ha
	addi     r0, r5, __vt__Q25efx2d7TBaseIF@l
	lis      r6, __vt__18JPAEmitterCallBack@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q25efx2d5TBase@l
	lis      r5, __vt__Q25efx2d8TForever@ha
	lis      r4, __vt__Q25efx2d12T2DCountKira@ha
	stw      r0, 0(r3)
	li       r9, 0
	addi     r7, r5, __vt__Q25efx2d8TForever@l
	addi     r4, r4, __vt__Q25efx2d12T2DCountKira@l
	stb      r9, 4(r3)
	addi     r8, r6, __vt__18JPAEmitterCallBack@l
	addi     r6, r7, 0x18
	li       r5, 8
	stb      r9, 5(r3)
	addi     r0, r4, 0x18
	lfs      f0, lbl_8051F180@sda21(r2)
	stw      r8, 8(r3)
	stw      r7, 0(r3)
	stw      r6, 8(r3)
	sth      r5, 0xc(r3)
	stw      r9, 0x10(r3)
	stw      r4, 0(r3)
	stw      r0, 8(r3)
	stfs     f0, 0x14(r3)

lbl_8039C4C8:
	stw      r3, 0x200(r31)
	li       r3, 0x18
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_8039C500
	mr       r4, r28
	li       r5, 0
	bl       __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
	lis      r4, __vt__Q28Morimura11TListScreen@ha
	lis      r3, __vt__Q28Morimura19TVsSelectListScreen@ha
	addi     r0, r4, __vt__Q28Morimura11TListScreen@l
	stw      r0, 0(r21)
	addi     r0, r3, __vt__Q28Morimura19TVsSelectListScreen@l
	stw      r0, 0(r21)

lbl_8039C500:
	stw      r21, 0xbc(r31)
	addi     r4, r30, 0x48c
	lis      r5, 2
	lwz      r3, 0xbc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x7c(r31)
	lis      r3, 0x6C697374@ha
	addi     r6, r3, 0x6C697374@l
	li       r5, 0x4e
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r31)
	lwz      r0, 0xe4(r31)
	cmplwi   r0, 0
	bne      lbl_8039C568
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x456
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C568:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039C588
	mr       r4, r28
	li       r5, 1
	bl       __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
	mr       r0, r3

lbl_8039C588:
	stw      r0, 0xc0(r31)
	addi     r4, r30, 0x4a0
	lis      r5, 0x102
	lwz      r3, 0xc0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc0(r31)
	addi     r4, r30, 0x4b4
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039C5D4
	mr       r4, r28
	li       r5, 2
	bl       __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
	mr       r0, r3

lbl_8039C5D4:
	stw      r0, 0xd0(r31)
	addi     r4, r30, 0x4c8
	lis      r5, 0x102
	lwz      r3, 0xd0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd0(r31)
	addi     r4, r30, 0x4dc
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd0(r31)
	addi     r4, r30, 0x4f0
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	li       r3, 0x30
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_8039C634
	mr       r4, r28
	li       r5, 0xc
	bl       __ct__Q28Morimura24TSelectExplanationWindowFP10JKRArchivei
	lis      r3, __vt__Q28Morimura26TVsSelectExplanationWindow@ha
	addi     r0, r3, __vt__Q28Morimura26TVsSelectExplanationWindow@l
	stw      r0, 0(r21)

lbl_8039C634:
	stw      r21, 0xd4(r31)
	addi     r4, r30, 0x508
	lis      r5, 0x102
	lwz      r3, 0xd4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x520
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x538
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x554
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x570
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x58c
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x5a8
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x5c4
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x5e0
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x5fc
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x618
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x634
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0xd4(r31)
	addi     r4, r30, 0x650
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r4, 0xd4(r31)
	lis      r3, 0x4E6D6730@ha
	addi     r6, r3, 0x4E6D6730@l
	li       r5, 0
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x110(r31)
	lwz      r0, 0x110(r31)
	cmplwi   r0, 0
	bne      lbl_8039C72C
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x476
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C72C:
	lwz      r5, 0x110(r31)
	lis      r4, 0x6A693030@ha
	lis      r3, 0x004E7961@ha
	lfs      f1, 0xd8(r5)
	addi     r6, r4, 0x6A693030@l
	lfs      f0, 0xd4(r5)
	addi     r5, r3, 0x004E7961@l
	stfs     f0, 0x318(r31)
	stfs     f1, 0x31c(r31)
	lwz      r3, 0xd4(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x108(r31)
	lwz      r0, 0x108(r31)
	cmplwi   r0, 0
	bne      lbl_8039C78C
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x47a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C78C:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x6A693031@ha
	lis      r4, 0x004E7961@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x6A693031@l
	addi     r5, r4, 0x004E7961@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x10c(r31)
	lwz      r0, 0x10c(r31)
	cmplwi   r0, 0
	bne      lbl_8039C7D8
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x47d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C7D8:
	lwz      r4, 0xd4(r31)
	lis      r3, 0x6D673030@ha
	addi     r6, r3, 0x6D673030@l
	li       r5, 0x5430
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1b4(r31)
	lwz      r0, 0x1b4(r31)
	cmplwi   r0, 0
	bne      lbl_8039C820
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x480
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C820:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x67733030@ha
	lis      r4, 0x0054306D@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x67733030@l
	addi     r5, r4, 0x0054306D@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1cc(r31)
	lwz      r0, 0x1cc(r31)
	cmplwi   r0, 0
	bne      lbl_8039C86C
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x482
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C86C:
	lwz      r4, 0xd4(r31)
	lis      r3, 0x6D673031@ha
	addi     r6, r3, 0x6D673031@l
	li       r5, 0x5430
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1b8(r31)
	lwz      r0, 0x1b8(r31)
	cmplwi   r0, 0
	bne      lbl_8039C8B4
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x485
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C8B4:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x67733031@ha
	lis      r4, 0x0054306D@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x67733031@l
	addi     r5, r4, 0x0054306D@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1d0(r31)
	lwz      r0, 0x1d0(r31)
	cmplwi   r0, 0
	bne      lbl_8039C900
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x487
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C900:
	lwz      r4, 0xd4(r31)
	lis      r3, 0x6D673032@ha
	addi     r6, r3, 0x6D673032@l
	li       r5, 0x5430
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1bc(r31)
	lwz      r0, 0x1bc(r31)
	cmplwi   r0, 0
	bne      lbl_8039C948
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x48a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C948:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x67733032@ha
	lis      r4, 0x0054306D@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x67733032@l
	addi     r5, r4, 0x0054306D@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1d4(r31)
	lwz      r0, 0x1d4(r31)
	cmplwi   r0, 0
	bne      lbl_8039C994
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x48c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C994:
	lwz      r4, 0xd4(r31)
	lis      r3, 0x6D673033@ha
	addi     r6, r3, 0x6D673033@l
	li       r5, 0x5430
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c0(r31)
	lwz      r0, 0x1c0(r31)
	cmplwi   r0, 0
	bne      lbl_8039C9DC
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x48f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039C9DC:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x67733033@ha
	lis      r4, 0x0054306D@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x67733033@l
	addi     r5, r4, 0x0054306D@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1d8(r31)
	lwz      r0, 0x1d8(r31)
	cmplwi   r0, 0
	bne      lbl_8039CA28
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x491
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CA28:
	lwz      r4, 0xd4(r31)
	lis      r3, 0x6D673034@ha
	addi     r6, r3, 0x6D673034@l
	li       r5, 0x5430
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c4(r31)
	lwz      r0, 0x1c4(r31)
	cmplwi   r0, 0
	bne      lbl_8039CA70
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x494
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CA70:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x67733034@ha
	lis      r4, 0x0054306D@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x67733034@l
	addi     r5, r4, 0x0054306D@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1dc(r31)
	lwz      r0, 0x1dc(r31)
	cmplwi   r0, 0
	bne      lbl_8039CABC
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x496
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CABC:
	lwz      r4, 0xd4(r31)
	lis      r3, 0x6D673035@ha
	addi     r6, r3, 0x6D673035@l
	li       r5, 0x5430
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c8(r31)
	lwz      r0, 0x1c8(r31)
	cmplwi   r0, 0
	bne      lbl_8039CB04
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x499
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CB04:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x67733035@ha
	lis      r4, 0x0054306D@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x67733035@l
	addi     r5, r4, 0x0054306D@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	cmplwi   r0, 0
	bne      lbl_8039CB50
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x49b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CB50:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x6F6E3030@ha
	lis      r4, 0x50306963@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x6F6E3030@l
	addi     r5, r4, 0x50306963@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x114(r31)
	lwz      r0, 0x114(r31)
	cmplwi   r0, 0
	bne      lbl_8039CB9C
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x49e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CB9C:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x6F6E3031@ha
	lis      r4, 0x50306963@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x6F6E3031@l
	addi     r5, r4, 0x50306963@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x118(r31)
	lwz      r0, 0x118(r31)
	cmplwi   r0, 0
	bne      lbl_8039CBE8
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x4a1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CBE8:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x6F6E3032@ha
	lis      r4, 0x50306963@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x6F6E3032@l
	addi     r5, r4, 0x50306963@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x11c(r31)
	lwz      r0, 0x11c(r31)
	cmplwi   r0, 0
	bne      lbl_8039CC34
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x4a4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CC34:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x6F6E3033@ha
	lis      r4, 0x50306963@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x6F6E3033@l
	addi     r5, r4, 0x50306963@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x120(r31)
	lwz      r0, 0x120(r31)
	cmplwi   r0, 0
	bne      lbl_8039CC80
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x4a7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CC80:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x6F6E3034@ha
	lis      r4, 0x50306963@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x6F6E3034@l
	addi     r5, r4, 0x50306963@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x124(r31)
	lwz      r0, 0x124(r31)
	cmplwi   r0, 0
	bne      lbl_8039CCCC
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x4aa
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CCCC:
	lwz      r3, 0xd4(r31)
	lis      r5, 0x6F6E3035@ha
	lis      r4, 0x50306963@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x6F6E3035@l
	addi     r5, r4, 0x50306963@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x128(r31)
	lwz      r0, 0x128(r31)
	cmplwi   r0, 0
	bne      lbl_8039CD18
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x4ad
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CD18:
	lwz      r5, 0x114(r31)
	li       r0, 0
	lis      r4, 0x655F3131@ha
	lis      r3, 0x5472756C@ha
	stb      r0, 0xb0(r5)
	addi     r6, r4, 0x655F3131@l
	addi     r5, r3, 0x5472756C@l
	lwz      r3, 0x118(r31)
	stb      r0, 0xb0(r3)
	lwz      r3, 0x11c(r31)
	stb      r0, 0xb0(r3)
	lwz      r3, 0x120(r31)
	stb      r0, 0xb0(r3)
	lwz      r3, 0x124(r31)
	stb      r0, 0xb0(r3)
	lwz      r3, 0x128(r31)
	stb      r0, 0xb0(r3)
	lwz      r3, 0xd4(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r21, r3, r3
	bne      lbl_8039CD90
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x4b4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CD90:
	lis      r4, 0x335F3030@ha
	lis      r3, 0x00323031@ha
	addi     r0, r4, 0x335F3030@l
	lis      r4, 0x655F6D36@ha
	stw      r0, 0x1c(r21)
	addi     r0, r3, 0x00323031@l
	lis      r3, 0x5472756C@ha
	addi     r6, r4, 0x655F6D36@l
	stw      r0, 0x18(r21)
	addi     r5, r3, 0x5472756C@l
	lwz      r3, 0xd4(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r21, r3, r3
	bne      lbl_8039CDEC
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x4b8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CDEC:
	lis      r3, 0x335F3030@ha
	lis      r4, 0x00323031@ha
	addi     r0, r3, 0x335F3030@l
	mr       r3, r31
	stw      r0, 0x1c(r21)
	addi     r0, r4, 0x00323031@l
	stw      r0, 0x18(r21)
	bl       changeSlotPage__Q28Morimura9TVsSelectFv
	lwz      r5, 0xbc(r31)
	li       r3, 0
	li       r4, 2
	addi     r0, r1, 0x78
	lwz      r23, 8(r5)
	stw      r3, 0x90(r31)
	mr       r3, r23
	stw      r4, 0x94(r31)
	lha      r4, 0x8e(r31)
	addi     r4, r4, -1
	stw      r4, 0x98(r31)
	lfd      f4, 0x310(r30)
	lfd      f3, 0x318(r30)
	lfd      f2, 0x320(r30)
	lfd      f1, 0x328(r30)
	lfd      f0, 0x330(r30)
	stfd     f4, 0x78(r1)
	stfd     f3, 0x80(r1)
	stfd     f2, 0x88(r1)
	stfd     f1, 0x90(r1)
	stfd     f0, 0x98(r1)
	lwz      r4, 0x90(r31)
	lwz      r12, 0(r23)
	slwi     r4, r4, 3
	add      r6, r0, r4
	lwz      r12, 0x3c(r12)
	lwz      r5, 0(r6)
	lwz      r6, 4(r6)
	mtctr    r12
	bctrl
	or.      r21, r3, r3
	bne      lbl_8039CEA0
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x4cb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CEA0:
	lfs      f0, 0xd8(r21)
	mr       r3, r23
	addi     r0, r1, 0x78
	stfs     f0, 0xa0(r31)
	lwz      r4, 0x98(r31)
	lwz      r12, 0(r23)
	slwi     r4, r4, 3
	add      r6, r0, r4
	lwz      r12, 0x3c(r12)
	lwz      r5, 0(r6)
	lwz      r6, 4(r6)
	mtctr    r12
	bctrl
	or.      r21, r3, r3
	bne      lbl_8039CEF0
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x4cf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8039CEF0:
	lfs      f0, 0xd8(r21)
	stfs     f0, 0xa4(r31)
	lha      r0, 0x8e(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	lis      r5, 0x305F3031@ha
	lis      r4, 0x00303030@ha
	stw      r3, 0x88(r31)
	addi     r22, r1, 0x78
	addi     r28, r5, 0x305F3031@l
	addi     r25, r4, 0x00303030@l
	li       r21, 0
	li       r24, 0
	b        lbl_8039CFD4

lbl_8039CF28:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8039CF88
	mr       r3, r23
	lwz      r5, 0(r22)
	lwz      r12, 0(r23)
	lwz      r6, 4(r22)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f0, lbl_8051F170@sda21(r2)
	stw      r0, 0(r29)
	stw      r3, 4(r29)
	stw      r0, 8(r29)
	stw      r0, 0xc(r29)
	stw      r0, 0x10(r29)
	stfs     f0, 0x18(r29)
	stw      r0, 0x20(r29)
	stw      r0, 0x24(r29)
	lwz      r3, 4(r29)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0x1c(r29)

lbl_8039CF88:
	lwz      r3, 0x88(r31)
	mr       r4, r21
	stwx     r29, r3, r24
	lwz      r3, 0x88(r31)
	lwzx     r3, r3, r24
	lwz      r3, 4(r3)
	stw      r28, 0x1c(r3)
	stw      r25, 0x18(r3)
	lwz      r3, 0x88(r31)
	lwzx     r3, r3, r24
	bl       setIndex__Q28Morimura10TIndexPaneFi
	lwz      r3, 0x88(r31)
	li       r0, 1
	addi     r22, r22, 8
	addi     r21, r21, 1
	lwzx     r3, r3, r24
	addi     r24, r24, 4
	lwz      r3, 4(r3)
	stb      r0, 0xb0(r3)

lbl_8039CFD4:
	lha      r0, 0x8e(r31)
	cmpw     r21, r0
	blt      lbl_8039CF28
	lwz      r4, 0x88(r31)
	li       r3, 0x30
	lwz      r5, 0(r4)
	lwz      r4, 4(r4)
	lwz      r5, 4(r5)
	lwz      r4, 4(r4)
	lfs      f0, 0xd8(r5)
	lfs      f1, 0xd8(r4)
	fsubs    f30, f1, f0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8039D018
	bl       __ct__Q28Morimura11TIndexGroupFv
	mr       r0, r3

lbl_8039D018:
	stw      r0, 0x84(r31)
	lis      r3, mScrollParm__Q28Morimura9TVsSelect@ha
	addi     r4, r3, mScrollParm__Q28Morimura9TVsSelect@l
	mr       r3, r31
	lwz      r5, 0x84(r31)
	stfs     f30, 0x18(r5)
	lwz      r5, 0x84(r31)
	lfs      f0, 0(r4)
	stfs     f0, 0(r5)
	lfs      f0, 4(r4)
	stfs     f0, 4(r5)
	lfs      f0, 8(r4)
	stfs     f0, 8(r5)
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r5)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x10(r5)
	lwz      r12, 0(r31)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1f8(r31)
	lwz      r0, 0x2c(r3)
	lwz      r3, 0x24(r3)
	cmpwi    r0, 0
	bne      lbl_8039D098
	addi     r3, r3, -1

lbl_8039D098:
	cmpwi    r3, 0
	bge      lbl_8039D0A4
	li       r3, 0

lbl_8039D0A4:
	stw      r3, 0x284(r31)
	lwz      r3, 0x1f8(r31)
	lwz      r0, 0x2c(r3)
	lwz      r3, 0x28(r3)
	cmpwi    r0, 1
	bne      lbl_8039D0C0
	addi     r3, r3, -1

lbl_8039D0C0:
	cmpwi    r3, 0
	bge      lbl_8039D0CC
	li       r3, 0

lbl_8039D0CC:
	stw      r3, 0x288(r31)
	li       r23, 0
	lfs      f31, lbl_8051F170@sda21(r2)
	lwz      r0, 0x248(r31)
	subf     r3, r27, r0
	addi     r21, r3, 2
	b        lbl_8039D184

lbl_8039D0E8:
	li       r24, 0
	li       r22, 0
	b        lbl_8039D138

lbl_8039D0F4:
	lwz      r3, 0x88(r31)
	lwzx     r4, r3, r22
	lfs      f0, 0x1c(r4)
	lwz      r3, 4(r4)
	fadds    f0, f0, f30
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x88(r31)
	addi     r24, r24, 1
	lwzx     r4, r3, r22
	addi     r22, r22, 4
	lwz      r3, 4(r4)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0x1c(r4)

lbl_8039D138:
	lha      r0, 0x8e(r31)
	cmpw     r24, r0
	blt      lbl_8039D0F4
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x84(r31)
	li       r0, 0
	mr       r3, r31
	stfs     f31, 0x14(r4)
	stw      r0, 0x20(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	addi     r23, r23, 1

lbl_8039D184:
	cmpw     r23, r21
	blt      lbl_8039D0E8
	mr       r3, r31
	bl       changeFaceTexture__Q28Morimura9TVsSelectFv
	mr       r3, r26
	bl       becomeCurrentHeap__7JKRHeapFv
	psq_l    f31, 632(r1), 0, qr0
	lfd      f31, 0x270(r1)
	psq_l    f30, 616(r1), 0, qr0
	lfd      f30, 0x260(r1)
	lmw      r21, 0x234(r1)
	lwz      r0, 0x284(r1)
	mtlr     r0
	addi     r1, r1, 0x280
	blr
	*/
}

/**
 * @note Address: 0x8039D1E0
 * @note Size: 0x1244
 */
bool TVsSelect::doUpdate()
{
	if (mIsSection && mDoDebugScores) {
		mPlayerWinCounts[0] = mDebugWinCounts[0];
		mPlayerWinCounts[1] = mDebugWinCounts[1];
		changeFaceTexture();
	}
	updateFacePicture();

	if (mIsSection && mForceDemoStart) {
		mForceDemoStart = false;
		demoStart();
	}

	bool rulesinactive = false;
	if (mRulesWindow->mState == 0) {
		rulesinactive = true;
	}

	if (mCanInput && mDispMember->mState == Screen::Game2DMgr::CHECK2D_VsSelect_Default
	    && !static_cast<TVsSelectScene*>(getOwner())->mConfirmEndWindow->mHasDrawn) {
		if (mZoomState == 0) {
			if (rulesinactive) {
				if (mController->getButtonDown() & Controller::PRESS_R) {
					mHandicapSel[0]++;
					if (mHandicapSel[0] > 10) {
						mHandicapSel[0] = 10;
					} else {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_INCREMENT, 0);
					}
				}
				if (mController->getButtonDown() & Controller::PRESS_L) {
					mHandicapSel[0]--;
					if (mHandicapSel[0] < 1) {
						mHandicapSel[0] = 1;
					} else {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_DECREMENT, 0);
					}
				}

				if (mController2->getButtonDown() & Controller::PRESS_R) {
					mHandicapSel[1]++;
					if (mHandicapSel[1] > 10) {
						mHandicapSel[1] = 10;
					} else {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_INCREMENT, 0);
					}
				}
				if (mController2->getButtonDown() & Controller::PRESS_L) {
					mHandicapSel[1]--;
					if (mHandicapSel[1] < 1) {
						mHandicapSel[1] = 1;
					} else {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_PIKI_DECREMENT, 0);
					}
				}
			} else {
				if (mController->getButtonDown()
				    & (Controller::CSTICK_RIGHT | Controller::ANALOG_RIGHT | Controller::PRESS_R | Controller::PRESS_DPAD_RIGHT)) {
					if (mCurrentRulesPage == 0 && !mDoChangeRulesPage) {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
						mDoChangeRulesPage = true;
					}
				} else if (mController->getButtonDown()
				           & (Controller::CSTICK_LEFT | Controller::ANALOG_LEFT | Controller::PRESS_L | Controller::PRESS_DPAD_LEFT)) {
					if (mCurrentRulesPage && !mDoChangeRulesPage) {
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
						mDoChangeRulesPage = true;
					}
				}
			}

			if (mController->getButtonDown() & Controller::PRESS_B) {
				if (rulesinactive) {
					mDrawAlpha = 0;
					static_cast<TVsSelectScene*>(getOwner())->mConfirmEndWindow->start(nullptr);
				} else {
					mRulesWindow->closeWindow();
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
				}
			} else if (mController->getButtonDown() & Controller::PRESS_Z) {
				mRulesWindow->openClose();
			} else if (rulesinactive) {
				if (mController->getButtonDown() & (Controller::PRESS_START | Controller::PRESS_A)) {
					if (!mIsSection) {
						mIsDemoStarted = 1;
						demoStart();
					}
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
					mRulesWindow->closeWindow();
				} else if (mController->getButton() & (Controller::ANALOG_DOWN)
				           || mController->getButton() & (Controller::PRESS_DPAD_DOWN)) {
					if (mStickAnimState != 1) {
						mIndexGroup->upIndex();
					} else if (mIndexGroup->mStateID == TIndexGroup::IDGroup_Idle && !mIsSelectIndexChange) {
						mIsSelectIndexChange = true;
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
					}
				} else if (mController->getButton() & (Controller::ANALOG_UP) || mController->getButton() & (Controller::PRESS_DPAD_UP)) {
					if (mStickAnimState != 2) {
						mIndexGroup->downIndex();
					} else if (mIndexGroup->mStateID == TIndexGroup::IDGroup_Idle && !mIsSelectIndexChange) {
						mIsSelectIndexChange = true;
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
					}
				}
			}
		} else if (mCanCancel && mController->getButtonDown() & Controller::PRESS_B) {
			mCanCancel = false;
			if (mZoomState != 1) {
				mZoomLevel = mZoomFrameMax;
			}
			mZoomState = 2;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
			for (int i = 0; i < 2; i++) {
				TVsSelectOnyon* onyon = mOnyonObj[i];
				f32 calc              = onyon->mGoalAngle;
				onyon->mCurrentPosition
				    = Vector2f(cosf(calc) * 400.0f + onyon->mGoalPosition.x, sinf(calc) * 400.0f + onyon->mGoalPosition.y);
			}
		}
	}

	mDispPikiNum[0] = mHandicapSel[0] * 5;
	mDispPikiNum[1] = mHandicapSel[1] * 5;

	if (mIsSelectIndexChange) {
		mIsSelectIndexChange++;
		if (mIsSelectIndexChange > 15) {
			mIsSelectIndexChange = 0;
		}
	}

	if (mDispMember->mState != Screen::Game2DMgr::CHECK2D_VsSelect_InDemo && mDispMember->mDispWorldMapInfoWin0->mResult == 1
	    && !mIsSection) {
		mIsDemoStarted      = 0;
		mDispMember->mState = Screen::Game2DMgr::CHECK2D_VsSelect_InDemo;
		getOwner()->endScene(nullptr);
	}

	mBackgroundScreen->update();
	mListScreen->update();
	mMainScreen->update();
	mRulesWindow->update();
	mRedPodScreen->update();
	mBluePodScreen->update();
	mFireScreen->update();

	if (updateList()) {
		changePaneInfo();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
	}

	switch (mZoomState) {
	case 1:
	case 2:
		doZoom();
		doMoveOnyon();
		break;
	case 3:
		doMoveOnyon();
		doScreenEffect();
		break;
	default:
		mZoomLevel += 1.0f;
		if (mIsUpdatedScore && mZoomLevel == 35.0f) {
			mIsUpdatedScore = false;

			if (mDispMember->mVsWinner == 0) {

				f32 calc                  = 1.5f;
				mPlayerWinCounts[0]       = mDispMember->mRedWinCount;
				mWinCounter[0]->mIsNeedUp = true;
				int num                   = mDispMember->mRedWinCount;
				if (num >= 100) { // Are you telling me something changes from 100 WINS???
					calc = 2.5f;
				} else if (num >= 10) {
					calc = 2.0f;
				}
				mEfxCountKira->mScale = calc;
				J2DPane* pane         = mMainScreen->mScreenObj->search('Pori_c');
				pane->setBasePosition(J2DPOS_Center);
				Vector2f pos(pane->getGlbVtx(GLBVTX_BtmLeft).x + pane->getWidth() / 2,
				             pane->getGlbVtx(GLBVTX_BtmLeft).y + pane->getHeight() / 2);
				efx2d::Arg arg(pos);
				mEfxCountKira->create(&arg);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_2P_WIN_COUNT, 0);
			} else if (mDispMember->mVsWinner == 1) {
				f32 calc                  = 1.5f;
				mPlayerWinCounts[1]       = mDispMember->mBlueWinCount;
				mWinCounter[1]->mIsNeedUp = true;
				int num                   = mDispMember->mBlueWinCount;
				if (num >= 100) {
					calc = 2.5f;
				} else if (num >= 10) {
					calc = 2.0f;
				}
				mEfxCountKira->mScale = calc;
				J2DPane* pane         = mMainScreen->mScreenObj->search('Plui_c');
				pane->setBasePosition(J2DPOS_Center);
				Vector2f pos(pane->getGlbVtx(GLBVTX_BtmLeft).x + pane->getWidth() / 2,
				             pane->getGlbVtx(GLBVTX_BtmLeft).y + pane->getHeight() / 2);
				efx2d::Arg arg(pos);
				mEfxCountKira->create(&arg);
				PSSystem::spSysIF->playSystemSe(PSSE_SY_2P_WIN_COUNT, 0);
			}
			changeFaceTexture();
		}
		if (mZoomLevel > 100.0f) {
			mEfxCountKira->fade();
		}
	}

	mBackgroundScreen->mScreenObj->setXY(mScreenXPos, 0.0f);
	mMainScreen->mScreenObj->setXY(mScreenXPos, 0.0f);
	mListScreen->mScreenObj->setXY(mScreenXPos, 0.0f);
	mFireScreen->mScreenObj->setXY(mScreenXPos, 0.0f);

	mBackgroundScreen->mScreenObj->scaleScreen(mDemoScale);
	mMainScreen->mScreenObj->scaleScreen(mDemoScale);
	mListScreen->mScreenObj->scaleScreen(mDemoScale);
	mFireScreen->mScreenObj->scaleScreen(mDemoScale);

	f32 calc = mScreenXPos / mDemoScale;
	mPaneSpot->updateScale(mScreenXPos);
	f32 something = 243.0f;
	something *= 40.0f;
	something += 324.0f;
	something *= 1.1f;
	mPaneSpot->updateScale(-calc * something);

	f32 dist = 0.0f;
	if (mIndexGroup->mStateID != TIndexGroup::IDGroup_Down) {
		dist = 30.0f;
	} else if (mIndexGroup->mStateID == TIndexGroup::IDGroup_Up) {
		dist = -30.0f;
	}
	mLevelNameYPos += (dist - mLevelNameYPos) * 0.3f;
	if ((f32)fabs(mLevelNameYPos - dist) < 0.1f) {
		mLevelNameYPos = dist;
	}
	mPaneLevelName->setOffset(0.0f, mLevelNameYPos + -3.0f);

	mCharacterMainIcons[0]->setOffset(mPlayerMainIconPos[0].x + mPlayerIconOffset[0].x, mPlayerMainIconPos[0].y + mPlayerIconOffset[0].y);
	mCharacterMainIcons[1]->setOffset(mPlayerMainIconPos[1].x + mPlayerIconOffset[1].x, mPlayerMainIconPos[1].y + mPlayerIconOffset[1].y);

	if (mDoChangeRulesPage) {
		mRuleChangeTimer += mRulePageChangeSpeed;
		if (mRuleChangeTimer > PI) {
			mRuleChangeTimer     = 0.0f;
			mDoChangeRulesPage   = false;
			mIsRulesPageChanging = true;
		}
		if (mCurrentRulesPage) {
			mRulesMoveXPos = sinf(mRuleChangeTimer) * 600.0f;
			if (mIsRulesPageChanging && mRuleChangeTimer > HALF_PI) {
				mCurrentRulesPage    = 0;
				mIsRulesPageChanging = false;
				changeSlotPage();
			}
		} else {
			mRulesMoveXPos = sinf(mRuleChangeTimer) * -600.0f;
			if (mIsRulesPageChanging && mRuleChangeTimer > HALF_PI) {
				mIsRulesPageChanging = false;
				mCurrentRulesPage    = 1;
				changeSlotPage();
			}
		}
		mPaneRulesLR[0]->hide();
		mPaneRulesLR[1]->hide();
	} else {
		// mRuleChangeTimer += mRulePageChangeSpeed;
		f32 alpha = mArrowBlink->calc() * 255.0f;
		for (int i = 0; i < 2; i++) {
			mPaneRulesLR[i]->setAlpha(alpha);
		}
		if (mCurrentRulesPage == 0) {
			mPaneRulesLR[0]->hide();
			mPaneRulesLR[1]->show();
		} else {
			mPaneRulesLR[0]->show();
			mPaneRulesLR[1]->hide();
		}
	}
	mPaneRulesInfo->setOffset(mRulesPanePos.x + mRulesMoveXPos, mRulesPanePos.y);

	JGeometry::TVec3f vec1 = mPaneStageNameBg->getGlbVtx(GLBVTX_BtmLeft);
	JGeometry::TVec3f vec2 = mPaneStageNameBg->getGlbVtx(GLBVTX_TopRight);
	TVsSelectScreen* scrn  = static_cast<TVsSelectScreen*>(mMainScreen);
	scrn->mCallbackScissor->mBounds.set(vec1.x, vec1.y, vec2.x, vec2.y);

	vec1 = mPaneStageList->getGlbVtx(GLBVTX_BtmLeft);
	vec2 = mPaneStageList->getGlbVtx(GLBVTX_TopRight);
	mScissorBounds.set(vec1.x, vec1.y, vec2.x, vec2.y);

	for (int i = 0; i < 2; i++) {
		mVsPiki[i]->update(mHandicapSel[i]);
		mWinCounter[i]->update();
	}

	mFireScreen->mScreenObj->setAlpha(255.0f * mFireAlphaRate);
	for (int i = 0; i < 3; i++) {
		mButtonMsgTags[i]->setAlpha(255);
	}

	for (int i = 0; i < 2; i++) {
		mVsPiki[i]->setAlpha(255);
	}

	if (mZoomState < 1) {
		mPaneStarAlpha = 1.0f;
		mOtherLevelsFadeAlpha += 0.2f;
		if (mOtherLevelsFadeAlpha > 1.0f) {
			mOtherLevelsFadeAlpha = 1.0f;
		}
	} else {
		mPaneStarAlpha *= 0.9f;
		mOtherLevelsFadeAlpha -= 0.1f;
		if (mOtherLevelsFadeAlpha < 0.0f) {
			mOtherLevelsFadeAlpha = 0.0f;
		}
	}
	mPaneStars->setAlpha(mPaneStarAlpha * 255.0f);

	for (int i = 0; i < mNumActiveRows; i++) {
		mActiveCourseThumbs[i]->updateScale(mWindowScale);
		mActiveCourseThumbs[i]->setBasePosition(J2DPOS_Center);
		mPaneLevelWindows[i]->updateScale(mWindowScale);
		mPaneLevelWindows[i]->setBasePosition(J2DPOS_Center);
		if (i != mCurrActiveRowSel) {
			mIndexPaneList[i]->mPane->setAlpha(mOtherLevelsFadeAlpha * 255.0f);
		} else {
			u8 alpha      = -1;
			J2DPane* pane = mIndexPaneList[i]->mPane;
			if (pane->getAlpha() < 200) {
				alpha = pane->getAlpha() + 50;
			}
			pane->setAlpha(alpha);
		}
	}

	if (mIndexGroup->mStateID == TIndexGroup::IDGroup_Idle) {
		_234 += 0.05f;
		if (_234 > 1.0f) {
			_234 = 1.0f;
		}
	} else {
		_234 *= 0.8f;
	}

	if (mForceResetParm) {
		mForceResetParm           = false;
		TIndexGroup* grp          = mIndexGroup;
		grp->mMaxRollSpeed        = mScrollParm._00;
		grp->mSpeedSlowdownFactor = mScrollParm._04;
		grp->mRollSpeedMod        = mScrollParm._08;
		grp->mSpeedSpeedupFactor  = mScrollParm._0C;
		grp->mInitialRollSpeed    = mScrollParm._10;
	}

	return false;

	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stmw     r27, 0xcc(r1)
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	mr       r30, r3
	cmplwi   r0, 0
	beq      lbl_8039D230
	lbz      r0, 0x28e(r30)
	cmplwi   r0, 0
	beq      lbl_8039D230
	lbz      r0, 0x28c(r30)
	stw      r0, 0x284(r30)
	lbz      r0, 0x28d(r30)
	stw      r0, 0x288(r30)
	bl       changeFaceTexture__Q28Morimura9TVsSelectFv

	lbl_8039D230:
	mr       r3, r30
	bl       updateFacePicture__Q28Morimura9TVsSelectFv
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8039D260
	lbz      r0, mForceDemoStart__Q28Morimura9TVsSelect@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8039D260
	li       r0, 0
	mr       r3, r30
	stb      r0, mForceDemoStart__Q28Morimura9TVsSelect@sda21(r13)
	bl       demoStart__Q28Morimura9TVsSelectFv

	lbl_8039D260:
	lwz      r3, 0xd4(r30)
	li       r31, 0
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_8039D278
	li       r31, 1

	lbl_8039D278:
	lbz      r0, 0x45(r30)
	cmplwi   r0, 0
	beq      lbl_8039D74C
	lwz      r3, 0x1f8(r30)
	lwz      r0, 0x34(r3)
	cmpwi    r0, 0
	bne      lbl_8039D74C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x224(r3)
	lbz      r0, 0xd4(r3)
	cmplwi   r0, 0
	bne      lbl_8039D74C
	lwz      r0, 0x240(r30)
	cmpwi    r0, 0
	bne      lbl_8039D634
	clrlwi.  r0, r31, 0x18
	beq      lbl_8039D3E0
	lwz      r3, 0x80(r30)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_8039D310
	lwz      r3, 0x274(r30)
	addi     r0, r3, 1
	stw      r0, 0x274(r30)
	lwz      r0, 0x274(r30)
	cmplwi   r0, 0xa
	ble      lbl_8039D300
	li       r0, 0xa
	stw      r0, 0x274(r30)
	b        lbl_8039D310

	lbl_8039D300:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1828
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

	lbl_8039D310:
	lwz      r3, 0x80(r30)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_8039D354
	lwz      r3, 0x274(r30)
	addi     r0, r3, -1
	stw      r0, 0x274(r30)
	lwz      r0, 0x274(r30)
	cmplwi   r0, 1
	bge      lbl_8039D344
	li       r0, 1
	stw      r0, 0x274(r30)
	b        lbl_8039D354

	lbl_8039D344:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x182a
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

	lbl_8039D354:
	lwz      r3, 0xb8(r30)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_8039D398
	lwz      r3, 0x278(r30)
	addi     r0, r3, 1
	stw      r0, 0x278(r30)
	lwz      r0, 0x278(r30)
	cmplwi   r0, 0xa
	ble      lbl_8039D388
	li       r0, 0xa
	stw      r0, 0x278(r30)
	b        lbl_8039D398

	lbl_8039D388:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1828
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

	lbl_8039D398:
	lwz      r3, 0xb8(r30)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_8039D46C
	lwz      r3, 0x278(r30)
	addi     r0, r3, -1
	stw      r0, 0x278(r30)
	lwz      r0, 0x278(r30)
	cmplwi   r0, 1
	bge      lbl_8039D3CC
	li       r0, 1
	stw      r0, 0x278(r30)
	b        lbl_8039D46C

	lbl_8039D3CC:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x182a
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8039D46C

	lbl_8039D3E0:
	lwz      r4, 0x80(r30)
	lis      r3, 0x02020022@ha
	addi     r0, r3, 0x02020022@l
	lwz      r4, 0x1c(r4)
	and.     r0, r4, r0
	beq      lbl_8039D42C
	lbz      r0, 0x22c(r30)
	cmplwi   r0, 0
	bne      lbl_8039D46C
	lbz      r0, 0x22d(r30)
	cmplwi   r0, 0
	bne      lbl_8039D46C
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1811
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	li       r0, 1
	stb      r0, 0x22d(r30)
	b        lbl_8039D46C

	lbl_8039D42C:
	lis      r3, 0x01010041@ha
	addi     r0, r3, 0x01010041@l
	and.     r0, r4, r0
	beq      lbl_8039D46C
	lbz      r0, 0x22c(r30)
	cmplwi   r0, 0
	beq      lbl_8039D46C
	lbz      r0, 0x22d(r30)
	cmplwi   r0, 0
	bne      lbl_8039D46C
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1811
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	li       r0, 1
	stb      r0, 0x22d(r30)

	lbl_8039D46C:
	lwz      r4, 0x80(r30)
	lwz      r3, 0x1c(r4)
	rlwinm.  r0, r3, 0, 0x16, 0x16
	beq      lbl_8039D4D8
	clrlwi.  r0, r31, 0x18
	beq      lbl_8039D4BC
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x23c(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x224(r3)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_8039D74C

	lbl_8039D4BC:
	lwz      r3, 0xd4(r30)
	bl       closeWindow__Q28Morimura24TSelectExplanationWindowFv
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1811
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8039D74C

	lbl_8039D4D8:
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_8039D528
	lwz      r3, 0xd4(r30)
	lfs      f0, lbl_8051F170@sda21(r2)
	lfs      f1, 0x24(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8039D510
	bl       openWindow__Q28Morimura24TSelectExplanationWindowFv
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1811
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8039D74C

	lbl_8039D510:
	bl       closeWindow__Q28Morimura24TSelectExplanationWindowFv
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1811
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8039D74C

	lbl_8039D528:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8039D74C
	andi.    r0, r3, 0x1100
	beq      lbl_8039D570
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8039D554
	li       r0, 1
	mr       r3, r30
	stb      r0, 0x228(r30)
	bl       demoStart__Q28Morimura9TVsSelectFv

	lbl_8039D554:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1800
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0xd4(r30)
	bl       closeWindow__Q28Morimura24TSelectExplanationWindowFv
	b        lbl_8039D74C

	lbl_8039D570:
	lwz      r3, 0x18(r4)
	rlwinm.  r0, r3, 0, 4, 4
	bne      lbl_8039D584
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_8039D5D4

	lbl_8039D584:
	lwz      r0, 0x244(r30)
	cmpwi    r0, 1
	beq      lbl_8039D59C
	lwz      r3, 0x84(r30)
	bl       upIndex__Q28Morimura11TIndexGroupFv
	b        lbl_8039D74C

	lbl_8039D59C:
	lwz      r3, 0x84(r30)
	lwz      r0, 0x20(r3)
	cmpwi    r0, 0
	bne      lbl_8039D74C
	lbz      r0, 0x23d(r30)
	cmplwi   r0, 0
	bne      lbl_8039D74C
	li       r0, 1
	li       r4, 0x1807
	stb      r0, 0x23d(r30)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8039D74C

	lbl_8039D5D4:
	rlwinm.  r0, r3, 0, 5, 5
	bne      lbl_8039D5E4
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_8039D74C

	lbl_8039D5E4:
	lwz      r0, 0x244(r30)
	cmpwi    r0, 2
	beq      lbl_8039D5FC
	lwz      r3, 0x84(r30)
	bl       downIndex__Q28Morimura11TIndexGroupFv
	b        lbl_8039D74C

	lbl_8039D5FC:
	lwz      r3, 0x84(r30)
	lwz      r0, 0x20(r3)
	cmpwi    r0, 0
	bne      lbl_8039D74C
	lbz      r0, 0x23d(r30)
	cmplwi   r0, 0
	bne      lbl_8039D74C
	li       r0, 1
	li       r4, 0x1807
	stb      r0, 0x23d(r30)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8039D74C

	lbl_8039D634:
	lbz      r0, mCanCancel__Q28Morimura9TVsSelect@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8039D74C
	lwz      r3, 0x80(r30)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8039D74C
	li       r0, 0
	stb      r0, mCanCancel__Q28Morimura9TVsSelect@sda21(r13)
	lwz      r0, 0x240(r30)
	cmpwi    r0, 1
	beq      lbl_8039D66C
	lfs      f0, mZoomFrameMax__Q28Morimura9TVsSelect@sda21(r13)
	stfs     f0, 0x250(r30)

	lbl_8039D66C:
	li       r0, 2
	li       r4, 0x1801
	stw      r0, 0x240(r30)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lis      r3, sincosTable___5JMath@ha
	li       r0, 2
	mr       r5, r30
	lfs      f3, lbl_8051F244@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	lfs      f2, lbl_8051F170@sda21(r2)
	lfs      f1, lbl_8051F1B4@sda21(r2)
	mtctr    r0

	lbl_8039D6A4:
	lwz      r6, 0x1e8(r5)
	lfs      f4, 0x2c(r6)
	lfs      f5, 0xc(r6)
	fcmpo    cr0, f4, f2
	lfs      f6, 0x10(r6)
	bge      lbl_8039D6E8
	lfs      f0, lbl_8051F1B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8039D70C

	lbl_8039D6E8:
	lfs      f0, lbl_8051F1B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

	lbl_8039D70C:
	fcmpo    cr0, f4, f2
	fmadds   f5, f3, f0, f5
	bge      lbl_8039D71C
	fneg     f4, f4

	lbl_8039D71C:
	fmuls    f0, f4, f1
	addi     r5, r5, 4
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f6, f3, f0, f6
	stfs     f5, 0x14(r6)
	stfs     f6, 0x18(r6)
	bdnz     lbl_8039D6A4

	lbl_8039D74C:
	lwz      r0, 0x274(r30)
	mulli    r0, r0, 5
	stw      r0, 0x27c(r30)
	lwz      r0, 0x278(r30)
	mulli    r0, r0, 5
	stw      r0, 0x280(r30)
	lbz      r3, 0x23d(r30)
	cmplwi   r3, 0
	beq      lbl_8039D78C
	addi     r0, r3, 1
	stb      r0, 0x23d(r30)
	lbz      r0, 0x23d(r30)
	cmplwi   r0, 0xf
	ble      lbl_8039D78C
	li       r0, 0
	stb      r0, 0x23d(r30)

	lbl_8039D78C:
	lwz      r3, 0x1f8(r30)
	lwz      r0, 0x34(r3)
	cmpwi    r0, 1
	beq      lbl_8039D7E8
	lwz      r3, 0x10(r3)
	lwz      r0, 8(r3)
	cmpwi    r0, 1
	bne      lbl_8039D7E8
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8039D7E8
	li       r3, 0
	li       r0, 1
	stb      r3, 0x228(r30)
	mr       r3, r30
	lwz      r4, 0x1f8(r30)
	stw      r0, 0x34(r4)
	lwz      r12, 0(r30)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg

	lbl_8039D7E8:
	lwz      r3, 0xc0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xbc(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x7c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc8(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       updateList__Q28Morimura11TScrollListFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8039D8A8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1802
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

	lbl_8039D8A8:
	lwz      r0, 0x240(r30)
	cmpwi    r0, 3
	beq      lbl_8039D8D8
	bge      lbl_8039D8EC
	cmpwi    r0, 1
	bge      lbl_8039D8C4
	b        lbl_8039D8EC

	lbl_8039D8C4:
	mr       r3, r30
	bl       doZoom__Q28Morimura9TVsSelectFv
	mr       r3, r30
	bl       doMoveOnyon__Q28Morimura9TVsSelectFv
	b        lbl_8039DBA8

	lbl_8039D8D8:
	mr       r3, r30
	bl       doMoveOnyon__Q28Morimura9TVsSelectFv
	mr       r3, r30
	bl       doScreenEffect__Q28Morimura9TVsSelectFv
	b        lbl_8039DBA8

	lbl_8039D8EC:
	lfs      f1, 0x250(r30)
	lfs      f0, lbl_8051F180@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x250(r30)
	lbz      r0, 0x22b(r30)
	cmplwi   r0, 0
	beq      lbl_8039DB84
	lfs      f1, lbl_8051F248@sda21(r2)
	lfs      f0, 0x250(r30)
	fcmpu    cr0, f1, f0
	bne      lbl_8039DB84
	li       r0, 0
	stb      r0, 0x22b(r30)
	lwz      r3, 0x1f8(r30)
	lwz      r0, 0x2c(r3)
	cmpwi    r0, 0
	bne      lbl_8039DA54
	lwz      r3, 0x24(r3)
	li       r0, 1
	lfs      f0, lbl_8051F21C@sda21(r2)
	stw      r3, 0x284(r30)
	lwz      r3, 0x210(r30)
	stb      r0, 0xac(r3)
	lwz      r3, 0x1f8(r30)
	lwz      r0, 0x24(r3)
	cmpwi    r0, 0x64
	blt      lbl_8039D960
	lfs      f0, lbl_8051F220@sda21(r2)
	b        lbl_8039D96C

	lbl_8039D960:
	cmpwi    r0, 0xa
	blt      lbl_8039D96C
	lfs      f0, lbl_8051F1EC@sda21(r2)

	lbl_8039D96C:
	lwz      r4, 0x200(r30)
	lis      r3, 0x72695F63@ha
	addi     r6, r3, 0x72695F63@l
	li       r5, 0x506f
	stfs     f0, 0x14(r4)
	lwz      r3, 0x7c(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r4, 4
	mr       r28, r3
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	mr       r4, r28
	addi     r3, r1, 0x74
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x28(r28)
	mr       r4, r28
	lfs      f0, 0x20(r28)
	addi     r3, r1, 0x68
	lfs      f2, 0x74(r1)
	li       r5, 0
	fsubs    f0, f1, f0
	lfs      f1, lbl_8051F188@sda21(r2)
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x18(r1)
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x2c(r28)
	lis      r3, __vt__Q25efx2d3Arg@ha
	lfs      f0, 0x24(r28)
	addi     r0, r3, __vt__Q25efx2d3Arg@l
	lwz      r3, 0x18(r1)
	addi     r4, r1, 0x9c
	fsubs    f0, f1, f0
	lfs      f2, 0x6c(r1)
	lfs      f1, lbl_8051F188@sda21(r2)
	stw      r3, 0x10(r1)
	fmadds   f1, f1, f0, f2
	lfs      f0, 0x10(r1)
	stw      r0, 0xa4(r1)
	stfs     f1, 0x1c(r1)
	lwz      r0, 0x1c(r1)
	stfs     f0, 0x9c(r1)
	stw      r0, 0x14(r1)
	lfs      f0, 0x14(r1)
	stfs     f0, 0xa0(r1)
	lwz      r3, 0x200(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1873
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8039DB7C

	lbl_8039DA54:
	cmpwi    r0, 1
	bne      lbl_8039DB7C
	lwz      r3, 0x28(r3)
	li       r0, 1
	lfs      f0, lbl_8051F21C@sda21(r2)
	stw      r3, 0x288(r30)
	lwz      r3, 0x214(r30)
	stb      r0, 0xac(r3)
	lwz      r3, 0x1f8(r30)
	lwz      r0, 0x28(r3)
	cmpwi    r0, 0x64
	blt      lbl_8039DA8C
	lfs      f0, lbl_8051F220@sda21(r2)
	b        lbl_8039DA98

	lbl_8039DA8C:
	cmpwi    r0, 0xa
	blt      lbl_8039DA98
	lfs      f0, lbl_8051F1EC@sda21(r2)

	lbl_8039DA98:
	lwz      r4, 0x200(r30)
	lis      r3, 0x75695F63@ha
	addi     r6, r3, 0x75695F63@l
	li       r5, 0x506c
	stfs     f0, 0x14(r4)
	lwz      r3, 0x7c(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r4, 4
	mr       r28, r3
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	mr       r4, r28
	addi     r3, r1, 0x5c
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x28(r28)
	mr       r4, r28
	lfs      f0, 0x20(r28)
	addi     r3, r1, 0x50
	lfs      f2, 0x5c(r1)
	li       r5, 0
	fsubs    f0, f1, f0
	lfs      f1, lbl_8051F188@sda21(r2)
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x18(r1)
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x2c(r28)
	lis      r3, __vt__Q25efx2d3Arg@ha
	lfs      f0, 0x24(r28)
	addi     r0, r3, __vt__Q25efx2d3Arg@l
	lwz      r3, 0x18(r1)
	addi     r4, r1, 0x90
	fsubs    f0, f1, f0
	lfs      f2, 0x54(r1)
	lfs      f1, lbl_8051F188@sda21(r2)
	stw      r3, 8(r1)
	fmadds   f1, f1, f0, f2
	lfs      f0, 8(r1)
	stw      r0, 0x98(r1)
	stfs     f1, 0x1c(r1)
	lwz      r0, 0x1c(r1)
	stfs     f0, 0x90(r1)
	stw      r0, 0xc(r1)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x94(r1)
	lwz      r3, 0x200(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1873
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

	lbl_8039DB7C:
	mr       r3, r30
	bl       changeFaceTexture__Q28Morimura9TVsSelectFv

	lbl_8039DB84:
	lfs      f1, 0x250(r30)
	lfs      f0, lbl_8051F24C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8039DBA8
	lwz      r3, 0x200(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

	lbl_8039DBA8:
	lfs      f0, 0x26c(r30)
	lfs      f5, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lwz      r3, 0xc0(r30)
	fadds    f3, f0, f5
	lfs      f1, lbl_8051F170@sda21(r2)
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lwz      r3, 8(r3)
	fadds    f2, f1, f0
	lfs      f4, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stfs     f3, 0x140(r3)
	lfs      f3, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	stfs     f2, 0x144(r3)
	lfs      f0, lbl_8051F180@sda21(r2)
	lfs      f1, 0x26c(r30)
	lwz      r3, 0x7c(r30)
	fadds    f1, f1, f5
	lwz      r3, 8(r3)
	stfs     f1, 0x140(r3)
	stfs     f2, 0x144(r3)
	lfs      f1, 0x26c(r30)
	lwz      r3, 0xbc(r30)
	fadds    f1, f1, f5
	lwz      r3, 8(r3)
	stfs     f1, 0x140(r3)
	stfs     f2, 0x144(r3)
	lfs      f1, 0x26c(r30)
	lwz      r3, 0xd0(r30)
	fadds    f1, f1, f5
	lwz      r3, 8(r3)
	stfs     f1, 0x140(r3)
	stfs     f2, 0x144(r3)
	lfs      f1, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
	lwz      r3, 0xc0(r30)
	fmuls    f2, f1, f4
	lwz      r3, 8(r3)
	fmuls    f1, f1, f3
	stfs     f2, 0x138(r3)
	stfs     f1, 0x13c(r3)
	lfs      f1, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
	lwz      r3, 0x7c(r30)
	fmuls    f2, f1, f4
	lwz      r3, 8(r3)
	fmuls    f1, f1, f3
	stfs     f2, 0x138(r3)
	stfs     f1, 0x13c(r3)
	lfs      f1, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
	lwz      r3, 0xbc(r30)
	fmuls    f2, f1, f4
	lwz      r3, 8(r3)
	fmuls    f1, f1, f3
	stfs     f2, 0x138(r3)
	stfs     f1, 0x13c(r3)
	lfs      f1, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
	lwz      r3, 0xd0(r30)
	fmuls    f2, f1, f4
	lwz      r3, 8(r3)
	fmuls    f1, f1, f3
	stfs     f2, 0x138(r3)
	stfs     f1, 0x13c(r3)
	lfs      f2, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
	lfs      f1, 0x26c(r30)
	fdivs    f3, f0, f2
	lwz      r3, 0xe0(r30)
	fneg     f0, f1
	stfs     f3, 0xcc(r3)
	stfs     f3, 0xd0(r3)
	fdivs    f30, f0, f2
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f4, lbl_8051F180@sda21(r2)
	lfs      f0, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
	lfs      f1, lbl_8051F25C@sda21(r2)
	fdivs    f3, f4, f0
	lfs      f0, lbl_8051F258@sda21(r2)
	lfs      f5, lbl_8051F254@sda21(r2)
	lfs      f2, lbl_8051F250@sda21(r2)
	lwz      r3, 0xe0(r30)
	fmadds   f0, f1, f30, f0
	fsubs    f3, f4, f3
	stfs     f0, 0xd4(r3)
	fnmsubs  f1, f5, f3, f2
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x84(r30)
	lfs      f4, lbl_8051F170@sda21(r2)
	lwz      r3, 0x20(r3)
	subfic   r0, r3, 1
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_8039DD28
	lfs      f4, lbl_8051F1F4@sda21(r2)

	lbl_8039DD28:
	cmpwi    r3, 2
	bne      lbl_8039DD34
	lfs      f4, lbl_8051F1E8@sda21(r2)

	lbl_8039DD34:
	lfs      f2, 0x230(r30)
	lfs      f3, lbl_8051F238@sda21(r2)
	fsubs    f1, f4, f2
	lfs      f0, lbl_8051F1D8@sda21(r2)
	fmadds   f1, f3, f1, f2
	stfs     f1, 0x230(r30)
	lfs      f1, 0x230(r30)
	fsubs    f1, f1, f4
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8039DD68
	stfs     f4, 0x230(r30)

	lbl_8039DD68:
	lfs      f2, lbl_8051F260@sda21(r2)
	lfs      f1, 0x230(r30)
	lwz      r3, 0xf0(r30)
	lfs      f0, lbl_8051F170@sda21(r2)
	fadds    f1, f2, f1
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2f8(r30)
	lfs      f0, 0x308(r30)
	lfs      f3, 0x2fc(r30)
	lfs      f2, 0x30c(r30)
	fadds    f0, f1, f0
	lwz      r3, 0x100(r30)
	fadds    f1, f3, f2
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x300(r30)
	lfs      f0, 0x310(r30)
	lfs      f3, 0x304(r30)
	lfs      f2, 0x314(r30)
	fadds    f0, f1, f0
	lwz      r3, 0x104(r30)
	fadds    f1, f3, f2
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x22d(r30)
	cmplwi   r0, 0
	beq      lbl_8039DFA4
	lfs      f2, 0x260(r30)
	lfs      f1, 0x264(r30)
	lfs      f0, lbl_8051F1A8@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x260(r30)
	lfs      f1, 0x260(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_8039DE40
	lfs      f0, lbl_8051F170@sda21(r2)
	li       r3, 0
	li       r0, 1
	stfs     f0, 0x260(r30)
	stb      r3, 0x22d(r30)
	stb      r0, 0x22e(r30)

	lbl_8039DE40:
	lbz      r0, 0x22c(r30)
	cmplwi   r0, 0
	beq      lbl_8039DEEC
	lfs      f2, 0x260(r30)
	lfs      f0, lbl_8051F170@sda21(r2)
	lfs      f1, lbl_8051F264@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_8039DE8C
	lfs      f0, lbl_8051F1B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8039DEB0

	lbl_8039DE8C:
	lfs      f0, lbl_8051F1B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

	lbl_8039DEB0:
	fmuls    f0, f1, f0
	stfs     f0, 0x25c(r30)
	lbz      r0, 0x22e(r30)
	cmplwi   r0, 0
	beq      lbl_8039DF8C
	lfs      f1, 0x260(r30)
	lfs      f0, lbl_8051F268@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8039DF8C
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x22c(r30)
	stb      r0, 0x22e(r30)
	bl       changeSlotPage__Q28Morimura9TVsSelectFv
	b        lbl_8039DF8C

	lbl_8039DEEC:
	lfs      f2, 0x260(r30)
	lfs      f0, lbl_8051F170@sda21(r2)
	lfs      f1, lbl_8051F26C@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_8039DF2C
	lfs      f0, lbl_8051F1B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8039DF50

	lbl_8039DF2C:
	lfs      f0, lbl_8051F1B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

	lbl_8039DF50:
	fmuls    f0, f1, f0
	stfs     f0, 0x25c(r30)
	lbz      r0, 0x22e(r30)
	cmplwi   r0, 0
	beq      lbl_8039DF8C
	lfs      f1, 0x260(r30)
	lfs      f0, lbl_8051F268@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8039DF8C
	li       r3, 0
	li       r0, 1
	stb      r3, 0x22e(r30)
	mr       r3, r30
	stb      r0, 0x22c(r30)
	bl       changeSlotPage__Q28Morimura9TVsSelectFv

	lbl_8039DF8C:
	lwz      r3, 0x108(r30)
	li       r0, 0
	stb      r0, 0xb0(r3)
	lwz      r3, 0x10c(r30)
	stb      r0, 0xb0(r3)
	b        lbl_8039E02C

	lbl_8039DFA4:
	lwz      r3, 0x20c(r30)
	bl       calc__Q32og6Screen15ArrowAlphaBlinkFv
	lfs      f0, lbl_8051F270@sda21(r2)
	mr       r31, r30
	li       r28, 0
	fmuls    f0, f0, f1
	fctiwz   f31, f0

	lbl_8039DFC0:
	lwz      r3, 0x108(r31)
	stfd     f31, 0xb8(r1)
	lwz      r12, 0(r3)
	lwz      r4, 0xbc(r1)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r31, r31, 4
	cmpwi    r28, 2
	blt      lbl_8039DFC0
	lbz      r0, 0x22c(r30)
	cmplwi   r0, 0
	bne      lbl_8039E014
	lwz      r3, 0x108(r30)
	li       r4, 0
	li       r0, 1
	stb      r4, 0xb0(r3)
	lwz      r3, 0x10c(r30)
	stb      r0, 0xb0(r3)
	b        lbl_8039E02C

	lbl_8039E014:
	lwz      r3, 0x108(r30)
	li       r4, 1
	li       r0, 0
	stb      r4, 0xb0(r3)
	lwz      r3, 0x10c(r30)
	stb      r0, 0xb0(r3)

	lbl_8039E02C:
	lfs      f1, 0x318(r30)
	lfs      f0, 0x25c(r30)
	lwz      r3, 0x110(r30)
	fadds    f0, f1, f0
	lfs      f1, 0x31c(r30)
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xe8(r30)
	addi     r3, r1, 0x44
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f31, 0x44(r1)
	addi     r3, r1, 0x38
	lfs      f30, 0x48(r1)
	li       r5, 3
	lwz      r4, 0xe8(r30)
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r4, 0x7c(r30)
	addi     r3, r1, 0x2c
	stfs     f31, 0x80(r1)
	li       r5, 0
	lfs      f1, 0x3c(r1)
	stfs     f30, 0x84(r1)
	lfs      f0, 0x38(r1)
	lwz      r6, 0x18(r4)
	lwz      r4, 0x80(r1)
	stfs     f0, 0x88(r1)
	lwz      r0, 0x84(r1)
	stw      r4, 0x1c(r6)
	lwz      r4, 0x88(r1)
	stw      r0, 0x20(r6)
	stfs     f1, 0x8c(r1)
	lwz      r0, 0x8c(r1)
	stw      r4, 0x24(r6)
	stw      r0, 0x28(r6)
	lwz      r4, 0xe4(r30)
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f30, 0x2c(r1)
	addi     r3, r1, 0x20
	lfs      f31, 0x30(r1)
	li       r5, 3
	lwz      r4, 0xe4(r30)
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f0, 0x20(r1)
	mr       r31, r30
	lfs      f1, 0x24(r1)
	li       r28, 0
	stfs     f30, 0x218(r30)
	stfs     f31, 0x21c(r30)
	stfs     f0, 0x220(r30)
	stfs     f1, 0x224(r30)

	lbl_8039E108:
	lwz      r3, 0x1f0(r31)
	lwz      r4, 0x274(r31)
	bl       update__Q28Morimura7TVsPikiFi
	lwz      r3, 0x210(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r31, r31, 4
	cmpwi    r28, 2
	blt      lbl_8039E108
	lfs      f1, lbl_8051F270@sda21(r2)
	lfs      f0, mFireAlphaRate__Q28Morimura9TVsSelect@sda21(r13)
	lwz      r3, 0xd0(r30)
	fmuls    f0, f1, f0
	lwz      r3, 8(r3)
	fctiwz   f0, f0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	stfd     f0, 0xb8(r1)
	lwz      r4, 0xbc(r1)
	mtctr    r12
	bctrl
	li       r28, 0
	mr       r31, r30

	lbl_8039E170:
	lwz      r3, 0xf4(r31)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r31, r31, 4
	cmpwi    r28, 3
	blt      lbl_8039E170
	li       r27, 0
	mr       r28, r30

	lbl_8039E1A0:
	li       r31, 0
	lwz      r29, 0x1f0(r28)

	lbl_8039E1A8:
	lwz      r3, 0(r29)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1
	addi     r29, r29, 4
	cmpwi    r31, 3
	blt      lbl_8039E1A8
	addi     r27, r27, 1
	addi     r28, r28, 4
	cmpwi    r27, 2
	blt      lbl_8039E1A0
	lwz      r0, 0x240(r30)
	cmpwi    r0, 1
	bge      lbl_8039E218
	lfs      f2, lbl_8051F180@sda21(r2)
	lfs      f0, lbl_8051F274@sda21(r2)
	stfs     f2, 0x238(r30)
	lfs      f1, 0x258(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x258(r30)
	lfs      f0, 0x258(r30)
	fcmpo    cr0, f0, f2
	ble      lbl_8039E24C
	stfs     f2, 0x258(r30)
	b        lbl_8039E24C

	lbl_8039E218:
	lfs      f2, 0x238(r30)
	lfs      f0, lbl_8051F278@sda21(r2)
	lfs      f1, lbl_8051F1D8@sda21(r2)
	fmuls    f2, f2, f0
	lfs      f0, lbl_8051F170@sda21(r2)
	stfs     f2, 0x238(r30)
	lfs      f2, 0x258(r30)
	fsubs    f1, f2, f1
	stfs     f1, 0x258(r30)
	lfs      f1, 0x258(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8039E24C
	stfs     f0, 0x258(r30)

	lbl_8039E24C:
	lfs      f1, lbl_8051F270@sda21(r2)
	lfs      f0, 0x238(r30)
	lwz      r3, 0xec(r30)
	fmuls    f0, f1, f0
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 0xb8(r1)
	lwz      r4, 0xbc(r1)
	mtctr    r12
	bctrl
	mr       r28, r30
	li       r27, 0
	li       r29, 0
	b        lbl_8039E364

	lbl_8039E288:
	lwz      r3, 0x140(r28)
	lfs      f0, mWindowScale__Q28Morimura9TVsSelect@sda21(r13)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x140(r28)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 0x12c(r28)
	lfs      f0, mWindowScale__Q28Morimura9TVsSelect@sda21(r13)
	stfs     f0, 0xcc(r3)
	stfs     f0, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x12c(r28)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r0, 0x94(r30)
	cmpw     r27, r0
	beq      lbl_8039E324
	lwz      r3, 0x88(r30)
	lfs      f1, lbl_8051F270@sda21(r2)
	lfs      f0, 0x258(r30)
	lwzx     r3, r3, r29
	fmuls    f0, f1, f0
	lwz      r3, 4(r3)
	fctiwz   f0, f0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	stfd     f0, 0xb8(r1)
	lwz      r4, 0xbc(r1)
	mtctr    r12
	bctrl
	b        lbl_8039E358

	lbl_8039E324:
	lwz      r3, 0x88(r30)
	li       r4, 0xff
	lwzx     r3, r3, r29
	lwz      r3, 4(r3)
	lbz      r5, 0xb2(r3)
	cmplwi   r5, 0xc8
	bge      lbl_8039E348
	addi     r0, r5, 0x32
	clrlwi   r4, r0, 0x18

	lbl_8039E348:
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

	lbl_8039E358:
	addi     r28, r28, 4
	addi     r29, r29, 4
	addi     r27, r27, 1

	lbl_8039E364:
	lha      r0, 0x8e(r30)
	cmpw     r27, r0
	blt      lbl_8039E288
	lwz      r3, 0x84(r30)
	lwz      r0, 0x20(r3)
	cmpwi    r0, 0
	bne      lbl_8039E3A8
	lfs      f2, 0x234(r30)
	lfs      f1, lbl_8051F1CC@sda21(r2)
	lfs      f0, lbl_8051F180@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x234(r30)
	lfs      f1, 0x234(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_8039E3B8
	stfs     f0, 0x234(r30)
	b        lbl_8039E3B8

	lbl_8039E3A8:
	lfs      f1, 0x234(r30)
	lfs      f0, lbl_8051F1F8@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x234(r30)

	lbl_8039E3B8:
	lbz      r0, mForceResetParm__Q28Morimura11TScrollList@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8039E3FC
	li       r0, 0
	lis      r3, mScrollParm__Q28Morimura9TVsSelect@ha
	stb      r0, mForceResetParm__Q28Morimura11TScrollList@sda21(r13)
	lfsu     f0, mScrollParm__Q28Morimura9TVsSelect@l(r3)
	lwz      r4, 0x84(r30)
	stfs     f0, 0(r4)
	lfs      f0, 4(r3)
	stfs     f0, 4(r4)
	lfs      f0, 8(r3)
	stfs     f0, 8(r4)
	lfs      f0, 0xc(r3)
	stfs     f0, 0xc(r4)
	lfs      f0, 0x10(r3)
	stfs     f0, 0x10(r4)

	lbl_8039E3FC:
	li       r3, 0
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	lmw      r27, 0xcc(r1)
	lwz      r0, 0x104(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/**
 * @note Address: 0x8039E454
 * @note Size: 0xAF0
 */
void TVsSelect::doDraw(Graphics& gfx)
{
	j3dSys.drawInit();
	if (mZoomState > 0) {
		if (mIsSection) {
			GXSetPixelFmt(GX_PF_RGBA6_Z24, GX_ZC_LINEAR);
		}
		gfx.mOrthoGraph.setPort();
		GXSetAlphaUpdate(GX_TRUE);
		GXSetColorUpdate(GX_TRUE);
		mIndPic->draw(0.0f, 0.0f, 336.0f, 240.0f, false, false, false);
		Graphics::dirtyInitGX();
		Graphics::initGX();
		GXSetColorUpdate(GX_FALSE);
		GXSetDstAlpha(GX_TRUE, 0);
		GXSetBlendMode(GX_BM_BLEND, GX_BL_ONE, GX_BL_ZERO, GX_LO_CLEAR);
		GXSetNumTexGens(0);
		GXSetNumIndStages(0);
		GXSetNumChans(1);

		JUtility::TColor color(0, 0, 0, 255);
		GXSetChanMatColor(GX_COLOR0A0, color);

		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
		GXSetCullMode(GX_CULL_NONE);
		GXSetNumTevStages(1);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);

		Mtx mtx;
		PSMTXIdentity(mtx);
		GXLoadPosMtxImm(mtx, 0);
		GXLoadTexMtxImm(mtx, 0x1e, GX_MTX2x4);

		GXSetCurrentMtx(0);
		GXClearVtxDesc();

		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
		GXBegin(GX_QUADS, GX_VTXFMT0, 4);

		f32 zero = 0.0f;
		f32 pos1 = 386.0f;
		f32 pos2 = 290.0f;

		GXTexCoord2f32(zero, zero);
		GXTexCoord2f32(zero, pos1);

		GXTexCoord2f32(zero, zero);
		GXTexCoord2f32(pos1, pos2);

		GXTexCoord2f32(zero, zero);
		GXTexCoord2f32(pos2, zero);

		J2DPicture pics[2];
		pics[0] = J2DPicture("navi_l.bti");
		pics[1] = J2DPicture("navi_l.bti");

		GXSetDstAlpha(GX_TRUE, 0xff);

		for (int i = 0; i < 2; i++) {
			if (mOnyonObj[i]->_30 > 0.0f) {
				mIsOnyonHitGoal       = true;
				TVsSelectOnyon* onyon = mOnyonObj[i];
				f32 scale             = onyon->_30 * 25.0f;
				f32 y                 = mOnyonGoalOffset.y + (onyon->mCurrentPosition.y - _294) / (_29C / _294);
				f32 x                 = mOnyonGoalOffset.x + (onyon->mCurrentPosition.x - _290) / (_298 / _290);
				pics[i].setBasePosition(J2DPOS_Center);
				pics[i].draw((x * 336.0f) - (scale * 0.5f), (y) - (scale * 0.5f), scale, scale, false, false, false);
			}
		}

		GXSetDstAlpha(GX_TRUE, 0xff);
		mIndPane->mTexture3->init();
		GXSetDstAlpha(GX_FALSE, 0);
		GXSetAlphaUpdate(GX_FALSE);
		GXSetColorUpdate(GX_TRUE);
		mIndPane->draw();
		GXSetDstAlpha(GX_FALSE, 255);
		GXSetAlphaUpdate(GX_TRUE);
		GXSetColorUpdate(GX_FALSE);

		gfx.mOrthoGraph.setPort();
		mIndPic->draw(0.0f, 0.0f, 336.0f, 240.0f, false, false, false);
		GXInvalidateTexAll();
		mIndPane->mTexture3->capture(0, 0, (GXTexFmt)mIndPane->mTexture3->mTexInfo->mTextureFormat, false, 0);
		GXSetColorUpdate(GX_TRUE);
		gfx.mPerspGraph.setPort();
	}

	J2DPerspGraph* graf = &gfx.mPerspGraph;
	graf->setPort();
	mBackgroundScreen->draw(gfx, graf);

	JGeometry::TBox2f bounds;
	bounds = mScissorBounds;
	GXSetScissor(bounds.i.x, bounds.i.y, bounds.getWidth(), bounds.getHeight());
	mListScreen->draw(gfx, graf);
	GXSetScissor(0, 0, 640, 480);

	mMainScreen->draw(gfx, graf);

	if (mZoomState) {
		mRedPodScreen->draw(gfx, graf);
		mBluePodScreen->draw(gfx, graf);
	}

	gfx.mOrthoGraph.setPort();

	for (int i = 0; i < 2; i++) {
		mVsPiki[i]->draw();
	}

	if (mZoomState >= 3) {
		for (int i = 0; i < 2; i++) {
			mOnyonObj[i]->draw();
		}
	}

	gfx.mPerspGraph.setPort();
	mRulesWindow->draw(gfx, graf);
	mFireScreen->draw(gfx, graf);

	bool needBG           = false;
	TVsSelectScene* owner = static_cast<TVsSelectScene*>(getOwner());
	if (owner->mConfirmEndWindow->mHasDrawn) {
		needBG = true;

		owner = static_cast<TVsSelectScene*>(getOwner());
		if (owner->mConfirmEndWindow->mIsActive) {
			mDrawAlpha += 20;
			if (mDrawAlpha > 200) {
				mDrawAlpha = 200;
			}
		} else {
			if (mDrawAlpha > 20) {
				mDrawAlpha -= 20;
			} else {
				mDrawAlpha = 0;
			}
		}
	}

	if (needBG) {
		JUtility::TColor c;
		c.set(0, 0, 0, 0);
		c.a = mDrawAlpha;
		graf->setColor(c);
		GXSetAlphaUpdate(GX_FALSE);
		u32 y    = System::getRenderModeObj()->efbHeight;
		u32 x    = System::getRenderModeObj()->fbWidth;
		f32 zero = 0.0f;
		JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
		graf->fillBox(box);
		GXSetAlphaUpdate(GX_TRUE);
	}

	if (mRulesWindow->mState) {
		gfx.mOrthoGraph.setPort();
		for (int i = 0; i < 6; i++) {
			int baseID = 0;
			if (mCurrentRulesPage == 0) {
				baseID = 6;
			}
			J2DPictureEx* pane = (J2DPictureEx*)mPowerIconPanes[baseID + i];
			f32 width          = pane->getWidth();
			f32 height         = pane->getHeight();
			pane->draw(mPowerIconOffset.x + (width / 2 - mPaneRulesIcons[i]->mGlobalMtx[0][3]),
			           mPowerIconOffset.y + (height / 2 - mPaneRulesIcons[i]->mGlobalMtx[1][3]), width, height, false, false, false);
			mPowerIconPanes[baseID + i]->calcMtx();
		}
		gfx.mPerspGraph.setPort();
	}

	JUtility::TColor c;
	c.set(0, 0, 0, 255 - mFadeAlpha);
	graf->setColor(c);
	GXSetAlphaUpdate(GX_FALSE);
	u32 y    = System::getRenderModeObj()->efbHeight;
	u32 x    = System::getRenderModeObj()->fbWidth;
	f32 zero = 0.0f;
	JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
	graf->fillBox(box);
	GXSetAlphaUpdate(GX_TRUE);

	/*
	stwu     r1, -0x6e0(r1)
	mflr     r0
	stw      r0, 0x6e4(r1)
	stfd     f31, 0x6d0(r1)
	psq_st   f31, 1752(r1), 0, qr0
	stfd     f30, 0x6c0(r1)
	psq_st   f30, 1736(r1), 0, qr0
	stfd     f29, 0x6b0(r1)
	psq_st   f29, 1720(r1), 0, qr0
	stfd     f28, 0x6a0(r1)
	psq_st   f28, 1704(r1), 0, qr0
	stmw     r26, 0x688(r1)
	lis      r5, j3dSys@ha
	mr       r27, r3
	addi     r3, r5, j3dSys@l
	mr       r28, r4
	bl       drawInit__6J3DSysFv
	lwz      r0, 0x240(r27)
	cmpwi    r0, 0
	ble      lbl_8039E8C0
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8039E4BC
	li       r3, 1
	li       r4, 0
	bl       GXSetPixelFmt

lbl_8039E4BC:
	addi     r3, r28, 0xbc
	lwz      r12, 0xbc(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	bl       GXSetAlphaUpdate
	li       r3, 1
	bl       GXSetColorUpdate
	lwz      r3, 0x1e4(r27)
	li       r4, 0
	lfs      f1, lbl_8051F170@sda21(r2)
	li       r5, 0
	lwz      r12, 0(r3)
	li       r6, 0
	fmr      f2, f1
	lfs      f3, lbl_8051F23C@sda21(r2)
	lwz      r12, 0xec(r12)
	lfs      f4, lbl_8051F240@sda21(r2)
	mtctr    r12
	bctrl
	bl       dirtyInitGX__8GraphicsFv
	bl       initGX__8GraphicsFv
	li       r3, 0
	bl       GXSetColorUpdate
	li       r3, 1
	li       r4, 0
	bl       GXSetDstAlpha
	li       r3, 1
	li       r4, 1
	li       r5, 0
	li       r6, 0
	bl       GXSetBlendMode
	li       r3, 0
	bl       GXSetNumTexGens
	li       r3, 0
	bl       GXSetNumIndStages
	li       r3, 1
	bl       GXSetNumChans
	li       r5, 0
	li       r0, 0xff
	stb      r5, 0x30(r1)
	addi     r4, r1, 0x34
	li       r3, 4
	stb      r5, 0x31(r1)
	stb      r5, 0x32(r1)
	stb      r0, 0x33(r1)
	lwz      r0, 0x30(r1)
	stw      r0, 0x34(r1)
	bl       GXSetChanMatColor
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 0
	bl       GXSetCullMode
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
	addi     r3, r1, 0xa8
	bl       PSMTXIdentity
	addi     r3, r1, 0xa8
	li       r4, 0
	bl       GXLoadPosMtxImm
	addi     r3, r1, 0xa8
	li       r4, 0x1e
	li       r5, 1
	bl       GXLoadTexMtxImm
	li       r3, 0
	bl       GXSetCurrentMtx
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
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f2, lbl_8051F170@sda21(r2)
	lis      r4, 0xCC008000@ha
	lfs      f1, lbl_8051F27C@sda21(r2)
	addi     r3, r1, 0x3a8
	stfs     f2, 0xCC008000@l(r4)
	lfs      f0, lbl_8051F280@sda21(r2)
	stfs     f2, -0x8000(r4)
	stfs     f2, -0x8000(r4)
	stfs     f1, -0x8000(r4)
	stfs     f2, -0x8000(r4)
	stfs     f2, -0x8000(r4)
	stfs     f1, -0x8000(r4)
	stfs     f0, -0x8000(r4)
	stfs     f2, -0x8000(r4)
	stfs     f2, -0x8000(r4)
	stfs     f0, -0x8000(r4)
	stfs     f2, -0x8000(r4)
	bl       __ct__10J2DPictureFv
	addi     r30, r1, 0x510
	mr       r3, r30
	bl       __ct__10J2DPictureFv
	lis      r4, lbl_80495184@ha
	addi     r3, r1, 0x240
	addi     r4, r4, lbl_80495184@l
	bl       __ct__10J2DPictureFPCc
	addi     r3, r1, 0x3a8
	addi     r4, r1, 0x240
	bl       __as__10J2DPictureFRC10J2DPicture
	addi     r3, r1, 0x240
	li       r4, -1
	bl       __dt__10J2DPictureFv
	lis      r4, lbl_80495184@ha
	addi     r3, r1, 0xd8
	addi     r4, r4, lbl_80495184@l
	bl       __ct__10J2DPictureFPCc
	mr       r3, r30
	addi     r4, r1, 0xd8
	bl       __as__10J2DPictureFRC10J2DPicture
	addi     r3, r1, 0xd8
	li       r4, -1
	bl       __dt__10J2DPictureFv
	li       r3, 1
	li       r4, 0xff
	bl       GXSetDstAlpha
	lfs      f31, lbl_8051F170@sda21(r2)
	mr       r26, r27
	addi     r29, r1, 0x3a8
	li       r31, 0

lbl_8039E6F8:
	lwz      r3, 0x1e8(r26)
	lfs      f0, 0x30(r3)
	fcmpo    cr0, f0, f31
	ble      lbl_8039E7A8
	li       r0, 1
	lfs      f6, lbl_8051F284@sda21(r2)
	stb      r0, 0x22a(r27)
	mr       r3, r29
	lfs      f3, lbl_8051F240@sda21(r2)
	li       r4, 4
	lwz      r5, 0x1e8(r26)
	lfs      f5, 0x294(r27)
	lfs      f1, 0x10(r5)
	lfs      f0, 0x29c(r27)
	fsubs    f1, f1, f5
	lfs      f2, 0x2a4(r27)
	lfs      f4, 0xc(r5)
	fsubs    f0, f0, f5
	lfs      f8, 0x290(r27)
	fadds    f1, f2, f1
	lfs      f2, 0x298(r27)
	fsubs    f4, f4, f8
	lfs      f5, 0x2a0(r27)
	fdivs    f0, f1, f0
	lfs      f7, 0x30(r5)
	fadds    f4, f5, f4
	fsubs    f1, f2, f8
	fmuls    f29, f6, f7
	fmuls    f30, f3, f0
	fdivs    f28, f4, f1
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lfs      f1, lbl_8051F188@sda21(r2)
	fmr      f3, f29
	lfs      f0, lbl_8051F23C@sda21(r2)
	fmr      f4, f29
	fmuls    f1, f1, f29
	mr       r3, r29
	fmuls    f0, f0, f28
	li       r4, 0
	li       r5, 0
	fsubs    f2, f30, f1
	fsubs    f1, f0, f1
	li       r6, 0
	bl       draw__10J2DPictureFffffbbb

lbl_8039E7A8:
	addi     r31, r31, 1
	addi     r29, r29, 0x168
	cmpwi    r31, 2
	addi     r26, r26, 4
	blt      lbl_8039E6F8
	li       r3, 1
	li       r4, 0xff
	bl       GXSetDstAlpha
	lwz      r3, 0xd8(r27)
	lwz      r3, 0x20(r3)
	bl       init__10JUTTextureFv
	li       r3, 0
	li       r4, 0
	bl       GXSetDstAlpha
	li       r3, 0
	bl       GXSetAlphaUpdate
	li       r3, 1
	bl       GXSetColorUpdate
	lwz      r3, 0xd8(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	li       r4, 0xff
	bl       GXSetDstAlpha
	li       r3, 1
	bl       GXSetAlphaUpdate
	li       r3, 0
	bl       GXSetColorUpdate
	addi     r3, r28, 0xbc
	lwz      r12, 0xbc(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1e4(r27)
	li       r4, 0
	lfs      f1, lbl_8051F170@sda21(r2)
	li       r5, 0
	lwz      r12, 0(r3)
	li       r6, 0
	fmr      f2, f1
	lfs      f3, lbl_8051F23C@sda21(r2)
	lwz      r12, 0xec(r12)
	lfs      f4, lbl_8051F240@sda21(r2)
	mtctr    r12
	bctrl
	bl       GXInvalidateTexAll
	lwz      r3, 0xd8(r27)
	li       r4, 0
	li       r5, 0
	li       r7, 0
	lwz      r3, 0x20(r3)
	li       r8, 0
	lwz      r6, 0x20(r3)
	lbz      r6, 0(r6)
	bl       capture__10JUTTextureFii9_GXTexFmtbUc
	li       r3, 1
	bl       GXSetColorUpdate
	addi     r3, r28, 0x190
	lwz      r12, 0x190(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, -1
	bl       __dt__10J2DPictureFv
	addi     r3, r1, 0x3a8
	li       r4, -1
	bl       __dt__10J2DPictureFv

lbl_8039E8C0:
	addi     r31, r28, 0x190
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc0(r27)
	mr       r4, r28
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	lwz      r0, 0x224(r27)
	stw      r3, 0x80(r1)
	lwz      r3, 0x218(r27)
	stw      r0, 0x88(r1)
	lwz      r0, 0x220(r27)
	stw      r3, 0x7c(r1)
	lfs      f31, 0x80(r1)
	lfs      f0, 0x88(r1)
	stw      r0, 0x84(r1)
	fsubs    f1, f0, f31
	lfs      f30, 0x7c(r1)
	bl       __cvt_fp2unsigned
	lfs      f0, 0x84(r1)
	mr       r30, r3
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r29, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r26, r3
	bl       __cvt_fp2unsigned
	mr       r4, r26
	mr       r5, r29
	mr       r6, r30
	bl       GXSetScissor
	lwz      r3, 0xbc(r27)
	mr       r4, r28
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	li       r4, 0
	li       r5, 0x280
	li       r6, 0x1e0
	bl       GXSetScissor
	lwz      r3, 0x7c(r27)
	mr       r4, r28
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x240(r27)
	cmpwi    r0, 0
	beq      lbl_8039E9F0
	lwz      r3, 0xc4(r27)
	mr       r4, r28
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc8(r27)
	mr       r4, r28
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8039E9F0:
	addi     r3, r28, 0xbc
	lwz      r12, 0xbc(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r29, 0
	mr       r26, r27

lbl_8039EA0C:
	lwz      r3, 0x1f0(r26)
	bl       draw__Q28Morimura7TVsPikiFv
	addi     r29, r29, 1
	addi     r26, r26, 4
	cmpwi    r29, 2
	blt      lbl_8039EA0C
	lwz      r0, 0x240(r27)
	cmpwi    r0, 3
	blt      lbl_8039EBBC
	lfs      f31, lbl_8051F1D0@sda21(r2)
	mr       r30, r27
	li       r29, 0

lbl_8039EA3C:
	lwz      r26, 0x1e8(r30)
	lwz      r3, 8(r26)
	lfs      f0, 0xcc(r3)
	fcmpu    cr0, f31, f0
	bne      lbl_8039EBAC
	lwz      r3, 4(r26)
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	lwz      r3, 4(r26)
	li       r4, 0
	lfs      f1, 0xc(r26)
	li       r5, 0
	lwz      r12, 0(r3)
	li       r6, 0
	lfs      f2, lbl_8051F1E8@sda21(r2)
	lfs      f0, 0x10(r26)
	lwz      r12, 0xe4(r12)
	fadds    f1, f1, f2
	fadds    f2, f0, f2
	mtctr    r12
	bctrl
	lwz      r3, 4(r26)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x30(r26)
	li       r0, 0
	lfs      f1, lbl_8051F1CC@sda21(r2)
	lfs      f0, lbl_8051F1EC@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x30(r26)
	lwz      r3, 8(r26)
	stb      r0, 0xb0(r3)
	lfs      f1, 0x30(r26)
	fcmpo    cr0, f1, f0
	ble      lbl_8039EAD4
	stfs     f0, 0x30(r26)

lbl_8039EAD4:
	lbz      r0, 0x3c(r26)
	cmplwi   r0, 0
	beq      lbl_8039EBAC
	li       r0, 0
	li       r4, 0x1839
	stb      r0, 0x3c(r26)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lfs      f1, 0xc(r26)
	lis      r3, __vt__Q25efx2d7TBaseIF@ha
	lfs      f2, lbl_8051F1F0@sda21(r2)
	lis      r5, __vt__Q25efx2d5TBase@ha
	lfs      f0, 0x10(r26)
	li       r9, 0
	fsubs    f1, f1, f2
	addi     r0, r3, __vt__Q25efx2d7TBaseIF@l
	fsubs    f0, f0, f2
	lis      r4, __vt__Q25efx2d8TSimple3@ha
	lis      r6, __vt__Q25efx2d3Arg@ha
	lis      r3, __vt__Q25efx2d13T2DBattleDive@ha
	stfs     f1, 0x40(r1)
	addi     r11, r6, __vt__Q25efx2d3Arg@l
	addi     r10, r5, __vt__Q25efx2d5TBase@l
	li       r7, 2
	stfs     f0, 0x44(r1)
	li       r6, 3
	lwz      r26, 0x40(r1)
	addi     r8, r4, __vt__Q25efx2d8TSimple3@l
	stw      r0, 0x8c(r1)
	li       r5, 4
	lwz      r12, 0x44(r1)
	addi     r0, r3, __vt__Q25efx2d13T2DBattleDive@l
	stw      r26, 0x48(r1)
	addi     r3, r1, 0x8c
	addi     r4, r1, 0x70
	stw      r12, 0x4c(r1)
	lfs      f1, 0x48(r1)
	stw      r10, 0x8c(r1)
	lfs      f0, 0x4c(r1)
	stw      r8, 0x8c(r1)
	stw      r11, 0x78(r1)
	stfs     f1, 0x70(r1)
	stfs     f0, 0x74(r1)
	stb      r9, 0x90(r1)
	stb      r9, 0x91(r1)
	sth      r7, 0x94(r1)
	sth      r6, 0x96(r1)
	sth      r5, 0x98(r1)
	stw      r9, 0x9c(r1)
	stw      r9, 0xa0(r1)
	stw      r9, 0xa4(r1)
	stw      r0, 0x8c(r1)
	bl       create__Q25efx2d8TSimple3FPQ25efx2d3Arg

lbl_8039EBAC:
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 2
	blt      lbl_8039EA3C

lbl_8039EBBC:
	addi     r3, r28, 0x190
	lwz      r12, 0x190(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd4(r27)
	mr       r4, r28
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xd0(r27)
	mr       r4, r28
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	li       r26, 0
	lwz      r12, 0(r27)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x224(r3)
	lbz      r0, 0xd4(r3)
	cmplwi   r0, 0
	beq      lbl_8039EC9C
	mr       r3, r27
	li       r26, 1
	lwz      r12, 0(r27)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x224(r3)
	lbz      r0, 0xd5(r3)
	cmplwi   r0, 0
	beq      lbl_8039EC7C
	lbz      r3, 0x23c(r27)
	addi     r0, r3, 0x14
	stb      r0, 0x23c(r27)
	lbz      r0, 0x23c(r27)
	cmplwi   r0, 0xc8
	ble      lbl_8039EC9C
	li       r0, 0xc8
	stb      r0, 0x23c(r27)
	b        lbl_8039EC9C

lbl_8039EC7C:
	lbz      r3, 0x23c(r27)
	cmplwi   r3, 0x14
	ble      lbl_8039EC94
	addi     r0, r3, -20
	stb      r0, 0x23c(r27)
	b        lbl_8039EC9C

lbl_8039EC94:
	li       r0, 0
	stb      r0, 0x23c(r27)

lbl_8039EC9C:
	clrlwi.  r0, r26, 0x18
	beq      lbl_8039ED68
	li       r0, -1
	li       r8, 0
	stw      r0, 0x3c(r1)
	mr       r3, r31
	lbz      r0, 0x23c(r27)
	addi     r4, r1, 0x20
	stb      r8, 0x3f(r1)
	addi     r5, r1, 0x24
	addi     r6, r1, 0x28
	addi     r7, r1, 0x2c
	stb      r8, 0x3c(r1)
	stb      r8, 0x3d(r1)
	stb      r8, 0x3e(r1)
	stb      r0, 0x3f(r1)
	lwz      r0, 0x3c(r1)
	stw      r0, 0xc(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x24(r1)
	stw      r0, 0x20(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	li       r3, 0
	bl       GXSetAlphaUpdate
	bl       getRenderModeObj__6SystemFv
	lhz      r26, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_8051F170@sda21(r2)
	mr       r3, r31
	stw      r4, 0x67c(r1)
	addi     r4, r1, 0x60
	lfd      f2, lbl_8051F288@sda21(r2)
	stw      r0, 0x678(r1)
	lfd      f0, 0x678(r1)
	stw      r26, 0x684(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x680(r1)
	lfd      f0, 0x680(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x60(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x64(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x68(r1)
	stfs     f0, 0x6c(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	li       r3, 1
	bl       GXSetAlphaUpdate

lbl_8039ED68:
	lwz      r3, 0xd4(r27)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	beq      lbl_8039EE4C
	addi     r3, r28, 0xbc
	lwz      r12, 0xbc(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f31, lbl_8051F188@sda21(r2)
	mr       r26, r27
	li       r30, 0

lbl_8039ED98:
	lbz      r0, 0x22c(r27)
	li       r3, 0
	cmplwi   r0, 0
	bne      lbl_8039EDAC
	li       r3, 6

lbl_8039EDAC:
	add      r0, r30, r3
	lwz      r5, 0x114(r26)
	slwi     r3, r0, 2
	lfs      f6, 0x320(r27)
	addi     r29, r3, 0x184
	lfs      f5, 0x8c(r5)
	lwzx     r3, r27, r29
	li       r4, 0
	lfs      f0, 0x9c(r5)
	li       r5, 0
	lfs      f3, 0x28(r3)
	li       r6, 0
	lfs      f1, 0x20(r3)
	lfs      f2, 0x2c(r3)
	fsubs    f3, f3, f1
	lfs      f1, 0x24(r3)
	lwz      r12, 0(r3)
	fsubs    f4, f2, f1
	lfs      f2, 0x324(r27)
	fnmsubs  f1, f31, f3, f5
	lwz      r12, 0xec(r12)
	fnmsubs  f0, f31, f4, f0
	fadds    f1, f6, f1
	fadds    f2, f2, f0
	mtctr    r12
	bctrl
	lwzx     r3, r27, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r26, r26, 4
	cmpwi    r30, 6
	blt      lbl_8039ED98
	addi     r3, r28, 0x190
	lwz      r12, 0x190(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8039EE4C:
	lbz      r3, 0x44(r27)
	li       r0, -1
	stw      r0, 0x38(r1)
	li       r0, 0
	subfic   r8, r3, 0xff
	mr       r3, r31
	stb      r0, 0x38(r1)
	addi     r4, r1, 0x10
	addi     r5, r1, 0x14
	addi     r6, r1, 0x18
	stb      r0, 0x39(r1)
	addi     r7, r1, 0x1c
	stb      r0, 0x3a(r1)
	stb      r8, 0x3b(r1)
	lwz      r0, 0x38(r1)
	stw      r0, 8(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	li       r3, 0
	bl       GXSetAlphaUpdate
	bl       getRenderModeObj__6SystemFv
	lhz      r26, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_8051F170@sda21(r2)
	mr       r3, r31
	stw      r4, 0x684(r1)
	addi     r4, r1, 0x50
	lfd      f2, lbl_8051F288@sda21(r2)
	stw      r0, 0x680(r1)
	lfd      f0, 0x680(r1)
	stw      r26, 0x67c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x678(r1)
	lfd      f0, 0x678(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x50(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x54(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x58(r1)
	stfs     f0, 0x5c(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	li       r3, 1
	bl       GXSetAlphaUpdate
	psq_l    f31, 1752(r1), 0, qr0
	lfd      f31, 0x6d0(r1)
	psq_l    f30, 1736(r1), 0, qr0
	lfd      f30, 0x6c0(r1)
	psq_l    f29, 1720(r1), 0, qr0
	lfd      f29, 0x6b0(r1)
	psq_l    f28, 1704(r1), 0, qr0
	lfd      f28, 0x6a0(r1)
	lmw      r26, 0x688(r1)
	lwz      r0, 0x6e4(r1)
	mtlr     r0
	addi     r1, r1, 0x6e0
	blr
	*/
}

/**
 * @note Address: 0x8039F334
 * @note Size: 0xC
 */
void TVsSelect::doUpdateFadeinFinish() { mCanInput = true; }

/**
 * @note Address: 0x8039F340
 * @note Size: 0xAC
 */
void TVsSelect::doUpdateFadeoutFinish()
{
	P2ASSERTLINE(2096, mDispMember);
	mDispMember->mOlimarHandicap     = mHandicapSel[0];
	mDispMember->mLouieHandicap      = mHandicapSel[1];
	mDispMember->mSelectedStageIndex = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	if (mIsDemoStarted) {
		mDispMember->mState = Screen::Game2DMgr::CHECK2D_VsSelect_ExitFinished;
	} else {
		mDispMember->mState = Screen::Game2DMgr::CHECK2D_VsSelect_CancelToTitle;
	}
}

/**
 * @note Address: 0x8039F3EC
 * @note Size: 0x3CC
 */
void TVsSelect::paneInit()
{
	mPaneStageNameBg = mMainScreen->mScreenObj->search('PICT_075');
	P2ASSERTLINE(2119, mPaneStageNameBg);

	mPaneLevelName = mMainScreen->mScreenObj->search('Tbmenu11');
	P2ASSERTLINE(2122, mPaneLevelName);

	mActiveCourseThumbs[0] = static_cast<J2DPicture*>(mListScreen->mScreenObj->search('Plistim0'));
	mActiveCourseThumbs[1] = static_cast<J2DPicture*>(mListScreen->mScreenObj->search('Plistim1'));
	mActiveCourseThumbs[2] = static_cast<J2DPicture*>(mListScreen->mScreenObj->search('Plistim2'));
	mActiveCourseThumbs[3] = static_cast<J2DPicture*>(mListScreen->mScreenObj->search('Plistim3'));
	mActiveCourseThumbs[4] = static_cast<J2DPicture*>(mListScreen->mScreenObj->search('Plistim4'));

	mPaneLevelWindows[0] = mListScreen->mScreenObj->search('Pliswin0');
	mPaneLevelWindows[1] = mListScreen->mScreenObj->search('Pliswin1');
	mPaneLevelWindows[2] = mListScreen->mScreenObj->search('Pliswin2');
	mPaneLevelWindows[3] = mListScreen->mScreenObj->search('Pliswin3');
	mPaneLevelWindows[4] = mListScreen->mScreenObj->search('Pliswin4');

	for (int i = 0; i < mNumActiveRows; i++) {
		JUT_ASSERTLINE(2139, mActiveCourseThumbs[i], "coursename[%d] not find\n", i);
		JUT_ASSERTLINE(2140, mPaneLevelWindows[i], "pictureframe[%d] not find\n", i);
	}

	mPaneSpot = mMainScreen->mScreenObj->search('Pspot0');
	P2ASSERTLINE(2145, mPaneSpot);

	f32 test                = 20.0f;
	mSelectionYOffset       = mIndexPaneList[mCurrActiveRowSel]->getPaneYOffset() - 10.0f;
	mCursorSelectionYOffset = mSelectionYOffset + test;

	mPaneStars = mMainScreen->mScreenObj->search('Nstarpik');
	P2ASSERTLINE(2154, mPaneStars);

	changeCourseTexture();
}

/**
 * @note Address: 0x8039F7B8
 * @note Size: 0x240
 */
void TVsSelect::changePaneInfo()
{
	int id        = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	J2DPane* pane = mPaneLevelName;
	u64 tag       = getNameID(id);
	pane->setMsgID(tag);

	mLevelNameYPos *= -1.0f;
	if (!mLoopDrum) {
		mStickAnimState = 0;
		mStickAnim->stickUpDown();
		int id = mIndexPaneList[mCurrActiveRowSel]->getIndex();
		f32 y  = mIndexPaneList[mCurrActiveRowSel]->getPaneYOffset();
		if (id == 0) {
			mStickAnimState = 1;
			mStickAnim->stickDown();
		}
		if (id == mStageCount - 1) {
			mStickAnimState = 2;
			mStickAnim->stickUp();
		}
		if (mStickAnimState == 0) {
			mIsSelectIndexChange = 0;
		} else {
			f32 calc                   = 0.0f;
			mIsSelectIndexChange       = 1;
			mIndexGroup->mScrollOffset = 0.0f;
			for (int i = 0; i < mNumActiveRows; i++) {
				mIndexPaneList[i]->mPane->setOffsetY(calc + mIndexPaneList[i]->getPaneYOffset());
			}
		}

		for (int i = 0; i < mNumActiveRows; i++) {
			mIndexPaneList[i]->mPane->show();
			if (id != mIndexPaneList[i]->getIndex()) {
				TIndexPane* ind = mIndexPaneList[i];
				f32 y2          = ind->getPaneYOffset();
				ind->getIndex();
				if ((mIndexPaneList[i]->getIndex() > id && y > y2) || (mIndexPaneList[i]->getIndex() < id && y < y2)) {
					mIndexPaneList[i]->mPane->hide();
				}
			}
		}
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r30, r3
	lwz      r0, 0x94(r3)
	lwz      r3, 0x88(r3)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       getIndex__Q28Morimura10TIndexPaneFv
	lwz      r12, 0(r30)
	mr       r0, r3
	mr       r3, r30
	lwz      r29, 0xf0(r30)
	lwz      r12, 0x8c(r12)
	mr       r4, r0
	mtctr    r12
	bctrl
	stw      r4, 0x1c(r29)
	lfs      f0, lbl_8051F17C@sda21(r2)
	stw      r3, 0x18(r29)
	lfs      f1, 0x230(r30)
	fmuls    f0, f1, f0
	stfs     f0, 0x230(r30)
	lbz      r0, mLoopDrum__Q28Morimura9TVsSelect@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8039F9C8
	li       r0, 0
	stw      r0, 0x244(r30)
	lwz      r3, 0x208(r30)
	bl       stickUpDown__Q32og6Screen12StickAnimMgrFv
	lwz      r0, 0x94(r30)
	lwz      r3, 0x88(r30)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       getIndex__Q28Morimura10TIndexPaneFv
	lwz      r0, 0x94(r30)
	or.      r31, r3, r3
	lwz      r3, 0x88(r30)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lfs      f30, 0x1c(r3)
	bne      lbl_8039F890
	li       r0, 1
	stw      r0, 0x244(r30)
	lwz      r3, 0x208(r30)
	bl       stickDown__Q32og6Screen12StickAnimMgrFv

lbl_8039F890:
	lwz      r3, 0x248(r30)
	addi     r0, r3, -1
	cmpw     r31, r0
	bne      lbl_8039F8B0
	li       r0, 2
	stw      r0, 0x244(r30)
	lwz      r3, 0x208(r30)
	bl       stickUp__Q32og6Screen12StickAnimMgrFv

lbl_8039F8B0:
	lwz      r0, 0x244(r30)
	cmpwi    r0, 0
	bne      lbl_8039F8C8
	li       r0, 0
	stb      r0, 0x23d(r30)
	b        lbl_8039F924

lbl_8039F8C8:
	li       r0, 1
	lfs      f31, lbl_8051F170@sda21(r2)
	stb      r0, 0x23d(r30)
	li       r28, 0
	li       r29, 0
	lwz      r3, 0x84(r30)
	stfs     f31, 0x14(r3)
	b        lbl_8039F918

lbl_8039F8E8:
	lwz      r3, 0x88(r30)
	lwzx     r4, r3, r29
	lfs      f0, 0x1c(r4)
	lwz      r3, 4(r4)
	fadds    f0, f0, f31
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 4
	addi     r28, r28, 1

lbl_8039F918:
	lha      r0, 0x8e(r30)
	cmpw     r28, r0
	blt      lbl_8039F8E8

lbl_8039F924:
	li       r28, 0
	li       r29, 0
	b        lbl_8039F9BC

lbl_8039F930:
	lwz      r3, 0x88(r30)
	li       r0, 1
	lwzx     r3, r3, r29
	lwz      r3, 4(r3)
	stb      r0, 0xb0(r3)
	lwz      r3, 0x88(r30)
	lwzx     r3, r3, r29
	bl       getIndex__Q28Morimura10TIndexPaneFv
	cmpw     r3, r31
	beq      lbl_8039F9B4
	lwz      r3, 0x88(r30)
	lwzx     r3, r3, r29
	lfs      f31, 0x1c(r3)
	bl       getIndex__Q28Morimura10TIndexPaneFv
	lwz      r3, 0x88(r30)
	lwzx     r3, r3, r29
	bl       getIndex__Q28Morimura10TIndexPaneFv
	cmpw     r3, r31
	ble      lbl_8039F984
	fcmpo    cr0, f30, f31
	bgt      lbl_8039F9A0

lbl_8039F984:
	lwz      r3, 0x88(r30)
	lwzx     r3, r3, r29
	bl       getIndex__Q28Morimura10TIndexPaneFv
	cmpw     r3, r31
	bge      lbl_8039F9B4
	fcmpo    cr0, f30, f31
	bge      lbl_8039F9B4

lbl_8039F9A0:
	lwz      r3, 0x88(r30)
	li       r0, 0
	lwzx     r3, r3, r29
	lwz      r3, 4(r3)
	stb      r0, 0xb0(r3)

lbl_8039F9B4:
	addi     r29, r29, 4
	addi     r28, r28, 1

lbl_8039F9BC:
	lha      r0, 0x8e(r30)
	cmpw     r28, r0
	blt      lbl_8039F930

lbl_8039F9C8:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x44(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8039F9F8
 * @note Size: 0x84
 */
u64 TVsSelect::getNameID(int id)
{
	P2ASSERTLINE(2226, id <= getIdMax());
	int course = getCourseID(id);
	return mMesgData->getMsgID(course - 1);
}

/**
 * @note Address: 0x8039FA7C
 * @note Size: 0x8
 */
int TVsSelect::getIdMax() { return mStageCount; }

/**
 * @note Address: 0x8039FA84
 * @note Size: 0x3C
 */
int TVsSelect::getCourseID(int id)
{
	if (!mIsSection) {
		Game::Vs2D_TitleInfo::Info* info = (*mDispMember->mTitleInfo)(id);
		id                               = info->mInfo;
	}
	return id;
}

/**
 * @note Address: N/A
 * @note Size: 0x194
 */
void TVsSelect::reset()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8039FAC0
 * @note Size: 0x1F4
 */
void TVsSelect::doZoom()
{
	if (mZoomState == 1) {
		if (mZoomLevel > mZoomFrameMax) {
			mZoomLevel = mZoomFrameMax;
		} else {
			mZoomLevel += 1.0f;
		}
	} else if (mZoomState == 2) {
		mZoomLevel -= 1.0f;
		if (mZoomLevel <= 0.0f) {
			mZoomLevel  = 0.0f;
			bool finish = true;
			Vector2f offset(320.0f, 240.0f);
			Vector2f diff1 = mOnyonObj[0]->mCurrentPosition - offset;
			if (diff1.sqrMagnitude() < 160000.0f) {
				finish = false;
			}
			Vector2f diff2 = mOnyonObj[1]->mCurrentPosition - offset;
			if (diff2.sqrMagnitude() < 160000.0f) {
				finish = false;
			}
			if (finish)
				mZoomState = 0;
		}
	}

	f32 calc  = sinf(mZoomLevel * HALF_PI / mZoomFrameMax);
	f32 scale = 0.0f;
	f32 temp;
	if (calc < 0.25f) {
		temp  = 1.0f;
		scale = (calc - 0.25f) * 4.0f / 3.0f;
		if (calc == 1.0f) {
			scale = temp;
			if (mIsZoomActive) {
				mZoomState = 3;
				changeIndirectTexture();
				mCanCancel = false;
				scale      = temp;
			}
		}
	}
	mScreenXPos = scale * mDemoOffsetMax;
	mDemoScale  = scale * (mDemoScaleMax - 1.0f) + 1.0f;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r0, 0x240(r3)
	cmpwi    r0, 1
	bne      lbl_8039FB10
	lfs      f1, 0x250(r31)
	lfs      f0, mZoomFrameMax__Q28Morimura9TVsSelect@sda21(r13)
	fcmpo    cr0, f1, f0
	ble      lbl_8039FB00
	stfs     f0, 0x250(r31)
	b        lbl_8039FBB0

lbl_8039FB00:
	lfs      f0, lbl_8051F180@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x250(r31)
	b        lbl_8039FBB0

lbl_8039FB10:
	cmpwi    r0, 2
	bne      lbl_8039FBB0
	lfs      f2, 0x250(r31)
	lfs      f1, lbl_8051F180@sda21(r2)
	lfs      f0, lbl_8051F170@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x250(r31)
	lfs      f1, 0x250(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8039FBB0
	stfs     f0, 0x250(r31)
	li       r0, 1
	lfs      f2, lbl_8051F240@sda21(r2)
	lwz      r3, 0x1e8(r31)
	lfs      f3, lbl_8051F294@sda21(r2)
	lfs      f1, 0x10(r3)
	lfs      f4, 0xc(r3)
	fsubs    f1, f1, f2
	lfs      f0, lbl_8051F298@sda21(r2)
	fsubs    f4, f4, f3
	fmuls    f1, f1, f1
	fmadds   f1, f4, f4, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8039FB78
	li       r0, 0

lbl_8039FB78:
	lwz      r3, 0x1ec(r31)
	lfs      f1, 0x10(r3)
	lfs      f4, 0xc(r3)
	fsubs    f1, f1, f2
	fsubs    f4, f4, f3
	fmuls    f1, f1, f1
	fmadds   f1, f4, f4, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8039FBA0
	li       r0, 0

lbl_8039FBA0:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8039FBB0
	li       r0, 0
	stw      r0, 0x240(r31)

lbl_8039FBB0:
	lfs      f2, lbl_8051F268@sda21(r2)
	lfs      f0, 0x250(r31)
	lfs      f1, mZoomFrameMax__Q28Morimura9TVsSelect@sda21(r13)
	fmuls    f2, f2, f0
	lfs      f0, lbl_8051F170@sda21(r2)
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8039FBFC
	lfs      f0, lbl_8051F1B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f4, f0
	b        lbl_8039FC20

lbl_8039FBFC:
	lfs      f0, lbl_8051F1B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r3, r0

lbl_8039FC20:
	lfs      f0, lbl_8051F1FC@sda21(r2)
	lfs      f31, lbl_8051F170@sda21(r2)
	fcmpo    cr0, f4, f0
	blt      lbl_8039FC78
	fsubs    f2, f4, f0
	lfs      f3, lbl_8051F29C@sda21(r2)
	lfs      f0, lbl_8051F180@sda21(r2)
	lfs      f1, lbl_8051F2A0@sda21(r2)
	fmuls    f2, f3, f2
	fcmpu    cr0, f0, f4
	fdivs    f31, f2, f1
	bne      lbl_8039FC78
	lbz      r0, 0x229(r31)
	fmr      f31, f0
	cmplwi   r0, 0
	beq      lbl_8039FC78
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x240(r31)
	bl       changeIndirectTexture__Q28Morimura9TVsSelectFv
	li       r0, 0
	stb      r0, mCanCancel__Q28Morimura9TVsSelect@sda21(r13)

lbl_8039FC78:
	lfs      f0, mDemoOffsetMax__Q28Morimura9TVsSelect@sda21(r13)
	lfs      f1, lbl_8051F180@sda21(r2)
	fmuls    f0, f0, f31
	stfs     f0, 0x26c(r31)
	lfs      f0, mDemoScaleMax__Q28Morimura9TVsSelect@sda21(r13)
	fsubs    f0, f0, f1
	fmadds   f0, f0, f31, f1
	stfs     f0, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8039FCB4
 * @note Size: 0x6C
 */
void TVsSelect::doMoveOnyon()
{
	for (int i = 0; i < 2; i++) {
		f32 calc = 1.0f;
		if (mZoomState == 2) {
			calc = 2.0f;
		}
		mOnyonObj[i]->posUpdate(calc);
	}
}

/**
 * @note Address: 0x8039FD20
 * @note Size: 0x214
 */
void TVsSelect::doScreenEffect()
{
	mZoomLevel += mIndShuki;
	if (mZoomLevel > TAU) {
		mZoomLevel -= TAU;
	}
	f32 mod = mIndVal;
	mIndPane->setXY(sinf(mZoomLevel) * mod, cosf(mZoomLevel) * mod);

	if (mIsZoomActive) {
		bool isAnyAtGoal = true;
		for (int i = 0; i < 2; i++) {
			if (mOnyonObj[i]->_30 != 2.0f) {
				isAnyAtGoal = false;
			}
		}
		if (isAnyAtGoal) {
			mEndDelayTimer += 1.0f;
			if (mEndDelayTimer > 15.0f && !mIsSection) {
				mZoomState          = 0;
				mDispMember->mState = Screen::Game2DMgr::CHECK2D_VsSelect_InDemo;
				P2ASSERTLINE(2374, getOwner());
				getOwner()->endScene(nullptr);
				for (int i = 0; i < mNumActiveRows; i++) {
					if (i != mCurrActiveRowSel) {
						mIndexPaneList[i]->mPane->hide();
					}
				}
			}
		} else {
			mEndDelayTimer = 0.0f;
		}
	}
}

/**
 * @note Address: 0x8039FF34
 * @note Size: 0x4FC
 */
void TVsSelect::onyonDemoInit()
{
	f32 test;
	if (randFloat() > 0.5f) {
		test = 1.0f;
	} else {
		test = -1.0f;
	}

	for (int i = 0; i < 2; i++) {
		f32 xsize = 0.5f * (_290 + _298);
		f32 ysize = 0.5f * (_294 + _29C);

		mOnyonObj[i]->reset();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_CHALLENGE_ONY_MOVE, 0);
		f32 x                       = sinf(TAU * randFloat());
		x                           = test * (25.0f * x + 20.0f) + xsize;
		f32 y                       = sinf(TAU * randFloat());
		y                           = test * (10.0f * y + 10.0f) + ysize;
		mOnyonObj[i]->mGoalPosition = Vector2f(x, y);

		if (randFloat() < 0.5f) {
			if (test > 0.0f) {
				x = randFloat() * 50.0f + 640.0f;
			} else {
				x = randFloat() * -50.0f;
			}
			y = randFloat() * 480.0f;
		} else {
			if (test > 0.0f) {
				y = randFloat() * 50.0f + 640.0f;
			} else {
				y = randFloat() * -50.0f;
			}
			x = randFloat() * 480.0f;
		}
		mOnyonObj[i]->mCurrentPosition = Vector2f(x, y);
		mOnyonObj[i]->_00              = test;
		test                           = test * -1.0f;
	}
	mZoomLevel = 0.0f;
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stfd     f24, 0xb0(r1)
	psq_st   f24, 184(r1), 0, qr0
	stfd     f23, 0xa0(r1)
	psq_st   f23, 168(r1), 0, qr0
	stfd     f22, 0x90(r1)
	psq_st   f22, 152(r1), 0, qr0
	stfd     f21, 0x80(r1)
	psq_st   f21, 136(r1), 0, qr0
	stfd     f20, 0x70(r1)
	psq_st   f20, 120(r1), 0, qr0
	stfd     f19, 0x60(r1)
	psq_st   f19, 104(r1), 0, qr0
	stmw     r27, 0x4c(r1)
	mr       r28, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051F1C4@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_8051F188@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8039FFEC
	lfs      f20, lbl_8051F180@sda21(r2)
	b        lbl_8039FFF0

lbl_8039FFEC:
	lfs      f20, lbl_8051F17C@sda21(r2)

lbl_8039FFF0:
	lfs      f23, lbl_8051F188@sda21(r2)
	mr       r30, r28
	lfs      f24, lbl_8051F1C0@sda21(r2)
	li       r29, 0
	lfs      f25, lbl_8051F170@sda21(r2)
	lis      r31, 0x4330
	lfd      f26, lbl_8051F198@sda21(r2)
	lfs      f27, lbl_8051F1C4@sda21(r2)
	lfs      f28, lbl_8051F190@sda21(r2)
	lfs      f29, lbl_8051F1C8@sda21(r2)
	lfs      f30, lbl_8051F284@sda21(r2)
	lfs      f31, lbl_8051F290@sda21(r2)
	lfs      f19, lbl_8051F17C@sda21(r2)

lbl_803A0024:
	lfs      f3, 0x290(r28)
	lfs      f2, 0x298(r28)
	lfs      f1, 0x294(r28)
	lfs      f0, 0x29c(r28)
	fadds    f2, f3, f2
	lwz      r27, 0x1e8(r30)
	fadds    f0, f1, f0
	stfs     f24, 0xc(r27)
	fmuls    f22, f23, f2
	fmuls    f21, f23, f0
	stfs     f25, 0x10(r27)
	bl       rand
	xoris    r0, r3, 0x8000
	lfs      f0, mTestVal__Q28Morimura9TVsSelect@sda21(r13)
	stw      r0, 0xc(r1)
	li       r3, 1
	fctiwz   f0, f0
	li       r0, 0
	stw      r31, 8(r1)
	lfd      f1, 8(r1)
	stfd     f0, 0x10(r1)
	fsubs    f0, f1, f26
	lwz      r5, 0x14(r1)
	fdivs    f0, f0, f27
	fmuls    f0, f28, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r4, 0x1c(r1)
	add      r4, r5, r4
	neg      r4, r4
	stw      r4, 0x38(r27)
	stfs     f25, 0x30(r27)
	stb      r3, 0x3c(r27)
	lwz      r3, 8(r27)
	stb      r0, 0xb0(r3)
	stfs     f25, 0x2c(r27)
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r31, 0x20(r1)
	stw      r0, 0x24(r1)
	lfd      f0, 0x20(r1)
	fsubs    f0, f0, f26
	fdivs    f0, f0, f27
	fcmpo    cr0, f0, f23
	ble      lbl_803A00E0
	lfs      f0, lbl_8051F1A8@sda21(r2)
	stfs     f0, 0x2c(r27)

lbl_803A00E0:
	stfs     f25, 0x1c(r27)
	li       r4, 0x182c
	li       r5, 0
	stfs     f25, 0x20(r27)
	stfs     f25, 0x24(r27)
	stfs     f25, 0x28(r27)
	lfs      f0, mAngRate__Q28Morimura9TVsSelect@sda21(r13)
	stfs     f0, 0x34(r27)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r31, 0x20(r1)
	stw      r0, 0x24(r1)
	lfd      f0, 0x20(r1)
	fsubs    f0, f0, f26
	fdivs    f0, f0, f27
	fmuls    f1, f29, f0
	fcmpo    cr0, f1, f25
	bge      lbl_803A015C
	lfs      f0, lbl_8051F1B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803A0180

lbl_803A015C:
	lfs      f0, lbl_8051F1B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803A0180:
	fmadds   f0, f30, f0, f28
	fmadds   f22, f20, f0, f22
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r31, 8(r1)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f26
	fdivs    f0, f0, f27
	fmuls    f1, f29, f0
	fcmpo    cr0, f1, f25
	bge      lbl_803A01DC
	lfs      f0, lbl_8051F1B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803A0200

lbl_803A01DC:
	lfs      f0, lbl_8051F1B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803A0200:
	fmadds   f0, f31, f0, f31
	lwz      r3, 0x1e8(r30)
	stfs     f22, 0x14(r3)
	fmadds   f21, f20, f0, f21
	stfs     f21, 0x18(r3)
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r31, 0x38(r1)
	stw      r0, 0x3c(r1)
	lfd      f0, 0x38(r1)
	fsubs    f0, f0, f26
	fdivs    f0, f0, f27
	fcmpo    cr0, f0, f23
	bge      lbl_803A02E0
	lfs      f0, lbl_8051F170@sda21(r2)
	fcmpo    cr0, f20, f0
	ble      lbl_803A027C
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f2, lbl_8051F1C4@sda21(r2)
	lfd      f0, 0x38(r1)
	lfs      f1, lbl_8051F1B8@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051F174@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f21, f1, f2, f0
	b        lbl_803A02AC

lbl_803A027C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_8051F1C4@sda21(r2)
	lfd      f2, 0x38(r1)
	lfs      f0, lbl_8051F2A8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f21, f0, f1

lbl_803A02AC:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_8051F1C4@sda21(r2)
	lfd      f2, 0x38(r1)
	lfs      f0, lbl_8051F178@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f22, f0, f1
	b        lbl_803A0384

lbl_803A02E0:
	lfs      f0, lbl_8051F170@sda21(r2)
	fcmpo    cr0, f20, f0
	ble      lbl_803A0324
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f2, lbl_8051F1C4@sda21(r2)
	lfd      f0, 0x38(r1)
	lfs      f1, lbl_8051F1B8@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051F178@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f22, f1, f2, f0
	b        lbl_803A0354

lbl_803A0324:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_8051F1C4@sda21(r2)
	lfd      f2, 0x38(r1)
	lfs      f0, lbl_8051F2A8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f22, f0, f1

lbl_803A0354:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f3, lbl_8051F198@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_8051F1C4@sda21(r2)
	lfd      f2, 0x38(r1)
	lfs      f0, lbl_8051F174@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f21, f0, f1

lbl_803A0384:
	lwz      r3, 0x1e8(r30)
	addi     r29, r29, 1
	cmpwi    r29, 2
	stfs     f21, 0xc(r3)
	stfs     f22, 0x10(r3)
	lwz      r3, 0x1e8(r30)
	addi     r30, r30, 4
	stfs     f20, 0(r3)
	fmuls    f20, f20, f19
	blt      lbl_803A0024
	lfs      f0, lbl_8051F170@sda21(r2)
	stfs     f0, 0x250(r28)
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	psq_l    f24, 184(r1), 0, qr0
	lfd      f24, 0xb0(r1)
	psq_l    f23, 168(r1), 0, qr0
	lfd      f23, 0xa0(r1)
	psq_l    f22, 152(r1), 0, qr0
	lfd      f22, 0x90(r1)
	psq_l    f21, 136(r1), 0, qr0
	lfd      f21, 0x80(r1)
	psq_l    f20, 120(r1), 0, qr0
	lfd      f20, 0x70(r1)
	psq_l    f19, 104(r1), 0, qr0
	lfd      f19, 0x60(r1)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/**
 * @note Address: 0x803A0430
 * @note Size: 0x1C0
 */
void TVsSelect::demoStart()
{
	mDemoScale  = 1.0f;
	mScreenXPos = 0.0f;
	int i       = 0;
	mZoomState  = 0;
	mZoomLevel  = 0.0f;

	for (; i < 2; i++) {
		mOnyonObj[i]->reset();
	}

	mIsZoomActive   = 0;
	mIsOnyonHitGoal = 0;
	mZoomState      = 1;
	mCanCancel      = true;
	mEfxCountKira->fade();
	mIsZoomActive = 1;
	onyonDemoInit();
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
	stfd     f27, 0x50(r1)
	psq_st   f27, 88(r1), 0, qr0
	stfd     f26, 0x40(r1)
	psq_st   f26, 72(r1), 0, qr0
	stmw     r27, 0x2c(r1)
	lfs      f0, lbl_8051F180@sda21(r2)
	mr       r31, r3
	lfs      f26, lbl_8051F170@sda21(r2)
	li       r29, 0
	stfs     f0, mDemoScale__Q28Morimura9TVsSelect@sda21(r13)
	mr       r27, r31
	lfs      f27, lbl_8051F1C0@sda21(r2)
	lis      r30, 0x4330
	stfs     f26, 0x26c(r3)
	lfd      f28, lbl_8051F198@sda21(r2)
	stw      r29, 0x240(r3)
	lfs      f29, lbl_8051F1C4@sda21(r2)
	stfs     f26, 0x250(r3)
	lfs      f30, lbl_8051F190@sda21(r2)
	lfs      f31, lbl_8051F188@sda21(r2)

lbl_803A04AC:
	lwz      r28, 0x1e8(r27)
	stfs     f27, 0xc(r28)
	stfs     f26, 0x10(r28)
	bl       rand
	xoris    r0, r3, 0x8000
	lfs      f0, mTestVal__Q28Morimura9TVsSelect@sda21(r13)
	stw      r0, 0xc(r1)
	li       r3, 1
	fctiwz   f0, f0
	li       r0, 0
	stw      r30, 8(r1)
	lfd      f1, 8(r1)
	stfd     f0, 0x10(r1)
	fsubs    f0, f1, f28
	lwz      r5, 0x14(r1)
	fdivs    f0, f0, f29
	fmuls    f0, f30, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r4, 0x1c(r1)
	add      r4, r5, r4
	neg      r4, r4
	stw      r4, 0x38(r28)
	stfs     f26, 0x30(r28)
	stb      r3, 0x3c(r28)
	lwz      r3, 8(r28)
	stb      r0, 0xb0(r3)
	stfs     f26, 0x2c(r28)
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r30, 0x20(r1)
	stw      r0, 0x24(r1)
	lfd      f0, 0x20(r1)
	fsubs    f0, f0, f28
	fdivs    f0, f0, f29
	fcmpo    cr0, f0, f31
	ble      lbl_803A0548
	lfs      f0, lbl_8051F1A8@sda21(r2)
	stfs     f0, 0x2c(r28)

lbl_803A0548:
	stfs     f26, 0x1c(r28)
	addi     r29, r29, 1
	cmpwi    r29, 2
	addi     r27, r27, 4
	stfs     f26, 0x20(r28)
	stfs     f26, 0x24(r28)
	stfs     f26, 0x28(r28)
	lfs      f0, mAngRate__Q28Morimura9TVsSelect@sda21(r13)
	stfs     f0, 0x34(r28)
	blt      lbl_803A04AC
	li       r3, 0
	li       r0, 1
	stb      r3, 0x229(r31)
	stb      r3, 0x22a(r31)
	stw      r0, 0x240(r31)
	stb      r0, mCanCancel__Q28Morimura9TVsSelect@sda21(r13)
	lwz      r3, 0x200(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x229(r31)
	bl       onyonDemoInit__Q28Morimura9TVsSelectFv
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	psq_l    f27, 88(r1), 0, qr0
	lfd      f27, 0x50(r1)
	psq_l    f26, 72(r1), 0, qr0
	lfd      f26, 0x40(r1)
	lmw      r27, 0x2c(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/**
 * @note Address: 0x803A05F0
 * @note Size: 0x9C
 */
void TVsSelect::changeCourseTexture()
{
	for (int i = 0; i < mNumActiveRows; i++) {
		int id = getCourseID(i);
		mActiveCourseThumbs[i]->changeTexture(mLevelTextures[id], 0);
	}
}

/**
 * @note Address: 0x803A068C
 * @note Size: 0xD0
 */
void TVsSelect::changeIndirectTexture()
{
	int id = mIndexPaneList[mCurrActiveRowSel]->getIndex();
	id     = getCourseID(id);
	mIndPane->mTexture1->storeTIMG(mLevelTextures[id], (u8)0);
	mIndPic->changeTexture(mLevelTextures[id], 0);
	mActiveCourseThumbs[mCurrActiveRowSel]->changeTexture(mIndPane->mTexture3->mTexInfo, 0);
}

/**
 * @note Address: 0x803A075C
 * @note Size: 0xB8
 */
void TVsSelect::setShortenIndex(int id, int id2, bool)
{
	P2ASSERTLINE(2503, id < mNumActiveRows);
	id2 = getCourseID(id2);
	mActiveCourseThumbs[id]->changeTexture(mLevelTextures[id2], 0);
}

/**
 * @note Address: 0x803A0814
 * @note Size: 0x140
 */
void TVsSelect::updateFacePicture()
{
	int state  = mChangeFaceState;
	int state2 = 4 - state;
	for (int i = 0; i < 6; i++) {
		if (state >= 0) {
			mOlimarFacePanes[i]->updateScale(mOlimarFaceScales[state].x, mOlimarFaceScales[state].y);
		}
		mOlimarFacePanes[i]->setAngleY(mChangeFaceTimer);

		if (state >= 0) {
			mLouieFacePanes[i]->updateScale(mLouieFaceScales[state2].x, mLouieFaceScales[state2].y);
		}
		mLouieFacePanes[i]->setAngleY(mChangeFaceTimer);
	}

	if (mChangeFaceTimer >= 1.0f) {
		mChangeFaceTimer += mFaceChangeSpeed;
		if (mChangeFaceTimer >= 180.0f) {
			changeFaceTexture();
		}
		if (mChangeFaceTimer >= 360.0f) {
			mChangeFaceTimer = 0.0f;
		}
	}
}

/**
 * @note Address: 0x803A0954
 * @note Size: 0x1F4
 */
void TVsSelect::changeFaceTexture()
{
	int diff = mPlayerWinCounts[0] - mPlayerWinCounts[1];
	if (diff <= -3) {
		if (mChangeFaceState == -1 || mChangeFaceTimer > 180.0f) {
			mChangeFaceState = 0;
			changeOrimaTexture(0);
			changeLouieTexture(4);
		} else if (mChangeFaceState != 0) {
			mChangeFaceTimer = 1.0f;
		}
	} else if (diff <= -1) {
		if (mChangeFaceState == -1 || mChangeFaceTimer > 180.0f) {
			mChangeFaceState = 1;
			changeOrimaTexture(1);
			changeLouieTexture(3);
		} else if (mChangeFaceState != 1) {
			mChangeFaceTimer = 1.0f;
		}
	} else if (diff < 1) {
		if (mChangeFaceState == -1 || mChangeFaceTimer > 180.0f) {
			mChangeFaceState = 2;
			changeOrimaTexture(2);
			changeLouieTexture(2);
		} else if (mChangeFaceState != 2) {
			mChangeFaceTimer = 1.0f;
		}
	} else if (diff < 3) {
		if (mChangeFaceState == -1 || mChangeFaceTimer > 180.0f) {
			mChangeFaceState = 3;
			changeOrimaTexture(3);
			changeLouieTexture(1);
		} else if (mChangeFaceState != 3) {
			mChangeFaceTimer = 1.0f;
		}
	} else {
		if (mChangeFaceState == -1 || mChangeFaceTimer > 180.0f) {
			mChangeFaceState = 4;
			changeOrimaTexture(4);
			changeLouieTexture(0);
		} else if (mChangeFaceState != 4) {
			mChangeFaceTimer = 1.0f;
		}
	}
}

/**
 * @note Address: 0x803A0B48
 * @note Size: 0x9C
 */
void TVsSelect::changeOrimaTexture(int id)
{
	ResTIMG* timg = mOrimaTexture[id];
	P2ASSERTLINE(2597, timg);

	for (int i = 0; i < 6; i++) {
		mOlimarFacePanes[i]->changeTexture(timg, 0);
	}
}

/**
 * @note Address: 0x803A0BE4
 * @note Size: 0x9C
 */
void TVsSelect::changeLouieTexture(int id)
{
	ResTIMG* timg = mLouieTexture[id];
	P2ASSERTLINE(2611, timg);

	for (int i = 0; i < 6; i++) {
		mLouieFacePanes[i]->changeTexture(timg, 0);
	}
}

/**
 * @note Address: 0x803A0C80
 * @note Size: 0x118
 */
void TVsSelect::changeSlotPage()
{
	if (mCurrentRulesPage) {
		for (int i = 0; i < 6; i++) {
			TVsSelectSlotIndex* info = TVsSelectSlotIndex::getIndexInfo(i);
			u64 tag                  = info->mMesg;
			mPaneRulesDesc1[i]->setMsgID(tag);
			mPaneRulesDesc2[i]->setMsgID(tag);
		}
	} else {
		for (int i = 0; i < 6; i++) {
			TVsSelectSlotIndex* info = TVsSelectSlotIndex::getIndexInfo(i + 6);
			u64 tag                  = info->mMesg;
			mPaneRulesDesc1[i]->setMsgID(tag);
			mPaneRulesDesc2[i]->setMsgID(tag);
		}
	}
}

/**
 * @note Address: 0x803A0D98
 * @note Size: 0x9C
 */
void TVsSelectScene::doCreateObj(JKRArchive* arc)
{
	TVsSelect* obj = new TVsSelect;
	registObj(obj, arc);
	mObject           = obj;
	mConfirmEndWindow = new TConfirmEndWindow("endWindow");
	registObj(mConfirmEndWindow, arc);
}

/**
 * @note Address: 0x803A0E34
 * @note Size: 0x34
 */
bool TVsSelectScene::doStart(Screen::StartSceneArg* arg)
{
	mObject->start(arg);
	return true;
}

} // namespace Morimura
