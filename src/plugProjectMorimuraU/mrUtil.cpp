#include "types.h"
#include "Morimura/mrUtil.h"
#include "Morimura/Bases.h"
#include "og/Screen/ogScreen.h"

namespace Morimura {
/**
 * @note Address: 0x803A102C
 * @note Size: 0xB8
 */
void TCallbackScissor::draw(Graphics& gfx, J2DGrafContext& graf)
{
	gfx.mPerspGraph.setPort();
	GXSetScissor(mBounds.i.x, mBounds.i.y, mBounds.getWidth(), mBounds.getHeight());
}

/**
 * @note Address: 0x803A10E4
 * @note Size: 0xC0
 */
TOffsetMsgSet::TOffsetMsgSet(u64* taglist, u64 newtag, int size)
{
	mTagList = nullptr;
	mMsgID   = newtag;
	mSize    = size;

	mTagList = new u64[size];
	mIdList  = new int[size];
	for (int i = 0; i < mSize; i++) {
		u64 temp     = taglist[i];
		u64* currTag = &mTagList[i];

		*currTag = temp - mMsgID;
	}
}

/**
 * @note Address: 0x803A11A4
 * @note Size: 0x68
 */
TOffsetMsgSet::TOffsetMsgSet(u64* taglist, u64 newtag, int size, u64* taglist2, int* alloc)
{
	mTagList = nullptr;
	mMsgID   = newtag;
	mSize    = size;
	mTagList = taglist2;
	mIdList  = alloc;

	for (int i = 0; i < mSize; i++) {
		u64 temp     = taglist[i];
		u64* currTag = &mTagList[i];

		*currTag = temp - mMsgID;
	}
}

/**
 * @note Address: 0x803A120C
 * @note Size: 0x19C
 */
u64 TOffsetMsgSet::getMsgID(int index)
{
	for (int i = 0; i < mSize; i++) {
		mIdList[i] = 0;
	}

	int counter = 1;
	for (int i = index + 1; i >= 10; i /= 10) {
		counter++;
	}

	JUT_ASSERTLINE(91, counter <= mSize, nullptr);

	int offset = index + 1;
	for (int i = counter; i > 1; i--) {
		calcOffset(offset, i - 1);
	}

	mIdList[0] = offset;
	u64 retTag = mMsgID;

	for (int i = 0; i < mSize; i++) {
		int curr = mIdList[i];
		if (curr) {
			u64* currTag = &mTagList[i];

			retTag += *currTag * curr;
		}
	}
	return retTag;
}

/**
 * @note Address: 0x803A13A8
 * @note Size: 0x28
 */
TScreenBase::TScreenBase(JKRArchive* arc, int anims)
{
	mAnimScreens        = nullptr;
	mScreenObj          = nullptr;
	mArchive            = arc;
	mAnimScreenCountMax = anims;
	mCurrEntries        = 0;
}

/**
 * @note Address: 0x803A13D0
 * @note Size: 0x90
 */
void TScreenBase::create(const char* name, u32 flags)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set(name, flags, mArchive);
	::og::Screen::setCallBackMessage(mScreenObj);

	mAnimScreens = new ::og::Screen::AnimScreen*[mAnimScreenCountMax];

	::og::Screen::setAlphaScreen(mScreenObj);
}

/**
 * @note Address: 0x803A1460
 * @note Size: 0xB0
 */
void TScreenBase::addAnim(char* name)
{
	mAnimScreens[mCurrEntries] = new TTestAnimScreen;

	mAnimScreens[mCurrEntries]->init(mArchive, mScreenObj, name);
	mAnimScreens[mCurrEntries]->mSpeed = 0.5f;
	mCurrEntries++;
}

/**
 * @note Address: 0x803A1510
 * @note Size: 0x88
 */
void TScreenBase::update()
{
	if (mScreenObj) {
		mScreenObj->update();
		for (int i = 0; i < mAnimScreenCountMax; i++) {
			mAnimScreens[i]->update();
		}
		mScreenObj->animation();
	}
}

/**
 * @note Address: 0x803A1598
 * @note Size: 0x38
 */
void TScreenBase::draw(Graphics& gfx, J2DPerspGraph* graf)
{
	if (mScreenObj) {
		mScreenObj->draw(gfx, *graf);
	}
}

/**
 * @note Address: 0x803A15D0
 * @note Size: 0x124
 */
TIndPane::TIndPane(char const* name, f32 x, f32 y)
    : CNode("indpane")
{
	mTexture1    = nullptr;
	mTexture2    = nullptr;
	mTexture3    = nullptr;
	mMtxXOffset  = 0.0f;
	mMtxYOffset  = 0.0f;
	mTexMtxScale = 0;
	mRotation    = 0.0f;
	mMtxUseType  = true;
	mTexture1    = new JUTTexture(name);

	mMtxYOffset = 0.02f;
	mMtxXOffset = 0.02f;
	mMinPos     = Vector2f(0.0f, 0.0f);
	mMaxPos     = Vector2f(x, y);
}

/**
 * @note Address: 0x803A16F4
 * @note Size: 0xA4
 */
void TIndPane::createIndTexture(char const* name)
{
	mTexture2 = new JUTTexture(name);
	P2ASSERTLINE(232, mTexture2);
}

/**
 * @note Address: 0x803A1798
 * @note Size: 0x74
 */
void TIndPane::createCaptureTexture(_GXTexFmt fmt) { mTexture3 = new JUTTexture(mMaxPos.x, mMaxPos.y, fmt); }

/**
 * @note Address: 0x803A180C
 * @note Size: 0x308
 */
void TIndPane::draw()
{
	J2DOrthoGraph graf(0.0, 0.0, 640.0, 480.0, -1.0, 1.0);
	graf.setPort();
	P2ASSERTLINE(261, mTexture1);
	P2ASSERTLINE(262, mTexture2);
	mTexture1->load(GX_TEXMAP0);
	mTexture2->load(GX_TEXMAP1);

	GXSetNumTevStages(1);
	GXSetNumIndStages(1);
	GXSetNumChans(0);
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x1e, GX_FALSE, 0x7d);
	GXSetIndTexOrder(GX_IND_TEX_STAGE_0, GX_TEXCOORD0, GX_TEXMAP1);
	GXSetIndTexCoordScale(GX_IND_TEX_STAGE_0, GX_ITS_1, GX_ITS_1);
	Mtx23 mtx;

	if (mMtxUseType) {
		mtx[0][0] = mMtxXOffset;
		mtx[0][1] = 0.0f;
		mtx[0][2] = 0.0f;
		mtx[1][0] = 0.0f;
		mtx[1][1] = mMtxYOffset;
		mtx[1][2] = 0.0f;
	} else {
		Matrixf temp;
		PSMTXRotRad(temp.mMatrix.mtxView, 'z', MTXDegToRad(mRotation));
		mtx[0][0] = temp.mMatrix.structView.xx * 0.5f;
		mtx[0][1] = temp.mMatrix.structView.yx * 0.5f;
		mtx[0][2] = 0.0f;
		mtx[1][0] = temp.mMatrix.structView.xy * 0.5f;
		mtx[1][1] = temp.mMatrix.structView.yy * 0.5f;
		mtx[1][2] = 0.0f;
	}

	GXSetIndTexMtx(GX_ITM_0, mtx, mTexMtxScale);
	GXSetTevIndWarp(GX_TEVSTAGE0, GX_IND_TEX_STAGE_0, 1, 0, GX_ITM_0);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
	GXSetTevOp(GX_TEVSTAGE0, GX_REPLACE);

	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);

	Matrixf mtx2;
	PSMTXIdentity(mtx2.mMatrix.mtxView);
	GXLoadPosMtxImm(mtx2.mMatrix.mtxView, 0);
	GXLoadTexMtxImm(mtx2.mMatrix.mtxView, 0x1e, GX_MTX2x4);
	GXSetCurrentMtx(0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 z  = 0.0f;
	f32 s0 = 0.0f;
	f32 t0 = 0.0f;
	f32 s1 = 1.0f;
	f32 t1 = 1.0f;

	// bottom left
	GXPosition3f32(mMinPos.x, mMinPos.y, z);
	GXTexCoord2f32(s0, t0);

	// bottom right
	GXPosition3f32(mMaxPos.x, mMinPos.y, z);
	GXTexCoord2f32(s1, t0);

	// top right
	GXPosition3f32(mMaxPos.x, mMaxPos.y, z);
	GXTexCoord2f32(s1, t1);

	// top left
	GXPosition3f32(mMinPos.x, mMaxPos.y, z);
	GXTexCoord2f32(s0, t1);
}

/**
 * @note Address: 0x803A1B14
 * @note Size: 0xA8
 */
void TScaleUpCounter::setValue(bool flag1, bool flag2)
{
	if (_A9) {
		og::Screen::CallBack_CounterRV::setValue(false, false);

	} else {
		if (flag1 || flag2 || _A8) {
			_A8 = false;
			if (_AA) {
				og::Screen::CallBack_CounterRV::setValue(true, false);
				_AA = false;
			} else {
				og::Screen::CallBack_CounterRV::setValue(false, true);
			}

		} else {
			og::Screen::CallBack_CounterRV::setValue(flag1, flag2);
		}
	}
}

/**
 * @note Address: 0x803A1BBC
 * @note Size: 0x60
 */
void TScaleUpCounter::forceScaleUp(bool flag)
{
	if (!mIsBlind) {
		setPuyoAnim(true);
		_A8 = true;
	} else {
		setPuyoAnim(false);
	}

	_AA = flag;
}

/**
 * @note Address: 0x803A1C1C
 * @note Size: 0x40
 */
void TScaleUpCounter::setScale(f32 scale, f32 scalesub)
{
	mPane12DistX = _AC * scale;
	for (int i = 0; i < mCurrentDigitNum; i++) {
		og::Screen::CounterKeta* keta = mCounterDigits[i];
		keta->mSize.x                 = scale;
		keta->mSize.y                 = scalesub;
	}
}

/**
 * @note Address: 0x803A1C5C
 * @note Size: 0x1A4
 */
TScaleUpCounter* setScaleUpCounter(P2DScreen::Mgr* screen, u64 inTag, u32* data, u16 flag, JKRArchive* arc)
{
	u64 tagSub1 = og::Screen::maskTag(inTag, 1, 1);
	u64 tagSub2 = og::Screen::maskTag(inTag, 1, 2);
	u64 tagSub3 = tagSub2;
	u16 offs    = 1;

	for (u16 i = 3; i <= 10; i++) {
		u64 tag       = og::Screen::maskTag(inTag, 1, i);
		J2DPane* pane = screen->search(tag);
		if (!pane) {
			offs = i - 1;
			break;
		}

		tagSub3 = tag;
		pane->hide();
	}

	TScaleUpCounter* counter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), flag, offs, arc);
	counter->init(screen, tagSub1, tagSub2, tagSub3, data, true);
	counter->setPuyoAnim(true);
	screen->addCallBack(inTag, counter);
	return counter;
}

/**
 * @note Address: 0x803A1E00
 * @note Size: 0x12C
 */
TScaleUpCounter* setScaleUpCounter2(P2DScreen::Mgr* screen, u64 inTag, u64 searchTag, u32* data, u16 flag, JKRArchive* arc)
{
	screen->search(inTag)->hide();
	screen->search(searchTag)->hide();

	TScaleUpCounter* counter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), flag, 2, arc);
	counter->init(screen, inTag, searchTag, searchTag, data, true);
	counter->setPuyoAnim(true);
	screen->addCallBack(inTag, counter);
	return counter;
}

/**
 * @note Address: 0x803A1F2C
 * @note Size: 0xB8
 */
void TScissorPane::drawSelf(f32, f32, Mtx*)
{
	Matrixf mtx;
	PSMTXIdentity(mtx.mMatrix.mtxView);
	GXLoadPosMtxImm(mtx.mMatrix.mtxView, 0);

	GXSetScissor(mBounds.i.x, mBounds.i.y, mBounds.getWidth(), mBounds.getHeight());
}
} // namespace Morimura
