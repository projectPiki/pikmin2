#include "Dolphin/os.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/Fx.h"
#include "JSystem/JAudio/JAS/JASDsp.h"
#include "types.h"

JAInter::Fx::Init* JAInter::Fx::initOnCodeFxScene;
u8 JAInter::Fx::mSceneMax;
u32* JAInter::Fx::mBufferSizeMax;
s16** JAInter::Fx::mBufferPointer;
JASDsp::FxlineConfig_** JAInter::Fx::mFxconfigTable;

/**
 * @note Address: 0x800AD6CC
 * @note Size: 0x160
 */
void JAInter::Fx::init()
{
	if (initOnCodeFxScene) {
		mBufferSizeMax = new (JAIGetCurrentHeap(), 4) u32[4];
		mBufferPointer = new (JAIGetCurrentHeap(), 4) s16*[4];
		Init* init     = initOnCodeFxScene;
		setSceneMax(init->mSceneMax);
		setBufferMax(init->mBufferMax1, init->mBufferMax2, init->mBufferMax3, init->mBufferMax4);
		JKRHeap* heap = JAIGetCurrentHeap();
		setTablePointer(new (heap, 0x20) void*[getSceneMax()]);
		for (u8 i = 0; i < getSceneMax(); i++) {
			// Very questionable, but it works
			setScenePointer(i, (reinterpret_cast<u8*>(initOnCodeFxScene) + *(int*)((u8*)(&init->mScenePointerOffsets + i))));
		}
		for (u8 i = 0; i < 4; i++) {
			if (getBufferSizeMax(i) != 0) {
				s16* buf = new (JAIGetCurrentHeap(), 0x20) s16[ALIGN_PREV(getBufferSizeMax(i) * 160, 2) / 2];
				setBufferPointer(i, buf);
				JASDsp::setFXLine(i, getBufferPointer(i), &(getFxconfigTable()[0])[i]);
			}
		}
	}
}

/**
 * @note Address: 0x800AD82C
 * @note Size: 0x8
 */
void JAInter::Fx::setSceneMax(u8 sceneMax)
{
	mSceneMax = sceneMax;
}

/**
 * @note Address: 0x800AD834
 * @note Size: 0x24
 */
void JAInter::Fx::setBufferMax(u32 max1, u32 max2, u32 max3, u32 max4)
{
	mBufferSizeMax[0] = max1;
	mBufferSizeMax[1] = max2;
	mBufferSizeMax[2] = max3;
	mBufferSizeMax[3] = max4;
}

/**
 * @note Address: 0x800AD858
 * @note Size: 0x8
 */
void JAInter::Fx::setTablePointer(void** tablePointer)
{
	mFxconfigTable = reinterpret_cast<JASDsp::FxlineConfig_**>(tablePointer);
}

/**
 * @note Address: 0x800AD860
 * @note Size: 0x10
 */
void JAInter::Fx::setBufferPointer(u8 index, s16* bufferPointer)
{
	mBufferPointer[index] = bufferPointer;
}

/**
 * @note Address: 0x800AD870
 * @note Size: 0x10
 */
void JAInter::Fx::setScenePointer(u8 index, void* scenePointer)
{
	mFxconfigTable[index] = static_cast<JASDsp::FxlineConfig_*>(scenePointer);
}

/**
 * @note Address: 0x800AD880
 * @note Size: 0x8
 */
u8 JAInter::Fx::getSceneMax()
{
	return mSceneMax;
}

/**
 * @note Address: 0x800AD888
 * @note Size: 0x10
 */
u32 JAInter::Fx::getBufferSizeMax(u8 index)
{
	return mBufferSizeMax[index];
}

/**
 * @note Address: 0x800AD898
 * @note Size: 0x10
 */
s16* JAInter::Fx::getBufferPointer(u8 index)
{
	return mBufferPointer[index];
}

/**
 * @note Address: 0x800AD8A8
 * @note Size: 0x8
 */
JASDsp::FxlineConfig_** JAInter::Fx::getFxconfigTable()
{
	return mFxconfigTable;
}

/**
 * @note Address: N/A
 * @note Size: 0x80
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

/**
 * @note Address: 0x800AD8B0
 * @note Size: 0xA0
 */
void JAInter::Fx::clearAllBuffer()
{
	for (u8 i = 0; i < 4; i++) {
		clearBuffer(i);
	}
}
