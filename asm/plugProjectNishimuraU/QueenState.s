.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_QueenState_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game5Queen9StateBorn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Queen9StateBornFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Queen9StateBornFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Queen9StateBornFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Queen9StateBorn
.obj __vt__Q34Game5Queen12StateRolling, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Queen12StateRollingFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Queen12StateRollingFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Queen12StateRollingFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Queen12StateRolling
.obj __vt__Q34Game5Queen10StateFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Queen10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Queen10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Queen10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Queen10StateFlick
.obj __vt__Q34Game5Queen11StateDamage, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Queen11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Queen11StateDamageFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Queen11StateDamageFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Queen11StateDamage
.obj __vt__Q34Game5Queen9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Queen9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Queen9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Queen9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Queen9StateWait
.obj __vt__Q34Game5Queen10StateSleep, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Queen10StateSleepFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Queen10StateSleepFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Queen10StateSleepFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Queen10StateSleep
.obj __vt__Q34Game5Queen9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Queen9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Queen9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Queen9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Queen9StateDead
.obj __vt__Q34Game5Queen5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Queen5State
.obj __vt__Q34Game5Queen3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Queen3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game5Queen3FSM

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051B798, local
	.asciz "dead"
.endobj lbl_8051B798
.balign 4
.obj lbl_8051B7A0, local
	.asciz "sleep"
.endobj lbl_8051B7A0
.balign 4
.obj lbl_8051B7A8, local
	.asciz "wait"
.endobj lbl_8051B7A8
.balign 4
.obj lbl_8051B7B0, local
	.asciz "damage"
.endobj lbl_8051B7B0
.balign 4
.obj lbl_8051B7B8, local
	.asciz "flick"
.endobj lbl_8051B7B8
.balign 4
.obj lbl_8051B7C0, local
	.asciz "rolling"
.endobj lbl_8051B7C0
.balign 4
.obj lbl_8051B7C8, local
	.asciz "born"
.endobj lbl_8051B7C8
.balign 4
.obj lbl_8051B7D0, local
	.float 0.0
.endobj lbl_8051B7D0
.obj lbl_8051B7D4, local
	.float 30.0
.endobj lbl_8051B7D4
.balign 4
.obj lbl_8051B7D8, local
	.asciz "left"
.endobj lbl_8051B7D8
.balign 4
.obj lbl_8051B7E0, local # half-pi
	.float 1.5707964
.endobj lbl_8051B7E0
.obj lbl_8051B7E4, local # negative half-pi
	.float -1.5707964
.endobj lbl_8051B7E4
.obj lbl_8051B7E8, local
	.float 325.9493
.endobj lbl_8051B7E8
.obj lbl_8051B7EC, local
	.float -325.9493
.endobj lbl_8051B7EC
.obj lbl_8051B7F0, local
	.float 10.0
.endobj lbl_8051B7F0
.obj lbl_8051B7F4, local
	.float 1.0
.endobj lbl_8051B7F4
.obj lbl_8051B7F8, local
	.float -1000.0
.endobj lbl_8051B7F8
.obj lbl_8051B7FC, local
	.float 50.0
.endobj lbl_8051B7FC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game5Queen3FSMFPQ24Game9EnemyBase, global
/* 80287B70 00284AB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80287B74 00284AB4  7C 08 02 A6 */	mflr r0
/* 80287B78 00284AB8  38 80 00 07 */	li r4, 7
/* 80287B7C 00284ABC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80287B80 00284AC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80287B84 00284AC4  7C 7F 1B 78 */	mr r31, r3
/* 80287B88 00284AC8  4B EA 8C DD */	bl create__Q24Game17EnemyStateMachineFi
/* 80287B8C 00284ACC  38 60 00 10 */	li r3, 0x10
/* 80287B90 00284AD0  4B D9 C3 15 */	bl __nw__FUl
/* 80287B94 00284AD4  7C 64 1B 79 */	or. r4, r3, r3
/* 80287B98 00284AD8  41 82 00 3C */	beq .L_80287BD4
/* 80287B9C 00284ADC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80287BA0 00284AE0  3C A0 80 4D */	lis r5, __vt__Q34Game5Queen5State@ha
/* 80287BA4 00284AE4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80287BA8 00284AE8  3C 60 80 4D */	lis r3, __vt__Q34Game5Queen9StateDead@ha
/* 80287BAC 00284AEC  90 04 00 00 */	stw r0, 0(r4)
/* 80287BB0 00284AF0  38 E0 00 00 */	li r7, 0
/* 80287BB4 00284AF4  38 C5 9B C0 */	addi r6, r5, __vt__Q34Game5Queen5State@l
/* 80287BB8 00284AF8  38 A2 D4 38 */	addi r5, r2, lbl_8051B798@sda21
/* 80287BBC 00284AFC  90 E4 00 04 */	stw r7, 4(r4)
/* 80287BC0 00284B00  38 03 9B 9C */	addi r0, r3, __vt__Q34Game5Queen9StateDead@l
/* 80287BC4 00284B04  90 E4 00 08 */	stw r7, 8(r4)
/* 80287BC8 00284B08  90 C4 00 00 */	stw r6, 0(r4)
/* 80287BCC 00284B0C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80287BD0 00284B10  90 04 00 00 */	stw r0, 0(r4)
.L_80287BD4:
/* 80287BD4 00284B14  7F E3 FB 78 */	mr r3, r31
/* 80287BD8 00284B18  4B EA 8D 31 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80287BDC 00284B1C  38 60 00 10 */	li r3, 0x10
/* 80287BE0 00284B20  4B D9 C2 C5 */	bl __nw__FUl
/* 80287BE4 00284B24  7C 64 1B 79 */	or. r4, r3, r3
/* 80287BE8 00284B28  41 82 00 40 */	beq .L_80287C28
/* 80287BEC 00284B2C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80287BF0 00284B30  3C A0 80 4D */	lis r5, __vt__Q34Game5Queen5State@ha
/* 80287BF4 00284B34  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80287BF8 00284B38  3C 60 80 4D */	lis r3, __vt__Q34Game5Queen10StateSleep@ha
/* 80287BFC 00284B3C  90 04 00 00 */	stw r0, 0(r4)
/* 80287C00 00284B40  38 00 00 01 */	li r0, 1
/* 80287C04 00284B44  38 E0 00 00 */	li r7, 0
/* 80287C08 00284B48  38 C5 9B C0 */	addi r6, r5, __vt__Q34Game5Queen5State@l
/* 80287C0C 00284B4C  90 04 00 04 */	stw r0, 4(r4)
/* 80287C10 00284B50  38 A2 D4 40 */	addi r5, r2, lbl_8051B7A0@sda21
/* 80287C14 00284B54  38 03 9B 78 */	addi r0, r3, __vt__Q34Game5Queen10StateSleep@l
/* 80287C18 00284B58  90 E4 00 08 */	stw r7, 8(r4)
/* 80287C1C 00284B5C  90 C4 00 00 */	stw r6, 0(r4)
/* 80287C20 00284B60  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80287C24 00284B64  90 04 00 00 */	stw r0, 0(r4)
.L_80287C28:
/* 80287C28 00284B68  7F E3 FB 78 */	mr r3, r31
/* 80287C2C 00284B6C  4B EA 8C DD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80287C30 00284B70  38 60 00 10 */	li r3, 0x10
/* 80287C34 00284B74  4B D9 C2 71 */	bl __nw__FUl
/* 80287C38 00284B78  7C 64 1B 79 */	or. r4, r3, r3
/* 80287C3C 00284B7C  41 82 00 40 */	beq .L_80287C7C
/* 80287C40 00284B80  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80287C44 00284B84  3C A0 80 4D */	lis r5, __vt__Q34Game5Queen5State@ha
/* 80287C48 00284B88  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80287C4C 00284B8C  3C 60 80 4D */	lis r3, __vt__Q34Game5Queen9StateWait@ha
/* 80287C50 00284B90  90 04 00 00 */	stw r0, 0(r4)
/* 80287C54 00284B94  38 00 00 02 */	li r0, 2
/* 80287C58 00284B98  38 E0 00 00 */	li r7, 0
/* 80287C5C 00284B9C  38 C5 9B C0 */	addi r6, r5, __vt__Q34Game5Queen5State@l
/* 80287C60 00284BA0  90 04 00 04 */	stw r0, 4(r4)
/* 80287C64 00284BA4  38 A2 D4 48 */	addi r5, r2, lbl_8051B7A8@sda21
/* 80287C68 00284BA8  38 03 9B 54 */	addi r0, r3, __vt__Q34Game5Queen9StateWait@l
/* 80287C6C 00284BAC  90 E4 00 08 */	stw r7, 8(r4)
/* 80287C70 00284BB0  90 C4 00 00 */	stw r6, 0(r4)
/* 80287C74 00284BB4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80287C78 00284BB8  90 04 00 00 */	stw r0, 0(r4)
.L_80287C7C:
/* 80287C7C 00284BBC  7F E3 FB 78 */	mr r3, r31
/* 80287C80 00284BC0  4B EA 8C 89 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80287C84 00284BC4  38 60 00 10 */	li r3, 0x10
/* 80287C88 00284BC8  4B D9 C2 1D */	bl __nw__FUl
/* 80287C8C 00284BCC  7C 64 1B 79 */	or. r4, r3, r3
/* 80287C90 00284BD0  41 82 00 40 */	beq .L_80287CD0
/* 80287C94 00284BD4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80287C98 00284BD8  3C A0 80 4D */	lis r5, __vt__Q34Game5Queen5State@ha
/* 80287C9C 00284BDC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80287CA0 00284BE0  3C 60 80 4D */	lis r3, __vt__Q34Game5Queen11StateDamage@ha
/* 80287CA4 00284BE4  90 04 00 00 */	stw r0, 0(r4)
/* 80287CA8 00284BE8  38 00 00 03 */	li r0, 3
/* 80287CAC 00284BEC  38 E0 00 00 */	li r7, 0
/* 80287CB0 00284BF0  38 C5 9B C0 */	addi r6, r5, __vt__Q34Game5Queen5State@l
/* 80287CB4 00284BF4  90 04 00 04 */	stw r0, 4(r4)
/* 80287CB8 00284BF8  38 A2 D4 50 */	addi r5, r2, lbl_8051B7B0@sda21
/* 80287CBC 00284BFC  38 03 9B 30 */	addi r0, r3, __vt__Q34Game5Queen11StateDamage@l
/* 80287CC0 00284C00  90 E4 00 08 */	stw r7, 8(r4)
/* 80287CC4 00284C04  90 C4 00 00 */	stw r6, 0(r4)
/* 80287CC8 00284C08  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80287CCC 00284C0C  90 04 00 00 */	stw r0, 0(r4)
.L_80287CD0:
/* 80287CD0 00284C10  7F E3 FB 78 */	mr r3, r31
/* 80287CD4 00284C14  4B EA 8C 35 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80287CD8 00284C18  38 60 00 10 */	li r3, 0x10
/* 80287CDC 00284C1C  4B D9 C1 C9 */	bl __nw__FUl
/* 80287CE0 00284C20  7C 64 1B 79 */	or. r4, r3, r3
/* 80287CE4 00284C24  41 82 00 40 */	beq .L_80287D24
/* 80287CE8 00284C28  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80287CEC 00284C2C  3C A0 80 4D */	lis r5, __vt__Q34Game5Queen5State@ha
/* 80287CF0 00284C30  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80287CF4 00284C34  3C 60 80 4D */	lis r3, __vt__Q34Game5Queen10StateFlick@ha
/* 80287CF8 00284C38  90 04 00 00 */	stw r0, 0(r4)
/* 80287CFC 00284C3C  38 00 00 04 */	li r0, 4
/* 80287D00 00284C40  38 E0 00 00 */	li r7, 0
/* 80287D04 00284C44  38 C5 9B C0 */	addi r6, r5, __vt__Q34Game5Queen5State@l
/* 80287D08 00284C48  90 04 00 04 */	stw r0, 4(r4)
/* 80287D0C 00284C4C  38 A2 D4 58 */	addi r5, r2, lbl_8051B7B8@sda21
/* 80287D10 00284C50  38 03 9B 0C */	addi r0, r3, __vt__Q34Game5Queen10StateFlick@l
/* 80287D14 00284C54  90 E4 00 08 */	stw r7, 8(r4)
/* 80287D18 00284C58  90 C4 00 00 */	stw r6, 0(r4)
/* 80287D1C 00284C5C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80287D20 00284C60  90 04 00 00 */	stw r0, 0(r4)
.L_80287D24:
/* 80287D24 00284C64  7F E3 FB 78 */	mr r3, r31
/* 80287D28 00284C68  4B EA 8B E1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80287D2C 00284C6C  38 60 00 10 */	li r3, 0x10
/* 80287D30 00284C70  4B D9 C1 75 */	bl __nw__FUl
/* 80287D34 00284C74  7C 64 1B 79 */	or. r4, r3, r3
/* 80287D38 00284C78  41 82 00 40 */	beq .L_80287D78
/* 80287D3C 00284C7C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80287D40 00284C80  3C A0 80 4D */	lis r5, __vt__Q34Game5Queen5State@ha
/* 80287D44 00284C84  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80287D48 00284C88  3C 60 80 4D */	lis r3, __vt__Q34Game5Queen12StateRolling@ha
/* 80287D4C 00284C8C  90 04 00 00 */	stw r0, 0(r4)
/* 80287D50 00284C90  38 00 00 05 */	li r0, 5
/* 80287D54 00284C94  38 E0 00 00 */	li r7, 0
/* 80287D58 00284C98  38 C5 9B C0 */	addi r6, r5, __vt__Q34Game5Queen5State@l
/* 80287D5C 00284C9C  90 04 00 04 */	stw r0, 4(r4)
/* 80287D60 00284CA0  38 A2 D4 60 */	addi r5, r2, lbl_8051B7C0@sda21
/* 80287D64 00284CA4  38 03 9A E8 */	addi r0, r3, __vt__Q34Game5Queen12StateRolling@l
/* 80287D68 00284CA8  90 E4 00 08 */	stw r7, 8(r4)
/* 80287D6C 00284CAC  90 C4 00 00 */	stw r6, 0(r4)
/* 80287D70 00284CB0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80287D74 00284CB4  90 04 00 00 */	stw r0, 0(r4)
.L_80287D78:
/* 80287D78 00284CB8  7F E3 FB 78 */	mr r3, r31
/* 80287D7C 00284CBC  4B EA 8B 8D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80287D80 00284CC0  38 60 00 10 */	li r3, 0x10
/* 80287D84 00284CC4  4B D9 C1 21 */	bl __nw__FUl
/* 80287D88 00284CC8  7C 64 1B 79 */	or. r4, r3, r3
/* 80287D8C 00284CCC  41 82 00 40 */	beq .L_80287DCC
/* 80287D90 00284CD0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80287D94 00284CD4  3C A0 80 4D */	lis r5, __vt__Q34Game5Queen5State@ha
/* 80287D98 00284CD8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80287D9C 00284CDC  3C 60 80 4D */	lis r3, __vt__Q34Game5Queen9StateBorn@ha
/* 80287DA0 00284CE0  90 04 00 00 */	stw r0, 0(r4)
/* 80287DA4 00284CE4  38 00 00 06 */	li r0, 6
/* 80287DA8 00284CE8  38 E0 00 00 */	li r7, 0
/* 80287DAC 00284CEC  38 C5 9B C0 */	addi r6, r5, __vt__Q34Game5Queen5State@l
/* 80287DB0 00284CF0  90 04 00 04 */	stw r0, 4(r4)
/* 80287DB4 00284CF4  38 A2 D4 68 */	addi r5, r2, lbl_8051B7C8@sda21
/* 80287DB8 00284CF8  38 03 9A C4 */	addi r0, r3, __vt__Q34Game5Queen9StateBorn@l
/* 80287DBC 00284CFC  90 E4 00 08 */	stw r7, 8(r4)
/* 80287DC0 00284D00  90 C4 00 00 */	stw r6, 0(r4)
/* 80287DC4 00284D04  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80287DC8 00284D08  90 04 00 00 */	stw r0, 0(r4)
.L_80287DCC:
/* 80287DCC 00284D0C  7F E3 FB 78 */	mr r3, r31
/* 80287DD0 00284D10  4B EA 8B 39 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80287DD4 00284D14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80287DD8 00284D18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80287DDC 00284D1C  7C 08 03 A6 */	mtlr r0
/* 80287DE0 00284D20  38 21 00 10 */	addi r1, r1, 0x10
/* 80287DE4 00284D24  4E 80 00 20 */	blr 
.endfn init__Q34Game5Queen3FSMFPQ24Game9EnemyBase

.fn init__Q34Game5Queen9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80287DE8 00284D28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80287DEC 00284D2C  7C 08 02 A6 */	mflr r0
/* 80287DF0 00284D30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80287DF4 00284D34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80287DF8 00284D38  7C 9F 23 78 */	mr r31, r4
/* 80287DFC 00284D3C  7F E3 FB 78 */	mr r3, r31
/* 80287E00 00284D40  48 00 3D 5D */	bl createDeadEffect__Q34Game5Queen3ObjFv
/* 80287E04 00284D44  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80287E08 00284D48  7F E3 FB 78 */	mr r3, r31
/* 80287E0C 00284D4C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80287E10 00284D50  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80287E14 00284D54  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80287E18 00284D58  4B E7 D9 09 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80287E1C 00284D5C  7F E3 FB 78 */	mr r3, r31
/* 80287E20 00284D60  38 80 00 00 */	li r4, 0
/* 80287E24 00284D64  38 A0 00 00 */	li r5, 0
/* 80287E28 00284D68  4B E7 D1 DD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80287E2C 00284D6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80287E30 00284D70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80287E34 00284D74  7C 08 03 A6 */	mtlr r0
/* 80287E38 00284D78  38 21 00 10 */	addi r1, r1, 0x10
/* 80287E3C 00284D7C  4E 80 00 20 */	blr 
.endfn init__Q34Game5Queen9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Queen9StateDeadFPQ24Game9EnemyBase, global
/* 80287E40 00284D80  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80287E44 00284D84  7C 08 02 A6 */	mflr r0
/* 80287E48 00284D88  90 01 00 34 */	stw r0, 0x34(r1)
/* 80287E4C 00284D8C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80287E50 00284D90  7C 9F 23 78 */	mr r31, r4
/* 80287E54 00284D94  80 64 01 88 */	lwz r3, 0x188(r4)
/* 80287E58 00284D98  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80287E5C 00284D9C  28 00 00 00 */	cmplwi r0, 0
/* 80287E60 00284DA0  41 82 00 84 */	beq .L_80287EE4
/* 80287E64 00284DA4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80287E68 00284DA8  28 00 00 02 */	cmplwi r0, 2
/* 80287E6C 00284DAC  40 82 00 5C */	bne .L_80287EC8
/* 80287E70 00284DB0  81 84 00 00 */	lwz r12, 0(r4)
/* 80287E74 00284DB4  38 61 00 08 */	addi r3, r1, 8
/* 80287E78 00284DB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80287E7C 00284DBC  7D 89 03 A6 */	mtctr r12
/* 80287E80 00284DC0  4E 80 04 21 */	bctrl 
/* 80287E84 00284DC4  C0 41 00 08 */	lfs f2, 8(r1)
/* 80287E88 00284DC8  38 A1 00 14 */	addi r5, r1, 0x14
/* 80287E8C 00284DCC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80287E90 00284DD0  38 80 00 06 */	li r4, 6
/* 80287E94 00284DD4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80287E98 00284DD8  38 C0 00 02 */	li r6, 2
/* 80287E9C 00284DDC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80287EA0 00284DE0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80287EA4 00284DE4  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80287EA8 00284DE8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80287EAC 00284DEC  4B FC A3 91 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80287EB0 00284DF0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80287EB4 00284DF4  38 A1 00 14 */	addi r5, r1, 0x14
/* 80287EB8 00284DF8  38 80 00 0E */	li r4, 0xe
/* 80287EBC 00284DFC  38 C0 00 02 */	li r6, 2
/* 80287EC0 00284E00  4B FC B8 C1 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80287EC4 00284E04  48 00 00 20 */	b .L_80287EE4
.L_80287EC8:
/* 80287EC8 00284E08  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80287ECC 00284E0C  40 82 00 18 */	bne .L_80287EE4
/* 80287ED0 00284E10  7F E3 FB 78 */	mr r3, r31
/* 80287ED4 00284E14  48 00 2D C5 */	bl releaseJointShadow__Q34Game5Queen3ObjFv
/* 80287ED8 00284E18  7F E3 FB 78 */	mr r3, r31
/* 80287EDC 00284E1C  38 80 00 00 */	li r4, 0
/* 80287EE0 00284E20  4B EB 32 11 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80287EE4:
/* 80287EE4 00284E24  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80287EE8 00284E28  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80287EEC 00284E2C  7C 08 03 A6 */	mtlr r0
/* 80287EF0 00284E30  38 21 00 30 */	addi r1, r1, 0x30
/* 80287EF4 00284E34  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Queen9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Queen9StateDeadFPQ24Game9EnemyBase, global
/* 80287EF8 00284E38  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Queen9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game5Queen10StateSleepFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80287EFC 00284E3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80287F00 00284E40  7C 08 02 A6 */	mflr r0
/* 80287F04 00284E44  38 60 FF FF */	li r3, -1
/* 80287F08 00284E48  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80287F0C 00284E4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80287F10 00284E50  38 00 00 00 */	li r0, 0
/* 80287F14 00284E54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80287F18 00284E58  7C 9F 23 78 */	mr r31, r4
/* 80287F1C 00284E5C  90 64 02 D4 */	stw r3, 0x2d4(r4)
/* 80287F20 00284E60  7F E3 FB 78 */	mr r3, r31
/* 80287F24 00284E64  98 04 02 C5 */	stb r0, 0x2c5(r4)
/* 80287F28 00284E68  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 80287F2C 00284E6C  C0 04 02 0C */	lfs f0, 0x20c(r4)
/* 80287F30 00284E70  D0 04 02 D0 */	stfs f0, 0x2d0(r4)
/* 80287F34 00284E74  4B E7 F8 49 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 80287F38 00284E78  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80287F3C 00284E7C  7F E3 FB 78 */	mr r3, r31
/* 80287F40 00284E80  38 80 00 01 */	li r4, 1
/* 80287F44 00284E84  38 A0 00 00 */	li r5, 0
/* 80287F48 00284E88  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80287F4C 00284E8C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80287F50 00284E90  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80287F54 00284E94  4B E7 D0 B1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80287F58 00284E98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80287F5C 00284E9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80287F60 00284EA0  7C 08 03 A6 */	mtlr r0
/* 80287F64 00284EA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80287F68 00284EA8  4E 80 00 20 */	blr 
.endfn init__Q34Game5Queen10StateSleepFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Queen10StateSleepFPQ24Game9EnemyBase, global
/* 80287F6C 00284EAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80287F70 00284EB0  7C 08 02 A6 */	mflr r0
/* 80287F74 00284EB4  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80287F78 00284EB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80287F7C 00284EBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80287F80 00284EC0  7C 9F 23 78 */	mr r31, r4
/* 80287F84 00284EC4  93 C1 00 08 */	stw r30, 8(r1)
/* 80287F88 00284EC8  7C 7E 1B 78 */	mr r30, r3
/* 80287F8C 00284ECC  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 80287F90 00284ED0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80287F94 00284ED4  4C 40 13 82 */	cror 2, 0, 2
/* 80287F98 00284ED8  41 82 00 24 */	beq .L_80287FBC
/* 80287F9C 00284EDC  7F E3 FB 78 */	mr r3, r31
/* 80287FA0 00284EE0  48 00 2C B9 */	bl isHitCounterUp__Q34Game5Queen3ObjFv
/* 80287FA4 00284EE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80287FA8 00284EE8  40 82 00 14 */	bne .L_80287FBC
/* 80287FAC 00284EEC  7F E3 FB 78 */	mr r3, r31
/* 80287FB0 00284EF0  48 00 2C 6D */	bl isCreateBaby__Q34Game5Queen3ObjFv
/* 80287FB4 00284EF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80287FB8 00284EF8  41 82 00 0C */	beq .L_80287FC4
.L_80287FBC:
/* 80287FBC 00284EFC  7F E3 FB 78 */	mr r3, r31
/* 80287FC0 00284F00  4B E7 D2 E1 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80287FC4:
/* 80287FC4 00284F04  7F E3 FB 78 */	mr r3, r31
/* 80287FC8 00284F08  4B E7 F3 39 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 80287FCC 00284F0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80287FD0 00284F10  41 82 00 64 */	beq .L_80288034
/* 80287FD4 00284F14  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80287FD8 00284F18  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80287FDC 00284F1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80287FE0 00284F20  4C 40 13 82 */	cror 2, 0, 2
/* 80287FE4 00284F24  40 82 00 10 */	bne .L_80287FF4
/* 80287FE8 00284F28  38 00 00 00 */	li r0, 0
/* 80287FEC 00284F2C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80287FF0 00284F30  48 00 00 44 */	b .L_80288034
.L_80287FF4:
/* 80287FF4 00284F34  7F E3 FB 78 */	mr r3, r31
/* 80287FF8 00284F38  38 80 00 00 */	li r4, 0
/* 80287FFC 00284F3C  4B E8 C6 5D */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80288000 00284F40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80288004 00284F44  41 82 00 10 */	beq .L_80288014
/* 80288008 00284F48  38 00 00 04 */	li r0, 4
/* 8028800C 00284F4C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80288010 00284F50  48 00 00 24 */	b .L_80288034
.L_80288014:
/* 80288014 00284F54  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 80288018 00284F58  2C 00 00 00 */	cmpwi r0, 0
/* 8028801C 00284F5C  41 82 00 10 */	beq .L_8028802C
/* 80288020 00284F60  38 00 00 03 */	li r0, 3
/* 80288024 00284F64  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80288028 00284F68  48 00 00 0C */	b .L_80288034
.L_8028802C:
/* 8028802C 00284F6C  38 00 00 02 */	li r0, 2
/* 80288030 00284F70  90 1F 02 D4 */	stw r0, 0x2d4(r31)
.L_80288034:
/* 80288034 00284F74  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80288038 00284F78  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8028803C 00284F7C  28 00 00 00 */	cmplwi r0, 0
/* 80288040 00284F80  41 82 00 68 */	beq .L_802880A8
/* 80288044 00284F84  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80288048 00284F88  28 00 00 00 */	cmplwi r0, 0
/* 8028804C 00284F8C  40 82 00 10 */	bne .L_8028805C
/* 80288050 00284F90  7F E3 FB 78 */	mr r3, r31
/* 80288054 00284F94  48 00 3B 71 */	bl startSleepEffect__Q34Game5Queen3ObjFv
/* 80288058 00284F98  48 00 00 50 */	b .L_802880A8
.L_8028805C:
/* 8028805C 00284F9C  28 00 00 02 */	cmplwi r0, 2
/* 80288060 00284FA0  40 82 00 20 */	bne .L_80288080
/* 80288064 00284FA4  7F E3 FB 78 */	mr r3, r31
/* 80288068 00284FA8  48 00 3B 91 */	bl finishSleepEffect__Q34Game5Queen3ObjFv
/* 8028806C 00284FAC  7F E3 FB 78 */	mr r3, r31
/* 80288070 00284FB0  48 00 3B 21 */	bl createWakeUpEffect__Q34Game5Queen3ObjFv
/* 80288074 00284FB4  7F E3 FB 78 */	mr r3, r31
/* 80288078 00284FB8  48 00 32 29 */	bl setMidBossAppearBGM__Q34Game5Queen3ObjFv
/* 8028807C 00284FBC  48 00 00 2C */	b .L_802880A8
.L_80288080:
/* 80288080 00284FC0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80288084 00284FC4  40 82 00 24 */	bne .L_802880A8
/* 80288088 00284FC8  7F C3 F3 78 */	mr r3, r30
/* 8028808C 00284FCC  7F E4 FB 78 */	mr r4, r31
/* 80288090 00284FD0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80288094 00284FD4  38 C0 00 00 */	li r6, 0
/* 80288098 00284FD8  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 8028809C 00284FDC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802880A0 00284FE0  7D 89 03 A6 */	mtctr r12
/* 802880A4 00284FE4  4E 80 04 21 */	bctrl 
.L_802880A8:
/* 802880A8 00284FE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802880AC 00284FEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802880B0 00284FF0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802880B4 00284FF4  7C 08 03 A6 */	mtlr r0
/* 802880B8 00284FF8  38 21 00 10 */	addi r1, r1, 0x10
/* 802880BC 00284FFC  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Queen10StateSleepFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Queen10StateSleepFPQ24Game9EnemyBase, global
/* 802880C0 00285000  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802880C4 00285004  7C 08 02 A6 */	mflr r0
/* 802880C8 00285008  90 01 00 14 */	stw r0, 0x14(r1)
/* 802880CC 0028500C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802880D0 00285010  7C 9F 23 78 */	mr r31, r4
/* 802880D4 00285014  7F E3 FB 78 */	mr r3, r31
/* 802880D8 00285018  4B E7 F6 BD */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802880DC 0028501C  7F E3 FB 78 */	mr r3, r31
/* 802880E0 00285020  48 00 3B 19 */	bl finishSleepEffect__Q34Game5Queen3ObjFv
/* 802880E4 00285024  7F E3 FB 78 */	mr r3, r31
/* 802880E8 00285028  48 00 31 B9 */	bl setMidBossAppearBGM__Q34Game5Queen3ObjFv
/* 802880EC 0028502C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802880F0 00285030  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802880F4 00285034  7C 08 03 A6 */	mtlr r0
/* 802880F8 00285038  38 21 00 10 */	addi r1, r1, 0x10
/* 802880FC 0028503C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Queen10StateSleepFPQ24Game9EnemyBase

.fn init__Q34Game5Queen9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80288100 00285040  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288104 00285044  7C 08 02 A6 */	mflr r0
/* 80288108 00285048  38 60 FF FF */	li r3, -1
/* 8028810C 0028504C  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288110 00285050  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288114 00285054  38 00 00 00 */	li r0, 0
/* 80288118 00285058  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028811C 0028505C  7C 9F 23 78 */	mr r31, r4
/* 80288120 00285060  90 64 02 D4 */	stw r3, 0x2d4(r4)
/* 80288124 00285064  7F E3 FB 78 */	mr r3, r31
/* 80288128 00285068  98 04 02 C5 */	stb r0, 0x2c5(r4)
/* 8028812C 0028506C  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 80288130 00285070  C0 04 02 0C */	lfs f0, 0x20c(r4)
/* 80288134 00285074  D0 04 02 D0 */	stfs f0, 0x2d0(r4)
/* 80288138 00285078  4B E7 F6 45 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8028813C 0028507C  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288140 00285080  7F E3 FB 78 */	mr r3, r31
/* 80288144 00285084  38 80 00 02 */	li r4, 2
/* 80288148 00285088  38 A0 00 00 */	li r5, 0
/* 8028814C 0028508C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80288150 00285090  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80288154 00285094  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80288158 00285098  4B E7 CE AD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8028815C 0028509C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288160 002850A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80288164 002850A4  7C 08 03 A6 */	mtlr r0
/* 80288168 002850A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8028816C 002850AC  4E 80 00 20 */	blr 
.endfn init__Q34Game5Queen9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Queen9StateWaitFPQ24Game9EnemyBase, global
/* 80288170 002850B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288174 002850B4  7C 08 02 A6 */	mflr r0
/* 80288178 002850B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028817C 002850BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80288180 002850C0  7C 9F 23 78 */	mr r31, r4
/* 80288184 002850C4  93 C1 00 08 */	stw r30, 8(r1)
/* 80288188 002850C8  7C 7E 1B 78 */	mr r30, r3
/* 8028818C 002850CC  7F E3 FB 78 */	mr r3, r31
/* 80288190 002850D0  48 00 2A 8D */	bl isCreateBaby__Q34Game5Queen3ObjFv
/* 80288194 002850D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80288198 002850D8  40 82 00 24 */	bne .L_802881BC
/* 8028819C 002850DC  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802881A0 002850E0  C0 02 D4 74 */	lfs f0, lbl_8051B7D4@sda21(r2)
/* 802881A4 002850E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802881A8 002850E8  40 81 00 14 */	ble .L_802881BC
/* 802881AC 002850EC  38 00 00 01 */	li r0, 1
/* 802881B0 002850F0  7F E3 FB 78 */	mr r3, r31
/* 802881B4 002850F4  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802881B8 002850F8  4B E7 D0 E9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802881BC:
/* 802881BC 002850FC  7F E3 FB 78 */	mr r3, r31
/* 802881C0 00285100  48 00 2A 99 */	bl isHitCounterUp__Q34Game5Queen3ObjFv
/* 802881C4 00285104  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802881C8 00285108  41 82 00 14 */	beq .L_802881DC
/* 802881CC 0028510C  38 00 00 03 */	li r0, 3
/* 802881D0 00285110  7F E3 FB 78 */	mr r3, r31
/* 802881D4 00285114  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802881D8 00285118  4B E7 D0 C9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802881DC:
/* 802881DC 0028511C  7F E3 FB 78 */	mr r3, r31
/* 802881E0 00285120  48 00 2A 3D */	bl isCreateBaby__Q34Game5Queen3ObjFv
/* 802881E4 00285124  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802881E8 00285128  41 82 00 14 */	beq .L_802881FC
/* 802881EC 0028512C  38 00 00 06 */	li r0, 6
/* 802881F0 00285130  7F E3 FB 78 */	mr r3, r31
/* 802881F4 00285134  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802881F8 00285138  4B E7 D0 A9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802881FC:
/* 802881FC 0028513C  7F E3 FB 78 */	mr r3, r31
/* 80288200 00285140  38 80 00 00 */	li r4, 0
/* 80288204 00285144  4B E8 C4 55 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80288208 00285148  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028820C 0028514C  41 82 00 14 */	beq .L_80288220
/* 80288210 00285150  38 00 00 04 */	li r0, 4
/* 80288214 00285154  7F E3 FB 78 */	mr r3, r31
/* 80288218 00285158  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 8028821C 0028515C  4B E7 D0 85 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80288220:
/* 80288220 00285160  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80288224 00285164  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288228 00285168  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028822C 0028516C  4C 40 13 82 */	cror 2, 0, 2
/* 80288230 00285170  40 82 00 14 */	bne .L_80288244
/* 80288234 00285174  38 00 00 00 */	li r0, 0
/* 80288238 00285178  7F E3 FB 78 */	mr r3, r31
/* 8028823C 0028517C  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80288240 00285180  4B E7 D0 61 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80288244:
/* 80288244 00285184  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80288248 00285188  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 8028824C 0028518C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80288250 00285190  EC 01 00 2A */	fadds f0, f1, f0
/* 80288254 00285194  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 80288258 00285198  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8028825C 0028519C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80288260 002851A0  28 00 00 00 */	cmplwi r0, 0
/* 80288264 002851A4  41 82 00 30 */	beq .L_80288294
/* 80288268 002851A8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8028826C 002851AC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80288270 002851B0  40 82 00 24 */	bne .L_80288294
/* 80288274 002851B4  7F C3 F3 78 */	mr r3, r30
/* 80288278 002851B8  7F E4 FB 78 */	mr r4, r31
/* 8028827C 002851BC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80288280 002851C0  38 C0 00 00 */	li r6, 0
/* 80288284 002851C4  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 80288288 002851C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028828C 002851CC  7D 89 03 A6 */	mtctr r12
/* 80288290 002851D0  4E 80 04 21 */	bctrl 
.L_80288294:
/* 80288294 002851D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288298 002851D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028829C 002851DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802882A0 002851E0  7C 08 03 A6 */	mtlr r0
/* 802882A4 002851E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802882A8 002851E8  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Queen9StateWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Queen9StateWaitFPQ24Game9EnemyBase, global
/* 802882AC 002851EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802882B0 002851F0  7C 08 02 A6 */	mflr r0
/* 802882B4 002851F4  7C 83 23 78 */	mr r3, r4
/* 802882B8 002851F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802882BC 002851FC  4B E7 F4 D9 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802882C0 00285200  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802882C4 00285204  7C 08 03 A6 */	mtlr r0
/* 802882C8 00285208  38 21 00 10 */	addi r1, r1, 0x10
/* 802882CC 0028520C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Queen9StateWaitFPQ24Game9EnemyBase

.fn init__Q34Game5Queen11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802882D0 00285210  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802882D4 00285214  7C 08 02 A6 */	mflr r0
/* 802882D8 00285218  38 60 FF FF */	li r3, -1
/* 802882DC 0028521C  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 802882E0 00285220  90 01 00 14 */	stw r0, 0x14(r1)
/* 802882E4 00285224  38 00 00 00 */	li r0, 0
/* 802882E8 00285228  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802882EC 0028522C  7C 9F 23 78 */	mr r31, r4
/* 802882F0 00285230  90 64 02 D4 */	stw r3, 0x2d4(r4)
/* 802882F4 00285234  7F E3 FB 78 */	mr r3, r31
/* 802882F8 00285238  98 04 02 C5 */	stb r0, 0x2c5(r4)
/* 802882FC 0028523C  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 80288300 00285240  48 00 37 C5 */	bl startDamageEffect__Q34Game5Queen3ObjFv
/* 80288304 00285244  7F E3 FB 78 */	mr r3, r31
/* 80288308 00285248  4B E7 F4 75 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8028830C 0028524C  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288310 00285250  7F E3 FB 78 */	mr r3, r31
/* 80288314 00285254  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80288318 00285258  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8028831C 0028525C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80288320 00285260  4B E7 96 AD */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80288324 00285264  7F E3 FB 78 */	mr r3, r31
/* 80288328 00285268  38 80 00 03 */	li r4, 3
/* 8028832C 0028526C  38 A0 00 00 */	li r5, 0
/* 80288330 00285270  4B E7 CC D5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80288334 00285274  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288338 00285278  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028833C 0028527C  7C 08 03 A6 */	mtlr r0
/* 80288340 00285280  38 21 00 10 */	addi r1, r1, 0x10
/* 80288344 00285284  4E 80 00 20 */	blr 
.endfn init__Q34Game5Queen11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Queen11StateDamageFPQ24Game9EnemyBase, global
/* 80288348 00285288  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028834C 0028528C  7C 08 02 A6 */	mflr r0
/* 80288350 00285290  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288354 00285294  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80288358 00285298  7C 9F 23 78 */	mr r31, r4
/* 8028835C 0028529C  93 C1 00 08 */	stw r30, 8(r1)
/* 80288360 002852A0  7C 7E 1B 78 */	mr r30, r3
/* 80288364 002852A4  7F E3 FB 78 */	mr r3, r31
/* 80288368 002852A8  48 00 28 B5 */	bl isCreateBaby__Q34Game5Queen3ObjFv
/* 8028836C 002852AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80288370 002852B0  41 82 00 14 */	beq .L_80288384
/* 80288374 002852B4  38 00 00 06 */	li r0, 6
/* 80288378 002852B8  7F E3 FB 78 */	mr r3, r31
/* 8028837C 002852BC  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80288380 002852C0  4B E7 CF 21 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80288384:
/* 80288384 002852C4  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 80288388 002852C8  2C 00 00 00 */	cmpwi r0, 0
/* 8028838C 002852CC  40 82 00 14 */	bne .L_802883A0
/* 80288390 002852D0  38 00 00 02 */	li r0, 2
/* 80288394 002852D4  7F E3 FB 78 */	mr r3, r31
/* 80288398 002852D8  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 8028839C 002852DC  4B E7 CF 05 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802883A0:
/* 802883A0 002852E0  7F E3 FB 78 */	mr r3, r31
/* 802883A4 002852E4  38 80 00 00 */	li r4, 0
/* 802883A8 002852E8  4B E8 C2 B1 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802883AC 002852EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802883B0 002852F0  41 82 00 14 */	beq .L_802883C4
/* 802883B4 002852F4  38 00 00 04 */	li r0, 4
/* 802883B8 002852F8  7F E3 FB 78 */	mr r3, r31
/* 802883BC 002852FC  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802883C0 00285300  4B E7 CE E1 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802883C4:
/* 802883C4 00285304  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802883C8 00285308  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 802883CC 0028530C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802883D0 00285310  4C 40 13 82 */	cror 2, 0, 2
/* 802883D4 00285314  40 82 00 14 */	bne .L_802883E8
/* 802883D8 00285318  38 00 00 00 */	li r0, 0
/* 802883DC 0028531C  7F E3 FB 78 */	mr r3, r31
/* 802883E0 00285320  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 802883E4 00285324  4B E7 CE BD */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802883E8:
/* 802883E8 00285328  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802883EC 0028532C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802883F0 00285330  28 00 00 00 */	cmplwi r0, 0
/* 802883F4 00285334  41 82 00 30 */	beq .L_80288424
/* 802883F8 00285338  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802883FC 0028533C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80288400 00285340  40 82 00 24 */	bne .L_80288424
/* 80288404 00285344  7F C3 F3 78 */	mr r3, r30
/* 80288408 00285348  7F E4 FB 78 */	mr r4, r31
/* 8028840C 0028534C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80288410 00285350  38 C0 00 00 */	li r6, 0
/* 80288414 00285354  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 80288418 00285358  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028841C 0028535C  7D 89 03 A6 */	mtctr r12
/* 80288420 00285360  4E 80 04 21 */	bctrl 
.L_80288424:
/* 80288424 00285364  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288428 00285368  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028842C 0028536C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80288430 00285370  7C 08 03 A6 */	mtlr r0
/* 80288434 00285374  38 21 00 10 */	addi r1, r1, 0x10
/* 80288438 00285378  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Queen11StateDamageFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Queen11StateDamageFPQ24Game9EnemyBase, global
/* 8028843C 0028537C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288440 00285380  7C 08 02 A6 */	mflr r0
/* 80288444 00285384  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288448 00285388  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028844C 0028538C  7C 9F 23 78 */	mr r31, r4
/* 80288450 00285390  7F E3 FB 78 */	mr r3, r31
/* 80288454 00285394  4B E7 F3 41 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 80288458 00285398  7F E3 FB 78 */	mr r3, r31
/* 8028845C 0028539C  48 00 36 9D */	bl finishDamageEffect__Q34Game5Queen3ObjFv
/* 80288460 002853A0  7F E3 FB 78 */	mr r3, r31
/* 80288464 002853A4  4B E7 95 19 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80288468 002853A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028846C 002853AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80288470 002853B0  7C 08 03 A6 */	mtlr r0
/* 80288474 002853B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80288478 002853B8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Queen11StateDamageFPQ24Game9EnemyBase

.fn init__Q34Game5Queen10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8028847C 002853BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288480 002853C0  7C 08 02 A6 */	mflr r0
/* 80288484 002853C4  38 60 FF FF */	li r3, -1
/* 80288488 002853C8  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 8028848C 002853CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288490 002853D0  38 00 00 00 */	li r0, 0
/* 80288494 002853D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80288498 002853D8  7C 9F 23 78 */	mr r31, r4
/* 8028849C 002853DC  90 64 02 D4 */	stw r3, 0x2d4(r4)
/* 802884A0 002853E0  7F E3 FB 78 */	mr r3, r31
/* 802884A4 002853E4  98 04 02 C5 */	stb r0, 0x2c5(r4)
/* 802884A8 002853E8  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 802884AC 002853EC  48 00 36 7D */	bl createFlickEffect__Q34Game5Queen3ObjFv
/* 802884B0 002853F0  7F E3 FB 78 */	mr r3, r31
/* 802884B4 002853F4  4B E7 F2 C9 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802884B8 002853F8  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 802884BC 002853FC  7F E3 FB 78 */	mr r3, r31
/* 802884C0 00285400  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802884C4 00285404  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802884C8 00285408  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802884CC 0028540C  4B E7 95 01 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802884D0 00285410  7F E3 FB 78 */	mr r3, r31
/* 802884D4 00285414  38 80 00 04 */	li r4, 4
/* 802884D8 00285418  38 A0 00 00 */	li r5, 0
/* 802884DC 0028541C  4B E7 CB 29 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802884E0 00285420  7F E3 FB 78 */	mr r3, r31
/* 802884E4 00285424  48 00 27 F5 */	bl startBossChargeBGM__Q34Game5Queen3ObjFv
/* 802884E8 00285428  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802884EC 0028542C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802884F0 00285430  7C 08 03 A6 */	mtlr r0
/* 802884F4 00285434  38 21 00 10 */	addi r1, r1, 0x10
/* 802884F8 00285438  4E 80 00 20 */	blr 
.endfn init__Q34Game5Queen10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Queen10StateFlickFPQ24Game9EnemyBase, global
/* 802884FC 0028543C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288500 00285440  7C 08 02 A6 */	mflr r0
/* 80288504 00285444  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288508 00285448  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028850C 0028544C  7C 9F 23 78 */	mr r31, r4
/* 80288510 00285450  93 C1 00 08 */	stw r30, 8(r1)
/* 80288514 00285454  7C 7E 1B 78 */	mr r30, r3
/* 80288518 00285458  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 8028851C 0028545C  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80288520 00285460  28 00 00 00 */	cmplwi r0, 0
/* 80288524 00285464  41 82 00 BC */	beq .L_802885E0
/* 80288528 00285468  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8028852C 0028546C  28 00 00 02 */	cmplwi r0, 2
/* 80288530 00285470  40 82 00 24 */	bne .L_80288554
/* 80288534 00285474  7F E3 FB 78 */	mr r3, r31
/* 80288538 00285478  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028853C 0028547C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80288540 00285480  7D 89 03 A6 */	mtctr r12
/* 80288544 00285484  4E 80 04 21 */	bctrl 
/* 80288548 00285488  7F E3 FB 78 */	mr r3, r31
/* 8028854C 0028548C  48 00 1A 51 */	bl flickPikmin__Q34Game5Queen3ObjFf
/* 80288550 00285490  48 00 00 90 */	b .L_802885E0
.L_80288554:
/* 80288554 00285494  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80288558 00285498  40 82 00 88 */	bne .L_802885E0
/* 8028855C 0028549C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80288560 002854A0  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288564 002854A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80288568 002854A8  4C 40 13 82 */	cror 2, 0, 2
/* 8028856C 002854AC  40 82 00 20 */	bne .L_8028858C
/* 80288570 002854B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80288574 002854B4  38 A0 00 00 */	li r5, 0
/* 80288578 002854B8  38 C0 00 00 */	li r6, 0
/* 8028857C 002854BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80288580 002854C0  7D 89 03 A6 */	mtctr r12
/* 80288584 002854C4  4E 80 04 21 */	bctrl 
/* 80288588 002854C8  48 00 00 58 */	b .L_802885E0
.L_8028858C:
/* 8028858C 002854CC  7F E3 FB 78 */	mr r3, r31
/* 80288590 002854D0  48 00 1D B5 */	bl isRollingAttackLeft__Q34Game5Queen3ObjFv
/* 80288594 002854D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80288598 002854D8  41 82 00 28 */	beq .L_802885C0
/* 8028859C 002854DC  7F C3 F3 78 */	mr r3, r30
/* 802885A0 002854E0  7F E4 FB 78 */	mr r4, r31
/* 802885A4 002854E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802885A8 002854E8  38 A0 00 05 */	li r5, 5
/* 802885AC 002854EC  38 C2 D4 78 */	addi r6, r2, lbl_8051B7D8@sda21
/* 802885B0 002854F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802885B4 002854F4  7D 89 03 A6 */	mtctr r12
/* 802885B8 002854F8  4E 80 04 21 */	bctrl 
/* 802885BC 002854FC  48 00 00 24 */	b .L_802885E0
.L_802885C0:
/* 802885C0 00285500  7F C3 F3 78 */	mr r3, r30
/* 802885C4 00285504  7F E4 FB 78 */	mr r4, r31
/* 802885C8 00285508  81 9E 00 00 */	lwz r12, 0(r30)
/* 802885CC 0028550C  38 A0 00 05 */	li r5, 5
/* 802885D0 00285510  38 C0 00 00 */	li r6, 0
/* 802885D4 00285514  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802885D8 00285518  7D 89 03 A6 */	mtctr r12
/* 802885DC 0028551C  4E 80 04 21 */	bctrl 
.L_802885E0:
/* 802885E0 00285520  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802885E4 00285524  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802885E8 00285528  83 C1 00 08 */	lwz r30, 8(r1)
/* 802885EC 0028552C  7C 08 03 A6 */	mtlr r0
/* 802885F0 00285530  38 21 00 10 */	addi r1, r1, 0x10
/* 802885F4 00285534  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Queen10StateFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Queen10StateFlickFPQ24Game9EnemyBase, global
/* 802885F8 00285538  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802885FC 0028553C  7C 08 02 A6 */	mflr r0
/* 80288600 00285540  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288604 00285544  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80288608 00285548  7C 9F 23 78 */	mr r31, r4
/* 8028860C 0028554C  7F E3 FB 78 */	mr r3, r31
/* 80288610 00285550  4B E7 F1 85 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 80288614 00285554  7F E3 FB 78 */	mr r3, r31
/* 80288618 00285558  4B E7 93 65 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 8028861C 0028555C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288620 00285560  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80288624 00285564  7C 08 03 A6 */	mtlr r0
/* 80288628 00285568  38 21 00 10 */	addi r1, r1, 0x10
/* 8028862C 0028556C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Queen10StateFlickFPQ24Game9EnemyBase

.fn init__Q34Game5Queen12StateRollingFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80288630 00285570  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288634 00285574  7C 08 02 A6 */	mflr r0
/* 80288638 00285578  38 60 FF FF */	li r3, -1
/* 8028863C 0028557C  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288640 00285580  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288644 00285584  38 00 00 00 */	li r0, 0
/* 80288648 00285588  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028864C 0028558C  7C 9F 23 78 */	mr r31, r4
/* 80288650 00285590  93 C1 00 08 */	stw r30, 8(r1)
/* 80288654 00285594  7C BE 2B 78 */	mr r30, r5
/* 80288658 00285598  90 64 02 D4 */	stw r3, 0x2d4(r4)
/* 8028865C 0028559C  7F E3 FB 78 */	mr r3, r31
/* 80288660 002855A0  98 04 02 C2 */	stb r0, 0x2c2(r4)
/* 80288664 002855A4  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80288668 002855A8  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 8028866C 002855AC  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80288670 002855B0  4B E7 93 5D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80288674 002855B4  28 1E 00 00 */	cmplwi r30, 0
/* 80288678 002855B8  41 82 00 18 */	beq .L_80288690
/* 8028867C 002855BC  7F E3 FB 78 */	mr r3, r31
/* 80288680 002855C0  38 80 00 05 */	li r4, 5
/* 80288684 002855C4  38 A0 00 00 */	li r5, 0
/* 80288688 002855C8  4B E7 C9 7D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8028868C 002855CC  48 00 00 14 */	b .L_802886A0
.L_80288690:
/* 80288690 002855D0  7F E3 FB 78 */	mr r3, r31
/* 80288694 002855D4  38 80 00 06 */	li r4, 6
/* 80288698 002855D8  38 A0 00 00 */	li r5, 0
/* 8028869C 002855DC  4B E7 C9 69 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_802886A0:
/* 802886A0 002855E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802886A4 002855E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802886A8 002855E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802886AC 002855EC  7C 08 03 A6 */	mtlr r0
/* 802886B0 002855F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802886B4 002855F4  4E 80 00 20 */	blr 
.endfn init__Q34Game5Queen12StateRollingFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Queen12StateRollingFPQ24Game9EnemyBase, global
/* 802886B8 002855F8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 802886BC 002855FC  7C 08 02 A6 */	mflr r0
/* 802886C0 00285600  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 802886C4 00285604  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 802886C8 00285608  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 802886CC 0028560C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 802886D0 00285610  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 802886D4 00285614  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 802886D8 00285618  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 802886DC 0028561C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802886E0 00285620  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802886E4 00285624  88 04 02 C2 */	lbz r0, 0x2c2(r4)
/* 802886E8 00285628  7C 7E 1B 78 */	mr r30, r3
/* 802886EC 0028562C  7C 9F 23 78 */	mr r31, r4
/* 802886F0 00285630  28 00 00 00 */	cmplwi r0, 0
/* 802886F4 00285634  41 82 02 08 */	beq .L_802888FC
/* 802886F8 00285638  7F E3 FB 78 */	mr r3, r31
/* 802886FC 0028563C  4B E7 EC 4D */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 80288700 00285640  2C 03 00 05 */	cmpwi r3, 5
/* 80288704 00285644  40 82 00 0C */	bne .L_80288710
/* 80288708 00285648  C3 C2 D4 80 */	lfs f30, lbl_8051B7E0@sda21(r2)
/* 8028870C 0028564C  48 00 00 08 */	b .L_80288714
.L_80288710:
/* 80288710 00285650  C3 C2 D4 84 */	lfs f30, lbl_8051B7E4@sda21(r2)
.L_80288714:
/* 80288714 00285654  7F E3 FB 78 */	mr r3, r31
/* 80288718 00285658  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028871C 0028565C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80288720 00285660  7D 89 03 A6 */	mtctr r12
/* 80288724 00285664  4E 80 04 21 */	bctrl 
/* 80288728 00285668  EC 7E 08 2A */	fadds f3, f30, f1
/* 8028872C 0028566C  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288730 00285670  FC 20 18 90 */	fmr f1, f3
/* 80288734 00285674  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80288738 00285678  40 80 00 08 */	bge .L_80288740
/* 8028873C 0028567C  FC 20 18 50 */	fneg f1, f3
.L_80288740:
/* 80288740 00285680  C0 42 D4 88 */	lfs f2, lbl_8051B7E8@sda21(r2)
/* 80288744 00285684  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80288748 00285688  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 8028874C 0028568C  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80288750 00285690  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80288754 00285694  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80288758 00285698  FC 00 08 1E */	fctiwz f0, f1
/* 8028875C 0028569C  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 80288760 002856A0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80288764 002856A4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80288768 002856A8  7C 64 02 14 */	add r3, r4, r0
/* 8028876C 002856AC  C3 E3 00 04 */	lfs f31, 4(r3)
/* 80288770 002856B0  40 80 00 28 */	bge .L_80288798
/* 80288774 002856B4  C0 02 D4 8C */	lfs f0, lbl_8051B7EC@sda21(r2)
/* 80288778 002856B8  EC 03 00 32 */	fmuls f0, f3, f0
/* 8028877C 002856BC  FC 00 00 1E */	fctiwz f0, f0
/* 80288780 002856C0  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 80288784 002856C4  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 80288788 002856C8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028878C 002856CC  7C 04 04 2E */	lfsx f0, r4, r0
/* 80288790 002856D0  FF C0 00 50 */	fneg f30, f0
/* 80288794 002856D4  48 00 00 1C */	b .L_802887B0
.L_80288798:
/* 80288798 002856D8  EC 03 00 B2 */	fmuls f0, f3, f2
/* 8028879C 002856DC  FC 00 00 1E */	fctiwz f0, f0
/* 802887A0 002856E0  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 802887A4 002856E4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802887A8 002856E8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802887AC 002856EC  7F C4 04 2E */	lfsx f30, r4, r0
.L_802887B0:
/* 802887B0 002856F0  7F E4 FB 78 */	mr r4, r31
/* 802887B4 002856F4  38 61 00 2C */	addi r3, r1, 0x2c
/* 802887B8 002856F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802887BC 002856FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802887C0 00285700  7D 89 03 A6 */	mtctr r12
/* 802887C4 00285704  4E 80 04 21 */	bctrl 
/* 802887C8 00285708  C1 01 00 2C */	lfs f8, 0x2c(r1)
/* 802887CC 0028570C  C0 BF 01 98 */	lfs f5, 0x198(r31)
/* 802887D0 00285710  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802887D4 00285714  EC 08 28 28 */	fsubs f0, f8, f5
/* 802887D8 00285718  C0 E2 D4 70 */	lfs f7, lbl_8051B7D0@sda21(r2)
/* 802887DC 0028571C  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 802887E0 00285720  C0 DF 01 A0 */	lfs f6, 0x1a0(r31)
/* 802887E4 00285724  EC 00 3F BA */	fmadds f0, f0, f30, f7
/* 802887E8 00285728  C0 63 03 5C */	lfs f3, 0x35c(r3)
/* 802887EC 0028572C  EC 24 30 28 */	fsubs f1, f4, f6
/* 802887F0 00285730  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 802887F4 00285734  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 802887F8 00285738  40 81 00 14 */	ble .L_8028880C
/* 802887FC 0028573C  D0 FF 01 D4 */	stfs f7, 0x1d4(r31)
/* 80288800 00285740  D0 FF 01 D8 */	stfs f7, 0x1d8(r31)
/* 80288804 00285744  D0 FF 01 DC */	stfs f7, 0x1dc(r31)
/* 80288808 00285748  48 00 00 84 */	b .L_8028888C
.L_8028880C:
/* 8028880C 0028574C  C0 42 D4 90 */	lfs f2, lbl_8051B7F0@sda21(r2)
/* 80288810 00285750  EC 25 40 28 */	fsubs f1, f5, f8
/* 80288814 00285754  EC 06 20 28 */	fsubs f0, f6, f4
/* 80288818 00285758  EC 62 18 2A */	fadds f3, f2, f3
/* 8028881C 0028575C  EC 5E 00 F2 */	fmuls f2, f30, f3
/* 80288820 00285760  EC 7F 00 F2 */	fmuls f3, f31, f3
/* 80288824 00285764  EC 42 08 2A */	fadds f2, f2, f1
/* 80288828 00285768  EC 63 00 2A */	fadds f3, f3, f0
/* 8028882C 0028576C  EC 02 38 BA */	fmadds f0, f2, f2, f7
/* 80288830 00285770  EC 23 00 F2 */	fmuls f1, f3, f3
/* 80288834 00285774  EC 21 00 2A */	fadds f1, f1, f0
/* 80288838 00285778  FC 01 38 40 */	fcmpo cr0, f1, f7
/* 8028883C 0028577C  40 81 00 14 */	ble .L_80288850
/* 80288840 00285780  40 81 00 14 */	ble .L_80288854
/* 80288844 00285784  FC 00 08 34 */	frsqrte f0, f1
/* 80288848 00285788  EC 20 00 72 */	fmuls f1, f0, f1
/* 8028884C 0028578C  48 00 00 08 */	b .L_80288854
.L_80288850:
/* 80288850 00285790  FC 20 38 90 */	fmr f1, f7
.L_80288854:
/* 80288854 00285794  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288858 00285798  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028885C 0028579C  40 81 00 18 */	ble .L_80288874
/* 80288860 002857A0  C0 02 D4 94 */	lfs f0, lbl_8051B7F4@sda21(r2)
/* 80288864 002857A4  EC 00 08 24 */	fdivs f0, f0, f1
/* 80288868 002857A8  EC 42 00 32 */	fmuls f2, f2, f0
/* 8028886C 002857AC  EC E7 00 32 */	fmuls f7, f7, f0
/* 80288870 002857B0  EC 63 00 32 */	fmuls f3, f3, f0
.L_80288874:
/* 80288874 002857B4  C0 03 02 E4 */	lfs f0, 0x2e4(r3)
/* 80288878 002857B8  EC 42 00 32 */	fmuls f2, f2, f0
/* 8028887C 002857BC  EC 63 00 32 */	fmuls f3, f3, f0
/* 80288880 002857C0  D0 5F 01 D4 */	stfs f2, 0x1d4(r31)
/* 80288884 002857C4  D0 FF 01 D8 */	stfs f7, 0x1d8(r31)
/* 80288888 002857C8  D0 7F 01 DC */	stfs f3, 0x1dc(r31)
.L_8028888C:
/* 8028888C 002857CC  C0 22 D4 98 */	lfs f1, lbl_8051B7F8@sda21(r2)
/* 80288890 002857D0  7F E3 FB 78 */	mr r3, r31
/* 80288894 002857D4  48 00 17 09 */	bl flickPikmin__Q34Game5Queen3ObjFf
/* 80288898 002857D8  7F E3 FB 78 */	mr r3, r31
/* 8028889C 002857DC  48 00 14 15 */	bl rollingAttack__Q34Game5Queen3ObjFv
/* 802888A0 002857E0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802888A4 002857E4  7F E4 FB 78 */	mr r4, r31
/* 802888A8 002857E8  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802888AC 002857EC  38 61 00 20 */	addi r3, r1, 0x20
/* 802888B0 002857F0  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 802888B4 002857F4  EC 01 00 2A */	fadds f0, f1, f0
/* 802888B8 002857F8  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802888BC 002857FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802888C0 00285800  81 8C 00 08 */	lwz r12, 8(r12)
/* 802888C4 00285804  7D 89 03 A6 */	mtctr r12
/* 802888C8 00285808  4E 80 04 21 */	bctrl 
/* 802888CC 0028580C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802888D0 00285810  38 A1 00 44 */	addi r5, r1, 0x44
/* 802888D4 00285814  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802888D8 00285818  38 80 00 0F */	li r4, 0xf
/* 802888DC 0028581C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802888E0 00285820  38 C0 00 02 */	li r6, 2
/* 802888E4 00285824  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 802888E8 00285828  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802888EC 0028582C  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802888F0 00285830  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 802888F4 00285834  4B FC 99 49 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802888F8 00285838  48 00 00 14 */	b .L_8028890C
.L_802888FC:
/* 802888FC 0028583C  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288900 00285840  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80288904 00285844  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80288908 00285848  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8028890C:
/* 8028890C 0028584C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80288910 00285850  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288914 00285854  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80288918 00285858  4C 40 13 82 */	cror 2, 0, 2
/* 8028891C 0028585C  40 82 00 2C */	bne .L_80288948
/* 80288920 00285860  38 00 00 00 */	li r0, 0
/* 80288924 00285864  7F E3 FB 78 */	mr r3, r31
/* 80288928 00285868  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 8028892C 0028586C  98 1F 02 C2 */	stb r0, 0x2c2(r31)
/* 80288930 00285870  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80288934 00285874  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80288938 00285878  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8028893C 0028587C  4B E7 C9 65 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80288940 00285880  7F E3 FB 78 */	mr r3, r31
/* 80288944 00285884  48 00 25 39 */	bl finishBossAttackLoopBGM__Q34Game5Queen3ObjFv
.L_80288948:
/* 80288948 00285888  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8028894C 0028588C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80288950 00285890  28 00 00 00 */	cmplwi r0, 0
/* 80288954 00285894  41 82 02 F0 */	beq .L_80288C44
/* 80288958 00285898  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8028895C 0028589C  28 00 00 02 */	cmplwi r0, 2
/* 80288960 002858A0  40 82 02 58 */	bne .L_80288BB8
/* 80288964 002858A4  7F E3 FB 78 */	mr r3, r31
/* 80288968 002858A8  4B E7 E9 E1 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 8028896C 002858AC  2C 03 00 05 */	cmpwi r3, 5
/* 80288970 002858B0  40 82 00 0C */	bne .L_8028897C
/* 80288974 002858B4  C3 C2 D4 80 */	lfs f30, lbl_8051B7E0@sda21(r2)
/* 80288978 002858B8  48 00 00 08 */	b .L_80288980
.L_8028897C:
/* 8028897C 002858BC  C3 C2 D4 84 */	lfs f30, lbl_8051B7E4@sda21(r2)
.L_80288980:
/* 80288980 002858C0  7F E3 FB 78 */	mr r3, r31
/* 80288984 002858C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80288988 002858C8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028898C 002858CC  7D 89 03 A6 */	mtctr r12
/* 80288990 002858D0  4E 80 04 21 */	bctrl 
/* 80288994 002858D4  EC 7E 08 2A */	fadds f3, f30, f1
/* 80288998 002858D8  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 8028899C 002858DC  FC 20 18 90 */	fmr f1, f3
/* 802889A0 002858E0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802889A4 002858E4  40 80 00 08 */	bge .L_802889AC
/* 802889A8 002858E8  FC 20 18 50 */	fneg f1, f3
.L_802889AC:
/* 802889AC 002858EC  C0 42 D4 88 */	lfs f2, lbl_8051B7E8@sda21(r2)
/* 802889B0 002858F0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802889B4 002858F4  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 802889B8 002858F8  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802889BC 002858FC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802889C0 00285900  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802889C4 00285904  FC 00 08 1E */	fctiwz f0, f1
/* 802889C8 00285908  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 802889CC 0028590C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802889D0 00285910  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802889D4 00285914  7C 64 02 14 */	add r3, r4, r0
/* 802889D8 00285918  C3 E3 00 04 */	lfs f31, 4(r3)
/* 802889DC 0028591C  40 80 00 28 */	bge .L_80288A04
/* 802889E0 00285920  C0 02 D4 8C */	lfs f0, lbl_8051B7EC@sda21(r2)
/* 802889E4 00285924  EC 03 00 32 */	fmuls f0, f3, f0
/* 802889E8 00285928  FC 00 00 1E */	fctiwz f0, f0
/* 802889EC 0028592C  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 802889F0 00285930  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 802889F4 00285934  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802889F8 00285938  7C 04 04 2E */	lfsx f0, r4, r0
/* 802889FC 0028593C  FF C0 00 50 */	fneg f30, f0
/* 80288A00 00285940  48 00 00 1C */	b .L_80288A1C
.L_80288A04:
/* 80288A04 00285944  EC 03 00 B2 */	fmuls f0, f3, f2
/* 80288A08 00285948  FC 00 00 1E */	fctiwz f0, f0
/* 80288A0C 0028594C  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 80288A10 00285950  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80288A14 00285954  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80288A18 00285958  7F C4 04 2E */	lfsx f30, r4, r0
.L_80288A1C:
/* 80288A1C 0028595C  7F E4 FB 78 */	mr r4, r31
/* 80288A20 00285960  38 61 00 14 */	addi r3, r1, 0x14
/* 80288A24 00285964  81 9F 00 00 */	lwz r12, 0(r31)
/* 80288A28 00285968  81 8C 00 08 */	lwz r12, 8(r12)
/* 80288A2C 0028596C  7D 89 03 A6 */	mtctr r12
/* 80288A30 00285970  4E 80 04 21 */	bctrl 
/* 80288A34 00285974  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80288A38 00285978  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80288A3C 0028597C  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80288A40 00285980  C0 81 00 1C */	lfs f4, 0x1c(r1)
/* 80288A44 00285984  C0 5F 01 A0 */	lfs f2, 0x1a0(r31)
/* 80288A48 00285988  EC 21 00 28 */	fsubs f1, f1, f0
/* 80288A4C 0028598C  C0 62 D4 70 */	lfs f3, lbl_8051B7D0@sda21(r2)
/* 80288A50 00285990  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 80288A54 00285994  EC A4 10 28 */	fsubs f5, f4, f2
/* 80288A58 00285998  EC 81 1F BA */	fmadds f4, f1, f30, f3
/* 80288A5C 0028599C  C0 42 D4 9C */	lfs f2, lbl_8051B7FC@sda21(r2)
/* 80288A60 002859A0  C0 23 03 84 */	lfs f1, 0x384(r3)
/* 80288A64 002859A4  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 80288A68 002859A8  C0 63 03 5C */	lfs f3, 0x35c(r3)
/* 80288A6C 002859AC  EC 02 08 2A */	fadds f0, f2, f1
/* 80288A70 002859B0  EF C5 27 FA */	fmadds f30, f5, f31, f4
/* 80288A74 002859B4  EF E3 10 28 */	fsubs f31, f3, f2
/* 80288A78 002859B8  FF A0 00 50 */	fneg f29, f0
/* 80288A7C 002859BC  4C 40 13 82 */	cror 2, 0, 2
/* 80288A80 002859C0  40 82 00 0C */	bne .L_80288A8C
/* 80288A84 002859C4  7F E3 FB 78 */	mr r3, r31
/* 80288A88 002859C8  48 00 23 F5 */	bl finishBossAttackLoopBGM__Q34Game5Queen3ObjFv
.L_80288A8C:
/* 80288A8C 002859CC  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 80288A90 002859D0  40 81 00 C4 */	ble .L_80288B54
/* 80288A94 002859D4  88 1F 02 C2 */	lbz r0, 0x2c2(r31)
/* 80288A98 002859D8  28 00 00 00 */	cmplwi r0, 0
/* 80288A9C 002859DC  41 82 00 64 */	beq .L_80288B00
/* 80288AA0 002859E0  7F E3 FB 78 */	mr r3, r31
/* 80288AA4 002859E4  48 00 1A 49 */	bl createCrashFallRock__Q34Game5Queen3ObjFv
/* 80288AA8 002859E8  7F E4 FB 78 */	mr r4, r31
/* 80288AAC 002859EC  38 61 00 08 */	addi r3, r1, 8
/* 80288AB0 002859F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80288AB4 002859F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80288AB8 002859F8  7D 89 03 A6 */	mtctr r12
/* 80288ABC 002859FC  4E 80 04 21 */	bctrl 
/* 80288AC0 00285A00  C0 41 00 08 */	lfs f2, 8(r1)
/* 80288AC4 00285A04  38 A1 00 38 */	addi r5, r1, 0x38
/* 80288AC8 00285A08  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80288ACC 00285A0C  38 80 00 1B */	li r4, 0x1b
/* 80288AD0 00285A10  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80288AD4 00285A14  38 C0 00 02 */	li r6, 2
/* 80288AD8 00285A18  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80288ADC 00285A1C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80288AE0 00285A20  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80288AE4 00285A24  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80288AE8 00285A28  4B FC 97 55 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80288AEC 00285A2C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80288AF0 00285A30  38 A1 00 38 */	addi r5, r1, 0x38
/* 80288AF4 00285A34  38 80 00 0F */	li r4, 0xf
/* 80288AF8 00285A38  38 C0 00 02 */	li r6, 2
/* 80288AFC 00285A3C  4B FC AC 85 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
.L_80288B00:
/* 80288B00 00285A40  38 60 00 00 */	li r3, 0
/* 80288B04 00285A44  38 00 00 05 */	li r0, 5
/* 80288B08 00285A48  98 7F 02 C2 */	stb r3, 0x2c2(r31)
/* 80288B0C 00285A4C  7F E3 FB 78 */	mr r3, r31
/* 80288B10 00285A50  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80288B14 00285A54  4B E7 C7 8D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80288B18 00285A58  7F E3 FB 78 */	mr r3, r31
/* 80288B1C 00285A5C  38 80 00 01 */	li r4, 1
/* 80288B20 00285A60  48 00 2E 61 */	bl finishRollingEffect__Q34Game5Queen3ObjFb
/* 80288B24 00285A64  7F E3 FB 78 */	mr r3, r31
/* 80288B28 00285A68  81 9F 00 00 */	lwz r12, 0(r31)
/* 80288B2C 00285A6C  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80288B30 00285A70  7D 89 03 A6 */	mtctr r12
/* 80288B34 00285A74  4E 80 04 21 */	bctrl 
/* 80288B38 00285A78  81 83 00 00 */	lwz r12, 0(r3)
/* 80288B3C 00285A7C  38 80 58 BA */	li r4, 0x58ba
/* 80288B40 00285A80  38 A0 00 00 */	li r5, 0
/* 80288B44 00285A84  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80288B48 00285A88  7D 89 03 A6 */	mtctr r12
/* 80288B4C 00285A8C  4E 80 04 21 */	bctrl 
/* 80288B50 00285A90  48 00 00 F4 */	b .L_80288C44
.L_80288B54:
/* 80288B54 00285A94  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80288B58 00285A98  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 80288B5C 00285A9C  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 80288B60 00285AA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80288B64 00285AA4  40 81 00 E0 */	ble .L_80288C44
/* 80288B68 00285AA8  FC 1E E8 40 */	fcmpo cr0, f30, f29
/* 80288B6C 00285AAC  40 81 00 D8 */	ble .L_80288C44
/* 80288B70 00285AB0  C0 02 D4 9C */	lfs f0, lbl_8051B7FC@sda21(r2)
/* 80288B74 00285AB4  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80288B78 00285AB8  40 80 00 CC */	bge .L_80288C44
/* 80288B7C 00285ABC  88 1F 02 C2 */	lbz r0, 0x2c2(r31)
/* 80288B80 00285AC0  28 00 00 00 */	cmplwi r0, 0
/* 80288B84 00285AC4  41 82 00 0C */	beq .L_80288B90
/* 80288B88 00285AC8  7F E3 FB 78 */	mr r3, r31
/* 80288B8C 00285ACC  48 00 22 F1 */	bl finishBossAttackLoopBGM__Q34Game5Queen3ObjFv
.L_80288B90:
/* 80288B90 00285AD0  38 60 00 00 */	li r3, 0
/* 80288B94 00285AD4  38 00 00 02 */	li r0, 2
/* 80288B98 00285AD8  98 7F 02 C2 */	stb r3, 0x2c2(r31)
/* 80288B9C 00285ADC  7F E3 FB 78 */	mr r3, r31
/* 80288BA0 00285AE0  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80288BA4 00285AE4  4B E7 C6 FD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80288BA8 00285AE8  7F E3 FB 78 */	mr r3, r31
/* 80288BAC 00285AEC  38 80 00 00 */	li r4, 0
/* 80288BB0 00285AF0  48 00 2D D1 */	bl finishRollingEffect__Q34Game5Queen3ObjFb
/* 80288BB4 00285AF4  48 00 00 90 */	b .L_80288C44
.L_80288BB8:
/* 80288BB8 00285AF8  28 00 00 00 */	cmplwi r0, 0
/* 80288BBC 00285AFC  40 82 00 2C */	bne .L_80288BE8
/* 80288BC0 00285B00  88 1F 02 C2 */	lbz r0, 0x2c2(r31)
/* 80288BC4 00285B04  28 00 00 00 */	cmplwi r0, 0
/* 80288BC8 00285B08  40 82 00 7C */	bne .L_80288C44
/* 80288BCC 00285B0C  38 00 00 01 */	li r0, 1
/* 80288BD0 00285B10  7F E3 FB 78 */	mr r3, r31
/* 80288BD4 00285B14  98 1F 02 C2 */	stb r0, 0x2c2(r31)
/* 80288BD8 00285B18  48 00 2D 29 */	bl startRollingEffect__Q34Game5Queen3ObjFv
/* 80288BDC 00285B1C  7F E3 FB 78 */	mr r3, r31
/* 80288BE0 00285B20  48 00 21 C1 */	bl startBossAttackLoopBGM__Q34Game5Queen3ObjFv
/* 80288BE4 00285B24  48 00 00 60 */	b .L_80288C44
.L_80288BE8:
/* 80288BE8 00285B28  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80288BEC 00285B2C  40 82 00 58 */	bne .L_80288C44
/* 80288BF0 00285B30  7F E3 FB 78 */	mr r3, r31
/* 80288BF4 00285B34  4B E7 E7 55 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 80288BF8 00285B38  2C 03 00 06 */	cmpwi r3, 6
/* 80288BFC 00285B3C  40 82 00 28 */	bne .L_80288C24
/* 80288C00 00285B40  7F C3 F3 78 */	mr r3, r30
/* 80288C04 00285B44  7F E4 FB 78 */	mr r4, r31
/* 80288C08 00285B48  81 9E 00 00 */	lwz r12, 0(r30)
/* 80288C0C 00285B4C  38 C2 D4 78 */	addi r6, r2, lbl_8051B7D8@sda21
/* 80288C10 00285B50  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 80288C14 00285B54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80288C18 00285B58  7D 89 03 A6 */	mtctr r12
/* 80288C1C 00285B5C  4E 80 04 21 */	bctrl 
/* 80288C20 00285B60  48 00 00 24 */	b .L_80288C44
.L_80288C24:
/* 80288C24 00285B64  7F C3 F3 78 */	mr r3, r30
/* 80288C28 00285B68  7F E4 FB 78 */	mr r4, r31
/* 80288C2C 00285B6C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80288C30 00285B70  38 C0 00 00 */	li r6, 0
/* 80288C34 00285B74  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 80288C38 00285B78  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80288C3C 00285B7C  7D 89 03 A6 */	mtctr r12
/* 80288C40 00285B80  4E 80 04 21 */	bctrl 
.L_80288C44:
/* 80288C44 00285B84  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80288C48 00285B88  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80288C4C 00285B8C  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80288C50 00285B90  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80288C54 00285B94  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 80288C58 00285B98  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80288C5C 00285B9C  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80288C60 00285BA0  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80288C64 00285BA4  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80288C68 00285BA8  7C 08 03 A6 */	mtlr r0
/* 80288C6C 00285BAC  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80288C70 00285BB0  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Queen12StateRollingFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Queen12StateRollingFPQ24Game9EnemyBase, global
/* 80288C74 00285BB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288C78 00285BB8  7C 08 02 A6 */	mflr r0
/* 80288C7C 00285BBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288C80 00285BC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80288C84 00285BC4  7C 9F 23 78 */	mr r31, r4
/* 80288C88 00285BC8  7F E3 FB 78 */	mr r3, r31
/* 80288C8C 00285BCC  4B E7 8C F1 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80288C90 00285BD0  7F E3 FB 78 */	mr r3, r31
/* 80288C94 00285BD4  48 00 2D CD */	bl forceFinishRollingEffect__Q34Game5Queen3ObjFv
/* 80288C98 00285BD8  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288C9C 00285BDC  38 00 00 00 */	li r0, 0
/* 80288CA0 00285BE0  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80288CA4 00285BE4  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 80288CA8 00285BE8  98 1F 02 C2 */	stb r0, 0x2c2(r31)
/* 80288CAC 00285BEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80288CB0 00285BF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288CB4 00285BF4  7C 08 03 A6 */	mtlr r0
/* 80288CB8 00285BF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80288CBC 00285BFC  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Queen12StateRollingFPQ24Game9EnemyBase

.fn init__Q34Game5Queen9StateBornFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80288CC0 00285C00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288CC4 00285C04  7C 08 02 A6 */	mflr r0
/* 80288CC8 00285C08  38 60 FF FF */	li r3, -1
/* 80288CCC 00285C0C  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288CD0 00285C10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288CD4 00285C14  38 00 00 00 */	li r0, 0
/* 80288CD8 00285C18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80288CDC 00285C1C  7C 9F 23 78 */	mr r31, r4
/* 80288CE0 00285C20  90 64 02 D4 */	stw r3, 0x2d4(r4)
/* 80288CE4 00285C24  7F E3 FB 78 */	mr r3, r31
/* 80288CE8 00285C28  98 04 02 C5 */	stb r0, 0x2c5(r4)
/* 80288CEC 00285C2C  D0 04 02 C8 */	stfs f0, 0x2c8(r4)
/* 80288CF0 00285C30  4B E7 EA 8D */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 80288CF4 00285C34  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288CF8 00285C38  7F E3 FB 78 */	mr r3, r31
/* 80288CFC 00285C3C  38 80 00 07 */	li r4, 7
/* 80288D00 00285C40  38 A0 00 00 */	li r5, 0
/* 80288D04 00285C44  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80288D08 00285C48  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80288D0C 00285C4C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80288D10 00285C50  4B E7 C2 F5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80288D14 00285C54  7F E3 FB 78 */	mr r3, r31
/* 80288D18 00285C58  4B E7 8C B5 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80288D1C 00285C5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288D20 00285C60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80288D24 00285C64  7C 08 03 A6 */	mtlr r0
/* 80288D28 00285C68  38 21 00 10 */	addi r1, r1, 0x10
/* 80288D2C 00285C6C  4E 80 00 20 */	blr 
.endfn init__Q34Game5Queen9StateBornFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Queen9StateBornFPQ24Game9EnemyBase, global
/* 80288D30 00285C70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288D34 00285C74  7C 08 02 A6 */	mflr r0
/* 80288D38 00285C78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288D3C 00285C7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80288D40 00285C80  7C 9F 23 78 */	mr r31, r4
/* 80288D44 00285C84  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80288D48 00285C88  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80288D4C 00285C8C  28 00 00 00 */	cmplwi r0, 0
/* 80288D50 00285C90  41 82 00 74 */	beq .L_80288DC4
/* 80288D54 00285C94  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80288D58 00285C98  28 00 00 02 */	cmplwi r0, 2
/* 80288D5C 00285C9C  40 82 00 18 */	bne .L_80288D74
/* 80288D60 00285CA0  7F E3 FB 78 */	mr r3, r31
/* 80288D64 00285CA4  48 00 1A 5D */	bl createBabyChappy__Q34Game5Queen3ObjFv
/* 80288D68 00285CA8  7F E3 FB 78 */	mr r3, r31
/* 80288D6C 00285CAC  48 00 2B 61 */	bl createBornEffect__Q34Game5Queen3ObjFv
/* 80288D70 00285CB0  48 00 00 54 */	b .L_80288DC4
.L_80288D74:
/* 80288D74 00285CB4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80288D78 00285CB8  40 82 00 4C */	bne .L_80288DC4
/* 80288D7C 00285CBC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80288D80 00285CC0  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288D84 00285CC4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80288D88 00285CC8  4C 40 13 82 */	cror 2, 0, 2
/* 80288D8C 00285CCC  40 82 00 20 */	bne .L_80288DAC
/* 80288D90 00285CD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80288D94 00285CD4  38 A0 00 00 */	li r5, 0
/* 80288D98 00285CD8  38 C0 00 00 */	li r6, 0
/* 80288D9C 00285CDC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80288DA0 00285CE0  7D 89 03 A6 */	mtctr r12
/* 80288DA4 00285CE4  4E 80 04 21 */	bctrl 
/* 80288DA8 00285CE8  48 00 00 1C */	b .L_80288DC4
.L_80288DAC:
/* 80288DAC 00285CEC  81 83 00 00 */	lwz r12, 0(r3)
/* 80288DB0 00285CF0  38 A0 00 02 */	li r5, 2
/* 80288DB4 00285CF4  38 C0 00 00 */	li r6, 0
/* 80288DB8 00285CF8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80288DBC 00285CFC  7D 89 03 A6 */	mtctr r12
/* 80288DC0 00285D00  4E 80 04 21 */	bctrl 
.L_80288DC4:
/* 80288DC4 00285D04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288DC8 00285D08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80288DCC 00285D0C  7C 08 03 A6 */	mtlr r0
/* 80288DD0 00285D10  38 21 00 10 */	addi r1, r1, 0x10
/* 80288DD4 00285D14  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Queen9StateBornFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Queen9StateBornFPQ24Game9EnemyBase, global
/* 80288DD8 00285D18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288DDC 00285D1C  7C 08 02 A6 */	mflr r0
/* 80288DE0 00285D20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288DE4 00285D24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80288DE8 00285D28  7C 9F 23 78 */	mr r31, r4
/* 80288DEC 00285D2C  7F E3 FB 78 */	mr r3, r31
/* 80288DF0 00285D30  4B E7 E9 A5 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 80288DF4 00285D34  7F E3 FB 78 */	mr r3, r31
/* 80288DF8 00285D38  4B E7 8B 85 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80288DFC 00285D3C  C0 02 D4 70 */	lfs f0, lbl_8051B7D0@sda21(r2)
/* 80288E00 00285D40  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 80288E04 00285D44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288E08 00285D48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80288E0C 00285D4C  7C 08 03 A6 */	mtlr r0
/* 80288E10 00285D50  38 21 00 10 */	addi r1, r1, 0x10
/* 80288E14 00285D54  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Queen9StateBornFPQ24Game9EnemyBase

.fn __sinit_QueenState_cpp, local # static initializer
/* 80288E18 00285D58  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80288E1C 00285D5C  38 00 FF FF */	li r0, -1
/* 80288E20 00285D60  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80288E24 00285D64  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80288E28 00285D68  90 0D 96 C8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80288E2C 00285D6C  D4 03 9A B8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80288E30 00285D70  D0 0D 96 CC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80288E34 00285D74  D0 03 00 04 */	stfs f0, 4(r3)
/* 80288E38 00285D78  D0 03 00 08 */	stfs f0, 8(r3)
/* 80288E3C 00285D7C  4E 80 00 20 */	blr 
.endfn __sinit_QueenState_cpp
