.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game6VsGame8TekiNode
__vt__Q34Game6VsGame8TekiNode:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game6VsGame8TekiNodeFv
	.4byte getChildCount__5CNodeFv

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051A3C0:
	.float 32768.0
lbl_8051A3C4: #tau
	.float 6.2831855
lbl_8051A3C8:
	.float 50.0
.balign 8
lbl_8051A3D0:
	.4byte 0x43300000
	.4byte 0x80000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game6VsGame7TekiMgrFv
__ct__Q34Game6VsGame7TekiMgrFv:
/* 802352F0 00232230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802352F4 00232234  7C 08 02 A6 */	mflr r0
/* 802352F8 00232238  90 01 00 14 */	stw r0, 0x14(r1)
/* 802352FC 0023223C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80235300 00232240  7C 7F 1B 78 */	mr r31, r3
/* 80235304 00232244  48 1D C0 8D */	bl __ct__5CNodeFv
/* 80235308 00232248  3C 60 80 4C */	lis r3, __vt__Q34Game6VsGame8TekiNode@ha
/* 8023530C 0023224C  38 00 00 00 */	li r0, 0
/* 80235310 00232250  38 83 14 60 */	addi r4, r3, __vt__Q34Game6VsGame8TekiNode@l
/* 80235314 00232254  7F E3 FB 78 */	mr r3, r31
/* 80235318 00232258  90 9F 00 00 */	stw r4, 0(r31)
/* 8023531C 0023225C  90 1F 00 24 */	stw r0, 0x24(r31)
/* 80235320 00232260  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80235324 00232264  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80235328 00232268  7C 08 03 A6 */	mtlr r0
/* 8023532C 0023226C  38 21 00 10 */	addi r1, r1, 0x10
/* 80235330 00232270  4E 80 00 20 */	blr 

.global __dt__Q34Game6VsGame8TekiNodeFv
__dt__Q34Game6VsGame8TekiNodeFv: # weak func
/* 80235334 00232274  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80235338 00232278  7C 08 02 A6 */	mflr r0
/* 8023533C 0023227C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80235340 00232280  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80235344 00232284  7C 9F 23 78 */	mr r31, r4
/* 80235348 00232288  93 C1 00 08 */	stw r30, 8(r1)
/* 8023534C 0023228C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80235350 00232290  41 82 00 28 */	beq lbl_80235378
/* 80235354 00232294  3C A0 80 4C */	lis r5, __vt__Q34Game6VsGame8TekiNode@ha
/* 80235358 00232298  38 80 00 00 */	li r4, 0
/* 8023535C 0023229C  38 05 14 60 */	addi r0, r5, __vt__Q34Game6VsGame8TekiNode@l
/* 80235360 002322A0  90 1E 00 00 */	stw r0, 0(r30)
/* 80235364 002322A4  48 1D C2 25 */	bl __dt__5CNodeFv
/* 80235368 002322A8  7F E0 07 35 */	extsh. r0, r31
/* 8023536C 002322AC  40 81 00 0C */	ble lbl_80235378
/* 80235370 002322B0  7F C3 F3 78 */	mr r3, r30
/* 80235374 002322B4  4B DE ED 41 */	bl __dl__FPv
lbl_80235378:
/* 80235378 002322B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023537C 002322BC  7F C3 F3 78 */	mr r3, r30
/* 80235380 002322C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80235384 002322C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80235388 002322C8  7C 08 03 A6 */	mtlr r0
/* 8023538C 002322CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80235390 002322D0  4E 80 00 20 */	blr 

.global entry__Q34Game6VsGame7TekiMgrFQ34Game11EnemyTypeID12EEnemyTypeIDi
entry__Q34Game6VsGame7TekiMgrFQ34Game11EnemyTypeID12EEnemyTypeIDi:
/* 80235394 002322D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80235398 002322D8  7C 08 02 A6 */	mflr r0
/* 8023539C 002322DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802353A0 002322E0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802353A4 002322E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802353A8 002322E8  7C BE 2B 78 */	mr r30, r5
/* 802353AC 002322EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802353B0 002322F0  7C 9D 23 78 */	mr r29, r4
/* 802353B4 002322F4  93 81 00 10 */	stw r28, 0x10(r1)
/* 802353B8 002322F8  7C 7C 1B 78 */	mr r28, r3
/* 802353BC 002322FC  38 60 00 24 */	li r3, 0x24
/* 802353C0 00232300  4B DE EA E5 */	bl __nw__FUl
/* 802353C4 00232304  7C 7F 1B 79 */	or. r31, r3, r3
/* 802353C8 00232308  41 82 00 14 */	beq lbl_802353DC
/* 802353CC 0023230C  48 1D BF C5 */	bl __ct__5CNodeFv
/* 802353D0 00232310  3C 60 80 4C */	lis r3, __vt__Q34Game6VsGame8TekiNode@ha
/* 802353D4 00232314  38 03 14 60 */	addi r0, r3, __vt__Q34Game6VsGame8TekiNode@l
/* 802353D8 00232318  90 1F 00 00 */	stw r0, 0(r31)
lbl_802353DC:
/* 802353DC 0023231C  93 BF 00 18 */	stw r29, 0x18(r31)
/* 802353E0 00232320  7F 83 E3 78 */	mr r3, r28
/* 802353E4 00232324  7F E4 FB 78 */	mr r4, r31
/* 802353E8 00232328  93 DF 00 1C */	stw r30, 0x1c(r31)
/* 802353EC 0023232C  80 BC 00 24 */	lwz r5, 0x24(r28)
/* 802353F0 00232330  38 05 00 01 */	addi r0, r5, 1
/* 802353F4 00232334  90 1C 00 24 */	stw r0, 0x24(r28)
/* 802353F8 00232338  90 BF 00 20 */	stw r5, 0x20(r31)
/* 802353FC 0023233C  48 1D C0 0D */	bl add__5CNodeFP5CNode
/* 80235400 00232340  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80235404 00232344  7F A4 EB 78 */	mr r4, r29
/* 80235408 00232348  57 C5 06 3E */	clrlwi r5, r30, 0x18
/* 8023540C 0023234C  38 C0 00 00 */	li r6, 0
/* 80235410 00232350  4B ED 84 45 */	bl addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
/* 80235414 00232354  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80235418 00232358  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8023541C 0023235C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80235420 00232360  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80235424 00232364  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80235428 00232368  7C 08 03 A6 */	mtlr r0
/* 8023542C 0023236C  38 21 00 20 */	addi r1, r1, 0x20
/* 80235430 00232370  4E 80 00 20 */	blr 

.global "birth__Q34Game6VsGame7TekiMgrFiR10Vector3<f>b"
"birth__Q34Game6VsGame7TekiMgrFiR10Vector3<f>b":
/* 80235434 00232374  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80235438 00232378  7C 08 02 A6 */	mflr r0
/* 8023543C 0023237C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80235440 00232380  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80235444 00232384  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80235448 00232388  7C DE 33 78 */	mr r30, r6
/* 8023544C 0023238C  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80235450 00232390  7C BD 2B 78 */	mr r29, r5
/* 80235454 00232394  48 1D C2 49 */	bl getChildAt__5CNodeFi
/* 80235458 00232398  7C 7F 1B 79 */	or. r31, r3, r3
/* 8023545C 0023239C  41 82 00 90 */	beq lbl_802354EC
/* 80235460 002323A0  38 61 00 08 */	addi r3, r1, 8
/* 80235464 002323A4  4B EF 97 C1 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 80235468 002323A8  4B E9 41 39 */	bl rand
/* 8023546C 002323AC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80235470 002323B0  3C 60 43 30 */	lis r3, 0x4330
/* 80235474 002323B4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80235478 002323B8  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8023547C 002323BC  C8 62 C0 70 */	lfd f3, lbl_8051A3D0@sda21(r2)
/* 80235480 002323C0  90 61 00 40 */	stw r3, 0x40(r1)
/* 80235484 002323C4  C0 22 C0 60 */	lfs f1, lbl_8051A3C0@sda21(r2)
/* 80235488 002323C8  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 8023548C 002323CC  C0 02 C0 64 */	lfs f0, lbl_8051A3C4@sda21(r2)
/* 80235490 002323D0  EC 42 18 28 */	fsubs f2, f2, f3
/* 80235494 002323D4  EC 22 08 24 */	fdivs f1, f2, f1
/* 80235498 002323D8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8023549C 002323DC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802354A0 002323E0  C0 1D 00 00 */	lfs f0, 0(r29)
/* 802354A4 002323E4  D0 01 00 08 */	stfs f0, 8(r1)
/* 802354A8 002323E8  C0 1D 00 04 */	lfs f0, 4(r29)
/* 802354AC 002323EC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802354B0 002323F0  C0 1D 00 08 */	lfs f0, 8(r29)
/* 802354B4 002323F4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802354B8 002323F8  41 82 00 0C */	beq lbl_802354C4
/* 802354BC 002323FC  C0 02 C0 68 */	lfs f0, lbl_8051A3C8@sda21(r2)
/* 802354C0 00232400  D0 01 00 34 */	stfs f0, 0x34(r1)
lbl_802354C4:
/* 802354C4 00232404  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802354C8 00232408  38 A1 00 08 */	addi r5, r1, 8
/* 802354CC 0023240C  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 802354D0 00232410  4B ED 7F F1 */	bl birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
/* 802354D4 00232414  7C 7F 1B 79 */	or. r31, r3, r3
/* 802354D8 00232418  41 82 00 0C */	beq lbl_802354E4
/* 802354DC 0023241C  38 80 00 00 */	li r4, 0
/* 802354E0 00232420  4B F0 5A E9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
lbl_802354E4:
/* 802354E4 00232424  7F E3 FB 78 */	mr r3, r31
/* 802354E8 00232428  48 00 00 08 */	b lbl_802354F0
lbl_802354EC:
/* 802354EC 0023242C  38 60 00 00 */	li r3, 0
lbl_802354F0:
/* 802354F0 00232430  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802354F4 00232434  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802354F8 00232438  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802354FC 0023243C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 80235500 00232440  7C 08 03 A6 */	mtlr r0
/* 80235504 00232444  38 21 00 60 */	addi r1, r1, 0x60
/* 80235508 00232448  4E 80 00 20 */	blr 
