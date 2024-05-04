#include "CarryInfo.h"
#include "Graphics.h"
#include "Viewport.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "Game/MoviePlayer.h"
#include "nans.h"

namespace {
GXColor sColorTableNumerator[CINFOCOLOR_ColorCount] = {
	{ 30, 30, 255, 255 },   // blue
	{ 255, 0, 0, 255 },     // red
	{ 234, 234, 0, 255 },   // yellow
	{ 255, 255, 255, 255 }, // white (used for treasures to pod)
	{ 255, 255, 255, 255 }, // white (used for treasures to ship)
	{ 102, 153, 153, 255 }, // gray  (used when strugging to lift)
	{ 102, 211, 211, 255 }, // gray  (used for scale blocks)
};

GXColor sColorTableDenominator[CINFOCOLOR_ColorCount] = {
	{ 30, 30, 255, 255 },   // blue
	{ 255, 0, 0, 255 },     // red
	{ 234, 234, 0, 255 },   // yellow
	{ 255, 255, 255, 255 }, // white (treasures to pod)
	{ 255, 255, 255, 255 }, // white (treasures to ship)
	{ 102, 153, 153, 255 }, // gray  (struggling to lift)
	{ 112, 216, 216, 255 }, // gray (scale blocks) - only one where the denominator is different
};
} // namespace

CarryInfoMgr* carryInfoMgr;

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
CarryInfo::CarryInfo()
{
	mGrowRate = 0.0f;
	mYOffset  = 0.0f;
	mState    = CINFO_Hidden;
	mAlpha    = 0;
	mCounter  = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void CarryInfo::appear()
{
	mState   = CINFO_Appear;
	mCounter = 0;
}

/**
 * @note Address: 0x8011AFD0
 * @note Size: 0xC
 */
void CarryInfo::disappear() { mState = CINFO_Disappear; }

/**
 * @note Address: 0x8011AFDC
 * @note Size: 0x264
 */
void CarryInfo::update(const CarryInfoParam& param)
{
	if (mState != CINFO_Hidden) {
		switch (param.mUseType) {
		case CINFOTYPE_Table: {
			switch (mState) {
			case CINFO_Appear: {
				f32 temp = 0.04f * (param.mYOffsetMax - mYOffset);
				mGrowRate += temp;
				mYOffset += mGrowRate;
				mScale = mYOffset / param.mYOffsetMax;
				break;
			}

			case CINFO_Disappear: {
				f32 temp = 0.04f * -mYOffset;
				mGrowRate += temp;
				mYOffset += mGrowRate;

				if (mYOffset < 0.0f) {
					mGrowRate = 0.0f;
					mYOffset  = 0.0f;
					mScale    = 0.0f;
					mState    = CINFO_Hidden;

				} else {
					mScale = mYOffset / param.mYOffsetMax;
				}
				break;
			}
			}
			f32 modifier = 1.0f;
			mGrowRate *= 0.88f;

			modifier        = (mScale > modifier) ? modifier : mScale;
			f32 scaledAlpha = 255.0f * modifier;
			f32 alpha;
			if (scaledAlpha >= 0.0f) {
				alpha = 0.5f + scaledAlpha;
			} else {
				alpha = scaledAlpha - 0.5f;
			}
			mAlpha = (u8)alpha;
			break;
		}

		case CINFOTYPE_Scale: {
			mCounter++;
			if (mYOffset < param.mYOffsetMax) {
				f32 temp = (param.mYOffsetMax - mYOffset) * 0.04f;
				mGrowRate += temp;
			}
			mYOffset += mGrowRate;
			mGrowRate *= 0.9f;
			mScale = mYOffset / param.mYOffsetMax;
			if (mScale > 1.0f) {
				mScale = 1.0f;
			}

			switch (mState) {
			case CINFO_Appear: {
				f32 scaledAlpha = mScale * 255.0f;
				f32 alpha;
				if (scaledAlpha >= 0.0f) {
					alpha = 0.5f + scaledAlpha;
				} else {
					alpha = scaledAlpha - 0.5f;
				}
				mAlpha = (u8)alpha;
				break;
			}

			case CINFO_Disappear: {
				if (mAlpha > 8) {
					mAlpha -= 8;
				} else {
					mAlpha    = 0;
					mGrowRate = 0.0f;
					mYOffset  = 0.0f;
					mScale    = 0.0f;
					mState    = CINFO_Hidden;
				}
				break;
			}
			}

			break;
		}
		}
	}
}

/**
 * @note Address: 0x8011B240
 * @note Size: 0x4AC
 */
void CarryInfo::draw(Graphics& gfx, CarryInfoParam& param)
{
	if (mState != CINFO_Hidden) {
		Mtx gxPosMtx;
		Matrixf transScaledMtx;
		Viewport* vp     = gfx.mCurrentViewport;
		Matrixf* viewMtx = vp->getMatrix(true);

		transScaledMtx(0, 0) = viewMtx->mMatrix.mtxView[0][0] * mScale;
		transScaledMtx(1, 0) = viewMtx->mMatrix.mtxView[0][1] * mScale;
		transScaledMtx(2, 0) = viewMtx->mMatrix.mtxView[0][2] * mScale;
		transScaledMtx(0, 1) = viewMtx->mMatrix.mtxView[1][0] * mScale;
		transScaledMtx(1, 1) = viewMtx->mMatrix.mtxView[1][1] * mScale;
		transScaledMtx(2, 1) = viewMtx->mMatrix.mtxView[1][2] * mScale;
		transScaledMtx(0, 2) = viewMtx->mMatrix.mtxView[2][0] * mScale;
		transScaledMtx(1, 2) = viewMtx->mMatrix.mtxView[2][1] * mScale;
		transScaledMtx(2, 2) = viewMtx->mMatrix.mtxView[2][2] * mScale;

		transScaledMtx(0, 3) = param.mPosition.x;
		transScaledMtx(1, 3) = param.mPosition.y + mYOffset;
		transScaledMtx(2, 3) = param.mPosition.z;

		PSMTXConcat(vp->getMatrix(true)->mMatrix.mtxView, transScaledMtx.mMatrix.mtxView, gxPosMtx);
		GXLoadPosMtxImm(gxPosMtx, GX_PNMTX0);

		switch (param.mUseType) {
		case CINFOTYPE_Table:
			// take colors from color table based on stored carry color/type
			f32 yOffsetTop, yOffsetBottom;
			f32 scaleTop, scaleBottom;
			if (!param.mIsTopFirst) {
				scaleTop      = 0.75f;
				scaleBottom   = 1.1f;
				yOffsetTop    = 7.7000003f;
				yOffsetBottom = -10.150001f;
			} else {
				scaleTop      = 1.1f;
				scaleBottom   = 0.75f;
				yOffsetTop    = 10.150001f;
				yOffsetBottom = -7.7000003f;
			}

			GXColor* top = &sColorTableNumerator[param.mColor];
			Color4 colortop(top->r, top->g, top->b, mAlpha);

			GXColor* bottom = &sColorTableDenominator[param.mColor];
			Color4 colorbottom(bottom->r, bottom->g, bottom->b, mAlpha);

			// initialise the number drawing
			drawNumberPrim(gfx, 0.0f, 0.0f, 10, colortop, 1.0f);

			// draw top and bottom numbers
			drawNumber(gfx, 0.0f, yOffsetTop, param.mCurrentWeight, colortop, scaleTop);
			drawNumber(gfx, 0.0f, yOffsetBottom, param.mMaxWeight, colorbottom, scaleBottom);
			break;

		case CINFOTYPE_Scale:
			// calculate color based on stored counter (for pokos)
			f32 angle       = (TAU * (f32)(mCounter % 32)) / 32;
			f32 colorFactor = (1.0f + sinf(angle)) * 0.5f; // sin function between 0 and 1 centered at 0.5
			Color4 baseColor(255, 138, 21, mAlpha);
			Color4 oscColor(127, 11, 0, mAlpha);

			oscColor.r = colorFactor * (255.0f - (f32)oscColor.r) + (f32)(oscColor.r); // between 127 and 255
			oscColor.g = colorFactor * (155.0f - (f32)oscColor.g) + (f32)(oscColor.g); // between 11 and 155
			oscColor.b = colorFactor * (59.0f - (f32)oscColor.b) + (f32)(oscColor.b);  // between 0 and 59
			oscColor.a = colorFactor * (mAlpha - (f32)oscColor.a) + (f32)(oscColor.a); // between mAlpha and... slightly rounded mAlpha

			f32 num = drawNumber(gfx, 7.0f, 0.0f, param.mValue, baseColor, 1.0f);
			drawNumberPrim(gfx, -num * 0.5f - 3.0f, 0.0f, 11, oscColor, 1.0f);
			break;

		default:
			JUT_PANICLINE(403, "Illegal useType %d\n", param.mUseType);
			break;
		}
	}
}

/**
 * @note Address: 0x8011B6EC
 * @note Size: 0x328
 */
f32 CarryInfo::drawNumber(Graphics& gfx, f32 x, f32 y, int dispNum, Color4& color, f32 scale)
{
	if (dispNum < 10) {
		// draw single digit
		drawNumberPrim(gfx, x, y, dispNum, color, scale);

		return 7.0f * scale;
	}

	if (dispNum < 100) {
		// draw two digits
		// need to offset digits from center so they're not on top of each other
		f32 xOffset = 5.6f * scale;

		drawNumberPrim(gfx, x - xOffset, y, dispNum / 10, color, scale);
		drawNumberPrim(gfx, x + xOffset, y, dispNum % 10, color, scale);

		return 2.0f * xOffset + 7.0f * scale;
	}

	if (dispNum < 1000) {
		// draw three digits
		// need to offset end digits from center so they're not on top of each other
		f32 xOffset = 12.599999f * scale;

		drawNumberPrim(gfx, x - xOffset, y, dispNum / 100, color, scale);
		drawNumberPrim(gfx, x, y, (dispNum / 10) % 10, color, scale);
		drawNumberPrim(gfx, x + xOffset, y, dispNum % 10, color, scale);

		return 2.0f * xOffset + 7.0f * scale;
	}

	// draw four digits
	// need start and end digits equal from center, and middle two equal from center in between
	f32 xOffsetEnd;
	f32 xOffsetMiddle = 5.6f * scale;
	xOffsetEnd        = 3.0f * xOffsetMiddle;

	drawNumberPrim(gfx, x - xOffsetEnd, y, dispNum / 1000, color, scale);
	drawNumberPrim(gfx, x - xOffsetMiddle, y, (dispNum / 100) % 10, color, scale);
	drawNumberPrim(gfx, x + xOffsetMiddle, y, (dispNum / 10) % 10, color, scale);
	drawNumberPrim(gfx, x + xOffsetEnd, y, dispNum % 10, color, scale);

	return 6.0f * xOffsetMiddle + 7.0f * scale;
}

/**
 * @note Address: 0x8011BA14
 * @note Size: 0x1B4
 */
void CarryInfo::drawNumberPrim(Graphics& gfx, f32 x, f32 y, int digit, Color4& color, f32 scale)
{
	f32 scaledOffset = 7.0f * scale;
	f32 factor       = (1.0f / 12.0f);
	f32 xMin         = x - scaledOffset;
	f32 xMax         = x + scaledOffset;
	f32 yMin         = y - scaledOffset;
	f32 yMax         = y + scaledOffset;
	f32 digitStart   = factor * digit;
	f32 digitEnd     = digitStart + factor;
	f32 zero         = 0.0f;
	f32 one          = 1.0f;

	GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 4);

	// bottom left
	GXPosition3f32(xMin, yMin, zero);
	GXColor4u8(color.r, color.g, color.b, color.a);
	GXPosition2f32(digitStart, one);

	// bottom right
	GXPosition3f32(xMax, yMin, zero);
	GXColor4u8(color.r, color.g, color.b, color.a);
	GXPosition2f32(digitEnd, one);

	// top left
	GXPosition3f32(xMin, yMax, zero);
	GXColor4u8(color.r, color.g, color.b, color.a);
	GXPosition2f32(digitStart, zero);

	// top right
	GXPosition3f32(xMax, yMax, zero);
	GXColor4u8(color.r, color.g, color.b, color.a);
	GXPosition2f32(digitEnd, zero);
}

/**
 * @note Address: 0x8011BBC8
 * @note Size: 0x4
 */
void CarryInfoList::init() { }

/**
 * @note Address: 0x8011BBCC
 * @note Size: 0x4C
 */
void CarryInfoList::update()
{
	mOwner->getCarryInfoParam(mParam);
	mParam.mCarryInfo.update(mParam);
}

/**
 * @note Address: 0x8011BC18
 * @note Size: 0x2C
 */
void CarryInfoList::draw(Graphics& gfx) { mParam.mCarryInfo.draw(gfx, mParam); }

/**
 * @note Address: 0x8011BC44
 * @note Size: 0x3C
 */
void PokoInfoOwner::getCarryInfoParam(CarryInfoParam& param)
{
	param.mUseType    = CINFOTYPE_Scale;
	param.mPosition   = mPosition;
	param.mYOffsetMax = 25.0f;
	param.mColor      = CINFOCOLOR_Pod;
	param.mValue      = mValue;
}

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
void PokoInfoOwner::start(CarryInfoList* list, const Vector3f&, int) { list->InfoListBase::init(); }

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
bool PokoInfoOwner::update()
{
	bool res = false;
	if (mList->isFinish() || mList->mOwner != this) {
		res = true;
	} else {
		mTimer += sys->mDeltaTime;
		if (mTimer > 1.5f) {
			mList->mParam.mCarryInfo.mState = CINFO_Disappear;
		}
	}
	return res;
}

/**
 * @note Address: 0x8011BC94
 * @note Size: 0xD4
 */
CarryInfoMgr::CarryInfoMgr(int a)
    : InfoMgr(a)
{
	mNode1.clearRelations();

	mPoko_node.clearRelations();

	PokoInfoOwner* pokolist = new PokoInfoOwner[MAX_POKOINFO];
	for (u32 i = 0; i < MAX_POKOINFO; i++) {
		mPoko_node.add(&pokolist[i]);
	}
}

/**
 * @note Address: 0x8011BF88
 * @note Size: 0x170
 */
CarryInfoMgr::~CarryInfoMgr() { carryInfoMgr = nullptr; }

/**
 * @note Address: 0x8011C0F8
 * @note Size: 0xC0
 */
void CarryInfoMgr::appearPoko(const Vector3f& pos, int value)
{
	PokoInfoOwner* obj = static_cast<PokoInfoOwner*>(mPoko_node.mChild);
	if (obj) {
		CarryInfoList* newlist = regist(obj);
		if (newlist) {
			obj->del();
			mNode1.addHead(obj);
			obj->mList                          = newlist;
			obj->mPosition                      = pos;
			obj->mValue                         = value;
			obj->mTimer                         = 0.0f;
			newlist                             = obj->mList;
			newlist->mParam.mCarryInfo.mState   = CINFO_Appear;
			newlist->mParam.mCarryInfo.mCounter = 0;
		}
	}
}

/**
 * @note Address: 0x8011C1D8
 * @note Size: 0x40
 */
CarryInfoList* CarryInfoMgr::appear(CarryInfoOwner* owner)
{
	CarryInfoList* list = regist(owner);
	if (list) {
		list->mParam.mCarryInfo.mState   = CINFO_Appear;
		list->mParam.mCarryInfo.mCounter = 0;
	}
	return list;
}

/**
 * @note Address: 0x8011C218
 * @note Size: 0x98
 */
void CarryInfoMgr::loadResource()
{
	JKRArchive* arc = JKRMountArchive("/user/Yamashita/arc/gameTex.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	ResTIMG* timg   = JKRGetImageResource("item_0_9.bti", arc);
	JUTTexture* tex = new JUTTexture(timg);
	mTexture        = tex;
}

/**
 * @note Address: 0x8011C2B0
 * @note Size: 0x198
 */
void CarryInfoMgr::draw(Graphics& gfx)
{
	if (!Game::moviePlayer || !Game::moviePlayer->isFlag(Game::MVP_IsActive)) {
		Graphics::clearInitGX();
		GXSetNumChans(1);
		GXSetTevDirect(GX_TEVSTAGE0);
		GXSetNumTevStages(1);
		GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);
		GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
		GXSetZMode(GX_FALSE, GX_LESS, GX_FALSE);
		GXSetCurrentMtx(GX_PNMTX0);
		GXSetNumTexGens(1);
		GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEXCOORD0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
		Matrixf mtx;
		PSMTXIdentity(mtx.mMatrix.mtxView);
		GXLoadTexMtxImm(mtx.mMatrix.mtxView, GX_TEXMTX0, GX_MTX2x4);
		mTexture->load(GX_TEXMAP0);
		InfoMgr<CarryInfoOwner, CarryInfoList>::draw(gfx);
	}
}

/**
 * @note Address: 0x8011C448
 * @note Size: 0x34
 */
void CarryInfoMgr::update()
{
	updatePokoInfoOwners();
	InfoMgr<CarryInfoOwner, CarryInfoList>::update();
}

/**
 * @note Address: 0x8011C47C
 * @note Size: 0x108
 */
void CarryInfoMgr::updatePokoInfoOwners()
{
	bool doDelete;
	PokoInfoOwner* obj;
	PokoInfoOwner* current;

	current = (PokoInfoOwner*)(mNode1.mChild);
	obj     = current;

	for (obj; obj != 0;) {
		current = (PokoInfoOwner*)(obj->mNext);

		if (obj->update()) {
			obj->del();
			mPoko_node.add(obj);
		}
		obj = current;
	}
}
