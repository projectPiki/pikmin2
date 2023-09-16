#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A628
    lbl_8049A628:
        .4byte 0x6172616D
        .4byte 0x4D67722E
        .4byte 0x63707000
    .global lbl_8049A634
    lbl_8049A634:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24ARAM4Node
    __vt__Q24ARAM4Node:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24ARAM4NodeFv
        .4byte getChildCount__5CNodeFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global gAramMgr
    gAramMgr:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520770
    lbl_80520770:
        .4byte 0x00000000
    .global lbl_80520774
    lbl_80520774:
        .4byte 0x726F6F74
        .4byte 0x00000000
        .4byte 0x00000000
*/

#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/JKernel/JKRDvdAramRipper.h"
#include "JSystem/JUtility/JUTException.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "CNode.h"
#include "string.h"
#include "ARAM.h"

ARAM::Mgr* gAramMgr;

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

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
inline u32 Node::dvdToAram(char const* name, bool useNull)
{
	P2ASSERTLINE(105, name);
	mName = (char*)name;

	if (!mStatus) {
		if (useNull) {
			mStatus = 0;
		} else {
			mStatus = (JKRAramBlock*)JKRDvdAramRipper::loadToAram(mName, 0, Switch_0, 0, 0, 0);
		}
	}

	return (u32)mStatus;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
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
		if ((s32)allocDir == JKRDvdRipper::ALLOC_DIR_BOTTOM) {
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
/*
 * --INFO--
 * Address:	80432BC8
 * Size:	00024C
 */

u32 Mgr::dvdToAram(char const* name, bool a2)
{
	u32 success = 0;
	Node* found = search(name);

	if (!found) {
		// Is sSystemHeap volatile or something?
		JKRHeap* sysHeap1 = JKRHeap::sSystemHeap;
		Node* newNode     = new (sysHeap1, 0) Node;

		JKRHeap* sysHeap2 = JKRHeap::sSystemHeap;
		size_t length     = strlen((char*)name) + 1;
		char* newName     = new (sysHeap2, 0) char[length];
		strcpy(newName, name);

		if (a2) {
			newNode->dvdToAram(newName, a2);
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
		success = found->dvdToAram(found->mName, a2);
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
void ARAM::Mgr::dump()
{
	u32 max = 0xFFFFFFFF;
	u32 min = 0;
	JKRAram::sAramObject->mAramHeap->getFreeSize();
	JKRAram::sAramObject->mAramHeap->getFreeSize();
	JKRAramBlock* status;
	FOREACH_NODE(Node, mNode.mChild, node)
	{
		status = node->mStatus;
		u32 v1 = (status) ? status->mSize : 0;
		if (max > v1) {
			max = v1;
		} else if (min < v1) {
			min = v1;
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
			result = (Node*)node;
			break;
		}
		node = node->mNext;
	}
	return result;
}
} // namespace ARAM
