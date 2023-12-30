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
			mSegmentCount += (newAdjustedValue > mSegmentCount) ? 1 : -1;
			mTimer -= static_cast<int>(mTimer);
		}

		if (mSegmentCount == 0 && newFullness > 0.0f) {
			mSegmentCount = 1;
		}
	}

	if (newFullness < 0.2f) { // lifegauge red
		mLifeGaugeColor.r = 255;
		mLifeGaugeColor.g = 0;
		mLifeGaugeColor.b = 0;
		mLifeGaugeColor.a = 255;
	} else if (newFullness < 0.5f) { // lifegauge yellow
		mLifeGaugeColor.r = 255;
		mLifeGaugeColor.g = 255;
		mLifeGaugeColor.b = 0;
		mLifeGaugeColor.a = 255;
	} else { // lifegauge green
		mLifeGaugeColor.r = 0;
		mLifeGaugeColor.g = 255;
		mLifeGaugeColor.b = 0;
		mLifeGaugeColor.a = 255;
	}
}

/**
 * @note Address: 0x80119E10
 * @note Size: 0x1BC
 * TODO
 */
void LifeGauge::draw(f32 size, f32 x, f32 y)
{
	Vector3f position(x, y, 0.0f); // Position of the center

	for (int i = 0; i < this->mSegmentCount; i++) {
		// First vertex
		f32 angleI = static_cast<f32>(i) / static_cast<f32>(this->mCircleResolution);
		f32 angle  = TAU * angleI;

		Vector3f offsetPos;
		offsetPos.x = (size * cos(angle)) + position.x;
		offsetPos.y = (size * sin(angle)) + position.y;
		offsetPos.z = position.z;

		// Second vertex
		f32 nextAngleI = static_cast<f32>(i + 1) / static_cast<f32>(this->mCircleResolution);
		f32 nextAngle  = TAU * nextAngleI;

		Vector3f secondVtx;
		secondVtx.x = (size * cos(nextAngle)) + position.x;
		secondVtx.y = (size * sin(nextAngle)) + position.y;
		secondVtx.z = position.z;

		// Draw the triangle
		drawOneTri(&position, mLifeGaugeColor);
		position = secondVtx;
	}

	// for (int i = 0; i < mSegmentCount; ++i) {
	// 	f32 angle = static_cast<f32>(i) / static_cast<f32>(this->mCircleResolution);

	// 	Vector3f offsetPos;
	// 	offsetPos.x = (size * cos(angle * 6.2831855f - 1.5707964f)) + position.x;
	// 	offsetPos.y = (size * sin(angle * 6.2831855f - 1.5707964f)) + position.y;
	// 	offsetPos.z = position.z;

	// 	Vector3f xyz;
	// 	xyz.x = (size * cos((angle + 1.0f) * 6.2831855f - 1.5707964f)) + position.x;
	// 	xyz.y = (size * sin((angle + 1.0f) * 6.2831855f - 1.5707964f)) + position.y;
	// 	xyz.z = position.z;

	// 	position = xyz;
	// 	drawOneTri(&position, mLifeGaugeColor);
	// }
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
	GXPosition3f32(x, y, z);
	GXColor4u8(255, 255, 255, 255);
	GXTexCoord2s8(1, 0);

	// Draw Bottom Left
	GXPosition3f32(x, y, z);
	GXColor4u8(255, 255, 255, 255);
	GXTexCoord2s8(0, 1);

	// Draw Bottom Right
	GXPosition3f32(x, y, z);
	GXColor4u8(255, 255, 255, 255);
	GXTexCoord2s8(1, 1);

	GXSetTevDirect(GX_TEVSTAGE0);
	GXSetNumChans(1);
	GXSetNumTevStages(1);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetZMode(GX_FALSE, GX_LESS, GX_FALSE);

	GXSetCurrentMtx(0);
	Mtx mtx3;
	PSMTXIdentity(mtx3);
	GXLoadTexMtxImm(mtx3, 30, GX_MTX2x4);
	for (int i = 0; i < mSegmentCount; i++) {
		// TODO
		GXBegin(GX_TRIANGLEFAN, GX_VTXFMT0, 3);
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
	if (!search(obj)) {
		return mListB.mNext;
	}

	if (!search(obj)) {
		LifeGaugeList* list = new LifeGaugeList(obj);
		list->clearRelations();
		list->mPrev  = &mListB;
		list->mNext  = mListB.mNext;
		mListA.mNext = list;
		return list;
	}

	return mListA.mNext;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, 0x1c(r3)
	b        lbl_8011A980

lbl_8011A96C:
	lwz      r0, 0x20(r3)
	cmplw    r0, r29
	bne      lbl_8011A97C
	b        lbl_8011A98C

lbl_8011A97C:
	lwz      r3, 0x1c(r3)

lbl_8011A980:
	cmplwi   r3, 0
	bne      lbl_8011A96C
	li       r3, 0

lbl_8011A98C:
	cmplwi   r3, 0
	bne      lbl_8011AA78
	lwz      r3, 0x64(r31)
	b        lbl_8011A9B0

lbl_8011A99C:
	lwz      r0, 0x20(r3)
	cmplw    r0, r29
	bne      lbl_8011A9AC
	b        lbl_8011A9BC

lbl_8011A9AC:
	lwz      r3, 0x1c(r3)

lbl_8011A9B0:
	cmplwi   r3, 0
	bne      lbl_8011A99C
	li       r3, 0

lbl_8011A9BC:
	cmplwi   r3, 0
	bne      lbl_8011AA78
	li       r3, 0x48
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8011AA1C
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__13LifeGaugeList@ha
	li       r3, 0
	addi     r0, r4, __vt__13LifeGaugeList@l
	lfs      f0, lbl_80517B28@sda21(r2)
	stw      r0, 0(r30)
	li       r0, 0x20
	stb      r3, 0x38(r30)
	stfs     f0, 0x3c(r30)
	stb      r0, 0x45(r30)
	stb      r0, 0x44(r30)
	stw      r29, 0x20(r30)
	stw      r3, 0x1c(r30)
	stw      r3, 0x18(r30)
	stb      r3, 0x38(r30)
	stfs     f0, 0x3c(r30)
	stb      r0, 0x45(r30)
	stb      r0, 0x44(r30)

lbl_8011AA1C:
	lwz      r4, 0x18(r30)
	mr       r3, r30
	cmplwi   r4, 0
	beq      lbl_8011AA34
	lwz      r0, 0x1c(r30)
	stw      r0, 0x1c(r4)

lbl_8011AA34:
	lwz      r4, 0x1c(r30)
	cmplwi   r4, 0
	beq      lbl_8011AA48
	lwz      r0, 0x18(r30)
	stw      r0, 0x18(r4)

lbl_8011AA48:
	li       r4, 0
	addi     r0, r31, 0x48
	stw      r4, 0x1c(r30)
	stw      r4, 0x18(r30)
	stw      r0, 0x18(r30)
	lwz      r0, 0x64(r31)
	stw      r0, 0x1c(r30)
	lwz      r4, 0x64(r31)
	cmplwi   r4, 0
	beq      lbl_8011AA74
	stw      r30, 0x18(r4)

lbl_8011AA74:
	stw      r30, 0x64(r31)

lbl_8011AA78:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8011AA94
 * @note Size: 0xE4
 */
void LifeGaugeMgr::activeLifeGauge(Game::Creature* obj, f32 x)
{
	LifeGaugeList* list = search(obj);

	if (list) {
		f32 y = list->_45 * x;
		if (x >= 0.0f) {
			y = x + 0.5f;
		} else {
			y = x - 0.5f;
		}
		list->mSegmentCount = y;

		list->clearRelations();
		list->mPrev = &mListB;
		list->mNext = mListB.mNext;
		if (list->mNext) {
			list->mNext->mNext = list;
		}
		mListA.mNext = list;
	}

	/*
	stwu     r1, -0x20(r1)
	lwz      r5, 0x64(r3)
	b        lbl_8011AAB4

lbl_8011AAA0:
	lwz      r0, 0x20(r5)
	cmplw    r0, r4
	bne      lbl_8011AAB0
	b        lbl_8011AAC0

lbl_8011AAB0:
	lwz      r5, 0x1c(r5)

lbl_8011AAB4:
	cmplwi   r5, 0
	bne      lbl_8011AAA0
	li       r5, 0

lbl_8011AAC0:
	cmplwi   r5, 0
	beq      lbl_8011AB70
	lbz      r4, 0x45(r5)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f3, lbl_80517B40@sda21(r2)
	stw      r4, 0xc(r1)
	lfs      f0, lbl_80517B28@sda21(r2)
	lfd      f2, 8(r1)
	fsubs    f2, f2, f3
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8011AB04
	lfs      f0, lbl_80517B2C@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_8011AB0C

lbl_8011AB04:
	lfs      f0, lbl_80517B2C@sda21(r2)
	fsubs    f0, f1, f0

lbl_8011AB0C:
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	stb      r0, 0x44(r5)
	lwz      r4, 0x18(r5)
	cmplwi   r4, 0
	beq      lbl_8011AB30
	lwz      r0, 0x1c(r5)
	stw      r0, 0x1c(r4)

lbl_8011AB30:
	lwz      r4, 0x1c(r5)
	cmplwi   r4, 0
	beq      lbl_8011AB44
	lwz      r0, 0x18(r5)
	stw      r0, 0x18(r4)

lbl_8011AB44:
	li       r0, 0
	stw      r0, 0x1c(r5)
	stw      r0, 0x18(r5)
	stw      r3, 0x18(r5)
	lwz      r0, 0x1c(r3)
	stw      r0, 0x1c(r5)
	lwz      r4, 0x1c(r3)
	cmplwi   r4, 0
	beq      lbl_8011AB6C
	stw      r5, 0x18(r4)

lbl_8011AB6C:
	stw      r5, 0x1c(r3)

lbl_8011AB70:
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8011AB78
 * @note Size: 0xA8
 */
void LifeGaugeMgr::inactiveLifeGauge(Game::Creature* obj)
{
	LifeGaugeList* list = search(obj);
	if (list) {
		list->mParam.mIsGaugeShown = false;
		list->_3C                  = 0.0f;
		list->_45                  = LIFEGAUGE_SEGMENTS;
		list->mSegmentCount        = LIFEGAUGE_SEGMENTS;
		list->clearRelations();
		list->mPrev  = &mListB;
		list->mNext  = mListB.mNext;
		mListA.mNext = list;
	}
	/*
	lwz      r5, 0x1c(r3)
	b        lbl_8011AB94

lbl_8011AB80:
	lwz      r0, 0x20(r5)
	cmplw    r0, r4
	bne      lbl_8011AB90
	b        lbl_8011ABA0

lbl_8011AB90:
	lwz      r5, 0x1c(r5)

lbl_8011AB94:
	cmplwi   r5, 0
	bne      lbl_8011AB80
	li       r5, 0

lbl_8011ABA0:
	cmplwi   r5, 0
	beqlr
	li       r0, 0
	lfs      f0, lbl_80517B28@sda21(r2)
	stb      r0, 0x38(r5)
	li       r0, 0x20
	stfs     f0, 0x3c(r5)
	stb      r0, 0x45(r5)
	stb      r0, 0x44(r5)
	lwz      r4, 0x18(r5)
	cmplwi   r4, 0
	beq      lbl_8011ABD8
	lwz      r0, 0x1c(r5)
	stw      r0, 0x1c(r4)

lbl_8011ABD8:
	lwz      r4, 0x1c(r5)
	cmplwi   r4, 0
	beq      lbl_8011ABEC
	lwz      r0, 0x18(r5)
	stw      r0, 0x18(r4)

lbl_8011ABEC:
	li       r4, 0
	addi     r0, r3, 0x48
	stw      r4, 0x1c(r5)
	stw      r4, 0x18(r5)
	stw      r0, 0x18(r5)
	lwz      r0, 0x64(r3)
	stw      r0, 0x1c(r5)
	lwz      r4, 0x64(r3)
	cmplwi   r4, 0
	beq      lbl_8011AC18
	stw      r5, 0x18(r4)

lbl_8011AC18:
	stw      r5, 0x64(r3)
	blr
	*/
}

/**
 * @note Address: 0x8011AC20
 * @note Size: 0x270
 */
void LifeGaugeMgr::update()
{
	for (LifeGaugeList* list = mListA.mNext; list; list = list->mNext) {
		list->mGameObject->getLifeGaugeParam(list->mParam);
		if (list->mParam.mIsGaugeShown) {
			LifeGauge* gauge = nullptr;
			gauge->update(1.0f);
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
		if (LifeGaugeList* list = mListA.mNext) {
			mTexture->load(GX_TEXMAP0);
			for (list; list; list = list->mNext) {
				list->draw(gfx);
			}
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r5, moviePlayer__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_8011AEC0
	lwz      r0, 0x1f0(r5)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8011AEF8

lbl_8011AEC0:
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	beq      lbl_8011AEF8
	lwz      r3, 0x90(r3)
	mr       r31, r0
	li       r4, 0
	bl       load__10JUTTextureF11_GXTexMapID
	b        lbl_8011AEF0

lbl_8011AEE0:
	mr       r3, r31
	mr       r4, r30
	bl       draw__13LifeGaugeListFR8Graphics
	lwz      r31, 0x1c(r31)

lbl_8011AEF0:
	cmplwi   r31, 0
	bne      lbl_8011AEE0

lbl_8011AEF8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
