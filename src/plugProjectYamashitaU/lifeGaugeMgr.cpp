#include "LifeGaugeMgr.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "Game/MoviePlayer.h"
#include "Viewport.h"
#include "nans.h"

// i'd put this in Vector3f but i really dont wanna include all of GX in that - HP.
inline void GXDrawVector3f(Vector3f& vec) { GXPosition3f32(vec.x, vec.y, vec.z); }

LifeGaugeMgr* lifeGaugeMgr;

/**
 * @note Address: 0x80119BFC
 * @note Size: 0x34
 */
LifeGauge::LifeGauge() { init(MAX_LIFEGAUGE_SEGMENTS); }

/**
 * @note Address: 0x80119C30
 * @note Size: 0x14
 */
void LifeGauge::init(u8 maxSegmentNum)
{
	mTimer             = 0.0f;
	mMaxSegmentNum     = maxSegmentNum;
	mCurrentSegmentNum = maxSegmentNum;
}

/**
 * @note Address: 0x80119C44
 * @note Size: 0x1CC
 */
void LifeGauge::update(f32 healthRatio)
{
	u32 newSegmentNum = (u8)(f32)(ROUND_F32_TO_U8(mMaxSegmentNum * healthRatio));

	// need to update segment count
	if (mCurrentSegmentNum != (u8)newSegmentNum) {
		f32 delta = absF(((u8)newSegmentNum - mCurrentSegmentNum) / ((f32)mMaxSegmentNum)) * (sys->mDeltaTime * 150.0f);

		// health will update at least every 3 changes, no matter how small said changes are
		if (delta < 0.4f) {
			delta = 0.4f;
		}

		mTimer += delta;

		// only update segment count when we've changed by at least a segment
		if (mTimer > 1.0f) {
			u8 time = mTimer;
			mCurrentSegmentNum += ((u8)newSegmentNum > mCurrentSegmentNum) ? time : -time;
			mTimer -= (u8)time;
		}

		// if we don't have 0 health, always visibly show at least one segment
		if (mCurrentSegmentNum == 0 && healthRatio > 0.0f) {
			mCurrentSegmentNum = 1;
		}
	}

	// update colors
	if (healthRatio < RED_LIFEGAUGE_RATIO) { // lifegauge red
		mLifeGaugeColor = RED_LIFEGAUGE_COLOR;
	} else if (healthRatio < YELLOW_LIFEGAUGE_RATIO) { // lifegauge yellow
		mLifeGaugeColor = YELLOW_LIFEGAUGE_COLOR;
	} else { // lifegauge green
		mLifeGaugeColor = GREEN_LIFEGAUGE_COLOR;
	}
}

/**
 * @note Address: 0x80119E10
 * @note Size: 0x1BC
 */
void LifeGauge::draw(f32 radius, f32 centerX, f32 centerY)
{
	Vector3f vertices[3];

	// first vertex - we're in 2D drawing mode so z is always 0.0f
	vertices[0] = Vector3f(centerX, centerY, 0.0f);

	// draw segments
	for (int i = 0; i < this->mCurrentSegmentNum; i++) {

		// second vertex is on outside of circle at "start" of segment
		f32 angle     = -HALF_PI - (TAU * ((f32)i / static_cast<f32>(this->mMaxSegmentNum)));
		vertices[1].x = (radius * (f32)cos(angle)) + vertices[0].x;
		vertices[1].y = (radius * (f32)sin(angle)) + vertices[0].y;
		vertices[1].z = vertices[0].z;

		// third vertex is on outside of circle at "end" of segment
		angle         = -HALF_PI - (TAU * ((f32)(i + 1) / static_cast<f32>(this->mMaxSegmentNum)));
		vertices[2].x = (radius * (f32)cos(angle)) + vertices[0].x;
		vertices[2].y = (radius * (f32)sin(angle)) + vertices[0].y;
		vertices[2].z = vertices[0].z;

		// Draw the triangle
		drawOneTri(vertices, mLifeGaugeColor);
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
	GXSetCurrentMtx(GX_PNMTX0);

	Mtx texMtx;
	PSMTXIdentity(texMtx);
	GXLoadTexMtxImm(texMtx, GX_TEXMTX0, GX_MTX2x4);
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

	// draw each vertex (center, start of segment on outside, end of segment on outside)
	for (int i = 0; i < 3; i++) {
		GXDrawVector3f(vertices[i]);
		GXColor4u8(color.r, color.g, color.b, color.a);
	}

	GXEnd();
}

/**
 * @note Address: 0x8011A1CC
 * @note Size: 0x604
 */
void LifeGaugeList::draw(Graphics& gfx)
{
	// if gauge isn't visible, don't bother drawing it, duh
	if (!mParam.mIsGaugeShown) {
		return;
	}

	// half the width of the box the gauge is going to be drawn in - bit bigger than the gauge itself
	// this is so the center of the box is at (0,0) which makes segment vertices easy
	f32 halfWidth = (1.25f * mParam.mRadius);

	Viewport* cVp = gfx.mCurrentViewport;

	Matrixf* viewMtx = cVp->getMatrix(true);
	Matrixf transScaledMtx;
	transScaledMtx(0, 0) = viewMtx->mMatrix.mtxView[0][0];
	transScaledMtx(1, 0) = viewMtx->mMatrix.mtxView[0][1];
	transScaledMtx(2, 0) = viewMtx->mMatrix.mtxView[0][2];
	transScaledMtx(0, 1) = -viewMtx->mMatrix.mtxView[1][0];
	transScaledMtx(1, 1) = -viewMtx->mMatrix.mtxView[1][1];
	transScaledMtx(2, 1) = -viewMtx->mMatrix.mtxView[1][2];
	transScaledMtx(0, 2) = viewMtx->mMatrix.mtxView[2][0];
	transScaledMtx(1, 2) = viewMtx->mMatrix.mtxView[2][1];
	transScaledMtx(2, 2) = viewMtx->mMatrix.mtxView[2][2];

	transScaledMtx(0, 3) = mParam.mPosition.x;
	transScaledMtx(1, 3) = mParam.mPosition.y;
	transScaledMtx(2, 3) = mParam.mPosition.z;

	Mtx posMtx;
	PSMTXConcat(cVp->getMatrix(true)->mMatrix.mtxView, transScaledMtx.mMatrix.mtxView, posMtx);

	GXLoadPosMtxImm(posMtx, GX_MTX3x4);
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
	GXSetCurrentMtx(GX_PNMTX0);
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEXCOORD0, GX_IDENTITY, 0, GX_PTIDENTITY);
	Mtx texMtx;
	PSMTXIdentity(texMtx);
	GXLoadTexMtxImm(texMtx, GX_TEXMTX0, GX_MTX2x4);

	// draw box for gauge
	GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 4);
	f32 z = 0.0f;

	// Draw Top Left
	GXPosition3f32(-halfWidth, halfWidth, z);
	GXColor4u8(255, 255, 255, 255); // white
	GXTexCoord2s8(0, 0);

	// Draw Top Right
	GXPosition3f32(halfWidth, halfWidth, z);
	GXColor4u8(255, 255, 255, 255); // white
	GXTexCoord2s8(1, 0);

	// Draw Bottom Left
	GXPosition3f32(-halfWidth, -halfWidth, z);
	GXColor4u8(255, 255, 255, 255); // white
	GXTexCoord2s8(0, 1);

	// Draw Bottom Right
	GXPosition3f32(halfWidth, -halfWidth, z);
	GXColor4u8(255, 255, 255, 255); // white
	GXTexCoord2s8(1, 1);

	// draw gauge
	LifeGauge::initLifeGaugeDraw();
	// put gauge in center of box
	mLifeGauge.draw(mParam.mRadius, 0.0f, 0.0f);
}

/**
 * @note Address: 0x8011A7D0
 * @note Size: 0xDC
 */
LifeGaugeMgr::LifeGaugeMgr() { }

/**
 * @note Address: 0x8011A944
 * @note Size: 0x150
 */
LifeGaugeList* LifeGaugeMgr::createLifeGauge(Game::Creature* obj)
{
	// find if the creature has a list in the active list
	LifeGaugeList* list = mListActive.search(obj);
	if (!list) {
		// if no active list, search for an inactive one
		list = mListInactive.search(obj);
		if (!list) {
			// if no active OR inactive list, make a new one and add it to the inactive list
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
void LifeGaugeMgr::activeLifeGauge(Game::Creature* obj, f32 healthRatio)
{
	LifeGaugeList* list = mListInactive.search(obj);
	if (list) {
		// calculate segment count based on ratio
		f32 segments                        = list->mLifeGauge.mMaxSegmentNum * healthRatio;
		list->mLifeGauge.mCurrentSegmentNum = ROUND_F32_TO_U8(segments);

		// add to active list
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
		// make life gauge inactive + set back to max health
		list->mParam.mIsGaugeShown          = false;
		list->mLifeGauge.mTimer             = 0.0f;
		list->mLifeGauge.mMaxSegmentNum     = MAX_LIFEGAUGE_SEGMENTS;
		list->mLifeGauge.mCurrentSegmentNum = MAX_LIFEGAUGE_SEGMENTS;

		// add to inactive list
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

		// only update if gauge is shown
		if (list->mParam.mIsGaugeShown) {
			// make sure health is between 0 and 1
			if (list->mParam.mCurrHealthRatio > 1.0f) {
				list->mParam.mCurrHealthRatio = 1.0f;
			} else if (list->mParam.mCurrHealthRatio < 0.0f) {
				list->mParam.mCurrHealthRatio = 0.0f;
			}

			list->mLifeGauge.update(list->mParam.mCurrHealthRatio);
		}
		if (list->mParam.mCurrHealthRatio == 1.0f) {
			// hide gauge when it's back to max health
			list->mParam.mIsGaugeShown = false;
		}
	}
}

/**
 * @note Address: 0x8011AE90
 * @note Size: 0x80
 */
void LifeGaugeMgr::draw(Graphics& gfx)
{
	// don't draw lifegauges in cutscenes
	if (!Game::moviePlayer || !Game::moviePlayer->isFlag(Game::MVP_IsActive)) {
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
