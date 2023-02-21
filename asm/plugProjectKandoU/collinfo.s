.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047C5A0, local
	.asciz "collinfo.cpp"
.endobj lbl_8047C5A0
.balign 4
.obj lbl_8047C5B0, local
	.asciz "platform %s not found !\n"
.endobj lbl_8047C5B0
.balign 4
.obj lbl_8047C5CC, local
	.asciz "P2Assert"
.endobj lbl_8047C5CC
.balign 4
.obj lbl_8047C5D8, local
	.asciz "collpart birth failed : single sphere\n"
.endobj lbl_8047C5D8
.balign 4
.obj lbl_8047C600, local
	.asciz "num=%d : random=%d\n"
.endobj lbl_8047C600
.balign 4
.obj lbl_8047C614, local
	.asciz "collpart birth failed !\n"
.endobj lbl_8047C614
.balign 4
.obj lbl_8047C630, local
	.asciz "CollPart"
.endobj lbl_8047C630
.balign 4
.obj lbl_8047C63C, local
	.asciz "# %d/%d\r\n"
.endobj lbl_8047C63C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__11AgeCollPart, global
	.4byte 0
	.4byte 0
	.4byte __dt__11AgeCollPartFv
	.4byte getChildCount__8CollPartFv
	.4byte isMouth__8CollPartFv
	.4byte draw__11AgeCollPartFR8Graphics
	.4byte constructor__8CollPartFv
	.4byte doAnimation__8CollPartFv
	.4byte doEntry__8CollPartFv
	.4byte doSetView__8CollPartFUl
	.4byte doViewCalc__8CollPartFv
	.4byte doSimulation__8CollPartFf
	.4byte doDirectDraw__8CollPartFR8Graphics
.endobj __vt__11AgeCollPart
.obj __vt__15CollPartFactory, weak
	.4byte 0
	.4byte 0
	.4byte __dt__15CollPartFactoryFv
	.4byte getChildCount__8CollPartFv
	.4byte isMouth__8CollPartFv
	.4byte draw__8CollPartFR8Graphics
	.4byte constructor__8CollPartFv
	.4byte doAnimation__8CollPartFv
	.4byte doEntry__8CollPartFv
	.4byte doSetView__8CollPartFUl
	.4byte doViewCalc__8CollPartFv
	.4byte doSimulation__8CollPartFf
	.4byte doDirectDraw__8CollPartFR8Graphics
.endobj __vt__15CollPartFactory
.obj __vt__13MouthCollPart, weak
	.4byte 0
	.4byte 0
	.4byte __dt__13MouthCollPartFv
	.4byte getChildCount__8CollPartFv
	.4byte isMouth__13MouthCollPartFv
	.4byte draw__8CollPartFR8Graphics
	.4byte constructor__8CollPartFv
	.4byte doAnimation__8CollPartFv
	.4byte doEntry__8CollPartFv
	.4byte doSetView__8CollPartFUl
	.4byte doViewCalc__8CollPartFv
	.4byte doSimulation__8CollPartFf
	.4byte doDirectDraw__8CollPartFR8Graphics
.endobj __vt__13MouthCollPart
.obj __vt__8CollPart, global
	.4byte 0
	.4byte 0
	.4byte __dt__8CollPartFv
	.4byte getChildCount__8CollPartFv
	.4byte isMouth__8CollPartFv
	.4byte draw__8CollPartFR8Graphics
	.4byte constructor__8CollPartFv
	.4byte doAnimation__8CollPartFv
	.4byte doEntry__8CollPartFv
	.4byte doSetView__8CollPartFUl
	.4byte doViewCalc__8CollPartFv
	.4byte doSimulation__8CollPartFf
	.4byte doDirectDraw__8CollPartFR8Graphics
.endobj __vt__8CollPart
.obj __vt__Q23Sys3OBB, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q23Sys3OBBFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q23Sys3OBB
.obj "__vt__12Container<i>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__12Container<i>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__12Container<i>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__12Container<i>Fi"
	.4byte "getTo__12Container<i>Fv"
.endobj "__vt__12Container<i>"
.obj "__vt__17ArrayContainer<i>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__17ArrayContainer<i>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__12Container<i>FPv"
	.4byte "getNext__17ArrayContainer<i>FPv"
	.4byte "getStart__17ArrayContainer<i>Fv"
	.4byte "getEnd__17ArrayContainer<i>Fv"
	.4byte "get__17ArrayContainer<i>FPv"
	.4byte "getAt__17ArrayContainer<i>Fi"
	.4byte "getTo__17ArrayContainer<i>Fv"
	.4byte "writeObject__17ArrayContainer<i>FR6StreamRi"
	.4byte "readObject__17ArrayContainer<i>FR6StreamRi"
	.4byte "write__17ArrayContainer<i>FR6Stream"
	.4byte "read__17ArrayContainer<i>FR6Stream"
	.4byte "alloc__17ArrayContainer<i>Fi"
	.4byte "addOne__17ArrayContainer<i>FRi"
	.4byte "setArray__17ArrayContainer<i>FPii"
.endobj "__vt__17ArrayContainer<i>"
.obj __vt__Q23Sys9IndexList, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q23Sys9IndexListFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__12Container<i>FPv"
	.4byte "getNext__17ArrayContainer<i>FPv"
	.4byte "getStart__17ArrayContainer<i>Fv"
	.4byte "getEnd__17ArrayContainer<i>Fv"
	.4byte "get__17ArrayContainer<i>FPv"
	.4byte "getAt__17ArrayContainer<i>Fi"
	.4byte "getTo__17ArrayContainer<i>Fv"
	.4byte writeObject__Q23Sys9IndexListFR6StreamRi
	.4byte readObject__Q23Sys9IndexListFR6StreamRi
	.4byte "write__17ArrayContainer<i>FR6Stream"
	.4byte "read__17ArrayContainer<i>FR6Stream"
	.4byte "alloc__17ArrayContainer<i>Fi"
	.4byte "addOne__17ArrayContainer<i>FRi"
	.4byte "setArray__17ArrayContainer<i>FPii"
.endobj __vt__Q23Sys9IndexList
.obj __vt__Q23Sys12TriIndexList, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q23Sys12TriIndexListFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__12Container<i>FPv"
	.4byte "getNext__17ArrayContainer<i>FPv"
	.4byte "getStart__17ArrayContainer<i>Fv"
	.4byte "getEnd__17ArrayContainer<i>Fv"
	.4byte "get__17ArrayContainer<i>FPv"
	.4byte "getAt__17ArrayContainer<i>Fi"
	.4byte "getTo__17ArrayContainer<i>Fv"
	.4byte writeObject__Q23Sys9IndexListFR6StreamRi
	.4byte readObject__Q23Sys9IndexListFR6StreamRi
	.4byte "write__17ArrayContainer<i>FR6Stream"
	.4byte "read__17ArrayContainer<i>FR6Stream"
	.4byte "alloc__17ArrayContainer<i>Fi"
	.4byte "addOne__17ArrayContainer<i>FRi"
	.4byte "setArray__17ArrayContainer<i>FPii"
.endobj __vt__Q23Sys12TriIndexList
.obj "__vt__28ArrayContainer<10Vector3<f>>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__28ArrayContainer<10Vector3<f>>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__23Container<10Vector3<f>>FPv"
	.4byte "getNext__28ArrayContainer<10Vector3<f>>FPv"
	.4byte "getStart__28ArrayContainer<10Vector3<f>>Fv"
	.4byte "getEnd__28ArrayContainer<10Vector3<f>>Fv"
	.4byte "get__28ArrayContainer<10Vector3<f>>FPv"
	.4byte "getAt__28ArrayContainer<10Vector3<f>>Fi"
	.4byte "getTo__28ArrayContainer<10Vector3<f>>Fv"
	.4byte "writeObject__28ArrayContainer<10Vector3<f>>FR6StreamR10Vector3<f>"
	.4byte "readObject__28ArrayContainer<10Vector3<f>>FR6StreamR10Vector3<f>"
	.4byte "write__28ArrayContainer<10Vector3<f>>FR6Stream"
	.4byte "read__28ArrayContainer<10Vector3<f>>FR6Stream"
	.4byte "alloc__28ArrayContainer<10Vector3<f>>Fi"
	.4byte "addOne__28ArrayContainer<10Vector3<f>>FR10Vector3<f>"
	.4byte "setArray__28ArrayContainer<10Vector3<f>>FP10Vector3<f>i"
.endobj "__vt__28ArrayContainer<10Vector3<f>>"
.obj "__vt__23Container<10Vector3<f>>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__23Container<10Vector3<f>>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__23Container<10Vector3<f>>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__23Container<10Vector3<f>>Fi"
	.4byte "getTo__23Container<10Vector3<f>>Fv"
.endobj "__vt__23Container<10Vector3<f>>"
.obj __vt__8Platform, weak
	.4byte 0
	.4byte 0
	.4byte __dt__8PlatformFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__8Platform

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mDebug__8CollTree, global
	.skip 1
.endobj mDebug__8CollTree

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80518208, local
	.float 32768.0
.endobj lbl_80518208
.obj lbl_8051820C, local
	.float -32768.0
.endobj lbl_8051820C
.obj lbl_80518210, local
	.float 0.0
.endobj lbl_80518210
.obj lbl_80518214, local
	.float 128000.0
.endobj lbl_80518214
.balign 8
.obj lbl_80518218, local
	.8byte 0x4330000080000000
.endobj lbl_80518218
.obj lbl_80518220, local
	.float 0.001
.endobj lbl_80518220
.obj lbl_80518224, local
	.float 1.0
.endobj lbl_80518224
.obj lbl_80518228, local
	.float 0.3
.endobj lbl_80518228
.obj lbl_8051822C, local
	.float 0.1
.endobj lbl_8051822C
.balign 4
.obj lbl_80518230, local
	.asciz "\r\n"
.endobj lbl_80518230

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__8PlatformFv, global
/* 801336A8 001305E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801336AC 001305EC  7C 08 02 A6 */	mflr r0
/* 801336B0 001305F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801336B4 001305F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801336B8 001305F8  7C 7F 1B 78 */	mr r31, r3
/* 801336BC 001305FC  48 2D DC D5 */	bl __ct__5CNodeFv
/* 801336C0 00130600  3C 60 80 4B */	lis r3, __vt__8Platform@ha
/* 801336C4 00130604  38 00 00 00 */	li r0, 0
/* 801336C8 00130608  38 83 00 58 */	addi r4, r3, __vt__8Platform@l
/* 801336CC 0013060C  7F E3 FB 78 */	mr r3, r31
/* 801336D0 00130610  90 9F 00 00 */	stw r4, 0(r31)
/* 801336D4 00130614  90 1F 00 18 */	stw r0, 0x18(r31)
/* 801336D8 00130618  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801336DC 0013061C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801336E0 00130620  7C 08 03 A6 */	mtlr r0
/* 801336E4 00130624  38 21 00 10 */	addi r1, r1, 0x10
/* 801336E8 00130628  4E 80 00 20 */	blr 
.endfn __ct__8PlatformFv

.fn getTriDivider__8PlatformFv, global
/* 801336EC 0013062C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801336F0 00130630  4E 80 00 20 */	blr 
.endfn getTriDivider__8PlatformFv

.fn setMapCodeAll__8PlatformFRQ27MapCode4Code, global
/* 801336F4 00130634  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801336F8 00130638  39 00 00 00 */	li r8, 0
/* 801336FC 0013063C  38 C0 00 00 */	li r6, 0
/* 80133700 00130640  80 E3 00 1C */	lwz r7, 0x1c(r3)
/* 80133704 00130644  48 00 00 1C */	b .L_80133720
.L_80133708:
/* 80133708 00130648  88 A4 00 00 */	lbz r5, 0(r4)
/* 8013370C 0013064C  38 06 00 5C */	addi r0, r6, 0x5c
/* 80133710 00130650  80 67 00 24 */	lwz r3, 0x24(r7)
/* 80133714 00130654  38 C6 00 60 */	addi r6, r6, 0x60
/* 80133718 00130658  39 08 00 01 */	addi r8, r8, 1
/* 8013371C 0013065C  7C A3 01 AE */	stbx r5, r3, r0
.L_80133720:
/* 80133720 00130660  80 07 00 1C */	lwz r0, 0x1c(r7)
/* 80133724 00130664  7C 08 00 00 */	cmpw r8, r0
/* 80133728 00130668  41 80 FF E0 */	blt .L_80133708
/* 8013372C 0013066C  4E 80 00 20 */	blr 
.endfn setMapCodeAll__8PlatformFRQ27MapCode4Code

.fn clone__8PlatformFR7Matrixf, global
/* 80133730 00130670  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80133734 00130674  7C 08 02 A6 */	mflr r0
/* 80133738 00130678  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013373C 0013067C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80133740 00130680  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80133744 00130684  7C 9E 23 78 */	mr r30, r4
/* 80133748 00130688  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013374C 0013068C  7C 7D 1B 78 */	mr r29, r3
/* 80133750 00130690  38 60 00 1C */	li r3, 0x1c
/* 80133754 00130694  4B EF 07 51 */	bl __nw__FUl
/* 80133758 00130698  7C 7F 1B 79 */	or. r31, r3, r3
/* 8013375C 0013069C  41 82 00 1C */	beq .L_80133778
/* 80133760 001306A0  48 2D DC 31 */	bl __ct__5CNodeFv
/* 80133764 001306A4  3C 60 80 4B */	lis r3, __vt__8Platform@ha
/* 80133768 001306A8  38 00 00 00 */	li r0, 0
/* 8013376C 001306AC  38 63 00 58 */	addi r3, r3, __vt__8Platform@l
/* 80133770 001306B0  90 7F 00 00 */	stw r3, 0(r31)
/* 80133774 001306B4  90 1F 00 18 */	stw r0, 0x18(r31)
.L_80133778:
/* 80133778 001306B8  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 8013377C 001306BC  7F C4 F3 78 */	mr r4, r30
/* 80133780 001306C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80133784 001306C4  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80133788 001306C8  7D 89 03 A6 */	mtctr r12
/* 8013378C 001306CC  4E 80 04 21 */	bctrl 
/* 80133790 001306D0  90 7F 00 18 */	stw r3, 0x18(r31)
/* 80133794 001306D4  7F E3 FB 78 */	mr r3, r31
/* 80133798 001306D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013379C 001306DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801337A0 001306E0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801337A4 001306E4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801337A8 001306E8  7C 08 03 A6 */	mtlr r0
/* 801337AC 001306EC  38 21 00 20 */	addi r1, r1, 0x20
/* 801337B0 001306F0  4E 80 00 20 */	blr 
.endfn clone__8PlatformFR7Matrixf

.fn load__8PlatformFP13JKRFileLoaderPc, global
/* 801337B4 001306F4  94 21 FB D0 */	stwu r1, -0x430(r1)
/* 801337B8 001306F8  7C 08 02 A6 */	mflr r0
/* 801337BC 001306FC  90 01 04 34 */	stw r0, 0x434(r1)
/* 801337C0 00130700  93 E1 04 2C */	stw r31, 0x42c(r1)
/* 801337C4 00130704  7C BF 2B 78 */	mr r31, r5
/* 801337C8 00130708  93 C1 04 28 */	stw r30, 0x428(r1)
/* 801337CC 0013070C  7C 7E 1B 78 */	mr r30, r3
/* 801337D0 00130710  7F E3 FB 78 */	mr r3, r31
/* 801337D4 00130714  4B EE F8 45 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 801337D8 00130718  28 03 00 00 */	cmplwi r3, 0
/* 801337DC 0013071C  40 82 00 28 */	bne .L_80133804
/* 801337E0 00130720  3C 60 80 48 */	lis r3, lbl_8047C5A0@ha
/* 801337E4 00130724  3C 80 80 48 */	lis r4, lbl_8047C5B0@ha
/* 801337E8 00130728  38 A4 C5 B0 */	addi r5, r4, lbl_8047C5B0@l
/* 801337EC 0013072C  7F E6 FB 78 */	mr r6, r31
/* 801337F0 00130730  38 63 C5 A0 */	addi r3, r3, lbl_8047C5A0@l
/* 801337F4 00130734  38 80 00 EC */	li r4, 0xec
/* 801337F8 00130738  4C C6 31 82 */	crclr 6
/* 801337FC 0013073C  4B EF 6E 45 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80133800 00130740  48 00 00 48 */	b .L_80133848
.L_80133804:
/* 80133804 00130744  7C 64 1B 78 */	mr r4, r3
/* 80133808 00130748  38 61 00 08 */	addi r3, r1, 8
/* 8013380C 0013074C  38 A0 FF FF */	li r5, -1
/* 80133810 00130750  48 2E 20 E9 */	bl __ct__9RamStreamFPvi
/* 80133814 00130754  38 60 01 30 */	li r3, 0x130
/* 80133818 00130758  4B EF 06 8D */	bl __nw__FUl
/* 8013381C 0013075C  7C 60 1B 79 */	or. r0, r3, r3
/* 80133820 00130760  41 82 00 0C */	beq .L_8013382C
/* 80133824 00130764  48 2E A8 31 */	bl __ct__Q23Sys7OBBTreeFv
/* 80133828 00130768  7C 60 1B 78 */	mr r0, r3
.L_8013382C:
/* 8013382C 0013076C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80133830 00130770  38 81 00 08 */	addi r4, r1, 8
/* 80133834 00130774  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 80133838 00130778  81 83 00 00 */	lwz r12, 0(r3)
/* 8013383C 0013077C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80133840 00130780  7D 89 03 A6 */	mtctr r12
/* 80133844 00130784  4E 80 04 21 */	bctrl 
.L_80133848:
/* 80133848 00130788  80 01 04 34 */	lwz r0, 0x434(r1)
/* 8013384C 0013078C  83 E1 04 2C */	lwz r31, 0x42c(r1)
/* 80133850 00130790  83 C1 04 28 */	lwz r30, 0x428(r1)
/* 80133854 00130794  7C 08 03 A6 */	mtlr r0
/* 80133858 00130798  38 21 04 30 */	addi r1, r1, 0x430
/* 8013385C 0013079C  4E 80 00 20 */	blr 
.endfn load__8PlatformFP13JKRFileLoaderPc

.fn __ct__12PlatAttacherFv, global
/* 80133860 001307A0  38 00 00 00 */	li r0, 0
/* 80133864 001307A4  90 03 00 00 */	stw r0, 0(r3)
/* 80133868 001307A8  90 03 00 04 */	stw r0, 4(r3)
/* 8013386C 001307AC  90 03 00 08 */	stw r0, 8(r3)
/* 80133870 001307B0  4E 80 00 20 */	blr 
.endfn __ct__12PlatAttacherFv

.fn setMapCodeAll__12PlatAttacherFRQ27MapCode4Code, global
/* 80133874 001307B4  39 60 00 00 */	li r11, 0
/* 80133878 001307B8  39 40 00 00 */	li r10, 0
/* 8013387C 001307BC  48 00 00 4C */	b .L_801338C8
.L_80133880:
/* 80133880 001307C0  80 A3 00 08 */	lwz r5, 8(r3)
/* 80133884 001307C4  38 0A 00 18 */	addi r0, r10, 0x18
/* 80133888 001307C8  38 E0 00 00 */	li r7, 0
/* 8013388C 001307CC  7C A5 00 2E */	lwzx r5, r5, r0
/* 80133890 001307D0  7C E9 3B 78 */	mr r9, r7
/* 80133894 001307D4  81 05 00 1C */	lwz r8, 0x1c(r5)
/* 80133898 001307D8  48 00 00 1C */	b .L_801338B4
.L_8013389C:
/* 8013389C 001307DC  88 C4 00 00 */	lbz r6, 0(r4)
/* 801338A0 001307E0  38 09 00 5C */	addi r0, r9, 0x5c
/* 801338A4 001307E4  80 A8 00 24 */	lwz r5, 0x24(r8)
/* 801338A8 001307E8  39 29 00 60 */	addi r9, r9, 0x60
/* 801338AC 001307EC  38 E7 00 01 */	addi r7, r7, 1
/* 801338B0 001307F0  7C C5 01 AE */	stbx r6, r5, r0
.L_801338B4:
/* 801338B4 001307F4  80 08 00 1C */	lwz r0, 0x1c(r8)
/* 801338B8 001307F8  7C 07 00 00 */	cmpw r7, r0
/* 801338BC 001307FC  41 80 FF E0 */	blt .L_8013389C
/* 801338C0 00130800  39 4A 00 1C */	addi r10, r10, 0x1c
/* 801338C4 00130804  39 6B 00 01 */	addi r11, r11, 1
.L_801338C8:
/* 801338C8 00130808  80 03 00 00 */	lwz r0, 0(r3)
/* 801338CC 0013080C  7C 0B 00 00 */	cmpw r11, r0
/* 801338D0 00130810  41 80 FF B0 */	blt .L_80133880
/* 801338D4 00130814  4E 80 00 20 */	blr 
.endfn setMapCodeAll__12PlatAttacherFRQ27MapCode4Code

.fn __dt__8PlatformFv, weak
/* 801338D8 00130818  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801338DC 0013081C  7C 08 02 A6 */	mflr r0
/* 801338E0 00130820  90 01 00 14 */	stw r0, 0x14(r1)
/* 801338E4 00130824  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801338E8 00130828  7C 9F 23 78 */	mr r31, r4
/* 801338EC 0013082C  93 C1 00 08 */	stw r30, 8(r1)
/* 801338F0 00130830  7C 7E 1B 79 */	or. r30, r3, r3
/* 801338F4 00130834  41 82 00 28 */	beq .L_8013391C
/* 801338F8 00130838  3C A0 80 4B */	lis r5, __vt__8Platform@ha
/* 801338FC 0013083C  38 80 00 00 */	li r4, 0
/* 80133900 00130840  38 05 00 58 */	addi r0, r5, __vt__8Platform@l
/* 80133904 00130844  90 1E 00 00 */	stw r0, 0(r30)
/* 80133908 00130848  48 2D DC 81 */	bl __dt__5CNodeFv
/* 8013390C 0013084C  7F E0 07 35 */	extsh. r0, r31
/* 80133910 00130850  40 81 00 0C */	ble .L_8013391C
/* 80133914 00130854  7F C3 F3 78 */	mr r3, r30
/* 80133918 00130858  4B EF 07 9D */	bl __dl__FPv
.L_8013391C:
/* 8013391C 0013085C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133920 00130860  7F C3 F3 78 */	mr r3, r30
/* 80133924 00130864  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133928 00130868  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013392C 0013086C  7C 08 03 A6 */	mtlr r0
/* 80133930 00130870  38 21 00 10 */	addi r1, r1, 0x10
/* 80133934 00130874  4E 80 00 20 */	blr 
.endfn __dt__8PlatformFv

.fn read__12PlatAttacherFR6Stream, global
/* 80133938 00130878  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013393C 0013087C  7C 08 02 A6 */	mflr r0
/* 80133940 00130880  90 01 00 24 */	stw r0, 0x24(r1)
/* 80133944 00130884  BF 41 00 08 */	stmw r26, 8(r1)
/* 80133948 00130888  7C 9F 23 78 */	mr r31, r4
/* 8013394C 0013088C  7C 7E 1B 78 */	mr r30, r3
/* 80133950 00130890  7F E3 FB 78 */	mr r3, r31
/* 80133954 00130894  48 2E 11 3D */	bl readInt__6StreamFv
/* 80133958 00130898  90 7E 00 00 */	stw r3, 0(r30)
/* 8013395C 0013089C  80 1E 00 00 */	lwz r0, 0(r30)
/* 80133960 001308A0  54 03 08 3C */	slwi r3, r0, 1
/* 80133964 001308A4  4B EF 06 49 */	bl __nwa__FUl
/* 80133968 001308A8  90 7E 00 04 */	stw r3, 4(r30)
/* 8013396C 001308AC  3B A0 00 00 */	li r29, 0
/* 80133970 001308B0  3B 80 00 00 */	li r28, 0
/* 80133974 001308B4  48 00 00 1C */	b .L_80133990
.L_80133978:
/* 80133978 001308B8  7F E3 FB 78 */	mr r3, r31
/* 8013397C 001308BC  48 2E 0D E9 */	bl readShort__6StreamFv
/* 80133980 001308C0  80 9E 00 04 */	lwz r4, 4(r30)
/* 80133984 001308C4  3B BD 00 01 */	addi r29, r29, 1
/* 80133988 001308C8  7C 64 E3 2E */	sthx r3, r4, r28
/* 8013398C 001308CC  3B 9C 00 02 */	addi r28, r28, 2
.L_80133990:
/* 80133990 001308D0  83 7E 00 00 */	lwz r27, 0(r30)
/* 80133994 001308D4  7C 1D D8 00 */	cmpw r29, r27
/* 80133998 001308D8  41 80 FF E0 */	blt .L_80133978
/* 8013399C 001308DC  1C 7B 00 1C */	mulli r3, r27, 0x1c
/* 801339A0 001308E0  38 63 00 10 */	addi r3, r3, 0x10
/* 801339A4 001308E4  4B EF 06 09 */	bl __nwa__FUl
/* 801339A8 001308E8  3C 80 80 13 */	lis r4, __ct__8PlatformFv@ha
/* 801339AC 001308EC  3C A0 80 13 */	lis r5, __dt__8PlatformFv@ha
/* 801339B0 001308F0  38 84 36 A8 */	addi r4, r4, __ct__8PlatformFv@l
/* 801339B4 001308F4  7F 67 DB 78 */	mr r7, r27
/* 801339B8 001308F8  38 A5 38 D8 */	addi r5, r5, __dt__8PlatformFv@l
/* 801339BC 001308FC  38 C0 00 1C */	li r6, 0x1c
/* 801339C0 00130900  4B F8 E0 31 */	bl __construct_new_array
/* 801339C4 00130904  90 7E 00 08 */	stw r3, 8(r30)
/* 801339C8 00130908  38 60 00 50 */	li r3, 0x50
/* 801339CC 0013090C  4B EF 04 D9 */	bl __nw__FUl
/* 801339D0 00130910  7C 7D 1B 79 */	or. r29, r3, r3
/* 801339D4 00130914  41 82 00 74 */	beq .L_80133A48
/* 801339D8 00130918  48 2D D9 B9 */	bl __ct__5CNodeFv
/* 801339DC 0013091C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801339E0 00130920  3C 60 80 4B */	lis r3, "__vt__23Container<10Vector3<f>>"@ha
/* 801339E4 00130924  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801339E8 00130928  3C 80 80 4B */	lis r4, "__vt__28ArrayContainer<10Vector3<f>>"@ha
/* 801339EC 0013092C  90 1D 00 00 */	stw r0, 0(r29)
/* 801339F0 00130930  38 03 00 2C */	addi r0, r3, "__vt__23Container<10Vector3<f>>"@l
/* 801339F4 00130934  3C 60 80 4F */	lis r3, __vt__Q23Sys11VertexTable@ha
/* 801339F8 00130938  38 C0 00 00 */	li r6, 0
/* 801339FC 0013093C  90 1D 00 00 */	stw r0, 0(r29)
/* 80133A00 00130940  38 A4 FF E4 */	addi r5, r4, "__vt__28ArrayContainer<10Vector3<f>>"@l
/* 80133A04 00130944  38 80 00 01 */	li r4, 1
/* 80133A08 00130948  38 03 B5 C0 */	addi r0, r3, __vt__Q23Sys11VertexTable@l
/* 80133A0C 0013094C  98 DD 00 18 */	stb r6, 0x18(r29)
/* 80133A10 00130950  C0 22 9E A8 */	lfs f1, lbl_80518208@sda21(r2)
/* 80133A14 00130954  90 BD 00 00 */	stw r5, 0(r29)
/* 80133A18 00130958  C0 02 9E AC */	lfs f0, lbl_8051820C@sda21(r2)
/* 80133A1C 0013095C  98 9D 00 18 */	stb r4, 0x18(r29)
/* 80133A20 00130960  90 DD 00 20 */	stw r6, 0x20(r29)
/* 80133A24 00130964  90 DD 00 1C */	stw r6, 0x1c(r29)
/* 80133A28 00130968  90 DD 00 24 */	stw r6, 0x24(r29)
/* 80133A2C 0013096C  90 1D 00 00 */	stw r0, 0(r29)
/* 80133A30 00130970  D0 3D 00 28 */	stfs f1, 0x28(r29)
/* 80133A34 00130974  D0 3D 00 2C */	stfs f1, 0x2c(r29)
/* 80133A38 00130978  D0 3D 00 30 */	stfs f1, 0x30(r29)
/* 80133A3C 0013097C  D0 1D 00 34 */	stfs f0, 0x34(r29)
/* 80133A40 00130980  D0 1D 00 38 */	stfs f0, 0x38(r29)
/* 80133A44 00130984  D0 1D 00 3C */	stfs f0, 0x3c(r29)
.L_80133A48:
/* 80133A48 00130988  7F A3 EB 78 */	mr r3, r29
/* 80133A4C 0013098C  7F E4 FB 78 */	mr r4, r31
/* 80133A50 00130990  81 9D 00 00 */	lwz r12, 0(r29)
/* 80133A54 00130994  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80133A58 00130998  7D 89 03 A6 */	mtctr r12
/* 80133A5C 0013099C  4E 80 04 21 */	bctrl 
/* 80133A60 001309A0  3B 40 00 00 */	li r26, 0
/* 80133A64 001309A4  3B 60 00 00 */	li r27, 0
/* 80133A68 001309A8  48 00 00 40 */	b .L_80133AA8
.L_80133A6C:
/* 80133A6C 001309AC  38 60 01 30 */	li r3, 0x130
/* 80133A70 001309B0  4B EF 04 35 */	bl __nw__FUl
/* 80133A74 001309B4  7C 7C 1B 79 */	or. r28, r3, r3
/* 80133A78 001309B8  41 82 00 0C */	beq .L_80133A84
/* 80133A7C 001309BC  48 2E A5 D9 */	bl __ct__Q23Sys7OBBTreeFv
/* 80133A80 001309C0  7C 7C 1B 78 */	mr r28, r3
.L_80133A84:
/* 80133A84 001309C4  7F 83 E3 78 */	mr r3, r28
/* 80133A88 001309C8  7F E4 FB 78 */	mr r4, r31
/* 80133A8C 001309CC  7F A5 EB 78 */	mr r5, r29
/* 80133A90 001309D0  48 2E AF 09 */	bl readWithoutVerts__Q23Sys7OBBTreeFR6StreamRQ23Sys11VertexTable
/* 80133A94 001309D4  80 7E 00 08 */	lwz r3, 8(r30)
/* 80133A98 001309D8  38 1B 00 18 */	addi r0, r27, 0x18
/* 80133A9C 001309DC  3B 7B 00 1C */	addi r27, r27, 0x1c
/* 80133AA0 001309E0  3B 5A 00 01 */	addi r26, r26, 1
/* 80133AA4 001309E4  7F 83 01 2E */	stwx r28, r3, r0
.L_80133AA8:
/* 80133AA8 001309E8  80 1E 00 00 */	lwz r0, 0(r30)
/* 80133AAC 001309EC  7C 1A 00 00 */	cmpw r26, r0
/* 80133AB0 001309F0  41 80 FF BC */	blt .L_80133A6C
/* 80133AB4 001309F4  BB 41 00 08 */	lmw r26, 8(r1)
/* 80133AB8 001309F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80133ABC 001309FC  7C 08 03 A6 */	mtlr r0
/* 80133AC0 00130A00  38 21 00 20 */	addi r1, r1, 0x20
/* 80133AC4 00130A04  4E 80 00 20 */	blr 
.endfn read__12PlatAttacherFR6Stream

.fn "read__28ArrayContainer<10Vector3<f>>FR6Stream", weak
/* 80133AC8 00130A08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80133ACC 00130A0C  7C 08 02 A6 */	mflr r0
/* 80133AD0 00130A10  90 01 00 24 */	stw r0, 0x24(r1)
/* 80133AD4 00130A14  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80133AD8 00130A18  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80133ADC 00130A1C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80133AE0 00130A20  7C 9D 23 78 */	mr r29, r4
/* 80133AE4 00130A24  93 81 00 10 */	stw r28, 0x10(r1)
/* 80133AE8 00130A28  7C 7C 1B 78 */	mr r28, r3
/* 80133AEC 00130A2C  7F A3 EB 78 */	mr r3, r29
/* 80133AF0 00130A30  48 2E 0F A1 */	bl readInt__6StreamFv
/* 80133AF4 00130A34  90 7C 00 20 */	stw r3, 0x20(r28)
/* 80133AF8 00130A38  7F 83 E3 78 */	mr r3, r28
/* 80133AFC 00130A3C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80133B00 00130A40  80 9C 00 20 */	lwz r4, 0x20(r28)
/* 80133B04 00130A44  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80133B08 00130A48  7D 89 03 A6 */	mtctr r12
/* 80133B0C 00130A4C  4E 80 04 21 */	bctrl 
/* 80133B10 00130A50  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 80133B14 00130A54  3B C0 00 00 */	li r30, 0
/* 80133B18 00130A58  3B E0 00 00 */	li r31, 0
/* 80133B1C 00130A5C  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 80133B20 00130A60  48 00 00 2C */	b .L_80133B4C
.L_80133B24:
/* 80133B24 00130A64  7F 83 E3 78 */	mr r3, r28
/* 80133B28 00130A68  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 80133B2C 00130A6C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80133B30 00130A70  7F A4 EB 78 */	mr r4, r29
/* 80133B34 00130A74  7C A0 FA 14 */	add r5, r0, r31
/* 80133B38 00130A78  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80133B3C 00130A7C  7D 89 03 A6 */	mtctr r12
/* 80133B40 00130A80  4E 80 04 21 */	bctrl 
/* 80133B44 00130A84  3B FF 00 0C */	addi r31, r31, 0xc
/* 80133B48 00130A88  3B DE 00 01 */	addi r30, r30, 1
.L_80133B4C:
/* 80133B4C 00130A8C  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 80133B50 00130A90  7C 1E 00 00 */	cmpw r30, r0
/* 80133B54 00130A94  41 80 FF D0 */	blt .L_80133B24
/* 80133B58 00130A98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80133B5C 00130A9C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80133B60 00130AA0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80133B64 00130AA4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80133B68 00130AA8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80133B6C 00130AAC  7C 08 03 A6 */	mtlr r0
/* 80133B70 00130AB0  38 21 00 20 */	addi r1, r1, 0x20
/* 80133B74 00130AB4  4E 80 00 20 */	blr 
.endfn "read__28ArrayContainer<10Vector3<f>>FR6Stream"

.fn "readObject__28ArrayContainer<10Vector3<f>>FR6StreamR10Vector3<f>", weak
/* 80133B78 00130AB8  4E 80 00 20 */	blr 
.endfn "readObject__28ArrayContainer<10Vector3<f>>FR6StreamR10Vector3<f>"

.fn "alloc__28ArrayContainer<10Vector3<f>>Fi", weak
/* 80133B7C 00130ABC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133B80 00130AC0  7C 08 02 A6 */	mflr r0
/* 80133B84 00130AC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133B88 00130AC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133B8C 00130ACC  7C 9F 23 78 */	mr r31, r4
/* 80133B90 00130AD0  93 C1 00 08 */	stw r30, 8(r1)
/* 80133B94 00130AD4  7C 7E 1B 78 */	mr r30, r3
/* 80133B98 00130AD8  1C 7F 00 0C */	mulli r3, r31, 0xc
/* 80133B9C 00130ADC  38 63 00 10 */	addi r3, r3, 0x10
/* 80133BA0 00130AE0  4B EF 04 0D */	bl __nwa__FUl
/* 80133BA4 00130AE4  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 80133BA8 00130AE8  7F E7 FB 78 */	mr r7, r31
/* 80133BAC 00130AEC  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 80133BB0 00130AF0  38 A0 00 00 */	li r5, 0
/* 80133BB4 00130AF4  38 C0 00 0C */	li r6, 0xc
/* 80133BB8 00130AF8  4B F8 DE 39 */	bl __construct_new_array
/* 80133BBC 00130AFC  90 7E 00 24 */	stw r3, 0x24(r30)
/* 80133BC0 00130B00  38 00 00 00 */	li r0, 0
/* 80133BC4 00130B04  93 FE 00 20 */	stw r31, 0x20(r30)
/* 80133BC8 00130B08  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80133BCC 00130B0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133BD0 00130B10  83 C1 00 08 */	lwz r30, 8(r1)
/* 80133BD4 00130B14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133BD8 00130B18  7C 08 03 A6 */	mtlr r0
/* 80133BDC 00130B1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80133BE0 00130B20  4E 80 00 20 */	blr 
.endfn "alloc__28ArrayContainer<10Vector3<f>>Fi"

.fn "__dt__28ArrayContainer<10Vector3<f>>Fv", weak
/* 80133BE4 00130B24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133BE8 00130B28  7C 08 02 A6 */	mflr r0
/* 80133BEC 00130B2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133BF0 00130B30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133BF4 00130B34  7C 9F 23 78 */	mr r31, r4
/* 80133BF8 00130B38  93 C1 00 08 */	stw r30, 8(r1)
/* 80133BFC 00130B3C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80133C00 00130B40  41 82 00 48 */	beq .L_80133C48
/* 80133C04 00130B44  3C 80 80 4B */	lis r4, "__vt__28ArrayContainer<10Vector3<f>>"@ha
/* 80133C08 00130B48  38 04 FF E4 */	addi r0, r4, "__vt__28ArrayContainer<10Vector3<f>>"@l
/* 80133C0C 00130B4C  90 1E 00 00 */	stw r0, 0(r30)
/* 80133C10 00130B50  41 82 00 28 */	beq .L_80133C38
/* 80133C14 00130B54  3C 80 80 4B */	lis r4, "__vt__23Container<10Vector3<f>>"@ha
/* 80133C18 00130B58  38 04 00 2C */	addi r0, r4, "__vt__23Container<10Vector3<f>>"@l
/* 80133C1C 00130B5C  90 1E 00 00 */	stw r0, 0(r30)
/* 80133C20 00130B60  41 82 00 18 */	beq .L_80133C38
/* 80133C24 00130B64  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80133C28 00130B68  38 80 00 00 */	li r4, 0
/* 80133C2C 00130B6C  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80133C30 00130B70  90 1E 00 00 */	stw r0, 0(r30)
/* 80133C34 00130B74  48 2D D9 55 */	bl __dt__5CNodeFv
.L_80133C38:
/* 80133C38 00130B78  7F E0 07 35 */	extsh. r0, r31
/* 80133C3C 00130B7C  40 81 00 0C */	ble .L_80133C48
/* 80133C40 00130B80  7F C3 F3 78 */	mr r3, r30
/* 80133C44 00130B84  4B EF 04 71 */	bl __dl__FPv
.L_80133C48:
/* 80133C48 00130B88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133C4C 00130B8C  7F C3 F3 78 */	mr r3, r30
/* 80133C50 00130B90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133C54 00130B94  83 C1 00 08 */	lwz r30, 8(r1)
/* 80133C58 00130B98  7C 08 03 A6 */	mtlr r0
/* 80133C5C 00130B9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80133C60 00130BA0  4E 80 00 20 */	blr 
.endfn "__dt__28ArrayContainer<10Vector3<f>>Fv"

.fn "__dt__23Container<10Vector3<f>>Fv", weak
/* 80133C64 00130BA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133C68 00130BA8  7C 08 02 A6 */	mflr r0
/* 80133C6C 00130BAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133C70 00130BB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133C74 00130BB4  7C 9F 23 78 */	mr r31, r4
/* 80133C78 00130BB8  93 C1 00 08 */	stw r30, 8(r1)
/* 80133C7C 00130BBC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80133C80 00130BC0  41 82 00 38 */	beq .L_80133CB8
/* 80133C84 00130BC4  3C 80 80 4B */	lis r4, "__vt__23Container<10Vector3<f>>"@ha
/* 80133C88 00130BC8  38 04 00 2C */	addi r0, r4, "__vt__23Container<10Vector3<f>>"@l
/* 80133C8C 00130BCC  90 1E 00 00 */	stw r0, 0(r30)
/* 80133C90 00130BD0  41 82 00 18 */	beq .L_80133CA8
/* 80133C94 00130BD4  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80133C98 00130BD8  38 80 00 00 */	li r4, 0
/* 80133C9C 00130BDC  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80133CA0 00130BE0  90 1E 00 00 */	stw r0, 0(r30)
/* 80133CA4 00130BE4  48 2D D8 E5 */	bl __dt__5CNodeFv
.L_80133CA8:
/* 80133CA8 00130BE8  7F E0 07 35 */	extsh. r0, r31
/* 80133CAC 00130BEC  40 81 00 0C */	ble .L_80133CB8
/* 80133CB0 00130BF0  7F C3 F3 78 */	mr r3, r30
/* 80133CB4 00130BF4  4B EF 04 01 */	bl __dl__FPv
.L_80133CB8:
/* 80133CB8 00130BF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133CBC 00130BFC  7F C3 F3 78 */	mr r3, r30
/* 80133CC0 00130C00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133CC4 00130C04  83 C1 00 08 */	lwz r30, 8(r1)
/* 80133CC8 00130C08  7C 08 03 A6 */	mtlr r0
/* 80133CCC 00130C0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80133CD0 00130C10  4E 80 00 20 */	blr 
.endfn "__dt__23Container<10Vector3<f>>Fv"

.fn getNumShapes__12PlatAttacherFv, global
/* 80133CD4 00130C14  80 63 00 00 */	lwz r3, 0(r3)
/* 80133CD8 00130C18  4E 80 00 20 */	blr 
.endfn getNumShapes__12PlatAttacherFv

.fn getJointIndex__12PlatAttacherFi, global
/* 80133CDC 00130C1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133CE0 00130C20  7C 08 02 A6 */	mflr r0
/* 80133CE4 00130C24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133CE8 00130C28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133CEC 00130C2C  7C 9F 23 79 */	or. r31, r4, r4
/* 80133CF0 00130C30  93 C1 00 08 */	stw r30, 8(r1)
/* 80133CF4 00130C34  7C 7E 1B 78 */	mr r30, r3
/* 80133CF8 00130C38  38 60 00 00 */	li r3, 0
/* 80133CFC 00130C3C  41 80 00 14 */	blt .L_80133D10
/* 80133D00 00130C40  80 1E 00 00 */	lwz r0, 0(r30)
/* 80133D04 00130C44  7C 1F 00 00 */	cmpw r31, r0
/* 80133D08 00130C48  40 80 00 08 */	bge .L_80133D10
/* 80133D0C 00130C4C  38 60 00 01 */	li r3, 1
.L_80133D10:
/* 80133D10 00130C50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80133D14 00130C54  40 82 00 20 */	bne .L_80133D34
/* 80133D18 00130C58  3C 60 80 48 */	lis r3, lbl_8047C5A0@ha
/* 80133D1C 00130C5C  3C A0 80 48 */	lis r5, lbl_8047C5CC@ha
/* 80133D20 00130C60  38 63 C5 A0 */	addi r3, r3, lbl_8047C5A0@l
/* 80133D24 00130C64  38 80 01 38 */	li r4, 0x138
/* 80133D28 00130C68  38 A5 C5 CC */	addi r5, r5, lbl_8047C5CC@l
/* 80133D2C 00130C6C  4C C6 31 82 */	crclr 6
/* 80133D30 00130C70  4B EF 69 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80133D34:
/* 80133D34 00130C74  80 7E 00 04 */	lwz r3, 4(r30)
/* 80133D38 00130C78  57 E0 08 3C */	slwi r0, r31, 1
/* 80133D3C 00130C7C  7C 63 02 2E */	lhzx r3, r3, r0
/* 80133D40 00130C80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133D44 00130C84  83 C1 00 08 */	lwz r30, 8(r1)
/* 80133D48 00130C88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133D4C 00130C8C  7C 08 03 A6 */	mtlr r0
/* 80133D50 00130C90  38 21 00 10 */	addi r1, r1, 0x10
/* 80133D54 00130C94  4E 80 00 20 */	blr 
.endfn getJointIndex__12PlatAttacherFi

.fn getPlatform__12PlatAttacherFi, global
/* 80133D58 00130C98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133D5C 00130C9C  7C 08 02 A6 */	mflr r0
/* 80133D60 00130CA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133D64 00130CA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133D68 00130CA8  7C 9F 23 79 */	or. r31, r4, r4
/* 80133D6C 00130CAC  93 C1 00 08 */	stw r30, 8(r1)
/* 80133D70 00130CB0  7C 7E 1B 78 */	mr r30, r3
/* 80133D74 00130CB4  38 60 00 00 */	li r3, 0
/* 80133D78 00130CB8  41 80 00 14 */	blt .L_80133D8C
/* 80133D7C 00130CBC  80 1E 00 00 */	lwz r0, 0(r30)
/* 80133D80 00130CC0  7C 1F 00 00 */	cmpw r31, r0
/* 80133D84 00130CC4  40 80 00 08 */	bge .L_80133D8C
/* 80133D88 00130CC8  38 60 00 01 */	li r3, 1
.L_80133D8C:
/* 80133D8C 00130CCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80133D90 00130CD0  40 82 00 20 */	bne .L_80133DB0
/* 80133D94 00130CD4  3C 60 80 48 */	lis r3, lbl_8047C5A0@ha
/* 80133D98 00130CD8  3C A0 80 48 */	lis r5, lbl_8047C5CC@ha
/* 80133D9C 00130CDC  38 63 C5 A0 */	addi r3, r3, lbl_8047C5A0@l
/* 80133DA0 00130CE0  38 80 01 3E */	li r4, 0x13e
/* 80133DA4 00130CE4  38 A5 C5 CC */	addi r5, r5, lbl_8047C5CC@l
/* 80133DA8 00130CE8  4C C6 31 82 */	crclr 6
/* 80133DAC 00130CEC  4B EF 68 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80133DB0:
/* 80133DB0 00130CF0  1C 1F 00 1C */	mulli r0, r31, 0x1c
/* 80133DB4 00130CF4  80 7E 00 08 */	lwz r3, 8(r30)
/* 80133DB8 00130CF8  7C 63 02 14 */	add r3, r3, r0
/* 80133DBC 00130CFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133DC0 00130D00  83 C1 00 08 */	lwz r30, 8(r1)
/* 80133DC4 00130D04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133DC8 00130D08  7C 08 03 A6 */	mtlr r0
/* 80133DCC 00130D0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80133DD0 00130D10  4E 80 00 20 */	blr 
.endfn getPlatform__12PlatAttacherFi

.fn __dt__Q23Sys11GridDividerFv, weak
/* 80133DD4 00130D14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133DD8 00130D18  7C 08 02 A6 */	mflr r0
/* 80133DDC 00130D1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133DE0 00130D20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133DE4 00130D24  7C 9F 23 78 */	mr r31, r4
/* 80133DE8 00130D28  93 C1 00 08 */	stw r30, 8(r1)
/* 80133DEC 00130D2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80133DF0 00130D30  41 82 00 58 */	beq .L_80133E48
/* 80133DF4 00130D34  3C 60 80 4F */	lis r3, __vt__Q23Sys11GridDivider@ha
/* 80133DF8 00130D38  34 1E 00 20 */	addic. r0, r30, 0x20
/* 80133DFC 00130D3C  38 03 B6 C4 */	addi r0, r3, __vt__Q23Sys11GridDivider@l
/* 80133E00 00130D40  90 1E 00 00 */	stw r0, 0(r30)
/* 80133E04 00130D44  41 82 00 14 */	beq .L_80133E18
/* 80133E08 00130D48  3C 80 80 13 */	lis r4, __dt__Q23Sys12TriIndexListFv@ha
/* 80133E0C 00130D4C  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 80133E10 00130D50  38 84 3E 64 */	addi r4, r4, __dt__Q23Sys12TriIndexListFv@l
/* 80133E14 00130D54  4B F8 D9 35 */	bl __destroy_new_array
.L_80133E18:
/* 80133E18 00130D58  28 1E 00 00 */	cmplwi r30, 0
/* 80133E1C 00130D5C  41 82 00 1C */	beq .L_80133E38
/* 80133E20 00130D60  3C 80 80 4F */	lis r4, __vt__Q23Sys10TriDivider@ha
/* 80133E24 00130D64  7F C3 F3 78 */	mr r3, r30
/* 80133E28 00130D68  38 04 BA 10 */	addi r0, r4, __vt__Q23Sys10TriDivider@l
/* 80133E2C 00130D6C  38 80 00 00 */	li r4, 0
/* 80133E30 00130D70  90 1E 00 00 */	stw r0, 0(r30)
/* 80133E34 00130D74  48 2D D7 55 */	bl __dt__5CNodeFv
.L_80133E38:
/* 80133E38 00130D78  7F E0 07 35 */	extsh. r0, r31
/* 80133E3C 00130D7C  40 81 00 0C */	ble .L_80133E48
/* 80133E40 00130D80  7F C3 F3 78 */	mr r3, r30
/* 80133E44 00130D84  4B EF 02 71 */	bl __dl__FPv
.L_80133E48:
/* 80133E48 00130D88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133E4C 00130D8C  7F C3 F3 78 */	mr r3, r30
/* 80133E50 00130D90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133E54 00130D94  83 C1 00 08 */	lwz r30, 8(r1)
/* 80133E58 00130D98  7C 08 03 A6 */	mtlr r0
/* 80133E5C 00130D9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80133E60 00130DA0  4E 80 00 20 */	blr 
.endfn __dt__Q23Sys11GridDividerFv

.fn __dt__Q23Sys12TriIndexListFv, weak
/* 80133E64 00130DA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133E68 00130DA8  7C 08 02 A6 */	mflr r0
/* 80133E6C 00130DAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133E70 00130DB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133E74 00130DB4  7C 9F 23 78 */	mr r31, r4
/* 80133E78 00130DB8  93 C1 00 08 */	stw r30, 8(r1)
/* 80133E7C 00130DBC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80133E80 00130DC0  41 82 00 68 */	beq .L_80133EE8
/* 80133E84 00130DC4  3C 80 80 4B */	lis r4, __vt__Q23Sys12TriIndexList@ha
/* 80133E88 00130DC8  38 04 FF 9C */	addi r0, r4, __vt__Q23Sys12TriIndexList@l
/* 80133E8C 00130DCC  90 1E 00 00 */	stw r0, 0(r30)
/* 80133E90 00130DD0  41 82 00 48 */	beq .L_80133ED8
/* 80133E94 00130DD4  3C 80 80 4B */	lis r4, __vt__Q23Sys9IndexList@ha
/* 80133E98 00130DD8  38 04 FF 54 */	addi r0, r4, __vt__Q23Sys9IndexList@l
/* 80133E9C 00130DDC  90 1E 00 00 */	stw r0, 0(r30)
/* 80133EA0 00130DE0  41 82 00 38 */	beq .L_80133ED8
/* 80133EA4 00130DE4  3C 80 80 4B */	lis r4, "__vt__17ArrayContainer<i>"@ha
/* 80133EA8 00130DE8  38 04 FF 0C */	addi r0, r4, "__vt__17ArrayContainer<i>"@l
/* 80133EAC 00130DEC  90 1E 00 00 */	stw r0, 0(r30)
/* 80133EB0 00130DF0  41 82 00 28 */	beq .L_80133ED8
/* 80133EB4 00130DF4  3C 80 80 4B */	lis r4, "__vt__12Container<i>"@ha
/* 80133EB8 00130DF8  38 04 FE E0 */	addi r0, r4, "__vt__12Container<i>"@l
/* 80133EBC 00130DFC  90 1E 00 00 */	stw r0, 0(r30)
/* 80133EC0 00130E00  41 82 00 18 */	beq .L_80133ED8
/* 80133EC4 00130E04  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80133EC8 00130E08  38 80 00 00 */	li r4, 0
/* 80133ECC 00130E0C  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80133ED0 00130E10  90 1E 00 00 */	stw r0, 0(r30)
/* 80133ED4 00130E14  48 2D D6 B5 */	bl __dt__5CNodeFv
.L_80133ED8:
/* 80133ED8 00130E18  7F E0 07 35 */	extsh. r0, r31
/* 80133EDC 00130E1C  40 81 00 0C */	ble .L_80133EE8
/* 80133EE0 00130E20  7F C3 F3 78 */	mr r3, r30
/* 80133EE4 00130E24  4B EF 01 D1 */	bl __dl__FPv
.L_80133EE8:
/* 80133EE8 00130E28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133EEC 00130E2C  7F C3 F3 78 */	mr r3, r30
/* 80133EF0 00130E30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133EF4 00130E34  83 C1 00 08 */	lwz r30, 8(r1)
/* 80133EF8 00130E38  7C 08 03 A6 */	mtlr r0
/* 80133EFC 00130E3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80133F00 00130E40  4E 80 00 20 */	blr 
.endfn __dt__Q23Sys12TriIndexListFv

.fn __dt__Q23Sys10TriDividerFv, weak
/* 80133F04 00130E44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133F08 00130E48  7C 08 02 A6 */	mflr r0
/* 80133F0C 00130E4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133F10 00130E50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133F14 00130E54  7C 9F 23 78 */	mr r31, r4
/* 80133F18 00130E58  93 C1 00 08 */	stw r30, 8(r1)
/* 80133F1C 00130E5C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80133F20 00130E60  41 82 00 28 */	beq .L_80133F48
/* 80133F24 00130E64  3C A0 80 4F */	lis r5, __vt__Q23Sys10TriDivider@ha
/* 80133F28 00130E68  38 80 00 00 */	li r4, 0
/* 80133F2C 00130E6C  38 05 BA 10 */	addi r0, r5, __vt__Q23Sys10TriDivider@l
/* 80133F30 00130E70  90 1E 00 00 */	stw r0, 0(r30)
/* 80133F34 00130E74  48 2D D6 55 */	bl __dt__5CNodeFv
/* 80133F38 00130E78  7F E0 07 35 */	extsh. r0, r31
/* 80133F3C 00130E7C  40 81 00 0C */	ble .L_80133F48
/* 80133F40 00130E80  7F C3 F3 78 */	mr r3, r30
/* 80133F44 00130E84  4B EF 01 71 */	bl __dl__FPv
.L_80133F48:
/* 80133F48 00130E88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80133F4C 00130E8C  7F C3 F3 78 */	mr r3, r30
/* 80133F50 00130E90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80133F54 00130E94  83 C1 00 08 */	lwz r30, 8(r1)
/* 80133F58 00130E98  7C 08 03 A6 */	mtlr r0
/* 80133F5C 00130E9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80133F60 00130EA0  4E 80 00 20 */	blr 
.endfn __dt__Q23Sys10TriDividerFv

.fn __dt__Q23Sys7OBBTreeFv, weak
/* 80133F64 00130EA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80133F68 00130EA8  7C 08 02 A6 */	mflr r0
/* 80133F6C 00130EAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133F70 00130EB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80133F74 00130EB4  7C 9F 23 78 */	mr r31, r4
/* 80133F78 00130EB8  93 C1 00 08 */	stw r30, 8(r1)
/* 80133F7C 00130EBC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80133F80 00130EC0  41 82 00 C0 */	beq .L_80134040
/* 80133F84 00130EC4  3C 60 80 4F */	lis r3, __vt__Q23Sys7OBBTree@ha
/* 80133F88 00130EC8  34 1E 00 20 */	addic. r0, r30, 0x20
/* 80133F8C 00130ECC  38 03 B9 E0 */	addi r0, r3, __vt__Q23Sys7OBBTree@l
/* 80133F90 00130ED0  90 1E 00 00 */	stw r0, 0(r30)
/* 80133F94 00130ED4  41 82 00 7C */	beq .L_80134010
/* 80133F98 00130ED8  3C 80 80 4B */	lis r4, __vt__Q23Sys3OBB@ha
/* 80133F9C 00130EDC  34 7E 00 F8 */	addic. r3, r30, 0xf8
/* 80133FA0 00130EE0  38 04 FE D0 */	addi r0, r4, __vt__Q23Sys3OBB@l
/* 80133FA4 00130EE4  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80133FA8 00130EE8  41 82 00 5C */	beq .L_80134004
/* 80133FAC 00130EEC  3C 80 80 4B */	lis r4, __vt__Q23Sys12TriIndexList@ha
/* 80133FB0 00130EF0  28 03 00 00 */	cmplwi r3, 0
/* 80133FB4 00130EF4  38 04 FF 9C */	addi r0, r4, __vt__Q23Sys12TriIndexList@l
/* 80133FB8 00130EF8  90 1E 00 F8 */	stw r0, 0xf8(r30)
/* 80133FBC 00130EFC  41 82 00 48 */	beq .L_80134004
/* 80133FC0 00130F00  3C 80 80 4B */	lis r4, __vt__Q23Sys9IndexList@ha
/* 80133FC4 00130F04  38 04 FF 54 */	addi r0, r4, __vt__Q23Sys9IndexList@l
/* 80133FC8 00130F08  90 1E 00 F8 */	stw r0, 0xf8(r30)
/* 80133FCC 00130F0C  41 82 00 38 */	beq .L_80134004
/* 80133FD0 00130F10  3C 80 80 4B */	lis r4, "__vt__17ArrayContainer<i>"@ha
/* 80133FD4 00130F14  38 04 FF 0C */	addi r0, r4, "__vt__17ArrayContainer<i>"@l
/* 80133FD8 00130F18  90 1E 00 F8 */	stw r0, 0xf8(r30)
/* 80133FDC 00130F1C  41 82 00 28 */	beq .L_80134004
/* 80133FE0 00130F20  3C 80 80 4B */	lis r4, "__vt__12Container<i>"@ha
/* 80133FE4 00130F24  38 04 FE E0 */	addi r0, r4, "__vt__12Container<i>"@l
/* 80133FE8 00130F28  90 1E 00 F8 */	stw r0, 0xf8(r30)
/* 80133FEC 00130F2C  41 82 00 18 */	beq .L_80134004
/* 80133FF0 00130F30  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80133FF4 00130F34  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80133FF8 00130F38  90 1E 00 F8 */	stw r0, 0xf8(r30)
/* 80133FFC 00130F3C  38 80 00 00 */	li r4, 0
/* 80134000 00130F40  48 2D D5 89 */	bl __dt__5CNodeFv
.L_80134004:
/* 80134004 00130F44  38 7E 00 20 */	addi r3, r30, 0x20
/* 80134008 00130F48  38 80 00 00 */	li r4, 0
/* 8013400C 00130F4C  48 2D D5 7D */	bl __dt__5CNodeFv
.L_80134010:
/* 80134010 00130F50  28 1E 00 00 */	cmplwi r30, 0
/* 80134014 00130F54  41 82 00 1C */	beq .L_80134030
/* 80134018 00130F58  3C 80 80 4F */	lis r4, __vt__Q23Sys10TriDivider@ha
/* 8013401C 00130F5C  7F C3 F3 78 */	mr r3, r30
/* 80134020 00130F60  38 04 BA 10 */	addi r0, r4, __vt__Q23Sys10TriDivider@l
/* 80134024 00130F64  38 80 00 00 */	li r4, 0
/* 80134028 00130F68  90 1E 00 00 */	stw r0, 0(r30)
/* 8013402C 00130F6C  48 2D D5 5D */	bl __dt__5CNodeFv
.L_80134030:
/* 80134030 00130F70  7F E0 07 35 */	extsh. r0, r31
/* 80134034 00130F74  40 81 00 0C */	ble .L_80134040
/* 80134038 00130F78  7F C3 F3 78 */	mr r3, r30
/* 8013403C 00130F7C  4B EF 00 79 */	bl __dl__FPv
.L_80134040:
/* 80134040 00130F80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134044 00130F84  7F C3 F3 78 */	mr r3, r30
/* 80134048 00130F88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013404C 00130F8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80134050 00130F90  7C 08 03 A6 */	mtlr r0
/* 80134054 00130F94  38 21 00 10 */	addi r1, r1, 0x10
/* 80134058 00130F98  4E 80 00 20 */	blr 
.endfn __dt__Q23Sys7OBBTreeFv

.fn __ct__8CollTreeFv, global
/* 8013405C 00130F9C  38 00 00 00 */	li r0, 0
/* 80134060 00130FA0  90 03 00 00 */	stw r0, 0(r3)
/* 80134064 00130FA4  90 03 00 04 */	stw r0, 4(r3)
/* 80134068 00130FA8  4E 80 00 20 */	blr 
.endfn __ct__8CollTreeFv

.fn createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr, global
/* 8013406C 00130FAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134070 00130FB0  7C 08 02 A6 */	mflr r0
/* 80134074 00130FB4  28 05 00 00 */	cmplwi r5, 0
/* 80134078 00130FB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013407C 00130FBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80134080 00130FC0  7C 7F 1B 78 */	mr r31, r3
/* 80134084 00130FC4  90 C3 00 04 */	stw r6, 4(r3)
/* 80134088 00130FC8  41 82 00 14 */	beq .L_8013409C
/* 8013408C 00130FCC  7C A3 2B 78 */	mr r3, r5
/* 80134090 00130FD0  7C C5 33 78 */	mr r5, r6
/* 80134094 00130FD4  48 00 49 D9 */	bl createInstance__15CollPartFactoryFPQ28SysShape9MtxObjectP11CollPartMgr
/* 80134098 00130FD8  90 7F 00 00 */	stw r3, 0(r31)
.L_8013409C:
/* 8013409C 00130FDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801340A0 00130FE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801340A4 00130FE4  7C 08 03 A6 */	mtlr r0
/* 801340A8 00130FE8  38 21 00 10 */	addi r1, r1, 0x10
/* 801340AC 00130FEC  4E 80 00 20 */	blr 
.endfn createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr

.fn createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr, global
/* 801340B0 00130FF0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801340B4 00130FF4  7C 08 02 A6 */	mflr r0
/* 801340B8 00130FF8  28 07 00 00 */	cmplwi r7, 0
/* 801340BC 00130FFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801340C0 00131000  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801340C4 00131004  7C 7F 1B 78 */	mr r31, r3
/* 801340C8 00131008  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801340CC 0013100C  7C DE 33 78 */	mr r30, r6
/* 801340D0 00131010  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801340D4 00131014  7C BD 2B 78 */	mr r29, r5
/* 801340D8 00131018  93 81 00 10 */	stw r28, 0x10(r1)
/* 801340DC 0013101C  7C 9C 23 78 */	mr r28, r4
/* 801340E0 00131020  90 E3 00 04 */	stw r7, 4(r3)
/* 801340E4 00131024  41 82 00 3C */	beq .L_80134120
/* 801340E8 00131028  7C E3 3B 78 */	mr r3, r7
/* 801340EC 0013102C  48 00 49 A1 */	bl createOne__11CollPartMgrFPQ28SysShape9MtxObject
/* 801340F0 00131030  90 7F 00 00 */	stw r3, 0(r31)
/* 801340F4 00131034  80 1F 00 00 */	lwz r0, 0(r31)
/* 801340F8 00131038  28 00 00 00 */	cmplwi r0, 0
/* 801340FC 0013103C  40 82 00 44 */	bne .L_80134140
/* 80134100 00131040  3C 60 80 48 */	lis r3, lbl_8047C5A0@ha
/* 80134104 00131044  3C A0 80 48 */	lis r5, lbl_8047C5D8@ha
/* 80134108 00131048  38 63 C5 A0 */	addi r3, r3, lbl_8047C5A0@l
/* 8013410C 0013104C  38 80 01 BE */	li r4, 0x1be
/* 80134110 00131050  38 A5 C5 D8 */	addi r5, r5, lbl_8047C5D8@l
/* 80134114 00131054  4C C6 31 82 */	crclr 6
/* 80134118 00131058  4B EF 65 29 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8013411C 0013105C  48 00 00 24 */	b .L_80134140
.L_80134120:
/* 80134120 00131060  38 60 00 64 */	li r3, 0x64
/* 80134124 00131064  4B EE FD 81 */	bl __nw__FUl
/* 80134128 00131068  7C 60 1B 79 */	or. r0, r3, r3
/* 8013412C 0013106C  41 82 00 10 */	beq .L_8013413C
/* 80134130 00131070  7F 84 E3 78 */	mr r4, r28
/* 80134134 00131074  48 00 2B 41 */	bl __ct__8CollPartFPQ28SysShape9MtxObject
/* 80134138 00131078  7C 60 1B 78 */	mr r0, r3
.L_8013413C:
/* 8013413C 0013107C  90 1F 00 00 */	stw r0, 0(r31)
.L_80134140:
/* 80134140 00131080  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80134144 00131084  3C 60 72 6F */	lis r3, 0x726F6F74@ha
/* 80134148 00131088  80 BF 00 00 */	lwz r5, 0(r31)
/* 8013414C 0013108C  38 00 00 00 */	li r0, 0
/* 80134150 00131090  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80134154 00131094  38 83 6F 74 */	addi r4, r3, 0x726F6F74@l
/* 80134158 00131098  D0 25 00 1C */	stfs f1, 0x1c(r5)
/* 8013415C 0013109C  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80134160 001310A0  80 7F 00 00 */	lwz r3, 0(r31)
/* 80134164 001310A4  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 80134168 001310A8  80 7F 00 00 */	lwz r3, 0(r31)
/* 8013416C 001310AC  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 80134170 001310B0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80134174 001310B4  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 80134178 001310B8  80 7F 00 00 */	lwz r3, 0(r31)
/* 8013417C 001310BC  93 A3 00 2C */	stw r29, 0x2c(r3)
/* 80134180 001310C0  80 7F 00 00 */	lwz r3, 0(r31)
/* 80134184 001310C4  B0 03 00 48 */	sth r0, 0x48(r3)
/* 80134188 001310C8  80 7F 00 00 */	lwz r3, 0(r31)
/* 8013418C 001310CC  38 63 00 30 */	addi r3, r3, 0x30
/* 80134190 001310D0  48 2D F1 49 */	bl setID__4ID32FUl
/* 80134194 001310D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80134198 001310D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013419C 001310DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801341A0 001310E0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801341A4 001310E4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801341A8 001310E8  7C 08 03 A6 */	mtlr r0
/* 801341AC 001310EC  38 21 00 20 */	addi r1, r1, 0x20
/* 801341B0 001310F0  4E 80 00 20 */	blr 
.endfn createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr

.fn release__8CollTreeFv, global
/* 801341B4 001310F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801341B8 001310F8  7C 08 02 A6 */	mflr r0
/* 801341BC 001310FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801341C0 00131100  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801341C4 00131104  7C 7F 1B 78 */	mr r31, r3
/* 801341C8 00131108  80 03 00 04 */	lwz r0, 4(r3)
/* 801341CC 0013110C  28 00 00 00 */	cmplwi r0, 0
/* 801341D0 00131110  41 82 00 14 */	beq .L_801341E4
/* 801341D4 00131114  80 9F 00 00 */	lwz r4, 0(r31)
/* 801341D8 00131118  48 00 00 21 */	bl releaseRec__8CollTreeFP8CollPart
/* 801341DC 0013111C  38 00 00 00 */	li r0, 0
/* 801341E0 00131120  90 1F 00 04 */	stw r0, 4(r31)
.L_801341E4:
/* 801341E4 00131124  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801341E8 00131128  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801341EC 0013112C  7C 08 03 A6 */	mtlr r0
/* 801341F0 00131130  38 21 00 10 */	addi r1, r1, 0x10
/* 801341F4 00131134  4E 80 00 20 */	blr 
.endfn release__8CollTreeFv

.fn releaseRec__8CollTreeFP8CollPart, global
/* 801341F8 00131138  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801341FC 0013113C  7C 08 02 A6 */	mflr r0
/* 80134200 00131140  90 01 00 34 */	stw r0, 0x34(r1)
/* 80134204 00131144  BE E1 00 0C */	stmw r23, 0xc(r1)
/* 80134208 00131148  7C 9D 23 78 */	mr r29, r4
/* 8013420C 0013114C  7C 7F 1B 78 */	mr r31, r3
/* 80134210 00131150  83 64 00 10 */	lwz r27, 0x10(r4)
/* 80134214 00131154  83 C4 00 04 */	lwz r30, 4(r4)
/* 80134218 00131158  28 1B 00 00 */	cmplwi r27, 0
/* 8013421C 0013115C  41 82 01 80 */	beq .L_8013439C
/* 80134220 00131160  83 3B 00 10 */	lwz r25, 0x10(r27)
/* 80134224 00131164  83 5B 00 04 */	lwz r26, 4(r27)
/* 80134228 00131168  28 19 00 00 */	cmplwi r25, 0
/* 8013422C 0013116C  41 82 00 B0 */	beq .L_801342DC
/* 80134230 00131170  82 F9 00 10 */	lwz r23, 0x10(r25)
/* 80134234 00131174  83 19 00 04 */	lwz r24, 4(r25)
/* 80134238 00131178  28 17 00 00 */	cmplwi r23, 0
/* 8013423C 0013117C  41 82 00 48 */	beq .L_80134284
/* 80134240 00131180  7E E3 BB 78 */	mr r3, r23
/* 80134244 00131184  48 00 03 05 */	bl getNext__8CollPartFv
/* 80134248 00131188  7C 7C 1B 78 */	mr r28, r3
/* 8013424C 0013118C  7E E3 BB 78 */	mr r3, r23
/* 80134250 00131190  48 00 02 F1 */	bl getChild__8CollPartFv
/* 80134254 00131194  7C 64 1B 79 */	or. r4, r3, r3
/* 80134258 00131198  41 82 00 0C */	beq .L_80134264
/* 8013425C 0013119C  7F E3 FB 78 */	mr r3, r31
/* 80134260 001311A0  4B FF FF 99 */	bl releaseRec__8CollTreeFP8CollPart
.L_80134264:
/* 80134264 001311A4  80 7F 00 04 */	lwz r3, 4(r31)
/* 80134268 001311A8  7E E4 BB 78 */	mr r4, r23
/* 8013426C 001311AC  48 00 56 81 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 80134270 001311B0  28 1C 00 00 */	cmplwi r28, 0
/* 80134274 001311B4  41 82 00 10 */	beq .L_80134284
/* 80134278 001311B8  7F E3 FB 78 */	mr r3, r31
/* 8013427C 001311BC  7F 84 E3 78 */	mr r4, r28
/* 80134280 001311C0  4B FF FF 79 */	bl releaseRec__8CollTreeFP8CollPart
.L_80134284:
/* 80134284 001311C4  80 7F 00 04 */	lwz r3, 4(r31)
/* 80134288 001311C8  7F 24 CB 78 */	mr r4, r25
/* 8013428C 001311CC  48 00 56 61 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 80134290 001311D0  28 18 00 00 */	cmplwi r24, 0
/* 80134294 001311D4  41 82 00 48 */	beq .L_801342DC
/* 80134298 001311D8  7F 03 C3 78 */	mr r3, r24
/* 8013429C 001311DC  48 00 02 AD */	bl getNext__8CollPartFv
/* 801342A0 001311E0  7C 7C 1B 78 */	mr r28, r3
/* 801342A4 001311E4  7F 03 C3 78 */	mr r3, r24
/* 801342A8 001311E8  48 00 02 99 */	bl getChild__8CollPartFv
/* 801342AC 001311EC  7C 64 1B 79 */	or. r4, r3, r3
/* 801342B0 001311F0  41 82 00 0C */	beq .L_801342BC
/* 801342B4 001311F4  7F E3 FB 78 */	mr r3, r31
/* 801342B8 001311F8  4B FF FF 41 */	bl releaseRec__8CollTreeFP8CollPart
.L_801342BC:
/* 801342BC 001311FC  80 7F 00 04 */	lwz r3, 4(r31)
/* 801342C0 00131200  7F 04 C3 78 */	mr r4, r24
/* 801342C4 00131204  48 00 56 29 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 801342C8 00131208  28 1C 00 00 */	cmplwi r28, 0
/* 801342CC 0013120C  41 82 00 10 */	beq .L_801342DC
/* 801342D0 00131210  7F E3 FB 78 */	mr r3, r31
/* 801342D4 00131214  7F 84 E3 78 */	mr r4, r28
/* 801342D8 00131218  4B FF FF 21 */	bl releaseRec__8CollTreeFP8CollPart
.L_801342DC:
/* 801342DC 0013121C  80 7F 00 04 */	lwz r3, 4(r31)
/* 801342E0 00131220  7F 64 DB 78 */	mr r4, r27
/* 801342E4 00131224  48 00 56 09 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 801342E8 00131228  28 1A 00 00 */	cmplwi r26, 0
/* 801342EC 0013122C  41 82 00 B0 */	beq .L_8013439C
/* 801342F0 00131230  83 1A 00 10 */	lwz r24, 0x10(r26)
/* 801342F4 00131234  82 FA 00 04 */	lwz r23, 4(r26)
/* 801342F8 00131238  28 18 00 00 */	cmplwi r24, 0
/* 801342FC 0013123C  41 82 00 48 */	beq .L_80134344
/* 80134300 00131240  7F 03 C3 78 */	mr r3, r24
/* 80134304 00131244  48 00 02 45 */	bl getNext__8CollPartFv
/* 80134308 00131248  7C 7C 1B 78 */	mr r28, r3
/* 8013430C 0013124C  7F 03 C3 78 */	mr r3, r24
/* 80134310 00131250  48 00 02 31 */	bl getChild__8CollPartFv
/* 80134314 00131254  7C 64 1B 79 */	or. r4, r3, r3
/* 80134318 00131258  41 82 00 0C */	beq .L_80134324
/* 8013431C 0013125C  7F E3 FB 78 */	mr r3, r31
/* 80134320 00131260  4B FF FE D9 */	bl releaseRec__8CollTreeFP8CollPart
.L_80134324:
/* 80134324 00131264  80 7F 00 04 */	lwz r3, 4(r31)
/* 80134328 00131268  7F 04 C3 78 */	mr r4, r24
/* 8013432C 0013126C  48 00 55 C1 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 80134330 00131270  28 1C 00 00 */	cmplwi r28, 0
/* 80134334 00131274  41 82 00 10 */	beq .L_80134344
/* 80134338 00131278  7F E3 FB 78 */	mr r3, r31
/* 8013433C 0013127C  7F 84 E3 78 */	mr r4, r28
/* 80134340 00131280  4B FF FE B9 */	bl releaseRec__8CollTreeFP8CollPart
.L_80134344:
/* 80134344 00131284  80 7F 00 04 */	lwz r3, 4(r31)
/* 80134348 00131288  7F 44 D3 78 */	mr r4, r26
/* 8013434C 0013128C  48 00 55 A1 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 80134350 00131290  28 17 00 00 */	cmplwi r23, 0
/* 80134354 00131294  41 82 00 48 */	beq .L_8013439C
/* 80134358 00131298  7E E3 BB 78 */	mr r3, r23
/* 8013435C 0013129C  48 00 01 ED */	bl getNext__8CollPartFv
/* 80134360 001312A0  7C 7C 1B 78 */	mr r28, r3
/* 80134364 001312A4  7E E3 BB 78 */	mr r3, r23
/* 80134368 001312A8  48 00 01 D9 */	bl getChild__8CollPartFv
/* 8013436C 001312AC  7C 64 1B 79 */	or. r4, r3, r3
/* 80134370 001312B0  41 82 00 0C */	beq .L_8013437C
/* 80134374 001312B4  7F E3 FB 78 */	mr r3, r31
/* 80134378 001312B8  4B FF FE 81 */	bl releaseRec__8CollTreeFP8CollPart
.L_8013437C:
/* 8013437C 001312BC  80 7F 00 04 */	lwz r3, 4(r31)
/* 80134380 001312C0  7E E4 BB 78 */	mr r4, r23
/* 80134384 001312C4  48 00 55 69 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 80134388 001312C8  28 1C 00 00 */	cmplwi r28, 0
/* 8013438C 001312CC  41 82 00 10 */	beq .L_8013439C
/* 80134390 001312D0  7F E3 FB 78 */	mr r3, r31
/* 80134394 001312D4  7F 84 E3 78 */	mr r4, r28
/* 80134398 001312D8  4B FF FE 61 */	bl releaseRec__8CollTreeFP8CollPart
.L_8013439C:
/* 8013439C 001312DC  80 7F 00 04 */	lwz r3, 4(r31)
/* 801343A0 001312E0  7F A4 EB 78 */	mr r4, r29
/* 801343A4 001312E4  48 00 55 49 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 801343A8 001312E8  28 1E 00 00 */	cmplwi r30, 0
/* 801343AC 001312EC  41 82 01 80 */	beq .L_8013452C
/* 801343B0 001312F0  83 1E 00 10 */	lwz r24, 0x10(r30)
/* 801343B4 001312F4  82 FE 00 04 */	lwz r23, 4(r30)
/* 801343B8 001312F8  28 18 00 00 */	cmplwi r24, 0
/* 801343BC 001312FC  41 82 00 B0 */	beq .L_8013446C
/* 801343C0 00131300  83 58 00 10 */	lwz r26, 0x10(r24)
/* 801343C4 00131304  83 38 00 04 */	lwz r25, 4(r24)
/* 801343C8 00131308  28 1A 00 00 */	cmplwi r26, 0
/* 801343CC 0013130C  41 82 00 48 */	beq .L_80134414
/* 801343D0 00131310  7F 43 D3 78 */	mr r3, r26
/* 801343D4 00131314  48 00 01 75 */	bl getNext__8CollPartFv
/* 801343D8 00131318  7C 7C 1B 78 */	mr r28, r3
/* 801343DC 0013131C  7F 43 D3 78 */	mr r3, r26
/* 801343E0 00131320  48 00 01 61 */	bl getChild__8CollPartFv
/* 801343E4 00131324  7C 64 1B 79 */	or. r4, r3, r3
/* 801343E8 00131328  41 82 00 0C */	beq .L_801343F4
/* 801343EC 0013132C  7F E3 FB 78 */	mr r3, r31
/* 801343F0 00131330  4B FF FE 09 */	bl releaseRec__8CollTreeFP8CollPart
.L_801343F4:
/* 801343F4 00131334  80 7F 00 04 */	lwz r3, 4(r31)
/* 801343F8 00131338  7F 44 D3 78 */	mr r4, r26
/* 801343FC 0013133C  48 00 54 F1 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 80134400 00131340  28 1C 00 00 */	cmplwi r28, 0
/* 80134404 00131344  41 82 00 10 */	beq .L_80134414
/* 80134408 00131348  7F E3 FB 78 */	mr r3, r31
/* 8013440C 0013134C  7F 84 E3 78 */	mr r4, r28
/* 80134410 00131350  4B FF FD E9 */	bl releaseRec__8CollTreeFP8CollPart
.L_80134414:
/* 80134414 00131354  80 7F 00 04 */	lwz r3, 4(r31)
/* 80134418 00131358  7F 04 C3 78 */	mr r4, r24
/* 8013441C 0013135C  48 00 54 D1 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 80134420 00131360  28 19 00 00 */	cmplwi r25, 0
/* 80134424 00131364  41 82 00 48 */	beq .L_8013446C
/* 80134428 00131368  7F 23 CB 78 */	mr r3, r25
/* 8013442C 0013136C  48 00 01 1D */	bl getNext__8CollPartFv
/* 80134430 00131370  7C 7C 1B 78 */	mr r28, r3
/* 80134434 00131374  7F 23 CB 78 */	mr r3, r25
/* 80134438 00131378  48 00 01 09 */	bl getChild__8CollPartFv
/* 8013443C 0013137C  7C 64 1B 79 */	or. r4, r3, r3
/* 80134440 00131380  41 82 00 0C */	beq .L_8013444C
/* 80134444 00131384  7F E3 FB 78 */	mr r3, r31
/* 80134448 00131388  4B FF FD B1 */	bl releaseRec__8CollTreeFP8CollPart
.L_8013444C:
/* 8013444C 0013138C  80 7F 00 04 */	lwz r3, 4(r31)
/* 80134450 00131390  7F 24 CB 78 */	mr r4, r25
/* 80134454 00131394  48 00 54 99 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 80134458 00131398  28 1C 00 00 */	cmplwi r28, 0
/* 8013445C 0013139C  41 82 00 10 */	beq .L_8013446C
/* 80134460 001313A0  7F E3 FB 78 */	mr r3, r31
/* 80134464 001313A4  7F 84 E3 78 */	mr r4, r28
/* 80134468 001313A8  4B FF FD 91 */	bl releaseRec__8CollTreeFP8CollPart
.L_8013446C:
/* 8013446C 001313AC  80 7F 00 04 */	lwz r3, 4(r31)
/* 80134470 001313B0  7F C4 F3 78 */	mr r4, r30
/* 80134474 001313B4  48 00 54 79 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 80134478 001313B8  28 17 00 00 */	cmplwi r23, 0
/* 8013447C 001313BC  41 82 00 B0 */	beq .L_8013452C
/* 80134480 001313C0  83 37 00 10 */	lwz r25, 0x10(r23)
/* 80134484 001313C4  83 17 00 04 */	lwz r24, 4(r23)
/* 80134488 001313C8  28 19 00 00 */	cmplwi r25, 0
/* 8013448C 001313CC  41 82 00 48 */	beq .L_801344D4
/* 80134490 001313D0  7F 23 CB 78 */	mr r3, r25
/* 80134494 001313D4  48 00 00 B5 */	bl getNext__8CollPartFv
/* 80134498 001313D8  7C 7C 1B 78 */	mr r28, r3
/* 8013449C 001313DC  7F 23 CB 78 */	mr r3, r25
/* 801344A0 001313E0  48 00 00 A1 */	bl getChild__8CollPartFv
/* 801344A4 001313E4  7C 64 1B 79 */	or. r4, r3, r3
/* 801344A8 001313E8  41 82 00 0C */	beq .L_801344B4
/* 801344AC 001313EC  7F E3 FB 78 */	mr r3, r31
/* 801344B0 001313F0  4B FF FD 49 */	bl releaseRec__8CollTreeFP8CollPart
.L_801344B4:
/* 801344B4 001313F4  80 7F 00 04 */	lwz r3, 4(r31)
/* 801344B8 001313F8  7F 24 CB 78 */	mr r4, r25
/* 801344BC 001313FC  48 00 54 31 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 801344C0 00131400  28 1C 00 00 */	cmplwi r28, 0
/* 801344C4 00131404  41 82 00 10 */	beq .L_801344D4
/* 801344C8 00131408  7F E3 FB 78 */	mr r3, r31
/* 801344CC 0013140C  7F 84 E3 78 */	mr r4, r28
/* 801344D0 00131410  4B FF FD 29 */	bl releaseRec__8CollTreeFP8CollPart
.L_801344D4:
/* 801344D4 00131414  80 7F 00 04 */	lwz r3, 4(r31)
/* 801344D8 00131418  7E E4 BB 78 */	mr r4, r23
/* 801344DC 0013141C  48 00 54 11 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 801344E0 00131420  28 18 00 00 */	cmplwi r24, 0
/* 801344E4 00131424  41 82 00 48 */	beq .L_8013452C
/* 801344E8 00131428  7F 03 C3 78 */	mr r3, r24
/* 801344EC 0013142C  48 00 00 5D */	bl getNext__8CollPartFv
/* 801344F0 00131430  7C 7C 1B 78 */	mr r28, r3
/* 801344F4 00131434  7F 03 C3 78 */	mr r3, r24
/* 801344F8 00131438  48 00 00 49 */	bl getChild__8CollPartFv
/* 801344FC 0013143C  7C 64 1B 79 */	or. r4, r3, r3
/* 80134500 00131440  41 82 00 0C */	beq .L_8013450C
/* 80134504 00131444  7F E3 FB 78 */	mr r3, r31
/* 80134508 00131448  4B FF FC F1 */	bl releaseRec__8CollTreeFP8CollPart
.L_8013450C:
/* 8013450C 0013144C  80 7F 00 04 */	lwz r3, 4(r31)
/* 80134510 00131450  7F 04 C3 78 */	mr r4, r24
/* 80134514 00131454  48 00 53 D9 */	bl "kill__24MonoObjectMgr<8CollPart>FP8CollPart"
/* 80134518 00131458  28 1C 00 00 */	cmplwi r28, 0
/* 8013451C 0013145C  41 82 00 10 */	beq .L_8013452C
/* 80134520 00131460  7F E3 FB 78 */	mr r3, r31
/* 80134524 00131464  7F 84 E3 78 */	mr r4, r28
/* 80134528 00131468  4B FF FC D1 */	bl releaseRec__8CollTreeFP8CollPart
.L_8013452C:
/* 8013452C 0013146C  BA E1 00 0C */	lmw r23, 0xc(r1)
/* 80134530 00131470  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80134534 00131474  7C 08 03 A6 */	mtlr r0
/* 80134538 00131478  38 21 00 30 */	addi r1, r1, 0x30
/* 8013453C 0013147C  4E 80 00 20 */	blr 
.endfn releaseRec__8CollTreeFP8CollPart

.fn getChild__8CollPartFv, weak
/* 80134540 00131480  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80134544 00131484  4E 80 00 20 */	blr 
.endfn getChild__8CollPartFv

.fn getNext__8CollPartFv, weak
/* 80134548 00131488  80 63 00 04 */	lwz r3, 4(r3)
/* 8013454C 0013148C  4E 80 00 20 */	blr 
.endfn getNext__8CollPartFv

.fn "checkCollision__8CollTreeFP8CollTreePP8CollPartPP8CollPartR10Vector3<f>", global
/* 80134550 00131490  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134554 00131494  7C 08 02 A6 */	mflr r0
/* 80134558 00131498  7C 89 23 78 */	mr r9, r4
/* 8013455C 0013149C  7C E8 3B 78 */	mr r8, r7
/* 80134560 001314A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134564 001314A4  7C C0 33 78 */	mr r0, r6
/* 80134568 001314A8  7C A6 2B 78 */	mr r6, r5
/* 8013456C 001314AC  80 83 00 00 */	lwz r4, 0(r3)
/* 80134570 001314B0  7C 07 03 78 */	mr r7, r0
/* 80134574 001314B4  80 A9 00 00 */	lwz r5, 0(r9)
/* 80134578 001314B8  48 00 00 15 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 8013457C 001314BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134580 001314C0  7C 08 03 A6 */	mtlr r0
/* 80134584 001314C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80134588 001314C8  4E 80 00 20 */	blr 
.endfn "checkCollision__8CollTreeFP8CollTreePP8CollPartPP8CollPartR10Vector3<f>"

.fn "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>", global
/* 8013458C 001314CC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80134590 001314D0  7C 08 02 A6 */	mflr r0
/* 80134594 001314D4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80134598 001314D8  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8013459C 001314DC  7C 99 23 79 */	or. r25, r4, r4
/* 801345A0 001314E0  7C 7C 1B 78 */	mr r28, r3
/* 801345A4 001314E4  7C BA 2B 78 */	mr r26, r5
/* 801345A8 001314E8  7C DF 33 78 */	mr r31, r6
/* 801345AC 001314EC  7C FD 3B 78 */	mr r29, r7
/* 801345B0 001314F0  7D 1E 43 78 */	mr r30, r8
/* 801345B4 001314F4  41 82 00 0C */	beq .L_801345C0
/* 801345B8 001314F8  28 1A 00 00 */	cmplwi r26, 0
/* 801345BC 001314FC  40 82 00 0C */	bne .L_801345C8
.L_801345C0:
/* 801345C0 00131500  38 60 00 00 */	li r3, 0
/* 801345C4 00131504  48 00 05 B8 */	b .L_80134B7C
.L_801345C8:
/* 801345C8 00131508  7F 23 CB 78 */	mr r3, r25
/* 801345CC 0013150C  7F 44 D3 78 */	mr r4, r26
/* 801345D0 00131510  7F C5 F3 78 */	mr r5, r30
/* 801345D4 00131514  48 00 13 19 */	bl "collide__8CollPartFP8CollPartR10Vector3<f>"
/* 801345D8 00131518  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801345DC 0013151C  41 82 02 FC */	beq .L_801348D8
/* 801345E0 00131520  83 79 00 10 */	lwz r27, 0x10(r25)
/* 801345E4 00131524  38 60 00 00 */	li r3, 0
/* 801345E8 00131528  28 1B 00 00 */	cmplwi r27, 0
/* 801345EC 0013152C  41 82 00 18 */	beq .L_80134604
/* 801345F0 00131530  88 19 00 58 */	lbz r0, 0x58(r25)
/* 801345F4 00131534  28 00 00 01 */	cmplwi r0, 1
/* 801345F8 00131538  41 82 00 0C */	beq .L_80134604
/* 801345FC 0013153C  28 00 00 02 */	cmplwi r0, 2
/* 80134600 00131540  40 82 00 08 */	bne .L_80134608
.L_80134604:
/* 80134604 00131544  38 60 00 01 */	li r3, 1
.L_80134608:
/* 80134608 00131548  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013460C 0013154C  41 82 00 44 */	beq .L_80134650
/* 80134610 00131550  80 1A 00 10 */	lwz r0, 0x10(r26)
/* 80134614 00131554  38 60 00 00 */	li r3, 0
/* 80134618 00131558  28 00 00 00 */	cmplwi r0, 0
/* 8013461C 0013155C  41 82 00 18 */	beq .L_80134634
/* 80134620 00131560  88 1A 00 58 */	lbz r0, 0x58(r26)
/* 80134624 00131564  28 00 00 01 */	cmplwi r0, 1
/* 80134628 00131568  41 82 00 0C */	beq .L_80134634
/* 8013462C 0013156C  28 00 00 02 */	cmplwi r0, 2
/* 80134630 00131570  40 82 00 08 */	bne .L_80134638
.L_80134634:
/* 80134634 00131574  38 60 00 01 */	li r3, 1
.L_80134638:
/* 80134638 00131578  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013463C 0013157C  41 82 00 14 */	beq .L_80134650
/* 80134640 00131580  93 3F 00 00 */	stw r25, 0(r31)
/* 80134644 00131584  38 60 00 01 */	li r3, 1
/* 80134648 00131588  93 5D 00 00 */	stw r26, 0(r29)
/* 8013464C 0013158C  48 00 05 30 */	b .L_80134B7C
.L_80134650:
/* 80134650 00131590  28 1B 00 00 */	cmplwi r27, 0
/* 80134654 00131594  41 82 01 40 */	beq .L_80134794
/* 80134658 00131598  41 82 00 0C */	beq .L_80134664
/* 8013465C 0013159C  28 1A 00 00 */	cmplwi r26, 0
/* 80134660 001315A0  40 82 00 0C */	bne .L_8013466C
.L_80134664:
/* 80134664 001315A4  38 60 00 00 */	li r3, 0
/* 80134668 001315A8  48 00 05 14 */	b .L_80134B7C
.L_8013466C:
/* 8013466C 001315AC  7F 63 DB 78 */	mr r3, r27
/* 80134670 001315B0  7F 44 D3 78 */	mr r4, r26
/* 80134674 001315B4  7F C5 F3 78 */	mr r5, r30
/* 80134678 001315B8  48 00 12 75 */	bl "collide__8CollPartFP8CollPartR10Vector3<f>"
/* 8013467C 001315BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134680 001315C0  41 82 00 94 */	beq .L_80134714
/* 80134684 001315C4  7F 63 DB 78 */	mr r3, r27
/* 80134688 001315C8  48 00 05 19 */	bl isPrim__8CollPartFv
/* 8013468C 001315CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134690 001315D0  41 82 00 24 */	beq .L_801346B4
/* 80134694 001315D4  7F 43 D3 78 */	mr r3, r26
/* 80134698 001315D8  48 00 05 09 */	bl isPrim__8CollPartFv
/* 8013469C 001315DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801346A0 001315E0  41 82 00 14 */	beq .L_801346B4
/* 801346A4 001315E4  93 7F 00 00 */	stw r27, 0(r31)
/* 801346A8 001315E8  38 60 00 01 */	li r3, 1
/* 801346AC 001315EC  93 5D 00 00 */	stw r26, 0(r29)
/* 801346B0 001315F0  48 00 04 CC */	b .L_80134B7C
.L_801346B4:
/* 801346B4 001315F4  7F 63 DB 78 */	mr r3, r27
/* 801346B8 001315F8  48 00 04 D9 */	bl isLeaf__8CollPartFv
/* 801346BC 001315FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801346C0 00131600  40 82 00 2C */	bne .L_801346EC
/* 801346C4 00131604  7F 63 DB 78 */	mr r3, r27
/* 801346C8 00131608  4B FF FE 79 */	bl getChild__8CollPartFv
/* 801346CC 0013160C  7C 64 1B 78 */	mr r4, r3
/* 801346D0 00131610  7F 83 E3 78 */	mr r3, r28
/* 801346D4 00131614  7F 45 D3 78 */	mr r5, r26
/* 801346D8 00131618  7F E6 FB 78 */	mr r6, r31
/* 801346DC 0013161C  7F A7 EB 78 */	mr r7, r29
/* 801346E0 00131620  7F C8 F3 78 */	mr r8, r30
/* 801346E4 00131624  4B FF FE A9 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 801346E8 00131628  48 00 04 94 */	b .L_80134B7C
.L_801346EC:
/* 801346EC 0013162C  7F 43 D3 78 */	mr r3, r26
/* 801346F0 00131630  4B FF FE 51 */	bl getChild__8CollPartFv
/* 801346F4 00131634  7C 65 1B 78 */	mr r5, r3
/* 801346F8 00131638  7F 83 E3 78 */	mr r3, r28
/* 801346FC 0013163C  7F 64 DB 78 */	mr r4, r27
/* 80134700 00131640  7F E6 FB 78 */	mr r6, r31
/* 80134704 00131644  7F A7 EB 78 */	mr r7, r29
/* 80134708 00131648  7F C8 F3 78 */	mr r8, r30
/* 8013470C 0013164C  4B FF FE 81 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 80134710 00131650  48 00 04 6C */	b .L_80134B7C
.L_80134714:
/* 80134714 00131654  7F 63 DB 78 */	mr r3, r27
/* 80134718 00131658  4B FF FE 31 */	bl getNext__8CollPartFv
/* 8013471C 0013165C  28 03 00 00 */	cmplwi r3, 0
/* 80134720 00131660  41 82 00 2C */	beq .L_8013474C
/* 80134724 00131664  7F 63 DB 78 */	mr r3, r27
/* 80134728 00131668  4B FF FE 21 */	bl getNext__8CollPartFv
/* 8013472C 0013166C  7C 64 1B 78 */	mr r4, r3
/* 80134730 00131670  7F 83 E3 78 */	mr r3, r28
/* 80134734 00131674  7F 45 D3 78 */	mr r5, r26
/* 80134738 00131678  7F E6 FB 78 */	mr r6, r31
/* 8013473C 0013167C  7F A7 EB 78 */	mr r7, r29
/* 80134740 00131680  7F C8 F3 78 */	mr r8, r30
/* 80134744 00131684  4B FF FE 49 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 80134748 00131688  48 00 04 34 */	b .L_80134B7C
.L_8013474C:
/* 8013474C 0013168C  7F 43 D3 78 */	mr r3, r26
/* 80134750 00131690  4B FF FD F9 */	bl getNext__8CollPartFv
/* 80134754 00131694  28 03 00 00 */	cmplwi r3, 0
/* 80134758 00131698  41 82 00 2C */	beq .L_80134784
/* 8013475C 0013169C  7F 43 D3 78 */	mr r3, r26
/* 80134760 001316A0  4B FF FD E9 */	bl getNext__8CollPartFv
/* 80134764 001316A4  7C 65 1B 78 */	mr r5, r3
/* 80134768 001316A8  7F 83 E3 78 */	mr r3, r28
/* 8013476C 001316AC  7F 64 DB 78 */	mr r4, r27
/* 80134770 001316B0  7F E6 FB 78 */	mr r6, r31
/* 80134774 001316B4  7F A7 EB 78 */	mr r7, r29
/* 80134778 001316B8  7F C8 F3 78 */	mr r8, r30
/* 8013477C 001316BC  4B FF FE 11 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 80134780 001316C0  48 00 03 FC */	b .L_80134B7C
.L_80134784:
/* 80134784 001316C4  38 60 00 00 */	li r3, 0
/* 80134788 001316C8  90 7F 00 00 */	stw r3, 0(r31)
/* 8013478C 001316CC  90 7D 00 00 */	stw r3, 0(r29)
/* 80134790 001316D0  48 00 03 EC */	b .L_80134B7C
.L_80134794:
/* 80134794 001316D4  28 19 00 00 */	cmplwi r25, 0
/* 80134798 001316D8  83 5A 00 10 */	lwz r26, 0x10(r26)
/* 8013479C 001316DC  41 82 00 0C */	beq .L_801347A8
/* 801347A0 001316E0  28 1A 00 00 */	cmplwi r26, 0
/* 801347A4 001316E4  40 82 00 0C */	bne .L_801347B0
.L_801347A8:
/* 801347A8 001316E8  38 60 00 00 */	li r3, 0
/* 801347AC 001316EC  48 00 03 D0 */	b .L_80134B7C
.L_801347B0:
/* 801347B0 001316F0  7F 23 CB 78 */	mr r3, r25
/* 801347B4 001316F4  7F 44 D3 78 */	mr r4, r26
/* 801347B8 001316F8  7F C5 F3 78 */	mr r5, r30
/* 801347BC 001316FC  48 00 11 31 */	bl "collide__8CollPartFP8CollPartR10Vector3<f>"
/* 801347C0 00131700  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801347C4 00131704  41 82 00 94 */	beq .L_80134858
/* 801347C8 00131708  7F 23 CB 78 */	mr r3, r25
/* 801347CC 0013170C  48 00 03 D5 */	bl isPrim__8CollPartFv
/* 801347D0 00131710  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801347D4 00131714  41 82 00 24 */	beq .L_801347F8
/* 801347D8 00131718  7F 43 D3 78 */	mr r3, r26
/* 801347DC 0013171C  48 00 03 C5 */	bl isPrim__8CollPartFv
/* 801347E0 00131720  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801347E4 00131724  41 82 00 14 */	beq .L_801347F8
/* 801347E8 00131728  93 3F 00 00 */	stw r25, 0(r31)
/* 801347EC 0013172C  38 60 00 01 */	li r3, 1
/* 801347F0 00131730  93 5D 00 00 */	stw r26, 0(r29)
/* 801347F4 00131734  48 00 03 88 */	b .L_80134B7C
.L_801347F8:
/* 801347F8 00131738  7F 23 CB 78 */	mr r3, r25
/* 801347FC 0013173C  48 00 03 95 */	bl isLeaf__8CollPartFv
/* 80134800 00131740  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134804 00131744  40 82 00 2C */	bne .L_80134830
/* 80134808 00131748  7F 23 CB 78 */	mr r3, r25
/* 8013480C 0013174C  4B FF FD 35 */	bl getChild__8CollPartFv
/* 80134810 00131750  7C 64 1B 78 */	mr r4, r3
/* 80134814 00131754  7F 83 E3 78 */	mr r3, r28
/* 80134818 00131758  7F 45 D3 78 */	mr r5, r26
/* 8013481C 0013175C  7F E6 FB 78 */	mr r6, r31
/* 80134820 00131760  7F A7 EB 78 */	mr r7, r29
/* 80134824 00131764  7F C8 F3 78 */	mr r8, r30
/* 80134828 00131768  4B FF FD 65 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 8013482C 0013176C  48 00 03 50 */	b .L_80134B7C
.L_80134830:
/* 80134830 00131770  7F 43 D3 78 */	mr r3, r26
/* 80134834 00131774  4B FF FD 0D */	bl getChild__8CollPartFv
/* 80134838 00131778  7C 65 1B 78 */	mr r5, r3
/* 8013483C 0013177C  7F 83 E3 78 */	mr r3, r28
/* 80134840 00131780  7F 24 CB 78 */	mr r4, r25
/* 80134844 00131784  7F E6 FB 78 */	mr r6, r31
/* 80134848 00131788  7F A7 EB 78 */	mr r7, r29
/* 8013484C 0013178C  7F C8 F3 78 */	mr r8, r30
/* 80134850 00131790  4B FF FD 3D */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 80134854 00131794  48 00 03 28 */	b .L_80134B7C
.L_80134858:
/* 80134858 00131798  7F 23 CB 78 */	mr r3, r25
/* 8013485C 0013179C  4B FF FC ED */	bl getNext__8CollPartFv
/* 80134860 001317A0  28 03 00 00 */	cmplwi r3, 0
/* 80134864 001317A4  41 82 00 2C */	beq .L_80134890
/* 80134868 001317A8  7F 23 CB 78 */	mr r3, r25
/* 8013486C 001317AC  4B FF FC DD */	bl getNext__8CollPartFv
/* 80134870 001317B0  7C 64 1B 78 */	mr r4, r3
/* 80134874 001317B4  7F 83 E3 78 */	mr r3, r28
/* 80134878 001317B8  7F 45 D3 78 */	mr r5, r26
/* 8013487C 001317BC  7F E6 FB 78 */	mr r6, r31
/* 80134880 001317C0  7F A7 EB 78 */	mr r7, r29
/* 80134884 001317C4  7F C8 F3 78 */	mr r8, r30
/* 80134888 001317C8  4B FF FD 05 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 8013488C 001317CC  48 00 02 F0 */	b .L_80134B7C
.L_80134890:
/* 80134890 001317D0  7F 43 D3 78 */	mr r3, r26
/* 80134894 001317D4  4B FF FC B5 */	bl getNext__8CollPartFv
/* 80134898 001317D8  28 03 00 00 */	cmplwi r3, 0
/* 8013489C 001317DC  41 82 00 2C */	beq .L_801348C8
/* 801348A0 001317E0  7F 43 D3 78 */	mr r3, r26
/* 801348A4 001317E4  4B FF FC A5 */	bl getNext__8CollPartFv
/* 801348A8 001317E8  7C 65 1B 78 */	mr r5, r3
/* 801348AC 001317EC  7F 83 E3 78 */	mr r3, r28
/* 801348B0 001317F0  7F 24 CB 78 */	mr r4, r25
/* 801348B4 001317F4  7F E6 FB 78 */	mr r6, r31
/* 801348B8 001317F8  7F A7 EB 78 */	mr r7, r29
/* 801348BC 001317FC  7F C8 F3 78 */	mr r8, r30
/* 801348C0 00131800  4B FF FC CD */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 801348C4 00131804  48 00 02 B8 */	b .L_80134B7C
.L_801348C8:
/* 801348C8 00131808  38 60 00 00 */	li r3, 0
/* 801348CC 0013180C  90 7F 00 00 */	stw r3, 0(r31)
/* 801348D0 00131810  90 7D 00 00 */	stw r3, 0(r29)
/* 801348D4 00131814  48 00 02 A8 */	b .L_80134B7C
.L_801348D8:
/* 801348D8 00131818  83 79 00 04 */	lwz r27, 4(r25)
/* 801348DC 0013181C  28 1B 00 00 */	cmplwi r27, 0
/* 801348E0 00131820  41 82 01 40 */	beq .L_80134A20
/* 801348E4 00131824  41 82 00 0C */	beq .L_801348F0
/* 801348E8 00131828  28 1A 00 00 */	cmplwi r26, 0
/* 801348EC 0013182C  40 82 00 0C */	bne .L_801348F8
.L_801348F0:
/* 801348F0 00131830  38 60 00 00 */	li r3, 0
/* 801348F4 00131834  48 00 02 88 */	b .L_80134B7C
.L_801348F8:
/* 801348F8 00131838  7F 63 DB 78 */	mr r3, r27
/* 801348FC 0013183C  7F 44 D3 78 */	mr r4, r26
/* 80134900 00131840  7F C5 F3 78 */	mr r5, r30
/* 80134904 00131844  48 00 0F E9 */	bl "collide__8CollPartFP8CollPartR10Vector3<f>"
/* 80134908 00131848  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013490C 0013184C  41 82 00 94 */	beq .L_801349A0
/* 80134910 00131850  7F 63 DB 78 */	mr r3, r27
/* 80134914 00131854  48 00 02 8D */	bl isPrim__8CollPartFv
/* 80134918 00131858  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013491C 0013185C  41 82 00 24 */	beq .L_80134940
/* 80134920 00131860  7F 43 D3 78 */	mr r3, r26
/* 80134924 00131864  48 00 02 7D */	bl isPrim__8CollPartFv
/* 80134928 00131868  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013492C 0013186C  41 82 00 14 */	beq .L_80134940
/* 80134930 00131870  93 7F 00 00 */	stw r27, 0(r31)
/* 80134934 00131874  38 60 00 01 */	li r3, 1
/* 80134938 00131878  93 5D 00 00 */	stw r26, 0(r29)
/* 8013493C 0013187C  48 00 02 40 */	b .L_80134B7C
.L_80134940:
/* 80134940 00131880  7F 63 DB 78 */	mr r3, r27
/* 80134944 00131884  48 00 02 4D */	bl isLeaf__8CollPartFv
/* 80134948 00131888  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013494C 0013188C  40 82 00 2C */	bne .L_80134978
/* 80134950 00131890  7F 63 DB 78 */	mr r3, r27
/* 80134954 00131894  4B FF FB ED */	bl getChild__8CollPartFv
/* 80134958 00131898  7C 64 1B 78 */	mr r4, r3
/* 8013495C 0013189C  7F 83 E3 78 */	mr r3, r28
/* 80134960 001318A0  7F 45 D3 78 */	mr r5, r26
/* 80134964 001318A4  7F E6 FB 78 */	mr r6, r31
/* 80134968 001318A8  7F A7 EB 78 */	mr r7, r29
/* 8013496C 001318AC  7F C8 F3 78 */	mr r8, r30
/* 80134970 001318B0  4B FF FC 1D */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 80134974 001318B4  48 00 02 08 */	b .L_80134B7C
.L_80134978:
/* 80134978 001318B8  7F 43 D3 78 */	mr r3, r26
/* 8013497C 001318BC  4B FF FB C5 */	bl getChild__8CollPartFv
/* 80134980 001318C0  7C 65 1B 78 */	mr r5, r3
/* 80134984 001318C4  7F 83 E3 78 */	mr r3, r28
/* 80134988 001318C8  7F 64 DB 78 */	mr r4, r27
/* 8013498C 001318CC  7F E6 FB 78 */	mr r6, r31
/* 80134990 001318D0  7F A7 EB 78 */	mr r7, r29
/* 80134994 001318D4  7F C8 F3 78 */	mr r8, r30
/* 80134998 001318D8  4B FF FB F5 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 8013499C 001318DC  48 00 01 E0 */	b .L_80134B7C
.L_801349A0:
/* 801349A0 001318E0  7F 63 DB 78 */	mr r3, r27
/* 801349A4 001318E4  4B FF FB A5 */	bl getNext__8CollPartFv
/* 801349A8 001318E8  28 03 00 00 */	cmplwi r3, 0
/* 801349AC 001318EC  41 82 00 2C */	beq .L_801349D8
/* 801349B0 001318F0  7F 63 DB 78 */	mr r3, r27
/* 801349B4 001318F4  4B FF FB 95 */	bl getNext__8CollPartFv
/* 801349B8 001318F8  7C 64 1B 78 */	mr r4, r3
/* 801349BC 001318FC  7F 83 E3 78 */	mr r3, r28
/* 801349C0 00131900  7F 45 D3 78 */	mr r5, r26
/* 801349C4 00131904  7F E6 FB 78 */	mr r6, r31
/* 801349C8 00131908  7F A7 EB 78 */	mr r7, r29
/* 801349CC 0013190C  7F C8 F3 78 */	mr r8, r30
/* 801349D0 00131910  4B FF FB BD */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 801349D4 00131914  48 00 01 A8 */	b .L_80134B7C
.L_801349D8:
/* 801349D8 00131918  7F 43 D3 78 */	mr r3, r26
/* 801349DC 0013191C  4B FF FB 6D */	bl getNext__8CollPartFv
/* 801349E0 00131920  28 03 00 00 */	cmplwi r3, 0
/* 801349E4 00131924  41 82 00 2C */	beq .L_80134A10
/* 801349E8 00131928  7F 43 D3 78 */	mr r3, r26
/* 801349EC 0013192C  4B FF FB 5D */	bl getNext__8CollPartFv
/* 801349F0 00131930  7C 65 1B 78 */	mr r5, r3
/* 801349F4 00131934  7F 83 E3 78 */	mr r3, r28
/* 801349F8 00131938  7F 64 DB 78 */	mr r4, r27
/* 801349FC 0013193C  7F E6 FB 78 */	mr r6, r31
/* 80134A00 00131940  7F A7 EB 78 */	mr r7, r29
/* 80134A04 00131944  7F C8 F3 78 */	mr r8, r30
/* 80134A08 00131948  4B FF FB 85 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 80134A0C 0013194C  48 00 01 70 */	b .L_80134B7C
.L_80134A10:
/* 80134A10 00131950  38 60 00 00 */	li r3, 0
/* 80134A14 00131954  90 7F 00 00 */	stw r3, 0(r31)
/* 80134A18 00131958  90 7D 00 00 */	stw r3, 0(r29)
/* 80134A1C 0013195C  48 00 01 60 */	b .L_80134B7C
.L_80134A20:
/* 80134A20 00131960  83 5A 00 04 */	lwz r26, 4(r26)
/* 80134A24 00131964  28 1A 00 00 */	cmplwi r26, 0
/* 80134A28 00131968  41 82 01 44 */	beq .L_80134B6C
/* 80134A2C 0013196C  28 19 00 00 */	cmplwi r25, 0
/* 80134A30 00131970  41 82 00 0C */	beq .L_80134A3C
/* 80134A34 00131974  28 1A 00 00 */	cmplwi r26, 0
/* 80134A38 00131978  40 82 00 0C */	bne .L_80134A44
.L_80134A3C:
/* 80134A3C 0013197C  38 60 00 00 */	li r3, 0
/* 80134A40 00131980  48 00 01 3C */	b .L_80134B7C
.L_80134A44:
/* 80134A44 00131984  7F 23 CB 78 */	mr r3, r25
/* 80134A48 00131988  7F 44 D3 78 */	mr r4, r26
/* 80134A4C 0013198C  7F C5 F3 78 */	mr r5, r30
/* 80134A50 00131990  48 00 0E 9D */	bl "collide__8CollPartFP8CollPartR10Vector3<f>"
/* 80134A54 00131994  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134A58 00131998  41 82 00 94 */	beq .L_80134AEC
/* 80134A5C 0013199C  7F 23 CB 78 */	mr r3, r25
/* 80134A60 001319A0  48 00 01 41 */	bl isPrim__8CollPartFv
/* 80134A64 001319A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134A68 001319A8  41 82 00 24 */	beq .L_80134A8C
/* 80134A6C 001319AC  7F 43 D3 78 */	mr r3, r26
/* 80134A70 001319B0  48 00 01 31 */	bl isPrim__8CollPartFv
/* 80134A74 001319B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134A78 001319B8  41 82 00 14 */	beq .L_80134A8C
/* 80134A7C 001319BC  93 3F 00 00 */	stw r25, 0(r31)
/* 80134A80 001319C0  38 60 00 01 */	li r3, 1
/* 80134A84 001319C4  93 5D 00 00 */	stw r26, 0(r29)
/* 80134A88 001319C8  48 00 00 F4 */	b .L_80134B7C
.L_80134A8C:
/* 80134A8C 001319CC  7F 23 CB 78 */	mr r3, r25
/* 80134A90 001319D0  48 00 01 01 */	bl isLeaf__8CollPartFv
/* 80134A94 001319D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134A98 001319D8  40 82 00 2C */	bne .L_80134AC4
/* 80134A9C 001319DC  7F 23 CB 78 */	mr r3, r25
/* 80134AA0 001319E0  4B FF FA A1 */	bl getChild__8CollPartFv
/* 80134AA4 001319E4  7C 64 1B 78 */	mr r4, r3
/* 80134AA8 001319E8  7F 83 E3 78 */	mr r3, r28
/* 80134AAC 001319EC  7F 45 D3 78 */	mr r5, r26
/* 80134AB0 001319F0  7F E6 FB 78 */	mr r6, r31
/* 80134AB4 001319F4  7F A7 EB 78 */	mr r7, r29
/* 80134AB8 001319F8  7F C8 F3 78 */	mr r8, r30
/* 80134ABC 001319FC  4B FF FA D1 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 80134AC0 00131A00  48 00 00 BC */	b .L_80134B7C
.L_80134AC4:
/* 80134AC4 00131A04  7F 43 D3 78 */	mr r3, r26
/* 80134AC8 00131A08  4B FF FA 79 */	bl getChild__8CollPartFv
/* 80134ACC 00131A0C  7C 65 1B 78 */	mr r5, r3
/* 80134AD0 00131A10  7F 83 E3 78 */	mr r3, r28
/* 80134AD4 00131A14  7F 24 CB 78 */	mr r4, r25
/* 80134AD8 00131A18  7F E6 FB 78 */	mr r6, r31
/* 80134ADC 00131A1C  7F A7 EB 78 */	mr r7, r29
/* 80134AE0 00131A20  7F C8 F3 78 */	mr r8, r30
/* 80134AE4 00131A24  4B FF FA A9 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 80134AE8 00131A28  48 00 00 94 */	b .L_80134B7C
.L_80134AEC:
/* 80134AEC 00131A2C  7F 23 CB 78 */	mr r3, r25
/* 80134AF0 00131A30  4B FF FA 59 */	bl getNext__8CollPartFv
/* 80134AF4 00131A34  28 03 00 00 */	cmplwi r3, 0
/* 80134AF8 00131A38  41 82 00 2C */	beq .L_80134B24
/* 80134AFC 00131A3C  7F 23 CB 78 */	mr r3, r25
/* 80134B00 00131A40  4B FF FA 49 */	bl getNext__8CollPartFv
/* 80134B04 00131A44  7C 64 1B 78 */	mr r4, r3
/* 80134B08 00131A48  7F 83 E3 78 */	mr r3, r28
/* 80134B0C 00131A4C  7F 45 D3 78 */	mr r5, r26
/* 80134B10 00131A50  7F E6 FB 78 */	mr r6, r31
/* 80134B14 00131A54  7F A7 EB 78 */	mr r7, r29
/* 80134B18 00131A58  7F C8 F3 78 */	mr r8, r30
/* 80134B1C 00131A5C  4B FF FA 71 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 80134B20 00131A60  48 00 00 5C */	b .L_80134B7C
.L_80134B24:
/* 80134B24 00131A64  7F 43 D3 78 */	mr r3, r26
/* 80134B28 00131A68  4B FF FA 21 */	bl getNext__8CollPartFv
/* 80134B2C 00131A6C  28 03 00 00 */	cmplwi r3, 0
/* 80134B30 00131A70  41 82 00 2C */	beq .L_80134B5C
/* 80134B34 00131A74  7F 43 D3 78 */	mr r3, r26
/* 80134B38 00131A78  4B FF FA 11 */	bl getNext__8CollPartFv
/* 80134B3C 00131A7C  7C 65 1B 78 */	mr r5, r3
/* 80134B40 00131A80  7F 83 E3 78 */	mr r3, r28
/* 80134B44 00131A84  7F 24 CB 78 */	mr r4, r25
/* 80134B48 00131A88  7F E6 FB 78 */	mr r6, r31
/* 80134B4C 00131A8C  7F A7 EB 78 */	mr r7, r29
/* 80134B50 00131A90  7F C8 F3 78 */	mr r8, r30
/* 80134B54 00131A94  4B FF FA 39 */	bl "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"
/* 80134B58 00131A98  48 00 00 24 */	b .L_80134B7C
.L_80134B5C:
/* 80134B5C 00131A9C  38 60 00 00 */	li r3, 0
/* 80134B60 00131AA0  90 7F 00 00 */	stw r3, 0(r31)
/* 80134B64 00131AA4  90 7D 00 00 */	stw r3, 0(r29)
/* 80134B68 00131AA8  48 00 00 14 */	b .L_80134B7C
.L_80134B6C:
/* 80134B6C 00131AAC  38 00 00 00 */	li r0, 0
/* 80134B70 00131AB0  38 60 00 00 */	li r3, 0
/* 80134B74 00131AB4  90 1F 00 00 */	stw r0, 0(r31)
/* 80134B78 00131AB8  90 1D 00 00 */	stw r0, 0(r29)
.L_80134B7C:
/* 80134B7C 00131ABC  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 80134B80 00131AC0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80134B84 00131AC4  7C 08 03 A6 */	mtlr r0
/* 80134B88 00131AC8  38 21 00 30 */	addi r1, r1, 0x30
/* 80134B8C 00131ACC  4E 80 00 20 */	blr 
.endfn "checkCollisionRec__8CollTreeFP8CollPartP8CollPartPP8CollPartPP8CollPartR10Vector3<f>"

.fn isLeaf__8CollPartFv, weak
/* 80134B90 00131AD0  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80134B94 00131AD4  7C 00 00 34 */	cntlzw r0, r0
/* 80134B98 00131AD8  54 03 D9 7E */	srwi r3, r0, 5
/* 80134B9C 00131ADC  4E 80 00 20 */	blr 
.endfn isLeaf__8CollPartFv

.fn isPrim__8CollPartFv, weak
/* 80134BA0 00131AE0  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80134BA4 00131AE4  38 80 00 00 */	li r4, 0
/* 80134BA8 00131AE8  28 00 00 00 */	cmplwi r0, 0
/* 80134BAC 00131AEC  41 82 00 18 */	beq .L_80134BC4
/* 80134BB0 00131AF0  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80134BB4 00131AF4  28 00 00 01 */	cmplwi r0, 1
/* 80134BB8 00131AF8  41 82 00 0C */	beq .L_80134BC4
/* 80134BBC 00131AFC  28 00 00 02 */	cmplwi r0, 2
/* 80134BC0 00131B00  40 82 00 08 */	bne .L_80134BC8
.L_80134BC4:
/* 80134BC4 00131B04  38 80 00 01 */	li r4, 1
.L_80134BC8:
/* 80134BC8 00131B08  7C 83 23 78 */	mr r3, r4
/* 80134BCC 00131B0C  4E 80 00 20 */	blr 
.endfn isPrim__8CollPartFv

.fn "checkCollision__8CollTreeFRQ23Sys6SphereP22IDelegate1<P8CollPart>", global
/* 80134BD0 00131B10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134BD4 00131B14  7C 08 02 A6 */	mflr r0
/* 80134BD8 00131B18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134BDC 00131B1C  80 63 00 00 */	lwz r3, 0(r3)
/* 80134BE0 00131B20  28 03 00 00 */	cmplwi r3, 0
/* 80134BE4 00131B24  41 82 00 08 */	beq .L_80134BEC
/* 80134BE8 00131B28  48 00 00 15 */	bl "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"
.L_80134BEC:
/* 80134BEC 00131B2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134BF0 00131B30  7C 08 03 A6 */	mtlr r0
/* 80134BF4 00131B34  38 21 00 10 */	addi r1, r1, 0x10
/* 80134BF8 00131B38  4E 80 00 20 */	blr 
.endfn "checkCollision__8CollTreeFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

.fn "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>", global
/* 80134BFC 00131B3C  94 21 FE 00 */	stwu r1, -0x200(r1)
/* 80134C00 00131B40  7C 08 02 A6 */	mflr r0
/* 80134C04 00131B44  90 01 02 04 */	stw r0, 0x204(r1)
/* 80134C08 00131B48  DB E1 01 F0 */	stfd f31, 0x1f0(r1)
/* 80134C0C 00131B4C  F3 E1 01 F8 */	psq_st f31, 504(r1), 0, qr0
/* 80134C10 00131B50  DB C1 01 E0 */	stfd f30, 0x1e0(r1)
/* 80134C14 00131B54  F3 C1 01 E8 */	psq_st f30, 488(r1), 0, qr0
/* 80134C18 00131B58  BF 41 01 C8 */	stmw r26, 0x1c8(r1)
/* 80134C1C 00131B5C  7C 7C 1B 78 */	mr r28, r3
/* 80134C20 00131B60  7C 9D 23 78 */	mr r29, r4
/* 80134C24 00131B64  80 E3 00 10 */	lwz r7, 0x10(r3)
/* 80134C28 00131B68  7C BE 2B 78 */	mr r30, r5
/* 80134C2C 00131B6C  38 60 00 00 */	li r3, 0
/* 80134C30 00131B70  28 07 00 00 */	cmplwi r7, 0
/* 80134C34 00131B74  41 82 00 18 */	beq .L_80134C4C
/* 80134C38 00131B78  88 1C 00 58 */	lbz r0, 0x58(r28)
/* 80134C3C 00131B7C  28 00 00 01 */	cmplwi r0, 1
/* 80134C40 00131B80  41 82 00 0C */	beq .L_80134C4C
/* 80134C44 00131B84  28 00 00 02 */	cmplwi r0, 2
/* 80134C48 00131B88  40 82 00 08 */	bne .L_80134C50
.L_80134C4C:
/* 80134C4C 00131B8C  38 60 00 01 */	li r3, 1
.L_80134C50:
/* 80134C50 00131B90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134C54 00131B94  41 82 00 E4 */	beq .L_80134D38
/* 80134C58 00131B98  88 1C 00 58 */	lbz r0, 0x58(r28)
/* 80134C5C 00131B9C  28 00 00 00 */	cmplwi r0, 0
/* 80134C60 00131BA0  40 82 00 54 */	bne .L_80134CB4
/* 80134C64 00131BA4  C0 3C 00 1C */	lfs f1, 0x1c(r28)
/* 80134C68 00131BA8  7F A4 EB 78 */	mr r4, r29
/* 80134C6C 00131BAC  C0 1C 00 4C */	lfs f0, 0x4c(r28)
/* 80134C70 00131BB0  38 61 00 D8 */	addi r3, r1, 0xd8
/* 80134C74 00131BB4  D0 01 00 D8 */	stfs f0, 0xd8(r1)
/* 80134C78 00131BB8  C0 1C 00 50 */	lfs f0, 0x50(r28)
/* 80134C7C 00131BBC  D0 01 00 DC */	stfs f0, 0xdc(r1)
/* 80134C80 00131BC0  C0 1C 00 54 */	lfs f0, 0x54(r28)
/* 80134C84 00131BC4  D0 01 00 E0 */	stfs f0, 0xe0(r1)
/* 80134C88 00131BC8  D0 21 00 E4 */	stfs f1, 0xe4(r1)
/* 80134C8C 00131BCC  48 2E 12 89 */	bl intersect__Q23Sys6SphereFRQ23Sys6Sphere
/* 80134C90 00131BD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134C94 00131BD4  41 82 00 A4 */	beq .L_80134D38
/* 80134C98 00131BD8  7F C3 F3 78 */	mr r3, r30
/* 80134C9C 00131BDC  7F 84 E3 78 */	mr r4, r28
/* 80134CA0 00131BE0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80134CA4 00131BE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80134CA8 00131BE8  7D 89 03 A6 */	mtctr r12
/* 80134CAC 00131BEC  4E 80 04 21 */	bctrl 
/* 80134CB0 00131BF0  48 00 00 88 */	b .L_80134D38
.L_80134CB4:
/* 80134CB4 00131BF4  28 00 00 01 */	cmplwi r0, 1
/* 80134CB8 00131BF8  41 82 00 0C */	beq .L_80134CC4
/* 80134CBC 00131BFC  28 00 00 02 */	cmplwi r0, 2
/* 80134CC0 00131C00  40 82 00 78 */	bne .L_80134D38
.L_80134CC4:
/* 80134CC4 00131C04  C0 47 00 1C */	lfs f2, 0x1c(r7)
/* 80134CC8 00131C08  7F A4 EB 78 */	mr r4, r29
/* 80134CCC 00131C0C  C0 3C 00 1C */	lfs f1, 0x1c(r28)
/* 80134CD0 00131C10  38 61 01 A8 */	addi r3, r1, 0x1a8
/* 80134CD4 00131C14  C0 1C 00 4C */	lfs f0, 0x4c(r28)
/* 80134CD8 00131C18  38 A1 00 CC */	addi r5, r1, 0xcc
/* 80134CDC 00131C1C  38 C1 00 20 */	addi r6, r1, 0x20
/* 80134CE0 00131C20  D0 01 01 A8 */	stfs f0, 0x1a8(r1)
/* 80134CE4 00131C24  C0 1C 00 50 */	lfs f0, 0x50(r28)
/* 80134CE8 00131C28  D0 01 01 AC */	stfs f0, 0x1ac(r1)
/* 80134CEC 00131C2C  C0 1C 00 54 */	lfs f0, 0x54(r28)
/* 80134CF0 00131C30  D0 01 01 B0 */	stfs f0, 0x1b0(r1)
/* 80134CF4 00131C34  C0 07 00 4C */	lfs f0, 0x4c(r7)
/* 80134CF8 00131C38  D0 01 01 B4 */	stfs f0, 0x1b4(r1)
/* 80134CFC 00131C3C  C0 07 00 50 */	lfs f0, 0x50(r7)
/* 80134D00 00131C40  D0 01 01 B8 */	stfs f0, 0x1b8(r1)
/* 80134D04 00131C44  C0 07 00 54 */	lfs f0, 0x54(r7)
/* 80134D08 00131C48  D0 01 01 BC */	stfs f0, 0x1bc(r1)
/* 80134D0C 00131C4C  D0 21 01 C0 */	stfs f1, 0x1c0(r1)
/* 80134D10 00131C50  D0 41 01 C4 */	stfs f2, 0x1c4(r1)
/* 80134D14 00131C54  48 2E 0E 45 */	bl "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
/* 80134D18 00131C58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134D1C 00131C5C  41 82 00 1C */	beq .L_80134D38
/* 80134D20 00131C60  7F C3 F3 78 */	mr r3, r30
/* 80134D24 00131C64  7F 84 E3 78 */	mr r4, r28
/* 80134D28 00131C68  81 9E 00 00 */	lwz r12, 0(r30)
/* 80134D2C 00131C6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80134D30 00131C70  7D 89 03 A6 */	mtctr r12
/* 80134D34 00131C74  4E 80 04 21 */	bctrl 
.L_80134D38:
/* 80134D38 00131C78  83 FC 00 10 */	lwz r31, 0x10(r28)
/* 80134D3C 00131C7C  28 1F 00 00 */	cmplwi r31, 0
/* 80134D40 00131C80  41 82 03 A4 */	beq .L_801350E4
/* 80134D44 00131C84  7F E3 FB 78 */	mr r3, r31
/* 80134D48 00131C88  3B 60 00 00 */	li r27, 0
/* 80134D4C 00131C8C  4B FF F7 F5 */	bl getChild__8CollPartFv
/* 80134D50 00131C90  28 03 00 00 */	cmplwi r3, 0
/* 80134D54 00131C94  41 82 00 24 */	beq .L_80134D78
/* 80134D58 00131C98  7F E3 FB 78 */	mr r3, r31
/* 80134D5C 00131C9C  48 00 07 F5 */	bl isTube__8CollPartFv
/* 80134D60 00131CA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134D64 00131CA4  40 82 00 14 */	bne .L_80134D78
/* 80134D68 00131CA8  7F E3 FB 78 */	mr r3, r31
/* 80134D6C 00131CAC  48 00 07 D1 */	bl isTubeTree__8CollPartFv
/* 80134D70 00131CB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134D74 00131CB4  41 82 00 08 */	beq .L_80134D7C
.L_80134D78:
/* 80134D78 00131CB8  3B 60 00 01 */	li r27, 1
.L_80134D7C:
/* 80134D7C 00131CBC  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80134D80 00131CC0  41 82 00 D4 */	beq .L_80134E54
/* 80134D84 00131CC4  88 1F 00 58 */	lbz r0, 0x58(r31)
/* 80134D88 00131CC8  28 00 00 00 */	cmplwi r0, 0
/* 80134D8C 00131CCC  40 82 00 48 */	bne .L_80134DD4
/* 80134D90 00131CD0  C3 FF 00 1C */	lfs f31, 0x1c(r31)
/* 80134D94 00131CD4  38 61 00 B0 */	addi r3, r1, 0xb0
/* 80134D98 00131CD8  38 9F 00 4C */	addi r4, r31, 0x4c
/* 80134D9C 00131CDC  48 00 07 85 */	bl "__ct__10Vector3<f>FRC10Vector3<f>"
/* 80134DA0 00131CE0  D3 E1 00 BC */	stfs f31, 0xbc(r1)
/* 80134DA4 00131CE4  7F A4 EB 78 */	mr r4, r29
/* 80134DA8 00131CE8  38 61 00 B0 */	addi r3, r1, 0xb0
/* 80134DAC 00131CEC  48 2E 11 69 */	bl intersect__Q23Sys6SphereFRQ23Sys6Sphere
/* 80134DB0 00131CF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134DB4 00131CF4  41 82 00 A0 */	beq .L_80134E54
/* 80134DB8 00131CF8  7F C3 F3 78 */	mr r3, r30
/* 80134DBC 00131CFC  7F E4 FB 78 */	mr r4, r31
/* 80134DC0 00131D00  81 9E 00 00 */	lwz r12, 0(r30)
/* 80134DC4 00131D04  81 8C 00 08 */	lwz r12, 8(r12)
/* 80134DC8 00131D08  7D 89 03 A6 */	mtctr r12
/* 80134DCC 00131D0C  4E 80 04 21 */	bctrl 
/* 80134DD0 00131D10  48 00 00 84 */	b .L_80134E54
.L_80134DD4:
/* 80134DD4 00131D14  28 00 00 01 */	cmplwi r0, 1
/* 80134DD8 00131D18  41 82 00 0C */	beq .L_80134DE4
/* 80134DDC 00131D1C  28 00 00 02 */	cmplwi r0, 2
/* 80134DE0 00131D20  40 82 00 74 */	bne .L_80134E54
.L_80134DE4:
/* 80134DE4 00131D24  7F E3 FB 78 */	mr r3, r31
/* 80134DE8 00131D28  4B FF F7 59 */	bl getChild__8CollPartFv
/* 80134DEC 00131D2C  C3 C3 00 1C */	lfs f30, 0x1c(r3)
/* 80134DF0 00131D30  7F E3 FB 78 */	mr r3, r31
/* 80134DF4 00131D34  C3 FF 00 1C */	lfs f31, 0x1c(r31)
/* 80134DF8 00131D38  4B FF F7 49 */	bl getChild__8CollPartFv
/* 80134DFC 00131D3C  3B 63 00 4C */	addi r27, r3, 0x4c
/* 80134E00 00131D40  38 61 01 88 */	addi r3, r1, 0x188
/* 80134E04 00131D44  38 9F 00 4C */	addi r4, r31, 0x4c
/* 80134E08 00131D48  48 00 07 19 */	bl "__ct__10Vector3<f>FRC10Vector3<f>"
/* 80134E0C 00131D4C  7F 64 DB 78 */	mr r4, r27
/* 80134E10 00131D50  38 61 01 94 */	addi r3, r1, 0x194
/* 80134E14 00131D54  48 00 07 0D */	bl "__ct__10Vector3<f>FRC10Vector3<f>"
/* 80134E18 00131D58  D3 E1 01 A0 */	stfs f31, 0x1a0(r1)
/* 80134E1C 00131D5C  7F A4 EB 78 */	mr r4, r29
/* 80134E20 00131D60  38 61 01 88 */	addi r3, r1, 0x188
/* 80134E24 00131D64  38 A1 00 C0 */	addi r5, r1, 0xc0
/* 80134E28 00131D68  D3 C1 01 A4 */	stfs f30, 0x1a4(r1)
/* 80134E2C 00131D6C  38 C1 00 1C */	addi r6, r1, 0x1c
/* 80134E30 00131D70  48 2E 0D 29 */	bl "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
/* 80134E34 00131D74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134E38 00131D78  41 82 00 1C */	beq .L_80134E54
/* 80134E3C 00131D7C  7F C3 F3 78 */	mr r3, r30
/* 80134E40 00131D80  7F E4 FB 78 */	mr r4, r31
/* 80134E44 00131D84  81 9E 00 00 */	lwz r12, 0(r30)
/* 80134E48 00131D88  81 8C 00 08 */	lwz r12, 8(r12)
/* 80134E4C 00131D8C  7D 89 03 A6 */	mtctr r12
/* 80134E50 00131D90  4E 80 04 21 */	bctrl 
.L_80134E54:
/* 80134E54 00131D94  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80134E58 00131D98  28 00 00 00 */	cmplwi r0, 0
/* 80134E5C 00131D9C  41 82 01 40 */	beq .L_80134F9C
/* 80134E60 00131DA0  7F E3 FB 78 */	mr r3, r31
/* 80134E64 00131DA4  4B FF F6 DD */	bl getChild__8CollPartFv
/* 80134E68 00131DA8  7C 7A 1B 78 */	mr r26, r3
/* 80134E6C 00131DAC  4B FF FD 35 */	bl isPrim__8CollPartFv
/* 80134E70 00131DB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134E74 00131DB4  41 82 00 E0 */	beq .L_80134F54
/* 80134E78 00131DB8  7F 43 D3 78 */	mr r3, r26
/* 80134E7C 00131DBC  48 00 06 95 */	bl isSphere__8CollPartFv
/* 80134E80 00131DC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134E84 00131DC4  41 82 00 44 */	beq .L_80134EC8
/* 80134E88 00131DC8  C0 3A 00 1C */	lfs f1, 0x1c(r26)
/* 80134E8C 00131DCC  38 61 00 78 */	addi r3, r1, 0x78
/* 80134E90 00131DD0  38 9A 00 4C */	addi r4, r26, 0x4c
/* 80134E94 00131DD4  48 00 06 5D */	bl "__ct__Q23Sys6SphereFR10Vector3<f>f"
/* 80134E98 00131DD8  7F A4 EB 78 */	mr r4, r29
/* 80134E9C 00131DDC  38 61 00 78 */	addi r3, r1, 0x78
/* 80134EA0 00131DE0  48 2E 10 75 */	bl intersect__Q23Sys6SphereFRQ23Sys6Sphere
/* 80134EA4 00131DE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134EA8 00131DE8  41 82 00 AC */	beq .L_80134F54
/* 80134EAC 00131DEC  7F C3 F3 78 */	mr r3, r30
/* 80134EB0 00131DF0  7F 44 D3 78 */	mr r4, r26
/* 80134EB4 00131DF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80134EB8 00131DF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80134EBC 00131DFC  7D 89 03 A6 */	mtctr r12
/* 80134EC0 00131E00  4E 80 04 21 */	bctrl 
/* 80134EC4 00131E04  48 00 00 90 */	b .L_80134F54
.L_80134EC8:
/* 80134EC8 00131E08  7F 43 D3 78 */	mr r3, r26
/* 80134ECC 00131E0C  48 00 06 85 */	bl isTube__8CollPartFv
/* 80134ED0 00131E10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134ED4 00131E14  40 82 00 14 */	bne .L_80134EE8
/* 80134ED8 00131E18  7F 43 D3 78 */	mr r3, r26
/* 80134EDC 00131E1C  48 00 06 61 */	bl isTubeTree__8CollPartFv
/* 80134EE0 00131E20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134EE4 00131E24  41 82 00 70 */	beq .L_80134F54
.L_80134EE8:
/* 80134EE8 00131E28  7F 43 D3 78 */	mr r3, r26
/* 80134EEC 00131E2C  4B FF F6 55 */	bl getChild__8CollPartFv
/* 80134EF0 00131E30  7C 7B 1B 78 */	mr r27, r3
/* 80134EF4 00131E34  7F 43 D3 78 */	mr r3, r26
/* 80134EF8 00131E38  4B FF F6 49 */	bl getChild__8CollPartFv
/* 80134EFC 00131E3C  7C 65 1B 78 */	mr r5, r3
/* 80134F00 00131E40  C0 3A 00 1C */	lfs f1, 0x1c(r26)
/* 80134F04 00131E44  C0 5B 00 1C */	lfs f2, 0x1c(r27)
/* 80134F08 00131E48  38 61 01 48 */	addi r3, r1, 0x148
/* 80134F0C 00131E4C  38 9A 00 4C */	addi r4, r26, 0x4c
/* 80134F10 00131E50  38 A5 00 4C */	addi r5, r5, 0x4c
/* 80134F14 00131E54  48 00 05 A1 */	bl "__ct__Q23Sys4TubeFR10Vector3<f>R10Vector3<f>ff"
/* 80134F18 00131E58  38 61 00 88 */	addi r3, r1, 0x88
/* 80134F1C 00131E5C  4B FE A4 2D */	bl "__ct__10Vector3<f>Fv"
/* 80134F20 00131E60  7F A4 EB 78 */	mr r4, r29
/* 80134F24 00131E64  38 61 01 48 */	addi r3, r1, 0x148
/* 80134F28 00131E68  38 A1 00 88 */	addi r5, r1, 0x88
/* 80134F2C 00131E6C  38 C1 00 14 */	addi r6, r1, 0x14
/* 80134F30 00131E70  48 2E 0C 29 */	bl "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
/* 80134F34 00131E74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134F38 00131E78  41 82 00 1C */	beq .L_80134F54
/* 80134F3C 00131E7C  7F C3 F3 78 */	mr r3, r30
/* 80134F40 00131E80  7F 44 D3 78 */	mr r4, r26
/* 80134F44 00131E84  81 9E 00 00 */	lwz r12, 0(r30)
/* 80134F48 00131E88  81 8C 00 08 */	lwz r12, 8(r12)
/* 80134F4C 00131E8C  7D 89 03 A6 */	mtctr r12
/* 80134F50 00131E90  4E 80 04 21 */	bctrl 
.L_80134F54:
/* 80134F54 00131E94  7F 43 D3 78 */	mr r3, r26
/* 80134F58 00131E98  4B FF F5 E9 */	bl getChild__8CollPartFv
/* 80134F5C 00131E9C  28 03 00 00 */	cmplwi r3, 0
/* 80134F60 00131EA0  41 82 00 18 */	beq .L_80134F78
/* 80134F64 00131EA4  7F 43 D3 78 */	mr r3, r26
/* 80134F68 00131EA8  4B FF F5 D9 */	bl getChild__8CollPartFv
/* 80134F6C 00131EAC  7F A4 EB 78 */	mr r4, r29
/* 80134F70 00131EB0  7F C5 F3 78 */	mr r5, r30
/* 80134F74 00131EB4  4B FF FC 89 */	bl "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"
.L_80134F78:
/* 80134F78 00131EB8  7F 43 D3 78 */	mr r3, r26
/* 80134F7C 00131EBC  4B FF F5 CD */	bl getNext__8CollPartFv
/* 80134F80 00131EC0  28 03 00 00 */	cmplwi r3, 0
/* 80134F84 00131EC4  41 82 00 18 */	beq .L_80134F9C
/* 80134F88 00131EC8  7F 43 D3 78 */	mr r3, r26
/* 80134F8C 00131ECC  4B FF F5 BD */	bl getNext__8CollPartFv
/* 80134F90 00131ED0  7F A4 EB 78 */	mr r4, r29
/* 80134F94 00131ED4  7F C5 F3 78 */	mr r5, r30
/* 80134F98 00131ED8  4B FF FC 65 */	bl "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"
.L_80134F9C:
/* 80134F9C 00131EDC  80 1F 00 04 */	lwz r0, 4(r31)
/* 80134FA0 00131EE0  28 00 00 00 */	cmplwi r0, 0
/* 80134FA4 00131EE4  41 82 01 40 */	beq .L_801350E4
/* 80134FA8 00131EE8  7F E3 FB 78 */	mr r3, r31
/* 80134FAC 00131EEC  4B FF F5 9D */	bl getNext__8CollPartFv
/* 80134FB0 00131EF0  7C 7A 1B 78 */	mr r26, r3
/* 80134FB4 00131EF4  4B FF FB ED */	bl isPrim__8CollPartFv
/* 80134FB8 00131EF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134FBC 00131EFC  41 82 00 E0 */	beq .L_8013509C
/* 80134FC0 00131F00  7F 43 D3 78 */	mr r3, r26
/* 80134FC4 00131F04  48 00 05 4D */	bl isSphere__8CollPartFv
/* 80134FC8 00131F08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134FCC 00131F0C  41 82 00 44 */	beq .L_80135010
/* 80134FD0 00131F10  C0 3A 00 1C */	lfs f1, 0x1c(r26)
/* 80134FD4 00131F14  38 61 00 5C */	addi r3, r1, 0x5c
/* 80134FD8 00131F18  38 9A 00 4C */	addi r4, r26, 0x4c
/* 80134FDC 00131F1C  48 00 05 15 */	bl "__ct__Q23Sys6SphereFR10Vector3<f>f"
/* 80134FE0 00131F20  7F A4 EB 78 */	mr r4, r29
/* 80134FE4 00131F24  38 61 00 5C */	addi r3, r1, 0x5c
/* 80134FE8 00131F28  48 2E 0F 2D */	bl intersect__Q23Sys6SphereFRQ23Sys6Sphere
/* 80134FEC 00131F2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80134FF0 00131F30  41 82 00 AC */	beq .L_8013509C
/* 80134FF4 00131F34  7F C3 F3 78 */	mr r3, r30
/* 80134FF8 00131F38  7F 44 D3 78 */	mr r4, r26
/* 80134FFC 00131F3C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80135000 00131F40  81 8C 00 08 */	lwz r12, 8(r12)
/* 80135004 00131F44  7D 89 03 A6 */	mtctr r12
/* 80135008 00131F48  4E 80 04 21 */	bctrl 
/* 8013500C 00131F4C  48 00 00 90 */	b .L_8013509C
.L_80135010:
/* 80135010 00131F50  7F 43 D3 78 */	mr r3, r26
/* 80135014 00131F54  48 00 05 3D */	bl isTube__8CollPartFv
/* 80135018 00131F58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013501C 00131F5C  40 82 00 14 */	bne .L_80135030
/* 80135020 00131F60  7F 43 D3 78 */	mr r3, r26
/* 80135024 00131F64  48 00 05 19 */	bl isTubeTree__8CollPartFv
/* 80135028 00131F68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013502C 00131F6C  41 82 00 70 */	beq .L_8013509C
.L_80135030:
/* 80135030 00131F70  7F 43 D3 78 */	mr r3, r26
/* 80135034 00131F74  4B FF F5 0D */	bl getChild__8CollPartFv
/* 80135038 00131F78  7C 7F 1B 78 */	mr r31, r3
/* 8013503C 00131F7C  7F 43 D3 78 */	mr r3, r26
/* 80135040 00131F80  4B FF F5 01 */	bl getChild__8CollPartFv
/* 80135044 00131F84  7C 65 1B 78 */	mr r5, r3
/* 80135048 00131F88  C0 3A 00 1C */	lfs f1, 0x1c(r26)
/* 8013504C 00131F8C  C0 5F 00 1C */	lfs f2, 0x1c(r31)
/* 80135050 00131F90  38 61 01 28 */	addi r3, r1, 0x128
/* 80135054 00131F94  38 9A 00 4C */	addi r4, r26, 0x4c
/* 80135058 00131F98  38 A5 00 4C */	addi r5, r5, 0x4c
/* 8013505C 00131F9C  48 00 04 59 */	bl "__ct__Q23Sys4TubeFR10Vector3<f>R10Vector3<f>ff"
/* 80135060 00131FA0  38 61 00 6C */	addi r3, r1, 0x6c
/* 80135064 00131FA4  4B FE A2 E5 */	bl "__ct__10Vector3<f>Fv"
/* 80135068 00131FA8  7F A4 EB 78 */	mr r4, r29
/* 8013506C 00131FAC  38 61 01 28 */	addi r3, r1, 0x128
/* 80135070 00131FB0  38 A1 00 6C */	addi r5, r1, 0x6c
/* 80135074 00131FB4  38 C1 00 10 */	addi r6, r1, 0x10
/* 80135078 00131FB8  48 2E 0A E1 */	bl "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
/* 8013507C 00131FBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135080 00131FC0  41 82 00 1C */	beq .L_8013509C
/* 80135084 00131FC4  7F C3 F3 78 */	mr r3, r30
/* 80135088 00131FC8  7F 44 D3 78 */	mr r4, r26
/* 8013508C 00131FCC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80135090 00131FD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80135094 00131FD4  7D 89 03 A6 */	mtctr r12
/* 80135098 00131FD8  4E 80 04 21 */	bctrl 
.L_8013509C:
/* 8013509C 00131FDC  7F 43 D3 78 */	mr r3, r26
/* 801350A0 00131FE0  4B FF F4 A1 */	bl getChild__8CollPartFv
/* 801350A4 00131FE4  28 03 00 00 */	cmplwi r3, 0
/* 801350A8 00131FE8  41 82 00 18 */	beq .L_801350C0
/* 801350AC 00131FEC  7F 43 D3 78 */	mr r3, r26
/* 801350B0 00131FF0  4B FF F4 91 */	bl getChild__8CollPartFv
/* 801350B4 00131FF4  7F A4 EB 78 */	mr r4, r29
/* 801350B8 00131FF8  7F C5 F3 78 */	mr r5, r30
/* 801350BC 00131FFC  4B FF FB 41 */	bl "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"
.L_801350C0:
/* 801350C0 00132000  7F 43 D3 78 */	mr r3, r26
/* 801350C4 00132004  4B FF F4 85 */	bl getNext__8CollPartFv
/* 801350C8 00132008  28 03 00 00 */	cmplwi r3, 0
/* 801350CC 0013200C  41 82 00 18 */	beq .L_801350E4
/* 801350D0 00132010  7F 43 D3 78 */	mr r3, r26
/* 801350D4 00132014  4B FF F4 75 */	bl getNext__8CollPartFv
/* 801350D8 00132018  7F A4 EB 78 */	mr r4, r29
/* 801350DC 0013201C  7F C5 F3 78 */	mr r5, r30
/* 801350E0 00132020  4B FF FB 1D */	bl "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"
.L_801350E4:
/* 801350E4 00132024  83 FC 00 04 */	lwz r31, 4(r28)
/* 801350E8 00132028  28 1F 00 00 */	cmplwi r31, 0
/* 801350EC 0013202C  41 82 03 A4 */	beq .L_80135490
/* 801350F0 00132030  7F E3 FB 78 */	mr r3, r31
/* 801350F4 00132034  3B 80 00 00 */	li r28, 0
/* 801350F8 00132038  4B FF F4 49 */	bl getChild__8CollPartFv
/* 801350FC 0013203C  28 03 00 00 */	cmplwi r3, 0
/* 80135100 00132040  41 82 00 24 */	beq .L_80135124
/* 80135104 00132044  7F E3 FB 78 */	mr r3, r31
/* 80135108 00132048  48 00 04 49 */	bl isTube__8CollPartFv
/* 8013510C 0013204C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135110 00132050  40 82 00 14 */	bne .L_80135124
/* 80135114 00132054  7F E3 FB 78 */	mr r3, r31
/* 80135118 00132058  48 00 04 25 */	bl isTubeTree__8CollPartFv
/* 8013511C 0013205C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135120 00132060  41 82 00 08 */	beq .L_80135128
.L_80135124:
/* 80135124 00132064  3B 80 00 01 */	li r28, 1
.L_80135128:
/* 80135128 00132068  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 8013512C 0013206C  41 82 00 D4 */	beq .L_80135200
/* 80135130 00132070  88 1F 00 58 */	lbz r0, 0x58(r31)
/* 80135134 00132074  28 00 00 00 */	cmplwi r0, 0
/* 80135138 00132078  40 82 00 48 */	bne .L_80135180
/* 8013513C 0013207C  C3 DF 00 1C */	lfs f30, 0x1c(r31)
/* 80135140 00132080  38 61 00 94 */	addi r3, r1, 0x94
/* 80135144 00132084  38 9F 00 4C */	addi r4, r31, 0x4c
/* 80135148 00132088  48 00 03 D9 */	bl "__ct__10Vector3<f>FRC10Vector3<f>"
/* 8013514C 0013208C  D3 C1 00 A0 */	stfs f30, 0xa0(r1)
/* 80135150 00132090  7F A4 EB 78 */	mr r4, r29
/* 80135154 00132094  38 61 00 94 */	addi r3, r1, 0x94
/* 80135158 00132098  48 2E 0D BD */	bl intersect__Q23Sys6SphereFRQ23Sys6Sphere
/* 8013515C 0013209C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135160 001320A0  41 82 00 A0 */	beq .L_80135200
/* 80135164 001320A4  7F C3 F3 78 */	mr r3, r30
/* 80135168 001320A8  7F E4 FB 78 */	mr r4, r31
/* 8013516C 001320AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80135170 001320B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80135174 001320B4  7D 89 03 A6 */	mtctr r12
/* 80135178 001320B8  4E 80 04 21 */	bctrl 
/* 8013517C 001320BC  48 00 00 84 */	b .L_80135200
.L_80135180:
/* 80135180 001320C0  28 00 00 01 */	cmplwi r0, 1
/* 80135184 001320C4  41 82 00 0C */	beq .L_80135190
/* 80135188 001320C8  28 00 00 02 */	cmplwi r0, 2
/* 8013518C 001320CC  40 82 00 74 */	bne .L_80135200
.L_80135190:
/* 80135190 001320D0  7F E3 FB 78 */	mr r3, r31
/* 80135194 001320D4  4B FF F3 AD */	bl getChild__8CollPartFv
/* 80135198 001320D8  C3 E3 00 1C */	lfs f31, 0x1c(r3)
/* 8013519C 001320DC  7F E3 FB 78 */	mr r3, r31
/* 801351A0 001320E0  C3 DF 00 1C */	lfs f30, 0x1c(r31)
/* 801351A4 001320E4  4B FF F3 9D */	bl getChild__8CollPartFv
/* 801351A8 001320E8  3B 43 00 4C */	addi r26, r3, 0x4c
/* 801351AC 001320EC  38 61 01 68 */	addi r3, r1, 0x168
/* 801351B0 001320F0  38 9F 00 4C */	addi r4, r31, 0x4c
/* 801351B4 001320F4  48 00 03 6D */	bl "__ct__10Vector3<f>FRC10Vector3<f>"
/* 801351B8 001320F8  7F 44 D3 78 */	mr r4, r26
/* 801351BC 001320FC  38 61 01 74 */	addi r3, r1, 0x174
/* 801351C0 00132100  48 00 03 61 */	bl "__ct__10Vector3<f>FRC10Vector3<f>"
/* 801351C4 00132104  D3 C1 01 80 */	stfs f30, 0x180(r1)
/* 801351C8 00132108  7F A4 EB 78 */	mr r4, r29
/* 801351CC 0013210C  38 61 01 68 */	addi r3, r1, 0x168
/* 801351D0 00132110  38 A1 00 A4 */	addi r5, r1, 0xa4
/* 801351D4 00132114  D3 E1 01 84 */	stfs f31, 0x184(r1)
/* 801351D8 00132118  38 C1 00 18 */	addi r6, r1, 0x18
/* 801351DC 0013211C  48 2E 09 7D */	bl "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
/* 801351E0 00132120  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801351E4 00132124  41 82 00 1C */	beq .L_80135200
/* 801351E8 00132128  7F C3 F3 78 */	mr r3, r30
/* 801351EC 0013212C  7F E4 FB 78 */	mr r4, r31
/* 801351F0 00132130  81 9E 00 00 */	lwz r12, 0(r30)
/* 801351F4 00132134  81 8C 00 08 */	lwz r12, 8(r12)
/* 801351F8 00132138  7D 89 03 A6 */	mtctr r12
/* 801351FC 0013213C  4E 80 04 21 */	bctrl 
.L_80135200:
/* 80135200 00132140  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80135204 00132144  28 00 00 00 */	cmplwi r0, 0
/* 80135208 00132148  41 82 01 40 */	beq .L_80135348
/* 8013520C 0013214C  7F E3 FB 78 */	mr r3, r31
/* 80135210 00132150  4B FF F3 31 */	bl getChild__8CollPartFv
/* 80135214 00132154  7C 7A 1B 78 */	mr r26, r3
/* 80135218 00132158  4B FF F9 89 */	bl isPrim__8CollPartFv
/* 8013521C 0013215C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135220 00132160  41 82 00 E0 */	beq .L_80135300
/* 80135224 00132164  7F 43 D3 78 */	mr r3, r26
/* 80135228 00132168  48 00 02 E9 */	bl isSphere__8CollPartFv
/* 8013522C 0013216C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135230 00132170  41 82 00 44 */	beq .L_80135274
/* 80135234 00132174  C0 3A 00 1C */	lfs f1, 0x1c(r26)
/* 80135238 00132178  38 61 00 40 */	addi r3, r1, 0x40
/* 8013523C 0013217C  38 9A 00 4C */	addi r4, r26, 0x4c
/* 80135240 00132180  48 00 02 B1 */	bl "__ct__Q23Sys6SphereFR10Vector3<f>f"
/* 80135244 00132184  7F A4 EB 78 */	mr r4, r29
/* 80135248 00132188  38 61 00 40 */	addi r3, r1, 0x40
/* 8013524C 0013218C  48 2E 0C C9 */	bl intersect__Q23Sys6SphereFRQ23Sys6Sphere
/* 80135250 00132190  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135254 00132194  41 82 00 AC */	beq .L_80135300
/* 80135258 00132198  7F C3 F3 78 */	mr r3, r30
/* 8013525C 0013219C  7F 44 D3 78 */	mr r4, r26
/* 80135260 001321A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80135264 001321A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80135268 001321A8  7D 89 03 A6 */	mtctr r12
/* 8013526C 001321AC  4E 80 04 21 */	bctrl 
/* 80135270 001321B0  48 00 00 90 */	b .L_80135300
.L_80135274:
/* 80135274 001321B4  7F 43 D3 78 */	mr r3, r26
/* 80135278 001321B8  48 00 02 D9 */	bl isTube__8CollPartFv
/* 8013527C 001321BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135280 001321C0  40 82 00 14 */	bne .L_80135294
/* 80135284 001321C4  7F 43 D3 78 */	mr r3, r26
/* 80135288 001321C8  48 00 02 B5 */	bl isTubeTree__8CollPartFv
/* 8013528C 001321CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135290 001321D0  41 82 00 70 */	beq .L_80135300
.L_80135294:
/* 80135294 001321D4  7F 43 D3 78 */	mr r3, r26
/* 80135298 001321D8  4B FF F2 A9 */	bl getChild__8CollPartFv
/* 8013529C 001321DC  7C 7C 1B 78 */	mr r28, r3
/* 801352A0 001321E0  7F 43 D3 78 */	mr r3, r26
/* 801352A4 001321E4  4B FF F2 9D */	bl getChild__8CollPartFv
/* 801352A8 001321E8  7C 65 1B 78 */	mr r5, r3
/* 801352AC 001321EC  C0 3A 00 1C */	lfs f1, 0x1c(r26)
/* 801352B0 001321F0  C0 5C 00 1C */	lfs f2, 0x1c(r28)
/* 801352B4 001321F4  38 61 01 08 */	addi r3, r1, 0x108
/* 801352B8 001321F8  38 9A 00 4C */	addi r4, r26, 0x4c
/* 801352BC 001321FC  38 A5 00 4C */	addi r5, r5, 0x4c
/* 801352C0 00132200  48 00 01 F5 */	bl "__ct__Q23Sys4TubeFR10Vector3<f>R10Vector3<f>ff"
/* 801352C4 00132204  38 61 00 50 */	addi r3, r1, 0x50
/* 801352C8 00132208  4B FE A0 81 */	bl "__ct__10Vector3<f>Fv"
/* 801352CC 0013220C  7F A4 EB 78 */	mr r4, r29
/* 801352D0 00132210  38 61 01 08 */	addi r3, r1, 0x108
/* 801352D4 00132214  38 A1 00 50 */	addi r5, r1, 0x50
/* 801352D8 00132218  38 C1 00 0C */	addi r6, r1, 0xc
/* 801352DC 0013221C  48 2E 08 7D */	bl "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
/* 801352E0 00132220  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801352E4 00132224  41 82 00 1C */	beq .L_80135300
/* 801352E8 00132228  7F C3 F3 78 */	mr r3, r30
/* 801352EC 0013222C  7F 44 D3 78 */	mr r4, r26
/* 801352F0 00132230  81 9E 00 00 */	lwz r12, 0(r30)
/* 801352F4 00132234  81 8C 00 08 */	lwz r12, 8(r12)
/* 801352F8 00132238  7D 89 03 A6 */	mtctr r12
/* 801352FC 0013223C  4E 80 04 21 */	bctrl 
.L_80135300:
/* 80135300 00132240  7F 43 D3 78 */	mr r3, r26
/* 80135304 00132244  4B FF F2 3D */	bl getChild__8CollPartFv
/* 80135308 00132248  28 03 00 00 */	cmplwi r3, 0
/* 8013530C 0013224C  41 82 00 18 */	beq .L_80135324
/* 80135310 00132250  7F 43 D3 78 */	mr r3, r26
/* 80135314 00132254  4B FF F2 2D */	bl getChild__8CollPartFv
/* 80135318 00132258  7F A4 EB 78 */	mr r4, r29
/* 8013531C 0013225C  7F C5 F3 78 */	mr r5, r30
/* 80135320 00132260  4B FF F8 DD */	bl "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"
.L_80135324:
/* 80135324 00132264  7F 43 D3 78 */	mr r3, r26
/* 80135328 00132268  4B FF F2 21 */	bl getNext__8CollPartFv
/* 8013532C 0013226C  28 03 00 00 */	cmplwi r3, 0
/* 80135330 00132270  41 82 00 18 */	beq .L_80135348
/* 80135334 00132274  7F 43 D3 78 */	mr r3, r26
/* 80135338 00132278  4B FF F2 11 */	bl getNext__8CollPartFv
/* 8013533C 0013227C  7F A4 EB 78 */	mr r4, r29
/* 80135340 00132280  7F C5 F3 78 */	mr r5, r30
/* 80135344 00132284  4B FF F8 B9 */	bl "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"
.L_80135348:
/* 80135348 00132288  80 1F 00 04 */	lwz r0, 4(r31)
/* 8013534C 0013228C  28 00 00 00 */	cmplwi r0, 0
/* 80135350 00132290  41 82 01 40 */	beq .L_80135490
/* 80135354 00132294  7F E3 FB 78 */	mr r3, r31
/* 80135358 00132298  4B FF F1 F1 */	bl getNext__8CollPartFv
/* 8013535C 0013229C  7C 7A 1B 78 */	mr r26, r3
/* 80135360 001322A0  4B FF F8 41 */	bl isPrim__8CollPartFv
/* 80135364 001322A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135368 001322A8  41 82 00 E0 */	beq .L_80135448
/* 8013536C 001322AC  7F 43 D3 78 */	mr r3, r26
/* 80135370 001322B0  48 00 01 A1 */	bl isSphere__8CollPartFv
/* 80135374 001322B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135378 001322B8  41 82 00 44 */	beq .L_801353BC
/* 8013537C 001322BC  C0 3A 00 1C */	lfs f1, 0x1c(r26)
/* 80135380 001322C0  38 61 00 24 */	addi r3, r1, 0x24
/* 80135384 001322C4  38 9A 00 4C */	addi r4, r26, 0x4c
/* 80135388 001322C8  48 00 01 69 */	bl "__ct__Q23Sys6SphereFR10Vector3<f>f"
/* 8013538C 001322CC  7F A4 EB 78 */	mr r4, r29
/* 80135390 001322D0  38 61 00 24 */	addi r3, r1, 0x24
/* 80135394 001322D4  48 2E 0B 81 */	bl intersect__Q23Sys6SphereFRQ23Sys6Sphere
/* 80135398 001322D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013539C 001322DC  41 82 00 AC */	beq .L_80135448
/* 801353A0 001322E0  7F C3 F3 78 */	mr r3, r30
/* 801353A4 001322E4  7F 44 D3 78 */	mr r4, r26
/* 801353A8 001322E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 801353AC 001322EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801353B0 001322F0  7D 89 03 A6 */	mtctr r12
/* 801353B4 001322F4  4E 80 04 21 */	bctrl 
/* 801353B8 001322F8  48 00 00 90 */	b .L_80135448
.L_801353BC:
/* 801353BC 001322FC  7F 43 D3 78 */	mr r3, r26
/* 801353C0 00132300  48 00 01 91 */	bl isTube__8CollPartFv
/* 801353C4 00132304  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801353C8 00132308  40 82 00 14 */	bne .L_801353DC
/* 801353CC 0013230C  7F 43 D3 78 */	mr r3, r26
/* 801353D0 00132310  48 00 01 6D */	bl isTubeTree__8CollPartFv
/* 801353D4 00132314  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801353D8 00132318  41 82 00 70 */	beq .L_80135448
.L_801353DC:
/* 801353DC 0013231C  7F 43 D3 78 */	mr r3, r26
/* 801353E0 00132320  4B FF F1 61 */	bl getChild__8CollPartFv
/* 801353E4 00132324  7C 7C 1B 78 */	mr r28, r3
/* 801353E8 00132328  7F 43 D3 78 */	mr r3, r26
/* 801353EC 0013232C  4B FF F1 55 */	bl getChild__8CollPartFv
/* 801353F0 00132330  7C 65 1B 78 */	mr r5, r3
/* 801353F4 00132334  C0 3A 00 1C */	lfs f1, 0x1c(r26)
/* 801353F8 00132338  C0 5C 00 1C */	lfs f2, 0x1c(r28)
/* 801353FC 0013233C  38 61 00 E8 */	addi r3, r1, 0xe8
/* 80135400 00132340  38 9A 00 4C */	addi r4, r26, 0x4c
/* 80135404 00132344  38 A5 00 4C */	addi r5, r5, 0x4c
/* 80135408 00132348  48 00 00 AD */	bl "__ct__Q23Sys4TubeFR10Vector3<f>R10Vector3<f>ff"
/* 8013540C 0013234C  38 61 00 34 */	addi r3, r1, 0x34
/* 80135410 00132350  4B FE 9F 39 */	bl "__ct__10Vector3<f>Fv"
/* 80135414 00132354  7F A4 EB 78 */	mr r4, r29
/* 80135418 00132358  38 61 00 E8 */	addi r3, r1, 0xe8
/* 8013541C 0013235C  38 A1 00 34 */	addi r5, r1, 0x34
/* 80135420 00132360  38 C1 00 08 */	addi r6, r1, 8
/* 80135424 00132364  48 2E 07 35 */	bl "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
/* 80135428 00132368  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013542C 0013236C  41 82 00 1C */	beq .L_80135448
/* 80135430 00132370  7F C3 F3 78 */	mr r3, r30
/* 80135434 00132374  7F 44 D3 78 */	mr r4, r26
/* 80135438 00132378  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013543C 0013237C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80135440 00132380  7D 89 03 A6 */	mtctr r12
/* 80135444 00132384  4E 80 04 21 */	bctrl 
.L_80135448:
/* 80135448 00132388  7F 43 D3 78 */	mr r3, r26
/* 8013544C 0013238C  4B FF F0 F5 */	bl getChild__8CollPartFv
/* 80135450 00132390  28 03 00 00 */	cmplwi r3, 0
/* 80135454 00132394  41 82 00 18 */	beq .L_8013546C
/* 80135458 00132398  7F 43 D3 78 */	mr r3, r26
/* 8013545C 0013239C  4B FF F0 E5 */	bl getChild__8CollPartFv
/* 80135460 001323A0  7F A4 EB 78 */	mr r4, r29
/* 80135464 001323A4  7F C5 F3 78 */	mr r5, r30
/* 80135468 001323A8  4B FF F7 95 */	bl "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"
.L_8013546C:
/* 8013546C 001323AC  7F 43 D3 78 */	mr r3, r26
/* 80135470 001323B0  4B FF F0 D9 */	bl getNext__8CollPartFv
/* 80135474 001323B4  28 03 00 00 */	cmplwi r3, 0
/* 80135478 001323B8  41 82 00 18 */	beq .L_80135490
/* 8013547C 001323BC  7F 43 D3 78 */	mr r3, r26
/* 80135480 001323C0  4B FF F0 C9 */	bl getNext__8CollPartFv
/* 80135484 001323C4  7F A4 EB 78 */	mr r4, r29
/* 80135488 001323C8  7F C5 F3 78 */	mr r5, r30
/* 8013548C 001323CC  4B FF F7 71 */	bl "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"
.L_80135490:
/* 80135490 001323D0  E3 E1 01 F8 */	psq_l f31, 504(r1), 0, qr0
/* 80135494 001323D4  CB E1 01 F0 */	lfd f31, 0x1f0(r1)
/* 80135498 001323D8  E3 C1 01 E8 */	psq_l f30, 488(r1), 0, qr0
/* 8013549C 001323DC  CB C1 01 E0 */	lfd f30, 0x1e0(r1)
/* 801354A0 001323E0  BB 41 01 C8 */	lmw r26, 0x1c8(r1)
/* 801354A4 001323E4  80 01 02 04 */	lwz r0, 0x204(r1)
/* 801354A8 001323E8  7C 08 03 A6 */	mtlr r0
/* 801354AC 001323EC  38 21 02 00 */	addi r1, r1, 0x200
/* 801354B0 001323F0  4E 80 00 20 */	blr 
.endfn "checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>"

.fn "__ct__Q23Sys4TubeFR10Vector3<f>R10Vector3<f>ff", weak
/* 801354B4 001323F4  C0 04 00 00 */	lfs f0, 0(r4)
/* 801354B8 001323F8  D0 03 00 00 */	stfs f0, 0(r3)
/* 801354BC 001323FC  C0 04 00 04 */	lfs f0, 4(r4)
/* 801354C0 00132400  D0 03 00 04 */	stfs f0, 4(r3)
/* 801354C4 00132404  C0 04 00 08 */	lfs f0, 8(r4)
/* 801354C8 00132408  D0 03 00 08 */	stfs f0, 8(r3)
/* 801354CC 0013240C  C0 05 00 00 */	lfs f0, 0(r5)
/* 801354D0 00132410  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 801354D4 00132414  C0 05 00 04 */	lfs f0, 4(r5)
/* 801354D8 00132418  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 801354DC 0013241C  C0 05 00 08 */	lfs f0, 8(r5)
/* 801354E0 00132420  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 801354E4 00132424  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 801354E8 00132428  D0 43 00 1C */	stfs f2, 0x1c(r3)
/* 801354EC 0013242C  4E 80 00 20 */	blr 
.endfn "__ct__Q23Sys4TubeFR10Vector3<f>R10Vector3<f>ff"

.fn "__ct__Q23Sys6SphereFR10Vector3<f>f", weak
/* 801354F0 00132430  C0 04 00 00 */	lfs f0, 0(r4)
/* 801354F4 00132434  D0 03 00 00 */	stfs f0, 0(r3)
/* 801354F8 00132438  C0 04 00 04 */	lfs f0, 4(r4)
/* 801354FC 0013243C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80135500 00132440  C0 04 00 08 */	lfs f0, 8(r4)
/* 80135504 00132444  D0 03 00 08 */	stfs f0, 8(r3)
/* 80135508 00132448  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 8013550C 0013244C  4E 80 00 20 */	blr 
.endfn "__ct__Q23Sys6SphereFR10Vector3<f>f"

.fn isSphere__8CollPartFv, weak
/* 80135510 00132450  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80135514 00132454  7C 00 00 34 */	cntlzw r0, r0
/* 80135518 00132458  54 03 D9 7E */	srwi r3, r0, 5
/* 8013551C 0013245C  4E 80 00 20 */	blr 
.endfn isSphere__8CollPartFv

.fn "__ct__10Vector3<f>FRC10Vector3<f>", weak
/* 80135520 00132460  C0 04 00 00 */	lfs f0, 0(r4)
/* 80135524 00132464  C0 24 00 04 */	lfs f1, 4(r4)
/* 80135528 00132468  D0 03 00 00 */	stfs f0, 0(r3)
/* 8013552C 0013246C  C0 04 00 08 */	lfs f0, 8(r4)
/* 80135530 00132470  D0 23 00 04 */	stfs f1, 4(r3)
/* 80135534 00132474  D0 03 00 08 */	stfs f0, 8(r3)
/* 80135538 00132478  4E 80 00 20 */	blr 
.endfn "__ct__10Vector3<f>FRC10Vector3<f>"

.fn isTubeTree__8CollPartFv, weak
/* 8013553C 0013247C  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80135540 00132480  20 00 00 02 */	subfic r0, r0, 2
/* 80135544 00132484  7C 00 00 34 */	cntlzw r0, r0
/* 80135548 00132488  54 03 D9 7E */	srwi r3, r0, 5
/* 8013554C 0013248C  4E 80 00 20 */	blr 
.endfn isTubeTree__8CollPartFv

.fn isTube__8CollPartFv, weak
/* 80135550 00132490  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80135554 00132494  20 00 00 01 */	subfic r0, r0, 1
/* 80135558 00132498  7C 00 00 34 */	cntlzw r0, r0
/* 8013555C 0013249C  54 03 D9 7E */	srwi r3, r0, 5
/* 80135560 001324A0  4E 80 00 20 */	blr 
.endfn isTube__8CollPartFv

.fn "checkCollisionMulti__8CollTreeFP8CollTreeP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>", global
/* 80135564 001324A4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80135568 001324A8  7C 08 02 A6 */	mflr r0
/* 8013556C 001324AC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80135570 001324B0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80135574 001324B4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80135578 001324B8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8013557C 001324BC  93 81 00 20 */	stw r28, 0x20(r1)
/* 80135580 001324C0  7C BC 2B 78 */	mr r28, r5
/* 80135584 001324C4  83 E4 00 00 */	lwz r31, 0(r4)
/* 80135588 001324C8  83 C3 00 00 */	lwz r30, 0(r3)
/* 8013558C 001324CC  48 00 01 48 */	b .L_801356D4
.L_80135590:
/* 80135590 001324D0  7F FD FB 78 */	mr r29, r31
/* 80135594 001324D4  48 00 01 34 */	b .L_801356C8
.L_80135598:
/* 80135598 001324D8  7F C3 F3 78 */	mr r3, r30
/* 8013559C 001324DC  7F A4 EB 78 */	mr r4, r29
/* 801355A0 001324E0  38 A1 00 08 */	addi r5, r1, 8
/* 801355A4 001324E4  48 00 03 49 */	bl "collide__8CollPartFP8CollPartR10Vector3<f>"
/* 801355A8 001324E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801355AC 001324EC  41 82 01 18 */	beq .L_801356C4
/* 801355B0 001324F0  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 801355B4 001324F4  38 80 00 00 */	li r4, 0
/* 801355B8 001324F8  28 03 00 00 */	cmplwi r3, 0
/* 801355BC 001324FC  41 82 00 18 */	beq .L_801355D4
/* 801355C0 00132500  88 1E 00 58 */	lbz r0, 0x58(r30)
/* 801355C4 00132504  28 00 00 01 */	cmplwi r0, 1
/* 801355C8 00132508  41 82 00 0C */	beq .L_801355D4
/* 801355CC 0013250C  28 00 00 02 */	cmplwi r0, 2
/* 801355D0 00132510  40 82 00 08 */	bne .L_801355D8
.L_801355D4:
/* 801355D4 00132514  38 80 00 01 */	li r4, 1
.L_801355D8:
/* 801355D8 00132518  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801355DC 0013251C  41 82 00 8C */	beq .L_80135668
/* 801355E0 00132520  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 801355E4 00132524  38 80 00 00 */	li r4, 0
/* 801355E8 00132528  28 00 00 00 */	cmplwi r0, 0
/* 801355EC 0013252C  41 82 00 18 */	beq .L_80135604
/* 801355F0 00132530  88 1D 00 58 */	lbz r0, 0x58(r29)
/* 801355F4 00132534  28 00 00 01 */	cmplwi r0, 1
/* 801355F8 00132538  41 82 00 0C */	beq .L_80135604
/* 801355FC 0013253C  28 00 00 02 */	cmplwi r0, 2
/* 80135600 00132540  40 82 00 08 */	bne .L_80135608
.L_80135604:
/* 80135604 00132544  38 80 00 01 */	li r4, 1
.L_80135608:
/* 80135608 00132548  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8013560C 0013254C  41 82 00 5C */	beq .L_80135668
/* 80135610 00132550  7F 83 E3 78 */	mr r3, r28
/* 80135614 00132554  7F C4 F3 78 */	mr r4, r30
/* 80135618 00132558  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013561C 0013255C  7F A5 EB 78 */	mr r5, r29
/* 80135620 00132560  38 C1 00 08 */	addi r6, r1, 8
/* 80135624 00132564  81 8C 00 08 */	lwz r12, 8(r12)
/* 80135628 00132568  7D 89 03 A6 */	mtctr r12
/* 8013562C 0013256C  4E 80 04 21 */	bctrl 
/* 80135630 00132570  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80135634 00132574  28 03 00 00 */	cmplwi r3, 0
/* 80135638 00132578  41 82 00 14 */	beq .L_8013564C
/* 8013563C 0013257C  7F A4 EB 78 */	mr r4, r29
/* 80135640 00132580  7F 85 E3 78 */	mr r5, r28
/* 80135644 00132584  48 00 00 B9 */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 80135648 00132588  48 00 00 7C */	b .L_801356C4
.L_8013564C:
/* 8013564C 0013258C  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 80135650 00132590  28 04 00 00 */	cmplwi r4, 0
/* 80135654 00132594  41 82 00 70 */	beq .L_801356C4
/* 80135658 00132598  7F C3 F3 78 */	mr r3, r30
/* 8013565C 0013259C  7F 85 E3 78 */	mr r5, r28
/* 80135660 001325A0  48 00 00 9D */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 80135664 001325A4  48 00 00 60 */	b .L_801356C4
.L_80135668:
/* 80135668 001325A8  28 03 00 00 */	cmplwi r3, 0
/* 8013566C 001325AC  40 82 00 18 */	bne .L_80135684
/* 80135670 001325B0  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 80135674 001325B4  7F C3 F3 78 */	mr r3, r30
/* 80135678 001325B8  7F 85 E3 78 */	mr r5, r28
/* 8013567C 001325BC  48 00 00 81 */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 80135680 001325C0  48 00 00 44 */	b .L_801356C4
.L_80135684:
/* 80135684 001325C4  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 80135688 001325C8  28 04 00 00 */	cmplwi r4, 0
/* 8013568C 001325CC  40 82 00 14 */	bne .L_801356A0
/* 80135690 001325D0  7F A4 EB 78 */	mr r4, r29
/* 80135694 001325D4  7F 85 E3 78 */	mr r5, r28
/* 80135698 001325D8  48 00 00 65 */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 8013569C 001325DC  48 00 00 28 */	b .L_801356C4
.L_801356A0:
/* 801356A0 001325E0  28 03 00 00 */	cmplwi r3, 0
/* 801356A4 001325E4  41 82 00 14 */	beq .L_801356B8
/* 801356A8 001325E8  7F A4 EB 78 */	mr r4, r29
/* 801356AC 001325EC  7F 85 E3 78 */	mr r5, r28
/* 801356B0 001325F0  48 00 00 4D */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 801356B4 001325F4  48 00 00 10 */	b .L_801356C4
.L_801356B8:
/* 801356B8 001325F8  7F C3 F3 78 */	mr r3, r30
/* 801356BC 001325FC  7F 85 E3 78 */	mr r5, r28
/* 801356C0 00132600  48 00 00 3D */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
.L_801356C4:
/* 801356C4 00132604  83 BD 00 04 */	lwz r29, 4(r29)
.L_801356C8:
/* 801356C8 00132608  28 1D 00 00 */	cmplwi r29, 0
/* 801356CC 0013260C  40 82 FE CC */	bne .L_80135598
/* 801356D0 00132610  83 DE 00 04 */	lwz r30, 4(r30)
.L_801356D4:
/* 801356D4 00132614  28 1E 00 00 */	cmplwi r30, 0
/* 801356D8 00132618  40 82 FE B8 */	bne .L_80135590
/* 801356DC 0013261C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801356E0 00132620  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801356E4 00132624  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801356E8 00132628  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801356EC 0013262C  83 81 00 20 */	lwz r28, 0x20(r1)
/* 801356F0 00132630  7C 08 03 A6 */	mtlr r0
/* 801356F4 00132634  38 21 00 30 */	addi r1, r1, 0x30
/* 801356F8 00132638  4E 80 00 20 */	blr 
.endfn "checkCollisionMulti__8CollTreeFP8CollTreeP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"

.fn "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>", global
/* 801356FC 0013263C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80135700 00132640  7C 08 02 A6 */	mflr r0
/* 80135704 00132644  90 01 00 34 */	stw r0, 0x34(r1)
/* 80135708 00132648  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8013570C 0013264C  7C 7F 1B 78 */	mr r31, r3
/* 80135710 00132650  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80135714 00132654  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80135718 00132658  7C BD 2B 78 */	mr r29, r5
/* 8013571C 0013265C  93 81 00 20 */	stw r28, 0x20(r1)
/* 80135720 00132660  7C 9C 23 78 */	mr r28, r4
/* 80135724 00132664  48 00 01 A0 */	b .L_801358C4
.L_80135728:
/* 80135728 00132668  7F 9E E3 78 */	mr r30, r28
/* 8013572C 0013266C  48 00 01 8C */	b .L_801358B8
.L_80135730:
/* 80135730 00132670  7F E3 FB 78 */	mr r3, r31
/* 80135734 00132674  7F C4 F3 78 */	mr r4, r30
/* 80135738 00132678  38 A1 00 08 */	addi r5, r1, 8
/* 8013573C 0013267C  48 00 01 B1 */	bl "collide__8CollPartFP8CollPartR10Vector3<f>"
/* 80135740 00132680  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135744 00132684  41 82 01 24 */	beq .L_80135868
/* 80135748 00132688  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8013574C 0013268C  38 60 00 00 */	li r3, 0
/* 80135750 00132690  28 04 00 00 */	cmplwi r4, 0
/* 80135754 00132694  41 82 00 18 */	beq .L_8013576C
/* 80135758 00132698  88 1F 00 58 */	lbz r0, 0x58(r31)
/* 8013575C 0013269C  28 00 00 01 */	cmplwi r0, 1
/* 80135760 001326A0  41 82 00 0C */	beq .L_8013576C
/* 80135764 001326A4  28 00 00 02 */	cmplwi r0, 2
/* 80135768 001326A8  40 82 00 08 */	bne .L_80135770
.L_8013576C:
/* 8013576C 001326AC  38 60 00 01 */	li r3, 1
.L_80135770:
/* 80135770 001326B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135774 001326B4  41 82 00 8C */	beq .L_80135800
/* 80135778 001326B8  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8013577C 001326BC  38 60 00 00 */	li r3, 0
/* 80135780 001326C0  28 00 00 00 */	cmplwi r0, 0
/* 80135784 001326C4  41 82 00 18 */	beq .L_8013579C
/* 80135788 001326C8  88 1E 00 58 */	lbz r0, 0x58(r30)
/* 8013578C 001326CC  28 00 00 01 */	cmplwi r0, 1
/* 80135790 001326D0  41 82 00 0C */	beq .L_8013579C
/* 80135794 001326D4  28 00 00 02 */	cmplwi r0, 2
/* 80135798 001326D8  40 82 00 08 */	bne .L_801357A0
.L_8013579C:
/* 8013579C 001326DC  38 60 00 01 */	li r3, 1
.L_801357A0:
/* 801357A0 001326E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801357A4 001326E4  41 82 00 5C */	beq .L_80135800
/* 801357A8 001326E8  7F A3 EB 78 */	mr r3, r29
/* 801357AC 001326EC  7F E4 FB 78 */	mr r4, r31
/* 801357B0 001326F0  81 9D 00 00 */	lwz r12, 0(r29)
/* 801357B4 001326F4  7F C5 F3 78 */	mr r5, r30
/* 801357B8 001326F8  38 C1 00 08 */	addi r6, r1, 8
/* 801357BC 001326FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801357C0 00132700  7D 89 03 A6 */	mtctr r12
/* 801357C4 00132704  4E 80 04 21 */	bctrl 
/* 801357C8 00132708  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 801357CC 0013270C  28 04 00 00 */	cmplwi r4, 0
/* 801357D0 00132710  41 82 00 14 */	beq .L_801357E4
/* 801357D4 00132714  7F E3 FB 78 */	mr r3, r31
/* 801357D8 00132718  7F A5 EB 78 */	mr r5, r29
/* 801357DC 0013271C  4B FF FF 21 */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 801357E0 00132720  48 00 00 D4 */	b .L_801358B4
.L_801357E4:
/* 801357E4 00132724  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 801357E8 00132728  28 04 00 00 */	cmplwi r4, 0
/* 801357EC 0013272C  41 82 00 C8 */	beq .L_801358B4
/* 801357F0 00132730  7F C3 F3 78 */	mr r3, r30
/* 801357F4 00132734  7F A5 EB 78 */	mr r5, r29
/* 801357F8 00132738  4B FF FF 05 */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 801357FC 0013273C  48 00 00 B8 */	b .L_801358B4
.L_80135800:
/* 80135800 00132740  28 04 00 00 */	cmplwi r4, 0
/* 80135804 00132744  40 82 00 18 */	bne .L_8013581C
/* 80135808 00132748  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 8013580C 0013274C  7F E3 FB 78 */	mr r3, r31
/* 80135810 00132750  7F A5 EB 78 */	mr r5, r29
/* 80135814 00132754  4B FF FE E9 */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 80135818 00132758  48 00 00 9C */	b .L_801358B4
.L_8013581C:
/* 8013581C 0013275C  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80135820 00132760  28 00 00 00 */	cmplwi r0, 0
/* 80135824 00132764  40 82 00 14 */	bne .L_80135838
/* 80135828 00132768  7F C3 F3 78 */	mr r3, r30
/* 8013582C 0013276C  7F A5 EB 78 */	mr r5, r29
/* 80135830 00132770  4B FF FE CD */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 80135834 00132774  48 00 00 80 */	b .L_801358B4
.L_80135838:
/* 80135838 00132778  28 04 00 00 */	cmplwi r4, 0
/* 8013583C 0013277C  41 82 00 18 */	beq .L_80135854
/* 80135840 00132780  7C 83 23 78 */	mr r3, r4
/* 80135844 00132784  7F C4 F3 78 */	mr r4, r30
/* 80135848 00132788  7F A5 EB 78 */	mr r5, r29
/* 8013584C 0013278C  4B FF FE B1 */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 80135850 00132790  48 00 00 64 */	b .L_801358B4
.L_80135854:
/* 80135854 00132794  7F E3 FB 78 */	mr r3, r31
/* 80135858 00132798  7C 04 03 78 */	mr r4, r0
/* 8013585C 0013279C  7F A5 EB 78 */	mr r5, r29
/* 80135860 001327A0  4B FF FE 9D */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 80135864 001327A4  48 00 00 50 */	b .L_801358B4
.L_80135868:
/* 80135868 001327A8  88 1F 00 58 */	lbz r0, 0x58(r31)
/* 8013586C 001327AC  28 00 00 01 */	cmplwi r0, 1
/* 80135870 001327B0  41 82 00 0C */	beq .L_8013587C
/* 80135874 001327B4  28 00 00 02 */	cmplwi r0, 2
/* 80135878 001327B8  40 82 00 18 */	bne .L_80135890
.L_8013587C:
/* 8013587C 001327BC  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 80135880 001327C0  7F C3 F3 78 */	mr r3, r30
/* 80135884 001327C4  7F A5 EB 78 */	mr r5, r29
/* 80135888 001327C8  4B FF FE 75 */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
/* 8013588C 001327CC  48 00 00 28 */	b .L_801358B4
.L_80135890:
/* 80135890 001327D0  88 1E 00 58 */	lbz r0, 0x58(r30)
/* 80135894 001327D4  28 00 00 01 */	cmplwi r0, 1
/* 80135898 001327D8  41 82 00 0C */	beq .L_801358A4
/* 8013589C 001327DC  28 00 00 02 */	cmplwi r0, 2
/* 801358A0 001327E0  40 82 00 14 */	bne .L_801358B4
.L_801358A4:
/* 801358A4 001327E4  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 801358A8 001327E8  7F E3 FB 78 */	mr r3, r31
/* 801358AC 001327EC  7F A5 EB 78 */	mr r5, r29
/* 801358B0 001327F0  4B FF FE 4D */	bl "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
.L_801358B4:
/* 801358B4 001327F4  83 DE 00 04 */	lwz r30, 4(r30)
.L_801358B8:
/* 801358B8 001327F8  28 1E 00 00 */	cmplwi r30, 0
/* 801358BC 001327FC  40 82 FE 74 */	bne .L_80135730
/* 801358C0 00132800  83 FF 00 04 */	lwz r31, 4(r31)
.L_801358C4:
/* 801358C4 00132804  28 1F 00 00 */	cmplwi r31, 0
/* 801358C8 00132808  40 82 FE 60 */	bne .L_80135728
/* 801358CC 0013280C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801358D0 00132810  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801358D4 00132814  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801358D8 00132818  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801358DC 0013281C  83 81 00 20 */	lwz r28, 0x20(r1)
/* 801358E0 00132820  7C 08 03 A6 */	mtlr r0
/* 801358E4 00132824  38 21 00 30 */	addi r1, r1, 0x30
/* 801358E8 00132828  4E 80 00 20 */	blr 
.endfn "checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"

.fn "collide__8CollPartFP8CollPartR10Vector3<f>", global
/* 801358EC 0013282C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 801358F0 00132830  7C 08 02 A6 */	mflr r0
/* 801358F4 00132834  90 01 00 94 */	stw r0, 0x94(r1)
/* 801358F8 00132838  88 C3 00 58 */	lbz r6, 0x58(r3)
/* 801358FC 0013283C  28 06 00 00 */	cmplwi r6, 0
/* 80135900 00132840  40 82 00 60 */	bne .L_80135960
/* 80135904 00132844  88 04 00 58 */	lbz r0, 0x58(r4)
/* 80135908 00132848  28 00 00 00 */	cmplwi r0, 0
/* 8013590C 0013284C  40 82 00 54 */	bne .L_80135960
/* 80135910 00132850  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80135914 00132854  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80135918 00132858  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8013591C 0013285C  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 80135920 00132860  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80135924 00132864  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80135928 00132868  38 61 00 40 */	addi r3, r1, 0x40
/* 8013592C 0013286C  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80135930 00132870  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 80135934 00132874  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 80135938 00132878  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 8013593C 0013287C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80135940 00132880  C0 04 00 50 */	lfs f0, 0x50(r4)
/* 80135944 00132884  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80135948 00132888  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8013594C 0013288C  38 81 00 30 */	addi r4, r1, 0x30
/* 80135950 00132890  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80135954 00132894  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80135958 00132898  48 2E 06 15 */	bl "intersect__Q23Sys6SphereFRQ23Sys6SphereR10Vector3<f>"
/* 8013595C 0013289C  48 00 01 30 */	b .L_80135A8C
.L_80135960:
/* 80135960 001328A0  28 06 00 00 */	cmplwi r6, 0
/* 80135964 001328A4  40 82 00 90 */	bne .L_801359F4
/* 80135968 001328A8  88 04 00 58 */	lbz r0, 0x58(r4)
/* 8013596C 001328AC  28 00 00 01 */	cmplwi r0, 1
/* 80135970 001328B0  41 82 00 0C */	beq .L_8013597C
/* 80135974 001328B4  28 00 00 02 */	cmplwi r0, 2
/* 80135978 001328B8  40 82 00 7C */	bne .L_801359F4
.L_8013597C:
/* 8013597C 001328BC  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80135980 001328C0  38 C1 00 0C */	addi r6, r1, 0xc
/* 80135984 001328C4  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80135988 001328C8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8013598C 001328CC  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 80135990 001328D0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80135994 001328D4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80135998 001328D8  38 61 00 70 */	addi r3, r1, 0x70
/* 8013599C 001328DC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801359A0 001328E0  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 801359A4 001328E4  80 E4 00 10 */	lwz r7, 0x10(r4)
/* 801359A8 001328E8  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 801359AC 001328EC  C0 47 00 1C */	lfs f2, 0x1c(r7)
/* 801359B0 001328F0  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 801359B4 001328F4  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 801359B8 001328F8  C0 04 00 50 */	lfs f0, 0x50(r4)
/* 801359BC 001328FC  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 801359C0 00132900  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 801359C4 00132904  38 81 00 20 */	addi r4, r1, 0x20
/* 801359C8 00132908  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 801359CC 0013290C  C0 07 00 4C */	lfs f0, 0x4c(r7)
/* 801359D0 00132910  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 801359D4 00132914  C0 07 00 50 */	lfs f0, 0x50(r7)
/* 801359D8 00132918  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 801359DC 0013291C  C0 07 00 54 */	lfs f0, 0x54(r7)
/* 801359E0 00132920  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 801359E4 00132924  D0 21 00 88 */	stfs f1, 0x88(r1)
/* 801359E8 00132928  D0 41 00 8C */	stfs f2, 0x8c(r1)
/* 801359EC 0013292C  48 2E 01 6D */	bl "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
/* 801359F0 00132930  48 00 00 9C */	b .L_80135A8C
.L_801359F4:
/* 801359F4 00132934  28 06 00 01 */	cmplwi r6, 1
/* 801359F8 00132938  41 82 00 0C */	beq .L_80135A04
/* 801359FC 0013293C  28 06 00 02 */	cmplwi r6, 2
/* 80135A00 00132940  40 82 00 88 */	bne .L_80135A88
.L_80135A04:
/* 80135A04 00132944  88 04 00 58 */	lbz r0, 0x58(r4)
/* 80135A08 00132948  28 00 00 00 */	cmplwi r0, 0
/* 80135A0C 0013294C  40 82 00 7C */	bne .L_80135A88
/* 80135A10 00132950  80 E3 00 10 */	lwz r7, 0x10(r3)
/* 80135A14 00132954  38 C1 00 08 */	addi r6, r1, 8
/* 80135A18 00132958  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 80135A1C 0013295C  C0 47 00 1C */	lfs f2, 0x1c(r7)
/* 80135A20 00132960  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80135A24 00132964  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 80135A28 00132968  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 80135A2C 0013296C  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80135A30 00132970  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80135A34 00132974  38 61 00 50 */	addi r3, r1, 0x50
/* 80135A38 00132978  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80135A3C 0013297C  C0 07 00 4C */	lfs f0, 0x4c(r7)
/* 80135A40 00132980  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80135A44 00132984  C0 07 00 50 */	lfs f0, 0x50(r7)
/* 80135A48 00132988  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80135A4C 0013298C  C0 07 00 54 */	lfs f0, 0x54(r7)
/* 80135A50 00132990  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 80135A54 00132994  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 80135A58 00132998  D0 41 00 6C */	stfs f2, 0x6c(r1)
/* 80135A5C 0013299C  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 80135A60 001329A0  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 80135A64 001329A4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80135A68 001329A8  C0 04 00 50 */	lfs f0, 0x50(r4)
/* 80135A6C 001329AC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80135A70 001329B0  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 80135A74 001329B4  38 81 00 10 */	addi r4, r1, 0x10
/* 80135A78 001329B8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80135A7C 001329BC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80135A80 001329C0  48 2E 00 D9 */	bl "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
/* 80135A84 001329C4  48 00 00 08 */	b .L_80135A8C
.L_80135A88:
/* 80135A88 001329C8  38 60 00 00 */	li r3, 0
.L_80135A8C:
/* 80135A8C 001329CC  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80135A90 001329D0  7C 08 03 A6 */	mtlr r0
/* 80135A94 001329D4  38 21 00 90 */	addi r1, r1, 0x90
/* 80135A98 001329D8  4E 80 00 20 */	blr 
.endfn "collide__8CollPartFP8CollPartR10Vector3<f>"

.fn update__8CollTreeFv, global
/* 80135A9C 001329DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135AA0 001329E0  7C 08 02 A6 */	mflr r0
/* 80135AA4 001329E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135AA8 001329E8  80 63 00 00 */	lwz r3, 0(r3)
/* 80135AAC 001329EC  28 03 00 00 */	cmplwi r3, 0
/* 80135AB0 001329F0  41 82 00 08 */	beq .L_80135AB8
/* 80135AB4 001329F4  48 00 13 2D */	bl update__8CollPartFv
.L_80135AB8:
/* 80135AB8 001329F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135ABC 001329FC  7C 08 03 A6 */	mtlr r0
/* 80135AC0 00132A00  38 21 00 10 */	addi r1, r1, 0x10
/* 80135AC4 00132A04  4E 80 00 20 */	blr 
.endfn update__8CollTreeFv

.fn attachModel__8CollTreeFPQ28SysShape9MtxObject, global
/* 80135AC8 00132A08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135ACC 00132A0C  7C 08 02 A6 */	mflr r0
/* 80135AD0 00132A10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135AD4 00132A14  80 63 00 00 */	lwz r3, 0(r3)
/* 80135AD8 00132A18  28 03 00 00 */	cmplwi r3, 0
/* 80135ADC 00132A1C  41 82 00 08 */	beq .L_80135AE4
/* 80135AE0 00132A20  48 00 00 15 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135AE4:
/* 80135AE4 00132A24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135AE8 00132A28  7C 08 03 A6 */	mtlr r0
/* 80135AEC 00132A2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80135AF0 00132A30  4E 80 00 20 */	blr 
.endfn attachModel__8CollTreeFPQ28SysShape9MtxObject

.fn attachModel__8CollPartFPQ28SysShape9MtxObject, global
/* 80135AF4 00132A34  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80135AF8 00132A38  7C 08 02 A6 */	mflr r0
/* 80135AFC 00132A3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80135B00 00132A40  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80135B04 00132A44  7C 9F 23 78 */	mr r31, r4
/* 80135B08 00132A48  7C 7E 1B 78 */	mr r30, r3
/* 80135B0C 00132A4C  93 E3 00 5C */	stw r31, 0x5c(r3)
/* 80135B10 00132A50  83 83 00 04 */	lwz r28, 4(r3)
/* 80135B14 00132A54  28 1C 00 00 */	cmplwi r28, 0
/* 80135B18 00132A58  41 82 01 88 */	beq .L_80135CA0
/* 80135B1C 00132A5C  93 FC 00 5C */	stw r31, 0x5c(r28)
/* 80135B20 00132A60  83 7C 00 04 */	lwz r27, 4(r28)
/* 80135B24 00132A64  28 1B 00 00 */	cmplwi r27, 0
/* 80135B28 00132A68  41 82 00 B8 */	beq .L_80135BE0
/* 80135B2C 00132A6C  93 FB 00 5C */	stw r31, 0x5c(r27)
/* 80135B30 00132A70  80 1B 00 04 */	lwz r0, 4(r27)
/* 80135B34 00132A74  28 00 00 00 */	cmplwi r0, 0
/* 80135B38 00132A78  41 82 00 50 */	beq .L_80135B88
/* 80135B3C 00132A7C  7F 63 DB 78 */	mr r3, r27
/* 80135B40 00132A80  4B FF EA 09 */	bl getNext__8CollPartFv
/* 80135B44 00132A84  93 E3 00 5C */	stw r31, 0x5c(r3)
/* 80135B48 00132A88  7C 7D 1B 78 */	mr r29, r3
/* 80135B4C 00132A8C  4B FF E9 FD */	bl getNext__8CollPartFv
/* 80135B50 00132A90  28 03 00 00 */	cmplwi r3, 0
/* 80135B54 00132A94  41 82 00 14 */	beq .L_80135B68
/* 80135B58 00132A98  7F A3 EB 78 */	mr r3, r29
/* 80135B5C 00132A9C  4B FF E9 ED */	bl getNext__8CollPartFv
/* 80135B60 00132AA0  7F E4 FB 78 */	mr r4, r31
/* 80135B64 00132AA4  4B FF FF 91 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135B68:
/* 80135B68 00132AA8  7F A3 EB 78 */	mr r3, r29
/* 80135B6C 00132AAC  4B FF E9 D5 */	bl getChild__8CollPartFv
/* 80135B70 00132AB0  28 03 00 00 */	cmplwi r3, 0
/* 80135B74 00132AB4  41 82 00 14 */	beq .L_80135B88
/* 80135B78 00132AB8  7F A3 EB 78 */	mr r3, r29
/* 80135B7C 00132ABC  4B FF E9 C5 */	bl getChild__8CollPartFv
/* 80135B80 00132AC0  7F E4 FB 78 */	mr r4, r31
/* 80135B84 00132AC4  4B FF FF 71 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135B88:
/* 80135B88 00132AC8  80 1B 00 10 */	lwz r0, 0x10(r27)
/* 80135B8C 00132ACC  28 00 00 00 */	cmplwi r0, 0
/* 80135B90 00132AD0  41 82 00 50 */	beq .L_80135BE0
/* 80135B94 00132AD4  7F 63 DB 78 */	mr r3, r27
/* 80135B98 00132AD8  4B FF E9 A9 */	bl getChild__8CollPartFv
/* 80135B9C 00132ADC  93 E3 00 5C */	stw r31, 0x5c(r3)
/* 80135BA0 00132AE0  7C 7D 1B 78 */	mr r29, r3
/* 80135BA4 00132AE4  4B FF E9 A5 */	bl getNext__8CollPartFv
/* 80135BA8 00132AE8  28 03 00 00 */	cmplwi r3, 0
/* 80135BAC 00132AEC  41 82 00 14 */	beq .L_80135BC0
/* 80135BB0 00132AF0  7F A3 EB 78 */	mr r3, r29
/* 80135BB4 00132AF4  4B FF E9 95 */	bl getNext__8CollPartFv
/* 80135BB8 00132AF8  7F E4 FB 78 */	mr r4, r31
/* 80135BBC 00132AFC  4B FF FF 39 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135BC0:
/* 80135BC0 00132B00  7F A3 EB 78 */	mr r3, r29
/* 80135BC4 00132B04  4B FF E9 7D */	bl getChild__8CollPartFv
/* 80135BC8 00132B08  28 03 00 00 */	cmplwi r3, 0
/* 80135BCC 00132B0C  41 82 00 14 */	beq .L_80135BE0
/* 80135BD0 00132B10  7F A3 EB 78 */	mr r3, r29
/* 80135BD4 00132B14  4B FF E9 6D */	bl getChild__8CollPartFv
/* 80135BD8 00132B18  7F E4 FB 78 */	mr r4, r31
/* 80135BDC 00132B1C  4B FF FF 19 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135BE0:
/* 80135BE0 00132B20  83 7C 00 10 */	lwz r27, 0x10(r28)
/* 80135BE4 00132B24  28 1B 00 00 */	cmplwi r27, 0
/* 80135BE8 00132B28  41 82 00 B8 */	beq .L_80135CA0
/* 80135BEC 00132B2C  93 FB 00 5C */	stw r31, 0x5c(r27)
/* 80135BF0 00132B30  80 1B 00 04 */	lwz r0, 4(r27)
/* 80135BF4 00132B34  28 00 00 00 */	cmplwi r0, 0
/* 80135BF8 00132B38  41 82 00 50 */	beq .L_80135C48
/* 80135BFC 00132B3C  7F 63 DB 78 */	mr r3, r27
/* 80135C00 00132B40  4B FF E9 49 */	bl getNext__8CollPartFv
/* 80135C04 00132B44  93 E3 00 5C */	stw r31, 0x5c(r3)
/* 80135C08 00132B48  7C 7D 1B 78 */	mr r29, r3
/* 80135C0C 00132B4C  4B FF E9 3D */	bl getNext__8CollPartFv
/* 80135C10 00132B50  28 03 00 00 */	cmplwi r3, 0
/* 80135C14 00132B54  41 82 00 14 */	beq .L_80135C28
/* 80135C18 00132B58  7F A3 EB 78 */	mr r3, r29
/* 80135C1C 00132B5C  4B FF E9 2D */	bl getNext__8CollPartFv
/* 80135C20 00132B60  7F E4 FB 78 */	mr r4, r31
/* 80135C24 00132B64  4B FF FE D1 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135C28:
/* 80135C28 00132B68  7F A3 EB 78 */	mr r3, r29
/* 80135C2C 00132B6C  4B FF E9 15 */	bl getChild__8CollPartFv
/* 80135C30 00132B70  28 03 00 00 */	cmplwi r3, 0
/* 80135C34 00132B74  41 82 00 14 */	beq .L_80135C48
/* 80135C38 00132B78  7F A3 EB 78 */	mr r3, r29
/* 80135C3C 00132B7C  4B FF E9 05 */	bl getChild__8CollPartFv
/* 80135C40 00132B80  7F E4 FB 78 */	mr r4, r31
/* 80135C44 00132B84  4B FF FE B1 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135C48:
/* 80135C48 00132B88  80 1B 00 10 */	lwz r0, 0x10(r27)
/* 80135C4C 00132B8C  28 00 00 00 */	cmplwi r0, 0
/* 80135C50 00132B90  41 82 00 50 */	beq .L_80135CA0
/* 80135C54 00132B94  7F 63 DB 78 */	mr r3, r27
/* 80135C58 00132B98  4B FF E8 E9 */	bl getChild__8CollPartFv
/* 80135C5C 00132B9C  93 E3 00 5C */	stw r31, 0x5c(r3)
/* 80135C60 00132BA0  7C 7D 1B 78 */	mr r29, r3
/* 80135C64 00132BA4  4B FF E8 E5 */	bl getNext__8CollPartFv
/* 80135C68 00132BA8  28 03 00 00 */	cmplwi r3, 0
/* 80135C6C 00132BAC  41 82 00 14 */	beq .L_80135C80
/* 80135C70 00132BB0  7F A3 EB 78 */	mr r3, r29
/* 80135C74 00132BB4  4B FF E8 D5 */	bl getNext__8CollPartFv
/* 80135C78 00132BB8  7F E4 FB 78 */	mr r4, r31
/* 80135C7C 00132BBC  4B FF FE 79 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135C80:
/* 80135C80 00132BC0  7F A3 EB 78 */	mr r3, r29
/* 80135C84 00132BC4  4B FF E8 BD */	bl getChild__8CollPartFv
/* 80135C88 00132BC8  28 03 00 00 */	cmplwi r3, 0
/* 80135C8C 00132BCC  41 82 00 14 */	beq .L_80135CA0
/* 80135C90 00132BD0  7F A3 EB 78 */	mr r3, r29
/* 80135C94 00132BD4  4B FF E8 AD */	bl getChild__8CollPartFv
/* 80135C98 00132BD8  7F E4 FB 78 */	mr r4, r31
/* 80135C9C 00132BDC  4B FF FE 59 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135CA0:
/* 80135CA0 00132BE0  83 7E 00 10 */	lwz r27, 0x10(r30)
/* 80135CA4 00132BE4  28 1B 00 00 */	cmplwi r27, 0
/* 80135CA8 00132BE8  41 82 01 88 */	beq .L_80135E30
/* 80135CAC 00132BEC  93 FB 00 5C */	stw r31, 0x5c(r27)
/* 80135CB0 00132BF0  83 9B 00 04 */	lwz r28, 4(r27)
/* 80135CB4 00132BF4  28 1C 00 00 */	cmplwi r28, 0
/* 80135CB8 00132BF8  41 82 00 B8 */	beq .L_80135D70
/* 80135CBC 00132BFC  93 FC 00 5C */	stw r31, 0x5c(r28)
/* 80135CC0 00132C00  80 1C 00 04 */	lwz r0, 4(r28)
/* 80135CC4 00132C04  28 00 00 00 */	cmplwi r0, 0
/* 80135CC8 00132C08  41 82 00 50 */	beq .L_80135D18
/* 80135CCC 00132C0C  7F 83 E3 78 */	mr r3, r28
/* 80135CD0 00132C10  4B FF E8 79 */	bl getNext__8CollPartFv
/* 80135CD4 00132C14  93 E3 00 5C */	stw r31, 0x5c(r3)
/* 80135CD8 00132C18  7C 7D 1B 78 */	mr r29, r3
/* 80135CDC 00132C1C  4B FF E8 6D */	bl getNext__8CollPartFv
/* 80135CE0 00132C20  28 03 00 00 */	cmplwi r3, 0
/* 80135CE4 00132C24  41 82 00 14 */	beq .L_80135CF8
/* 80135CE8 00132C28  7F A3 EB 78 */	mr r3, r29
/* 80135CEC 00132C2C  4B FF E8 5D */	bl getNext__8CollPartFv
/* 80135CF0 00132C30  7F E4 FB 78 */	mr r4, r31
/* 80135CF4 00132C34  4B FF FE 01 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135CF8:
/* 80135CF8 00132C38  7F A3 EB 78 */	mr r3, r29
/* 80135CFC 00132C3C  4B FF E8 45 */	bl getChild__8CollPartFv
/* 80135D00 00132C40  28 03 00 00 */	cmplwi r3, 0
/* 80135D04 00132C44  41 82 00 14 */	beq .L_80135D18
/* 80135D08 00132C48  7F A3 EB 78 */	mr r3, r29
/* 80135D0C 00132C4C  4B FF E8 35 */	bl getChild__8CollPartFv
/* 80135D10 00132C50  7F E4 FB 78 */	mr r4, r31
/* 80135D14 00132C54  4B FF FD E1 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135D18:
/* 80135D18 00132C58  80 1C 00 10 */	lwz r0, 0x10(r28)
/* 80135D1C 00132C5C  28 00 00 00 */	cmplwi r0, 0
/* 80135D20 00132C60  41 82 00 50 */	beq .L_80135D70
/* 80135D24 00132C64  7F 83 E3 78 */	mr r3, r28
/* 80135D28 00132C68  4B FF E8 19 */	bl getChild__8CollPartFv
/* 80135D2C 00132C6C  93 E3 00 5C */	stw r31, 0x5c(r3)
/* 80135D30 00132C70  7C 7D 1B 78 */	mr r29, r3
/* 80135D34 00132C74  4B FF E8 15 */	bl getNext__8CollPartFv
/* 80135D38 00132C78  28 03 00 00 */	cmplwi r3, 0
/* 80135D3C 00132C7C  41 82 00 14 */	beq .L_80135D50
/* 80135D40 00132C80  7F A3 EB 78 */	mr r3, r29
/* 80135D44 00132C84  4B FF E8 05 */	bl getNext__8CollPartFv
/* 80135D48 00132C88  7F E4 FB 78 */	mr r4, r31
/* 80135D4C 00132C8C  4B FF FD A9 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135D50:
/* 80135D50 00132C90  7F A3 EB 78 */	mr r3, r29
/* 80135D54 00132C94  4B FF E7 ED */	bl getChild__8CollPartFv
/* 80135D58 00132C98  28 03 00 00 */	cmplwi r3, 0
/* 80135D5C 00132C9C  41 82 00 14 */	beq .L_80135D70
/* 80135D60 00132CA0  7F A3 EB 78 */	mr r3, r29
/* 80135D64 00132CA4  4B FF E7 DD */	bl getChild__8CollPartFv
/* 80135D68 00132CA8  7F E4 FB 78 */	mr r4, r31
/* 80135D6C 00132CAC  4B FF FD 89 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135D70:
/* 80135D70 00132CB0  83 7B 00 10 */	lwz r27, 0x10(r27)
/* 80135D74 00132CB4  28 1B 00 00 */	cmplwi r27, 0
/* 80135D78 00132CB8  41 82 00 B8 */	beq .L_80135E30
/* 80135D7C 00132CBC  93 FB 00 5C */	stw r31, 0x5c(r27)
/* 80135D80 00132CC0  80 1B 00 04 */	lwz r0, 4(r27)
/* 80135D84 00132CC4  28 00 00 00 */	cmplwi r0, 0
/* 80135D88 00132CC8  41 82 00 50 */	beq .L_80135DD8
/* 80135D8C 00132CCC  7F 63 DB 78 */	mr r3, r27
/* 80135D90 00132CD0  4B FF E7 B9 */	bl getNext__8CollPartFv
/* 80135D94 00132CD4  93 E3 00 5C */	stw r31, 0x5c(r3)
/* 80135D98 00132CD8  7C 7D 1B 78 */	mr r29, r3
/* 80135D9C 00132CDC  4B FF E7 AD */	bl getNext__8CollPartFv
/* 80135DA0 00132CE0  28 03 00 00 */	cmplwi r3, 0
/* 80135DA4 00132CE4  41 82 00 14 */	beq .L_80135DB8
/* 80135DA8 00132CE8  7F A3 EB 78 */	mr r3, r29
/* 80135DAC 00132CEC  4B FF E7 9D */	bl getNext__8CollPartFv
/* 80135DB0 00132CF0  7F E4 FB 78 */	mr r4, r31
/* 80135DB4 00132CF4  4B FF FD 41 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135DB8:
/* 80135DB8 00132CF8  7F A3 EB 78 */	mr r3, r29
/* 80135DBC 00132CFC  4B FF E7 85 */	bl getChild__8CollPartFv
/* 80135DC0 00132D00  28 03 00 00 */	cmplwi r3, 0
/* 80135DC4 00132D04  41 82 00 14 */	beq .L_80135DD8
/* 80135DC8 00132D08  7F A3 EB 78 */	mr r3, r29
/* 80135DCC 00132D0C  4B FF E7 75 */	bl getChild__8CollPartFv
/* 80135DD0 00132D10  7F E4 FB 78 */	mr r4, r31
/* 80135DD4 00132D14  4B FF FD 21 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135DD8:
/* 80135DD8 00132D18  80 1B 00 10 */	lwz r0, 0x10(r27)
/* 80135DDC 00132D1C  28 00 00 00 */	cmplwi r0, 0
/* 80135DE0 00132D20  41 82 00 50 */	beq .L_80135E30
/* 80135DE4 00132D24  7F 63 DB 78 */	mr r3, r27
/* 80135DE8 00132D28  4B FF E7 59 */	bl getChild__8CollPartFv
/* 80135DEC 00132D2C  93 E3 00 5C */	stw r31, 0x5c(r3)
/* 80135DF0 00132D30  7C 7D 1B 78 */	mr r29, r3
/* 80135DF4 00132D34  4B FF E7 55 */	bl getNext__8CollPartFv
/* 80135DF8 00132D38  28 03 00 00 */	cmplwi r3, 0
/* 80135DFC 00132D3C  41 82 00 14 */	beq .L_80135E10
/* 80135E00 00132D40  7F A3 EB 78 */	mr r3, r29
/* 80135E04 00132D44  4B FF E7 45 */	bl getNext__8CollPartFv
/* 80135E08 00132D48  7F E4 FB 78 */	mr r4, r31
/* 80135E0C 00132D4C  4B FF FC E9 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135E10:
/* 80135E10 00132D50  7F A3 EB 78 */	mr r3, r29
/* 80135E14 00132D54  4B FF E7 2D */	bl getChild__8CollPartFv
/* 80135E18 00132D58  28 03 00 00 */	cmplwi r3, 0
/* 80135E1C 00132D5C  41 82 00 14 */	beq .L_80135E30
/* 80135E20 00132D60  7F A3 EB 78 */	mr r3, r29
/* 80135E24 00132D64  4B FF E7 1D */	bl getChild__8CollPartFv
/* 80135E28 00132D68  7F E4 FB 78 */	mr r4, r31
/* 80135E2C 00132D6C  4B FF FC C9 */	bl attachModel__8CollPartFPQ28SysShape9MtxObject
.L_80135E30:
/* 80135E30 00132D70  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80135E34 00132D74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80135E38 00132D78  7C 08 03 A6 */	mtlr r0
/* 80135E3C 00132D7C  38 21 00 20 */	addi r1, r1, 0x20
/* 80135E40 00132D80  4E 80 00 20 */	blr 
.endfn attachModel__8CollPartFPQ28SysShape9MtxObject

.fn getCollPart__8CollTreeFUl, global
/* 80135E44 00132D84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135E48 00132D88  7C 08 02 A6 */	mflr r0
/* 80135E4C 00132D8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135E50 00132D90  80 63 00 00 */	lwz r3, 0(r3)
/* 80135E54 00132D94  28 03 00 00 */	cmplwi r3, 0
/* 80135E58 00132D98  41 82 00 0C */	beq .L_80135E64
/* 80135E5C 00132D9C  48 00 00 1D */	bl getCollPart__8CollPartFUl
/* 80135E60 00132DA0  48 00 00 08 */	b .L_80135E68
.L_80135E64:
/* 80135E64 00132DA4  38 60 00 00 */	li r3, 0
.L_80135E68:
/* 80135E68 00132DA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135E6C 00132DAC  7C 08 03 A6 */	mtlr r0
/* 80135E70 00132DB0  38 21 00 10 */	addi r1, r1, 0x10
/* 80135E74 00132DB4  4E 80 00 20 */	blr 
.endfn getCollPart__8CollTreeFUl

.fn getCollPart__8CollPartFUl, global
/* 80135E78 00132DB8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80135E7C 00132DBC  7C 08 02 A6 */	mflr r0
/* 80135E80 00132DC0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80135E84 00132DC4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80135E88 00132DC8  7C 7D 1B 78 */	mr r29, r3
/* 80135E8C 00132DCC  7C 9E 23 78 */	mr r30, r4
/* 80135E90 00132DD0  38 7D 00 30 */	addi r3, r29, 0x30
/* 80135E94 00132DD4  48 2D D5 A1 */	bl __eq__4ID32FUl
/* 80135E98 00132DD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135E9C 00132DDC  41 82 00 0C */	beq .L_80135EA8
/* 80135EA0 00132DE0  7F A3 EB 78 */	mr r3, r29
/* 80135EA4 00132DE4  48 00 06 00 */	b .L_801364A4
.L_80135EA8:
/* 80135EA8 00132DE8  83 FD 00 04 */	lwz r31, 4(r29)
/* 80135EAC 00132DEC  28 1F 00 00 */	cmplwi r31, 0
/* 80135EB0 00132DF0  41 82 02 F4 */	beq .L_801361A4
/* 80135EB4 00132DF4  7F C4 F3 78 */	mr r4, r30
/* 80135EB8 00132DF8  38 7F 00 30 */	addi r3, r31, 0x30
/* 80135EBC 00132DFC  48 2D D5 79 */	bl __eq__4ID32FUl
/* 80135EC0 00132E00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135EC4 00132E04  41 82 00 08 */	beq .L_80135ECC
/* 80135EC8 00132E08  48 00 02 CC */	b .L_80136194
.L_80135ECC:
/* 80135ECC 00132E0C  83 7F 00 04 */	lwz r27, 4(r31)
/* 80135ED0 00132E10  28 1B 00 00 */	cmplwi r27, 0
/* 80135ED4 00132E14  41 82 01 5C */	beq .L_80136030
/* 80135ED8 00132E18  7F C4 F3 78 */	mr r4, r30
/* 80135EDC 00132E1C  38 7B 00 30 */	addi r3, r27, 0x30
/* 80135EE0 00132E20  48 2D D5 55 */	bl __eq__4ID32FUl
/* 80135EE4 00132E24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135EE8 00132E28  41 82 00 08 */	beq .L_80135EF0
/* 80135EEC 00132E2C  48 00 01 34 */	b .L_80136020
.L_80135EF0:
/* 80135EF0 00132E30  83 9B 00 04 */	lwz r28, 4(r27)
/* 80135EF4 00132E34  28 1C 00 00 */	cmplwi r28, 0
/* 80135EF8 00132E38  41 82 00 90 */	beq .L_80135F88
/* 80135EFC 00132E3C  7F C4 F3 78 */	mr r4, r30
/* 80135F00 00132E40  38 7C 00 30 */	addi r3, r28, 0x30
/* 80135F04 00132E44  48 2D D5 31 */	bl __eq__4ID32FUl
/* 80135F08 00132E48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135F0C 00132E4C  41 82 00 08 */	beq .L_80135F14
/* 80135F10 00132E50  48 00 00 68 */	b .L_80135F78
.L_80135F14:
/* 80135F14 00132E54  7F 83 E3 78 */	mr r3, r28
/* 80135F18 00132E58  4B FF E6 31 */	bl getNext__8CollPartFv
/* 80135F1C 00132E5C  28 03 00 00 */	cmplwi r3, 0
/* 80135F20 00132E60  41 82 00 24 */	beq .L_80135F44
/* 80135F24 00132E64  7F 83 E3 78 */	mr r3, r28
/* 80135F28 00132E68  4B FF E6 21 */	bl getNext__8CollPartFv
/* 80135F2C 00132E6C  7F C4 F3 78 */	mr r4, r30
/* 80135F30 00132E70  4B FF FF 49 */	bl getCollPart__8CollPartFUl
/* 80135F34 00132E74  28 03 00 00 */	cmplwi r3, 0
/* 80135F38 00132E78  41 82 00 0C */	beq .L_80135F44
/* 80135F3C 00132E7C  7C 7C 1B 78 */	mr r28, r3
/* 80135F40 00132E80  48 00 00 38 */	b .L_80135F78
.L_80135F44:
/* 80135F44 00132E84  7F 83 E3 78 */	mr r3, r28
/* 80135F48 00132E88  4B FF E5 F9 */	bl getChild__8CollPartFv
/* 80135F4C 00132E8C  28 03 00 00 */	cmplwi r3, 0
/* 80135F50 00132E90  41 82 00 24 */	beq .L_80135F74
/* 80135F54 00132E94  7F 83 E3 78 */	mr r3, r28
/* 80135F58 00132E98  4B FF E5 E9 */	bl getChild__8CollPartFv
/* 80135F5C 00132E9C  7F C4 F3 78 */	mr r4, r30
/* 80135F60 00132EA0  4B FF FF 19 */	bl getCollPart__8CollPartFUl
/* 80135F64 00132EA4  28 03 00 00 */	cmplwi r3, 0
/* 80135F68 00132EA8  41 82 00 0C */	beq .L_80135F74
/* 80135F6C 00132EAC  7C 7C 1B 78 */	mr r28, r3
/* 80135F70 00132EB0  48 00 00 08 */	b .L_80135F78
.L_80135F74:
/* 80135F74 00132EB4  3B 80 00 00 */	li r28, 0
.L_80135F78:
/* 80135F78 00132EB8  28 1C 00 00 */	cmplwi r28, 0
/* 80135F7C 00132EBC  41 82 00 0C */	beq .L_80135F88
/* 80135F80 00132EC0  7F 9B E3 78 */	mr r27, r28
/* 80135F84 00132EC4  48 00 00 9C */	b .L_80136020
.L_80135F88:
/* 80135F88 00132EC8  83 7B 00 10 */	lwz r27, 0x10(r27)
/* 80135F8C 00132ECC  28 1B 00 00 */	cmplwi r27, 0
/* 80135F90 00132ED0  41 82 00 8C */	beq .L_8013601C
/* 80135F94 00132ED4  7F C4 F3 78 */	mr r4, r30
/* 80135F98 00132ED8  38 7B 00 30 */	addi r3, r27, 0x30
/* 80135F9C 00132EDC  48 2D D4 99 */	bl __eq__4ID32FUl
/* 80135FA0 00132EE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80135FA4 00132EE4  41 82 00 08 */	beq .L_80135FAC
/* 80135FA8 00132EE8  48 00 00 68 */	b .L_80136010
.L_80135FAC:
/* 80135FAC 00132EEC  7F 63 DB 78 */	mr r3, r27
/* 80135FB0 00132EF0  4B FF E5 99 */	bl getNext__8CollPartFv
/* 80135FB4 00132EF4  28 03 00 00 */	cmplwi r3, 0
/* 80135FB8 00132EF8  41 82 00 24 */	beq .L_80135FDC
/* 80135FBC 00132EFC  7F 63 DB 78 */	mr r3, r27
/* 80135FC0 00132F00  4B FF E5 89 */	bl getNext__8CollPartFv
/* 80135FC4 00132F04  7F C4 F3 78 */	mr r4, r30
/* 80135FC8 00132F08  4B FF FE B1 */	bl getCollPart__8CollPartFUl
/* 80135FCC 00132F0C  28 03 00 00 */	cmplwi r3, 0
/* 80135FD0 00132F10  41 82 00 0C */	beq .L_80135FDC
/* 80135FD4 00132F14  7C 7B 1B 78 */	mr r27, r3
/* 80135FD8 00132F18  48 00 00 38 */	b .L_80136010
.L_80135FDC:
/* 80135FDC 00132F1C  7F 63 DB 78 */	mr r3, r27
/* 80135FE0 00132F20  4B FF E5 61 */	bl getChild__8CollPartFv
/* 80135FE4 00132F24  28 03 00 00 */	cmplwi r3, 0
/* 80135FE8 00132F28  41 82 00 24 */	beq .L_8013600C
/* 80135FEC 00132F2C  7F 63 DB 78 */	mr r3, r27
/* 80135FF0 00132F30  4B FF E5 51 */	bl getChild__8CollPartFv
/* 80135FF4 00132F34  7F C4 F3 78 */	mr r4, r30
/* 80135FF8 00132F38  4B FF FE 81 */	bl getCollPart__8CollPartFUl
/* 80135FFC 00132F3C  28 03 00 00 */	cmplwi r3, 0
/* 80136000 00132F40  41 82 00 0C */	beq .L_8013600C
/* 80136004 00132F44  7C 7B 1B 78 */	mr r27, r3
/* 80136008 00132F48  48 00 00 08 */	b .L_80136010
.L_8013600C:
/* 8013600C 00132F4C  3B 60 00 00 */	li r27, 0
.L_80136010:
/* 80136010 00132F50  28 1B 00 00 */	cmplwi r27, 0
/* 80136014 00132F54  41 82 00 08 */	beq .L_8013601C
/* 80136018 00132F58  48 00 00 08 */	b .L_80136020
.L_8013601C:
/* 8013601C 00132F5C  3B 60 00 00 */	li r27, 0
.L_80136020:
/* 80136020 00132F60  28 1B 00 00 */	cmplwi r27, 0
/* 80136024 00132F64  41 82 00 0C */	beq .L_80136030
/* 80136028 00132F68  7F 7F DB 78 */	mr r31, r27
/* 8013602C 00132F6C  48 00 01 68 */	b .L_80136194
.L_80136030:
/* 80136030 00132F70  83 FF 00 10 */	lwz r31, 0x10(r31)
/* 80136034 00132F74  28 1F 00 00 */	cmplwi r31, 0
/* 80136038 00132F78  41 82 01 58 */	beq .L_80136190
/* 8013603C 00132F7C  7F C4 F3 78 */	mr r4, r30
/* 80136040 00132F80  38 7F 00 30 */	addi r3, r31, 0x30
/* 80136044 00132F84  48 2D D3 F1 */	bl __eq__4ID32FUl
/* 80136048 00132F88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013604C 00132F8C  41 82 00 08 */	beq .L_80136054
/* 80136050 00132F90  48 00 01 34 */	b .L_80136184
.L_80136054:
/* 80136054 00132F94  83 7F 00 04 */	lwz r27, 4(r31)
/* 80136058 00132F98  28 1B 00 00 */	cmplwi r27, 0
/* 8013605C 00132F9C  41 82 00 90 */	beq .L_801360EC
/* 80136060 00132FA0  7F C4 F3 78 */	mr r4, r30
/* 80136064 00132FA4  38 7B 00 30 */	addi r3, r27, 0x30
/* 80136068 00132FA8  48 2D D3 CD */	bl __eq__4ID32FUl
/* 8013606C 00132FAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80136070 00132FB0  41 82 00 08 */	beq .L_80136078
/* 80136074 00132FB4  48 00 00 68 */	b .L_801360DC
.L_80136078:
/* 80136078 00132FB8  7F 63 DB 78 */	mr r3, r27
/* 8013607C 00132FBC  4B FF E4 CD */	bl getNext__8CollPartFv
/* 80136080 00132FC0  28 03 00 00 */	cmplwi r3, 0
/* 80136084 00132FC4  41 82 00 24 */	beq .L_801360A8
/* 80136088 00132FC8  7F 63 DB 78 */	mr r3, r27
/* 8013608C 00132FCC  4B FF E4 BD */	bl getNext__8CollPartFv
/* 80136090 00132FD0  7F C4 F3 78 */	mr r4, r30
/* 80136094 00132FD4  4B FF FD E5 */	bl getCollPart__8CollPartFUl
/* 80136098 00132FD8  28 03 00 00 */	cmplwi r3, 0
/* 8013609C 00132FDC  41 82 00 0C */	beq .L_801360A8
/* 801360A0 00132FE0  7C 7B 1B 78 */	mr r27, r3
/* 801360A4 00132FE4  48 00 00 38 */	b .L_801360DC
.L_801360A8:
/* 801360A8 00132FE8  7F 63 DB 78 */	mr r3, r27
/* 801360AC 00132FEC  4B FF E4 95 */	bl getChild__8CollPartFv
/* 801360B0 00132FF0  28 03 00 00 */	cmplwi r3, 0
/* 801360B4 00132FF4  41 82 00 24 */	beq .L_801360D8
/* 801360B8 00132FF8  7F 63 DB 78 */	mr r3, r27
/* 801360BC 00132FFC  4B FF E4 85 */	bl getChild__8CollPartFv
/* 801360C0 00133000  7F C4 F3 78 */	mr r4, r30
/* 801360C4 00133004  4B FF FD B5 */	bl getCollPart__8CollPartFUl
/* 801360C8 00133008  28 03 00 00 */	cmplwi r3, 0
/* 801360CC 0013300C  41 82 00 0C */	beq .L_801360D8
/* 801360D0 00133010  7C 7B 1B 78 */	mr r27, r3
/* 801360D4 00133014  48 00 00 08 */	b .L_801360DC
.L_801360D8:
/* 801360D8 00133018  3B 60 00 00 */	li r27, 0
.L_801360DC:
/* 801360DC 0013301C  28 1B 00 00 */	cmplwi r27, 0
/* 801360E0 00133020  41 82 00 0C */	beq .L_801360EC
/* 801360E4 00133024  7F 7F DB 78 */	mr r31, r27
/* 801360E8 00133028  48 00 00 9C */	b .L_80136184
.L_801360EC:
/* 801360EC 0013302C  83 FF 00 10 */	lwz r31, 0x10(r31)
/* 801360F0 00133030  28 1F 00 00 */	cmplwi r31, 0
/* 801360F4 00133034  41 82 00 8C */	beq .L_80136180
/* 801360F8 00133038  7F C4 F3 78 */	mr r4, r30
/* 801360FC 0013303C  38 7F 00 30 */	addi r3, r31, 0x30
/* 80136100 00133040  48 2D D3 35 */	bl __eq__4ID32FUl
/* 80136104 00133044  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80136108 00133048  41 82 00 08 */	beq .L_80136110
/* 8013610C 0013304C  48 00 00 68 */	b .L_80136174
.L_80136110:
/* 80136110 00133050  7F E3 FB 78 */	mr r3, r31
/* 80136114 00133054  4B FF E4 35 */	bl getNext__8CollPartFv
/* 80136118 00133058  28 03 00 00 */	cmplwi r3, 0
/* 8013611C 0013305C  41 82 00 24 */	beq .L_80136140
/* 80136120 00133060  7F E3 FB 78 */	mr r3, r31
/* 80136124 00133064  4B FF E4 25 */	bl getNext__8CollPartFv
/* 80136128 00133068  7F C4 F3 78 */	mr r4, r30
/* 8013612C 0013306C  4B FF FD 4D */	bl getCollPart__8CollPartFUl
/* 80136130 00133070  28 03 00 00 */	cmplwi r3, 0
/* 80136134 00133074  41 82 00 0C */	beq .L_80136140
/* 80136138 00133078  7C 7F 1B 78 */	mr r31, r3
/* 8013613C 0013307C  48 00 00 38 */	b .L_80136174
.L_80136140:
/* 80136140 00133080  7F E3 FB 78 */	mr r3, r31
/* 80136144 00133084  4B FF E3 FD */	bl getChild__8CollPartFv
/* 80136148 00133088  28 03 00 00 */	cmplwi r3, 0
/* 8013614C 0013308C  41 82 00 24 */	beq .L_80136170
/* 80136150 00133090  7F E3 FB 78 */	mr r3, r31
/* 80136154 00133094  4B FF E3 ED */	bl getChild__8CollPartFv
/* 80136158 00133098  7F C4 F3 78 */	mr r4, r30
/* 8013615C 0013309C  4B FF FD 1D */	bl getCollPart__8CollPartFUl
/* 80136160 001330A0  28 03 00 00 */	cmplwi r3, 0
/* 80136164 001330A4  41 82 00 0C */	beq .L_80136170
/* 80136168 001330A8  7C 7F 1B 78 */	mr r31, r3
/* 8013616C 001330AC  48 00 00 08 */	b .L_80136174
.L_80136170:
/* 80136170 001330B0  3B E0 00 00 */	li r31, 0
.L_80136174:
/* 80136174 001330B4  28 1F 00 00 */	cmplwi r31, 0
/* 80136178 001330B8  41 82 00 08 */	beq .L_80136180
/* 8013617C 001330BC  48 00 00 08 */	b .L_80136184
.L_80136180:
/* 80136180 001330C0  3B E0 00 00 */	li r31, 0
.L_80136184:
/* 80136184 001330C4  28 1F 00 00 */	cmplwi r31, 0
/* 80136188 001330C8  41 82 00 08 */	beq .L_80136190
/* 8013618C 001330CC  48 00 00 08 */	b .L_80136194
.L_80136190:
/* 80136190 001330D0  3B E0 00 00 */	li r31, 0
.L_80136194:
/* 80136194 001330D4  28 1F 00 00 */	cmplwi r31, 0
/* 80136198 001330D8  41 82 00 0C */	beq .L_801361A4
/* 8013619C 001330DC  7F E3 FB 78 */	mr r3, r31
/* 801361A0 001330E0  48 00 03 04 */	b .L_801364A4
.L_801361A4:
/* 801361A4 001330E4  83 FD 00 10 */	lwz r31, 0x10(r29)
/* 801361A8 001330E8  28 1F 00 00 */	cmplwi r31, 0
/* 801361AC 001330EC  41 82 02 F4 */	beq .L_801364A0
/* 801361B0 001330F0  7F C4 F3 78 */	mr r4, r30
/* 801361B4 001330F4  38 7F 00 30 */	addi r3, r31, 0x30
/* 801361B8 001330F8  48 2D D2 7D */	bl __eq__4ID32FUl
/* 801361BC 001330FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801361C0 00133100  41 82 00 08 */	beq .L_801361C8
/* 801361C4 00133104  48 00 02 CC */	b .L_80136490
.L_801361C8:
/* 801361C8 00133108  83 9F 00 04 */	lwz r28, 4(r31)
/* 801361CC 0013310C  28 1C 00 00 */	cmplwi r28, 0
/* 801361D0 00133110  41 82 01 5C */	beq .L_8013632C
/* 801361D4 00133114  7F C4 F3 78 */	mr r4, r30
/* 801361D8 00133118  38 7C 00 30 */	addi r3, r28, 0x30
/* 801361DC 0013311C  48 2D D2 59 */	bl __eq__4ID32FUl
/* 801361E0 00133120  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801361E4 00133124  41 82 00 08 */	beq .L_801361EC
/* 801361E8 00133128  48 00 01 34 */	b .L_8013631C
.L_801361EC:
/* 801361EC 0013312C  83 7C 00 04 */	lwz r27, 4(r28)
/* 801361F0 00133130  28 1B 00 00 */	cmplwi r27, 0
/* 801361F4 00133134  41 82 00 90 */	beq .L_80136284
/* 801361F8 00133138  7F C4 F3 78 */	mr r4, r30
/* 801361FC 0013313C  38 7B 00 30 */	addi r3, r27, 0x30
/* 80136200 00133140  48 2D D2 35 */	bl __eq__4ID32FUl
/* 80136204 00133144  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80136208 00133148  41 82 00 08 */	beq .L_80136210
/* 8013620C 0013314C  48 00 00 68 */	b .L_80136274
.L_80136210:
/* 80136210 00133150  7F 63 DB 78 */	mr r3, r27
/* 80136214 00133154  4B FF E3 35 */	bl getNext__8CollPartFv
/* 80136218 00133158  28 03 00 00 */	cmplwi r3, 0
/* 8013621C 0013315C  41 82 00 24 */	beq .L_80136240
/* 80136220 00133160  7F 63 DB 78 */	mr r3, r27
/* 80136224 00133164  4B FF E3 25 */	bl getNext__8CollPartFv
/* 80136228 00133168  7F C4 F3 78 */	mr r4, r30
/* 8013622C 0013316C  4B FF FC 4D */	bl getCollPart__8CollPartFUl
/* 80136230 00133170  28 03 00 00 */	cmplwi r3, 0
/* 80136234 00133174  41 82 00 0C */	beq .L_80136240
/* 80136238 00133178  7C 7B 1B 78 */	mr r27, r3
/* 8013623C 0013317C  48 00 00 38 */	b .L_80136274
.L_80136240:
/* 80136240 00133180  7F 63 DB 78 */	mr r3, r27
/* 80136244 00133184  4B FF E2 FD */	bl getChild__8CollPartFv
/* 80136248 00133188  28 03 00 00 */	cmplwi r3, 0
/* 8013624C 0013318C  41 82 00 24 */	beq .L_80136270
/* 80136250 00133190  7F 63 DB 78 */	mr r3, r27
/* 80136254 00133194  4B FF E2 ED */	bl getChild__8CollPartFv
/* 80136258 00133198  7F C4 F3 78 */	mr r4, r30
/* 8013625C 0013319C  4B FF FC 1D */	bl getCollPart__8CollPartFUl
/* 80136260 001331A0  28 03 00 00 */	cmplwi r3, 0
/* 80136264 001331A4  41 82 00 0C */	beq .L_80136270
/* 80136268 001331A8  7C 7B 1B 78 */	mr r27, r3
/* 8013626C 001331AC  48 00 00 08 */	b .L_80136274
.L_80136270:
/* 80136270 001331B0  3B 60 00 00 */	li r27, 0
.L_80136274:
/* 80136274 001331B4  28 1B 00 00 */	cmplwi r27, 0
/* 80136278 001331B8  41 82 00 0C */	beq .L_80136284
/* 8013627C 001331BC  7F 7C DB 78 */	mr r28, r27
/* 80136280 001331C0  48 00 00 9C */	b .L_8013631C
.L_80136284:
/* 80136284 001331C4  83 9C 00 10 */	lwz r28, 0x10(r28)
/* 80136288 001331C8  28 1C 00 00 */	cmplwi r28, 0
/* 8013628C 001331CC  41 82 00 8C */	beq .L_80136318
/* 80136290 001331D0  7F C4 F3 78 */	mr r4, r30
/* 80136294 001331D4  38 7C 00 30 */	addi r3, r28, 0x30
/* 80136298 001331D8  48 2D D1 9D */	bl __eq__4ID32FUl
/* 8013629C 001331DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801362A0 001331E0  41 82 00 08 */	beq .L_801362A8
/* 801362A4 001331E4  48 00 00 68 */	b .L_8013630C
.L_801362A8:
/* 801362A8 001331E8  7F 83 E3 78 */	mr r3, r28
/* 801362AC 001331EC  4B FF E2 9D */	bl getNext__8CollPartFv
/* 801362B0 001331F0  28 03 00 00 */	cmplwi r3, 0
/* 801362B4 001331F4  41 82 00 24 */	beq .L_801362D8
/* 801362B8 001331F8  7F 83 E3 78 */	mr r3, r28
/* 801362BC 001331FC  4B FF E2 8D */	bl getNext__8CollPartFv
/* 801362C0 00133200  7F C4 F3 78 */	mr r4, r30
/* 801362C4 00133204  4B FF FB B5 */	bl getCollPart__8CollPartFUl
/* 801362C8 00133208  28 03 00 00 */	cmplwi r3, 0
/* 801362CC 0013320C  41 82 00 0C */	beq .L_801362D8
/* 801362D0 00133210  7C 7C 1B 78 */	mr r28, r3
/* 801362D4 00133214  48 00 00 38 */	b .L_8013630C
.L_801362D8:
/* 801362D8 00133218  7F 83 E3 78 */	mr r3, r28
/* 801362DC 0013321C  4B FF E2 65 */	bl getChild__8CollPartFv
/* 801362E0 00133220  28 03 00 00 */	cmplwi r3, 0
/* 801362E4 00133224  41 82 00 24 */	beq .L_80136308
/* 801362E8 00133228  7F 83 E3 78 */	mr r3, r28
/* 801362EC 0013322C  4B FF E2 55 */	bl getChild__8CollPartFv
/* 801362F0 00133230  7F C4 F3 78 */	mr r4, r30
/* 801362F4 00133234  4B FF FB 85 */	bl getCollPart__8CollPartFUl
/* 801362F8 00133238  28 03 00 00 */	cmplwi r3, 0
/* 801362FC 0013323C  41 82 00 0C */	beq .L_80136308
/* 80136300 00133240  7C 7C 1B 78 */	mr r28, r3
/* 80136304 00133244  48 00 00 08 */	b .L_8013630C
.L_80136308:
/* 80136308 00133248  3B 80 00 00 */	li r28, 0
.L_8013630C:
/* 8013630C 0013324C  28 1C 00 00 */	cmplwi r28, 0
/* 80136310 00133250  41 82 00 08 */	beq .L_80136318
/* 80136314 00133254  48 00 00 08 */	b .L_8013631C
.L_80136318:
/* 80136318 00133258  3B 80 00 00 */	li r28, 0
.L_8013631C:
/* 8013631C 0013325C  28 1C 00 00 */	cmplwi r28, 0
/* 80136320 00133260  41 82 00 0C */	beq .L_8013632C
/* 80136324 00133264  7F 9F E3 78 */	mr r31, r28
/* 80136328 00133268  48 00 01 68 */	b .L_80136490
.L_8013632C:
/* 8013632C 0013326C  83 FF 00 10 */	lwz r31, 0x10(r31)
/* 80136330 00133270  28 1F 00 00 */	cmplwi r31, 0
/* 80136334 00133274  41 82 01 58 */	beq .L_8013648C
/* 80136338 00133278  7F C4 F3 78 */	mr r4, r30
/* 8013633C 0013327C  38 7F 00 30 */	addi r3, r31, 0x30
/* 80136340 00133280  48 2D D0 F5 */	bl __eq__4ID32FUl
/* 80136344 00133284  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80136348 00133288  41 82 00 08 */	beq .L_80136350
/* 8013634C 0013328C  48 00 01 34 */	b .L_80136480
.L_80136350:
/* 80136350 00133290  83 7F 00 04 */	lwz r27, 4(r31)
/* 80136354 00133294  28 1B 00 00 */	cmplwi r27, 0
/* 80136358 00133298  41 82 00 90 */	beq .L_801363E8
/* 8013635C 0013329C  7F C4 F3 78 */	mr r4, r30
/* 80136360 001332A0  38 7B 00 30 */	addi r3, r27, 0x30
/* 80136364 001332A4  48 2D D0 D1 */	bl __eq__4ID32FUl
/* 80136368 001332A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013636C 001332AC  41 82 00 08 */	beq .L_80136374
/* 80136370 001332B0  48 00 00 68 */	b .L_801363D8
.L_80136374:
/* 80136374 001332B4  7F 63 DB 78 */	mr r3, r27
/* 80136378 001332B8  4B FF E1 D1 */	bl getNext__8CollPartFv
/* 8013637C 001332BC  28 03 00 00 */	cmplwi r3, 0
/* 80136380 001332C0  41 82 00 24 */	beq .L_801363A4
/* 80136384 001332C4  7F 63 DB 78 */	mr r3, r27
/* 80136388 001332C8  4B FF E1 C1 */	bl getNext__8CollPartFv
/* 8013638C 001332CC  7F C4 F3 78 */	mr r4, r30
/* 80136390 001332D0  4B FF FA E9 */	bl getCollPart__8CollPartFUl
/* 80136394 001332D4  28 03 00 00 */	cmplwi r3, 0
/* 80136398 001332D8  41 82 00 0C */	beq .L_801363A4
/* 8013639C 001332DC  7C 7B 1B 78 */	mr r27, r3
/* 801363A0 001332E0  48 00 00 38 */	b .L_801363D8
.L_801363A4:
/* 801363A4 001332E4  7F 63 DB 78 */	mr r3, r27
/* 801363A8 001332E8  4B FF E1 99 */	bl getChild__8CollPartFv
/* 801363AC 001332EC  28 03 00 00 */	cmplwi r3, 0
/* 801363B0 001332F0  41 82 00 24 */	beq .L_801363D4
/* 801363B4 001332F4  7F 63 DB 78 */	mr r3, r27
/* 801363B8 001332F8  4B FF E1 89 */	bl getChild__8CollPartFv
/* 801363BC 001332FC  7F C4 F3 78 */	mr r4, r30
/* 801363C0 00133300  4B FF FA B9 */	bl getCollPart__8CollPartFUl
/* 801363C4 00133304  28 03 00 00 */	cmplwi r3, 0
/* 801363C8 00133308  41 82 00 0C */	beq .L_801363D4
/* 801363CC 0013330C  7C 7B 1B 78 */	mr r27, r3
/* 801363D0 00133310  48 00 00 08 */	b .L_801363D8
.L_801363D4:
/* 801363D4 00133314  3B 60 00 00 */	li r27, 0
.L_801363D8:
/* 801363D8 00133318  28 1B 00 00 */	cmplwi r27, 0
/* 801363DC 0013331C  41 82 00 0C */	beq .L_801363E8
/* 801363E0 00133320  7F 7F DB 78 */	mr r31, r27
/* 801363E4 00133324  48 00 00 9C */	b .L_80136480
.L_801363E8:
/* 801363E8 00133328  83 FF 00 10 */	lwz r31, 0x10(r31)
/* 801363EC 0013332C  28 1F 00 00 */	cmplwi r31, 0
/* 801363F0 00133330  41 82 00 8C */	beq .L_8013647C
/* 801363F4 00133334  7F C4 F3 78 */	mr r4, r30
/* 801363F8 00133338  38 7F 00 30 */	addi r3, r31, 0x30
/* 801363FC 0013333C  48 2D D0 39 */	bl __eq__4ID32FUl
/* 80136400 00133340  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80136404 00133344  41 82 00 08 */	beq .L_8013640C
/* 80136408 00133348  48 00 00 68 */	b .L_80136470
.L_8013640C:
/* 8013640C 0013334C  7F E3 FB 78 */	mr r3, r31
/* 80136410 00133350  4B FF E1 39 */	bl getNext__8CollPartFv
/* 80136414 00133354  28 03 00 00 */	cmplwi r3, 0
/* 80136418 00133358  41 82 00 24 */	beq .L_8013643C
/* 8013641C 0013335C  7F E3 FB 78 */	mr r3, r31
/* 80136420 00133360  4B FF E1 29 */	bl getNext__8CollPartFv
/* 80136424 00133364  7F C4 F3 78 */	mr r4, r30
/* 80136428 00133368  4B FF FA 51 */	bl getCollPart__8CollPartFUl
/* 8013642C 0013336C  28 03 00 00 */	cmplwi r3, 0
/* 80136430 00133370  41 82 00 0C */	beq .L_8013643C
/* 80136434 00133374  7C 7F 1B 78 */	mr r31, r3
/* 80136438 00133378  48 00 00 38 */	b .L_80136470
.L_8013643C:
/* 8013643C 0013337C  7F E3 FB 78 */	mr r3, r31
/* 80136440 00133380  4B FF E1 01 */	bl getChild__8CollPartFv
/* 80136444 00133384  28 03 00 00 */	cmplwi r3, 0
/* 80136448 00133388  41 82 00 24 */	beq .L_8013646C
/* 8013644C 0013338C  7F E3 FB 78 */	mr r3, r31
/* 80136450 00133390  4B FF E0 F1 */	bl getChild__8CollPartFv
/* 80136454 00133394  7F C4 F3 78 */	mr r4, r30
/* 80136458 00133398  4B FF FA 21 */	bl getCollPart__8CollPartFUl
/* 8013645C 0013339C  28 03 00 00 */	cmplwi r3, 0
/* 80136460 001333A0  41 82 00 0C */	beq .L_8013646C
/* 80136464 001333A4  7C 7F 1B 78 */	mr r31, r3
/* 80136468 001333A8  48 00 00 08 */	b .L_80136470
.L_8013646C:
/* 8013646C 001333AC  3B E0 00 00 */	li r31, 0
.L_80136470:
/* 80136470 001333B0  28 1F 00 00 */	cmplwi r31, 0
/* 80136474 001333B4  41 82 00 08 */	beq .L_8013647C
/* 80136478 001333B8  48 00 00 08 */	b .L_80136480
.L_8013647C:
/* 8013647C 001333BC  3B E0 00 00 */	li r31, 0
.L_80136480:
/* 80136480 001333C0  28 1F 00 00 */	cmplwi r31, 0
/* 80136484 001333C4  41 82 00 08 */	beq .L_8013648C
/* 80136488 001333C8  48 00 00 08 */	b .L_80136490
.L_8013648C:
/* 8013648C 001333CC  3B E0 00 00 */	li r31, 0
.L_80136490:
/* 80136490 001333D0  28 1F 00 00 */	cmplwi r31, 0
/* 80136494 001333D4  41 82 00 0C */	beq .L_801364A0
/* 80136498 001333D8  7F E3 FB 78 */	mr r3, r31
/* 8013649C 001333DC  48 00 00 08 */	b .L_801364A4
.L_801364A0:
/* 801364A0 001333E0  38 60 00 00 */	li r3, 0
.L_801364A4:
/* 801364A4 001333E4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801364A8 001333E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801364AC 001333EC  7C 08 03 A6 */	mtlr r0
/* 801364B0 001333F0  38 21 00 20 */	addi r1, r1, 0x20
/* 801364B4 001333F4  4E 80 00 20 */	blr 
.endfn getCollPart__8CollPartFUl

.fn getAllCollPartToArray__8CollPartFPP8CollPartiRi, global
/* 801364B8 001333F8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801364BC 001333FC  7C 08 02 A6 */	mflr r0
/* 801364C0 00133400  90 01 00 34 */	stw r0, 0x34(r1)
/* 801364C4 00133404  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 801364C8 00133408  7C BD 2B 78 */	mr r29, r5
/* 801364CC 0013340C  7C DE 33 78 */	mr r30, r6
/* 801364D0 00133410  7C 7B 1B 78 */	mr r27, r3
/* 801364D4 00133414  7C 9C 23 78 */	mr r28, r4
/* 801364D8 00133418  80 A6 00 00 */	lwz r5, 0(r6)
/* 801364DC 0013341C  7C 05 E8 00 */	cmpw r5, r29
/* 801364E0 00133420  41 80 00 0C */	blt .L_801364EC
/* 801364E4 00133424  7C A3 2B 78 */	mr r3, r5
/* 801364E8 00133428  48 00 05 08 */	b .L_801369F0
.L_801364EC:
/* 801364EC 0013342C  38 65 00 01 */	addi r3, r5, 1
/* 801364F0 00133430  54 A0 10 3A */	slwi r0, r5, 2
/* 801364F4 00133434  90 7E 00 00 */	stw r3, 0(r30)
/* 801364F8 00133438  7F 7C 01 2E */	stwx r27, r28, r0
/* 801364FC 0013343C  83 FB 00 04 */	lwz r31, 4(r27)
/* 80136500 00133440  28 1F 00 00 */	cmplwi r31, 0
/* 80136504 00133444  41 82 02 70 */	beq .L_80136774
/* 80136508 00133448  80 9E 00 00 */	lwz r4, 0(r30)
/* 8013650C 0013344C  7C 04 E8 00 */	cmpw r4, r29
/* 80136510 00133450  40 80 02 64 */	bge .L_80136774
/* 80136514 00133454  38 64 00 01 */	addi r3, r4, 1
/* 80136518 00133458  54 80 10 3A */	slwi r0, r4, 2
/* 8013651C 0013345C  90 7E 00 00 */	stw r3, 0(r30)
/* 80136520 00133460  7F FC 01 2E */	stwx r31, r28, r0
/* 80136524 00133464  83 3F 00 04 */	lwz r25, 4(r31)
/* 80136528 00133468  28 19 00 00 */	cmplwi r25, 0
/* 8013652C 0013346C  41 82 01 20 */	beq .L_8013664C
/* 80136530 00133470  80 9E 00 00 */	lwz r4, 0(r30)
/* 80136534 00133474  7C 04 E8 00 */	cmpw r4, r29
/* 80136538 00133478  40 80 01 14 */	bge .L_8013664C
/* 8013653C 0013347C  38 64 00 01 */	addi r3, r4, 1
/* 80136540 00133480  54 80 10 3A */	slwi r0, r4, 2
/* 80136544 00133484  90 7E 00 00 */	stw r3, 0(r30)
/* 80136548 00133488  7F 3C 01 2E */	stwx r25, r28, r0
/* 8013654C 0013348C  80 19 00 04 */	lwz r0, 4(r25)
/* 80136550 00133490  28 00 00 00 */	cmplwi r0, 0
/* 80136554 00133494  41 82 00 78 */	beq .L_801365CC
/* 80136558 00133498  7F 23 CB 78 */	mr r3, r25
/* 8013655C 0013349C  4B FF DF ED */	bl getNext__8CollPartFv
/* 80136560 001334A0  80 BE 00 00 */	lwz r5, 0(r30)
/* 80136564 001334A4  7C 7A 1B 78 */	mr r26, r3
/* 80136568 001334A8  7C 05 E8 00 */	cmpw r5, r29
/* 8013656C 001334AC  40 80 00 60 */	bge .L_801365CC
/* 80136570 001334B0  38 85 00 01 */	addi r4, r5, 1
/* 80136574 001334B4  54 A0 10 3A */	slwi r0, r5, 2
/* 80136578 001334B8  90 9E 00 00 */	stw r4, 0(r30)
/* 8013657C 001334BC  7F 5C 01 2E */	stwx r26, r28, r0
/* 80136580 001334C0  4B FF DF C9 */	bl getNext__8CollPartFv
/* 80136584 001334C4  28 03 00 00 */	cmplwi r3, 0
/* 80136588 001334C8  41 82 00 1C */	beq .L_801365A4
/* 8013658C 001334CC  7F 43 D3 78 */	mr r3, r26
/* 80136590 001334D0  4B FF DF B9 */	bl getNext__8CollPartFv
/* 80136594 001334D4  7F 84 E3 78 */	mr r4, r28
/* 80136598 001334D8  7F A5 EB 78 */	mr r5, r29
/* 8013659C 001334DC  7F C6 F3 78 */	mr r6, r30
/* 801365A0 001334E0  4B FF FF 19 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_801365A4:
/* 801365A4 001334E4  7F 43 D3 78 */	mr r3, r26
/* 801365A8 001334E8  4B FF DF 99 */	bl getChild__8CollPartFv
/* 801365AC 001334EC  28 03 00 00 */	cmplwi r3, 0
/* 801365B0 001334F0  41 82 00 1C */	beq .L_801365CC
/* 801365B4 001334F4  7F 43 D3 78 */	mr r3, r26
/* 801365B8 001334F8  4B FF DF 89 */	bl getChild__8CollPartFv
/* 801365BC 001334FC  7F 84 E3 78 */	mr r4, r28
/* 801365C0 00133500  7F A5 EB 78 */	mr r5, r29
/* 801365C4 00133504  7F C6 F3 78 */	mr r6, r30
/* 801365C8 00133508  4B FF FE F1 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_801365CC:
/* 801365CC 0013350C  80 19 00 10 */	lwz r0, 0x10(r25)
/* 801365D0 00133510  28 00 00 00 */	cmplwi r0, 0
/* 801365D4 00133514  41 82 00 78 */	beq .L_8013664C
/* 801365D8 00133518  7F 23 CB 78 */	mr r3, r25
/* 801365DC 0013351C  4B FF DF 65 */	bl getChild__8CollPartFv
/* 801365E0 00133520  80 BE 00 00 */	lwz r5, 0(r30)
/* 801365E4 00133524  7C 7A 1B 78 */	mr r26, r3
/* 801365E8 00133528  7C 05 E8 00 */	cmpw r5, r29
/* 801365EC 0013352C  40 80 00 60 */	bge .L_8013664C
/* 801365F0 00133530  38 85 00 01 */	addi r4, r5, 1
/* 801365F4 00133534  54 A0 10 3A */	slwi r0, r5, 2
/* 801365F8 00133538  90 9E 00 00 */	stw r4, 0(r30)
/* 801365FC 0013353C  7F 5C 01 2E */	stwx r26, r28, r0
/* 80136600 00133540  4B FF DF 49 */	bl getNext__8CollPartFv
/* 80136604 00133544  28 03 00 00 */	cmplwi r3, 0
/* 80136608 00133548  41 82 00 1C */	beq .L_80136624
/* 8013660C 0013354C  7F 43 D3 78 */	mr r3, r26
/* 80136610 00133550  4B FF DF 39 */	bl getNext__8CollPartFv
/* 80136614 00133554  7F 84 E3 78 */	mr r4, r28
/* 80136618 00133558  7F A5 EB 78 */	mr r5, r29
/* 8013661C 0013355C  7F C6 F3 78 */	mr r6, r30
/* 80136620 00133560  4B FF FE 99 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_80136624:
/* 80136624 00133564  7F 43 D3 78 */	mr r3, r26
/* 80136628 00133568  4B FF DF 19 */	bl getChild__8CollPartFv
/* 8013662C 0013356C  28 03 00 00 */	cmplwi r3, 0
/* 80136630 00133570  41 82 00 1C */	beq .L_8013664C
/* 80136634 00133574  7F 43 D3 78 */	mr r3, r26
/* 80136638 00133578  4B FF DF 09 */	bl getChild__8CollPartFv
/* 8013663C 0013357C  7F 84 E3 78 */	mr r4, r28
/* 80136640 00133580  7F A5 EB 78 */	mr r5, r29
/* 80136644 00133584  7F C6 F3 78 */	mr r6, r30
/* 80136648 00133588  4B FF FE 71 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_8013664C:
/* 8013664C 0013358C  83 3F 00 10 */	lwz r25, 0x10(r31)
/* 80136650 00133590  28 19 00 00 */	cmplwi r25, 0
/* 80136654 00133594  41 82 01 20 */	beq .L_80136774
/* 80136658 00133598  80 9E 00 00 */	lwz r4, 0(r30)
/* 8013665C 0013359C  7C 04 E8 00 */	cmpw r4, r29
/* 80136660 001335A0  40 80 01 14 */	bge .L_80136774
/* 80136664 001335A4  38 64 00 01 */	addi r3, r4, 1
/* 80136668 001335A8  54 80 10 3A */	slwi r0, r4, 2
/* 8013666C 001335AC  90 7E 00 00 */	stw r3, 0(r30)
/* 80136670 001335B0  7F 3C 01 2E */	stwx r25, r28, r0
/* 80136674 001335B4  80 19 00 04 */	lwz r0, 4(r25)
/* 80136678 001335B8  28 00 00 00 */	cmplwi r0, 0
/* 8013667C 001335BC  41 82 00 78 */	beq .L_801366F4
/* 80136680 001335C0  7F 23 CB 78 */	mr r3, r25
/* 80136684 001335C4  4B FF DE C5 */	bl getNext__8CollPartFv
/* 80136688 001335C8  80 BE 00 00 */	lwz r5, 0(r30)
/* 8013668C 001335CC  7C 7A 1B 78 */	mr r26, r3
/* 80136690 001335D0  7C 05 E8 00 */	cmpw r5, r29
/* 80136694 001335D4  40 80 00 60 */	bge .L_801366F4
/* 80136698 001335D8  38 85 00 01 */	addi r4, r5, 1
/* 8013669C 001335DC  54 A0 10 3A */	slwi r0, r5, 2
/* 801366A0 001335E0  90 9E 00 00 */	stw r4, 0(r30)
/* 801366A4 001335E4  7F 5C 01 2E */	stwx r26, r28, r0
/* 801366A8 001335E8  4B FF DE A1 */	bl getNext__8CollPartFv
/* 801366AC 001335EC  28 03 00 00 */	cmplwi r3, 0
/* 801366B0 001335F0  41 82 00 1C */	beq .L_801366CC
/* 801366B4 001335F4  7F 43 D3 78 */	mr r3, r26
/* 801366B8 001335F8  4B FF DE 91 */	bl getNext__8CollPartFv
/* 801366BC 001335FC  7F 84 E3 78 */	mr r4, r28
/* 801366C0 00133600  7F A5 EB 78 */	mr r5, r29
/* 801366C4 00133604  7F C6 F3 78 */	mr r6, r30
/* 801366C8 00133608  4B FF FD F1 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_801366CC:
/* 801366CC 0013360C  7F 43 D3 78 */	mr r3, r26
/* 801366D0 00133610  4B FF DE 71 */	bl getChild__8CollPartFv
/* 801366D4 00133614  28 03 00 00 */	cmplwi r3, 0
/* 801366D8 00133618  41 82 00 1C */	beq .L_801366F4
/* 801366DC 0013361C  7F 43 D3 78 */	mr r3, r26
/* 801366E0 00133620  4B FF DE 61 */	bl getChild__8CollPartFv
/* 801366E4 00133624  7F 84 E3 78 */	mr r4, r28
/* 801366E8 00133628  7F A5 EB 78 */	mr r5, r29
/* 801366EC 0013362C  7F C6 F3 78 */	mr r6, r30
/* 801366F0 00133630  4B FF FD C9 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_801366F4:
/* 801366F4 00133634  80 19 00 10 */	lwz r0, 0x10(r25)
/* 801366F8 00133638  28 00 00 00 */	cmplwi r0, 0
/* 801366FC 0013363C  41 82 00 78 */	beq .L_80136774
/* 80136700 00133640  7F 23 CB 78 */	mr r3, r25
/* 80136704 00133644  4B FF DE 3D */	bl getChild__8CollPartFv
/* 80136708 00133648  80 BE 00 00 */	lwz r5, 0(r30)
/* 8013670C 0013364C  7C 7A 1B 78 */	mr r26, r3
/* 80136710 00133650  7C 05 E8 00 */	cmpw r5, r29
/* 80136714 00133654  40 80 00 60 */	bge .L_80136774
/* 80136718 00133658  38 85 00 01 */	addi r4, r5, 1
/* 8013671C 0013365C  54 A0 10 3A */	slwi r0, r5, 2
/* 80136720 00133660  90 9E 00 00 */	stw r4, 0(r30)
/* 80136724 00133664  7F 5C 01 2E */	stwx r26, r28, r0
/* 80136728 00133668  4B FF DE 21 */	bl getNext__8CollPartFv
/* 8013672C 0013366C  28 03 00 00 */	cmplwi r3, 0
/* 80136730 00133670  41 82 00 1C */	beq .L_8013674C
/* 80136734 00133674  7F 43 D3 78 */	mr r3, r26
/* 80136738 00133678  4B FF DE 11 */	bl getNext__8CollPartFv
/* 8013673C 0013367C  7F 84 E3 78 */	mr r4, r28
/* 80136740 00133680  7F A5 EB 78 */	mr r5, r29
/* 80136744 00133684  7F C6 F3 78 */	mr r6, r30
/* 80136748 00133688  4B FF FD 71 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_8013674C:
/* 8013674C 0013368C  7F 43 D3 78 */	mr r3, r26
/* 80136750 00133690  4B FF DD F1 */	bl getChild__8CollPartFv
/* 80136754 00133694  28 03 00 00 */	cmplwi r3, 0
/* 80136758 00133698  41 82 00 1C */	beq .L_80136774
/* 8013675C 0013369C  7F 43 D3 78 */	mr r3, r26
/* 80136760 001336A0  4B FF DD E1 */	bl getChild__8CollPartFv
/* 80136764 001336A4  7F 84 E3 78 */	mr r4, r28
/* 80136768 001336A8  7F A5 EB 78 */	mr r5, r29
/* 8013676C 001336AC  7F C6 F3 78 */	mr r6, r30
/* 80136770 001336B0  4B FF FD 49 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_80136774:
/* 80136774 001336B4  83 FB 00 10 */	lwz r31, 0x10(r27)
/* 80136778 001336B8  28 1F 00 00 */	cmplwi r31, 0
/* 8013677C 001336BC  41 82 02 70 */	beq .L_801369EC
/* 80136780 001336C0  80 9E 00 00 */	lwz r4, 0(r30)
/* 80136784 001336C4  7C 04 E8 00 */	cmpw r4, r29
/* 80136788 001336C8  40 80 02 64 */	bge .L_801369EC
/* 8013678C 001336CC  38 64 00 01 */	addi r3, r4, 1
/* 80136790 001336D0  54 80 10 3A */	slwi r0, r4, 2
/* 80136794 001336D4  90 7E 00 00 */	stw r3, 0(r30)
/* 80136798 001336D8  7F FC 01 2E */	stwx r31, r28, r0
/* 8013679C 001336DC  83 3F 00 04 */	lwz r25, 4(r31)
/* 801367A0 001336E0  28 19 00 00 */	cmplwi r25, 0
/* 801367A4 001336E4  41 82 01 20 */	beq .L_801368C4
/* 801367A8 001336E8  80 9E 00 00 */	lwz r4, 0(r30)
/* 801367AC 001336EC  7C 04 E8 00 */	cmpw r4, r29
/* 801367B0 001336F0  40 80 01 14 */	bge .L_801368C4
/* 801367B4 001336F4  38 64 00 01 */	addi r3, r4, 1
/* 801367B8 001336F8  54 80 10 3A */	slwi r0, r4, 2
/* 801367BC 001336FC  90 7E 00 00 */	stw r3, 0(r30)
/* 801367C0 00133700  7F 3C 01 2E */	stwx r25, r28, r0
/* 801367C4 00133704  80 19 00 04 */	lwz r0, 4(r25)
/* 801367C8 00133708  28 00 00 00 */	cmplwi r0, 0
/* 801367CC 0013370C  41 82 00 78 */	beq .L_80136844
/* 801367D0 00133710  7F 23 CB 78 */	mr r3, r25
/* 801367D4 00133714  4B FF DD 75 */	bl getNext__8CollPartFv
/* 801367D8 00133718  80 BE 00 00 */	lwz r5, 0(r30)
/* 801367DC 0013371C  7C 7A 1B 78 */	mr r26, r3
/* 801367E0 00133720  7C 05 E8 00 */	cmpw r5, r29
/* 801367E4 00133724  40 80 00 60 */	bge .L_80136844
/* 801367E8 00133728  38 85 00 01 */	addi r4, r5, 1
/* 801367EC 0013372C  54 A0 10 3A */	slwi r0, r5, 2
/* 801367F0 00133730  90 9E 00 00 */	stw r4, 0(r30)
/* 801367F4 00133734  7F 5C 01 2E */	stwx r26, r28, r0
/* 801367F8 00133738  4B FF DD 51 */	bl getNext__8CollPartFv
/* 801367FC 0013373C  28 03 00 00 */	cmplwi r3, 0
/* 80136800 00133740  41 82 00 1C */	beq .L_8013681C
/* 80136804 00133744  7F 43 D3 78 */	mr r3, r26
/* 80136808 00133748  4B FF DD 41 */	bl getNext__8CollPartFv
/* 8013680C 0013374C  7F 84 E3 78 */	mr r4, r28
/* 80136810 00133750  7F A5 EB 78 */	mr r5, r29
/* 80136814 00133754  7F C6 F3 78 */	mr r6, r30
/* 80136818 00133758  4B FF FC A1 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_8013681C:
/* 8013681C 0013375C  7F 43 D3 78 */	mr r3, r26
/* 80136820 00133760  4B FF DD 21 */	bl getChild__8CollPartFv
/* 80136824 00133764  28 03 00 00 */	cmplwi r3, 0
/* 80136828 00133768  41 82 00 1C */	beq .L_80136844
/* 8013682C 0013376C  7F 43 D3 78 */	mr r3, r26
/* 80136830 00133770  4B FF DD 11 */	bl getChild__8CollPartFv
/* 80136834 00133774  7F 84 E3 78 */	mr r4, r28
/* 80136838 00133778  7F A5 EB 78 */	mr r5, r29
/* 8013683C 0013377C  7F C6 F3 78 */	mr r6, r30
/* 80136840 00133780  4B FF FC 79 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_80136844:
/* 80136844 00133784  80 19 00 10 */	lwz r0, 0x10(r25)
/* 80136848 00133788  28 00 00 00 */	cmplwi r0, 0
/* 8013684C 0013378C  41 82 00 78 */	beq .L_801368C4
/* 80136850 00133790  7F 23 CB 78 */	mr r3, r25
/* 80136854 00133794  4B FF DC ED */	bl getChild__8CollPartFv
/* 80136858 00133798  80 BE 00 00 */	lwz r5, 0(r30)
/* 8013685C 0013379C  7C 7A 1B 78 */	mr r26, r3
/* 80136860 001337A0  7C 05 E8 00 */	cmpw r5, r29
/* 80136864 001337A4  40 80 00 60 */	bge .L_801368C4
/* 80136868 001337A8  38 85 00 01 */	addi r4, r5, 1
/* 8013686C 001337AC  54 A0 10 3A */	slwi r0, r5, 2
/* 80136870 001337B0  90 9E 00 00 */	stw r4, 0(r30)
/* 80136874 001337B4  7F 5C 01 2E */	stwx r26, r28, r0
/* 80136878 001337B8  4B FF DC D1 */	bl getNext__8CollPartFv
/* 8013687C 001337BC  28 03 00 00 */	cmplwi r3, 0
/* 80136880 001337C0  41 82 00 1C */	beq .L_8013689C
/* 80136884 001337C4  7F 43 D3 78 */	mr r3, r26
/* 80136888 001337C8  4B FF DC C1 */	bl getNext__8CollPartFv
/* 8013688C 001337CC  7F 84 E3 78 */	mr r4, r28
/* 80136890 001337D0  7F A5 EB 78 */	mr r5, r29
/* 80136894 001337D4  7F C6 F3 78 */	mr r6, r30
/* 80136898 001337D8  4B FF FC 21 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_8013689C:
/* 8013689C 001337DC  7F 43 D3 78 */	mr r3, r26
/* 801368A0 001337E0  4B FF DC A1 */	bl getChild__8CollPartFv
/* 801368A4 001337E4  28 03 00 00 */	cmplwi r3, 0
/* 801368A8 001337E8  41 82 00 1C */	beq .L_801368C4
/* 801368AC 001337EC  7F 43 D3 78 */	mr r3, r26
/* 801368B0 001337F0  4B FF DC 91 */	bl getChild__8CollPartFv
/* 801368B4 001337F4  7F 84 E3 78 */	mr r4, r28
/* 801368B8 001337F8  7F A5 EB 78 */	mr r5, r29
/* 801368BC 001337FC  7F C6 F3 78 */	mr r6, r30
/* 801368C0 00133800  4B FF FB F9 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_801368C4:
/* 801368C4 00133804  83 3F 00 10 */	lwz r25, 0x10(r31)
/* 801368C8 00133808  28 19 00 00 */	cmplwi r25, 0
/* 801368CC 0013380C  41 82 01 20 */	beq .L_801369EC
/* 801368D0 00133810  80 9E 00 00 */	lwz r4, 0(r30)
/* 801368D4 00133814  7C 04 E8 00 */	cmpw r4, r29
/* 801368D8 00133818  40 80 01 14 */	bge .L_801369EC
/* 801368DC 0013381C  38 64 00 01 */	addi r3, r4, 1
/* 801368E0 00133820  54 80 10 3A */	slwi r0, r4, 2
/* 801368E4 00133824  90 7E 00 00 */	stw r3, 0(r30)
/* 801368E8 00133828  7F 3C 01 2E */	stwx r25, r28, r0
/* 801368EC 0013382C  80 19 00 04 */	lwz r0, 4(r25)
/* 801368F0 00133830  28 00 00 00 */	cmplwi r0, 0
/* 801368F4 00133834  41 82 00 78 */	beq .L_8013696C
/* 801368F8 00133838  7F 23 CB 78 */	mr r3, r25
/* 801368FC 0013383C  4B FF DC 4D */	bl getNext__8CollPartFv
/* 80136900 00133840  80 BE 00 00 */	lwz r5, 0(r30)
/* 80136904 00133844  7C 7A 1B 78 */	mr r26, r3
/* 80136908 00133848  7C 05 E8 00 */	cmpw r5, r29
/* 8013690C 0013384C  40 80 00 60 */	bge .L_8013696C
/* 80136910 00133850  38 85 00 01 */	addi r4, r5, 1
/* 80136914 00133854  54 A0 10 3A */	slwi r0, r5, 2
/* 80136918 00133858  90 9E 00 00 */	stw r4, 0(r30)
/* 8013691C 0013385C  7F 5C 01 2E */	stwx r26, r28, r0
/* 80136920 00133860  4B FF DC 29 */	bl getNext__8CollPartFv
/* 80136924 00133864  28 03 00 00 */	cmplwi r3, 0
/* 80136928 00133868  41 82 00 1C */	beq .L_80136944
/* 8013692C 0013386C  7F 43 D3 78 */	mr r3, r26
/* 80136930 00133870  4B FF DC 19 */	bl getNext__8CollPartFv
/* 80136934 00133874  7F 84 E3 78 */	mr r4, r28
/* 80136938 00133878  7F A5 EB 78 */	mr r5, r29
/* 8013693C 0013387C  7F C6 F3 78 */	mr r6, r30
/* 80136940 00133880  4B FF FB 79 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_80136944:
/* 80136944 00133884  7F 43 D3 78 */	mr r3, r26
/* 80136948 00133888  4B FF DB F9 */	bl getChild__8CollPartFv
/* 8013694C 0013388C  28 03 00 00 */	cmplwi r3, 0
/* 80136950 00133890  41 82 00 1C */	beq .L_8013696C
/* 80136954 00133894  7F 43 D3 78 */	mr r3, r26
/* 80136958 00133898  4B FF DB E9 */	bl getChild__8CollPartFv
/* 8013695C 0013389C  7F 84 E3 78 */	mr r4, r28
/* 80136960 001338A0  7F A5 EB 78 */	mr r5, r29
/* 80136964 001338A4  7F C6 F3 78 */	mr r6, r30
/* 80136968 001338A8  4B FF FB 51 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_8013696C:
/* 8013696C 001338AC  80 19 00 10 */	lwz r0, 0x10(r25)
/* 80136970 001338B0  28 00 00 00 */	cmplwi r0, 0
/* 80136974 001338B4  41 82 00 78 */	beq .L_801369EC
/* 80136978 001338B8  7F 23 CB 78 */	mr r3, r25
/* 8013697C 001338BC  4B FF DB C5 */	bl getChild__8CollPartFv
/* 80136980 001338C0  80 BE 00 00 */	lwz r5, 0(r30)
/* 80136984 001338C4  7C 7A 1B 78 */	mr r26, r3
/* 80136988 001338C8  7C 05 E8 00 */	cmpw r5, r29
/* 8013698C 001338CC  40 80 00 60 */	bge .L_801369EC
/* 80136990 001338D0  38 85 00 01 */	addi r4, r5, 1
/* 80136994 001338D4  54 A0 10 3A */	slwi r0, r5, 2
/* 80136998 001338D8  90 9E 00 00 */	stw r4, 0(r30)
/* 8013699C 001338DC  7F 5C 01 2E */	stwx r26, r28, r0
/* 801369A0 001338E0  4B FF DB A9 */	bl getNext__8CollPartFv
/* 801369A4 001338E4  28 03 00 00 */	cmplwi r3, 0
/* 801369A8 001338E8  41 82 00 1C */	beq .L_801369C4
/* 801369AC 001338EC  7F 43 D3 78 */	mr r3, r26
/* 801369B0 001338F0  4B FF DB 99 */	bl getNext__8CollPartFv
/* 801369B4 001338F4  7F 84 E3 78 */	mr r4, r28
/* 801369B8 001338F8  7F A5 EB 78 */	mr r5, r29
/* 801369BC 001338FC  7F C6 F3 78 */	mr r6, r30
/* 801369C0 00133900  4B FF FA F9 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_801369C4:
/* 801369C4 00133904  7F 43 D3 78 */	mr r3, r26
/* 801369C8 00133908  4B FF DB 79 */	bl getChild__8CollPartFv
/* 801369CC 0013390C  28 03 00 00 */	cmplwi r3, 0
/* 801369D0 00133910  41 82 00 1C */	beq .L_801369EC
/* 801369D4 00133914  7F 43 D3 78 */	mr r3, r26
/* 801369D8 00133918  4B FF DB 69 */	bl getChild__8CollPartFv
/* 801369DC 0013391C  7F 84 E3 78 */	mr r4, r28
/* 801369E0 00133920  7F A5 EB 78 */	mr r5, r29
/* 801369E4 00133924  7F C6 F3 78 */	mr r6, r30
/* 801369E8 00133928  4B FF FA D1 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
.L_801369EC:
/* 801369EC 0013392C  80 7E 00 00 */	lwz r3, 0(r30)
.L_801369F0:
/* 801369F0 00133930  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 801369F4 00133934  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801369F8 00133938  7C 08 03 A6 */	mtlr r0
/* 801369FC 0013393C  38 21 00 30 */	addi r1, r1, 0x30
/* 80136A00 00133940  4E 80 00 20 */	blr 
.endfn getAllCollPartToArray__8CollPartFPP8CollPartiRi

.fn findCollPart__8CollTreeFR15FindCollPartArg, global
/* 80136A04 00133944  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 80136A08 00133948  7C 08 02 A6 */	mflr r0
/* 80136A0C 0013394C  90 01 04 44 */	stw r0, 0x444(r1)
/* 80136A10 00133950  DB E1 04 30 */	stfd f31, 0x430(r1)
/* 80136A14 00133954  F3 E1 04 38 */	psq_st f31, 1080(r1), 0, qr0
/* 80136A18 00133958  BF 41 04 18 */	stmw r26, 0x418(r1)
/* 80136A1C 0013395C  80 03 00 00 */	lwz r0, 0(r3)
/* 80136A20 00133960  7C 9A 23 78 */	mr r26, r4
/* 80136A24 00133964  28 00 00 00 */	cmplwi r0, 0
/* 80136A28 00133968  41 82 00 D4 */	beq .L_80136AFC
/* 80136A2C 0013396C  38 00 00 00 */	li r0, 0
/* 80136A30 00133970  38 81 00 0C */	addi r4, r1, 0xc
/* 80136A34 00133974  90 01 00 08 */	stw r0, 8(r1)
/* 80136A38 00133978  38 C1 00 08 */	addi r6, r1, 8
/* 80136A3C 0013397C  38 A0 01 00 */	li r5, 0x100
/* 80136A40 00133980  80 63 00 00 */	lwz r3, 0(r3)
/* 80136A44 00133984  4B FF FA 75 */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
/* 80136A48 00133988  C3 E2 9E B4 */	lfs f31, lbl_80518214@sda21(r2)
/* 80136A4C 0013398C  7C 7F 1B 78 */	mr r31, r3
/* 80136A50 00133990  3B C1 00 0C */	addi r30, r1, 0xc
/* 80136A54 00133994  3B A0 00 00 */	li r29, 0
/* 80136A58 00133998  3B 80 00 00 */	li r28, 0
/* 80136A5C 0013399C  48 00 00 90 */	b .L_80136AEC
.L_80136A60:
/* 80136A60 001339A0  80 7A 00 00 */	lwz r3, 0(r26)
/* 80136A64 001339A4  83 7E 00 00 */	lwz r27, 0(r30)
/* 80136A68 001339A8  28 03 00 00 */	cmplwi r3, 0
/* 80136A6C 001339AC  41 82 00 20 */	beq .L_80136A8C
/* 80136A70 001339B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80136A74 001339B4  7F 64 DB 78 */	mr r4, r27
/* 80136A78 001339B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80136A7C 001339BC  7D 89 03 A6 */	mtctr r12
/* 80136A80 001339C0  4E 80 04 21 */	bctrl 
/* 80136A84 001339C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80136A88 001339C8  41 82 00 5C */	beq .L_80136AE4
.L_80136A8C:
/* 80136A8C 001339CC  88 1B 00 58 */	lbz r0, 0x58(r27)
/* 80136A90 001339D0  28 00 00 00 */	cmplwi r0, 0
/* 80136A94 001339D4  40 82 00 50 */	bne .L_80136AE4
/* 80136A98 001339D8  C0 3A 00 08 */	lfs f1, 8(r26)
/* 80136A9C 001339DC  C0 1B 00 50 */	lfs f0, 0x50(r27)
/* 80136AA0 001339E0  C0 5B 00 1C */	lfs f2, 0x1c(r27)
/* 80136AA4 001339E4  EC A1 00 28 */	fsubs f5, f1, f0
/* 80136AA8 001339E8  C0 7A 00 04 */	lfs f3, 4(r26)
/* 80136AAC 001339EC  C0 3B 00 4C */	lfs f1, 0x4c(r27)
/* 80136AB0 001339F0  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80136AB4 001339F4  C0 9A 00 0C */	lfs f4, 0xc(r26)
/* 80136AB8 001339F8  C0 5B 00 54 */	lfs f2, 0x54(r27)
/* 80136ABC 001339FC  EC 63 08 28 */	fsubs f3, f3, f1
/* 80136AC0 00133A00  EC 25 01 72 */	fmuls f1, f5, f5
/* 80136AC4 00133A04  EC 44 10 28 */	fsubs f2, f4, f2
/* 80136AC8 00133A08  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80136ACC 00133A0C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80136AD0 00133A10  EC 01 00 28 */	fsubs f0, f1, f0
/* 80136AD4 00133A14  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80136AD8 00133A18  40 80 00 0C */	bge .L_80136AE4
/* 80136ADC 00133A1C  7F 7D DB 78 */	mr r29, r27
/* 80136AE0 00133A20  FF E0 00 90 */	fmr f31, f0
.L_80136AE4:
/* 80136AE4 00133A24  3B DE 00 04 */	addi r30, r30, 4
/* 80136AE8 00133A28  3B 9C 00 01 */	addi r28, r28, 1
.L_80136AEC:
/* 80136AEC 00133A2C  7C 1C F8 00 */	cmpw r28, r31
/* 80136AF0 00133A30  41 80 FF 70 */	blt .L_80136A60
/* 80136AF4 00133A34  7F A3 EB 78 */	mr r3, r29
/* 80136AF8 00133A38  48 00 00 08 */	b .L_80136B00
.L_80136AFC:
/* 80136AFC 00133A3C  38 60 00 00 */	li r3, 0
.L_80136B00:
/* 80136B00 00133A40  E3 E1 04 38 */	psq_l f31, 1080(r1), 0, qr0
/* 80136B04 00133A44  CB E1 04 30 */	lfd f31, 0x430(r1)
/* 80136B08 00133A48  BB 41 04 18 */	lmw r26, 0x418(r1)
/* 80136B0C 00133A4C  80 01 04 44 */	lwz r0, 0x444(r1)
/* 80136B10 00133A50  7C 08 03 A6 */	mtlr r0
/* 80136B14 00133A54  38 21 04 40 */	addi r1, r1, 0x440
/* 80136B18 00133A58  4E 80 00 20 */	blr 
.endfn findCollPart__8CollTreeFR15FindCollPartArg

.fn getRandomCollPart__8CollTreeFv, global
/* 80136B1C 00133A5C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80136B20 00133A60  7C 08 02 A6 */	mflr r0
/* 80136B24 00133A64  90 01 00 84 */	stw r0, 0x84(r1)
/* 80136B28 00133A68  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80136B2C 00133A6C  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80136B30 00133A70  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80136B34 00133A74  93 81 00 70 */	stw r28, 0x70(r1)
/* 80136B38 00133A78  80 03 00 00 */	lwz r0, 0(r3)
/* 80136B3C 00133A7C  28 00 00 00 */	cmplwi r0, 0
/* 80136B40 00133A80  41 82 00 DC */	beq .L_80136C1C
/* 80136B44 00133A84  38 00 00 00 */	li r0, 0
/* 80136B48 00133A88  38 81 00 0C */	addi r4, r1, 0xc
/* 80136B4C 00133A8C  90 01 00 08 */	stw r0, 8(r1)
/* 80136B50 00133A90  38 C1 00 08 */	addi r6, r1, 8
/* 80136B54 00133A94  38 A0 00 10 */	li r5, 0x10
/* 80136B58 00133A98  80 63 00 00 */	lwz r3, 0(r3)
/* 80136B5C 00133A9C  4B FF F9 5D */	bl getAllCollPartToArray__8CollPartFPP8CollPartiRi
/* 80136B60 00133AA0  7C 7D 1B 78 */	mr r29, r3
/* 80136B64 00133AA4  4B F9 2A 3D */	bl rand
/* 80136B68 00133AA8  3C 80 43 30 */	lis r4, 0x4330
/* 80136B6C 00133AAC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80136B70 00133AB0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80136B74 00133AB4  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 80136B78 00133AB8  C8 42 9E B8 */	lfd f2, lbl_80518218@sda21(r2)
/* 80136B7C 00133ABC  3B C1 00 0C */	addi r30, r1, 0xc
/* 80136B80 00133AC0  90 81 00 50 */	stw r4, 0x50(r1)
/* 80136B84 00133AC4  C0 02 9E A8 */	lfs f0, lbl_80518208@sda21(r2)
/* 80136B88 00133AC8  C8 21 00 50 */	lfd f1, 0x50(r1)
/* 80136B8C 00133ACC  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80136B90 00133AD0  EC 21 10 28 */	fsubs f1, f1, f2
/* 80136B94 00133AD4  90 81 00 58 */	stw r4, 0x58(r1)
/* 80136B98 00133AD8  EC 21 00 24 */	fdivs f1, f1, f0
/* 80136B9C 00133ADC  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 80136BA0 00133AE0  EC 00 10 28 */	fsubs f0, f0, f2
/* 80136BA4 00133AE4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80136BA8 00133AE8  FC 00 00 1E */	fctiwz f0, f0
/* 80136BAC 00133AEC  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 80136BB0 00133AF0  83 81 00 64 */	lwz r28, 0x64(r1)
/* 80136BB4 00133AF4  57 9F 10 3A */	slwi r31, r28, 2
/* 80136BB8 00133AF8  7C 1E F8 2E */	lwzx r0, r30, r31
/* 80136BBC 00133AFC  28 00 00 00 */	cmplwi r0, 0
/* 80136BC0 00133B00  40 82 00 28 */	bne .L_80136BE8
/* 80136BC4 00133B04  3C 60 80 48 */	lis r3, lbl_8047C5A0@ha
/* 80136BC8 00133B08  3C 80 80 48 */	lis r4, lbl_8047C600@ha
/* 80136BCC 00133B0C  38 A4 C6 00 */	addi r5, r4, lbl_8047C600@l
/* 80136BD0 00133B10  7F A6 EB 78 */	mr r6, r29
/* 80136BD4 00133B14  38 63 C5 A0 */	addi r3, r3, lbl_8047C5A0@l
/* 80136BD8 00133B18  7F 87 E3 78 */	mr r7, r28
/* 80136BDC 00133B1C  38 80 03 76 */	li r4, 0x376
/* 80136BE0 00133B20  4C C6 31 82 */	crclr 6
/* 80136BE4 00133B24  4B EF 3A 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80136BE8:
/* 80136BE8 00133B28  2C 1C 00 10 */	cmpwi r28, 0x10
/* 80136BEC 00133B2C  41 80 00 28 */	blt .L_80136C14
/* 80136BF0 00133B30  3C 60 80 48 */	lis r3, lbl_8047C5A0@ha
/* 80136BF4 00133B34  3C 80 80 48 */	lis r4, lbl_8047C600@ha
/* 80136BF8 00133B38  38 A4 C6 00 */	addi r5, r4, lbl_8047C600@l
/* 80136BFC 00133B3C  7F A6 EB 78 */	mr r6, r29
/* 80136C00 00133B40  38 63 C5 A0 */	addi r3, r3, lbl_8047C5A0@l
/* 80136C04 00133B44  7F 87 E3 78 */	mr r7, r28
/* 80136C08 00133B48  38 80 03 79 */	li r4, 0x379
/* 80136C0C 00133B4C  4C C6 31 82 */	crclr 6
/* 80136C10 00133B50  4B EF 3A 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80136C14:
/* 80136C14 00133B54  7C 7E F8 2E */	lwzx r3, r30, r31
/* 80136C18 00133B58  48 00 00 08 */	b .L_80136C20
.L_80136C1C:
/* 80136C1C 00133B5C  38 60 00 00 */	li r3, 0
.L_80136C20:
/* 80136C20 00133B60  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80136C24 00133B64  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80136C28 00133B68  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80136C2C 00133B6C  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80136C30 00133B70  83 81 00 70 */	lwz r28, 0x70(r1)
/* 80136C34 00133B74  7C 08 03 A6 */	mtlr r0
/* 80136C38 00133B78  38 21 00 80 */	addi r1, r1, 0x80
/* 80136C3C 00133B7C  4E 80 00 20 */	blr 
.endfn getRandomCollPart__8CollTreeFv

.fn getBoundingSphere__8CollTreeFRQ23Sys6Sphere, global
/* 80136C40 00133B80  80 A3 00 00 */	lwz r5, 0(r3)
/* 80136C44 00133B84  28 05 00 00 */	cmplwi r5, 0
/* 80136C48 00133B88  4D 82 00 20 */	beqlr 
/* 80136C4C 00133B8C  C0 05 00 4C */	lfs f0, 0x4c(r5)
/* 80136C50 00133B90  D0 04 00 00 */	stfs f0, 0(r4)
/* 80136C54 00133B94  C0 05 00 50 */	lfs f0, 0x50(r5)
/* 80136C58 00133B98  D0 04 00 04 */	stfs f0, 4(r4)
/* 80136C5C 00133B9C  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 80136C60 00133BA0  D0 04 00 08 */	stfs f0, 8(r4)
/* 80136C64 00133BA4  80 63 00 00 */	lwz r3, 0(r3)
/* 80136C68 00133BA8  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80136C6C 00133BAC  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80136C70 00133BB0  4E 80 00 20 */	blr 
.endfn getBoundingSphere__8CollTreeFRQ23Sys6Sphere

.fn __ct__8CollPartFPQ28SysShape9MtxObject, global
/* 80136C74 00133BB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80136C78 00133BB8  7C 08 02 A6 */	mflr r0
/* 80136C7C 00133BBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80136C80 00133BC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80136C84 00133BC4  7C 9F 23 78 */	mr r31, r4
/* 80136C88 00133BC8  93 C1 00 08 */	stw r30, 8(r1)
/* 80136C8C 00133BCC  7C 7E 1B 78 */	mr r30, r3
/* 80136C90 00133BD0  48 2D A7 01 */	bl __ct__5CNodeFv
/* 80136C94 00133BD4  3C 80 80 4B */	lis r4, __vt__8CollPart@ha
/* 80136C98 00133BD8  38 7E 00 30 */	addi r3, r30, 0x30
/* 80136C9C 00133BDC  38 04 FE 9C */	addi r0, r4, __vt__8CollPart@l
/* 80136CA0 00133BE0  90 1E 00 00 */	stw r0, 0(r30)
/* 80136CA4 00133BE4  48 2D C5 CD */	bl __ct__4ID32Fv
/* 80136CA8 00133BE8  38 7E 00 3C */	addi r3, r30, 0x3c
/* 80136CAC 00133BEC  48 2D C5 C5 */	bl __ct__4ID32Fv
/* 80136CB0 00133BF0  7F C3 F3 78 */	mr r3, r30
/* 80136CB4 00133BF4  7F E4 FB 78 */	mr r4, r31
/* 80136CB8 00133BF8  48 00 00 79 */	bl init__8CollPartFPQ28SysShape9MtxObject
/* 80136CBC 00133BFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136CC0 00133C00  7F C3 F3 78 */	mr r3, r30
/* 80136CC4 00133C04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80136CC8 00133C08  83 C1 00 08 */	lwz r30, 8(r1)
/* 80136CCC 00133C0C  7C 08 03 A6 */	mtlr r0
/* 80136CD0 00133C10  38 21 00 10 */	addi r1, r1, 0x10
/* 80136CD4 00133C14  4E 80 00 20 */	blr 
.endfn __ct__8CollPartFPQ28SysShape9MtxObject

.fn __ct__8CollPartFv, global
/* 80136CD8 00133C18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80136CDC 00133C1C  7C 08 02 A6 */	mflr r0
/* 80136CE0 00133C20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80136CE4 00133C24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80136CE8 00133C28  7C 7F 1B 78 */	mr r31, r3
/* 80136CEC 00133C2C  48 2D A6 A5 */	bl __ct__5CNodeFv
/* 80136CF0 00133C30  3C 80 80 4B */	lis r4, __vt__8CollPart@ha
/* 80136CF4 00133C34  38 7F 00 30 */	addi r3, r31, 0x30
/* 80136CF8 00133C38  38 04 FE 9C */	addi r0, r4, __vt__8CollPart@l
/* 80136CFC 00133C3C  90 1F 00 00 */	stw r0, 0(r31)
/* 80136D00 00133C40  48 2D C5 71 */	bl __ct__4ID32Fv
/* 80136D04 00133C44  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80136D08 00133C48  48 2D C5 69 */	bl __ct__4ID32Fv
/* 80136D0C 00133C4C  7F E3 FB 78 */	mr r3, r31
/* 80136D10 00133C50  38 80 00 00 */	li r4, 0
/* 80136D14 00133C54  48 00 00 1D */	bl init__8CollPartFPQ28SysShape9MtxObject
/* 80136D18 00133C58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136D1C 00133C5C  7F E3 FB 78 */	mr r3, r31
/* 80136D20 00133C60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80136D24 00133C64  7C 08 03 A6 */	mtlr r0
/* 80136D28 00133C68  38 21 00 10 */	addi r1, r1, 0x10
/* 80136D2C 00133C6C  4E 80 00 20 */	blr 
.endfn __ct__8CollPartFv

.fn init__8CollPartFPQ28SysShape9MtxObject, global
/* 80136D30 00133C70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80136D34 00133C74  7C 08 02 A6 */	mflr r0
/* 80136D38 00133C78  38 C0 00 00 */	li r6, 0
/* 80136D3C 00133C7C  7C 67 1B 78 */	mr r7, r3
/* 80136D40 00133C80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80136D44 00133C84  38 00 FF FF */	li r0, -1
/* 80136D48 00133C88  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80136D4C 00133C8C  3C A0 5F 5F */	lis r5, 0x5F5F5F5F@ha
/* 80136D50 00133C90  90 C3 00 10 */	stw r6, 0x10(r3)
/* 80136D54 00133C94  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80136D58 00133C98  38 67 00 3C */	addi r3, r7, 0x3c
/* 80136D5C 00133C9C  90 C7 00 08 */	stw r6, 8(r7)
/* 80136D60 00133CA0  90 C7 00 04 */	stw r6, 4(r7)
/* 80136D64 00133CA4  D0 07 00 1C */	stfs f0, 0x1c(r7)
/* 80136D68 00133CA8  D0 07 00 18 */	stfs f0, 0x18(r7)
/* 80136D6C 00133CAC  D0 07 00 20 */	stfs f0, 0x20(r7)
/* 80136D70 00133CB0  D0 07 00 24 */	stfs f0, 0x24(r7)
/* 80136D74 00133CB4  D0 07 00 28 */	stfs f0, 0x28(r7)
/* 80136D78 00133CB8  D0 07 00 4C */	stfs f0, 0x4c(r7)
/* 80136D7C 00133CBC  D0 07 00 50 */	stfs f0, 0x50(r7)
/* 80136D80 00133CC0  D0 07 00 54 */	stfs f0, 0x54(r7)
/* 80136D84 00133CC4  90 87 00 5C */	stw r4, 0x5c(r7)
/* 80136D88 00133CC8  38 85 5F 5F */	addi r4, r5, 0x5F5F5F5F@l
/* 80136D8C 00133CCC  90 07 00 2C */	stw r0, 0x2c(r7)
/* 80136D90 00133CD0  90 C7 00 60 */	stw r6, 0x60(r7)
/* 80136D94 00133CD4  B0 C7 00 48 */	sth r6, 0x48(r7)
/* 80136D98 00133CD8  98 C7 00 58 */	stb r6, 0x58(r7)
/* 80136D9C 00133CDC  48 2D C5 3D */	bl setID__4ID32FUl
/* 80136DA0 00133CE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136DA4 00133CE4  7C 08 03 A6 */	mtlr r0
/* 80136DA8 00133CE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80136DAC 00133CEC  4E 80 00 20 */	blr 
.endfn init__8CollPartFPQ28SysShape9MtxObject

.fn isStickable__8CollPartFv, global
/* 80136DB0 00133CF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80136DB4 00133CF4  7C 08 02 A6 */	mflr r0
/* 80136DB8 00133CF8  3C 80 73 2A */	lis r4, 0x732A2A2A@ha
/* 80136DBC 00133CFC  38 63 00 3C */	addi r3, r3, 0x3c
/* 80136DC0 00133D00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80136DC4 00133D04  38 A0 00 2A */	li r5, 0x2a
/* 80136DC8 00133D08  38 84 2A 2A */	addi r4, r4, 0x732A2A2A@l
/* 80136DCC 00133D0C  48 2D C5 31 */	bl match__4ID32FUlc
/* 80136DD0 00133D10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136DD4 00133D14  7C 08 03 A6 */	mtlr r0
/* 80136DD8 00133D18  38 21 00 10 */	addi r1, r1, 0x10
/* 80136DDC 00133D1C  4E 80 00 20 */	blr 
.endfn isStickable__8CollPartFv

.fn update__8CollPartFv, global
/* 80136DE0 00133D20  94 21 FD 10 */	stwu r1, -0x2f0(r1)
/* 80136DE4 00133D24  7C 08 02 A6 */	mflr r0
/* 80136DE8 00133D28  90 01 02 F4 */	stw r0, 0x2f4(r1)
/* 80136DEC 00133D2C  38 81 02 A8 */	addi r4, r1, 0x2a8
/* 80136DF0 00133D30  93 E1 02 EC */	stw r31, 0x2ec(r1)
/* 80136DF4 00133D34  7C 7F 1B 78 */	mr r31, r3
/* 80136DF8 00133D38  93 C1 02 E8 */	stw r30, 0x2e8(r1)
/* 80136DFC 00133D3C  93 A1 02 E4 */	stw r29, 0x2e4(r1)
/* 80136E00 00133D40  93 81 02 E0 */	stw r28, 0x2e0(r1)
/* 80136E04 00133D44  48 00 05 15 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 80136E08 00133D48  C0 01 02 B4 */	lfs f0, 0x2b4(r1)
/* 80136E0C 00133D4C  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 80136E10 00133D50  C0 01 02 C4 */	lfs f0, 0x2c4(r1)
/* 80136E14 00133D54  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80136E18 00133D58  C0 01 02 D4 */	lfs f0, 0x2d4(r1)
/* 80136E1C 00133D5C  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 80136E20 00133D60  83 BF 00 04 */	lwz r29, 4(r31)
/* 80136E24 00133D64  28 1D 00 00 */	cmplwi r29, 0
/* 80136E28 00133D68  41 82 02 38 */	beq .L_80137060
/* 80136E2C 00133D6C  7F A3 EB 78 */	mr r3, r29
/* 80136E30 00133D70  38 81 02 78 */	addi r4, r1, 0x278
/* 80136E34 00133D74  48 00 04 E5 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 80136E38 00133D78  38 61 02 78 */	addi r3, r1, 0x278
/* 80136E3C 00133D7C  38 80 00 00 */	li r4, 0
/* 80136E40 00133D80  38 A0 00 03 */	li r5, 3
/* 80136E44 00133D84  48 00 04 BD */	bl __cl__7MatrixfFii
/* 80136E48 00133D88  C0 03 00 00 */	lfs f0, 0(r3)
/* 80136E4C 00133D8C  38 61 02 78 */	addi r3, r1, 0x278
/* 80136E50 00133D90  38 80 00 01 */	li r4, 1
/* 80136E54 00133D94  38 A0 00 03 */	li r5, 3
/* 80136E58 00133D98  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 80136E5C 00133D9C  48 00 04 A5 */	bl __cl__7MatrixfFii
/* 80136E60 00133DA0  C0 03 00 00 */	lfs f0, 0(r3)
/* 80136E64 00133DA4  38 61 02 78 */	addi r3, r1, 0x278
/* 80136E68 00133DA8  38 80 00 02 */	li r4, 2
/* 80136E6C 00133DAC  38 A0 00 03 */	li r5, 3
/* 80136E70 00133DB0  D0 1D 00 50 */	stfs f0, 0x50(r29)
/* 80136E74 00133DB4  48 00 04 8D */	bl __cl__7MatrixfFii
/* 80136E78 00133DB8  C0 03 00 00 */	lfs f0, 0(r3)
/* 80136E7C 00133DBC  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 80136E80 00133DC0  83 9D 00 04 */	lwz r28, 4(r29)
/* 80136E84 00133DC4  28 1C 00 00 */	cmplwi r28, 0
/* 80136E88 00133DC8  41 82 00 E8 */	beq .L_80136F70
/* 80136E8C 00133DCC  7F 83 E3 78 */	mr r3, r28
/* 80136E90 00133DD0  38 81 02 18 */	addi r4, r1, 0x218
/* 80136E94 00133DD4  48 00 04 85 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 80136E98 00133DD8  38 61 02 18 */	addi r3, r1, 0x218
/* 80136E9C 00133DDC  38 BC 00 4C */	addi r5, r28, 0x4c
/* 80136EA0 00133DE0  38 80 00 03 */	li r4, 3
/* 80136EA4 00133DE4  48 00 04 39 */	bl "getBasis__7MatrixfFiR10Vector3<f>"
/* 80136EA8 00133DE8  80 1C 00 04 */	lwz r0, 4(r28)
/* 80136EAC 00133DEC  28 00 00 00 */	cmplwi r0, 0
/* 80136EB0 00133DF0  41 82 00 5C */	beq .L_80136F0C
/* 80136EB4 00133DF4  7F 83 E3 78 */	mr r3, r28
/* 80136EB8 00133DF8  4B FF D6 91 */	bl getNext__8CollPartFv
/* 80136EBC 00133DFC  38 81 01 58 */	addi r4, r1, 0x158
/* 80136EC0 00133E00  7C 7E 1B 78 */	mr r30, r3
/* 80136EC4 00133E04  48 00 04 55 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 80136EC8 00133E08  38 61 01 58 */	addi r3, r1, 0x158
/* 80136ECC 00133E0C  38 9E 00 4C */	addi r4, r30, 0x4c
/* 80136ED0 00133E10  48 00 03 F1 */	bl "getTranslation__7MatrixfFR10Vector3<f>"
/* 80136ED4 00133E14  7F C3 F3 78 */	mr r3, r30
/* 80136ED8 00133E18  4B FF D6 71 */	bl getNext__8CollPartFv
/* 80136EDC 00133E1C  28 03 00 00 */	cmplwi r3, 0
/* 80136EE0 00133E20  41 82 00 10 */	beq .L_80136EF0
/* 80136EE4 00133E24  7F C3 F3 78 */	mr r3, r30
/* 80136EE8 00133E28  4B FF D6 61 */	bl getNext__8CollPartFv
/* 80136EEC 00133E2C  4B FF FE F5 */	bl update__8CollPartFv
.L_80136EF0:
/* 80136EF0 00133E30  7F C3 F3 78 */	mr r3, r30
/* 80136EF4 00133E34  4B FF D6 4D */	bl getChild__8CollPartFv
/* 80136EF8 00133E38  28 03 00 00 */	cmplwi r3, 0
/* 80136EFC 00133E3C  41 82 00 10 */	beq .L_80136F0C
/* 80136F00 00133E40  7F C3 F3 78 */	mr r3, r30
/* 80136F04 00133E44  4B FF D6 3D */	bl getChild__8CollPartFv
/* 80136F08 00133E48  4B FF FE D9 */	bl update__8CollPartFv
.L_80136F0C:
/* 80136F0C 00133E4C  80 1C 00 10 */	lwz r0, 0x10(r28)
/* 80136F10 00133E50  28 00 00 00 */	cmplwi r0, 0
/* 80136F14 00133E54  41 82 00 5C */	beq .L_80136F70
/* 80136F18 00133E58  7F 83 E3 78 */	mr r3, r28
/* 80136F1C 00133E5C  4B FF D6 25 */	bl getChild__8CollPartFv
/* 80136F20 00133E60  38 81 01 28 */	addi r4, r1, 0x128
/* 80136F24 00133E64  7C 7E 1B 78 */	mr r30, r3
/* 80136F28 00133E68  48 00 03 F1 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 80136F2C 00133E6C  38 61 01 28 */	addi r3, r1, 0x128
/* 80136F30 00133E70  38 9E 00 4C */	addi r4, r30, 0x4c
/* 80136F34 00133E74  48 00 03 8D */	bl "getTranslation__7MatrixfFR10Vector3<f>"
/* 80136F38 00133E78  7F C3 F3 78 */	mr r3, r30
/* 80136F3C 00133E7C  4B FF D6 0D */	bl getNext__8CollPartFv
/* 80136F40 00133E80  28 03 00 00 */	cmplwi r3, 0
/* 80136F44 00133E84  41 82 00 10 */	beq .L_80136F54
/* 80136F48 00133E88  7F C3 F3 78 */	mr r3, r30
/* 80136F4C 00133E8C  4B FF D5 FD */	bl getNext__8CollPartFv
/* 80136F50 00133E90  4B FF FE 91 */	bl update__8CollPartFv
.L_80136F54:
/* 80136F54 00133E94  7F C3 F3 78 */	mr r3, r30
/* 80136F58 00133E98  4B FF D5 E9 */	bl getChild__8CollPartFv
/* 80136F5C 00133E9C  28 03 00 00 */	cmplwi r3, 0
/* 80136F60 00133EA0  41 82 00 10 */	beq .L_80136F70
/* 80136F64 00133EA4  7F C3 F3 78 */	mr r3, r30
/* 80136F68 00133EA8  4B FF D5 D9 */	bl getChild__8CollPartFv
/* 80136F6C 00133EAC  4B FF FE 75 */	bl update__8CollPartFv
.L_80136F70:
/* 80136F70 00133EB0  83 9D 00 10 */	lwz r28, 0x10(r29)
/* 80136F74 00133EB4  28 1C 00 00 */	cmplwi r28, 0
/* 80136F78 00133EB8  41 82 00 E8 */	beq .L_80137060
/* 80136F7C 00133EBC  7F 83 E3 78 */	mr r3, r28
/* 80136F80 00133EC0  38 81 01 E8 */	addi r4, r1, 0x1e8
/* 80136F84 00133EC4  48 00 03 95 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 80136F88 00133EC8  38 61 01 E8 */	addi r3, r1, 0x1e8
/* 80136F8C 00133ECC  38 BC 00 4C */	addi r5, r28, 0x4c
/* 80136F90 00133ED0  38 80 00 03 */	li r4, 3
/* 80136F94 00133ED4  48 00 03 49 */	bl "getBasis__7MatrixfFiR10Vector3<f>"
/* 80136F98 00133ED8  80 1C 00 04 */	lwz r0, 4(r28)
/* 80136F9C 00133EDC  28 00 00 00 */	cmplwi r0, 0
/* 80136FA0 00133EE0  41 82 00 5C */	beq .L_80136FFC
/* 80136FA4 00133EE4  7F 83 E3 78 */	mr r3, r28
/* 80136FA8 00133EE8  4B FF D5 A1 */	bl getNext__8CollPartFv
/* 80136FAC 00133EEC  38 81 00 F8 */	addi r4, r1, 0xf8
/* 80136FB0 00133EF0  7C 7E 1B 78 */	mr r30, r3
/* 80136FB4 00133EF4  48 00 03 65 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 80136FB8 00133EF8  38 61 00 F8 */	addi r3, r1, 0xf8
/* 80136FBC 00133EFC  38 9E 00 4C */	addi r4, r30, 0x4c
/* 80136FC0 00133F00  48 00 03 01 */	bl "getTranslation__7MatrixfFR10Vector3<f>"
/* 80136FC4 00133F04  7F C3 F3 78 */	mr r3, r30
/* 80136FC8 00133F08  4B FF D5 81 */	bl getNext__8CollPartFv
/* 80136FCC 00133F0C  28 03 00 00 */	cmplwi r3, 0
/* 80136FD0 00133F10  41 82 00 10 */	beq .L_80136FE0
/* 80136FD4 00133F14  7F C3 F3 78 */	mr r3, r30
/* 80136FD8 00133F18  4B FF D5 71 */	bl getNext__8CollPartFv
/* 80136FDC 00133F1C  4B FF FE 05 */	bl update__8CollPartFv
.L_80136FE0:
/* 80136FE0 00133F20  7F C3 F3 78 */	mr r3, r30
/* 80136FE4 00133F24  4B FF D5 5D */	bl getChild__8CollPartFv
/* 80136FE8 00133F28  28 03 00 00 */	cmplwi r3, 0
/* 80136FEC 00133F2C  41 82 00 10 */	beq .L_80136FFC
/* 80136FF0 00133F30  7F C3 F3 78 */	mr r3, r30
/* 80136FF4 00133F34  4B FF D5 4D */	bl getChild__8CollPartFv
/* 80136FF8 00133F38  4B FF FD E9 */	bl update__8CollPartFv
.L_80136FFC:
/* 80136FFC 00133F3C  80 1C 00 10 */	lwz r0, 0x10(r28)
/* 80137000 00133F40  28 00 00 00 */	cmplwi r0, 0
/* 80137004 00133F44  41 82 00 5C */	beq .L_80137060
/* 80137008 00133F48  7F 83 E3 78 */	mr r3, r28
/* 8013700C 00133F4C  4B FF D5 35 */	bl getChild__8CollPartFv
/* 80137010 00133F50  38 81 00 C8 */	addi r4, r1, 0xc8
/* 80137014 00133F54  7C 7E 1B 78 */	mr r30, r3
/* 80137018 00133F58  48 00 03 01 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 8013701C 00133F5C  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80137020 00133F60  38 9E 00 4C */	addi r4, r30, 0x4c
/* 80137024 00133F64  48 00 02 9D */	bl "getTranslation__7MatrixfFR10Vector3<f>"
/* 80137028 00133F68  7F C3 F3 78 */	mr r3, r30
/* 8013702C 00133F6C  4B FF D5 1D */	bl getNext__8CollPartFv
/* 80137030 00133F70  28 03 00 00 */	cmplwi r3, 0
/* 80137034 00133F74  41 82 00 10 */	beq .L_80137044
/* 80137038 00133F78  7F C3 F3 78 */	mr r3, r30
/* 8013703C 00133F7C  4B FF D5 0D */	bl getNext__8CollPartFv
/* 80137040 00133F80  4B FF FD A1 */	bl update__8CollPartFv
.L_80137044:
/* 80137044 00133F84  7F C3 F3 78 */	mr r3, r30
/* 80137048 00133F88  4B FF D4 F9 */	bl getChild__8CollPartFv
/* 8013704C 00133F8C  28 03 00 00 */	cmplwi r3, 0
/* 80137050 00133F90  41 82 00 10 */	beq .L_80137060
/* 80137054 00133F94  7F C3 F3 78 */	mr r3, r30
/* 80137058 00133F98  4B FF D4 E9 */	bl getChild__8CollPartFv
/* 8013705C 00133F9C  4B FF FD 85 */	bl update__8CollPartFv
.L_80137060:
/* 80137060 00133FA0  83 9F 00 10 */	lwz r28, 0x10(r31)
/* 80137064 00133FA4  28 1C 00 00 */	cmplwi r28, 0
/* 80137068 00133FA8  41 82 02 38 */	beq .L_801372A0
/* 8013706C 00133FAC  7F 83 E3 78 */	mr r3, r28
/* 80137070 00133FB0  38 81 02 48 */	addi r4, r1, 0x248
/* 80137074 00133FB4  48 00 02 A5 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 80137078 00133FB8  38 61 02 48 */	addi r3, r1, 0x248
/* 8013707C 00133FBC  38 80 00 00 */	li r4, 0
/* 80137080 00133FC0  38 A0 00 03 */	li r5, 3
/* 80137084 00133FC4  48 00 02 7D */	bl __cl__7MatrixfFii
/* 80137088 00133FC8  C0 03 00 00 */	lfs f0, 0(r3)
/* 8013708C 00133FCC  38 61 02 48 */	addi r3, r1, 0x248
/* 80137090 00133FD0  38 80 00 01 */	li r4, 1
/* 80137094 00133FD4  38 A0 00 03 */	li r5, 3
/* 80137098 00133FD8  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 8013709C 00133FDC  48 00 02 65 */	bl __cl__7MatrixfFii
/* 801370A0 00133FE0  C0 03 00 00 */	lfs f0, 0(r3)
/* 801370A4 00133FE4  38 61 02 48 */	addi r3, r1, 0x248
/* 801370A8 00133FE8  38 80 00 02 */	li r4, 2
/* 801370AC 00133FEC  38 A0 00 03 */	li r5, 3
/* 801370B0 00133FF0  D0 1C 00 50 */	stfs f0, 0x50(r28)
/* 801370B4 00133FF4  48 00 02 4D */	bl __cl__7MatrixfFii
/* 801370B8 00133FF8  C0 03 00 00 */	lfs f0, 0(r3)
/* 801370BC 00133FFC  D0 1C 00 54 */	stfs f0, 0x54(r28)
/* 801370C0 00134000  83 BC 00 04 */	lwz r29, 4(r28)
/* 801370C4 00134004  28 1D 00 00 */	cmplwi r29, 0
/* 801370C8 00134008  41 82 00 E8 */	beq .L_801371B0
/* 801370CC 0013400C  7F A3 EB 78 */	mr r3, r29
/* 801370D0 00134010  38 81 01 B8 */	addi r4, r1, 0x1b8
/* 801370D4 00134014  48 00 02 45 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 801370D8 00134018  38 61 01 B8 */	addi r3, r1, 0x1b8
/* 801370DC 0013401C  38 BD 00 4C */	addi r5, r29, 0x4c
/* 801370E0 00134020  38 80 00 03 */	li r4, 3
/* 801370E4 00134024  48 00 01 F9 */	bl "getBasis__7MatrixfFiR10Vector3<f>"
/* 801370E8 00134028  80 1D 00 04 */	lwz r0, 4(r29)
/* 801370EC 0013402C  28 00 00 00 */	cmplwi r0, 0
/* 801370F0 00134030  41 82 00 5C */	beq .L_8013714C
/* 801370F4 00134034  7F A3 EB 78 */	mr r3, r29
/* 801370F8 00134038  4B FF D4 51 */	bl getNext__8CollPartFv
/* 801370FC 0013403C  38 81 00 98 */	addi r4, r1, 0x98
/* 80137100 00134040  7C 7E 1B 78 */	mr r30, r3
/* 80137104 00134044  48 00 02 15 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 80137108 00134048  38 61 00 98 */	addi r3, r1, 0x98
/* 8013710C 0013404C  38 9E 00 4C */	addi r4, r30, 0x4c
/* 80137110 00134050  48 00 01 B1 */	bl "getTranslation__7MatrixfFR10Vector3<f>"
/* 80137114 00134054  7F C3 F3 78 */	mr r3, r30
/* 80137118 00134058  4B FF D4 31 */	bl getNext__8CollPartFv
/* 8013711C 0013405C  28 03 00 00 */	cmplwi r3, 0
/* 80137120 00134060  41 82 00 10 */	beq .L_80137130
/* 80137124 00134064  7F C3 F3 78 */	mr r3, r30
/* 80137128 00134068  4B FF D4 21 */	bl getNext__8CollPartFv
/* 8013712C 0013406C  4B FF FC B5 */	bl update__8CollPartFv
.L_80137130:
/* 80137130 00134070  7F C3 F3 78 */	mr r3, r30
/* 80137134 00134074  4B FF D4 0D */	bl getChild__8CollPartFv
/* 80137138 00134078  28 03 00 00 */	cmplwi r3, 0
/* 8013713C 0013407C  41 82 00 10 */	beq .L_8013714C
/* 80137140 00134080  7F C3 F3 78 */	mr r3, r30
/* 80137144 00134084  4B FF D3 FD */	bl getChild__8CollPartFv
/* 80137148 00134088  4B FF FC 99 */	bl update__8CollPartFv
.L_8013714C:
/* 8013714C 0013408C  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80137150 00134090  28 00 00 00 */	cmplwi r0, 0
/* 80137154 00134094  41 82 00 5C */	beq .L_801371B0
/* 80137158 00134098  7F A3 EB 78 */	mr r3, r29
/* 8013715C 0013409C  4B FF D3 E5 */	bl getChild__8CollPartFv
/* 80137160 001340A0  38 81 00 68 */	addi r4, r1, 0x68
/* 80137164 001340A4  7C 7E 1B 78 */	mr r30, r3
/* 80137168 001340A8  48 00 01 B1 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 8013716C 001340AC  38 61 00 68 */	addi r3, r1, 0x68
/* 80137170 001340B0  38 9E 00 4C */	addi r4, r30, 0x4c
/* 80137174 001340B4  48 00 01 4D */	bl "getTranslation__7MatrixfFR10Vector3<f>"
/* 80137178 001340B8  7F C3 F3 78 */	mr r3, r30
/* 8013717C 001340BC  4B FF D3 CD */	bl getNext__8CollPartFv
/* 80137180 001340C0  28 03 00 00 */	cmplwi r3, 0
/* 80137184 001340C4  41 82 00 10 */	beq .L_80137194
/* 80137188 001340C8  7F C3 F3 78 */	mr r3, r30
/* 8013718C 001340CC  4B FF D3 BD */	bl getNext__8CollPartFv
/* 80137190 001340D0  4B FF FC 51 */	bl update__8CollPartFv
.L_80137194:
/* 80137194 001340D4  7F C3 F3 78 */	mr r3, r30
/* 80137198 001340D8  4B FF D3 A9 */	bl getChild__8CollPartFv
/* 8013719C 001340DC  28 03 00 00 */	cmplwi r3, 0
/* 801371A0 001340E0  41 82 00 10 */	beq .L_801371B0
/* 801371A4 001340E4  7F C3 F3 78 */	mr r3, r30
/* 801371A8 001340E8  4B FF D3 99 */	bl getChild__8CollPartFv
/* 801371AC 001340EC  4B FF FC 35 */	bl update__8CollPartFv
.L_801371B0:
/* 801371B0 001340F0  83 9C 00 10 */	lwz r28, 0x10(r28)
/* 801371B4 001340F4  28 1C 00 00 */	cmplwi r28, 0
/* 801371B8 001340F8  41 82 00 E8 */	beq .L_801372A0
/* 801371BC 001340FC  7F 83 E3 78 */	mr r3, r28
/* 801371C0 00134100  38 81 01 88 */	addi r4, r1, 0x188
/* 801371C4 00134104  48 00 01 55 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 801371C8 00134108  38 61 01 88 */	addi r3, r1, 0x188
/* 801371CC 0013410C  38 BC 00 4C */	addi r5, r28, 0x4c
/* 801371D0 00134110  38 80 00 03 */	li r4, 3
/* 801371D4 00134114  48 00 01 09 */	bl "getBasis__7MatrixfFiR10Vector3<f>"
/* 801371D8 00134118  80 1C 00 04 */	lwz r0, 4(r28)
/* 801371DC 0013411C  28 00 00 00 */	cmplwi r0, 0
/* 801371E0 00134120  41 82 00 5C */	beq .L_8013723C
/* 801371E4 00134124  7F 83 E3 78 */	mr r3, r28
/* 801371E8 00134128  4B FF D3 61 */	bl getNext__8CollPartFv
/* 801371EC 0013412C  38 81 00 38 */	addi r4, r1, 0x38
/* 801371F0 00134130  7C 7E 1B 78 */	mr r30, r3
/* 801371F4 00134134  48 00 01 25 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 801371F8 00134138  38 61 00 38 */	addi r3, r1, 0x38
/* 801371FC 0013413C  38 9E 00 4C */	addi r4, r30, 0x4c
/* 80137200 00134140  48 00 00 C1 */	bl "getTranslation__7MatrixfFR10Vector3<f>"
/* 80137204 00134144  7F C3 F3 78 */	mr r3, r30
/* 80137208 00134148  4B FF D3 41 */	bl getNext__8CollPartFv
/* 8013720C 0013414C  28 03 00 00 */	cmplwi r3, 0
/* 80137210 00134150  41 82 00 10 */	beq .L_80137220
/* 80137214 00134154  7F C3 F3 78 */	mr r3, r30
/* 80137218 00134158  4B FF D3 31 */	bl getNext__8CollPartFv
/* 8013721C 0013415C  4B FF FB C5 */	bl update__8CollPartFv
.L_80137220:
/* 80137220 00134160  7F C3 F3 78 */	mr r3, r30
/* 80137224 00134164  4B FF D3 1D */	bl getChild__8CollPartFv
/* 80137228 00134168  28 03 00 00 */	cmplwi r3, 0
/* 8013722C 0013416C  41 82 00 10 */	beq .L_8013723C
/* 80137230 00134170  7F C3 F3 78 */	mr r3, r30
/* 80137234 00134174  4B FF D3 0D */	bl getChild__8CollPartFv
/* 80137238 00134178  4B FF FB A9 */	bl update__8CollPartFv
.L_8013723C:
/* 8013723C 0013417C  80 1C 00 10 */	lwz r0, 0x10(r28)
/* 80137240 00134180  28 00 00 00 */	cmplwi r0, 0
/* 80137244 00134184  41 82 00 5C */	beq .L_801372A0
/* 80137248 00134188  7F 83 E3 78 */	mr r3, r28
/* 8013724C 0013418C  4B FF D2 F5 */	bl getChild__8CollPartFv
/* 80137250 00134190  38 81 00 08 */	addi r4, r1, 8
/* 80137254 00134194  7C 7E 1B 78 */	mr r30, r3
/* 80137258 00134198  48 00 00 C1 */	bl makeMatrixTo__8CollPartFR7Matrixf
/* 8013725C 0013419C  38 61 00 08 */	addi r3, r1, 8
/* 80137260 001341A0  38 9E 00 4C */	addi r4, r30, 0x4c
/* 80137264 001341A4  48 00 00 5D */	bl "getTranslation__7MatrixfFR10Vector3<f>"
/* 80137268 001341A8  7F C3 F3 78 */	mr r3, r30
/* 8013726C 001341AC  4B FF D2 DD */	bl getNext__8CollPartFv
/* 80137270 001341B0  28 03 00 00 */	cmplwi r3, 0
/* 80137274 001341B4  41 82 00 10 */	beq .L_80137284
/* 80137278 001341B8  7F C3 F3 78 */	mr r3, r30
/* 8013727C 001341BC  4B FF D2 CD */	bl getNext__8CollPartFv
/* 80137280 001341C0  4B FF FB 61 */	bl update__8CollPartFv
.L_80137284:
/* 80137284 001341C4  7F C3 F3 78 */	mr r3, r30
/* 80137288 001341C8  4B FF D2 B9 */	bl getChild__8CollPartFv
/* 8013728C 001341CC  28 03 00 00 */	cmplwi r3, 0
/* 80137290 001341D0  41 82 00 10 */	beq .L_801372A0
/* 80137294 001341D4  7F C3 F3 78 */	mr r3, r30
/* 80137298 001341D8  4B FF D2 A9 */	bl getChild__8CollPartFv
/* 8013729C 001341DC  4B FF FB 45 */	bl update__8CollPartFv
.L_801372A0:
/* 801372A0 001341E0  80 01 02 F4 */	lwz r0, 0x2f4(r1)
/* 801372A4 001341E4  83 E1 02 EC */	lwz r31, 0x2ec(r1)
/* 801372A8 001341E8  83 C1 02 E8 */	lwz r30, 0x2e8(r1)
/* 801372AC 001341EC  83 A1 02 E4 */	lwz r29, 0x2e4(r1)
/* 801372B0 001341F0  83 81 02 E0 */	lwz r28, 0x2e0(r1)
/* 801372B4 001341F4  7C 08 03 A6 */	mtlr r0
/* 801372B8 001341F8  38 21 02 F0 */	addi r1, r1, 0x2f0
/* 801372BC 001341FC  4E 80 00 20 */	blr 
.endfn update__8CollPartFv

.fn "getTranslation__7MatrixfFR10Vector3<f>", weak
/* 801372C0 00134200  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 801372C4 00134204  D0 04 00 00 */	stfs f0, 0(r4)
/* 801372C8 00134208  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 801372CC 0013420C  D0 04 00 04 */	stfs f0, 4(r4)
/* 801372D0 00134210  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 801372D4 00134214  D0 04 00 08 */	stfs f0, 8(r4)
/* 801372D8 00134218  4E 80 00 20 */	blr 
.endfn "getTranslation__7MatrixfFR10Vector3<f>"

.fn "getBasis__7MatrixfFiR10Vector3<f>", weak
/* 801372DC 0013421C  54 80 10 3A */	slwi r0, r4, 2
/* 801372E0 00134220  7C 03 04 2E */	lfsx f0, r3, r0
/* 801372E4 00134224  7C 63 02 14 */	add r3, r3, r0
/* 801372E8 00134228  D0 05 00 00 */	stfs f0, 0(r5)
/* 801372EC 0013422C  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 801372F0 00134230  D0 05 00 04 */	stfs f0, 4(r5)
/* 801372F4 00134234  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 801372F8 00134238  D0 05 00 08 */	stfs f0, 8(r5)
/* 801372FC 0013423C  4E 80 00 20 */	blr 
.endfn "getBasis__7MatrixfFiR10Vector3<f>"

.fn __cl__7MatrixfFii, weak
/* 80137300 00134240  54 84 20 36 */	slwi r4, r4, 4
/* 80137304 00134244  54 A0 10 3A */	slwi r0, r5, 2
/* 80137308 00134248  7C 65 1B 78 */	mr r5, r3
/* 8013730C 0013424C  7C 64 02 14 */	add r3, r4, r0
/* 80137310 00134250  7C 65 1A 14 */	add r3, r5, r3
/* 80137314 00134254  4E 80 00 20 */	blr 
.endfn __cl__7MatrixfFii

.fn makeMatrixTo__8CollPartFR7Matrixf, global
/* 80137318 00134258  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8013731C 0013425C  7C 08 02 A6 */	mflr r0
/* 80137320 00134260  90 01 00 44 */	stw r0, 0x44(r1)
/* 80137324 00134264  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80137328 00134268  7C 9F 23 78 */	mr r31, r4
/* 8013732C 0013426C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80137330 00134270  7C 7E 1B 78 */	mr r30, r3
/* 80137334 00134274  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 80137338 00134278  2C 00 FF FF */	cmpwi r0, -1
/* 8013733C 0013427C  41 82 00 48 */	beq .L_80137384
/* 80137340 00134280  38 61 00 08 */	addi r3, r1, 8
/* 80137344 00134284  4B FB 2F 5D */	bl PSMTXIdentity
/* 80137348 00134288  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 8013734C 0013428C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80137350 00134290  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 80137354 00134294  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80137358 00134298  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 8013735C 0013429C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80137360 001342A0  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 80137364 001342A4  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 80137368 001342A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8013736C 001342AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80137370 001342B0  7D 89 03 A6 */	mtctr r12
/* 80137374 001342B4  4E 80 04 21 */	bctrl 
/* 80137378 001342B8  7F E5 FB 78 */	mr r5, r31
/* 8013737C 001342BC  38 81 00 08 */	addi r4, r1, 8
/* 80137380 001342C0  4B FB 2F 81 */	bl PSMTXConcat
.L_80137384:
/* 80137384 001342C4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80137388 001342C8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8013738C 001342CC  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80137390 001342D0  7C 08 03 A6 */	mtlr r0
/* 80137394 001342D4  38 21 00 40 */	addi r1, r1, 0x40
/* 80137398 001342D8  4E 80 00 20 */	blr 
.endfn makeMatrixTo__8CollPartFR7Matrixf

.fn makeTubeTree__8CollPartFv, global
/* 8013739C 001342DC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801373A0 001342E0  7C 08 02 A6 */	mflr r0
/* 801373A4 001342E4  90 01 00 34 */	stw r0, 0x34(r1)
/* 801373A8 001342E8  BE E1 00 0C */	stmw r23, 0xc(r1)
/* 801373AC 001342EC  80 03 00 10 */	lwz r0, 0x10(r3)
/* 801373B0 001342F0  28 00 00 00 */	cmplwi r0, 0
/* 801373B4 001342F4  41 82 00 10 */	beq .L_801373C4
/* 801373B8 001342F8  38 00 00 02 */	li r0, 2
/* 801373BC 001342FC  98 03 00 58 */	stb r0, 0x58(r3)
/* 801373C0 00134300  48 00 00 0C */	b .L_801373CC
.L_801373C4:
/* 801373C4 00134304  38 00 00 00 */	li r0, 0
/* 801373C8 00134308  98 03 00 58 */	stb r0, 0x58(r3)
.L_801373CC:
/* 801373CC 0013430C  83 83 00 10 */	lwz r28, 0x10(r3)
/* 801373D0 00134310  48 00 01 C4 */	b .L_80137594
.L_801373D4:
/* 801373D4 00134314  80 1C 00 10 */	lwz r0, 0x10(r28)
/* 801373D8 00134318  28 00 00 00 */	cmplwi r0, 0
/* 801373DC 0013431C  41 82 00 10 */	beq .L_801373EC
/* 801373E0 00134320  38 00 00 02 */	li r0, 2
/* 801373E4 00134324  98 1C 00 58 */	stb r0, 0x58(r28)
/* 801373E8 00134328  48 00 00 0C */	b .L_801373F4
.L_801373EC:
/* 801373EC 0013432C  38 00 00 00 */	li r0, 0
/* 801373F0 00134330  98 1C 00 58 */	stb r0, 0x58(r28)
.L_801373F4:
/* 801373F4 00134334  83 FC 00 10 */	lwz r31, 0x10(r28)
/* 801373F8 00134338  48 00 01 90 */	b .L_80137588
.L_801373FC:
/* 801373FC 0013433C  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80137400 00134340  28 00 00 00 */	cmplwi r0, 0
/* 80137404 00134344  41 82 00 10 */	beq .L_80137414
/* 80137408 00134348  38 00 00 02 */	li r0, 2
/* 8013740C 0013434C  98 1F 00 58 */	stb r0, 0x58(r31)
/* 80137410 00134350  48 00 00 0C */	b .L_8013741C
.L_80137414:
/* 80137414 00134354  38 00 00 00 */	li r0, 0
/* 80137418 00134358  98 1F 00 58 */	stb r0, 0x58(r31)
.L_8013741C:
/* 8013741C 0013435C  83 DF 00 10 */	lwz r30, 0x10(r31)
/* 80137420 00134360  48 00 01 5C */	b .L_8013757C
.L_80137424:
/* 80137424 00134364  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80137428 00134368  28 00 00 00 */	cmplwi r0, 0
/* 8013742C 0013436C  41 82 00 10 */	beq .L_8013743C
/* 80137430 00134370  38 00 00 02 */	li r0, 2
/* 80137434 00134374  98 1E 00 58 */	stb r0, 0x58(r30)
/* 80137438 00134378  48 00 00 0C */	b .L_80137444
.L_8013743C:
/* 8013743C 0013437C  38 00 00 00 */	li r0, 0
/* 80137440 00134380  98 1E 00 58 */	stb r0, 0x58(r30)
.L_80137444:
/* 80137444 00134384  83 BE 00 10 */	lwz r29, 0x10(r30)
/* 80137448 00134388  48 00 01 28 */	b .L_80137570
.L_8013744C:
/* 8013744C 0013438C  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80137450 00134390  28 00 00 00 */	cmplwi r0, 0
/* 80137454 00134394  41 82 00 10 */	beq .L_80137464
/* 80137458 00134398  38 00 00 02 */	li r0, 2
/* 8013745C 0013439C  98 1D 00 58 */	stb r0, 0x58(r29)
/* 80137460 001343A0  48 00 00 0C */	b .L_8013746C
.L_80137464:
/* 80137464 001343A4  38 00 00 00 */	li r0, 0
/* 80137468 001343A8  98 1D 00 58 */	stb r0, 0x58(r29)
.L_8013746C:
/* 8013746C 001343AC  83 7D 00 10 */	lwz r27, 0x10(r29)
/* 80137470 001343B0  48 00 00 F4 */	b .L_80137564
.L_80137474:
/* 80137474 001343B4  80 1B 00 10 */	lwz r0, 0x10(r27)
/* 80137478 001343B8  28 00 00 00 */	cmplwi r0, 0
/* 8013747C 001343BC  41 82 00 10 */	beq .L_8013748C
/* 80137480 001343C0  38 00 00 02 */	li r0, 2
/* 80137484 001343C4  98 1B 00 58 */	stb r0, 0x58(r27)
/* 80137488 001343C8  48 00 00 0C */	b .L_80137494
.L_8013748C:
/* 8013748C 001343CC  38 00 00 00 */	li r0, 0
/* 80137490 001343D0  98 1B 00 58 */	stb r0, 0x58(r27)
.L_80137494:
/* 80137494 001343D4  83 5B 00 10 */	lwz r26, 0x10(r27)
/* 80137498 001343D8  48 00 00 C0 */	b .L_80137558
.L_8013749C:
/* 8013749C 001343DC  80 1A 00 10 */	lwz r0, 0x10(r26)
/* 801374A0 001343E0  28 00 00 00 */	cmplwi r0, 0
/* 801374A4 001343E4  41 82 00 10 */	beq .L_801374B4
/* 801374A8 001343E8  38 00 00 02 */	li r0, 2
/* 801374AC 001343EC  98 1A 00 58 */	stb r0, 0x58(r26)
/* 801374B0 001343F0  48 00 00 0C */	b .L_801374BC
.L_801374B4:
/* 801374B4 001343F4  38 00 00 00 */	li r0, 0
/* 801374B8 001343F8  98 1A 00 58 */	stb r0, 0x58(r26)
.L_801374BC:
/* 801374BC 001343FC  83 3A 00 10 */	lwz r25, 0x10(r26)
/* 801374C0 00134400  48 00 00 8C */	b .L_8013754C
.L_801374C4:
/* 801374C4 00134404  80 19 00 10 */	lwz r0, 0x10(r25)
/* 801374C8 00134408  28 00 00 00 */	cmplwi r0, 0
/* 801374CC 0013440C  41 82 00 10 */	beq .L_801374DC
/* 801374D0 00134410  38 00 00 02 */	li r0, 2
/* 801374D4 00134414  98 19 00 58 */	stb r0, 0x58(r25)
/* 801374D8 00134418  48 00 00 0C */	b .L_801374E4
.L_801374DC:
/* 801374DC 0013441C  38 00 00 00 */	li r0, 0
/* 801374E0 00134420  98 19 00 58 */	stb r0, 0x58(r25)
.L_801374E4:
/* 801374E4 00134424  83 19 00 10 */	lwz r24, 0x10(r25)
/* 801374E8 00134428  48 00 00 58 */	b .L_80137540
.L_801374EC:
/* 801374EC 0013442C  7F 03 C3 78 */	mr r3, r24
/* 801374F0 00134430  4B FF D0 51 */	bl getChild__8CollPartFv
/* 801374F4 00134434  28 03 00 00 */	cmplwi r3, 0
/* 801374F8 00134438  41 82 00 10 */	beq .L_80137508
/* 801374FC 0013443C  38 00 00 02 */	li r0, 2
/* 80137500 00134440  98 18 00 58 */	stb r0, 0x58(r24)
/* 80137504 00134444  48 00 00 0C */	b .L_80137510
.L_80137508:
/* 80137508 00134448  38 00 00 00 */	li r0, 0
/* 8013750C 0013444C  98 18 00 58 */	stb r0, 0x58(r24)
.L_80137510:
/* 80137510 00134450  7F 03 C3 78 */	mr r3, r24
/* 80137514 00134454  4B FF D0 2D */	bl getChild__8CollPartFv
/* 80137518 00134458  7C 77 1B 78 */	mr r23, r3
/* 8013751C 0013445C  48 00 00 18 */	b .L_80137534
.L_80137520:
/* 80137520 00134460  7E E3 BB 78 */	mr r3, r23
/* 80137524 00134464  4B FF FE 79 */	bl makeTubeTree__8CollPartFv
/* 80137528 00134468  7E E3 BB 78 */	mr r3, r23
/* 8013752C 0013446C  4B FF D0 1D */	bl getNext__8CollPartFv
/* 80137530 00134470  7C 77 1B 78 */	mr r23, r3
.L_80137534:
/* 80137534 00134474  28 17 00 00 */	cmplwi r23, 0
/* 80137538 00134478  40 82 FF E8 */	bne .L_80137520
/* 8013753C 0013447C  83 18 00 04 */	lwz r24, 4(r24)
.L_80137540:
/* 80137540 00134480  28 18 00 00 */	cmplwi r24, 0
/* 80137544 00134484  40 82 FF A8 */	bne .L_801374EC
/* 80137548 00134488  83 39 00 04 */	lwz r25, 4(r25)
.L_8013754C:
/* 8013754C 0013448C  28 19 00 00 */	cmplwi r25, 0
/* 80137550 00134490  40 82 FF 74 */	bne .L_801374C4
/* 80137554 00134494  83 5A 00 04 */	lwz r26, 4(r26)
.L_80137558:
/* 80137558 00134498  28 1A 00 00 */	cmplwi r26, 0
/* 8013755C 0013449C  40 82 FF 40 */	bne .L_8013749C
/* 80137560 001344A0  83 7B 00 04 */	lwz r27, 4(r27)
.L_80137564:
/* 80137564 001344A4  28 1B 00 00 */	cmplwi r27, 0
/* 80137568 001344A8  40 82 FF 0C */	bne .L_80137474
/* 8013756C 001344AC  83 BD 00 04 */	lwz r29, 4(r29)
.L_80137570:
/* 80137570 001344B0  28 1D 00 00 */	cmplwi r29, 0
/* 80137574 001344B4  40 82 FE D8 */	bne .L_8013744C
/* 80137578 001344B8  83 DE 00 04 */	lwz r30, 4(r30)
.L_8013757C:
/* 8013757C 001344BC  28 1E 00 00 */	cmplwi r30, 0
/* 80137580 001344C0  40 82 FE A4 */	bne .L_80137424
/* 80137584 001344C4  83 FF 00 04 */	lwz r31, 4(r31)
.L_80137588:
/* 80137588 001344C8  28 1F 00 00 */	cmplwi r31, 0
/* 8013758C 001344CC  40 82 FE 70 */	bne .L_801373FC
/* 80137590 001344D0  83 9C 00 04 */	lwz r28, 4(r28)
.L_80137594:
/* 80137594 001344D4  28 1C 00 00 */	cmplwi r28, 0
/* 80137598 001344D8  40 82 FE 3C */	bne .L_801373D4
/* 8013759C 001344DC  BA E1 00 0C */	lmw r23, 0xc(r1)
/* 801375A0 001344E0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801375A4 001344E4  7C 08 03 A6 */	mtlr r0
/* 801375A8 001344E8  38 21 00 30 */	addi r1, r1, 0x30
/* 801375AC 001344EC  4E 80 00 20 */	blr 
.endfn makeTubeTree__8CollPartFv

.fn "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>", global
/* 801375B0 001344F0  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 801375B4 001344F4  7C 08 02 A6 */	mflr r0
/* 801375B8 001344F8  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 801375BC 001344FC  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 801375C0 00134500  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 801375C4 00134504  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 801375C8 00134508  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 801375CC 0013450C  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 801375D0 00134510  7C 7D 1B 78 */	mr r29, r3
/* 801375D4 00134514  7C 9E 23 78 */	mr r30, r4
/* 801375D8 00134518  88 03 00 58 */	lbz r0, 0x58(r3)
/* 801375DC 0013451C  7C BF 2B 78 */	mr r31, r5
/* 801375E0 00134520  2C 00 00 00 */	cmpwi r0, 0
/* 801375E4 00134524  41 82 00 14 */	beq .L_801375F8
/* 801375E8 00134528  41 80 01 D0 */	blt .L_801377B8
/* 801375EC 0013452C  2C 00 00 03 */	cmpwi r0, 3
/* 801375F0 00134530  40 80 01 C8 */	bge .L_801377B8
/* 801375F4 00134534  48 00 01 AC */	b .L_801377A0
.L_801375F8:
/* 801375F8 00134538  80 1D 00 2C */	lwz r0, 0x2c(r29)
/* 801375FC 0013453C  2C 00 FF FF */	cmpwi r0, -1
/* 80137600 00134540  41 82 00 48 */	beq .L_80137648
/* 80137604 00134544  38 61 00 34 */	addi r3, r1, 0x34
/* 80137608 00134548  4B FB 2C 99 */	bl PSMTXIdentity
/* 8013760C 0013454C  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 80137610 00134550  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80137614 00134554  C0 1D 00 24 */	lfs f0, 0x24(r29)
/* 80137618 00134558  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 8013761C 0013455C  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 80137620 00134560  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80137624 00134564  80 7D 00 5C */	lwz r3, 0x5c(r29)
/* 80137628 00134568  80 9D 00 2C */	lwz r4, 0x2c(r29)
/* 8013762C 0013456C  81 83 00 00 */	lwz r12, 0(r3)
/* 80137630 00134570  81 8C 00 08 */	lwz r12, 8(r12)
/* 80137634 00134574  7D 89 03 A6 */	mtctr r12
/* 80137638 00134578  4E 80 04 21 */	bctrl 
/* 8013763C 0013457C  38 81 00 34 */	addi r4, r1, 0x34
/* 80137640 00134580  38 A1 00 94 */	addi r5, r1, 0x94
/* 80137644 00134584  4B FB 2C BD */	bl PSMTXConcat
.L_80137648:
/* 80137648 00134588  38 61 00 94 */	addi r3, r1, 0x94
/* 8013764C 0013458C  38 81 00 64 */	addi r4, r1, 0x64
/* 80137650 00134590  4B FB 2D CD */	bl PSMTXInverse
/* 80137654 00134594  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 80137658 00134598  C0 21 00 98 */	lfs f1, 0x98(r1)
/* 8013765C 0013459C  EC 60 00 32 */	fmuls f3, f0, f0
/* 80137660 001345A0  C0 81 00 9C */	lfs f4, 0x9c(r1)
/* 80137664 001345A4  EC 41 00 72 */	fmuls f2, f1, f1
/* 80137668 001345A8  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 8013766C 001345AC  EC 24 01 32 */	fmuls f1, f4, f4
/* 80137670 001345B0  EC 63 10 2A */	fadds f3, f3, f2
/* 80137674 001345B4  EC 63 08 2A */	fadds f3, f3, f1
/* 80137678 001345B8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8013767C 001345BC  40 81 00 14 */	ble .L_80137690
/* 80137680 001345C0  40 81 00 14 */	ble .L_80137694
/* 80137684 001345C4  FC 00 18 34 */	frsqrte f0, f3
/* 80137688 001345C8  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8013768C 001345CC  48 00 00 08 */	b .L_80137694
.L_80137690:
/* 80137690 001345D0  FC 60 00 90 */	fmr f3, f0
.L_80137694:
/* 80137694 001345D4  FC 20 1A 10 */	fabs f1, f3
/* 80137698 001345D8  C0 02 9E C0 */	lfs f0, lbl_80518220@sda21(r2)
/* 8013769C 001345DC  FC 20 08 18 */	frsp f1, f1
/* 801376A0 001345E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801376A4 001345E4  40 80 00 18 */	bge .L_801376BC
/* 801376A8 001345E8  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 801376AC 001345EC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801376B0 001345F0  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801376B4 001345F4  D0 1F 00 08 */	stfs f0, 8(r31)
/* 801376B8 001345F8  48 00 01 00 */	b .L_801377B8
.L_801376BC:
/* 801376BC 001345FC  C0 02 9E C4 */	lfs f0, lbl_80518224@sda21(r2)
/* 801376C0 00134600  7F C4 F3 78 */	mr r4, r30
/* 801376C4 00134604  38 61 00 64 */	addi r3, r1, 0x64
/* 801376C8 00134608  38 A1 00 08 */	addi r5, r1, 8
/* 801376CC 0013460C  EF E0 18 24 */	fdivs f31, f0, f3
/* 801376D0 00134610  4B FB 35 09 */	bl PSMTXMultVec
/* 801376D4 00134614  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801376D8 00134618  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801376DC 0013461C  C0 01 00 08 */	lfs f0, 8(r1)
/* 801376E0 00134620  C0 22 9E B0 */	lfs f1, lbl_80518210@sda21(r2)
/* 801376E4 00134624  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801376E8 00134628  D0 5F 00 04 */	stfs f2, 4(r31)
/* 801376EC 0013462C  D0 7F 00 08 */	stfs f3, 8(r31)
/* 801376F0 00134630  C0 7F 00 00 */	lfs f3, 0(r31)
/* 801376F4 00134634  C0 5F 00 04 */	lfs f2, 4(r31)
/* 801376F8 00134638  C0 9F 00 08 */	lfs f4, 8(r31)
/* 801376FC 0013463C  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80137700 00134640  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80137704 00134644  EC 84 01 32 */	fmuls f4, f4, f4
/* 80137708 00134648  EC 00 10 2A */	fadds f0, f0, f2
/* 8013770C 0013464C  EC 04 00 2A */	fadds f0, f4, f0
/* 80137710 00134650  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80137714 00134654  40 81 00 20 */	ble .L_80137734
/* 80137718 00134658  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8013771C 0013465C  EC 44 00 2A */	fadds f2, f4, f0
/* 80137720 00134660  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80137724 00134664  40 81 00 14 */	ble .L_80137738
/* 80137728 00134668  FC 00 10 34 */	frsqrte f0, f2
/* 8013772C 0013466C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80137730 00134670  48 00 00 08 */	b .L_80137738
.L_80137734:
/* 80137734 00134674  FC 40 08 90 */	fmr f2, f1
.L_80137738:
/* 80137738 00134678  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 8013773C 0013467C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80137740 00134680  40 81 00 30 */	ble .L_80137770
/* 80137744 00134684  C0 22 9E C4 */	lfs f1, lbl_80518224@sda21(r2)
/* 80137748 00134688  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8013774C 0013468C  EC 21 10 24 */	fdivs f1, f1, f2
/* 80137750 00134690  EC 00 00 72 */	fmuls f0, f0, f1
/* 80137754 00134694  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80137758 00134698  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8013775C 0013469C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80137760 001346A0  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80137764 001346A4  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80137768 001346A8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013776C 001346AC  D0 1F 00 08 */	stfs f0, 8(r31)
.L_80137770:
/* 80137770 001346B0  C0 3D 00 1C */	lfs f1, 0x1c(r29)
/* 80137774 001346B4  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80137778 001346B8  EC 61 07 F2 */	fmuls f3, f1, f31
/* 8013777C 001346BC  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80137780 001346C0  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80137784 001346C4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80137788 001346C8  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8013778C 001346CC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80137790 001346D0  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80137794 001346D4  D0 3F 00 04 */	stfs f1, 4(r31)
/* 80137798 001346D8  D0 5F 00 08 */	stfs f2, 8(r31)
/* 8013779C 001346DC  48 00 00 1C */	b .L_801377B8
.L_801377A0:
/* 801377A0 001346E0  38 81 00 14 */	addi r4, r1, 0x14
/* 801377A4 001346E4  48 00 0A D5 */	bl getTube__8CollPartFRQ23Sys4Tube
/* 801377A8 001346E8  7F C4 F3 78 */	mr r4, r30
/* 801377AC 001346EC  38 61 00 14 */	addi r3, r1, 0x14
/* 801377B0 001346F0  48 2D E6 25 */	bl "getPosRatio__Q23Sys4TubeFRC10Vector3<f>"
/* 801377B4 001346F4  D0 3F 00 04 */	stfs f1, 4(r31)
.L_801377B8:
/* 801377B8 001346F8  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 801377BC 001346FC  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 801377C0 00134700  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 801377C4 00134704  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 801377C8 00134708  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 801377CC 0013470C  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 801377D0 00134710  7C 08 03 A6 */	mtlr r0
/* 801377D4 00134714  38 21 00 F0 */	addi r1, r1, 0xf0
/* 801377D8 00134718  4E 80 00 20 */	blr 
.endfn "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"

.fn "calcStickGlobal__8CollPartFR10Vector3<f>R10Vector3<f>", global
/* 801377DC 0013471C  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 801377E0 00134720  7C 08 02 A6 */	mflr r0
/* 801377E4 00134724  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801377E8 00134728  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 801377EC 0013472C  7C BF 2B 78 */	mr r31, r5
/* 801377F0 00134730  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 801377F4 00134734  7C 9E 23 78 */	mr r30, r4
/* 801377F8 00134738  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 801377FC 0013473C  7C 7D 1B 78 */	mr r29, r3
/* 80137800 00134740  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80137804 00134744  2C 00 00 01 */	cmpwi r0, 1
/* 80137808 00134748  41 82 00 9C */	beq .L_801378A4
/* 8013780C 0013474C  40 80 00 10 */	bge .L_8013781C
/* 80137810 00134750  2C 00 00 00 */	cmpwi r0, 0
/* 80137814 00134754  40 80 00 14 */	bge .L_80137828
/* 80137818 00134758  48 00 01 10 */	b .L_80137928
.L_8013781C:
/* 8013781C 0013475C  2C 00 00 03 */	cmpwi r0, 3
/* 80137820 00134760  40 80 01 08 */	bge .L_80137928
/* 80137824 00134764  48 00 00 C4 */	b .L_801378E8
.L_80137828:
/* 80137828 00134768  80 1D 00 2C */	lwz r0, 0x2c(r29)
/* 8013782C 0013476C  2C 00 FF FF */	cmpwi r0, -1
/* 80137830 00134770  41 82 00 48 */	beq .L_80137878
/* 80137834 00134774  38 61 00 6C */	addi r3, r1, 0x6c
/* 80137838 00134778  4B FB 2A 69 */	bl PSMTXIdentity
/* 8013783C 0013477C  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 80137840 00134780  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80137844 00134784  C0 1D 00 24 */	lfs f0, 0x24(r29)
/* 80137848 00134788  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 8013784C 0013478C  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 80137850 00134790  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80137854 00134794  80 7D 00 5C */	lwz r3, 0x5c(r29)
/* 80137858 00134798  80 9D 00 2C */	lwz r4, 0x2c(r29)
/* 8013785C 0013479C  81 83 00 00 */	lwz r12, 0(r3)
/* 80137860 001347A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80137864 001347A4  7D 89 03 A6 */	mtctr r12
/* 80137868 001347A8  4E 80 04 21 */	bctrl 
/* 8013786C 001347AC  38 81 00 6C */	addi r4, r1, 0x6c
/* 80137870 001347B0  38 A1 00 9C */	addi r5, r1, 0x9c
/* 80137874 001347B4  4B FB 2A 8D */	bl PSMTXConcat
.L_80137878:
/* 80137878 001347B8  7F C4 F3 78 */	mr r4, r30
/* 8013787C 001347BC  38 61 00 9C */	addi r3, r1, 0x9c
/* 80137880 001347C0  38 A1 00 08 */	addi r5, r1, 8
/* 80137884 001347C4  4B FB 33 55 */	bl PSMTXMultVec
/* 80137888 001347C8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8013788C 001347CC  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80137890 001347D0  C0 01 00 08 */	lfs f0, 8(r1)
/* 80137894 001347D4  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80137898 001347D8  D0 3F 00 04 */	stfs f1, 4(r31)
/* 8013789C 001347DC  D0 5F 00 08 */	stfs f2, 8(r31)
/* 801378A0 001347E0  48 00 00 88 */	b .L_80137928
.L_801378A4:
/* 801378A4 001347E4  7F E4 FB 78 */	mr r4, r31
/* 801378A8 001347E8  7F C5 F3 78 */	mr r5, r30
/* 801378AC 001347EC  4B FF FD 05 */	bl "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"
/* 801378B0 001347F0  7F A3 EB 78 */	mr r3, r29
/* 801378B4 001347F4  38 81 00 4C */	addi r4, r1, 0x4c
/* 801378B8 001347F8  48 00 09 C1 */	bl getTube__8CollPartFRQ23Sys4Tube
/* 801378BC 001347FC  C0 3E 00 04 */	lfs f1, 4(r30)
/* 801378C0 00134800  38 61 00 20 */	addi r3, r1, 0x20
/* 801378C4 00134804  38 81 00 4C */	addi r4, r1, 0x4c
/* 801378C8 00134808  48 2D E6 01 */	bl setPos__Q23Sys4TubeFf
/* 801378CC 0013480C  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 801378D0 00134810  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801378D4 00134814  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 801378D8 00134818  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801378DC 0013481C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801378E0 00134820  D0 1F 00 08 */	stfs f0, 8(r31)
/* 801378E4 00134824  48 00 00 44 */	b .L_80137928
.L_801378E8:
/* 801378E8 00134828  7F E4 FB 78 */	mr r4, r31
/* 801378EC 0013482C  7F C5 F3 78 */	mr r5, r30
/* 801378F0 00134830  4B FF FC C1 */	bl "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"
/* 801378F4 00134834  7F A3 EB 78 */	mr r3, r29
/* 801378F8 00134838  38 81 00 2C */	addi r4, r1, 0x2c
/* 801378FC 0013483C  48 00 09 7D */	bl getTube__8CollPartFRQ23Sys4Tube
/* 80137900 00134840  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80137904 00134844  38 61 00 14 */	addi r3, r1, 0x14
/* 80137908 00134848  38 81 00 2C */	addi r4, r1, 0x2c
/* 8013790C 0013484C  48 2D E5 BD */	bl setPos__Q23Sys4TubeFf
/* 80137910 00134850  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80137914 00134854  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80137918 00134858  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8013791C 0013485C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80137920 00134860  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80137924 00134864  D0 1F 00 08 */	stfs f0, 8(r31)
.L_80137928:
/* 80137928 00134868  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8013792C 0013486C  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 80137930 00134870  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 80137934 00134874  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 80137938 00134878  7C 08 03 A6 */	mtlr r0
/* 8013793C 0013487C  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80137940 00134880  4E 80 00 20 */	blr 
.endfn "calcStickGlobal__8CollPartFR10Vector3<f>R10Vector3<f>"

.fn "calcPoseMatrix__8CollPartFR10Vector3<f>R7Matrixf", global
/* 80137944 00134884  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 80137948 00134888  7C 08 02 A6 */	mflr r0
/* 8013794C 0013488C  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80137950 00134890  93 E1 00 EC */	stw r31, 0xec(r1)
/* 80137954 00134894  7C BF 2B 78 */	mr r31, r5
/* 80137958 00134898  93 C1 00 E8 */	stw r30, 0xe8(r1)
/* 8013795C 0013489C  7C 9E 23 78 */	mr r30, r4
/* 80137960 001348A0  93 A1 00 E4 */	stw r29, 0xe4(r1)
/* 80137964 001348A4  7C 7D 1B 78 */	mr r29, r3
/* 80137968 001348A8  88 03 00 58 */	lbz r0, 0x58(r3)
/* 8013796C 001348AC  2C 00 00 01 */	cmpwi r0, 1
/* 80137970 001348B0  41 82 03 30 */	beq .L_80137CA0
/* 80137974 001348B4  40 80 00 10 */	bge .L_80137984
/* 80137978 001348B8  2C 00 00 00 */	cmpwi r0, 0
/* 8013797C 001348BC  40 80 00 14 */	bge .L_80137990
/* 80137980 001348C0  48 00 04 70 */	b .L_80137DF0
.L_80137984:
/* 80137984 001348C4  2C 00 00 03 */	cmpwi r0, 3
/* 80137988 001348C8  40 80 04 68 */	bge .L_80137DF0
/* 8013798C 001348CC  48 00 01 90 */	b .L_80137B1C
.L_80137990:
/* 80137990 001348D0  80 1D 00 2C */	lwz r0, 0x2c(r29)
/* 80137994 001348D4  2C 00 FF FF */	cmpwi r0, -1
/* 80137998 001348D8  41 82 00 48 */	beq .L_801379E0
/* 8013799C 001348DC  38 61 00 4C */	addi r3, r1, 0x4c
/* 801379A0 001348E0  4B FB 29 01 */	bl PSMTXIdentity
/* 801379A4 001348E4  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 801379A8 001348E8  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801379AC 001348EC  C0 1D 00 24 */	lfs f0, 0x24(r29)
/* 801379B0 001348F0  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 801379B4 001348F4  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 801379B8 001348F8  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 801379BC 001348FC  80 7D 00 5C */	lwz r3, 0x5c(r29)
/* 801379C0 00134900  80 9D 00 2C */	lwz r4, 0x2c(r29)
/* 801379C4 00134904  81 83 00 00 */	lwz r12, 0(r3)
/* 801379C8 00134908  81 8C 00 08 */	lwz r12, 8(r12)
/* 801379CC 0013490C  7D 89 03 A6 */	mtctr r12
/* 801379D0 00134910  4E 80 04 21 */	bctrl 
/* 801379D4 00134914  38 81 00 4C */	addi r4, r1, 0x4c
/* 801379D8 00134918  38 A1 00 AC */	addi r5, r1, 0xac
/* 801379DC 0013491C  4B FB 29 25 */	bl PSMTXConcat
.L_801379E0:
/* 801379E0 00134920  C0 21 00 C8 */	lfs f1, 0xc8(r1)
/* 801379E4 00134924  C0 1E 00 04 */	lfs f0, 4(r30)
/* 801379E8 00134928  C0 81 00 B8 */	lfs f4, 0xb8(r1)
/* 801379EC 0013492C  EC 21 00 28 */	fsubs f1, f1, f0
/* 801379F0 00134930  C0 1E 00 00 */	lfs f0, 0(r30)
/* 801379F4 00134934  C0 61 00 D8 */	lfs f3, 0xd8(r1)
/* 801379F8 00134938  C0 5E 00 08 */	lfs f2, 8(r30)
/* 801379FC 0013493C  EC 04 00 28 */	fsubs f0, f4, f0
/* 80137A00 00134940  EC 81 00 72 */	fmuls f4, f1, f1
/* 80137A04 00134944  EC 43 10 28 */	fsubs f2, f3, f2
/* 80137A08 00134948  C0 62 9E B0 */	lfs f3, lbl_80518210@sda21(r2)
/* 80137A0C 0013494C  EC 80 20 3A */	fmadds f4, f0, f0, f4
/* 80137A10 00134950  EC A2 00 B2 */	fmuls f5, f2, f2
/* 80137A14 00134954  EC 85 20 2A */	fadds f4, f5, f4
/* 80137A18 00134958  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 80137A1C 0013495C  40 81 00 14 */	ble .L_80137A30
/* 80137A20 00134960  40 81 00 14 */	ble .L_80137A34
/* 80137A24 00134964  FC 60 20 34 */	frsqrte f3, f4
/* 80137A28 00134968  EC 83 01 32 */	fmuls f4, f3, f4
/* 80137A2C 0013496C  48 00 00 08 */	b .L_80137A34
.L_80137A30:
/* 80137A30 00134970  FC 80 18 90 */	fmr f4, f3
.L_80137A34:
/* 80137A34 00134974  C0 62 9E B0 */	lfs f3, lbl_80518210@sda21(r2)
/* 80137A38 00134978  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 80137A3C 0013497C  40 81 00 1C */	ble .L_80137A58
/* 80137A40 00134980  C0 62 9E C4 */	lfs f3, lbl_80518224@sda21(r2)
/* 80137A44 00134984  EC 63 20 24 */	fdivs f3, f3, f4
/* 80137A48 00134988  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80137A4C 0013498C  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80137A50 00134990  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80137A54 00134994  48 00 00 08 */	b .L_80137A5C
.L_80137A58:
/* 80137A58 00134998  FC 80 18 90 */	fmr f4, f3
.L_80137A5C:
/* 80137A5C 0013499C  C0 62 9E B0 */	lfs f3, lbl_80518210@sda21(r2)
/* 80137A60 001349A0  FC 03 20 00 */	fcmpu cr0, f3, f4
/* 80137A64 001349A4  40 82 00 10 */	bne .L_80137A74
/* 80137A68 001349A8  FC 00 18 90 */	fmr f0, f3
/* 80137A6C 001349AC  C0 42 9E C4 */	lfs f2, lbl_80518224@sda21(r2)
/* 80137A70 001349B0  FC 20 18 90 */	fmr f1, f3
.L_80137A74:
/* 80137A74 001349B4  C0 82 9E B0 */	lfs f4, lbl_80518210@sda21(r2)
/* 80137A78 001349B8  C0 A2 9E C4 */	lfs f5, lbl_80518224@sda21(r2)
/* 80137A7C 001349BC  EC 64 00 B2 */	fmuls f3, f4, f2
/* 80137A80 001349C0  EC C4 00 72 */	fmuls f6, f4, f1
/* 80137A84 001349C4  EC E4 18 38 */	fmsubs f7, f4, f0, f3
/* 80137A88 001349C8  ED 05 30 3C */	fnmsubs f8, f5, f0, f6
/* 80137A8C 001349CC  EC C5 30 B8 */	fmsubs f6, f5, f2, f6
/* 80137A90 001349D0  EC 67 01 F2 */	fmuls f3, f7, f7
/* 80137A94 001349D4  EC A8 02 32 */	fmuls f5, f8, f8
/* 80137A98 001349D8  EC 66 19 BA */	fmadds f3, f6, f6, f3
/* 80137A9C 001349DC  EC A5 18 2A */	fadds f5, f5, f3
/* 80137AA0 001349E0  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 80137AA4 001349E4  40 81 00 14 */	ble .L_80137AB8
/* 80137AA8 001349E8  40 81 00 14 */	ble .L_80137ABC
/* 80137AAC 001349EC  FC 60 28 34 */	frsqrte f3, f5
/* 80137AB0 001349F0  EC A3 01 72 */	fmuls f5, f3, f5
/* 80137AB4 001349F4  48 00 00 08 */	b .L_80137ABC
.L_80137AB8:
/* 80137AB8 001349F8  FC A0 20 90 */	fmr f5, f4
.L_80137ABC:
/* 80137ABC 001349FC  C0 62 9E B0 */	lfs f3, lbl_80518210@sda21(r2)
/* 80137AC0 00134A00  FC 05 18 40 */	fcmpo cr0, f5, f3
/* 80137AC4 00134A04  40 81 00 18 */	ble .L_80137ADC
/* 80137AC8 00134A08  C0 62 9E C4 */	lfs f3, lbl_80518224@sda21(r2)
/* 80137ACC 00134A0C  EC 63 28 24 */	fdivs f3, f3, f5
/* 80137AD0 00134A10  EC C6 00 F2 */	fmuls f6, f6, f3
/* 80137AD4 00134A14  EC E7 00 F2 */	fmuls f7, f7, f3
/* 80137AD8 00134A18  ED 08 00 F2 */	fmuls f8, f8, f3
.L_80137ADC:
/* 80137ADC 00134A1C  D0 DF 00 00 */	stfs f6, 0(r31)
/* 80137AE0 00134A20  EC A2 01 F2 */	fmuls f5, f2, f7
/* 80137AE4 00134A24  EC 80 02 32 */	fmuls f4, f0, f8
/* 80137AE8 00134A28  D0 FF 00 10 */	stfs f7, 0x10(r31)
/* 80137AEC 00134A2C  EC 61 01 B2 */	fmuls f3, f1, f6
/* 80137AF0 00134A30  EC A1 2A 38 */	fmsubs f5, f1, f8, f5
/* 80137AF4 00134A34  D1 1F 00 20 */	stfs f8, 0x20(r31)
/* 80137AF8 00134A38  EC 82 21 B8 */	fmsubs f4, f2, f6, f4
/* 80137AFC 00134A3C  EC 60 19 F8 */	fmsubs f3, f0, f7, f3
/* 80137B00 00134A40  D0 BF 00 04 */	stfs f5, 4(r31)
/* 80137B04 00134A44  D0 9F 00 14 */	stfs f4, 0x14(r31)
/* 80137B08 00134A48  D0 7F 00 24 */	stfs f3, 0x24(r31)
/* 80137B0C 00134A4C  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80137B10 00134A50  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 80137B14 00134A54  D0 5F 00 28 */	stfs f2, 0x28(r31)
/* 80137B18 00134A58  48 00 02 D8 */	b .L_80137DF0
.L_80137B1C:
/* 80137B1C 00134A5C  C0 1D 00 4C */	lfs f0, 0x4c(r29)
/* 80137B20 00134A60  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 80137B24 00134A64  C0 1D 00 50 */	lfs f0, 0x50(r29)
/* 80137B28 00134A68  D0 01 00 8C */	stfs f0, 0x8c(r1)
/* 80137B2C 00134A6C  C0 1D 00 54 */	lfs f0, 0x54(r29)
/* 80137B30 00134A70  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 80137B34 00134A74  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 80137B38 00134A78  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80137B3C 00134A7C  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 80137B40 00134A80  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 80137B44 00134A84  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80137B48 00134A88  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80137B4C 00134A8C  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 80137B50 00134A90  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 80137B54 00134A94  28 03 00 00 */	cmplwi r3, 0
/* 80137B58 00134A98  41 82 00 2C */	beq .L_80137B84
/* 80137B5C 00134A9C  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80137B60 00134AA0  28 00 00 02 */	cmplwi r0, 2
/* 80137B64 00134AA4  40 82 00 20 */	bne .L_80137B84
/* 80137B68 00134AA8  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80137B6C 00134AAC  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 80137B70 00134AB0  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 80137B74 00134AB4  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 80137B78 00134AB8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80137B7C 00134ABC  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 80137B80 00134AC0  48 00 00 1C */	b .L_80137B9C
.L_80137B84:
/* 80137B84 00134AC4  C0 41 00 88 */	lfs f2, 0x88(r1)
/* 80137B88 00134AC8  C0 21 00 8C */	lfs f1, 0x8c(r1)
/* 80137B8C 00134ACC  C0 01 00 90 */	lfs f0, 0x90(r1)
/* 80137B90 00134AD0  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 80137B94 00134AD4  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 80137B98 00134AD8  D0 01 00 84 */	stfs f0, 0x84(r1)
.L_80137B9C:
/* 80137B9C 00134ADC  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 80137BA0 00134AE0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80137BA4 00134AE4  28 03 00 00 */	cmplwi r3, 0
/* 80137BA8 00134AE8  41 82 00 2C */	beq .L_80137BD4
/* 80137BAC 00134AEC  88 03 00 58 */	lbz r0, 0x58(r3)
/* 80137BB0 00134AF0  28 00 00 02 */	cmplwi r0, 2
/* 80137BB4 00134AF4  40 82 00 20 */	bne .L_80137BD4
/* 80137BB8 00134AF8  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80137BBC 00134AFC  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 80137BC0 00134B00  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 80137BC4 00134B04  D0 01 00 A4 */	stfs f0, 0xa4(r1)
/* 80137BC8 00134B08  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80137BCC 00134B0C  D0 01 00 A8 */	stfs f0, 0xa8(r1)
/* 80137BD0 00134B10  48 00 00 1C */	b .L_80137BEC
.L_80137BD4:
/* 80137BD4 00134B14  C0 41 00 94 */	lfs f2, 0x94(r1)
/* 80137BD8 00134B18  C0 21 00 98 */	lfs f1, 0x98(r1)
/* 80137BDC 00134B1C  C0 01 00 9C */	lfs f0, 0x9c(r1)
/* 80137BE0 00134B20  D0 41 00 A0 */	stfs f2, 0xa0(r1)
/* 80137BE4 00134B24  D0 21 00 A4 */	stfs f1, 0xa4(r1)
/* 80137BE8 00134B28  D0 01 00 A8 */	stfs f0, 0xa8(r1)
.L_80137BEC:
/* 80137BEC 00134B2C  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80137BF0 00134B30  38 61 00 08 */	addi r3, r1, 8
/* 80137BF4 00134B34  38 81 00 7C */	addi r4, r1, 0x7c
/* 80137BF8 00134B38  48 2D 9C 61 */	bl "CRSplineTangent__FfP10Vector3<f>"
/* 80137BFC 00134B3C  C0 81 00 08 */	lfs f4, 8(r1)
/* 80137C00 00134B40  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 80137C04 00134B44  EC 04 01 32 */	fmuls f0, f4, f4
/* 80137C08 00134B48  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80137C0C 00134B4C  EC A3 00 F2 */	fmuls f5, f3, f3
/* 80137C10 00134B50  C0 22 9E B0 */	lfs f1, lbl_80518210@sda21(r2)
/* 80137C14 00134B54  EC C2 00 B2 */	fmuls f6, f2, f2
/* 80137C18 00134B58  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 80137C1C 00134B5C  EC 00 28 2A */	fadds f0, f0, f5
/* 80137C20 00134B60  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80137C24 00134B64  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 80137C28 00134B68  EC 06 00 2A */	fadds f0, f6, f0
/* 80137C2C 00134B6C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80137C30 00134B70  40 81 00 20 */	ble .L_80137C50
/* 80137C34 00134B74  EC 04 29 3A */	fmadds f0, f4, f4, f5
/* 80137C38 00134B78  EC 66 00 2A */	fadds f3, f6, f0
/* 80137C3C 00134B7C  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 80137C40 00134B80  40 81 00 14 */	ble .L_80137C54
/* 80137C44 00134B84  FC 00 18 34 */	frsqrte f0, f3
/* 80137C48 00134B88  EC 60 00 F2 */	fmuls f3, f0, f3
/* 80137C4C 00134B8C  48 00 00 08 */	b .L_80137C54
.L_80137C50:
/* 80137C50 00134B90  FC 60 08 90 */	fmr f3, f1
.L_80137C54:
/* 80137C54 00134B94  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80137C58 00134B98  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80137C5C 00134B9C  40 81 00 30 */	ble .L_80137C8C
/* 80137C60 00134BA0  C0 02 9E C4 */	lfs f0, lbl_80518224@sda21(r2)
/* 80137C64 00134BA4  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80137C68 00134BA8  EC 60 18 24 */	fdivs f3, f0, f3
/* 80137C6C 00134BAC  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80137C70 00134BB0  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80137C74 00134BB4  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80137C78 00134BB8  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80137C7C 00134BBC  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80137C80 00134BC0  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80137C84 00134BC4  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 80137C88 00134BC8  D0 01 00 28 */	stfs f0, 0x28(r1)
.L_80137C8C:
/* 80137C8C 00134BCC  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80137C90 00134BD0  7F E3 FB 78 */	mr r3, r31
/* 80137C94 00134BD4  38 81 00 20 */	addi r4, r1, 0x20
/* 80137C98 00134BD8  48 2F 02 F9 */	bl "makeNaturalPosture__7MatrixfFR10Vector3<f>f"
/* 80137C9C 00134BDC  48 00 01 54 */	b .L_80137DF0
.L_80137CA0:
/* 80137CA0 00134BE0  38 81 00 2C */	addi r4, r1, 0x2c
/* 80137CA4 00134BE4  48 00 05 D5 */	bl getTube__8CollPartFRQ23Sys4Tube
/* 80137CA8 00134BE8  38 61 00 2C */	addi r3, r1, 0x2c
/* 80137CAC 00134BEC  38 81 00 14 */	addi r4, r1, 0x14
/* 80137CB0 00134BF0  48 2D DD F5 */	bl "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
/* 80137CB4 00134BF4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80137CB8 00134BF8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80137CBC 00134BFC  FC 60 00 50 */	fneg f3, f0
/* 80137CC0 00134C00  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80137CC4 00134C04  FC 40 08 50 */	fneg f2, f1
/* 80137CC8 00134C08  C0 82 9E B0 */	lfs f4, lbl_80518210@sda21(r2)
/* 80137CCC 00134C0C  FC 20 00 50 */	fneg f1, f0
/* 80137CD0 00134C10  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 80137CD4 00134C14  FD 20 18 18 */	frsp f9, f3
/* 80137CD8 00134C18  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80137CDC 00134C1C  FD 00 08 18 */	frsp f8, f1
/* 80137CE0 00134C20  FC 00 10 18 */	frsp f0, f2
/* 80137CE4 00134C24  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80137CE8 00134C28  C0 7E 00 00 */	lfs f3, 0(r30)
/* 80137CEC 00134C2C  C0 DE 00 04 */	lfs f6, 4(r30)
/* 80137CF0 00134C30  C0 FE 00 08 */	lfs f7, 8(r30)
/* 80137CF4 00134C34  EC 43 02 32 */	fmuls f2, f3, f8
/* 80137CF8 00134C38  EC 26 02 72 */	fmuls f1, f6, f9
/* 80137CFC 00134C3C  EC A7 00 32 */	fmuls f5, f7, f0
/* 80137D00 00134C40  EC 47 12 78 */	fmsubs f2, f7, f9, f2
/* 80137D04 00134C44  EC 63 08 38 */	fmsubs f3, f3, f0, f1
/* 80137D08 00134C48  EC 26 2A 38 */	fmsubs f1, f6, f8, f5
/* 80137D0C 00134C4C  EC A2 00 B2 */	fmuls f5, f2, f2
/* 80137D10 00134C50  EC C3 00 F2 */	fmuls f6, f3, f3
/* 80137D14 00134C54  EC A1 28 7A */	fmadds f5, f1, f1, f5
/* 80137D18 00134C58  EC A6 28 2A */	fadds f5, f6, f5
/* 80137D1C 00134C5C  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 80137D20 00134C60  40 81 00 14 */	ble .L_80137D34
/* 80137D24 00134C64  40 81 00 14 */	ble .L_80137D38
/* 80137D28 00134C68  FC 80 28 34 */	frsqrte f4, f5
/* 80137D2C 00134C6C  EC A4 01 72 */	fmuls f5, f4, f5
/* 80137D30 00134C70  48 00 00 08 */	b .L_80137D38
.L_80137D34:
/* 80137D34 00134C74  FC A0 20 90 */	fmr f5, f4
.L_80137D38:
/* 80137D38 00134C78  C0 82 9E B0 */	lfs f4, lbl_80518210@sda21(r2)
/* 80137D3C 00134C7C  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 80137D40 00134C80  40 81 00 18 */	ble .L_80137D58
/* 80137D44 00134C84  C0 82 9E C4 */	lfs f4, lbl_80518224@sda21(r2)
/* 80137D48 00134C88  EC 84 28 24 */	fdivs f4, f4, f5
/* 80137D4C 00134C8C  EC 21 01 32 */	fmuls f1, f1, f4
/* 80137D50 00134C90  EC 42 01 32 */	fmuls f2, f2, f4
/* 80137D54 00134C94  EC 63 01 32 */	fmuls f3, f3, f4
.L_80137D58:
/* 80137D58 00134C98  EC C1 02 32 */	fmuls f6, f1, f8
/* 80137D5C 00134C9C  C0 82 9E B0 */	lfs f4, lbl_80518210@sda21(r2)
/* 80137D60 00134CA0  EC A2 02 72 */	fmuls f5, f2, f9
/* 80137D64 00134CA4  EC E3 00 32 */	fmuls f7, f3, f0
/* 80137D68 00134CA8  ED 23 32 78 */	fmsubs f9, f3, f9, f6
/* 80137D6C 00134CAC  EC C2 3A 38 */	fmsubs f6, f2, f8, f7
/* 80137D70 00134CB0  EC E1 28 38 */	fmsubs f7, f1, f0, f5
/* 80137D74 00134CB4  EC 09 02 72 */	fmuls f0, f9, f9
/* 80137D78 00134CB8  EC A7 01 F2 */	fmuls f5, f7, f7
/* 80137D7C 00134CBC  EC 06 01 BA */	fmadds f0, f6, f6, f0
/* 80137D80 00134CC0  EC A5 00 2A */	fadds f5, f5, f0
/* 80137D84 00134CC4  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 80137D88 00134CC8  40 81 00 14 */	ble .L_80137D9C
/* 80137D8C 00134CCC  40 81 00 14 */	ble .L_80137DA0
/* 80137D90 00134CD0  FC 00 28 34 */	frsqrte f0, f5
/* 80137D94 00134CD4  EC A0 01 72 */	fmuls f5, f0, f5
/* 80137D98 00134CD8  48 00 00 08 */	b .L_80137DA0
.L_80137D9C:
/* 80137D9C 00134CDC  FC A0 20 90 */	fmr f5, f4
.L_80137DA0:
/* 80137DA0 00134CE0  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80137DA4 00134CE4  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80137DA8 00134CE8  40 81 00 18 */	ble .L_80137DC0
/* 80137DAC 00134CEC  C0 02 9E C4 */	lfs f0, lbl_80518224@sda21(r2)
/* 80137DB0 00134CF0  EC 00 28 24 */	fdivs f0, f0, f5
/* 80137DB4 00134CF4  EC C6 00 32 */	fmuls f6, f6, f0
/* 80137DB8 00134CF8  ED 29 00 32 */	fmuls f9, f9, f0
/* 80137DBC 00134CFC  EC E7 00 32 */	fmuls f7, f7, f0
.L_80137DC0:
/* 80137DC0 00134D00  D0 3F 00 00 */	stfs f1, 0(r31)
/* 80137DC4 00134D04  D0 5F 00 10 */	stfs f2, 0x10(r31)
/* 80137DC8 00134D08  D0 7F 00 20 */	stfs f3, 0x20(r31)
/* 80137DCC 00134D0C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80137DD0 00134D10  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80137DD4 00134D14  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80137DD8 00134D18  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 80137DDC 00134D1C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80137DE0 00134D20  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80137DE4 00134D24  D0 DF 00 08 */	stfs f6, 8(r31)
/* 80137DE8 00134D28  D1 3F 00 18 */	stfs f9, 0x18(r31)
/* 80137DEC 00134D2C  D0 FF 00 28 */	stfs f7, 0x28(r31)
.L_80137DF0:
/* 80137DF0 00134D30  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 80137DF4 00134D34  83 E1 00 EC */	lwz r31, 0xec(r1)
/* 80137DF8 00134D38  83 C1 00 E8 */	lwz r30, 0xe8(r1)
/* 80137DFC 00134D3C  83 A1 00 E4 */	lwz r29, 0xe4(r1)
/* 80137E00 00134D40  7C 08 03 A6 */	mtlr r0
/* 80137E04 00134D44  38 21 00 F0 */	addi r1, r1, 0xf0
/* 80137E08 00134D48  4E 80 00 20 */	blr 
.endfn "calcPoseMatrix__8CollPartFR10Vector3<f>R7Matrixf"

.fn setScale__8CollPartFf, global
/* 80137E0C 00134D4C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80137E10 00134D50  7C 08 02 A6 */	mflr r0
/* 80137E14 00134D54  90 01 00 34 */	stw r0, 0x34(r1)
/* 80137E18 00134D58  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80137E1C 00134D5C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80137E20 00134D60  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80137E24 00134D64  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80137E28 00134D68  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80137E2C 00134D6C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80137E30 00134D70  7C 7C 1B 78 */	mr r28, r3
/* 80137E34 00134D74  FF E0 08 90 */	fmr f31, f1
/* 80137E38 00134D78  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80137E3C 00134D7C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80137E40 00134D80  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80137E44 00134D84  83 C3 00 10 */	lwz r30, 0x10(r3)
/* 80137E48 00134D88  28 1E 00 00 */	cmplwi r30, 0
/* 80137E4C 00134D8C  41 82 01 C0 */	beq .L_8013800C
/* 80137E50 00134D90  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 80137E54 00134D94  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80137E58 00134D98  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 80137E5C 00134D9C  83 BE 00 10 */	lwz r29, 0x10(r30)
/* 80137E60 00134DA0  28 1D 00 00 */	cmplwi r29, 0
/* 80137E64 00134DA4  41 82 00 D0 */	beq .L_80137F34
/* 80137E68 00134DA8  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 80137E6C 00134DAC  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80137E70 00134DB0  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 80137E74 00134DB4  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80137E78 00134DB8  28 00 00 00 */	cmplwi r0, 0
/* 80137E7C 00134DBC  41 82 00 58 */	beq .L_80137ED4
/* 80137E80 00134DC0  7F A3 EB 78 */	mr r3, r29
/* 80137E84 00134DC4  4B FF C6 BD */	bl getChild__8CollPartFv
/* 80137E88 00134DC8  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80137E8C 00134DCC  7C 7F 1B 78 */	mr r31, r3
/* 80137E90 00134DD0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80137E94 00134DD4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80137E98 00134DD8  4B FF C6 A9 */	bl getChild__8CollPartFv
/* 80137E9C 00134DDC  28 03 00 00 */	cmplwi r3, 0
/* 80137EA0 00134DE0  41 82 00 14 */	beq .L_80137EB4
/* 80137EA4 00134DE4  7F E3 FB 78 */	mr r3, r31
/* 80137EA8 00134DE8  4B FF C6 99 */	bl getChild__8CollPartFv
/* 80137EAC 00134DEC  FC 20 F8 90 */	fmr f1, f31
/* 80137EB0 00134DF0  4B FF FF 5D */	bl setScale__8CollPartFf
.L_80137EB4:
/* 80137EB4 00134DF4  7F E3 FB 78 */	mr r3, r31
/* 80137EB8 00134DF8  4B FF C6 91 */	bl getNext__8CollPartFv
/* 80137EBC 00134DFC  28 03 00 00 */	cmplwi r3, 0
/* 80137EC0 00134E00  41 82 00 14 */	beq .L_80137ED4
/* 80137EC4 00134E04  7F E3 FB 78 */	mr r3, r31
/* 80137EC8 00134E08  4B FF C6 81 */	bl getNext__8CollPartFv
/* 80137ECC 00134E0C  FC 20 F8 90 */	fmr f1, f31
/* 80137ED0 00134E10  4B FF FF 3D */	bl setScale__8CollPartFf
.L_80137ED4:
/* 80137ED4 00134E14  80 1D 00 04 */	lwz r0, 4(r29)
/* 80137ED8 00134E18  28 00 00 00 */	cmplwi r0, 0
/* 80137EDC 00134E1C  41 82 00 58 */	beq .L_80137F34
/* 80137EE0 00134E20  7F A3 EB 78 */	mr r3, r29
/* 80137EE4 00134E24  4B FF C6 65 */	bl getNext__8CollPartFv
/* 80137EE8 00134E28  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80137EEC 00134E2C  7C 7F 1B 78 */	mr r31, r3
/* 80137EF0 00134E30  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80137EF4 00134E34  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80137EF8 00134E38  4B FF C6 49 */	bl getChild__8CollPartFv
/* 80137EFC 00134E3C  28 03 00 00 */	cmplwi r3, 0
/* 80137F00 00134E40  41 82 00 14 */	beq .L_80137F14
/* 80137F04 00134E44  7F E3 FB 78 */	mr r3, r31
/* 80137F08 00134E48  4B FF C6 39 */	bl getChild__8CollPartFv
/* 80137F0C 00134E4C  FC 20 F8 90 */	fmr f1, f31
/* 80137F10 00134E50  4B FF FE FD */	bl setScale__8CollPartFf
.L_80137F14:
/* 80137F14 00134E54  7F E3 FB 78 */	mr r3, r31
/* 80137F18 00134E58  4B FF C6 31 */	bl getNext__8CollPartFv
/* 80137F1C 00134E5C  28 03 00 00 */	cmplwi r3, 0
/* 80137F20 00134E60  41 82 00 14 */	beq .L_80137F34
/* 80137F24 00134E64  7F E3 FB 78 */	mr r3, r31
/* 80137F28 00134E68  4B FF C6 21 */	bl getNext__8CollPartFv
/* 80137F2C 00134E6C  FC 20 F8 90 */	fmr f1, f31
/* 80137F30 00134E70  4B FF FE DD */	bl setScale__8CollPartFf
.L_80137F34:
/* 80137F34 00134E74  83 BE 00 04 */	lwz r29, 4(r30)
/* 80137F38 00134E78  28 1D 00 00 */	cmplwi r29, 0
/* 80137F3C 00134E7C  41 82 00 D0 */	beq .L_8013800C
/* 80137F40 00134E80  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 80137F44 00134E84  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80137F48 00134E88  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 80137F4C 00134E8C  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80137F50 00134E90  28 00 00 00 */	cmplwi r0, 0
/* 80137F54 00134E94  41 82 00 58 */	beq .L_80137FAC
/* 80137F58 00134E98  7F A3 EB 78 */	mr r3, r29
/* 80137F5C 00134E9C  4B FF C5 E5 */	bl getChild__8CollPartFv
/* 80137F60 00134EA0  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80137F64 00134EA4  7C 7F 1B 78 */	mr r31, r3
/* 80137F68 00134EA8  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80137F6C 00134EAC  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80137F70 00134EB0  4B FF C5 D1 */	bl getChild__8CollPartFv
/* 80137F74 00134EB4  28 03 00 00 */	cmplwi r3, 0
/* 80137F78 00134EB8  41 82 00 14 */	beq .L_80137F8C
/* 80137F7C 00134EBC  7F E3 FB 78 */	mr r3, r31
/* 80137F80 00134EC0  4B FF C5 C1 */	bl getChild__8CollPartFv
/* 80137F84 00134EC4  FC 20 F8 90 */	fmr f1, f31
/* 80137F88 00134EC8  4B FF FE 85 */	bl setScale__8CollPartFf
.L_80137F8C:
/* 80137F8C 00134ECC  7F E3 FB 78 */	mr r3, r31
/* 80137F90 00134ED0  4B FF C5 B9 */	bl getNext__8CollPartFv
/* 80137F94 00134ED4  28 03 00 00 */	cmplwi r3, 0
/* 80137F98 00134ED8  41 82 00 14 */	beq .L_80137FAC
/* 80137F9C 00134EDC  7F E3 FB 78 */	mr r3, r31
/* 80137FA0 00134EE0  4B FF C5 A9 */	bl getNext__8CollPartFv
/* 80137FA4 00134EE4  FC 20 F8 90 */	fmr f1, f31
/* 80137FA8 00134EE8  4B FF FE 65 */	bl setScale__8CollPartFf
.L_80137FAC:
/* 80137FAC 00134EEC  80 1D 00 04 */	lwz r0, 4(r29)
/* 80137FB0 00134EF0  28 00 00 00 */	cmplwi r0, 0
/* 80137FB4 00134EF4  41 82 00 58 */	beq .L_8013800C
/* 80137FB8 00134EF8  7F A3 EB 78 */	mr r3, r29
/* 80137FBC 00134EFC  4B FF C5 8D */	bl getNext__8CollPartFv
/* 80137FC0 00134F00  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80137FC4 00134F04  7C 7F 1B 78 */	mr r31, r3
/* 80137FC8 00134F08  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80137FCC 00134F0C  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80137FD0 00134F10  4B FF C5 71 */	bl getChild__8CollPartFv
/* 80137FD4 00134F14  28 03 00 00 */	cmplwi r3, 0
/* 80137FD8 00134F18  41 82 00 14 */	beq .L_80137FEC
/* 80137FDC 00134F1C  7F E3 FB 78 */	mr r3, r31
/* 80137FE0 00134F20  4B FF C5 61 */	bl getChild__8CollPartFv
/* 80137FE4 00134F24  FC 20 F8 90 */	fmr f1, f31
/* 80137FE8 00134F28  4B FF FE 25 */	bl setScale__8CollPartFf
.L_80137FEC:
/* 80137FEC 00134F2C  7F E3 FB 78 */	mr r3, r31
/* 80137FF0 00134F30  4B FF C5 59 */	bl getNext__8CollPartFv
/* 80137FF4 00134F34  28 03 00 00 */	cmplwi r3, 0
/* 80137FF8 00134F38  41 82 00 14 */	beq .L_8013800C
/* 80137FFC 00134F3C  7F E3 FB 78 */	mr r3, r31
/* 80138000 00134F40  4B FF C5 49 */	bl getNext__8CollPartFv
/* 80138004 00134F44  FC 20 F8 90 */	fmr f1, f31
/* 80138008 00134F48  4B FF FE 05 */	bl setScale__8CollPartFf
.L_8013800C:
/* 8013800C 00134F4C  83 BC 00 04 */	lwz r29, 4(r28)
/* 80138010 00134F50  28 1D 00 00 */	cmplwi r29, 0
/* 80138014 00134F54  41 82 01 C0 */	beq .L_801381D4
/* 80138018 00134F58  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 8013801C 00134F5C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80138020 00134F60  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 80138024 00134F64  83 DD 00 10 */	lwz r30, 0x10(r29)
/* 80138028 00134F68  28 1E 00 00 */	cmplwi r30, 0
/* 8013802C 00134F6C  41 82 00 D0 */	beq .L_801380FC
/* 80138030 00134F70  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 80138034 00134F74  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80138038 00134F78  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8013803C 00134F7C  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80138040 00134F80  28 00 00 00 */	cmplwi r0, 0
/* 80138044 00134F84  41 82 00 58 */	beq .L_8013809C
/* 80138048 00134F88  7F C3 F3 78 */	mr r3, r30
/* 8013804C 00134F8C  4B FF C4 F5 */	bl getChild__8CollPartFv
/* 80138050 00134F90  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80138054 00134F94  7C 7F 1B 78 */	mr r31, r3
/* 80138058 00134F98  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8013805C 00134F9C  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80138060 00134FA0  4B FF C4 E1 */	bl getChild__8CollPartFv
/* 80138064 00134FA4  28 03 00 00 */	cmplwi r3, 0
/* 80138068 00134FA8  41 82 00 14 */	beq .L_8013807C
/* 8013806C 00134FAC  7F E3 FB 78 */	mr r3, r31
/* 80138070 00134FB0  4B FF C4 D1 */	bl getChild__8CollPartFv
/* 80138074 00134FB4  FC 20 F8 90 */	fmr f1, f31
/* 80138078 00134FB8  4B FF FD 95 */	bl setScale__8CollPartFf
.L_8013807C:
/* 8013807C 00134FBC  7F E3 FB 78 */	mr r3, r31
/* 80138080 00134FC0  4B FF C4 C9 */	bl getNext__8CollPartFv
/* 80138084 00134FC4  28 03 00 00 */	cmplwi r3, 0
/* 80138088 00134FC8  41 82 00 14 */	beq .L_8013809C
/* 8013808C 00134FCC  7F E3 FB 78 */	mr r3, r31
/* 80138090 00134FD0  4B FF C4 B9 */	bl getNext__8CollPartFv
/* 80138094 00134FD4  FC 20 F8 90 */	fmr f1, f31
/* 80138098 00134FD8  4B FF FD 75 */	bl setScale__8CollPartFf
.L_8013809C:
/* 8013809C 00134FDC  80 1E 00 04 */	lwz r0, 4(r30)
/* 801380A0 00134FE0  28 00 00 00 */	cmplwi r0, 0
/* 801380A4 00134FE4  41 82 00 58 */	beq .L_801380FC
/* 801380A8 00134FE8  7F C3 F3 78 */	mr r3, r30
/* 801380AC 00134FEC  4B FF C4 9D */	bl getNext__8CollPartFv
/* 801380B0 00134FF0  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 801380B4 00134FF4  7C 7F 1B 78 */	mr r31, r3
/* 801380B8 00134FF8  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801380BC 00134FFC  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 801380C0 00135000  4B FF C4 81 */	bl getChild__8CollPartFv
/* 801380C4 00135004  28 03 00 00 */	cmplwi r3, 0
/* 801380C8 00135008  41 82 00 14 */	beq .L_801380DC
/* 801380CC 0013500C  7F E3 FB 78 */	mr r3, r31
/* 801380D0 00135010  4B FF C4 71 */	bl getChild__8CollPartFv
/* 801380D4 00135014  FC 20 F8 90 */	fmr f1, f31
/* 801380D8 00135018  4B FF FD 35 */	bl setScale__8CollPartFf
.L_801380DC:
/* 801380DC 0013501C  7F E3 FB 78 */	mr r3, r31
/* 801380E0 00135020  4B FF C4 69 */	bl getNext__8CollPartFv
/* 801380E4 00135024  28 03 00 00 */	cmplwi r3, 0
/* 801380E8 00135028  41 82 00 14 */	beq .L_801380FC
/* 801380EC 0013502C  7F E3 FB 78 */	mr r3, r31
/* 801380F0 00135030  4B FF C4 59 */	bl getNext__8CollPartFv
/* 801380F4 00135034  FC 20 F8 90 */	fmr f1, f31
/* 801380F8 00135038  4B FF FD 15 */	bl setScale__8CollPartFf
.L_801380FC:
/* 801380FC 0013503C  83 BD 00 04 */	lwz r29, 4(r29)
/* 80138100 00135040  28 1D 00 00 */	cmplwi r29, 0
/* 80138104 00135044  41 82 00 D0 */	beq .L_801381D4
/* 80138108 00135048  C0 1D 00 18 */	lfs f0, 0x18(r29)
/* 8013810C 0013504C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80138110 00135050  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 80138114 00135054  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80138118 00135058  28 00 00 00 */	cmplwi r0, 0
/* 8013811C 0013505C  41 82 00 58 */	beq .L_80138174
/* 80138120 00135060  7F A3 EB 78 */	mr r3, r29
/* 80138124 00135064  4B FF C4 1D */	bl getChild__8CollPartFv
/* 80138128 00135068  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8013812C 0013506C  7C 7F 1B 78 */	mr r31, r3
/* 80138130 00135070  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80138134 00135074  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80138138 00135078  4B FF C4 09 */	bl getChild__8CollPartFv
/* 8013813C 0013507C  28 03 00 00 */	cmplwi r3, 0
/* 80138140 00135080  41 82 00 14 */	beq .L_80138154
/* 80138144 00135084  7F E3 FB 78 */	mr r3, r31
/* 80138148 00135088  4B FF C3 F9 */	bl getChild__8CollPartFv
/* 8013814C 0013508C  FC 20 F8 90 */	fmr f1, f31
/* 80138150 00135090  4B FF FC BD */	bl setScale__8CollPartFf
.L_80138154:
/* 80138154 00135094  7F E3 FB 78 */	mr r3, r31
/* 80138158 00135098  4B FF C3 F1 */	bl getNext__8CollPartFv
/* 8013815C 0013509C  28 03 00 00 */	cmplwi r3, 0
/* 80138160 001350A0  41 82 00 14 */	beq .L_80138174
/* 80138164 001350A4  7F E3 FB 78 */	mr r3, r31
/* 80138168 001350A8  4B FF C3 E1 */	bl getNext__8CollPartFv
/* 8013816C 001350AC  FC 20 F8 90 */	fmr f1, f31
/* 80138170 001350B0  4B FF FC 9D */	bl setScale__8CollPartFf
.L_80138174:
/* 80138174 001350B4  80 1D 00 04 */	lwz r0, 4(r29)
/* 80138178 001350B8  28 00 00 00 */	cmplwi r0, 0
/* 8013817C 001350BC  41 82 00 58 */	beq .L_801381D4
/* 80138180 001350C0  7F A3 EB 78 */	mr r3, r29
/* 80138184 001350C4  4B FF C3 C5 */	bl getNext__8CollPartFv
/* 80138188 001350C8  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8013818C 001350CC  7C 7F 1B 78 */	mr r31, r3
/* 80138190 001350D0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80138194 001350D4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80138198 001350D8  4B FF C3 A9 */	bl getChild__8CollPartFv
/* 8013819C 001350DC  28 03 00 00 */	cmplwi r3, 0
/* 801381A0 001350E0  41 82 00 14 */	beq .L_801381B4
/* 801381A4 001350E4  7F E3 FB 78 */	mr r3, r31
/* 801381A8 001350E8  4B FF C3 99 */	bl getChild__8CollPartFv
/* 801381AC 001350EC  FC 20 F8 90 */	fmr f1, f31
/* 801381B0 001350F0  4B FF FC 5D */	bl setScale__8CollPartFf
.L_801381B4:
/* 801381B4 001350F4  7F E3 FB 78 */	mr r3, r31
/* 801381B8 001350F8  4B FF C3 91 */	bl getNext__8CollPartFv
/* 801381BC 001350FC  28 03 00 00 */	cmplwi r3, 0
/* 801381C0 00135100  41 82 00 14 */	beq .L_801381D4
/* 801381C4 00135104  7F E3 FB 78 */	mr r3, r31
/* 801381C8 00135108  4B FF C3 81 */	bl getNext__8CollPartFv
/* 801381CC 0013510C  FC 20 F8 90 */	fmr f1, f31
/* 801381D0 00135110  4B FF FC 3D */	bl setScale__8CollPartFf
.L_801381D4:
/* 801381D4 00135114  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 801381D8 00135118  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801381DC 0013511C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801381E0 00135120  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801381E4 00135124  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801381E8 00135128  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801381EC 0013512C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801381F0 00135130  7C 08 03 A6 */	mtlr r0
/* 801381F4 00135134  38 21 00 30 */	addi r1, r1, 0x30
/* 801381F8 00135138  4E 80 00 20 */	blr 
.endfn setScale__8CollPartFf

.fn getSphere__8CollPartFRQ23Sys6Sphere, global
/* 801381FC 0013513C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80138200 00135140  7C 08 02 A6 */	mflr r0
/* 80138204 00135144  90 01 00 14 */	stw r0, 0x14(r1)
/* 80138208 00135148  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013820C 0013514C  7C 9F 23 78 */	mr r31, r4
/* 80138210 00135150  93 C1 00 08 */	stw r30, 8(r1)
/* 80138214 00135154  7C 7E 1B 78 */	mr r30, r3
/* 80138218 00135158  88 03 00 58 */	lbz r0, 0x58(r3)
/* 8013821C 0013515C  28 00 00 00 */	cmplwi r0, 0
/* 80138220 00135160  41 82 00 20 */	beq .L_80138240
/* 80138224 00135164  3C 60 80 48 */	lis r3, lbl_8047C5A0@ha
/* 80138228 00135168  3C A0 80 48 */	lis r5, lbl_8047C5CC@ha
/* 8013822C 0013516C  38 63 C5 A0 */	addi r3, r3, lbl_8047C5A0@l
/* 80138230 00135170  38 80 05 09 */	li r4, 0x509
/* 80138234 00135174  38 A5 C5 CC */	addi r5, r5, lbl_8047C5CC@l
/* 80138238 00135178  4C C6 31 82 */	crclr 6
/* 8013823C 0013517C  4B EF 24 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80138240:
/* 80138240 00135180  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 80138244 00135184  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 80138248 00135188  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8013824C 0013518C  C0 1E 00 50 */	lfs f0, 0x50(r30)
/* 80138250 00135190  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80138254 00135194  C0 1E 00 54 */	lfs f0, 0x54(r30)
/* 80138258 00135198  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8013825C 0013519C  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 80138260 001351A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80138264 001351A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80138268 001351A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013826C 001351AC  7C 08 03 A6 */	mtlr r0
/* 80138270 001351B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80138274 001351B4  4E 80 00 20 */	blr 
.endfn getSphere__8CollPartFRQ23Sys6Sphere

.fn getTube__8CollPartFRQ23Sys4Tube, global
/* 80138278 001351B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013827C 001351BC  7C 08 02 A6 */	mflr r0
/* 80138280 001351C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80138284 001351C4  38 00 00 00 */	li r0, 0
/* 80138288 001351C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013828C 001351CC  7C 9F 23 78 */	mr r31, r4
/* 80138290 001351D0  93 C1 00 08 */	stw r30, 8(r1)
/* 80138294 001351D4  7C 7E 1B 78 */	mr r30, r3
/* 80138298 001351D8  88 63 00 58 */	lbz r3, 0x58(r3)
/* 8013829C 001351DC  28 03 00 01 */	cmplwi r3, 1
/* 801382A0 001351E0  41 82 00 0C */	beq .L_801382AC
/* 801382A4 001351E4  28 03 00 02 */	cmplwi r3, 2
/* 801382A8 001351E8  40 82 00 08 */	bne .L_801382B0
.L_801382AC:
/* 801382AC 001351EC  38 00 00 01 */	li r0, 1
.L_801382B0:
/* 801382B0 001351F0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801382B4 001351F4  40 82 00 20 */	bne .L_801382D4
/* 801382B8 001351F8  3C 60 80 48 */	lis r3, lbl_8047C5A0@ha
/* 801382BC 001351FC  3C A0 80 48 */	lis r5, lbl_8047C5CC@ha
/* 801382C0 00135200  38 63 C5 A0 */	addi r3, r3, lbl_8047C5A0@l
/* 801382C4 00135204  38 80 05 0F */	li r4, 0x50f
/* 801382C8 00135208  38 A5 C5 CC */	addi r5, r5, lbl_8047C5CC@l
/* 801382CC 0013520C  4C C6 31 82 */	crclr 6
/* 801382D0 00135210  4B EF 23 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801382D4:
/* 801382D4 00135214  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 801382D8 00135218  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 801382DC 0013521C  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 801382E0 00135220  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 801382E4 00135224  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801382E8 00135228  C0 1E 00 50 */	lfs f0, 0x50(r30)
/* 801382EC 0013522C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801382F0 00135230  C0 1E 00 54 */	lfs f0, 0x54(r30)
/* 801382F4 00135234  D0 1F 00 08 */	stfs f0, 8(r31)
/* 801382F8 00135238  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 801382FC 0013523C  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 80138300 00135240  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 80138304 00135244  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80138308 00135248  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8013830C 0013524C  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 80138310 00135250  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 80138314 00135254  D0 5F 00 1C */	stfs f2, 0x1c(r31)
/* 80138318 00135258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013831C 0013525C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80138320 00135260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80138324 00135264  7C 08 03 A6 */	mtlr r0
/* 80138328 00135268  38 21 00 10 */	addi r1, r1, 0x10
/* 8013832C 0013526C  4E 80 00 20 */	blr 
.endfn getTube__8CollPartFRQ23Sys4Tube

.fn draw__8CollPartFR8Graphics, global
/* 80138330 00135270  4E 80 00 20 */	blr 
.endfn draw__8CollPartFR8Graphics

.fn __ct__13MouthCollPartFv, global
/* 80138334 00135274  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80138338 00135278  7C 08 02 A6 */	mflr r0
/* 8013833C 0013527C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80138340 00135280  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80138344 00135284  93 C1 00 08 */	stw r30, 8(r1)
/* 80138348 00135288  7C 7E 1B 78 */	mr r30, r3
/* 8013834C 0013528C  7F C0 F3 78 */	mr r0, r30
/* 80138350 00135290  7C 1F 03 78 */	mr r31, r0
/* 80138354 00135294  48 2D 90 3D */	bl __ct__5CNodeFv
/* 80138358 00135298  3C 80 80 4B */	lis r4, __vt__8CollPart@ha
/* 8013835C 0013529C  38 7F 00 30 */	addi r3, r31, 0x30
/* 80138360 001352A0  38 04 FE 9C */	addi r0, r4, __vt__8CollPart@l
/* 80138364 001352A4  90 1F 00 00 */	stw r0, 0(r31)
/* 80138368 001352A8  48 2D AF 09 */	bl __ct__4ID32Fv
/* 8013836C 001352AC  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80138370 001352B0  48 2D AF 01 */	bl __ct__4ID32Fv
/* 80138374 001352B4  38 A0 00 00 */	li r5, 0
/* 80138378 001352B8  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 8013837C 001352BC  90 BF 00 10 */	stw r5, 0x10(r31)
/* 80138380 001352C0  38 00 FF FF */	li r0, -1
/* 80138384 001352C4  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80138388 001352C8  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8013838C 001352CC  90 BF 00 0C */	stw r5, 0xc(r31)
/* 80138390 001352D0  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 80138394 001352D4  90 BF 00 08 */	stw r5, 8(r31)
/* 80138398 001352D8  90 BF 00 04 */	stw r5, 4(r31)
/* 8013839C 001352DC  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 801383A0 001352E0  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 801383A4 001352E4  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 801383A8 001352E8  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 801383AC 001352EC  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 801383B0 001352F0  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 801383B4 001352F4  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 801383B8 001352F8  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 801383BC 001352FC  90 BF 00 5C */	stw r5, 0x5c(r31)
/* 801383C0 00135300  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 801383C4 00135304  90 BF 00 60 */	stw r5, 0x60(r31)
/* 801383C8 00135308  B0 BF 00 48 */	sth r5, 0x48(r31)
/* 801383CC 0013530C  98 BF 00 58 */	stb r5, 0x58(r31)
/* 801383D0 00135310  48 2D AF 09 */	bl setID__4ID32FUl
/* 801383D4 00135314  3C 60 80 4B */	lis r3, __vt__13MouthCollPart@ha
/* 801383D8 00135318  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 801383DC 0013531C  38 03 FE 68 */	addi r0, r3, __vt__13MouthCollPart@l
/* 801383E0 00135320  38 A0 00 00 */	li r5, 0
/* 801383E4 00135324  90 1E 00 00 */	stw r0, 0(r30)
/* 801383E8 00135328  38 00 FF FF */	li r0, -1
/* 801383EC 0013532C  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 801383F0 00135330  38 7E 00 3C */	addi r3, r30, 0x3c
/* 801383F4 00135334  90 BE 00 10 */	stw r5, 0x10(r30)
/* 801383F8 00135338  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 801383FC 0013533C  90 BE 00 0C */	stw r5, 0xc(r30)
/* 80138400 00135340  90 BE 00 08 */	stw r5, 8(r30)
/* 80138404 00135344  90 BE 00 04 */	stw r5, 4(r30)
/* 80138408 00135348  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8013840C 0013534C  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 80138410 00135350  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 80138414 00135354  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 80138418 00135358  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 8013841C 0013535C  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 80138420 00135360  D0 1E 00 50 */	stfs f0, 0x50(r30)
/* 80138424 00135364  D0 1E 00 54 */	stfs f0, 0x54(r30)
/* 80138428 00135368  90 BE 00 5C */	stw r5, 0x5c(r30)
/* 8013842C 0013536C  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 80138430 00135370  90 BE 00 60 */	stw r5, 0x60(r30)
/* 80138434 00135374  B0 BE 00 48 */	sth r5, 0x48(r30)
/* 80138438 00135378  98 BE 00 58 */	stb r5, 0x58(r30)
/* 8013843C 0013537C  48 2D AE 9D */	bl setID__4ID32FUl
/* 80138440 00135380  38 00 00 00 */	li r0, 0
/* 80138444 00135384  7F C3 F3 78 */	mr r3, r30
/* 80138448 00135388  90 1E 00 64 */	stw r0, 0x64(r30)
/* 8013844C 0013538C  98 1E 00 6C */	stb r0, 0x6c(r30)
/* 80138450 00135390  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80138454 00135394  83 C1 00 08 */	lwz r30, 8(r1)
/* 80138458 00135398  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013845C 0013539C  7C 08 03 A6 */	mtlr r0
/* 80138460 001353A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80138464 001353A4  4E 80 00 20 */	blr 
.endfn __ct__13MouthCollPartFv

.fn __dt__8CollPartFv, weak
/* 80138468 001353A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013846C 001353AC  7C 08 02 A6 */	mflr r0
/* 80138470 001353B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80138474 001353B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80138478 001353B8  7C 9F 23 78 */	mr r31, r4
/* 8013847C 001353BC  93 C1 00 08 */	stw r30, 8(r1)
/* 80138480 001353C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80138484 001353C4  41 82 00 28 */	beq .L_801384AC
/* 80138488 001353C8  3C A0 80 4B */	lis r5, __vt__8CollPart@ha
/* 8013848C 001353CC  38 80 00 00 */	li r4, 0
/* 80138490 001353D0  38 05 FE 9C */	addi r0, r5, __vt__8CollPart@l
/* 80138494 001353D4  90 1E 00 00 */	stw r0, 0(r30)
/* 80138498 001353D8  48 2D 90 F1 */	bl __dt__5CNodeFv
/* 8013849C 001353DC  7F E0 07 35 */	extsh. r0, r31
/* 801384A0 001353E0  40 81 00 0C */	ble .L_801384AC
/* 801384A4 001353E4  7F C3 F3 78 */	mr r3, r30
/* 801384A8 001353E8  4B EE BC 0D */	bl __dl__FPv
.L_801384AC:
/* 801384AC 001353EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801384B0 001353F0  7F C3 F3 78 */	mr r3, r30
/* 801384B4 001353F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801384B8 001353F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801384BC 001353FC  7C 08 03 A6 */	mtlr r0
/* 801384C0 00135400  38 21 00 10 */	addi r1, r1, 0x10
/* 801384C4 00135404  4E 80 00 20 */	blr 
.endfn __dt__8CollPartFv

.fn "getPosition__13MouthCollPartFR10Vector3<f>", global
/* 801384C8 00135408  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801384CC 0013540C  7C 08 02 A6 */	mflr r0
/* 801384D0 00135410  90 01 00 14 */	stw r0, 0x14(r1)
/* 801384D4 00135414  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801384D8 00135418  7C 9F 23 78 */	mr r31, r4
/* 801384DC 0013541C  80 63 00 68 */	lwz r3, 0x68(r3)
/* 801384E0 00135420  48 2F 13 C1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801384E4 00135424  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 801384E8 00135428  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801384EC 0013542C  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 801384F0 00135430  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801384F4 00135434  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 801384F8 00135438  D0 1F 00 08 */	stfs f0, 8(r31)
/* 801384FC 0013543C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80138500 00135440  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80138504 00135444  7C 08 03 A6 */	mtlr r0
/* 80138508 00135448  38 21 00 10 */	addi r1, r1, 0x10
/* 8013850C 0013544C  4E 80 00 20 */	blr 
.endfn "getPosition__13MouthCollPartFR10Vector3<f>"

.fn copyMatrixTo__13MouthCollPartFR7Matrixf, global
/* 80138510 00135450  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80138514 00135454  7C 08 02 A6 */	mflr r0
/* 80138518 00135458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013851C 0013545C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80138520 00135460  7C 9F 23 78 */	mr r31, r4
/* 80138524 00135464  80 63 00 68 */	lwz r3, 0x68(r3)
/* 80138528 00135468  48 2F 13 79 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8013852C 0013546C  7F E4 FB 78 */	mr r4, r31
/* 80138530 00135470  4B FB 1D 9D */	bl PSMTXCopy
/* 80138534 00135474  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80138538 00135478  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013853C 0013547C  7C 08 03 A6 */	mtlr r0
/* 80138540 00135480  38 21 00 10 */	addi r1, r1, 0x10
/* 80138544 00135484  4E 80 00 20 */	blr 
.endfn copyMatrixTo__13MouthCollPartFR7Matrixf

.fn __ct__10MouthSlotsFv, global
/* 80138548 00135488  38 00 00 00 */	li r0, 0
/* 8013854C 0013548C  90 03 00 00 */	stw r0, 0(r3)
/* 80138550 00135490  90 03 00 04 */	stw r0, 4(r3)
/* 80138554 00135494  4E 80 00 20 */	blr 
.endfn __ct__10MouthSlotsFv

.fn alloc__10MouthSlotsFi, global
/* 80138558 00135498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013855C 0013549C  7C 08 02 A6 */	mflr r0
/* 80138560 001354A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80138564 001354A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80138568 001354A8  7C 9F 23 78 */	mr r31, r4
/* 8013856C 001354AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80138570 001354B0  7C 7E 1B 78 */	mr r30, r3
/* 80138574 001354B4  90 83 00 00 */	stw r4, 0(r3)
/* 80138578 001354B8  1C 7F 00 70 */	mulli r3, r31, 0x70
/* 8013857C 001354BC  38 63 00 10 */	addi r3, r3, 0x10
/* 80138580 001354C0  4B EE BA 2D */	bl __nwa__FUl
/* 80138584 001354C4  3C 80 80 14 */	lis r4, __ct__13MouthCollPartFv@ha
/* 80138588 001354C8  3C A0 80 14 */	lis r5, __dt__13MouthCollPartFv@ha
/* 8013858C 001354CC  38 84 83 34 */	addi r4, r4, __ct__13MouthCollPartFv@l
/* 80138590 001354D0  7F E7 FB 78 */	mr r7, r31
/* 80138594 001354D4  38 A5 85 BC */	addi r5, r5, __dt__13MouthCollPartFv@l
/* 80138598 001354D8  38 C0 00 70 */	li r6, 0x70
/* 8013859C 001354DC  4B F8 94 55 */	bl __construct_new_array
/* 801385A0 001354E0  90 7E 00 04 */	stw r3, 4(r30)
/* 801385A4 001354E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801385A8 001354E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801385AC 001354EC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801385B0 001354F0  7C 08 03 A6 */	mtlr r0
/* 801385B4 001354F4  38 21 00 10 */	addi r1, r1, 0x10
/* 801385B8 001354F8  4E 80 00 20 */	blr 
.endfn alloc__10MouthSlotsFi

.fn __dt__13MouthCollPartFv, weak
/* 801385BC 001354FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801385C0 00135500  7C 08 02 A6 */	mflr r0
/* 801385C4 00135504  90 01 00 14 */	stw r0, 0x14(r1)
/* 801385C8 00135508  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801385CC 0013550C  7C 9F 23 78 */	mr r31, r4
/* 801385D0 00135510  93 C1 00 08 */	stw r30, 8(r1)
/* 801385D4 00135514  7C 7E 1B 79 */	or. r30, r3, r3
/* 801385D8 00135518  41 82 00 38 */	beq .L_80138610
/* 801385DC 0013551C  3C 80 80 4B */	lis r4, __vt__13MouthCollPart@ha
/* 801385E0 00135520  38 04 FE 68 */	addi r0, r4, __vt__13MouthCollPart@l
/* 801385E4 00135524  90 1E 00 00 */	stw r0, 0(r30)
/* 801385E8 00135528  41 82 00 18 */	beq .L_80138600
/* 801385EC 0013552C  3C A0 80 4B */	lis r5, __vt__8CollPart@ha
/* 801385F0 00135530  38 80 00 00 */	li r4, 0
/* 801385F4 00135534  38 05 FE 9C */	addi r0, r5, __vt__8CollPart@l
/* 801385F8 00135538  90 1E 00 00 */	stw r0, 0(r30)
/* 801385FC 0013553C  48 2D 8F 8D */	bl __dt__5CNodeFv
.L_80138600:
/* 80138600 00135540  7F E0 07 35 */	extsh. r0, r31
/* 80138604 00135544  40 81 00 0C */	ble .L_80138610
/* 80138608 00135548  7F C3 F3 78 */	mr r3, r30
/* 8013860C 0013554C  4B EE BA A9 */	bl __dl__FPv
.L_80138610:
/* 80138610 00135550  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80138614 00135554  7F C3 F3 78 */	mr r3, r30
/* 80138618 00135558  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013861C 0013555C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80138620 00135560  7C 08 03 A6 */	mtlr r0
/* 80138624 00135564  38 21 00 10 */	addi r1, r1, 0x10
/* 80138628 00135568  4E 80 00 20 */	blr 
.endfn __dt__13MouthCollPartFv

.fn update__10MouthSlotsFv, global
/* 8013862C 0013556C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80138630 00135570  7C 08 02 A6 */	mflr r0
/* 80138634 00135574  90 01 00 24 */	stw r0, 0x24(r1)
/* 80138638 00135578  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013863C 0013557C  3B E0 00 00 */	li r31, 0
/* 80138640 00135580  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80138644 00135584  3B C0 00 00 */	li r30, 0
/* 80138648 00135588  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013864C 0013558C  7C 7D 1B 78 */	mr r29, r3
/* 80138650 00135590  48 00 00 18 */	b .L_80138668
.L_80138654:
/* 80138654 00135594  80 1D 00 04 */	lwz r0, 4(r29)
/* 80138658 00135598  7C 60 FA 14 */	add r3, r0, r31
/* 8013865C 0013559C  4B FF E7 85 */	bl update__8CollPartFv
/* 80138660 001355A0  3B FF 00 70 */	addi r31, r31, 0x70
/* 80138664 001355A4  3B DE 00 01 */	addi r30, r30, 1
.L_80138668:
/* 80138668 001355A8  80 1D 00 00 */	lwz r0, 0(r29)
/* 8013866C 001355AC  7C 1E 00 00 */	cmpw r30, r0
/* 80138670 001355B0  41 80 FF E4 */	blt .L_80138654
/* 80138674 001355B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80138678 001355B8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013867C 001355BC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80138680 001355C0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80138684 001355C4  7C 08 03 A6 */	mtlr r0
/* 80138688 001355C8  38 21 00 20 */	addi r1, r1, 0x20
/* 8013868C 001355CC  4E 80 00 20 */	blr 
.endfn update__10MouthSlotsFv

.fn setup__10MouthSlotsFiPQ28SysShape5ModelPc, global
/* 80138690 001355D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80138694 001355D4  7C 08 02 A6 */	mflr r0
/* 80138698 001355D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013869C 001355DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801386A0 001355E0  7C DF 33 78 */	mr r31, r6
/* 801386A4 001355E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801386A8 001355E8  7C BE 2B 78 */	mr r30, r5
/* 801386AC 001355EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801386B0 001355F0  7C 9D 23 79 */	or. r29, r4, r4
/* 801386B4 001355F4  93 81 00 10 */	stw r28, 0x10(r1)
/* 801386B8 001355F8  7C 7C 1B 78 */	mr r28, r3
/* 801386BC 001355FC  38 60 00 00 */	li r3, 0
/* 801386C0 00135600  41 80 00 14 */	blt .L_801386D4
/* 801386C4 00135604  80 1C 00 00 */	lwz r0, 0(r28)
/* 801386C8 00135608  7C 1D 00 00 */	cmpw r29, r0
/* 801386CC 0013560C  40 80 00 08 */	bge .L_801386D4
/* 801386D0 00135610  38 60 00 01 */	li r3, 1
.L_801386D4:
/* 801386D4 00135614  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801386D8 00135618  40 82 00 20 */	bne .L_801386F8
/* 801386DC 0013561C  3C 60 80 48 */	lis r3, lbl_8047C5A0@ha
/* 801386E0 00135620  3C A0 80 48 */	lis r5, lbl_8047C5CC@ha
/* 801386E4 00135624  38 63 C5 A0 */	addi r3, r3, lbl_8047C5A0@l
/* 801386E8 00135628  38 80 05 CD */	li r4, 0x5cd
/* 801386EC 0013562C  38 A5 C5 CC */	addi r5, r5, lbl_8047C5CC@l
/* 801386F0 00135630  4C C6 31 82 */	crclr 6
/* 801386F4 00135634  4B EF 1F 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801386F8:
/* 801386F8 00135638  1C 1D 00 70 */	mulli r0, r29, 0x70
/* 801386FC 0013563C  80 7C 00 04 */	lwz r3, 4(r28)
/* 80138700 00135640  7F E4 FB 78 */	mr r4, r31
/* 80138704 00135644  7F E3 02 14 */	add r31, r3, r0
/* 80138708 00135648  93 DF 00 5C */	stw r30, 0x5c(r31)
/* 8013870C 0013564C  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 80138710 00135650  48 30 68 D5 */	bl getJoint__Q28SysShape5ModelFPc
/* 80138714 00135654  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 80138718 00135658  90 7F 00 68 */	stw r3, 0x68(r31)
/* 8013871C 0013565C  38 64 41 E4 */	addi r3, r4, "zero__10Vector3<f>"@l
/* 80138720 00135660  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80138724 00135664  C0 23 00 00 */	lfs f1, 0(r3)
/* 80138728 00135668  38 00 00 00 */	li r0, 0
/* 8013872C 0013566C  D0 3F 00 20 */	stfs f1, 0x20(r31)
/* 80138730 00135670  C0 23 00 04 */	lfs f1, 4(r3)
/* 80138734 00135674  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 80138738 00135678  C0 23 00 08 */	lfs f1, 8(r3)
/* 8013873C 0013567C  D0 3F 00 28 */	stfs f1, 0x28(r31)
/* 80138740 00135680  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 80138744 00135684  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80138748 00135688  A0 63 00 14 */	lhz r3, 0x14(r3)
/* 8013874C 0013568C  90 7F 00 2C */	stw r3, 0x2c(r31)
/* 80138750 00135690  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80138754 00135694  90 1F 00 64 */	stw r0, 0x64(r31)
/* 80138758 00135698  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013875C 0013569C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80138760 001356A0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80138764 001356A4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80138768 001356A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013876C 001356AC  7C 08 03 A6 */	mtlr r0
/* 80138770 001356B0  38 21 00 20 */	addi r1, r1, 0x20
/* 80138774 001356B4  4E 80 00 20 */	blr 
.endfn setup__10MouthSlotsFiPQ28SysShape5ModelPc

.fn getSlot__10MouthSlotsFi, global
/* 80138778 001356B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013877C 001356BC  7C 08 02 A6 */	mflr r0
/* 80138780 001356C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80138784 001356C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80138788 001356C8  7C 9F 23 79 */	or. r31, r4, r4
/* 8013878C 001356CC  93 C1 00 08 */	stw r30, 8(r1)
/* 80138790 001356D0  7C 7E 1B 78 */	mr r30, r3
/* 80138794 001356D4  38 60 00 00 */	li r3, 0
/* 80138798 001356D8  41 80 00 14 */	blt .L_801387AC
/* 8013879C 001356DC  80 1E 00 00 */	lwz r0, 0(r30)
/* 801387A0 001356E0  7C 1F 00 00 */	cmpw r31, r0
/* 801387A4 001356E4  40 80 00 08 */	bge .L_801387AC
/* 801387A8 001356E8  38 60 00 01 */	li r3, 1
.L_801387AC:
/* 801387AC 001356EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801387B0 001356F0  40 82 00 20 */	bne .L_801387D0
/* 801387B4 001356F4  3C 60 80 48 */	lis r3, lbl_8047C5A0@ha
/* 801387B8 001356F8  3C A0 80 48 */	lis r5, lbl_8047C5CC@ha
/* 801387BC 001356FC  38 63 C5 A0 */	addi r3, r3, lbl_8047C5A0@l
/* 801387C0 00135700  38 80 05 D3 */	li r4, 0x5d3
/* 801387C4 00135704  38 A5 C5 CC */	addi r5, r5, lbl_8047C5CC@l
/* 801387C8 00135708  4C C6 31 82 */	crclr 6
/* 801387CC 0013570C  4B EF 1E 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801387D0:
/* 801387D0 00135710  1C 1F 00 70 */	mulli r0, r31, 0x70
/* 801387D4 00135714  80 7E 00 04 */	lwz r3, 4(r30)
/* 801387D8 00135718  7C 63 02 14 */	add r3, r3, r0
/* 801387DC 0013571C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801387E0 00135720  83 C1 00 08 */	lwz r30, 8(r1)
/* 801387E4 00135724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801387E8 00135728  7C 08 03 A6 */	mtlr r0
/* 801387EC 0013572C  38 21 00 10 */	addi r1, r1, 0x10
/* 801387F0 00135730  4E 80 00 20 */	blr 
.endfn getSlot__10MouthSlotsFi

.fn load__15CollPartFactoryFPc, global
/* 801387F4 00135734  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801387F8 00135738  7C 08 02 A6 */	mflr r0
/* 801387FC 0013573C  38 80 00 00 */	li r4, 0
/* 80138800 00135740  38 A0 00 00 */	li r5, 0
/* 80138804 00135744  90 01 04 44 */	stw r0, 0x444(r1)
/* 80138808 00135748  38 00 00 00 */	li r0, 0
/* 8013880C 0013574C  38 C0 00 00 */	li r6, 0
/* 80138810 00135750  39 00 00 02 */	li r8, 2
/* 80138814 00135754  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 80138818 00135758  39 20 00 00 */	li r9, 0
/* 8013881C 0013575C  39 40 00 00 */	li r10, 0
/* 80138820 00135760  93 C1 04 38 */	stw r30, 0x438(r1)
/* 80138824 00135764  93 A1 04 34 */	stw r29, 0x434(r1)
/* 80138828 00135768  90 01 00 08 */	stw r0, 8(r1)
/* 8013882C 0013576C  80 ED 88 28 */	lwz r7, sSystemHeap__7JKRHeap@sda21(r13)
/* 80138830 00135770  4B EE 69 59 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 80138834 00135774  7C 7E 1B 79 */	or. r30, r3, r3
/* 80138838 00135778  40 82 00 0C */	bne .L_80138844
/* 8013883C 0013577C  38 60 00 00 */	li r3, 0
/* 80138840 00135780  48 00 00 E8 */	b .L_80138928
.L_80138844:
/* 80138844 00135784  7F C4 F3 78 */	mr r4, r30
/* 80138848 00135788  38 61 00 10 */	addi r3, r1, 0x10
/* 8013884C 0013578C  38 A0 FF FF */	li r5, -1
/* 80138850 00135790  48 2D D0 A9 */	bl __ct__9RamStreamFPvi
/* 80138854 00135794  38 00 00 01 */	li r0, 1
/* 80138858 00135798  2C 00 00 01 */	cmpwi r0, 1
/* 8013885C 0013579C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80138860 001357A0  40 82 00 0C */	bne .L_8013886C
/* 80138864 001357A4  38 00 00 00 */	li r0, 0
/* 80138868 001357A8  90 01 04 24 */	stw r0, 0x424(r1)
.L_8013886C:
/* 8013886C 001357AC  38 60 00 64 */	li r3, 0x64
/* 80138870 001357B0  4B EE B6 35 */	bl __nw__FUl
/* 80138874 001357B4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80138878 001357B8  41 82 00 A4 */	beq .L_8013891C
/* 8013887C 001357BC  7F FD FB 78 */	mr r29, r31
/* 80138880 001357C0  48 2D 8B 11 */	bl __ct__5CNodeFv
/* 80138884 001357C4  3C 80 80 4B */	lis r4, __vt__8CollPart@ha
/* 80138888 001357C8  38 7F 00 30 */	addi r3, r31, 0x30
/* 8013888C 001357CC  38 04 FE 9C */	addi r0, r4, __vt__8CollPart@l
/* 80138890 001357D0  90 1F 00 00 */	stw r0, 0(r31)
/* 80138894 001357D4  48 2D A9 DD */	bl __ct__4ID32Fv
/* 80138898 001357D8  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8013889C 001357DC  48 2D A9 D5 */	bl __ct__4ID32Fv
/* 801388A0 001357E0  38 A0 00 00 */	li r5, 0
/* 801388A4 001357E4  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 801388A8 001357E8  90 BF 00 10 */	stw r5, 0x10(r31)
/* 801388AC 001357EC  38 00 FF FF */	li r0, -1
/* 801388B0 001357F0  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 801388B4 001357F4  38 7F 00 3C */	addi r3, r31, 0x3c
/* 801388B8 001357F8  90 BF 00 0C */	stw r5, 0xc(r31)
/* 801388BC 001357FC  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 801388C0 00135800  90 BF 00 08 */	stw r5, 8(r31)
/* 801388C4 00135804  90 BF 00 04 */	stw r5, 4(r31)
/* 801388C8 00135808  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 801388CC 0013580C  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 801388D0 00135810  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 801388D4 00135814  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 801388D8 00135818  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 801388DC 0013581C  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 801388E0 00135820  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 801388E4 00135824  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 801388E8 00135828  90 BF 00 5C */	stw r5, 0x5c(r31)
/* 801388EC 0013582C  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 801388F0 00135830  90 BF 00 60 */	stw r5, 0x60(r31)
/* 801388F4 00135834  B0 BF 00 48 */	sth r5, 0x48(r31)
/* 801388F8 00135838  98 BF 00 58 */	stb r5, 0x58(r31)
/* 801388FC 0013583C  48 2D A9 DD */	bl setID__4ID32FUl
/* 80138900 00135840  3C 80 80 4B */	lis r4, __vt__15CollPartFactory@ha
/* 80138904 00135844  7F A3 EB 78 */	mr r3, r29
/* 80138908 00135848  38 04 FE 34 */	addi r0, r4, __vt__15CollPartFactory@l
/* 8013890C 0013584C  38 81 00 10 */	addi r4, r1, 0x10
/* 80138910 00135850  90 1D 00 00 */	stw r0, 0(r29)
/* 80138914 00135854  38 A0 00 00 */	li r5, 0
/* 80138918 00135858  48 00 04 E9 */	bl read__8CollPartFR6Streamb
.L_8013891C:
/* 8013891C 0013585C  7F C3 F3 78 */	mr r3, r30
/* 80138920 00135860  4B EE B7 B9 */	bl __dla__FPv
/* 80138924 00135864  7F E3 FB 78 */	mr r3, r31
.L_80138928:
/* 80138928 00135868  80 01 04 44 */	lwz r0, 0x444(r1)
/* 8013892C 0013586C  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 80138930 00135870  83 C1 04 38 */	lwz r30, 0x438(r1)
/* 80138934 00135874  83 A1 04 34 */	lwz r29, 0x434(r1)
/* 80138938 00135878  7C 08 03 A6 */	mtlr r0
/* 8013893C 0013587C  38 21 04 40 */	addi r1, r1, 0x440
/* 80138940 00135880  4E 80 00 20 */	blr 
.endfn load__15CollPartFactoryFPc

.fn load__15CollPartFactoryFP13JKRFileLoaderPc, global
/* 80138944 00135884  94 21 FB D0 */	stwu r1, -0x430(r1)
/* 80138948 00135888  7C 08 02 A6 */	mflr r0
/* 8013894C 0013588C  90 01 04 34 */	stw r0, 0x434(r1)
/* 80138950 00135890  93 E1 04 2C */	stw r31, 0x42c(r1)
/* 80138954 00135894  93 C1 04 28 */	stw r30, 0x428(r1)
/* 80138958 00135898  81 83 00 00 */	lwz r12, 0(r3)
/* 8013895C 0013589C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80138960 001358A0  7D 89 03 A6 */	mtctr r12
/* 80138964 001358A4  4E 80 04 21 */	bctrl 
/* 80138968 001358A8  28 03 00 00 */	cmplwi r3, 0
/* 8013896C 001358AC  40 82 00 0C */	bne .L_80138978
/* 80138970 001358B0  38 60 00 00 */	li r3, 0
/* 80138974 001358B4  48 00 00 E0 */	b .L_80138A54
.L_80138978:
/* 80138978 001358B8  7C 64 1B 78 */	mr r4, r3
/* 8013897C 001358BC  38 61 00 08 */	addi r3, r1, 8
/* 80138980 001358C0  38 A0 FF FF */	li r5, -1
/* 80138984 001358C4  48 2D CF 75 */	bl __ct__9RamStreamFPvi
/* 80138988 001358C8  38 00 00 01 */	li r0, 1
/* 8013898C 001358CC  2C 00 00 01 */	cmpwi r0, 1
/* 80138990 001358D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80138994 001358D4  40 82 00 0C */	bne .L_801389A0
/* 80138998 001358D8  38 00 00 00 */	li r0, 0
/* 8013899C 001358DC  90 01 04 1C */	stw r0, 0x41c(r1)
.L_801389A0:
/* 801389A0 001358E0  38 60 00 64 */	li r3, 0x64
/* 801389A4 001358E4  4B EE B5 01 */	bl __nw__FUl
/* 801389A8 001358E8  7C 7F 1B 79 */	or. r31, r3, r3
/* 801389AC 001358EC  41 82 00 A4 */	beq .L_80138A50
/* 801389B0 001358F0  7F FE FB 78 */	mr r30, r31
/* 801389B4 001358F4  48 2D 89 DD */	bl __ct__5CNodeFv
/* 801389B8 001358F8  3C 80 80 4B */	lis r4, __vt__8CollPart@ha
/* 801389BC 001358FC  38 7F 00 30 */	addi r3, r31, 0x30
/* 801389C0 00135900  38 04 FE 9C */	addi r0, r4, __vt__8CollPart@l
/* 801389C4 00135904  90 1F 00 00 */	stw r0, 0(r31)
/* 801389C8 00135908  48 2D A8 A9 */	bl __ct__4ID32Fv
/* 801389CC 0013590C  38 7F 00 3C */	addi r3, r31, 0x3c
/* 801389D0 00135910  48 2D A8 A1 */	bl __ct__4ID32Fv
/* 801389D4 00135914  38 A0 00 00 */	li r5, 0
/* 801389D8 00135918  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 801389DC 0013591C  90 BF 00 10 */	stw r5, 0x10(r31)
/* 801389E0 00135920  38 00 FF FF */	li r0, -1
/* 801389E4 00135924  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 801389E8 00135928  38 7F 00 3C */	addi r3, r31, 0x3c
/* 801389EC 0013592C  90 BF 00 0C */	stw r5, 0xc(r31)
/* 801389F0 00135930  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 801389F4 00135934  90 BF 00 08 */	stw r5, 8(r31)
/* 801389F8 00135938  90 BF 00 04 */	stw r5, 4(r31)
/* 801389FC 0013593C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80138A00 00135940  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80138A04 00135944  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80138A08 00135948  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80138A0C 0013594C  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80138A10 00135950  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 80138A14 00135954  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80138A18 00135958  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 80138A1C 0013595C  90 BF 00 5C */	stw r5, 0x5c(r31)
/* 80138A20 00135960  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 80138A24 00135964  90 BF 00 60 */	stw r5, 0x60(r31)
/* 80138A28 00135968  B0 BF 00 48 */	sth r5, 0x48(r31)
/* 80138A2C 0013596C  98 BF 00 58 */	stb r5, 0x58(r31)
/* 80138A30 00135970  48 2D A8 A9 */	bl setID__4ID32FUl
/* 80138A34 00135974  3C 80 80 4B */	lis r4, __vt__15CollPartFactory@ha
/* 80138A38 00135978  7F C3 F3 78 */	mr r3, r30
/* 80138A3C 0013597C  38 04 FE 34 */	addi r0, r4, __vt__15CollPartFactory@l
/* 80138A40 00135980  38 81 00 08 */	addi r4, r1, 8
/* 80138A44 00135984  90 1E 00 00 */	stw r0, 0(r30)
/* 80138A48 00135988  38 A0 00 00 */	li r5, 0
/* 80138A4C 0013598C  48 00 03 B5 */	bl read__8CollPartFR6Streamb
.L_80138A50:
/* 80138A50 00135990  7F E3 FB 78 */	mr r3, r31
.L_80138A54:
/* 80138A54 00135994  80 01 04 34 */	lwz r0, 0x434(r1)
/* 80138A58 00135998  83 E1 04 2C */	lwz r31, 0x42c(r1)
/* 80138A5C 0013599C  83 C1 04 28 */	lwz r30, 0x428(r1)
/* 80138A60 001359A0  7C 08 03 A6 */	mtlr r0
/* 80138A64 001359A4  38 21 04 30 */	addi r1, r1, 0x430
/* 80138A68 001359A8  4E 80 00 20 */	blr 
.endfn load__15CollPartFactoryFP13JKRFileLoaderPc

.fn createInstance__15CollPartFactoryFPQ28SysShape9MtxObjectP11CollPartMgr, global
/* 80138A6C 001359AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80138A70 001359B0  7C 08 02 A6 */	mflr r0
/* 80138A74 001359B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80138A78 001359B8  48 00 00 C1 */	bl clone__8CollPartFPQ28SysShape9MtxObjectP11CollPartMgr
/* 80138A7C 001359BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80138A80 001359C0  7C 08 03 A6 */	mtlr r0
/* 80138A84 001359C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80138A88 001359C8  4E 80 00 20 */	blr 
.endfn createInstance__15CollPartFactoryFPQ28SysShape9MtxObjectP11CollPartMgr

.fn createOne__11CollPartMgrFPQ28SysShape9MtxObject, global
/* 80138A8C 001359CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80138A90 001359D0  7C 08 02 A6 */	mflr r0
/* 80138A94 001359D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80138A98 001359D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80138A9C 001359DC  93 C1 00 08 */	stw r30, 8(r1)
/* 80138AA0 001359E0  7C 9E 23 78 */	mr r30, r4
/* 80138AA4 001359E4  81 83 00 00 */	lwz r12, 0(r3)
/* 80138AA8 001359E8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80138AAC 001359EC  7D 89 03 A6 */	mtctr r12
/* 80138AB0 001359F0  4E 80 04 21 */	bctrl 
/* 80138AB4 001359F4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80138AB8 001359F8  41 82 00 64 */	beq .L_80138B1C
/* 80138ABC 001359FC  38 A0 00 00 */	li r5, 0
/* 80138AC0 00135A00  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 80138AC4 00135A04  90 BF 00 10 */	stw r5, 0x10(r31)
/* 80138AC8 00135A08  38 00 FF FF */	li r0, -1
/* 80138ACC 00135A0C  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80138AD0 00135A10  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80138AD4 00135A14  90 BF 00 0C */	stw r5, 0xc(r31)
/* 80138AD8 00135A18  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 80138ADC 00135A1C  90 BF 00 08 */	stw r5, 8(r31)
/* 80138AE0 00135A20  90 BF 00 04 */	stw r5, 4(r31)
/* 80138AE4 00135A24  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80138AE8 00135A28  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80138AEC 00135A2C  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80138AF0 00135A30  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80138AF4 00135A34  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80138AF8 00135A38  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 80138AFC 00135A3C  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80138B00 00135A40  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 80138B04 00135A44  93 DF 00 5C */	stw r30, 0x5c(r31)
/* 80138B08 00135A48  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 80138B0C 00135A4C  90 BF 00 60 */	stw r5, 0x60(r31)
/* 80138B10 00135A50  B0 BF 00 48 */	sth r5, 0x48(r31)
/* 80138B14 00135A54  98 BF 00 58 */	stb r5, 0x58(r31)
/* 80138B18 00135A58  48 2D A7 C1 */	bl setID__4ID32FUl
.L_80138B1C:
/* 80138B1C 00135A5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80138B20 00135A60  7F E3 FB 78 */	mr r3, r31
/* 80138B24 00135A64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80138B28 00135A68  83 C1 00 08 */	lwz r30, 8(r1)
/* 80138B2C 00135A6C  7C 08 03 A6 */	mtlr r0
/* 80138B30 00135A70  38 21 00 10 */	addi r1, r1, 0x10
/* 80138B34 00135A74  4E 80 00 20 */	blr 
.endfn createOne__11CollPartMgrFPQ28SysShape9MtxObject

.fn clone__8CollPartFPQ28SysShape9MtxObjectP11CollPartMgr, global
/* 80138B38 00135A78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80138B3C 00135A7C  7C 08 02 A6 */	mflr r0
/* 80138B40 00135A80  90 01 00 24 */	stw r0, 0x24(r1)
/* 80138B44 00135A84  BF 41 00 08 */	stmw r26, 8(r1)
/* 80138B48 00135A88  7C BE 2B 79 */	or. r30, r5, r5
/* 80138B4C 00135A8C  7C 7C 1B 78 */	mr r28, r3
/* 80138B50 00135A90  7C 9D 23 78 */	mr r29, r4
/* 80138B54 00135A94  41 82 01 08 */	beq .L_80138C5C
/* 80138B58 00135A98  7F C3 F3 78 */	mr r3, r30
/* 80138B5C 00135A9C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80138B60 00135AA0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80138B64 00135AA4  7D 89 03 A6 */	mtctr r12
/* 80138B68 00135AA8  4E 80 04 21 */	bctrl 
/* 80138B6C 00135AAC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80138B70 00135AB0  41 82 00 64 */	beq .L_80138BD4
/* 80138B74 00135AB4  38 A0 00 00 */	li r5, 0
/* 80138B78 00135AB8  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 80138B7C 00135ABC  90 BF 00 10 */	stw r5, 0x10(r31)
/* 80138B80 00135AC0  38 00 FF FF */	li r0, -1
/* 80138B84 00135AC4  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80138B88 00135AC8  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80138B8C 00135ACC  90 BF 00 0C */	stw r5, 0xc(r31)
/* 80138B90 00135AD0  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 80138B94 00135AD4  90 BF 00 08 */	stw r5, 8(r31)
/* 80138B98 00135AD8  90 BF 00 04 */	stw r5, 4(r31)
/* 80138B9C 00135ADC  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80138BA0 00135AE0  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80138BA4 00135AE4  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80138BA8 00135AE8  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80138BAC 00135AEC  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80138BB0 00135AF0  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 80138BB4 00135AF4  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80138BB8 00135AF8  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 80138BBC 00135AFC  93 BF 00 5C */	stw r29, 0x5c(r31)
/* 80138BC0 00135B00  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 80138BC4 00135B04  90 BF 00 60 */	stw r5, 0x60(r31)
/* 80138BC8 00135B08  B0 BF 00 48 */	sth r5, 0x48(r31)
/* 80138BCC 00135B0C  98 BF 00 58 */	stb r5, 0x58(r31)
/* 80138BD0 00135B10  48 2D A7 09 */	bl setID__4ID32FUl
.L_80138BD4:
/* 80138BD4 00135B14  28 1F 00 00 */	cmplwi r31, 0
/* 80138BD8 00135B18  40 82 00 20 */	bne .L_80138BF8
/* 80138BDC 00135B1C  3C 60 80 48 */	lis r3, lbl_8047C5A0@ha
/* 80138BE0 00135B20  3C A0 80 48 */	lis r5, lbl_8047C614@ha
/* 80138BE4 00135B24  38 63 C5 A0 */	addi r3, r3, lbl_8047C5A0@l
/* 80138BE8 00135B28  38 80 06 23 */	li r4, 0x623
/* 80138BEC 00135B2C  38 A5 C6 14 */	addi r5, r5, lbl_8047C614@l
/* 80138BF0 00135B30  4C C6 31 82 */	crclr 6
/* 80138BF4 00135B34  4B EF 1A 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80138BF8:
/* 80138BF8 00135B38  38 A0 00 00 */	li r5, 0
/* 80138BFC 00135B3C  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 80138C00 00135B40  90 BF 00 10 */	stw r5, 0x10(r31)
/* 80138C04 00135B44  38 00 FF FF */	li r0, -1
/* 80138C08 00135B48  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80138C0C 00135B4C  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80138C10 00135B50  90 BF 00 0C */	stw r5, 0xc(r31)
/* 80138C14 00135B54  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 80138C18 00135B58  90 BF 00 08 */	stw r5, 8(r31)
/* 80138C1C 00135B5C  90 BF 00 04 */	stw r5, 4(r31)
/* 80138C20 00135B60  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80138C24 00135B64  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80138C28 00135B68  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80138C2C 00135B6C  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80138C30 00135B70  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80138C34 00135B74  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 80138C38 00135B78  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80138C3C 00135B7C  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 80138C40 00135B80  93 BF 00 5C */	stw r29, 0x5c(r31)
/* 80138C44 00135B84  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 80138C48 00135B88  90 BF 00 60 */	stw r5, 0x60(r31)
/* 80138C4C 00135B8C  B0 BF 00 48 */	sth r5, 0x48(r31)
/* 80138C50 00135B90  98 BF 00 58 */	stb r5, 0x58(r31)
/* 80138C54 00135B94  48 2D A6 85 */	bl setID__4ID32FUl
/* 80138C58 00135B98  48 00 00 98 */	b .L_80138CF0
.L_80138C5C:
/* 80138C5C 00135B9C  38 60 00 64 */	li r3, 0x64
/* 80138C60 00135BA0  4B EE B2 45 */	bl __nw__FUl
/* 80138C64 00135BA4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80138C68 00135BA8  41 82 00 88 */	beq .L_80138CF0
/* 80138C6C 00135BAC  7F FA FB 78 */	mr r26, r31
/* 80138C70 00135BB0  48 2D 87 21 */	bl __ct__5CNodeFv
/* 80138C74 00135BB4  3C 80 80 4B */	lis r4, __vt__8CollPart@ha
/* 80138C78 00135BB8  38 7A 00 30 */	addi r3, r26, 0x30
/* 80138C7C 00135BBC  38 04 FE 9C */	addi r0, r4, __vt__8CollPart@l
/* 80138C80 00135BC0  90 1A 00 00 */	stw r0, 0(r26)
/* 80138C84 00135BC4  48 2D A5 ED */	bl __ct__4ID32Fv
/* 80138C88 00135BC8  38 7A 00 3C */	addi r3, r26, 0x3c
/* 80138C8C 00135BCC  48 2D A5 E5 */	bl __ct__4ID32Fv
/* 80138C90 00135BD0  38 A0 00 00 */	li r5, 0
/* 80138C94 00135BD4  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 80138C98 00135BD8  90 BA 00 10 */	stw r5, 0x10(r26)
/* 80138C9C 00135BDC  38 00 FF FF */	li r0, -1
/* 80138CA0 00135BE0  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80138CA4 00135BE4  38 7A 00 3C */	addi r3, r26, 0x3c
/* 80138CA8 00135BE8  90 BA 00 0C */	stw r5, 0xc(r26)
/* 80138CAC 00135BEC  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 80138CB0 00135BF0  90 BA 00 08 */	stw r5, 8(r26)
/* 80138CB4 00135BF4  90 BA 00 04 */	stw r5, 4(r26)
/* 80138CB8 00135BF8  D0 1A 00 1C */	stfs f0, 0x1c(r26)
/* 80138CBC 00135BFC  D0 1A 00 18 */	stfs f0, 0x18(r26)
/* 80138CC0 00135C00  D0 1A 00 20 */	stfs f0, 0x20(r26)
/* 80138CC4 00135C04  D0 1A 00 24 */	stfs f0, 0x24(r26)
/* 80138CC8 00135C08  D0 1A 00 28 */	stfs f0, 0x28(r26)
/* 80138CCC 00135C0C  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 80138CD0 00135C10  D0 1A 00 50 */	stfs f0, 0x50(r26)
/* 80138CD4 00135C14  D0 1A 00 54 */	stfs f0, 0x54(r26)
/* 80138CD8 00135C18  93 BA 00 5C */	stw r29, 0x5c(r26)
/* 80138CDC 00135C1C  90 1A 00 2C */	stw r0, 0x2c(r26)
/* 80138CE0 00135C20  90 BA 00 60 */	stw r5, 0x60(r26)
/* 80138CE4 00135C24  B0 BA 00 48 */	sth r5, 0x48(r26)
/* 80138CE8 00135C28  98 BA 00 58 */	stb r5, 0x58(r26)
/* 80138CEC 00135C2C  48 2D A5 ED */	bl setID__4ID32FUl
.L_80138CF0:
/* 80138CF0 00135C30  C0 1C 00 1C */	lfs f0, 0x1c(r28)
/* 80138CF4 00135C34  38 7F 00 30 */	addi r3, r31, 0x30
/* 80138CF8 00135C38  38 9C 00 30 */	addi r4, r28, 0x30
/* 80138CFC 00135C3C  38 A0 00 05 */	li r5, 5
/* 80138D00 00135C40  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80138D04 00135C44  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 80138D08 00135C48  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80138D0C 00135C4C  4B F8 8A 0D */	bl __copy
/* 80138D10 00135C50  80 1C 00 38 */	lwz r0, 0x38(r28)
/* 80138D14 00135C54  38 7F 00 3C */	addi r3, r31, 0x3c
/* 80138D18 00135C58  38 9C 00 3C */	addi r4, r28, 0x3c
/* 80138D1C 00135C5C  38 A0 00 05 */	li r5, 5
/* 80138D20 00135C60  90 1F 00 38 */	stw r0, 0x38(r31)
/* 80138D24 00135C64  4B F8 89 F5 */	bl __copy
/* 80138D28 00135C68  80 1C 00 44 */	lwz r0, 0x44(r28)
/* 80138D2C 00135C6C  7F 83 E3 78 */	mr r3, r28
/* 80138D30 00135C70  90 1F 00 44 */	stw r0, 0x44(r31)
/* 80138D34 00135C74  C0 1C 00 20 */	lfs f0, 0x20(r28)
/* 80138D38 00135C78  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80138D3C 00135C7C  C0 1C 00 24 */	lfs f0, 0x24(r28)
/* 80138D40 00135C80  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80138D44 00135C84  C0 1C 00 28 */	lfs f0, 0x28(r28)
/* 80138D48 00135C88  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80138D4C 00135C8C  88 1C 00 58 */	lbz r0, 0x58(r28)
/* 80138D50 00135C90  98 1F 00 58 */	stb r0, 0x58(r31)
/* 80138D54 00135C94  80 1C 00 2C */	lwz r0, 0x2c(r28)
/* 80138D58 00135C98  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 80138D5C 00135C9C  80 1C 00 5C */	lwz r0, 0x5c(r28)
/* 80138D60 00135CA0  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 80138D64 00135CA4  80 1C 00 60 */	lwz r0, 0x60(r28)
/* 80138D68 00135CA8  90 1F 00 60 */	stw r0, 0x60(r31)
/* 80138D6C 00135CAC  A0 1C 00 48 */	lhz r0, 0x48(r28)
/* 80138D70 00135CB0  B0 1F 00 48 */	sth r0, 0x48(r31)
/* 80138D74 00135CB4  93 BF 00 5C */	stw r29, 0x5c(r31)
/* 80138D78 00135CB8  81 9C 00 00 */	lwz r12, 0(r28)
/* 80138D7C 00135CBC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80138D80 00135CC0  7D 89 03 A6 */	mtctr r12
/* 80138D84 00135CC4  4E 80 04 21 */	bctrl 
/* 80138D88 00135CC8  83 7C 00 10 */	lwz r27, 0x10(r28)
/* 80138D8C 00135CCC  7C 7C 1B 78 */	mr r28, r3
/* 80138D90 00135CD0  3B 40 00 00 */	li r26, 0
/* 80138D94 00135CD4  48 00 00 2C */	b .L_80138DC0
.L_80138D98:
/* 80138D98 00135CD8  7F 63 DB 78 */	mr r3, r27
/* 80138D9C 00135CDC  7F A4 EB 78 */	mr r4, r29
/* 80138DA0 00135CE0  7F C5 F3 78 */	mr r5, r30
/* 80138DA4 00135CE4  4B FF FD 95 */	bl clone__8CollPartFPQ28SysShape9MtxObjectP11CollPartMgr
/* 80138DA8 00135CE8  7C 60 1B 78 */	mr r0, r3
/* 80138DAC 00135CEC  7F E3 FB 78 */	mr r3, r31
/* 80138DB0 00135CF0  7C 04 03 78 */	mr r4, r0
/* 80138DB4 00135CF4  48 2D 86 55 */	bl add__5CNodeFP5CNode
/* 80138DB8 00135CF8  83 7B 00 04 */	lwz r27, 4(r27)
/* 80138DBC 00135CFC  3B 5A 00 01 */	addi r26, r26, 1
.L_80138DC0:
/* 80138DC0 00135D00  7C 1A E0 00 */	cmpw r26, r28
/* 80138DC4 00135D04  41 80 FF D4 */	blt .L_80138D98
/* 80138DC8 00135D08  7F E3 FB 78 */	mr r3, r31
/* 80138DCC 00135D0C  BB 41 00 08 */	lmw r26, 8(r1)
/* 80138DD0 00135D10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80138DD4 00135D14  7C 08 03 A6 */	mtlr r0
/* 80138DD8 00135D18  38 21 00 20 */	addi r1, r1, 0x20
/* 80138DDC 00135D1C  4E 80 00 20 */	blr 
.endfn clone__8CollPartFPQ28SysShape9MtxObjectP11CollPartMgr

.fn getChildCount__8CollPartFv, weak
/* 80138DE0 00135D20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80138DE4 00135D24  7C 08 02 A6 */	mflr r0
/* 80138DE8 00135D28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80138DEC 00135D2C  48 2D 88 7D */	bl getChildCount__5CNodeFv
/* 80138DF0 00135D30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80138DF4 00135D34  7C 08 03 A6 */	mtlr r0
/* 80138DF8 00135D38  38 21 00 10 */	addi r1, r1, 0x10
/* 80138DFC 00135D3C  4E 80 00 20 */	blr 
.endfn getChildCount__8CollPartFv

.fn read__8CollPartFR6Streamb, global
/* 80138E00 00135D40  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80138E04 00135D44  7C 08 02 A6 */	mflr r0
/* 80138E08 00135D48  90 01 00 44 */	stw r0, 0x44(r1)
/* 80138E0C 00135D4C  BE 41 00 08 */	stmw r18, 8(r1)
/* 80138E10 00135D50  7C 9E 23 78 */	mr r30, r4
/* 80138E14 00135D54  7C 78 1B 78 */	mr r24, r3
/* 80138E18 00135D58  7C BF 2B 78 */	mr r31, r5
/* 80138E1C 00135D5C  7F C3 F3 78 */	mr r3, r30
/* 80138E20 00135D60  48 2D BC 71 */	bl readInt__6StreamFv
/* 80138E24 00135D64  7C 73 1B 78 */	mr r19, r3
/* 80138E28 00135D68  7F C3 F3 78 */	mr r3, r30
/* 80138E2C 00135D6C  48 2D BF 81 */	bl readFloat__6StreamFv
/* 80138E30 00135D70  D0 38 00 1C */	stfs f1, 0x1c(r24)
/* 80138E34 00135D74  7F C4 F3 78 */	mr r4, r30
/* 80138E38 00135D78  38 78 00 30 */	addi r3, r24, 0x30
/* 80138E3C 00135D7C  C0 18 00 1C */	lfs f0, 0x1c(r24)
/* 80138E40 00135D80  D0 18 00 18 */	stfs f0, 0x18(r24)
/* 80138E44 00135D84  48 2D A6 AD */	bl read__4ID32FR6Stream
/* 80138E48 00135D88  7F C4 F3 78 */	mr r4, r30
/* 80138E4C 00135D8C  38 78 00 3C */	addi r3, r24, 0x3c
/* 80138E50 00135D90  48 2D A6 A1 */	bl read__4ID32FR6Stream
/* 80138E54 00135D94  7F C4 F3 78 */	mr r4, r30
/* 80138E58 00135D98  38 78 00 20 */	addi r3, r24, 0x20
/* 80138E5C 00135D9C  48 2D 8B 35 */	bl "read__10Vector3<f>FR6Stream"
/* 80138E60 00135DA0  7F C3 F3 78 */	mr r3, r30
/* 80138E64 00135DA4  48 2D BC 2D */	bl readInt__6StreamFv
/* 80138E68 00135DA8  90 78 00 2C */	stw r3, 0x2c(r24)
/* 80138E6C 00135DAC  7F C3 F3 78 */	mr r3, r30
/* 80138E70 00135DB0  48 2D B8 F5 */	bl readShort__6StreamFv
/* 80138E74 00135DB4  3C 80 80 48 */	lis r4, lbl_8047C630@ha
/* 80138E78 00135DB8  B0 78 00 48 */	sth r3, 0x48(r24)
/* 80138E7C 00135DBC  57 FC 06 3E */	clrlwi r28, r31, 0x18
/* 80138E80 00135DC0  3A E0 00 00 */	li r23, 0
/* 80138E84 00135DC4  3B A4 C6 30 */	addi r29, r4, lbl_8047C630@l
/* 80138E88 00135DC8  48 00 02 B8 */	b .L_80139140
.L_80138E8C:
/* 80138E8C 00135DCC  28 1C 00 00 */	cmplwi r28, 0
/* 80138E90 00135DD0  41 82 00 28 */	beq .L_80138EB8
/* 80138E94 00135DD4  38 60 00 68 */	li r3, 0x68
/* 80138E98 00135DD8  4B EE B0 0D */	bl __nw__FUl
/* 80138E9C 00135DDC  7C 60 1B 79 */	or. r0, r3, r3
/* 80138EA0 00135DE0  41 82 00 10 */	beq .L_80138EB0
/* 80138EA4 00135DE4  80 98 00 5C */	lwz r4, 0x5c(r24)
/* 80138EA8 00135DE8  48 00 04 0D */	bl __ct__11AgeCollPartFPQ28SysShape5Model
/* 80138EAC 00135DEC  7C 60 1B 78 */	mr r0, r3
.L_80138EB0:
/* 80138EB0 00135DF0  7C 19 03 78 */	mr r25, r0
/* 80138EB4 00135DF4  48 00 00 A0 */	b .L_80138F54
.L_80138EB8:
/* 80138EB8 00135DF8  38 60 00 64 */	li r3, 0x64
/* 80138EBC 00135DFC  4B EE AF E9 */	bl __nw__FUl
/* 80138EC0 00135E00  7C 74 1B 79 */	or. r20, r3, r3
/* 80138EC4 00135E04  41 82 00 8C */	beq .L_80138F50
/* 80138EC8 00135E08  82 B8 00 5C */	lwz r21, 0x5c(r24)
/* 80138ECC 00135E0C  7E 92 A3 78 */	mr r18, r20
/* 80138ED0 00135E10  48 2D 84 C1 */	bl __ct__5CNodeFv
/* 80138ED4 00135E14  3C 80 80 4B */	lis r4, __vt__8CollPart@ha
/* 80138ED8 00135E18  38 72 00 30 */	addi r3, r18, 0x30
/* 80138EDC 00135E1C  38 04 FE 9C */	addi r0, r4, __vt__8CollPart@l
/* 80138EE0 00135E20  90 12 00 00 */	stw r0, 0(r18)
/* 80138EE4 00135E24  48 2D A3 8D */	bl __ct__4ID32Fv
/* 80138EE8 00135E28  38 72 00 3C */	addi r3, r18, 0x3c
/* 80138EEC 00135E2C  48 2D A3 85 */	bl __ct__4ID32Fv
/* 80138EF0 00135E30  38 A0 00 00 */	li r5, 0
/* 80138EF4 00135E34  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 80138EF8 00135E38  90 B2 00 10 */	stw r5, 0x10(r18)
/* 80138EFC 00135E3C  38 00 FF FF */	li r0, -1
/* 80138F00 00135E40  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80138F04 00135E44  38 72 00 3C */	addi r3, r18, 0x3c
/* 80138F08 00135E48  90 B2 00 0C */	stw r5, 0xc(r18)
/* 80138F0C 00135E4C  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 80138F10 00135E50  90 B2 00 08 */	stw r5, 8(r18)
/* 80138F14 00135E54  90 B2 00 04 */	stw r5, 4(r18)
/* 80138F18 00135E58  D0 12 00 1C */	stfs f0, 0x1c(r18)
/* 80138F1C 00135E5C  D0 12 00 18 */	stfs f0, 0x18(r18)
/* 80138F20 00135E60  D0 12 00 20 */	stfs f0, 0x20(r18)
/* 80138F24 00135E64  D0 12 00 24 */	stfs f0, 0x24(r18)
/* 80138F28 00135E68  D0 12 00 28 */	stfs f0, 0x28(r18)
/* 80138F2C 00135E6C  D0 12 00 4C */	stfs f0, 0x4c(r18)
/* 80138F30 00135E70  D0 12 00 50 */	stfs f0, 0x50(r18)
/* 80138F34 00135E74  D0 12 00 54 */	stfs f0, 0x54(r18)
/* 80138F38 00135E78  92 B2 00 5C */	stw r21, 0x5c(r18)
/* 80138F3C 00135E7C  90 12 00 2C */	stw r0, 0x2c(r18)
/* 80138F40 00135E80  90 B2 00 60 */	stw r5, 0x60(r18)
/* 80138F44 00135E84  B0 B2 00 48 */	sth r5, 0x48(r18)
/* 80138F48 00135E88  98 B2 00 58 */	stb r5, 0x58(r18)
/* 80138F4C 00135E8C  48 2D A3 8D */	bl setID__4ID32FUl
.L_80138F50:
/* 80138F50 00135E90  7E 99 A3 78 */	mr r25, r20
.L_80138F54:
/* 80138F54 00135E94  7F C3 F3 78 */	mr r3, r30
/* 80138F58 00135E98  48 2D BB 39 */	bl readInt__6StreamFv
/* 80138F5C 00135E9C  7C 7B 1B 78 */	mr r27, r3
/* 80138F60 00135EA0  7F C3 F3 78 */	mr r3, r30
/* 80138F64 00135EA4  48 2D BE 49 */	bl readFloat__6StreamFv
/* 80138F68 00135EA8  D0 39 00 1C */	stfs f1, 0x1c(r25)
/* 80138F6C 00135EAC  7F C4 F3 78 */	mr r4, r30
/* 80138F70 00135EB0  38 79 00 30 */	addi r3, r25, 0x30
/* 80138F74 00135EB4  C0 19 00 1C */	lfs f0, 0x1c(r25)
/* 80138F78 00135EB8  D0 19 00 18 */	stfs f0, 0x18(r25)
/* 80138F7C 00135EBC  48 2D A5 75 */	bl read__4ID32FR6Stream
/* 80138F80 00135EC0  7F C4 F3 78 */	mr r4, r30
/* 80138F84 00135EC4  38 79 00 3C */	addi r3, r25, 0x3c
/* 80138F88 00135EC8  48 2D A5 69 */	bl read__4ID32FR6Stream
/* 80138F8C 00135ECC  7F C4 F3 78 */	mr r4, r30
/* 80138F90 00135ED0  38 79 00 20 */	addi r3, r25, 0x20
/* 80138F94 00135ED4  48 2D 89 FD */	bl "read__10Vector3<f>FR6Stream"
/* 80138F98 00135ED8  7F C3 F3 78 */	mr r3, r30
/* 80138F9C 00135EDC  48 2D BA F5 */	bl readInt__6StreamFv
/* 80138FA0 00135EE0  90 79 00 2C */	stw r3, 0x2c(r25)
/* 80138FA4 00135EE4  7F C3 F3 78 */	mr r3, r30
/* 80138FA8 00135EE8  48 2D B7 BD */	bl readShort__6StreamFv
/* 80138FAC 00135EEC  B0 79 00 48 */	sth r3, 0x48(r25)
/* 80138FB0 00135EF0  3B 40 00 00 */	li r26, 0
/* 80138FB4 00135EF4  48 00 01 70 */	b .L_80139124
.L_80138FB8:
/* 80138FB8 00135EF8  28 1C 00 00 */	cmplwi r28, 0
/* 80138FBC 00135EFC  41 82 00 24 */	beq .L_80138FE0
/* 80138FC0 00135F00  38 60 00 68 */	li r3, 0x68
/* 80138FC4 00135F04  4B EE AE E1 */	bl __nw__FUl
/* 80138FC8 00135F08  7C 74 1B 79 */	or. r20, r3, r3
/* 80138FCC 00135F0C  41 82 00 68 */	beq .L_80139034
/* 80138FD0 00135F10  80 99 00 5C */	lwz r4, 0x5c(r25)
/* 80138FD4 00135F14  48 00 02 E1 */	bl __ct__11AgeCollPartFPQ28SysShape5Model
/* 80138FD8 00135F18  7C 74 1B 78 */	mr r20, r3
/* 80138FDC 00135F1C  48 00 00 58 */	b .L_80139034
.L_80138FE0:
/* 80138FE0 00135F20  38 60 00 64 */	li r3, 0x64
/* 80138FE4 00135F24  4B EE AE C1 */	bl __nw__FUl
/* 80138FE8 00135F28  7C 74 1B 79 */	or. r20, r3, r3
/* 80138FEC 00135F2C  41 82 00 48 */	beq .L_80139034
/* 80138FF0 00135F30  82 B9 00 5C */	lwz r21, 0x5c(r25)
/* 80138FF4 00135F34  7E 92 A3 78 */	mr r18, r20
/* 80138FF8 00135F38  48 2D 83 99 */	bl __ct__5CNodeFv
/* 80138FFC 00135F3C  3C 80 80 4B */	lis r4, __vt__8CollPart@ha
/* 80139000 00135F40  38 72 00 20 */	addi r3, r18, 0x20
/* 80139004 00135F44  38 04 FE 9C */	addi r0, r4, __vt__8CollPart@l
/* 80139008 00135F48  90 12 00 00 */	stw r0, 0(r18)
/* 8013900C 00135F4C  4B FE 63 3D */	bl "__ct__10Vector3<f>Fv"
/* 80139010 00135F50  38 72 00 30 */	addi r3, r18, 0x30
/* 80139014 00135F54  48 2D A2 5D */	bl __ct__4ID32Fv
/* 80139018 00135F58  38 72 00 3C */	addi r3, r18, 0x3c
/* 8013901C 00135F5C  48 2D A2 55 */	bl __ct__4ID32Fv
/* 80139020 00135F60  38 72 00 4C */	addi r3, r18, 0x4c
/* 80139024 00135F64  4B FE 63 25 */	bl "__ct__10Vector3<f>Fv"
/* 80139028 00135F68  7E 43 93 78 */	mr r3, r18
/* 8013902C 00135F6C  7E A4 AB 78 */	mr r4, r21
/* 80139030 00135F70  4B FF DD 01 */	bl init__8CollPartFPQ28SysShape9MtxObject
.L_80139034:
/* 80139034 00135F74  7F C3 F3 78 */	mr r3, r30
/* 80139038 00135F78  48 2D BA 59 */	bl readInt__6StreamFv
/* 8013903C 00135F7C  7C 76 1B 78 */	mr r22, r3
/* 80139040 00135F80  7F C3 F3 78 */	mr r3, r30
/* 80139044 00135F84  48 2D BD 69 */	bl readFloat__6StreamFv
/* 80139048 00135F88  D0 34 00 1C */	stfs f1, 0x1c(r20)
/* 8013904C 00135F8C  7F C4 F3 78 */	mr r4, r30
/* 80139050 00135F90  38 74 00 30 */	addi r3, r20, 0x30
/* 80139054 00135F94  C0 14 00 1C */	lfs f0, 0x1c(r20)
/* 80139058 00135F98  D0 14 00 18 */	stfs f0, 0x18(r20)
/* 8013905C 00135F9C  48 2D A4 95 */	bl read__4ID32FR6Stream
/* 80139060 00135FA0  7F C4 F3 78 */	mr r4, r30
/* 80139064 00135FA4  38 74 00 3C */	addi r3, r20, 0x3c
/* 80139068 00135FA8  48 2D A4 89 */	bl read__4ID32FR6Stream
/* 8013906C 00135FAC  7F C4 F3 78 */	mr r4, r30
/* 80139070 00135FB0  38 74 00 20 */	addi r3, r20, 0x20
/* 80139074 00135FB4  48 2D 89 1D */	bl "read__10Vector3<f>FR6Stream"
/* 80139078 00135FB8  7F C3 F3 78 */	mr r3, r30
/* 8013907C 00135FBC  48 2D BA 15 */	bl readInt__6StreamFv
/* 80139080 00135FC0  90 74 00 2C */	stw r3, 0x2c(r20)
/* 80139084 00135FC4  7F C3 F3 78 */	mr r3, r30
/* 80139088 00135FC8  48 00 00 FD */	bl readU16__6StreamFv
/* 8013908C 00135FCC  B0 74 00 48 */	sth r3, 0x48(r20)
/* 80139090 00135FD0  3A A0 00 00 */	li r21, 0
/* 80139094 00135FD4  48 00 00 74 */	b .L_80139108
.L_80139098:
/* 80139098 00135FD8  28 1C 00 00 */	cmplwi r28, 0
/* 8013909C 00135FDC  41 82 00 24 */	beq .L_801390C0
/* 801390A0 00135FE0  38 60 00 68 */	li r3, 0x68
/* 801390A4 00135FE4  4B EE AE 01 */	bl __nw__FUl
/* 801390A8 00135FE8  7C 72 1B 79 */	or. r18, r3, r3
/* 801390AC 00135FEC  41 82 00 30 */	beq .L_801390DC
/* 801390B0 00135FF0  80 94 00 5C */	lwz r4, 0x5c(r20)
/* 801390B4 00135FF4  48 00 02 01 */	bl __ct__11AgeCollPartFPQ28SysShape5Model
/* 801390B8 00135FF8  7C 72 1B 78 */	mr r18, r3
/* 801390BC 00135FFC  48 00 00 20 */	b .L_801390DC
.L_801390C0:
/* 801390C0 00136000  38 60 00 64 */	li r3, 0x64
/* 801390C4 00136004  4B EE AD E1 */	bl __nw__FUl
/* 801390C8 00136008  7C 72 1B 79 */	or. r18, r3, r3
/* 801390CC 0013600C  41 82 00 10 */	beq .L_801390DC
/* 801390D0 00136010  80 94 00 5C */	lwz r4, 0x5c(r20)
/* 801390D4 00136014  4B FF DB A1 */	bl __ct__8CollPartFPQ28SysShape9MtxObject
/* 801390D8 00136018  7C 72 1B 78 */	mr r18, r3
.L_801390DC:
/* 801390DC 0013601C  7E 43 93 78 */	mr r3, r18
/* 801390E0 00136020  7F C4 F3 78 */	mr r4, r30
/* 801390E4 00136024  7F E5 FB 78 */	mr r5, r31
/* 801390E8 00136028  4B FF FD 19 */	bl read__8CollPartFR6Streamb
/* 801390EC 0013602C  7E 43 93 78 */	mr r3, r18
/* 801390F0 00136030  7F A4 EB 78 */	mr r4, r29
/* 801390F4 00136034  48 00 00 89 */	bl setName__5CNodeFPc
/* 801390F8 00136038  7E 83 A3 78 */	mr r3, r20
/* 801390FC 0013603C  7E 44 93 78 */	mr r4, r18
/* 80139100 00136040  48 00 00 5D */	bl addChild__8CollPartFP8CollPart
/* 80139104 00136044  3A B5 00 01 */	addi r21, r21, 1
.L_80139108:
/* 80139108 00136048  7C 15 B0 00 */	cmpw r21, r22
/* 8013910C 0013604C  41 80 FF 8C */	blt .L_80139098
/* 80139110 00136050  93 B4 00 14 */	stw r29, 0x14(r20)
/* 80139114 00136054  7F 23 CB 78 */	mr r3, r25
/* 80139118 00136058  7E 84 A3 78 */	mr r4, r20
/* 8013911C 0013605C  48 2D 82 ED */	bl add__5CNodeFP5CNode
/* 80139120 00136060  3B 5A 00 01 */	addi r26, r26, 1
.L_80139124:
/* 80139124 00136064  7C 1A D8 00 */	cmpw r26, r27
/* 80139128 00136068  41 80 FE 90 */	blt .L_80138FB8
/* 8013912C 0013606C  93 B9 00 14 */	stw r29, 0x14(r25)
/* 80139130 00136070  7F 03 C3 78 */	mr r3, r24
/* 80139134 00136074  7F 24 CB 78 */	mr r4, r25
/* 80139138 00136078  48 2D 82 D1 */	bl add__5CNodeFP5CNode
/* 8013913C 0013607C  3A F7 00 01 */	addi r23, r23, 1
.L_80139140:
/* 80139140 00136080  7C 17 98 00 */	cmpw r23, r19
/* 80139144 00136084  41 80 FD 48 */	blt .L_80138E8C
/* 80139148 00136088  BA 41 00 08 */	lmw r18, 8(r1)
/* 8013914C 0013608C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80139150 00136090  7C 08 03 A6 */	mtlr r0
/* 80139154 00136094  38 21 00 40 */	addi r1, r1, 0x40
/* 80139158 00136098  4E 80 00 20 */	blr 
.endfn read__8CollPartFR6Streamb

.fn addChild__8CollPartFP8CollPart, weak
/* 8013915C 0013609C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139160 001360A0  7C 08 02 A6 */	mflr r0
/* 80139164 001360A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139168 001360A8  48 2D 82 A1 */	bl add__5CNodeFP5CNode
/* 8013916C 001360AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139170 001360B0  7C 08 03 A6 */	mtlr r0
/* 80139174 001360B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80139178 001360B8  4E 80 00 20 */	blr 
.endfn addChild__8CollPartFP8CollPart

.fn setName__5CNodeFPc, weak
/* 8013917C 001360BC  90 83 00 14 */	stw r4, 0x14(r3)
/* 80139180 001360C0  4E 80 00 20 */	blr 
.endfn setName__5CNodeFPc

.fn readU16__6StreamFv, weak
/* 80139184 001360C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139188 001360C8  7C 08 02 A6 */	mflr r0
/* 8013918C 001360CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139190 001360D0  48 2D B5 D5 */	bl readShort__6StreamFv
/* 80139194 001360D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139198 001360D8  54 63 04 3E */	clrlwi r3, r3, 0x10
/* 8013919C 001360DC  7C 08 03 A6 */	mtlr r0
/* 801391A0 001360E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801391A4 001360E4  4E 80 00 20 */	blr 
.endfn readU16__6StreamFv

.fn draw__11AgeCollPartFR8Graphics, global
/* 801391A8 001360E8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 801391AC 001360EC  7C 08 02 A6 */	mflr r0
/* 801391B0 001360F0  90 01 00 94 */	stw r0, 0x94(r1)
/* 801391B4 001360F4  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 801391B8 001360F8  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 801391BC 001360FC  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 801391C0 00136100  93 C1 00 78 */	stw r30, 0x78(r1)
/* 801391C4 00136104  93 A1 00 74 */	stw r29, 0x74(r1)
/* 801391C8 00136108  7C 7D 1B 78 */	mr r29, r3
/* 801391CC 0013610C  7C 9E 23 78 */	mr r30, r4
/* 801391D0 00136110  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801391D4 00136114  2C 04 FF FF */	cmpwi r4, -1
/* 801391D8 00136118  41 82 00 B8 */	beq .L_80139290
/* 801391DC 0013611C  80 7D 00 5C */	lwz r3, 0x5c(r29)
/* 801391E0 00136120  1C 04 00 3C */	mulli r0, r4, 0x3c
/* 801391E4 00136124  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801391E8 00136128  7F E3 02 15 */	add. r31, r3, r0
/* 801391EC 0013612C  41 82 00 A4 */	beq .L_80139290
/* 801391F0 00136130  2C 04 FF FF */	cmpwi r4, -1
/* 801391F4 00136134  41 82 00 48 */	beq .L_8013923C
/* 801391F8 00136138  38 61 00 08 */	addi r3, r1, 8
/* 801391FC 0013613C  4B FB 10 A5 */	bl PSMTXIdentity
/* 80139200 00136140  C0 1D 00 20 */	lfs f0, 0x20(r29)
/* 80139204 00136144  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80139208 00136148  C0 1D 00 24 */	lfs f0, 0x24(r29)
/* 8013920C 0013614C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80139210 00136150  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 80139214 00136154  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80139218 00136158  80 7D 00 5C */	lwz r3, 0x5c(r29)
/* 8013921C 0013615C  80 9D 00 2C */	lwz r4, 0x2c(r29)
/* 80139220 00136160  81 83 00 00 */	lwz r12, 0(r3)
/* 80139224 00136164  81 8C 00 08 */	lwz r12, 8(r12)
/* 80139228 00136168  7D 89 03 A6 */	mtctr r12
/* 8013922C 0013616C  4E 80 04 21 */	bctrl 
/* 80139230 00136170  38 81 00 08 */	addi r4, r1, 8
/* 80139234 00136174  38 A1 00 38 */	addi r5, r1, 0x38
/* 80139238 00136178  4B FB 10 C9 */	bl PSMTXConcat
.L_8013923C:
/* 8013923C 0013617C  88 1D 00 64 */	lbz r0, 0x64(r29)
/* 80139240 00136180  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80139244 00136184  41 82 00 4C */	beq .L_80139290
/* 80139248 00136188  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 8013924C 0013618C  C0 02 9E CC */	lfs f0, lbl_8051822C@sda21(r2)
/* 80139250 00136190  C0 23 00 38 */	lfs f1, 0x38(r3)
/* 80139254 00136194  FF E0 08 90 */	fmr f31, f1
/* 80139258 00136198  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013925C 0013619C  40 80 00 1C */	bge .L_80139278
/* 80139260 001361A0  80 7D 00 5C */	lwz r3, 0x5c(r29)
/* 80139264 001361A4  C0 22 9E C8 */	lfs f1, lbl_80518228@sda21(r2)
/* 80139268 001361A8  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8013926C 001361AC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80139270 001361B0  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 80139274 001361B4  EF E1 00 32 */	fmuls f31, f1, f0
.L_80139278:
/* 80139278 001361B8  7F E3 FB 78 */	mr r3, r31
/* 8013927C 001361BC  48 2F 06 25 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 80139280 001361C0  FC 20 F8 90 */	fmr f1, f31
/* 80139284 001361C4  7C 64 1B 78 */	mr r4, r3
/* 80139288 001361C8  7F C3 F3 78 */	mr r3, r30
/* 8013928C 001361CC  48 2E D3 81 */	bl drawAxis__8GraphicsFfP7Matrixf
.L_80139290:
/* 80139290 001361D0  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80139294 001361D4  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80139298 001361D8  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8013929C 001361DC  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 801392A0 001361E0  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 801392A4 001361E4  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 801392A8 001361E8  7C 08 03 A6 */	mtlr r0
/* 801392AC 001361EC  38 21 00 90 */	addi r1, r1, 0x90
/* 801392B0 001361F0  4E 80 00 20 */	blr 
.endfn draw__11AgeCollPartFR8Graphics

.fn __ct__11AgeCollPartFPQ28SysShape5Model, global
/* 801392B4 001361F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801392B8 001361F8  7C 08 02 A6 */	mflr r0
/* 801392BC 001361FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801392C0 00136200  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801392C4 00136204  7C 9F 23 78 */	mr r31, r4
/* 801392C8 00136208  93 C1 00 08 */	stw r30, 8(r1)
/* 801392CC 0013620C  7C 7E 1B 78 */	mr r30, r3
/* 801392D0 00136210  48 2D 80 C1 */	bl __ct__5CNodeFv
/* 801392D4 00136214  3C 80 80 4B */	lis r4, __vt__8CollPart@ha
/* 801392D8 00136218  38 7E 00 30 */	addi r3, r30, 0x30
/* 801392DC 0013621C  38 04 FE 9C */	addi r0, r4, __vt__8CollPart@l
/* 801392E0 00136220  90 1E 00 00 */	stw r0, 0(r30)
/* 801392E4 00136224  48 2D 9F 8D */	bl __ct__4ID32Fv
/* 801392E8 00136228  38 7E 00 3C */	addi r3, r30, 0x3c
/* 801392EC 0013622C  48 2D 9F 85 */	bl __ct__4ID32Fv
/* 801392F0 00136230  38 A0 00 00 */	li r5, 0
/* 801392F4 00136234  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 801392F8 00136238  90 BE 00 10 */	stw r5, 0x10(r30)
/* 801392FC 0013623C  38 00 FF FF */	li r0, -1
/* 80139300 00136240  C0 02 9E B0 */	lfs f0, lbl_80518210@sda21(r2)
/* 80139304 00136244  38 7E 00 3C */	addi r3, r30, 0x3c
/* 80139308 00136248  90 BE 00 0C */	stw r5, 0xc(r30)
/* 8013930C 0013624C  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 80139310 00136250  90 BE 00 08 */	stw r5, 8(r30)
/* 80139314 00136254  90 BE 00 04 */	stw r5, 4(r30)
/* 80139318 00136258  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8013931C 0013625C  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 80139320 00136260  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 80139324 00136264  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 80139328 00136268  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 8013932C 0013626C  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 80139330 00136270  D0 1E 00 50 */	stfs f0, 0x50(r30)
/* 80139334 00136274  D0 1E 00 54 */	stfs f0, 0x54(r30)
/* 80139338 00136278  93 FE 00 5C */	stw r31, 0x5c(r30)
/* 8013933C 0013627C  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 80139340 00136280  90 BE 00 60 */	stw r5, 0x60(r30)
/* 80139344 00136284  B0 BE 00 48 */	sth r5, 0x48(r30)
/* 80139348 00136288  98 BE 00 58 */	stb r5, 0x58(r30)
/* 8013934C 0013628C  48 2D 9F 8D */	bl setID__4ID32FUl
/* 80139350 00136290  3C 60 80 4B */	lis r3, __vt__11AgeCollPart@ha
/* 80139354 00136294  38 00 00 00 */	li r0, 0
/* 80139358 00136298  38 83 FE 00 */	addi r4, r3, __vt__11AgeCollPart@l
/* 8013935C 0013629C  7F C3 F3 78 */	mr r3, r30
/* 80139360 001362A0  90 9E 00 00 */	stw r4, 0(r30)
/* 80139364 001362A4  98 1E 00 64 */	stb r0, 0x64(r30)
/* 80139368 001362A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013936C 001362AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80139370 001362B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139374 001362B4  7C 08 03 A6 */	mtlr r0
/* 80139378 001362B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013937C 001362BC  4E 80 00 20 */	blr 
.endfn __ct__11AgeCollPartFPQ28SysShape5Model

.fn __dt__11AgeCollPartFv, weak
/* 80139380 001362C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139384 001362C4  7C 08 02 A6 */	mflr r0
/* 80139388 001362C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013938C 001362CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80139390 001362D0  7C 9F 23 78 */	mr r31, r4
/* 80139394 001362D4  93 C1 00 08 */	stw r30, 8(r1)
/* 80139398 001362D8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013939C 001362DC  41 82 00 38 */	beq .L_801393D4
/* 801393A0 001362E0  3C 80 80 4B */	lis r4, __vt__11AgeCollPart@ha
/* 801393A4 001362E4  38 04 FE 00 */	addi r0, r4, __vt__11AgeCollPart@l
/* 801393A8 001362E8  90 1E 00 00 */	stw r0, 0(r30)
/* 801393AC 001362EC  41 82 00 18 */	beq .L_801393C4
/* 801393B0 001362F0  3C A0 80 4B */	lis r5, __vt__8CollPart@ha
/* 801393B4 001362F4  38 80 00 00 */	li r4, 0
/* 801393B8 001362F8  38 05 FE 9C */	addi r0, r5, __vt__8CollPart@l
/* 801393BC 001362FC  90 1E 00 00 */	stw r0, 0(r30)
/* 801393C0 00136300  48 2D 81 C9 */	bl __dt__5CNodeFv
.L_801393C4:
/* 801393C4 00136304  7F E0 07 35 */	extsh. r0, r31
/* 801393C8 00136308  40 81 00 0C */	ble .L_801393D4
/* 801393CC 0013630C  7F C3 F3 78 */	mr r3, r30
/* 801393D0 00136310  4B EE AC E5 */	bl __dl__FPv
.L_801393D4:
/* 801393D4 00136314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801393D8 00136318  7F C3 F3 78 */	mr r3, r30
/* 801393DC 0013631C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801393E0 00136320  83 C1 00 08 */	lwz r30, 8(r1)
/* 801393E4 00136324  7C 08 03 A6 */	mtlr r0
/* 801393E8 00136328  38 21 00 10 */	addi r1, r1, 0x10
/* 801393EC 0013632C  4E 80 00 20 */	blr 
.endfn __dt__11AgeCollPartFv

.fn isMouth__8CollPartFv, weak
/* 801393F0 00136330  38 60 00 00 */	li r3, 0
/* 801393F4 00136334  4E 80 00 20 */	blr 
.endfn isMouth__8CollPartFv

.fn constructor__8CollPartFv, weak
/* 801393F8 00136338  4E 80 00 20 */	blr 
.endfn constructor__8CollPartFv

.fn doAnimation__8CollPartFv, weak
/* 801393FC 0013633C  4E 80 00 20 */	blr 
.endfn doAnimation__8CollPartFv

.fn doEntry__8CollPartFv, weak
/* 80139400 00136340  4E 80 00 20 */	blr 
.endfn doEntry__8CollPartFv

.fn doSetView__8CollPartFUl, weak
/* 80139404 00136344  4E 80 00 20 */	blr 
.endfn doSetView__8CollPartFUl

.fn doViewCalc__8CollPartFv, weak
/* 80139408 00136348  4E 80 00 20 */	blr 
.endfn doViewCalc__8CollPartFv

.fn doSimulation__8CollPartFf, weak
/* 8013940C 0013634C  4E 80 00 20 */	blr 
.endfn doSimulation__8CollPartFf

.fn doDirectDraw__8CollPartFR8Graphics, weak
/* 80139410 00136350  4E 80 00 20 */	blr 
.endfn doDirectDraw__8CollPartFR8Graphics

.fn __dt__15CollPartFactoryFv, weak
/* 80139414 00136354  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139418 00136358  7C 08 02 A6 */	mflr r0
/* 8013941C 0013635C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139420 00136360  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80139424 00136364  7C 9F 23 78 */	mr r31, r4
/* 80139428 00136368  93 C1 00 08 */	stw r30, 8(r1)
/* 8013942C 0013636C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80139430 00136370  41 82 00 38 */	beq .L_80139468
/* 80139434 00136374  3C 80 80 4B */	lis r4, __vt__15CollPartFactory@ha
/* 80139438 00136378  38 04 FE 34 */	addi r0, r4, __vt__15CollPartFactory@l
/* 8013943C 0013637C  90 1E 00 00 */	stw r0, 0(r30)
/* 80139440 00136380  41 82 00 18 */	beq .L_80139458
/* 80139444 00136384  3C A0 80 4B */	lis r5, __vt__8CollPart@ha
/* 80139448 00136388  38 80 00 00 */	li r4, 0
/* 8013944C 0013638C  38 05 FE 9C */	addi r0, r5, __vt__8CollPart@l
/* 80139450 00136390  90 1E 00 00 */	stw r0, 0(r30)
/* 80139454 00136394  48 2D 81 35 */	bl __dt__5CNodeFv
.L_80139458:
/* 80139458 00136398  7F E0 07 35 */	extsh. r0, r31
/* 8013945C 0013639C  40 81 00 0C */	ble .L_80139468
/* 80139460 001363A0  7F C3 F3 78 */	mr r3, r30
/* 80139464 001363A4  4B EE AC 51 */	bl __dl__FPv
.L_80139468:
/* 80139468 001363A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013946C 001363AC  7F C3 F3 78 */	mr r3, r30
/* 80139470 001363B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80139474 001363B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80139478 001363B8  7C 08 03 A6 */	mtlr r0
/* 8013947C 001363BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80139480 001363C0  4E 80 00 20 */	blr 
.endfn __dt__15CollPartFactoryFv

.fn isMouth__13MouthCollPartFv, weak
/* 80139484 001363C4  38 60 00 01 */	li r3, 1
/* 80139488 001363C8  4E 80 00 20 */	blr 
.endfn isMouth__13MouthCollPartFv

.fn __dt__Q23Sys3OBBFv, weak
/* 8013948C 001363CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139490 001363D0  7C 08 02 A6 */	mflr r0
/* 80139494 001363D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139498 001363D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013949C 001363DC  7C 9F 23 78 */	mr r31, r4
/* 801394A0 001363E0  93 C1 00 08 */	stw r30, 8(r1)
/* 801394A4 001363E4  7C 7E 1B 79 */	or. r30, r3, r3
/* 801394A8 001363E8  41 82 00 9C */	beq .L_80139544
/* 801394AC 001363EC  3C 60 80 4B */	lis r3, __vt__Q23Sys3OBB@ha
/* 801394B0 001363F0  34 1E 00 D8 */	addic. r0, r30, 0xd8
/* 801394B4 001363F4  38 03 FE D0 */	addi r0, r3, __vt__Q23Sys3OBB@l
/* 801394B8 001363F8  90 1E 00 00 */	stw r0, 0(r30)
/* 801394BC 001363FC  41 82 00 6C */	beq .L_80139528
/* 801394C0 00136400  3C 60 80 4B */	lis r3, __vt__Q23Sys12TriIndexList@ha
/* 801394C4 00136404  34 1E 00 D8 */	addic. r0, r30, 0xd8
/* 801394C8 00136408  38 03 FF 9C */	addi r0, r3, __vt__Q23Sys12TriIndexList@l
/* 801394CC 0013640C  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 801394D0 00136410  41 82 00 58 */	beq .L_80139528
/* 801394D4 00136414  3C 60 80 4B */	lis r3, __vt__Q23Sys9IndexList@ha
/* 801394D8 00136418  34 1E 00 D8 */	addic. r0, r30, 0xd8
/* 801394DC 0013641C  38 03 FF 54 */	addi r0, r3, __vt__Q23Sys9IndexList@l
/* 801394E0 00136420  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 801394E4 00136424  41 82 00 44 */	beq .L_80139528
/* 801394E8 00136428  3C 60 80 4B */	lis r3, "__vt__17ArrayContainer<i>"@ha
/* 801394EC 0013642C  34 1E 00 D8 */	addic. r0, r30, 0xd8
/* 801394F0 00136430  38 03 FF 0C */	addi r0, r3, "__vt__17ArrayContainer<i>"@l
/* 801394F4 00136434  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 801394F8 00136438  41 82 00 30 */	beq .L_80139528
/* 801394FC 0013643C  3C 60 80 4B */	lis r3, "__vt__12Container<i>"@ha
/* 80139500 00136440  34 1E 00 D8 */	addic. r0, r30, 0xd8
/* 80139504 00136444  38 03 FE E0 */	addi r0, r3, "__vt__12Container<i>"@l
/* 80139508 00136448  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 8013950C 0013644C  41 82 00 1C */	beq .L_80139528
/* 80139510 00136450  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80139514 00136454  38 7E 00 D8 */	addi r3, r30, 0xd8
/* 80139518 00136458  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8013951C 0013645C  38 80 00 00 */	li r4, 0
/* 80139520 00136460  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 80139524 00136464  48 2D 80 65 */	bl __dt__5CNodeFv
.L_80139528:
/* 80139528 00136468  7F C3 F3 78 */	mr r3, r30
/* 8013952C 0013646C  38 80 00 00 */	li r4, 0
/* 80139530 00136470  48 2D 80 59 */	bl __dt__5CNodeFv
/* 80139534 00136474  7F E0 07 35 */	extsh. r0, r31
/* 80139538 00136478  40 81 00 0C */	ble .L_80139544
/* 8013953C 0013647C  7F C3 F3 78 */	mr r3, r30
/* 80139540 00136480  4B EE AB 75 */	bl __dl__FPv
.L_80139544:
/* 80139544 00136484  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139548 00136488  7F C3 F3 78 */	mr r3, r30
/* 8013954C 0013648C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80139550 00136490  83 C1 00 08 */	lwz r30, 8(r1)
/* 80139554 00136494  7C 08 03 A6 */	mtlr r0
/* 80139558 00136498  38 21 00 10 */	addi r1, r1, 0x10
/* 8013955C 0013649C  4E 80 00 20 */	blr 
.endfn __dt__Q23Sys3OBBFv

.fn "__dt__12Container<i>Fv", weak
/* 80139560 001364A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139564 001364A4  7C 08 02 A6 */	mflr r0
/* 80139568 001364A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013956C 001364AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80139570 001364B0  7C 9F 23 78 */	mr r31, r4
/* 80139574 001364B4  93 C1 00 08 */	stw r30, 8(r1)
/* 80139578 001364B8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8013957C 001364BC  41 82 00 38 */	beq .L_801395B4
/* 80139580 001364C0  3C 80 80 4B */	lis r4, "__vt__12Container<i>"@ha
/* 80139584 001364C4  38 04 FE E0 */	addi r0, r4, "__vt__12Container<i>"@l
/* 80139588 001364C8  90 1E 00 00 */	stw r0, 0(r30)
/* 8013958C 001364CC  41 82 00 18 */	beq .L_801395A4
/* 80139590 001364D0  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80139594 001364D4  38 80 00 00 */	li r4, 0
/* 80139598 001364D8  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8013959C 001364DC  90 1E 00 00 */	stw r0, 0(r30)
/* 801395A0 001364E0  48 2D 7F E9 */	bl __dt__5CNodeFv
.L_801395A4:
/* 801395A4 001364E4  7F E0 07 35 */	extsh. r0, r31
/* 801395A8 001364E8  40 81 00 0C */	ble .L_801395B4
/* 801395AC 001364EC  7F C3 F3 78 */	mr r3, r30
/* 801395B0 001364F0  4B EE AB 05 */	bl __dl__FPv
.L_801395B4:
/* 801395B4 001364F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801395B8 001364F8  7F C3 F3 78 */	mr r3, r30
/* 801395BC 001364FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801395C0 00136500  83 C1 00 08 */	lwz r30, 8(r1)
/* 801395C4 00136504  7C 08 03 A6 */	mtlr r0
/* 801395C8 00136508  38 21 00 10 */	addi r1, r1, 0x10
/* 801395CC 0013650C  4E 80 00 20 */	blr 
.endfn "__dt__12Container<i>Fv"

.fn "__dt__17ArrayContainer<i>Fv", weak
/* 801395D0 00136510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801395D4 00136514  7C 08 02 A6 */	mflr r0
/* 801395D8 00136518  90 01 00 14 */	stw r0, 0x14(r1)
/* 801395DC 0013651C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801395E0 00136520  7C 9F 23 78 */	mr r31, r4
/* 801395E4 00136524  93 C1 00 08 */	stw r30, 8(r1)
/* 801395E8 00136528  7C 7E 1B 79 */	or. r30, r3, r3
/* 801395EC 0013652C  41 82 00 48 */	beq .L_80139634
/* 801395F0 00136530  3C 80 80 4B */	lis r4, "__vt__17ArrayContainer<i>"@ha
/* 801395F4 00136534  38 04 FF 0C */	addi r0, r4, "__vt__17ArrayContainer<i>"@l
/* 801395F8 00136538  90 1E 00 00 */	stw r0, 0(r30)
/* 801395FC 0013653C  41 82 00 28 */	beq .L_80139624
/* 80139600 00136540  3C 80 80 4B */	lis r4, "__vt__12Container<i>"@ha
/* 80139604 00136544  38 04 FE E0 */	addi r0, r4, "__vt__12Container<i>"@l
/* 80139608 00136548  90 1E 00 00 */	stw r0, 0(r30)
/* 8013960C 0013654C  41 82 00 18 */	beq .L_80139624
/* 80139610 00136550  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80139614 00136554  38 80 00 00 */	li r4, 0
/* 80139618 00136558  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8013961C 0013655C  90 1E 00 00 */	stw r0, 0(r30)
/* 80139620 00136560  48 2D 7F 69 */	bl __dt__5CNodeFv
.L_80139624:
/* 80139624 00136564  7F E0 07 35 */	extsh. r0, r31
/* 80139628 00136568  40 81 00 0C */	ble .L_80139634
/* 8013962C 0013656C  7F C3 F3 78 */	mr r3, r30
/* 80139630 00136570  4B EE AA 85 */	bl __dl__FPv
.L_80139634:
/* 80139634 00136574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139638 00136578  7F C3 F3 78 */	mr r3, r30
/* 8013963C 0013657C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80139640 00136580  83 C1 00 08 */	lwz r30, 8(r1)
/* 80139644 00136584  7C 08 03 A6 */	mtlr r0
/* 80139648 00136588  38 21 00 10 */	addi r1, r1, 0x10
/* 8013964C 0013658C  4E 80 00 20 */	blr 
.endfn "__dt__17ArrayContainer<i>Fv"

.fn "alloc__17ArrayContainer<i>Fi", weak
/* 80139650 00136590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139654 00136594  7C 08 02 A6 */	mflr r0
/* 80139658 00136598  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013965C 0013659C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80139660 001365A0  7C 9F 23 78 */	mr r31, r4
/* 80139664 001365A4  93 C1 00 08 */	stw r30, 8(r1)
/* 80139668 001365A8  7C 7E 1B 78 */	mr r30, r3
/* 8013966C 001365AC  54 83 10 3A */	slwi r3, r4, 2
/* 80139670 001365B0  4B EE A9 3D */	bl __nwa__FUl
/* 80139674 001365B4  90 7E 00 24 */	stw r3, 0x24(r30)
/* 80139678 001365B8  38 00 00 00 */	li r0, 0
/* 8013967C 001365BC  93 FE 00 20 */	stw r31, 0x20(r30)
/* 80139680 001365C0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80139684 001365C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80139688 001365C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013968C 001365CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139690 001365D0  7C 08 03 A6 */	mtlr r0
/* 80139694 001365D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80139698 001365D8  4E 80 00 20 */	blr 
.endfn "alloc__17ArrayContainer<i>Fi"

.fn "read__17ArrayContainer<i>FR6Stream", weak
/* 8013969C 001365DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801396A0 001365E0  7C 08 02 A6 */	mflr r0
/* 801396A4 001365E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801396A8 001365E8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801396AC 001365EC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801396B0 001365F0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801396B4 001365F4  7C 9D 23 78 */	mr r29, r4
/* 801396B8 001365F8  93 81 00 10 */	stw r28, 0x10(r1)
/* 801396BC 001365FC  7C 7C 1B 78 */	mr r28, r3
/* 801396C0 00136600  7F A3 EB 78 */	mr r3, r29
/* 801396C4 00136604  48 2D B3 CD */	bl readInt__6StreamFv
/* 801396C8 00136608  90 7C 00 20 */	stw r3, 0x20(r28)
/* 801396CC 0013660C  7F 83 E3 78 */	mr r3, r28
/* 801396D0 00136610  81 9C 00 00 */	lwz r12, 0(r28)
/* 801396D4 00136614  80 9C 00 20 */	lwz r4, 0x20(r28)
/* 801396D8 00136618  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801396DC 0013661C  7D 89 03 A6 */	mtctr r12
/* 801396E0 00136620  4E 80 04 21 */	bctrl 
/* 801396E4 00136624  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 801396E8 00136628  3B C0 00 00 */	li r30, 0
/* 801396EC 0013662C  3B E0 00 00 */	li r31, 0
/* 801396F0 00136630  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 801396F4 00136634  48 00 00 2C */	b .L_80139720
.L_801396F8:
/* 801396F8 00136638  7F 83 E3 78 */	mr r3, r28
/* 801396FC 0013663C  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 80139700 00136640  81 9C 00 00 */	lwz r12, 0(r28)
/* 80139704 00136644  7F A4 EB 78 */	mr r4, r29
/* 80139708 00136648  7C A0 FA 14 */	add r5, r0, r31
/* 8013970C 0013664C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80139710 00136650  7D 89 03 A6 */	mtctr r12
/* 80139714 00136654  4E 80 04 21 */	bctrl 
/* 80139718 00136658  3B FF 00 04 */	addi r31, r31, 4
/* 8013971C 0013665C  3B DE 00 01 */	addi r30, r30, 1
.L_80139720:
/* 80139720 00136660  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 80139724 00136664  7C 1E 00 00 */	cmpw r30, r0
/* 80139728 00136668  41 80 FF D0 */	blt .L_801396F8
/* 8013972C 0013666C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80139730 00136670  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80139734 00136674  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80139738 00136678  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013973C 0013667C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80139740 00136680  7C 08 03 A6 */	mtlr r0
/* 80139744 00136684  38 21 00 20 */	addi r1, r1, 0x20
/* 80139748 00136688  4E 80 00 20 */	blr 
.endfn "read__17ArrayContainer<i>FR6Stream"

.fn "readObject__17ArrayContainer<i>FR6StreamRi", weak
/* 8013974C 0013668C  4E 80 00 20 */	blr 
.endfn "readObject__17ArrayContainer<i>FR6StreamRi"

.fn readObject__Q23Sys9IndexListFR6StreamRi, weak
/* 80139750 00136690  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139754 00136694  7C 08 02 A6 */	mflr r0
/* 80139758 00136698  7C 83 23 78 */	mr r3, r4
/* 8013975C 0013669C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139760 001366A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80139764 001366A4  7C BF 2B 78 */	mr r31, r5
/* 80139768 001366A8  48 2D B3 29 */	bl readInt__6StreamFv
/* 8013976C 001366AC  90 7F 00 00 */	stw r3, 0(r31)
/* 80139770 001366B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139774 001366B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80139778 001366B8  7C 08 03 A6 */	mtlr r0
/* 8013977C 001366BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80139780 001366C0  4E 80 00 20 */	blr 
.endfn readObject__Q23Sys9IndexListFR6StreamRi

.fn writeObject__Q23Sys9IndexListFR6StreamRi, weak
/* 80139784 001366C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139788 001366C8  7C 08 02 A6 */	mflr r0
/* 8013978C 001366CC  7C 83 23 78 */	mr r3, r4
/* 80139790 001366D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139794 001366D4  80 85 00 00 */	lwz r4, 0(r5)
/* 80139798 001366D8  48 2D C0 29 */	bl writeInt__6StreamFi
/* 8013979C 001366DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801397A0 001366E0  7C 08 03 A6 */	mtlr r0
/* 801397A4 001366E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801397A8 001366E8  4E 80 00 20 */	blr 
.endfn writeObject__Q23Sys9IndexListFR6StreamRi

.fn __dt__Q23Sys9IndexListFv, weak
/* 801397AC 001366EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801397B0 001366F0  7C 08 02 A6 */	mflr r0
/* 801397B4 001366F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801397B8 001366F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801397BC 001366FC  7C 9F 23 78 */	mr r31, r4
/* 801397C0 00136700  93 C1 00 08 */	stw r30, 8(r1)
/* 801397C4 00136704  7C 7E 1B 79 */	or. r30, r3, r3
/* 801397C8 00136708  41 82 00 58 */	beq .L_80139820
/* 801397CC 0013670C  3C 80 80 4B */	lis r4, __vt__Q23Sys9IndexList@ha
/* 801397D0 00136710  38 04 FF 54 */	addi r0, r4, __vt__Q23Sys9IndexList@l
/* 801397D4 00136714  90 1E 00 00 */	stw r0, 0(r30)
/* 801397D8 00136718  41 82 00 38 */	beq .L_80139810
/* 801397DC 0013671C  3C 80 80 4B */	lis r4, "__vt__17ArrayContainer<i>"@ha
/* 801397E0 00136720  38 04 FF 0C */	addi r0, r4, "__vt__17ArrayContainer<i>"@l
/* 801397E4 00136724  90 1E 00 00 */	stw r0, 0(r30)
/* 801397E8 00136728  41 82 00 28 */	beq .L_80139810
/* 801397EC 0013672C  3C 80 80 4B */	lis r4, "__vt__12Container<i>"@ha
/* 801397F0 00136730  38 04 FE E0 */	addi r0, r4, "__vt__12Container<i>"@l
/* 801397F4 00136734  90 1E 00 00 */	stw r0, 0(r30)
/* 801397F8 00136738  41 82 00 18 */	beq .L_80139810
/* 801397FC 0013673C  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 80139800 00136740  38 80 00 00 */	li r4, 0
/* 80139804 00136744  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80139808 00136748  90 1E 00 00 */	stw r0, 0(r30)
/* 8013980C 0013674C  48 2D 7D 7D */	bl __dt__5CNodeFv
.L_80139810:
/* 80139810 00136750  7F E0 07 35 */	extsh. r0, r31
/* 80139814 00136754  40 81 00 0C */	ble .L_80139820
/* 80139818 00136758  7F C3 F3 78 */	mr r3, r30
/* 8013981C 0013675C  4B EE A8 99 */	bl __dl__FPv
.L_80139820:
/* 80139820 00136760  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139824 00136764  7F C3 F3 78 */	mr r3, r30
/* 80139828 00136768  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013982C 0013676C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80139830 00136770  7C 08 03 A6 */	mtlr r0
/* 80139834 00136774  38 21 00 10 */	addi r1, r1, 0x10
/* 80139838 00136778  4E 80 00 20 */	blr 
.endfn __dt__Q23Sys9IndexListFv

.fn "setArray__28ArrayContainer<10Vector3<f>>FP10Vector3<f>i", weak
/* 8013983C 0013677C  90 83 00 24 */	stw r4, 0x24(r3)
/* 80139840 00136780  90 A3 00 20 */	stw r5, 0x20(r3)
/* 80139844 00136784  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80139848 00136788  4E 80 00 20 */	blr 
.endfn "setArray__28ArrayContainer<10Vector3<f>>FP10Vector3<f>i"

.fn "addOne__28ArrayContainer<10Vector3<f>>FR10Vector3<f>", weak
/* 8013984C 0013678C  80 E3 00 1C */	lwz r7, 0x1c(r3)
/* 80139850 00136790  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80139854 00136794  7C 07 00 00 */	cmpw r7, r0
/* 80139858 00136798  4C 80 00 20 */	bgelr 
/* 8013985C 0013679C  80 C3 00 24 */	lwz r6, 0x24(r3)
/* 80139860 001367A0  38 A7 00 01 */	addi r5, r7, 1
/* 80139864 001367A4  1C 07 00 0C */	mulli r0, r7, 0xc
/* 80139868 001367A8  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 8013986C 001367AC  C0 04 00 00 */	lfs f0, 0(r4)
/* 80139870 001367B0  7C 66 02 14 */	add r3, r6, r0
/* 80139874 001367B4  D0 03 00 00 */	stfs f0, 0(r3)
/* 80139878 001367B8  C0 04 00 04 */	lfs f0, 4(r4)
/* 8013987C 001367BC  D0 03 00 04 */	stfs f0, 4(r3)
/* 80139880 001367C0  C0 04 00 08 */	lfs f0, 8(r4)
/* 80139884 001367C4  D0 03 00 08 */	stfs f0, 8(r3)
/* 80139888 001367C8  4E 80 00 20 */	blr 
.endfn "addOne__28ArrayContainer<10Vector3<f>>FR10Vector3<f>"

.fn "birth__24MonoObjectMgr<8CollPart>Fv", weak
/* 8013988C 001367CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139890 001367D0  7C 08 02 A6 */	mflr r0
/* 80139894 001367D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139898 001367D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013989C 001367DC  7C 7F 1B 78 */	mr r31, r3
/* 801398A0 001367E0  48 00 00 A1 */	bl "getEmptyIndex__24MonoObjectMgr<8CollPart>Fv"
/* 801398A4 001367E4  2C 03 FF FF */	cmpwi r3, -1
/* 801398A8 001367E8  41 82 00 2C */	beq .L_801398D4
/* 801398AC 001367EC  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 801398B0 001367F0  38 00 00 00 */	li r0, 0
/* 801398B4 001367F4  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 801398B8 001367F8  1C A3 00 64 */	mulli r5, r3, 0x64
/* 801398BC 001367FC  7C 04 19 AE */	stbx r0, r4, r3
/* 801398C0 00136800  7C 66 2A 14 */	add r3, r6, r5
/* 801398C4 00136804  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 801398C8 00136808  38 04 00 01 */	addi r0, r4, 1
/* 801398CC 0013680C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801398D0 00136810  48 00 00 08 */	b .L_801398D8
.L_801398D4:
/* 801398D4 00136814  38 60 00 00 */	li r3, 0
.L_801398D8:
/* 801398D8 00136818  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801398DC 0013681C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801398E0 00136820  7C 08 03 A6 */	mtlr r0
/* 801398E4 00136824  38 21 00 10 */	addi r1, r1, 0x10
/* 801398E8 00136828  4E 80 00 20 */	blr 
.endfn "birth__24MonoObjectMgr<8CollPart>Fv"

.fn "kill__24MonoObjectMgr<8CollPart>FP8CollPart", weak
/* 801398EC 0013682C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801398F0 00136830  38 C0 00 00 */	li r6, 0
/* 801398F4 00136834  38 A0 00 00 */	li r5, 0
/* 801398F8 00136838  7C 09 03 A6 */	mtctr r0
/* 801398FC 0013683C  2C 00 00 00 */	cmpwi r0, 0
/* 80139900 00136840  4C 81 00 20 */	blelr 
.L_80139904:
/* 80139904 00136844  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80139908 00136848  7C 00 2A 14 */	add r0, r0, r5
/* 8013990C 0013684C  7C 00 20 40 */	cmplw r0, r4
/* 80139910 00136850  40 82 00 20 */	bne .L_80139930
/* 80139914 00136854  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80139918 00136858  38 00 00 01 */	li r0, 1
/* 8013991C 0013685C  7C 04 31 AE */	stbx r0, r4, r6
/* 80139920 00136860  80 83 00 20 */	lwz r4, 0x20(r3)
/* 80139924 00136864  38 04 FF FF */	addi r0, r4, -1
/* 80139928 00136868  90 03 00 20 */	stw r0, 0x20(r3)
/* 8013992C 0013686C  4E 80 00 20 */	blr 
.L_80139930:
/* 80139930 00136870  38 A5 00 64 */	addi r5, r5, 0x64
/* 80139934 00136874  38 C6 00 01 */	addi r6, r6, 1
/* 80139938 00136878  42 00 FF CC */	bdnz .L_80139904
/* 8013993C 0013687C  4E 80 00 20 */	blr 
.endfn "kill__24MonoObjectMgr<8CollPart>FP8CollPart"

.fn "getEmptyIndex__24MonoObjectMgr<8CollPart>Fv", weak
/* 80139940 00136880  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80139944 00136884  38 A0 00 00 */	li r5, 0
/* 80139948 00136888  7C 09 03 A6 */	mtctr r0
/* 8013994C 0013688C  2C 00 00 00 */	cmpwi r0, 0
/* 80139950 00136890  40 81 00 24 */	ble .L_80139974
.L_80139954:
/* 80139954 00136894  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 80139958 00136898  7C 04 28 AE */	lbzx r0, r4, r5
/* 8013995C 0013689C  28 00 00 01 */	cmplwi r0, 1
/* 80139960 001368A0  40 82 00 0C */	bne .L_8013996C
/* 80139964 001368A4  7C A3 2B 78 */	mr r3, r5
/* 80139968 001368A8  4E 80 00 20 */	blr 
.L_8013996C:
/* 8013996C 001368AC  38 A5 00 01 */	addi r5, r5, 1
/* 80139970 001368B0  42 00 FF E4 */	bdnz .L_80139954
.L_80139974:
/* 80139974 001368B4  38 60 FF FF */	li r3, -1
/* 80139978 001368B8  4E 80 00 20 */	blr 
.endfn "getEmptyIndex__24MonoObjectMgr<8CollPart>Fv"

.fn "writeObject__28ArrayContainer<10Vector3<f>>FR6StreamR10Vector3<f>", weak
/* 8013997C 001368BC  4E 80 00 20 */	blr 
.endfn "writeObject__28ArrayContainer<10Vector3<f>>FR6StreamR10Vector3<f>"

.fn "write__28ArrayContainer<10Vector3<f>>FR6Stream", weak
/* 80139980 001368C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80139984 001368C4  7C 08 02 A6 */	mflr r0
/* 80139988 001368C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013998C 001368CC  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80139990 001368D0  7C 9C 23 78 */	mr r28, r4
/* 80139994 001368D4  7C 7B 1B 78 */	mr r27, r3
/* 80139998 001368D8  80 83 00 14 */	lwz r4, 0x14(r3)
/* 8013999C 001368DC  7F 83 E3 78 */	mr r3, r28
/* 801399A0 001368E0  48 2D A6 7D */	bl textBeginGroup__6StreamFPc
/* 801399A4 001368E4  80 9C 04 14 */	lwz r4, 0x414(r28)
/* 801399A8 001368E8  7F 83 E3 78 */	mr r3, r28
/* 801399AC 001368EC  48 2D AA 89 */	bl textWriteTab__6StreamFi
/* 801399B0 001368F0  80 9B 00 20 */	lwz r4, 0x20(r27)
/* 801399B4 001368F4  7F 83 E3 78 */	mr r3, r28
/* 801399B8 001368F8  48 2D BE 09 */	bl writeInt__6StreamFi
/* 801399BC 001368FC  7F 83 E3 78 */	mr r3, r28
/* 801399C0 00136900  38 82 9E D0 */	addi r4, r2, lbl_80518230@sda21
/* 801399C4 00136904  4C C6 31 82 */	crclr 6
/* 801399C8 00136908  48 2D A8 15 */	bl textWriteText__6StreamFPce
/* 801399CC 0013690C  3C 60 80 48 */	lis r3, lbl_8047C63C@ha
/* 801399D0 00136910  3B A0 00 00 */	li r29, 0
/* 801399D4 00136914  3B E3 C6 3C */	addi r31, r3, lbl_8047C63C@l
/* 801399D8 00136918  3B C0 00 00 */	li r30, 0
/* 801399DC 0013691C  48 00 00 50 */	b .L_80139A2C
.L_801399E0:
/* 801399E0 00136920  80 9C 04 14 */	lwz r4, 0x414(r28)
/* 801399E4 00136924  7F 83 E3 78 */	mr r3, r28
/* 801399E8 00136928  48 2D AA 4D */	bl textWriteTab__6StreamFi
/* 801399EC 0013692C  7F 63 DB 78 */	mr r3, r27
/* 801399F0 00136930  80 1B 00 24 */	lwz r0, 0x24(r27)
/* 801399F4 00136934  81 9B 00 00 */	lwz r12, 0(r27)
/* 801399F8 00136938  7F 84 E3 78 */	mr r4, r28
/* 801399FC 0013693C  7C A0 F2 14 */	add r5, r0, r30
/* 80139A00 00136940  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80139A04 00136944  7D 89 03 A6 */	mtctr r12
/* 80139A08 00136948  4E 80 04 21 */	bctrl 
/* 80139A0C 0013694C  80 DB 00 20 */	lwz r6, 0x20(r27)
/* 80139A10 00136950  7F 83 E3 78 */	mr r3, r28
/* 80139A14 00136954  7F E4 FB 78 */	mr r4, r31
/* 80139A18 00136958  7F A5 EB 78 */	mr r5, r29
/* 80139A1C 0013695C  4C C6 31 82 */	crclr 6
/* 80139A20 00136960  48 2D A7 BD */	bl textWriteText__6StreamFPce
/* 80139A24 00136964  3B DE 00 0C */	addi r30, r30, 0xc
/* 80139A28 00136968  3B BD 00 01 */	addi r29, r29, 1
.L_80139A2C:
/* 80139A2C 0013696C  80 1B 00 20 */	lwz r0, 0x20(r27)
/* 80139A30 00136970  7C 1D 00 00 */	cmpw r29, r0
/* 80139A34 00136974  41 80 FF AC */	blt .L_801399E0
/* 80139A38 00136978  7F 83 E3 78 */	mr r3, r28
/* 80139A3C 0013697C  48 2D A6 65 */	bl textEndGroup__6StreamFv
/* 80139A40 00136980  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80139A44 00136984  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80139A48 00136988  7C 08 03 A6 */	mtlr r0
/* 80139A4C 0013698C  38 21 00 20 */	addi r1, r1, 0x20
/* 80139A50 00136990  4E 80 00 20 */	blr 
.endfn "write__28ArrayContainer<10Vector3<f>>FR6Stream"

.fn "get__28ArrayContainer<10Vector3<f>>FPv", weak
/* 80139A54 00136994  1C 04 00 0C */	mulli r0, r4, 0xc
/* 80139A58 00136998  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80139A5C 0013699C  7C 63 02 14 */	add r3, r3, r0
/* 80139A60 001369A0  4E 80 00 20 */	blr 
.endfn "get__28ArrayContainer<10Vector3<f>>FPv"

.fn "getNext__28ArrayContainer<10Vector3<f>>FPv", weak
/* 80139A64 001369A4  38 64 00 01 */	addi r3, r4, 1
/* 80139A68 001369A8  4E 80 00 20 */	blr 
.endfn "getNext__28ArrayContainer<10Vector3<f>>FPv"

.fn "getStart__28ArrayContainer<10Vector3<f>>Fv", weak
/* 80139A6C 001369AC  38 60 00 00 */	li r3, 0
/* 80139A70 001369B0  4E 80 00 20 */	blr 
.endfn "getStart__28ArrayContainer<10Vector3<f>>Fv"

.fn "getEnd__28ArrayContainer<10Vector3<f>>Fv", weak
/* 80139A74 001369B4  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80139A78 001369B8  4E 80 00 20 */	blr 
.endfn "getEnd__28ArrayContainer<10Vector3<f>>Fv"

.fn "getAt__28ArrayContainer<10Vector3<f>>Fi", weak
/* 80139A7C 001369BC  1C 04 00 0C */	mulli r0, r4, 0xc
/* 80139A80 001369C0  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80139A84 001369C4  7C 63 02 14 */	add r3, r3, r0
/* 80139A88 001369C8  4E 80 00 20 */	blr 
.endfn "getAt__28ArrayContainer<10Vector3<f>>Fi"

.fn "getTo__28ArrayContainer<10Vector3<f>>Fv", weak
/* 80139A8C 001369CC  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80139A90 001369D0  4E 80 00 20 */	blr 
.endfn "getTo__28ArrayContainer<10Vector3<f>>Fv"

.fn "writeObject__17ArrayContainer<i>FR6StreamRi", weak
/* 80139A94 001369D4  4E 80 00 20 */	blr 
.endfn "writeObject__17ArrayContainer<i>FR6StreamRi"

.fn "write__17ArrayContainer<i>FR6Stream", weak
/* 80139A98 001369D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80139A9C 001369DC  7C 08 02 A6 */	mflr r0
/* 80139AA0 001369E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80139AA4 001369E4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80139AA8 001369E8  7C 9C 23 78 */	mr r28, r4
/* 80139AAC 001369EC  7C 7B 1B 78 */	mr r27, r3
/* 80139AB0 001369F0  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80139AB4 001369F4  7F 83 E3 78 */	mr r3, r28
/* 80139AB8 001369F8  48 2D A5 65 */	bl textBeginGroup__6StreamFPc
/* 80139ABC 001369FC  80 9C 04 14 */	lwz r4, 0x414(r28)
/* 80139AC0 00136A00  7F 83 E3 78 */	mr r3, r28
/* 80139AC4 00136A04  48 2D A9 71 */	bl textWriteTab__6StreamFi
/* 80139AC8 00136A08  80 9B 00 20 */	lwz r4, 0x20(r27)
/* 80139ACC 00136A0C  7F 83 E3 78 */	mr r3, r28
/* 80139AD0 00136A10  48 2D BC F1 */	bl writeInt__6StreamFi
/* 80139AD4 00136A14  7F 83 E3 78 */	mr r3, r28
/* 80139AD8 00136A18  38 82 9E D0 */	addi r4, r2, lbl_80518230@sda21
/* 80139ADC 00136A1C  4C C6 31 82 */	crclr 6
/* 80139AE0 00136A20  48 2D A6 FD */	bl textWriteText__6StreamFPce
/* 80139AE4 00136A24  3C 60 80 48 */	lis r3, lbl_8047C63C@ha
/* 80139AE8 00136A28  3B A0 00 00 */	li r29, 0
/* 80139AEC 00136A2C  3B E3 C6 3C */	addi r31, r3, lbl_8047C63C@l
/* 80139AF0 00136A30  3B C0 00 00 */	li r30, 0
/* 80139AF4 00136A34  48 00 00 50 */	b .L_80139B44
.L_80139AF8:
/* 80139AF8 00136A38  80 9C 04 14 */	lwz r4, 0x414(r28)
/* 80139AFC 00136A3C  7F 83 E3 78 */	mr r3, r28
/* 80139B00 00136A40  48 2D A9 35 */	bl textWriteTab__6StreamFi
/* 80139B04 00136A44  7F 63 DB 78 */	mr r3, r27
/* 80139B08 00136A48  80 1B 00 24 */	lwz r0, 0x24(r27)
/* 80139B0C 00136A4C  81 9B 00 00 */	lwz r12, 0(r27)
/* 80139B10 00136A50  7F 84 E3 78 */	mr r4, r28
/* 80139B14 00136A54  7C A0 F2 14 */	add r5, r0, r30
/* 80139B18 00136A58  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80139B1C 00136A5C  7D 89 03 A6 */	mtctr r12
/* 80139B20 00136A60  4E 80 04 21 */	bctrl 
/* 80139B24 00136A64  80 DB 00 20 */	lwz r6, 0x20(r27)
/* 80139B28 00136A68  7F 83 E3 78 */	mr r3, r28
/* 80139B2C 00136A6C  7F E4 FB 78 */	mr r4, r31
/* 80139B30 00136A70  7F A5 EB 78 */	mr r5, r29
/* 80139B34 00136A74  4C C6 31 82 */	crclr 6
/* 80139B38 00136A78  48 2D A6 A5 */	bl textWriteText__6StreamFPce
/* 80139B3C 00136A7C  3B DE 00 04 */	addi r30, r30, 4
/* 80139B40 00136A80  3B BD 00 01 */	addi r29, r29, 1
.L_80139B44:
/* 80139B44 00136A84  80 1B 00 20 */	lwz r0, 0x20(r27)
/* 80139B48 00136A88  7C 1D 00 00 */	cmpw r29, r0
/* 80139B4C 00136A8C  41 80 FF AC */	blt .L_80139AF8
/* 80139B50 00136A90  7F 83 E3 78 */	mr r3, r28
/* 80139B54 00136A94  48 2D A5 4D */	bl textEndGroup__6StreamFv
/* 80139B58 00136A98  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80139B5C 00136A9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80139B60 00136AA0  7C 08 03 A6 */	mtlr r0
/* 80139B64 00136AA4  38 21 00 20 */	addi r1, r1, 0x20
/* 80139B68 00136AA8  4E 80 00 20 */	blr 
.endfn "write__17ArrayContainer<i>FR6Stream"

.fn "addOne__17ArrayContainer<i>FRi", weak
/* 80139B6C 00136AAC  80 E3 00 1C */	lwz r7, 0x1c(r3)
/* 80139B70 00136AB0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80139B74 00136AB4  7C 07 00 00 */	cmpw r7, r0
/* 80139B78 00136AB8  4C 80 00 20 */	bgelr 
/* 80139B7C 00136ABC  80 C4 00 00 */	lwz r6, 0(r4)
/* 80139B80 00136AC0  38 87 00 01 */	addi r4, r7, 1
/* 80139B84 00136AC4  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 80139B88 00136AC8  54 E0 10 3A */	slwi r0, r7, 2
/* 80139B8C 00136ACC  90 83 00 1C */	stw r4, 0x1c(r3)
/* 80139B90 00136AD0  7C C5 01 2E */	stwx r6, r5, r0
/* 80139B94 00136AD4  4E 80 00 20 */	blr 
.endfn "addOne__17ArrayContainer<i>FRi"

.fn "setArray__17ArrayContainer<i>FPii", weak
/* 80139B98 00136AD8  90 83 00 24 */	stw r4, 0x24(r3)
/* 80139B9C 00136ADC  90 A3 00 20 */	stw r5, 0x20(r3)
/* 80139BA0 00136AE0  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80139BA4 00136AE4  4E 80 00 20 */	blr 
.endfn "setArray__17ArrayContainer<i>FPii"

.fn "get__17ArrayContainer<i>FPv", weak
/* 80139BA8 00136AE8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80139BAC 00136AEC  54 80 10 3A */	slwi r0, r4, 2
/* 80139BB0 00136AF0  7C 63 02 14 */	add r3, r3, r0
/* 80139BB4 00136AF4  4E 80 00 20 */	blr 
.endfn "get__17ArrayContainer<i>FPv"

.fn "getNext__17ArrayContainer<i>FPv", weak
/* 80139BB8 00136AF8  38 64 00 01 */	addi r3, r4, 1
/* 80139BBC 00136AFC  4E 80 00 20 */	blr 
.endfn "getNext__17ArrayContainer<i>FPv"

.fn "getStart__17ArrayContainer<i>Fv", weak
/* 80139BC0 00136B00  38 60 00 00 */	li r3, 0
/* 80139BC4 00136B04  4E 80 00 20 */	blr 
.endfn "getStart__17ArrayContainer<i>Fv"

.fn "getEnd__17ArrayContainer<i>Fv", weak
/* 80139BC8 00136B08  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80139BCC 00136B0C  4E 80 00 20 */	blr 
.endfn "getEnd__17ArrayContainer<i>Fv"

.fn "getAt__17ArrayContainer<i>Fi", weak
/* 80139BD0 00136B10  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80139BD4 00136B14  54 80 10 3A */	slwi r0, r4, 2
/* 80139BD8 00136B18  7C 63 02 14 */	add r3, r3, r0
/* 80139BDC 00136B1C  4E 80 00 20 */	blr 
.endfn "getAt__17ArrayContainer<i>Fi"

.fn "getTo__17ArrayContainer<i>Fv", weak
/* 80139BE0 00136B20  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80139BE4 00136B24  4E 80 00 20 */	blr 
.endfn "getTo__17ArrayContainer<i>Fv"

.fn "getObject__23Container<10Vector3<f>>FPv", weak
/* 80139BE8 00136B28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139BEC 00136B2C  7C 08 02 A6 */	mflr r0
/* 80139BF0 00136B30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139BF4 00136B34  81 83 00 00 */	lwz r12, 0(r3)
/* 80139BF8 00136B38  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80139BFC 00136B3C  7D 89 03 A6 */	mtctr r12
/* 80139C00 00136B40  4E 80 04 21 */	bctrl 
/* 80139C04 00136B44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139C08 00136B48  7C 08 03 A6 */	mtlr r0
/* 80139C0C 00136B4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80139C10 00136B50  4E 80 00 20 */	blr 
.endfn "getObject__23Container<10Vector3<f>>FPv"

.fn "getAt__23Container<10Vector3<f>>Fi", weak
/* 80139C14 00136B54  38 60 00 00 */	li r3, 0
/* 80139C18 00136B58  4E 80 00 20 */	blr 
.endfn "getAt__23Container<10Vector3<f>>Fi"

.fn "getTo__23Container<10Vector3<f>>Fv", weak
/* 80139C1C 00136B5C  38 60 00 00 */	li r3, 0
/* 80139C20 00136B60  4E 80 00 20 */	blr 
.endfn "getTo__23Container<10Vector3<f>>Fv"

.fn "getObject__12Container<i>FPv", weak
/* 80139C24 00136B64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139C28 00136B68  7C 08 02 A6 */	mflr r0
/* 80139C2C 00136B6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139C30 00136B70  81 83 00 00 */	lwz r12, 0(r3)
/* 80139C34 00136B74  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80139C38 00136B78  7D 89 03 A6 */	mtctr r12
/* 80139C3C 00136B7C  4E 80 04 21 */	bctrl 
/* 80139C40 00136B80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139C44 00136B84  7C 08 03 A6 */	mtlr r0
/* 80139C48 00136B88  38 21 00 10 */	addi r1, r1, 0x10
/* 80139C4C 00136B8C  4E 80 00 20 */	blr 
.endfn "getObject__12Container<i>FPv"

.fn "getAt__12Container<i>Fi", weak
/* 80139C50 00136B90  38 60 00 00 */	li r3, 0
/* 80139C54 00136B94  4E 80 00 20 */	blr 
.endfn "getAt__12Container<i>Fi"

.fn "getTo__12Container<i>Fv", weak
/* 80139C58 00136B98  38 60 00 00 */	li r3, 0
/* 80139C5C 00136B9C  4E 80 00 20 */	blr 
.endfn "getTo__12Container<i>Fv"
