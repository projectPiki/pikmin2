.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_HoudaiState_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804D0C30
lbl_804D0C30:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game6Houdai9StateShot
__vt__Q34Game6Houdai9StateShot:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Houdai9StateShotFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Houdai9StateShotFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Houdai9StateShotFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Houdai9StateWalk
__vt__Q34Game6Houdai9StateWalk:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Houdai9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Houdai9StateWalkFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Houdai9StateWalkFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Houdai10StateFlick
__vt__Q34Game6Houdai10StateFlick:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Houdai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Houdai10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Houdai10StateFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Houdai9StateWait
__vt__Q34Game6Houdai9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Houdai9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Houdai9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Houdai9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Houdai9StateLand
__vt__Q34Game6Houdai9StateLand:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Houdai9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Houdai9StateLandFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Houdai9StateLandFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Houdai9StateStay
__vt__Q34Game6Houdai9StateStay:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Houdai9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Houdai9StateStayFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Houdai9StateStayFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Houdai9StateDead
__vt__Q34Game6Houdai9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Houdai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Houdai9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Houdai9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Houdai5State
__vt__Q34Game6Houdai5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Houdai3FSM
__vt__Q34Game6Houdai3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Houdai3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515D90
lbl_80515D90:
	.skip 0x4
.global lbl_80515D94
lbl_80515D94:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051C418
lbl_8051C418:
	.4byte 0x64656164
	.4byte 0x00000000
.global lbl_8051C420
lbl_8051C420:
	.4byte 0x73746179
	.4byte 0x00000000
.global lbl_8051C428
lbl_8051C428:
	.4byte 0x6C616E64
	.4byte 0x00000000
.global lbl_8051C430
lbl_8051C430:
	.4byte 0x77616974
	.4byte 0x00000000
.global lbl_8051C438
lbl_8051C438:
	.4byte 0x666C6963
	.4byte 0x6B000000
.global lbl_8051C440
lbl_8051C440:
	.4byte 0x77616C6B
	.4byte 0x00000000
.global lbl_8051C448
lbl_8051C448:
	.4byte 0x73686F74
	.4byte 0x00000000
.global lbl_8051C450
lbl_8051C450:
	.4byte 0x00000000
.global lbl_8051C454
lbl_8051C454:
	.float 1.0
.global lbl_8051C458
lbl_8051C458:
	.4byte 0x42C80000
.global lbl_8051C45C
lbl_8051C45C:
	.4byte 0xC47A0000
.global lbl_8051C460
lbl_8051C460:
	.4byte 0x3FC00000
.global lbl_8051C464
lbl_8051C464:
	.4byte 0x47000000
.global lbl_8051C468
lbl_8051C468:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051C470
lbl_8051C470:
	.4byte 0x40600000
.global lbl_8051C474
lbl_8051C474:
	.4byte 0x40000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game6Houdai3FSMFPQ24Game9EnemyBase
init__Q34Game6Houdai3FSMFPQ24Game9EnemyBase:
/* 802BDAB0 002BA9F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BDAB4 002BA9F4  7C 08 02 A6 */	mflr r0
/* 802BDAB8 002BA9F8  38 80 00 07 */	li r4, 7
/* 802BDABC 002BA9FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BDAC0 002BAA00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BDAC4 002BAA04  7C 7F 1B 78 */	mr r31, r3
/* 802BDAC8 002BAA08  4B E7 2D 9D */	bl create__Q24Game17EnemyStateMachineFi
/* 802BDACC 002BAA0C  38 60 00 10 */	li r3, 0x10
/* 802BDAD0 002BAA10  4B D6 63 D5 */	bl __nw__FUl
/* 802BDAD4 002BAA14  7C 64 1B 79 */	or. r4, r3, r3
/* 802BDAD8 002BAA18  41 82 00 3C */	beq lbl_802BDB14
/* 802BDADC 002BAA1C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BDAE0 002BAA20  3C A0 80 4D */	lis r5, __vt__Q34Game6Houdai5State@ha
/* 802BDAE4 002BAA24  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BDAE8 002BAA28  3C 60 80 4D */	lis r3, __vt__Q34Game6Houdai9StateDead@ha
/* 802BDAEC 002BAA2C  90 04 00 00 */	stw r0, 0(r4)
/* 802BDAF0 002BAA30  38 E0 00 00 */	li r7, 0
/* 802BDAF4 002BAA34  38 C5 0D 38 */	addi r6, r5, __vt__Q34Game6Houdai5State@l
/* 802BDAF8 002BAA38  38 A2 E0 B8 */	addi r5, r2, lbl_8051C418@sda21
/* 802BDAFC 002BAA3C  90 E4 00 04 */	stw r7, 4(r4)
/* 802BDB00 002BAA40  38 03 0D 14 */	addi r0, r3, __vt__Q34Game6Houdai9StateDead@l
/* 802BDB04 002BAA44  90 E4 00 08 */	stw r7, 8(r4)
/* 802BDB08 002BAA48  90 C4 00 00 */	stw r6, 0(r4)
/* 802BDB0C 002BAA4C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BDB10 002BAA50  90 04 00 00 */	stw r0, 0(r4)
lbl_802BDB14:
/* 802BDB14 002BAA54  7F E3 FB 78 */	mr r3, r31
/* 802BDB18 002BAA58  4B E7 2D F1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BDB1C 002BAA5C  38 60 00 10 */	li r3, 0x10
/* 802BDB20 002BAA60  4B D6 63 85 */	bl __nw__FUl
/* 802BDB24 002BAA64  7C 64 1B 79 */	or. r4, r3, r3
/* 802BDB28 002BAA68  41 82 00 40 */	beq lbl_802BDB68
/* 802BDB2C 002BAA6C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BDB30 002BAA70  3C A0 80 4D */	lis r5, __vt__Q34Game6Houdai5State@ha
/* 802BDB34 002BAA74  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BDB38 002BAA78  3C 60 80 4D */	lis r3, __vt__Q34Game6Houdai9StateStay@ha
/* 802BDB3C 002BAA7C  90 04 00 00 */	stw r0, 0(r4)
/* 802BDB40 002BAA80  38 00 00 01 */	li r0, 1
/* 802BDB44 002BAA84  38 E0 00 00 */	li r7, 0
/* 802BDB48 002BAA88  38 C5 0D 38 */	addi r6, r5, __vt__Q34Game6Houdai5State@l
/* 802BDB4C 002BAA8C  90 04 00 04 */	stw r0, 4(r4)
/* 802BDB50 002BAA90  38 A2 E0 C0 */	addi r5, r2, lbl_8051C420@sda21
/* 802BDB54 002BAA94  38 03 0C F0 */	addi r0, r3, __vt__Q34Game6Houdai9StateStay@l
/* 802BDB58 002BAA98  90 E4 00 08 */	stw r7, 8(r4)
/* 802BDB5C 002BAA9C  90 C4 00 00 */	stw r6, 0(r4)
/* 802BDB60 002BAAA0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BDB64 002BAAA4  90 04 00 00 */	stw r0, 0(r4)
lbl_802BDB68:
/* 802BDB68 002BAAA8  7F E3 FB 78 */	mr r3, r31
/* 802BDB6C 002BAAAC  4B E7 2D 9D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BDB70 002BAAB0  38 60 00 10 */	li r3, 0x10
/* 802BDB74 002BAAB4  4B D6 63 31 */	bl __nw__FUl
/* 802BDB78 002BAAB8  7C 64 1B 79 */	or. r4, r3, r3
/* 802BDB7C 002BAABC  41 82 00 40 */	beq lbl_802BDBBC
/* 802BDB80 002BAAC0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BDB84 002BAAC4  3C A0 80 4D */	lis r5, __vt__Q34Game6Houdai5State@ha
/* 802BDB88 002BAAC8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BDB8C 002BAACC  3C 60 80 4D */	lis r3, __vt__Q34Game6Houdai9StateLand@ha
/* 802BDB90 002BAAD0  90 04 00 00 */	stw r0, 0(r4)
/* 802BDB94 002BAAD4  38 00 00 02 */	li r0, 2
/* 802BDB98 002BAAD8  38 E0 00 00 */	li r7, 0
/* 802BDB9C 002BAADC  38 C5 0D 38 */	addi r6, r5, __vt__Q34Game6Houdai5State@l
/* 802BDBA0 002BAAE0  90 04 00 04 */	stw r0, 4(r4)
/* 802BDBA4 002BAAE4  38 A2 E0 C8 */	addi r5, r2, lbl_8051C428@sda21
/* 802BDBA8 002BAAE8  38 03 0C CC */	addi r0, r3, __vt__Q34Game6Houdai9StateLand@l
/* 802BDBAC 002BAAEC  90 E4 00 08 */	stw r7, 8(r4)
/* 802BDBB0 002BAAF0  90 C4 00 00 */	stw r6, 0(r4)
/* 802BDBB4 002BAAF4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BDBB8 002BAAF8  90 04 00 00 */	stw r0, 0(r4)
lbl_802BDBBC:
/* 802BDBBC 002BAAFC  7F E3 FB 78 */	mr r3, r31
/* 802BDBC0 002BAB00  4B E7 2D 49 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BDBC4 002BAB04  38 60 00 10 */	li r3, 0x10
/* 802BDBC8 002BAB08  4B D6 62 DD */	bl __nw__FUl
/* 802BDBCC 002BAB0C  7C 64 1B 79 */	or. r4, r3, r3
/* 802BDBD0 002BAB10  41 82 00 40 */	beq lbl_802BDC10
/* 802BDBD4 002BAB14  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BDBD8 002BAB18  3C A0 80 4D */	lis r5, __vt__Q34Game6Houdai5State@ha
/* 802BDBDC 002BAB1C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BDBE0 002BAB20  3C 60 80 4D */	lis r3, __vt__Q34Game6Houdai9StateWait@ha
/* 802BDBE4 002BAB24  90 04 00 00 */	stw r0, 0(r4)
/* 802BDBE8 002BAB28  38 00 00 03 */	li r0, 3
/* 802BDBEC 002BAB2C  38 E0 00 00 */	li r7, 0
/* 802BDBF0 002BAB30  38 C5 0D 38 */	addi r6, r5, __vt__Q34Game6Houdai5State@l
/* 802BDBF4 002BAB34  90 04 00 04 */	stw r0, 4(r4)
/* 802BDBF8 002BAB38  38 A2 E0 D0 */	addi r5, r2, lbl_8051C430@sda21
/* 802BDBFC 002BAB3C  38 03 0C A8 */	addi r0, r3, __vt__Q34Game6Houdai9StateWait@l
/* 802BDC00 002BAB40  90 E4 00 08 */	stw r7, 8(r4)
/* 802BDC04 002BAB44  90 C4 00 00 */	stw r6, 0(r4)
/* 802BDC08 002BAB48  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BDC0C 002BAB4C  90 04 00 00 */	stw r0, 0(r4)
lbl_802BDC10:
/* 802BDC10 002BAB50  7F E3 FB 78 */	mr r3, r31
/* 802BDC14 002BAB54  4B E7 2C F5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BDC18 002BAB58  38 60 00 10 */	li r3, 0x10
/* 802BDC1C 002BAB5C  4B D6 62 89 */	bl __nw__FUl
/* 802BDC20 002BAB60  7C 64 1B 79 */	or. r4, r3, r3
/* 802BDC24 002BAB64  41 82 00 40 */	beq lbl_802BDC64
/* 802BDC28 002BAB68  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BDC2C 002BAB6C  3C A0 80 4D */	lis r5, __vt__Q34Game6Houdai5State@ha
/* 802BDC30 002BAB70  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BDC34 002BAB74  3C 60 80 4D */	lis r3, __vt__Q34Game6Houdai10StateFlick@ha
/* 802BDC38 002BAB78  90 04 00 00 */	stw r0, 0(r4)
/* 802BDC3C 002BAB7C  38 00 00 04 */	li r0, 4
/* 802BDC40 002BAB80  38 E0 00 00 */	li r7, 0
/* 802BDC44 002BAB84  38 C5 0D 38 */	addi r6, r5, __vt__Q34Game6Houdai5State@l
/* 802BDC48 002BAB88  90 04 00 04 */	stw r0, 4(r4)
/* 802BDC4C 002BAB8C  38 A2 E0 D8 */	addi r5, r2, lbl_8051C438@sda21
/* 802BDC50 002BAB90  38 03 0C 84 */	addi r0, r3, __vt__Q34Game6Houdai10StateFlick@l
/* 802BDC54 002BAB94  90 E4 00 08 */	stw r7, 8(r4)
/* 802BDC58 002BAB98  90 C4 00 00 */	stw r6, 0(r4)
/* 802BDC5C 002BAB9C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BDC60 002BABA0  90 04 00 00 */	stw r0, 0(r4)
lbl_802BDC64:
/* 802BDC64 002BABA4  7F E3 FB 78 */	mr r3, r31
/* 802BDC68 002BABA8  4B E7 2C A1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BDC6C 002BABAC  38 60 00 10 */	li r3, 0x10
/* 802BDC70 002BABB0  4B D6 62 35 */	bl __nw__FUl
/* 802BDC74 002BABB4  7C 64 1B 79 */	or. r4, r3, r3
/* 802BDC78 002BABB8  41 82 00 40 */	beq lbl_802BDCB8
/* 802BDC7C 002BABBC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BDC80 002BABC0  3C A0 80 4D */	lis r5, __vt__Q34Game6Houdai5State@ha
/* 802BDC84 002BABC4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BDC88 002BABC8  3C 60 80 4D */	lis r3, __vt__Q34Game6Houdai9StateWalk@ha
/* 802BDC8C 002BABCC  90 04 00 00 */	stw r0, 0(r4)
/* 802BDC90 002BABD0  38 00 00 05 */	li r0, 5
/* 802BDC94 002BABD4  38 E0 00 00 */	li r7, 0
/* 802BDC98 002BABD8  38 C5 0D 38 */	addi r6, r5, __vt__Q34Game6Houdai5State@l
/* 802BDC9C 002BABDC  90 04 00 04 */	stw r0, 4(r4)
/* 802BDCA0 002BABE0  38 A2 E0 E0 */	addi r5, r2, lbl_8051C440@sda21
/* 802BDCA4 002BABE4  38 03 0C 60 */	addi r0, r3, __vt__Q34Game6Houdai9StateWalk@l
/* 802BDCA8 002BABE8  90 E4 00 08 */	stw r7, 8(r4)
/* 802BDCAC 002BABEC  90 C4 00 00 */	stw r6, 0(r4)
/* 802BDCB0 002BABF0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BDCB4 002BABF4  90 04 00 00 */	stw r0, 0(r4)
lbl_802BDCB8:
/* 802BDCB8 002BABF8  7F E3 FB 78 */	mr r3, r31
/* 802BDCBC 002BABFC  4B E7 2C 4D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BDCC0 002BAC00  38 60 00 10 */	li r3, 0x10
/* 802BDCC4 002BAC04  4B D6 61 E1 */	bl __nw__FUl
/* 802BDCC8 002BAC08  7C 64 1B 79 */	or. r4, r3, r3
/* 802BDCCC 002BAC0C  41 82 00 40 */	beq lbl_802BDD0C
/* 802BDCD0 002BAC10  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802BDCD4 002BAC14  3C A0 80 4D */	lis r5, __vt__Q34Game6Houdai5State@ha
/* 802BDCD8 002BAC18  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802BDCDC 002BAC1C  3C 60 80 4D */	lis r3, __vt__Q34Game6Houdai9StateShot@ha
/* 802BDCE0 002BAC20  90 04 00 00 */	stw r0, 0(r4)
/* 802BDCE4 002BAC24  38 00 00 06 */	li r0, 6
/* 802BDCE8 002BAC28  38 E0 00 00 */	li r7, 0
/* 802BDCEC 002BAC2C  38 C5 0D 38 */	addi r6, r5, __vt__Q34Game6Houdai5State@l
/* 802BDCF0 002BAC30  90 04 00 04 */	stw r0, 4(r4)
/* 802BDCF4 002BAC34  38 A2 E0 E8 */	addi r5, r2, lbl_8051C448@sda21
/* 802BDCF8 002BAC38  38 03 0C 3C */	addi r0, r3, __vt__Q34Game6Houdai9StateShot@l
/* 802BDCFC 002BAC3C  90 E4 00 08 */	stw r7, 8(r4)
/* 802BDD00 002BAC40  90 C4 00 00 */	stw r6, 0(r4)
/* 802BDD04 002BAC44  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802BDD08 002BAC48  90 04 00 00 */	stw r0, 0(r4)
lbl_802BDD0C:
/* 802BDD0C 002BAC4C  7F E3 FB 78 */	mr r3, r31
/* 802BDD10 002BAC50  4B E7 2B F9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802BDD14 002BAC54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BDD18 002BAC58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BDD1C 002BAC5C  7C 08 03 A6 */	mtlr r0
/* 802BDD20 002BAC60  38 21 00 10 */	addi r1, r1, 0x10
/* 802BDD24 002BAC64  4E 80 00 20 */	blr 

.global init__Q34Game6Houdai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Houdai9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802BDD28 002BAC68  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802BDD2C 002BAC6C  7C 08 02 A6 */	mflr r0
/* 802BDD30 002BAC70  90 01 00 34 */	stw r0, 0x34(r1)
/* 802BDD34 002BAC74  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802BDD38 002BAC78  7C 9F 23 78 */	mr r31, r4
/* 802BDD3C 002BAC7C  7F E3 FB 78 */	mr r3, r31
/* 802BDD40 002BAC80  48 00 31 6D */	bl forceFinishIKMotion__Q34Game6Houdai3ObjFv
/* 802BDD44 002BAC84  7F E3 FB 78 */	mr r3, r31
/* 802BDD48 002BAC88  4B E4 79 D9 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802BDD4C 002BAC8C  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BDD50 002BAC90  7F E3 FB 78 */	mr r3, r31
/* 802BDD54 002BAC94  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BDD58 002BAC98  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BDD5C 002BAC9C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BDD60 002BACA0  4B E4 3C 1D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802BDD64 002BACA4  7F E3 FB 78 */	mr r3, r31
/* 802BDD68 002BACA8  38 80 00 00 */	li r4, 0
/* 802BDD6C 002BACAC  38 A0 00 00 */	li r5, 0
/* 802BDD70 002BACB0  4B E4 72 95 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BDD74 002BACB4  7F E3 FB 78 */	mr r3, r31
/* 802BDD78 002BACB8  48 00 4B 01 */	bl createHoudaiDeadEffect__Q34Game6Houdai3ObjFv
/* 802BDD7C 002BACBC  7F E3 FB 78 */	mr r3, r31
/* 802BDD80 002BACC0  48 00 4F F5 */	bl startChimneyEffect__Q34Game6Houdai3ObjFv
/* 802BDD84 002BACC4  7F E3 FB 78 */	mr r3, r31
/* 802BDD88 002BACC8  48 00 4F 81 */	bl finishSteamEffect__Q34Game6Houdai3ObjFv
/* 802BDD8C 002BACCC  7F E4 FB 78 */	mr r4, r31
/* 802BDD90 002BACD0  38 61 00 08 */	addi r3, r1, 8
/* 802BDD94 002BACD4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BDD98 002BACD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BDD9C 002BACDC  7D 89 03 A6 */	mtctr r12
/* 802BDDA0 002BACE0  4E 80 04 21 */	bctrl 
/* 802BDDA4 002BACE4  C0 41 00 08 */	lfs f2, 8(r1)
/* 802BDDA8 002BACE8  38 A1 00 14 */	addi r5, r1, 0x14
/* 802BDDAC 002BACEC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802BDDB0 002BACF0  38 80 00 07 */	li r4, 7
/* 802BDDB4 002BACF4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802BDDB8 002BACF8  38 C0 00 02 */	li r6, 2
/* 802BDDBC 002BACFC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802BDDC0 002BAD00  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802BDDC4 002BAD04  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802BDDC8 002BAD08  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802BDDCC 002BAD0C  4B F9 59 B5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802BDDD0 002BAD10  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802BDDD4 002BAD14  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802BDDD8 002BAD18  7C 08 03 A6 */	mtlr r0
/* 802BDDDC 002BAD1C  38 21 00 30 */	addi r1, r1, 0x30
/* 802BDDE0 002BAD20  4E 80 00 20 */	blr 

.global exec__Q34Game6Houdai9StateDeadFPQ24Game9EnemyBase
exec__Q34Game6Houdai9StateDeadFPQ24Game9EnemyBase:
/* 802BDDE4 002BAD24  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802BDDE8 002BAD28  7C 08 02 A6 */	mflr r0
/* 802BDDEC 002BAD2C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802BDDF0 002BAD30  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802BDDF4 002BAD34  7C 9F 23 78 */	mr r31, r4
/* 802BDDF8 002BAD38  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802BDDFC 002BAD3C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BDE00 002BAD40  28 00 00 00 */	cmplwi r0, 0
/* 802BDE04 002BAD44  41 82 00 84 */	beq lbl_802BDE88
/* 802BDE08 002BAD48  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BDE0C 002BAD4C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BDE10 002BAD50  40 82 00 78 */	bne lbl_802BDE88
/* 802BDE14 002BAD54  7F E3 FB 78 */	mr r3, r31
/* 802BDE18 002BAD58  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BDE1C 002BAD5C  81 8C 02 64 */	lwz r12, 0x264(r12)
/* 802BDE20 002BAD60  7D 89 03 A6 */	mtctr r12
/* 802BDE24 002BAD64  4E 80 04 21 */	bctrl 
/* 802BDE28 002BAD68  7F E3 FB 78 */	mr r3, r31
/* 802BDE2C 002BAD6C  48 00 4F A5 */	bl finishChimneyEffect__Q34Game6Houdai3ObjFv
/* 802BDE30 002BAD70  7F E3 FB 78 */	mr r3, r31
/* 802BDE34 002BAD74  48 00 50 85 */	bl createDeadBombEffect__Q34Game6Houdai3ObjFv
/* 802BDE38 002BAD78  7F E4 FB 78 */	mr r4, r31
/* 802BDE3C 002BAD7C  38 61 00 08 */	addi r3, r1, 8
/* 802BDE40 002BAD80  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BDE44 002BAD84  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BDE48 002BAD88  7D 89 03 A6 */	mtctr r12
/* 802BDE4C 002BAD8C  4E 80 04 21 */	bctrl 
/* 802BDE50 002BAD90  C0 41 00 08 */	lfs f2, 8(r1)
/* 802BDE54 002BAD94  38 A1 00 14 */	addi r5, r1, 0x14
/* 802BDE58 002BAD98  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802BDE5C 002BAD9C  38 80 00 15 */	li r4, 0x15
/* 802BDE60 002BADA0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802BDE64 002BADA4  38 C0 00 02 */	li r6, 2
/* 802BDE68 002BADA8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802BDE6C 002BADAC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802BDE70 002BADB0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802BDE74 002BADB4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802BDE78 002BADB8  4B F9 43 C5 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802BDE7C 002BADBC  7F E3 FB 78 */	mr r3, r31
/* 802BDE80 002BADC0  38 80 00 00 */	li r4, 0
/* 802BDE84 002BADC4  4B E7 D2 6D */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
lbl_802BDE88:
/* 802BDE88 002BADC8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802BDE8C 002BADCC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802BDE90 002BADD0  7C 08 03 A6 */	mtlr r0
/* 802BDE94 002BADD4  38 21 00 30 */	addi r1, r1, 0x30
/* 802BDE98 002BADD8  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Houdai9StateDeadFPQ24Game9EnemyBase
cleanup__Q34Game6Houdai9StateDeadFPQ24Game9EnemyBase:
/* 802BDE9C 002BADDC  4E 80 00 20 */	blr 

.global init__Q34Game6Houdai9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Houdai9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802BDEA0 002BADE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BDEA4 002BADE4  7C 08 02 A6 */	mflr r0
/* 802BDEA8 002BADE8  38 60 FF FF */	li r3, -1
/* 802BDEAC 002BADEC  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BDEB0 002BADF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BDEB4 002BADF4  38 00 00 00 */	li r0, 0
/* 802BDEB8 002BADF8  38 A0 00 00 */	li r5, 0
/* 802BDEBC 002BADFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BDEC0 002BAE00  7C 9F 23 78 */	mr r31, r4
/* 802BDEC4 002BAE04  90 64 02 D0 */	stw r3, 0x2d0(r4)
/* 802BDEC8 002BAE08  7F E3 FB 78 */	mr r3, r31
/* 802BDECC 002BAE0C  38 80 00 01 */	li r4, 1
/* 802BDED0 002BAE10  80 DF 01 E0 */	lwz r6, 0x1e0(r31)
/* 802BDED4 002BAE14  64 C6 00 40 */	oris r6, r6, 0x40
/* 802BDED8 002BAE18  90 DF 01 E0 */	stw r6, 0x1e0(r31)
/* 802BDEDC 002BAE1C  80 DF 01 E0 */	lwz r6, 0x1e0(r31)
/* 802BDEE0 002BAE20  54 C6 04 5E */	rlwinm r6, r6, 0, 0x11, 0xf
/* 802BDEE4 002BAE24  90 DF 01 E0 */	stw r6, 0x1e0(r31)
/* 802BDEE8 002BAE28  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802BDEEC 002BAE2C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BDEF0 002BAE30  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BDEF4 002BAE34  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BDEF8 002BAE38  4B E4 71 0D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BDEFC 002BAE3C  7F E3 FB 78 */	mr r3, r31
/* 802BDF00 002BAE40  4B E4 93 E1 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802BDF04 002BAE44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BDF08 002BAE48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BDF0C 002BAE4C  7C 08 03 A6 */	mtlr r0
/* 802BDF10 002BAE50  38 21 00 10 */	addi r1, r1, 0x10
/* 802BDF14 002BAE54  4E 80 00 20 */	blr 

.global exec__Q34Game6Houdai9StateStayFPQ24Game9EnemyBase
exec__Q34Game6Houdai9StateStayFPQ24Game9EnemyBase:
/* 802BDF18 002BAE58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802BDF1C 002BAE5C  7C 08 02 A6 */	mflr r0
/* 802BDF20 002BAE60  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BDF24 002BAE64  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802BDF28 002BAE68  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802BDF2C 002BAE6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BDF30 002BAE70  93 C1 00 08 */	stw r30, 8(r1)
/* 802BDF34 002BAE74  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802BDF38 002BAE78  7C 7E 1B 78 */	mr r30, r3
/* 802BDF3C 002BAE7C  7C 9F 23 78 */	mr r31, r4
/* 802BDF40 002BAE80  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 802BDF44 002BAE84  40 82 00 58 */	bne lbl_802BDF9C
/* 802BDF48 002BAE88  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802BDF4C 002BAE8C  7F E3 FB 78 */	mr r3, r31
/* 802BDF50 002BAE90  38 80 00 00 */	li r4, 0
/* 802BDF54 002BAE94  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 802BDF58 002BAE98  FC 20 F8 90 */	fmr f1, f31
/* 802BDF5C 002BAE9C  4B E5 6B 65 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 802BDF60 002BAEA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BDF64 002BAEA4  41 82 00 0C */	beq lbl_802BDF70
/* 802BDF68 002BAEA8  38 00 00 01 */	li r0, 1
/* 802BDF6C 002BAEAC  48 00 00 28 */	b lbl_802BDF94
lbl_802BDF70:
/* 802BDF70 002BAEB0  FC 20 F8 90 */	fmr f1, f31
/* 802BDF74 002BAEB4  7F E3 FB 78 */	mr r3, r31
/* 802BDF78 002BAEB8  38 80 00 00 */	li r4, 0
/* 802BDF7C 002BAEBC  4B E5 67 B9 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 802BDF80 002BAEC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BDF84 002BAEC4  41 82 00 0C */	beq lbl_802BDF90
/* 802BDF88 002BAEC8  38 00 00 01 */	li r0, 1
/* 802BDF8C 002BAECC  48 00 00 08 */	b lbl_802BDF94
lbl_802BDF90:
/* 802BDF90 002BAED0  38 00 00 00 */	li r0, 0
lbl_802BDF94:
/* 802BDF94 002BAED4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802BDF98 002BAED8  41 82 00 24 */	beq lbl_802BDFBC
lbl_802BDF9C:
/* 802BDF9C 002BAEDC  7F C3 F3 78 */	mr r3, r30
/* 802BDFA0 002BAEE0  7F E4 FB 78 */	mr r4, r31
/* 802BDFA4 002BAEE4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BDFA8 002BAEE8  38 A0 00 02 */	li r5, 2
/* 802BDFAC 002BAEEC  38 C0 00 00 */	li r6, 0
/* 802BDFB0 002BAEF0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BDFB4 002BAEF4  7D 89 03 A6 */	mtctr r12
/* 802BDFB8 002BAEF8  4E 80 04 21 */	bctrl 
lbl_802BDFBC:
/* 802BDFBC 002BAEFC  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802BDFC0 002BAF00  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BDFC4 002BAF04  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802BDFC8 002BAF08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BDFCC 002BAF0C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BDFD0 002BAF10  7C 08 03 A6 */	mtlr r0
/* 802BDFD4 002BAF14  38 21 00 20 */	addi r1, r1, 0x20
/* 802BDFD8 002BAF18  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Houdai9StateStayFPQ24Game9EnemyBase
cleanup__Q34Game6Houdai9StateStayFPQ24Game9EnemyBase:
/* 802BDFDC 002BAF1C  4E 80 00 20 */	blr 

.global init__Q34Game6Houdai9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Houdai9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802BDFE0 002BAF20  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802BDFE4 002BAF24  7C 08 02 A6 */	mflr r0
/* 802BDFE8 002BAF28  90 01 00 34 */	stw r0, 0x34(r1)
/* 802BDFEC 002BAF2C  38 00 FF FF */	li r0, -1
/* 802BDFF0 002BAF30  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802BDFF4 002BAF34  7C 9F 23 78 */	mr r31, r4
/* 802BDFF8 002BAF38  7F E3 FB 78 */	mr r3, r31
/* 802BDFFC 002BAF3C  90 04 02 D0 */	stw r0, 0x2d0(r4)
/* 802BE000 002BAF40  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802BE004 002BAF44  64 00 00 40 */	oris r0, r0, 0x40
/* 802BE008 002BAF48  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802BE00C 002BAF4C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802BE010 002BAF50  60 00 80 00 */	ori r0, r0, 0x8000
/* 802BE014 002BAF54  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802BE018 002BAF58  4B E4 39 B5 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802BE01C 002BAF5C  38 00 00 00 */	li r0, 0
/* 802BE020 002BAF60  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE024 002BAF64  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802BE028 002BAF68  7F E3 FB 78 */	mr r3, r31
/* 802BE02C 002BAF6C  38 80 00 01 */	li r4, 1
/* 802BE030 002BAF70  38 A0 00 00 */	li r5, 0
/* 802BE034 002BAF74  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BE038 002BAF78  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BE03C 002BAF7C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BE040 002BAF80  4B E4 6F C5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BE044 002BAF84  7F E3 FB 78 */	mr r3, r31
/* 802BE048 002BAF88  48 00 4A E5 */	bl createAppearEffect__Q34Game6Houdai3ObjFv
/* 802BE04C 002BAF8C  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802BE050 002BAF90  7F E4 FB 78 */	mr r4, r31
/* 802BE054 002BAF94  4B F8 3D 8D */	bl addJointShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802BE058 002BAF98  7F E4 FB 78 */	mr r4, r31
/* 802BE05C 002BAF9C  38 61 00 08 */	addi r3, r1, 8
/* 802BE060 002BAFA0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BE064 002BAFA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BE068 002BAFA8  7D 89 03 A6 */	mtctr r12
/* 802BE06C 002BAFAC  4E 80 04 21 */	bctrl 
/* 802BE070 002BAFB0  C0 41 00 08 */	lfs f2, 8(r1)
/* 802BE074 002BAFB4  38 A1 00 14 */	addi r5, r1, 0x14
/* 802BE078 002BAFB8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802BE07C 002BAFBC  38 80 00 00 */	li r4, 0
/* 802BE080 002BAFC0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802BE084 002BAFC4  38 C0 00 02 */	li r6, 2
/* 802BE088 002BAFC8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802BE08C 002BAFCC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802BE090 002BAFD0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802BE094 002BAFD4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802BE098 002BAFD8  4B F9 41 A5 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802BE09C 002BAFDC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802BE0A0 002BAFE0  38 A1 00 14 */	addi r5, r1, 0x14
/* 802BE0A4 002BAFE4  38 80 00 06 */	li r4, 6
/* 802BE0A8 002BAFE8  38 C0 00 02 */	li r6, 2
/* 802BE0AC 002BAFEC  4B F9 56 D5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802BE0B0 002BAFF0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802BE0B4 002BAFF4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802BE0B8 002BAFF8  7C 08 03 A6 */	mtlr r0
/* 802BE0BC 002BAFFC  38 21 00 30 */	addi r1, r1, 0x30
/* 802BE0C0 002BB000  4E 80 00 20 */	blr 

.global exec__Q34Game6Houdai9StateLandFPQ24Game9EnemyBase
exec__Q34Game6Houdai9StateLandFPQ24Game9EnemyBase:
/* 802BE0C4 002BB004  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802BE0C8 002BB008  7C 08 02 A6 */	mflr r0
/* 802BE0CC 002BB00C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802BE0D0 002BB010  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802BE0D4 002BB014  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802BE0D8 002BB018  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802BE0DC 002BB01C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802BE0E0 002BB020  7C 9F 23 78 */	mr r31, r4
/* 802BE0E4 002BB024  7C 7E 1B 78 */	mr r30, r3
/* 802BE0E8 002BB028  7F E3 FB 78 */	mr r3, r31
/* 802BE0EC 002BB02C  4B E4 92 4D */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 802BE0F0 002BB030  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BE0F4 002BB034  41 82 00 D4 */	beq lbl_802BE1C8
/* 802BE0F8 002BB038  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802BE0FC 002BB03C  7F E3 FB 78 */	mr r3, r31
/* 802BE100 002BB040  38 80 00 00 */	li r4, 0
/* 802BE104 002BB044  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 802BE108 002BB048  FC 20 F8 90 */	fmr f1, f31
/* 802BE10C 002BB04C  4B E5 69 B5 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 802BE110 002BB050  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BE114 002BB054  41 82 00 0C */	beq lbl_802BE120
/* 802BE118 002BB058  38 00 00 01 */	li r0, 1
/* 802BE11C 002BB05C  48 00 00 28 */	b lbl_802BE144
lbl_802BE120:
/* 802BE120 002BB060  FC 20 F8 90 */	fmr f1, f31
/* 802BE124 002BB064  7F E3 FB 78 */	mr r3, r31
/* 802BE128 002BB068  38 80 00 00 */	li r4, 0
/* 802BE12C 002BB06C  4B E5 66 09 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 802BE130 002BB070  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BE134 002BB074  41 82 00 0C */	beq lbl_802BE140
/* 802BE138 002BB078  38 00 00 01 */	li r0, 1
/* 802BE13C 002BB07C  48 00 00 08 */	b lbl_802BE144
lbl_802BE140:
/* 802BE140 002BB080  38 00 00 00 */	li r0, 0
lbl_802BE144:
/* 802BE144 002BB084  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 802BE148 002BB088  41 82 00 80 */	beq lbl_802BE1C8
/* 802BE14C 002BB08C  7F E3 FB 78 */	mr r3, r31
/* 802BE150 002BB090  4B E4 90 B5 */	bl startMotion__Q24Game9EnemyBaseFv
/* 802BE154 002BB094  7F E3 FB 78 */	mr r3, r31
/* 802BE158 002BB098  4B E4 38 75 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802BE15C 002BB09C  7F E3 FB 78 */	mr r3, r31
/* 802BE160 002BB0A0  48 00 49 CD */	bl createAppearEffect__Q34Game6Houdai3ObjFv
/* 802BE164 002BB0A4  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802BE168 002BB0A8  7F E4 FB 78 */	mr r4, r31
/* 802BE16C 002BB0AC  4B F8 3C 75 */	bl addJointShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802BE170 002BB0B0  7F E4 FB 78 */	mr r4, r31
/* 802BE174 002BB0B4  38 61 00 08 */	addi r3, r1, 8
/* 802BE178 002BB0B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BE17C 002BB0BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802BE180 002BB0C0  7D 89 03 A6 */	mtctr r12
/* 802BE184 002BB0C4  4E 80 04 21 */	bctrl 
/* 802BE188 002BB0C8  C0 41 00 08 */	lfs f2, 8(r1)
/* 802BE18C 002BB0CC  38 A1 00 14 */	addi r5, r1, 0x14
/* 802BE190 002BB0D0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802BE194 002BB0D4  38 80 00 00 */	li r4, 0
/* 802BE198 002BB0D8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802BE19C 002BB0DC  38 C0 00 02 */	li r6, 2
/* 802BE1A0 002BB0E0  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802BE1A4 002BB0E4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802BE1A8 002BB0E8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802BE1AC 002BB0EC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802BE1B0 002BB0F0  4B F9 40 8D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802BE1B4 002BB0F4  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802BE1B8 002BB0F8  38 A1 00 14 */	addi r5, r1, 0x14
/* 802BE1BC 002BB0FC  38 80 00 06 */	li r4, 6
/* 802BE1C0 002BB100  38 C0 00 02 */	li r6, 2
/* 802BE1C4 002BB104  4B F9 55 BD */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
lbl_802BE1C8:
/* 802BE1C8 002BB108  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802BE1CC 002BB10C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BE1D0 002BB110  28 00 00 00 */	cmplwi r0, 0
/* 802BE1D4 002BB114  41 82 01 C0 */	beq lbl_802BE394
/* 802BE1D8 002BB118  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BE1DC 002BB11C  28 00 00 02 */	cmplwi r0, 2
/* 802BE1E0 002BB120  40 82 00 2C */	bne lbl_802BE20C
/* 802BE1E4 002BB124  C0 22 E0 F4 */	lfs f1, lbl_8051C454@sda21(r2)
/* 802BE1E8 002BB128  7F E3 FB 78 */	mr r3, r31
/* 802BE1EC 002BB12C  C0 42 E0 F8 */	lfs f2, lbl_8051C458@sda21(r2)
/* 802BE1F0 002BB130  38 80 00 00 */	li r4, 0
/* 802BE1F4 002BB134  C0 62 E0 F0 */	lfs f3, lbl_8051C450@sda21(r2)
/* 802BE1F8 002BB138  C0 82 E0 FC */	lfs f4, lbl_8051C45C@sda21(r2)
/* 802BE1FC 002BB13C  4B E5 4F 21 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802BE200 002BB140  7F E3 FB 78 */	mr r3, r31
/* 802BE204 002BB144  48 00 4B 71 */	bl startChimneyEffect__Q34Game6Houdai3ObjFv
/* 802BE208 002BB148  48 00 01 8C */	b lbl_802BE394
lbl_802BE20C:
/* 802BE20C 002BB14C  28 00 00 03 */	cmplwi r0, 3
/* 802BE210 002BB150  40 82 00 10 */	bne lbl_802BE220
/* 802BE214 002BB154  7F E3 FB 78 */	mr r3, r31
/* 802BE218 002BB158  48 00 4B B9 */	bl finishChimneyEffect__Q34Game6Houdai3ObjFv
/* 802BE21C 002BB15C  48 00 01 78 */	b lbl_802BE394
lbl_802BE220:
/* 802BE220 002BB160  28 00 00 04 */	cmplwi r0, 4
/* 802BE224 002BB164  40 82 00 30 */	bne lbl_802BE254
/* 802BE228 002BB168  C0 22 E0 F4 */	lfs f1, lbl_8051C454@sda21(r2)
/* 802BE22C 002BB16C  7F E3 FB 78 */	mr r3, r31
/* 802BE230 002BB170  C0 42 E0 F8 */	lfs f2, lbl_8051C458@sda21(r2)
/* 802BE234 002BB174  38 80 00 00 */	li r4, 0
/* 802BE238 002BB178  C0 62 E0 F0 */	lfs f3, lbl_8051C450@sda21(r2)
/* 802BE23C 002BB17C  C0 82 E0 FC */	lfs f4, lbl_8051C45C@sda21(r2)
/* 802BE240 002BB180  4B E5 4E DD */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802BE244 002BB184  7F E3 FB 78 */	mr r3, r31
/* 802BE248 002BB188  38 80 00 00 */	li r4, 0
/* 802BE24C 002BB18C  48 00 4A 05 */	bl createAppearFootEffect__Q34Game6Houdai3ObjFi
/* 802BE250 002BB190  48 00 01 44 */	b lbl_802BE394
lbl_802BE254:
/* 802BE254 002BB194  28 00 00 05 */	cmplwi r0, 5
/* 802BE258 002BB198  40 82 00 4C */	bne lbl_802BE2A4
/* 802BE25C 002BB19C  C0 22 E0 F4 */	lfs f1, lbl_8051C454@sda21(r2)
/* 802BE260 002BB1A0  7F E3 FB 78 */	mr r3, r31
/* 802BE264 002BB1A4  C0 42 E0 F8 */	lfs f2, lbl_8051C458@sda21(r2)
/* 802BE268 002BB1A8  38 80 00 00 */	li r4, 0
/* 802BE26C 002BB1AC  C0 62 E0 F0 */	lfs f3, lbl_8051C450@sda21(r2)
/* 802BE270 002BB1B0  C0 82 E0 FC */	lfs f4, lbl_8051C45C@sda21(r2)
/* 802BE274 002BB1B4  4B E5 4E A9 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802BE278 002BB1B8  80 BF 02 80 */	lwz r5, 0x280(r31)
/* 802BE27C 002BB1BC  7F E3 FB 78 */	mr r3, r31
/* 802BE280 002BB1C0  38 80 00 00 */	li r4, 0
/* 802BE284 002BB1C4  48 00 40 55 */	bl createOnGroundEffect__Q34Game6Houdai3ObjFiPQ24Game8WaterBox
/* 802BE288 002BB1C8  7F E3 FB 78 */	mr r3, r31
/* 802BE28C 002BB1CC  38 80 00 02 */	li r4, 2
/* 802BE290 002BB1D0  48 00 49 C1 */	bl createAppearFootEffect__Q34Game6Houdai3ObjFi
/* 802BE294 002BB1D4  7F E3 FB 78 */	mr r3, r31
/* 802BE298 002BB1D8  38 80 00 01 */	li r4, 1
/* 802BE29C 002BB1DC  48 00 49 B5 */	bl createAppearFootEffect__Q34Game6Houdai3ObjFi
/* 802BE2A0 002BB1E0  48 00 00 F4 */	b lbl_802BE394
lbl_802BE2A4:
/* 802BE2A4 002BB1E4  28 00 00 06 */	cmplwi r0, 6
/* 802BE2A8 002BB1E8  40 82 00 38 */	bne lbl_802BE2E0
/* 802BE2AC 002BB1EC  C0 22 E0 F4 */	lfs f1, lbl_8051C454@sda21(r2)
/* 802BE2B0 002BB1F0  7F E3 FB 78 */	mr r3, r31
/* 802BE2B4 002BB1F4  C0 42 E0 F8 */	lfs f2, lbl_8051C458@sda21(r2)
/* 802BE2B8 002BB1F8  38 80 00 00 */	li r4, 0
/* 802BE2BC 002BB1FC  C0 62 E0 F0 */	lfs f3, lbl_8051C450@sda21(r2)
/* 802BE2C0 002BB200  C0 82 E0 FC */	lfs f4, lbl_8051C45C@sda21(r2)
/* 802BE2C4 002BB204  4B E5 4E 59 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802BE2C8 002BB208  7F E3 FB 78 */	mr r3, r31
/* 802BE2CC 002BB20C  48 00 49 51 */	bl createAppearHahenEffect__Q34Game6Houdai3ObjFv
/* 802BE2D0 002BB210  7F E3 FB 78 */	mr r3, r31
/* 802BE2D4 002BB214  38 80 00 03 */	li r4, 3
/* 802BE2D8 002BB218  48 00 49 79 */	bl createAppearFootEffect__Q34Game6Houdai3ObjFi
/* 802BE2DC 002BB21C  48 00 00 B8 */	b lbl_802BE394
lbl_802BE2E0:
/* 802BE2E0 002BB220  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BE2E4 002BB224  40 82 00 B0 */	bne lbl_802BE394
/* 802BE2E8 002BB228  C0 22 E0 F4 */	lfs f1, lbl_8051C454@sda21(r2)
/* 802BE2EC 002BB22C  7F E3 FB 78 */	mr r3, r31
/* 802BE2F0 002BB230  C0 42 E0 F8 */	lfs f2, lbl_8051C458@sda21(r2)
/* 802BE2F4 002BB234  38 80 00 00 */	li r4, 0
/* 802BE2F8 002BB238  C0 62 E0 F0 */	lfs f3, lbl_8051C450@sda21(r2)
/* 802BE2FC 002BB23C  C0 82 E0 FC */	lfs f4, lbl_8051C45C@sda21(r2)
/* 802BE300 002BB240  4B E5 4E 1D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802BE304 002BB244  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802BE308 002BB248  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE30C 002BB24C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BE310 002BB250  4C 40 13 82 */	cror 2, 0, 2
/* 802BE314 002BB254  40 82 00 28 */	bne lbl_802BE33C
/* 802BE318 002BB258  7F C3 F3 78 */	mr r3, r30
/* 802BE31C 002BB25C  7F E4 FB 78 */	mr r4, r31
/* 802BE320 002BB260  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BE324 002BB264  38 A0 00 00 */	li r5, 0
/* 802BE328 002BB268  38 C0 00 00 */	li r6, 0
/* 802BE32C 002BB26C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BE330 002BB270  7D 89 03 A6 */	mtctr r12
/* 802BE334 002BB274  4E 80 04 21 */	bctrl 
/* 802BE338 002BB278  48 00 00 5C */	b lbl_802BE394
lbl_802BE33C:
/* 802BE33C 002BB27C  7F E3 FB 78 */	mr r3, r31
/* 802BE340 002BB280  38 80 00 00 */	li r4, 0
/* 802BE344 002BB284  4B E5 63 15 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802BE348 002BB288  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BE34C 002BB28C  41 82 00 28 */	beq lbl_802BE374
/* 802BE350 002BB290  7F C3 F3 78 */	mr r3, r30
/* 802BE354 002BB294  7F E4 FB 78 */	mr r4, r31
/* 802BE358 002BB298  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BE35C 002BB29C  38 A0 00 04 */	li r5, 4
/* 802BE360 002BB2A0  38 C0 00 00 */	li r6, 0
/* 802BE364 002BB2A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BE368 002BB2A8  7D 89 03 A6 */	mtctr r12
/* 802BE36C 002BB2AC  4E 80 04 21 */	bctrl 
/* 802BE370 002BB2B0  48 00 00 24 */	b lbl_802BE394
lbl_802BE374:
/* 802BE374 002BB2B4  7F C3 F3 78 */	mr r3, r30
/* 802BE378 002BB2B8  7F E4 FB 78 */	mr r4, r31
/* 802BE37C 002BB2BC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BE380 002BB2C0  38 A0 00 03 */	li r5, 3
/* 802BE384 002BB2C4  38 C0 00 00 */	li r6, 0
/* 802BE388 002BB2C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BE38C 002BB2CC  7D 89 03 A6 */	mtctr r12
/* 802BE390 002BB2D0  4E 80 04 21 */	bctrl 
lbl_802BE394:
/* 802BE394 002BB2D4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802BE398 002BB2D8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802BE39C 002BB2DC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802BE3A0 002BB2E0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802BE3A4 002BB2E4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802BE3A8 002BB2E8  7C 08 03 A6 */	mtlr r0
/* 802BE3AC 002BB2EC  38 21 00 40 */	addi r1, r1, 0x40
/* 802BE3B0 002BB2F0  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Houdai9StateLandFPQ24Game9EnemyBase
cleanup__Q34Game6Houdai9StateLandFPQ24Game9EnemyBase:
/* 802BE3B4 002BB2F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BE3B8 002BB2F8  7C 08 02 A6 */	mflr r0
/* 802BE3BC 002BB2FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BE3C0 002BB300  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BE3C4 002BB304  7C 9F 23 78 */	mr r31, r4
/* 802BE3C8 002BB308  7F E3 FB 78 */	mr r3, r31
/* 802BE3CC 002BB30C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802BE3D0 002BB310  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802BE3D4 002BB314  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802BE3D8 002BB318  48 00 2A 69 */	bl startProgramedIK__Q34Game6Houdai3ObjFv
/* 802BE3DC 002BB31C  7F E3 FB 78 */	mr r3, r31
/* 802BE3E0 002BB320  38 80 00 01 */	li r4, 1
/* 802BE3E4 002BB324  48 00 48 A9 */	bl startSteamEffect__Q34Game6Houdai3ObjFb
/* 802BE3E8 002BB328  7F E3 FB 78 */	mr r3, r31
/* 802BE3EC 002BB32C  48 00 36 BD */	bl setBossAppearBGM__Q34Game6Houdai3ObjFv
/* 802BE3F0 002BB330  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BE3F4 002BB334  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BE3F8 002BB338  7C 08 03 A6 */	mtlr r0
/* 802BE3FC 002BB33C  38 21 00 10 */	addi r1, r1, 0x10
/* 802BE400 002BB340  4E 80 00 20 */	blr 

.global init__Q34Game6Houdai9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Houdai9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802BE404 002BB344  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802BE408 002BB348  7C 08 02 A6 */	mflr r0
/* 802BE40C 002BB34C  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE410 002BB350  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BE414 002BB354  38 00 FF FF */	li r0, -1
/* 802BE418 002BB358  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802BE41C 002BB35C  7C 9F 23 78 */	mr r31, r4
/* 802BE420 002BB360  90 04 02 D0 */	stw r0, 0x2d0(r4)
/* 802BE424 002BB364  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 802BE428 002BB368  4B E0 B1 79 */	bl rand
/* 802BE42C 002BB36C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802BE430 002BB370  3C 80 43 30 */	lis r4, 0x4330
/* 802BE434 002BB374  90 01 00 0C */	stw r0, 0xc(r1)
/* 802BE438 002BB378  38 00 00 00 */	li r0, 0
/* 802BE43C 002BB37C  C8 42 E1 08 */	lfd f2, lbl_8051C468@sda21(r2)
/* 802BE440 002BB380  7F E3 FB 78 */	mr r3, r31
/* 802BE444 002BB384  90 81 00 08 */	stw r4, 8(r1)
/* 802BE448 002BB388  38 80 00 02 */	li r4, 2
/* 802BE44C 002BB38C  C0 62 E1 00 */	lfs f3, lbl_8051C460@sda21(r2)
/* 802BE450 002BB390  38 A0 00 00 */	li r5, 0
/* 802BE454 002BB394  C8 01 00 08 */	lfd f0, 8(r1)
/* 802BE458 002BB398  C0 22 E1 04 */	lfs f1, lbl_8051C464@sda21(r2)
/* 802BE45C 002BB39C  EC 40 10 28 */	fsubs f2, f0, f2
/* 802BE460 002BB3A0  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE464 002BB3A4  EC 43 00 B2 */	fmuls f2, f3, f2
/* 802BE468 002BB3A8  EC 22 08 24 */	fdivs f1, f2, f1
/* 802BE46C 002BB3AC  EC 23 08 2A */	fadds f1, f3, f1
/* 802BE470 002BB3B0  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 802BE474 002BB3B4  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802BE478 002BB3B8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BE47C 002BB3BC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BE480 002BB3C0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BE484 002BB3C4  4B E4 6B 81 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BE488 002BB3C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BE48C 002BB3CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802BE490 002BB3D0  7C 08 03 A6 */	mtlr r0
/* 802BE494 002BB3D4  38 21 00 20 */	addi r1, r1, 0x20
/* 802BE498 002BB3D8  4E 80 00 20 */	blr 

.global exec__Q34Game6Houdai9StateWaitFPQ24Game9EnemyBase
exec__Q34Game6Houdai9StateWaitFPQ24Game9EnemyBase:
/* 802BE49C 002BB3DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BE4A0 002BB3E0  7C 08 02 A6 */	mflr r0
/* 802BE4A4 002BB3E4  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE4A8 002BB3E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BE4AC 002BB3EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BE4B0 002BB3F0  7C 9F 23 78 */	mr r31, r4
/* 802BE4B4 002BB3F4  93 C1 00 08 */	stw r30, 8(r1)
/* 802BE4B8 002BB3F8  7C 7E 1B 78 */	mr r30, r3
/* 802BE4BC 002BB3FC  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802BE4C0 002BB400  C0 44 02 C0 */	lfs f2, 0x2c0(r4)
/* 802BE4C4 002BB404  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 802BE4C8 002BB408  EC 22 08 2A */	fadds f1, f2, f1
/* 802BE4CC 002BB40C  D0 24 02 C0 */	stfs f1, 0x2c0(r4)
/* 802BE4D0 002BB410  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802BE4D4 002BB414  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BE4D8 002BB418  4C 40 13 82 */	cror 2, 0, 2
/* 802BE4DC 002BB41C  40 82 00 18 */	bne lbl_802BE4F4
/* 802BE4E0 002BB420  38 00 00 00 */	li r0, 0
/* 802BE4E4 002BB424  7F E3 FB 78 */	mr r3, r31
/* 802BE4E8 002BB428  90 1F 02 D0 */	stw r0, 0x2d0(r31)
/* 802BE4EC 002BB42C  4B E4 6D B5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802BE4F0 002BB430  48 00 00 70 */	b lbl_802BE560
lbl_802BE4F4:
/* 802BE4F4 002BB434  7F E3 FB 78 */	mr r3, r31
/* 802BE4F8 002BB438  38 80 00 00 */	li r4, 0
/* 802BE4FC 002BB43C  4B E5 61 5D */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802BE500 002BB440  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BE504 002BB444  41 82 00 18 */	beq lbl_802BE51C
/* 802BE508 002BB448  38 00 00 04 */	li r0, 4
/* 802BE50C 002BB44C  7F E3 FB 78 */	mr r3, r31
/* 802BE510 002BB450  90 1F 02 D0 */	stw r0, 0x2d0(r31)
/* 802BE514 002BB454  4B E4 6D 8D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802BE518 002BB458  48 00 00 48 */	b lbl_802BE560
lbl_802BE51C:
/* 802BE51C 002BB45C  7F E3 FB 78 */	mr r3, r31
/* 802BE520 002BB460  48 00 2C 3D */	bl isTransitShotGunState__Q34Game6Houdai3ObjFv
/* 802BE524 002BB464  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BE528 002BB468  41 82 00 18 */	beq lbl_802BE540
/* 802BE52C 002BB46C  38 00 00 06 */	li r0, 6
/* 802BE530 002BB470  7F E3 FB 78 */	mr r3, r31
/* 802BE534 002BB474  90 1F 02 D0 */	stw r0, 0x2d0(r31)
/* 802BE538 002BB478  4B E4 6D 69 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802BE53C 002BB47C  48 00 00 24 */	b lbl_802BE560
lbl_802BE540:
/* 802BE540 002BB480  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802BE544 002BB484  C0 1F 02 C4 */	lfs f0, 0x2c4(r31)
/* 802BE548 002BB488  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BE54C 002BB48C  40 81 00 14 */	ble lbl_802BE560
/* 802BE550 002BB490  38 00 00 05 */	li r0, 5
/* 802BE554 002BB494  7F E3 FB 78 */	mr r3, r31
/* 802BE558 002BB498  90 1F 02 D0 */	stw r0, 0x2d0(r31)
/* 802BE55C 002BB49C  4B E4 6D 45 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802BE560:
/* 802BE560 002BB4A0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802BE564 002BB4A4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BE568 002BB4A8  28 00 00 00 */	cmplwi r0, 0
/* 802BE56C 002BB4AC  41 82 00 30 */	beq lbl_802BE59C
/* 802BE570 002BB4B0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BE574 002BB4B4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BE578 002BB4B8  40 82 00 24 */	bne lbl_802BE59C
/* 802BE57C 002BB4BC  7F C3 F3 78 */	mr r3, r30
/* 802BE580 002BB4C0  7F E4 FB 78 */	mr r4, r31
/* 802BE584 002BB4C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BE588 002BB4C8  38 C0 00 00 */	li r6, 0
/* 802BE58C 002BB4CC  80 BF 02 D0 */	lwz r5, 0x2d0(r31)
/* 802BE590 002BB4D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BE594 002BB4D4  7D 89 03 A6 */	mtctr r12
/* 802BE598 002BB4D8  4E 80 04 21 */	bctrl 
lbl_802BE59C:
/* 802BE59C 002BB4DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BE5A0 002BB4E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BE5A4 002BB4E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BE5A8 002BB4E8  7C 08 03 A6 */	mtlr r0
/* 802BE5AC 002BB4EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802BE5B0 002BB4F0  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Houdai9StateWaitFPQ24Game9EnemyBase
cleanup__Q34Game6Houdai9StateWaitFPQ24Game9EnemyBase:
/* 802BE5B4 002BB4F4  4E 80 00 20 */	blr 

.global init__Q34Game6Houdai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Houdai10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802BE5B8 002BB4F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BE5BC 002BB4FC  7C 08 02 A6 */	mflr r0
/* 802BE5C0 002BB500  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE5C4 002BB504  38 A0 00 00 */	li r5, 0
/* 802BE5C8 002BB508  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BE5CC 002BB50C  38 00 FF FF */	li r0, -1
/* 802BE5D0 002BB510  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BE5D4 002BB514  7C 9F 23 78 */	mr r31, r4
/* 802BE5D8 002BB518  7F E3 FB 78 */	mr r3, r31
/* 802BE5DC 002BB51C  90 04 02 D0 */	stw r0, 0x2d0(r4)
/* 802BE5E0 002BB520  38 00 00 00 */	li r0, 0
/* 802BE5E4 002BB524  38 80 00 03 */	li r4, 3
/* 802BE5E8 002BB528  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802BE5EC 002BB52C  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802BE5F0 002BB530  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BE5F4 002BB534  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BE5F8 002BB538  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BE5FC 002BB53C  4B E4 6A 09 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BE600 002BB540  7F E3 FB 78 */	mr r3, r31
/* 802BE604 002BB544  48 00 28 F1 */	bl startBlendMotion__Q34Game6Houdai3ObjFv
/* 802BE608 002BB548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BE60C 002BB54C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BE610 002BB550  7C 08 03 A6 */	mtlr r0
/* 802BE614 002BB554  38 21 00 10 */	addi r1, r1, 0x10
/* 802BE618 002BB558  4E 80 00 20 */	blr 

.global exec__Q34Game6Houdai10StateFlickFPQ24Game9EnemyBase
exec__Q34Game6Houdai10StateFlickFPQ24Game9EnemyBase:
/* 802BE61C 002BB55C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BE620 002BB560  7C 08 02 A6 */	mflr r0
/* 802BE624 002BB564  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BE628 002BB568  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BE62C 002BB56C  7C 9F 23 78 */	mr r31, r4
/* 802BE630 002BB570  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802BE634 002BB574  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802BE638 002BB578  28 00 00 00 */	cmplwi r0, 0
/* 802BE63C 002BB57C  41 82 00 BC */	beq lbl_802BE6F8
/* 802BE640 002BB580  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802BE644 002BB584  28 00 00 02 */	cmplwi r0, 2
/* 802BE648 002BB588  40 82 00 10 */	bne lbl_802BE658
/* 802BE64C 002BB58C  7F E3 FB 78 */	mr r3, r31
/* 802BE650 002BB590  48 00 47 25 */	bl startChimneyEffect__Q34Game6Houdai3ObjFv
/* 802BE654 002BB594  48 00 00 A4 */	b lbl_802BE6F8
lbl_802BE658:
/* 802BE658 002BB598  28 00 00 03 */	cmplwi r0, 3
/* 802BE65C 002BB59C  40 82 00 38 */	bne lbl_802BE694
/* 802BE660 002BB5A0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802BE664 002BB5A4  7F E3 FB 78 */	mr r3, r31
/* 802BE668 002BB5A8  C0 82 E0 FC */	lfs f4, lbl_8051C45C@sda21(r2)
/* 802BE66C 002BB5AC  38 80 00 00 */	li r4, 0
/* 802BE670 002BB5B0  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802BE674 002BB5B4  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802BE678 002BB5B8  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802BE67C 002BB5BC  4B E5 4A A1 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802BE680 002BB5C0  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE684 002BB5C4  7F E3 FB 78 */	mr r3, r31
/* 802BE688 002BB5C8  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802BE68C 002BB5CC  48 00 31 9D */	bl startBossFlickBGM__Q34Game6Houdai3ObjFv
/* 802BE690 002BB5D0  48 00 00 68 */	b lbl_802BE6F8
lbl_802BE694:
/* 802BE694 002BB5D4  28 00 00 04 */	cmplwi r0, 4
/* 802BE698 002BB5D8  40 82 00 10 */	bne lbl_802BE6A8
/* 802BE69C 002BB5DC  7F E3 FB 78 */	mr r3, r31
/* 802BE6A0 002BB5E0  48 00 47 31 */	bl finishChimneyEffect__Q34Game6Houdai3ObjFv
/* 802BE6A4 002BB5E4  48 00 00 54 */	b lbl_802BE6F8
lbl_802BE6A8:
/* 802BE6A8 002BB5E8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BE6AC 002BB5EC  40 82 00 4C */	bne lbl_802BE6F8
/* 802BE6B0 002BB5F0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802BE6B4 002BB5F4  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE6B8 002BB5F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BE6BC 002BB5FC  4C 40 13 82 */	cror 2, 0, 2
/* 802BE6C0 002BB600  40 82 00 20 */	bne lbl_802BE6E0
/* 802BE6C4 002BB604  81 83 00 00 */	lwz r12, 0(r3)
/* 802BE6C8 002BB608  38 A0 00 00 */	li r5, 0
/* 802BE6CC 002BB60C  38 C0 00 00 */	li r6, 0
/* 802BE6D0 002BB610  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BE6D4 002BB614  7D 89 03 A6 */	mtctr r12
/* 802BE6D8 002BB618  4E 80 04 21 */	bctrl 
/* 802BE6DC 002BB61C  48 00 00 1C */	b lbl_802BE6F8
lbl_802BE6E0:
/* 802BE6E0 002BB620  81 83 00 00 */	lwz r12, 0(r3)
/* 802BE6E4 002BB624  38 A0 00 06 */	li r5, 6
/* 802BE6E8 002BB628  38 C0 00 00 */	li r6, 0
/* 802BE6EC 002BB62C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BE6F0 002BB630  7D 89 03 A6 */	mtctr r12
/* 802BE6F4 002BB634  4E 80 04 21 */	bctrl 
lbl_802BE6F8:
/* 802BE6F8 002BB638  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BE6FC 002BB63C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BE700 002BB640  7C 08 03 A6 */	mtlr r0
/* 802BE704 002BB644  38 21 00 10 */	addi r1, r1, 0x10
/* 802BE708 002BB648  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Houdai10StateFlickFPQ24Game9EnemyBase
cleanup__Q34Game6Houdai10StateFlickFPQ24Game9EnemyBase:
/* 802BE70C 002BB64C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BE710 002BB650  7C 08 02 A6 */	mflr r0
/* 802BE714 002BB654  7C 83 23 78 */	mr r3, r4
/* 802BE718 002BB658  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BE71C 002BB65C  48 00 27 FD */	bl finishBlendMotion__Q34Game6Houdai3ObjFv
/* 802BE720 002BB660  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BE724 002BB664  7C 08 03 A6 */	mtlr r0
/* 802BE728 002BB668  38 21 00 10 */	addi r1, r1, 0x10
/* 802BE72C 002BB66C  4E 80 00 20 */	blr 

.global init__Q34Game6Houdai9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Houdai9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802BE730 002BB670  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802BE734 002BB674  7C 08 02 A6 */	mflr r0
/* 802BE738 002BB678  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE73C 002BB67C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802BE740 002BB680  38 00 FF FF */	li r0, -1
/* 802BE744 002BB684  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802BE748 002BB688  7C 9F 23 78 */	mr r31, r4
/* 802BE74C 002BB68C  90 04 02 D0 */	stw r0, 0x2d0(r4)
/* 802BE750 002BB690  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 802BE754 002BB694  4B E0 AE 4D */	bl rand
/* 802BE758 002BB698  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802BE75C 002BB69C  3C 80 43 30 */	lis r4, 0x4330
/* 802BE760 002BB6A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 802BE764 002BB6A4  38 00 00 00 */	li r0, 0
/* 802BE768 002BB6A8  C8 42 E1 08 */	lfd f2, lbl_8051C468@sda21(r2)
/* 802BE76C 002BB6AC  7F E3 FB 78 */	mr r3, r31
/* 802BE770 002BB6B0  90 81 00 08 */	stw r4, 8(r1)
/* 802BE774 002BB6B4  C0 62 E1 10 */	lfs f3, lbl_8051C470@sda21(r2)
/* 802BE778 002BB6B8  C8 01 00 08 */	lfd f0, 8(r1)
/* 802BE77C 002BB6BC  C0 22 E1 04 */	lfs f1, lbl_8051C464@sda21(r2)
/* 802BE780 002BB6C0  EC 40 10 28 */	fsubs f2, f0, f2
/* 802BE784 002BB6C4  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE788 002BB6C8  EC 43 00 B2 */	fmuls f2, f3, f2
/* 802BE78C 002BB6CC  EC 22 08 24 */	fdivs f1, f2, f1
/* 802BE790 002BB6D0  EC 23 08 2A */	fadds f1, f3, f1
/* 802BE794 002BB6D4  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 802BE798 002BB6D8  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802BE79C 002BB6DC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BE7A0 002BB6E0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BE7A4 002BB6E4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BE7A8 002BB6E8  48 00 26 BD */	bl startIKMotion__Q34Game6Houdai3ObjFv
/* 802BE7AC 002BB6EC  7F E3 FB 78 */	mr r3, r31
/* 802BE7B0 002BB6F0  48 00 1E 01 */	bl getTargetPosition__Q34Game6Houdai3ObjFv
/* 802BE7B4 002BB6F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802BE7B8 002BB6F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802BE7BC 002BB6FC  7C 08 03 A6 */	mtlr r0
/* 802BE7C0 002BB700  38 21 00 20 */	addi r1, r1, 0x20
/* 802BE7C4 002BB704  4E 80 00 20 */	blr 

.global exec__Q34Game6Houdai9StateWalkFPQ24Game9EnemyBase
exec__Q34Game6Houdai9StateWalkFPQ24Game9EnemyBase:
/* 802BE7C8 002BB708  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BE7CC 002BB70C  7C 08 02 A6 */	mflr r0
/* 802BE7D0 002BB710  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BE7D4 002BB714  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BE7D8 002BB718  7C 9F 23 78 */	mr r31, r4
/* 802BE7DC 002BB71C  93 C1 00 08 */	stw r30, 8(r1)
/* 802BE7E0 002BB720  7C 7E 1B 78 */	mr r30, r3
/* 802BE7E4 002BB724  7F E3 FB 78 */	mr r3, r31
/* 802BE7E8 002BB728  48 00 1D C9 */	bl getTargetPosition__Q34Game6Houdai3ObjFv
/* 802BE7EC 002BB72C  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802BE7F0 002BB730  7F E3 FB 78 */	mr r3, r31
/* 802BE7F4 002BB734  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802BE7F8 002BB738  38 80 00 00 */	li r4, 0
/* 802BE7FC 002BB73C  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 802BE800 002BB740  EC 01 00 2A */	fadds f0, f1, f0
/* 802BE804 002BB744  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802BE808 002BB748  4B E5 5E 51 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802BE80C 002BB74C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BE810 002BB750  41 82 00 18 */	beq lbl_802BE828
/* 802BE814 002BB754  38 00 00 04 */	li r0, 4
/* 802BE818 002BB758  7F E3 FB 78 */	mr r3, r31
/* 802BE81C 002BB75C  90 1F 02 D0 */	stw r0, 0x2d0(r31)
/* 802BE820 002BB760  48 00 26 69 */	bl finishIKMotion__Q34Game6Houdai3ObjFv
/* 802BE824 002BB764  48 00 00 24 */	b lbl_802BE848
lbl_802BE828:
/* 802BE828 002BB768  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802BE82C 002BB76C  C0 1F 02 C4 */	lfs f0, 0x2c4(r31)
/* 802BE830 002BB770  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BE834 002BB774  40 81 00 14 */	ble lbl_802BE848
/* 802BE838 002BB778  38 00 00 03 */	li r0, 3
/* 802BE83C 002BB77C  7F E3 FB 78 */	mr r3, r31
/* 802BE840 002BB780  90 1F 02 D0 */	stw r0, 0x2d0(r31)
/* 802BE844 002BB784  48 00 26 45 */	bl finishIKMotion__Q34Game6Houdai3ObjFv
lbl_802BE848:
/* 802BE848 002BB788  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802BE84C 002BB78C  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE850 002BB790  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BE854 002BB794  4C 40 13 82 */	cror 2, 0, 2
/* 802BE858 002BB798  40 82 00 28 */	bne lbl_802BE880
/* 802BE85C 002BB79C  7F C3 F3 78 */	mr r3, r30
/* 802BE860 002BB7A0  7F E4 FB 78 */	mr r4, r31
/* 802BE864 002BB7A4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BE868 002BB7A8  38 A0 00 00 */	li r5, 0
/* 802BE86C 002BB7AC  38 C0 00 00 */	li r6, 0
/* 802BE870 002BB7B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BE874 002BB7B4  7D 89 03 A6 */	mtctr r12
/* 802BE878 002BB7B8  4E 80 04 21 */	bctrl 
/* 802BE87C 002BB7BC  48 00 00 34 */	b lbl_802BE8B0
lbl_802BE880:
/* 802BE880 002BB7C0  7F E3 FB 78 */	mr r3, r31
/* 802BE884 002BB7C4  48 00 26 4D */	bl isFinishIKMotion__Q34Game6Houdai3ObjFv
/* 802BE888 002BB7C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BE88C 002BB7CC  41 82 00 24 */	beq lbl_802BE8B0
/* 802BE890 002BB7D0  7F C3 F3 78 */	mr r3, r30
/* 802BE894 002BB7D4  7F E4 FB 78 */	mr r4, r31
/* 802BE898 002BB7D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BE89C 002BB7DC  38 C0 00 00 */	li r6, 0
/* 802BE8A0 002BB7E0  80 BF 02 D0 */	lwz r5, 0x2d0(r31)
/* 802BE8A4 002BB7E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BE8A8 002BB7E8  7D 89 03 A6 */	mtctr r12
/* 802BE8AC 002BB7EC  4E 80 04 21 */	bctrl 
lbl_802BE8B0:
/* 802BE8B0 002BB7F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BE8B4 002BB7F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BE8B8 002BB7F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BE8BC 002BB7FC  7C 08 03 A6 */	mtlr r0
/* 802BE8C0 002BB800  38 21 00 10 */	addi r1, r1, 0x10
/* 802BE8C4 002BB804  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Houdai9StateWalkFPQ24Game9EnemyBase
cleanup__Q34Game6Houdai9StateWalkFPQ24Game9EnemyBase:
/* 802BE8C8 002BB808  4E 80 00 20 */	blr 

.global init__Q34Game6Houdai9StateShotFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Houdai9StateShotFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802BE8CC 002BB80C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BE8D0 002BB810  7C 08 02 A6 */	mflr r0
/* 802BE8D4 002BB814  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE8D8 002BB818  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BE8DC 002BB81C  38 00 FF FF */	li r0, -1
/* 802BE8E0 002BB820  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BE8E4 002BB824  7C 9F 23 78 */	mr r31, r4
/* 802BE8E8 002BB828  7F E3 FB 78 */	mr r3, r31
/* 802BE8EC 002BB82C  90 04 02 D0 */	stw r0, 0x2d0(r4)
/* 802BE8F0 002BB830  D0 04 02 C0 */	stfs f0, 0x2c0(r4)
/* 802BE8F4 002BB834  48 00 1B F5 */	bl setTargetPattern__Q34Game6Houdai3ObjFv
/* 802BE8F8 002BB838  38 00 00 00 */	li r0, 0
/* 802BE8FC 002BB83C  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BE900 002BB840  98 1F 02 ED */	stb r0, 0x2ed(r31)
/* 802BE904 002BB844  7F E3 FB 78 */	mr r3, r31
/* 802BE908 002BB848  38 80 00 04 */	li r4, 4
/* 802BE90C 002BB84C  38 A0 00 00 */	li r5, 0
/* 802BE910 002BB850  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802BE914 002BB854  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802BE918 002BB858  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802BE91C 002BB85C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802BE920 002BB860  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802BE924 002BB864  4B E4 66 E1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802BE928 002BB868  7F E3 FB 78 */	mr r3, r31
/* 802BE92C 002BB86C  48 00 25 C9 */	bl startBlendMotion__Q34Game6Houdai3ObjFv
/* 802BE930 002BB870  7F E3 FB 78 */	mr r3, r31
/* 802BE934 002BB874  48 00 44 F5 */	bl createShotGunOpenEffect__Q34Game6Houdai3ObjFv
/* 802BE938 002BB878  38 00 00 00 */	li r0, 0
/* 802BE93C 002BB87C  7F E3 FB 78 */	mr r3, r31
/* 802BE940 002BB880  98 1F 02 EF */	stb r0, 0x2ef(r31)
/* 802BE944 002BB884  48 00 2A C1 */	bl startBossChargeBGM__Q34Game6Houdai3ObjFv
/* 802BE948 002BB888  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BE94C 002BB88C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BE950 002BB890  7C 08 03 A6 */	mtlr r0
/* 802BE954 002BB894  38 21 00 10 */	addi r1, r1, 0x10
/* 802BE958 002BB898  4E 80 00 20 */	blr 

.global exec__Q34Game6Houdai9StateShotFPQ24Game9EnemyBase
exec__Q34Game6Houdai9StateShotFPQ24Game9EnemyBase:
/* 802BE95C 002BB89C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BE960 002BB8A0  7C 08 02 A6 */	mflr r0
/* 802BE964 002BB8A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BE968 002BB8A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BE96C 002BB8AC  7C 9F 23 78 */	mr r31, r4
/* 802BE970 002BB8B0  93 C1 00 08 */	stw r30, 8(r1)
/* 802BE974 002BB8B4  7C 7E 1B 78 */	mr r30, r3
/* 802BE978 002BB8B8  7F E3 FB 78 */	mr r3, r31
/* 802BE97C 002BB8BC  4B E4 89 BD */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 802BE980 002BB8C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BE984 002BB8C4  41 82 01 60 */	beq lbl_802BEAE4
/* 802BE988 002BB8C8  88 1F 02 ED */	lbz r0, 0x2ed(r31)
/* 802BE98C 002BB8CC  28 00 00 00 */	cmplwi r0, 0
/* 802BE990 002BB8D0  41 82 00 68 */	beq lbl_802BE9F8
/* 802BE994 002BB8D4  7F E3 FB 78 */	mr r3, r31
/* 802BE998 002BB8D8  4B E4 89 69 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802BE99C 002BB8DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BE9A0 002BB8E0  40 82 00 18 */	bne lbl_802BE9B8
/* 802BE9A4 002BB8E4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802BE9A8 002BB8E8  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802BE9AC 002BB8EC  C0 03 09 5C */	lfs f0, 0x95c(r3)
/* 802BE9B0 002BB8F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BE9B4 002BB8F4  40 81 00 14 */	ble lbl_802BE9C8
lbl_802BE9B8:
/* 802BE9B8 002BB8F8  7F E3 FB 78 */	mr r3, r31
/* 802BE9BC 002BB8FC  48 00 26 81 */	bl setShotGunEmitKeepTimerOn__Q34Game6Houdai3ObjFv
/* 802BE9C0 002BB900  7F E3 FB 78 */	mr r3, r31
/* 802BE9C4 002BB904  4B E4 88 41 */	bl startMotion__Q24Game9EnemyBaseFv
lbl_802BE9C8:
/* 802BE9C8 002BB908  7F E3 FB 78 */	mr r3, r31
/* 802BE9CC 002BB90C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BE9D0 002BB910  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802BE9D4 002BB914  7D 89 03 A6 */	mtctr r12
/* 802BE9D8 002BB918  4E 80 04 21 */	bctrl 
/* 802BE9DC 002BB91C  81 83 00 00 */	lwz r12, 0(r3)
/* 802BE9E0 002BB920  38 80 51 39 */	li r4, 0x5139
/* 802BE9E4 002BB924  38 A0 00 00 */	li r5, 0
/* 802BE9E8 002BB928  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802BE9EC 002BB92C  7D 89 03 A6 */	mtctr r12
/* 802BE9F0 002BB930  4E 80 04 21 */	bctrl 
/* 802BE9F4 002BB934  48 00 00 F0 */	b lbl_802BEAE4
lbl_802BE9F8:
/* 802BE9F8 002BB938  7F E3 FB 78 */	mr r3, r31
/* 802BE9FC 002BB93C  48 00 29 2D */	bl isFinishShotGun__Q34Game6Houdai3ObjFv
/* 802BEA00 002BB940  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BEA04 002BB944  41 82 00 70 */	beq lbl_802BEA74
/* 802BEA08 002BB948  7F E3 FB 78 */	mr r3, r31
/* 802BEA0C 002BB94C  48 00 28 F9 */	bl isShotGunLockOn__Q34Game6Houdai3ObjFv
/* 802BEA10 002BB950  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BEA14 002BB954  41 82 00 30 */	beq lbl_802BEA44
/* 802BEA18 002BB958  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802BEA1C 002BB95C  C0 02 E1 14 */	lfs f0, lbl_8051C474@sda21(r2)
/* 802BEA20 002BB960  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BEA24 002BB964  40 81 00 C0 */	ble lbl_802BEAE4
/* 802BEA28 002BB968  38 00 00 00 */	li r0, 0
/* 802BEA2C 002BB96C  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BEA30 002BB970  98 1F 02 ED */	stb r0, 0x2ed(r31)
/* 802BEA34 002BB974  7F E3 FB 78 */	mr r3, r31
/* 802BEA38 002BB978  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802BEA3C 002BB97C  4B E4 87 C9 */	bl startMotion__Q24Game9EnemyBaseFv
/* 802BEA40 002BB980  48 00 00 A4 */	b lbl_802BEAE4
lbl_802BEA44:
/* 802BEA44 002BB984  7F E3 FB 78 */	mr r3, r31
/* 802BEA48 002BB988  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BEA4C 002BB98C  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802BEA50 002BB990  7D 89 03 A6 */	mtctr r12
/* 802BEA54 002BB994  4E 80 04 21 */	bctrl 
/* 802BEA58 002BB998  81 83 00 00 */	lwz r12, 0(r3)
/* 802BEA5C 002BB99C  38 80 51 39 */	li r4, 0x5139
/* 802BEA60 002BB9A0  38 A0 00 00 */	li r5, 0
/* 802BEA64 002BB9A4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802BEA68 002BB9A8  7D 89 03 A6 */	mtctr r12
/* 802BEA6C 002BB9AC  4E 80 04 21 */	bctrl 
/* 802BEA70 002BB9B0  48 00 00 74 */	b lbl_802BEAE4
lbl_802BEA74:
/* 802BEA74 002BB9B4  7F E3 FB 78 */	mr r3, r31
/* 802BEA78 002BB9B8  48 00 28 8D */	bl isShotGunLockOn__Q34Game6Houdai3ObjFv
/* 802BEA7C 002BB9BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BEA80 002BB9C0  41 82 00 38 */	beq lbl_802BEAB8
/* 802BEA84 002BB9C4  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802BEA88 002BB9C8  C0 02 E1 14 */	lfs f0, lbl_8051C474@sda21(r2)
/* 802BEA8C 002BB9CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BEA90 002BB9D0  40 81 00 28 */	ble lbl_802BEAB8
/* 802BEA94 002BB9D4  38 00 00 01 */	li r0, 1
/* 802BEA98 002BB9D8  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BEA9C 002BB9DC  98 1F 02 ED */	stb r0, 0x2ed(r31)
/* 802BEAA0 002BB9E0  7F E3 FB 78 */	mr r3, r31
/* 802BEAA4 002BB9E4  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802BEAA8 002BB9E8  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802BEAAC 002BB9EC  4B E4 87 59 */	bl startMotion__Q24Game9EnemyBaseFv
/* 802BEAB0 002BB9F0  7F E3 FB 78 */	mr r3, r31
/* 802BEAB4 002BB9F4  48 00 2A 19 */	bl startBossAttackLoopBGM__Q34Game6Houdai3ObjFv
lbl_802BEAB8:
/* 802BEAB8 002BB9F8  7F E3 FB 78 */	mr r3, r31
/* 802BEABC 002BB9FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802BEAC0 002BBA00  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802BEAC4 002BBA04  7D 89 03 A6 */	mtctr r12
/* 802BEAC8 002BBA08  4E 80 04 21 */	bctrl 
/* 802BEACC 002BBA0C  81 83 00 00 */	lwz r12, 0(r3)
/* 802BEAD0 002BBA10  38 80 51 39 */	li r4, 0x5139
/* 802BEAD4 002BBA14  38 A0 00 00 */	li r5, 0
/* 802BEAD8 002BBA18  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802BEADC 002BBA1C  7D 89 03 A6 */	mtctr r12
/* 802BEAE0 002BBA20  4E 80 04 21 */	bctrl 
lbl_802BEAE4:
/* 802BEAE4 002BBA24  7F E3 FB 78 */	mr r3, r31
/* 802BEAE8 002BBA28  48 00 27 F9 */	bl isShotGunRotation__Q34Game6Houdai3ObjFv
/* 802BEAEC 002BBA2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BEAF0 002BBA30  41 82 00 30 */	beq lbl_802BEB20
/* 802BEAF4 002BBA34  7F E3 FB 78 */	mr r3, r31
/* 802BEAF8 002BBA38  48 00 1D 51 */	bl setShotGunTargetPosition__Q34Game6Houdai3ObjFv
/* 802BEAFC 002BBA3C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802BEB00 002BBA40  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802BEB04 002BBA44  C0 03 04 9C */	lfs f0, 0x49c(r3)
/* 802BEB08 002BBA48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BEB0C 002BBA4C  40 81 00 14 */	ble lbl_802BEB20
/* 802BEB10 002BBA50  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BEB14 002BBA54  7F E3 FB 78 */	mr r3, r31
/* 802BEB18 002BBA58  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802BEB1C 002BBA5C  4B E4 67 85 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802BEB20:
/* 802BEB20 002BBA60  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802BEB24 002BBA64  C0 5F 02 CC */	lfs f2, 0x2cc(r31)
/* 802BEB28 002BBA68  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802BEB2C 002BBA6C  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BEB30 002BBA70  EC 22 08 2A */	fadds f1, f2, f1
/* 802BEB34 002BBA74  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 802BEB38 002BBA78  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802BEB3C 002BBA7C  C0 5F 02 C0 */	lfs f2, 0x2c0(r31)
/* 802BEB40 002BBA80  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 802BEB44 002BBA84  EC 22 08 2A */	fadds f1, f2, f1
/* 802BEB48 002BBA88  D0 3F 02 C0 */	stfs f1, 0x2c0(r31)
/* 802BEB4C 002BBA8C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802BEB50 002BBA90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BEB54 002BBA94  4C 40 13 82 */	cror 2, 0, 2
/* 802BEB58 002BBA98  40 82 00 2C */	bne lbl_802BEB84
/* 802BEB5C 002BBA9C  7F E3 FB 78 */	mr r3, r31
/* 802BEB60 002BBAA0  4B E4 87 D9 */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 802BEB64 002BBAA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BEB68 002BBAA8  41 82 00 0C */	beq lbl_802BEB74
/* 802BEB6C 002BBAAC  7F E3 FB 78 */	mr r3, r31
/* 802BEB70 002BBAB0  4B E4 86 95 */	bl startMotion__Q24Game9EnemyBaseFv
lbl_802BEB74:
/* 802BEB74 002BBAB4  7F E3 FB 78 */	mr r3, r31
/* 802BEB78 002BBAB8  48 00 2A 31 */	bl finishBossAttackLoopBGM__Q34Game6Houdai3ObjFv
/* 802BEB7C 002BBABC  7F E3 FB 78 */	mr r3, r31
/* 802BEB80 002BBAC0  4B E4 67 21 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802BEB84:
/* 802BEB84 002BBAC4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802BEB88 002BBAC8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802BEB8C 002BBACC  28 00 00 00 */	cmplwi r0, 0
/* 802BEB90 002BBAD0  41 82 01 64 */	beq lbl_802BECF4
/* 802BEB94 002BBAD4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802BEB98 002BBAD8  28 00 00 02 */	cmplwi r0, 2
/* 802BEB9C 002BBADC  40 82 00 20 */	bne lbl_802BEBBC
/* 802BEBA0 002BBAE0  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BEBA4 002BBAE4  7F E3 FB 78 */	mr r3, r31
/* 802BEBA8 002BBAE8  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802BEBAC 002BBAEC  4B E4 87 35 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802BEBB0 002BBAF0  7F E3 FB 78 */	mr r3, r31
/* 802BEBB4 002BBAF4  48 00 26 E5 */	bl startShotGunRotation__Q34Game6Houdai3ObjFv
/* 802BEBB8 002BBAF8  48 00 01 3C */	b lbl_802BECF4
lbl_802BEBBC:
/* 802BEBBC 002BBAFC  28 00 00 03 */	cmplwi r0, 3
/* 802BEBC0 002BBB00  40 82 00 48 */	bne lbl_802BEC08
/* 802BEBC4 002BBB04  7F E3 FB 78 */	mr r3, r31
/* 802BEBC8 002BBB08  4B E4 87 39 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802BEBCC 002BBB0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BEBD0 002BBB10  40 82 01 24 */	bne lbl_802BECF4
/* 802BEBD4 002BBB14  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802BEBD8 002BBB18  7F E3 FB 78 */	mr r3, r31
/* 802BEBDC 002BBB1C  C0 82 E0 FC */	lfs f4, lbl_8051C45C@sda21(r2)
/* 802BEBE0 002BBB20  38 80 00 00 */	li r4, 0
/* 802BEBE4 002BBB24  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802BEBE8 002BBB28  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802BEBEC 002BBB2C  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802BEBF0 002BBB30  4B E5 45 2D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802BEBF4 002BBB34  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BEBF8 002BBB38  7F E3 FB 78 */	mr r3, r31
/* 802BEBFC 002BBB3C  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802BEC00 002BBB40  48 00 27 4D */	bl emitShotGun__Q34Game6Houdai3ObjFv
/* 802BEC04 002BBB44  48 00 00 F0 */	b lbl_802BECF4
lbl_802BEC08:
/* 802BEC08 002BBB48  28 00 00 04 */	cmplwi r0, 4
/* 802BEC0C 002BBB4C  40 82 00 54 */	bne lbl_802BEC60
/* 802BEC10 002BBB50  7F E3 FB 78 */	mr r3, r31
/* 802BEC14 002BBB54  4B E4 86 ED */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802BEC18 002BBB58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802BEC1C 002BBB5C  40 82 00 D8 */	bne lbl_802BECF4
/* 802BEC20 002BBB60  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802BEC24 002BBB64  C0 3F 02 C0 */	lfs f1, 0x2c0(r31)
/* 802BEC28 002BBB68  C0 43 04 9C */	lfs f2, 0x49c(r3)
/* 802BEC2C 002BBB6C  C0 03 09 5C */	lfs f0, 0x95c(r3)
/* 802BEC30 002BBB70  EC 22 08 28 */	fsubs f1, f2, f1
/* 802BEC34 002BBB74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BEC38 002BBB78  40 81 00 BC */	ble lbl_802BECF4
/* 802BEC3C 002BBB7C  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802BEC40 002BBB80  C0 03 09 0C */	lfs f0, 0x90c(r3)
/* 802BEC44 002BBB84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BEC48 002BBB88  40 81 00 AC */	ble lbl_802BECF4
/* 802BEC4C 002BBB8C  7F E3 FB 78 */	mr r3, r31
/* 802BEC50 002BBB90  48 00 24 65 */	bl setShotGunEmitKeepTimerOff__Q34Game6Houdai3ObjFv
/* 802BEC54 002BBB94  7F E3 FB 78 */	mr r3, r31
/* 802BEC58 002BBB98  4B E4 86 89 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802BEC5C 002BBB9C  48 00 00 98 */	b lbl_802BECF4
lbl_802BEC60:
/* 802BEC60 002BBBA0  28 00 00 05 */	cmplwi r0, 5
/* 802BEC64 002BBBA4  40 82 00 30 */	bne lbl_802BEC94
/* 802BEC68 002BBBA8  38 00 00 00 */	li r0, 0
/* 802BEC6C 002BBBAC  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BEC70 002BBBB0  98 1F 02 ED */	stb r0, 0x2ed(r31)
/* 802BEC74 002BBBB4  7F E3 FB 78 */	mr r3, r31
/* 802BEC78 002BBBB8  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 802BEC7C 002BBBBC  4B E4 86 65 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802BEC80 002BBBC0  7F E3 FB 78 */	mr r3, r31
/* 802BEC84 002BBBC4  48 00 26 39 */	bl finishShotGunRotation__Q34Game6Houdai3ObjFv
/* 802BEC88 002BBBC8  7F E3 FB 78 */	mr r3, r31
/* 802BEC8C 002BBBCC  48 00 29 1D */	bl finishBossAttackLoopBGM__Q34Game6Houdai3ObjFv
/* 802BEC90 002BBBD0  48 00 00 64 */	b lbl_802BECF4
lbl_802BEC94:
/* 802BEC94 002BBBD4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802BEC98 002BBBD8  40 82 00 5C */	bne lbl_802BECF4
/* 802BEC9C 002BBBDC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802BECA0 002BBBE0  C0 02 E0 F0 */	lfs f0, lbl_8051C450@sda21(r2)
/* 802BECA4 002BBBE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802BECA8 002BBBE8  4C 40 13 82 */	cror 2, 0, 2
/* 802BECAC 002BBBEC  40 82 00 28 */	bne lbl_802BECD4
/* 802BECB0 002BBBF0  7F C3 F3 78 */	mr r3, r30
/* 802BECB4 002BBBF4  7F E4 FB 78 */	mr r4, r31
/* 802BECB8 002BBBF8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BECBC 002BBBFC  38 A0 00 00 */	li r5, 0
/* 802BECC0 002BBC00  38 C0 00 00 */	li r6, 0
/* 802BECC4 002BBC04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BECC8 002BBC08  7D 89 03 A6 */	mtctr r12
/* 802BECCC 002BBC0C  4E 80 04 21 */	bctrl 
/* 802BECD0 002BBC10  48 00 00 24 */	b lbl_802BECF4
lbl_802BECD4:
/* 802BECD4 002BBC14  7F C3 F3 78 */	mr r3, r30
/* 802BECD8 002BBC18  7F E4 FB 78 */	mr r4, r31
/* 802BECDC 002BBC1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802BECE0 002BBC20  38 A0 00 05 */	li r5, 5
/* 802BECE4 002BBC24  38 C0 00 00 */	li r6, 0
/* 802BECE8 002BBC28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802BECEC 002BBC2C  7D 89 03 A6 */	mtctr r12
/* 802BECF0 002BBC30  4E 80 04 21 */	bctrl 
lbl_802BECF4:
/* 802BECF4 002BBC34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BECF8 002BBC38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BECFC 002BBC3C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802BED00 002BBC40  7C 08 03 A6 */	mtlr r0
/* 802BED04 002BBC44  38 21 00 10 */	addi r1, r1, 0x10
/* 802BED08 002BBC48  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Houdai9StateShotFPQ24Game9EnemyBase
cleanup__Q34Game6Houdai9StateShotFPQ24Game9EnemyBase:
/* 802BED0C 002BBC4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802BED10 002BBC50  7C 08 02 A6 */	mflr r0
/* 802BED14 002BBC54  90 01 00 14 */	stw r0, 0x14(r1)
/* 802BED18 002BBC58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802BED1C 002BBC5C  7C 9F 23 78 */	mr r31, r4
/* 802BED20 002BBC60  7F E3 FB 78 */	mr r3, r31
/* 802BED24 002BBC64  48 00 21 F5 */	bl finishBlendMotion__Q34Game6Houdai3ObjFv
/* 802BED28 002BBC68  7F E3 FB 78 */	mr r3, r31
/* 802BED2C 002BBC6C  48 00 28 7D */	bl finishBossAttackLoopBGM__Q34Game6Houdai3ObjFv
/* 802BED30 002BBC70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802BED34 002BBC74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802BED38 002BBC78  7C 08 03 A6 */	mtlr r0
/* 802BED3C 002BBC7C  38 21 00 10 */	addi r1, r1, 0x10
/* 802BED40 002BBC80  4E 80 00 20 */	blr 

.global __sinit_HoudaiState_cpp
__sinit_HoudaiState_cpp:
/* 802BED44 002BBC84  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802BED48 002BBC88  38 00 FF FF */	li r0, -1
/* 802BED4C 002BBC8C  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802BED50 002BBC90  3C 60 80 4D */	lis r3, lbl_804D0C30@ha
/* 802BED54 002BBC94  90 0D 97 10 */	stw r0, lbl_80515D90@sda21(r13)
/* 802BED58 002BBC98  D4 03 0C 30 */	stfsu f0, lbl_804D0C30@l(r3)
/* 802BED5C 002BBC9C  D0 0D 97 14 */	stfs f0, lbl_80515D94@sda21(r13)
/* 802BED60 002BBCA0  D0 03 00 04 */	stfs f0, 4(r3)
/* 802BED64 002BBCA4  D0 03 00 08 */	stfs f0, 8(r3)
/* 802BED68 002BBCA8  4E 80 00 20 */	blr 
