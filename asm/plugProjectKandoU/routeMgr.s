.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047E548, local
	.asciz "routeMgr"
.endobj lbl_8047E548
.balign 4
.obj lbl_8047E554, local
	.asciz "routeMgr.cpp"
.endobj lbl_8047E554
.balign 4
.obj lbl_8047E564, local
	.asciz "P2Assert"
.endobj lbl_8047E564
.balign 4
.obj lbl_8047E570, local
	.asciz "waypoint %d"
.endobj lbl_8047E570
.balign 4
.obj lbl_8047E57C, local
	.asciz "\t# index\r\n"
.endobj lbl_8047E57C
.balign 4
.obj lbl_8047E588, local
	.asciz "\t# numLinks\r\n"
.endobj lbl_8047E588
.balign 4
.obj lbl_8047E598, local
	.asciz "\t# link %d\r\n"
.endobj lbl_8047E598
.balign 4
.obj lbl_8047E5A8, local
	.asciz "RouteMgr"
.endobj lbl_8047E5A8
.balign 4
.obj lbl_8047E5B4, local
	.asciz "too many to-links (wpB=%d) (wpA=%d)\n"
.endobj lbl_8047E5B4
.balign 4
.obj lbl_8047E5DC, local
	.asciz "wpA(%d) and wpB(%d) cause singularity !\n"
.endobj lbl_8047E5DC
.balign 4
.obj lbl_8047E608, local
	.asciz "\t# numWayPoints\r\n"
.endobj lbl_8047E608

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q24Game14EditorRouteMgr, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game14EditorRouteMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8WayPoint>FPv"
	.4byte getNext__Q24Game14EditorRouteMgrFPv
	.4byte getStart__Q24Game14EditorRouteMgrFv
	.4byte getEnd__Q24Game14EditorRouteMgrFv
	.4byte get__Q24Game14EditorRouteMgrFPv
	.4byte "getAt__27Container<Q24Game8WayPoint>Fi"
	.4byte "getTo__27Container<Q24Game8WayPoint>Fv"
	.4byte getWayPoint__Q24Game14EditorRouteMgrFs
	.4byte read__Q24Game14EditorRouteMgrFR6Stream
	.4byte write__Q24Game8RouteMgrFR6Stream
.endobj __vt__Q24Game14EditorRouteMgr
.obj __vt__Q34Game14EditorRouteMgr6WPNode, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game14EditorRouteMgr6WPNodeFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q34Game14EditorRouteMgr6WPNode
.obj __vt__Q24Game12GameRouteMgr, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game12GameRouteMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8WayPoint>FPv"
	.4byte getNext__Q24Game12GameRouteMgrFPv
	.4byte getStart__Q24Game12GameRouteMgrFv
	.4byte getEnd__Q24Game12GameRouteMgrFv
	.4byte get__Q24Game12GameRouteMgrFPv
	.4byte "getAt__27Container<Q24Game8WayPoint>Fi"
	.4byte "getTo__27Container<Q24Game8WayPoint>Fv"
	.4byte getWayPoint__Q24Game12GameRouteMgrFs
	.4byte read__Q24Game12GameRouteMgrFR6Stream
	.4byte write__Q24Game8RouteMgrFR6Stream
.endobj __vt__Q24Game12GameRouteMgr
.obj "__vt__26Iterator<Q24Game8WayPoint>", weak
	.4byte 0
	.4byte 0
	.4byte "first__26Iterator<Q24Game8WayPoint>Fv"
	.4byte "next__26Iterator<Q24Game8WayPoint>Fv"
	.4byte "isDone__26Iterator<Q24Game8WayPoint>Fv"
	.4byte "__ml__26Iterator<Q24Game8WayPoint>Fv"
.endobj "__vt__26Iterator<Q24Game8WayPoint>"
.obj __vt__Q24Game8RouteMgr, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game8RouteMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8WayPoint>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__27Container<Q24Game8WayPoint>Fi"
	.4byte "getTo__27Container<Q24Game8WayPoint>Fv"
	.4byte 0
	.4byte 0
	.4byte write__Q24Game8RouteMgrFR6Stream
.endobj __vt__Q24Game8RouteMgr
.obj "__vt__27Container<Q24Game8WayPoint>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__27Container<Q24Game8WayPoint>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8WayPoint>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__27Container<Q24Game8WayPoint>Fi"
	.4byte "getTo__27Container<Q24Game8WayPoint>Fv"
.endobj "__vt__27Container<Q24Game8WayPoint>"
.obj __vt__Q24Game8WayPoint, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game8WayPointFv
	.4byte directDraw__Q24Game8WayPointFR8Graphics
	.4byte directDraw_Simple__Q24Game8WayPointFR8Graphics
.endobj __vt__Q24Game8WayPoint
.obj __vt__Q34Game8WayPoint8RoomList, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game8WayPoint8RoomListFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q34Game8WayPoint8RoomList

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80518A00, local
	.float 1.0
.endobj lbl_80518A00
.balign 4
.obj lbl_80518A04, local
	.asciz "\r\n"
.endobj lbl_80518A04
.balign 4
.obj lbl_80518A08, local
	.float 0.0
.endobj lbl_80518A08
.obj lbl_80518A0C, local
	.float 128000.0
.endobj lbl_80518A0C
.obj lbl_80518A10, local
	.float -128000.0
.endobj lbl_80518A10
.obj lbl_80518A14, local
	.float 25.0
.endobj lbl_80518A14
.obj lbl_80518A18, local
	.float 0.1
.endobj lbl_80518A18
.obj lbl_80518A1C, local
	.float 4.0
.endobj lbl_80518A1C
.obj lbl_80518A20, local
	.float 1280000.0
.endobj lbl_80518A20
.obj lbl_80518A24, local
	.float 300.0
.endobj lbl_80518A24

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb, global
/* 80172520 0016F460  90 83 00 04 */	stw r4, 4(r3)
/* 80172524 0016F464  38 00 00 00 */	li r0, 0
/* 80172528 0016F468  98 A3 00 08 */	stb r5, 8(r3)
/* 8017252C 0016F46C  90 03 00 00 */	stw r0, 0(r3)
/* 80172530 0016F470  4E 80 00 20 */	blr 
.endfn __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb

.fn first__Q24Game16WayPointIteratorFv, global
/* 80172534 0016F474  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80172538 0016F478  7C 08 02 A6 */	mflr r0
/* 8017253C 0016F47C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172540 0016F480  38 00 00 00 */	li r0, 0
/* 80172544 0016F484  90 03 00 00 */	stw r0, 0(r3)
/* 80172548 0016F488  48 00 00 B1 */	bl forward__Q24Game16WayPointIteratorFv
/* 8017254C 0016F48C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80172550 0016F490  7C 08 03 A6 */	mtlr r0
/* 80172554 0016F494  38 21 00 10 */	addi r1, r1, 0x10
/* 80172558 0016F498  4E 80 00 20 */	blr 
.endfn first__Q24Game16WayPointIteratorFv

.fn next__Q24Game16WayPointIteratorFv, global
/* 8017255C 0016F49C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80172560 0016F4A0  7C 08 02 A6 */	mflr r0
/* 80172564 0016F4A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172568 0016F4A8  80 83 00 00 */	lwz r4, 0(r3)
/* 8017256C 0016F4AC  38 04 00 01 */	addi r0, r4, 1
/* 80172570 0016F4B0  90 03 00 00 */	stw r0, 0(r3)
/* 80172574 0016F4B4  48 00 00 85 */	bl forward__Q24Game16WayPointIteratorFv
/* 80172578 0016F4B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017257C 0016F4BC  7C 08 03 A6 */	mtlr r0
/* 80172580 0016F4C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80172584 0016F4C4  4E 80 00 20 */	blr 
.endfn next__Q24Game16WayPointIteratorFv

.fn isDone__Q24Game16WayPointIteratorFv, global
/* 80172588 0016F4C8  88 03 00 08 */	lbz r0, 8(r3)
/* 8017258C 0016F4CC  28 00 00 00 */	cmplwi r0, 0
/* 80172590 0016F4D0  41 82 00 18 */	beq .L_801725A8
/* 80172594 0016F4D4  80 03 00 00 */	lwz r0, 0(r3)
/* 80172598 0016F4D8  2C 00 00 10 */	cmpwi r0, 0x10
/* 8017259C 0016F4DC  41 80 00 20 */	blt .L_801725BC
/* 801725A0 0016F4E0  38 60 00 01 */	li r3, 1
/* 801725A4 0016F4E4  4E 80 00 20 */	blr 
.L_801725A8:
/* 801725A8 0016F4E8  80 03 00 00 */	lwz r0, 0(r3)
/* 801725AC 0016F4EC  2C 00 00 08 */	cmpwi r0, 8
/* 801725B0 0016F4F0  41 80 00 0C */	blt .L_801725BC
/* 801725B4 0016F4F4  38 60 00 01 */	li r3, 1
/* 801725B8 0016F4F8  4E 80 00 20 */	blr 
.L_801725BC:
/* 801725BC 0016F4FC  38 60 00 00 */	li r3, 0
/* 801725C0 0016F500  4E 80 00 20 */	blr 
.endfn isDone__Q24Game16WayPointIteratorFv

.fn __ml__Q24Game16WayPointIteratorFv, global
/* 801725C4 0016F504  80 03 00 00 */	lwz r0, 0(r3)
/* 801725C8 0016F508  2C 00 00 08 */	cmpwi r0, 8
/* 801725CC 0016F50C  40 80 00 18 */	bge .L_801725E4
/* 801725D0 0016F510  80 63 00 04 */	lwz r3, 4(r3)
/* 801725D4 0016F514  54 00 08 3C */	slwi r0, r0, 1
/* 801725D8 0016F518  7C 63 02 14 */	add r3, r3, r0
/* 801725DC 0016F51C  A8 63 00 3A */	lha r3, 0x3a(r3)
/* 801725E0 0016F520  4E 80 00 20 */	blr 
.L_801725E4:
/* 801725E4 0016F524  80 63 00 04 */	lwz r3, 4(r3)
/* 801725E8 0016F528  54 00 08 3C */	slwi r0, r0, 1
/* 801725EC 0016F52C  7C 63 02 14 */	add r3, r3, r0
/* 801725F0 0016F530  A8 63 00 4E */	lha r3, 0x4e(r3)
/* 801725F4 0016F534  4E 80 00 20 */	blr 
.endfn __ml__Q24Game16WayPointIteratorFv

.fn forward__Q24Game16WayPointIteratorFv, global
/* 801725F8 0016F538  80 83 00 00 */	lwz r4, 0(r3)
/* 801725FC 0016F53C  80 A3 00 04 */	lwz r5, 4(r3)
/* 80172600 0016F540  2C 04 00 08 */	cmpwi r4, 8
/* 80172604 0016F544  7C 87 23 78 */	mr r7, r4
/* 80172608 0016F548  38 C5 00 3A */	addi r6, r5, 0x3a
/* 8017260C 0016F54C  41 80 00 80 */	blt .L_8017268C
/* 80172610 0016F550  38 C5 00 5E */	addi r6, r5, 0x5e
/* 80172614 0016F554  38 E4 FF F8 */	addi r7, r4, -8
/* 80172618 0016F558  48 00 00 74 */	b .L_8017268C
.L_8017261C:
/* 8017261C 0016F55C  80 83 00 00 */	lwz r4, 0(r3)
/* 80172620 0016F560  38 04 00 01 */	addi r0, r4, 1
/* 80172624 0016F564  90 03 00 00 */	stw r0, 0(r3)
/* 80172628 0016F568  80 A3 00 00 */	lwz r5, 0(r3)
/* 8017262C 0016F56C  2C 05 00 10 */	cmpwi r5, 0x10
/* 80172630 0016F570  4C 80 00 20 */	bgelr 
/* 80172634 0016F574  80 83 00 04 */	lwz r4, 4(r3)
/* 80172638 0016F578  A8 04 00 38 */	lha r0, 0x38(r4)
/* 8017263C 0016F57C  7C 05 00 00 */	cmpw r5, r0
/* 80172640 0016F580  41 80 00 20 */	blt .L_80172660
/* 80172644 0016F584  2C 05 00 08 */	cmpwi r5, 8
/* 80172648 0016F588  40 80 00 18 */	bge .L_80172660
/* 8017264C 0016F58C  38 00 00 08 */	li r0, 8
/* 80172650 0016F590  90 03 00 00 */	stw r0, 0(r3)
/* 80172654 0016F594  80 83 00 04 */	lwz r4, 4(r3)
/* 80172658 0016F598  38 C4 00 5E */	addi r6, r4, 0x5e
/* 8017265C 0016F59C  48 00 00 20 */	b .L_8017267C
.L_80172660:
/* 80172660 0016F5A0  A8 84 00 5C */	lha r4, 0x5c(r4)
/* 80172664 0016F5A4  38 04 00 08 */	addi r0, r4, 8
/* 80172668 0016F5A8  7C 05 00 00 */	cmpw r5, r0
/* 8017266C 0016F5AC  41 80 00 10 */	blt .L_8017267C
/* 80172670 0016F5B0  38 00 00 10 */	li r0, 0x10
/* 80172674 0016F5B4  90 03 00 00 */	stw r0, 0(r3)
/* 80172678 0016F5B8  4E 80 00 20 */	blr 
.L_8017267C:
/* 8017267C 0016F5BC  80 83 00 00 */	lwz r4, 0(r3)
/* 80172680 0016F5C0  2C 04 00 08 */	cmpwi r4, 8
/* 80172684 0016F5C4  41 80 00 08 */	blt .L_8017268C
/* 80172688 0016F5C8  38 E4 FF F8 */	addi r7, r4, -8
.L_8017268C:
/* 8017268C 0016F5CC  54 E0 08 3C */	slwi r0, r7, 1
/* 80172690 0016F5D0  7C 06 02 AE */	lhax r0, r6, r0
/* 80172694 0016F5D4  2C 00 FF FF */	cmpwi r0, -1
/* 80172698 0016F5D8  41 82 FF 84 */	beq .L_8017261C
/* 8017269C 0016F5DC  4E 80 00 20 */	blr 
.endfn forward__Q24Game16WayPointIteratorFv

.fn __ct__Q24Game8WayPointFv, global
/* 801726A0 0016F5E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801726A4 0016F5E4  7C 08 02 A6 */	mflr r0
/* 801726A8 0016F5E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801726AC 0016F5EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801726B0 0016F5F0  7C 7F 1B 78 */	mr r31, r3
/* 801726B4 0016F5F4  93 C1 00 08 */	stw r30, 8(r1)
/* 801726B8 0016F5F8  4B EA A9 15 */	bl __ct__11JKRDisposerFv
/* 801726BC 0016F5FC  3C 60 80 4B */	lis r3, __vt__Q24Game8WayPoint@ha
/* 801726C0 0016F600  3B DF 00 18 */	addi r30, r31, 0x18
/* 801726C4 0016F604  38 03 23 FC */	addi r0, r3, __vt__Q24Game8WayPoint@l
/* 801726C8 0016F608  90 1F 00 00 */	stw r0, 0(r31)
/* 801726CC 0016F60C  7F C3 F3 78 */	mr r3, r30
/* 801726D0 0016F610  48 29 EC C1 */	bl __ct__5CNodeFv
/* 801726D4 0016F614  3C 60 80 4B */	lis r3, __vt__Q34Game8WayPoint8RoomList@ha
/* 801726D8 0016F618  38 00 FF FF */	li r0, -1
/* 801726DC 0016F61C  38 83 24 10 */	addi r4, r3, __vt__Q34Game8WayPoint8RoomList@l
/* 801726E0 0016F620  7F E3 FB 78 */	mr r3, r31
/* 801726E4 0016F624  90 9E 00 00 */	stw r4, 0(r30)
/* 801726E8 0016F628  B0 1E 00 18 */	sth r0, 0x18(r30)
/* 801726EC 0016F62C  48 00 01 05 */	bl reset__Q24Game8WayPointFv
/* 801726F0 0016F630  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801726F4 0016F634  7F E3 FB 78 */	mr r3, r31
/* 801726F8 0016F638  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801726FC 0016F63C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80172700 0016F640  7C 08 03 A6 */	mtlr r0
/* 80172704 0016F644  38 21 00 10 */	addi r1, r1, 0x10
/* 80172708 0016F648  4E 80 00 20 */	blr 
.endfn __ct__Q24Game8WayPointFv

.fn __dt__Q34Game8WayPoint8RoomListFv, weak
/* 8017270C 0016F64C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80172710 0016F650  7C 08 02 A6 */	mflr r0
/* 80172714 0016F654  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172718 0016F658  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017271C 0016F65C  7C 9F 23 78 */	mr r31, r4
/* 80172720 0016F660  93 C1 00 08 */	stw r30, 8(r1)
/* 80172724 0016F664  7C 7E 1B 79 */	or. r30, r3, r3
/* 80172728 0016F668  41 82 00 28 */	beq .L_80172750
/* 8017272C 0016F66C  3C A0 80 4B */	lis r5, __vt__Q34Game8WayPoint8RoomList@ha
/* 80172730 0016F670  38 80 00 00 */	li r4, 0
/* 80172734 0016F674  38 05 24 10 */	addi r0, r5, __vt__Q34Game8WayPoint8RoomList@l
/* 80172738 0016F678  90 1E 00 00 */	stw r0, 0(r30)
/* 8017273C 0016F67C  48 29 EE 4D */	bl __dt__5CNodeFv
/* 80172740 0016F680  7F E0 07 35 */	extsh. r0, r31
/* 80172744 0016F684  40 81 00 0C */	ble .L_80172750
/* 80172748 0016F688  7F C3 F3 78 */	mr r3, r30
/* 8017274C 0016F68C  4B EB 19 69 */	bl __dl__FPv
.L_80172750:
/* 80172750 0016F690  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80172754 0016F694  7F C3 F3 78 */	mr r3, r30
/* 80172758 0016F698  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017275C 0016F69C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80172760 0016F6A0  7C 08 03 A6 */	mtlr r0
/* 80172764 0016F6A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80172768 0016F6A8  4E 80 00 20 */	blr 
.endfn __dt__Q34Game8WayPoint8RoomListFv

.fn __dt__Q24Game8WayPointFv, global
/* 8017276C 0016F6AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80172770 0016F6B0  7C 08 02 A6 */	mflr r0
/* 80172774 0016F6B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172778 0016F6B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017277C 0016F6BC  7C 9F 23 78 */	mr r31, r4
/* 80172780 0016F6C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80172784 0016F6C4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80172788 0016F6C8  41 82 00 4C */	beq .L_801727D4
/* 8017278C 0016F6CC  3C 60 80 4B */	lis r3, __vt__Q24Game8WayPoint@ha
/* 80172790 0016F6D0  34 1E 00 18 */	addic. r0, r30, 0x18
/* 80172794 0016F6D4  38 03 23 FC */	addi r0, r3, __vt__Q24Game8WayPoint@l
/* 80172798 0016F6D8  90 1E 00 00 */	stw r0, 0(r30)
/* 8017279C 0016F6DC  41 82 00 1C */	beq .L_801727B8
/* 801727A0 0016F6E0  3C 80 80 4B */	lis r4, __vt__Q34Game8WayPoint8RoomList@ha
/* 801727A4 0016F6E4  38 7E 00 18 */	addi r3, r30, 0x18
/* 801727A8 0016F6E8  38 04 24 10 */	addi r0, r4, __vt__Q34Game8WayPoint8RoomList@l
/* 801727AC 0016F6EC  38 80 00 00 */	li r4, 0
/* 801727B0 0016F6F0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801727B4 0016F6F4  48 29 ED D5 */	bl __dt__5CNodeFv
.L_801727B8:
/* 801727B8 0016F6F8  7F C3 F3 78 */	mr r3, r30
/* 801727BC 0016F6FC  38 80 00 00 */	li r4, 0
/* 801727C0 0016F700  4B EA A8 75 */	bl __dt__11JKRDisposerFv
/* 801727C4 0016F704  7F E0 07 35 */	extsh. r0, r31
/* 801727C8 0016F708  40 81 00 0C */	ble .L_801727D4
/* 801727CC 0016F70C  7F C3 F3 78 */	mr r3, r30
/* 801727D0 0016F710  4B EB 18 E5 */	bl __dl__FPv
.L_801727D4:
/* 801727D4 0016F714  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801727D8 0016F718  7F C3 F3 78 */	mr r3, r30
/* 801727DC 0016F71C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801727E0 0016F720  83 C1 00 08 */	lwz r30, 8(r1)
/* 801727E4 0016F724  7C 08 03 A6 */	mtlr r0
/* 801727E8 0016F728  38 21 00 10 */	addi r1, r1, 0x10
/* 801727EC 0016F72C  4E 80 00 20 */	blr 
.endfn __dt__Q24Game8WayPointFv

.fn reset__Q24Game8WayPointFv, global
/* 801727F0 0016F730  38 A0 FF FF */	li r5, -1
/* 801727F4 0016F734  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 801727F8 0016F738  B0 A3 00 3A */	sth r5, 0x3a(r3)
/* 801727FC 0016F73C  38 00 00 00 */	li r0, 0
/* 80172800 0016F740  C0 02 A6 A0 */	lfs f0, lbl_80518A00@sda21(r2)
/* 80172804 0016F744  B0 A3 00 5E */	sth r5, 0x5e(r3)
/* 80172808 0016F748  B0 A3 00 3C */	sth r5, 0x3c(r3)
/* 8017280C 0016F74C  B0 A3 00 60 */	sth r5, 0x60(r3)
/* 80172810 0016F750  B0 A3 00 3E */	sth r5, 0x3e(r3)
/* 80172814 0016F754  B0 A3 00 62 */	sth r5, 0x62(r3)
/* 80172818 0016F758  B0 A3 00 40 */	sth r5, 0x40(r3)
/* 8017281C 0016F75C  B0 A3 00 64 */	sth r5, 0x64(r3)
/* 80172820 0016F760  B0 A3 00 42 */	sth r5, 0x42(r3)
/* 80172824 0016F764  B0 A3 00 66 */	sth r5, 0x66(r3)
/* 80172828 0016F768  B0 A3 00 44 */	sth r5, 0x44(r3)
/* 8017282C 0016F76C  B0 A3 00 68 */	sth r5, 0x68(r3)
/* 80172830 0016F770  B0 A3 00 46 */	sth r5, 0x46(r3)
/* 80172834 0016F774  B0 A3 00 6A */	sth r5, 0x6a(r3)
/* 80172838 0016F778  B0 A3 00 48 */	sth r5, 0x48(r3)
/* 8017283C 0016F77C  B0 A3 00 6C */	sth r5, 0x6c(r3)
/* 80172840 0016F780  C4 24 41 E4 */	lfsu f1, "zero__10Vector3<f>"@l(r4)
/* 80172844 0016F784  D0 23 00 4C */	stfs f1, 0x4c(r3)
/* 80172848 0016F788  C0 24 00 04 */	lfs f1, 4(r4)
/* 8017284C 0016F78C  D0 23 00 50 */	stfs f1, 0x50(r3)
/* 80172850 0016F790  C0 24 00 08 */	lfs f1, 8(r4)
/* 80172854 0016F794  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 80172858 0016F798  D0 03 00 58 */	stfs f0, 0x58(r3)
/* 8017285C 0016F79C  B0 A3 00 36 */	sth r5, 0x36(r3)
/* 80172860 0016F7A0  B0 03 00 38 */	sth r0, 0x38(r3)
/* 80172864 0016F7A4  B0 03 00 5C */	sth r0, 0x5c(r3)
/* 80172868 0016F7A8  98 03 00 6E */	stb r0, 0x6e(r3)
/* 8017286C 0016F7AC  98 03 00 34 */	stb r0, 0x34(r3)
/* 80172870 0016F7B0  4E 80 00 20 */	blr 
.endfn reset__Q24Game8WayPointFv

.fn setOpen__Q24Game8WayPointFb, global
/* 80172874 0016F7B4  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80172878 0016F7B8  41 82 00 14 */	beq .L_8017288C
/* 8017287C 0016F7BC  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80172880 0016F7C0  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 80172884 0016F7C4  98 03 00 34 */	stb r0, 0x34(r3)
/* 80172888 0016F7C8  4E 80 00 20 */	blr 
.L_8017288C:
/* 8017288C 0016F7CC  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80172890 0016F7D0  60 00 00 01 */	ori r0, r0, 1
/* 80172894 0016F7D4  98 03 00 34 */	stb r0, 0x34(r3)
/* 80172898 0016F7D8  4E 80 00 20 */	blr 
.endfn setOpen__Q24Game8WayPointFb

.fn setWater__Q24Game8WayPointFb, global
/* 8017289C 0016F7DC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801728A0 0016F7E0  41 82 00 14 */	beq .L_801728B4
/* 801728A4 0016F7E4  88 03 00 34 */	lbz r0, 0x34(r3)
/* 801728A8 0016F7E8  60 00 00 02 */	ori r0, r0, 2
/* 801728AC 0016F7EC  98 03 00 34 */	stb r0, 0x34(r3)
/* 801728B0 0016F7F0  4E 80 00 20 */	blr 
.L_801728B4:
/* 801728B4 0016F7F4  88 03 00 34 */	lbz r0, 0x34(r3)
/* 801728B8 0016F7F8  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 801728BC 0016F7FC  98 03 00 34 */	stb r0, 0x34(r3)
/* 801728C0 0016F800  4E 80 00 20 */	blr 
.endfn setWater__Q24Game8WayPointFb

.fn setBridge__Q24Game8WayPointFb, global
/* 801728C4 0016F804  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801728C8 0016F808  41 82 00 14 */	beq .L_801728DC
/* 801728CC 0016F80C  88 03 00 34 */	lbz r0, 0x34(r3)
/* 801728D0 0016F810  60 00 00 04 */	ori r0, r0, 4
/* 801728D4 0016F814  98 03 00 34 */	stb r0, 0x34(r3)
/* 801728D8 0016F818  4E 80 00 20 */	blr 
.L_801728DC:
/* 801728DC 0016F81C  88 03 00 34 */	lbz r0, 0x34(r3)
/* 801728E0 0016F820  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 801728E4 0016F824  98 03 00 34 */	stb r0, 0x34(r3)
/* 801728E8 0016F828  4E 80 00 20 */	blr 
.endfn setBridge__Q24Game8WayPointFb

.fn directDraw__Q24Game8WayPointFR8Graphics, global
/* 801728EC 0016F82C  4E 80 00 20 */	blr 
.endfn directDraw__Q24Game8WayPointFR8Graphics

.fn directDraw_Simple__Q24Game8WayPointFR8Graphics, global
/* 801728F0 0016F830  4E 80 00 20 */	blr 
.endfn directDraw_Simple__Q24Game8WayPointFR8Graphics

.fn "__dt__27Container<Q24Game8WayPoint>Fv", weak
/* 801728F4 0016F834  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801728F8 0016F838  7C 08 02 A6 */	mflr r0
/* 801728FC 0016F83C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172900 0016F840  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80172904 0016F844  7C 9F 23 78 */	mr r31, r4
/* 80172908 0016F848  93 C1 00 08 */	stw r30, 8(r1)
/* 8017290C 0016F84C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80172910 0016F850  41 82 00 38 */	beq .L_80172948
/* 80172914 0016F854  3C 80 80 4B */	lis r4, "__vt__27Container<Q24Game8WayPoint>"@ha
/* 80172918 0016F858  38 04 23 D0 */	addi r0, r4, "__vt__27Container<Q24Game8WayPoint>"@l
/* 8017291C 0016F85C  90 1E 00 00 */	stw r0, 0(r30)
/* 80172920 0016F860  41 82 00 18 */	beq .L_80172938
/* 80172924 0016F864  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80172928 0016F868  38 80 00 00 */	li r4, 0
/* 8017292C 0016F86C  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80172930 0016F870  90 1E 00 00 */	stw r0, 0(r30)
/* 80172934 0016F874  48 29 EC 55 */	bl __dt__5CNodeFv
.L_80172938:
/* 80172938 0016F878  7F E0 07 35 */	extsh. r0, r31
/* 8017293C 0016F87C  40 81 00 0C */	ble .L_80172948
/* 80172940 0016F880  7F C3 F3 78 */	mr r3, r30
/* 80172944 0016F884  4B EB 17 71 */	bl __dl__FPv
.L_80172948:
/* 80172948 0016F888  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017294C 0016F88C  7F C3 F3 78 */	mr r3, r30
/* 80172950 0016F890  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80172954 0016F894  83 C1 00 08 */	lwz r30, 8(r1)
/* 80172958 0016F898  7C 08 03 A6 */	mtlr r0
/* 8017295C 0016F89C  38 21 00 10 */	addi r1, r1, 0x10
/* 80172960 0016F8A0  4E 80 00 20 */	blr 
.endfn "__dt__27Container<Q24Game8WayPoint>Fv"

.fn __dt__Q24Game8RouteMgrFv, global
/* 80172964 0016F8A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80172968 0016F8A8  7C 08 02 A6 */	mflr r0
/* 8017296C 0016F8AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172970 0016F8B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80172974 0016F8B4  7C 9F 23 78 */	mr r31, r4
/* 80172978 0016F8B8  93 C1 00 08 */	stw r30, 8(r1)
/* 8017297C 0016F8BC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80172980 0016F8C0  41 82 00 48 */	beq .L_801729C8
/* 80172984 0016F8C4  3C 80 80 4B */	lis r4, __vt__Q24Game8RouteMgr@ha
/* 80172988 0016F8C8  38 04 23 98 */	addi r0, r4, __vt__Q24Game8RouteMgr@l
/* 8017298C 0016F8CC  90 1E 00 00 */	stw r0, 0(r30)
/* 80172990 0016F8D0  41 82 00 28 */	beq .L_801729B8
/* 80172994 0016F8D4  3C 80 80 4B */	lis r4, "__vt__27Container<Q24Game8WayPoint>"@ha
/* 80172998 0016F8D8  38 04 23 D0 */	addi r0, r4, "__vt__27Container<Q24Game8WayPoint>"@l
/* 8017299C 0016F8DC  90 1E 00 00 */	stw r0, 0(r30)
/* 801729A0 0016F8E0  41 82 00 18 */	beq .L_801729B8
/* 801729A4 0016F8E4  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801729A8 0016F8E8  38 80 00 00 */	li r4, 0
/* 801729AC 0016F8EC  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801729B0 0016F8F0  90 1E 00 00 */	stw r0, 0(r30)
/* 801729B4 0016F8F4  48 29 EB D5 */	bl __dt__5CNodeFv
.L_801729B8:
/* 801729B8 0016F8F8  7F E0 07 35 */	extsh. r0, r31
/* 801729BC 0016F8FC  40 81 00 0C */	ble .L_801729C8
/* 801729C0 0016F900  7F C3 F3 78 */	mr r3, r30
/* 801729C4 0016F904  4B EB 16 F1 */	bl __dl__FPv
.L_801729C8:
/* 801729C8 0016F908  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801729CC 0016F90C  7F C3 F3 78 */	mr r3, r30
/* 801729D0 0016F910  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801729D4 0016F914  83 C1 00 08 */	lwz r30, 8(r1)
/* 801729D8 0016F918  7C 08 03 A6 */	mtlr r0
/* 801729DC 0016F91C  38 21 00 10 */	addi r1, r1, 0x10
/* 801729E0 0016F920  4E 80 00 20 */	blr 
.endfn __dt__Q24Game8RouteMgrFv

.fn makeInvertLinks__Q24Game8RouteMgrFv, global
/* 801729E4 0016F924  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801729E8 0016F928  7C 08 02 A6 */	mflr r0
/* 801729EC 0016F92C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801729F0 0016F930  BF 41 00 08 */	stmw r26, 8(r1)
/* 801729F4 0016F934  7C 7A 1B 78 */	mr r26, r3
/* 801729F8 0016F938  3B C0 00 00 */	li r30, 0
/* 801729FC 0016F93C  48 00 01 0C */	b .L_80172B08
.L_80172A00:
/* 80172A00 0016F940  7F 43 D3 78 */	mr r3, r26
/* 80172A04 0016F944  7F C4 F3 78 */	mr r4, r30
/* 80172A08 0016F948  81 9A 00 00 */	lwz r12, 0(r26)
/* 80172A0C 0016F94C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80172A10 0016F950  7D 89 03 A6 */	mtctr r12
/* 80172A14 0016F954  4E 80 04 21 */	bctrl 
/* 80172A18 0016F958  7C 7D 1B 78 */	mr r29, r3
/* 80172A1C 0016F95C  3B 80 00 00 */	li r28, 0
/* 80172A20 0016F960  7F BF EB 78 */	mr r31, r29
/* 80172A24 0016F964  48 00 00 D4 */	b .L_80172AF8
.L_80172A28:
/* 80172A28 0016F968  A8 9F 00 3A */	lha r4, 0x3a(r31)
/* 80172A2C 0016F96C  2C 04 FF FF */	cmpwi r4, -1
/* 80172A30 0016F970  41 82 00 C0 */	beq .L_80172AF0
/* 80172A34 0016F974  81 9A 00 00 */	lwz r12, 0(r26)
/* 80172A38 0016F978  7F 43 D3 78 */	mr r3, r26
/* 80172A3C 0016F97C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80172A40 0016F980  7D 89 03 A6 */	mtctr r12
/* 80172A44 0016F984  4E 80 04 21 */	bctrl 
/* 80172A48 0016F988  7C 60 1B 78 */	mr r0, r3
/* 80172A4C 0016F98C  7F 43 D3 78 */	mr r3, r26
/* 80172A50 0016F990  7C 1B 03 78 */	mr r27, r0
/* 80172A54 0016F994  7F A4 EB 78 */	mr r4, r29
/* 80172A58 0016F998  7F 65 DB 78 */	mr r5, r27
/* 80172A5C 0016F99C  48 00 00 D1 */	bl linkable__Q24Game8RouteMgrFPQ24Game8WayPointPQ24Game8WayPoint
/* 80172A60 0016F9A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80172A64 0016F9A4  41 82 00 8C */	beq .L_80172AF0
/* 80172A68 0016F9A8  A8 1B 00 5C */	lha r0, 0x5c(r27)
/* 80172A6C 0016F9AC  2C 00 00 08 */	cmpwi r0, 8
/* 80172A70 0016F9B0  41 80 00 28 */	blt .L_80172A98
/* 80172A74 0016F9B4  3C 60 80 48 */	lis r3, lbl_8047E554@ha
/* 80172A78 0016F9B8  3C 80 80 48 */	lis r4, lbl_8047E5B4@ha
/* 80172A7C 0016F9BC  38 A4 E5 B4 */	addi r5, r4, lbl_8047E5B4@l
/* 80172A80 0016F9C0  A8 DB 00 36 */	lha r6, 0x36(r27)
/* 80172A84 0016F9C4  A8 FD 00 36 */	lha r7, 0x36(r29)
/* 80172A88 0016F9C8  38 63 E5 54 */	addi r3, r3, lbl_8047E554@l
/* 80172A8C 0016F9CC  38 80 02 0D */	li r4, 0x20d
/* 80172A90 0016F9D0  4C C6 31 82 */	crclr 6
/* 80172A94 0016F9D4  4B EB 7B AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80172A98:
/* 80172A98 0016F9D8  A8 1B 00 38 */	lha r0, 0x38(r27)
/* 80172A9C 0016F9DC  7F 63 DB 78 */	mr r3, r27
/* 80172AA0 0016F9E0  A8 9D 00 36 */	lha r4, 0x36(r29)
/* 80172AA4 0016F9E4  38 A0 00 00 */	li r5, 0
/* 80172AA8 0016F9E8  7C 09 03 A6 */	mtctr r0
/* 80172AAC 0016F9EC  2C 00 00 00 */	cmpwi r0, 0
/* 80172AB0 0016F9F0  40 81 00 1C */	ble .L_80172ACC
.L_80172AB4:
/* 80172AB4 0016F9F4  A8 03 00 3A */	lha r0, 0x3a(r3)
/* 80172AB8 0016F9F8  7C 00 20 00 */	cmpw r0, r4
/* 80172ABC 0016F9FC  40 82 00 08 */	bne .L_80172AC4
/* 80172AC0 0016FA00  38 A0 00 01 */	li r5, 1
.L_80172AC4:
/* 80172AC4 0016FA04  38 63 00 02 */	addi r3, r3, 2
/* 80172AC8 0016FA08  42 00 FF EC */	bdnz .L_80172AB4
.L_80172ACC:
/* 80172ACC 0016FA0C  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 80172AD0 0016FA10  40 82 00 20 */	bne .L_80172AF0
/* 80172AD4 0016FA14  A8 1B 00 5C */	lha r0, 0x5c(r27)
/* 80172AD8 0016FA18  54 03 08 3C */	slwi r3, r0, 1
/* 80172ADC 0016FA1C  38 03 00 5E */	addi r0, r3, 0x5e
/* 80172AE0 0016FA20  7C 9B 03 2E */	sthx r4, r27, r0
/* 80172AE4 0016FA24  A8 7B 00 5C */	lha r3, 0x5c(r27)
/* 80172AE8 0016FA28  38 03 00 01 */	addi r0, r3, 1
/* 80172AEC 0016FA2C  B0 1B 00 5C */	sth r0, 0x5c(r27)
.L_80172AF0:
/* 80172AF0 0016FA30  3B FF 00 02 */	addi r31, r31, 2
/* 80172AF4 0016FA34  3B 9C 00 01 */	addi r28, r28, 1
.L_80172AF8:
/* 80172AF8 0016FA38  A8 1D 00 38 */	lha r0, 0x38(r29)
/* 80172AFC 0016FA3C  7C 1C 00 00 */	cmpw r28, r0
/* 80172B00 0016FA40  41 80 FF 28 */	blt .L_80172A28
/* 80172B04 0016FA44  3B DE 00 01 */	addi r30, r30, 1
.L_80172B08:
/* 80172B08 0016FA48  A0 1A 00 1C */	lhz r0, 0x1c(r26)
/* 80172B0C 0016FA4C  7F C3 07 34 */	extsh r3, r30
/* 80172B10 0016FA50  7C 03 00 00 */	cmpw r3, r0
/* 80172B14 0016FA54  41 80 FE EC */	blt .L_80172A00
/* 80172B18 0016FA58  BB 41 00 08 */	lmw r26, 8(r1)
/* 80172B1C 0016FA5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80172B20 0016FA60  7C 08 03 A6 */	mtlr r0
/* 80172B24 0016FA64  38 21 00 20 */	addi r1, r1, 0x20
/* 80172B28 0016FA68  4E 80 00 20 */	blr 
.endfn makeInvertLinks__Q24Game8RouteMgrFv

.fn linkable__Q24Game8RouteMgrFPQ24Game8WayPointPQ24Game8WayPoint, global
/* 80172B2C 0016FA6C  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 80172B30 0016FA70  7C 08 02 A6 */	mflr r0
/* 80172B34 0016FA74  90 01 01 14 */	stw r0, 0x114(r1)
/* 80172B38 0016FA78  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 80172B3C 0016FA7C  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 80172B40 0016FA80  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 80172B44 0016FA84  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 80172B48 0016FA88  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 80172B4C 0016FA8C  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 80172B50 0016FA90  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 80172B54 0016FA94  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 80172B58 0016FA98  DB 61 00 C0 */	stfd f27, 0xc0(r1)
/* 80172B5C 0016FA9C  F3 61 00 C8 */	psq_st f27, 200(r1), 0, qr0
/* 80172B60 0016FAA0  DB 41 00 B0 */	stfd f26, 0xb0(r1)
/* 80172B64 0016FAA4  F3 41 00 B8 */	psq_st f26, 184(r1), 0, qr0
/* 80172B68 0016FAA8  DB 21 00 A0 */	stfd f25, 0xa0(r1)
/* 80172B6C 0016FAAC  F3 21 00 A8 */	psq_st f25, 168(r1), 0, qr0
/* 80172B70 0016FAB0  DB 01 00 90 */	stfd f24, 0x90(r1)
/* 80172B74 0016FAB4  F3 01 00 98 */	psq_st f24, 152(r1), 0, qr0
/* 80172B78 0016FAB8  DA E1 00 80 */	stfd f23, 0x80(r1)
/* 80172B7C 0016FABC  F2 E1 00 88 */	psq_st f23, 136(r1), 0, qr0
/* 80172B80 0016FAC0  DA C1 00 70 */	stfd f22, 0x70(r1)
/* 80172B84 0016FAC4  F2 C1 00 78 */	psq_st f22, 120(r1), 0, qr0
/* 80172B88 0016FAC8  DA A1 00 60 */	stfd f21, 0x60(r1)
/* 80172B8C 0016FACC  F2 A1 00 68 */	psq_st f21, 104(r1), 0, qr0
/* 80172B90 0016FAD0  DA 81 00 50 */	stfd f20, 0x50(r1)
/* 80172B94 0016FAD4  F2 81 00 58 */	psq_st f20, 88(r1), 0, qr0
/* 80172B98 0016FAD8  DA 61 00 40 */	stfd f19, 0x40(r1)
/* 80172B9C 0016FADC  F2 61 00 48 */	psq_st f19, 72(r1), 0, qr0
/* 80172BA0 0016FAE0  80 0D 93 08 */	lwz r0, mapMgr__4Game@sda21(r13)
/* 80172BA4 0016FAE4  28 00 00 00 */	cmplwi r0, 0
/* 80172BA8 0016FAE8  40 82 00 0C */	bne .L_80172BB4
/* 80172BAC 0016FAEC  38 60 00 01 */	li r3, 1
/* 80172BB0 0016FAF0  48 00 00 E8 */	b .L_80172C98
.L_80172BB4:
/* 80172BB4 0016FAF4  C3 44 00 50 */	lfs f26, 0x50(r4)
/* 80172BB8 0016FAF8  C2 A2 A6 A8 */	lfs f21, lbl_80518A08@sda21(r2)
/* 80172BBC 0016FAFC  C3 64 00 4C */	lfs f27, 0x4c(r4)
/* 80172BC0 0016FB00  FE C0 D0 90 */	fmr f22, f26
/* 80172BC4 0016FB04  C0 25 00 4C */	lfs f1, 0x4c(r5)
/* 80172BC8 0016FB08  FF C0 A8 90 */	fmr f30, f21
/* 80172BCC 0016FB0C  C3 24 00 54 */	lfs f25, 0x54(r4)
/* 80172BD0 0016FB10  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 80172BD4 0016FB14  EF 01 D8 28 */	fsubs f24, f1, f27
/* 80172BD8 0016FB18  C3 82 A6 AC */	lfs f28, lbl_80518A0C@sda21(r2)
/* 80172BDC 0016FB1C  EE E0 C8 28 */	fsubs f23, f0, f25
/* 80172BE0 0016FB20  C3 A2 A6 B0 */	lfs f29, lbl_80518A10@sda21(r2)
/* 80172BE4 0016FB24  C3 E2 A6 A0 */	lfs f31, lbl_80518A00@sda21(r2)
/* 80172BE8 0016FB28  C2 62 A6 B4 */	lfs f19, lbl_80518A14@sda21(r2)
/* 80172BEC 0016FB2C  C2 82 A6 B8 */	lfs f20, lbl_80518A18@sda21(r2)
/* 80172BF0 0016FB30  48 00 00 98 */	b .L_80172C88
.L_80172BF4:
/* 80172BF4 0016FB34  EC 58 05 72 */	fmuls f2, f24, f21
/* 80172BF8 0016FB38  38 A0 00 00 */	li r5, 0
/* 80172BFC 0016FB3C  EC 3E 05 72 */	fmuls f1, f30, f21
/* 80172C00 0016FB40  38 00 00 01 */	li r0, 1
/* 80172C04 0016FB44  EC 17 05 72 */	fmuls f0, f23, f21
/* 80172C08 0016FB48  98 01 00 14 */	stb r0, 0x14(r1)
/* 80172C0C 0016FB4C  EC 5B 10 2A */	fadds f2, f27, f2
/* 80172C10 0016FB50  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 80172C14 0016FB54  EC 3A 08 2A */	fadds f1, f26, f1
/* 80172C18 0016FB58  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80172C1C 0016FB5C  EC 19 00 2A */	fadds f0, f25, f0
/* 80172C20 0016FB60  D3 81 00 20 */	stfs f28, 0x20(r1)
/* 80172C24 0016FB64  D3 A1 00 24 */	stfs f29, 0x24(r1)
/* 80172C28 0016FB68  38 81 00 08 */	addi r4, r1, 8
/* 80172C2C 0016FB6C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80172C30 0016FB70  D3 C1 00 28 */	stfs f30, 0x28(r1)
/* 80172C34 0016FB74  D3 E1 00 2C */	stfs f31, 0x2c(r1)
/* 80172C38 0016FB78  D3 C1 00 30 */	stfs f30, 0x30(r1)
/* 80172C3C 0016FB7C  98 A1 00 15 */	stb r5, 0x15(r1)
/* 80172C40 0016FB80  D0 41 00 08 */	stfs f2, 8(r1)
/* 80172C44 0016FB84  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80172C48 0016FB88  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80172C4C 0016FB8C  98 A1 00 14 */	stb r5, 0x14(r1)
/* 80172C50 0016FB90  81 83 00 04 */	lwz r12, 4(r3)
/* 80172C54 0016FB94  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80172C58 0016FB98  7D 89 03 A6 */	mtctr r12
/* 80172C5C 0016FB9C  4E 80 04 21 */	bctrl 
/* 80172C60 0016FBA0  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80172C64 0016FBA4  EC 16 08 28 */	fsubs f0, f22, f1
/* 80172C68 0016FBA8  FC 00 02 10 */	fabs f0, f0
/* 80172C6C 0016FBAC  FC 00 00 18 */	frsp f0, f0
/* 80172C70 0016FBB0  FC 00 98 40 */	fcmpo cr0, f0, f19
/* 80172C74 0016FBB4  40 81 00 0C */	ble .L_80172C80
/* 80172C78 0016FBB8  38 60 00 00 */	li r3, 0
/* 80172C7C 0016FBBC  48 00 00 1C */	b .L_80172C98
.L_80172C80:
/* 80172C80 0016FBC0  FE C0 08 90 */	fmr f22, f1
/* 80172C84 0016FBC4  EE B5 A0 2A */	fadds f21, f21, f20
.L_80172C88:
/* 80172C88 0016FBC8  FC 15 F8 40 */	fcmpo cr0, f21, f31
/* 80172C8C 0016FBCC  4C 40 13 82 */	cror 2, 0, 2
/* 80172C90 0016FBD0  41 82 FF 64 */	beq .L_80172BF4
/* 80172C94 0016FBD4  38 60 00 01 */	li r3, 1
.L_80172C98:
/* 80172C98 0016FBD8  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 80172C9C 0016FBDC  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 80172CA0 0016FBE0  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 80172CA4 0016FBE4  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 80172CA8 0016FBE8  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 80172CAC 0016FBEC  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 80172CB0 0016FBF0  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 80172CB4 0016FBF4  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 80172CB8 0016FBF8  E3 61 00 C8 */	psq_l f27, 200(r1), 0, qr0
/* 80172CBC 0016FBFC  CB 61 00 C0 */	lfd f27, 0xc0(r1)
/* 80172CC0 0016FC00  E3 41 00 B8 */	psq_l f26, 184(r1), 0, qr0
/* 80172CC4 0016FC04  CB 41 00 B0 */	lfd f26, 0xb0(r1)
/* 80172CC8 0016FC08  E3 21 00 A8 */	psq_l f25, 168(r1), 0, qr0
/* 80172CCC 0016FC0C  CB 21 00 A0 */	lfd f25, 0xa0(r1)
/* 80172CD0 0016FC10  E3 01 00 98 */	psq_l f24, 152(r1), 0, qr0
/* 80172CD4 0016FC14  CB 01 00 90 */	lfd f24, 0x90(r1)
/* 80172CD8 0016FC18  E2 E1 00 88 */	psq_l f23, 136(r1), 0, qr0
/* 80172CDC 0016FC1C  CA E1 00 80 */	lfd f23, 0x80(r1)
/* 80172CE0 0016FC20  E2 C1 00 78 */	psq_l f22, 120(r1), 0, qr0
/* 80172CE4 0016FC24  CA C1 00 70 */	lfd f22, 0x70(r1)
/* 80172CE8 0016FC28  E2 A1 00 68 */	psq_l f21, 104(r1), 0, qr0
/* 80172CEC 0016FC2C  CA A1 00 60 */	lfd f21, 0x60(r1)
/* 80172CF0 0016FC30  E2 81 00 58 */	psq_l f20, 88(r1), 0, qr0
/* 80172CF4 0016FC34  CA 81 00 50 */	lfd f20, 0x50(r1)
/* 80172CF8 0016FC38  E2 61 00 48 */	psq_l f19, 72(r1), 0, qr0
/* 80172CFC 0016FC3C  80 01 01 14 */	lwz r0, 0x114(r1)
/* 80172D00 0016FC40  CA 61 00 40 */	lfd f19, 0x40(r1)
/* 80172D04 0016FC44  7C 08 03 A6 */	mtlr r0
/* 80172D08 0016FC48  38 21 01 10 */	addi r1, r1, 0x110
/* 80172D0C 0016FC4C  4E 80 00 20 */	blr 
.endfn linkable__Q24Game8RouteMgrFPQ24Game8WayPointPQ24Game8WayPoint

.fn refreshWater__Q24Game8RouteMgrFv, global
/* 80172D10 0016FC50  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80172D14 0016FC54  7C 08 02 A6 */	mflr r0
/* 80172D18 0016FC58  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8WayPoint>"@ha
/* 80172D1C 0016FC5C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80172D20 0016FC60  38 00 00 00 */	li r0, 0
/* 80172D24 0016FC64  38 84 23 80 */	addi r4, r4, "__vt__26Iterator<Q24Game8WayPoint>"@l
/* 80172D28 0016FC68  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80172D2C 0016FC6C  28 00 00 00 */	cmplwi r0, 0
/* 80172D30 0016FC70  90 01 00 24 */	stw r0, 0x24(r1)
/* 80172D34 0016FC74  90 81 00 18 */	stw r4, 0x18(r1)
/* 80172D38 0016FC78  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80172D3C 0016FC7C  90 61 00 20 */	stw r3, 0x20(r1)
/* 80172D40 0016FC80  40 82 00 1C */	bne .L_80172D5C
/* 80172D44 0016FC84  81 83 00 00 */	lwz r12, 0(r3)
/* 80172D48 0016FC88  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80172D4C 0016FC8C  7D 89 03 A6 */	mtctr r12
/* 80172D50 0016FC90  4E 80 04 21 */	bctrl 
/* 80172D54 0016FC94  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80172D58 0016FC98  48 00 01 EC */	b .L_80172F44
.L_80172D5C:
/* 80172D5C 0016FC9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80172D60 0016FCA0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80172D64 0016FCA4  7D 89 03 A6 */	mtctr r12
/* 80172D68 0016FCA8  4E 80 04 21 */	bctrl 
/* 80172D6C 0016FCAC  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80172D70 0016FCB0  48 00 00 58 */	b .L_80172DC8
.L_80172D74:
/* 80172D74 0016FCB4  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80172D78 0016FCB8  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80172D7C 0016FCBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80172D80 0016FCC0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80172D84 0016FCC4  7D 89 03 A6 */	mtctr r12
/* 80172D88 0016FCC8  4E 80 04 21 */	bctrl 
/* 80172D8C 0016FCCC  7C 64 1B 78 */	mr r4, r3
/* 80172D90 0016FCD0  80 61 00 24 */	lwz r3, 0x24(r1)
/* 80172D94 0016FCD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80172D98 0016FCD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80172D9C 0016FCDC  7D 89 03 A6 */	mtctr r12
/* 80172DA0 0016FCE0  4E 80 04 21 */	bctrl 
/* 80172DA4 0016FCE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80172DA8 0016FCE8  40 82 01 9C */	bne .L_80172F44
/* 80172DAC 0016FCEC  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80172DB0 0016FCF0  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80172DB4 0016FCF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80172DB8 0016FCF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80172DBC 0016FCFC  7D 89 03 A6 */	mtctr r12
/* 80172DC0 0016FD00  4E 80 04 21 */	bctrl 
/* 80172DC4 0016FD04  90 61 00 1C */	stw r3, 0x1c(r1)
.L_80172DC8:
/* 80172DC8 0016FD08  81 81 00 18 */	lwz r12, 0x18(r1)
/* 80172DCC 0016FD0C  38 61 00 18 */	addi r3, r1, 0x18
/* 80172DD0 0016FD10  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80172DD4 0016FD14  7D 89 03 A6 */	mtctr r12
/* 80172DD8 0016FD18  4E 80 04 21 */	bctrl 
/* 80172DDC 0016FD1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80172DE0 0016FD20  41 82 FF 94 */	beq .L_80172D74
/* 80172DE4 0016FD24  48 00 01 60 */	b .L_80172F44
.L_80172DE8:
/* 80172DE8 0016FD28  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80172DEC 0016FD2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80172DF0 0016FD30  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80172DF4 0016FD34  7D 89 03 A6 */	mtctr r12
/* 80172DF8 0016FD38  4E 80 04 21 */	bctrl 
/* 80172DFC 0016FD3C  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80172E00 0016FD40  7C 7F 1B 78 */	mr r31, r3
/* 80172E04 0016FD44  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80172E08 0016FD48  98 03 00 34 */	stb r0, 0x34(r3)
/* 80172E0C 0016FD4C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80172E10 0016FD50  28 03 00 00 */	cmplwi r3, 0
/* 80172E14 0016FD54  41 82 00 74 */	beq .L_80172E88
/* 80172E18 0016FD58  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80172E1C 0016FD5C  C0 5F 00 54 */	lfs f2, 0x54(r31)
/* 80172E20 0016FD60  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 80172E24 0016FD64  D0 01 00 08 */	stfs f0, 8(r1)
/* 80172E28 0016FD68  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80172E2C 0016FD6C  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 80172E30 0016FD70  88 1F 00 34 */	lbz r0, 0x34(r31)
/* 80172E34 0016FD74  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80172E38 0016FD78  40 82 00 1C */	bne .L_80172E54
/* 80172E3C 0016FD7C  81 83 00 04 */	lwz r12, 4(r3)
/* 80172E40 0016FD80  38 81 00 08 */	addi r4, r1, 8
/* 80172E44 0016FD84  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80172E48 0016FD88  7D 89 03 A6 */	mtctr r12
/* 80172E4C 0016FD8C  4E 80 04 21 */	bctrl 
/* 80172E50 0016FD90  D0 21 00 0C */	stfs f1, 0xc(r1)
.L_80172E54:
/* 80172E54 0016FD94  C0 02 A6 BC */	lfs f0, lbl_80518A1C@sda21(r2)
/* 80172E58 0016FD98  38 81 00 08 */	addi r4, r1, 8
/* 80172E5C 0016FD9C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80172E60 0016FDA0  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80172E64 0016FDA4  4B FF 0A C5 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 80172E68 0016FDA8  28 03 00 00 */	cmplwi r3, 0
/* 80172E6C 0016FDAC  41 82 00 1C */	beq .L_80172E88
/* 80172E70 0016FDB0  88 03 00 04 */	lbz r0, 4(r3)
/* 80172E74 0016FDB4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80172E78 0016FDB8  41 82 00 10 */	beq .L_80172E88
/* 80172E7C 0016FDBC  88 1F 00 34 */	lbz r0, 0x34(r31)
/* 80172E80 0016FDC0  60 00 00 02 */	ori r0, r0, 2
/* 80172E84 0016FDC4  98 1F 00 34 */	stb r0, 0x34(r31)
.L_80172E88:
/* 80172E88 0016FDC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80172E8C 0016FDCC  28 00 00 00 */	cmplwi r0, 0
/* 80172E90 0016FDD0  40 82 00 24 */	bne .L_80172EB4
/* 80172E94 0016FDD4  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80172E98 0016FDD8  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80172E9C 0016FDDC  81 83 00 00 */	lwz r12, 0(r3)
/* 80172EA0 0016FDE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80172EA4 0016FDE4  7D 89 03 A6 */	mtctr r12
/* 80172EA8 0016FDE8  4E 80 04 21 */	bctrl 
/* 80172EAC 0016FDEC  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80172EB0 0016FDF0  48 00 00 94 */	b .L_80172F44
.L_80172EB4:
/* 80172EB4 0016FDF4  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80172EB8 0016FDF8  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80172EBC 0016FDFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80172EC0 0016FE00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80172EC4 0016FE04  7D 89 03 A6 */	mtctr r12
/* 80172EC8 0016FE08  4E 80 04 21 */	bctrl 
/* 80172ECC 0016FE0C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80172ED0 0016FE10  48 00 00 58 */	b .L_80172F28
.L_80172ED4:
/* 80172ED4 0016FE14  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80172ED8 0016FE18  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80172EDC 0016FE1C  81 83 00 00 */	lwz r12, 0(r3)
/* 80172EE0 0016FE20  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80172EE4 0016FE24  7D 89 03 A6 */	mtctr r12
/* 80172EE8 0016FE28  4E 80 04 21 */	bctrl 
/* 80172EEC 0016FE2C  7C 64 1B 78 */	mr r4, r3
/* 80172EF0 0016FE30  80 61 00 24 */	lwz r3, 0x24(r1)
/* 80172EF4 0016FE34  81 83 00 00 */	lwz r12, 0(r3)
/* 80172EF8 0016FE38  81 8C 00 08 */	lwz r12, 8(r12)
/* 80172EFC 0016FE3C  7D 89 03 A6 */	mtctr r12
/* 80172F00 0016FE40  4E 80 04 21 */	bctrl 
/* 80172F04 0016FE44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80172F08 0016FE48  40 82 00 3C */	bne .L_80172F44
/* 80172F0C 0016FE4C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80172F10 0016FE50  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80172F14 0016FE54  81 83 00 00 */	lwz r12, 0(r3)
/* 80172F18 0016FE58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80172F1C 0016FE5C  7D 89 03 A6 */	mtctr r12
/* 80172F20 0016FE60  4E 80 04 21 */	bctrl 
/* 80172F24 0016FE64  90 61 00 1C */	stw r3, 0x1c(r1)
.L_80172F28:
/* 80172F28 0016FE68  81 81 00 18 */	lwz r12, 0x18(r1)
/* 80172F2C 0016FE6C  38 61 00 18 */	addi r3, r1, 0x18
/* 80172F30 0016FE70  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80172F34 0016FE74  7D 89 03 A6 */	mtctr r12
/* 80172F38 0016FE78  4E 80 04 21 */	bctrl 
/* 80172F3C 0016FE7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80172F40 0016FE80  41 82 FF 94 */	beq .L_80172ED4
.L_80172F44:
/* 80172F44 0016FE84  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80172F48 0016FE88  81 83 00 00 */	lwz r12, 0(r3)
/* 80172F4C 0016FE8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80172F50 0016FE90  7D 89 03 A6 */	mtctr r12
/* 80172F54 0016FE94  4E 80 04 21 */	bctrl 
/* 80172F58 0016FE98  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80172F5C 0016FE9C  7C 04 18 40 */	cmplw r4, r3
/* 80172F60 0016FEA0  40 82 FE 88 */	bne .L_80172DE8
/* 80172F64 0016FEA4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80172F68 0016FEA8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80172F6C 0016FEAC  7C 08 03 A6 */	mtlr r0
/* 80172F70 0016FEB0  38 21 00 30 */	addi r1, r1, 0x30
/* 80172F74 0016FEB4  4E 80 00 20 */	blr 
.endfn refreshWater__Q24Game8RouteMgrFv

.fn "isDone__26Iterator<Q24Game8WayPoint>Fv", weak
/* 80172F78 0016FEB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80172F7C 0016FEBC  7C 08 02 A6 */	mflr r0
/* 80172F80 0016FEC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172F84 0016FEC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80172F88 0016FEC8  7C 7F 1B 78 */	mr r31, r3
/* 80172F8C 0016FECC  80 63 00 08 */	lwz r3, 8(r3)
/* 80172F90 0016FED0  81 83 00 00 */	lwz r12, 0(r3)
/* 80172F94 0016FED4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80172F98 0016FED8  7D 89 03 A6 */	mtctr r12
/* 80172F9C 0016FEDC  4E 80 04 21 */	bctrl 
/* 80172FA0 0016FEE0  80 1F 00 04 */	lwz r0, 4(r31)
/* 80172FA4 0016FEE4  7C 00 18 50 */	subf r0, r0, r3
/* 80172FA8 0016FEE8  7C 00 00 34 */	cntlzw r0, r0
/* 80172FAC 0016FEEC  54 03 D9 7E */	srwi r3, r0, 5
/* 80172FB0 0016FEF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80172FB4 0016FEF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80172FB8 0016FEF8  7C 08 03 A6 */	mtlr r0
/* 80172FBC 0016FEFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80172FC0 0016FF00  4E 80 00 20 */	blr 
.endfn "isDone__26Iterator<Q24Game8WayPoint>Fv"

.fn getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg, global
/* 80172FC4 0016FF04  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 80172FC8 0016FF08  7C 08 02 A6 */	mflr r0
/* 80172FCC 0016FF0C  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80172FD0 0016FF10  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 80172FD4 0016FF14  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 80172FD8 0016FF18  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 80172FDC 0016FF1C  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 80172FE0 0016FF20  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 80172FE4 0016FF24  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 80172FE8 0016FF28  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 80172FEC 0016FF2C  38 00 00 00 */	li r0, 0
/* 80172FF0 0016FF30  3C A0 80 4B */	lis r5, "__vt__26Iterator<Q24Game8WayPoint>"@ha
/* 80172FF4 0016FF34  38 A5 23 80 */	addi r5, r5, "__vt__26Iterator<Q24Game8WayPoint>"@l
/* 80172FF8 0016FF38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80172FFC 0016FF3C  28 00 00 00 */	cmplwi r0, 0
/* 80173000 0016FF40  C3 C2 A6 C0 */	lfs f30, lbl_80518A20@sda21(r2)
/* 80173004 0016FF44  90 A1 00 08 */	stw r5, 8(r1)
/* 80173008 0016FF48  7C 9E 23 78 */	mr r30, r4
/* 8017300C 0016FF4C  3B E0 00 00 */	li r31, 0
/* 80173010 0016FF50  90 01 00 0C */	stw r0, 0xc(r1)
/* 80173014 0016FF54  90 61 00 10 */	stw r3, 0x10(r1)
/* 80173018 0016FF58  40 82 00 1C */	bne .L_80173034
/* 8017301C 0016FF5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80173020 0016FF60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80173024 0016FF64  7D 89 03 A6 */	mtctr r12
/* 80173028 0016FF68  4E 80 04 21 */	bctrl 
/* 8017302C 0016FF6C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80173030 0016FF70  48 00 02 EC */	b .L_8017331C
.L_80173034:
/* 80173034 0016FF74  81 83 00 00 */	lwz r12, 0(r3)
/* 80173038 0016FF78  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8017303C 0016FF7C  7D 89 03 A6 */	mtctr r12
/* 80173040 0016FF80  4E 80 04 21 */	bctrl 
/* 80173044 0016FF84  90 61 00 0C */	stw r3, 0xc(r1)
/* 80173048 0016FF88  48 00 00 58 */	b .L_801730A0
.L_8017304C:
/* 8017304C 0016FF8C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173050 0016FF90  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173054 0016FF94  81 83 00 00 */	lwz r12, 0(r3)
/* 80173058 0016FF98  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8017305C 0016FF9C  7D 89 03 A6 */	mtctr r12
/* 80173060 0016FFA0  4E 80 04 21 */	bctrl 
/* 80173064 0016FFA4  7C 64 1B 78 */	mr r4, r3
/* 80173068 0016FFA8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8017306C 0016FFAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80173070 0016FFB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80173074 0016FFB4  7D 89 03 A6 */	mtctr r12
/* 80173078 0016FFB8  4E 80 04 21 */	bctrl 
/* 8017307C 0016FFBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173080 0016FFC0  40 82 02 9C */	bne .L_8017331C
/* 80173084 0016FFC4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173088 0016FFC8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8017308C 0016FFCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80173090 0016FFD0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173094 0016FFD4  7D 89 03 A6 */	mtctr r12
/* 80173098 0016FFD8  4E 80 04 21 */	bctrl 
/* 8017309C 0016FFDC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801730A0:
/* 801730A0 0016FFE0  81 81 00 08 */	lwz r12, 8(r1)
/* 801730A4 0016FFE4  38 61 00 08 */	addi r3, r1, 8
/* 801730A8 0016FFE8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801730AC 0016FFEC  7D 89 03 A6 */	mtctr r12
/* 801730B0 0016FFF0  4E 80 04 21 */	bctrl 
/* 801730B4 0016FFF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801730B8 0016FFF8  41 82 FF 94 */	beq .L_8017304C
/* 801730BC 0016FFFC  48 00 02 60 */	b .L_8017331C
.L_801730C0:
/* 801730C0 00170000  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801730C4 00170004  81 83 00 00 */	lwz r12, 0(r3)
/* 801730C8 00170008  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801730CC 0017000C  7D 89 03 A6 */	mtctr r12
/* 801730D0 00170010  4E 80 04 21 */	bctrl 
/* 801730D4 00170014  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 801730D8 00170018  7C 7D 1B 78 */	mr r29, r3
/* 801730DC 0017001C  28 00 00 00 */	cmplwi r0, 0
/* 801730E0 00170020  41 82 00 24 */	beq .L_80173104
/* 801730E4 00170024  7C 03 03 78 */	mr r3, r0
/* 801730E8 00170028  7F A4 EB 78 */	mr r4, r29
/* 801730EC 0017002C  81 83 00 00 */	lwz r12, 0(r3)
/* 801730F0 00170030  81 8C 00 08 */	lwz r12, 8(r12)
/* 801730F4 00170034  7D 89 03 A6 */	mtctr r12
/* 801730F8 00170038  4E 80 04 21 */	bctrl 
/* 801730FC 0017003C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173100 00170040  41 82 01 60 */	beq .L_80173260
.L_80173104:
/* 80173104 00170044  C0 3D 00 50 */	lfs f1, 0x50(r29)
/* 80173108 00170048  C0 1E 00 04 */	lfs f0, 4(r30)
/* 8017310C 0017004C  C0 7D 00 54 */	lfs f3, 0x54(r29)
/* 80173110 00170050  EC 81 00 28 */	fsubs f4, f1, f0
/* 80173114 00170054  C0 5E 00 08 */	lfs f2, 8(r30)
/* 80173118 00170058  C0 3D 00 4C */	lfs f1, 0x4c(r29)
/* 8017311C 0017005C  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80173120 00170060  EC 43 10 28 */	fsubs f2, f3, f2
/* 80173124 00170064  EC 64 01 32 */	fmuls f3, f4, f4
/* 80173128 00170068  EC 21 00 28 */	fsubs f1, f1, f0
/* 8017312C 0017006C  C0 02 A6 A8 */	lfs f0, lbl_80518A08@sda21(r2)
/* 80173130 00170070  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80173134 00170074  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 80173138 00170078  EF E2 08 2A */	fadds f31, f2, f1
/* 8017313C 0017007C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80173140 00170080  40 81 00 14 */	ble .L_80173154
/* 80173144 00170084  40 81 00 14 */	ble .L_80173158
/* 80173148 00170088  FC 00 F8 34 */	frsqrte f0, f31
/* 8017314C 0017008C  EF E0 07 F2 */	fmuls f31, f0, f31
/* 80173150 00170090  48 00 00 08 */	b .L_80173158
.L_80173154:
/* 80173154 00170094  FF E0 00 90 */	fmr f31, f0
.L_80173158:
/* 80173158 00170098  FC 1F F0 40 */	fcmpo cr0, f31, f30
/* 8017315C 0017009C  40 80 01 04 */	bge .L_80173260
/* 80173160 001700A0  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 80173164 001700A4  28 00 00 00 */	cmplwi r0, 0
/* 80173168 001700A8  41 82 00 F0 */	beq .L_80173258
/* 8017316C 001700AC  C0 02 A6 C4 */	lfs f0, lbl_80518A24@sda21(r2)
/* 80173170 001700B0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80173174 001700B4  40 80 00 E4 */	bge .L_80173258
/* 80173178 001700B8  C0 02 A6 C0 */	lfs f0, lbl_80518A20@sda21(r2)
/* 8017317C 001700BC  38 00 00 01 */	li r0, 1
/* 80173180 001700C0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80173184 001700C4  98 01 00 84 */	stb r0, 0x84(r1)
/* 80173188 001700C8  28 03 00 00 */	cmplwi r3, 0
/* 8017318C 001700CC  D0 01 00 A8 */	stfs f0, 0xa8(r1)
/* 80173190 001700D0  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80173194 001700D4  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 80173198 001700D8  C0 1E 00 04 */	lfs f0, 4(r30)
/* 8017319C 001700DC  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 801731A0 001700E0  C0 1E 00 08 */	lfs f0, 8(r30)
/* 801731A4 001700E4  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 801731A8 001700E8  C0 1D 00 4C */	lfs f0, 0x4c(r29)
/* 801731AC 001700EC  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 801731B0 001700F0  C0 1D 00 50 */	lfs f0, 0x50(r29)
/* 801731B4 001700F4  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 801731B8 001700F8  C0 1D 00 54 */	lfs f0, 0x54(r29)
/* 801731BC 001700FC  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 801731C0 00170100  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 801731C4 00170104  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 801731C8 00170108  41 82 00 20 */	beq .L_801731E8
/* 801731CC 0017010C  81 83 00 04 */	lwz r12, 4(r3)
/* 801731D0 00170110  38 81 00 68 */	addi r4, r1, 0x68
/* 801731D4 00170114  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801731D8 00170118  7D 89 03 A6 */	mtctr r12
/* 801731DC 0017011C  4E 80 04 21 */	bctrl 
/* 801731E0 00170120  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801731E4 00170124  40 82 00 7C */	bne .L_80173260
.L_801731E8:
/* 801731E8 00170128  C0 02 A6 C0 */	lfs f0, lbl_80518A20@sda21(r2)
/* 801731EC 0017012C  38 00 00 01 */	li r0, 1
/* 801731F0 00170130  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801731F4 00170134  98 01 00 34 */	stb r0, 0x34(r1)
/* 801731F8 00170138  28 03 00 00 */	cmplwi r3, 0
/* 801731FC 0017013C  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80173200 00170140  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80173204 00170144  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80173208 00170148  C0 1E 00 04 */	lfs f0, 4(r30)
/* 8017320C 0017014C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80173210 00170150  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80173214 00170154  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80173218 00170158  C0 1D 00 4C */	lfs f0, 0x4c(r29)
/* 8017321C 0017015C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80173220 00170160  C0 1D 00 50 */	lfs f0, 0x50(r29)
/* 80173224 00170164  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80173228 00170168  C0 1D 00 54 */	lfs f0, 0x54(r29)
/* 8017322C 0017016C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80173230 00170170  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 80173234 00170174  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80173238 00170178  41 82 00 20 */	beq .L_80173258
/* 8017323C 0017017C  81 83 00 00 */	lwz r12, 0(r3)
/* 80173240 00170180  38 81 00 18 */	addi r4, r1, 0x18
/* 80173244 00170184  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80173248 00170188  7D 89 03 A6 */	mtctr r12
/* 8017324C 0017018C  4E 80 04 21 */	bctrl 
/* 80173250 00170190  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173254 00170194  40 82 00 0C */	bne .L_80173260
.L_80173258:
/* 80173258 00170198  FF C0 F8 90 */	fmr f30, f31
/* 8017325C 0017019C  7F BF EB 78 */	mr r31, r29
.L_80173260:
/* 80173260 001701A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80173264 001701A4  28 00 00 00 */	cmplwi r0, 0
/* 80173268 001701A8  40 82 00 24 */	bne .L_8017328C
/* 8017326C 001701AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173270 001701B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173274 001701B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80173278 001701B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017327C 001701BC  7D 89 03 A6 */	mtctr r12
/* 80173280 001701C0  4E 80 04 21 */	bctrl 
/* 80173284 001701C4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80173288 001701C8  48 00 00 94 */	b .L_8017331C
.L_8017328C:
/* 8017328C 001701CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173290 001701D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173294 001701D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80173298 001701D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8017329C 001701DC  7D 89 03 A6 */	mtctr r12
/* 801732A0 001701E0  4E 80 04 21 */	bctrl 
/* 801732A4 001701E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801732A8 001701E8  48 00 00 58 */	b .L_80173300
.L_801732AC:
/* 801732AC 001701EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801732B0 001701F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801732B4 001701F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801732B8 001701F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801732BC 001701FC  7D 89 03 A6 */	mtctr r12
/* 801732C0 00170200  4E 80 04 21 */	bctrl 
/* 801732C4 00170204  7C 64 1B 78 */	mr r4, r3
/* 801732C8 00170208  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801732CC 0017020C  81 83 00 00 */	lwz r12, 0(r3)
/* 801732D0 00170210  81 8C 00 08 */	lwz r12, 8(r12)
/* 801732D4 00170214  7D 89 03 A6 */	mtctr r12
/* 801732D8 00170218  4E 80 04 21 */	bctrl 
/* 801732DC 0017021C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801732E0 00170220  40 82 00 3C */	bne .L_8017331C
/* 801732E4 00170224  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801732E8 00170228  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801732EC 0017022C  81 83 00 00 */	lwz r12, 0(r3)
/* 801732F0 00170230  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801732F4 00170234  7D 89 03 A6 */	mtctr r12
/* 801732F8 00170238  4E 80 04 21 */	bctrl 
/* 801732FC 0017023C  90 61 00 0C */	stw r3, 0xc(r1)
.L_80173300:
/* 80173300 00170240  81 81 00 08 */	lwz r12, 8(r1)
/* 80173304 00170244  38 61 00 08 */	addi r3, r1, 8
/* 80173308 00170248  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8017330C 0017024C  7D 89 03 A6 */	mtctr r12
/* 80173310 00170250  4E 80 04 21 */	bctrl 
/* 80173314 00170254  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173318 00170258  41 82 FF 94 */	beq .L_801732AC
.L_8017331C:
/* 8017331C 0017025C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173320 00170260  81 83 00 00 */	lwz r12, 0(r3)
/* 80173324 00170264  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80173328 00170268  7D 89 03 A6 */	mtctr r12
/* 8017332C 0017026C  4E 80 04 21 */	bctrl 
/* 80173330 00170270  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173334 00170274  7C 04 18 40 */	cmplw r4, r3
/* 80173338 00170278  40 82 FD 88 */	bne .L_801730C0
/* 8017333C 0017027C  7F E3 FB 78 */	mr r3, r31
/* 80173340 00170280  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 80173344 00170284  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 80173348 00170288  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 8017334C 0017028C  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 80173350 00170290  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 80173354 00170294  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 80173358 00170298  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8017335C 0017029C  83 A1 00 C4 */	lwz r29, 0xc4(r1)
/* 80173360 001702A0  7C 08 03 A6 */	mtlr r0
/* 80173364 001702A4  38 21 00 F0 */	addi r1, r1, 0xf0
/* 80173368 001702A8  4E 80 00 20 */	blr 
.endfn getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg

.fn getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg, global
/* 8017336C 001702AC  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80173370 001702B0  7C 08 02 A6 */	mflr r0
/* 80173374 001702B4  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80173378 001702B8  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8017337C 001702BC  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 80173380 001702C0  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 80173384 001702C4  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 80173388 001702C8  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 8017338C 001702CC  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 80173390 001702D0  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 80173394 001702D4  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 80173398 001702D8  DB 61 00 60 */	stfd f27, 0x60(r1)
/* 8017339C 001702DC  F3 61 00 68 */	psq_st f27, 104(r1), 0, qr0
/* 801733A0 001702E0  DB 41 00 50 */	stfd f26, 0x50(r1)
/* 801733A4 001702E4  F3 41 00 58 */	psq_st f26, 88(r1), 0, qr0
/* 801733A8 001702E8  BF 01 00 30 */	stmw r24, 0x30(r1)
/* 801733AC 001702EC  38 A0 00 00 */	li r5, 0
/* 801733B0 001702F0  7C 9E 23 78 */	mr r30, r4
/* 801733B4 001702F4  90 A4 00 1C */	stw r5, 0x1c(r4)
/* 801733B8 001702F8  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8WayPoint>"@ha
/* 801733BC 001702FC  7C 7D 1B 78 */	mr r29, r3
/* 801733C0 00170300  28 05 00 00 */	cmplwi r5, 0
/* 801733C4 00170304  90 BE 00 18 */	stw r5, 0x18(r30)
/* 801733C8 00170308  38 04 23 80 */	addi r0, r4, "__vt__26Iterator<Q24Game8WayPoint>"@l
/* 801733CC 0017030C  C3 E2 A6 AC */	lfs f31, lbl_80518A0C@sda21(r2)
/* 801733D0 00170310  3B E0 00 00 */	li r31, 0
/* 801733D4 00170314  90 01 00 20 */	stw r0, 0x20(r1)
/* 801733D8 00170318  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801733DC 0017031C  90 A1 00 24 */	stw r5, 0x24(r1)
/* 801733E0 00170320  93 A1 00 28 */	stw r29, 0x28(r1)
/* 801733E4 00170324  40 82 00 1C */	bne .L_80173400
/* 801733E8 00170328  81 83 00 00 */	lwz r12, 0(r3)
/* 801733EC 0017032C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801733F0 00170330  7D 89 03 A6 */	mtctr r12
/* 801733F4 00170334  4E 80 04 21 */	bctrl 
/* 801733F8 00170338  90 61 00 24 */	stw r3, 0x24(r1)
/* 801733FC 0017033C  48 00 07 24 */	b .L_80173B20
.L_80173400:
/* 80173400 00170340  81 83 00 00 */	lwz r12, 0(r3)
/* 80173404 00170344  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80173408 00170348  7D 89 03 A6 */	mtctr r12
/* 8017340C 0017034C  4E 80 04 21 */	bctrl 
/* 80173410 00170350  90 61 00 24 */	stw r3, 0x24(r1)
/* 80173414 00170354  48 00 00 58 */	b .L_8017346C
.L_80173418:
/* 80173418 00170358  80 61 00 28 */	lwz r3, 0x28(r1)
/* 8017341C 0017035C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80173420 00170360  81 83 00 00 */	lwz r12, 0(r3)
/* 80173424 00170364  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80173428 00170368  7D 89 03 A6 */	mtctr r12
/* 8017342C 0017036C  4E 80 04 21 */	bctrl 
/* 80173430 00170370  7C 64 1B 78 */	mr r4, r3
/* 80173434 00170374  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80173438 00170378  81 83 00 00 */	lwz r12, 0(r3)
/* 8017343C 0017037C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80173440 00170380  7D 89 03 A6 */	mtctr r12
/* 80173444 00170384  4E 80 04 21 */	bctrl 
/* 80173448 00170388  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017344C 0017038C  40 82 06 D4 */	bne .L_80173B20
/* 80173450 00170390  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80173454 00170394  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80173458 00170398  81 83 00 00 */	lwz r12, 0(r3)
/* 8017345C 0017039C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173460 001703A0  7D 89 03 A6 */	mtctr r12
/* 80173464 001703A4  4E 80 04 21 */	bctrl 
/* 80173468 001703A8  90 61 00 24 */	stw r3, 0x24(r1)
.L_8017346C:
/* 8017346C 001703AC  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80173470 001703B0  38 61 00 20 */	addi r3, r1, 0x20
/* 80173474 001703B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80173478 001703B8  7D 89 03 A6 */	mtctr r12
/* 8017347C 001703BC  4E 80 04 21 */	bctrl 
/* 80173480 001703C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173484 001703C4  41 82 FF 94 */	beq .L_80173418
/* 80173488 001703C8  48 00 06 98 */	b .L_80173B20
.L_8017348C:
/* 8017348C 001703CC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80173490 001703D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80173494 001703D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80173498 001703D8  7D 89 03 A6 */	mtctr r12
/* 8017349C 001703DC  4E 80 04 21 */	bctrl 
/* 801734A0 001703E0  88 1E 00 0C */	lbz r0, 0xc(r30)
/* 801734A4 001703E4  7C 7C 1B 78 */	mr r28, r3
/* 801734A8 001703E8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801734AC 001703EC  41 82 00 10 */	beq .L_801734BC
/* 801734B0 001703F0  88 1C 00 34 */	lbz r0, 0x34(r28)
/* 801734B4 001703F4  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 801734B8 001703F8  40 82 05 AC */	bne .L_80173A64
.L_801734BC:
/* 801734BC 001703FC  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 801734C0 00170400  A8 7C 00 36 */	lha r3, 0x36(r28)
/* 801734C4 00170404  28 04 00 00 */	cmplwi r4, 0
/* 801734C8 00170408  41 82 00 38 */	beq .L_80173500
/* 801734CC 0017040C  A8 04 00 08 */	lha r0, 8(r4)
/* 801734D0 00170410  7C 09 03 A6 */	mtctr r0
/* 801734D4 00170414  2C 00 00 00 */	cmpwi r0, 0
/* 801734D8 00170418  40 81 00 20 */	ble .L_801734F8
.L_801734DC:
/* 801734DC 0017041C  A8 04 00 00 */	lha r0, 0(r4)
/* 801734E0 00170420  7C 03 00 00 */	cmpw r3, r0
/* 801734E4 00170424  40 82 00 0C */	bne .L_801734F0
/* 801734E8 00170428  38 00 00 01 */	li r0, 1
/* 801734EC 0017042C  48 00 00 18 */	b .L_80173504
.L_801734F0:
/* 801734F0 00170430  38 84 00 02 */	addi r4, r4, 2
/* 801734F4 00170434  42 00 FF E8 */	bdnz .L_801734DC
.L_801734F8:
/* 801734F8 00170438  38 00 00 00 */	li r0, 0
/* 801734FC 0017043C  48 00 00 08 */	b .L_80173504
.L_80173500:
/* 80173500 00170440  38 00 00 00 */	li r0, 0
.L_80173504:
/* 80173504 00170444  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80173508 00170448  40 82 05 5C */	bne .L_80173A64
/* 8017350C 0017044C  7F 9B E3 78 */	mr r27, r28
/* 80173510 00170450  3B 20 00 00 */	li r25, 0
/* 80173514 00170454  3B 40 00 00 */	li r26, 0
.L_80173518:
/* 80173518 00170458  A8 9B 00 3A */	lha r4, 0x3a(r27)
/* 8017351C 0017045C  2C 04 FF FF */	cmpwi r4, -1
/* 80173520 00170460  41 82 05 30 */	beq .L_80173A50
/* 80173524 00170464  81 9D 00 00 */	lwz r12, 0(r29)
/* 80173528 00170468  7F A3 EB 78 */	mr r3, r29
/* 8017352C 0017046C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80173530 00170470  7D 89 03 A6 */	mtctr r12
/* 80173534 00170474  4E 80 04 21 */	bctrl 
/* 80173538 00170478  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 8017353C 0017047C  7C 78 1B 78 */	mr r24, r3
/* 80173540 00170480  A8 03 00 36 */	lha r0, 0x36(r3)
/* 80173544 00170484  28 04 00 00 */	cmplwi r4, 0
/* 80173548 00170488  41 82 00 38 */	beq .L_80173580
/* 8017354C 0017048C  A8 64 00 08 */	lha r3, 8(r4)
/* 80173550 00170490  7C 69 03 A6 */	mtctr r3
/* 80173554 00170494  2C 03 00 00 */	cmpwi r3, 0
/* 80173558 00170498  40 81 00 20 */	ble .L_80173578
.L_8017355C:
/* 8017355C 0017049C  A8 64 00 00 */	lha r3, 0(r4)
/* 80173560 001704A0  7C 00 18 00 */	cmpw r0, r3
/* 80173564 001704A4  40 82 00 0C */	bne .L_80173570
/* 80173568 001704A8  38 60 00 01 */	li r3, 1
/* 8017356C 001704AC  48 00 00 18 */	b .L_80173584
.L_80173570:
/* 80173570 001704B0  38 84 00 02 */	addi r4, r4, 2
/* 80173574 001704B4  42 00 FF E8 */	bdnz .L_8017355C
.L_80173578:
/* 80173578 001704B8  38 60 00 00 */	li r3, 0
/* 8017357C 001704BC  48 00 00 08 */	b .L_80173584
.L_80173580:
/* 80173580 001704C0  38 60 00 00 */	li r3, 0
.L_80173584:
/* 80173584 001704C4  54 63 06 3F */	clrlwi. r3, r3, 0x18
/* 80173588 001704C8  40 82 04 C8 */	bne .L_80173A50
/* 8017358C 001704CC  A8 BE 00 14 */	lha r5, 0x14(r30)
/* 80173590 001704D0  2C 05 FF FF */	cmpwi r5, -1
/* 80173594 001704D4  41 82 00 6C */	beq .L_80173600
/* 80173598 001704D8  80 9C 00 28 */	lwz r4, 0x28(r28)
/* 8017359C 001704DC  48 00 00 1C */	b .L_801735B8
.L_801735A0:
/* 801735A0 001704E0  A8 64 00 18 */	lha r3, 0x18(r4)
/* 801735A4 001704E4  7C 03 28 00 */	cmpw r3, r5
/* 801735A8 001704E8  40 82 00 0C */	bne .L_801735B4
/* 801735AC 001704EC  38 60 00 01 */	li r3, 1
/* 801735B0 001704F0  48 00 00 14 */	b .L_801735C4
.L_801735B4:
/* 801735B4 001704F4  80 84 00 04 */	lwz r4, 4(r4)
.L_801735B8:
/* 801735B8 001704F8  28 04 00 00 */	cmplwi r4, 0
/* 801735BC 001704FC  40 82 FF E4 */	bne .L_801735A0
/* 801735C0 00170500  38 60 00 00 */	li r3, 0
.L_801735C4:
/* 801735C4 00170504  54 63 06 3F */	clrlwi. r3, r3, 0x18
/* 801735C8 00170508  40 82 00 38 */	bne .L_80173600
/* 801735CC 0017050C  80 98 00 28 */	lwz r4, 0x28(r24)
/* 801735D0 00170510  48 00 00 1C */	b .L_801735EC
.L_801735D4:
/* 801735D4 00170514  A8 64 00 18 */	lha r3, 0x18(r4)
/* 801735D8 00170518  7C 03 28 00 */	cmpw r3, r5
/* 801735DC 0017051C  40 82 00 0C */	bne .L_801735E8
/* 801735E0 00170520  38 60 00 01 */	li r3, 1
/* 801735E4 00170524  48 00 00 14 */	b .L_801735F8
.L_801735E8:
/* 801735E8 00170528  80 84 00 04 */	lwz r4, 4(r4)
.L_801735EC:
/* 801735EC 0017052C  28 04 00 00 */	cmplwi r4, 0
/* 801735F0 00170530  40 82 FF E4 */	bne .L_801735D4
/* 801735F4 00170534  38 60 00 00 */	li r3, 0
.L_801735F8:
/* 801735F8 00170538  54 63 06 3F */	clrlwi. r3, r3, 0x18
/* 801735FC 0017053C  41 82 04 54 */	beq .L_80173A50
.L_80173600:
/* 80173600 00170540  88 7E 00 0C */	lbz r3, 0xc(r30)
/* 80173604 00170544  54 63 07 FF */	clrlwi. r3, r3, 0x1f
/* 80173608 00170548  41 82 00 10 */	beq .L_80173618
/* 8017360C 0017054C  88 78 00 34 */	lbz r3, 0x34(r24)
/* 80173610 00170550  54 63 07 7B */	rlwinm. r3, r3, 0, 0x1d, 0x1d
/* 80173614 00170554  40 82 04 3C */	bne .L_80173A50
.L_80173618:
/* 80173618 00170558  38 9A 00 3A */	addi r4, r26, 0x3a
/* 8017361C 0017055C  A8 7C 00 36 */	lha r3, 0x36(r28)
/* 80173620 00170560  7C 98 22 AE */	lhax r4, r24, r4
/* 80173624 00170564  38 A0 00 00 */	li r5, 0
/* 80173628 00170568  7C 04 18 00 */	cmpw r4, r3
/* 8017362C 0017056C  40 82 00 0C */	bne .L_80173638
/* 80173630 00170570  38 A0 00 01 */	li r5, 1
/* 80173634 00170574  48 00 00 54 */	b .L_80173688
.L_80173638:
/* 80173638 00170578  40 82 00 0C */	bne .L_80173644
/* 8017363C 0017057C  38 A0 00 01 */	li r5, 1
/* 80173640 00170580  48 00 00 48 */	b .L_80173688
.L_80173644:
/* 80173644 00170584  40 82 00 0C */	bne .L_80173650
/* 80173648 00170588  38 A0 00 01 */	li r5, 1
/* 8017364C 0017058C  48 00 00 3C */	b .L_80173688
.L_80173650:
/* 80173650 00170590  40 82 00 0C */	bne .L_8017365C
/* 80173654 00170594  38 A0 00 01 */	li r5, 1
/* 80173658 00170598  48 00 00 30 */	b .L_80173688
.L_8017365C:
/* 8017365C 0017059C  40 82 00 0C */	bne .L_80173668
/* 80173660 001705A0  38 A0 00 01 */	li r5, 1
/* 80173664 001705A4  48 00 00 24 */	b .L_80173688
.L_80173668:
/* 80173668 001705A8  40 82 00 0C */	bne .L_80173674
/* 8017366C 001705AC  38 A0 00 01 */	li r5, 1
/* 80173670 001705B0  48 00 00 18 */	b .L_80173688
.L_80173674:
/* 80173674 001705B4  40 82 00 0C */	bne .L_80173680
/* 80173678 001705B8  38 A0 00 01 */	li r5, 1
/* 8017367C 001705BC  48 00 00 0C */	b .L_80173688
.L_80173680:
/* 80173680 001705C0  40 82 00 08 */	bne .L_80173688
/* 80173684 001705C4  38 A0 00 01 */	li r5, 1
.L_80173688:
/* 80173688 001705C8  54 A3 06 3F */	clrlwi. r3, r5, 0x18
/* 8017368C 001705CC  41 82 00 10 */	beq .L_8017369C
/* 80173690 001705D0  A8 7C 00 36 */	lha r3, 0x36(r28)
/* 80173694 001705D4  7C 03 00 00 */	cmpw r3, r0
/* 80173698 001705D8  41 81 03 B8 */	bgt .L_80173A50
.L_8017369C:
/* 8017369C 001705DC  88 1C 00 34 */	lbz r0, 0x34(r28)
/* 801736A0 001705E0  54 03 07 FF */	clrlwi. r3, r0, 0x1f
/* 801736A4 001705E4  41 82 00 10 */	beq .L_801736B4
/* 801736A8 001705E8  88 18 00 34 */	lbz r0, 0x34(r24)
/* 801736AC 001705EC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801736B0 001705F0  40 82 03 A0 */	bne .L_80173A50
.L_801736B4:
/* 801736B4 001705F4  2C 03 00 00 */	cmpwi r3, 0
/* 801736B8 001705F8  40 82 00 10 */	bne .L_801736C8
/* 801736BC 001705FC  88 18 00 34 */	lbz r0, 0x34(r24)
/* 801736C0 00170600  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801736C4 00170604  41 82 01 4C */	beq .L_80173810
.L_801736C8:
/* 801736C8 00170608  2C 03 00 00 */	cmpwi r3, 0
/* 801736CC 0017060C  40 82 00 10 */	bne .L_801736DC
/* 801736D0 00170610  7F 84 E3 78 */	mr r4, r28
/* 801736D4 00170614  7F 05 C3 78 */	mr r5, r24
/* 801736D8 00170618  48 00 00 0C */	b .L_801736E4
.L_801736DC:
/* 801736DC 0017061C  7F 04 C3 78 */	mr r4, r24
/* 801736E0 00170620  7F 85 E3 78 */	mr r5, r28
.L_801736E4:
/* 801736E4 00170624  C0 44 00 50 */	lfs f2, 0x50(r4)
/* 801736E8 00170628  C0 05 00 50 */	lfs f0, 0x50(r5)
/* 801736EC 0017062C  C0 24 00 4C */	lfs f1, 0x4c(r4)
/* 801736F0 00170630  EC 82 00 28 */	fsubs f4, f2, f0
/* 801736F4 00170634  C0 05 00 4C */	lfs f0, 0x4c(r5)
/* 801736F8 00170638  C0 64 00 54 */	lfs f3, 0x54(r4)
/* 801736FC 0017063C  EC 41 00 28 */	fsubs f2, f1, f0
/* 80173700 00170640  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 80173704 00170644  EC A4 01 32 */	fmuls f5, f4, f4
/* 80173708 00170648  EC 63 00 28 */	fsubs f3, f3, f0
/* 8017370C 0017064C  C0 22 A6 A8 */	lfs f1, lbl_80518A08@sda21(r2)
/* 80173710 00170650  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80173714 00170654  D0 41 00 08 */	stfs f2, 8(r1)
/* 80173718 00170658  EC C3 00 F2 */	fmuls f6, f3, f3
/* 8017371C 0017065C  EC 00 28 2A */	fadds f0, f0, f5
/* 80173720 00170660  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 80173724 00170664  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 80173728 00170668  EC 06 00 2A */	fadds f0, f6, f0
/* 8017372C 0017066C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80173730 00170670  40 81 00 20 */	ble .L_80173750
/* 80173734 00170674  EC 02 28 BA */	fmadds f0, f2, f2, f5
/* 80173738 00170678  EC 66 00 2A */	fadds f3, f6, f0
/* 8017373C 0017067C  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 80173740 00170680  40 81 00 14 */	ble .L_80173754
/* 80173744 00170684  FC 00 18 34 */	frsqrte f0, f3
/* 80173748 00170688  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8017374C 0017068C  48 00 00 08 */	b .L_80173754
.L_80173750:
/* 80173750 00170690  FC 60 08 90 */	fmr f3, f1
.L_80173754:
/* 80173754 00170694  C0 02 A6 A8 */	lfs f0, lbl_80518A08@sda21(r2)
/* 80173758 00170698  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8017375C 0017069C  40 81 00 30 */	ble .L_8017378C
/* 80173760 001706A0  C0 02 A6 A0 */	lfs f0, lbl_80518A00@sda21(r2)
/* 80173764 001706A4  C0 41 00 08 */	lfs f2, 8(r1)
/* 80173768 001706A8  EC 60 18 24 */	fdivs f3, f0, f3
/* 8017376C 001706AC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80173770 001706B0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80173774 001706B4  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80173778 001706B8  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8017377C 001706BC  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80173780 001706C0  D0 41 00 08 */	stfs f2, 8(r1)
/* 80173784 001706C4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80173788 001706C8  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_8017378C:
/* 8017378C 001706CC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80173790 001706D0  80 61 00 08 */	lwz r3, 8(r1)
/* 80173794 001706D4  90 01 00 18 */	stw r0, 0x18(r1)
/* 80173798 001706D8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8017379C 001706DC  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 801737A0 001706E0  C0 45 00 50 */	lfs f2, 0x50(r5)
/* 801737A4 001706E4  C0 24 00 50 */	lfs f1, 0x50(r4)
/* 801737A8 001706E8  C0 1E 00 04 */	lfs f0, 4(r30)
/* 801737AC 001706EC  EC 83 00 B2 */	fmuls f4, f3, f2
/* 801737B0 001706F0  90 61 00 14 */	stw r3, 0x14(r1)
/* 801737B4 001706F4  EC 41 00 F2 */	fmuls f2, f1, f3
/* 801737B8 001706F8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801737BC 001706FC  C0 A5 00 4C */	lfs f5, 0x4c(r5)
/* 801737C0 00170700  C0 C1 00 14 */	lfs f6, 0x14(r1)
/* 801737C4 00170704  C0 64 00 4C */	lfs f3, 0x4c(r4)
/* 801737C8 00170708  C0 3E 00 00 */	lfs f1, 0(r30)
/* 801737CC 0017070C  EC 86 21 7A */	fmadds f4, f6, f5, f4
/* 801737D0 00170710  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801737D4 00170714  EC 63 11 BA */	fmadds f3, f3, f6, f2
/* 801737D8 00170718  EC 21 01 BA */	fmadds f1, f1, f6, f0
/* 801737DC 0017071C  C0 A5 00 54 */	lfs f5, 0x54(r5)
/* 801737E0 00170720  C0 C1 00 1C */	lfs f6, 0x1c(r1)
/* 801737E4 00170724  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 801737E8 00170728  C0 5E 00 08 */	lfs f2, 8(r30)
/* 801737EC 0017072C  EC 86 21 7A */	fmadds f4, f6, f5, f4
/* 801737F0 00170730  EC 60 19 BA */	fmadds f3, f0, f6, f3
/* 801737F4 00170734  C0 02 A6 A8 */	lfs f0, lbl_80518A08@sda21(r2)
/* 801737F8 00170738  EC 22 09 BA */	fmadds f1, f2, f6, f1
/* 801737FC 0017073C  EC 43 20 28 */	fsubs f2, f3, f4
/* 80173800 00170740  EC 21 20 28 */	fsubs f1, f1, f4
/* 80173804 00170744  EC 22 00 72 */	fmuls f1, f2, f1
/* 80173808 00170748  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017380C 0017074C  41 80 02 44 */	blt .L_80173A50
.L_80173810:
/* 80173810 00170750  C0 18 00 50 */	lfs f0, 0x50(r24)
/* 80173814 00170754  C0 7C 00 50 */	lfs f3, 0x50(r28)
/* 80173818 00170758  C0 38 00 54 */	lfs f1, 0x54(r24)
/* 8017381C 0017075C  EF 80 18 28 */	fsubs f28, f0, f3
/* 80173820 00170760  C0 9C 00 54 */	lfs f4, 0x54(r28)
/* 80173824 00170764  C0 18 00 4C */	lfs f0, 0x4c(r24)
/* 80173828 00170768  EF 61 20 28 */	fsubs f27, f1, f4
/* 8017382C 0017076C  C0 BC 00 4C */	lfs f5, 0x4c(r28)
/* 80173830 00170770  EC 3C 07 32 */	fmuls f1, f28, f28
/* 80173834 00170774  EF A0 28 28 */	fsubs f29, f0, f5
/* 80173838 00170778  C0 02 A6 A8 */	lfs f0, lbl_80518A08@sda21(r2)
/* 8017383C 0017077C  EC 5B 06 F2 */	fmuls f2, f27, f27
/* 80173840 00170780  EC 3D 0F 7A */	fmadds f1, f29, f29, f1
/* 80173844 00170784  EF C2 08 2A */	fadds f30, f2, f1
/* 80173848 00170788  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8017384C 0017078C  40 81 00 14 */	ble .L_80173860
/* 80173850 00170790  40 81 00 14 */	ble .L_80173864
/* 80173854 00170794  FC 00 F0 34 */	frsqrte f0, f30
/* 80173858 00170798  EF C0 07 B2 */	fmuls f30, f0, f30
/* 8017385C 0017079C  48 00 00 08 */	b .L_80173864
.L_80173860:
/* 80173860 001707A0  FF C0 00 90 */	fmr f30, f0
.L_80173864:
/* 80173864 001707A4  C0 02 A6 A8 */	lfs f0, lbl_80518A08@sda21(r2)
/* 80173868 001707A8  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8017386C 001707AC  40 81 00 1C */	ble .L_80173888
/* 80173870 001707B0  C0 02 A6 A0 */	lfs f0, lbl_80518A00@sda21(r2)
/* 80173874 001707B4  EC 00 F0 24 */	fdivs f0, f0, f30
/* 80173878 001707B8  EF BD 00 32 */	fmuls f29, f29, f0
/* 8017387C 001707BC  EF 9C 00 32 */	fmuls f28, f28, f0
/* 80173880 001707C0  EF 7B 00 32 */	fmuls f27, f27, f0
/* 80173884 001707C4  48 00 00 08 */	b .L_8017388C
.L_80173888:
/* 80173888 001707C8  FF C0 00 90 */	fmr f30, f0
.L_8017388C:
/* 8017388C 001707CC  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80173890 001707D0  C0 5E 00 00 */	lfs f2, 0(r30)
/* 80173894 001707D4  EC 20 18 28 */	fsubs f1, f0, f3
/* 80173898 001707D8  C0 7E 00 08 */	lfs f3, 8(r30)
/* 8017389C 001707DC  C0 02 A6 B8 */	lfs f0, lbl_80518A18@sda21(r2)
/* 801738A0 001707E0  EC 42 28 28 */	fsubs f2, f2, f5
/* 801738A4 001707E4  EC 63 20 28 */	fsubs f3, f3, f4
/* 801738A8 001707E8  EC 3C 00 72 */	fmuls f1, f28, f1
/* 801738AC 001707EC  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801738B0 001707F0  EC 1D 08 BA */	fmadds f0, f29, f2, f1
/* 801738B4 001707F4  EC 1B 00 FA */	fmadds f0, f27, f3, f0
/* 801738B8 001707F8  EF 40 F0 24 */	fdivs f26, f0, f30
/* 801738BC 001707FC  40 80 00 28 */	bge .L_801738E4
/* 801738C0 00170800  3C 60 80 48 */	lis r3, lbl_8047E554@ha
/* 801738C4 00170804  3C 80 80 48 */	lis r4, lbl_8047E5DC@ha
/* 801738C8 00170808  38 A4 E5 DC */	addi r5, r4, lbl_8047E5DC@l
/* 801738CC 0017080C  A8 DC 00 36 */	lha r6, 0x36(r28)
/* 801738D0 00170810  A8 F8 00 36 */	lha r7, 0x36(r24)
/* 801738D4 00170814  38 63 E5 54 */	addi r3, r3, lbl_8047E554@l
/* 801738D8 00170818  38 80 03 00 */	li r4, 0x300
/* 801738DC 0017081C  4C C6 31 82 */	crclr 6
/* 801738E0 00170820  4B EB 6D 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801738E4:
/* 801738E4 00170824  C0 BC 00 50 */	lfs f5, 0x50(r28)
/* 801738E8 00170828  C0 5E 00 04 */	lfs f2, 4(r30)
/* 801738EC 0017082C  C0 DC 00 4C */	lfs f6, 0x4c(r28)
/* 801738F0 00170830  EC 05 10 28 */	fsubs f0, f5, f2
/* 801738F4 00170834  C0 3E 00 00 */	lfs f1, 0(r30)
/* 801738F8 00170838  C0 9C 00 54 */	lfs f4, 0x54(r28)
/* 801738FC 0017083C  C0 7E 00 08 */	lfs f3, 8(r30)
/* 80173900 00170840  ED 26 08 28 */	fsubs f9, f6, f1
/* 80173904 00170844  EC 00 00 32 */	fmuls f0, f0, f0
/* 80173908 00170848  ED 04 18 28 */	fsubs f8, f4, f3
/* 8017390C 0017084C  C0 E2 A6 A8 */	lfs f7, lbl_80518A08@sda21(r2)
/* 80173910 00170850  EC 09 02 7A */	fmadds f0, f9, f9, f0
/* 80173914 00170854  ED 08 02 32 */	fmuls f8, f8, f8
/* 80173918 00170858  EC 08 00 2A */	fadds f0, f8, f0
/* 8017391C 0017085C  FC 00 38 40 */	fcmpo cr0, f0, f7
/* 80173920 00170860  40 81 00 14 */	ble .L_80173934
/* 80173924 00170864  40 81 00 14 */	ble .L_80173938
/* 80173928 00170868  FC E0 00 34 */	frsqrte f7, f0
/* 8017392C 0017086C  EC 07 00 32 */	fmuls f0, f7, f0
/* 80173930 00170870  48 00 00 08 */	b .L_80173938
.L_80173934:
/* 80173934 00170874  FC 00 38 90 */	fmr f0, f7
.L_80173938:
/* 80173938 00170878  C0 F8 00 50 */	lfs f7, 0x50(r24)
/* 8017393C 0017087C  C1 38 00 4C */	lfs f9, 0x4c(r24)
/* 80173940 00170880  ED 47 10 28 */	fsubs f10, f7, f2
/* 80173944 00170884  C1 18 00 54 */	lfs f8, 0x54(r24)
/* 80173948 00170888  ED 29 08 28 */	fsubs f9, f9, f1
/* 8017394C 0017088C  C0 E2 A6 A8 */	lfs f7, lbl_80518A08@sda21(r2)
/* 80173950 00170890  ED 08 18 28 */	fsubs f8, f8, f3
/* 80173954 00170894  ED 4A 02 B2 */	fmuls f10, f10, f10
/* 80173958 00170898  ED 68 02 32 */	fmuls f11, f8, f8
/* 8017395C 0017089C  ED 09 52 7A */	fmadds f8, f9, f9, f10
/* 80173960 001708A0  ED AB 40 2A */	fadds f13, f11, f8
/* 80173964 001708A4  FC 0D 38 40 */	fcmpo cr0, f13, f7
/* 80173968 001708A8  40 81 00 14 */	ble .L_8017397C
/* 8017396C 001708AC  40 81 00 14 */	ble .L_80173980
/* 80173970 001708B0  FC E0 68 34 */	frsqrte f7, f13
/* 80173974 001708B4  ED A7 03 72 */	fmuls f13, f7, f13
/* 80173978 001708B8  48 00 00 08 */	b .L_80173980
.L_8017397C:
/* 8017397C 001708BC  FD A0 38 90 */	fmr f13, f7
.L_80173980:
/* 80173980 001708C0  C1 82 A6 A8 */	lfs f12, lbl_80518A08@sda21(r2)
/* 80173984 001708C4  FC 1A 60 40 */	fcmpo cr0, f26, f12
/* 80173988 001708C8  41 80 00 10 */	blt .L_80173998
/* 8017398C 001708CC  C1 02 A6 A0 */	lfs f8, lbl_80518A00@sda21(r2)
/* 80173990 001708D0  FC 1A 40 40 */	fcmpo cr0, f26, f8
/* 80173994 001708D4  40 81 00 24 */	ble .L_801739B8
.L_80173998:
/* 80173998 001708D8  FC 0D 00 40 */	fcmpo cr0, f13, f0
/* 8017399C 001708DC  40 80 00 10 */	bge .L_801739AC
/* 801739A0 001708E0  C0 38 00 58 */	lfs f1, 0x58(r24)
/* 801739A4 001708E4  EC 2D 08 28 */	fsubs f1, f13, f1
/* 801739A8 001708E8  48 00 00 7C */	b .L_80173A24
.L_801739AC:
/* 801739AC 001708EC  C0 3C 00 58 */	lfs f1, 0x58(r28)
/* 801739B0 001708F0  EC 20 08 28 */	fsubs f1, f0, f1
/* 801739B4 001708F4  48 00 00 70 */	b .L_80173A24
.L_801739B8:
/* 801739B8 001708F8  ED 7A 07 B2 */	fmuls f11, f26, f30
/* 801739BC 001708FC  C0 F8 00 58 */	lfs f7, 0x58(r24)
/* 801739C0 00170900  ED 28 D0 28 */	fsubs f9, f8, f26
/* 801739C4 00170904  C1 1C 00 58 */	lfs f8, 0x58(r28)
/* 801739C8 00170908  EC FA 01 F2 */	fmuls f7, f26, f7
/* 801739CC 0017090C  ED 5C 02 F2 */	fmuls f10, f28, f11
/* 801739D0 00170910  EF 5B 02 F2 */	fmuls f26, f27, f11
/* 801739D4 00170914  ED 7D 02 F2 */	fmuls f11, f29, f11
/* 801739D8 00170918  EC AA 28 2A */	fadds f5, f10, f5
/* 801739DC 0017091C  ED 5A 20 2A */	fadds f10, f26, f4
/* 801739E0 00170920  EC 8B 30 2A */	fadds f4, f11, f6
/* 801739E4 00170924  EC 45 10 28 */	fsubs f2, f5, f2
/* 801739E8 00170928  EC AA 18 28 */	fsubs f5, f10, f3
/* 801739EC 0017092C  EC 64 08 28 */	fsubs f3, f4, f1
/* 801739F0 00170930  EC 22 00 B2 */	fmuls f1, f2, f2
/* 801739F4 00170934  EC 45 01 72 */	fmuls f2, f5, f5
/* 801739F8 00170938  EC 89 3A 3A */	fmadds f4, f9, f8, f7
/* 801739FC 0017093C  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80173A00 00170940  EC 22 08 2A */	fadds f1, f2, f1
/* 80173A04 00170944  FC 01 60 40 */	fcmpo cr0, f1, f12
/* 80173A08 00170948  40 81 00 14 */	ble .L_80173A1C
/* 80173A0C 0017094C  40 81 00 14 */	ble .L_80173A20
/* 80173A10 00170950  FC 40 08 34 */	frsqrte f2, f1
/* 80173A14 00170954  EC 22 00 72 */	fmuls f1, f2, f1
/* 80173A18 00170958  48 00 00 08 */	b .L_80173A20
.L_80173A1C:
/* 80173A1C 0017095C  FC 20 60 90 */	fmr f1, f12
.L_80173A20:
/* 80173A20 00170960  EC 21 20 28 */	fsubs f1, f1, f4
.L_80173A24:
/* 80173A24 00170964  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80173A28 00170968  40 80 00 28 */	bge .L_80173A50
/* 80173A2C 0017096C  FC 00 68 40 */	fcmpo cr0, f0, f13
/* 80173A30 00170970  40 80 00 10 */	bge .L_80173A40
/* 80173A34 00170974  93 9E 00 18 */	stw r28, 0x18(r30)
/* 80173A38 00170978  93 1E 00 1C */	stw r24, 0x1c(r30)
/* 80173A3C 0017097C  48 00 00 0C */	b .L_80173A48
.L_80173A40:
/* 80173A40 00170980  93 1E 00 18 */	stw r24, 0x18(r30)
/* 80173A44 00170984  93 9E 00 1C */	stw r28, 0x1c(r30)
.L_80173A48:
/* 80173A48 00170988  FF E0 08 90 */	fmr f31, f1
/* 80173A4C 0017098C  3B E0 00 01 */	li r31, 1
.L_80173A50:
/* 80173A50 00170990  3B 39 00 01 */	addi r25, r25, 1
/* 80173A54 00170994  3B 5A 00 02 */	addi r26, r26, 2
/* 80173A58 00170998  2C 19 00 08 */	cmpwi r25, 8
/* 80173A5C 0017099C  3B 7B 00 02 */	addi r27, r27, 2
/* 80173A60 001709A0  41 80 FA B8 */	blt .L_80173518
.L_80173A64:
/* 80173A64 001709A4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80173A68 001709A8  28 00 00 00 */	cmplwi r0, 0
/* 80173A6C 001709AC  40 82 00 24 */	bne .L_80173A90
/* 80173A70 001709B0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80173A74 001709B4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80173A78 001709B8  81 83 00 00 */	lwz r12, 0(r3)
/* 80173A7C 001709BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173A80 001709C0  7D 89 03 A6 */	mtctr r12
/* 80173A84 001709C4  4E 80 04 21 */	bctrl 
/* 80173A88 001709C8  90 61 00 24 */	stw r3, 0x24(r1)
/* 80173A8C 001709CC  48 00 00 94 */	b .L_80173B20
.L_80173A90:
/* 80173A90 001709D0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80173A94 001709D4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80173A98 001709D8  81 83 00 00 */	lwz r12, 0(r3)
/* 80173A9C 001709DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173AA0 001709E0  7D 89 03 A6 */	mtctr r12
/* 80173AA4 001709E4  4E 80 04 21 */	bctrl 
/* 80173AA8 001709E8  90 61 00 24 */	stw r3, 0x24(r1)
/* 80173AAC 001709EC  48 00 00 58 */	b .L_80173B04
.L_80173AB0:
/* 80173AB0 001709F0  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80173AB4 001709F4  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80173AB8 001709F8  81 83 00 00 */	lwz r12, 0(r3)
/* 80173ABC 001709FC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80173AC0 00170A00  7D 89 03 A6 */	mtctr r12
/* 80173AC4 00170A04  4E 80 04 21 */	bctrl 
/* 80173AC8 00170A08  7C 64 1B 78 */	mr r4, r3
/* 80173ACC 00170A0C  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80173AD0 00170A10  81 83 00 00 */	lwz r12, 0(r3)
/* 80173AD4 00170A14  81 8C 00 08 */	lwz r12, 8(r12)
/* 80173AD8 00170A18  7D 89 03 A6 */	mtctr r12
/* 80173ADC 00170A1C  4E 80 04 21 */	bctrl 
/* 80173AE0 00170A20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173AE4 00170A24  40 82 00 3C */	bne .L_80173B20
/* 80173AE8 00170A28  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80173AEC 00170A2C  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80173AF0 00170A30  81 83 00 00 */	lwz r12, 0(r3)
/* 80173AF4 00170A34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173AF8 00170A38  7D 89 03 A6 */	mtctr r12
/* 80173AFC 00170A3C  4E 80 04 21 */	bctrl 
/* 80173B00 00170A40  90 61 00 24 */	stw r3, 0x24(r1)
.L_80173B04:
/* 80173B04 00170A44  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80173B08 00170A48  38 61 00 20 */	addi r3, r1, 0x20
/* 80173B0C 00170A4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80173B10 00170A50  7D 89 03 A6 */	mtctr r12
/* 80173B14 00170A54  4E 80 04 21 */	bctrl 
/* 80173B18 00170A58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173B1C 00170A5C  41 82 FF 94 */	beq .L_80173AB0
.L_80173B20:
/* 80173B20 00170A60  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80173B24 00170A64  81 83 00 00 */	lwz r12, 0(r3)
/* 80173B28 00170A68  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80173B2C 00170A6C  7D 89 03 A6 */	mtctr r12
/* 80173B30 00170A70  4E 80 04 21 */	bctrl 
/* 80173B34 00170A74  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80173B38 00170A78  7C 04 18 40 */	cmplw r4, r3
/* 80173B3C 00170A7C  40 82 F9 50 */	bne .L_8017348C
/* 80173B40 00170A80  7F E3 FB 78 */	mr r3, r31
/* 80173B44 00170A84  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 80173B48 00170A88  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 80173B4C 00170A8C  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 80173B50 00170A90  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 80173B54 00170A94  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 80173B58 00170A98  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 80173B5C 00170A9C  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 80173B60 00170AA0  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 80173B64 00170AA4  E3 61 00 68 */	psq_l f27, 104(r1), 0, qr0
/* 80173B68 00170AA8  CB 61 00 60 */	lfd f27, 0x60(r1)
/* 80173B6C 00170AAC  E3 41 00 58 */	psq_l f26, 88(r1), 0, qr0
/* 80173B70 00170AB0  CB 41 00 50 */	lfd f26, 0x50(r1)
/* 80173B74 00170AB4  BB 01 00 30 */	lmw r24, 0x30(r1)
/* 80173B78 00170AB8  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80173B7C 00170ABC  7C 08 03 A6 */	mtlr r0
/* 80173B80 00170AC0  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80173B84 00170AC4  4E 80 00 20 */	blr 
.endfn getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg

.fn setCloseAll__Q24Game8RouteMgrFv, global
/* 80173B88 00170AC8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80173B8C 00170ACC  7C 08 02 A6 */	mflr r0
/* 80173B90 00170AD0  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8WayPoint>"@ha
/* 80173B94 00170AD4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80173B98 00170AD8  38 00 00 00 */	li r0, 0
/* 80173B9C 00170ADC  38 84 23 80 */	addi r4, r4, "__vt__26Iterator<Q24Game8WayPoint>"@l
/* 80173BA0 00170AE0  28 00 00 00 */	cmplwi r0, 0
/* 80173BA4 00170AE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80173BA8 00170AE8  90 81 00 08 */	stw r4, 8(r1)
/* 80173BAC 00170AEC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80173BB0 00170AF0  90 61 00 10 */	stw r3, 0x10(r1)
/* 80173BB4 00170AF4  40 82 00 1C */	bne .L_80173BD0
/* 80173BB8 00170AF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80173BBC 00170AFC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80173BC0 00170B00  7D 89 03 A6 */	mtctr r12
/* 80173BC4 00170B04  4E 80 04 21 */	bctrl 
/* 80173BC8 00170B08  90 61 00 0C */	stw r3, 0xc(r1)
/* 80173BCC 00170B0C  48 00 01 6C */	b .L_80173D38
.L_80173BD0:
/* 80173BD0 00170B10  81 83 00 00 */	lwz r12, 0(r3)
/* 80173BD4 00170B14  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80173BD8 00170B18  7D 89 03 A6 */	mtctr r12
/* 80173BDC 00170B1C  4E 80 04 21 */	bctrl 
/* 80173BE0 00170B20  90 61 00 0C */	stw r3, 0xc(r1)
/* 80173BE4 00170B24  48 00 00 58 */	b .L_80173C3C
.L_80173BE8:
/* 80173BE8 00170B28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173BEC 00170B2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173BF0 00170B30  81 83 00 00 */	lwz r12, 0(r3)
/* 80173BF4 00170B34  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80173BF8 00170B38  7D 89 03 A6 */	mtctr r12
/* 80173BFC 00170B3C  4E 80 04 21 */	bctrl 
/* 80173C00 00170B40  7C 64 1B 78 */	mr r4, r3
/* 80173C04 00170B44  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80173C08 00170B48  81 83 00 00 */	lwz r12, 0(r3)
/* 80173C0C 00170B4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80173C10 00170B50  7D 89 03 A6 */	mtctr r12
/* 80173C14 00170B54  4E 80 04 21 */	bctrl 
/* 80173C18 00170B58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173C1C 00170B5C  40 82 01 1C */	bne .L_80173D38
/* 80173C20 00170B60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173C24 00170B64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173C28 00170B68  81 83 00 00 */	lwz r12, 0(r3)
/* 80173C2C 00170B6C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173C30 00170B70  7D 89 03 A6 */	mtctr r12
/* 80173C34 00170B74  4E 80 04 21 */	bctrl 
/* 80173C38 00170B78  90 61 00 0C */	stw r3, 0xc(r1)
.L_80173C3C:
/* 80173C3C 00170B7C  81 81 00 08 */	lwz r12, 8(r1)
/* 80173C40 00170B80  38 61 00 08 */	addi r3, r1, 8
/* 80173C44 00170B84  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80173C48 00170B88  7D 89 03 A6 */	mtctr r12
/* 80173C4C 00170B8C  4E 80 04 21 */	bctrl 
/* 80173C50 00170B90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173C54 00170B94  41 82 FF 94 */	beq .L_80173BE8
/* 80173C58 00170B98  48 00 00 E0 */	b .L_80173D38
.L_80173C5C:
/* 80173C5C 00170B9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173C60 00170BA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80173C64 00170BA4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80173C68 00170BA8  7D 89 03 A6 */	mtctr r12
/* 80173C6C 00170BAC  4E 80 04 21 */	bctrl 
/* 80173C70 00170BB0  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80173C74 00170BB4  60 00 00 80 */	ori r0, r0, 0x80
/* 80173C78 00170BB8  98 03 00 34 */	stb r0, 0x34(r3)
/* 80173C7C 00170BBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80173C80 00170BC0  28 00 00 00 */	cmplwi r0, 0
/* 80173C84 00170BC4  40 82 00 24 */	bne .L_80173CA8
/* 80173C88 00170BC8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173C8C 00170BCC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173C90 00170BD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80173C94 00170BD4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173C98 00170BD8  7D 89 03 A6 */	mtctr r12
/* 80173C9C 00170BDC  4E 80 04 21 */	bctrl 
/* 80173CA0 00170BE0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80173CA4 00170BE4  48 00 00 94 */	b .L_80173D38
.L_80173CA8:
/* 80173CA8 00170BE8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173CAC 00170BEC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173CB0 00170BF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80173CB4 00170BF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173CB8 00170BF8  7D 89 03 A6 */	mtctr r12
/* 80173CBC 00170BFC  4E 80 04 21 */	bctrl 
/* 80173CC0 00170C00  90 61 00 0C */	stw r3, 0xc(r1)
/* 80173CC4 00170C04  48 00 00 58 */	b .L_80173D1C
.L_80173CC8:
/* 80173CC8 00170C08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173CCC 00170C0C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173CD0 00170C10  81 83 00 00 */	lwz r12, 0(r3)
/* 80173CD4 00170C14  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80173CD8 00170C18  7D 89 03 A6 */	mtctr r12
/* 80173CDC 00170C1C  4E 80 04 21 */	bctrl 
/* 80173CE0 00170C20  7C 64 1B 78 */	mr r4, r3
/* 80173CE4 00170C24  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80173CE8 00170C28  81 83 00 00 */	lwz r12, 0(r3)
/* 80173CEC 00170C2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80173CF0 00170C30  7D 89 03 A6 */	mtctr r12
/* 80173CF4 00170C34  4E 80 04 21 */	bctrl 
/* 80173CF8 00170C38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173CFC 00170C3C  40 82 00 3C */	bne .L_80173D38
/* 80173D00 00170C40  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173D04 00170C44  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173D08 00170C48  81 83 00 00 */	lwz r12, 0(r3)
/* 80173D0C 00170C4C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173D10 00170C50  7D 89 03 A6 */	mtctr r12
/* 80173D14 00170C54  4E 80 04 21 */	bctrl 
/* 80173D18 00170C58  90 61 00 0C */	stw r3, 0xc(r1)
.L_80173D1C:
/* 80173D1C 00170C5C  81 81 00 08 */	lwz r12, 8(r1)
/* 80173D20 00170C60  38 61 00 08 */	addi r3, r1, 8
/* 80173D24 00170C64  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80173D28 00170C68  7D 89 03 A6 */	mtctr r12
/* 80173D2C 00170C6C  4E 80 04 21 */	bctrl 
/* 80173D30 00170C70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173D34 00170C74  41 82 FF 94 */	beq .L_80173CC8
.L_80173D38:
/* 80173D38 00170C78  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173D3C 00170C7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80173D40 00170C80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80173D44 00170C84  7D 89 03 A6 */	mtctr r12
/* 80173D48 00170C88  4E 80 04 21 */	bctrl 
/* 80173D4C 00170C8C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173D50 00170C90  7C 04 18 40 */	cmplw r4, r3
/* 80173D54 00170C94  40 82 FF 08 */	bne .L_80173C5C
/* 80173D58 00170C98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80173D5C 00170C9C  7C 08 03 A6 */	mtlr r0
/* 80173D60 00170CA0  38 21 00 20 */	addi r1, r1, 0x20
/* 80173D64 00170CA4  4E 80 00 20 */	blr 
.endfn setCloseAll__Q24Game8RouteMgrFv

.fn openRoom__Q24Game8RouteMgrFs, global
/* 80173D68 00170CA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80173D6C 00170CAC  7C 08 02 A6 */	mflr r0
/* 80173D70 00170CB0  3C A0 80 4B */	lis r5, "__vt__26Iterator<Q24Game8WayPoint>"@ha
/* 80173D74 00170CB4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80173D78 00170CB8  38 00 00 00 */	li r0, 0
/* 80173D7C 00170CBC  38 A5 23 80 */	addi r5, r5, "__vt__26Iterator<Q24Game8WayPoint>"@l
/* 80173D80 00170CC0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80173D84 00170CC4  28 00 00 00 */	cmplwi r0, 0
/* 80173D88 00170CC8  7C 9F 23 78 */	mr r31, r4
/* 80173D8C 00170CCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80173D90 00170CD0  90 A1 00 08 */	stw r5, 8(r1)
/* 80173D94 00170CD4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80173D98 00170CD8  90 61 00 10 */	stw r3, 0x10(r1)
/* 80173D9C 00170CDC  40 82 00 1C */	bne .L_80173DB8
/* 80173DA0 00170CE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80173DA4 00170CE4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80173DA8 00170CE8  7D 89 03 A6 */	mtctr r12
/* 80173DAC 00170CEC  4E 80 04 21 */	bctrl 
/* 80173DB0 00170CF0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80173DB4 00170CF4  48 00 00 8C */	b .L_80173E40
.L_80173DB8:
/* 80173DB8 00170CF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80173DBC 00170CFC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80173DC0 00170D00  7D 89 03 A6 */	mtctr r12
/* 80173DC4 00170D04  4E 80 04 21 */	bctrl 
/* 80173DC8 00170D08  90 61 00 0C */	stw r3, 0xc(r1)
/* 80173DCC 00170D0C  48 00 00 58 */	b .L_80173E24
.L_80173DD0:
/* 80173DD0 00170D10  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173DD4 00170D14  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173DD8 00170D18  81 83 00 00 */	lwz r12, 0(r3)
/* 80173DDC 00170D1C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80173DE0 00170D20  7D 89 03 A6 */	mtctr r12
/* 80173DE4 00170D24  4E 80 04 21 */	bctrl 
/* 80173DE8 00170D28  7C 64 1B 78 */	mr r4, r3
/* 80173DEC 00170D2C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80173DF0 00170D30  81 83 00 00 */	lwz r12, 0(r3)
/* 80173DF4 00170D34  81 8C 00 08 */	lwz r12, 8(r12)
/* 80173DF8 00170D38  7D 89 03 A6 */	mtctr r12
/* 80173DFC 00170D3C  4E 80 04 21 */	bctrl 
/* 80173E00 00170D40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173E04 00170D44  40 82 00 3C */	bne .L_80173E40
/* 80173E08 00170D48  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173E0C 00170D4C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173E10 00170D50  81 83 00 00 */	lwz r12, 0(r3)
/* 80173E14 00170D54  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173E18 00170D58  7D 89 03 A6 */	mtctr r12
/* 80173E1C 00170D5C  4E 80 04 21 */	bctrl 
/* 80173E20 00170D60  90 61 00 0C */	stw r3, 0xc(r1)
.L_80173E24:
/* 80173E24 00170D64  81 81 00 08 */	lwz r12, 8(r1)
/* 80173E28 00170D68  38 61 00 08 */	addi r3, r1, 8
/* 80173E2C 00170D6C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80173E30 00170D70  7D 89 03 A6 */	mtctr r12
/* 80173E34 00170D74  4E 80 04 21 */	bctrl 
/* 80173E38 00170D78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173E3C 00170D7C  41 82 FF 94 */	beq .L_80173DD0
.L_80173E40:
/* 80173E40 00170D80  7F FF 07 34 */	extsh r31, r31
/* 80173E44 00170D84  48 00 01 00 */	b .L_80173F44
.L_80173E48:
/* 80173E48 00170D88  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173E4C 00170D8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80173E50 00170D90  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80173E54 00170D94  7D 89 03 A6 */	mtctr r12
/* 80173E58 00170D98  4E 80 04 21 */	bctrl 
/* 80173E5C 00170D9C  80 83 00 28 */	lwz r4, 0x28(r3)
/* 80173E60 00170DA0  48 00 00 20 */	b .L_80173E80
.L_80173E64:
/* 80173E64 00170DA4  A8 04 00 18 */	lha r0, 0x18(r4)
/* 80173E68 00170DA8  7C 00 F8 00 */	cmpw r0, r31
/* 80173E6C 00170DAC  40 82 00 10 */	bne .L_80173E7C
/* 80173E70 00170DB0  88 03 00 34 */	lbz r0, 0x34(r3)
/* 80173E74 00170DB4  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 80173E78 00170DB8  98 03 00 34 */	stb r0, 0x34(r3)
.L_80173E7C:
/* 80173E7C 00170DBC  80 84 00 04 */	lwz r4, 4(r4)
.L_80173E80:
/* 80173E80 00170DC0  28 04 00 00 */	cmplwi r4, 0
/* 80173E84 00170DC4  40 82 FF E0 */	bne .L_80173E64
/* 80173E88 00170DC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80173E8C 00170DCC  28 00 00 00 */	cmplwi r0, 0
/* 80173E90 00170DD0  40 82 00 24 */	bne .L_80173EB4
/* 80173E94 00170DD4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173E98 00170DD8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173E9C 00170DDC  81 83 00 00 */	lwz r12, 0(r3)
/* 80173EA0 00170DE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173EA4 00170DE4  7D 89 03 A6 */	mtctr r12
/* 80173EA8 00170DE8  4E 80 04 21 */	bctrl 
/* 80173EAC 00170DEC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80173EB0 00170DF0  48 00 00 94 */	b .L_80173F44
.L_80173EB4:
/* 80173EB4 00170DF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173EB8 00170DF8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173EBC 00170DFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80173EC0 00170E00  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173EC4 00170E04  7D 89 03 A6 */	mtctr r12
/* 80173EC8 00170E08  4E 80 04 21 */	bctrl 
/* 80173ECC 00170E0C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80173ED0 00170E10  48 00 00 58 */	b .L_80173F28
.L_80173ED4:
/* 80173ED4 00170E14  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173ED8 00170E18  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173EDC 00170E1C  81 83 00 00 */	lwz r12, 0(r3)
/* 80173EE0 00170E20  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80173EE4 00170E24  7D 89 03 A6 */	mtctr r12
/* 80173EE8 00170E28  4E 80 04 21 */	bctrl 
/* 80173EEC 00170E2C  7C 64 1B 78 */	mr r4, r3
/* 80173EF0 00170E30  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80173EF4 00170E34  81 83 00 00 */	lwz r12, 0(r3)
/* 80173EF8 00170E38  81 8C 00 08 */	lwz r12, 8(r12)
/* 80173EFC 00170E3C  7D 89 03 A6 */	mtctr r12
/* 80173F00 00170E40  4E 80 04 21 */	bctrl 
/* 80173F04 00170E44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173F08 00170E48  40 82 00 3C */	bne .L_80173F44
/* 80173F0C 00170E4C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173F10 00170E50  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173F14 00170E54  81 83 00 00 */	lwz r12, 0(r3)
/* 80173F18 00170E58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80173F1C 00170E5C  7D 89 03 A6 */	mtctr r12
/* 80173F20 00170E60  4E 80 04 21 */	bctrl 
/* 80173F24 00170E64  90 61 00 0C */	stw r3, 0xc(r1)
.L_80173F28:
/* 80173F28 00170E68  81 81 00 08 */	lwz r12, 8(r1)
/* 80173F2C 00170E6C  38 61 00 08 */	addi r3, r1, 8
/* 80173F30 00170E70  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80173F34 00170E74  7D 89 03 A6 */	mtctr r12
/* 80173F38 00170E78  4E 80 04 21 */	bctrl 
/* 80173F3C 00170E7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80173F40 00170E80  41 82 FF 94 */	beq .L_80173ED4
.L_80173F44:
/* 80173F44 00170E84  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80173F48 00170E88  81 83 00 00 */	lwz r12, 0(r3)
/* 80173F4C 00170E8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80173F50 00170E90  7D 89 03 A6 */	mtctr r12
/* 80173F54 00170E94  4E 80 04 21 */	bctrl 
/* 80173F58 00170E98  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80173F5C 00170E9C  7C 04 18 40 */	cmplw r4, r3
/* 80173F60 00170EA0  40 82 FE E8 */	bne .L_80173E48
/* 80173F64 00170EA4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80173F68 00170EA8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80173F6C 00170EAC  7C 08 03 A6 */	mtlr r0
/* 80173F70 00170EB0  38 21 00 20 */	addi r1, r1, 0x20
/* 80173F74 00170EB4  4E 80 00 20 */	blr 
.endfn openRoom__Q24Game8RouteMgrFs

.fn write__Q24Game8RouteMgrFR6Stream, global
/* 80173F78 00170EB8  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 80173F7C 00170EBC  7C 08 02 A6 */	mflr r0
/* 80173F80 00170EC0  3C A0 80 48 */	lis r5, lbl_8047E548@ha
/* 80173F84 00170EC4  90 01 01 34 */	stw r0, 0x134(r1)
/* 80173F88 00170EC8  BF 61 01 1C */	stmw r27, 0x11c(r1)
/* 80173F8C 00170ECC  7C 9E 23 78 */	mr r30, r4
/* 80173F90 00170ED0  7C 7B 1B 78 */	mr r27, r3
/* 80173F94 00170ED4  3B E5 E5 48 */	addi r31, r5, lbl_8047E548@l
/* 80173F98 00170ED8  7F C3 F3 78 */	mr r3, r30
/* 80173F9C 00170EDC  80 84 04 14 */	lwz r4, 0x414(r4)
/* 80173FA0 00170EE0  48 2A 04 95 */	bl textWriteTab__6StreamFi
/* 80173FA4 00170EE4  A0 1B 00 1C */	lhz r0, 0x1c(r27)
/* 80173FA8 00170EE8  7F C3 F3 78 */	mr r3, r30
/* 80173FAC 00170EEC  7C 04 07 34 */	extsh r4, r0
/* 80173FB0 00170EF0  48 2A 17 81 */	bl writeShort__6StreamFs
/* 80173FB4 00170EF4  7F C3 F3 78 */	mr r3, r30
/* 80173FB8 00170EF8  38 9F 00 C0 */	addi r4, r31, 0xc0
/* 80173FBC 00170EFC  4C C6 31 82 */	crclr 6
/* 80173FC0 00170F00  48 2A 02 1D */	bl textWriteText__6StreamFPce
/* 80173FC4 00170F04  38 00 00 00 */	li r0, 0
/* 80173FC8 00170F08  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8WayPoint>"@ha
/* 80173FCC 00170F0C  38 63 23 80 */	addi r3, r3, "__vt__26Iterator<Q24Game8WayPoint>"@l
/* 80173FD0 00170F10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80173FD4 00170F14  28 00 00 00 */	cmplwi r0, 0
/* 80173FD8 00170F18  90 61 00 08 */	stw r3, 8(r1)
/* 80173FDC 00170F1C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80173FE0 00170F20  93 61 00 10 */	stw r27, 0x10(r1)
/* 80173FE4 00170F24  40 82 00 20 */	bne .L_80174004
/* 80173FE8 00170F28  7F 63 DB 78 */	mr r3, r27
/* 80173FEC 00170F2C  81 9B 00 00 */	lwz r12, 0(r27)
/* 80173FF0 00170F30  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80173FF4 00170F34  7D 89 03 A6 */	mtctr r12
/* 80173FF8 00170F38  4E 80 04 21 */	bctrl 
/* 80173FFC 00170F3C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80174000 00170F40  48 00 02 60 */	b .L_80174260
.L_80174004:
/* 80174004 00170F44  7F 63 DB 78 */	mr r3, r27
/* 80174008 00170F48  81 9B 00 00 */	lwz r12, 0(r27)
/* 8017400C 00170F4C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80174010 00170F50  7D 89 03 A6 */	mtctr r12
/* 80174014 00170F54  4E 80 04 21 */	bctrl 
/* 80174018 00170F58  90 61 00 0C */	stw r3, 0xc(r1)
/* 8017401C 00170F5C  48 00 00 58 */	b .L_80174074
.L_80174020:
/* 80174020 00170F60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80174024 00170F64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80174028 00170F68  81 83 00 00 */	lwz r12, 0(r3)
/* 8017402C 00170F6C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80174030 00170F70  7D 89 03 A6 */	mtctr r12
/* 80174034 00170F74  4E 80 04 21 */	bctrl 
/* 80174038 00170F78  7C 64 1B 78 */	mr r4, r3
/* 8017403C 00170F7C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80174040 00170F80  81 83 00 00 */	lwz r12, 0(r3)
/* 80174044 00170F84  81 8C 00 08 */	lwz r12, 8(r12)
/* 80174048 00170F88  7D 89 03 A6 */	mtctr r12
/* 8017404C 00170F8C  4E 80 04 21 */	bctrl 
/* 80174050 00170F90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80174054 00170F94  40 82 02 0C */	bne .L_80174260
/* 80174058 00170F98  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017405C 00170F9C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80174060 00170FA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80174064 00170FA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80174068 00170FA8  7D 89 03 A6 */	mtctr r12
/* 8017406C 00170FAC  4E 80 04 21 */	bctrl 
/* 80174070 00170FB0  90 61 00 0C */	stw r3, 0xc(r1)
.L_80174074:
/* 80174074 00170FB4  81 81 00 08 */	lwz r12, 8(r1)
/* 80174078 00170FB8  38 61 00 08 */	addi r3, r1, 8
/* 8017407C 00170FBC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80174080 00170FC0  7D 89 03 A6 */	mtctr r12
/* 80174084 00170FC4  4E 80 04 21 */	bctrl 
/* 80174088 00170FC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017408C 00170FCC  41 82 FF 94 */	beq .L_80174020
/* 80174090 00170FD0  48 00 01 D0 */	b .L_80174260
.L_80174094:
/* 80174094 00170FD4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80174098 00170FD8  81 83 00 00 */	lwz r12, 0(r3)
/* 8017409C 00170FDC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801740A0 00170FE0  7D 89 03 A6 */	mtctr r12
/* 801740A4 00170FE4  4E 80 04 21 */	bctrl 
/* 801740A8 00170FE8  7C 7C 1B 78 */	mr r28, r3
/* 801740AC 00170FEC  38 61 00 18 */	addi r3, r1, 0x18
/* 801740B0 00170FF0  A8 BC 00 36 */	lha r5, 0x36(r28)
/* 801740B4 00170FF4  38 9F 00 28 */	addi r4, r31, 0x28
/* 801740B8 00170FF8  4C C6 31 82 */	crclr 6
/* 801740BC 00170FFC  4B F5 33 7D */	bl sprintf
/* 801740C0 00171000  7F C3 F3 78 */	mr r3, r30
/* 801740C4 00171004  38 81 00 18 */	addi r4, r1, 0x18
/* 801740C8 00171008  48 29 FF 55 */	bl textBeginGroup__6StreamFPc
/* 801740CC 0017100C  80 9E 04 14 */	lwz r4, 0x414(r30)
/* 801740D0 00171010  7F C3 F3 78 */	mr r3, r30
/* 801740D4 00171014  48 2A 03 61 */	bl textWriteTab__6StreamFi
/* 801740D8 00171018  A8 9C 00 36 */	lha r4, 0x36(r28)
/* 801740DC 0017101C  7F C3 F3 78 */	mr r3, r30
/* 801740E0 00171020  48 2A 16 51 */	bl writeShort__6StreamFs
/* 801740E4 00171024  7F C3 F3 78 */	mr r3, r30
/* 801740E8 00171028  38 9F 00 34 */	addi r4, r31, 0x34
/* 801740EC 0017102C  4C C6 31 82 */	crclr 6
/* 801740F0 00171030  48 2A 00 ED */	bl textWriteText__6StreamFPce
/* 801740F4 00171034  80 9E 04 14 */	lwz r4, 0x414(r30)
/* 801740F8 00171038  7F C3 F3 78 */	mr r3, r30
/* 801740FC 0017103C  48 2A 03 39 */	bl textWriteTab__6StreamFi
/* 80174100 00171040  A8 9C 00 38 */	lha r4, 0x38(r28)
/* 80174104 00171044  7F C3 F3 78 */	mr r3, r30
/* 80174108 00171048  48 2A 16 29 */	bl writeShort__6StreamFs
/* 8017410C 0017104C  7F C3 F3 78 */	mr r3, r30
/* 80174110 00171050  38 9F 00 40 */	addi r4, r31, 0x40
/* 80174114 00171054  4C C6 31 82 */	crclr 6
/* 80174118 00171058  48 2A 00 C5 */	bl textWriteText__6StreamFPce
/* 8017411C 0017105C  7F 9B E3 78 */	mr r27, r28
/* 80174120 00171060  3B A0 00 00 */	li r29, 0
/* 80174124 00171064  48 00 00 38 */	b .L_8017415C
.L_80174128:
/* 80174128 00171068  80 9E 04 14 */	lwz r4, 0x414(r30)
/* 8017412C 0017106C  7F C3 F3 78 */	mr r3, r30
/* 80174130 00171070  48 2A 03 05 */	bl textWriteTab__6StreamFi
/* 80174134 00171074  A8 9B 00 3A */	lha r4, 0x3a(r27)
/* 80174138 00171078  7F C3 F3 78 */	mr r3, r30
/* 8017413C 0017107C  48 2A 15 F5 */	bl writeShort__6StreamFs
/* 80174140 00171080  7F C3 F3 78 */	mr r3, r30
/* 80174144 00171084  7F A5 EB 78 */	mr r5, r29
/* 80174148 00171088  38 9F 00 50 */	addi r4, r31, 0x50
/* 8017414C 0017108C  4C C6 31 82 */	crclr 6
/* 80174150 00171090  48 2A 00 8D */	bl textWriteText__6StreamFPce
/* 80174154 00171094  3B 7B 00 02 */	addi r27, r27, 2
/* 80174158 00171098  3B BD 00 01 */	addi r29, r29, 1
.L_8017415C:
/* 8017415C 0017109C  A8 1C 00 38 */	lha r0, 0x38(r28)
/* 80174160 001710A0  7C 1D 00 00 */	cmpw r29, r0
/* 80174164 001710A4  41 80 FF C4 */	blt .L_80174128
/* 80174168 001710A8  80 9E 04 14 */	lwz r4, 0x414(r30)
/* 8017416C 001710AC  7F C3 F3 78 */	mr r3, r30
/* 80174170 001710B0  48 2A 02 C5 */	bl textWriteTab__6StreamFi
/* 80174174 001710B4  7F C4 F3 78 */	mr r4, r30
/* 80174178 001710B8  38 7C 00 4C */	addi r3, r28, 0x4c
/* 8017417C 001710BC  48 29 D8 6D */	bl "write__10Vector3<f>FR6Stream"
/* 80174180 001710C0  C0 3C 00 58 */	lfs f1, 0x58(r28)
/* 80174184 001710C4  7F C3 F3 78 */	mr r3, r30
/* 80174188 001710C8  48 2A 16 C1 */	bl writeFloat__6StreamFf
/* 8017418C 001710CC  7F C3 F3 78 */	mr r3, r30
/* 80174190 001710D0  38 82 A6 A4 */	addi r4, r2, lbl_80518A04@sda21
/* 80174194 001710D4  4C C6 31 82 */	crclr 6
/* 80174198 001710D8  48 2A 00 45 */	bl textWriteText__6StreamFPce
/* 8017419C 001710DC  7F C3 F3 78 */	mr r3, r30
/* 801741A0 001710E0  48 29 FF 01 */	bl textEndGroup__6StreamFv
/* 801741A4 001710E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801741A8 001710E8  28 00 00 00 */	cmplwi r0, 0
/* 801741AC 001710EC  40 82 00 24 */	bne .L_801741D0
/* 801741B0 001710F0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801741B4 001710F4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801741B8 001710F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801741BC 001710FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801741C0 00171100  7D 89 03 A6 */	mtctr r12
/* 801741C4 00171104  4E 80 04 21 */	bctrl 
/* 801741C8 00171108  90 61 00 0C */	stw r3, 0xc(r1)
/* 801741CC 0017110C  48 00 00 94 */	b .L_80174260
.L_801741D0:
/* 801741D0 00171110  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801741D4 00171114  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801741D8 00171118  81 83 00 00 */	lwz r12, 0(r3)
/* 801741DC 0017111C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801741E0 00171120  7D 89 03 A6 */	mtctr r12
/* 801741E4 00171124  4E 80 04 21 */	bctrl 
/* 801741E8 00171128  90 61 00 0C */	stw r3, 0xc(r1)
/* 801741EC 0017112C  48 00 00 58 */	b .L_80174244
.L_801741F0:
/* 801741F0 00171130  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801741F4 00171134  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801741F8 00171138  81 83 00 00 */	lwz r12, 0(r3)
/* 801741FC 0017113C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80174200 00171140  7D 89 03 A6 */	mtctr r12
/* 80174204 00171144  4E 80 04 21 */	bctrl 
/* 80174208 00171148  7C 64 1B 78 */	mr r4, r3
/* 8017420C 0017114C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80174210 00171150  81 83 00 00 */	lwz r12, 0(r3)
/* 80174214 00171154  81 8C 00 08 */	lwz r12, 8(r12)
/* 80174218 00171158  7D 89 03 A6 */	mtctr r12
/* 8017421C 0017115C  4E 80 04 21 */	bctrl 
/* 80174220 00171160  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80174224 00171164  40 82 00 3C */	bne .L_80174260
/* 80174228 00171168  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8017422C 0017116C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80174230 00171170  81 83 00 00 */	lwz r12, 0(r3)
/* 80174234 00171174  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80174238 00171178  7D 89 03 A6 */	mtctr r12
/* 8017423C 0017117C  4E 80 04 21 */	bctrl 
/* 80174240 00171180  90 61 00 0C */	stw r3, 0xc(r1)
.L_80174244:
/* 80174244 00171184  81 81 00 08 */	lwz r12, 8(r1)
/* 80174248 00171188  38 61 00 08 */	addi r3, r1, 8
/* 8017424C 0017118C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80174250 00171190  7D 89 03 A6 */	mtctr r12
/* 80174254 00171194  4E 80 04 21 */	bctrl 
/* 80174258 00171198  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017425C 0017119C  41 82 FF 94 */	beq .L_801741F0
.L_80174260:
/* 80174260 001711A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80174264 001711A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80174268 001711A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8017426C 001711AC  7D 89 03 A6 */	mtctr r12
/* 80174270 001711B0  4E 80 04 21 */	bctrl 
/* 80174274 001711B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80174278 001711B8  7C 04 18 40 */	cmplw r4, r3
/* 8017427C 001711BC  40 82 FE 18 */	bne .L_80174094
/* 80174280 001711C0  BB 61 01 1C */	lmw r27, 0x11c(r1)
/* 80174284 001711C4  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80174288 001711C8  7C 08 03 A6 */	mtlr r0
/* 8017428C 001711CC  38 21 01 30 */	addi r1, r1, 0x130
/* 80174290 001711D0  4E 80 00 20 */	blr 
.endfn write__Q24Game8RouteMgrFR6Stream

.fn __ct__Q24Game12GameRouteMgrFv, global
/* 80174294 001711D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80174298 001711D8  7C 08 02 A6 */	mflr r0
/* 8017429C 001711DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801742A0 001711E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801742A4 001711E4  7C 7F 1B 78 */	mr r31, r3
/* 801742A8 001711E8  48 29 D0 E9 */	bl __ct__5CNodeFv
/* 801742AC 001711EC  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801742B0 001711F0  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8WayPoint>"@ha
/* 801742B4 001711F4  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801742B8 001711F8  3C A0 80 4B */	lis r5, __vt__Q24Game8RouteMgr@ha
/* 801742BC 001711FC  90 1F 00 00 */	stw r0, 0(r31)
/* 801742C0 00171200  38 03 23 D0 */	addi r0, r3, "__vt__27Container<Q24Game8WayPoint>"@l
/* 801742C4 00171204  3C 80 80 48 */	lis r4, lbl_8047E5A8@ha
/* 801742C8 00171208  3C 60 80 4B */	lis r3, __vt__Q24Game12GameRouteMgr@ha
/* 801742CC 0017120C  90 1F 00 00 */	stw r0, 0(r31)
/* 801742D0 00171210  38 C0 00 00 */	li r6, 0
/* 801742D4 00171214  38 A5 23 98 */	addi r5, r5, __vt__Q24Game8RouteMgr@l
/* 801742D8 00171218  38 84 E5 A8 */	addi r4, r4, lbl_8047E5A8@l
/* 801742DC 0017121C  98 DF 00 18 */	stb r6, 0x18(r31)
/* 801742E0 00171220  38 03 23 48 */	addi r0, r3, __vt__Q24Game12GameRouteMgr@l
/* 801742E4 00171224  7F E3 FB 78 */	mr r3, r31
/* 801742E8 00171228  90 BF 00 00 */	stw r5, 0(r31)
/* 801742EC 0017122C  B0 DF 00 1C */	sth r6, 0x1c(r31)
/* 801742F0 00171230  90 9F 00 14 */	stw r4, 0x14(r31)
/* 801742F4 00171234  90 1F 00 00 */	stw r0, 0(r31)
/* 801742F8 00171238  90 DF 00 20 */	stw r6, 0x20(r31)
/* 801742FC 0017123C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80174300 00171240  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80174304 00171244  7C 08 03 A6 */	mtlr r0
/* 80174308 00171248  38 21 00 10 */	addi r1, r1, 0x10
/* 8017430C 0017124C  4E 80 00 20 */	blr 
.endfn __ct__Q24Game12GameRouteMgrFv

.fn __dt__Q24Game12GameRouteMgrFv, global
/* 80174310 00171250  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80174314 00171254  7C 08 02 A6 */	mflr r0
/* 80174318 00171258  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017431C 0017125C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80174320 00171260  7C 9F 23 78 */	mr r31, r4
/* 80174324 00171264  93 C1 00 08 */	stw r30, 8(r1)
/* 80174328 00171268  7C 7E 1B 79 */	or. r30, r3, r3
/* 8017432C 0017126C  41 82 00 84 */	beq .L_801743B0
/* 80174330 00171270  3C 60 80 4B */	lis r3, __vt__Q24Game12GameRouteMgr@ha
/* 80174334 00171274  38 03 23 48 */	addi r0, r3, __vt__Q24Game12GameRouteMgr@l
/* 80174338 00171278  90 1E 00 00 */	stw r0, 0(r30)
/* 8017433C 0017127C  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 80174340 00171280  28 03 00 00 */	cmplwi r3, 0
/* 80174344 00171284  41 82 00 1C */	beq .L_80174360
/* 80174348 00171288  41 82 00 18 */	beq .L_80174360
/* 8017434C 0017128C  81 83 00 00 */	lwz r12, 0(r3)
/* 80174350 00171290  38 80 00 01 */	li r4, 1
/* 80174354 00171294  81 8C 00 08 */	lwz r12, 8(r12)
/* 80174358 00171298  7D 89 03 A6 */	mtctr r12
/* 8017435C 0017129C  4E 80 04 21 */	bctrl 
.L_80174360:
/* 80174360 001712A0  28 1E 00 00 */	cmplwi r30, 0
/* 80174364 001712A4  41 82 00 3C */	beq .L_801743A0
/* 80174368 001712A8  3C 60 80 4B */	lis r3, __vt__Q24Game8RouteMgr@ha
/* 8017436C 001712AC  38 03 23 98 */	addi r0, r3, __vt__Q24Game8RouteMgr@l
/* 80174370 001712B0  90 1E 00 00 */	stw r0, 0(r30)
/* 80174374 001712B4  41 82 00 2C */	beq .L_801743A0
/* 80174378 001712B8  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8WayPoint>"@ha
/* 8017437C 001712BC  38 03 23 D0 */	addi r0, r3, "__vt__27Container<Q24Game8WayPoint>"@l
/* 80174380 001712C0  90 1E 00 00 */	stw r0, 0(r30)
/* 80174384 001712C4  41 82 00 1C */	beq .L_801743A0
/* 80174388 001712C8  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8017438C 001712CC  7F C3 F3 78 */	mr r3, r30
/* 80174390 001712D0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80174394 001712D4  38 80 00 00 */	li r4, 0
/* 80174398 001712D8  90 1E 00 00 */	stw r0, 0(r30)
/* 8017439C 001712DC  48 29 D1 ED */	bl __dt__5CNodeFv
.L_801743A0:
/* 801743A0 001712E0  7F E0 07 35 */	extsh. r0, r31
/* 801743A4 001712E4  40 81 00 0C */	ble .L_801743B0
/* 801743A8 001712E8  7F C3 F3 78 */	mr r3, r30
/* 801743AC 001712EC  4B EA FD 09 */	bl __dl__FPv
.L_801743B0:
/* 801743B0 001712F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801743B4 001712F4  7F C3 F3 78 */	mr r3, r30
/* 801743B8 001712F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801743BC 001712FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801743C0 00171300  7C 08 03 A6 */	mtlr r0
/* 801743C4 00171304  38 21 00 10 */	addi r1, r1, 0x10
/* 801743C8 00171308  4E 80 00 20 */	blr 
.endfn __dt__Q24Game12GameRouteMgrFv

.fn read__Q24Game12GameRouteMgrFR6Stream, global
/* 801743CC 0017130C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801743D0 00171310  7C 08 02 A6 */	mflr r0
/* 801743D4 00171314  90 01 00 34 */	stw r0, 0x34(r1)
/* 801743D8 00171318  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 801743DC 0017131C  7C 9A 23 78 */	mr r26, r4
/* 801743E0 00171320  7C 79 1B 78 */	mr r25, r3
/* 801743E4 00171324  7F 43 D3 78 */	mr r3, r26
/* 801743E8 00171328  48 2A 03 7D */	bl readShort__6StreamFv
/* 801743EC 0017132C  B0 79 00 1C */	sth r3, 0x1c(r25)
/* 801743F0 00171330  A3 F9 00 1C */	lhz r31, 0x1c(r25)
/* 801743F4 00171334  1C 7F 00 78 */	mulli r3, r31, 0x78
/* 801743F8 00171338  38 63 00 10 */	addi r3, r3, 0x10
/* 801743FC 0017133C  4B EA FB B1 */	bl __nwa__FUl
/* 80174400 00171340  3C 80 80 17 */	lis r4, __ct__Q24Game8WayPointFv@ha
/* 80174404 00171344  3C A0 80 17 */	lis r5, __dt__Q24Game8WayPointFv@ha
/* 80174408 00171348  38 84 26 A0 */	addi r4, r4, __ct__Q24Game8WayPointFv@l
/* 8017440C 0017134C  7F E7 FB 78 */	mr r7, r31
/* 80174410 00171350  38 A5 27 6C */	addi r5, r5, __dt__Q24Game8WayPointFv@l
/* 80174414 00171354  38 C0 00 78 */	li r6, 0x78
/* 80174418 00171358  4B F4 D5 D9 */	bl __construct_new_array
/* 8017441C 0017135C  90 79 00 20 */	stw r3, 0x20(r25)
/* 80174420 00171360  3B 60 00 00 */	li r27, 0
/* 80174424 00171364  3B 80 00 00 */	li r28, 0
/* 80174428 00171368  48 00 00 70 */	b .L_80174498
.L_8017442C:
/* 8017442C 0017136C  80 19 00 20 */	lwz r0, 0x20(r25)
/* 80174430 00171370  7F 43 D3 78 */	mr r3, r26
/* 80174434 00171374  7F C0 E2 14 */	add r30, r0, r28
/* 80174438 00171378  48 2A 03 2D */	bl readShort__6StreamFv
/* 8017443C 0017137C  B0 7E 00 36 */	sth r3, 0x36(r30)
/* 80174440 00171380  7F 43 D3 78 */	mr r3, r26
/* 80174444 00171384  48 2A 03 21 */	bl readShort__6StreamFv
/* 80174448 00171388  B0 7E 00 38 */	sth r3, 0x38(r30)
/* 8017444C 0017138C  7F DD F3 78 */	mr r29, r30
/* 80174450 00171390  3B E0 00 00 */	li r31, 0
/* 80174454 00171394  48 00 00 18 */	b .L_8017446C
.L_80174458:
/* 80174458 00171398  7F 43 D3 78 */	mr r3, r26
/* 8017445C 0017139C  48 2A 03 09 */	bl readShort__6StreamFv
/* 80174460 001713A0  B0 7D 00 3A */	sth r3, 0x3a(r29)
/* 80174464 001713A4  3B BD 00 02 */	addi r29, r29, 2
/* 80174468 001713A8  3B FF 00 01 */	addi r31, r31, 1
.L_8017446C:
/* 8017446C 001713AC  A8 1E 00 38 */	lha r0, 0x38(r30)
/* 80174470 001713B0  7C 1F 00 00 */	cmpw r31, r0
/* 80174474 001713B4  41 80 FF E4 */	blt .L_80174458
/* 80174478 001713B8  7F 44 D3 78 */	mr r4, r26
/* 8017447C 001713BC  38 7E 00 4C */	addi r3, r30, 0x4c
/* 80174480 001713C0  48 29 D5 11 */	bl "read__10Vector3<f>FR6Stream"
/* 80174484 001713C4  7F 43 D3 78 */	mr r3, r26
/* 80174488 001713C8  48 2A 09 25 */	bl readFloat__6StreamFv
/* 8017448C 001713CC  D0 3E 00 58 */	stfs f1, 0x58(r30)
/* 80174490 001713D0  3B 9C 00 78 */	addi r28, r28, 0x78
/* 80174494 001713D4  3B 7B 00 01 */	addi r27, r27, 1
.L_80174498:
/* 80174498 001713D8  A0 19 00 1C */	lhz r0, 0x1c(r25)
/* 8017449C 001713DC  7C 1B 00 00 */	cmpw r27, r0
/* 801744A0 001713E0  41 80 FF 8C */	blt .L_8017442C
/* 801744A4 001713E4  7F 23 CB 78 */	mr r3, r25
/* 801744A8 001713E8  4B FF E5 3D */	bl makeInvertLinks__Q24Game8RouteMgrFv
/* 801744AC 001713EC  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 801744B0 001713F0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801744B4 001713F4  7C 08 03 A6 */	mtlr r0
/* 801744B8 001713F8  38 21 00 30 */	addi r1, r1, 0x30
/* 801744BC 001713FC  4E 80 00 20 */	blr 
.endfn read__Q24Game12GameRouteMgrFR6Stream

.fn getWayPoint__Q24Game12GameRouteMgrFs, global
/* 801744C0 00171400  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801744C4 00171404  7C 08 02 A6 */	mflr r0
/* 801744C8 00171408  90 01 00 14 */	stw r0, 0x14(r1)
/* 801744CC 0017140C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801744D0 00171410  7C 9F 23 78 */	mr r31, r4
/* 801744D4 00171414  7F E0 07 35 */	extsh. r0, r31
/* 801744D8 00171418  38 80 00 00 */	li r4, 0
/* 801744DC 0017141C  93 C1 00 08 */	stw r30, 8(r1)
/* 801744E0 00171420  7C 7E 1B 78 */	mr r30, r3
/* 801744E4 00171424  41 80 00 18 */	blt .L_801744FC
/* 801744E8 00171428  A0 1E 00 1C */	lhz r0, 0x1c(r30)
/* 801744EC 0017142C  7F E3 07 34 */	extsh r3, r31
/* 801744F0 00171430  7C 03 00 00 */	cmpw r3, r0
/* 801744F4 00171434  40 80 00 08 */	bge .L_801744FC
/* 801744F8 00171438  38 80 00 01 */	li r4, 1
.L_801744FC:
/* 801744FC 0017143C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80174500 00171440  40 82 00 20 */	bne .L_80174520
/* 80174504 00171444  3C 60 80 48 */	lis r3, lbl_8047E554@ha
/* 80174508 00171448  3C A0 80 48 */	lis r5, lbl_8047E564@ha
/* 8017450C 0017144C  38 63 E5 54 */	addi r3, r3, lbl_8047E554@l
/* 80174510 00171450  38 80 04 64 */	li r4, 0x464
/* 80174514 00171454  38 A5 E5 64 */	addi r5, r5, lbl_8047E564@l
/* 80174518 00171458  4C C6 31 82 */	crclr 6
/* 8017451C 0017145C  4B EB 61 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80174520:
/* 80174520 00171460  7F E0 07 34 */	extsh r0, r31
/* 80174524 00171464  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 80174528 00171468  1C 00 00 78 */	mulli r0, r0, 0x78
/* 8017452C 0017146C  7C 63 02 14 */	add r3, r3, r0
/* 80174530 00171470  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80174534 00171474  83 C1 00 08 */	lwz r30, 8(r1)
/* 80174538 00171478  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017453C 0017147C  7C 08 03 A6 */	mtlr r0
/* 80174540 00171480  38 21 00 10 */	addi r1, r1, 0x10
/* 80174544 00171484  4E 80 00 20 */	blr 
.endfn getWayPoint__Q24Game12GameRouteMgrFs

.fn get__Q24Game12GameRouteMgrFPv, global
/* 80174548 00171488  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017454C 0017148C  7C 08 02 A6 */	mflr r0
/* 80174550 00171490  7C 84 07 34 */	extsh r4, r4
/* 80174554 00171494  90 01 00 14 */	stw r0, 0x14(r1)
/* 80174558 00171498  81 83 00 00 */	lwz r12, 0(r3)
/* 8017455C 0017149C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80174560 001714A0  7D 89 03 A6 */	mtctr r12
/* 80174564 001714A4  4E 80 04 21 */	bctrl 
/* 80174568 001714A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017456C 001714AC  7C 08 03 A6 */	mtlr r0
/* 80174570 001714B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80174574 001714B4  4E 80 00 20 */	blr 
.endfn get__Q24Game12GameRouteMgrFPv

.fn getNext__Q24Game12GameRouteMgrFPv, global
/* 80174578 001714B8  38 64 00 01 */	addi r3, r4, 1
/* 8017457C 001714BC  4E 80 00 20 */	blr 
.endfn getNext__Q24Game12GameRouteMgrFPv

.fn getStart__Q24Game12GameRouteMgrFv, global
/* 80174580 001714C0  38 60 00 00 */	li r3, 0
/* 80174584 001714C4  4E 80 00 20 */	blr 
.endfn getStart__Q24Game12GameRouteMgrFv

.fn getEnd__Q24Game12GameRouteMgrFv, global
/* 80174588 001714C8  A0 63 00 1C */	lhz r3, 0x1c(r3)
/* 8017458C 001714CC  4E 80 00 20 */	blr 
.endfn getEnd__Q24Game12GameRouteMgrFv

.fn __ct__Q24Game14EditorRouteMgrFv, global
/* 80174590 001714D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80174594 001714D4  7C 08 02 A6 */	mflr r0
/* 80174598 001714D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017459C 001714DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801745A0 001714E0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801745A4 001714E4  7C 7E 1B 78 */	mr r30, r3
/* 801745A8 001714E8  7F DF F3 78 */	mr r31, r30
/* 801745AC 001714EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801745B0 001714F0  48 29 CD E1 */	bl __ct__5CNodeFv
/* 801745B4 001714F4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801745B8 001714F8  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8WayPoint>"@ha
/* 801745BC 001714FC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801745C0 00171500  3C A0 80 4B */	lis r5, __vt__Q24Game8RouteMgr@ha
/* 801745C4 00171504  90 1F 00 00 */	stw r0, 0(r31)
/* 801745C8 00171508  38 03 23 D0 */	addi r0, r3, "__vt__27Container<Q24Game8WayPoint>"@l
/* 801745CC 0017150C  3C 80 80 48 */	lis r4, lbl_8047E5A8@ha
/* 801745D0 00171510  3C 60 80 4B */	lis r3, __vt__Q24Game14EditorRouteMgr@ha
/* 801745D4 00171514  90 1F 00 00 */	stw r0, 0(r31)
/* 801745D8 00171518  38 C0 00 00 */	li r6, 0
/* 801745DC 0017151C  3B BE 00 20 */	addi r29, r30, 0x20
/* 801745E0 00171520  38 A5 23 98 */	addi r5, r5, __vt__Q24Game8RouteMgr@l
/* 801745E4 00171524  98 DF 00 18 */	stb r6, 0x18(r31)
/* 801745E8 00171528  38 84 E5 A8 */	addi r4, r4, lbl_8047E5A8@l
/* 801745EC 0017152C  38 03 23 00 */	addi r0, r3, __vt__Q24Game14EditorRouteMgr@l
/* 801745F0 00171530  7F A3 EB 78 */	mr r3, r29
/* 801745F4 00171534  90 BF 00 00 */	stw r5, 0(r31)
/* 801745F8 00171538  B0 DF 00 1C */	sth r6, 0x1c(r31)
/* 801745FC 0017153C  90 9F 00 14 */	stw r4, 0x14(r31)
/* 80174600 00171540  90 1E 00 00 */	stw r0, 0(r30)
/* 80174604 00171544  48 29 CD 8D */	bl __ct__5CNodeFv
/* 80174608 00171548  3C 60 80 4B */	lis r3, __vt__Q34Game14EditorRouteMgr6WPNode@ha
/* 8017460C 0017154C  38 00 00 00 */	li r0, 0
/* 80174610 00171550  38 83 23 38 */	addi r4, r3, __vt__Q34Game14EditorRouteMgr6WPNode@l
/* 80174614 00171554  7F C3 F3 78 */	mr r3, r30
/* 80174618 00171558  90 9D 00 00 */	stw r4, 0(r29)
/* 8017461C 0017155C  90 1D 00 18 */	stw r0, 0x18(r29)
/* 80174620 00171560  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80174624 00171564  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80174628 00171568  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017462C 0017156C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80174630 00171570  7C 08 03 A6 */	mtlr r0
/* 80174634 00171574  38 21 00 20 */	addi r1, r1, 0x20
/* 80174638 00171578  4E 80 00 20 */	blr 
.endfn __ct__Q24Game14EditorRouteMgrFv

.fn __dt__Q34Game14EditorRouteMgr6WPNodeFv, weak
/* 8017463C 0017157C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80174640 00171580  7C 08 02 A6 */	mflr r0
/* 80174644 00171584  90 01 00 14 */	stw r0, 0x14(r1)
/* 80174648 00171588  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017464C 0017158C  7C 9F 23 78 */	mr r31, r4
/* 80174650 00171590  93 C1 00 08 */	stw r30, 8(r1)
/* 80174654 00171594  7C 7E 1B 79 */	or. r30, r3, r3
/* 80174658 00171598  41 82 00 28 */	beq .L_80174680
/* 8017465C 0017159C  3C A0 80 4B */	lis r5, __vt__Q34Game14EditorRouteMgr6WPNode@ha
/* 80174660 001715A0  38 80 00 00 */	li r4, 0
/* 80174664 001715A4  38 05 23 38 */	addi r0, r5, __vt__Q34Game14EditorRouteMgr6WPNode@l
/* 80174668 001715A8  90 1E 00 00 */	stw r0, 0(r30)
/* 8017466C 001715AC  48 29 CF 1D */	bl __dt__5CNodeFv
/* 80174670 001715B0  7F E0 07 35 */	extsh. r0, r31
/* 80174674 001715B4  40 81 00 0C */	ble .L_80174680
/* 80174678 001715B8  7F C3 F3 78 */	mr r3, r30
/* 8017467C 001715BC  4B EA FA 39 */	bl __dl__FPv
.L_80174680:
/* 80174680 001715C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80174684 001715C4  7F C3 F3 78 */	mr r3, r30
/* 80174688 001715C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017468C 001715CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80174690 001715D0  7C 08 03 A6 */	mtlr r0
/* 80174694 001715D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80174698 001715D8  4E 80 00 20 */	blr 
.endfn __dt__Q34Game14EditorRouteMgr6WPNodeFv

.fn read__Q24Game14EditorRouteMgrFR6Stream, global
/* 8017469C 001715DC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801746A0 001715E0  7C 08 02 A6 */	mflr r0
/* 801746A4 001715E4  90 01 00 34 */	stw r0, 0x34(r1)
/* 801746A8 001715E8  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 801746AC 001715EC  7C 7E 1B 78 */	mr r30, r3
/* 801746B0 001715F0  7C 9F 23 78 */	mr r31, r4
/* 801746B4 001715F4  83 23 00 30 */	lwz r25, 0x30(r3)
/* 801746B8 001715F8  48 00 00 14 */	b .L_801746CC
.L_801746BC:
/* 801746BC 001715FC  80 99 00 18 */	lwz r4, 0x18(r25)
/* 801746C0 00171600  7F C3 F3 78 */	mr r3, r30
/* 801746C4 00171604  48 00 02 11 */	bl delWayPoint__Q24Game14EditorRouteMgrFPQ24Game8WayPoint
/* 801746C8 00171608  83 39 00 04 */	lwz r25, 4(r25)
.L_801746CC:
/* 801746CC 0017160C  28 19 00 00 */	cmplwi r25, 0
/* 801746D0 00171610  40 82 FF EC */	bne .L_801746BC
/* 801746D4 00171614  7F E3 FB 78 */	mr r3, r31
/* 801746D8 00171618  48 2A 00 8D */	bl readShort__6StreamFv
/* 801746DC 0017161C  38 00 00 00 */	li r0, 0
/* 801746E0 00171620  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 801746E4 00171624  B0 1E 00 1C */	sth r0, 0x1c(r30)
/* 801746E8 00171628  54 7A 04 3E */	clrlwi r26, r3, 0x10
/* 801746EC 0017162C  3B A4 41 E4 */	addi r29, r4, "zero__10Vector3<f>"@l
/* 801746F0 00171630  3B 00 00 00 */	li r24, 0
/* 801746F4 00171634  48 00 01 30 */	b .L_80174824
.L_801746F8:
/* 801746F8 00171638  38 60 00 78 */	li r3, 0x78
/* 801746FC 0017163C  4B EA F7 A9 */	bl __nw__FUl
/* 80174700 00171640  7C 7C 1B 79 */	or. r28, r3, r3
/* 80174704 00171644  41 82 00 B4 */	beq .L_801747B8
/* 80174708 00171648  7F 99 E3 78 */	mr r25, r28
/* 8017470C 0017164C  4B EA 88 C1 */	bl __ct__11JKRDisposerFv
/* 80174710 00171650  3C 60 80 4B */	lis r3, __vt__Q24Game8WayPoint@ha
/* 80174714 00171654  3B 79 00 18 */	addi r27, r25, 0x18
/* 80174718 00171658  38 03 23 FC */	addi r0, r3, __vt__Q24Game8WayPoint@l
/* 8017471C 0017165C  90 19 00 00 */	stw r0, 0(r25)
/* 80174720 00171660  7F 63 DB 78 */	mr r3, r27
/* 80174724 00171664  48 29 CC 6D */	bl __ct__5CNodeFv
/* 80174728 00171668  3C 80 80 4B */	lis r4, __vt__Q34Game8WayPoint8RoomList@ha
/* 8017472C 0017166C  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80174730 00171670  38 04 24 10 */	addi r0, r4, __vt__Q34Game8WayPoint8RoomList@l
/* 80174734 00171674  C0 02 A6 A0 */	lfs f0, lbl_80518A00@sda21(r2)
/* 80174738 00171678  90 1B 00 00 */	stw r0, 0(r27)
/* 8017473C 0017167C  38 80 FF FF */	li r4, -1
/* 80174740 00171680  38 00 00 00 */	li r0, 0
/* 80174744 00171684  B0 9B 00 18 */	sth r4, 0x18(r27)
/* 80174748 00171688  B0 99 00 3A */	sth r4, 0x3a(r25)
/* 8017474C 0017168C  B0 99 00 5E */	sth r4, 0x5e(r25)
/* 80174750 00171690  B0 99 00 3C */	sth r4, 0x3c(r25)
/* 80174754 00171694  B0 99 00 60 */	sth r4, 0x60(r25)
/* 80174758 00171698  B0 99 00 3E */	sth r4, 0x3e(r25)
/* 8017475C 0017169C  B0 99 00 62 */	sth r4, 0x62(r25)
/* 80174760 001716A0  B0 99 00 40 */	sth r4, 0x40(r25)
/* 80174764 001716A4  B0 99 00 64 */	sth r4, 0x64(r25)
/* 80174768 001716A8  B0 99 00 42 */	sth r4, 0x42(r25)
/* 8017476C 001716AC  B0 99 00 66 */	sth r4, 0x66(r25)
/* 80174770 001716B0  B0 99 00 44 */	sth r4, 0x44(r25)
/* 80174774 001716B4  B0 99 00 68 */	sth r4, 0x68(r25)
/* 80174778 001716B8  B0 99 00 46 */	sth r4, 0x46(r25)
/* 8017477C 001716BC  B0 99 00 6A */	sth r4, 0x6a(r25)
/* 80174780 001716C0  B0 99 00 48 */	sth r4, 0x48(r25)
/* 80174784 001716C4  B0 99 00 6C */	sth r4, 0x6c(r25)
/* 80174788 001716C8  C0 23 41 E4 */	lfs f1, "zero__10Vector3<f>"@l(r3)
/* 8017478C 001716CC  D0 39 00 4C */	stfs f1, 0x4c(r25)
/* 80174790 001716D0  C0 3D 00 04 */	lfs f1, 4(r29)
/* 80174794 001716D4  D0 39 00 50 */	stfs f1, 0x50(r25)
/* 80174798 001716D8  C0 3D 00 08 */	lfs f1, 8(r29)
/* 8017479C 001716DC  D0 39 00 54 */	stfs f1, 0x54(r25)
/* 801747A0 001716E0  D0 19 00 58 */	stfs f0, 0x58(r25)
/* 801747A4 001716E4  B0 99 00 36 */	sth r4, 0x36(r25)
/* 801747A8 001716E8  B0 19 00 38 */	sth r0, 0x38(r25)
/* 801747AC 001716EC  B0 19 00 5C */	sth r0, 0x5c(r25)
/* 801747B0 001716F0  98 19 00 6E */	stb r0, 0x6e(r25)
/* 801747B4 001716F4  98 19 00 34 */	stb r0, 0x34(r25)
.L_801747B8:
/* 801747B8 001716F8  7F E3 FB 78 */	mr r3, r31
/* 801747BC 001716FC  48 29 FF A9 */	bl readShort__6StreamFv
/* 801747C0 00171700  B0 7C 00 36 */	sth r3, 0x36(r28)
/* 801747C4 00171704  7F E3 FB 78 */	mr r3, r31
/* 801747C8 00171708  48 29 FF 9D */	bl readShort__6StreamFv
/* 801747CC 0017170C  B0 7C 00 38 */	sth r3, 0x38(r28)
/* 801747D0 00171710  7F 99 E3 78 */	mr r25, r28
/* 801747D4 00171714  3B 60 00 00 */	li r27, 0
/* 801747D8 00171718  48 00 00 18 */	b .L_801747F0
.L_801747DC:
/* 801747DC 0017171C  7F E3 FB 78 */	mr r3, r31
/* 801747E0 00171720  48 29 FF 85 */	bl readShort__6StreamFv
/* 801747E4 00171724  B0 79 00 3A */	sth r3, 0x3a(r25)
/* 801747E8 00171728  3B 39 00 02 */	addi r25, r25, 2
/* 801747EC 0017172C  3B 7B 00 01 */	addi r27, r27, 1
.L_801747F0:
/* 801747F0 00171730  A8 1C 00 38 */	lha r0, 0x38(r28)
/* 801747F4 00171734  7C 1B 00 00 */	cmpw r27, r0
/* 801747F8 00171738  41 80 FF E4 */	blt .L_801747DC
/* 801747FC 0017173C  7F E4 FB 78 */	mr r4, r31
/* 80174800 00171740  38 7C 00 4C */	addi r3, r28, 0x4c
/* 80174804 00171744  48 29 D1 8D */	bl "read__10Vector3<f>FR6Stream"
/* 80174808 00171748  7F E3 FB 78 */	mr r3, r31
/* 8017480C 0017174C  48 2A 05 A1 */	bl readFloat__6StreamFv
/* 80174810 00171750  D0 3C 00 58 */	stfs f1, 0x58(r28)
/* 80174814 00171754  7F C3 F3 78 */	mr r3, r30
/* 80174818 00171758  7F 84 E3 78 */	mr r4, r28
/* 8017481C 0017175C  48 00 00 2D */	bl addWayPoint__Q24Game14EditorRouteMgrFPQ24Game8WayPoint
/* 80174820 00171760  3B 18 00 01 */	addi r24, r24, 1
.L_80174824:
/* 80174824 00171764  7C 18 D0 00 */	cmpw r24, r26
/* 80174828 00171768  41 80 FE D0 */	blt .L_801746F8
/* 8017482C 0017176C  7F C3 F3 78 */	mr r3, r30
/* 80174830 00171770  4B FF E1 B5 */	bl makeInvertLinks__Q24Game8RouteMgrFv
/* 80174834 00171774  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 80174838 00171778  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8017483C 0017177C  7C 08 03 A6 */	mtlr r0
/* 80174840 00171780  38 21 00 30 */	addi r1, r1, 0x30
/* 80174844 00171784  4E 80 00 20 */	blr 
.endfn read__Q24Game14EditorRouteMgrFR6Stream

.fn addWayPoint__Q24Game14EditorRouteMgrFPQ24Game8WayPoint, global
/* 80174848 00171788  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017484C 0017178C  7C 08 02 A6 */	mflr r0
/* 80174850 00171790  90 01 00 24 */	stw r0, 0x24(r1)
/* 80174854 00171794  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80174858 00171798  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017485C 0017179C  7C 9E 23 78 */	mr r30, r4
/* 80174860 001717A0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80174864 001717A4  7C 7D 1B 78 */	mr r29, r3
/* 80174868 001717A8  38 60 00 1C */	li r3, 0x1c
/* 8017486C 001717AC  4B EA F6 39 */	bl __nw__FUl
/* 80174870 001717B0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80174874 001717B4  41 82 00 1C */	beq .L_80174890
/* 80174878 001717B8  48 29 CB 19 */	bl __ct__5CNodeFv
/* 8017487C 001717BC  3C 60 80 4B */	lis r3, __vt__Q34Game14EditorRouteMgr6WPNode@ha
/* 80174880 001717C0  38 00 00 00 */	li r0, 0
/* 80174884 001717C4  38 63 23 38 */	addi r3, r3, __vt__Q34Game14EditorRouteMgr6WPNode@l
/* 80174888 001717C8  90 7F 00 00 */	stw r3, 0(r31)
/* 8017488C 001717CC  90 1F 00 18 */	stw r0, 0x18(r31)
.L_80174890:
/* 80174890 001717D0  93 DF 00 18 */	stw r30, 0x18(r31)
/* 80174894 001717D4  7F E4 FB 78 */	mr r4, r31
/* 80174898 001717D8  38 7D 00 20 */	addi r3, r29, 0x20
/* 8017489C 001717DC  A0 1D 00 1C */	lhz r0, 0x1c(r29)
/* 801748A0 001717E0  80 BF 00 18 */	lwz r5, 0x18(r31)
/* 801748A4 001717E4  B0 05 00 36 */	sth r0, 0x36(r5)
/* 801748A8 001717E8  48 29 CB 61 */	bl add__5CNodeFP5CNode
/* 801748AC 001717EC  A0 7D 00 1C */	lhz r3, 0x1c(r29)
/* 801748B0 001717F0  38 03 00 01 */	addi r0, r3, 1
/* 801748B4 001717F4  B0 1D 00 1C */	sth r0, 0x1c(r29)
/* 801748B8 001717F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801748BC 001717FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801748C0 00171800  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801748C4 00171804  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801748C8 00171808  7C 08 03 A6 */	mtlr r0
/* 801748CC 0017180C  38 21 00 20 */	addi r1, r1, 0x20
/* 801748D0 00171810  4E 80 00 20 */	blr 
.endfn addWayPoint__Q24Game14EditorRouteMgrFPQ24Game8WayPoint

.fn delWayPoint__Q24Game14EditorRouteMgrFPQ24Game8WayPoint, global
/* 801748D4 00171814  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801748D8 00171818  7C 08 02 A6 */	mflr r0
/* 801748DC 0017181C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801748E0 00171820  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801748E4 00171824  93 C1 00 08 */	stw r30, 8(r1)
/* 801748E8 00171828  7C 7E 1B 78 */	mr r30, r3
/* 801748EC 0017182C  83 E3 00 30 */	lwz r31, 0x30(r3)
/* 801748F0 00171830  48 00 00 4C */	b .L_8017493C
.L_801748F4:
/* 801748F4 00171834  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 801748F8 00171838  7C 00 20 40 */	cmplw r0, r4
/* 801748FC 0017183C  40 82 00 3C */	bne .L_80174938
/* 80174900 00171840  28 04 00 00 */	cmplwi r4, 0
/* 80174904 00171844  41 82 00 1C */	beq .L_80174920
/* 80174908 00171848  7C 83 23 78 */	mr r3, r4
/* 8017490C 0017184C  38 80 00 01 */	li r4, 1
/* 80174910 00171850  81 83 00 00 */	lwz r12, 0(r3)
/* 80174914 00171854  81 8C 00 08 */	lwz r12, 8(r12)
/* 80174918 00171858  7D 89 03 A6 */	mtctr r12
/* 8017491C 0017185C  4E 80 04 21 */	bctrl 
.L_80174920:
/* 80174920 00171860  7F E3 FB 78 */	mr r3, r31
/* 80174924 00171864  48 29 CC AD */	bl del__5CNodeFv
/* 80174928 00171868  A0 7E 00 1C */	lhz r3, 0x1c(r30)
/* 8017492C 0017186C  38 03 FF FF */	addi r0, r3, -1
/* 80174930 00171870  B0 1E 00 1C */	sth r0, 0x1c(r30)
/* 80174934 00171874  48 00 00 10 */	b .L_80174944
.L_80174938:
/* 80174938 00171878  83 FF 00 04 */	lwz r31, 4(r31)
.L_8017493C:
/* 8017493C 0017187C  28 1F 00 00 */	cmplwi r31, 0
/* 80174940 00171880  40 82 FF B4 */	bne .L_801748F4
.L_80174944:
/* 80174944 00171884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80174948 00171888  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017494C 0017188C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80174950 00171890  7C 08 03 A6 */	mtlr r0
/* 80174954 00171894  38 21 00 10 */	addi r1, r1, 0x10
/* 80174958 00171898  4E 80 00 20 */	blr 
.endfn delWayPoint__Q24Game14EditorRouteMgrFPQ24Game8WayPoint

.fn getWayPoint__Q24Game14EditorRouteMgrFs, global
/* 8017495C 0017189C  80 A3 00 30 */	lwz r5, 0x30(r3)
/* 80174960 001718A0  7C 80 07 34 */	extsh r0, r4
/* 80174964 001718A4  48 00 00 20 */	b .L_80174984
.L_80174968:
/* 80174968 001718A8  80 65 00 18 */	lwz r3, 0x18(r5)
/* 8017496C 001718AC  28 03 00 00 */	cmplwi r3, 0
/* 80174970 001718B0  41 82 00 10 */	beq .L_80174980
/* 80174974 001718B4  A8 83 00 36 */	lha r4, 0x36(r3)
/* 80174978 001718B8  7C 04 00 00 */	cmpw r4, r0
/* 8017497C 001718BC  4D 82 00 20 */	beqlr 
.L_80174980:
/* 80174980 001718C0  80 A5 00 04 */	lwz r5, 4(r5)
.L_80174984:
/* 80174984 001718C4  28 05 00 00 */	cmplwi r5, 0
/* 80174988 001718C8  40 82 FF E0 */	bne .L_80174968
/* 8017498C 001718CC  38 60 00 00 */	li r3, 0
/* 80174990 001718D0  4E 80 00 20 */	blr 
.endfn getWayPoint__Q24Game14EditorRouteMgrFs

.fn get__Q24Game14EditorRouteMgrFPv, global
/* 80174994 001718D4  80 64 00 18 */	lwz r3, 0x18(r4)
/* 80174998 001718D8  4E 80 00 20 */	blr 
.endfn get__Q24Game14EditorRouteMgrFPv

.fn getNext__Q24Game14EditorRouteMgrFPv, global
/* 8017499C 001718DC  80 64 00 04 */	lwz r3, 4(r4)
/* 801749A0 001718E0  4E 80 00 20 */	blr 
.endfn getNext__Q24Game14EditorRouteMgrFPv

.fn getStart__Q24Game14EditorRouteMgrFv, global
/* 801749A4 001718E4  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801749A8 001718E8  4E 80 00 20 */	blr 
.endfn getStart__Q24Game14EditorRouteMgrFv

.fn getEnd__Q24Game14EditorRouteMgrFv, global
/* 801749AC 001718EC  38 60 00 00 */	li r3, 0
/* 801749B0 001718F0  4E 80 00 20 */	blr 
.endfn getEnd__Q24Game14EditorRouteMgrFv

.fn __dt__Q24Game14EditorRouteMgrFv, weak
/* 801749B4 001718F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801749B8 001718F8  7C 08 02 A6 */	mflr r0
/* 801749BC 001718FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801749C0 00171900  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801749C4 00171904  7C 9F 23 78 */	mr r31, r4
/* 801749C8 00171908  93 C1 00 08 */	stw r30, 8(r1)
/* 801749CC 0017190C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801749D0 00171910  41 82 00 80 */	beq .L_80174A50
/* 801749D4 00171914  3C 60 80 4B */	lis r3, __vt__Q24Game14EditorRouteMgr@ha
/* 801749D8 00171918  34 1E 00 20 */	addic. r0, r30, 0x20
/* 801749DC 0017191C  38 03 23 00 */	addi r0, r3, __vt__Q24Game14EditorRouteMgr@l
/* 801749E0 00171920  90 1E 00 00 */	stw r0, 0(r30)
/* 801749E4 00171924  41 82 00 1C */	beq .L_80174A00
/* 801749E8 00171928  3C 80 80 4B */	lis r4, __vt__Q34Game14EditorRouteMgr6WPNode@ha
/* 801749EC 0017192C  38 7E 00 20 */	addi r3, r30, 0x20
/* 801749F0 00171930  38 04 23 38 */	addi r0, r4, __vt__Q34Game14EditorRouteMgr6WPNode@l
/* 801749F4 00171934  38 80 00 00 */	li r4, 0
/* 801749F8 00171938  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801749FC 0017193C  48 29 CB 8D */	bl __dt__5CNodeFv
.L_80174A00:
/* 80174A00 00171940  28 1E 00 00 */	cmplwi r30, 0
/* 80174A04 00171944  41 82 00 3C */	beq .L_80174A40
/* 80174A08 00171948  3C 60 80 4B */	lis r3, __vt__Q24Game8RouteMgr@ha
/* 80174A0C 0017194C  38 03 23 98 */	addi r0, r3, __vt__Q24Game8RouteMgr@l
/* 80174A10 00171950  90 1E 00 00 */	stw r0, 0(r30)
/* 80174A14 00171954  41 82 00 2C */	beq .L_80174A40
/* 80174A18 00171958  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8WayPoint>"@ha
/* 80174A1C 0017195C  38 03 23 D0 */	addi r0, r3, "__vt__27Container<Q24Game8WayPoint>"@l
/* 80174A20 00171960  90 1E 00 00 */	stw r0, 0(r30)
/* 80174A24 00171964  41 82 00 1C */	beq .L_80174A40
/* 80174A28 00171968  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80174A2C 0017196C  7F C3 F3 78 */	mr r3, r30
/* 80174A30 00171970  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80174A34 00171974  38 80 00 00 */	li r4, 0
/* 80174A38 00171978  90 1E 00 00 */	stw r0, 0(r30)
/* 80174A3C 0017197C  48 29 CB 4D */	bl __dt__5CNodeFv
.L_80174A40:
/* 80174A40 00171980  7F E0 07 35 */	extsh. r0, r31
/* 80174A44 00171984  40 81 00 0C */	ble .L_80174A50
/* 80174A48 00171988  7F C3 F3 78 */	mr r3, r30
/* 80174A4C 0017198C  4B EA F6 69 */	bl __dl__FPv
.L_80174A50:
/* 80174A50 00171990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80174A54 00171994  7F C3 F3 78 */	mr r3, r30
/* 80174A58 00171998  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80174A5C 0017199C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80174A60 001719A0  7C 08 03 A6 */	mtlr r0
/* 80174A64 001719A4  38 21 00 10 */	addi r1, r1, 0x10
/* 80174A68 001719A8  4E 80 00 20 */	blr 
.endfn __dt__Q24Game14EditorRouteMgrFv

.fn "__ml__26Iterator<Q24Game8WayPoint>Fv", weak
/* 80174A6C 001719AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80174A70 001719B0  7C 08 02 A6 */	mflr r0
/* 80174A74 001719B4  7C 64 1B 78 */	mr r4, r3
/* 80174A78 001719B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80174A7C 001719BC  80 63 00 08 */	lwz r3, 8(r3)
/* 80174A80 001719C0  80 84 00 04 */	lwz r4, 4(r4)
/* 80174A84 001719C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80174A88 001719C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80174A8C 001719CC  7D 89 03 A6 */	mtctr r12
/* 80174A90 001719D0  4E 80 04 21 */	bctrl 
/* 80174A94 001719D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80174A98 001719D8  7C 08 03 A6 */	mtlr r0
/* 80174A9C 001719DC  38 21 00 10 */	addi r1, r1, 0x10
/* 80174AA0 001719E0  4E 80 00 20 */	blr 
.endfn "__ml__26Iterator<Q24Game8WayPoint>Fv"

.fn "next__26Iterator<Q24Game8WayPoint>Fv", weak
/* 80174AA4 001719E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80174AA8 001719E8  7C 08 02 A6 */	mflr r0
/* 80174AAC 001719EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80174AB0 001719F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80174AB4 001719F4  7C 7F 1B 78 */	mr r31, r3
/* 80174AB8 001719F8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80174ABC 001719FC  28 00 00 00 */	cmplwi r0, 0
/* 80174AC0 00171A00  40 82 00 24 */	bne .L_80174AE4
/* 80174AC4 00171A04  80 7F 00 08 */	lwz r3, 8(r31)
/* 80174AC8 00171A08  80 9F 00 04 */	lwz r4, 4(r31)
/* 80174ACC 00171A0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80174AD0 00171A10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80174AD4 00171A14  7D 89 03 A6 */	mtctr r12
/* 80174AD8 00171A18  4E 80 04 21 */	bctrl 
/* 80174ADC 00171A1C  90 7F 00 04 */	stw r3, 4(r31)
/* 80174AE0 00171A20  48 00 00 94 */	b .L_80174B74
.L_80174AE4:
/* 80174AE4 00171A24  80 7F 00 08 */	lwz r3, 8(r31)
/* 80174AE8 00171A28  80 9F 00 04 */	lwz r4, 4(r31)
/* 80174AEC 00171A2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80174AF0 00171A30  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80174AF4 00171A34  7D 89 03 A6 */	mtctr r12
/* 80174AF8 00171A38  4E 80 04 21 */	bctrl 
/* 80174AFC 00171A3C  90 7F 00 04 */	stw r3, 4(r31)
/* 80174B00 00171A40  48 00 00 58 */	b .L_80174B58
.L_80174B04:
/* 80174B04 00171A44  80 7F 00 08 */	lwz r3, 8(r31)
/* 80174B08 00171A48  80 9F 00 04 */	lwz r4, 4(r31)
/* 80174B0C 00171A4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80174B10 00171A50  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80174B14 00171A54  7D 89 03 A6 */	mtctr r12
/* 80174B18 00171A58  4E 80 04 21 */	bctrl 
/* 80174B1C 00171A5C  7C 64 1B 78 */	mr r4, r3
/* 80174B20 00171A60  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80174B24 00171A64  81 83 00 00 */	lwz r12, 0(r3)
/* 80174B28 00171A68  81 8C 00 08 */	lwz r12, 8(r12)
/* 80174B2C 00171A6C  7D 89 03 A6 */	mtctr r12
/* 80174B30 00171A70  4E 80 04 21 */	bctrl 
/* 80174B34 00171A74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80174B38 00171A78  40 82 00 3C */	bne .L_80174B74
/* 80174B3C 00171A7C  80 7F 00 08 */	lwz r3, 8(r31)
/* 80174B40 00171A80  80 9F 00 04 */	lwz r4, 4(r31)
/* 80174B44 00171A84  81 83 00 00 */	lwz r12, 0(r3)
/* 80174B48 00171A88  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80174B4C 00171A8C  7D 89 03 A6 */	mtctr r12
/* 80174B50 00171A90  4E 80 04 21 */	bctrl 
/* 80174B54 00171A94  90 7F 00 04 */	stw r3, 4(r31)
.L_80174B58:
/* 80174B58 00171A98  7F E3 FB 78 */	mr r3, r31
/* 80174B5C 00171A9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80174B60 00171AA0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80174B64 00171AA4  7D 89 03 A6 */	mtctr r12
/* 80174B68 00171AA8  4E 80 04 21 */	bctrl 
/* 80174B6C 00171AAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80174B70 00171AB0  41 82 FF 94 */	beq .L_80174B04
.L_80174B74:
/* 80174B74 00171AB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80174B78 00171AB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80174B7C 00171ABC  7C 08 03 A6 */	mtlr r0
/* 80174B80 00171AC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80174B84 00171AC4  4E 80 00 20 */	blr 
.endfn "next__26Iterator<Q24Game8WayPoint>Fv"

.fn "first__26Iterator<Q24Game8WayPoint>Fv", weak
/* 80174B88 00171AC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80174B8C 00171ACC  7C 08 02 A6 */	mflr r0
/* 80174B90 00171AD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80174B94 00171AD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80174B98 00171AD8  7C 7F 1B 78 */	mr r31, r3
/* 80174B9C 00171ADC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80174BA0 00171AE0  28 00 00 00 */	cmplwi r0, 0
/* 80174BA4 00171AE4  40 82 00 20 */	bne .L_80174BC4
/* 80174BA8 00171AE8  80 7F 00 08 */	lwz r3, 8(r31)
/* 80174BAC 00171AEC  81 83 00 00 */	lwz r12, 0(r3)
/* 80174BB0 00171AF0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80174BB4 00171AF4  7D 89 03 A6 */	mtctr r12
/* 80174BB8 00171AF8  4E 80 04 21 */	bctrl 
/* 80174BBC 00171AFC  90 7F 00 04 */	stw r3, 4(r31)
/* 80174BC0 00171B00  48 00 00 90 */	b .L_80174C50
.L_80174BC4:
/* 80174BC4 00171B04  80 7F 00 08 */	lwz r3, 8(r31)
/* 80174BC8 00171B08  81 83 00 00 */	lwz r12, 0(r3)
/* 80174BCC 00171B0C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80174BD0 00171B10  7D 89 03 A6 */	mtctr r12
/* 80174BD4 00171B14  4E 80 04 21 */	bctrl 
/* 80174BD8 00171B18  90 7F 00 04 */	stw r3, 4(r31)
/* 80174BDC 00171B1C  48 00 00 58 */	b .L_80174C34
.L_80174BE0:
/* 80174BE0 00171B20  80 7F 00 08 */	lwz r3, 8(r31)
/* 80174BE4 00171B24  80 9F 00 04 */	lwz r4, 4(r31)
/* 80174BE8 00171B28  81 83 00 00 */	lwz r12, 0(r3)
/* 80174BEC 00171B2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80174BF0 00171B30  7D 89 03 A6 */	mtctr r12
/* 80174BF4 00171B34  4E 80 04 21 */	bctrl 
/* 80174BF8 00171B38  7C 64 1B 78 */	mr r4, r3
/* 80174BFC 00171B3C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80174C00 00171B40  81 83 00 00 */	lwz r12, 0(r3)
/* 80174C04 00171B44  81 8C 00 08 */	lwz r12, 8(r12)
/* 80174C08 00171B48  7D 89 03 A6 */	mtctr r12
/* 80174C0C 00171B4C  4E 80 04 21 */	bctrl 
/* 80174C10 00171B50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80174C14 00171B54  40 82 00 3C */	bne .L_80174C50
/* 80174C18 00171B58  80 7F 00 08 */	lwz r3, 8(r31)
/* 80174C1C 00171B5C  80 9F 00 04 */	lwz r4, 4(r31)
/* 80174C20 00171B60  81 83 00 00 */	lwz r12, 0(r3)
/* 80174C24 00171B64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80174C28 00171B68  7D 89 03 A6 */	mtctr r12
/* 80174C2C 00171B6C  4E 80 04 21 */	bctrl 
/* 80174C30 00171B70  90 7F 00 04 */	stw r3, 4(r31)
.L_80174C34:
/* 80174C34 00171B74  7F E3 FB 78 */	mr r3, r31
/* 80174C38 00171B78  81 9F 00 00 */	lwz r12, 0(r31)
/* 80174C3C 00171B7C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80174C40 00171B80  7D 89 03 A6 */	mtctr r12
/* 80174C44 00171B84  4E 80 04 21 */	bctrl 
/* 80174C48 00171B88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80174C4C 00171B8C  41 82 FF 94 */	beq .L_80174BE0
.L_80174C50:
/* 80174C50 00171B90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80174C54 00171B94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80174C58 00171B98  7C 08 03 A6 */	mtlr r0
/* 80174C5C 00171B9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80174C60 00171BA0  4E 80 00 20 */	blr 
.endfn "first__26Iterator<Q24Game8WayPoint>Fv"

.fn "getObject__27Container<Q24Game8WayPoint>FPv", weak
/* 80174C64 00171BA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80174C68 00171BA8  7C 08 02 A6 */	mflr r0
/* 80174C6C 00171BAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80174C70 00171BB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80174C74 00171BB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80174C78 00171BB8  7D 89 03 A6 */	mtctr r12
/* 80174C7C 00171BBC  4E 80 04 21 */	bctrl 
/* 80174C80 00171BC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80174C84 00171BC4  7C 08 03 A6 */	mtlr r0
/* 80174C88 00171BC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80174C8C 00171BCC  4E 80 00 20 */	blr 
.endfn "getObject__27Container<Q24Game8WayPoint>FPv"

.fn "getAt__27Container<Q24Game8WayPoint>Fi", weak
/* 80174C90 00171BD0  38 60 00 00 */	li r3, 0
/* 80174C94 00171BD4  4E 80 00 20 */	blr 
.endfn "getAt__27Container<Q24Game8WayPoint>Fi"

.fn "getTo__27Container<Q24Game8WayPoint>Fv", weak
/* 80174C98 00171BD8  38 60 00 00 */	li r3, 0
/* 80174C9C 00171BDC  4E 80 00 20 */	blr 
.endfn "getTo__27Container<Q24Game8WayPoint>Fv"
