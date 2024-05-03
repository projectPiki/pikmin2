#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DWindow.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/JUtility/JUTResource.h"
#include "types.h"

/**
 * @note Address: 0x80042544
 * @note Size: 0xF8
 */
J2DWindow::J2DWindow()
    : J2DPane()
    , mFrameTextureA(nullptr)
    , mFrameTextureB(nullptr)
    , mFrameTextureC(nullptr)
    , mFrameTextureD(nullptr)
    , mContentsTexture(nullptr)
    , mPalette(nullptr)
{
	mWrapFlags = 0;
	setContentsColor(TCOLOR_WHITE_U32);
	mBlack = TCOLOR_BLACK_U32;
	mWhite = TCOLOR_WHITE_U32;
}

/**
 * @note Address: 0x8004263C
 * @note Size: 0xAC
 */
J2DWindow::J2DWindow(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive)
    : J2DPane()
    , mFrameTextureA(nullptr)
    , mFrameTextureB(nullptr)
    , mFrameTextureC(nullptr)
    , mFrameTextureD(nullptr)
    , mContentsTexture(nullptr)
    , mPalette(nullptr)
{
	private_readStream(parent, input, archive);
}

/**
 * @note Address: 0x800426E8
 * @note Size: 0x560
 */
J2DWindow::J2DWindow(J2DPane* parent, JSURandomInputStream* input, J2DMaterial* materialList)
    : mFrameTextureA(nullptr)
    , mFrameTextureB(nullptr)
    , mFrameTextureC(nullptr)
    , mFrameTextureD(nullptr)
    , mContentsTexture(nullptr)
    , mPalette(nullptr)
{
	u32 streamData[2];
	u32 startPos = input->getPosition();
	input->read(streamData, 8);

	mBloBlockType = 'WIN1';

	u32 newPos = input->getPosition();
	int newData[2];
	input->peek(newData, 8);
	makePaneExStream(parent, input);
	input->seek(newPos + newData[1], SEEK_SET);

	J2DWindowData data;
	input->read(&data, sizeof(J2DWindowData));

	JUtility::TColor* colors[4] = {
		&mContentsColorA,
		&mContentsColorB,
		&mContentsColorC,
		&mContentsColorD,
	};

	u16 matIDs[4];
	J2DMaterial* mats[4];
	for (int i = 0; i < 4; i++) {
		matIDs[i] = data.mContentIds[i];
		mats[i]   = nullptr;
		if (matIDs[i] != 0xFFFF) {
			mats[i] = &materialList[matIDs[i]];
		}
		*colors[i] = JUtility::TColor(data.mContentColors[i]);
	}

	mWrapFlags = data._18;
	mWindowArea.set(data.mMinX, data.mMinY, data.mMinX + data.mOffsetX, data.mMinY + data.mOffsetY);

	u16 parentID           = data.mParentId;
	J2DMaterial* parentMat = nullptr;
	if (parentID != 0xFFFF) {
		parentMat = &materialList[parentID];
	}

	input->seek(startPos + streamData[1], SEEK_SET);
	if (mats[0]) {
		mAlpha = mats[0]->getColorBlock()->getMatColor(0)->a;
	}

	mBlack = JUtility::TColor(0);
	mWhite = JUtility::TColor(0xFFFFFFFF);

	if (mats[0] && mats[0]->getTevBlock()) {
		if (mats[0]->getTevBlock()->getTevStageNum() != 1) {
			J2DGXColorS10* black = mats[0]->getTevBlock()->getTevColor(0);
			s16 blackr           = black->r;
			s16 blackg           = black->g;
			s16 blackb           = black->b;
			s16 blacka           = black->a;
			J2DGXColorS10* white = mats[0]->getTevBlock()->getTevColor(1);
			s16 whiter           = white->r;
			s16 whiteg           = white->g;
			s16 whiteb           = white->b;
			s16 whitea           = white->a;
			mBlack               = JUtility::TColor((((u8)blackr) << 24) | (((u8)blackg) << 16) | (((u8)blackb) << 8) | ((u8)blacka));
			mWhite               = JUtility::TColor((((u8)whiter) << 24) | (((u8)whiteg) << 16) | (((u8)whiteb) << 8) | ((u8)whitea));
		}
	}

	JUTTexture** textures[4] = {
		&mFrameTextureA,
		&mFrameTextureB,
		&mFrameTextureC,
		&mFrameTextureD,
	};

	J2DMaterial* mat;
	for (u32 i = 0; i < 4; i++) {
		if (mats[i] && mats[i]->getTevBlock()) {
			JUTTexture* tempTex = mats[i]->getTevBlock()->getTexture(0);
			if (tempTex) {
				*textures[i] = tempTex;
				mats[i]->getTevBlock()->setUndeleteFlag(~0x1);
			}
		}
	}

	mContentsTexture = nullptr;
	if (parentMat && parentMat->getTevBlock()) {
		JUTTexture* tempTex = parentMat->getTevBlock()->getTexture(0);
		if (tempTex) {
			mContentsTexture = tempTex;
			parentMat->getTevBlock()->setUndeleteFlag(0xfe);
		}
	}
	initinfo2();
}

/**
 * @note Address: 0x80042C48
 * @note Size: 0x4E4
 */
void J2DWindow::private_readStream(J2DPane* parent, JSURandomInputStream* input, JKRArchive* arc)
{
	int startPos = input->getPosition();
	u32 startData[2];
	input->read(startData, 8);
	mBloBlockType = startData[0];
	makePaneStream(parent, input);
	JUTResReference resRef;
	u8 counter = input->readByte();
	f32 x0     = input->readU16();
	f32 y0     = input->readU16();
	f32 x1     = x0 + input->readU16();
	f32 y1     = y0 + input->readU16();
	mWindowArea.set(x0, y0, x1, y1);
	ResTIMG* timg = (ResTIMG*)getPointer(input, 'TIMG', arc);
	if (timg) {
		mFrameTextureA = new JUTTexture(timg, 0);
	}
	timg = (ResTIMG*)getPointer(input, 'TIMG', arc);
	if (timg) {
		mFrameTextureB = new JUTTexture(timg, 0);
	}
	timg = (ResTIMG*)getPointer(input, 'TIMG', arc);
	if (timg) {
		mFrameTextureC = new JUTTexture(timg, 0);
	}
	timg = (ResTIMG*)getPointer(input, 'TIMG', arc);
	if (timg) {
		mFrameTextureD = new JUTTexture(timg, 0);
	}
	ResTLUT* tlut = (ResTLUT*)getPointer(input, 'TLUT', arc);
	if (tlut) {
		mPalette = new JUTPalette(GX_TLUT0, tlut);
	}
	mWrapFlags = input->readByte();
	mContentsColorA.set(input->readU32());
	mContentsColorB.set(input->readU32());
	mContentsColorC.set(input->readU32());
	mContentsColorD.set(input->readU32());
	counter -= 14;
	mContentsTexture = nullptr;
	if (counter != 0) {
		timg = (ResTIMG*)getPointer(input, 'TIMG', arc);
		if (timg) {
			mContentsTexture = new JUTTexture(timg, 0);
		}
		counter--;
	}
	mBlack = JUtility::TColor(0);
	mWhite = JUtility::TColor(0xFFFFFFFF);
	if (counter != 0) {
		mBlack = JUtility::TColor(input->readU32());
		counter--;
	}
	if (counter != 0) {
		mWhite = JUtility::TColor(input->readU32());
	}
	input->seek(startPos + startData[1], SEEK_SET);
	initinfo2();
}

/**
 * @note Address: 0x8004312C
 * @note Size: 0x27C
 */
void J2DWindow::initinfo2()
{
	if (mFrameTextureA && mFrameTextureB && mFrameTextureC && mFrameTextureD) {
		mMinWidth  = mFrameTextureA->getSizeX() + mFrameTextureB->getSizeX();
		mMinHeight = mFrameTextureA->getSizeY() + mFrameTextureC->getSizeY();

	} else {
		mMinWidth  = 1;
		mMinHeight = 1;
		return;
	}

	_145            = 0;
	JUTTexture* tex = mFrameTextureA;
	if (*mFrameTextureB != *tex) {
		_145 |= 1;
		tex = mFrameTextureB;
	}
	if (*mFrameTextureD != *tex) {
		_145 |= 2;
		tex = mFrameTextureD;
	}
	if (*mFrameTextureC != *tex) {
		_145 |= 4;
	}
}

/**
 * @note Address: 0x800433A8
 * @note Size: 0xA8
 */
J2DWindow::~J2DWindow()
{
	delete mFrameTextureA;
	delete mFrameTextureB;
	delete mFrameTextureC;
	delete mFrameTextureD;
	delete mPalette;
	delete mContentsTexture;
}

/**
 * @note Address: 0x80043450
 * @note Size: 0x134
 */
void J2DWindow::draw(const JGeometry::TBox2f& inBox)
{
	JGeometry::TBox2f newBox;
	if (mFrameTextureA && mFrameTextureB && mFrameTextureC && mFrameTextureD) {
		newBox.set(mFrameTextureA->getSizeX(), mFrameTextureA->getSizeY(), inBox.getWidth() - mFrameTextureB->getSizeX(),
		           inBox.getHeight() - mFrameTextureC->getSizeY());
	} else {
		newBox.set(0.0f, 0.0f, inBox.getWidth(), inBox.getHeight());
	}
	draw(inBox, newBox);
}

/**
 * @note Address: 0x80043584
 * @note Size: 0x484
 */
void J2DWindow::draw_private(const JGeometry::TBox2f& box0, const JGeometry::TBox2f& box1)
{
	JGeometry::TBox2f newBox(box1);
	newBox.addPos(box0.i);
	drawContents(newBox);

	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetNumTexGens(1);

	if (mFrameTextureA && mFrameTextureB && mFrameTextureC && mFrameTextureD) {
		f32 startX = box0.i.x;
		f32 startY = box0.i.y;

		f32 x1 = box0.f.x - mFrameTextureD->getSizeX();
		f32 y1 = box0.f.y - mFrameTextureD->getSizeY();

		f32 x2 = startX + mFrameTextureA->getSizeX();
		f32 y2 = startY + mFrameTextureA->getSizeY();

		drawFrameTexture(mFrameTextureA, startX, startY, mWrapFlags & 0x80, mWrapFlags & 0x40, true);

		bool flag1 = isFlag2(1);
		drawFrameTexture(mFrameTextureB, x1, startY, mWrapFlags & 0x20, mWrapFlags & 0x10, flag1);

		u16 u0;
		if (mWrapFlags & 0x20) {
			u0 = 0x8000;
		} else {
			u0 = 0;
		}
		u16 v0;
		if (mWrapFlags & 0x10) {
			v0 = 0;
		} else {
			v0 = 0x8000;
		}
		u16 v1 = v0 ^ 0x8000;

		drawFrameTexture(mFrameTextureB, x2, startY, x1 - x2, mFrameTextureB->getSizeY(), u0, v0, u0, v1, false);

		bool isset2 = isFlag2(2);
		drawFrameTexture(mFrameTextureD, x1, y1, mWrapFlags & 2, mWrapFlags & 1, isset2);

		u16 u1;
		if (mWrapFlags & 2) {
			u1 = 0x8000;
		} else {
			u1 = 0;
		}
		u16 v2;
		if (mWrapFlags & 1) {
			v2 = 0;
		} else {
			v2 = 0x8000;
		}
		v1 = v2 ^ 0x8000;
		drawFrameTexture(mFrameTextureD, x2, y1, x1 - x2, mFrameTextureD->getSizeY(), u1, v2, u1, v1, false);

		u16 u2;
		if (mWrapFlags & 2) {
			u2 = 0;
		} else {
			u2 = 0x8000;
		}
		u16 u3 = u2 ^ 0x8000;
		u16 v3;
		if (mWrapFlags & 1) {
			v3 = 0x8000;
		} else {
			v3 = 0;
		}
		drawFrameTexture(mFrameTextureD, x1, y2, mFrameTextureD->getSizeX(), y1 - y2, u2, v3, u3, v3, false);

		bool isset4 = isFlag2(4);
		drawFrameTexture(mFrameTextureC, startX, y1, mWrapFlags & 8, mWrapFlags & 4, isset4);

		u16 u4;
		if (mWrapFlags & 8) {
			u4 = 0;
		} else {
			u4 = 0x8000;
		}
		u16 u5 = u4 ^ 0x8000;
		u16 v4;
		if (mWrapFlags & 4) {
			v4 = 0x8000;
		} else {
			v4 = 0;
		}
		drawFrameTexture(mFrameTextureC, startX, y2, mFrameTextureC->getSizeX(), y1 - y2, u4, v4, u5, v4, false);
	}
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetNumTexGens(0);
	GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
}

/**
 * @note Address: 0x80043A08
 * @note Size: 0x138
 */
void J2DWindow::draw(const JGeometry::TBox2f& box0, const JGeometry::TBox2f& box1)
{
	if (box0.getWidth() >= mMinWidth && box0.getHeight() >= mMinHeight && isVisible()) {
		makeMatrix(box0.i.x, box0.i.y, 0.0f, 0.0f);
		GXLoadPosMtxImm(mPositionMtx, GX_PNMTX0);
		GXSetCurrentMtx(0);
		mColorAlpha = mAlpha;
		JGeometry::TBox2f newBox(0.0f, 0.0f, box0.getWidth(), box0.getHeight());
		draw_private(newBox, box1);
		Mtx mtx;
		PSMTXIdentity(mtx);
		GXLoadPosMtxImm(mtx, GX_PNMTX0);
	}
}

/**
 * @note Address: 0x80043B40
 * @note Size: 0x12C
 */
void J2DWindow::resize(f32 maxX, f32 maxY)
{
	f32 width  = getWidth();
	f32 height = getHeight();
	J2DPane::resize(maxX, maxY);
	mWindowArea.f.x += maxX - width;
	mWindowArea.f.y += maxY - height;
	for (JSUTreeIterator<J2DPane> it(getFirstChild()); it != getEndChild(); it++) {
		if (it->getTypeID() == PANETYPE_TextBox && it->isConnectParent()) {
			f32 newX = maxX - width + it->getWidth();
			f32 newY = maxY - height + it->getHeight();
			it->J2DPane::resize(newX, newY);
		}
	}
}

/**
 * @note Address: 0x80043C6C
 * @note Size: 0xAC
 */
void J2DWindow::setContentsColor(JUtility::TColor colorA, JUtility::TColor colorB, JUtility::TColor colorC, JUtility::TColor colorD)
{
	mContentsColorA.set(colorA);
	mContentsColorB.set(colorB);
	mContentsColorC.set(colorC);
	mContentsColorD.set(colorD);
}

/**
 * @note Address: 0x80043D18
 * @note Size: 0x68
 */
void J2DWindow::drawSelf(f32 offsetX, f32 offsetY)
{
	Mtx mtx;
	PSMTXIdentity(mtx);
	drawSelf(offsetX, offsetY, &mtx);
}

/**
 * @note Address: 0x80043D80
 * @note Size: 0xF8
 */
void J2DWindow::drawSelf(f32 offsetX, f32 offsetY, Mtx* mtx)
{
	JGeometry::TBox2f box(mBounds);
	box.addPos(JGeometry::TVec2<f32>(offsetX, offsetY));
	if (box.getWidth() >= mMinWidth && box.getHeight() >= mMinHeight) {
		Mtx posMtx;
		PSMTXConcat(*mtx, mGlobalMtx, posMtx);
		GXLoadPosMtxImm(posMtx, 0);
		draw_private(box, mWindowArea);
	}
	clip(mWindowArea);
}

/**
 * @note Address: 0x80043E78
 * @note Size: 0x33C
 */
void J2DWindow::drawContents(const JGeometry::TBox2f& box)
{
	if (box.isValid()) {
		GXSetNumChans(1);
		GXSetNumTexGens(0);
		GXSetNumTevStages(1);
		GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		if ((mContentsColorA & 0xFF) == 0xFF && (mContentsColorB & 0xFF) == 0xFF && (mContentsColorC & 0xFF) == 0xFF
		    && (mContentsColorD & 0xFF) == 0xFF && mColorAlpha == 0xFF) {
			GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_SET);
		} else {
			GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
		}

		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetChanCtrl(GX_COLOR0A0, 0, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
		GXSetNumIndStages(0);
		for (int i = 0; i < 16; i++) {
			GXSetTevDirect(GXTevStageID(i));
		}

		if (!mContentsTexture) {
			JUtility::TColor color1(mContentsColorA);
			JUtility::TColor color2(mContentsColorC);
			JUtility::TColor color3(mContentsColorB);
			JUtility::TColor color4(mContentsColorD);
			if (mColorAlpha != 0xFF) {
				color1.a = color1.a * mColorAlpha / 0xFF;
				color2.a = color2.a * mColorAlpha / 0xFF;
				color3.a = color3.a * mColorAlpha / 0xFF;
				color4.a = color4.a * mColorAlpha / 0xFF;
			}
			GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
			GXBegin(GX_QUADS, GX_VTXFMT0, 4);
			f32 zero = 0.0f;
			GXPosition3f32(box.i.x, box.i.y, zero);
			GXColor1u32(color1);
			GXPosition3f32(box.f.x, box.i.y, zero);
			GXColor1u32(color3);
			GXPosition3f32(box.f.x, box.f.y, zero);
			GXColor1u32(color4);
			GXPosition3f32(box.i.x, box.f.y, zero);
			GXColor1u32(color2);
			GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);
		} else {
			GXClearVtxDesc();
			GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
			GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
			GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
			GXSetNumTexGens(1);
			drawContentsTexture(box.i.x, box.i.y, box.getWidth(), box.getHeight());
		}
	}
}

/**
 * @note Address: 0x800441B4
 * @note Size: 0x180
 */
void J2DWindow::drawFrameTexture(JUTTexture* texture, f32 x0, f32 y0, f32 width, f32 height, u16 maxU, u16 maxV, u16 minU, u16 minV,
                                 bool doLoad)
{
	f32 x1 = x0 + width;
	f32 y1 = y0 + height;
	if (doLoad) {
		texture->load(GX_TEXMAP0);
		setTevMode(texture, mBlack, mWhite);
	}

	JUtility::TColor color(mColorAlpha | 0xFFFFFF00);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);

	f32 z = 0.0f;

	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	GXPosition3f32(x0, y0, z);
	GXColor1u32(color);
	GXTexCoord2u16(minU, minV);

	GXPosition3f32(x1, y0, z);
	GXColor1u32(color);
	GXTexCoord2u16(maxU, minV);

	GXPosition3f32(x1, y1, z);
	GXColor1u32(color);
	GXTexCoord2u16(maxU, maxV);

	GXPosition3f32(x0, y1, z);
	GXColor1u32(color);
	GXTexCoord2u16(minU, maxV);

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);
}

/**
 * @note Address: 0x80044334
 * @note Size: 0x22C
 */
void J2DWindow::drawFrameTexture(JUTTexture* texture, f32 x0, f32 y0, bool doInvertU, bool doInvertV, bool doLoad)
{
	drawFrameTexture(texture, x0, y0, texture->getSizeX(), texture->getSizeY(), doInvertU ? 0 : 0x8000, doInvertV ? 0 : 0x8000,
	                 doInvertU ? 0x8000 : 0, doInvertV ? 0x8000 : 0, doLoad);
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
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r31, r4
	lwz      r4, 0x20(r4)
	lis      r8, 0x4330
	clrlwi.  r0, r7, 0x18
	lhz      r7, 2(r4)
	fmr      f29, f2
	lhz      r4, 4(r4)
	fmr      f28, f1
	xoris    r7, r7, 0x8000
	stw      r8, 0x18(r1)
	xoris    r0, r4, 0x8000
	stw      r7, 0x1c(r1)
	mr       r28, r3
	lfd      f2, lbl_80516880@sda21(r2)
	mr       r30, r5
	lfd      f0, 0x18(r1)
	mr       r29, r6
	stw      r0, 0x24(r1)
	fsubs    f1, f0, f2
	stw      r8, 0x20(r1)
	lfd      f0, 0x20(r1)
	fadds    f30, f28, f1
	fsubs    f0, f0, f2
	fadds    f31, f29, f0
	beq      lbl_80044404
	mr       r3, r31
	li       r4, 0
	bl       load__10JUTTextureF11_GXTexMapID
	lwz      r0, 0x138(r28)
	mr       r3, r28
	mr       r4, r31
	addi     r5, r1, 0xc
	stw      r0, 0x10(r1)
	addi     r6, r1, 0x10
	lwz      r0, 0x13c(r28)
	stw      r0, 0xc(r1)
	bl setTevMode__9J2DWindowFP10JUTTextureQ28JUtility6TColorQ28JUtility6TColor

lbl_80044404:
	lbz      r5, 0xb3(r28)
	li       r0, -256
	li       r3, 0
	li       r4, 9
	or       r0, r5, r0
	li       r5, 1
	stw      r0, 8(r1)
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lis      r31, 0xCC008000@ha
	clrlwi   r3, r30, 0x18
	stfs     f28, 0xCC008000@l(r31)
	neg      r0, r3
	or       r11, r0, r3
	clrlwi   r3, r29, 0x18
	stfs     f29, -0x8000(r31)
	lis      r4, 0x00008000@ha
	lfs      f0, lbl_80516890@sda21(r2)
	neg      r0, r3
	lwz      r12, 8(r1)
	srawi    r5, r11, 0x1f
	stfs     f0, -0x8000(r31)
	addi     r10, r4, 0x00008000@l
	or       r9, r0, r3
	li       r3, 0
	stw      r12, -0x8000(r31)
	and      r5, r10, r5
	srawi    r0, r9, 0x1f
	li       r4, 9
	sth      r5, -0x8000(r31)
	and      r0, r10, r0
	srawi    r6, r11, 0x1f
	li       r5, 1
	sth      r0, -0x8000(r31)
	srawi    r0, r9, 0x1f
	srawi    r8, r11, 0x1f
	andc     r30, r10, r6
	stfs     f30, -0x8000(r31)
	srawi    r7, r9, 0x1f
	srawi    r6, r11, 0x1f
	and      r11, r10, r0
	stfs     f29, -0x8000(r31)
	srawi    r0, r9, 0x1f
	andc     r8, r10, r8
	andc     r9, r10, r7
	stfs     f0, -0x8000(r31)
	and      r29, r10, r6
	andc     r0, r10, r0
	li       r6, 3
	stw      r12, -0x8000(r31)
	li       r7, 0
	sth      r30, -0x8000(r31)
	sth      r11, -0x8000(r31)
	stfs     f30, -0x8000(r31)
	stfs     f31, -0x8000(r31)
	stfs     f0, -0x8000(r31)
	stw      r12, -0x8000(r31)
	sth      r8, -0x8000(r31)
	sth      r9, -0x8000(r31)
	stfs     f28, -0x8000(r31)
	stfs     f31, -0x8000(r31)
	stfs     f0, -0x8000(r31)
	stw      r12, -0x8000(r31)
	sth      r29, -0x8000(r31)
	sth      r0, -0x8000(r31)
	bl       GXSetVtxAttrFmt
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r0, 0x84(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x80044560
 * @note Size: 0x360
 */
void J2DWindow::drawContentsTexture(f32 x0, f32 y0, f32 xOffset, f32 yOffset)
{
	f32 x1     = x0 + xOffset;
	f32 y1     = y0 + yOffset;
	f32 width  = mContentsTexture->getSizeX();
	f32 height = mContentsTexture->getSizeY();
	f32 xTex0  = -(xOffset / width - 1.0f) / 2.0f;
	f32 yTex0  = -(yOffset / height - 1.0f) / 2.0f;
	f32 xTex1  = xTex0 + xOffset / width;
	f32 yTex1  = yTex0 + yOffset / height;
	TContentsColor contentsColor;
	getContentsColor(contentsColor);
	if (mColorAlpha != 0xff) {
		contentsColor.mColorA.a = contentsColor.mColorA.a * mColorAlpha / 0xff;
		contentsColor.mColorB.a = contentsColor.mColorB.a * mColorAlpha / 0xff;
		contentsColor.mColorC.a = contentsColor.mColorC.a * mColorAlpha / 0xff;
		contentsColor.mColorD.a = contentsColor.mColorD.a * mColorAlpha / 0xff;
	}
	mContentsTexture->load(GX_TEXMAP0);
	setTevMode(mContentsTexture, 0, 0xffffffff);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBA6, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);

	f32 z = 0.0f;

	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	GXPosition3f32(x0, y0, z);
	GXColor1u32(contentsColor.mColorA);
	GXTexCoord2f32(xTex0, yTex0);

	GXPosition3f32(x1, y0, z);
	GXColor1u32(contentsColor.mColorB);
	GXTexCoord2f32(xTex1, yTex0);

	GXPosition3f32(x1, y1, z);
	GXColor1u32(contentsColor.mColorD);
	GXTexCoord2f32(xTex1, yTex1);

	GXPosition3f32(x0, y1, z);
	GXColor1u32(contentsColor.mColorC);
	GXTexCoord2f32(xTex0, yTex1);

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBX8, 15);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);
}

/**
 * @note Address: 0x800448C0
 * @note Size: 0x2D8
 */
void J2DWindow::setTevMode(JUTTexture* texture, JUtility::TColor color1, JUtility::TColor color2)
{
	if (color1 == 0 && color2 == 0xFFFFFFFF) {
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
		GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_TEXC, GX_CC_RASC, GX_CC_ZERO);
		if (texture->getTransparency()) {
			GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_TEXA, GX_CA_RASA, GX_CA_ZERO);
		} else {
			GXSetTevColor(GX_TEVREG2, JUtility::TColor(0xFFFFFFFF));
			GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_A2, GX_CA_RASA, GX_CA_ZERO);
		}
		GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, 1, GX_TEVPREV);
		GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, 1, GX_TEVPREV);
		GXSetNumTevStages(1);
		GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	} else {
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
		GXSetTevColor(GX_TEVREG0, color1);
		GXSetTevColor(GX_TEVREG1, color2);
		GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_C0, GX_CC_C2, GX_CC_TEXC, GX_CC_ZERO);
		if (texture->getTransparency()) {
			GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_A0, GX_CA_A1, GX_CA_TEXA, GX_CA_ZERO);
		} else {
			GXSetTevColor(GX_TEVREG2, JUtility::TColor(0xFFFFFFFF));
			GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_A0, GX_CA_A1, GX_CA_A2, GX_CA_ZERO);
		}
		GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, 1, GX_TEVPREV);
		GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, 1, GX_TEVPREV);
		GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		GXSetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_CPREV, GX_CC_RASC, GX_CC_ZERO);
		GXSetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_APREV, GX_CA_RASA, GX_CA_ZERO);
		GXSetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, 1, GX_TEVPREV);
		GXSetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, 1, GX_TEVPREV);
		GXSetNumTevStages(2);
	}
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
}

/**
 * @note Address: 0x80044B98
 * @note Size: 0x7C
 */
JUTTexture* J2DWindow::getFrameTexture(u8 frameMaterialIndex, u8 textureIndex) const
{
	JUTTexture* textures[4] = { mFrameTextureA, mFrameTextureB, mFrameTextureC, mFrameTextureD };
	if (frameMaterialIndex >= 4 || textureIndex != 0) {
		return nullptr;
	}
	return textures[frameMaterialIndex];
}

/**
 * @note Address: 0x80044C14
 * @note Size: 0xB8
 */
bool J2DWindow::isUsed(const ResTIMG* resource)
{
	JUTTexture* textures[5] = { mFrameTextureA, mFrameTextureB, mFrameTextureC, mFrameTextureD, mContentsTexture };
	for (u8 i = 0; i < 5; i++) {
		if (textures[i] != nullptr && textures[i]->mTexInfo == resource) {
			return true;
		}
	}
	return J2DPane::isUsed(resource);
}
