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
		getAutoHeap(i)->setStatus(0);
		getAutoHeap(i)->set0C(0);
		getAutoHeap(i)->setSoundID(-1);
		getAutoHeap(i)->setUsedHeapID(-1);
		getAutoHeap(i)->setPointer(new (JAIBasic::getCurrentJAIHeap(), 0x20) u8[autoPtrSize]);
	}

	sStayHeap           = new (JAIBasic::getCurrentJAIHeap(), 0x20) HeapBlock[stayCount];
	sStayHeap->mPointer = new (JAIBasic::getCurrentJAIHeap(), 0x20) u8[stayPtrSize];

	for (u32 i = 0; i < stayCount; i++) {
		getStayHeap(i)->setStatus(0);
		getStayHeap(i)->set0C(0);
		getStayHeap(i)->setSoundID(-1);
		getStayHeap(i)->setUsedHeapID(-1);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  rlwinm    r28,r5,0,24,31
	  mr        r31, r4
	  mr        r25, r5
	  mulli     r7, r28, 0x14
	  mr        r30, r3
	  mr        r24, r6
	  li        r5, 0x20
	  addi      r3, r7, 0x10
	  lwz       r4, -0x7494(r13)
	  bl        -0x8C32C
	  lis       r4, 0x800B
	  mr        r7, r28
	  addi      r4, r4, 0x92C
	  li        r5, 0
	  li        r6, 0x14
	  bl        0x11664
	  li        r27, 0
	  stw       r3, -0x7408(r13)
	  mr        r26, r24
	  rlwinm    r25,r25,0,24,31
	  mr        r28, r27
	  li        r24, 0
	  li        r29, -0x1
	  b         .loc_0xC0

	.loc_0x70:
	  lwz       r3, -0x7408(r13)
	  addi      r6, r27, 0xC
	  addi      r4, r27, 0x8
	  addi      r0, r27, 0x10
	  stbx      r28, r3, r27
	  mr        r3, r26
	  li        r5, 0x20
	  lwz       r7, -0x7408(r13)
	  stwx      r28, r7, r6
	  lwz       r6, -0x7408(r13)
	  stwx      r29, r6, r4
	  lwz       r4, -0x7408(r13)
	  stwx      r29, r4, r0
	  lwz       r4, -0x7494(r13)
	  bl        -0x8C3A0
	  lwz       r4, -0x7408(r13)
	  addi      r0, r27, 0x4
	  addi      r27, r27, 0x14
	  addi      r24, r24, 0x1
	  stwx      r3, r4, r0

	.loc_0xC0:
	  cmplw     r24, r25
	  blt+      .loc_0x70
	  rlwinm    r28,r30,0,24,31
	  lwz       r4, -0x7494(r13)
	  mulli     r3, r28, 0x14
	  li        r5, 0x20
	  addi      r3, r3, 0x10
	  bl        -0x8C3D4
	  lis       r4, 0x800B
	  mr        r7, r28
	  addi      r4, r4, 0x92C
	  li        r5, 0
	  li        r6, 0x14
	  bl        0x115BC
	  stw       r3, -0x7404(r13)
	  mr        r3, r31
	  lwz       r4, -0x7494(r13)
	  li        r5, 0x20
	  bl        -0x8C400
	  mr        r10, r28
	  lwz       r4, -0x7404(r13)
	  cmplwi    r10, 0
	  li        r9, 0
	  stw       r3, 0x4(r4)
	  mr        r8, r9
	  mr        r7, r9
	  li        r5, -0x1
	  ble-      .loc_0x240
	  rlwinm.   r0,r10,30,2,31
	  mtctr     r0
	  beq-      .loc_0x208

	.loc_0x13C:
	  lwz       r3, -0x7404(r13)
	  addi      r6, r9, 0xC
	  addi      r4, r9, 0x8
	  addi      r0, r9, 0x10
	  stbx      r8, r3, r9
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  addi      r6, r9, 0x20
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  addi      r4, r9, 0x1C
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  addi      r0, r9, 0x24
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stbx      r8, r3, r9
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  addi      r6, r9, 0x20
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  addi      r4, r9, 0x1C
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  addi      r0, r9, 0x24
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stbx      r8, r3, r9
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  addi      r6, r9, 0x20
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  addi      r4, r9, 0x1C
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  addi      r0, r9, 0x24
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stbx      r8, r3, r9
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  bdnz+     .loc_0x13C
	  andi.     r10, r10, 0x3
	  beq-      .loc_0x240

	.loc_0x208:
	  mtctr     r10

	.loc_0x20C:
	  lwz       r3, -0x7404(r13)
	  addi      r6, r9, 0xC
	  addi      r4, r9, 0x8
	  addi      r0, r9, 0x10
	  stbx      r8, r3, r9
	  addi      r9, r9, 0x14
	  lwz       r3, -0x7404(r13)
	  stwx      r7, r3, r6
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r4
	  lwz       r3, -0x7404(r13)
	  stwx      r5, r3, r0
	  bdnz+     .loc_0x20C

	.loc_0x240:
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/**
 * @note Address: 0x800B0594
 * @note Size: 0x8
 */
JAInter::HeapBlock* JAInter::HeapMgr::getAutoHeapPointer() { return sAutoHeap; }

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
			if (r29 > getAutoHeap(i)->_0C && getAutoHeap(i)->getUsedHeapID() == -1) {
				r28 = i;
				r29 = getAutoHeap(i)->_0C;
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
	getAutoHeap(index)->_0C = sAutoHeapCount;
	sAutoHeapCount++;
	return ptr;
}

/**
 * @note Address: 0x800B07F0
 * @note Size: 0xC
 */
u32 JAInter::HeapMgr::checkUsefulStayHeapPosition() { return sStayHeapCount & 0xFF; }

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
void JAInter::HeapMgr::setAutoHeapLoadedFlag(u8 index, u8 flag) { sAutoHeap[index].mStatus = flag; }

/**
 * @note Address: 0x800B0918
 * @note Size: 0x14
 */
void JAInter::HeapMgr::setStayHeapLoadedFlag(u8 index, u8 flag) { sStayHeap[index].mStatus = flag; }

/**
 * @note Address: 0x800B092C
 * @note Size: 0x18
 */
JAInter::HeapBlock::HeapBlock()
{
	_0C      = 0;
	mSoundID = -1;
	setUsedHeapID(-1);
}
