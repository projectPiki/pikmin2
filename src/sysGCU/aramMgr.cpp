#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JKernel/JKRDvdAramRipper.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "CNode.h"
#include "P2Macros.h"
#include "string.h"
#include "ARAM.h"
ARAM::Mgr* gAramMgr;

static const char* sdata2_placeholder = ""; // how in the hell are we going to get the sdata2 ordered correctly?

namespace ARAM {
/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
inline Node::Node()
    : CNode("")
{
	mStatus = 0;
}

/**
 * Loads a DVD resource to ARAM (Auxiliary RAM) and associates it with a Node.
 *
 * @param name Resource name from the DVD.
 * @param useNull If true, sets the Node status to null without loading the resource.
 *
 * @return Returns the memory address of the loaded resource in ARAM as an unsigned 32-bit integer.
 * If not loaded (due to useNull or resource already loaded), returns the memory address of the current Node status.
 *
 * @note Inline method, indicating it's small and frequently called.
 *
 * @warning Uses const_cast, potentially modifying the input string. Caution with read-only memory (e.g., string literals).
 */
inline u32 Node::dvdToAram(char const* name, bool useStatus)
{
	P2ASSERTLINE(105, name);
	mName = const_cast<char*>(name);

	if (!mStatus) {
		if (useStatus) {
			mStatus = nullptr;
		} else {
			mStatus = (JKRAramBlock*)JKRDvdAramRipper::loadToAram(mName, 0, Switch_0, 0, 0, 0);
		}
	}

	return reinterpret_cast<u32>(mStatus);
}

/**
 * @brief Converts data from ARAM to main RAM.
 *
 * This function converts data from ARAM (Auxilliary RAM) to main RAM. It takes a buffer, an address, an offset,
 * an expand switch, a maximum expand size, a heap, an allocation direction, an ID, and a byte count as
 * parameters. It returns a pointer to the converted data in main RAM.
 *
 * @param buf The buffer containing the data to be converted.
 * @param address The address in ARAM where the data is located.
 * @param offset The offset within the data to start the conversion.
 * @param expandSwitch The expansion switch for the conversion.
 * @param maxExpandSize The maximum size to expand the data.
 * @param heap The heap to allocate memory for the converted data.
 * @param allocDir The allocation direction for the converted data.
 * @param id The ID for the converted data.
 * @param byteCnt A pointer to store the byte count of the converted data.
 * @return void* A pointer to the converted data in main RAM.
 */
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

	if (!mStatus) {
		dvdToAram(mName, false);
	}

	if (mStatus) {
		addr = JKRAram::aramToMainRam(mStatus, buf, address, offset, expandSwitch, maxExpandSize, heap, id, byteCnt);
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

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
inline void Node::dump() { }

/*
 * --INFO--
 * Address:	80432B18
 * Size:	000030
 */
void Mgr::init() { new Mgr(); }

/*
 * --INFO--
 * Address:	80432B48
 * Size:	000080
 */
Mgr::Mgr()
    : mNode("root")
{
	P2ASSERTLINE(248, gAramMgr == nullptr);
	gAramMgr = this;
}

/**
 * Loads a DVD resource to ARAM, associates it with a Node, and adds the Node to Mgr if specified.
 *
 * @param name: DVD resource name.
 * @param forceAddNode: If true, always adds a new Node to Mgr.
 *
 * @return: Result of dvdToAram method. If new Node is created, returns its result.
 * If Node with the same name exists, returns its result. If not loaded and forceAddNode is false, returns 0.
 *
 * @note: Searches for an existing Node, creates a new Node if not found, and handles addition based on forceAddNode.
 */
/*
 * --INFO--
 * Address:	80432BC8
 * Size:	00024C
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
			mNode.add(newNode);
		} else {
			success = newNode->dvdToAram(newName, false);

			if (success) {
				mNode.add(newNode);
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

/*
 * --INFO--
 * Address:	80432E74
 * Size:	000154
 * TODO: Match
 */
inline u32* validPointer(u32* p)
{
	u32 zero = 0;
	return !p ? &zero : p;
}

/**
 * @brief Transfers data from ARAM to main RAM.
 *
 * This function transfers data from ARAM (Auxilliary RAM) to main RAM. It searches for a node with the specified name in the ARAM manager's
 * internal data structure. If the node is found, it performs the data transfer using the specified parameters.
 *
 * @param name The name of the node to search for.
 * @param buf Pointer to the buffer in main RAM where the data will be transferred.
 * @param address The ARAM address to start the transfer from.
 * @param offset The offset within the ARAM block to start the transfer from.
 * @param expandSwitch The expansion switch for the ARAM block.
 * @param maxExpandSize The maximum size to expand the ARAM block if needed.
 * @param heap The JKRHeap object to use for memory allocation.
 * @param allocDir The allocation direction for the JKRHeap object.
 * @param id The ID of the ARAM block.
 * @param byteCnt Pointer to a variable that will receive the number of bytes transferred.
 * @return A pointer to the allocated memory in main RAM, or nullptr if the node was not found.
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

/*
 * --INFO--
 * Address:	80432FC8
 * Size:	0000A0
 */
/**
 * @brief Dumps the status of the ARAM manager.
 *
 * This function iterates through the ARAM manager's nodes and retrieves the size of each node's status.
 * It then updates the maximum and minimum sizes accordingly.
 *
 * @note This function does nothing because it was in the debug build and got compiled out.
 *
 * @return void
 */
void ARAM::Mgr::dump()
{
	u32 max = 0xFFFFFFFF;
	u32 min = 0;
	JKRAram::sAramObject->mAramHeap->getFreeSize();
	JKRAram::sAramObject->mAramHeap->getFreeSize();
	JKRAramBlock* status;
	FOREACH_NODE(Node, mNode.mChild, node)
	{
		status   = node->mStatus;
		u32 size = (status) ? status->mSize : 0;
		if (max > size) {
			max = size;
		} else if (min < size) {
			min = size;
		}
	}
}

/*
 * --INFO--
 * Address:	80433068
 * Size:	000070
 */
Node* ARAM::Mgr::search(char const* str)
{
	Node* result = nullptr;
	CNode* node  = mNode.mChild;
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
