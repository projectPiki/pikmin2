#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDvdAramRipper.h"
#include "P2Macros.h"
#include "string.h"
#include "ARAM.h"

ARAM::Mgr* gAramMgr;

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
	P2ASSERTLINE(105, name);
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

void* Node::aramToMainRam(u8* buf, u32 address, u32 offset, JKRExpandSwitch expandSwitch, u32 maxExpandSize, JKRHeap* heap,
                          JKRDvdRipper::EAllocDirection allocDir, int id, u32* byteCnt)
{
	void* addr;
	u32 tempByteVal;

	tempByteVal = 0;
	addr        = 0;

	if (byteCnt == nullptr) {
		byteCnt = &tempByteVal;
	}

	if (!mMemoryBlock) {
		dvdToAram(mName, false);
	}

	if (mMemoryBlock) {
		addr = JKRAram::aramToMainRam(mMemoryBlock, buf, address, offset, expandSwitch, maxExpandSize, heap, id, byteCnt);
		DCFlushRange(addr, *byteCnt);
		if (allocDir == JKRDvdRipper::ALLOC_DIR_BOTTOM) {
			char* newAddr = new (heap, -0x20) char[*byteCnt];
			memcpy(newAddr, addr, *byteCnt);
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
inline void Node::dump() { }

/**
 * @note Address: 0x80432B18
 * @note Size: 0x30
 */
void Mgr::init() { new Mgr(); }

/**
 * @note Address: 0x80432B48
 * @note Size: 0x80
 */
Mgr::Mgr()
    : mRootNode("root")
{
	P2ASSERTLINE(248, gAramMgr == nullptr);
	gAramMgr = this;
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
		// Is sSystemHeap volatile or something?
		JKRHeap* sysHeap1 = JKRHeap::sSystemHeap;
		Node* newNode     = new (sysHeap1, 0) Node;

		JKRHeap* sysHeap2 = JKRHeap::sSystemHeap;
		size_t length     = strlen(const_cast<char*>(name)) + 1;
		char* newName     = new (sysHeap2, 0) char[length];
		strcpy(newName, name);

		if (forceAddNode) {
			newNode->dvdToAram(newName, forceAddNode);
			mRootNode.add(newNode);
		} else {
			success = newNode->dvdToAram(newName, false);

			if (success) {
				mRootNode.add(newNode);
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
 * TODO: Match
 */
inline u32* validPointer(u32* p)
{
	u32 zero = 0;
	return !p ? &zero : p;
}

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
	FOREACH_NODE(Node, mRootNode.mChild, node)
	{
		status   = node->mMemoryBlock;
		u32 size = (status) ? status->mSize : 0;
		if (max > size) {
			max = size;
		} else if (min < size) {
			min = size;
		}
	}
}

/**
 * @note Address: 0x80433068
 * @note Size: 0x70
 */
Node* ARAM::Mgr::search(char const* str)
{
	Node* result = nullptr;
	CNode* node  = mRootNode.mChild;
	while (node) {
		if (strcmp(str, node->mName) == 0) {
			result = static_cast<Node*>(node);
			break;
		}
		node = node->mNext;
	}
	return result;
}
} // namespace ARAM
