#include "Dolphin/os.h"
#include "JSystem/JAI/JAIBasic.h"
#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAI/JAInter/Fx.h"
#include "JSystem/JAS/JASDsp.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global initOnCodeFxScene__Q27JAInter2Fx
    initOnCodeFxScene__Q27JAInter2Fx:
        .skip 0x4
    .global mSceneMax__Q27JAInter2Fx
    mSceneMax__Q27JAInter2Fx:
        .skip 0x4
    .global mBufferSizeMax__Q27JAInter2Fx
    mBufferSizeMax__Q27JAInter2Fx:
        .skip 0x4
    .global mBufferPointer__Q27JAInter2Fx
    mBufferPointer__Q27JAInter2Fx:
        .skip 0x4
    .global mFxconfigTable__Q27JAInter2Fx
    mFxconfigTable__Q27JAInter2Fx:
        .skip 0x8
*/

JAInter::Fx::Init* JAInter::Fx::initOnCodeFxScene;
u8 JAInter::Fx::mSceneMax;
u32* JAInter::Fx::mBufferSizeMax;
s16** JAInter::Fx::mBufferPointer;
JASDsp::FxlineConfig_** JAInter::Fx::mFxconfigTable;

/*
 * --INFO--
 * Address:	800AD6CC
 * Size:	000160
 */
void JAInter::Fx::init()
{
	if (initOnCodeFxScene != nullptr) {
		mBufferSizeMax = new (JAIBasic::msCurrentHeap, 4) u32[4];
		mBufferPointer = new (JAIBasic::msCurrentHeap, 4) short*[4];
		Init* init     = initOnCodeFxScene;
		setSceneMax(init->m_sceneMax);
		setBufferMax(init->m_bufferMax1, init->m_bufferMax2, init->m_bufferMax3, init->m_bufferMax4);
		JKRHeap* heap = JAIBasic::msCurrentHeap;
		setTablePointer(new (heap, 0x20) void*[getSceneMax()]);
		for (u8 i = 0; i < getSceneMax(); i++) {
			setScenePointer(i, reinterpret_cast<u8*>(initOnCodeFxScene) + initOnCodeFxScene->m_scenePointerOffsets[i]);
		}
		for (u8 i = 0; i < 4; i++) {
			if (getBufferSizeMax(i) != 0) {
				heap = JAIBasic::msCurrentHeap;
				setBufferPointer(i, new (heap, 0x20) short[0xA0 * getBufferSizeMax(i)]);
				JASDsp::setFXLine(i, getBufferPointer(i), *(getFxconfigTable() + i));
			}
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r0, initOnCodeFxScene__Q27JAInter2Fx@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_800AD810
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r3, 0x10
	li       r5, 4
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, mBufferSizeMax__Q27JAInter2Fx@sda21(r13)
	li       r3, 0x10
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r5, 4
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, mBufferPointer__Q27JAInter2Fx@sda21(r13)
	lwz      r31, initOnCodeFxScene__Q27JAInter2Fx@sda21(r13)
	lwz      r0, 0(r31)
	clrlwi   r3, r0, 0x18
	bl       setSceneMax__Q27JAInter2FxFUc
	lwz      r3, 4(r31)
	lwz      r4, 8(r31)
	lwz      r5, 0xc(r31)
	lwz      r6, 0x10(r31)
	bl       setBufferMax__Q27JAInter2FxFUlUlUlUl
	lwz      r30, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getSceneMax__Q27JAInter2FxFv
	rlwinm   r3, r3, 2, 0x16, 0x1d
	mr       r4, r30
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	bl       setTablePointer__Q27JAInter2FxFPPv
	li       r30, 0
	b        lbl_800AD780

lbl_800AD760:
	rlwinm   r3, r30, 2, 0x16, 0x1d
	lwz      r4, initOnCodeFxScene__Q27JAInter2Fx@sda21(r13)
	addi     r0, r3, 0x14
	lwzx     r0, r31, r0
	mr       r3, r30
	add      r4, r4, r0
	bl       setScenePointer__Q27JAInter2FxFUcPv
	addi     r30, r30, 1

lbl_800AD780:
	bl       getSceneMax__Q27JAInter2FxFv
	clrlwi   r3, r3, 0x18
	clrlwi   r0, r30, 0x18
	cmplw    r0, r3
	blt      lbl_800AD760
	li       r29, 0
	b        lbl_800AD804

lbl_800AD79C:
	mr       r3, r29
	bl       getBufferSizeMax__Q27JAInter2FxFUc
	cmplwi   r3, 0
	beq      lbl_800AD800
	lwz      r30, msCurrentHeap__8JAIBasic@sda21(r13)
	mr       r3, r29
	bl       getBufferSizeMax__Q27JAInter2FxFUc
	mulli    r0, r3, 0xa0
	mr       r4, r30
	li       r5, 0x20
	rlwinm   r3, r0, 0, 0, 0x1e
	bl       __nwa__FUlP7JKRHeapi
	mr       r0, r3
	mr       r3, r29
	mr       r4, r0
	bl       setBufferPointer__Q27JAInter2FxFUcPs
	bl       getFxconfigTable__Q27JAInter2FxFv
	lwz      r30, 0(r3)
	mr       r3, r29
	rlwinm   r31, r29, 5, 0x13, 0x1a
	bl       getBufferPointer__Q27JAInter2FxFUc
	mr       r4, r3
	mr       r3, r29
	add      r5, r30, r31
	bl       setFXLine__6JASDspFUcPsPQ26JASDsp13FxlineConfig_

lbl_800AD800:
	addi     r29, r29, 1

lbl_800AD804:
	clrlwi   r0, r29, 0x18
	cmplwi   r0, 4
	blt      lbl_800AD79C

lbl_800AD810:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD82C
 * Size:	000008
 */
void JAInter::Fx::setSceneMax(u8 sceneMax) { mSceneMax = sceneMax; }

/*
 * --INFO--
 * Address:	800AD834
 * Size:	000024
 */
void JAInter::Fx::setBufferMax(u32 max1, u32 max2, u32 max3, u32 max4)
{
	mBufferSizeMax[0] = max1;
	mBufferSizeMax[1] = max2;
	mBufferSizeMax[2] = max3;
	mBufferSizeMax[3] = max4;
}

/*
 * --INFO--
 * Address:	800AD858
 * Size:	000008
 */
void JAInter::Fx::setTablePointer(void** tablePointer) { mFxconfigTable = reinterpret_cast<JASDsp::FxlineConfig_**>(tablePointer); }

/*
 * --INFO--
 * Address:	800AD860
 * Size:	000010
 */
void JAInter::Fx::setBufferPointer(u8 index, s16* bufferPointer) { mBufferPointer[index] = bufferPointer; }

/*
 * --INFO--
 * Address:	800AD870
 * Size:	000010
 */
void JAInter::Fx::setScenePointer(u8 index, void* scenePointer)
{
	mFxconfigTable[index] = static_cast<JASDsp::FxlineConfig_*>(scenePointer);
}

/*
 * --INFO--
 * Address:	800AD880
 * Size:	000008
 */
u8 JAInter::Fx::getSceneMax(void) { return mSceneMax; }

/*
 * --INFO--
 * Address:	800AD888
 * Size:	000010
 */
u32 JAInter::Fx::getBufferSizeMax(u8 index) { return mBufferSizeMax[index]; }

/*
 * --INFO--
 * Address:	800AD898
 * Size:	000010
 */
s16* JAInter::Fx::getBufferPointer(u8 index) { return mBufferPointer[index]; }

/*
 * --INFO--
 * Address:	800AD8A8
 * Size:	000008
 */
JASDsp::FxlineConfig_** JAInter::Fx::getFxconfigTable() { return mFxconfigTable; }

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JAInter::Fx::clearBuffer(u8 index)
{
	// UNUSED FUNCTION
	if (mBufferPointer != nullptr) {
		for (u32 i = 0; i < (mBufferSizeMax[index] * 0xA0) / 2; i++) {
			mBufferPointer[index][i] = 0;
		}
		DCFlushRange(mBufferPointer[index], (mBufferSizeMax[index] * 0xA0) >> 1);
	}
}

/*
 * --INFO--
 * Address:	800AD8B0
 * Size:	0000A0
 */
void JAInter::Fx::clearAllBuffer()
{
	for (u8 i = 0; i < 4; i++) {
		clearBuffer(i);
	}
}
