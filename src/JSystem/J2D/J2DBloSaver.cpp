#include "JSystem/J2D/J2DBloSaver.h"
#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTypes.h"
#include "types.h"

J2DBloSaver::CTextureNameConnect J2DBloSaver::TextureNameConnect;

/**
 * @note Address: N/A
 * @note Size: 0x1158
 */
void J2DBloSaver::writeMaterialBlock(const MaterialName*, J2DMaterial**, u16, const ResTIMGName*, u16)
{
	// obviously much much more than this, but need to spawn weak functions
	J2DTevBlock* block;
	block->setTexNo(0, 0);
	u16 texNo = block->getTexNo(0);
}

/**
 * @note Address: N/A
 * @note Size: 0x44C
 */
void J2DMaterial_SaveBlock::countParts(J2DMaterial**, u16)
{
	// obviously much much more than this, but need to spawn weak functions
	J2DTevBlock* block;
	block->getFontNo();
	block->getTevOrder(0);
	block->getTevSwapModeTable(0);
}

/**
 * @note Address: N/A
 * @note Size: 0x3FC
 */
void J2DMaterial_SaveBlock::setOffset(J2DMaterial**, u16, JUTNameTab*)
{
	// obviously much much more than this, but need to spawn weak functions
	J2DIndBlock* block;
	block->getIndTexStageNum();
}

/**
 * @note Address: 0x80049518
 * @note Size: 0x50
 */
J2DBloSaver::CTextureNameConnect::~CTextureNameConnect() { clear(); }

/**
 * @note Address: 0x80049568
 * @note Size: 0x70
 */
void J2DBloSaver::CTextureNameConnect::clear()
{
	TNC* element;
	TNC* next;
	for (element = mElements; element != nullptr; element = next) {
		next = element->mNext;
		delete element;
	}
	mElements = nullptr;
}

/**
 * @note Address: 0x800495D8
 * @note Size: 0x68
 */
J2DTevStage::J2DTevStage()
{
	setTevStageInfo(j2dDefaultTevStageInfo);
	setTevSwapModeInfo(j2dDefaultTevSwapMode);
}

/**
 * @note Address: 0x80049640
 * @note Size: 0x1E0
 */
void J2DTevStage::setTevStageInfo(const J2DTevStageInfo& info)
{
	setTevColorAB(info.mColorA, info.mColorB);
	setTevColorCD(info.mColorC, info.mColorD);
	setTevColorOp(info.mCOp, info.mCBias, info.mCScale, info.mCClamp, info.mCReg);

	setTevColorAB(info.mColorA, info.mColorB);
	setTevColorCD(info.mColorC, info.mColorD);
	setAlphaABCD(info.mAlphaA, info.mAlphaB, info.mAlphaC, info.mAlphaD);
	setTevAlphaOp(info.mAOp, info.mABias, info.mAScale, info.mAClamp, info.mAReg);

	/*
	stwu     r1, -0x10(r1)
	lbz      r5, 1(r4)
	stw      r31, 0xc(r1)
	lbz      r0, 2(r4)
	slwi     r5, r5, 4
	stw      r30, 8(r1)
	or       r5, r5, r0
	lbz      r6, 3(r4)
	lbz      r7, 4(r4)
	rlwinm   r0, r6, 4, 0x14, 0x1b
	stb      r5, 2(r3)
	or       r0, r0, r7
	lbz      r6, 5(r4)
	stb      r0, 3(r3)
	rlwinm   r0, r6, 2, 0x16, 0x1d
	cmplwi   r6, 1
	lbz      r5, 1(r3)
	lbz      r10, 9(r4)
	rlwinm   r5, r5, 0, 0x1e, 0x1c
	lbz      r9, 8(r4)
	or       r0, r5, r0
	lbz      r8, 7(r4)
	stb      r0, 1(r3)
	lbz      r7, 6(r4)
	bgt      lbl_800496CC
	lbz      r5, 1(r3)
	rlwinm   r0, r8, 4, 0x14, 0x1b
	rlwinm   r5, r5, 0, 0x1c, 0x19
	or       r0, r5, r0
	stb      r0, 1(r3)
	lbz      r0, 1(r3)
	rlwinm   r0, r0, 0, 0, 0x1d
	or       r0, r0, r7
	stb      r0, 1(r3)
	b        lbl_800496E8

lbl_800496CC:
	lbz      r0, 1(r3)
	rlwimi   r0, r6, 3, 0x1a, 0x1b
	stb      r0, 1(r3)
	lbz      r0, 1(r3)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 3
	stb      r0, 1(r3)

lbl_800496E8:
	lbz      r0, 1(r3)
	rlwinm   r5, r9, 3, 0x15, 0x1c
	lbz      r8, 0xc(r4)
	rlwinm   r6, r10, 6, 0x12, 0x19
	rlwinm   r7, r0, 0, 0x1d, 0x1b
	lbz      r0, 0xe(r4)
	or       r7, r7, r5
	lbz      r5, 0xa(r4)
	stb      r7, 1(r3)
	rlwinm   r9, r8, 7, 0x11, 0x18
	slwi     r12, r5, 5
	lbz      r7, 0xb(r4)
	lbz      r5, 1(r3)
	rlwinm   r10, r8, 0x1f, 0x19, 0x1f
	lbz      r31, 0xd(r4)
	rlwinm   r11, r7, 2, 0x16, 0x1d
	rlwimi   r6, r5, 0, 0x1a, 0x1f
	lbz      r30, 0x10(r4)
	stb      r6, 1(r3)
	rlwinm   r8, r31, 4, 0x14, 0x1b
	lbz      r6, 0x12(r4)
	rlwinm   r7, r0, 2, 0x16, 0x1d
	lbz      r5, 6(r3)
	cmplwi   r0, 1
	lbz      r31, 0xf(r4)
	rlwimi   r12, r5, 0, 0x1b, 0x1f
	lbz      r5, 0x11(r4)
	stb      r12, 6(r3)
	lbz      r12, 6(r3)
	rlwinm   r4, r12, 0, 0x1e, 0x1a
	or       r4, r4, r11
	stb      r4, 6(r3)
	lbz      r4, 6(r3)
	rlwinm   r4, r4, 0, 0, 0x1d
	or       r4, r4, r10
	stb      r4, 6(r3)
	lbz      r4, 7(r3)
	rlwimi   r9, r4, 0, 0x19, 0x1f
	stb      r9, 7(r3)
	lbz      r4, 7(r3)
	rlwinm   r4, r4, 0, 0x1c, 0x18
	or       r4, r4, r8
	stb      r4, 7(r3)
	lbz      r4, 5(r3)
	rlwinm   r4, r4, 0, 0x1e, 0x1c
	or       r4, r4, r7
	stb      r4, 5(r3)
	bgt      lbl_800497D0
	lbz      r4, 5(r3)
	rlwinm   r0, r30, 4, 0x14, 0x1b
	rlwinm   r4, r4, 0, 0, 0x1d
	or       r4, r4, r31
	stb      r4, 5(r3)
	lbz      r4, 5(r3)
	rlwinm   r4, r4, 0, 0x1c, 0x19
	or       r0, r4, r0
	stb      r0, 5(r3)
	b        lbl_800497EC

lbl_800497D0:
	lbz      r4, 5(r3)
	rlwimi   r4, r0, 3, 0x1a, 0x1b
	stb      r4, 5(r3)
	lbz      r0, 5(r3)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 3
	stb      r0, 5(r3)

lbl_800497EC:
	lbz      r7, 5(r3)
	rlwinm   r4, r5, 3, 0x15, 0x1c
	rlwinm   r0, r6, 6, 0x12, 0x19
	rlwinm   r5, r7, 0, 0x1d, 0x1b
	or       r4, r5, r4
	stb      r4, 5(r3)
	lbz      r4, 5(r3)
	rlwimi   r0, r4, 0, 0x1a, 0x1f
	stb      r0, 5(r3)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	addi     r1, r1, 0x10
	blr
	*/
}
