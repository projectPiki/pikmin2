.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80497010:
	.asciz "ebiFileSelectMgr"
.balign 4
lbl_80497024:
	.asciz "EnptyUpdate" # typo lol
.balign 4
lbl_80497030:
	.asciz "MountCheck"
.balign 4
lbl_8049703C:
	.asciz "GetPlayerHeader"
.balign 4
lbl_8049704C:
	.asciz "CardError"
.balign 4
lbl_80497058:
	.asciz "ScreenFileSelect"
.balign 4
lbl_8049706C:
	.asciz "ebiFileSelectMgr.cpp"
.balign 4
lbl_80497084:
	.asciz "P2Assert"
.balign 4
lbl_80497090: # Shift-JIS
	.4byte 0x81A68381
	.4byte 0x8382838A
	.4byte 0x815B834A
	.4byte 0x815B8368
	.4byte 0x83478389
	.4byte 0x815B3A91
	.4byte 0x7A92E88A
	.4byte 0x4F82CC83
	.4byte 0x50815B83
	.4byte 0x5882C582
	.4byte 0xB70A0000
.balign 4
lbl_804970BC: # Shift-JIS
	.4byte 0x81A6838D
	.4byte 0x815B8368
	.4byte 0x82C58356
	.4byte 0x838A8341
	.4byte 0x838B8347
	.4byte 0x8389815B
	.4byte 0x82CD82A0
	.4byte 0x82E882A6
	.4byte 0x82C882A2
	.4byte 0x0A000000
.balign 4
lbl_804970E4: # Shift-JIS
	.4byte 0x81A68140
	.4byte 0x6D67722D
	.4byte 0x3E6D4361
	.4byte 0x72644572
	.4byte 0x726F724D
	.4byte 0x67722D3E
	.4byte 0x67657445
	.4byte 0x6E643D25
	.4byte 0x642082C1
	.4byte 0x82C482A0
	.4byte 0x82E882A6
	.4byte 0x82C882A2
	.4byte 0x81490A00

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
lbl_804E9678:
	.4byte .L_803E177C
	.4byte .L_803E181C
	.4byte .L_803E1768
	.4byte .L_803E17CC
	.4byte .L_803E17E0
	.4byte .L_803E1790
	.4byte .L_803E17A4
	.4byte .L_803E17B8
	.4byte .L_803E17F4
	.4byte .L_803E1808
	.4byte .L_803E1858
	.4byte .L_803E1858
	.4byte .L_803E1858
	.4byte .L_803E1844
	.4byte .L_803E1830
.global __vt__Q33ebi10FileSelect4TMgr
__vt__Q33ebi10FileSelect4TMgr:
	.4byte 0
	.4byte 0
	.4byte __dt__Q33ebi10FileSelect4TMgrFv
.global "__vt__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>"
"__vt__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "start__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "transit__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
.global __vt__Q33ebi10FileSelect18FSMState_CardError
__vt__Q33ebi10FileSelect18FSMState_CardError:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
	.4byte "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi10FileSelect18FSMState_CardErrorFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi10FileSelect18FSMState_CardErrorFPQ33ebi10FileSelect4TMgr
.global __vt__Q33ebi10FileSelect25FSMState_ScreenFileSelect
__vt__Q33ebi10FileSelect25FSMState_ScreenFileSelect:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
	.4byte "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi10FileSelect25FSMState_ScreenFileSelectFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi10FileSelect25FSMState_ScreenFileSelectFPQ33ebi10FileSelect4TMgr
.global __vt__Q33ebi10FileSelect24FSMState_GetPlayerHeader
__vt__Q33ebi10FileSelect24FSMState_GetPlayerHeader:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
	.4byte "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_cardRequest__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardReady__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardNoCard__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardIOError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardWrongDevice__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardWrongSector__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardEncoding__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardNoFileSpace__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardNoFileEntry__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardFileOpenError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardSerialNoError__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardPlayerDataBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
.global __vt__Q33ebi10FileSelect19FSMState_MountCheck
__vt__Q33ebi10FileSelect19FSMState_MountCheck:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
	.4byte "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_cardRequest__Q33ebi10FileSelect19FSMState_MountCheckFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardReady__Q33ebi10FileSelect19FSMState_MountCheckFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardNoCard__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardIOError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardWrongDevice__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardWrongSector__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardEncoding__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardNoFileSpace__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardNoFileEntry__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardFileOpenError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardSerialNoError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardPlayerDataBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
.global __vt__Q33ebi10FileSelect20FSMState_CardRequest
__vt__Q33ebi10FileSelect20FSMState_CardRequest:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
	.4byte "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte 0
	.4byte 0
	.4byte do_transitCardNoCard__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardIOError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardWrongDevice__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardWrongSector__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardEncoding__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardNoFileSpace__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardNoFileEntry__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardFileOpenError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardSerialNoError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
	.4byte do_transitCardPlayerDataBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
.global __vt__Q33ebi10FileSelect20FSMState_EmptyUpdate
__vt__Q33ebi10FileSelect20FSMState_EmptyUpdate:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
	.4byte "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi10FileSelect20FSMState_EmptyUpdateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi10FileSelect20FSMState_EmptyUpdateFPQ33ebi10FileSelect4TMgr
.global __vt__Q33ebi10FileSelect8FSMState
__vt__Q33ebi10FileSelect8FSMState:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
	.4byte "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
	.4byte do_init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
	.4byte do_exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
.global "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"
"__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgrPQ24Game8StateArg"
	.4byte "exec__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
.global __vt__Q33ebi10FileSelect15FSMStateMachine
__vt__Q33ebi10FileSelect15FSMStateMachine:
	.4byte 0
	.4byte 0
	.4byte init__Q33ebi10FileSelect15FSMStateMachineFPQ33ebi10FileSelect4TMgr
	.4byte "start__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
	.4byte "exec__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
	.4byte "transit__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global msInstance__Q33ebi10FileSelect4TMgr
msInstance__Q33ebi10FileSelect4TMgr:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051FC18:
	.asciz "Standby"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q33ebi10FileSelect15FSMStateMachineFPQ33ebi10FileSelect4TMgr
init__Q33ebi10FileSelect15FSMStateMachineFPQ33ebi10FileSelect4TMgr:
/* 803E12E0 003DE220  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E12E4 003DE224  7C 08 02 A6 */	mflr r0
/* 803E12E8 003DE228  3C 80 80 49 */	lis r4, lbl_80497010@ha
/* 803E12EC 003DE22C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E12F0 003DE230  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E12F4 003DE234  3B E4 70 10 */	addi r31, r4, lbl_80497010@l
/* 803E12F8 003DE238  38 80 00 06 */	li r4, 6
/* 803E12FC 003DE23C  93 C1 00 08 */	stw r30, 8(r1)
/* 803E1300 003DE240  7C 7E 1B 78 */	mr r30, r3
/* 803E1304 003DE244  48 00 10 99 */	bl "create__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>Fi"
/* 803E1308 003DE248  38 60 00 10 */	li r3, 0x10
/* 803E130C 003DE24C  4B C4 2B 99 */	bl __nw__FUl
/* 803E1310 003DE250  7C 64 1B 79 */	or. r4, r3, r3
/* 803E1314 003DE254  41 82 00 30 */	beq .L_803E1344
/* 803E1318 003DE258  3C A0 80 4F */	lis r5, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
/* 803E131C 003DE25C  3C 60 80 4F */	lis r3, __vt__Q33ebi10FileSelect8FSMState@ha
/* 803E1320 003DE260  38 05 98 8C */	addi r0, r5, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
/* 803E1324 003DE264  38 A0 00 00 */	li r5, 0
/* 803E1328 003DE268  90 04 00 00 */	stw r0, 0(r4)
/* 803E132C 003DE26C  38 63 98 64 */	addi r3, r3, __vt__Q33ebi10FileSelect8FSMState@l
/* 803E1330 003DE270  38 02 18 B8 */	addi r0, r2, lbl_8051FC18@sda21
/* 803E1334 003DE274  90 A4 00 04 */	stw r5, 4(r4)
/* 803E1338 003DE278  90 A4 00 08 */	stw r5, 8(r4)
/* 803E133C 003DE27C  90 64 00 00 */	stw r3, 0(r4)
/* 803E1340 003DE280  90 04 00 0C */	stw r0, 0xc(r4)
.L_803E1344:
/* 803E1344 003DE284  7F C3 F3 78 */	mr r3, r30
/* 803E1348 003DE288  48 00 11 55 */	bl "registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
/* 803E134C 003DE28C  38 60 00 18 */	li r3, 0x18
/* 803E1350 003DE290  4B C4 2B 55 */	bl __nw__FUl
/* 803E1354 003DE294  7C 64 1B 79 */	or. r4, r3, r3
/* 803E1358 003DE298  41 82 00 48 */	beq .L_803E13A0
/* 803E135C 003DE29C  3C 60 80 4F */	lis r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
/* 803E1360 003DE2A0  3C A0 80 4F */	lis r5, __vt__Q33ebi10FileSelect8FSMState@ha
/* 803E1364 003DE2A4  38 03 98 8C */	addi r0, r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
/* 803E1368 003DE2A8  3C 60 80 4F */	lis r3, __vt__Q33ebi10FileSelect20FSMState_EmptyUpdate@ha
/* 803E136C 003DE2AC  90 04 00 00 */	stw r0, 0(r4)
/* 803E1370 003DE2B0  38 00 00 01 */	li r0, 1
/* 803E1374 003DE2B4  38 E0 00 00 */	li r7, 0
/* 803E1378 003DE2B8  38 C5 98 64 */	addi r6, r5, __vt__Q33ebi10FileSelect8FSMState@l
/* 803E137C 003DE2BC  90 04 00 04 */	stw r0, 4(r4)
/* 803E1380 003DE2C0  38 BF 00 14 */	addi r5, r31, 0x14
/* 803E1384 003DE2C4  38 03 98 3C */	addi r0, r3, __vt__Q33ebi10FileSelect20FSMState_EmptyUpdate@l
/* 803E1388 003DE2C8  90 E4 00 08 */	stw r7, 8(r4)
/* 803E138C 003DE2CC  90 C4 00 00 */	stw r6, 0(r4)
/* 803E1390 003DE2D0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803E1394 003DE2D4  90 04 00 00 */	stw r0, 0(r4)
/* 803E1398 003DE2D8  90 E4 00 10 */	stw r7, 0x10(r4)
/* 803E139C 003DE2DC  90 E4 00 14 */	stw r7, 0x14(r4)
.L_803E13A0:
/* 803E13A0 003DE2E0  7F C3 F3 78 */	mr r3, r30
/* 803E13A4 003DE2E4  48 00 10 F9 */	bl "registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
/* 803E13A8 003DE2E8  38 60 00 18 */	li r3, 0x18
/* 803E13AC 003DE2EC  4B C4 2A F9 */	bl __nw__FUl
/* 803E13B0 003DE2F0  7C 64 1B 79 */	or. r4, r3, r3
/* 803E13B4 003DE2F4  41 82 00 4C */	beq .L_803E1400
/* 803E13B8 003DE2F8  3C 60 80 4F */	lis r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
/* 803E13BC 003DE2FC  3C C0 80 4F */	lis r6, __vt__Q33ebi10FileSelect8FSMState@ha
/* 803E13C0 003DE300  38 03 98 8C */	addi r0, r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
/* 803E13C4 003DE304  3C A0 80 4F */	lis r5, __vt__Q33ebi10FileSelect20FSMState_CardRequest@ha
/* 803E13C8 003DE308  90 04 00 00 */	stw r0, 0(r4)
/* 803E13CC 003DE30C  38 E0 00 02 */	li r7, 2
/* 803E13D0 003DE310  3C 60 80 4F */	lis r3, __vt__Q33ebi10FileSelect19FSMState_MountCheck@ha
/* 803E13D4 003DE314  38 00 00 00 */	li r0, 0
/* 803E13D8 003DE318  90 E4 00 04 */	stw r7, 4(r4)
/* 803E13DC 003DE31C  38 E6 98 64 */	addi r7, r6, __vt__Q33ebi10FileSelect8FSMState@l
/* 803E13E0 003DE320  38 DF 00 20 */	addi r6, r31, 0x20
/* 803E13E4 003DE324  38 A5 97 E0 */	addi r5, r5, __vt__Q33ebi10FileSelect20FSMState_CardRequest@l
/* 803E13E8 003DE328  90 04 00 08 */	stw r0, 8(r4)
/* 803E13EC 003DE32C  38 03 97 84 */	addi r0, r3, __vt__Q33ebi10FileSelect19FSMState_MountCheck@l
/* 803E13F0 003DE330  90 E4 00 00 */	stw r7, 0(r4)
/* 803E13F4 003DE334  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803E13F8 003DE338  90 A4 00 00 */	stw r5, 0(r4)
/* 803E13FC 003DE33C  90 04 00 00 */	stw r0, 0(r4)
.L_803E1400:
/* 803E1400 003DE340  7F C3 F3 78 */	mr r3, r30
/* 803E1404 003DE344  48 00 10 99 */	bl "registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
/* 803E1408 003DE348  38 60 00 18 */	li r3, 0x18
/* 803E140C 003DE34C  4B C4 2A 99 */	bl __nw__FUl
/* 803E1410 003DE350  7C 64 1B 79 */	or. r4, r3, r3
/* 803E1414 003DE354  41 82 00 4C */	beq .L_803E1460
/* 803E1418 003DE358  3C 60 80 4F */	lis r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
/* 803E141C 003DE35C  3C C0 80 4F */	lis r6, __vt__Q33ebi10FileSelect8FSMState@ha
/* 803E1420 003DE360  38 03 98 8C */	addi r0, r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
/* 803E1424 003DE364  3C A0 80 4F */	lis r5, __vt__Q33ebi10FileSelect20FSMState_CardRequest@ha
/* 803E1428 003DE368  90 04 00 00 */	stw r0, 0(r4)
/* 803E142C 003DE36C  38 E0 00 03 */	li r7, 3
/* 803E1430 003DE370  3C 60 80 4F */	lis r3, __vt__Q33ebi10FileSelect24FSMState_GetPlayerHeader@ha
/* 803E1434 003DE374  38 00 00 00 */	li r0, 0
/* 803E1438 003DE378  90 E4 00 04 */	stw r7, 4(r4)
/* 803E143C 003DE37C  38 E6 98 64 */	addi r7, r6, __vt__Q33ebi10FileSelect8FSMState@l
/* 803E1440 003DE380  38 DF 00 2C */	addi r6, r31, 0x2c
/* 803E1444 003DE384  38 A5 97 E0 */	addi r5, r5, __vt__Q33ebi10FileSelect20FSMState_CardRequest@l
/* 803E1448 003DE388  90 04 00 08 */	stw r0, 8(r4)
/* 803E144C 003DE38C  38 03 97 28 */	addi r0, r3, __vt__Q33ebi10FileSelect24FSMState_GetPlayerHeader@l
/* 803E1450 003DE390  90 E4 00 00 */	stw r7, 0(r4)
/* 803E1454 003DE394  90 C4 00 0C */	stw r6, 0xc(r4)
/* 803E1458 003DE398  90 A4 00 00 */	stw r5, 0(r4)
/* 803E145C 003DE39C  90 04 00 00 */	stw r0, 0(r4)
.L_803E1460:
/* 803E1460 003DE3A0  7F C3 F3 78 */	mr r3, r30
/* 803E1464 003DE3A4  48 00 10 39 */	bl "registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
/* 803E1468 003DE3A8  38 60 00 10 */	li r3, 0x10
/* 803E146C 003DE3AC  4B C4 2A 39 */	bl __nw__FUl
/* 803E1470 003DE3B0  7C 64 1B 79 */	or. r4, r3, r3
/* 803E1474 003DE3B4  41 82 00 40 */	beq .L_803E14B4
/* 803E1478 003DE3B8  3C 60 80 4F */	lis r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
/* 803E147C 003DE3BC  3C A0 80 4F */	lis r5, __vt__Q33ebi10FileSelect8FSMState@ha
/* 803E1480 003DE3C0  38 03 98 8C */	addi r0, r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
/* 803E1484 003DE3C4  3C 60 80 4F */	lis r3, __vt__Q33ebi10FileSelect18FSMState_CardError@ha
/* 803E1488 003DE3C8  90 04 00 00 */	stw r0, 0(r4)
/* 803E148C 003DE3CC  38 00 00 04 */	li r0, 4
/* 803E1490 003DE3D0  38 E0 00 00 */	li r7, 0
/* 803E1494 003DE3D4  38 C5 98 64 */	addi r6, r5, __vt__Q33ebi10FileSelect8FSMState@l
/* 803E1498 003DE3D8  90 04 00 04 */	stw r0, 4(r4)
/* 803E149C 003DE3DC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 803E14A0 003DE3E0  38 03 96 D8 */	addi r0, r3, __vt__Q33ebi10FileSelect18FSMState_CardError@l
/* 803E14A4 003DE3E4  90 E4 00 08 */	stw r7, 8(r4)
/* 803E14A8 003DE3E8  90 C4 00 00 */	stw r6, 0(r4)
/* 803E14AC 003DE3EC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803E14B0 003DE3F0  90 04 00 00 */	stw r0, 0(r4)
.L_803E14B4:
/* 803E14B4 003DE3F4  7F C3 F3 78 */	mr r3, r30
/* 803E14B8 003DE3F8  48 00 0F E5 */	bl "registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
/* 803E14BC 003DE3FC  38 60 00 10 */	li r3, 0x10
/* 803E14C0 003DE400  4B C4 29 E5 */	bl __nw__FUl
/* 803E14C4 003DE404  7C 64 1B 79 */	or. r4, r3, r3
/* 803E14C8 003DE408  41 82 00 40 */	beq .L_803E1508
/* 803E14CC 003DE40C  3C 60 80 4F */	lis r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@ha
/* 803E14D0 003DE410  3C A0 80 4F */	lis r5, __vt__Q33ebi10FileSelect8FSMState@ha
/* 803E14D4 003DE414  38 03 98 8C */	addi r0, r3, "__vt__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>"@l
/* 803E14D8 003DE418  3C 60 80 4F */	lis r3, __vt__Q33ebi10FileSelect25FSMState_ScreenFileSelect@ha
/* 803E14DC 003DE41C  90 04 00 00 */	stw r0, 0(r4)
/* 803E14E0 003DE420  38 00 00 05 */	li r0, 5
/* 803E14E4 003DE424  38 E0 00 00 */	li r7, 0
/* 803E14E8 003DE428  38 C5 98 64 */	addi r6, r5, __vt__Q33ebi10FileSelect8FSMState@l
/* 803E14EC 003DE42C  90 04 00 04 */	stw r0, 4(r4)
/* 803E14F0 003DE430  38 BF 00 48 */	addi r5, r31, 0x48
/* 803E14F4 003DE434  38 03 97 00 */	addi r0, r3, __vt__Q33ebi10FileSelect25FSMState_ScreenFileSelect@l
/* 803E14F8 003DE438  90 E4 00 08 */	stw r7, 8(r4)
/* 803E14FC 003DE43C  90 C4 00 00 */	stw r6, 0(r4)
/* 803E1500 003DE440  90 A4 00 0C */	stw r5, 0xc(r4)
/* 803E1504 003DE444  90 04 00 00 */	stw r0, 0(r4)
.L_803E1508:
/* 803E1508 003DE448  7F C3 F3 78 */	mr r3, r30
/* 803E150C 003DE44C  48 00 0F 91 */	bl "registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
/* 803E1510 003DE450  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1514 003DE454  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E1518 003DE458  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E151C 003DE45C  7C 08 03 A6 */	mtlr r0
/* 803E1520 003DE460  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1524 003DE464  4E 80 00 20 */	blr 

.global init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg:
/* 803E1528 003DE468  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E152C 003DE46C  7C 08 02 A6 */	mflr r0
/* 803E1530 003DE470  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1534 003DE474  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1538 003DE478  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803E153C 003DE47C  7D 89 03 A6 */	mtctr r12
/* 803E1540 003DE480  4E 80 04 21 */	bctrl 
/* 803E1544 003DE484  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1548 003DE488  7C 08 03 A6 */	mtlr r0
/* 803E154C 003DE48C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1550 003DE490  4E 80 00 20 */	blr 

.global do_init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
do_init__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg:
/* 803E1554 003DE494  4E 80 00 20 */	blr 

.global exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr:
/* 803E1558 003DE498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E155C 003DE49C  7C 08 02 A6 */	mflr r0
/* 803E1560 003DE4A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1564 003DE4A4  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1568 003DE4A8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803E156C 003DE4AC  7D 89 03 A6 */	mtctr r12
/* 803E1570 003DE4B0  4E 80 04 21 */	bctrl 
/* 803E1574 003DE4B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1578 003DE4B8  7C 08 03 A6 */	mtlr r0
/* 803E157C 003DE4BC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1580 003DE4C0  4E 80 00 20 */	blr 

.global do_exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr
do_exec__Q33ebi10FileSelect8FSMStateFPQ33ebi10FileSelect4TMgr:
/* 803E1584 003DE4C4  4E 80 00 20 */	blr 

.global do_init__Q33ebi10FileSelect20FSMState_EmptyUpdateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
do_init__Q33ebi10FileSelect20FSMState_EmptyUpdateFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg:
/* 803E1588 003DE4C8  38 00 00 02 */	li r0, 2
/* 803E158C 003DE4CC  90 03 00 10 */	stw r0, 0x10(r3)
/* 803E1590 003DE4D0  90 03 00 14 */	stw r0, 0x14(r3)
/* 803E1594 003DE4D4  4E 80 00 20 */	blr 

.global do_exec__Q33ebi10FileSelect20FSMState_EmptyUpdateFPQ33ebi10FileSelect4TMgr
do_exec__Q33ebi10FileSelect20FSMState_EmptyUpdateFPQ33ebi10FileSelect4TMgr:
/* 803E1598 003DE4D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E159C 003DE4DC  7C 08 02 A6 */	mflr r0
/* 803E15A0 003DE4E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E15A4 003DE4E4  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 803E15A8 003DE4E8  28 05 00 00 */	cmplwi r5, 0
/* 803E15AC 003DE4EC  41 82 00 0C */	beq .L_803E15B8
/* 803E15B0 003DE4F0  38 05 FF FF */	addi r0, r5, -1
/* 803E15B4 003DE4F4  90 03 00 10 */	stw r0, 0x10(r3)
.L_803E15B8:
/* 803E15B8 003DE4F8  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803E15BC 003DE4FC  28 00 00 00 */	cmplwi r0, 0
/* 803E15C0 003DE500  40 82 00 1C */	bne .L_803E15DC
/* 803E15C4 003DE504  81 83 00 00 */	lwz r12, 0(r3)
/* 803E15C8 003DE508  38 A0 00 02 */	li r5, 2
/* 803E15CC 003DE50C  38 C0 00 00 */	li r6, 0
/* 803E15D0 003DE510  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E15D4 003DE514  7D 89 03 A6 */	mtctr r12
/* 803E15D8 003DE518  4E 80 04 21 */	bctrl 
.L_803E15DC:
/* 803E15DC 003DE51C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E15E0 003DE520  7C 08 03 A6 */	mtlr r0
/* 803E15E4 003DE524  38 21 00 10 */	addi r1, r1, 0x10
/* 803E15E8 003DE528  4E 80 00 20 */	blr 

.global "transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
"transit__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg":
/* 803E15EC 003DE52C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E15F0 003DE530  7C 08 02 A6 */	mflr r0
/* 803E15F4 003DE534  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E15F8 003DE538  80 63 00 08 */	lwz r3, 8(r3)
/* 803E15FC 003DE53C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1600 003DE540  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E1604 003DE544  7D 89 03 A6 */	mtctr r12
/* 803E1608 003DE548  4E 80 04 21 */	bctrl 
/* 803E160C 003DE54C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1610 003DE550  7C 08 03 A6 */	mtlr r0
/* 803E1614 003DE554  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1618 003DE558  4E 80 00 20 */	blr 

.global do_init__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
do_init__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg:
/* 803E161C 003DE55C  38 00 00 00 */	li r0, 0
/* 803E1620 003DE560  90 03 00 10 */	stw r0, 0x10(r3)
/* 803E1624 003DE564  4E 80 00 20 */	blr 

.global do_exec__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_exec__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E1628 003DE568  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E162C 003DE56C  7C 08 02 A6 */	mflr r0
/* 803E1630 003DE570  3C A0 80 49 */	lis r5, lbl_80497010@ha
/* 803E1634 003DE574  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E1638 003DE578  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E163C 003DE57C  7C 7F 1B 78 */	mr r31, r3
/* 803E1640 003DE580  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E1644 003DE584  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E1648 003DE588  3B A5 70 10 */	addi r29, r5, lbl_80497010@l
/* 803E164C 003DE58C  93 81 00 10 */	stw r28, 0x10(r1)
/* 803E1650 003DE590  7C 9C 23 78 */	mr r28, r4
/* 803E1654 003DE594  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803E1658 003DE598  2C 00 00 01 */	cmpwi r0, 1
/* 803E165C 003DE59C  41 82 00 90 */	beq .L_803E16EC
/* 803E1660 003DE5A0  40 80 00 10 */	bge .L_803E1670
/* 803E1664 003DE5A4  2C 00 00 00 */	cmpwi r0, 0
/* 803E1668 003DE5A8  40 80 00 14 */	bge .L_803E167C
/* 803E166C 003DE5AC  48 00 02 14 */	b .L_803E1880
.L_803E1670:
/* 803E1670 003DE5B0  2C 00 00 03 */	cmpwi r0, 3
/* 803E1674 003DE5B4  40 80 02 0C */	bge .L_803E1880
/* 803E1678 003DE5B8  48 00 00 CC */	b .L_803E1744
.L_803E167C:
/* 803E167C 003DE5BC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E1680 003DE5C0  3B C0 00 00 */	li r30, 0
/* 803E1684 003DE5C4  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E1688 003DE5C8  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803E168C 003DE5CC  2C 00 00 00 */	cmpwi r0, 0
/* 803E1690 003DE5D0  40 82 00 14 */	bne .L_803E16A4
/* 803E1694 003DE5D4  48 05 F9 29 */	bl checkStatus__13MemoryCardMgrFv
/* 803E1698 003DE5D8  28 03 00 0B */	cmplwi r3, 0xb
/* 803E169C 003DE5DC  41 82 00 08 */	beq .L_803E16A4
/* 803E16A0 003DE5E0  3B C0 00 01 */	li r30, 1
.L_803E16A4:
/* 803E16A4 003DE5E4  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803E16A8 003DE5E8  41 82 01 D8 */	beq .L_803E1880
/* 803E16AC 003DE5EC  7F E3 FB 78 */	mr r3, r31
/* 803E16B0 003DE5F0  7F 84 E3 78 */	mr r4, r28
/* 803E16B4 003DE5F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 803E16B8 003DE5F8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803E16BC 003DE5FC  7D 89 03 A6 */	mtctr r12
/* 803E16C0 003DE600  4E 80 04 21 */	bctrl 
/* 803E16C4 003DE604  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E16C8 003DE608  40 82 00 18 */	bne .L_803E16E0
/* 803E16CC 003DE60C  38 7D 00 5C */	addi r3, r29, 0x5c
/* 803E16D0 003DE610  38 BD 00 74 */	addi r5, r29, 0x74
/* 803E16D4 003DE614  38 80 00 5A */	li r4, 0x5a
/* 803E16D8 003DE618  4C C6 31 82 */	crclr 6
/* 803E16DC 003DE61C  4B C4 8F 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E16E0:
/* 803E16E0 003DE620  38 00 00 01 */	li r0, 1
/* 803E16E4 003DE624  90 1F 00 10 */	stw r0, 0x10(r31)
/* 803E16E8 003DE628  48 00 01 98 */	b .L_803E1880
.L_803E16EC:
/* 803E16EC 003DE62C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E16F0 003DE630  3B C0 00 00 */	li r30, 0
/* 803E16F4 003DE634  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E16F8 003DE638  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 803E16FC 003DE63C  2C 00 00 00 */	cmpwi r0, 0
/* 803E1700 003DE640  40 82 00 14 */	bne .L_803E1714
/* 803E1704 003DE644  48 05 F8 B9 */	bl checkStatus__13MemoryCardMgrFv
/* 803E1708 003DE648  28 03 00 0B */	cmplwi r3, 0xb
/* 803E170C 003DE64C  41 82 00 08 */	beq .L_803E1714
/* 803E1710 003DE650  3B C0 00 01 */	li r30, 1
.L_803E1714:
/* 803E1714 003DE654  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 803E1718 003DE658  41 82 01 68 */	beq .L_803E1880
/* 803E171C 003DE65C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E1720 003DE660  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E1724 003DE664  48 06 43 E9 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803E1728 003DE668  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803E172C 003DE66C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E1730 003DE670  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E1734 003DE674  48 06 43 D9 */	bl getCardStatus__Q34Game10MemoryCard3MgrFv
/* 803E1738 003DE678  38 00 00 02 */	li r0, 2
/* 803E173C 003DE67C  90 1F 00 10 */	stw r0, 0x10(r31)
/* 803E1740 003DE680  48 00 01 40 */	b .L_803E1880
.L_803E1744:
/* 803E1744 003DE684  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 803E1748 003DE688  28 00 00 0E */	cmplwi r0, 0xe
/* 803E174C 003DE68C  41 81 01 0C */	bgt .L_803E1858
/* 803E1750 003DE690  3C A0 80 4F */	lis r5, lbl_804E9678@ha
/* 803E1754 003DE694  54 00 10 3A */	slwi r0, r0, 2
/* 803E1758 003DE698  38 A5 96 78 */	addi r5, r5, lbl_804E9678@l
/* 803E175C 003DE69C  7C 05 00 2E */	lwzx r0, r5, r0
/* 803E1760 003DE6A0  7C 09 03 A6 */	mtctr r0
/* 803E1764 003DE6A4  4E 80 04 20 */	bctr 
.L_803E1768:
/* 803E1768 003DE6A8  81 83 00 00 */	lwz r12, 0(r3)
/* 803E176C 003DE6AC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803E1770 003DE6B0  7D 89 03 A6 */	mtctr r12
/* 803E1774 003DE6B4  4E 80 04 21 */	bctrl 
/* 803E1778 003DE6B8  48 00 01 08 */	b .L_803E1880
.L_803E177C:
/* 803E177C 003DE6BC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1780 003DE6C0  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803E1784 003DE6C4  7D 89 03 A6 */	mtctr r12
/* 803E1788 003DE6C8  4E 80 04 21 */	bctrl 
/* 803E178C 003DE6CC  48 00 00 F4 */	b .L_803E1880
.L_803E1790:
/* 803E1790 003DE6D0  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1794 003DE6D4  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 803E1798 003DE6D8  7D 89 03 A6 */	mtctr r12
/* 803E179C 003DE6DC  4E 80 04 21 */	bctrl 
/* 803E17A0 003DE6E0  48 00 00 E0 */	b .L_803E1880
.L_803E17A4:
/* 803E17A4 003DE6E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803E17A8 003DE6E8  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 803E17AC 003DE6EC  7D 89 03 A6 */	mtctr r12
/* 803E17B0 003DE6F0  4E 80 04 21 */	bctrl 
/* 803E17B4 003DE6F4  48 00 00 CC */	b .L_803E1880
.L_803E17B8:
/* 803E17B8 003DE6F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803E17BC 003DE6FC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803E17C0 003DE700  7D 89 03 A6 */	mtctr r12
/* 803E17C4 003DE704  4E 80 04 21 */	bctrl 
/* 803E17C8 003DE708  48 00 00 B8 */	b .L_803E1880
.L_803E17CC:
/* 803E17CC 003DE70C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E17D0 003DE710  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803E17D4 003DE714  7D 89 03 A6 */	mtctr r12
/* 803E17D8 003DE718  4E 80 04 21 */	bctrl 
/* 803E17DC 003DE71C  48 00 00 A4 */	b .L_803E1880
.L_803E17E0:
/* 803E17E0 003DE720  81 83 00 00 */	lwz r12, 0(r3)
/* 803E17E4 003DE724  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803E17E8 003DE728  7D 89 03 A6 */	mtctr r12
/* 803E17EC 003DE72C  4E 80 04 21 */	bctrl 
/* 803E17F0 003DE730  48 00 00 90 */	b .L_803E1880
.L_803E17F4:
/* 803E17F4 003DE734  81 83 00 00 */	lwz r12, 0(r3)
/* 803E17F8 003DE738  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 803E17FC 003DE73C  7D 89 03 A6 */	mtctr r12
/* 803E1800 003DE740  4E 80 04 21 */	bctrl 
/* 803E1804 003DE744  48 00 00 7C */	b .L_803E1880
.L_803E1808:
/* 803E1808 003DE748  81 83 00 00 */	lwz r12, 0(r3)
/* 803E180C 003DE74C  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 803E1810 003DE750  7D 89 03 A6 */	mtctr r12
/* 803E1814 003DE754  4E 80 04 21 */	bctrl 
/* 803E1818 003DE758  48 00 00 68 */	b .L_803E1880
.L_803E181C:
/* 803E181C 003DE75C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1820 003DE760  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 803E1824 003DE764  7D 89 03 A6 */	mtctr r12
/* 803E1828 003DE768  4E 80 04 21 */	bctrl 
/* 803E182C 003DE76C  48 00 00 54 */	b .L_803E1880
.L_803E1830:
/* 803E1830 003DE770  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1834 003DE774  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 803E1838 003DE778  7D 89 03 A6 */	mtctr r12
/* 803E183C 003DE77C  4E 80 04 21 */	bctrl 
/* 803E1840 003DE780  48 00 00 40 */	b .L_803E1880
.L_803E1844:
/* 803E1844 003DE784  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1848 003DE788  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 803E184C 003DE78C  7D 89 03 A6 */	mtctr r12
/* 803E1850 003DE790  4E 80 04 21 */	bctrl 
/* 803E1854 003DE794  48 00 00 2C */	b .L_803E1880
.L_803E1858:
/* 803E1858 003DE798  38 7D 00 5C */	addi r3, r29, 0x5c
/* 803E185C 003DE79C  38 BD 00 80 */	addi r5, r29, 0x80
/* 803E1860 003DE7A0  38 80 00 96 */	li r4, 0x96
/* 803E1864 003DE7A4  4C C6 31 82 */	crclr 6
/* 803E1868 003DE7A8  4B C4 8D D9 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E186C 003DE7AC  38 7D 00 5C */	addi r3, r29, 0x5c
/* 803E1870 003DE7B0  38 BD 00 74 */	addi r5, r29, 0x74
/* 803E1874 003DE7B4  38 80 00 97 */	li r4, 0x97
/* 803E1878 003DE7B8  4C C6 31 82 */	crclr 6
/* 803E187C 003DE7BC  4B C4 8D C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E1880:
/* 803E1880 003DE7C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E1884 003DE7C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E1888 003DE7C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E188C 003DE7CC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E1890 003DE7D0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803E1894 003DE7D4  7C 08 03 A6 */	mtlr r0
/* 803E1898 003DE7D8  38 21 00 20 */	addi r1, r1, 0x20
/* 803E189C 003DE7DC  4E 80 00 20 */	blr 

.global do_transitCardNoCard__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_transitCardNoCard__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E18A0 003DE7E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E18A4 003DE7E4  7C 08 02 A6 */	mflr r0
/* 803E18A8 003DE7E8  38 A0 00 04 */	li r5, 4
/* 803E18AC 003DE7EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E18B0 003DE7F0  38 00 00 00 */	li r0, 0
/* 803E18B4 003DE7F4  38 C1 00 08 */	addi r6, r1, 8
/* 803E18B8 003DE7F8  90 01 00 08 */	stw r0, 8(r1)
/* 803E18BC 003DE7FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E18C0 003DE800  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E18C4 003DE804  7D 89 03 A6 */	mtctr r12
/* 803E18C8 003DE808  4E 80 04 21 */	bctrl 
/* 803E18CC 003DE80C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E18D0 003DE810  7C 08 03 A6 */	mtlr r0
/* 803E18D4 003DE814  38 21 00 10 */	addi r1, r1, 0x10
/* 803E18D8 003DE818  4E 80 00 20 */	blr 

.global do_transitCardIOError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_transitCardIOError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E18DC 003DE81C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E18E0 003DE820  7C 08 02 A6 */	mflr r0
/* 803E18E4 003DE824  38 A0 00 04 */	li r5, 4
/* 803E18E8 003DE828  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E18EC 003DE82C  38 00 00 01 */	li r0, 1
/* 803E18F0 003DE830  38 C1 00 08 */	addi r6, r1, 8
/* 803E18F4 003DE834  90 01 00 08 */	stw r0, 8(r1)
/* 803E18F8 003DE838  81 83 00 00 */	lwz r12, 0(r3)
/* 803E18FC 003DE83C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E1900 003DE840  7D 89 03 A6 */	mtctr r12
/* 803E1904 003DE844  4E 80 04 21 */	bctrl 
/* 803E1908 003DE848  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E190C 003DE84C  7C 08 03 A6 */	mtlr r0
/* 803E1910 003DE850  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1914 003DE854  4E 80 00 20 */	blr 

.global do_transitCardWrongDevice__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_transitCardWrongDevice__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E1918 003DE858  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E191C 003DE85C  7C 08 02 A6 */	mflr r0
/* 803E1920 003DE860  38 A0 00 04 */	li r5, 4
/* 803E1924 003DE864  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1928 003DE868  38 00 00 02 */	li r0, 2
/* 803E192C 003DE86C  38 C1 00 08 */	addi r6, r1, 8
/* 803E1930 003DE870  90 01 00 08 */	stw r0, 8(r1)
/* 803E1934 003DE874  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1938 003DE878  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E193C 003DE87C  7D 89 03 A6 */	mtctr r12
/* 803E1940 003DE880  4E 80 04 21 */	bctrl 
/* 803E1944 003DE884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1948 003DE888  7C 08 03 A6 */	mtlr r0
/* 803E194C 003DE88C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1950 003DE890  4E 80 00 20 */	blr 

.global do_transitCardWrongSector__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_transitCardWrongSector__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E1954 003DE894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1958 003DE898  7C 08 02 A6 */	mflr r0
/* 803E195C 003DE89C  38 A0 00 04 */	li r5, 4
/* 803E1960 003DE8A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1964 003DE8A4  38 00 00 03 */	li r0, 3
/* 803E1968 003DE8A8  38 C1 00 08 */	addi r6, r1, 8
/* 803E196C 003DE8AC  90 01 00 08 */	stw r0, 8(r1)
/* 803E1970 003DE8B0  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1974 003DE8B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E1978 003DE8B8  7D 89 03 A6 */	mtctr r12
/* 803E197C 003DE8BC  4E 80 04 21 */	bctrl 
/* 803E1980 003DE8C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1984 003DE8C4  7C 08 03 A6 */	mtlr r0
/* 803E1988 003DE8C8  38 21 00 10 */	addi r1, r1, 0x10
/* 803E198C 003DE8CC  4E 80 00 20 */	blr 

.global do_transitCardBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_transitCardBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E1990 003DE8D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1994 003DE8D4  7C 08 02 A6 */	mflr r0
/* 803E1998 003DE8D8  38 A0 00 04 */	li r5, 4
/* 803E199C 003DE8DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E19A0 003DE8E0  38 00 00 04 */	li r0, 4
/* 803E19A4 003DE8E4  38 C1 00 08 */	addi r6, r1, 8
/* 803E19A8 003DE8E8  90 01 00 08 */	stw r0, 8(r1)
/* 803E19AC 003DE8EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E19B0 003DE8F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E19B4 003DE8F4  7D 89 03 A6 */	mtctr r12
/* 803E19B8 003DE8F8  4E 80 04 21 */	bctrl 
/* 803E19BC 003DE8FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E19C0 003DE900  7C 08 03 A6 */	mtlr r0
/* 803E19C4 003DE904  38 21 00 10 */	addi r1, r1, 0x10
/* 803E19C8 003DE908  4E 80 00 20 */	blr 

.global do_transitCardEncoding__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_transitCardEncoding__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E19CC 003DE90C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E19D0 003DE910  7C 08 02 A6 */	mflr r0
/* 803E19D4 003DE914  38 A0 00 04 */	li r5, 4
/* 803E19D8 003DE918  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E19DC 003DE91C  38 00 00 04 */	li r0, 4
/* 803E19E0 003DE920  38 C1 00 08 */	addi r6, r1, 8
/* 803E19E4 003DE924  90 01 00 08 */	stw r0, 8(r1)
/* 803E19E8 003DE928  81 83 00 00 */	lwz r12, 0(r3)
/* 803E19EC 003DE92C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E19F0 003DE930  7D 89 03 A6 */	mtctr r12
/* 803E19F4 003DE934  4E 80 04 21 */	bctrl 
/* 803E19F8 003DE938  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E19FC 003DE93C  7C 08 03 A6 */	mtlr r0
/* 803E1A00 003DE940  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1A04 003DE944  4E 80 00 20 */	blr 

.global do_transitCardNoFileSpace__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_transitCardNoFileSpace__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E1A08 003DE948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1A0C 003DE94C  7C 08 02 A6 */	mflr r0
/* 803E1A10 003DE950  38 A0 00 04 */	li r5, 4
/* 803E1A14 003DE954  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1A18 003DE958  38 00 00 05 */	li r0, 5
/* 803E1A1C 003DE95C  38 C1 00 08 */	addi r6, r1, 8
/* 803E1A20 003DE960  90 01 00 08 */	stw r0, 8(r1)
/* 803E1A24 003DE964  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1A28 003DE968  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E1A2C 003DE96C  7D 89 03 A6 */	mtctr r12
/* 803E1A30 003DE970  4E 80 04 21 */	bctrl 
/* 803E1A34 003DE974  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1A38 003DE978  7C 08 03 A6 */	mtlr r0
/* 803E1A3C 003DE97C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1A40 003DE980  4E 80 00 20 */	blr 

.global do_transitCardNoFileEntry__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_transitCardNoFileEntry__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E1A44 003DE984  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1A48 003DE988  7C 08 02 A6 */	mflr r0
/* 803E1A4C 003DE98C  38 A0 00 04 */	li r5, 4
/* 803E1A50 003DE990  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1A54 003DE994  38 00 00 05 */	li r0, 5
/* 803E1A58 003DE998  38 C1 00 08 */	addi r6, r1, 8
/* 803E1A5C 003DE99C  90 01 00 08 */	stw r0, 8(r1)
/* 803E1A60 003DE9A0  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1A64 003DE9A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E1A68 003DE9A8  7D 89 03 A6 */	mtctr r12
/* 803E1A6C 003DE9AC  4E 80 04 21 */	bctrl 
/* 803E1A70 003DE9B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1A74 003DE9B4  7C 08 03 A6 */	mtlr r0
/* 803E1A78 003DE9B8  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1A7C 003DE9BC  4E 80 00 20 */	blr 

.global do_transitCardFileOpenError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_transitCardFileOpenError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E1A80 003DE9C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1A84 003DE9C4  7C 08 02 A6 */	mflr r0
/* 803E1A88 003DE9C8  38 A0 00 04 */	li r5, 4
/* 803E1A8C 003DE9CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1A90 003DE9D0  38 00 00 06 */	li r0, 6
/* 803E1A94 003DE9D4  38 C1 00 08 */	addi r6, r1, 8
/* 803E1A98 003DE9D8  90 01 00 08 */	stw r0, 8(r1)
/* 803E1A9C 003DE9DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1AA0 003DE9E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E1AA4 003DE9E4  7D 89 03 A6 */	mtctr r12
/* 803E1AA8 003DE9E8  4E 80 04 21 */	bctrl 
/* 803E1AAC 003DE9EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1AB0 003DE9F0  7C 08 03 A6 */	mtlr r0
/* 803E1AB4 003DE9F4  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1AB8 003DE9F8  4E 80 00 20 */	blr 

.global do_transitCardPlayerDataBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_transitCardPlayerDataBroken__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E1ABC 003DE9FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1AC0 003DEA00  7C 08 02 A6 */	mflr r0
/* 803E1AC4 003DEA04  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1AC8 003DEA08  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1ACC 003DEA0C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803E1AD0 003DEA10  7D 89 03 A6 */	mtctr r12
/* 803E1AD4 003DEA14  4E 80 04 21 */	bctrl 
/* 803E1AD8 003DEA18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1ADC 003DEA1C  7C 08 03 A6 */	mtlr r0
/* 803E1AE0 003DEA20  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1AE4 003DEA24  4E 80 00 20 */	blr 

.global do_transitCardSerialNoError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr
do_transitCardSerialNoError__Q33ebi10FileSelect20FSMState_CardRequestFPQ33ebi10FileSelect4TMgr:
/* 803E1AE8 003DEA28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1AEC 003DEA2C  7C 08 02 A6 */	mflr r0
/* 803E1AF0 003DEA30  3C 60 80 49 */	lis r3, lbl_80497010@ha
/* 803E1AF4 003DEA34  38 80 00 E0 */	li r4, 0xe0
/* 803E1AF8 003DEA38  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1AFC 003DEA3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E1B00 003DEA40  3B E3 70 10 */	addi r31, r3, lbl_80497010@l
/* 803E1B04 003DEA44  38 7F 00 5C */	addi r3, r31, 0x5c
/* 803E1B08 003DEA48  38 BF 00 AC */	addi r5, r31, 0xac
/* 803E1B0C 003DEA4C  4C C6 31 82 */	crclr 6
/* 803E1B10 003DEA50  4B C4 8B 31 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E1B14 003DEA54  38 7F 00 5C */	addi r3, r31, 0x5c
/* 803E1B18 003DEA58  38 BF 00 74 */	addi r5, r31, 0x74
/* 803E1B1C 003DEA5C  38 80 00 E1 */	li r4, 0xe1
/* 803E1B20 003DEA60  4C C6 31 82 */	crclr 6
/* 803E1B24 003DEA64  4B C4 8B 1D */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E1B28 003DEA68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1B2C 003DEA6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E1B30 003DEA70  7C 08 03 A6 */	mtlr r0
/* 803E1B34 003DEA74  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1B38 003DEA78  4E 80 00 20 */	blr 

.global do_cardRequest__Q33ebi10FileSelect19FSMState_MountCheckFPQ33ebi10FileSelect4TMgr
do_cardRequest__Q33ebi10FileSelect19FSMState_MountCheckFPQ33ebi10FileSelect4TMgr:
/* 803E1B3C 003DEA7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1B40 003DEA80  7C 08 02 A6 */	mflr r0
/* 803E1B44 003DEA84  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1B48 003DEA88  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E1B4C 003DEA8C  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E1B50 003DEA90  48 06 4D 15 */	bl resetError__Q34Game10MemoryCard3MgrFv
/* 803E1B54 003DEA94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1B58 003DEA98  7C 08 03 A6 */	mtlr r0
/* 803E1B5C 003DEA9C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1B60 003DEAA0  4E 80 00 20 */	blr 

.global do_transitCardReady__Q33ebi10FileSelect19FSMState_MountCheckFPQ33ebi10FileSelect4TMgr
do_transitCardReady__Q33ebi10FileSelect19FSMState_MountCheckFPQ33ebi10FileSelect4TMgr:
/* 803E1B64 003DEAA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1B68 003DEAA8  7C 08 02 A6 */	mflr r0
/* 803E1B6C 003DEAAC  38 A0 00 03 */	li r5, 3
/* 803E1B70 003DEAB0  38 C0 00 00 */	li r6, 0
/* 803E1B74 003DEAB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1B78 003DEAB8  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1B7C 003DEABC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E1B80 003DEAC0  7D 89 03 A6 */	mtctr r12
/* 803E1B84 003DEAC4  4E 80 04 21 */	bctrl 
/* 803E1B88 003DEAC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1B8C 003DEACC  7C 08 03 A6 */	mtlr r0
/* 803E1B90 003DEAD0  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1B94 003DEAD4  4E 80 00 20 */	blr 

.global do_cardRequest__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr
do_cardRequest__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr:
/* 803E1B98 003DEAD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1B9C 003DEADC  7C 08 02 A6 */	mflr r0
/* 803E1BA0 003DEAE0  38 84 0F 48 */	addi r4, r4, 0xf48
/* 803E1BA4 003DEAE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1BA8 003DEAE8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E1BAC 003DEAEC  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E1BB0 003DEAF0  48 06 1A 75 */	bl getPlayerHeader__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard14PlayerFileInfo
/* 803E1BB4 003DEAF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1BB8 003DEAF8  7C 08 03 A6 */	mtlr r0
/* 803E1BBC 003DEAFC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1BC0 003DEB00  4E 80 00 20 */	blr 

.global do_transitCardReady__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr
do_transitCardReady__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr:
/* 803E1BC4 003DEB04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1BC8 003DEB08  7C 08 02 A6 */	mflr r0
/* 803E1BCC 003DEB0C  38 A0 00 05 */	li r5, 5
/* 803E1BD0 003DEB10  38 C0 00 00 */	li r6, 0
/* 803E1BD4 003DEB14  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1BD8 003DEB18  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1BDC 003DEB1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E1BE0 003DEB20  7D 89 03 A6 */	mtctr r12
/* 803E1BE4 003DEB24  4E 80 04 21 */	bctrl 
/* 803E1BE8 003DEB28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1BEC 003DEB2C  7C 08 03 A6 */	mtlr r0
/* 803E1BF0 003DEB30  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1BF4 003DEB34  4E 80 00 20 */	blr 

.global do_transitCardSerialNoError__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr
do_transitCardSerialNoError__Q33ebi10FileSelect24FSMState_GetPlayerHeaderFPQ33ebi10FileSelect4TMgr:
/* 803E1BF8 003DEB38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1BFC 003DEB3C  7C 08 02 A6 */	mflr r0
/* 803E1C00 003DEB40  3C 60 80 49 */	lis r3, lbl_8049706C@ha
/* 803E1C04 003DEB44  3C A0 80 49 */	lis r5, lbl_80497084@ha
/* 803E1C08 003DEB48  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1C0C 003DEB4C  38 63 70 6C */	addi r3, r3, lbl_8049706C@l
/* 803E1C10 003DEB50  38 80 01 05 */	li r4, 0x105
/* 803E1C14 003DEB54  38 A5 70 84 */	addi r5, r5, lbl_80497084@l
/* 803E1C18 003DEB58  4C C6 31 82 */	crclr 6
/* 803E1C1C 003DEB5C  4B C4 8A 25 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E1C20 003DEB60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1C24 003DEB64  7C 08 03 A6 */	mtlr r0
/* 803E1C28 003DEB68  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1C2C 003DEB6C  4E 80 00 20 */	blr 

.global do_init__Q33ebi10FileSelect25FSMState_ScreenFileSelectFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
do_init__Q33ebi10FileSelect25FSMState_ScreenFileSelectFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg:
/* 803E1C30 003DEB70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1C34 003DEB74  7C 08 02 A6 */	mflr r0
/* 803E1C38 003DEB78  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1C3C 003DEB7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E1C40 003DEB80  7C 9F 23 78 */	mr r31, r4
/* 803E1C44 003DEB84  38 7F 00 18 */	addi r3, r31, 0x18
/* 803E1C48 003DEB88  38 9F 0F 48 */	addi r4, r31, 0xf48
/* 803E1C4C 003DEB8C  4B FF E4 2D */	bl perseInfo__Q33ebi2FS4TMgrFRQ34Game10MemoryCard14PlayerFileInfo
/* 803E1C50 003DEB90  38 7F 00 18 */	addi r3, r31, 0x18
/* 803E1C54 003DEB94  4B FF E6 01 */	bl startSeq__Q33ebi2FS4TMgrFv
/* 803E1C58 003DEB98  38 7F 0C 78 */	addi r3, r31, 0xc78
/* 803E1C5C 003DEB9C  4B FF 17 5D */	bl forceQuitSeq__Q33ebi9CardError4TMgrFv
/* 803E1C60 003DEBA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1C64 003DEBA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E1C68 003DEBA8  7C 08 03 A6 */	mtlr r0
/* 803E1C6C 003DEBAC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1C70 003DEBB0  4E 80 00 20 */	blr 

.global do_exec__Q33ebi10FileSelect25FSMState_ScreenFileSelectFPQ33ebi10FileSelect4TMgr
do_exec__Q33ebi10FileSelect25FSMState_ScreenFileSelectFPQ33ebi10FileSelect4TMgr:
/* 803E1C74 003DEBB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1C78 003DEBB8  7C 08 02 A6 */	mflr r0
/* 803E1C7C 003DEBBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1C80 003DEBC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E1C84 003DEBC4  7C 9F 23 78 */	mr r31, r4
/* 803E1C88 003DEBC8  93 C1 00 08 */	stw r30, 8(r1)
/* 803E1C8C 003DEBCC  7C 7E 1B 78 */	mr r30, r3
/* 803E1C90 003DEBD0  38 7F 00 18 */	addi r3, r31, 0x18
/* 803E1C94 003DEBD4  4B FF E6 5D */	bl isFinish__Q33ebi2FS4TMgrFv
/* 803E1C98 003DEBD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E1C9C 003DEBDC  41 82 00 84 */	beq .L_803E1D20
/* 803E1CA0 003DEBE0  80 1F 0C 50 */	lwz r0, 0xc50(r31)
/* 803E1CA4 003DEBE4  2C 00 00 04 */	cmpwi r0, 4
/* 803E1CA8 003DEBE8  41 82 00 5C */	beq .L_803E1D04
/* 803E1CAC 003DEBEC  40 80 00 18 */	bge .L_803E1CC4
/* 803E1CB0 003DEBF0  2C 00 00 03 */	cmpwi r0, 3
/* 803E1CB4 003DEBF4  40 80 00 40 */	bge .L_803E1CF4
/* 803E1CB8 003DEBF8  2C 00 00 01 */	cmpwi r0, 1
/* 803E1CBC 003DEBFC  40 80 00 14 */	bge .L_803E1CD0
/* 803E1CC0 003DEC00  48 00 00 60 */	b .L_803E1D20
.L_803E1CC4:
/* 803E1CC4 003DEC04  2C 00 00 06 */	cmpwi r0, 6
/* 803E1CC8 003DEC08  40 80 00 58 */	bge .L_803E1D20
/* 803E1CCC 003DEC0C  48 00 00 48 */	b .L_803E1D14
.L_803E1CD0:
/* 803E1CD0 003DEC10  7F C3 F3 78 */	mr r3, r30
/* 803E1CD4 003DEC14  7F E4 FB 78 */	mr r4, r31
/* 803E1CD8 003DEC18  81 9E 00 00 */	lwz r12, 0(r30)
/* 803E1CDC 003DEC1C  38 A0 00 02 */	li r5, 2
/* 803E1CE0 003DEC20  38 C0 00 00 */	li r6, 0
/* 803E1CE4 003DEC24  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E1CE8 003DEC28  7D 89 03 A6 */	mtctr r12
/* 803E1CEC 003DEC2C  4E 80 04 21 */	bctrl 
/* 803E1CF0 003DEC30  48 00 00 30 */	b .L_803E1D20
.L_803E1CF4:
/* 803E1CF4 003DEC34  7F E3 FB 78 */	mr r3, r31
/* 803E1CF8 003DEC38  38 80 00 02 */	li r4, 2
/* 803E1CFC 003DEC3C  48 00 05 9D */	bl goEnd___Q33ebi10FileSelect4TMgrFQ43ebi10FileSelect4TMgr7enumEnd
/* 803E1D00 003DEC40  48 00 00 20 */	b .L_803E1D20
.L_803E1D04:
/* 803E1D04 003DEC44  7F E3 FB 78 */	mr r3, r31
/* 803E1D08 003DEC48  38 80 00 01 */	li r4, 1
/* 803E1D0C 003DEC4C  48 00 05 8D */	bl goEnd___Q33ebi10FileSelect4TMgrFQ43ebi10FileSelect4TMgr7enumEnd
/* 803E1D10 003DEC50  48 00 00 10 */	b .L_803E1D20
.L_803E1D14:
/* 803E1D14 003DEC54  7F E3 FB 78 */	mr r3, r31
/* 803E1D18 003DEC58  38 80 00 03 */	li r4, 3
/* 803E1D1C 003DEC5C  48 00 05 7D */	bl goEnd___Q33ebi10FileSelect4TMgrFQ43ebi10FileSelect4TMgr7enumEnd
.L_803E1D20:
/* 803E1D20 003DEC60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1D24 003DEC64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E1D28 003DEC68  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E1D2C 003DEC6C  7C 08 03 A6 */	mtlr r0
/* 803E1D30 003DEC70  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1D34 003DEC74  4E 80 00 20 */	blr 

.global do_init__Q33ebi10FileSelect18FSMState_CardErrorFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg
do_init__Q33ebi10FileSelect18FSMState_CardErrorFPQ33ebi10FileSelect4TMgrPQ24Game8StateArg:
/* 803E1D38 003DEC78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1D3C 003DEC7C  7C 08 02 A6 */	mflr r0
/* 803E1D40 003DEC80  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1D44 003DEC84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E1D48 003DEC88  7C BF 2B 79 */	or. r31, r5, r5
/* 803E1D4C 003DEC8C  93 C1 00 08 */	stw r30, 8(r1)
/* 803E1D50 003DEC90  7C 9E 23 78 */	mr r30, r4
/* 803E1D54 003DEC94  40 82 00 20 */	bne .L_803E1D74
/* 803E1D58 003DEC98  3C 60 80 49 */	lis r3, lbl_8049706C@ha
/* 803E1D5C 003DEC9C  3C A0 80 49 */	lis r5, lbl_80497084@ha
/* 803E1D60 003DECA0  38 63 70 6C */	addi r3, r3, lbl_8049706C@l
/* 803E1D64 003DECA4  38 80 01 3F */	li r4, 0x13f
/* 803E1D68 003DECA8  38 A5 70 84 */	addi r5, r5, lbl_80497084@l
/* 803E1D6C 003DECAC  4C C6 31 82 */	crclr 6
/* 803E1D70 003DECB0  4B C4 88 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E1D74:
/* 803E1D74 003DECB4  80 9F 00 00 */	lwz r4, 0(r31)
/* 803E1D78 003DECB8  38 7E 0C 78 */	addi r3, r30, 0xc78
/* 803E1D7C 003DECBC  4B FF 12 C5 */	bl startSeq__Q33ebi9CardError4TMgrFQ43ebi9CardError4TMgr9enumStart
/* 803E1D80 003DECC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1D84 003DECC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E1D88 003DECC8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E1D8C 003DECCC  7C 08 03 A6 */	mtlr r0
/* 803E1D90 003DECD0  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1D94 003DECD4  4E 80 00 20 */	blr 

.global do_exec__Q33ebi10FileSelect18FSMState_CardErrorFPQ33ebi10FileSelect4TMgr
do_exec__Q33ebi10FileSelect18FSMState_CardErrorFPQ33ebi10FileSelect4TMgr:
/* 803E1D98 003DECD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1D9C 003DECDC  7C 08 02 A6 */	mflr r0
/* 803E1DA0 003DECE0  3C 60 80 49 */	lis r3, lbl_80497010@ha
/* 803E1DA4 003DECE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1DA8 003DECE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E1DAC 003DECEC  3B E3 70 10 */	addi r31, r3, lbl_80497010@l
/* 803E1DB0 003DECF0  93 C1 00 08 */	stw r30, 8(r1)
/* 803E1DB4 003DECF4  7C 9E 23 78 */	mr r30, r4
/* 803E1DB8 003DECF8  38 7E 0C 78 */	addi r3, r30, 0xc78
/* 803E1DBC 003DECFC  4B FF 18 19 */	bl isGetEnd__Q33ebi9CardError4TMgrFv
/* 803E1DC0 003DED00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E1DC4 003DED04  41 82 00 74 */	beq .L_803E1E38
/* 803E1DC8 003DED08  80 DE 0F 18 */	lwz r6, 0xf18(r30)
/* 803E1DCC 003DED0C  2C 06 00 02 */	cmpwi r6, 2
/* 803E1DD0 003DED10  41 82 00 34 */	beq .L_803E1E04
/* 803E1DD4 003DED14  40 80 00 3C */	bge .L_803E1E10
/* 803E1DD8 003DED18  2C 06 00 01 */	cmpwi r6, 1
/* 803E1DDC 003DED1C  40 80 00 08 */	bge .L_803E1DE4
/* 803E1DE0 003DED20  48 00 00 30 */	b .L_803E1E10
.L_803E1DE4:
/* 803E1DE4 003DED24  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E1DE8 003DED28  38 80 00 00 */	li r4, 0
/* 803E1DEC 003DED2C  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E1DF0 003DED30  48 06 34 A5 */	bl loadPlayerForNoCard__Q34Game10MemoryCard3MgrFSc
/* 803E1DF4 003DED34  7F C3 F3 78 */	mr r3, r30
/* 803E1DF8 003DED38  38 80 00 01 */	li r4, 1
/* 803E1DFC 003DED3C  48 00 04 9D */	bl goEnd___Q33ebi10FileSelect4TMgrFQ43ebi10FileSelect4TMgr7enumEnd
/* 803E1E00 003DED40  48 00 00 38 */	b .L_803E1E38
.L_803E1E04:
/* 803E1E04 003DED44  7F C3 F3 78 */	mr r3, r30
/* 803E1E08 003DED48  48 00 02 CD */	bl start__Q33ebi10FileSelect4TMgrFv
/* 803E1E0C 003DED4C  48 00 00 2C */	b .L_803E1E38
.L_803E1E10:
/* 803E1E10 003DED50  38 7F 00 5C */	addi r3, r31, 0x5c
/* 803E1E14 003DED54  38 BF 00 D4 */	addi r5, r31, 0xd4
/* 803E1E18 003DED58  38 80 01 56 */	li r4, 0x156
/* 803E1E1C 003DED5C  4C C6 31 82 */	crclr 6
/* 803E1E20 003DED60  4B C4 88 21 */	bl panic_f__12JUTExceptionFPCciPCce
/* 803E1E24 003DED64  38 7F 00 5C */	addi r3, r31, 0x5c
/* 803E1E28 003DED68  38 BF 00 74 */	addi r5, r31, 0x74
/* 803E1E2C 003DED6C  38 80 01 57 */	li r4, 0x157
/* 803E1E30 003DED70  4C C6 31 82 */	crclr 6
/* 803E1E34 003DED74  4B C4 88 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E1E38:
/* 803E1E38 003DED78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1E3C 003DED7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E1E40 003DED80  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E1E44 003DED84  7C 08 03 A6 */	mtlr r0
/* 803E1E48 003DED88  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1E4C 003DED8C  4E 80 00 20 */	blr 

.global "start__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
"start__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg":
/* 803E1E50 003DED90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1E54 003DED94  7C 08 02 A6 */	mflr r0
/* 803E1E58 003DED98  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1E5C 003DED9C  38 00 00 00 */	li r0, 0
/* 803E1E60 003DEDA0  90 04 10 08 */	stw r0, 0x1008(r4)
/* 803E1E64 003DEDA4  81 83 00 00 */	lwz r12, 0(r3)
/* 803E1E68 003DEDA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E1E6C 003DEDAC  7D 89 03 A6 */	mtctr r12
/* 803E1E70 003DEDB0  4E 80 04 21 */	bctrl 
/* 803E1E74 003DEDB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1E78 003DEDB8  7C 08 03 A6 */	mtlr r0
/* 803E1E7C 003DEDBC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1E80 003DEDC0  4E 80 00 20 */	blr 

.global __dt__Q33ebi2FS4TMgrFv
__dt__Q33ebi2FS4TMgrFv:
/* 803E1E84 003DEDC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1E88 003DEDC8  7C 08 02 A6 */	mflr r0
/* 803E1E8C 003DEDCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1E90 003DEDD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E1E94 003DEDD4  7C 9F 23 78 */	mr r31, r4
/* 803E1E98 003DEDD8  93 C1 00 08 */	stw r30, 8(r1)
/* 803E1E9C 003DEDDC  7C 7E 1B 79 */	or. r30, r3, r3
/* 803E1EA0 003DEDE0  41 82 00 1C */	beq .L_803E1EBC
/* 803E1EA4 003DEDE4  38 80 FF FF */	li r4, -1
/* 803E1EA8 003DEDE8  4B FF E6 71 */	bl __dt__Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803E1EAC 003DEDEC  7F E0 07 35 */	extsh. r0, r31
/* 803E1EB0 003DEDF0  40 81 00 0C */	ble .L_803E1EBC
/* 803E1EB4 003DEDF4  7F C3 F3 78 */	mr r3, r30
/* 803E1EB8 003DEDF8  4B C4 21 FD */	bl __dl__FPv
.L_803E1EBC:
/* 803E1EBC 003DEDFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1EC0 003DEE00  7F C3 F3 78 */	mr r3, r30
/* 803E1EC4 003DEE04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E1EC8 003DEE08  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E1ECC 003DEE0C  7C 08 03 A6 */	mtlr r0
/* 803E1ED0 003DEE10  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1ED4 003DEE14  4E 80 00 20 */	blr 

.global __dt__Q33ebi10FileSelect4TMgrFv
__dt__Q33ebi10FileSelect4TMgrFv:
/* 803E1ED8 003DEE18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1EDC 003DEE1C  7C 08 02 A6 */	mflr r0
/* 803E1EE0 003DEE20  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1EE4 003DEE24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E1EE8 003DEE28  7C 9F 23 78 */	mr r31, r4
/* 803E1EEC 003DEE2C  93 C1 00 08 */	stw r30, 8(r1)
/* 803E1EF0 003DEE30  7C 7E 1B 79 */	or. r30, r3, r3
/* 803E1EF4 003DEE34  41 82 00 4C */	beq .L_803E1F40
/* 803E1EF8 003DEE38  3C 60 80 4F */	lis r3, __vt__Q33ebi10FileSelect4TMgr@ha
/* 803E1EFC 003DEE3C  38 00 00 00 */	li r0, 0
/* 803E1F00 003DEE40  38 83 96 B4 */	addi r4, r3, __vt__Q33ebi10FileSelect4TMgr@l
/* 803E1F04 003DEE44  38 7E 0C 78 */	addi r3, r30, 0xc78
/* 803E1F08 003DEE48  90 9E 00 00 */	stw r4, 0(r30)
/* 803E1F0C 003DEE4C  38 80 FF FF */	li r4, -1
/* 803E1F10 003DEE50  90 0D 9A 60 */	stw r0, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
/* 803E1F14 003DEE54  4B FF A9 09 */	bl __dt__Q33ebi9CardError4TMgrFv
/* 803E1F18 003DEE58  38 7E 00 18 */	addi r3, r30, 0x18
/* 803E1F1C 003DEE5C  38 80 FF FF */	li r4, -1
/* 803E1F20 003DEE60  4B FF FF 65 */	bl __dt__Q33ebi2FS4TMgrFv
/* 803E1F24 003DEE64  7F C3 F3 78 */	mr r3, r30
/* 803E1F28 003DEE68  38 80 00 00 */	li r4, 0
/* 803E1F2C 003DEE6C  4B C3 B1 09 */	bl __dt__11JKRDisposerFv
/* 803E1F30 003DEE70  7F E0 07 35 */	extsh. r0, r31
/* 803E1F34 003DEE74  40 81 00 0C */	ble .L_803E1F40
/* 803E1F38 003DEE78  7F C3 F3 78 */	mr r3, r30
/* 803E1F3C 003DEE7C  4B C4 21 79 */	bl __dl__FPv
.L_803E1F40:
/* 803E1F40 003DEE80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E1F44 003DEE84  7F C3 F3 78 */	mr r3, r30
/* 803E1F48 003DEE88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E1F4C 003DEE8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E1F50 003DEE90  7C 08 03 A6 */	mtlr r0
/* 803E1F54 003DEE94  38 21 00 10 */	addi r1, r1, 0x10
/* 803E1F58 003DEE98  4E 80 00 20 */	blr 

.global createInstance__Q33ebi10FileSelect4TMgrFv
createInstance__Q33ebi10FileSelect4TMgrFv:
/* 803E1F5C 003DEE9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E1F60 003DEEA0  7C 08 02 A6 */	mflr r0
/* 803E1F64 003DEEA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E1F68 003DEEA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E1F6C 003DEEAC  80 0D 9A 60 */	lwz r0, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
/* 803E1F70 003DEEB0  28 00 00 00 */	cmplwi r0, 0
/* 803E1F74 003DEEB4  40 82 00 AC */	bne .L_803E2020
/* 803E1F78 003DEEB8  38 60 10 0C */	li r3, 0x100c
/* 803E1F7C 003DEEBC  4B C4 1F 29 */	bl __nw__FUl
/* 803E1F80 003DEEC0  7C 7F 1B 79 */	or. r31, r3, r3
/* 803E1F84 003DEEC4  41 82 00 98 */	beq .L_803E201C
/* 803E1F88 003DEEC8  4B C3 B0 45 */	bl __ct__11JKRDisposerFv
/* 803E1F8C 003DEECC  3C 80 80 4F */	lis r4, __vt__Q33ebi10FileSelect4TMgr@ha
/* 803E1F90 003DEED0  38 7F 00 18 */	addi r3, r31, 0x18
/* 803E1F94 003DEED4  38 04 96 B4 */	addi r0, r4, __vt__Q33ebi10FileSelect4TMgr@l
/* 803E1F98 003DEED8  90 1F 00 00 */	stw r0, 0(r31)
/* 803E1F9C 003DEEDC  4B FF DF F1 */	bl __ct__Q33ebi2FS4TMgrFv
/* 803E1FA0 003DEEE0  38 7F 0C 78 */	addi r3, r31, 0xc78
/* 803E1FA4 003DEEE4  4B FF 06 AD */	bl __ct__Q33ebi9CardError4TMgrFv
/* 803E1FA8 003DEEE8  38 00 00 00 */	li r0, 0
/* 803E1FAC 003DEEEC  38 7F 0F 48 */	addi r3, r31, 0xf48
/* 803E1FB0 003DEEF0  90 1F 0F 40 */	stw r0, 0xf40(r31)
/* 803E1FB4 003DEEF4  90 1F 0F 44 */	stw r0, 0xf44(r31)
/* 803E1FB8 003DEEF8  48 06 09 31 */	bl __ct__Q34Game10MemoryCard14PlayerFileInfoFv
/* 803E1FBC 003DEEFC  3C 80 80 4F */	lis r4, "__vt__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>"@ha
/* 803E1FC0 003DEF00  3C 60 80 4F */	lis r3, __vt__Q33ebi10FileSelect15FSMStateMachine@ha
/* 803E1FC4 003DEF04  38 04 96 C0 */	addi r0, r4, "__vt__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>"@l
/* 803E1FC8 003DEF08  38 A0 FF FF */	li r5, -1
/* 803E1FCC 003DEF0C  90 1F 0F EC */	stw r0, 0xfec(r31)
/* 803E1FD0 003DEF10  38 03 98 AC */	addi r0, r3, __vt__Q33ebi10FileSelect15FSMStateMachine@l
/* 803E1FD4 003DEF14  38 7F 0F EC */	addi r3, r31, 0xfec
/* 803E1FD8 003DEF18  7F E4 FB 78 */	mr r4, r31
/* 803E1FDC 003DEF1C  90 BF 10 04 */	stw r5, 0x1004(r31)
/* 803E1FE0 003DEF20  90 1F 0F EC */	stw r0, 0xfec(r31)
/* 803E1FE4 003DEF24  81 9F 0F EC */	lwz r12, 0xfec(r31)
/* 803E1FE8 003DEF28  81 8C 00 08 */	lwz r12, 8(r12)
/* 803E1FEC 003DEF2C  7D 89 03 A6 */	mtctr r12
/* 803E1FF0 003DEF30  4E 80 04 21 */	bctrl 
/* 803E1FF4 003DEF34  38 7F 0F EC */	addi r3, r31, 0xfec
/* 803E1FF8 003DEF38  7F E4 FB 78 */	mr r4, r31
/* 803E1FFC 003DEF3C  81 9F 0F EC */	lwz r12, 0xfec(r31)
/* 803E2000 003DEF40  38 A0 00 00 */	li r5, 0
/* 803E2004 003DEF44  38 C0 00 00 */	li r6, 0
/* 803E2008 003DEF48  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E200C 003DEF4C  7D 89 03 A6 */	mtctr r12
/* 803E2010 003DEF50  4E 80 04 21 */	bctrl 
/* 803E2014 003DEF54  38 00 00 00 */	li r0, 0
/* 803E2018 003DEF58  98 1F 0F E9 */	stb r0, 0xfe9(r31)
.L_803E201C:
/* 803E201C 003DEF5C  93 ED 9A 60 */	stw r31, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
.L_803E2020:
/* 803E2020 003DEF60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2024 003DEF64  80 6D 9A 60 */	lwz r3, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
/* 803E2028 003DEF68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E202C 003DEF6C  7C 08 03 A6 */	mtlr r0
/* 803E2030 003DEF70  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2034 003DEF74  4E 80 00 20 */	blr 

.global onDvdErrorOccured__Q33ebi10FileSelect4TMgrFv
onDvdErrorOccured__Q33ebi10FileSelect4TMgrFv:
/* 803E2038 003DEF78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E203C 003DEF7C  7C 08 02 A6 */	mflr r0
/* 803E2040 003DEF80  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2044 003DEF84  80 6D 9A 60 */	lwz r3, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
/* 803E2048 003DEF88  28 03 00 00 */	cmplwi r3, 0
/* 803E204C 003DEF8C  41 82 00 34 */	beq .L_803E2080
/* 803E2050 003DEF90  48 00 01 FD */	bl isFinish__Q33ebi10FileSelect4TMgrFv
/* 803E2054 003DEF94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E2058 003DEF98  40 82 00 1C */	bne .L_803E2074
/* 803E205C 003DEF9C  80 6D 9A 60 */	lwz r3, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
/* 803E2060 003DEFA0  38 00 00 01 */	li r0, 1
/* 803E2064 003DEFA4  98 03 0F E9 */	stb r0, 0xfe9(r3)
/* 803E2068 003DEFA8  80 6D 9A 60 */	lwz r3, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
/* 803E206C 003DEFAC  48 00 00 B5 */	bl forceQuit__Q33ebi10FileSelect4TMgrFv
/* 803E2070 003DEFB0  48 00 00 10 */	b .L_803E2080
.L_803E2074:
/* 803E2074 003DEFB4  80 6D 9A 60 */	lwz r3, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
/* 803E2078 003DEFB8  38 00 00 00 */	li r0, 0
/* 803E207C 003DEFBC  98 03 0F E9 */	stb r0, 0xfe9(r3)
.L_803E2080:
/* 803E2080 003DEFC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2084 003DEFC4  7C 08 03 A6 */	mtlr r0
/* 803E2088 003DEFC8  38 21 00 10 */	addi r1, r1, 0x10
/* 803E208C 003DEFCC  4E 80 00 20 */	blr 

.global onDvdErrorRecovered__Q33ebi10FileSelect4TMgrFv
onDvdErrorRecovered__Q33ebi10FileSelect4TMgrFv:
/* 803E2090 003DEFD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2094 003DEFD4  7C 08 02 A6 */	mflr r0
/* 803E2098 003DEFD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E209C 003DEFDC  80 6D 9A 60 */	lwz r3, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
/* 803E20A0 003DEFE0  28 03 00 00 */	cmplwi r3, 0
/* 803E20A4 003DEFE4  41 82 00 20 */	beq .L_803E20C4
/* 803E20A8 003DEFE8  88 03 0F E9 */	lbz r0, 0xfe9(r3)
/* 803E20AC 003DEFEC  28 00 00 00 */	cmplwi r0, 0
/* 803E20B0 003DEFF0  41 82 00 14 */	beq .L_803E20C4
/* 803E20B4 003DEFF4  48 00 00 21 */	bl start__Q33ebi10FileSelect4TMgrFv
/* 803E20B8 003DEFF8  80 6D 9A 60 */	lwz r3, msInstance__Q33ebi10FileSelect4TMgr@sda21(r13)
/* 803E20BC 003DEFFC  38 00 00 00 */	li r0, 0
/* 803E20C0 003DF000  98 03 0F E9 */	stb r0, 0xfe9(r3)
.L_803E20C4:
/* 803E20C4 003DF004  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E20C8 003DF008  7C 08 03 A6 */	mtlr r0
/* 803E20CC 003DF00C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E20D0 003DF010  4E 80 00 20 */	blr 

.global start__Q33ebi10FileSelect4TMgrFv
start__Q33ebi10FileSelect4TMgrFv:
/* 803E20D4 003DF014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E20D8 003DF018  7C 08 02 A6 */	mflr r0
/* 803E20DC 003DF01C  7C 64 1B 78 */	mr r4, r3
/* 803E20E0 003DF020  38 A0 00 01 */	li r5, 1
/* 803E20E4 003DF024  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E20E8 003DF028  38 00 00 01 */	li r0, 1
/* 803E20EC 003DF02C  38 C0 00 00 */	li r6, 0
/* 803E20F0 003DF030  98 03 0F E8 */	stb r0, 0xfe8(r3)
/* 803E20F4 003DF034  38 00 00 00 */	li r0, 0
/* 803E20F8 003DF038  38 64 0F EC */	addi r3, r4, 0xfec
/* 803E20FC 003DF03C  90 04 0F E4 */	stw r0, 0xfe4(r4)
/* 803E2100 003DF040  81 84 0F EC */	lwz r12, 0xfec(r4)
/* 803E2104 003DF044  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E2108 003DF048  7D 89 03 A6 */	mtctr r12
/* 803E210C 003DF04C  4E 80 04 21 */	bctrl 
/* 803E2110 003DF050  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2114 003DF054  7C 08 03 A6 */	mtlr r0
/* 803E2118 003DF058  38 21 00 10 */	addi r1, r1, 0x10
/* 803E211C 003DF05C  4E 80 00 20 */	blr 

.global forceQuit__Q33ebi10FileSelect4TMgrFv
forceQuit__Q33ebi10FileSelect4TMgrFv:
/* 803E2120 003DF060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2124 003DF064  7C 08 02 A6 */	mflr r0
/* 803E2128 003DF068  38 A0 00 00 */	li r5, 0
/* 803E212C 003DF06C  38 C0 00 00 */	li r6, 0
/* 803E2130 003DF070  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2134 003DF074  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E2138 003DF078  7C 7F 1B 78 */	mr r31, r3
/* 803E213C 003DF07C  38 7F 0F EC */	addi r3, r31, 0xfec
/* 803E2140 003DF080  81 9F 0F EC */	lwz r12, 0xfec(r31)
/* 803E2144 003DF084  7F E4 FB 78 */	mr r4, r31
/* 803E2148 003DF088  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E214C 003DF08C  7D 89 03 A6 */	mtctr r12
/* 803E2150 003DF090  4E 80 04 21 */	bctrl 
/* 803E2154 003DF094  38 7F 0C 78 */	addi r3, r31, 0xc78
/* 803E2158 003DF098  4B FF 12 61 */	bl forceQuitSeq__Q33ebi9CardError4TMgrFv
/* 803E215C 003DF09C  38 7F 00 18 */	addi r3, r31, 0x18
/* 803E2160 003DF0A0  4B FF E1 39 */	bl forceQuitSeq__Q33ebi2FS4TMgrFv
/* 803E2164 003DF0A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2168 003DF0A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E216C 003DF0AC  7C 08 03 A6 */	mtlr r0
/* 803E2170 003DF0B0  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2174 003DF0B4  4E 80 00 20 */	blr 

.global update__Q33ebi10FileSelect4TMgrFv
update__Q33ebi10FileSelect4TMgrFv:
/* 803E2178 003DF0B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E217C 003DF0BC  7C 08 02 A6 */	mflr r0
/* 803E2180 003DF0C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2184 003DF0C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E2188 003DF0C8  7C 7F 1B 78 */	mr r31, r3
/* 803E218C 003DF0CC  38 7F 0F EC */	addi r3, r31, 0xfec
/* 803E2190 003DF0D0  81 9F 0F EC */	lwz r12, 0xfec(r31)
/* 803E2194 003DF0D4  7F E4 FB 78 */	mr r4, r31
/* 803E2198 003DF0D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803E219C 003DF0DC  7D 89 03 A6 */	mtctr r12
/* 803E21A0 003DF0E0  4E 80 04 21 */	bctrl 
/* 803E21A4 003DF0E4  7F E3 FB 78 */	mr r3, r31
/* 803E21A8 003DF0E8  48 00 01 4D */	bl getStateID__Q33ebi10FileSelect4TMgrFv
/* 803E21AC 003DF0EC  2C 03 00 00 */	cmpwi r3, 0
/* 803E21B0 003DF0F0  41 82 00 40 */	beq .L_803E21F0
/* 803E21B4 003DF0F4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E21B8 003DF0F8  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803E21BC 003DF0FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E21C0 003DF100  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E21C4 003DF104  7D 89 03 A6 */	mtctr r12
/* 803E21C8 003DF108  4E 80 04 21 */	bctrl 
/* 803E21CC 003DF10C  38 7F 0C 78 */	addi r3, r31, 0xc78
/* 803E21D0 003DF110  4B FF 13 5D */	bl update__Q33ebi9CardError4TMgrFv
/* 803E21D4 003DF114  38 7F 00 18 */	addi r3, r31, 0x18
/* 803E21D8 003DF118  4B FF DF 9D */	bl update__Q33ebi2FS4TMgrFv
/* 803E21DC 003DF11C  80 7F 0F 40 */	lwz r3, 0xf40(r31)
/* 803E21E0 003DF120  28 03 00 00 */	cmplwi r3, 0
/* 803E21E4 003DF124  41 82 00 0C */	beq .L_803E21F0
/* 803E21E8 003DF128  38 03 FF FF */	addi r0, r3, -1
/* 803E21EC 003DF12C  90 1F 0F 40 */	stw r0, 0xf40(r31)
.L_803E21F0:
/* 803E21F0 003DF130  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E21F4 003DF134  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E21F8 003DF138  7C 08 03 A6 */	mtlr r0
/* 803E21FC 003DF13C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2200 003DF140  4E 80 00 20 */	blr 

.global draw__Q33ebi10FileSelect4TMgrFv
draw__Q33ebi10FileSelect4TMgrFv:
/* 803E2204 003DF144  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2208 003DF148  7C 08 02 A6 */	mflr r0
/* 803E220C 003DF14C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2210 003DF150  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E2214 003DF154  7C 7F 1B 78 */	mr r31, r3
/* 803E2218 003DF158  48 00 00 DD */	bl getStateID__Q33ebi10FileSelect4TMgrFv
/* 803E221C 003DF15C  2C 03 00 00 */	cmpwi r3, 0
/* 803E2220 003DF160  41 82 00 14 */	beq .L_803E2234
/* 803E2224 003DF164  38 7F 00 18 */	addi r3, r31, 0x18
/* 803E2228 003DF168  4B FF DF E5 */	bl draw__Q33ebi2FS4TMgrFv
/* 803E222C 003DF16C  38 7F 0C 78 */	addi r3, r31, 0xc78
/* 803E2230 003DF170  4B FF 13 69 */	bl draw__Q33ebi9CardError4TMgrFv
.L_803E2234:
/* 803E2234 003DF174  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2238 003DF178  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E223C 003DF17C  7C 08 03 A6 */	mtlr r0
/* 803E2240 003DF180  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2244 003DF184  4E 80 00 20 */	blr 

.global showInfo__Q33ebi10FileSelect4TMgrFv
showInfo__Q33ebi10FileSelect4TMgrFv:
/* 803E2248 003DF188  4E 80 00 20 */	blr 

.global isFinish__Q33ebi10FileSelect4TMgrFv
isFinish__Q33ebi10FileSelect4TMgrFv:
/* 803E224C 003DF18C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2250 003DF190  7C 08 02 A6 */	mflr r0
/* 803E2254 003DF194  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2258 003DF198  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E225C 003DF19C  7C 7F 1B 78 */	mr r31, r3
/* 803E2260 003DF1A0  48 00 00 95 */	bl getStateID__Q33ebi10FileSelect4TMgrFv
/* 803E2264 003DF1A4  2C 03 00 00 */	cmpwi r3, 0
/* 803E2268 003DF1A8  40 82 00 18 */	bne .L_803E2280
/* 803E226C 003DF1AC  88 1F 0F E9 */	lbz r0, 0xfe9(r31)
/* 803E2270 003DF1B0  28 00 00 00 */	cmplwi r0, 0
/* 803E2274 003DF1B4  40 82 00 0C */	bne .L_803E2280
/* 803E2278 003DF1B8  38 60 00 01 */	li r3, 1
/* 803E227C 003DF1BC  48 00 00 08 */	b .L_803E2284
.L_803E2280:
/* 803E2280 003DF1C0  38 60 00 00 */	li r3, 0
.L_803E2284:
/* 803E2284 003DF1C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2288 003DF1C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E228C 003DF1CC  7C 08 03 A6 */	mtlr r0
/* 803E2290 003DF1D0  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2294 003DF1D4  4E 80 00 20 */	blr 

.global goEnd___Q33ebi10FileSelect4TMgrFQ43ebi10FileSelect4TMgr7enumEnd
goEnd___Q33ebi10FileSelect4TMgrFQ43ebi10FileSelect4TMgr7enumEnd:
/* 803E2298 003DF1D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E229C 003DF1DC  7C 08 02 A6 */	mflr r0
/* 803E22A0 003DF1E0  38 A0 00 00 */	li r5, 0
/* 803E22A4 003DF1E4  38 C0 00 00 */	li r6, 0
/* 803E22A8 003DF1E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E22AC 003DF1EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E22B0 003DF1F0  7C 7F 1B 78 */	mr r31, r3
/* 803E22B4 003DF1F4  90 83 0F E4 */	stw r4, 0xfe4(r3)
/* 803E22B8 003DF1F8  38 7F 0F EC */	addi r3, r31, 0xfec
/* 803E22BC 003DF1FC  7F E4 FB 78 */	mr r4, r31
/* 803E22C0 003DF200  81 9F 0F EC */	lwz r12, 0xfec(r31)
/* 803E22C4 003DF204  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E22C8 003DF208  7D 89 03 A6 */	mtctr r12
/* 803E22CC 003DF20C  4E 80 04 21 */	bctrl 
/* 803E22D0 003DF210  38 7F 00 18 */	addi r3, r31, 0x18
/* 803E22D4 003DF214  4B FF DF C5 */	bl forceQuitSeq__Q33ebi2FS4TMgrFv
/* 803E22D8 003DF218  38 7F 0C 78 */	addi r3, r31, 0xc78
/* 803E22DC 003DF21C  4B FF 10 DD */	bl forceQuitSeq__Q33ebi9CardError4TMgrFv
/* 803E22E0 003DF220  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E22E4 003DF224  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E22E8 003DF228  7C 08 03 A6 */	mtlr r0
/* 803E22EC 003DF22C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E22F0 003DF230  4E 80 00 20 */	blr 

.global getStateID__Q33ebi10FileSelect4TMgrFv
getStateID__Q33ebi10FileSelect4TMgrFv:
/* 803E22F4 003DF234  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E22F8 003DF238  7C 08 02 A6 */	mflr r0
/* 803E22FC 003DF23C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2300 003DF240  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E2304 003DF244  7C 7F 1B 78 */	mr r31, r3
/* 803E2308 003DF248  80 03 10 08 */	lwz r0, 0x1008(r3)
/* 803E230C 003DF24C  28 00 00 00 */	cmplwi r0, 0
/* 803E2310 003DF250  40 82 00 20 */	bne .L_803E2330
/* 803E2314 003DF254  3C 60 80 49 */	lis r3, lbl_8049706C@ha
/* 803E2318 003DF258  3C A0 80 49 */	lis r5, lbl_80497084@ha
/* 803E231C 003DF25C  38 63 70 6C */	addi r3, r3, lbl_8049706C@l
/* 803E2320 003DF260  38 80 02 16 */	li r4, 0x216
/* 803E2324 003DF264  38 A5 70 84 */	addi r5, r5, lbl_80497084@l
/* 803E2328 003DF268  4C C6 31 82 */	crclr 6
/* 803E232C 003DF26C  4B C4 83 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E2330:
/* 803E2330 003DF270  80 7F 10 08 */	lwz r3, 0x1008(r31)
/* 803E2334 003DF274  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2338 003DF278  80 63 00 04 */	lwz r3, 4(r3)
/* 803E233C 003DF27C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E2340 003DF280  7C 08 03 A6 */	mtlr r0
/* 803E2344 003DF284  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2348 003DF288  4E 80 00 20 */	blr 

.global "init__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgrPQ24Game8StateArg"
"init__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgrPQ24Game8StateArg":
/* 803E234C 003DF28C  4E 80 00 20 */	blr 

.global "exec__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
"exec__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr":
/* 803E2350 003DF290  4E 80 00 20 */	blr 

.global "cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
"cleanup__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr":
/* 803E2354 003DF294  4E 80 00 20 */	blr 

.global "resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
"resume__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr":
/* 803E2358 003DF298  4E 80 00 20 */	blr 

.global "restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
"restart__Q24Game33FSMState<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr":
/* 803E235C 003DF29C  4E 80 00 20 */	blr 

.global "init__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
"init__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr":
/* 803E2360 003DF2A0  4E 80 00 20 */	blr 

.global "exec__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr"
"exec__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgr":
/* 803E2364 003DF2A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E2368 003DF2A8  7C 08 02 A6 */	mflr r0
/* 803E236C 003DF2AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E2370 003DF2B0  80 64 10 08 */	lwz r3, 0x1008(r4)
/* 803E2374 003DF2B4  28 03 00 00 */	cmplwi r3, 0
/* 803E2378 003DF2B8  41 82 00 14 */	beq .L_803E238C
/* 803E237C 003DF2BC  81 83 00 00 */	lwz r12, 0(r3)
/* 803E2380 003DF2C0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E2384 003DF2C4  7D 89 03 A6 */	mtctr r12
/* 803E2388 003DF2C8  4E 80 04 21 */	bctrl 
.L_803E238C:
/* 803E238C 003DF2CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E2390 003DF2D0  7C 08 03 A6 */	mtlr r0
/* 803E2394 003DF2D4  38 21 00 10 */	addi r1, r1, 0x10
/* 803E2398 003DF2D8  4E 80 00 20 */	blr 

.global "create__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>Fi"
"create__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>Fi":
/* 803E239C 003DF2DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E23A0 003DF2E0  7C 08 02 A6 */	mflr r0
/* 803E23A4 003DF2E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E23A8 003DF2E8  38 00 00 00 */	li r0, 0
/* 803E23AC 003DF2EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E23B0 003DF2F0  7C 7F 1B 78 */	mr r31, r3
/* 803E23B4 003DF2F4  90 83 00 0C */	stw r4, 0xc(r3)
/* 803E23B8 003DF2F8  90 03 00 08 */	stw r0, 8(r3)
/* 803E23BC 003DF2FC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803E23C0 003DF300  54 03 10 3A */	slwi r3, r0, 2
/* 803E23C4 003DF304  4B C4 1B E9 */	bl __nwa__FUl
/* 803E23C8 003DF308  90 7F 00 04 */	stw r3, 4(r31)
/* 803E23CC 003DF30C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803E23D0 003DF310  54 03 10 3A */	slwi r3, r0, 2
/* 803E23D4 003DF314  4B C4 1B D9 */	bl __nwa__FUl
/* 803E23D8 003DF318  90 7F 00 10 */	stw r3, 0x10(r31)
/* 803E23DC 003DF31C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803E23E0 003DF320  54 03 10 3A */	slwi r3, r0, 2
/* 803E23E4 003DF324  4B C4 1B C9 */	bl __nwa__FUl
/* 803E23E8 003DF328  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803E23EC 003DF32C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E23F0 003DF330  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E23F4 003DF334  7C 08 03 A6 */	mtlr r0
/* 803E23F8 003DF338  38 21 00 10 */	addi r1, r1, 0x10
/* 803E23FC 003DF33C  4E 80 00 20 */	blr 

.global "transit__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg"
"transit__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg":
/* 803E2400 003DF340  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E2404 003DF344  7C 08 02 A6 */	mflr r0
/* 803E2408 003DF348  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E240C 003DF34C  54 A0 10 3A */	slwi r0, r5, 2
/* 803E2410 003DF350  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803E2414 003DF354  7C 7B 1B 78 */	mr r27, r3
/* 803E2418 003DF358  7C 9C 23 78 */	mr r28, r4
/* 803E241C 003DF35C  7C DD 33 78 */	mr r29, r6
/* 803E2420 003DF360  83 C4 10 08 */	lwz r30, 0x1008(r4)
/* 803E2424 003DF364  80 63 00 14 */	lwz r3, 0x14(r3)
/* 803E2428 003DF368  28 1E 00 00 */	cmplwi r30, 0
/* 803E242C 003DF36C  7F E3 00 2E */	lwzx r31, r3, r0
/* 803E2430 003DF370  41 82 00 20 */	beq .L_803E2450
/* 803E2434 003DF374  7F C3 F3 78 */	mr r3, r30
/* 803E2438 003DF378  81 9E 00 00 */	lwz r12, 0(r30)
/* 803E243C 003DF37C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803E2440 003DF380  7D 89 03 A6 */	mtctr r12
/* 803E2444 003DF384  4E 80 04 21 */	bctrl 
/* 803E2448 003DF388  80 1E 00 04 */	lwz r0, 4(r30)
/* 803E244C 003DF38C  90 1B 00 18 */	stw r0, 0x18(r27)
.L_803E2450:
/* 803E2450 003DF390  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 803E2454 003DF394  7C 1F 00 00 */	cmpw r31, r0
/* 803E2458 003DF398  41 80 00 08 */	blt .L_803E2460
.L_803E245C:
/* 803E245C 003DF39C  48 00 00 00 */	b .L_803E245C
.L_803E2460:
/* 803E2460 003DF3A0  80 7B 00 04 */	lwz r3, 4(r27)
/* 803E2464 003DF3A4  57 E0 10 3A */	slwi r0, r31, 2
/* 803E2468 003DF3A8  7F 84 E3 78 */	mr r4, r28
/* 803E246C 003DF3AC  7F A5 EB 78 */	mr r5, r29
/* 803E2470 003DF3B0  7C 63 00 2E */	lwzx r3, r3, r0
/* 803E2474 003DF3B4  90 7C 10 08 */	stw r3, 0x1008(r28)
/* 803E2478 003DF3B8  81 83 00 00 */	lwz r12, 0(r3)
/* 803E247C 003DF3BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803E2480 003DF3C0  7D 89 03 A6 */	mtctr r12
/* 803E2484 003DF3C4  4E 80 04 21 */	bctrl 
/* 803E2488 003DF3C8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803E248C 003DF3CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E2490 003DF3D0  7C 08 03 A6 */	mtlr r0
/* 803E2494 003DF3D4  38 21 00 20 */	addi r1, r1, 0x20
/* 803E2498 003DF3D8  4E 80 00 20 */	blr 

.global "registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>"
"registerState__Q24Game37StateMachine<Q33ebi10FileSelect4TMgr>FPQ24Game33FSMState<Q33ebi10FileSelect4TMgr>":
/* 803E249C 003DF3DC  80 C3 00 08 */	lwz r6, 8(r3)
/* 803E24A0 003DF3E0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803E24A4 003DF3E4  7C 06 00 00 */	cmpw r6, r0
/* 803E24A8 003DF3E8  4C 80 00 20 */	bgelr 
/* 803E24AC 003DF3EC  80 A3 00 04 */	lwz r5, 4(r3)
/* 803E24B0 003DF3F0  54 C0 10 3A */	slwi r0, r6, 2
/* 803E24B4 003DF3F4  7C 85 01 2E */	stwx r4, r5, r0
/* 803E24B8 003DF3F8  80 A4 00 04 */	lwz r5, 4(r4)
/* 803E24BC 003DF3FC  2C 05 00 00 */	cmpwi r5, 0
/* 803E24C0 003DF400  41 80 00 10 */	blt .L_803E24D0
/* 803E24C4 003DF404  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803E24C8 003DF408  7C 05 00 00 */	cmpw r5, r0
/* 803E24CC 003DF40C  41 80 00 0C */	blt .L_803E24D8
.L_803E24D0:
/* 803E24D0 003DF410  38 00 00 00 */	li r0, 0
/* 803E24D4 003DF414  48 00 00 08 */	b .L_803E24DC
.L_803E24D8:
/* 803E24D8 003DF418  38 00 00 01 */	li r0, 1
.L_803E24DC:
/* 803E24DC 003DF41C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803E24E0 003DF420  4D 82 00 20 */	beqlr 
/* 803E24E4 003DF424  90 64 00 08 */	stw r3, 8(r4)
/* 803E24E8 003DF428  80 03 00 08 */	lwz r0, 8(r3)
/* 803E24EC 003DF42C  80 C4 00 04 */	lwz r6, 4(r4)
/* 803E24F0 003DF430  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 803E24F4 003DF434  54 00 10 3A */	slwi r0, r0, 2
/* 803E24F8 003DF438  7C C5 01 2E */	stwx r6, r5, r0
/* 803E24FC 003DF43C  80 04 00 04 */	lwz r0, 4(r4)
/* 803E2500 003DF440  80 A3 00 08 */	lwz r5, 8(r3)
/* 803E2504 003DF444  80 83 00 14 */	lwz r4, 0x14(r3)
/* 803E2508 003DF448  54 00 10 3A */	slwi r0, r0, 2
/* 803E250C 003DF44C  7C A4 01 2E */	stwx r5, r4, r0
/* 803E2510 003DF450  80 83 00 08 */	lwz r4, 8(r3)
/* 803E2514 003DF454  38 04 00 01 */	addi r0, r4, 1
/* 803E2518 003DF458  90 03 00 08 */	stw r0, 8(r3)
/* 803E251C 003DF45C  4E 80 00 20 */	blr 
