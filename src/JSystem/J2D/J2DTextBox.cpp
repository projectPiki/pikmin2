#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DTextBox.h"
#include "JSystem/J2D/J2DPrint.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JUtility/JUTFont.h"
#include "JSystem/JUtility/TColor.h"
#include "stdarg.h"
#include "types.h"

/**
 * @note Address: 0x80040F74
 * @note Size: 0x78
 */
J2DTextBox::J2DTextBox()
    : J2DPane()
    , mFont(nullptr)
    , mCharColor()
    , mGradientColor()
    , mStringPtr(nullptr)
    , mWhite()
    , mBlack()
{
	initiate(nullptr, nullptr, 0, J2DHBIND_Left, J2DVBIND_Top);
}

/**
 * @note Address: 0x80040FEC
 * @note Size: 0x94
 * __ct__10J2DTextBoxFP7J2DPaneP20JSURandomInputStreamP10JKRArchive
 */
J2DTextBox::J2DTextBox(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive)
    : J2DPane()
    , mFont(nullptr)
    , mCharColor()
    , mGradientColor()
    , mStringPtr(nullptr)
    , mWhite()
    , mBlack()
{
	private_readStream(parent, input, archive);
}

/**
 * @note Address: 0x80041080
 * @note Size: 0x460
 * __ct__10J2DTextBoxFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial
 */
J2DTextBox::J2DTextBox(J2DPane* parent, JSURandomInputStream* input, u32 flags, J2DMaterial* materials)
    : J2DPane()
    , mFont(nullptr)
    , mCharColor()
    , mGradientColor()
    , mStringPtr(nullptr)
    , mWhite()
    , mBlack()
{
	J2DTextBoxBlock info;

	int startPos = input->getPosition();

	J2DScrnBlockHeader header;
	input->read(&header, sizeof(J2DScrnBlockHeader));
	mBloBlockType = 'TBX1';

	int panHeaderPos = input->getPosition();
	J2DScrnBlockHeader panHeader;
	input->peek(&panHeader, sizeof(J2DScrnBlockHeader));
	makePaneExStream(parent, input);
	input->seek(panHeaderPos + panHeader.mBlockLength, SEEK_SET);

	input->read(&info, sizeof(J2DTextBoxBlock));
	J2DMaterial* mat = nullptr;

	if (info.mMaterialNum != 0xFFFF) {
		mat = &materials[info.mMaterialNum];

		if (mat) {
			if (mat->getTevBlock()) {
				JUTResFont* font = static_cast<JUTResFont*>(mat->getTevBlock()->getFont());

				if (font) {
					mFont = font;
					mat->getTevBlock()->setFontUndeleteFlag();
				}
			}
			mAlpha = mat->getColorBlock()->getMatColor(0)->a;
		}
	}

	mCharSpacing   = info.mCharSpacing;
	mLineSpacing   = info.mLineSpacing;
	mFontSize.x    = info.mFontSizeX;
	mFontSize.y    = info.mFontSizeY;
	mFlags         = (info.mHBind << 2) | info.mVBind;
	mCharColor     = JUtility::TColor(info.mCharColor);
	mGradientColor = JUtility::TColor(info.mGradientColor);
	setConnectParent(info.mDoConnectParent);

	u16 strLength = 0;
	if (!(flags & 0x2000000)) {
		strLength = info.mTextBoxLength;
		if ((s16)info.mTextBoxLength == -1) {
			strLength = info.mMaxReadLength + 1;
		}
	}

	mStringLength = 0;
	mStringPtr    = nullptr;

	if (strLength != 0) {
		mStringPtr = new char[strLength];
	}

	if (mStringPtr) {
		mStringLength = strLength;
		int temp_r0   = (u16)strLength - 1;
		u16 var_r26_2 = info.mMaxReadLength;

		if (temp_r0 < var_r26_2) {
			var_r26_2 = (u16)temp_r0;
		}

		input->peek(mStringPtr, var_r26_2);
		mStringPtr[var_r26_2] = 0;
	}

	input->skip(info.mMaxReadLength);
	input->seek(startPos + header.mBlockLength, SEEK_SET);
	mBlack = JUtility::TColor(0);
	mWhite = JUtility::TColor(0xFFFFFFFF);

	if (mat && mat->getTevBlock()) {
		if (mat->getTevBlock()->getTevStageNum() != 1) {
			J2DGXColorS10* color0p = mat->getTevBlock()->getTevColor(0);
			GXColorS10 color0;
			color0.r = color0p->r;
			color0.g = color0p->g;
			color0.b = color0p->b;
			color0.a = color0p->a;

			J2DGXColorS10* color1p = mat->getTevBlock()->getTevColor(1);
			GXColorS10 color1;
			color1.r = color1p->r;
			color1.g = color1p->g;
			color1.b = color1p->b;
			color1.a = color1p->a;

			mBlack = JUtility::TColor(((u8)color0.r << 0x18) | ((u8)color0.g << 0x10) | ((u8)color0.b << 8) | (u8)color0.a);
			mWhite = JUtility::TColor(((u8)color1.r << 0x18) | ((u8)color1.g << 0x10) | ((u8)color1.b << 8) | (u8)color1.a);
		}
	}

	mOffsetX         = 0.0f;
	mOffsetY         = 0.0f;
	mIsTextFontOwned = true;
}

/**
 * @note Address: 0x800414EC
 * @note Size: 0x8C
 */
J2DTextBox::J2DTextBox(u64 tag, const JGeometry::TBox2f& box, const ResFONT* resFont, const char* str, s16 strLength, J2DTextBoxHBinding hb,
                       J2DTextBoxVBinding vb)
    : J2DPane(tag, box)
    , mFont(nullptr)
    , mCharColor()
    , mGradientColor()
    , mStringPtr(nullptr)
    , mWhite()
    , mBlack()
{
	initiate(resFont, str, strLength, hb, vb);
}

/**
 * @note Address: 0x80041578
 * @note Size: 0x228
 */
void J2DTextBox::initiate(const ResFONT* resFont, const char* str, s16 strLength, J2DTextBoxHBinding hb, J2DTextBoxVBinding vb)
{
	if (resFont) {
		mFont = new JUTResFont(resFont, nullptr);
	}

	mCharColor.set(0xFFFFFFFF);
	mGradientColor.set(0xFFFFFFFF);
	mBlack = 0;
	mWhite = 0xFFFFFFFF;

	mFlags        = (hb << 2) | vb;
	mStringLength = 0;
	mStringPtr    = nullptr;

	if (str && strLength != 0) {
		copyString(str, strLength);
	}

	mOffsetX     = 0.0f;
	mOffsetY     = 0.0f;
	mCharSpacing = 0.0f;

	if (!mFont) {
		mLineSpacing = 0.0f;
		mFontSize    = JGeometry::TVec2f(0.0f);

	} else {
		mLineSpacing = mFont->getLeading();
		mFontSize.x  = mFont->getWidth();
		mFontSize.y  = mFont->getHeight();
	}

	mBloBlockType    = 'TBX1';
	mIsTextFontOwned = true;
}

/**
 * @note Address: 0x800417A0
 * @note Size: 0x350
 */
void J2DTextBox::private_readStream(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive)
{
	int initialPosition = input->getPosition();

	J2DScrnBlockHeader header;
	input->read(&header, sizeof(header));
	mBloBlockType = header.mBloBlockType;

	makePaneStream(parent, input);
	u8 bytesRemaining = input->readByte();

	ResFONT* resFont = (ResFONT*)getPointer(input, 'FONT', archive);

	if (resFont) {
		mFont = new JUTResFont(resFont, nullptr);
	}

	mCharColor.set(input->readU32());
	mGradientColor.set(input->readU32());
	mFlags       = input->readByte();
	mCharSpacing = input->readS16ToFloat();
	mLineSpacing = input->readS16ToFloat();
	mFontSize.x  = input->readU16ToFloat();
	mFontSize.y  = input->readU16ToFloat();

	s16 strLength = input->readU16();
	mStringPtr    = new char[strLength + 1];
	if (mStringPtr != nullptr) {
		input->read(mStringPtr, strLength);
		mStringPtr[strLength] = '\0';
		mStringLength         = strLength + 1;
	} else {
		input->skip(strLength);
		mStringLength = 0;
	}

	bytesRemaining -= 10;
	if (bytesRemaining != 0) {
		if (input->readByte() != 0) {
			setConnectParent(true);
		}
		bytesRemaining--;
	}

	mBlack = 0;
	mWhite = 0xFFFFFFFF;

	if (bytesRemaining != 0) {
		mBlack.set(input->readU32());
		bytesRemaining--;
	}

	if (bytesRemaining != 0) {
		mWhite.set(input->readU32());
		bytesRemaining--;
	}

	mOffsetX = 0.0f;
	mOffsetY = 0.0f;
	input->seek(initialPosition + header.mBlockLength, SEEK_SET);
	mIsTextFontOwned = true;
}

/**
 * @note Address: 0x80041AF0
 * @note Size: 0x98
 * __dt__10J2DTextBoxFv
 */
J2DTextBox::~J2DTextBox()
{
	if (mIsTextFontOwned) {
		delete mFont;
	}
	delete[] mStringPtr;
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void J2DTextBox::setFontSize()
{
	// this is needed to get weak function ordering right.
	JUTResFont* font = getFont();

	// more code here.
}

/**
 * @note Address: 0x80041B90
 * @note Size: 0x70
 * setFont__10J2DTextBoxFP7JUTFont
 */
void J2DTextBox::setFont(JUTFont* font)
{
	if (!font) {
		return;
	}
	if (mIsTextFontOwned) {
		delete mFont;
	}
	mFont            = static_cast<JUTResFont*>(font);
	mIsTextFontOwned = false;
}

/**
 * @note Address: 0x80041C00
 * @note Size: 0x1A4
 * draw__10J2DTextBoxFff
 */
void J2DTextBox::draw(f32 x, f32 y)
{
	if (!isVisible()) {
		return;
	}

	J2DPrint printer(mFont, mCharSpacing, mLineSpacing, mCharColor, mGradientColor, mBlack, mWhite);
	printer.setFontSize(mFontSize.x, mFontSize.y);

	makeMatrix(x, y, 0.0f, 0.0f);

	GXLoadPosMtxImm(mPositionMtx, GX_PNMTX0);
	GXSetCurrentMtx(GX_PNMTX0);
	GXSetNumIndStages(0);

	for (int i = 0; i < GX_MAXTEVSTAGE; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
	if (mStringPtr) {
		printer.print(0.0f, 0.0f, mAlpha, "%s", mStringPtr);
	}

	Mtx mtx;
	PSMTXIdentity(mtx);
	GXLoadPosMtxImm(mtx, GX_PNMTX0);
}

/**
 * @note Address: 0x80041DA4
 * @note Size: 0x1D0
 * draw__10J2DTextBoxFfff18J2DTextBoxHBinding
 */
void J2DTextBox::draw(f32 x, f32 y, f32 p3, J2DTextBoxHBinding hb)
{
	if (isVisible() == false) {
		return;
	}

	J2DPrint printer(mFont, mCharSpacing, mLineSpacing, mCharColor, mGradientColor, mBlack, mWhite);
	printer.setFontSize(mFontSize.x, mFontSize.y);

	makeMatrix(x, y, 0.0f, 0.0f);
	GXLoadPosMtxImm(mPositionMtx, GX_PNMTX0);
	GXSetCurrentMtx(GX_PNMTX0);
	GXSetNumIndStages(0);
	for (int i = 0; i < GX_MAXTEVSTAGE; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
	if (mStringPtr) {
		printer.printReturn(mStringPtr, p3, 0.0f, hb, J2DVBIND_Top, 0.0f, -mFontSize.y, mAlpha);
	}

	Mtx mtx;
	PSMTXIdentity(mtx);
	GXLoadPosMtxImm(mtx, GX_PNMTX0);
}

/**
 * @note Address: 0x80041F74
 * @note Size: 0xF4
 */
size_t J2DTextBox::setString(const char* format, ...)
{
	va_list args;
	va_start(args, format);

	delete[] mStringPtr;
	size_t length = strlen(format);
	if (length >= 0xFFFF) {
		length = 0xFFFE;
	}
	mStringLength = 0;
	mStringPtr    = new char[length + 1];
	if (mStringPtr) {
		mStringLength = length + 1;
		strcpy(mStringPtr, format);
	}

	va_end(args);
	return length;
}

/**
 * @note Address: 0x80042068
 * @note Size: 0x78
 */
bool J2DTextBox::setConnectParent(bool isConnected)
{
	if (!getPaneTree()->getParent()) {
		return false;
	}

	if (getPaneTree()->getParent()->getObject()->getTypeID() != PANETYPE_Window) {
		return false;
	}

	mIsConnected = isConnected;
	return isConnected;
}

/**
 * @note Address: 0x800420E0
 * @note Size: 0x68
 */
void J2DTextBox::drawSelf(f32 x, f32 y)
{
	Mtx mtx;
	PSMTXIdentity(mtx);
	drawSelf(x, y, &mtx);
}

/**
 * @note Address: 0x80042148
 * @note Size: 0x1A8
 * drawSelf__10J2DTextBoxFffPA3_A4_f
 */
void J2DTextBox::drawSelf(f32 x, f32 y, Mtx* mtx)
{
	J2DPrint printer(mFont, mCharSpacing, mLineSpacing, mCharColor, mGradientColor, mBlack, mWhite);
	printer.setFontSize(mFontSize.x, mFontSize.y);
	Mtx newMtx;
	PSMTXConcat(*mtx, mGlobalMtx, newMtx);
	GXLoadPosMtxImm(newMtx, GX_PNMTX0);
	GXSetNumIndStages(0);
	for (int i = 0; i < GX_MAXTEVSTAGE; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
	printer.locate(x + mBounds.i.x, y + mBounds.i.y);

	if (mStringPtr) {
		printer.printReturn(mStringPtr, mBounds.getWidth() + 0.0001f, mBounds.getHeight(), (J2DTextBoxHBinding)(mFlags >> 2 & 3),
		                    (J2DTextBoxVBinding)(mFlags & 3), mOffsetX, mOffsetY, mColorAlpha);
	}
}

/**
 * @note Address: 0x800422F0
 * @note Size: 0x104
 */
void J2DTextBox::resize(f32 width, f32 height)
{
	if (mIsConnected && getPaneTree() && getPaneTree()->getParent()) {
		J2DPane* obj = getPaneTree()->getParent()->getObject();

		if (obj->getTypeID() == PANETYPE_Window) {
			f32 obj_x = obj->getWidth() + (width - getWidth());
			f32 obj_y = obj->getHeight() + (height - getHeight());
			obj->resize(obj_x, obj_y);
			return;
		}
	}

	J2DPane::resize(width, height);
}

/**
 * @note Address: 0x800423F4
 * @note Size: 0x6C
 */
bool J2DTextBox::isUsed(const ResFONT* resFont)
{
	if (mFont && mFont->getResFont() == resFont) {
		return true;
	}
	return J2DPane::isUsed(resFont);
}

// J2DTextBox::isUsed(const ResTIMG*) will NOT go in the right spot no matter what I try - declaration ordering in vtable, using it
// somewhere above, etc. so... this is the work around. it's ugly but it works.
static void dumbJ2DTextboxOrderingFuncGrumble(J2DTextBox* tbox, JUtility::TColor color, const ResTIMG* timg)
{
	tbox->rewriteAlpha();
	tbox->isUsed(timg);
	tbox->getMaterial();
	tbox->getWhite();
	tbox->getBlack();
	tbox->setBlackWhite(color, color);
	tbox->setWhite(color);
	tbox->setBlack(color);
	tbox->getTypeID();
}
