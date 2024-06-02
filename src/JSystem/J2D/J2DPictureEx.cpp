#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DPicture.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JUtility/JUTPalette.h"
#include "types.h"

/**
 * @note Address: 0x80054AF0
 * @note Size: 0x48
 */
J2DPictureEx::J2DPictureEx()
    : J2DPicture()
{
	initialize(0x1100000);
}

/**
 * @note Address: 0x80054B38
 * @note Size: 0x7C
 * __ct__12J2DPictureExFPC7ResTIMGUl
 */
J2DPictureEx::J2DPictureEx(const ResTIMG* img, u32 matFlag)
    : J2DPicture()
{
	initialize(matFlag);
	append(img, 1.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
J2DPictureEx::J2DPictureEx(const char* fileName, u32 matFlag)
    : J2DPicture()
{
	initialize(matFlag);
	append(fileName, 1.0f);
}

/**
 * @note Address: 0x80054C14
 * @note Size: 0xAC
 * initiate__12J2DPictureExFPC7ResTIMGPC7ResTLUT
 */
void J2DPictureEx::initiate(const ResTIMG* img, const ResTLUT* lut)
{
	if (mMaterial->mTexGenBlock.mTexGenNum != 0) {
		return;
	}
	if (append(img, 1.0f) && lut && !mMaterial->mTevBlock->getPalette(0)) {
		mMaterial->mTevBlock->setPalette(0, lut);
	}
}

/**
 * @note Address: 0x80054CC0
 * @note Size: 0xD0
 * initialize__12J2DPictureExFUl
 */
void J2DPictureEx::initialize(u32 matFlag)
{
	mBloBlockType   = 'PIC2';
	mMaterial       = new J2DMaterial(matFlag);
	mWasInitialized = true;
	mMaterialNum    = 0xFFFF;
	mMaterialID     = 0xFFFF;
	for (int i = 0; i < 4; i++) {
		_170[i] = 0xFFFF;
	}

	for (int i = 0; i < 4; i++) {
		mExBlendColorRatio[i] = 1.0f;
		mExBlendAlphaRatio[i] = 1.0f;
	}
	setTexCoord(nullptr, J2DBIND_Unk15, J2DMIRROR_Unk0, false);
	mAnmVisibility = nullptr;
	mAnmVtxColor   = nullptr;
}

/**
 * @note Address: 0x80054D90
 * @note Size: 0x29C
 * __ct__12J2DPictureExFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial
 */
J2DPictureEx::J2DPictureEx(J2DPane* parent, JSURandomInputStream* input, u32 flags, J2DMaterial* materials)
{
	mAnmVisibility   = nullptr;
	mAnmVtxColor     = nullptr;
	int origPosition = input->getPosition();

	u32 info[2];
	input->read(info, 8);
	mBloBlockType = info[0];

	int newPosition = input->getPosition();
	u32 nextInfo[2];
	input->peek(nextInfo, 8);
	makePaneExStream(parent, input);
	input->seek(newPosition + nextInfo[1], SEEK_SET);
	J2DScrnBlockPictureParameter trailer;
	input->read(&trailer, sizeof(J2DScrnBlockPictureParameter));
	mMaterialNum = trailer.mMaterialNum;
	mMaterialID  = trailer.mMaterialID;

	// Issues with this loop
	for (int i = 0; i < 4; i++) {
		_170[i]       = trailer._08[i];
		mTexCoords[i] = trailer.mTexCoords[i];
		mCornerColors[i].set(trailer.mCornerColor[i]); // this is funky
	}

	input->seek(origPosition + info[1], SEEK_SET);
	mMaterial = nullptr;
	if (mMaterialID != 0xFFFF) {
		mMaterial                    = &(materials[mMaterialID]);
		materials[mMaterialID].mPane = this;
	}
	mWasInitialized = false;
	mAlpha          = 255;
	rewriteAlpha();
	for (int i = 0; i < 4; i++) {
		mBlendColorRatio[i] = 1.0f;
		mBlendAlphaRatio[i] = 1.0f;
	}
	for (int i = 0; i < 4; i++) {
		mExBlendColorRatio[i] = 1.0f;
		mExBlendAlphaRatio[i] = 1.0f;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stmw      r26, 0x58(r1)
	  mr        r28, r3
	  mr        r26, r4
	  mr        r29, r5
	  mr        r30, r7
	  bl        -0x1B2D4
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r4, r3, 0x11B0
	  mr        r3, r29
	  stw       r4, 0x0(r28)
	  stw       r0, 0x19C(r28)
	  stw       r0, 0x1A0(r28)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r29
	  addi      r4, r1, 0x14
	  li        r5, 0x8
	  bl        -0x2EA1C
	  lwz       r0, 0x14(r1)
	  mr        r3, r29
	  stw       r0, 0x8(r28)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  mr        r3, r29
	  addi      r4, r1, 0xC
	  li        r5, 0x8
	  bl        -0x2E7D4
	  mr        r3, r28
	  mr        r4, r26
	  mr        r5, r29
	  bl        -0x1BD34
	  lwz       r0, 0x10(r1)
	  mr        r3, r29
	  li        r5, 0
	  add       r4, r27, r0
	  bl        -0x2E73C
	  lis       r4, 0x8004
	  addi      r3, r1, 0x2C
	  subi      r4, r4, 0x6460
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x6C9DC
	  mr        r3, r29
	  addi      r4, r1, 0x1C
	  li        r5, 0x30
	  bl        -0x2EA9C
	  lhz       r3, 0x1E(r1)
	  addi      r26, r1, 0x1C
	  li        r11, 0
	  li        r0, 0x2
	  sth       r3, 0x16C(r28)
	  mr        r12, r26
	  mr        r27, r11
	  lhz       r3, 0x20(r1)
	  sth       r3, 0x16E(r28)
	  mtctr     r0

	.loc_0x10C:
	  lhz       r3, 0x8(r26)
	  addi      r10, r11, 0x170
	  addi      r9, r27, 0x112
	  addi      r8, r27, 0x114
	  sthx      r3, r28, r10
	  addi      r10, r11, 0x172
	  addi      r7, r27, 0x150
	  addi      r6, r27, 0x151
	  lha       r3, 0x10(r12)
	  addi      r4, r27, 0x152
	  addi      r0, r27, 0x153
	  addi      r11, r11, 0x4
	  sthx      r3, r28, r9
	  addi      r9, r27, 0x116
	  lha       r3, 0x12(r12)
	  sthx      r3, r28, r8
	  addi      r8, r27, 0x118
	  lwz       r3, 0x20(r12)
	  stw       r3, 0x8(r1)
	  lbz       r5, 0x8(r1)
	  lbz       r3, 0x9(r1)
	  stbx      r5, r28, r7
	  addi      r7, r27, 0x154
	  lbz       r5, 0xA(r1)
	  stbx      r3, r28, r6
	  addi      r6, r27, 0x155
	  lbz       r3, 0xB(r1)
	  stbx      r5, r28, r4
	  addi      r4, r27, 0x156
	  stbx      r3, r28, r0
	  addi      r0, r27, 0x157
	  addi      r27, r27, 0x8
	  lhz       r3, 0xA(r26)
	  addi      r26, r26, 0x4
	  sthx      r3, r28, r10
	  lha       r3, 0x14(r12)
	  sthx      r3, r28, r9
	  lha       r3, 0x16(r12)
	  sthx      r3, r28, r8
	  lwz       r3, 0x24(r12)
	  addi      r12, r12, 0x8
	  stw       r3, 0x8(r1)
	  lbz       r5, 0x8(r1)
	  lbz       r3, 0x9(r1)
	  stbx      r5, r28, r7
	  lbz       r5, 0xA(r1)
	  stbx      r3, r28, r6
	  lbz       r3, 0xB(r1)
	  stbx      r5, r28, r4
	  stbx      r3, r28, r0
	  bdnz+     .loc_0x10C
	  lwz       r0, 0x18(r1)
	  mr        r3, r29
	  li        r5, 0
	  add       r4, r31, r0
	  bl        -0x2E870
	  li        r0, 0
	  stw       r0, 0x168(r28)
	  lhz       r0, 0x16E(r28)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x21C
	  mulli     r0, r0, 0x88
	  add       r0, r30, r0
	  stw       r0, 0x168(r28)
	  lhz       r0, 0x16E(r28)
	  mulli     r0, r0, 0x88
	  add       r3, r30, r0
	  stw       r28, 0x4(r3)

	.loc_0x21C:
	  li        r3, 0
	  li        r0, 0xFF
	  stb       r3, 0x198(r28)
	  mr        r3, r28
	  stb       r0, 0xB2(r28)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x7A80(r2)
	  mr        r3, r28
	  stfs      f0, 0x124(r28)
	  stfs      f0, 0x134(r28)
	  stfs      f0, 0x128(r28)
	  stfs      f0, 0x138(r28)
	  stfs      f0, 0x12C(r28)
	  stfs      f0, 0x13C(r28)
	  stfs      f0, 0x130(r28)
	  stfs      f0, 0x140(r28)
	  stfs      f0, 0x178(r28)
	  stfs      f0, 0x188(r28)
	  stfs      f0, 0x17C(r28)
	  stfs      f0, 0x18C(r28)
	  stfs      f0, 0x180(r28)
	  stfs      f0, 0x190(r28)
	  stfs      f0, 0x184(r28)
	  stfs      f0, 0x194(r28)
	  lmw       r26, 0x58(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/**
 * @note Address: 0x8005502C
 * @note Size: 0x110
 * __ct__12J2DPictureExFUxRCQ29JGeometry8TBox2<f>PC7ResTIMGUl
 */
J2DPictureEx::J2DPictureEx(u64 id, const JGeometry::TBox2f& bounds, const ResTIMG* img, u32 matFlag)
    : J2DPicture(id, bounds)
{
	mBloBlockType = 'PIC2';
	initialize(matFlag);
	append(img, 1.0f);
}

/**
 * @note Address: 0x8005513C
 * @note Size: 0x110
 * __ct__12J2DPictureExFUxRCQ29JGeometry8TBox2<f>PCcUl
 */
J2DPictureEx::J2DPictureEx(u64 id, const JGeometry::TBox2f& bounds, const char* fileName, u32 matFlag)
    : J2DPicture(id, bounds)
{
	mBloBlockType = 'PIC2';
	initialize(matFlag);
	append(fileName, 1.0f);
}

/**
 * @note Address: 0x8005524C
 * @note Size: 0x90
 * __dt__12J2DPictureExFv
 */
J2DPictureEx::~J2DPictureEx()
{
	if (mWasInitialized) {
		delete mMaterial;
	}
}

/**
 * @note Address: 0x800552DC
 * @note Size: 0xF8
 */
bool J2DPictureEx::prepareTexture(u8 texNum)
{
	if (!mMaterial->getTevBlock()->prepareTexture(texNum)) {
		return false;
	}

	for (u8 i = 0; i < texNum; i++) {
		J2DTexMtx texMtx;
		mMaterial->getTexGenBlock()->setTexMtx(i, texMtx);
	}
	return true;
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r29, r4
	stw      r28, 0x60(r1)
	mr       r28, r3
	lwz      r3, 0x168(r3)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80055328
	li       r3, 0
	b        lbl_800553B4

lbl_80055328:
	lis      r3, j2dDefaultTexMtxInfo@ha
	clrlwi   r31, r29, 0x18
	addi     r30, r3, j2dDefaultTexMtxInfo@l
	li       r29, 0
	b        lbl_800553A4

lbl_8005533C:
	lfs      f7, 4(r30)
	clrlwi   r4, r29, 0x18
	lfs      f6, 8(r30)
	addi     r5, r1, 8
	lfs      f5, 0xc(r30)
	lbz      r3, 0(r30)
	lbz      r0, 1(r30)
	lfs      f4, 0x10(r30)
	lfs      f3, 0x14(r30)
	lfs      f2, 0x18(r30)
	lfs      f1, 0x1c(r30)
	lfs      f0, 0x20(r30)
	stfs     f7, 0xc(r1)
	stfs     f6, 0x10(r1)
	stfs     f5, 0x14(r1)
	stb      r3, 8(r1)
	stb      r0, 9(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r3, 0x168(r28)
	addi     r3, r3, 0x28
	bl       setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
	addi     r29, r29, 1

lbl_800553A4:
	clrlwi   r0, r29, 0x18
	cmplw    r0, r31
	blt      lbl_8005533C
	li       r3, 1

lbl_800553B4:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/**
 * @note Address: 0x800553D4
 * @note Size: 0xCC
 */
void J2DPictureEx::drawSelf(f32 x, f32 y, Mtx* texMtx)
{
	if (!mMaterial) {
		return;
	}
	mMaterial->setGX();
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	drawFullSet(x, y, getWidth(), getHeight(), texMtx);
}

/**
 * @note Address: 0x800554A0
 * @note Size: 0x5C
 */
void J2DPictureEx::drawFullSet(f32 x, f32 y, f32 width, f32 height, Mtx* texMtx)
{
	drawTexCoord(mBounds.i.x, mBounds.i.y, width, height, mTexCoords[0].x, mTexCoords[0].y, mTexCoords[1].x, mTexCoords[1].y,
	             mTexCoords[2].x, mTexCoords[2].y, mTexCoords[3].x, mTexCoords[3].y, texMtx);
}

/**
 * @note Address: 0x800554FC
 * @note Size: 0x2B4
 */
void J2DPictureEx::drawTexCoord(f32 x, f32 y, f32 width, f32 height, s16 xTex0, s16 yTex0, s16 xTex1, s16 yTex1, s16 xTex2, s16 yTex2,
                                s16 xTex3, s16 yTex3, Mtx* texMtx)
{
	f32 x2 = x + width;
	f32 y2 = y + height;
	Mtx v1;
	PSMTXConcat(*texMtx, mGlobalMtx, v1);
	if (mMaterial && mMaterial->mIsVisible == 0) {
		return;
	}
	GXLoadPosMtxImm(v1, 0);
	JUtility::TColor colors[4] = { mCornerColors[0], mCornerColors[1], mCornerColors[2], mCornerColors[3] };
	if (mMaterial) {
		if ((mMaterial->mColorBlock.mChannels[1].mColorChan & 1) == 1) {
			if (mMaterial->mMaterialAlphaCalc == 1) {
				for (int i = 0; i < 4; i++) {
					colors[i].a *= mColorAlpha / 255;
				}
			}
		} else if (!mIsInfluencedAlpha) {
			JUtility::TColor matColor = mColorAlpha;
			GXSetChanMatColor(GX_ALPHA0, matColor);
		}
	}
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_S16, 8);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 z = 0.0f;
	// bottom left
	GXPosition3f32(x, y, z);
	GXTexCoord2s16(xTex0, yTex0);

	// bottom right
	GXPosition3f32(x2, y, z);
	GXTexCoord2s16(xTex1, yTex1);

	// top right
	GXPosition3f32(x2, y2, z);
	GXTexCoord2s16(xTex2, yTex2);

	// top left
	GXPosition3f32(x, y2, z);
	GXTexCoord2s16(xTex3, yTex3);

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 15);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_S16, 0);
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stfd      f28, 0x80(r1)
	  psq_st    f28,0x88(r1),0,0
	  stmw      r23, 0x5C(r1)
	  fmr       f28, f1
	  mr        r25, r5
	  fmr       f29, f2
	  lwz       r0, 0xCC(r1)
	  mr        r23, r3
	  mr        r24, r4
	  fadds     f31, f28, f3
	  lha       r31, 0xCA(r1)
	  fadds     f30, f29, f4
	  mr        r26, r6
	  mr        r27, r7
	  mr        r28, r8
	  mr        r29, r9
	  mr        r30, r10
	  mr        r3, r0
	  addi      r4, r23, 0x80
	  addi      r5, r1, 0x20
	  bl        0x94D90
	  lwz       r3, 0x168(r23)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lbz       r0, 0xE(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x280

	.loc_0x90:
	  addi      r3, r1, 0x20
	  li        r4, 0
	  bl        0x93FE4
	  lwz       r6, 0x168(r23)
	  lwz       r5, 0x150(r23)
	  lwz       r4, 0x154(r23)
	  cmplwi    r6, 0
	  lwz       r3, 0x158(r23)
	  lwz       r0, 0x15C(r23)
	  stw       r5, 0x1C(r1)
	  stw       r4, 0x18(r1)
	  stw       r3, 0x14(r1)
	  stw       r0, 0x10(r1)
	  beq-      .loc_0x198
	  lhz       r0, 0x1C(r6)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x174
	  lbz       r0, 0xF(r6)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x198
	  lbz       r0, 0x1F(r1)
	  lis       r3, 0x8081
	  lbz       r7, 0xB3(r23)
	  subi      r9, r3, 0x7F7F
	  lbz       r4, 0x1B(r1)
	  mullw     r5, r0, r7
	  lbz       r0, 0x13(r1)
	  lbz       r3, 0x17(r1)
	  mullw     r6, r4, r7
	  mullw     r4, r3, r7
	  mullw     r0, r0, r7
	  mulhw     r7, r9, r5
	  mulhw     r3, r9, r6
	  add       r5, r7, r5
	  srawi     r7, r5, 0x7
	  mulhw     r5, r9, r4
	  rlwinm    r8,r7,1,31,31
	  add       r3, r3, r6
	  add       r7, r7, r8
	  srawi     r6, r3, 0x7
	  stb       r7, 0x1F(r1)
	  add       r4, r5, r4
	  rlwinm    r5,r6,1,31,31
	  mulhw     r3, r9, r0
	  add       r6, r6, r5
	  srawi     r4, r4, 0x7
	  stb       r6, 0x1B(r1)
	  rlwinm    r5,r4,1,31,31
	  add       r0, r3, r0
	  srawi     r0, r0, 0x7
	  add       r4, r4, r5
	  rlwinm    r3,r0,1,31,31
	  stb       r4, 0x17(r1)
	  add       r0, r0, r3
	  stb       r0, 0x13(r1)
	  b         .loc_0x198

	.loc_0x174:
	  lbz       r0, 0xB4(r23)
	  cmplwi    r0, 0
	  beq-      .loc_0x198
	  lbz       r0, 0xB3(r23)
	  addi      r4, r1, 0xC
	  li        r3, 0x2
	  stw       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        0x916E4

	.loc_0x198:
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x8F060
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0x8
	  bl        0x8F048
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0x902B8
	  lis       r10, 0xCC01
	  lfs       f0, -0x7A7C(r2)
	  stfs      f28, -0x8000(r10)
	  li        r3, 0
	  lwz       r0, 0x1C(r1)
	  li        r4, 0xD
	  stfs      f29, -0x8000(r10)
	  li        r5, 0x1
	  lwz       r9, 0x18(r1)
	  li        r6, 0x2
	  stfs      f0, -0x8000(r10)
	  li        r7, 0xF
	  lwz       r8, 0x10(r1)
	  stw       r0, -0x8000(r10)
	  lwz       r0, 0x14(r1)
	  sth       r24, -0x8000(r10)
	  sth       r25, -0x8000(r10)
	  stfs      f31, -0x8000(r10)
	  stfs      f29, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stw       r9, -0x8000(r10)
	  sth       r26, -0x8000(r10)
	  sth       r27, -0x8000(r10)
	  stfs      f31, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stw       r8, -0x8000(r10)
	  sth       r30, -0x8000(r10)
	  sth       r31, -0x8000(r10)
	  stfs      f28, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stw       r0, -0x8000(r10)
	  sth       r28, -0x8000(r10)
	  sth       r29, -0x8000(r10)
	  bl        0x8EFA8
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  bl        0x8EF90

	.loc_0x280:
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  psq_l     f28,0x88(r1),0,0
	  lfd       f28, 0x80(r1)
	  lmw       r23, 0x5C(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/**
 * @note Address: 0x800557B0
 * @note Size: 0x48
 * append__12J2DPictureExFPC7ResTIMGP10JUTPalettef
 */
bool J2DPictureEx::append(const ResTIMG* img, JUTPalette* palette, f32 blendRatio)
{
	return (!mMaterial) ? false : insert(img, palette, mMaterial->mTexGenBlock.mTexGenNum, blendRatio);
}

/**
 * @note Address: 0x800557F8
 * @note Size: 0x48
 * append__12J2DPictureExFPCcP10JUTPalettef
 */
bool J2DPictureEx::append(const char* p1, JUTPalette* palette, f32 blendRatio)
{
	return (!mMaterial) ? false : insert(p1, palette, mMaterial->mTexGenBlock.mTexGenNum, blendRatio);
}

/**
 * @note Address: 0x80055840
 * @note Size: 0x48
 * append__12J2DPictureExFP10JUTTexturef
 */
bool J2DPictureEx::append(JUTTexture* texture, f32 blendRatio)
{
	return (!mMaterial) ? false : insert(texture, mMaterial->mTexGenBlock.mTexGenNum, blendRatio);
}

/**
 * @note Address: 0x80055888
 * @note Size: 0xB4
 * insert__12J2DPictureExFPC7ResTIMGP10JUTPaletteUcf
 */
bool J2DPictureEx::insert(const ResTIMG* img, JUTPalette* palette, u8 index, f32 blendRatio)
{
	if (!img) {
		return false;
	}
	if (!isInsert(index)) {
		return false;
	}
	insertCommon(index, blendRatio);
	mMaterial->mTevBlock->insertTexture(index, img, palette);
	return true;
}

/**
 * @note Address: 0x8005593C
 * @note Size: 0x78
 * insert__12J2DPictureExFPCcP10JUTPaletteUcf
 */
bool J2DPictureEx::insert(const char* filename, JUTPalette* palette, u8 index, f32 blendRatio)
{
	return insert((ResTIMG*)J2DScreen::getNameResource(filename), palette, index, blendRatio);
}

/**
 * @note Address: 0x800559B4
 * @note Size: 0xA4
 * insert__12J2DPictureExFP10JUTTextureUcf
 */
bool J2DPictureEx::insert(JUTTexture* texture, u8 index, f32 blendRatio)
{
	if (!texture) {
		return false;
	}
	if (!isInsert(index)) {
		return false;
	}
	insertCommon(index, blendRatio);
	mMaterial->mTevBlock->insertTexture(index, texture);
	return true;
}

/**
 * @note Address: 0x80055A58
 * @note Size: 0x334
 * insertCommon__12J2DPictureExFUcf
 */
void J2DPictureEx::insertCommon(u8 index, f32 blendRatio)
{
	u8 texGenNum = mMaterial->getTexGenBlock()->getTexGenNum();
	mMaterial->getTevBlock()->getMaxStage();
	u8 stageNum = mMaterial->getTevBlock()->getTevStageNum();

	bool check;
	if (texGenNum <= 1) {
		check = stageNum != 1;
	} else {
		check = (stageNum != (texGenNum + 1));
	}

	shiftSetBlendRatio(index, blendRatio, true, true);
	shiftSetBlendRatio(index, blendRatio, false, true);

	u32 nextTexGen = texGenNum + 1; // r30
	u8 startCount  = (u8)nextTexGen - 1;

	mMaterial->getTexGenBlock()->setTexGenNum(nextTexGen);

	// some loop copy nonsense like this
	for (int i = nextTexGen; i < index; i++) {
		mMaterial->mTexGenBlock.mTexCoords[i + 1] = mMaterial->mTexGenBlock.mTexCoords[i];
	}

	for (u8 i = startCount; i > index; i--) {
		u8 idx = i - 1;
		mMaterial->getTexGenBlock()->setTexMtx(idx, *mMaterial->getTexGenBlock()->mTexMtxes[idx]);
	}

	J2DTexMtx texMtx; // this ctor needs fixing
	mMaterial->getTexGenBlock()->setTexMtx(index, texMtx);

	u8 newStageNum;
	if ((u8)nextTexGen == 1) {
		newStageNum = 1;
	} else {
		newStageNum = nextTexGen + (check != 0) + 1;
	}

	mMaterial->getTevBlock()->setTevStageNum(newStageNum);

	setTevOrder(nextTexGen, newStageNum, check);
	setTevStage(nextTexGen, newStageNum, check);
	setTevKColor(nextTexGen);
	setTevKColorSel(nextTexGen);
	setTevKAlphaSel(nextTexGen);
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stmw     r25, 0x74(r1)
	mr       r26, r3
	fmr      f31, f1
	lwz      r5, 0x168(r3)
	mr       r27, r4
	lwz      r3, 0x70(r5)
	lwz      r0, 0x28(r5)
	lwz      r12, 0(r3)
	clrlwi   r29, r0, 0x18
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x168(r26)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	cmplwi   r29, 1
	bgt      lbl_80055AD4
	clrlwi   r4, r3, 0x18
	subfic   r3, r4, 1
	addi     r0, r4, -1
	or       r0, r3, r0
	srwi     r28, r0, 0x1f
	b        lbl_80055AEC

lbl_80055AD4:
	clrlwi   r4, r3, 0x18
	addi     r0, r29, 1
	subf     r3, r4, r0
	subf     r0, r0, r4
	or       r0, r3, r0
	srwi     r28, r0, 0x1f

lbl_80055AEC:
	fmr      f1, f31
	mr       r3, r26
	mr       r4, r27
	li       r5, 1
	li       r6, 1
	bl       shiftSetBlendRatio__12J2DPictureExFUcfbb
	fmr      f1, f31
	mr       r3, r26
	mr       r4, r27
	li       r5, 0
	li       r6, 1
	bl       shiftSetBlendRatio__12J2DPictureExFUcfbb
	addi     r30, r29, 1
	clrlwi   r29, r27, 0x18
	clrlwi   r31, r30, 0x18
	lwz      r3, 0x168(r26)
	addi     r10, r31, -1
	li       r7, 1
	mulli    r4, r10, 3
	stw      r31, 0x28(r3)
	cmpw     r10, r29
	addi     r3, r10, 1
	mr       r11, r10
	li       r6, 4
	addi     r8, r4, 0x1e
	subf     r3, r29, r3
	blt      lbl_80055C38
	rlwinm.  r0, r3, 0x1f, 1, 0x1f
	mtctr    r0
	beq      lbl_80055BF0

lbl_80055B64:
	stb      r8, 0xe(r1)
	rlwinm   r5, r11, 2, 0x16, 0x1d
	lwz      r0, 0x168(r26)
	addi     r8, r8, -3
	stb      r7, 0xc(r1)
	addi     r11, r11, -1
	add      r9, r0, r5
	stb      r6, 0xd(r1)
	rlwinm   r5, r11, 2, 0x16, 0x1d
	addi     r11, r11, -1
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	lbz      r0, 8(r1)
	lbz      r4, 9(r1)
	stb      r0, 0x2c(r9)
	lbz      r0, 0xa(r1)
	stb      r4, 0x2d(r9)
	stb      r0, 0x2e(r9)
	stb      r8, 0xe(r1)
	addi     r8, r8, -3
	lwz      r0, 0x168(r26)
	stb      r7, 0xc(r1)
	add      r9, r0, r5
	stb      r6, 0xd(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	lbz      r0, 8(r1)
	lbz      r4, 9(r1)
	stb      r0, 0x2c(r9)
	lbz      r0, 0xa(r1)
	stb      r4, 0x2d(r9)
	stb      r0, 0x2e(r9)
	bdnz     lbl_80055B64
	andi.    r3, r3, 1
	beq      lbl_80055C38

lbl_80055BF0:
	mtctr    r3

lbl_80055BF4:
	stb      r8, 0xe(r1)
	rlwinm   r5, r11, 2, 0x16, 0x1d
	lwz      r0, 0x168(r26)
	addi     r11, r11, -1
	stb      r7, 0xc(r1)
	addi     r8, r8, -3
	add      r9, r0, r5
	stb      r6, 0xd(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	lbz      r0, 8(r1)
	lbz      r4, 9(r1)
	stb      r0, 0x2c(r9)
	lbz      r0, 0xa(r1)
	stb      r4, 0x2d(r9)
	stb      r0, 0x2e(r9)
	bdnz     lbl_80055BF4

lbl_80055C38:
	mr       r25, r10
	b        lbl_80055C64

lbl_80055C40:
	addi     r0, r25, -1
	lwz      r3, 0x168(r26)
	rlwinm   r5, r0, 2, 0x16, 0x1d
	clrlwi   r4, r25, 0x18
	addi     r3, r3, 0x28
	addi     r0, r5, 0x24
	lwzx     r5, r3, r0
	bl       setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
	addi     r25, r25, -1

lbl_80055C64:
	cmpw     r25, r29
	bgt      lbl_80055C40
	lis      r3, j2dDefaultTexMtxInfo@ha
	clrlwi   r4, r27, 0x18
	addi     r6, r3, j2dDefaultTexMtxInfo@l
	addi     r5, r1, 0x10
	lfs      f7, 4(r6)
	lfs      f6, 8(r6)
	lfs      f5, 0xc(r6)
	lbz      r3, 0(r6)
	lbz      r0, 1(r6)
	lfs      f4, 0x10(r6)
	lfs      f3, 0x14(r6)
	lfs      f2, 0x18(r6)
	lfs      f1, 0x1c(r6)
	lfs      f0, 0x20(r6)
	stfs     f7, 0x14(r1)
	stfs     f6, 0x18(r1)
	stfs     f5, 0x1c(r1)
	stb      r3, 0x10(r1)
	stb      r0, 0x11(r1)
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f2, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	lwz      r3, 0x168(r26)
	addi     r3, r3, 0x28
	bl       setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 1
	bne      lbl_80055CEC
	li       r27, 1
	b        lbl_80055D08

lbl_80055CEC:
	clrlwi   r3, r28, 0x18
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	addi     r0, r3, 1
	add      r0, r31, r0
	clrlwi   r27, r0, 0x18

lbl_80055D08:
	lwz      r3, 0x168(r26)
	mr       r4, r27
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	mr       r3, r26
	mr       r5, r27
	mr       r6, r28
	clrlwi   r4, r30, 0x18
	bl       setTevOrder__12J2DPictureExFUcUcb
	mr       r3, r26
	mr       r5, r27
	mr       r6, r28
	clrlwi   r4, r30, 0x18
	bl       setTevStage__12J2DPictureExFUcUcb
	mr       r3, r26
	clrlwi   r4, r30, 0x18
	bl       setTevKColor__12J2DPictureExFUc
	mr       r3, r26
	clrlwi   r4, r30, 0x18
	bl       setTevKColorSel__12J2DPictureExFUc
	mr       r3, r26
	clrlwi   r4, r30, 0x18
	bl       setTevKAlphaSel__12J2DPictureExFUc
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	lmw      r25, 0x74(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/**
 * @note Address: 0x80055D8C
 * @note Size: 0xF8
 */
bool J2DPictureEx::isInsert(u8 p1) const
{
	if (!mMaterial) {
		return false;
	}
	if (!mMaterial->mTevBlock) {
		return false;
	}
	u8 texGenNum = mMaterial->mTexGenBlock.mTexGenNum;
	if (!((texGenNum < 8 && p1 < 8) && p1 <= texGenNum)) {
		return false;
	}
	u32 maxStage = mMaterial->mTevBlock->getMaxStage();
	if ((u8)maxStage <= 2 && texGenNum != 0) {
		return false;
	}
	if ((u8)maxStage == mMaterial->mTevBlock->getTevStageNum() && texGenNum != 0) {
		return false;
	}
	return true;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lwz      r5, 0x168(r3)
	stw      r0, 0x24(r1)
	cmplwi   r5, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_80055DBC
	li       r3, 0
	b        lbl_80055E68

lbl_80055DBC:
	lwz      r3, 0x70(r5)
	cmplwi   r3, 0
	bne      lbl_80055DD0
	li       r3, 0
	b        lbl_80055E68

lbl_80055DD0:
	lwz      r0, 0x28(r5)
	clrlwi   r30, r0, 0x18
	cmplwi   r30, 8
	bge      lbl_80055DF4
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 8
	bge      lbl_80055DF4
	cmplw    r0, r30
	ble      lbl_80055DFC

lbl_80055DF4:
	li       r3, 0
	b        lbl_80055E68

lbl_80055DFC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 2
	bgt      lbl_80055E2C
	cmplwi   r30, 0
	beq      lbl_80055E2C
	li       r3, 0
	b        lbl_80055E68

lbl_80055E2C:
	lwz      r3, 0x168(r29)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi   r4, r31, 0x18
	clrlwi   r0, r3, 0x18
	cmplw    r4, r0
	bne      lbl_80055E64
	cmplwi   r30, 0
	beq      lbl_80055E64
	li       r3, 0
	b        lbl_80055E68

lbl_80055E64:
	li       r3, 1

lbl_80055E68:
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
 * @note Address: 0x80055E84
 * @note Size: 0x1AC
 * remove__12J2DPictureExFUc
 */
BOOL J2DPictureEx::remove(u8 id)
{
	if (!isRemove(id)) {
		return FALSE;
	}
	u8 texGenNum = mMaterial->mTexGenBlock.mTexGenNum;

	bool v1 = ((texGenNum + 1) != mMaterial->mTevBlock->getTevStageNum());
	shiftSetBlendRatio(id, 0.0f, true, false);
	shiftSetBlendRatio(id, 0.0f, false, false);
	mMaterial->mTexGenBlock.mTexGenNum = (u8)(texGenNum - 1);

	// it needs to stop optimising texGenNum - 1 down into a new variable and dynamically do it
	mMaterial->mTevBlock->removeTexture(id);
	u8 comp = texGenNum - 1;
	if (comp != 1) {
		id = comp + (v1 != 0) + 1;
	} else {
		id = (v1 != 0) + 1;
	}
	mMaterial->mTevBlock->setTevStageNum(id);
	setTevOrder(texGenNum - 1, id, v1);
	setTevStage(texGenNum - 1, id, v1);
	setTevKColor(texGenNum - 1);
	setTevKColorSel(texGenNum - 1);
	setTevKAlphaSel(texGenNum - 1);
	return TRUE;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	mr       r28, r4
	bl       isRemove__12J2DPictureExCFUc
	clrlwi.  r0, r3, 0x18
	bne      lbl_80055EBC
	li       r3, 0
	b        lbl_80056010

lbl_80055EBC:
	lwz      r4, 0x168(r29)
	lwz      r3, 0x70(r4)
	lwz      r0, 0x28(r4)
	lwz      r12, 0(r3)
	clrlwi   r30, r0, 0x18
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi   r3, r3, 0x18
	addi     r0, r30, 1
	subf     r4, r3, r0
	lfs      f1, lbl_805168E4@sda21(r2)
	subf     r0, r0, r3
	mr       r3, r29
	or       r0, r4, r0
	mr       r4, r28
	srwi     r31, r0, 0x1f
	li       r5, 1
	li       r6, 0
	bl       shiftSetBlendRatio__12J2DPictureExFUcfbb
	lfs      f1, lbl_805168E4@sda21(r2)
	mr       r3, r29
	mr       r4, r28
	li       r5, 0
	li       r6, 0
	bl       shiftSetBlendRatio__12J2DPictureExFUcfbb
	addi     r0, r30, -1
	lwz      r3, 0x168(r29)
	clrlwi   r0, r0, 0x18
	clrlwi   r4, r28, 0x18
	stw      r0, 0x28(r3)
	lwz      r3, 0x168(r29)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	addi     r0, r30, -1
	clrlwi   r4, r0, 0x18
	cmplwi   r4, 1
	beq      lbl_80055F7C
	neg      r0, r31
	or       r0, r0, r31
	srwi     r3, r0, 0x1f
	addi     r0, r3, 1
	add      r0, r4, r0
	clrlwi   r28, r0, 0x18
	b        lbl_80055F90

lbl_80055F7C:
	neg      r0, r31
	or       r0, r0, r31
	srwi     r3, r0, 0x1f
	addi     r0, r3, 1
	clrlwi   r28, r0, 0x18

lbl_80055F90:
	lwz      r3, 0x168(r29)
	mr       r4, r28
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	addi     r0, r30, -1
	mr       r3, r29
	mr       r5, r28
	mr       r6, r31
	clrlwi   r4, r0, 0x18
	bl       setTevOrder__12J2DPictureExFUcUcb
	addi     r0, r30, -1
	mr       r3, r29
	mr       r5, r28
	mr       r6, r31
	clrlwi   r4, r0, 0x18
	bl       setTevStage__12J2DPictureExFUcUcb
	addi     r0, r30, -1
	mr       r3, r29
	clrlwi   r4, r0, 0x18
	bl       setTevKColor__12J2DPictureExFUc
	addi     r0, r30, -1
	mr       r3, r29
	clrlwi   r4, r0, 0x18
	bl       setTevKColorSel__12J2DPictureExFUc
	addi     r0, r30, -1
	mr       r3, r29
	clrlwi   r4, r0, 0x18
	bl       setTevKAlphaSel__12J2DPictureExFUc
	li       r3, 1

lbl_80056010:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80056030
 * @note Size: 0x64
 * remove__12J2DPictureExFv
 */
BOOL J2DPictureEx::remove()
{
	if (!mMaterial) {
		return FALSE;
	}

	return (!mMaterial->getTevBlock()) ? FALSE : remove((u8)mMaterial->getTexGenBlock()->getTexGenNum() - 1);
}

/**
 * @note Address: 0x80056094
 * @note Size: 0xC8
 * remove__12J2DPictureExFP10JUTTexture
 */
BOOL J2DPictureEx::remove(JUTTexture* texture)
{
	if (mMaterial == nullptr) {
		return FALSE;
	}

	if (mMaterial->getTevBlock() == nullptr) {
		return FALSE;
	}

	u8 texGenNum = mMaterial->getTexGenBlock()->getTexGenNum();
	u8 i;
	for (i = 0; i < texGenNum; i++) {
		if (mMaterial->getTevBlock()->getTexture(i) == texture)
			break;
	}
	return remove(i);
}

/**
 * @note Address: 0x8005615C
 * @note Size: 0x54
 */
bool J2DPictureEx::isRemove(u8 index) const
{
	if (!mMaterial) {
		return false;
	}
	if (!mMaterial->mTevBlock) {
		return false;
	}
	u8 texGenNum = mMaterial->mTexGenBlock.mTexGenNum;
	if (texGenNum <= index || texGenNum == 1) {
		return false;
	}
	return true;
}

/**
 * @note Address: 0x800561B0
 * @note Size: 0x124
 * draw__12J2DPictureExFffUcbbb
 */
void J2DPictureEx::draw(f32 p1, f32 p2, u8 index, bool p4, bool p5, bool p6)
{
	if (mMaterial && mMaterial->mTevBlock && mIsVisible && index < mMaterial->mTexGenBlock.mTexGenNum) {
		JUTTexture* texture = mMaterial->mTevBlock->getTexture(index);
		if (texture) {
			draw(p1, p2, texture->getSizeX(), texture->getSizeY(), p4, p5, p6);
		}
	}
}

/**
 * @note Address: 0x800562D4
 * @note Size: 0x5A8
 */
void J2DPictureEx::draw(f32 x, f32 y, f32 width, f32 height, bool p5, bool p6, bool p7)
{
	if (!isVisible()) {
		return;
	}

	if (!mMaterial) {
		return;
	}

	if (!mMaterial->getTevBlock()) {
		return;
	}

	if (mMaterial->getTexGenBlock()->mTexGenNum == 0) {
		return;
	}

	mMaterial->setGX();
	makeMatrix(x, y, 0.0f, 0.0f);
	GXLoadPosMtxImm(mPositionMtx, 0);
	GXSetCurrentMtx(0);

	if (!mMaterial->isVisible()) {
		return;
	}

	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);

	mColorAlpha = mAlpha;
	J2DPicture::TCornerColor colors;
	getCornerColor(colors);

	if ((int)mMaterial->mMaterialAlphaCalc == 1) {
		colors.mColor0.a = (mColorAlpha * colors.mColor0.a) / 255;
		colors.mColor1.a = (mColorAlpha * colors.mColor1.a) / 255;
		colors.mColor2.a = (mColorAlpha * colors.mColor2.a) / 255;
		colors.mColor3.a = (mColorAlpha * colors.mColor3.a) / 255;
	}

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	f32 z = 0.0f;
	GXPosition3f32(z, z, z);
	GXColor1u32(colors.mColor0);

	// i have no idea what's up with these.
	if (!p7) {
		GXTexCoord2s16(0x8000 & (p5 != 0), 0x8000 & (p6 != 0));
	} else {
		GXTexCoord2s16(0x8000 & (p5 != 0), 0x8000 & (p6 != 0));
	}

	GXPosition3f32(width, z, z);
	GXColor1u32(colors.mColor1);

	if (!p7) {
		GXTexCoord2s16(0x8000 & (p5 != 0), 0x8000 & (p6 != 0));
	} else {
		GXTexCoord2s16(0x8000 & (p5 != 0), 0x8000 & (p6 != 0));
	}

	GXPosition3f32(width, height, z);
	GXColor1u32(colors.mColor3);

	if (!p7) {
		GXTexCoord2s16(0x8000 & (p5 != 0), 0x8000 & (p6 != 0));
	} else {
		GXTexCoord2s16(0x8000 & (p5 != 0), 0x8000 & (p6 != 0));
	}

	GXPosition3f32(z, height, z);
	GXColor1u32(colors.mColor2);

	if (!p7) {
		GXTexCoord2s16(0x8000 & (p5 != 0), 0x8000 & (p6 != 0));
	} else {
		GXTexCoord2s16(0x8000 & (p5 != 0), 0x8000 & (p6 != 0));
	}

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);
	GXSetNumTexGens(0);
	GXSetNumTevStages(1);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);

	for (int i = 0; i < 4; i++) {
		GXSetTevSwapModeTable(GXTevSwapSel(i), GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
	}

	GXSetNumIndStages(0);

	for (int i = 0; i < 16; i++) {
		GXSetTevDirect(GXTevStageID(i));
	}

	Mtx posMtx;
	PSMTXIdentity(posMtx);
	GXLoadPosMtxImm(posMtx, 0);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
	GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stmw     r23, 0x4c(r1)
	mr       r28, r3
	fmr      f28, f1
	lbz      r0, 0xb0(r3)
	fmr      f29, f2
	fmr      f30, f3
	mr       r29, r4
	fmr      f31, f4
	cmplwi   r0, 0
	mr       r30, r5
	mr       r31, r6
	beq      lbl_80056848
	lwz      r3, 0x168(r28)
	cmplwi   r3, 0
	beq      lbl_80056848
	lwz      r0, 0x70(r3)
	cmplwi   r0, 0
	beq      lbl_80056848
	lwz      r0, 0x28(r3)
	cmplwi   r0, 0
	beq      lbl_80056848
	bl       setGX__11J2DMaterialFv
	mr       r3, r28
	lfs      f3, lbl_805168E4@sda21(r2)
	lwz      r12, 0(r28)
	fmr      f1, f28
	fmr      f2, f29
	lwz      r12, 0x48(r12)
	fmr      f4, f3
	mtctr    r12
	bctrl
	addi     r3, r28, 0x50
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	bl       GXSetCurrentMtx
	lwz      r3, 0x168(r28)
	lbz      r0, 0xe(r3)
	cmplwi   r0, 0
	beq      lbl_80056848
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	lbz      r3, 0xb2(r28)
	li       r0, -1
	stw      r0, 8(r1)
	stb      r3, 0xb3(r28)
	lwz      r3, 0x168(r28)
	lbz      r23, 0x150(r28)
	lbz      r3, 0xf(r3)
	lbz      r24, 0x151(r28)
	lbz      r25, 0x152(r28)
	cmpwi    r3, 1
	lbz      r26, 0x153(r28)
	stw      r0, 0xc(r1)
	lbz      r27, 0x154(r28)
	lbz      r12, 0x155(r28)
	lbz      r11, 0x156(r28)
	lbz      r10, 0x157(r28)
	stw      r0, 0x10(r1)
	lbz      r9, 0x158(r28)
	lbz      r8, 0x159(r28)
	lbz      r5, 0x15a(r28)
	lbz      r7, 0x15b(r28)
	stw      r0, 0x14(r1)
	lbz      r4, 0x15c(r28)
	lbz      r3, 0x15d(r28)
	lbz      r0, 0x15e(r28)
	lbz      r6, 0x15f(r28)
	stb      r23, 8(r1)
	stb      r24, 9(r1)
	stb      r25, 0xa(r1)
	stb      r26, 0xb(r1)
	stb      r27, 0xc(r1)
	stb      r12, 0xd(r1)
	stb      r11, 0xe(r1)
	stb      r10, 0xf(r1)
	stb      r9, 0x10(r1)
	stb      r8, 0x11(r1)
	stb      r5, 0x12(r1)
	stb      r7, 0x13(r1)
	stb      r4, 0x14(r1)
	stb      r3, 0x15(r1)
	stb      r0, 0x16(r1)
	stb      r6, 0x17(r1)
	bne      lbl_800564F0
	lbz      r0, 0xb3(r28)
	lis      r3, 0x80808081@ha
	addi     r9, r3, 0x80808081@l
	mullw    r5, r0, r26
	mullw    r4, r0, r7
	mullw    r3, r0, r10
	mulhw    r7, r9, r5
	mullw    r0, r0, r6
	add      r5, r7, r5
	srawi    r7, r5, 7
	mulhw    r6, r9, r3
	srwi     r8, r7, 0x1f
	add      r7, r7, r8
	stb      r7, 0xb(r1)
	mulhw    r5, r9, r4
	add      r3, r6, r3
	srawi    r6, r3, 7
	add      r4, r5, r4
	mulhw    r3, r9, r0
	srwi     r5, r6, 0x1f
	srawi    r4, r4, 7
	add      r6, r6, r5
	srwi     r5, r4, 0x1f
	stb      r6, 0xf(r1)
	add      r0, r3, r0
	add      r4, r4, r5
	srawi    r0, r0, 7
	stb      r4, 0x13(r1)
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	stb      r0, 0x17(r1)

lbl_800564F0:
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
	lfs      f0, lbl_805168E4@sda21(r2)
	lis      r6, 0xCC008000@ha
	lwz      r3, 8(r1)
	clrlwi.  r0, r31, 0x18
	stfs     f0, 0xCC008000@l(r6)
	stfs     f0, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stw      r3, -0x8000(r6)
	bne      lbl_80056578
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	and      r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	and      r0, r4, r0
	sth      r0, -0x8000(r6)
	b        lbl_800565B0

lbl_80056578:
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	and      r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	andc     r0, r4, r0
	sth      r0, -0x8000(r6)

lbl_800565B0:
	lis      r6, 0xCC008000@ha
	clrlwi.  r0, r31, 0x18
	stfs     f30, 0xCC008000@l(r6)
	lfs      f0, lbl_805168E4@sda21(r2)
	lwz      r0, 0xc(r1)
	stfs     f0, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stw      r0, -0x8000(r6)
	bne      lbl_80056610
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	andc     r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	and      r0, r4, r0
	sth      r0, -0x8000(r6)
	b        lbl_80056648

lbl_80056610:
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	and      r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	and      r0, r4, r0
	sth      r0, -0x8000(r6)

lbl_80056648:
	lis      r6, 0xCC008000@ha
	clrlwi.  r0, r31, 0x18
	stfs     f30, 0xCC008000@l(r6)
	lfs      f0, lbl_805168E4@sda21(r2)
	stfs     f31, -0x8000(r6)
	lwz      r0, 0x14(r1)
	stfs     f0, -0x8000(r6)
	stw      r0, -0x8000(r6)
	bne      lbl_800566A8
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	andc     r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	andc     r0, r4, r0
	sth      r0, -0x8000(r6)
	b        lbl_800566E0

lbl_800566A8:
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	andc     r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	and      r0, r4, r0
	sth      r0, -0x8000(r6)

lbl_800566E0:
	lfs      f0, lbl_805168E4@sda21(r2)
	lis      r6, 0xCC008000@ha
	lwz      r3, 0x10(r1)
	clrlwi.  r0, r31, 0x18
	stfs     f0, 0xCC008000@l(r6)
	stfs     f31, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stw      r3, -0x8000(r6)
	bne      lbl_80056740
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	and      r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	andc     r0, r4, r0
	sth      r0, -0x8000(r6)
	b        lbl_80056778

lbl_80056740:
	clrlwi   r5, r29, 0x18
	lis      r4, 0x00008000@ha
	neg      r0, r5
	clrlwi   r3, r30, 0x18
	or       r5, r0, r5
	addi     r4, r4, 0x00008000@l
	neg      r0, r3
	srawi    r5, r5, 0x1f
	andc     r5, r4, r5
	or       r0, r0, r3
	srawi    r0, r0, 0x1f
	sth      r5, -0x8000(r6)
	andc     r0, r4, r0
	sth      r0, -0x8000(r6)

lbl_80056778:
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 3
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	bl       GXSetNumTexGens
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r23, 0

lbl_800567C4:
	mr       r3, r23
	li       r4, 0
	li       r5, 1
	li       r6, 2
	li       r7, 3
	bl       GXSetTevSwapModeTable
	addi     r23, r23, 1
	cmpwi    r23, 4
	blt      lbl_800567C4
	li       r3, 0
	bl       GXSetNumIndStages
	li       r23, 0

lbl_800567F4:
	mr       r3, r23
	bl       GXSetTevDirect
	addi     r23, r23, 1
	cmpwi    r23, 0x10
	blt      lbl_800567F4
	addi     r3, r1, 0x18
	bl       PSMTXIdentity
	addi     r3, r1, 0x18
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 0xd
	li       r4, 0
	bl       GXSetVtxDesc

lbl_80056848:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	lmw      r23, 0x4c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/**
 * @note Address: 0x8005687C
 * @note Size: 0x168
 * drawOut__12J2DPictureExFffffff
 */
void J2DPictureEx::drawOut(f32 p1, f32 p2, f32 p3, f32 p4, f32 p5, f32 p6)
{
	if (mMaterial && mMaterial->mTevBlock && mIsVisible) {
		JUTTexture* texture = mMaterial->mTevBlock->getTexture(0);
		if (texture) {
			drawOut(JGeometry::TBox2f(p1, p2, p1 + p3, p2 + p4),
			        JGeometry::TBox2f(p5, p6, p5 + texture->getSizeX(), p6 + texture->getSizeY()));
		}
	}
}

/**
 * @note Address: 0x800569E4
 * @note Size: 0x3E8
 */
void J2DPictureEx::drawOut(const JGeometry::TBox2<f32>& boundBox, const JGeometry::TBox2<f32>& texBox)
{

	if (!mMaterial) {
		return;
	}

	if (!mMaterial->getTevBlock()) {
		return;
	}

	if (!isVisible()) {
		return;
	}
	mMaterial->setGX();

	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);

	if (!mMaterial->isVisible()) {
		return;
	}
	mColorAlpha = mAlpha;
	J2DPicture::TCornerColor colors;
	getCornerColor(colors);

	if ((int)mMaterial->mMaterialAlphaCalc == 1) {
		colors.mColor0.a = (mColorAlpha * colors.mColor0.a) / 255;
		colors.mColor1.a = (mColorAlpha * colors.mColor1.a) / 255;
		colors.mColor2.a = (mColorAlpha * colors.mColor2.a) / 255;
		colors.mColor3.a = (mColorAlpha * colors.mColor3.a) / 255;
	}

	f32 texX0 = (boundBox.i.x - texBox.i.x) / texBox.getWidth();
	f32 texX1 = 1.0f + ((boundBox.f.x - texBox.f.x) / texBox.getWidth());
	f32 texY0 = (boundBox.i.y - texBox.i.y) / texBox.getHeight();
	f32 texY1 = 1.0f + ((boundBox.f.y - texBox.f.y) / texBox.getHeight());

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	f32 z = 0.0f;
	GXPosition3f32(boundBox.i.x, boundBox.i.y, z);
	GXColor1u32(colors.mColor0);
	GXPosition2f32(texX0, texY0);

	GXPosition3f32(boundBox.f.x, boundBox.i.y, z);
	GXColor1u32(colors.mColor1);
	GXPosition2f32(texX1, texY0);

	GXPosition3f32(boundBox.f.x, boundBox.f.y, z);
	GXColor1u32(colors.mColor3);
	GXPosition2f32(texX1, texY1);

	GXPosition3f32(boundBox.i.x, boundBox.f.y, z);
	GXColor1u32(colors.mColor2);
	GXPosition2f32(texX0, texY1);

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_U16, 15);
	GXSetNumTexGens(0);
	GXSetNumTevStages(1);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);

	for (int i = 0; i < 4; i++) {
		GXSetTevSwapModeTable(GXTevSwapSel(i), GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
	}

	GXSetNumIndStages(0);

	for (int i = 0; i < 16; i++) {
		GXSetTevDirect(GXTevStageID(i));
	}

	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
	GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stmw      r24, 0x20(r1)
	  mr        r29, r3
	  mr        r30, r4
	  lwz       r3, 0x168(r3)
	  mr        r31, r5
	  cmplwi    r3, 0
	  beq-      .loc_0x3B4
	  lwz       r0, 0x70(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B4
	  lbz       r0, 0xB0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B4
	  bl        -0x47FC
	  bl        0x8DC88
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0x8D830
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0x8D824
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0x8D818
	  lwz       r3, 0x168(r29)
	  lbz       r0, 0xE(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B4
	  lbz       r3, 0xB2(r29)
	  li        r0, -0x1
	  stw       r0, 0x8(r1)
	  stb       r3, 0xB3(r29)
	  lwz       r3, 0x168(r29)
	  lbz       r24, 0x150(r29)
	  lbz       r3, 0xF(r3)
	  lbz       r25, 0x151(r29)
	  lbz       r26, 0x152(r29)
	  cmpwi     r3, 0x1
	  lbz       r27, 0x153(r29)
	  stw       r0, 0xC(r1)
	  lbz       r28, 0x154(r29)
	  lbz       r12, 0x155(r29)
	  lbz       r11, 0x156(r29)
	  lbz       r10, 0x157(r29)
	  stw       r0, 0x10(r1)
	  lbz       r9, 0x158(r29)
	  lbz       r8, 0x159(r29)
	  lbz       r5, 0x15A(r29)
	  lbz       r7, 0x15B(r29)
	  stw       r0, 0x14(r1)
	  lbz       r4, 0x15C(r29)
	  lbz       r3, 0x15D(r29)
	  lbz       r0, 0x15E(r29)
	  lbz       r6, 0x15F(r29)
	  stb       r24, 0x8(r1)
	  stb       r25, 0x9(r1)
	  stb       r26, 0xA(r1)
	  stb       r27, 0xB(r1)
	  stb       r28, 0xC(r1)
	  stb       r12, 0xD(r1)
	  stb       r11, 0xE(r1)
	  stb       r10, 0xF(r1)
	  stb       r9, 0x10(r1)
	  stb       r8, 0x11(r1)
	  stb       r5, 0x12(r1)
	  stb       r7, 0x13(r1)
	  stb       r4, 0x14(r1)
	  stb       r3, 0x15(r1)
	  stb       r0, 0x16(r1)
	  stb       r6, 0x17(r1)
	  bne-      .loc_0x1C4
	  lbz       r0, 0xB3(r29)
	  lis       r3, 0x8081
	  subi      r9, r3, 0x7F7F
	  mullw     r5, r0, r27
	  mullw     r4, r0, r7
	  mullw     r3, r0, r10
	  mulhw     r7, r9, r5
	  mullw     r0, r0, r6
	  add       r5, r7, r5
	  srawi     r7, r5, 0x7
	  mulhw     r6, r9, r3
	  rlwinm    r8,r7,1,31,31
	  add       r7, r7, r8
	  stb       r7, 0xB(r1)
	  mulhw     r5, r9, r4
	  add       r3, r6, r3
	  srawi     r6, r3, 0x7
	  add       r4, r5, r4
	  mulhw     r3, r9, r0
	  rlwinm    r5,r6,1,31,31
	  srawi     r4, r4, 0x7
	  add       r6, r6, r5
	  rlwinm    r5,r4,1,31,31
	  stb       r6, 0xF(r1)
	  add       r0, r3, r0
	  add       r4, r4, r5
	  srawi     r0, r0, 0x7
	  stb       r4, 0x13(r1)
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  stb       r0, 0x17(r1)

	.loc_0x1C4:
	  lfs       f3, 0x0(r31)
	  li        r3, 0
	  lfs       f2, 0x8(r31)
	  li        r4, 0xD
	  lfs       f0, 0x8(r30)
	  li        r5, 0x1
	  lfs       f1, 0x0(r30)
	  fsubs     f5, f2, f3
	  fsubs     f2, f0, f2
	  lfs       f6, 0x4(r31)
	  lfs       f8, 0xC(r31)
	  fsubs     f4, f1, f3
	  lfs       f0, 0xC(r30)
	  lfs       f1, 0x4(r30)
	  fsubs     f7, f8, f6
	  lfs       f3, -0x7A80(r2)
	  fsubs     f0, f0, f8
	  li        r6, 0x4
	  fdivs     f2, f2, f5
	  li        r7, 0
	  fsubs     f1, f1, f6
	  fdivs     f0, f0, f7
	  fdivs     f31, f4, f5
	  fdivs     f29, f1, f7
	  fadds     f30, f3, f2
	  fadds     f28, f3, f0
	  bl        0x8DAF8
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x8DAE0
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0x8ED50
	  lfs       f2, 0x0(r30)
	  lis       r10, 0xCC01
	  lfs       f3, 0x4(r30)
	  li        r3, 0
	  stfs      f2, -0x8000(r10)
	  li        r4, 0x9
	  lfs       f1, -0x7A7C(r2)
	  li        r5, 0x1
	  stfs      f3, -0x8000(r10)
	  li        r6, 0x3
	  lwz       r0, 0x8(r1)
	  li        r7, 0
	  stfs      f1, -0x8000(r10)
	  lfs       f0, 0x8(r30)
	  stw       r0, -0x8000(r10)
	  lwz       r9, 0xC(r1)
	  stfs      f31, -0x8000(r10)
	  lfs       f4, 0xC(r30)
	  stfs      f29, -0x8000(r10)
	  lwz       r8, 0x14(r1)
	  stfs      f0, -0x8000(r10)
	  lwz       r0, 0x10(r1)
	  stfs      f3, -0x8000(r10)
	  stfs      f1, -0x8000(r10)
	  stw       r9, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f29, -0x8000(r10)
	  stfs      f0, -0x8000(r10)
	  stfs      f4, -0x8000(r10)
	  stfs      f1, -0x8000(r10)
	  stw       r8, -0x8000(r10)
	  stfs      f30, -0x8000(r10)
	  stfs      f28, -0x8000(r10)
	  stfs      f2, -0x8000(r10)
	  stfs      f4, -0x8000(r10)
	  stfs      f1, -0x8000(r10)
	  stw       r0, -0x8000(r10)
	  stfs      f31, -0x8000(r10)
	  stfs      f28, -0x8000(r10)
	  bl        0x8DA30
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  bl        0x8DA18
	  li        r3, 0
	  bl        0x8E2A4
	  li        r3, 0x1
	  bl        0x91EB8
	  li        r3, 0
	  li        r4, 0x4
	  bl        0x91770
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0x91CFC
	  li        r24, 0

	.loc_0x344:
	  mr        r3, r24
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0x3
	  bl        0x91B90
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x4
	  blt+      .loc_0x344
	  li        r3, 0
	  bl        0x91604
	  li        r24, 0

	.loc_0x374:
	  mr        r3, r24
	  bl        0x9161C
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x10
	  blt+      .loc_0x374
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0x90118
	  li        r3, 0xD
	  li        r4, 0
	  bl        0x8D4F0

	.loc_0x3B4:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  lmw       r24, 0x20(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/**
 * @note Address: 0x80056DCC
 * @note Size: 0x48
 */
void J2DPictureEx::load(GXTexMapID p1, u8 p2)
{
	if (mMaterial && mMaterial->mTevBlock) {
		mMaterial->mTevBlock->loadTexture(p1, p2);
	}
}

/**
 * @note Address: 0x80056E14
 * @note Size: 0x1FC
 */
void J2DPictureEx::setTevOrder(u8 p1, u8 p2, bool p3)
{
	u16 data[16];
	if (p1 == 1) {
		if (p3 == false) {
			data[0] = 4;
		} else {
			data[0] = 0x00FF;
			data[1] = 0xFF04;
		}
	} else {
		for (u8 i = 0; i < p1; i++) {
			data[i] = i * 0x100 | 0xFF;
		}
		if (p3 == false) {
			data[p1] = 0xFF04;
		} else {
			data[p1]     = 0xFFFF;
			data[p1 + 1] = 0xFF04;
		}
	}
	for (u8 i = 0; i < p2; i++) {
		J2DTevOrder order(data[i] >> 8, data[i] >> 8, data[i]);
		mMaterial->mTevBlock->setTevOrder(i, order);
	}
}

/**
 * @note Address: 0x80057010
 * @note Size: 0x2BC
 */
void J2DPictureEx::setTevStage(u8 p1, u8 p2, bool p3)
{
	if (p1 == 1) {
		J2DTevStage* stage  = mMaterial->mTevBlock->getTevStage(0);
		JUTTexture* texture = mMaterial->mTevBlock->getTexture(0);
		stage_enum v1       = Stage_0;
		bool v2             = false;
		if (texture != nullptr) {
			if (texture->mTexInfo != nullptr) {
				if ((texture->mTexInfo->mTextureFormat == (s8)GX_TF_I4 || texture->mTexInfo->mTextureFormat == (s8)GX_TF_I8)
				    && texture->mTexInfo->mTransparency == Transparency_0) {
					v1 = Stage_1;
					v2 = true;
				}
			}
		}
		if (p3 == false) {
			setStage(stage, (stage_enum)(-v1 < 0));
		} else {
			setStage(stage, (v2 ? Stage_6 : Stage_5));
			setStage(mMaterial->mTevBlock->getTevStage(1), Stage_4);
		}
	} else {
		if (p3 == false) {
			setStage(mMaterial->mTevBlock->getTevStage(0), Stage_2);
			for (u8 i = 1; i < p1; i++) {
				setStage(mMaterial->mTevBlock->getTevStage(i), Stage_3);
			}
			setStage(mMaterial->mTevBlock->getTevStage(p1), Stage_4);
		} else {
			setStage(mMaterial->mTevBlock->getTevStage(0), Stage_2);
			for (u8 i = 1; i < p1; i++) {
				setStage(mMaterial->mTevBlock->getTevStage(i), Stage_3);
			}
			setStage(mMaterial->mTevBlock->getTevStage(p1), Stage_7);
			setStage(mMaterial->mTevBlock->getTevStage(p1 + 1), Stage_4);
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 1
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r6
	bne      lbl_80057130
	lwz      r3, 0x168(r31)
	li       r4, 0
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x168(r31)
	mr       r29, r3
	li       r4, 0
	lwz      r3, 0x70(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	li       r4, 0
	beq      lbl_800570BC
	lwz      r3, 0x20(r3)
	cmplwi   r3, 0
	beq      lbl_800570BC
	lbz      r0, 0(r3)
	cmpwi    r0, 0
	beq      lbl_800570AC
	cmpwi    r0, 1
	bne      lbl_800570BC

lbl_800570AC:
	lbz      r0, 1(r3)
	cmpwi    r0, 0
	bne      lbl_800570BC
	li       r4, 1

lbl_800570BC:
	clrlwi.  r0, r28, 0x18
	bne      lbl_800570E4
	clrlwi   r5, r4, 0x18
	mr       r3, r31
	neg      r0, r5
	mr       r4, r29
	or       r0, r0, r5
	srwi     r5, r0, 0x1f
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	b        lbl_800572AC

lbl_800570E4:
	clrlwi.  r0, r4, 0x18
	mr       r3, r31
	mr       r4, r29
	li       r5, 5
	beq      lbl_800570FC
	li       r5, 6

lbl_800570FC:
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	lwz      r3, 0x168(r31)
	li       r4, 1
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 4
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	b        lbl_800572AC

lbl_80057130:
	clrlwi.  r0, r28, 0x18
	bne      lbl_800571DC
	lwz      r3, 0x168(r31)
	li       r4, 0
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 2
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	clrlwi   r29, r30, 0x18
	li       r30, 1
	b        lbl_800571A0

lbl_80057170:
	lwz      r3, 0x168(r31)
	clrlwi   r4, r30, 0x18
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 3
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	addi     r30, r30, 1

lbl_800571A0:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r29
	blt      lbl_80057170
	lwz      r3, 0x168(r31)
	mr       r4, r29
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 4
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	b        lbl_800572AC

lbl_800571DC:
	lwz      r3, 0x168(r31)
	li       r4, 0
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 2
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	clrlwi   r29, r30, 0x18
	li       r28, 1
	b        lbl_80057244

lbl_80057214:
	lwz      r3, 0x168(r31)
	clrlwi   r4, r28, 0x18
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 3
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	addi     r28, r28, 1

lbl_80057244:
	clrlwi   r0, r28, 0x18
	cmplw    r0, r29
	blt      lbl_80057214
	lwz      r3, 0x168(r31)
	mr       r4, r29
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 7
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum
	lwz      r3, 0x168(r31)
	addi     r0, r30, 1
	clrlwi   r4, r0, 0x18
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	li       r5, 4
	bl       setStage__12J2DPictureExFP11J2DTevStageQ212J2DPictureEx10stage_enum

lbl_800572AC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x800572CC
 * @note Size: 0x300
 */
void J2DPictureEx::setStage(J2DTevStage* tevStage, J2DPictureEx::stage_enum i)
{
	u8 colorABCDs[8][4] = { { 15, 8, 10, 15 }, { 15, 8, 10, 15 }, { 15, 8, 14, 15 }, { 15, 8, 14, 0 },
		                    { 15, 10, 0, 15 }, { 2, 4, 8, 15 },   { 2, 4, 8, 15 },   { 2, 4, 0, 15 } };
	u8 alphaABCDs[8][4] = { { 7, 4, 5, 7 }, { 5, 7, 7, 7 }, { 7, 4, 6, 7 }, { 7, 4, 6, 0 },
		                    { 7, 5, 0, 7 }, { 1, 2, 4, 7 }, { 7, 7, 7, 2 }, { 1, 2, 0, 7 } };
	u8 ops[8][5]        = { { 0, 0, 0, 1, 0 }, { 0, 0, 0, 1, 0 }, { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 1, 0 }, { 0, 0, 0, 1, 0 }, { 0, 0, 0, 1, 0 }, { 0, 0, 0, 0, 0 } };

	tevStage->setColorABCD(colorABCDs[i][0], colorABCDs[i][1], colorABCDs[i][2], colorABCDs[i][3]);
	tevStage->setTevColorOp(ops[i][0], ops[i][1], ops[i][2], ops[i][3], ops[i][4]);
	tevStage->setAlphaABCD(alphaABCDs[i][0], alphaABCDs[i][1], alphaABCDs[i][2], alphaABCDs[i][3]);
	tevStage->setTevAlphaOp(ops[i][0], ops[i][1], ops[i][2], ops[i][3], ops[i][4]);
	/*
	stwu     r1, -0xc0(r1)
	lis      r3, lbl_804785E0@ha
	stmw     r14, 0x78(r1)
	addi     r17, r3, lbl_804785E0@l
	slwi     r16, r5, 2
	mulli    r15, r5, 5
	lwz      r18, 0(r17)
	lwz      r19, 4(r17)
	lwz      r20, 8(r17)
	lwz      r14, 0xc(r17)
	lwz      r21, 0x10(r17)
	lwz      r22, 0x14(r17)
	lwz      r23, 0x18(r17)
	lwz      r24, 0x1c(r17)
	stw      r14, 0x34(r1)
	addi     r14, r1, 0x28
	lwz      r25, 0x20(r17)
	lwz      r26, 0x24(r17)
	lwz      r27, 0x28(r17)
	lwz      r28, 0x2c(r17)
	lwz      r29, 0x30(r17)
	lwz      r30, 0x34(r17)
	lwz      r31, 0x38(r17)
	lwz      r12, 0x3c(r17)
	lwz      r11, 0x40(r17)
	lwz      r10, 0x44(r17)
	lwz      r9, 0x48(r17)
	lwz      r8, 0x4c(r17)
	lwz      r7, 0x50(r17)
	lwz      r6, 0x54(r17)
	lwz      r5, 0x58(r17)
	lwz      r3, 0x5c(r17)
	lwz      r0, 0x60(r17)
	lwz      r17, 0x64(r17)
	stw      r5, 0x60(r1)
	addi     r5, r1, 0x4b
	stw      r3, 0x64(r1)
	addi     r3, r1, 0x48
	stw      r18, 0x28(r1)
	stw      r19, 0x2c(r1)
	stw      r20, 0x30(r1)
	stw      r21, 0x38(r1)
	stw      r22, 0x3c(r1)
	stw      r23, 0x40(r1)
	stw      r24, 0x44(r1)
	lbzx     r20, r14, r16
	addi     r14, r1, 0x2a
	lbzx     r18, r14, r16
	addi     r14, r1, 0x29
	lbzx     r19, r14, r16
	slwi     r20, r20, 4
	addi     r14, r1, 0x2b
	slwi     r18, r18, 4
	or       r19, r20, r19
	lbzx     r14, r14, r16
	stw      r11, 0x48(r1)
	or       r11, r18, r14
	stb      r19, 2(r4)
	stb      r11, 3(r4)
	stw      r10, 0x4c(r1)
	lbz      r11, 1(r4)
	stw      r9, 0x50(r1)
	rlwinm   r10, r11, 0, 0x1e, 0x1c
	stw      r8, 0x54(r1)
	stw      r7, 0x58(r1)
	stw      r6, 0x5c(r1)
	stw      r0, 0x68(r1)
	stw      r17, 0x6c(r1)
	lbzx     r7, r3, r15
	addi     r3, r1, 0x4c
	stw      r25, 8(r1)
	rlwinm   r0, r7, 2, 0x16, 0x1d
	cmplwi   r7, 1
	or       r6, r10, r0
	lbzx     r0, r5, r15
	addi     r5, r1, 0x4a
	stw      r26, 0xc(r1)
	lbzx     r9, r5, r15
	addi     r5, r1, 0x49
	lbzx     r3, r3, r15
	stw      r27, 0x10(r1)
	lbzx     r8, r5, r15
	stw      r28, 0x14(r1)
	stw      r29, 0x18(r1)
	stw      r30, 0x1c(r1)
	stw      r31, 0x20(r1)
	stw      r12, 0x24(r1)
	stb      r6, 1(r4)
	bgt      lbl_80057458
	lbz      r6, 1(r4)
	rlwinm   r5, r9, 4, 0x14, 0x1b
	rlwinm   r6, r6, 0, 0x1c, 0x19
	or       r5, r6, r5
	stb      r5, 1(r4)
	lbz      r5, 1(r4)
	rlwinm   r5, r5, 0, 0, 0x1d
	or       r5, r5, r8
	stb      r5, 1(r4)
	b        lbl_80057474

lbl_80057458:
	lbz      r5, 1(r4)
	rlwimi   r5, r7, 3, 0x1a, 0x1b
	stb      r5, 1(r4)
	lbz      r5, 1(r4)
	rlwinm   r5, r5, 0, 0, 0x1d
	ori      r5, r5, 3
	stb      r5, 1(r4)

lbl_80057474:
	lbz      r6, 1(r4)
	rlwinm   r7, r3, 6, 0x12, 0x19
	addi     r3, r1, 0x48
	rlwinm   r0, r0, 3, 0x15, 0x1c
	rlwinm   r6, r6, 0, 0x1d, 0x1b
	lbzx     r3, r3, r15
	or       r6, r6, r0
	addi     r5, r1, 8
	stb      r6, 1(r4)
	addi     r6, r1, 0xb
	lbzx     r0, r5, r16
	addi     r5, r1, 9
	lbz      r8, 1(r4)
	cmplwi   r3, 1
	lbzx     r10, r5, r16
	addi     r5, r1, 0xa
	rlwimi   r7, r8, 0, 0x1a, 0x1f
	lbzx     r8, r5, r16
	stb      r7, 1(r4)
	rlwinm   r11, r10, 2, 0x16, 0x1d
	slwi     r0, r0, 5
	lbzx     r6, r6, r16
	lbz      r5, 6(r4)
	rlwinm   r9, r8, 7, 0x11, 0x18
	rlwinm   r10, r8, 0x1f, 0x19, 0x1f
	rlwinm   r8, r6, 4, 0x14, 0x1b
	rlwimi   r0, r5, 0, 0x1b, 0x1f
	addi     r5, r1, 0x4c
	stb      r0, 6(r4)
	addi     r6, r1, 0x4b
	lbzx     r0, r6, r15
	addi     r6, r1, 0x4a
	lbz      r12, 6(r4)
	rlwinm   r7, r3, 2, 0x16, 0x1d
	lbzx     r14, r6, r15
	addi     r6, r1, 0x49
	rlwinm   r12, r12, 0, 0x1e, 0x1a
	lbzx     r5, r5, r15
	or       r11, r12, r11
	lbzx     r12, r6, r15
	stb      r11, 6(r4)
	lbz      r6, 6(r4)
	rlwinm   r6, r6, 0, 0, 0x1d
	or       r6, r6, r10
	stb      r6, 6(r4)
	lbz      r6, 7(r4)
	rlwimi   r9, r6, 0, 0x19, 0x1f
	stb      r9, 7(r4)
	lbz      r6, 7(r4)
	rlwinm   r6, r6, 0, 0x1c, 0x18
	or       r6, r6, r8
	stb      r6, 7(r4)
	lbz      r6, 5(r4)
	rlwinm   r6, r6, 0, 0x1e, 0x1c
	or       r6, r6, r7
	stb      r6, 5(r4)
	bgt      lbl_80057580
	lbz      r6, 5(r4)
	rlwinm   r3, r14, 4, 0x14, 0x1b
	rlwinm   r6, r6, 0, 0, 0x1d
	or       r6, r6, r12
	stb      r6, 5(r4)
	lbz      r6, 5(r4)
	rlwinm   r6, r6, 0, 0x1c, 0x19
	or       r3, r6, r3
	stb      r3, 5(r4)
	b        lbl_8005759C

lbl_80057580:
	lbz      r6, 5(r4)
	rlwimi   r6, r3, 3, 0x1a, 0x1b
	stb      r6, 5(r4)
	lbz      r3, 5(r4)
	rlwinm   r3, r3, 0, 0, 0x1d
	ori      r3, r3, 3
	stb      r3, 5(r4)

lbl_8005759C:
	lbz      r6, 5(r4)
	rlwinm   r3, r5, 6, 0x12, 0x19
	rlwinm   r0, r0, 3, 0x15, 0x1c
	rlwinm   r5, r6, 0, 0x1d, 0x1b
	or       r0, r5, r0
	stb      r0, 5(r4)
	lbz      r0, 5(r4)
	rlwimi   r3, r0, 0, 0x1a, 0x1f
	stb      r3, 5(r4)
	lmw      r14, 0x78(r1)
	addi     r1, r1, 0xc0
	blr
	*/
}

/**
 * @note Address: 0x800575CC
 * @note Size: 0x4A4
 */
void J2DPictureEx::setTevKColor(u8 p1)
{
	if (p1 == 1) {
		return;
	}

	f32 colorRatio = 0.0f;
	f32 alphaRatio = 0.0f;
	if (p1 < 4) {
		for (u8 i = 0; i < p1; i++) {
			colorRatio += mBlendColorRatio[i];
			alphaRatio += mBlendAlphaRatio[i];
		}
	} else {
		for (u8 i = 0; i < 4; i++) {
			colorRatio += mBlendColorRatio[i];
			alphaRatio += mBlendAlphaRatio[i];
		}

		for (u8 i = 0; i < (p1 - 4); i++) {
			colorRatio += mExBlendColorRatio[i];
			alphaRatio += mExBlendAlphaRatio[i];
		}
	}

	u8 colA[8];
	u8 colB[8];

	for (int i = 0; i < 8; i++) {
		colA[i] = 255;
		colB[i] = 255;
	}

	for (u8 i = 0; i < p1; i++) {
		if (i < 4) {
			colA[i] = (255.0f * mBlendColorRatio[i] / colorRatio);
			colB[i] = (255.0f * mBlendAlphaRatio[i] / alphaRatio);
		} else {
			colA[i] = (255.0f * mExBlendColorRatio[i - 4] / colorRatio);
			colB[i] = (255.0f * mExBlendAlphaRatio[i - 4] / alphaRatio);
		}
	}

	JUtility::TColor jColors[4];
	jColors[3] = colA[0] | (colA[1] << 8 | (colA[3] << 24 | (colA[2] << 16)));
	jColors[2] = colA[4] | (colA[5] << 8 | (colA[7] << 24 | (colA[6] << 16)));
	jColors[1] = colB[0] | (colB[1] << 8 | (colB[3] << 24 | (colB[2] << 16)));
	jColors[0] = colB[4] | (colB[5] << 8 | (colB[7] << 24 | (colB[6] << 16)));

	for (u8 i = 0; i < 4; i++) {
		mMaterial->getTevBlock()->setTevKColor(i, jColors[i]);
	}
}

/**
 * @note Address: 0x80057A70
 * @note Size: 0xB0
 */
void J2DPictureEx::setTevKColorSel(u8 texNum)
{
	for (u8 i = 0; i < texNum; i++) {
		if (i < 4) {
			mMaterial->getTevBlock()->setTevKColorSel(i, 31 - 4 * i);
		} else {
			mMaterial->getTevBlock()->setTevKColorSel(i, 30 - 4 * (i - 4));
		}
	}
}

/**
 * @note Address: 0x80057B20
 * @note Size: 0xB0
 */
void J2DPictureEx::setTevKAlphaSel(u8 texNum)
{
	for (u8 i = 0; i < texNum; i++) {
		if (i < 4) {
			mMaterial->getTevBlock()->setTevKAlphaSel(i, 29 - 4 * i);
		} else {
			mMaterial->getTevBlock()->setTevKAlphaSel(i, 28 - 4 * (i - 4));
		}
	}
}

/**
 * @note Address: 0x80057BD0
 * @note Size: 0x118
 */
void J2DPictureEx::shiftSetBlendRatio(u8 id, f32 blendRatio, bool isColorRatio, bool isInsert)
{
	f32* ratio   = isColorRatio != 0 ? mBlendColorRatio : mBlendAlphaRatio;
	f32* exRatio = isColorRatio != 0 ? mExBlendColorRatio : mExBlendAlphaRatio;

	if (isInsert) {
		for (int i = 7; i > id; i--) {
			if (i > 4) {
				exRatio[i - 4] = exRatio[i - 5];
			} else if (i == 4) {
				exRatio[0] = ratio[3];
			} else {
				ratio[i] = ratio[i - 1];
			}
		}
		if (id >= 4) {
			exRatio[id - 4] = blendRatio;
		} else {
			ratio[id] = blendRatio;
		}
	} else {
		for (int i = id + 1; i < 8; i++) {
			if (i > 4) {
				exRatio[i - 5] = exRatio[i - 4];
			} else if (i == 4) {
				ratio[3] = exRatio[0];
			} else {
				ratio[i - 1] = ratio[i];
			}
		}
	}
}

/**
 * @note Address: 0x80057CE8
 * @note Size: 0x58
 */
void J2DPictureEx::setBlendColorRatio(f32 ratio0, f32 ratio1, f32 ratio2, f32 ratio3, f32 exRatio0, f32 exRatio1, f32 exRatio2,
                                      f32 exRatio3)
{
	if (mMaterial != nullptr) {
		mBlendColorRatio[0]   = ratio0;
		mBlendColorRatio[1]   = ratio1;
		mBlendColorRatio[2]   = ratio2;
		mBlendColorRatio[3]   = ratio3;
		mExBlendColorRatio[0] = exRatio0;
		mExBlendColorRatio[1] = exRatio1;
		mExBlendColorRatio[2] = exRatio2;
		mExBlendColorRatio[3] = exRatio3;
		setTevKColor(mMaterial->mTexGenBlock.mTexGenNum);
	}
}

/**
 * @note Address: 0x80057D40
 * @note Size: 0x58
 */
void J2DPictureEx::setBlendAlphaRatio(f32 ratio0, f32 ratio1, f32 ratio2, f32 ratio3, f32 exRatio0, f32 exRatio1, f32 exRatio2,
                                      f32 exRatio3)
{
	if (mMaterial) {
		mBlendAlphaRatio[0]   = ratio0;
		mBlendAlphaRatio[1]   = ratio1;
		mBlendAlphaRatio[2]   = ratio2;
		mBlendAlphaRatio[3]   = ratio3;
		mExBlendAlphaRatio[0] = exRatio0;
		mExBlendAlphaRatio[1] = exRatio1;
		mExBlendAlphaRatio[2] = exRatio2;
		mExBlendAlphaRatio[3] = exRatio3;
		setTevKColor(mMaterial->getTexGenBlock()->getTexGenNum());
	}
}

/**
 * @note Address: 0x80057D98
 * @note Size: 0x140
 */
ResTIMG* J2DPictureEx::changeTexture(const ResTIMG* resource, u8 id)
{
	if (mMaterial == nullptr || resource == nullptr) {
		return nullptr;
	}
	u32 texNum = mMaterial->getTexGenBlock()->getTexGenNum();
	if (id > texNum) {
		return nullptr;
	}

	u8 maxStage = mMaterial->getTevBlock()->getMaxStage();
	maxStage    = maxStage > 8 ? 8 : maxStage;

	if (id >= maxStage) {
		return nullptr;
	}

	if (id < texNum) {
		const ResTIMG* texInfo = getTexture(id)->getTexInfo();
		u8 usableID            = 0;
		if (resource->mPaletteFormat != 0) {
			usableID = getUsableTlut(id);
		}
		getTexture(id)->storeTIMG(resource, usableID);
		return (ResTIMG*)texInfo;
	}
	append(resource, 1.0f);
	return nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	lwz      r3, 0x168(r3)
	cmplwi   r3, 0
	beq      lbl_80057DC8
	cmplwi   r28, 0
	bne      lbl_80057DD0

lbl_80057DC8:
	li       r3, 0
	b        lbl_80057EC4

lbl_80057DD0:
	lwz      r31, 0x28(r3)
	clrlwi   r30, r29, 0x18
	cmplw    r30, r31
	ble      lbl_80057DE8
	li       r3, 0
	b        lbl_80057EC4

lbl_80057DE8:
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	mr       r5, r30
	cmplwi   r0, 8
	li       r4, 8
	bgt      lbl_80057E14
	mr       r4, r3

lbl_80057E14:
	clrlwi   r0, r4, 0x18
	cmplw    r5, r0
	blt      lbl_80057E28
	li       r3, 0
	b        lbl_80057EC4

lbl_80057E28:
	cmplw    r30, r31
	bge      lbl_80057EA4
	mr       r3, r27
	mr       r4, r29
	lwz      r12, 0(r27)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	lbz      r0, 8(r28)
	li       r30, 0
	lwz      r31, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_80057E78
	mr       r3, r27
	mr       r4, r29
	lwz      r12, 0(r27)
	lwz      r12, 0x148(r12)
	mtctr    r12
	bctrl
	mr       r30, r3

lbl_80057E78:
	mr       r3, r27
	mr       r4, r29
	lwz      r12, 0(r27)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	mr       r5, r30
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	mr       r3, r31
	b        lbl_80057EC4

lbl_80057EA4:
	mr       r3, r27
	mr       r4, r28
	lwz      r12, 0(r27)
	lfs      f1, lbl_805168E0@sda21(r2)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_80057EC4:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80057ED8
 * @note Size: 0x58
 * changeTexture__12J2DPictureExFPCcUc
 */
ResTIMG* J2DPictureEx::changeTexture(const char* fileName, u8 id)
{
	return changeTexture((ResTIMG*)J2DScreen::getNameResource(fileName), id);
}

/**
 * @note Address: 0x80057F30
 * @note Size: 0x160
 * changeTexture__12J2DPictureExFPC7ResTIMGUcP10JUTPalette
 */
ResTIMG* J2DPictureEx::changeTexture(const ResTIMG* resource, u8 id, JUTPalette* palette)
{
	if (mMaterial == nullptr || resource == nullptr) {
		return nullptr;
	}
	u32 texNum = mMaterial->getTexGenBlock()->getTexGenNum();
	if (id > texNum) {
		return nullptr;
	}
	u8 maxStage = mMaterial->getTevBlock()->getMaxStage();
	maxStage    = maxStage > 8 ? 8 : maxStage;

	if (id >= maxStage) {
		return nullptr;
	}
	if (id < texNum) {
		JUTTexture* texture = getTexture(id);
		ResTIMG* texInfo    = texture->mTexInfo;
		GXTlut tlut         = GX_TLUT0;
		if (resource->mPaletteFormat != 0) {
			u8 usableID = getUsableTlut(id);
			tlut        = getTlutID(resource, usableID);
		}
		getTexture(id)->storeTIMG(resource, palette, tlut);
		return texInfo;
	}
	append(resource, palette, 1.0f);
	return nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r28, r3
	mr       r29, r4
	mr       r30, r5
	mr       r31, r6
	lwz      r3, 0x168(r3)
	cmplwi   r3, 0
	beq      lbl_80057F64
	cmplwi   r29, 0
	bne      lbl_80057F6C

lbl_80057F64:
	li       r3, 0
	b        lbl_8005807C

lbl_80057F6C:
	lwz      r27, 0x28(r3)
	clrlwi   r26, r30, 0x18
	cmplw    r26, r27
	ble      lbl_80057F84
	li       r3, 0
	b        lbl_8005807C

lbl_80057F84:
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	mr       r5, r26
	cmplwi   r0, 8
	li       r4, 8
	bgt      lbl_80057FB0
	mr       r4, r3

lbl_80057FB0:
	clrlwi   r0, r4, 0x18
	cmplw    r5, r0
	blt      lbl_80057FC4
	li       r3, 0
	b        lbl_8005807C

lbl_80057FC4:
	cmplw    r26, r27
	bge      lbl_80058058
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	lbz      r0, 8(r29)
	li       r26, 0
	lwz      r27, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_80058028
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	lwz      r12, 0x148(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r28
	mr       r5, r0
	mr       r4, r29
	bl       getTlutID__10J2DPictureFPC7ResTIMGUc
	mr       r26, r3

lbl_80058028:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	mr       r5, r31
	mr       r6, r26
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette7_GXTlut
	mr       r3, r27
	b        lbl_8005807C

lbl_80058058:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	mr       r5, r31
	lfs      f1, lbl_805168E0@sda21(r2)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_8005807C:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80058090
 * @note Size: 0x68
 * changeTexture__12J2DPictureExFPCcUcP10JUTPalette
 */
ResTIMG* J2DPictureEx::changeTexture(const char* name, u8 p2, JUTPalette* palette)
{
	return changeTexture((ResTIMG*)J2DScreen::getNameResource(name), p2, palette);
}

/**
 * @note Address: 0x800580F8
 * @note Size: 0x58
 */
JUTTexture* J2DPictureEx::getTexture(u8 id) const
{
	if (mMaterial == nullptr) {
		return nullptr;
	}

	if (mMaterial->getTevBlock() == nullptr) {
		return nullptr;
	}

	return mMaterial->getTevBlock()->getTexture(id);
}

/**
 * @note Address: 0x80058150
 * @note Size: 0x20
 */
u8 J2DPictureEx::getTextureCount() const
{
	if (mMaterial == nullptr) {
		return 0;
	}
	return mMaterial->mTexGenBlock.mTexGenNum;
}

/**
 * @note Address: 0x80058170
 * @note Size: 0x88
 */
bool J2DPictureEx::setBlack(JUtility::TColor black)
{
	JUtility::TColor oldBlack, oldWhite;
	if (!getBlackWhite(&oldBlack, &oldWhite)) {
		return false;
	}
	return setBlackWhite(black, oldWhite);
}

/**
 * @note Address: 0x800581F8
 * @note Size: 0x88
 */
bool J2DPictureEx::setWhite(JUtility::TColor white)
{
	JUtility::TColor oldBlack, oldWhite;
	if (!getBlackWhite(&oldBlack, &oldWhite)) {
		return false;
	}
	return setBlackWhite(oldBlack, white);
}

/**
 * @note Address: 0x80058280
 * @note Size: 0x454
 */
bool J2DPictureEx::setBlackWhite(JUtility::TColor black, JUtility::TColor white)
{
	if (mMaterial == nullptr) {
		return false;
	}

	if (mMaterial->getTevBlock() == nullptr) {
		return false;
	}

	if (!isSetBlackWhite(black, white)) {
		return false;
	}

	bool isNotDefault = true;
	u8 texGenNum      = mMaterial->getTexGenBlock()->getTexGenNum();
	u8 tevStageNum;
	if ((black == 0) && (white == 0xFFFFFFFF)) { // i.e. if setting to default colors
		isNotDefault = false;
	}
	if (texGenNum == 1) {
		tevStageNum = (isNotDefault) ? 2 : 1;
	} else {
		tevStageNum = texGenNum + ((isNotDefault) ? 2 : 1);
	}
	mMaterial->getTevBlock()->setTevStageNum(tevStageNum);
	setTevOrder(texGenNum, tevStageNum, isNotDefault);
	setTevStage(texGenNum, tevStageNum, isNotDefault);
	setTevKColor(texGenNum);
	setTevKColorSel(texGenNum);
	setTevKAlphaSel(texGenNum);
	if (isNotDefault) {
		J2DGXColorS10 local_38;
		local_38.r = black.r;
		local_38.g = black.g;
		local_38.b = black.b;
		local_38.a = black.a;
		mMaterial->getTevBlock()->setTevColor(0, local_38);
		local_38.r = white.r;
		local_38.g = white.g;
		local_38.b = white.b;
		local_38.a = white.a;
		mMaterial->getTevBlock()->setTevColor(1, local_38);
	}
	return true;
}

/**
 * @note Address: 0x800586D4
 * @note Size: 0x1C4
 */
bool J2DPictureEx::getBlackWhite(JUtility::TColor* outBlack, JUtility::TColor* outWhite) const
{
	if (mMaterial == nullptr) {
		return false;
	}
	if (mMaterial->mTevBlock == nullptr) {
		return false;
	}
	u8 texGenNum   = mMaterial->getTexGenBlock()->getTexGenNum();
	u8 tevStageNum = mMaterial->getTevBlock()->getTevStageNum();
	u8 texCheck    = (texGenNum == 1) ? tevStageNum != 1 : tevStageNum != (texGenNum + 1);

	*outBlack = 0;
	*outWhite = 0xFFFFFFFF;
	if (texCheck) {
		J2DGXColorS10 tevBlack, tevWhite;
		tevBlack  = *mMaterial->getTevBlock()->getTevColor(0);
		tevWhite  = *mMaterial->getTevBlock()->getTevColor(1);
		*outBlack = JUtility::TColor(((u8)tevBlack.r << 0x18) | ((u8)tevBlack.g << 0x10) | ((u8)tevBlack.b << 8) | (u8)tevBlack.a);
		*outWhite = JUtility::TColor(((u8)tevWhite.r << 0x18) | ((u8)tevWhite.g << 0x10) | ((u8)tevWhite.b << 8) | (u8)tevWhite.a);
	}
	return true;
}

/**
 * @note Address: 0x80058898
 * @note Size: 0xDC
 */
bool J2DPictureEx::isSetBlackWhite(JUtility::TColor black, JUtility::TColor white) const
{
	if (black == 0 && white == 0xFFFFFFFF) {
		return true;
	}

	u8 texGenNum = mMaterial->getTexGenBlock()->getTexGenNum();
	mMaterial->getTevBlock()->getTevStageNum();
	u32 maxStage = mMaterial->getTevBlock()->getMaxStage();
	if ((u8)maxStage == 16) {
		return true;
	}

	if ((u8)maxStage == 1) {
		return false;
	}

	return ((u8)maxStage >= (u8)((texGenNum == 1) ? 2 : texGenNum + 2));
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0(r4)
	stw      r31, 0xc(r1)
	cmplwi   r0, 0
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_800588D4
	lwz      r3, 0(r5)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_800588D4
	li       r3, 1
	b        lbl_8005895C

lbl_800588D4:
	lwz      r4, 0x168(r30)
	lwz      r3, 0x70(r4)
	lwz      r0, 0x28(r4)
	lwz      r12, 0(r3)
	clrlwi   r31, r0, 0x18
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x168(r30)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0x10
	bne      lbl_80058920
	li       r3, 1
	b        lbl_8005895C

lbl_80058920:
	cmplwi   r0, 1
	bne      lbl_80058930
	li       r3, 0
	b        lbl_8005895C

lbl_80058930:
	cmplwi   r31, 1
	li       r0, 2
	beq      lbl_80058940
	addi     r0, r31, 2

lbl_80058940:
	clrlwi   r4, r0, 0x18
	clrlwi   r3, r3, 0x18
	subf     r0, r4, r3
	orc      r3, r3, r4
	srwi     r0, r0, 1
	subf     r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_8005895C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80058974
 * @note Size: 0x60
 * getBlack__12J2DPictureExCFv
 */
JUtility::TColor J2DPictureEx::getBlack() const
{
	JUtility::TColor black, white;
	if (!getBlackWhite(&black, &white)) {
		return TCOLOR_BLACK_U32;
	}
	return black;
}

/**
 * @note Address: 0x800589D4
 * @note Size: 0x60
 */
JUtility::TColor J2DPictureEx::getWhite() const
{
	JUtility::TColor black, white;
	if (!getBlackWhite(&black, &white)) {
		return TCOLOR_WHITE_U32;
	}
	return white;
}

/**
 * @note Address: 0x80058A34
 * @note Size: 0x20
 */
void J2DPictureEx::setAlpha(u8 alpha)
{
	mAlpha = alpha;
	if (mMaterial == nullptr) {
		return;
	}
	if (mMaterial->getColorBlock() == nullptr) {
		return;
	}
	mMaterial->getColorBlock()->mColors[0].a = alpha;
}

/**
 * @note Address: 0x80058A54
 * @note Size: 0x34
 */
void J2DPictureEx::setCullBack(_GXCullMode cullMode)
{
	mCullMode = cullMode;
	if (mMaterial != nullptr) {
		mMaterial->mColorBlock.mCullMode = cullMode;
	}
	J2DPane::setCullBack(cullMode);
}

/**
 * @note Address: 0x80058A88
 * @note Size: 0x18
 */
void J2DPictureEx::rewriteAlpha()
{
	if (mMaterial == nullptr) {
		return;
	}
	mAlpha = mMaterial->mColorBlock.mColors[0].a;
}

/**
 * @note Address: 0x80058AA0
 * @note Size: 0xA8
 */
bool J2DPictureEx::isUsed(const ResTIMG* resource)
{
	if (mMaterial != nullptr && mMaterial->mTevBlock != nullptr) {
		for (u32 i = 0; i < 8; i++) {
			JUTTexture* texture = mMaterial->mTevBlock->getTexture(i);
			if (texture != nullptr && texture->mTexInfo == resource) {
				return true;
			}
		}
	}
	return J2DPane::isUsed(resource);
}

/**
 * @note Address: 0x80058B48
 * @note Size: 0x2C
 */
void J2DPictureEx::setAnimation(J2DAnmColor* animation)
{
	if (mMaterial != nullptr) {
		mMaterial->setAnimation(animation);
	}
}

/**
 * @note Address: 0x80058B74
 * @note Size: 0x2C
 */
void J2DPictureEx::setAnimation(J2DAnmTextureSRTKey* animation)
{
	if (mMaterial != nullptr) {
		mMaterial->setAnimation(animation);
	}
}

/**
 * @note Address: 0x80058BA0
 * @note Size: 0x2C
 */
void J2DPictureEx::setAnimation(J2DAnmTexPattern* animation)
{
	if (mMaterial != nullptr) {
		mMaterial->setAnimation(animation);
	}
}

/**
 * @note Address: 0x80058BCC
 * @note Size: 0x2C
 */
void J2DPictureEx::setAnimation(J2DAnmTevRegKey* animation)
{
	if (mMaterial != nullptr) {
		mMaterial->setAnimation(animation);
	}
}

/**
 * @note Address: 0x80058BF8
 * @note Size: 0x8
 */
void J2DPictureEx::setAnimation(J2DAnmVisibilityFull* animation) { mAnmVisibility = animation; }

/**
 * @note Address: 0x80058C00
 * @note Size: 0xE0
 * setAnimation__12J2DPictureExFP14J2DAnmVtxColor
 */
void J2DPictureEx::setAnimation(J2DAnmVtxColor* animation)
{
	mAnmVtxColor = animation;
	_1A4         = 0;
	if (animation != nullptr) {
		u16 v1 = animation->mAnmTableNum[0];
		for (u8 a = 0; a < 4; a++) {
			// if (_170[a / 2][a % 2] != -1) {
			if (_170[a] != 0xFFFF) {
				setAnmVtxColorHelper(animation, v1, a);
				// bool doBreak = false;
				// for (u16 b = 0; !doBreak && b < v1; b++) {
				// 	for (u16 c = 0; c < animation->_14[b]._00; c++) {
				// 		if (_170[a/2][a%2] == animation->_1C[animation->_14[b]._04 + c]) {
				// 			mAnmVtxColor = animation;
				// 			_1A4 |= 1 << a;
				// 			doBreak = true;
				// 			break;
				// 		}
				// 	}
				// }
			}
		}
	}
	if (_1A4 == 0) {
		mAnmVtxColor = nullptr;
	}
	/*
	stw      r4, 0x1a0(r3)
	li       r0, 0
	cmplwi   r4, 0
	stb      r0, 0x1a4(r3)
	beq      lbl_80058CC8
	lhz      r7, 0x10(r4)
	li       r9, 0
	b        lbl_80058CBC

lbl_80058C20:
	rlwinm   r5, r9, 1, 0x17, 0x1e
	addi     r8, r5, 0x170
	lhzx     r0, r3, r8
	cmplwi   r0, 0xffff
	beq      lbl_80058CB8
	li       r10, 0
	b        lbl_80058CAC

lbl_80058C3C:
	lwz      r6, 0x14(r4)
	rlwinm   r0, r10, 3, 0xd, 0x1c
	lwz      r5, 0x1c(r4)
	li       r12, 0
	add      r6, r6, r0
	lwz      r0, 4(r6)
	lhz      r6, 0(r6)
	slwi     r0, r0, 1
	add      r11, r5, r0
	b        lbl_80058C9C

lbl_80058C64:
	rlwinm   r0, r12, 1, 0xf, 0x1e
	lhzx     r5, r3, r8
	lhzx     r0, r11, r0
	cmplw    r5, r0
	bne      lbl_80058C98
	stw      r4, 0x1a0(r3)
	clrlwi   r0, r9, 0x18
	li       r5, 1
	lbz      r6, 0x1a4(r3)
	slw      r0, r5, r0
	or       r0, r6, r0
	stb      r0, 0x1a4(r3)
	b        lbl_80058CB8

lbl_80058C98:
	addi     r12, r12, 1

lbl_80058C9C:
	clrlwi   r0, r12, 0x10
	cmplw    r0, r6
	blt      lbl_80058C64
	addi     r10, r10, 1

lbl_80058CAC:
	clrlwi   r0, r10, 0x10
	cmplw    r0, r7
	blt      lbl_80058C3C

lbl_80058CB8:
	addi     r9, r9, 1

lbl_80058CBC:
	clrlwi   r0, r9, 0x18
	cmplwi   r0, 4
	blt      lbl_80058C20

lbl_80058CC8:
	lbz      r0, 0x1a4(r3)
	cmplwi   r0, 0
	bnelr
	li       r0, 0
	stw      r0, 0x1a0(r3)
	blr
	*/
}

/**
 * @note Address: 0x80058CE0
 * @note Size: 0x164
 */
const J2DAnmTransform* J2DPictureEx::animationPane(const J2DAnmTransform* animation)
{
	if (mAnmVisibility && mMaterialNum != 0xFFFF) {
		u8 vis;
		mAnmVisibility->getVisibility(mMaterialNum, &vis);
		if (vis) {
			show();
		} else {
			hide();
		}
	}

	if (mAnmVtxColor) {
		u16 num0 = mAnmVtxColor->getAnmTableNum(0);
		for (u8 i = 0; i < 4; i++) {
			if (_1A4 & (1 << i)) {
				// inline?
				for (u16 j = 0; j < num0; j++) {
					u32 idx       = (u32)mAnmVtxColor->mVtxColorIndexData[j]->mData;
					u16 count     = (u32)mAnmVtxColor->mVtxColorIndexData[j]->mNum;
					u16* colorPtr = mAnmVtxColor->mVtxColorIndexPtr[idx];
					for (u16 k = 0; k < count; k++) {
						if (_170[i] == colorPtr[k]) {
							mAnmVtxColor->getColor(0, j, &mCornerColors[i]);
							goto next_color;
						}
					}
				}
			}
		next_color:;
		}
	}

	J2DPane::animationPane(animation);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x19c(r3)
	cmplwi   r3, 0
	beq      lbl_80058D44
	lhz      r4, 0x16c(r28)
	cmplwi   r4, 0xffff
	beq      lbl_80058D44
	addi     r5, r1, 8
	bl       getVisibility__20J2DAnmVisibilityFullCFUsPUc
	lbz      r0, 8(r1)
	cmplwi   r0, 0
	beq      lbl_80058D3C
	li       r0, 1
	stb      r0, 0xb0(r28)
	b        lbl_80058D44

lbl_80058D3C:
	li       r0, 0
	stb      r0, 0xb0(r28)

lbl_80058D44:
	lwz      r3, 0x1a0(r28)
	cmplwi   r3, 0
	beq      lbl_80058E18
	lhz      r31, 0x10(r3)
	li       r30, 0
	b        lbl_80058E0C

lbl_80058D5C:
	clrlwi   r7, r30, 0x18
	li       r0, 1
	lbz      r3, 0x1a4(r28)
	slw      r0, r0, r7
	and.     r0, r3, r0
	beq      lbl_80058E08
	rlwinm   r3, r30, 1, 0x17, 0x1e
	li       r5, 0
	addi     r8, r3, 0x170
	b        lbl_80058DFC

lbl_80058D84:
	lwz      r3, 0x1a0(r28)
	rlwinm   r0, r5, 3, 0xd, 0x1c
	li       r10, 0
	lwz      r6, 0x14(r3)
	lwz      r4, 0x1c(r3)
	add      r6, r6, r0
	lwz      r0, 4(r6)
	lhz      r6, 0(r6)
	slwi     r0, r0, 1
	add      r9, r4, r0
	b        lbl_80058DEC

lbl_80058DB0:
	rlwinm   r0, r10, 1, 0xf, 0x1e
	lhzx     r4, r28, r8
	lhzx     r0, r9, r0
	cmplw    r4, r0
	bne      lbl_80058DE8
	lwz      r12, 0(r3)
	slwi     r4, r7, 2
	addi     r6, r4, 0x150
	lwz      r12, 0x10(r12)
	li       r4, 0
	add      r6, r28, r6
	mtctr    r12
	bctrl
	b        lbl_80058E08

lbl_80058DE8:
	addi     r10, r10, 1

lbl_80058DEC:
	clrlwi   r0, r10, 0x10
	cmplw    r0, r6
	blt      lbl_80058DB0
	addi     r5, r5, 1

lbl_80058DFC:
	clrlwi   r0, r5, 0x10
	cmplw    r0, r31
	blt      lbl_80058D84

lbl_80058E08:
	addi     r30, r30, 1

lbl_80058E0C:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 4
	blt      lbl_80058D5C

lbl_80058E18:
	mr       r3, r28
	mr       r4, r29
	bl       animationPane__7J2DPaneFPC15J2DAnmTransform
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80058E44
 * @note Size: 0x104
 */
u8 J2DPictureEx::getUsableTlut(u8 id)
{
	u8 usedTexFlags = 0;
	u32 texNum      = mMaterial->getTexGenBlock()->getTexGenNum();
	for (u8 i = 0; i < texNum; i++) {
		JUTTexture* texture = mMaterial->getTevBlock()->getTexture(i);
		if (i != id && texture != nullptr) {
			const ResTIMG* img = texture->getTexInfo();

			if (img != nullptr && img->mPaletteFormat != 0) {
				int name   = texture->getTlutName();
				int tlutID = name >= GX_MAX_TLUT ? GX_MAX_TLUT : GX_TLUT0;

				u8 diffID = name - tlutID;
				if (diffID < 8) {
					usedTexFlags |= (1 << diffID);
				}
			}
		}
	}

	for (u8 i = 0; i < 8; i++) {
		if (!(usedTexFlags & (1 << i))) {
			return i;
		}
	}

	return 0;
}
