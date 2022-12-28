#ifndef _JSYSTEM_JAS_JASKERNEL_H
#define _JSYSTEM_JAS_JASKERNEL_H

#include "JSystem/JAS/JASHeap.h"
#include "JSystem/JAS/JASMutexLock.h"
#include "JSystem/JAS/JASProbe.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

struct JASCmdHeap;

namespace JASKernel {
void setupRootHeap(JKRSolidHeap*, unsigned long);
JKRExpHeap* getSystemHeap();
JASCmdHeap* getCommandHeap();
JASHeap* getAramHeap();
void setupAramHeap(unsigned long, unsigned long);

void probeFinish(long);
void probeStart(long, char*);

// unused/inlined:
void getRootHeap();
int getAramFreeSize();
int getAramSize();
void initProbe(long);
void resetProbe();
const char* getProbeName(long);
void getProbeLast(long);
void getProbeAvg(long);
void getProbeTotalAvg(long);
void getProbeMax(long);

extern JKRExpHeap* sSystemHeap;
extern JASCmdHeap* sCommandHeap;
extern JASHeap* audioAramHeap;

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
		Command m_command; // _00
		int m_msgLength;   // _04 - I don't think this is right?
	};
	/**
	 * @fabricated
	 * @size{0x40C}
	 */
	struct Block {
		inline Block(Block* next)
		    : m_next(next)
		    , m_usedLength(0)
		    , m_msgCount(0)
		{
		}

		inline bool contains(Header* msg)
		{
			if ((u32)m_buffer <= (u32)msg && (u32)msg < (u32)(this + 1)) {
				return true;
			}
			return false;
		}

		Block* m_next;       // _00
		size_t m_usedLength; // _04
		int m_msgCount;      // _08
		u8 m_buffer[0x400];  // _0C
	};

	inline bool grow()
	{
		JASCmdHeap::Block* previousHead = m_head;

		if (previousHead != nullptr && previousHead->m_msgCount == 0) {
			// No need!
			previousHead->m_usedLength = 0;
			return true;
		}
		// Try to alloc into JASKernel sys heap:
		m_head = new (JASKernel::getSystemHeap(), 0) Block(previousHead);
		if (m_head != nullptr) {
			return true;
		}
		// Failed to alloc into JASKernel sys heap. Use general sys heap instead.
		m_head = new (JKRHeap::sSystemHeap, 0) Block(previousHead);
		if (m_head != nullptr) {
			return true;
		}
		// Failed to grow. Restore the previous head, and return false.
		m_head = previousHead;
		return false;
	}

	inline Header* alloc(size_t msgLength)
	{
		msgLength += sizeof(Header);
		JASMutexLock lock(&m_mutex);
		Block* previousHead = m_head;
		if (0x400 - previousHead->m_usedLength < msgLength) {
			if (0x400 < msgLength) {
				// too large!
				return nullptr;
			}
			if (!grow()) {
				// failed to alloc more space
				return nullptr;
			}
		}
		int startOffset = m_head->m_usedLength;
		m_head->m_usedLength += msgLength;
		m_head->m_msgCount++;
		return (Header*)(m_head->m_buffer + startOffset);
	}

	inline void free(Header* block)
	{
		JASMutexLock lock(&m_mutex);
		Block* current = m_head;
		Block* prev    = nullptr;
		while (current != nullptr) {
			if (current->contains(block)) {
				current->m_msgCount--;
				if (current != m_head && current->m_msgCount == 0) {
					Block* next = current->m_next;
					delete current;
					prev->m_next = next;
				}
				return;
			}
			prev    = current;
			current = current->m_next;
		}
	}

	Block* m_head;   // _00
	OSMutex m_mutex; // _04
};

#endif
