.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048D3D8
lbl_8048D3D8:
	.asciz "/enemy/data/BombOtakara/otakara_bomb_s3tc.bti"
	.skip 2
.global lbl_8048D408
lbl_8048D408:
	.4byte 0x836F834E
	.4byte 0x835F8393
	.4byte 0x8349835E
	.4byte 0x834A8389
	.4byte 0x83808356
	.4byte 0x837D836C
	.4byte 0x815B8357
	.4byte 0x83830000
.global lbl_8048D428
lbl_8048D428:
	.asciz "BombOtakaraMgr.cpp"
	.skip 1
.global lbl_8048D43C
lbl_8048D43C:
	.asciz "P2Assert"
	.skip 3

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game11BombOtakara3Mgr
__vt__Q34Game11BombOtakara3Mgr:
	.4byte 0
	.4byte 0
	.4byte doAnimation__Q24Game12EnemyMgrBaseFv
	.4byte doEntry__Q24Game12EnemyMgrBaseFv
	.4byte doSetView__Q24Game12EnemyMgrBaseFi
	.4byte doViewCalc__Q24Game12EnemyMgrBaseFv
	.4byte doSimulation__Q24Game12EnemyMgrBaseFf
	.4byte doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q34Game11BombOtakara3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game11BombOtakara3MgrFv
	.4byte getObject__Q24Game12EnemyMgrBaseFPv
	.4byte getNext__Q24Game12EnemyMgrBaseFPv
	.4byte getStart__Q24Game12EnemyMgrBaseFv
	.4byte getEnd__Q24Game12EnemyMgrBaseFv
	.4byte alloc__Q24Game12EnemyMgrBaseFv
	.4byte birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
	.4byte getJ3DModelData__Q24Game12EnemyMgrBaseCFv
	.4byte getGenerator__Q24Game12EnemyMgrBaseCFv
	.4byte killAll__Q24Game12EnemyMgrBaseFPQ24Game15CreatureKillArg
	.4byte setupSoundViewerAndBas__Q24Game12EnemyMgrBaseFv
	.4byte setDebugParm__Q24Game12EnemyMgrBaseFUl
	.4byte resetDebugParm__Q24Game12EnemyMgrBaseFUl
	.4byte getMaxObjects__Q24Game12EnemyMgrBaseCFv
	.4byte startMovie__Q24Game12EnemyMgrBaseFv
	.4byte endMovie__Q24Game12EnemyMgrBaseFv
	.4byte get__Q24Game12EnemyMgrBaseFPv
	.4byte isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv
	.4byte createObj__Q34Game11BombOtakara3MgrFi
	.4byte getEnemy__Q34Game11BombOtakara3MgrFi
	.4byte doAlloc__Q34Game11BombOtakara3MgrFv
	.4byte getEnemyTypeID__Q34Game11BombOtakara3MgrFv
	.4byte createModel__Q34Game11OtakaraBase3MgrFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game11OtakaraBase3MgrFv
	.4byte loadAnimData__Q34Game11OtakaraBase3MgrFv
	.4byte loadTexData__Q34Game11BombOtakara3MgrFv
	.4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
	.4byte getChangeTexture__Q34Game11BombOtakara3MgrFv
	.4byte 0

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 0x8
.global "cOtakaraChangeTexName__Q34Game11BombOtakara28@unnamed@BombOtakaraMgr_cpp@"
"cOtakaraChangeTexName__Q34Game11BombOtakara28@unnamed@BombOtakaraMgr_cpp@":
	.4byte lbl_8048D3D8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game11BombOtakara3MgrFiUc
__ct__Q34Game11BombOtakara3MgrFiUc:
/* 802F92D0 002F6210  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F92D4 002F6214  7C 08 02 A6 */	mflr r0
/* 802F92D8 002F6218  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F92DC 002F621C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F92E0 002F6220  7C 7F 1B 78 */	mr r31, r3
/* 802F92E4 002F6224  4B FB CB B5 */	bl __ct__Q34Game11OtakaraBase3MgrFiUc
/* 802F92E8 002F6228  3C 60 80 4D */	lis r3, __vt__Q34Game11BombOtakara3Mgr@ha
/* 802F92EC 002F622C  3C 80 80 49 */	lis r4, lbl_8048D408@ha
/* 802F92F0 002F6230  38 A3 5A 20 */	addi r5, r3, __vt__Q34Game11BombOtakara3Mgr@l
/* 802F92F4 002F6234  7F E3 FB 78 */	mr r3, r31
/* 802F92F8 002F6238  90 BF 00 00 */	stw r5, 0(r31)
/* 802F92FC 002F623C  38 A5 00 38 */	addi r5, r5, 0x38
/* 802F9300 002F6240  38 04 D4 08 */	addi r0, r4, lbl_8048D408@l
/* 802F9304 002F6244  90 BF 00 04 */	stw r5, 4(r31)
/* 802F9308 002F6248  90 1F 00 18 */	stw r0, 0x18(r31)
/* 802F930C 002F624C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F9310 002F6250  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F9314 002F6254  7C 08 03 A6 */	mtlr r0
/* 802F9318 002F6258  38 21 00 10 */	addi r1, r1, 0x10
/* 802F931C 002F625C  4E 80 00 20 */	blr 

.global doAlloc__Q34Game11BombOtakara3MgrFv
doAlloc__Q34Game11BombOtakara3MgrFv:
/* 802F9320 002F6260  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F9324 002F6264  7C 08 02 A6 */	mflr r0
/* 802F9328 002F6268  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F932C 002F626C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F9330 002F6270  7C 7F 1B 78 */	mr r31, r3
/* 802F9334 002F6274  38 60 08 A8 */	li r3, 0x8a8
/* 802F9338 002F6278  4B D2 AB 6D */	bl __nw__FUl
/* 802F933C 002F627C  7C 64 1B 79 */	or. r4, r3, r3
/* 802F9340 002F6280  41 82 00 0C */	beq lbl_802F934C
/* 802F9344 002F6284  4B FB EA 21 */	bl __ct__Q34Game11OtakaraBase5ParmsFv
/* 802F9348 002F6288  7C 64 1B 78 */	mr r4, r3
lbl_802F934C:
/* 802F934C 002F628C  7F E3 FB 78 */	mr r3, r31
/* 802F9350 002F6290  4B E3 65 4D */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 802F9354 002F6294  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F9358 002F6298  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F935C 002F629C  7C 08 03 A6 */	mtlr r0
/* 802F9360 002F62A0  38 21 00 10 */	addi r1, r1, 0x10
/* 802F9364 002F62A4  4E 80 00 20 */	blr 

.global createObj__Q34Game11BombOtakara3MgrFi
createObj__Q34Game11BombOtakara3MgrFi:
/* 802F9368 002F62A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F936C 002F62AC  7C 08 02 A6 */	mflr r0
/* 802F9370 002F62B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F9374 002F62B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F9378 002F62B8  7C 9F 23 78 */	mr r31, r4
/* 802F937C 002F62BC  93 C1 00 08 */	stw r30, 8(r1)
/* 802F9380 002F62C0  7C 7E 1B 78 */	mr r30, r3
/* 802F9384 002F62C4  1C 7F 03 04 */	mulli r3, r31, 0x304
/* 802F9388 002F62C8  38 63 00 10 */	addi r3, r3, 0x10
/* 802F938C 002F62CC  4B D2 AC 21 */	bl __nwa__FUl
/* 802F9390 002F62D0  3C 80 80 30 */	lis r4, __ct__Q34Game11BombOtakara3ObjFv@ha
/* 802F9394 002F62D4  3C A0 80 30 */	lis r5, __dt__Q34Game11BombOtakara3ObjFv@ha
/* 802F9398 002F62D8  38 84 96 24 */	addi r4, r4, __ct__Q34Game11BombOtakara3ObjFv@l
/* 802F939C 002F62DC  7F E7 FB 78 */	mr r7, r31
/* 802F93A0 002F62E0  38 A5 93 C8 */	addi r5, r5, __dt__Q34Game11BombOtakara3ObjFv@l
/* 802F93A4 002F62E4  38 C0 03 04 */	li r6, 0x304
/* 802F93A8 002F62E8  4B DC 86 49 */	bl __construct_new_array
/* 802F93AC 002F62EC  90 7E 00 48 */	stw r3, 0x48(r30)
/* 802F93B0 002F62F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F93B4 002F62F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F93B8 002F62F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F93BC 002F62FC  7C 08 03 A6 */	mtlr r0
/* 802F93C0 002F6300  38 21 00 10 */	addi r1, r1, 0x10
/* 802F93C4 002F6304  4E 80 00 20 */	blr 

.global __dt__Q34Game11BombOtakara3ObjFv
__dt__Q34Game11BombOtakara3ObjFv:
/* 802F93C8 002F6308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F93CC 002F630C  7C 08 02 A6 */	mflr r0
/* 802F93D0 002F6310  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F93D4 002F6314  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F93D8 002F6318  7C 9F 23 78 */	mr r31, r4
/* 802F93DC 002F631C  93 C1 00 08 */	stw r30, 8(r1)
/* 802F93E0 002F6320  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F93E4 002F6324  41 82 00 B4 */	beq lbl_802F9498
/* 802F93E8 002F6328  3C 60 80 4D */	lis r3, __vt__Q34Game11BombOtakara3Obj@ha
/* 802F93EC 002F632C  38 BE 02 F4 */	addi r5, r30, 0x2f4
/* 802F93F0 002F6330  38 83 5B 08 */	addi r4, r3, __vt__Q34Game11BombOtakara3Obj@l
/* 802F93F4 002F6334  90 9E 00 00 */	stw r4, 0(r30)
/* 802F93F8 002F6338  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802F93FC 002F633C  38 04 03 24 */	addi r0, r4, 0x324
/* 802F9400 002F6340  90 7E 01 78 */	stw r3, 0x178(r30)
/* 802F9404 002F6344  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802F9408 002F6348  90 03 00 00 */	stw r0, 0(r3)
/* 802F940C 002F634C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802F9410 002F6350  7C 03 28 50 */	subf r0, r3, r5
/* 802F9414 002F6354  90 03 00 0C */	stw r0, 0xc(r3)
/* 802F9418 002F6358  41 82 00 70 */	beq lbl_802F9488
/* 802F941C 002F635C  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase3Obj@ha
/* 802F9420 002F6360  38 83 F0 84 */	addi r4, r3, __vt__Q34Game11OtakaraBase3Obj@l
/* 802F9424 002F6364  90 9E 00 00 */	stw r4, 0(r30)
/* 802F9428 002F6368  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802F942C 002F636C  38 04 03 24 */	addi r0, r4, 0x324
/* 802F9430 002F6370  90 7E 01 78 */	stw r3, 0x178(r30)
/* 802F9434 002F6374  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802F9438 002F6378  90 03 00 00 */	stw r0, 0(r3)
/* 802F943C 002F637C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802F9440 002F6380  7C 03 28 50 */	subf r0, r3, r5
/* 802F9444 002F6384  90 03 00 0C */	stw r0, 0xc(r3)
/* 802F9448 002F6388  41 82 00 40 */	beq lbl_802F9488
/* 802F944C 002F638C  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 802F9450 002F6390  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 802F9454 002F6394  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 802F9458 002F6398  38 7E 02 90 */	addi r3, r30, 0x290
/* 802F945C 002F639C  90 9E 00 00 */	stw r4, 0(r30)
/* 802F9460 002F63A0  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 802F9464 002F63A4  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 802F9468 002F63A8  38 80 FF FF */	li r4, -1
/* 802F946C 002F63AC  90 BE 01 78 */	stw r5, 0x178(r30)
/* 802F9470 002F63B0  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 802F9474 002F63B4  90 C5 00 00 */	stw r6, 0(r5)
/* 802F9478 002F63B8  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 802F947C 002F63BC  7C 05 00 50 */	subf r0, r5, r0
/* 802F9480 002F63C0  90 05 00 0C */	stw r0, 0xc(r5)
/* 802F9484 002F63C4  48 11 81 05 */	bl __dt__5CNodeFv
lbl_802F9488:
/* 802F9488 002F63C8  7F E0 07 35 */	extsh. r0, r31
/* 802F948C 002F63CC  40 81 00 0C */	ble lbl_802F9498
/* 802F9490 002F63D0  7F C3 F3 78 */	mr r3, r30
/* 802F9494 002F63D4  4B D2 AC 21 */	bl __dl__FPv
lbl_802F9498:
/* 802F9498 002F63D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F949C 002F63DC  7F C3 F3 78 */	mr r3, r30
/* 802F94A0 002F63E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F94A4 002F63E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F94A8 002F63E8  7C 08 03 A6 */	mtlr r0
/* 802F94AC 002F63EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F94B0 002F63F0  4E 80 00 20 */	blr 

.global getEnemy__Q34Game11BombOtakara3MgrFi
getEnemy__Q34Game11BombOtakara3MgrFi:
/* 802F94B4 002F63F4  1C 04 03 04 */	mulli r0, r4, 0x304
/* 802F94B8 002F63F8  80 63 00 48 */	lwz r3, 0x48(r3)
/* 802F94BC 002F63FC  7C 63 02 14 */	add r3, r3, r0
/* 802F94C0 002F6400  4E 80 00 20 */	blr 

.global loadTexData__Q34Game11BombOtakara3MgrFv
loadTexData__Q34Game11BombOtakara3MgrFv:
/* 802F94C4 002F6404  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802F94C8 002F6408  7C 08 02 A6 */	mflr r0
/* 802F94CC 002F640C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F94D0 002F6410  38 00 00 00 */	li r0, 0
/* 802F94D4 002F6414  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802F94D8 002F6418  7C 7F 1B 78 */	mr r31, r3
/* 802F94DC 002F641C  90 03 00 44 */	stw r0, 0x44(r3)
/* 802F94E0 002F6420  38 61 00 08 */	addi r3, r1, 8
/* 802F94E4 002F6424  80 8D 85 08 */	lwz r4, "cOtakaraChangeTexName__Q34Game11BombOtakara28@unnamed@BombOtakaraMgr_cpp@"@sda21(r13)
/* 802F94E8 002F6428  48 15 30 F1 */	bl __ct__Q212LoadResource3ArgFPCc
/* 802F94EC 002F642C  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 802F94F0 002F6430  38 81 00 08 */	addi r4, r1, 8
/* 802F94F4 002F6434  48 15 32 AD */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 802F94F8 002F6438  28 03 00 00 */	cmplwi r3, 0
/* 802F94FC 002F643C  41 82 00 0C */	beq lbl_802F9508
/* 802F9500 002F6440  80 03 00 30 */	lwz r0, 0x30(r3)
/* 802F9504 002F6444  90 1F 00 44 */	stw r0, 0x44(r31)
lbl_802F9508:
/* 802F9508 002F6448  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 802F950C 002F644C  28 00 00 00 */	cmplwi r0, 0
/* 802F9510 002F6450  40 82 00 20 */	bne lbl_802F9530
/* 802F9514 002F6454  3C 60 80 49 */	lis r3, lbl_8048D428@ha
/* 802F9518 002F6458  3C A0 80 49 */	lis r5, lbl_8048D43C@ha
/* 802F951C 002F645C  38 63 D4 28 */	addi r3, r3, lbl_8048D428@l
/* 802F9520 002F6460  38 80 00 53 */	li r4, 0x53
/* 802F9524 002F6464  38 A5 D4 3C */	addi r5, r5, lbl_8048D43C@l
/* 802F9528 002F6468  4C C6 31 82 */	crclr 6
/* 802F952C 002F646C  4B D3 11 15 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_802F9530:
/* 802F9530 002F6470  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802F9534 002F6474  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802F9538 002F6478  7C 08 03 A6 */	mtlr r0
/* 802F953C 002F647C  38 21 00 40 */	addi r1, r1, 0x40
/* 802F9540 002F6480  4E 80 00 20 */	blr 

.global __dt__Q34Game11BombOtakara3MgrFv
__dt__Q34Game11BombOtakara3MgrFv:
/* 802F9544 002F6484  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F9548 002F6488  7C 08 02 A6 */	mflr r0
/* 802F954C 002F648C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F9550 002F6490  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F9554 002F6494  7C 9F 23 78 */	mr r31, r4
/* 802F9558 002F6498  93 C1 00 08 */	stw r30, 8(r1)
/* 802F955C 002F649C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F9560 002F64A0  41 82 00 90 */	beq lbl_802F95F0
/* 802F9564 002F64A4  3C 60 80 4D */	lis r3, __vt__Q34Game11BombOtakara3Mgr@ha
/* 802F9568 002F64A8  38 63 5A 20 */	addi r3, r3, __vt__Q34Game11BombOtakara3Mgr@l
/* 802F956C 002F64AC  90 7E 00 00 */	stw r3, 0(r30)
/* 802F9570 002F64B0  38 03 00 38 */	addi r0, r3, 0x38
/* 802F9574 002F64B4  90 1E 00 04 */	stw r0, 4(r30)
/* 802F9578 002F64B8  41 82 00 68 */	beq lbl_802F95E0
/* 802F957C 002F64BC  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase3Mgr@ha
/* 802F9580 002F64C0  38 63 EF 90 */	addi r3, r3, __vt__Q34Game11OtakaraBase3Mgr@l
/* 802F9584 002F64C4  90 7E 00 00 */	stw r3, 0(r30)
/* 802F9588 002F64C8  38 03 00 38 */	addi r0, r3, 0x38
/* 802F958C 002F64CC  90 1E 00 04 */	stw r0, 4(r30)
/* 802F9590 002F64D0  41 82 00 50 */	beq lbl_802F95E0
/* 802F9594 002F64D4  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 802F9598 002F64D8  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 802F959C 002F64DC  90 7E 00 00 */	stw r3, 0(r30)
/* 802F95A0 002F64E0  38 03 00 38 */	addi r0, r3, 0x38
/* 802F95A4 002F64E4  90 1E 00 04 */	stw r0, 4(r30)
/* 802F95A8 002F64E8  41 82 00 38 */	beq lbl_802F95E0
/* 802F95AC 002F64EC  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 802F95B0 002F64F0  34 1E 00 04 */	addic. r0, r30, 4
/* 802F95B4 002F64F4  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 802F95B8 002F64F8  90 7E 00 00 */	stw r3, 0(r30)
/* 802F95BC 002F64FC  38 03 00 38 */	addi r0, r3, 0x38
/* 802F95C0 002F6500  90 1E 00 04 */	stw r0, 4(r30)
/* 802F95C4 002F6504  41 82 00 1C */	beq lbl_802F95E0
/* 802F95C8 002F6508  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802F95CC 002F650C  38 7E 00 04 */	addi r3, r30, 4
/* 802F95D0 002F6510  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802F95D4 002F6514  38 80 00 00 */	li r4, 0
/* 802F95D8 002F6518  90 1E 00 04 */	stw r0, 4(r30)
/* 802F95DC 002F651C  48 11 7F AD */	bl __dt__5CNodeFv
lbl_802F95E0:
/* 802F95E0 002F6520  7F E0 07 35 */	extsh. r0, r31
/* 802F95E4 002F6524  40 81 00 0C */	ble lbl_802F95F0
/* 802F95E8 002F6528  7F C3 F3 78 */	mr r3, r30
/* 802F95EC 002F652C  4B D2 AA C9 */	bl __dl__FPv
lbl_802F95F0:
/* 802F95F0 002F6530  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F95F4 002F6534  7F C3 F3 78 */	mr r3, r30
/* 802F95F8 002F6538  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F95FC 002F653C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F9600 002F6540  7C 08 03 A6 */	mtlr r0
/* 802F9604 002F6544  38 21 00 10 */	addi r1, r1, 0x10
/* 802F9608 002F6548  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game11BombOtakara3MgrFv
getEnemyTypeID__Q34Game11BombOtakara3MgrFv:
/* 802F960C 002F654C  38 60 00 5D */	li r3, 0x5d
/* 802F9610 002F6550  4E 80 00 20 */	blr 

.global getChangeTexture__Q34Game11BombOtakara3MgrFv
getChangeTexture__Q34Game11BombOtakara3MgrFv:
/* 802F9614 002F6554  80 63 00 44 */	lwz r3, 0x44(r3)
/* 802F9618 002F6558  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game11BombOtakara3MgrFv"
"@4@__dt__Q34Game11BombOtakara3MgrFv":
/* 802F961C 002F655C  38 63 FF FC */	addi r3, r3, -4
/* 802F9620 002F6560  4B FF FF 24 */	b __dt__Q34Game11BombOtakara3MgrFv
