#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_registItem_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80480DB0
    lbl_80480DB0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x72656769
        .4byte 0x73744974
        .4byte 0x656D0000
        .4byte 0x2D426172
        .4byte 0x72656C2D
        .4byte 0x00000000
        .4byte 0x2D556A61
        .4byte 0x6D757368
        .4byte 0x692D0000
        .4byte 0x2D446F77
        .4byte 0x6E466C6F
        .4byte 0x6F722D00
        .4byte 0x2D547265
        .4byte 0x61737572
        .4byte 0x652D0000
        .4byte 0x2D50696B
        .4byte 0x69486561
        .4byte 0x642D0000
        .4byte 0x2D426967
        .4byte 0x466F756E
        .4byte 0x7461696E
        .4byte 0x2D000000
        .4byte 0x2D427269
        .4byte 0x6467652D
        .4byte 0x00000000
        .4byte 0x2D44656E
        .4byte 0x67656B69
        .4byte 0x47617465
        .4byte 0x2D000000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x4B696C6C
        .4byte 0x41726700

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804BA360
    lbl_804BA360:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515B08
    lbl_80515B08:
        .skip 0x4
    .global lbl_80515B0C
    lbl_80515B0C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519990
    lbl_80519990:
        .4byte 0x2D576565
        .4byte 0x642D0000
    .global lbl_80519998
    lbl_80519998:
        .4byte 0x2D506C61
        .4byte 0x6E742D00
    .global lbl_805199A0
    lbl_805199A0:
        .4byte 0x2D526F63
        .4byte 0x6B2D0000
    .global lbl_805199A8
    lbl_805199A8:
        .4byte 0x2D486F6E
        .4byte 0x65792D00
    .global lbl_805199B0
    lbl_805199B0:
        .4byte 0x2D4F6E79
        .4byte 0x6F6E2D00
    .global lbl_805199B8
    lbl_805199B8:
        .4byte 0x2D486F6C
        .4byte 0x652D0000
    .global lbl_805199C0
    lbl_805199C0:
        .4byte 0x2D436176
        .4byte 0x652D0000
    .global lbl_805199C8
    lbl_805199C8:
        .4byte 0x2D476174
        .4byte 0x652D0000
*/

namespace Game {

/*
 * --INFO--
 * Address:	801E4B98
 * Size:	000664
 */
void ItemMgr::createManagers(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_80480DB0@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_80480DB0@l
	li       r5, 0
	stw      r30, 0x18(r1)
	rlwinm   r30, r4, 0x1f, 0x1f, 0x1f
	stw      r29, 0x14(r1)
	clrlwi   r29, r4, 0x1f
	addi     r4, r31, 0x18
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x90
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E4BEC
	li       r4, 1
	bl       __ct__Q34Game10ItemBarrel3MgrFv
	mr       r0, r3

lbl_801E4BEC:
	stw      r0, mgr__Q24Game10ItemBarrel@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game10ItemBarrel@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x18
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x24
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x65c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E4C48
	li       r4, 1
	bl       __ct__Q34Game12ItemUjamushi3MgrFv
	mr       r0, r3

lbl_801E4C48:
	stw      r0, mgr__Q24Game12ItemUjamushi@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game12ItemUjamushi@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x24
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519990@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	cmplwi   r30, 0
	beq      lbl_801E4CD4
	li       r3, 0x8c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E4CAC
	li       r4, 1
	bl       __ct__Q34Game8ItemWeed3MgrFv
	mr       r0, r3

lbl_801E4CAC:
	stw      r0, mgr__Q24Game8ItemWeed@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game8ItemWeed@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	b        lbl_801E4CDC

lbl_801E4CD4:
	li       r0, 0
	stw      r0, mgr__Q24Game8ItemWeed@sda21(r13)

lbl_801E4CDC:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519990@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x30
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x90
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E4D14
	li       r4, 1
	bl       __ct__Q34Game13ItemDownFloor3MgrFv
	mr       r0, r3

lbl_801E4D14:
	stw      r0, mgr__Q24Game13ItemDownFloor@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game13ItemDownFloor@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x30
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x3c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x90
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E4D70
	li       r4, 1
	bl       __ct__Q34Game12ItemTreasure3MgrFv
	mr       r0, r3

lbl_801E4D70:
	stw      r0, mgr__Q24Game12ItemTreasure@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game12ItemTreasure@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x3c
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x48
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x84
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E4DCC
	li       r4, 1
	bl       __ct__Q34Game12ItemPikihead3MgrFv
	mr       r0, r3

lbl_801E4DCC:
	stw      r0, mgr__Q24Game12ItemPikihead@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game12ItemPikihead@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x48
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519998@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	cmplwi   r30, 0
	beq      lbl_801E4E58
	li       r3, 0x94
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E4E30
	li       r4, 1
	bl       __ct__Q34Game9ItemPlant3MgrFv
	mr       r0, r3

lbl_801E4E30:
	stw      r0, mgr__Q24Game9ItemPlant@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game9ItemPlant@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	b        lbl_801E4E60

lbl_801E4E58:
	li       r0, 0
	stw      r0, mgr__Q24Game9ItemPlant@sda21(r13)

lbl_801E4E60:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519998@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199A0@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	cmplwi   r30, 0
	beq      lbl_801E4EC8
	li       r3, 0x90
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E4EA0
	li       r4, 1
	bl       __ct__Q34Game8ItemRock3MgrFv
	mr       r0, r3

lbl_801E4EA0:
	stw      r0, mgr__Q24Game8ItemRock@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game8ItemRock@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	b        lbl_801E4ED0

lbl_801E4EC8:
	li       r0, 0
	stw      r0, mgr__Q24Game8ItemRock@sda21(r13)

lbl_801E4ED0:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199A0@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199A8@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x84
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E4F08
	li       r4, 1
	bl       __ct__Q34Game9ItemHoney3MgrFv
	mr       r0, r3

lbl_801E4F08:
	stw      r0, mgr__Q24Game9ItemHoney@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game9ItemHoney@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199A8@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199B0@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x11c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801E4F64
	li       r4, 1
	bl       __ct__Q34Game9ItemOnyon3MgrFv
	mr       r4, r3

lbl_801E4F64:
	stw      r4, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r3, itemMgr__4Game@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	bl       init__Q34Game9ItemOnyon3MgrFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199B0@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199B8@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	cmplwi   r29, 0
	beq      lbl_801E4FE0
	li       r3, 0x94
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E4FB8
	li       r4, 1
	bl       __ct__Q34Game8ItemHole3MgrFv
	mr       r0, r3

lbl_801E4FB8:
	stw      r0, mgr__Q24Game8ItemHole@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game8ItemHole@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	b        lbl_801E4FE8

lbl_801E4FE0:
	li       r0, 0
	stw      r0, mgr__Q24Game8ItemHole@sda21(r13)

lbl_801E4FE8:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199B8@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199C0@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	cmplwi   r30, 0
	beq      lbl_801E5050
	li       r3, 0x94
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E5028
	li       r4, 1
	bl       __ct__Q34Game8ItemCave3MgrFv
	mr       r0, r3

lbl_801E5028:
	stw      r0, mgr__Q24Game8ItemCave@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game8ItemCave@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	b        lbl_801E5058

lbl_801E5050:
	li       r0, 0
	stw      r0, mgr__Q24Game8ItemCave@sda21(r13)

lbl_801E5058:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199C0@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x54
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	cmplwi   r29, 0
	beq      lbl_801E50C0
	li       r3, 0x94
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E5098
	li       r4, 1
	bl       __ct__Q34Game15ItemBigFountain3MgrFv
	mr       r0, r3

lbl_801E5098:
	stw      r0, mgr__Q24Game15ItemBigFountain@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game15ItemBigFountain@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	b        lbl_801E50C8

lbl_801E50C0:
	li       r0, 0
	stw      r0, mgr__Q24Game15ItemBigFountain@sda21(r13)

lbl_801E50C8:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x54
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x64
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	cmplwi   r30, 0
	beq      lbl_801E5130
	li       r3, 0x98
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E5108
	li       r4, 1
	bl       __ct__Q34Game10ItemBridge3MgrFv
	mr       r0, r3

lbl_801E5108:
	stw      r0, mgr__Q24Game10ItemBridge@sda21(r13)
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game10ItemBridge@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	b        lbl_801E5138

lbl_801E5130:
	li       r0, 0
	stw      r0, mgr__Q24Game10ItemBridge@sda21(r13)

lbl_801E5138:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x64
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199C8@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x8c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801E5170
	li       r4, 1
	bl       __ct__Q24Game11ItemGateMgrFv
	mr       r4, r3

lbl_801E5170:
	stw      r4, itemGateMgr__4Game@sda21(r13)
	lwz      r3, itemMgr__4Game@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805199C8@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x70
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	cmplwi   r30, 0
	beq      lbl_801E51CC
	li       r3, 0xa4
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801E51BC
	li       r4, 1
	bl       __ct__Q34Game15ItemDengekiGate3MgrFv
	mr       r4, r3

lbl_801E51BC:
	stw      r4, mgr__Q24Game15ItemDengekiGate@sda21(r13)
	lwz      r3, itemMgr__4Game@sda21(r13)
	bl       addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
	b        lbl_801E51D4

lbl_801E51CC:
	li       r0, 0
	stw      r0, mgr__Q24Game15ItemDengekiGate@sda21(r13)

lbl_801E51D4:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x70
	bl       heapStatusEnd__6SystemFPc
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
 * Address:	801E51FC
 * Size:	000048
 */
void ItemMgr::clearGlobalPointers()
{
	/*
	li       r0, 0
	stw      r0, mgr__Q24Game10ItemBarrel@sda21(r13)
	stw      r0, mgr__Q24Game12ItemUjamushi@sda21(r13)
	stw      r0, mgr__Q24Game8ItemWeed@sda21(r13)
	stw      r0, mgr__Q24Game13ItemDownFloor@sda21(r13)
	stw      r0, mgr__Q24Game12ItemTreasure@sda21(r13)
	stw      r0, mgr__Q24Game12ItemPikihead@sda21(r13)
	stw      r0, mgr__Q24Game9ItemPlant@sda21(r13)
	stw      r0, mgr__Q24Game8ItemRock@sda21(r13)
	stw      r0, mgr__Q24Game9ItemHoney@sda21(r13)
	stw      r0, mgr__Q24Game9ItemOnyon@sda21(r13)
	stw      r0, mgr__Q24Game8ItemHole@sda21(r13)
	stw      r0, mgr__Q24Game8ItemCave@sda21(r13)
	stw      r0, mgr__Q24Game15ItemBigFountain@sda21(r13)
	stw      r0, mgr__Q24Game10ItemBridge@sda21(r13)
	stw      r0, itemGateMgr__4Game@sda21(r13)
	stw      r0, mgr__Q24Game15ItemDengekiGate@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E5244
 * Size:	0000E8
 */
void ItemMgr::killAllExceptOnyonMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, mgr__Q24Game9ItemPlant@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801E5294
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801E528C
	lwz      r4, mgr__Q24Game9ItemPlant@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game9ItemPlant@sda21(r13)
	bl       "delNode__33NodeObjectMgr<16GenericObjectMgr>FP16GenericObjectMgr"

lbl_801E528C:
	li       r0, 0
	stw      r0, mgr__Q24Game9ItemPlant@sda21(r13)

lbl_801E5294:
	lwz      r3, mgr__Q24Game8ItemRock@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801E52D8
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801E52D0
	lwz      r4, mgr__Q24Game8ItemRock@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game8ItemRock@sda21(r13)
	bl       "delNode__33NodeObjectMgr<16GenericObjectMgr>FP16GenericObjectMgr"

lbl_801E52D0:
	li       r0, 0
	stw      r0, mgr__Q24Game8ItemRock@sda21(r13)

lbl_801E52D8:
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801E531C
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801E5314
	lwz      r4, mgr__Q24Game9ItemHoney@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r3, itemMgr__4Game@sda21(r13)
	lwz      r4, mgr__Q24Game9ItemHoney@sda21(r13)
	bl       "delNode__33NodeObjectMgr<16GenericObjectMgr>FP16GenericObjectMgr"

lbl_801E5314:
	li       r0, 0
	stw      r0, mgr__Q24Game9ItemHoney@sda21(r13)

lbl_801E531C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801E532C
 * Size:	000028
 */
void __sinit_registItem_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804BA360@ha
	stw      r0, lbl_80515B08@sda21(r13)
	stfsu    f0, lbl_804BA360@l(r3)
	stfs     f0, lbl_80515B0C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
