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

#include "JSystem/JKR/Aram.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JKR/JKRDvdAramRipper.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JKR/JKRHeap.h"
#include "CNode.h"
#include "Dolphin/string.h"
#include "Dolphin/stl.h"
#include "ARAM.h"

ARAM::Mgr* gAramMgr;

namespace ARAM {
/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
inline Node::Node(void)
    : CNode("")
{
	m_status = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
inline int Node::dvdToAram(char const* name, bool useNull)
{
	P2ASSERTLINE(105, name);
	m_name = (char*)name;

	if (!m_status) {
		if (useNull) {
			m_status = 0;
		} else {
			m_status = JKRDvdAramRipper::loadToAram(m_name, 0, Switch_0, 0, 0, 0);
		}
	}

	return (u32)m_status;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void* Node::aramToMainRam(unsigned char* a2, unsigned long a3, unsigned long a4, JKRExpandSwitch a5, unsigned long a6, JKRHeap* a7,
                          JKRDvdRipper::EAllocDirection a8, int a9, unsigned long* byteCnt)
{
	void* addr = nullptr;
	u32 zero   = 0;
	if (!byteCnt) {
		byteCnt = &zero;
	}

	if (!m_status) {
		dvdToAram(m_name, false);
	}

	JKRAramBlock* status = m_status;
	if (status) {
		addr = JKRAram::aramToMainRam(status, a2, a3, a4, a5, a6, a7, a9, byteCnt);
		DCFlushRange(addr, *byteCnt);
		if ((s32)a8 == JKRDvdRipper::ALLOC_DIR_BOTTOM) {
			char* newAddr = new (a7, -0x20) char[*byteCnt];
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
inline void Node::dump(void) { }

/*
 * --INFO--
 * Address:	80432B18
 * Size:	000030
 */
void Mgr::init(void) { new Mgr(); }

/*
 * --INFO--
 * Address:	80432B48
 * Size:	000080
 */
Mgr::Mgr(void)
    : m_node("root")
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
	int success = 0;
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
			m_node.add(newNode);
		} else {
			success = newNode->dvdToAram(newName, false);

			if (!success) {
				delete newName;
				delete newNode;
			} else {
				m_node.add(newNode);
			}
		}
	} else {
		success = found->dvdToAram(found->m_name, a2);
	}

	return success;
}

/*
 * --INFO--
 * Address:	80432E14
 * Size:	000060
 */
Node::~Node() { }

/*
 * --INFO--
 * Address:	80432E74
 * Size:	000154
 * TODO: Match
 */
void* Mgr::aramToMainRam(char const* name, unsigned char* a2, unsigned long a3, unsigned long a4, JKRExpandSwitch a5, unsigned long a6,
                         JKRHeap* a7, JKRDvdRipper::EAllocDirection a8, int a9, unsigned long* byteCnt)
{
	void* mem   = nullptr;
	Node* found = search(name);

	if (found) {
		if (!a7) {
			a7 = JKRHeap::sCurrentHeap;
		}

		mem = found->aramToMainRam(a2, a3, a4, a5, a6, a7, a8, a9, byteCnt);
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
	u32 min = 0;
	JKRAram::sAramObject->m_aramHeap->getFreeSize();
	JKRAram::sAramObject->m_aramHeap->getFreeSize();
	u32 max = 0xFFFFFFFF;
	FOREACH_NODE(Node, m_node.m_child, node)
	{
		u32 v1 = (node->m_status) ? node->m_status->_18 : 0;
		max    = MIN(max, v1);
		min    = MAX(min, v1);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, -1
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r4, sAramObject__7JKRAram@sda21(r13)
	lwz      r3, 0x94(r4)
	bl       getFreeSize__11JKRAramHeapFv
	lwz      r3, sAramObject__7JKRAram@sda21(r13)
	lwz      r3, 0x94(r3)
	bl       getFreeSize__11JKRAramHeapFv
	lwz      r4, 0x10(r29)
	b        lbl_80433044

	lbl_8043300C:
	lwz      r3, 0x18(r4)
	cmplwi   r3, 0
	beq      lbl_80433020
	lwz      r0, 0x18(r3)
	b        lbl_80433024

	lbl_80433020:
	li       r0, 0

	lbl_80433024:
	cmplw    r31, r0
	ble      lbl_80433034
	mr       r31, r0
	b        lbl_80433040

	lbl_80433034:
	cmplw    r30, r0
	bge      lbl_80433040
	mr       r30, r0

	lbl_80433040:
	lwz      r4, 4(r4)

	lbl_80433044:
	cmplwi   r4, 0
	bne      lbl_8043300C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80433068
 * Size:	000070
 */
Node* ARAM::Mgr::search(char const*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r30, 0x10(r3)
	b        lbl_804330B0

	lbl_80433090:
	lwz      r4, 0x14(r30)
	mr       r3, r29
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_804330AC
	mr       r31, r30
	b        lbl_804330B8

	lbl_804330AC:
	lwz      r30, 4(r30)

	lbl_804330B0:
	cmplwi   r30, 0
	bne      lbl_80433090

	lbl_804330B8:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
} // namespace ARAM
