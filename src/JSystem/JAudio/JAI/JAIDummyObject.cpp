#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "types.h"

JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::deadObjectFreePointer;
JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::deadObjectUsedPointer;
JAInter::DummyObjectMgr::DummyObject* JAInter::DummyObjectMgr::deadObjectObject;

/*
 * --INFO--
 * Address:	800AD490
 * Size:	0000DC
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

/*
 * --INFO--
 * Address:	800AD56C
 * Size:	000068
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

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAInter::DummyObjectMgr::releasePointer(JAInter::DummyVec*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD5D4
 * Size:	0000F8
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
