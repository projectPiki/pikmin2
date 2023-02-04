#include "types.h"
#include "Morimura/mrUtil.h"
#include "Morimura/Bases.h"
#include "og/Screen/ogScreen.h"

namespace Morimura {
/*
 * --INFO--
 * Address:	803A102C
 * Size:	0000B8
 */
void TCallbackScissor::draw(Graphics& gfx, J2DGrafContext& graf)
{
	gfx.mPerspGraph.setPort();
	GXSetScissor(mBounds.i.x, mBounds.i.y, mBounds.f.x - mBounds.i.x, mBounds.f.y - mBounds.i.y);
}

/*
 * --INFO--
 * Address:	803A10E4
 * Size:	0000C0
 */
TOffsetMsgSet::TOffsetMsgSet(u64* taglist, u64 newtag, int size)
{
	mTagList = nullptr;
	mMsgID   = newtag;
	mSize    = size;

	mTagList = new u64[size];
	_04      = new int[size];
	for (int i = 0; i < mSize; i++) {
		u64 temp     = taglist[i];
		u64* currTag = &mTagList[i];

		*currTag = temp - mMsgID;
	}
}

/*
 * --INFO--
 * Address:	803A11A4
 * Size:	000068
 */
TOffsetMsgSet::TOffsetMsgSet(u64* taglist, u64 newtag, int size, u64* taglist2, int* alloc)
{
	mTagList = nullptr;
	mMsgID   = newtag;
	mSize    = size;
	mTagList = taglist2;
	_04      = alloc;

	for (int i = 0; i < mSize; i++) {
		u64 temp     = taglist[i];
		u64* currTag = &mTagList[i];

		*currTag = temp - mMsgID;
	}
}

/*
 * --INFO--
 * Address:	803A120C
 * Size:	00019C
 */
u64 TOffsetMsgSet::getMsgID(int index)
{
	for (int i = 0; i < mSize; i++) {
		_04[i] = 0;
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

	_04[0]     = offset;
	u64 retTag = mMsgID;

	for (int i = 0; i < mSize; i++) {
		int curr = _04[i];
		if (curr) {
			u64* currTag = &mTagList[i];

			retTag += *currTag * curr;
		}
	}
	return retTag;
}

/*
 * --INFO--
 * Address:	803A13A8
 * Size:	000028
 */
TScreenBase::TScreenBase(JKRArchive* arc, int anims)
{
	mAnimScreens        = nullptr;
	mScreenObj          = nullptr;
	mArchive            = arc;
	mAnimScreenCountMax = anims;
	mCurrEntries        = 0;
}

/*
 * --INFO--
 * Address:	803A13D0
 * Size:	000090
 */
void TScreenBase::create(const char* name, u32 flags)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set(name, flags, mArchive);
	::og::Screen::setCallBackMessage(mScreenObj);

	mAnimScreens = new ::og::Screen::AnimScreen*[mAnimScreenCountMax];

	::og::Screen::setAlphaScreen(mScreenObj);
}

/*
 * --INFO--
 * Address:	803A1460
 * Size:	0000B0
 */
void TScreenBase::addAnim(char* name)
{
	mAnimScreens[mCurrEntries] = new TTestAnimScreen;

	mAnimScreens[mCurrEntries]->init(mArchive, mScreenObj, name);
	mAnimScreens[mCurrEntries]->mSpeed = 0.5f;
	mCurrEntries++;
}

/*
 * --INFO--
 * Address:	803A1510
 * Size:	000088
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

/*
 * --INFO--
 * Address:	803A1598
 * Size:	000038
 */
void TScreenBase::draw(Graphics& gfx, J2DPerspGraph* graf)
{
	if (mScreenObj) {
		mScreenObj->draw(gfx, *graf);
	}
}

/*
 * --INFO--
 * Address:	803A15D0
 * Size:	000124
 */
TIndPane::TIndPane(char const* name, f32 x, f32 y)
    : CNode("indpane")
{
	mTexture1 = nullptr;
	mTexture2 = nullptr;
	mTexture3 = nullptr;
	_34       = 0.0f;
	_38       = 0.0f;
	_3C       = 0;
	_40       = 0.0f;
	_44       = true;
	mTexture1 = new JUTTexture(name);

	_38     = 0.02f;
	_34     = 0.02f;
	mMinPos = Vector2f(0.0f, 0.0f);
	mMaxPos = Vector2f(x, y);
}

/*
 * --INFO--
 * Address:	803A16F4
 * Size:	0000A4
 */
void TIndPane::createIndTexture(char const* name)
{
	mTexture2 = new JUTTexture(name);
	P2ASSERTLINE(232, mTexture2);
}

/*
 * --INFO--
 * Address:	803A1798
 * Size:	000074
 */
void TIndPane::createCaptureTexture(_GXTexFmt fmt) { mTexture3 = new JUTTexture(mMaxPos.x, mMaxPos.y, fmt); }

/*
 * --INFO--
 * Address:	803A180C
 * Size:	000308
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

	if (_44) {
		mtx[0][0] = _34;
		mtx[0][1] = 0.0f;
		mtx[0][2] = 0.0f;
		mtx[1][0] = 0.0f;
		mtx[1][1] = _38;
		mtx[1][2] = 0.0f;
	} else {
		Matrixf temp;
		PSMTXRotRad(temp.mMatrix.mtxView, 'z', MTXDegToRad(_40));
		mtx[0][0] = temp.mMatrix.structView.xx * 0.5f;
		mtx[0][1] = temp.mMatrix.structView.yx * 0.5f;
		mtx[0][2] = 0.0f;
		mtx[1][0] = temp.mMatrix.structView.xy * 0.5f;
		mtx[1][1] = temp.mMatrix.structView.yy * 0.5f;
		mtx[1][2] = 0.0f;
	}

	GXSetIndTexMtx(GX_ITM_0, mtx, _3C);
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

	// bottom left
	GXPosition3f32(mMinPos.x, mMinPos.y, 0.0f);
	GXTexCoord2f32(0.0f, 0.0f);

	// bottom right
	GXPosition3f32(mMaxPos.x, mMinPos.y, 0.0f);
	GXTexCoord2f32(1.0f, 0.0f);

	// top right
	GXPosition3f32(mMaxPos.x, mMaxPos.y, 0.0f);
	GXTexCoord2f32(1.0f, 1.0f);

	// top left
	GXPosition3f32(mMinPos.x, mMaxPos.y, 0.0f);
	GXTexCoord2f32(0.0f, 1.0f);
}

/*
 * --INFO--
 * Address:	803A1B14
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	803A1BBC
 * Size:	000060
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

/*
 * --INFO--
 * Address:	803A1C1C
 * Size:	000040
 */
void TScaleUpCounter::setScale(f32 scale, f32 scalesub)
{
	mPane12DistX = _AC * scale;
	for (int i = 0; i < mCurrCounters; i++) {
		og::Screen::CounterKeta* keta = mCounters[i];
		keta->mSize.x                 = scale;
		keta->mSize.y                 = scalesub;
	}
}

/*
 * --INFO--
 * Address:	803A1C5C
 * Size:	0001A4
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

		tagSub3          = tag;
		pane->mIsVisible = false;
	}

	TScaleUpCounter* counter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), flag, offs, arc);
	counter->init(screen, tagSub1, tagSub2, tagSub3, data, true);
	counter->setPuyoAnim(true);
	screen->addCallBack(inTag, counter);
	return counter;
}

/*
 * --INFO--
 * Address:	803A1E00
 * Size:	00012C
 */
TScaleUpCounter* setScaleUpCounter2(P2DScreen::Mgr* screen, u64 inTag, u64 searchTag, u32* data, u16 flag, JKRArchive* arc)
{
	J2DPane* pane    = screen->search(inTag);
	pane->mIsVisible = false;
	pane             = screen->search(searchTag);
	pane->mIsVisible = false;

	TScaleUpCounter* counter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), flag, 2, arc);
	counter->init(screen, inTag, searchTag, searchTag, data, true);
	counter->setPuyoAnim(true);
	screen->addCallBack(inTag, counter);
	return counter;
}

/*
 * --INFO--
 * Address:	803A1F2C
 * Size:	0000B8
 */
void TScissorPane::drawSelf(f32, f32, Mtx*)
{
	Matrixf mtx;
	PSMTXIdentity(mtx.mMatrix.mtxView);
	GXLoadPosMtxImm(mtx.mMatrix.mtxView, 0);

	GXSetScissor(mBounds.i.x, mBounds.i.y, mBounds.f.x - mBounds.i.x, mBounds.f.y - mBounds.i.y);
}
} // namespace Morimura
