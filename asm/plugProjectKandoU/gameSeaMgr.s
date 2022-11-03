.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_gameSeaMgr_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8047F958
lbl_8047F958:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global lbl_8047F964
lbl_8047F964:
	.4byte 0x67616D65
	.4byte 0x5365614D
	.4byte 0x67722E63
	.4byte 0x70700000
.global lbl_8047F974
lbl_8047F974:
	.4byte 0x82DC82F1
	.4byte 0x82BE2120
	.4byte 0x73746172
	.4byte 0x7455700A
	.4byte 0x00000000
.global lbl_8047F988
lbl_8047F988:
	.4byte 0x66627465
	.4byte 0x785F6475
	.4byte 0x6D6D7900
	.4byte 0x75736572
	.4byte 0x2F4B616E
	.4byte 0x646F2F6D
	.4byte 0x61702F77
	.4byte 0x61746572
	.4byte 0x626F782E
	.4byte 0x737A7300
	.4byte 0x75736572
	.4byte 0x2F4B616E
	.4byte 0x646F2F6D
	.4byte 0x61702F77
	.4byte 0x61746572
	.4byte 0x626F7832
	.4byte 0x702E737A
	.4byte 0x73000000
	.asciz "P2Assert"
	.skip 3
	.4byte 0x31303078
	.4byte 0x3130302F
	.4byte 0x6D697A75
	.4byte 0x31303078
	.4byte 0x3130302E
	.4byte 0x626D6400
	.4byte 0x32702F32
	.4byte 0x702E626D
	.4byte 0x64000000
	.4byte 0x31303078
	.4byte 0x3130302F
	.4byte 0x6D697A75
	.4byte 0x31303078
	.4byte 0x3130302E
	.4byte 0x62746B00
	.4byte 0x32702F32
	.4byte 0x702E6274
	.4byte 0x6B000000
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804B57A8
lbl_804B57A8:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q24Game6SeaMgr
__vt__Q24Game6SeaMgr:
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game6SeaMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8WaterBox>FPv"
	.4byte "getNext__31NodeObjectMgr<Q24Game8WaterBox>FPv"
	.4byte "getStart__31NodeObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "getEnd__31NodeObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "get__31NodeObjectMgr<Q24Game8WaterBox>FPv"
	.4byte "getAt__27Container<Q24Game8WaterBox>Fi"
	.4byte "getTo__27Container<Q24Game8WaterBox>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "@28@doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "@28@doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
	.4byte "@28@doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "@28@doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
	.4byte "@28@doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
	.4byte "doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
	.4byte "doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
	.4byte "resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"
.global "__vt__29TObjectNode<Q24Game8WaterBox>"
"__vt__29TObjectNode<Q24Game8WaterBox>":
	.4byte 0
	.4byte 0
	.4byte "__dt__29TObjectNode<Q24Game8WaterBox>Fv"
	.4byte getChildCount__5CNodeFv
.global "__vt__31NodeObjectMgr<Q24Game8WaterBox>"
"__vt__31NodeObjectMgr<Q24Game8WaterBox>":
	.4byte 0
	.4byte 0
	.4byte "__dt__31NodeObjectMgr<Q24Game8WaterBox>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8WaterBox>FPv"
	.4byte "getNext__31NodeObjectMgr<Q24Game8WaterBox>FPv"
	.4byte "getStart__31NodeObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "getEnd__31NodeObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "get__31NodeObjectMgr<Q24Game8WaterBox>FPv"
	.4byte "getAt__27Container<Q24Game8WaterBox>Fi"
	.4byte "getTo__27Container<Q24Game8WaterBox>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "@28@doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "@28@doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
	.4byte "@28@doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "@28@doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
	.4byte "@28@doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
	.4byte "doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
	.4byte "doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
	.4byte "resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"
.global "__vt__27ObjectMgr<Q24Game8WaterBox>"
"__vt__27ObjectMgr<Q24Game8WaterBox>":
	.4byte 0
	.4byte 0
	.4byte "__dt__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8WaterBox>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__27Container<Q24Game8WaterBox>Fi"
	.4byte "getTo__27Container<Q24Game8WaterBox>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "@28@doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "@28@doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
	.4byte "@28@doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "@28@doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
	.4byte "@28@doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
	.4byte "doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
	.4byte "doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
	.4byte "doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
.global "__vt__27Container<Q24Game8WaterBox>"
"__vt__27Container<Q24Game8WaterBox>":
	.4byte 0
	.4byte 0
	.4byte "__dt__27Container<Q24Game8WaterBox>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8WaterBox>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__27Container<Q24Game8WaterBox>Fi"
	.4byte "getTo__27Container<Q24Game8WaterBox>Fv"
.global __vt__Q24Game12AABBWaterBox
__vt__Q24Game12AABBWaterBox:
	.4byte 0
	.4byte 0
	.4byte inWater__Q24Game12AABBWaterBoxFRQ23Sys6Sphere
	.4byte inWater2d__Q24Game12AABBWaterBoxFRQ23Sys6Sphere
	.4byte getSeaLevel__Q24Game12AABBWaterBoxFv
	.4byte getSeaHeightPtr__Q24Game12AABBWaterBoxFv
	.4byte update__Q24Game12AABBWaterBoxFv
	.4byte startDown__Q24Game12AABBWaterBoxFf
	.4byte startUp__Q24Game12AABBWaterBoxFf
	.4byte directDraw__Q24Game12AABBWaterBoxFR8Graphics
	.4byte doAnimation__Q24Game12AABBWaterBoxFv
	.4byte doEntry__Q24Game12AABBWaterBoxFv
	.4byte doSetView__Q24Game12AABBWaterBoxFi
	.4byte doViewCalc__Q24Game12AABBWaterBoxFv
	.4byte doSimulation__Q24Game8WaterBoxFf
	.4byte doDirectDraw__Q24Game8WaterBoxFR8Graphics
	.4byte attachModel__Q24Game12AABBWaterBoxFP12J3DModelDataPQ23Sys15MatTexAnimationf
	.4byte calcMatrix__Q24Game12AABBWaterBoxFv
.global __vt__Q24Game8WaterBox
__vt__Q24Game8WaterBox:
	.4byte 0
	.4byte 0
	.4byte inWater__Q24Game8WaterBoxFRQ23Sys6Sphere
	.4byte inWater2d__Q24Game8WaterBoxFRQ23Sys6Sphere
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte startDown__Q24Game8WaterBoxFf
	.4byte startUp__Q24Game8WaterBoxFf
	.4byte directDraw__Q24Game8WaterBoxFR8Graphics
	.4byte doAnimation__Q24Game8WaterBoxFv
	.4byte doEntry__Q24Game8WaterBoxFv
	.4byte doSetView__Q24Game8WaterBoxFi
	.4byte doViewCalc__Q24Game8WaterBoxFv
	.4byte doSimulation__Q24Game8WaterBoxFf
	.4byte doDirectDraw__Q24Game8WaterBoxFR8Graphics
	.4byte attachModel__Q24Game8WaterBoxFP12J3DModelDataPQ23Sys15MatTexAnimationf
	.4byte calcMatrix__Q24Game8WaterBoxFv
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515A50
lbl_80515A50:
	.skip 0x4
.global lbl_80515A54
lbl_80515A54:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80519320
lbl_80519320:
	.4byte 0x47000000
.global lbl_80519324
lbl_80519324:
	.4byte 0xC7000000
.global lbl_80519328
lbl_80519328:
	.4byte 0x00000000
.global lbl_8051932C
lbl_8051932C:
	.4byte 0x40A00000
.global lbl_80519330
lbl_80519330:
	.float 0.5
.global lbl_80519334
lbl_80519334:
	.float 1.0
.global lbl_80519338
lbl_80519338:
	.4byte 0x41F00000
.global lbl_8051933C
lbl_8051933C:
	.4byte 0x40400000
.global lbl_80519340
lbl_80519340:
	.4byte 0x447A0000
.global lbl_80519344
lbl_80519344:
	.4byte 0x42C80000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global startDown__Q24Game12AABBWaterBoxFf
startDown__Q24Game12AABBWaterBoxFf:
/* 801AE448 001AB388  A0 03 00 08 */	lhz r0, 8(r3)
/* 801AE44C 001AB38C  28 00 00 00 */	cmplwi r0, 0
/* 801AE450 001AB390  4C 82 00 20 */	bnelr 
/* 801AE454 001AB394  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 801AE458 001AB398  38 00 00 01 */	li r0, 1
/* 801AE45C 001AB39C  C0 02 AF C8 */	lfs f0, lbl_80519328@sda21(r2)
/* 801AE460 001AB3A0  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 801AE464 001AB3A4  B0 03 00 08 */	sth r0, 8(r3)
/* 801AE468 001AB3A8  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 801AE46C 001AB3AC  4E 80 00 20 */	blr 

.global startUp__Q24Game12AABBWaterBoxFf
startUp__Q24Game12AABBWaterBoxFf:
/* 801AE470 001AB3B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AE474 001AB3B4  7C 08 02 A6 */	mflr r0
/* 801AE478 001AB3B8  3C 60 80 48 */	lis r3, lbl_8047F964@ha
/* 801AE47C 001AB3BC  3C A0 80 48 */	lis r5, lbl_8047F974@ha
/* 801AE480 001AB3C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AE484 001AB3C4  38 63 F9 64 */	addi r3, r3, lbl_8047F964@l
/* 801AE488 001AB3C8  38 80 00 A7 */	li r4, 0xa7
/* 801AE48C 001AB3CC  38 A5 F9 74 */	addi r5, r5, lbl_8047F974@l
/* 801AE490 001AB3D0  4C C6 31 82 */	crclr 6
/* 801AE494 001AB3D4  4B E7 C1 AD */	bl panic_f__12JUTExceptionFPCciPCce
/* 801AE498 001AB3D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AE49C 001AB3DC  7C 08 03 A6 */	mtlr r0
/* 801AE4A0 001AB3E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801AE4A4 001AB3E4  4E 80 00 20 */	blr 

.global update__Q24Game12AABBWaterBoxFv
update__Q24Game12AABBWaterBoxFv:
/* 801AE4A8 001AB3E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AE4AC 001AB3EC  7C 08 02 A6 */	mflr r0
/* 801AE4B0 001AB3F0  7C 64 1B 78 */	mr r4, r3
/* 801AE4B4 001AB3F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AE4B8 001AB3F8  A0 03 00 08 */	lhz r0, 8(r3)
/* 801AE4BC 001AB3FC  2C 00 00 01 */	cmpwi r0, 1
/* 801AE4C0 001AB400  41 82 00 08 */	beq .L_801AE4C8
/* 801AE4C4 001AB404  48 00 00 78 */	b .L_801AE53C
.L_801AE4C8:
/* 801AE4C8 001AB408  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801AE4CC 001AB40C  C0 64 00 38 */	lfs f3, 0x38(r4)
/* 801AE4D0 001AB410  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 801AE4D4 001AB414  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 801AE4D8 001AB418  C0 42 AF CC */	lfs f2, lbl_8051932C@sda21(r2)
/* 801AE4DC 001AB41C  EC 03 00 7C */	fnmsubs f0, f3, f1, f0
/* 801AE4E0 001AB420  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 801AE4E4 001AB424  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801AE4E8 001AB428  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 801AE4EC 001AB42C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 801AE4F0 001AB430  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 801AE4F4 001AB434  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 801AE4F8 001AB438  C0 24 00 30 */	lfs f1, 0x30(r4)
/* 801AE4FC 001AB43C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 801AE500 001AB440  EC 01 00 2A */	fadds f0, f1, f0
/* 801AE504 001AB444  D0 04 00 34 */	stfs f0, 0x34(r4)
/* 801AE508 001AB448  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 801AE50C 001AB44C  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 801AE510 001AB450  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801AE514 001AB454  4C 40 13 82 */	cror 2, 0, 2
/* 801AE518 001AB458  40 82 00 24 */	bne .L_801AE53C
/* 801AE51C 001AB45C  D0 24 00 0C */	stfs f1, 0xc(r4)
/* 801AE520 001AB460  38 00 00 03 */	li r0, 3
/* 801AE524 001AB464  B0 04 00 08 */	sth r0, 8(r4)
/* 801AE528 001AB468  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801AE52C 001AB46C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801AE530 001AB470  48 00 1D B1 */	bl "delNode__31NodeObjectMgr<Q24Game8WaterBox>FPQ24Game8WaterBox"
/* 801AE534 001AB474  38 60 00 01 */	li r3, 1
/* 801AE538 001AB478  48 00 00 18 */	b .L_801AE550
.L_801AE53C:
/* 801AE53C 001AB47C  C0 24 00 30 */	lfs f1, 0x30(r4)
/* 801AE540 001AB480  38 60 00 00 */	li r3, 0
/* 801AE544 001AB484  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 801AE548 001AB488  EC 01 00 2A */	fadds f0, f1, f0
/* 801AE54C 001AB48C  D0 04 00 34 */	stfs f0, 0x34(r4)
.L_801AE550:
/* 801AE550 001AB490  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AE554 001AB494  7C 08 03 A6 */	mtlr r0
/* 801AE558 001AB498  38 21 00 10 */	addi r1, r1, 0x10
/* 801AE55C 001AB49C  4E 80 00 20 */	blr 

.global attachModel__Q24Game12AABBWaterBoxFP12J3DModelDataPQ23Sys15MatTexAnimationf
attachModel__Q24Game12AABBWaterBoxFP12J3DModelDataPQ23Sys15MatTexAnimationf:
/* 801AE560 001AB4A0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801AE564 001AB4A4  7C 08 02 A6 */	mflr r0
/* 801AE568 001AB4A8  90 01 00 34 */	stw r0, 0x34(r1)
/* 801AE56C 001AB4AC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801AE570 001AB4B0  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 801AE574 001AB4B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801AE578 001AB4B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801AE57C 001AB4BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801AE580 001AB4C0  7C 7F 1B 78 */	mr r31, r3
/* 801AE584 001AB4C4  38 00 FF FF */	li r0, -1
/* 801AE588 001AB4C8  B0 03 00 64 */	sth r0, 0x64(r3)
/* 801AE58C 001AB4CC  38 00 00 00 */	li r0, 0
/* 801AE590 001AB4D0  FF E0 08 90 */	fmr f31, f1
/* 801AE594 001AB4D4  7C 9E 23 78 */	mr r30, r4
/* 801AE598 001AB4D8  90 03 00 60 */	stw r0, 0x60(r3)
/* 801AE59C 001AB4DC  7C BD 2B 78 */	mr r29, r5
/* 801AE5A0 001AB4E0  38 60 00 14 */	li r3, 0x14
/* 801AE5A4 001AB4E4  4B E7 59 01 */	bl __nw__FUl
/* 801AE5A8 001AB4E8  7C 60 1B 79 */	or. r0, r3, r3
/* 801AE5AC 001AB4EC  41 82 00 18 */	beq .L_801AE5C4
/* 801AE5B0 001AB4F0  7F C4 F3 78 */	mr r4, r30
/* 801AE5B4 001AB4F4  38 A0 00 00 */	li r5, 0
/* 801AE5B8 001AB4F8  38 C0 00 02 */	li r6, 2
/* 801AE5BC 001AB4FC  48 28 FC 1D */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801AE5C0 001AB500  7C 60 1B 78 */	mr r0, r3
.L_801AE5C4:
/* 801AE5C4 001AB504  90 1F 00 50 */	stw r0, 0x50(r31)
/* 801AE5C8 001AB508  38 00 00 01 */	li r0, 1
/* 801AE5CC 001AB50C  C0 42 AF D0 */	lfs f2, lbl_80519330@sda21(r2)
/* 801AE5D0 001AB510  38 7F 00 54 */	addi r3, r31, 0x54
/* 801AE5D4 001AB514  80 BF 00 50 */	lwz r5, 0x50(r31)
/* 801AE5D8 001AB518  7F A4 EB 78 */	mr r4, r29
/* 801AE5DC 001AB51C  98 05 00 04 */	stb r0, 4(r5)
/* 801AE5E0 001AB520  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 801AE5E4 001AB524  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 801AE5E8 001AB528  EC 01 00 28 */	fsubs f0, f1, f0
/* 801AE5EC 001AB52C  FC 00 02 10 */	fabs f0, f0
/* 801AE5F0 001AB530  FC 00 00 18 */	frsp f0, f0
/* 801AE5F4 001AB534  EC 00 F8 24 */	fdivs f0, f0, f31
/* 801AE5F8 001AB538  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 801AE5FC 001AB53C  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 801AE600 001AB540  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 801AE604 001AB544  EC 01 00 28 */	fsubs f0, f1, f0
/* 801AE608 001AB548  FC 00 02 10 */	fabs f0, f0
/* 801AE60C 001AB54C  FC 00 00 18 */	frsp f0, f0
/* 801AE610 001AB550  EC 00 F8 24 */	fdivs f0, f0, f31
/* 801AE614 001AB554  D0 1F 00 40 */	stfs f0, 0x40(r31)
/* 801AE618 001AB558  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 801AE61C 001AB55C  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 801AE620 001AB560  EC 01 00 2A */	fadds f0, f1, f0
/* 801AE624 001AB564  EC 02 00 32 */	fmuls f0, f2, f0
/* 801AE628 001AB568  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 801AE62C 001AB56C  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 801AE630 001AB570  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 801AE634 001AB574  EC 01 00 2A */	fadds f0, f1, f0
/* 801AE638 001AB578  EC 02 00 32 */	fmuls f0, f2, f0
/* 801AE63C 001AB57C  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 801AE640 001AB580  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 801AE644 001AB584  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 801AE648 001AB588  EC 01 00 2A */	fadds f0, f1, f0
/* 801AE64C 001AB58C  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 801AE650 001AB590  81 9F 00 54 */	lwz r12, 0x54(r31)
/* 801AE654 001AB594  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AE658 001AB598  7D 89 03 A6 */	mtctr r12
/* 801AE65C 001AB59C  4E 80 04 21 */	bctrl 
/* 801AE660 001AB5A0  7F E3 FB 78 */	mr r3, r31
/* 801AE664 001AB5A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801AE668 001AB5A8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801AE66C 001AB5AC  7D 89 03 A6 */	mtctr r12
/* 801AE670 001AB5B0  4E 80 04 21 */	bctrl 
/* 801AE674 001AB5B4  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 801AE678 001AB5B8  3C 60 80 48 */	lis r3, lbl_8047F988@ha
/* 801AE67C 001AB5BC  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 801AE680 001AB5C0  3B C3 F9 88 */	addi r30, r3, lbl_8047F988@l
/* 801AE684 001AB5C4  3B A0 00 00 */	li r29, 0
/* 801AE688 001AB5C8  EC 01 00 2A */	fadds f0, f1, f0
/* 801AE68C 001AB5CC  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 801AE690 001AB5D0  48 00 00 3C */	b .L_801AE6CC
.L_801AE694:
/* 801AE694 001AB5D4  80 65 00 70 */	lwz r3, 0x70(r5)
/* 801AE698 001AB5D8  7F A4 EB 78 */	mr r4, r29
/* 801AE69C 001AB5DC  4B E8 07 81 */	bl getName__10JUTNameTabCFUs
/* 801AE6A0 001AB5E0  7F C4 F3 78 */	mr r4, r30
/* 801AE6A4 001AB5E4  4B F1 C0 1D */	bl strcmp
/* 801AE6A8 001AB5E8  2C 03 00 00 */	cmpwi r3, 0
/* 801AE6AC 001AB5EC  40 82 00 1C */	bne .L_801AE6C8
/* 801AE6B0 001AB5F0  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AE6B4 001AB5F4  80 63 00 08 */	lwz r3, 8(r3)
/* 801AE6B8 001AB5F8  80 63 00 04 */	lwz r3, 4(r3)
/* 801AE6BC 001AB5FC  80 03 00 6C */	lwz r0, 0x6c(r3)
/* 801AE6C0 001AB600  90 1F 00 60 */	stw r0, 0x60(r31)
/* 801AE6C4 001AB604  B3 BF 00 64 */	sth r29, 0x64(r31)
.L_801AE6C8:
/* 801AE6C8 001AB608  3B BD 00 01 */	addi r29, r29, 1
.L_801AE6CC:
/* 801AE6CC 001AB60C  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AE6D0 001AB610  57 A4 04 3E */	clrlwi r4, r29, 0x10
/* 801AE6D4 001AB614  80 63 00 08 */	lwz r3, 8(r3)
/* 801AE6D8 001AB618  80 A3 00 04 */	lwz r5, 4(r3)
/* 801AE6DC 001AB61C  80 65 00 6C */	lwz r3, 0x6c(r5)
/* 801AE6E0 001AB620  A0 03 00 00 */	lhz r0, 0(r3)
/* 801AE6E4 001AB624  7C 04 00 40 */	cmplw r4, r0
/* 801AE6E8 001AB628  41 80 FF AC */	blt .L_801AE694
/* 801AE6EC 001AB62C  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 801AE6F0 001AB630  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801AE6F4 001AB634  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801AE6F8 001AB638  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801AE6FC 001AB63C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801AE700 001AB640  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801AE704 001AB644  7C 08 03 A6 */	mtlr r0
/* 801AE708 001AB648  38 21 00 30 */	addi r1, r1, 0x30
/* 801AE70C 001AB64C  4E 80 00 20 */	blr 

.global calcMatrix__Q24Game12AABBWaterBoxFv
calcMatrix__Q24Game12AABBWaterBoxFv:
/* 801AE710 001AB650  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801AE714 001AB654  7C 08 02 A6 */	mflr r0
/* 801AE718 001AB658  90 01 00 54 */	stw r0, 0x54(r1)
/* 801AE71C 001AB65C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801AE720 001AB660  7C 7F 1B 78 */	mr r31, r3
/* 801AE724 001AB664  80 03 00 50 */	lwz r0, 0x50(r3)
/* 801AE728 001AB668  28 00 00 00 */	cmplwi r0, 0
/* 801AE72C 001AB66C  41 82 00 70 */	beq .L_801AE79C
/* 801AE730 001AB670  C0 5F 00 30 */	lfs f2, 0x30(r31)
/* 801AE734 001AB674  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801AE738 001AB678  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 801AE73C 001AB67C  38 A3 41 E4 */	addi r5, r3, "zero__10Vector3<f>"@l
/* 801AE740 001AB680  C0 02 AF D4 */	lfs f0, lbl_80519334@sda21(r2)
/* 801AE744 001AB684  38 61 00 14 */	addi r3, r1, 0x14
/* 801AE748 001AB688  EC 22 08 2A */	fadds f1, f2, f1
/* 801AE74C 001AB68C  38 81 00 08 */	addi r4, r1, 8
/* 801AE750 001AB690  38 DF 00 44 */	addi r6, r31, 0x44
/* 801AE754 001AB694  D0 3F 00 48 */	stfs f1, 0x48(r31)
/* 801AE758 001AB698  C0 5F 00 40 */	lfs f2, 0x40(r31)
/* 801AE75C 001AB69C  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 801AE760 001AB6A0  D0 21 00 08 */	stfs f1, 8(r1)
/* 801AE764 001AB6A4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801AE768 001AB6A8  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 801AE76C 001AB6AC  48 27 9B 6D */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 801AE770 001AB6B0  80 9F 00 50 */	lwz r4, 0x50(r31)
/* 801AE774 001AB6B4  38 61 00 14 */	addi r3, r1, 0x14
/* 801AE778 001AB6B8  80 84 00 08 */	lwz r4, 8(r4)
/* 801AE77C 001AB6BC  38 84 00 24 */	addi r4, r4, 0x24
/* 801AE780 001AB6C0  4B F3 BB 4D */	bl PSMTXCopy
/* 801AE784 001AB6C4  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AE788 001AB6C8  80 63 00 08 */	lwz r3, 8(r3)
/* 801AE78C 001AB6CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AE790 001AB6D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AE794 001AB6D4  7D 89 03 A6 */	mtctr r12
/* 801AE798 001AB6D8  4E 80 04 21 */	bctrl 
.L_801AE79C:
/* 801AE79C 001AB6DC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801AE7A0 001AB6E0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801AE7A4 001AB6E4  7C 08 03 A6 */	mtlr r0
/* 801AE7A8 001AB6E8  38 21 00 50 */	addi r1, r1, 0x50
/* 801AE7AC 001AB6EC  4E 80 00 20 */	blr 

.global doAnimation__Q24Game12AABBWaterBoxFv
doAnimation__Q24Game12AABBWaterBoxFv:
/* 801AE7B0 001AB6F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AE7B4 001AB6F4  7C 08 02 A6 */	mflr r0
/* 801AE7B8 001AB6F8  C0 22 AF D8 */	lfs f1, lbl_80519338@sda21(r2)
/* 801AE7BC 001AB6FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AE7C0 001AB700  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801AE7C4 001AB704  7C 7F 1B 78 */	mr r31, r3
/* 801AE7C8 001AB708  38 7F 00 54 */	addi r3, r31, 0x54
/* 801AE7CC 001AB70C  48 28 5D 81 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 801AE7D0 001AB710  7F E3 FB 78 */	mr r3, r31
/* 801AE7D4 001AB714  81 9F 00 00 */	lwz r12, 0(r31)
/* 801AE7D8 001AB718  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801AE7DC 001AB71C  7D 89 03 A6 */	mtctr r12
/* 801AE7E0 001AB720  4E 80 04 21 */	bctrl 
/* 801AE7E4 001AB724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AE7E8 001AB728  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801AE7EC 001AB72C  7C 08 03 A6 */	mtlr r0
/* 801AE7F0 001AB730  38 21 00 10 */	addi r1, r1, 0x10
/* 801AE7F4 001AB734  4E 80 00 20 */	blr 

.global doSetView__Q24Game12AABBWaterBoxFi
doSetView__Q24Game12AABBWaterBoxFi:
/* 801AE7F8 001AB738  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AE7FC 001AB73C  7C 08 02 A6 */	mflr r0
/* 801AE800 001AB740  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AE804 001AB744  80 63 00 50 */	lwz r3, 0x50(r3)
/* 801AE808 001AB748  28 03 00 00 */	cmplwi r3, 0
/* 801AE80C 001AB74C  41 82 00 0C */	beq .L_801AE818
/* 801AE810 001AB750  54 84 04 3E */	clrlwi r4, r4, 0x10
/* 801AE814 001AB754  48 29 08 AD */	bl setCurrentViewNo__Q28SysShape5ModelFUl
.L_801AE818:
/* 801AE818 001AB758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AE81C 001AB75C  7C 08 03 A6 */	mtlr r0
/* 801AE820 001AB760  38 21 00 10 */	addi r1, r1, 0x10
/* 801AE824 001AB764  4E 80 00 20 */	blr 

.global doViewCalc__Q24Game12AABBWaterBoxFv
doViewCalc__Q24Game12AABBWaterBoxFv:
/* 801AE828 001AB768  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AE82C 001AB76C  7C 08 02 A6 */	mflr r0
/* 801AE830 001AB770  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AE834 001AB774  80 63 00 50 */	lwz r3, 0x50(r3)
/* 801AE838 001AB778  28 03 00 00 */	cmplwi r3, 0
/* 801AE83C 001AB77C  41 82 00 08 */	beq .L_801AE844
/* 801AE840 001AB780  48 29 08 19 */	bl viewCalc__Q28SysShape5ModelFv
.L_801AE844:
/* 801AE844 001AB784  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AE848 001AB788  7C 08 03 A6 */	mtlr r0
/* 801AE84C 001AB78C  38 21 00 10 */	addi r1, r1, 0x10
/* 801AE850 001AB790  4E 80 00 20 */	blr 

.if version == 1
.global doEntry__Q24Game12AABBWaterBoxFv
doEntry__Q24Game12AABBWaterBoxFv:
/* 801AE854 001AB794  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801AE858 001AB798  7C 08 02 A6 */	mflr r0
/* 801AE85C 001AB79C  90 01 00 84 */	stw r0, 0x84(r1)
/* 801AE860 001AB7A0  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 801AE864 001AB7A4  7C 7F 1B 78 */	mr r31, r3
/* 801AE868 001AB7A8  93 C1 00 78 */	stw r30, 0x78(r1)
/* 801AE86C 001AB7AC  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801AE870 001AB7B0  28 04 00 00 */	cmplwi r4, 0
/* 801AE874 001AB7B4  41 82 00 A0 */	beq .L_801AE914
/* 801AE878 001AB7B8  80 64 00 44 */	lwz r3, 0x44(r4)
/* 801AE87C 001AB7BC  2C 03 00 00 */	cmpwi r3, 0
/* 801AE880 001AB7C0  41 82 00 94 */	beq .L_801AE914
/* 801AE884 001AB7C4  2C 03 00 04 */	cmpwi r3, 4
/* 801AE888 001AB7C8  41 82 00 8C */	beq .L_801AE914
/* 801AE88C 001AB7CC  2C 03 00 02 */	cmpwi r3, 2
/* 801AE890 001AB7D0  38 00 00 00 */	li r0, 0
/* 801AE894 001AB7D4  41 82 00 0C */	beq .L_801AE8A0
/* 801AE898 001AB7D8  2C 03 00 03 */	cmpwi r3, 3
/* 801AE89C 001AB7DC  40 82 00 08 */	bne .L_801AE8A4
.L_801AE8A0:
/* 801AE8A0 001AB7E0  38 00 00 01 */	li r0, 1
.L_801AE8A4:
/* 801AE8A4 001AB7E4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801AE8A8 001AB7E8  41 82 00 24 */	beq .L_801AE8CC
/* 801AE8AC 001AB7EC  2C 03 00 01 */	cmpwi r3, 1
/* 801AE8B0 001AB7F0  38 00 00 00 */	li r0, 0
/* 801AE8B4 001AB7F4  41 82 00 0C */	beq .L_801AE8C0
/* 801AE8B8 001AB7F8  2C 03 00 03 */	cmpwi r3, 3
/* 801AE8BC 001AB7FC  40 82 00 08 */	bne .L_801AE8C4
.L_801AE8C0:
/* 801AE8C0 001AB800  38 00 00 01 */	li r0, 1
.L_801AE8C4:
/* 801AE8C4 001AB804  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801AE8C8 001AB808  41 82 00 4C */	beq .L_801AE914
.L_801AE8CC:
/* 801AE8CC 001AB80C  28 04 00 00 */	cmplwi r4, 0
/* 801AE8D0 001AB810  41 82 04 A4 */	beq .L_801AED74
/* 801AE8D4 001AB814  7C 83 23 78 */	mr r3, r4
/* 801AE8D8 001AB818  38 80 00 04 */	li r4, 4
/* 801AE8DC 001AB81C  48 00 67 65 */	bl setDrawBuffer__Q24Game10GameSystemFi
/* 801AE8E0 001AB820  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AE8E4 001AB824  80 63 00 08 */	lwz r3, 8(r3)
/* 801AE8E8 001AB828  81 83 00 00 */	lwz r12, 0(r3)
/* 801AE8EC 001AB82C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AE8F0 001AB830  7D 89 03 A6 */	mtctr r12
/* 801AE8F4 001AB834  4E 80 04 21 */	bctrl 
/* 801AE8F8 001AB838  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AE8FC 001AB83C  80 63 00 08 */	lwz r3, 8(r3)
/* 801AE900 001AB840  81 83 00 00 */	lwz r12, 0(r3)
/* 801AE904 001AB844  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801AE908 001AB848  7D 89 03 A6 */	mtctr r12
/* 801AE90C 001AB84C  4E 80 04 21 */	bctrl 
/* 801AE910 001AB850  48 00 04 64 */	b .L_801AED74
.L_801AE914:
/* 801AE914 001AB854  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801AE918 001AB858  2C 00 00 00 */	cmpwi r0, 0
/* 801AE91C 001AB85C  40 82 02 04 */	bne .L_801AEB20
/* 801AE920 001AB860  83 C4 00 58 */	lwz r30, 0x58(r4)
/* 801AE924 001AB864  80 1E 00 E4 */	lwz r0, 0x104(r30)
/* 801AE928 001AB868  2C 00 00 02 */	cmpwi r0, 2
/* 801AE92C 001AB86C  40 82 01 F4 */	bne .L_801AEB20
/* 801AE930 001AB870  28 04 00 00 */	cmplwi r4, 0
/* 801AE934 001AB874  41 82 04 40 */	beq .L_801AED74
/* 801AE938 001AB878  7C 83 23 78 */	mr r3, r4
/* 801AE93C 001AB87C  38 80 00 04 */	li r4, 4
/* 801AE940 001AB880  48 00 67 01 */	bl setDrawBuffer__Q24Game10GameSystemFi
/* 801AE944 001AB884  38 61 00 48 */	addi r3, r1, 0x48
/* 801AE948 001AB888  4B F3 B9 59 */	bl PSMTXIdentity
/* 801AE94C 001AB88C  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AE950 001AB890  38 80 00 03 */	li r4, 3
/* 801AE954 001AB894  80 63 00 08 */	lwz r3, 8(r3)
/* 801AE958 001AB898  80 63 00 04 */	lwz r3, 4(r3)
/* 801AE95C 001AB89C  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801AE960 001AB8A0  80 63 00 00 */	lwz r3, 0(r3)
/* 801AE964 001AB8A4  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801AE968 001AB8A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801AE96C 001AB8AC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801AE970 001AB8B0  7D 89 03 A6 */	mtctr r12
/* 801AE974 001AB8B4  4E 80 04 21 */	bctrl 
/* 801AE978 001AB8B8  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 801AE97C 001AB8BC  C0 22 AF C8 */	lfs f1, lbl_80519328@sda21(r2)
/* 801AE980 001AB8C0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801AE984 001AB8C4  C0 02 AF D4 */	lfs f0, lbl_80519334@sda21(r2)
/* 801AE988 001AB8C8  C0 41 00 4C */	lfs f2, 0x4c(r1)
/* 801AE98C 001AB8CC  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 801AE990 001AB8D0  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 801AE994 001AB8D4  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 801AE998 001AB8D8  C0 41 00 54 */	lfs f2, 0x54(r1)
/* 801AE99C 001AB8DC  D0 43 00 30 */	stfs f2, 0x30(r3)
/* 801AE9A0 001AB8E0  C0 41 00 58 */	lfs f2, 0x58(r1)
/* 801AE9A4 001AB8E4  D0 43 00 34 */	stfs f2, 0x34(r3)
/* 801AE9A8 001AB8E8  C0 41 00 5C */	lfs f2, 0x5c(r1)
/* 801AE9AC 001AB8EC  D0 43 00 38 */	stfs f2, 0x38(r3)
/* 801AE9B0 001AB8F0  C0 41 00 60 */	lfs f2, 0x60(r1)
/* 801AE9B4 001AB8F4  D0 43 00 3C */	stfs f2, 0x3c(r3)
/* 801AE9B8 001AB8F8  C0 41 00 64 */	lfs f2, 0x64(r1)
/* 801AE9BC 001AB8FC  D0 43 00 40 */	stfs f2, 0x40(r3)
/* 801AE9C0 001AB900  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 801AE9C4 001AB904  D0 43 00 44 */	stfs f2, 0x44(r3)
/* 801AE9C8 001AB908  C0 41 00 6C */	lfs f2, 0x6c(r1)
/* 801AE9CC 001AB90C  D0 43 00 48 */	stfs f2, 0x48(r3)
/* 801AE9D0 001AB910  C0 41 00 70 */	lfs f2, 0x70(r1)
/* 801AE9D4 001AB914  D0 43 00 4C */	stfs f2, 0x4c(r3)
/* 801AE9D8 001AB918  C0 41 00 74 */	lfs f2, 0x74(r1)
/* 801AE9DC 001AB91C  D0 43 00 50 */	stfs f2, 0x50(r3)
/* 801AE9E0 001AB920  D0 23 00 5C */	stfs f1, 0x5c(r3)
/* 801AE9E4 001AB924  D0 23 00 58 */	stfs f1, 0x58(r3)
/* 801AE9E8 001AB928  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 801AE9EC 001AB92C  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 801AE9F0 001AB930  80 9E 00 F4 */	lwz r4, 0x114(r30)
/* 801AE9F4 001AB934  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 801AE9F8 001AB938  A8 1F 00 64 */	lha r0, 0x64(r31)
/* 801AE9FC 001AB93C  80 84 00 20 */	lwz r4, 0x20(r4)
/* 801AEA00 001AB940  80 C3 00 04 */	lwz r6, 4(r3)
/* 801AEA04 001AB944  54 00 2A F4 */	rlwinm r0, r0, 5, 0xb, 0x1a
/* 801AEA08 001AB948  88 A4 00 00 */	lbz r5, 0(r4)
/* 801AEA0C 001AB94C  7C C6 02 14 */	add r6, r6, r0
/* 801AEA10 001AB950  98 A6 00 00 */	stb r5, 0(r6)
/* 801AEA14 001AB954  88 A4 00 01 */	lbz r5, 1(r4)
/* 801AEA18 001AB958  98 A6 00 01 */	stb r5, 1(r6)
/* 801AEA1C 001AB95C  A0 A4 00 02 */	lhz r5, 2(r4)
/* 801AEA20 001AB960  B0 A6 00 02 */	sth r5, 2(r6)
/* 801AEA24 001AB964  A0 A4 00 04 */	lhz r5, 4(r4)
/* 801AEA28 001AB968  B0 A6 00 04 */	sth r5, 4(r6)
/* 801AEA2C 001AB96C  88 A4 00 06 */	lbz r5, 6(r4)
/* 801AEA30 001AB970  98 A6 00 06 */	stb r5, 6(r6)
/* 801AEA34 001AB974  88 A4 00 07 */	lbz r5, 7(r4)
/* 801AEA38 001AB978  98 A6 00 07 */	stb r5, 7(r6)
/* 801AEA3C 001AB97C  88 A4 00 08 */	lbz r5, 8(r4)
/* 801AEA40 001AB980  98 A6 00 08 */	stb r5, 8(r6)
/* 801AEA44 001AB984  88 A4 00 09 */	lbz r5, 9(r4)
/* 801AEA48 001AB988  98 A6 00 09 */	stb r5, 9(r6)
/* 801AEA4C 001AB98C  A0 A4 00 0A */	lhz r5, 0xa(r4)
/* 801AEA50 001AB990  B0 A6 00 0A */	sth r5, 0xa(r6)
/* 801AEA54 001AB994  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 801AEA58 001AB998  90 A6 00 0C */	stw r5, 0xc(r6)
/* 801AEA5C 001AB99C  88 A4 00 10 */	lbz r5, 0x10(r4)
/* 801AEA60 001AB9A0  98 A6 00 10 */	stb r5, 0x10(r6)
/* 801AEA64 001AB9A4  88 A4 00 11 */	lbz r5, 0x11(r4)
/* 801AEA68 001AB9A8  98 A6 00 11 */	stb r5, 0x11(r6)
/* 801AEA6C 001AB9AC  88 A4 00 12 */	lbz r5, 0x12(r4)
/* 801AEA70 001AB9B0  98 A6 00 12 */	stb r5, 0x12(r6)
/* 801AEA74 001AB9B4  88 A4 00 13 */	lbz r5, 0x13(r4)
/* 801AEA78 001AB9B8  98 A6 00 13 */	stb r5, 0x13(r6)
/* 801AEA7C 001AB9BC  88 A4 00 14 */	lbz r5, 0x14(r4)
/* 801AEA80 001AB9C0  98 A6 00 14 */	stb r5, 0x14(r6)
/* 801AEA84 001AB9C4  88 A4 00 15 */	lbz r5, 0x15(r4)
/* 801AEA88 001AB9C8  98 A6 00 15 */	stb r5, 0x15(r6)
/* 801AEA8C 001AB9CC  88 A4 00 16 */	lbz r5, 0x16(r4)
/* 801AEA90 001AB9D0  98 A6 00 16 */	stb r5, 0x16(r6)
/* 801AEA94 001AB9D4  88 A4 00 17 */	lbz r5, 0x17(r4)
/* 801AEA98 001AB9D8  98 A6 00 17 */	stb r5, 0x17(r6)
/* 801AEA9C 001AB9DC  88 A4 00 18 */	lbz r5, 0x18(r4)
/* 801AEAA0 001AB9E0  98 A6 00 18 */	stb r5, 0x18(r6)
/* 801AEAA4 001AB9E4  88 A4 00 19 */	lbz r5, 0x19(r4)
/* 801AEAA8 001AB9E8  98 A6 00 19 */	stb r5, 0x19(r6)
/* 801AEAAC 001AB9EC  A8 A4 00 1A */	lha r5, 0x1a(r4)
/* 801AEAB0 001AB9F0  B0 A6 00 1A */	sth r5, 0x1a(r6)
/* 801AEAB4 001AB9F4  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 801AEAB8 001AB9F8  90 A6 00 1C */	stw r5, 0x1c(r6)
/* 801AEABC 001AB9FC  80 A3 00 04 */	lwz r5, 4(r3)
/* 801AEAC0 001ABA00  7C C5 02 14 */	add r6, r5, r0
/* 801AEAC4 001ABA04  80 A6 00 1C */	lwz r5, 0x1c(r6)
/* 801AEAC8 001ABA08  7C A4 2A 14 */	add r5, r4, r5
/* 801AEACC 001ABA0C  7C A6 28 50 */	subf r5, r6, r5
/* 801AEAD0 001ABA10  90 A6 00 1C */	stw r5, 0x1c(r6)
/* 801AEAD4 001ABA14  80 63 00 04 */	lwz r3, 4(r3)
/* 801AEAD8 001ABA18  7C 63 02 14 */	add r3, r3, r0
/* 801AEADC 001ABA1C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801AEAE0 001ABA20  7C 04 02 14 */	add r0, r4, r0
/* 801AEAE4 001ABA24  7C 03 00 50 */	subf r0, r3, r0
/* 801AEAE8 001ABA28  90 03 00 0C */	stw r0, 0xc(r3)
/* 801AEAEC 001ABA2C  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AEAF0 001ABA30  80 63 00 08 */	lwz r3, 8(r3)
/* 801AEAF4 001ABA34  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEAF8 001ABA38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AEAFC 001ABA3C  7D 89 03 A6 */	mtctr r12
/* 801AEB00 001ABA40  4E 80 04 21 */	bctrl 
/* 801AEB04 001ABA44  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AEB08 001ABA48  80 63 00 08 */	lwz r3, 8(r3)
/* 801AEB0C 001ABA4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEB10 001ABA50  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801AEB14 001ABA54  7D 89 03 A6 */	mtctr r12
/* 801AEB18 001ABA58  4E 80 04 21 */	bctrl 
/* 801AEB1C 001ABA5C  48 00 02 58 */	b .L_801AED74
.L_801AEB20:
/* 801AEB20 001ABA60  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801AEB24 001ABA64  38 81 00 08 */	addi r4, r1, 8
/* 801AEB28 001ABA68  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801AEB2C 001ABA6C  80 63 02 5C */	lwz r3, 0x25c(r3)
/* 801AEB30 001ABA70  80 63 00 44 */	lwz r3, 0x44(r3)
/* 801AEB34 001ABA74  38 63 00 B4 */	addi r3, r3, 0xb4
/* 801AEB38 001ABA78  4B F3 C3 39 */	bl PSMTX44Copy
/* 801AEB3C 001ABA7C  C0 A1 00 38 */	lfs f5, 0x38(r1)
/* 801AEB40 001ABA80  C0 81 00 3C */	lfs f4, 0x3c(r1)
/* 801AEB44 001ABA84  C0 22 AF C8 */	lfs f1, lbl_80519328@sda21(r2)
/* 801AEB48 001ABA88  C0 61 00 40 */	lfs f3, 0x40(r1)
/* 801AEB4C 001ABA8C  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 801AEB50 001ABA90  C0 02 AF D4 */	lfs f0, lbl_80519334@sda21(r2)
/* 801AEB54 001ABA94  D0 A1 00 28 */	stfs f5, 0x28(r1)
/* 801AEB58 001ABA98  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 801AEB5C 001ABA9C  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 801AEB60 001ABAA0  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 801AEB64 001ABAA4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801AEB68 001ABAA8  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801AEB6C 001ABAAC  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 801AEB70 001ABAB0  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 801AEB74 001ABAB4  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 801AEB78 001ABAB8  28 00 00 00 */	cmplwi r0, 0
/* 801AEB7C 001ABABC  41 82 01 F8 */	beq .L_801AED74
/* 801AEB80 001ABAC0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801AEB84 001ABAC4  28 03 00 00 */	cmplwi r3, 0
/* 801AEB88 001ABAC8  41 82 01 D4 */	beq .L_801AED5C
/* 801AEB8C 001ABACC  38 80 00 04 */	li r4, 4
/* 801AEB90 001ABAD0  48 00 64 B1 */	bl setDrawBuffer__Q24Game10GameSystemFi
/* 801AEB94 001ABAD4  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AEB98 001ABAD8  80 63 00 08 */	lwz r3, 8(r3)
/* 801AEB9C 001ABADC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEBA0 001ABAE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AEBA4 001ABAE4  7D 89 03 A6 */	mtctr r12
/* 801AEBA8 001ABAE8  4E 80 04 21 */	bctrl 
/* 801AEBAC 001ABAEC  80 1F 00 60 */	lwz r0, 0x60(r31)
/* 801AEBB0 001ABAF0  28 00 00 00 */	cmplwi r0, 0
/* 801AEBB4 001ABAF4  41 82 01 A8 */	beq .L_801AED5C
/* 801AEBB8 001ABAF8  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AEBBC 001ABAFC  38 80 00 03 */	li r4, 3
/* 801AEBC0 001ABB00  80 63 00 08 */	lwz r3, 8(r3)
/* 801AEBC4 001ABB04  80 63 00 04 */	lwz r3, 4(r3)
/* 801AEBC8 001ABB08  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801AEBCC 001ABB0C  80 63 00 00 */	lwz r3, 0(r3)
/* 801AEBD0 001ABB10  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801AEBD4 001ABB14  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEBD8 001ABB18  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801AEBDC 001ABB1C  7D 89 03 A6 */	mtctr r12
/* 801AEBE0 001ABB20  4E 80 04 21 */	bctrl 
/* 801AEBE4 001ABB24  C0 01 00 08 */	lfs f0, 8(r1)
/* 801AEBE8 001ABB28  C0 22 AF C8 */	lfs f1, lbl_80519328@sda21(r2)
/* 801AEBEC 001ABB2C  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801AEBF0 001ABB30  C0 02 AF D4 */	lfs f0, lbl_80519334@sda21(r2)
/* 801AEBF4 001ABB34  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801AEBF8 001ABB38  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 801AEBFC 001ABB3C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801AEC00 001ABB40  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 801AEC04 001ABB44  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801AEC08 001ABB48  D0 43 00 30 */	stfs f2, 0x30(r3)
/* 801AEC0C 001ABB4C  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 801AEC10 001ABB50  D0 43 00 34 */	stfs f2, 0x34(r3)
/* 801AEC14 001ABB54  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 801AEC18 001ABB58  D0 43 00 38 */	stfs f2, 0x38(r3)
/* 801AEC1C 001ABB5C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 801AEC20 001ABB60  D0 43 00 3C */	stfs f2, 0x3c(r3)
/* 801AEC24 001ABB64  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 801AEC28 001ABB68  D0 43 00 40 */	stfs f2, 0x40(r3)
/* 801AEC2C 001ABB6C  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 801AEC30 001ABB70  D0 43 00 44 */	stfs f2, 0x44(r3)
/* 801AEC34 001ABB74  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 801AEC38 001ABB78  D0 43 00 48 */	stfs f2, 0x48(r3)
/* 801AEC3C 001ABB7C  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 801AEC40 001ABB80  D0 43 00 4C */	stfs f2, 0x4c(r3)
/* 801AEC44 001ABB84  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 801AEC48 001ABB88  D0 43 00 50 */	stfs f2, 0x50(r3)
/* 801AEC4C 001ABB8C  D0 23 00 5C */	stfs f1, 0x5c(r3)
/* 801AEC50 001ABB90  D0 23 00 58 */	stfs f1, 0x58(r3)
/* 801AEC54 001ABB94  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 801AEC58 001ABB98  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 801AEC5C 001ABB9C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801AEC60 001ABBA0  A8 1F 00 64 */	lha r0, 0x64(r31)
/* 801AEC64 001ABBA4  80 83 00 54 */	lwz r4, 0x54(r3)
/* 801AEC68 001ABBA8  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 801AEC6C 001ABBAC  54 00 2A F4 */	rlwinm r0, r0, 5, 0xb, 0x1a
/* 801AEC70 001ABBB0  80 84 00 20 */	lwz r4, 0x20(r4)
/* 801AEC74 001ABBB4  80 C3 00 04 */	lwz r6, 4(r3)
/* 801AEC78 001ABBB8  88 A4 00 00 */	lbz r5, 0(r4)
/* 801AEC7C 001ABBBC  7C C6 02 14 */	add r6, r6, r0
/* 801AEC80 001ABBC0  98 A6 00 00 */	stb r5, 0(r6)
/* 801AEC84 001ABBC4  88 A4 00 01 */	lbz r5, 1(r4)
/* 801AEC88 001ABBC8  98 A6 00 01 */	stb r5, 1(r6)
/* 801AEC8C 001ABBCC  A0 A4 00 02 */	lhz r5, 2(r4)
/* 801AEC90 001ABBD0  B0 A6 00 02 */	sth r5, 2(r6)
/* 801AEC94 001ABBD4  A0 A4 00 04 */	lhz r5, 4(r4)
/* 801AEC98 001ABBD8  B0 A6 00 04 */	sth r5, 4(r6)
/* 801AEC9C 001ABBDC  88 A4 00 06 */	lbz r5, 6(r4)
/* 801AECA0 001ABBE0  98 A6 00 06 */	stb r5, 6(r6)
/* 801AECA4 001ABBE4  88 A4 00 07 */	lbz r5, 7(r4)
/* 801AECA8 001ABBE8  98 A6 00 07 */	stb r5, 7(r6)
/* 801AECAC 001ABBEC  88 A4 00 08 */	lbz r5, 8(r4)
/* 801AECB0 001ABBF0  98 A6 00 08 */	stb r5, 8(r6)
/* 801AECB4 001ABBF4  88 A4 00 09 */	lbz r5, 9(r4)
/* 801AECB8 001ABBF8  98 A6 00 09 */	stb r5, 9(r6)
/* 801AECBC 001ABBFC  A0 A4 00 0A */	lhz r5, 0xa(r4)
/* 801AECC0 001ABC00  B0 A6 00 0A */	sth r5, 0xa(r6)
/* 801AECC4 001ABC04  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 801AECC8 001ABC08  90 A6 00 0C */	stw r5, 0xc(r6)
/* 801AECCC 001ABC0C  88 A4 00 10 */	lbz r5, 0x10(r4)
/* 801AECD0 001ABC10  98 A6 00 10 */	stb r5, 0x10(r6)
/* 801AECD4 001ABC14  88 A4 00 11 */	lbz r5, 0x11(r4)
/* 801AECD8 001ABC18  98 A6 00 11 */	stb r5, 0x11(r6)
/* 801AECDC 001ABC1C  88 A4 00 12 */	lbz r5, 0x12(r4)
/* 801AECE0 001ABC20  98 A6 00 12 */	stb r5, 0x12(r6)
/* 801AECE4 001ABC24  88 A4 00 13 */	lbz r5, 0x13(r4)
/* 801AECE8 001ABC28  98 A6 00 13 */	stb r5, 0x13(r6)
/* 801AECEC 001ABC2C  88 A4 00 14 */	lbz r5, 0x14(r4)
/* 801AECF0 001ABC30  98 A6 00 14 */	stb r5, 0x14(r6)
/* 801AECF4 001ABC34  88 A4 00 15 */	lbz r5, 0x15(r4)
/* 801AECF8 001ABC38  98 A6 00 15 */	stb r5, 0x15(r6)
/* 801AECFC 001ABC3C  88 A4 00 16 */	lbz r5, 0x16(r4)
/* 801AED00 001ABC40  98 A6 00 16 */	stb r5, 0x16(r6)
/* 801AED04 001ABC44  88 A4 00 17 */	lbz r5, 0x17(r4)
/* 801AED08 001ABC48  98 A6 00 17 */	stb r5, 0x17(r6)
/* 801AED0C 001ABC4C  88 A4 00 18 */	lbz r5, 0x18(r4)
/* 801AED10 001ABC50  98 A6 00 18 */	stb r5, 0x18(r6)
/* 801AED14 001ABC54  88 A4 00 19 */	lbz r5, 0x19(r4)
/* 801AED18 001ABC58  98 A6 00 19 */	stb r5, 0x19(r6)
/* 801AED1C 001ABC5C  A8 A4 00 1A */	lha r5, 0x1a(r4)
/* 801AED20 001ABC60  B0 A6 00 1A */	sth r5, 0x1a(r6)
/* 801AED24 001ABC64  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 801AED28 001ABC68  90 A6 00 1C */	stw r5, 0x1c(r6)
/* 801AED2C 001ABC6C  80 A3 00 04 */	lwz r5, 4(r3)
/* 801AED30 001ABC70  7C C5 02 14 */	add r6, r5, r0
/* 801AED34 001ABC74  80 A6 00 1C */	lwz r5, 0x1c(r6)
/* 801AED38 001ABC78  7C A4 2A 14 */	add r5, r4, r5
/* 801AED3C 001ABC7C  7C A6 28 50 */	subf r5, r6, r5
/* 801AED40 001ABC80  90 A6 00 1C */	stw r5, 0x1c(r6)
/* 801AED44 001ABC84  80 63 00 04 */	lwz r3, 4(r3)
/* 801AED48 001ABC88  7C 63 02 14 */	add r3, r3, r0
/* 801AED4C 001ABC8C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801AED50 001ABC90  7C 04 02 14 */	add r0, r4, r0
/* 801AED54 001ABC94  7C 03 00 50 */	subf r0, r3, r0
/* 801AED58 001ABC98  90 03 00 0C */	stw r0, 0xc(r3)
.L_801AED5C:
/* 801AED5C 001ABC9C  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AED60 001ABCA0  80 63 00 08 */	lwz r3, 8(r3)
/* 801AED64 001ABCA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801AED68 001ABCA8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801AED6C 001ABCAC  7D 89 03 A6 */	mtctr r12
/* 801AED70 001ABCB0  4E 80 04 21 */	bctrl 
.L_801AED74:
/* 801AED74 001ABCB4  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801AED78 001ABCB8  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 801AED7C 001ABCBC  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 801AED80 001ABCC0  7C 08 03 A6 */	mtlr r0
/* 801AED84 001ABCC4  38 21 00 80 */	addi r1, r1, 0x80
/* 801AED88 001ABCC8  4E 80 00 20 */	blr 
.else
.global doEntry__Q24Game12AABBWaterBoxFv
doEntry__Q24Game12AABBWaterBoxFv:
/* 801AE854 001AB794  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801AE858 001AB798  7C 08 02 A6 */	mflr r0
/* 801AE85C 001AB79C  90 01 00 84 */	stw r0, 0x84(r1)
/* 801AE860 001AB7A0  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 801AE864 001AB7A4  7C 7F 1B 78 */	mr r31, r3
/* 801AE868 001AB7A8  93 C1 00 78 */	stw r30, 0x78(r1)
/* 801AE86C 001AB7AC  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801AE870 001AB7B0  28 04 00 00 */	cmplwi r4, 0
/* 801AE874 001AB7B4  41 82 00 A0 */	beq .L_801AE914
/* 801AE878 001AB7B8  80 64 00 44 */	lwz r3, 0x44(r4)
/* 801AE87C 001AB7BC  2C 03 00 00 */	cmpwi r3, 0
/* 801AE880 001AB7C0  41 82 00 94 */	beq .L_801AE914
/* 801AE884 001AB7C4  2C 03 00 04 */	cmpwi r3, 4
/* 801AE888 001AB7C8  41 82 00 8C */	beq .L_801AE914
/* 801AE88C 001AB7CC  2C 03 00 02 */	cmpwi r3, 2
/* 801AE890 001AB7D0  38 00 00 00 */	li r0, 0
/* 801AE894 001AB7D4  41 82 00 0C */	beq .L_801AE8A0
/* 801AE898 001AB7D8  2C 03 00 03 */	cmpwi r3, 3
/* 801AE89C 001AB7DC  40 82 00 08 */	bne .L_801AE8A4
.L_801AE8A0:
/* 801AE8A0 001AB7E0  38 00 00 01 */	li r0, 1
.L_801AE8A4:
/* 801AE8A4 001AB7E4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801AE8A8 001AB7E8  41 82 00 24 */	beq .L_801AE8CC
/* 801AE8AC 001AB7EC  2C 03 00 01 */	cmpwi r3, 1
/* 801AE8B0 001AB7F0  38 00 00 00 */	li r0, 0
/* 801AE8B4 001AB7F4  41 82 00 0C */	beq .L_801AE8C0
/* 801AE8B8 001AB7F8  2C 03 00 03 */	cmpwi r3, 3
/* 801AE8BC 001AB7FC  40 82 00 08 */	bne .L_801AE8C4
.L_801AE8C0:
/* 801AE8C0 001AB800  38 00 00 01 */	li r0, 1
.L_801AE8C4:
/* 801AE8C4 001AB804  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801AE8C8 001AB808  41 82 00 4C */	beq .L_801AE914
.L_801AE8CC:
/* 801AE8CC 001AB80C  28 04 00 00 */	cmplwi r4, 0
/* 801AE8D0 001AB810  41 82 04 A4 */	beq .L_801AED74
/* 801AE8D4 001AB814  7C 83 23 78 */	mr r3, r4
/* 801AE8D8 001AB818  38 80 00 04 */	li r4, 4
/* 801AE8DC 001AB81C  48 00 67 65 */	bl setDrawBuffer__Q24Game10GameSystemFi
/* 801AE8E0 001AB820  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AE8E4 001AB824  80 63 00 08 */	lwz r3, 8(r3)
/* 801AE8E8 001AB828  81 83 00 00 */	lwz r12, 0(r3)
/* 801AE8EC 001AB82C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AE8F0 001AB830  7D 89 03 A6 */	mtctr r12
/* 801AE8F4 001AB834  4E 80 04 21 */	bctrl 
/* 801AE8F8 001AB838  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AE8FC 001AB83C  80 63 00 08 */	lwz r3, 8(r3)
/* 801AE900 001AB840  81 83 00 00 */	lwz r12, 0(r3)
/* 801AE904 001AB844  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801AE908 001AB848  7D 89 03 A6 */	mtctr r12
/* 801AE90C 001AB84C  4E 80 04 21 */	bctrl 
/* 801AE910 001AB850  48 00 04 64 */	b .L_801AED74
.L_801AE914:
/* 801AE914 001AB854  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801AE918 001AB858  2C 00 00 00 */	cmpwi r0, 0
/* 801AE91C 001AB85C  40 82 02 04 */	bne .L_801AEB20
/* 801AE920 001AB860  83 C4 00 58 */	lwz r30, 0x58(r4)
/* 801AE924 001AB864  80 1E 00 E4 */	lwz r0, 0xe4(r30)
/* 801AE928 001AB868  2C 00 00 02 */	cmpwi r0, 2
/* 801AE92C 001AB86C  40 82 01 F4 */	bne .L_801AEB20
/* 801AE930 001AB870  28 04 00 00 */	cmplwi r4, 0
/* 801AE934 001AB874  41 82 04 40 */	beq .L_801AED74
/* 801AE938 001AB878  7C 83 23 78 */	mr r3, r4
/* 801AE93C 001AB87C  38 80 00 04 */	li r4, 4
/* 801AE940 001AB880  48 00 67 01 */	bl setDrawBuffer__Q24Game10GameSystemFi
/* 801AE944 001AB884  38 61 00 48 */	addi r3, r1, 0x48
/* 801AE948 001AB888  4B F3 B9 59 */	bl PSMTXIdentity
/* 801AE94C 001AB88C  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AE950 001AB890  38 80 00 03 */	li r4, 3
/* 801AE954 001AB894  80 63 00 08 */	lwz r3, 8(r3)
/* 801AE958 001AB898  80 63 00 04 */	lwz r3, 4(r3)
/* 801AE95C 001AB89C  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801AE960 001AB8A0  80 63 00 00 */	lwz r3, 0(r3)
/* 801AE964 001AB8A4  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801AE968 001AB8A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801AE96C 001AB8AC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801AE970 001AB8B0  7D 89 03 A6 */	mtctr r12
/* 801AE974 001AB8B4  4E 80 04 21 */	bctrl 
/* 801AE978 001AB8B8  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 801AE97C 001AB8BC  C0 22 AF C8 */	lfs f1, lbl_80519328@sda21(r2)
/* 801AE980 001AB8C0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801AE984 001AB8C4  C0 02 AF D4 */	lfs f0, lbl_80519334@sda21(r2)
/* 801AE988 001AB8C8  C0 41 00 4C */	lfs f2, 0x4c(r1)
/* 801AE98C 001AB8CC  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 801AE990 001AB8D0  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 801AE994 001AB8D4  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 801AE998 001AB8D8  C0 41 00 54 */	lfs f2, 0x54(r1)
/* 801AE99C 001AB8DC  D0 43 00 30 */	stfs f2, 0x30(r3)
/* 801AE9A0 001AB8E0  C0 41 00 58 */	lfs f2, 0x58(r1)
/* 801AE9A4 001AB8E4  D0 43 00 34 */	stfs f2, 0x34(r3)
/* 801AE9A8 001AB8E8  C0 41 00 5C */	lfs f2, 0x5c(r1)
/* 801AE9AC 001AB8EC  D0 43 00 38 */	stfs f2, 0x38(r3)
/* 801AE9B0 001AB8F0  C0 41 00 60 */	lfs f2, 0x60(r1)
/* 801AE9B4 001AB8F4  D0 43 00 3C */	stfs f2, 0x3c(r3)
/* 801AE9B8 001AB8F8  C0 41 00 64 */	lfs f2, 0x64(r1)
/* 801AE9BC 001AB8FC  D0 43 00 40 */	stfs f2, 0x40(r3)
/* 801AE9C0 001AB900  C0 41 00 68 */	lfs f2, 0x68(r1)
/* 801AE9C4 001AB904  D0 43 00 44 */	stfs f2, 0x44(r3)
/* 801AE9C8 001AB908  C0 41 00 6C */	lfs f2, 0x6c(r1)
/* 801AE9CC 001AB90C  D0 43 00 48 */	stfs f2, 0x48(r3)
/* 801AE9D0 001AB910  C0 41 00 70 */	lfs f2, 0x70(r1)
/* 801AE9D4 001AB914  D0 43 00 4C */	stfs f2, 0x4c(r3)
/* 801AE9D8 001AB918  C0 41 00 74 */	lfs f2, 0x74(r1)
/* 801AE9DC 001AB91C  D0 43 00 50 */	stfs f2, 0x50(r3)
/* 801AE9E0 001AB920  D0 23 00 5C */	stfs f1, 0x5c(r3)
/* 801AE9E4 001AB924  D0 23 00 58 */	stfs f1, 0x58(r3)
/* 801AE9E8 001AB928  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 801AE9EC 001AB92C  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 801AE9F0 001AB930  80 9E 00 F4 */	lwz r4, 0xf4(r30)
/* 801AE9F4 001AB934  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 801AE9F8 001AB938  A8 1F 00 64 */	lha r0, 0x64(r31)
/* 801AE9FC 001AB93C  80 84 00 20 */	lwz r4, 0x20(r4)
/* 801AEA00 001AB940  80 C3 00 04 */	lwz r6, 4(r3)
/* 801AEA04 001AB944  54 00 2A F4 */	rlwinm r0, r0, 5, 0xb, 0x1a
/* 801AEA08 001AB948  88 A4 00 00 */	lbz r5, 0(r4)
/* 801AEA0C 001AB94C  7C C6 02 14 */	add r6, r6, r0
/* 801AEA10 001AB950  98 A6 00 00 */	stb r5, 0(r6)
/* 801AEA14 001AB954  88 A4 00 01 */	lbz r5, 1(r4)
/* 801AEA18 001AB958  98 A6 00 01 */	stb r5, 1(r6)
/* 801AEA1C 001AB95C  A0 A4 00 02 */	lhz r5, 2(r4)
/* 801AEA20 001AB960  B0 A6 00 02 */	sth r5, 2(r6)
/* 801AEA24 001AB964  A0 A4 00 04 */	lhz r5, 4(r4)
/* 801AEA28 001AB968  B0 A6 00 04 */	sth r5, 4(r6)
/* 801AEA2C 001AB96C  88 A4 00 06 */	lbz r5, 6(r4)
/* 801AEA30 001AB970  98 A6 00 06 */	stb r5, 6(r6)
/* 801AEA34 001AB974  88 A4 00 07 */	lbz r5, 7(r4)
/* 801AEA38 001AB978  98 A6 00 07 */	stb r5, 7(r6)
/* 801AEA3C 001AB97C  88 A4 00 08 */	lbz r5, 8(r4)
/* 801AEA40 001AB980  98 A6 00 08 */	stb r5, 8(r6)
/* 801AEA44 001AB984  88 A4 00 09 */	lbz r5, 9(r4)
/* 801AEA48 001AB988  98 A6 00 09 */	stb r5, 9(r6)
/* 801AEA4C 001AB98C  A0 A4 00 0A */	lhz r5, 0xa(r4)
/* 801AEA50 001AB990  B0 A6 00 0A */	sth r5, 0xa(r6)
/* 801AEA54 001AB994  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 801AEA58 001AB998  90 A6 00 0C */	stw r5, 0xc(r6)
/* 801AEA5C 001AB99C  88 A4 00 10 */	lbz r5, 0x10(r4)
/* 801AEA60 001AB9A0  98 A6 00 10 */	stb r5, 0x10(r6)
/* 801AEA64 001AB9A4  88 A4 00 11 */	lbz r5, 0x11(r4)
/* 801AEA68 001AB9A8  98 A6 00 11 */	stb r5, 0x11(r6)
/* 801AEA6C 001AB9AC  88 A4 00 12 */	lbz r5, 0x12(r4)
/* 801AEA70 001AB9B0  98 A6 00 12 */	stb r5, 0x12(r6)
/* 801AEA74 001AB9B4  88 A4 00 13 */	lbz r5, 0x13(r4)
/* 801AEA78 001AB9B8  98 A6 00 13 */	stb r5, 0x13(r6)
/* 801AEA7C 001AB9BC  88 A4 00 14 */	lbz r5, 0x14(r4)
/* 801AEA80 001AB9C0  98 A6 00 14 */	stb r5, 0x14(r6)
/* 801AEA84 001AB9C4  88 A4 00 15 */	lbz r5, 0x15(r4)
/* 801AEA88 001AB9C8  98 A6 00 15 */	stb r5, 0x15(r6)
/* 801AEA8C 001AB9CC  88 A4 00 16 */	lbz r5, 0x16(r4)
/* 801AEA90 001AB9D0  98 A6 00 16 */	stb r5, 0x16(r6)
/* 801AEA94 001AB9D4  88 A4 00 17 */	lbz r5, 0x17(r4)
/* 801AEA98 001AB9D8  98 A6 00 17 */	stb r5, 0x17(r6)
/* 801AEA9C 001AB9DC  88 A4 00 18 */	lbz r5, 0x18(r4)
/* 801AEAA0 001AB9E0  98 A6 00 18 */	stb r5, 0x18(r6)
/* 801AEAA4 001AB9E4  88 A4 00 19 */	lbz r5, 0x19(r4)
/* 801AEAA8 001AB9E8  98 A6 00 19 */	stb r5, 0x19(r6)
/* 801AEAAC 001AB9EC  A8 A4 00 1A */	lha r5, 0x1a(r4)
/* 801AEAB0 001AB9F0  B0 A6 00 1A */	sth r5, 0x1a(r6)
/* 801AEAB4 001AB9F4  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 801AEAB8 001AB9F8  90 A6 00 1C */	stw r5, 0x1c(r6)
/* 801AEABC 001AB9FC  80 A3 00 04 */	lwz r5, 4(r3)
/* 801AEAC0 001ABA00  7C C5 02 14 */	add r6, r5, r0
/* 801AEAC4 001ABA04  80 A6 00 1C */	lwz r5, 0x1c(r6)
/* 801AEAC8 001ABA08  7C A4 2A 14 */	add r5, r4, r5
/* 801AEACC 001ABA0C  7C A6 28 50 */	subf r5, r6, r5
/* 801AEAD0 001ABA10  90 A6 00 1C */	stw r5, 0x1c(r6)
/* 801AEAD4 001ABA14  80 63 00 04 */	lwz r3, 4(r3)
/* 801AEAD8 001ABA18  7C 63 02 14 */	add r3, r3, r0
/* 801AEADC 001ABA1C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801AEAE0 001ABA20  7C 04 02 14 */	add r0, r4, r0
/* 801AEAE4 001ABA24  7C 03 00 50 */	subf r0, r3, r0
/* 801AEAE8 001ABA28  90 03 00 0C */	stw r0, 0xc(r3)
/* 801AEAEC 001ABA2C  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AEAF0 001ABA30  80 63 00 08 */	lwz r3, 8(r3)
/* 801AEAF4 001ABA34  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEAF8 001ABA38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AEAFC 001ABA3C  7D 89 03 A6 */	mtctr r12
/* 801AEB00 001ABA40  4E 80 04 21 */	bctrl 
/* 801AEB04 001ABA44  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AEB08 001ABA48  80 63 00 08 */	lwz r3, 8(r3)
/* 801AEB0C 001ABA4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEB10 001ABA50  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801AEB14 001ABA54  7D 89 03 A6 */	mtctr r12
/* 801AEB18 001ABA58  4E 80 04 21 */	bctrl 
/* 801AEB1C 001ABA5C  48 00 02 58 */	b .L_801AED74
.L_801AEB20:
/* 801AEB20 001ABA60  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801AEB24 001ABA64  38 81 00 08 */	addi r4, r1, 8
/* 801AEB28 001ABA68  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801AEB2C 001ABA6C  80 63 02 5C */	lwz r3, 0x25c(r3)
/* 801AEB30 001ABA70  80 63 00 44 */	lwz r3, 0x44(r3)
/* 801AEB34 001ABA74  38 63 00 B4 */	addi r3, r3, 0xb4
/* 801AEB38 001ABA78  4B F3 C3 39 */	bl PSMTX44Copy
/* 801AEB3C 001ABA7C  C0 A1 00 38 */	lfs f5, 0x38(r1)
/* 801AEB40 001ABA80  C0 81 00 3C */	lfs f4, 0x3c(r1)
/* 801AEB44 001ABA84  C0 22 AF C8 */	lfs f1, lbl_80519328@sda21(r2)
/* 801AEB48 001ABA88  C0 61 00 40 */	lfs f3, 0x40(r1)
/* 801AEB4C 001ABA8C  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 801AEB50 001ABA90  C0 02 AF D4 */	lfs f0, lbl_80519334@sda21(r2)
/* 801AEB54 001ABA94  D0 A1 00 28 */	stfs f5, 0x28(r1)
/* 801AEB58 001ABA98  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 801AEB5C 001ABA9C  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 801AEB60 001ABAA0  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 801AEB64 001ABAA4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801AEB68 001ABAA8  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801AEB6C 001ABAAC  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 801AEB70 001ABAB0  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 801AEB74 001ABAB4  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 801AEB78 001ABAB8  28 00 00 00 */	cmplwi r0, 0
/* 801AEB7C 001ABABC  41 82 01 F8 */	beq .L_801AED74
/* 801AEB80 001ABAC0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801AEB84 001ABAC4  28 03 00 00 */	cmplwi r3, 0
/* 801AEB88 001ABAC8  41 82 01 D4 */	beq .L_801AED5C
/* 801AEB8C 001ABACC  38 80 00 04 */	li r4, 4
/* 801AEB90 001ABAD0  48 00 64 B1 */	bl setDrawBuffer__Q24Game10GameSystemFi
/* 801AEB94 001ABAD4  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AEB98 001ABAD8  80 63 00 08 */	lwz r3, 8(r3)
/* 801AEB9C 001ABADC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEBA0 001ABAE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AEBA4 001ABAE4  7D 89 03 A6 */	mtctr r12
/* 801AEBA8 001ABAE8  4E 80 04 21 */	bctrl 
/* 801AEBAC 001ABAEC  80 1F 00 60 */	lwz r0, 0x60(r31)
/* 801AEBB0 001ABAF0  28 00 00 00 */	cmplwi r0, 0
/* 801AEBB4 001ABAF4  41 82 01 A8 */	beq .L_801AED5C
/* 801AEBB8 001ABAF8  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AEBBC 001ABAFC  38 80 00 03 */	li r4, 3
/* 801AEBC0 001ABB00  80 63 00 08 */	lwz r3, 8(r3)
/* 801AEBC4 001ABB04  80 63 00 04 */	lwz r3, 4(r3)
/* 801AEBC8 001ABB08  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801AEBCC 001ABB0C  80 63 00 00 */	lwz r3, 0(r3)
/* 801AEBD0 001ABB10  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801AEBD4 001ABB14  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEBD8 001ABB18  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801AEBDC 001ABB1C  7D 89 03 A6 */	mtctr r12
/* 801AEBE0 001ABB20  4E 80 04 21 */	bctrl 
/* 801AEBE4 001ABB24  C0 01 00 08 */	lfs f0, 8(r1)
/* 801AEBE8 001ABB28  C0 22 AF C8 */	lfs f1, lbl_80519328@sda21(r2)
/* 801AEBEC 001ABB2C  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801AEBF0 001ABB30  C0 02 AF D4 */	lfs f0, lbl_80519334@sda21(r2)
/* 801AEBF4 001ABB34  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801AEBF8 001ABB38  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 801AEBFC 001ABB3C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801AEC00 001ABB40  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 801AEC04 001ABB44  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801AEC08 001ABB48  D0 43 00 30 */	stfs f2, 0x30(r3)
/* 801AEC0C 001ABB4C  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 801AEC10 001ABB50  D0 43 00 34 */	stfs f2, 0x34(r3)
/* 801AEC14 001ABB54  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 801AEC18 001ABB58  D0 43 00 38 */	stfs f2, 0x38(r3)
/* 801AEC1C 001ABB5C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 801AEC20 001ABB60  D0 43 00 3C */	stfs f2, 0x3c(r3)
/* 801AEC24 001ABB64  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 801AEC28 001ABB68  D0 43 00 40 */	stfs f2, 0x40(r3)
/* 801AEC2C 001ABB6C  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 801AEC30 001ABB70  D0 43 00 44 */	stfs f2, 0x44(r3)
/* 801AEC34 001ABB74  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 801AEC38 001ABB78  D0 43 00 48 */	stfs f2, 0x48(r3)
/* 801AEC3C 001ABB7C  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 801AEC40 001ABB80  D0 43 00 4C */	stfs f2, 0x4c(r3)
/* 801AEC44 001ABB84  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 801AEC48 001ABB88  D0 43 00 50 */	stfs f2, 0x50(r3)
/* 801AEC4C 001ABB8C  D0 23 00 5C */	stfs f1, 0x5c(r3)
/* 801AEC50 001ABB90  D0 23 00 58 */	stfs f1, 0x58(r3)
/* 801AEC54 001ABB94  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 801AEC58 001ABB98  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 801AEC5C 001ABB9C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801AEC60 001ABBA0  A8 1F 00 64 */	lha r0, 0x64(r31)
/* 801AEC64 001ABBA4  80 83 00 54 */	lwz r4, 0x54(r3)
/* 801AEC68 001ABBA8  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 801AEC6C 001ABBAC  54 00 2A F4 */	rlwinm r0, r0, 5, 0xb, 0x1a
/* 801AEC70 001ABBB0  80 84 00 20 */	lwz r4, 0x20(r4)
/* 801AEC74 001ABBB4  80 C3 00 04 */	lwz r6, 4(r3)
/* 801AEC78 001ABBB8  88 A4 00 00 */	lbz r5, 0(r4)
/* 801AEC7C 001ABBBC  7C C6 02 14 */	add r6, r6, r0
/* 801AEC80 001ABBC0  98 A6 00 00 */	stb r5, 0(r6)
/* 801AEC84 001ABBC4  88 A4 00 01 */	lbz r5, 1(r4)
/* 801AEC88 001ABBC8  98 A6 00 01 */	stb r5, 1(r6)
/* 801AEC8C 001ABBCC  A0 A4 00 02 */	lhz r5, 2(r4)
/* 801AEC90 001ABBD0  B0 A6 00 02 */	sth r5, 2(r6)
/* 801AEC94 001ABBD4  A0 A4 00 04 */	lhz r5, 4(r4)
/* 801AEC98 001ABBD8  B0 A6 00 04 */	sth r5, 4(r6)
/* 801AEC9C 001ABBDC  88 A4 00 06 */	lbz r5, 6(r4)
/* 801AECA0 001ABBE0  98 A6 00 06 */	stb r5, 6(r6)
/* 801AECA4 001ABBE4  88 A4 00 07 */	lbz r5, 7(r4)
/* 801AECA8 001ABBE8  98 A6 00 07 */	stb r5, 7(r6)
/* 801AECAC 001ABBEC  88 A4 00 08 */	lbz r5, 8(r4)
/* 801AECB0 001ABBF0  98 A6 00 08 */	stb r5, 8(r6)
/* 801AECB4 001ABBF4  88 A4 00 09 */	lbz r5, 9(r4)
/* 801AECB8 001ABBF8  98 A6 00 09 */	stb r5, 9(r6)
/* 801AECBC 001ABBFC  A0 A4 00 0A */	lhz r5, 0xa(r4)
/* 801AECC0 001ABC00  B0 A6 00 0A */	sth r5, 0xa(r6)
/* 801AECC4 001ABC04  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 801AECC8 001ABC08  90 A6 00 0C */	stw r5, 0xc(r6)
/* 801AECCC 001ABC0C  88 A4 00 10 */	lbz r5, 0x10(r4)
/* 801AECD0 001ABC10  98 A6 00 10 */	stb r5, 0x10(r6)
/* 801AECD4 001ABC14  88 A4 00 11 */	lbz r5, 0x11(r4)
/* 801AECD8 001ABC18  98 A6 00 11 */	stb r5, 0x11(r6)
/* 801AECDC 001ABC1C  88 A4 00 12 */	lbz r5, 0x12(r4)
/* 801AECE0 001ABC20  98 A6 00 12 */	stb r5, 0x12(r6)
/* 801AECE4 001ABC24  88 A4 00 13 */	lbz r5, 0x13(r4)
/* 801AECE8 001ABC28  98 A6 00 13 */	stb r5, 0x13(r6)
/* 801AECEC 001ABC2C  88 A4 00 14 */	lbz r5, 0x14(r4)
/* 801AECF0 001ABC30  98 A6 00 14 */	stb r5, 0x14(r6)
/* 801AECF4 001ABC34  88 A4 00 15 */	lbz r5, 0x15(r4)
/* 801AECF8 001ABC38  98 A6 00 15 */	stb r5, 0x15(r6)
/* 801AECFC 001ABC3C  88 A4 00 16 */	lbz r5, 0x16(r4)
/* 801AED00 001ABC40  98 A6 00 16 */	stb r5, 0x16(r6)
/* 801AED04 001ABC44  88 A4 00 17 */	lbz r5, 0x17(r4)
/* 801AED08 001ABC48  98 A6 00 17 */	stb r5, 0x17(r6)
/* 801AED0C 001ABC4C  88 A4 00 18 */	lbz r5, 0x18(r4)
/* 801AED10 001ABC50  98 A6 00 18 */	stb r5, 0x18(r6)
/* 801AED14 001ABC54  88 A4 00 19 */	lbz r5, 0x19(r4)
/* 801AED18 001ABC58  98 A6 00 19 */	stb r5, 0x19(r6)
/* 801AED1C 001ABC5C  A8 A4 00 1A */	lha r5, 0x1a(r4)
/* 801AED20 001ABC60  B0 A6 00 1A */	sth r5, 0x1a(r6)
/* 801AED24 001ABC64  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 801AED28 001ABC68  90 A6 00 1C */	stw r5, 0x1c(r6)
/* 801AED2C 001ABC6C  80 A3 00 04 */	lwz r5, 4(r3)
/* 801AED30 001ABC70  7C C5 02 14 */	add r6, r5, r0
/* 801AED34 001ABC74  80 A6 00 1C */	lwz r5, 0x1c(r6)
/* 801AED38 001ABC78  7C A4 2A 14 */	add r5, r4, r5
/* 801AED3C 001ABC7C  7C A6 28 50 */	subf r5, r6, r5
/* 801AED40 001ABC80  90 A6 00 1C */	stw r5, 0x1c(r6)
/* 801AED44 001ABC84  80 63 00 04 */	lwz r3, 4(r3)
/* 801AED48 001ABC88  7C 63 02 14 */	add r3, r3, r0
/* 801AED4C 001ABC8C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801AED50 001ABC90  7C 04 02 14 */	add r0, r4, r0
/* 801AED54 001ABC94  7C 03 00 50 */	subf r0, r3, r0
/* 801AED58 001ABC98  90 03 00 0C */	stw r0, 0xc(r3)
.L_801AED5C:
/* 801AED5C 001ABC9C  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 801AED60 001ABCA0  80 63 00 08 */	lwz r3, 8(r3)
/* 801AED64 001ABCA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801AED68 001ABCA8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801AED6C 001ABCAC  7D 89 03 A6 */	mtctr r12
/* 801AED70 001ABCB0  4E 80 04 21 */	bctrl 
.L_801AED74:
/* 801AED74 001ABCB4  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801AED78 001ABCB8  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 801AED7C 001ABCBC  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 801AED80 001ABCC0  7C 08 03 A6 */	mtlr r0
/* 801AED84 001ABCC4  38 21 00 80 */	addi r1, r1, 0x80
/* 801AED88 001ABCC8  4E 80 00 20 */	blr 
.endif

.global update__Q24Game6SeaMgrFv
update__Q24Game6SeaMgrFv:
/* 801AED8C 001ABCCC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801AED90 001ABCD0  7C 08 02 A6 */	mflr r0
/* 801AED94 001ABCD4  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8WaterBox>"@ha
/* 801AED98 001ABCD8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801AED9C 001ABCDC  38 00 00 00 */	li r0, 0
/* 801AEDA0 001ABCE0  38 84 19 D4 */	addi r4, r4, "__vt__26Iterator<Q24Game8WaterBox>"@l
/* 801AEDA4 001ABCE4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801AEDA8 001ABCE8  28 00 00 00 */	cmplwi r0, 0
/* 801AEDAC 001ABCEC  3B E0 00 00 */	li r31, 0
/* 801AEDB0 001ABCF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AEDB4 001ABCF4  90 81 00 08 */	stw r4, 8(r1)
/* 801AEDB8 001ABCF8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801AEDBC 001ABCFC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801AEDC0 001ABD00  40 82 00 1C */	bne .L_801AEDDC
/* 801AEDC4 001ABD04  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEDC8 001ABD08  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AEDCC 001ABD0C  7D 89 03 A6 */	mtctr r12
/* 801AEDD0 001ABD10  4E 80 04 21 */	bctrl 
/* 801AEDD4 001ABD14  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AEDD8 001ABD18  48 00 01 7C */	b .L_801AEF54
.L_801AEDDC:
/* 801AEDDC 001ABD1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEDE0 001ABD20  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AEDE4 001ABD24  7D 89 03 A6 */	mtctr r12
/* 801AEDE8 001ABD28  4E 80 04 21 */	bctrl 
/* 801AEDEC 001ABD2C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AEDF0 001ABD30  48 00 00 58 */	b .L_801AEE48
.L_801AEDF4:
/* 801AEDF4 001ABD34  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AEDF8 001ABD38  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AEDFC 001ABD3C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEE00 001ABD40  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AEE04 001ABD44  7D 89 03 A6 */	mtctr r12
/* 801AEE08 001ABD48  4E 80 04 21 */	bctrl 
/* 801AEE0C 001ABD4C  7C 64 1B 78 */	mr r4, r3
/* 801AEE10 001ABD50  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801AEE14 001ABD54  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEE18 001ABD58  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AEE1C 001ABD5C  7D 89 03 A6 */	mtctr r12
/* 801AEE20 001ABD60  4E 80 04 21 */	bctrl 
/* 801AEE24 001ABD64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AEE28 001ABD68  40 82 01 2C */	bne .L_801AEF54
/* 801AEE2C 001ABD6C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AEE30 001ABD70  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AEE34 001ABD74  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEE38 001ABD78  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AEE3C 001ABD7C  7D 89 03 A6 */	mtctr r12
/* 801AEE40 001ABD80  4E 80 04 21 */	bctrl 
/* 801AEE44 001ABD84  90 61 00 0C */	stw r3, 0xc(r1)
.L_801AEE48:
/* 801AEE48 001ABD88  81 81 00 08 */	lwz r12, 8(r1)
/* 801AEE4C 001ABD8C  38 61 00 08 */	addi r3, r1, 8
/* 801AEE50 001ABD90  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AEE54 001ABD94  7D 89 03 A6 */	mtctr r12
/* 801AEE58 001ABD98  4E 80 04 21 */	bctrl 
/* 801AEE5C 001ABD9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AEE60 001ABDA0  41 82 FF 94 */	beq .L_801AEDF4
/* 801AEE64 001ABDA4  48 00 00 F0 */	b .L_801AEF54
.L_801AEE68:
/* 801AEE68 001ABDA8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AEE6C 001ABDAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEE70 001ABDB0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AEE74 001ABDB4  7D 89 03 A6 */	mtctr r12
/* 801AEE78 001ABDB8  4E 80 04 21 */	bctrl 
/* 801AEE7C 001ABDBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEE80 001ABDC0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AEE84 001ABDC4  7D 89 03 A6 */	mtctr r12
/* 801AEE88 001ABDC8  4E 80 04 21 */	bctrl 
/* 801AEE8C 001ABDCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AEE90 001ABDD0  41 82 00 08 */	beq .L_801AEE98
/* 801AEE94 001ABDD4  3B E0 00 01 */	li r31, 1
.L_801AEE98:
/* 801AEE98 001ABDD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AEE9C 001ABDDC  28 00 00 00 */	cmplwi r0, 0
/* 801AEEA0 001ABDE0  40 82 00 24 */	bne .L_801AEEC4
/* 801AEEA4 001ABDE4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AEEA8 001ABDE8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AEEAC 001ABDEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEEB0 001ABDF0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AEEB4 001ABDF4  7D 89 03 A6 */	mtctr r12
/* 801AEEB8 001ABDF8  4E 80 04 21 */	bctrl 
/* 801AEEBC 001ABDFC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AEEC0 001ABE00  48 00 00 94 */	b .L_801AEF54
.L_801AEEC4:
/* 801AEEC4 001ABE04  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AEEC8 001ABE08  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AEECC 001ABE0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEED0 001ABE10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AEED4 001ABE14  7D 89 03 A6 */	mtctr r12
/* 801AEED8 001ABE18  4E 80 04 21 */	bctrl 
/* 801AEEDC 001ABE1C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AEEE0 001ABE20  48 00 00 58 */	b .L_801AEF38
.L_801AEEE4:
/* 801AEEE4 001ABE24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AEEE8 001ABE28  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AEEEC 001ABE2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEEF0 001ABE30  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AEEF4 001ABE34  7D 89 03 A6 */	mtctr r12
/* 801AEEF8 001ABE38  4E 80 04 21 */	bctrl 
/* 801AEEFC 001ABE3C  7C 64 1B 78 */	mr r4, r3
/* 801AEF00 001ABE40  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801AEF04 001ABE44  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEF08 001ABE48  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AEF0C 001ABE4C  7D 89 03 A6 */	mtctr r12
/* 801AEF10 001ABE50  4E 80 04 21 */	bctrl 
/* 801AEF14 001ABE54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AEF18 001ABE58  40 82 00 3C */	bne .L_801AEF54
/* 801AEF1C 001ABE5C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AEF20 001ABE60  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AEF24 001ABE64  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEF28 001ABE68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AEF2C 001ABE6C  7D 89 03 A6 */	mtctr r12
/* 801AEF30 001ABE70  4E 80 04 21 */	bctrl 
/* 801AEF34 001ABE74  90 61 00 0C */	stw r3, 0xc(r1)
.L_801AEF38:
/* 801AEF38 001ABE78  81 81 00 08 */	lwz r12, 8(r1)
/* 801AEF3C 001ABE7C  38 61 00 08 */	addi r3, r1, 8
/* 801AEF40 001ABE80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AEF44 001ABE84  7D 89 03 A6 */	mtctr r12
/* 801AEF48 001ABE88  4E 80 04 21 */	bctrl 
/* 801AEF4C 001ABE8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AEF50 001ABE90  41 82 FF 94 */	beq .L_801AEEE4
.L_801AEF54:
/* 801AEF54 001ABE94  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AEF58 001ABE98  81 83 00 00 */	lwz r12, 0(r3)
/* 801AEF5C 001ABE9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801AEF60 001ABEA0  7D 89 03 A6 */	mtctr r12
/* 801AEF64 001ABEA4  4E 80 04 21 */	bctrl 
/* 801AEF68 001ABEA8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AEF6C 001ABEAC  7C 04 18 40 */	cmplw r4, r3
/* 801AEF70 001ABEB0  40 82 FE F8 */	bne .L_801AEE68
/* 801AEF74 001ABEB4  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801AEF78 001ABEB8  41 82 00 10 */	beq .L_801AEF88
/* 801AEF7C 001ABEBC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801AEF80 001ABEC0  80 63 00 08 */	lwz r3, 8(r3)
/* 801AEF84 001ABEC4  4B FC 3D 8D */	bl refreshWater__Q24Game8RouteMgrFv
.L_801AEF88:
/* 801AEF88 001ABEC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801AEF8C 001ABECC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801AEF90 001ABED0  7C 08 03 A6 */	mtlr r0
/* 801AEF94 001ABED4  38 21 00 20 */	addi r1, r1, 0x20
/* 801AEF98 001ABED8  4E 80 00 20 */	blr 

.global inWater__Q24Game12AABBWaterBoxFRQ23Sys6Sphere
inWater__Q24Game12AABBWaterBoxFRQ23Sys6Sphere:
/* 801AEF9C 001ABEDC  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 801AEFA0 001ABEE0  C0 02 AF DC */	lfs f0, lbl_8051933C@sda21(r2)
/* 801AEFA4 001ABEE4  C0 44 00 04 */	lfs f2, 4(r4)
/* 801AEFA8 001ABEE8  EC 01 00 28 */	fsubs f0, f1, f0
/* 801AEFAC 001ABEEC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801AEFB0 001ABEF0  40 81 00 0C */	ble .L_801AEFBC
/* 801AEFB4 001ABEF4  38 60 00 00 */	li r3, 0
/* 801AEFB8 001ABEF8  4E 80 00 20 */	blr 
.L_801AEFBC:
/* 801AEFBC 001ABEFC  C0 24 00 00 */	lfs f1, 0(r4)
/* 801AEFC0 001ABF00  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 801AEFC4 001ABF04  C0 83 00 24 */	lfs f4, 0x24(r3)
/* 801AEFC8 001ABF08  EC 41 00 28 */	fsubs f2, f1, f0
/* 801AEFCC 001ABF0C  C0 63 00 18 */	lfs f3, 0x18(r3)
/* 801AEFD0 001ABF10  EC 21 00 2A */	fadds f1, f1, f0
/* 801AEFD4 001ABF14  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 801AEFD8 001ABF18  40 80 00 0C */	bge .L_801AEFE4
/* 801AEFDC 001ABF1C  38 60 00 00 */	li r3, 0
/* 801AEFE0 001ABF20  4E 80 00 20 */	blr 
.L_801AEFE4:
/* 801AEFE4 001ABF24  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 801AEFE8 001ABF28  40 80 00 0C */	bge .L_801AEFF4
/* 801AEFEC 001ABF2C  38 60 00 00 */	li r3, 0
/* 801AEFF0 001ABF30  4E 80 00 20 */	blr 
.L_801AEFF4:
/* 801AEFF4 001ABF34  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 801AEFF8 001ABF38  4C 40 13 82 */	cror 2, 0, 2
/* 801AEFFC 001ABF3C  40 82 00 10 */	bne .L_801AF00C
/* 801AF000 001ABF40  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 801AF004 001ABF44  4C 40 13 82 */	cror 2, 0, 2
/* 801AF008 001ABF48  41 82 00 24 */	beq .L_801AF02C
.L_801AF00C:
/* 801AF00C 001ABF4C  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 801AF010 001ABF50  4C 40 13 82 */	cror 2, 0, 2
/* 801AF014 001ABF54  40 82 00 10 */	bne .L_801AF024
/* 801AF018 001ABF58  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 801AF01C 001ABF5C  4C 40 13 82 */	cror 2, 0, 2
/* 801AF020 001ABF60  41 82 00 0C */	beq .L_801AF02C
.L_801AF024:
/* 801AF024 001ABF64  38 60 00 00 */	li r3, 0
/* 801AF028 001ABF68  4E 80 00 20 */	blr 
.L_801AF02C:
/* 801AF02C 001ABF6C  C0 24 00 08 */	lfs f1, 8(r4)
/* 801AF030 001ABF70  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 801AF034 001ABF74  EC 41 00 28 */	fsubs f2, f1, f0
/* 801AF038 001ABF78  C0 63 00 20 */	lfs f3, 0x20(r3)
/* 801AF03C 001ABF7C  EC 01 00 2A */	fadds f0, f1, f0
/* 801AF040 001ABF80  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 801AF044 001ABF84  40 80 00 0C */	bge .L_801AF050
/* 801AF048 001ABF88  38 60 00 00 */	li r3, 0
/* 801AF04C 001ABF8C  4E 80 00 20 */	blr 
.L_801AF050:
/* 801AF050 001ABF90  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801AF054 001ABF94  40 80 00 0C */	bge .L_801AF060
/* 801AF058 001ABF98  38 60 00 00 */	li r3, 0
/* 801AF05C 001ABF9C  4E 80 00 20 */	blr 
.L_801AF060:
/* 801AF060 001ABFA0  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 801AF064 001ABFA4  4C 40 13 82 */	cror 2, 0, 2
/* 801AF068 001ABFA8  40 82 00 10 */	bne .L_801AF078
/* 801AF06C 001ABFAC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801AF070 001ABFB0  4C 40 13 82 */	cror 2, 0, 2
/* 801AF074 001ABFB4  41 82 00 24 */	beq .L_801AF098
.L_801AF078:
/* 801AF078 001ABFB8  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 801AF07C 001ABFBC  4C 40 13 82 */	cror 2, 0, 2
/* 801AF080 001ABFC0  40 82 00 10 */	bne .L_801AF090
/* 801AF084 001ABFC4  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 801AF088 001ABFC8  4C 40 13 82 */	cror 2, 0, 2
/* 801AF08C 001ABFCC  41 82 00 0C */	beq .L_801AF098
.L_801AF090:
/* 801AF090 001ABFD0  38 60 00 00 */	li r3, 0
/* 801AF094 001ABFD4  4E 80 00 20 */	blr 
.L_801AF098:
/* 801AF098 001ABFD8  38 60 00 01 */	li r3, 1
/* 801AF09C 001ABFDC  4E 80 00 20 */	blr 

.global inWater2d__Q24Game12AABBWaterBoxFRQ23Sys6Sphere
inWater2d__Q24Game12AABBWaterBoxFRQ23Sys6Sphere:
/* 801AF0A0 001ABFE0  C0 24 00 00 */	lfs f1, 0(r4)
/* 801AF0A4 001ABFE4  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 801AF0A8 001ABFE8  C0 83 00 24 */	lfs f4, 0x24(r3)
/* 801AF0AC 001ABFEC  EC 41 00 28 */	fsubs f2, f1, f0
/* 801AF0B0 001ABFF0  C0 63 00 18 */	lfs f3, 0x18(r3)
/* 801AF0B4 001ABFF4  EC 21 00 2A */	fadds f1, f1, f0
/* 801AF0B8 001ABFF8  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 801AF0BC 001ABFFC  40 80 00 0C */	bge .L_801AF0C8
/* 801AF0C0 001AC000  38 60 00 00 */	li r3, 0
/* 801AF0C4 001AC004  4E 80 00 20 */	blr 
.L_801AF0C8:
/* 801AF0C8 001AC008  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 801AF0CC 001AC00C  40 80 00 0C */	bge .L_801AF0D8
/* 801AF0D0 001AC010  38 60 00 00 */	li r3, 0
/* 801AF0D4 001AC014  4E 80 00 20 */	blr 
.L_801AF0D8:
/* 801AF0D8 001AC018  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 801AF0DC 001AC01C  4C 40 13 82 */	cror 2, 0, 2
/* 801AF0E0 001AC020  40 82 00 10 */	bne .L_801AF0F0
/* 801AF0E4 001AC024  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 801AF0E8 001AC028  4C 40 13 82 */	cror 2, 0, 2
/* 801AF0EC 001AC02C  41 82 00 24 */	beq .L_801AF110
.L_801AF0F0:
/* 801AF0F0 001AC030  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 801AF0F4 001AC034  4C 40 13 82 */	cror 2, 0, 2
/* 801AF0F8 001AC038  40 82 00 10 */	bne .L_801AF108
/* 801AF0FC 001AC03C  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 801AF100 001AC040  4C 40 13 82 */	cror 2, 0, 2
/* 801AF104 001AC044  41 82 00 0C */	beq .L_801AF110
.L_801AF108:
/* 801AF108 001AC048  38 60 00 00 */	li r3, 0
/* 801AF10C 001AC04C  4E 80 00 20 */	blr 
.L_801AF110:
/* 801AF110 001AC050  C0 24 00 08 */	lfs f1, 8(r4)
/* 801AF114 001AC054  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 801AF118 001AC058  EC 41 00 28 */	fsubs f2, f1, f0
/* 801AF11C 001AC05C  C0 63 00 20 */	lfs f3, 0x20(r3)
/* 801AF120 001AC060  EC 01 00 2A */	fadds f0, f1, f0
/* 801AF124 001AC064  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 801AF128 001AC068  40 80 00 0C */	bge .L_801AF134
/* 801AF12C 001AC06C  38 60 00 00 */	li r3, 0
/* 801AF130 001AC070  4E 80 00 20 */	blr 
.L_801AF134:
/* 801AF134 001AC074  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801AF138 001AC078  40 80 00 0C */	bge .L_801AF144
/* 801AF13C 001AC07C  38 60 00 00 */	li r3, 0
/* 801AF140 001AC080  4E 80 00 20 */	blr 
.L_801AF144:
/* 801AF144 001AC084  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 801AF148 001AC088  4C 40 13 82 */	cror 2, 0, 2
/* 801AF14C 001AC08C  40 82 00 10 */	bne .L_801AF15C
/* 801AF150 001AC090  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801AF154 001AC094  4C 40 13 82 */	cror 2, 0, 2
/* 801AF158 001AC098  41 82 00 24 */	beq .L_801AF17C
.L_801AF15C:
/* 801AF15C 001AC09C  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 801AF160 001AC0A0  4C 40 13 82 */	cror 2, 0, 2
/* 801AF164 001AC0A4  40 82 00 10 */	bne .L_801AF174
/* 801AF168 001AC0A8  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 801AF16C 001AC0AC  4C 40 13 82 */	cror 2, 0, 2
/* 801AF170 001AC0B0  41 82 00 0C */	beq .L_801AF17C
.L_801AF174:
/* 801AF174 001AC0B4  38 60 00 00 */	li r3, 0
/* 801AF178 001AC0B8  4E 80 00 20 */	blr 
.L_801AF17C:
/* 801AF17C 001AC0BC  38 60 00 01 */	li r3, 1
/* 801AF180 001AC0C0  4E 80 00 20 */	blr 

.global globalise__Q24Game12AABBWaterBoxFPQ24Game12AABBWaterBoxR7Matrixf
globalise__Q24Game12AABBWaterBoxFPQ24Game12AABBWaterBoxR7Matrixf:
/* 801AF184 001AC0C4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801AF188 001AC0C8  7C 08 02 A6 */	mflr r0
/* 801AF18C 001AC0CC  C0 22 AF C0 */	lfs f1, lbl_80519320@sda21(r2)
/* 801AF190 001AC0D0  90 01 00 64 */	stw r0, 0x64(r1)
/* 801AF194 001AC0D4  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 801AF198 001AC0D8  7C 9C 23 78 */	mr r28, r4
/* 801AF19C 001AC0DC  7C 7B 1B 78 */	mr r27, r3
/* 801AF1A0 001AC0E0  7C BD 2B 78 */	mr r29, r5
/* 801AF1A4 001AC0E4  3B E1 00 14 */	addi r31, r1, 0x14
/* 801AF1A8 001AC0E8  3B C0 00 00 */	li r30, 0
/* 801AF1AC 001AC0EC  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 801AF1B0 001AC0F0  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 801AF1B4 001AC0F4  C0 02 AF C4 */	lfs f0, lbl_80519324@sda21(r2)
/* 801AF1B8 001AC0F8  C0 44 00 1C */	lfs f2, 0x1c(r4)
/* 801AF1BC 001AC0FC  D0 43 00 1C */	stfs f2, 0x1c(r3)
/* 801AF1C0 001AC100  C0 44 00 20 */	lfs f2, 0x20(r4)
/* 801AF1C4 001AC104  D0 43 00 20 */	stfs f2, 0x20(r3)
/* 801AF1C8 001AC108  C0 44 00 24 */	lfs f2, 0x24(r4)
/* 801AF1CC 001AC10C  D0 43 00 24 */	stfs f2, 0x24(r3)
/* 801AF1D0 001AC110  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 801AF1D4 001AC114  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 801AF1D8 001AC118  C0 44 00 2C */	lfs f2, 0x2c(r4)
/* 801AF1DC 001AC11C  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 801AF1E0 001AC120  C0 43 00 18 */	lfs f2, 0x18(r3)
/* 801AF1E4 001AC124  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 801AF1E8 001AC128  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 801AF1EC 001AC12C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801AF1F0 001AC130  C0 43 00 20 */	lfs f2, 0x20(r3)
/* 801AF1F4 001AC134  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 801AF1F8 001AC138  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 801AF1FC 001AC13C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 801AF200 001AC140  C0 43 00 28 */	lfs f2, 0x28(r3)
/* 801AF204 001AC144  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 801AF208 001AC148  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 801AF20C 001AC14C  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 801AF210 001AC150  C0 83 00 2C */	lfs f4, 0x2c(r3)
/* 801AF214 001AC154  C0 63 00 1C */	lfs f3, 0x1c(r3)
/* 801AF218 001AC158  C0 43 00 18 */	lfs f2, 0x18(r3)
/* 801AF21C 001AC15C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 801AF220 001AC160  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 801AF224 001AC164  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 801AF228 001AC168  C0 83 00 20 */	lfs f4, 0x20(r3)
/* 801AF22C 001AC16C  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 801AF230 001AC170  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 801AF234 001AC174  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 801AF238 001AC178  D0 81 00 40 */	stfs f4, 0x40(r1)
/* 801AF23C 001AC17C  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 801AF240 001AC180  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 801AF244 001AC184  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 801AF248 001AC188  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801AF24C 001AC18C  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801AF250 001AC190  D0 03 00 2C */	stfs f0, 0x2c(r3)
.L_801AF254:
/* 801AF254 001AC194  7F A3 EB 78 */	mr r3, r29
/* 801AF258 001AC198  7F E4 FB 78 */	mr r4, r31
/* 801AF25C 001AC19C  38 A1 00 08 */	addi r5, r1, 8
/* 801AF260 001AC1A0  4B F3 B9 79 */	bl PSMTXMultVec
/* 801AF264 001AC1A4  C0 01 00 08 */	lfs f0, 8(r1)
/* 801AF268 001AC1A8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801AF26C 001AC1AC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801AF270 001AC1B0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801AF274 001AC1B4  D0 3F 00 04 */	stfs f1, 4(r31)
/* 801AF278 001AC1B8  D0 1F 00 08 */	stfs f0, 8(r31)
/* 801AF27C 001AC1BC  C0 3F 00 00 */	lfs f1, 0(r31)
/* 801AF280 001AC1C0  C0 1B 00 18 */	lfs f0, 0x18(r27)
/* 801AF284 001AC1C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801AF288 001AC1C8  40 80 00 08 */	bge .L_801AF290
/* 801AF28C 001AC1CC  D0 3B 00 18 */	stfs f1, 0x18(r27)
.L_801AF290:
/* 801AF290 001AC1D0  C0 3F 00 04 */	lfs f1, 4(r31)
/* 801AF294 001AC1D4  C0 1B 00 1C */	lfs f0, 0x1c(r27)
/* 801AF298 001AC1D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801AF29C 001AC1DC  40 80 00 08 */	bge .L_801AF2A4
/* 801AF2A0 001AC1E0  D0 3B 00 1C */	stfs f1, 0x1c(r27)
.L_801AF2A4:
/* 801AF2A4 001AC1E4  C0 3F 00 08 */	lfs f1, 8(r31)
/* 801AF2A8 001AC1E8  C0 1B 00 20 */	lfs f0, 0x20(r27)
/* 801AF2AC 001AC1EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801AF2B0 001AC1F0  40 80 00 08 */	bge .L_801AF2B8
/* 801AF2B4 001AC1F4  D0 3B 00 20 */	stfs f1, 0x20(r27)
.L_801AF2B8:
/* 801AF2B8 001AC1F8  C0 3F 00 00 */	lfs f1, 0(r31)
/* 801AF2BC 001AC1FC  C0 1B 00 24 */	lfs f0, 0x24(r27)
/* 801AF2C0 001AC200  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801AF2C4 001AC204  40 81 00 08 */	ble .L_801AF2CC
/* 801AF2C8 001AC208  D0 3B 00 24 */	stfs f1, 0x24(r27)
.L_801AF2CC:
/* 801AF2CC 001AC20C  C0 3F 00 04 */	lfs f1, 4(r31)
/* 801AF2D0 001AC210  C0 1B 00 28 */	lfs f0, 0x28(r27)
/* 801AF2D4 001AC214  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801AF2D8 001AC218  40 81 00 08 */	ble .L_801AF2E0
/* 801AF2DC 001AC21C  D0 3B 00 28 */	stfs f1, 0x28(r27)
.L_801AF2E0:
/* 801AF2E0 001AC220  C0 3F 00 08 */	lfs f1, 8(r31)
/* 801AF2E4 001AC224  C0 1B 00 2C */	lfs f0, 0x2c(r27)
/* 801AF2E8 001AC228  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801AF2EC 001AC22C  40 81 00 08 */	ble .L_801AF2F4
/* 801AF2F0 001AC230  D0 3B 00 2C */	stfs f1, 0x2c(r27)
.L_801AF2F4:
/* 801AF2F4 001AC234  3B DE 00 01 */	addi r30, r30, 1
/* 801AF2F8 001AC238  3B FF 00 0C */	addi r31, r31, 0xc
/* 801AF2FC 001AC23C  2C 1E 00 04 */	cmpwi r30, 4
/* 801AF300 001AC240  41 80 FF 54 */	blt .L_801AF254
/* 801AF304 001AC244  C0 1C 00 30 */	lfs f0, 0x30(r28)
/* 801AF308 001AC248  38 00 00 00 */	li r0, 0
/* 801AF30C 001AC24C  C0 22 AF E0 */	lfs f1, lbl_80519340@sda21(r2)
/* 801AF310 001AC250  D0 1B 00 30 */	stfs f0, 0x30(r27)
/* 801AF314 001AC254  C0 02 AF C8 */	lfs f0, lbl_80519328@sda21(r2)
/* 801AF318 001AC258  C0 5B 00 1C */	lfs f2, 0x1c(r27)
/* 801AF31C 001AC25C  EC 22 08 28 */	fsubs f1, f2, f1
/* 801AF320 001AC260  D0 3B 00 1C */	stfs f1, 0x1c(r27)
/* 801AF324 001AC264  C0 3B 00 28 */	lfs f1, 0x28(r27)
/* 801AF328 001AC268  D0 3B 00 30 */	stfs f1, 0x30(r27)
/* 801AF32C 001AC26C  B0 1B 00 08 */	sth r0, 8(r27)
/* 801AF330 001AC270  D0 1B 00 0C */	stfs f0, 0xc(r27)
/* 801AF334 001AC274  D0 1B 00 14 */	stfs f0, 0x14(r27)
/* 801AF338 001AC278  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 801AF33C 001AC27C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801AF340 001AC280  7C 08 03 A6 */	mtlr r0
/* 801AF344 001AC284  38 21 00 60 */	addi r1, r1, 0x60
/* 801AF348 001AC288  4E 80 00 20 */	blr 

.global directDraw__Q24Game12AABBWaterBoxFR8Graphics
directDraw__Q24Game12AABBWaterBoxFR8Graphics:
/* 801AF34C 001AC28C  4E 80 00 20 */	blr 

.global __ct__Q24Game6SeaMgrFv
__ct__Q24Game6SeaMgrFv:
/* 801AF350 001AC290  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801AF354 001AC294  7C 08 02 A6 */	mflr r0
/* 801AF358 001AC298  3C 80 80 48 */	lis r4, lbl_8047F958@ha
/* 801AF35C 001AC29C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801AF360 001AC2A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801AF364 001AC2A4  3B E4 F9 58 */	addi r31, r4, lbl_8047F958@l
/* 801AF368 001AC2A8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801AF36C 001AC2AC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801AF370 001AC2B0  7C 7D 1B 78 */	mr r29, r3
/* 801AF374 001AC2B4  93 81 00 10 */	stw r28, 0x10(r1)
/* 801AF378 001AC2B8  7F BC EB 78 */	mr r28, r29
/* 801AF37C 001AC2BC  48 26 20 15 */	bl __ct__5CNodeFv
/* 801AF380 001AC2C0  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801AF384 001AC2C4  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8WaterBox>"@ha
/* 801AF388 001AC2C8  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801AF38C 001AC2CC  3C A0 80 4B */	lis r5, __vt__16GenericObjectMgr@ha
/* 801AF390 001AC2D0  90 1C 00 00 */	stw r0, 0(r28)
/* 801AF394 001AC2D4  38 03 59 40 */	addi r0, r3, "__vt__27Container<Q24Game8WaterBox>"@l
/* 801AF398 001AC2D8  3C 80 80 4B */	lis r4, "__vt__27ObjectMgr<Q24Game8WaterBox>"@ha
/* 801AF39C 001AC2DC  3C 60 80 4B */	lis r3, "__vt__31NodeObjectMgr<Q24Game8WaterBox>"@ha
/* 801AF3A0 001AC2E0  90 1C 00 00 */	stw r0, 0(r28)
/* 801AF3A4 001AC2E4  38 00 00 00 */	li r0, 0
/* 801AF3A8 001AC2E8  38 C4 58 C4 */	addi r6, r4, "__vt__27ObjectMgr<Q24Game8WaterBox>"@l
/* 801AF3AC 001AC2EC  38 83 58 44 */	addi r4, r3, "__vt__31NodeObjectMgr<Q24Game8WaterBox>"@l
/* 801AF3B0 001AC2F0  98 1C 00 18 */	stb r0, 0x18(r28)
/* 801AF3B4 001AC2F4  38 05 B5 F0 */	addi r0, r5, __vt__16GenericObjectMgr@l
/* 801AF3B8 001AC2F8  3B DC 00 20 */	addi r30, r28, 0x20
/* 801AF3BC 001AC2FC  38 A6 00 2C */	addi r5, r6, 0x2c
/* 801AF3C0 001AC300  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 801AF3C4 001AC304  38 04 00 2C */	addi r0, r4, 0x2c
/* 801AF3C8 001AC308  7F C3 F3 78 */	mr r3, r30
/* 801AF3CC 001AC30C  90 DC 00 00 */	stw r6, 0(r28)
/* 801AF3D0 001AC310  90 BC 00 1C */	stw r5, 0x1c(r28)
/* 801AF3D4 001AC314  90 9C 00 00 */	stw r4, 0(r28)
/* 801AF3D8 001AC318  90 1C 00 1C */	stw r0, 0x1c(r28)
/* 801AF3DC 001AC31C  48 26 1F B5 */	bl __ct__5CNodeFv
/* 801AF3E0 001AC320  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8WaterBox>"@ha
/* 801AF3E4 001AC324  3C 60 80 4B */	lis r3, __vt__Q24Game6SeaMgr@ha
/* 801AF3E8 001AC328  38 84 58 34 */	addi r4, r4, "__vt__29TObjectNode<Q24Game8WaterBox>"@l
/* 801AF3EC 001AC32C  38 00 00 01 */	li r0, 1
/* 801AF3F0 001AC330  90 9E 00 00 */	stw r4, 0(r30)
/* 801AF3F4 001AC334  38 83 57 B4 */	addi r4, r3, __vt__Q24Game6SeaMgr@l
/* 801AF3F8 001AC338  38 64 00 2C */	addi r3, r4, 0x2c
/* 801AF3FC 001AC33C  90 9D 00 00 */	stw r4, 0(r29)
/* 801AF400 001AC340  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 801AF404 001AC344  90 1D 00 3C */	stw r0, 0x3c(r29)
/* 801AF408 001AC348  80 1D 00 3C */	lwz r0, 0x3c(r29)
/* 801AF40C 001AC34C  54 03 10 3A */	slwi r3, r0, 2
/* 801AF410 001AC350  4B E7 4B 9D */	bl __nwa__FUl
/* 801AF414 001AC354  90 7D 00 40 */	stw r3, 0x40(r29)
/* 801AF418 001AC358  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801AF41C 001AC35C  28 03 00 00 */	cmplwi r3, 0
/* 801AF420 001AC360  41 82 00 44 */	beq .L_801AF464
/* 801AF424 001AC364  80 63 00 44 */	lwz r3, 0x44(r3)
/* 801AF428 001AC368  38 00 00 00 */	li r0, 0
/* 801AF42C 001AC36C  2C 03 00 01 */	cmpwi r3, 1
/* 801AF430 001AC370  41 82 00 0C */	beq .L_801AF43C
/* 801AF434 001AC374  2C 03 00 03 */	cmpwi r3, 3
/* 801AF438 001AC378  40 82 00 08 */	bne .L_801AF440
.L_801AF43C:
/* 801AF43C 001AC37C  38 00 00 01 */	li r0, 1
.L_801AF440:
/* 801AF440 001AC380  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801AF444 001AC384  40 82 00 20 */	bne .L_801AF464
/* 801AF448 001AC388  38 7F 00 3C */	addi r3, r31, 0x3c
/* 801AF44C 001AC38C  38 80 00 01 */	li r4, 1
/* 801AF450 001AC390  38 A0 00 00 */	li r5, 0
/* 801AF454 001AC394  38 C0 00 01 */	li r6, 1
/* 801AF458 001AC398  4B E6 BC D9 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 801AF45C 001AC39C  7C 7E 1B 78 */	mr r30, r3
/* 801AF460 001AC3A0  48 00 00 1C */	b .L_801AF47C
.L_801AF464:
/* 801AF464 001AC3A4  38 7F 00 58 */	addi r3, r31, 0x58
/* 801AF468 001AC3A8  38 80 00 01 */	li r4, 1
/* 801AF46C 001AC3AC  38 A0 00 00 */	li r5, 0
/* 801AF470 001AC3B0  38 C0 00 01 */	li r6, 1
/* 801AF474 001AC3B4  4B E6 BC BD */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 801AF478 001AC3B8  7C 7E 1B 78 */	mr r30, r3
.L_801AF47C:
/* 801AF47C 001AC3BC  28 1E 00 00 */	cmplwi r30, 0
/* 801AF480 001AC3C0  40 82 00 18 */	bne .L_801AF498
/* 801AF484 001AC3C4  38 7F 00 0C */	addi r3, r31, 0xc
/* 801AF488 001AC3C8  38 BF 00 78 */	addi r5, r31, 0x78
/* 801AF48C 001AC3CC  38 80 02 0F */	li r4, 0x20f
/* 801AF490 001AC3D0  4C C6 31 82 */	crclr 6
/* 801AF494 001AC3D4  4B E7 B1 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_801AF498:
/* 801AF498 001AC3D8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801AF49C 001AC3DC  28 03 00 00 */	cmplwi r3, 0
/* 801AF4A0 001AC3E0  41 82 00 44 */	beq .L_801AF4E4
/* 801AF4A4 001AC3E4  80 63 00 44 */	lwz r3, 0x44(r3)
/* 801AF4A8 001AC3E8  38 00 00 00 */	li r0, 0
/* 801AF4AC 001AC3EC  2C 03 00 01 */	cmpwi r3, 1
/* 801AF4B0 001AC3F0  41 82 00 0C */	beq .L_801AF4BC
/* 801AF4B4 001AC3F4  2C 03 00 03 */	cmpwi r3, 3
/* 801AF4B8 001AC3F8  40 82 00 08 */	bne .L_801AF4C0
.L_801AF4BC:
/* 801AF4BC 001AC3FC  38 00 00 01 */	li r0, 1
.L_801AF4C0:
/* 801AF4C0 001AC400  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801AF4C4 001AC404  40 82 00 20 */	bne .L_801AF4E4
/* 801AF4C8 001AC408  7F C3 F3 78 */	mr r3, r30
/* 801AF4CC 001AC40C  38 9F 00 84 */	addi r4, r31, 0x84
/* 801AF4D0 001AC410  81 9E 00 00 */	lwz r12, 0(r30)
/* 801AF4D4 001AC414  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AF4D8 001AC418  7D 89 03 A6 */	mtctr r12
/* 801AF4DC 001AC41C  4E 80 04 21 */	bctrl 
/* 801AF4E0 001AC420  48 00 00 1C */	b .L_801AF4FC
.L_801AF4E4:
/* 801AF4E4 001AC424  7F C3 F3 78 */	mr r3, r30
/* 801AF4E8 001AC428  38 9F 00 9C */	addi r4, r31, 0x9c
/* 801AF4EC 001AC42C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801AF4F0 001AC430  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AF4F4 001AC434  7D 89 03 A6 */	mtctr r12
/* 801AF4F8 001AC438  4E 80 04 21 */	bctrl 
.L_801AF4FC:
/* 801AF4FC 001AC43C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801AF500 001AC440  28 04 00 00 */	cmplwi r4, 0
/* 801AF504 001AC444  41 82 00 34 */	beq .L_801AF538
/* 801AF508 001AC448  80 84 00 44 */	lwz r4, 0x44(r4)
/* 801AF50C 001AC44C  38 00 00 00 */	li r0, 0
/* 801AF510 001AC450  2C 04 00 01 */	cmpwi r4, 1
/* 801AF514 001AC454  41 82 00 0C */	beq .L_801AF520
/* 801AF518 001AC458  2C 04 00 03 */	cmpwi r4, 3
/* 801AF51C 001AC45C  40 82 00 08 */	bne .L_801AF524
.L_801AF520:
/* 801AF520 001AC460  38 00 00 01 */	li r0, 1
.L_801AF524:
/* 801AF524 001AC464  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801AF528 001AC468  41 82 00 10 */	beq .L_801AF538
/* 801AF52C 001AC46C  3C 80 20 24 */	lis r4, 0x20240010@ha
/* 801AF530 001AC470  38 84 00 10 */	addi r4, r4, 0x20240010@l
/* 801AF534 001AC474  48 00 00 0C */	b .L_801AF540
.L_801AF538:
/* 801AF538 001AC478  3C 80 21 24 */	lis r4, 0x21240010@ha
/* 801AF53C 001AC47C  38 84 00 10 */	addi r4, r4, 0x21240010@l
.L_801AF540:
/* 801AF540 001AC480  4B EC 03 55 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 801AF544 001AC484  80 BD 00 40 */	lwz r5, 0x40(r29)
/* 801AF548 001AC488  38 80 00 00 */	li r4, 0
/* 801AF54C 001AC48C  90 65 00 00 */	stw r3, 0(r5)
/* 801AF550 001AC490  80 7D 00 40 */	lwz r3, 0x40(r29)
/* 801AF554 001AC494  80 63 00 00 */	lwz r3, 0(r3)
/* 801AF558 001AC498  48 28 ED 45 */	bl enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
/* 801AF55C 001AC49C  83 9D 00 3C */	lwz r28, 0x3c(r29)
/* 801AF560 001AC4A0  57 83 20 36 */	slwi r3, r28, 4
/* 801AF564 001AC4A4  38 63 00 10 */	addi r3, r3, 0x10
/* 801AF568 001AC4A8  4B E7 4A 45 */	bl __nwa__FUl
/* 801AF56C 001AC4AC  3C 80 80 43 */	lis r4, __ct__Q23Sys15MatTexAnimationFv@ha
/* 801AF570 001AC4B0  7F 87 E3 78 */	mr r7, r28
/* 801AF574 001AC4B4  38 84 41 34 */	addi r4, r4, __ct__Q23Sys15MatTexAnimationFv@l
/* 801AF578 001AC4B8  38 A0 00 00 */	li r5, 0
/* 801AF57C 001AC4BC  38 C0 00 10 */	li r6, 0x10
/* 801AF580 001AC4C0  4B F1 24 71 */	bl __construct_new_array
/* 801AF584 001AC4C4  90 7D 00 44 */	stw r3, 0x44(r29)
/* 801AF588 001AC4C8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801AF58C 001AC4CC  28 03 00 00 */	cmplwi r3, 0
/* 801AF590 001AC4D0  41 82 00 48 */	beq .L_801AF5D8
/* 801AF594 001AC4D4  80 63 00 44 */	lwz r3, 0x44(r3)
/* 801AF598 001AC4D8  38 00 00 00 */	li r0, 0
/* 801AF59C 001AC4DC  2C 03 00 01 */	cmpwi r3, 1
/* 801AF5A0 001AC4E0  41 82 00 0C */	beq .L_801AF5AC
/* 801AF5A4 001AC4E4  2C 03 00 03 */	cmpwi r3, 3
/* 801AF5A8 001AC4E8  40 82 00 08 */	bne .L_801AF5B0
.L_801AF5AC:
/* 801AF5AC 001AC4EC  38 00 00 01 */	li r0, 1
.L_801AF5B0:
/* 801AF5B0 001AC4F0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801AF5B4 001AC4F4  40 82 00 24 */	bne .L_801AF5D8
/* 801AF5B8 001AC4F8  7F C3 F3 78 */	mr r3, r30
/* 801AF5BC 001AC4FC  38 9F 00 A8 */	addi r4, r31, 0xa8
/* 801AF5C0 001AC500  81 9E 00 00 */	lwz r12, 0(r30)
/* 801AF5C4 001AC504  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AF5C8 001AC508  7D 89 03 A6 */	mtctr r12
/* 801AF5CC 001AC50C  4E 80 04 21 */	bctrl 
/* 801AF5D0 001AC510  7C 7C 1B 78 */	mr r28, r3
/* 801AF5D4 001AC514  48 00 00 20 */	b .L_801AF5F4
.L_801AF5D8:
/* 801AF5D8 001AC518  7F C3 F3 78 */	mr r3, r30
/* 801AF5DC 001AC51C  38 9F 00 C0 */	addi r4, r31, 0xc0
/* 801AF5E0 001AC520  81 9E 00 00 */	lwz r12, 0(r30)
/* 801AF5E4 001AC524  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AF5E8 001AC528  7D 89 03 A6 */	mtctr r12
/* 801AF5EC 001AC52C  4E 80 04 21 */	bctrl 
/* 801AF5F0 001AC530  7C 7C 1B 78 */	mr r28, r3
.L_801AF5F4:
/* 801AF5F4 001AC534  28 1C 00 00 */	cmplwi r28, 0
/* 801AF5F8 001AC538  40 82 00 18 */	bne .L_801AF610
/* 801AF5FC 001AC53C  38 7F 00 0C */	addi r3, r31, 0xc
/* 801AF600 001AC540  38 BF 00 78 */	addi r5, r31, 0x78
/* 801AF604 001AC544  38 80 02 37 */	li r4, 0x237
/* 801AF608 001AC548  4C C6 31 82 */	crclr 6
/* 801AF60C 001AC54C  4B E7 B0 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801AF610:
/* 801AF610 001AC550  80 BD 00 40 */	lwz r5, 0x40(r29)
/* 801AF614 001AC554  7F 84 E3 78 */	mr r4, r28
/* 801AF618 001AC558  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 801AF61C 001AC55C  80 A5 00 00 */	lwz r5, 0(r5)
/* 801AF620 001AC560  48 28 4A 01 */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 801AF624 001AC564  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801AF628 001AC568  7F A3 EB 78 */	mr r3, r29
/* 801AF62C 001AC56C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801AF630 001AC570  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801AF634 001AC574  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801AF638 001AC578  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801AF63C 001AC57C  7C 08 03 A6 */	mtlr r0
/* 801AF640 001AC580  38 21 00 20 */	addi r1, r1, 0x20
/* 801AF644 001AC584  4E 80 00 20 */	blr 

.global "__dt__31NodeObjectMgr<Q24Game8WaterBox>Fv"
"__dt__31NodeObjectMgr<Q24Game8WaterBox>Fv":
/* 801AF648 001AC588  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AF64C 001AC58C  7C 08 02 A6 */	mflr r0
/* 801AF650 001AC590  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AF654 001AC594  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801AF658 001AC598  7C 9F 23 78 */	mr r31, r4
/* 801AF65C 001AC59C  93 C1 00 08 */	stw r30, 8(r1)
/* 801AF660 001AC5A0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801AF664 001AC5A4  41 82 00 90 */	beq .L_801AF6F4
/* 801AF668 001AC5A8  3C 60 80 4B */	lis r3, "__vt__31NodeObjectMgr<Q24Game8WaterBox>"@ha
/* 801AF66C 001AC5AC  34 1E 00 20 */	addic. r0, r30, 0x20
/* 801AF670 001AC5B0  38 63 58 44 */	addi r3, r3, "__vt__31NodeObjectMgr<Q24Game8WaterBox>"@l
/* 801AF674 001AC5B4  90 7E 00 00 */	stw r3, 0(r30)
/* 801AF678 001AC5B8  38 03 00 2C */	addi r0, r3, 0x2c
/* 801AF67C 001AC5BC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801AF680 001AC5C0  41 82 00 1C */	beq .L_801AF69C
/* 801AF684 001AC5C4  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8WaterBox>"@ha
/* 801AF688 001AC5C8  38 7E 00 20 */	addi r3, r30, 0x20
/* 801AF68C 001AC5CC  38 04 58 34 */	addi r0, r4, "__vt__29TObjectNode<Q24Game8WaterBox>"@l
/* 801AF690 001AC5D0  38 80 00 00 */	li r4, 0
/* 801AF694 001AC5D4  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801AF698 001AC5D8  48 26 1E F1 */	bl __dt__5CNodeFv
.L_801AF69C:
/* 801AF69C 001AC5DC  28 1E 00 00 */	cmplwi r30, 0
/* 801AF6A0 001AC5E0  41 82 00 44 */	beq .L_801AF6E4
/* 801AF6A4 001AC5E4  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8WaterBox>"@ha
/* 801AF6A8 001AC5E8  38 63 58 C4 */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8WaterBox>"@l
/* 801AF6AC 001AC5EC  90 7E 00 00 */	stw r3, 0(r30)
/* 801AF6B0 001AC5F0  38 03 00 2C */	addi r0, r3, 0x2c
/* 801AF6B4 001AC5F4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801AF6B8 001AC5F8  41 82 00 2C */	beq .L_801AF6E4
/* 801AF6BC 001AC5FC  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8WaterBox>"@ha
/* 801AF6C0 001AC600  38 03 59 40 */	addi r0, r3, "__vt__27Container<Q24Game8WaterBox>"@l
/* 801AF6C4 001AC604  90 1E 00 00 */	stw r0, 0(r30)
/* 801AF6C8 001AC608  41 82 00 1C */	beq .L_801AF6E4
/* 801AF6CC 001AC60C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801AF6D0 001AC610  7F C3 F3 78 */	mr r3, r30
/* 801AF6D4 001AC614  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801AF6D8 001AC618  38 80 00 00 */	li r4, 0
/* 801AF6DC 001AC61C  90 1E 00 00 */	stw r0, 0(r30)
/* 801AF6E0 001AC620  48 26 1E A9 */	bl __dt__5CNodeFv
.L_801AF6E4:
/* 801AF6E4 001AC624  7F E0 07 35 */	extsh. r0, r31
/* 801AF6E8 001AC628  40 81 00 0C */	ble .L_801AF6F4
/* 801AF6EC 001AC62C  7F C3 F3 78 */	mr r3, r30
/* 801AF6F0 001AC630  4B E7 49 C5 */	bl __dl__FPv
.L_801AF6F4:
/* 801AF6F4 001AC634  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AF6F8 001AC638  7F C3 F3 78 */	mr r3, r30
/* 801AF6FC 001AC63C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801AF700 001AC640  83 C1 00 08 */	lwz r30, 8(r1)
/* 801AF704 001AC644  7C 08 03 A6 */	mtlr r0
/* 801AF708 001AC648  38 21 00 10 */	addi r1, r1, 0x10
/* 801AF70C 001AC64C  4E 80 00 20 */	blr 

.global "__dt__29TObjectNode<Q24Game8WaterBox>Fv"
"__dt__29TObjectNode<Q24Game8WaterBox>Fv":
/* 801AF710 001AC650  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AF714 001AC654  7C 08 02 A6 */	mflr r0
/* 801AF718 001AC658  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AF71C 001AC65C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801AF720 001AC660  7C 9F 23 78 */	mr r31, r4
/* 801AF724 001AC664  93 C1 00 08 */	stw r30, 8(r1)
/* 801AF728 001AC668  7C 7E 1B 79 */	or. r30, r3, r3
/* 801AF72C 001AC66C  41 82 00 28 */	beq .L_801AF754
/* 801AF730 001AC670  3C A0 80 4B */	lis r5, "__vt__29TObjectNode<Q24Game8WaterBox>"@ha
/* 801AF734 001AC674  38 80 00 00 */	li r4, 0
/* 801AF738 001AC678  38 05 58 34 */	addi r0, r5, "__vt__29TObjectNode<Q24Game8WaterBox>"@l
/* 801AF73C 001AC67C  90 1E 00 00 */	stw r0, 0(r30)
/* 801AF740 001AC680  48 26 1E 49 */	bl __dt__5CNodeFv
/* 801AF744 001AC684  7F E0 07 35 */	extsh. r0, r31
/* 801AF748 001AC688  40 81 00 0C */	ble .L_801AF754
/* 801AF74C 001AC68C  7F C3 F3 78 */	mr r3, r30
/* 801AF750 001AC690  4B E7 49 65 */	bl __dl__FPv
.L_801AF754:
/* 801AF754 001AC694  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AF758 001AC698  7F C3 F3 78 */	mr r3, r30
/* 801AF75C 001AC69C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801AF760 001AC6A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801AF764 001AC6A4  7C 08 03 A6 */	mtlr r0
/* 801AF768 001AC6A8  38 21 00 10 */	addi r1, r1, 0x10
/* 801AF76C 001AC6AC  4E 80 00 20 */	blr 

.global "__dt__27ObjectMgr<Q24Game8WaterBox>Fv"
"__dt__27ObjectMgr<Q24Game8WaterBox>Fv":
/* 801AF770 001AC6B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AF774 001AC6B4  7C 08 02 A6 */	mflr r0
/* 801AF778 001AC6B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AF77C 001AC6BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801AF780 001AC6C0  7C 9F 23 78 */	mr r31, r4
/* 801AF784 001AC6C4  93 C1 00 08 */	stw r30, 8(r1)
/* 801AF788 001AC6C8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801AF78C 001AC6CC  41 82 00 50 */	beq .L_801AF7DC
/* 801AF790 001AC6D0  3C 80 80 4B */	lis r4, "__vt__27ObjectMgr<Q24Game8WaterBox>"@ha
/* 801AF794 001AC6D4  38 84 58 C4 */	addi r4, r4, "__vt__27ObjectMgr<Q24Game8WaterBox>"@l
/* 801AF798 001AC6D8  90 9E 00 00 */	stw r4, 0(r30)
/* 801AF79C 001AC6DC  38 04 00 2C */	addi r0, r4, 0x2c
/* 801AF7A0 001AC6E0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801AF7A4 001AC6E4  41 82 00 28 */	beq .L_801AF7CC
/* 801AF7A8 001AC6E8  3C 80 80 4B */	lis r4, "__vt__27Container<Q24Game8WaterBox>"@ha
/* 801AF7AC 001AC6EC  38 04 59 40 */	addi r0, r4, "__vt__27Container<Q24Game8WaterBox>"@l
/* 801AF7B0 001AC6F0  90 1E 00 00 */	stw r0, 0(r30)
/* 801AF7B4 001AC6F4  41 82 00 18 */	beq .L_801AF7CC
/* 801AF7B8 001AC6F8  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801AF7BC 001AC6FC  38 80 00 00 */	li r4, 0
/* 801AF7C0 001AC700  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801AF7C4 001AC704  90 1E 00 00 */	stw r0, 0(r30)
/* 801AF7C8 001AC708  48 26 1D C1 */	bl __dt__5CNodeFv
.L_801AF7CC:
/* 801AF7CC 001AC70C  7F E0 07 35 */	extsh. r0, r31
/* 801AF7D0 001AC710  40 81 00 0C */	ble .L_801AF7DC
/* 801AF7D4 001AC714  7F C3 F3 78 */	mr r3, r30
/* 801AF7D8 001AC718  4B E7 48 DD */	bl __dl__FPv
.L_801AF7DC:
/* 801AF7DC 001AC71C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AF7E0 001AC720  7F C3 F3 78 */	mr r3, r30
/* 801AF7E4 001AC724  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801AF7E8 001AC728  83 C1 00 08 */	lwz r30, 8(r1)
/* 801AF7EC 001AC72C  7C 08 03 A6 */	mtlr r0
/* 801AF7F0 001AC730  38 21 00 10 */	addi r1, r1, 0x10
/* 801AF7F4 001AC734  4E 80 00 20 */	blr 

.global "__dt__27Container<Q24Game8WaterBox>Fv"
"__dt__27Container<Q24Game8WaterBox>Fv":
/* 801AF7F8 001AC738  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AF7FC 001AC73C  7C 08 02 A6 */	mflr r0
/* 801AF800 001AC740  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AF804 001AC744  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801AF808 001AC748  7C 9F 23 78 */	mr r31, r4
/* 801AF80C 001AC74C  93 C1 00 08 */	stw r30, 8(r1)
/* 801AF810 001AC750  7C 7E 1B 79 */	or. r30, r3, r3
/* 801AF814 001AC754  41 82 00 38 */	beq .L_801AF84C
/* 801AF818 001AC758  3C 80 80 4B */	lis r4, "__vt__27Container<Q24Game8WaterBox>"@ha
/* 801AF81C 001AC75C  38 04 59 40 */	addi r0, r4, "__vt__27Container<Q24Game8WaterBox>"@l
/* 801AF820 001AC760  90 1E 00 00 */	stw r0, 0(r30)
/* 801AF824 001AC764  41 82 00 18 */	beq .L_801AF83C
/* 801AF828 001AC768  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801AF82C 001AC76C  38 80 00 00 */	li r4, 0
/* 801AF830 001AC770  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801AF834 001AC774  90 1E 00 00 */	stw r0, 0(r30)
/* 801AF838 001AC778  48 26 1D 51 */	bl __dt__5CNodeFv
.L_801AF83C:
/* 801AF83C 001AC77C  7F E0 07 35 */	extsh. r0, r31
/* 801AF840 001AC780  40 81 00 0C */	ble .L_801AF84C
/* 801AF844 001AC784  7F C3 F3 78 */	mr r3, r30
/* 801AF848 001AC788  4B E7 48 6D */	bl __dl__FPv
.L_801AF84C:
/* 801AF84C 001AC78C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AF850 001AC790  7F C3 F3 78 */	mr r3, r30
/* 801AF854 001AC794  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801AF858 001AC798  83 C1 00 08 */	lwz r30, 8(r1)
/* 801AF85C 001AC79C  7C 08 03 A6 */	mtlr r0
/* 801AF860 001AC7A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801AF864 001AC7A4  4E 80 00 20 */	blr 

.global attachModel__Q24Game8WaterBoxFP12J3DModelDataPQ23Sys15MatTexAnimationf
attachModel__Q24Game8WaterBoxFP12J3DModelDataPQ23Sys15MatTexAnimationf:
/* 801AF868 001AC7A8  4E 80 00 20 */	blr 

.global findWater__Q24Game6SeaMgrFRQ23Sys6Sphere
findWater__Q24Game6SeaMgrFRQ23Sys6Sphere:
/* 801AF86C 001AC7AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801AF870 001AC7B0  7C 08 02 A6 */	mflr r0
/* 801AF874 001AC7B4  3C A0 80 4B */	lis r5, "__vt__26Iterator<Q24Game8WaterBox>"@ha
/* 801AF878 001AC7B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801AF87C 001AC7BC  38 00 00 00 */	li r0, 0
/* 801AF880 001AC7C0  38 A5 19 D4 */	addi r5, r5, "__vt__26Iterator<Q24Game8WaterBox>"@l
/* 801AF884 001AC7C4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801AF888 001AC7C8  28 00 00 00 */	cmplwi r0, 0
/* 801AF88C 001AC7CC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801AF890 001AC7D0  7C 9E 23 78 */	mr r30, r4
/* 801AF894 001AC7D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AF898 001AC7D8  90 A1 00 08 */	stw r5, 8(r1)
/* 801AF89C 001AC7DC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801AF8A0 001AC7E0  90 61 00 10 */	stw r3, 0x10(r1)
/* 801AF8A4 001AC7E4  40 82 00 1C */	bne .L_801AF8C0
/* 801AF8A8 001AC7E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801AF8AC 001AC7EC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AF8B0 001AC7F0  7D 89 03 A6 */	mtctr r12
/* 801AF8B4 001AC7F4  4E 80 04 21 */	bctrl 
/* 801AF8B8 001AC7F8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AF8BC 001AC7FC  48 00 01 88 */	b .L_801AFA44
.L_801AF8C0:
/* 801AF8C0 001AC800  81 83 00 00 */	lwz r12, 0(r3)
/* 801AF8C4 001AC804  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AF8C8 001AC808  7D 89 03 A6 */	mtctr r12
/* 801AF8CC 001AC80C  4E 80 04 21 */	bctrl 
/* 801AF8D0 001AC810  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AF8D4 001AC814  48 00 00 58 */	b .L_801AF92C
.L_801AF8D8:
/* 801AF8D8 001AC818  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AF8DC 001AC81C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AF8E0 001AC820  81 83 00 00 */	lwz r12, 0(r3)
/* 801AF8E4 001AC824  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AF8E8 001AC828  7D 89 03 A6 */	mtctr r12
/* 801AF8EC 001AC82C  4E 80 04 21 */	bctrl 
/* 801AF8F0 001AC830  7C 64 1B 78 */	mr r4, r3
/* 801AF8F4 001AC834  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801AF8F8 001AC838  81 83 00 00 */	lwz r12, 0(r3)
/* 801AF8FC 001AC83C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AF900 001AC840  7D 89 03 A6 */	mtctr r12
/* 801AF904 001AC844  4E 80 04 21 */	bctrl 
/* 801AF908 001AC848  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AF90C 001AC84C  40 82 01 38 */	bne .L_801AFA44
/* 801AF910 001AC850  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AF914 001AC854  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AF918 001AC858  81 83 00 00 */	lwz r12, 0(r3)
/* 801AF91C 001AC85C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AF920 001AC860  7D 89 03 A6 */	mtctr r12
/* 801AF924 001AC864  4E 80 04 21 */	bctrl 
/* 801AF928 001AC868  90 61 00 0C */	stw r3, 0xc(r1)
.L_801AF92C:
/* 801AF92C 001AC86C  81 81 00 08 */	lwz r12, 8(r1)
/* 801AF930 001AC870  38 61 00 08 */	addi r3, r1, 8
/* 801AF934 001AC874  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AF938 001AC878  7D 89 03 A6 */	mtctr r12
/* 801AF93C 001AC87C  4E 80 04 21 */	bctrl 
/* 801AF940 001AC880  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AF944 001AC884  41 82 FF 94 */	beq .L_801AF8D8
/* 801AF948 001AC888  48 00 00 FC */	b .L_801AFA44
.L_801AF94C:
/* 801AF94C 001AC88C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AF950 001AC890  81 83 00 00 */	lwz r12, 0(r3)
/* 801AF954 001AC894  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AF958 001AC898  7D 89 03 A6 */	mtctr r12
/* 801AF95C 001AC89C  4E 80 04 21 */	bctrl 
/* 801AF960 001AC8A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801AF964 001AC8A4  7C 7F 1B 78 */	mr r31, r3
/* 801AF968 001AC8A8  7F C4 F3 78 */	mr r4, r30
/* 801AF96C 001AC8AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AF970 001AC8B0  7D 89 03 A6 */	mtctr r12
/* 801AF974 001AC8B4  4E 80 04 21 */	bctrl 
/* 801AF978 001AC8B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AF97C 001AC8BC  41 82 00 0C */	beq .L_801AF988
/* 801AF980 001AC8C0  7F E3 FB 78 */	mr r3, r31
/* 801AF984 001AC8C4  48 00 00 E4 */	b .L_801AFA68
.L_801AF988:
/* 801AF988 001AC8C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AF98C 001AC8CC  28 00 00 00 */	cmplwi r0, 0
/* 801AF990 001AC8D0  40 82 00 24 */	bne .L_801AF9B4
/* 801AF994 001AC8D4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AF998 001AC8D8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AF99C 001AC8DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AF9A0 001AC8E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AF9A4 001AC8E4  7D 89 03 A6 */	mtctr r12
/* 801AF9A8 001AC8E8  4E 80 04 21 */	bctrl 
/* 801AF9AC 001AC8EC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AF9B0 001AC8F0  48 00 00 94 */	b .L_801AFA44
.L_801AF9B4:
/* 801AF9B4 001AC8F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AF9B8 001AC8F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AF9BC 001AC8FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AF9C0 001AC900  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AF9C4 001AC904  7D 89 03 A6 */	mtctr r12
/* 801AF9C8 001AC908  4E 80 04 21 */	bctrl 
/* 801AF9CC 001AC90C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AF9D0 001AC910  48 00 00 58 */	b .L_801AFA28
.L_801AF9D4:
/* 801AF9D4 001AC914  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AF9D8 001AC918  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AF9DC 001AC91C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AF9E0 001AC920  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AF9E4 001AC924  7D 89 03 A6 */	mtctr r12
/* 801AF9E8 001AC928  4E 80 04 21 */	bctrl 
/* 801AF9EC 001AC92C  7C 64 1B 78 */	mr r4, r3
/* 801AF9F0 001AC930  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801AF9F4 001AC934  81 83 00 00 */	lwz r12, 0(r3)
/* 801AF9F8 001AC938  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AF9FC 001AC93C  7D 89 03 A6 */	mtctr r12
/* 801AFA00 001AC940  4E 80 04 21 */	bctrl 
/* 801AFA04 001AC944  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AFA08 001AC948  40 82 00 3C */	bne .L_801AFA44
/* 801AFA0C 001AC94C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFA10 001AC950  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AFA14 001AC954  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFA18 001AC958  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AFA1C 001AC95C  7D 89 03 A6 */	mtctr r12
/* 801AFA20 001AC960  4E 80 04 21 */	bctrl 
/* 801AFA24 001AC964  90 61 00 0C */	stw r3, 0xc(r1)
.L_801AFA28:
/* 801AFA28 001AC968  81 81 00 08 */	lwz r12, 8(r1)
/* 801AFA2C 001AC96C  38 61 00 08 */	addi r3, r1, 8
/* 801AFA30 001AC970  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AFA34 001AC974  7D 89 03 A6 */	mtctr r12
/* 801AFA38 001AC978  4E 80 04 21 */	bctrl 
/* 801AFA3C 001AC97C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AFA40 001AC980  41 82 FF 94 */	beq .L_801AF9D4
.L_801AFA44:
/* 801AFA44 001AC984  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFA48 001AC988  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFA4C 001AC98C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801AFA50 001AC990  7D 89 03 A6 */	mtctr r12
/* 801AFA54 001AC994  4E 80 04 21 */	bctrl 
/* 801AFA58 001AC998  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AFA5C 001AC99C  7C 04 18 40 */	cmplw r4, r3
/* 801AFA60 001AC9A0  40 82 FE EC */	bne .L_801AF94C
/* 801AFA64 001AC9A4  38 60 00 00 */	li r3, 0
.L_801AFA68:
/* 801AFA68 001AC9A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801AFA6C 001AC9AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801AFA70 001AC9B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801AFA74 001AC9B4  7C 08 03 A6 */	mtlr r0
/* 801AFA78 001AC9B8  38 21 00 20 */	addi r1, r1, 0x20
/* 801AFA7C 001AC9BC  4E 80 00 20 */	blr 

.global findWater2d__Q24Game6SeaMgrFRQ23Sys6Sphere
findWater2d__Q24Game6SeaMgrFRQ23Sys6Sphere:
/* 801AFA80 001AC9C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801AFA84 001AC9C4  7C 08 02 A6 */	mflr r0
/* 801AFA88 001AC9C8  3C A0 80 4B */	lis r5, "__vt__26Iterator<Q24Game8WaterBox>"@ha
/* 801AFA8C 001AC9CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801AFA90 001AC9D0  38 00 00 00 */	li r0, 0
/* 801AFA94 001AC9D4  38 A5 19 D4 */	addi r5, r5, "__vt__26Iterator<Q24Game8WaterBox>"@l
/* 801AFA98 001AC9D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801AFA9C 001AC9DC  28 00 00 00 */	cmplwi r0, 0
/* 801AFAA0 001AC9E0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801AFAA4 001AC9E4  7C 9E 23 78 */	mr r30, r4
/* 801AFAA8 001AC9E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AFAAC 001AC9EC  90 A1 00 08 */	stw r5, 8(r1)
/* 801AFAB0 001AC9F0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801AFAB4 001AC9F4  90 61 00 10 */	stw r3, 0x10(r1)
/* 801AFAB8 001AC9F8  40 82 00 1C */	bne .L_801AFAD4
/* 801AFABC 001AC9FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFAC0 001ACA00  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AFAC4 001ACA04  7D 89 03 A6 */	mtctr r12
/* 801AFAC8 001ACA08  4E 80 04 21 */	bctrl 
/* 801AFACC 001ACA0C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AFAD0 001ACA10  48 00 01 88 */	b .L_801AFC58
.L_801AFAD4:
/* 801AFAD4 001ACA14  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFAD8 001ACA18  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AFADC 001ACA1C  7D 89 03 A6 */	mtctr r12
/* 801AFAE0 001ACA20  4E 80 04 21 */	bctrl 
/* 801AFAE4 001ACA24  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AFAE8 001ACA28  48 00 00 58 */	b .L_801AFB40
.L_801AFAEC:
/* 801AFAEC 001ACA2C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFAF0 001ACA30  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AFAF4 001ACA34  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFAF8 001ACA38  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AFAFC 001ACA3C  7D 89 03 A6 */	mtctr r12
/* 801AFB00 001ACA40  4E 80 04 21 */	bctrl 
/* 801AFB04 001ACA44  7C 64 1B 78 */	mr r4, r3
/* 801AFB08 001ACA48  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801AFB0C 001ACA4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFB10 001ACA50  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AFB14 001ACA54  7D 89 03 A6 */	mtctr r12
/* 801AFB18 001ACA58  4E 80 04 21 */	bctrl 
/* 801AFB1C 001ACA5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AFB20 001ACA60  40 82 01 38 */	bne .L_801AFC58
/* 801AFB24 001ACA64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFB28 001ACA68  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AFB2C 001ACA6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFB30 001ACA70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AFB34 001ACA74  7D 89 03 A6 */	mtctr r12
/* 801AFB38 001ACA78  4E 80 04 21 */	bctrl 
/* 801AFB3C 001ACA7C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801AFB40:
/* 801AFB40 001ACA80  81 81 00 08 */	lwz r12, 8(r1)
/* 801AFB44 001ACA84  38 61 00 08 */	addi r3, r1, 8
/* 801AFB48 001ACA88  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AFB4C 001ACA8C  7D 89 03 A6 */	mtctr r12
/* 801AFB50 001ACA90  4E 80 04 21 */	bctrl 
/* 801AFB54 001ACA94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AFB58 001ACA98  41 82 FF 94 */	beq .L_801AFAEC
/* 801AFB5C 001ACA9C  48 00 00 FC */	b .L_801AFC58
.L_801AFB60:
/* 801AFB60 001ACAA0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFB64 001ACAA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFB68 001ACAA8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AFB6C 001ACAAC  7D 89 03 A6 */	mtctr r12
/* 801AFB70 001ACAB0  4E 80 04 21 */	bctrl 
/* 801AFB74 001ACAB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFB78 001ACAB8  7C 7F 1B 78 */	mr r31, r3
/* 801AFB7C 001ACABC  7F C4 F3 78 */	mr r4, r30
/* 801AFB80 001ACAC0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801AFB84 001ACAC4  7D 89 03 A6 */	mtctr r12
/* 801AFB88 001ACAC8  4E 80 04 21 */	bctrl 
/* 801AFB8C 001ACACC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AFB90 001ACAD0  41 82 00 0C */	beq .L_801AFB9C
/* 801AFB94 001ACAD4  7F E3 FB 78 */	mr r3, r31
/* 801AFB98 001ACAD8  48 00 00 E4 */	b .L_801AFC7C
.L_801AFB9C:
/* 801AFB9C 001ACADC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AFBA0 001ACAE0  28 00 00 00 */	cmplwi r0, 0
/* 801AFBA4 001ACAE4  40 82 00 24 */	bne .L_801AFBC8
/* 801AFBA8 001ACAE8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFBAC 001ACAEC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AFBB0 001ACAF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFBB4 001ACAF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AFBB8 001ACAF8  7D 89 03 A6 */	mtctr r12
/* 801AFBBC 001ACAFC  4E 80 04 21 */	bctrl 
/* 801AFBC0 001ACB00  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AFBC4 001ACB04  48 00 00 94 */	b .L_801AFC58
.L_801AFBC8:
/* 801AFBC8 001ACB08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFBCC 001ACB0C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AFBD0 001ACB10  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFBD4 001ACB14  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AFBD8 001ACB18  7D 89 03 A6 */	mtctr r12
/* 801AFBDC 001ACB1C  4E 80 04 21 */	bctrl 
/* 801AFBE0 001ACB20  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AFBE4 001ACB24  48 00 00 58 */	b .L_801AFC3C
.L_801AFBE8:
/* 801AFBE8 001ACB28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFBEC 001ACB2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AFBF0 001ACB30  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFBF4 001ACB34  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AFBF8 001ACB38  7D 89 03 A6 */	mtctr r12
/* 801AFBFC 001ACB3C  4E 80 04 21 */	bctrl 
/* 801AFC00 001ACB40  7C 64 1B 78 */	mr r4, r3
/* 801AFC04 001ACB44  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801AFC08 001ACB48  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFC0C 001ACB4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AFC10 001ACB50  7D 89 03 A6 */	mtctr r12
/* 801AFC14 001ACB54  4E 80 04 21 */	bctrl 
/* 801AFC18 001ACB58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AFC1C 001ACB5C  40 82 00 3C */	bne .L_801AFC58
/* 801AFC20 001ACB60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFC24 001ACB64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AFC28 001ACB68  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFC2C 001ACB6C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AFC30 001ACB70  7D 89 03 A6 */	mtctr r12
/* 801AFC34 001ACB74  4E 80 04 21 */	bctrl 
/* 801AFC38 001ACB78  90 61 00 0C */	stw r3, 0xc(r1)
.L_801AFC3C:
/* 801AFC3C 001ACB7C  81 81 00 08 */	lwz r12, 8(r1)
/* 801AFC40 001ACB80  38 61 00 08 */	addi r3, r1, 8
/* 801AFC44 001ACB84  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AFC48 001ACB88  7D 89 03 A6 */	mtctr r12
/* 801AFC4C 001ACB8C  4E 80 04 21 */	bctrl 
/* 801AFC50 001ACB90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AFC54 001ACB94  41 82 FF 94 */	beq .L_801AFBE8
.L_801AFC58:
/* 801AFC58 001ACB98  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFC5C 001ACB9C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFC60 001ACBA0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801AFC64 001ACBA4  7D 89 03 A6 */	mtctr r12
/* 801AFC68 001ACBA8  4E 80 04 21 */	bctrl 
/* 801AFC6C 001ACBAC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AFC70 001ACBB0  7C 04 18 40 */	cmplw r4, r3
/* 801AFC74 001ACBB4  40 82 FE EC */	bne .L_801AFB60
/* 801AFC78 001ACBB8  38 60 00 00 */	li r3, 0
.L_801AFC7C:
/* 801AFC7C 001ACBBC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801AFC80 001ACBC0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801AFC84 001ACBC4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801AFC88 001ACBC8  7C 08 03 A6 */	mtlr r0
/* 801AFC8C 001ACBCC  38 21 00 20 */	addi r1, r1, 0x20
/* 801AFC90 001ACBD0  4E 80 00 20 */	blr 

.global inWater2d__Q24Game8WaterBoxFRQ23Sys6Sphere
inWater2d__Q24Game8WaterBoxFRQ23Sys6Sphere:
/* 801AFC94 001ACBD4  38 60 00 00 */	li r3, 0
/* 801AFC98 001ACBD8  4E 80 00 20 */	blr 

.global read__Q24Game6SeaMgrFR6Stream
read__Q24Game6SeaMgrFR6Stream:
/* 801AFC9C 001ACBDC  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801AFCA0 001ACBE0  7C 08 02 A6 */	mflr r0
/* 801AFCA4 001ACBE4  90 01 00 84 */	stw r0, 0x84(r1)
/* 801AFCA8 001ACBE8  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 801AFCAC 001ACBEC  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 801AFCB0 001ACBF0  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 801AFCB4 001ACBF4  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 801AFCB8 001ACBF8  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 801AFCBC 001ACBFC  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 801AFCC0 001ACC00  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 801AFCC4 001ACC04  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 801AFCC8 001ACC08  BF 41 00 28 */	stmw r26, 0x28(r1)
/* 801AFCCC 001ACC0C  7C 9C 23 78 */	mr r28, r4
/* 801AFCD0 001ACC10  7C 7B 1B 78 */	mr r27, r3
/* 801AFCD4 001ACC14  7F 83 E3 78 */	mr r3, r28
/* 801AFCD8 001ACC18  48 26 4D B9 */	bl readInt__6StreamFv
/* 801AFCDC 001ACC1C  7F 83 E3 78 */	mr r3, r28
/* 801AFCE0 001ACC20  48 26 4D B1 */	bl readInt__6StreamFv
/* 801AFCE4 001ACC24  C3 82 AF C0 */	lfs f28, lbl_80519320@sda21(r2)
/* 801AFCE8 001ACC28  7C 7F 1B 78 */	mr r31, r3
/* 801AFCEC 001ACC2C  C3 A2 AF C4 */	lfs f29, lbl_80519324@sda21(r2)
/* 801AFCF0 001ACC30  3B A0 00 00 */	li r29, 0
/* 801AFCF4 001ACC34  C3 C2 AF E0 */	lfs f30, lbl_80519340@sda21(r2)
/* 801AFCF8 001ACC38  C3 E2 AF C8 */	lfs f31, lbl_80519328@sda21(r2)
/* 801AFCFC 001ACC3C  48 00 01 70 */	b .L_801AFE6C
.L_801AFD00:
/* 801AFD00 001ACC40  D3 81 00 08 */	stfs f28, 8(r1)
/* 801AFD04 001ACC44  7F 84 E3 78 */	mr r4, r28
/* 801AFD08 001ACC48  38 61 00 08 */	addi r3, r1, 8
/* 801AFD0C 001ACC4C  D3 81 00 0C */	stfs f28, 0xc(r1)
/* 801AFD10 001ACC50  D3 81 00 10 */	stfs f28, 0x10(r1)
/* 801AFD14 001ACC54  D3 A1 00 14 */	stfs f29, 0x14(r1)
/* 801AFD18 001ACC58  D3 A1 00 18 */	stfs f29, 0x18(r1)
/* 801AFD1C 001ACC5C  D3 A1 00 1C */	stfs f29, 0x1c(r1)
/* 801AFD20 001ACC60  48 26 1C 2D */	bl read__8BoundBoxFR6Stream
/* 801AFD24 001ACC64  38 60 00 68 */	li r3, 0x68
/* 801AFD28 001ACC68  4B E7 41 7D */	bl __nw__FUl
/* 801AFD2C 001ACC6C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801AFD30 001ACC70  41 82 00 90 */	beq .L_801AFDC0
/* 801AFD34 001ACC74  3C 80 80 4B */	lis r4, __vt__Q24Game8WaterBox@ha
/* 801AFD38 001ACC78  3C 60 80 4B */	lis r3, __vt__Q24Game12AABBWaterBox@ha
/* 801AFD3C 001ACC7C  38 04 59 B4 */	addi r0, r4, __vt__Q24Game8WaterBox@l
/* 801AFD40 001ACC80  38 80 00 00 */	li r4, 0
/* 801AFD44 001ACC84  90 1E 00 00 */	stw r0, 0(r30)
/* 801AFD48 001ACC88  38 03 59 6C */	addi r0, r3, __vt__Q24Game12AABBWaterBox@l
/* 801AFD4C 001ACC8C  C0 22 AF C0 */	lfs f1, lbl_80519320@sda21(r2)
/* 801AFD50 001ACC90  38 7E 00 54 */	addi r3, r30, 0x54
/* 801AFD54 001ACC94  98 9E 00 04 */	stb r4, 4(r30)
/* 801AFD58 001ACC98  C0 02 AF C4 */	lfs f0, lbl_80519324@sda21(r2)
/* 801AFD5C 001ACC9C  98 9E 00 04 */	stb r4, 4(r30)
/* 801AFD60 001ACCA0  88 9E 00 04 */	lbz r4, 4(r30)
/* 801AFD64 001ACCA4  60 84 00 01 */	ori r4, r4, 1
/* 801AFD68 001ACCA8  98 9E 00 04 */	stb r4, 4(r30)
/* 801AFD6C 001ACCAC  90 1E 00 00 */	stw r0, 0(r30)
/* 801AFD70 001ACCB0  D0 3E 00 18 */	stfs f1, 0x18(r30)
/* 801AFD74 001ACCB4  D0 3E 00 1C */	stfs f1, 0x1c(r30)
/* 801AFD78 001ACCB8  D0 3E 00 20 */	stfs f1, 0x20(r30)
/* 801AFD7C 001ACCBC  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801AFD80 001ACCC0  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 801AFD84 001ACCC4  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 801AFD88 001ACCC8  48 28 45 CD */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 801AFD8C 001ACCCC  3C 60 80 4F */	lis r3, __vt__Q23Sys15MatLoopAnimator@ha
/* 801AFD90 001ACCD0  C0 02 AF C8 */	lfs f0, lbl_80519328@sda21(r2)
/* 801AFD94 001ACCD4  38 63 C4 8C */	addi r3, r3, __vt__Q23Sys15MatLoopAnimator@l
/* 801AFD98 001ACCD8  38 00 00 00 */	li r0, 0
/* 801AFD9C 001ACCDC  90 7E 00 54 */	stw r3, 0x54(r30)
/* 801AFDA0 001ACCE0  D0 1E 00 0C */	stfs f0, 0xc(r30)
/* 801AFDA4 001ACCE4  B0 1E 00 08 */	sth r0, 8(r30)
/* 801AFDA8 001ACCE8  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 801AFDAC 001ACCEC  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 801AFDB0 001ACCF0  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 801AFDB4 001ACCF4  90 1E 00 50 */	stw r0, 0x50(r30)
/* 801AFDB8 001ACCF8  D0 1E 00 34 */	stfs f0, 0x34(r30)
/* 801AFDBC 001ACCFC  90 1E 00 60 */	stw r0, 0x60(r30)
.L_801AFDC0:
/* 801AFDC0 001ACD00  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801AFDC4 001ACD04  38 00 00 00 */	li r0, 0
/* 801AFDC8 001ACD08  C0 01 00 08 */	lfs f0, 8(r1)
/* 801AFDCC 001ACD0C  38 60 00 1C */	li r3, 0x1c
/* 801AFDD0 001ACD10  EC 21 F0 28 */	fsubs f1, f1, f30
/* 801AFDD4 001ACD14  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801AFDD8 001ACD18  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 801AFDDC 001ACD1C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 801AFDE0 001ACD20  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 801AFDE4 001ACD24  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801AFDE8 001ACD28  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 801AFDEC 001ACD2C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801AFDF0 001ACD30  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801AFDF4 001ACD34  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801AFDF8 001ACD38  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 801AFDFC 001ACD3C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801AFE00 001ACD40  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 801AFE04 001ACD44  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801AFE08 001ACD48  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 801AFE0C 001ACD4C  B0 1E 00 08 */	sth r0, 8(r30)
/* 801AFE10 001ACD50  D3 FE 00 0C */	stfs f31, 0xc(r30)
/* 801AFE14 001ACD54  D3 FE 00 14 */	stfs f31, 0x14(r30)
/* 801AFE18 001ACD58  4B E7 40 8D */	bl __nw__FUl
/* 801AFE1C 001ACD5C  7C 7A 1B 79 */	or. r26, r3, r3
/* 801AFE20 001ACD60  41 82 00 14 */	beq .L_801AFE34
/* 801AFE24 001ACD64  48 26 15 6D */	bl __ct__5CNodeFv
/* 801AFE28 001ACD68  3C 60 80 4B */	lis r3, "__vt__29TObjectNode<Q24Game8WaterBox>"@ha
/* 801AFE2C 001ACD6C  38 03 58 34 */	addi r0, r3, "__vt__29TObjectNode<Q24Game8WaterBox>"@l
/* 801AFE30 001ACD70  90 1A 00 00 */	stw r0, 0(r26)
.L_801AFE34:
/* 801AFE34 001ACD74  93 DA 00 18 */	stw r30, 0x18(r26)
/* 801AFE38 001ACD78  7F C3 F3 78 */	mr r3, r30
/* 801AFE3C 001ACD7C  C0 22 AF E4 */	lfs f1, lbl_80519344@sda21(r2)
/* 801AFE40 001ACD80  81 9E 00 00 */	lwz r12, 0(r30)
/* 801AFE44 001ACD84  80 9B 00 40 */	lwz r4, 0x40(r27)
/* 801AFE48 001ACD88  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801AFE4C 001ACD8C  80 84 00 00 */	lwz r4, 0(r4)
/* 801AFE50 001ACD90  80 BB 00 44 */	lwz r5, 0x44(r27)
/* 801AFE54 001ACD94  7D 89 03 A6 */	mtctr r12
/* 801AFE58 001ACD98  4E 80 04 21 */	bctrl 
/* 801AFE5C 001ACD9C  7F 44 D3 78 */	mr r4, r26
/* 801AFE60 001ACDA0  38 7B 00 20 */	addi r3, r27, 0x20
/* 801AFE64 001ACDA4  48 26 15 A5 */	bl add__5CNodeFP5CNode
/* 801AFE68 001ACDA8  3B BD 00 01 */	addi r29, r29, 1
.L_801AFE6C:
/* 801AFE6C 001ACDAC  7C 1D F8 00 */	cmpw r29, r31
/* 801AFE70 001ACDB0  41 80 FE 90 */	blt .L_801AFD00
/* 801AFE74 001ACDB4  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 801AFE78 001ACDB8  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 801AFE7C 001ACDBC  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 801AFE80 001ACDC0  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 801AFE84 001ACDC4  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 801AFE88 001ACDC8  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 801AFE8C 001ACDCC  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 801AFE90 001ACDD0  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 801AFE94 001ACDD4  BB 41 00 28 */	lmw r26, 0x28(r1)
/* 801AFE98 001ACDD8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801AFE9C 001ACDDC  7C 08 03 A6 */	mtlr r0
/* 801AFEA0 001ACDE0  38 21 00 80 */	addi r1, r1, 0x80
/* 801AFEA4 001ACDE4  4E 80 00 20 */	blr 

.global addSeaMgr__Q24Game6SeaMgrFPQ24Game6SeaMgrR7Matrixf
addSeaMgr__Q24Game6SeaMgrFPQ24Game6SeaMgrR7Matrixf:
/* 801AFEA8 001ACDE8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801AFEAC 001ACDEC  7C 08 02 A6 */	mflr r0
/* 801AFEB0 001ACDF0  3C C0 80 4B */	lis r6, "__vt__26Iterator<Q24Game8WaterBox>"@ha
/* 801AFEB4 001ACDF4  90 01 00 34 */	stw r0, 0x34(r1)
/* 801AFEB8 001ACDF8  38 00 00 00 */	li r0, 0
/* 801AFEBC 001ACDFC  38 C6 19 D4 */	addi r6, r6, "__vt__26Iterator<Q24Game8WaterBox>"@l
/* 801AFEC0 001ACE00  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801AFEC4 001ACE04  28 00 00 00 */	cmplwi r0, 0
/* 801AFEC8 001ACE08  7C BF 2B 78 */	mr r31, r5
/* 801AFECC 001ACE0C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801AFED0 001ACE10  7C 7E 1B 78 */	mr r30, r3
/* 801AFED4 001ACE14  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801AFED8 001ACE18  93 81 00 20 */	stw r28, 0x20(r1)
/* 801AFEDC 001ACE1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AFEE0 001ACE20  90 C1 00 08 */	stw r6, 8(r1)
/* 801AFEE4 001ACE24  90 01 00 0C */	stw r0, 0xc(r1)
/* 801AFEE8 001ACE28  90 81 00 10 */	stw r4, 0x10(r1)
/* 801AFEEC 001ACE2C  40 82 00 20 */	bne .L_801AFF0C
/* 801AFEF0 001ACE30  7C 83 23 78 */	mr r3, r4
/* 801AFEF4 001ACE34  81 84 00 00 */	lwz r12, 0(r4)
/* 801AFEF8 001ACE38  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AFEFC 001ACE3C  7D 89 03 A6 */	mtctr r12
/* 801AFF00 001ACE40  4E 80 04 21 */	bctrl 
/* 801AFF04 001ACE44  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AFF08 001ACE48  48 00 02 68 */	b .L_801B0170
.L_801AFF0C:
/* 801AFF0C 001ACE4C  7C 83 23 78 */	mr r3, r4
/* 801AFF10 001ACE50  81 84 00 00 */	lwz r12, 0(r4)
/* 801AFF14 001ACE54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AFF18 001ACE58  7D 89 03 A6 */	mtctr r12
/* 801AFF1C 001ACE5C  4E 80 04 21 */	bctrl 
/* 801AFF20 001ACE60  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AFF24 001ACE64  48 00 00 58 */	b .L_801AFF7C
.L_801AFF28:
/* 801AFF28 001ACE68  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFF2C 001ACE6C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AFF30 001ACE70  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFF34 001ACE74  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AFF38 001ACE78  7D 89 03 A6 */	mtctr r12
/* 801AFF3C 001ACE7C  4E 80 04 21 */	bctrl 
/* 801AFF40 001ACE80  7C 64 1B 78 */	mr r4, r3
/* 801AFF44 001ACE84  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801AFF48 001ACE88  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFF4C 001ACE8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AFF50 001ACE90  7D 89 03 A6 */	mtctr r12
/* 801AFF54 001ACE94  4E 80 04 21 */	bctrl 
/* 801AFF58 001ACE98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AFF5C 001ACE9C  40 82 02 14 */	bne .L_801B0170
/* 801AFF60 001ACEA0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFF64 001ACEA4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AFF68 001ACEA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFF6C 001ACEAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AFF70 001ACEB0  7D 89 03 A6 */	mtctr r12
/* 801AFF74 001ACEB4  4E 80 04 21 */	bctrl 
/* 801AFF78 001ACEB8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801AFF7C:
/* 801AFF7C 001ACEBC  81 81 00 08 */	lwz r12, 8(r1)
/* 801AFF80 001ACEC0  38 61 00 08 */	addi r3, r1, 8
/* 801AFF84 001ACEC4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AFF88 001ACEC8  7D 89 03 A6 */	mtctr r12
/* 801AFF8C 001ACECC  4E 80 04 21 */	bctrl 
/* 801AFF90 001ACED0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AFF94 001ACED4  41 82 FF 94 */	beq .L_801AFF28
/* 801AFF98 001ACED8  48 00 01 D8 */	b .L_801B0170
.L_801AFF9C:
/* 801AFF9C 001ACEDC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AFFA0 001ACEE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801AFFA4 001ACEE4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AFFA8 001ACEE8  7D 89 03 A6 */	mtctr r12
/* 801AFFAC 001ACEEC  4E 80 04 21 */	bctrl 
/* 801AFFB0 001ACEF0  7C 7D 1B 78 */	mr r29, r3
/* 801AFFB4 001ACEF4  38 60 00 68 */	li r3, 0x68
/* 801AFFB8 001ACEF8  4B E7 3E ED */	bl __nw__FUl
/* 801AFFBC 001ACEFC  7C 7C 1B 79 */	or. r28, r3, r3
/* 801AFFC0 001ACF00  41 82 00 90 */	beq .L_801B0050
/* 801AFFC4 001ACF04  3C 80 80 4B */	lis r4, __vt__Q24Game8WaterBox@ha
/* 801AFFC8 001ACF08  3C 60 80 4B */	lis r3, __vt__Q24Game12AABBWaterBox@ha
/* 801AFFCC 001ACF0C  38 04 59 B4 */	addi r0, r4, __vt__Q24Game8WaterBox@l
/* 801AFFD0 001ACF10  38 80 00 00 */	li r4, 0
/* 801AFFD4 001ACF14  90 1C 00 00 */	stw r0, 0(r28)
/* 801AFFD8 001ACF18  38 03 59 6C */	addi r0, r3, __vt__Q24Game12AABBWaterBox@l
/* 801AFFDC 001ACF1C  C0 22 AF C0 */	lfs f1, lbl_80519320@sda21(r2)
/* 801AFFE0 001ACF20  38 7C 00 54 */	addi r3, r28, 0x54
/* 801AFFE4 001ACF24  98 9C 00 04 */	stb r4, 4(r28)
/* 801AFFE8 001ACF28  C0 02 AF C4 */	lfs f0, lbl_80519324@sda21(r2)
/* 801AFFEC 001ACF2C  98 9C 00 04 */	stb r4, 4(r28)
/* 801AFFF0 001ACF30  88 9C 00 04 */	lbz r4, 4(r28)
/* 801AFFF4 001ACF34  60 84 00 01 */	ori r4, r4, 1
/* 801AFFF8 001ACF38  98 9C 00 04 */	stb r4, 4(r28)
/* 801AFFFC 001ACF3C  90 1C 00 00 */	stw r0, 0(r28)
/* 801B0000 001ACF40  D0 3C 00 18 */	stfs f1, 0x18(r28)
/* 801B0004 001ACF44  D0 3C 00 1C */	stfs f1, 0x1c(r28)
/* 801B0008 001ACF48  D0 3C 00 20 */	stfs f1, 0x20(r28)
/* 801B000C 001ACF4C  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 801B0010 001ACF50  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 801B0014 001ACF54  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 801B0018 001ACF58  48 28 43 3D */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 801B001C 001ACF5C  3C 60 80 4F */	lis r3, __vt__Q23Sys15MatLoopAnimator@ha
/* 801B0020 001ACF60  C0 02 AF C8 */	lfs f0, lbl_80519328@sda21(r2)
/* 801B0024 001ACF64  38 63 C4 8C */	addi r3, r3, __vt__Q23Sys15MatLoopAnimator@l
/* 801B0028 001ACF68  38 00 00 00 */	li r0, 0
/* 801B002C 001ACF6C  90 7C 00 54 */	stw r3, 0x54(r28)
/* 801B0030 001ACF70  D0 1C 00 0C */	stfs f0, 0xc(r28)
/* 801B0034 001ACF74  B0 1C 00 08 */	sth r0, 8(r28)
/* 801B0038 001ACF78  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 801B003C 001ACF7C  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 801B0040 001ACF80  D0 1C 00 30 */	stfs f0, 0x30(r28)
/* 801B0044 001ACF84  90 1C 00 50 */	stw r0, 0x50(r28)
/* 801B0048 001ACF88  D0 1C 00 34 */	stfs f0, 0x34(r28)
/* 801B004C 001ACF8C  90 1C 00 60 */	stw r0, 0x60(r28)
.L_801B0050:
/* 801B0050 001ACF90  7F 83 E3 78 */	mr r3, r28
/* 801B0054 001ACF94  7F A4 EB 78 */	mr r4, r29
/* 801B0058 001ACF98  7F E5 FB 78 */	mr r5, r31
/* 801B005C 001ACF9C  4B FF F1 29 */	bl globalise__Q24Game12AABBWaterBoxFPQ24Game12AABBWaterBoxR7Matrixf
/* 801B0060 001ACFA0  38 60 00 1C */	li r3, 0x1c
/* 801B0064 001ACFA4  4B E7 3E 41 */	bl __nw__FUl
/* 801B0068 001ACFA8  7C 7D 1B 79 */	or. r29, r3, r3
/* 801B006C 001ACFAC  41 82 00 14 */	beq .L_801B0080
/* 801B0070 001ACFB0  48 26 13 21 */	bl __ct__5CNodeFv
/* 801B0074 001ACFB4  3C 60 80 4B */	lis r3, "__vt__29TObjectNode<Q24Game8WaterBox>"@ha
/* 801B0078 001ACFB8  38 03 58 34 */	addi r0, r3, "__vt__29TObjectNode<Q24Game8WaterBox>"@l
/* 801B007C 001ACFBC  90 1D 00 00 */	stw r0, 0(r29)
.L_801B0080:
/* 801B0080 001ACFC0  93 9D 00 18 */	stw r28, 0x18(r29)
/* 801B0084 001ACFC4  7F 83 E3 78 */	mr r3, r28
/* 801B0088 001ACFC8  C0 22 AF E4 */	lfs f1, lbl_80519344@sda21(r2)
/* 801B008C 001ACFCC  81 9C 00 00 */	lwz r12, 0(r28)
/* 801B0090 001ACFD0  80 9E 00 40 */	lwz r4, 0x40(r30)
/* 801B0094 001ACFD4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801B0098 001ACFD8  80 84 00 00 */	lwz r4, 0(r4)
/* 801B009C 001ACFDC  80 BE 00 44 */	lwz r5, 0x44(r30)
/* 801B00A0 001ACFE0  7D 89 03 A6 */	mtctr r12
/* 801B00A4 001ACFE4  4E 80 04 21 */	bctrl 
/* 801B00A8 001ACFE8  7F A4 EB 78 */	mr r4, r29
/* 801B00AC 001ACFEC  38 7E 00 20 */	addi r3, r30, 0x20
/* 801B00B0 001ACFF0  48 26 13 59 */	bl add__5CNodeFP5CNode
/* 801B00B4 001ACFF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B00B8 001ACFF8  28 00 00 00 */	cmplwi r0, 0
/* 801B00BC 001ACFFC  40 82 00 24 */	bne .L_801B00E0
/* 801B00C0 001AD000  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B00C4 001AD004  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B00C8 001AD008  81 83 00 00 */	lwz r12, 0(r3)
/* 801B00CC 001AD00C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B00D0 001AD010  7D 89 03 A6 */	mtctr r12
/* 801B00D4 001AD014  4E 80 04 21 */	bctrl 
/* 801B00D8 001AD018  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B00DC 001AD01C  48 00 00 94 */	b .L_801B0170
.L_801B00E0:
/* 801B00E0 001AD020  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B00E4 001AD024  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B00E8 001AD028  81 83 00 00 */	lwz r12, 0(r3)
/* 801B00EC 001AD02C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B00F0 001AD030  7D 89 03 A6 */	mtctr r12
/* 801B00F4 001AD034  4E 80 04 21 */	bctrl 
/* 801B00F8 001AD038  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B00FC 001AD03C  48 00 00 58 */	b .L_801B0154
.L_801B0100:
/* 801B0100 001AD040  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B0104 001AD044  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B0108 001AD048  81 83 00 00 */	lwz r12, 0(r3)
/* 801B010C 001AD04C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B0110 001AD050  7D 89 03 A6 */	mtctr r12
/* 801B0114 001AD054  4E 80 04 21 */	bctrl 
/* 801B0118 001AD058  7C 64 1B 78 */	mr r4, r3
/* 801B011C 001AD05C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B0120 001AD060  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0124 001AD064  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B0128 001AD068  7D 89 03 A6 */	mtctr r12
/* 801B012C 001AD06C  4E 80 04 21 */	bctrl 
/* 801B0130 001AD070  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B0134 001AD074  40 82 00 3C */	bne .L_801B0170
/* 801B0138 001AD078  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B013C 001AD07C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B0140 001AD080  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0144 001AD084  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B0148 001AD088  7D 89 03 A6 */	mtctr r12
/* 801B014C 001AD08C  4E 80 04 21 */	bctrl 
/* 801B0150 001AD090  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B0154:
/* 801B0154 001AD094  81 81 00 08 */	lwz r12, 8(r1)
/* 801B0158 001AD098  38 61 00 08 */	addi r3, r1, 8
/* 801B015C 001AD09C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B0160 001AD0A0  7D 89 03 A6 */	mtctr r12
/* 801B0164 001AD0A4  4E 80 04 21 */	bctrl 
/* 801B0168 001AD0A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B016C 001AD0AC  41 82 FF 94 */	beq .L_801B0100
.L_801B0170:
/* 801B0170 001AD0B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B0174 001AD0B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0178 001AD0B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B017C 001AD0BC  7D 89 03 A6 */	mtctr r12
/* 801B0180 001AD0C0  4E 80 04 21 */	bctrl 
/* 801B0184 001AD0C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B0188 001AD0C8  7C 04 18 40 */	cmplw r4, r3
/* 801B018C 001AD0CC  40 82 FE 10 */	bne .L_801AFF9C
/* 801B0190 001AD0D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801B0194 001AD0D4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801B0198 001AD0D8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801B019C 001AD0DC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801B01A0 001AD0E0  83 81 00 20 */	lwz r28, 0x20(r1)
/* 801B01A4 001AD0E4  7C 08 03 A6 */	mtlr r0
/* 801B01A8 001AD0E8  38 21 00 30 */	addi r1, r1, 0x30
/* 801B01AC 001AD0EC  4E 80 00 20 */	blr 

.global __dt__Q24Game6SeaMgrFv
__dt__Q24Game6SeaMgrFv:
/* 801B01B0 001AD0F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B01B4 001AD0F4  7C 08 02 A6 */	mflr r0
/* 801B01B8 001AD0F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B01BC 001AD0FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B01C0 001AD100  7C 7F 1B 79 */	or. r31, r3, r3
/* 801B01C4 001AD104  93 C1 00 08 */	stw r30, 8(r1)
/* 801B01C8 001AD108  7C 9E 23 78 */	mr r30, r4
/* 801B01CC 001AD10C  41 82 00 A8 */	beq .L_801B0274
/* 801B01D0 001AD110  3C 60 80 4B */	lis r3, __vt__Q24Game6SeaMgr@ha
/* 801B01D4 001AD114  38 63 57 B4 */	addi r3, r3, __vt__Q24Game6SeaMgr@l
/* 801B01D8 001AD118  90 7F 00 00 */	stw r3, 0(r31)
/* 801B01DC 001AD11C  38 03 00 2C */	addi r0, r3, 0x2c
/* 801B01E0 001AD120  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801B01E4 001AD124  41 82 00 80 */	beq .L_801B0264
/* 801B01E8 001AD128  3C 60 80 4B */	lis r3, "__vt__31NodeObjectMgr<Q24Game8WaterBox>"@ha
/* 801B01EC 001AD12C  34 1F 00 20 */	addic. r0, r31, 0x20
/* 801B01F0 001AD130  38 63 58 44 */	addi r3, r3, "__vt__31NodeObjectMgr<Q24Game8WaterBox>"@l
/* 801B01F4 001AD134  90 7F 00 00 */	stw r3, 0(r31)
/* 801B01F8 001AD138  38 03 00 2C */	addi r0, r3, 0x2c
/* 801B01FC 001AD13C  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801B0200 001AD140  41 82 00 1C */	beq .L_801B021C
/* 801B0204 001AD144  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8WaterBox>"@ha
/* 801B0208 001AD148  38 7F 00 20 */	addi r3, r31, 0x20
/* 801B020C 001AD14C  38 04 58 34 */	addi r0, r4, "__vt__29TObjectNode<Q24Game8WaterBox>"@l
/* 801B0210 001AD150  38 80 00 00 */	li r4, 0
/* 801B0214 001AD154  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801B0218 001AD158  48 26 13 71 */	bl __dt__5CNodeFv
.L_801B021C:
/* 801B021C 001AD15C  28 1F 00 00 */	cmplwi r31, 0
/* 801B0220 001AD160  41 82 00 44 */	beq .L_801B0264
/* 801B0224 001AD164  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8WaterBox>"@ha
/* 801B0228 001AD168  38 63 58 C4 */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8WaterBox>"@l
/* 801B022C 001AD16C  90 7F 00 00 */	stw r3, 0(r31)
/* 801B0230 001AD170  38 03 00 2C */	addi r0, r3, 0x2c
/* 801B0234 001AD174  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801B0238 001AD178  41 82 00 2C */	beq .L_801B0264
/* 801B023C 001AD17C  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8WaterBox>"@ha
/* 801B0240 001AD180  38 03 59 40 */	addi r0, r3, "__vt__27Container<Q24Game8WaterBox>"@l
/* 801B0244 001AD184  90 1F 00 00 */	stw r0, 0(r31)
/* 801B0248 001AD188  41 82 00 1C */	beq .L_801B0264
/* 801B024C 001AD18C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801B0250 001AD190  7F E3 FB 78 */	mr r3, r31
/* 801B0254 001AD194  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801B0258 001AD198  38 80 00 00 */	li r4, 0
/* 801B025C 001AD19C  90 1F 00 00 */	stw r0, 0(r31)
/* 801B0260 001AD1A0  48 26 13 29 */	bl __dt__5CNodeFv
.L_801B0264:
/* 801B0264 001AD1A4  7F C0 07 35 */	extsh. r0, r30
/* 801B0268 001AD1A8  40 81 00 0C */	ble .L_801B0274
/* 801B026C 001AD1AC  7F E3 FB 78 */	mr r3, r31
/* 801B0270 001AD1B0  4B E7 3E 45 */	bl __dl__FPv
.L_801B0274:
/* 801B0274 001AD1B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B0278 001AD1B8  7F E3 FB 78 */	mr r3, r31
/* 801B027C 001AD1BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B0280 001AD1C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B0284 001AD1C4  7C 08 03 A6 */	mtlr r0
/* 801B0288 001AD1C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801B028C 001AD1CC  4E 80 00 20 */	blr 

.global getSeaLevel__Q24Game12AABBWaterBoxFv
getSeaLevel__Q24Game12AABBWaterBoxFv:
/* 801B0290 001AD1D0  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 801B0294 001AD1D4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 801B0298 001AD1D8  EC 21 00 2A */	fadds f1, f1, f0
/* 801B029C 001AD1DC  4E 80 00 20 */	blr 

.global getSeaHeightPtr__Q24Game12AABBWaterBoxFv
getSeaHeightPtr__Q24Game12AABBWaterBoxFv:
/* 801B02A0 001AD1E0  38 63 00 34 */	addi r3, r3, 0x34
/* 801B02A4 001AD1E4  4E 80 00 20 */	blr 

.global doSimulation__Q24Game8WaterBoxFf
doSimulation__Q24Game8WaterBoxFf:
/* 801B02A8 001AD1E8  4E 80 00 20 */	blr 

.global doDirectDraw__Q24Game8WaterBoxFR8Graphics
doDirectDraw__Q24Game8WaterBoxFR8Graphics:
/* 801B02AC 001AD1EC  4E 80 00 20 */	blr 

.global startDown__Q24Game8WaterBoxFf
startDown__Q24Game8WaterBoxFf:
/* 801B02B0 001AD1F0  4E 80 00 20 */	blr 

.global startUp__Q24Game8WaterBoxFf
startUp__Q24Game8WaterBoxFf:
/* 801B02B4 001AD1F4  4E 80 00 20 */	blr 

.global directDraw__Q24Game8WaterBoxFR8Graphics
directDraw__Q24Game8WaterBoxFR8Graphics:
/* 801B02B8 001AD1F8  4E 80 00 20 */	blr 

.global calcMatrix__Q24Game8WaterBoxFv
calcMatrix__Q24Game8WaterBoxFv:
/* 801B02BC 001AD1FC  4E 80 00 20 */	blr 

.global "get__31NodeObjectMgr<Q24Game8WaterBox>FPv"
"get__31NodeObjectMgr<Q24Game8WaterBox>FPv":
/* 801B02C0 001AD200  80 64 00 18 */	lwz r3, 0x18(r4)
/* 801B02C4 001AD204  4E 80 00 20 */	blr 

.global "getNext__31NodeObjectMgr<Q24Game8WaterBox>FPv"
"getNext__31NodeObjectMgr<Q24Game8WaterBox>FPv":
/* 801B02C8 001AD208  80 64 00 04 */	lwz r3, 4(r4)
/* 801B02CC 001AD20C  4E 80 00 20 */	blr 

.global "getStart__31NodeObjectMgr<Q24Game8WaterBox>Fv"
"getStart__31NodeObjectMgr<Q24Game8WaterBox>Fv":
/* 801B02D0 001AD210  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801B02D4 001AD214  4E 80 00 20 */	blr 

.global "getEnd__31NodeObjectMgr<Q24Game8WaterBox>Fv"
"getEnd__31NodeObjectMgr<Q24Game8WaterBox>Fv":
/* 801B02D8 001AD218  38 60 00 00 */	li r3, 0
/* 801B02DC 001AD21C  4E 80 00 20 */	blr 

.global "delNode__31NodeObjectMgr<Q24Game8WaterBox>FPQ24Game8WaterBox"
"delNode__31NodeObjectMgr<Q24Game8WaterBox>FPQ24Game8WaterBox":
/* 801B02E0 001AD220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B02E4 001AD224  7C 08 02 A6 */	mflr r0
/* 801B02E8 001AD228  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B02EC 001AD22C  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801B02F0 001AD230  48 00 00 1C */	b .L_801B030C
.L_801B02F4:
/* 801B02F4 001AD234  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801B02F8 001AD238  7C 00 20 40 */	cmplw r0, r4
/* 801B02FC 001AD23C  40 82 00 0C */	bne .L_801B0308
/* 801B0300 001AD240  48 26 12 D1 */	bl del__5CNodeFv
/* 801B0304 001AD244  48 00 00 10 */	b .L_801B0314
.L_801B0308:
/* 801B0308 001AD248  80 63 00 04 */	lwz r3, 4(r3)
.L_801B030C:
/* 801B030C 001AD24C  28 03 00 00 */	cmplwi r3, 0
/* 801B0310 001AD250  40 82 FF E4 */	bne .L_801B02F4
.L_801B0314:
/* 801B0314 001AD254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B0318 001AD258  7C 08 03 A6 */	mtlr r0
/* 801B031C 001AD25C  38 21 00 10 */	addi r1, r1, 0x10
/* 801B0320 001AD260  4E 80 00 20 */	blr 

.global "resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"
"resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv":
/* 801B0324 001AD264  38 00 00 00 */	li r0, 0
/* 801B0328 001AD268  90 03 00 30 */	stw r0, 0x30(r3)
/* 801B032C 001AD26C  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801B0330 001AD270  90 03 00 28 */	stw r0, 0x28(r3)
/* 801B0334 001AD274  90 03 00 24 */	stw r0, 0x24(r3)
/* 801B0338 001AD278  4E 80 00 20 */	blr 

.global "doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
"doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff":
/* 801B033C 001AD27C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B0340 001AD280  7C 08 02 A6 */	mflr r0
/* 801B0344 001AD284  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8WaterBox>"@ha
/* 801B0348 001AD288  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B034C 001AD28C  38 00 00 00 */	li r0, 0
/* 801B0350 001AD290  38 84 19 D4 */	addi r4, r4, "__vt__26Iterator<Q24Game8WaterBox>"@l
/* 801B0354 001AD294  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801B0358 001AD298  FF E0 08 90 */	fmr f31, f1
/* 801B035C 001AD29C  28 00 00 00 */	cmplwi r0, 0
/* 801B0360 001AD2A0  90 81 00 08 */	stw r4, 8(r1)
/* 801B0364 001AD2A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B0368 001AD2A8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801B036C 001AD2AC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801B0370 001AD2B0  40 82 00 1C */	bne .L_801B038C
/* 801B0374 001AD2B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0378 001AD2B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B037C 001AD2BC  7D 89 03 A6 */	mtctr r12
/* 801B0380 001AD2C0  4E 80 04 21 */	bctrl 
/* 801B0384 001AD2C4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B0388 001AD2C8  48 00 01 74 */	b .L_801B04FC
.L_801B038C:
/* 801B038C 001AD2CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0390 001AD2D0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B0394 001AD2D4  7D 89 03 A6 */	mtctr r12
/* 801B0398 001AD2D8  4E 80 04 21 */	bctrl 
/* 801B039C 001AD2DC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B03A0 001AD2E0  48 00 00 58 */	b .L_801B03F8
.L_801B03A4:
/* 801B03A4 001AD2E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B03A8 001AD2E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B03AC 001AD2EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B03B0 001AD2F0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B03B4 001AD2F4  7D 89 03 A6 */	mtctr r12
/* 801B03B8 001AD2F8  4E 80 04 21 */	bctrl 
/* 801B03BC 001AD2FC  7C 64 1B 78 */	mr r4, r3
/* 801B03C0 001AD300  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B03C4 001AD304  81 83 00 00 */	lwz r12, 0(r3)
/* 801B03C8 001AD308  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B03CC 001AD30C  7D 89 03 A6 */	mtctr r12
/* 801B03D0 001AD310  4E 80 04 21 */	bctrl 
/* 801B03D4 001AD314  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B03D8 001AD318  40 82 01 24 */	bne .L_801B04FC
/* 801B03DC 001AD31C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B03E0 001AD320  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B03E4 001AD324  81 83 00 00 */	lwz r12, 0(r3)
/* 801B03E8 001AD328  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B03EC 001AD32C  7D 89 03 A6 */	mtctr r12
/* 801B03F0 001AD330  4E 80 04 21 */	bctrl 
/* 801B03F4 001AD334  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B03F8:
/* 801B03F8 001AD338  81 81 00 08 */	lwz r12, 8(r1)
/* 801B03FC 001AD33C  38 61 00 08 */	addi r3, r1, 8
/* 801B0400 001AD340  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B0404 001AD344  7D 89 03 A6 */	mtctr r12
/* 801B0408 001AD348  4E 80 04 21 */	bctrl 
/* 801B040C 001AD34C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B0410 001AD350  41 82 FF 94 */	beq .L_801B03A4
/* 801B0414 001AD354  48 00 00 E8 */	b .L_801B04FC
.L_801B0418:
/* 801B0418 001AD358  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B041C 001AD35C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0420 001AD360  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B0424 001AD364  7D 89 03 A6 */	mtctr r12
/* 801B0428 001AD368  4E 80 04 21 */	bctrl 
/* 801B042C 001AD36C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0430 001AD370  FC 20 F8 90 */	fmr f1, f31
/* 801B0434 001AD374  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 801B0438 001AD378  7D 89 03 A6 */	mtctr r12
/* 801B043C 001AD37C  4E 80 04 21 */	bctrl 
/* 801B0440 001AD380  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B0444 001AD384  28 00 00 00 */	cmplwi r0, 0
/* 801B0448 001AD388  40 82 00 24 */	bne .L_801B046C
/* 801B044C 001AD38C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B0450 001AD390  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B0454 001AD394  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0458 001AD398  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B045C 001AD39C  7D 89 03 A6 */	mtctr r12
/* 801B0460 001AD3A0  4E 80 04 21 */	bctrl 
/* 801B0464 001AD3A4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B0468 001AD3A8  48 00 00 94 */	b .L_801B04FC
.L_801B046C:
/* 801B046C 001AD3AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B0470 001AD3B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B0474 001AD3B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0478 001AD3B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B047C 001AD3BC  7D 89 03 A6 */	mtctr r12
/* 801B0480 001AD3C0  4E 80 04 21 */	bctrl 
/* 801B0484 001AD3C4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B0488 001AD3C8  48 00 00 58 */	b .L_801B04E0
.L_801B048C:
/* 801B048C 001AD3CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B0490 001AD3D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B0494 001AD3D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0498 001AD3D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B049C 001AD3DC  7D 89 03 A6 */	mtctr r12
/* 801B04A0 001AD3E0  4E 80 04 21 */	bctrl 
/* 801B04A4 001AD3E4  7C 64 1B 78 */	mr r4, r3
/* 801B04A8 001AD3E8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B04AC 001AD3EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801B04B0 001AD3F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B04B4 001AD3F4  7D 89 03 A6 */	mtctr r12
/* 801B04B8 001AD3F8  4E 80 04 21 */	bctrl 
/* 801B04BC 001AD3FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B04C0 001AD400  40 82 00 3C */	bne .L_801B04FC
/* 801B04C4 001AD404  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B04C8 001AD408  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B04CC 001AD40C  81 83 00 00 */	lwz r12, 0(r3)
/* 801B04D0 001AD410  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B04D4 001AD414  7D 89 03 A6 */	mtctr r12
/* 801B04D8 001AD418  4E 80 04 21 */	bctrl 
/* 801B04DC 001AD41C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B04E0:
/* 801B04E0 001AD420  81 81 00 08 */	lwz r12, 8(r1)
/* 801B04E4 001AD424  38 61 00 08 */	addi r3, r1, 8
/* 801B04E8 001AD428  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B04EC 001AD42C  7D 89 03 A6 */	mtctr r12
/* 801B04F0 001AD430  4E 80 04 21 */	bctrl 
/* 801B04F4 001AD434  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B04F8 001AD438  41 82 FF 94 */	beq .L_801B048C
.L_801B04FC:
/* 801B04FC 001AD43C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B0500 001AD440  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0504 001AD444  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B0508 001AD448  7D 89 03 A6 */	mtctr r12
/* 801B050C 001AD44C  4E 80 04 21 */	bctrl 
/* 801B0510 001AD450  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B0514 001AD454  7C 04 18 40 */	cmplw r4, r3
/* 801B0518 001AD458  40 82 FF 00 */	bne .L_801B0418
/* 801B051C 001AD45C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B0520 001AD460  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801B0524 001AD464  7C 08 03 A6 */	mtlr r0
/* 801B0528 001AD468  38 21 00 20 */	addi r1, r1, 0x20
/* 801B052C 001AD46C  4E 80 00 20 */	blr 

.global "doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
"doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics":
/* 801B0530 001AD470  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B0534 001AD474  7C 08 02 A6 */	mflr r0
/* 801B0538 001AD478  3C A0 80 4B */	lis r5, "__vt__26Iterator<Q24Game8WaterBox>"@ha
/* 801B053C 001AD47C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801B0540 001AD480  38 00 00 00 */	li r0, 0
/* 801B0544 001AD484  38 A5 19 D4 */	addi r5, r5, "__vt__26Iterator<Q24Game8WaterBox>"@l
/* 801B0548 001AD488  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801B054C 001AD48C  28 00 00 00 */	cmplwi r0, 0
/* 801B0550 001AD490  7C 9F 23 78 */	mr r31, r4
/* 801B0554 001AD494  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B0558 001AD498  90 A1 00 08 */	stw r5, 8(r1)
/* 801B055C 001AD49C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801B0560 001AD4A0  90 61 00 10 */	stw r3, 0x10(r1)
/* 801B0564 001AD4A4  40 82 00 1C */	bne .L_801B0580
/* 801B0568 001AD4A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B056C 001AD4AC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B0570 001AD4B0  7D 89 03 A6 */	mtctr r12
/* 801B0574 001AD4B4  4E 80 04 21 */	bctrl 
/* 801B0578 001AD4B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B057C 001AD4BC  48 00 01 74 */	b .L_801B06F0
.L_801B0580:
/* 801B0580 001AD4C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0584 001AD4C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801B0588 001AD4C8  7D 89 03 A6 */	mtctr r12
/* 801B058C 001AD4CC  4E 80 04 21 */	bctrl 
/* 801B0590 001AD4D0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B0594 001AD4D4  48 00 00 58 */	b .L_801B05EC
.L_801B0598:
/* 801B0598 001AD4D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B059C 001AD4DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B05A0 001AD4E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B05A4 001AD4E4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B05A8 001AD4E8  7D 89 03 A6 */	mtctr r12
/* 801B05AC 001AD4EC  4E 80 04 21 */	bctrl 
/* 801B05B0 001AD4F0  7C 64 1B 78 */	mr r4, r3
/* 801B05B4 001AD4F4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B05B8 001AD4F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B05BC 001AD4FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B05C0 001AD500  7D 89 03 A6 */	mtctr r12
/* 801B05C4 001AD504  4E 80 04 21 */	bctrl 
/* 801B05C8 001AD508  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B05CC 001AD50C  40 82 01 24 */	bne .L_801B06F0
/* 801B05D0 001AD510  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B05D4 001AD514  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B05D8 001AD518  81 83 00 00 */	lwz r12, 0(r3)
/* 801B05DC 001AD51C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B05E0 001AD520  7D 89 03 A6 */	mtctr r12
/* 801B05E4 001AD524  4E 80 04 21 */	bctrl 
/* 801B05E8 001AD528  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B05EC:
/* 801B05EC 001AD52C  81 81 00 08 */	lwz r12, 8(r1)
/* 801B05F0 001AD530  38 61 00 08 */	addi r3, r1, 8
/* 801B05F4 001AD534  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B05F8 001AD538  7D 89 03 A6 */	mtctr r12
/* 801B05FC 001AD53C  4E 80 04 21 */	bctrl 
/* 801B0600 001AD540  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B0604 001AD544  41 82 FF 94 */	beq .L_801B0598
/* 801B0608 001AD548  48 00 00 E8 */	b .L_801B06F0
.L_801B060C:
/* 801B060C 001AD54C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B0610 001AD550  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0614 001AD554  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B0618 001AD558  7D 89 03 A6 */	mtctr r12
/* 801B061C 001AD55C  4E 80 04 21 */	bctrl 
/* 801B0620 001AD560  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0624 001AD564  7F E4 FB 78 */	mr r4, r31
/* 801B0628 001AD568  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801B062C 001AD56C  7D 89 03 A6 */	mtctr r12
/* 801B0630 001AD570  4E 80 04 21 */	bctrl 
/* 801B0634 001AD574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B0638 001AD578  28 00 00 00 */	cmplwi r0, 0
/* 801B063C 001AD57C  40 82 00 24 */	bne .L_801B0660
/* 801B0640 001AD580  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B0644 001AD584  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B0648 001AD588  81 83 00 00 */	lwz r12, 0(r3)
/* 801B064C 001AD58C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B0650 001AD590  7D 89 03 A6 */	mtctr r12
/* 801B0654 001AD594  4E 80 04 21 */	bctrl 
/* 801B0658 001AD598  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B065C 001AD59C  48 00 00 94 */	b .L_801B06F0
.L_801B0660:
/* 801B0660 001AD5A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B0664 001AD5A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B0668 001AD5A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B066C 001AD5AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B0670 001AD5B0  7D 89 03 A6 */	mtctr r12
/* 801B0674 001AD5B4  4E 80 04 21 */	bctrl 
/* 801B0678 001AD5B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801B067C 001AD5BC  48 00 00 58 */	b .L_801B06D4
.L_801B0680:
/* 801B0680 001AD5C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B0684 001AD5C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B0688 001AD5C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801B068C 001AD5CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B0690 001AD5D0  7D 89 03 A6 */	mtctr r12
/* 801B0694 001AD5D4  4E 80 04 21 */	bctrl 
/* 801B0698 001AD5D8  7C 64 1B 78 */	mr r4, r3
/* 801B069C 001AD5DC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801B06A0 001AD5E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801B06A4 001AD5E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801B06A8 001AD5E8  7D 89 03 A6 */	mtctr r12
/* 801B06AC 001AD5EC  4E 80 04 21 */	bctrl 
/* 801B06B0 001AD5F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B06B4 001AD5F4  40 82 00 3C */	bne .L_801B06F0
/* 801B06B8 001AD5F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B06BC 001AD5FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B06C0 001AD600  81 83 00 00 */	lwz r12, 0(r3)
/* 801B06C4 001AD604  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801B06C8 001AD608  7D 89 03 A6 */	mtctr r12
/* 801B06CC 001AD60C  4E 80 04 21 */	bctrl 
/* 801B06D0 001AD610  90 61 00 0C */	stw r3, 0xc(r1)
.L_801B06D4:
/* 801B06D4 001AD614  81 81 00 08 */	lwz r12, 8(r1)
/* 801B06D8 001AD618  38 61 00 08 */	addi r3, r1, 8
/* 801B06DC 001AD61C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801B06E0 001AD620  7D 89 03 A6 */	mtctr r12
/* 801B06E4 001AD624  4E 80 04 21 */	bctrl 
/* 801B06E8 001AD628  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801B06EC 001AD62C  41 82 FF 94 */	beq .L_801B0680
.L_801B06F0:
/* 801B06F0 001AD630  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801B06F4 001AD634  81 83 00 00 */	lwz r12, 0(r3)
/* 801B06F8 001AD638  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801B06FC 001AD63C  7D 89 03 A6 */	mtctr r12
/* 801B0700 001AD640  4E 80 04 21 */	bctrl 
/* 801B0704 001AD644  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801B0708 001AD648  7C 04 18 40 */	cmplw r4, r3
/* 801B070C 001AD64C  40 82 FF 00 */	bne .L_801B060C
/* 801B0710 001AD650  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B0714 001AD654  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801B0718 001AD658  7C 08 03 A6 */	mtlr r0
/* 801B071C 001AD65C  38 21 00 20 */	addi r1, r1, 0x20
/* 801B0720 001AD660  4E 80 00 20 */	blr 

.global "getObject__27Container<Q24Game8WaterBox>FPv"
"getObject__27Container<Q24Game8WaterBox>FPv":
/* 801B0724 001AD664  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B0728 001AD668  7C 08 02 A6 */	mflr r0
/* 801B072C 001AD66C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B0730 001AD670  81 83 00 00 */	lwz r12, 0(r3)
/* 801B0734 001AD674  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801B0738 001AD678  7D 89 03 A6 */	mtctr r12
/* 801B073C 001AD67C  4E 80 04 21 */	bctrl 
/* 801B0740 001AD680  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B0744 001AD684  7C 08 03 A6 */	mtlr r0
/* 801B0748 001AD688  38 21 00 10 */	addi r1, r1, 0x10
/* 801B074C 001AD68C  4E 80 00 20 */	blr 

.global "getAt__27Container<Q24Game8WaterBox>Fi"
"getAt__27Container<Q24Game8WaterBox>Fi":
/* 801B0750 001AD690  38 60 00 00 */	li r3, 0
/* 801B0754 001AD694  4E 80 00 20 */	blr 

.global "getTo__27Container<Q24Game8WaterBox>Fv"
"getTo__27Container<Q24Game8WaterBox>Fv":
/* 801B0758 001AD698  38 60 00 00 */	li r3, 0
/* 801B075C 001AD69C  4E 80 00 20 */	blr 

.global __sinit_gameSeaMgr_cpp
__sinit_gameSeaMgr_cpp:
/* 801B0760 001AD6A0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801B0764 001AD6A4  38 00 FF FF */	li r0, -1
/* 801B0768 001AD6A8  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801B076C 001AD6AC  3C 60 80 4B */	lis r3, lbl_804B57A8@ha
/* 801B0770 001AD6B0  90 0D 93 D0 */	stw r0, lbl_80515A50@sda21(r13)
/* 801B0774 001AD6B4  D4 03 57 A8 */	stfsu f0, lbl_804B57A8@l(r3)
/* 801B0778 001AD6B8  D0 0D 93 D4 */	stfs f0, lbl_80515A54@sda21(r13)
/* 801B077C 001AD6BC  D0 03 00 04 */	stfs f0, 4(r3)
/* 801B0780 001AD6C0  D0 03 00 08 */	stfs f0, 8(r3)
/* 801B0784 001AD6C4  4E 80 00 20 */	blr 

.global "@28@resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"
"@28@resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv":
/* 801B0788 001AD6C8  38 63 FF E4 */	addi r3, r3, -28
/* 801B078C 001AD6CC  4B FF FB 98 */	b "resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"

.global "@28@doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
"@28@doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics":
/* 801B0790 001AD6D0  38 63 FF E4 */	addi r3, r3, -28
/* 801B0794 001AD6D4  4B FF FD 9C */	b "doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"

.global "@28@doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
"@28@doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff":
/* 801B0798 001AD6D8  38 63 FF E4 */	addi r3, r3, -28
/* 801B079C 001AD6DC  4B FF FB A0 */	b "doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"

.global "@28@doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
"@28@doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv":
/* 801B07A0 001AD6E0  38 63 FF E4 */	addi r3, r3, -28
/* 801B07A4 001AD6E4  4B FB 39 68 */	b "doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"

.global "@28@doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
"@28@doSetView__27ObjectMgr<Q24Game8WaterBox>Fi":
/* 801B07A8 001AD6E8  38 63 FF E4 */	addi r3, r3, -28
/* 801B07AC 001AD6EC  4B FB 3B 94 */	b "doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"

.global "@28@doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
"@28@doEntry__27ObjectMgr<Q24Game8WaterBox>Fv":
/* 801B07B0 001AD6F0  38 63 FF E4 */	addi r3, r3, -28
/* 801B07B4 001AD6F4  4B FB 3D 84 */	b "doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"

.global "@28@doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
"@28@doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv":
/* 801B07B8 001AD6F8  38 63 FF E4 */	addi r3, r3, -28
/* 801B07BC 001AD6FC  4B FB 3F 64 */	b "doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
