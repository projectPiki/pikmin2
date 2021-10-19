.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048D8F8
lbl_8048D8F8:
	.asciz "/enemy/data/Kabuto/babykabuto_green_s3tc.bti"
	.skip 3
.global lbl_8048D928
lbl_8048D928:
	.4byte 0x8CC592E8
	.4byte 0x834A8375
	.4byte 0x8367837D
	.4byte 0x836C815B
	.4byte 0x83578383
	.4byte 0x00000000
.global lbl_8048D940
lbl_8048D940:
	.asciz "FixKabutoMgr.cpp"
	.skip 3
.global lbl_8048D954
lbl_8048D954:
	.asciz "P2Assert"
	.skip 3

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 0x8
.global "cKabutoChangeTexName__Q34Game9FixKabuto26@unnamed@FixKabutoMgr_cpp@"
"cKabutoChangeTexName__Q34Game9FixKabuto26@unnamed@FixKabutoMgr_cpp@":
	.4byte lbl_8048D8F8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game9FixKabuto3MgrFiUc
__ct__Q34Game9FixKabuto3MgrFiUc:
/* 80300394 002FD2D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80300398 002FD2D8  7C 08 02 A6 */	mflr r0
/* 8030039C 002FD2DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803003A0 002FD2E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803003A4 002FD2E4  7C 7F 1B 78 */	mr r31, r3
/* 803003A8 002FD2E8  4B FE 39 C1 */	bl __ct__Q34Game6Kabuto3MgrFiUc
/* 803003AC 002FD2EC  3C 60 80 4D */	lis r3, __vt__Q34Game9FixKabuto3Mgr@ha
/* 803003B0 002FD2F0  3C 80 80 49 */	lis r4, lbl_8048D928@ha
/* 803003B4 002FD2F4  38 A3 6D B8 */	addi r5, r3, __vt__Q34Game9FixKabuto3Mgr@l
/* 803003B8 002FD2F8  7F E3 FB 78 */	mr r3, r31
/* 803003BC 002FD2FC  90 BF 00 00 */	stw r5, 0(r31)
/* 803003C0 002FD300  38 A5 00 38 */	addi r5, r5, 0x38
/* 803003C4 002FD304  38 04 D9 28 */	addi r0, r4, lbl_8048D928@l
/* 803003C8 002FD308  90 BF 00 04 */	stw r5, 4(r31)
/* 803003CC 002FD30C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803003D0 002FD310  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803003D4 002FD314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803003D8 002FD318  7C 08 03 A6 */	mtlr r0
/* 803003DC 002FD31C  38 21 00 10 */	addi r1, r1, 0x10
/* 803003E0 002FD320  4E 80 00 20 */	blr 

.global doAlloc__Q34Game9FixKabuto3MgrFv
doAlloc__Q34Game9FixKabuto3MgrFv:
/* 803003E4 002FD324  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803003E8 002FD328  7C 08 02 A6 */	mflr r0
/* 803003EC 002FD32C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803003F0 002FD330  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803003F4 002FD334  7C 7F 1B 78 */	mr r31, r3
/* 803003F8 002FD338  38 60 08 08 */	li r3, 0x808
/* 803003FC 002FD33C  4B D2 3A A9 */	bl __nw__FUl
/* 80300400 002FD340  7C 64 1B 79 */	or. r4, r3, r3
/* 80300404 002FD344  41 82 00 0C */	beq lbl_80300410
/* 80300408 002FD348  4B FF F4 5D */	bl __ct__Q34Game6Kabuto5ParmsFv
/* 8030040C 002FD34C  7C 64 1B 78 */	mr r4, r3
lbl_80300410:
/* 80300410 002FD350  7F E3 FB 78 */	mr r3, r31
/* 80300414 002FD354  4B E2 F4 89 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 80300418 002FD358  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030041C 002FD35C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80300420 002FD360  7C 08 03 A6 */	mtlr r0
/* 80300424 002FD364  38 21 00 10 */	addi r1, r1, 0x10
/* 80300428 002FD368  4E 80 00 20 */	blr 

.global createObj__Q34Game9FixKabuto3MgrFi
createObj__Q34Game9FixKabuto3MgrFi:
/* 8030042C 002FD36C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80300430 002FD370  7C 08 02 A6 */	mflr r0
/* 80300434 002FD374  90 01 00 14 */	stw r0, 0x14(r1)
/* 80300438 002FD378  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030043C 002FD37C  7C 9F 23 78 */	mr r31, r4
/* 80300440 002FD380  93 C1 00 08 */	stw r30, 8(r1)
/* 80300444 002FD384  7C 7E 1B 78 */	mr r30, r3
/* 80300448 002FD388  1C 7F 02 FC */	mulli r3, r31, 0x2fc
/* 8030044C 002FD38C  38 63 00 10 */	addi r3, r3, 0x10
/* 80300450 002FD390  4B D2 3B 5D */	bl __nwa__FUl
/* 80300454 002FD394  3C 80 80 30 */	lis r4, __ct__Q34Game9FixKabuto3ObjFv@ha
/* 80300458 002FD398  3C A0 80 30 */	lis r5, __dt__Q34Game9FixKabuto3ObjFv@ha
/* 8030045C 002FD39C  38 84 06 EC */	addi r4, r4, __ct__Q34Game9FixKabuto3ObjFv@l
/* 80300460 002FD3A0  7F E7 FB 78 */	mr r7, r31
/* 80300464 002FD3A4  38 A5 04 8C */	addi r5, r5, __dt__Q34Game9FixKabuto3ObjFv@l
/* 80300468 002FD3A8  38 C0 02 FC */	li r6, 0x2fc
/* 8030046C 002FD3AC  4B DC 15 85 */	bl __construct_new_array
/* 80300470 002FD3B0  90 7E 00 48 */	stw r3, 0x48(r30)
/* 80300474 002FD3B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80300478 002FD3B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030047C 002FD3BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80300480 002FD3C0  7C 08 03 A6 */	mtlr r0
/* 80300484 002FD3C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80300488 002FD3C8  4E 80 00 20 */	blr 

.global __dt__Q34Game9FixKabuto3ObjFv
__dt__Q34Game9FixKabuto3ObjFv:
/* 8030048C 002FD3CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80300490 002FD3D0  7C 08 02 A6 */	mflr r0
/* 80300494 002FD3D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80300498 002FD3D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030049C 002FD3DC  7C 9F 23 78 */	mr r31, r4
/* 803004A0 002FD3E0  93 C1 00 08 */	stw r30, 8(r1)
/* 803004A4 002FD3E4  7C 7E 1B 79 */	or. r30, r3, r3
/* 803004A8 002FD3E8  41 82 00 B8 */	beq lbl_80300560
/* 803004AC 002FD3EC  3C 60 80 4D */	lis r3, __vt__Q34Game9FixKabuto3Obj@ha
/* 803004B0 002FD3F0  38 1E 02 EC */	addi r0, r30, 0x2ec
/* 803004B4 002FD3F4  38 83 6F 38 */	addi r4, r3, __vt__Q34Game9FixKabuto3Obj@l
/* 803004B8 002FD3F8  90 9E 00 00 */	stw r4, 0(r30)
/* 803004BC 002FD3FC  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 803004C0 002FD400  38 84 03 1C */	addi r4, r4, 0x31c
/* 803004C4 002FD404  90 7E 01 78 */	stw r3, 0x178(r30)
/* 803004C8 002FD408  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 803004CC 002FD40C  90 83 00 00 */	stw r4, 0(r3)
/* 803004D0 002FD410  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 803004D4 002FD414  7C 03 00 50 */	subf r0, r3, r0
/* 803004D8 002FD418  90 03 00 0C */	stw r0, 0xc(r3)
/* 803004DC 002FD41C  41 82 00 74 */	beq lbl_80300550
/* 803004E0 002FD420  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto3Obj@ha
/* 803004E4 002FD424  38 1E 02 E4 */	addi r0, r30, 0x2e4
/* 803004E8 002FD428  38 83 3C 54 */	addi r4, r3, __vt__Q34Game6Kabuto3Obj@l
/* 803004EC 002FD42C  90 9E 00 00 */	stw r4, 0(r30)
/* 803004F0 002FD430  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 803004F4 002FD434  38 84 03 1C */	addi r4, r4, 0x31c
/* 803004F8 002FD438  90 7E 01 78 */	stw r3, 0x178(r30)
/* 803004FC 002FD43C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 80300500 002FD440  90 83 00 00 */	stw r4, 0(r3)
/* 80300504 002FD444  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 80300508 002FD448  7C 03 00 50 */	subf r0, r3, r0
/* 8030050C 002FD44C  90 03 00 0C */	stw r0, 0xc(r3)
/* 80300510 002FD450  41 82 00 40 */	beq lbl_80300550
/* 80300514 002FD454  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 80300518 002FD458  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 8030051C 002FD45C  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 80300520 002FD460  38 7E 02 90 */	addi r3, r30, 0x290
/* 80300524 002FD464  90 9E 00 00 */	stw r4, 0(r30)
/* 80300528 002FD468  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8030052C 002FD46C  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 80300530 002FD470  38 80 FF FF */	li r4, -1
/* 80300534 002FD474  90 BE 01 78 */	stw r5, 0x178(r30)
/* 80300538 002FD478  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8030053C 002FD47C  90 C5 00 00 */	stw r6, 0(r5)
/* 80300540 002FD480  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 80300544 002FD484  7C 05 00 50 */	subf r0, r5, r0
/* 80300548 002FD488  90 05 00 0C */	stw r0, 0xc(r5)
/* 8030054C 002FD48C  48 11 10 3D */	bl __dt__5CNodeFv
lbl_80300550:
/* 80300550 002FD490  7F E0 07 35 */	extsh. r0, r31
/* 80300554 002FD494  40 81 00 0C */	ble lbl_80300560
/* 80300558 002FD498  7F C3 F3 78 */	mr r3, r30
/* 8030055C 002FD49C  4B D2 3B 59 */	bl __dl__FPv
lbl_80300560:
/* 80300560 002FD4A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80300564 002FD4A4  7F C3 F3 78 */	mr r3, r30
/* 80300568 002FD4A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030056C 002FD4AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80300570 002FD4B0  7C 08 03 A6 */	mtlr r0
/* 80300574 002FD4B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80300578 002FD4B8  4E 80 00 20 */	blr 

.global getEnemy__Q34Game9FixKabuto3MgrFi
getEnemy__Q34Game9FixKabuto3MgrFi:
/* 8030057C 002FD4BC  1C 04 02 FC */	mulli r0, r4, 0x2fc
/* 80300580 002FD4C0  80 63 00 48 */	lwz r3, 0x48(r3)
/* 80300584 002FD4C4  7C 63 02 14 */	add r3, r3, r0
/* 80300588 002FD4C8  4E 80 00 20 */	blr 

.global loadTexData__Q34Game9FixKabuto3MgrFv
loadTexData__Q34Game9FixKabuto3MgrFv:
/* 8030058C 002FD4CC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80300590 002FD4D0  7C 08 02 A6 */	mflr r0
/* 80300594 002FD4D4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80300598 002FD4D8  38 00 00 00 */	li r0, 0
/* 8030059C 002FD4DC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803005A0 002FD4E0  7C 7F 1B 78 */	mr r31, r3
/* 803005A4 002FD4E4  90 03 00 44 */	stw r0, 0x44(r3)
/* 803005A8 002FD4E8  38 61 00 08 */	addi r3, r1, 8
/* 803005AC 002FD4EC  80 8D 85 28 */	lwz r4, "cKabutoChangeTexName__Q34Game9FixKabuto26@unnamed@FixKabutoMgr_cpp@"@sda21(r13)
/* 803005B0 002FD4F0  48 14 C0 29 */	bl __ct__Q212LoadResource3ArgFPCc
/* 803005B4 002FD4F4  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 803005B8 002FD4F8  38 81 00 08 */	addi r4, r1, 8
/* 803005BC 002FD4FC  48 14 C1 E5 */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 803005C0 002FD500  28 03 00 00 */	cmplwi r3, 0
/* 803005C4 002FD504  41 82 00 0C */	beq lbl_803005D0
/* 803005C8 002FD508  80 03 00 30 */	lwz r0, 0x30(r3)
/* 803005CC 002FD50C  90 1F 00 44 */	stw r0, 0x44(r31)
lbl_803005D0:
/* 803005D0 002FD510  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 803005D4 002FD514  28 00 00 00 */	cmplwi r0, 0
/* 803005D8 002FD518  40 82 00 20 */	bne lbl_803005F8
/* 803005DC 002FD51C  3C 60 80 49 */	lis r3, lbl_8048D940@ha
/* 803005E0 002FD520  3C A0 80 49 */	lis r5, lbl_8048D954@ha
/* 803005E4 002FD524  38 63 D9 40 */	addi r3, r3, lbl_8048D940@l
/* 803005E8 002FD528  38 80 00 52 */	li r4, 0x52
/* 803005EC 002FD52C  38 A5 D9 54 */	addi r5, r5, lbl_8048D954@l
/* 803005F0 002FD530  4C C6 31 82 */	crclr 6
/* 803005F4 002FD534  4B D2 A0 4D */	bl panic_f__12JUTExceptionFPCciPCce
lbl_803005F8:
/* 803005F8 002FD538  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803005FC 002FD53C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80300600 002FD540  7C 08 03 A6 */	mtlr r0
/* 80300604 002FD544  38 21 00 40 */	addi r1, r1, 0x40
/* 80300608 002FD548  4E 80 00 20 */	blr 

.global __dt__Q34Game9FixKabuto3MgrFv
__dt__Q34Game9FixKabuto3MgrFv:
/* 8030060C 002FD54C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80300610 002FD550  7C 08 02 A6 */	mflr r0
/* 80300614 002FD554  90 01 00 14 */	stw r0, 0x14(r1)
/* 80300618 002FD558  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030061C 002FD55C  7C 9F 23 78 */	mr r31, r4
/* 80300620 002FD560  93 C1 00 08 */	stw r30, 8(r1)
/* 80300624 002FD564  7C 7E 1B 79 */	or. r30, r3, r3
/* 80300628 002FD568  41 82 00 90 */	beq lbl_803006B8
/* 8030062C 002FD56C  3C 60 80 4D */	lis r3, __vt__Q34Game9FixKabuto3Mgr@ha
/* 80300630 002FD570  38 63 6D B8 */	addi r3, r3, __vt__Q34Game9FixKabuto3Mgr@l
/* 80300634 002FD574  90 7E 00 00 */	stw r3, 0(r30)
/* 80300638 002FD578  38 03 00 38 */	addi r0, r3, 0x38
/* 8030063C 002FD57C  90 1E 00 04 */	stw r0, 4(r30)
/* 80300640 002FD580  41 82 00 68 */	beq lbl_803006A8
/* 80300644 002FD584  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto3Mgr@ha
/* 80300648 002FD588  38 63 3B 58 */	addi r3, r3, __vt__Q34Game6Kabuto3Mgr@l
/* 8030064C 002FD58C  90 7E 00 00 */	stw r3, 0(r30)
/* 80300650 002FD590  38 03 00 38 */	addi r0, r3, 0x38
/* 80300654 002FD594  90 1E 00 04 */	stw r0, 4(r30)
/* 80300658 002FD598  41 82 00 50 */	beq lbl_803006A8
/* 8030065C 002FD59C  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 80300660 002FD5A0  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 80300664 002FD5A4  90 7E 00 00 */	stw r3, 0(r30)
/* 80300668 002FD5A8  38 03 00 38 */	addi r0, r3, 0x38
/* 8030066C 002FD5AC  90 1E 00 04 */	stw r0, 4(r30)
/* 80300670 002FD5B0  41 82 00 38 */	beq lbl_803006A8
/* 80300674 002FD5B4  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 80300678 002FD5B8  34 1E 00 04 */	addic. r0, r30, 4
/* 8030067C 002FD5BC  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 80300680 002FD5C0  90 7E 00 00 */	stw r3, 0(r30)
/* 80300684 002FD5C4  38 03 00 38 */	addi r0, r3, 0x38
/* 80300688 002FD5C8  90 1E 00 04 */	stw r0, 4(r30)
/* 8030068C 002FD5CC  41 82 00 1C */	beq lbl_803006A8
/* 80300690 002FD5D0  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80300694 002FD5D4  38 7E 00 04 */	addi r3, r30, 4
/* 80300698 002FD5D8  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8030069C 002FD5DC  38 80 00 00 */	li r4, 0
/* 803006A0 002FD5E0  90 1E 00 04 */	stw r0, 4(r30)
/* 803006A4 002FD5E4  48 11 0E E5 */	bl __dt__5CNodeFv
lbl_803006A8:
/* 803006A8 002FD5E8  7F E0 07 35 */	extsh. r0, r31
/* 803006AC 002FD5EC  40 81 00 0C */	ble lbl_803006B8
/* 803006B0 002FD5F0  7F C3 F3 78 */	mr r3, r30
/* 803006B4 002FD5F4  4B D2 3A 01 */	bl __dl__FPv
lbl_803006B8:
/* 803006B8 002FD5F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803006BC 002FD5FC  7F C3 F3 78 */	mr r3, r30
/* 803006C0 002FD600  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803006C4 002FD604  83 C1 00 08 */	lwz r30, 8(r1)
/* 803006C8 002FD608  7C 08 03 A6 */	mtlr r0
/* 803006CC 002FD60C  38 21 00 10 */	addi r1, r1, 0x10
/* 803006D0 002FD610  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game9FixKabuto3MgrFv
getEnemyTypeID__Q34Game9FixKabuto3MgrFv:
/* 803006D4 002FD614  38 60 00 60 */	li r3, 0x60
/* 803006D8 002FD618  4E 80 00 20 */	blr 

.global getChangeTexture__Q34Game9FixKabuto3MgrFv
getChangeTexture__Q34Game9FixKabuto3MgrFv:
/* 803006DC 002FD61C  80 63 00 44 */	lwz r3, 0x44(r3)
/* 803006E0 002FD620  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game9FixKabuto3MgrFv"
"@4@__dt__Q34Game9FixKabuto3MgrFv":
/* 803006E4 002FD624  38 63 FF FC */	addi r3, r3, -4
/* 803006E8 002FD628  4B FF FF 24 */	b __dt__Q34Game9FixKabuto3MgrFv
