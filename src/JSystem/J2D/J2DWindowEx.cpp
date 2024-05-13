#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DColorBlock.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DWindow.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "JSystem/JUtility/TColor.h"
#include "types.h"

/**
 * @note Address: 0x80044E34
 * @note Size: 0x2E8
 */
J2DWindowEx::J2DWindowEx(J2DPane* parent, JSURandomInputStream* input, u32 flags, J2DMaterial* materials)
{
	mAnmVisibility = nullptr;
	mAnmVtxColor   = nullptr;
	int position   = input->getPosition();
	int uStack_88[2];
	input->read(uStack_88, 8);
	mBloBlockType = uStack_88[0];
	int iVar2     = input->getPosition();
	int auStack_90[2];
	input->peek(auStack_90, 8);
	makePaneExStream(parent, input);
	input->seek(iVar2 + auStack_90[1], SEEK_SET);
	J2DWindowData windowData;
	input->read(&windowData, sizeof(J2DWindowData));

	JUtility::TColor* colors[4] = { nullptr };
	colors[0]                   = &mContentsColorA;
	colors[1]                   = &mContentsColorB;
	colors[2]                   = &mContentsColorC;
	colors[3]                   = &mContentsColorD;

	for (int i = 0; i < 4; i++) {
		_15C[i]            = windowData.mContentIds[i];
		mFrameMaterials[i] = nullptr;
		if (_15C[i] != 0xffff) {
			mFrameMaterials[i]           = materials + _15C[i];
			(materials + _15C[i])->mPane = this;
		}
		_168[i]      = windowData._28[i];
		*(colors[i]) = JUtility::TColor(windowData.mContentColors[i]);
	}

	mWrapFlags = windowData._18;
	mWindowArea.set(windowData.mMinX, windowData.mMinY, windowData.mMinX + windowData.mOffsetX, windowData.mMinY + windowData.mOffsetY);
	_166              = windowData._22;
	mMaterialID       = windowData.mParentId;
	mContentsMaterial = nullptr;

	if (mMaterialID != 0xffff) {
		mContentsMaterial            = &materials[mMaterialID];
		materials[mMaterialID].mPane = this;
	}

	input->seek(position + uStack_88[1], SEEK_SET);
	rewriteAlpha();
	mFrameTextureA   = nullptr;
	mFrameTextureB   = nullptr;
	mFrameTextureC   = nullptr;
	mFrameTextureD   = nullptr;
	mPalette         = nullptr;
	mContentsTexture = nullptr;
	mMaterialFlags   = 0;
	setMinSize();
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stmw      r26, 0x98(r1)
	  mr        r28, r3
	  mr        r26, r4
	  mr        r29, r5
	  mr        r30, r7
	  bl        -0x2910
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r4, r3, 0xB20
	  mr        r3, r29
	  stw       r4, 0x0(r28)
	  stw       r0, 0x174(r28)
	  stw       r0, 0x178(r28)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r29
	  addi      r4, r1, 0x14
	  li        r5, 0x8
	  bl        -0x1EAC0
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
	  bl        -0x1E878
	  mr        r3, r28
	  mr        r4, r26
	  mr        r5, r29
	  bl        -0xBDD8
	  lwz       r0, 0x10(r1)
	  mr        r3, r29
	  li        r5, 0
	  add       r4, r27, r0
	  bl        -0x1E7E0
	  mr        r3, r29
	  addi      r4, r1, 0x2C
	  li        r5, 0x40
	  bl        -0x1EB24
	  lis       r3, 0x8048
	  addi      r7, r1, 0x2C
	  subi      r4, r3, 0x7B20
	  addi      r11, r28, 0x128
	  lwz       r0, 0x0(r4)
	  li        r3, 0
	  lwz       r5, 0x4(r4)
	  addi      r10, r28, 0x12C
	  stw       r0, 0x1C(r1)
	  addi      r9, r28, 0x130
	  lwz       r27, 0x8(r4)
	  addi      r8, r28, 0x134
	  lwz       r12, 0xC(r4)
	  li        r0, 0x4
	  stw       r5, 0x20(r1)
	  mr        r4, r3
	  mr        r5, r7
	  addi      r6, r1, 0x1C
	  stw       r27, 0x24(r1)
	  stw       r12, 0x28(r1)
	  stw       r11, 0x1C(r1)
	  stw       r10, 0x20(r1)
	  stw       r9, 0x24(r1)
	  stw       r8, 0x28(r1)
	  mtctr     r0

	.loc_0x12C:
	  lhz       r10, 0x10(r7)
	  addi      r9, r3, 0x158
	  addi      r8, r4, 0x148
	  li        r0, 0
	  sthx      r10, r28, r9
	  stwx      r0, r28, r8
	  lhzx      r0, r28, r9
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x16C
	  mulli     r0, r0, 0x88
	  add       r0, r30, r0
	  stwx      r0, r28, r8
	  lhzx      r0, r28, r9
	  mulli     r8, r0, 0x88
	  addi      r0, r8, 0x4
	  stwx      r28, r30, r0

	.loc_0x16C:
	  lhz       r8, 0x28(r7)
	  addi      r0, r3, 0x168
	  lwz       r9, 0x0(r6)
	  addi      r7, r7, 0x2
	  sthx      r8, r28, r0
	  addi      r3, r3, 0x2
	  addi      r4, r4, 0x4
	  addi      r6, r6, 0x4
	  lwz       r0, 0x30(r5)
	  addi      r5, r5, 0x4
	  stw       r0, 0x8(r1)
	  lbz       r8, 0x8(r1)
	  lbz       r0, 0x9(r1)
	  stb       r8, 0x0(r9)
	  lbz       r8, 0xA(r1)
	  stb       r0, 0x1(r9)
	  lbz       r0, 0xB(r1)
	  stb       r8, 0x2(r9)
	  stb       r0, 0x3(r9)
	  bdnz+     .loc_0x12C
	  lbz       r3, 0x44(r1)
	  lis       r4, 0x4330
	  stw       r4, 0x80(r1)
	  li        r0, 0
	  lfd       f2, -0x7AB8(r2)
	  stb       r3, 0x144(r28)
	  lfd       f3, -0x7AC0(r2)
	  lhz       r7, 0x46(r1)
	  lhz       r6, 0x48(r1)
	  stw       r7, 0x84(r1)
	  lhz       r3, 0x4A(r1)
	  lhz       r5, 0x4C(r1)
	  add       r3, r7, r3
	  lfd       f0, 0x80(r1)
	  xoris     r3, r3, 0x8000
	  add       r5, r6, r5
	  fsubs     f1, f0, f2
	  xoris     r5, r5, 0x8000
	  stw       r6, 0x8C(r1)
	  stw       r4, 0x88(r1)
	  lfd       f0, 0x88(r1)
	  stw       r3, 0x7C(r1)
	  fsubs     f0, f0, f2
	  stw       r4, 0x78(r1)
	  lfd       f2, 0x78(r1)
	  stfs      f1, 0x114(r28)
	  fsubs     f1, f2, f3
	  stfs      f0, 0x118(r28)
	  stw       r5, 0x74(r1)
	  stw       r4, 0x70(r1)
	  lfd       f0, 0x70(r1)
	  stfs      f1, 0x11C(r28)
	  fsubs     f0, f0, f3
	  stfs      f0, 0x120(r28)
	  lhz       r3, 0x4E(r1)
	  sth       r3, 0x166(r28)
	  lhz       r3, 0x50(r1)
	  sth       r3, 0x164(r28)
	  stw       r0, 0x160(r28)
	  lhz       r0, 0x164(r28)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x280
	  mulli     r0, r0, 0x88
	  add       r0, r30, r0
	  stw       r0, 0x160(r28)
	  lhz       r0, 0x164(r28)
	  mulli     r0, r0, 0x88
	  add       r3, r30, r0
	  stw       r28, 0x4(r3)

	.loc_0x280:
	  lwz       r0, 0x18(r1)
	  mr        r3, r29
	  li        r5, 0
	  add       r4, r31, r0
	  bl        -0x1E9BC
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r3, r28
	  stw       r0, 0x100(r28)
	  stw       r0, 0x104(r28)
	  stw       r0, 0x108(r28)
	  stw       r0, 0x10C(r28)
	  stw       r0, 0x124(r28)
	  stw       r0, 0x110(r28)
	  stb       r0, 0x170(r28)
	  bl        0x3C
	  mr        r3, r28
	  lmw       r26, 0x98(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x600
 */
void J2DWindowEx::initialize(u32, const ResTIMG**, const JGeometry::TBox2f* box)
{
	// this is just here to spawn weak functions.
	mFrameMaterials[0]->getTevBlock()->setTevStageNum(0);
	mFrameMaterials[0]->getTevBlock()->setTevKColorSel(0, 0);
	mFrameMaterials[0]->getTevBlock()->setTevKAlphaSel(0, 0);
	mFrameMaterials[0]->getTevBlock()->insertTexture(0, (const ResTIMG*)nullptr);
	J2DTevOrder order;
	mFrameMaterials[0]->getTevBlock()->setTevOrder(0, order);
	mFrameMaterials[0]->getTevBlock()->getTevStage(0);
	mWindowArea.i.x = 0.0f; // something has to use 0.0f around here
}

/**
 * @note Address: 0x8004513C
 * @note Size: 0x1C4
 */
void J2DWindowEx::setMinSize()
{
	mMinWidth  = 1;
	mMinHeight = 1;
	if (mFrameMaterials[0] && mFrameMaterials[1] && mFrameMaterials[2] && mFrameMaterials[3] && mFrameMaterials[0]->mTevBlock
	    && mFrameMaterials[1]->mTevBlock && mFrameMaterials[2]->mTevBlock && mFrameMaterials[3]->mTevBlock
	    && mFrameMaterials[0]->mTevBlock->getTexture(0) && mFrameMaterials[1]->mTevBlock->getTexture(0)
	    && mFrameMaterials[2]->mTevBlock->getTexture(0) && mFrameMaterials[3]->mTevBlock->getTexture(0)) {
		mMinWidth  = mFrameMaterials[0]->mTevBlock->getTexture(0)->getSizeX() + mFrameMaterials[1]->mTevBlock->getTexture(0)->getSizeX();
		mMinHeight = mFrameMaterials[0]->mTevBlock->getTexture(0)->getSizeY() + mFrameMaterials[2]->mTevBlock->getTexture(0)->getSizeY();
	}
}

/**
 * @note Address: 0x80045300
 * @note Size: 0xF8
 */
J2DWindowEx::~J2DWindowEx()
{
	for (u8 i = 0; i < 4; i++) {
		if (mMaterialFlags & (1 << i)) {
			delete mFrameMaterials[i];
		}
	}

	if (mMaterialFlags & 0x10) {
		delete mContentsMaterial;
	}
}

/**
 * @note Address: 0x800453F8
 * @note Size: 0xA0
 */
void J2DWindowEx::drawSelf(f32 x, f32 y, Mtx* texMtx)
{
	JGeometry::TBox2f box = mBounds;
	box.addPos(x, y);
	Mtx v1;
	PSMTXConcat(*texMtx, mGlobalMtx, v1);
	GXLoadPosMtxImm(v1, 0);
	draw_private(box, mWindowArea);
	clip(mWindowArea);
}

/**
 * @note Address: 0x80045498
 * @note Size: 0x6F0
 */
void J2DWindowEx::draw_private(const JGeometry::TBox2<f32>& p1, const JGeometry::TBox2<f32>& p2)
{
	if (p1.getWidth() >= mMinWidth && p1.getHeight() >= mMinHeight) {
		JUTTexture* textures[4];
		bool anyFrameMaterialNull = false;
		for (int i = 0; i < 4; i++) {
			if (mFrameMaterials[i] == nullptr) {
				return;
			}
			J2DTevBlock* block = mFrameMaterials[i]->getTevBlock();
			if (block == nullptr) {
				return;
			}

			textures[i] = block->getTexture(0);
			if (textures[i] == nullptr) {
				anyFrameMaterialNull = true;
			}
		}

		JGeometry::TBox2<f32> aTStack_b8(p2);
		aTStack_b8.addPos(p1.i);
		drawContents(aTStack_b8);
		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);

		if (!anyFrameMaterialNull) {
			f32 dVar16 = p1.i.x;
			f32 dVar15 = p1.i.y;
			f32 dVar18 = p1.f.x - textures[3]->getSizeX();
			f32 dVar17 = p1.f.y - textures[3]->getSizeY();
			f32 dVar14 = dVar16 + textures[0]->getSizeX();
			f32 dVar12 = dVar15 + textures[0]->getSizeY();
			u16 local_c4;
			if (mWrapFlags & 0x80) {
				local_c4 = 0;
			} else {
				local_c4 = 0x8000;
			}
			u16 local_c6;
			if (mWrapFlags & 0x40) {
				local_c6 = 0;
			} else {
				local_c6 = 0x8000;
			}

			drawFrameTexture(dVar16, dVar15, textures[0]->getSizeX(), textures[0]->getSizeY(), local_c4, local_c6, 0x8000 - local_c4,
			                 0x8000 - local_c6, mFrameMaterials[0], true);
			bool r9 = mFrameMaterials[1] != mFrameMaterials[0];
			u16 local_c8;
			if (mWrapFlags & 0x20) {
				local_c8 = 0;
			} else {
				local_c8 = 0x8000;
			}
			u16 local_ca;
			if (mWrapFlags & 0x10) {
				local_ca = 0;
			} else {
				local_ca = 0x8000;
			}
			drawFrameTexture(dVar18, dVar15, textures[3]->getSizeX(), textures[0]->getSizeY(), local_c8, local_ca, 0x8000 - local_c8,
			                 0x8000 - local_ca, mFrameMaterials[1], r9);

			u16 local_cc;
			if (mWrapFlags & 0x20) {
				local_cc = 0x8000;
			} else {
				local_cc = 0;
			}

			u16 local_ce;
			if (mWrapFlags & 0x10) {
				local_ce = 0;
			} else {
				local_ce = 0x8000;
			}
			drawFrameTexture(dVar14, dVar15, dVar18 - dVar14, textures[0]->getSizeY(), local_cc, local_ce, local_cc, local_ce ^ 0x8000,
			                 mFrameMaterials[1], false);

			r9 = mFrameMaterials[3] != mFrameMaterials[1];
			u16 local_d0;
			if (mWrapFlags & 2) {
				local_d0 = 0;
			} else {
				local_d0 = 0x8000;
			}
			u16 local_d2;
			if (mWrapFlags & 1) {
				local_d2 = 0;
			} else {
				local_d2 = 0x8000;
			}

			drawFrameTexture(dVar18, dVar17, textures[3]->getSizeX(), textures[3]->getSizeY(), local_d0, local_d2, 0x8000 - local_d0,
			                 0x8000 - local_d2, mFrameMaterials[3], r9);

			u16 local_d4;
			if (mWrapFlags & 2) {
				local_d4 = 0x8000;
			} else {
				local_d4 = 0;
			}

			u16 local_d6;
			if (mWrapFlags & 1) {
				local_d6 = 0;
			} else {
				local_d6 = 0x8000;
			}
			drawFrameTexture(dVar14, dVar17, dVar18 - dVar14, textures[3]->getSizeY(), local_d4, local_d6, local_d4, local_d6 ^ 0x8000,
			                 mFrameMaterials[3], false);

			u16 local_d8;
			if (mWrapFlags & 2) {
				local_d8 = 0;
			} else {
				local_d8 = 0x8000;
			}

			u16 local_da;
			if (mWrapFlags & 1) {
				local_da = 0x8000;
			} else {
				local_da = 0;
			}
			drawFrameTexture(dVar18, dVar12, textures[3]->getSizeX(), dVar17 - dVar12, local_d8, local_da, local_d8 ^ 0x8000, local_da,
			                 mFrameMaterials[3], false);

			r9 = mFrameMaterials[2] != mFrameMaterials[3];
			u16 local_dc;
			if (mWrapFlags & 8) {
				local_dc = 0;
			} else {
				local_dc = 0x8000;
			}

			u16 local_de;
			if (mWrapFlags & 4) {
				local_de = 0;
			} else {
				local_de = 0x8000;
			}
			drawFrameTexture(dVar16, dVar17, textures[0]->getSizeX(), textures[3]->getSizeY(), local_dc, local_de, 0x8000 - local_dc,
			                 0x8000 - local_de, mFrameMaterials[2], r9);

			u16 local_e0;
			if (mWrapFlags & 8) {
				local_e0 = 0;
			} else {
				local_e0 = 0x8000;
			}

			u16 local_e2;
			if (mWrapFlags & 4) {
				local_e2 = 0x8000;
			} else {
				local_e2 = 0;
			}
			drawFrameTexture(dVar16, dVar12, textures[0]->getSizeX(), dVar17 - dVar12, local_e0, local_e2, local_e0 ^ 0x8000, local_e2,
			                 mFrameMaterials[2], false);
		}

		GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		GXSetNumTexGens(0);
		GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
	}
}

/**
 * @note Address: 0x80045B88
 * @note Size: 0x42C
 */
void J2DWindowEx::drawContents(const JGeometry::TBox2<f32>& p1)
{
	if (!p1.isValid() || mContentsMaterial == NULL) {
		return;
	}
	if (!mContentsMaterial->isVisible()) {
		return;
	}
	mContentsMaterial->setGX();
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	JUtility::TColor TStack_b4(mContentsColorA);
	JUtility::TColor TStack_bc(mContentsColorC);
	JUtility::TColor TStack_b8(mContentsColorB);
	JUtility::TColor TStack_c0(mContentsColorD);
	if (mContentsMaterial->getColorBlock()->getColorChan(1)->getMatSrc() == 1) {
		if (mContentsMaterial->getMaterialAlphaCalc() == 1) {
			TStack_b4.a = (TStack_b4.a * mColorAlpha) / 0xff;
			TStack_bc.a = (TStack_bc.a * mColorAlpha) / 0xff;
			TStack_b8.a = (TStack_b8.a * mColorAlpha) / 0xff;
			TStack_c0.a = (TStack_c0.a * mColorAlpha) / 0xff;
		}
	} else if (mIsInfluencedAlpha) {
		GXSetChanMatColor(GX_ALPHA0, JUtility::TColor(mColorAlpha));
	}
	bool bVar5 = false;
	f32 in_f31;
	f32 in_f30;
	f32 in_f29;
	f32 in_f28;
	if (mContentsMaterial->getTevBlock() != NULL) {
		if (mContentsMaterial->getTevBlock()->getTexture(0)) {
			bVar5 = true;
			GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
			f32 dVar15 = mContentsMaterial->getTevBlock()->getTexture(0)->getSizeX();
			f32 dVar14 = mContentsMaterial->getTevBlock()->getTexture(0)->getSizeY();

			f32 dVar12 = p1.getWidth();
			f32 dVar13 = p1.getHeight();
			in_f31     = -(dVar12 / dVar15 - 1.0f) / 2;
			in_f30     = -((dVar13 / dVar14) - 1.0f) / 2;
			in_f29     = in_f31 + (dVar12 / dVar15);
			in_f28     = in_f30 + (dVar13 / dVar14);
		}
	}
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	GXPosition3f32(p1.i.x, p1.i.y, zero);
	GXColor1u32(TStack_b4);
	if (bVar5) {
		GXTexCoord2f32(in_f31, in_f30);
	}
	GXPosition3f32(p1.f.x, p1.i.y, zero);
	GXColor1u32(TStack_b8);
	if (bVar5) {
		GXTexCoord2f32(in_f29, in_f30);
	}
	GXPosition3f32(p1.f.x, p1.f.y, zero);
	GXColor1u32(TStack_c0);
	if (bVar5) {
		GXTexCoord2f32(in_f29, in_f28);
	}
	GXPosition3f32(p1.i.x, p1.f.y, zero);
	GXColor1u32(TStack_bc);
	if (bVar5) {
		GXTexCoord2f32(in_f31, in_f28);
	}
	GXEnd();
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBX8, 0xf);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
}

/**
 * @note Address: 0x80045FB4
 * @note Size: 0x264
 */
void J2DWindowEx::drawFrameTexture(f32 x, f32 y, f32 width, f32 height, u16 p5, u16 p6, u16 p7, u16 p8, J2DMaterial* material, bool p10)
{
	if (material != nullptr && material->isVisible()) {
		f32 dVar15 = x + width;
		f32 dVar14 = y + height;
		if (p10) {
			material->setGX();
		}
		JUtility::TColor aTStack_84(0xffffffff);
		J2DPane* parentPane = getParentPane();
		if (material->getColorBlock()->getColorChan(1)->getMatSrc() == 1) {
			if (material->getMaterialAlphaCalc() == 1) {
				u8 uVar11 = 0xff;
				if (material->getColorBlock()->getMatColor(0) != 0) {
					uVar11 = material->getColorBlock()->getMatColor(0)->a;
				}
				if (parentPane != nullptr && mIsInfluencedAlpha != 0) {
					uVar11 = ((uVar11 * parentPane->mColorAlpha) / 0xff);
				}
				aTStack_84 = JUtility::TColor((u32)uVar11 | 0xffffff00);
			}
		} else if (parentPane != nullptr && mIsInfluencedAlpha != 0 && p10) {
			int matColorAlpha = material->getColorBlock()->getMatColor(0)->a;
			int colorAlpha    = parentPane->mColorAlpha;
			GXSetChanMatColor(GX_ALPHA0, JUtility::TColor((matColorAlpha * colorAlpha / 0xff) & 0xff));
		}
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_F32, 0);
		GXBegin(GX_QUADS, GX_VTXFMT0, 4);

		f32 zero = 0.0f;
		GXPosition3f32(x, y, zero);
		GXColor1u32(aTStack_84);
		GXTexCoord2u16(p7, p8);

		GXPosition3f32(dVar15, y, zero);
		GXColor1u32(aTStack_84);
		GXTexCoord2u16(p5, p8);

		GXPosition3f32(dVar15, dVar14, zero);
		GXColor1u32(aTStack_84);
		GXTexCoord2u16(p5, p6);

		GXPosition3f32(x, dVar14, zero);
		GXColor1u32(aTStack_84);
		GXTexCoord2u16(p7, p6);
		GXEnd();
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
	}
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
	  stmw      r25, 0x24(r1)
	  mr.       r31, r8
	  fmr       f28, f1
	  fmr       f29, f2
	  mr        r25, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  mr        r26, r9
	  beq-      .loc_0x230
	  lbz       r0, 0xE(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x230
	  rlwinm.   r0,r26,0,24,31
	  fadds     f31, f28, f3
	  fadds     f30, f29, f4
	  beq-      .loc_0x7C
	  mr        r3, r31
	  bl        0xC21C

	.loc_0x7C:
	  li        r0, -0x1
	  mr        r3, r25
	  stw       r0, 0x14(r1)
	  bl        -0xCF5C
	  lhz       r0, 0x1C(r31)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x128
	  lbz       r0, 0xF(r31)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x184
	  addic.    r0, r31, 0x10
	  li        r4, 0xFF
	  beq-      .loc_0xB8
	  lbz       r4, 0x13(r31)

	.loc_0xB8:
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  lbz       r0, 0xB4(r25)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lbz       r0, 0xB3(r3)
	  rlwinm    r4,r4,0,24,31
	  lis       r3, 0x8081
	  mullw     r0, r4, r0
	  subi      r3, r3, 0x7F7F
	  mulhw     r3, r3, r0
	  add       r0, r3, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  rlwinm    r4,r0,0,24,31

	.loc_0xF8:
	  li        r0, -0x100
	  rlwimi    r0,r4,0,24,31
	  stw       r0, 0x10(r1)
	  lbz       r5, 0x10(r1)
	  lbz       r4, 0x11(r1)
	  lbz       r3, 0x12(r1)
	  lbz       r0, 0x13(r1)
	  stb       r5, 0x14(r1)
	  stb       r4, 0x15(r1)
	  stb       r3, 0x16(r1)
	  stb       r0, 0x17(r1)
	  b         .loc_0x184

	.loc_0x128:
	  cmplwi    r3, 0
	  beq-      .loc_0x184
	  lbz       r0, 0xB4(r25)
	  cmplwi    r0, 0
	  beq-      .loc_0x184
	  rlwinm.   r0,r26,0,24,31
	  beq-      .loc_0x184
	  lbz       r0, 0xB3(r3)
	  lis       r3, 0x8081
	  lbz       r6, 0x13(r31)
	  subi      r5, r3, 0x7F7F
	  addi      r4, r1, 0xC
	  li        r3, 0x2
	  mullw     r0, r6, r0
	  mulhw     r5, r5, r0
	  add       r0, r5, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r5,r0,1,31,31
	  add       r0, r0, r5
	  rlwinm    r0,r0,0,24,31
	  stw       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        0xA0C40

	.loc_0x184:
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x9E5BC
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0x9F82C
	  lis       r8, 0xCC01
	  lfs       f0, -0x7AB0(r2)
	  stfs      f28, -0x8000(r8)
	  li        r3, 0
	  lwz       r0, 0x14(r1)
	  li        r4, 0x9
	  stfs      f29, -0x8000(r8)
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r29, -0x8000(r8)
	  sth       r30, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f29, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r27, -0x8000(r8)
	  sth       r30, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r27, -0x8000(r8)
	  sth       r28, -0x8000(r8)
	  stfs      f28, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r29, -0x8000(r8)
	  sth       r28, -0x8000(r8)
	  bl        0x9E528

	.loc_0x230:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/**
 * @note Address: 0x80046218
 * @note Size: 0x194
 */
void J2DWindowEx::draw(const JGeometry::TBox2f& p1)
{
	bool isMissingTexture = false;
	JUTTexture* local_68[4];
	for (int i = 0; i < 4; i++) {
		if (mFrameMaterials[i] == nullptr) {
			return;
		}
		if (mFrameMaterials[i]->getTevBlock() == nullptr) {
			return;
		}
		local_68[i] = mFrameMaterials[i]->getTevBlock()->getTexture(0);
		if (local_68[i] == nullptr) {
			isMissingTexture = true;
		}
	}
	JGeometry::TBox2<f32> aTStack_78;
	if (!isMissingTexture) {
		aTStack_78.set(local_68[0]->getSizeX(), local_68[0]->getSizeY(), p1.getWidth() - local_68[1]->getSizeX(),
		               p1.getHeight() - local_68[2]->getSizeY());
	} else {
		aTStack_78.set(0.0f, 0.0f, p1.getWidth(), p1.getHeight());
	}
	draw(p1, aTStack_78);
}

/**
 * @note Address: 0x800463AC
 * @note Size: 0x128
 * draw__11J2DWindowExFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f>
 */
void J2DWindowEx::draw(const JGeometry::TBox2<f32>& p1, const JGeometry::TBox2<f32>& p2)
{
	rewriteAlpha();
	mColorAlpha = mAlpha;
	makeMatrix(p1.i.x, p1.i.y, 0.0f, 0.0f);
	GXLoadPosMtxImm(mPositionMtx, 0);
	GXSetCurrentMtx(0);
	draw_private(JGeometry::TBox2f(0.0f, 0.0f, p1.getWidth(), p1.getHeight()), p2);
	for (int i = 0; i < 4; i++) {
		GXSetTevSwapModeTable((GXTevSwapSel)i, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
	}
	GXSetNumIndStages(0);
	for (int i = 0; i < 0x10; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}
	Mtx v1;
	PSMTXIdentity(v1);
	GXLoadPosMtxImm(v1, 0);
}

void J2DWindowEx::setTevOrder(bool p1)
{
	u16 local_28[2];
	if (!p1) {
		local_28[0] = 4;
		local_28[1] = 0xffff;
	} else {
		local_28[0] = 0xff;
		local_28[1] = 0xff04;
	}
	for (u8 i = 0; i < 2; i++) {
		s32 uVar1 = local_28[i];
		J2DTevOrderInfo info;
		info.mTexCoord = uVar1 >> 8;
		info.mTexMap   = uVar1 >> 8;
		info.mColor    = uVar1;
		J2DTevOrder local_30(info);
		for (int j = 0; j < 4; j++) {
			if (mFrameMaterials[j]->getTevBlock()->getMaxStage() > i) {
				mFrameMaterials[j]->getTevBlock()->setTevOrder(i, local_30);
			}
		}
	}
}

/**
 * @note Address: 0x800464D4
 * @note Size: 0x124
 */
void J2DWindowEx::setTevStage(bool p1)
{
	for (int i = 0; i < 4; i++) {
		J2DTevStage* pJVar3 = mFrameMaterials[i]->getTevBlock()->getTevStage(0);
		JUTTexture* this_00 = mFrameMaterials[i]->getTevBlock()->getTexture(0);
		bool bVar1          = false;
		if (this_00 != NULL && ((s32)this_00->getFormat() == 0 || (s32)this_00->getFormat() == 1) && this_00->getTransparency() == 0) {
			bVar1 = true;
		}
		if (!p1) {
			setStage(pJVar3, bVar1 ? STAGE_Unk1 : STAGE_Unk0);
		} else {
			stage_enum sVar5;
			if (bVar1) {
				sVar5 = STAGE_Unk4;
			} else {
				sVar5 = STAGE_Unk3;
			}
			setStage(pJVar3, sVar5);
			setStage(mFrameMaterials[i]->getTevBlock()->getTevStage(1), STAGE_Unk2);
		}
	}
}

/**
 * @note Address: 0x800465F8
 * @note Size: 0x2BC
 */
void J2DWindowEx::setStage(J2DTevStage* stage, J2DWindowEx::stage_enum stageNum)
{
	s8 local_30[6][4] = {
		{ 0x0f, 0x08, 0x0a, 0x0f }, { 0x0f, 0x08, 0x0a, 0x0f }, { 0x0f, 0x0a, 0x00, 0x0f },
		{ 0x02, 0x04, 0x08, 0x0f }, { 0x02, 0x04, 0x08, 0x0f }, { 0x0f, 0x0f, 0x0f, 0x0a },
	};
	s8 local_48[6][4] = {
		{ 0x07, 0x04, 0x05, 0x07 }, { 0x05, 0x07, 0x07, 0x07 }, { 0x07, 0x05, 0x00, 0x07 },
		{ 0x01, 0x02, 0x04, 0x07 }, { 0x07, 0x07, 0x07, 0x02 }, { 0x07, 0x07, 0x07, 0x05 },
	};
	s8 local_68[6][5] = {
		{ 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, { 0, 1, 0, 0, 1 }, { 0, 0, 1, 0, 0 }, { 1, 0, 0, 0, 0 }, { 0, 0, 0, 0, 1 },
	};

	stage->setTevColorAB(local_30[stageNum][0], local_30[stageNum][1]);
	stage->setTevColorCD(local_30[stageNum][2], local_30[stageNum][3]);
	stage->setTevColorOp(local_68[stageNum][0], local_68[stageNum][1], local_68[stageNum][2], local_68[stageNum][3], local_68[stageNum][4]);
	stage->setAlphaABCD(local_48[stageNum][0], local_48[stageNum][1], local_48[stageNum][2], local_48[stageNum][3]);
	stage->setTevAlphaOp(local_68[stageNum][0], local_68[stageNum][1], local_68[stageNum][2], local_68[stageNum][3], local_68[stageNum][4]);
	/*
	stwu     r1, -0xa0(r1)
	lis      r3, lbl_804784E0@ha
	stmw     r14, 0x58(r1)
	addi     r17, r3, lbl_804784E0@l
	slwi     r16, r5, 2
	addi     r14, r1, 0x40
	mulli    r15, r5, 5
	addi     r8, r1, 8
	addi     r3, r1, 0xc
	addi     r5, r1, 0xb
	addi     r6, r1, 0xa
	addi     r7, r1, 9
	lwz      r18, 0x90(r17)
	lwz      r19, 0x94(r17)
	lwz      r20, 0x98(r17)
	lwz      r21, 0x9c(r17)
	lwz      r22, 0xa0(r17)
	lwz      r23, 0xa4(r17)
	stw      r18, 0x40(r1)
	lwz      r24, 0xa8(r17)
	lwz      r25, 0xac(r17)
	lwz      r26, 0xb0(r17)
	lwz      r27, 0xb4(r17)
	lwz      r28, 0xb8(r17)
	lwz      r29, 0xbc(r17)
	lwz      r30, 0xc0(r17)
	lwz      r31, 0xc4(r17)
	lwz      r12, 0xc8(r17)
	lwz      r11, 0xcc(r17)
	lwz      r10, 0xd0(r17)
	lwz      r9, 0xd4(r17)
	lwz      r0, 0xd8(r17)
	lhz      r17, 0xdc(r17)
	stw      r19, 0x44(r1)
	stw      r20, 0x48(r1)
	stw      r21, 0x4c(r1)
	stw      r22, 0x50(r1)
	stw      r23, 0x54(r1)
	lbzx     r20, r14, r16
	addi     r14, r1, 0x42
	lbzx     r18, r14, r16
	addi     r14, r1, 0x41
	lbzx     r19, r14, r16
	slwi     r20, r20, 4
	addi     r14, r1, 0x43
	slwi     r18, r18, 4
	lbzx     r14, r14, r16
	or       r19, r20, r19
	stb      r19, 2(r4)
	or       r14, r18, r14
	stb      r14, 3(r4)
	lbz      r14, 1(r4)
	stw      r30, 8(r1)
	rlwinm   r14, r14, 0, 0x1e, 0x1c
	stw      r31, 0xc(r1)
	stw      r12, 0x10(r1)
	stw      r11, 0x14(r1)
	stw      r10, 0x18(r1)
	stw      r9, 0x1c(r1)
	stw      r0, 0x20(r1)
	sth      r17, 0x24(r1)
	lbzx     r11, r8, r15
	stw      r24, 0x28(r1)
	rlwinm   r0, r11, 2, 0x16, 0x1d
	cmplwi   r11, 1
	or       r10, r14, r0
	stw      r25, 0x2c(r1)
	lbzx     r9, r3, r15
	stw      r26, 0x30(r1)
	lbzx     r0, r5, r15
	stw      r27, 0x34(r1)
	lbzx     r14, r6, r15
	stw      r28, 0x38(r1)
	lbzx     r12, r7, r15
	stw      r29, 0x3c(r1)
	stb      r10, 1(r4)
	bgt      lbl_80046754
	lbz      r11, 1(r4)
	rlwinm   r10, r14, 4, 0x14, 0x1b
	rlwinm   r11, r11, 0, 0x1c, 0x19
	or       r10, r11, r10
	stb      r10, 1(r4)
	lbz      r10, 1(r4)
	rlwinm   r10, r10, 0, 0, 0x1d
	or       r10, r10, r12
	stb      r10, 1(r4)
	b        lbl_80046770

lbl_80046754:
	lbz      r10, 1(r4)
	rlwimi   r10, r11, 3, 0x1a, 0x1b
	stb      r10, 1(r4)
	lbz      r10, 1(r4)
	rlwinm   r10, r10, 0, 0, 0x1d
	ori      r10, r10, 3
	stb      r10, 1(r4)

lbl_80046770:
	lbz      r10, 1(r4)
	rlwinm   r11, r9, 6, 0x12, 0x19
	lbzx     r8, r8, r15
	rlwinm   r0, r0, 3, 0x15, 0x1c
	rlwinm   r10, r10, 0, 0x1d, 0x1b
	addi     r9, r1, 0x28
	or       r10, r10, r0
	lbzx     r0, r9, r16
	stb      r10, 1(r4)
	addi     r9, r1, 0x29
	lbzx     r14, r9, r16
	addi     r10, r1, 0x2b
	lbz      r12, 1(r4)
	addi     r9, r1, 0x2a
	lbzx     r10, r10, r16
	slwi     r0, r0, 5
	rlwimi   r11, r12, 0, 0x1a, 0x1f
	lbzx     r12, r9, r16
	stb      r11, 1(r4)
	rlwinm   r14, r14, 2, 0x16, 0x1d
	rlwinm   r11, r12, 7, 0x11, 0x18
	rlwinm   r12, r12, 0x1f, 0x19, 0x1f
	lbz      r9, 6(r4)
	rlwinm   r10, r10, 4, 0x14, 0x1b
	cmplwi   r8, 1
	lbzx     r3, r3, r15
	rlwimi   r0, r9, 0, 0x1b, 0x1f
	rlwinm   r9, r8, 2, 0x16, 0x1d
	stb      r0, 6(r4)
	lbzx     r0, r5, r15
	lbz      r16, 6(r4)
	lbzx     r7, r7, r15
	rlwinm   r5, r16, 0, 0x1e, 0x1a
	lbzx     r16, r6, r15
	or       r5, r5, r14
	stb      r5, 6(r4)
	lbz      r5, 6(r4)
	rlwinm   r5, r5, 0, 0, 0x1d
	or       r5, r5, r12
	stb      r5, 6(r4)
	lbz      r5, 7(r4)
	rlwimi   r11, r5, 0, 0x19, 0x1f
	stb      r11, 7(r4)
	lbz      r5, 7(r4)
	rlwinm   r5, r5, 0, 0x1c, 0x18
	or       r5, r5, r10
	stb      r5, 7(r4)
	lbz      r5, 5(r4)
	rlwinm   r5, r5, 0, 0x1e, 0x1c
	or       r5, r5, r9
	stb      r5, 5(r4)
	bgt      lbl_80046868
	lbz      r6, 5(r4)
	rlwinm   r5, r16, 4, 0x14, 0x1b
	rlwinm   r6, r6, 0, 0, 0x1d
	or       r6, r6, r7
	stb      r6, 5(r4)
	lbz      r6, 5(r4)
	rlwinm   r6, r6, 0, 0x1c, 0x19
	or       r5, r6, r5
	stb      r5, 5(r4)
	b        lbl_80046884

lbl_80046868:
	lbz      r5, 5(r4)
	rlwimi   r5, r8, 3, 0x1a, 0x1b
	stb      r5, 5(r4)
	lbz      r5, 5(r4)
	rlwinm   r5, r5, 0, 0, 0x1d
	ori      r5, r5, 3
	stb      r5, 5(r4)

lbl_80046884:
	lbz      r5, 5(r4)
	rlwinm   r0, r0, 3, 0x15, 0x1c
	rlwinm   r3, r3, 6, 0x12, 0x19
	rlwinm   r5, r5, 0, 0x1d, 0x1b
	or       r0, r5, r0
	stb      r0, 5(r4)
	lbz      r0, 5(r4)
	rlwimi   r3, r0, 0, 0x1a, 0x1f
	stb      r3, 5(r4)
	lmw      r14, 0x58(r1)
	addi     r1, r1, 0xa0
	blr
	*/
}

/**
 * @note Address: 0x800468B4
 * @note Size: 0x88
 */
bool J2DWindowEx::setBlack(JUtility::TColor black)
{
	JUtility::TColor oldBlack, oldWhite;

	if (!getBlackWhite(&oldBlack, &oldWhite)) {
		return false;
	}

	return setBlackWhite(black, oldWhite);
}

/**
 * @note Address: 0x8004693C
 * @note Size: 0x88
 */
bool J2DWindowEx::setWhite(JUtility::TColor white)
{
	JUtility::TColor oldBlack, oldWhite;

	if (!getBlackWhite(&oldBlack, &oldWhite)) {
		return false;
	}

	return setBlackWhite(oldBlack, white);
}

/**
 * @note Address: 0x800469C4
 * @note Size: 0x2EC
 */
bool J2DWindowEx::setBlackWhite(JUtility::TColor black, JUtility::TColor white)
{
	for (int i = 0; i < 4; i++) {
		if (mFrameMaterials[i] == nullptr) {
			return false;
		}

		if (mFrameMaterials[i]->getTevBlock() == nullptr) {
			return false;
		}
	}

	if (!isSetBlackWhite(black, white)) {
		return false;
	}

	bool bVar1 = false;
	if ((u32)black != 0 || (u32)white != 0xffffffff) {
		bVar1 = true;
	}
	u8 uVar3 = bVar1 ? 2 : 1;
	for (int i = 0; i < 4; i++) {
		mFrameMaterials[i]->getTevBlock()->setTevStageNum(uVar3);
	}
	setTevOrder(bVar1);
	setTevStage(bVar1);
	if (bVar1) {
		J2DGXColorS10 color0;
		J2DGXColorS10 color1;
		color0.r = black.r;
		color0.g = black.g;
		color0.b = black.b;
		color0.a = black.a;
		color1.r = white.r;
		color1.g = white.g;
		color1.b = white.b;
		color1.a = white.a;

		for (int i = 0; i < 4; i++) {
			mFrameMaterials[i]->getTevBlock()->setTevColor(0, color0);
			mFrameMaterials[i]->getTevBlock()->setTevColor(1, color1);
		}
	}
	return true;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r22, 0x38(r1)
	mr       r29, r4
	mr       r28, r3
	mr       r30, r5
	lwz      r4, 0x148(r3)
	cmplwi   r4, 0
	bne      lbl_800469F4
	li       r3, 0
	b        lbl_80046C9C

lbl_800469F4:
	lwz      r0, 0x70(r4)
	cmplwi   r0, 0
	bne      lbl_80046A08
	li       r3, 0
	b        lbl_80046C9C

lbl_80046A08:
	lwz      r4, 0x14c(r28)
	cmplwi   r4, 0
	bne      lbl_80046A1C
	li       r3, 0
	b        lbl_80046C9C

lbl_80046A1C:
	lwz      r0, 0x70(r4)
	cmplwi   r0, 0
	bne      lbl_80046A30
	li       r3, 0
	b        lbl_80046C9C

lbl_80046A30:
	lwz      r4, 0x150(r28)
	cmplwi   r4, 0
	bne      lbl_80046A44
	li       r3, 0
	b        lbl_80046C9C

lbl_80046A44:
	lwz      r0, 0x70(r4)
	cmplwi   r0, 0
	bne      lbl_80046A58
	li       r3, 0
	b        lbl_80046C9C

lbl_80046A58:
	lwz      r4, 0x154(r28)
	cmplwi   r4, 0
	bne      lbl_80046A6C
	li       r3, 0
	b        lbl_80046C9C

lbl_80046A6C:
	lwz      r0, 0x70(r4)
	cmplwi   r0, 0
	bne      lbl_80046A80
	li       r3, 0
	b        lbl_80046C9C

lbl_80046A80:
	lwz      r6, 0(r30)
	addi     r4, r1, 0x18
	lwz      r0, 0(r29)
	addi     r5, r1, 0x14
	stw      r6, 0x14(r1)
	stw      r0, 0x18(r1)
	bl isSetBlackWhite__11J2DWindowExCFQ28JUtility6TColorQ28JUtility6TColor
	clrlwi.  r0, r3, 0x18
	bne      lbl_80046AAC
	li       r3, 0
	b        lbl_80046C9C

lbl_80046AAC:
	lwz      r0, 0(r29)
	li       r31, 0
	cmplwi   r0, 0
	bne      lbl_80046ACC
	lwz      r3, 0(r30)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_80046AD0

lbl_80046ACC:
	li       r31, 1

lbl_80046AD0:
	clrlwi   r3, r31, 0x18
	mr       r24, r28
	neg      r0, r3
	li       r23, 0
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	addi     r0, r3, 1
	clrlwi   r22, r0, 0x18

lbl_80046AF0:
	lwz      r3, 0x148(r24)
	mr       r4, r22
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	addi     r23, r23, 1
	addi     r24, r24, 4
	cmpwi    r23, 4
	blt      lbl_80046AF0
	clrlwi.  r0, r31, 0x18
	bne      lbl_80046B3C
	lis      r3, 0x0000FFFF@ha
	li       r4, 4
	addi     r0, r3, 0x0000FFFF@l
	sth      r4, 8(r1)
	sth      r0, 0xa(r1)
	b        lbl_80046B50

lbl_80046B3C:
	lis      r3, 0x0000FF04@ha
	li       r4, 0xff
	addi     r0, r3, 0x0000FF04@l
	sth      r4, 8(r1)
	sth      r0, 0xa(r1)

lbl_80046B50:
	addi     r26, r1, 8
	li       r24, 0
	b        lbl_80046BE0

lbl_80046B5C:
	rlwinm   r0, r24, 1, 0x17, 0x1e
	clrlwi   r22, r24, 0x18
	lhzx     r3, r26, r0
	mr       r23, r28
	li       r25, 0
	srawi    r0, r3, 8
	stb      r3, 0xe(r1)
	stb      r0, 0xc(r1)
	stb      r0, 0xd(r1)
	lwz      r27, 0xc(r1)

lbl_80046B84:
	lwz      r3, 0x148(r23)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplw    r0, r22
	ble      lbl_80046BCC
	stw      r27, 0x10(r1)
	mr       r4, r22
	addi     r5, r1, 0x10
	lwz      r3, 0x148(r23)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_80046BCC:
	addi     r25, r25, 1
	addi     r23, r23, 4
	cmpwi    r25, 4
	blt      lbl_80046B84
	addi     r24, r24, 1

lbl_80046BE0:
	clrlwi   r0, r24, 0x18
	cmplwi   r0, 2
	blt      lbl_80046B5C
	mr       r3, r28
	mr       r4, r31
	bl       setTevStage__11J2DWindowExFb
	clrlwi.  r0, r31, 0x18
	beq      lbl_80046C98
	lbz      r24, 0(r29)
	mr       r23, r28
	lbz      r25, 1(r29)
	li       r22, 0
	lbz      r26, 2(r29)
	lbz      r27, 3(r29)
	lbz      r28, 0(r30)
	lbz      r29, 1(r30)
	lbz      r31, 2(r30)
	lbz      r30, 3(r30)

lbl_80046C28:
	sth      r24, 0x24(r1)
	addi     r5, r1, 0x24
	li       r4, 0
	sth      r25, 0x26(r1)
	sth      r26, 0x28(r1)
	sth      r27, 0x2a(r1)
	lwz      r3, 0x148(r23)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	sth      r28, 0x1c(r1)
	addi     r5, r1, 0x1c
	li       r4, 1
	sth      r29, 0x1e(r1)
	sth      r31, 0x20(r1)
	sth      r30, 0x22(r1)
	lwz      r3, 0x148(r23)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	addi     r22, r22, 1
	addi     r23, r23, 4
	cmpwi    r22, 4
	blt      lbl_80046C28

lbl_80046C98:
	li       r3, 1

lbl_80046C9C:
	lmw      r22, 0x38(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x80046CB4
 * @note Size: 0x194
 */
bool J2DWindowEx::getBlackWhite(JUtility::TColor* outBlack, JUtility::TColor* outWhite) const
{
	if (mFrameMaterials[0] == nullptr) {
		return false;
	}

	if (mFrameMaterials[0]->getTevBlock() == nullptr) {
		return false;
	}

	bool cVar6 = mFrameMaterials[0]->getTevBlock()->getTevStageNum() != 1;
	*outBlack  = JUtility::TColor(0);
	*outWhite  = JUtility::TColor(0xffffffff);
	if (cVar6) {
		J2DGXColorS10* color0p = mFrameMaterials[0]->getTevBlock()->getTevColor(0);
		GXColorS10 color0;
		color0.r               = color0p->r;
		color0.g               = color0p->g;
		color0.b               = color0p->b;
		color0.a               = color0p->a;
		J2DGXColorS10* color1p = mFrameMaterials[0]->getTevBlock()->getTevColor(1);
		GXColorS10 color1;
		color1.r  = color1p->r;
		color1.g  = color1p->g;
		color1.b  = color1p->b;
		color1.a  = color1p->a;
		*outBlack = JUtility::TColor((((u8)color0.r) << 0x18) | (((u8)color0.g) << 0x10) | (((u8)color0.b) << 0x8) | (((u8)color0.a)));
		*outWhite = JUtility::TColor((((u8)color1.r) << 0x18) | (((u8)color1.g) << 0x10) | (((u8)color1.b) << 0x8) | (((u8)color1.a)));
	}
	return true;
}

/**
 * @note Address: 0x80046E48
 * @note Size: 0x98
 */
bool J2DWindowEx::isSetBlackWhite(JUtility::TColor black, JUtility::TColor white) const
{
	if (black == 0 && white == 0xffffffff) {
		return true;
	}
	for (int i = 0; i < 4; i++) {
		if ((u8)mFrameMaterials[i]->getTevBlock()->getMaxStage() == 1) {
			return false;
		}
	}
	return true;
}

/**
 * @note Address: 0x80046EE0
 * @note Size: 0x60
 */
JUtility::TColor J2DWindowEx::getBlack() const
{
	JUtility::TColor black, white;
	if (!getBlackWhite(&black, &white)) {
		return TCOLOR_BLACK_U32;
	}

	return black;
}

/**
 * @note Address: 0x80046F40
 * @note Size: 0x60
 */
JUtility::TColor J2DWindowEx::getWhite() const
{
	JUtility::TColor black, white;
	if (!getBlackWhite(&black, &white)) {
		return TCOLOR_WHITE_U32;
	}

	return white;
}

/**
 * @note Address: 0x80046FA0
 * @note Size: 0x84
 */
void J2DWindowEx::setAlpha(u8 alpha)
{
	mAlpha = alpha;
	J2DColorBlock* block;
	for (int i = 0; i < 4; i++) {
		if (mFrameMaterials[i] && (block = &mFrameMaterials[i]->mColorBlock)) {
			block->mColors[0].a = alpha;
		}
	}
	if (mContentsMaterial && (block = &mContentsMaterial->mColorBlock)) {
		block->mColors[0].a = alpha;
	}
}

/**
 * @note Address: 0x80047024
 * @note Size: 0x78
 */
void J2DWindowEx::setCullBack(_GXCullMode cullMode)
{
	mCullMode = cullMode;

	for (int i = 0; i < 4; i++) {
		if (mFrameMaterials[i] != nullptr) {
			mFrameMaterials[i]->mColorBlock.mCullMode = cullMode;
		}
	}
	if (mContentsMaterial != nullptr) {
		mContentsMaterial->mColorBlock.mCullMode = cullMode;
	}
	J2DPane::setCullBack(cullMode);
}

/**
 * @note Address: 0x8004709C
 * @note Size: 0x18
 */
void J2DWindowEx::rewriteAlpha()
{
	if (mContentsMaterial != nullptr) {
		mAlpha = mContentsMaterial->mColorBlock.mColors[0].a;
	}
}

/**
 * @note Address: 0x800470B4
 * @note Size: 0x68
 */
JUTTexture* J2DWindowEx::getFrameTexture(u8 frameMaterialIndex, u8 textureIndex) const
{
	J2DMaterial* material = getFrameMaterial(frameMaterialIndex);
	if (material != nullptr && material->mTevBlock != nullptr) {
		return material->mTevBlock->getTexture(textureIndex);
	}
	return nullptr;
}

/**
 * @note Address: 0x80047140
 * @note Size: 0x68
 */
JUTTexture* J2DWindowEx::getContentsTexture(u8 textureIndex) const
{
	J2DMaterial* material = getContentsMaterial();
	if (material != nullptr && material->mTevBlock != nullptr) {
		return material->mTevBlock->getTexture(textureIndex);
	}
	return nullptr;
}

/**
 * @note Address: 0x800471B0
 * @note Size: 0x118
 */
bool J2DWindowEx::isUsed(const ResTIMG* resource)
{
	for (u8 i = 0; i < 4; i++) {
		if (mFrameMaterials[i] != nullptr && mFrameMaterials[i]->mTevBlock != nullptr) {
			for (u32 j = 0; j < 8; j++) {
				JUTTexture* texture = mFrameMaterials[i]->mTevBlock->getTexture(j);
				if (texture != nullptr && texture->mTexInfo == resource) {
					return true;
				}
			}
		}
	}
	if (mContentsMaterial != nullptr && mContentsMaterial->mTevBlock != nullptr) {
		for (u32 j = 0; j < 8; j++) {
			JUTTexture* texture = mContentsMaterial->mTevBlock->getTexture(j);
			if (texture != nullptr && texture->mTexInfo == resource) {
				return true;
			}
		}
	}
	return J2DPane::isUsed(resource);
}

/**
 * @note Address: 0x800472C8
 * @note Size: 0x90
 * setAnimation__11J2DWindowExFP11J2DAnmColor
 */
void J2DWindowEx::setAnimation(J2DAnmColor* animation)
{
	for (u8 i = 0; i < 4; i++) {
		if (isNeedSetAnm(i)) {
			mFrameMaterials[i]->setAnimation(animation);
		}
	}
	if (mContentsMaterial != nullptr) {
		mContentsMaterial->setAnimation(animation);
	}
}

/**
 * @note Address: 0x80047358
 * @note Size: 0x90
 * setAnimation__11J2DWindowExFP19J2DAnmTextureSRTKey
 */
void J2DWindowEx::setAnimation(J2DAnmTextureSRTKey* animation)
{
	for (u8 i = 0; i < 4; i++) {
		if (isNeedSetAnm(i)) {
			mFrameMaterials[i]->setAnimation(animation);
		}
	}
	if (mContentsMaterial != nullptr) {
		mContentsMaterial->setAnimation(animation);
	}
}

/**
 * @note Address: 0x800473E8
 * @note Size: 0x90
 * setAnimation__11J2DWindowExFP16J2DAnmTexPattern
 */
void J2DWindowEx::setAnimation(J2DAnmTexPattern* animation)
{
	for (u8 i = 0; i < 4; i++) {
		if (isNeedSetAnm(i)) {
			mFrameMaterials[i]->setAnimation(animation);
		}
	}
	if (mContentsMaterial != nullptr) {
		mContentsMaterial->setAnimation(animation);
	}
}

/**
 * @note Address: 0x80047478
 * @note Size: 0x90
 * setAnimation__11J2DWindowExFP15J2DAnmTevRegKey
 */
void J2DWindowEx::setAnimation(J2DAnmTevRegKey* animation)
{
	for (u8 i = 0; i < 4; i++) {
		if (isNeedSetAnm(i)) {
			mFrameMaterials[i]->setAnimation(animation);
		}
	}
	if (mContentsMaterial != nullptr) {
		mContentsMaterial->setAnimation(animation);
	}
}

/**
 * @note Address: 0x80047508
 * @note Size: 0x5C
 */
bool J2DWindowEx::isNeedSetAnm(u8 frameMaterialIndex)
{
	for (u8 i = 0; i < frameMaterialIndex; i++) {
		if (mFrameMaterials[i] == mFrameMaterials[frameMaterialIndex]) {
			return false;
		}
	}
	return (mFrameMaterials[frameMaterialIndex] != nullptr);
}

/**
 * @note Address: 0x80047564
 * @note Size: 0x8
 * setAnimation__11J2DWindowExFP20J2DAnmVisibilityFull
 */
void J2DWindowEx::setAnimation(J2DAnmVisibilityFull* animation) { mAnmVisibility = animation; }

/**
 * @note Address: 0x8004756C
 * @note Size: 0xE0
 * setAnimation__11J2DWindowExFP14J2DAnmVtxColor
 */
void J2DWindowEx::setAnimation(J2DAnmVtxColor* animation)
{
	mAnmVtxColor = animation;
	_17C         = 0;
	if (animation != nullptr) {
		u32 uVar3 = animation->getAnmTableNum(0);
		for (u8 i = 0; i < 4; i++) {
			if (_168[i] != 0xffff) {
				for (u16 j = 0; j < uVar3; j++) {
					J3DAnmVtxColorIndexData* puVar1 = animation->getAnmVtxColorIndexData(0, j);
					u16* indexPointer               = animation->getVtxColorIndexPointer(0);
					u16* indexPointer2              = indexPointer + (u32)puVar1->mData;
					for (u16 k = 0; k < puVar1->mNum; k++) {
						if (indexPointer2[k] == _168[i]) {
							mAnmVtxColor = animation;
							_17C |= 1 << i;
							goto nexti;
						}
					}
				}
			}
		nexti:;
		}
	}

	if (_17C == 0) {
		mAnmVtxColor = nullptr;
	}
}

/**
 * @note Address: 0x8004764C
 * @note Size: 0x1AC
 */
const J2DAnmTransform* J2DWindowEx::animationPane(const J2DAnmTransform* animation)
{
	if (mAnmVisibility != 0 && _166 != 0xffff) {
		u8 visibility;
		mAnmVisibility->getVisibility(_166, &visibility);
		if (visibility) {
			J2DPane::show();
		} else {
			J2DPane::hide();
		}
	}

	JUtility::TColor* local_38[4] = { nullptr };
	local_38[0]                   = &mContentsColorA;
	local_38[1]                   = &mContentsColorB;
	local_38[2]                   = &mContentsColorC;
	local_38[3]                   = &mContentsColorD;
	if (mAnmVtxColor != NULL) {
		u32 uVar3 = mAnmVtxColor->getAnmTableNum(0);
		for (u8 i = 0; i < 4; i++) {
			if ((_17C & (1 << i))) {
				for (u16 j = 0; j < uVar3; j++) {
					J3DAnmVtxColorIndexData* puVar1 = mAnmVtxColor->getAnmVtxColorIndexData(0, j);
					u16* indexPointer               = mAnmVtxColor->getVtxColorIndexPointer(0);
					u16* indexPointer2              = indexPointer + (u32)puVar1->mData;
					for (u16 k = 0; k < puVar1->mNum; k++) {
						if (indexPointer2[k] == _168[i]) {
							mAnmVtxColor->getColor(0, j, local_38[i]);
							goto nexti;
						}
					}
				}
			}
		nexti:;
		}
	}
	return J2DPane::animationPane(animation);
}

/**
 * @note Address: 0x80047828
 * @note Size: 0x58
 * draw__11J2DWindowExFffff
 */
void J2DWindowEx::draw(f32 p1, f32 p2, f32 p3, f32 p4)
{
	draw(JGeometry::TBox2<f32>(JGeometry::TVec2<f32>(p1, p2), JGeometry::TVec2<f32>(p1 + p3, p2 + p4)));
	// JGeometry::TBox2f box;
	// box.f.x = p3 + p1;
	// box.f.y = p4 + p2;
	// box.i.x = p1;
	// box.i.y = p2;
	// f32 x1 = p1 + p3;
	// f32 y1 = p2 + p4;
	// JGeometry::TBox2f box(p1, p2, x1, y1);
	// JGeometry::TVec2f bottomRight, topLeft = JGeometry::TVec2f(p1, p2);
	// bottomRight.add(p3, p4);
	// JGeometry::TBox2f box;
	// box.set(p1, p2, p1 + p3, p2 + p4);
	// JGeometry::TVec2f bottomRight = JGeometry::TVec2f(p1 + p3, p2 + p4);
	// JGeometry::TVec2f topLeft     = JGeometry::TVec2f(p1, p2);
	// JGeometry::TBox2f box(topLeft, bottomRight);
	// JGeometry::TBox2f box(p1, p2, p1 + p3, p2 + p4);
	// draw(box);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	frsp     f6, f1
	stfs     f1, 8(r1)
	frsp     f5, f2
	fadds    f1, f1, f3
	addi     r4, r1, 0x10
	stw      r0, 0x24(r1)
	fadds    f0, f2, f4
	stfs     f6, 0x10(r1)
	stfs     f5, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 0(r3)
	stfs     f2, 0xc(r1)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
