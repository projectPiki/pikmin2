#include "JSystem/J2D/J2DMaterialFactory.h"
#include "JSystem/JSupport/JSU.h"
#include "JSystem/JUtility/JUTResource.h"
#include "JSystem/J2D/J2DPane.h"

/**
 * @note Address: 0x800532E8
 * @note Size: 0x1C4
 */
J2DMaterialFactory::J2DMaterialFactory(const J2DMaterialBlock& header)
{
	_00               = header._08;
	mMaterialInitData = JSUConvertOffsetToPtr<J2DMaterialInitData>(&header, (void*)header.mMatInitDataOffset);
	mMatIndexTable    = JSUConvertOffsetToPtr<u16>(&header, (void*)header.mMatIndexTableOffset);

	if (header.mIndInitDataOffset && header.mIndInitDataOffset - header._14 > 4) {
		mIndInitData = JSUConvertOffsetToPtr<J2DIndInitData>(&header, (void*)header.mIndInitDataOffset);
	} else {
		mIndInitData = nullptr;
	}

	mCullMode      = JSUConvertOffsetToPtr<GXCullMode>(&header, (void*)header.mCullModeOffset);
	mMatColor      = JSUConvertOffsetToPtr<GXColor>(&header, (void*)header.mMatColorOffset);
	mColorChanNum  = JSUConvertOffsetToPtr<u8>(&header, (void*)header.mColorChanNumOffset);
	mColorChanInfo = JSUConvertOffsetToPtr<J2DColorChanInfo>(&header, (void*)header.mColorChanInfoOffset);
	mTexGenNum     = JSUConvertOffsetToPtr<u8>(&header, (void*)header.mTexGenNumOffset);

	mTexCoordInfo = JSUConvertOffsetToPtr<J2DTexCoordInfo>(&header, (void*)header.mTexCoordInfoOffset);
	mTexMtxInfo   = JSUConvertOffsetToPtr<J2DTexMtxInfo>(&header, (void*)header.mTexMtxInfoOffset);
	mTexNo        = JSUConvertOffsetToPtr<u16>(&header, (void*)header.mTexNoOffset);
	mFontNo       = JSUConvertOffsetToPtr<u16>(&header, (void*)header.mFontNoOffset);

	mTevOrderInfo     = JSUConvertOffsetToPtr<J2DTevOrderInfo>(&header, (void*)header.mTevOrderInfoOffset);
	mTevColor         = JSUConvertOffsetToPtr<GXColorS10>(&header, (void*)header.mTevColorOffset);
	mTevKColor        = JSUConvertOffsetToPtr<GXColor>(&header, (void*)header.mTevKColorOffset);
	mTevStageNum      = JSUConvertOffsetToPtr<u8>(&header, (void*)header.mTevStageNumOffset);
	mTevStageInfo     = JSUConvertOffsetToPtr<J2DTevStageInfo>(&header, (void*)header.mTevStageInfoOffset);
	mTevSwapInfo      = JSUConvertOffsetToPtr<J2DTevSwapModeInfo>(&header, (void*)header.mTevSwapInfoOffset);
	mTevSwapTableInfo = JSUConvertOffsetToPtr<J2DTevSwapModeTableInfo>(&header, (void*)header.mTevSwapTableInfoOffset);

	mAlphaCompInfo = JSUConvertOffsetToPtr<J2DAlphaCompInfo>(&header, (void*)header.mAlphaCompInfoOffset);
	mBlendInfo     = JSUConvertOffsetToPtr<J2DBlendInfo>(&header, (void*)header.mBlendInfoOffset);
	mDither        = JSUConvertOffsetToPtr<u8>(&header, (void*)header.mDitherOffset);
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
u32 J2DMaterialFactory::countStages(int idx) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	u32 manualCount               = 0;
	u32 storedCount               = 0;
	if (initData->mTevStageIdx != 0xFF) {
		storedCount = mTevStageNum[initData->mTevStageIdx];
	}

	for (int i = 0; i < 8; i++) {
		if (initData->mTexNoIdx[i] != 0xFFFF) {
			manualCount++;
		}
	}

	if ((storedCount != manualCount && manualCount != 0)) {
		if (storedCount > manualCount) {
			return storedCount;
		}
		return manualCount;
	}

	return storedCount;
}

/**
 * @note Address: 0x800534AC
 * @note Size: 0x9C8
 */
J2DMaterial* J2DMaterialFactory::create(J2DMaterial* material, int idx, u32 flags, J2DResReference* texRef, J2DResReference* fontRef,
                                        JKRArchive* arc) const
{
	u32 stages     = countStages(idx);
	u32 stageTemp  = ((flags & 0x1F0000) >> 16);
	u32 stageCount = stages > stageTemp ? stages : stageTemp;
	u32 texCount   = stageCount <= 8 ? stageCount : 8;

	int indRequired         = ((flags & 0x1000000) != 0);
	int indBlockNum         = (flags & 0x1F0000) ? indRequired : 0;
	bool doCreateWithHeap   = (flags & 0x1F0000);
	u16 tevBlockNum         = stageCount;
	material->mTevBlock     = J2DMaterial::createTevBlock(tevBlockNum, doCreateWithHeap);
	material->mIndBlock     = J2DMaterial::createIndBlock(indBlockNum, doCreateWithHeap);
	material->mIndex        = idx;
	material->mMaterialMode = getMaterialMode(idx);
	material->getColorBlock()->setColorChanNum(newColorChanNum(idx));
	material->getColorBlock()->setCullMode(newCullMode(idx));
	material->getTexGenBlock()->setTexGenNum(newTexGenNum(idx));
	material->getPEBlock()->setAlphaComp(newAlphaComp(idx));
	material->getPEBlock()->setBlend(newBlend(idx));
	material->getPEBlock()->setDither(newDither(idx));
	material->getTevBlock()->setTevStageNum(newTevStageNum(idx));
	material->mMaterialAlphaCalc = getMaterialAlphaCalc(idx);

	// set up textures
	JUTResReference resRef;
	for (u8 i = 0; i < texCount; i++) {
		u16 texNo  = newTexNo(idx, i);
		s8* texPtr = texRef->getResReference(texNo);
		void* timg = nullptr;

		if (texPtr) {
			// try getting timg from resource reference
			timg = resRef.getResource(texPtr, 'TIMG', arc);

			// if nothing there, try from archive
			if (!timg && arc) {
				timg = resRef.getResource(texPtr, 'TIMG', nullptr);
			}

			// if still nothing there, try from screen data manager
			if (!timg && J2DScreen::getDataManage()) {
				char texName[256];
				strcpy(texName, texRef->getName(texNo));
				timg = J2DScreen::getDataManage()->get(texName);
			}
		}

		material->getTevBlock()->insertTexture(i, (ResTIMG*)timg);
		material->getTevBlock()->setTexNo(i, texNo);
	}

	// set up font
	u16 fontNo = newFontNo(idx);
	material->getTevBlock()->setFontNo(fontNo);

	s8* fontPtr = fontRef->getResReference(material->getTevBlock()->getFontNo());
	void* font  = nullptr;
	if (fontPtr) {
		// try getting font from resource reference
		font = resRef.getResource(fontPtr, 'FONT', arc);

		// if nothing there, try from archive
		if (!font && arc) {
			font = resRef.getResource(fontPtr, 'FONT', nullptr);
		}

		// if still nothing there, try from screen data manager
		if (!font && J2DScreen::getDataManage()) {
			char* fontNamePtr = fontRef->getName(material->getTevBlock()->getFontNo());
			char fontName[256];
			strcpy(fontName, fontNamePtr);
			font = J2DScreen::getDataManage()->get(fontName);
		}
	}

	material->getTevBlock()->setFont((ResFONT*)font);

	// set tev orders
	for (u8 i = 0; i < stageCount; i++) {
		material->getTevBlock()->setTevOrder(i, newTevOrder(idx, i));
	}

	// set tev stages
	for (u8 i = 0; i < stageCount; i++) {
		J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
		material->getTevBlock()->setTevStage(i, newTevStage(idx, i));
		if (initData->mTevSwapInfoIdx[i] != 0xFFFF) {
			material->getTevBlock()->getTevStage(i)->setTexSel(mTevSwapInfo[initData->mTevSwapInfoIdx[i]].mTexSel);
			material->getTevBlock()->getTevStage(i)->setRasSel(mTevSwapInfo[initData->mTevSwapInfoIdx[i]].mRasSel);
		}
	}

	// set tev K colors
	for (u8 i = 0; i < 4; i++) {
		material->getTevBlock()->setTevKColor(i, newTevKColor(idx, i));
	}

	// set tev colors
	for (u8 i = 0; i < 4; i++) {
		J2DTevBlock* block = material->getTevBlock();
		block->setTevColor(i, newTevColor(idx, i));
	}

	// set swap mode table
	for (u8 i = 0; i < 4; i++) {
		material->getTevBlock()->setTevSwapModeTable(i, newTevSwapModeTable(idx, i));
	}

	// set material colors
	for (u8 i = 0; i < 2; i++) {
		material->getColorBlock()->setMatColor(i, newMatColor(idx, i));
	}

	// set color channels
	for (u8 i = 0; i < 4; i++) {
		material->getColorBlock()->setColorChan(i, newColorChan(idx, i));
	}

	// set tex coordinates
	for (u8 i = 0; i < 8; i++) {
		material->getTexGenBlock()->setTexCoord(i, newTexCoord(idx, i));
	}

	// set tex matrices
	for (u8 i = 0; i < 8; i++) {
		material->getTexGenBlock()->setTexMtx(i, newTexMtx(idx, i));
	}

	// set tev K sels
	J2DMaterialInitData* initData2 = &mMaterialInitData[mMatIndexTable[idx]];
	for (u8 i = 0; i < stageCount; i++) {
		material->getTevBlock()->setTevKColorSel(i, initData2->mTevKColorSel[i]);
	}
	for (u8 i = 0; i < stageCount; i++) {
		material->getTevBlock()->setTevKAlphaSel(i, initData2->mTevKAlphaSel[i]);
	}

	// set indirect texture info
	if (mIndInitData || indBlockNum != 0) {
		u8 indTexStageNum = newIndTexStageNum(idx);
		material->mIndBlock->setIndTexStageNum(indTexStageNum);
		for (u8 i = 0; i < indTexStageNum; i++) {
			material->getIndBlock()->setIndTexMtx(i, newIndTexMtx(idx, i));
		}
		for (u8 i = 0; i < indTexStageNum; i++) {
			material->getIndBlock()->setIndTexOrder(i, newIndTexOrder(idx, i));
		}
		for (u8 i = 0; i < indTexStageNum; i++) {
			material->getIndBlock()->setIndTexCoordScale(i, newIndTexCoordScale(idx, i));
		}
		for (u8 i = 0; i < stageCount; i++) {
			material->getTevBlock()->setIndTevStage(i, newIndTevStage(idx, i));
		}
	}

	return material;
	/*
	.loc_0x0:
	  stwu      r1, -0x3D0(r1)
	  mflr      r0
	  li        r10, 0
	  stw       r0, 0x3D4(r1)
	  stmw      r19, 0x39C(r1)
	  mr        r30, r3
	  lwz       r3, 0x8(r3)
	  rlwinm    r24,r5,1,0,30
	  mr        r29, r5
	  lwz       r5, 0x4(r30)
	  mr        r31, r4
	  mr        r27, r7
	  mr        r23, r8
	  mr        r26, r9
	  lhzx      r0, r3, r24
	  mr        r3, r10
	  mulli     r0, r0, 0xE8
	  add       r4, r5, r0
	  lbz       r0, 0x4(r4)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x5C
	  lwz       r3, 0x40(r30)
	  lbzx      r3, r3, r0

	.loc_0x5C:
	  lhz       r0, 0x38(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x6C
	  li        r10, 0x1

	.loc_0x6C:
	  lhz       r0, 0x3A(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x7C
	  addi      r10, r10, 0x1

	.loc_0x7C:
	  lhz       r0, 0x3C(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x8C
	  addi      r10, r10, 0x1

	.loc_0x8C:
	  lhz       r0, 0x3E(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x9C
	  addi      r10, r10, 0x1

	.loc_0x9C:
	  lhz       r0, 0x40(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xAC
	  addi      r10, r10, 0x1

	.loc_0xAC:
	  lhz       r0, 0x42(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xBC
	  addi      r10, r10, 0x1

	.loc_0xBC:
	  lhz       r0, 0x44(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xCC
	  addi      r10, r10, 0x1

	.loc_0xCC:
	  lhz       r0, 0x46(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xDC
	  addi      r10, r10, 0x1

	.loc_0xDC:
	  cmplw     r3, r10
	  beq-      .loc_0xFC
	  cmplwi    r10, 0
	  beq-      .loc_0xFC
	  cmplw     r3, r10
	  ble-      .loc_0x100
	  mr        r10, r3
	  b         .loc_0x100

	.loc_0xFC:
	  mr        r10, r3

	.loc_0x100:
	  rlwinm    r0,r6,16,27,31
	  rlwinm    r4,r6,0,11,15
	  cmplw     r10, r0
	  mr        r28, r0
	  ble-      .loc_0x118
	  mr        r28, r10

	.loc_0x118:
	  cmplwi    r28, 0x8
	  li        r25, 0x8
	  bgt-      .loc_0x128
	  mr        r25, r28

	.loc_0x128:
	  neg       r0, r4
	  rlwinm    r5,r6,8,31,31
	  or        r0, r0, r4
	  rlwinm    r3,r28,0,16,31
	  rlwinm    r4,r0,1,31,31
	  srawi     r0, r0, 0x1F
	  mr        r19, r4
	  and       r20, r5, r0
	  bl        -0x1328
	  stw       r3, 0x70(r31)
	  mr        r3, r20
	  mr        r4, r19
	  bl        -0x1184
	  stw       r3, 0x74(r31)
	  mr        r3, r30
	  lwz       r5, 0x8(r30)
	  mr        r4, r29
	  sth       r29, 0xC(r31)
	  lwz       r6, 0x4(r30)
	  lhzx      r0, r5, r24
	  mulli     r0, r0, 0xE8
	  lbzx      r0, r6, r0
	  stw       r0, 0x8(r31)
	  bl        0x8E0
	  stb       r3, 0x18(r31)
	  mr        r3, r30
	  mr        r4, r29
	  bl        0xAF4
	  stb       r3, 0x22(r31)
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x94C
	  stw       r3, 0x28(r31)
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x4C
	  bl        0x120C
	  lwz       r0, 0x4C(r1)
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x44
	  stw       r0, 0x50(r1)
	  lhz       r0, 0x50(r1)
	  lbz       r6, 0x52(r1)
	  sth       r0, 0x78(r31)
	  lbz       r0, 0x53(r1)
	  stb       r6, 0x7A(r31)
	  stb       r0, 0x7B(r31)
	  bl        0x1258
	  lwz       r0, 0x44(r1)
	  mr        r3, r30
	  mr        r4, r29
	  stw       r0, 0x48(r1)
	  lbz       r5, 0x48(r1)
	  lbz       r0, 0x49(r1)
	  stb       r5, 0x7C(r31)
	  lbz       r5, 0x4A(r1)
	  stb       r0, 0x7D(r31)
	  lbz       r0, 0x4B(r1)
	  stb       r5, 0x7E(r31)
	  stb       r0, 0x7F(r31)
	  bl        0x12A0
	  stb       r3, 0x80(r31)
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r19, 0x70(r31)
	  bl        0xCC8
	  lwz       r12, 0x0(r19)
	  mr        r4, r3
	  mr        r3, r19
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  lwz       r4, 0x4(r30)
	  li        r22, 0
	  lhzx      r3, r3, r24
	  mulli     r3, r3, 0xE8
	  add       r3, r4, r3
	  lbz       r3, 0x6(r3)
	  stb       r3, 0xF(r31)
	  stb       r0, 0x294(r1)
	  b         .loc_0x360

	.loc_0x278:
	  mr        r3, r30
	  mr        r4, r29
	  bl        0xA48
	  mr        r0, r3
	  mr        r3, r27
	  mr        r21, r0
	  mr        r4, r21
	  bl        -0x9DB8
	  mr.       r19, r3
	  li        r5, 0
	  beq-      .loc_0x324
	  lis       r5, 0x5449
	  mr        r4, r19
	  mr        r6, r26
	  addi      r3, r1, 0x294
	  addi      r5, r5, 0x4D47
	  bl        -0x21234
	  mr.       r5, r3
	  bne-      .loc_0x2E8
	  cmplwi    r26, 0
	  beq-      .loc_0x2E8
	  lis       r5, 0x5449
	  mr        r4, r19
	  addi      r3, r1, 0x294
	  li        r6, 0
	  addi      r5, r5, 0x4D47
	  bl        -0x2125C
	  mr        r5, r3

	.loc_0x2E8:
	  cmplwi    r5, 0
	  bne-      .loc_0x324
	  lwz       r0, -0x76B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x324
	  mr        r3, r27
	  mr        r4, r21
	  bl        -0x9DF4
	  mr        r4, r3
	  addi      r3, r1, 0x190
	  bl        0x7709C
	  lwz       r3, -0x76B0(r13)
	  addi      r4, r1, 0x190
	  bl        -0x9F6C
	  mr        r5, r3

	.loc_0x324:
	  lwz       r3, 0x70(r31)
	  rlwinm    r19,r22,0,24,31
	  mr        r4, r19
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x70(r31)
	  mr        r4, r19
	  mr        r5, r21
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  addi      r22, r22, 0x1

	.loc_0x360:
	  rlwinm    r5,r22,0,24,31
	  cmplw     r5, r25
	  blt+      .loc_0x278
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x99C
	  mr        r0, r3
	  lwz       r3, 0x70(r31)
	  mr        r4, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r23
	  bl        -0x9ED4
	  mr.       r19, r3
	  li        r4, 0
	  beq-      .loc_0x454
	  lis       r5, 0x464F
	  mr        r4, r19
	  mr        r6, r26
	  addi      r3, r1, 0x294
	  addi      r5, r5, 0x4E54
	  bl        -0x21350
	  mr.       r4, r3
	  bne-      .loc_0x404
	  cmplwi    r26, 0
	  beq-      .loc_0x404
	  lis       r5, 0x464F
	  mr        r4, r19
	  addi      r3, r1, 0x294
	  li        r6, 0
	  addi      r5, r5, 0x4E54
	  bl        -0x21378
	  mr        r4, r3

	.loc_0x404:
	  cmplwi    r4, 0
	  bne-      .loc_0x454
	  lwz       r0, -0x76B0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x454
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r23
	  bl        -0x9F24
	  mr        r4, r3
	  addi      r3, r1, 0x8C
	  bl        0x76F6C
	  lwz       r3, -0x76B0(r13)
	  addi      r4, r1, 0x8C
	  bl        -0xA09C
	  mr        r4, r3

	.loc_0x454:
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  li        r19, 0
	  b         .loc_0x4A8

	.loc_0x470:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x3C
	  bl        0x8D4
	  lwz       r0, 0x3C(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x40
	  stw       r0, 0x40(r1)
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x4A8:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x470
	  lwz       r22, 0x4(r30)
	  li        r26, 0
	  lwz       r21, 0x8(r30)
	  b         .loc_0x59C

	.loc_0x4C4:
	  lhzx      r0, r24, r21
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x60
	  mulli     r0, r0, 0xE8
	  add       r27, r22, r0
	  bl        0xA54
	  lwz       r3, 0x60(r1)
	  rlwinm    r23,r26,0,24,31
	  lwz       r0, 0x64(r1)
	  mr        r4, r23
	  stw       r3, 0x68(r1)
	  addi      r5, r1, 0x68
	  stw       r0, 0x6C(r1)
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r3,r23,1,0,30
	  addi      r25, r3, 0xBA
	  lhzx      r0, r27, r25
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x598
	  lwz       r3, 0x70(r31)
	  rlwinm    r4,r0,2,14,29
	  lwz       r5, 0x48(r30)
	  addi      r0, r4, 0x1
	  lwz       r12, 0x0(r3)
	  mr        r4, r23
	  lbzx      r19, r5, r0
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lbz       r6, 0x7(r3)
	  rlwinm    r0,r19,2,22,29
	  lwz       r5, 0x48(r30)
	  mr        r4, r23
	  rlwinm    r6,r6,0,30,27
	  or        r0, r6, r0
	  stb       r0, 0x7(r3)
	  lwz       r3, 0x70(r31)
	  lhzx      r0, r27, r25
	  lwz       r12, 0x0(r3)
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0x60(r12)
	  lbzx      r19, r5, r0
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x7(r3)
	  rlwinm    r0,r0,0,0,29
	  or        r0, r0, r19
	  stb       r0, 0x7(r3)

	.loc_0x598:
	  addi      r26, r26, 0x1

	.loc_0x59C:
	  rlwinm    r6,r26,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x4C4
	  li        r19, 0
	  b         .loc_0x5EC

	.loc_0x5B0:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x34
	  rlwinm    r6,r19,0,24,31
	  bl        0x89C
	  lwz       r0, 0x34(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x38
	  stw       r0, 0x38(r1)
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x5EC:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x5B0
	  li        r21, 0
	  b         .loc_0x638

	.loc_0x600:
	  lwz       r19, 0x70(r31)
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x58
	  rlwinm    r6,r21,0,24,31
	  bl        0x7B0
	  mr        r3, r19
	  rlwinm    r4,r21,0,24,31
	  lwz       r12, 0x0(r19)
	  addi      r5, r1, 0x58
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r21, r21, 0x1

	.loc_0x638:
	  rlwinm    r0,r21,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x600
	  li        r19, 0
	  b         .loc_0x688

	.loc_0x64C:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x8
	  rlwinm    r6,r19,0,24,31
	  bl        0x994
	  lbz       r0, 0x8(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0xC
	  stb       r0, 0xC(r1)
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x688:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x64C
	  li        r19, 0
	  b         .loc_0x6E4

	.loc_0x69C:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x2C
	  rlwinm    r6,r19,0,24,31
	  bl        .loc_0x9C8
	  lwz       r3, 0x2C(r1)
	  rlwinm    r0,r19,2,22,29
	  add       r4, r31, r0
	  addi      r19, r19, 0x1
	  stw       r3, 0x30(r1)
	  lbz       r3, 0x30(r1)
	  lbz       r0, 0x31(r1)
	  stb       r3, 0x10(r4)
	  lbz       r3, 0x32(r1)
	  stb       r0, 0x11(r4)
	  lbz       r0, 0x33(r1)
	  stb       r3, 0x12(r4)
	  stb       r0, 0x13(r4)

	.loc_0x6E4:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x69C
	  li        r19, 0
	  b         .loc_0x720

	.loc_0x6F8:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x1C
	  rlwinm    r6,r19,0,24,31
	  bl        0x394
	  rlwinm    r0,r19,1,23,30
	  lhz       r4, 0x1C(r1)
	  add       r3, r31, r0
	  addi      r19, r19, 0x1
	  sth       r4, 0x1A(r3)

	.loc_0x720:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x6F8
	  li        r19, 0
	  b         .loc_0x774

	.loc_0x734:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x28
	  rlwinm    r6,r19,0,24,31
	  bl        0x3E4
	  lwz       r3, 0x28(r1)
	  rlwinm    r0,r19,2,22,29
	  add       r4, r31, r0
	  addi      r19, r19, 0x1
	  stw       r3, 0x54(r1)
	  lbz       r0, 0x54(r1)
	  lbz       r3, 0x55(r1)
	  stb       r0, 0x2C(r4)
	  lbz       r0, 0x56(r1)
	  stb       r3, 0x2D(r4)
	  stb       r0, 0x2E(r4)

	.loc_0x774:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x734
	  li        r19, 0
	  b         .loc_0x7A8

	.loc_0x788:
	  mr        r3, r30
	  mr        r4, r29
	  rlwinm    r5,r19,0,24,31
	  bl        0x408
	  rlwinm    r0,r19,2,22,29
	  addi      r19, r19, 0x1
	  add       r4, r31, r0
	  stw       r3, 0x4C(r4)

	.loc_0x7A8:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x788
	  lwz       r3, 0x8(r30)
	  li        r21, 0
	  lwz       r4, 0x4(r30)
	  lhzx      r0, r3, r24
	  mulli     r0, r0, 0xE8
	  add       r19, r4, r0
	  b         .loc_0x7F4

	.loc_0x7D0:
	  lwz       r3, 0x70(r31)
	  rlwinm    r4,r21,0,24,31
	  addi      r0, r4, 0x52
	  lwz       r12, 0x0(r3)
	  lbzx      r5, r19, r0
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r21, r21, 0x1

	.loc_0x7F4:
	  rlwinm    r0,r21,0,24,31
	  cmplw     r0, r28
	  blt+      .loc_0x7D0
	  li        r21, 0
	  b         .loc_0x82C

	.loc_0x808:
	  lwz       r3, 0x70(r31)
	  rlwinm    r4,r21,0,24,31
	  addi      r0, r4, 0x62
	  lwz       r12, 0x0(r3)
	  lbzx      r5, r19, r0
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r21, r21, 0x1

	.loc_0x82C:
	  rlwinm    r0,r21,0,24,31
	  cmplw     r0, r28
	  blt+      .loc_0x808
	  lwz       r0, 0xC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x84C
	  cmpwi     r20, 0
	  beq-      .loc_0x9B0

	.loc_0x84C:
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x838
	  mr        r0, r3
	  lwz       r3, 0x74(r31)
	  mr        r19, r0
	  lwz       r12, 0x0(r3)
	  mr        r4, r19
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r20,r19,0,24,31
	  li        r21, 0
	  b         .loc_0x8B8

	.loc_0x884:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x70
	  rlwinm    r6,r21,0,24,31
	  bl        0x890
	  lwz       r3, 0x74(r31)
	  rlwinm    r4,r21,0,24,31
	  addi      r5, r1, 0x70
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r21, r21, 0x1

	.loc_0x8B8:
	  rlwinm    r0,r21,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x884
	  rlwinm    r20,r19,0,24,31
	  li        r21, 0
	  b         .loc_0x90C

	.loc_0x8D0:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x14
	  rlwinm    r6,r21,0,24,31
	  bl        0x7DC
	  lhz       r0, 0x14(r1)
	  rlwinm    r4,r21,0,24,31
	  addi      r5, r1, 0x18
	  sth       r0, 0x18(r1)
	  lwz       r3, 0x74(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  addi      r21, r21, 0x1

	.loc_0x90C:
	  rlwinm    r0,r21,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x8D0
	  rlwinm    r20,r19,0,24,31
	  li        r19, 0
	  b         .loc_0x958

	.loc_0x924:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x10
	  rlwinm    r6,r19,0,24,31
	  bl        0xA28
	  lwz       r3, 0x74(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x10
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x958:
	  rlwinm    r0,r19,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x924
	  li        r19, 0
	  b         .loc_0x9A4

	.loc_0x96C:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x20
	  bl        0x898
	  lwz       r0, 0x20(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x24
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x9A4:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x96C

	.loc_0x9B0:
	  mr        r3, r31
	  lmw       r19, 0x39C(r1)
	  lwz       r0, 0x3D4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x3D0
	  blr

	.loc_0x9C8:
	*/
}

/**
 * @note Address: 0x80053E74
 * @note Size: 0x9C
 */
JUtility::TColor J2DMaterialFactory::newMatColor(int idx, int colorIdx) const
{
	GXColor white             = { 255, 255, 255, 255 };
	JUtility::TColor jutWhite = GXColor(white);

	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mMatColorIdx[colorIdx] != 0xFFFF) {
		return mMatColor[initData->mMatColorIdx[colorIdx]];
	}
	return jutWhite;
}

/**
 * @note Address: 0x80053F10
 * @note Size: 0x38
 */
u8 J2DMaterialFactory::newColorChanNum(int idx) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mColorChanIdx != 0xFF) {
		return mColorChanNum[initData->mColorChanIdx];
	}
	return 0;
}

/**
 * @note Address: 0x80053F48
 * @note Size: 0x54
 */
J2DColorChan J2DMaterialFactory::newColorChan(int idx, int chan) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mColorChanInfoIdx[chan] != 0xFFFF) {
		return J2DColorChan(mColorChanInfo[initData->mColorChanInfoIdx[chan] * 2]);
	}
	return J2DColorChan();
}

/**
 * @note Address: 0x80053F9C
 * @note Size: 0x38
 */
u32 J2DMaterialFactory::newTexGenNum(int idx) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mTexGenIdx != 0xFF) {
		return mTexGenNum[initData->mTexGenIdx];
	}
	return 0;
}

/**
 * @note Address: 0x80053FD4
 * @note Size: 0x74
 */
J2DTexCoord J2DMaterialFactory::newTexCoord(int idx, int texCoord) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mTexCoordIdx[texCoord] != 0xFFFF) {
		return J2DTexCoord(mTexCoordInfo[initData->mTexCoordIdx[texCoord]]);
	}
	return J2DTexCoord();
}

/**
 * @note Address: 0x80054048
 * @note Size: 0xEC
 */
J2DTexMtx* J2DMaterialFactory::newTexMtx(int idx, int texMtx) const
{
	J2DTexMtx* mtx                = nullptr;
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mTexMtxIdx[texMtx] != 0xFFFF) {
		mtx = new J2DTexMtx(mTexMtxInfo[initData->mTexMtxIdx[texMtx]]);
		mtx->calc();
	}
	return mtx;
}

/**
 * @note Address: 0x80054134
 * @note Size: 0x40
 */
u8 J2DMaterialFactory::newCullMode(int idx) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mCullModeIdx != 0xFF) {
		return mCullMode[initData->mCullModeIdx];
	}
	return GX_CULL_INVALID;
}

/**
 * @note Address: 0x80054174
 * @note Size: 0x48
 */
u16 J2DMaterialFactory::newTexNo(int idx, int p2) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mTexNoIdx[p2] != 0xFFFF) {
		return mTexNo[initData->mTexNoIdx[p2]];
	}
	return 0x1FFFF;
}

/**
 * @note Address: 0x800541BC
 * @note Size: 0x40
 */
u16 J2DMaterialFactory::newFontNo(int idx) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mFontNoIdx != 0xFFFF) {
		return mFontNo[initData->mFontNoIdx];
	}
	return 0xFFFF;
}

/**
 * @note Address: 0x800541FC
 * @note Size: 0x74
 */
J2DTevOrder J2DMaterialFactory::newTevOrder(int idx, int p2) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mTevOrderInfoIdx[p2] != 0xFFFF) {
		return J2DTevOrder(mTevOrderInfo[initData->mTevOrderInfoIdx[p2]]);
	}
	return J2DTevOrder();
}

/**
 * @note Address: 0x80054270
 * @note Size: 0x98
 */
J2DGXColorS10 J2DMaterialFactory::newTevColor(int idx, int p2) const
{
	J2DGXColorS10 color           = J2DGXColorS10(GXColorS10());
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mTevColorIdx[p2] != 0xFFFF) {
		return mTevColor[initData->mTevColorIdx[p2]];
	}
	return color;
	/*
	stwu     r1, -0x10(r1)
	slwi     r0, r6, 1
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	lwz      r8, lbl_80520E40@sda21(r2)
	lhzx     r5, r7, r5
	lwz      r7, lbl_80520E44@sda21(r2)
	mulli    r5, r5, 0xe8
	lwz      r6, 4(r4)
	stw      r8, 8(r1)
	addi     r5, r5, 0x92
	stw      r7, 0xc(r1)
	add      r0, r5, r0
	lha      r7, 0xa(r1)
	lhzx     r0, r6, r0
	lha      r5, 0xc(r1)
	cmplwi   r0, 0xFFFF
	lha      r6, 0xe(r1)
	beq      lbl_800542EC
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
	b        lbl_80054300

lbl_800542EC:
	lha      r0, 8(r1)
	sth      r0, 0(r3)
	sth      r7, 2(r3)
	sth      r5, 4(r3)
	sth      r6, 6(r3)

lbl_80054300:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80054308
 * @note Size: 0x9C
 */
JUtility::TColor J2DMaterialFactory::newTevKColor(int idx, int p2) const
{
	GXColor white                 = { 0xFF, 0xFF, 0xFF, 0xFF };
	JUtility::TColor jutWhite     = GXColor(white);
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mTevKColorIdx[p2] != 0xFFFF) {
		return mTevKColor[initData->mTevKColorIdx[p2]];
	}
	return jutWhite;
}

/**
 * @note Address: 0x800543A4
 * @note Size: 0x38
 */
u8 J2DMaterialFactory::newTevStageNum(int idx) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mTevStageIdx != 0xFF) {
		return mTevStageNum[initData->mTevStageIdx];
	}
	return 0xFF;
}

/**
 * @note Address: 0x800543DC
 * @note Size: 0x60
 */
J2DTevStage J2DMaterialFactory::newTevStage(int idx, int p2) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mTevStageInfoIdx[p2] != 0xFFFF) {
		return J2DTevStage(mTevStageInfo[initData->mTevStageInfoIdx[p2]]); // this needs fixing
	}
	return J2DTevStage();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	stw      r0, 0x14(r1)
	slwi     r0, r6, 1
	lwz      r6, 4(r4)
	lhzx     r5, r7, r5
	mulli    r5, r5, 0xe8
	addi     r5, r5, 0x9a
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xFFFF
	beq      lbl_80054428
	mulli    r0, r0, 0x14
	lwz      r4, 0x44(r4)
	add      r4, r4, r0
	bl       __ct__11J2DTevStageFRC15J2DTevStageInfo
	b        lbl_8005442C

lbl_80054428:
	bl       __ct__11J2DTevStageFv

lbl_8005442C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8005449C
 * @note Size: 0x9C
 */
J2DTevSwapModeTable J2DMaterialFactory::newTevSwapModeTable(int idx, int p2) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mTevSwapModeTableInfoIdx[p2] != 0xFFFF) {
		return J2DTevSwapModeTable(mTevSwapTableInfo[initData->mTevSwapModeTableInfoIdx[p2]]);
	}
	return J2DTevSwapModeTable(j2dDefaultTevSwapModeTable);
	/*
	lwz      r7, 8(r4)
	slwi     r5, r5, 1
	slwi     r0, r6, 1
	lwz      r6, 4(r4)
	lhzx     r5, r7, r5
	mulli    r5, r5, 0xe8
	addi     r5, r5, 0xda
	add      r0, r5, r0
	lhzx     r0, r6, r0
	cmplwi   r0, 0xFFFF
	beq      lbl_80054504
	lwz      r4, 0x4c(r4)
	rlwinm   r0, r0, 2, 0xe, 0x1d
	add      r6, r4, r0
	lbz      r5, 2(r6)
	lbz      r0, 1(r6)
	lbz      r4, 0(r6)
	slwi     r5, r5, 2
	slwi     r0, r0, 4
	lbz      r6, 3(r6)
	add      r0, r0, r5
	slwi     r4, r4, 6
	add      r0, r0, r6
	add      r0, r4, r0
	stb      r0, 0(r3)
	blr

lbl_80054504:
	addi     r6, r2, j2dDefaultTevSwapModeTable@sda21
	lbz      r4, j2dDefaultTevSwapModeTable@sda21(r2)
	lbz      r5, 2(r6)
	lbz      r0, 1(r6)
	slwi     r4, r4, 6
	slwi     r5, r5, 2
	lbz      r6, 3(r6)
	slwi     r0, r0, 4
	add      r0, r0, r5
	add      r0, r0, r6
	add      r0, r4, r0
	stb      r0, 0(r3)
	blr
	*/
}

/**
 * @note Address: 0x80054538
 * @note Size: 0x30
 */
u8 J2DMaterialFactory::newIndTexStageNum(int idx) const
{
	if (mIndInitData && mIndInitData[idx]._00 == 1) {
		return mIndInitData[idx].mIndTexStageNum;
	}
	return 0;
}

/**
 * @note Address: 0x80054568
 * @note Size: 0x68
 */
J2DIndTexOrder J2DMaterialFactory::newIndTexOrder(int idx, int p2) const
{
	J2DIndTexOrder texOrder;
	if (mIndInitData && mIndInitData[idx]._00 == 1) {
		return J2DIndTexOrder(mIndInitData[idx].mIndTexOrderInfo[p2]);
	}
	return texOrder;
}

/**
 * @note Address: 0x800545D0
 * @note Size: 0xEC
 */
J2DIndTexMtx J2DMaterialFactory::newIndTexMtx(int idx, int p2) const
{
	J2DIndTexMtx mtx;
	if (mIndInitData && mIndInitData[idx]._00 == 1) {
		return J2DIndTexMtx(mIndInitData[idx].mIndTexMtxInfo[p2]);
	}
	return mtx;
	/*
	stwu     r1, -0x30(r1)
	lis      r7, j2dDefaultIndTexMtxInfo@ha
	lwz      r8, 0xc(r4)
	addi     r4, r7, j2dDefaultIndTexMtxInfo@l
	lfs      f2, 0(r4)
	lfs      f1, 4(r4)
	cmplwi   r8, 0
	lfs      f0, 8(r4)
	stfs     f2, 8(r1)
	lfs      f2, 0xc(r4)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x10(r4)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x14(r4)
	lbz      r0, 0x18(r4)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stb      r0, 0x20(r1)
	beq      lbl_8005467C
	mulli    r0, r5, 0x128
	add      r5, r8, r0
	lbz      r0, 0(r5)
	cmplwi   r0, 1
	bne      lbl_8005467C
	mulli    r4, r6, 0x1c
	addi     r4, r4, 0xc
	add      r4, r5, r4
	lfs      f0, 0(r4)
	stfs     f0, 0(r3)
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	stfs     f0, 8(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r3)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x14(r3)
	lbz      r0, 0x18(r4)
	stb      r0, 0x18(r3)
	b        lbl_800546B4

lbl_8005467C:
	lwz      r0, 8(r1)
	lwz      r4, 0xc(r1)
	stw      r0, 0(r3)
	lwz      r0, 0x10(r1)
	stw      r4, 4(r3)
	lwz      r4, 0x14(r1)
	stw      r0, 8(r3)
	lwz      r0, 0x18(r1)
	stw      r4, 0xc(r3)
	lwz      r4, 0x1c(r1)
	stw      r0, 0x10(r3)
	lwz      r0, 0x20(r1)
	stw      r4, 0x14(r3)
	stw      r0, 0x18(r3)

lbl_800546B4:
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x800546BC
 * @note Size: 0x14C
 */
J2DIndTevStage J2DMaterialFactory::newIndTevStage(int idx, int p2) const
{
	J2DIndTevStage tevStage;
	if (mIndInitData && mIndInitData[idx]._00 == 1) {
		return J2DIndTevStage(mIndInitData[idx].mIndTevStageInfo[p2]);
	}
	return tevStage;
	/*
	stwu     r1, -0x30(r1)
	lis      r7, j2dDefaultIndTevStageInfo@ha
	lwz      r0, 0xc(r4)
	addi     r8, r7, j2dDefaultIndTevStageInfo@l
	stw      r31, 0x2c(r1)
	cmplwi   r0, 0
	lwz      r7, 4(r8)
	lwz      r4, 8(r8)
	stw      r7, 0x18(r1)
	lwz      r7, 0(r8)
	stw      r4, 0x1c(r1)
	lbz      r4, 0x1b(r1)
	stw      r7, 0x14(r1)
	lbz      r7, 0x1c(r1)
	slwi     r4, r4, 0x15
	lbz      r8, 0x1a(r1)
	slwi     r7, r7, 0x16
	lbz      r9, 0x17(r1)
	or       r4, r7, r4
	slwi     r8, r8, 0x14
	lbz      r10, 0x19(r1)
	or       r4, r8, r4
	slwi     r7, r9, 0x10
	lbz      r11, 0x18(r1)
	lbz      r12, 0x16(r1)
	or       r4, r7, r4
	slwi     r8, r10, 0xb
	lbz      r31, 0x15(r1)
	or       r4, r8, r4
	slwi     r9, r11, 8
	or       r4, r9, r4
	slwi     r7, r12, 4
	slwi     r8, r31, 2
	lbz      r9, 0x14(r1)
	or       r4, r7, r4
	or       r4, r8, r4
	or       r7, r9, r4
	beq      lbl_800547F8
	mulli    r4, r5, 0x128
	add      r5, r0, r4
	lbz      r0, 0(r5)
	cmplwi   r0, 1
	bne      lbl_800547F8
	mulli    r4, r6, 0xc
	addi     r0, r4, 0x68
	add      r5, r5, r0
	lwz      r4, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 0xc(r1)
	lwz      r4, 0(r5)
	stw      r0, 0x10(r1)
	lbz      r0, 0xf(r1)
	stw      r4, 8(r1)
	lbz      r4, 0x10(r1)
	slwi     r0, r0, 0x15
	lbz      r5, 0xe(r1)
	slwi     r4, r4, 0x16
	lbz      r6, 0xb(r1)
	lbz      r7, 0xd(r1)
	slwi     r5, r5, 0x14
	or       r0, r4, r0
	lbz      r8, 0xc(r1)
	lbz      r9, 0xa(r1)
	slwi     r4, r6, 0x10
	or       r0, r5, r0
	lbz      r10, 9(r1)
	slwi     r5, r7, 0xb
	slwi     r6, r8, 8
	or       r0, r4, r0
	slwi     r4, r9, 4
	or       r0, r5, r0
	slwi     r5, r10, 2
	or       r0, r6, r0
	lbz      r6, 8(r1)
	or       r0, r4, r0
	or       r0, r5, r0
	or       r0, r6, r0
	stw      r0, 0(r3)
	b        lbl_800547FC

lbl_800547F8:
	stw      r7, 0(r3)

lbl_800547FC:
	lwz      r31, 0x2c(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80054808
 * @note Size: 0x68
 */
J2DIndTexCoordScale J2DMaterialFactory::newIndTexCoordScale(int idx, int p2) const
{
	J2DIndTexCoordScale coordScale;
	if (mIndInitData && mIndInitData[idx]._00 == 1) {
		return J2DIndTexCoordScale(mIndInitData[idx].mIndTexCoordScaleInfo[p2]);
	}
	return coordScale;
}

/**
 * @note Address: 0x80054870
 * @note Size: 0x7C
 */
J2DAlphaComp J2DMaterialFactory::newAlphaComp(int idx) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mAlphaCompInfoIdx != 0xFFFF) {
		return J2DAlphaComp(mAlphaCompInfo[initData->mAlphaCompInfoIdx]);
	}
	return J2DAlphaComp();
	/*
	lwz      r6, 8(r4)
	slwi     r0, r5, 1
	lwz      r7, 4(r4)
	lhzx     r0, r6, r0
	mulli    r5, r0, 0xe8
	addi     r0, r5, 0xe2
	lhzx     r0, r7, r0
	cmplwi   r0, 0xFFFF
	beq      lbl_800548D4
	lwz      r4, 0x50(r4)
	rlwinm   r0, r0, 3, 0xd, 0x1c
	add      r6, r4, r0
	lbz      r4, 0(r6)
	lbz      r0, 2(r6)
	slwi     r4, r4, 5
	lbz      r5, 3(r6)
	slwi     r0, r0, 3
	or       r0, r4, r0
	or       r0, r5, r0
	sth      r0, 0(r3)
	lbz      r0, 1(r6)
	stb      r0, 2(r3)
	lbz      r0, 4(r6)
	stb      r0, 3(r3)
	blr

lbl_800548D4:
	lhz      r4, j2dDefaultAlphaCmp@sda21(r2)
	li       r0, 0
	sth      r4, 0(r3)
	stb      r0, 2(r3)
	stb      r0, 3(r3)
	blr
	*/
}

/**
 * @note Address: 0x800548EC
 * @note Size: 0x7C
 */
J2DBlend J2DMaterialFactory::newBlend(int idx) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mBlendInfoIdx != 0xFFFF) {
		return J2DBlend(mBlendInfo[initData->mBlendInfoIdx]);
	}
	return J2DBlend();
}

/**
 * @note Address: 0x80054968
 * @note Size: 0x38
 */
u8 J2DMaterialFactory::newDither(int idx) const
{
	J2DMaterialInitData* initData = &mMaterialInitData[mMatIndexTable[idx]];
	if (initData->mDitherIdx != 0xFF) {
		return mDither[initData->mDitherIdx];
	}
	return 0;
}
