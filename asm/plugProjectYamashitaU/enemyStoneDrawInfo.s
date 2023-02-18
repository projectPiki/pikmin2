.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047BF00, local
	.asciz "PSGame.h"
.endobj lbl_8047BF00
.balign 4
.obj lbl_8047BF0C, local
	.asciz "P2Assert"
.endobj lbl_8047BF0C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj "__vt__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "start__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
	.4byte "exec__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "transit__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
.endobj "__vt__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>"
.obj __vt__Q34Game10EnemyStone12FSMStateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10EnemyStone12FSMStateDeadFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg
	.4byte "exec__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "cleanup__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "resume__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "restart__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "transit__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
	.4byte makeMatrix__Q34Game10EnemyStone12FSMStateDeadFPQ34Game10EnemyStone8DrawInfoP7Matrixf
.endobj __vt__Q34Game10EnemyStone12FSMStateDead
.obj __vt__Q34Game10EnemyStone17FSMStateDisappear, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg
	.4byte exec__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfo
	.4byte cleanup__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfo
	.4byte "resume__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "restart__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "transit__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
	.4byte makeMatrix__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfoP7Matrixf
.endobj __vt__Q34Game10EnemyStone17FSMStateDisappear
.obj __vt__Q34Game10EnemyStone17FSMStateBreakable, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10EnemyStone17FSMStateBreakableFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg
	.4byte exec__Q34Game10EnemyStone17FSMStateBreakableFPQ34Game10EnemyStone8DrawInfo
	.4byte "cleanup__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "resume__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "restart__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "transit__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
	.4byte makeMatrix__Q34Game10EnemyStone17FSMStateBreakableFPQ34Game10EnemyStone8DrawInfoP7Matrixf
.endobj __vt__Q34Game10EnemyStone17FSMStateBreakable
.obj __vt__Q34Game10EnemyStone13FSMStateShake, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg
	.4byte exec__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfo
	.4byte cleanup__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfo
	.4byte "resume__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "restart__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "transit__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
	.4byte makeMatrix__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfoP7Matrixf
.endobj __vt__Q34Game10EnemyStone13FSMStateShake
.obj __vt__Q34Game10EnemyStone11FSMStateFit, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg
	.4byte exec__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfo
	.4byte cleanup__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfo
	.4byte "resume__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "restart__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "transit__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
	.4byte makeMatrix__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfoP7Matrixf
.endobj __vt__Q34Game10EnemyStone11FSMStateFit
.obj __vt__Q34Game10EnemyStone21FSMStateExpansionFull, global
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg"
	.4byte "exec__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "cleanup__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "resume__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "restart__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "transit__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
	.4byte makeMatrix__Q34Game10EnemyStone21FSMStateExpansionFullFPQ34Game10EnemyStone8DrawInfoP7Matrixf
.endobj __vt__Q34Game10EnemyStone21FSMStateExpansionFull
.obj __vt__Q34Game10EnemyStone17FSMStateExpansion, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg
	.4byte exec__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfo
	.4byte cleanup__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfo
	.4byte "resume__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "restart__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "transit__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
	.4byte makeMatrix__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfoP7Matrixf
.endobj __vt__Q34Game10EnemyStone17FSMStateExpansion
.obj __vt__Q34Game10EnemyStone8FSMState, global
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg"
	.4byte "exec__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "cleanup__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "resume__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "restart__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "transit__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
	.4byte makeMatrix__Q34Game10EnemyStone8FSMStateFPQ34Game10EnemyStone8DrawInfoP7Matrixf
.endobj __vt__Q34Game10EnemyStone8FSMState
.obj "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg"
	.4byte "exec__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "cleanup__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "resume__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "restart__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "transit__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
.endobj "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"
.obj __vt__Q34Game10EnemyStone12StateMachine, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10EnemyStone12StateMachineFPQ34Game10EnemyStone8DrawInfo
	.4byte "start__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
	.4byte "exec__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"
	.4byte "transit__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"
	.4byte makeMatrix__Q34Game10EnemyStone12StateMachineFPQ34Game10EnemyStone8DrawInfoP7Matrixf
.endobj __vt__Q34Game10EnemyStone12StateMachine

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj sOwnerEnemy__Q34Game10EnemyStone8DrawInfo, global
	.skip 0x4
.endobj sOwnerEnemy__Q34Game10EnemyStone8DrawInfo

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80517FC0, local
	.float 10.0
.endobj lbl_80517FC0
.obj lbl_80517FC4, local
	.float 0.1
.endobj lbl_80517FC4
.obj lbl_80517FC8, local
	.float 0.0
.endobj lbl_80517FC8
.obj lbl_80517FCC, local
	.float 1.0
.endobj lbl_80517FCC
.obj lbl_80517FD0, local
	.float -325.9493
.endobj lbl_80517FD0
.obj lbl_80517FD4, local
	.float 325.9493
.endobj lbl_80517FD4
.obj lbl_80517FD8, local # pi/2
	.float 1.5707964
.endobj lbl_80517FD8
.obj lbl_80517FDC, local
	.float 0.033333335
.endobj lbl_80517FDC
.obj lbl_80517FE0, local
	.float 7.0
.endobj lbl_80517FE0
.obj lbl_80517FE4, local
	.float 0.07
.endobj lbl_80517FE4
.obj lbl_80517FE8, local
	.float 0.14
.endobj lbl_80517FE8
.obj lbl_80517FEC, local
	.float 0.35
.endobj lbl_80517FEC
.obj lbl_80517FF0, local
	.float 0.3
.endobj lbl_80517FF0
.obj lbl_80517FF4, local
	.float 100.0
.endobj lbl_80517FF4
.obj lbl_80517FF8, local # tau
	.float 6.2831855
.endobj lbl_80517FF8
.obj lbl_80517FFC, local # 10*tau
	.float 62.831856
.endobj lbl_80517FFC
.obj lbl_80518000, local
	.float 30.0
.endobj lbl_80518000
.obj lbl_80518004, local
	.float 1.5
.endobj lbl_80518004
.obj lbl_80518008, local
	.float 125.66371
.endobj lbl_80518008
.obj lbl_8051800C, local
	.float 2.5
.endobj lbl_8051800C
.obj lbl_80518010, local # pi
	.float 3.1415927
.endobj lbl_80518010
.obj lbl_80518014, local
	.float 0.15
.endobj lbl_80518014
.obj lbl_80518018, local
	.float 201.06194
.endobj lbl_80518018
.obj lbl_8051801C, local
	.float 4.0
.endobj lbl_8051801C
.obj lbl_80518020, local
	.float 0.0055555557
.endobj lbl_80518020
.obj lbl_80518024, local
	.float 15.2
.endobj lbl_80518024
.obj lbl_80518028, local
	.float 0.2
.endobj lbl_80518028
.balign 4
.obj lbl_8051802C, local
	.asciz ""
.endobj lbl_8051802C
.balign 4
.obj lbl_80518030, local
	.float 3.0
.endobj lbl_80518030

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game10EnemyStone12StateMachineFPQ34Game10EnemyStone8DrawInfo, global
/* 80128280 001251C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80128284 001251C4  7C 08 02 A6 */	mflr r0
/* 80128288 001251C8  38 80 00 09 */	li r4, 9
/* 8012828C 001251CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80128290 001251D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80128294 001251D4  7C 7F 1B 78 */	mr r31, r3
/* 80128298 001251D8  48 00 17 15 */	bl "create__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>Fi"
/* 8012829C 001251DC  38 60 00 10 */	li r3, 0x10
/* 801282A0 001251E0  4B EF BC 05 */	bl __nw__FUl
/* 801282A4 001251E4  7C 64 1B 79 */	or. r4, r3, r3
/* 801282A8 001251E8  41 82 00 28 */	beq .L_801282D0
/* 801282AC 001251EC  3C A0 80 4B */	lis r5, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@ha
/* 801282B0 001251F0  3C 60 80 4B */	lis r3, __vt__Q34Game10EnemyStone8FSMState@ha
/* 801282B4 001251F4  38 05 DD B8 */	addi r0, r5, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@l
/* 801282B8 001251F8  38 A0 00 00 */	li r5, 0
/* 801282BC 001251FC  90 04 00 00 */	stw r0, 0(r4)
/* 801282C0 00125200  38 03 DD 94 */	addi r0, r3, __vt__Q34Game10EnemyStone8FSMState@l
/* 801282C4 00125204  90 A4 00 04 */	stw r5, 4(r4)
/* 801282C8 00125208  90 A4 00 08 */	stw r5, 8(r4)
/* 801282CC 0012520C  90 04 00 00 */	stw r0, 0(r4)
.L_801282D0:
/* 801282D0 00125210  7F E3 FB 78 */	mr r3, r31
/* 801282D4 00125214  48 00 17 D9 */	bl "registerState__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"
/* 801282D8 00125218  38 60 00 14 */	li r3, 0x14
/* 801282DC 0012521C  4B EF BB C9 */	bl __nw__FUl
/* 801282E0 00125220  7C 64 1B 79 */	or. r4, r3, r3
/* 801282E4 00125224  41 82 00 3C */	beq .L_80128320
/* 801282E8 00125228  3C 60 80 4B */	lis r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@ha
/* 801282EC 0012522C  3C A0 80 4B */	lis r5, __vt__Q34Game10EnemyStone8FSMState@ha
/* 801282F0 00125230  38 03 DD B8 */	addi r0, r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@l
/* 801282F4 00125234  3C 60 80 4B */	lis r3, __vt__Q34Game10EnemyStone17FSMStateExpansion@ha
/* 801282F8 00125238  90 04 00 00 */	stw r0, 0(r4)
/* 801282FC 0012523C  38 00 00 01 */	li r0, 1
/* 80128300 00125240  38 C0 00 00 */	li r6, 0
/* 80128304 00125244  38 A5 DD 94 */	addi r5, r5, __vt__Q34Game10EnemyStone8FSMState@l
/* 80128308 00125248  90 04 00 04 */	stw r0, 4(r4)
/* 8012830C 0012524C  38 03 DD 70 */	addi r0, r3, __vt__Q34Game10EnemyStone17FSMStateExpansion@l
/* 80128310 00125250  90 C4 00 08 */	stw r6, 8(r4)
/* 80128314 00125254  90 A4 00 00 */	stw r5, 0(r4)
/* 80128318 00125258  90 04 00 00 */	stw r0, 0(r4)
/* 8012831C 0012525C  98 C4 00 10 */	stb r6, 0x10(r4)
.L_80128320:
/* 80128320 00125260  7F E3 FB 78 */	mr r3, r31
/* 80128324 00125264  48 00 17 89 */	bl "registerState__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"
/* 80128328 00125268  38 60 00 10 */	li r3, 0x10
/* 8012832C 0012526C  4B EF BB 79 */	bl __nw__FUl
/* 80128330 00125270  7C 64 1B 79 */	or. r4, r3, r3
/* 80128334 00125274  41 82 00 38 */	beq .L_8012836C
/* 80128338 00125278  3C 60 80 4B */	lis r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@ha
/* 8012833C 0012527C  3C A0 80 4B */	lis r5, __vt__Q34Game10EnemyStone8FSMState@ha
/* 80128340 00125280  38 03 DD B8 */	addi r0, r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@l
/* 80128344 00125284  3C 60 80 4B */	lis r3, __vt__Q34Game10EnemyStone21FSMStateExpansionFull@ha
/* 80128348 00125288  90 04 00 00 */	stw r0, 0(r4)
/* 8012834C 0012528C  38 00 00 02 */	li r0, 2
/* 80128350 00125290  38 C0 00 00 */	li r6, 0
/* 80128354 00125294  38 A5 DD 94 */	addi r5, r5, __vt__Q34Game10EnemyStone8FSMState@l
/* 80128358 00125298  90 04 00 04 */	stw r0, 4(r4)
/* 8012835C 0012529C  38 03 DD 4C */	addi r0, r3, __vt__Q34Game10EnemyStone21FSMStateExpansionFull@l
/* 80128360 001252A0  90 C4 00 08 */	stw r6, 8(r4)
/* 80128364 001252A4  90 A4 00 00 */	stw r5, 0(r4)
/* 80128368 001252A8  90 04 00 00 */	stw r0, 0(r4)
.L_8012836C:
/* 8012836C 001252AC  7F E3 FB 78 */	mr r3, r31
/* 80128370 001252B0  48 00 17 3D */	bl "registerState__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"
/* 80128374 001252B4  38 60 00 10 */	li r3, 0x10
/* 80128378 001252B8  4B EF BB 2D */	bl __nw__FUl
/* 8012837C 001252BC  7C 64 1B 79 */	or. r4, r3, r3
/* 80128380 001252C0  41 82 00 38 */	beq .L_801283B8
/* 80128384 001252C4  3C 60 80 4B */	lis r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@ha
/* 80128388 001252C8  3C A0 80 4B */	lis r5, __vt__Q34Game10EnemyStone8FSMState@ha
/* 8012838C 001252CC  38 03 DD B8 */	addi r0, r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@l
/* 80128390 001252D0  3C 60 80 4B */	lis r3, __vt__Q34Game10EnemyStone11FSMStateFit@ha
/* 80128394 001252D4  90 04 00 00 */	stw r0, 0(r4)
/* 80128398 001252D8  38 00 00 03 */	li r0, 3
/* 8012839C 001252DC  38 C0 00 00 */	li r6, 0
/* 801283A0 001252E0  38 A5 DD 94 */	addi r5, r5, __vt__Q34Game10EnemyStone8FSMState@l
/* 801283A4 001252E4  90 04 00 04 */	stw r0, 4(r4)
/* 801283A8 001252E8  38 03 DD 28 */	addi r0, r3, __vt__Q34Game10EnemyStone11FSMStateFit@l
/* 801283AC 001252EC  90 C4 00 08 */	stw r6, 8(r4)
/* 801283B0 001252F0  90 A4 00 00 */	stw r5, 0(r4)
/* 801283B4 001252F4  90 04 00 00 */	stw r0, 0(r4)
.L_801283B8:
/* 801283B8 001252F8  7F E3 FB 78 */	mr r3, r31
/* 801283BC 001252FC  48 00 16 F1 */	bl "registerState__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"
/* 801283C0 00125300  38 60 00 10 */	li r3, 0x10
/* 801283C4 00125304  4B EF BA E1 */	bl __nw__FUl
/* 801283C8 00125308  7C 64 1B 79 */	or. r4, r3, r3
/* 801283CC 0012530C  41 82 00 2C */	beq .L_801283F8
/* 801283D0 00125310  3C A0 80 4B */	lis r5, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@ha
/* 801283D4 00125314  3C 60 80 4B */	lis r3, __vt__Q34Game10EnemyStone8FSMState@ha
/* 801283D8 00125318  38 05 DD B8 */	addi r0, r5, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@l
/* 801283DC 0012531C  38 C0 00 04 */	li r6, 4
/* 801283E0 00125320  90 04 00 00 */	stw r0, 0(r4)
/* 801283E4 00125324  38 A0 00 00 */	li r5, 0
/* 801283E8 00125328  38 03 DD 94 */	addi r0, r3, __vt__Q34Game10EnemyStone8FSMState@l
/* 801283EC 0012532C  90 C4 00 04 */	stw r6, 4(r4)
/* 801283F0 00125330  90 A4 00 08 */	stw r5, 8(r4)
/* 801283F4 00125334  90 04 00 00 */	stw r0, 0(r4)
.L_801283F8:
/* 801283F8 00125338  7F E3 FB 78 */	mr r3, r31
/* 801283FC 0012533C  48 00 16 B1 */	bl "registerState__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"
/* 80128400 00125340  38 60 00 18 */	li r3, 0x18
/* 80128404 00125344  4B EF BA A1 */	bl __nw__FUl
/* 80128408 00125348  7C 64 1B 79 */	or. r4, r3, r3
/* 8012840C 0012534C  41 82 00 48 */	beq .L_80128454
/* 80128410 00125350  3C 60 80 4B */	lis r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@ha
/* 80128414 00125354  3C A0 80 4B */	lis r5, __vt__Q34Game10EnemyStone8FSMState@ha
/* 80128418 00125358  38 03 DD B8 */	addi r0, r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@l
/* 8012841C 0012535C  3C 60 80 4B */	lis r3, __vt__Q34Game10EnemyStone13FSMStateShake@ha
/* 80128420 00125360  90 04 00 00 */	stw r0, 0(r4)
/* 80128424 00125364  38 00 00 05 */	li r0, 5
/* 80128428 00125368  38 C0 00 00 */	li r6, 0
/* 8012842C 0012536C  38 A5 DD 94 */	addi r5, r5, __vt__Q34Game10EnemyStone8FSMState@l
/* 80128430 00125370  90 04 00 04 */	stw r0, 4(r4)
/* 80128434 00125374  38 63 DD 04 */	addi r3, r3, __vt__Q34Game10EnemyStone13FSMStateShake@l
/* 80128438 00125378  38 00 FF FF */	li r0, -1
/* 8012843C 0012537C  C0 02 9C 60 */	lfs f0, lbl_80517FC0@sda21(r2)
/* 80128440 00125380  90 C4 00 08 */	stw r6, 8(r4)
/* 80128444 00125384  90 A4 00 00 */	stw r5, 0(r4)
/* 80128448 00125388  90 64 00 00 */	stw r3, 0(r4)
/* 8012844C 0012538C  90 04 00 10 */	stw r0, 0x10(r4)
/* 80128450 00125390  D0 04 00 14 */	stfs f0, 0x14(r4)
.L_80128454:
/* 80128454 00125394  7F E3 FB 78 */	mr r3, r31
/* 80128458 00125398  48 00 16 55 */	bl "registerState__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"
/* 8012845C 0012539C  38 60 00 10 */	li r3, 0x10
/* 80128460 001253A0  4B EF BA 45 */	bl __nw__FUl
/* 80128464 001253A4  7C 64 1B 79 */	or. r4, r3, r3
/* 80128468 001253A8  41 82 00 38 */	beq .L_801284A0
/* 8012846C 001253AC  3C 60 80 4B */	lis r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@ha
/* 80128470 001253B0  3C A0 80 4B */	lis r5, __vt__Q34Game10EnemyStone8FSMState@ha
/* 80128474 001253B4  38 03 DD B8 */	addi r0, r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@l
/* 80128478 001253B8  3C 60 80 4B */	lis r3, __vt__Q34Game10EnemyStone17FSMStateBreakable@ha
/* 8012847C 001253BC  90 04 00 00 */	stw r0, 0(r4)
/* 80128480 001253C0  38 00 00 06 */	li r0, 6
/* 80128484 001253C4  38 C0 00 00 */	li r6, 0
/* 80128488 001253C8  38 A5 DD 94 */	addi r5, r5, __vt__Q34Game10EnemyStone8FSMState@l
/* 8012848C 001253CC  90 04 00 04 */	stw r0, 4(r4)
/* 80128490 001253D0  38 03 DC E0 */	addi r0, r3, __vt__Q34Game10EnemyStone17FSMStateBreakable@l
/* 80128494 001253D4  90 C4 00 08 */	stw r6, 8(r4)
/* 80128498 001253D8  90 A4 00 00 */	stw r5, 0(r4)
/* 8012849C 001253DC  90 04 00 00 */	stw r0, 0(r4)
.L_801284A0:
/* 801284A0 001253E0  7F E3 FB 78 */	mr r3, r31
/* 801284A4 001253E4  48 00 16 09 */	bl "registerState__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"
/* 801284A8 001253E8  38 60 00 10 */	li r3, 0x10
/* 801284AC 001253EC  4B EF B9 F9 */	bl __nw__FUl
/* 801284B0 001253F0  7C 64 1B 79 */	or. r4, r3, r3
/* 801284B4 001253F4  41 82 00 38 */	beq .L_801284EC
/* 801284B8 001253F8  3C 60 80 4B */	lis r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@ha
/* 801284BC 001253FC  3C A0 80 4B */	lis r5, __vt__Q34Game10EnemyStone8FSMState@ha
/* 801284C0 00125400  38 03 DD B8 */	addi r0, r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@l
/* 801284C4 00125404  3C 60 80 4B */	lis r3, __vt__Q34Game10EnemyStone17FSMStateDisappear@ha
/* 801284C8 00125408  90 04 00 00 */	stw r0, 0(r4)
/* 801284CC 0012540C  38 00 00 07 */	li r0, 7
/* 801284D0 00125410  38 C0 00 00 */	li r6, 0
/* 801284D4 00125414  38 A5 DD 94 */	addi r5, r5, __vt__Q34Game10EnemyStone8FSMState@l
/* 801284D8 00125418  90 04 00 04 */	stw r0, 4(r4)
/* 801284DC 0012541C  38 03 DC BC */	addi r0, r3, __vt__Q34Game10EnemyStone17FSMStateDisappear@l
/* 801284E0 00125420  90 C4 00 08 */	stw r6, 8(r4)
/* 801284E4 00125424  90 A4 00 00 */	stw r5, 0(r4)
/* 801284E8 00125428  90 04 00 00 */	stw r0, 0(r4)
.L_801284EC:
/* 801284EC 0012542C  7F E3 FB 78 */	mr r3, r31
/* 801284F0 00125430  48 00 15 BD */	bl "registerState__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"
/* 801284F4 00125434  38 60 00 10 */	li r3, 0x10
/* 801284F8 00125438  4B EF B9 AD */	bl __nw__FUl
/* 801284FC 0012543C  7C 64 1B 79 */	or. r4, r3, r3
/* 80128500 00125440  41 82 00 38 */	beq .L_80128538
/* 80128504 00125444  3C 60 80 4B */	lis r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@ha
/* 80128508 00125448  3C A0 80 4B */	lis r5, __vt__Q34Game10EnemyStone8FSMState@ha
/* 8012850C 0012544C  38 03 DD B8 */	addi r0, r3, "__vt__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"@l
/* 80128510 00125450  3C 60 80 4B */	lis r3, __vt__Q34Game10EnemyStone12FSMStateDead@ha
/* 80128514 00125454  90 04 00 00 */	stw r0, 0(r4)
/* 80128518 00125458  38 00 00 08 */	li r0, 8
/* 8012851C 0012545C  38 C0 00 00 */	li r6, 0
/* 80128520 00125460  38 A5 DD 94 */	addi r5, r5, __vt__Q34Game10EnemyStone8FSMState@l
/* 80128524 00125464  90 04 00 04 */	stw r0, 4(r4)
/* 80128528 00125468  38 03 DC 98 */	addi r0, r3, __vt__Q34Game10EnemyStone12FSMStateDead@l
/* 8012852C 0012546C  90 C4 00 08 */	stw r6, 8(r4)
/* 80128530 00125470  90 A4 00 00 */	stw r5, 0(r4)
/* 80128534 00125474  90 04 00 00 */	stw r0, 0(r4)
.L_80128538:
/* 80128538 00125478  7F E3 FB 78 */	mr r3, r31
/* 8012853C 0012547C  48 00 15 71 */	bl "registerState__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"
/* 80128540 00125480  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80128544 00125484  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80128548 00125488  7C 08 03 A6 */	mtlr r0
/* 8012854C 0012548C  38 21 00 10 */	addi r1, r1, 0x10
/* 80128550 00125490  4E 80 00 20 */	blr 
.endfn init__Q34Game10EnemyStone12StateMachineFPQ34Game10EnemyStone8DrawInfo

.fn makeMatrix__Q34Game10EnemyStone12StateMachineFPQ34Game10EnemyStone8DrawInfoP7Matrixf, global
/* 80128554 00125494  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80128558 00125498  7C 08 02 A6 */	mflr r0
/* 8012855C 0012549C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80128560 001254A0  80 64 00 34 */	lwz r3, 0x34(r4)
/* 80128564 001254A4  28 03 00 00 */	cmplwi r3, 0
/* 80128568 001254A8  41 82 00 14 */	beq .L_8012857C
/* 8012856C 001254AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80128570 001254B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80128574 001254B4  7D 89 03 A6 */	mtctr r12
/* 80128578 001254B8  4E 80 04 21 */	bctrl 
.L_8012857C:
/* 8012857C 001254BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80128580 001254C0  7C 08 03 A6 */	mtlr r0
/* 80128584 001254C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80128588 001254C8  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game10EnemyStone12StateMachineFPQ34Game10EnemyStone8DrawInfoP7Matrixf

.fn makeMatrix__Q34Game10EnemyStone8FSMStateFPQ34Game10EnemyStone8DrawInfoP7Matrixf, global
/* 8012858C 001254CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80128590 001254D0  7C 08 02 A6 */	mflr r0
/* 80128594 001254D4  7C A3 2B 78 */	mr r3, r5
/* 80128598 001254D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012859C 001254DC  4B FC 1D 05 */	bl PSMTXIdentity
/* 801285A0 001254E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801285A4 001254E4  7C 08 03 A6 */	mtlr r0
/* 801285A8 001254E8  38 21 00 10 */	addi r1, r1, 0x10
/* 801285AC 001254EC  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game10EnemyStone8FSMStateFPQ34Game10EnemyStone8DrawInfoP7Matrixf

.fn init__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg, global
/* 801285B0 001254F0  C0 02 9C 64 */	lfs f0, lbl_80517FC4@sda21(r2)
/* 801285B4 001254F4  38 00 00 00 */	li r0, 0
/* 801285B8 001254F8  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 801285BC 001254FC  98 03 00 10 */	stb r0, 0x10(r3)
/* 801285C0 00125500  4E 80 00 20 */	blr 
.endfn init__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg

.fn exec__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfo, global
/* 801285C4 00125504  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801285C8 00125508  7C 08 02 A6 */	mflr r0
/* 801285CC 0012550C  90 01 00 64 */	stw r0, 0x64(r1)
/* 801285D0 00125510  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801285D4 00125514  7C 9F 23 78 */	mr r31, r4
/* 801285D8 00125518  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801285DC 0012551C  7C 7E 1B 78 */	mr r30, r3
/* 801285E0 00125520  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 801285E4 00125524  C0 24 00 38 */	lfs f1, 0x38(r4)
/* 801285E8 00125528  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 801285EC 0012552C  EC 01 00 2A */	fadds f0, f1, f0
/* 801285F0 00125530  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 801285F4 00125534  88 03 00 10 */	lbz r0, 0x10(r3)
/* 801285F8 00125538  28 00 00 00 */	cmplwi r0, 0
/* 801285FC 0012553C  40 82 01 38 */	bne .L_80128734
/* 80128600 00125540  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 80128604 00125544  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 80128608 00125548  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8012860C 0012554C  40 81 01 28 */	ble .L_80128734
/* 80128610 00125550  38 00 00 01 */	li r0, 1
/* 80128614 00125554  7F E3 FB 78 */	mr r3, r31
/* 80128618 00125558  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8012861C 0012555C  38 81 00 30 */	addi r4, r1, 0x30
/* 80128620 00125560  38 A1 00 08 */	addi r5, r1, 8
/* 80128624 00125564  48 00 10 A9 */	bl "getPosAndScale__Q34Game10EnemyStone8DrawInfoFP10Vector3<f>Pf"
/* 80128628 00125568  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8012862C 0012556C  41 82 01 08 */	beq .L_80128734
/* 80128630 00125570  81 0D 92 30 */	lwz r8, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 80128634 00125574  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80128638 00125578  80 E1 00 30 */	lwz r7, 0x30(r1)
/* 8012863C 0012557C  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 80128640 00125580  80 C1 00 34 */	lwz r6, 0x34(r1)
/* 80128644 00125584  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 80128648 00125588  80 A1 00 38 */	lwz r5, 0x38(r1)
/* 8012864C 0012558C  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 80128650 00125590  C0 08 01 F8 */	lfs f0, 0x1f8(r8)
/* 80128654 00125594  C0 21 00 08 */	lfs f1, 8(r1)
/* 80128658 00125598  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8012865C 0012559C  EC 61 00 32 */	fmuls f3, f1, f0
/* 80128660 001255A0  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80128664 001255A4  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80128668 001255A8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8012866C 001255AC  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80128670 001255B0  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80128674 001255B4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80128678 001255B8  D0 61 00 08 */	stfs f3, 8(r1)
/* 8012867C 001255BC  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 80128680 001255C0  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 80128684 001255C4  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80128688 001255C8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8012868C 001255CC  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 80128690 001255D0  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 80128694 001255D4  80 03 00 04 */	lwz r0, 4(r3)
/* 80128698 001255D8  2C 00 00 01 */	cmpwi r0, 1
/* 8012869C 001255DC  41 82 00 58 */	beq .L_801286F4
/* 801286A0 001255E0  40 80 00 94 */	bge .L_80128734
/* 801286A4 001255E4  2C 00 00 00 */	cmpwi r0, 0
/* 801286A8 001255E8  40 80 00 08 */	bge .L_801286B0
/* 801286AC 001255EC  48 00 00 88 */	b .L_80128734
.L_801286B0:
/* 801286B0 001255F0  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801286B4 001255F4  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 801286B8 001255F8  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801286BC 001255FC  3C 60 80 4F */	lis r3, __vt__Q23efx10TSekikaLOn@ha
/* 801286C0 00125600  90 01 00 24 */	stw r0, 0x24(r1)
/* 801286C4 00125604  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 801286C8 00125608  38 C0 01 AC */	li r6, 0x1ac
/* 801286CC 0012560C  38 A0 00 00 */	li r5, 0
/* 801286D0 00125610  90 01 00 24 */	stw r0, 0x24(r1)
/* 801286D4 00125614  38 03 86 B0 */	addi r0, r3, __vt__Q23efx10TSekikaLOn@l
/* 801286D8 00125618  38 61 00 24 */	addi r3, r1, 0x24
/* 801286DC 0012561C  38 81 00 3C */	addi r4, r1, 0x3c
/* 801286E0 00125620  B0 C1 00 28 */	sth r6, 0x28(r1)
/* 801286E4 00125624  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801286E8 00125628  90 01 00 24 */	stw r0, 0x24(r1)
/* 801286EC 0012562C  48 29 F6 51 */	bl create__Q23efx10TSekikaLOnFPQ23efx3Arg
/* 801286F0 00125630  48 00 00 44 */	b .L_80128734
.L_801286F4:
/* 801286F4 00125634  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801286F8 00125638  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 801286FC 0012563C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80128700 00125640  3C 60 80 4F */	lis r3, __vt__Q23efx10TSekikaSOn@ha
/* 80128704 00125644  90 01 00 18 */	stw r0, 0x18(r1)
/* 80128708 00125648  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 8012870C 0012564C  38 C0 01 AE */	li r6, 0x1ae
/* 80128710 00125650  38 A0 00 00 */	li r5, 0
/* 80128714 00125654  90 01 00 18 */	stw r0, 0x18(r1)
/* 80128718 00125658  38 03 86 88 */	addi r0, r3, __vt__Q23efx10TSekikaSOn@l
/* 8012871C 0012565C  38 61 00 18 */	addi r3, r1, 0x18
/* 80128720 00125660  38 81 00 3C */	addi r4, r1, 0x3c
/* 80128724 00125664  B0 C1 00 1C */	sth r6, 0x1c(r1)
/* 80128728 00125668  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8012872C 0012566C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80128730 00125670  48 29 F7 C5 */	bl create__Q23efx10TSekikaSOnFPQ23efx3Arg
.L_80128734:
/* 80128734 00125674  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 80128738 00125678  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 8012873C 0012567C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80128740 00125680  40 81 00 28 */	ble .L_80128768
/* 80128744 00125684  D0 3F 00 38 */	stfs f1, 0x38(r31)
/* 80128748 00125688  7F C3 F3 78 */	mr r3, r30
/* 8012874C 0012568C  7F E4 FB 78 */	mr r4, r31
/* 80128750 00125690  38 A0 00 02 */	li r5, 2
/* 80128754 00125694  81 9E 00 00 */	lwz r12, 0(r30)
/* 80128758 00125698  38 C0 00 00 */	li r6, 0
/* 8012875C 0012569C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80128760 001256A0  7D 89 03 A6 */	mtctr r12
/* 80128764 001256A4  4E 80 04 21 */	bctrl 
.L_80128768:
/* 80128768 001256A8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8012876C 001256AC  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80128770 001256B0  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80128774 001256B4  7C 08 03 A6 */	mtlr r0
/* 80128778 001256B8  38 21 00 60 */	addi r1, r1, 0x60
/* 8012877C 001256BC  4E 80 00 20 */	blr 
.endfn exec__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfo

.fn "transit__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg", weak
/* 80128780 001256C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80128784 001256C4  7C 08 02 A6 */	mflr r0
/* 80128788 001256C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012878C 001256CC  80 63 00 08 */	lwz r3, 8(r3)
/* 80128790 001256D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80128794 001256D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80128798 001256D8  7D 89 03 A6 */	mtctr r12
/* 8012879C 001256DC  4E 80 04 21 */	bctrl 
/* 801287A0 001256E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801287A4 001256E4  7C 08 03 A6 */	mtlr r0
/* 801287A8 001256E8  38 21 00 10 */	addi r1, r1, 0x10
/* 801287AC 001256EC  4E 80 00 20 */	blr 
.endfn "transit__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"

.fn cleanup__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfo, global
/* 801287B0 001256F0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfo

.fn makeMatrix__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfoP7Matrixf, global
/* 801287B4 001256F4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801287B8 001256F8  7C 08 02 A6 */	mflr r0
/* 801287BC 001256FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 801287C0 00125700  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801287C4 00125704  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 801287C8 00125708  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801287CC 0012570C  C0 44 00 38 */	lfs f2, 0x38(r4)
/* 801287D0 00125710  7C BF 2B 78 */	mr r31, r5
/* 801287D4 00125714  C0 24 00 3C */	lfs f1, 0x3c(r4)
/* 801287D8 00125718  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 801287DC 0012571C  EC 42 08 24 */	fdivs f2, f2, f1
/* 801287E0 00125720  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801287E4 00125724  40 80 00 0C */	bge .L_801287F0
/* 801287E8 00125728  FC 40 00 90 */	fmr f2, f0
/* 801287EC 0012572C  48 00 00 14 */	b .L_80128800
.L_801287F0:
/* 801287F0 00125730  C0 02 9C 6C */	lfs f0, lbl_80517FCC@sda21(r2)
/* 801287F4 00125734  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801287F8 00125738  40 81 00 08 */	ble .L_80128800
/* 801287FC 0012573C  FC 40 00 90 */	fmr f2, f0
.L_80128800:
/* 80128800 00125740  C0 22 9C 78 */	lfs f1, lbl_80517FD8@sda21(r2)
/* 80128804 00125744  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 80128808 00125748  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8012880C 0012574C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80128810 00125750  40 80 00 30 */	bge .L_80128840
/* 80128814 00125754  C0 02 9C 70 */	lfs f0, lbl_80517FD0@sda21(r2)
/* 80128818 00125758  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8012881C 0012575C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80128820 00125760  EC 01 00 32 */	fmuls f0, f1, f0
/* 80128824 00125764  FC 00 00 1E */	fctiwz f0, f0
/* 80128828 00125768  D8 01 00 08 */	stfd f0, 8(r1)
/* 8012882C 0012576C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80128830 00125770  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80128834 00125774  7C 03 04 2E */	lfsx f0, r3, r0
/* 80128838 00125778  FF E0 00 50 */	fneg f31, f0
/* 8012883C 0012577C  48 00 00 28 */	b .L_80128864
.L_80128840:
/* 80128840 00125780  C0 02 9C 74 */	lfs f0, lbl_80517FD4@sda21(r2)
/* 80128844 00125784  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80128848 00125788  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8012884C 0012578C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80128850 00125790  FC 00 00 1E */	fctiwz f0, f0
/* 80128854 00125794  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80128858 00125798  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012885C 0012579C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80128860 001257A0  7F E3 04 2E */	lfsx f31, r3, r0
.L_80128864:
/* 80128864 001257A4  7F E3 FB 78 */	mr r3, r31
/* 80128868 001257A8  4B FC 1A 39 */	bl PSMTXIdentity
/* 8012886C 001257AC  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80128870 001257B0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80128874 001257B4  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80128878 001257B8  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8012887C 001257BC  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80128880 001257C0  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80128884 001257C4  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80128888 001257C8  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8012888C 001257CC  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80128890 001257D0  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80128894 001257D4  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80128898 001257D8  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8012889C 001257DC  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 801288A0 001257E0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801288A4 001257E4  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 801288A8 001257E8  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 801288AC 001257EC  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801288B0 001257F0  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 801288B4 001257F4  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 801288B8 001257F8  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801288BC 001257FC  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 801288C0 00125800  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 801288C4 00125804  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801288C8 00125808  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 801288CC 0012580C  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 801288D0 00125810  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801288D4 00125814  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 801288D8 00125818  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 801288DC 0012581C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801288E0 00125820  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801288E4 00125824  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801288E8 00125828  7C 08 03 A6 */	mtlr r0
/* 801288EC 0012582C  38 21 00 30 */	addi r1, r1, 0x30
/* 801288F0 00125830  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game10EnemyStone17FSMStateExpansionFPQ34Game10EnemyStone8DrawInfoP7Matrixf

.fn makeMatrix__Q34Game10EnemyStone21FSMStateExpansionFullFPQ34Game10EnemyStone8DrawInfoP7Matrixf, global
/* 801288F4 00125834  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801288F8 00125838  7C 08 02 A6 */	mflr r0
/* 801288FC 0012583C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80128900 00125840  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80128904 00125844  7C BF 2B 78 */	mr r31, r5
/* 80128908 00125848  7F E3 FB 78 */	mr r3, r31
/* 8012890C 0012584C  4B FC 19 95 */	bl PSMTXIdentity
/* 80128910 00125850  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80128914 00125854  C0 22 9C 6C */	lfs f1, lbl_80517FCC@sda21(r2)
/* 80128918 00125858  EC 00 00 72 */	fmuls f0, f0, f1
/* 8012891C 0012585C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80128920 00125860  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80128924 00125864  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128928 00125868  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8012892C 0012586C  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80128930 00125870  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128934 00125874  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80128938 00125878  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 8012893C 0012587C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128940 00125880  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80128944 00125884  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 80128948 00125888  EC 00 00 72 */	fmuls f0, f0, f1
/* 8012894C 0012588C  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 80128950 00125890  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80128954 00125894  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128958 00125898  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8012895C 0012589C  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 80128960 001258A0  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128964 001258A4  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80128968 001258A8  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 8012896C 001258AC  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128970 001258B0  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80128974 001258B4  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 80128978 001258B8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8012897C 001258BC  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80128980 001258C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80128984 001258C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80128988 001258C8  7C 08 03 A6 */	mtlr r0
/* 8012898C 001258CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80128990 001258D0  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game10EnemyStone21FSMStateExpansionFullFPQ34Game10EnemyStone8DrawInfoP7Matrixf

.fn init__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg, global
/* 80128994 001258D4  C0 22 9C 68 */	lfs f1, lbl_80517FC8@sda21(r2)
/* 80128998 001258D8  C0 02 9C 7C */	lfs f0, lbl_80517FDC@sda21(r2)
/* 8012899C 001258DC  D0 24 00 38 */	stfs f1, 0x38(r4)
/* 801289A0 001258E0  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 801289A4 001258E4  4E 80 00 20 */	blr 
.endfn init__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg

.fn exec__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfo, global
/* 801289A8 001258E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801289AC 001258EC  7C 08 02 A6 */	mflr r0
/* 801289B0 001258F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801289B4 001258F4  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 801289B8 001258F8  C0 24 00 38 */	lfs f1, 0x38(r4)
/* 801289BC 001258FC  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 801289C0 00125900  EC 01 00 2A */	fadds f0, f1, f0
/* 801289C4 00125904  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 801289C8 00125908  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 801289CC 0012590C  C0 24 00 3C */	lfs f1, 0x3c(r4)
/* 801289D0 00125910  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801289D4 00125914  40 81 00 20 */	ble .L_801289F4
/* 801289D8 00125918  D0 24 00 38 */	stfs f1, 0x38(r4)
/* 801289DC 0012591C  38 A0 00 04 */	li r5, 4
/* 801289E0 00125920  38 C0 00 00 */	li r6, 0
/* 801289E4 00125924  81 83 00 00 */	lwz r12, 0(r3)
/* 801289E8 00125928  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801289EC 0012592C  7D 89 03 A6 */	mtctr r12
/* 801289F0 00125930  4E 80 04 21 */	bctrl 
.L_801289F4:
/* 801289F4 00125934  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801289F8 00125938  7C 08 03 A6 */	mtlr r0
/* 801289FC 0012593C  38 21 00 10 */	addi r1, r1, 0x10
/* 80128A00 00125940  4E 80 00 20 */	blr 
.endfn exec__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfo

.fn cleanup__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfo, global
/* 80128A04 00125944  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfo

.fn makeMatrix__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfoP7Matrixf, global
/* 80128A08 00125948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80128A0C 0012594C  7C 08 02 A6 */	mflr r0
/* 80128A10 00125950  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 80128A14 00125954  90 01 00 14 */	stw r0, 0x14(r1)
/* 80128A18 00125958  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80128A1C 0012595C  7C BF 2B 78 */	mr r31, r5
/* 80128A20 00125960  C0 44 00 38 */	lfs f2, 0x38(r4)
/* 80128A24 00125964  C0 24 00 3C */	lfs f1, 0x3c(r4)
/* 80128A28 00125968  EC 22 08 24 */	fdivs f1, f2, f1
/* 80128A2C 0012596C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80128A30 00125970  40 80 00 0C */	bge .L_80128A3C
/* 80128A34 00125974  FC 20 00 90 */	fmr f1, f0
/* 80128A38 00125978  48 00 00 14 */	b .L_80128A4C
.L_80128A3C:
/* 80128A3C 0012597C  C0 02 9C 6C */	lfs f0, lbl_80517FCC@sda21(r2)
/* 80128A40 00125980  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80128A44 00125984  40 81 00 08 */	ble .L_80128A4C
/* 80128A48 00125988  FC 20 00 90 */	fmr f1, f0
.L_80128A4C:
/* 80128A4C 0012598C  C0 02 9C 78 */	lfs f0, lbl_80517FD8@sda21(r2)
/* 80128A50 00125990  EC 20 00 72 */	fmuls f1, f0, f1
/* 80128A54 00125994  4B FA 68 61 */	bl cos
/* 80128A58 00125998  7F E3 FB 78 */	mr r3, r31
/* 80128A5C 0012599C  4B FC 18 45 */	bl PSMTXIdentity
/* 80128A60 001259A0  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80128A64 001259A4  C0 22 9C 6C */	lfs f1, lbl_80517FCC@sda21(r2)
/* 80128A68 001259A8  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128A6C 001259AC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80128A70 001259B0  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80128A74 001259B4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128A78 001259B8  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80128A7C 001259BC  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80128A80 001259C0  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128A84 001259C4  D0 1F 00 08 */	stfs f0, 8(r31)
/* 80128A88 001259C8  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80128A8C 001259CC  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128A90 001259D0  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80128A94 001259D4  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 80128A98 001259D8  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128A9C 001259DC  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 80128AA0 001259E0  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80128AA4 001259E4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128AA8 001259E8  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80128AAC 001259EC  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 80128AB0 001259F0  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128AB4 001259F4  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80128AB8 001259F8  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 80128ABC 001259FC  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128AC0 00125A00  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80128AC4 00125A04  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 80128AC8 00125A08  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128ACC 00125A0C  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80128AD0 00125A10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80128AD4 00125A14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80128AD8 00125A18  7C 08 03 A6 */	mtlr r0
/* 80128ADC 00125A1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80128AE0 00125A20  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game10EnemyStone11FSMStateFitFPQ34Game10EnemyStone8DrawInfoP7Matrixf

.fn init__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg, global
/* 80128AE4 00125A24  C0 02 9C 80 */	lfs f0, lbl_80517FE0@sda21(r2)
/* 80128AE8 00125A28  38 00 00 00 */	li r0, 0
/* 80128AEC 00125A2C  C0 22 9C 84 */	lfs f1, lbl_80517FE4@sda21(r2)
/* 80128AF0 00125A30  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80128AF4 00125A34  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80128AF8 00125A38  EC 01 00 32 */	fmuls f0, f1, f0
/* 80128AFC 00125A3C  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 80128B00 00125A40  90 03 00 10 */	stw r0, 0x10(r3)
/* 80128B04 00125A44  4E 80 00 20 */	blr 
.endfn init__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg

.fn exec__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfo, global
/* 80128B08 00125A48  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80128B0C 00125A4C  7C 08 02 A6 */	mflr r0
/* 80128B10 00125A50  90 01 00 24 */	stw r0, 0x24(r1)
/* 80128B14 00125A54  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80128B18 00125A58  7C 9F 23 78 */	mr r31, r4
/* 80128B1C 00125A5C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80128B20 00125A60  7C 7E 1B 78 */	mr r30, r3
/* 80128B24 00125A64  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 80128B28 00125A68  C0 24 00 38 */	lfs f1, 0x38(r4)
/* 80128B2C 00125A6C  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 80128B30 00125A70  EC 01 00 2A */	fadds f0, f1, f0
/* 80128B34 00125A74  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 80128B38 00125A78  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 80128B3C 00125A7C  C0 24 00 3C */	lfs f1, 0x3c(r4)
/* 80128B40 00125A80  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80128B44 00125A84  40 81 00 E0 */	ble .L_80128C24
/* 80128B48 00125A88  D0 3F 00 38 */	stfs f1, 0x38(r31)
/* 80128B4C 00125A8C  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80128B50 00125A90  2C 00 00 02 */	cmpwi r0, 2
/* 80128B54 00125A94  41 82 00 70 */	beq .L_80128BC4
/* 80128B58 00125A98  40 80 00 14 */	bge .L_80128B6C
/* 80128B5C 00125A9C  2C 00 00 00 */	cmpwi r0, 0
/* 80128B60 00125AA0  41 82 00 1C */	beq .L_80128B7C
/* 80128B64 00125AA4  40 80 00 3C */	bge .L_80128BA0
/* 80128B68 00125AA8  48 00 00 BC */	b .L_80128C24
.L_80128B6C:
/* 80128B6C 00125AAC  2C 00 00 04 */	cmpwi r0, 4
/* 80128B70 00125AB0  41 82 00 9C */	beq .L_80128C0C
/* 80128B74 00125AB4  40 80 00 B0 */	bge .L_80128C24
/* 80128B78 00125AB8  48 00 00 70 */	b .L_80128BE8
.L_80128B7C:
/* 80128B7C 00125ABC  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 80128B80 00125AC0  38 00 00 01 */	li r0, 1
/* 80128B84 00125AC4  C0 22 9C 88 */	lfs f1, lbl_80517FE8@sda21(r2)
/* 80128B88 00125AC8  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 80128B8C 00125ACC  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 80128B90 00125AD0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80128B94 00125AD4  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 80128B98 00125AD8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80128B9C 00125ADC  48 00 00 88 */	b .L_80128C24
.L_80128BA0:
/* 80128BA0 00125AE0  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 80128BA4 00125AE4  38 00 00 02 */	li r0, 2
/* 80128BA8 00125AE8  C0 22 9C 88 */	lfs f1, lbl_80517FE8@sda21(r2)
/* 80128BAC 00125AEC  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 80128BB0 00125AF0  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 80128BB4 00125AF4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80128BB8 00125AF8  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 80128BBC 00125AFC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80128BC0 00125B00  48 00 00 64 */	b .L_80128C24
.L_80128BC4:
/* 80128BC4 00125B04  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 80128BC8 00125B08  38 00 00 03 */	li r0, 3
/* 80128BCC 00125B0C  C0 22 9C 8C */	lfs f1, lbl_80517FEC@sda21(r2)
/* 80128BD0 00125B10  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 80128BD4 00125B14  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 80128BD8 00125B18  EC 01 00 32 */	fmuls f0, f1, f0
/* 80128BDC 00125B1C  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 80128BE0 00125B20  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80128BE4 00125B24  48 00 00 40 */	b .L_80128C24
.L_80128BE8:
/* 80128BE8 00125B28  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 80128BEC 00125B2C  38 00 00 04 */	li r0, 4
/* 80128BF0 00125B30  C0 22 9C 90 */	lfs f1, lbl_80517FF0@sda21(r2)
/* 80128BF4 00125B34  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 80128BF8 00125B38  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 80128BFC 00125B3C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80128C00 00125B40  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 80128C04 00125B44  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80128C08 00125B48  48 00 00 1C */	b .L_80128C24
.L_80128C0C:
/* 80128C0C 00125B4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80128C10 00125B50  38 A0 00 06 */	li r5, 6
/* 80128C14 00125B54  38 C0 00 00 */	li r6, 0
/* 80128C18 00125B58  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80128C1C 00125B5C  7D 89 03 A6 */	mtctr r12
/* 80128C20 00125B60  4E 80 04 21 */	bctrl 
.L_80128C24:
/* 80128C24 00125B64  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 80128C28 00125B68  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 80128C2C 00125B6C  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80128C30 00125B70  EC 21 00 24 */	fdivs f1, f1, f0
/* 80128C34 00125B74  2C 00 00 02 */	cmpwi r0, 2
/* 80128C38 00125B78  41 82 00 20 */	beq .L_80128C58
/* 80128C3C 00125B7C  40 80 00 10 */	bge .L_80128C4C
/* 80128C40 00125B80  2C 00 00 00 */	cmpwi r0, 0
/* 80128C44 00125B84  41 82 00 14 */	beq .L_80128C58
/* 80128C48 00125B88  48 00 01 20 */	b .L_80128D68
.L_80128C4C:
/* 80128C4C 00125B8C  2C 00 00 04 */	cmpwi r0, 4
/* 80128C50 00125B90  41 82 00 8C */	beq .L_80128CDC
/* 80128C54 00125B94  48 00 01 14 */	b .L_80128D68
.L_80128C58:
/* 80128C58 00125B98  C0 02 9C 60 */	lfs f0, lbl_80517FC0@sda21(r2)
/* 80128C5C 00125B9C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128C60 00125BA0  FC 00 00 1E */	fctiwz f0, f0
/* 80128C64 00125BA4  D8 01 00 08 */	stfd f0, 8(r1)
/* 80128C68 00125BA8  80 61 00 0C */	lwz r3, 0xc(r1)
/* 80128C6C 00125BAC  54 60 F0 02 */	slwi r0, r3, 0x1e
/* 80128C70 00125BB0  54 63 0F FE */	srwi r3, r3, 0x1f
/* 80128C74 00125BB4  7C 03 00 50 */	subf r0, r3, r0
/* 80128C78 00125BB8  54 00 10 3E */	rotlwi r0, r0, 2
/* 80128C7C 00125BBC  7C 00 1A 15 */	add. r0, r0, r3
/* 80128C80 00125BC0  40 82 00 E8 */	bne .L_80128D68
/* 80128C84 00125BC4  80 6D 92 30 */	lwz r3, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 80128C88 00125BC8  83 E3 02 8C */	lwz r31, 0x28c(r3)
/* 80128C8C 00125BCC  28 1F 00 00 */	cmplwi r31, 0
/* 80128C90 00125BD0  41 82 00 08 */	beq .L_80128C98
/* 80128C94 00125BD4  3B FF 00 30 */	addi r31, r31, 0x30
.L_80128C98:
/* 80128C98 00125BD8  80 0D 91 C8 */	lwz r0, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 80128C9C 00125BDC  28 00 00 00 */	cmplwi r0, 0
/* 80128CA0 00125BE0  40 82 00 20 */	bne .L_80128CC0
/* 80128CA4 00125BE4  3C 60 80 48 */	lis r3, lbl_8047BF00@ha
/* 80128CA8 00125BE8  3C A0 80 48 */	lis r5, lbl_8047BF0C@ha
/* 80128CAC 00125BEC  38 63 BF 00 */	addi r3, r3, lbl_8047BF00@l
/* 80128CB0 00125BF0  38 80 02 37 */	li r4, 0x237
/* 80128CB4 00125BF4  38 A5 BF 0C */	addi r5, r5, lbl_8047BF0C@l
/* 80128CB8 00125BF8  4C C6 31 82 */	crclr 6
/* 80128CBC 00125BFC  4B F0 19 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80128CC0:
/* 80128CC0 00125C00  80 6D 91 C8 */	lwz r3, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 80128CC4 00125C04  7F E4 FB 78 */	mr r4, r31
/* 80128CC8 00125C08  38 A0 58 B1 */	li r5, 0x58b1
/* 80128CCC 00125C0C  38 C0 00 00 */	li r6, 0
/* 80128CD0 00125C10  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80128CD4 00125C14  48 21 6B E5 */	bl startSound__Q26PSGame5SetSeFPQ27JAInter6ObjectUlUl
/* 80128CD8 00125C18  48 00 00 90 */	b .L_80128D68
.L_80128CDC:
/* 80128CDC 00125C1C  C0 02 9C 94 */	lfs f0, lbl_80517FF4@sda21(r2)
/* 80128CE0 00125C20  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 80128CE4 00125C24  38 03 66 67 */	addi r0, r3, 0x66666667@l
/* 80128CE8 00125C28  EC 00 00 72 */	fmuls f0, f0, f1
/* 80128CEC 00125C2C  FC 00 00 1E */	fctiwz f0, f0
/* 80128CF0 00125C30  D8 01 00 08 */	stfd f0, 8(r1)
/* 80128CF4 00125C34  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80128CF8 00125C38  7C 00 20 96 */	mulhw r0, r0, r4
/* 80128CFC 00125C3C  7C 00 16 70 */	srawi r0, r0, 2
/* 80128D00 00125C40  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80128D04 00125C44  7C 00 1A 14 */	add r0, r0, r3
/* 80128D08 00125C48  1C 00 00 0A */	mulli r0, r0, 0xa
/* 80128D0C 00125C4C  7C 00 20 51 */	subf. r0, r0, r4
/* 80128D10 00125C50  40 82 00 58 */	bne .L_80128D68
/* 80128D14 00125C54  80 6D 92 30 */	lwz r3, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 80128D18 00125C58  83 E3 02 8C */	lwz r31, 0x28c(r3)
/* 80128D1C 00125C5C  28 1F 00 00 */	cmplwi r31, 0
/* 80128D20 00125C60  41 82 00 08 */	beq .L_80128D28
/* 80128D24 00125C64  3B FF 00 30 */	addi r31, r31, 0x30
.L_80128D28:
/* 80128D28 00125C68  80 0D 91 C8 */	lwz r0, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 80128D2C 00125C6C  28 00 00 00 */	cmplwi r0, 0
/* 80128D30 00125C70  40 82 00 20 */	bne .L_80128D50
/* 80128D34 00125C74  3C 60 80 48 */	lis r3, lbl_8047BF00@ha
/* 80128D38 00125C78  3C A0 80 48 */	lis r5, lbl_8047BF0C@ha
/* 80128D3C 00125C7C  38 63 BF 00 */	addi r3, r3, lbl_8047BF00@l
/* 80128D40 00125C80  38 80 02 37 */	li r4, 0x237
/* 80128D44 00125C84  38 A5 BF 0C */	addi r5, r5, lbl_8047BF0C@l
/* 80128D48 00125C88  4C C6 31 82 */	crclr 6
/* 80128D4C 00125C8C  4B F0 18 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80128D50:
/* 80128D50 00125C90  80 6D 91 C8 */	lwz r3, "sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13)
/* 80128D54 00125C94  7F E4 FB 78 */	mr r4, r31
/* 80128D58 00125C98  38 A0 58 B2 */	li r5, 0x58b2
/* 80128D5C 00125C9C  38 C0 00 00 */	li r6, 0
/* 80128D60 00125CA0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80128D64 00125CA4  48 21 6B 55 */	bl startSound__Q26PSGame5SetSeFPQ27JAInter6ObjectUlUl
.L_80128D68:
/* 80128D68 00125CA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80128D6C 00125CAC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80128D70 00125CB0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80128D74 00125CB4  7C 08 03 A6 */	mtlr r0
/* 80128D78 00125CB8  38 21 00 20 */	addi r1, r1, 0x20
/* 80128D7C 00125CBC  4E 80 00 20 */	blr 
.endfn exec__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfo

.fn cleanup__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfo, global
/* 80128D80 00125CC0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfo

.fn makeMatrix__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfoP7Matrixf, global
/* 80128D84 00125CC4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80128D88 00125CC8  7C 08 02 A6 */	mflr r0
/* 80128D8C 00125CCC  90 01 00 54 */	stw r0, 0x54(r1)
/* 80128D90 00125CD0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80128D94 00125CD4  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80128D98 00125CD8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80128D9C 00125CDC  C0 44 00 38 */	lfs f2, 0x38(r4)
/* 80128DA0 00125CE0  7C BF 2B 78 */	mr r31, r5
/* 80128DA4 00125CE4  C0 04 00 3C */	lfs f0, 0x3c(r4)
/* 80128DA8 00125CE8  C0 E2 9C 68 */	lfs f7, lbl_80517FC8@sda21(r2)
/* 80128DAC 00125CEC  EC 02 00 24 */	fdivs f0, f2, f0
/* 80128DB0 00125CF0  FC 00 38 40 */	fcmpo cr0, f0, f7
/* 80128DB4 00125CF4  40 80 00 0C */	bge .L_80128DC0
/* 80128DB8 00125CF8  FC 00 38 90 */	fmr f0, f7
/* 80128DBC 00125CFC  48 00 00 14 */	b .L_80128DD0
.L_80128DC0:
/* 80128DC0 00125D00  C0 42 9C 6C */	lfs f2, lbl_80517FCC@sda21(r2)
/* 80128DC4 00125D04  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80128DC8 00125D08  40 81 00 08 */	ble .L_80128DD0
/* 80128DCC 00125D0C  FC 00 10 90 */	fmr f0, f2
.L_80128DD0:
/* 80128DD0 00125D10  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80128DD4 00125D14  2C 00 00 02 */	cmpwi r0, 2
/* 80128DD8 00125D18  41 82 00 88 */	beq .L_80128E60
/* 80128DDC 00125D1C  40 80 00 14 */	bge .L_80128DF0
/* 80128DE0 00125D20  2C 00 00 00 */	cmpwi r0, 0
/* 80128DE4 00125D24  41 82 00 1C */	beq .L_80128E00
/* 80128DE8 00125D28  40 80 01 0C */	bge .L_80128EF4
/* 80128DEC 00125D2C  48 00 01 80 */	b .L_80128F6C
.L_80128DF0:
/* 80128DF0 00125D30  2C 00 00 04 */	cmpwi r0, 4
/* 80128DF4 00125D34  41 82 01 10 */	beq .L_80128F04
/* 80128DF8 00125D38  40 80 01 74 */	bge .L_80128F6C
/* 80128DFC 00125D3C  48 00 00 F8 */	b .L_80128EF4
.L_80128E00:
/* 80128E00 00125D40  C0 42 9C 98 */	lfs f2, lbl_80517FF8@sda21(r2)
/* 80128E04 00125D44  C0 22 9C 68 */	lfs f1, lbl_80517FC8@sda21(r2)
/* 80128E08 00125D48  EC 42 00 32 */	fmuls f2, f2, f0
/* 80128E0C 00125D4C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80128E10 00125D50  40 80 00 08 */	bge .L_80128E18
/* 80128E14 00125D54  FC 40 10 50 */	fneg f2, f2
.L_80128E18:
/* 80128E18 00125D58  C0 22 9C 74 */	lfs f1, lbl_80517FD4@sda21(r2)
/* 80128E1C 00125D5C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80128E20 00125D60  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80128E24 00125D64  C0 82 9C 6C */	lfs f4, lbl_80517FCC@sda21(r2)
/* 80128E28 00125D68  EC 62 00 72 */	fmuls f3, f2, f1
/* 80128E2C 00125D6C  C0 A2 9C 64 */	lfs f5, lbl_80517FC4@sda21(r2)
/* 80128E30 00125D70  C0 42 9C A0 */	lfs f2, lbl_80518000@sda21(r2)
/* 80128E34 00125D74  C0 22 9C 9C */	lfs f1, lbl_80517FFC@sda21(r2)
/* 80128E38 00125D78  FC 60 18 1E */	fctiwz f3, f3
/* 80128E3C 00125D7C  D8 61 00 20 */	stfd f3, 0x20(r1)
/* 80128E40 00125D80  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80128E44 00125D84  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80128E48 00125D88  7C 63 02 14 */	add r3, r3, r0
/* 80128E4C 00125D8C  C0 63 00 04 */	lfs f3, 4(r3)
/* 80128E50 00125D90  EC 64 18 28 */	fsubs f3, f4, f3
/* 80128E54 00125D94  EC E5 00 F2 */	fmuls f7, f5, f3
/* 80128E58 00125D98  EF E2 01 F2 */	fmuls f31, f2, f7
/* 80128E5C 00125D9C  48 00 01 10 */	b .L_80128F6C
.L_80128E60:
/* 80128E60 00125DA0  C0 22 9C 98 */	lfs f1, lbl_80517FF8@sda21(r2)
/* 80128E64 00125DA4  C0 62 9C A4 */	lfs f3, lbl_80518004@sda21(r2)
/* 80128E68 00125DA8  EC 41 00 32 */	fmuls f2, f1, f0
/* 80128E6C 00125DAC  C0 22 9C 68 */	lfs f1, lbl_80517FC8@sda21(r2)
/* 80128E70 00125DB0  EC 43 00 B2 */	fmuls f2, f3, f2
/* 80128E74 00125DB4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80128E78 00125DB8  40 80 00 30 */	bge .L_80128EA8
/* 80128E7C 00125DBC  C0 22 9C 70 */	lfs f1, lbl_80517FD0@sda21(r2)
/* 80128E80 00125DC0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80128E84 00125DC4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80128E88 00125DC8  EC 22 00 72 */	fmuls f1, f2, f1
/* 80128E8C 00125DCC  FC 20 08 1E */	fctiwz f1, f1
/* 80128E90 00125DD0  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 80128E94 00125DD4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80128E98 00125DD8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80128E9C 00125DDC  7C 23 04 2E */	lfsx f1, r3, r0
/* 80128EA0 00125DE0  FC 60 08 50 */	fneg f3, f1
/* 80128EA4 00125DE4  48 00 00 28 */	b .L_80128ECC
.L_80128EA8:
/* 80128EA8 00125DE8  C0 22 9C 74 */	lfs f1, lbl_80517FD4@sda21(r2)
/* 80128EAC 00125DEC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80128EB0 00125DF0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80128EB4 00125DF4  EC 22 00 72 */	fmuls f1, f2, f1
/* 80128EB8 00125DF8  FC 20 08 1E */	fctiwz f1, f1
/* 80128EBC 00125DFC  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 80128EC0 00125E00  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80128EC4 00125E04  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80128EC8 00125E08  7C 63 04 2E */	lfsx f3, r3, r0
.L_80128ECC:
/* 80128ECC 00125E0C  C0 42 9C 64 */	lfs f2, lbl_80517FC4@sda21(r2)
/* 80128ED0 00125E10  C0 22 9C 68 */	lfs f1, lbl_80517FC8@sda21(r2)
/* 80128ED4 00125E14  EC E2 00 F2 */	fmuls f7, f2, f3
/* 80128ED8 00125E18  FC 07 08 40 */	fcmpo cr0, f7, f1
/* 80128EDC 00125E1C  40 80 00 08 */	bge .L_80128EE4
/* 80128EE0 00125E20  FC E0 08 90 */	fmr f7, f1
.L_80128EE4:
/* 80128EE4 00125E24  C0 42 9C A0 */	lfs f2, lbl_80518000@sda21(r2)
/* 80128EE8 00125E28  C0 22 9C A8 */	lfs f1, lbl_80518008@sda21(r2)
/* 80128EEC 00125E2C  EF E2 01 F2 */	fmuls f31, f2, f7
/* 80128EF0 00125E30  48 00 00 7C */	b .L_80128F6C
.L_80128EF4:
/* 80128EF4 00125E34  C0 E2 9C 68 */	lfs f7, lbl_80517FC8@sda21(r2)
/* 80128EF8 00125E38  FC 20 38 90 */	fmr f1, f7
/* 80128EFC 00125E3C  FF E0 38 90 */	fmr f31, f7
/* 80128F00 00125E40  48 00 00 6C */	b .L_80128F6C
.L_80128F04:
/* 80128F04 00125E44  C0 22 9C B0 */	lfs f1, lbl_80518010@sda21(r2)
/* 80128F08 00125E48  C0 62 9C AC */	lfs f3, lbl_8051800C@sda21(r2)
/* 80128F0C 00125E4C  EC 41 00 32 */	fmuls f2, f1, f0
/* 80128F10 00125E50  C0 22 9C 68 */	lfs f1, lbl_80517FC8@sda21(r2)
/* 80128F14 00125E54  EC 63 00 B2 */	fmuls f3, f3, f2
/* 80128F18 00125E58  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 80128F1C 00125E5C  40 80 00 08 */	bge .L_80128F24
/* 80128F20 00125E60  FC 60 18 50 */	fneg f3, f3
.L_80128F24:
/* 80128F24 00125E64  C0 42 9C 74 */	lfs f2, lbl_80517FD4@sda21(r2)
/* 80128F28 00125E68  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80128F2C 00125E6C  C0 22 9C BC */	lfs f1, lbl_8051801C@sda21(r2)
/* 80128F30 00125E70  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80128F34 00125E74  EC 43 00 B2 */	fmuls f2, f3, f2
/* 80128F38 00125E78  C0 62 9C 6C */	lfs f3, lbl_80517FCC@sda21(r2)
/* 80128F3C 00125E7C  EF E1 00 32 */	fmuls f31, f1, f0
/* 80128F40 00125E80  C0 82 9C B4 */	lfs f4, lbl_80518014@sda21(r2)
/* 80128F44 00125E84  C0 22 9C B8 */	lfs f1, lbl_80518018@sda21(r2)
/* 80128F48 00125E88  FC 40 10 1E */	fctiwz f2, f2
/* 80128F4C 00125E8C  D8 41 00 28 */	stfd f2, 0x28(r1)
/* 80128F50 00125E90  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80128F54 00125E94  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80128F58 00125E98  7C 63 02 14 */	add r3, r3, r0
/* 80128F5C 00125E9C  C0 43 00 04 */	lfs f2, 4(r3)
/* 80128F60 00125EA0  EC 43 10 28 */	fsubs f2, f3, f2
/* 80128F64 00125EA4  EC 44 00 B2 */	fmuls f2, f4, f2
/* 80128F68 00125EA8  EC E0 00 B2 */	fmuls f7, f0, f2
.L_80128F6C:
/* 80128F6C 00125EAC  EC C1 00 32 */	fmuls f6, f1, f0
/* 80128F70 00125EB0  C0 42 9C 68 */	lfs f2, lbl_80517FC8@sda21(r2)
/* 80128F74 00125EB4  FC 60 30 90 */	fmr f3, f6
/* 80128F78 00125EB8  FC 06 10 40 */	fcmpo cr0, f6, f2
/* 80128F7C 00125EBC  40 80 00 08 */	bge .L_80128F84
/* 80128F80 00125EC0  FC 60 30 50 */	fneg f3, f6
.L_80128F84:
/* 80128F84 00125EC4  C0 82 9C 74 */	lfs f4, lbl_80517FD4@sda21(r2)
/* 80128F88 00125EC8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80128F8C 00125ECC  C0 42 9C 68 */	lfs f2, lbl_80517FC8@sda21(r2)
/* 80128F90 00125ED0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80128F94 00125ED4  EC 63 01 32 */	fmuls f3, f3, f4
/* 80128F98 00125ED8  FC 06 10 40 */	fcmpo cr0, f6, f2
/* 80128F9C 00125EDC  FC 40 18 1E */	fctiwz f2, f3
/* 80128FA0 00125EE0  D8 41 00 28 */	stfd f2, 0x28(r1)
/* 80128FA4 00125EE4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80128FA8 00125EE8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80128FAC 00125EEC  7C 64 02 14 */	add r3, r4, r0
/* 80128FB0 00125EF0  C0 43 00 04 */	lfs f2, 4(r3)
/* 80128FB4 00125EF4  EC A7 00 B2 */	fmuls f5, f7, f2
/* 80128FB8 00125EF8  40 80 00 28 */	bge .L_80128FE0
/* 80128FBC 00125EFC  C0 42 9C 70 */	lfs f2, lbl_80517FD0@sda21(r2)
/* 80128FC0 00125F00  EC 46 00 B2 */	fmuls f2, f6, f2
/* 80128FC4 00125F04  FC 40 10 1E */	fctiwz f2, f2
/* 80128FC8 00125F08  D8 41 00 20 */	stfd f2, 0x20(r1)
/* 80128FCC 00125F0C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80128FD0 00125F10  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80128FD4 00125F14  7C 44 04 2E */	lfsx f2, r4, r0
/* 80128FD8 00125F18  FC 40 10 50 */	fneg f2, f2
/* 80128FDC 00125F1C  48 00 00 1C */	b .L_80128FF8
.L_80128FE0:
/* 80128FE0 00125F20  EC 46 01 32 */	fmuls f2, f6, f4
/* 80128FE4 00125F24  FC 40 10 1E */	fctiwz f2, f2
/* 80128FE8 00125F28  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80128FEC 00125F2C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80128FF0 00125F30  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80128FF4 00125F34  7C 44 04 2E */	lfsx f2, r4, r0
.L_80128FF8:
/* 80128FF8 00125F38  EC 67 00 B2 */	fmuls f3, f7, f2
/* 80128FFC 00125F3C  C0 42 9C 68 */	lfs f2, lbl_80517FC8@sda21(r2)
/* 80129000 00125F40  EC 21 00 32 */	fmuls f1, f1, f0
/* 80129004 00125F44  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 80129008 00125F48  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8012900C 00125F4C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80129010 00125F50  4B FA 68 0D */	bl sin
/* 80129014 00125F54  FC 20 08 18 */	frsp f1, f1
/* 80129018 00125F58  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 8012901C 00125F5C  C0 42 9C C0 */	lfs f2, lbl_80518020@sda21(r2)
/* 80129020 00125F60  7F E3 FB 78 */	mr r3, r31
/* 80129024 00125F64  C0 62 9C B0 */	lfs f3, lbl_80518010@sda21(r2)
/* 80129028 00125F68  38 81 00 14 */	addi r4, r1, 0x14
/* 8012902C 00125F6C  EC 3F 00 72 */	fmuls f1, f31, f1
/* 80129030 00125F70  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80129034 00125F74  38 A1 00 08 */	addi r5, r1, 8
/* 80129038 00125F78  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8012903C 00125F7C  EC 02 00 72 */	fmuls f0, f2, f1
/* 80129040 00125F80  EC 03 00 32 */	fmuls f0, f3, f0
/* 80129044 00125F84  D0 01 00 08 */	stfs f0, 8(r1)
/* 80129048 00125F88  48 2F F8 41 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 8012904C 00125F8C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80129050 00125F90  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80129054 00125F94  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80129058 00125F98  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8012905C 00125F9C  7C 08 03 A6 */	mtlr r0
/* 80129060 00125FA0  38 21 00 50 */	addi r1, r1, 0x50
/* 80129064 00125FA4  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game10EnemyStone13FSMStateShakeFPQ34Game10EnemyStone8DrawInfoP7Matrixf

.fn makeMatrix__Q34Game10EnemyStone17FSMStateBreakableFPQ34Game10EnemyStone8DrawInfoP7Matrixf, global
/* 80129068 00125FA8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8012906C 00125FAC  7C 08 02 A6 */	mflr r0
/* 80129070 00125FB0  C0 22 9C C4 */	lfs f1, lbl_80518024@sda21(r2)
/* 80129074 00125FB4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80129078 00125FB8  C0 42 9C 98 */	lfs f2, lbl_80517FF8@sda21(r2)
/* 8012907C 00125FBC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80129080 00125FC0  7C BF 2B 78 */	mr r31, r5
/* 80129084 00125FC4  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 80129088 00125FC8  EC 21 00 32 */	fmuls f1, f1, f0
/* 8012908C 00125FCC  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 80129090 00125FD0  EC 22 00 72 */	fmuls f1, f2, f1
/* 80129094 00125FD4  FC 40 08 90 */	fmr f2, f1
/* 80129098 00125FD8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8012909C 00125FDC  40 80 00 08 */	bge .L_801290A4
/* 801290A0 00125FE0  FC 40 08 50 */	fneg f2, f1
.L_801290A4:
/* 801290A4 00125FE4  C0 62 9C 74 */	lfs f3, lbl_80517FD4@sda21(r2)
/* 801290A8 00125FE8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801290AC 00125FEC  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 801290B0 00125FF0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 801290B4 00125FF4  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801290B8 00125FF8  C0 82 9C C8 */	lfs f4, lbl_80518028@sda21(r2)
/* 801290BC 00125FFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801290C0 00126000  FC 00 10 1E */	fctiwz f0, f2
/* 801290C4 00126004  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 801290C8 00126008  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801290CC 0012600C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801290D0 00126010  7C 64 02 14 */	add r3, r4, r0
/* 801290D4 00126014  C0 03 00 04 */	lfs f0, 4(r3)
/* 801290D8 00126018  EC A4 00 32 */	fmuls f5, f4, f0
/* 801290DC 0012601C  40 80 00 28 */	bge .L_80129104
/* 801290E0 00126020  C0 02 9C 70 */	lfs f0, lbl_80517FD0@sda21(r2)
/* 801290E4 00126024  EC 01 00 32 */	fmuls f0, f1, f0
/* 801290E8 00126028  FC 00 00 1E */	fctiwz f0, f0
/* 801290EC 0012602C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 801290F0 00126030  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801290F4 00126034  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801290F8 00126038  7C 04 04 2E */	lfsx f0, r4, r0
/* 801290FC 0012603C  FC 00 00 50 */	fneg f0, f0
/* 80129100 00126040  48 00 00 1C */	b .L_8012911C
.L_80129104:
/* 80129104 00126044  EC 01 00 F2 */	fmuls f0, f1, f3
/* 80129108 00126048  FC 00 00 1E */	fctiwz f0, f0
/* 8012910C 0012604C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80129110 00126050  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80129114 00126054  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80129118 00126058  7C 04 04 2E */	lfsx f0, r4, r0
.L_8012911C:
/* 8012911C 0012605C  EC 44 00 32 */	fmuls f2, f4, f0
/* 80129120 00126060  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 80129124 00126064  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 80129128 00126068  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8012912C 0012606C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80129130 00126070  4B FA 66 ED */	bl sin
/* 80129134 00126074  FC 60 08 18 */	frsp f3, f1
/* 80129138 00126078  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 8012913C 0012607C  C0 22 9C BC */	lfs f1, lbl_8051801C@sda21(r2)
/* 80129140 00126080  7F E3 FB 78 */	mr r3, r31
/* 80129144 00126084  C0 42 9C C0 */	lfs f2, lbl_80518020@sda21(r2)
/* 80129148 00126088  38 81 00 14 */	addi r4, r1, 0x14
/* 8012914C 0012608C  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80129150 00126090  C0 62 9C B0 */	lfs f3, lbl_80518010@sda21(r2)
/* 80129154 00126094  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80129158 00126098  38 A1 00 08 */	addi r5, r1, 8
/* 8012915C 0012609C  EC 22 00 72 */	fmuls f1, f2, f1
/* 80129160 001260A0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80129164 001260A4  EC 03 00 72 */	fmuls f0, f3, f1
/* 80129168 001260A8  D0 01 00 08 */	stfs f0, 8(r1)
/* 8012916C 001260AC  48 2F F7 1D */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 80129170 001260B0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80129174 001260B4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80129178 001260B8  7C 08 03 A6 */	mtlr r0
/* 8012917C 001260BC  38 21 00 40 */	addi r1, r1, 0x40
/* 80129180 001260C0  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game10EnemyStone17FSMStateBreakableFPQ34Game10EnemyStone8DrawInfoP7Matrixf

.fn init__Q34Game10EnemyStone17FSMStateBreakableFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg, global
/* 80129184 001260C4  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 80129188 001260C8  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 8012918C 001260CC  4E 80 00 20 */	blr 
.endfn init__Q34Game10EnemyStone17FSMStateBreakableFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg

.fn exec__Q34Game10EnemyStone17FSMStateBreakableFPQ34Game10EnemyStone8DrawInfo, global
/* 80129190 001260D0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80129194 001260D4  C0 24 00 38 */	lfs f1, 0x38(r4)
/* 80129198 001260D8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8012919C 001260DC  EC 01 00 2A */	fadds f0, f1, f0
/* 801291A0 001260E0  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 801291A4 001260E4  4E 80 00 20 */	blr 
.endfn exec__Q34Game10EnemyStone17FSMStateBreakableFPQ34Game10EnemyStone8DrawInfo

.fn init__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg, global
/* 801291A8 001260E8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801291AC 001260EC  7C 08 02 A6 */	mflr r0
/* 801291B0 001260F0  90 01 00 64 */	stw r0, 0x64(r1)
/* 801291B4 001260F4  38 A1 00 08 */	addi r5, r1, 8
/* 801291B8 001260F8  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801291BC 001260FC  7C 9F 23 78 */	mr r31, r4
/* 801291C0 00126100  38 81 00 30 */	addi r4, r1, 0x30
/* 801291C4 00126104  7F E3 FB 78 */	mr r3, r31
/* 801291C8 00126108  48 00 05 05 */	bl "getPosAndScale__Q34Game10EnemyStone8DrawInfoFP10Vector3<f>Pf"
/* 801291CC 0012610C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801291D0 00126110  41 82 01 08 */	beq .L_801292D8
/* 801291D4 00126114  81 0D 92 30 */	lwz r8, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 801291D8 00126118  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 801291DC 0012611C  80 E1 00 30 */	lwz r7, 0x30(r1)
/* 801291E0 00126120  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 801291E4 00126124  80 C1 00 34 */	lwz r6, 0x34(r1)
/* 801291E8 00126128  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 801291EC 0012612C  80 A1 00 38 */	lwz r5, 0x38(r1)
/* 801291F0 00126130  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 801291F4 00126134  C0 08 01 F8 */	lfs f0, 0x1f8(r8)
/* 801291F8 00126138  C0 21 00 08 */	lfs f1, 8(r1)
/* 801291FC 0012613C  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80129200 00126140  EC 61 00 32 */	fmuls f3, f1, f0
/* 80129204 00126144  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80129208 00126148  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8012920C 0012614C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80129210 00126150  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80129214 00126154  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80129218 00126158  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8012921C 0012615C  D0 61 00 08 */	stfs f3, 8(r1)
/* 80129220 00126160  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 80129224 00126164  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 80129228 00126168  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 8012922C 0012616C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80129230 00126170  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 80129234 00126174  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 80129238 00126178  80 03 00 04 */	lwz r0, 4(r3)
/* 8012923C 0012617C  2C 00 00 01 */	cmpwi r0, 1
/* 80129240 00126180  41 82 00 58 */	beq .L_80129298
/* 80129244 00126184  40 80 00 94 */	bge .L_801292D8
/* 80129248 00126188  2C 00 00 00 */	cmpwi r0, 0
/* 8012924C 0012618C  40 80 00 08 */	bge .L_80129254
/* 80129250 00126190  48 00 00 88 */	b .L_801292D8
.L_80129254:
/* 80129254 00126194  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80129258 00126198  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 8012925C 0012619C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80129260 001261A0  3C 60 80 4F */	lis r3, __vt__Q23efx11TSekikaLOff@ha
/* 80129264 001261A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80129268 001261A8  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 8012926C 001261AC  38 C0 01 AB */	li r6, 0x1ab
/* 80129270 001261B0  38 A0 00 00 */	li r5, 0
/* 80129274 001261B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80129278 001261B8  38 03 86 C4 */	addi r0, r3, __vt__Q23efx11TSekikaLOff@l
/* 8012927C 001261BC  38 61 00 24 */	addi r3, r1, 0x24
/* 80129280 001261C0  38 81 00 3C */	addi r4, r1, 0x3c
/* 80129284 001261C4  B0 C1 00 28 */	sth r6, 0x28(r1)
/* 80129288 001261C8  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 8012928C 001261CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80129290 001261D0  48 29 E9 D1 */	bl create__Q23efx11TSekikaLOffFPQ23efx3Arg
/* 80129294 001261D4  48 00 00 44 */	b .L_801292D8
.L_80129298:
/* 80129298 001261D8  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8012929C 001261DC  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 801292A0 001261E0  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801292A4 001261E4  3C 60 80 4F */	lis r3, __vt__Q23efx11TSekikaSOff@ha
/* 801292A8 001261E8  90 01 00 18 */	stw r0, 0x18(r1)
/* 801292AC 001261EC  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 801292B0 001261F0  38 C0 01 AD */	li r6, 0x1ad
/* 801292B4 001261F4  38 A0 00 00 */	li r5, 0
/* 801292B8 001261F8  90 01 00 18 */	stw r0, 0x18(r1)
/* 801292BC 001261FC  38 03 86 9C */	addi r0, r3, __vt__Q23efx11TSekikaSOff@l
/* 801292C0 00126200  38 61 00 18 */	addi r3, r1, 0x18
/* 801292C4 00126204  38 81 00 3C */	addi r4, r1, 0x3c
/* 801292C8 00126208  B0 C1 00 1C */	sth r6, 0x1c(r1)
/* 801292CC 0012620C  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801292D0 00126210  90 01 00 18 */	stw r0, 0x18(r1)
/* 801292D4 00126214  48 29 EB 45 */	bl create__Q23efx11TSekikaSOffFPQ23efx3Arg
.L_801292D8:
/* 801292D8 00126218  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801292DC 0012621C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801292E0 00126220  7C 08 03 A6 */	mtlr r0
/* 801292E4 00126224  38 21 00 60 */	addi r1, r1, 0x60
/* 801292E8 00126228  4E 80 00 20 */	blr 
.endfn init__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg

.fn cleanup__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfo, global
/* 801292EC 0012622C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfo

.fn exec__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfo, global
/* 801292F0 00126230  4E 80 00 20 */	blr 
.endfn exec__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfo

.fn makeMatrix__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfoP7Matrixf, global
/* 801292F4 00126234  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801292F8 00126238  7C 08 02 A6 */	mflr r0
/* 801292FC 0012623C  7C A3 2B 78 */	mr r3, r5
/* 80129300 00126240  90 01 00 14 */	stw r0, 0x14(r1)
/* 80129304 00126244  4B FC 0F 9D */	bl PSMTXIdentity
/* 80129308 00126248  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012930C 0012624C  7C 08 03 A6 */	mtlr r0
/* 80129310 00126250  38 21 00 10 */	addi r1, r1, 0x10
/* 80129314 00126254  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game10EnemyStone17FSMStateDisappearFPQ34Game10EnemyStone8DrawInfoP7Matrixf

.fn init__Q34Game10EnemyStone12FSMStateDeadFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg, global
/* 80129318 00126258  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8012931C 0012625C  7C 08 02 A6 */	mflr r0
/* 80129320 00126260  90 01 00 64 */	stw r0, 0x64(r1)
/* 80129324 00126264  38 A1 00 08 */	addi r5, r1, 8
/* 80129328 00126268  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8012932C 0012626C  7C 9F 23 78 */	mr r31, r4
/* 80129330 00126270  38 81 00 30 */	addi r4, r1, 0x30
/* 80129334 00126274  7F E3 FB 78 */	mr r3, r31
/* 80129338 00126278  48 00 03 95 */	bl "getPosAndScale__Q34Game10EnemyStone8DrawInfoFP10Vector3<f>Pf"
/* 8012933C 0012627C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80129340 00126280  41 82 01 08 */	beq .L_80129448
/* 80129344 00126284  81 0D 92 30 */	lwz r8, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 80129348 00126288  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8012934C 0012628C  80 E1 00 30 */	lwz r7, 0x30(r1)
/* 80129350 00126290  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 80129354 00126294  80 C1 00 34 */	lwz r6, 0x34(r1)
/* 80129358 00126298  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 8012935C 0012629C  80 A1 00 38 */	lwz r5, 0x38(r1)
/* 80129360 001262A0  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 80129364 001262A4  C0 08 01 F8 */	lfs f0, 0x1f8(r8)
/* 80129368 001262A8  C0 21 00 08 */	lfs f1, 8(r1)
/* 8012936C 001262AC  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80129370 001262B0  EC 61 00 32 */	fmuls f3, f1, f0
/* 80129374 001262B4  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80129378 001262B8  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8012937C 001262BC  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80129380 001262C0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80129384 001262C4  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80129388 001262C8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8012938C 001262CC  D0 61 00 08 */	stfs f3, 8(r1)
/* 80129390 001262D0  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 80129394 001262D4  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 80129398 001262D8  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 8012939C 001262DC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801293A0 001262E0  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 801293A4 001262E4  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 801293A8 001262E8  80 03 00 04 */	lwz r0, 4(r3)
/* 801293AC 001262EC  2C 00 00 01 */	cmpwi r0, 1
/* 801293B0 001262F0  41 82 00 58 */	beq .L_80129408
/* 801293B4 001262F4  40 80 00 94 */	bge .L_80129448
/* 801293B8 001262F8  2C 00 00 00 */	cmpwi r0, 0
/* 801293BC 001262FC  40 80 00 08 */	bge .L_801293C4
/* 801293C0 00126300  48 00 00 88 */	b .L_80129448
.L_801293C4:
/* 801293C4 00126304  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801293C8 00126308  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 801293CC 0012630C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801293D0 00126310  3C 60 80 4F */	lis r3, __vt__Q23efx11TSekikaLOff@ha
/* 801293D4 00126314  90 01 00 24 */	stw r0, 0x24(r1)
/* 801293D8 00126318  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 801293DC 0012631C  38 C0 01 AB */	li r6, 0x1ab
/* 801293E0 00126320  38 A0 00 00 */	li r5, 0
/* 801293E4 00126324  90 01 00 24 */	stw r0, 0x24(r1)
/* 801293E8 00126328  38 03 86 C4 */	addi r0, r3, __vt__Q23efx11TSekikaLOff@l
/* 801293EC 0012632C  38 61 00 24 */	addi r3, r1, 0x24
/* 801293F0 00126330  38 81 00 3C */	addi r4, r1, 0x3c
/* 801293F4 00126334  B0 C1 00 28 */	sth r6, 0x28(r1)
/* 801293F8 00126338  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801293FC 0012633C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80129400 00126340  48 29 E8 61 */	bl create__Q23efx11TSekikaLOffFPQ23efx3Arg
/* 80129404 00126344  48 00 00 44 */	b .L_80129448
.L_80129408:
/* 80129408 00126348  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8012940C 0012634C  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 80129410 00126350  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80129414 00126354  3C 60 80 4F */	lis r3, __vt__Q23efx11TSekikaSOff@ha
/* 80129418 00126358  90 01 00 18 */	stw r0, 0x18(r1)
/* 8012941C 0012635C  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 80129420 00126360  38 C0 01 AD */	li r6, 0x1ad
/* 80129424 00126364  38 A0 00 00 */	li r5, 0
/* 80129428 00126368  90 01 00 18 */	stw r0, 0x18(r1)
/* 8012942C 0012636C  38 03 86 9C */	addi r0, r3, __vt__Q23efx11TSekikaSOff@l
/* 80129430 00126370  38 61 00 18 */	addi r3, r1, 0x18
/* 80129434 00126374  38 81 00 3C */	addi r4, r1, 0x3c
/* 80129438 00126378  B0 C1 00 1C */	sth r6, 0x1c(r1)
/* 8012943C 0012637C  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80129440 00126380  90 01 00 18 */	stw r0, 0x18(r1)
/* 80129444 00126384  48 29 E9 D5 */	bl create__Q23efx11TSekikaSOffFPQ23efx3Arg
.L_80129448:
/* 80129448 00126388  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8012944C 0012638C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80129450 00126390  7C 08 03 A6 */	mtlr r0
/* 80129454 00126394  38 21 00 60 */	addi r1, r1, 0x60
/* 80129458 00126398  4E 80 00 20 */	blr 
.endfn init__Q34Game10EnemyStone12FSMStateDeadFPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg

.fn makeMatrix__Q34Game10EnemyStone12FSMStateDeadFPQ34Game10EnemyStone8DrawInfoP7Matrixf, global
/* 8012945C 0012639C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80129460 001263A0  7C 08 02 A6 */	mflr r0
/* 80129464 001263A4  7C A3 2B 78 */	mr r3, r5
/* 80129468 001263A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012946C 001263AC  4B FC 0E 35 */	bl PSMTXIdentity
/* 80129470 001263B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80129474 001263B4  7C 08 03 A6 */	mtlr r0
/* 80129478 001263B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8012947C 001263BC  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game10EnemyStone12FSMStateDeadFPQ34Game10EnemyStone8DrawInfoP7Matrixf

.fn __ct__Q34Game10EnemyStone8DrawInfoFb, global
/* 80129480 001263C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80129484 001263C4  7C 08 02 A6 */	mflr r0
/* 80129488 001263C8  3C C0 80 4B */	lis r6, __vt__Q34Game10EnemyStone8DrawInfo@ha
/* 8012948C 001263CC  3C A0 80 4B */	lis r5, "__vt__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>"@ha
/* 80129490 001263D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80129494 001263D4  3C E0 80 4F */	lis r7, __vt__5CNode@ha
/* 80129498 001263D8  38 07 B5 28 */	addi r0, r7, __vt__5CNode@l
/* 8012949C 001263DC  39 00 00 00 */	li r8, 0
/* 801294A0 001263E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801294A4 001263E4  7C 7F 1B 78 */	mr r31, r3
/* 801294A8 001263E8  3C 60 80 4B */	lis r3, __vt__Q34Game10EnemyStone12StateMachine@ha
/* 801294AC 001263EC  38 E2 9C CC */	addi r7, r2, lbl_8051802C@sda21
/* 801294B0 001263F0  90 1F 00 00 */	stw r0, 0(r31)
/* 801294B4 001263F4  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801294B8 001263F8  38 C6 A1 D4 */	addi r6, r6, __vt__Q34Game10EnemyStone8DrawInfo@l
/* 801294BC 001263FC  38 A5 DC 80 */	addi r5, r5, "__vt__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>"@l
/* 801294C0 00126400  91 1F 00 10 */	stw r8, 0x10(r31)
/* 801294C4 00126404  38 80 FF FF */	li r4, -1
/* 801294C8 00126408  38 63 DD D8 */	addi r3, r3, __vt__Q34Game10EnemyStone12StateMachine@l
/* 801294CC 0012640C  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 801294D0 00126410  91 1F 00 0C */	stw r8, 0xc(r31)
/* 801294D4 00126414  91 1F 00 08 */	stw r8, 8(r31)
/* 801294D8 00126418  91 1F 00 04 */	stw r8, 4(r31)
/* 801294DC 0012641C  90 FF 00 14 */	stw r7, 0x14(r31)
/* 801294E0 00126420  90 DF 00 00 */	stw r6, 0(r31)
/* 801294E4 00126424  90 BF 00 18 */	stw r5, 0x18(r31)
/* 801294E8 00126428  90 9F 00 30 */	stw r4, 0x30(r31)
/* 801294EC 0012642C  90 7F 00 18 */	stw r3, 0x18(r31)
/* 801294F0 00126430  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 801294F4 00126434  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 801294F8 00126438  91 1F 00 40 */	stw r8, 0x40(r31)
/* 801294FC 0012643C  91 1F 00 44 */	stw r8, 0x44(r31)
/* 80129500 00126440  41 82 00 24 */	beq .L_80129524
/* 80129504 00126444  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 80129508 00126448  7F E4 FB 78 */	mr r4, r31
/* 8012950C 0012644C  38 64 00 18 */	addi r3, r4, 0x18
/* 80129510 00126450  81 8C 00 08 */	lwz r12, 8(r12)
/* 80129514 00126454  7D 89 03 A6 */	mtctr r12
/* 80129518 00126458  4E 80 04 21 */	bctrl 
/* 8012951C 0012645C  7F E3 FB 78 */	mr r3, r31
/* 80129520 00126460  48 00 00 1D */	bl reset__Q34Game10EnemyStone8DrawInfoFv
.L_80129524:
/* 80129524 00126464  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80129528 00126468  7F E3 FB 78 */	mr r3, r31
/* 8012952C 0012646C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80129530 00126470  7C 08 03 A6 */	mtlr r0
/* 80129534 00126474  38 21 00 10 */	addi r1, r1, 0x10
/* 80129538 00126478  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10EnemyStone8DrawInfoFb

.fn reset__Q34Game10EnemyStone8DrawInfoFv, global
/* 8012953C 0012647C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80129540 00126480  7C 08 02 A6 */	mflr r0
/* 80129544 00126484  90 01 00 14 */	stw r0, 0x14(r1)
/* 80129548 00126488  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012954C 0012648C  7C 7F 1B 78 */	mr r31, r3
/* 80129550 00126490  48 2E 80 81 */	bl del__5CNodeFv
/* 80129554 00126494  38 00 00 00 */	li r0, 0
/* 80129558 00126498  C0 02 9C 68 */	lfs f0, lbl_80517FC8@sda21(r2)
/* 8012955C 0012649C  90 1F 00 40 */	stw r0, 0x40(r31)
/* 80129560 001264A0  38 7F 00 18 */	addi r3, r31, 0x18
/* 80129564 001264A4  7F E4 FB 78 */	mr r4, r31
/* 80129568 001264A8  38 A0 00 00 */	li r5, 0
/* 8012956C 001264AC  90 1F 00 44 */	stw r0, 0x44(r31)
/* 80129570 001264B0  38 C0 00 00 */	li r6, 0
/* 80129574 001264B4  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 80129578 001264B8  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 8012957C 001264BC  81 9F 00 18 */	lwz r12, 0x18(r31)
/* 80129580 001264C0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80129584 001264C4  7D 89 03 A6 */	mtctr r12
/* 80129588 001264C8  4E 80 04 21 */	bctrl 
/* 8012958C 001264CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80129590 001264D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80129594 001264D4  7C 08 03 A6 */	mtlr r0
/* 80129598 001264D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8012959C 001264DC  4E 80 00 20 */	blr 
.endfn reset__Q34Game10EnemyStone8DrawInfoFv

.fn "start__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg", weak
/* 801295A0 001264E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801295A4 001264E4  7C 08 02 A6 */	mflr r0
/* 801295A8 001264E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801295AC 001264EC  38 00 00 00 */	li r0, 0
/* 801295B0 001264F0  90 04 00 34 */	stw r0, 0x34(r4)
/* 801295B4 001264F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801295B8 001264F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801295BC 001264FC  7D 89 03 A6 */	mtctr r12
/* 801295C0 00126500  4E 80 04 21 */	bctrl 
/* 801295C4 00126504  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801295C8 00126508  7C 08 03 A6 */	mtlr r0
/* 801295CC 0012650C  38 21 00 10 */	addi r1, r1, 0x10
/* 801295D0 00126510  4E 80 00 20 */	blr 
.endfn "start__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"

.fn update__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase, global
/* 801295D4 00126514  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801295D8 00126518  7C 08 02 A6 */	mflr r0
/* 801295DC 0012651C  7C 65 1B 78 */	mr r5, r3
/* 801295E0 00126520  90 01 00 14 */	stw r0, 0x14(r1)
/* 801295E4 00126524  38 65 00 18 */	addi r3, r5, 0x18
/* 801295E8 00126528  90 8D 92 30 */	stw r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 801295EC 0012652C  7C A4 2B 78 */	mr r4, r5
/* 801295F0 00126530  81 85 00 18 */	lwz r12, 0x18(r5)
/* 801295F4 00126534  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801295F8 00126538  7D 89 03 A6 */	mtctr r12
/* 801295FC 0012653C  4E 80 04 21 */	bctrl 
/* 80129600 00126540  38 00 00 00 */	li r0, 0
/* 80129604 00126544  90 0D 92 30 */	stw r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 80129608 00126548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012960C 0012654C  7C 08 03 A6 */	mtlr r0
/* 80129610 00126550  38 21 00 10 */	addi r1, r1, 0x10
/* 80129614 00126554  4E 80 00 20 */	blr 
.endfn update__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase

.fn makeMatrix__Q34Game10EnemyStone8DrawInfoFP7Matrixfb, global
/* 80129618 00126558  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8012961C 0012655C  7C 08 02 A6 */	mflr r0
/* 80129620 00126560  90 01 00 54 */	stw r0, 0x54(r1)
/* 80129624 00126564  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80129628 00126568  3B E0 00 01 */	li r31, 1
/* 8012962C 0012656C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80129630 00126570  7C BE 2B 78 */	mr r30, r5
/* 80129634 00126574  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80129638 00126578  7C 9D 23 78 */	mr r29, r4
/* 8012963C 0012657C  93 81 00 40 */	stw r28, 0x40(r1)
/* 80129640 00126580  7C 7C 1B 78 */	mr r28, r3
/* 80129644 00126584  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80129648 00126588  28 03 00 00 */	cmplwi r3, 0
/* 8012964C 0012658C  41 82 00 4C */	beq .L_80129698
/* 80129650 00126590  80 9C 00 40 */	lwz r4, 0x40(r28)
/* 80129654 00126594  7F A5 EB 78 */	mr r5, r29
/* 80129658 00126598  38 84 00 08 */	addi r4, r4, 8
/* 8012965C 0012659C  4B FC 0C A5 */	bl PSMTXConcat
/* 80129660 001265A0  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80129664 001265A4  41 82 00 38 */	beq .L_8012969C
/* 80129668 001265A8  38 7C 00 18 */	addi r3, r28, 0x18
/* 8012966C 001265AC  7F 84 E3 78 */	mr r4, r28
/* 80129670 001265B0  81 9C 00 18 */	lwz r12, 0x18(r28)
/* 80129674 001265B4  38 A1 00 08 */	addi r5, r1, 8
/* 80129678 001265B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8012967C 001265BC  7D 89 03 A6 */	mtctr r12
/* 80129680 001265C0  4E 80 04 21 */	bctrl 
/* 80129684 001265C4  7F A3 EB 78 */	mr r3, r29
/* 80129688 001265C8  7F A5 EB 78 */	mr r5, r29
/* 8012968C 001265CC  38 81 00 08 */	addi r4, r1, 8
/* 80129690 001265D0  4B FC 0C 71 */	bl PSMTXConcat
/* 80129694 001265D4  48 00 00 08 */	b .L_8012969C
.L_80129698:
/* 80129698 001265D8  3B E0 00 00 */	li r31, 0
.L_8012969C:
/* 8012969C 001265DC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801296A0 001265E0  7F E3 FB 78 */	mr r3, r31
/* 801296A4 001265E4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801296A8 001265E8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801296AC 001265EC  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 801296B0 001265F0  83 81 00 40 */	lwz r28, 0x40(r1)
/* 801296B4 001265F4  7C 08 03 A6 */	mtlr r0
/* 801296B8 001265F8  38 21 00 50 */	addi r1, r1, 0x50
/* 801296BC 001265FC  4E 80 00 20 */	blr 
.endfn makeMatrix__Q34Game10EnemyStone8DrawInfoFP7Matrixfb

.fn getStateID__Q34Game10EnemyStone8DrawInfoFv, global
/* 801296C0 00126600  80 63 00 34 */	lwz r3, 0x34(r3)
/* 801296C4 00126604  80 63 00 04 */	lwz r3, 4(r3)
/* 801296C8 00126608  4E 80 00 20 */	blr 
.endfn getStateID__Q34Game10EnemyStone8DrawInfoFv

.fn "getPosAndScale__Q34Game10EnemyStone8DrawInfoFP10Vector3<f>Pf", global
/* 801296CC 0012660C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801296D0 00126610  7C 08 02 A6 */	mflr r0
/* 801296D4 00126614  90 01 00 54 */	stw r0, 0x54(r1)
/* 801296D8 00126618  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801296DC 0012661C  3B E0 00 01 */	li r31, 1
/* 801296E0 00126620  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801296E4 00126624  7C BE 2B 78 */	mr r30, r5
/* 801296E8 00126628  93 A1 00 44 */	stw r29, 0x44(r1)
/* 801296EC 0012662C  7C 9D 23 78 */	mr r29, r4
/* 801296F0 00126630  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801296F4 00126634  28 00 00 00 */	cmplwi r0, 0
/* 801296F8 00126638  41 82 00 1C */	beq .L_80129714
/* 801296FC 0012663C  80 83 00 40 */	lwz r4, 0x40(r3)
/* 80129700 00126640  7C 03 03 78 */	mr r3, r0
/* 80129704 00126644  38 A1 00 08 */	addi r5, r1, 8
/* 80129708 00126648  38 84 00 08 */	addi r4, r4, 8
/* 8012970C 0012664C  4B FC 0B F5 */	bl PSMTXConcat
/* 80129710 00126650  48 00 00 08 */	b .L_80129718
.L_80129714:
/* 80129714 00126654  3B E0 00 00 */	li r31, 0
.L_80129718:
/* 80129718 00126658  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8012971C 0012665C  41 82 00 A4 */	beq .L_801297C0
/* 80129720 00126660  C0 22 9C 68 */	lfs f1, lbl_80517FC8@sda21(r2)
/* 80129724 00126664  38 00 00 03 */	li r0, 3
/* 80129728 00126668  38 81 00 18 */	addi r4, r1, 0x18
/* 8012972C 0012666C  38 A1 00 28 */	addi r5, r1, 0x28
/* 80129730 00126670  D0 3E 00 00 */	stfs f1, 0(r30)
/* 80129734 00126674  38 61 00 08 */	addi r3, r1, 8
/* 80129738 00126678  7C 09 03 A6 */	mtctr r0
.L_8012973C:
/* 8012973C 0012667C  C0 04 00 00 */	lfs f0, 0(r4)
/* 80129740 00126680  C0 45 00 00 */	lfs f2, 0(r5)
/* 80129744 00126684  EC 60 00 32 */	fmuls f3, f0, f0
/* 80129748 00126688  C0 03 00 00 */	lfs f0, 0(r3)
/* 8012974C 0012668C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80129750 00126690  EC 00 18 3A */	fmadds f0, f0, f0, f3
/* 80129754 00126694  EC 42 00 2A */	fadds f2, f2, f0
/* 80129758 00126698  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8012975C 0012669C  40 81 00 14 */	ble .L_80129770
/* 80129760 001266A0  40 81 00 14 */	ble .L_80129774
/* 80129764 001266A4  FC 00 10 34 */	frsqrte f0, f2
/* 80129768 001266A8  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8012976C 001266AC  48 00 00 08 */	b .L_80129774
.L_80129770:
/* 80129770 001266B0  FC 40 08 90 */	fmr f2, f1
.L_80129774:
/* 80129774 001266B4  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80129778 001266B8  38 63 00 04 */	addi r3, r3, 4
/* 8012977C 001266BC  38 84 00 04 */	addi r4, r4, 4
/* 80129780 001266C0  38 A5 00 04 */	addi r5, r5, 4
/* 80129784 001266C4  EC 00 10 2A */	fadds f0, f0, f2
/* 80129788 001266C8  D0 1E 00 00 */	stfs f0, 0(r30)
/* 8012978C 001266CC  42 00 FF B0 */	bdnz .L_8012973C
/* 80129790 001266D0  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80129794 001266D4  38 60 00 01 */	li r3, 1
/* 80129798 001266D8  C0 02 9C D0 */	lfs f0, lbl_80518030@sda21(r2)
/* 8012979C 001266DC  EC 01 00 24 */	fdivs f0, f1, f0
/* 801297A0 001266E0  D0 1E 00 00 */	stfs f0, 0(r30)
/* 801297A4 001266E4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801297A8 001266E8  D0 1D 00 00 */	stfs f0, 0(r29)
/* 801297AC 001266EC  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 801297B0 001266F0  D0 1D 00 04 */	stfs f0, 4(r29)
/* 801297B4 001266F4  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 801297B8 001266F8  D0 1D 00 08 */	stfs f0, 8(r29)
/* 801297BC 001266FC  48 00 00 08 */	b .L_801297C4
.L_801297C0:
/* 801297C0 00126700  38 60 00 00 */	li r3, 0
.L_801297C4:
/* 801297C4 00126704  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801297C8 00126708  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801297CC 0012670C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801297D0 00126710  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 801297D4 00126714  7C 08 03 A6 */	mtlr r0
/* 801297D8 00126718  38 21 00 50 */	addi r1, r1, 0x50
/* 801297DC 0012671C  4E 80 00 20 */	blr 
.endfn "getPosAndScale__Q34Game10EnemyStone8DrawInfoFP10Vector3<f>Pf"

.fn appear__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBasef, global
/* 801297E0 00126720  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801297E4 00126724  7C 08 02 A6 */	mflr r0
/* 801297E8 00126728  38 A0 00 01 */	li r5, 1
/* 801297EC 0012672C  38 C0 00 00 */	li r6, 0
/* 801297F0 00126730  90 01 00 14 */	stw r0, 0x14(r1)
/* 801297F4 00126734  90 8D 92 30 */	stw r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 801297F8 00126738  7C 64 1B 78 */	mr r4, r3
/* 801297FC 0012673C  38 64 00 18 */	addi r3, r4, 0x18
/* 80129800 00126740  D0 24 00 38 */	stfs f1, 0x38(r4)
/* 80129804 00126744  81 84 00 18 */	lwz r12, 0x18(r4)
/* 80129808 00126748  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8012980C 0012674C  7D 89 03 A6 */	mtctr r12
/* 80129810 00126750  4E 80 04 21 */	bctrl 
/* 80129814 00126754  38 00 00 00 */	li r0, 0
/* 80129818 00126758  90 0D 92 30 */	stw r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 8012981C 0012675C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80129820 00126760  7C 08 03 A6 */	mtlr r0
/* 80129824 00126764  38 21 00 10 */	addi r1, r1, 0x10
/* 80129828 00126768  4E 80 00 20 */	blr 
.endfn appear__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBasef

.fn fit__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase, global
/* 8012982C 0012676C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80129830 00126770  7C 08 02 A6 */	mflr r0
/* 80129834 00126774  7C 66 1B 78 */	mr r6, r3
/* 80129838 00126778  38 A0 00 03 */	li r5, 3
/* 8012983C 0012677C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80129840 00126780  38 66 00 18 */	addi r3, r6, 0x18
/* 80129844 00126784  90 8D 92 30 */	stw r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 80129848 00126788  7C C4 33 78 */	mr r4, r6
/* 8012984C 0012678C  81 86 00 18 */	lwz r12, 0x18(r6)
/* 80129850 00126790  38 C0 00 00 */	li r6, 0
/* 80129854 00126794  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80129858 00126798  7D 89 03 A6 */	mtctr r12
/* 8012985C 0012679C  4E 80 04 21 */	bctrl 
/* 80129860 001267A0  38 00 00 00 */	li r0, 0
/* 80129864 001267A4  90 0D 92 30 */	stw r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 80129868 001267A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012986C 001267AC  7C 08 03 A6 */	mtlr r0
/* 80129870 001267B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80129874 001267B4  4E 80 00 20 */	blr 
.endfn fit__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase

.fn shake__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBasef, global
/* 80129878 001267B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012987C 001267BC  7C 08 02 A6 */	mflr r0
/* 80129880 001267C0  38 A0 00 05 */	li r5, 5
/* 80129884 001267C4  38 C0 00 00 */	li r6, 0
/* 80129888 001267C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012988C 001267CC  90 8D 92 30 */	stw r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 80129890 001267D0  7C 64 1B 78 */	mr r4, r3
/* 80129894 001267D4  38 64 00 18 */	addi r3, r4, 0x18
/* 80129898 001267D8  D0 24 00 38 */	stfs f1, 0x38(r4)
/* 8012989C 001267DC  81 84 00 18 */	lwz r12, 0x18(r4)
/* 801298A0 001267E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801298A4 001267E4  7D 89 03 A6 */	mtctr r12
/* 801298A8 001267E8  4E 80 04 21 */	bctrl 
/* 801298AC 001267EC  38 00 00 00 */	li r0, 0
/* 801298B0 001267F0  90 0D 92 30 */	stw r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 801298B4 001267F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801298B8 001267F8  7C 08 03 A6 */	mtlr r0
/* 801298BC 001267FC  38 21 00 10 */	addi r1, r1, 0x10
/* 801298C0 00126800  4E 80 00 20 */	blr 
.endfn shake__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBasef

.fn disappear__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase, global
/* 801298C4 00126804  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801298C8 00126808  7C 08 02 A6 */	mflr r0
/* 801298CC 0012680C  7C 66 1B 78 */	mr r6, r3
/* 801298D0 00126810  38 A0 00 07 */	li r5, 7
/* 801298D4 00126814  90 01 00 14 */	stw r0, 0x14(r1)
/* 801298D8 00126818  38 66 00 18 */	addi r3, r6, 0x18
/* 801298DC 0012681C  90 8D 92 30 */	stw r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 801298E0 00126820  7C C4 33 78 */	mr r4, r6
/* 801298E4 00126824  81 86 00 18 */	lwz r12, 0x18(r6)
/* 801298E8 00126828  38 C0 00 00 */	li r6, 0
/* 801298EC 0012682C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801298F0 00126830  7D 89 03 A6 */	mtctr r12
/* 801298F4 00126834  4E 80 04 21 */	bctrl 
/* 801298F8 00126838  38 00 00 00 */	li r0, 0
/* 801298FC 0012683C  90 0D 92 30 */	stw r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 80129900 00126840  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80129904 00126844  7C 08 03 A6 */	mtlr r0
/* 80129908 00126848  38 21 00 10 */	addi r1, r1, 0x10
/* 8012990C 0012684C  4E 80 00 20 */	blr 
.endfn disappear__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase

.fn dead__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase, global
/* 80129910 00126850  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80129914 00126854  7C 08 02 A6 */	mflr r0
/* 80129918 00126858  7C 66 1B 78 */	mr r6, r3
/* 8012991C 0012685C  38 A0 00 08 */	li r5, 8
/* 80129920 00126860  90 01 00 14 */	stw r0, 0x14(r1)
/* 80129924 00126864  38 66 00 18 */	addi r3, r6, 0x18
/* 80129928 00126868  90 8D 92 30 */	stw r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 8012992C 0012686C  7C C4 33 78 */	mr r4, r6
/* 80129930 00126870  81 86 00 18 */	lwz r12, 0x18(r6)
/* 80129934 00126874  38 C0 00 00 */	li r6, 0
/* 80129938 00126878  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8012993C 0012687C  7D 89 03 A6 */	mtctr r12
/* 80129940 00126880  4E 80 04 21 */	bctrl 
/* 80129944 00126884  38 00 00 00 */	li r0, 0
/* 80129948 00126888  90 0D 92 30 */	stw r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
/* 8012994C 0012688C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80129950 00126890  7C 08 03 A6 */	mtlr r0
/* 80129954 00126894  38 21 00 10 */	addi r1, r1, 0x10
/* 80129958 00126898  4E 80 00 20 */	blr 
.endfn dead__Q34Game10EnemyStone8DrawInfoFPQ24Game9EnemyBase

.fn "init__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg", weak
/* 8012995C 0012689C  4E 80 00 20 */	blr 
.endfn "init__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoPQ24Game8StateArg"

.fn "exec__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo", weak
/* 80129960 001268A0  4E 80 00 20 */	blr 
.endfn "exec__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"

.fn "cleanup__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo", weak
/* 80129964 001268A4  4E 80 00 20 */	blr 
.endfn "cleanup__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"

.fn "resume__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo", weak
/* 80129968 001268A8  4E 80 00 20 */	blr 
.endfn "resume__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"

.fn "restart__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo", weak
/* 8012996C 001268AC  4E 80 00 20 */	blr 
.endfn "restart__Q24Game38FSMState<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"

.fn "init__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo", weak
/* 80129970 001268B0  4E 80 00 20 */	blr 
.endfn "init__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"

.fn "exec__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo", weak
/* 80129974 001268B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80129978 001268B8  7C 08 02 A6 */	mflr r0
/* 8012997C 001268BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80129980 001268C0  80 64 00 34 */	lwz r3, 0x34(r4)
/* 80129984 001268C4  28 03 00 00 */	cmplwi r3, 0
/* 80129988 001268C8  41 82 00 14 */	beq .L_8012999C
/* 8012998C 001268CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80129990 001268D0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80129994 001268D4  7D 89 03 A6 */	mtctr r12
/* 80129998 001268D8  4E 80 04 21 */	bctrl 
.L_8012999C:
/* 8012999C 001268DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801299A0 001268E0  7C 08 03 A6 */	mtlr r0
/* 801299A4 001268E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801299A8 001268E8  4E 80 00 20 */	blr 
.endfn "exec__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfo"

.fn "create__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>Fi", weak
/* 801299AC 001268EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801299B0 001268F0  7C 08 02 A6 */	mflr r0
/* 801299B4 001268F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801299B8 001268F8  38 00 00 00 */	li r0, 0
/* 801299BC 001268FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801299C0 00126900  7C 7F 1B 78 */	mr r31, r3
/* 801299C4 00126904  90 83 00 0C */	stw r4, 0xc(r3)
/* 801299C8 00126908  90 03 00 08 */	stw r0, 8(r3)
/* 801299CC 0012690C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801299D0 00126910  54 03 10 3A */	slwi r3, r0, 2
/* 801299D4 00126914  4B EF A5 D9 */	bl __nwa__FUl
/* 801299D8 00126918  90 7F 00 04 */	stw r3, 4(r31)
/* 801299DC 0012691C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801299E0 00126920  54 03 10 3A */	slwi r3, r0, 2
/* 801299E4 00126924  4B EF A5 C9 */	bl __nwa__FUl
/* 801299E8 00126928  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801299EC 0012692C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801299F0 00126930  54 03 10 3A */	slwi r3, r0, 2
/* 801299F4 00126934  4B EF A5 B9 */	bl __nwa__FUl
/* 801299F8 00126938  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801299FC 0012693C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80129A00 00126940  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80129A04 00126944  7C 08 03 A6 */	mtlr r0
/* 80129A08 00126948  38 21 00 10 */	addi r1, r1, 0x10
/* 80129A0C 0012694C  4E 80 00 20 */	blr 
.endfn "create__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>Fi"

.fn "transit__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg", weak
/* 80129A10 00126950  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80129A14 00126954  7C 08 02 A6 */	mflr r0
/* 80129A18 00126958  90 01 00 24 */	stw r0, 0x24(r1)
/* 80129A1C 0012695C  54 A0 10 3A */	slwi r0, r5, 2
/* 80129A20 00126960  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80129A24 00126964  7C 7B 1B 78 */	mr r27, r3
/* 80129A28 00126968  7C 9C 23 78 */	mr r28, r4
/* 80129A2C 0012696C  7C DD 33 78 */	mr r29, r6
/* 80129A30 00126970  83 C4 00 34 */	lwz r30, 0x34(r4)
/* 80129A34 00126974  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80129A38 00126978  28 1E 00 00 */	cmplwi r30, 0
/* 80129A3C 0012697C  7F E3 00 2E */	lwzx r31, r3, r0
/* 80129A40 00126980  41 82 00 20 */	beq .L_80129A60
/* 80129A44 00126984  7F C3 F3 78 */	mr r3, r30
/* 80129A48 00126988  81 9E 00 00 */	lwz r12, 0(r30)
/* 80129A4C 0012698C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80129A50 00126990  7D 89 03 A6 */	mtctr r12
/* 80129A54 00126994  4E 80 04 21 */	bctrl 
/* 80129A58 00126998  80 1E 00 04 */	lwz r0, 4(r30)
/* 80129A5C 0012699C  90 1B 00 18 */	stw r0, 0x18(r27)
.L_80129A60:
/* 80129A60 001269A0  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 80129A64 001269A4  7C 1F 00 00 */	cmpw r31, r0
/* 80129A68 001269A8  41 80 00 08 */	blt .L_80129A70
.L_80129A6C:
/* 80129A6C 001269AC  48 00 00 00 */	b .L_80129A6C
.L_80129A70:
/* 80129A70 001269B0  80 7B 00 04 */	lwz r3, 4(r27)
/* 80129A74 001269B4  57 E0 10 3A */	slwi r0, r31, 2
/* 80129A78 001269B8  7F 84 E3 78 */	mr r4, r28
/* 80129A7C 001269BC  7F A5 EB 78 */	mr r5, r29
/* 80129A80 001269C0  7C 63 00 2E */	lwzx r3, r3, r0
/* 80129A84 001269C4  90 7C 00 34 */	stw r3, 0x34(r28)
/* 80129A88 001269C8  81 83 00 00 */	lwz r12, 0(r3)
/* 80129A8C 001269CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80129A90 001269D0  7D 89 03 A6 */	mtctr r12
/* 80129A94 001269D4  4E 80 04 21 */	bctrl 
/* 80129A98 001269D8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80129A9C 001269DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80129AA0 001269E0  7C 08 03 A6 */	mtlr r0
/* 80129AA4 001269E4  38 21 00 20 */	addi r1, r1, 0x20
/* 80129AA8 001269E8  4E 80 00 20 */	blr 
.endfn "transit__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ34Game10EnemyStone8DrawInfoiPQ24Game8StateArg"

.fn "registerState__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ24Game38FSMState<Q34Game10EnemyStone8DrawInfo>", weak
/* 80129AAC 001269EC  80 C3 00 08 */	lwz r6, 8(r3)
/* 80129AB0 001269F0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80129AB4 001269F4  7C 06 00 00 */	cmpw r6, r0
/* 80129AB8 001269F8  4C 80 00 20 */	bgelr 
/* 80129ABC 001269FC  80 A3 00 04 */	lwz r5, 4(r3)
/* 80129AC0 00126A00  54 C0 10 3A */	slwi r0, r6, 2
/* 80129AC4 00126A04  7C 85 01 2E */	stwx r4, r5, r0
/* 80129AC8 00126A08  80 A4 00 04 */	lwz r5, 4(r4)
/* 80129ACC 00126A0C  2C 05 00 00 */	cmpwi r5, 0
/* 80129AD0 00126A10  41 80 00 10 */	blt .L_80129AE0
/* 80129AD4 00126A14  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80129AD8 00126A18  7C 05 00 00 */	cmpw r5, r0
/* 80129ADC 00126A1C  41 80 00 0C */	blt .L_80129AE8
.L_80129AE0:
/* 80129AE0 00126A20  38 00 00 00 */	li r0, 0
/* 80129AE4 00126A24  48 00 00 08 */	b .L_80129AEC
.L_80129AE8:
/* 80129AE8 00126A28  38 00 00 01 */	li r0, 1
.L_80129AEC:
/* 80129AEC 00126A2C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80129AF0 00126A30  4D 82 00 20 */	beqlr 
/* 80129AF4 00126A34  90 64 00 08 */	stw r3, 8(r4)
/* 80129AF8 00126A38  80 03 00 08 */	lwz r0, 8(r3)
/* 80129AFC 00126A3C  80 C4 00 04 */	lwz r6, 4(r4)
/* 80129B00 00126A40  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 80129B04 00126A44  54 00 10 3A */	slwi r0, r0, 2
/* 80129B08 00126A48  7C C5 01 2E */	stwx r6, r5, r0
/* 80129B0C 00126A4C  80 04 00 04 */	lwz r0, 4(r4)
/* 80129B10 00126A50  80 A3 00 08 */	lwz r5, 8(r3)
/* 80129B14 00126A54  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80129B18 00126A58  54 00 10 3A */	slwi r0, r0, 2
/* 80129B1C 00126A5C  7C A4 01 2E */	stwx r5, r4, r0
/* 80129B20 00126A60  80 83 00 08 */	lwz r4, 8(r3)
/* 80129B24 00126A64  38 04 00 01 */	addi r0, r4, 1
/* 80129B28 00126A68  90 03 00 08 */	stw r0, 8(r3)
/* 80129B2C 00126A6C  4E 80 00 20 */	blr 
.endfn "registerState__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>FPQ24Game38FSMState<Q34Game10EnemyStone8DrawInfo>"
