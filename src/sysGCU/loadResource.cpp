#include "LoadResource.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049B368
    lbl_8049B368:
        .4byte 0x6C6F6164
        .4byte 0x5265736F
        .4byte 0x75726365
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x4172616D
        .4byte 0x526F6F74
        .4byte 0x00000000
        .asciz "P2Assert"
        .skip 3
    .global lbl_8049B394
    lbl_8049B394:
        .4byte 0x6D6F756E
        .4byte 0x74206172
        .4byte 0x63206661
        .4byte 0x696C7572
        .4byte 0x65000000
    .global lbl_8049B3A8
    lbl_8049B3A8:
        .4byte 0x556E6B6E
        .4byte 0x6F776E20
        .4byte 0x666C6167
        .4byte 0x3A256420
        .4byte 0x0A000000
        .4byte 0x00000000

    .section .data, "wa"	# 0x8049E220 - 0x804EFC20
    .global __vt__Q212LoadResource4Node
    __vt__Q212LoadResource4Node:
        .4byte 0
        .4byte 0
        .4byte __dt__Q212LoadResource4NodeFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q212LoadResource4NodeFv"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520AA8
    lbl_80520AA8:
        .4byte 0x44766452
        .4byte 0x6F6F7400

    .section .sbss # 0x80514D80 - 0x80516360
    .global gLoadResourceMgr
    gLoadResourceMgr:
        .skip 0x8
*/

// TODO: Similar issue to ogObjWorldMapInfoWindow0.cpp with rodata.
// TODO: Register in init__Q212LoadResource3MgrFv

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
LoadResource::Node::Node(char const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044C520
 * Size:	0000B8
 */
LoadResource::Node::~Node()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8044C5BC
	lis      r4, __vt__Q212LoadResource4Node@ha
	addi     r4, r4, __vt__Q212LoadResource4Node@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	bl       del__5CNodeFv
	lwz      r3, 0x30(r30)
	cmplwi   r3, 0
	beq      lbl_8044C568
	bl       __dl__FPv

lbl_8044C568:
	lwz      r3, 0x34(r30)
	cmplwi   r3, 0
	beq      lbl_8044C584
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8044C584:
	lwz      r3, 0x14(r30)
	cmplwi   r3, 0
	beq      lbl_8044C594
	bl       __dl__FPv

lbl_8044C594:
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_8044C5BC
	mr       r3, r30
	bl       __dl__FPv

lbl_8044C5BC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void LoadResource::Node::dump()
{
	// UNUSED FUNCTION
}

/*
 * __ct__Q212LoadResource3ArgFPCc
 * --INFO--
 * Address:	8044C5D8
 * Size:	000044
 */
LoadResource::Arg::Arg(char const* p1)
    : _00(p1)
    , _04(nullptr)
    , _08(0)
    , _0C(0)
    , m_expandSwitch(Switch_1)
    , _14(0)
    , m_heap(nullptr)
    , _1C(1)
    , _20(-1)
    , _24(nullptr)
    , _28(nullptr)
    , _2C(1)
    , _2D(1)
{
}

/*
 * __ct__Q212LoadResource11ArgAramOnlyFPCc
 * --INFO--
 * Address:	8044C61C
 * Size:	000048
 */
LoadResource::ArgAramOnly::ArgAramOnly(char const* p1)
    : Arg(p1)
{
	_2D = 0;
}

/*
 * __ct__Q212LoadResource3MgrFv
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
LoadResource::Mgr::Mgr()
    : m_aramRoot("AramRoot")
    , m_dvdRoot("DvdRoot")
{
	// UNUSED FUNCTION
	P2ASSERTLINE(118, gLoadResourceMgr == nullptr);
}

/*
 * --INFO--
 * Address:	8044C664
 * Size:	0000B0
 */
void LoadResource::Mgr::init()
{
	// Mgr* mgr = new Mgr();
	// gLoadResourceMgr = mgr;
	gLoadResourceMgr = new Mgr();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8049B368@ha
	li       r3, 0x30
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8049B368@l
	stw      r30, 8(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8044C6FC
	lis      r4, __vt__5CNode@ha
	mr       r30, r3
	addi     r5, r4, __vt__5CNode@l
	li       r4, 0
	stw      r5, 0(r3)
	addi     r3, r31, 0x14
	addi     r0, r2, lbl_80520AA8@sda21
	stw      r4, 0x10(r30)
	stw      r4, 0xc(r30)
	stw      r4, 8(r30)
	stw      r4, 4(r30)
	stw      r3, 0x14(r30)
	stw      r5, 0x18(r30)
	stw      r4, 0x28(r30)
	stw      r4, 0x24(r30)
	stw      r4, 0x20(r30)
	stw      r4, 0x1c(r30)
	stw      r0, 0x2c(r30)
	lwz      r0, gLoadResourceMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8044C6F8
	addi     r3, r31, 0
	addi     r5, r31, 0x20
	li       r4, 0x76
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044C6F8:
	stw      r30, gLoadResourceMgr@sda21(r13)

lbl_8044C6FC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void LoadResource::Mgr::search(char const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void LoadResource::Mgr::dump()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044C714
 * Size:	00008C
 */
LoadResource::Node* LoadResource::Mgr::mountArchive(LoadResource::Arg& arg)
{
	Node* node = load(arg);
	if (node) {
		JKRArchive::EMountDirection mountDirection = JKRArchive::EMD_Unk2;
		void* v1                                   = node->_30;
		JKRHeap* heap                              = arg.m_heap;
		if (arg._1C == 1) {
			mountDirection = JKRArchive::EMD_Unk1;
		}
		node->m_archive = JKRArchive::mount(v1, heap, mountDirection);
		JUT_ASSERTLINE(221, node->m_archive != nullptr, "mount arc failure");
	}
	return node;
}

/*
 * --INFO--
 * Address:	8044C7A0
 * Size:	000324
 */
LoadResource::Node* LoadResource::Mgr::load(LoadResource::Arg&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r26, r3
	mr       r27, r4
	li       r31, 0
	lwz      r25, 0(r4)
	lwz      r30, 0x10(r3)
	b        lbl_8044C7E8

lbl_8044C7C8:
	lwz      r4, 0x14(r30)
	mr       r3, r25
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8044C7E4
	mr       r31, r30
	b        lbl_8044C7F0

lbl_8044C7E4:
	lwz      r30, 4(r30)

lbl_8044C7E8:
	cmplwi   r30, 0
	bne      lbl_8044C7C8

lbl_8044C7F0:
	cmplwi   r31, 0
	beq      lbl_8044C828
	lwz      r30, 0x28(r26)
	b        lbl_8044C820

lbl_8044C800:
	lwz      r4, 0x14(r30)
	mr       r3, r25
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8044C81C
	mr       r31, r30
	b        lbl_8044C828

lbl_8044C81C:
	lwz      r30, 4(r30)

lbl_8044C820:
	cmplwi   r30, 0
	bne      lbl_8044C800

lbl_8044C828:
	cmplwi   r31, 0
	bne      lbl_8044CAAC
	lwz      r0, 0x18(r27)
	li       r30, 0
	cmplwi   r0, 0
	bne      lbl_8044C848
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0x18(r27)

lbl_8044C848:
	lwz      r0, 0x28(r27)
	cmplwi   r0, 0
	bne      lbl_8044C85C
	addi     r0, r1, 0x18
	stw      r0, 0x28(r27)

lbl_8044C85C:
	lwz      r6, 0x1c(r27)
	cmpwi    r6, 2
	beq      lbl_8044C908
	bge      lbl_8044C994
	cmpwi    r6, 1
	bge      lbl_8044C878
	b        lbl_8044C994

lbl_8044C878:
	lwz      r3, 0(r27)
	bl       strlen
	lwz      r4, 0x18(r27)
	addi     r3, r3, 1
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	lwz      r4, 0(r27)
	mr       r28, r3
	bl       strcpy
	lwz      r4, 0x18(r27)
	li       r3, 0x38
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r25, r3, r3
	beq      lbl_8044C900
	lis      r3, __vt__5CNode@ha
	li       r0, 0
	addi     r3, r3, __vt__5CNode@l
	stw      r3, 0(r25)
	addi     r3, r25, 0x18
	stw      r0, 0x10(r25)
	stw      r0, 0xc(r25)
	stw      r0, 8(r25)
	stw      r0, 4(r25)
	stw      r28, 0x14(r25)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q212LoadResource4Node@ha
	li       r0, 0
	addi     r3, r3, __vt__Q212LoadResource4Node@l
	stw      r3, 0(r25)
	addi     r3, r3, 0x10
	stw      r3, 0x18(r25)
	stw      r0, 0x30(r25)
	stw      r0, 0x34(r25)

lbl_8044C900:
	mr       r29, r25
	b        lbl_8044C9B0

lbl_8044C908:
	lwz      r3, 0(r27)
	bl       strlen
	lwz      r4, 0x18(r27)
	li       r5, -1
	bl       __nwa__FUlP7JKRHeapi
	lwz      r4, 0(r27)
	mr       r28, r3
	bl       strcpy
	lwz      r4, 0x18(r27)
	li       r3, 0x38
	li       r5, -32
	bl       __nw__FUlP7JKRHeapi
	or.      r25, r3, r3
	beq      lbl_8044C98C
	lis      r3, __vt__5CNode@ha
	li       r0, 0
	addi     r3, r3, __vt__5CNode@l
	stw      r3, 0(r25)
	addi     r3, r25, 0x18
	stw      r0, 0x10(r25)
	stw      r0, 0xc(r25)
	stw      r0, 8(r25)
	stw      r0, 4(r25)
	stw      r28, 0x14(r25)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q212LoadResource4Node@ha
	li       r0, 0
	addi     r3, r3, __vt__Q212LoadResource4Node@l
	stw      r3, 0(r25)
	addi     r3, r3, 0x10
	stw      r3, 0x18(r25)
	stw      r0, 0x30(r25)
	stw      r0, 0x34(r25)

lbl_8044C98C:
	mr       r29, r25
	b        lbl_8044C9B0

lbl_8044C994:
	lis      r3, lbl_8049B368@ha
	lis      r4, lbl_8049B3A8@ha
	addi     r5, r4, lbl_8049B3A8@l
	addi     r3, r3, lbl_8049B368@l
	li       r4, 0x114
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044C9B0:
	lbz      r0, 0x2c(r27)
	cmplwi   r0, 0
	beq      lbl_8044C9FC
	lwz      r0, 0x1c(r27)
	stw      r0, 8(r1)
	lwz      r0, 0x20(r27)
	stw      r0, 0xc(r1)
	lwz      r0, 0x28(r27)
	stw      r0, 0x10(r1)
	lwz      r3, gAramMgr@sda21(r13)
	lwz      r4, 0(r27)
	lwz      r5, 4(r27)
	lwz      r6, 8(r27)
	lwz      r7, 0xc(r27)
	lwz      r8, 0x10(r27)
	lwz      r9, 0x14(r27)
	lwz      r10, 0x18(r27)
	bl
aramToMainRam__Q24ARAM3MgrFPCcPUcUlUl15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectioniPUl
	mr       r30, r3

lbl_8044C9FC:
	cmplwi   r30, 0
	beq      lbl_8044CA14
	mr       r3, r26
	mr       r4, r29
	bl       add__5CNodeFP5CNode
	b        lbl_8044CA70

lbl_8044CA14:
	lbz      r0, 0x2d(r27)
	cmplwi   r0, 0
	beq      lbl_8044CA70
	lwz      r0, 0x28(r27)
	stw      r0, 8(r1)
	lwz      r3, 0(r27)
	lwz      r4, 4(r27)
	lwz      r5, 0x10(r27)
	lwz      r6, 0x14(r27)
	lwz      r7, 0x18(r27)
	lwz      r8, 0x1c(r27)
	lwz      r9, 0xc(r27)
	lwz      r10, 0x24(r27)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r0, r3, r3
	beq      lbl_8044CA70
	lwz      r4, 0x28(r27)
	mr       r30, r0
	lwz      r4, 0(r4)
	bl       DCFlushRange
	mr       r4, r29
	addi     r3, r26, 0x18
	bl       add__5CNodeFP5CNode

lbl_8044CA70:
	cmplwi   r30, 0
	beq      lbl_8044CA84
	stw      r30, 0x30(r29)
	mr       r31, r29
	b        lbl_8044CAAC

lbl_8044CA84:
	cmplwi   r29, 0
	beq      lbl_8044CAA4
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8044CAA4:
	mr       r3, r28
	bl       __dl__FPv

lbl_8044CAAC:
	mr       r3, r31
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	8044CAC4
//  * Size:	000008
//  */
// @24 @LoadResource::Node::~Node(void)
// {
// 	/*
// 	addi     r3, r3, -24
// 	b        __dt__Q212LoadResource4NodeFv
// 	*/
// }
