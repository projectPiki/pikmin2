#include "LifeGaugeMgr.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "Game/MoviePlayer.h"
#include "Viewport.h"
#include "nans.h"

/**
 * @note Address: 0x80119BFC
 * @note Size: 0x34
 */
LifeGauge::LifeGauge() { init(LIFEGAUGE_SEGMENTS); }

/**
 * @note Address: 0x80119C30
 * @note Size: 0x14
 */
void LifeGauge::init(u8 c)
{
	mTimer            = 0.0f;
	mCircleResolution = c;
	mSegmentCount     = c;
}

/**
 * @note Address: 0x80119C44
 * @note Size: 0x1CC
 */
void LifeGauge::update(f32 newFullness)
{
	f32 adjustedFullness = mCircleResolution * newFullness;

	if (adjustedFullness >= 0.0f) {
		adjustedFullness = adjustedFullness + 0.5f;
	} else {
		adjustedFullness = adjustedFullness - 0.5f;
	}

	u8 newAdjustedValue = static_cast<u8>(adjustedFullness);

	if (mSegmentCount != newAdjustedValue) {
		f32 fb = fabs((newAdjustedValue - mSegmentCount) / static_cast<f32>(mCircleResolution));

		f32 delta          = fb * (sys->mDeltaTime * 150.0f);
		const f32 minDelta = 0.4f;

		if (delta < minDelta) {
			delta = minDelta;
		}

		mTimer += delta;

		if (mTimer > 1.0f) {
			int time = mTimer;
			mSegmentCount += ((u8)time > mSegmentCount) ? time : -time;
			mTimer -= (u8)time;
		}

		if (mSegmentCount == 0 && newFullness > 0.0f) {
			mSegmentCount = 1;
		}
	}

	if (newFullness < 0.2f) { // lifegauge red
		mLifeGaugeColor = Color4(255, 0, 0, 255);
	} else if (newFullness < 0.5f) { // lifegauge yellow
		mLifeGaugeColor = Color4(255, 255, 0, 255);
	} else { // lifegauge green
		mLifeGaugeColor = Color4(0, 255, 0, 255);
	}
}

/**
 * @note Address: 0x80119E10
 * @note Size: 0x1BC
 */
void LifeGauge::draw(f32 size, f32 x, f32 y)
{
	Vector3f position[3];

	// first vertex
	position[0] = Vector3f(x, y, 0.0f);

	for (int i = 0; i < this->mSegmentCount; i++) {

		// second vertex
		f32 angle     = -(TAU * ((f32)i / static_cast<f32>(this->mCircleResolution)) - HALF_PI);
		position[1].x = (size * (f32)cos(angle)) + position[0].x;
		position[1].y = (size * (f32)sin(angle)) + position[0].y;
		position[1].z = position[0].z;

		// 3rd vertex
		angle         = -(TAU * ((f32)(i + 1) / static_cast<f32>(this->mCircleResolution)) - HALF_PI);
		position[2].x = (size * (f32)cos(angle)) + position[0].x;
		position[2].y = (size * (f32)sin(angle)) + position[0].y;
		position[2].z = position[0].z;

		// Draw the triangle
		drawOneTri(position, mLifeGaugeColor);
	}
}

/**
 * @note Address: 0x80119FCC
 * @note Size: 0x110
 */
void LifeGauge::initLifeGaugeDraw()
{
	GXSetTevDirect(GX_TEVSTAGE0);
	GXSetNumChans(1);
	GXSetNumTevStages(1u);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetChanCtrl(GX_COLOR0A0, FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_RGBA6, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetZMode(FALSE, GX_LESS, FALSE);
	GXSetCurrentMtx(0);

	Mtx mtx;
	PSMTXIdentity(mtx);
	GXLoadTexMtxImm(mtx, GX_TEXMTX0, GX_MTX2x4);
}

/**
 * Draws a single triangle using the given positions and color.
 *
 * @param vertices An array of three Vector3f positions representing the vertices of the triangle.
 * @param color The color of the triangle.
 *
 * @note Address: 0x8011A0DC
 * @note Size: 0xF0
 */
void LifeGauge::drawOneTri(Vector3f* vertices, Color4& color)
{
	GXBegin(GX_TRIANGLEFAN, GX_VTXFMT0, 3);

	for (int i = 0; i < 3; i++) {
		GXPosition3f32(vertices[i].x, vertices[i].y, vertices[i].z);
		GXColor4u8(color.r, color.g, color.b, color.a);
	}

	GXEnd();
}

/**
 * @note Address: 0x8011A1CC
 * @note Size: 0x604
 * TODO
 */
void LifeGaugeList::draw(Graphics& gfx)
{
	if (!mParam.mIsGaugeShown) {
		return;
	}

	f32 x         = (1.25f * mParam.mRadius);
	Viewport* cVp = gfx.mCurrentViewport;
	cVp->getMatrix(true);
	Matrixf* mtx = cVp->getMatrix(true);
	Matrixf calcmtx;
	Mtx mtx0;
	PSMTXConcat(mtx->mMatrix.mtxView, calcmtx.mMatrix.mtxView, mtx0);
	GXLoadPosMtxImm(mtx->mMatrix.mtxView, GX_MTX3x4);
	GXSetNumChans(1);
	GXSetTevDirect(GX_TEVSTAGE0);
	GXSetNumTevStages(1);
	GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_U8, 0);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetZMode(GX_FALSE, GX_LESS, GX_FALSE);
	GXSetCurrentMtx(0);
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEXCOORD0, 60, 0, 125);
	Mtx mtx2;
	PSMTXIdentity(mtx2);
	GXLoadTexMtxImm(mtx2, 30, GX_MTX2x4);

	GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 4);
	f32 y = -x;
	f32 z = 0.0f;

	// Draw Top Left
	GXPosition3f32(x, y, z);
	GXColor4u8(255, 255, 255, 255);
	GXTexCoord2s8(0, 0);

	// Draw Top Right
	GXPosition3f32(x, x, z);
	GXColor4u8(255, 255, 255, 255);
	GXTexCoord2s8(1, 0);

	// Draw Bottom Left
	GXPosition3f32(y, y, z);
	GXColor4u8(255, 255, 255, 255);
	GXTexCoord2s8(0, 1);

	// Draw Bottom Right
	GXPosition3f32(x, y, z);
	GXColor4u8(255, 255, 255, 255);
	GXTexCoord2s8(1, 1);

	LifeGauge::initLifeGaugeDraw();

	for (int i = 0; i < mLifeGauge.mSegmentCount; i++) {
		// TODO
		GXBegin(GX_TRIANGLEFAN, GX_VTXFMT0, 3);

		GXPosition3f32(y, y, z);
		GXColor4u8(mLifeGauge.mLifeGaugeColor.r, mLifeGauge.mLifeGaugeColor.g, mLifeGauge.mLifeGaugeColor.b, mLifeGauge.mLifeGaugeColor.a);

		GXPosition3f32(y, y, z);
		GXColor4u8(mLifeGauge.mLifeGaugeColor.r, mLifeGauge.mLifeGaugeColor.g, mLifeGauge.mLifeGaugeColor.b, mLifeGauge.mLifeGaugeColor.a);

		GXPosition3f32(y, y, z);
		GXColor4u8(mLifeGauge.mLifeGaugeColor.r, mLifeGauge.mLifeGaugeColor.g, mLifeGauge.mLifeGaugeColor.b, mLifeGauge.mLifeGaugeColor.a);
	}
}

/**
 * @note Address: 0x8011A7D0
 * @note Size: 0xDC
 * TODO
 */
LifeGaugeMgr::LifeGaugeMgr() { }

/**
 * @note Address: 0x8011A944
 * @note Size: 0x150
 */
LifeGaugeList* LifeGaugeMgr::createLifeGauge(Game::Creature* obj)
{
	LifeGaugeList* list = mListActive.search(obj);
	if (!list) {
		list = mListInactive.search(obj);
		if (!list) {
			list = new LifeGaugeList(obj);
			list->clearRelations();
			list->mPrev = &mListInactive;
			list->mNext = mListInactive.mNext;
			if (mListInactive.mNext) {
				mListInactive.mNext->mPrev = list;
			}
			mListInactive.mNext = list;
		}
	}

	return list;
}

/**
 * @note Address: 0x8011AA94
 * @note Size: 0xE4
 */
void LifeGaugeMgr::activeLifeGauge(Game::Creature* obj, f32 lifeRatio)
{
	LifeGaugeList* list = mListInactive.search(obj);
	if (list) {
		f32 segments                   = list->mLifeGauge.mCircleResolution * lifeRatio;
		list->mLifeGauge.mSegmentCount = segments >= 1.0f ? (segments + 0.5f) : (segments - 0.5f);

		list->clearRelations();
		list->mPrev = &mListActive;
		list->mNext = mListActive.mNext;
		if (mListActive.mNext) {
			mListActive.mNext->mPrev = list;
		}
		mListActive.mNext = list;
	}
}

/**
 * @note Address: 0x8011AB78
 * @note Size: 0xA8
 */
void LifeGaugeMgr::inactiveLifeGauge(Game::Creature* obj)
{
	LifeGaugeList* list = mListActive.search(obj);
	if (list) {
		list->mParam.mIsGaugeShown         = false;
		list->mLifeGauge.mTimer            = 0.0f;
		list->mLifeGauge.mCircleResolution = LIFEGAUGE_SEGMENTS;
		list->mLifeGauge.mSegmentCount     = LIFEGAUGE_SEGMENTS;

		list->clearRelations();
		list->mPrev = &mListInactive;
		list->mNext = mListInactive.mNext;
		if (mListInactive.mNext) {
			mListInactive.mNext->mPrev = list;
		}
		mListInactive.mNext = list;
	}
}

/**
 * @note Address: 0x8011AC20
 * @note Size: 0x270
 */
void LifeGaugeMgr::update()
{
	for (LifeGaugeList* list = mListActive.mNext; list; list = list->mNext) {
		list->mGameObject->getLifeGaugeParam(list->mParam);
		if (list->mParam.mIsGaugeShown) {

			if (list->mParam.mCurHealthPercentage > 1.0f) {
				list->mParam.mCurHealthPercentage = 1.0f;
			} else if (list->mParam.mCurHealthPercentage < 0.0f) {
				list->mParam.mCurHealthPercentage = 0.0f;
			}

			list->mLifeGauge.update(list->mParam.mCurHealthPercentage);
		}
		if (1.0f == list->mParam.mCurHealthPercentage) {
			list->mParam.mIsGaugeShown = false;
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	lwz      r31, 0x1c(r3)
	lfs      f31, lbl_80517B38@sda21(r2)
	b        lbl_8011AE6C

lbl_8011AC44:
	lwz      r3, 0x20(r31)
	addi     r4, r31, 0x24
	lwz      r12, 0(r3)
	lwz      r12, 0x13c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x38(r31)
	cmplwi   r0, 0
	beq      lbl_8011AE54
	lfs      f1, 0x30(r31)
	lfs      f0, lbl_80517B38@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8011AC80
	stfs     f0, 0x30(r31)
	b        lbl_8011AC90

lbl_8011AC80:
	lfs      f0, lbl_80517B28@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8011AC90
	stfs     f0, 0x30(r31)

lbl_8011AC90:
	lbz      r6, 0x45(r31)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f3, lbl_80517B40@sda21(r2)
	stw      r6, 0xc(r1)
	lfs      f0, 0x30(r31)
	lfd      f2, 8(r1)
	lfs      f1, lbl_80517B28@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f2, f2, f0
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8011ACD0
	lfs      f1, lbl_80517B2C@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8011ACD8

lbl_8011ACD0:
	lfs      f1, lbl_80517B2C@sda21(r2)
	fsubs    f1, f2, f1

lbl_8011ACD8:
	fctiwz   f1, f1
	lbz      r3, 0x44(r31)
	stfd     f1, 0x10(r1)
	lwz      r0, 0x14(r1)
	clrlwi   r5, r0, 0x18
	cmplw    r3, r5
	beq      lbl_8011ADEC
	subf     r3, r3, r5
	lis      r0, 0x4330
	xoris    r4, r3, 0x8000
	lwz      r3, sys@sda21(r13)
	stw      r4, 0x14(r1)
	lfd      f2, lbl_80517B48@sda21(r2)
	stw      r0, 0x10(r1)
	lfd      f5, lbl_80517B40@sda21(r2)
	lfd      f1, 0x10(r1)
	stw      r6, 0xc(r1)
	fsubs    f6, f1, f2
	lfs      f2, lbl_80517B30@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, 0x54(r3)
	lfd      f4, 8(r1)
	fmuls    f3, f2, f1
	lfs      f1, lbl_80517B34@sda21(r2)
	fsubs    f2, f4, f5
	fdivs    f2, f6, f2
	fabs     f2, f2
	frsp     f2, f2
	fmuls    f3, f3, f2
	fcmpo    cr0, f3, f1
	bge      lbl_8011AD58
	fmr      f3, f1

lbl_8011AD58:
	lfs      f2, 0x3c(r31)
	lfs      f1, lbl_80517B38@sda21(r2)
	fadds    f2, f2, f3
	stfs     f2, 0x3c(r31)
	lfs      f2, 0x3c(r31)
	fcmpo    cr0, f2, f1
	ble      lbl_8011ADCC
	fctiwz   f1, f2
	lbz      r0, 0x44(r31)
	cmplw    r5, r0
	stfd     f1, 0x10(r1)
	lwz      r3, 0x14(r1)
	clrlwi   r0, r3, 0x18
	neg      r5, r0
	ble      lbl_8011AD98
	mr       r5, r0

lbl_8011AD98:
	clrlwi   r3, r3, 0x18
	lis      r0, 0x4330
	lbz      r4, 0x44(r31)
	stw      r3, 0xc(r1)
	add      r3, r4, r5
	lfd      f2, lbl_80517B40@sda21(r2)
	stw      r0, 8(r1)
	lfd      f1, 8(r1)
	stb      r3, 0x44(r31)
	fsubs    f1, f1, f2
	lfs      f2, 0x3c(r31)
	fsubs    f1, f2, f1
	stfs     f1, 0x3c(r31)

lbl_8011ADCC:
	lbz      r0, 0x44(r31)
	cmplwi   r0, 0
	bne      lbl_8011ADEC
	lfs      f1, lbl_80517B28@sda21(r2)
	fcmpo    cr0, f0, f1
	ble      lbl_8011ADEC
	li       r0, 1
	stb      r0, 0x44(r31)

lbl_8011ADEC:
	lfs      f1, lbl_80517B3C@sda21(r2)
	fcmpo    cr0, f0, f1
	bge      lbl_8011AE14
	li       r3, 0xff
	li       r0, 0
	stb      r3, 0x40(r31)
	stb      r0, 0x41(r31)
	stb      r0, 0x42(r31)
	stb      r3, 0x43(r31)
	b        lbl_8011AE54

lbl_8011AE14:
	lfs      f1, lbl_80517B2C@sda21(r2)
	fcmpo    cr0, f0, f1
	bge      lbl_8011AE3C
	li       r3, 0xff
	li       r0, 0
	stb      r3, 0x40(r31)
	stb      r3, 0x41(r31)
	stb      r0, 0x42(r31)
	stb      r3, 0x43(r31)
	b        lbl_8011AE54

lbl_8011AE3C:
	li       r3, 0
	li       r0, 0xff
	stb      r3, 0x40(r31)
	stb      r0, 0x41(r31)
	stb      r3, 0x42(r31)
	stb      r0, 0x43(r31)

lbl_8011AE54:
	lfs      f0, 0x30(r31)
	fcmpu    cr0, f31, f0
	bne      lbl_8011AE68
	li       r0, 0
	stb      r0, 0x38(r31)

lbl_8011AE68:
	lwz      r31, 0x1c(r31)

lbl_8011AE6C:
	cmplwi   r31, 0
	bne      lbl_8011AC44
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
 * @note Address: 0x8011AE90
 * @note Size: 0x80
 */
void LifeGaugeMgr::draw(Graphics& gfx)
{
	if (!Game::moviePlayer || !Game::moviePlayer->isFlag(1)) {
		LifeGaugeList* list;
		if (mListActive.mNext) {
			list = mListActive.mNext;
			mTexture->load(GX_TEXMAP0);
			for (list; list; list = list->mNext) {
				list->draw(gfx);
			}
		}
	}
}

/**
 * @note Address: 0x8011AF10
 * @note Size: 0x98
 */
void LifeGaugeMgr::loadResource()
{
	JKRArchive* arc = JKRMountArchive("/user/Yamashita/arc/gameTex.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	ResTIMG* timg   = JKRGetImageResource("lifeGauge.bti", arc);
	mTexture        = new JUTTexture(timg);
}
