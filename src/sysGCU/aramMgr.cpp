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
inline int Node::dvdToAram(char const* name, bool unk)
{
#line 105
	P2ASSERT(name);
	m_name = (char*)name;

	if (!m_status) {
		if (unk) {
			m_status = 0;
		} else {
			m_status
			    = JKRDvdAramRipper::loadToAram(m_name, 0, Switch_0, 0, 0, 0);
		}
	}

	return m_status;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
inline void Node::aramToMainRam(unsigned char*, unsigned long, unsigned long,
                                JKRExpandSwitch, unsigned long, JKRHeap*,
                                JKRDvdRipper::EAllocDirection, int,
                                unsigned long*)
{
	// UNUSED FUNCTION
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
#line 248
	P2ASSERT(gAramMgr == nullptr);
	gAramMgr = this;
}
/*
 * --INFO--
 * Address:	80432BC8
 * Size:	00024C
 */

u32 Mgr::dvdToAram(char const* name, bool a2)
{
	u32 errCode = 0;
	Node* found = search(name);

	if (!found) {
		Node* newNode = new (JKRHeap::sSystemHeap, 0) Node();

		char* newName
		    = new (JKRHeap::sSystemHeap, 0) char[(strlen((char*)name) + 1)];
		strcpy(newName, name);

		if (a2) {
			errCode = newNode->dvdToAram(newName, a2);
			m_node.add(newNode);
			return errCode;
		}

		u32 newCode = newNode->dvdToAram(newName, false);
		if (newCode) {
			m_node.add(newNode);
			return newCode;
		}

		delete newName;
		delete newNode;
		return errCode;
	}

	errCode = found->dvdToAram(found->m_name, a2);

	return errCode;

	// return errCode;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r28, r3
	mr       r26, r4
	mr       r29, r5
	li       r30, 0
	bl       search__Q24ARAM3MgrFPCc
	or.      r31, r3, r3
	bne      lbl_80432D8C
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0x1c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_80432C44
	lis      r4, __vt__5CNode@ha
	lis      r3, __vt__Q24ARAM4Node@ha
	addi     r0, r4, __vt__5CNode@l
	li       r5, 0
	stw      r0, 0(r31)
	addi     r4, r2, lbl_80520770@sda21
	addi     r0, r3, __vt__Q24ARAM4Node@l
	stw      r5, 0x10(r31)
	stw      r5, 0xc(r31)
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stw      r4, 0x14(r31)
	stw      r0, 0(r31)
	stw      r5, 0x18(r31)

lbl_80432C44:
	lwz      r27, sSystemHeap__7JKRHeap@sda21(r13)
	mr       r3, r26
	bl       strlen
	addi     r3, r3, 1
	mr       r4, r27
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	mr       r4, r26
	mr       r27, r3
	bl       strcpy
	clrlwi.  r0, r29, 0x18
	beq      lbl_80432CEC
	cmplwi   r27, 0
	bne      lbl_80432C98
	lis      r3, lbl_8049A628@ha
	lis      r5, lbl_8049A634@ha
	addi     r3, r3, lbl_8049A628@l
	li       r4, 0x69
	addi     r5, r5, lbl_8049A634@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80432C98:
	stw      r27, 0x14(r31)
	lwz      r0, 0x18(r31)
	cmplwi   r0, 0
	bne      lbl_80432CDC
	clrlwi.  r0, r29, 0x18
	beq      lbl_80432CBC
	li       r0, 0
	stw      r0, 0x18(r31)
	b        lbl_80432CDC

lbl_80432CBC:
	lwz      r3, 0x14(r31)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 0
	bl       loadToAram__16JKRDvdAramRipperFPCcUl15JKRExpandSwitchUlUlPUl
	stw      r3, 0x18(r31)

lbl_80432CDC:
	mr       r3, r28
	mr       r4, r31
	bl       add__5CNodeFP5CNode
	b        lbl_80432DFC

lbl_80432CEC:
	cmplwi   r27, 0
	bne      lbl_80432D10
	lis      r3, lbl_8049A628@ha
	lis      r5, lbl_8049A634@ha
	addi     r3, r3, lbl_8049A628@l
	li       r4, 0x69
	addi     r5, r5, lbl_8049A634@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80432D10:
	stw      r27, 0x14(r31)
	lwz      r0, 0x18(r31)
	cmplwi   r0, 0
	bne      lbl_80432D40
	lwz      r3, 0x14(r31)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 0
	bl       loadToAram__16JKRDvdAramRipperFPCcUl15JKRExpandSwitchUlUlPUl
	stw      r3, 0x18(r31)

lbl_80432D40:
	lwz      r0, 0x18(r31)
	cmplwi   r0, 0
	mr       r30, r0
	beq      lbl_80432D60
	mr       r3, r28
	mr       r4, r31
	bl       add__5CNodeFP5CNode
	b        lbl_80432DFC

lbl_80432D60:
	mr       r3, r27
	bl       __dl__FPv
	cmplwi   r31, 0
	beq      lbl_80432DFC
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80432DFC

lbl_80432D8C:
	lwz      r28, 0x14(r31)
	cmplwi   r28, 0
	bne      lbl_80432DB4
	lis      r3, lbl_8049A628@ha
	lis      r5, lbl_8049A634@ha
	addi     r3, r3, lbl_8049A628@l
	li       r4, 0x69
	addi     r5, r5, lbl_8049A634@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80432DB4:
	stw      r28, 0x14(r31)
	lwz      r0, 0x18(r31)
	cmplwi   r0, 0
	bne      lbl_80432DF8
	clrlwi.  r0, r29, 0x18
	beq      lbl_80432DD8
	li       r0, 0
	stw      r0, 0x18(r31)
	b        lbl_80432DF8

lbl_80432DD8:
	lwz      r3, 0x14(r31)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 0
	bl       loadToAram__16JKRDvdAramRipperFPCcUl15JKRExpandSwitchUlUlPUl
	stw      r3, 0x18(r31)

lbl_80432DF8:
	lwz      r30, 0x18(r31)

lbl_80432DFC:
	mr       r3, r30
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
 */
}
} // namespace ARAM

/*
 * --INFO--
 * Address:	80432E14
 * Size:	000060

ARAM::Node::~Node(void)
{
    /*
    stwu     r1, -0x10(r1)
    mflr     r0
    stw      r0, 0x14(r1)
    stw      r31, 0xc(r1)
    mr       r31, r4
    stw      r30, 8(r1)
    or.      r30, r3, r3
    beq      lbl_80432E58
    lis      r5, __vt__Q24ARAM4Node@ha
    li       r4, 0
    addi     r0, r5, __vt__Q24ARAM4Node@l
    stw      r0, 0(r30)
    bl       __dt__5CNodeFv
    extsh.   r0, r31
    ble      lbl_80432E58
    mr       r3, r30
    bl       __dl__FPv

lbl_80432E58:
    lwz      r0, 0x14(r1)
    mr       r3, r30
    lwz      r31, 0xc(r1)
    lwz      r30, 8(r1)
    mtlr     r0
    addi     r1, r1, 0x10
    blr

}

/*
 * --INFO--
 * Address:	80432E74
 * Size:	000154

void ARAM::Mgr::aramToMainRam(char const*, unsigned char*, unsigned long,
                              unsigned long, JKRExpandSwitch, unsigned long,
                              JKRHeap*, JKRDvdRipper::EAllocDirection, int,
                              unsigned long*)
{
    /*
    .loc_0x0:
      stwu      r1, -0x50(r1)
      mflr      r0
      stw       r0, 0x54(r1)
      stmw      r20, 0x20(r1)
      mr        r21, r5
      lwz       r27, 0x58(r1)
      mr        r22, r6
      lwz       r28, 0x5C(r1)
      mr        r23, r7
      lwz       r30, 0x60(r1)
      mr        r24, r8
      mr        r25, r9
      mr        r26, r10
      li        r20, 0
      bl        0x1BC
      mr.       r31, r3
      beq-      .loc_0x13C
      cmplwi    r26, 0
      bne-      .loc_0x50
      lwz       r26, -0x77D4(r13)

    .loc_0x50:
      li        r29, 0
      cmplwi    r30, 0
      stw       r29, 0x10(r1)
      bne-      .loc_0x64
      addi      r30, r1, 0x10

    .loc_0x64:
      lwz       r0, 0x18(r31)
      cmplwi    r0, 0
      bne-      .loc_0xC8
      lwz       r20, 0x14(r31)
      cmplwi    r20, 0
      bne-      .loc_0x98
      lis       r3, 0x804A
      lis       r5, 0x804A
      subi      r3, r3, 0x59D8
      li        r4, 0x69
      subi      r5, r5, 0x59CC
      crclr     6, 0x6
      bl        -0x4088C8

    .loc_0x98:
      stw       r20, 0x14(r31)
      lwz       r0, 0x18(r31)
      cmplwi    r0, 0
      bne-      .loc_0xC8
      lwz       r3, 0x14(r31)
      li        r4, 0
      li        r5, 0
      li        r6, 0
      li        r7, 0
      li        r8, 0
      bl        -0x415844
      stw       r3, 0x18(r31)

    .loc_0xC8:
      lwz       r3, 0x18(r31)
      cmplwi    r3, 0
      beq-      .loc_0x138
      stw       r30, 0x8(r1)
      mr        r4, r21
      mr        r5, r22
      mr        r6, r23
      mr        r7, r24
      mr        r8, r25
      mr        r9, r26
      mr        r10, r28
      bl        -0x41AD40
      lwz       r4, 0x0(r30)
      mr        r29, r3
      bl        -0x34685C
      cmpwi     r27, 0x2
      bne-      .loc_0x138
      lwz       r3, 0x0(r30)
      mr        r4, r26
      li        r5, -0x20
      bl        -0x40EF44
      lwz       r5, 0x0(r30)
      mr        r21, r3
      mr        r4, r29
      bl        -0x42DE00
      mr        r3, r29
      bl        -0x40EEF0
      mr        r29, r21

    .loc_0x138:
      mr        r20, r29

    .loc_0x13C:
      mr        r3, r20
      lmw       r20, 0x20(r1)
      lwz       r0, 0x54(r1)
      mtlr      r0
      addi      r1, r1, 0x50
      blr

}

/*
 * --INFO--
 * Address:	80432FC8
 * Size:	0000A0

void ARAM::Mgr::dump(void)
{
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

}

/*
 * --INFO--
 * Address:	80433068
 * Size:	000070

void ARAM::Mgr::search(char const*)
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

}
*/
