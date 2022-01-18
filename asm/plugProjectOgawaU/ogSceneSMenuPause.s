.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_ogSceneSMenuPause_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048E578
lbl_8048E578:
	.4byte 0x534D656E
	.4byte 0x75506175
	.4byte 0x73652073
	.4byte 0x63726565
	.4byte 0x6E000000
.global lbl_8048E58C
lbl_8048E58C:
	.4byte 0x7265735F
	.4byte 0x735F6D65
	.4byte 0x6E755F70
	.4byte 0x61757365
	.4byte 0x2E737A73
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804D8838
lbl_804D8838:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global lbl_804D8844
lbl_804D8844:
	.4byte lbl_803141B8
	.4byte lbl_803141B8
	.4byte lbl_803141B8
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141B8
	.4byte lbl_803141B8
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141B8
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141B8
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141BC
	.4byte lbl_803141B8
.global __vt__Q32og9newScreen10SMenuPause
__vt__Q32og9newScreen10SMenuPause:
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q32og9newScreen10SMenuPauseFv
	.4byte getOwnerID__Q32og9newScreen10SMenuPauseFv
	.4byte getMemberID__Q32og9newScreen10SMenuPauseFv
	.4byte isUseBackupSceneInfo__Q32og9newScreen10SMenuPauseFv
	.4byte isDrawInDemo__Q26Screen9SceneBaseCFv
	.4byte getResName__Q32og9newScreen10SMenuPauseCFv
	.4byte doCreateObj__Q32og9newScreen10SMenuPauseFP10JKRArchive
	.4byte doUserCallBackFunc__Q32og9newScreen10SMenuPauseFPQ28Resource10MgrCommand
	.4byte setPort__Q26Screen9SceneBaseFR8Graphics
	.4byte doUpdateActive__Q32og9newScreen10SMenuPauseFv
	.4byte doConfirmSetScene__Q32og9newScreen10SMenuPauseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg
	.4byte doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	.4byte doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	.4byte setDefaultDispMember__Q26Screen9SceneBaseFv
	.4byte doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg
	.4byte doGetFinishState__Q32og9newScreen14SceneSMenuBaseFv
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515E60
lbl_80515E60:
	.skip 0x4
.global lbl_80515E64
lbl_80515E64:
	.skip 0x4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen10SMenuPauseFv
__ct__Q32og9newScreen10SMenuPauseFv:
/* 803140B4 00310FF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803140B8 00310FF8  7C 08 02 A6 */	mflr r0
/* 803140BC 00310FFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803140C0 00311000  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803140C4 00311004  7C 7F 1B 78 */	mr r31, r3
/* 803140C8 00311008  48 13 D6 C9 */	bl __ct__Q26Screen9SceneBaseFv
/* 803140CC 0031100C  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen14SceneSMenuBase@ha
/* 803140D0 00311010  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen10SMenuPause@ha
/* 803140D4 00311014  38 04 85 EC */	addi r0, r4, __vt__Q32og9newScreen14SceneSMenuBase@l
/* 803140D8 00311018  38 80 00 01 */	li r4, 1
/* 803140DC 0031101C  90 1F 00 00 */	stw r0, 0(r31)
/* 803140E0 00311020  38 03 88 B4 */	addi r0, r3, __vt__Q32og9newScreen10SMenuPause@l
/* 803140E4 00311024  7F E3 FB 78 */	mr r3, r31
/* 803140E8 00311028  90 9F 02 20 */	stw r4, 0x220(r31)
/* 803140EC 0031102C  90 1F 00 00 */	stw r0, 0(r31)
/* 803140F0 00311030  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803140F4 00311034  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803140F8 00311038  7C 08 03 A6 */	mtlr r0
/* 803140FC 0031103C  38 21 00 10 */	addi r1, r1, 0x10
/* 80314100 00311040  4E 80 00 20 */	blr 

.global doUserCallBackFunc__Q32og9newScreen10SMenuPauseFPQ28Resource10MgrCommand
doUserCallBackFunc__Q32og9newScreen10SMenuPauseFPQ28Resource10MgrCommand:
/* 80314104 00311044  4E 80 00 20 */	blr 

.global doCreateObj__Q32og9newScreen10SMenuPauseFP10JKRArchive
doCreateObj__Q32og9newScreen10SMenuPauseFP10JKRArchive:
/* 80314108 00311048  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8031410C 0031104C  7C 08 02 A6 */	mflr r0
/* 80314110 00311050  90 01 00 14 */	stw r0, 0x14(r1)
/* 80314114 00311054  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80314118 00311058  7C 9F 23 78 */	mr r31, r4
/* 8031411C 0031105C  93 C1 00 08 */	stw r30, 8(r1)
/* 80314120 00311060  7C 7E 1B 78 */	mr r30, r3
/* 80314124 00311064  38 60 01 18 */	li r3, 0x118
/* 80314128 00311068  4B D0 FD 7D */	bl __nw__FUl
/* 8031412C 0031106C  7C 64 1B 79 */	or. r4, r3, r3
/* 80314130 00311070  41 82 00 14 */	beq lbl_80314144
/* 80314134 00311074  3C 80 80 49 */	lis r4, lbl_8048E578@ha
/* 80314138 00311078  38 84 E5 78 */	addi r4, r4, lbl_8048E578@l
/* 8031413C 0031107C  48 00 02 F1 */	bl __ct__Q32og9newScreen13ObjSMenuPauseFPCc
/* 80314140 00311080  7C 64 1B 78 */	mr r4, r3
lbl_80314144:
/* 80314144 00311084  7F C3 F3 78 */	mr r3, r30
/* 80314148 00311088  7F E5 FB 78 */	mr r5, r31
/* 8031414C 0031108C  48 13 DC 29 */	bl registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
/* 80314150 00311090  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80314154 00311094  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80314158 00311098  83 C1 00 08 */	lwz r30, 8(r1)
/* 8031415C 0031109C  7C 08 03 A6 */	mtlr r0
/* 80314160 003110A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80314164 003110A4  4E 80 00 20 */	blr 

.global doUpdateActive__Q32og9newScreen10SMenuPauseFv
doUpdateActive__Q32og9newScreen10SMenuPauseFv:
/* 80314168 003110A8  4E 80 00 20 */	blr 

.global doConfirmSetScene__Q32og9newScreen10SMenuPauseFRQ26Screen11SetSceneArg
doConfirmSetScene__Q32og9newScreen10SMenuPauseFRQ26Screen11SetSceneArg:
/* 8031416C 003110AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80314170 003110B0  7C 08 02 A6 */	mflr r0
/* 80314174 003110B4  7C 83 23 78 */	mr r3, r4
/* 80314178 003110B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031417C 003110BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80314180 003110C0  3B E0 00 00 */	li r31, 0
/* 80314184 003110C4  81 84 00 00 */	lwz r12, 0(r4)
/* 80314188 003110C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8031418C 003110CC  7D 89 03 A6 */	mtctr r12
/* 80314190 003110D0  4E 80 04 21 */	bctrl 
/* 80314194 003110D4  38 03 D8 F0 */	addi r0, r3, -10000
/* 80314198 003110D8  28 00 00 1B */	cmplwi r0, 0x1b
/* 8031419C 003110DC  41 81 00 20 */	bgt lbl_803141BC
/* 803141A0 003110E0  3C 60 80 4E */	lis r3, lbl_804D8844@ha
/* 803141A4 003110E4  54 00 10 3A */	slwi r0, r0, 2
/* 803141A8 003110E8  38 63 88 44 */	addi r3, r3, lbl_804D8844@l
/* 803141AC 003110EC  7C 03 00 2E */	lwzx r0, r3, r0
/* 803141B0 003110F0  7C 09 03 A6 */	mtctr r0
/* 803141B4 003110F4  4E 80 04 20 */	bctr 
.global lbl_803141B8
lbl_803141B8:
/* 803141B8 003110F8  3B E0 00 01 */	li r31, 1
.global lbl_803141BC
lbl_803141BC:
/* 803141BC 003110FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803141C0 00311100  7F E3 FB 78 */	mr r3, r31
/* 803141C4 00311104  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803141C8 00311108  7C 08 03 A6 */	mtlr r0
/* 803141CC 0031110C  38 21 00 10 */	addi r1, r1, 0x10
/* 803141D0 00311110  4E 80 00 20 */	blr 

.global getResName__Q32og9newScreen10SMenuPauseCFv
getResName__Q32og9newScreen10SMenuPauseCFv:
/* 803141D4 00311114  3C 60 80 49 */	lis r3, lbl_8048E58C@ha
/* 803141D8 00311118  38 63 E5 8C */	addi r3, r3, lbl_8048E58C@l
/* 803141DC 0031111C  4E 80 00 20 */	blr 

.global getSceneType__Q32og9newScreen10SMenuPauseFv
getSceneType__Q32og9newScreen10SMenuPauseFv:
/* 803141E0 00311120  38 60 27 1A */	li r3, 0x271a
/* 803141E4 00311124  4E 80 00 20 */	blr 

.global getOwnerID__Q32og9newScreen10SMenuPauseFv
getOwnerID__Q32og9newScreen10SMenuPauseFv:
/* 803141E8 00311128  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 803141EC 0031112C  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 803141F0 00311130  4E 80 00 20 */	blr 

.global getMemberID__Q32og9newScreen10SMenuPauseFv
getMemberID__Q32og9newScreen10SMenuPauseFv:
/* 803141F4 00311134  3C 80 41 55 */	lis r4, 0x41555345@ha
/* 803141F8 00311138  3C 60 53 4D */	lis r3, 0x534D5F50@ha
/* 803141FC 0031113C  38 84 53 45 */	addi r4, r4, 0x41555345@l
/* 80314200 00311140  38 63 5F 50 */	addi r3, r3, 0x534D5F50@l
/* 80314204 00311144  4E 80 00 20 */	blr 

.global isUseBackupSceneInfo__Q32og9newScreen10SMenuPauseFv
isUseBackupSceneInfo__Q32og9newScreen10SMenuPauseFv:
/* 80314208 00311148  38 60 00 01 */	li r3, 1
/* 8031420C 0031114C  4E 80 00 20 */	blr 

.global __sinit_ogSceneSMenuPause_cpp
__sinit_ogSceneSMenuPause_cpp:
/* 80314210 00311150  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80314214 00311154  38 00 FF FF */	li r0, -1
/* 80314218 00311158  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8031421C 0031115C  3C 60 80 4E */	lis r3, lbl_804D8838@ha
/* 80314220 00311160  90 0D 97 E0 */	stw r0, lbl_80515E60@sda21(r13)
/* 80314224 00311164  D4 03 88 38 */	stfsu f0, lbl_804D8838@l(r3)
/* 80314228 00311168  D0 0D 97 E4 */	stfs f0, lbl_80515E64@sda21(r13)
/* 8031422C 0031116C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80314230 00311170  D0 03 00 08 */	stfs f0, 8(r3)
/* 80314234 00311174  4E 80 00 20 */	blr 
