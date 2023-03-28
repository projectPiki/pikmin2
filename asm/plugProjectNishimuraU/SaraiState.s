.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80486878, local
	.asciz "catchfly"
.endobj lbl_80486878
.balign 4
.obj lbl_80486884, local
	.asciz "fallmeck"
.endobj lbl_80486884

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game5Sarai13StateFallMeck, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai13StateFallMeckFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Sarai13StateFallMeckFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Sarai13StateFallMeckFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai13StateFallMeck
.obj __vt__Q34Game5Sarai13StateCatchFly, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai13StateCatchFlyFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Sarai13StateCatchFlyFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Sarai13StateCatchFlyFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai13StateCatchFly
.obj __vt__Q34Game5Sarai9StateFail, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai9StateFailFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Sarai9StateFailFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Sarai9StateFailFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai9StateFail
.obj __vt__Q34Game5Sarai11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Sarai11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Sarai11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai11StateAttack
.obj __vt__Q34Game5Sarai9StateMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Sarai9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Sarai9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai9StateMove
.obj __vt__Q34Game5Sarai9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Sarai9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Sarai9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai9StateWait
.obj __vt__Q34Game5Sarai10StateFlick, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Sarai10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Sarai10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai10StateFlick
.obj __vt__Q34Game5Sarai12StateTakeOff, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Sarai12StateTakeOffFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Sarai12StateTakeOffFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai12StateTakeOff
.obj __vt__Q34Game5Sarai11StateDamage, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Sarai11StateDamageFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Sarai11StateDamageFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai11StateDamage
.obj __vt__Q34Game5Sarai9StateFall, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Sarai9StateFallFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Sarai9StateFallFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai9StateFall
.obj __vt__Q34Game5Sarai9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game5Sarai9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game5Sarai9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai9StateDead
.obj __vt__Q34Game5Sarai5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game5Sarai5State
.obj __vt__Q34Game5Sarai3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game5Sarai3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game5Sarai3FSM

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051B110, local
	.asciz "dead"
.endobj lbl_8051B110
.balign 4
.obj lbl_8051B118, local
	.asciz "fall"
.endobj lbl_8051B118
.balign 4
.obj lbl_8051B120, local
	.asciz "damage"
.endobj lbl_8051B120
.balign 4
.obj lbl_8051B128, local
	.asciz "takeoff"
.endobj lbl_8051B128
.balign 4
.obj lbl_8051B130, local
	.asciz "flick"
.endobj lbl_8051B130
.balign 4
.obj lbl_8051B138, local
	.asciz "wait"
.endobj lbl_8051B138
.balign 4
.obj lbl_8051B140, local
	.asciz "move"
.endobj lbl_8051B140
.balign 4
.obj lbl_8051B148, local
	.asciz "attack"
.endobj lbl_8051B148
.balign 4
.obj lbl_8051B150, local
	.asciz "fail"
.endobj lbl_8051B150
.balign 4
.obj lbl_8051B158, local
	.float 0.0
.endobj lbl_8051B158
.obj lbl_8051B15C, local
	.float 10.0
.endobj lbl_8051B15C
.obj lbl_8051B160, local
	.float 1.0
.endobj lbl_8051B160
.obj lbl_8051B164, local
	.float 0.275
.endobj lbl_8051B164
.obj lbl_8051B168, local # tau
	.float 6.2831855
.endobj lbl_8051B168
.obj lbl_8051B16C, local
	.float -1000.0
.endobj lbl_8051B16C
.obj lbl_8051B170, local
	.float 32768.0
.endobj lbl_8051B170
.obj lbl_8051B174, local
	.float 0.5
.endobj lbl_8051B174
.balign 8
.obj lbl_8051B178, local
	.8byte 0x4330000080000000
.endobj lbl_8051B178
.obj lbl_8051B180, local
	.float 3.0
.endobj lbl_8051B180
.obj lbl_8051B184, local
	.float 625.0
.endobj lbl_8051B184
.obj lbl_8051B188, local # pi
	.float 3.1415927
.endobj lbl_8051B188
.obj lbl_8051B18C, local
	.float 0.0055555557
.endobj lbl_8051B18C
.obj lbl_8051B190, local
	.float 30.0
.endobj lbl_8051B190
.obj lbl_8051B194, local
	.float 17.5
.endobj lbl_8051B194
.obj lbl_8051B198, local
	.float -2500.0
.endobj lbl_8051B198
.obj lbl_8051B19C, local
	.float 1000.0
.endobj lbl_8051B19C
.obj lbl_8051B1A0, local
	.float 16.0
.endobj lbl_8051B1A0
.obj lbl_8051B1A4, local
	.float 25.0
.endobj lbl_8051B1A4
.obj lbl_8051B1A8, local
	.float 0.06666667
.endobj lbl_8051B1A8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game5Sarai3FSMFPQ24Game9EnemyBase, global
/* 802708A0 0026D7E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802708A4 0026D7E4  7C 08 02 A6 */	mflr r0
/* 802708A8 0026D7E8  38 80 00 0B */	li r4, 0xb
/* 802708AC 0026D7EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802708B0 0026D7F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802708B4 0026D7F4  7C 7F 1B 78 */	mr r31, r3
/* 802708B8 0026D7F8  4B EB FF AD */	bl create__Q24Game17EnemyStateMachineFi
/* 802708BC 0026D7FC  38 60 00 10 */	li r3, 0x10
/* 802708C0 0026D800  4B DB 35 E5 */	bl __nw__FUl
/* 802708C4 0026D804  7C 64 1B 79 */	or. r4, r3, r3
/* 802708C8 0026D808  41 82 00 3C */	beq .L_80270904
/* 802708CC 0026D80C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802708D0 0026D810  3C A0 80 4C */	lis r5, __vt__Q34Game5Sarai5State@ha
/* 802708D4 0026D814  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802708D8 0026D818  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai9StateDead@ha
/* 802708DC 0026D81C  90 04 00 00 */	stw r0, 0(r4)
/* 802708E0 0026D820  38 E0 00 00 */	li r7, 0
/* 802708E4 0026D824  38 C5 64 54 */	addi r6, r5, __vt__Q34Game5Sarai5State@l
/* 802708E8 0026D828  38 A2 CD B0 */	addi r5, r2, lbl_8051B110@sda21
/* 802708EC 0026D82C  90 E4 00 04 */	stw r7, 4(r4)
/* 802708F0 0026D830  38 03 64 30 */	addi r0, r3, __vt__Q34Game5Sarai9StateDead@l
/* 802708F4 0026D834  90 E4 00 08 */	stw r7, 8(r4)
/* 802708F8 0026D838  90 C4 00 00 */	stw r6, 0(r4)
/* 802708FC 0026D83C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80270900 0026D840  90 04 00 00 */	stw r0, 0(r4)
.L_80270904:
/* 80270904 0026D844  7F E3 FB 78 */	mr r3, r31
/* 80270908 0026D848  4B EC 00 01 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8027090C 0026D84C  38 60 00 10 */	li r3, 0x10
/* 80270910 0026D850  4B DB 35 95 */	bl __nw__FUl
/* 80270914 0026D854  7C 64 1B 79 */	or. r4, r3, r3
/* 80270918 0026D858  41 82 00 40 */	beq .L_80270958
/* 8027091C 0026D85C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80270920 0026D860  3C A0 80 4C */	lis r5, __vt__Q34Game5Sarai5State@ha
/* 80270924 0026D864  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80270928 0026D868  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai9StateFall@ha
/* 8027092C 0026D86C  90 04 00 00 */	stw r0, 0(r4)
/* 80270930 0026D870  38 00 00 01 */	li r0, 1
/* 80270934 0026D874  38 E0 00 00 */	li r7, 0
/* 80270938 0026D878  38 C5 64 54 */	addi r6, r5, __vt__Q34Game5Sarai5State@l
/* 8027093C 0026D87C  90 04 00 04 */	stw r0, 4(r4)
/* 80270940 0026D880  38 A2 CD B8 */	addi r5, r2, lbl_8051B118@sda21
/* 80270944 0026D884  38 03 64 0C */	addi r0, r3, __vt__Q34Game5Sarai9StateFall@l
/* 80270948 0026D888  90 E4 00 08 */	stw r7, 8(r4)
/* 8027094C 0026D88C  90 C4 00 00 */	stw r6, 0(r4)
/* 80270950 0026D890  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80270954 0026D894  90 04 00 00 */	stw r0, 0(r4)
.L_80270958:
/* 80270958 0026D898  7F E3 FB 78 */	mr r3, r31
/* 8027095C 0026D89C  4B EB FF AD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80270960 0026D8A0  38 60 00 10 */	li r3, 0x10
/* 80270964 0026D8A4  4B DB 35 41 */	bl __nw__FUl
/* 80270968 0026D8A8  7C 64 1B 79 */	or. r4, r3, r3
/* 8027096C 0026D8AC  41 82 00 40 */	beq .L_802709AC
/* 80270970 0026D8B0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80270974 0026D8B4  3C A0 80 4C */	lis r5, __vt__Q34Game5Sarai5State@ha
/* 80270978 0026D8B8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8027097C 0026D8BC  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai11StateDamage@ha
/* 80270980 0026D8C0  90 04 00 00 */	stw r0, 0(r4)
/* 80270984 0026D8C4  38 00 00 02 */	li r0, 2
/* 80270988 0026D8C8  38 E0 00 00 */	li r7, 0
/* 8027098C 0026D8CC  38 C5 64 54 */	addi r6, r5, __vt__Q34Game5Sarai5State@l
/* 80270990 0026D8D0  90 04 00 04 */	stw r0, 4(r4)
/* 80270994 0026D8D4  38 A2 CD C0 */	addi r5, r2, lbl_8051B120@sda21
/* 80270998 0026D8D8  38 03 63 E8 */	addi r0, r3, __vt__Q34Game5Sarai11StateDamage@l
/* 8027099C 0026D8DC  90 E4 00 08 */	stw r7, 8(r4)
/* 802709A0 0026D8E0  90 C4 00 00 */	stw r6, 0(r4)
/* 802709A4 0026D8E4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802709A8 0026D8E8  90 04 00 00 */	stw r0, 0(r4)
.L_802709AC:
/* 802709AC 0026D8EC  7F E3 FB 78 */	mr r3, r31
/* 802709B0 0026D8F0  4B EB FF 59 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802709B4 0026D8F4  38 60 00 10 */	li r3, 0x10
/* 802709B8 0026D8F8  4B DB 34 ED */	bl __nw__FUl
/* 802709BC 0026D8FC  7C 64 1B 79 */	or. r4, r3, r3
/* 802709C0 0026D900  41 82 00 40 */	beq .L_80270A00
/* 802709C4 0026D904  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802709C8 0026D908  3C A0 80 4C */	lis r5, __vt__Q34Game5Sarai5State@ha
/* 802709CC 0026D90C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802709D0 0026D910  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai12StateTakeOff@ha
/* 802709D4 0026D914  90 04 00 00 */	stw r0, 0(r4)
/* 802709D8 0026D918  38 00 00 03 */	li r0, 3
/* 802709DC 0026D91C  38 E0 00 00 */	li r7, 0
/* 802709E0 0026D920  38 C5 64 54 */	addi r6, r5, __vt__Q34Game5Sarai5State@l
/* 802709E4 0026D924  90 04 00 04 */	stw r0, 4(r4)
/* 802709E8 0026D928  38 A2 CD C8 */	addi r5, r2, lbl_8051B128@sda21
/* 802709EC 0026D92C  38 03 63 C4 */	addi r0, r3, __vt__Q34Game5Sarai12StateTakeOff@l
/* 802709F0 0026D930  90 E4 00 08 */	stw r7, 8(r4)
/* 802709F4 0026D934  90 C4 00 00 */	stw r6, 0(r4)
/* 802709F8 0026D938  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802709FC 0026D93C  90 04 00 00 */	stw r0, 0(r4)
.L_80270A00:
/* 80270A00 0026D940  7F E3 FB 78 */	mr r3, r31
/* 80270A04 0026D944  4B EB FF 05 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80270A08 0026D948  38 60 00 10 */	li r3, 0x10
/* 80270A0C 0026D94C  4B DB 34 99 */	bl __nw__FUl
/* 80270A10 0026D950  7C 64 1B 79 */	or. r4, r3, r3
/* 80270A14 0026D954  41 82 00 40 */	beq .L_80270A54
/* 80270A18 0026D958  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80270A1C 0026D95C  3C A0 80 4C */	lis r5, __vt__Q34Game5Sarai5State@ha
/* 80270A20 0026D960  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80270A24 0026D964  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai10StateFlick@ha
/* 80270A28 0026D968  90 04 00 00 */	stw r0, 0(r4)
/* 80270A2C 0026D96C  38 00 00 04 */	li r0, 4
/* 80270A30 0026D970  38 E0 00 00 */	li r7, 0
/* 80270A34 0026D974  38 C5 64 54 */	addi r6, r5, __vt__Q34Game5Sarai5State@l
/* 80270A38 0026D978  90 04 00 04 */	stw r0, 4(r4)
/* 80270A3C 0026D97C  38 A2 CD D0 */	addi r5, r2, lbl_8051B130@sda21
/* 80270A40 0026D980  38 03 63 A0 */	addi r0, r3, __vt__Q34Game5Sarai10StateFlick@l
/* 80270A44 0026D984  90 E4 00 08 */	stw r7, 8(r4)
/* 80270A48 0026D988  90 C4 00 00 */	stw r6, 0(r4)
/* 80270A4C 0026D98C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80270A50 0026D990  90 04 00 00 */	stw r0, 0(r4)
.L_80270A54:
/* 80270A54 0026D994  7F E3 FB 78 */	mr r3, r31
/* 80270A58 0026D998  4B EB FE B1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80270A5C 0026D99C  38 60 00 10 */	li r3, 0x10
/* 80270A60 0026D9A0  4B DB 34 45 */	bl __nw__FUl
/* 80270A64 0026D9A4  7C 64 1B 79 */	or. r4, r3, r3
/* 80270A68 0026D9A8  41 82 00 40 */	beq .L_80270AA8
/* 80270A6C 0026D9AC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80270A70 0026D9B0  3C A0 80 4C */	lis r5, __vt__Q34Game5Sarai5State@ha
/* 80270A74 0026D9B4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80270A78 0026D9B8  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai9StateWait@ha
/* 80270A7C 0026D9BC  90 04 00 00 */	stw r0, 0(r4)
/* 80270A80 0026D9C0  38 00 00 05 */	li r0, 5
/* 80270A84 0026D9C4  38 E0 00 00 */	li r7, 0
/* 80270A88 0026D9C8  38 C5 64 54 */	addi r6, r5, __vt__Q34Game5Sarai5State@l
/* 80270A8C 0026D9CC  90 04 00 04 */	stw r0, 4(r4)
/* 80270A90 0026D9D0  38 A2 CD D8 */	addi r5, r2, lbl_8051B138@sda21
/* 80270A94 0026D9D4  38 03 63 7C */	addi r0, r3, __vt__Q34Game5Sarai9StateWait@l
/* 80270A98 0026D9D8  90 E4 00 08 */	stw r7, 8(r4)
/* 80270A9C 0026D9DC  90 C4 00 00 */	stw r6, 0(r4)
/* 80270AA0 0026D9E0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80270AA4 0026D9E4  90 04 00 00 */	stw r0, 0(r4)
.L_80270AA8:
/* 80270AA8 0026D9E8  7F E3 FB 78 */	mr r3, r31
/* 80270AAC 0026D9EC  4B EB FE 5D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80270AB0 0026D9F0  38 60 00 10 */	li r3, 0x10
/* 80270AB4 0026D9F4  4B DB 33 F1 */	bl __nw__FUl
/* 80270AB8 0026D9F8  7C 64 1B 79 */	or. r4, r3, r3
/* 80270ABC 0026D9FC  41 82 00 40 */	beq .L_80270AFC
/* 80270AC0 0026DA00  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80270AC4 0026DA04  3C A0 80 4C */	lis r5, __vt__Q34Game5Sarai5State@ha
/* 80270AC8 0026DA08  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80270ACC 0026DA0C  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai9StateMove@ha
/* 80270AD0 0026DA10  90 04 00 00 */	stw r0, 0(r4)
/* 80270AD4 0026DA14  38 00 00 06 */	li r0, 6
/* 80270AD8 0026DA18  38 E0 00 00 */	li r7, 0
/* 80270ADC 0026DA1C  38 C5 64 54 */	addi r6, r5, __vt__Q34Game5Sarai5State@l
/* 80270AE0 0026DA20  90 04 00 04 */	stw r0, 4(r4)
/* 80270AE4 0026DA24  38 A2 CD E0 */	addi r5, r2, lbl_8051B140@sda21
/* 80270AE8 0026DA28  38 03 63 58 */	addi r0, r3, __vt__Q34Game5Sarai9StateMove@l
/* 80270AEC 0026DA2C  90 E4 00 08 */	stw r7, 8(r4)
/* 80270AF0 0026DA30  90 C4 00 00 */	stw r6, 0(r4)
/* 80270AF4 0026DA34  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80270AF8 0026DA38  90 04 00 00 */	stw r0, 0(r4)
.L_80270AFC:
/* 80270AFC 0026DA3C  7F E3 FB 78 */	mr r3, r31
/* 80270B00 0026DA40  4B EB FE 09 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80270B04 0026DA44  38 60 00 10 */	li r3, 0x10
/* 80270B08 0026DA48  4B DB 33 9D */	bl __nw__FUl
/* 80270B0C 0026DA4C  7C 64 1B 79 */	or. r4, r3, r3
/* 80270B10 0026DA50  41 82 00 40 */	beq .L_80270B50
/* 80270B14 0026DA54  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80270B18 0026DA58  3C A0 80 4C */	lis r5, __vt__Q34Game5Sarai5State@ha
/* 80270B1C 0026DA5C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80270B20 0026DA60  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai11StateAttack@ha
/* 80270B24 0026DA64  90 04 00 00 */	stw r0, 0(r4)
/* 80270B28 0026DA68  38 00 00 07 */	li r0, 7
/* 80270B2C 0026DA6C  38 E0 00 00 */	li r7, 0
/* 80270B30 0026DA70  38 C5 64 54 */	addi r6, r5, __vt__Q34Game5Sarai5State@l
/* 80270B34 0026DA74  90 04 00 04 */	stw r0, 4(r4)
/* 80270B38 0026DA78  38 A2 CD E8 */	addi r5, r2, lbl_8051B148@sda21
/* 80270B3C 0026DA7C  38 03 63 34 */	addi r0, r3, __vt__Q34Game5Sarai11StateAttack@l
/* 80270B40 0026DA80  90 E4 00 08 */	stw r7, 8(r4)
/* 80270B44 0026DA84  90 C4 00 00 */	stw r6, 0(r4)
/* 80270B48 0026DA88  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80270B4C 0026DA8C  90 04 00 00 */	stw r0, 0(r4)
.L_80270B50:
/* 80270B50 0026DA90  7F E3 FB 78 */	mr r3, r31
/* 80270B54 0026DA94  4B EB FD B5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80270B58 0026DA98  38 60 00 10 */	li r3, 0x10
/* 80270B5C 0026DA9C  4B DB 33 49 */	bl __nw__FUl
/* 80270B60 0026DAA0  7C 64 1B 79 */	or. r4, r3, r3
/* 80270B64 0026DAA4  41 82 00 40 */	beq .L_80270BA4
/* 80270B68 0026DAA8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80270B6C 0026DAAC  3C A0 80 4C */	lis r5, __vt__Q34Game5Sarai5State@ha
/* 80270B70 0026DAB0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80270B74 0026DAB4  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai9StateFail@ha
/* 80270B78 0026DAB8  90 04 00 00 */	stw r0, 0(r4)
/* 80270B7C 0026DABC  38 00 00 08 */	li r0, 8
/* 80270B80 0026DAC0  38 E0 00 00 */	li r7, 0
/* 80270B84 0026DAC4  38 C5 64 54 */	addi r6, r5, __vt__Q34Game5Sarai5State@l
/* 80270B88 0026DAC8  90 04 00 04 */	stw r0, 4(r4)
/* 80270B8C 0026DACC  38 A2 CD F0 */	addi r5, r2, lbl_8051B150@sda21
/* 80270B90 0026DAD0  38 03 63 10 */	addi r0, r3, __vt__Q34Game5Sarai9StateFail@l
/* 80270B94 0026DAD4  90 E4 00 08 */	stw r7, 8(r4)
/* 80270B98 0026DAD8  90 C4 00 00 */	stw r6, 0(r4)
/* 80270B9C 0026DADC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80270BA0 0026DAE0  90 04 00 00 */	stw r0, 0(r4)
.L_80270BA4:
/* 80270BA4 0026DAE4  7F E3 FB 78 */	mr r3, r31
/* 80270BA8 0026DAE8  4B EB FD 61 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80270BAC 0026DAEC  38 60 00 10 */	li r3, 0x10
/* 80270BB0 0026DAF0  4B DB 32 F5 */	bl __nw__FUl
/* 80270BB4 0026DAF4  7C 64 1B 79 */	or. r4, r3, r3
/* 80270BB8 0026DAF8  41 82 00 44 */	beq .L_80270BFC
/* 80270BBC 0026DAFC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80270BC0 0026DB00  3C C0 80 4C */	lis r6, __vt__Q34Game5Sarai5State@ha
/* 80270BC4 0026DB04  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80270BC8 0026DB08  3C A0 80 48 */	lis r5, lbl_80486878@ha
/* 80270BCC 0026DB0C  90 04 00 00 */	stw r0, 0(r4)
/* 80270BD0 0026DB10  38 00 00 09 */	li r0, 9
/* 80270BD4 0026DB14  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai13StateCatchFly@ha
/* 80270BD8 0026DB18  38 E0 00 00 */	li r7, 0
/* 80270BDC 0026DB1C  90 04 00 04 */	stw r0, 4(r4)
/* 80270BE0 0026DB20  38 C6 64 54 */	addi r6, r6, __vt__Q34Game5Sarai5State@l
/* 80270BE4 0026DB24  38 A5 68 78 */	addi r5, r5, lbl_80486878@l
/* 80270BE8 0026DB28  38 03 62 EC */	addi r0, r3, __vt__Q34Game5Sarai13StateCatchFly@l
/* 80270BEC 0026DB2C  90 E4 00 08 */	stw r7, 8(r4)
/* 80270BF0 0026DB30  90 C4 00 00 */	stw r6, 0(r4)
/* 80270BF4 0026DB34  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80270BF8 0026DB38  90 04 00 00 */	stw r0, 0(r4)
.L_80270BFC:
/* 80270BFC 0026DB3C  7F E3 FB 78 */	mr r3, r31
/* 80270C00 0026DB40  4B EB FD 09 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80270C04 0026DB44  38 60 00 10 */	li r3, 0x10
/* 80270C08 0026DB48  4B DB 32 9D */	bl __nw__FUl
/* 80270C0C 0026DB4C  7C 64 1B 79 */	or. r4, r3, r3
/* 80270C10 0026DB50  41 82 00 44 */	beq .L_80270C54
/* 80270C14 0026DB54  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80270C18 0026DB58  3C C0 80 4C */	lis r6, __vt__Q34Game5Sarai5State@ha
/* 80270C1C 0026DB5C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80270C20 0026DB60  3C A0 80 48 */	lis r5, lbl_80486884@ha
/* 80270C24 0026DB64  90 04 00 00 */	stw r0, 0(r4)
/* 80270C28 0026DB68  38 00 00 0A */	li r0, 0xa
/* 80270C2C 0026DB6C  3C 60 80 4C */	lis r3, __vt__Q34Game5Sarai13StateFallMeck@ha
/* 80270C30 0026DB70  38 E0 00 00 */	li r7, 0
/* 80270C34 0026DB74  90 04 00 04 */	stw r0, 4(r4)
/* 80270C38 0026DB78  38 C6 64 54 */	addi r6, r6, __vt__Q34Game5Sarai5State@l
/* 80270C3C 0026DB7C  38 A5 68 84 */	addi r5, r5, lbl_80486884@l
/* 80270C40 0026DB80  38 03 62 C8 */	addi r0, r3, __vt__Q34Game5Sarai13StateFallMeck@l
/* 80270C44 0026DB84  90 E4 00 08 */	stw r7, 8(r4)
/* 80270C48 0026DB88  90 C4 00 00 */	stw r6, 0(r4)
/* 80270C4C 0026DB8C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80270C50 0026DB90  90 04 00 00 */	stw r0, 0(r4)
.L_80270C54:
/* 80270C54 0026DB94  7F E3 FB 78 */	mr r3, r31
/* 80270C58 0026DB98  4B EB FC B1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80270C5C 0026DB9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80270C60 0026DBA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80270C64 0026DBA4  7C 08 03 A6 */	mtlr r0
/* 80270C68 0026DBA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80270C6C 0026DBAC  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai3FSMFPQ24Game9EnemyBase

.fn init__Q34Game5Sarai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80270C70 0026DBB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270C74 0026DBB4  7C 08 02 A6 */	mflr r0
/* 80270C78 0026DBB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270C7C 0026DBBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80270C80 0026DBC0  7C 9F 23 78 */	mr r31, r4
/* 80270C84 0026DBC4  7F E3 FB 78 */	mr r3, r31
/* 80270C88 0026DBC8  4B E9 4A 99 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80270C8C 0026DBCC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80270C90 0026DBD0  7F E3 FB 78 */	mr r3, r31
/* 80270C94 0026DBD4  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80270C98 0026DBD8  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80270C9C 0026DBDC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80270CA0 0026DBE0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80270CA4 0026DBE4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80270CA8 0026DBE8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80270CAC 0026DBEC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80270CB0 0026DBF0  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80270CB4 0026DBF4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80270CB8 0026DBF8  48 00 2B A5 */	bl flickStickTarget__Q34Game5Sarai3ObjFv
/* 80270CBC 0026DBFC  7F E3 FB 78 */	mr r3, r31
/* 80270CC0 0026DC00  38 80 00 0A */	li r4, 0xa
/* 80270CC4 0026DC04  38 A0 00 00 */	li r5, 0
/* 80270CC8 0026DC08  4B E9 43 3D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80270CCC 0026DC0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80270CD0 0026DC10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80270CD4 0026DC14  7C 08 03 A6 */	mtlr r0
/* 80270CD8 0026DC18  38 21 00 10 */	addi r1, r1, 0x10
/* 80270CDC 0026DC1C  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Sarai9StateDeadFPQ24Game9EnemyBase, global
/* 80270CE0 0026DC20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270CE4 0026DC24  7C 08 02 A6 */	mflr r0
/* 80270CE8 0026DC28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270CEC 0026DC2C  80 64 01 88 */	lwz r3, 0x188(r4)
/* 80270CF0 0026DC30  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80270CF4 0026DC34  28 00 00 00 */	cmplwi r0, 0
/* 80270CF8 0026DC38  41 82 00 1C */	beq .L_80270D14
/* 80270CFC 0026DC3C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80270D00 0026DC40  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80270D04 0026DC44  40 82 00 10 */	bne .L_80270D14
/* 80270D08 0026DC48  7C 83 23 78 */	mr r3, r4
/* 80270D0C 0026DC4C  38 80 00 00 */	li r4, 0
/* 80270D10 0026DC50  4B EC A3 E1 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80270D14:
/* 80270D14 0026DC54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80270D18 0026DC58  7C 08 03 A6 */	mtlr r0
/* 80270D1C 0026DC5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80270D20 0026DC60  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Sarai9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Sarai9StateDeadFPQ24Game9EnemyBase, global
/* 80270D24 0026DC64  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Sarai9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game5Sarai9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80270D28 0026DC68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270D2C 0026DC6C  7C 08 02 A6 */	mflr r0
/* 80270D30 0026DC70  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80270D34 0026DC74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270D38 0026DC78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80270D3C 0026DC7C  7C 9F 23 78 */	mr r31, r4
/* 80270D40 0026DC80  7F E3 FB 78 */	mr r3, r31
/* 80270D44 0026DC84  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 80270D48 0026DC88  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80270D4C 0026DC8C  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80270D50 0026DC90  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80270D54 0026DC94  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80270D58 0026DC98  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80270D5C 0026DC9C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80270D60 0026DCA0  4B E9 0C 6D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80270D64 0026DCA4  7F E3 FB 78 */	mr r3, r31
/* 80270D68 0026DCA8  38 80 00 06 */	li r4, 6
/* 80270D6C 0026DCAC  38 A0 00 00 */	li r5, 0
/* 80270D70 0026DCB0  4B E9 42 95 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80270D74 0026DCB4  7F E3 FB 78 */	mr r3, r31
/* 80270D78 0026DCB8  48 00 2A E5 */	bl flickStickTarget__Q34Game5Sarai3ObjFv
/* 80270D7C 0026DCBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80270D80 0026DCC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80270D84 0026DCC4  7C 08 03 A6 */	mtlr r0
/* 80270D88 0026DCC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80270D8C 0026DCCC  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Sarai9StateFallFPQ24Game9EnemyBase, global
/* 80270D90 0026DCD0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80270D94 0026DCD4  7C 08 02 A6 */	mflr r0
/* 80270D98 0026DCD8  90 01 00 34 */	stw r0, 0x34(r1)
/* 80270D9C 0026DCDC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80270DA0 0026DCE0  7C 9F 23 78 */	mr r31, r4
/* 80270DA4 0026DCE4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80270DA8 0026DCE8  7C 7E 1B 78 */	mr r30, r3
/* 80270DAC 0026DCEC  38 61 00 08 */	addi r3, r1, 8
/* 80270DB0 0026DCF0  81 84 00 00 */	lwz r12, 0(r4)
/* 80270DB4 0026DCF4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80270DB8 0026DCF8  7D 89 03 A6 */	mtctr r12
/* 80270DBC 0026DCFC  4E 80 04 21 */	bctrl 
/* 80270DC0 0026DD00  C0 41 00 08 */	lfs f2, 8(r1)
/* 80270DC4 0026DD04  38 81 00 14 */	addi r4, r1, 0x14
/* 80270DC8 0026DD08  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80270DCC 0026DD0C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80270DD0 0026DD10  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80270DD4 0026DD14  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80270DD8 0026DD18  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80270DDC 0026DD1C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80270DE0 0026DD20  81 83 00 04 */	lwz r12, 4(r3)
/* 80270DE4 0026DD24  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80270DE8 0026DD28  7D 89 03 A6 */	mtctr r12
/* 80270DEC 0026DD2C  4E 80 04 21 */	bctrl 
/* 80270DF0 0026DD30  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80270DF4 0026DD34  C0 02 CD FC */	lfs f0, lbl_8051B15C@sda21(r2)
/* 80270DF8 0026DD38  EC 22 08 28 */	fsubs f1, f2, f1
/* 80270DFC 0026DD3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80270E00 0026DD40  41 80 00 14 */	blt .L_80270E14
/* 80270E04 0026DD44  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80270E08 0026DD48  C0 02 CE 00 */	lfs f0, lbl_8051B160@sda21(r2)
/* 80270E0C 0026DD4C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80270E10 0026DD50  40 81 00 0C */	ble .L_80270E1C
.L_80270E14:
/* 80270E14 0026DD54  7F E3 FB 78 */	mr r3, r31
/* 80270E18 0026DD58  4B E9 44 89 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80270E1C:
/* 80270E1C 0026DD5C  7F E3 FB 78 */	mr r3, r31
/* 80270E20 0026DD60  4B E9 64 E1 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 80270E24 0026DD64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80270E28 0026DD68  40 82 00 58 */	bne .L_80270E80
/* 80270E2C 0026DD6C  7F E3 FB 78 */	mr r3, r31
/* 80270E30 0026DD70  81 9F 00 00 */	lwz r12, 0(r31)
/* 80270E34 0026DD74  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80270E38 0026DD78  7D 89 03 A6 */	mtctr r12
/* 80270E3C 0026DD7C  4E 80 04 21 */	bctrl 
/* 80270E40 0026DD80  C0 42 CE 04 */	lfs f2, lbl_8051B164@sda21(r2)
/* 80270E44 0026DD84  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80270E48 0026DD88  EC 21 10 28 */	fsubs f1, f1, f2
/* 80270E4C 0026DD8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80270E50 0026DD90  40 80 00 10 */	bge .L_80270E60
/* 80270E54 0026DD94  C0 02 CE 08 */	lfs f0, lbl_8051B168@sda21(r2)
/* 80270E58 0026DD98  EC 20 08 2A */	fadds f1, f0, f1
/* 80270E5C 0026DD9C  48 00 00 18 */	b .L_80270E74
.L_80270E60:
/* 80270E60 0026DDA0  C0 02 CE 08 */	lfs f0, lbl_8051B168@sda21(r2)
/* 80270E64 0026DDA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80270E68 0026DDA8  4C 41 13 82 */	cror 2, 1, 2
/* 80270E6C 0026DDAC  40 82 00 08 */	bne .L_80270E74
/* 80270E70 0026DDB0  EC 21 00 28 */	fsubs f1, f1, f0
.L_80270E74:
/* 80270E74 0026DDB4  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80270E78 0026DDB8  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80270E7C 0026DDBC  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
.L_80270E80:
/* 80270E80 0026DDC0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80270E84 0026DDC4  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80270E88 0026DDC8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80270E8C 0026DDCC  EC 01 00 2A */	fadds f0, f1, f0
/* 80270E90 0026DDD0  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80270E94 0026DDD4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80270E98 0026DDD8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80270E9C 0026DDDC  28 00 00 00 */	cmplwi r0, 0
/* 80270EA0 0026DDE0  41 82 00 90 */	beq .L_80270F30
/* 80270EA4 0026DDE4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80270EA8 0026DDE8  28 00 00 02 */	cmplwi r0, 2
/* 80270EAC 0026DDEC  40 82 00 24 */	bne .L_80270ED0
/* 80270EB0 0026DDF0  7F E3 FB 78 */	mr r3, r31
/* 80270EB4 0026DDF4  48 00 2E CD */	bl createDownEffect__Q34Game5Sarai3ObjFv
/* 80270EB8 0026DDF8  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80270EBC 0026DDFC  38 A1 00 14 */	addi r5, r1, 0x14
/* 80270EC0 0026DE00  38 80 00 0B */	li r4, 0xb
/* 80270EC4 0026DE04  38 C0 00 02 */	li r6, 2
/* 80270EC8 0026DE08  4B FE 28 B9 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80270ECC 0026DE0C  48 00 00 64 */	b .L_80270F30
.L_80270ED0:
/* 80270ED0 0026DE10  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80270ED4 0026DE14  40 82 00 5C */	bne .L_80270F30
/* 80270ED8 0026DE18  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80270EDC 0026DE1C  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80270EE0 0026DE20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80270EE4 0026DE24  4C 40 13 82 */	cror 2, 0, 2
/* 80270EE8 0026DE28  40 82 00 28 */	bne .L_80270F10
/* 80270EEC 0026DE2C  7F C3 F3 78 */	mr r3, r30
/* 80270EF0 0026DE30  7F E4 FB 78 */	mr r4, r31
/* 80270EF4 0026DE34  81 9E 00 00 */	lwz r12, 0(r30)
/* 80270EF8 0026DE38  38 A0 00 00 */	li r5, 0
/* 80270EFC 0026DE3C  38 C0 00 00 */	li r6, 0
/* 80270F00 0026DE40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80270F04 0026DE44  7D 89 03 A6 */	mtctr r12
/* 80270F08 0026DE48  4E 80 04 21 */	bctrl 
/* 80270F0C 0026DE4C  48 00 00 24 */	b .L_80270F30
.L_80270F10:
/* 80270F10 0026DE50  7F C3 F3 78 */	mr r3, r30
/* 80270F14 0026DE54  7F E4 FB 78 */	mr r4, r31
/* 80270F18 0026DE58  81 9E 00 00 */	lwz r12, 0(r30)
/* 80270F1C 0026DE5C  38 A0 00 02 */	li r5, 2
/* 80270F20 0026DE60  38 C0 00 00 */	li r6, 0
/* 80270F24 0026DE64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80270F28 0026DE68  7D 89 03 A6 */	mtctr r12
/* 80270F2C 0026DE6C  4E 80 04 21 */	bctrl 
.L_80270F30:
/* 80270F30 0026DE70  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80270F34 0026DE74  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80270F38 0026DE78  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80270F3C 0026DE7C  7C 08 03 A6 */	mtlr r0
/* 80270F40 0026DE80  38 21 00 30 */	addi r1, r1, 0x30
/* 80270F44 0026DE84  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Sarai9StateFallFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Sarai9StateFallFPQ24Game9EnemyBase, global
/* 80270F48 0026DE88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270F4C 0026DE8C  7C 08 02 A6 */	mflr r0
/* 80270F50 0026DE90  7C 83 23 78 */	mr r3, r4
/* 80270F54 0026DE94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270F58 0026DE98  4B E9 0A 25 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80270F5C 0026DE9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80270F60 0026DEA0  7C 08 03 A6 */	mtlr r0
/* 80270F64 0026DEA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80270F68 0026DEA8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Sarai9StateFallFPQ24Game9EnemyBase

.fn init__Q34Game5Sarai11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80270F6C 0026DEAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270F70 0026DEB0  7C 08 02 A6 */	mflr r0
/* 80270F74 0026DEB4  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80270F78 0026DEB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270F7C 0026DEBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80270F80 0026DEC0  7C 9F 23 78 */	mr r31, r4
/* 80270F84 0026DEC4  7F E3 FB 78 */	mr r3, r31
/* 80270F88 0026DEC8  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 80270F8C 0026DECC  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80270F90 0026DED0  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80270F94 0026DED4  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80270F98 0026DED8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80270F9C 0026DEDC  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80270FA0 0026DEE0  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80270FA4 0026DEE4  4B E9 0A 29 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80270FA8 0026DEE8  7F E3 FB 78 */	mr r3, r31
/* 80270FAC 0026DEEC  38 80 00 07 */	li r4, 7
/* 80270FB0 0026DEF0  38 A0 00 00 */	li r5, 0
/* 80270FB4 0026DEF4  4B E9 40 51 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80270FB8 0026DEF8  7F E3 FB 78 */	mr r3, r31
/* 80270FBC 0026DEFC  48 00 28 A1 */	bl flickStickTarget__Q34Game5Sarai3ObjFv
/* 80270FC0 0026DF00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80270FC4 0026DF04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80270FC8 0026DF08  7C 08 03 A6 */	mtlr r0
/* 80270FCC 0026DF0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80270FD0 0026DF10  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai11StateDamageFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Sarai11StateDamageFPQ24Game9EnemyBase, global
/* 80270FD4 0026DF14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80270FD8 0026DF18  7C 08 02 A6 */	mflr r0
/* 80270FDC 0026DF1C  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80270FE0 0026DF20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80270FE4 0026DF24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80270FE8 0026DF28  7C 9F 23 78 */	mr r31, r4
/* 80270FEC 0026DF2C  93 C1 00 08 */	stw r30, 8(r1)
/* 80270FF0 0026DF30  7C 7E 1B 78 */	mr r30, r3
/* 80270FF4 0026DF34  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 80270FF8 0026DF38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80270FFC 0026DF3C  4C 40 13 82 */	cror 2, 0, 2
/* 80271000 0026DF40  41 82 00 34 */	beq .L_80271034
/* 80271004 0026DF44  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80271008 0026DF48  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 8027100C 0026DF4C  C0 03 09 AC */	lfs f0, 0x9ac(r3)
/* 80271010 0026DF50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271014 0026DF54  41 81 00 20 */	bgt .L_80271034
/* 80271018 0026DF58  7F E3 FB 78 */	mr r3, r31
/* 8027101C 0026DF5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80271020 0026DF60  81 8C 02 FC */	lwz r12, 0x2fc(r12)
/* 80271024 0026DF64  7D 89 03 A6 */	mtctr r12
/* 80271028 0026DF68  4E 80 04 21 */	bctrl 
/* 8027102C 0026DF6C  2C 03 00 00 */	cmpwi r3, 0
/* 80271030 0026DF70  40 82 00 0C */	bne .L_8027103C
.L_80271034:
/* 80271034 0026DF74  7F E3 FB 78 */	mr r3, r31
/* 80271038 0026DF78  4B E9 42 69 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8027103C:
/* 8027103C 0026DF7C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80271040 0026DF80  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80271044 0026DF84  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80271048 0026DF88  EC 01 00 2A */	fadds f0, f1, f0
/* 8027104C 0026DF8C  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80271050 0026DF90  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80271054 0026DF94  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80271058 0026DF98  28 00 00 00 */	cmplwi r0, 0
/* 8027105C 0026DF9C  41 82 00 68 */	beq .L_802710C4
/* 80271060 0026DFA0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80271064 0026DFA4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80271068 0026DFA8  40 82 00 5C */	bne .L_802710C4
/* 8027106C 0026DFAC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80271070 0026DFB0  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80271074 0026DFB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271078 0026DFB8  4C 40 13 82 */	cror 2, 0, 2
/* 8027107C 0026DFBC  40 82 00 28 */	bne .L_802710A4
/* 80271080 0026DFC0  7F C3 F3 78 */	mr r3, r30
/* 80271084 0026DFC4  7F E4 FB 78 */	mr r4, r31
/* 80271088 0026DFC8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027108C 0026DFCC  38 A0 00 00 */	li r5, 0
/* 80271090 0026DFD0  38 C0 00 00 */	li r6, 0
/* 80271094 0026DFD4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80271098 0026DFD8  7D 89 03 A6 */	mtctr r12
/* 8027109C 0026DFDC  4E 80 04 21 */	bctrl 
/* 802710A0 0026DFE0  48 00 00 24 */	b .L_802710C4
.L_802710A4:
/* 802710A4 0026DFE4  7F C3 F3 78 */	mr r3, r30
/* 802710A8 0026DFE8  7F E4 FB 78 */	mr r4, r31
/* 802710AC 0026DFEC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802710B0 0026DFF0  38 A0 00 03 */	li r5, 3
/* 802710B4 0026DFF4  38 C0 00 00 */	li r6, 0
/* 802710B8 0026DFF8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802710BC 0026DFFC  7D 89 03 A6 */	mtctr r12
/* 802710C0 0026E000  4E 80 04 21 */	bctrl 
.L_802710C4:
/* 802710C4 0026E004  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802710C8 0026E008  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802710CC 0026E00C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802710D0 0026E010  7C 08 03 A6 */	mtlr r0
/* 802710D4 0026E014  38 21 00 10 */	addi r1, r1, 0x10
/* 802710D8 0026E018  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Sarai11StateDamageFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Sarai11StateDamageFPQ24Game9EnemyBase, global
/* 802710DC 0026E01C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802710E0 0026E020  7C 08 02 A6 */	mflr r0
/* 802710E4 0026E024  7C 83 23 78 */	mr r3, r4
/* 802710E8 0026E028  90 01 00 14 */	stw r0, 0x14(r1)
/* 802710EC 0026E02C  4B E9 08 91 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802710F0 0026E030  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802710F4 0026E034  7C 08 03 A6 */	mtlr r0
/* 802710F8 0026E038  38 21 00 10 */	addi r1, r1, 0x10
/* 802710FC 0026E03C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Sarai11StateDamageFPQ24Game9EnemyBase

.fn init__Q34Game5Sarai12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80271100 0026E040  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80271104 0026E044  7C 08 02 A6 */	mflr r0
/* 80271108 0026E048  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027110C 0026E04C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80271110 0026E050  7C 9F 23 78 */	mr r31, r4
/* 80271114 0026E054  7F E3 FB 78 */	mr r3, r31
/* 80271118 0026E058  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8027111C 0026E05C  60 00 00 04 */	ori r0, r0, 4
/* 80271120 0026E060  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80271124 0026E064  4B E9 08 A9 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80271128 0026E068  7F E3 FB 78 */	mr r3, r31
/* 8027112C 0026E06C  38 80 00 08 */	li r4, 8
/* 80271130 0026E070  38 A0 00 00 */	li r5, 0
/* 80271134 0026E074  4B E9 3E D1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80271138 0026E078  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027113C 0026E07C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80271140 0026E080  7C 08 03 A6 */	mtlr r0
/* 80271144 0026E084  38 21 00 10 */	addi r1, r1, 0x10
/* 80271148 0026E088  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Sarai12StateTakeOffFPQ24Game9EnemyBase, global
/* 8027114C 0026E08C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80271150 0026E090  7C 08 02 A6 */	mflr r0
/* 80271154 0026E094  90 01 00 14 */	stw r0, 0x14(r1)
/* 80271158 0026E098  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027115C 0026E09C  7C 9F 23 78 */	mr r31, r4
/* 80271160 0026E0A0  93 C1 00 08 */	stw r30, 8(r1)
/* 80271164 0026E0A4  7C 7E 1B 78 */	mr r30, r3
/* 80271168 0026E0A8  7F E3 FB 78 */	mr r3, r31
/* 8027116C 0026E0AC  48 00 1F 65 */	bl setHeightVelocity__Q34Game5Sarai3ObjFv
/* 80271170 0026E0B0  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 80271174 0026E0B4  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80271178 0026E0B8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8027117C 0026E0BC  4C 40 13 82 */	cror 2, 0, 2
/* 80271180 0026E0C0  41 82 00 14 */	beq .L_80271194
/* 80271184 0026E0C4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80271188 0026E0C8  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 8027118C 0026E0CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271190 0026E0D0  40 81 00 0C */	ble .L_8027119C
.L_80271194:
/* 80271194 0026E0D4  7F E3 FB 78 */	mr r3, r31
/* 80271198 0026E0D8  4B E9 41 09 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8027119C:
/* 8027119C 0026E0DC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802711A0 0026E0E0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802711A4 0026E0E4  28 00 00 00 */	cmplwi r0, 0
/* 802711A8 0026E0E8  41 82 00 94 */	beq .L_8027123C
/* 802711AC 0026E0EC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802711B0 0026E0F0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802711B4 0026E0F4  40 82 00 88 */	bne .L_8027123C
/* 802711B8 0026E0F8  7F E3 FB 78 */	mr r3, r31
/* 802711BC 0026E0FC  48 00 25 5D */	bl getNextStateOnHeight__Q34Game5Sarai3ObjFv
/* 802711C0 0026E100  7C 65 1B 79 */	or. r5, r3, r3
/* 802711C4 0026E104  41 80 00 24 */	blt .L_802711E8
/* 802711C8 0026E108  81 9E 00 00 */	lwz r12, 0(r30)
/* 802711CC 0026E10C  7F C3 F3 78 */	mr r3, r30
/* 802711D0 0026E110  7F E4 FB 78 */	mr r4, r31
/* 802711D4 0026E114  38 C0 00 00 */	li r6, 0
/* 802711D8 0026E118  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802711DC 0026E11C  7D 89 03 A6 */	mtctr r12
/* 802711E0 0026E120  4E 80 04 21 */	bctrl 
/* 802711E4 0026E124  48 00 00 58 */	b .L_8027123C
.L_802711E8:
/* 802711E8 0026E128  7F E3 FB 78 */	mr r3, r31
/* 802711EC 0026E12C  48 00 24 B1 */	bl getCatchTargetNum__Q34Game5Sarai3ObjFv
/* 802711F0 0026E130  2C 03 00 00 */	cmpwi r3, 0
/* 802711F4 0026E134  41 82 00 28 */	beq .L_8027121C
/* 802711F8 0026E138  7F C3 F3 78 */	mr r3, r30
/* 802711FC 0026E13C  7F E4 FB 78 */	mr r4, r31
/* 80271200 0026E140  81 9E 00 00 */	lwz r12, 0(r30)
/* 80271204 0026E144  38 A0 00 09 */	li r5, 9
/* 80271208 0026E148  38 C0 00 00 */	li r6, 0
/* 8027120C 0026E14C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80271210 0026E150  7D 89 03 A6 */	mtctr r12
/* 80271214 0026E154  4E 80 04 21 */	bctrl 
/* 80271218 0026E158  48 00 00 24 */	b .L_8027123C
.L_8027121C:
/* 8027121C 0026E15C  7F C3 F3 78 */	mr r3, r30
/* 80271220 0026E160  7F E4 FB 78 */	mr r4, r31
/* 80271224 0026E164  81 9E 00 00 */	lwz r12, 0(r30)
/* 80271228 0026E168  38 A0 00 06 */	li r5, 6
/* 8027122C 0026E16C  38 C0 00 00 */	li r6, 0
/* 80271230 0026E170  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80271234 0026E174  7D 89 03 A6 */	mtctr r12
/* 80271238 0026E178  4E 80 04 21 */	bctrl 
.L_8027123C:
/* 8027123C 0026E17C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80271240 0026E180  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80271244 0026E184  83 C1 00 08 */	lwz r30, 8(r1)
/* 80271248 0026E188  7C 08 03 A6 */	mtlr r0
/* 8027124C 0026E18C  38 21 00 10 */	addi r1, r1, 0x10
/* 80271250 0026E190  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Sarai12StateTakeOffFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Sarai12StateTakeOffFPQ24Game9EnemyBase, global
/* 80271254 0026E194  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80271258 0026E198  7C 08 02 A6 */	mflr r0
/* 8027125C 0026E19C  7C 83 23 78 */	mr r3, r4
/* 80271260 0026E1A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80271264 0026E1A4  4B E9 07 19 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80271268 0026E1A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027126C 0026E1AC  7C 08 03 A6 */	mtlr r0
/* 80271270 0026E1B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80271274 0026E1B4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Sarai12StateTakeOffFPQ24Game9EnemyBase

.fn init__Q34Game5Sarai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80271278 0026E1B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027127C 0026E1BC  7C 08 02 A6 */	mflr r0
/* 80271280 0026E1C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80271284 0026E1C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80271288 0026E1C8  7C 9F 23 78 */	mr r31, r4
/* 8027128C 0026E1CC  7F E3 FB 78 */	mr r3, r31
/* 80271290 0026E1D0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80271294 0026E1D4  60 00 00 04 */	ori r0, r0, 4
/* 80271298 0026E1D8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 8027129C 0026E1DC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802712A0 0026E1E0  64 00 00 20 */	oris r0, r0, 0x20
/* 802712A4 0026E1E4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802712A8 0026E1E8  4B E9 07 25 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802712AC 0026E1EC  7F E3 FB 78 */	mr r3, r31
/* 802712B0 0026E1F0  38 80 00 05 */	li r4, 5
/* 802712B4 0026E1F4  38 A0 00 00 */	li r5, 0
/* 802712B8 0026E1F8  4B E9 3D 4D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802712BC 0026E1FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802712C0 0026E200  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802712C4 0026E204  7C 08 03 A6 */	mtlr r0
/* 802712C8 0026E208  38 21 00 10 */	addi r1, r1, 0x10
/* 802712CC 0026E20C  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Sarai10StateFlickFPQ24Game9EnemyBase, global
/* 802712D0 0026E210  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802712D4 0026E214  7C 08 02 A6 */	mflr r0
/* 802712D8 0026E218  90 01 00 14 */	stw r0, 0x14(r1)
/* 802712DC 0026E21C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802712E0 0026E220  7C 9F 23 78 */	mr r31, r4
/* 802712E4 0026E224  93 C1 00 08 */	stw r30, 8(r1)
/* 802712E8 0026E228  7C 7E 1B 78 */	mr r30, r3
/* 802712EC 0026E22C  7F E3 FB 78 */	mr r3, r31
/* 802712F0 0026E230  48 00 1D E1 */	bl setHeightVelocity__Q34Game5Sarai3ObjFv
/* 802712F4 0026E234  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802712F8 0026E238  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802712FC 0026E23C  28 00 00 00 */	cmplwi r0, 0
/* 80271300 0026E240  41 82 00 D0 */	beq .L_802713D0
/* 80271304 0026E244  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80271308 0026E248  28 00 00 02 */	cmplwi r0, 2
/* 8027130C 0026E24C  40 82 00 30 */	bne .L_8027133C
/* 80271310 0026E250  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80271314 0026E254  7F E3 FB 78 */	mr r3, r31
/* 80271318 0026E258  C0 82 CE 0C */	lfs f4, lbl_8051B16C@sda21(r2)
/* 8027131C 0026E25C  38 80 00 00 */	li r4, 0
/* 80271320 0026E260  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 80271324 0026E264  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 80271328 0026E268  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 8027132C 0026E26C  4B EA 1D F1 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80271330 0026E270  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80271334 0026E274  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80271338 0026E278  48 00 00 98 */	b .L_802713D0
.L_8027133C:
/* 8027133C 0026E27C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80271340 0026E280  40 82 00 90 */	bne .L_802713D0
/* 80271344 0026E284  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80271348 0026E288  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 8027134C 0026E28C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271350 0026E290  4C 40 13 82 */	cror 2, 0, 2
/* 80271354 0026E294  40 82 00 28 */	bne .L_8027137C
/* 80271358 0026E298  7F C3 F3 78 */	mr r3, r30
/* 8027135C 0026E29C  7F E4 FB 78 */	mr r4, r31
/* 80271360 0026E2A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80271364 0026E2A4  38 A0 00 01 */	li r5, 1
/* 80271368 0026E2A8  38 C0 00 00 */	li r6, 0
/* 8027136C 0026E2AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80271370 0026E2B0  7D 89 03 A6 */	mtctr r12
/* 80271374 0026E2B4  4E 80 04 21 */	bctrl 
/* 80271378 0026E2B8  48 00 00 58 */	b .L_802713D0
.L_8027137C:
/* 8027137C 0026E2BC  7F E3 FB 78 */	mr r3, r31
/* 80271380 0026E2C0  48 00 23 1D */	bl getCatchTargetNum__Q34Game5Sarai3ObjFv
/* 80271384 0026E2C4  2C 03 00 00 */	cmpwi r3, 0
/* 80271388 0026E2C8  41 82 00 28 */	beq .L_802713B0
/* 8027138C 0026E2CC  7F C3 F3 78 */	mr r3, r30
/* 80271390 0026E2D0  7F E4 FB 78 */	mr r4, r31
/* 80271394 0026E2D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80271398 0026E2D8  38 A0 00 09 */	li r5, 9
/* 8027139C 0026E2DC  38 C0 00 00 */	li r6, 0
/* 802713A0 0026E2E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802713A4 0026E2E4  7D 89 03 A6 */	mtctr r12
/* 802713A8 0026E2E8  4E 80 04 21 */	bctrl 
/* 802713AC 0026E2EC  48 00 00 24 */	b .L_802713D0
.L_802713B0:
/* 802713B0 0026E2F0  7F C3 F3 78 */	mr r3, r30
/* 802713B4 0026E2F4  7F E4 FB 78 */	mr r4, r31
/* 802713B8 0026E2F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802713BC 0026E2FC  38 A0 00 06 */	li r5, 6
/* 802713C0 0026E300  38 C0 00 00 */	li r6, 0
/* 802713C4 0026E304  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802713C8 0026E308  7D 89 03 A6 */	mtctr r12
/* 802713CC 0026E30C  4E 80 04 21 */	bctrl 
.L_802713D0:
/* 802713D0 0026E310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802713D4 0026E314  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802713D8 0026E318  83 C1 00 08 */	lwz r30, 8(r1)
/* 802713DC 0026E31C  7C 08 03 A6 */	mtlr r0
/* 802713E0 0026E320  38 21 00 10 */	addi r1, r1, 0x10
/* 802713E4 0026E324  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Sarai10StateFlickFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Sarai10StateFlickFPQ24Game9EnemyBase, global
/* 802713E8 0026E328  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802713EC 0026E32C  7C 08 02 A6 */	mflr r0
/* 802713F0 0026E330  7C 83 23 78 */	mr r3, r4
/* 802713F4 0026E334  90 01 00 14 */	stw r0, 0x14(r1)
/* 802713F8 0026E338  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802713FC 0026E33C  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 80271400 0026E340  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80271404 0026E344  4B E9 05 79 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80271408 0026E348  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027140C 0026E34C  7C 08 03 A6 */	mtlr r0
/* 80271410 0026E350  38 21 00 10 */	addi r1, r1, 0x10
/* 80271414 0026E354  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Sarai10StateFlickFPQ24Game9EnemyBase

.fn init__Q34Game5Sarai9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80271418 0026E358  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8027141C 0026E35C  7C 08 02 A6 */	mflr r0
/* 80271420 0026E360  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80271424 0026E364  90 01 00 24 */	stw r0, 0x24(r1)
/* 80271428 0026E368  38 00 00 00 */	li r0, 0
/* 8027142C 0026E36C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80271430 0026E370  7C 9F 23 78 */	mr r31, r4
/* 80271434 0026E374  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 80271438 0026E378  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 8027143C 0026E37C  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80271440 0026E380  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80271444 0026E384  90 04 02 30 */	stw r0, 0x230(r4)
/* 80271448 0026E388  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8027144C 0026E38C  60 00 00 04 */	ori r0, r0, 4
/* 80271450 0026E390  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80271454 0026E394  4B E5 81 4D */	bl rand
/* 80271458 0026E398  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8027145C 0026E39C  3C 00 43 30 */	lis r0, 0x4330
/* 80271460 0026E3A0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80271464 0026E3A4  C8 62 CE 18 */	lfd f3, lbl_8051B178@sda21(r2)
/* 80271468 0026E3A8  90 01 00 08 */	stw r0, 8(r1)
/* 8027146C 0026E3AC  C0 42 CE 00 */	lfs f2, lbl_8051B160@sda21(r2)
/* 80271470 0026E3B0  C8 01 00 08 */	lfd f0, 8(r1)
/* 80271474 0026E3B4  C0 22 CE 10 */	lfs f1, lbl_8051B170@sda21(r2)
/* 80271478 0026E3B8  EC 60 18 28 */	fsubs f3, f0, f3
/* 8027147C 0026E3BC  C0 02 CE 14 */	lfs f0, lbl_8051B174@sda21(r2)
/* 80271480 0026E3C0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80271484 0026E3C4  EC 22 08 24 */	fdivs f1, f2, f1
/* 80271488 0026E3C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027148C 0026E3CC  40 80 00 18 */	bge .L_802714A4
/* 80271490 0026E3D0  7F E3 FB 78 */	mr r3, r31
/* 80271494 0026E3D4  38 80 00 00 */	li r4, 0
/* 80271498 0026E3D8  38 A0 00 00 */	li r5, 0
/* 8027149C 0026E3DC  4B E9 3B 69 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802714A0 0026E3E0  48 00 00 14 */	b .L_802714B4
.L_802714A4:
/* 802714A4 0026E3E4  7F E3 FB 78 */	mr r3, r31
/* 802714A8 0026E3E8  38 80 00 01 */	li r4, 1
/* 802714AC 0026E3EC  38 A0 00 00 */	li r5, 0
/* 802714B0 0026E3F0  4B E9 3B 55 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_802714B4:
/* 802714B4 0026E3F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802714B8 0026E3F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802714BC 0026E3FC  7C 08 03 A6 */	mtlr r0
/* 802714C0 0026E400  38 21 00 20 */	addi r1, r1, 0x20
/* 802714C4 0026E404  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Sarai9StateWaitFPQ24Game9EnemyBase, global
/* 802714C8 0026E408  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802714CC 0026E40C  7C 08 02 A6 */	mflr r0
/* 802714D0 0026E410  90 01 00 34 */	stw r0, 0x34(r1)
/* 802714D4 0026E414  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802714D8 0026E418  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802714DC 0026E41C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802714E0 0026E420  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802714E4 0026E424  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802714E8 0026E428  7C 9E 23 78 */	mr r30, r4
/* 802714EC 0026E42C  7C 7D 1B 78 */	mr r29, r3
/* 802714F0 0026E430  7F C3 F3 78 */	mr r3, r30
/* 802714F4 0026E434  48 00 1B DD */	bl setHeightVelocity__Q34Game5Sarai3ObjFv
/* 802714F8 0026E438  7F C3 F3 78 */	mr r3, r30
/* 802714FC 0026E43C  FF E0 08 90 */	fmr f31, f1
/* 80271500 0026E440  81 9E 00 00 */	lwz r12, 0(r30)
/* 80271504 0026E444  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80271508 0026E448  7D 89 03 A6 */	mtctr r12
/* 8027150C 0026E44C  4E 80 04 21 */	bctrl 
/* 80271510 0026E450  7C 7F 1B 79 */	or. r31, r3, r3
/* 80271514 0026E454  40 82 00 18 */	bne .L_8027152C
/* 80271518 0026E458  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8027151C 0026E45C  C0 3E 02 C0 */	lfs f1, 0x2c0(r30)
/* 80271520 0026E460  C0 03 08 E4 */	lfs f0, 0x8e4(r3)
/* 80271524 0026E464  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271528 0026E468  40 81 00 0C */	ble .L_80271534
.L_8027152C:
/* 8027152C 0026E46C  7F C3 F3 78 */	mr r3, r30
/* 80271530 0026E470  4B E9 3D 71 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80271534:
/* 80271534 0026E474  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80271538 0026E478  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 8027153C 0026E47C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80271540 0026E480  41 81 00 14 */	bgt .L_80271554
/* 80271544 0026E484  C0 3E 02 C0 */	lfs f1, 0x2c0(r30)
/* 80271548 0026E488  C0 02 CE 20 */	lfs f0, lbl_8051B180@sda21(r2)
/* 8027154C 0026E48C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271550 0026E490  40 81 00 34 */	ble .L_80271584
.L_80271554:
/* 80271554 0026E494  7F C3 F3 78 */	mr r3, r30
/* 80271558 0026E498  48 00 21 C1 */	bl getNextStateOnHeight__Q34Game5Sarai3ObjFv
/* 8027155C 0026E49C  7C 65 1B 79 */	or. r5, r3, r3
/* 80271560 0026E4A0  41 80 00 24 */	blt .L_80271584
/* 80271564 0026E4A4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80271568 0026E4A8  7F A3 EB 78 */	mr r3, r29
/* 8027156C 0026E4AC  7F C4 F3 78 */	mr r4, r30
/* 80271570 0026E4B0  38 C0 00 00 */	li r6, 0
/* 80271574 0026E4B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80271578 0026E4B8  7D 89 03 A6 */	mtctr r12
/* 8027157C 0026E4BC  4E 80 04 21 */	bctrl 
/* 80271580 0026E4C0  48 00 00 84 */	b .L_80271604
.L_80271584:
/* 80271584 0026E4C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80271588 0026E4C8  C0 3E 02 C0 */	lfs f1, 0x2c0(r30)
/* 8027158C 0026E4CC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80271590 0026E4D0  EC 01 00 2A */	fadds f0, f1, f0
/* 80271594 0026E4D4  D0 1E 02 C0 */	stfs f0, 0x2c0(r30)
/* 80271598 0026E4D8  80 7E 01 88 */	lwz r3, 0x188(r30)
/* 8027159C 0026E4DC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802715A0 0026E4E0  28 00 00 00 */	cmplwi r0, 0
/* 802715A4 0026E4E4  41 82 00 60 */	beq .L_80271604
/* 802715A8 0026E4E8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802715AC 0026E4EC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802715B0 0026E4F0  40 82 00 54 */	bne .L_80271604
/* 802715B4 0026E4F4  28 1F 00 00 */	cmplwi r31, 0
/* 802715B8 0026E4F8  41 82 00 2C */	beq .L_802715E4
/* 802715BC 0026E4FC  93 FE 02 30 */	stw r31, 0x230(r30)
/* 802715C0 0026E500  7F A3 EB 78 */	mr r3, r29
/* 802715C4 0026E504  7F C4 F3 78 */	mr r4, r30
/* 802715C8 0026E508  38 A0 00 07 */	li r5, 7
/* 802715CC 0026E50C  81 9D 00 00 */	lwz r12, 0(r29)
/* 802715D0 0026E510  38 C0 00 00 */	li r6, 0
/* 802715D4 0026E514  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802715D8 0026E518  7D 89 03 A6 */	mtctr r12
/* 802715DC 0026E51C  4E 80 04 21 */	bctrl 
/* 802715E0 0026E520  48 00 00 24 */	b .L_80271604
.L_802715E4:
/* 802715E4 0026E524  7F A3 EB 78 */	mr r3, r29
/* 802715E8 0026E528  7F C4 F3 78 */	mr r4, r30
/* 802715EC 0026E52C  81 9D 00 00 */	lwz r12, 0(r29)
/* 802715F0 0026E530  38 A0 00 06 */	li r5, 6
/* 802715F4 0026E534  38 C0 00 00 */	li r6, 0
/* 802715F8 0026E538  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802715FC 0026E53C  7D 89 03 A6 */	mtctr r12
/* 80271600 0026E540  4E 80 04 21 */	bctrl 
.L_80271604:
/* 80271604 0026E544  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80271608 0026E548  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8027160C 0026E54C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80271610 0026E550  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80271614 0026E554  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80271618 0026E558  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8027161C 0026E55C  7C 08 03 A6 */	mtlr r0
/* 80271620 0026E560  38 21 00 30 */	addi r1, r1, 0x30
/* 80271624 0026E564  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Sarai9StateWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Sarai9StateWaitFPQ24Game9EnemyBase, global
/* 80271628 0026E568  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Sarai9StateWaitFPQ24Game9EnemyBase

.fn init__Q34Game5Sarai9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8027162C 0026E56C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80271630 0026E570  7C 08 02 A6 */	mflr r0
/* 80271634 0026E574  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80271638 0026E578  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027163C 0026E57C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80271640 0026E580  7C 9F 23 78 */	mr r31, r4
/* 80271644 0026E584  7F E3 FB 78 */	mr r3, r31
/* 80271648 0026E588  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 8027164C 0026E58C  48 00 1B 8D */	bl setRandTarget__Q34Game5Sarai3ObjFv
/* 80271650 0026E590  38 00 00 00 */	li r0, 0
/* 80271654 0026E594  7F E3 FB 78 */	mr r3, r31
/* 80271658 0026E598  90 1F 02 30 */	stw r0, 0x230(r31)
/* 8027165C 0026E59C  38 80 00 01 */	li r4, 1
/* 80271660 0026E5A0  38 A0 00 00 */	li r5, 0
/* 80271664 0026E5A4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80271668 0026E5A8  60 00 00 04 */	ori r0, r0, 4
/* 8027166C 0026E5AC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80271670 0026E5B0  4B E9 39 95 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80271674 0026E5B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80271678 0026E5B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027167C 0026E5BC  7C 08 03 A6 */	mtlr r0
/* 80271680 0026E5C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80271684 0026E5C4  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Sarai9StateMoveFPQ24Game9EnemyBase, global
/* 80271688 0026E5C8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8027168C 0026E5CC  7C 08 02 A6 */	mflr r0
/* 80271690 0026E5D0  90 01 00 64 */	stw r0, 0x64(r1)
/* 80271694 0026E5D4  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80271698 0026E5D8  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8027169C 0026E5DC  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 802716A0 0026E5E0  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 802716A4 0026E5E4  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 802716A8 0026E5E8  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 802716AC 0026E5EC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802716B0 0026E5F0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802716B4 0026E5F4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802716B8 0026E5F8  7C 9E 23 78 */	mr r30, r4
/* 802716BC 0026E5FC  7C 7D 1B 78 */	mr r29, r3
/* 802716C0 0026E600  7F C3 F3 78 */	mr r3, r30
/* 802716C4 0026E604  48 00 1A 0D */	bl setHeightVelocity__Q34Game5Sarai3ObjFv
/* 802716C8 0026E608  7F C4 F3 78 */	mr r4, r30
/* 802716CC 0026E60C  FF E0 08 90 */	fmr f31, f1
/* 802716D0 0026E610  81 9E 00 00 */	lwz r12, 0(r30)
/* 802716D4 0026E614  38 61 00 08 */	addi r3, r1, 8
/* 802716D8 0026E618  81 8C 00 08 */	lwz r12, 8(r12)
/* 802716DC 0026E61C  7D 89 03 A6 */	mtctr r12
/* 802716E0 0026E620  4E 80 04 21 */	bctrl 
/* 802716E4 0026E624  C0 3E 02 D0 */	lfs f1, 0x2d0(r30)
/* 802716E8 0026E628  7F C3 F3 78 */	mr r3, r30
/* 802716EC 0026E62C  C0 5E 02 D4 */	lfs f2, 0x2d4(r30)
/* 802716F0 0026E630  C0 1E 02 CC */	lfs f0, 0x2cc(r30)
/* 802716F4 0026E634  C3 C1 00 08 */	lfs f30, 8(r1)
/* 802716F8 0026E638  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802716FC 0026E63C  C3 A1 00 10 */	lfs f29, 0x10(r1)
/* 80271700 0026E640  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80271704 0026E644  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80271708 0026E648  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027170C 0026E64C  81 8C 03 00 */	lwz r12, 0x300(r12)
/* 80271710 0026E650  7D 89 03 A6 */	mtctr r12
/* 80271714 0026E654  4E 80 04 21 */	bctrl 
/* 80271718 0026E658  7C 7F 1B 79 */	or. r31, r3, r3
/* 8027171C 0026E65C  40 82 00 38 */	bne .L_80271754
/* 80271720 0026E660  C0 3E 02 C0 */	lfs f1, 0x2c0(r30)
/* 80271724 0026E664  C0 02 CD FC */	lfs f0, lbl_8051B15C@sda21(r2)
/* 80271728 0026E668  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027172C 0026E66C  41 81 00 28 */	bgt .L_80271754
/* 80271730 0026E670  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80271734 0026E674  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80271738 0026E678  EC 5D 00 28 */	fsubs f2, f29, f0
/* 8027173C 0026E67C  C0 02 CE 24 */	lfs f0, lbl_8051B184@sda21(r2)
/* 80271740 0026E680  EC 7E 08 28 */	fsubs f3, f30, f1
/* 80271744 0026E684  EC 22 00 B2 */	fmuls f1, f2, f2
/* 80271748 0026E688  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 8027174C 0026E68C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271750 0026E690  40 80 00 20 */	bge .L_80271770
.L_80271754:
/* 80271754 0026E694  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80271758 0026E698  7F C3 F3 78 */	mr r3, r30
/* 8027175C 0026E69C  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 80271760 0026E6A0  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 80271764 0026E6A4  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 80271768 0026E6A8  4B E9 3B 39 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8027176C 0026E6AC  48 00 00 20 */	b .L_8027178C
.L_80271770:
/* 80271770 0026E6B0  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 80271774 0026E6B4  7F C3 F3 78 */	mr r3, r30
/* 80271778 0026E6B8  38 81 00 14 */	addi r4, r1, 0x14
/* 8027177C 0026E6BC  C0 25 08 94 */	lfs f1, 0x894(r5)
/* 80271780 0026E6C0  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 80271784 0026E6C4  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 80271788 0026E6C8  4B EA 3E 55 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
.L_8027178C:
/* 8027178C 0026E6CC  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 80271790 0026E6D0  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 80271794 0026E6D4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80271798 0026E6D8  41 81 00 14 */	bgt .L_802717AC
/* 8027179C 0026E6DC  C0 3E 02 C0 */	lfs f1, 0x2c0(r30)
/* 802717A0 0026E6E0  C0 02 CE 20 */	lfs f0, lbl_8051B180@sda21(r2)
/* 802717A4 0026E6E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802717A8 0026E6E8  40 81 00 34 */	ble .L_802717DC
.L_802717AC:
/* 802717AC 0026E6EC  7F C3 F3 78 */	mr r3, r30
/* 802717B0 0026E6F0  48 00 1F 69 */	bl getNextStateOnHeight__Q34Game5Sarai3ObjFv
/* 802717B4 0026E6F4  7C 65 1B 79 */	or. r5, r3, r3
/* 802717B8 0026E6F8  41 80 00 24 */	blt .L_802717DC
/* 802717BC 0026E6FC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802717C0 0026E700  7F A3 EB 78 */	mr r3, r29
/* 802717C4 0026E704  7F C4 F3 78 */	mr r4, r30
/* 802717C8 0026E708  38 C0 00 00 */	li r6, 0
/* 802717CC 0026E70C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802717D0 0026E710  7D 89 03 A6 */	mtctr r12
/* 802717D4 0026E714  4E 80 04 21 */	bctrl 
/* 802717D8 0026E718  48 00 00 84 */	b .L_8027185C
.L_802717DC:
/* 802717DC 0026E71C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802717E0 0026E720  C0 3E 02 C0 */	lfs f1, 0x2c0(r30)
/* 802717E4 0026E724  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802717E8 0026E728  EC 01 00 2A */	fadds f0, f1, f0
/* 802717EC 0026E72C  D0 1E 02 C0 */	stfs f0, 0x2c0(r30)
/* 802717F0 0026E730  80 7E 01 88 */	lwz r3, 0x188(r30)
/* 802717F4 0026E734  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802717F8 0026E738  28 00 00 00 */	cmplwi r0, 0
/* 802717FC 0026E73C  41 82 00 60 */	beq .L_8027185C
/* 80271800 0026E740  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80271804 0026E744  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80271808 0026E748  40 82 00 54 */	bne .L_8027185C
/* 8027180C 0026E74C  28 1F 00 00 */	cmplwi r31, 0
/* 80271810 0026E750  41 82 00 2C */	beq .L_8027183C
/* 80271814 0026E754  93 FE 02 30 */	stw r31, 0x230(r30)
/* 80271818 0026E758  7F A3 EB 78 */	mr r3, r29
/* 8027181C 0026E75C  7F C4 F3 78 */	mr r4, r30
/* 80271820 0026E760  38 A0 00 07 */	li r5, 7
/* 80271824 0026E764  81 9D 00 00 */	lwz r12, 0(r29)
/* 80271828 0026E768  38 C0 00 00 */	li r6, 0
/* 8027182C 0026E76C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80271830 0026E770  7D 89 03 A6 */	mtctr r12
/* 80271834 0026E774  4E 80 04 21 */	bctrl 
/* 80271838 0026E778  48 00 00 24 */	b .L_8027185C
.L_8027183C:
/* 8027183C 0026E77C  7F A3 EB 78 */	mr r3, r29
/* 80271840 0026E780  7F C4 F3 78 */	mr r4, r30
/* 80271844 0026E784  81 9D 00 00 */	lwz r12, 0(r29)
/* 80271848 0026E788  38 A0 00 05 */	li r5, 5
/* 8027184C 0026E78C  38 C0 00 00 */	li r6, 0
/* 80271850 0026E790  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80271854 0026E794  7D 89 03 A6 */	mtctr r12
/* 80271858 0026E798  4E 80 04 21 */	bctrl 
.L_8027185C:
/* 8027185C 0026E79C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80271860 0026E7A0  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80271864 0026E7A4  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80271868 0026E7A8  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8027186C 0026E7AC  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 80271870 0026E7B0  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80271874 0026E7B4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80271878 0026E7B8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8027187C 0026E7BC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80271880 0026E7C0  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80271884 0026E7C4  7C 08 03 A6 */	mtlr r0
/* 80271888 0026E7C8  38 21 00 60 */	addi r1, r1, 0x60
/* 8027188C 0026E7CC  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Sarai9StateMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Sarai9StateMoveFPQ24Game9EnemyBase, global
/* 80271890 0026E7D0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Sarai9StateMoveFPQ24Game9EnemyBase

.fn init__Q34Game5Sarai11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80271894 0026E7D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80271898 0026E7D8  7C 08 02 A6 */	mflr r0
/* 8027189C 0026E7DC  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 802718A0 0026E7E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802718A4 0026E7E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802718A8 0026E7E8  7C 9F 23 78 */	mr r31, r4
/* 802718AC 0026E7EC  7F E3 FB 78 */	mr r3, r31
/* 802718B0 0026E7F0  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 802718B4 0026E7F4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802718B8 0026E7F8  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802718BC 0026E7FC  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802718C0 0026E800  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802718C4 0026E804  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802718C8 0026E808  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802718CC 0026E80C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802718D0 0026E810  64 00 00 20 */	oris r0, r0, 0x20
/* 802718D4 0026E814  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802718D8 0026E818  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802718DC 0026E81C  60 00 00 04 */	ori r0, r0, 4
/* 802718E0 0026E820  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802718E4 0026E824  4B E9 00 E9 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802718E8 0026E828  7F E3 FB 78 */	mr r3, r31
/* 802718EC 0026E82C  38 80 00 02 */	li r4, 2
/* 802718F0 0026E830  38 A0 00 00 */	li r5, 0
/* 802718F4 0026E834  4B E9 37 11 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802718F8 0026E838  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802718FC 0026E83C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80271900 0026E840  7C 08 03 A6 */	mtlr r0
/* 80271904 0026E844  38 21 00 10 */	addi r1, r1, 0x10
/* 80271908 0026E848  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Sarai11StateAttackFPQ24Game9EnemyBase, global
/* 8027190C 0026E84C  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80271910 0026E850  7C 08 02 A6 */	mflr r0
/* 80271914 0026E854  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80271918 0026E858  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 8027191C 0026E85C  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 80271920 0026E860  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 80271924 0026E864  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 80271928 0026E868  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 8027192C 0026E86C  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 80271930 0026E870  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 80271934 0026E874  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 80271938 0026E878  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8027193C 0026E87C  93 C1 00 98 */	stw r30, 0x98(r1)
/* 80271940 0026E880  93 A1 00 94 */	stw r29, 0x94(r1)
/* 80271944 0026E884  83 C4 02 30 */	lwz r30, 0x230(r4)
/* 80271948 0026E888  7C 7D 1B 78 */	mr r29, r3
/* 8027194C 0026E88C  7C 9F 23 78 */	mr r31, r4
/* 80271950 0026E890  28 1E 00 00 */	cmplwi r30, 0
/* 80271954 0026E894  41 82 03 5C */	beq .L_80271CB0
/* 80271958 0026E898  7F E3 FB 78 */	mr r3, r31
/* 8027195C 0026E89C  4B E9 39 11 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 80271960 0026E8A0  FF E0 08 90 */	fmr f31, f1
/* 80271964 0026E8A4  C0 02 CD FC */	lfs f0, lbl_8051B15C@sda21(r2)
/* 80271968 0026E8A8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8027196C 0026E8AC  4C 40 13 82 */	cror 2, 0, 2
/* 80271970 0026E8B0  40 82 00 FC */	bne .L_80271A6C
/* 80271974 0026E8B4  7F E3 FB 78 */	mr r3, r31
/* 80271978 0026E8B8  48 00 17 59 */	bl setHeightVelocity__Q34Game5Sarai3ObjFv
/* 8027197C 0026E8BC  7F C4 F3 78 */	mr r4, r30
/* 80271980 0026E8C0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80271984 0026E8C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80271988 0026E8C8  38 61 00 20 */	addi r3, r1, 0x20
/* 8027198C 0026E8CC  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 80271990 0026E8D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80271994 0026E8D4  C3 E5 03 0C */	lfs f31, 0x30c(r5)
/* 80271998 0026E8D8  7D 89 03 A6 */	mtctr r12
/* 8027199C 0026E8DC  4E 80 04 21 */	bctrl 
/* 802719A0 0026E8E0  7F E4 FB 78 */	mr r4, r31
/* 802719A4 0026E8E4  38 61 00 2C */	addi r3, r1, 0x2c
/* 802719A8 0026E8E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802719AC 0026E8EC  C3 A1 00 20 */	lfs f29, 0x20(r1)
/* 802719B0 0026E8F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802719B4 0026E8F4  C3 81 00 28 */	lfs f28, 0x28(r1)
/* 802719B8 0026E8F8  7D 89 03 A6 */	mtctr r12
/* 802719BC 0026E8FC  4E 80 04 21 */	bctrl 
/* 802719C0 0026E900  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 802719C4 0026E904  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802719C8 0026E908  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802719CC 0026E90C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802719D0 0026E910  EC 3D 08 28 */	fsubs f1, f29, f1
/* 802719D4 0026E914  EC 5C 00 28 */	fsubs f2, f28, f0
/* 802719D8 0026E918  4B DC 37 31 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802719DC 0026E91C  48 1A 01 F5 */	bl roundAng__Ff
/* 802719E0 0026E920  81 9F 00 00 */	lwz r12, 0(r31)
/* 802719E4 0026E924  FF A0 08 90 */	fmr f29, f1
/* 802719E8 0026E928  7F E3 FB 78 */	mr r3, r31
/* 802719EC 0026E92C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802719F0 0026E930  7D 89 03 A6 */	mtctr r12
/* 802719F4 0026E934  4E 80 04 21 */	bctrl 
/* 802719F8 0026E938  FC 40 08 90 */	fmr f2, f1
/* 802719FC 0026E93C  FC 20 E8 90 */	fmr f1, f29
/* 80271A00 0026E940  48 1A 01 FD */	bl angDist__Fff
/* 80271A04 0026E944  EF E1 07 F2 */	fmuls f31, f1, f31
/* 80271A08 0026E948  C0 02 CE 2C */	lfs f0, lbl_8051B18C@sda21(r2)
/* 80271A0C 0026E94C  C0 22 CE 28 */	lfs f1, lbl_8051B188@sda21(r2)
/* 80271A10 0026E950  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80271A14 0026E954  FC 40 FA 10 */	fabs f2, f31
/* 80271A18 0026E958  EC 21 00 32 */	fmuls f1, f1, f0
/* 80271A1C 0026E95C  FC 00 10 18 */	frsp f0, f2
/* 80271A20 0026E960  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80271A24 0026E964  40 81 00 1C */	ble .L_80271A40
/* 80271A28 0026E968  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80271A2C 0026E96C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80271A30 0026E970  40 81 00 0C */	ble .L_80271A3C
/* 80271A34 0026E974  FF E0 08 90 */	fmr f31, f1
/* 80271A38 0026E978  48 00 00 08 */	b .L_80271A40
.L_80271A3C:
/* 80271A3C 0026E97C  FF E0 08 50 */	fneg f31, f1
.L_80271A40:
/* 80271A40 0026E980  7F E3 FB 78 */	mr r3, r31
/* 80271A44 0026E984  81 9F 00 00 */	lwz r12, 0(r31)
/* 80271A48 0026E988  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80271A4C 0026E98C  7D 89 03 A6 */	mtctr r12
/* 80271A50 0026E990  4E 80 04 21 */	bctrl 
/* 80271A54 0026E994  EC 3F 08 2A */	fadds f1, f31, f1
/* 80271A58 0026E998  48 1A 01 79 */	bl roundAng__Ff
/* 80271A5C 0026E99C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80271A60 0026E9A0  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80271A64 0026E9A4  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80271A68 0026E9A8  48 00 02 60 */	b .L_80271CC8
.L_80271A6C:
/* 80271A6C 0026E9AC  C0 02 CE 30 */	lfs f0, lbl_8051B190@sda21(r2)
/* 80271A70 0026E9B0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80271A74 0026E9B4  4C 40 13 82 */	cror 2, 0, 2
/* 80271A78 0026E9B8  40 82 02 00 */	bne .L_80271C78
/* 80271A7C 0026E9BC  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 80271A80 0026E9C0  28 00 00 00 */	cmplwi r0, 0
/* 80271A84 0026E9C4  41 82 00 08 */	beq .L_80271A8C
/* 80271A88 0026E9C8  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
.L_80271A8C:
/* 80271A8C 0026E9CC  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80271A90 0026E9D0  C0 02 CE 30 */	lfs f0, lbl_8051B190@sda21(r2)
/* 80271A94 0026E9D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271A98 0026E9D8  40 80 02 30 */	bge .L_80271CC8
/* 80271A9C 0026E9DC  7F C4 F3 78 */	mr r4, r30
/* 80271AA0 0026E9E0  38 61 00 68 */	addi r3, r1, 0x68
/* 80271AA4 0026E9E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80271AA8 0026E9E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80271AAC 0026E9EC  7D 89 03 A6 */	mtctr r12
/* 80271AB0 0026E9F0  4E 80 04 21 */	bctrl 
/* 80271AB4 0026E9F4  7F E4 FB 78 */	mr r4, r31
/* 80271AB8 0026E9F8  C3 81 00 6C */	lfs f28, 0x6c(r1)
/* 80271ABC 0026E9FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80271AC0 0026EA00  38 61 00 5C */	addi r3, r1, 0x5c
/* 80271AC4 0026EA04  C0 02 CE 34 */	lfs f0, lbl_8051B194@sda21(r2)
/* 80271AC8 0026EA08  81 8C 00 08 */	lwz r12, 8(r12)
/* 80271ACC 0026EA0C  EF 9C 00 2A */	fadds f28, f28, f0
/* 80271AD0 0026EA10  7D 89 03 A6 */	mtctr r12
/* 80271AD4 0026EA14  4E 80 04 21 */	bctrl 
/* 80271AD8 0026EA18  7F E4 FB 78 */	mr r4, r31
/* 80271ADC 0026EA1C  38 61 00 50 */	addi r3, r1, 0x50
/* 80271AE0 0026EA20  81 9F 00 00 */	lwz r12, 0(r31)
/* 80271AE4 0026EA24  C3 A1 00 60 */	lfs f29, 0x60(r1)
/* 80271AE8 0026EA28  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80271AEC 0026EA2C  7D 89 03 A6 */	mtctr r12
/* 80271AF0 0026EA30  4E 80 04 21 */	bctrl 
/* 80271AF4 0026EA34  C0 61 00 50 */	lfs f3, 0x50(r1)
/* 80271AF8 0026EA38  EC 5C E8 28 */	fsubs f2, f28, f29
/* 80271AFC 0026EA3C  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80271B00 0026EA40  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 80271B04 0026EA44  D0 61 00 80 */	stfs f3, 0x80(r1)
/* 80271B08 0026EA48  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80271B0C 0026EA4C  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 80271B10 0026EA50  C0 02 CE 38 */	lfs f0, lbl_8051B198@sda21(r2)
/* 80271B14 0026EA54  D0 21 00 88 */	stfs f1, 0x88(r1)
/* 80271B18 0026EA58  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80271B1C 0026EA5C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80271B20 0026EA60  EC 42 08 24 */	fdivs f2, f2, f1
/* 80271B24 0026EA64  C0 23 09 D4 */	lfs f1, 0x9d4(r3)
/* 80271B28 0026EA68  EC 22 00 72 */	fmuls f1, f2, f1
/* 80271B2C 0026EA6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271B30 0026EA70  40 80 00 08 */	bge .L_80271B38
/* 80271B34 0026EA74  48 00 00 18 */	b .L_80271B4C
.L_80271B38:
/* 80271B38 0026EA78  C0 02 CE 3C */	lfs f0, lbl_8051B19C@sda21(r2)
/* 80271B3C 0026EA7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271B40 0026EA80  40 81 00 08 */	ble .L_80271B48
/* 80271B44 0026EA84  48 00 00 08 */	b .L_80271B4C
.L_80271B48:
/* 80271B48 0026EA88  FC 00 08 90 */	fmr f0, f1
.L_80271B4C:
/* 80271B4C 0026EA8C  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 80271B50 0026EA90  7F E3 FB 78 */	mr r3, r31
/* 80271B54 0026EA94  38 81 00 80 */	addi r4, r1, 0x80
/* 80271B58 0026EA98  81 9F 00 00 */	lwz r12, 0(r31)
/* 80271B5C 0026EA9C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80271B60 0026EAA0  7D 89 03 A6 */	mtctr r12
/* 80271B64 0026EAA4  4E 80 04 21 */	bctrl 
/* 80271B68 0026EAA8  C0 02 CE 40 */	lfs f0, lbl_8051B1A0@sda21(r2)
/* 80271B6C 0026EAAC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80271B70 0026EAB0  40 81 00 18 */	ble .L_80271B88
/* 80271B74 0026EAB4  7F E3 FB 78 */	mr r3, r31
/* 80271B78 0026EAB8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80271B7C 0026EABC  81 8C 03 04 */	lwz r12, 0x304(r12)
/* 80271B80 0026EAC0  7D 89 03 A6 */	mtctr r12
/* 80271B84 0026EAC4  4E 80 04 21 */	bctrl 
.L_80271B88:
/* 80271B88 0026EAC8  7F C4 F3 78 */	mr r4, r30
/* 80271B8C 0026EACC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80271B90 0026EAD0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80271B94 0026EAD4  38 61 00 08 */	addi r3, r1, 8
/* 80271B98 0026EAD8  C3 E5 03 34 */	lfs f31, 0x334(r5)
/* 80271B9C 0026EADC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80271BA0 0026EAE0  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 80271BA4 0026EAE4  7D 89 03 A6 */	mtctr r12
/* 80271BA8 0026EAE8  4E 80 04 21 */	bctrl 
/* 80271BAC 0026EAEC  7F E4 FB 78 */	mr r4, r31
/* 80271BB0 0026EAF0  38 61 00 14 */	addi r3, r1, 0x14
/* 80271BB4 0026EAF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80271BB8 0026EAF8  C3 81 00 08 */	lfs f28, 8(r1)
/* 80271BBC 0026EAFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80271BC0 0026EB00  C3 A1 00 10 */	lfs f29, 0x10(r1)
/* 80271BC4 0026EB04  7D 89 03 A6 */	mtctr r12
/* 80271BC8 0026EB08  4E 80 04 21 */	bctrl 
/* 80271BCC 0026EB0C  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80271BD0 0026EB10  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80271BD4 0026EB14  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80271BD8 0026EB18  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80271BDC 0026EB1C  EC 3C 08 28 */	fsubs f1, f28, f1
/* 80271BE0 0026EB20  EC 5D 00 28 */	fsubs f2, f29, f0
/* 80271BE4 0026EB24  4B DC 35 25 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80271BE8 0026EB28  48 19 FF E9 */	bl roundAng__Ff
/* 80271BEC 0026EB2C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80271BF0 0026EB30  FF A0 08 90 */	fmr f29, f1
/* 80271BF4 0026EB34  7F E3 FB 78 */	mr r3, r31
/* 80271BF8 0026EB38  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80271BFC 0026EB3C  7D 89 03 A6 */	mtctr r12
/* 80271C00 0026EB40  4E 80 04 21 */	bctrl 
/* 80271C04 0026EB44  FC 40 08 90 */	fmr f2, f1
/* 80271C08 0026EB48  FC 20 E8 90 */	fmr f1, f29
/* 80271C0C 0026EB4C  48 19 FF F1 */	bl angDist__Fff
/* 80271C10 0026EB50  EF C1 07 B2 */	fmuls f30, f1, f30
/* 80271C14 0026EB54  C0 02 CE 2C */	lfs f0, lbl_8051B18C@sda21(r2)
/* 80271C18 0026EB58  C0 22 CE 28 */	lfs f1, lbl_8051B188@sda21(r2)
/* 80271C1C 0026EB5C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80271C20 0026EB60  FC 40 F2 10 */	fabs f2, f30
/* 80271C24 0026EB64  EC 21 00 32 */	fmuls f1, f1, f0
/* 80271C28 0026EB68  FC 00 10 18 */	frsp f0, f2
/* 80271C2C 0026EB6C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80271C30 0026EB70  40 81 00 1C */	ble .L_80271C4C
/* 80271C34 0026EB74  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80271C38 0026EB78  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80271C3C 0026EB7C  40 81 00 0C */	ble .L_80271C48
/* 80271C40 0026EB80  FF C0 08 90 */	fmr f30, f1
/* 80271C44 0026EB84  48 00 00 08 */	b .L_80271C4C
.L_80271C48:
/* 80271C48 0026EB88  FF C0 08 50 */	fneg f30, f1
.L_80271C4C:
/* 80271C4C 0026EB8C  7F E3 FB 78 */	mr r3, r31
/* 80271C50 0026EB90  81 9F 00 00 */	lwz r12, 0(r31)
/* 80271C54 0026EB94  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80271C58 0026EB98  7D 89 03 A6 */	mtctr r12
/* 80271C5C 0026EB9C  4E 80 04 21 */	bctrl 
/* 80271C60 0026EBA0  EC 3E 08 2A */	fadds f1, f30, f1
/* 80271C64 0026EBA4  48 19 FF 6D */	bl roundAng__Ff
/* 80271C68 0026EBA8  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80271C6C 0026EBAC  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80271C70 0026EBB0  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80271C74 0026EBB4  48 00 00 54 */	b .L_80271CC8
.L_80271C78:
/* 80271C78 0026EBB8  7F E3 FB 78 */	mr r3, r31
/* 80271C7C 0026EBBC  48 00 14 55 */	bl setHeightVelocity__Q34Game5Sarai3ObjFv
/* 80271C80 0026EBC0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80271C84 0026EBC4  C0 3F 01 D4 */	lfs f1, 0x1d4(r31)
/* 80271C88 0026EBC8  C0 03 09 FC */	lfs f0, 0x9fc(r3)
/* 80271C8C 0026EBCC  C0 5F 01 D8 */	lfs f2, 0x1d8(r31)
/* 80271C90 0026EBD0  EC 21 00 32 */	fmuls f1, f1, f0
/* 80271C94 0026EBD4  C0 7F 01 DC */	lfs f3, 0x1dc(r31)
/* 80271C98 0026EBD8  EC 42 00 32 */	fmuls f2, f2, f0
/* 80271C9C 0026EBDC  EC 63 00 32 */	fmuls f3, f3, f0
/* 80271CA0 0026EBE0  D0 3F 01 D4 */	stfs f1, 0x1d4(r31)
/* 80271CA4 0026EBE4  D0 5F 01 D8 */	stfs f2, 0x1d8(r31)
/* 80271CA8 0026EBE8  D0 7F 01 DC */	stfs f3, 0x1dc(r31)
/* 80271CAC 0026EBEC  48 00 00 1C */	b .L_80271CC8
.L_80271CB0:
/* 80271CB0 0026EBF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80271CB4 0026EBF4  38 A0 00 06 */	li r5, 6
/* 80271CB8 0026EBF8  38 C0 00 00 */	li r6, 0
/* 80271CBC 0026EBFC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80271CC0 0026EC00  7D 89 03 A6 */	mtctr r12
/* 80271CC4 0026EC04  4E 80 04 21 */	bctrl 
.L_80271CC8:
/* 80271CC8 0026EC08  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80271CCC 0026EC0C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80271CD0 0026EC10  28 00 00 00 */	cmplwi r0, 0
/* 80271CD4 0026EC14  41 82 02 10 */	beq .L_80271EE4
/* 80271CD8 0026EC18  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80271CDC 0026EC1C  28 00 00 02 */	cmplwi r0, 2
/* 80271CE0 0026EC20  40 82 01 54 */	bne .L_80271E34
/* 80271CE4 0026EC24  80 9F 02 30 */	lwz r4, 0x230(r31)
/* 80271CE8 0026EC28  28 04 00 00 */	cmplwi r4, 0
/* 80271CEC 0026EC2C  41 82 01 F8 */	beq .L_80271EE4
/* 80271CF0 0026EC30  81 84 00 00 */	lwz r12, 0(r4)
/* 80271CF4 0026EC34  38 61 00 44 */	addi r3, r1, 0x44
/* 80271CF8 0026EC38  81 8C 00 08 */	lwz r12, 8(r12)
/* 80271CFC 0026EC3C  7D 89 03 A6 */	mtctr r12
/* 80271D00 0026EC40  4E 80 04 21 */	bctrl 
/* 80271D04 0026EC44  7F E4 FB 78 */	mr r4, r31
/* 80271D08 0026EC48  38 61 00 38 */	addi r3, r1, 0x38
/* 80271D0C 0026EC4C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80271D10 0026EC50  C3 81 00 44 */	lfs f28, 0x44(r1)
/* 80271D14 0026EC54  81 8C 00 08 */	lwz r12, 8(r12)
/* 80271D18 0026EC58  C3 A1 00 48 */	lfs f29, 0x48(r1)
/* 80271D1C 0026EC5C  C3 C1 00 4C */	lfs f30, 0x4c(r1)
/* 80271D20 0026EC60  7D 89 03 A6 */	mtctr r12
/* 80271D24 0026EC64  4E 80 04 21 */	bctrl 
/* 80271D28 0026EC68  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80271D2C 0026EC6C  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 80271D30 0026EC70  EC DD 00 28 */	fsubs f6, f29, f0
/* 80271D34 0026EC74  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80271D38 0026EC78  EC FE 10 28 */	fsubs f7, f30, f2
/* 80271D3C 0026EC7C  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80271D40 0026EC80  EC BC 08 28 */	fsubs f5, f28, f1
/* 80271D44 0026EC84  EC 26 01 B2 */	fmuls f1, f6, f6
/* 80271D48 0026EC88  EC 47 01 F2 */	fmuls f2, f7, f7
/* 80271D4C 0026EC8C  D0 C1 00 78 */	stfs f6, 0x78(r1)
/* 80271D50 0026EC90  EC 25 09 7A */	fmadds f1, f5, f5, f1
/* 80271D54 0026EC94  D0 A1 00 74 */	stfs f5, 0x74(r1)
/* 80271D58 0026EC98  D0 E1 00 7C */	stfs f7, 0x7c(r1)
/* 80271D5C 0026EC9C  EC 22 08 2A */	fadds f1, f2, f1
/* 80271D60 0026ECA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271D64 0026ECA4  40 81 00 14 */	ble .L_80271D78
/* 80271D68 0026ECA8  40 81 00 14 */	ble .L_80271D7C
/* 80271D6C 0026ECAC  FC 00 08 34 */	frsqrte f0, f1
/* 80271D70 0026ECB0  EC 20 00 72 */	fmuls f1, f0, f1
/* 80271D74 0026ECB4  48 00 00 08 */	b .L_80271D7C
.L_80271D78:
/* 80271D78 0026ECB8  FC 20 00 90 */	fmr f1, f0
.L_80271D7C:
/* 80271D7C 0026ECBC  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80271D80 0026ECC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80271D84 0026ECC4  40 81 00 18 */	ble .L_80271D9C
/* 80271D88 0026ECC8  C0 02 CE 00 */	lfs f0, lbl_8051B160@sda21(r2)
/* 80271D8C 0026ECCC  EC 00 08 24 */	fdivs f0, f0, f1
/* 80271D90 0026ECD0  EC A5 00 32 */	fmuls f5, f5, f0
/* 80271D94 0026ECD4  EC C6 00 32 */	fmuls f6, f6, f0
/* 80271D98 0026ECD8  EC E7 00 32 */	fmuls f7, f7, f0
.L_80271D9C:
/* 80271D9C 0026ECDC  C0 42 CE 44 */	lfs f2, lbl_8051B1A4@sda21(r2)
/* 80271DA0 0026ECE0  7F E3 FB 78 */	mr r3, r31
/* 80271DA4 0026ECE4  C0 21 00 78 */	lfs f1, 0x78(r1)
/* 80271DA8 0026ECE8  38 81 00 74 */	addi r4, r1, 0x74
/* 80271DAC 0026ECEC  EC C6 00 B2 */	fmuls f6, f6, f2
/* 80271DB0 0026ECF0  C0 81 00 74 */	lfs f4, 0x74(r1)
/* 80271DB4 0026ECF4  EC A5 00 B2 */	fmuls f5, f5, f2
/* 80271DB8 0026ECF8  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 80271DBC 0026ECFC  EC E7 00 B2 */	fmuls f7, f7, f2
/* 80271DC0 0026ED00  C0 62 CD F8 */	lfs f3, lbl_8051B158@sda21(r2)
/* 80271DC4 0026ED04  EC 41 30 28 */	fsubs f2, f1, f6
/* 80271DC8 0026ED08  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 80271DCC 0026ED0C  EC A4 28 28 */	fsubs f5, f4, f5
/* 80271DD0 0026ED10  C0 22 CE 48 */	lfs f1, lbl_8051B1A8@sda21(r2)
/* 80271DD4 0026ED14  EC 80 38 28 */	fsubs f4, f0, f7
/* 80271DD8 0026ED18  D0 41 00 78 */	stfs f2, 0x78(r1)
/* 80271DDC 0026ED1C  D0 A1 00 74 */	stfs f5, 0x74(r1)
/* 80271DE0 0026ED20  D0 81 00 7C */	stfs f4, 0x7c(r1)
/* 80271DE4 0026ED24  D0 61 00 78 */	stfs f3, 0x78(r1)
/* 80271DE8 0026ED28  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 80271DEC 0026ED2C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80271DF0 0026ED30  EC 45 00 32 */	fmuls f2, f5, f0
/* 80271DF4 0026ED34  EC 23 00 32 */	fmuls f1, f3, f0
/* 80271DF8 0026ED38  EC 04 00 32 */	fmuls f0, f4, f0
/* 80271DFC 0026ED3C  D0 41 00 74 */	stfs f2, 0x74(r1)
/* 80271E00 0026ED40  D0 21 00 78 */	stfs f1, 0x78(r1)
/* 80271E04 0026ED44  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 80271E08 0026ED48  81 9F 00 00 */	lwz r12, 0(r31)
/* 80271E0C 0026ED4C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80271E10 0026ED50  7D 89 03 A6 */	mtctr r12
/* 80271E14 0026ED54  4E 80 04 21 */	bctrl 
/* 80271E18 0026ED58  C0 01 00 74 */	lfs f0, 0x74(r1)
/* 80271E1C 0026ED5C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80271E20 0026ED60  C0 01 00 78 */	lfs f0, 0x78(r1)
/* 80271E24 0026ED64  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80271E28 0026ED68  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 80271E2C 0026ED6C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80271E30 0026ED70  48 00 00 B4 */	b .L_80271EE4
.L_80271E34:
/* 80271E34 0026ED74  28 00 00 03 */	cmplwi r0, 3
/* 80271E38 0026ED78  40 82 00 14 */	bne .L_80271E4C
/* 80271E3C 0026ED7C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80271E40 0026ED80  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 80271E44 0026ED84  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80271E48 0026ED88  48 00 00 9C */	b .L_80271EE4
.L_80271E4C:
/* 80271E4C 0026ED8C  28 00 00 04 */	cmplwi r0, 4
/* 80271E50 0026ED90  40 82 00 38 */	bne .L_80271E88
/* 80271E54 0026ED94  7F E3 FB 78 */	mr r3, r31
/* 80271E58 0026ED98  48 00 18 45 */	bl getCatchTargetNum__Q34Game5Sarai3ObjFv
/* 80271E5C 0026ED9C  2C 03 00 00 */	cmpwi r3, 0
/* 80271E60 0026EDA0  40 82 00 84 */	bne .L_80271EE4
/* 80271E64 0026EDA4  7F A3 EB 78 */	mr r3, r29
/* 80271E68 0026EDA8  7F E4 FB 78 */	mr r4, r31
/* 80271E6C 0026EDAC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80271E70 0026EDB0  38 A0 00 08 */	li r5, 8
/* 80271E74 0026EDB4  38 C0 00 00 */	li r6, 0
/* 80271E78 0026EDB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80271E7C 0026EDBC  7D 89 03 A6 */	mtctr r12
/* 80271E80 0026EDC0  4E 80 04 21 */	bctrl 
/* 80271E84 0026EDC4  48 00 00 60 */	b .L_80271EE4
.L_80271E88:
/* 80271E88 0026EDC8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80271E8C 0026EDCC  40 82 00 58 */	bne .L_80271EE4
/* 80271E90 0026EDD0  7F E3 FB 78 */	mr r3, r31
/* 80271E94 0026EDD4  48 00 18 09 */	bl getCatchTargetNum__Q34Game5Sarai3ObjFv
/* 80271E98 0026EDD8  2C 03 00 00 */	cmpwi r3, 0
/* 80271E9C 0026EDDC  41 82 00 28 */	beq .L_80271EC4
/* 80271EA0 0026EDE0  7F A3 EB 78 */	mr r3, r29
/* 80271EA4 0026EDE4  7F E4 FB 78 */	mr r4, r31
/* 80271EA8 0026EDE8  81 9D 00 00 */	lwz r12, 0(r29)
/* 80271EAC 0026EDEC  38 A0 00 09 */	li r5, 9
/* 80271EB0 0026EDF0  38 C0 00 00 */	li r6, 0
/* 80271EB4 0026EDF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80271EB8 0026EDF8  7D 89 03 A6 */	mtctr r12
/* 80271EBC 0026EDFC  4E 80 04 21 */	bctrl 
/* 80271EC0 0026EE00  48 00 00 24 */	b .L_80271EE4
.L_80271EC4:
/* 80271EC4 0026EE04  7F A3 EB 78 */	mr r3, r29
/* 80271EC8 0026EE08  7F E4 FB 78 */	mr r4, r31
/* 80271ECC 0026EE0C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80271ED0 0026EE10  38 A0 00 06 */	li r5, 6
/* 80271ED4 0026EE14  38 C0 00 00 */	li r6, 0
/* 80271ED8 0026EE18  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80271EDC 0026EE1C  7D 89 03 A6 */	mtctr r12
/* 80271EE0 0026EE20  4E 80 04 21 */	bctrl 
.L_80271EE4:
/* 80271EE4 0026EE24  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 80271EE8 0026EE28  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 80271EEC 0026EE2C  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 80271EF0 0026EE30  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 80271EF4 0026EE34  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 80271EF8 0026EE38  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 80271EFC 0026EE3C  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 80271F00 0026EE40  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 80271F04 0026EE44  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 80271F08 0026EE48  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 80271F0C 0026EE4C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80271F10 0026EE50  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 80271F14 0026EE54  7C 08 03 A6 */	mtlr r0
/* 80271F18 0026EE58  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80271F1C 0026EE5C  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Sarai11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Sarai11StateAttackFPQ24Game9EnemyBase, global
/* 80271F20 0026EE60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80271F24 0026EE64  7C 08 02 A6 */	mflr r0
/* 80271F28 0026EE68  7C 83 23 78 */	mr r3, r4
/* 80271F2C 0026EE6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80271F30 0026EE70  38 00 00 00 */	li r0, 0
/* 80271F34 0026EE74  80 A4 01 E0 */	lwz r5, 0x1e0(r4)
/* 80271F38 0026EE78  60 A5 00 40 */	ori r5, r5, 0x40
/* 80271F3C 0026EE7C  90 A4 01 E0 */	stw r5, 0x1e0(r4)
/* 80271F40 0026EE80  80 A4 01 E0 */	lwz r5, 0x1e0(r4)
/* 80271F44 0026EE84  54 A5 02 D2 */	rlwinm r5, r5, 0, 0xb, 9
/* 80271F48 0026EE88  90 A4 01 E0 */	stw r5, 0x1e0(r4)
/* 80271F4C 0026EE8C  90 04 02 30 */	stw r0, 0x230(r4)
/* 80271F50 0026EE90  4B E8 FA 2D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80271F54 0026EE94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80271F58 0026EE98  7C 08 03 A6 */	mtlr r0
/* 80271F5C 0026EE9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80271F60 0026EEA0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Sarai11StateAttackFPQ24Game9EnemyBase

.fn init__Q34Game5Sarai9StateFailFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80271F64 0026EEA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80271F68 0026EEA8  7C 08 02 A6 */	mflr r0
/* 80271F6C 0026EEAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80271F70 0026EEB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80271F74 0026EEB4  7C 9F 23 78 */	mr r31, r4
/* 80271F78 0026EEB8  7F E3 FB 78 */	mr r3, r31
/* 80271F7C 0026EEBC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80271F80 0026EEC0  60 00 00 04 */	ori r0, r0, 4
/* 80271F84 0026EEC4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80271F88 0026EEC8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80271F8C 0026EECC  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80271F90 0026EED0  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80271F94 0026EED4  4B E8 FA 39 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80271F98 0026EED8  7F E3 FB 78 */	mr r3, r31
/* 80271F9C 0026EEDC  38 80 00 09 */	li r4, 9
/* 80271FA0 0026EEE0  38 A0 00 00 */	li r5, 0
/* 80271FA4 0026EEE4  4B E9 30 61 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80271FA8 0026EEE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80271FAC 0026EEEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80271FB0 0026EEF0  7C 08 03 A6 */	mtlr r0
/* 80271FB4 0026EEF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80271FB8 0026EEF8  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai9StateFailFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Sarai9StateFailFPQ24Game9EnemyBase, global
/* 80271FBC 0026EEFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80271FC0 0026EF00  7C 08 02 A6 */	mflr r0
/* 80271FC4 0026EF04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80271FC8 0026EF08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80271FCC 0026EF0C  7C 9F 23 78 */	mr r31, r4
/* 80271FD0 0026EF10  93 C1 00 08 */	stw r30, 8(r1)
/* 80271FD4 0026EF14  7C 7E 1B 78 */	mr r30, r3
/* 80271FD8 0026EF18  7F E3 FB 78 */	mr r3, r31
/* 80271FDC 0026EF1C  48 00 10 F5 */	bl setHeightVelocity__Q34Game5Sarai3ObjFv
/* 80271FE0 0026EF20  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80271FE4 0026EF24  C0 3F 01 D4 */	lfs f1, 0x1d4(r31)
/* 80271FE8 0026EF28  C0 03 09 FC */	lfs f0, 0x9fc(r3)
/* 80271FEC 0026EF2C  C0 5F 01 D8 */	lfs f2, 0x1d8(r31)
/* 80271FF0 0026EF30  EC 21 00 32 */	fmuls f1, f1, f0
/* 80271FF4 0026EF34  C0 7F 01 DC */	lfs f3, 0x1dc(r31)
/* 80271FF8 0026EF38  EC 42 00 32 */	fmuls f2, f2, f0
/* 80271FFC 0026EF3C  EC 63 00 32 */	fmuls f3, f3, f0
/* 80272000 0026EF40  D0 3F 01 D4 */	stfs f1, 0x1d4(r31)
/* 80272004 0026EF44  D0 5F 01 D8 */	stfs f2, 0x1d8(r31)
/* 80272008 0026EF48  D0 7F 01 DC */	stfs f3, 0x1dc(r31)
/* 8027200C 0026EF4C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80272010 0026EF50  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80272014 0026EF54  28 00 00 00 */	cmplwi r0, 0
/* 80272018 0026EF58  41 82 00 64 */	beq .L_8027207C
/* 8027201C 0026EF5C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80272020 0026EF60  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80272024 0026EF64  40 82 00 58 */	bne .L_8027207C
/* 80272028 0026EF68  7F E3 FB 78 */	mr r3, r31
/* 8027202C 0026EF6C  48 00 16 71 */	bl getCatchTargetNum__Q34Game5Sarai3ObjFv
/* 80272030 0026EF70  2C 03 00 00 */	cmpwi r3, 0
/* 80272034 0026EF74  41 82 00 28 */	beq .L_8027205C
/* 80272038 0026EF78  7F C3 F3 78 */	mr r3, r30
/* 8027203C 0026EF7C  7F E4 FB 78 */	mr r4, r31
/* 80272040 0026EF80  81 9E 00 00 */	lwz r12, 0(r30)
/* 80272044 0026EF84  38 A0 00 09 */	li r5, 9
/* 80272048 0026EF88  38 C0 00 00 */	li r6, 0
/* 8027204C 0026EF8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80272050 0026EF90  7D 89 03 A6 */	mtctr r12
/* 80272054 0026EF94  4E 80 04 21 */	bctrl 
/* 80272058 0026EF98  48 00 00 24 */	b .L_8027207C
.L_8027205C:
/* 8027205C 0026EF9C  7F C3 F3 78 */	mr r3, r30
/* 80272060 0026EFA0  7F E4 FB 78 */	mr r4, r31
/* 80272064 0026EFA4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80272068 0026EFA8  38 A0 00 06 */	li r5, 6
/* 8027206C 0026EFAC  38 C0 00 00 */	li r6, 0
/* 80272070 0026EFB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80272074 0026EFB4  7D 89 03 A6 */	mtctr r12
/* 80272078 0026EFB8  4E 80 04 21 */	bctrl 
.L_8027207C:
/* 8027207C 0026EFBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272080 0026EFC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80272084 0026EFC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80272088 0026EFC8  7C 08 03 A6 */	mtlr r0
/* 8027208C 0026EFCC  38 21 00 10 */	addi r1, r1, 0x10
/* 80272090 0026EFD0  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Sarai9StateFailFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Sarai9StateFailFPQ24Game9EnemyBase, global
/* 80272094 0026EFD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80272098 0026EFD8  7C 08 02 A6 */	mflr r0
/* 8027209C 0026EFDC  7C 83 23 78 */	mr r3, r4
/* 802720A0 0026EFE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802720A4 0026EFE4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802720A8 0026EFE8  60 00 00 40 */	ori r0, r0, 0x40
/* 802720AC 0026EFEC  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802720B0 0026EFF0  4B E8 F8 CD */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802720B4 0026EFF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802720B8 0026EFF8  7C 08 03 A6 */	mtlr r0
/* 802720BC 0026EFFC  38 21 00 10 */	addi r1, r1, 0x10
/* 802720C0 0026F000  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Sarai9StateFailFPQ24Game9EnemyBase

.fn init__Q34Game5Sarai13StateCatchFlyFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802720C4 0026F004  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802720C8 0026F008  7C 08 02 A6 */	mflr r0
/* 802720CC 0026F00C  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 802720D0 0026F010  90 01 00 14 */	stw r0, 0x14(r1)
/* 802720D4 0026F014  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802720D8 0026F018  7C 9F 23 78 */	mr r31, r4
/* 802720DC 0026F01C  7F E3 FB 78 */	mr r3, r31
/* 802720E0 0026F020  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 802720E4 0026F024  48 00 10 F5 */	bl setRandTarget__Q34Game5Sarai3ObjFv
/* 802720E8 0026F028  38 00 00 00 */	li r0, 0
/* 802720EC 0026F02C  7F E3 FB 78 */	mr r3, r31
/* 802720F0 0026F030  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802720F4 0026F034  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802720F8 0026F038  60 00 00 04 */	ori r0, r0, 4
/* 802720FC 0026F03C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80272100 0026F040  4B E8 F8 CD */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80272104 0026F044  7F E3 FB 78 */	mr r3, r31
/* 80272108 0026F048  38 80 00 03 */	li r4, 3
/* 8027210C 0026F04C  38 A0 00 00 */	li r5, 0
/* 80272110 0026F050  4B E9 2E F5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80272114 0026F054  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272118 0026F058  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8027211C 0026F05C  7C 08 03 A6 */	mtlr r0
/* 80272120 0026F060  38 21 00 10 */	addi r1, r1, 0x10
/* 80272124 0026F064  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai13StateCatchFlyFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Sarai13StateCatchFlyFPQ24Game9EnemyBase, global
/* 80272128 0026F068  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8027212C 0026F06C  7C 08 02 A6 */	mflr r0
/* 80272130 0026F070  90 01 00 44 */	stw r0, 0x44(r1)
/* 80272134 0026F074  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80272138 0026F078  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8027213C 0026F07C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80272140 0026F080  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80272144 0026F084  7C 9F 23 78 */	mr r31, r4
/* 80272148 0026F088  7C 7E 1B 78 */	mr r30, r3
/* 8027214C 0026F08C  7F E3 FB 78 */	mr r3, r31
/* 80272150 0026F090  48 00 0F 81 */	bl setHeightVelocity__Q34Game5Sarai3ObjFv
/* 80272154 0026F094  7F E4 FB 78 */	mr r4, r31
/* 80272158 0026F098  FF E0 08 90 */	fmr f31, f1
/* 8027215C 0026F09C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80272160 0026F0A0  38 61 00 08 */	addi r3, r1, 8
/* 80272164 0026F0A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80272168 0026F0A8  7D 89 03 A6 */	mtctr r12
/* 8027216C 0026F0AC  4E 80 04 21 */	bctrl 
/* 80272170 0026F0B0  C0 3F 02 D0 */	lfs f1, 0x2d0(r31)
/* 80272174 0026F0B4  C0 BF 02 D4 */	lfs f5, 0x2d4(r31)
/* 80272178 0026F0B8  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 8027217C 0026F0BC  C0 02 CD FC */	lfs f0, lbl_8051B15C@sda21(r2)
/* 80272180 0026F0C0  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80272184 0026F0C4  C0 61 00 08 */	lfs f3, 8(r1)
/* 80272188 0026F0C8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8027218C 0026F0CC  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 80272190 0026F0D0  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 80272194 0026F0D4  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80272198 0026F0D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8027219C 0026F0DC  41 81 00 20 */	bgt .L_802721BC
/* 802721A0 0026F0E0  EC 24 28 28 */	fsubs f1, f4, f5
/* 802721A4 0026F0E4  C0 02 CE 24 */	lfs f0, lbl_8051B184@sda21(r2)
/* 802721A8 0026F0E8  EC 43 10 28 */	fsubs f2, f3, f2
/* 802721AC 0026F0EC  EC 21 00 72 */	fmuls f1, f1, f1
/* 802721B0 0026F0F0  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802721B4 0026F0F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802721B8 0026F0F8  40 80 00 20 */	bge .L_802721D8
.L_802721BC:
/* 802721BC 0026F0FC  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 802721C0 0026F100  7F E3 FB 78 */	mr r3, r31
/* 802721C4 0026F104  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802721C8 0026F108  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802721CC 0026F10C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802721D0 0026F110  4B E9 30 D1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802721D4 0026F114  48 00 00 20 */	b .L_802721F4
.L_802721D8:
/* 802721D8 0026F118  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802721DC 0026F11C  7F E3 FB 78 */	mr r3, r31
/* 802721E0 0026F120  38 81 00 14 */	addi r4, r1, 0x14
/* 802721E4 0026F124  C0 25 08 BC */	lfs f1, 0x8bc(r5)
/* 802721E8 0026F128  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802721EC 0026F12C  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 802721F0 0026F130  4B EA 33 ED */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
.L_802721F4:
/* 802721F4 0026F134  7F E3 FB 78 */	mr r3, r31
/* 802721F8 0026F138  48 00 14 A5 */	bl getCatchTargetNum__Q34Game5Sarai3ObjFv
/* 802721FC 0026F13C  2C 03 00 00 */	cmpwi r3, 0
/* 80272200 0026F140  40 82 00 28 */	bne .L_80272228
/* 80272204 0026F144  7F C3 F3 78 */	mr r3, r30
/* 80272208 0026F148  7F E4 FB 78 */	mr r4, r31
/* 8027220C 0026F14C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80272210 0026F150  38 A0 00 06 */	li r5, 6
/* 80272214 0026F154  38 C0 00 00 */	li r6, 0
/* 80272218 0026F158  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8027221C 0026F15C  7D 89 03 A6 */	mtctr r12
/* 80272220 0026F160  4E 80 04 21 */	bctrl 
/* 80272224 0026F164  48 00 00 A4 */	b .L_802722C8
.L_80272228:
/* 80272228 0026F168  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8027222C 0026F16C  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 80272230 0026F170  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80272234 0026F174  41 81 00 14 */	bgt .L_80272248
/* 80272238 0026F178  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 8027223C 0026F17C  C0 02 CE 20 */	lfs f0, lbl_8051B180@sda21(r2)
/* 80272240 0026F180  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80272244 0026F184  40 81 00 34 */	ble .L_80272278
.L_80272248:
/* 80272248 0026F188  7F E3 FB 78 */	mr r3, r31
/* 8027224C 0026F18C  48 00 14 CD */	bl getNextStateOnHeight__Q34Game5Sarai3ObjFv
/* 80272250 0026F190  7C 65 1B 79 */	or. r5, r3, r3
/* 80272254 0026F194  41 80 00 24 */	blt .L_80272278
/* 80272258 0026F198  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027225C 0026F19C  7F C3 F3 78 */	mr r3, r30
/* 80272260 0026F1A0  7F E4 FB 78 */	mr r4, r31
/* 80272264 0026F1A4  38 C0 00 00 */	li r6, 0
/* 80272268 0026F1A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8027226C 0026F1AC  7D 89 03 A6 */	mtctr r12
/* 80272270 0026F1B0  4E 80 04 21 */	bctrl 
/* 80272274 0026F1B4  48 00 00 54 */	b .L_802722C8
.L_80272278:
/* 80272278 0026F1B8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8027227C 0026F1BC  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 80272280 0026F1C0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80272284 0026F1C4  EC 01 00 2A */	fadds f0, f1, f0
/* 80272288 0026F1C8  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 8027228C 0026F1CC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80272290 0026F1D0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80272294 0026F1D4  28 00 00 00 */	cmplwi r0, 0
/* 80272298 0026F1D8  41 82 00 30 */	beq .L_802722C8
/* 8027229C 0026F1DC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802722A0 0026F1E0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802722A4 0026F1E4  40 82 00 24 */	bne .L_802722C8
/* 802722A8 0026F1E8  7F C3 F3 78 */	mr r3, r30
/* 802722AC 0026F1EC  7F E4 FB 78 */	mr r4, r31
/* 802722B0 0026F1F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802722B4 0026F1F4  38 A0 00 0A */	li r5, 0xa
/* 802722B8 0026F1F8  38 C0 00 00 */	li r6, 0
/* 802722BC 0026F1FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802722C0 0026F200  7D 89 03 A6 */	mtctr r12
/* 802722C4 0026F204  4E 80 04 21 */	bctrl 
.L_802722C8:
/* 802722C8 0026F208  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802722CC 0026F20C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802722D0 0026F210  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802722D4 0026F214  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802722D8 0026F218  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802722DC 0026F21C  7C 08 03 A6 */	mtlr r0
/* 802722E0 0026F220  38 21 00 40 */	addi r1, r1, 0x40
/* 802722E4 0026F224  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Sarai13StateCatchFlyFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Sarai13StateCatchFlyFPQ24Game9EnemyBase, global
/* 802722E8 0026F228  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802722EC 0026F22C  7C 08 02 A6 */	mflr r0
/* 802722F0 0026F230  7C 83 23 78 */	mr r3, r4
/* 802722F4 0026F234  90 01 00 14 */	stw r0, 0x14(r1)
/* 802722F8 0026F238  4B E8 F6 85 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802722FC 0026F23C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272300 0026F240  7C 08 03 A6 */	mtlr r0
/* 80272304 0026F244  38 21 00 10 */	addi r1, r1, 0x10
/* 80272308 0026F248  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Sarai13StateCatchFlyFPQ24Game9EnemyBase

.fn init__Q34Game5Sarai13StateFallMeckFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8027230C 0026F24C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80272310 0026F250  7C 08 02 A6 */	mflr r0
/* 80272314 0026F254  C0 02 CD F8 */	lfs f0, lbl_8051B158@sda21(r2)
/* 80272318 0026F258  90 01 00 14 */	stw r0, 0x14(r1)
/* 8027231C 0026F25C  38 00 00 00 */	li r0, 0
/* 80272320 0026F260  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80272324 0026F264  7C 9F 23 78 */	mr r31, r4
/* 80272328 0026F268  7F E3 FB 78 */	mr r3, r31
/* 8027232C 0026F26C  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 80272330 0026F270  54 84 02 D2 */	rlwinm r4, r4, 0, 0xb, 9
/* 80272334 0026F274  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 80272338 0026F278  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8027233C 0026F27C  60 84 00 04 */	ori r4, r4, 4
/* 80272340 0026F280  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 80272344 0026F284  90 1F 02 30 */	stw r0, 0x230(r31)
/* 80272348 0026F288  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8027234C 0026F28C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80272350 0026F290  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80272354 0026F294  4B E8 F6 79 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80272358 0026F298  7F E3 FB 78 */	mr r3, r31
/* 8027235C 0026F29C  38 80 00 04 */	li r4, 4
/* 80272360 0026F2A0  38 A0 00 00 */	li r5, 0
/* 80272364 0026F2A4  4B E9 2C A1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80272368 0026F2A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027236C 0026F2AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80272370 0026F2B0  7C 08 03 A6 */	mtlr r0
/* 80272374 0026F2B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80272378 0026F2B8  4E 80 00 20 */	blr 
.endfn init__Q34Game5Sarai13StateFallMeckFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game5Sarai13StateFallMeckFPQ24Game9EnemyBase, global
/* 8027237C 0026F2BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80272380 0026F2C0  7C 08 02 A6 */	mflr r0
/* 80272384 0026F2C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80272388 0026F2C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027238C 0026F2CC  7C 9F 23 78 */	mr r31, r4
/* 80272390 0026F2D0  93 C1 00 08 */	stw r30, 8(r1)
/* 80272394 0026F2D4  7C 7E 1B 78 */	mr r30, r3
/* 80272398 0026F2D8  7F E3 FB 78 */	mr r3, r31
/* 8027239C 0026F2DC  48 00 0D 35 */	bl setHeightVelocity__Q34Game5Sarai3ObjFv
/* 802723A0 0026F2E0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802723A4 0026F2E4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802723A8 0026F2E8  28 00 00 00 */	cmplwi r0, 0
/* 802723AC 0026F2EC  41 82 00 74 */	beq .L_80272420
/* 802723B0 0026F2F0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802723B4 0026F2F4  28 00 00 02 */	cmplwi r0, 2
/* 802723B8 0026F2F8  40 82 00 14 */	bne .L_802723CC
/* 802723BC 0026F2FC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802723C0 0026F300  64 00 00 20 */	oris r0, r0, 0x20
/* 802723C4 0026F304  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802723C8 0026F308  48 00 00 58 */	b .L_80272420
.L_802723CC:
/* 802723CC 0026F30C  28 00 00 03 */	cmplwi r0, 3
/* 802723D0 0026F310  40 82 00 10 */	bne .L_802723E0
/* 802723D4 0026F314  7F E3 FB 78 */	mr r3, r31
/* 802723D8 0026F318  48 00 10 31 */	bl fallMeckGround__Q34Game5Sarai3ObjFv
/* 802723DC 0026F31C  48 00 00 44 */	b .L_80272420
.L_802723E0:
/* 802723E0 0026F320  28 00 00 04 */	cmplwi r0, 4
/* 802723E4 0026F324  40 82 00 14 */	bne .L_802723F8
/* 802723E8 0026F328  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802723EC 0026F32C  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802723F0 0026F330  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802723F4 0026F334  48 00 00 2C */	b .L_80272420
.L_802723F8:
/* 802723F8 0026F338  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802723FC 0026F33C  40 82 00 24 */	bne .L_80272420
/* 80272400 0026F340  7F C3 F3 78 */	mr r3, r30
/* 80272404 0026F344  7F E4 FB 78 */	mr r4, r31
/* 80272408 0026F348  81 9E 00 00 */	lwz r12, 0(r30)
/* 8027240C 0026F34C  38 A0 00 06 */	li r5, 6
/* 80272410 0026F350  38 C0 00 00 */	li r6, 0
/* 80272414 0026F354  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80272418 0026F358  7D 89 03 A6 */	mtctr r12
/* 8027241C 0026F35C  4E 80 04 21 */	bctrl 
.L_80272420:
/* 80272420 0026F360  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80272424 0026F364  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80272428 0026F368  83 C1 00 08 */	lwz r30, 8(r1)
/* 8027242C 0026F36C  7C 08 03 A6 */	mtlr r0
/* 80272430 0026F370  38 21 00 10 */	addi r1, r1, 0x10
/* 80272434 0026F374  4E 80 00 20 */	blr 
.endfn exec__Q34Game5Sarai13StateFallMeckFPQ24Game9EnemyBase

.fn cleanup__Q34Game5Sarai13StateFallMeckFPQ24Game9EnemyBase, global
/* 80272438 0026F378  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8027243C 0026F37C  7C 08 02 A6 */	mflr r0
/* 80272440 0026F380  C0 22 CD F8 */	lfs f1, lbl_8051B158@sda21(r2)
/* 80272444 0026F384  90 01 00 14 */	stw r0, 0x14(r1)
/* 80272448 0026F388  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8027244C 0026F38C  7C 9F 23 78 */	mr r31, r4
/* 80272450 0026F390  7F E3 FB 78 */	mr r3, r31
/* 80272454 0026F394  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80272458 0026F398  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 8027245C 0026F39C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80272460 0026F3A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80272464 0026F3A4  81 8C 03 08 */	lwz r12, 0x308(r12)
/* 80272468 0026F3A8  7D 89 03 A6 */	mtctr r12
/* 8027246C 0026F3AC  4E 80 04 21 */	bctrl 
/* 80272470 0026F3B0  7F E3 FB 78 */	mr r3, r31
/* 80272474 0026F3B4  4B E8 F5 09 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80272478 0026F3B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8027247C 0026F3BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80272480 0026F3C0  7C 08 03 A6 */	mtlr r0
/* 80272484 0026F3C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80272488 0026F3C8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game5Sarai13StateFallMeckFPQ24Game9EnemyBase

.fn resetAttackableTimer__Q34Game5Sarai3ObjFf, weak
/* 8027248C 0026F3CC  4E 80 00 20 */	blr 
.endfn resetAttackableTimer__Q34Game5Sarai3ObjFf
