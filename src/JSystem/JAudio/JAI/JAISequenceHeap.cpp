#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/HeapMgr.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "types.h"

JAInter::HeapBlock* JAInter::HeapMgr::sAutoHeap;
JAInter::HeapBlock* JAInter::HeapMgr::sStayHeap;
u32 JAInter::HeapMgr::sAutoHeapCount;
u32 JAInter::HeapMgr::sStayHeapCount;

/**
 * @note Address: 0x800B0340
 * @note Size: 0x254
 */
void JAInter::HeapMgr::init(u8 stayCount, u32 stayPtrSize, u8 autoCount, u32 autoPtrSize)
{
	sAutoHeap = new (JAIBasic::getCurrentJAIHeap(), 0x20) HeapBlock[autoCount];
	for (u32 i = 0; i < autoCount; i++) {
		sAutoHeap[i].setStatus(0);
		sAutoHeap[i].setHeapCount(0);
		sAutoHeap[i].setSoundID(-1);
		sAutoHeap[i].setUsedHeapID(-1);
		sAutoHeap[i].setPointer(new (JAIBasic::getCurrentJAIHeap(), 0x20) u8[autoPtrSize]);
	}

	sStayHeap           = new (JAIBasic::getCurrentJAIHeap(), 0x20) HeapBlock[stayCount];
	sStayHeap->mPointer = new (JAIBasic::getCurrentJAIHeap(), 0x20) u8[stayPtrSize];

	for (u32 i = 0; i < stayCount; i++) {
		sStayHeap[i].setStatus(0);
		sStayHeap[i].setHeapCount(0);
		sStayHeap[i].setSoundID(-1);
		sStayHeap[i].setUsedHeapID(-1);
	}
}

/**
 * @note Address: 0x800B0594
 * @note Size: 0x8
 */
JAInter::HeapBlock* JAInter::HeapMgr::getAutoHeapPointer()
{
	return sAutoHeap;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
JAInter::HeapBlock* JAInter::HeapMgr::getStayHeapPointer()
{
	// UNUSED FUNCTION
	return sStayHeap;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 JAInter::HeapMgr::getAutoHeapCount()
{
	// UNUSED FUNCTION
	return sAutoHeapCount;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 JAInter::HeapMgr::getStayHeapCount()
{
	// UNUSED FUNCTION
	return sStayHeapCount;
}

/**
 * @note Address: 0x800B059C
 * @note Size: 0x100
 */
void* JAInter::HeapMgr::checkOnMemory(u32 soundID, u8* outHeapIndex)
{
	for (u8 i = 0; i < JAIGlobalParameter::getParamAutoHeapMax(); i++) {
		if (soundID != sAutoHeap[i].mSoundID) {
			continue;
		}
		if (sAutoHeap[i].mStatus == 1) {
			return (void*)-1;
		}
		if (outHeapIndex) {
			*outHeapIndex = i;
		}
		return sAutoHeap[i].getPointer();
	}
	for (u8 i = 0; i < sStayHeapCount; i++) {
		if (soundID != sStayHeap[i].mSoundID) {
			continue;
		}
		if (outHeapIndex) {
			*outHeapIndex = 255;
		}
		return sStayHeap[i].getPointer();
	}
	return nullptr;
}

/**
 * @note Address: 0x800B069C
 * @note Size: 0x24
 */
void JAInter::HeapMgr::releaseAutoHeapPointer(u8 index)
{
	if (index == 0xFF) {
		return;
	}
	getAutoHeap(index)->setUsedHeapID(-1);
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void JAInter::HeapMgr::changeAutoHeapPointerToPosition(u8*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B06C0
 * @note Size: 0xE8
 */
u8 JAInter::HeapMgr::checkUsefulAutoHeapPosition()
{
	int i   = 0;
	u32 r29 = -1;
	int r28 = 0;
	for (; i < JAIGlobalParameter::getParamAutoHeapMax(); i++) {
		if (getAutoHeap(i)->mSoundID == -1) {
			break;
		}
	}
	if (i == JAIGlobalParameter::getParamAutoHeapMax()) {
		for (i = 0; i < JAIGlobalParameter::getParamAutoHeapMax(); i++) {
			if (r29 > getAutoHeap(i)->mHeapCount && getAutoHeap(i)->getUsedHeapID() == -1) {
				r28 = i;
				r29 = getAutoHeap(i)->mHeapCount;
			}
		}
		if (r29 != -1) {
			i = r28;
		}
	}
	return i;
}

/**
 * @note Address: 0x800B07A8
 * @note Size: 0x48
 */
void* JAInter::HeapMgr::getFreeAutoHeapPointer(u8 index, u32 soundID)
{
	getAutoHeap(index)->mSoundID = soundID;
	void* ptr                    = getAutoHeap(index)->mPointer;
	getAutoHeap(index)->setUsedHeapID(sAutoHeapCount);
	getAutoHeap(index)->mHeapCount = sAutoHeapCount;
	sAutoHeapCount++;
	return ptr;
}

/**
 * @note Address: 0x800B07F0
 * @note Size: 0xC
 */
u32 JAInter::HeapMgr::checkUsefulStayHeapPosition()
{
	return sStayHeapCount & 0xFF;
}

/**
 * @note Address: 0x800B07FC
 * @note Size: 0x108
 */
void* JAInter::HeapMgr::getFreeStayHeapPointer(u32 p1, u32 soundID)
{
	void* stayPtr;
	if (sStayHeapCount >= JAIGlobalParameter::getParamStayHeapMax()) {
		return nullptr;
	}

	void* basePtr = getStayHeap(0)->getPointer();

	stayPtr = getStayHeap(sStayHeapCount)->getPointer();
	if (p1 + u32(stayPtr) < u32(basePtr) + JAIGlobalParameter::getParamStayHeapSize()
	    && sStayHeapCount < JAIGlobalParameter::getParamStayHeapMax()) {
		stayPtr                               = getStayHeap(sStayHeapCount)->getPointer();
		getStayHeap(sStayHeapCount)->mSoundID = soundID;
		basePtr                               = (void*)(u32(getStayHeap(sStayHeapCount)->getPointer()) + ALIGN_PREV(p1, 32));
		if (IS_NOT_ALIGNED(p1, 32)) {
			basePtr = (void*)(u32(basePtr) + 32);
		}
		sStayHeapCount++;
		if (sStayHeapCount < JAIGlobalParameter::getParamStayHeapMax()) {
			sStayHeap[sStayHeapCount].setPointer(basePtr);
		}
	} else {
		stayPtr = nullptr;
	}
	return stayPtr;
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void JAInter::HeapMgr::clearAutoHeap(JAInter::HeapBlock*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void JAInter::HeapMgr::clearAutoHeap(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void JAInter::HeapMgr::clearStayHeap(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void JAInter::HeapMgr::getAutoHeapPointer(u32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B0904
 * @note Size: 0x14
 */
void JAInter::HeapMgr::setAutoHeapLoadedFlag(u8 index, u8 flag)
{
	sAutoHeap[index].mStatus = flag;
}

/**
 * @note Address: 0x800B0918
 * @note Size: 0x14
 */
void JAInter::HeapMgr::setStayHeapLoadedFlag(u8 index, u8 flag)
{
	sStayHeap[index].mStatus = flag;
}

/**
 * @note Address: 0x800B092C
 * @note Size: 0x18
 */
JAInter::HeapBlock::HeapBlock()
{
	mHeapCount = 0;
	mSoundID   = -1;
	setUsedHeapID(-1);
}
