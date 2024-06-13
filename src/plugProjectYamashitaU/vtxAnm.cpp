#include "Game/FieldVtxColorMgr.h"

namespace Game {

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
FieldVtxColorControl::FieldVtxColorControl()
{
	mNext         = nullptr;
	mPosition     = Vector3f::zero;
	mRadius       = 10.0f;
	mPower        = 0.0f;
	mCurrentPower = 1.0f;
	mControlInfo  = nullptr;
}

/**
 * @note Address: 0x80122450
 * @note Size: 0xB0
 */
FieldVtxColorMgr::FieldVtxColorMgr(J3DModelData* modelData)
    : CNode("FieldVtxColorMgr")
    , mModelData(nullptr)
    , mInfo(nullptr)
    , mControl(nullptr)
    , mSmoothingRate(0.01f)
{
	mModelData = modelData;
	createFieldVtxColorInfo();
}

/**
 * @note Address: 0x80122500
 * @note Size: 0x1F8
 */
void FieldVtxColorMgr::createFieldVtxColorInfo()
{
	GXColor* color = mModelData->getVtxColorArray(0);
	mInfoCount     = 0;
	u32 vtxNum     = mModelData->getVertexNum();

	mInfo = new (-4) FieldVtxColorInfo[vtxNum];

	for (u16 i = 0; i < mModelData->getVertexNum(); i++) {
		getColorInfo(i)._02 = i;
	}

	u16 shapeCount = mModelData->getShapeNum();

	for (u16 i = 0; i < shapeCount; i++) {
		setupFieldVtxColorInfo(mModelData->getShapeNodePointer(i));
	}

	for (u16 i = 0; i < mModelData->getVertexNum(); i++) {
		GXColor& thisColor = color[getColorInfo(i).mColorIdx];
		if (thisColor.a) {
			mInfoCount++;
		}

		thisColor.b = 255;
		thisColor.g = 255;
		thisColor.r = 255;
	}

	FieldVtxColorInfo* newInfos = new FieldVtxColorInfo[mInfoCount];

	int infoCount = 0;
	for (u16 i = 0; i < mModelData->getVertexNum(); i++) {
		FieldVtxColorInfo& oldInfo = getColorInfo(i);

		if (color[oldInfo.mColorIdx].a) {
			newInfos[infoCount++] = oldInfo;
		}
	}

	delete[] mInfo;

	mInfo = newInfos;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r4, -4
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r3, 0x24(r3)
	lwz      r31, 0xac(r3)
	stw      r0, 0x2c(r30)
	lwz      r3, 0x24(r30)
	lwz      r29, 0x88(r3)
	mulli    r3, r29, 6
	addi     r3, r3, 0x10
	bl       __nwa__FUli
	lis      r4, __ct__Q24Game17FieldVtxColorInfoFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q24Game17FieldVtxColorInfoFv@l
	li       r5, 0
	li       r6, 6
	bl       __construct_new_array
	stw      r3, 0x28(r30)
	li       r5, 0
	b        lbl_80122584

lbl_8012256C:
	clrlwi   r0, r5, 0x10
	lwz      r4, 0x28(r30)
	mulli    r3, r0, 6
	addi     r0, r3, 2
	sthx     r5, r4, r0
	addi     r5, r5, 1

lbl_80122584:
	lwz      r4, 0x24(r30)
	clrlwi   r0, r5, 0x10
	lwz      r3, 0x88(r4)
	cmplw    r0, r3
	blt      lbl_8012256C
	lhz      r29, 0x7c(r4)
	li       r28, 0
	b        lbl_801225C0

lbl_801225A4:
	lwz      r4, 0x24(r30)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	mr       r3, r30
	lwz      r4, 0x80(r4)
	lwzx     r4, r4, r0
	bl       setupFieldVtxColorInfo__Q24Game16FieldVtxColorMgrFP8J3DShape
	addi     r28, r28, 1

lbl_801225C0:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r29
	blt      lbl_801225A4
	li       r6, 0
	li       r5, 0xff
	b        lbl_80122618

lbl_801225D8:
	clrlwi   r0, r6, 0x10
	lwz      r3, 0x28(r30)
	mulli    r0, r0, 6
	lhzx     r0, r3, r0
	slwi     r0, r0, 2
	add      r4, r31, r0
	lbz      r0, 3(r4)
	cmplwi   r0, 0
	beq      lbl_80122608
	lwz      r3, 0x2c(r30)
	addi     r0, r3, 1
	stw      r0, 0x2c(r30)

lbl_80122608:
	stb      r5, 2(r4)
	addi     r6, r6, 1
	stb      r5, 1(r4)
	stb      r5, 0(r4)

lbl_80122618:
	lwz      r3, 0x24(r30)
	clrlwi   r4, r6, 0x10
	lwz      r0, 0x88(r3)
	cmplw    r4, r0
	blt      lbl_801225D8
	lwz      r29, 0x2c(r30)
	mulli    r3, r29, 6
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game17FieldVtxColorInfoFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q24Game17FieldVtxColorInfoFv@l
	li       r5, 0
	li       r6, 6
	bl       __construct_new_array
	mr       r29, r3
	li       r3, 0
	li       r7, 0
	b        lbl_801226AC

lbl_80122664:
	clrlwi   r0, r7, 0x10
	lwz      r4, 0x28(r30)
	mulli    r0, r0, 6
	add      r6, r4, r0
	lhz      r5, 0(r6)
	rlwinm   r4, r5, 2, 0xe, 0x1d
	addi     r0, r4, 3
	lbzx     r0, r31, r0
	cmplwi   r0, 0
	beq      lbl_801226A8
	add      r4, r29, r3
	addi     r3, r3, 6
	sth      r5, 0(r4)
	lhz      r0, 2(r6)
	sth      r0, 2(r4)
	lbz      r0, 4(r6)
	stb      r0, 4(r4)

lbl_801226A8:
	addi     r7, r7, 1

lbl_801226AC:
	lwz      r4, 0x24(r30)
	clrlwi   r5, r7, 0x10
	lwz      r0, 0x88(r4)
	cmplw    r5, r0
	blt      lbl_80122664
	lwz      r3, 0x28(r30)
	cmplwi   r3, 0
	beq      lbl_801226D4
	addi     r3, r3, -16
	bl       __dla__FPv

lbl_801226D4:
	stw      r29, 0x28(r30)
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
 * Updates the field vertex color control based on the given control information.
 * The control's current power is smoothly adjusted towards the target power using the smoothing rate.
 * The alpha value of each field vertex color info is updated based on the control's current power.
 *
 * @param control The field vertex color control to update.
 *
 * @note Address: N/A
 * @note Size: 0xE0
 */
void FieldVtxColorMgr::updateFieldVtxColorControl(FieldVtxColorControl* control)
{
	FieldVtxColorControlInfo* controlInfo = control->mControlInfo;
	if (FABS(control->mCurrentPower - control->mPower) < mSmoothingRate) {
		control->mCurrentPower = control->mPower;
	} else {
		control->mCurrentPower += (control->mCurrentPower < control->mPower) ? mSmoothingRate : -mSmoothingRate;
	}

	f32 alphaFlt = 255.0f * control->mCurrentPower;
	u8 alpha     = ROUND_F32_TO_U8(alphaFlt);
	for (controlInfo; controlInfo; controlInfo = controlInfo->mNext) {
		FieldVtxColorInfo* info = controlInfo->mInfo;
		if (controlInfo->mAlphaThreshold <= alpha) {
			if (info->mAlpha < 255) {
				info->mAlpha = 255;
			}
		} else if ((int)info->mAlpha < 0) { // idk how to get this to check below zero but also be cmplwi (not cmpwi)
			info->mAlpha = 0;
		}
	}
}

/**
 * @note Address: 0x80122714
 * @note Size: 0x1C8
 */
void FieldVtxColorMgr::initVtxColor()
{
	f32 oldFloat = mSmoothingRate;

	mSmoothingRate = 1.0f;
	for (int i = 0; i < mInfoCount; i++) {
		mInfo[i].mAlpha = 0;
	}

	FOREACH_NODE(FieldVtxColorControl, mControl, currControl) { updateFieldVtxColorControl(currControl); }

	GXColor newColor;
	newColor.b     = 255;
	newColor.g     = 255;
	newColor.r     = 255;
	GXColor* color = mModelData->getVtxColorArray(0);

	for (int i = 0; i < mInfoCount; i++) {
		newColor.a           = mInfo[i].mAlpha;
		int idx              = mInfo[i].mColorIdx;
		*((u32*)&color[idx]) = *(u32*)(&newColor);
	}

	DCStoreRange(color, mModelData->getVertexColorNum() * 4);

	mSmoothingRate = oldFloat;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	li       r5, 0
	lfs      f31, 0x34(r3)
	mr       r4, r5
	lfs      f0, lbl_80517CC8@sda21(r2)
	li       r6, 0
	stfs     f0, 0x34(r3)
	b        lbl_80122760

lbl_8012274C:
	lwz      r3, 0x28(r31)
	addi     r0, r5, 4
	addi     r5, r5, 6
	addi     r6, r6, 1
	stbx     r4, r3, r0

lbl_80122760:
	lwz      r0, 0x2c(r31)
	cmpw     r6, r0
	blt      lbl_8012274C
	lwz      r8, 0x30(r31)
	lfs      f2, lbl_80517CD0@sda21(r2)
	lfs      f1, lbl_80517CC4@sda21(r2)
	b        lbl_8012284C

lbl_8012277C:
	lfs      f4, 0x18(r8)
	lfs      f3, 0x14(r8)
	lfs      f5, 0x34(r31)
	fsubs    f0, f4, f3
	lwz      r7, 0x1c(r8)
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f5
	bge      lbl_801227A8
	stfs     f3, 0x18(r8)
	b        lbl_801227C4

lbl_801227A8:
	fcmpo    cr0, f4, f3
	bge      lbl_801227B4
	b        lbl_801227B8

lbl_801227B4:
	fneg     f5, f5

lbl_801227B8:
	lfs      f0, 0x18(r8)
	fadds    f0, f0, f5
	stfs     f0, 0x18(r8)

lbl_801227C4:
	lfs      f0, 0x18(r8)
	fmuls    f3, f2, f0
	fcmpo    cr0, f3, f1
	cror     2, 1, 2
	bne      lbl_801227E4
	lfs      f0, lbl_80517CD4@sda21(r2)
	fadds    f0, f0, f3
	b        lbl_801227EC

lbl_801227E4:
	lfs      f0, lbl_80517CD4@sda21(r2)
	fsubs    f0, f3, f0

lbl_801227EC:
	fctiwz   f0, f0
	li       r4, 0xff
	li       r0, 0
	stfd     f0, 0x10(r1)
	lwz      r3, 0x14(r1)
	clrlwi   r6, r3, 0x18
	b        lbl_80122840

lbl_80122808:
	lbz      r3, 8(r7)
	lwz      r5, 4(r7)
	cmplw    r3, r6
	bgt      lbl_8012282C
	lbz      r3, 4(r5)
	cmplwi   r3, 0xff
	bge      lbl_8012283C
	stb      r4, 4(r5)
	b        lbl_8012283C

lbl_8012282C:
	lbz      r3, 4(r5)
	cmplwi   r3, 0
	bge      lbl_8012283C
	stb      r0, 4(r5)

lbl_8012283C:
	lwz      r7, 0(r7)

lbl_80122840:
	cmplwi   r7, 0
	bne      lbl_80122808
	lwz      r8, 0(r8)

lbl_8012284C:
	cmplwi   r8, 0
	bne      lbl_8012277C
	lwz      r3, 0x24(r31)
	li       r0, 0xff
	stb      r0, 0xa(r1)
	li       r7, 0
	lwz      r3, 0xac(r3)
	li       r6, 0
	stb      r0, 9(r1)
	stb      r0, 8(r1)
	b        lbl_801228A0

lbl_80122878:
	lwz      r5, 0x28(r31)
	addi     r0, r6, 4
	addi     r7, r7, 1
	lbzx     r4, r5, r0
	lhzx     r0, r5, r6
	addi     r6, r6, 6
	stb      r4, 0xb(r1)
	slwi     r0, r0, 2
	lwz      r4, 8(r1)
	stwx     r4, r3, r0

lbl_801228A0:
	lwz      r0, 0x2c(r31)
	cmpw     r7, r0
	blt      lbl_80122878
	lwz      r4, 0x24(r31)
	lwz      r0, 0x90(r4)
	slwi     r4, r0, 2
	bl       DCStoreRange
	stfs     f31, 0x34(r31)
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
 * @note Address: 0x801228DC
 * @note Size: 0x280
 */
void FieldVtxColorMgr::calc(J3DVertexBuffer* buffer)
{
	if (isFlag(1)) {
		GXColor* colorList = *buffer->mVtxColor; // r31
		bool check         = true;               // r30

		for (int i = 0; i < mInfoCount; i++) {
			mInfo[i].mAlpha = 0;
		}

		FOREACH_NODE(FieldVtxColorControl, mControl, currControl) { updateFieldVtxColorControl(currControl); }

		for (int i = 0; i < mInfoCount; i++) {
			int idx  = mInfo[i].mColorIdx;
			u8 alpha = mInfo[i].mAlpha;

			GXColor& color = colorList[idx];
			if (color.a == alpha) {
				continue;
			}

			if (fabs(color.a - alpha) < 7.0) {
				color.a = mInfo[i].mAlpha;
			} else {
				int offset = -7;
				if (color.a < mInfo[i].mAlpha) {
					offset = 7;
				}

				color.a += offset;
			}

			check = false;
		}

		DCStoreRange(colorList, buffer->getVertexData()->getColNum() * 4);
		buffer->mCurrentVtxColor = colorList;
		if (check) {
			resetFlag(1);
		}
		return;
	}

	FOREACH_NODE(FieldVtxColorControl, mControl, control)
	{
		if (control->mPower != control->mCurrentPower) {
			setFlag(1);
			return;
		}
	}
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
	lwz      r0, 0x38(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80122B08
	li       r5, 0
	lwz      r31, 0x14(r29)
	mr       r4, r5
	li       r30, 1
	li       r6, 0
	b        lbl_80122938

lbl_80122924:
	lwz      r3, 0x28(r28)
	addi     r0, r5, 4
	addi     r5, r5, 6
	addi     r6, r6, 1
	stbx     r4, r3, r0

lbl_80122938:
	lwz      r0, 0x2c(r28)
	cmpw     r6, r0
	blt      lbl_80122924
	lwz      r8, 0x30(r28)
	lfs      f2, lbl_80517CD0@sda21(r2)
	lfs      f1, lbl_80517CC4@sda21(r2)
	b        lbl_80122A24

lbl_80122954:
	lfs      f4, 0x18(r8)
	lfs      f3, 0x14(r8)
	lfs      f5, 0x34(r28)
	fsubs    f0, f4, f3
	lwz      r7, 0x1c(r8)
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f5
	bge      lbl_80122980
	stfs     f3, 0x18(r8)
	b        lbl_8012299C

lbl_80122980:
	fcmpo    cr0, f4, f3
	bge      lbl_8012298C
	b        lbl_80122990

lbl_8012298C:
	fneg     f5, f5

lbl_80122990:
	lfs      f0, 0x18(r8)
	fadds    f0, f0, f5
	stfs     f0, 0x18(r8)

lbl_8012299C:
	lfs      f0, 0x18(r8)
	fmuls    f3, f2, f0
	fcmpo    cr0, f3, f1
	cror     2, 1, 2
	bne      lbl_801229BC
	lfs      f0, lbl_80517CD4@sda21(r2)
	fadds    f0, f0, f3
	b        lbl_801229C4

lbl_801229BC:
	lfs      f0, lbl_80517CD4@sda21(r2)
	fsubs    f0, f3, f0

lbl_801229C4:
	fctiwz   f0, f0
	li       r4, 0xff
	li       r0, 0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	clrlwi   r6, r3, 0x18
	b        lbl_80122A18

lbl_801229E0:
	lbz      r3, 8(r7)
	lwz      r5, 4(r7)
	cmplw    r3, r6
	bgt      lbl_80122A04
	lbz      r3, 4(r5)
	cmplwi   r3, 0xff
	bge      lbl_80122A14
	stb      r4, 4(r5)
	b        lbl_80122A14

lbl_80122A04:
	lbz      r3, 4(r5)
	cmplwi   r3, 0
	bge      lbl_80122A14
	stb      r0, 4(r5)

lbl_80122A14:
	lwz      r7, 0(r7)

lbl_80122A18:
	cmplwi   r7, 0
	bne      lbl_801229E0
	lwz      r8, 0(r8)

lbl_80122A24:
	cmplwi   r8, 0
	bne      lbl_80122954
	li       r7, 0
	li       r5, 0
	b        lbl_80122ACC

lbl_80122A38:
	lwz      r4, 0x28(r28)
	add      r3, r4, r5
	lhz      r0, 0(r3)
	lbz      r3, 4(r3)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r8, r31, r0
	lbz      r6, 3(r8)
	cmplw    r6, r3
	beq      lbl_80122AC4
	subf     r3, r3, r6
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r0, 8(r1)
	lfd      f2, lbl_80517CE0@sda21(r2)
	stw      r3, 0xc(r1)
	lfd      f0, lbl_80517CD8@sda21(r2)
	lfd      f1, 8(r1)
	fsub     f1, f1, f2
	fabs     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80122A9C
	addi     r0, r5, 4
	lbzx     r0, r4, r0
	stb      r0, 3(r8)
	b        lbl_80122AC0

lbl_80122A9C:
	addi     r0, r5, 4
	li       r3, -7
	lbzx     r0, r4, r0
	cmplw    r6, r0
	bge      lbl_80122AB4
	li       r3, 7

lbl_80122AB4:
	lbz      r0, 3(r8)
	add      r0, r0, r3
	stb      r0, 3(r8)

lbl_80122AC0:
	li       r30, 0

lbl_80122AC4:
	addi     r5, r5, 6
	addi     r7, r7, 1

lbl_80122ACC:
	lwz      r0, 0x2c(r28)
	cmpw     r7, r0
	blt      lbl_80122A38
	lwz      r4, 0(r29)
	mr       r3, r31
	lwz      r0, 8(r4)
	slwi     r4, r0, 2
	bl       DCStoreRange
	clrlwi.  r0, r30, 0x18
	stw      r31, 0x34(r29)
	beq      lbl_80122B3C
	lwz      r0, 0x38(r28)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x38(r28)
	b        lbl_80122B3C

lbl_80122B08:
	lwz      r3, 0x30(r28)
	b        lbl_80122B34

lbl_80122B10:
	lfs      f1, 0x14(r3)
	lfs      f0, 0x18(r3)
	fcmpu    cr0, f1, f0
	beq      lbl_80122B30
	lwz      r0, 0x38(r28)
	ori      r0, r0, 1
	stw      r0, 0x38(r28)
	b        lbl_80122B3C

lbl_80122B30:
	lwz      r3, 0(r3)

lbl_80122B34:
	cmplwi   r3, 0
	bne      lbl_80122B10

lbl_80122B3C:
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
 * @note Address: N/A
 * @note Size: 0xA4
 */
void FieldVtxColorMgr::setupFieldVtxColorInfoFromFan(void*, int, int, int, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80122B5C
 * @note Size: 0x158
 */
void FieldVtxColorMgr::setupFieldVtxColorInfoFromStrip(void* strip, int p1, int p2, int p3, int p4)
{
	u16* ptr1 = (u16*)((u16*)strip + p1);
	u16* ptr2 = (u16*)((u16*)strip + p1 * 2);

	u16 val1 = ptr1[p2];          // r11
	u16 val2 = ptr2[p2];          // r12
	u16 val3 = ((u16*)strip)[p2]; // r0

	u16 val4 = ((u16*)strip)[p3]; // r31
	u16 val5 = ptr1[p3];          // r9
	u16 val6 = ptr2[p3];          // r10

	if (p4 <= 3) {
		switch (mInfo[val3].mColorIdx) {
		case 0xFFFF:
			((FieldVtxColorInfo*)strip)[val3].mColorIdx = val4;
		}

		switch (mInfo[val1].mColorIdx) {
		case 0xFFFF:
			((FieldVtxColorInfo*)strip)[val1].mColorIdx = val5;
		}

		switch (mInfo[val2].mColorIdx) {
		case 0xFFFF:
			((FieldVtxColorInfo*)strip)[val2].mColorIdx = val6;
		}
		return;
	}

	for (int i = 0, j = 0; i < p4 - 2; i++, j++) {
		u16* ptr1 = (u16*)((u16*)strip + p1);
		u16* ptr2 = (u16*)((u16*)strip + p1 * 2);

		u16 val1 = ptr1[p2];          // r11
		u16 val2 = ptr2[p2];          // r12
		u16 val3 = ((u16*)strip)[p2]; // r0

		u16 val4 = ((u16*)strip)[p3]; // r31
		u16 val5 = ptr1[p3];          // r9
		u16 val6 = ptr2[p3];          // r10

		switch (mInfo[val3].mColorIdx) {
		case 0xFFFF:
			((FieldVtxColorInfo*)strip)[val3].mColorIdx = val4;
		}

		switch (mInfo[val1].mColorIdx) {
		case 0xFFFF:
			((FieldVtxColorInfo*)strip)[val1].mColorIdx = val5;
		}

		switch (mInfo[val2].mColorIdx) {
		case 0xFFFF:
			((FieldVtxColorInfo*)strip)[val2].mColorIdx = val6;
		}
		return;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  rlwinm    r0,r5,1,0,30
	  add       r9, r4, r5
	  cmpwi     r8, 0x3
	  stw       r31, 0x1C(r1)
	  add       r10, r4, r0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lhzx      r11, r9, r6
	  lhzx      r12, r10, r6
	  lhzx      r0, r4, r6
	  lhzx      r31, r4, r7
	  lhzx      r9, r9, r7
	  lhzx      r10, r10, r7
	  bgt-      .loc_0x98
	  mulli     r0, r0, 0x6
	  lwz       r4, 0x28(r3)
	  lhzx      r5, r4, r0
	  cmplwi    r5, 0xFFFF
	  beq-      .loc_0x58
	  b         .loc_0x5C

	.loc_0x58:
	  sthx      r31, r4, r0

	.loc_0x5C:
	  mulli     r0, r11, 0x6
	  lwz       r4, 0x28(r3)
	  lhzx      r5, r4, r0
	  cmplwi    r5, 0xFFFF
	  beq-      .loc_0x74
	  b         .loc_0x78

	.loc_0x74:
	  sthx      r9, r4, r0

	.loc_0x78:
	  mulli     r0, r12, 0x6
	  lwz       r3, 0x28(r3)
	  lhzx      r4, r3, r0
	  cmplwi    r4, 0xFFFF
	  beq-      .loc_0x90
	  b         .loc_0x140

	.loc_0x90:
	  sthx      r10, r3, r0
	  b         .loc_0x140

	.loc_0x98:
	  subic.    r0, r8, 0x2
	  li        r12, 0
	  li        r11, 0
	  mtctr     r0
	  ble-      .loc_0x140

	.loc_0xAC:
	  add       r31, r4, r11
	  addi      r8, r12, 0x1
	  lhzx      r0, r31, r6
	  addi      r9, r12, 0x2
	  mullw     r10, r5, r8
	  lwz       r8, 0x28(r3)
	  lhzx      r30, r31, r7
	  mullw     r9, r5, r9
	  add       r10, r4, r10
	  lhzx      r31, r10, r6
	  lhzx      r29, r10, r7
	  add       r9, r4, r9
	  mulli     r0, r0, 0x6
	  lhzx      r10, r9, r6
	  lhzx      r28, r9, r7
	  lhzx      r9, r8, r0
	  cmplwi    r9, 0xFFFF
	  beq-      .loc_0xF8
	  b         .loc_0xFC

	.loc_0xF8:
	  sthx      r30, r8, r0

	.loc_0xFC:
	  mulli     r0, r31, 0x6
	  lwz       r8, 0x28(r3)
	  lhzx      r9, r8, r0
	  cmplwi    r9, 0xFFFF
	  beq-      .loc_0x114
	  b         .loc_0x118

	.loc_0x114:
	  sthx      r29, r8, r0

	.loc_0x118:
	  mulli     r0, r10, 0x6
	  lwz       r8, 0x28(r3)
	  lhzx      r9, r8, r0
	  cmplwi    r9, 0xFFFF
	  beq-      .loc_0x130
	  b         .loc_0x134

	.loc_0x130:
	  sthx      r28, r8, r0

	.loc_0x134:
	  add       r11, r11, r5
	  addi      r12, r12, 0x1
	  bdnz+     .loc_0xAC

	.loc_0x140:
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/**
 * @note Address: 0x80122CB4
 * @note Size: 0x210
 */
void FieldVtxColorMgr::setupFieldVtxColorInfo(J3DShape* shape)
{
	int p1                  = -1;
	int p2                  = -1;
	int p3                  = 0;
	const int indices[]     = { 0, 1, 1, 2 };
	GXVtxDescList* descList = shape->mVtxDesc;

	while (descList->mAttr != GX_VA_NULL) {
		switch (descList->mAttr) {
		case GX_VA_POS:
			p1 = p3;
			if (descList->mType != GX_INDEX16) {
				return;
			}
			break;
		case GX_VA_CLR0:
			p2 = p3;
			if (descList->mType != GX_INDEX16) {
				return;
			}
			break;
		}
		p3 += indices[descList->mType];
		descList++;
	}

	for (u16 i = 0; i < shape->getMtxGroupNum(); i++) {
		u8* dispList = const_cast<u8*>(shape->getShapeDraw(i)->mDisplayList);
		u8* ptr      = dispList;
		while ((u32)dispList - (u32)ptr < shape->getShapeDraw(i)->mDlSize) {
			if (ptr[0] == 0) {
				return;
			}

			int val = (s16)(ptr[1]);
			if (ptr[0] == 152) {
				setupFieldVtxColorInfoFromStrip(&ptr[3], p3, p1, p2, val);

			} else {
				if (ptr[0] != 160) {
					return;
				}

				// probably setupFieldVtxColorInfoFromFan
			}
			ptr += p3 * val;
			ptr += 3;
		}
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r5, lbl_8047B434@ha
	stw      r0, 0x44(r1)
	addi     r7, r5, lbl_8047B434@l
	stmw     r22, 0x18(r1)
	mr       r22, r3
	mr       r23, r4
	addi     r3, r1, 8
	li       r30, -1
	li       r29, -1
	li       r28, 0
	lwz      r8, 0x30(r4)
	lwz      r6, 0(r7)
	lwz      r5, 4(r7)
	lwz      r4, 8(r7)
	lwz      r0, 0xc(r7)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r0, 0x14(r1)
	b        lbl_80122D68

lbl_80122D0C:
	cmpwi    r0, 0xa
	beq      lbl_80122D54
	bge      lbl_80122D24
	cmpwi    r0, 9
	bge      lbl_80122D30
	b        lbl_80122D54

lbl_80122D24:
	cmpwi    r0, 0xc
	bge      lbl_80122D54
	b        lbl_80122D44

lbl_80122D30:
	lwz      r0, 4(r8)
	mr       r30, r28
	cmpwi    r0, 3
	beq      lbl_80122D54
	b        lbl_80122EB0

lbl_80122D44:
	lwz      r0, 4(r8)
	mr       r29, r28
	cmpwi    r0, 3
	bne      lbl_80122EB0

lbl_80122D54:
	lwz      r0, 4(r8)
	addi     r8, r8, 8
	slwi     r0, r0, 2
	lwzx     r0, r3, r0
	add      r28, r28, r0

lbl_80122D68:
	lwz      r0, 0(r8)
	cmpwi    r0, 0xff
	bne      lbl_80122D0C
	li       r27, 0
	b        lbl_80122EA0

lbl_80122D7C:
	lwz      r3, 0x3c(r23)
	rlwinm   r31, r27, 2, 0xe, 0x1d
	lwzx     r3, r3, r31
	lwz      r26, 8(r3)
	mr       r25, r26
	b        lbl_80122E84

lbl_80122D94:
	lbz      r0, 0(r25)
	cmplwi   r0, 0
	beq      lbl_80122EB0
	cmplwi   r0, 0x98
	lhz      r24, 1(r25)
	bne      lbl_80122DCC
	mr       r3, r22
	mr       r5, r28
	mr       r6, r30
	mr       r7, r29
	mr       r8, r24
	addi     r4, r25, 3
	bl       setupFieldVtxColorInfoFromStrip__Q24Game16FieldVtxColorMgrFPviiii
	b        lbl_80122E78

lbl_80122DCC:
	cmplwi   r0, 0xa0
	bne      lbl_80122EB0
	addi     r5, r25, 3
	add      r4, r25, r28
	lhzx     r0, r5, r30
	addi     r4, r4, 3
	lhzx     r6, r4, r30
	mulli    r0, r0, 6
	lwz      r3, 0x28(r22)
	lhzx     r5, r5, r29
	lhzx     r4, r4, r29
	lhzx     r7, r3, r0
	cmplwi   r7, 0xffff
	beq      lbl_80122E08
	b        lbl_80122E0C

lbl_80122E08:
	sthx     r5, r3, r0

lbl_80122E0C:
	mulli    r0, r6, 6
	lwz      r3, 0x28(r22)
	lhzx     r5, r3, r0
	cmplwi   r5, 0xffff
	beq      lbl_80122E24
	b        lbl_80122E28

lbl_80122E24:
	sthx     r4, r3, r0

lbl_80122E28:
	addi     r0, r24, -2
	slwi     r5, r28, 1
	mtctr    r0
	cmpwi    r24, 2
	ble      lbl_80122E78

lbl_80122E3C:
	add      r4, r25, r5
	lwz      r3, 0x28(r22)
	addi     r4, r4, 3
	lhzx     r0, r4, r30
	lhzx     r4, r4, r29
	mulli    r0, r0, 6
	lhzx     r6, r3, r0
	cmplwi   r6, 0xffff
	beq      lbl_80122E64
	b        lbl_80122E68

lbl_80122E64:
	sthx     r4, r3, r0

lbl_80122E68:
	add      r5, r5, r28
	bdnz     lbl_80122E3C
	b        lbl_80122E78
	b        lbl_80122EB0

lbl_80122E78:
	mullw    r0, r28, r24
	add      r25, r25, r0
	addi     r25, r25, 3

lbl_80122E84:
	lwz      r0, 0x3c(r23)
	subf     r4, r26, r25
	lwzx     r3, r31, r0
	lwz      r0, 4(r3)
	cmplw    r4, r0
	blt      lbl_80122D94
	addi     r27, r27, 1

lbl_80122EA0:
	lhz      r0, 0xa(r23)
	clrlwi   r3, r27, 0x10
	cmplw    r3, r0
	blt      lbl_80122D7C

lbl_80122EB0:
	lmw      r22, 0x18(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x80122EC4
 * @note Size: 0x1288
 */
FieldVtxColorControl* FieldVtxColorMgr::createNewControl(Vector3f& position, f32 radius, f32 power)
{
	FieldVtxColorControl* newControl = new FieldVtxColorControl;

	if (newControl) {
		setupFieldVtxColorControl(newControl, position, radius, power);

		FieldVtxColorControl* oldControl = mControl;
		if (!oldControl) {
			mControl = newControl;
		} else {
			newControl->mNext = nullptr;

			FieldVtxColorControl* nextControl = oldControl->mNext;
			if (!nextControl) {
				oldControl->mNext = newControl;
			} else {
				while (nextControl) {
					if (!nextControl->mNext) {
						break;
					}

					nextControl = nextControl->mNext;
				}

				nextControl->mNext = newControl;
			}
		}
	}

	return newControl;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	fmr      f30, f1
	mr       r29, r3
	fmr      f31, f2
	mr       r30, r4
	li       r3, 0x20
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80122F4C
	li       r0, 0
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r0, 0(r31)
	lfs      f2, lbl_80517CC0@sda21(r2)
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	lfs      f1, lbl_80517CC4@sda21(r2)
	stfs     f0, 4(r31)
	lfs      f0, lbl_80517CC8@sda21(r2)
	lfs      f3, 4(r3)
	stfs     f3, 8(r31)
	lfs      f3, 8(r3)
	stfs     f3, 0xc(r31)
	stfs     f2, 0x10(r31)
	stfs     f1, 0x14(r31)
	stfs     f0, 0x18(r31)
	stw      r0, 0x1c(r31)

lbl_80122F4C:
	cmplwi   r31, 0
	beq      lbl_80122FBC
	fmr      f1, f30
	mr       r3, r29
	fmr      f2, f31
	mr       r4, r31
	mr       r5, r30
	bl
"setupFieldVtxColorControl__Q24Game16FieldVtxColorMgrFPQ24Game20FieldVtxColorControlR10Vector3<f>ff"
	lwz      r3, 0x30(r29)
	cmplwi   r3, 0
	bne      lbl_80122F80
	stw      r31, 0x30(r29)
	b        lbl_80122FBC

lbl_80122F80:
	li       r0, 0
	stw      r0, 0(r31)
	lwz      r4, 0(r3)
	cmplwi   r4, 0
	bne      lbl_80122FB0
	stw      r31, 0(r3)
	b        lbl_80122FBC
	b        lbl_80122FB0

lbl_80122FA0:
	lwz      r0, 0(r4)
	cmplwi   r0, 0
	beq      lbl_80122FB8
	mr       r4, r0

lbl_80122FB0:
	cmplwi   r4, 0
	bne      lbl_80122FA0

lbl_80122FB8:
	stw      r31, 0(r4)

lbl_80122FBC:
	mr       r3, r31
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x80122FEC
 * @note Size: 0x204
 */
void FieldVtxColorMgr::setupFieldVtxColorControl(Game::FieldVtxColorControl* control, Vector3f& pos, f32 radius, f32 power)
{
	Vector3f* vtxPosArray = (Vector3f*)mModelData->getVtxPosArray();
	control->mPosition    = pos;
	control->mRadius      = radius;
	control->mPower       = power;

	for (u16 i = 0; i < mInfoCount; i++) {
		FieldVtxColorInfo* info = &mInfo[i];
		Vector3f* vtxPos        = &vtxPosArray[info->_02];
		f32 dist                = pos.distance(*vtxPos);
		if (dist < radius) {
			FieldVtxColorControlInfo* ctrlInfo = new FieldVtxColorControlInfo(info, dist / radius);
			FieldVtxColorControlInfo* currInfo = control->mControlInfo;
			if (!currInfo) {
				control->mControlInfo = ctrlInfo;
				continue;
			}

			ctrlInfo->mNext = nullptr;

			FieldVtxColorControlInfo* nextInfo = currInfo->mNext;
			if (!nextInfo) {
				currInfo->mNext = ctrlInfo;
				continue;
			}

			while (nextInfo) {
				if (!nextInfo->mNext) {
					break;
				}
				nextInfo = nextInfo->mNext;
			}
			nextInfo->mNext = ctrlInfo;
		}
	}

	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stmw      r26, 0x18(r1)
	  mr        r27, r3
	  mr        r29, r5
	  lwz       r3, 0x24(r3)
	  mr        r28, r4
	  lfs       f0, 0x0(r5)
	  fmr       f31, f1
	  lwz       r31, 0xA0(r3)
	  li        r30, 0
	  lfs       f30, -0x669C(r2)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x4(r5)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x8(r5)
	  stfs      f0, 0xC(r4)
	  stfs      f31, 0x10(r4)
	  stfs      f2, 0x14(r4)
	  b         .loc_0x1C8

	.loc_0x6C:
	  rlwinm    r0,r30,0,16,31
	  lwz       r3, 0x28(r27)
	  mulli     r0, r0, 0x6
	  lfs       f2, 0x4(r29)
	  lfs       f4, 0x0(r29)
	  lfs       f1, 0x8(r29)
	  add       r26, r3, r0
	  lhz       r0, 0x2(r26)
	  mulli     r0, r0, 0xC
	  add       r3, r31, r0
	  lfs       f0, 0x4(r3)
	  lfs       f3, 0x0(r3)
	  fsubs     f2, f2, f0
	  lfs       f0, 0x8(r3)
	  fsubs     f3, f4, f3
	  fsubs     f0, f1, f0
	  fmuls     f1, f2, f2
	  fmuls     f2, f0, f0
	  fmadds    f0, f3, f3, f1
	  fadds     f29, f2, f0
	  fcmpo     cr0, f29, f30
	  ble-      .loc_0xD4
	  ble-      .loc_0xD8
	  fsqrte    f0, f29
	  fmuls     f29, f0, f29
	  b         .loc_0xD8

	.loc_0xD4:
	  fmr       f29, f30

	.loc_0xD8:
	  fcmpo     cr0, f29, f31
	  bge-      .loc_0x1C4
	  li        r3, 0xC
	  bl        -0xFF22C
	  cmplwi    r3, 0
	  beq-      .loc_0x174
	  fdivs     f2, f29, f31
	  lfs       f0, -0x669C(r2)
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r26, 0x4(r3)
	  fcmpo     cr0, f2, f0
	  blt-      .loc_0x118
	  lfs       f0, -0x6698(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x138

	.loc_0x118:
	  lfs       f0, -0x669C(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x128
	  fmr       f2, f0

	.loc_0x128:
	  lfs       f0, -0x6698(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x138
	  fmr       f2, f0

	.loc_0x138:
	  lfs       f1, -0x6690(r2)
	  lfs       f0, -0x669C(r2)
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x15C
	  lfs       f0, -0x668C(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x164

	.loc_0x15C:
	  lfs       f0, -0x668C(r2)
	  fsubs     f0, f1, f0

	.loc_0x164:
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  stb       r0, 0x8(r3)

	.loc_0x174:
	  lwz       r4, 0x1C(r28)
	  cmplwi    r4, 0
	  bne-      .loc_0x188
	  stw       r3, 0x1C(r28)
	  b         .loc_0x1C4

	.loc_0x188:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  lwz       r5, 0x0(r4)
	  cmplwi    r5, 0
	  bne-      .loc_0x1B8
	  stw       r3, 0x0(r4)
	  b         .loc_0x1C4
	  b         .loc_0x1B8

	.loc_0x1A8:
	  lwz       r0, 0x0(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C0
	  mr        r5, r0

	.loc_0x1B8:
	  cmplwi    r5, 0
	  bne+      .loc_0x1A8

	.loc_0x1C0:
	  stw       r3, 0x0(r5)

	.loc_0x1C4:
	  addi      r30, r30, 0x1

	.loc_0x1C8:
	  lwz       r0, 0x2C(r27)
	  rlwinm    r3,r30,0,16,31
	  cmpw      r3, r0
	  blt+      .loc_0x6C
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}
} // namespace Game
