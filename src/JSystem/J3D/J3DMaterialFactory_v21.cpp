#include "JSystem/J3D/J3DMaterialFactory.h"
#include "JSystem/J3D/J3DColorBlock.h"
#include "JSystem/JSupport/JSU.h"

/**
 * @note Address: 0x80084A00
 * @note Size: 0x1E0
 */
J3DMaterialFactory_v21::J3DMaterialFactory_v21(const J3DMaterialBlock_v21& matblock)
{
	mMaterialNum = matblock.mNumMaterials;

	mInitData             = JSUConvertOffsetToPtr<J3DMaterialInitData_v21>(&matblock, matblock.mMatEntryDataOffset);
	mMatRemapTable        = JSUConvertOffsetToPtr<u16>(&matblock, matblock.mMatRemapTableOffset);
	mCullModeInfo         = JSUConvertOffsetToPtr<GXCullMode>(&matblock, matblock.mCullModeInfoOffset);
	mColorData            = JSUConvertOffsetToPtr<GXColor>(&matblock, matblock.mMatColorsOffset);
	mNumColorChans        = JSUConvertOffsetToPtr<u8>(&matblock, matblock.mNumColorChansOffset);
	mColorChanInfo        = JSUConvertOffsetToPtr<J3DColorChanInfo>(&matblock, matblock.mColorChanInfoOffset);
	mTexGenNums           = JSUConvertOffsetToPtr<u8>(&matblock, matblock.mNumTexCoordsOffset);
	mTexCoordInfo         = JSUConvertOffsetToPtr<J3DTexCoordInfo>(&matblock, matblock.mTexCoordInfoOffset);
	mTexCoord2Info        = JSUConvertOffsetToPtr<J3DTexCoord2Info>(&matblock, matblock.mTexCoord2InfoOffset);
	mTexMtxInfo           = JSUConvertOffsetToPtr<J3DTexMtxInfo>(&matblock, matblock.mTexMtxInfoOffset);
	mTexMtxInfo2          = JSUConvertOffsetToPtr<J3DTexMtxInfo>(&matblock, matblock.mTexMtxInfo2Offset);
	mTextureRemapTable    = JSUConvertOffsetToPtr<u16>(&matblock, matblock.mTextureRemapTableOffset);
	mTevOrderInfo         = JSUConvertOffsetToPtr<J3DTevOrderInfo>(&matblock, matblock.mTevOrderInfoOffset);
	mTevColors            = JSUConvertOffsetToPtr<GXColorS10>(&matblock, matblock.mTevColorsOffset);
	mTevKColors           = JSUConvertOffsetToPtr<GXColor>(&matblock, matblock.mTevKColorsOffset);
	mTevStageNums         = JSUConvertOffsetToPtr<u8>(&matblock, matblock.mNumTevStagesOffset);
	mTevStageInfo         = JSUConvertOffsetToPtr<J3DTevStageInfo>(&matblock, matblock.mTevStageInfoOffset);
	mTevSwapModeInfo      = JSUConvertOffsetToPtr<J3DTevSwapModeInfo>(&matblock, matblock.mTevSwapModeInfoOffset);
	mTevSwapModeTableInfo = JSUConvertOffsetToPtr<J3DTevSwapModeTableInfo>(&matblock, matblock.mTevSwapModeTableInfoOffset);
	mFogInfo              = JSUConvertOffsetToPtr<J3DFogInfo>(&matblock, matblock.mFogInfoOffset);
	mAlphaCompInfo        = JSUConvertOffsetToPtr<J3DAlphaCompInfo>(&matblock, matblock.mAlphaCompInfoOffset);
	mBlendInfo            = JSUConvertOffsetToPtr<J3DBlendInfo>(&matblock, matblock.mBlendInfoOffset);
	mZModeInfo            = JSUConvertOffsetToPtr<J3DZModeInfo>(&matblock, matblock.mZModeInfoOffset);
	mZCompareInfo         = JSUConvertOffsetToPtr<u8>(&matblock, matblock.mZCompareInfoOffset);
	mDitherInfo           = JSUConvertOffsetToPtr<u8>(&matblock, matblock.mDitherInfoOffset);
	mNBTScaleInfo         = JSUConvertOffsetToPtr<J3DNBTScaleInfo>(&matblock, matblock.mNBTScaleInfoOffset);
}

/**
 * @note Address: 0x80084BE0
 * @note Size: 0x4C
 */
u16 J3DMaterialFactory_v21::countUniqueMaterials()
{
	// Man if ONLY there were an easier way to do this!
	u16 count;

	for (count = 0; count < mMaterialNum; count++) { }

	return count;
}

/**
 * @note Address: 0x80084C2C
 * @note Size: 0x838
 */
J3DMaterial* J3DMaterialFactory_v21::create(J3DMaterial* mat, int index, u32 flags) const
{
	int tevID                     = 0;
	J3DMaterialInitData_v21* data = &mInitData[mMatRemapTable[index]];
	if (data->mNumTevStagesIndex != 255) {
		tevID = mTevStageNums[data->mNumTevStagesIndex];
	}
	int texNum = 0;
	for (int i = 0; i < 8; i++) {
		if (mInitData->mTextureIndex[i] != 0xffff) {
			texNum++;
		}
	}
	tevID = (tevID != texNum) ? tevID : texNum;

	u8 tevNum = flags >> 0x10;
	if (tevNum < tevID) {
		tevNum = tevID;
	}

	int texNo = 8;
	if (tevNum < 9) {
		texNo = tevNum;
	}

	u8 texNum2;
	if (data->mNumTexGensIndex != 255) {
		texNum2 = mTexGenNums[data->mNumTexGensIndex];
	} else {
		texNum2 = 0;
	}

	u32 colorFlag  = flags & (J3DMLF_Material_Color_LightOn | J3DMLF_Material_Color_AmbientOn);
	u32 texGenFlag = colorFlag & texNum2;
	u32 PEFlag     = flags & (J3DMLF_Material_PE_Full | J3DMLF_Material_PE_FogOff);
	u32 IndFlag    = (flags >> 0x18) & 1;

	if (mat == nullptr) {
		mat = new J3DMaterial;
	}
	mat->mColorBlock   = mat->createColorBlock(colorFlag);
	mat->mTexGenBlock  = mat->createTexGenBlock(texGenFlag);
	mat->mTevBlock     = mat->createTevBlock(tevNum);
	mat->mIndBlock     = mat->createIndBlock(IndFlag);
	mat->mPEBlock      = mat->createPEBlock(PEFlag, mInitData[mMatRemapTable[index]].mPixelEngineMode);
	mat->mIndex        = index;
	mat->mMaterialMode = mInitData[mMatRemapTable[index]].mPixelEngineMode;

	mat->mColorBlock->setColorChanNum(newColorChanNum(index));
	mat->mColorBlock->setCullMode(newCullMode(index));
	mat->mTexGenBlock->setTexGenNum(newTexGenNum(index));
	mat->mTexGenBlock->setNBTScale(newNBTScale(index));
	mat->mPEBlock->setFog(&newFog(index));
	mat->mPEBlock->setAlphaComp(newAlphaComp(index));
	mat->mPEBlock->setBlend(newBlend(index));
	mat->mPEBlock->setZMode(newZMode(index));
	mat->mPEBlock->setZCompLoc(newZCompLoc(index));
	mat->mPEBlock->setDither(newDither(index));
	mat->mTevBlock->setTevStageNum(newTevStageNum(index));
	for (u8 i = 0; i < texNo; i++) {
		mat->mTevBlock->setTexNo(i, newTexNo(index, i));
	}
	for (u8 i = 0; i < tevNum; i++) {
		mat->mTevBlock->setTevOrder(i, newTevOrder(i, index));
	}

	for (u8 i = 0; i < tevNum; i++) {
		J3DMaterialInitData_v21* data = &mInitData[mMatRemapTable[index]];
		mat->mTevBlock->setTevStage(i, newTevStage(i, index));
		u16 id = data->mTevSwapModeInfoIndex[i];
		if (id != 0xffff) {
			u8 flag = mTevSwapModeInfo[id].mTexSel;
			mat->mTevBlock->getTevStage(i)->mTevSwapModeInfo |= flag << 2;
			flag = mTevSwapModeInfo[data->mTevSwapModeInfoIndex[i]].mRasSel;
			mat->mTevBlock->getTevStage(i)->mTevSwapModeInfo |= flag;
		}
	}

	for (u8 i = 0; i < 4; i++) {
		mat->mTevBlock->setTevKColor(i, newTevKColor(i, index));
	}

	for (u8 i = 0; i < 4; i++) {
		mat->mTevBlock->setTevColor(i, newTevColor(i, index));
	}

	for (u8 i = 0; i < 4; i++) {
		mat->mTevBlock->setTevSwapModeTable(i, newTevSwapModeTable(i, index));
	}

	for (u8 i = 0; i < 4; i++) {
		mat->mColorBlock->setMatColor(i, newMatColor(i, index));
	}

	for (u8 i = 0; i < 4; i++) {
		mat->mColorBlock->setColorChan(i, newColorChan(i, index));
	}

	for (u8 i = 0; i < texNum2; i++) {
		mat->mTexGenBlock->setTexCoord(i, &newTexCoord(i, index));
	}

	for (u8 i = 0; i < 8; i++) {
		mat->mTexGenBlock->setTexMtx(i, newTexMtx(i, index));
	}

	data = &mInitData[mMatRemapTable[index]];
	for (u8 i = 0; i < tevNum; i++) {
		if (data->mTevKColorSels[i] != 255) {
			mat->mTevBlock->setTevKColorSel(i, data->mTevKColorSels[i]);
		} else {
			mat->mTevBlock->setTevKColorSel(i, (u8)28);
		}
	}
	for (u8 i = 0; i < tevNum; i++) {
		if (data->mTevKAlphaSels[i] != 255) {
			mat->mTevBlock->setTevKAlphaSel(i, data->mTevKAlphaSels[i]);
		} else {
			mat->mTevBlock->setTevKAlphaSel(i, (u8)28);
		}
	}
	return mat;

	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	li       r7, 0
	stw      r0, 0xf4(r1)
	stmw     r19, 0xbc(r1)
	mr       r30, r3
	lwz      r3, 8(r3)
	slwi     r27, r5, 1
	mr       r29, r5
	lwz      r5, 4(r30)
	mr       r31, r4
	lhzx     r0, r3, r27
	mr       r3, r7
	mulli    r0, r0, 0x138
	add      r4, r5, r0
	lbz      r0, 4(r4)
	cmplwi   r0, 0xff
	beq      lbl_80084C7C
	lwz      r3, 0x40(r30)
	lbzx     r3, r3, r0

lbl_80084C7C:
	lhz      r0, 0x70(r4)
	cmplwi   r0, 0xffff
	beq      lbl_80084C8C
	li       r7, 1

lbl_80084C8C:
	lhz      r0, 0x72(r4)
	cmplwi   r0, 0xffff
	beq      lbl_80084C9C
	addi     r7, r7, 1

lbl_80084C9C:
	lhz      r0, 0x74(r4)
	cmplwi   r0, 0xffff
	beq      lbl_80084CAC
	addi     r7, r7, 1

lbl_80084CAC:
	lhz      r0, 0x76(r4)
	cmplwi   r0, 0xffff
	beq      lbl_80084CBC
	addi     r7, r7, 1

lbl_80084CBC:
	lhz      r0, 0x78(r4)
	cmplwi   r0, 0xffff
	beq      lbl_80084CCC
	addi     r7, r7, 1

lbl_80084CCC:
	lhz      r0, 0x7a(r4)
	cmplwi   r0, 0xffff
	beq      lbl_80084CDC
	addi     r7, r7, 1

lbl_80084CDC:
	lhz      r0, 0x7c(r4)
	cmplwi   r0, 0xffff
	beq      lbl_80084CEC
	addi     r7, r7, 1

lbl_80084CEC:
	lhz      r0, 0x7e(r4)
	cmplwi   r0, 0xffff
	beq      lbl_80084CFC
	addi     r7, r7, 1

lbl_80084CFC:
	cmplw    r3, r7
	beq      lbl_80084D1C
	cmplwi   r7, 0
	beq      lbl_80084D1C
	cmplw    r3, r7
	ble      lbl_80084D20
	mr       r7, r3
	b        lbl_80084D20

lbl_80084D1C:
	mr       r7, r3

lbl_80084D20:
	rlwinm   r28, r6, 0x10, 0x1b, 0x1f
	cmplw    r7, r28
	ble      lbl_80084D30
	mr       r28, r7

lbl_80084D30:
	cmplwi   r28, 8
	li       r25, 8
	bgt      lbl_80084D40
	mr       r25, r28

lbl_80084D40:
	lbz      r0, 3(r4)
	cmplwi   r0, 0xff
	beq      lbl_80084D58
	lwz      r3, 0x18(r30)
	lbzx     r26, r3, r0
	b        lbl_80084D5C

lbl_80084D58:
	li       r26, 0

lbl_80084D5C:
	li       r0, 4
	cmplwi   r31, 0
	subfc    r3, r26, r0
	rlwinm   r23, r6, 0, 0, 1
	rlwinm   r0, r6, 0, 4, 5
	rlwinm   r22, r6, 0, 2, 3
	subfe    r3, r3, r3
	rlwinm   r21, r6, 8, 0x1f, 0x1f
	andc     r24, r0, r3
	bne      lbl_80084DBC
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80084DBC
	lis      r4, __vt__11J3DMaterial@ha
	lis      r5, 0x3CF3CF00@ha
	addi     r0, r4, __vt__11J3DMaterial@l
	lis      r4, 0x00F3CF3C@ha
	stw      r0, 0(r31)
	addi     r5, r5, 0x3CF3CF00@l
	addi     r0, r4, 0x00F3CF3C@l
	stw      r5, 0x40(r31)
	stw      r0, 0x44(r31)
	bl       initialize__11J3DMaterialFv

lbl_80084DBC:
	mr       r3, r23
	bl       createColorBlock__11J3DMaterialFUl
	stw      r3, 0x24(r31)
	mr       r3, r24
	bl       createTexGenBlock__11J3DMaterialFUl
	stw      r3, 0x28(r31)
	clrlwi   r3, r28, 0x10
	bl       createTevBlock__11J3DMaterialFi
	stw      r3, 0x2c(r31)
	mr       r3, r21
	bl       createIndBlock__11J3DMaterialFi
	stw      r3, 0x30(r31)
	mr       r3, r22
	lwz      r4, 8(r30)
	lwz      r5, 4(r30)
	lhzx     r0, r4, r27
	mulli    r0, r0, 0x138
	lbzx     r4, r5, r0
	bl       createPEBlock__11J3DMaterialFUlUl
	stw      r3, 0x34(r31)
	mr       r3, r30
	lwz      r5, 8(r30)
	mr       r4, r29
	sth      r29, 0x14(r31)
	lwz      r6, 4(r30)
	lhzx     r0, r5, r27
	mulli    r0, r0, 0x138
	lbzx     r0, r6, r0
	stw      r0, 0x10(r31)
	bl       newColorChanNum__22J3DMaterialFactory_v21CFi
	mr       r4, r3
	lwz      r3, 0x24(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r29
	bl       newCullMode__22J3DMaterialFactory_v21CFi
	mr       r4, r3
	lwz      r3, 0x24(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r29
	bl       newTexGenNum__22J3DMaterialFactory_v21CFi
	mr       r4, r3
	lwz      r3, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x60
	bl       newNBTScale__22J3DMaterialFactory_v21CFi
	lwz      r6, 0x60(r1)
	addi     r4, r1, 0x70
	lwz      r5, 0x64(r1)
	lwz      r3, 0x68(r1)
	lwz      r0, 0x6c(r1)
	stw      r6, 0x70(r1)
	stw      r5, 0x74(r1)
	stw      r3, 0x78(r1)
	stw      r0, 0x7c(r1)
	lwz      r3, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x80
	bl       newFog__22J3DMaterialFactory_v21CFi
	lwz      r3, 0x34(r31)
	addi     r4, r1, 0x80
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x34
	bl       newAlphaComp__22J3DMaterialFactory_v21CFi
	lwz      r3, 0x34(r31)
	addi     r4, r1, 0x34
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x30
	bl       newBlend__22J3DMaterialFactory_v21CFi
	lwz      r3, 0x34(r31)
	addi     r4, r1, 0x30
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x14
	bl       newZMode__22J3DMaterialFactory_v21CFi
	lhz      r0, 0x14(r1)
	addi     r4, r1, 0x18
	sth      r0, 0x18(r1)
	lwz      r3, 0x34(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r29
	bl       newZCompLoc__22J3DMaterialFactory_v21CFi
	mr       r4, r3
	lwz      r3, 0x34(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r29
	bl       newDither__22J3DMaterialFactory_v21CFi
	mr       r4, r3
	lwz      r3, 0x34(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r29
	bl       newTevStageNum__22J3DMaterialFactory_v21CFi
	mr       r4, r3
	lwz      r3, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	li       r19, 0
	b        lbl_80085024

lbl_80084FF8:
	mr       r3, r30
	mr       r4, r29
	bl       newTexNo__22J3DMaterialFactory_v21CFii
	mr       r5, r3
	lwz      r3, 0x2c(r31)
	clrlwi   r4, r19, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1

lbl_80085024:
	clrlwi   r5, r19, 0x18
	cmplw    r5, r25
	blt      lbl_80084FF8
	li       r19, 0
	b        lbl_80085070

lbl_80085038:
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x28
	bl       newTevOrder__22J3DMaterialFactory_v21CFii
	lwz      r0, 0x28(r1)
	clrlwi   r4, r19, 0x18
	addi     r5, r1, 0x2c
	stw      r0, 0x2c(r1)
	lwz      r3, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1

lbl_80085070:
	clrlwi   r6, r19, 0x18
	cmplw    r6, r28
	blt      lbl_80085038
	lwz      r24, 4(r30)
	li       r23, 0
	lwz      r25, 8(r30)
	b        lbl_80085164

lbl_8008508C:
	lhzx     r0, r27, r25
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x48
	mulli    r0, r0, 0x138
	add      r20, r24, r0
	bl       newTevStage__22J3DMaterialFactory_v21CFii
	lwz      r3, 0x48(r1)
	clrlwi   r21, r23, 0x18
	lwz      r0, 0x4c(r1)
	mr       r4, r21
	stw      r3, 0x50(r1)
	addi     r5, r1, 0x50
	stw      r0, 0x54(r1)
	lwz      r3, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	slwi     r3, r21, 1
	addi     r22, r3, 0xf0
	lhzx     r0, r20, r22
	cmplwi   r0, 0xffff
	beq      lbl_80085160
	lwz      r3, 0x2c(r31)
	rlwinm   r4, r0, 2, 0xe, 0x1d
	lwz      r5, 0x48(r30)
	addi     r0, r4, 1
	lwz      r12, 0(r3)
	mr       r4, r21
	lbzx     r19, r5, r0
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lbz      r6, 7(r3)
	rlwinm   r0, r19, 2, 0x16, 0x1d
	lwz      r5, 0x48(r30)
	mr       r4, r21
	rlwinm   r6, r6, 0, 0x1e, 0x1b
	or       r0, r6, r0
	stb      r0, 7(r3)
	lwz      r3, 0x2c(r31)
	lhzx     r0, r20, r22
	lwz      r12, 0(r3)
	slwi     r0, r0, 2
	lwz      r12, 0xa4(r12)
	lbzx     r19, r5, r0
	mtctr    r12
	bctrl
	lbz      r0, 7(r3)
	rlwinm   r0, r0, 0, 0, 0x1d
	or       r0, r0, r19
	stb      r0, 7(r3)

lbl_80085160:
	addi     r23, r23, 1

lbl_80085164:
	clrlwi   r6, r23, 0x18
	cmplw    r6, r28
	blt      lbl_8008508C
	li       r19, 0
	b        lbl_800851AC

lbl_80085178:
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x24
	clrlwi   r6, r19, 0x18
	bl       newTevKColor__22J3DMaterialFactory_v21CFii
	lwz      r3, 0x2c(r31)
	clrlwi   r4, r19, 0x18
	addi     r5, r1, 0x24
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1

lbl_800851AC:
	clrlwi   r0, r19, 0x18
	cmplwi   r0, 4
	blt      lbl_80085178
	li       r19, 0
	b        lbl_800851F4

lbl_800851C0:
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x40
	clrlwi   r6, r19, 0x18
	bl       newTevColor__22J3DMaterialFactory_v21CFii
	lwz      r3, 0x2c(r31)
	clrlwi   r4, r19, 0x18
	addi     r5, r1, 0x40
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1

lbl_800851F4:
	clrlwi   r0, r19, 0x18
	cmplwi   r0, 4
	blt      lbl_800851C0
	li       r19, 0
	b        lbl_80085244

lbl_80085208:
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 8
	clrlwi   r6, r19, 0x18
	bl       newTevSwapModeTable__22J3DMaterialFactory_v21CFii
	lbz      r0, 8(r1)
	clrlwi   r4, r19, 0x18
	addi     r5, r1, 0xc
	stb      r0, 0xc(r1)
	lwz      r3, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1

lbl_80085244:
	clrlwi   r0, r19, 0x18
	cmplwi   r0, 4
	blt      lbl_80085208
	li       r19, 0
	b        lbl_8008528C

lbl_80085258:
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x20
	clrlwi   r6, r19, 0x18
	bl       newMatColor__22J3DMaterialFactory_v21CFii
	lwz      r3, 0x24(r31)
	clrlwi   r4, r19, 0x18
	addi     r5, r1, 0x20
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1

lbl_8008528C:
	clrlwi   r0, r19, 0x18
	cmplwi   r0, 2
	blt      lbl_80085258
	li       r19, 0
	b        lbl_800852DC

lbl_800852A0:
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x10
	clrlwi   r6, r19, 0x18
	bl       newColorChan__22J3DMaterialFactory_v21CFii
	lhz      r0, 0x10(r1)
	clrlwi   r4, r19, 0x18
	addi     r5, r1, 0x1c
	sth      r0, 0x1c(r1)
	lwz      r3, 0x24(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1

lbl_800852DC:
	clrlwi   r0, r19, 0x18
	cmplwi   r0, 4
	blt      lbl_800852A0
	li       r19, 0
	b        lbl_80085330

lbl_800852F0:
	mr       r4, r30
	mr       r5, r29
	addi     r3, r1, 0x38
	bl       newTexCoord__22J3DMaterialFactory_v21CFii
	lwz      r3, 0x38(r1)
	clrlwi   r4, r19, 0x18
	lhz      r0, 0x3c(r1)
	addi     r5, r1, 0x58
	stw      r3, 0x58(r1)
	sth      r0, 0x5c(r1)
	lwz      r3, 0x28(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1

lbl_80085330:
	clrlwi   r6, r19, 0x18
	cmplw    r6, r26
	blt      lbl_800852F0
	li       r19, 0
	b        lbl_80085374

lbl_80085344:
	mr       r3, r30
	mr       r4, r29
	clrlwi   r5, r19, 0x18
	bl       newTexMtx__22J3DMaterialFactory_v21CFii
	mr       r5, r3
	lwz      r3, 0x28(r31)
	clrlwi   r4, r19, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1

lbl_80085374:
	clrlwi   r0, r19, 0x18
	cmplwi   r0, 8
	blt      lbl_80085344
	lwz      r3, 8(r30)
	li       r20, 0
	lwz      r4, 4(r30)
	lhzx     r0, r3, r27
	mulli    r0, r0, 0x138
	add      r19, r4, r0
	b        lbl_800853E4

lbl_8008539C:
	clrlwi   r4, r20, 0x18
	addi     r0, r4, 0x88
	lbzx     r5, r19, r0
	cmplwi   r5, 0xff
	beq      lbl_800853C8
	lwz      r3, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_800853E0

lbl_800853C8:
	lwz      r3, 0x2c(r31)
	li       r5, 0xc
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_800853E0:
	addi     r20, r20, 1

lbl_800853E4:
	clrlwi   r0, r20, 0x18
	cmplw    r0, r28
	blt      lbl_8008539C
	li       r20, 0
	b        lbl_80085440

lbl_800853F8:
	clrlwi   r4, r20, 0x18
	addi     r0, r4, 0x98
	lbzx     r5, r19, r0
	cmplwi   r5, 0xff
	beq      lbl_80085424
	lwz      r3, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_8008543C

lbl_80085424:
	lwz      r3, 0x2c(r31)
	li       r5, 0x1c
	lwz      r12, 0(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl

lbl_8008543C:
	addi     r20, r20, 1

lbl_80085440:
	clrlwi   r0, r20, 0x18
	cmplw    r0, r28
	blt      lbl_800853F8
	mr       r3, r31
	lmw      r19, 0xbc(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/**
 * @note Address: 0x80085464
 * @note Size: 0x90
 */
J3DGXColor J3DMaterialFactory_v21::newMatColor(int matID, int colID) const
{
	J3DGXColor defaultJ3DGXColor((GXColor) { 255, 255, 255, 255 });
	u16 id = getMaterialInitData(matID).mMatColorIndex[colID];
	if (id != 0xffff) {
		return J3DGXColor(mColorData[id]);
	}
	return J3DGXColor(defaultJ3DGXColor);
	/*
	stwu     r1, -0x10(r1)
	slwi     r0, r6, 1
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	lwz      r8, lbl_80516AE0@sda21(r2)
	lhzx     r5, r7, r5
	stw      r8, 8(r1)
	mulli    r5, r5, 0x138
	lwz      r6, 4(r4)
	lbz      r7, 9(r1)
	lbz      r8, 0xa(r1)
	addi     r5, r5, 8
	lbz      r9, 0xb(r1)
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_800854D8
	lwz      r4, 0xc(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r4, r4, r0
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	lbz      r0, 3(r4)
	stb      r0, 3(r3)
	b        lbl_800854EC

lbl_800854D8:
	lbz      r0, 8(r1)
	stb      r0, 0(r3)
	stb      r7, 1(r3)
	stb      r8, 2(r3)
	stb      r9, 3(r3)

lbl_800854EC:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x800854F4
 * @note Size: 0x38
 */
u8 J3DMaterialFactory_v21::newColorChanNum(int matID) const
{
	u8 id = getMaterialInitData(matID).mNumberColorChanControls;
	if (id != 255) {
		return mNumColorChans[id];
	}
	return 0;
}

/**
 * @note Address: 0x8008552C
 * @note Size: 0x194
 */
J3DColorChan J3DMaterialFactory_v21::newColorChan(int matID, int colID) const
{
	u16 id = getMaterialInitData(matID).mColorChanControlIndex[colID];
	if (id != 0xffff) {
		return J3DColorChan(mColorChanInfo[id]);
	}

	return J3DColorChan();
	/*
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	slwi     r0, r6, 1
	lwz      r6, 4(r4)
	lhzx     r5, r7, r5
	mulli    r5, r5, 0x138
	addi     r5, r5, 0xc
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_8008560C
	lwz      r4, 0x14(r4)
	rlwinm   r0, r0, 3, 0xd, 0x1c
	add      r8, r4, r0
	lbz      r10, 5(r8)
	lbz      r0, 2(r8)
	lbz      r5, 0(r8)
	addi     r7, r10, -255
	subfic   r6, r10, 0xff
	lbz      r4, 1(r8)
	nor      r6, r7, r6
	rlwinm   r7, r5, 1, 0xf, 0x1e
	srawi    r5, r6, 0x1f
	lbz      r9, 4(r8)
	andc     r5, r10, r5
	or       r4, r7, r4
	rlwinm   r6, r4, 0, 0x1a, 0x18
	rlwinm   r11, r0, 7, 0x12, 0x12
	rlwinm   r5, r5, 6, 0x12, 0x19
	cntlzw   r4, r9
	or       r12, r6, r5
	lbz      r6, 3(r8)
	rlwinm   r5, r4, 0x1b, 0x1f, 0x1f
	neg      r4, r9
	rlwimi   r12, r0, 2, 0x1d, 0x1d
	rlwinm   r10, r0, 7, 0x11, 0x11
	rlwimi   r12, r0, 2, 0x1c, 0x1c
	neg      r5, r5
	andc     r5, r6, r5
	subfic   r6, r9, 2
	rlwimi   r12, r0, 2, 0x1b, 0x1b
	or       r4, r4, r9
	rlwimi   r12, r0, 2, 0x1a, 0x1a
	slwi     r7, r5, 7
	rlwimi   r12, r0, 7, 0x14, 0x14
	addi     r5, r9, -2
	rlwimi   r12, r0, 7, 0x13, 0x13
	rlwimi   r11, r12, 0, 0x13, 0x1f
	or       r0, r6, r5
	rlwimi   r10, r11, 0, 0x12, 0x1f
	rlwinm   r5, r10, 0, 0x19, 0x16
	or       r5, r5, r7
	rlwimi   r5, r0, 0xa, 0x16, 0x16
	rlwimi   r5, r4, 0xb, 0x15, 0x15
	sth      r5, 0(r3)
	blr

lbl_8008560C:
	addi     r8, r2, j3dDefaultColorChanInfo@sda21
	lis      r4, 0x0000FFFF@ha
	lbz      r10, 5(r8)
	addi     r4, r4, 0x0000FFFF@l
	lbz      r0, 2(r8)
	lbz      r5, j3dDefaultColorChanInfo@sda21(r2)
	subf     r7, r4, r10
	subf     r6, r10, r4
	lbz      r4, 1(r8)
	nor      r6, r7, r6
	rlwinm   r7, r5, 1, 0xf, 0x1e
	srawi    r5, r6, 0x1f
	lbz      r9, 4(r8)
	andc     r5, r10, r5
	or       r4, r7, r4
	rlwinm   r6, r4, 0, 0x1a, 0x18
	rlwinm   r11, r0, 7, 0x12, 0x12
	rlwinm   r5, r5, 6, 0x12, 0x19
	cntlzw   r4, r9
	or       r12, r6, r5
	lbz      r6, 3(r8)
	rlwinm   r5, r4, 0x1b, 0x1f, 0x1f
	neg      r4, r9
	rlwimi   r12, r0, 2, 0x1d, 0x1d
	rlwinm   r10, r0, 7, 0x11, 0x11
	rlwimi   r12, r0, 2, 0x1c, 0x1c
	neg      r5, r5
	andc     r5, r6, r5
	subfic   r6, r9, 2
	rlwimi   r12, r0, 2, 0x1b, 0x1b
	or       r4, r4, r9
	rlwimi   r12, r0, 2, 0x1a, 0x1a
	slwi     r7, r5, 7
	rlwimi   r12, r0, 7, 0x14, 0x14
	addi     r5, r9, -2
	rlwimi   r12, r0, 7, 0x13, 0x13
	rlwimi   r11, r12, 0, 0x13, 0x1f
	or       r0, r6, r5
	rlwimi   r10, r11, 0, 0x12, 0x1f
	rlwinm   r5, r10, 0, 0x19, 0x16
	or       r5, r5, r7
	rlwimi   r5, r0, 0xa, 0x16, 0x16
	rlwimi   r5, r4, 0xb, 0x15, 0x15
	sth      r5, 0(r3)
	blr
	*/
}

/**
 * @note Address: 0x800856C0
 * @note Size: 0x38
 */
u8 J3DMaterialFactory_v21::newTexGenNum(int matID) const
{
	u8 id = getMaterialInitData(matID).mNumTexGensIndex;
	if (id != 255) {
		return mTexGenNums[id];
	}
	return 0;
}

/**
 * @note Address: 0x800856F8
 * @note Size: 0x84
 */
J3DTexCoord J3DMaterialFactory_v21::newTexCoord(int matID, int texID) const
{
	u16 id = getMaterialInitData(matID).mTexGenInfoIndex[texID];
	if (id != 0xffff) {
		return J3DTexCoord(mTexCoordInfo[id]);
	}

	return J3DTexCoord();
}

/**
 * @note Address: 0x8008577C
 * @note Size: 0x158
 */
J3DTexMtx* J3DMaterialFactory_v21::newTexMtx(int matID, int texID) const
{
	J3DTexMtx* texMtx                 = nullptr;
	J3DMaterialInitData_v21& initData = getMaterialInitData(matID);
	if (initData.mTexMatrixIndex[texID] != 0xFFFF) {
		texMtx = new J3DTexMtx(mTexMtxInfo[initData.mTexMatrixIndex[texID]]);
	}
	return texMtx;
}

/**
 * @note Address: 0x800858D4
 * @note Size: 0x40
 */
u8 J3DMaterialFactory_v21::newCullMode(int matID) const
{
	u8 cullIndex = getMaterialInitData(matID).mCullModeIndex;
	if (cullIndex != 0xFF) {
		return mCullModeInfo[cullIndex];
	}
	return 0xFF;
}

/**
 * @note Address: 0x80085914
 * @note Size: 0x48
 */
u16 J3DMaterialFactory_v21::newTexNo(int matID, int texID) const
{
	u16 id = getMaterialInitData(matID).mTextureIndex[texID];
	if (id != 0xFFFF) {
		return mTextureRemapTable[id];
	}
	return 0xFFFF;
}

/**
 * @note Address: 0x8008595C
 * @note Size: 0x74
 */
J3DTevOrder J3DMaterialFactory_v21::newTevOrder(int matID, int tevID) const
{
	u16 id = getMaterialInitData(matID).mTevOrderInfoIndex[tevID];
	if (id != 0xFFFF) {
		return mTevOrderInfo[id];
	}
	return j3dDefaultTevOrderInfoNull;
}

/**
 * @note Address: 0x800859D0
 * @note Size: 0x98
 */
J3DGXColorS10 J3DMaterialFactory_v21::newTevColor(int matID, int colID) const
{
	GXColorS10 defaultTevColor = { 0, 0, 0, 0 };
	J3DGXColorS10 dflt         = defaultTevColor;
	u16 id                     = getMaterialInitData(matID).mTevColorIndex[colID];
	if (id != 0xFFFF) {
		return mTevColors[id];
	}
	return dflt;
	/*
	stwu     r1, -0x10(r1)
	slwi     r0, r6, 1
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	lwz      r8, lbl_80520E50@sda21(r2)
	lhzx     r5, r7, r5
	lwz      r7, lbl_80520E54@sda21(r2)
	mulli    r5, r5, 0x138
	lwz      r6, 4(r4)
	stw      r8, 8(r1)
	addi     r5, r5, 0xc8
	stw      r7, 0xc(r1)
	add      r0, r5, r0
	lha      r7, 0xa(r1)
	lhzx     r0, r6, r0
	lha      r5, 0xc(r1)
	cmplwi   r0, 0xffff
	lha      r6, 0xe(r1)
	beq      lbl_80085A4C
	lwz      r4, 0x38(r4)
	rlwinm   r0, r0, 3, 0xd, 0x1c
	add      r4, r4, r0
	lha      r0, 0(r4)
	sth      r0, 0(r3)
	lha      r0, 2(r4)
	sth      r0, 2(r3)
	lha      r0, 4(r4)
	sth      r0, 4(r3)
	lha      r0, 6(r4)
	sth      r0, 6(r3)
	b        lbl_80085A60

lbl_80085A4C:
	lha      r0, 8(r1)
	sth      r0, 0(r3)
	sth      r7, 2(r3)
	sth      r5, 4(r3)
	sth      r6, 6(r3)

lbl_80085A60:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80085A68
 * @note Size: 0x90
 */
J3DGXColor J3DMaterialFactory_v21::newTevKColor(int matID, int colID) const
{
	GXColor defaultTevColor = { 255, 255, 255, 255 };
	J3DGXColor dflt         = defaultTevColor;
	u16 id                  = getMaterialInitData(matID).mTevKColorIndex[colID];
	if (id != 0xFFFF) {
		return mTevKColors[id];
	}
	return dflt;
	/*
	stwu     r1, -0x10(r1)
	slwi     r0, r6, 1
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	lwz      r8, lbl_80516AE4@sda21(r2)
	lhzx     r5, r7, r5
	stw      r8, 8(r1)
	mulli    r5, r5, 0x138
	lwz      r6, 4(r4)
	lbz      r7, 9(r1)
	lbz      r8, 0xa(r1)
	addi     r5, r5, 0x80
	lbz      r9, 0xb(r1)
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xffff
	beq      lbl_80085ADC
	lwz      r4, 0x3c(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r4, r4, r0
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lbz      r0, 2(r4)
	stb      r0, 2(r3)
	lbz      r0, 3(r4)
	stb      r0, 3(r3)
	b        lbl_80085AF0

lbl_80085ADC:
	lbz      r0, 8(r1)
	stb      r0, 0(r3)
	stb      r7, 1(r3)
	stb      r8, 2(r3)
	stb      r9, 3(r3)

lbl_80085AF0:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80085AF8
 * @note Size: 0x38
 */
u8 J3DMaterialFactory_v21::newTevStageNum(int id) const
{
	u8 v1 = getMaterialInitData(id).mNumTevStagesIndex;
	if (v1 != 0xFF) {
		return mTevStageNums[v1];
	}
	return 255;
}

/**
 * @note Address: 0x80085B30
 * @note Size: 0x60
 */
J3DTevStage J3DMaterialFactory_v21::newTevStage(int matID, int tevID) const
{
	u16 id = getMaterialInitData(matID).mTevStageInfoIndex[tevID];
	if (id != 0xFFFF) {
		return J3DTevStage(mTevStageInfo[id]);
	}
	return J3DTevStage();
}

/**
 * @note Address: 0x80085B90
 * @note Size: 0x9C
 */
J3DTevSwapModeTable J3DMaterialFactory_v21::newTevSwapModeTable(int matID, int tevID) const
{
	u16 id = getMaterialInitData(matID).mTevSwapModeTableIndex[tevID];
	if (id != 0xFFFF) {
		return J3DTevSwapModeTable(mTevSwapModeTableInfo[id]);
	}
	return J3DTevSwapModeTable(j3dDefaultTevSwapModeTable);
}

/**
 * @note Address: 0x80085C2C
 * @note Size: 0x24C
 */
J3DFog J3DMaterialFactory_v21::newFog(int matID) const
{
	J3DFog fog;
	u16 id = getMaterialInitData(matID).mFogInfoIndex;
	if (id != 0xFFFF) {
		fog = J3DFog(mFogInfo[id]);
	}

	return fog;
	/*
	stwu     r1, -0x80(r1)
	slwi     r0, r5, 1
	lwz      r6, 8(r4)
	lis      r5, j3dDefaultFogInfo@ha
	stmw     r26, 0x68(r1)
	addi     r31, r5, j3dDefaultFogInfo@l
	lwz      r7, 4(r4)
	lhzx     r0, r6, r0
	lhz      r10, 0x18(r31)
	mulli    r5, r0, 0x138
	lhz      r9, 0x1a(r31)
	lhz      r8, 0x1c(r31)
	lhz      r6, 0x1e(r31)
	addi     r0, r5, 0x130
	lhz      r5, 0x20(r31)
	lhzx     r26, r7, r0
	sth      r10, 0x4c(r1)
	lbz      r30, 0(r31)
	cmplwi   r26, 0xffff
	sth      r9, 0x4e(r1)
	lbz      r29, 1(r31)
	sth      r8, 0x50(r1)
	lhz      r28, 2(r31)
	sth      r6, 0x52(r1)
	lfs      f3, 4(r31)
	sth      r5, 0x54(r1)
	lfs      f2, 8(r31)
	lfs      f1, 0xc(r31)
	lfs      f0, 0x10(r31)
	lbz      r12, 0x14(r31)
	lbz      r11, 0x15(r31)
	lbz      r7, 0x16(r31)
	lbz      r0, 0x17(r31)
	lhz      r10, 0x22(r31)
	lhz      r9, 0x24(r31)
	lhz      r8, 0x26(r31)
	lhz      r6, 0x28(r31)
	lhz      r5, 0x2a(r31)
	stb      r30, 0x34(r1)
	stb      r29, 0x35(r1)
	sth      r28, 0x36(r1)
	stfs     f3, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	stb      r12, 0x48(r1)
	stb      r11, 0x49(r1)
	stb      r7, 0x4a(r1)
	stb      r0, 0x4b(r1)
	sth      r10, 0x56(r1)
	sth      r9, 0x58(r1)
	sth      r8, 0x5a(r1)
	sth      r6, 0x5c(r1)
	sth      r5, 0x5e(r1)
	beq      lbl_80085E14
	mulli    r0, r26, 0x2c
	lwz      r4, 0x50(r4)
	add      r8, r4, r0
	lwz      r0, 0x18(r8)
	lwz      r4, 0x1c(r8)
	stw      r0, 0x20(r1)
	lwz      r0, 0x20(r8)
	stw      r4, 0x24(r1)
	lwz      r4, 0(r8)
	stw      r0, 0x28(r1)
	lwz      r7, 4(r8)
	stw      r4, 8(r1)
	lwz      r6, 8(r8)
	lwz      r5, 0xc(r8)
	lwz      r4, 0x10(r8)
	lwz      r0, 0x14(r8)
	lwz      r28, 0x24(r8)
	stw      r0, 0x1c(r1)
	lwz      r29, 0x28(r8)
	stw      r7, 0xc(r1)
	lhz      r7, 0x20(r1)
	stw      r6, 0x10(r1)
	lhz      r6, 0x22(r1)
	stw      r5, 0x14(r1)
	lhz      r5, 0x24(r1)
	stw      r4, 0x18(r1)
	lhz      r4, 0x26(r1)
	lhz      r0, 0x28(r1)
	sth      r7, 0x4c(r1)
	lbz      r30, 8(r1)
	lbz      r31, 9(r1)
	lhz      r12, 0xa(r1)
	lfs      f3, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f1, 0x14(r1)
	lfs      f0, 0x18(r1)
	lbz      r11, 0x1c(r1)
	lbz      r10, 0x1d(r1)
	lbz      r9, 0x1e(r1)
	lbz      r8, 0x1f(r1)
	lhz      r7, 0x2a(r1)
	stw      r28, 0x2c(r1)
	sth      r6, 0x4e(r1)
	lhz      r6, 0x2c(r1)
	sth      r5, 0x50(r1)
	lhz      r5, 0x2e(r1)
	stw      r29, 0x30(r1)
	sth      r4, 0x52(r1)
	lhz      r4, 0x30(r1)
	sth      r0, 0x54(r1)
	lhz      r0, 0x32(r1)
	stb      r30, 0x34(r1)
	stb      r31, 0x35(r1)
	sth      r12, 0x36(r1)
	stfs     f3, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	stb      r11, 0x48(r1)
	stb      r10, 0x49(r1)
	stb      r9, 0x4a(r1)
	stb      r8, 0x4b(r1)
	sth      r7, 0x56(r1)
	sth      r6, 0x58(r1)
	sth      r5, 0x5a(r1)
	sth      r4, 0x5c(r1)
	sth      r0, 0x5e(r1)

lbl_80085E14:
	lwz      r0, 0x34(r1)
	lwz      r4, 0x38(r1)
	stw      r0, 0(r3)
	lwz      r0, 0x3c(r1)
	stw      r4, 4(r3)
	lwz      r4, 0x40(r1)
	stw      r0, 8(r3)
	lwz      r0, 0x44(r1)
	stw      r4, 0xc(r3)
	lwz      r4, 0x48(r1)
	stw      r0, 0x10(r3)
	lwz      r0, 0x4c(r1)
	stw      r4, 0x14(r3)
	lwz      r4, 0x50(r1)
	stw      r0, 0x18(r3)
	lwz      r0, 0x54(r1)
	stw      r4, 0x1c(r3)
	lwz      r4, 0x58(r1)
	stw      r0, 0x20(r3)
	lwz      r0, 0x5c(r1)
	stw      r4, 0x24(r3)
	stw      r0, 0x28(r3)
	lmw      r26, 0x68(r1)
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x80085E78
 * @note Size: 0x80
 */
J3DAlphaComp J3DMaterialFactory_v21::newAlphaComp(int matID) const
{
	u16 id = getMaterialInitData(matID).mAlphaCompareIndex;
	if (id != 0xFFFF) {
		return J3DAlphaComp(mAlphaCompInfo[id]);
	}
	return J3DAlphaComp(0xFFFF);
}

/**
 * @note Address: 0x80085EF8
 * @note Size: 0x7C
 */
J3DBlend J3DMaterialFactory_v21::newBlend(int id) const
{
	u16 v1 = getMaterialInitData(id).mBlendModeIndex;
	if (v1 != 0xFFFF) {
		return J3DBlend(mBlendInfo[v1]);
	}
	return J3DBlend();
}

/**
 * @note Address: 0x80085F74
 * @note Size: 0x60
 */
J3DZMode J3DMaterialFactory_v21::newZMode(int matID) const
{
	u8 id = getMaterialInitData(matID).mZModeIndex;
	if (id != 0xFF) {
		return J3DZMode(mZModeInfo[id]);
	}
	return J3DZMode();
}

/**
 * @note Address: 0x80085FD4
 * @note Size: 0x38
 */
u8 J3DMaterialFactory_v21::newZCompLoc(int matID) const
{
	u8 id = getMaterialInitData(matID).mZCompLocIndex;
	if (id != 0xFF) {
		return mZCompareInfo[id];
	}
	return 0;
}

/**
 * @note Address: 0x8008600C
 * @note Size: 0x38
 */
u8 J3DMaterialFactory_v21::newDither(int matID) const
{
	u8 id = getMaterialInitData(matID).mDitherIndex;
	if (id != 0xFF) {
		return mDitherInfo[id];
	}
	return 1;
}

/**
 * @note Address: 0x80086044
 * @note Size: 0xA8
 */
J3DNBTScale J3DMaterialFactory_v21::newNBTScale(int matID) const
{
	J3DNBTScale ret;
	u16 id = getMaterialInitData(matID).mNBTScaleIndex;
	if (id != 0xFFFF) {
		return J3DNBTScale(mNBTScaleInfo[id]);
	}
	return ret;
}
