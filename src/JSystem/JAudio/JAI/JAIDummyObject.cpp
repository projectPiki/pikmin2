#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "types.h"

JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::deadObjectFreePointer;
JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::deadObjectUsedPointer;
JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::deadObjectObject;

/**
 * @note Address: 0x800AD490
 * @note Size: 0xDC
 */
void JAInter::DummyObjectMgr::init()
{
	JKRHeap* heap         = JAIGetCurrentHeap();
	deadObjectFreePointer = deadObjectObject = new (heap, 0x20) DummyObject[JAIGlobalParameter::getParamDummyObjectMax()];

	deadObjectUsedPointer     = nullptr;
	deadObjectObject[0].mPrev = nullptr;
	deadObjectObject[0].mNext = &deadObjectObject[1];
	u32 i;
	for (i = 1; i < JAIGlobalParameter::getParamDummyObjectMax() - 1; i++) {
		deadObjectObject[i].mPrev = &deadObjectObject[i - 1];
		deadObjectObject[i].mNext = &deadObjectObject[i + 1];
	}
	deadObjectObject[i].mPrev = &deadObjectObject[i - 1];
	deadObjectObject[i].mNext = nullptr;
}

/**
 * @note Address: 0x800AD56C
 * @note Size: 0x68
 */
JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::getPointer(u32 lifeTime)
{
	DummyObject** freeTop = &deadObjectFreePointer;
	DummyObject** usedTop = &deadObjectUsedPointer;
	DummyObject* target;
	if (deadObjectFreePointer) {
		target     = freeTop[0];
		freeTop[0] = target->mNext;

		if (usedTop[0]) {
			target->mNext     = usedTop[0];
			usedTop[0]->mPrev = target;
		} else {
			target->mNext = nullptr;
		}

		target->mPrev     = nullptr;
		usedTop[0]        = target;
		target->mLifeTime = lifeTime;
		target->mSound    = nullptr;

	} else {
		target = nullptr;
	}

	return target;
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void JAInter::DummyObjectMgr::releasePointer(JAInter::DummyVec*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800AD5D4
 * @note Size: 0xF8
 */
void JAInter::DummyObjectMgr::check()
{
	DummyObject* currUsed = deadObjectUsedPointer;
	while (currUsed) {
		DummyObject* nextUsed = currUsed->mNext;
		currUsed->mLifeTime--;

		if (currUsed->mLifeTime == 0 || !currUsed->mSound) {
			if (currUsed->mSound) {
				currUsed->mSound->stop(0);
			}

			DummyObject** freeTop = &deadObjectFreePointer;
			DummyObject** usedTop = &deadObjectUsedPointer;
			if (deadObjectUsedPointer != currUsed) {
				currUsed->mPrev->mNext = currUsed->mNext;

				if (currUsed->mNext) {
					currUsed->mNext->mPrev = currUsed->mPrev;
				}
			} else {
				usedTop[0] = currUsed->mNext;
				if (currUsed->mNext) {
					currUsed->mNext->mPrev = nullptr;
				}
			}

			currUsed->mNext = freeTop[0];

			if (currUsed->mNext) {
				currUsed->mNext->mPrev = currUsed;
			}

			freeTop[0] = currUsed;
		}

		currUsed = nextUsed;
	}
}
