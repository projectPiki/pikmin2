#include "JSystem/JUT/JUTException.h"
#include "Resource.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A680
    lbl_8049A680:
        .asciz "resourceMgr2D.cpp"
        .skip 2
    .global lbl_8049A694
    lbl_8049A694:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28Resource5Mgr2D
    __vt__Q28Resource5Mgr2D:
        .4byte 0
        .4byte 0
        .4byte drawDump__Q28Resource3MgrFR8Graphicsii
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global gResMgr2D
    gResMgr2D:
        .skip 0x8
*/

Resource::Mgr2D* gResMgr2D;

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
Resource::Mgr2D::Mgr2D(JKRHeap* heap)
    : Mgr(heap, 0xD4800)
{
	// UNUSED FUNCTION
	P2ASSERTLINE(34, heap != nullptr);
	// oldGlobalMgr = mgr;
	P2ASSERTLINE(36, gResMgr2D == nullptr);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
Resource::Mgr::~Mgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80433F70
 * Size:	0000B0
 */
void Resource::Mgr2D::init(JKRHeap* heap)
{
	// Mgr2D* oldGlobalMgr = gResMgr2D;
	// oldGlobalMgr = new Mgr2D(heap);
	// Mgr2D* newMgr = new Mgr2D(heap);
	// gResMgr2D = newMgr;
	// gResMgr2D = oldGlobalMgr;
	gResMgr2D = new Mgr2D(heap);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x44
	stw      r30, 8(r1)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80434008
	lis      r5, 0x000D4800@ha
	mr       r30, r0
	mr       r4, r31
	addi     r5, r5, 0x000D4800@l
	bl       __ct__Q28Resource3MgrFP7JKRHeapUl
	lis      r3, __vt__Q28Resource5Mgr2D@ha
	cmplwi   r31, 0
	addi     r0, r3, __vt__Q28Resource5Mgr2D@l
	stw      r0, 0(r30)
	bne      lbl_80433FDC
	lis      r3, lbl_8049A680@ha
	lis      r5, lbl_8049A694@ha
	addi     r3, r3, lbl_8049A680@l
	li       r4, 0x22
	addi     r5, r5, lbl_8049A694@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80433FDC:
	lwz      r0, gResMgr2D@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80434004
	lis      r3, lbl_8049A680@ha
	lis      r5, lbl_8049A694@ha
	addi     r3, r3, lbl_8049A680@l
	li       r4, 0x24
	addi     r5, r5, lbl_8049A694@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80434004:
	stw      r30, gResMgr2D@sda21(r13)

lbl_80434008:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
