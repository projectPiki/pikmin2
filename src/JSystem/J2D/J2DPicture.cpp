#include "Dolphin/gx.h"
#include "JSystem/J2D/J2DPicture.h"
#include "JSystem/JGeometry.h"

/**
 * @note Address: 0x80039ADC
 * @note Size: 0xB8
 * __ct__10J2DPictureFv
 */
J2DPicture::J2DPicture()
    : mPalette(nullptr)
{
	for (int i = 0; i < 4; i++) {
		mTextures[i] = nullptr;
	}
	mUsedTextureFlags = 0;
	mTextureCount     = 0;
	initinfo();
}

/**
 * @note Address: 0x80039BA4
 * @note Size: 0xCC
 * __ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP10JKRArchive
 */
J2DPicture::J2DPicture(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive)
    : mPalette(nullptr)
{
	private_readStream(parent, input, archive);
}

/**
 * @note Address: 0x80039C70
 * @note Size: 0x5EC
 * __ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP11J2DMaterial
 */
J2DPicture::J2DPicture(J2DPane* parent, JSURandomInputStream* input, J2DMaterial* materials)
    : mPalette(nullptr)
{
	J2DScrnBlockHeader header;
	int headerPosition = input->getPosition();
	input->read(&header, sizeof(J2DScrnBlockHeader));
	mBloBlockType      = 'PIC1';
	int paneExPosition = input->getPosition();
	J2DScrnBlockHeader paneExHeader;
	input->peek(&paneExHeader, sizeof(J2DScrnBlockHeader));
	makePaneExStream(parent, input);
	input->seek(paneExPosition + paneExHeader.mBlockLength, SEEK_SET);

	J2DScrnBlockPictureParameter trailer;
	input->read(&trailer, sizeof(J2DScrnBlockPictureParameter));
	u16 v1 = trailer.mMaterialID;
	int i  = 0;
	// matches tp debug
	for (i = i; i < 4; i++) {
		mTexCoords[i]    = trailer.mTexCoords[i];
		mCornerColors[i] = JUtility::TColor(GXCOLOR_AS_U32(trailer.mCornerColor[i])); // just need to fix this
	}
	input->seek(headerPosition + header.mBlockLength, SEEK_SET);

	J2DMaterial* material = nullptr;
	if (v1 != 0xFFFF) {
		material = &materials[v1];
	}

	mAlpha = 0xFF;
	if (material != nullptr) {
		mAlpha = material->mColorBlock.mColors[0].a;
	}
	mBlack        = TCOLOR_BLACK_U32;
	mWhite        = TCOLOR_WHITE_U32;
	mTextureCount = 0;
	if (material && material->getTevBlock()) {
		u8 texGenNum   = material->getTexGenBlock()->getTexGenNum();
		u8 tevStageNum = material->getTevBlock()->getTevStageNum();
		if ((texGenNum == 1 && tevStageNum != 1) || (texGenNum != 1 && tevStageNum != texGenNum + 1)) {
			J2DGXColorS10 black = *material->getTevBlock()->getTevColor(0);
			J2DGXColorS10 white = *material->getTevBlock()->getTevColor(1);

			mBlack = JUtility::TColor(RGBA_TO_U32(black.r, black.g, black.b, black.a));
			mWhite = JUtility::TColor(RGBA_TO_U32(white.r, white.g, white.b, white.a));
		}
		mTextureCount = (texGenNum <= 4) ? texGenNum : 4;
	}
	mUsedTextureFlags = 0;
	for (u32 i = 0; i < 4; i++) {
		mTextures[i] = nullptr;
		if (material && material->getTevBlock()) {
			JUTTexture* texture = material->mTevBlock->getTexture(i);
			if (texture != nullptr) {
				mTextures[i]      = texture;
				mUsedTextureFlags = mUsedTextureFlags | (1 << i);
			}
		}
	}
	if (material && material->getTevBlock()) {
		material->mTevBlock->setUndeleteFlag(0xF0);
	}
	mPalette            = nullptr;
	JUtility::TColor v2 = 0xFFFFFFFF;
	JUtility::TColor v3 = 0xFFFFFFFF;
	if (material && material->getTevBlock()) {
		v2 = *material->mTevBlock->getTevKColor(3);
		v3 = *material->mTevBlock->getTevKColor(1);
	}
	setBlendColorRatio(v2.a, v2.b, v2.g, v2.r, 1.0f, 1.0f, 1.0f, 1.0f);
	setBlendAlphaRatio(v3.a, v3.b, v3.g, v3.r, 1.0f, 1.0f, 1.0f, 1.0f);
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stmw     r25, 0xb4(r1)
	mr       r31, r3
	mr       r25, r4
	mr       r27, r5
	mr       r28, r6
	bl       __ct__7J2DPaneFv
	lis      r3, __vt__10J2DPicture@ha
	lis      r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
	addi     r0, r3, __vt__10J2DPicture@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r3, r31, 0x112
	addi     r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
	li       r6, 4
	li       r7, 4
	bl       __construct_array
	li       r0, 0
	lis      r3, __ct__Q28JUtility6TColorFv@ha
	stw      r0, 0x144(r31)
	li       r0, -1
	addi     r4, r3, __ct__Q28JUtility6TColorFv@l
	addi     r3, r31, 0x150
	stw      r0, 0x148(r31)
	li       r5, 0
	li       r6, 4
	li       r7, 4
	stw      r0, 0x14c(r31)
	bl       __construct_array
	li       r0, -1
	mr       r3, r27
	stw      r0, 0x160(r31)
	stw      r0, 0x164(r31)
	lwz      r12, 0(r27)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r27
	addi     r4, r1, 0x2c
	li       r5, 8
	bl       read__14JSUInputStreamFPvl
	lis      r4, 0x50494331@ha
	mr       r3, r27
	addi     r0, r4, 0x50494331@l
	stw      r0, 8(r31)
	lwz      r12, 0(r27)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r27
	addi     r4, r1, 0x24
	li       r5, 8
	bl       peek__20JSURandomInputStreamFPvl
	mr       r3, r31
	mr       r4, r25
	mr       r5, r27
	bl       makePaneExStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream
	lwz      r0, 0x28(r1)
	mr       r3, r27
	li       r5, 0
	add      r4, r29, r0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	lis      r4, "__ct__Q29JGeometry8TVec2<s>Fv"@ha
	addi     r3, r1, 0x44
	addi     r4, r4, "__ct__Q29JGeometry8TVec2<s>Fv"@l
	li       r5, 0
	li       r6, 4
	li       r7, 4
	bl       __construct_array
	mr       r3, r27
	addi     r4, r1, 0x34
	li       r5, 0x30
	bl       read__14JSUInputStreamFPvl
	li       r0, 2
	addi     r10, r1, 0x34
	lhz      r29, 0x38(r1)
	li       r11, 0
	mtctr    r0

lbl_80039DB8:
	lha      r3, 0x10(r10)
	addi     r9, r11, 0x112
	addi     r8, r11, 0x114
	addi     r7, r11, 0x150
	sthx     r3, r31, r9
	addi     r6, r11, 0x151
	addi     r4, r11, 0x152
	addi     r0, r11, 0x153
	lha      r3, 0x12(r10)
	addi     r9, r11, 0x116
	sthx     r3, r31, r8
	addi     r8, r11, 0x118
	lwz      r3, 0x20(r10)
	stw      r3, 0x18(r1)
	lbz      r5, 0x18(r1)
	lbz      r3, 0x19(r1)
	stbx     r5, r31, r7
	addi     r7, r11, 0x154
	lbz      r5, 0x1a(r1)
	stbx     r3, r31, r6
	addi     r6, r11, 0x155
	lbz      r3, 0x1b(r1)
	stbx     r5, r31, r4
	addi     r4, r11, 0x156
	stbx     r3, r31, r0
	addi     r0, r11, 0x157
	addi     r11, r11, 8
	lha      r3, 0x14(r10)
	sthx     r3, r31, r9
	lha      r3, 0x16(r10)
	sthx     r3, r31, r8
	lwz      r3, 0x24(r10)
	addi     r10, r10, 8
	stw      r3, 0x18(r1)
	lbz      r5, 0x18(r1)
	lbz      r3, 0x19(r1)
	stbx     r5, r31, r7
	lbz      r5, 0x1a(r1)
	stbx     r3, r31, r6
	lbz      r3, 0x1b(r1)
	stbx     r5, r31, r4
	stbx     r3, r31, r0
	bdnz     lbl_80039DB8
	lwz      r0, 0x30(r1)
	mr       r3, r27
	li       r5, 0
	add      r4, r30, r0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	cmplwi   r29, 0xffff
	li       r30, 0
	beq      lbl_80039E8C
	mulli    r0, r29, 0x88
	add      r30, r28, r0

lbl_80039E8C:
	li       r0, 0xff
	cmplwi   r30, 0
	stb      r0, 0xb2(r31)
	beq      lbl_80039EA4
	lbz      r0, 0x13(r30)
	stb      r0, 0xb2(r31)

lbl_80039EA4:
	li       r4, 0
	li       r0, -1
	stw      r4, 0x14(r1)
	cmplwi   r30, 0
	lbz      r3, 0x14(r1)
	stw      r0, 0x10(r1)
	lbz      r0, 0x15(r1)
	stb      r3, 0x14c(r31)
	lbz      r3, 0x16(r1)
	stb      r0, 0x14d(r31)
	lbz      r0, 0x17(r1)
	stb      r3, 0x14e(r31)
	lbz      r3, 0x10(r1)
	stb      r0, 0x14f(r31)
	lbz      r0, 0x11(r1)
	stb      r3, 0x148(r31)
	lbz      r3, 0x12(r1)
	stb      r0, 0x149(r31)
	lbz      r0, 0x13(r1)
	stb      r3, 0x14a(r31)
	stb      r0, 0x14b(r31)
	stb      r4, 0x110(r31)
	beq      lbl_8003A01C
	lwz      r3, 0x70(r30)
	cmplwi   r3, 0
	beq      lbl_8003A01C
	lwz      r12, 0(r3)
	lwz      r0, 0x28(r30)
	lwz      r12, 0x58(r12)
	clrlwi   r29, r0, 0x18
	mtctr    r12
	bctrl
	cmplwi   r29, 1
	bne      lbl_80039F38
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_80039F50

lbl_80039F38:
	cmplwi   r29, 1
	beq      lbl_8003A008
	clrlwi   r3, r3, 0x18
	addi     r0, r29, 1
	cmpw     r3, r0
	beq      lbl_8003A008

lbl_80039F50:
	lwz      r3, 0x70(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lha      r27, 0(r3)
	li       r4, 1
	lha      r28, 2(r3)
	lha      r26, 4(r3)
	lha      r25, 6(r3)
	lwz      r3, 0x70(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	rlwinm   r4, r28, 0x10, 8, 0xf
	lha      r0, 2(r3)
	rlwimi   r4, r27, 0x18, 0, 7
	lha      r5, 0(r3)
	rlwimi   r4, r26, 8, 0x10, 0x17
	rlwinm   r0, r0, 0x10, 8, 0xf
	rlwimi   r4, r25, 0, 0x18, 0x1f
	lha      r6, 4(r3)
	stw      r4, 0xc(r1)
	rlwimi   r0, r5, 0x18, 0, 7
	lha      r7, 6(r3)
	rlwimi   r0, r6, 8, 0x10, 0x17
	lbz      r3, 0xc(r1)
	lbz      r5, 0xd(r1)
	rlwimi   r0, r7, 0, 0x18, 0x1f
	stb      r3, 0x14c(r31)
	lbz      r4, 0xe(r1)
	stb      r5, 0x14d(r31)
	lbz      r3, 0xf(r1)
	stw      r0, 8(r1)
	stb      r4, 0x14e(r31)
	lbz      r0, 8(r1)
	stb      r3, 0x14f(r31)
	lbz      r4, 9(r1)
	stb      r0, 0x148(r31)
	lbz      r3, 0xa(r1)
	stb      r4, 0x149(r31)
	lbz      r0, 0xb(r1)
	stb      r3, 0x14a(r31)
	stb      r0, 0x14b(r31)

lbl_8003A008:
	cmplwi   r29, 4
	li       r0, 4
	bgt      lbl_8003A018
	mr       r0, r29

lbl_8003A018:
	stb      r0, 0x110(r31)

lbl_8003A01C:
	li       r25, 0
	li       r26, 0
	stb      r25, 0x111(r31)

lbl_8003A028:
	cmplwi   r30, 0
	addi     r0, r25, 0x100
	li       r3, 0
	stwx     r3, r31, r0
	beq      lbl_8003A080
	lwz      r3, 0x70(r30)
	cmplwi   r3, 0
	beq      lbl_8003A080
	lwz      r12, 0(r3)
	mr       r4, r26
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8003A080
	addi     r4, r25, 0x100
	li       r0, 1
	stwx     r3, r31, r4
	slw      r0, r0, r26
	lbz      r3, 0x111(r31)
	or       r0, r3, r0
	stb      r0, 0x111(r31)

lbl_8003A080:
	addi     r26, r26, 1
	addi     r25, r25, 4
	cmplwi   r26, 4
	blt      lbl_8003A028
	cmplwi   r30, 0
	beq      lbl_8003A0B8
	lwz      r3, 0x70(r30)
	cmplwi   r3, 0
	beq      lbl_8003A0B8
	lwz      r12, 0(r3)
	li       r4, 0xf0
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl

lbl_8003A0B8:
	li       r0, -1
	li       r3, 0
	cmplwi   r30, 0
	stw      r3, 0x144(r31)
	stw      r0, 0x20(r1)
	stw      r0, 0x1c(r1)
	beq      lbl_8003A14C
	lwz      r3, 0x70(r30)
	cmplwi   r3, 0
	beq      lbl_8003A14C
	lwz      r12, 0(r3)
	li       r4, 3
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lbz      r7, 0(r3)
	li       r4, 1
	lbz      r6, 1(r3)
	lbz      r5, 2(r3)
	lbz      r0, 3(r3)
	lwz      r3, 0x70(r30)
	stb      r7, 0x20(r1)
	lwz      r12, 0(r3)
	stb      r6, 0x21(r1)
	lwz      r12, 0x40(r12)
	stb      r5, 0x22(r1)
	stb      r0, 0x23(r1)
	mtctr    r12
	bctrl
	lbz      r6, 0(r3)
	lbz      r5, 1(r3)
	lbz      r4, 2(r3)
	lbz      r0, 3(r3)
	stb      r6, 0x1c(r1)
	stb      r5, 0x1d(r1)
	stb      r4, 0x1e(r1)
	stb      r0, 0x1f(r1)

lbl_8003A14C:
	lbz      r7, 0x23(r1)
	lis      r6, 0x4330
	lbz      r5, 0x22(r1)
	mr       r3, r31
	lbz      r4, 0x21(r1)
	lbz      r0, 0x20(r1)
	lfs      f5, lbl_805167F0@sda21(r2)
	lwz      r12, 0(r31)
	stw      r7, 0x6c(r1)
	fmr      f6, f5
	lfd      f4, lbl_805167F8@sda21(r2)
	fmr      f7, f5
	stw      r6, 0x68(r1)
	fmr      f8, f5
	lwz      r12, 0x108(r12)
	lfd      f0, 0x68(r1)
	stw      r5, 0x74(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x70(r1)
	lfd      f0, 0x70(r1)
	stw      r4, 0x7c(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x78(r1)
	lfd      f0, 0x78(r1)
	stw      r0, 0x84(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x80(r1)
	lfd      f0, 0x80(r1)
	fsubs    f4, f0, f4
	mtctr    r12
	bctrl
	lbz      r7, 0x1f(r1)
	lis      r6, 0x4330
	lbz      r5, 0x1e(r1)
	mr       r3, r31
	lbz      r4, 0x1d(r1)
	lbz      r0, 0x1c(r1)
	lfs      f5, lbl_805167F0@sda21(r2)
	lwz      r12, 0(r31)
	stw      r7, 0x8c(r1)
	fmr      f6, f5
	lfd      f4, lbl_805167F8@sda21(r2)
	fmr      f7, f5
	stw      r6, 0x88(r1)
	fmr      f8, f5
	lwz      r12, 0x10c(r12)
	lfd      f0, 0x88(r1)
	stw      r5, 0x94(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x90(r1)
	lfd      f0, 0x90(r1)
	stw      r4, 0x9c(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x98(r1)
	lfd      f0, 0x98(r1)
	stw      r0, 0xa4(r1)
	fsubs    f3, f0, f4
	stw      r6, 0xa0(r1)
	lfd      f0, 0xa0(r1)
	fsubs    f4, f0, f4
	mtctr    r12
	bctrl
	mr       r3, r31
	lmw      r25, 0xb4(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/**
 * @note Address: 0x8003A278
 * @note Size: 0xE8
 * __ct__10J2DPictureFPC7ResTIMG
 */
J2DPicture::J2DPicture(const ResTIMG* img)
{
	for (int i = 0; i < 4; i++) {
		mTextures[i] = nullptr;
	}
	mUsedTextureFlags = 0;
	mTextureCount     = 0;
	if (img != nullptr) {
		append(img, 1.0f);
	}
	mPalette = nullptr;
	initinfo();
}

/**
 * @note Address: 0x8003A3C4
 * @note Size: 0xE8
 * __ct__10J2DPictureFPCc
 */
J2DPicture::J2DPicture(const char* fileName)
{
	for (int i = 0; i < 4; i++) {
		mTextures[i] = 0;
	}
	mUsedTextureFlags = 0;
	mTextureCount     = 0;
	if (fileName) {
		append(fileName, 1.0f);
	}
	mPalette = nullptr;
	initinfo();
}

/**
 * @note Address: 0x8003A510
 * @note Size: 0xE8
 * __ct__10J2DPictureFP10JUTTexture
 */
J2DPicture::J2DPicture(JUTTexture* texture)
{
	for (int i = 0; i < 4; i++) {
		mTextures[i] = 0;
	}
	mUsedTextureFlags = 0;
	mTextureCount     = 0;
	if (texture) {
		append(texture, 1.0f);
	}
	mPalette = nullptr;
	initinfo();
}

/**
 * @note Address: 0x8003A628
 * @note Size: 0xEC
 * __ct__10J2DPictureFUxRCQ29JGeometry8TBox2<f>
 */
J2DPicture::J2DPicture(u64 id, const JGeometry::TBox2f& bounds)
    : J2DPane(id, bounds)
    , mPalette(nullptr)
{
	initinfo();
	for (int i = 0; i < 4; i++) {
		mTextures[i] = 0;
	}
	mUsedTextureFlags = 0;
	mTextureCount     = 0;
	setBlendRatio(1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
}

/**
 * @note Address: 0x8003A7B0
 * @note Size: 0x3F4
 */
void J2DPicture::private_readStream(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive)
{
	J2DScrnBlockHeader header;
	int headerPosition = input->getPosition();
	input->read(&header, sizeof(J2DScrnBlockHeader));
	mBloBlockType = header.mBloBlockType;
	makePaneStream(parent, input);

	ResTIMG* img;
	ResTLUT* lut;
	u32 v1 = 0;
	u8 v2  = input->readByte();

	img = (ResTIMG*)getPointer(input, 'TIMG', archive);
	lut = (ResTLUT*)getPointer(input, 'TLUT', archive);

	u8 v3 = input->readByte();
	v2 -= 3;
	if (v2 != 0) {
		v1 = input->readByte();
		v2--;
	}

	if (v2 != 0) {
		input->readByte();
		v2--;
	}

	mBlack = TCOLOR_BLACK_U32;
	mWhite = TCOLOR_WHITE_U32;

	if (v2 != 0) {
		mBlack = input->readU32();
		v2--;
	}

	if (v2 != 0) {
		mWhite = input->readU32();
		v2--;
	}

	setCornerColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
	for (int i = 0; v2 != 0 && i < 4; i++) {
		mCornerColors[i] = input->readU32();
		v2--;
	}

	input->seek(headerPosition + header.mBlockLength, SEEK_SET);

	for (int i = 0; i < 4; i++) {
		mTextures[i] = nullptr;
	}
	mTextureCount     = 0;
	mUsedTextureFlags = 1;

	if (img) {
		mTextures[0] = new JUTTexture(img);
		mTextureCount++;
	}
	if (lut) {
		mPalette = new JUTPalette(GX_TLUT0, lut);
		mTextures[0]->attachPalette(mPalette);
	}

	bool check = (v1 >> 2) & 1;
	setTexCoord(mTextures[0], (J2DBinding)(u8)v3, (J2DMirror)(v1 & 3), check);

	setBlendRatio(1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
}

/**
 * @note Address: 0x8003ABA4
 * @note Size: 0x94
 */
void J2DPicture::initiate(const ResTIMG* img, const ResTLUT* lut)
{
	private_initiate(img, lut);
	if (mTextures[0] == nullptr) {
		return;
	}
	place(JGeometry::TBox2f(0.0f, 0.0f, mTextures[0]->getSizeX(), mTextures[0]->getSizeY()));
}

/**
 * @note Address: 0x8003AC38
 * @note Size: 0x13C
 */
void J2DPicture::private_initiate(const ResTIMG* timg, const ResTLUT* tlut)
{
	if (mTextureCount) {
		return;
	}

	if (timg) {
		if (!mTextures[0]) {
			mTextures[0] = new JUTTexture(timg, 0);
			if (mTextures[0]) {
				mTextureCount++;
				mUsedTextureFlags = (mUsedTextureFlags & 0xe) | 1;
			}
		} else {
			mTextures[0]->storeTIMG(timg, (u8)0);
			mTextureCount++;
			mUsedTextureFlags = (mUsedTextureFlags & 0xe) | 1;
		}
	}
	mPalette = nullptr;
	if (tlut && !mPalette) {
		mPalette = new JUTPalette(0, const_cast<ResTLUT*>(tlut));
		if (mTextures[0]) {
			mTextures[0]->attachPalette(mPalette);
		}
	}
}

/**
 * @note Address: 0x8003AD74
 * @note Size: 0x16C
 */
void J2DPicture::initinfo()
{
	mBloBlockType = 'PIC1';
	setTexCoord(nullptr, J2DBIND_Unk15, J2DMIRROR_Unk0, false);
	setBlendRatio(1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);

	mBlack = TCOLOR_BLACK_U32;
	mWhite = TCOLOR_WHITE_U32;
	setCornerColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
}

/**
 * @note Address: 0x8003AEE0
 * @note Size: 0x9C
 * __dt__10J2DPictureFv
 */
J2DPicture::~J2DPicture()
{
	for (int i = 0; i < 4; i++) {
		if ((mUsedTextureFlags & 1 << i) != 0) {
			delete mTextures[i];
		}
	}
	delete mPalette;
}

/**
 * @note Address: 0x8003AF7C
 * @note Size: 0xE0
 */
bool J2DPicture::prepareTexture(u8 num)
{
	for (u8 i = 0; i < num; i++) {
		if (i >= 4) {
			return false;
		}
		if (!mTextures[i]) {
			mTextures[i] = new JUTTexture;
			if (!mTextures[i]) {
				return false;
			}
			mUsedTextureFlags |= 1 << i;
		}
	}
	return true;
}

/**
 * @note Address: 0x8003B05C
 * @note Size: 0x32C
 */
bool J2DPicture::insert(const ResTIMG* timg, JUTPalette* palette, u8 id, f32 blendRatio)
{
	if (!timg || mTextureCount >= 4 || id >= 4 || id > mTextureCount) {
		return false;
	}

	u8 thing = 0;
	if (timg->mPaletteFormat && !palette) {
		thing = getUsableTlut(mTextureCount);
	}

	JUTTexture* texture;
	if (!mTextures[mTextureCount]) {
		texture = new JUTTexture(timg, thing);
		if (palette) {
			texture->storeTIMG(timg, palette);
		}
		for (u8 i = 3; i > id; i--) {
			mTextures[i]        = mTextures[i - 1];
			mBlendColorRatio[i] = mBlendColorRatio[i - 1];
			mBlendAlphaRatio[i] = mBlendAlphaRatio[i - 1];
		}

		mUsedTextureFlags = (mUsedTextureFlags & ((1 << id) - 1)) | ((mUsedTextureFlags & ~((1 << id) - 1)) * 2);
		mUsedTextureFlags |= (1 << id);
	} else {
		texture = mTextures[mTextureCount];
		if (palette == nullptr) {
			mTextures[mTextureCount]->storeTIMG(timg, thing);
		} else {
			mTextures[mTextureCount]->storeTIMG(timg, palette);
		}

		u8 tempFlags[4];
		for (u8 i = 0; i < 4; i++) {
			tempFlags[i] = (mUsedTextureFlags & (1 << i)) != 0;
		}

		for (u8 i = mTextureCount; i > id; i--) {
			mTextures[i]        = mTextures[i - 1];
			tempFlags[i]        = tempFlags[i - 1];
			mBlendColorRatio[i] = mBlendColorRatio[i - 1];
			mBlendAlphaRatio[i] = mBlendAlphaRatio[i - 1];
		}

		mUsedTextureFlags = 0;

		for (u8 i = 0; i < 4; i++) {
			if (tempFlags[i] != 0) {
				mUsedTextureFlags |= (1 << i);
			}
		}

		mUsedTextureFlags |= (1 << id);
	}

	mTextures[id]        = texture;
	mBlendColorRatio[id] = blendRatio;
	mBlendAlphaRatio[id] = blendRatio;

	if (mTextureCount == 0 && mTextures[0] != nullptr) {
		place(JGeometry::TBox2f(0.0f, 0.0f, mTextures[0]->getSizeX(), mTextures[0]->getSizeY()));
		setTexCoord(nullptr, J2DBIND_Unk15, J2DMIRROR_Unk0, false);
	}

	mTextureCount++;
	setBlendKonstColor();
	setBlendKonstAlpha();
	return true;
}

/**
 * @note Address: 0x8003B388
 * @note Size: 0x78
 * insert__10J2DPictureFPCcP10JUTPaletteUcf
 */
bool J2DPicture::insert(const char* fileName, JUTPalette* palette, u8 id, f32 blendRatio)
{
	return insert((ResTIMG*)J2DScreen::getNameResource(fileName), palette, id, blendRatio);
}

/**
 * @note Address: 0x8003B400
 * @note Size: 0x1D8
 */
bool J2DPicture::insert(JUTTexture* texture, u8 id, f32 blendRatio)
{
	if (!texture || mTextureCount >= 4 || id >= 4 || id > mTextureCount) {
		return false;
	}

	if (mTextures[3] != nullptr && mUsedTextureFlags & 8) {
		delete mTextures[3];
		mUsedTextureFlags &= 0x7;
	}

	for (u8 i = 3; i > id; i--) {
		mTextures[i]        = mTextures[i - 1];
		mBlendColorRatio[i] = mBlendColorRatio[i - 1];
		mBlendAlphaRatio[i] = mBlendAlphaRatio[i - 1];
	}

	mUsedTextureFlags = (mUsedTextureFlags & ((1 << id) - 1)) | ((mUsedTextureFlags & ~((1 << id) - 1)) * 2);
	mTextures[id]     = texture;
	mUsedTextureFlags &= ~(1 << id);

	mBlendColorRatio[id] = blendRatio;
	mBlendAlphaRatio[id] = blendRatio;

	if (mTextureCount == 0 && &mTextures[0] != nullptr) {
		place(JGeometry::TBox2<f32>(0.0f, 0.0f, mTextures[0]->getSizeX(), mTextures[0]->getSizeY()));
		setTexCoord(nullptr, J2DBIND_Unk15, J2DMIRROR_Unk0, false);
	}

	mTextureCount++;
	setBlendKonstColor();
	setBlendKonstAlpha();
	return true;
}

/**
 * @note Address: 0x8003B5D8
 * @note Size: 0x130
 */
int J2DPicture::remove(u8 id)
{
	if (mTextureCount <= id || mTextureCount == 1) {
		return false;
	}
	if ((mUsedTextureFlags & 1 << id) != 0) {
		delete mTextures[id];
	}
	for (u8 i = id; mTextureCount - 1 > i; i++) {
		mTextures[i]        = mTextures[i + 1];
		mBlendColorRatio[i] = mBlendColorRatio[i + 1];
		mBlendAlphaRatio[i] = mBlendAlphaRatio[i + 1];
	}
	mTextures[mTextureCount - 1] = nullptr;

	mUsedTextureFlags = (mUsedTextureFlags & ((1 << id) - 1)) | ((mUsedTextureFlags & ~((1 << (id + 1)) - 1)) >> 1);

	mTextureCount--;
	setBlendKonstColor();
	setBlendKonstAlpha();
	return true;
}

/**
 * @note Address: 0x8003B708
 * @note Size: 0x60
 * remove__10J2DPictureFP10JUTTexture
 */
int J2DPicture::remove(JUTTexture* texture)
{
	u8 i;
	for (i = 0; i < mTextureCount; i++) {
		if (mTextures[i] == texture) {
			break;
		}
	}
	return remove(i);
}

/**
 * @note Address: 0x8003B768
 * @note Size: 0xE8
 */
ResTIMG* J2DPicture::changeTexture(const ResTIMG* img, u8 id)
{
	if (id > mTextureCount || 4 <= id || img == nullptr) {
		return nullptr;
	}
	ResTIMG* result;
	if (id < mTextureCount) {
		JUTTexture* texture = getTexture(id);
		result              = texture->mTexInfo;
		u8 v1               = 0;
		if (img->mPaletteFormat != 0) {
			v1 = getUsableTlut(id);
		}
		getTexture(id)->storeTIMG(img, v1);
		return result;
	}
	append(img, 1.0f);
	return nullptr;
}

/**
 * @note Address: 0x8003B874
 * @note Size: 0x58
 * changeTexture__10J2DPictureFPCcUc
 */
ResTIMG* J2DPicture::changeTexture(const char* fileName, u8 id)
{
	return changeTexture((ResTIMG*)J2DScreen::getNameResource(fileName), id);
}

/**
 * @note Address: 0x8003B8CC
 * @note Size: 0x108
 */
ResTIMG* J2DPicture::changeTexture(const ResTIMG* timg, u8 id, JUTPalette* palette)
{
	if (id > mTextureCount || 4 <= id || timg == nullptr) {
		return nullptr;
	}

	ResTIMG* img = nullptr;
	if (id < mTextureCount) {
		JUTTexture* tex = getTexture(id);
		GXTlut tlut     = GX_TLUT0;
		img             = tex->mTexInfo;
		if (timg->mPaletteFormat != 0) {
			u8 tlutID = getUsableTlut(id);
			tlut      = getTlutID(timg, tlutID);
		}
		getTexture(id)->storeTIMG(timg, palette, tlut);
		return img;
	} else {
		append(timg, palette, 1.0f);
	}
	return img;
}

/**
 * @note Address: 0x8003BA04
 * @note Size: 0x68
 * changeTexture__10J2DPictureFPCcUcP10JUTPalette
 */
ResTIMG* J2DPicture::changeTexture(const char* fileName, u8 id, JUTPalette* palette)
{
	return changeTexture((ResTIMG*)J2DScreen::getNameResource(fileName), id, palette);
}

/**
 * @note Address: 0x8003BA6C
 * @note Size: 0x68
 */
void J2DPicture::drawSelf(f32 x, f32 y)
{
	Mtx texMtx;
	PSMTXIdentity(texMtx);
	drawSelf(x, y, &texMtx);
}

/**
 * @note Address: 0x8003BAD4
 * @note Size: 0x6C
 * drawSelf__10J2DPictureFffPA3_A4_f
 */
void J2DPicture::drawSelf(f32 x, f32 y, Mtx* texMtx)
{
	if (mTextures[0] != nullptr && mTextureCount != 0) {
		drawFullSet(mGlobalBounds.i.x + x, mGlobalBounds.i.y + y, mBounds.getWidth(), mBounds.getHeight(), texMtx);
	}
}

/**
 * @note Address: 0x8003BB40
 * @note Size: 0x74
 */
void J2DPicture::drawFullSet(f32 x, f32 y, f32 width, f32 height, Mtx* texMtx)
{
	if (mTextures[0] != nullptr && mTextureCount != 0) {
		drawTexCoord(mBounds.i.x, mBounds.i.y, width, height, mTexCoords[0].x, mTexCoords[0].y, mTexCoords[1].x, mTexCoords[1].y,
		             mTexCoords[2].x, mTexCoords[2].y, mTexCoords[3].x, mTexCoords[3].y, texMtx);
	}
}

/**
 * @note Address: 0x8003BBB4
 * @note Size: 0x2F4
 */
void J2DPicture::draw(f32 x, f32 y, f32 width, f32 height, bool a1, bool a2, bool a3)
{
	if (isVisible() && mTextureCount != 0 && mTextures[0]) {

		for (u8 i = 0; i < mTextureCount; i++) {
			load(i);
		}
		GXSetNumTexGens(mTextureCount);
		mColorAlpha = mAlpha;
		JUtility::TColor cornerColors[4];
		getNewColor(cornerColors);
		setTevMode();
		makeMatrix(x, y, 0.0f, 0.0f);
		GXLoadPosMtxImm(mPositionMtx, 0);
		GXSetCurrentMtx(0);
		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);

		JGeometry::TVec2<s16> coords[4];
		setTexCoord(coords, (mTextures[0]), J2DBIND_Unk15, J2DMirror(a1 << 1 | a2), a3);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_S16, 8);
		GXBegin(GX_QUADS, GX_VTXFMT0, 4);

		f32 zero = 0.0f;

		// bottom left
		GXPosition3f32(zero, zero, zero);
		GXColor1u32(cornerColors[0]);
		GXPosition2u16(coords[0].x, coords[0].y);

		// bottom right
		GXPosition3f32(width, zero, zero);
		GXColor1u32(cornerColors[1]);
		GXPosition2u16(coords[1].x, coords[1].y);

		// top right
		GXPosition3f32(width, height, zero);
		GXColor1u32(cornerColors[3]);
		GXPosition2u16(coords[3].x, coords[3].y);

		// top left
		GXPosition3f32(zero, height, zero);
		GXColor1u32(cornerColors[2]);
		GXPosition2u16(coords[2].x, coords[2].y);

		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_U16, 0xf);
		GXSetNumTexGens(0);
		GXSetNumTevStages(1);
		GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		Mtx mtx;
		PSMTXIdentity(mtx);
		GXLoadPosMtxImm(mtx, 0);
		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
		GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
	}
}

/**
 * @note Address: 0x8003BEA8
 * @note Size: 0x34
 * load__10J2DPictureFUc
 */
void J2DPicture::load(u8 p1) { load((GXTexMapID)p1, p1); }

/**
 * @note Address: 0x8003BF28
 * @note Size: 0x3FC
 */
void J2DPicture::drawOut(const JGeometry::TBox2f& posBox, const JGeometry::TBox2f& texRect)
{
	if (isVisible() && mTextureCount != 0 && mTextures[0]) {

		for (u8 i = 0; i < mTextureCount; i++) {
			load(i);
		}
		GXSetNumTexGens(mTextureCount);

		f32 s0 = (posBox.i.x - texRect.i.x) / texRect.getWidth();
		f32 s1 = (posBox.f.x - texRect.f.x) / texRect.getWidth() + 1.0f;

		f32 t0 = (posBox.i.y - texRect.i.y) / texRect.getHeight();
		f32 t1 = (posBox.f.y - texRect.f.y) / texRect.getHeight() + 1.0f;

		mColorAlpha = mAlpha;
		JUtility::TColor cornerColors[4];
		getNewColor(cornerColors);
		setTevMode();

		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_F32, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);

		f32 zero = 0.0f;
		GXBegin(GX_QUADS, GX_VTXFMT0, 4);

		// bottom left
		GXPosition3f32((s16)posBox.i.x, (s16)posBox.i.y, zero);
		GXColor1u32(cornerColors[0]);
		GXTexCoord2f32(s0, t0);

		// bottom right
		GXPosition3f32((s16)posBox.f.x, (s16)posBox.i.y, zero);
		GXColor1u32(cornerColors[1]);
		GXTexCoord2f32(s1, t0);

		// top right
		GXPosition3f32((s16)posBox.f.x, (s16)posBox.f.y, zero);
		GXColor1u32(cornerColors[3]);
		GXTexCoord2f32(s1, t1);

		// top left
		GXPosition3f32((s16)posBox.i.x, (s16)posBox.f.y, zero);
		GXColor1u32(cornerColors[2]);
		GXTexCoord2f32(s0, t1);
		GXEnd();

		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_U16, 15);
		GXSetNumTexGens(0);
		GXSetNumTevStages(1);
		GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		GXSetChanCtrl(GX_COLOR0A0, GX_DISABLE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
		GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
	}
}

/**
 * @note Address: 0x8003C324
 * @note Size: 0x23C
 */
void J2DPicture::drawTexCoord(f32 x, f32 y, f32 width, f32 height, s16 btmLeftS, s16 btmLeftT, s16 btmRightS, s16 btmRightT, s16 topLeftS,
                              s16 topLeftT, s16 topRightS, s16 topRightT, Mtx* texMtx)
{
	if (mTextureCount != 0) {
		for (u8 i = 0; i < mTextureCount; i++) {
			load(i);
		}

		f32 maxX = x + width;
		f32 maxY = y + height;

		GXSetNumTexGens(mTextureCount);

		JUtility::TColor cornerColors[4];

		Mtx outputMtx;

		getNewColor(cornerColors);
		setTevMode();
		PSMTXConcat(*texMtx, mGlobalMtx, outputMtx);

		GXLoadPosMtxImm(outputMtx, 0);
		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_F32, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBA4, 8);
		GXBegin(GX_QUADS, GX_VTXFMT0, 4);

		f32 zero = 0.0f;
		// bottom left
		GXPosition3f32(x, y, zero);
		GXColor1u32(cornerColors[0]);
		GXTexCoord2s16(btmLeftS, btmLeftT);

		// bottom right
		GXPosition3f32(maxX, y, zero);
		GXColor1u32(cornerColors[1]);
		GXTexCoord2s16(btmRightS, btmRightT);

		// top right
		GXPosition3f32(maxX, maxY, zero);
		GXColor1u32(cornerColors[3]);
		GXTexCoord2s16(topRightS, topRightT);

		// top left
		GXPosition3f32(x, maxY, zero);
		GXColor1u32(cornerColors[2]);
		GXTexCoord2s16(topLeftS, topLeftT);

		GXEnd();

		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBX8, 0xf);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
	}
}

/**
 * @note Address: 0x8003C560
 * @note Size: 0x4A0
 */
void J2DPicture::setTevMode()
{
	u8 i;
	for (i = 0; i < mTextureCount; i++) {
		GXSetTevOrder(GXTevStageID(i), GXTexCoordID(i), GXTexMapID(i), GX_COLOR_NULL);
	}

	GXSetTevColor(GX_TEVREG2, JUtility::TColor(0xFFFFFFFF));
	GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_TEXC, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO);

	if (mTextures[0] == nullptr) {
		GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_A2, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO);
	} else if (mTextures[0]->getTransparency()) {
		GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_TEXA, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO);
	} else {
		GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_A2, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO);
	}

	GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevKColor(GX_KCOLOR0, mBlendColor);
	GXSetTevKColor(GX_KCOLOR2, mBlendAlpha);

	for (i = 1; i < mTextureCount; i++) {
		GXSetTevKColorSel(GXTevStageID(i), GXTevKColorSel(0x20 - i * 4));
		GXSetTevKAlphaSel(GXTevStageID(i), GXTevKAlphaSel(0x22 - i * 4));
		GXSetTevColorIn(GXTevStageID(i), GX_CC_CPREV, GX_CC_TEXC, GX_CC_KONST, GX_CC_ZERO);

		if (mTextures[i] == nullptr) {
			GXSetTevAlphaIn(GXTevStageID(i), GX_CA_APREV, GX_CA_A2, GX_CA_KONST, GX_CA_ZERO);
		} else if (mTextures[i]->getTransparency()) {
			GXSetTevAlphaIn(GXTevStageID(i), GX_CA_APREV, GX_CA_TEXA, GX_CA_KONST, GX_CA_ZERO);
		} else {
			GXSetTevAlphaIn(GXTevStageID(i), GX_CA_APREV, GX_CA_A2, GX_CA_KONST, GX_CA_ZERO);
		}

		GXSetTevColorOp(GXTevStageID(i), GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaOp(GXTevStageID(i), GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	}

	if (mBlack != 0 || mWhite != 0xFFFFFFFF) {
		GXSetTevOrder(GXTevStageID(i), GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR_NULL);
		GXSetTevColor(GX_TEVREG0, mBlack);
		GXSetTevColor(GX_TEVREG1, mWhite);
		GXSetTevColorIn(GXTevStageID(i), GX_CC_C0, GX_CC_C2, GX_CC_CPREV, GX_CC_ZERO);
		GXSetTevAlphaIn(GXTevStageID(i), GX_CA_A0, GX_CA_A1, GX_CA_APREV, GX_CA_ZERO);
		GXSetTevColorOp(GXTevStageID(i), GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaOp(GXTevStageID(i), GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		i++;
	}

	if (mColorAlpha != 0xFF || mCornerColors[0] != 0xFFFFFFFF || mCornerColors[1] != 0xFFFFFFFF || mCornerColors[2] != 0xFFFFFFFF
	    || mCornerColors[3] != 0xFFFFFFFF) {
		GXSetTevOrder(GXTevStageID(i), GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		GXSetTevColorIn(GXTevStageID(i), GX_CC_ZERO, GX_CC_CPREV, GX_CC_RASC, GX_CC_ZERO);
		GXSetTevAlphaIn(GXTevStageID(i), GX_CA_ZERO, GX_CA_APREV, GX_CA_RASA, GX_CA_ZERO);
		GXSetTevColorOp(GXTevStageID(i), GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaOp(GXTevStageID(i), GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		i++;
	}

	GXSetNumTevStages(i);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);

	for (i = 0; i < mTextureCount; i++) {
		GXSetTexCoordGen2(GXTexCoordID(i), GX_TG_MTX3X4, GX_TG_TEX0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
	}

	GXSetNumChans(1);
	GXSetChanCtrl(GX_COLOR0A0, GX_DISABLE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	GXSetNumIndStages(0);

	for (int i = GX_TEVSTAGE0; i < GX_MAXTEVSTAGE; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}
}

/**
 * @note Address: 0x8003CA00
 * @note Size: 0x30
 */
void J2DPicture::setBlendColorRatio(f32 p1, f32 p2, f32 p3, f32 p4, f32 p5, f32 p6, f32 p7, f32 p8)
{
	mBlendColorRatio[0] = p1;
	mBlendColorRatio[1] = p2;
	mBlendColorRatio[2] = p3;
	mBlendColorRatio[3] = p4;
	setBlendKonstColor();
}

/**
 * @note Address: 0x8003CA30
 * @note Size: 0x30
 */
void J2DPicture::setBlendAlphaRatio(f32 p1, f32 p2, f32 p3, f32 p4, f32 p5, f32 p6, f32 p7, f32 p8)
{
	mBlendAlphaRatio[0] = p1;
	mBlendAlphaRatio[1] = p2;
	mBlendAlphaRatio[2] = p3;
	mBlendAlphaRatio[3] = p4;
	setBlendKonstAlpha();
}

/**
 * @note Address: 0x8003CA60
 * @note Size: 0x150
 */
void J2DPicture::setBlendKonstColor()
{
	int color = 0;

	for (u8 i = 1; i < mTextureCount; i++) {
		f32 prevRatios = 0.0f;
		for (u8 j = 0; j < i; j++) {
			prevRatios += mBlendColorRatio[j];
		}
		f32 currRatios = prevRatios + mBlendColorRatio[i];
		if (currRatios != 0.0f) {
			color |= (u8)(255.0f * (1.0f - prevRatios / currRatios)) << (i - 1) * 8;
		}
	}
	mBlendColor = color;
}

/**
 * @note Address: 0x8003CBB0
 * @note Size: 0x150
 */
void J2DPicture::setBlendKonstAlpha()
{
	int alpha = 0;

	for (u8 i = 1; i < mTextureCount; i++) {
		f32 prevRatios = 0.0f;
		for (u8 j = 0; j < i; j++) {
			prevRatios += mBlendAlphaRatio[j];
		}
		f32 currRatios = prevRatios + mBlendAlphaRatio[i];
		if (currRatios != 0.0f) {
			alpha |= (u8)(255.0f * (1.0f - prevRatios / currRatios)) << (i - 1) * 8;
		}
	}
	mBlendAlpha = alpha;
}

/**
 * @note Address: 0x8003CD00
 * @note Size: 0x124
 */
void J2DPicture::getNewColor(JUtility::TColor* newColor)
{
	for (int i = 0; i < 4; i++) {
		newColor[i] = mCornerColors[i];
	}
	if (mColorAlpha != 255) {
		newColor[0].a = newColor[0].a * mColorAlpha / 255;
		newColor[1].a = newColor[1].a * mColorAlpha / 255;
		newColor[2].a = newColor[2].a * mColorAlpha / 255;
		newColor[3].a = newColor[3].a * mColorAlpha / 255;
	}
}

/**
 * @note Address: 0x8003CE24
 * @note Size: 0x44
 */
void J2DPicture::setTexCoord(const JGeometry::TVec2<s16>* coords)
{
	for (int i = 0; i < 4; i++) {
		mTexCoords[i].x = coords[i].x;
		mTexCoords[i].y = coords[i].y;
	}
}

/**
 * @note Address: 0x8003CE68
 * @note Size: 0x3C
 * setTexCoord__10J2DPictureFPC10JUTTexture10J2DBinding9J2DMirrorb
 */
void J2DPicture::setTexCoord(const JUTTexture* texture, J2DBinding binding, J2DMirror mirror, bool doRotate90)
{
	setTexCoord(mTexCoords, texture, binding, mirror, doRotate90);
}

static inline bool unkInline(J2DBinding binding, bool doRotate90, J2DMirror mirror, bool& bindLeft, bool& bindRight, bool& bindTop,
                             bool& bindBottom)
{
	if (!doRotate90) {
		if (mirror & J2DMIRROR_X) {
			bindLeft = binding & J2DBIND_Right;
		} else {
			bindLeft = binding & J2DBIND_Left;
		}
		if (mirror & J2DMIRROR_X) {
			bindRight = binding & J2DBIND_Left;
		} else {
			bindRight = binding & J2DBIND_Right;
		}
		if (mirror & J2DMIRROR_Y) {
			bindTop = binding & J2DBIND_Bottom;
		} else {
			bindTop = binding & J2DBIND_Top;
		}
		if (mirror & J2DMIRROR_Y) {
			bindBottom = binding & J2DBIND_Top;
		} else {
			bindBottom = binding & J2DBIND_Bottom;
		}

		return mirror & J2DMIRROR_Y;
	} else {
		if (mirror & J2DMIRROR_X) {
			bindLeft = binding & J2DBIND_Bottom;
		} else {
			bindLeft = binding & J2DBIND_Top;
		}
		if (mirror & J2DMIRROR_X) {
			bindRight = binding & J2DBIND_Top;
		} else {
			bindRight = binding & J2DBIND_Bottom;
		}
		if (mirror & J2DMIRROR_Y) {
			bindTop = binding & J2DBIND_Left;
		} else {
			bindTop = binding & J2DBIND_Right;
		}
		if (mirror & J2DMIRROR_Y) {
			bindBottom = binding & J2DBIND_Right;
		} else {
			bindBottom = binding & J2DBIND_Left;
		}

		return mirror & J2DMIRROR_Y;
	}
}

/**
 * @note Address: 0x8003CEA4
 * @note Size: 0x318
 */
void J2DPicture::setTexCoord(JGeometry::TVec2s* texCoords, const JUTTexture* texture, J2DBinding binding, J2DMirror mirror, bool doRotate90)
{
	bool bindLeft;
	bool bindRight;
	bool bindTop;
	bool bindBottom;

	if (!doRotate90) {
		bindLeft   = (mirror & J2DMIRROR_X) ? (bool)(binding & J2DBIND_Right) : (bool)(binding & J2DBIND_Left);
		bindRight  = (mirror & J2DMIRROR_X) ? (bool)(binding & J2DBIND_Left) : (bool)(binding & J2DBIND_Right);
		bindTop    = (mirror & J2DMIRROR_Y) ? (bool)(binding & J2DBIND_Bottom) : (bool)(binding & J2DBIND_Top);
		bindBottom = (mirror & J2DMIRROR_Y) ? (bool)(binding & J2DBIND_Top) : (bool)(binding & J2DBIND_Bottom);
	} else {
		bindLeft   = (mirror & J2DMIRROR_X) ? (bool)(binding & J2DBIND_Bottom) : (bool)(binding & J2DBIND_Top);
		bindRight  = (mirror & J2DMIRROR_X) ? (bool)(binding & J2DBIND_Top) : (bool)(binding & J2DBIND_Bottom);
		bindTop    = (mirror & J2DMIRROR_Y) ? (bool)(binding & J2DBIND_Left) : (bool)(binding & J2DBIND_Right);
		bindBottom = (mirror & J2DMIRROR_Y) ? (bool)(binding & J2DBIND_Right) : (bool)(binding & J2DBIND_Left);
	}

	f32 rectWidth;
	f32 rectHeight;

	rectWidth  = !doRotate90 ? getWidth() : getHeight();
	rectHeight = !doRotate90 ? getHeight() : getWidth();

	f32 texWidth;
	f32 texHeight;
	if (!texture) {
		texWidth  = rectWidth;
		texHeight = rectHeight;
	} else {
		texWidth  = texture->getSizeX();
		texHeight = texture->getSizeY();
	}

	f32 s0, t0, s1, t1;
	if (bindLeft) {
		s0 = 0.0f;
		s1 = bindRight ? 1.0f : (rectWidth / texWidth);
	} else if (bindRight) {
		s0 = 1.0f - (rectWidth / texWidth);
		s1 = 1.0f;
	} else {
		s0 = 0.5f - (rectWidth / texWidth) / 2.0f;
		s1 = 0.5f + (rectWidth / texWidth) / 2.0f;
	}

	if (bindTop) {
		t0 = 0.0f;
		t1 = bindBottom ? 1.0f : (rectHeight / texHeight);
	} else if (bindBottom) {
		t0 = 1.0f - (rectHeight / texHeight);
		t1 = 1.0f;
	} else {
		t0 = 0.5f - (rectHeight / texHeight) / 2.0f;
		t1 = 0.5f + (rectHeight / texHeight) / 2.0f;
	}

	if (mirror & J2DMIRROR_X) {
		swap(s0, s1);
	}
	if (mirror & J2DMIRROR_Y) {
		swap(t0, t1);
	}

	s16 temp_r27 = J2DCast_F32_to_S16(s0, 8);
	s16 temp_r28 = J2DCast_F32_to_S16(s1, 8);
	s16 temp_r30 = J2DCast_F32_to_S16(t0, 8);
	s16 temp_r31 = J2DCast_F32_to_S16(t1, 8);

	if (!doRotate90) {
		texCoords[0].set(temp_r27, temp_r30);
		texCoords[1].set(temp_r28, temp_r30);
		texCoords[2].set(temp_r27, temp_r31);
		texCoords[3].set(temp_r28, temp_r31);
	} else {
		texCoords[0].set(temp_r27, temp_r31);
		texCoords[1].set(temp_r27, temp_r30);
		texCoords[2].set(temp_r28, temp_r31);
		texCoords[3].set(temp_r28, temp_r30);
	}
}

/**
 * @note Address: 0x8003D1BC
 * @note Size: 0x64
 */
bool J2DPicture::isUsed(const ResTIMG* resource)
{
	for (u8 i = 0; i < mTextureCount; i++) {
		if (mTextures[i] != nullptr && mTextures[i]->mTexInfo == resource) {
			return true;
		}
	}
	return J2DPane::isUsed(resource);
}

/**
 * @note Address: 0x8003D220
 * @note Size: 0xD0
 */
u8 J2DPicture::getUsableTlut(u8 id)
{
	u8 usedTexFlags = 0;

	for (u8 i = 0; i < mTextureCount; i++) {
		if (i != id && mTextures[i] != nullptr) {
			const ResTIMG* img = mTextures[i]->getTexInfo();

			if (img != nullptr && img->mPaletteFormat != 0) {
				int name   = mTextures[i]->getTlutName();
				int tlutID = name >= GX_MAX_TLUT ? GX_MAX_TLUT : GX_TLUT0;

				u8 diffID = name - tlutID;
				if (diffID < 4) {
					usedTexFlags |= (1 << diffID);
				}
			}
		}
	}

	u8 usableID = 0;
	for (u8 i = 0; i < 4; i++) {
		if (!(usedTexFlags & (1 << i))) {
			usableID = i;
			break;
		}
	}

	return usableID;
}

/**
 * @note Address: 0x8003D2F0
 * @note Size: 0x34
 */
GXTlut J2DPicture::getTlutID(const ResTIMG* img, u8 id)
{
	if (img->mPaletteEntryCount > 256) {
		return GXTlut((id % 4) + GX_BIGTLUT0);
	}
	return GXTlut(id);
}
