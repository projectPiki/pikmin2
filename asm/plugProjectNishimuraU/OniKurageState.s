.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
.4byte __sinit_OniKurageState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048BD38
lbl_8048BD38:
	.asciz "flyflick"
	.skip 3
.global lbl_8048BD44
lbl_8048BD44:
	.asciz "groundflick"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global lbl_804D27A8
lbl_804D27A8:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game9OniKurage16StateGroundFlick
__vt__Q34Game9OniKurage16StateGroundFlick:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q23efx12TKurageFlick
__vt__Q23efx12TKurageFlick:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q34Game9OniKurage13StateFlyFlick
__vt__Q34Game9OniKurage13StateFlyFlick:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage11StateGround
__vt__Q34Game9OniKurage11StateGround:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage12StateTakeOff
__vt__Q34Game9OniKurage12StateTakeOff:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage9StateLand
__vt__Q34Game9OniKurage9StateLand:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage9StateDrop
__vt__Q34Game9OniKurage9StateDrop:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage9StateFall
__vt__Q34Game9OniKurage9StateFall:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage11StateAttack
__vt__Q34Game9OniKurage11StateAttack:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage10StateChase
__vt__Q34Game9OniKurage10StateChase:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage9StateMove
__vt__Q34Game9OniKurage9StateMove:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage9StateWait
__vt__Q34Game9OniKurage9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage9StateDead
__vt__Q34Game9OniKurage9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage5State
__vt__Q34Game9OniKurage5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game9OniKurage3FSM
__vt__Q34Game9OniKurage3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9OniKurage3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

.section .sbss # 0x80514D80 - 0x80516360
.balign 0x8
.global lbl_80515DC8
lbl_80515DC8:
	.skip 0x4
.global lbl_80515DCC
lbl_80515DCC:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_8051C8E8
lbl_8051C8E8:
	.4byte 0x64656164
	.4byte 0x00000000
.global lbl_8051C8F0
lbl_8051C8F0:
	.4byte 0x77616974
	.4byte 0x00000000
.global lbl_8051C8F8
lbl_8051C8F8:
	.4byte 0x6D6F7665
	.4byte 0x00000000
.global lbl_8051C900
lbl_8051C900:
	.4byte 0x63686173
	.4byte 0x65000000
.global lbl_8051C908
lbl_8051C908:
	.4byte 0x61747461
	.4byte 0x636B0000
.global lbl_8051C910
lbl_8051C910:
	.4byte 0x66616C6C
	.4byte 0x00000000
.global lbl_8051C918
lbl_8051C918:
	.4byte 0x64726F70
	.4byte 0x00000000
.global lbl_8051C920
lbl_8051C920:
	.4byte 0x6C616E64
	.4byte 0x00000000
.global lbl_8051C928
lbl_8051C928:
	.4byte 0x67726F75
	.4byte 0x6E640000
.global lbl_8051C930
lbl_8051C930:
	.4byte 0x74616B65
	.4byte 0x6F666600
.global lbl_8051C938
lbl_8051C938:
	.4byte 0x00000000
.global lbl_8051C93C
lbl_8051C93C:
	.4byte 0x41F00000
.global lbl_8051C940
lbl_8051C940:
	.4byte 0x42820000
.global lbl_8051C944
lbl_8051C944:
	.4byte 0x41A00000
.global lbl_8051C948
lbl_8051C948:
	.4byte 0x41980000
.global lbl_8051C94C
lbl_8051C94C:
	.float 1.0
.global lbl_8051C950
lbl_8051C950:
	.4byte 0x42C80000
.global lbl_8051C954
lbl_8051C954:
	.4byte 0xC47A0000
.global lbl_8051C958
lbl_8051C958:
	.4byte 0x40600000
.global lbl_8051C95C
lbl_8051C95C:
	.4byte 0x40400000
.global lbl_8051C960
lbl_8051C960:
	.4byte 0x41200000
.global lbl_8051C964
lbl_8051C964:
	.4byte 0x441C4000
.global lbl_8051C968
lbl_8051C968:
	.4byte 0x41C80000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game9OniKurage3FSMFPQ24Game9EnemyBase
init__Q34Game9OniKurage3FSMFPQ24Game9EnemyBase:
/* 802D1AE0 002CEA20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D1AE4 002CEA24  7C 08 02 A6 */	mflr r0
/* 802D1AE8 002CEA28  38 80 00 0C */	li r4, 0xc
/* 802D1AEC 002CEA2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1AF0 002CEA30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D1AF4 002CEA34  7C 7F 1B 78 */	mr r31, r3
/* 802D1AF8 002CEA38  4B E5 ED 6D */	bl create__Q24Game17EnemyStateMachineFi
/* 802D1AFC 002CEA3C  38 60 00 10 */	li r3, 0x10
/* 802D1B00 002CEA40  4B D5 23 A5 */	bl __nw__FUl
/* 802D1B04 002CEA44  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1B08 002CEA48  41 82 00 3C */	beq lbl_802D1B44
/* 802D1B0C 002CEA4C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1B10 002CEA50  3C A0 80 4D */	lis r5, __vt__Q34Game9OniKurage5State@ha
/* 802D1B14 002CEA54  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1B18 002CEA58  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage9StateDead@ha
/* 802D1B1C 002CEA5C  90 04 00 00 */	stw r0, 0(r4)
/* 802D1B20 002CEA60  38 E0 00 00 */	li r7, 0
/* 802D1B24 002CEA64  38 C5 29 78 */	addi r6, r5, __vt__Q34Game9OniKurage5State@l
/* 802D1B28 002CEA68  38 A2 E5 88 */	addi r5, r2, lbl_8051C8E8@sda21
/* 802D1B2C 002CEA6C  90 E4 00 04 */	stw r7, 4(r4)
/* 802D1B30 002CEA70  38 03 29 54 */	addi r0, r3, __vt__Q34Game9OniKurage9StateDead@l
/* 802D1B34 002CEA74  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1B38 002CEA78  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1B3C 002CEA7C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1B40 002CEA80  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1B44:
/* 802D1B44 002CEA84  7F E3 FB 78 */	mr r3, r31
/* 802D1B48 002CEA88  4B E5 ED C1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1B4C 002CEA8C  38 60 00 10 */	li r3, 0x10
/* 802D1B50 002CEA90  4B D5 23 55 */	bl __nw__FUl
/* 802D1B54 002CEA94  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1B58 002CEA98  41 82 00 40 */	beq lbl_802D1B98
/* 802D1B5C 002CEA9C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1B60 002CEAA0  3C A0 80 4D */	lis r5, __vt__Q34Game9OniKurage5State@ha
/* 802D1B64 002CEAA4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1B68 002CEAA8  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage9StateWait@ha
/* 802D1B6C 002CEAAC  90 04 00 00 */	stw r0, 0(r4)
/* 802D1B70 002CEAB0  38 00 00 01 */	li r0, 1
/* 802D1B74 002CEAB4  38 E0 00 00 */	li r7, 0
/* 802D1B78 002CEAB8  38 C5 29 78 */	addi r6, r5, __vt__Q34Game9OniKurage5State@l
/* 802D1B7C 002CEABC  90 04 00 04 */	stw r0, 4(r4)
/* 802D1B80 002CEAC0  38 A2 E5 90 */	addi r5, r2, lbl_8051C8F0@sda21
/* 802D1B84 002CEAC4  38 03 29 30 */	addi r0, r3, __vt__Q34Game9OniKurage9StateWait@l
/* 802D1B88 002CEAC8  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1B8C 002CEACC  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1B90 002CEAD0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1B94 002CEAD4  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1B98:
/* 802D1B98 002CEAD8  7F E3 FB 78 */	mr r3, r31
/* 802D1B9C 002CEADC  4B E5 ED 6D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1BA0 002CEAE0  38 60 00 10 */	li r3, 0x10
/* 802D1BA4 002CEAE4  4B D5 23 01 */	bl __nw__FUl
/* 802D1BA8 002CEAE8  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1BAC 002CEAEC  41 82 00 40 */	beq lbl_802D1BEC
/* 802D1BB0 002CEAF0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1BB4 002CEAF4  3C A0 80 4D */	lis r5, __vt__Q34Game9OniKurage5State@ha
/* 802D1BB8 002CEAF8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1BBC 002CEAFC  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage9StateMove@ha
/* 802D1BC0 002CEB00  90 04 00 00 */	stw r0, 0(r4)
/* 802D1BC4 002CEB04  38 00 00 02 */	li r0, 2
/* 802D1BC8 002CEB08  38 E0 00 00 */	li r7, 0
/* 802D1BCC 002CEB0C  38 C5 29 78 */	addi r6, r5, __vt__Q34Game9OniKurage5State@l
/* 802D1BD0 002CEB10  90 04 00 04 */	stw r0, 4(r4)
/* 802D1BD4 002CEB14  38 A2 E5 98 */	addi r5, r2, lbl_8051C8F8@sda21
/* 802D1BD8 002CEB18  38 03 29 0C */	addi r0, r3, __vt__Q34Game9OniKurage9StateMove@l
/* 802D1BDC 002CEB1C  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1BE0 002CEB20  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1BE4 002CEB24  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1BE8 002CEB28  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1BEC:
/* 802D1BEC 002CEB2C  7F E3 FB 78 */	mr r3, r31
/* 802D1BF0 002CEB30  4B E5 ED 19 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1BF4 002CEB34  38 60 00 10 */	li r3, 0x10
/* 802D1BF8 002CEB38  4B D5 22 AD */	bl __nw__FUl
/* 802D1BFC 002CEB3C  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1C00 002CEB40  41 82 00 40 */	beq lbl_802D1C40
/* 802D1C04 002CEB44  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1C08 002CEB48  3C A0 80 4D */	lis r5, __vt__Q34Game9OniKurage5State@ha
/* 802D1C0C 002CEB4C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1C10 002CEB50  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage10StateChase@ha
/* 802D1C14 002CEB54  90 04 00 00 */	stw r0, 0(r4)
/* 802D1C18 002CEB58  38 00 00 03 */	li r0, 3
/* 802D1C1C 002CEB5C  38 E0 00 00 */	li r7, 0
/* 802D1C20 002CEB60  38 C5 29 78 */	addi r6, r5, __vt__Q34Game9OniKurage5State@l
/* 802D1C24 002CEB64  90 04 00 04 */	stw r0, 4(r4)
/* 802D1C28 002CEB68  38 A2 E5 A0 */	addi r5, r2, lbl_8051C900@sda21
/* 802D1C2C 002CEB6C  38 03 28 E8 */	addi r0, r3, __vt__Q34Game9OniKurage10StateChase@l
/* 802D1C30 002CEB70  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1C34 002CEB74  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1C38 002CEB78  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1C3C 002CEB7C  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1C40:
/* 802D1C40 002CEB80  7F E3 FB 78 */	mr r3, r31
/* 802D1C44 002CEB84  4B E5 EC C5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1C48 002CEB88  38 60 00 10 */	li r3, 0x10
/* 802D1C4C 002CEB8C  4B D5 22 59 */	bl __nw__FUl
/* 802D1C50 002CEB90  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1C54 002CEB94  41 82 00 40 */	beq lbl_802D1C94
/* 802D1C58 002CEB98  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1C5C 002CEB9C  3C A0 80 4D */	lis r5, __vt__Q34Game9OniKurage5State@ha
/* 802D1C60 002CEBA0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1C64 002CEBA4  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage11StateAttack@ha
/* 802D1C68 002CEBA8  90 04 00 00 */	stw r0, 0(r4)
/* 802D1C6C 002CEBAC  38 00 00 04 */	li r0, 4
/* 802D1C70 002CEBB0  38 E0 00 00 */	li r7, 0
/* 802D1C74 002CEBB4  38 C5 29 78 */	addi r6, r5, __vt__Q34Game9OniKurage5State@l
/* 802D1C78 002CEBB8  90 04 00 04 */	stw r0, 4(r4)
/* 802D1C7C 002CEBBC  38 A2 E5 A8 */	addi r5, r2, lbl_8051C908@sda21
/* 802D1C80 002CEBC0  38 03 28 C4 */	addi r0, r3, __vt__Q34Game9OniKurage11StateAttack@l
/* 802D1C84 002CEBC4  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1C88 002CEBC8  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1C8C 002CEBCC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1C90 002CEBD0  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1C94:
/* 802D1C94 002CEBD4  7F E3 FB 78 */	mr r3, r31
/* 802D1C98 002CEBD8  4B E5 EC 71 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1C9C 002CEBDC  38 60 00 10 */	li r3, 0x10
/* 802D1CA0 002CEBE0  4B D5 22 05 */	bl __nw__FUl
/* 802D1CA4 002CEBE4  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1CA8 002CEBE8  41 82 00 40 */	beq lbl_802D1CE8
/* 802D1CAC 002CEBEC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1CB0 002CEBF0  3C A0 80 4D */	lis r5, __vt__Q34Game9OniKurage5State@ha
/* 802D1CB4 002CEBF4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1CB8 002CEBF8  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage9StateFall@ha
/* 802D1CBC 002CEBFC  90 04 00 00 */	stw r0, 0(r4)
/* 802D1CC0 002CEC00  38 00 00 05 */	li r0, 5
/* 802D1CC4 002CEC04  38 E0 00 00 */	li r7, 0
/* 802D1CC8 002CEC08  38 C5 29 78 */	addi r6, r5, __vt__Q34Game9OniKurage5State@l
/* 802D1CCC 002CEC0C  90 04 00 04 */	stw r0, 4(r4)
/* 802D1CD0 002CEC10  38 A2 E5 B0 */	addi r5, r2, lbl_8051C910@sda21
/* 802D1CD4 002CEC14  38 03 28 A0 */	addi r0, r3, __vt__Q34Game9OniKurage9StateFall@l
/* 802D1CD8 002CEC18  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1CDC 002CEC1C  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1CE0 002CEC20  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1CE4 002CEC24  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1CE8:
/* 802D1CE8 002CEC28  7F E3 FB 78 */	mr r3, r31
/* 802D1CEC 002CEC2C  4B E5 EC 1D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1CF0 002CEC30  38 60 00 10 */	li r3, 0x10
/* 802D1CF4 002CEC34  4B D5 21 B1 */	bl __nw__FUl
/* 802D1CF8 002CEC38  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1CFC 002CEC3C  41 82 00 40 */	beq lbl_802D1D3C
/* 802D1D00 002CEC40  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1D04 002CEC44  3C A0 80 4D */	lis r5, __vt__Q34Game9OniKurage5State@ha
/* 802D1D08 002CEC48  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1D0C 002CEC4C  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage9StateDrop@ha
/* 802D1D10 002CEC50  90 04 00 00 */	stw r0, 0(r4)
/* 802D1D14 002CEC54  38 00 00 06 */	li r0, 6
/* 802D1D18 002CEC58  38 E0 00 00 */	li r7, 0
/* 802D1D1C 002CEC5C  38 C5 29 78 */	addi r6, r5, __vt__Q34Game9OniKurage5State@l
/* 802D1D20 002CEC60  90 04 00 04 */	stw r0, 4(r4)
/* 802D1D24 002CEC64  38 A2 E5 B8 */	addi r5, r2, lbl_8051C918@sda21
/* 802D1D28 002CEC68  38 03 28 7C */	addi r0, r3, __vt__Q34Game9OniKurage9StateDrop@l
/* 802D1D2C 002CEC6C  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1D30 002CEC70  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1D34 002CEC74  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1D38 002CEC78  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1D3C:
/* 802D1D3C 002CEC7C  7F E3 FB 78 */	mr r3, r31
/* 802D1D40 002CEC80  4B E5 EB C9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1D44 002CEC84  38 60 00 10 */	li r3, 0x10
/* 802D1D48 002CEC88  4B D5 21 5D */	bl __nw__FUl
/* 802D1D4C 002CEC8C  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1D50 002CEC90  41 82 00 40 */	beq lbl_802D1D90
/* 802D1D54 002CEC94  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1D58 002CEC98  3C A0 80 4D */	lis r5, __vt__Q34Game9OniKurage5State@ha
/* 802D1D5C 002CEC9C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1D60 002CECA0  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage9StateLand@ha
/* 802D1D64 002CECA4  90 04 00 00 */	stw r0, 0(r4)
/* 802D1D68 002CECA8  38 00 00 07 */	li r0, 7
/* 802D1D6C 002CECAC  38 E0 00 00 */	li r7, 0
/* 802D1D70 002CECB0  38 C5 29 78 */	addi r6, r5, __vt__Q34Game9OniKurage5State@l
/* 802D1D74 002CECB4  90 04 00 04 */	stw r0, 4(r4)
/* 802D1D78 002CECB8  38 A2 E5 C0 */	addi r5, r2, lbl_8051C920@sda21
/* 802D1D7C 002CECBC  38 03 28 58 */	addi r0, r3, __vt__Q34Game9OniKurage9StateLand@l
/* 802D1D80 002CECC0  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1D84 002CECC4  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1D88 002CECC8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1D8C 002CECCC  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1D90:
/* 802D1D90 002CECD0  7F E3 FB 78 */	mr r3, r31
/* 802D1D94 002CECD4  4B E5 EB 75 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1D98 002CECD8  38 60 00 10 */	li r3, 0x10
/* 802D1D9C 002CECDC  4B D5 21 09 */	bl __nw__FUl
/* 802D1DA0 002CECE0  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1DA4 002CECE4  41 82 00 40 */	beq lbl_802D1DE4
/* 802D1DA8 002CECE8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1DAC 002CECEC  3C A0 80 4D */	lis r5, __vt__Q34Game9OniKurage5State@ha
/* 802D1DB0 002CECF0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1DB4 002CECF4  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage11StateGround@ha
/* 802D1DB8 002CECF8  90 04 00 00 */	stw r0, 0(r4)
/* 802D1DBC 002CECFC  38 00 00 08 */	li r0, 8
/* 802D1DC0 002CED00  38 E0 00 00 */	li r7, 0
/* 802D1DC4 002CED04  38 C5 29 78 */	addi r6, r5, __vt__Q34Game9OniKurage5State@l
/* 802D1DC8 002CED08  90 04 00 04 */	stw r0, 4(r4)
/* 802D1DCC 002CED0C  38 A2 E5 C8 */	addi r5, r2, lbl_8051C928@sda21
/* 802D1DD0 002CED10  38 03 28 10 */	addi r0, r3, __vt__Q34Game9OniKurage11StateGround@l
/* 802D1DD4 002CED14  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1DD8 002CED18  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1DDC 002CED1C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1DE0 002CED20  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1DE4:
/* 802D1DE4 002CED24  7F E3 FB 78 */	mr r3, r31
/* 802D1DE8 002CED28  4B E5 EB 21 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1DEC 002CED2C  38 60 00 10 */	li r3, 0x10
/* 802D1DF0 002CED30  4B D5 20 B5 */	bl __nw__FUl
/* 802D1DF4 002CED34  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1DF8 002CED38  41 82 00 40 */	beq lbl_802D1E38
/* 802D1DFC 002CED3C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1E00 002CED40  3C A0 80 4D */	lis r5, __vt__Q34Game9OniKurage5State@ha
/* 802D1E04 002CED44  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1E08 002CED48  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage12StateTakeOff@ha
/* 802D1E0C 002CED4C  90 04 00 00 */	stw r0, 0(r4)
/* 802D1E10 002CED50  38 00 00 09 */	li r0, 9
/* 802D1E14 002CED54  38 E0 00 00 */	li r7, 0
/* 802D1E18 002CED58  38 C5 29 78 */	addi r6, r5, __vt__Q34Game9OniKurage5State@l
/* 802D1E1C 002CED5C  90 04 00 04 */	stw r0, 4(r4)
/* 802D1E20 002CED60  38 A2 E5 D0 */	addi r5, r2, lbl_8051C930@sda21
/* 802D1E24 002CED64  38 03 28 34 */	addi r0, r3, __vt__Q34Game9OniKurage12StateTakeOff@l
/* 802D1E28 002CED68  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1E2C 002CED6C  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1E30 002CED70  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1E34 002CED74  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1E38:
/* 802D1E38 002CED78  7F E3 FB 78 */	mr r3, r31
/* 802D1E3C 002CED7C  4B E5 EA CD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1E40 002CED80  38 60 00 10 */	li r3, 0x10
/* 802D1E44 002CED84  4B D5 20 61 */	bl __nw__FUl
/* 802D1E48 002CED88  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1E4C 002CED8C  41 82 00 44 */	beq lbl_802D1E90
/* 802D1E50 002CED90  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1E54 002CED94  3C C0 80 4D */	lis r6, __vt__Q34Game9OniKurage5State@ha
/* 802D1E58 002CED98  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1E5C 002CED9C  3C A0 80 49 */	lis r5, lbl_8048BD38@ha
/* 802D1E60 002CEDA0  90 04 00 00 */	stw r0, 0(r4)
/* 802D1E64 002CEDA4  38 00 00 0A */	li r0, 0xa
/* 802D1E68 002CEDA8  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage13StateFlyFlick@ha
/* 802D1E6C 002CEDAC  38 E0 00 00 */	li r7, 0
/* 802D1E70 002CEDB0  90 04 00 04 */	stw r0, 4(r4)
/* 802D1E74 002CEDB4  38 C6 29 78 */	addi r6, r6, __vt__Q34Game9OniKurage5State@l
/* 802D1E78 002CEDB8  38 A5 BD 38 */	addi r5, r5, lbl_8048BD38@l
/* 802D1E7C 002CEDBC  38 03 27 EC */	addi r0, r3, __vt__Q34Game9OniKurage13StateFlyFlick@l
/* 802D1E80 002CEDC0  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1E84 002CEDC4  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1E88 002CEDC8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1E8C 002CEDCC  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1E90:
/* 802D1E90 002CEDD0  7F E3 FB 78 */	mr r3, r31
/* 802D1E94 002CEDD4  4B E5 EA 75 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1E98 002CEDD8  38 60 00 10 */	li r3, 0x10
/* 802D1E9C 002CEDDC  4B D5 20 09 */	bl __nw__FUl
/* 802D1EA0 002CEDE0  7C 64 1B 79 */	or. r4, r3, r3
/* 802D1EA4 002CEDE4  41 82 00 44 */	beq lbl_802D1EE8
/* 802D1EA8 002CEDE8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802D1EAC 002CEDEC  3C C0 80 4D */	lis r6, __vt__Q34Game9OniKurage5State@ha
/* 802D1EB0 002CEDF0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802D1EB4 002CEDF4  3C A0 80 49 */	lis r5, lbl_8048BD44@ha
/* 802D1EB8 002CEDF8  90 04 00 00 */	stw r0, 0(r4)
/* 802D1EBC 002CEDFC  38 00 00 0B */	li r0, 0xb
/* 802D1EC0 002CEE00  3C 60 80 4D */	lis r3, __vt__Q34Game9OniKurage16StateGroundFlick@ha
/* 802D1EC4 002CEE04  38 E0 00 00 */	li r7, 0
/* 802D1EC8 002CEE08  90 04 00 04 */	stw r0, 4(r4)
/* 802D1ECC 002CEE0C  38 C6 29 78 */	addi r6, r6, __vt__Q34Game9OniKurage5State@l
/* 802D1ED0 002CEE10  38 A5 BD 44 */	addi r5, r5, lbl_8048BD44@l
/* 802D1ED4 002CEE14  38 03 27 B4 */	addi r0, r3, __vt__Q34Game9OniKurage16StateGroundFlick@l
/* 802D1ED8 002CEE18  90 E4 00 08 */	stw r7, 8(r4)
/* 802D1EDC 002CEE1C  90 C4 00 00 */	stw r6, 0(r4)
/* 802D1EE0 002CEE20  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802D1EE4 002CEE24  90 04 00 00 */	stw r0, 0(r4)
lbl_802D1EE8:
/* 802D1EE8 002CEE28  7F E3 FB 78 */	mr r3, r31
/* 802D1EEC 002CEE2C  4B E5 EA 1D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802D1EF0 002CEE30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D1EF4 002CEE34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D1EF8 002CEE38  7C 08 03 A6 */	mtlr r0
/* 802D1EFC 002CEE3C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D1F00 002CEE40  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D1F04 002CEE44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D1F08 002CEE48  7C 08 02 A6 */	mflr r0
/* 802D1F0C 002CEE4C  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D1F10 002CEE50  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1F14 002CEE54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D1F18 002CEE58  7C 9F 23 78 */	mr r31, r4
/* 802D1F1C 002CEE5C  7F E3 FB 78 */	mr r3, r31
/* 802D1F20 002CEE60  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802D1F24 002CEE64  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802D1F28 002CEE68  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802D1F2C 002CEE6C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802D1F30 002CEE70  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 802D1F34 002CEE74  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802D1F38 002CEE78  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802D1F3C 002CEE7C  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802D1F40 002CEE80  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802D1F44 002CEE84  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D1F48 002CEE88  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802D1F4C 002CEE8C  7D 89 03 A6 */	mtctr r12
/* 802D1F50 002CEE90  4E 80 04 21 */	bctrl 
/* 802D1F54 002CEE94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D1F58 002CEE98  41 82 00 18 */	beq lbl_802D1F70
/* 802D1F5C 002CEE9C  7F E3 FB 78 */	mr r3, r31
/* 802D1F60 002CEEA0  38 80 00 00 */	li r4, 0
/* 802D1F64 002CEEA4  38 A0 00 00 */	li r5, 0
/* 802D1F68 002CEEA8  4B E3 30 9D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D1F6C 002CEEAC  48 00 00 14 */	b lbl_802D1F80
lbl_802D1F70:
/* 802D1F70 002CEEB0  7F E3 FB 78 */	mr r3, r31
/* 802D1F74 002CEEB4  38 80 00 01 */	li r4, 1
/* 802D1F78 002CEEB8  38 A0 00 00 */	li r5, 0
/* 802D1F7C 002CEEBC  4B E3 30 89 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
lbl_802D1F80:
/* 802D1F80 002CEEC0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802D1F84 002CEEC4  7F E3 FB 78 */	mr r3, r31
/* 802D1F88 002CEEC8  60 00 00 04 */	ori r0, r0, 4
/* 802D1F8C 002CEECC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802D1F90 002CEED0  4B E3 38 E5 */	bl createDeadBombEffect__Q24Game9EnemyBaseFv
/* 802D1F94 002CEED4  7F E3 FB 78 */	mr r3, r31
/* 802D1F98 002CEED8  48 00 4C 45 */	bl finishEyeBodyEffect__Q34Game9OniKurage3ObjFv
/* 802D1F9C 002CEEDC  C0 22 E5 D8 */	lfs f1, lbl_8051C938@sda21(r2)
/* 802D1FA0 002CEEE0  7F E3 FB 78 */	mr r3, r31
/* 802D1FA4 002CEEE4  48 19 C4 71 */	bl PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
/* 802D1FA8 002CEEE8  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 802D1FAC 002CEEEC  81 83 00 28 */	lwz r12, 0x28(r3)
/* 802D1FB0 002CEEF0  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 802D1FB4 002CEEF4  7D 89 03 A6 */	mtctr r12
/* 802D1FB8 002CEEF8  4E 80 04 21 */	bctrl 
/* 802D1FBC 002CEEFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D1FC0 002CEF00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D1FC4 002CEF04  7C 08 03 A6 */	mtlr r0
/* 802D1FC8 002CEF08  38 21 00 10 */	addi r1, r1, 0x10
/* 802D1FCC 002CEF0C  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBase
exec__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBase:
/* 802D1FD0 002CEF10  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802D1FD4 002CEF14  7C 08 02 A6 */	mflr r0
/* 802D1FD8 002CEF18  90 01 00 44 */	stw r0, 0x44(r1)
/* 802D1FDC 002CEF1C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802D1FE0 002CEF20  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802D1FE4 002CEF24  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802D1FE8 002CEF28  7C 9F 23 78 */	mr r31, r4
/* 802D1FEC 002CEF2C  7F E3 FB 78 */	mr r3, r31
/* 802D1FF0 002CEF30  4B E3 32 7D */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802D1FF4 002CEF34  FF E0 08 90 */	fmr f31, f1
/* 802D1FF8 002CEF38  C0 02 E5 DC */	lfs f0, lbl_8051C93C@sda21(r2)
/* 802D1FFC 002CEF3C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802D2000 002CEF40  40 81 00 10 */	ble lbl_802D2010
/* 802D2004 002CEF44  7F E3 FB 78 */	mr r3, r31
/* 802D2008 002CEF48  38 80 00 01 */	li r4, 1
/* 802D200C 002CEF4C  48 00 43 B1 */	bl flickStickNavi__Q34Game9OniKurage3ObjFb
lbl_802D2010:
/* 802D2010 002CEF50  C0 02 E5 E0 */	lfs f0, lbl_8051C940@sda21(r2)
/* 802D2014 002CEF54  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802D2018 002CEF58  40 81 00 30 */	ble lbl_802D2048
/* 802D201C 002CEF5C  EC 5F 00 28 */	fsubs f2, f31, f0
/* 802D2020 002CEF60  C0 22 E5 DC */	lfs f1, lbl_8051C93C@sda21(r2)
/* 802D2024 002CEF64  C0 62 E5 E8 */	lfs f3, lbl_8051C948@sda21(r2)
/* 802D2028 002CEF68  7F E3 FB 78 */	mr r3, r31
/* 802D202C 002CEF6C  C0 02 E5 E4 */	lfs f0, lbl_8051C944@sda21(r2)
/* 802D2030 002CEF70  EC 22 08 24 */	fdivs f1, f2, f1
/* 802D2034 002CEF74  EC 03 00 7C */	fnmsubs f0, f3, f1, f0
/* 802D2038 002CEF78  FC 00 00 1E */	fctiwz f0, f0
/* 802D203C 002CEF7C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802D2040 002CEF80  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802D2044 002CEF84  48 00 4C 15 */	bl setHireEffectLife__Q34Game9OniKurage3ObjFs
lbl_802D2048:
/* 802D2048 002CEF88  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D204C 002CEF8C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D2050 002CEF90  28 00 00 00 */	cmplwi r0, 0
/* 802D2054 002CEF94  41 82 00 EC */	beq lbl_802D2140
/* 802D2058 002CEF98  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D205C 002CEF9C  28 00 00 02 */	cmplwi r0, 2
/* 802D2060 002CEFA0  40 82 00 24 */	bne lbl_802D2084
/* 802D2064 002CEFA4  C0 22 E5 EC */	lfs f1, lbl_8051C94C@sda21(r2)
/* 802D2068 002CEFA8  7F E3 FB 78 */	mr r3, r31
/* 802D206C 002CEFAC  C0 42 E5 F0 */	lfs f2, lbl_8051C950@sda21(r2)
/* 802D2070 002CEFB0  38 80 00 00 */	li r4, 0
/* 802D2074 002CEFB4  C0 62 E5 D8 */	lfs f3, lbl_8051C938@sda21(r2)
/* 802D2078 002CEFB8  C0 82 E5 F4 */	lfs f4, lbl_8051C954@sda21(r2)
/* 802D207C 002CEFBC  4B E4 10 A1 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D2080 002CEFC0  48 00 00 C0 */	b lbl_802D2140
lbl_802D2084:
/* 802D2084 002CEFC4  28 00 00 03 */	cmplwi r0, 3
/* 802D2088 002CEFC8  40 82 00 A4 */	bne lbl_802D212C
/* 802D208C 002CEFCC  7F E3 FB 78 */	mr r3, r31
/* 802D2090 002CEFD0  4B E3 36 91 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802D2094 002CEFD4  7F E3 FB 78 */	mr r3, r31
/* 802D2098 002CEFD8  48 00 4B E5 */	bl finishHireEffect__Q34Game9OniKurage3ObjFv
/* 802D209C 002CEFDC  7F E3 FB 78 */	mr r3, r31
/* 802D20A0 002CEFE0  48 00 4D 0D */	bl createBodyBombEffect__Q34Game9OniKurage3ObjFv
/* 802D20A4 002CEFE4  7F E3 FB 78 */	mr r3, r31
/* 802D20A8 002CEFE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D20AC 002CEFEC  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802D20B0 002CEFF0  7D 89 03 A6 */	mtctr r12
/* 802D20B4 002CEFF4  4E 80 04 21 */	bctrl 
/* 802D20B8 002CEFF8  81 83 00 00 */	lwz r12, 0(r3)
/* 802D20BC 002CEFFC  38 80 59 0A */	li r4, 0x590a
/* 802D20C0 002CF000  38 A0 00 00 */	li r5, 0
/* 802D20C4 002CF004  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802D20C8 002CF008  7D 89 03 A6 */	mtctr r12
/* 802D20CC 002CF00C  4E 80 04 21 */	bctrl 
/* 802D20D0 002CF010  7F E4 FB 78 */	mr r4, r31
/* 802D20D4 002CF014  38 61 00 08 */	addi r3, r1, 8
/* 802D20D8 002CF018  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D20DC 002CF01C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D20E0 002CF020  7D 89 03 A6 */	mtctr r12
/* 802D20E4 002CF024  4E 80 04 21 */	bctrl 
/* 802D20E8 002CF028  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D20EC 002CF02C  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D20F0 002CF030  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802D20F4 002CF034  38 80 00 06 */	li r4, 6
/* 802D20F8 002CF038  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D20FC 002CF03C  38 C0 00 02 */	li r6, 2
/* 802D2100 002CF040  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802D2104 002CF044  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802D2108 002CF048  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802D210C 002CF04C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802D2110 002CF050  4B F8 01 2D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802D2114 002CF054  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802D2118 002CF058  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D211C 002CF05C  38 80 00 0A */	li r4, 0xa
/* 802D2120 002CF060  38 C0 00 02 */	li r6, 2
/* 802D2124 002CF064  4B F8 16 5D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802D2128 002CF068  48 00 00 18 */	b lbl_802D2140
lbl_802D212C:
/* 802D212C 002CF06C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D2130 002CF070  40 82 00 10 */	bne lbl_802D2140
/* 802D2134 002CF074  7F E3 FB 78 */	mr r3, r31
/* 802D2138 002CF078  38 80 00 00 */	li r4, 0
/* 802D213C 002CF07C  4B E6 8F B5 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
lbl_802D2140:
/* 802D2140 002CF080  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802D2144 002CF084  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802D2148 002CF088  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802D214C 002CF08C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802D2150 002CF090  7C 08 03 A6 */	mtlr r0
/* 802D2154 002CF094  38 21 00 40 */	addi r1, r1, 0x40
/* 802D2158 002CF098  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBase:
/* 802D215C 002CF09C  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D2160 002CF0A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D2164 002CF0A4  7C 08 02 A6 */	mflr r0
/* 802D2168 002CF0A8  C0 22 E5 D8 */	lfs f1, lbl_8051C938@sda21(r2)
/* 802D216C 002CF0AC  7C 83 23 78 */	mr r3, r4
/* 802D2170 002CF0B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D2174 002CF0B4  38 00 FF FF */	li r0, -1
/* 802D2178 002CF0B8  C0 02 E5 F8 */	lfs f0, lbl_8051C958@sda21(r2)
/* 802D217C 002CF0BC  38 A0 00 00 */	li r5, 0
/* 802D2180 002CF0C0  90 04 02 C0 */	stw r0, 0x2c0(r4)
/* 802D2184 002CF0C4  38 80 00 05 */	li r4, 5
/* 802D2188 002CF0C8  D0 23 02 C4 */	stfs f1, 0x2c4(r3)
/* 802D218C 002CF0CC  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802D2190 002CF0D0  60 00 00 04 */	ori r0, r0, 4
/* 802D2194 002CF0D4  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 802D2198 002CF0D8  D0 23 01 D4 */	stfs f1, 0x1d4(r3)
/* 802D219C 002CF0DC  D0 23 01 D8 */	stfs f1, 0x1d8(r3)
/* 802D21A0 002CF0E0  D0 23 01 DC */	stfs f1, 0x1dc(r3)
/* 802D21A4 002CF0E4  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 802D21A8 002CF0E8  4B E3 2E 5D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D21AC 002CF0EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D21B0 002CF0F0  7C 08 03 A6 */	mtlr r0
/* 802D21B4 002CF0F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D21B8 002CF0F8  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBase
exec__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBase:
/* 802D21BC 002CF0FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D21C0 002CF100  7C 08 02 A6 */	mflr r0
/* 802D21C4 002CF104  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D21C8 002CF108  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802D21CC 002CF10C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802D21D0 002CF110  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D21D4 002CF114  93 C1 00 08 */	stw r30, 8(r1)
/* 802D21D8 002CF118  7C 9F 23 78 */	mr r31, r4
/* 802D21DC 002CF11C  7C 7E 1B 78 */	mr r30, r3
/* 802D21E0 002CF120  7F E3 FB 78 */	mr r3, r31
/* 802D21E4 002CF124  48 00 27 B5 */	bl getMovePitchOffset__Q34Game9OniKurage3ObjFv
/* 802D21E8 002CF128  C0 42 E5 D8 */	lfs f2, lbl_8051C938@sda21(r2)
/* 802D21EC 002CF12C  7F E3 FB 78 */	mr r3, r31
/* 802D21F0 002CF130  48 00 25 39 */	bl setHeightVelocity__Q34Game9OniKurage3ObjFff
/* 802D21F4 002CF134  FF E0 08 90 */	fmr f31, f1
/* 802D21F8 002CF138  7F E3 FB 78 */	mr r3, r31
/* 802D21FC 002CF13C  48 00 2F 11 */	bl getSearchedTarget__Q34Game9OniKurage3ObjFf
/* 802D2200 002CF140  7C 64 1B 79 */	or. r4, r3, r3
/* 802D2204 002CF144  41 82 00 40 */	beq lbl_802D2244
/* 802D2208 002CF148  FC 20 F8 90 */	fmr f1, f31
/* 802D220C 002CF14C  7F E3 FB 78 */	mr r3, r31
/* 802D2210 002CF150  48 00 32 3D */	bl isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature
/* 802D2214 002CF154  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D2218 002CF158  41 82 00 18 */	beq lbl_802D2230
/* 802D221C 002CF15C  38 00 00 04 */	li r0, 4
/* 802D2220 002CF160  7F E3 FB 78 */	mr r3, r31
/* 802D2224 002CF164  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802D2228 002CF168  4B E3 30 79 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802D222C 002CF16C  48 00 00 38 */	b lbl_802D2264
lbl_802D2230:
/* 802D2230 002CF170  38 00 00 03 */	li r0, 3
/* 802D2234 002CF174  7F E3 FB 78 */	mr r3, r31
/* 802D2238 002CF178  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802D223C 002CF17C  4B E3 30 65 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802D2240 002CF180  48 00 00 24 */	b lbl_802D2264
lbl_802D2244:
/* 802D2244 002CF184  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802D2248 002CF188  C0 02 E5 FC */	lfs f0, lbl_8051C95C@sda21(r2)
/* 802D224C 002CF18C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D2250 002CF190  40 81 00 14 */	ble lbl_802D2264
/* 802D2254 002CF194  38 00 00 02 */	li r0, 2
/* 802D2258 002CF198  7F E3 FB 78 */	mr r3, r31
/* 802D225C 002CF19C  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802D2260 002CF1A0  4B E3 30 41 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802D2264:
/* 802D2264 002CF1A4  7F E3 FB 78 */	mr r3, r31
/* 802D2268 002CF1A8  48 00 2E 01 */	bl getFlyingNextState__Q34Game9OniKurage3ObjFv
/* 802D226C 002CF1AC  7C 65 1B 79 */	or. r5, r3, r3
/* 802D2270 002CF1B0  41 80 00 24 */	blt lbl_802D2294
/* 802D2274 002CF1B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D2278 002CF1B8  7F C3 F3 78 */	mr r3, r30
/* 802D227C 002CF1BC  7F E4 FB 78 */	mr r4, r31
/* 802D2280 002CF1C0  38 C0 00 00 */	li r6, 0
/* 802D2284 002CF1C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D2288 002CF1C8  7D 89 03 A6 */	mtctr r12
/* 802D228C 002CF1CC  4E 80 04 21 */	bctrl 
/* 802D2290 002CF1D0  48 00 00 54 */	b lbl_802D22E4
lbl_802D2294:
/* 802D2294 002CF1D4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802D2298 002CF1D8  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802D229C 002CF1DC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802D22A0 002CF1E0  EC 01 00 2A */	fadds f0, f1, f0
/* 802D22A4 002CF1E4  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802D22A8 002CF1E8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D22AC 002CF1EC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D22B0 002CF1F0  28 00 00 00 */	cmplwi r0, 0
/* 802D22B4 002CF1F4  41 82 00 30 */	beq lbl_802D22E4
/* 802D22B8 002CF1F8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D22BC 002CF1FC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D22C0 002CF200  40 82 00 24 */	bne lbl_802D22E4
/* 802D22C4 002CF204  7F C3 F3 78 */	mr r3, r30
/* 802D22C8 002CF208  7F E4 FB 78 */	mr r4, r31
/* 802D22CC 002CF20C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D22D0 002CF210  38 C0 00 00 */	li r6, 0
/* 802D22D4 002CF214  80 BF 02 C0 */	lwz r5, 0x2c0(r31)
/* 802D22D8 002CF218  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D22DC 002CF21C  7D 89 03 A6 */	mtctr r12
/* 802D22E0 002CF220  4E 80 04 21 */	bctrl 
lbl_802D22E4:
/* 802D22E4 002CF224  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802D22E8 002CF228  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D22EC 002CF22C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802D22F0 002CF230  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D22F4 002CF234  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D22F8 002CF238  7C 08 03 A6 */	mtlr r0
/* 802D22FC 002CF23C  38 21 00 20 */	addi r1, r1, 0x20
/* 802D2300 002CF240  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBase:
/* 802D2304 002CF244  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D2308 002CF248  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D230C 002CF24C  7C 08 02 A6 */	mflr r0
/* 802D2310 002CF250  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D2314 002CF254  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D2318 002CF258  38 00 FF FF */	li r0, -1
/* 802D231C 002CF25C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D2320 002CF260  7C 9F 23 78 */	mr r31, r4
/* 802D2324 002CF264  7F E3 FB 78 */	mr r3, r31
/* 802D2328 002CF268  90 04 02 C0 */	stw r0, 0x2c0(r4)
/* 802D232C 002CF26C  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802D2330 002CF270  48 00 24 91 */	bl setRandTarget__Q34Game9OniKurage3ObjFv
/* 802D2334 002CF274  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802D2338 002CF278  7F E3 FB 78 */	mr r3, r31
/* 802D233C 002CF27C  C0 22 E5 D8 */	lfs f1, lbl_8051C938@sda21(r2)
/* 802D2340 002CF280  38 80 00 05 */	li r4, 5
/* 802D2344 002CF284  60 00 00 04 */	ori r0, r0, 4
/* 802D2348 002CF288  C0 02 E5 F8 */	lfs f0, lbl_8051C958@sda21(r2)
/* 802D234C 002CF28C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802D2350 002CF290  38 A0 00 00 */	li r5, 0
/* 802D2354 002CF294  D0 3F 01 D4 */	stfs f1, 0x1d4(r31)
/* 802D2358 002CF298  D0 3F 01 D8 */	stfs f1, 0x1d8(r31)
/* 802D235C 002CF29C  D0 3F 01 DC */	stfs f1, 0x1dc(r31)
/* 802D2360 002CF2A0  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802D2364 002CF2A4  4B E3 2C A1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D2368 002CF2A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D236C 002CF2AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D2370 002CF2B0  7C 08 03 A6 */	mtlr r0
/* 802D2374 002CF2B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D2378 002CF2B8  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBase
exec__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBase:
/* 802D237C 002CF2BC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802D2380 002CF2C0  7C 08 02 A6 */	mflr r0
/* 802D2384 002CF2C4  90 01 00 44 */	stw r0, 0x44(r1)
/* 802D2388 002CF2C8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802D238C 002CF2CC  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802D2390 002CF2D0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802D2394 002CF2D4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802D2398 002CF2D8  7C 9F 23 78 */	mr r31, r4
/* 802D239C 002CF2DC  7C 7E 1B 78 */	mr r30, r3
/* 802D23A0 002CF2E0  7F E3 FB 78 */	mr r3, r31
/* 802D23A4 002CF2E4  48 00 25 F5 */	bl getMovePitchOffset__Q34Game9OniKurage3ObjFv
/* 802D23A8 002CF2E8  C0 42 E5 D8 */	lfs f2, lbl_8051C938@sda21(r2)
/* 802D23AC 002CF2EC  7F E3 FB 78 */	mr r3, r31
/* 802D23B0 002CF2F0  48 00 23 79 */	bl setHeightVelocity__Q34Game9OniKurage3ObjFff
/* 802D23B4 002CF2F4  FF E0 08 90 */	fmr f31, f1
/* 802D23B8 002CF2F8  7F E3 FB 78 */	mr r3, r31
/* 802D23BC 002CF2FC  48 00 2D 51 */	bl getSearchedTarget__Q34Game9OniKurage3ObjFf
/* 802D23C0 002CF300  7C 64 1B 79 */	or. r4, r3, r3
/* 802D23C4 002CF304  41 82 00 40 */	beq lbl_802D2404
/* 802D23C8 002CF308  FC 20 F8 90 */	fmr f1, f31
/* 802D23CC 002CF30C  7F E3 FB 78 */	mr r3, r31
/* 802D23D0 002CF310  48 00 30 7D */	bl isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature
/* 802D23D4 002CF314  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D23D8 002CF318  41 82 00 18 */	beq lbl_802D23F0
/* 802D23DC 002CF31C  38 00 00 04 */	li r0, 4
/* 802D23E0 002CF320  7F E3 FB 78 */	mr r3, r31
/* 802D23E4 002CF324  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802D23E8 002CF328  4B E3 2E B9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802D23EC 002CF32C  48 00 00 AC */	b lbl_802D2498
lbl_802D23F0:
/* 802D23F0 002CF330  38 00 00 03 */	li r0, 3
/* 802D23F4 002CF334  7F E3 FB 78 */	mr r3, r31
/* 802D23F8 002CF338  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802D23FC 002CF33C  4B E3 2E A5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802D2400 002CF340  48 00 00 98 */	b lbl_802D2498
lbl_802D2404:
/* 802D2404 002CF344  7F E4 FB 78 */	mr r4, r31
/* 802D2408 002CF348  38 61 00 08 */	addi r3, r1, 8
/* 802D240C 002CF34C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D2410 002CF350  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D2414 002CF354  7D 89 03 A6 */	mtctr r12
/* 802D2418 002CF358  4E 80 04 21 */	bctrl 
/* 802D241C 002CF35C  C0 3F 02 D4 */	lfs f1, 0x2d4(r31)
/* 802D2420 002CF360  C0 BF 02 D8 */	lfs f5, 0x2d8(r31)
/* 802D2424 002CF364  C0 5F 02 D0 */	lfs f2, 0x2d0(r31)
/* 802D2428 002CF368  C0 02 E6 00 */	lfs f0, lbl_8051C960@sda21(r2)
/* 802D242C 002CF36C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802D2430 002CF370  C0 61 00 08 */	lfs f3, 8(r1)
/* 802D2434 002CF374  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802D2438 002CF378  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 802D243C 002CF37C  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 802D2440 002CF380  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802D2444 002CF384  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D2448 002CF388  41 81 00 20 */	bgt lbl_802D2468
/* 802D244C 002CF38C  EC 24 28 28 */	fsubs f1, f4, f5
/* 802D2450 002CF390  C0 02 E6 04 */	lfs f0, lbl_8051C964@sda21(r2)
/* 802D2454 002CF394  EC 43 10 28 */	fsubs f2, f3, f2
/* 802D2458 002CF398  EC 21 00 72 */	fmuls f1, f1, f1
/* 802D245C 002CF39C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802D2460 002CF3A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D2464 002CF3A4  40 80 00 18 */	bge lbl_802D247C
lbl_802D2468:
/* 802D2468 002CF3A8  38 00 00 01 */	li r0, 1
/* 802D246C 002CF3AC  7F E3 FB 78 */	mr r3, r31
/* 802D2470 002CF3B0  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802D2474 002CF3B4  4B E3 2E 2D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802D2478 002CF3B8  48 00 00 20 */	b lbl_802D2498
lbl_802D247C:
/* 802D247C 002CF3BC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D2480 002CF3C0  7F E3 FB 78 */	mr r3, r31
/* 802D2484 002CF3C4  38 81 00 14 */	addi r4, r1, 0x14
/* 802D2488 002CF3C8  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 802D248C 002CF3CC  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802D2490 002CF3D0  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 802D2494 002CF3D4  4B E4 31 49 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
lbl_802D2498:
/* 802D2498 002CF3D8  7F E3 FB 78 */	mr r3, r31
/* 802D249C 002CF3DC  48 00 2B CD */	bl getFlyingNextState__Q34Game9OniKurage3ObjFv
/* 802D24A0 002CF3E0  7C 65 1B 79 */	or. r5, r3, r3
/* 802D24A4 002CF3E4  41 80 00 24 */	blt lbl_802D24C8
/* 802D24A8 002CF3E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D24AC 002CF3EC  7F C3 F3 78 */	mr r3, r30
/* 802D24B0 002CF3F0  7F E4 FB 78 */	mr r4, r31
/* 802D24B4 002CF3F4  38 C0 00 00 */	li r6, 0
/* 802D24B8 002CF3F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D24BC 002CF3FC  7D 89 03 A6 */	mtctr r12
/* 802D24C0 002CF400  4E 80 04 21 */	bctrl 
/* 802D24C4 002CF404  48 00 00 74 */	b lbl_802D2538
lbl_802D24C8:
/* 802D24C8 002CF408  7F E3 FB 78 */	mr r3, r31
/* 802D24CC 002CF40C  4B E3 4E 35 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802D24D0 002CF410  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D24D4 002CF414  41 82 00 14 */	beq lbl_802D24E8
/* 802D24D8 002CF418  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D24DC 002CF41C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D24E0 002CF420  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D24E4 002CF424  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
lbl_802D24E8:
/* 802D24E8 002CF428  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802D24EC 002CF42C  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802D24F0 002CF430  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802D24F4 002CF434  EC 01 00 2A */	fadds f0, f1, f0
/* 802D24F8 002CF438  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802D24FC 002CF43C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D2500 002CF440  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D2504 002CF444  28 00 00 00 */	cmplwi r0, 0
/* 802D2508 002CF448  41 82 00 30 */	beq lbl_802D2538
/* 802D250C 002CF44C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D2510 002CF450  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D2514 002CF454  40 82 00 24 */	bne lbl_802D2538
/* 802D2518 002CF458  7F C3 F3 78 */	mr r3, r30
/* 802D251C 002CF45C  7F E4 FB 78 */	mr r4, r31
/* 802D2520 002CF460  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D2524 002CF464  38 C0 00 00 */	li r6, 0
/* 802D2528 002CF468  80 BF 02 C0 */	lwz r5, 0x2c0(r31)
/* 802D252C 002CF46C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D2530 002CF470  7D 89 03 A6 */	mtctr r12
/* 802D2534 002CF474  4E 80 04 21 */	bctrl 
lbl_802D2538:
/* 802D2538 002CF478  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802D253C 002CF47C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802D2540 002CF480  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802D2544 002CF484  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802D2548 002CF488  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802D254C 002CF48C  7C 08 03 A6 */	mtlr r0
/* 802D2550 002CF490  38 21 00 40 */	addi r1, r1, 0x40
/* 802D2554 002CF494  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBase:
/* 802D2558 002CF498  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D255C 002CF49C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D2560 002CF4A0  7C 08 02 A6 */	mflr r0
/* 802D2564 002CF4A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D2568 002CF4A8  38 00 FF FF */	li r0, -1
/* 802D256C 002CF4AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D2570 002CF4B0  7C 9F 23 78 */	mr r31, r4
/* 802D2574 002CF4B4  7F E3 FB 78 */	mr r3, r31
/* 802D2578 002CF4B8  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802D257C 002CF4BC  60 84 00 04 */	ori r4, r4, 4
/* 802D2580 002CF4C0  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802D2584 002CF4C4  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802D2588 002CF4C8  4B E2 F4 45 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802D258C 002CF4CC  C0 22 E5 D8 */	lfs f1, lbl_8051C938@sda21(r2)
/* 802D2590 002CF4D0  7F E3 FB 78 */	mr r3, r31
/* 802D2594 002CF4D4  C0 02 E5 F8 */	lfs f0, lbl_8051C958@sda21(r2)
/* 802D2598 002CF4D8  38 80 00 05 */	li r4, 5
/* 802D259C 002CF4DC  D0 3F 01 D4 */	stfs f1, 0x1d4(r31)
/* 802D25A0 002CF4E0  38 A0 00 00 */	li r5, 0
/* 802D25A4 002CF4E4  D0 3F 01 D8 */	stfs f1, 0x1d8(r31)
/* 802D25A8 002CF4E8  D0 3F 01 DC */	stfs f1, 0x1dc(r31)
/* 802D25AC 002CF4EC  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802D25B0 002CF4F0  4B E3 2A 55 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D25B4 002CF4F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D25B8 002CF4F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D25BC 002CF4FC  7C 08 03 A6 */	mtlr r0
/* 802D25C0 002CF500  38 21 00 10 */	addi r1, r1, 0x10
/* 802D25C4 002CF504  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBase
exec__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBase:
/* 802D25C8 002CF508  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D25CC 002CF50C  7C 08 02 A6 */	mflr r0
/* 802D25D0 002CF510  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D25D4 002CF514  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802D25D8 002CF518  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802D25DC 002CF51C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D25E0 002CF520  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802D25E4 002CF524  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802D25E8 002CF528  7C 9F 23 78 */	mr r31, r4
/* 802D25EC 002CF52C  7C 7D 1B 78 */	mr r29, r3
/* 802D25F0 002CF530  7F E3 FB 78 */	mr r3, r31
/* 802D25F4 002CF534  48 00 23 A5 */	bl getMovePitchOffset__Q34Game9OniKurage3ObjFv
/* 802D25F8 002CF538  C0 42 E5 D8 */	lfs f2, lbl_8051C938@sda21(r2)
/* 802D25FC 002CF53C  7F E3 FB 78 */	mr r3, r31
/* 802D2600 002CF540  48 00 21 29 */	bl setHeightVelocity__Q34Game9OniKurage3ObjFff
/* 802D2604 002CF544  FF E0 08 90 */	fmr f31, f1
/* 802D2608 002CF548  7F E3 FB 78 */	mr r3, r31
/* 802D260C 002CF54C  48 00 2B 01 */	bl getSearchedTarget__Q34Game9OniKurage3ObjFf
/* 802D2610 002CF550  7C 7E 1B 79 */	or. r30, r3, r3
/* 802D2614 002CF554  41 82 00 50 */	beq lbl_802D2664
/* 802D2618 002CF558  FC 20 F8 90 */	fmr f1, f31
/* 802D261C 002CF55C  7F E3 FB 78 */	mr r3, r31
/* 802D2620 002CF560  7F C4 F3 78 */	mr r4, r30
/* 802D2624 002CF564  48 00 2E 29 */	bl isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature
/* 802D2628 002CF568  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D262C 002CF56C  41 82 00 18 */	beq lbl_802D2644
/* 802D2630 002CF570  38 00 00 04 */	li r0, 4
/* 802D2634 002CF574  7F E3 FB 78 */	mr r3, r31
/* 802D2638 002CF578  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802D263C 002CF57C  4B E3 2C 65 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802D2640 002CF580  48 00 00 34 */	b lbl_802D2674
lbl_802D2644:
/* 802D2644 002CF584  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D2648 002CF588  7F E3 FB 78 */	mr r3, r31
/* 802D264C 002CF58C  7F C4 F3 78 */	mr r4, r30
/* 802D2650 002CF590  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 802D2654 002CF594  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802D2658 002CF598  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 802D265C 002CF59C  4B E4 2D A5 */	bl walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBasePQ24Game8Creaturefff
/* 802D2660 002CF5A0  48 00 00 14 */	b lbl_802D2674
lbl_802D2664:
/* 802D2664 002CF5A4  38 00 00 02 */	li r0, 2
/* 802D2668 002CF5A8  7F E3 FB 78 */	mr r3, r31
/* 802D266C 002CF5AC  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802D2670 002CF5B0  4B E3 2C 31 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802D2674:
/* 802D2674 002CF5B4  7F E3 FB 78 */	mr r3, r31
/* 802D2678 002CF5B8  48 00 29 F1 */	bl getFlyingNextState__Q34Game9OniKurage3ObjFv
/* 802D267C 002CF5BC  7C 65 1B 79 */	or. r5, r3, r3
/* 802D2680 002CF5C0  41 80 00 24 */	blt lbl_802D26A4
/* 802D2684 002CF5C4  81 9D 00 00 */	lwz r12, 0(r29)
/* 802D2688 002CF5C8  7F A3 EB 78 */	mr r3, r29
/* 802D268C 002CF5CC  7F E4 FB 78 */	mr r4, r31
/* 802D2690 002CF5D0  38 C0 00 00 */	li r6, 0
/* 802D2694 002CF5D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D2698 002CF5D8  7D 89 03 A6 */	mtctr r12
/* 802D269C 002CF5DC  4E 80 04 21 */	bctrl 
/* 802D26A0 002CF5E0  48 00 00 60 */	b lbl_802D2700
lbl_802D26A4:
/* 802D26A4 002CF5E4  7F E3 FB 78 */	mr r3, r31
/* 802D26A8 002CF5E8  4B E3 4C 59 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802D26AC 002CF5EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D26B0 002CF5F0  41 82 00 14 */	beq lbl_802D26C4
/* 802D26B4 002CF5F4  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D26B8 002CF5F8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D26BC 002CF5FC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D26C0 002CF600  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
lbl_802D26C4:
/* 802D26C4 002CF604  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D26C8 002CF608  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D26CC 002CF60C  28 00 00 00 */	cmplwi r0, 0
/* 802D26D0 002CF610  41 82 00 30 */	beq lbl_802D2700
/* 802D26D4 002CF614  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D26D8 002CF618  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D26DC 002CF61C  40 82 00 24 */	bne lbl_802D2700
/* 802D26E0 002CF620  7F A3 EB 78 */	mr r3, r29
/* 802D26E4 002CF624  7F E4 FB 78 */	mr r4, r31
/* 802D26E8 002CF628  81 9D 00 00 */	lwz r12, 0(r29)
/* 802D26EC 002CF62C  38 C0 00 00 */	li r6, 0
/* 802D26F0 002CF630  80 BF 02 C0 */	lwz r5, 0x2c0(r31)
/* 802D26F4 002CF634  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D26F8 002CF638  7D 89 03 A6 */	mtctr r12
/* 802D26FC 002CF63C  4E 80 04 21 */	bctrl 
lbl_802D2700:
/* 802D2700 002CF640  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802D2704 002CF644  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D2708 002CF648  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802D270C 002CF64C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D2710 002CF650  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802D2714 002CF654  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802D2718 002CF658  7C 08 03 A6 */	mtlr r0
/* 802D271C 002CF65C  38 21 00 30 */	addi r1, r1, 0x30
/* 802D2720 002CF660  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBase:
/* 802D2724 002CF664  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D2728 002CF668  7C 08 02 A6 */	mflr r0
/* 802D272C 002CF66C  7C 83 23 78 */	mr r3, r4
/* 802D2730 002CF670  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D2734 002CF674  4B E2 F2 49 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802D2738 002CF678  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D273C 002CF67C  7C 08 03 A6 */	mtlr r0
/* 802D2740 002CF680  38 21 00 10 */	addi r1, r1, 0x10
/* 802D2744 002CF684  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D2748 002CF688  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D274C 002CF68C  7C 08 02 A6 */	mflr r0
/* 802D2750 002CF690  38 A0 FF FF */	li r5, -1
/* 802D2754 002CF694  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D2758 002CF698  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D275C 002CF69C  38 00 00 00 */	li r0, 0
/* 802D2760 002CF6A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D2764 002CF6A4  7C 9F 23 78 */	mr r31, r4
/* 802D2768 002CF6A8  7F E3 FB 78 */	mr r3, r31
/* 802D276C 002CF6AC  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802D2770 002CF6B0  60 84 00 04 */	ori r4, r4, 4
/* 802D2774 002CF6B4  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802D2778 002CF6B8  90 BF 02 C0 */	stw r5, 0x2c0(r31)
/* 802D277C 002CF6BC  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802D2780 002CF6C0  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 802D2784 002CF6C4  98 1F 02 DC */	stb r0, 0x2dc(r31)
/* 802D2788 002CF6C8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802D278C 002CF6CC  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802D2790 002CF6D0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802D2794 002CF6D4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D2798 002CF6D8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D279C 002CF6DC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D27A0 002CF6E0  4B E2 F2 2D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802D27A4 002CF6E4  7F E3 FB 78 */	mr r3, r31
/* 802D27A8 002CF6E8  38 80 00 09 */	li r4, 9
/* 802D27AC 002CF6EC  38 A0 00 00 */	li r5, 0
/* 802D27B0 002CF6F0  4B E3 28 55 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D27B4 002CF6F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D27B8 002CF6F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D27BC 002CF6FC  7C 08 03 A6 */	mtlr r0
/* 802D27C0 002CF700  38 21 00 10 */	addi r1, r1, 0x10
/* 802D27C4 002CF704  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBase
exec__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBase:
/* 802D27C8 002CF708  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802D27CC 002CF70C  7C 08 02 A6 */	mflr r0
/* 802D27D0 002CF710  90 01 00 54 */	stw r0, 0x54(r1)
/* 802D27D4 002CF714  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802D27D8 002CF718  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802D27DC 002CF71C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802D27E0 002CF720  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802D27E4 002CF724  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D27E8 002CF728  7C 9F 23 78 */	mr r31, r4
/* 802D27EC 002CF72C  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802D27F0 002CF730  7C 7E 1B 78 */	mr r30, r3
/* 802D27F4 002CF734  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D27F8 002CF738  4C 40 13 82 */	cror 2, 0, 2
/* 802D27FC 002CF73C  41 82 00 14 */	beq lbl_802D2810
/* 802D2800 002CF740  7F E3 FB 78 */	mr r3, r31
/* 802D2804 002CF744  48 00 3A 91 */	bl isFinishNaviSuck__Q34Game9OniKurage3ObjFv
/* 802D2808 002CF748  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D280C 002CF74C  41 82 00 40 */	beq lbl_802D284C
lbl_802D2810:
/* 802D2810 002CF750  7F E3 FB 78 */	mr r3, r31
/* 802D2814 002CF754  48 00 3B 81 */	bl isNaviSucked__Q34Game9OniKurage3ObjFv
/* 802D2818 002CF758  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D281C 002CF75C  40 82 00 28 */	bne lbl_802D2844
/* 802D2820 002CF760  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802D2824 002CF764  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802D2828 002CF768  C0 03 08 94 */	lfs f0, 0x894(r3)
/* 802D282C 002CF76C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D2830 002CF770  41 81 00 14 */	bgt lbl_802D2844
/* 802D2834 002CF774  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802D2838 002CF778  C0 03 08 E4 */	lfs f0, 0x8e4(r3)
/* 802D283C 002CF77C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D2840 002CF780  40 81 00 0C */	ble lbl_802D284C
lbl_802D2844:
/* 802D2844 002CF784  7F E3 FB 78 */	mr r3, r31
/* 802D2848 002CF788  4B E3 2A 59 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802D284C:
/* 802D284C 002CF78C  7F E3 FB 78 */	mr r3, r31
/* 802D2850 002CF790  48 00 21 ED */	bl getAttackPitchOffset__Q34Game9OniKurage3ObjFv
/* 802D2854 002CF794  C0 42 E5 D8 */	lfs f2, lbl_8051C938@sda21(r2)
/* 802D2858 002CF798  7F E3 FB 78 */	mr r3, r31
/* 802D285C 002CF79C  48 00 1E CD */	bl setHeightVelocity__Q34Game9OniKurage3ObjFff
/* 802D2860 002CF7A0  88 1F 02 DC */	lbz r0, 0x2dc(r31)
/* 802D2864 002CF7A4  FF E0 08 90 */	fmr f31, f1
/* 802D2868 002CF7A8  28 00 00 00 */	cmplwi r0, 0
/* 802D286C 002CF7AC  41 82 00 98 */	beq lbl_802D2904
/* 802D2870 002CF7B0  7F E3 FB 78 */	mr r3, r31
/* 802D2874 002CF7B4  48 00 2E 11 */	bl suckPikmin__Q34Game9OniKurage3ObjFf
/* 802D2878 002CF7B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D287C 002CF7BC  41 82 00 20 */	beq lbl_802D289C
/* 802D2880 002CF7C0  7F E3 FB 78 */	mr r3, r31
/* 802D2884 002CF7C4  48 00 3A 11 */	bl isFinishNaviSuck__Q34Game9OniKurage3ObjFv
/* 802D2888 002CF7C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D288C 002CF7CC  41 82 00 2C */	beq lbl_802D28B8
/* 802D2890 002CF7D0  7F E3 FB 78 */	mr r3, r31
/* 802D2894 002CF7D4  4B E3 2A 0D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802D2898 002CF7D8  48 00 00 20 */	b lbl_802D28B8
lbl_802D289C:
/* 802D289C 002CF7DC  7F E3 FB 78 */	mr r3, r31
/* 802D28A0 002CF7E0  4B E3 4A 61 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802D28A4 002CF7E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D28A8 002CF7E8  40 82 00 10 */	bne lbl_802D28B8
/* 802D28AC 002CF7EC  FC 20 F8 90 */	fmr f1, f31
/* 802D28B0 002CF7F0  7F E3 FB 78 */	mr r3, r31
/* 802D28B4 002CF7F4  48 00 32 05 */	bl suckNavi__Q34Game9OniKurage3ObjFf
lbl_802D28B8:
/* 802D28B8 002CF7F8  7F E4 FB 78 */	mr r4, r31
/* 802D28BC 002CF7FC  38 61 00 14 */	addi r3, r1, 0x14
/* 802D28C0 002CF800  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D28C4 002CF804  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D28C8 002CF808  7D 89 03 A6 */	mtctr r12
/* 802D28CC 002CF80C  4E 80 04 21 */	bctrl 
/* 802D28D0 002CF810  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802D28D4 002CF814  7F E3 FB 78 */	mr r3, r31
/* 802D28D8 002CF818  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802D28DC 002CF81C  38 81 00 2C */	addi r4, r1, 0x2c
/* 802D28E0 002CF820  EC 01 F8 28 */	fsubs f0, f1, f31
/* 802D28E4 002CF824  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802D28E8 002CF828  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 802D28EC 002CF82C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802D28F0 002CF830  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 802D28F4 002CF834  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802D28F8 002CF838  48 00 44 2D */	bl "updateSuckEffect__Q34Game9OniKurage3ObjFR10Vector3<f>"
/* 802D28FC 002CF83C  7F E3 FB 78 */	mr r3, r31
/* 802D2900 002CF840  48 00 37 29 */	bl updateCollPartOffset__Q34Game9OniKurage3ObjFv
lbl_802D2904:
/* 802D2904 002CF844  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802D2908 002CF848  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802D290C 002CF84C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802D2910 002CF850  EC 01 00 2A */	fadds f0, f1, f0
/* 802D2914 002CF854  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802D2918 002CF858  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D291C 002CF85C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D2920 002CF860  28 00 00 00 */	cmplwi r0, 0
/* 802D2924 002CF864  41 82 01 A4 */	beq lbl_802D2AC8
/* 802D2928 002CF868  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D292C 002CF86C  28 00 00 02 */	cmplwi r0, 2
/* 802D2930 002CF870  40 82 00 60 */	bne lbl_802D2990
/* 802D2934 002CF874  7F E4 FB 78 */	mr r4, r31
/* 802D2938 002CF878  38 61 00 08 */	addi r3, r1, 8
/* 802D293C 002CF87C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D2940 002CF880  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D2944 002CF884  7D 89 03 A6 */	mtctr r12
/* 802D2948 002CF888  4E 80 04 21 */	bctrl 
/* 802D294C 002CF88C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802D2950 002CF890  7F E3 FB 78 */	mr r3, r31
/* 802D2954 002CF894  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D2958 002CF898  38 81 00 20 */	addi r4, r1, 0x20
/* 802D295C 002CF89C  EC 01 F8 28 */	fsubs f0, f1, f31
/* 802D2960 002CF8A0  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802D2964 002CF8A4  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 802D2968 002CF8A8  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802D296C 002CF8AC  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 802D2970 002CF8B0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802D2974 002CF8B4  48 00 43 59 */	bl "startSuckEffect__Q34Game9OniKurage3ObjFR10Vector3<f>"
/* 802D2978 002CF8B8  38 00 00 01 */	li r0, 1
/* 802D297C 002CF8BC  98 1F 02 DC */	stb r0, 0x2dc(r31)
/* 802D2980 002CF8C0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802D2984 002CF8C4  64 00 00 20 */	oris r0, r0, 0x20
/* 802D2988 002CF8C8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802D298C 002CF8CC  48 00 01 3C */	b lbl_802D2AC8
lbl_802D2990:
/* 802D2990 002CF8D0  28 00 00 01 */	cmplwi r0, 1
/* 802D2994 002CF8D4  40 82 00 34 */	bne lbl_802D29C8
/* 802D2998 002CF8D8  7F E3 FB 78 */	mr r3, r31
/* 802D299C 002CF8DC  4B E3 49 65 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802D29A0 002CF8E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D29A4 002CF8E4  41 82 01 24 */	beq lbl_802D2AC8
/* 802D29A8 002CF8E8  7F E3 FB 78 */	mr r3, r31
/* 802D29AC 002CF8EC  48 00 43 9D */	bl finishSuckEffect__Q34Game9OniKurage3ObjFv
/* 802D29B0 002CF8F0  38 00 00 00 */	li r0, 0
/* 802D29B4 002CF8F4  98 1F 02 DC */	stb r0, 0x2dc(r31)
/* 802D29B8 002CF8F8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802D29BC 002CF8FC  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802D29C0 002CF900  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802D29C4 002CF904  48 00 01 04 */	b lbl_802D2AC8
lbl_802D29C8:
/* 802D29C8 002CF908  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D29CC 002CF90C  40 82 00 FC */	bne lbl_802D2AC8
/* 802D29D0 002CF910  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802D29D4 002CF914  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D29D8 002CF918  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D29DC 002CF91C  4C 40 13 82 */	cror 2, 0, 2
/* 802D29E0 002CF920  40 82 00 28 */	bne lbl_802D2A08
/* 802D29E4 002CF924  7F C3 F3 78 */	mr r3, r30
/* 802D29E8 002CF928  7F E4 FB 78 */	mr r4, r31
/* 802D29EC 002CF92C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D29F0 002CF930  38 A0 00 00 */	li r5, 0
/* 802D29F4 002CF934  38 C0 00 00 */	li r6, 0
/* 802D29F8 002CF938  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D29FC 002CF93C  7D 89 03 A6 */	mtctr r12
/* 802D2A00 002CF940  4E 80 04 21 */	bctrl 
/* 802D2A04 002CF944  48 00 00 C4 */	b lbl_802D2AC8
lbl_802D2A08:
/* 802D2A08 002CF948  7F E3 FB 78 */	mr r3, r31
/* 802D2A0C 002CF94C  48 00 39 89 */	bl isNaviSucked__Q34Game9OniKurage3ObjFv
/* 802D2A10 002CF950  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D2A14 002CF954  41 82 00 28 */	beq lbl_802D2A3C
/* 802D2A18 002CF958  7F C3 F3 78 */	mr r3, r30
/* 802D2A1C 002CF95C  7F E4 FB 78 */	mr r4, r31
/* 802D2A20 002CF960  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D2A24 002CF964  38 A0 00 06 */	li r5, 6
/* 802D2A28 002CF968  38 C0 00 00 */	li r6, 0
/* 802D2A2C 002CF96C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D2A30 002CF970  7D 89 03 A6 */	mtctr r12
/* 802D2A34 002CF974  4E 80 04 21 */	bctrl 
/* 802D2A38 002CF978  48 00 00 90 */	b lbl_802D2AC8
lbl_802D2A3C:
/* 802D2A3C 002CF97C  7F E3 FB 78 */	mr r3, r31
/* 802D2A40 002CF980  48 00 26 29 */	bl getFlyingNextState__Q34Game9OniKurage3ObjFv
/* 802D2A44 002CF984  7C 65 1B 79 */	or. r5, r3, r3
/* 802D2A48 002CF988  41 80 00 24 */	blt lbl_802D2A6C
/* 802D2A4C 002CF98C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D2A50 002CF990  7F C3 F3 78 */	mr r3, r30
/* 802D2A54 002CF994  7F E4 FB 78 */	mr r4, r31
/* 802D2A58 002CF998  38 C0 00 00 */	li r6, 0
/* 802D2A5C 002CF99C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D2A60 002CF9A0  7D 89 03 A6 */	mtctr r12
/* 802D2A64 002CF9A4  4E 80 04 21 */	bctrl 
/* 802D2A68 002CF9A8  48 00 00 60 */	b lbl_802D2AC8
lbl_802D2A6C:
/* 802D2A6C 002CF9AC  FC 20 F8 90 */	fmr f1, f31
/* 802D2A70 002CF9B0  7F E3 FB 78 */	mr r3, r31
/* 802D2A74 002CF9B4  38 80 00 00 */	li r4, 0
/* 802D2A78 002CF9B8  48 00 29 D5 */	bl isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature
/* 802D2A7C 002CF9BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D2A80 002CF9C0  41 82 00 28 */	beq lbl_802D2AA8
/* 802D2A84 002CF9C4  7F C3 F3 78 */	mr r3, r30
/* 802D2A88 002CF9C8  7F E4 FB 78 */	mr r4, r31
/* 802D2A8C 002CF9CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D2A90 002CF9D0  38 A0 00 04 */	li r5, 4
/* 802D2A94 002CF9D4  38 C0 00 00 */	li r6, 0
/* 802D2A98 002CF9D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D2A9C 002CF9DC  7D 89 03 A6 */	mtctr r12
/* 802D2AA0 002CF9E0  4E 80 04 21 */	bctrl 
/* 802D2AA4 002CF9E4  48 00 00 24 */	b lbl_802D2AC8
lbl_802D2AA8:
/* 802D2AA8 002CF9E8  7F C3 F3 78 */	mr r3, r30
/* 802D2AAC 002CF9EC  7F E4 FB 78 */	mr r4, r31
/* 802D2AB0 002CF9F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D2AB4 002CF9F4  38 A0 00 01 */	li r5, 1
/* 802D2AB8 002CF9F8  38 C0 00 00 */	li r6, 0
/* 802D2ABC 002CF9FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D2AC0 002CFA00  7D 89 03 A6 */	mtctr r12
/* 802D2AC4 002CFA04  4E 80 04 21 */	bctrl 
lbl_802D2AC8:
/* 802D2AC8 002CFA08  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802D2ACC 002CFA0C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802D2AD0 002CFA10  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802D2AD4 002CFA14  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802D2AD8 002CFA18  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802D2ADC 002CFA1C  7C 08 03 A6 */	mtlr r0
/* 802D2AE0 002CFA20  38 21 00 50 */	addi r1, r1, 0x50
/* 802D2AE4 002CFA24  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBase:
/* 802D2AE8 002CFA28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D2AEC 002CFA2C  7C 08 02 A6 */	mflr r0
/* 802D2AF0 002CFA30  7C 83 23 78 */	mr r3, r4
/* 802D2AF4 002CFA34  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D2AF8 002CFA38  38 00 00 00 */	li r0, 0
/* 802D2AFC 002CFA3C  98 04 02 DC */	stb r0, 0x2dc(r4)
/* 802D2B00 002CFA40  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802D2B04 002CFA44  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802D2B08 002CFA48  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802D2B0C 002CFA4C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802D2B10 002CFA50  60 00 00 40 */	ori r0, r0, 0x40
/* 802D2B14 002CFA54  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802D2B18 002CFA58  4B E2 EE 65 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802D2B1C 002CFA5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D2B20 002CFA60  7C 08 03 A6 */	mtlr r0
/* 802D2B24 002CFA64  38 21 00 10 */	addi r1, r1, 0x10
/* 802D2B28 002CFA68  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D2B2C 002CFA6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D2B30 002CFA70  7C 08 02 A6 */	mflr r0
/* 802D2B34 002CFA74  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D2B38 002CFA78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D2B3C 002CFA7C  38 00 FF FF */	li r0, -1
/* 802D2B40 002CFA80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D2B44 002CFA84  7C 9F 23 78 */	mr r31, r4
/* 802D2B48 002CFA88  7F E3 FB 78 */	mr r3, r31
/* 802D2B4C 002CFA8C  90 04 02 C0 */	stw r0, 0x2c0(r4)
/* 802D2B50 002CFA90  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802D2B54 002CFA94  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802D2B58 002CFA98  60 00 00 04 */	ori r0, r0, 4
/* 802D2B5C 002CFA9C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802D2B60 002CFAA0  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802D2B64 002CFAA4  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802D2B68 002CFAA8  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802D2B6C 002CFAAC  4B E2 EE 61 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802D2B70 002CFAB0  7F E3 FB 78 */	mr r3, r31
/* 802D2B74 002CFAB4  38 80 00 08 */	li r4, 8
/* 802D2B78 002CFAB8  38 A0 00 00 */	li r5, 0
/* 802D2B7C 002CFABC  4B E3 24 89 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D2B80 002CFAC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D2B84 002CFAC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D2B88 002CFAC8  7C 08 03 A6 */	mtlr r0
/* 802D2B8C 002CFACC  38 21 00 10 */	addi r1, r1, 0x10
/* 802D2B90 002CFAD0  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBase
exec__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBase:
/* 802D2B94 002CFAD4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802D2B98 002CFAD8  7C 08 02 A6 */	mflr r0
/* 802D2B9C 002CFADC  90 01 00 44 */	stw r0, 0x44(r1)
/* 802D2BA0 002CFAE0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802D2BA4 002CFAE4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802D2BA8 002CFAE8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802D2BAC 002CFAEC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802D2BB0 002CFAF0  7C 9F 23 78 */	mr r31, r4
/* 802D2BB4 002CFAF4  7C 7E 1B 78 */	mr r30, r3
/* 802D2BB8 002CFAF8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D2BBC 002CFAFC  7F E3 FB 78 */	mr r3, r31
/* 802D2BC0 002CFB00  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802D2BC4 002CFB04  7D 89 03 A6 */	mtctr r12
/* 802D2BC8 002CFB08  4E 80 04 21 */	bctrl 
/* 802D2BCC 002CFB0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D2BD0 002CFB10  41 82 00 9C */	beq lbl_802D2C6C
/* 802D2BD4 002CFB14  C3 FF 02 C4 */	lfs f31, 0x2c4(r31)
/* 802D2BD8 002CFB18  7F E3 FB 78 */	mr r3, r31
/* 802D2BDC 002CFB1C  FC 20 F8 90 */	fmr f1, f31
/* 802D2BE0 002CFB20  48 00 22 F1 */	bl getFallPitchOffset__Q34Game9OniKurage3ObjFf
/* 802D2BE4 002CFB24  C0 42 E5 D8 */	lfs f2, lbl_8051C938@sda21(r2)
/* 802D2BE8 002CFB28  7F E3 FB 78 */	mr r3, r31
/* 802D2BEC 002CFB2C  48 00 1B 3D */	bl setHeightVelocity__Q34Game9OniKurage3ObjFff
/* 802D2BF0 002CFB30  C0 22 E5 DC */	lfs f1, lbl_8051C93C@sda21(r2)
/* 802D2BF4 002CFB34  C0 02 E5 E0 */	lfs f0, lbl_8051C940@sda21(r2)
/* 802D2BF8 002CFB38  EC 3F 00 72 */	fmuls f1, f31, f1
/* 802D2BFC 002CFB3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D2C00 002CFB40  40 81 00 6C */	ble lbl_802D2C6C
/* 802D2C04 002CFB44  7F E4 FB 78 */	mr r4, r31
/* 802D2C08 002CFB48  38 61 00 08 */	addi r3, r1, 8
/* 802D2C0C 002CFB4C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D2C10 002CFB50  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 802D2C14 002CFB54  7D 89 03 A6 */	mtctr r12
/* 802D2C18 002CFB58  4E 80 04 21 */	bctrl 
/* 802D2C1C 002CFB5C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 802D2C20 002CFB60  7F E3 FB 78 */	mr r3, r31
/* 802D2C24 002CFB64  C0 02 E5 F0 */	lfs f0, lbl_8051C950@sda21(r2)
/* 802D2C28 002CFB68  38 81 00 14 */	addi r4, r1, 0x14
/* 802D2C2C 002CFB6C  C0 61 00 08 */	lfs f3, 8(r1)
/* 802D2C30 002CFB70  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 802D2C34 002CFB74  EC 02 00 28 */	fsubs f0, f2, f0
/* 802D2C38 002CFB78  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 802D2C3C 002CFB7C  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 802D2C40 002CFB80  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802D2C44 002CFB84  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802D2C48 002CFB88  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D2C4C 002CFB8C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 802D2C50 002CFB90  7D 89 03 A6 */	mtctr r12
/* 802D2C54 002CFB94  4E 80 04 21 */	bctrl 
/* 802D2C58 002CFB98  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802D2C5C 002CFB9C  7F E3 FB 78 */	mr r3, r31
/* 802D2C60 002CFBA0  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802D2C64 002CFBA4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802D2C68 002CFBA8  4B E3 26 39 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802D2C6C:
/* 802D2C6C 002CFBAC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802D2C70 002CFBB0  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802D2C74 002CFBB4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802D2C78 002CFBB8  EC 01 00 2A */	fadds f0, f1, f0
/* 802D2C7C 002CFBBC  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802D2C80 002CFBC0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D2C84 002CFBC4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D2C88 002CFBC8  28 00 00 00 */	cmplwi r0, 0
/* 802D2C8C 002CFBCC  41 82 00 68 */	beq lbl_802D2CF4
/* 802D2C90 002CFBD0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D2C94 002CFBD4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D2C98 002CFBD8  40 82 00 5C */	bne lbl_802D2CF4
/* 802D2C9C 002CFBDC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802D2CA0 002CFBE0  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D2CA4 002CFBE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D2CA8 002CFBE8  4C 40 13 82 */	cror 2, 0, 2
/* 802D2CAC 002CFBEC  40 82 00 28 */	bne lbl_802D2CD4
/* 802D2CB0 002CFBF0  7F C3 F3 78 */	mr r3, r30
/* 802D2CB4 002CFBF4  7F E4 FB 78 */	mr r4, r31
/* 802D2CB8 002CFBF8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D2CBC 002CFBFC  38 A0 00 00 */	li r5, 0
/* 802D2CC0 002CFC00  38 C0 00 00 */	li r6, 0
/* 802D2CC4 002CFC04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D2CC8 002CFC08  7D 89 03 A6 */	mtctr r12
/* 802D2CCC 002CFC0C  4E 80 04 21 */	bctrl 
/* 802D2CD0 002CFC10  48 00 00 24 */	b lbl_802D2CF4
lbl_802D2CD4:
/* 802D2CD4 002CFC14  7F C3 F3 78 */	mr r3, r30
/* 802D2CD8 002CFC18  7F E4 FB 78 */	mr r4, r31
/* 802D2CDC 002CFC1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D2CE0 002CFC20  38 A0 00 07 */	li r5, 7
/* 802D2CE4 002CFC24  38 C0 00 00 */	li r6, 0
/* 802D2CE8 002CFC28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D2CEC 002CFC2C  7D 89 03 A6 */	mtctr r12
/* 802D2CF0 002CFC30  4E 80 04 21 */	bctrl 
lbl_802D2CF4:
/* 802D2CF4 002CFC34  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802D2CF8 002CFC38  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802D2CFC 002CFC3C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802D2D00 002CFC40  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802D2D04 002CFC44  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802D2D08 002CFC48  7C 08 03 A6 */	mtlr r0
/* 802D2D0C 002CFC4C  38 21 00 40 */	addi r1, r1, 0x40
/* 802D2D10 002CFC50  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBase:
/* 802D2D14 002CFC54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D2D18 002CFC58  7C 08 02 A6 */	mflr r0
/* 802D2D1C 002CFC5C  7C 83 23 78 */	mr r3, r4
/* 802D2D20 002CFC60  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D2D24 002CFC64  4B E2 EC 59 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802D2D28 002CFC68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D2D2C 002CFC6C  7C 08 03 A6 */	mtlr r0
/* 802D2D30 002CFC70  38 21 00 10 */	addi r1, r1, 0x10
/* 802D2D34 002CFC74  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D2D38 002CFC78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D2D3C 002CFC7C  7C 08 02 A6 */	mflr r0
/* 802D2D40 002CFC80  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D2D44 002CFC84  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D2D48 002CFC88  38 00 FF FF */	li r0, -1
/* 802D2D4C 002CFC8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D2D50 002CFC90  7C 9F 23 78 */	mr r31, r4
/* 802D2D54 002CFC94  7F E3 FB 78 */	mr r3, r31
/* 802D2D58 002CFC98  90 04 02 C0 */	stw r0, 0x2c0(r4)
/* 802D2D5C 002CFC9C  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802D2D60 002CFCA0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802D2D64 002CFCA4  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802D2D68 002CFCA8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802D2D6C 002CFCAC  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802D2D70 002CFCB0  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802D2D74 002CFCB4  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802D2D78 002CFCB8  4B E2 EC 55 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802D2D7C 002CFCBC  7F E3 FB 78 */	mr r3, r31
/* 802D2D80 002CFCC0  38 80 00 08 */	li r4, 8
/* 802D2D84 002CFCC4  38 A0 00 00 */	li r5, 0
/* 802D2D88 002CFCC8  4B E3 22 7D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D2D8C 002CFCCC  7F E3 FB 78 */	mr r3, r31
/* 802D2D90 002CFCD0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D2D94 002CFCD4  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802D2D98 002CFCD8  7D 89 03 A6 */	mtctr r12
/* 802D2D9C 002CFCDC  4E 80 04 21 */	bctrl 
/* 802D2DA0 002CFCE0  81 83 00 00 */	lwz r12, 0(r3)
/* 802D2DA4 002CFCE4  38 80 59 12 */	li r4, 0x5912
/* 802D2DA8 002CFCE8  38 A0 00 00 */	li r5, 0
/* 802D2DAC 002CFCEC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802D2DB0 002CFCF0  7D 89 03 A6 */	mtctr r12
/* 802D2DB4 002CFCF4  4E 80 04 21 */	bctrl 
/* 802D2DB8 002CFCF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D2DBC 002CFCFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D2DC0 002CFD00  7C 08 03 A6 */	mtlr r0
/* 802D2DC4 002CFD04  38 21 00 10 */	addi r1, r1, 0x10
/* 802D2DC8 002CFD08  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBase
exec__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBase:
/* 802D2DCC 002CFD0C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802D2DD0 002CFD10  7C 08 02 A6 */	mflr r0
/* 802D2DD4 002CFD14  90 01 00 54 */	stw r0, 0x54(r1)
/* 802D2DD8 002CFD18  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802D2DDC 002CFD1C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802D2DE0 002CFD20  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802D2DE4 002CFD24  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802D2DE8 002CFD28  81 84 00 00 */	lwz r12, 0(r4)
/* 802D2DEC 002CFD2C  7C 7E 1B 78 */	mr r30, r3
/* 802D2DF0 002CFD30  38 61 00 14 */	addi r3, r1, 0x14
/* 802D2DF4 002CFD34  7C 9F 23 78 */	mr r31, r4
/* 802D2DF8 002CFD38  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D2DFC 002CFD3C  7D 89 03 A6 */	mtctr r12
/* 802D2E00 002CFD40  4E 80 04 21 */	bctrl 
/* 802D2E04 002CFD44  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802D2E08 002CFD48  7F E4 FB 78 */	mr r4, r31
/* 802D2E0C 002CFD4C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802D2E10 002CFD50  38 61 00 08 */	addi r3, r1, 8
/* 802D2E14 002CFD54  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802D2E18 002CFD58  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802D2E1C 002CFD5C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802D2E20 002CFD60  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802D2E24 002CFD64  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D2E28 002CFD68  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 802D2E2C 002CFD6C  7D 89 03 A6 */	mtctr r12
/* 802D2E30 002CFD70  4E 80 04 21 */	bctrl 
/* 802D2E34 002CFD74  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802D2E38 002CFD78  38 81 00 20 */	addi r4, r1, 0x20
/* 802D2E3C 002CFD7C  C3 E1 00 0C */	lfs f31, 0xc(r1)
/* 802D2E40 002CFD80  81 83 00 04 */	lwz r12, 4(r3)
/* 802D2E44 002CFD84  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802D2E48 002CFD88  7D 89 03 A6 */	mtctr r12
/* 802D2E4C 002CFD8C  4E 80 04 21 */	bctrl 
/* 802D2E50 002CFD90  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 802D2E54 002CFD94  C0 02 E6 08 */	lfs f0, lbl_8051C968@sda21(r2)
/* 802D2E58 002CFD98  EC 22 08 28 */	fsubs f1, f2, f1
/* 802D2E5C 002CFD9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D2E60 002CFDA0  41 80 00 20 */	blt lbl_802D2E80
/* 802D2E64 002CFDA4  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D2E68 002CFDA8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802D2E6C 002CFDAC  41 81 00 14 */	bgt lbl_802D2E80
/* 802D2E70 002CFDB0  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802D2E74 002CFDB4  C0 02 E5 FC */	lfs f0, lbl_8051C95C@sda21(r2)
/* 802D2E78 002CFDB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D2E7C 002CFDBC  40 81 00 0C */	ble lbl_802D2E88
lbl_802D2E80:
/* 802D2E80 002CFDC0  7F E3 FB 78 */	mr r3, r31
/* 802D2E84 002CFDC4  4B E3 24 1D */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802D2E88:
/* 802D2E88 002CFDC8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802D2E8C 002CFDCC  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802D2E90 002CFDD0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802D2E94 002CFDD4  EC 01 00 2A */	fadds f0, f1, f0
/* 802D2E98 002CFDD8  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802D2E9C 002CFDDC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D2EA0 002CFDE0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D2EA4 002CFDE4  28 00 00 00 */	cmplwi r0, 0
/* 802D2EA8 002CFDE8  41 82 00 68 */	beq lbl_802D2F10
/* 802D2EAC 002CFDEC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D2EB0 002CFDF0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D2EB4 002CFDF4  40 82 00 5C */	bne lbl_802D2F10
/* 802D2EB8 002CFDF8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802D2EBC 002CFDFC  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D2EC0 002CFE00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D2EC4 002CFE04  4C 40 13 82 */	cror 2, 0, 2
/* 802D2EC8 002CFE08  40 82 00 28 */	bne lbl_802D2EF0
/* 802D2ECC 002CFE0C  7F C3 F3 78 */	mr r3, r30
/* 802D2ED0 002CFE10  7F E4 FB 78 */	mr r4, r31
/* 802D2ED4 002CFE14  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D2ED8 002CFE18  38 A0 00 00 */	li r5, 0
/* 802D2EDC 002CFE1C  38 C0 00 00 */	li r6, 0
/* 802D2EE0 002CFE20  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D2EE4 002CFE24  7D 89 03 A6 */	mtctr r12
/* 802D2EE8 002CFE28  4E 80 04 21 */	bctrl 
/* 802D2EEC 002CFE2C  48 00 00 24 */	b lbl_802D2F10
lbl_802D2EF0:
/* 802D2EF0 002CFE30  7F C3 F3 78 */	mr r3, r30
/* 802D2EF4 002CFE34  7F E4 FB 78 */	mr r4, r31
/* 802D2EF8 002CFE38  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D2EFC 002CFE3C  38 A0 00 07 */	li r5, 7
/* 802D2F00 002CFE40  38 C0 00 00 */	li r6, 0
/* 802D2F04 002CFE44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D2F08 002CFE48  7D 89 03 A6 */	mtctr r12
/* 802D2F0C 002CFE4C  4E 80 04 21 */	bctrl 
lbl_802D2F10:
/* 802D2F10 002CFE50  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802D2F14 002CFE54  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802D2F18 002CFE58  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802D2F1C 002CFE5C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802D2F20 002CFE60  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802D2F24 002CFE64  7C 08 03 A6 */	mtlr r0
/* 802D2F28 002CFE68  38 21 00 50 */	addi r1, r1, 0x50
/* 802D2F2C 002CFE6C  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBase:
/* 802D2F30 002CFE70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D2F34 002CFE74  7C 08 02 A6 */	mflr r0
/* 802D2F38 002CFE78  7C 83 23 78 */	mr r3, r4
/* 802D2F3C 002CFE7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D2F40 002CFE80  4B E2 EA 3D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802D2F44 002CFE84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D2F48 002CFE88  7C 08 03 A6 */	mtlr r0
/* 802D2F4C 002CFE8C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D2F50 002CFE90  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D2F54 002CFE94  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D2F58 002CFE98  7C 08 02 A6 */	mflr r0
/* 802D2F5C 002CFE9C  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D2F60 002CFEA0  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D2F64 002CFEA4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802D2F68 002CFEA8  7C 9F 23 78 */	mr r31, r4
/* 802D2F6C 002CFEAC  7F E3 FB 78 */	mr r3, r31
/* 802D2F70 002CFEB0  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802D2F74 002CFEB4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802D2F78 002CFEB8  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802D2F7C 002CFEBC  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802D2F80 002CFEC0  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802D2F84 002CFEC4  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802D2F88 002CFEC8  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802D2F8C 002CFECC  4B E2 EA 41 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802D2F90 002CFED0  7F E3 FB 78 */	mr r3, r31
/* 802D2F94 002CFED4  38 80 00 06 */	li r4, 6
/* 802D2F98 002CFED8  38 A0 00 00 */	li r5, 0
/* 802D2F9C 002CFEDC  4B E3 20 69 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D2FA0 002CFEE0  7F E3 FB 78 */	mr r3, r31
/* 802D2FA4 002CFEE4  48 00 3E A5 */	bl createDownEffect__Q34Game9OniKurage3ObjFv
/* 802D2FA8 002CFEE8  7F E4 FB 78 */	mr r4, r31
/* 802D2FAC 002CFEEC  38 61 00 08 */	addi r3, r1, 8
/* 802D2FB0 002CFEF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D2FB4 002CFEF4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D2FB8 002CFEF8  7D 89 03 A6 */	mtctr r12
/* 802D2FBC 002CFEFC  4E 80 04 21 */	bctrl 
/* 802D2FC0 002CFF00  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D2FC4 002CFF04  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D2FC8 002CFF08  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802D2FCC 002CFF0C  38 80 00 06 */	li r4, 6
/* 802D2FD0 002CFF10  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D2FD4 002CFF14  38 C0 00 02 */	li r6, 2
/* 802D2FD8 002CFF18  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802D2FDC 002CFF1C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802D2FE0 002CFF20  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802D2FE4 002CFF24  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802D2FE8 002CFF28  4B F7 F2 55 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802D2FEC 002CFF2C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802D2FF0 002CFF30  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D2FF4 002CFF34  38 80 00 09 */	li r4, 9
/* 802D2FF8 002CFF38  38 C0 00 02 */	li r6, 2
/* 802D2FFC 002CFF3C  4B F8 07 85 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802D3000 002CFF40  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D3004 002CFF44  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802D3008 002CFF48  7C 08 03 A6 */	mtlr r0
/* 802D300C 002CFF4C  38 21 00 30 */	addi r1, r1, 0x30
/* 802D3010 002CFF50  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBase
exec__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBase:
/* 802D3014 002CFF54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D3018 002CFF58  7C 08 02 A6 */	mflr r0
/* 802D301C 002CFF5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D3020 002CFF60  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802D3024 002CFF64  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802D3028 002CFF68  28 00 00 00 */	cmplwi r0, 0
/* 802D302C 002CFF6C  41 82 00 58 */	beq lbl_802D3084
/* 802D3030 002CFF70  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802D3034 002CFF74  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D3038 002CFF78  40 82 00 4C */	bne lbl_802D3084
/* 802D303C 002CFF7C  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802D3040 002CFF80  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D3044 002CFF84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D3048 002CFF88  4C 40 13 82 */	cror 2, 0, 2
/* 802D304C 002CFF8C  40 82 00 20 */	bne lbl_802D306C
/* 802D3050 002CFF90  81 83 00 00 */	lwz r12, 0(r3)
/* 802D3054 002CFF94  38 A0 00 00 */	li r5, 0
/* 802D3058 002CFF98  38 C0 00 00 */	li r6, 0
/* 802D305C 002CFF9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D3060 002CFFA0  7D 89 03 A6 */	mtctr r12
/* 802D3064 002CFFA4  4E 80 04 21 */	bctrl 
/* 802D3068 002CFFA8  48 00 00 1C */	b lbl_802D3084
lbl_802D306C:
/* 802D306C 002CFFAC  81 83 00 00 */	lwz r12, 0(r3)
/* 802D3070 002CFFB0  38 A0 00 08 */	li r5, 8
/* 802D3074 002CFFB4  38 C0 00 00 */	li r6, 0
/* 802D3078 002CFFB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D307C 002CFFBC  7D 89 03 A6 */	mtctr r12
/* 802D3080 002CFFC0  4E 80 04 21 */	bctrl 
lbl_802D3084:
/* 802D3084 002CFFC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D3088 002CFFC8  7C 08 03 A6 */	mtlr r0
/* 802D308C 002CFFCC  38 21 00 10 */	addi r1, r1, 0x10
/* 802D3090 002CFFD0  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBase:
/* 802D3094 002CFFD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D3098 002CFFD8  7C 08 02 A6 */	mflr r0
/* 802D309C 002CFFDC  7C 83 23 78 */	mr r3, r4
/* 802D30A0 002CFFE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D30A4 002CFFE4  4B E2 E8 D9 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802D30A8 002CFFE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D30AC 002CFFEC  7C 08 03 A6 */	mtlr r0
/* 802D30B0 002CFFF0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D30B4 002CFFF4  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D30B8 002CFFF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D30BC 002CFFFC  7C 08 02 A6 */	mflr r0
/* 802D30C0 002D0000  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D30C4 002D0004  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D30C8 002D0008  38 00 FF FF */	li r0, -1
/* 802D30CC 002D000C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D30D0 002D0010  7C 9F 23 78 */	mr r31, r4
/* 802D30D4 002D0014  7F E3 FB 78 */	mr r3, r31
/* 802D30D8 002D0018  90 04 02 C0 */	stw r0, 0x2c0(r4)
/* 802D30DC 002D001C  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802D30E0 002D0020  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802D30E4 002D0024  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802D30E8 002D0028  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802D30EC 002D002C  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802D30F0 002D0030  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802D30F4 002D0034  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802D30F8 002D0038  4B E2 E8 D5 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802D30FC 002D003C  7F E3 FB 78 */	mr r3, r31
/* 802D3100 002D0040  38 80 00 07 */	li r4, 7
/* 802D3104 002D0044  38 A0 00 00 */	li r5, 0
/* 802D3108 002D0048  4B E3 1E FD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D310C 002D004C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D3110 002D0050  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D3114 002D0054  7C 08 03 A6 */	mtlr r0
/* 802D3118 002D0058  38 21 00 10 */	addi r1, r1, 0x10
/* 802D311C 002D005C  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBase
exec__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBase:
/* 802D3120 002D0060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D3124 002D0064  7C 08 02 A6 */	mflr r0
/* 802D3128 002D0068  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D312C 002D006C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D3130 002D0070  7C 9F 23 78 */	mr r31, r4
/* 802D3134 002D0074  93 C1 00 08 */	stw r30, 8(r1)
/* 802D3138 002D0078  7C 7E 1B 78 */	mr r30, r3
/* 802D313C 002D007C  7F E3 FB 78 */	mr r3, r31
/* 802D3140 002D0080  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D3144 002D0084  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802D3148 002D0088  7D 89 03 A6 */	mtctr r12
/* 802D314C 002D008C  4E 80 04 21 */	bctrl 
/* 802D3150 002D0090  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D3154 002D0094  41 82 00 18 */	beq lbl_802D316C
/* 802D3158 002D0098  7F E3 FB 78 */	mr r3, r31
/* 802D315C 002D009C  48 00 1C 31 */	bl getTakeOffPitchOffset__Q34Game9OniKurage3ObjFv
/* 802D3160 002D00A0  C0 42 E5 D8 */	lfs f2, lbl_8051C938@sda21(r2)
/* 802D3164 002D00A4  7F E3 FB 78 */	mr r3, r31
/* 802D3168 002D00A8  48 00 15 C1 */	bl setHeightVelocity__Q34Game9OniKurage3ObjFff
lbl_802D316C:
/* 802D316C 002D00AC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D3170 002D00B0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D3174 002D00B4  28 00 00 00 */	cmplwi r0, 0
/* 802D3178 002D00B8  41 82 00 80 */	beq lbl_802D31F8
/* 802D317C 002D00BC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D3180 002D00C0  28 00 00 02 */	cmplwi r0, 2
/* 802D3184 002D00C4  40 82 00 14 */	bne lbl_802D3198
/* 802D3188 002D00C8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802D318C 002D00CC  60 00 00 04 */	ori r0, r0, 4
/* 802D3190 002D00D0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802D3194 002D00D4  48 00 00 64 */	b lbl_802D31F8
lbl_802D3198:
/* 802D3198 002D00D8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D319C 002D00DC  40 82 00 5C */	bne lbl_802D31F8
/* 802D31A0 002D00E0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802D31A4 002D00E4  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D31A8 002D00E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D31AC 002D00EC  4C 40 13 82 */	cror 2, 0, 2
/* 802D31B0 002D00F0  40 82 00 28 */	bne lbl_802D31D8
/* 802D31B4 002D00F4  7F C3 F3 78 */	mr r3, r30
/* 802D31B8 002D00F8  7F E4 FB 78 */	mr r4, r31
/* 802D31BC 002D00FC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D31C0 002D0100  38 A0 00 00 */	li r5, 0
/* 802D31C4 002D0104  38 C0 00 00 */	li r6, 0
/* 802D31C8 002D0108  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D31CC 002D010C  7D 89 03 A6 */	mtctr r12
/* 802D31D0 002D0110  4E 80 04 21 */	bctrl 
/* 802D31D4 002D0114  48 00 00 24 */	b lbl_802D31F8
lbl_802D31D8:
/* 802D31D8 002D0118  7F C3 F3 78 */	mr r3, r30
/* 802D31DC 002D011C  7F E4 FB 78 */	mr r4, r31
/* 802D31E0 002D0120  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D31E4 002D0124  38 A0 00 01 */	li r5, 1
/* 802D31E8 002D0128  38 C0 00 00 */	li r6, 0
/* 802D31EC 002D012C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D31F0 002D0130  7D 89 03 A6 */	mtctr r12
/* 802D31F4 002D0134  4E 80 04 21 */	bctrl 
lbl_802D31F8:
/* 802D31F8 002D0138  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D31FC 002D013C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D3200 002D0140  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D3204 002D0144  7C 08 03 A6 */	mtlr r0
/* 802D3208 002D0148  38 21 00 10 */	addi r1, r1, 0x10
/* 802D320C 002D014C  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBase:
/* 802D3210 002D0150  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D3214 002D0154  7C 08 02 A6 */	mflr r0
/* 802D3218 002D0158  7C 83 23 78 */	mr r3, r4
/* 802D321C 002D015C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D3220 002D0160  4B E2 E7 5D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802D3224 002D0164  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D3228 002D0168  7C 08 03 A6 */	mtlr r0
/* 802D322C 002D016C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D3230 002D0170  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D3234 002D0174  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D3238 002D0178  7C 08 02 A6 */	mflr r0
/* 802D323C 002D017C  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D3240 002D0180  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D3244 002D0184  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D3248 002D0188  7C 9F 23 78 */	mr r31, r4
/* 802D324C 002D018C  7F E3 FB 78 */	mr r3, r31
/* 802D3250 002D0190  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802D3254 002D0194  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802D3258 002D0198  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802D325C 002D019C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802D3260 002D01A0  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802D3264 002D01A4  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802D3268 002D01A8  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802D326C 002D01AC  4B E2 E7 61 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802D3270 002D01B0  7F E3 FB 78 */	mr r3, r31
/* 802D3274 002D01B4  38 80 00 04 */	li r4, 4
/* 802D3278 002D01B8  38 A0 00 00 */	li r5, 0
/* 802D327C 002D01BC  4B E3 1D 89 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D3280 002D01C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D3284 002D01C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D3288 002D01C8  7C 08 03 A6 */	mtlr r0
/* 802D328C 002D01CC  38 21 00 10 */	addi r1, r1, 0x10
/* 802D3290 002D01D0  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBase
exec__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBase:
/* 802D3294 002D01D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D3298 002D01D8  7C 08 02 A6 */	mflr r0
/* 802D329C 002D01DC  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D32A0 002D01E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D32A4 002D01E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D32A8 002D01E8  7C 9F 23 78 */	mr r31, r4
/* 802D32AC 002D01EC  93 C1 00 08 */	stw r30, 8(r1)
/* 802D32B0 002D01F0  7C 7E 1B 78 */	mr r30, r3
/* 802D32B4 002D01F4  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802D32B8 002D01F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D32BC 002D01FC  4C 40 13 82 */	cror 2, 0, 2
/* 802D32C0 002D0200  41 82 00 24 */	beq lbl_802D32E4
/* 802D32C4 002D0204  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 802D32C8 002D0208  2C 00 00 00 */	cmpwi r0, 0
/* 802D32CC 002D020C  41 82 00 18 */	beq lbl_802D32E4
/* 802D32D0 002D0210  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802D32D4 002D0214  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802D32D8 002D0218  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 802D32DC 002D021C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D32E0 002D0220  40 81 00 0C */	ble lbl_802D32EC
lbl_802D32E4:
/* 802D32E4 002D0224  7F E3 FB 78 */	mr r3, r31
/* 802D32E8 002D0228  4B E3 1F B9 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802D32EC:
/* 802D32EC 002D022C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802D32F0 002D0230  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802D32F4 002D0234  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802D32F8 002D0238  EC 01 00 2A */	fadds f0, f1, f0
/* 802D32FC 002D023C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802D3300 002D0240  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D3304 002D0244  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D3308 002D0248  28 00 00 00 */	cmplwi r0, 0
/* 802D330C 002D024C  41 82 00 A8 */	beq lbl_802D33B4
/* 802D3310 002D0250  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D3314 002D0254  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D3318 002D0258  40 82 00 9C */	bne lbl_802D33B4
/* 802D331C 002D025C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802D3320 002D0260  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D3324 002D0264  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D3328 002D0268  4C 40 13 82 */	cror 2, 0, 2
/* 802D332C 002D026C  40 82 00 28 */	bne lbl_802D3354
/* 802D3330 002D0270  7F C3 F3 78 */	mr r3, r30
/* 802D3334 002D0274  7F E4 FB 78 */	mr r4, r31
/* 802D3338 002D0278  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D333C 002D027C  38 A0 00 00 */	li r5, 0
/* 802D3340 002D0280  38 C0 00 00 */	li r6, 0
/* 802D3344 002D0284  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D3348 002D0288  7D 89 03 A6 */	mtctr r12
/* 802D334C 002D028C  4E 80 04 21 */	bctrl 
/* 802D3350 002D0290  48 00 00 64 */	b lbl_802D33B4
lbl_802D3354:
/* 802D3354 002D0294  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 802D3358 002D0298  2C 00 00 00 */	cmpwi r0, 0
/* 802D335C 002D029C  40 82 00 14 */	bne lbl_802D3370
/* 802D3360 002D02A0  7F E3 FB 78 */	mr r3, r31
/* 802D3364 002D02A4  48 00 30 31 */	bl isNaviSucked__Q34Game9OniKurage3ObjFv
/* 802D3368 002D02A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D336C 002D02AC  41 82 00 28 */	beq lbl_802D3394
lbl_802D3370:
/* 802D3370 002D02B0  7F C3 F3 78 */	mr r3, r30
/* 802D3374 002D02B4  7F E4 FB 78 */	mr r4, r31
/* 802D3378 002D02B8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D337C 002D02BC  38 A0 00 0B */	li r5, 0xb
/* 802D3380 002D02C0  38 C0 00 00 */	li r6, 0
/* 802D3384 002D02C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D3388 002D02C8  7D 89 03 A6 */	mtctr r12
/* 802D338C 002D02CC  4E 80 04 21 */	bctrl 
/* 802D3390 002D02D0  48 00 00 24 */	b lbl_802D33B4
lbl_802D3394:
/* 802D3394 002D02D4  7F C3 F3 78 */	mr r3, r30
/* 802D3398 002D02D8  7F E4 FB 78 */	mr r4, r31
/* 802D339C 002D02DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D33A0 002D02E0  38 A0 00 09 */	li r5, 9
/* 802D33A4 002D02E4  38 C0 00 00 */	li r6, 0
/* 802D33A8 002D02E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D33AC 002D02EC  7D 89 03 A6 */	mtctr r12
/* 802D33B0 002D02F0  4E 80 04 21 */	bctrl 
lbl_802D33B4:
/* 802D33B4 002D02F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D33B8 002D02F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D33BC 002D02FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D33C0 002D0300  7C 08 03 A6 */	mtlr r0
/* 802D33C4 002D0304  38 21 00 10 */	addi r1, r1, 0x10
/* 802D33C8 002D0308  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBase:
/* 802D33CC 002D030C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D33D0 002D0310  7C 08 02 A6 */	mflr r0
/* 802D33D4 002D0314  7C 83 23 78 */	mr r3, r4
/* 802D33D8 002D0318  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D33DC 002D031C  4B E2 E5 A1 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802D33E0 002D0320  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D33E4 002D0324  7C 08 03 A6 */	mtlr r0
/* 802D33E8 002D0328  38 21 00 10 */	addi r1, r1, 0x10
/* 802D33EC 002D032C  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D33F0 002D0330  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802D33F4 002D0334  7C 08 02 A6 */	mflr r0
/* 802D33F8 002D0338  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D33FC 002D033C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802D3400 002D0340  38 00 FF FF */	li r0, -1
/* 802D3404 002D0344  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802D3408 002D0348  7C 9F 23 78 */	mr r31, r4
/* 802D340C 002D034C  7F E3 FB 78 */	mr r3, r31
/* 802D3410 002D0350  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802D3414 002D0354  60 84 00 04 */	ori r4, r4, 4
/* 802D3418 002D0358  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802D341C 002D035C  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802D3420 002D0360  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802D3424 002D0364  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802D3428 002D0368  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802D342C 002D036C  4B E2 E5 A1 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802D3430 002D0370  7F E3 FB 78 */	mr r3, r31
/* 802D3434 002D0374  38 80 00 02 */	li r4, 2
/* 802D3438 002D0378  38 A0 00 00 */	li r5, 0
/* 802D343C 002D037C  4B E3 1B C9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D3440 002D0380  7F E4 FB 78 */	mr r4, r31
/* 802D3444 002D0384  38 61 00 08 */	addi r3, r1, 8
/* 802D3448 002D0388  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D344C 002D038C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D3450 002D0390  7D 89 03 A6 */	mtctr r12
/* 802D3454 002D0394  4E 80 04 21 */	bctrl 
/* 802D3458 002D0398  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802D345C 002D039C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 802D3460 002D03A0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802D3464 002D03A4  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D3468 002D03A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D346C 002D03AC  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 802D3470 002D03B0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802D3474 002D03B4  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802D3478 002D03B8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D347C 002D03BC  3C 60 80 4D */	lis r3, __vt__Q23efx12TKurageFlick@ha
/* 802D3480 002D03C0  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 802D3484 002D03C4  38 C0 00 D6 */	li r6, 0xd6
/* 802D3488 002D03C8  38 A0 00 00 */	li r5, 0
/* 802D348C 002D03CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D3490 002D03D0  38 03 27 D8 */	addi r0, r3, __vt__Q23efx12TKurageFlick@l
/* 802D3494 002D03D4  38 61 00 14 */	addi r3, r1, 0x14
/* 802D3498 002D03D8  90 81 00 20 */	stw r4, 0x20(r1)
/* 802D349C 002D03DC  38 81 00 20 */	addi r4, r1, 0x20
/* 802D34A0 002D03E0  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 802D34A4 002D03E4  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 802D34A8 002D03E8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802D34AC 002D03EC  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 802D34B0 002D03F0  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 802D34B4 002D03F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D34B8 002D03F8  48 0D BA CD */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802D34BC 002D03FC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802D34C0 002D0400  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802D34C4 002D0404  7C 08 03 A6 */	mtlr r0
/* 802D34C8 002D0408  38 21 00 40 */	addi r1, r1, 0x40
/* 802D34CC 002D040C  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBase
exec__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBase:
/* 802D34D0 002D0410  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802D34D4 002D0414  7C 08 02 A6 */	mflr r0
/* 802D34D8 002D0418  90 01 00 44 */	stw r0, 0x44(r1)
/* 802D34DC 002D041C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802D34E0 002D0420  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802D34E4 002D0424  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802D34E8 002D0428  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802D34EC 002D042C  7C 9F 23 78 */	mr r31, r4
/* 802D34F0 002D0430  7C 7E 1B 78 */	mr r30, r3
/* 802D34F4 002D0434  7F E3 FB 78 */	mr r3, r31
/* 802D34F8 002D0438  48 00 16 ED */	bl getFlickPitchOffset__Q34Game9OniKurage3ObjFv
/* 802D34FC 002D043C  C0 42 E5 D8 */	lfs f2, lbl_8051C938@sda21(r2)
/* 802D3500 002D0440  7F E3 FB 78 */	mr r3, r31
/* 802D3504 002D0444  48 00 12 25 */	bl setHeightVelocity__Q34Game9OniKurage3ObjFff
/* 802D3508 002D0448  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D350C 002D044C  FF E0 08 90 */	fmr f31, f1
/* 802D3510 002D0450  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D3514 002D0454  28 00 00 00 */	cmplwi r0, 0
/* 802D3518 002D0458  41 82 01 14 */	beq lbl_802D362C
/* 802D351C 002D045C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D3520 002D0460  28 00 00 02 */	cmplwi r0, 2
/* 802D3524 002D0464  40 82 00 74 */	bne lbl_802D3598
/* 802D3528 002D0468  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D352C 002D046C  7F E3 FB 78 */	mr r3, r31
/* 802D3530 002D0470  C0 82 E5 F4 */	lfs f4, lbl_8051C954@sda21(r2)
/* 802D3534 002D0474  38 80 00 00 */	li r4, 0
/* 802D3538 002D0478  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802D353C 002D047C  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D3540 002D0480  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D3544 002D0484  4B E3 FB D9 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D3548 002D0488  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D354C 002D048C  7F E4 FB 78 */	mr r4, r31
/* 802D3550 002D0490  38 61 00 08 */	addi r3, r1, 8
/* 802D3554 002D0494  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802D3558 002D0498  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D355C 002D049C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D3560 002D04A0  7D 89 03 A6 */	mtctr r12
/* 802D3564 002D04A4  4E 80 04 21 */	bctrl 
/* 802D3568 002D04A8  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D356C 002D04AC  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D3570 002D04B0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802D3574 002D04B4  38 80 00 0C */	li r4, 0xc
/* 802D3578 002D04B8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D357C 002D04BC  38 C0 00 02 */	li r6, 2
/* 802D3580 002D04C0  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802D3584 002D04C4  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802D3588 002D04C8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802D358C 002D04CC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802D3590 002D04D0  4B F8 01 F1 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802D3594 002D04D4  48 00 00 98 */	b lbl_802D362C
lbl_802D3598:
/* 802D3598 002D04D8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D359C 002D04DC  40 82 00 90 */	bne lbl_802D362C
/* 802D35A0 002D04E0  7F E3 FB 78 */	mr r3, r31
/* 802D35A4 002D04E4  48 00 1A C5 */	bl getFlyingNextState__Q34Game9OniKurage3ObjFv
/* 802D35A8 002D04E8  7C 65 1B 79 */	or. r5, r3, r3
/* 802D35AC 002D04EC  41 80 00 24 */	blt lbl_802D35D0
/* 802D35B0 002D04F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D35B4 002D04F4  7F C3 F3 78 */	mr r3, r30
/* 802D35B8 002D04F8  7F E4 FB 78 */	mr r4, r31
/* 802D35BC 002D04FC  38 C0 00 00 */	li r6, 0
/* 802D35C0 002D0500  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D35C4 002D0504  7D 89 03 A6 */	mtctr r12
/* 802D35C8 002D0508  4E 80 04 21 */	bctrl 
/* 802D35CC 002D050C  48 00 00 60 */	b lbl_802D362C
lbl_802D35D0:
/* 802D35D0 002D0510  FC 20 F8 90 */	fmr f1, f31
/* 802D35D4 002D0514  7F E3 FB 78 */	mr r3, r31
/* 802D35D8 002D0518  38 80 00 00 */	li r4, 0
/* 802D35DC 002D051C  48 00 1E 71 */	bl isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature
/* 802D35E0 002D0520  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802D35E4 002D0524  41 82 00 28 */	beq lbl_802D360C
/* 802D35E8 002D0528  7F C3 F3 78 */	mr r3, r30
/* 802D35EC 002D052C  7F E4 FB 78 */	mr r4, r31
/* 802D35F0 002D0530  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D35F4 002D0534  38 A0 00 04 */	li r5, 4
/* 802D35F8 002D0538  38 C0 00 00 */	li r6, 0
/* 802D35FC 002D053C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D3600 002D0540  7D 89 03 A6 */	mtctr r12
/* 802D3604 002D0544  4E 80 04 21 */	bctrl 
/* 802D3608 002D0548  48 00 00 24 */	b lbl_802D362C
lbl_802D360C:
/* 802D360C 002D054C  7F C3 F3 78 */	mr r3, r30
/* 802D3610 002D0550  7F E4 FB 78 */	mr r4, r31
/* 802D3614 002D0554  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D3618 002D0558  38 A0 00 01 */	li r5, 1
/* 802D361C 002D055C  38 C0 00 00 */	li r6, 0
/* 802D3620 002D0560  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D3624 002D0564  7D 89 03 A6 */	mtctr r12
/* 802D3628 002D0568  4E 80 04 21 */	bctrl 
lbl_802D362C:
/* 802D362C 002D056C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802D3630 002D0570  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802D3634 002D0574  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802D3638 002D0578  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802D363C 002D057C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802D3640 002D0580  7C 08 03 A6 */	mtlr r0
/* 802D3644 002D0584  38 21 00 40 */	addi r1, r1, 0x40
/* 802D3648 002D0588  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBase:
/* 802D364C 002D058C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D3650 002D0590  7C 08 02 A6 */	mflr r0
/* 802D3654 002D0594  7C 83 23 78 */	mr r3, r4
/* 802D3658 002D0598  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D365C 002D059C  4B E2 E3 21 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802D3660 002D05A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D3664 002D05A4  7C 08 03 A6 */	mtlr r0
/* 802D3668 002D05A8  38 21 00 10 */	addi r1, r1, 0x10
/* 802D366C 002D05AC  4E 80 00 20 */	blr 

.global init__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802D3670 002D05B0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802D3674 002D05B4  7C 08 02 A6 */	mflr r0
/* 802D3678 002D05B8  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D367C 002D05BC  90 01 00 44 */	stw r0, 0x44(r1)
/* 802D3680 002D05C0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802D3684 002D05C4  7C 9F 23 78 */	mr r31, r4
/* 802D3688 002D05C8  7F E3 FB 78 */	mr r3, r31
/* 802D368C 002D05CC  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802D3690 002D05D0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802D3694 002D05D4  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802D3698 002D05D8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802D369C 002D05DC  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802D36A0 002D05E0  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802D36A4 002D05E4  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802D36A8 002D05E8  4B E2 E3 25 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802D36AC 002D05EC  7F E3 FB 78 */	mr r3, r31
/* 802D36B0 002D05F0  38 80 00 03 */	li r4, 3
/* 802D36B4 002D05F4  38 A0 00 00 */	li r5, 0
/* 802D36B8 002D05F8  4B E3 19 4D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802D36BC 002D05FC  7F E4 FB 78 */	mr r4, r31
/* 802D36C0 002D0600  38 61 00 08 */	addi r3, r1, 8
/* 802D36C4 002D0604  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D36C8 002D0608  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D36CC 002D060C  7D 89 03 A6 */	mtctr r12
/* 802D36D0 002D0610  4E 80 04 21 */	bctrl 
/* 802D36D4 002D0614  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802D36D8 002D0618  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 802D36DC 002D061C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802D36E0 002D0620  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D36E4 002D0624  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D36E8 002D0628  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 802D36EC 002D062C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802D36F0 002D0630  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802D36F4 002D0634  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D36F8 002D0638  3C 60 80 4D */	lis r3, __vt__Q23efx12TKurageFlick@ha
/* 802D36FC 002D063C  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 802D3700 002D0640  38 C0 00 D6 */	li r6, 0xd6
/* 802D3704 002D0644  38 A0 00 00 */	li r5, 0
/* 802D3708 002D0648  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D370C 002D064C  38 03 27 D8 */	addi r0, r3, __vt__Q23efx12TKurageFlick@l
/* 802D3710 002D0650  38 61 00 14 */	addi r3, r1, 0x14
/* 802D3714 002D0654  90 81 00 20 */	stw r4, 0x20(r1)
/* 802D3718 002D0658  38 81 00 20 */	addi r4, r1, 0x20
/* 802D371C 002D065C  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 802D3720 002D0660  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 802D3724 002D0664  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802D3728 002D0668  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 802D372C 002D066C  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 802D3730 002D0670  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D3734 002D0674  48 0D B8 51 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802D3738 002D0678  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802D373C 002D067C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802D3740 002D0680  7C 08 03 A6 */	mtlr r0
/* 802D3744 002D0684  38 21 00 40 */	addi r1, r1, 0x40
/* 802D3748 002D0688  4E 80 00 20 */	blr 

.global exec__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBase
exec__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBase:
/* 802D374C 002D068C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D3750 002D0690  7C 08 02 A6 */	mflr r0
/* 802D3754 002D0694  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D3758 002D0698  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802D375C 002D069C  7C 9F 23 78 */	mr r31, r4
/* 802D3760 002D06A0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802D3764 002D06A4  7C 7E 1B 78 */	mr r30, r3
/* 802D3768 002D06A8  7F E3 FB 78 */	mr r3, r31
/* 802D376C 002D06AC  4B E3 1B 01 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802D3770 002D06B0  C0 02 E6 08 */	lfs f0, lbl_8051C968@sda21(r2)
/* 802D3774 002D06B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D3778 002D06B8  40 81 00 10 */	ble lbl_802D3788
/* 802D377C 002D06BC  7F E3 FB 78 */	mr r3, r31
/* 802D3780 002D06C0  38 80 00 00 */	li r4, 0
/* 802D3784 002D06C4  48 00 2C 39 */	bl flickStickNavi__Q34Game9OniKurage3ObjFb
lbl_802D3788:
/* 802D3788 002D06C8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802D378C 002D06CC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802D3790 002D06D0  28 00 00 00 */	cmplwi r0, 0
/* 802D3794 002D06D4  41 82 01 2C */	beq lbl_802D38C0
/* 802D3798 002D06D8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802D379C 002D06DC  28 00 00 02 */	cmplwi r0, 2
/* 802D37A0 002D06E0  40 82 00 4C */	bne lbl_802D37EC
/* 802D37A4 002D06E4  7F E4 FB 78 */	mr r4, r31
/* 802D37A8 002D06E8  38 61 00 08 */	addi r3, r1, 8
/* 802D37AC 002D06EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802D37B0 002D06F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D37B4 002D06F4  7D 89 03 A6 */	mtctr r12
/* 802D37B8 002D06F8  4E 80 04 21 */	bctrl 
/* 802D37BC 002D06FC  C0 41 00 08 */	lfs f2, 8(r1)
/* 802D37C0 002D0700  38 A1 00 14 */	addi r5, r1, 0x14
/* 802D37C4 002D0704  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802D37C8 002D0708  38 80 00 0C */	li r4, 0xc
/* 802D37CC 002D070C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802D37D0 002D0710  38 C0 00 02 */	li r6, 2
/* 802D37D4 002D0714  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802D37D8 002D0718  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802D37DC 002D071C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802D37E0 002D0720  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802D37E4 002D0724  4B F7 FF 9D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802D37E8 002D0728  48 00 00 D8 */	b lbl_802D38C0
lbl_802D37EC:
/* 802D37EC 002D072C  28 00 00 03 */	cmplwi r0, 3
/* 802D37F0 002D0730  40 82 00 70 */	bne lbl_802D3860
/* 802D37F4 002D0734  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D37F8 002D0738  7F E3 FB 78 */	mr r3, r31
/* 802D37FC 002D073C  C0 82 E5 F4 */	lfs f4, lbl_8051C954@sda21(r2)
/* 802D3800 002D0740  38 80 00 00 */	li r4, 0
/* 802D3804 002D0744  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802D3808 002D0748  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D380C 002D074C  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D3810 002D0750  4B E3 FF 81 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802D3814 002D0754  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D3818 002D0758  7F E3 FB 78 */	mr r3, r31
/* 802D381C 002D075C  C0 82 E5 F4 */	lfs f4, lbl_8051C954@sda21(r2)
/* 802D3820 002D0760  38 80 00 00 */	li r4, 0
/* 802D3824 002D0764  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802D3828 002D0768  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D382C 002D076C  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D3830 002D0770  4B E3 FC A5 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D3834 002D0774  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802D3838 002D0778  7F E3 FB 78 */	mr r3, r31
/* 802D383C 002D077C  C0 82 E5 F4 */	lfs f4, lbl_8051C954@sda21(r2)
/* 802D3840 002D0780  38 80 00 00 */	li r4, 0
/* 802D3844 002D0784  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802D3848 002D0788  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802D384C 002D078C  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802D3850 002D0790  4B E3 F8 CD */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802D3854 002D0794  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D3858 002D0798  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802D385C 002D079C  48 00 00 64 */	b lbl_802D38C0
lbl_802D3860:
/* 802D3860 002D07A0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802D3864 002D07A4  40 82 00 5C */	bne lbl_802D38C0
/* 802D3868 002D07A8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802D386C 002D07AC  C0 02 E5 D8 */	lfs f0, lbl_8051C938@sda21(r2)
/* 802D3870 002D07B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D3874 002D07B4  4C 40 13 82 */	cror 2, 0, 2
/* 802D3878 002D07B8  40 82 00 28 */	bne lbl_802D38A0
/* 802D387C 002D07BC  7F C3 F3 78 */	mr r3, r30
/* 802D3880 002D07C0  7F E4 FB 78 */	mr r4, r31
/* 802D3884 002D07C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D3888 002D07C8  38 A0 00 00 */	li r5, 0
/* 802D388C 002D07CC  38 C0 00 00 */	li r6, 0
/* 802D3890 002D07D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D3894 002D07D4  7D 89 03 A6 */	mtctr r12
/* 802D3898 002D07D8  4E 80 04 21 */	bctrl 
/* 802D389C 002D07DC  48 00 00 24 */	b lbl_802D38C0
lbl_802D38A0:
/* 802D38A0 002D07E0  7F C3 F3 78 */	mr r3, r30
/* 802D38A4 002D07E4  7F E4 FB 78 */	mr r4, r31
/* 802D38A8 002D07E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802D38AC 002D07EC  38 A0 00 09 */	li r5, 9
/* 802D38B0 002D07F0  38 C0 00 00 */	li r6, 0
/* 802D38B4 002D07F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802D38B8 002D07F8  7D 89 03 A6 */	mtctr r12
/* 802D38BC 002D07FC  4E 80 04 21 */	bctrl 
lbl_802D38C0:
/* 802D38C0 002D0800  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D38C4 002D0804  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802D38C8 002D0808  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802D38CC 002D080C  7C 08 03 A6 */	mtlr r0
/* 802D38D0 002D0810  38 21 00 30 */	addi r1, r1, 0x30
/* 802D38D4 002D0814  4E 80 00 20 */	blr 

.global cleanup__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBase
cleanup__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBase:
/* 802D38D8 002D0818  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D38DC 002D081C  7C 08 02 A6 */	mflr r0
/* 802D38E0 002D0820  7C 83 23 78 */	mr r3, r4
/* 802D38E4 002D0824  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D38E8 002D0828  4B E2 E0 95 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802D38EC 002D082C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D38F0 002D0830  7C 08 03 A6 */	mtlr r0
/* 802D38F4 002D0834  38 21 00 10 */	addi r1, r1, 0x10
/* 802D38F8 002D0838  4E 80 00 20 */	blr 

.global __sinit_OniKurageState_cpp
__sinit_OniKurageState_cpp:
/* 802D38FC 002D083C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802D3900 002D0840  38 00 FF FF */	li r0, -1
/* 802D3904 002D0844  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802D3908 002D0848  3C 60 80 4D */	lis r3, lbl_804D27A8@ha
/* 802D390C 002D084C  90 0D 97 48 */	stw r0, lbl_80515DC8@sda21(r13)
/* 802D3910 002D0850  D4 03 27 A8 */	stfsu f0, lbl_804D27A8@l(r3)
/* 802D3914 002D0854  D0 0D 97 4C */	stfs f0, lbl_80515DCC@sda21(r13)
/* 802D3918 002D0858  D0 03 00 04 */	stfs f0, 4(r3)
/* 802D391C 002D085C  D0 03 00 08 */	stfs f0, 8(r3)
/* 802D3920 002D0860  4E 80 00 20 */	blr 
