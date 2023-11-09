#ifndef _JSYSTEM_JAS_JASKERNEL_H
#define _JSYSTEM_JAS_JASKERNEL_H

#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JAudio/JAS/JASProbe.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"

struct JASCmdHeap;

namespace JASKernel {
void setupRootHeap(JKRSolidHeap*, u32);
JKRExpHeap* getSystemHeap();
JASCmdHeap* getCommandHeap();
JASHeap* getAramHeap();
void setupAramHeap(u32, u32);

void probeFinish(long);
void probeStart(long, char*);

// unused/inlined:
JKRSolidHeap* getRootHeap();
int getAramFreeSize();
int getAramSize();
void initProbe(long);
void resetProbe();
const char* getProbeName(long);
void getProbeLast(long);
void getProbeAvg(long);
void getProbeTotalAvg(long);
void getProbeMax(long);

}; // namespace JASKernel

/**
 * @fabricated
 * @size{0x1C}
 * Not really a heap, but it's the object pointed to by JASKernel::sCommandHeap, so... :shrug:
 * It's more like a stack...
 */
struct JASCmdHeap {
	typedef void (*Command)(void*);
	struct Header {
		Command mCommand; // _00
		int mMsgLength;   // _04 - I don't think this is right?
	};
	/**
	 * @fabricated
	 * @size{0x40C}
	 */
	struct Block {
		inline Block(Block* next)
		    : mNext(next)
		    , mUsedLength(0)
		    , mMsgCount(0)
		{
		}

		inline bool contains(Header* msg)
		{
			if ((u32)mBuffer <= (u32)msg && (u32)msg < (u32)(this + 1)) {
				return true;
			}
			return false;
		}

		Block* mNext;       // _00
		size_t mUsedLength; // _04
		int mMsgCount;      // _08
		u8 mBuffer[0x400];  // _0C
	};

	inline bool grow()
	{
		JASCmdHeap::Block* previousHead = mHead;

		if (previousHead != nullptr && previousHead->mMsgCount == 0) {
			// No need!
			previousHead->mUsedLength = 0;
			return true;
		}
		// Try to alloc into JASKernel sys heap:
		mHead = new (JASKernel::getSystemHeap(), 0) Block(previousHead);
		if (mHead != nullptr) {
			return true;
		}
		// Failed to alloc into JASKernel sys heap. Use general sys heap instead.
		mHead = new (JKRHeap::sSystemHeap, 0) Block(previousHead);
		if (mHead != nullptr) {
			return true;
		}
		// Failed to grow. Restore the previous head, and return false.
		mHead = previousHead;
		return false;
	}

	inline Header* alloc(size_t msgLength)
	{
		msgLength += sizeof(Header);
		JASMutexLock lock(&mMutex);
		Block* previousHead = mHead;
		if (0x400 - previousHead->mUsedLength < msgLength) {
			if (0x400 < msgLength) {
				// too large!
				return nullptr;
			}
			if (!grow()) {
				// failed to alloc more space
				return nullptr;
			}
		}
		int startOffset = mHead->mUsedLength;
		mHead->mUsedLength += msgLength;
		mHead->mMsgCount++;
		return (Header*)(mHead->mBuffer + startOffset);
	}

	inline void free(Header* block)
	{
		JASMutexLock lock(&mMutex);
		Block* current = mHead;
		Block* prev    = nullptr;
		while (current != nullptr) {
			if (current->contains(block)) {
				current->mMsgCount--;
				if (current != mHead && current->mMsgCount == 0) {
					Block* next = current->mNext;
					delete current;
					prev->mNext = next;
				}
				return;
			}
			prev    = current;
			current = current->mNext;
		}
	}

	Block* mHead;   // _00
	OSMutex mMutex; // _04
};

#endif
