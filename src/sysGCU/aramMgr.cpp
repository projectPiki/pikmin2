#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDvdAramRipper.h"
#include "P2Macros.h"
#include "string.h"
#include "ARAM.h"

ARAM::Mgr* gAramMgr;

// PAL uses a dedicated heap for certain ARAM resource loading, so it can get thrown
// out when the language gets swapped - US/JP just uses the system heap
#if defined(VERSION_PAL)
#define RESOURCE_HEAP          (mNodeHeap)
#define PAL_RESOURCE_HEAP_SIZE (0x5C00) // 23 KB heap, to throw out and reload when language swapping
#else
#define RESOURCE_HEAP (JKRGetSystemHeap())
#endif

#if MATCHING
static const char* SDATA2_FIX = "";
#endif

namespace ARAM {
/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
inline Node::Node()
    : CNode("")
{
	mMemoryBlock = 0;
}

inline u32 Node::dvdToAram(char const* name, bool forceFail)
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(114, name);
#else
	P2ASSERTLINE(105, name);
#endif
	mName = const_cast<char*>(name);

	if (!mMemoryBlock) {
		if (forceFail) {
			mMemoryBlock = nullptr;
		} else {
			mMemoryBlock = (JKRAramBlock*)JKRDvdAramRipper::loadToAram(mName, 0, Switch_0, 0, 0, 0);
		}
	}

	return reinterpret_cast<u32>(mMemoryBlock);
}

inline void* Node::aramToMainRam(u8* buf, u32 address, u32 offset, JKRExpandSwitch expandSwitch, u32 maxExpandSize, JKRHeap* heap,
                                 JKRDvdRipper::EAllocDirection allocDir, int id, u32* byteCnt)
{
	void* addr;
	u32 tempByteVal;
	u32* out = byteCnt;

	tempByteVal = 0;
	addr        = 0;

	if (out == nullptr) {
		out = &tempByteVal;
	}

	if (!mMemoryBlock) {
		dvdToAram(mName, false);
	}

	if (mMemoryBlock) {
		addr = JKRAram::aramToMainRam(mMemoryBlock, buf, address, offset, expandSwitch, maxExpandSize, heap, id, out);
		DCFlushRange(addr, *out);
		if (allocDir == JKRDvdRipper::ALLOC_DIR_BOTTOM) {
			char* newAddr = new (heap, -0x20) char[*out];
			memcpy(newAddr, addr, *out);
			delete addr;
			addr = newAddr;
		}
	}

	return addr;
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
inline void Node::dump()
{
}

/**
 * @note Address: 0x80432B18
 * @note Size: 0x30
 */
void Mgr::init()
{
	new Mgr();
}

/**
 * @note Address: 0x80432B48
 * @note Size: 0x80
 */
Mgr::Mgr()
    : mResourceList("root")
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(258, gAramMgr == nullptr);
#else
	P2ASSERTLINE(248, gAramMgr == nullptr);
#endif
	gAramMgr = this;

#if defined(VERSION_PAL)
	mNodeHeap = makeExpHeap(PAL_RESOURCE_HEAP_SIZE, JKRGetSystemHeap(), true);
#endif
}

/**
 * @note Address: 0x80432BC8
 * @note Size: 0x24C
 */
u32 Mgr::dvdToAram(char const* name, bool forceAddNode)
{
	u32 success = 0;
	Node* found = search(name);

	if (!found) {
		Node* newNode = new (RESOURCE_HEAP, 0) Node;

		char* newName = new (RESOURCE_HEAP, 0) char[strlen(const_cast<char*>(name)) + 1];
		strcpy(newName, name);

		if (forceAddNode) {
			newNode->dvdToAram(newName, forceAddNode);
			mResourceList.add(newNode);
		} else {
			success = newNode->dvdToAram(newName, false);

			if (success) {
				mResourceList.add(newNode);
			} else {
				delete newName;
				delete newNode;
			}
		}
	} else {
		success = found->dvdToAram(found->mName, forceAddNode);
	}

	return success;
}

/**
 * @note Address: 0x80432E74
 * @note Size: 0x154
 */
void* Mgr::aramToMainRam(char const* name, u8* buf, u32 address, u32 offset, JKRExpandSwitch expandSwitch, u32 maxExpandSize, JKRHeap* heap,
                         JKRDvdRipper::EAllocDirection allocDir, int id, u32* byteCnt)
{
	void* mem   = nullptr;
	Node* found = search(name);

	if (found) {

		if (!heap) {
			heap = JKRHeap::sCurrentHeap;
		}

		mem = found->aramToMainRam(buf, address, offset, expandSwitch, maxExpandSize, heap, allocDir, id, byteCnt);
	}

	return mem;
}

/**
 * @note Address: 0x80432FC8
 * @note Size: 0xA0
 */
void ARAM::Mgr::dump()
{
	u32 max = 0xFFFFFFFF;
	u32 min = 0;
	JKRAram::sAramObject->mAramHeap->getFreeSize();
	JKRAram::sAramObject->mAramHeap->getFreeSize();
	JKRAramBlock* status;
	FOREACH_NODE(Node, mResourceList.mChild, node)
	{
		status   = node->mMemoryBlock;
		u32 size = (status) ? status->mSize : 0;
		if (max > size) {
			max = size;
		} else if (min < size) {
			min = size;
		}
	}
#if defined(VERSION_PAL)
	OSReport("\tHeapFree  %5dKB \n", (int)mNodeHeap->getTotalFreeSize() >> 10);
#endif
}

/**
 * @note Address: 0x80433068
 * @note Size: 0x70
 */
Node* ARAM::Mgr::search(char const* str)
{
	Node* result = nullptr;
	CNode* node  = mResourceList.mChild;
	while (node) {
		if (strcmp(str, node->mName) == 0) {
			result = static_cast<Node*>(node);
			break;
		}
		node = node->mNext;
	}
	return result;
}

#if defined(VERSION_PAL)
/**
 * @note Address: 0x80433594 (PAL only)
 * @note Size: 0x50
 * @note Fabricated name. Solid guess based on what it calls though.
 */
void ARAM::Mgr::freeAll()
{
	mNodeHeap->freeAll();
	mResourceList.clearRelations();
	JKRAram::getAramHeap()->freeAll();
}
#endif
} // namespace ARAM
